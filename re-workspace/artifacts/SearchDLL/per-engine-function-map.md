# Per-engine function map — the 9 SearchDLLs by numbers and dominant classes

> Systematic census across `re-workspace/reversed/ghidra-searchdll/` (390,344
> decompiled lines total). Function counts from the Ghidra function maps; class
> counts from distinct `*::vftable` labels in each corpus [CODE — generated
> mechanically, verifiable by re-running the census].

## 1. The census

| Engine | Functions | vftable refs | Distinct classes | Dominant classes (refs) |
|---|---|---|---|---|
| NTFSSearchDLL | 1,931 | 289 | 20 | **CNTFSFileProperties ×233**, CNoneResidentNTFSDataRunList ×5, IQuickFileSystemSearchController ×4, IBuildVolumeBitmap ×4, CSearchedPartitionInfo ×4, CResidentNTFSDataRunList ×4 |
| FATSearchDLL | 1,265 | 256 | 35 | **CFATFileProperties ×93**, Fat32CalcPartition ×39, IRealFATTable ×8, CFATDataRunList ×7, (CNTFSFileProperties ×7 — shared props lib) |
| exFATSearchDLL | 1,299 | 244 | 48 | **ExFatCalcPartition ×54**, CExFatFileProperties ×28, TiXml* (tinyxml2) ×25+ |
| EXT4SearchDLL | 475 | 61 | 20 | CEXT4FileProperties ×14, **CEXT4CatchBufferDeviceProxy ×8**, CFileNode ×4, IStorageDevice ×3 |
| HFSPlusSearchDLL | 665 | 119 | 31 | CHFSPlusFileNode ×19, CPartitionVirtualVolumeDevice ×15, IFileProperties ×8, **IDirecotryTreeBuilder ×6, DetourDirectoryTree ×5** |
| ReFSSearchDLL | 629 | 218 | 39 | RefsFileProperties ×15, RefsBaseDataImpl ×14, CSearchedPartitionInfo ×13, RefsNodeRecord ×10, RefsCheckPoint ×7 |
| BtrfsSearchDLL | 452 | 48 | 16 | IDataRunList ×11, CBtrfsFileProerties *(sic)* ×6, CFileNode ×4 |
| ZfsSearchDLL | 981 | 81 | 23 | exception ×7, CFileNode ×4, **ZfsDataRunlist ×3**, CStreamBase ×3 |
| RAWSearchDLL | 1,921 | 793 | 178 | (the analyser metropolis — 106 classes per the v1 registry + RawSpeed/BruteForce/Brance namespaces) |

## 2. Structural readings [synthesis]

1. **The two giants** (NTFS 1,931 / RAW 1,921 functions) are also the two biggest
   corpora — the primary-path engine and the carving engine carry the bulk of the
   product's logic, matching the two-phase scan (quick/deep) model.
2. **CNTFSFileProperties ×233 references** in the NTFS engine vs ×93 CFATFileProperties
   in FAT — NTFS drives the props-heavy code paths (fixup validation, datarun
   splitting, $ATTRIBUTE_LIST chasing); the FAT family spends its complexity in
   `*CalcPartition` classes (39-54 refs — the lost-partition search/rebuild heuristics
   per FS: Fat32CalcPartition, ExFatCalcPartition).
3. **tinyxml2 embedded in exFAT** (TiXmlBase/TiXmlNode/TiXmlAttribute ×25+) — the
   exFAT engine parses XML config (raw-signature or analyser config reuse) — the
   only engine embedding an XML parser.
4. **HFS+ owns the tree builders** (IDirecotryTreeBuilder ×6 + DetourDirectoryTree ×5
   + CPartitionVirtualVolumeDevice ×15) — the [sic] interface and the directory-tree
   detour architecture documented in the family artifact concentrate here.
5. **ReFS is the metadata-object engine** (Refs* classes dominate; 39 distinct classes
   for 629 functions — the highest class-density after RAW; the refs:: namespace chain
   from the algorithms-v2 artifact).
6. **ZFS's small class count** (23) with CStreamBase — the stream-abstraction engine
   (zfs_struct::ZfsDataRunlist + the txg walk) does its work in big functions, not
   class hierarchies.
7. **CEXT4CatchBufferDeviceProxy** — an EXT4-specific device proxy that CATCHES
   (buffers) IO — evidence of the ext journal-replay staging buffer at device level.

## 3. Cross-links

- All engine algorithms: `ntfs-engine-algorithms-v2--*.md`,
  `fat-exfat-engine-algorithms-v2.md`, `ext4-hfs-engine-algorithms-v2.md`,
  `refs-btrfs-zfs-engine-algorithms-v2.md`
- Family architecture + factory contracts: `searchdll-family--architecture.md`,
  `engine-crossverification-matrix.md`
- RAW registry: `raw-analyser-registry.md` + `raw-dual-registry--u16-magic-keys.md`
- Props classes shared engine↔DRWUI: `SaveScan/ifileproperties-part{1,2,3}*.md`

## 4. Confidence

100% [CODE] — mechanically generated census (commands in session log); the
dominant-class readings cite reference counts, not estimates.
