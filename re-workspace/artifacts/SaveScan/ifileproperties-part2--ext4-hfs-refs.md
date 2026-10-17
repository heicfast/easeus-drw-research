# IFileProperties per-FS walkthrough — Part 2: EXT4 / HFS+ / ReFS

> Family: SaveScan · Binary: DRWUI.exe. Method identical to Part 1 (vtable + serializer +
> deserializer decompilation). These three classes are absent from the 3 shipped .rsf
> samples (no EXT4/HFS+/ReFS volumes were scanned by the vendor QA), so this part is
> 100% [CODE] — every field below is read directly from the decompiled
> serialize/deserialize pairs, no value-statistical inference.

## 1. CEXT4FileProperties (type 8)

Serializer `FUN_1405ac360`, reader `FUN_1405ac4d0`, ctor `FUN_1405abbf0`,
vftable 0x141896ff8. Allocation via reader factory case 8.

### In-memory layout & serialized grammar

| Serialized | In-memory | Size | Semantics |
|---|---|---|---|
| u16 len + bytes | std::string: ptr@+0x11, **len@+0x21**, cap@+0x29 (SSO: heap only when len > 0xF) | var | **file name** (UTF-8; the serializer reads `if (0xf < *(u64*)(this+0x29)) ptr = *this` — classic MSVC std::string SSO) |
| qword | +0x31 | 8 | file size |
| u16 | +0x39 | 2 | **FLAGS** (same bit family: 0x10 has-children, 0x20 deleted) |
| qword | +0x3B | 8 | creation time (FILETIME) |
| qword | +0x43 | 8 | last-write time |
| qword | +0x4B | 8 | last-access time |
| byte | +0x53 | 1 | deleted/section marker |
| qword | +0x55 | 8 | inode/parent anchor (secondary id) |
| u32 hasRun → DataRunList | +0x5D ptr | 4/— | extent runlist — `[u32 len][datarun bytes][u16 flags]` (shared FUN_14051e3a0) |

Reader `FUN_1405ac4d0` mirrors the order (u16 len → heap alloc `len+1` → read →
NUL-terminate at `[len]`), then the 8/2/8/8/8/1/8 fields, then the hasRun/DataRunList
pair [CODE].

## 2. HFSPlusFileProperties family (type 5) — the polymorphic pair

Record code 5 selects **two classes** by the tree-node's marker bit (reader factory
`FUN_1400d6e50` case 5): marker 0 → `HFSPlusFileProperties` (ctor FUN_1405e3d40),
marker 1 → `HFSPlusSystemNodeProperties` (alloc 0x40, ctor FUN_1405e46d0)
[CODE — the only persisted code with a class pair].

### 2.1 HFSPlusFileProperties — serializer `FUN_1405e4180`

| Serialized | Source | Semantics |
|---|---|---|
| u32 len + bytes | **virtual getter** `(**(code**)*this)()` then `FUN_140056170(this+4)` | file name — stored as a dedicated string object at +0x4 (wide/Unicode family; length fetched virtually first) |
| qword | +0x8 | file size (logical) |
| u16 | +0x9 | FLAGS |
| qword | +0x4C | creation time |
| qword | +0x54 | last-write time |
| qword | +0x5C | last-access time |
| u16 | +0xE | mode/flags secondary |
| u32 | +0x74 | type id |
| byte | +0xF | deleted/section marker |
| **u32 count + count×16 B** | std::list built from a **std::map (red-black tree)** of extents | **HFS+ fork extents**: each 16-byte record = {u64, u64} (start/length pair family) |

The extent serialization is the most intricate of all classes [CODE]:
1. An allocation `FUN_1405e4ea0()` creates a sentinel std::list node (`_Memory`).
2. If the object's extent map (at `this[0xD]` = +0x68) is non-null, a `FUN_14051e000()`
   factory creates the map iterator context; `FUN_14051d2b0` = `begin()`.
3. Loop guard `local_48 == 0xAAAAAAAAAAAAAA9` → `std::_Xlength_error("list<T> too long")`
   (MSVC list-push overflow guard — evidence the container is `std::list`).
4. Each iteration: `FUN_14051d3b0` = `end()` test; the tree descend is visible
   (`puVar5[8]+1`, `(size-1U & uVar7>>1)*8`, `&1)*8` — red-black tree rebalance walk)
   → `FUN_14007d6f0` extracts the map node's value → appended to the list.
5. Written as `[u32 count][count × 16 B]` — 16 B per extent via writer call
   `(puVar5[2], 0x10)`.
6. The temporary list is then unlinked and freed node-by-node (exception-safe cleanup).

### 2.2 HFSPlusSystemNodeProperties (marker 1)

Second variant (system-node metadata — catalog file IDs for HFS+ system files),
allocation 0x40, ctor FUN_1405e46d0; shares the type-5 code path [CODE].

### 2.3 Reader `FUN_1405e4460` — the definitive field map

| Serialized | In-memory | Semantics |
|---|---|---|
| u32 len + bytes | → std::string at **+0x20** (via FUN_140053e20 length, FUN_140056880 assign) | file name |
| qword | +0x40 | file size |
| u16 | +0x48 | FLAGS |
| qword | +0x4C | creation |
| qword | +0x54 | last-write |
| qword | +0x5C | last-access |
| u16 | +0x70 | secondary flags |
| u32 | +0x74 | type id |
| byte | +0x78 | deleted/section marker |
| u32 count (<0x1000 guard) + count×16 B | **`HFSPlusFileDataRun`** object (alloc 0x48, own vftable, ctor FUN_14051cfe0) — each 16 B extent appended via **vtable+0x38** (AddExtent) | extent runlist; final object stored at +0x68 via FUN_14051ded0 |

**`HFSPlusFileDataRun`** is a distinct, RTTI-named runlist class (vftable label survives
in the corpus) — HFS+ is the only FS whose IFileProperties persists extents as an
explicit named runlist object rather than the shared DataRunList blob [CODE].

## 3. RefsFileProperties (type 6)

Serializer `FUN_1405f5190`, reader `FUN_1405f52e0`, GetType literal 6
(FUN_1405f52d0), vftable 0x1418995a8. Reader buffers names into a 0x100 stack buffer
(`memset(local_118, 0, 0x100)`) — max serialized name 256 bytes [CODE].

| Serialized | In-memory | Size | Semantics |
|---|---|---|---|
| u16 len + bytes | std::string ptr@+0x53, len@+0x63 (u16 read from +99=0x63), cap@+0x6B (SSO) | var | file name |
| qword | +0x11 | 8 | file size |
| u32 | +0x39 | 4 | **objectId / parent anchor** (u32 — ReFS object IDs; ReFS replaces NTFS file numbers with 16-byte objectIds, persisted as the low dword here) [INFERRED from field position + ReFS semantics] |
| qword | +0x19 | 8 | creation time |
| qword | +0x21 | 8 | last-write time |
| qword | +0x29 | 8 | last-access time |
| byte | +0x3D | 1 | deleted/section marker |
| u32 hasRun → DataRunList | +0x73 ptr | 4/— | extent runlist (shared DataRunList format) |

Note the ReFS field ORDER differs from the NTFS family: the u32 anchor sits between
size and the timestamps (NTFS places ints at the tail). The reader
`FUN_1405f52e0` reads in the same order, with a 256-byte name cap [CODE].

## 4. Family synthesis (Parts 1+2)

Across the six classes decoded so far the **persistent field set is invariant**:
`name, size, FLAGS(u16), created, modified, accessed, marker(byte), anchor(int/qword),
type-id(int)`, plus a runlist/extent container. What varies per FS:
1. **name container**: raw u16-len+bytes (NTFS/FAT), std::string SSO (EXT4/ReFS),
   u32-len+bytes (HFS+ reader), u16-len (ReFS serializer).
2. **runlist container**: shared DataRunList blob (all except HFS+), named
   HFSPlusFileDataRun object with count-capped 16-B extent records (HFS+).
3. **anchor width**: qword (NTFS/EXT4), 2×u32 (FAT), u32 (ReFS).
4. **thread-safety**: FAT/exFAT guard the runlist with std::mutex during serialization;
   NTFS/EXT4/ReFS/HFS+ do not (NTFS instead carries the extra extent-pair list).

## 5. Cross-links

- Part 1 (interface + NTFS/FAT/exFAT): `SaveScan/ifileproperties-part1--ntfs-fat-exfat.md`
- Part 3 (Btrfs/ZFS/RAW/Generic): sibling part-3 file
- HFS+ engine producer: `SearchDLL/remaining-engines--ext4-hfs-refs-btrfs-zfs.md` §HFS+
  (catalog-file B-tree → these objects)
- ReFS MSB metadata layer: same file §ReFS
- Engine factory cross-verification: `SearchDLL/engine-crossverification-matrix.md`
- Raw evidence: `raw-evidence/props-vtables.txt`

## 6. Confidence

100% [CODE] — all three serializer + deserializer pairs decompiled and field orders
read directly; single [INFERRED] item is the ReFS +0x39 objectId semantic (flagged).
