# UI/UX Artifact 10 — Preview Subsystem Deep Dive

> Scope: the preview experience — every previewer type, its limits, states and streaming internals.
> Evidence: class map §7; RCC `Preview/` (340 assets incl. `preview_ico_zoomin/zoomout/hand.cur`); QM strings (20+ preview-related); `PreviewMainDialog` (66 v-methods); per-type window families with Model/View/Delegate/Stub; `IInWindowStream` interface; preview viewers for office/PDF/HWP are separate processes (EUOfficeViewer/PDFViewer/EUHwpViewer — out of core scope, noted for completeness).

## 1. Preview shell architecture

`PreviewMainDialog` (66 v-methods — largest dialog vtable) + `CPreviewMainShadowWnd`/`CPreviewShadowWnd` chrome + `EmbeddedPreviewWindow` host. Entry: double-click/`Click_Preview` on a result row → `CPreviewController`/`CPreviewModel` resolve the previewer by file type → per-type window embeds. The shell carries the "Recover" CTA directly (tr string) so users can recover without leaving preview.

## 2. Per-type previewers (all vtable-verified)

| Type | Window (v-Methods) | Stack | Notes |
|---|---|---|---|
| Images | `ImagePreviewWindow` (54) | +Model/View/Delegate/Stub | zoom in/out, pan (custom CURSORS `preview_ico_zoomin/zoomout/hand`), EXIF from Tags-Extracted branch |
| Video | `VideoPreviewWnd` (57) + `AVPreviewStub` (20) | +Tips wnd | **free-tier limit: "15s preview only"**; `CVideoPreviewTipsWnd` explains limits |
| Rich text / docs | `RichTextPreviewWindow` (54) | +Model/View/Delegate/Stub | embedded rendering; office types hand off to `EUOfficeViewer.exe` |
| Archives | `ArchivePreviewWindow` (54) + `ArchivePreviewWindowChildItem`/`WorkItem`, `ArchivePreviewModel` (45)/`View` (96)/`Delegate` (23)/`Stub` (20) | full MVC | browse-inside-archive of damaged zips (pairs with EUArchiveRepair) |
| PDF | raster path via `CPDFRepairGetPixmapThread` | thread | page-by-page pixmap for `Preview %1 (%2/%3)` paging |
| Failure | `PreviewFailedWnd` (53) | — | "Oops, file is not available for preview." / "File format does not support preview." / "Preview Failed" |

## 3. Limits & gating (free vs Pro — QM-verified copy)

- **Size cap**: "Files <font color=red>larger than 100MB</font> are not available for preview." (HTML-styled warning)
- **Time cap (video)**: "15s preview only"
- **Version gating**: "Trial version is preview-only." / "Preview only. Unlock Pro to enjoy full features and unlimited recovery." / "Preview Only." → upsell (`Result_Preview` telemetry, buy chain artifact 11)
- **Capability gap**: "Preview is not supported, recover to view this partition" (partitions whose FS needs recovery first)

## 4. Damage-aware preview (the differentiator)

When a file's header is damaged but the body looks intact, `PreviewFailedWnd` still grades it: "But this file is likely recoverable based on its structure." with a **"Recovery Chances: High"**-style rating — the same risk model as `RecoveryChancesTipsWidget` coaching on the list rows. This bridges preview → repair: "Corrupted Video" entries route to the repair flow ("Get Pro to Save Repaired Videos/Documents").

## 5. Streaming internals

`IInWindowStream` — in-window streaming interface: large media previews read ranges on demand instead of loading whole files (needed for the 100MB-cap edge and scrubbing). `AVPreviewStub` is the audio/video sink used by `VideoPreviewWnd`. Embedded previews reuse `EmbeddedPreviewWindow` so the shell keeps one chrome (shadow + controls) across types.

## 6. Preview during scan

"You can preview and recover your files during the scanning process." (QM) — preview is available while engines still run (progressive tree, artifact 08/09); the preview controllers read from the scan session's in-memory metadata + engine-provided sector reads (IInWindowStream again).

Cross-links: artifact 09 (entry points), 11 (Recover CTA), 12 (repair handoff), FileRepair artifacts (repair engines), `per-binary/EUOfficeViewer.md`/`PDFViewer.md` (external viewers).
