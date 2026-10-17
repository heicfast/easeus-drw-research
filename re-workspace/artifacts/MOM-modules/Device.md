# MOM Module: Device.mo — device model

**Role in system**: disk/partition device objects.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Device_decompiled.c` — 68,987 lines, 3,474 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class ?$CModuleImpl, class ?$CMomAggObject, class ?$CMomCloneObject, class ?$CMomEventObject, class ?$CMomObject, class ?$CMomStackObject, class ?$CTbBaseCreator, class ?$ConstructFunction, class ?$FunctorBindObject, class ?$FunctorObject, class ?$_Iosb, class ?$_Node_class, class ?$_Node_str, class ?$basic_ios, class ?$basic_iostream, class ?$basic_istream, class ?$basic_ostream, class ?$basic_streambuf, class ?$basic_stringbuf, class ?$basic_stringstream, class ?$collate, class BitLockerManager, class CAtlException, class CAtlStringMgr, class CDeviceModule

*(+67 more)*

## Vftable-instantiated classes (code census)

- `exception` ×6
- `CWindowsStorageDevice` ×6
- `CDiskEntry` ×4
- `CStorageVolume` ×4
- `CStorageDisk` ×4
- `CStoragePhysicalDisk` ×4
- `CStorageVirtualDisk` ×4
- `CStorageObject` ×4
- `CStorageDiskObject` ×4
- `CStorageResiliencySetting` ×4
- `CStoragePool` ×4
- `CStorageSubSystem` ×4
- `CWindowsDynamicVolumeDevice` ×4
- `CWindowsDevice` ×4
- `CDiskDriveLayoutReadWriter` ×3

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`

## Notable string evidence

- `\\/`
- `\\\\.\\%c:`
- `\\\\.\\EPRDTDRV\\%d\\%d`
- `\\\\.\\EPRDTDRV\\%d\\Volume\\%d`
- `\\\\.\\HarddiskVolume%d`
- `\\\\.\\PHYSICALDRIVE`
- `\\\\.\\PHYSICALDRIVE%d`
- `\\\\.\\PhysicalDrive%d`
- `\\\\.\\ROOT\\microsoft\\windows\\storage:MSFT_Disk`
- `\\\\.\\ROOT\\microsoft\\windows\\storage:MSFT_PhysicalDisk`
- `\\\\.\\ROOT\\microsoft\\windows\\storage:MSFT_StoragePool`
- `\\\\.\\ROOT\\microsoft\\windows\\storage:MSFT_StorageSubSystem`
- `\\\\.\\ROOT\\microsoft\\windows\\storage:MSFT_VirtualDisk`
- `\\\\.\\ROOT\\microsoft\\windows\\storage:MSFT_Volume`
- `\\\\?\\PhysicalDrive%d`
- `\\{`
- `api-ms-win-core-synch-l1-2-0.dll`
- `fsclog.dll`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `kernel32.dll`

## Function census (top-level, first 30)

- `33`
- `33`
- `14`
- `11`
- `11`
- `8`
- `437`
- `13`
- `13`
- `78`
- `99`
- `88`
- `87`
- `88`
- `88`
- `88`
- `88`
- `87`
- `943`
- `6`
- `78`
- `31`
- `78`
- `56`
- `46`
- `46`
- `71`
- `76`
- `100`
- `76`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
