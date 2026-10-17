# MOM Module: Log.mo — logging

**Role in system**: module-side logging sink (EPMLOG).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Log_decompiled.c` — 3,460 lines, 139 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `IEsLog` ×3
- `CFileMappingLog` ×2
- `CMemMonitorManager` ×2
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `\\EPMLOG.log`
- `\\HD%03d.dpt`
- `fsclog.dll`
- `kernel32.dll`
- `ntdll.dll`

## Function census (top-level, first 30)

- `15`
- `280`
- `219`
- `172`
- `215`
- `220`
- `33`
- `4`
- `4`
- `10`
- `8`
- `85`
- `93`
- `92`
- `100`
- `94`
- `88`
- `6`
- `7`
- `7`
- `14`
- `14`
- `14`
- `4`
- `4`
- `4`
- `4`
- `664`
- `5`
- `106`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
