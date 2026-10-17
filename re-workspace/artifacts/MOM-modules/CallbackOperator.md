# MOM Module: CallbackOperator.mo — callback framework

**Role in system**: MOM event/callback operators.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/CallbackOperator_decompiled.c` — 2,831 lines, 110 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class bad_alloc, class bad_array_new_length, class exception, class type_info, struct IObject
## Vftable-instantiated classes (code census)

- `exception` ×3
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- *(no file/registry literals extracted)*

## Function census (top-level, first 30)

- `11`
- `14`
- `24`
- `10`
- `10`
- `4`
- `7`
- `21`
- `81`
- `81`
- `81`
- `81`
- `6`
- `936`
- `86`
- `5237`
- `7`
- `86`
- `94`
- `82`
- `82`
- `123`
- `86`
- `119`
- `97`
- `17`
- `112`
- `291`
- `6`
- `60`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
