# NTFSSearchDLL — Deep Dive: The NTFS Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` (family/contract level) and
> `per-binary/NTFSSearchDLL.md` (identity/census level). This document is the
> **algorithm-level walkthrough** — every claim cites decompiled code from
> `re-workspace/reversed/ghidra-searchdll/NTFSSearchDLL_decompiled.c` (1,931 functions /
> 62,394 lines).

**Binary**: `og-codebase/NTFSSearchDLL.dll` (577,256 B, x64), PDB family
`E:\DRW\_drw_main\DRWIntelligentScan\bin\Release\x64`
**Exports**: `EUCreateNTFSSearcher`, `EUCreateNTFSQuickSearcher` (the only two)
**RTTI class family (27)**: CNTFSSearchController, CNTFSQuickSearch(Base),
CNTFSBuildVolumeBitmap, CNTFSFileRecordAttribute, CNTFSFileRecordDataRunsAttribute,
CNTFSFileRecordFileNameAttribute, CResidentNTFSDataRunList, CNoneResidentNTFSDataRunList,
CNTFSFileProperties, CMFTInfo (shared_ptr-managed), CSearchedNTFSPartitionInfo,
CFileNode, CFileSystemNode, CStorageDeviceWithCache, IStorageDevice, plus the
interface family IFileSystemSearchController / IQuickFileSystemSearchController /
ICompleteFileSystemSearchController / IBuildVolumeBitmap / IDataRunList / IFileProperties.

## 1. Object construction (factory exports — decompiled)

### EUCreateNTFSSearcher (complete/advanced scan)
```c
puVar1 = operator new(0x940);          // CNTFSSearchController = 2,368 bytes
FUN_180007ba0(puVar1);                 // constructor:
//   obj[0]      = ICompleteFileSystemSearchController::vftable   (primary base)
//   obj[0]      = CNTFSSearchController::vftable                (most-derived primary)
//   obj[0x37]   = IBuildVolumeBitmap::vftable                   (secondary base)
//   obj[0x38]   = CNTFSBuildVolumeBitmap::vftable               (most-derived secondary)
//   creates two 0x10-byte heap helper objects (FUN_180012c00, FUN_1800131d0 factories)
//     stored at obj[0x1a]/obj[0x1b] — the MFT-stream + record-cache helpers
*param_1 = puVar1;                     // interface pointer out
```
The dual-vtable at `+0x37/+0x38` (qword indices) proves **CNTFSSearchController multiply
inherits the volume-bitmap builder** — the controller IS the bitmap builder (matches the
family doc's "controller = tree builder + bitmap builder" pattern).

### EUCreateNTFSQuickSearcher
`FUN_1800014a0()` — the CNTFSQuickSearch factory (separate, leaner object; base class
CNTFSQuickSearchBase with the deleted-file fast pass, see §5).

## 2. $MFT bootstrap — from boot sector to MFT stream (FUN_18001a3c0)

1. Reads the first MFT record region into a **64 KB buffer** (`aiStack_10038` = 16,388 dwords).
2. Validates the record: `fixup = FUN_180041bb0(buffer, recSize * param_2)` — **USA/fixup
   application** (the update-sequence-array check-and-replace that makes sector-torn records
   readable; `FUN_180041bb0` is called at every record boundary in the walk too).
3. `FUN_1800411d0(buffer)` — MFT record header sanity (magic `0x454c4946` = "FILE",
   flags, sequence).
4. **Attribute-list fork**: `FUN_180041850(buffer, 0x20, 0)` probes for attribute type
   **0x20 = $ATTRIBUTE_LIST**:
   - present → logs `"MFT file record has 0x20 attribute, MFT start sector is %I64d"` and
     enters `FUN_18001a540` — the **fragmented-MFT handler** ($MFT so fragmented its
     attribute list lives in separate records; the walker follows the attribute list to
     reassemble the $DATA runs across MFT records). This is exactly the path taken on
     heavily-fragmented, long-lived volumes — a hallmark "difficult disk" case DRW handles.
   - absent → `FUN_180041cf0` parses the $DATA runlist of MFT record 0 into a
     CDataRunList (FUN_180041c50 validates, FUN_180007550 installs it as the MFT stream).

## 3. The MFT walk (record enumeration — FUN at 21120)

Per record (record size from volume context, clamped to **≥ 0x400 = 1024 bytes**, the NTFS default):

```
for each record buffer r (record # = index + base):
  1. r->magic == 0x454c4946 ("FILE")                       // line 21152
  2. FUN_180041bb0(r, size) != 0                           // fixup valid
  3. FUN_180034b20(r, size) == 0                           // not a "bad" record
  4. FUN_180041970(r) == 0                                 // header checks pass
  5. FUN_1800431d0(&props, r, size, record#, volCtx)       // build CNTFSFileProperties
  6. FUN_180006db0(record#, props, cluster*recsize, &out, 0x200)
       → resolves the file into the result tree (0x200 = sector size assumption)
  7. Filters:
       props->flags & 4          → skip  (line 21170: temp/system flag)
       props->name == NULL       → skip
       props->name[0] == '$'     → skip  (NTFS metafiles: $MFT, $Bitmap, $UsnJrnl …)
  8. DELETED-FILE BRANCH:  (props->flags & 0x10) == 0      // line 21186
       // NTFS in-use flag (0x1 in FILE record flags byte maps to props bit 4)
       // NOT in use = deleted record → this is what makes NTFS recovery possible:
       // the MFT record survives deletion until reuse.
       → validate data runs against the volume bitmap (see §4)
```

The same file-id → properties machinery feeds `CFileNode`/`CFileSystemNode` tree nodes, with
reference-counted property objects (`_Ref_count_base` RTTI; `LOCK()/UNLOCK()` interlocked
AddRef/Release at 21170-21205 — the engine is **thread-safe for the UI's async workers**).

## 4. Deleted-file recovery-quality scoring (bitmap cross-check)

For every deleted file the walker iterates its **data runs** (FUN_1800340b0 runlist iterator)
and for each run:
```
sector = cluster * sectorsPerCluster            // run start (absolute)
hit    = bitmap->Test(sector)                    // FUN_18002c2e0 on the CNTFSBuildVolumeBitmap
       || cachedNodeLookup(sector)               // plVar13 = bitmap->+0xc … vtable+0x20 query
if (hit) readableRuns++                          // iVar20 counter, iVar21 = total runs
```
This yields the per-file **readable-extent ratio** that the UI later surfaces as recovery
chances/quality — the engine decides *at scan time* whether a deleted file's clusters have
been overwritten (bitmap says allocated-to-someone-else) or are still pristine.

## 5. Quick scan vs Complete scan

| | CNTFSQuickSearch(Base) | CNTFSSearchController |
|---|---|---|
| Entry | `EUCreateNTFSQuickSearcher` | `EUCreateNTFSSearcher` |
| Size | leaner object | 0x940 bytes (2,368 B) |
| Strategy | direct $MFT record enumeration including deleted records (fixup-aware), reconstructs paths from parent-reference chains | full walk + **$Bitmap volume bitmap build** (IBuildVolumeBitmap secondary vftable) + USN journal cross-check (`$UsnJrnl` strcmp sites at 9070/19761/19868/20282) + orphaned-record sweep + attribute-stream assembly |
| Config gate | `GetPrivateProfileIntW(L"search", L"fastsearch", 1, ini)` — **defaults ON** (line 7163) | full semantics |
| Deleted path support | CResidentNTFSDataRunList (resident $DATA) + CNoneResidentNTFSDataRunList (non-resident runs) | same + deep cross-validation |

`$MFTMirr` (52032/52102 sites): the controller cross-references the MFT mirror — the
**first 4 MFT records' backup at volume mid-point** — as a repair/verification source when
primary records fail fixup (classic NTFS resilience, exploited deliberately).

## 6. Attribute parsing layer (RTTI-mapped, constants verified in code)

- **0x20 $ATTRIBUTE_LIST** — fragmented-record reassembly (§2).
- **0x30 $FILE_NAME** — parsed by `CNTFSFileRecordFileNameAttribute` (type checks at
  52190/53409); parent-reference + namespace + filename + times.
- **0x40 / 0x80** — $OBJECT_ID / **$DATA** (checks at 51006/54487); $DATA splits into
  `CNTFSFileRecordDataRunsAttribute` (non-resident) vs resident payload; 0x80-resident data
  length checks (`param_1+0x80` clamp to ≤ 0xFFF at 450-474 region = resident data cap logic).
- `CNTFSFileProperties` serialization (FUN_180003440 — the .rsf/tree serializer) writes the
  exact field map: `{+0x19 u16, +0x11 str, +0x1b u64, +0x23 u16, +0x25 u64, +0x2d u64,
  +0x35 u64, +0x3d u8, +0x40 u64, +0x64 u32, +0x60 u32, +0x48 hexrunlist, +0x50 runlist-map}`
  — i.e. properties = {flags, name, size, times, attributes, runlist-in-hex} — matching what
  the .rsf record-4 payload stores per file (see SaveScan artifact §5).

## 7. NTFS DataRun decoding (hex runlist form)

FUN_180003440's runlist-length walk (lines 2378-2384):
```c
len = 0;
do { len += (run[i] >> 4) + 1 + (run[i] & 0xF); }   // header nibbles: size-of-length,
   while (run[len] != 0);                            // size-of-offset → advance
```
The classic NTFS runlist header: **high nibble = length-field width, low nibble =
offset-field width**. The engine keeps runlists in this hex text form across
serialization (CNoneResidentNTFSDataRunList ↔ hex parse in DRWUI's FUN_1405f5150 — the
same model on the UI side, proving the shared "hex datarun" interface between engine and UI).

## 8. Raw-IO integration

- capa: "interact with driver via IOCTL" — the volume reads go through the device
  abstraction (CStorageDeviceWithCache → IStorageDevice), which for damaged/locked volumes
  is the `\\.\EPRDTDRV\{d}\{p}` EPMNtDrv path (driver artifact), for healthy volumes the
  normal file API, with a **read cache** (CStorageDeviceWithCache) in front to survive
  MFT re-reads economically.
- MFT reads are **cluster-strided** (uVar9 = recordSize * param_3 region math at 21142) —
  the engine reads MFT in aligned blocks, not per-record.

## 9. Error handling & diagnostics

- HRESULT-style engine errors `0x5002xxxx` (family convention; the NTFS variant surfaces
  open-fail 0x50020000x0004-class codes through the same controller plumbing as HFS+ —
  see family doc §4 flow).
- `LogInfo`/cout diagnostics with `"Return Error:0x%x File:%s Line:%d Fuction:%s"` shape.
- Fixup failure → record skipped (never aborts the whole walk — a recovery product
  maximizes salvage over purity).

## 10. Verification ledger

| Claim | Evidence (NTFSSearchDLL_decompiled.c) |
|---|---|
| 0x940-byte CNTFSSearchController + dual vftable (IBuildVolumeBitmap at +0x37) | EUCreateNTFSSearcher (line 39) + ctor FUN_180007ba0 (5928-5995) |
| "FILE" magic 0x454c4946 | lines 21152, 34153, 34159, 55194 |
| Fixup validation per record | FUN_180041bb0 call sites (21156, 20747, …) |
| $-prefixed metafile filter | line 21170 region (`*pcVar15 == '$'`) |
| In-use flag bit 4 → deleted branch | line 21186 (`(uVar7 & 0x10) == 0`) |
| Bitmap cross-check of data runs | FUN_18002c2e0 + plVar17(+0x40/+0x48 bitmap) walk at 21196-21215 |
| $ATTRIBUTE_LIST (0x20) fragmented-MFT handler + log string | FUN_18001a3c0 (20700-20760) + FUN_18001a540 |
| $MFTMirr cross-reference | lines 52032/52102 |
| $UsnJrnl cross-check | strcmp sites 9070/19761/19868/20282 |
| fastsearch config default ON | GetPrivateProfileIntW(L"search",L"fastsearch",1,…) line 7163 |
| Attribute types 0x20/0x30/0x40/0x80 | lines 51006/52190/53409/54487 |
| Runlist header nibble math | FUN_180003440 (2378-2384) |
| Properties field map (serializer) | FUN_180003440 (2339-2430) |
| Record-size clamp ≥ 0x400 | line 21138 region |
| Thread-safe refcounting | LOCK()/UNLOCK() interlocked sections (21190-21210) |

## 11. Cross-links

- Family contract & sibling engines: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Identity/census: `artifacts/per-binary/NTFSSearchDLL.md`
- Consumer: DRWUI FS-code 3 → EUCreateNTFSQuickSearcher (FUN_140577d40), complete-scan set
  (FUN_140580720): `artifacts/DRWUI-exe--main-ui-architecture.md` §9.2
- Raw sector IO under damaged volumes: `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- Pre-scan NTFS repair (DBR/MFT fixers feeding this engine): `artifacts/PartitionRecovery/rawfixer-fs-repair.md`
- Session persistence of results: `artifacts/SaveScan/rsf-format--scan-session.md`
- UI-side tree classes: `artifacts/DRWUI-exe--main-ui-architecture.md` §3.4
