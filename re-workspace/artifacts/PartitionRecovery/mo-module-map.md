# PartitionRecovery .mo Module Map — Complete MOM Module Internals (RTTI-Verified)

> All 30 MOM modules decompiled (689K lines). Class names from RTTI type descriptors —
> ground truth. Function counts from Ghidra batch. Companion:
> `artifacts/PartitionRecovery/mom-module-system--architecture.md` (the MOM runtime itself).

## Module inventory & roles

| Module | Fns | Role (evidence: RTTI classes) |
|---|---|---|
| **Mom.mo** | 331 | MOM runtime core: `CMomModule`, `IAggObject`/`IModule`/`IErrorObject` aggregation, functor objects, error objects |
| **Common.mo** | 617 | Shared config: `CConfig`/`CConfigSection` (INI-style), `ICommonModule` |
| **Config.mo** | 605 | Config service module (`IConfig`) |
| **Thread.mo** | 342 | Threading kit: `CThread`, `CMutex`, `CEvent`, `CCriticalSection`, `CTimer`, `CSyncObjectImpl` |
| **Error.mo** | 282 | Error objects/propagation |
| **Log.mo** | 139 | Logging service |
| **RegLib.mo** | 302 | **Windows registry HIVE parser**: `Hive`, `Key`, `Node`, `BigData`, `FastLeaf`, `HashLeaf`, `Indirect`, `IndxLeaf` — parses offline SYSTEM/SOFTWARE hives (FVE keys, installed-OS detection, profile locations) |
| **CallbackOperator.mo** | 110 | Event/callback plumbing (IObject) |
| **CheckVersion.mo** | 539 | `CheckVersion`, `DiskContainer`, `FindPartitionPredicatorI`, **`IsWindowsServerInstalled`** — locates Windows installations across partitions (OS-aware recovery) |
| **Device.mo** | 3,474 | Device layer: `CDiskEnumerator`, `CDiskDriveLayoutReadWriter` (raw layout R/W!), `CDiskStorageDeviceBuilder`, `CStorageDisk(Object)`, `CStorageJob`, `BitLockerManager` |
| **DeviceManager.mo** | 3,428 | Managers: `CDeviceManager`, `CPartitionManager` + **`CPartitionManagerGPT`**, `CPartitionBootInfo`, `CUpdateGptSystemBootPartition`, **`CTbFile`** (TB-scale disk-IMAGE file abstraction — the "tb镜像mount" project kin of EuMrx), `CBaseReg` |
| **DeviceAdapter.mo** | 126 | Adapter layer: `CDiskDevice`/`CPartitionDevice` bridging IBlockDevice/IDiskGeometry/IDiskDeviceType |
| **Partition.mo** | 2,179 | Partition tables: `CMBR`, `CExtendMBR` (extended chain), `CPartitionEntry{,GPT}` + iterators, `CFileSystemPartition`, `CRangeDevice`, `CDiskDeviceType` |
| **LdmManager.mo** | 3,622 | **Windows dynamic disks (LDM)**: `DmrpDisk/Module/Notify/Volume`, `Disk_EP_Cache`, `EditLdm2*` (LDM database editing: MoveResizeVol/UpdateLdmData), `DummyVolume`, `DiskManagerItemProc` — spanned/striped/mirrored/RAID-5 volume support |
| **PartitionRecoveryD.mo** | 1,571 | **Deep-scan block parsers**: `CBlockParseWin32`/`CBlockParserLinux`/`CExFatBlockParser`/`CExtXBlockParser`/`CFatxBlockParser` (FATX!), `CFAT12/16/32Table`, `BitlockerParser`, `CGeneratorSetCompleteSearch` (complete-search generator set) |
| **FileSystem.mo** | 547 | FS abstraction: `CFATFS`+`CFATDBR`, `CExFatFs/Partition`, `CExt2FS`/`CExt4FS` + File/Partition |
| **FileSystemCheck.mo** | 419 | FS validation: `CCheckFAT`, `CCheckNTFSVolume`, `CFatChain`, `CFileAllocationTable`, `CNtfsVolume` (pairs with RawFixer.dll) |
| **FileSystemAnalyser.mo** | 265 | Analyser base: `CFileSystemAnalyser` + module factory |
| **NTFSFileSystemAnalyser.mo** | 325 | `CNTFSVolumeAnalyser` — NTFS volume recognition/assessment |
| **FATFileSystemAnalyser.mo** | 322 | FAT volume analyser |
| **ExFatFileSystemAnalyser.mo** | 310 | exFAT volume analyser |
| **ExtFileSystemAnalyser.mo** | 297 | ext2/3/4 volume analyser |
| **RefsFileSystemAnalyser.mo** | 1,752 | **ReFS internals** (54 classes): `CRefsAnalyze`, `CRefsAllocatorMgr`, `CRefsBasicMsbProc`/`CRefsChildMsbProc`/`CRefsChildMsbDupProc` (MSB = metadata switch blocks), `CRefsBitmapProc`, `CRefsBlockRefTableProc`, `CRefsCheckPointBlock`, `CRefsAppDataRunItem`, `CDiskIoProc` |
| **NTFSLib.mo** | 832 | NTFS library: `CNtfsMFT`, `CNtfsMultiFileRecord`, `CMultiRecordWrapper`, `CAttributeBase/I`, `CNoresidentAttribute`, `CExtendMFT`, `CHardDriveIO(Setting)` |
| **NTFSUtil.mo** | 2,871 | NTFS utilities: `CClusterAllocator`, `CFatTableProc`, **`CFatVirtual{View,BaseItem,DirItem,FileItem}`** (virtual FS views over damaged disks), `CFirstVolumeMergeDeal` |
| **FatLib.mo** | 311 | FAT library: `CFileAllocateTable`, `CDirectoryEntry` (+ interfaces) |
| **FatFormat.mo** | 238 | `CFatFormat` — FAT formatting (WinPE media prep) |
| **EFIBoot.mo** | 189 | `CEFIBoot`(+I) — EFI System Partition handling |
| **Fixup.mo** | 243 | Boot fixup: `CBcd`, **`CEFIFirstBcd`** — BCD repair/editing post-recovery & for boot media |
| **bitlockerhelp.mo** | 1,239 | `CBitlockerHelpModule` (+I) — BitLocker integration module (pairs with BitLockerLib.dll) |

## Architectural insights

1. **Two-layer recovery**: FileSystemAnalysers (recognize/assess) → PartitionRecoveryD block
   parsers (deep content scan) → engine DLLs (DRWIntelligentScan *SearchDLL) present results.
   The .mo layer is the partition/disk substrate; the SearchDLL layer is the file layer.
2. **Windows-aware recovery**: RegLib (offline hives) + CheckVersion (IsWindowsServerInstalled)
   + PartitionBootInfo = DRW understands WHAT it is recovering (OS installs, server vs client,
   boot partitions) — beyond raw file carving.
3. **Dynamic disk (LDM) support** via LdmManager — most consumer tools cannot touch
   spanned/RAID volumes; DRW parses the LDM database directly (Dmrp*, EditLdm2*).
4. **Disk images first-class**: CTbFile = mount/scan disk image FILES (matches EuMrx's
   origin project "tb镜像mount" = TB-image-mount).
5. **Virtual FS views**: CFatVirtualView/DirItem/FileItem — build consistent in-memory FS
   presentations over damaged/merged disk content (CFirstVolumeMergeDeal merges split volumes).
6. **Boot repair**: Fixup.mo (BCD/EFI first-boot) + EFIBoot.mo + Win32Bcd.dll +
   CUpdateGptSystemBootPartition — after recovering a system partition, DRW can repair the
   boot chain so the recovered OS actually starts.
7. **FATX parser** (PartitionRecoveryD) — Xbox-original FATX filesystem support (a legacy
   EaseUS capability surface).

## Cross-links

- MOM runtime: `artifacts/PartitionRecovery/mom-module-system--architecture.md`
- FS repair: `artifacts/PartitionRecovery/rawfixer-fs-repair.md`
- Engine layer: `architecture/05-scan-engine-architecture.md`
- Kernel IO: `architecture/02-kernel-driver-architecture.md`
- Raw evidence: `re-workspace/reversed/ghidra-mo/` (30 modules), RTTI in `re-workspace/rtti_classes.json`
