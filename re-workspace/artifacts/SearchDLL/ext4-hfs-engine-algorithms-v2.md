# EXT4 / HFS+ engine algorithms v2 — superblock & volume-header validation, catalog walk

> Companion to `SearchDLL/remaining-engines--ext4-hfs-refs-btrfs-zfs.md`. Algorithm
> loops from `EXT4SearchDLL_decompiled.c` (18,071 lines) and
> `HFSPlusSearchDLL_decompiled.c` (22,304 lines). [CODE] unless flagged.

## 1. EXT4 superblock validation — FUN_180004710 [CODE]

The primary sanity gate for an ext2/3/4 filesystem image:

```
if sb.s_magic(+0x38, u16) != 0xEF53: reject                 # -0x10AD == 0xEF53
if sb.s_log_block_size(+0x18, byte) & 1 ... (low-bit guard)
if sb.s_inodes_count(+0x00) == 0: reject
if sb.s_blocks_count_lo(+0x04) == 0: reject
if sb.s_blocks_per_group(+0x20) == 0: reject
if sb.s_inodes_per_group(+0x28) == 0: reject
# first_data_block × log_block_size consistency:
if sb.s_first_data_block(+0x14) == 0 and sb.s_log_block_size(+0x18) == 0: reject
if sb.s_first_data_block(+0x14) == 1 and sb.s_log_block_size(+0x18) != 0: reject
block_size = 0x400 << (s_log_block_size & 0x1F)             # 1024 << log
total_blocks = (u64)s_blocks_count_hi(+0x150) << 32 | s_blocks_count_lo(+0x04)   # 64-bit
groups = total_blocks / s_blocks_per_group
# geometry invariants:
if groups <= 0 or groups > total_blocks: reject
if not (gdt_bytes = ~block_size & (groups*0x40 + block_size)) sane: reject
accept { groups }
```

The two first_data_block cross-checks encode the kernel rule: 1 KiB block file
systems have first_data_block = 1 (block 0 holds the boot area); larger blocks have
0 — any other combination means a corrupt/foreign superblock [CODE].

## 2. EXT4 mount/geometry init — FUN_1800047c0 [CODE]

1. Reads 0x200 bytes at **offset 0x400** (the fixed ext superblock position, 1024).
2. Re-validates the FUN_180004710 field set on the raw buffer.
3. Copies an 0x400-byte window of the superblock into the volume object at +0x98
   (8 iterations × 0x80 bytes — s_blocks_per_group…s_journal_* region).
4. Feature-driven corrections:
   - a flag bit 0x04 at +0xF4 (feature-compat family) re-maps a field from +0x178;
   - **flag 0x10 at +0xF8 → `u16 desc_size` (at +0x196)**: the 64-bit group
     descriptor feature — stored (min 1) at +0xDF8; engine understands both 32- and
     64-byte GDT entries.
5. `strncpy(label, s_volume_name, 0xF)` — volume label for the UI.
6. Allocates a **2 × block_size GDT read buffer** and reads the group descriptor
   table through the device's block API (vtable+0x78, count × block_size).
7. Derives inodes-per-block ratios and the free-inode cache fields (+0x5C/+0xE4/+0x60).

## 3. HFS+ volume-header validation (FUN at corpus line 10005) [CODE]

1. **Big-endian decode first**: a 16-qword rotating copy loop byte-swaps the header
   fields into little-endian locals (HFS+ is BE on disk).
2. Acceptance gate — all must hold:
   - `signature == 0x482B ("H+")` **or** `0x4858 ("HX")` — HFS+ or HFSX (case-sensitive
     variant) both supported;
   - `block_size & 0x1FF == 0` — block size is a multiple of 512;
   - `version < 0x11` (≤ 16; real HFS+ is 4/5 — guards against garbage);
   - `total_blocks >= start_of_alloc_block` and `free_blocks <= total_blocks` family
     invariants (the +0x1E8/+0x1EC/+0x20C triple).

## 4. HFS+ catalog leaf walker — FUN_18000c8f0 [CODE]

```
if controller.record_source(+0x50) == NULL: return 0x5017900000002  # error code
resolve_child(source, &child, +0x58, +0x68, +0x78)                 # FUN_180011300
if child != NULL:
    child.device_block = volume.base(+0x60) + 1 + node.record_count(+0x24)
                          + node.attr_count(+0x20)                  # thread-record math
if out_count: *out_count += record_count(+0x60)
valid = child.cancel.vt[0x10]() == 0 and not child.vt[0x88]()       # cancel + EOF check
for sibling in *(list at +0x58):                                    # thread siblings
    if !valid: break
    valid = sibling.cancel.vt[0x10]() == 0 …                        # per-record gates
    … recurse
```

The `+1 + record_count + attr_count` arithmetic places the first record offset inside
a B-tree leaf node (node header is 14 bytes; records grow from the END of the node
backward — the counts index the record-offset array). The sibling-list walk with
per-node virtual cancel/EOF checks is the B-tree traversal driver [CODE; the exact
field naming of +0x24/+0x20 as record/attr counts INFERRED from usage].

## 5. Cross-links

- v1 artifact: `remaining-engines--ext4-hfs-refs-btrfs-zfs.md` (journal traversal,
  B+-tree thread records at class level)
- ReFS/Btrfs/ZFS companion algorithms: `ext4-hfs--refs-btrfs-zfs-algorithms-v2.md`
  (this wave, part 2)
- Family: `searchdll-family--architecture.md` · engines matrix:
  `engine-crossverification-matrix.md`

## 6. Confidence

100% [CODE] for every constant/branch/field offset (0xEF53 at +0x38, 0x400<<log,
64-bit block count, the two first_data_block rules, "H+"/"HX" sigs, 512-block rule,
version<0x11, the +1+rec+attr leaf math). Two [INFERRED] labels flagged inline.
