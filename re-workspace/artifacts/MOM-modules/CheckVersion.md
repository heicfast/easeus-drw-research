# MOM Module: CheckVersion.mo — Windows installation detection

**Role in system**: finds installed Windowses in offline hives for boot repair.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/CheckVersion_decompiled.c` — 16,170 lines, 539 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class ?$CModuleImpl, class ?$CMomEventObject, class ?$CMomObject, class ?$CMomObjectImpl, class ?$CMomStackObject, class ?$ConstructFunction, class ?$FunctorBindObject, class ?$FunctorObject, class ?$_Iosb, class ?$basic_filebuf, class ?$basic_ios, class ?$basic_ofstream, class ?$basic_ostream, class ?$basic_streambuf, class CCheckVersionModule, class CMomError, class CMyErrorProc, class CheckVersion, class CheckVersionI, class DiskContainer, class DiskContainerI, class FindPartitionPredicatorI, class FunctorObjectBase, class IsWindowsServerInstalled, class Partition

*(+21 more)*

## Vftable-instantiated classes (code census)

- `exception` ×12
- `RegValueI` ×9
- `RegValue` ×8
- `FindPartitionPredicatorI` ×5
- `DiskContainerI` ×5
- `PartitionI` ×5
- `RegistryI` ×5
- `CheckVersionI` ×4
- `CMyErrorProc` ×4
- `IsWindowsServerInstalled` ×3
- `DiskContainer` ×3
- `Partition` ×3
- `CMomError` ×3
- `RegistryReader` ×3
- `CheckVersion` ×2

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `\\$$$PROTO.HIV`
- `\\CONTROLSET00`
- `\\CONTROL\\PRODUCTOPTIONS\\PRODUCTTYPE`
- `\\SELECT\\CURRENT`
- `\\\\.\\PhysicalDrive`
- `\\windows`
- `\\winnt`
- `api-ms-win-core-synch-l1-2-0.dll`
- `checkversion.log`
- `kernel32.dll`

## Function census (top-level, first 30)

- `452`
- `540`
- `117`
- `57`
- `14`
- `50`
- `104`
- `45`
- `75`
- `4`
- `7`
- `35`
- `6`
- `495`
- `159`
- `7`
- `49`
- `17`
- `17`
- `335`
- `65`
- `8`
- `94`
- `192`
- `146`
- `700`
- `775`
- `894`
- `45`
- `21`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
