# Runtime Family: Windows system shims shipped for portability

**Pattern**: `^(dbghelp|ole32|msi|oledlg|legacy|PubLog)\.dll$`  
**Shipped copies**: 10 across the tree  
**Role**: Local copies of system DLLs pinned for older-Windows/WinPE compat (dbghelp for crash minidumps, msi/oledlg for PE, legacy.dll + PubLog.dll are EaseUS-authored utility glue).

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/PubLog.dll`
- `BUILDPE/EaseUS-x64/dbghelp.dll`
- `BUILDPE/EaseUS-x64/legacy.dll`
- `BUILDPE/x64/Windows/SysWOW64/msi.dll`
- `BUILDPE/x64/Windows/SysWOW64/oledlg.dll`
- `BUILDPE/x64/Windows/system32/msi.dll`
- `BUILDPE/x64/Windows/system32/oledlg.dll`
- `PubLog.dll`
- `dbghelp.dll`
- `legacy.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `DRW.exe`
- `DRWReport.exe`
- `DRWUI.exe`
- `EUHwpViewer.exe`
- `EUOfficeViewer.exe`
- `EuOfficeRepairWin32.exe`
- `EuUserRate.dll`
- `FATSearchDLL.dll`
- `GDIPLUS.DLL`
- `NTFSSearchDLL.dll`
- `PDFViewer.exe`
- `PartitionRecovery/BitLockerLib.dll`
- `PartitionRecovery/CloneModule.dll`
- `PartitionRecovery/Device.mo`
- `PartitionRecovery/DeviceManager.mo`
- `PartitionRecovery/LdmManager.mo`
- `PartitionRecovery/Log.mo`
- `PartitionRecovery/MainModule.dll`
- `PartitionRecovery/PartitionRecovery.dll`
- `PartitionRecovery/Qt5Core.dll`
- `PartitionRecovery/RecoveryModule.dll`
- `PartitionRecovery/ToolsModule.dll`
- `PartitionRecovery/UILogic.dll`
- `PartitionRecovery/bitlockerhelp.mo`
- `Qt5Core.dll`
- `Qt5Gui.dll`
- `Qt5Network.dll`
- `Qt5Widgets.dll`
- `Qt5WinExtras.dll`
- `RAWSearchDLL.dll`
- `firebasefetch.exe`
- `firebaseonlineconfig.dll`
- `msvcm90.dll`
- `platforms/qminimal.dll`
- `platforms/qwindows.dll`
- `unins000.exe`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/DRW.exe`
- `BUILDPE/EaseUS-x64/DRWReport.exe`
- `BUILDPE/EaseUS-x64/DRWUI.exe`
- `BUILDPE/EaseUS-x64/EUHwpViewer.exe`
- `BUILDPE/EaseUS-x64/EUOfficeViewer.exe`
- `BUILDPE/EaseUS-x64/EuOfficeRepairWin32.exe`
- `BUILDPE/EaseUS-x64/FATSearchDLL.dll`
- `BUILDPE/EaseUS-x64/GDIPLUS.DLL`
- `BUILDPE/EaseUS-x64/NTFSSearchDLL.dll`
- `BUILDPE/EaseUS-x64/PDFViewer.exe`
- `BUILDPE/EaseUS-x64/Qt5Core.dll`
- `BUILDPE/EaseUS-x64/Qt5Gui.dll`
- `BUILDPE/EaseUS-x64/Qt5Network.dll`
- `BUILDPE/EaseUS-x64/Qt5Widgets.dll`
- `BUILDPE/EaseUS-x64/Qt5WinExtras.dll`
- `BUILDPE/EaseUS-x64/RAWSearchDLL.dll`
- `BUILDPE/EaseUS-x64/firebasefetch.exe`
- `BUILDPE/EaseUS-x64/firebaseonlineconfig.dll`
- `BUILDPE/EaseUS-x64/platforms/qminimal.dll`
- `BUILDPE/EaseUS-x64/platforms/qwindows.dll`
- `BUILDPE/x64/Windows/SysWOW64/msi.dll`
- `BUILDPE/x64/Windows/SysWOW64/oledlg.dll`
- `BUILDPE/x64/Windows/system32/msi.dll`
- `BUILDPE/x64/Windows/system32/oledlg.dll`
- `EUFileRepair/CORE_RL_glib_.dll`
- `EUFileRepair/EUImgRepairFile.exe`
- `EUFileRepair/EuOfficeRepairFile.exe`
- `VideoViewer/EaseUS_VideoViewer.exe`
- `VideoViewer/avcodec-62.dll`
- `VideoViewer/avdevice-62.dll`

## Family members

- dbghelp.dll — crash-dump symbol resolution (DRWReport path)
- msi.dll + oledlg.dll — WinPE-compat copies (both trees + SysWOW64)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
