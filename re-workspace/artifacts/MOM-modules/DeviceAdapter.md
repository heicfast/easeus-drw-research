# MOM Module: DeviceAdapter.mo — device adapter

**Role in system**: adapts Win32 devices to the MOM device model.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/DeviceAdapter_decompiled.c` — 2,599 lines, 126 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class CDiskDevice, class CPartitionDevice, class IDiskDevice, class IPartitionDevice, class bad_alloc, class bad_array_new_length, class exception, class type_info, struct IBlockDevice, struct IDiskDeviceType, struct IDiskGeometry, struct IFileSystemPartition, struct IFileSystemPartitionExtendInfo, struct IFileSystemPartitionExtendInfoEditor, struct IObject, struct IPartitionEntry, struct IStorageDevice, struct IVolumeDevice, struct IVolumeEntryInfo
## Vftable-instantiated classes (code census)

- `IDiskDevice` ×5
- `IPartitionDevice` ×4
- `exception` ×3
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `CDiskDevice` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- *(no file/registry literals extracted)*

## Function census (top-level, first 30)

- `89`
- `90`
- `70`
- `14`
- `14`
- `25`
- `42`
- `11`
- `49`
- `10`
- `4`
- `169`
- `151`
- `7`
- `3`
- `3`
- `6`
- `4`
- `204`
- `6`
- `138`
- `6`
- `159`
- `541`
- `7`
- `15`
- `23`
- `303`
- `89`
- `161`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
