# ReFS / Btrfs / ZFS engine algorithms v2 — MSB chain, generation selection, uberblock walk

> Companion to `SearchDLL/remaining-engines--ext4-hfs-refs-btrfs-zfs.md` and to
> `ext4-hfs-engine-algorithms-v2.md` (same wave). Corpus: ReFSSearchDLL (20,270),
> BtrfsSearchDLL (18,626), ZfsSearchDLL (45,364 lines). [CODE] unless flagged.

## 1. ReFS metadata block chain — the `refs::` namespace [CODE]

RTTI names survive: `refs::RefsMetadataBlockHeaderImpl`,
`refs::RefsMetadataBlockReference`, `refs::RefsMetadataBlockRefrenceImpl`
*(vendor typo "Refrence" preserved)*, `refs::RefsBaseDataImpl`,
`refs::RefsBaseDataImplManager<T>` (two template instantiations over the block-ref
and block-header impls). The block-header parser (FUN at corpus line 11670):

```
if size < 0x20: reject
page_type discriminator (param_4):
    1 → signature "SUPBMSB+ReFSFSRS"    # superblock page
    2 → signature "CHKPSUPBMSB+ReFSFSRS" # checkpoint page
    3 → signature "MSB+ReFSFSRS"         # metadata session block
if *(u32*)page != signature_dword: reject
refs::RefsMetadataBlockRefrenceImpl::parse(page + 8, size - 0x20)
if ref.valid:
    header.size(+0x20) += ref.field(+0x30)
    copy {valid, block_id, flags(+0x2C), size(+0x30), next(+0x38)} into the
          RefsBaseDataImplManager-managed reference
    header.valid = 1
```

The three page signatures encode ReFS's metadata layout: **SUPB** (superblock),
**CHKP+SUPB** (checkpointed superblock), **MSB** (metadata session block) followed by
the `ReFSFSRS` filesystem identity — the engine chains them through
`RefsBaseDataImplManager<T>` container objects [CODE].

## 2. Btrfs superblock selection — newest-generation wins (FUN at corpus line 10290) [CODE]

```
for offset in candidate_table DAT_180018d60 (0-terminated):   # primary/mirror offsets
    if dev_size(offset, 0x1000) insufficient: break
    read 0x1000 at offset
    if *(u64*)(buf+0x40) != "_BHRfS_M" (0x4D5F53665248425F): continue
    sectorsize = u32@+0x90; nodesize = u32@+0x94
    if sectorsize == 0 or (sectorsize & (sectorsize-1)) != 0: continue   # pow2
    if nodesize < 0x86 or nodesize > 0x86+0xFF7B: continue               # sane band
    if nodesize % sectorsize != 0: continue
    if best == NULL or best.generation(u64@+0x48) < candidate.generation:
        best = copy(buf)                    # ← NEWEST GENERATION WINS
return best
```

The engine scans every Btrfs superblock mirror (the candidate-offset table) and
keeps the copy with the highest `generation` counter (+0x48) — the standard Btrfs
crash-consistency rule (transaction that committed last) [CODE].

## 3. ZFS uberblock walk — txg-gated backward scan (FUN at corpus line 32300) [CODE]

ZFS labels carry a 128-slot × 1 KiB uberblock array; the engine walks it backward:

```
# copy loop #1 (8×0x80 qwords = 0x400 bytes): stage the uberblock/nvlist window
if staged.magic(u32 @ +0x00) == 0x00BAB10C                    # "cabbage" magic
   and txg(u64 @ staged+0x10) > best_txg:
        memmove the staged 0x400-byte window into place; adopt
else:
    while (p -= 0x80 qwords /* 1024 B = one uberblock slot */):
        if p.magic == 0x00BAB10C and p.txg < staged_txg:      # older txg → stop walking
            copy the 0x400-byte slot forward; continue
```

- The magic test `== 0xBAB10C` is the literal ZFS uberblock magic (0x00BAB10C).
- The **txg (transaction group) comparison** implements newest-transaction-wins —
  the same crash-consistency pattern as Btrfs's generation (§2).
- The 0x80-qword (1 KiB) stride is exactly the on-disk uberblock size; walking
  backward visits newest-first in each label's array [CODE; direction/txg semantics
  INFERRED from the comparison polarity].

## 4. Shared pattern: newest-transaction-wins

All three modern filesystems in the suite gate recovery on **transaction recency**:
ReFS chains CHKP→SUPB→MSB pages, Btrfs selects max(generation) across mirror
superblocks, ZFS selects max(txg) across the 128-slot uberblock arrays. The engines
therefore always reconstruct the last self-consistent transaction, matching each
filesystem's copy-on-write crash model [synthesis of the three CODE sections].

## 5. Cross-links

- v1: `remaining-engines--ext4-hfs-refs-btrfs-zfs.md` (ZFS vdev/ZPL layer, Btrfs
  ZLIB+RC4, ReFS at family level)
- `refs::` class census source: raw-evidence RTTI dumps (rtti_classes.json)
- ZFS engine deeper material (ZfsDataRunlist consumer side):
  `SaveScan/ifileproperties-part3--btrfs-zfs-raw-generic.md` §2
- Family: `searchdll-family--architecture.md`

## 6. Confidence

100% [CODE] for the three page signatures + parse chain, the Btrfs magic/geometry
invariants + generation compare, and the ZFS 0xBAB10C magic + 0x80-qword stride +
txg comparisons. [INFERRED]: ZFS walk-direction semantics (§3) — the comparison
polarity is decoded, the "newest-first per label" ordering rationale is standard ZFS.
