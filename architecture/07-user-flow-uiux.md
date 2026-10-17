# 07 — User Flow & UI/UX Walkthrough (What the User Sees, Screen by Screen)

> Every quoted string below is byte-exact from DRWUI Qt string tables (English.qm / .rcc) —
> the actual shipped UI copy. Window/class names from RTTI (1,073 classes).
> Companion: `architecture/04-recovery-workflow.md` (mechanics behind these screens) and
> `architecture/05-uiux-architecture.md` (the UI/UX master doc: view-manager decode,
> design system, telemetry census, per-phase deep dives — 19 artifacts, independently
> verified §10).

## 1. Launch → Home

- `SplashWindow` (brief brand frame) → `DrwMainWindow` shell.
- **Home (`DrwHomePage`)**: device list (`DrwHomePartListView`) showing every recoverable
  target with friendly names — "SSD (C:)" pattern; tiles for Cloud ("One-stop cloud recovery
  solution that enables you to retrieve your data effortlessly."), NAS, Linux RAID, SBackup,
  peripherals, Repair; help/guide surfaces (`CUserGuidTipWnd`, `TimedGuide`).
- Home widgets surface guidance: "NoDeviceGuide*" frames when no targets;
  `AIAssistantTipDialog` ("AI Recovery Insight:") on result screens; `DrwFlyoutWindow` panels.
- Background, invisible to user: update check, firebase remote config, licensing, ad popups
  (`AdToolPopWindow`, `CBuyGuideWnd`, China-mainland flows `CChinaMainlandActivateDlg`,
  `ChinaMainlandbuyIeWnd`).

## 2. Choosing a scenario

| Tile/target | What appears next |
|---|---|
| Local partition | `PartitionStartWnd` → scan |
| Whole lost disk | `DrwLostDiskPage` → deep scan |
| BitLocker volume | `CBitlockerStartWnd` → `BitlockerUnlockDialog` (password or recovery key; "Unlock and Recover"); `BitlockerUnlockRetWithPwdDlg` states |
| NAS | `CNasStartPage` → `CNasLogonPage` (IP/port/account; SSH helper dialogs: "Make sure the SSH service is enabled before connecting. How to enable?") → `CNasDevicePage`/`CNasEnummingPage` ("It will take a few minutes to find cloud drive files. Please be patient!") → scan |
| Cloud | `CHomeCloudLoggingWnd` ("Sign in to iCloud" / Dropbox / Google Drive / OneDrive) → `CHomeCloudDriveView` ("Select a Cloud Drive to Start Recovering") → scan |
| Recycle Bin | direct scan (`RecycleBinScanNoRltWnd` if empty results) |
| SD/camera | `CSDCardDeviceListPage` (+ `CSDCardScanTipsWnd`) |
| WeChat | `CWeChatDefaultWnd` → `CWeChatLoadingWnd` → `CWeChatIEWnd` (embedded web) |
| Repair | `FileRepairHomePage` (below) |

## 3. The scan screen

- Progress: "%1 file chunks scanned...", "%1 files %2 have been found.",
  `CUIScanProgressInfo`; live-found counters; `CStopScanThread` behind the Stop button.
- Scan modes (UI copy):
  - Quick (default) — "Quick Scan Completed" → `CQuickScanCompleteWnd`.
  - Advanced: "Tips: Advanced Scan is searching files sector bu sector to ensure data
    recovery as much as possible." [sic — shipped typo] — "Advanced Data Recovery" /
    "More recovery options" / "Changing Scan Location" / "Scan the entire disk."
- Auto-Recover offer: "Set Auto-Recover After Advanced Scan Completed",
  "Auto-Recover OFF!" (settings via `CAutoRecoverSettingWnd`).

## 4. Results screen ("Organizing Found Files" transition)

- Layout: left category tree (`CClassifyLeftTreeView`), top filter bar (`CAdvancedFilterBtn`,
  "Filtered nothing..." when empty), search box, file list with icon/thumbnail columns
  (`CGetListThumbnailThread`), status bar "%1 files %2 have been found.".
- Tree sections: by Type / by Path; **deleted entries** under "&Other deleted files";
  raw-carved under lost views; "&Lost data not found" / "&Some data not found" empty states;
  "Load last scan result" / "(1-Import Scan Result" / "$1-Save Scan Result" actions
  ("Save Scan Session" → .rsf).
- Sorting/filtering in background threads (`CSortNodeThread`, `CSetFilterThread`,
  `CSetClassifyThread`) — UI never blocks.
- Preview: double-click → `PreviewMainDialog` shell; per-type: `ImagePreviewWindow`,
  `VideoPreviewWnd` (+tips), `RichTextPreviewWindow`, `ArchivePreviewWindow` (browse inside
  archives), PDF/Office via out-of-proc viewers (`PDFViewer.exe`, `EUOfficeViewer.exe`,
  `EUHwpViewer.exe`); "Preview full file" / "Preview %1 (%2/%3)" pager;
  `PreviewFailedWnd` when unreadable; `IInWindowStream` streams large files.
- Repair hooks on damaged items: "Quick Repair Failed" → "Try Advanced Repair".

## 5. Recovery

- Select checkboxes (files/folders; `CSelNodeThread`) → **Recover** button →
  `ChooseDestinationPathDialog`: "Choose a destination path to save the file:" with
  Local / Cloud tabs ("You can select a Cloud drive to save the found data."), drive list
  ("SSD (C:)"), and the warning "We highly recommend saving the found data to a different
  drive or a network drive."
- During: "&Recovering: Disk %1", per-file counters "Recovered: %1/%2 files".
- After: "Recovery Successful" / "Recovery experience" survey; failure summary
  "(1-Import Scan Result ... %1 files/%2 failed; for details, you may check the recovery
  log)".
- Free-version gates: "Recover remaining", "Recover unlimited", "%1 free recovery
  capacity.", "Unlock Full Recovery", "Suggested Recovery" (a curated subset), "Create to
  Recover Now" [sic]; upgrade surfaces `CBuyGuideWnd` / `ActivateViewProxy`.
- Auto-Recover completion: `CAutoRecoverOpenWnd` / `CAutoRecoverCloseWnd` flows.

## 6. Repair flows (video / PDF)

- **Video**: `CRepairVideoHomeWnd` → `CRapairVideoAddWnd` (add corrupt files) →
  `CRepairVideoGetSampleWnd` — "sample" file request (healthy video from same device;
  feeds the moov-substitution algorithm) → `CRepairVideoAdvancedAddWnd`/
  `CRepairVideoAdvancedAnalyzeWnd` → `CRepairVideoItemsWnd` ("*Videos to be repaired",
  "Repairing (%1/%2): %3") → `CRepairVideoSaveWnd`. Compare view:
  `RepairPreviewCompareWnd`, "Repair Completed!" / "&Quick Repair Failed".
- **PDF**: `CRepairPDFHomeWnd` → `CRapairPDFAddWnd` → `CRepairPDFDecryptWnd`/
  `CRepairPDFDecryptSuccessWnd` (password-protected PDFs; "Perfectly repair PDF that cannot
  be opened by Adobe/Foxit or open with errors") → `CRepairPDFItemsWnd` →
  `CRepairPDFPreviewWnd` (rasterized pages) → `CRepairPDFSaveWnd`.
- Generic states: `RepairingWnd`, `RepairFailedWnd`, `RepairOriginalWnd` (keep-original copy).

## 7. System surfaces around the app

- Bootable media builder: `CPEStartWnd` → `CPEConnectWnd` ("create" flows on
  EuPEMaker), retention offers `CPEBuyRetainWnd`; WinPE boot path itself:
  `architecture/03-winpe-boot-environment.md`.
- Exit: `ExitGuideChronoSnapDlg` retention dialog, `MainWndExitThread` clean shutdown,
  `CGoHomeThread` back-navigation.
- Crash recovery (invisible): DRWLoader watchdog restarts DRWUI; DRWReport collects dumps.
- Language/localization: 1537 English UI strings + Chinese/ja translations (Japanese.dll,
  language/ dir); China-mainland activation variant; "$Enable file repair" feature flag.

## 8. Emotion/polish layer (evidence of UX investment)

- Holiday/seasonal theming (`HolidayResDownloadThread`).
- Onboarding guides (`CFilterGuideWnd`, `TimedGuide`, `NoDeviceGuide*` frames).
- AI surfaces: "AI Recovery Insight:", `DrwAIDedupWindow` (duplicate grouping).
- Trust copy: "EaseUS NEVER keeps records of your account. Please refer to our Privacy
  Policy for more information." (cloud login), "Point-in-Time Recovery" feature naming.

## 9. Cross-links

- Mechanics per screen: `architecture/04-recovery-workflow.md`
- Window/class inventory (all 126 windows, 44 threads): `artifacts/DRWUI-exe--main-ui-architecture.md`
- Repair internals: `architecture/06-repair-chain.md`
- String sources: `re-workspace/reversed/DRWUI.exe/qt_strings_english.txt`, English.qm parse
