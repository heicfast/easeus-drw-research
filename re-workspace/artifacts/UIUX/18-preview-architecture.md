# UI/UX Artifact 18 — Preview Architecture: Complete Class System (Stub/MVC)

> Scope: the full preview subsystem class inventory and signal contracts (extends artifact 10).
> Evidence: vtable map (41 preview classes); signal census over preview-class methods; `PreviewMainDialog` (66 v-methods); RCC `Preview/` assets.

## 1. The class system (vtable-verified, 41 classes)

**Shell**: `PreviewMainDialog` (66) · `CPreviewMainShadowWnd` · `CPreviewShadowWnd` · `EmbeddedPreviewWindow`

**Controller/Model**: `CPreviewController` · `CPreviewModel` · `PreviewDataSource` (+`IPreviewDataSource`) · `IPreviewSink`

**Per-format stubs** (the plugin pattern — one stub per content family, all implementing `IPreviewStub`):
`MemPreviewStub` (in-memory) · `ImagePreviewStub` · `OfficePreviewStub` · `PdfPreviewStub` · `RtfTxtPreviewStub` (rich text) · `ArchivePreviewStub` · `AVPreviewStub` (audio/video)

**Windows**: `ImagePreviewWindow` · `VideoPreviewWnd` (has **`timeout()`** — the 15s free-tier timer) · `RichTextPreviewWindow` · `ArchivePreviewWindow` (+ `ArchivePreviewWindowChildItem`, `ArchivePreviewWorkItem`, `ArchivePreviewModel` (45), `ArchivePreviewView` (96), `ArchivePreviewDelegate` (23))

**Views**: `PreviewIconView` · `PreviewLoadingView` · `PreviewFailureView` (+`PreviewFailedWnd`) — the tri-state (loading/failure/content) pattern per preview

**Repair-integrated preview**: `CFileRepairPreviewCtl`(+`IFileRepairPreviewCtl`) · `FileRepairPreviewWnd` · `FileRepairImgPreviewItem` · `CPDFRepairPreview` · `CRepairPDFPreviewMgr/Label/Wnd` · `CRepairVideoPreviewLabel` · `RepairPreviewCompareWnd` (before/after) · `CVideoPreviewTipsWnd` · `CPreviewIconViewDelegate`

## 2. CPreviewController signal contract (decoded)

| Signal/Slot | Role |
|---|---|
| `onReceiveData(int, void*, int&)` | engine → controller data pump (same dispatch pattern as CDetailPage) |
| `actionTriggered(int)` | toolbar action routing (zoom/rotate/page) |
| `onDoSort(int,bool)` / `sigSort(int,bool)` | sort requests (archive listings) |
| `sigHighLightString(const QModelIndex&, QString&)` | search-term highlighting (by-reference string return) |
| `valueChanged(int)` | generic value fanout (page index, zoom level) |
| `doDispatchMessage(int, void*, int&)` | message pump |

## 3. Architecture synthesis

`PreviewMainDialog` hosts `EmbeddedPreviewWindow` + shadow chrome. `CPreviewController` receives engine data via `onReceiveData`, feeds `CPreviewModel`, which drives the active `IPreviewStub` (selected by file type). Each stub renders into its window family with tri-state views (Loading → Failure/Content). Large content streams through `PreviewDataSource`/`IInWindowStream`. The free-tier 15s video cap is a `QTimer` on `VideoPreviewWnd` (`timeout()`). Repair previews reuse the controller with compare mode (`RepairPreviewCompareWnd`) — the "before/after" repair UX.

Cross-links: artifact 10 (UX behavior), 12 (repair), 13 (dispatch patterns).
