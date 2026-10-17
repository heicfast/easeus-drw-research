# ZfsSearchDLL — Deep Dive: ZFS Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/ZfsSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/ZfsSearchDLL_decompiled.c`
> (981 functions / 45,364 lines).

**Binary**: `og-codebase/ZfsSearchDLL.dll` (x64). **Exports**: `EUCreateZFSSearcher`,
`EUCreateZFSQuickSearcher` (DRWUI FS code 13 = ZFS).

## 1. Class family (vftables verified)

`CZfsQuickSearch`, `CZfsSearchController`, `CStreamBase` (unique to this engine — a
stream abstraction over the pool), shared `CFileNode`/`CFileSystemNode`,
`CSearchedPartitionInfo`, `ICompleteFileSystemSearchController`, `IDataRunList`.

## 2. Uberblock scanning (magic 0x00BAB10C — 4 verified sites)

```
if (magic == 0xbab10c) …                          // 32321, 32365 — uberblock magic
   while (plVar10 = plVar8 - 0x80, …)             // 128-byte (0x80) uberblock stride
   (plVar12[-0x80] != 0xbab10c || …)              // 35244 — vdev label walk
```
- The engine scans **vdev labels** (each vdev has 4 labels × 128 KB at the front/back
  of the device; each label contains an uberblock ring of **0x80-byte uberblocks**).
- It selects the **highest-transaction-g valid uberblock** (the `plVar12[-0x7e] <=
  plVar12[2]`-style comparisons = txg ordering) — exactly how ZFS import finds the
  newest pool state, implemented here for dead-pool recovery.
- Uberblock → MOS (Meta-Object Set) → object walk (DMU objects: DSL directory/dir
  child maps, ZAP objects for the dataset hierarchy) — `CStreamBase` abstracts
  block-pointer following (gang blocks/indirect blocks) with checksum-aware reads.

## 3. Feature behavior (capa digest)

- delay-execution polling + file R/W (capa) — pool probing with retries (multiple
  vdev offsets tried in sequence with backoff), consistent with the uberblock
  candidate walk.
- ZFS per-dataset snapshots: the engine surfaces snapshot roots when present in the
  DSL tree (family evidence: dataset hierarchy enumeration).

## 4. Why a whole 981-function engine for ZFS

ZFS is self-validating (checksummed CoW): the engine must reimplement the DMU
(block-pointer walk, gang blocks, compression [lzjb/gzip] and checksum verify) to
mount-free read a pool — the second-largest FS engine (45K lines) after NTFS/RAW,
with the most unusual IO layer (`CStreamBase` instead of plain device reads).

## 5. Verification ledger

| Claim | Evidence (ZfsSearchDLL_decompiled.c) |
|---|---|
| Uberblock magic 0x00BAB10C × 4 sites | 15049, 32321, 32365, 35244 |
| 0x80-byte uberblock ring stride | 32365, 35244 (plVar8-0x80) |
| txg ordering comparisons | 32365-32370, 35244 |
| CStreamBase abstraction | vftable census |
| Class census | vftable rg census |

## 6. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Sibling deep-dives: same directory
- ZFS on NAS/Linux boxes (remote scan via agent): `artifacts/EuShare/eumrx-nas-architecture.md`
