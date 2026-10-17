# MOM Module: FatLib.mo — FAT structure library

**Role in system**: BPB/FAT table/dir entry primitives.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/FatLib_decompiled.c` — 8,953 lines, 311 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `IDirectoryEntry` ×4
- `IFileAllocateTable` ×4
- `exception` ×3
- `CDirectoryEntry` ×2
- `CFileAllocateTable` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `IPartitionDevice` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `14`
- `14`
- `25`
- `11`
- `11`
- `10`
- `4`
- `151`
- `67`
- `43`
- `7`
- `3`
- `232`
- `6`
- `146`
- `14`
- `6`
- `17`
- `7`
- `10`
- `7`
- `8`
- `23`
- `35`
- `8`
- `18`
- `16`
- `413`
- `121`
- `16`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
