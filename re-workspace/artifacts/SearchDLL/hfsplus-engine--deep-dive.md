# HFSPlusSearchDLL — Deep Dive: HFS+/HFSX Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/HFSPlusSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/HFSPlusSearchDLL_decompiled.c`
> (665 functions / 22,304 lines) — the engine whose internal **hfspluslib** source tree
> (volume/btree/btnode/btreeoption/catalog/extents/attribute/journal/rawfile) is fully
> recoverable from trace strings.

**Binary**: `og-codebase/HFSPlusSearchDLL.dll` (x64). **Exports**:
`EUCreateHFSSearcher`, `EUCreateHFSQuickSearcher`.
**Class family (vftables verified)**: `CHFSPlus{Quick,Complete}FileSystemSearchController`,
`CHFSPlusCatalog`, `CHFSPlusExtents`, `CHFSPlusAttribute`, `CHFSPlusBTreeOptionBase`,
`CHFSPlusFileNode`, `CHFSPlusFileCache`, `CHFSPlusRawfile`, `CPartitionVirtualVolumeDevice`,
plus shared `CFileNode`/`CFileSystemNode` and **reused `CResidentNTFSDataRunList`** (the
HFS+ extent model reuses the NTFS datarun classes, as exFAT does).

## 1. Volume signature validation (FUN @9990-10020 — byte-exact)

```
if (((sig == 0x482B /* "H+" */) || (sig == 0x4858 /* "HX" HFSX */))
    && ((blockSize & 0x1FF) == 0)          // block size multiple of 512
    && (version < 0x11)                    // HFS+ signature version < 17
    && (allocFileBlockCount <= totalBlocks)
    && (extentsFileBlockCount <= totalBlocks))
    → volume accepted
```
- "H+" = HFS+; **"HX" = HFSX** (case-sensitive variant, used by macOS system volumes) —
  both supported.
- Failure error code family: `0x5017900000002`-style HRESULTs (engine-facility codes,
  consistent with the 0x5002xxxx family convention).
- Field checks mirror the HFS+ volume header (`allocationFile`/`extentsFile` clamped to
  `totalBlocks`).

## 2. B-tree machinery (the hfspluslib port)

- `CHFSPlusCatalog` — the Catalog B-tree walker: node traversal via the B-tree option
  object (`CHFSPlusBTreeOptionBase`, the "btnode/btreeoption" sources); catalog leaf
  records → `CHFSPlusFileNode` (thread/fork records, HFSCatalogNodeIDs: cnid parent
  chains reconstruct the folder hierarchy).
- `CHFSPlusExtents` — the Extents Overflow B-tree: 8-overflow forks followed for
  fragmented files (forks with > 8 initial extents).
- `CHFSPlusAttribute` — the Attributes B-tree (named forks/compression decmpfs support).
- `CHFSPlusFileCache` + `CHFSPlusRawfile` — the journal-aware raw file reader
  ("rawfile.cpp" source: reads forks through extents with caching; the journal replay
  logic lives in journal.cpp per the source tree).
- Deleted HFS+ files: catalog records are overwritten on delete (unlike NTFS), so the
  deep pass also relies on orphaned-cnid sweeps and the RAW carving engine for HFS+ —
  consistent with the product's "Advanced Scan" combining engines + RAW.

## 3. Quick-search flow (already decoded in family doc §4 — confirmed)

`CHFSPlusQuickFileSystemSearchController::QuickSearchFiles` trace strings (495-511):
`"Return Error:0x"` + `"\tFile:"` + `"\tLine:"` + `"\tFuction:"` [sic] + class::method —
the verbose diagnostics channel. The controller-ctor dual-vtable sequence
(ICompleteFileSystemSearchController → CHFSPlusComplete… + **IDirecotryTreeBuilder** [sic]
→ DetourDirectoryTree at +0x1d) is re-verified at 1240-1254.

## 4. Engine-specific notes

- `CPartitionVirtualVolumeDevice` — the lost-partition virtual volume abstraction (works
  on partitions the OS can't mount) — shared with other engines but most exercised here
  (Mac disks in Windows hosts / external drives).
- Volume geometry flow: `FUN_18000b410` (partition context) → device reader `FUN_18000af90
  (device, 0, totalSectors)` → tree attach (vtable[0x18]) → DetourDirectoryTree unwrap →
  build (vtable[9]).
- The engine keeps a per-file **fork model**: resource + data forks both surface in
  results (resource forks named `..namedfork/rsrc` conventionally in recovery products).

## 5. Verification ledger

| Claim | Evidence (HFSPlusSearchDLL_decompiled.c) |
|---|---|
| "H+"(0x482B)/"HX"(0x4858) signature + 512-align + version<0x11 + field clamps | 10005-10020 |
| Error code 0x5017900000002 | 10051 |
| Class census (Catalog/Extents/Attribute/BTreeOption/FileCache/Rawfile) | vftable sites (rg census) |
| NTFS datarun-class reuse | CResidentNTFSDataRunList vftable present |
| Constructor dual-vtable + IDirecotryTreeBuilder typo | 1240-1254 |
| QuickSearchFiles trace strings | 495-511 |
| PartitionVirtualVolumeDevice flow | family §4 + vftable |

## 6. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md` (§1 source
  tree, §3 controller=tree-builder, §4 quick flow)
- Sibling deep-dives: `ntfs-engine--deep-dive.md`, `fat-engine--deep-dive.md`,
  `exfat-engine--deep-dive.md`, `rawsearch-carving--deep-dive.md`
- hfspluslib also statically linked in DRWUI (parallel copy): `artifacts/DRWUI-exe--main-ui-architecture.md` §9.1
