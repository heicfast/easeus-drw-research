# Runtime Family: Visual C++ runtime — three compiler generations

**Pattern**: `^(msvcp90|msvcr90|mfc90u|msvcp120|msvcr120|msvcp140|vcruntime140|concrt140|msvcm90)\.dll$`  
**Shipped copies**: 23 across the tree  
**Role**: The codebase spans ~12 years of MSVC: VC9 (2008 — engine/legacy modules), VC12 (2013 — mid-generation), VC14 (2015-2022 — current). Each generation's CRT ships because modules of that age still link it.

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/concrt140.dll`
- `BUILDPE/EaseUS-x64/mfc90u.dll`
- `BUILDPE/EaseUS-x64/msvcp120.dll`
- `BUILDPE/EaseUS-x64/msvcp140.dll`
- `BUILDPE/EaseUS-x64/msvcp90.dll`
- `BUILDPE/EaseUS-x64/msvcr120.dll`
- `BUILDPE/EaseUS-x64/msvcr90.dll`
- `BUILDPE/EaseUS-x64/vcruntime140.dll`
- `EUFileRepair/concrt140.dll`
- `EUFileRepair/msvcp140.dll`
- `EUFileRepair/vcruntime140.dll`
- `VideoViewer/msvcp140.dll`
- `VideoViewer/vcruntime140.dll`
- `concrt140.dll`
- `diskhealth/msvcp140.dll`
- `diskhealth/vcruntime140.dll`
- `msvcm90.dll`
- `msvcp120.dll`
- `msvcp140.dll`
- `msvcp90.dll`
- `msvcr120.dll`
- `msvcr90.dll`
- `vcruntime140.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `AliyunWrap.dll`
- `BtrfsSearchDLL.dll`
- `DRW.exe`
- `DRWService.exe`
- `DRWUI.exe`
- `EUAdobeRepair.exe`
- `EUArchiveRepair.exe`
- `EUImgRepair.exe`
- `EURawImg.exe`
- `EUVideoRepair.dll`
- `EUinApp.exe`
- `EXT4SearchDLL.dll`
- `EuICloudRecovery.dll`
- `EuOfficeTools.exe`
- `EuRepairHost.exe`
- `EuUserRate.dll`
- `FATSearchDLL.dll`
- `HFSPlusSearchDLL.dll`
- `Japanese.dll`
- `NTFSSearchDLL.dll`
- `PE_Tools.dll`
- `PartitionRecovery/Boot.dll`
- `PartitionRecovery/BootDriver.dll`
- `PartitionRecovery/Burn.dll`
- `PartitionRecovery/CallbackOperator.mo`
- `PartitionRecovery/CheckVersion.mo`
- `PartitionRecovery/CloneModule.dll`
- `PartitionRecovery/Common.mo`
- `PartitionRecovery/Config.mo`
- `PartitionRecovery/Device.mo`
- `PartitionRecovery/DeviceAdapter.mo`
- `PartitionRecovery/DeviceManager.mo`
- `PartitionRecovery/EFIBoot.mo`
- `PartitionRecovery/Error.mo`
- `PartitionRecovery/ExFatFileSystemAnalyser.mo`
- `PartitionRecovery/ExtFileSystemAnalyser.mo`
- `PartitionRecovery/FATFileSystemAnalyser.mo`
- `PartitionRecovery/FatFormat.mo`
- `PartitionRecovery/FatLib.mo`
- `PartitionRecovery/FileSystem.mo`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/BtrfsSearchDLL.dll`
- `BUILDPE/EaseUS-x64/DRW.exe`
- `BUILDPE/EaseUS-x64/DRWService.exe`
- `BUILDPE/EaseUS-x64/DRWUI.exe`
- `BUILDPE/EaseUS-x64/EUAdobeRepair.exe`
- `BUILDPE/EaseUS-x64/EUArchiveRepair.exe`
- `BUILDPE/EaseUS-x64/EUImgRepair.exe`
- `BUILDPE/EaseUS-x64/EURawImg.exe`
- `BUILDPE/EaseUS-x64/EUVideoRepair.dll`
- `BUILDPE/EaseUS-x64/EUinApp.exe`
- `BUILDPE/EaseUS-x64/EXT4SearchDLL.dll`
- `BUILDPE/EaseUS-x64/EuICloudRecovery.dll`
- `BUILDPE/EaseUS-x64/EuOfficeTools.exe`
- `BUILDPE/EaseUS-x64/EuRepairHost.exe`
- `BUILDPE/EaseUS-x64/EuSendMessage.exe`
- `BUILDPE/EaseUS-x64/FATSearchDLL.dll`
- `BUILDPE/EaseUS-x64/HFSPlusSearchDLL.dll`
- `BUILDPE/EaseUS-x64/Japanese.dll`
- `BUILDPE/EaseUS-x64/NTFSSearchDLL.dll`
- `BUILDPE/EaseUS-x64/PE_Tools.dll`
- `BUILDPE/EaseUS-x64/PubLog.dll`
- `BUILDPE/EaseUS-x64/Qt5Core.dll`
- `BUILDPE/EaseUS-x64/Qt5Gui.dll`
- `BUILDPE/EaseUS-x64/Qt5Network.dll`
- `BUILDPE/EaseUS-x64/Qt5Svg.dll`
- `BUILDPE/EaseUS-x64/Qt5Widgets.dll`
- `BUILDPE/EaseUS-x64/Qt5WinExtras.dll`
- `BUILDPE/EaseUS-x64/RAWSearchDLL.dll`
- `BUILDPE/EaseUS-x64/ReFSSearchDLL.dll`
- `BUILDPE/EaseUS-x64/ZfsSearchDLL.dll`

## Family members

- VC9: msvcp90/msvcr90/mfc90u (+ Microsoft.VC90.CRT.manifest) — oldest engine code
- VC12: msvcp120/msvcr120 — EUArchiveRepair/others
- VC14: msvcp140/vcruntime140/concrt140 — DRWUI current build
- msvcm90.dll (.NET mixed-mode, live tree only — one mixed-mode module)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
