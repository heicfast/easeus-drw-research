# MOM Module: FileSystem.mo — filesystem abstraction

**Role in system**: volume/file abstraction layer.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/FileSystem_decompiled.c` — 17,658 lines, 547 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `IFSInterface` ×15
- `CExt2File` ×14
- `CExt4File` ×12
- `CWindowsFS` ×3
- `exception` ×3
- `CExFatFs` ×2
- `CExFatPartition` ×2
- `CExt2FS` ×2
- `CExt2Partition` ×2
- `CExt4FS` ×2
- `CExt4Partition` ×2
- `CFATDBR` ×2
- `CFATFS` ×2
- `CFATTable` ×2
- `CNTFSInterface` ×2

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `28`
- `9`
- `19`
- `3`
- `4`
- `100`
- `14`
- `25`
- `11`
- `4`
- `67`
- `43`
- `7`
- `3`
- `17`
- `17`
- `17`
- `6`
- `6`
- `21`
- `7`
- `3`
- `481`
- `43`
- `89`
- `147`
- `275`
- `528`
- `632`
- `392`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
