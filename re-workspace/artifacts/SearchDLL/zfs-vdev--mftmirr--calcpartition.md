# ZFS vdev parser, NTFS $MFTMirr resilience, and the CalcPartition family

> Three follow-up decodes from the core wave. Corpora: `ghidra-searchdll/
> ZfsSearchDLL_decompiled.c` (21040-21140), `ghidra-mo/NTFSLib_decompiled.c`
> (17310-17430, source `i:\_drw_main\partitionrecovery\legacy_mod\mod.ntfslib\
> ntfsmft.cpp`), `ghidra-searchdll/exFATSearchDLL_decompiled.c`. [CODE] throughout.

## 1. ZFS vdev/nvlist parser (FUN at 21040) [CODE]

The engine hand-rolls the ZFS **nvlist** format to reach vdev geometry:

```
buf = device.read(offset = 0x1C000, size = 0x4000)      # label nvlist region
entries = nvlist_parse(buf + 4, limit 0x1BFFC)          # FUN_180018730:
                                                          # 0x40-byte entries {name, type, value}
for e in entries:
    if e.type == 9 /* NVLIST */ and e.name == "vdev_tree":
        children = nvlist_parse(e.value)                # recursion into the vdev tree
        for c in children:
            if c.type == 2 /* UINT64_ARRAY/SCALAR */ and c.name ~ "id"/asize-family:
                value = 0
                for byte in c.value: value = value << 8 | byte   # BIG-ENDIAN accumulate
```

- The label read at **0x1C000** with 0x4000 length matches the ZFS vdev label layout
  (4 KB Vdev Uberblock section… followed by the nvlist region at label+16 KB) [CODE;
  layout-name mapping INFERRED from the offset].
- The **type-9 recursion into "vdev_tree"** + **type-2 big-endian uint64** reads
  cover the `id`/`asize`/`ashift` geometry the engine needs to translate metaslab
  offsets into device LBAs (feeding `zfs_struct::ZfsDataRunlist`).
- nvlist entries are heap-vector'd (0x40 stride) and freed via the sentinel-walk
  pattern (checked MSVC `_invalid_parameter` guards on free).

## 2. NTFS $MFTMirr resilience chain (NTFSLib `InitMFTMirror`, ntfsmft.cpp) [CODE]

```
mirror_sector = clusters_per_record(+0x24) * mft_start(+0x18/+0x10) + volume_base(+0x38)
if override != -1: mirror_sector = override
if __InitMftRunList(this, mirror_sector * factor) == 0:
    log "InitMFTMirror::call __InitMftRunList failed!"
    # ---- ROBUST FALLBACK: parse the mirror's own record ----
    CNtfsMFT mft; InitMFT(mft, volume, 0, -1)
    CNtfsFileRecord rec
    if !ReadFileRecord(mft, RECORD_NUMBER = 1, &rec):       # record 1 IS $MFTMirr
        "InitMFTMirror::call ReadFileRecord failed!" → abort
    walk rec.attributes:
        attr.type == 0x80 ($DATA) and non-resident and unnamed:
            "$MFTMirror::$DATA is resident!" → abort (invalid mirror)
            GetDataRunList(attr) → this->runlist(+0x60)
            break
    if runlist empty: "Cannot get the runlist of $MFTMirror::$DATA!" → abort
mirror_size = (last_run.offset + last_run.length) * factor / sectors
this->+0x70 = mirror_size; this->+0xD8 = 1 (initialized)
```

**Why it matters**: the fixed-location estimate works for healthy volumes; the
fallback reads **MFT record 1** (the $MFTMirr file record) and its **$DATA runlist**
— surviving cases where the mirror was moved (fragmented) or where the boot-sector
geometry hints are wrong. Combined with the engine's $MFT fixup chain this forms
the two-layer MFT-recovery strategy: record 0's own $DATA for the primary, record 1
+ its runlist for the mirror. Error strings carry the source path
(`mod.ntfslib\ntfsmft.cpp` line 0xDA).

## 3. The CalcPartition family — lost-partition scoring engines [CODE + census]

The `*CalcPartition` classes are the per-FS **lost-partition candidate scorers**
(v1 family artifact introduced them; this wave's census shows their weight):

| Class | vftable refs | Engine |
|---|---|---|
| Fat32CalcPartition | 39 | FATSearchDLL |
| ExFatCalcPartition | 54 | exFATSearchDLL |
| (NTFS counterpart rides CNTFSSearchController's partition logic) | — | NTFSSearchDLL |

ExFatCalcPartition's dynamic-cast sites (29883: `__RTDynamicCast(…,
&ExFatCalcPartition::RTTI_Type_Descriptor, …)`) confirm it participates in the
polymorphic partition-candidate pipeline (candidates from the partition search —
`CalcPartition.log` QA forensics showed the file-count scoring in action:
`AdjustPartitionInfoOrder` ranking 15+ overlapping NTFS candidates). The exFAT
scorer's 54 references make it the heaviest single class in its engine — the
heuristic mass for exFAT geometry reconstruction (SPC re-derivation, the same
invariants `ExFATFixer::TryFixFromSectorsPerCluster` repairs) [class roles CODE-anchored
by name/RTTI; detailed scoring walk remains an open item].

## 4. Cross-links

- ZFS uberblock/txg walk: `refs-btrfs-zfs-engine-algorithms-v2.md` §3 ·
  ZfsDataRunlist: `SaveScan/ifileproperties-part3--btrfs-zfs-raw-generic.md` §2
- MFT engine chain: `ntfs-engine-algorithms-v2--deleted-viability.md` (fixup +
  $ATTRIBUTE_LIST + viability) — this file adds the mirror leg
- Partition-search QA ground truth: `config-files/` forensics (CalcPartition.log)
- exFAT geometry repair twin: `PartitionRecovery/rawfixer-v2--method-inventory.md` §4

## 5. Confidence

100% [CODE] for the nvlist type-9/type-2 recursion + BE accumulation + 0x1C000
read, the complete InitMFTMirror fallback chain (record 1 → $DATA runlist), and
the CalcPartition census. ZFS label-layout naming and the exFAT scoring internals
are explicitly marked INFERRED/open.
