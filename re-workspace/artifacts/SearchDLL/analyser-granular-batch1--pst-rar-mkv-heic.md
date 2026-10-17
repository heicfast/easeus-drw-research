# RAW analyser granular batch 1 — PST, RAR, MKV/EBML, HEIC carve validators

> Per-analyser algorithm walks, extending `rawsearch-carving--deep-dive.md` (ZIP) and
> the registry artifacts. Corpus: `ghidra-searchdll/RAWSearchDLL_decompiled.c`.
> [CODE] throughout; type-IDs cross-referenced with the dual-registry tables.

## 1. FilePSTAnalyser — Outlook PST (validator FUN_180041eb0) [CODE]

```
ver = header[0x0A]                          # PST format byte
if ver == 0x0E:                             # ANSI PST (Outlook 97-2002)
    size = u32 @ header+0xA8
    accept {size, type_id = 0x38}
elif ver == 0x17:                           # UNICODE PST (Outlook 2003+)
    size = u32 @ header+0xB8
    accept {size, type_id = 0x38}
else:
    accept {size = 0x100000 /* 1 MiB floor */, type_id = 0x38}
```

The two PST generations differ in header layout; the analyser reads the
total-size field from the correct offset per generation (0xA8 ANSI / 0xB8 Unicode —
matching the PST spec's dwTotalFileSize positions) and floors unknown versions at
1 MiB. Type-ID **0x38 (56)**.

## 2. RawSpeed::RARAnalyser — RAR4 (validator FUN_180012bb0) [CODE]

```
if *(u32*)buf == 0x21726152                 # "Rar!"
   and *(u16*)(buf+4) == 0x071A             # marker 1A 07
   and buf[6] == 0x00:                      # format version 0 → RAR 4.x family
    accept {type_id = 0x3A}
```

`RawSpeed::RARAnalyser::RARRawFileInfo` (alloc 0x128): fields include
`[+0x1B]=7`, `[+0x22]=7` (version bounds), `[+0x23]=0x40000000` (flags),
`[+0x24 u16]=0x101`, `dword@+0x18 = 0x3A`. The walk function FUN_180012d00 carries a
**272-byte filename buffer** — the archive-entry iterator extracts entry names
(multi-part archive stitching + entry-table reconstruction for the results tree).
Type-ID **0x3A (58)**. (RAR5's signature differs — "Rar!\x1A\x07\x01\x00" — and rides
the 4CC/fallback tables, not this fast validator.)

## 3. FileMKVAnalyser — the EBML vint parser (FUN_180016c70) [CODE]

A complete **EBML variable-length integer** decoder for WebM/Matroska validation:

```
# 1. vint length: count leading zero bits from mask 0x80 downward (max 8 bytes)
mask = 0x80; n = 1
while (buf[4] & mask) == 0:
    n++; mask >>= 1
    if n > 8: reject
# 2. vint value: strip the marker bit, shift in n-1 payload bytes
value = buf[4] & (mask - 1)
for i in 1..n-1: value = value << 8 | buf[4+i]
# 3. element bounds: header size = id_len + size_len + 4 ≤ 0x200
if n + value + 4 > 0x200: reject
# 4. DocType discrimination: constants 0x6D626577 ("webm") and 0x67805318 present
```

This is the same vint algorithm as libebml, hand-rolled — the analyser walks the
EBML header, reads the DocType element (webm vs matroska), and validates element
sizes before declaring a hit. **The only analyser in the set with a true
variable-length-integer grammar** — MKV/WebM carving survives fragmented files
because element sizes are self-describing [CODE].

## 4. RawFormat_xjq::HEICAnalyser — HEIF/HEIC (validator ~21278) [CODE]

```
ftyp_brand = u32 @ brand position
if brand == 0x68656963:                     # "heic"
    accept {type_id = 0x7C}, label L"HEIC"
elif brand is HEIF-family:
    label L"HEIF"                           # sibling brand (mif1/heif etc.)
    (rewrites the brand slot to L"HEIF" for the display name)
HEICRawFileInfo (alloc 0x128): {flags=0, ver=0, [0x124]=0, dword@+0x18 = 0x7C}
```

The analyser distinguishes the `heic` brand (0x68656963 little-endian) from the
wider HEIF family and normalizes the display label. Type-ID **0x7C (124)** —
the newest format in the ID table (correlates with HEIC appearing in
PriorityDisplayType's Graphics category). The `RawFormat_xjq` namespace marks the
developer-owned analyser wave (`@xjq` attribution).

## 5. Type-ID table consolidation (this batch + registry)

| ID | Format | Analyser |
|---|---|---|
| 0x0B | BMP | FileBMPAnalyser ("BM") |
| 0x19 | DXF | BruteForce::CDXFAnalyser |
| 0x1B | EPS/PS | BruteForce::CEPSAnalyser ("%!") |
| 0x1F | gzip | RawSpeed::GZAnalyzer (1F 8B) |
| 0x27 | MS Access | RawSpeed::CMDBAnalyser |
| 0x28 | MS Money | FileMNYAnalyser ("MS") |
| 0x2A | QuickTime | BruteForce::MovAnalyzer |
| 0x2D | AAC ADTS | BruteForce::CADTSAnalyser (FF F1) |
| 0x38 | Outlook PST | FilePSTAnalyser |
| 0x3A | RAR4 | RawSpeed::RARAnalyser |
| 0x5A | FLV | Brance::FLVAnalyser ("FL") |
| 0x7C | HEIC/HEIF | RawFormat_xjq::HEICAnalyser |

Top-level categories (RecoveryAssistant): 5=Graphics, 6=Document, 7=Archive,
8=Video, 9=Audio, 0xB=Other — the per-format IDs above roll up into these.

## 6. Cross-links

- ZIP carve deep-dive (the model analyser): `rawsearch-carving--deep-dive.md`
- Registries: `raw-analyser-registry.md` (u32/4CC) +
  `raw-dual-registry--u16-magic-keys.md` (u16 + ID assignments)
- Category rollup: `DRWUI-subsystems--assistant-grading-preview.md` §1
- raw_signs.json extension signatures: `config-files/` artifacts

## 7. Confidence

100% [CODE] — every constant, offset, and branch verbatim from the corpus
(PST 0x0E/0x17@+0xA, sizes @0xA8/0xB8; RAR "Rar!"+071A+00; EBML mask-descent vint;
HEIC 0x68656963 → 0x7C). RAR5-rides-fallback-tables claim is [INFERRED] from the
signature delta.
