# MOM Module: EFIBoot.mo — EFI/BCD boot management

**Role in system**: EFI NVRAM entries, BCD stores, boot entry repair.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/EFIBoot_decompiled.c` — 6,018 lines, 189 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class ?$CModuleImpl, class ?$CMomEventObject, class ?$CMomObject, class ?$CMomStackObject, class ?$ConstructFunction, class ?$FunctorBindObject, class ?$FunctorObject, class CEFIBoot, class CEFIBootModule, class FunctorObjectBase, class IEFIBoot, class bad_alloc, class bad_array_new_length, class exception, class type_info, struct IEFIBootModule, struct IErrorBase, struct IModule, struct IObject, struct IThreadBase, struct __MomObjectFlag
## Vftable-instantiated classes (code census)

- `exception` ×3
- `CEFIBoot` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `Kernel32.dll`
- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `6`
- `7`
- `7`
- `14`
- `4`
- `6`
- `3`
- `3`
- `5`
- `316`
- `86`
- `96`
- `45`
- `641`
- `391`
- `260`
- `264`
- `260`
- `156`
- `35`
- `276`
- `347`
- `28`
- `264`
- `8`
- `8`
- `548`
- `727`
- `19`
- `8`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
