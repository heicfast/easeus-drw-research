# UI/UX Artifact 04 — The User-Flow State Machine (View Manager Decode)

> Scope: exactly what happens from app launch to scan/results/recovery — every transition, decoded from the Ghidra decompilation with RTTI class attribution.
> Evidence: `DrwMainViewManagerWizard` constructor `FUN_140831da0` + init `FUN_1408351a0` + moc metacall `FUN_140b7dc00/FUN_140b7dcc0` (17 slots); SLOT/SIGNAL string table at `.rdata:0x140e31cc8..0x140e31d58`; `scanClickedSlot` = `FUN_140833a90` (3,714 chars fully decoded); ctor chain `FUN_140781600` (DrwHomePage) / `FUN_140786090` (DrwLostDiskPage) / `FUN_14093aa50` (PeripheralHomeView) / `FUN_1406b86e0` (CDetailPage).

## 1. Architecture: the wizard IS a QStackedWidget

```c
QStackedWidget * FUN_140831da0(QStackedWidget *param_1, QWidget *param_2) {
    QStackedWidget::QStackedWidget(param_1, param_2);        // base ctor
    *(vftable)     = DrwMainViewManagerWizard::vftable;      // dual vtables (MI)
    *(vftable+0x10)= DrwMainViewManagerWizard::vftable;
    ... // 0x30..0x68 fields zeroed, QString at +0x50 (current scan target)
    FUN_1408351a0(param_1);                                    // init: pages + wiring
}
```

`DrwMainWindow` hosts one `DrwMainViewManagerWizard`. "Navigation" between the four top-level experiences is **stack-index switching**, not window swapping (scenario windows like NAS/BitLocker/WinPE are separate top-level dialogs launched on demand — §6).

## 2. The four pages and their construction order (from `FUN_1408351a0`)

```
alloc 0x78 → FUN_140781600 → this+0x30 → insertWidget(stack, 0, page)   // DrwHomePage
alloc 0x88 → FUN_140786090 → this+0x38 → insertWidget(stack, 1, page)   // DrwLostDiskPage
alloc 0x100→ FUN_14093aa50 → this+0x60 → insertWidget(stack, 2, page)   // PeripheralHomeView
             FUN_1406b86e0 → this+0x40 → insertWidget(stack, 3, page)   // CDetailPage
QStackedWidget::setCurrentIndex(stack, 2);                              // ★ START ON PAGE 2
```

**Launch landing view = `PeripheralHomeView`** (stack index 2). The modern DRW home presents peripheral/external-device recovery as the primary surface; `DrwHomePage` (internal disks) is reached via the home tab switch, `DrwLostDiskPage` via the "entire disk lost" entry.

## 3. Event wiring installed at init (SLOT/SIGNAL strings at `.rdata 0x140e31cc8+`)

| Signal (sender) | Slot (DrwMainViewManagerWizard) | Meaning |
|---|---|---|
| `finished()` (device enumerator, via `FUN_14076df60`) | `deviceEnumFinished()` | Device list refreshed → home lists rebuild |
| `startScanDevice(const ScanDeviceInfo&)` (home pages) | `scanClickedSlot(const ScanDeviceInfo&)` | **User pressed Scan on a device tile** |
| `sigScanNasDevice(IStorageDevice*)` (NAS device source) | `scanClickedSlot(IStorageDevice*)` | Same entry, NAS device variant |
| `finished()` (refresh worker) | (dialog close) | Refresh modal ends |
| `sigScanFinished()` ( PeripheralHomeView chain, via `FUN_140837d10`) | slot 15 `FUN_1408350a0` | Peripheral scan finished → post-scan handling |

## 4. THE SCAN-CLICK TRANSITION (complete decode of `scanClickedSlot`, `FUN_140833a90`)

```c
void scanClickedSlot(this, ScanDeviceInfo *device) {
    scanMgr = FUN_140149c30();                       // CScanMgr singleton (via FUN_1401448f0 init)
    scanMgr->vft[0x1f0](scanMgr, 0);                 // prepare/reset  (method A)
    scanMgr->vft[0x1f8](scanMgr, 1);                 // prepare        (method B)
    if (device) {
        name = QString::fromUtf8(device->vft[0x88]()); // device display name/path
        this->m_scanTarget(this+0x50) = name;         // record target (QString field)
        FUN_140835910(this, 0, -1);                   // pre-transition teardown/setup
        if (this->m_detailPage(this+0x40)) {
            // ask PeripheralHomeView state: busy? (FUN_14093bac0 / FUN_14093bb10)
            CDetailPage::FUN_1406bb5f0(detail, device);   // ★ hand scan target to results page
            QStackedWidget::setCurrentIndex(this, 3);     // ★★ SWITCH TO CDetailPage
            FUN_1406bbfe0(detail);                        // ★★★ START SCAN (on detail page)
            // telemetry: FUN_14083a5d0()->vft[0x180]() → FUN_140aeebc0(tel, deviceName)
            //            FUN_140aeec00(tel, configFlag)   (logs scan start + config)
            svc = FUN_1400ec7b0(); FUN_140107000(svc, 2, 1);  // service-layer state change
            FUN_14010d150(svc); FUN_14010d1b0(svc);           // additional service prep
            FUN_140833980(this);                              // post-switch UI setup
        }
    }
}
```

**Design conclusion (verified):** scan progress and results are the SAME page. `CDetailPage` hosts the scan; the file tree/list fills progressively — matching the modern DRW "scanning + found files growing live" UX.

### `FUN_1406bbfe0` — scan-start side window (fully decoded)

```c
if (FUN_1401b01a0()->obj(+0x10)->vft[0x80]()) {          // condition: NAS/remote scan?
    wnd = new CNasNetErrorTipsWnd(0x50 bytes, detail->m_+0x48);
    connect(wnd_source, "2sigResize(const QPoint&)", wnd, SLOT@0x40deb550);
    connect(wnd, "2sigWndShow(bool)", detail, SLOT@0x40deb598);
    QWidget::show(wnd);  FUN_140b850b0(wnd, 1);          // raise
    FUN_1400ec7b0()->FUN_14010f200();                    // service notify
}
```
For NAS scans a floating `CNasNetErrorTipsWnd` (network-error tips overlay) is pre-attached to the detail page and shown; it repositions via `sigResize` and reports visibility via `sigWndShow`.

## 5. The 17 view-manager slots (moc metacall `FUN_140b7dcc0`, dispatch table)

| idx | Function | Decoded role |
|---|---|---|
| 0–2 | `FUN_140b7e240/e270/e2a0` | **signals** (QMetaObject::activate emitters) — outgoing notifications |
| 3 | `FUN_1408339e0` | reads `currentIndex`, calls `FUN_14093ad40` (PeripheralHomeView), emits signal 0 — tab/home switch request |
| 4 | `FUN_140833a50` | minimal relay (127 chars) — pass-through (parameterized signal forward) |
| 5 | `FUN_140833a90` | **scanClickedSlot** — §4 |
| 6 | `FUN_140833ea0` | `setCurrentIndex` + `FUN_140835910(this)` — switch + page setup (home-return variant) |
| 7 | `FUN_140833f10` | **refresh flow**: builds modal refresh dialog (`FUN_1409f1a90`), connects `"2refreshFinished()"`, starts refresh `FUN_14076e1d0(devMgr, 1)`, `QDialog::exec()` (modal), then `FUN_14093d710(peripheralHome)` rebuild |
| 8 | `FUN_140833fe0` | `currentIndex` + device-manager (`FUN_14076df60`, `FUN_14076e0c0`) + `FUN_14093b910/bc60/d640` — device-list rebuild path |
| 9 | `FUN_1408340b0` | `setCurrentIndex` + `FUN_140786330` (DrwLostDiskPage region) — **switch to lost-disk scenario page** |
| 10 | vft+0x168 virtual | virtual dispatch (interface method) |
| 11 | `FUN_1408348c0` | 5,011 chars, heavy `QObject::tr` — the **interactive flow dialog** (stop-scan confirm / buy-flow branch, feeds slots 13) |
| 13 | `FUN_140834f30` | calls slot-11 logic + `FUN_140838640` — follow-up action |
| 14 | `FUN_140834fc0` | refresh variant with `QThread::isFinished` guard + modal exec |
| 15 | `FUN_1408350a0` | **sigScanFinished handler** — post-scan flow (connects from PeripheralHomeView chain) |
| 16 | `FUN_140835120` | calls `FUN_14093dd40` (PeripheralHomeView teardown/refresh) |

(Indices 12 map to the signal emitters — Qt moc numbering interleaves signals & slots.)

## 6. Full user journey (synthesized, every step evidence-backed)

1. **Launch**: `DRW.exe` (DRWLoader supervisor, see `artifacts/DRW-exe--launcher.md`) starts `DRWUI.exe`. `SplashWindow` shows (57 v-methods; DIN font branding).
2. **Init**: `DrwMainWindow` built; `DrwMainViewManagerWizard` constructs the 4 pages; device enumerator starts; landing page = `PeripheralHomeView` (idx 2). `deviceEnumFinished()` fires → home lists populate (`FUN_14093d710`).
3. **What the user sees on open** (cross-check RCC `Home/` + `DriveTypes/` + strings): a device/group list ("Hard disk drives", "SD cards/cameras", cloud tile `CHomeCloudDriveView`, repair entries `FileRepairHomePage`), a big `BtnScan` per tile, the nav rail (`DrwFlyoutWindow`) and title bar (`BasicTitleBar`).
4. **Scenario entries** (separate windows): BitLocker (`CBitlockerStartWnd`→ unlock dialogs), NAS (`CNasStartPage`→Logon→SSH→Download→Enumerate chain), Linux RAID, WinPE creator (`CPEStartWnd`), RAID list, SBackup, WeChat, lost-disk (`DrwLostDiskPage` via slot 9).
5. **User clicks Scan** → `scanClickedSlot` (§4): CScanMgr prepared, target recorded, **stack flips to `CDetailPage` (idx 3)**, scan starts from the detail page; NAS variant attaches `CNasNetErrorTipsWnd`. Progress UI (`ScanProgress/` assets, `CGenericRecoveryProgress`, `UnllocateProgressLabel`, disk grid `AnalysisGridWidget`) animates while `CDoScan<Kind>` strategy runs the engines (SearchDLL family; engine internals in `artifacts/SearchDLL/`).
6. **During scan**: files stream into the tree (`CDirectoryTreeManager` + classify workers `CSetClassifyThread`…); user can search (`CSearchLineedit`), filter (`CFilterBar`/`CAdvancedFilterBtn`), switch tree/type view (`sigChangeTreeView`), preview already-found files (`PreviewMainDialog` family), or stop (slot 11 flow).
7. **Quick scan completes** → `CQuickScanCompleteWnd` offers Advanced Scan ("many users recover their data after a full scan"). Deep scan continues on the same page (RAW carving via RAWSearchDLL — 190+ format analysers).
8. **Recover** → `ChooseDestinationPathDialog` (Local/Cloud tabs, "Enable file repair" toggle, privacy copy for cloud logins) → `RecoverProgressDialog` → free-limit gate (`CRecoverLimitDlg` → `CLocalRecoverBuyDlg`/`CRecoverFinishBuyDlg` upsell copy "%1 users choose to activate Pro…") → `RecoverResultDlg` summary ("(%1 files / %2 failed; …recovery log)").
9. **Repair branch**: from home (`FileRepairHomePage`) or during recovery (repair toggle): video wizard (`CRepairVideoHomeWnd`→Add→Items→Advanced(sample)→Save) or PDF wizard (`CRepairPDFHomeWnd`→Add→Decrypt→Repair→Preview→Save). Repair engine chain in `artifacts/FileRepair/`.
10. **Exit**: `MainWndExitThread` clean shutdown; win-back offers (`RetentionExitDlg`), rating (`UserRateDlg`), feedback (`CSDCardFeedBackWnd` family).

## 7. State persistence

- Window geometry via Qt `QSettings` (standard) — no literal main-window resize found.
- Scan sessions: `.rsf` save/load ("1-Save Scan Result"/"1-Import Scan Result" telemetry) — format RE in `artifacts/SaveScan/`.
- Scenario/product state via registry `SOFTWARE\EASEUS\EaseUS Data Recovery Wizard` (+ "FoxitRestore" codename keys, see build-tree artifact).

Cross-links: artifact 03 (class census), 05 (dialogs/telemetry), 07 (home deep dive), 08 (scan), 09 (results), 10 (preview), 11 (recovery), 12 (repair), `04-recovery-workflow.md` (engine-side master flow).
