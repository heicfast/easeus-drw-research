# FAT/exFAT engine algorithms v2 — table polymorphism, chain walker, dentry triples

> Companion to `SearchDLL/fat-exfat-engine-internals.md`. Algorithm loops decoded this
> session from `FATSearchDLL_decompiled.c` (64,658 lines) and `exFATSearchDLL_decompiled.c`
> (58,043 lines). [CODE] unless flagged.

## 1. IFATTable polymorphism — the chain abstraction [CODE]

The FAT family abstracts the allocation table behind a small interface with two
implementations visible in the corpus:

**FAT12/16 `Next` (FUN_180041c80):**
```
if cluster >= table.cluster_count (+0x1C): return 0            # bounds
entry = *(u16*)(table.entries (+0x20) + cluster*2)             # FAT16 u16 slots
if entry == 0xFFF7: return 0xFFFFFF7                           # bad-cluster → canonical BAD
if entry <  0xFFF8: return entry                               # next cluster
return 0xFFFFFF8                                               # EOC (≥0xFFF8) → canonical EOC
```
The engine normalizes every FAT flavor to a 32-bit space: **BAD = 0xFFFFFF7,
EOC = ≥0xFFFFFF8** — all downstream chain logic tests against these two constants
(FAT32 chain loop uses the raw `0xFFFFFF8` threshold the same way).

**CDoubleFATTable (ctor FUN_180041d00):** composes TWO child IFATTables (fields +8/+0x10)
with cascading Release — the **mirrored-FAT** wrapper (FAT copies #1/#2): when the
primary table's walk hits corruption the mirror is consulted (matching the
"CDouble" name and the dual references; exact fallback switch [INFERRED]).

## 2. The FAT32 chain-follow / directory accumulator (FUN at corpus line 11200) [CODE]

The core loop that materializes a directory's content by following its FAT chain:

```
buf = new byte[entry_capacity(0x13) * 0x82]; memset 0     # entry slots + slack
cluster = start
while cluster < 0xFFFFFF8:                                 # until EOC
    if cancel.vt[0x88](): break
    next = Next32(&cluster)                                # FUN_18000f950; 0 → invalid
    if next == 0: break
    sector = (cluster - 2) * sectors_per_cluster(P+4) + first_data_sector(P+8)
    if device_size < sector: return NULL                   # volume bounds
    if buf_remaining < spc*sectors*next: break             # capacity guard
    device.read(buf + filled, sector, spc * next)          # vt[8], whole run
    range_tree.insert(cluster)                             # red-black tree at P+0x10 —
        # loop/cycle guard: each cluster range inserted once; repeated range → stop
    if cluster == start:
        if buf[0..7] == ".       " && buf[0xA] == ' ' && (attr & 0x10):
            is_dir = true                                  # the "." self-entry signature
    cluster = next
# then the 0x20-byte entries are iterated (see fat-exfat v1 for the LFN glue)
```

Key mechanics [CODE]: cluster→sector translation `(c-2)*SPC + first_data_sector`
(param fields +4/+8), **run batching** (whole FAT run read in one device call),
and the **visited-range red-black tree** — a cycle-breaker so corrupt FAT loops
(a cluster pointing backward) cannot hang the scan. The "."-entry detection
(`0x202020202020202E` + space at +0xA + directory attribute 0x10) anchors the
directory identity.

## 3. exFAT dentry chain validation (FUN at corpus line 1840) [CODE]

exFAT directory entries are 0x20 bytes; the first byte's low 7 bits are the type and
**bit 0x80 is the InUse flag** — a deleted exFAT entry keeps its type with 0x80
cleared. The engine exploits this with `(type - X) & 0x7F` tests:

| Test | Types (live/deleted) | Validation performed |
|---|---|---|
| `(t-3)&0x7F==0` | 0x03 / 0x83 | **volume-label triple**: entry itself, +0x20 must be 0x81 (TX), +0x40 must be 0x82 (label) — the root's opening sequence |
| `(t-5)&0x7F==0` | 0x05 / 0x85 | **allocation-bitmap dentry** → FUN_180002f90(entry+1) checks the bitmap descriptor fields |
| `(t-0x40)&0x7F==0` | 0x40 / 0xC0 | **stream-extension dentry**: reserved fields at +2,+6/+7,+0x10..0x13 must be zero; `u32@+0x14` (first cluster / no-fat-chain) must be 1 or ≥ 0xFFFFFF7 (EOC-family) |
| `(t+0x3F)&0x7F==0` | 0x41 / 0xC1 | **filename dentry** → FUN_180003030(entry+1) validates the UTF-16 name fragment |

The **triple reconstruction** (FUN at line 1912): walks 0x40-strided entries
BACKWARD from the stream dentry (`param_1 - 0x40`), dispatching each type class
into one of three parallel std::list builders (FUN_18000b760), then releases the
lists — rebuilding the {file-dentry → stream-ext → name-fragments} chain that
exFAT spreads across consecutive entries. Deleted chains (0x80 cleared on all
members of the triple) are reconstructed identically [CODE].

## 4. Shared props classes inside the engines [CODE — architectural note]

`FATSearchDLL` contains full `CNTFSFileProperties` vftable references and accessor
code (e.g. FUN_180045850 reads props flags at +0x23, folder bit `>>4&1`, name-length
getter slot 0x28, node match at +0xB). The IFileProperties class family is compiled
into **every engine DLL** (statically linked shared props library), not only into
DRWUI — the engines construct live props objects themselves, and the .rsf
serializers in DRWUI persist what the engines already shaped. This closes the
open question from `SaveScan/ifileproperties-part1` §consumer-map: the
engine→DRWUI handoff is **by object** (same class family both sides), not by field
copies. (The `param_3 == 5` early-true in FUN_180045850 is the HFS+
system-node type-code exemption in the shared match predicate.)

## 5. Cross-links

- v1 artifact (class model, BPB, LFN): `fat-exfat-engine-internals.md`
- Props family (DRWUI-side serializers): `SaveScan/ifileproperties-part1--ntfs-fat-exfat.md`
- The FAT deleted-first-char (0xE5) raw-side signature scan lives in
  **RAWSearchDLL**'s registry builder (2-byte codes 0xE2FF…0xE7FF + `0xFFFF` +
  `"99"` + named `BruteForce::CDXFAnalyser` (0x19), `BruteForce::MovAnalyzer`
  (0x2A), `BruteForce::CADTSAnalyser` (0x2D) at RAW corpus ~line 2660-2760) —
  see `raw-analyser-registry.md` + todo follow-up for the full code table.
- Family architecture: `searchdll-family--architecture.md`

## 6. Confidence

100% [CODE] for the FAT16 Next translation table, CDoubleFATTable composition, the
FAT32 loop math/cycle-tree/"."-detection, the exFAT dentry type classes + field
validations + backward triple walk, and the shared-props finding. [INFERRED]:
CDoubleFATTable's primary/mirror fallback switch semantics.
