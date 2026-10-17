# UI/UX Artifact 13 — UI→Core Wiring, Controllers & State Management

> Scope: how the UI talks to the recovery core — singletons, signal contracts, worker threads, state fields, and the telemetry/service layers.
> Evidence: decompiled call chains with RTTI attribution (all functions cited); moc dispatch tables; vtable method indices; import census; thread classes from RTTI.

## 1. The service-singleton layer (who the UI calls)

| Singleton accessor | Object | Used by (verified call sites) |
|---|---|---|
| `FUN_1401b3ec0` | service/context root | `setScanDevice`, scan flows (prep + state) |
| `FUN_1401b19d0` | scan orchestrator (vtable+0x18 = startScan(device, 0)) | `CDetailPage::setScanDevice` |
| `FUN_140149c30` → `FUN_140144680` | **`CVersionCtrl`** (thread-safe init w/ `_Init_thread_header/footer` guard) | `scanClickedSlot` (vtable+0x1f0/+0x1f8 pre-scan prep), `setScanDevice` (vtable+0x220 notify) — licensing/version gating wired INTO the scan path |
| `FUN_1400ec7b0` | app-service hub | `FUN_140107000(svc,2,1)`, `FUN_14010d150/d1b0/f200`, `FUN_14010e1c0(svc,device)` — state-change notifications |
| `FUN_14076df60` | device manager (enumerator) | view-manager slots 7/8/14 (`FUN_14076e1d0(dev,1)` start refresh, `FUN_14076e0c0`), refresh dialog flow |
| `FUN_14083a5d0` | telemetry hub (vtable+0x180 → `FUN_140aeebc0/aeec00`) | `scanClickedSlot` logs scan start + device name + config flag |
| `FUN_1401b01a0` | settings/context (vtable+0x80 = isNAS check, +0x88 = config get) | `FUN_1406bbfe0` NAS branch, scan config reads |

## 2. The scan entry chain (every hop verified)

```
[Home tile] BtnScan / row click
   └─ DrwHomePage::emit startScanDevice(const ScanDeviceInfo&)          (moc signal)
        └─ DrwMainViewManagerWizard::scanClickedSlot(FUN_140833a90)      [artifact 04 §4]
             ├─ CVersionCtrl::vft+0x1f0(0)  / vft+0x1f8(1)               (pre-scan version prep)
             ├─ this->m_scanTarget = device name (QString @ this+0x50)
             ├─ FUN_140835910(this,0,-1)                                  (pre-transition)
             ├─ CDetailPage::setScanDevice(FUN_1406bb5f0)
             │    ├─ FUN_1401b3ec0 svc prep (FUN_1401b5d50)
             │    ├─ scan-mode query (FUN_14023c5d0/14023e1d0)
             │    ├─ CVersionCtrl::vft+0x220(mode)                        (notify scan mode)
             │    ├─ FUN_1401b3ec0::FUN_1401ac390(type)                   (scan type set)
             │    ├─ svc::FUN_14010e1c0(device)
             │    ├─ orchestrator::vft+0x18(device, 0)                    ★ START SCAN
             │    ├─ FUN_140a6bf20() + FUN_140652f80→FUN_1406ce6b0        (UI refresh)
             │    └─ this+0x184 = scan type; FUN_140800050(1); FUN_1406bf0b0(this,1)
             ├─ QStackedWidget::setCurrentIndex(this, 3)                  ★ SWITCH TO DETAIL
             ├─ FUN_1406bbfe0(detail)                                      (NAS → CNasNetErrorTipsWnd)
             ├─ telemetry(deviceName, configFlag)
             └─ svc state changes + FUN_140833980(this)                    (post-switch setup)
```

`CScanMgr` itself (ctor `FUN_1401ad1e0`): triple-vtable MI object (CScanMgr + IScanMgr@+0x10 + base@+0x18), **CreateEventA(manual-reset, initially-signaled) at +0x108 = the scan-abort event**, helper object (0x30 bytes, `FUN_140335dd0`) at +0x150, init `FUN_1401af670`. Strategy family `CDoScanDeviceBase` → `CDoScanPartition/LostPartition/CloudDevice/RemoteDevice` (44 v-methods each) execute engine loops.

## 3. Inverse path: engine → UI (progressive results)

- Engine callbacks (SearchDLL controllers — see SearchDLL artifacts) post progress/message events into the service hub → `doDispatchMessage(int,void*,int&)` (CDetailPage signal) fans out to page components.
- `ScaningRecoverMessage` updates status text; `AnalysisGridWidget` paints the sector map; file-count milestones emit telemetry.
- Scan lifecycle signals on CDetailPage: `sigQuickScanFinished(int)` (quick pass end → `CQuickScanCompleteWnd`), `sigScanFinished()` ×3 (full end → `CScanCommonPopDlg` completion + "Organizing found files..." phase), `sigLoadFinished(bool)` (session import).
- Tree fill: `CDirectoryTreeManager`/`CDirectoryTreeBuilder` + worker family `CSetClassifyThread / CSetFilterThread / CSortNodeThread / CCheckNode(Thread/s) / CSelNodeThread` keep the models updating off the UI thread.
- Thumbnails: `CGetListThumbnailThread` async per row.

## 4. Threading model (UI worker census from RTTI)

`CGoHomeThread`, `MainWndExitThread`, `CStopScanThread`, `CEnumPartitionThread`, `BitlockerUnlockThread`, `CCloudLogginThread`, `CLinuxConnectThread`, `CLinuxCancelConnectThread`, `CLinuxDownloadConnectZipThread`, `CPECreateThread`, `CPEGetInfoThread`, `CWeChatThread`, `ArchiveRepairThread`, `CPDFRepairGetPixmapThread`, `CGetListThumbnailThread`, classify/filter/sort/check/sel workers — every long operation is a QThread subclass with a completion signal routed back via QueuedConnection (moc string contracts above).

## 5. State fields (decoded object layouts)

| Object | Field | Meaning |
|---|---|---|
| DrwMainViewManagerWizard | +0x30/+0x38/+0x40/+0x60 | page pointers (home/lost-disk/detail/peripheral) |
| 〃 | +0x50 (QString) | current scan target (device name) |
| CDetailPage | +0x184 (int) | scan type code (FS codes 0–13, see DRWUI master artifact) |
| CScanMgr | +0x108 (HANDLE) | scan-abort event (manual reset) |
| CScanMgr | +0x150 | worker helper |
| PeripheralHomeView | +0xf0 (QTimer) | refresh timer (stopped in dtor `FUN_14093ac90`) |
| DrwHomePage slots | `FUN_140783630(int,int)` | list model updates |

## 6. State management & persistence

- Wizard state = QStackedWidget index (+ per-page view modes toggled by `sigChangeTreeView`, `sigSwitchSearch(int)`, `sigShowFilterBar`).
- Selection/filter state: `AdvanceFilterCondition` struct broadcast by value; selection checkpointed by `sigGetRightIndex(int&,int&)`.
- Session persistence: `.rsf` save/import (`Result_Savesession`/`Result_Loadsession`; format artifact) + "Continue last scanning" banner data.
- Window state: `QSettings` geometry + `config.ini [windowsSize]` (artifact 05 §2).
- Free-tier state: `CVersionCtrl`-mediated counters ("Recovered: %1/ %2 files", "%1 free recovery capacity.") + registry license keys (activation chain artifact).
- Telemetry beacons at every transition (artifact 06) — the analytics layer doubles as the state audit log.

## 7. Cross-binary UI links

- `PartitionRecovery/UILogic.dll` — MOM-object UI logic for the partition tool (`CConvDMPendingOperation`, `CCopyDiskPendingOperation`, … — pending-op engine artifact): DRWUI's `DrwPartitionRecoverWindow` fronts it.
- `EUinApp.exe` — in-app purchase host (no custom UI classes; rendered via DRWUI's `InnerWebWindow`/`ChinaMainlandbuyIeWnd` embedded-IE shells, `Result_Inappbuywindow` telemetry).
- `diskhealth/DiskHealth.exe` — separate Qt Quick UI (54 QML components, artifact 01 §6).
- External viewers (`EUOfficeViewer.exe`, `PDFViewer.exe`, `EUHwpViewer.exe`, `VideoViewer/`) — out-of-process preview renderers launched per file type (scope-excluded per brief; census in per-binary artifacts).

Cross-links: artifacts 04, 08, 09, 11; engine artifacts (SearchDLL family, PartitionRecovery, FileRepair); licensing-chain artifact.
