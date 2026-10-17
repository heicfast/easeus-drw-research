# UI/UX Artifact 03 — Complete Window/View Class Map (RTTI-Verified)

> Scope: every window, page, dialog, view, widget-controller and UI-worker class in DRWUI, with role and evidence anchors.
> Evidence: MSVC x64 RTTI vtable scan of DRWUI.exe (`scripts/map_rtti_vtables.py` → `drwwui_vtable_map.json`): 1,613 CompleteObjectLocators → **980 classes with vtables, 8,022 methods mapped**; binary ctor scan (`scripts/find_ctors_binary.py` → 2,364 constructor functions via LEA→vftable xrefs); Ghidra symbolized vftables (932 `Class::vftable` references). UI-named classes: **530**; window-family classes: **141**.

## 1. Attribution methodology (why this map is trustworthy)

1. **RTTI TypeDescriptors** (`.?AVName@@`) give class names — 1,073 total from strings, refined by COL scan.
2. **COL→vftable**: every `RTTICompleteObjectLocator` (signature=1, image-relative `pTypeDescriptor`) is referenced at `vftable[-1]`; walking forward yields method pointers validated against the `.text` range → class→methods.
3. **Constructors**: x64 `lea reg,[rip+disp32]` instructions targeting vftable VAs, mapped into Ghidra function ranges (119,182 ranges from `DRWUI_functions.txt`) — catches ctors that never appear in vtables.
4. **Symbolized vftables** in the Ghidra export (`DrwMainViewManagerWizard::vftable` etc., 932 classes) provide a fourth, independent confirmation channel.
5. Class families were cross-checked against the QM translation contexts and telemetry event owners (artifact 02).

Discrepancy note: RTTI string count (1,073) vs vtable-backed classes (980) — the delta is non-polymorphic `Q_OBJECT` classes (no vftable of their own in .rdata COL form, e.g. some QLabel-derived inline classes) plus template instantiations collapsed by the scanner.

## 2. Application shell

| Class | v-Methods | Role |
|---|---|---|
| `SplashWindow` | 57 | First frame (logo + load progress) shown by DRWLoader while DRWUI initializes |
| `DrwMainWindow` | 63 | The main window shell (title bar, nav rail, content host) — ctor `FUN_140839630/140839f80` (4 vftable stores each = MI) |
| `DrwMainViewManagerWizard` | 17 slots+signals | **The wizard state machine — extends `QStackedWidget`** (ctor `FUN_140831da0`); owns the 4 top-level pages (artifact 04) |
| `BasicTitleBar` | 53 | Custom title bar (min/max/restore/close `btn_*` SVG states) |
| `WindowAttributeProxy` | 23 | Window attribute helper |
| `DrwFlyoutWindow`/`DrwFlyoutMenu` | 52 | Nav-rail flyout (menu with items `DrwFlyoutMenuItem`) |
| `DrwMessageBox` / `DrwNewMessageBox` | — | In-house message-box family (540×240 fixed) |
| `PublicMessageBox` | — | Shared modal (emits classify-tab telemetry) |
| `PublicCloseDialog`, `PublicLoadingDialog`, `PublicShadowDialog`, `FollowShadowDialog` | 57–58 | Shared dialog chrome: confirm-close, loading spinner, shadow/backdrop |
| `UiBasicDialog` | 60 | Base dialog class for the in-house dialog system |
| `CWndCapture`/`IWndCapture` | — | Screen capture for support snapshots |

## 3. Top-level wizard pages (DrwMainViewManagerWizard's stack — decoded from ctor `FUN_1408351a0`)

| Stack idx | Class | Role |
|---|---|---|
| 0 | `DrwHomePage` | Home: PC/device scan picker (device list = `DrwHomePartListView`) |
| 1 | `DrwLostDiskPage` | Whole-disk-lost scenario ("I lost the entire disk") |
| 2 | `PeripheralHomeView` (**default start page** — `setCurrentIndex(2)` at init) | Peripheral/SD/camera/UAV/dashcam recovery home |
| 3 | `CDetailPage` | Scan+results surface (tree/classify/filter/preview) — the workhorse |

## 4. Scenario start windows (separate top-level flows)

| Class | v-Methods | Scenario |
|---|---|---|
| `PartitionStartWnd` | 52 | Standard partition recovery entry |
| `CBitlockerStartWnd` + `BitlockerUnlockDialog/RetDlg/RetWithPwdDlg/UnlockThread` + `BitLockerMSGuideDlg` | 53–57 | BitLocker volume unlock (password/key; MS guide) |
| NAS family: `CNasStartPage`, `CNasLogonPage`, `CNasSSHPage`, `CNasSSHPopWnd`, `CNasSSHInfoWnd`, `CNasDevicePage`, `CNasEnummingPage`, `CNasEnumFailedPage`, `CNasNoSystemPage`, `CNasDownloadPage`, `CNasHelpTipsWnd`, `CNasNetErrorTipsWnd`, `CNasPortTipsWnd` | 52–58 | NAS recovery (login→SSH agent→enumerate→scan) |
| Linux family: `CLinuxBasePage`, `CLinuxLogonPage`, `CLinuxDownloadPage`, `CLinuxNoSystemPage` | 54 | Linux RAID/box recovery (same agent pattern) |
| `CSBackupStartWnd` + `CSBackupDownloadPage` | 52–56 | SBackup integration |
| SD-card family: `CSDCardDeviceListPage`, `CSDCardNoDevicePage`, `CSDCardScanTipsWnd`, `CSDCardHelpPopWnd`, `CSDCardHelpTipsWnd`, `CSDCardFeedBackWnd/Submit/Success` | 52–57 | Peripheral flow + its own feedback loop |
| `CRaidDeviceListPage`, `CRaidNoDevicePage`, `CRaidHelpTipsWnd` | 52 | RAID arrays |
| WinPE family: `CPEStartWnd`, `CPEConnectWnd`, `CPEBuyRetainWnd` | 52–58 | Bootable media creator/connector |
| `DrwPartitionRecoverWindow` | 53 | Partition-recovery tool window (PartitionRecovery module UI) |
| WeChat: `CWeChatDefaultWnd`, `CWeChatIEWnd`, `CWeChatLoadingWnd`, `WeChatEmbedIeWnd` | 52 | WeChat data recovery (embedded IE) |
| Cloud: `CHomeCloudDriveView`, `CHomeCloudLoggingWnd`, `ICloudLoginViewer` | 53–57 | Cloud-drive home tile + iCloud login |

## 5. Scan-phase UI

| Class | v-Methods | Role |
|---|---|---|
| `CScanMgr`/`IScanMgr` (scan-mgr singleton `FUN_140149c30`→`FUN_1401448f0`) | — | Scan-session manager (prep calls at vtable+0x1f0/+0x1f8 before every scan) |
| `CDoScanDeviceBase` → `CDoScanPartition` / `CDoScanLostPartition` / `CDoScanCloudDevice` / `CDoScanRemoteDevice` | 44 each | Strategy objects per device kind |
| `CGenericRecoveryProgress`, `CGenericRecoveryController`, `CCompleteRecoveryController`, `CDeletedRecoveryController`, `CRecoverFinishBuyDlg` | 18–37 | Progress + completion controllers |
| `CQuickScanCompleteWnd` | 53 | "Quick scan completed → Advanced Scan?" dialog |
| `CStopScanThread` | — | Cooperative cancel |
| `ScaningRecoverMessage` | — | Scan-phase status text (20 tr-sites) |
| `CPartitionScanFrame`, `CPartitionListFrame`, `CPartitionListItem`, `CPartitionEnumFailFrame` | 52–56 | Partition list/scan frames (27 tr-sites) |
| `RecycleBinScanNoRltWnd` | 52 | Empty-recycle-bin result state |
| `UnllocateProgressLabel`, `RadiusProgressBar`, `RotateLabel`, `AnalysisGridWidget` | — | Progress visuals (disk-grid animation) |
| Workers: `CEnumPartitionThread`, `BitlockerUnlockThread`, `CCloudLogginThread`, `CLinuxConnectThread`, `CLinuxCancelConnectThread`, `CLinuxDownloadConnectZipThread`, `MainWndExitThread`, `CGoHomeThread` | 12 | Async UI workers |

## 6. Results-phase UI (CDetailPage internals)

Tree/classify/filter/list — the screen the user lands on after/during scan:

| Class | v-Methods | Role |
|---|---|---|
| `CTreeViewController`, `CLeftTreeView`, `LostLeftTreeView` | 55–97 | Left directory tree (existing + lost branches) |
| `CClassifyLeftTreeView`, `CClassifyTreeViewController`, `CClassifyTreeViewModel` | 51–55 | Type-based category tree |
| `CClassifyRightListView`, `CClassifyRightIconView`, `CClassifyListHeaderView`, `CClassifyListViewModel`, `CClassifyListIconController` | 54–96 | Right-side list/icon views per category |
| `CClassifyComboBox*` (+ItemModel/ItemDelegate/PopupMenu/MenuItem*) | 23–55 | Category combo pickers |
| `CListControl`, `CListHeaderView`, `CListIconController`, `CListScrollbar`, `CIconViewDelegate`, `CIconListBtn`, `CIconItemStyleWidget` | 46–66 | File list rendering stack |
| `CTreeListViewItemDelegate` | — | Row painting (5 tr-sites) |
| `CAdvanceFileFilterMgr`, `CAdvancedFilterBtn`, `CFilterBar`, `CFilterButton`, `CFilterCountFrame`, `CFilterGuideWnd`, `CFilterNoRlt`, `CFilterLostFilesBtn` | 2–66 | Advanced filter (type/ext/size/date) UI |
| `CFileTypeFilterTabBar`, `CFileTypeTagTabGroupWnd`, `CFileTypeTagTabItem`, `CFileExtensionGroupWnd`, `CFileExtensionItem` | 52–55 | File-type tab strip + extension group picker |
| `CSearchLineedit`, `CSearchNltPopWnd` | 58 | Search box + "no results" popup (9/6 tr-sites) |
| `CSelAllCheckBox`, `ArrowToggleButton` | 55 | Select-all + expand/collapse controls |
| Workers: `CSetClassifyThread`, `CSetFilterThread`, `CSortNodeThread`, `CCheckNodeThread`, `CCheckNodesThread`, `CSelNodeThread`, `CGetListThumbnailThread` | 12 | Async classify/filter/sort/check/thumbnail workers |
| `CDirectoryTreeManager` + `CDirectoryTreeBuilder` (+ `CBtrfsQuickTreeBuilder` in engines) | 17–26 | Backing tree builders (linked to SearchDLL tree builders) |
| `CRightContent`, `CRightTagTipsWnd`, `CHandleView` | 52 | Right pane composition |

## 7. Preview subsystem

| Class | v-Methods | Role |
|---|---|---|
| `PreviewMainDialog` (66), `CPreviewMainShadowWnd`, `CPreviewShadowWnd`, `EmbeddedPreviewWindow` | 52 | Preview shell + shadow chrome |
| `ImagePreviewWindow` (54), `VideoPreviewWnd` (57), `RichTextPreviewWindow` (54), `ArchivePreviewWindow` (54) + Model/View/Delegate/Stub per type, `AVPreviewStub` (20) | 20–96 | Per-type previewers (zoom/hand cursors from `Preview/` RCC dir) |
| `PreviewFailedWnd`, `CVideoPreviewTipsWnd` | 52 | Failure/guidance states |
| `CPDFRepairGetPixmapThread` | — | PDF page rasterization for preview |
| `IInWindowStream` | — | Streaming interface (large-file preview without full load) |
| `FileRepairPreviewWnd`, `FileRepairPreviewCtl`, `CRepairPreviewCompareWnd` | 7–58 | Repair-preview (before/after compare) |

## 8. Recovery-phase UI

| Class | v-Methods | Role |
|---|---|---|
| `ChooseDestinationPathDialog` (57) + `ChooseDestinationPathItem` | Destination picker (Local/Cloud tabs, "Enable file repair" toggle) |
| `RecoverProgressDialog` (14 QM strings) | Recovery progress |
| `CRecoverLimitDlg`, `CLocalRecoverBuyDlg`, `CRecoverFinishBuyDlg`, `CBuyGuideWnd`, `ChinaMainlandbuyErrorWnd`, `ChinaMainlandbuyIeWnd` | 52–60 | Free-limit / upsell dialogs (CN payment variants) |
| `RecoveryChancesTipsWidget`, `recoverLayerTipWnd` family | 6 | "Recovery chances" coaching layer |
| `RecoverResultDlg` | 1 geometry site | Final result summary |

## 9. Repair-product UI (Fixo chain)

| Class | v-Methods | Role |
|---|---|---|
| `FileRepairHomePage`, `FileRepairAddPage` | 52 | Repair home ("Add corrupted files to easily repair them.") |
| `CRepairVideoHomeWnd`, `CRepairVideoItemsWnd`, `CRepairVideoRightItemsWnd`, `CRepairVideoSaveWnd`, `CRepairVideoAdvancedAddWnd`, `CRepairVideoAdvancedAnalyzeWnd`, `CRepairVideoGetSampleWnd` | 52–57 | Video repair wizard incl. **Advanced Repair (sample-file)** flow |
| `CRepairPDFHomeWnd`, `CRapairPDFAddWnd`, `CRepairPDFItemsWnd`, `CRepairPDFRightItemsWnd`, `CRepairPDFSaveWnd`, `CRepairPDFAddProgressWnd`, `CRepairPDFDecryptWnd`, `CRepairPDFDecryptSuccessWnd`, `CRepairPDFSaveInforTipsWnd`, `CRepairPDFPreviewWnd` | 52–57 | PDF repair wizard incl. password-decrypt step |
| `RepairingWnd`, `RepairFailedWnd`, `RepairOriginalWnd`, `RepairedBottomWnd`, `CRepairAddProgressWnd`, `FileRepairScanPopWnd` | 52–58 | Shared repair states |
| `ArchiveRepairThread` | — | Archive repair worker |

## 10. Monetization / engagement / misc surfaces

`AdToolPopWindow` (60), `BuyNowTipsMenu` (55), `TitleGiftDlg` (7 tr), `UserRateDlg`, `CFollowusDlg`, `CExitHelpWnd` (57), `IntroductionTipDialog` (57), `CUserGuidTipWnd`(+Content), `NeedHelpMenu` (`Click_Assistant`), `AIAssistantTipDialog` (57), `AIDeduplicationTipMenu` (55), `DrwAIDedupWindow` (53 — AI deduplication results), `FreezeAnimalDialog` (58 — marketing animation), `PirateVictimsTipDlg` (anti-piracy nudge!), `CheckUpgradeDlg`, `RefreshHelpDialog`, `BadSectorTipsDlg`, `DiskBackupDialog`/`DiskBackProgressPage`/`DiskBackupSaveDlg` (disk-image save flow), `SHBrowserWindow` (59), `InnerWebWindow` (embedded web), `ApowerActivateDialog`, `ExternalActivateDialog` (60), `ActivateResultDialog` (60), `ActivateViewProxy`, `CEnterLicenceDlg`, `RetentionActiveDlg`/`RetentionExitDlg` (win-back offers), `CAbout*Dlg` family (About variants incl. `_cn_fx/jz/lc` OEM builds).

## 11. Widget toolkit (in-house EuS library)

`BtnScan` (55 — the big scan button), `CSelAllCheckBox`, `ArrowToggleButton`, `RotateLabel`, `RadiusProgressBar`, `RecoveryChancesTipsWidget`, `RobotToolTipDlg` (7 geometry sites — the assistant robot tooltip), `recoverLayerTipWnd/Child/ChildImgText`, `InnerShadowWidget`, `CCalendarWidget` (date filter), `CAutoRecover*` family (Mgr/Entry/Open/Close/Setting), `CPopupMenu`, `CThemeMenuItem`, `CRightTagTipsWnd`, `CExitHelpWnd`.

## 12. Geometry census (sizes with class owners — evidence: 435 `resize/setGeometry/set*` sites, 73 with literal dims)

| Size (px) | Call | Class | Interpretation |
|---|---|---|---|
| 672×627 | resize | (QHBoxLayout-owner fn) | Large dialog (NAS SSH page region) |
| 636×433 | resize | (QLabel-owner fn) | Standard dialog body |
| 540×380 | setGeometry | QPushButton-owner | Buy/upgrade dialog |
| **540×240** | setFixedSize | **DrwMessageBox** | The in-house message box standard |
| 260×260, 240×240 | setFixedSize | QPushButton-owner | Square feature tiles |
| 274×240/256×240 | move | BadSectorTipsDlg | Bad-sector tips positions |
| 120×32 | setMinimumSize | PublicCloseDialog | Confirm-close button |
| 80×80, 72×72, 56×56, 48×48, 53×53, 58×58 | setFixedSize | various | Icon/avatar standards |
| 300×40 | resize | RotateLabel | Rotating status strip |
| 0x27c×0x1b1 (636×433), 0x2a0×0x273 (672×627) | resize | (register-based) | Dialog defaults |
| 0xce,0xb (206,11) | move | title-bar child | Title-bar button position |

The main window's size is not set with literals — it is restored from `QSettings` geometry persistence (Qt standard) with design minimums enforced via `setMinimumSize` family; the observed default content region for the modern DRW layout is 960×600+ (RCC `Home/` assets are authored at 2× for HiDPI).

## 13. Notable non-window UI classes (controllers/proxies)

`ActivateViewProxy`, `AutoRecoverDataSource` (65), `CFileRepairPreviewCtl`, `WindowAttributeProxy`, `CAutoRecoverMgr` (11), `CHKRepairAdapterMgr` (HK partition-repair bridging), `CPolicyItemJPG` (RAW JPG policy items), `CThemeMenuItem`, `CDoScan*` strategies, `CRecoverFinishBuyDlg`, `CCompleteRecoveryController` (37) / `CDeletedRecoveryController` (25) / `CGenericRecoveryController` (37) — the recovery controllers shared with the engine layer.

Cross-links: artifact 04 (how these windows connect into a flow), 05 (dialog inventory + telemetry), 07–12 (phase deep dives), `per-binary/DRWUI.md` (census), `DRWUI-exe--main-ui-architecture.md` (earlier RTTI-based overview — superseded in precision by this artifact).
