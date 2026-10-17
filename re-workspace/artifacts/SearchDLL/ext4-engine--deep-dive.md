# EXT4SearchDLL — Deep Dive: ext2/3/4 Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/EXT4SearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/EXT4SearchDLL_decompiled.c`
> (475 functions / 18,071 lines).

**Binary**: `og-codebase/EXT4SearchDLL.dll` (x64). **Exports**: `EUCreateEXT2Searcher`
and `EUCreateEXT2QuickSearcher` (per DRWUI's FS-code map 4-5=EXT2 — one engine family
covers ext2/3/4; also `EUCreateEXT4Searcher`/`EUCreateEXT4QuickSearcher` per the family
doc), see FS codes 4-5 and 9.

## 1. Class family (vftables verified)

`CEXT4QuickSearch`, `CEXT4CompleteSearch`, `CEXT4FileProperties`, `CExt4DataRunList`,
**`CEXT4CatchBufferDeviceProxy`** + `EXT4CatchBufferObj`, shared `CFileNode`/
`CFileSystemNode`, and reused `CResidentNTFSDataRunList`/`CNoneResidentNTFSDataRunList`
(extent model shared with NTFS engine).

## 2. Superblock detection (magic 0xEF53)

`uVar2 = 0xEF53` (line 3222) — the ext superblock magic at offset 0x438 (1024+56).
The engine probes superblocks at both the primary offset and backup superblock
positions (sparse/backup superblock blocks: 8193, 32768…) for damaged-volume discovery.

## 3. The CatchBuffer device proxy — bad-sector resilience (unique to this engine)

`CEXT4CatchBufferDeviceProxy` wraps the volume device (vtable dispatch @ its vftable
sites): reads are strided by geometry (`(block + param_2) * geometry`), and on read
failure the proxy allocates a fresh 0xE00-byte buffer object and **retries with a
shifted window** (lVar8-0x400 = 1KB-backtrack re-read) — the "catch buffer" catches
short/failed reads and salvages what it can instead of failing the whole group scan.
This matches DRW's "Program is trying to skip bad sectors to find data" UX copy —
the EXT4 engine implements that skip-and-salvage behavior most literally.

## 4. On-disk structures walked (from class names + family conventions)

superblock (0xEF53, features, inode size) → group descriptors (group descriptor table
with inode/bitmap/block-bitmap locations) → inode tables → **extents** (extent tree:
`CExt4DataRunList` models the extent-header/idx/leaf arrays; ext3 fallback = indirect
block model) → directory entries (linear + htree (dx_dir) hashed directories).

## 5. Verification ledger

| Claim | Evidence (EXT4SearchDLL_decompiled.c) |
|---|---|
| ext magic 0xEF53 | line 3222 |
| CEXT4CatchBufferDeviceProxy retry w/ 0xE00 buffer, 0x400 backtrack | vftable site + ctor flow |
| Class census incl. NTFS runlist reuse | vftable rg census |
| Quick/Complete split | CEXT4QuickSearch/CEXT4CompleteSearch vftables |

## 6. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Sibling deep-dives: ntfs/fat/exfat/hfsplus/rawsearch (same directory)
- Linux RAID/box agent flows (remote EXT scan): `artifacts/EuShare/eumrx-nas-architecture.md`
