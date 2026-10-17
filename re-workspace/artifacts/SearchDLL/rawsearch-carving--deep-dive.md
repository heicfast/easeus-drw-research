# RAWSearchDLL — Deep Dive: Signature Carving Engine (Algorithm-Level)

> Companion to `searchdll-family--architecture.md` and `per-binary/RAWSearchDLL.md`.
> Evidence: `re-workspace/reversed/ghidra-searchdll/RAWSearchDLL_decompiled.c`
> (1,921 functions / 80,614 lines), export table, raw_signs.json, RTTI (488 vftable
> references to analyser classes).

**Binary**: `og-codebase/RAWSearchDLL.dll` (x64), same PDB family as all engines.
**Exports (6, verified at 72122-72230)**: `EUCreateRAWSearcher` (0x160-byte controller),
`EUCreateRAWSearcherForCellTest`, `EUGetAnalyserList`, `EUGetAnalyserMap`,
`EUGetAnalyserMultimap`, `GetRawUserInfoMap`.

## 1. Controller & registry construction (decompiled)

- `EUCreateRAWSearcher`: `new(0x160)` → FUN_18000bba0 = **CRAWSearchController ctor**
  (352 bytes — lean: no FS metadata state, unlike NTFS's 0x940).
- `EUCreateRAWSearcherForCellTest`: constructs the controller **statically** into
  `DAT_180096240` (thread-safe `_Init_thread_header/footer` once-init + atexit teardown),
  then FUN_18000c650 binds a test device — the "CellTest" name + `CRawFileCellTestStorageDevice`
  RTTI = an in-house **unit-test harness for carvers** (fake storage device feeds synthetic
  sector images). The shipping product carries its engine's test scaffolding.
- `EUGetAnalyserList/Map/Multimap`: all fetch the global registry (FUN_180006a80) and project
  it into list / map / multimap views (FUN_180006b00/b10/b20) — the host enumerates carvers
  through these to build "which formats can we carve" UI.
- `GetRawUserInfoMap`: returns `FUN_180001350()+0x90` — the per-extension user preference
  table (ties to `config/RawConfig.ini`, loaded at 13133).

## 2. The signature registry (std::map RB-tree — construction decoded at 1560-1700)

Registry = `std::map<uint32 fourcc_magic, Analyser*>` built by explicit per-format
registration blocks. Each block:
1. `new(0x18)` node value → factory-constructs the analyser
   (e.g. FUN_180035e00 = PDF analyser, FUN_180037b50 = TIFF-family analyser — reused for
   `0x2a004d4d` "MM\0\*", `0x2a4949` "II\*", `0x554949` "IU", `0x4f524949` "IRO\*" TIFF
   byte-order variants),
2. RB-tree descent by key comparison (`while color==0 … node[8] < key …`),
3. `FUN_18000acf0` = `_Tree::_Insert` + `FUN_18000ad50` = rebalance/rotate,
4. analyser pointer stored in the node's value slot.

Verified registered keys (u32 LE = on-disk byte string):
| Key | Bytes | Format |
|---|---|---|
| 0xeeffd8ff | FF D8 FF EE | JPEG SOI+APP14 (Photoshop) |
| 0x46445025 | 25 50 44 46 | `%PDF` |
| 0x2a004d4d / 0x2a4949 / 0x554949 / 0x4f524949 | II\*/MM\*/IU/IRO | TIFF byte-order family |
| 0x474e5089 | 89 50 4E 47 | PNG |
| 0x21726152 | 52 61 72 21 | `Rar!` |
| 0x04034b50 | 50 4B 03 04 | ZIP local header |
(The full set spans 190+ analysers across `CommonRawAnalyser`, `Brance::*Analyser`,
`BruteForce::*Analyser` namespaces — 488 vftable references in this binary.)

## 3. Signature database pipeline (three layers)

1. **`raw_signs.json`** (139 extensions) — loaded at engine init (23836):
   `std::ifstream("raw_signs.json")` → seekg(end)/tellg (size) → read whole file →
   **hand-rolled JSON tokenizer** (FUN_180021460/21380 token readers — *not* tinyxml2 and
   *not* CJsonObject for this file; both classes exist in the binary but serve other configs)
   → per-extension `{header: signs[off,hex,confidence], tail: signs, min, max}` entries.
   (Correction vs. family doc §4.1: CJsonObject is used for other JSON; raw_signs.json
   uses the dedicated istream tokenizer.)
2. **EUUserData** magic/MIME DB — secondary typing (see config artifact).
3. **Hardcoded C++ analysers** — per-format parsers that compute the file END by walking
   structure (the difference between a "signature hit" and a *recoverable file with size*):
   e.g. PDF: `(*param_2 == 0x46445025) && (param_2[1]=='-')` then `%PDF-x.y` version parse
   (41230-41233); JPEG: marker walk incl. `0xC0` SOF dimension checks with 8-bit precision
   (`bVar1==0xc0 && pbVar25[4]==8`, 39653); ZIP central-directory; PST node b-tree; etc.
   Header+tail+size-gate confidence combination ranks overlapping candidates
   (raw_signs.json `confidence` fields, e.g. ifo `0,44564456,0.96`).

## 4. Scan integration contract (from DRWUI, cross-linked)

- The RAW searcher is registered LAST in the advanced-scan engine list
  (DRWUI FUN_140580720) when the settings gate at +0x60 is enabled, and receives a
  `std::function<string(string,string)>` naming/filter callback via vtable+0x48 — used to
  name carved files at discovery time (e.g. "File0001.jpg" naming policy lives in the UI,
  not the engine).
- Carved nodes feed `IRawDirectoryTreeBuilder` → `LostTreeModel`/`LostTableModel`
  flat "Lost data" views; RAW output is correlated with structured results in the merge
  phase (structured wins; carved attaches as "Other deleted files").
- Reads flow through the same `CStorageDeviceWithCache`-style volume IO as FS engines
  (IOCTL/EPMNtDrv raw path on damaged volumes).
- The engine is gated per-extension at runtime via `config/RawConfig.ini`
  (37 extension toggles; loaded at line 13133 via the same ini machinery).

## 5. Brute-force namespace (decompiler-visible families)

`BruteForce::JpegAnalyzer`, `BruteForce::CAsfAnalyser`, … — parsers that walk forward to
EOF validating structure at every step (vs. signature-snap recognizers). Used where a
format has no crisp tail marker: the analyser keeps consuming until the grammar breaks,
then reports the last valid position as the file size. This is the classic
"maximize salvage" trade-off: more false-positive tail, no premature truncation.

## 6. Verification ledger

| Claim | Evidence (RAWSearchDLL_decompiled.c) |
|---|---|
| 0x160-byte CRAWSearchController | EUCreateRAWSearcher (72122) |
| ForCellTest static once-init + test device | 72142-72165 (_Init_thread_header/footer, atexit, FUN_18000c650) |
| List/Map/Multimap projections of one registry | 72170-72205 (FUN_180006a80 + b00/b10/b20) |
| GetRawUserInfoMap @ +0x90 | 72209-72219 |
| RB-tree insertion + key compare + node value | 1560-1700 (FUN_18000acf0 insert, FUN_18000ad50 rebalance) |
| Registered fourccs (PDF/TIFF×4/PNG/Rar!/JPEG) | 1578/1595/2053/2131/16128/41230 constants |
| raw_signs.json istream load + tokenizer | 23836-23900 (FUN_1800098d0, seekg/tellg, FUN_180021460/21380) |
| RawConfig.ini consumption | 13133 |
| PDF version grammar | 41230-41233 (`%PDF-`) |
| JPEG SOF0 dimension check | 39653 (0xC0, precision 8) |
| Analyser census 488 vftable refs | rg count over binary |

## 7. Cross-links

- Family architecture & plugin contract: `artifacts/SearchDLL/searchdll-family--architecture.md`
- Identity/census: `artifacts/per-binary/RAWSearchDLL.md`
- Config data (raw_signs.json, RawConfig.ini, EUUserData): `artifacts/config-files/config-data-reference.md`
- Advanced-scan wiring + naming callback: `artifacts/DRWUI-exe--main-ui-architecture.md` §9.2
- Lost/merge views: `artifacts/DRWUI-exe--main-ui-architecture.md` §3.4
- NTFS deep-dive (sibling engine): `artifacts/SearchDLL/ntfs-engine--deep-dive.md`
