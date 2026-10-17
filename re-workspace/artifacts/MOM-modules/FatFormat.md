# MOM Module: FatFormat.mo — FAT formatting

**Role in system**: partition formatting support (EPM heritage).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/FatFormat_decompiled.c` — 5,719 lines, 238 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CFatFormat` ×3
- `exception` ×3
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `IDiskDevice` ×1
- `IPartitionDevice` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `85`
- `14`
- `14`
- `14`
- `25`
- `52`
- `11`
- `11`
- `10`
- `4`
- `151`
- `151`
- `88`
- `7`
- `926`
- `1042`
- `3`
- `232`
- `6`
- `6`
- `161`
- `7`
- `3`
- `1609`
- `1581`
- `428`
- `706`
- `8`
- `94`
- `113`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
