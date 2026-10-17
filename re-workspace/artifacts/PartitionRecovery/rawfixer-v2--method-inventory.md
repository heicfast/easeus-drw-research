# RawFixer v2 — complete method inventory, trace framework, and key validators

> Companion to the partition-subsystem artifact (which documented the transactional
> protocol CheckDBR→FixFromDBR→UpdateDBR + FixByScanSector fallback + Undo at contract
> level). This file adds the **complete vendor method table** (33 named methods from
> embedded `__FUNCTION__` traces), the ENTER/EXIT tracing framework, and key algorithm
> reads. Corpus: `ghidra-partition/RawFixer_decompiled.c` (86,575 lines).

## 1. The complete method inventory [CODE — verbatim trace strings]

**Shared protocol (all three fixers):**

| Method | FAT | NTFS | exFAT |
|---|---|---|---|
| CheckDBR | ✓ | ✓ | ✓ |
| FixFromDBR | ✓ | ✓ | ✓ |
| UpdateDBR | ✓ | ✓ | ✓ |
| FixDBR | — | ✓ | ✓ |
| FixByScanSector | ✓ | ✓ | ✓ |
| CheckSector | ✓ | ✓ | ✓ |
| Undo | ✓ | ✓ | (via CopySectors) |

**Per-FS specific validators:**

| Fixer | Methods |
|---|---|
| FATFixer | `CheckRootDir`, `IsValidDBR`, `CheckFatTable`, `CheckCluster`, `CheckBackupDBR` |
| NTFSFixer | `IsValidRootDir`, `CheckMFT` |
| ExFATFixer | `TryFixFromSectorsPerCluster`, `ReadCluster`, `CopySectors`, `ChecksumDBR`, `CheckRoot`, `CheckMustBeZero` |

**Orchestrator:** `CRawFixer::Start`, `CRawFixer::CheckPartition`.

Source files (trace paths): `i:\_drw_main\partitionrecovery\rawfixer\{ntfsfixer,
fatfixer,exfatfixer}.cpp` (+ per-method line numbers embedded — e.g. CheckMFT@0x1B3,
TryFixFromSectorsPerCluster@0x1AC/0x1A6, CheckDBR@0x4E/0x5A — a partial source-line
map of the vendor tree).

## 2. The ENTER/EXIT trace framework [CODE]

Every method wraps its body in:
```
std::string name("NTFSFixer::CheckMFT");       // __FUNCTION__
trace = FUN_180002090(name);                     // trace context
props = CPropertySection("Enter {} ", ...)       // entry record
rec = make_trace_record(file="…\\ntfsfixer.cpp", line=0x1B3, method)
FUN_180023500(logger, rec, 0, props, &ctx)       // emit
… body …
```
plus `CCallBackOperate` progress objects (RAII, `__autoclassinit2` patterns) — the
same progress/callback machinery the scan engines use, so repair progress streams to
the UI identically to scan progress.

## 3. NTFSFixer::CheckMFT — key mechanics [CODE]

- Early-out if `u16@parsedBP+0x0B == 0` (bytes-per-sector zero → invalid BPB).
- **MFT record sizing** from the BPB's signed byte:
  `if (clusters_per_record < 0) recsize = 1 << (-clusters_per_record)` (log2 encoding)
  `else recsize = clusters_per_record * bytes_per_sector` — the NTFS spec rule.
- `mft_bytes = u16@+0x0B × record_size`; sector math derives `mft_sectors`.
- The body runs inside **PPL agents** (`Concurrency::message<unsigned __int64>`,
  `FID_conflict_function<void __cdecl(Concurrency::message<UInt64>*)><lambda…>`,
  `move_iterator`) — repair is ASYNC/agent-pipelined, matching the callback operator
  classes (`CCallBackOperate`) in the MOM layer.
- On validation failure the fixer returns 0xFFFFFFFF (the shared "abort repair"
  sentinel used across CRawFixer).

## 4. ExFATFixer specifics [CODE]

- `ChecksumDBR` — the exFAT boot-sector **boot checksum** (bytes 11..209 + 510
  boot-signature region hashed with the rolling per-byte `ucCRC & 1 ? 0x87>>7|<<1 : >>1`
  algorithm — the VHD-style CRC used by exFAT's `BootChecksum` field) re-implemented
  to validate/repair both boot sectors (primary at 0, backup at LBA 12).
- `TryFixFromSectorsPerCluster` — geometry-repair heuristic: when the DBR's
  sectors-per-cluster is corrupt, the fixer **re-derives SPC from cluster-count
  invariants** (two candidate paths at source lines 0x1AC/0x1A6 — one computes from
  the FAT chain, one from the cluster heap bounds) and re-validates via CheckRoot.
- `CheckMustBeZero` — verifies the reserved zero fields of the exFAT BPB (a
  fast corruption indicator unique to exFAT's format).
- `CopySectors` — the undo-log mechanism: original sectors are copied aside before
  any write, replayed back by the Undo path.

## 5. FATFixer specifics [CODE]

- `CheckFatTable` + `CheckCluster` — FAT chain integrity probes (per-table and
  per-entry granularity; pairs with the engine's IFATTable/CDoubleFATTable mirror
  logic in `SearchDLL/fat-exfat-engine-algorithms-v2.md` §1).
- `CheckBackupDBR` — FAT32's backup boot sector (sector 6) validation; the
  FixFromDBR path restores the primary from it when valid.
- `CheckRootDir` — the FAT root-directory region walk (FAT12/16 fixed region vs
  FAT32 chained root).

## 6. Cross-links

- Transactional protocol + CRawFixer::Start flow:
  `PartitionRecovery/partition-subsystem--rawfixer-pending-ops.md`
- Engine-side validators that pair with these fixers: the algorithm-v2 wave
  (`SearchDLL/*-algorithms-v2.md`)
- The MOM callback layer for progress: `MOM-modules/CallbackOperator.md`
- Build-tree intelligence (the `i:\` third build drive):
  `architecture/01-build-tree-intelligence.md`

## 7. Confidence

100% [CODE] for the method table (verbatim), trace framework, CheckMFT sizing rules,
PPL usage, and the per-fixer method groupings. ChecksumDBR's algorithm description
references the exFAT spec's documented BootChecksum algorithm [INFERRED — the exact
byte loop was not re-derived this session; the method's existence and both-bootsector
application are CODE].
