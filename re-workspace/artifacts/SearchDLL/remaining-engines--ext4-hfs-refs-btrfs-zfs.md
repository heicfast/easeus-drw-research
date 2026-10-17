# EXT4 / HFS+ / ReFS / Btrfs / ZFS Engines — Internals (Deep-Dive)

> Decompile: `re-workspace/reversed/ghidra-searchdll/` (9-engine batch, 349K lines total).
> All class names RTTI-ground-truth; strings byte-exact; vendor typos preserved as evidence.

## EXT4SearchDLL.dll (13 named classes + shared)

| Class | Role |
|---|---|
| `CEXT4QuickSearch` / `CEXT4CompleteSearch` | quick/complete controllers |
| `CEXT4CatchBufferDeviceProxy` : IStorageDevice | buffered device proxy — read coalescing over the inode/group regions |
| `CExt4DataRunList` : IDataRunList | extent-tree → cluster-run translation |

Key decoded behavior (traces + strings):
- **Journal traversal**: "GotJournalDir:  id=%I64d,parentId:%I64d,sector:%I64d" and
  "TraverseJournalDir:  fileName:%s ,id=%I64d,parentId=%I64d" — the engine walks the ext4
  journal (inode 8, .journal file) to recover recently-modified/deleted state not yet
  reflected in the main trees — ext4-aware recovery beyond plain inode walking.
- Engine log: `%s\log\ext4.log`.
- superblock/group-descriptor validation with flexible block sizes + extent trees
  (depth handling per ext4 extents spec); orphan-file/list handling for deleted inodes.

## HFSPlusSearchDLL.dll (20 named classes)

Full in-DLL HFS+ implementation (mirrors the hfspluslib source files embedded in DRWUI):

| Class | Role |
|---|---|
| `CHFSPlusCatalog` | catalog B-tree (ReadKey/ReadData callbacks — traced) |
| `CHFSPlusExtents` | extents-overflow B-tree (ReadKey/ReadData — traced) |
| `CHFSPlusAttribute` | attributes B-tree (xattrs) |
| `CHFSPlusBTreeOptionBase` : IHFSPlusBTreeOption | per-tree node/key iteration policies |
| `CHFSPlusFileNode` / `CHFSPlusFileCache` | fork-based file nodes + hot-node cache |
| `CHFSPlusRawfile` | raw fork access (non-catalog reads) |
| `CPartitionVirtualVolumeDevice` : IStorageDevice | volume abstraction working on lost partitions |
| `CHFSPlus{Quick,Complete}FileSystemSearchController` | controllers (also tree builders via DetourDirectoryTree MI — see architecture/05 §3) |

Source files (embedded paths): hfsplus{volume,btree,btnode,btreeoption,catalog,extents,
attribute,journal,rawfile}.cpp — including **journal** replay support (HFS+ journal is a
circular hot-file; the library reads it for recent-state recovery).

## ReFSSearchDLL.dll (9 named classes + refs:: impl layer)

Small controller surface; the heavy lifting sits in a `refs::` implementation namespace
(RTTI, all verified):

- `refs::RefsDbrImpl` — ReFS boot/DBR interpretation
- `refs::RefsMSTreeHeaderDescImpl` — MSB (metadata sequence) tree headers
- `refs::RefsMetadataBlockHeaderImpl` / `RefsMetadataBlockRefrenceImpl` [sic] — metadata
  block layer + references (block tree walking)
- `refs::RefsCheckPointImpl` — checkpoint handling (ReFS periodic metadata snapshots)
- `refs::RefsDirectoryValuesImpl` / `RefsFileValuesImpl` — dir/file value records
- `refs::RefsBaseDataImpl` — identity/parent linkage base

Pairs with the PartitionRecovery-side `RefsFileSystemAnalyser.mo` (CRefsAnalyze, MSB procs,
BitmapProc, BlockRefTableProc — see mo-module-map). Controllers:
`CReFSDataRunList` (non-resident runs) + `CRefsResidentDataRunList` (resident — ReFS small
files inline). OS-version gating in imports (ReFS metadata layouts vary by Windows build).

## BtrfsSearchDLL.dll (10 named classes)

- `CBtrfsQuickSearch` + `CSearchedBtrfsPartitionInfo`; exports include
  **`EUCreateBtrfsComplateSearcher`** [sic — "Complate" typo shipped in the export table]
  and `EUCreateBtrfsQuickSearcher`.
- `CBtrfsNoResidentDataRunList` — extent mapping for non-inline file data.
- **`BtrfsCache.txt`** (relative path string) — the engine persists a metadata cache file
  in the DLL's directory to speed re-scans of the same volume (subvolume/chunk trees cached).
- Decompression: ZLIB inflate (Btrfs zlib compression) + RC4 PRGA (encrypted-dataset
  support) + CRC32/adler32 (Btrfs checksums csum/csum_item) — capa-verified.

## ZfsSearchDLL.dll (10 named classes + zfs_struct:: layer)

A full ZFS on-disk stack in user mode (`zfs_struct::` namespace, RTTI-verified):

| Structure | ZFS concept |
|---|---|
| `UberData` | uberblock — the root-of-roots transaction pointer |
| `VdevLoc` / `VdevDisk` | vdev (virtual device) topology — member disks of the pool |
| `objset` | object set (a dataset's objects) |
| `ZplNode` / `ZplNodeFile` | ZPL (ZFS POSIX Layer) inode / file nodes |
| `std::map<int64, zio_compress>` | per-object compression algorithm registry (LZJB/LZ4/zle/gzip…) |
| `CStreamBase`, `CZfsQuickSearch`, `CZfsSearchController` | stream + controllers |

ZFS recovery = find uberblocks (labels at 4 offsets × 2 copies per disk) → assemble vdev
topology → open objset → walk ZPL nodes — pool-level reconstruction that survives
filesystem-level damage. Delay-execution import (polling during long walks).

## Common engine architecture facts

- All 9 engines share the CFileSystemNode/CFileNode/IFileProperties/IDataRunList base
  library (compiled per-DLL) — the RTTI overlap across engines proves a shared
  "engine SDK" static library in the monorepo.
- All export `EUCreate<FS>Searcher` + `EUCreate<FS>QuickSearcher` (Btrfs's typo noted).
- Engine log channels per FS: `%s\log\<name>.log` pattern (ext4.log, euExfat.log,
  DelexFat.log, euAuxiliaryBitmaplog [NAS side]…).

## Cross-links

- Family: `artifacts/SearchDLL/searchdll-family--architecture.md`; NTFS: `ntfs-engine-internals.md`;
  FAT/exFAT: `fat-exfat-engine-internals.md`
- Engine architecture: `architecture/05-scan-engine-architecture.md`
- ReFS partition layer: `artifacts/PartitionRecovery/mo-module-map.md` §RefsFileSystemAnalyser

## Confidence

Class/structure names and strings byte-exact (RTTI + string tables). Behavior statements
journal/cache/compression — backed by trace formats, cache file string, capa rules, and
standard FS semantics; labeled where inferred from structure rather than traced calls.
