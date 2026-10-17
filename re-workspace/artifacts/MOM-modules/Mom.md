# MOM Module: Mom.mo — MOM core client

**Role in system**: Module Object Model client-side glue.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Mom_decompiled.c` — 6,720 lines, 331 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `exception` ×3
- `CErrorObject` ×2
- `CMyError` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `IMomTest` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\mod.mom\\module.cpp`

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `i:\\_drw_main\\partitionrecovery\\mod.mom\\module.cpp`
- `kernel32.dll`

## Function census (top-level, first 30)

- `51`
- `51`
- `51`
- `113`
- `507`
- `632`
- `551`
- `483`
- `172`
- `101`
- `126`
- `259`
- `14`
- `55`
- `38`
- `16`
- `19`
- `46`
- `30`
- `77`
- `104`
- `46`
- `45`
- `24`
- `28`
- `5`
- `3`
- `4`
- `47`
- `47`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
