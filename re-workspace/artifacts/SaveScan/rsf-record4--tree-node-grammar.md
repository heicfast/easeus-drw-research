# .rsf Record 4 — Result-Tree Serialization Grammar (per-node format)

> **RECONCILIATION (supersedes the preliminary reading below)**: the writer `FUN_1400d40c0` is
> trace-string-identified as **`CFileNodeRS::SaveFileTree`** (BFS, marker=class selector:
> 0=`CFileNode` 147B / 1=`CFileSystemNode` 0x290B, end-of-children sentinel 0xFFFFFFFF), and the
> full grammar is **byte-exact-validated against all 3 shipped samples** by
> `scripts/rsf_record4_grammar.py` in `rsf-format--scan-session.md` §5.4 (36.0/29.9/226.7 MB,
> 1,986,806 nodes total; roots: 'Local Disk(I:)', 'File Path Lost', 'Reconstructed').
> The IFileProperties content family resolves to 10 per-FS classes (NTFS/FAT/RAW/exFAT/HFS+×2/
> ReFS/Btrfs/EXT4/Generic/Zfs; type 0xB never persisted). The artifact below remains valid as the
> **group-framing + factory + progress companion decode** — its type-code table and datarun
> reading match the validated grammar; treat `rsf-format--scan-session.md` §5.4 as the
> authoritative node-grammar reference.

**Binary**: DRWUI.exe — `FUN_1400d40c0` (group serializer = `CFileNodeRS::SaveFileTree`), `FUN_1400d6fa0` (IFileProperties writer), node factory `switchD_1400d6e9c`, `FUN_1405f5150` (ReFS/NTFS DataRunList deserializer)
**Evidence**: Ghidra decompilation lines 186446–186680, 188930–188999, 992809–992890; builds on `rsf-format--scan-session.md` §5.4 (writer chain + validated parser) and doc-3's record-1/2/3 field schemas
**Role**: Companion decode for the record-4 tree blob — group framing, node-type factory, extent encoding, and progress mapping; the .rsf blob that `Load Scan Session` re-materializes without rescanning.

---

## 1. Two-layer node architecture

Record 4 serializes **two distinct node layers**:

1. **Wrapper (structural) nodes** — the UI results tree: children containers, ordering, inclusion flags. Serialized by `FUN_1400d40c0`'s per-child loop via **wrapper-vtable slot 0x20**.
2. **Data (per-FS) nodes** — the filesystem-specific record for each file/folder (name, size, times, location data). Serialized by `FUN_1400d6fa0` as `[4B type][type-specific body via data-vt+0x98]`.

The wrapper holds its children at `+0x30` (recursion entry) and the data node at `+0x10` (sibling chain `+3`, data object at `+6`). Two source lists are merged (list-merge with `std::_Xlength_error("list<T> too long")` guards — MSVC `std::list` sentinel pattern).

## 2. Group framing grammar (FUN_1400d40c0)

```
group:
  [1 byte ] has_parent flag (param_5)          — written first, verbatim
  if !has_parent (root group):
      [4 bytes] child_count      (param_1[1])
      [4 bytes] base_id          (param_6)
      [4 bytes] cumulative_count (param_7 + child_count)
  else:
      [4 bytes] node_index       (param_7)     — running per-node counter
  [4 bytes] merged_child_count                 — after merge of list1+list2
  repeated merged_child_count times:
      [4 bytes] present_marker = 1             — constant observed
      [   ...  ] wrapper-body via wrapper-vt+0x20
      [   ...  ] group (recursion into child's +0x30 container)
```

**Merge filters** (which children are included):
- list-1 entries: node `+0x10` field (`plVar9[2]`) must be non-NULL
- list-2 entries: additionally `*(node+0x50) != -0x10` (excludes one magic-valued wrapper state)
- recursion-side filter: data-object virtual `+0xa0` **type != 0xB** (type-0xB nodes live in memory but are never serialized)

## 3. Data-node grammar (FUN_1400d6fa0)

```
data_node:
  [4 bytes] node_type   = data-vt slot 0xa0 result (int)
  [   ...  ] body       = data-vt slot 0x98 (node, RSData) — polymorphic
```

The `node_type` int is the SAME type code consumed by the deserialization factory (`switchD_1400d6e9c`, verified cases). **Attribution per the byte-exact-validated table in `rsf-format--scan-session.md` §5.4.5** (my earlier per-case FS guesses are superseded):

| type | class (validated) | factory ctor | alloc |
|---|---|---|---|
| 0 | CNTFSFileProperties | — | — |
| 1 | CFATFileProperties | — | — |
| 3 | CRAWFileProperties | `FUN_140c40ce0` | — |
| 4 | CExFatFileProperties | `FUN_14058c350` | — |
| 5 | HFSPlusFileProperties / HFSPlusSystemNodeProperties (marker pair) | `FUN_1405e3d40` / `FUN_1405e46d0` | 0x40 |
| 6 | RefsFileProperties | `FUN_1405f4e00` → `FUN_1405f4a40` | 0x8B |
| 7 | CBtrfsFileProerties *(vendor typo preserved)* | `FUN_1404f91b0` | 0xB6 |
| 8 | CEXT4FileProperties | `FUN_1405abbf0` | — |
| 9 | CGenericFileProperties | `FUN_140322e30` | — |
| 0xB | runtime-only (never persisted — filtered by writer) | — | — |
| 0xC | ZfsFileProperties | `FUN_1400d69d0` | — |

*(Full per-class field grammars, FLAGS bit-0x10 has-children semantics, runlist sub-format, and the 374K-name statistics: see the validated §5.4.5.)*

## 4. Extent (DataRun) encoding — FUN_1405f5150 (ReFS path, NTFS-shared container)

Location data uses the **NTFS datarun nibble grammar**, parsed by deserializers for both NTFS and ReFS (`CNoneResidentNTFSDataRunList` vftable literally reused for the ReFS node — line 992855):

```
run stream: [header byte][offset bytes (low nibble count)][length bytes (high nibble count)] ...
walk:  total += (b & 0xF) + (b >> 4) + 1     — advance = offset-size + length-size + 1
       until header byte == 0x00 (terminator)
container: *puVar3 == 0 → CNoneResidentNTFSDataRunList (non-resident, run-list form)
           *puVar3 != 0 → CRefsResidentDataRunList (resident alternate form)
```

This is the SAME encoding as on-disk NTFS `$DATA` runs — the .rsf stores runs verbatim (not re-encoded), so the restore path can replay them against the (possibly still-present) volume.

## 5. Progress-bar mapping (CSaveAndRestoreProgressInfo)

During tree serialization the save progress reports:
```
start = 40% (0x28)
percent = 0x28 + (processed * 0x32) / (total * 2)    — climbs 40% → 65% across record 4
```
Emitting `CSaveAndRestoreProgressInfo`/`IUIProgressInfo` vftable-stamped progress objects per node batch — i.e. the UI's save progress bar spends 40% on records 1–3 + 25% on the tree walk + remainder on compression/finalize.

## 6. Verified serialization invariants

1. Node counts are written THREE times at root (child, base, cumulative) but only ONCE (running index) per non-root group — reader can sanity-check consistency.
2. The present-marker dword (value 1) precedes every wrapper body — a corruption-resync point.
3. Type-0xB data nodes are excluded by filter but still counted in some list traversals — deserializer must apply the SAME filter (round-trip symmetry requirement).
4. Wrapper slot 0x20 vs data slot 0x98 vs type slot 0xa0 — three vtable slots form the serialization interface; the deserialization factory slot is 0xa8 (`(**vt+0xa8)(node, param_1)` post-ctor init).

## 7. Remaining open items (recorded, not blocking)

- Per-FS body field lists (name string encoding — likely len-prefixed UTF-16; size/time field order) — each of the 8 factory classes' vt+0x98 needs a dedicated decode pass
- Type-5 dual-ctor semantics (param_2 branch)
- Exact class-name attribution per factory case (needs vtable-xref of each ctor to RTTI)
- Record-4 plaintext correlation: scripts/rsf_parser.py already expands the 36 MB blob — cross-checking the decoded grammar against actual bytes is queued

## 8. Cross-links

- Record framing + chunked zlib container: `rsf-format--scan-session.md` (§2, §3, §5.1–5.3)
- Writer entry chain: same artifact §5.4; `DRWUI-exe--main-ui-architecture.md`
- Restore path (reader + tree re-materialization): `architecture/04-recovery-workflow.md` §SaveScan
- DataRun on-disk semantics (NTFS): NTFS engine deep-dive artifact (SearchDLL family)
