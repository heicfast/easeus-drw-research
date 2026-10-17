# 05 — Scan Engine & Tree-Building Architecture (Cross-Linked Deep Map)

> Consolidates: 9 engine decompilations (349K lines), multitool batch (capa/FLOSS/rabin2/RetDec),
> RTTI (6,903 classes), export tables, config parses. All claims carry evidence pointers.

## 1. The DRWIntelligentScan engine library (internal monorepo)

Every FS engine DLL is built from the same solution: `e:\drw\_drw_main\drwintelligentscan\`.
Verified embedded paths (HFS+ engine carries full paths; pattern extrapolates to all):

```
drwintelligentscan\
├─ hfspluslib\            (9 files: volume, btree, btnode, btreeoption, catalog,
│                          extents, attribute, journal, rawfile)   ← full FS impl as a LIBRARY
├─ hfsplussearch\         hfsplusquickfilesystemsearchcontroller.cpp
│                          hfspluscompletefilesystemsearchcontroller.cpp
├─ (ntfssearch\, fatsearch\, exfatsearch\, ext4search\, refsearch\,
│    btrfssearch\, zfssearch\, rawsearch\ — same 2-file pattern per FS)
├─ filerecover\filerecover.cpp          ← recovery core (also in DRWUI)
├─ recoverycontroller\genericrecoverycontroller.cpp
├─ cloudsearch\cloud.cpp
├─ storagedevicemodule\cremotedevice.cpp
├─ uicontroller\eushare\{eushare,fileio,mrxioctl}.cpp
├─ videorepair\ (26 files)
└─ qtdrwui\ (UI pages, statically linked into DRWUI.exe)
```

## 2. Plugin contract (how DRWUI loads engines)

```
HMODULE h = LoadLibraryW("NTFSSearchDLL.dll");            // FUN_14056c0d0 loads all 10
FARPROC  f = GetProcAddress(h, "EUCreateNTFSQuickSearcher");  // or ...Searcher (complete)
ISearcher* p = nullptr; f(&p);                            // factory fills the vptr
```
- Export tables verified: every engine exports exactly `EUCreate<FS>Searcher` +
  `EUCreate<FS>QuickSearcher`; RAWSearchDLL additionally exports `EUGetAnalyserList`,
  `EUGetAnalyserMap`, `EUGetAnalyserMultimap`, `GetRawUserInfoMap`, `EUCreateRAWSearcherForCellTest`.
- FS type codes in DRWUI: **0-2 FAT, 3 NTFS, 4-5 EXT2, 7 exFAT, 8 HFS, 9 EXT4, 10 ReFS,
  13 ZFS** (+Btrfs) → factory-name mapping (FUN_140577d40).
- Interfaces (RTTI both sides): `IFileSystemSearchController`,
  `IQuickFileSystemSearchController`, `ICompleteFileSystemSearchController`,
  `IRawDirectoryTreeBuilder`, plus engine-internal controller classes
  (`C<FS>QuickFileSystemSearchController`, `C<FS>CompleteFileSystemSearchController`).

## 3. Engine controller = tree builder (multiple inheritance — verified vtable layout)

Constructor sequence in HFSPlusSearchDLL (lines ~1240-1254):
```
obj[0]      = ICompleteFileSystemSearchController::vftable   // primary base
obj[0]      = CHFSPlusCompleteFileSystemSearchController::vftable
obj[0x1d]   = IDirecotryTreeBuilder::vftable                 // secondary base [sic — real typo]
obj[0x1d]   = DetourDirectoryTree::vftable                   // most-derived tree impl
```
→ Each engine controller simultaneously IS the directory-tree builder for its results.
`DetourDirectoryTree` wraps/delegates to an inner tree (call sites unwrap `vtable[1]`
before invoking build) — a decorator ("detour") around the plain DirectoryTree that can
intercept node insertion (used to feed progress + dedup + raw/structured merge).

## 4. Quick search flow (CHFSPlusQuickFileSystemSearchController::QuickSearchFiles — decompiled)

1. Open/analyse volume → partition context (`FUN_18000b410`); engine error codes are
   HRESULT-style `0x5002xxxx` (e.g. 0x5002200000004 open-fail, 0x5002c0000004 read-fail).
2. `CPartitionVirtualVolumeDevice` — the volume abstraction; **"Virtual" = works for volumes
   the OS can't see (lost/deleted partitions)** — geometry read from partition context, then
   volume reader `FUN_18000af90(device, 0, totalSectors, ...)`.
3. Attach reader to embedded tree: `tree->vtable[0x18](reader, 0)`.
4. Unwrap DetourDirectoryTree → invoke build (`vtable[9]`).
5. On error: `cout << "Return Error:0x" << hex << "\tFile:" <file> "\tLine:" <line>
   "\tFuction:" [sic] "CHFSPlusQuickFileSystemSearchController::QuickSearchFiles"`.
   (Verbose diag channel compiled into release builds — debug aid for field issues.)

## 5. Per-engine internals (evidence highlights)

| Engine | Verified facts |
|---|---|
| NTFSSearchDLL | `CNTFSSearchController` (0x940-byte object — Ghidra allocation site), MFT record attribute classes, `CNTFSBuildVolumeBitmap` (used-space bitmap for quick scan), IOCTL raw-IO site @0x18002C0BA (capa) |
| FATSearchDLL | stackstrings obfuscation, runtime function linking (capa), PE header parse, ini reads |
| exFATSearchDLL | XOR encode paths, FNV hashing, "parse credit card information" capa hit = carving-signature scanner false-positive note |
| EXT4SearchDLL | RWX alloc + indirect call (JIT-style matching), debug prints |
| HFSPlusSearchDLL | full hfspluslib (B-tree node/catalog/extents/journal implementations, raw file access), Quick+Complete controllers |
| ReFSSearchDLL | OS-version gating, small engine (5 capa rules — much logic shared) |
| BtrfsSearchDLL | ZLIB inflate/deflate (Btrfs zlib compression), RC4 PRGA (encrypted datasets), CRC32+adler32 checksums, XOR |
| ZfsSearchDLL | delay-execution polling, file R/W |
| RAWSearchDLL | 190+ `IRawFileAnalyser` registry; signature maps (JPG: 0xFFD8FFE0/E1/DB/EE std::map nodes); raw_signs.json (139 ext, tinyxml2); exports for analyser enumeration; obfuscated stackstrings |

## 6. RAW carving engine (deep)

- Analyser registry keyed by format; `EUGetAnalyserList/Map/Multimap` let the host enumerate
  all carvers + their capabilities (the UI uses this for "which formats can we carve").
- Signature DB (raw_signs.json): `{ext: {header: [{offset, hex, confidence}...], tail: [...],
  minSize, maxSize}}` — per-format grammars beyond magic bytes (headers at offsets, tail
  signatures for size bounds, size gates).
- RAW search receives a `std::function<string(string,string)>` callback from DRWUI
  (vtable+0x48) used to name/filter carved files at discovery time.
- Carved files feed `IRawDirectoryTreeBuilder` → "Lost" flat views (`LostTreeModel` in UI)
  and are cross-correlated with structured results in the merge phase.

## 7. Results merge & the found-files tree (engine → UI)

1. Engine tree builders produce nodes: path chain, name, size, timestamps, attributes,
   deletion state, extents/datarun (for recovery IO).
2. DRWUI `CDirectoryTreeManager` ingests engine trees; `CBtrfsQuickTreeBuilder` special-case
   (Btrfs subvolume-aware tree), `IRawDirectoryTreeBuilder` for carved items.
3. Merge: structured nodes win; carved nodes attach as "Lost"/"Other deleted files"
   (`LostTreeModel`/`LostTableModel`).
4. Classification pass (`CSetClassifyThread`): FileFilter.xml — 8 top categories
   (Graphics 213 ext, Video 76, Audio 62, Document 302, Email 25, Web&Others 12,
   Archive 59, Folders) = 1,489 extensions; EUUserData gives MIME/magic typing.
5. Validation (`CCheckNodeThread`, `SearchDataSource::OnCheckNode`): per-node recoverability
   (extents readable through volume IO).
6. Filtering (`CSetFilterThread` + `CAdvanceFileFilterMgr`): advanced filter UI
   (extension/size/date), junk suppression via FilterFolder.ini rules.
7. Sorting (`CSortNodeThread`), selection (`CSelNodeThread`), icons/thumbs
   (`CGetListThumbnailThread`).

## 8. Volume IO layers (who reads the disk)

```
Engine tree reader
  └─ CPartitionVirtualVolumeDevice (works on lost partitions)
       ├─ normal file API when volume is mounted & healthy
       ├─ raw IOCTL path → EPMNtDrv (\\.\EPRDTDRV\<d>\<p>) — MDL async sector IO, 512B sectors
       ├─ BitLocker: FVE keys (DRWService pipe) → XTS-AES decrypt (BitLockerLib/OpenSSL)
       └─ NAS: EuMrx redirector letter (X:\EuShare.com\... → \\127.0.0.1 tunnel)
```

## 9. Cross-links

- Full workflow: `architecture/04-recovery-workflow.md`
- Engine family artifact: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Driver IO contract: `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- FS repair before scan: `artifacts/PartitionRecovery/rawfixer-fs-repair.md`
- Category/filter data: `artifacts/config-files/config-data-reference.md`
- UI classes: `artifacts/DRWUI-exe--main-ui-architecture.md`
- Raw evidence: `re-workspace/reversed/ghidra-searchdll/`, `ci-multitool/searchdll/`

## 10. Verification ledger

| Claim | Evidence |
|---|---|
| Engine source tree + Quick/Complete per FS | embedded paths in HFSPlusSearchDLL |
| Controller=tree-builder multiple inheritance | constructor vtable sequence (decompiled) |
| Virtual volume device for lost partitions | vtable name + flow in QuickSearchFiles |
| Engine error code format | literal constants in decompiled error paths |
| RAW analyser registry + exports | export table + registry init code |
| Signature DB semantics | raw_signs.json parsed + tinyxml2 strings in engine |
| Classification counts | FileFilter.xml machine-parsed (1489 ext, 8 cats) |
