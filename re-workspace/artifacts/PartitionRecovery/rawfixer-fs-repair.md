# RawFixer.dll — Filesystem Structure Repair (Pre-Scan FS Fixing)

> Binary: `og-codebase/PartitionRecovery/RawFixer.dll` — decompiled 3,446 functions / 86,575 lines
> Source (PDB-trace): `i:\_drw_main\partitionrecovery\rawfixer\` (build machine I:)
> Files: rawfixer.cpp, ntfsfixer.cpp, fatfixer.cpp, exfatfixer.cpp, rawfixerlog.cpp, rawinfocollector.cpp

## Role in the product

RawFixer is the **pre-scan filesystem repair engine**. When a volume's FS metadata is damaged
(corrupt boot sector, broken FAT table, invalid MFT), the structured scan engines cannot parse
it. RawFixer repairs the on-disk structures enough for a structured scan to proceed — and it
does so **transactionally** (every fixer implements `Undo`).

Called from the PartitionRecovery module system (MOM) during scan preparation, and by
DRW's damaged-volume flows ("Check" phase classes: CCheckNtfsPartition, CCheckFatPartition,
CCheckExFatPartition, CCheckBitlockerPartition in DRWUI RTTI pair with these fixers).

## Class API (all names extracted from binary, scoped "Enter {}/Leave {}" logging)

### CRawFixer (facade, rawfixer.cpp)
| Method | Role |
|---|---|
| `Start` | begin fix session |
| `CheckPartition` | probe FS type + damage assessment → dispatch to per-FS fixer |

### NTFSFixer (ntfsfixer.cpp)
| Method | Role |
|---|---|
| `CheckDBR` / `FixDBR` / `FixFromDBR` / `UpdateDBR` | validate/repair/restore-from/rebuild the NTFS boot sector (DBR). FixFromDBR = restore using the NTFS backup boot sector (sector 65537-ish mirror) or a rebuilt one |
| `CheckMFT` | validate $MFT header/records reachable from DBR values |
| `IsValidRootDir` | root directory sanity |
| `FixByScanSector` | **sector-scan fallback**: when boot metadata is unrecoverable, scan the disk to relocate the MFT / key structures by content |
| `CheckSector` | sector-level validation during scans |
| `Undo` | rollback all writes |

### FATFixer (fatfixer.cpp)
`CheckDBR`, `IsValidDBR`, `CheckFatTable` (FAT1/FAT2 consistency), `CheckRootDir`,
`CheckCluster`, `CheckBackupDBR` (backup boot sector), `FixFromDBR`, `UpdateDBR`, `Undo`.

### ExFATFixer (exfatfixer.cpp)
`FixFromDBR`, `FixDBR`, `UpdateDBR`, `ReadCluster` (cluster-chain access during fix), `Undo`.

### RawInfoCollector (rawinfocollector.cpp)
Gathers disk/volume geometry + raw sector evidence used by the fixers (sector sizes,
partition boundaries, candidate boot sectors).

## Repair strategy (decoded)

```
CRawFixer::Start → CheckPartition
  ├─ FS = NTFS  → NTFSFixer: CheckDBR ok? → CheckMFT ok? → done
  │      else: FixDBR (in-place) / FixFromDBR (backup/restore) / FixByScanSector (deep)
  │      → UpdateDBR writes repaired boot sector → Verify (IsValidRootDir/CheckMFT)
  ├─ FS = FAT   → FATFixer: CheckDBR → CheckBackupDBR → CheckFatTable → CheckRootDir/Cluster
  └─ FS = exFAT → ExFATFixer: FixFromDBR → ReadCluster verification
  All paths: Undo available (transactional), RawFixerLog records each action
```

Progress is async (Concurrency::message<uint64> lambdas — Concurrency runtime task per phase).

## Why this matters for recovery quality

This is the component that distinguishes "deep" products from simple carvers: instead of only
carving raw files from a dead NTFS, DRW first **repairs the FS in place (reversibly)** so the
FULL directory tree, file names, timestamps, and attributes survive. Only volumes that resist
RawFixer fall through to pure RAW carving (RAWSearchDLL) — and the RAW results then still get
correlated (regroupfile.cpp "use filesystem DataRun" logic on the repair side).

## Cross-links

- Scan engine family: `artifacts/SearchDLL/searchdll-family--architecture.md`
- MOM module host: `artifacts/PartitionRecovery/mom-module-system--architecture.md`
- Kernel raw IO used for sector reads/writes: `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- DRWUI check classes: `artifacts/DRWUI-exe--main-ui-architecture.md`
- Partition source tree: this batch — `epmlogic/` (EPM-shared), `mod.native/` (MBR/GPT convert,
  gen EFI system files), `legacy_mod/` (winchkdsk)
- Raw evidence: `re-workspace/reversed/ghidra-partition/RawFixer_*`

## Confidence

All method names byte-exact from binary strings (scoped logger emits `Class::Method`).
Call-flow semantics (check→fix→update→verify→undo) follow from method set + standard
fixer semantics; FixByScanSector content-scan behavior confirmed by name + sector-check helpers.
