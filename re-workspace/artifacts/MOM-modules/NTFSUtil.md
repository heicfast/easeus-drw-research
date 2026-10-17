# MOM Module: NTFSUtil.mo — NTFS utility layer

**Role in system**: high-level NTFS queries over NTFSLib (file paths, attribute walking).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/NTFSUtil_decompiled.c` — 132,414 lines, 2,871 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `DebugMsg` ×21
- `CNtfsBaseItem` ×9
- `CNtfsFileItem` ×7
- `CVolumeInfo` ×6
- `CFatVirtualBaseItem` ×5
- `CHardDriveIOEx` ×4
- `CFirstVolumeMergeDeal` ×3
- `CNewVolumeMergeDeal` ×3
- `CNewVolumeResizeMoveDeal` ×3
- `CNtfs2FATWorkFlow` ×3
- `CBasePartData` ×3
- `COldVolumeResizeMoveDeal` ×3
- `CResizeMoveAlgorithm` ×3
- `CSecondVolumeMergeDeal` ×3
- `CVolumeInfoDst` ×3

## Source-file trace strings (embedded build paths)

- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\attributeparser.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\cntfsclusterresize.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\cntfsclusterresizepreproc.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\decompress.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\firstvolumemergedeal.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\harddriveioex.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\newvolumemergedeal.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\newvolumeresizemovedeal.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfsalign.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfsanalyze.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfscopy.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfsitemproc.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfsmerge.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfsresizemove.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\ntfsutil.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\oldvolumeresizemovedeal.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\partitionutilntfs.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\resizemovealgorithm.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\resizemovealgorithmcreator.cpp`
- `i:\\_drw_main\\partitionrecovery\\legacy_mod\\mod.ntfsutil\\resizemovebyrebuildingbitmap.cpp`

## Notable string evidence

- `Ntdll.dll`
- `api-ms-win-core-synch-l1-2-0.dll`
- `fsclog.dll`
- `kernel32.dll`
- `new.bin`
- `old.bin`
- `pagefile.sys`

## Function census (top-level, first 30)

- `80`
- `81`
- `74`
- `416`
- `579`
- `632`
- `632`
- `656`
- `493`
- `493`
- `403`
- `403`
- `276`
- `178`
- `223`
- `133`
- `15`
- `97`
- `14`
- `14`
- `164`
- `30`
- `72`
- `24`
- `31`
- `31`
- `27`
- `97`
- `101`
- `192`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
