# FATSearchDLL — Deep Dive: FAT12/16/32 Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/FATSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/FATSearchDLL_decompiled.c`
> (1,265 functions / 64,658 lines).

**Binary**: `og-codebase/FATSearchDLL.dll` (x64). **Exports**: `EUCreateFATSearcher`,
`EUCreateFATQuickSearcher`.

## 1. Object construction (decompiled)

- `EUCreateFATQuickSearcher`: `new(0x1C0)` → **CFATQuickSearch** (448 bytes; embedded
  0x200-byte buffer at +0xA0 via FUN_180027ed0(…, 0x200) — the sector staging buffer).
- Nested class **`CFATQuickSearch::CFATQuickSearchWorker`** (vftable at 26931): a
  parameterized worker object (13+ constructor params incl. partition context, thread
  control at +0x38, progress flags, `param_3 == 0 ? 512 : …` sector-size defaulting) —
  **the quick scan is threaded per-worker**, matching DRWUI's async model.
- Complete-search controller: `CFATSearchController` (family RTTI), created by
  `EUCreateFATSearcher`.
- Partition math: **`Fat32CalcPartition`** (RTTI @5595+ sites) — the FAT32-specific
  geometry/capacity calculator used during validation ("FAT32" name string at 7802/34341).

## 2. FAT table abstraction (polymorphic cluster-chain readers)

Three classes replace the raw FAT-array walk — verified vftable sites:

| Class | Sites | Role |
|---|---|---|
| `CFAT12Table` | 44715 / 53752 | FAT12 chain stepping (12-bit packed entries, boundary crossing) |
| `CFAT16Table` | 44742 / 54017 | FAT16 chain stepping |
| `CFAT32Table` | 44772 / 53816 | FAT32 chain stepping (28-bit valid range) |

Selected by FAT type detection — `_strnicmp(bootsector+0x36, "FAT16   ", 8)` (38048) and
`"FAT12"`/`"FAT16"`/`"FAT32"` version-string writes at 9860-9863 / 27904-27907 / 34341-34345
(the 8.3-BS `FATxxx   ` OEM label at offset 0x36 for FAT12/16, 0x52 for FAT32).

## 3. End-of-chain / bad-cluster logic (FAT32 semantics decoded)

The chain-walk termination check (8035-8060 region):
```
if (entry == 0xFFFFFFF8) → EOC                              // max FAT32 chain end
mask-28 (0x0FFFFFFF): (e & 0xFFFFFFF8) == 0xFFFFFFF8        // EOC family 0FFFFFF8-0FFFFFFF
mask-24 (0x07FFFFF8) secondary check                        // dirty/reserved variants
(e & 0xFFFFFFF) == 0xFFFFFF0 … (e & 0xFFFFFF0) == 0xFFFFFF0 // alternate EOC form family
```
This encodes the FAT32 spec's EOC range (0x0FFFFFF8…0x0FFFFFFF), the reserved
0x0FFFFFF6-7 (reserved/bad), and the 0x0FFFFFF0-7 forms some BIOSes write — tolerant
termination for chain walking on real-world corrupt volumes.

## 4. Deleted-entry & LFN handling (directory-entry pass)

- **Deleted 8.3 entries**: first byte `0xE5` — compiled as signed char `-0x1b`, verified at
  **6 sites** (11742, 14634, 14825, 29978, 30178, 32155), e.g.
  `if ((*(char*)*param_2 == -0x1b) && (*param_7 < 0x10000))` — deleted entries are kept,
  with a 64KB-chain-length sanity guard (`< 0x10000` clusters) to bound corrupt chains.
- **LFN (long file names)**: the 0x40 last-logical-entry flag and 0x0F attribute checks
  appear in the entry parsers (11442, 28446, 33978, 44355 sites — `attr & 0x40` on the LFN
  sequence field at +0x72/0x0B); LFN fragments are reassembled checksum-verified against
  their 8.3 alias (the standard algorithm — visible as paired short/long entry state
  machines in the walk loops).
- Directory recursion: `FUN_18000b430` / `FUN_180008d50` process valid/invalid entry chains
  and feed the tree builders.

## 5. Obfuscation/tooling notes (capa)

FATSearchDLL carries **stackstring obfuscation + runtime function linking** (capa) —
unusual for an FS engine: the engine hides its import surface (consistent with the family
doc's note; likely anti-tamper for the commercial scan core, not anti-AV).

## 6. Verification ledger

| Claim | Evidence (FATSearchDLL_decompiled.c) |
|---|---|
| CFATQuickSearch 0x1C0 bytes + 0x200 sector buffer | EUCreateFATQuickSearcher (35-60) |
| Threaded CFATQuickSearchWorker | vftable + ctor at 26931-27000 |
| CFAT12/16/32Table polymorphism | 44715/44742/44772 + 53752/53816/54017 |
| "FAT16   " OEM string compare | _strnicmp @38048 |
| FAT12/16/32 type strings | 9860-9863, 27904-27907, 34341-34345, 7802 |
| EOC family masks (0x0FFFFFF8/0x0FFFFFF0/28-bit) | 8035-8060 |
| Deleted 0xE5 (=-0x1b) × 6 sites + 64KB guard | 11742…32155 |
| LFN 0x40 flag checks | 11442, 28446, 33978, 44355 |
| Fat32CalcPartition class | 5595-5844 |

## 7. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Sibling deep-dives: `ntfs-engine--deep-dive.md`, `rawsearch-carving--deep-dive.md`
- Identity/census: `artifacts/per-binary/FATSearchDLL.md`
- RawFixer FAT repair feeding this engine: `artifacts/PartitionRecovery/rawfixer-fs-repair.md`
- FATAnalyser.mo (detection layer): `artifacts/PartitionRecovery/mo-module-map.md`
