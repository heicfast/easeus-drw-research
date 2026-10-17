# MOM Module: LdmManager.mo — LDM dynamic disks

**Role in system**: Windows Logical Disk Manager — dynamic disk config parsing.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/LdmManager_decompiled.c` — 91,475 lines, 3,622 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `MirrorVolumeStorage` ×4
- `Raid5VolumeStorage` ×4
- `SimpleVolumeStorage` ×4
- `SpanVolumeStorage` ×4
- `StripeVolumeStorage` ×4
- `Win32VolumeStorageDevice` ×4
- `exception` ×3
- `DmrpVolume` ×3
- `IBlockDevice` ×2
- `ILdmDisk` ×2
- `Disk_EP_Cache` ×2
- `ILdmVolume` ×2
- `FunctorObjectBase` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\diskmanageritemproc.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\dmrpdisk.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\dmrpmodule.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\dmrpvolume.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\editldm2applyconfig.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\editldm2deletedisk.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\editldm2deletevolume.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\editldm2moveresizevol.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\editldm2updateldmdata.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\ldmmanager.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\nativemodule.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\policyofvolresizemove.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\utility.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\vdsdisk.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\vdsmodule.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\vdsnotify.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ldmmanager\\vdsvolume.cpp`

## Notable string evidence

- `NtDll.dll`
- `\\Device\\Harddisk%d`
- `\\DosDevices\\%C:`
- `\\\\.\\PHYSICALDRIVE%d`
- `\\\\.\\PhysicalDrive%d`
- `\\\\?\\GLOBALROOT`
- `\\\\?\\PhysicalDrive%d`
- `\\\\?\\Volume`
- `\\\\?\\Volume%s`
- `\\device\\harddisk%d`
- `api-ms-win-core-synch-l1-2-0.dll`
- `fsclog.dll`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `kernel32.dll`

## Function census (top-level, first 30)

- `33`
- `32`
- `16`
- `8`
- `8`
- `118`
- `66`
- `79`
- `80`
- `79`
- `35`
- `55`
- `35`
- `55`
- `55`
- `26`
- `6`
- `11`
- `11`
- `16`
- `11`
- `24`
- `148`
- `39`
- `30`
- `30`
- `26`
- `31`
- `22`
- `13`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
