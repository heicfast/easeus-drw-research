# MOM Module: RefsFileSystemAnalyser.mo — ReFS filesystem analyser

**Role in system**: IFSAnalyser for ReFS (MSB structures).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/RefsFileSystemAnalyser_decompiled.c` — 42,013 lines, 1,752 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CRefsLogFileProc` ×6
- `CRefsMetaDirectory` ×6
- `CRefsFileProc` ×6
- `CRefsChildMsbProc` ×4
- `CRefsVolumeInfoProc` ×4
- `CRefsMetaFileDataRun` ×4
- `CRefsMetaFileDirItem` ×4
- `CRefsMetaSymbolicDirItem` ×4
- `CRefsVaryChildMsbProc` ×4
- `CRefsFileItemEntry` ×4
- `CRefsVolumeAnalyser` ×3
- `CRefsChildMsbDupProc` ×3
- `CRefsBitmapProc` ×3
- `CRefsContainerTable` ×3
- `exception` ×3

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.librefs\\refsmetaobjproc.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.librefs\\refsmsbitem.cpp`

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `c:\\`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\include\\momnew.h`
- `kernel32.dll`

## Function census (top-level, first 30)

- `14`
- `11`
- `11`
- `8`
- `596`
- `13`
- `13`
- `134`
- `31`
- `78`
- `56`
- `46`
- `46`
- `71`
- `66`
- `105`
- `86`
- `92`
- `16`
- `49`
- `15`
- `85`
- `118`
- `76`
- `29`
- `61`
- `62`
- `82`
- `42`
- `93`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
