# Image Repair — GIF / BMP / SVG / TIFF AnalysisData Walks (completing the classic-format set)

> Scope: resolution of `image-repair--state-machines.md` §7 open item #2 ("GIF/BMP/TIFF/SVG
> AnalysisData walks"). Every claim below is line-cited against
> `re-workspace/reversed/ghidra-repair/EUImgRepairFile_decompiled.c` (32-bit, 42,215 functions).
> Classes: `CBmpInfo`, `CGifInfo`, `CSvgInfo`, `CTiffInfo` (+`CTiffWork`, `CSvgWork`) — all
> `IImageInfo` subclasses with the dual-class Work/Info architecture (state-machines §1).
> Source-tree evidence recovered from trace strings: `D:\Fixo\01_Project\00_Source\_main\
> ImageRepair\ImageRepair\{bmp\bmp.cpp, svg\svgWork.cpp}` — the Fixo image-repair tree.

---

## 1. CBmpInfo — DIB-header validator with palette arithmetic

**Object model** (ctor @139834, class size 0x150 via Work-allocator `FUN_0076c466(0x150,…)`):
dual file mapping (+0xd handle / +0xe view, second pair +0x12/+0x13), progress byte @+10,
result-flags u16 @+0x15c/0x160 (width/height), tri-state check bytes +0x169/+0x16a/+0x16b.

### 1.1 The header parse (`FUN_004c4610`, BMP signature validator)

1. Reads the 14-byte `BITMAPFILEHEADER` from the mapped view: magic `*(u16+0x148) == 0x4d42`
   — **"BM"** byte-exact (line 140566); `bfOffBits`/`bfSize` read at view+0xE/+0x16.
2. **Endian portability**: when the big-endian flag @+5 is set the u32/u64 fields are
   manually byte-swapped (CONCAT dance, lines 140580–140640) — the parser accepts
   both byte orders of the same header (camera/forensic sources).
3. **DIB header-size taxonomy** (`FUN_004c4e10`, line 141238) — the validator accepts exactly:

   | biSize | Header | Meaning |
   |---|---|---|
   | 0x0C (12) | `BITMAPCOREHEADER` | OS/2 1.x |
   | 0x28 (40) | `BITMAPINFOHEADER` | Windows 3.x–default |
   | 0x6C (108) | `BITMAPV4HEADER` | NT 4/gamma |
   | 0x7C (124) | `BITMAPV5HEADER` | ICM profiled |

   Anything else → not a BMP DIB (return 0 → repair path). This is the complete classic
   DIB family — no other sizes accepted (verified single-point switch, default: 0).

4. **Palette-size arithmetic** (AnalysisData switch, lines 140595–140625): palette bytes =
   `2^bpp × 4` (RGBQUAD): bpp 1 → **8**, 4 → **0x40** (16×4), 8 → **0x400** (256×4);
   24/32 bpp → 0 (no palette). End-of-header offset = `palette_size + 0x1A`
   (0x1A = 14-byte file header + 12-byte CORE header base, line 140611).
5. Three structural sub-checks set repair-need flags:
   `FUN_004c4950` → flag @+0x169, `FUN_004c4b00` → @+0x16a, `FUN_004c4c80` → @+0x16b
   (lines 140615–140632). Any flag==1 → dimensions copied from parsed values, progress
   **0x32 (50%)**, header-fixer `FUN_004c52b0` invoked, "analysis data" trace.

### 1.2 Repair tiers

- `BasisRepair` (trace @140663, `bmp.cpp` **line 0xD0**): parse → tri-check → header fix.
- `SampleRepair` (trace @140749, `bmp.cpp` **line 0xEB**): strictly staged —
  `FUN_004c5d20` (header/magic salvage) → progress **0x14 (20%)** → `FUN_004c5db0`
  (file-header rebuild) → progress **0x32 (50%)** → `FUN_004c5fb0` (pixel-data phase).
  All three must return true (fail → el::base::Writer logs "SampleRepair fail", the
  easylogging+ pattern shared by all formats).
- Dispatch: `FUN_004c4060` — flag @+6 selects Basis vs Sample (`FUN_004c4100`/`FUN_004c4410`),
  final progress 100 with result count u16 @+0x17c, "save data" (9) trace.

## 2. CGifInfo — extent RB-tree frame rebuild

**Object model** (ctor @162137): dual mapping (+0xd/+0xe, +0x12/+0x13), repair flag @+0x29,
state byte @+0x180, dims @+0xcc/+0xce (filled from analysis @+0x18c/+0x18e), packed byte
@+0x190 (the GIF logical-screen descriptor packed field).

### 2.1 Signature (`FUN_004dc350`)

`size > 5` AND `*(u32) == 0x38464947` (**"GIF8"**) AND `*(u16+4) == 0x6139` ("9a") or
`0x6137` ("7a") — **GIF89a / GIF87a**, byte-exact (lines 162421–162422).

### 2.2 Repair entry (`FUN_004dd460`) — two modes

- **Sample mode** (`param_7 != 0`): copy analyzed dims (0x18c/0x18e → 0xcc/0xce) and read the
  logical-screen **packed byte**: `(byte >> 4) & 7` = color-resolution bits (GIF spec bits 6–4)
  → stored `+1` at @+0xc9 (the GCT size code). Return 1 — header-only reconstruction from
  cached analysis (lines 163322–163337).
- **Full mode**: state @+0x180 = 2 → progress "analysis data" (0xD) → `FUN_004dd9e0` worker.

### 2.3 The extent engine (`FUN_004dd520`) — the interesting part

GIF repair is **not** a linear LZW walk: it rebuilds the block stream from sorted extent
maps — `std::map`/RB-trees (`_Tree_unchecked_const_iterator<unsigned_int>`) at object
offsets +0x78, +0x80, +0x88, keyed by 64-bit `(u32,u32)` extent pairs (block start/end):

1. **Prologue** writes the header blocks: 6/7 (file header + logical screen) or 0xD
   (sample path), plus the global-color-table block whose size comes from the analyzed
   GCT-size field (`*(*(+0xa0)+0x18)`) — lines 163365–163380.
2. **Walk tree @+0x78** (verified block extents) writing each block type.
3. **Allocates a 0x18-byte descriptor node** with u16 flags `0x101` @+0xC — the sentinel
   that joins an image-descriptor block to its sub-block chain (identical node shape to
   CTiffWork's +0x13/+0x25 maps — see §4.2).
4. **Nested walk** (tree @+0x80 outer, tree @+0x88 inner): for every image-descriptor
   extent, searches the sub-block tree for a **matching (lo,hi) pair** (`local_18 == local_34
   && local_38 == local_40` + carry-extended compare, lines 163420–163450) and merges
   matched sub-block runs into the output; unmatched inner extents closer than the current
   best become new candidates (the `FUN_004ce5a0` / `FUN_004df1a0` insert helpers).
5. **Tail fixup**: if the accumulated output size (`local_20._4_4_`) is still below the
   target extent @+0x8c, walks the inner tree appending remaining blocks until closed.
6. Writes closing block (1) → `FUN_004de800` (final stream writer) → progress/100 path
   via the shared `FUN_004dd8c0` descriptor-copy (0x2C-byte struct with inline string).

**Reading**: GIF frame repair = *sorted-extent reassembly* — the same corruption-tolerant
model as the PNG chunk-bucket (state-machines §2) but keyed by numeric extent pairs instead
of 4-byte chunk names. Corrupted LZW data is not re-coded; salvaged block extents are
re-chained into a valid stream.

## 3. CSvgInfo / CSvgWork — text-envelope injection + render validation

**Object model** (ctor @416551, class size 0x298): flag @+5, progress @+8, work-object
pointer @+0x164, output strings @+0x130/+0x148, count u16 @+0x140.

### 3.1 Flow (`FUN_006091c0` = AnalysisData, `FUN_00609470` = repair driver)

1. Size sanity (`param_1 == 0x7fffffff` → abort), std::string from buffer, allocate the
   0x298 CSvgWork (`FUN_0076c466(0x298,…)`), run analysis `FUN_00609880` → result @+0x164.
2. Repair: progress **0x37 (55%)** → `FUN_00609d70` (scan) → `FUN_00609dc0`
   (`CSvgWork::CreateNewFile`, trace `svgWork.cpp` **line 0x42**) → shared descriptor copy →
   progress **100** "save data" (9) with count @+0x140.

### 3.2 The envelope-injection grammar (lines 421088–421150, byte-exact)

- `find("<?xml")` fails → **prepend** the canonical declaration:
  `<?xml version="1.0" encoding="UTF-8" standalone="no"?>` (0x36 bytes).
- `find("<svg")` (4 bytes @DAT_007f9e88) fails → **wrap** the salvaged inner content:
  prepend `<svg xmlns = "http://www.w3.org/2000/svg" version = "1.1">` (0x3A bytes),
  skip past any existing `<?xml …>` prolog (search for `>` @DAT_008099a8), append `</svg>`.
- `<svg` present → content kept as-is (full copy path).

### 3.3 Validation + atomic save (lines 421150–421200)

`FUN_005a01b0(temp, final)` = **render-validation gate** — the repaired file is validated
(probably via the SVG render check used by the preview stack); on failure `remove(temp)`;
on success `CopyFileW(final,1)` (fail-if-exists) + optional second `CopyFileW` for the
preview copy when flag @+0x14c is set. Progress **0x42 (66%)** → **0x4C (76%)** during the
save stages. **SVG repair = text-grammar reconstruct with validate-then-atomic-replace** —
no binary grammar, but the same tier philosophy (§4 of state-machines): fix the container,
salvage the content.

## 4. CTiffInfo / CTiffWork — endian arbitration + segment maps

**CTiffInfo** (ctor @398294, Work size 0x168): endian state i32 @+0x58 (−1 unknown / 0 II /
1 MM), two candidate IFD-list heads @+0x16c (II list) and @+0x174 (MM list), counters
@+0x170/@+0x178; `CTiffWork` (ctor @399573) carries the same 0x18/0x20-byte RB-tree node
family (u16 flags `0x101`) at +0x13/+0x25 — the segment-extent maps.

### 4.1 Endian auto-arbitration (`FUN_0052f930`) — the corrupt-TIFF heuristic

1. `+0x58 == 1` (MM proven) → rebuild the MM list (free 0x14-byte nodes, reset count) → 1.
2. `+0x58 == 0` (II proven) → same for the II list.
3. `+0x58 == -1` (magic unreadable) → **count both hypothesis lists** (`FUN_0052fa90` each)
   and **adopt the endianness with more valid IFDs** (`uVar6 ≤ uVar7` compare, lines
   234758–234790). A truncated/overwritten magic is recovered by voting on parseable
   structure — the deepest of the classic-format heuristics in this binary.

### 4.2 IFD0-offset tail scan (`FUN_005794c0`)

Reads the **last 4 bytes** (`view_end − 4`) as the IFD0 offset candidate; endian-swaps by
resolved byte order (+0x58); if the candidate is 0 or −1, **walks backwards in 4-byte
steps** from the tail probing for a valid IFD offset (lines 295040–295070) — corrupted
header offsets are re-derived from the file's end, where writers commonly leave the
last-resort pointer.

### 4.3 The HEAP sibling (Canon CRW/CIFF, lines 294940–295060)

The same cluster validates `0x50414548` (**"HEAP"**) four-cc with version-word consistency
(`0x1a` + block-length echo) after II/MM auto-swap — the Canon CIFF container checker,
sharing the TIFF endian machinery. Cross-link: `rawsearchdll--family-*` (RAW analysers).

### 4.4 Four-tier repair (from CTiffWork RTTI, refined)

`CreateFileByStructureSegments` (rebuild from salvaged IFD segments — consumes the RB-tree
maps) → `CreateSrcScanJpegFile` (extract embedded JPEG) → `ReplaceDataBySpInfo`
(strip-replacement by spatial info) → `W32ConvertToJpeg` (GDI+/WIC convert-what-works).
The tier order is the §2.3 GIF finding generalized: *re-chain salvaged extents first;
extract-then-convert only when the native container is beyond reassembly*.

## 5. Cross-format synthesis (the classic-format tier model)

| Format | Grammar unit | Salvage structure | Repair primitive | Progress |
|---|---|---|---|---|
| BMP | DIB header sizes 12/40/108/124 | header parse + 3 structural checks | header rebuild + palette arithmetic | 20/50 |
| GIF | block extents (64-bit pair keys) | 3 RB-trees of extents | sorted-extent re-chain | 50 |
| SVG | XML text markers | `<?xml`/`<svg` finds | envelope injection + render validate | 55/66/76 |
| TIFF | IFD entries (0x14-byte nodes) | II/MM candidate lists + tail scan | endian vote + segment rebuild | (tiered) |

All four share: easylogging+ failure traces ("BasisRepair fail"/"SampleRepair fail"),
the `FUN_0076c466(size, classdesc,…)` Work-allocator, the `FUN_004dd8c0` 0x2C-byte
descriptor-copy with inline string, and the `_MsgData` progress funnel back to the
EUImgRepair UI (state-machines §6 conventions). The GIF/TIFF RB-tree node shapes
(0x18/0x20 bytes, u16 flags 0x101) are **the same class template instantiated per format**
— one internal "extent map" component, three consumers.

## 6. Verification ledger

| Claim | Evidence (EUImgRepairFile_decompiled.c) |
|---|---|
| BMP magic 0x4d42 | line 140566 |
| DIB sizes 0xC/0x28/0x6C/0x7C | FUN_004c4e10 @141238 (switch, default 0) |
| Palette 8/0x40/0x400 | lines 140595–140610 |
| Palette offset +0x1A | line 140611 |
| bmp.cpp line numbers 0xD0/0xEB | traces @140663/@140749 |
| GIF magic GIF8/9a/7a | lines 162421–162422 |
| GIF packed-field (byte>>4)&7 +1 | lines 163322–163337 |
| GIF extent trees +0x78/80/88 | FUN_004dd520 @163309–163500 |
| GIF sentinel 0x101 nodes | lines 163408–163415, 163500+ |
| svgWork.cpp line 0x42 | trace @417000 (FUN_00609dc0) |
| SVG XML decl 0x36 bytes | line 421097 |
| SVG svg-wrapper 0x3A + `</svg>` | lines 421114/421143 |
| SVG validate + CopyFileW | lines 421150–421200 |
| TIFF II/MM magic values | lines 234698–234707 |
| Endian arbitration by IFD count | FUN_0052f930 @234713–234790 |
| TIFF tail backward scan | FUN_005794c0 @294990–295070 |
| HEAP (0x50414548) CIFF check | line 295050 |
| CTiffWork tree nodes 0x101 | ctor @399573+ |

## 7. Cross-links

- State-machines (PNG/WebP/HEIC reference + progress conventions): `image-repair--state-machines.md`
- Format census + Fixo build tree: `image-repair--format-grammar.md`
- RAW repair (CScanJepgInfo, embedded-JPEG salvage): state-machines §5
- Repair-chain master: `architecture/06-repair-chain.md`
- The extent-reassembly model family: `SearchDLL/rawsearchdll--zip-analyser-carving.md` §5
  (ZIP CD walk), `deepening-batch2--pdf-office-repair.md` (PDF xref walk)
