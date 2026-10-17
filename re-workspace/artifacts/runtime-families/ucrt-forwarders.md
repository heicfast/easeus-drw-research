# Runtime Family: Universal C Runtime API-set forwarders

**Pattern**: `^api-ms-win-crt-.*\.dll$`  
**Shipped copies**: 75 across the tree  
**Role**: WinPE lacks the Universal CRT; the app trees self-carry the full api-ms-win-crt-* forwarder set + ucrtbase.dll so every CRT import resolves inside the app dir (verified: BUILDPE ships 49 forwarders).

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/api-ms-win-crt-conio-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-convert-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-environment-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-filesystem-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-heap-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-locale-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-math-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-multibyte-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-private-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-process-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-runtime-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-stdio-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-string-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-time-l1-1-0.dll`
- `BUILDPE/EaseUS-x64/api-ms-win-crt-utility-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-conio-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-convert-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-environment-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-filesystem-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-heap-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-locale-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-math-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-multibyte-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-private-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-process-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-runtime-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-stdio-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-string-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-time-l1-1-0.dll`
- `EUFileRepair/api-ms-win-crt-utility-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-conio-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-convert-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-environment-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-filesystem-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-heap-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-locale-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-math-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-multibyte-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-private-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-process-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-runtime-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-stdio-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-string-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-time-l1-1-0.dll`
- `VideoViewer/api-ms-win-crt-utility-l1-1-0.dll`
- `api-ms-win-crt-conio-l1-1-0.dll`
- `api-ms-win-crt-convert-l1-1-0.dll`
- `api-ms-win-crt-environment-l1-1-0.dll`
- `api-ms-win-crt-filesystem-l1-1-0.dll`
- `api-ms-win-crt-heap-l1-1-0.dll`
- `api-ms-win-crt-locale-l1-1-0.dll`
- `api-ms-win-crt-math-l1-1-0.dll`
- `api-ms-win-crt-multibyte-l1-1-0.dll`
- `api-ms-win-crt-private-l1-1-0.dll`
- `api-ms-win-crt-process-l1-1-0.dll`
- `api-ms-win-crt-runtime-l1-1-0.dll`
- `api-ms-win-crt-stdio-l1-1-0.dll`
- `api-ms-win-crt-string-l1-1-0.dll`
- `api-ms-win-crt-time-l1-1-0.dll`
- `api-ms-win-crt-utility-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-conio-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-convert-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-environment-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-filesystem-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-heap-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-locale-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-math-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-multibyte-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-private-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-process-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-runtime-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-stdio-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-string-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-time-l1-1-0.dll`
- `diskhealth/api-ms-win-crt-utility-l1-1-0.dll`

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
- `EXT4SearchDLL.dll`
- `EuICloudRecovery.dll`
- `EuOfficeTools.exe`
- `FATSearchDLL.dll`
- `HFSPlusSearchDLL.dll`
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
- `PartitionRecovery/FileSystemAnalyser.mo`
- `PartitionRecovery/FileSystemCheck.mo`
- `PartitionRecovery/Fixup.mo`
- `PartitionRecovery/GetDriverInfo.dll`

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
- `BUILDPE/EaseUS-x64/EXT4SearchDLL.dll`
- `BUILDPE/EaseUS-x64/EuICloudRecovery.dll`
- `BUILDPE/EaseUS-x64/EuOfficeTools.exe`
- `BUILDPE/EaseUS-x64/FATSearchDLL.dll`
- `BUILDPE/EaseUS-x64/HFSPlusSearchDLL.dll`
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
- `BUILDPE/EaseUS-x64/archive.dll`
- `BUILDPE/EaseUS-x64/concrt140.dll`
- `BUILDPE/EaseUS-x64/de265.dll`
- `BUILDPE/EaseUS-x64/exFATSearchDLL.dll`

## Family members

- api-ms-win-crt-{stdio,heap,multibyte,math,string,...} — 1:1 UCRT api sets
- ucrtbase.dll — the actual CRT implementation they forward to

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
