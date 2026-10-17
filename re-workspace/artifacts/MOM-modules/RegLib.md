# MOM Module: RegLib.mo — registry HIVE parser

**Role in system**: offline registry hives — reads Windows state without booting it.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/RegLib_decompiled.c` — 10,974 lines, 302 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `Node` ×8
- `exception` ×3
- `Key` ×2
- `SubValList` ×2
- `Hive` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `Indirect` ×1
- `IndxLeaf` ×1
- `FastLeaf` ×1
- `HashLeaf` ×1
- `Security` ×1
- `Val` ×1
- `MidData` ×1
- `BigData` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- *(no file/registry literals extracted)*

## Function census (top-level, first 30)

- `117`
- `211`
- `117`
- `226`
- `58`
- `57`
- `57`
- `51`
- `51`
- `351`
- `256`
- `144`
- `353`
- `378`
- `1316`
- `325`
- `175`
- `311`
- `1967`
- `2523`
- `1685`
- `1272`
- `344`
- `344`
- `614`
- `122`
- `598`
- `60`
- `174`
- `513`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
