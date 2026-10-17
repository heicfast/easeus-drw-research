# MOM Module: Config.mo — module config

**Role in system**: MOM module configuration persistence.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Config_decompiled.c` — 13,311 lines, 605 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

class ?$CModuleImpl, class ?$CMomAggObject, class ?$CMomCloneObject, class ?$CMomEventObject, class ?$CMomObject, class ?$CMomStackObject, class ?$ConstructFunction, class ?$FunctorBindObject, class ?$FunctorObject, class ?$_Iosb, class ?$basic_filebuf, class ?$basic_fstream, class ?$basic_ios, class ?$basic_iostream, class ?$basic_istream, class ?$basic_ostream, class ?$basic_streambuf, class ?$basic_stringbuf, class ?$basic_stringstream, class CConfig, class CConfigModule, class CConfigSection, class ConfigFormatError, class FunctorObjectBase, class bad_alloc

*(+15 more)*

## Vftable-instantiated classes (code census)

- `exception` ×13
- `CConfigSection` ×4
- `CConfig` ×4
- `logic_error` ×3
- `ConfigFormatError` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `bad_cast` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `109`
- `79`
- `19`
- `453`
- `452`
- `51`
- `51`
- `89`
- `111`
- `174`
- `156`
- `632`
- `551`
- `499`
- `448`
- `117`
- `146`
- `57`
- `246`
- `438`
- `220`
- `59`
- `261`
- `225`
- `511`
- `87`
- `108`
- `14`
- `62`
- `63`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
