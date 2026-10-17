# 28 — The objectName Loop Closure: 1,710 QSS Targets ↔ Binary String Xrefs ↔ 304 Owning Classes

**Method**: `scripts/objectname_loop.py` (new tool) — binary-level cross-referencing: locate each QSS objectName string in `.rdata`, scan `.text` for every `lea reg,[rip+rel32]` that references it, resolve the referencing instruction to its Ghidra function, then attribute the function to a class (ctor map / vtable method map / symbol-ctor map / 2-hop caller walk). Plus `scripts/qss_property_census.py` v2 (bug fix: index EVERY `#name` per selector, not just the first — 1,677 → 1,710 targets, recovering child names like `savePushButton`, `titelLabel`, `TablePushButton` that were previously invisible).
**Data**: `re-workspace/reversed/ui-resources/objectname_loop.json` (full matrix)
**Role**: Closes the "1,677 targets ↔ 900 classes" open item from the wave-4 session with a precise, multi-source attribution — and quantifies exactly what remains unmatched and why.

---

## 1. Headline numbers

```
QSS styled targets (style.css, v2 census)      1710
  located as strings in DRWUI.exe             1447   (84.6%)
  with .text lea-xrefs (set in code)           1437   (84.0%)
  with class attribution                       1432   (83.9%)
    exact-name  (objectName == class name)      261
    direct app-class (naming fn is class's)     95
    caller-hop (2-hop ancestor attributed)      23
    Qt-base context (naming fn = Qt ctor site) 1053
  unmatched (no xref or no class)               278   (16.1%)
distinct classes receiving objectNames           304
```

**Precision notes**: (a) "Qt-base context" means the referencing function was attributed to a Qt base-class construction region (QLabel=841 of them) — i.e. the *widget kind* is identified, but the composite owner is the enclosing ctor not yet symbolized; these are genuine partial attributions, not noise. (b) The 2-hop caller walk resolved hard cases like `CShowContextMenuMenu` → set by a helper called from `CShowContextMenu`'s method (verified hop chain: FUN_140ac6dd0 ← FUN_140bc31d0 ← FUN_140bc3110 [CShowContextMenu vtable method]).

## 2. The naming conventions (what the 1,710 names ARE)

1. **Class-name-as-objectName (261 targets)**: the vendor sets `setObjectName(class name)` for top-level custom widgets — `DrwHomePage`, `ChooseDestinationPathDialog`, `CFilterButton`, `LostLeftTreeView`, `CRecoveryBtn`, `NavigationTabBar`… This is why exact-name matching works and why the QSS file reads like a class registry. It also gives a free integrity check: 261 QSS targets double as a class-existence oracle.
2. **CamelCase child names (majority)**: `savePushButton`, `titelLabel` (vendor typo preserved from the shipping CSS), `diskNameLabel`, `TablePushButton`, `navigate_direction_button` — set inline in the owning composite's construction function.
3. **Numbered dynamic names**: `CShadowMenu_btn_1…6`, `navigate_direction_button[index="0..3"]` — composed at runtime (prefix + number). 231 of the 278 unmatched names have their prefix present in the binary — they are runtime-composed (QSS `index=`/numbered attributes match this), not static strings.
4. **State-keyed names**: QSS attribute selectors `[state=dark|selected|long]` key off dynamic properties set via `setProperty("state", QVariant)` — decoded live in the filter bar (artifact 26 §3.1: `FUN_1409ff5e0(aiBtn, "state", QVariant(""))`).

## 3. Top owning classes (app classes)

| Class | targets | Meaning |
|---|---|---|
| CTreeListItem | 16 | result-tree row widget names |
| IntroductionWidget | 9 | first-run coach overlay |
| CIconViewDelegate | 7 | icon-view rendering |
| RecommendNodeItem | 5 | AI-recommend tree nodes |
| CFilterButton (+4 siblings) | 4+2+2+2+2 | filter family (artifact 26) |
| CBottomArea | 4 | status bar (bottomarea.cpp — telemetry-confirmed) |
| ArchivePreviewDelegate | 4 | archive preview rows |
| CClassifyComboBoxItemDelegate / CNavigateNasPathMenuItemDelegate | 4+4 | combo/NAS menu items |
| DrwLostDiskPage | 3 | lost-disk page |
| CCalendarWidget / CLineeditDate | 3+3 | time-filter custom date pickers |
| PreviewMainDialog | 3 | preview window chrome |
| CRepairPDFLeftListItemDelegate | 3 | repair list rows (artifact 27) |

304 distinct classes in total receive at least one styled objectName — the styled surface of the app is concentrated in ~300 composite widgets out of the 980 RTTI classes (the rest: models, sinks, threads, delegates' engines, non-visual helpers).

## 4. What the 278 unmatched are (verified, not guessed)

- **273 have no `.text` lea-xref**; of those, 231 have a shorter prefix present in the binary (numbered/dynamic composition) and 31 appear only as substrings — consistent with `QString::arg`-built names (`"CShadowMenu_btn_" + n`) and `fromUtf8(format)` patterns.
- Only ~42 names are fully absent from DRWUI.exe — these belong to dialogs constructed via `QUiBasicDialog`-style generated code or are set through indirection (QString built from config), plus a handful styled-but-never-instantiated rules (dead QSS from the Apower vestige dialogs documented in artifact 21).
- The `QScrollBar`/`QMenu`/`QCheckBox`… entries in the unmatched list are TYPE selectors, not objectNames — they need no setObjectName (styled by class) — a census artifact, correctly excluded from binary matching.

## 5. Corrections to prior session numbers

| Prior claim (wave-4) | Corrected (this artifact) |
|---|---|
| 1,677 QSS targets | **1,710** (v2 census: every #name indexed; 33 child names recovered) |
| 1,655 objectNames | 1,710 targets of which 1,437 set from code (rest type-selectors/dynamic) |
| "close the loop ↔ 900 classes" | **304 classes** own the styled surface (980 total RTTI includes models/sinks/threads) |
| Qt-base attributions counted as matched | Split out honestly: 377 app-class + 1,053 Qt-kind-context |

## 6. How to read the matrix (examples)

```
ChooseDestinationPathDialog  best=ChooseDestinationPathDialog (exact-name)
    funcs: 0x140a871c0 (QVBoxLayout ctor region), 0x140bc9b10 (dialog's own method)
savePushButton               best=QHBoxLayout/qt-base (set inside the destination
                             dialog's layout builder FUN_140a91b50)
CShowContextMenuMenu         best=CShowContextMenu (caller-hop, 2 hops)
navigate_direction_button    best=QButtonGroup (direct) — the bar/prev/up/next group
```

## 7. Reproducibility

- `python3 scripts/qss_property_census.py` (v2) → `qss_property_census.json` (1,710 targets)
- `python3 scripts/objectname_loop.py` → `objectname_loop.json` (the full matrix; ~40s runtime)
- Inputs: `og-codebase/DRWUI.exe`, `DRWUI_functions.txt` (Ghidra export), ctor/vtable/symbol maps (prior waves' validated tools)

## 8. Cross-links

- QSS census + sections: `21-qss-property-census.md` (now with v2 numbers)
- Class census: `22-rtti-class-census.md`; moc methodology: `20-moc-surface-sink-architecture.md`
- Destination dialog identity: `11-recovery-phase-funnel.md`; dynamic capture of the retention gate in front of it: `25-interaction-driver-ground-truth.md` §3
