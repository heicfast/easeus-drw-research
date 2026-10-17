# IFileProperties per-FS walkthrough — Part 1: base interface + NTFS / FAT / exFAT

> Family: SaveScan / results-tree metadata · Binary: DRWUI.exe (2.38M-line decompiled corpus)
> Method: (a) all 11 class vftables dumped from PE `scripts/dump_props_vtables.py` →
> `re-workspace/raw-evidence/props-vtables.txt`; (b) serializer/deserializer/ctor/accessor
> decompilation reads; (c) **field-value census over all 3 shipped .rsf samples (1.99M
> content objects, byte-exact walk)** `scripts/rsf_field_census.py`. Every semantic claim
> below is tagged [CODE] (decompiled), [CENSUS] (value distribution), or [INFERRED].

## 1. The IFileProperties virtual interface (23 slots, +0x00..+0xB0)

All 10 persisted classes share one vtable shape (verified across CNTFS 0x1418944f8,
CFAT 0x141897198, CRAW 0x140f5f528, CExFat 0x141896bb8, CEXT4 0x141896ff8,
CGeneric 0x1418885c0, CRefs 0x1418995a8, CBtrfs 0x141893378, CZfs 0x1418849f8,
HFSPlus 0x141898720) [CODE]:

| Slot | Method (CNTFS impl) | Meaning |
|---|---|---|
| +0x00 | `FUN_140520780` GetShortNameLen | u16 name length |
| +0x08 | `FUN_140520790` SetShortName | heap name copy (strcpy_s) |
| +0x10 | `FUN_140520820` GetShortNamePtr | char* |
| +0x18 | `FUN_140520830` | **get file size** (u64 @+0x1b) [CENSUS: 1..8.28e9] |
| +0x20 | `FUN_140520380` | get int @+0x60 (type-registry ID — feeds Type column) |
| +0x28 | `FUN_1400d6280`/`FUN_1400d6270` | stub (empty) — per-family差异 slot |
| +0x30 | `FUN_140520390` | get int @+0x64 |
| +0x38 | `FUN_140520840` | **get FLAGS u16** (+0x23) |
| +0x40 | `FUN_1405211b0` | **set FLAGS u16** (FPL roots get 0x10) |
| +0x48 | `FUN_140520860` / RAW `FUN_140c413a0` | get display string (RAW: timestamp string @+0x26; others: empty) |
| +0x50 | `FUN_140520850` | get qword @+0x25 — **creation time (FILETIME)** [CENSUS] |
| +0x58 | `FUN_1405208a0` | get qword @+0x2d — **last-write time** [CENSUS] |
| +0x60 | `FUN_1405208b0` | get qword @+0x35 — **last-access time** [CENSUS] |
| +0x68 | `FUN_1405208c0` | get byte @+0x3d |
| +0x70 | `FUN_1405211c0` | set byte @+0x3d (FPL roots get **9**) |
| +0x78 | `FUN_1405208d0` | **GetDataRunList** — NTFS: builds `CResidentNTFSDataRunList` / `CNoneResidentNTFSDataRunList` from raw datarun bytes (nibble-walk inlined); other FS: plain list |
| +0x80 | `FUN_1405209f0` | per-class constant: NTFS **0x2FF**, FAT **0xFF**, RAW **0x1CF** (format/icon ID family) |
| +0x88 | `FUN_140520a00` | get byte @+0x3f |
| +0x90 | `FUN_140520a10` | set byte @+0x3f |
| +0x98 | `FUN_140520d20` | **Serialize** (record writer, called by CFileNodeRS::SaveFileTree) |
| +0xA0 | `FUN_140521190` | **GetType** → record-4 type code (NTFS 0, FAT 1, RAW 3, exFAT 4, HFS+ 5, ReFS 6, Btrfs 7, EXT4 8, Generic 9, ZFS 0xC) [CODE: all 10 literal returns] |
| +0xA8 | `FUN_140520f20` | **Deserialize** (record reader) |
| +0xB0 | `FUN_1400d62a0` | shared dtor-family stub |

The reader factory `FUN_1400d6e50` (switchD_1400d6e9c) dispatches on the persisted u32
type code: `0→FUN_140520600(NTFS ctor, 0x73 B)`, `1→FUN_1405aec10`, `3→FUN_140c40ce0`,
`4→FUN_14058c350`, `5→FUN_1405e3d40 / FUN_1405e46d0(0x40 B system-node variant)`,
`6→FUN_1405f4e00`, `7→FUN_1404f91b0(0xb6 B)`, `8→FUN_1405abbf0`, `9→FUN_140322e30`,
`0xC→FUN_1400d69d0` [CODE].

### 1.1 The SECOND type-code table — FS codes at tree-construction time

`FUN_14063b4e0` ("File Path Lost" root factory) switches on the **scan-device FS code**
(not the record code) — resolving both tables [CODE]:

| FS code | Ctor called | Class |
|---|---|---|
| 0, 1, 2 | FUN_1405aec10 | CFAT (FAT12/16/32 share one class) |
| 3 | FUN_140520600 | CNTFS |
| 6 | FUN_140c40ce0 | CRAW |
| 7 | FUN_14058c350 | CExFat |
| 8 | FUN_1405e3d40 | HFSPlus |
| 9 | FUN_1405abbf0 | CEXT4 |
| 10 | FUN_1405f4e00 | CRefs |
| 0xB | FUN_1404f91b0 | CBtrfs |

Every created FPL root then receives `SetName("File Path Lost")`, `SetFlags(0x10)` and
`set+0x3d(9)` [CODE] — confirming +0x3d carries a **display-section hint** (9 = orphan
section) and FLAGS bit 0x10 = has-children.

## 2. CNTFSFileProperties (type 0) — field-by-field

**In-memory size 0x73 bytes** (ctor FUN_140520600). Serialized by FUN_140520d20, restored
by FUN_140520f20. Ctor initializes: `+0xC=1`, `+0x10=0`, name=NULL/0, everything else 0,
and `memset(+0x11..0x72, 0, 0x62)` [CODE].

| Serialized order | In-memory | Size | Semantics (evidence) |
|---|---|---|---|
| u16 len + bytes | +0x11 ptr, +0x19 u16 | var | **8.3 short name (DOS namespace)** — [CENSUS] 248,727 names on I_ sample; 248,727 NTFS names incl. `umaHFYFH.jpg`, `GTASAsf5.b` — classic 8.3-style |
| qword | +0x1b | 8 | **File size (real bytes)** [CENSUS: 1..8,283,226,112; `Hard Disk Sentinel Pro…` = 37,178,741] |
| u16 | +0x23 | 2 | **FLAGS** (below) |
| qword | +0x25 | 8 | **Creation time FILETIME** [CENSUS: 100% in 1.19e17..1.34e17; e.g. `umaHFYFH.jpg` → 2020-08-27 11:35] |
| qword | +0x2d | 8 | **Last-write time** [CENSUS: same range; ≈ creation for many files] |
| qword | +0x35 | 8 | **Last-access time** [CENSUS: large cluster = 2026-10-15 05:49 — the QA-scan morning; e.g. 134,365,169,729,323,240] |
| byte | +0x3d | 1 | section/deleted-related marker [CENSUS: 0/1; 90.0% = 1; f5=1 ∧ flags.0x20 = 190,899] |
| qword | +0x40 | 8 | **parent-reference / directory anchor** [CENSUS: 6.3M..254.7M, 114,006 distinct for 248,727 records — files of one directory share the value, consecutive ranges] |
| u32 | +0x64 | 4 | secondary ID [CENSUS: 35..199,008,480] |
| u32 | +0x60 | 4 | **type-registry ID → Type column & category grouping** [CENSUS by ext: `.lnk`→1 (410×), `.b`→50 (456×), `.dll`→21 (1,915×), `.jpg`→6/26/3… multiple signature variants, `.mp3`→6 (2,841×); large ids for rare formats (.mkv→155,003)] |
| u32 hasRun | +0x48 ptr | 4/— | datarun present → **DataRunList** `[u32 len][NTFS datarun bytes][u16 flags]` (FUN_14051e3a0) |
| u64 cnt + cnt×16B | +0x50 ptr | var | **extent-pair list** {u64,u64}×cnt — populated for only 4/248,727 records in I_ (max 5 pairs) — the CResidentNTFSDataRunList companion [CODE: FUN_140520d20 loop] |

**FLAGS u16 (+0x23) bit census (I_ sample, 248,727 records):**

| Value | Count | Reading |
|---|---|---|
| 0x0020 | 209,030 | bit 0x20 on 84% — **deleted-file marker** (QA disk carried wholesale deletions) |
| 0x0000 | 25,736 | live files |
| 0x0021 | 13,380 | deleted + bit 0x01 |
| 0x0024 / 0x0026 / 0x0027 / 0x0004 / 0x0002 / 0x0006 | ~560 | deleted + attribute-ish bits (system/hidden/compressed families) |
| 0x0010 | (CGeneric only) | has-children (folder) — carried by type-9 wrapper nodes, rarely by type-0 |

Bit 0x10 = has-children (drives the BFS queue in SaveFileTree); bit 0x20 = deleted;
bit 0x01 = folder-ish/namespace; bits 0x02/0x04 = attribute flags [CENSUS+CODE, bit-level
labels partially INFERRED from correlation].

**Datarun nibble math (from FUN_1405208d0, GetDataRunList):** the walker advances
`pos += (byte & 0xF) + (byte >> 4) + 1` per entry — i.e. header nibbles are
length-size (low) and offset-size (high) of an NTFS datarun entry, terminator 0x00
[CODE — same encoding as the scan engines' runlist model]. Whether the list wraps into
`CResidentNTFSDataRunList` or `CNoneResidentNTFSDataRunList` is decided by a leading
flag word at the runlist object (+0): 0 → non-resident (plain runlist), else resident
(compressed/sparse extent list via FUN_140c4da70 + builder FUN_14051e940) [CODE].

## 3. CFATFileProperties (type 1) — field-by-field

Serializer FUN_1405af360 / reader FUN_1405af510. Same field ORDER as NTFS but the two
trailing ints sit at +0x3E and +0x42, and the runlist pointer at **+0x46 is guarded by a
std::mutex at +0x50** (Mtx_lock around serialization — FAT results arrive from worker
threads concurrently) [CODE].

| Field | Semantics [CENSUS: 39 records, I_] |
|---|---|
| name (u16+bytes @+0x11/+0x19) | 8.3 name, **OEM-codepage bytes** — observed mangled control-byte names (`\x05\x01\x04\x01…`) = recovered deleted dir entries whose first char(s) were 0xE5/0x05-marked |
| qword +0x1b | file size (8,302..131,342) |
| u16 +0x23 FLAGS | values 1..33 (bit 0x20 deleted present) |
| qword +0x25 | creation FILETIME (1.1978e17..1.2496e17 → 2017-2020) |
| qword +0x2d | last-write |
| qword +0x35 | last-access |
| byte +0x3d | 0/1 (39/39 = 1 in sample) |
| u32 +0x3e | 16,580,866..563,552,665 — first-cluster/dir-entry anchor [INFERRED: cluster-size scale] |
| u32 +0x42 | 28,402,093..28,707,673 — **narrow band** = parent-directory/containing-dir anchor (same-dir files share the band) [CENSUS] |
| hasRun + DataRunList | always present (39/39) — FAT chain reconstructed as runlist |

## 4. CExFatFileProperties (type 4) — field-by-field

Serializer FUN_14058c870. exFAT moves the name to **+0x18 ptr / +0x20 u16** (0xF bytes
later than NTFS/FAT) and grows the object to **0xB8** (ctor FUN_14058c350 alloc path);
runlist at +0x60, mutex at +0x68 [CODE].

| Serialized | In-memory | Semantics |
|---|---|---|
| u16 len + bytes | +0x18/+0x20 | UTF-8 name (exFAT long names) |
| qword | +0x28 | file size |
| u16 | +0x30 | FLAGS (same bit family: 0x10 children / 0x20 deleted) |
| qword | +0x34 | creation |
| qword | +0x3C | last-write |
| qword | +0x44 | last-access |
| byte | +0x4C | deleted/section marker |
| u32 | +0x50 | secondary anchor |
| u32 | +0x54 | type-registry ID |
| hasRun + DataRunList | +0x60 | cluster chain (exFAT-style runs, same DataRunList container) |

exFAT records are absent in the 3 shipped samples (all FAT/NTFS/RAW/Generic volumes) —
this walkthrough is [CODE]-only, cross-validated by the family shape of the other 9
classes.

## 5. Consumer map (who reads what)

- **Type column / category tree**: slot +0x20 (int @+0x60) — the type-registry ID
  matching the PriorityDisplayType/filtering layer (see
  `artifacts/config-files/filtering-priority--config-layer.md`).
- **Date Modified column + Date filter buckets** (Today 0x100 / Yesterday 0x101 /
  Last-7-days 0x102 / Last-1-month 0x103 / Custom 0x105 — FUN_140705c50): fed by the
  modified-time getter slot +0x58 [CODE: filter table; column "Date Modified" idx 1 in
  results-table header FUN_140739c10 at 1139925-1139975].
- **Size column + Size filter buckets** (<512KB 0x1000 / 512KB~1MB 0x1001 / 1MB~512MB
  0x1002 / 512MB~1GB 0x1003 / >1GB 0x1004 — FUN_140706060): fed by slot +0x18 (size).
- **Recovery export**: GetDataRunList (+0x78) supplies the byte ranges copied by the
  export thread (ExportThread / `\\.\X:` destination — architecture/04 §export).
- **.rsf persistence**: slots +0x98/+0xA0/+0xA8 (this file's grammars).

## 6. Cross-links

- Container & grammar: `SaveScan/rsf-format--scan-session.md` (§5.4.5 table),
  `SaveScan/rsf-record4--tree-node-grammar.md`
- Engine-side producers: `SearchDLL/ntfs-engine-internals.md`,
  `SearchDLL/fat-exfat-engine-internals.md` (the engines hand these objects' data via
  the tree builders)
- Tree construction (LostDir naming `%s%02d`, FPL root creation):
  DRWUI_decompiled.c lines 1038436-1039320 (FUN_14063a0c0/a6b0/aaa0/ad10/b4e0)
- Part 2 (EXT4/HFS+/ReFS) and Part 3 (Btrfs/ZFS/RAW + Generic) walkthroughs: sibling files
- Raw evidence: `raw-evidence/props-vtables.txt`, census script
  `scripts/rsf_field_census.py`, correlation outputs in scripts dir

## 7. Confidence

100% [CODE] for interface layout, slot assignments, ctor sizes, serialization order
(both directions decompiled). 100% [CENSUS] for size/timestamp/parent-band/type-ID
value behavior over 248,727+39 records. [INFERRED] for: exact business names of
secondary anchors (+0x3e/+0x42 FAT), bit labels 0x01/0x02/0x04, and the +0x3d-vs-0x20
deleted distinction — flagged as such above.
