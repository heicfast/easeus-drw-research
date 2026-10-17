# IFileProperties per-FS walkthrough — Part 3: Btrfs / ZFS / RAW / Generic

> Family: SaveScan · Binary: DRWUI.exe. Method as Parts 1-2; CRAW additionally carries
> [CENSUS] evidence from 12,147 carved-file records in the shipped I_ sample.
> **Two corrections to `rsf-format--scan-session.md` §5.4.5 are included (§5 below).**

## 1. CBtrfsFileProerties (type 7) — *(sic: EaseUS's own RTTI typo)*

Serializer `FUN_1404f9850`, reader `FUN_1404f9a20`, ctor `FUN_1404f91b0`
(alloc **0xB6** — largest of the family), vftable 0x141893378.

| Serialized | In-memory | Size | Semantics |
|---|---|---|---|
| u16 len + bytes | +0x53 ptr, +0x75 u16 | var | file name |
| qword | +0x4B | 8 | file size |
| u16 | +0x77 | 2 | FLAGS (0x10 children / 0x20 deleted family) |
| qword | +0x5B | 8 | creation |
| qword | +0x63 | 8 | last-write |
| qword | +0x6B | 8 | last-access |
| byte | +0x73 | 1 | deleted/section marker |
| qword | +0x79 | 8 | inode/parent anchor |
| byte | **+0xB5** | 1 | **RUNLIST-FORMAT SWITCH** (see below) |
| u32 | +0x3B | 4 | secondary id A |
| u32 | +0x3F | 4 | secondary id B |
| qword | +0x81 | 8 | extra qword (Btrfs-specific: generation/transid family) |
| u8 hasRun | +0x9D ptr | 1/— | runlist present |
| (conditional) | see below | — | runlist body |

### The dual runlist encoding — unique to Btrfs [CODE]

```
if (+0xB5 == 0):                        # regular path
    if hasRun: DataRunList blob         # [u32 len][datarun bytes][u16 flags]
else:                                   # alternate path (+0xB5 != 0)
    if (+0xA5 != 0):                    # second buffer present
        u32 (+0xB1)                     # buffer id / capacity
        u32 (+0xAD)                     # byte length
        bytes (+0xA5, len)              # raw inline byte blob
```

The alternate inline blob is the persisted form of **compressed extents**: Btrfs file
extents can be zlib-compressed (the engine carries ZLIB + RC4 — see
`SearchDLL/remaining-engines--ext4-hfs-refs-btrfs-zfs.md`); a compressed stream has no
plain cluster-run representation, so the object stores the raw extent buffer instead of
a runlist. This makes CBtrfs the only class with a conditional SECOND serialization
shape [CODE; compressed-extent motivation INFERRED from engine ZLIB/RC4 findings].

## 2. ZfsFileProperties (type 0xC)

Serializer `FUN_140536430`, reader `FUN_140536570`, vftable 0x1418849f8.

| Serialized | In-memory | Size | Semantics |
|---|---|---|---|
| u64 len + bytes | std::string: ptr@+0x18, len@+0x28, cap@+0x30 (SSO; length masked `& 0xFFFFFFFF` on write) | var | file name |
| qword | +0x38 | 8 | file size |
| u16 | +0x58 | 2 | FLAGS |
| qword | +0x48 | 8 | creation |
| qword | +0x50 | 8 | last-write |
| qword | +0x40 | 8 | last-access (note: ZFS time order +0x48/+0x50/+0x40 differs from the family's usual ascending layout) |
| u16 | +0x5A | 2 | secondary flags |
| u32 hasRun → polymorphic | +0x60 ptr | 4/— | **`zfs_struct::ZfsDataRunlist`** (alloc 0x80, RTTI-named, own vftable) — serialized/deserialized through ITS vtable (+0x18 write / +0x20 read), NOT the shared DataRunList |

The reader constructs `zfs_struct::ZfsDataRunlist` (memset 0x80, ctor FUN_14051cfe0,
slots [9]=0, [10]=0, [0xB..0xF]=0) and replaces any existing object at +0x60
(reference-swap with destroy of the old) [CODE].

**ZFS is the only class whose runlist is polymorphic at the CONTAINER level** (the
shared DataRunList is a blob; HFS+ has a named container; ZFS has a virtual-interface
container) — matching ZFS's raidz/draid indirection where logical→physical mapping
needs its own abstraction [CODE + INFERRED link to engine vdev layer].

## 3. CRAWFileProperties (type 3) — the carved-file record

Serializer `FUN_140c418c0`, reader `FUN_140c40d80`, vftable 0x140f5f528.
12,147 records in the I_ sample — every carved file of the QA disk.

| Serialized | In-memory | Size | Semantics [CENSUS] |
|---|---|---|---|
| u8 len + bytes | +0x12 ptr, +0x11 u8 | var | carved file name (assigned by analyser: `shot0017.jpg`, `trainstation-2.jpg` …) |
| u8 len + bytes | std::string ptr@+0x26, cap@+0x3E, len@+0x83 | var | **formatted timestamp string** — written by `FUN_140c41aa0` via `"%d-%d-%d %d-%d-%d"` (wYear, wMonth, … from a FILETIME arg → SYSTEMTIME). Sample values observed as short strings; the SOURCE FILETIME is not persisted (correction, §5) |
| qword | +0x1A | 8 | **file size** (e.g. shot0017.jpg = 83,104; max 4.29e9) |
| u16 | +0x22 | 2 | FLAGS — **constant 0x0020 for all 12,147 records** (every carved file flagged deleted) |
| byte | +0x25 | 1 | marker (=1 always in sample) |
| u32 | +0x56 | 4 | analyser checksum/validation — range 1..0xFFFFFFFF incl. **0xFFFFFFFF = invalid/unknown marker** (12,030/12,147 nonzero) |
| u8 len + bytes | ptr@+0x5A, cap@+0x72, len@+0x82 | var | second string (usually empty; analyser note family) |
| qword | +0x8C | 8 | header offset / carve anchor A (1,245/12,147 nonzero; 2..1,331,712) |
| qword | +0x94 | 8 | tail offset / carve anchor B (261/12,147 nonzero; 3,273..757,417) |
| u32 | +0xF4 | 4 | boolean (2,431/12,147 = 1) |
| u32 | +0xF8 | 4 | **type-registry ID** (35 for the shot*.jpg carve set — same ID space as NTFS +0x60) |
| DataRunList | +0x84 ptr (**mutex @+0x9C**) | — | runlist serialized WITHOUT a hasRun flag — the reader consumes a runlist unconditionally; carved files always carry ≥1 run (runlen 6..31,797 bytes) |

## 4. CGenericFileProperties (type 9) — the folder wrapper

Serializer `FUN_140323080` (GetType literal 9 at FUN_140323190), reader
`FUN_1403231a0`, vftable 0x1418885c0. 6,959 records in I_ — ALL of them
folder/section nodes.

| Serialized | In-memory | Semantics [CENSUS] |
|---|---|---|
| u32 len + bytes | std::string @+0x18 (len via FUN_140056160, c_str via FUN_140056170) | section name — `NTFS`, `System Volume Information`, `recover`, `NP DATA BACKUP`, `pathan photo`, `New folder`, `Indiaantivirus`, `MPEGAV` … |
| u16 | +0x38 | FLAGS — **constant 0x0010 (has-children)** for all 6,959 |
| u16 | +0x3A | secondary (=0 in all samples) |

CGeneric is the wrapper DRWUI uses when a node needs no FS-specific metadata —
volume-section roots and generic folders in the "Reconstructed" branch. The
"File Path Lost" root factory also builds its per-FS root, then falls back to this
class when the FS is unrecognized [CODE].

## 5. Corrections register (supersedes two §5.4.5 rows)

1. **CRAW `+0x1A` is the file SIZE, not a FILETIME.** §5.4.5 labeled the serialized
   qword "+0x1A FILETIME raw". Census: values 22..4,294,442,994 with .jpg sizes
   (83,104 / 52,519 / 26,432 …) — no FILETIME-range values occur. The FILETIME
   connection is real but one level removed: `FUN_140c41aa0` (adjacent to the
   serializer) formats a FILETIME **argument** into the +0x26 timestamp STRING;
   the raw FILETIME itself is never persisted.
2. **ZFS grammar leads with ONE u64 (name length), not two.** The census script's
   type-0xC branch reads `u64, u64(len), name…` — but both serializer and reader
   write/read exactly `[u64 name_len][name][u64 size][u16 flags]…`. The extra leading
   u64 in the census was never exercised (zero ZFS records in all 3 samples), so the
   byte-exact validation did not cover it. This walkthrough (serializer+reader pair)
   is authoritative.

## 6. Cross-links

- Parts 1 & 2: `SaveScan/ifileproperties-part1--ntfs-fat-exfat.md`,
  `SaveScan/ifileproperties-part2--ext4-hfs-refs.md`
- RAW analysers that produce these records:
  `SearchDLL/raw-analyser-registry.md` + analyser family artifacts
- Btrfs ZLIB/RC4 engine evidence: `SearchDLL/remaining-engines--ext4-hfs-refs-btrfs-zfs.md`
- .rsf container: `SaveScan/rsf-format--scan-session.md` (§5.4.5 table — apply §5
  corrections above)
- Evidence: `raw-evidence/props-vtables.txt`; census `scripts/rsf_field_census.py`

## 7. Confidence

100% [CODE] for all four classes (serializer+reader pairs decompiled; CRAW/Btrfs/ZFS
include unique structural features — dual-encoding switch, polymorphic container,
mutex-guarded runlist — that pin the layouts). CRAW [CENSUS] stats over 12,147 records.
ZFS/Btrfs/CGeneric semantics for empty-string/constant fields verified against the
sample corpus where present.
