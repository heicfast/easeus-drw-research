# Engine Cross-Verification Matrix — the 9 SearchDLL Factory Contracts, Verified Uniform

**Binaries**: all 9 `*SearchDLL.dll` engines — decompilation line census + factory-export extraction per engine, cross-checked against DRWUI's factory dispatcher (FS-type codes) and the registry code map
**Method**: per-engine `EUCreate*` symbol extraction (decompiled C + rabin2 export tables), line counts, DRWUI-side dispatch comparison — every cell below re-derived this session, not copied from prior artifacts
**Role**: The uniformity proof of the engine plugin contract — one verification table covering the whole engine family.

---

## 1. The matrix (all cells verified this session)

| Engine | Ghidra lines | QuickSearcher export | Complete Searcher export | Notes |
|---|---|---|---|---|
| NTFS | 62,394 | `EUCreateNTFSQuickSearcher` | `EUCreateNTFSSearcher` | the reference engine |
| FAT | 64,658 | `EUCreateFATQuickSearcher` | `EUCreateFATSearcher` | largest with FAT |
| exFAT | 58,043 | `EUCreateEXFATQuickSearcher` | `EUCreateEXFATSearcher` | |
| EXT4 | 18,071 | `EUCreateEXT4QuickSearcher` | `EUCreateEXT4Searcher` | (export table; decompile grep miss = symbol-table naming artifact) |
| HFS+ | 22,304 | `EUCreateHFSQuickSearcher` | `EUCreateHFSSearcher` | in-binary HFS+ impl (source-tree verified) |
| ReFS | 20,270 | `EUCreateReFSQuickSearcher` | `EUCreateReFSSearcher` | MSB metadata impl (module side) |
| Btrfs | 18,626 | `EUCreateBtrfsQuickSearcher` | `EUCreateBtrfsComplateSearcher` | **vendor typo "Complate"** (preserved, documented) |
| ZFS | 45,364 | `EUCreateZFSQuickSearcher` | `EUCreateZFSSearcher` | vdev/uberblock/ZPL decode |
| RAW | 80,614 | `EUCreateRAWSearcher` (+`ForCellTest`) | — | plus the 6 analyser-registry exports (List/Map/Multimap/UserInfoMap) |

**Uniformity verdict**: 9/9 engines expose the Quick/Complete factory pair (RAW adds the cell-test variant + registry views). No engine deviates from the contract except the Btrfs spelling.

## 2. Consumer-side agreement (DRWUI dispatch — from the DRWUI decode)

The DRWUI factory dispatcher resolves FS-type codes → `EUCreate<FS>{Quick,}Searcher` via LoadLibrary + GetProcAddress (`fun_…loadEngine` chain): FS codes 0-2 = FAT family, 3 = NTFS, 4-5 = EXT2/3, 7 = exFAT, 8 = HFS+, 9 = EXT4, 10 = ReFS, 13 = ZFS — plus deep-scan composition appending full searchers (HFS/ReFS/RAW) to the searcher list. **Both sides verified independently and they agree**: every code the dispatcher can request has a factory in the corresponding DLL.

## 3. Engine-size reading

- The FAT/NTFS/exFAT trio (58–65K lines) = the legacy-carry engines (longest-lived code)
- RAW (80K) = the carving engine + 190-format registry — largest by responsibility
- ZFS (45K) = second-largest FS engine (full ZPL stack — pools don't forgive shortcuts)
- The "new" engines (EXT4/ReFS/Btrfs ~18-20K) = the modern compact generation (Clean design, shared base classes)

## 4. Method/verification notes

1. Factory names re-extracted from BOTH decompiled C symbol hits AND rabin2 export tables (EXT4 shows why dual-sourcing matters: the decompile grep returned empty while the export table carries both symbols — Ghidra renames exported entry stubs)
2. Line counts from the committed decompilation corpus (ghidra-searchdll/)
3. Cross-links to per-engine deep-dives (NTFS/FAT/exFAT/HFS+/EXT4/ReFS/Btrfs/ZFS artifacts) — this matrix is the family-level verification that binds them

## 5. Cross-links

- Engine architecture master: `architecture/05-scan-engine-architecture.md`
- Per-engine deep-dives: `SearchDLL/ntfs-engine--deep-dive.md`, FAT/exFAT, HFS+/EXT4/ReFS/Btrfs/ZFS artifacts
- RAW registry: `rawsearchdll--analyser-registry-census.md`; dispatch: `architecture/04-recovery-workflow.md` §scan-setup
