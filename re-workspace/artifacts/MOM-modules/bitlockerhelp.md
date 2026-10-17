# MOM Module: bitlockerhelp.mo — BitLocker helper

**Role in system**: BitLocker detection/unlock assistance in the module system.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/bitlockerhelp_decompiled.c` — 34,879 lines, 1,239 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `exception` ×5
- `bad_cast` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `CBitlockerHelpModule` ×1
- `IBitlockerHelpModule` ×1
- `IModule` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `C:\\Program Files\\EaseUS`
- `C:\\Program Files\\EaseUS\\BL`
- `\\`
- `\\ControlSet001\\Control\\FVEAutoUnlock\\`
- `\\\\.\\root\\CIMV2\\Security\\MicrosoftVolumeEncryption`
- `\\system32\\bitlockerwizard.exe %1 U`
- `\\system32\\bitlockerwizard.exe %1 Y`
- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`
- `temp.dat`
- `x:\\Program Files\\EaseUS\\BL`

## Function census (top-level, first 30)

- `35`
- `16`
- `37`
- `16`
- `8`
- `118`
- `111`
- `89`
- `89`
- `117`
- `81`
- `73`
- `89`
- `47`
- `56`
- `59`
- `48`
- `50`
- `11`
- `55`
- `42`
- `44`
- `26`
- `14`
- `55`
- `80`
- `6`
- `6`
- `11`
- `11`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
