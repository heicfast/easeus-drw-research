# NTFS engine algorithms v2 — deleted-record viability scoring, fixup chain, claim filter

> Companion to `SearchDLL/ntfs-engine-internals.md` (class model, MFT acquisition,
> record processing overview). This file walks the ACTUAL ALGORITHM LOOPS decoded this
> session from `re-workspace/reversed/ghidra-searchdll/NTFSSearchDLL_decompiled.c`
> (62,394 lines). All items [CODE] with function addresses; interpretations flagged.

## 1. The deleted-record batch loop — FUN_18001acc0 [CODE]

Signature: `f(controller, record_buffer, record_count, base_record_number)`. This is
the per-batch MFT walker for the DELETED-file phase (the "File Path Lost"/lost-file
feed of the results tree):

```
record_size = device.vt[0x28]()           // from $MFT itself; fallback 0x200
buf_size    = max(0x400, record_size)     // 0x400 min parse capacity
for i in 0 .. record_count:
    if controller.cancel_callback.vt[0x10]() != 0: break     // responsive cancel

    rec = buffer + i*record_size
    if rec.magic != 'FILE' (0x454C4946): continue
    if !fixup_validate(rec, buf_size)     // FUN_180041bb0, §2
       or secondary_check(rec) != 0:      // FUN_180034b20 (corruption signal)
        continue
    if record_in_use(rec):                // FUN_180041970: parsed+0x20 != 0
        continue                          // ← ONLY NOT-IN-USE (deleted) records pass

    rec_num = base_record_number + i
    parse_ctx.build(rec, buf_size, rec_num, device)   // FUN_1800431d0
    if validate(parse_ctx) != 0: continue             // FUN_180043030
    props = build_file_properties(rec_num, parse_ctx,
                                  sectors_per_rec, &aux, 0x200)  // FUN_180006db0
    if props == NULL: continue

    # ---- system-file filter ----
    flags = props.flags (+0x23)            # or virtual getter slot 7
    name  = props.name  (+0x11)            # or virtual getter slot 2
    if (flags & 4) or name == NULL or name[0] == '$':
        props.Release(); continue          # skips $MFT/$MFTMirr/$Bitmap/… metadata

    if (flags & 0x10) == 0:                # not a folder → has data runs
        runs  = props.get_runlist()        # virtual slot 0xF / FUN_180033aa0
        size  = props.size (+0x1b)         # virtual slot 3
        if size >= 0x3FF:                  # only files ≥ 1 KiB get the viability walk
            bitmap = controller.field_+0x40 or +0x48      # $Bitmap objects
            it = runs.begin()              # FUN_1800340b0
            total = 0; intact = 0
            while (cluster = it.current()) != -1:          # FUN_1800341c0 next()
                total += 1
                sector = sectors_per_cluster * cluster
                if bitmap.test(sector)                     # FUN_18002c2e0 (§3)
                   or bitmap.secondary_map.contains(sector): # +0x60 virtual check
                    intact += 1
            if total > 0 and intact == total:
                props.Release()            # ← ALL clusters re-allocated → destroyed
                continue                   #   (content overwritten since deletion)
    # else / fallthrough: ADD to results (LAB_18001afe6) and iterate further
```

**Semantics** [CODE for mechanics; reading INFERRED and consistent with $Bitmap
behavior]: when NTFS deletes a file it frees the file's $Bitmap bits. A deleted MFT
record whose data-run clusters still read as **allocated** in the live $Bitmap means
those clusters were **re-used by other files** — the old content is gone. The engine
destroys such candidates when *every* cluster is re-used (fully gone), keeps
partially-intact ones (offered for recovery), and fast-paths small files (<1 KiB,
often resident data — no cluster validation needed).

The `intact == total → destroy` asymmetry (rather than `intact == 0 → keep`) means
partially-overwritten deleted files still surface in the results — matching the
product's "file possibly damaged but listed" UX (the RAW analyser and preview
validation then grade actual content).

## 2. The fixup validation chain — FUN_180041bb0 [CODE]

```
fixup_validate(rec, size):
    if size < 0x400: return false            # 1 KiB minimum record parse size
    fixoff = get_fixup_offset(rec)           # FUN_180046160 → rec USN array offset
    if (fixoff & 0xFF) == 0: return false    # zero offset = no fixup array = invalid
    ok1 = apply_fixups_a(rec, size)          # FUN_180041a20 — walk sectors
    ok2 = validate_fixups(rec, size)         # FUN_180041370 — USN match per sector
    if ok2 == 0: return false
    if ok1 != 0: reapply(rec, size)          # FUN_180041290 — restore step
    return true
```

The wrapper class around it (`FUN_180041cf0(ctx, rec, size, copy_flag)`) implements
copy-on-wrap semantics: with `copy_flag == 0` the parse aliases the raw buffer;
otherwise it duplicates (`thunk_FUN_18002be40(size)`) so fixup application cannot
corrupt the shared scan buffer [CODE].

## 3. The bitmap test — FUN_18002c2e0 [CODE]

```
test(bitmap, sector_index):
    pos = bitmap.base (+0x50) + sector_index
    if pos >= bitmap.limit (+0x10) or bitmap.buffer (+0x00) == NULL: return false
    return bitmap.buffer[pos >> 3] & (1 << (pos & 7))
```

A plain bit-array with base-offset re-basing (so cluster indices can be relative to
the volume's data zone). The two-bitmap pattern at controller+0x40/+0x48 with the
secondary virtual check at +0x60 mirrors the Quick-scan's
`CNTFSBuildVolumeBitmap` + a secondary claim/special-set consulted for every run
[CODE; set membership semantics INFERRED].

## 4. $ATTRIBUTE_LIST (type 0x20) detection — FUN_1800419e0 [CODE]

```
has_attribute_list(record) = find_attribute(record, 0x20, 0) != NULL
```

This is the detector that gates the fragmented-MFT path (`mftwith0x20.cpp` source
paths, per the earlier artifact) — when a record carries $ATTRIBUTE_LIST, the
attribute walk must chase out-of-record attribute fragments via their runlists
before the file's own data runs can be trusted [CODE — detector; chase mechanics in
the v1 artifact].

## 5. Related loops found (for follow-up)

- `FUN_18002a780` — a second 'FILE'-magic site with a `'0'` suffix check at rec+0x5C
  (BAAD/'FILE0' variant discrimination — the corrupted-record family).
- `FUN_180041a20` fixup apply + `FUN_180041370` USN validate — the two halves of
  the fixup algorithm above.
- The batch loader visible around line 21100 (0x1000-granular reads with
  `device.vt[0x08](device, offset, buf, 0x1000, 0)` and record-size-strided
  `FUN_180041bb0` re-validation across the page) — 4 KiB pages unpacked into
  record-size slots.

## 6. Cross-links

- v1 artifact (class model/quick-vs-complete/IO): `ntfs-engine-internals.md`
- The consumer of the viable records: DRWUI tree builders (`LostDir` naming +
  IFileProperties populate — `SaveScan/ifileproperties-part1--ntfs-fat-exfat.md`)
- $Bitmap loader: `CNTFSBuildVolumeBitmap` in v1 §Quick-vs-Complete
- Family architecture: `searchdll-family--architecture.md`

## 7. Confidence

100% [CODE] for every loop/branch/field-offset quoted (function addresses cited).
Two INFERRED readings flagged inline: (a) the +0x40/+0x48 bitmaps are the volume
$Bitmap pair (vs a claim-map — both consistent with the bit test, the $Bitmap
reading explains the accept/destroy asymmetry), (b) the secondary +0x60 virtual
check's set semantics.
