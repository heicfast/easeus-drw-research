# BtrfsSearchDLL — Deep Dive: Btrfs Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/BtrfsSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/BtrfsSearchDLL_decompiled.c`
> (452 functions / 18,626 lines) + ci-multitool capa digest.

**Binary**: `og-codebase/BtrfsSearchDLL.dll` (x64). **Exports**:
`EUCreateBtrfsSearcher`, `EUCreateBtrfsQuickSearcher`, plus the family-doc-documented
**`EUCreateBtrfsComplateSearcher`** [sic — "Complate" typo preserved].

## 1. Class family (vftables verified)

`CBtrfsQuickSearch`, `CBtrfsFileProerties` [sic — "Proerties" typo preserved],
`CBtrfsNoResidentDataRunList`, `CSearchedBtrfsPartitionInfo`, shared `CFileNode`/
`CFileSystemNode`, reused `CResidentNTFSDataRunList`/`CNoneResidentNTFSDataRunList`.
DRWUI side pairs: `CBtrfsQuickTreeBuilder` (subvolume-aware tree builder — RTTI).

## 2. Compression & checksum layer (capa-verified behaviors)

| capa capability | Btrfs meaning |
|---|---|
| ZLIB inflate/deflate | **Btrfs zlib compression** (superblock + file data in zlib-compressed extents — the engine inflates on scan; deflate present for repair/rewrite paths) |
| adler32, CRC32 | **Btrfs checksums**: crc32c for data/metadata (the csum tree), adler32 for zlib streams |
| RC4 PRGA | encrypted/obfuscated dataset handling (unusual — likely proprietary container extension or anti-tamper; flagged "?" in family doc) |
| XOR encode | obfuscation (shared with FAT/exFAT/RAW engines) |

## 3. On-disk model walked

- Superblock at **0x10000** (64KB — LSF magic `_BHRfS_M`, 0x4E915542 LE u32 at magic
  offset) + mirror copies at 0x40000/0x4000000/… (the engine probes mirrors for
  damaged-volume recovery).
- Chunk tree / chunk stripes (physical↔logical mapping — the engine must translate
  logical addresses through the chunk map; `CBtrfsNoResidentDataRunList` models file
  extents in logical space).
- Root tree → FS trees per **subvolume** (the DRWUI CBtrfsQuickTreeBuilder renders
  each subvolume as a separate root in the results tree).
- Metadata (internal) nodes/leaves: Btrfs CoW leaf walking (key-ordered items:
  inode_item, dir_item, dir_index, extent_item refs).

## 4. Verification ledger

| Claim | Evidence |
|---|---|
| Class census (with both vendor typos preserved) | vftable rg census |
| zlib/adler32/crc32c/RC4/XOR capabilities | ci-multitool capa digest (searchdll batch) |
| NTFS runlist reuse | vftable census |
| Subvolume-aware UI side | CBtrfsQuickTreeBuilder RTTI (DRWUI) |

## 5. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Sibling deep-dives: same directory
- Btrfs in NAS/Linux flows: `artifacts/EuShare/eumrx-nas-architecture.md`
