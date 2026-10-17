# exFATSearchDLL — Deep Dive: exFAT Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/exFATSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/exFATSearchDLL_decompiled.c`
> (1,299 functions / 58,043 lines) + ci-multitool capa digest.

**Binary**: `og-codebase/exFATSearchDLL.dll` (x64). **Exports**:
`EUCreateEXFATSearcher`, `EUCreateEXFATQuickSearcher`.

## 1. Object construction & class family (vftables verified)

- `EUCreateEXFATQuickSearcher`: `new(0x8E0)` → **CExFatQuickSearch** (2,240 bytes —
  the largest quick-searcher of the FAT family: it embeds the allocation-bitmap builder,
  see §2) with sub-object at +0x88 (FUN_18000db40).
- Full class inventory (RTTI/vftable sites):
  `CExFatQuickSearch(Ex)`, `CExFatCompleteSearch`, `CExFatPartition(Ex)`,
  `CExFatVolumeAnalyer` [sic — vendor typo], `CExFatDataRunList`, `CExFatFileProperties`,
  `CFileNode`, `CFileSystemNode`, **`CQuickSearchAndBuildBitmap`** (shared base @10523+),
  plus **reused NTFS classes** `CNTFSFileProperties` / `CNTFSFileRecordDataRunsAttribute`
  — the exFAT engine shares the NTFS property/datarun code (exFAT's extent model is
  NTFS-like: `CExFatDataRunList` mirrors `CNoneResidentNTFSDataRunList`).

## 2. The allocation bitmap during quick scan

**`CQuickSearchAndBuildBitmap`** (4 vftable sites) is the shared base that builds the
volume allocation bitmap *while* the quick scan walks directory entries — matching exFAT's
on-disk **Allocation Bitmap directory entry (type 0x81)** semantics: the engine mirrors the
FS bitmap in memory for deleted-cluster reasoning (same auxiliary-bitmap concept as NTFS
$Bitmap / the NAS agent's euAuxiliaryBitmaplog).

## 3. Directory-entry model (from class structure + family conventions)

exFAT's dentry set handled by the entry parsers: Volume Label (0x83), Allocation Bitmap
(0x81/0x82), Up-case Table (0x81/0x82 secondary), File (0x85) + Stream Extension (0xC0) +
File Name (0xC1) triplets — the engine's parser state machine pairs Stream+Name entries
(and computes runs from `CExFatDataRunList`), with `NoFatChain` contiguous-run support
(datarun model without FAT-table walking). Deleted files = File dentries flagged invalid
(0xE5-style/invalid flag) but still paired when both fragments survive.

## 4. capa behavior digest (ci-multitool, verified)

| Capability | Meaning here |
|---|---|
| XOR encode | anti-tamper string/data obfuscation in the engine core (as in FAT/RAW engines) |
| FNV hash | FNV-1a used as the filename/hash keying in internal maps |
| "parse credit card information" | **capa false positive** — its regex matches the carving-signature scanning loop (noted in family doc) |
| file R/W | volume IO through the device abstraction |

## 5. Verification ledger

| Claim | Evidence |
|---|---|
| CExFatQuickSearch 0x8E0 bytes | EUCreateEXFATQuickSearcher (25-40) |
| Class inventory (incl. NTFS-class reuse) | vftable sites 10523/11120/11328 + rg census |
| CQuickSearchAndBuildBitmap shared base | vftable @10523, 10577, 11120, 11328 |
| CExFatVolumeAnalyer [sic] | vftable name (typo preserved) |
| XOR/FNV/file R/W capa set | `re-workspace/reversed/ci-multitool/searchdll/` digest |

## 6. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- FAT sibling (shared lineage): `fat-engine--deep-dive.md`
- NTFS datarun model shared: `ntfs-engine--deep-dive.md` §7
- exFAT repair (CheckMustBeZero/ChecksumDBR): `artifacts/PartitionRecovery/rawfixer-fs-repair.md`
