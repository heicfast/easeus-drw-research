# MOM Module: FileSystemAnalyser.mo — FS analyser framework

**Role in system**: the IFSAnalyser interface + shared analyser logic.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/FileSystemAnalyser_decompiled.c` — 5,336 lines, 265 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `exception` ×9
- `CFileSystemAnalyser` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `logic_error` ×1
- `IPartitionDevice` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `89`
- `191`
- `14`
- `14`
- `25`
- `63`
- `88`
- `104`
- `41`
- `11`
- `38`
- `43`
- `10`
- `4`
- `151`
- `78`
- `82`
- `3`
- `7`
- `35`
- `3`
- `5`
- `6`
- `4`
- `5`
- `5`
- `4`
- `4`
- `236`
- `6`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
