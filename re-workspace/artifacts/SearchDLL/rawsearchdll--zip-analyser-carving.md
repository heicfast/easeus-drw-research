# FileZIPAnalyser Deep-Dive — Recovery-Grade ZIP Carving Algorithm

**Binary**: RAWSearchDLL.dll — `FUN_1800176e0` (ZIP analyser main), `FUN_1800176b0` (probe), `FUN_180045690` (per-entry parser)
**Evidence**: Ghidra decompilation lines 18290–18560 (byte-level decode below), registry binding `PK\x03\x04 → FileZIPAnalyser` (+ ISpecialRawFileAnalyser in cluster)
**Role**: The canonical example of how RAWSearchDLL carves container formats whose internal structure permits exact size reconstruction — ZIP is the reference implementation of the "walk-the-index" carving school (vs signature-brute-force).

---

## 1. Entry points — all three ZIP structures accepted

The analyser can begin carving from ANY of the three ZIP structures (first DWORD at candidate offset):

| Magic (LE dword) | ZIP structure | Use as carving anchor |
|---|---|---|
| `0x04034b50` = PK\x03\x04 | Local File Header | accepted with sanity checks: `version_needed ≤ 10` (offset +8, ushort) and extradata/flags field at +0x1a in `[1, 0x102]` |
| `0x02014b50` = PK\x01\x02 | **Central Directory entry** | preferred anchor — index-based walk |
| `0x06054b50` = PK\x05\x06 | End Of Central Directory | accepted (truncated/EOCD-first zips) |

Anything else → `param_2[2] = NULL; return` (no match — the analyser rejects the candidate outright).

The registry binds the chain to `PK\x03\x04` only, but the analyser itself handles all three once invoked — meaning ZIPs whose first surviving structure in the raw stream is a CD entry or the EOCD are still carved.

## 2. The carving loop (FUN_1800176e0)

```
size_estimate_init = sector_size << 7          # 128 sectors (0x200→64KB) — initial guess only
found = read_structure(candidate)
loop:
    if structure == PK0102 (CD entry):  parse entry (FUN_180045690)
    elif structure == PK0304 (LFH):     sanity-check fields; parse entry
    elif structure == PK0506 (EOCD):    parse; continue
    else: break                                  # first non-zip structure ends the archive
    entries.append(name, sizes, offsets)
    candidate += entry_size                       # local_f4 = exact parsed size
```

- **Per-entry parser** (`FUN_180045690`) reads the standard ZIP fixed header (name len at +0x1c, extra len +0x1e, comment len +0x20 for CD entries; compressed/uncompressed sizes, local-header offset) and accumulates exact total size into `local_f0` — the final carve size is computed from the SUM of parsed entries, not guessed.
- Entry names accumulate into a list (local_68/local_a8 vectors, FUN_180007060 = merge) — the analyser returns the complete inner file inventory, which the UI later presents as the archive's contents.

## 3. End-of-archive handling — sector-aligned padding extension

After the walk breaks (first non-ZIP structure):

```c
last = end_of_entries;
aligned = last - (last % sector_size);          # align DOWN to sector boundary
if (read(aligned) != NULL && last_4_bytes_of_sector(aligned) != 0):
    # forward-scan through zero padding:
    while (scan < 0x500001):                    # cap = 5,242,881 bytes ≈ 5.24 MB
        aligned += sector_size
        if read(aligned) == NULL: break
        # stop when a sector's trailing 16 bytes are non-zero:
        if not ( [s-4]==0 && [s-8]==0 && [s-12]==0 && [s-16]==0 ): break
```

**Semantics**: deleted ZIPs on disk leave the archive followed by zero padding (slackspace/pre-allocated area). The analyser extends the carve through that padding — checking the LAST 16 BYTES of each sector (4 dwords) are zero — until it hits real data or the **5.24 MB padding cap**. This produces clean file boundaries instead of files trailing megabytes of zeros.

If only local headers were found (no central directory — index destroyed), the result carries status `0xd` (partial/indexless zip) instead of `0x48` (full carve with CD) — the UI can then present "recoverable but structure incomplete" archives differently.

## 4. Result contract

- `param_2[2]` = carve end pointer (aligned+extended) — NULL on total rejection
- `*(param_2+3) = size` (sum-of-entries, or 0xd marker for indexless)
- Entry list = merged into result via FUN_1800173f0 — consumed by the results-tree builder (ZIP files expand to their inner file list in the DRWUI tree)
- `CRawFileCellTestStorageDevice` special-case: unit-test harness injects synthetic sector size (vtable-identified, `+0xc` field) — pairs with the exported `EUCreateRAWSearcherForCellTest`

## 5. Design-pattern conclusions (generalizable to sibling analysers)

1. **Index-first carving**: wherever a format has an internal index (ZIP CD, RAR, TAR, 7z, CHM ITSF, MKV EBML/Cues, PST), the engine walks the index to reconstruct exact sizes — the `@RawSpeed` archive family (RAR/TAR/SIT/CPT) shares this skeleton.
2. **Brute-force fallback family**: formats without indexes (JPG, MP3 frames, MPEG-TS) use the `@BruteForce` frame-sync scanners instead.
3. **Sector-awareness**: analysers query the storage device's real sector size (vtable slot 5) rather than assuming 512 — correct on 4Kn disks.
4. **Dual validation**: registry magic + internal re-validation (like WPG's `0x677077` re-check) minimizes false positives on damaged media where random data can mimic magics.

## 6. Cross-links

- Registry & magic table: `rawsearchdll--analyser-registry-census.md` (this family)
- JPG signature-map carving (the brute-force school): SearchDLL family artifact
- Consumer (results tree): `architecture/05-uiux-architecture.md`; recovery export: `architecture/04-recovery-workflow.md`
- Repair-side ZIP handling (archive repair is a different product path): `architecture/06-repair-chain.md`, EUArchiveRepair artifacts
