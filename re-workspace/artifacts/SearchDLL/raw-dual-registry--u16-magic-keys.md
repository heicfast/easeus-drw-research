# RAWSearchDLL dual registry — u16 magic-key table + analyser ID assignments

> Extends `SearchDLL/raw-analyser-registry.md` (the u32 4CC magic table). This session
> decoded the SECOND registry keyed by the **first two magic bytes as a little-endian
> u16**, and the analyser numeric-ID assignments. Corpus:
> `RAWSearchDLL_decompiled.c` lines 2517-2918 (registry builder FUN_180004320).
> [CODE] with semantic decodings.

## 1. The two registries

The builder installs into ONE registry structure (FUN_18000ac20 = find-or-create node,
FUN_18000ac70 = append analyser to the node's chain), but with **two key families**:

1. **u32 4CC keys** (e.g. 0x31685A42 "BZh1", 0x494A5546 "FUJI") — documented in the
   v1 registry artifact;
2. **u16 first-2-bytes keys** (this artifact) — `local_60[0] = <u16>` immediately
   before each registration.

Both key families chain to the same `IRawFileAnalyser` implementations — the carve
dispatch tries the u16 magic-key first (cheap) then falls through to the 4CC table
and signature DB (raw_signs.json) [CODE for the two tables; dispatch order INFERRED].

## 2. The u16 key table (39 entries, decoded) [CODE]

| Key (u16 LE) | Bytes | Decoding |
|---|---|---|
| 0x2125 | `%!` | **PostScript/EPS** magic ("%!PS" / "%!PS-Adobe") |
| 0x4449 | `ID` | AIFF/IANA-family "ID"-led formats |
| 0x4D42 | `BM` | **BMP** ("BM" → FileBMPAnalyser) |
| 0x4D4D | `MM` | **TIFF big-endian** ("MM"; the "II" twin rides the 4CC table) |
| 0x534D | `MS` | **MS Money** MNY (CMDBAnalyser-family "Standard Jet DB" cousin) |
| 0x4C46 | `FL` | **FLV** ("FLV" — FileFLVAnalyser / Brance::FLVAnalyser) |
| 0x683C | `<h` | **HTML** lower-tag family |
| 0x483C | `<H` | **HTML** upper-tag family |
| 0x213C | `<!` | **HTML DOCTYPE/XML** family |
| 0x8B1F | `1F 8B` | **gzip** (RawSpeed::GZAnalyzer + FileGZAnalyser chain) |
| 0xFFF1 | MPEG sync | **AAC ADTS** (MPEG-2/4 audio transport — CADTSAnalyser) |
| 0xFFF2..0xFFFF | MPEG syncs | **MPEG audio layer family** (12 sync variants) |
| 0xFFE2..0xFFE7 | MPEG syncs | **MPEG Layer I/II + MPEG-2 variants** (6 codes) |
| 0xF9FF (63999) | 0xFF F9 | MPEG-2 audio extension sync variant |
| 0x0100 | 00 01 | structure-code entry (container magic beyond 2 bytes) |
| 0x0000 | — | default/fallback chain head |

*(Raw byte order in the binary is the u16 value; the "bytes" column shows the LE
memory order = on-disk byte order of the magic.)*

## 3. Analyser numeric IDs (the `*(u32*)(obj+1) = ID` assignments) [CODE]

Each analyser object carries a numeric format-ID at +4 (after the vftable qword):

| ID | Analyser class | Format |
|---|---|---|
| 0x0B | FileBMPAnalyser | BMP |
| 0x1B | BruteForce::CEPSAnalyser | EPS/PostScript |
| 0x1F | RawSpeed::GZAnalyzer / FileGZAnalyser | gzip |
| 0x19 | BruteForce::CDXFAnalyser | DXF (AutoCAD) |
| 0x27 | RawSpeed::CMDBAnalyser / FileMDBAnalyser | MS Access MDB |
| 0x28 | FileMNYAnalyser | MS Money |
| 0x2A | BruteForce::MovAnalyzer | QuickTime MOV |
| 0x2D | BruteForce::CADTSAnalyser | AAC ADTS |
| 0x5A | Brance::FLVAnalyser / FileFLVAnalyser | FLV |

The **developer-namespace attribution** continues from the v1 census:
`BruteForce::` (mass-format brute carvers), `RawSpeed::` (borrowed from the RawSpeed
camera library), `Brance::`, `@RawFormat_xjq` etc.

## 4. Registry mechanics [CODE]

```
node = FUN_18000ac20(registry, key_u16)      # find-or-create keyed node
FUN_18000ac70(registry, chain, position, node)   # append analyser to node's chain
```
- Analysers are allocated 0x20/0x38 bytes depending on family (IRawFileAnalyser base
  vftable first, then the concrete class vftable overwrite — the two-step vtable
  pattern is the C++ base-then-derived constructor inlining).
- The `0xFFFFFFFF` initial ID on every fresh analyser is the "unassigned" sentinel
  until the concrete ID lands.
- Chains allow multiple analysers per key (e.g. GZ pair: RawSpeed:: + File
  variants — one for header-validation carving, one for full validation) [chain
  semantics INFERRED from the pairs; the pair construction is CODE].

## 5. Cross-links

- v1 registry (u32 4CC table + fallback chains): `raw-analyser-registry.md`
- ZIP carving deep-dive: `rawsearch-carving--deep-dive.md`
- Analyser families: `SearchDLL/analyser-*` family artifacts
- raw_signs.json (extension signature DB): `config-files/` artifacts
- The MPEG/ADTS entries pair with the media repair chain
  (`architecture/06-repair-chain.md`) — carved audio/video feeds repair.

## 6. Confidence

100% [CODE] for the 39 keys, the ID assignments, the two-step vtable construction,
and the registry function pair. Key decodings (BM/MM/%!/1F8B/FFF1/FL/<h) verified
against known format magics; the AIFF/"ID" and 0x0100/0x0000 entries are
[INFERRED-partial] pending per-analyser reads.
