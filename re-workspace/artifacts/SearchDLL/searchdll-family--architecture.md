# The SearchDLL Engine Family — Complete Architecture

**Binaries**: NTFSSearchDLL.dll, FATSearchDLL.dll, exFATSearchDLL.dll, EXT4SearchDLL.dll, HFSPlusSearchDLL.dll, RAWSearchDLL.dll, ReFSSearchDLL.dll, BtrfsSearchDLL.dll, ZfsSearchDLL.dll
**Evidence**: ghidra-decompiled C (349K lines total, re-workspace/reversed/ghidra-searchdll/), RTTI (6903 types), exports, strings, raw_signs.json, EUUserData
**Internal project**: `E:\DRW\_drw_main\DRWIntelligentScan\bin\Release\x64\`

## 1. The Plugin Contract (how DRWUI loads these)

Every engine DLL exports exactly two factory functions (verified in all 9 DLLs):

```c
// Full/deep scan controller (IFileSystemSearchController family)
HRESULT EUCreate<FS>Searcher(ICompleteFileSystemSearchController** out);
// Quick scan controller (IQuickFileSystemSearchController family)
HRESULT EUCreate<FS>QuickSearcher(IQuickFileSystemSearchController** out);
```
Exceptions: RAWSearchDLL adds `EUCreateRAWSearcher`, `EUCreateRAWSearcherForCellTest`, `EUGetAnalyserList`, `EUGetAnalyserMap`, `EUGetAnalyserMultimap`, `GetRawUserInfoMap`. BtrfsSearchDLL exports `EUCreateBtrfsComplateSearcher` (sic "Complate").

DRWUI.exe contains the literal DLL name strings (LoadLibraryW targets) — confirmed for all 9 + a legacy `Ext2SearchDLL.dll` reference (not shipped).

Object sizes from decompiled factory functions:
- CNTFSSearchController: 0x940 bytes (2368) — allocated + constructed in EUCreateNTFSSearcher
- CNTFSQuickSearch: constructed via separate quick-searcher factory

## 2. Shared Interface Hierarchy (RTTI-verified, present across engines)

```
IFileSystemSearchController            (per-FS scan contract)
IQuickFileSystemSearchController       (quick scan contract)
ICompleteFileSystemSearchController   (full scan contract)
IBuildVolumeBitmap                    (which clusters are free/used)
IDataRunList                          (MFT/non-resident run abstraction)
ISpecialRawFileAnalyser / IRawFileAnalyser   (RAWSearchDLL only)
```

## 3. Engine Inventory (class families + function counts from CI decompilation)

| Engine | Funcs | Lines | Key classes (RTTI) | FS on-disk structures parsed |
|---|---|---|---|---|
| NTFS | 1931 | 62,394 | CNTFSSearchController, CNTFSQuickSearch(Base), CNTFSBuildVolumeBitmap, CNTFSFileRecordAttribute, CNTFSFileRecordDataRunsAttribute, CNTFSFileRecordFileNameAttribute, CResidentNTFSDataRunList, CNoneResidentNTFSDataRunList, CMFTInfo, CSearchedNTFSPartitionInfo | $MFT (file records 1KB), $BITMAP, $UsnJrnl, MFTMirr, attributes 0x30/0x80/0xB0 etc. |
| FAT | 1265 | 64,658 | CFATSearchController + FAT dir entry parsers | FAT12/16/32, dir entries, LFN, 2 FAT tables |
| exFAT | 1299 | 58,043 | exFAT controller family | exFAT bitmap, dentries, UP-case table |
| EXT4 | 475 | 18,071 | CEXT4 controller + inode/group-desc parsers | superblock, group descriptors, inode tables, extents, dir entries (htree) |
| HFS+ | 665 | 22,304 | HFS+ controller | B*-tree catalog, extents overflow, allocation file |
| ReFS | 629 | 20,270 | ReFS controller | metadata tables, identity B+ trees |
| Btrfs | 452 | 18,626 | Btrfs controller (DRWUI: CBtrfsQuickTreeBuilder) | superblock @ 0x10000, chunk tree, b-trees, checksums |
| ZFS | 981 | 45,364 | ZFS controller | uberblock, MOS, DMU objects, ZAP |
| RAW | 1921 | 80,614 | CRAWSearchController + 190 per-format analysers | no FS — signature carving |

## 4. The RAW Engine — signature-based carving (deepest engine)

### 4.1 Class taxonomy (RTTI, 190+ analyser classes)
- Base: `IRawFileAnalyser` → `CommonRawAnalyser` → per-format `File<XXX>Analyser`
- Newer-generation namespace `Brance::<XXX>Analyser` (DMG, X3F, OGG, RM_RMVB, MXF, AEP...) — "Brance" = internal branch generation
- `BruteForce::<XXX>Analyser` namespace (JpegAnalyzer, CAsfAnalyser...) — brute-force parsers that walk to EOF
- Every analyser paired with `*RawFileInfo` result object (CRawFileInfo base)
- `CNeedRawMgr` — decides which formats need raw analysis per scan mode
- `CJsonObject` — JSON parser for raw_signs.json
- Embedded tinyxml2 (XMLDocument/XMLElement/XMLNode/...) — parses XML configs
- `CRawFileCellTestStorageDevice`, `IStorageDevice` — device abstraction for testing

### 4.2 Signature maps (decompiled FUN_180002a50 area)
The analyser registry is a std::map<UINT32 signature, handler-node> (red-black tree):
- JPEG: keys 0xFFD8FFE0 (SOI+APP0 JFIF), 0xFFD8FFE1 (SOI+APP1 EXIF), 0xFFD8FFDB (SOI+DQT), 0xFFD8FFEE (SOI+COM) — each mapped to its JpegAnalyzer instance; tree lower_bound searches visible in decompiled loops
- Each map node (offset +0x50) links analyser instance; map insert = std::map::_Insert (FUN_18000acf0/FUN_18000ad50)

### 4.3 Signature data sources (three layers, verified)
1. **raw_signs.json** (139 extensions) — per-ext header/tail hex patterns + confidence + min/max size; loaded via CJsonObject parsing and consumed through EUGetAnalyserMap
2. **EUUserData** (another magic DB: ext → {signs[off,hex], mime}) — libmagic-style
3. **Hardcoded analysers** in C++ (the 190 classes) — format-specific parsers that COMPUTE end-of-file by walking structure (e.g. JPEG marker walk, ZIP central directory, PST node b-tree)

### 4.4 Confidence scoring
raw_signs.json entries carry explicit confidence (e.g. "0,44564456,0.96" for ifo). The engine accumulates header + tail confidences to rank candidate carves (multiple overlapping candidates resolved by score).

## 5. NTFS Engine — the flagship scanner (architecture from decompilation)

CNTFSSearchController layout (constructor at decompiled ~5920):
```
+0x000  vftable (ICompleteFileSystemSearchController)
+0x008..     base members
  - embedded STL maps (std::map) for searched files / file-id -> info
  - std::shared_ptr<CMFTInfo> (_Ref_count_obj<CMFTInfo> visible)
  - embedded CNTFSBuildVolumeBitmap at +0x37/0x38 (dual vftable = multiple inheritance)
  - +0x83: default cluster/sector config = 0x100 (256)
```
Strings confirm MFT parsing details:
- "MFT file record has 0x20 attribute, MFT start sector is %I64d" — locates $MFT via 0x20 ($DATA) attribute of record 0
- "$BITMAP", "$Bitmap", "$MFTMirr", "$UsnJrnl", "LostDir", "fastsearch"/"search" (config keys)

Quick scan vs deep scan (class structure):
- CNTFSQuickSearch(Base): reads $MFT directly, enumerates records including deleted (fixup-aware), reconstructs paths from parent chains — the "deleted files" fast pass
- CNTFSSearchController (complete): adds $Bitmap volume bitmap build (IBuildVolumeBitmap embedded), USN journal cross-check, orphaned record sweep, per-file attribute stream assembly (CResidentNTFSDataRunList / CNoneResidentNTFSDataRunList = resident vs non-resident $DATA runs)

## 6. Scan flow integration (cross-linked with DRWUI classes)
1. User picks a location → `CScanMgr` (IScanMgr) drives `CDoScanPartition` / `CDoScanLostPartition` / `CDoScanDeviceBase` strategies
2. Per partition: quick pass = LoadLibrary(<FS>SearchDLL.dll) → EUCreate<FS>QuickSearcher → run; deep pass ("Advanced Scan") = EUCreate<FS>Searcher
3. Lost partitions: PartitionRecovery.dll (separate engine, .mo modules) finds candidate partitions; each is then scanned by the appropriate FS DLL
4. RAW pass: RAWSearchDLL carves by signatures across unallocated clusters (volume bitmap from FS engine) + free space
5. Results: CSearchedPartitionInfo / per-FS subclasses → DRWUI CDirectoryTreeBuilder / IRawDirectoryTreeBuilder builds the tree; CClassify* controllers build Type view; CAdvanceFileFilterMgr applies FileFilter.xml
6. Session persistence: results serialized to SaveScan\*.rsf (encrypted/obfuscated format, magic 0xEAF4B31B)

## 7. Verification checklist
- [x] All 9 DLLs decompiled (CI, Ghidra 11.3.2) — REPORT.md per batch
- [x] Factory exports cross-checked against DRWUI LoadLibrary strings
- [x] RTTI class families enumerated (re-workspace/rtti_classes.json)
- [x] Signature DBs (raw_signs.json + EUUserData) parsed and linked to engine
- [ ] Per-engine artifact documents (in progress — see artifacts/SearchDLL/)
- [ ] Algorithm deep-dives per engine (decompiled code walkthrough) — next rounds
