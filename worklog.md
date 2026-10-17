# EaseUS Data Recovery Wizard — Reverse Engineering Worklog

## Session Info
- Repo: heictojpgpics/easeus-drw-research (private)
- Structure: `og-codebase/` (original) | `re-workspace/` (raw + reversed + artifacts) | `architecture/` (top-level combined knowledge)
- Environment: 2 CPU, 4GB RAM, ~10GB disk, no sudo

## Progress Log

### Stage 0 — Acquisition & Setup [DONE]
- Downloaded Part1 (175MB) + Part2 (164MB), verified zip integrity (no errors)
- Merged into og-codebase/ — 168 top-level items, 674MB, ~1650 files
- Key findings at first survey:
  - Main apps: DRW.exe (launcher), DRWUI.exe (30MB main UI, Qt5), DRWService.exe, DRWReport.exe
  - FS scan engines: NTFSSearchDLL, FATSearchDLL, exFATSearchDLL, EXT4SearchDLL, HFSPlusSearchDLL, RAWSearchDLL, ReFSSearchDLL, BtrfsSearchDLL, ZfsSearchDLL
  - PartitionRecovery/ — .mo module binaries (FileSystemAnalysers: NTFS/FAT/ExFat/Ext/Refs), MainModule.dll, RecoveryModule.dll, ToolsModule.dll, UILogic.dll, PartitionRecovery.dll, RawFixer.dll, Boot.dll, BootDriver.dll, BitLockerLib.dll, CloneModule.dll, Win32Bcd.dll, libvmdk.dll
  - KERNEL DRIVERS: ebrntdrv.sys, epmdkdrv.sys (system32), EUDCPEPM.sys, EUEDKEPM.sys (drivers/), eprdtdrv.sys + eprdtdrv_win7older.sys (PartitionRecovery/)
  - Repair tools: EUFileRepair/ (ImageMagick-based), EUImgRepair, EUVideoRepair.dll, EUArchiveRepair, EUAdobeRepair, EuOfficeRepairWin32, EuPDFRepairFile, EURawImg
  - Viewers: PDFViewer.exe, EUOfficeViewer.exe, EUHwpViewer.exe, VideoViewer/
  - BUILDPE/ = WinPE bootable environment (EaseUS-x64 + x64/Windows with drivers)
  - External/ignore: ffmpeg (VideoViewer), pdfium.dll, Qt5*, VC++ runtimes, api-ms-win-* API sets, ImageMagick CORE_RL_*
- Created GitHub repo, structured local repo (this one)
- Next: tool install, binary classification, GitHub Actions workflows for heavy analysis

### Stage 1 — Toolchain + CI + First Intelligence [DONE]
- Local toolchain: r2, Ghidra 11.3.2 (+JDK21), RetDec 5.0, ilspycmd, capa (rules+sigs), FLOSS, pefile/dnfile/vivisect, diec (partial)
- Ghidra CI workflow FIXED (script compile errors: decompileCompleted/isInitialized) — verified locally: NTFSSearchDLL = 1897 funcs decompiled (1.6MB C)
- CI running: ghidra searchdll+drivers (re-triggered), multitool searchdll/core/partition/repair
- multitool drivers batch DONE → artifacts in re-workspace/reversed/ci-multitool/
- KEY FINDINGS:
  - DRW.exe = DRWLoader (crash-monitor launcher, named events DRW_Crash_{GUID}, launches DRWUI + DRWReport)
  - DRWService.exe = "BitlockerReadFVEService" — pipe \\.\Pipe\DRWBitlocker, reads FVEAutoUnlock registry
  - Drivers: eprdtdrv/ebrntdrv/epmdkdrv = SAME "EPMNtDrv" (device \Device\EPMNTDRV, user path \\.\EPRDTDRV\{d}\{p})
  - EUDCPEPM/EUEDKEPM = device-stack HOOK drivers (DrvHookNextAddDevice) for volume lock/disk copy
  - EuMrx.sys = RDBSS network redirector mini-driver (\Device\EuRdr) for NAS scan
  - raw_signs.json = 139 ext signatures (header/tail hex+confidence, min/max size)
  - EUUserData = MIME/magic DB; Dict = password brute-force dictionary
  - FileFilter.xml = category tree; FilterFolder.ini = junk filtering
  - dlconfig.xml = WAIK ISO byte-range carver for WinPE media building
  - PartitionRecovery .mo files = PE DLL plugins; MainModule = MOM module system + full partition op engine (shared w/ EPM)
  - DRWUI classes: IScanMgr/CScanMgr, CDoScan{Partition,LostPartition,CloudDevice,RemoteDevice}, tree builders (CDirectoryTreeBuilder, IRawDirectoryTreeBuilder, CBtrfsQuickTreeBuilder), classify controllers, preview controllers
  - NTFSSearchDLL RTTI: CNTFSSearchController (0x940 bytes), CNTFSQuickSearch, CNTFSBuildVolumeBitmap, MFT record attribute classes, IFileSystemSearchController interface family
- Artifacts written: architecture/01-build-tree-intelligence.md, architecture/02-kernel-driver-architecture.md

### Stage 2 — Deep RE rounds [IN PROGRESS]
- CI Ghidra searchdll batch v2 SUCCESS: all 9 engines decompiled (349K lines) -> re-workspace/reversed/ghidra-searchdll/
- CI Ghidra drivers batch v2 SUCCESS: all 7 drivers decompiled -> re-workspace/reversed/ghidra-drivers/
- EPMNtDrv internals artifact DONE (IOCTLs 0x60002400/04/08, sector<<9 contract, path parsing, pool tag esdr)
- SearchDLL family artifact DONE (plugin contract, interface hierarchy, RAW engine 190+ analysers, signature maps 0xFFD8FFE0...)
- WinPE architecture artifact DONE (winpeshl.ini flow, regdrv.reg decoded: EUDCPEPM=epmdiskcopydrv disk-class UpperFilter, WAIK ISO carving via dlconfig.xml)
- FileFilter.xml parsed: 8 categories, 1489 extensions
- English.qm parsed: 1537 UI strings
- Running: 5 Ghidra CI batches (core/partition/repair/mo-modules/misc) + 4 multitool CI batches + local Ghidra (DRW.exe, DRWService.exe, InfoForSetup.exe)
- Artifacts so far: architecture/01-03, artifacts/PartitionRecovery/eprdtdrv-sys, artifacts/SearchDLL/searchdll-family

### Stage 3 — Mass decompilation + engine analysis [IN PROGRESS]
- Ghidra CI batches completed: core (659K lines incl DRWReport 612K!), mo-modules (689K lines, 31/31 modules), drivers (42K), searchdll (349K)
- DRWUI batch triggered (30MB, expect hours)
- multitool batches: searchdll/core/partition/repair still running
- Artifacts written:
  - artifacts/DRW-exe--launcher.md (full supervisor loop decoded)
  - artifacts/DRWService-exe--bitlocker-service.md
  - artifacts/FileRepair/repair-architecture.md (Fixo chain: video moov regroup, PDF xref, HWPX, OOXML, 7z)
  - artifacts/PartitionRecovery/mom-module-system--architecture.md (MOM = in-house COM)
  - artifacts/SearchDLL/searchdll-family--architecture.md
  - artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md
  - architecture/01-build-tree, 02-kernel-drivers, 03-winpe
- TOTAL DECOMPILED SO FAR: ~1.74M lines of C across 50 binaries
- Key decoded: DRWLoader watchdog loop, EPMNtDrv IOCTLs, MOM plugin system, RAWSearchDLL 190+ analysers, WinPE boot chain, repair algorithms

### Stage 4 — Session resume + mass decompilation mining [IN PROGRESS, resumed 08:25 UTC]
- Session recovered from context summary; token verified; CI state checked
- Fixed artifact downloader (Azure redirect auth-strip) → scripts/download_artifacts.py
- multitool searchdll batch ingested (capa digest: all engines IOCTL driver access, Btrfs=ZLIB+RC4, exFAT=XOR+FNV)
- DRWUI.exe FULLY DECOMPILED via CI: 119,182 functions / 2.38M lines (56MB)
- misc batch ingested: 2.82M lines (AliyunWrap, EUinApp, EuDownloader, viewers, unins000, send_dmp_with_aliyun)
- repair batch ingested: 4.02M lines / 17 binaries (EuOfficeRepairFile 42K fns, EUImgRepairFile 20K fns, EUImageEnhance=OpenCV2.4 static)
- TOTAL DECOMPILED NOW: ~10M+ lines across ~90 binaries
- Artifacts written this session:
  - artifacts/DRWUI-exe--main-ui-architecture.md (+§9 decompiled confirmations: 41 embedded source paths, factory dispatchers, EuRdr IOCTL protocol 0x140320-0x140644)
  - artifacts/EuShare/eumrx-nas-architecture.md (EuMrx=static RDBSS self-contained, \Device\EuRdr, 8 session slots, 127.0.0.1 loopback rewrite, SSH agent push /tmp/EaseUS, Synology model DB, libssh2 1.11.0)
  - artifacts/FileRepair/repair-architecture.md (+decompiled update: video repair algorithm from 125 trace points, Fixo source tree, HWPX OpenSSL, 7zNextHeader)
  - artifacts/Cloud/cloud-recovery-architecture.md (OAuth2 loopback, esicloud full client, PCS/ADP, firebase config)
- KEY INTELLIGENCE:
  - DRWUI embeds DRWIntelligentScan statically (hfspluslib x8, eushare/mrxioctl, filerecover.cpp, genericrecoverycontroller.cpp)
  - EuPEMaker = WinPE builder inside DRWUI (20 source files)
  - Internal codename "FoxitRestore" (registry SOFTWARE\Foxit Software\FoxitRestore + agent version URL)
  - FS-type codes: 0-2=FAT, 3=NTFS, 4-5=EXT2, 7=exFAT, 8=HFS, 9=EXT4, 10=ReFS, 13=ZFS
  - Advanced scan = all full searchers + RAWSearcher (gated by settings+0x60) w/ filename callback
  - Fixo builds from D:\Fixo\01_Project; video repair from e:\drw monorepo; EuOfficeRepairWin32 from Azure DevOps agent
- CI: 3 multitool batches (core/partition/repair) still running at last check
- NEXT: filerecover.cpp deep-dive, tree/classify/filter internals, top-level architecture docs 04-06, second CI wave for missed binaries

---
Task ID: uiux-1
Agent: UI/UX Research Agent (session 2)
Task: UI/UX-focused deep RE: full userflow, pages, sizing, styling, UI-to-core wiring

Work Log:
- Recovered context from repo (fresh session); synced with main (wave2 + per-binary artifacts ingested by parallel agent)
- Reversed Qt RCC v3 binary format from first principles + verified against Qt 5.15 rcc.cpp/qresource.cpp source
- Wrote scripts/rcc_extract.py (header 24B, 22B nodes, names=len+hash+UTF16BE, blobs=size+content)
- EXTRACTED ALL UI RESOURCES: drw_light.rcc = 3722 files (Home 435, Preview 340, Filter 221, LeftTree 199, ScanProgress 188, Evaluate 162, Titlebar 145, PopWnd 254, FileTypes 105 SVG, DriveTypes 60, AiAssistant 52, NAS 247, PEView 113, Repair 91...) → re-workspace/reversed/ui-resources/drw_light/
- drw_dark.rcc = 3657 files → ui-resources/drw_dark/; DiskHealth.rcc = 125 files incl. 54 QML components → ui-resources/diskhealth/
- DIN-Black.otf + DINCond-Black.otf fonts extracted; ImageResource.xml = device-type→icon map (50 drive types, tree icons, filetype SVGs at 24/48 with runtime scaling to 72/160)
- KEY FINDINGS: FileTypes buckets include special classify folders "File Path Lost", "Tags Extracted", "Unimportant"; CUR hand/zoom cursors for preview; Ad/ + gift/ + Evaluate/ = monetization UI; Introduction/ = first-run tour

Stage Summary:
- Complete visual asset inventory recovered for both themes (7,500+ files) — the definitive "what the user sees" evidence base
- Claiming ownership of: re-workspace/artifacts/UIUX/*, architecture/05-uiux-*.md, re-workspace/reversed/ui-resources/* (parallel agents: avoid these paths)
- Next: QM translation parser (context→source→text), then DRWUI decompiled-code mining for view manager/geometry/userflow

### Stage 5 — Documentation & Cross-Link Completion [DONE 09:35 UTC]
Session deliverables (this agent, alongside parallel UIUX/DOC sessions):
- CI waves completed: drwui (2.38M lines!), partition (1.17M — was un-ingested), repair (4.02M), misc (2.82M), wave2 (DiskHealth/VideoFileRepairer/MediaGraph/libssh2/EuSendMessage)
- multitool searchdll + core batches ingested; partition + repair multitool still running
- TOTAL: ~11M lines decompiled across 110 binaries, 0 misses (phantom entries explained)
- Deep artifacts added (9): DRWUI-exe--main-ui-architecture (master), EuShare/eumrx-nas-architecture, Cloud/cloud-recovery-architecture, PartitionRecovery/rawfixer-fs-repair + mo-module-map + pending-operation-engine, DRWReport-exe--crash-reporter (XCrashReport provenance), Licensing/licensing-activation-chain, SearchDLL/ntfs-engine-internals
- architecture/ docs completed: 00-INDEX, 04-recovery-workflow (master step-by-step), 05-scan-engine-architecture (controller=tree-builder MI decoded), 06-repair-chain, 07-user-flow-uiux; README.md
- 110 per-binary systematic artifacts (scripts/gen_per_binary_artifacts.py, auto-discovers batches)
- KEY DECODES this session: EuRdr IOCTL protocol (7 codes), FS-type→factory codes, EuPEMaker in DRWUI, FoxitRestore codename, EPM shared engine (40+ pending ops), LDM/RegLib/CTbFile in .mo layer, XCrashReport identity, euactiveonline + activation.easeus.com[.cn], DRWUI embeds hfspluslib statically, mrxioctl.cpp in DRWUI
- Corrections synced from parallel session: .rsf = zlib-chunked (not CryptoAPI)
- NEXT: multitool partition/repair ingestion when CI completes, deeper per-FS engine artifacts (FAT/exFAT/ext4/ReFS), EUDCPEPM hook driver deep-dive, DRWLoader DRWReport interop verification at instruction level
