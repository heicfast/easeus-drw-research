# MOM Module: PartitionRecoveryD.mo — partition recovery driver module

**Role in system**: the orchestrating module of the lost-partition scan.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/PartitionRecoveryD_decompiled.c` — 28,463 lines, 1,571 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CRecoverySearchEngine` ×18
- `IRecoverySearchEngine` ×10
- `exception` ×3
- `IBlockDevice` ×2
- `IBlockParser` ×2
- `CBlockParserLinux` ×2
- `CBlockParseWin32` ×2
- `CExtXBlockParser` ×2
- `IRealFATTable` ×2
- `CFatxBlockParser` ×2
- `CGeneralGeneratorSetImpl` ×2
- `CGeneratorSetCompleteSearch` ×2
- `CGeneratorSetRegSearch` ×2
- `IBlockparserSet` ×2
- `ILocationGeneratorSet` ×2

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `kernel32.dll`
- `lostpart.dat`
- `partinfo.dat`

## Function census (top-level, first 30)

- `21`
- `21`
- `21`
- `625`
- `372`
- `360`
- `362`
- `31`
- `26`
- `31`
- `26`
- `96`
- `77`
- `37`
- `16`
- `65`
- `30`
- `8`
- `22`
- `11`
- `13`
- `39`
- `30`
- `6`
- `12`
- `22`
- `22`
- `18`
- `22`
- `24`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
