# PartitionRecovery & MOM — The Module Object Model Engine

**Binaries**: PartitionRecovery/*.mo (31 modules) + PartitionRecovery.dll + MainModule.dll + RecoveryModule.dll + ToolsModule.dll + UILogic.dll + helpers
**Evidence**: RTTI (357+ classes across 6 modules), Ghidra mo-modules batch (689K lines), exports (C++ mangled), PDBs
**Internal project**: `I:\_drw_main\PartitionRecovery\Output\Release_x64`
**Shared lineage**: EPM (EaseUS Partition Master) — same codebase family, PDB paths `T:/source/repos/_EPM_main/legacy_mod/BitLockerLib`

## 1. The MOM — Module Object Model (in-process plugin system)

`.mo` files are **PE DLLs** (renamed extension = "Module Object") loaded by the PartitionRecovery engine via LoadLibrary. Every module implements the same skeleton (RTTI-verified across all 31):

```
CModuleImpl<TModule>        — module entry implementation (template)
CMomObject                  — base COM-like object: IObject (AddRef/Release/QueryInterface)
CMomEventObject             — event source/sink
CMomStackObject             — stack-lifetime objects
CMomAggObject               — AGGREGATION (XPCOM-style tearoffs)
CMomCloneObject             — cloning support
ConstructFunction / FunctorObject / FunctorBindObject — functor system for late binding
CErrorObject(+Impl)         — error propagation objects
```
Plus a registry: each module exposes factory functions that the engine calls to instantiate module classes. This is essentially an in-house COM/XPCOM — "MOM" = Module Object Model.

Module inventory (all decompiled, see reversed/ghidra-mo/):
| Module | Lines | Role |
|---|---|---|
| Device.mo | 68,987 (3474 fns) | Device abstraction: disks, USB, RAW path I/O (opens \\.\EPRDTDRV\...) |
| DeviceManager.mo | 70,679 (3428 fns) | Enumeration, hot-plug notify, WMI queries |
| LdmManager.mo | 91,475 (3622 fns) | **LDM dynamic disks** (DmrpDisk, Disk_EP_Cache — dynamic volume config parsing) |
| Partition.mo | 38,246 | Partition tables: MBR/GPT structs, extended partitions |
| PartitionRecoveryD.mo | 28,463 | Partition-recovery driver logic (BitlockerParser, CBlockParseWin32/CBlockParserLinux) |
| NTFSLib.mo / NTFSUtil.mo | 25,791 / 132,414 | NTFS format libs (shared with EPM format/resize engines) |
| RefsFileSystemAnalyser.mo | 42,013 | ReFS analysis (CRefsAllocatorMgr, CRefsAnalyze, CDiskIoProc) |
| {NTFS,FAT,ExFat,Ext,Refs,FileSystem}Analyser.mo | 5–6K each | FS detection/validation analysers for partition tables |
| FileSystemCheck.mo | 9,964 | chkdsk-style checks (CCheckFAT, CCheckNTFSVolume, CFatChain, CFileAllocationTable, CHardDriveIO) |
| FileSystem.mo | 17,658 | filesystem abstraction |
| Boot.mo(n/a)/EFIBoot.mo | 6,018 | EFI boot entries (BCD) |
| bitlockerhelp.mo | 34,879 | BitLocker structures + FVEK parsing |
| Common/Config/Log/Error/Thread/CallbackOperator/CheckVersion/RegLib/Mom/Fixup/FatFormat/FatLib | 2.5–17K | infra: config, registry, logging, threading, callbacks, version checks |

## 2. The DLL layer (host + feature engines)

**PartitionRecovery.dll** — engine host + device model:
- Exports full C++ class API (mangled): `CPartitionDevice`, `IDiskDevice`, `IObject`, `IPartitionDevice`, `IStorageDevice`, `CCallBackOperate`, `CLogWriter`, `CLogInBootICE` — the object model the whole engine passes around
- Loads .mo modules on demand

**MainModule.dll** (153 RTTI classes) — **the partition-editing engine** (EPM-shared!):
- Operation pattern: `CBaseOperation` → CCreateOperation / CDeletePartitionPendingOperation / CMergePartitionOperation / CMoveResizeOperation / CGPTToMBROperation(+Composite,+Pending) / CMBRToGPT* / CConvertPrimaryLogicalOperation / CBitlockerTurnOffOperation(+Pending) / CCopyDisk/PartitionPendingOperation / CRepartitionPendingOperation
- `COperationManager` + `COperationManagerIterator` — transaction queue (apply/undo)
- `CPendingOperationCommon(+Ex)` / `CPendingOperationComposition` — command pattern with dynamic (resize-while-applying) pending ops
- BCD surgery: `CBcdAccess`, `CBcdBootProc`, `CBcdEditProc`, `CMBRGPTBcdProc`, `CGenUEFISystemFile`/`CGenBIOSSystemFile` — boot-repair when partition tables change
- `CAccessControlList`/`CAccessEntry`/`CFileDaclProc` — NTFS ACL handling during ops
- `CDevNotifyManager`/`CDevNotifyWnd` — WM_DEVICECHANGE window

**RecoveryModule.dll** — recovery-scenario driver (exports IObject/IPartitionDevice/IStorageDevice same object model — the "scan orchestration" module for lost partitions).

**ToolsModule.dll** (2.5MB) — toolbox: WinPE media building, burning, imaging (links PE_Tools, Burn.dll, libvmdk).

**UILogic.dll** (1.4MB) — logic layer for the UI (partition list presentation, operation confirmations).

## 3. What this engine does in DRW (workflow position)

1. **Device discovery**: DeviceManager.mo enumerates physical disks/volumes (WMI + setupapi + IoCtl)
2. **Partition table parse**: Partition.mo (MBR EBR chains, GPT), LdmManager.mo (dynamic disks), lost-partition detection = scan unallocated space for partition signatures
3. **FS validation**: FileSystemAnalyser family validates each candidate (boot sector, superblock, MFT sanity)
4. **Lost-partition recovery**: PartitionRecoveryD.mo rebuilds partition records → user can recover found partitions (writes new table via MainModule.dll ops!) or just scan in place
5. **Post-recovery repair**: MainModule operations (e.g. MBR↔GPT conversions, boot repair via CBcdAccess/GenUEFISystemFile) — the same engine as EaseUS Partition Master
6. All device I/O goes through Device.mo → EPMNtDrv driver (\\.\EPRDTDRV\{d}\{p}) when raw access is needed

## 4. Cross-product sharing conclusion
The PartitionRecovery folder IS a full partition-management engine with editing capabilities — DRW uses its recovery + analysis surface; EPM uses its editing surface. Same binary lineage ("I:\_drw_main\PartitionRecovery" + "_EPM_main_" PDBs for drivers and BitLockerLib). This explains why DRW installs can "repair" partition tables and boot entries.
