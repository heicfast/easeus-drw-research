# 04 — The Complete File-Recovery Workflow (Step by Step, Byte-Verified)

> This is the master cross-linked workflow document connecting every subsystem.
> Every claim is verified against: Ghidra decompilation (DRWUI 2.38M lines, engines 349K lines,
> drivers 42K lines), RTTI type descriptors (6,903 classes), export tables, UI string tables,
> config files. Source citations given per step.

## 0. Cast of components (one-line roles)

| Component | Role | Evidence |
|---|---|---|
| DRW.exe (DRWLoader) | supervisor: launches DRWUI, watches crash events, restarts, runs DRWReport | artifacts/DRW-exe--launcher.md |
| DRWUI.exe | entire UI + orchestration (119,182 functions) | artifacts/DRWUI-exe--main-ui-architecture.md |
| *SearchDLL.dll ×9 | per-FS scan engines (plugin contract EUCreate*) | artifacts/SearchDLL/searchdll-family--architecture.md |
| RAWSearchDLL.dll | 190+ format carvers (signature engine + raw_signs.json) | same |
| PartitionRecovery (.mo + MainModule.dll) | partition ops engine (MOM module system) | artifacts/PartitionRecovery/mom-module-system--architecture.md |
| eprdtdrv.sys (EPMNtDrv) + siblings | raw sector IO driver `\Device\EPMNtDRV`, `\\.\EPRDTDRV\d\p` | artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md |
| DRWService.exe | BitLocker FVE auto-unlock key service (pipe DRWBitlocker) | artifacts/DRWService-exe--bitlocker-service.md |
| EuMrx.sys + libssh2 | NAS virtual-drive redirector + SSH agent push | artifacts/EuShare/eumrx-nas-architecture.md |
| cloud_session.dll / EuICloudRecovery.dll | OAuth2 cloud drives / full iCloud client | artifacts/Cloud/cloud-recovery-architecture.md |
| Fixo repair chain (EuRepairHost → repair EXEs) | file repair (video/PDF/office/archive/image) | artifacts/FileRepair/repair-architecture.md |
| SaveScan (.rsf) | scan-session persistence: zlib-chunked compressed records (CORRECTED — not CryptoAPI; see rsf artifact §1) | artifacts/SaveScan/ |

## 1. LAUNCH — what the user sees first

1. `DRW.exe` (DRWLoader, `E:\DRW\_drw_main\DRWIntelligentScan\DRWLoader`) starts, creates
   `DRW_Crash_{GUID}` + `DRW_Memory_Crash_{GUID}` events, spawns **DRWUI.exe**, enters
   watchdog loop (flushes a 2MB shared log buffer every 5 s; on crash → DRWReport.exe with
   Elapsed/Error/Result JSON → restart DRWUI).
2. DRWUI shows `SplashWindow` → `DrwMainWindow` shell; `DrwMainViewManagerWizard` swaps views.
3. **Home screen** (`DrwHomePage` + `DrwHomePartListView`): local disks/partitions
   ("SSD (C:)" labels) via `EnumCollectPartition::EnumDevice` ("Enum disk begin/end" traces) +
   tiles: Cloud, NAS, Linux RAID, SBackup, Repair, peripherals (`PeripheralHomeView`,
   `CameraDeviceManager::*`), WeChat (`CWeChat*`).
4. Background: `CheckUpdateThread` (CVersionCtrl::doCheckUpdate), firebase remote config fetch
   (`firebasefetch.exe` → `COnlineConfigFirebase`), licensing state via EUinApp/activation
   (`euactiveonline`), ad/tool popups (`AdToolPopWindow`, monetization surfaces).

## 2. TARGET SELECTION — scenario routing

| User picks | Start window | Scan strategy (RTTI) |
|---|---|---|
| A partition/disk | PartitionStartWnd | CDoScanPartition → CGenericRecoveryController |
| Lost/whole disk | DrwLostDiskPage / CLostPartition* | CDoScanLostPartition (deep+partition analysis) |
| BitLocker volume | CBitlockerStartWnd → Unlock dialogs | BitlockerUnlockThread (keys via DRWService FVE pipe; XTS-AES via OpenSSL for content) |
| NAS | CNasStartPage → Logon → SSH → Device pages | CDoScanRemoteDevice (EuMrx redirector path) |
| Cloud | CHomeCloudLoggingWnd → drive pick | CDoScanCloudDevice + CloudSearchController |
| Recycle Bin | (context) | CRecycleBinRecoveryController |
| SD/camera | CSDCardDeviceListPage | peripheral device flow |
| Repair | FileRepairHomePage | repair chain (separate doc) |

## 3. SCAN SETUP — engine wiring (decompiled, FUN_14056c0d0 / FUN_140577d40 / FUN_140580720)

1. DRWUI has already `LoadLibraryW`'d all 10 engine DLLs into globals
   (`DAT_1425e6d30..78`: NTFS/FAT/exFAT/Ext2/EXT4/HFSPlus/ReFS/Btrfs/ZFS/RAW).
2. **Quick scan**: FS type of the selected volume (partition table / boot-sector probe by
   PartitionRecovery analysers) indexes the factory map — FS codes **0-2=FAT, 3=NTFS, 4-5=EXT2,
   7=exFAT, 8=HFS, 9=EXT4, 10=ReFS, 13=ZFS** (+Btrfs) →
   `GetProcAddress(h, "EUCreate<FS>QuickSearcher")(&p)` → engine returns
   `IQuickFileSystemSearchController*`.
3. **Advanced/Deep scan** (`FUN_140580720`): creates the FULL searcher set —
   `EUCreate{NTFS,FAT,EXFAT,ZFS,HFS,ReFS}Searcher` — appends each to a `std::list`, plus
   `EUCreateRAWSearcher` when settings flag (+0x60) enables carving; registers a
   `std::function<string(string,string)>` naming/filter callback into the RAW engine
   (vtable+0x48). "Advanced Scan is searching files sector by sector..." (UI string).
4. `CGenericRecoveryController` (genericrecoverycontroller.cpp) builds the FS→searcher map,
   reads the partition list, inserts lost partitions as additional scan targets
   ("Insert lost partition %s, %d, StartSector=%I64d, TotalSector=%I64d"), sector size
   default 512.

## 4. THE SCAN ITSELF — how files are actually found

Two complementary mechanisms run concurrently:

### 4a. Filesystem-structured scan (per engine)
- Engine opens the volume: normal file API when possible, else raw via EPMNtDrv
  (`\\.\EPRDTDRV\<disk#>\<part#>`; capa confirmed IOCTL sites e.g. NTFSSearchDLL 0x18002C0BA).
  BitLocker volumes: FVE keys via `\\.\Pipe\DRWBitlocker` (DRWService reads
  `HKLM\...\FVEAutoUnlock`), content decrypted XTS-AES (BitLockerLib strings).
- NTFS: MFT walk (CNTFSSearchController 0x940 bytes; attribute classes per record) + volume
  bitmap builder (CNTFSBuildVolumeBitmap — the "auxiliary bitmap" also seen in the NAS agent
  logs euAuxiliaryBitmaplog). FAT/exFAT: FAT chain + directory-entry walk. ext2/3/4: inode +
  extent tree (CExtentTreeDataModel UI-side mirror). HFS+: catalog/extents B-trees (hfspluslib
  8 source files). ReFS/Btrfs/ZFS: their own metadata walks (Btrfs = ZLIB inflate + RC4 for
  compressed/encrypted subvolumes — capa evidence).
- Deleted files: records present but unlinked → engine keeps them, marks deletion state.

### 4b. RAW carving (signature scan — the "sector by sector" pass)
- RAWSearchDLL: 190+ `IRawFileAnalyser` format handlers (JPG, PNG, ZIP, RAR, PST, HEIC, MXF,
  MOV, ...) + signature DB raw_signs.json (139 extensions: header/tail hex + offset +
  confidence + min/max size, tinyxml2-parsed at runtime).
- Signature maps as ordered std::maps (e.g. JPG: 0xFFD8FFE0/E1/DB/EE → handlers), FLOSS
  confirmed obfuscated stackstrings hide copyright/signature strings.
- Carver reads sectors (via same volume IO), recognizes headers, walks/tails per format
  grammar, emits "raw" file nodes (no directory attribution) with per-format confidence.

## 5. TREE BUILDING & ORGANIZATION — "Organizing Found Files"

1. Structured results → directory tree: `CDirectoryTreeManager` (DRWUI) + engine-side builders
   (`CDirectoryTreeBuilder`, `IRawDirectoryTreeBuilder`, `CBtrfsQuickTreeBuilder` RTTI);
   deleted folders reconstructed from FS records; raw carved files → flat/lost views
   (`LostTreeModel`/`LostTableModel`, "&Other deleted files", "&Lost data not found").
2. **Classification**: `CSetClassifyThread` applies FileFilter.xml (8 categories:
   Graphics, Video, Audio, Document, Email, Web&Others, Archive, Folders — 1,489 extensions)
   → `CClassifyLeftTreeView`/models. EUUserData provides MIME/magic-level typing.
3. **Validation**: `CCheckNodeThread(s)`/`CheckAnsyncToListThread` ("SearchDataSource::OnCheckNode")
   verify each node's recoverability (extent readability, size sanity).
4. **Filtering**: `CAdvanceFileFilterMgr` + FilterFolder.ini junk rules; advanced filter =
   extension/size/date (CAdvancedFilterBtn, CFilterGuideWnd). Runs in `CSetFilterThread`.
5. **Sorting/selection**: `CSortNodeThread`, `CSelNodeThread`; thumbnails async
   (`CGetListThumbnailThread`; cloud thumbnails via fillGlobalForCloudThumbnail download tasks —
   filerecover.cpp:0x429 trace).
6. Progress UI: `CUIScanProgressInfo` ("%1 file chunks scanned...", "%1 files %2 have been
   found."); quick-scan completion offers Advanced (`CQuickScanCompleteWnd`); auto-recover
   option engages `CAutoRecoverMgr` (state 5 "Auto_Trigger_Recover").

## 6. PREVIEW — what the user can inspect before recovering

`CPreviewController` → per-type: `ImagePreviewWindow` (thumbnail→full), `VideoPreviewWnd`
(+`VAPreviewListener` socket IPC to a media helper — "failed got socket/send data to peer",
`AVpreviewStub`), `RichTextPreviewWindow`, `ArchivePreview*` (browse inside archives),
`EmbeddedPreviewWindow`/`IInWindowStream` (large-file streaming preview), PDF via
`CPDFRepairGetPixmapThread`; office viewers are separate EXEs (`EUOfficeViewer.exe`,
`EUHwpViewer.exe`, `PDFViewer.exe`) launched by `OfficePreviewStub::OnOpenViewerThreadPro`
(process-tree termination helpers on close).

## 7. RECOVERY — copying data out (decompiled CRecoveryMgr chain)

1. User selects nodes → **Recover** → `ChooseDestinationPathDialog`
   ("We highly recommend saving the found data to a different drive or a network drive").
2. `CRecoveryMgr::initDataSource` (initDataSource:0x34f trace): recovery-type dispatch —
   type 2 → normal data source; type 3 → alt; **type 5 → AutoRecoverDataSource
   ("Auto_Trigger_Recover")**; **type 6 → upgrade-flow source ("Recovering_Click_Upgrade")**
   when free-limit gating triggers ("%1 free recovery capacity." / "Unlock Full Recovery").
   Logs "RecoveryCnt:%d RecoveryFileSize:%I64d".
3. `CRecoveryMgr::ExportThread` (thread proc): PID/TID trace → cancel checks → destination
   validation: `PathIsNetworkPathW`? → local: opens **`\\.\X:`** raw volume of destination
   (writability + same-volume detection), falls back to `PathFileExistsW`; network:
   attribute checks. Then progress/completion callbacks (vtable+8/+0x10, progress forced to
   100.0 = 0x4059000000000000 on completion).
4. Dispatcher (`FUN_1401ebd00`): locale facet, path separator normalization
   (`replace('\\','/')`, 0x5c→0x2f), first selected item acquisition, mode routing; sets
   global "recovery in progress" flag; on finish closes IO object (vtable+0x18).
5. Per-target export loop (`FUN_1401ec0d0`): iterates selected nodes, creates destination
   directories (`CreateDirectoryW`), reconstructs paths (find_last_of('/')), resolves each
   item via global item manager (`FUN_1401b50f0/1401b65b0`), streams content:
   **source reads come from the engine/scan-session abstraction (vtable-mediated
   IFileProperties/IInWindowStream), which for damaged volumes read through EPMNtDrv raw
   sector IO**; writes go to destination via normal file APIs. Failures collected for the
   recovery log ("(1-Import Scan Result", "%1 files/%2 failed; for details, you may check the
   recovery log").
6. Results: "Recovery Successful" / "Recovered: %1/%2 files" surfaces; `EndRecoverThread`
   finalizes; `CAutoRecoverMgr` windows for the auto flow; destination saved to cloud is also
   possible for cloud scans (onedrive_cloud_stream / ICloudDriveUploadTask, quota-checked).

## 8. SESSION PERSISTENCE (between sessions)

"Save Scan Session" → `.rsf` (magic `EA F4 B3 1B…`, 16-byte session ids, 36-byte record
headers chaining zlib-chunked data: session flags → volume name+timestamp → scan metadata →
the FULL found-file tree; fully reversed + validated parser — see
`artifacts/SaveScan/rsf-format--scan-session.md` incl. corrections register). Loaded via
"Load Scan Session"/"Select scan session" — lets the user close the app and resume/recover
later without rescanning; import-from-file exists ("(1-Import Scan Result").
Related config cache: `DRWCfg.bin` (AES-256-CBC, hardcoded key —
`artifacts/config-files/drwcfg-bin--aes-config-cache.md`).

## 9. REPAIR (when files are damaged)

Post-recovery, corrupt files route to the Fixo chain: DRWUI repair wizards → EuRepairHost.exe
(activation bridge) → repair engines. Video: weighted ISO-BMFF atom grammar + two-scan +
bitmap fragment tracking + sample-moov fallback (125 trace points decoded). PDF: xref
surgery + decrypt. Office: HWPX container + OpenSSL CFB decrypt + OOXML shell synthesis.
Archive: 7z next-header recovery. Images: 21 RAW formats + libjpeg surgery + OpenCV enhance.
Full detail: artifacts/FileRepair/repair-architecture.md.

## 10. FAILURE/EDGE PATHS

- Crash: DRWLoader watchdog → DRWReport.exe (19K functions: minidump + Elapsed/Error/Result
  JSON + send_dmp_with_aliyun upload path) → DRWUI restart.
- Locked volumes: EUDCPEPM/EUEDKEPM hook drivers (device-stack UpperFilter in WinPE:
  epmdiskcopydrv) + volume lock via PartitionRecovery pending-op engine.
- Disk not writable/BITLOCKER locked: unlock dialogs (password/recovery-key; FVE keys via
  service; BitLockerLib PowerShell manage-bde fallback + registry FVE reads).
- NAS errors: CNasNetErrorTipsWnd, CNasEnumFailedPage, "Incorrect IP or port or disabled SSH
  service", retry logic in CRemoteDevice::Connect ("retry %d").

## 11. DATA-FLOW DIAGRAM (end-to-end, single picture)

```
                    USER
                     │ picks target
        ┌────────────▼────────────┐
        │ DRWUI (CScanMgr/        │
        │  CDoScanPartition/...)  │
        └───┬──────────────┬──────┘
   LoadLibrary+GetProc     │ UI/progress
   EUCreate*Searcher       │
        ┌───▼──────────┐   │
        │ *SearchDLL   │   │
        │ MFT/FAT/inode│   │
        │ /B-tree walk │   │
        └───┬──────────┘   │
   volume IO (file API or raw)
        ┌───▼──────────────┐
        │ \\.\EPRDTDRV\d\p │  ← EPMNtDrv (eprdtdrv.sys): IRP_MJ_READ MDL async,
        │  \Device\EPMNDRV │    512-byte sectors, pass-through IOCTLs
        └──────────────────┘
        + RAWSearchDLL carving pass (raw_signs.json, 190+ analysers)
                     │ found nodes (paths, extents, attrs, deleted state)
        ┌────────────▼────────────┐
        │ tree build → classify   │ (FileFilter.xml 1489 ext / EUUserData)
        │ → check → filter → sort │ (CCheckNodeThread, CAdvanceFileFilterMgr)
        └────────────┬────────────┘
                     │ user selects + previews
        ┌────────────▼────────────┐
        │ CRecoveryMgr export     │ dest validation (\\.\X: raw open)
        │ engine-stream read ────►│──► normal file writes to dest
        └─────────────────────────┘
   damaged? → Fixo repair chain      save/load .rsf (zlib-chunked records, CRSDataEx)
```

## 12. Verification ledger

| Claim | Verified by |
|---|---|
| FS code → factory map | DRWUI decompiled FUN_140577d40 switch |
| Advanced = full searchers + RAW + callback | FUN_140580720 |
| Lost partitions inserted with StartSector/TotalSector | trace @ genericrecoverycontroller.cpp |
| Destination validated by opening `\\.\X:` | CRecoveryMgr::ExportThread decompiled |
| Recovery types 5/6 = auto/upgrade | initDataSource trace + strings |
| Raw IO contract (512-byte sectors, MDL) | eprdtdrv decompiled (FltReadWriteSectorsCompletion, len<<9) |
| Carving signature DB semantics | raw_signs.json parse + RAWSearchDLL decompiled |
| Cloud/NAS/BitLocker chains | per-artifact evidence (strings/RTTI/IOCTLs) |
| .rsf = zlib-chunked records (writer CSaveAndRestoreResult::SaveResult; GUID constants matched to all samples) | rsf artifact §1-5 + scripts/rsf_parser.py |
| UI flow (landing page, scan→results stack switching, preview 15s cap) | independently re-verified doc-agent — see `05-uiux-architecture.md` §10 |
