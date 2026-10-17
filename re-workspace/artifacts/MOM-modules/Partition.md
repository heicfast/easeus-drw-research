# MOM Module: Partition.mo — partition model

**Role in system**: partition objects + table parsing (MBR/GPT).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Partition_decompiled.c` — 38,246 lines, 2,179 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CPartitionEntryGPT` ×16
- `CPartitionEntry` ×8
- `CFileSystemPartition` ×6
- `CRangeDevice` ×6
- `CFileSystemPartitionExtendInfo` ×4
- `CMBR` ×3
- `exception` ×3
- `CDiskDeviceType` ×2
- `IBlockDevice` ×2
- `IDiskDeviceType` ×2
- `IFileSystemPartition` ×2
- `IFileSystemPartitionEditor` ×2
- `IFileSystemPartitionExtendInfo` ×2
- `IFileSystemPartitionExtendInfoEditor` ×2
- `CExtendMBR` ×2

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `fsclog.dll`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `kernel32.dll`

## Function census (top-level, first 30)

- `6`
- `7`
- `7`
- `14`
- `4`
- `17`
- `3`
- `9`
- `98`
- `344`
- `194`
- `11`
- `11`
- `8`
- `266`
- `14`
- `22`
- `123`
- `755`
- `19`
- `80`
- `428`
- `31`
- `26`
- `44`
- `96`
- `77`
- `16`
- `65`
- `16`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
