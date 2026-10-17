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
