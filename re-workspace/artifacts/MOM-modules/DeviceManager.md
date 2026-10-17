# MOM Module: DeviceManager.mo — device manager

**Role in system**: device enumeration/coordination for the module system.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/DeviceManager_decompiled.c` — 70,679 lines, 3,428 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class ?$CModuleImpl, class ?$CMomAggObject, class ?$CMomCloneObject, class ?$CMomEventModuleObjectImpl, class ?$CMomEventObject, class ?$CMomObject, class ?$CMomObjectImpl, class ?$CMomStackObject, class ?$CStlContainer, class ?$CStlIterator, class ?$ConstructFunction, class ?$FunctorBindObject, class ?$FunctorObject, class ?$_Iosb, class ?$basic_filebuf, class ?$basic_ios, class ?$basic_ofstream, class ?$basic_ostream, class ?$basic_streambuf, class CBaseReg, class CDeviceManager, class CDeviceManagerModule, class CDeviceUtils, class CManagerItem, class CPartitionBootInfo

*(+53 more)*

## Vftable-instantiated classes (code census)

- `CPartitionManager` ×9
- `CPartitionManagerGPT` ×9
- `exception` ×5
- `CDeviceManager` ×3
- `CManagerItem` ×3
- `CVolumeManager` ×3
- `IBlockDevice` ×2
- `FunctorObjectBase` ×2
- `IAggObject` ×2
- `IContainer` ×2
- `IIterator` ×2
- `IPartitionManager` ×2
- `IPartitionManagerParameterCheck` ×2
- `IPartitionTableChainWriter` ×2
- `IManagerItem` ×2

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`

## Notable string evidence

- `\\`
- `\\??\\%s`
- `\\??\\%s\\`
- `\\??\\Harddisk%dPartition%d`
- `\\Boot\\bcd`
- `\\ControlSet`
- `\\ControlSet001`
- `\\Control\\ProductOptions`
- `\\Control\\Terminal Server`
- `\\Control\\Windows`
- `\\Device\\Harddisk%d\\Partition%d`
- `\\Device\\Harddisk%u`
- `\\Device\\Harddisk%u\\Partition%u`
- `\\DosDevices\\`
- `\\DosDevices\\%C:`
- `\\DosDevices\\%s`
- `\\GLOBAL??\\%s`
- `\\Microsoft\\Windows NT\\CurrentVersion`
- `\\MountedDevices`
- `\\Registry\\Machine\\SYSTEM\\Setup`
- `\\Select`
- `\\StringFileInfo\\%08lx\\CompanyName`
- `\\StringFileInfo\\%08lx\\FileDescription`
- `\\StringFileInfo\\%08lx\\FileVersion`
- `\\StringFileInfo\\%08lx\\InternalName`

## Function census (top-level, first 30)

- `673`
- `11`
- `6`
- `51`
- `52`
- `59`
- `132`
- `60`
- `21`
- `69`
- `11`
- `71`
- `58`
- `69`
- `75`
- `49`
- `128`
- `31`
- `26`
- `31`
- `26`
- `96`
- `77`
- `34`
- `16`
- `65`
- `37`
- `30`
- `8`
- `22`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
