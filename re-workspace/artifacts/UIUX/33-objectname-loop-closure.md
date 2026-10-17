# 33 — The objectName Loop Closure: 1,710 QSS Targets ↔ Binary String Xrefs ↔ 313 Owning Classes (v2)

**Method**: `scripts/objectname_loop.py` (new tool) — binary-level cross-referencing with a 3-pass attribution: (1) locate each QSS objectName string in `.rdata`, scan `.text` for every `lea reg,[rip+rel32]` referencing it, resolve to Ghidra functions; (2) attribute each function via ctor/vtable/symbol maps, with a **3-hop caller walk that passes THROUGH Qt-base attributions** to the composite app-class owner (recording the widget kind on the way); (3) **parent-context inheritance** — child names styled under `#Parent Child#child` selectors inherit the parent target's class. Plus `scripts/qss_property_census.py` v2 (bug fix: index EVERY `#name` per selector, not just the first — 1,677 → 1,710 targets, recovering child names like `savePushButton`, `titelLabel`, `TablePushButton`).
**Data**: `re-workspace/reversed/ui-resources/objectname_loop.json` (full matrix)
**Role**: Closes the "1,677 targets ↔ 900 classes" open item from the wave-4 session with a precise, multi-source attribution — and quantifies exactly what remains unmatched and why.

---

## 1. Headline numbers (v2 pass — hop-through-owner attribution)

```
QSS styled targets (style.css, v2 census)        1710
  located as strings in DRWUI.exe               1447   (84.6%)
  with .text lea-xrefs (set in code)             1437   (84.0%)
  ATTRIBUTED TO OWNING APP CLASSES              1330   (77.8%)
    exact-name  (objectName == class name)       261
    direct app-class (naming fn is class's)       95
    caller-hop (3-hop ancestor, app-class)         52
    hop-owner (walked past Qt-base to composite)  907
    parent-context (inherited from #Parent)       15
  widget-kind only (Qt ctor region, no owner)     107   (6.3%)
  unmatched (no xref or no class)                 273   (16.0%)
distinct owning app classes                       313
```

**The hop-owner pass is the decisive step**: a name like `titelLabel` is set inside a layout-builder helper whose own attribution is `QHBoxLayout` — walking the callers up to 3 hops reaches the composite widget's setup function (an app class). The widget kind encountered on the way is recorded per-function in the matrix (`kind` field).

## 2. The naming conventions (what the 1,710 names ARE)

1. **Class-name-as-objectName (261 targets)**: the vendor sets `setObjectName(class name)` for top-level custom widgets — `DrwHomePage`, `ChooseDestinationPathDialog`, `CFilterButton`, `LostLeftTreeView`, `CRecoveryBtn`, `NavigationTabBar`… This is why exact-name matching works and why the QSS file reads like a class registry. It also gives a free integrity check: 261 QSS targets double as a class-existence oracle.
2. **CamelCase child names (majority)**: `savePushButton`, `titelLabel` (vendor typo preserved from the shipping CSS), `diskNameLabel`, `TablePushButton`, `navigate_direction_button` — set inline in the owning composite's construction function.
3. **Numbered dynamic names**: `CShadowMenu_btn_1…6`, `navigate_direction_button[index="0..3"]` — composed at runtime (prefix + number). 231 of the 273 unmatched names have their prefix present in the binary — they are runtime-composed (QSS `index=`/numbered attributes match this), not static strings.
4. **State-keyed names**: QSS attribute selectors `[state=dark|selected|long]` key off dynamic properties set via `setProperty("state", QVariant)` — decoded live in the filter bar (artifact 31 §3.1: `FUN_1409ff5e0(aiBtn, "state", QVariant(""))`).

## 3. Top owning classes (v2)

| Class | targets | Meaning |
|---|---|---|
| DiskBackupSaveDlg | 29 | ChronoSnap backup-save dialog |
| CRepairPDFItem | 25 | PDF repair row (artifact 32) |
| CPEConnectWnd | 22 | WinPE connect window |
| CAutoRecoverSettingWnd | 20 | Auto-Recover settings (artifact 34 §2.2) |
| CLinuxLogonPage | 19 | Linux recovery login page |
| CBottomArea | 18 | status bar (telemetry-confirmed bottomarea.cpp) |
| CScanCommonPopDlg | 17 | scan-phase popup family |
| CTreeListItem | 16 | result-tree row widget |
| DiskBackProgressPage | 16 | backup progress page |
| DrwMainViewManagerWizard | 15 | the 4-page wizard stack itself |
| FileRepairListItem | 15 | generic repair row |
| CSBackupDownloadPage | 14 | SBackup download page |
| RetentionExitDlg | 14 | **the retention gate captured dynamically (artifact 30 §3)** |
| UserInformationView | 14 | account view |
| CLocalRecoverBuyDlg / CRecoverFinishBuyDlg | 14+13 | purchase dialogs |
| TitleGiftDiscountFrame / TitleGiftDlg | 13+12 | gift/discount frames |
| IntroductionWidget | 13 | first-run coach |

313 distinct app classes own the styled surface — the monetization chrome (RetentionExitDlg + buy/gift dialogs ≈ 90+ targets) is as heavily styled as the recovery chrome, matching the funnel-first design findings (artifact 17).

## 4. What the 273 unmatched are (verified, not guessed)

- **~268 have no `.text` lea-xref**; the large majority have a shorter prefix present in the binary (numbered/dynamic composition like `"CShadowMenu_btn_" + n`) — consistent with `QString::arg`-built names and the QSS `[index="N"]` attribute selectors.
- Only ~42 names are fully absent from DRWUI.exe — these belong to dialogs constructed via `QUiBasicDialog`-style generated code or are set through indirection (QString built from config), plus a handful styled-but-never-instantiated rules (dead QSS from the Apower vestige dialogs documented in artifact 21).
- The `QScrollBar`/`QMenu`/`QCheckBox`… entries in the unmatched list are TYPE selectors, not objectNames — they need no setObjectName (styled by class) — a census artifact, correctly excluded from binary matching.

## 5. Corrections to prior session numbers

| Prior claim (wave-4) | Corrected (this artifact, v2) |
|---|---|
| 1,677 QSS targets | **1,710** (v2 census: every #name indexed; 33 child names recovered) |
| 1,655 objectNames | 1,710 targets of which 1,437 set from code (rest type-selectors/dynamic) |
| "close the loop ↔ 900 classes" | **313 owning app classes** style the surface (980 total RTTI includes models/sinks/threads) |
| Qt-base attributions counted as matched | **1,330 owning-class + 107 widget-kind + 273 unmatched** — attribution depth honestly stratified |

## 6. How to read the matrix (examples)

```
ChooseDestinationPathDialog  best=ChooseDestinationPathDialog (exact-name)
savePushButton               best=ChooseDestinationPathDialog (parent-context)
                             [naming fn FUN_140a91b50 = the dialog's layout builder]
CShowContextMenuMenu         best=CShowContextMenu (caller-hop: FUN_140ac6dd0 <-
                             FUN_140bc31d0 <- FUN_140bc3110, a CShowContextMenu method)
navigate_direction_button    best=QButtonGroup (direct) — the back/go/up group
DiskBackupSaveDlg children   best=DiskBackupSaveDlg (hop-owner, 29 targets)
```

## 7. Reproducibility

- `python3 scripts/qss_property_census.py` (v2) → `qss_property_census.json` (1,710 targets)
- `python3 scripts/objectname_loop.py` → `objectname_loop.json` (the full matrix; ~40s runtime)
- Inputs: `og-codebase/DRWUI.exe`, `DRWUI_functions.txt` (Ghidra export), ctor/vtable/symbol maps (prior waves' validated tools)

## 8. Cross-links

- QSS census + sections: `21-qss-property-census.md` (now with v2 numbers)
- Class census: `22-rtti-class-census.md`; moc methodology: `20-moc-surface-sink-architecture.md`
- Destination dialog identity: `11-recovery-phase-funnel.md`; dynamic capture of the retention gate in front of it: `30-interaction-driver-ground-truth.md` §3
