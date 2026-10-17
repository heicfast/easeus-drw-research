# MOM Module: Error.mo — error model

**Role in system**: error codes/objects shared across modules.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Error_decompiled.c` — 5,615 lines, 282 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class ?$CModuleImpl, class ?$CMomEventObject, class ?$CMomObject, class ?$CMomStackObject, class CErrorManager, class CErrorModule, class CErrorTrackManager, class bad_alloc, class bad_array_new_length, class exception, class type_info, struct IErrorBase, struct IErrorManager, struct IErrorModule, struct IErrorProc, struct IErrorTrackManager, struct IModule, struct IObject, struct IThreadBase, struct __MomObjectFlag
## Vftable-instantiated classes (code census)

- `CErrorModule` ×3
- `exception` ×3
- `CErrorTrackManager` ×2
- `CErrorManager` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `IErrorManager` ×1
- `IErrorModule` ×1
- `IErrorBase` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `89`
- `113`
- `508`
- `507`
- `632`
- `551`
- `483`
- `390`
- `123`
- `172`
- `101`
- `198`
- `179`
- `436`
- `14`
- `52`
- `97`
- `52`
- `81`
- `38`
- `16`
- `46`
- `30`
- `77`
- `104`
- `46`
- `45`
- `97`
- `170`
- `24`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
