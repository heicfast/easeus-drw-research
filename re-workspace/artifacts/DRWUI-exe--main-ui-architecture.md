# DRWUI.exe — Main UI Application Architecture & Complete User Flow

> Binary: `og-codebase/DRWUI.exe` (30.2 MB, Qt 5.x, x64)
> Evidence: RTTI type descriptors (1073 classes), Qt string tables (English.qm + .rcc data), rabin2 imports/exports, capa/FLOSS, PDB path `E:\DRW\_drw_main\DRWUI\x64\Release\DRWUI.pdb`
> Status: RTTI/string analysis complete; Ghidra full decompilation running on CI (batch `drwui`)

## 1. Identity & Role

DRWUI.exe is THE product. Everything else in the box is infrastructure it loads, drives, or
supervises. It is a Qt5 widget application (~30MB, statically carries most Qt linkage via DLLs in
the same directory) whose PDB reveals it lives in the `DRWUI` project inside the `_drw_main`
solution tree. It:

- presents the entire user-facing wizard flow (home → scan → results → recovery),
- orchestrates all scan engines (`*SearchDLL.dll`) through controller interfaces,
- loads the PartitionRecovery module system (`.mo` modules via MainModule.dll) for
  partition-level operations,
- hosts file-repair flows (video/PDF/archive) by shelling out to the Fixo tool chain,
- manages licensing/free-vs-paid gating ("Recover remaining" / "Unlimited Recovery"),
- persists scan sessions (`.rsf`) and imports scan results from file.

## 2. Process Topology (where DRWUI sits)

```
DRW.exe (DRWLoader supervisor)
  └─> DRWUI.exe  ...................... main app (this file)
        ├─> DRWService.exe ............ BitLocker FVE key service (pipe \\.\Pipe\DRWBitlocker)
        ├─> *SearchDLL.dll ............ in-proc FS scan engines (factory: EUCreate<FS>Searcher)
        ├─> MainModule.dll + *.mo ..... in-proc MOM module system (partition ops)
        ├─> EuRepairHost.exe .......... out-of-proc repair licensing bridge
        │     └─> EUVideoRepair.dll / EUFileRepair / EUImgRepair / ... (Fixo chain)
        ├─> EuShare.dll + EuMrx.sys ... NAS (SMB/NFS) scan via kernel redirector
        ├─> cloud_session.dll ......... cloud-drive OAuth/session (Dropbox/GDrive/OneDrive/iCloud)
        ├─> DRWReport.exe ............. crash reporter (launched by DRW.exe on crash)
        └─> kernel: EPMNtDrv (eprdtdrv.sys et al.) via \\.\EPRDTDRV\<disk>\<part> for raw IO
```

## 3. Window/View Architecture (RTTI-verified)

### 3.1 Application shell
| Class | Role |
|---|---|
| `SplashWindow` | First frame on launch |
| `DrwMainWindow` | Top-level shell window |
| `DrwMainViewManagerWizard` | Wizard state machine that swaps top-level views |
| `IUIViewControl`, `IViewItemDelegate`, `IWindowProxy`, `WindowAttributeProxy` | View-abstraction interfaces |
| `DrwHomePage` + `DrwHomePartListView` | Home screen: device/partition list user picks from |
| `CGoHomeThread` / `MainWndExitThread` | Async navigation back home / clean exit |

### 3.2 Scenario start pages (what the user can enter)
| Start class | Scenario |
|---|---|
| `PartitionStartWnd` | Standard disk/partition recovery |
| `CBitlockerStartWnd` (+ `BitlockerUnlockDialog`, `BitlockerUnlockRetDlg`, `BitlockerUnlockRetWithPwdDlg`, `BitlockerUnlockThread`) | BitLocker-encrypted volume recovery (password/key) |
| `CNasStartPage` (+ `CNasLogonPage`, `CNasSSHPage`, `CNasDevicePage`, `CNasEnummingPage`, `CNasNoSystemPage`, `CNasDownloadPage`, ...) | NAS recovery (login → SSH agent download → enumerate) |
| `CLinuxBasePage` (+ `CLinuxLogonPage`, `CLinuxDownloadPage`, `CLinuxNoSystemPage`) | Linux RAID/box recovery (same agent pattern) |
| `CSBackupStartWnd` (+ `CSBackupDownloadPage`) | SBackup product integration |
| `CSDCardDeviceListPage` (+ `CSDCardScanTipsWnd`, feedback wnds) | SD-card / peripheral flow |
| `CRaidDeviceListPage` | RAID arrays |
| `CPEStartWnd` (+ `CPEConnectWnd`, `CPEBuyRetainWnd`, `CPECreateThread`, `CPEGetInfoThread`) | WinPE bootable-media flow (creates PE media) |
| `FileRepairHomePage` (+ `CRepairVideoHomeWnd`, `CRepairPDFHomeWnd`) | Repair product entry |
| `DrwLostDiskPage` | Whole-disk-lost scenario |
| `PeripheralHomeView`, `CHomeCloudDriveView` | Peripheral / cloud home tiles |
| `CWeChatDefaultWnd` / `CWeChatIEWnd` / `CWeChatLoadingWnd` / `CWeChatThread` | WeChat data recovery (embedded IE) |

### 3.3 Scan-phase UI
| Class | Role |
|---|---|
| `IScanMgr` / `CScanMgr` | Scan-session manager (interface + impl) |
| `CDoScanDeviceBase` | Strategy base for "do a scan on a device" |
| `CDoScanPartition`, `CDoScanLostPartition`, `CDoScanCloudDevice`, `CDoScanRemoteDevice` | Concrete scan strategies (partition / lost-partition / cloud / NAS-remote) |
| `CUIScanProgressInfo` | Progress model feeding widgets |
| `CQuickScanCompleteWnd` | "Quick Scan Completed" dialog offering Advanced Scan |
| `CStopScanThread` | Cancels engine scan cooperatively |
| `RecycleBinScanNoRltWnd` | Recycle-bin empty result state |

### 3.4 Results-phase UI (tree / classify / filter — the "found files" screen)
| Class | Role |
|---|---|
| `CTreeViewController`, `CTreeDataModel`, `CTreeViewModel`, `CTreeListModel` | File-tree presentation (directory tree of found files) |
| `CDirectoryTreeManager`, `CDirectoryTreeBuilder` (in mo-modules), `CBtrfsQuickTreeBuilder` | Backing tree builders |
| `LostTreeModel` / `LostTableModel` | "Lost data" flat views (files found by raw carving without folder structure) |
| `CClassifyLeftTreeView`, `CClassifyListHeaderView`, `CClassifyComboBox*`, `CClassifyTreeViewModel` | Left-side category tree (by type) |
| `CAdvanceFileFilterMgr`, `CAdvancedFilterBtn`, `CFilterGuideWnd`, `CFileExtensionGroupWnd`, `CFileTypeTagTabGroupWnd` | Filtering UI (advanced filter = extensions/size/date) |
| `CSetClassifyThread`, `CSetFilterThread`, `CSortNodeThread`, `CCheckNodeThread`, `CCheckNodesThread`, `CSelNodeThread` | Async workers that classify / filter / sort / validate / select tree nodes |
| `CListIconController`, `CClassifyListIconController`, `CGetListThumbnailThread` | Icon + thumbnail rendering |

### 3.5 Preview subsystem
| Class | Role |
|---|---|
| `CPreviewController`, `CPreviewModel` | Preview orchestration |
| `PreviewMainDialog`, `CPreviewMainShadowWnd`, `EmbeddedPreviewWindow` | Preview shell |
| `ImagePreviewWindow`, `VideoPreviewWnd`, `RichTextPreviewWindow`, `ArchivePreviewWindow` (+Model/View/Delegate/Stub), `AVpreviewStub` | Per-type previewers |
| `PreviewFailedWnd`, `CVideoPreviewTipsWnd` | Failure / guidance states |
| `CPDFRepairGetPixmapThread` | PDF page raster for preview |
| `IInWindowStream` | In-window streaming interface (large files previewed w/o full load) |

### 3.6 Recovery phase
| Class | Role |
|---|---|
| `IRecoveryController` family: `CGenericRecoveryController`, `CDeletedRecoveryController`, `CCompleteRecoveryController`, `CRecycleBinRecoveryController`, `CCloudRecoveryController` | Recovery strategies per scan type |
| `ChooseDestinationPathDialog` + `ChooseDestinationPathItem` | Destination picker (warns: "We highly recommend saving the found data to a different drive or a network drive") |
| `EndRecoverThread` | Finalizes recovery, writes log |
| `CAutoRecoverMgr` + `CAutoRecoverEntryWnd/OpenWnd/CloseWnd/SettingWnd` | "Auto-Recover" (auto-save found files after Advanced Scan) |
| `recoverLayerTipWnd` family | Result overlay tips |

### 3.7 Repair flows (hosted in DRWUI, executed by Fixo chain)
| Class chain | Flow |
|---|---|
| `CRepairVideoController`, `CRepairVideoHomeWnd` → `CRapairVideoAddWnd` → `CRepairVideoGetSampleWnd` (sample file for moov repair) → `CRepairVideoAdvancedAddWnd`/`CRepairVideoAdvancedAnalyzeWnd` → `CRepairVideoItemsWnd` → `RepairingWnd` → `CRepairVideoSaveWnd` | Video repair wizard |
| `CRepairPDFController`, `CRepairPDFHomeWnd` → `CRapairPDFAddWnd` → `CRepairPDFDecryptWnd`/`CRepairPDFDecryptSuccessWnd` (encrypted PDFs) → `CRepairPDFItemsWnd` → `CRepairPDFPreviewWnd` → `CRepairPDFSaveWnd` | PDF repair wizard |
| `ArchiveRepairThread`, `FileRepairAddThread`, `FileRepairThread`, `FileRepairSaveThread` | Generic repair workers |
| `RepairPreviewCompareWnd`, `RepairOriginalWnd`, `RepairedBottomWnd` | Before/after compare UI |

### 3.8 Search-controller interfaces (bridge to engines)
RTTI in DRWUI declares the SAME interface family the engines implement:
- `IFileSystemSearchController` — full (complete) scan
- `IQuickFileSystemSearchController` — quick scan
- `ICompleteFileSystemSearchController` — deep/advanced scan
- `ICloudSearchController` / `CloudSearchController` — cloud
- `CRAWSearchController` — raw carving controller (pairs with RAWSearchDLL)

This is the contract DRWUI holds against `EUCreate<FS>Searcher` factories in the 9 engine DLLs.

## 4. User Flow (what the user sees, end to end — string-verified)

1. **Launch**: `SplashWindow` → `DrwHomePage` with `DrwHomePartListView` — lists local
   disks/partitions ("SSD (C:)" style labels), plus tiles: Cloud (`CHomeCloudDriveView`),
   NAS (`CNasStartPage`), Linux RAID, SBackup, Repair (`FileRepairHomePage`), peripherals.
2. **Choose target**: pick a partition/disk → `PartitionStartWnd` (or a specialized start wnd).
   BitLocker volumes open `CBitlockerStartWnd` → unlock via password/recovery key
   (`BitlockerUnlockThread`; keys fetched through DRWService.exe FVE pipe).
3. **Scan start**: `CScanMgr` → `CDoScan*` strategy → engine `EUCreate<FS>Searcher` in-proc.
   Progress via `CUIScanProgressInfo` ("%1 file chunks scanned...", "%1 files %2 have been found.").
4. **Quick→Advanced**: `CQuickScanCompleteWnd` offers "Advanced Data Recovery" —
   "Advanced Scan is searching files sector by sector to ensure data recovery as much as possible."
   (deep/raw pass engages `CRAWSearchController` + RAWSearchDLL 190+ analysers).
   "Set Auto-Recover After Advanced Scan Completed" option exists (`CAutoRecoverMgr`).
5. **Organizing**: "Organizing Found Files" — tree building (`CDirectoryTreeManager` /
   engine-side tree builders), classification (`CSetClassifyThread`, FileFilter.xml 8 categories /
   1489 extensions), validation (`CCheckNodeThread`s verify recoverability).
6. **Results screen**: tree + classify panes; filtering (`CAdvanceFileFilterMgr`); sorting
   (`CSortNodeThread`); search; previews (`CPreviewController` → per-type preview windows).
7. **Selection & recovery**: checkboxes across tree → Recover → `ChooseDestinationPathDialog`
   → `*RecoveryController` strategy → files copied out via engine IO (EPMNtDrv raw reads where
   needed) → "Recovery Successful" / "%1/%2 files" + recovery log; failed list if any.
8. **Session persistence**: "Save Scan Session" / "Load Scan Session" / "Import Scan Result"
   → `.rsf` files (CryptoAPI-encrypted; see SaveScan artifact).
9. **Free/paid gating**: "Recover remaining", "Unlock Full Recovery", "Recover unlimited",
   "%1 free recovery capacity." — licensing UI hooks (EUinApp, activation via EuRepairHost).

## 5. Async/Threading Model

44 RTTI thread classes — DRWUI is aggressively async so the UI never blocks on engine IO:
- **Connect threads**: `CNasConnectThread`/`CNasCancelConnectThread`/`CNasDownloadConnectZipThread`,
  `CLinux*` equivalents, `CSBackupDownloadConnectZipThread` — log into remote box, download +
  extract the remote agent (zip), start it.
- **Enumeration**: `CEnumPartitionThread`, `CheckPartitionThread`, `CRefreshCacheThread`.
- **Result wrangling**: `CheckAnsyncToListThread`, `CCheckNodeThread(s)`, `CSelNodeThread`,
  `CSetClassifyThread`, `CSetFilterThread`, `CSortNodeThread`.
- **Media**: `CGetListThumbnailThread`, `CPDFRepairGetPixmapThread`.
- **Lifecycle**: `CStopScanThread`, `EndRecoverThread`, `CGoHomeThread`, `MainWndExitThread`,
  `CheckUpdateThread`, `CommonThreadPoolMgr` (shared pool).

## 6. Notable Modern Features (RTTI/string evidence)

- `AIAssistantTipDialog`, "AI Recovery Insight:" — AI-assisted results summary
- `DrwAIDedupWindow` — AI duplicate grouping in results
- "Point-in-Time Recovery" — restore to a previous state
- `ExitGuideChronoSnapDlg`, `TimedGuide`, `CUserGuidTipWnd` — onboarding/guidance system
- `AdToolPopWindow`, `CBuyGuideWnd`, `ChinaMainlandbuyIeWnd` — monetization surfaces
- `DrwFlyoutWindow` — modern flyout panel
- `InnerWebWindow`, `WeChatEmbedIeWnd` — embedded web content (CWeChatIEWnd via IE engine)

## 7. Cross-links

- Engine plugin contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- MOM module system (partition ops): `artifacts/PartitionRecovery/mom-module-system--architecture.md`
- Kernel raw-IO path: `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md`, `architecture/02-kernel-driver-architecture.md`
- Launcher/supervisor: `artifacts/DRW-exe--launcher.md`
- BitLocker service: `artifacts/DRWService-exe--bitlocker-service.md`
- Session files: `artifacts/SaveScan/`
- Config data (categories/filters): `artifacts/config-files/config-data-reference.md`
- Build tree (project layout): `architecture/01-build-tree-intelligence.md`
- Full decompiled C (pending CI drwui batch): `re-workspace/reversed/ghidra-drwui/`

## 8. Confidence & Verification

- All class names: extracted from DRWUI.exe RTTI type descriptors (runtime type info,
  ground truth — cannot be hallucinated); 1073 classes inventoried in `re-workspace/rtti_classes.json`.
- All quoted UI strings: present in DRWUI Qt string tables (`qt_strings_english.txt`) or
  English.qm (`re-workspace/docs/` parse) — byte-exact quotes.
- Interface families cross-checked against NTFSSearchDLL RTTI + exports (EUCreate factories).
- Pending: Ghidra decompilation of DRWUI (30MB) — will confirm call graphs; conclusions above
  are structural (RTTI + strings + imports), not speculative.

---

## 9. DECOMPILED CONFIRMATIONS (Ghidra, 119,182 functions / 2.38M lines — added after CI batch)

### 9.1 Embedded source tree (55 trace calls carry `__FILE__`/`__FUNCTION__` strings)

DRWUI's trace macro emits source file/function names. Extracted internal structure:

**DRWIntelligentScan library (statically linked INTO DRWUI):**
| Source path | Meaning |
|---|---|
| `drwintelligentscan\recoverycontroller\genericrecoverycontroller.cpp` | `CGenericRecoveryController` — scan orchestration ("Insert lost partition %s, %d, StartSector=%I64d, TotalSector=%I64d") |
| `drwintelligentscan\filerecover\filerecover.cpp` | the file-recovery engine core |
| `drwintelligentscan\hfspluslib\{attribute,btree,btreeoption,catalog,extents,journal,rawfile,volume}.cpp` | FULL HFS+ implementation inside DRWUI (parallel to HFSPlusSearchDLL.dll) |
| `drwintelligentscan\cloudsearch\cloud.cpp` | cloud scan logic |
| `drwintelligentscan\storagedevicemodule\cremotedevice.cpp` | `CRemoteDevice` (NAS connect/retry) |
| `drwintelligentscan\uicontroller\eushare\{eushare,fileio,mrxioctl}.cpp` | **EuShare user-mode controller — the \\.\EuRdrDN client!** |
| `drwintelligentscan\qtdrwui\detailpage\bottomarea.cpp` | scan-type/status UI |

**EuPEMaker (WinPE bootable-media builder, ~20 files):** copywinpe{,_win7,_win8}, dosdevice,
extractmanifest, genwow64, grabdriver, grabpe{,3,4,check}, makeiso, makepe{,3,4},
ntsecurity, osversion, pecommon, pemaker, pewow64, regio, wow64fsredirection + `pe_uilogic\peuilogic.cpp`.

**External:** `h:\awork\euactiveonline3.1\source\euactiveonline\euactiveonline.cpp` (activation lib).

**Function-name traces (selected):** `CEnumNasDevice::{Connect,CreateRemoteDevice}`,
`CRemoteDevice::Connect` ("Retry NAS Connect"), `EnumCollectPartition::{EnumDevice,EnumDiskDevice,RemoveCache}`
("Enum disk begin/end"), `CRecoveryMgr::{initDataSource,ExportThread,doCancelRecovery}`
("RecoveryCnt:%d RecoveryFileSize:%I64d"), `SearchDataSource::OnCheckNode`,
`VAPreviewListener::{RecvThumbnailBmpData,SyncWait4DataBack}` (socket IPC to preview helper —
"failed got socket", "failed send data to peer"), `OfficePreviewStub::OnOpenViewerThreadPro`,
`FileRepairGeneralRealize::terminal_process_tree`, `ApowersoftSDK::doGetWXSDKURL` (WeChat SDK),
`COnlineConfigFirebase::init`, `CChinaUser::Check` ("ChinaIPOK!"), `CVersionCtrl::doCheckUpdate`,
`CameraDeviceManager::*` (camera/peripheral device class).

### 9.2 Engine plugin contract — DECOMPILED (the exact code)

**Module loader** `FUN_14056c0d0` — LoadLibraryW's 10 engines into a global table:
RAW/FAT/exFAT/Ext2/EXT4/NTFS/HFSPlus/ReFS/Btrfs/Zfs SearchDLL.dll (handles at `DAT_1425e6d30..78`).

**FS-type → factory mapping** `FUN_140577d40` (Quick scan):
| FS code | Factory |
|---|---|
| 0,1,2 | EUCreateFATQuickSearcher |
| 3 | EUCreateNTFSQuickSearcher |
| 4,5 | EUCreateEXT2QuickSearcher |
| 7 | EUCreateEXFATQuickSearcher |
| 8 | EUCreateHFSQuickSearcher |
| 9 | EUCreateEXT4QuickSearcher |
| 10 | EUCreateReFSQuickSearcher |
| 13 | EUCreateZFSQuickSearcher |
| (3rd dispatcher) | EUCreateBtrfsQuickSearcher |

Pattern: `GetProcAddress(hModule, "EUCreate<FS>QuickSearcher")(&outPtr)` — factory fills
an interface pointer (C-style, no registry).

**Complete/Advanced scan** `FUN_140580720` — creates the FULL searcher set and appends each
to a `std::list`: `EUCreateNTFSSearcher`, `EUCreateFATSearcher`, `EUCreateEXFATSearcher`,
`EUCreateZFSSearcher`, `EUCreateHFSSearcher`, `EUCreateReFSSearcher`, and (gated on a global
setting at +0x60) `EUCreateRAWSearcher` — for the RAW searcher it also registers a
`std::function<string(string,string)>` callback (FUN_140161fb0) via vtable+0x48 (per-file
naming/filter hook into the carving engine). Final vtable+0x20 call passes scan mode.
→ **Advanced scan = ALL FS engines in full mode + RAW carving engine, in parallel.**

**CGenericRecoveryController scan setup** (trace at line ~904140): builds FS→searcher map
{NTFS, EXFAT, FAT, ReFS, ZFS} (FUN_140588760), reads partition list, defaults sector size
512 (0x200), then logs "Insert lost partition %s, %d, StartSector=%I64d, TotalSector=%I64d"
per lost partition — lost partitions are inserted as scan targets directly.

### 9.3 EuRdr user-mode protocol (mrxioctl.cpp — DECOMPILED)

`CEuShare::OpenMrx` (`FUN_1404a2b60`): `CreateFileW(L"\\\\.\\EuRdrDN", GENERIC_READ|WRITE,
share_all, OPEN_EXISTING)` — error log cites mrxioctl.cpp:0x25.

IOCTL protocol (CTL_CODE custom device 0x14, METHOD_BUFFERED):
| IOCTL | In → Out | Role (by buffer shape) |
|---|---|---|
| 0x140320 | 0x308B → 8B | add/update session slot (matches driver's 0x180×8 slot table + name) |
| 0x140324 | 0 → 0x1844B | dump all session slots + drive-letter state |
| 0x140328 | 0x308B → 0 | remove/teardown session |
| 0x1404b0 | 4B → var | query drive-letter mapping |
| 0x1404b4 | 0x18B → 4B | set slot/letter parameters |
| 0x140640 | 0 → 0 | cancel/disconnect all |
| 0x140644 | 0 → 0 | reset/flush |

(Error-log line numbers 0x25/0x4c/... in the binary confirm per-function placement.)

### 9.4 Deep-scan RAW gate

`FUN_1400b1f30()` returns a settings object; field +0x60 != 0 gates RAWSearcher creation —
a user/config toggle ("Enable RAW/deep carving") consulted at complete-scan build time.
