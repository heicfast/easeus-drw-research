# UI/UX Artifact 07 — Home Phase Deep Dive (What the User Sees on Open)

> Scope: the launch-to-first-action experience: landing page, tiles, lists, states, entries to every scenario.
> Evidence: `DrwHomePage` ctor `FUN_140781600`→init `FUN_140781aa0` (layout build `FUN_1407829a0`, 9,589 chars) + moc slots (`FUN_140b7a3b0…FUN_140783630`); `PeripheralHomeView` ctor `FUN_14093aa50` + init `FUN_14093e570`; 17+70 tr sites in the two page regions; RCC `Home/` (435 assets), `DriveTypes/` (60); QSS home section (style.css L1593–1971); view-manager init (artifact 04).

## 1. Landing sequence

1. `SplashWindow` during DRWUI boot (supervised by DRWLoader, see launcher artifact).
2. `DrwMainWindow` appears — opens **maximized** (`window_show_state=StatusMaxed`, normal 1240×840, min 800×600, high-DPI; artifact 05).
3. `DrwMainViewManagerWizard` stack index = **2 = `PeripheralHomeView`** — the default landing experience.
4. Device enumerator finishes → `deviceEnumFinished()` → home lists rebuild (`FUN_14093d710`); refresh is user-triggerable via the modal refresh flow (view-manager slot 7: `QDialog::exec` + `refreshFinished()`).

## 2. DrwHomePage — the "PC recovery" tab (stack index 0)

**Header copy** (tr-verified): "Select a location to start recovering" with a "Can't find location?" link; "Refresh" button; "Devices" / "Locations" sections; "Hard Disk Drivers" [sic] group.

**List rows** (`DrwHomePartListView` + `CPartitionListItem`, min-width 72px): per partition — icon from ImageResource.xml type map (artifact 01 §3: system/USB/lost/lock/unlock/camera/UAV/SD/dashcam/recycle-bin states), drive letter + label, file system, capacity bar, and the **TRIM status chip: "TRIM OFF" / "TRIM ON"** (SSD-aware recovery-chance indicator), plus a per-row `BtnScan`.

**Disk grouping**: "Disks and Partitions" with subtext "Scan the entire disk if you don't know where desired data was exactly saved." — whole-disk entries map to `DrwLostDiskPage` behavior (slot 9 switch). "Support" link and "Refresh" in the header row.

**Session resume banner**: "Continue last scanning · Scan time: · Scan files: · Scan disk: · Load" — surfaces a prior `.rsf` session (SaveScan artifact) with its metadata and a Load button (telemetry `Result_Loadsession`).

**Layout metrics** (QSS): content margins 40/45/0/48px, min-height 400px, 12px slim scrollbars, white surface with 4px bottom radii.

**Interaction wiring** (moc + connects): the page emits `startScanDevice(const ScanDeviceInfo&)` → view-manager `scanClickedSlot` (artifact 04 §4). Its 8 moc slots include `FUN_140781a00` (service call `FUN_1400f28e0`), `FUN_140783200` (responsive width: `contentsMargins`/`setMinimumWidth`/`maximumWidth` dance), `FUN_1407833f0`, `FUN_140783630(int,int)` (slot with two ints — list model updates), and virtual dispatches.

## 3. PeripheralHomeView — the default landing page (stack index 2)

**The 14 feature tiles** (tr-verified, exactly as shipped):
"Hardware Disk" · "SD Card" · "NAS & Linux" · "RAID" · "Bitlocker Drive" · "Cloud Drive" · "Linux Recovery" · "File Repair" · "Lost Partition Rescue" · "Crashed PC Rescue" · "Boot Repair" · "Help" · "More Recovery Tools" · "ChronoSnap Backup"

Each tile: icon (RCC `Home/Home_00NNN.png` numbered frames + `DriveTypes/`), label, and entry action. Tile destinations map to the scenario windows in artifact 03 §4 (e.g. "NAS & Linux"→`CNasStartPage`; "Crashed PC Rescue"/"Boot Repair"→WinPE flows `CPEStartWnd`; "ChronoSnap Backup"→the snapshot product; "More Recovery Tools"→`MoreToolIndexWidgetItemIcon` list).

**Device groups** (tr): "External drives (%1)" and "Internal drives (%1)" with counts, plus "Specify a location" guidance; dead-end state: "Drive Not Show Up" (links to troubleshooting; telemetry `Click_Cannotfindlocation`).

**Sub-flows on this page**:
- Disk-image creation: "Back" / "Create Image" / "Select a drive or a partition to create a backup disk image" (→ `DiskBackupDialog` chain).
- Scenario guidance strings: "Select a location to search for lost data" (generic) and "Select a location to unlock Bitlocker and start recovering" (BitLocker tile).
- Refresh control; `FUN_14093bac0/bb10` (busy-state queries consulted by `scanClickedSlot` before transitions).
- Its scan-finish signal `sigScanFinished()` routes to view-manager slot 15 (post-scan flow).

**PeripheralHomeView internals** (ctor): 0x100-byte object extending QFrame, ~40 pointer fields (tile registry), init `FUN_14093e570`, teardown `FUN_14093ac90` (stops internal QTimer at +0xf0, drops connections).

## 4. DrwLostDiskPage — the "whole disk lost" tab (stack index 1)

Same list chrome as home ("Disks and Partitions", "Scan the entire disk…", "Support", "Refresh", "TRIM OFF/ON") but lists **whole physical disks** (type codes 22–25 → `drivetype_ico_disk.png`); margins 36/48/48/24px. Reached via home's disk entries or the "Lost Partition Rescue"/"Drive Not Show Up" tiles; scanning from here uses `CDoScanLostPartition` strategy + smart partition scan UI ("Smart Partition Scanning" — artifact 08).

## 5. Home-phase state matrix

| State | Visible | Evidence |
|---|---|---|
| First run | `IntroductionTipDialog` tour (7-slide `Introduction/` RCC assets) | artifact 03 §10 |
| No devices | empty groups + "Drive Not Show Up" + `Refresh` | tr + telemetry |
| Devices present | grouped lists with TRIM chips, per-row Scan | QSS + ImageResource.xml |
| BitLocker volume | lock/unlock icons + "unlock Bitlocker" guidance → `CBitlockerStartWnd` | icon map + tr |
| Session exists | "Continue last scanning … Load" banner | tr + `Result_Loadsession` |
| Refreshing | modal refresh dialog (progress) | view-mgr slot 7 decode |
| Ad/upsell slots | `AdToolPopWindow` banners (`Ad_bg1.png`, `Buyhov_*`), gift promos `TitleGiftDlg` | RCC `Ad/`, `gift/` |

## 6. Where "Home" connects to core

- Device enumeration: device-manager singleton `FUN_14076df60` (+`FUN_14076e1d0(dev,1)` start-refresh, `FUN_14076e0c0`) — the same manager the view manager listens to.
- Scan entry: `startScanDevice(ScanDeviceInfo)` → `scanClickedSlot` → `CScanMgr` prep (vtable+0x1f0/+0x1f8) → CDetailPage target handoff (artifact 04 §4).
- Session resume: `.rsf` import path ("1-Import Scan Result").
- Telemetry: `Click_Scan*`, `Click_Refresh`-family, tile clicks (`Click_Cloud`, `Click_Nas*`…).

Cross-links: artifact 04 (transitions), 05 (styling/metrics), 06 (dialogs), 08 (scan phase after the click).
