# Runtime Family: Media codec set (preview + repair)

**Pattern**: `^(libx265|de265|heif|GDIPLUS|avcodec|avformat|avutil|swres|swscale|postproc)\.dll$`  
**Shipped copies**: 9 across the tree  
**Role**: Decode support for preview and repair: HEVC/H.265 both ways, HEIF stills, ffmpeg family in VideoViewer (EUFileRepair copies: postproc-58 + libav family).

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/GDIPLUS.DLL`
- `BUILDPE/EaseUS-x64/de265.dll`
- `BUILDPE/EaseUS-x64/heif.dll`
- `BUILDPE/EaseUS-x64/libx265.dll`
- `EUFileRepair/heif.dll`
- `GDIPLUS.DLL`
- `de265.dll`
- `heif.dll`
- `libx265.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `DRWReport.exe`
- `DRWUI.exe`
- `EUImageEnhance.dll`
- `EUOfficeViewer.exe`
- `EURawImg.exe`
- `EuOfficeRepairWin32.exe`
- `EuUserRate.dll`
- `PDFViewer.exe`
- `heif.dll`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/DRWReport.exe`
- `BUILDPE/EaseUS-x64/DRWUI.exe`
- `BUILDPE/EaseUS-x64/EUImageEnhance.dll`
- `BUILDPE/EaseUS-x64/EUOfficeViewer.exe`
- `BUILDPE/EaseUS-x64/EURawImg.exe`
- `BUILDPE/EaseUS-x64/EuOfficeRepairWin32.exe`
- `BUILDPE/EaseUS-x64/PDFViewer.exe`
- `BUILDPE/EaseUS-x64/heif.dll`
- `EUFileRepair/EUImgRepairFile.exe`
- `VideoViewer/EaseUS_MediaGraph.dll`
- `VideoViewer/EaseUS_VideoViewer.exe`

## Family members

- libx265.dll — HEVC ENcoder (repair re-encode)
- de265.dll — HEVC decoder (preview)
- heif.dll — HEIF/HEIC image codec
- postproc-58.dll — ffmpeg postprocessing (repair)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
