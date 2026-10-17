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

## 11. Confidence

Format matrix, source tree, class names, log census counts, JXL event constants, JPEG
skeleton bytes (FFD8/FF01/D9), LibRaw exports, ffmpeg AVIF path, window-IPC names, and
registry keys are byte-exact from decompilation/strings. Algorithm semantics (repair
splicing order, exact scan-reassembly heuristics) are evidenced by trace strings and
control flow but the complete per-format grammar walk (marker-by-marker state machines
for PNG/WebP/GIF/BMP/TIFF/HEIC) is summarized at the structural level; a future session
can walk each `AnalysisData` case-by-case the way §4 does for JPEG.
