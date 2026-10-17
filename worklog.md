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
