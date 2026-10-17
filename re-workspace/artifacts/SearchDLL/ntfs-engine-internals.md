# NTFSSearchDLL — NTFS Engine Internals (Deep-Dive)

> Binary: `og-codebase/NTFSSearchDLL.dll` (577,256 B, x64, 99 imports, 2 exports)
> Decompilation: 1,931 functions / 62,394 lines (`re-workspace/reversed/ghidra-local/`)
> + CI copy in ghidra-searchdll. capa: IOCTL driver interaction @ 0x18002C0BA, ini reads,
  memory-capacity query. RTTI: 27 classes.

## Class model (RTTI, ground truth)

```
IFileSystemSearchController
├─ IQuickFileSystemSearchController ── CNTFSQuickSearch(Base) ── CNTFSSearchController (0x940 B)
├─ ICompleteFileSystemSearchController
IBuildVolumeBitmap ── CNTFSBuildVolumeBitmap          (quick-scan used-space map)
CFileNode : CFileSystemNode                            (result tree nodes)
IFileProperties ── CNTFSFileProperties
IDataRunList ── CResidentNTFSDataRunList               (resident $DATA)
              └─ CNoneResidentNTFSDataRunList          (non-resident dataruns)
CNTFSFileRecordAttribute
CNTFSFileRecordDataRunsAttribute
CNTFSFileRecordFileNameAttribute                       ($FILE_NAME parser)
CMFTInfo (std::_Ref_count_obj — shared MFT descriptor)
CSearchedNTFSPartitionInfo : CSearchedPartitionInfo
CStorageDeviceWithCache                                (IO cache layer)
IStorageDevice / CPartitionVirtualVolumeDevice (in HFS engine — shared volume abstraction)
```

## MFT acquisition (decompiled)

1. **Boot-sector parse** → DBR values (bytes/sector, sectors/cluster, MFT LCN, MFT mirror LCN,
   record size via clusters-per-record or 10^negative exponent).
2. **$MFT datarun read** (`FUN_180040d70(param, L"$MFT")`, `L"$MFTMirr"` — mirror fallback):
   MFT records read in **64 KB batches** (0x10000 stack buffers = 16×4KB or 64×1KB records).
3. **Fragmented-MFT path**: if the $MFT record itself carries an **$ATTRIBUTE_LIST (type
   0x20)** — i.e. the MFT is so fragmented its own extents need an attribute list — the
   engine switches to `FUN_18001a540`: builds the full extent map from the attribute list,
   then walks MFT extents explicitly. Trace: *"MFT file record has 0x20 attribute, MFT start
   sector is %I64d"*. (This is the pathological-fragmentation case most tools fail on.)
4. **Fixup validation**: candidate records validated by the NTFS update-sequence scheme —
   USN at record+0x1E compared against each 512-byte sector's slot at +0x1FE..+0x1FF for
   8 sectors (4 KB record) — decompiled as a tight loop. Records failing fixup are rejected.
5. **FILE magic**: record header "FILE" (0x454C4946) + in-use/fIxup markers; '0' marker
   variant accepted; BAAD-family records skipped.

## Record processing

- $FILE_NAME (0x30) parsed by `CNTFSFileRecordFileNameAttribute` — names, parent references,
  timestamps (creation/modification/MFT-change/access), DOS+Win32 namespace variants.
- $DATA (0x80): resident → `CResidentNTFSDataRunList`; non-resident →
  `CNoneResidentNTFSDataRunList` (extent lists: cluster runs, compression/sparse flags).
- $STANDARD_INFORMATION (0x10) — 256-byte structure scans visible at record compare.
- Deleted detection: in-use flag clear in MFT record header → node flagged deleted; names
  recovered from $FILE_NAME even when parent dirs are gone (reparenting into "lost" tree).
- Metadata namespace recognized: `$RmMetadata/$Reparse/$Repair` strings present ($Extend
  hierarchy) — system files classified separately from user data.

## Quick vs Complete

- **Quick** (`CNTFSQuickSearch`): uses `CNTFSBuildVolumeBitmap` — reads $Bitmap to know which
  clusters are in use, then walks MFT for live + recently-deleted records; skips
  full-cluster carving. Fast pass optimized for "just deleted" scenarios.
- **Complete** (`ICompleteFileSystemSearchController` impl): full MFT enumeration + orphan
  record recovery (records referenced by no parent) + reparse handling; pairs with RAW
  carving pass in DRWUI's advanced scan.

## IO & robustness

- Volume IO through `CStorageDeviceWithCache` → `IStorageDevice` (mounted file API or raw
  IOCTL path via EPMNtDrv — capa located the DeviceIoControl site).
- Memory-adaptive: GlobalMemoryStatus logging ("Total physical memory... Available physical
  memory... page files...") — batch sizes adapt to RAM.
- Worker coordination via Vista+ condition variables (InitializeConditionVariable /
  SleepConditionVariableCS / WakeAllConditionVariable — dynamically resolved via
  GetProcAddress, with pre-Vista fallback).
- Exports: `EUCreateNTFSSearcher`, `EUCreateNTFSQuickSearcher` (the only two — clean plugin
  surface).

## Cross-links

- Engine family: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Engine architecture: `architecture/05-scan-engine-architecture.md`
- FS repair before scan: `artifacts/PartitionRecovery/rawfixer-fs-repair.md`
- NTFS library (.mo layer): `artifacts/PartitionRecovery/mo-module-map.md` (NTFSLib.mo,
  NTFSUtil.mo, FileSystemCheck.mo)

## Confidence

Buffer sizes, magic constants, attribute-type handling, and class names are byte-verified in
decompilation; Quick/Complete semantics corroborated by class names + DRWUI dispatcher
analysis. (Offset-level statements cite the constants they rest on.)
