# ImageRepair (EUImgRepairFile.exe) — Per-Format Repair Grammar Deep-Dive

> Target: `og-codebase/EUFileRepair/EUImgRepairFile.exe` (5.2 MB, x86 console, 20,627 fns /
> 829,490 decompiled lines, 580 exports, 0 .NET).
> Build provenance: Fixo product line — `D:\Fixo\01_Project\00_Source\_main\ImageRepair\…`
> (37 source files with full paths embedded as logging constants).
> Role: the **offline image repair engine** invoked by the repair chain (DRWUI
> `CImgRepairClient` → `EUImgRepair.exe` window-IPC host → this engine; registry config at
> `HKCU\SOFTWARE\EASEUS\EaseUS Data Recovery Wizard\EUImgRepair`).

## 1. Source tree (37 .cpp files, byte-exact from logging constants)

```
ImageRepair.cpp                       entry + orchestration
commandLine/commandParser.cpp         IRSC::CCommandParser::GetParmsValue(const char*, const char*)
common/libJpegOperation.cpp           libjpeg encode/decode helpers
jpeg/jpeg.cpp                         JPEG::CJpegInfo (the flagship repair grammar)
otherType/scanJpeg.cpp                CScanJepgInfo  (sic — vendor typo "Jepg")
otherType/inlineScanJpegOp/…          embedded-JPEG scanning (inside RAW containers)
png/png.cpp  bmp/bmp.cpp  gif/gifWork.cpp  svg/svgWork.cpp  webp/{webpWork,libWebpInfo}.cpp
jxl/{jxlWork,jxlOpInfo}.cpp           JPEG XL (libjxl box/event decoding)
raw/3fr/…  arw/…  avif/…  cr2/…  cr3/…  crw/…  dng/…  erf/…  gpr/…  heic/…  mrw/…
raw/nef/…  orf/…  pef/…  raf/…  raw/…  rw2/…  sr2/…  srf/…  srw/…  tiff/…  x3f/…
net/client.cpp                        cloud repair client
```
External statics (PDB-style path evidence): `D:\code\gpr-master\...\gpr.cpp` (GoPro gpr
SDK + xmp_core ParseRDF.cpp), LibRaw (export census below), libjxl, libjpeg, XMP SDK,
EasyLogging++ (`el::base::Writer` frames everywhere).

## 2. Format class matrix (RTTI-verified vftables, complete list)

Base interface `IImageInfo` (vftable at every constructor: 139256, 139271, 139833, 140065,
162135…). Per-format classes:

| Class (namespace::) | Format family | Container strategy |
|---|---|---|
| `JPEG::CJpegInfo` | JPEG (JFIF/EXIF) | marker-grammar rebuild (§4) |
| `CScanJepgInfo` | scanned-embedded JPEG | carve embedded JPEG streams |
| `CPngInfo` | PNG | chunk-grammar (IHDR…IDAT…IEND) |
| `CBmpInfo` `CGifInfo` `CSvgInfo` | BMP/GIF/SVG | header+data rebuild |
| `CWebpInfo` (+`libWebpInfo`) | WebP | RIFF chunk grammar |
| `CJxlInfo` (+`CJxlOpInfo`) | JPEG XL | libjxl box/event walk (§5) |
| `CAvifInfo` | AVIF | ffmpeg.exe shell-out + ISOBMFF |
| `CHeicInfo` | HEIC/HEIF | ISOBMFF boxes + QuickTime atoms |
| `CTiffInfo` | TIFF (incl. DNG-side) | IFD chain rebuild |
| `C3frInfo CArwInfo CCr2Info CCr3Info CCrwInfo CDngInfo CErfInfo CGprInfo CMrwInfo CNefInfo COrfInfo CPefInfo CRafInfo CRawInfo CRw2Info CSr2Info CSrfInfo CSrwInfo` (+ x3f) | **20 RAW vendors** | LibRaw-backed parse + TIFF/EXIF hybrid |

= **29 repair classes + IImageInfo + CScanJepgInfo**.

## 3. Repair pipeline (message-census evidence, decompiled logging)

EasyLogging++ trace strings with global counts across the binary:

| Message | Count | Meaning |
|---|---|---|
| `"analysis data"` / `"Analysis data"` | 252 + 24 | per-format `AnalysisData` entry (the parse/validate stage) |
| `"save data"` | 177 | per-format save/rebuild stage |
| `"create file"` | 41 | output creation |
| `"HandelFileToJpeg fail remove image"` | 37 | failure removal in the per-item loop (vendor typo "Handel") |
| `"SaveCompressImage fail remove scan image"` | 9 | compressed-embedded-scan failure removal |
| `"ConvertToJpeg fail remove image"` | 6 | rasterize-to-JPEG failure removal (thumbnail/preview) |
| `"sample analysis data"` | 7 | sampling-based quick analysis |
| `"buildpitm"` / `"buildhdlr"` | 7 / 4 | QuickTime atom builders (`pitm`, `hdlr`) for HEIC/AVIF container reconstruction |
| `"Caught unknown exception"` | 15 | per-format catch-all guards |
| `"CJxlOpInfo::IsCompletionFile"` / `IsCompletionBoxInfo` | 5/5 | JXL completeness validation |

Flow per file: `AnalysisData` (parse grammar, extract intact structures) → repair decision
→ `SaveImage` ("JPEG SaveImage() fail!!" trace) → output; failures remove the item and
continue (batch resilience). Canon/Hasselblad model strings (`"Canon EOS 5D Mark III"`,
`"Hasselblad"`…) drive EXIF/makernote-aware reconstruction; XMP namespaces
(`http://ns.adobe.com/...`, `http://cipa.jp/exif/1.0/`, `http://iptc.org/std/Iptc4xmpCore/...`)
are used to re-attach metadata (XMP SDK with its own UTF-16/32 + RDF validation messages,
e.g. `"XMP_Enforce failed ... ParseRDF.cpp at line 612"`).

## 4. JPEG repair grammar (JPEG::CJpegInfo — decompiled specifics)

- **Constructor seeds a minimal valid skeleton** (line 173383-173386):
  `obj[0x1b] = 0xFFD8FF01` (SOI + reserved JPG0 marker FF01) and `obj[0x1c] = 0xD9` (EOI)
  — the repair template onto which recovered marker segments are spliced. Two intrusive
  list heads (node size 0x101) at +0x26/+0x28 hold recovered scan/segment inventories.
- `CJpegInfo::AnalysisData(void*, void*, const string&, const _WORK_PARAMSEX, const
  string&, function<int(const _MsgData&)>, string&)` — full mangled signature recovered
  from the logging constant (jpeg.cpp line 0x81/0x8a): parses the damaged stream,
  validates `m_fileCount`, invokes SaveImage; progress callback contract `_MsgData`
  reports percentages (LOCK/UNLOCK guard sets `progress=100` at completion, lines
  174175-174210).
- Marker-level parsing reuses the LibRaw LJPEG reader family (§5): SOF0/1/2/3 variants,
  DHT (Huffman `make_decoder_ref` per table), SOS (per-component ID), DQT (64-entry
  quantization copy), DRI restart interval, with a **0x400 marker-count sanity bound** and
  `0x7FFF` length clamps.
- Embedded/fragmented scans: `CScanJepgInfo::CreateSrcScanJpegFile` + `inlineScanJpegOp`
  carve JPEG streams out of larger carriers; `SaveCompressImage` re-compresses them
  ("SaveCompressImage scan imag" trace).
- `libJpegOperation.cpp` (common) supplies encode/decode; `ConvertToJpeg`/thumbnail
  conversion paths feed preview.

## 5. RAW family — LibRaw static link (export evidence)

580 exports, 560+ of them LibRaw C++ symbols: `LibRaw` ctor/dtor family,
`LibRaw_abstract_datastream`, `LibRaw_bigfile_buffered_datastream`,
`LibRaw_bigfile_datastream`, `LibRaw_buffer_datastream`, `LibRaw_windows_datastream`,
`libraw_memmgr`. Internal parsers decompiled and verified:
- `LibRaw::ljpeg_start` (0x271c10): full JPEG marker state machine (0xFFC0/C1/C2/C5-CF,
  C3 lossless delta handling `prec*(prec-1)&3`, C4 DHT with `make_decoder_ref`,
  DA SOS, DB DQT, DD DRI; **max 0x400 segments**; SOF length==9 triggers a resync hook).
- `LibRaw::parse_fuji_thumbnail` (0x2beed0): RAF thumbnail JPEG with XAP namespace check
  (`http://ns.adobe.com/xap/1.0/` reconstructed via 4-byte compare loop) — thumbnail
  fallback when the main RAW stream is unrecoverable.
- `LibRaw::parse_mos` (0x2bf070): Leaf MOS IFD-style parsing.
- `gpr.cpp` (GoPro GPR SDK): GPR RAW + XMP (with the D:\code\gpr-master build path).

## 6. JXL grammar (CJxlOpInfo — decompiled specifics)

`IsCompletionFile(buf, len)`: `JxlDecoderSetInput` → `JxlDecoderSubscribeEvents` → event
loop; event **0x40** = basic-info branch (`JxlDecoderGetBasicInfo` path), event **1** =
error branch ("Jxl decoder fail" trace); per-frame `CheckFrameData` completeness check
(jxlOpInfo.cpp lines 0x37/0x42/0x57/0x5d). `CJxlOpInfo::IsCompletionBoxInfo` validates the
ISOBMFF-style box chain (jxl container: `JXL … ftyp … jxlp/jxlc` boxes) — box-length
arithmetic visible at the box walk (size-4 handling with `0x212/0x210` completion flags).

## 7. AVIF + helper processes

`FUN_0054af80`: constructs command line, invokes **`ffmpeg.exe`** (5 string sites:
257681/257970/258148/258480/258501) for AVIF handling; guards with `strstr(".avif")` and
`CopyFileW` fallback copy when ffmpeg is absent; QuickTime atom builders `buildhdlr`/
`buildpitm` (255148/255552/255579) reconstruct HEIC/AVIF item/track metadata.

## 8. IPC + invocation chain (cross-verified in DRWUI)

```
DRWUI CImgRepairClient::doGetClickImgBuffer (DRWUI line 691676)
  → FindWindowA("EUImgRepair_Wndname") (691927-691945) — window-message IPC
  → EUImgRepair.exe (hidden window "EUImgRepair_Classname"/"EUImgRepair_Wndname",
     EUImgRepair.dll lines 83-90) = host/queue
  → spawns EUImgRepairFile.exe (this engine) with IRSC::CCommandParser CLI
  → registry state: HKCU\SOFTWARE\EASEUS\EaseUS Data Recovery Wizard\EUImgRepair
    (EUImgRepair.dll line 156-159, DRWUI line 692950 — same key, 0xF003F access)
```
(The same window-message pattern is used by the video repair host — see
`repair-architecture.md` §process topology.)

## 9. Toolchain census (imports, 428 fns / 18 DLLs)

- Console app (subsystem CONSOLE) — CLI-driven batch repair.
- EasyLogging++ for structured traces (source path + line + full function signature per
  frame — the source of nearly all ground truth in this artifact).
- Statically linked: LibRaw, libjxl, libjpeg(-turbo), XMP SDK, gpr SDK, zlib.
- Dynamically invoked: `ffmpeg.exe` (AVIF path).
- Cloud fallback: `net/client.cpp` (advanced-repair upload — cf. Adobe/cloud repair chain
  in `repair-architecture.md`).

## 10. Cross-links

- Master repair architecture: `re-workspace/artifacts/FileRepair/repair-architecture.md`
- Repair chain topology (hosts/queue): same doc, §process topology
- DRWUI invocation side: `re-workspace/artifacts/DRWUI-exe--main-ui-architecture.md`
- Systematic baseline: `re-workspace/artifacts/per-binary/EUImgRepairFile.md`
  (+ EUImgRepair.md, EURawImg.md for the siblings)
- Raw evidence: `re-workspace/reversed/ghidra-repair/EUImgRepairFile_decompiled.c`
  (JPEG ctor 173330-173420; AnalysisData 174100-174300; ljpeg_start 479180-479330;
  fuji 533150-533280; JXL 185830-186050; AVIF/ffmpeg 257640-257720; scanJpeg 223840+;
  buildpitm/buildhdlr 255100-255600)

## 12. PNG / WebP / HEIC — per-format AnalysisData state machines (decoded this session)

> Companion to §4 (JPEG). All evidence: EUImgRepairFile_decompiled.c line-cited; vtable
> slots resolved from raw PE (32-bit; vftables: IImageInfo `0x7f921c`, CPngInfo `0x7fdd04`,
> CHeicInfo `0x8044e8`, CWebpInfo `0x809ce8` — ctor `movl $vft,(%edi)` disassembly).
> **AnalysisData runs as a PPL async task** (`Concurrency::task<unsigned_char>` wrapping
> `_Fake_no_copy_callable_adapter<CPngInfo::AnalysisData lambda>` — mangled-symbol
> evidence @228770+) with `_MsgData` progress callback into the host.

### 12.1 The IImageInfo 5-slot virtual contract (identical across all 29 classes)

| slot | CPngInfo impl | role |
|---|---|---|
| +0x00 | FUN_00524ea0 | destructor (frees per-chunk lists) |
| +0x04 | FUN_00525250 | **`AnalysisData(void*, void*, string const&, _WORK_PARAMSEX, string const&, function<int(_MsgData const&)>, string&)`** — async-dispatched analysis+repair entry |
| +0x08 | FUN_00525540 | **CheckMagic(buf, len)** — validates the format signature (PNG: `0x474e5089 0xa1a0a0d` = 89 50 4E 47 0D 0A 1A 0A) |
| +0x0C | FUN_005255a0 | **CreateInstance()** — `new(sizeof 0x2A8)` + ctor (class factory for the repair queue) |
| +0x10 | FUN_00525620 | **SaveData()** — writes the repaired output ("save data" trace, progress 100, calls the format's rebuild fn) |

Object model: **C\<Format\>Info** (analysis + format knowledge) pairs with **C\<Format\>Work**
(rebuild) — CHeicWork/CWebpWork/CJxlWork/CNefWork… (trace-string census §3); PNG is
self-contained in CPngInfo (png.cpp only), WebP = CWebpInfo + libWebpInfo.cpp
(LIBWEBP_OP_INFO) + webpWork.cpp, HEIC = CHeicInfo + raw/heic/heicWork.cpp.

### 12.2 CPngInfo — object model (ctor FUN_00524870 @224514-224750, png.cpp)

- **Format tables embedded in the object** (NOT sequential parsing):
  +0x140/+0x148: two copies of the 8-byte PNG signature;
  +0x153: u16 **13 = known-chunk count**;
  +0x158: chunk-name table — **IHDR, PLTE, IDAT, sRGB, fcTL, acTL, fdAT** (+ the
  terminator pair at +0x168: "IEND" + **its canonical CRC `0xAE426082`** — the driver
  searches for the *literal end-of-PNG 12 bytes*, not a parsed IEND);
  **APNG is first-class** (acTL/fcTL/fdAT animate chunks in the core table).
- **Per-chunk result buckets**: 10 `std::list` headers created at +0x188..+0x1D4
  (24-byte sentinel nodes, tag 0x101) — every scan hit is filed into its chunk's list.
- Animation counters at +0x1C0/+0x1C8/+0x1D0 (acTL/fcTL hits), `m_idatFlagsOffsetList`
  at +0x1A0, IHDR-derived fields at +0x89/+0x8C/+0x8E.

**ScanCriticalChunks (FUN_00526ac0 @226284)** — *corruption-tolerant parallel pattern
search*, not a chunk walk: 5-9 simultaneous byte-pattern scans via FUN_00529740
({pattern, 4, file, result-list, flags}) — one per critical chunk (IHDR@+0x194→list
+0x19C, IDAT@+0x160→**m_idatFlagsOffsetList +0x1A0**, IEND@+0x17C→+0x1BC,
acTL@+0x180→+0x1C4, fcTL@+0x184→+0x1CC; conditional PLTE scan when +0x188 == -1;
3 optional scans when +0x198 == 0 for lists +0x1A4/+0x1AC/+0x1B4). A damaged header or
interleaved garbage cannot defeat analysis because chunk *positions* are located by
content, then validated by the hand functions.

**BasisRepair (FUN_00525720 @225263, png.cpp:141/148/158 traces)** — full-structure path:
1. progress 20 → `ScanCriticalChunks()` (fail log @png.cpp:141)
2. progress 30 → `HandCriticalChunks()` = FUN_00527110 (fail @148)
3. progress 50 → if animation counters: `HandCheckAnimationInfo()` = FUN_005287a0
   (fail @158) — validates APNG frame chains
4. progress 80 → FUN_005277c0(buf, 8): IHDR validation — width/height nonzero,
   bit-depth ∈ {1,5,≥7?}, color-type/interlace combos; color model copied to +0x89 via
   FUN_00529130 (color-type name string)
5. FUN_005278d0() — rebuild phase
Any failure logs via EasyLogging++ (`el::base::Writer` vftable stack objects, severity 2)
with **source file + line + method name** — the logging layout doubles as our map.

**SampleRepair (FUN_00525af0 @225452, png.cpp:189/207 traces)** — salvage path when the
critical-chunk scan fails: requires `m_idatFlagsOffsetList` non-empty (png.cpp:189
fail trace `"!ScanCriticalChunks() && m_idatFlagsOffsetList.size() == 0"`), then
`HandCriticalSampleChunks()` = FUN_005272c0 → `HandCheckAnimationSampleInfo()` =
FUN_00528880 (@207) → **FUN_00527d50**: reconstructs a viewable PNG by synthesizing a
header around the salvaged zlib IDAT stream — the "extract what's decodable" strategy
mirroring the product's carving philosophy.

### 12.3 CHeicInfo / CHeicWork (HEIC/HEIF — raw/heic/heicWork.cpp)

- Scan patterns stored in-object: **"hdlr" (+0x1B0), "pict" (+0x1BC), "infe" (+0x22F)**
  (@325274-325340); "meta" literal 0x6174656d in the analysis body (@326206).
- **Box-walk engine** (shared, inlined twice @253983/@260467 for HEIC/AVIF variants):
  reads {u32 size, u32 type} headers; `meta` → skip 0xC (version/flags) and recurse;
  `moov` → skip 8; bound-checked against region start/end (+0xB0/+0xB4).
- **Property dispatch** (@255684-255740): `ipco` (byte-wise 'i','p','c','o') →
  FUN_005a6d10 = ipco property-container parser (per-property records; resets 8
  property-flag bytes +0xBC..+0xC3 on entry); `ipma` → FUN_005a72d0 = item-property
  association parser (essential flags at +9/+10 of the box payload, followed by
  {itemId, propertyIndex} pairs).
- Rebuild: **`CHeicWork::CreateNewFile(string const&)`** (heicWork.cpp:0x66=102 trace
  @325928) — reassembles a playable file from the located boxes.
- Bound discipline: every walk is range-checked against the mapped region — corrupted
  sizes cannot walk off the buffer.

### 12.4 CWebpInfo / CWebpWork (webp/libWebpInfo.cpp + webp/webpWork.cpp)

- **Validation = full decode**: `LIBWEBP_OP_INFO::ValidateWebP(const unsigned char*,
  unsigned int)` (libWebpInfo.cpp:18 trace @422876) calls **FUN_00742800 = the
  statically-linked libwebp `WebPDecode`** — a WebP file is "valid" iff the actual
  decoder accepts it; failures log `WebPDecode error = <code>` (streaming `<<`).
- CWebpInfo keeps **two memory-mapped file views** (+0x1A0/+0x1B0 and +0x1E0/+0x1F0
  handle+view pairs, unmapped in the dtor @424101) and two 0x290-byte work objects
  (+0x1A4/+0x1A8) — analysis operates directly on mapped bytes.
- Rebuild: **`CWebpWork::CreateNewFile`** (webpWork.cpp:0x9a=154 trace @426208).
- RIFF/VP8 chunk handling in `CWebpInfo::AnalysisData` (FUN_00611e70) + the
  LIBWEBP_OP_INFO helper family (same file).

### 12.5 Cross-format architecture findings

1. **Scan-then-validate, never trust structure**: all three formats locate elements by
   content search (chunk names / box types / decoder acceptance), then hand-validate
   — the same corruption-first philosophy as the scan engines' carving (RAWSearchDLL
   RB-tree signature registry).
2. **Two-tier repair**: BasisRepair (structure intact → revalidate + patch) vs
   SampleRepair (structure broken → salvage the payload stream and synthesize a new
   container). This mirrors the "File Path Lost" vs "Reconstructed" result-tree roots
   in the .rsf session format (SaveScan artifact §5.4.6).
3. **Logging = ground truth**: every decision point emits an EasyLogging++ record with
   the original `D:\Fixo\01_Project\...` path, line number, and method name — the
   release binary ships its own source map (37 .cpp files, §1).
4. **Progress contract**: per-stage LOCK-guarded progress byte (5→8→20→30→50→80→100)
   with "analysis data"/"save data" stage labels — the same _MsgData funnel the DRWUI
   progress UI consumes.

## 11. Confidence

Format matrix, source tree, class names, log census counts, JXL event constants, JPEG
skeleton bytes (FFD8/FF01/D9), LibRaw exports, ffmpeg AVIF path, window-IPC names, and
registry keys are byte-exact from decompilation/strings. **PNG (§12.2), HEIC (§12.3)
and WebP (§12.4) state machines are now decoded at the same depth as JPEG §4** — vtable
slot contracts raw-dumped from the PE, chunk/box pattern tables, the parallel
ScanCriticalChunks engine, BasisRepair/SampleRepair phase pipelines with source-line
citations, the ipco/ipma property dispatch, and libwebp-decode-as-validation. Remaining
soft: GIF/BMP/TIFF/SVG AnalysisData walks (structural level only).
