# MOM Module: NTFSLib.mo — NTFS on-disk structure library

**Role in system**: MFT records, attributes, runlists for the partition-recovery side (separate from NTFSSearchDLL's engine: this is the PartitionRecovery monorepo copy).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/NTFSLib_decompiled.c` — 25,791 lines, 832 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `exception` ×13
- `CAttributeI` ×10
- `CRWContextI` ×10
- `CAttributeBase` ×8
- `CAttributeReadWriteBase` ×8
- `CRecordI` ×6
- `CRecordAttributeReader` ×4
- `CResidentAttribute` ×4
- `logic_error` ×3
- `CExtendMFT` ×3
- `ChunkCacheImplPiece` ×2
- `DebugMsg` ×2
- `CNoresidentAttribute` ×2
- `CMultiRecordWrapper` ×2
- `CRecordAttributeWriter` ×2

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\extendmft.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\mftwith0x20.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfslib.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\ntfsmft.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfslib\\recordattributerw.cpp`

## Notable string evidence

- `\\\\?\\GLOBALROOT\\Device\\Harddisk%d\\Partition%d`
- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `683`
- `3085`
- `837`
- `519`
- `379`
- `379`
- `1529`
- `517`
- `373`
- `190`
- `213`
- `4510`
- `1018`
- `988`
- `1303`
- `416`
- `566`
- `15`
- `63`
- `98`
- `77`
- `88`
- `144`
- `11`
- `11`
- `3`
- `101`
- `24`
- `38`
- `43`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
