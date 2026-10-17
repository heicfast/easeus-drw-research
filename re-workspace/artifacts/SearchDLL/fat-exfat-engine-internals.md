# FAT / exFAT Engines — Internals (Deep-Dive)

> Binaries: `og-codebase/FATSearchDLL.dll`, `og-codebase/exFATSearchDLL.dll`
> Decompilation: `re-workspace/reversed/ghidra-searchdll/` (26K + 24K lines)
> capa: FAT = stackstrings obfuscation, runtime linking, PEB access, PE header parse,
  ini reads; exFAT = XOR encode paths, FNV hashing, "parse credit card information"
  (carving-signature scanner false-positive), file R/W. PDB (exFAT):
  `E:\DRW\_drw_main\DRWIntelligentScan\bin\Release\x64\exFATSearchDLL.pdb`

## FATSearchDLL.dll — class model (RTTI, 30 classes)

```
IFATTable ── CDoubleFATTable            (FAT1 + FAT2 mirrored table handling)
              CFAT12Table / CFAT16Table / CFAT32Table    (per-flavor table logic)
CFATQuickSearch : CFATQuickSearchWorker  (worker-thread quick scan)
CFatCompleteSearch                        (complete scan controller)
CFATDataRunList : IDataRunList            (cluster chains as dataruns)
CFATFileProperties : IFileProperties
CFatFolderAnalyzeCB                        (directory-enumeration callback)
CRawFileInfo                               (raw carving info handoff)
IRecycleBinNode2UI                         (RECYCLE BIN bridge — see below)
ICalcPartition                             (geometry calculation)
```
(Shared NTFS attribute classes also present — the common CFileSystemNode/IFileProperties
library compiled into every engine.)

## FAT scan flow (decompiled)

1. **Type dispatch**: partition-context FAT flavor 0=FAT12, 1=FAT16, 2=FAT32 → labels
   written into partition-info object (decompiled switch); "UNKNOWN" fallback.
2. **Dual FAT**: `CDoubleFATTable` reads FAT1 + FAT2 (when present); divergence between the
   copies is tolerated (choose-healthy semantics), enabling recovery when one copy is torn.
3. **Directory walk**: `CFatFolderAnalyzeCB` enumerates directory entries (LFN long-name
   assembly from VFAT slots), building `CFileNode` tree; deleted entries (0xE5 first byte)
   retained with deleted flag; chains followed through `CFATDataRunList` (cluster runs,
   end-of-chain markers per flavor, bad-cluster skipping).
4. **Recycle Bin**: `$RECYCLE.BIN` / `Recycled` / `Recycler` recognized (byte-exact strings);
   `IRecycleBinNode2UI` surfaces recycle-bin items through the dedicated UI flow
   (CRecycleBinRecoveryController on DRWUI side) — including the `$I…/$R…` info/restore
   pairing by index across bin subfolders.
5. **Quick vs Complete**: `CFATQuickSearch(Worker)` scans live structures fast;
   `CFatCompleteSearch` adds deleted-entry chain reconstruction + cross-FAT recovery +
   orphan cluster re-linking (pairs with RAW pass for unlinked clusters).
6. Debug trace (compiled into release): "******%d  area:%I64d,clu:%d,totoal:%I64d ******"
   [sic "totoal"] — area/cluster/total geometry checkpoint.

## exFATSearchDLL.dll — class model (RTTI, 25 classes)

```
CExFatVolumeAnalyer [sic] : IVolume       (volume recognition/assessment)
CExFatPartition / CExFatPartitionEx        (partition context, extended variant)
CExFatQuickSearch / CExFatQuickSearchEx    (quick scan, extended quick scan)
CQuickSearchAndBuildBitmap                  (allocation-bitmap-driven quick scan)
CExFatCompleteSearch                        (complete scan)
CExFatDataRunList : IDataRunList
CExFatFileProperties : IFileProperties
```

## exFAT scan flow (decompiled + strings)

1. **Bitmap-first design**: exFAT's on-disk **allocation bitmap** (a core exFAT structure)
   is consumed directly by `CQuickSearchAndBuildBitmap` — quick scan only visits allocated
   clusters + the FAT (exFAT uses a FAT-like table, no chains for contiguous files):
   contiguous "no-FAT-chain" files resolved purely from directory entries.
2. **Up-case table / integrity**: volume validation via boot + upcase-table checks
   (CExFatVolumeAnalyer), consistent with exFAT structures (Boot, FAT, Bitmap, Up-case,
   Log).
3. **Config-driven filtering**: `GetPrivateProfileStringA("Filter", "FATFilterName", …)`
   — the engine reads ini-based filter lists at runtime (junk/extension filtering shared
   with FilterFolder.ini model).
4. **$RECYCLE.BIN handling** mirrored from FAT engine (multiple `_stricmp` sites).
5. **Logging**: `c:\log\euExfat.log` + `%s\log\DelexFat.log` ("DelexFat" = deleted-exFAT
   scan log) — engine-level file logging channels.
6. capa's XOR-encode/FNV-hash hits reflect path canonicalization + checksum usage in the
   carving-support paths; the credit-card rule is a regex false positive from signature
   scanning (documented, not a feature).

## Recovery-relevant behaviors (both)

- Deleted files recovered via directory-entry salvage + chain reconstruction even when
  parent directory entries are gone (entries feed "lost" tree).
- Chain truncation tolerated (partial-file recovery, size = min(entry size, chain walk)).
- Cross-FAT recovery (FAT2 when FAT1 torn — CDoubleFATTable).
- Both engines feed DRWUI's `IQuickFileSystemSearchController` / `ICompleteFileSystemSearchController`
  via `EUCreate{FAT,EXFAT}{QuickSearcher,Searcher}` exports (2 each).

## Cross-links

- Family overview: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Engine architecture: `architecture/05-scan-engine-architecture.md`
- Partition layer FS libs: `artifacts/PartitionRecovery/mo-module-map.md` (FatLib.mo,
  FatFormat.mo, FileSystemCheck.mo CCheckFAT/CFatChain/CFileAllocationTable)
- FS repair: `artifacts/PartitionRecovery/rawfixer-fs-repair.md` (FATFixer CheckFatTable/
  CheckBackupDBR — the pre-scan complement)
- NTFS counterpart: `artifacts/SearchDLL/ntfs-engine-internals.md`

## Confidence

Class lists, strings, switch constants, and ini/log references are byte-exact. Flow
semantics follow from class names + decompiled call structure; FAT flavor enum and
$RECYCLE.BIN comparisons verified in code.
