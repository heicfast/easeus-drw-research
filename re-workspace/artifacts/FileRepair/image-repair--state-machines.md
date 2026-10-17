# Image Repair State Machines — PNG BasisRepair pipeline, Work/Info class duality, per-format stage maps

**Binary**: EUImgRepairFile.dll (829,490 lines Ghidra decompilation) — trace-string rich (Fixo build carries `__FUNCTION__` + `__FILE__` literals in EasyLogging++ el::base::Writer macros)
**Evidence**: `CPngInfo::BasisRepair` (decomp lines 225280–225560), progress-stamp + phase-call extraction across the full binary; method-trace census (`__thiscall C*::*` signatures)
**Role**: Closes the worklog open item "ImageRepair per-format AnalysisData case-by-case walks (PNG/WebP/HEIC state machines)" — the staged repair pipeline with exact progress percentages, phase names, and failure logs.

---

## 1. The dual-class architecture (verified from 31 classes)

Every format has TWO cooperating classes:

| Family | Class pattern | Responsibility | Examples (method counts) |
|---|---|---|---|
| **Info** (IImageInfo subclasses) | `C<Format>Info` | format analysis + repair orchestration: `BasisRepair()`, `SampleRepair()`, `AnalysisData(buf, len)`, `IsCompletionFile()` | `CPngInfo` (BasisRepair + SampleRepair), `CBmpInfo`, `CJxlOpInfo` (IsCompletionBoxInfo/GetCodestreamBasicInfo), `CScanJepgInfo` |
| **Work** (structure workers) | `C<Format>Work` | byte-level surgery: `CreateSrcFile()` (extract salvageable data), `CreateNewFile()` (rebuild valid container), `Check*Info()` (structural validation), `HandlerData()` | `CX3fWork` (SeciTypeFormatInfo ×12, CheckSeccSectionByDirInfo ×8, CreateNewFile ×6), `CMrwWork` (CheckRifBlockInfo ×7, CheckPrdBlockInfo ×7, CheckWbgBlockInfo ×5), `CCrwWork` (CheckKnownDirectoryEntry ×6, AnalysisDirInfo ×5) |

**Complete format census (31 classes, trace-verified)**: RAW vendors — C3frWork (SIGMA fp), CArwWork (Sony), CCr2Work/CCr3Work (Canon), CCrwWork (Canon CRW), CDngWork (Adobe DNG), CErfWork (Epson), CMrwWork (Minolta), CNefWork (Nikon; `CreateFileBySrcSegments` — segment-wise rebuild), COrfWork (Olympus, CheckDataInfo), CPefWork (Pentax), CRafWork (Fuji; IsBuildJpegExitInfo + HandlerData), CRawWork (panasonic generic), CRw2Work (Panasonic), CSr2Work/CSrfWork/CSrwWork (Sony variants), CX3fWork (Foveon; the richest: 6 distinct Check*Section methods), CGprWork (GoPro); modern — CHeicWork (+`CreateSrcFileByPsFile`), CJxlWork + CJxlOpInfo, CWebpWork, CAvifWork; classic — CBmpInfo, CPngInfo, CgifWork (AnalysisData), CTiffWork (`CreateFileByStructureSegments`, `CreateSrcScanJpegFile`, `ReplaceDataBySpInfo`, `W32ConvertToJpeg`), CSvgWork; helper — **CScanJepgInfo** (shared embedded-JPEG scanner).

## 2. CPngInfo::BasisRepair — the reference state machine (fully decoded)

Progress stamps are written via `LOCK(); *(this+0xA) = <percent>; UNLOCK()` + `FUN_004c3e00(percent, 0, 0, "analysis data", 0xD)` UI-report calls; failures log via EasyLogging++ (`el::base::Writer`, level 2) with exact source line (png.cpp:141 = 0x8D):

```
BasisRepair (basic repair path):
  20%  ScanCriticalChunks     FUN_00526ac0   fail → log "ScanCriticalChunks fail", abort
  30%  Scan* phase 2          FUN_00527110   (ancillary-chunk scan)
  50%  Scan* phase 3          FUN_005287a0
  80%  HandCriticalChunks     FUN_005278d0   fail → log "HandCriticalChunks fail"
        ↑ Scan* = analyze chunk stream; Hand* = rebuild/repair pass

Deep/sample-repair path (FUN_00525af0 entry — entered when BasisRepair declines):
  15%  phase 1                FUN_005272c0
  25%  HandCheckAnimationSampleInfo FUN_00528880  fail → "HandCheckAnimationSampleInfo fail"
        ↑ APNG (animated PNG) sample reconstruction — pairs with the
          "th.apng" strings (thumbnail of animated PNG, FUN_004c6b40 call sites)
  61%  phase                  FUN_00527d50
  85%  final phase            (progress 0x55)
```

**PNG algorithm summary** (stage names decoded): repair is chunk-grammar-driven — scan the critical-chunk sequence (IHDR/PLTE/IDAT/IEND order validity), scan ancillary chunks, then HAND (rebuild) the critical chunk stream; the sample path reconstructs animation frames for APNG files. `SampleRepair` (3 trace sites) is the second entry for photo-sample recovery.

## 3. WebP / HEIC / AVIF state machines

- **CWebpWork** — trace-visible method: `CreateNewFile` (rebuild of RIFF/WebP container from recovered VP8/VP8L/VP8X payloads). WebP repair is container-level: the RIFF frame is re-derived, chunk sizes recomputed (extends the same RIFF grammar RAWSearchDLL's `Brance::RIFFAnalyser` carves — one grammar family across scan and repair).
- **CHeicWork** — THREE build paths: `CreateNewFile` (full rebuild), `CreateSrcFile` (salvage), and **`CreateSrcFileByPsFile`** — HEIC repair can source pixel data from a companion Photoshop/PSD file (the Photoshop-linked HEIC editing workflow: when the HEIC box stream is broken but a rendered sibling exists, repair transplants). ISO-BMFF box grammar (`ftyp/meta/iinf/iloc/iprp/ipco/ipma/mdat`) matches the moov/mdat registry decoded for video repair (architecture/06) — shared ISO-BMFF engine across HEIC + MOV/MP4 repair.
- **CAvifWork** — ships but no trace-logged methods in this binary (repair path via ffmpeg.exe shell-out + `buildpitm/buildhdlr` atom reconstruction per the image-repair-grammar artifact).
- **CJxlWork + CJxlOpInfo** — JPEG XL: `IsCompletionFile`/`IsCompletionBoxInfo` (5 sites) + `GetCodestreamBasicInfo` — box-container validation + codestream (bare JXL stream) analysis. The most modern format in the set, with the cleanest completion-check separation.

## 4. TIFF — the multi-path repair (richest classic format)

`CTiffWork` methods: `CreateFileByStructureSegments` (rebuild from salvaged IFD segments), `CreateSrcScanJpegFile` (**extract the embedded JPEG scan** — TIFFs with JPEG compression/preview), `ReplaceDataBySpInfo` (strip-replacement by spatial info), `W32ConvertToJpeg` (**fallback: convert to JPEG via GDI+/WIC Win32 path** — when full TIFF repair is impossible, produce a JPEG rather than fail). This documents the "partial repair = extract what renders" product philosophy: repair tiers are (1) fix container, (2) rebuild from segments, (3) extract embedded JPEG, (4) convert-what-works.

## 5. The CScanJepgInfo shared scanner — cross-format salvage backbone

A dedicated class for scanning **embedded JPEG streams** inside RAW/DNG/TIFF containers (camera files embed full-resolution JPEG previews; CRW/DNG/RAF/TIFF all carry them — CRafWork::IsBuildJpegExitInfo confirms per-vendor JPEG-exit probing). When a RAW's proprietary image data is unrecoverable, the repair extracts the embedded JPEG — this is why "repair" of RAW files often yields a .jpg output. The scanner is shared infrastructure (single class, consumed by the RAW Work classes), not duplicated per vendor.

## 6. Progress-percent conventions (cross-format)

| Format | Path | Stages observed |
|---|---|---|
| PNG | BasisRepair | 20 / 30 / 50 / 80 % ("analysis data" → repair) |
| PNG | SampleRepair path | 15 / 25 / 61 / 85 % |
| others | single-path | progress stamps per Check*/Hand* method pair |

The `FUN_004c3e00(percent, 0, 0, "analysis data", 0xD)` call is the UI progress reporter (0xD = phase code); every stage transition is LOCK-protected (progress field at this+0xA is cross-thread visible — repair runs on a worker thread while the UI polls).

## 7. Remaining open items

> **Resolved**: "GIF/BMP/TIFF/SVG AnalysisData walks" — now fully decoded (byte-exact, line-cited)
> in `image-repair--gif-bmp-svg-tiff-walks.md` (DIB header taxonomy 12/40/108/124, GIF extent
> RB-tree re-chain, SVG envelope injection + render validation, TIFF endian arbitration by IFD
> count + tail backward scan). This section's other items remain open.

- WebP/AVIF stage-percent maps (no trace strings in this binary — the stages live in EUImgRepair.exe's orchestration, queued for its decompilation pass)
- Per-RAW-vendor Check* method field schemas (X3f's 6 Section checkers are the deepest — each needs a dedicated walk)
- CHeicWork::CreateSrcFileByPsFile exact transplant rules (PSD linkage contract)

## 8. Cross-links

- Format grammar + Fixo source tree: `FileRepair/image-repair--format-grammar.md` (37 files, 29 Info classes — this artifact adds the Work-class layer + state machines)
- ISO-BMFF box registry (shared with video repair): `architecture/06-repair-chain.md`
- Video repair two-scan algorithm: FileRepair video artifacts (movmp4repair)
- RAW-side scanning (vs repair): `SearchDLL/rawsearchdll--analyser-registry-census.md` (X3F/CRW/MRW analysers — the scan-side counterparts of these Work classes)
