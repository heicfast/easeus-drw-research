# ReFSSearchDLL — Deep Dive: ReFS Scan Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` / `per-binary/ReFSSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/ReFSSearchDLL_decompiled.c`
> (629 functions / 20,270 lines).

**Binary**: `og-codebase/ReFSSearchDLL.dll` (x64). **Exports**:
`EUCreateReFSSearcher`, `EUCreateReFSQuickSearcher`.

## 1. Class family (vftables verified)

- `RefsQuickSearchFiles` — the quick-search **class is itself function-named** (unique
  naming in the family; vftable installed directly in EUCreateReFSQuickSearcher @72).
- `CReFSDataRunList`, **`CRefsResidentDataRunList`** (also referenced from DRWUI's
  .rsf deserializer FUN_1405f5150 — the only per-FS runlist class DRWUI re-materializes
  by name, meaning ReFS results carry resident dataruns in session files).
- Shared: `CFileNode`, `CFileSystemNode`, `CNoneResidentNTFSDataRunList`,
  `CSearchedPartitionInfo`, `ICompleteFileSystemSearchController`, `IDataRunList`.

## 2. On-disk model (ReFS 1.x/2.x metadata)

ReFS stores metadata in B+ trees under fixed system identity directories
(System Dir 0x0-0x5; MSB = metadata self-describing B-trees). The engine's walkers
(class structure + RefsFileSystemAnalyser.mo sibling evidence):
- 32-byte object IDs (2×16-byte halves with hash halves) → directory/parent resolution
- Directories as MSB trees (`RefsMSTreeHeaderDesc` RTTI in the .mo analyser —
  page-aligned tree headers)
- Block table / allocator (`CRefsAllocatorMgr` in RefsFileSystemAnalyser.mo) shared
  concepts with the resident scan engine
- File data referenced through block-interval runlists (`CReFSDataRunList`)

## 3. OS-version gating (family doc §5, capa evidence)

The engine checks OS version (imports/capa "check OS version") — ReFS on client Windows
is read-gated (Win10/11 Pro can't create, but can read; ReFS 3.x is dev-channel) —
the engine distinguishes ReFS versions to pick the metadata layout. Small engine
(5 capa rules): most structure walking is shared with the .mo analysers
(RefsFileSystemAnalyser.mo = 42K lines — the partition-side ReFS code is 2× this engine's
size; the two share the parsing model).

## 4. Verification ledger

| Claim | Evidence |
|---|---|
| RefsQuickSearchFiles function-style class | EUCreateReFSQuickSearcher @72 |
| CRefsResidentDataRunList (cross-binary consumer) | DRWUI FUN_1405f5150 (rsf restore) |
| Class census | vftable rg census |
| ReFS metadata model | RefsFileSystemAnalyser.mo RTTI (mo-module-map) + CRefsAllocatorMgr |

## 5. Cross-links

- Family contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- RefsFileSystemAnalyser.mo (detection side): `artifacts/PartitionRecovery/mo-module-map.md`
- .rsf session re-materialization of ReFS runlists: `artifacts/SaveScan/rsf-format--scan-session.md`
