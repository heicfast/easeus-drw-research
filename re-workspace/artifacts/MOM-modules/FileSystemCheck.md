# MOM Module: FileSystemCheck.mo — FS health checking

**Role in system**: validates found partitions' filesystem consistency.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/FileSystemCheck_decompiled.c` — 9,964 lines, 419 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CFatChain` ×14
- `CCheckFAT` ×3
- `CCheckNTFSVolume` ×3
- `CFileAllocationTable` ×3
- `exception` ×3
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkfat.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.filesystemcheck\\checkntfs.cpp`

## Notable string evidence

- `WinChkdsk.exe`
- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `13`
- `34`
- `97`
- `14`
- `14`
- `60`
- `11`
- `76`
- `3`
- `87`
- `4`
- `10`
- `20`
- `20`
- `154`
- `150`
- `43`
- `105`
- `184`
- `184`
- `7`
- `4116`
- `232`
- `47`
- `535`
- `6`
- `4`
- `51`
- `52`
- `112`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
