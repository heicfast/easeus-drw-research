# 05 — UI/UX Architecture: The Complete User Experience, Decoded

> This is the top-level UI/UX knowledge document for EaseUS Data Recovery Wizard (DRW), synthesizing the UI/UX research session into one cross-linked map. Everything below is evidence-backed by the thirteen `re-workspace/artifacts/UIUX/` deep-dive artifacts, the extracted resource bundles (`re-workspace/reversed/ui-resources/`), and the decompiled DRWUI analysis (2.38M lines; class attribution via RTTI vtables, binary ctor scans, and moc table decodes).
> Companion engine-side document: `04-recovery-workflow.md`.

## 1. The UI stack at a glance

| Layer | Technology | Evidence |
|---|---|---|
| Main app | **Qt 5 Widgets** (C++, MSVC x64) — `DRWUI.exe` (30 MB, 119,182 functions) | imports census, RTTI |
| Wizard core | `DrwMainViewManagerWizard` **= QStackedWidget** with 4 top-level pages | ctor decode (artifact 04) |
| Styling | QSS `style.css` (20,802 lines) + **118-slot dual palette** (`themdark.ini`) + theme RCC bundles (light/dark, ~7,400 assets) | artifact 05 |
| Text | English-hardcoded literals wrapped in `QObject::tr`; 25 `.qm` language files (1,556 strings each) | artifact 02 |
| Companion UIs | DiskHealth (Qt Quick, 54 QML components); PartitionRecovery UILogic (MOM objects); embedded-IE purchase webviews inside DRWUI (`InnerWebWindow`/`ChinaMainlandbuyIeWnd` — the shipped `EUinApp.exe` is an orphaned IE-emulation registry helper, artifact 23) | artifacts 01 §6, 13 §7, 23 |
| Analytics | 195 telemetry events covering every click/funnel stage | artifact 06 |

## 2. The user journey (one screen at a time)

1. **Launch** — `SplashWindow` → `DrwMainWindow` opens maximized (1240×840 normal / 800×600 min, high-DPI) → stack lands on **PeripheralHomeView** (artifact 07).
2. **Home** — 14 feature tiles ("Hardware Disk, SD Card, NAS & Linux, RAID, Bitlocker Drive, Cloud Drive, Linux Recovery, File Repair, Lost Partition Rescue, Crashed PC Rescue, Boot Repair, Help, More Recovery Tools, ChronoSnap Backup") + "External/Internal drives (%1)" groups; the PC-recovery tab (`DrwHomePage`) shows "Select a location to start recovering" with TRIM-status chips and per-row Scan buttons; "Continue last scanning" resumes `.rsf` sessions (artifact 07).
3. **Scan** — `scanClickedSlot` chain: CVersionCtrl prep → `CDetailPage::setScanDevice` → orchestrator start → **stack switches to CDetailPage** → progress UI (sector grid, "Scanning disk sectors: %1", "%1 file chunks scanned...") with live tree fill; NAS targets attach the network-error overlay (artifacts 04, 08).
4. **Results** — left tree with the **5 special branches** (Tags Extracted / File Name Lost / File Path Lost / Versions / Unimportant — each with coaching copy), classify tabs (8 categories + Unsaved File), breadcrumb path bar, sortable list with async thumbnails, search with type dropdown, **AdvanceFilterCondition** advanced filter, splitter persistence, AI Recommend mode (artifact 09).
5. **Preview** — per-type previewers (image zoom/hand cursors, 15s video cap, 100MB size cap, damage grading "Recovery Chances: High", archive browsing, PDF raster paging, `IInWindowStream` streaming) (artifact 10).
6. **Recover** — destination picker (Local/Cloud + "Enable file repair") with overwrite-safety rails → progress → **free-limit gate** (`CRecoverLimitDlg`: "Give Up" vs "Recover Remaining") → Free-vs-Pro matrices and VIP chat upsell → result summary + recovery log (artifact 11).
7. **Repair** (parallel product) — video wizard with **sample-file Advanced Repair** and "Deep Video Reconstruct"; PDF wizard with password-decrypt; repair-during-recovery counters; saving repaired output Pro-gated (artifact 12).

## 3. Architecture wiring (UI ↔ core)

The single most important structural fact: **the wizard is a stack, not a window manager** — navigation is `setCurrentIndex`, and the scan runs *inside* the results page. Above that (artifact 13):

- Service singletons: `CVersionCtrl` (licensing woven into the scan path — vtable+0x1f0/0x1f8/0x220 calls at every scan start), scan orchestrator (vtable+0x18 = start), device manager, app-service hub, telemetry hub.
- Signal contracts: CDetailPage exposes 30 signals (filter/search/navigate/scan lifecycle/state queries by reference); every long operation is a QThread worker with queued completion signals.
- State: stack index + per-page view modes; `AdvanceFilterCondition` by-value broadcast; scan-abort Win32 event in `CScanMgr`+0x108; `.rsf` sessions; QSettings geometry; registry license state.
- 42-slot CDetailPage moc dispatcher = the largest control surface in the app.

## 4. Design system (EaseUS 2021+ language)

- **Palette**: brand blue `#0560fd` (light) / `#5094ff` (dark); CTA gradients `#0c99ff→#0560fd` / `#059afd→#0ccdff`; success `#30b373`; warn `#f72c2c`/`#ffc10e`; 4-step neutral ladder `#e7e7e7/#dee1ed/#c1ccdf/#a0a6b1`; shadows `rgba(4,5,43,0.5)` (light) / `rgba(28,28,28,0.5)` (dark) (artifact 05).
- **Type**: Segoe UI 14px base (Semibold 600) + CJK stacks (Meiryo UI / Malgun Gothic / Microsoft YaHei) + DIN-Black/DINCond-Black display faces (artifact 05 §3).
- **Geometry**: window 1240×840/max, message boxes 540×240 fixed, icon standards 48/56/72/80, home margins 40/45/0/48 (artifact 05 §2/§5).
- **Iconography**: 50-state device/partition type system (existing/lost/BitLocker-lock/unlock × disk/USB/system/camera/UAV/SD/dashcam/recycle-bin), 105 filetype SVGs at 24/48 with runtime scaling to 72/160 (artifact 01 §3–4).

## 5. UX strategy findings (what the design reveals)

1. **Funnel-first instrumentation**: every classify tab, filter reset, stop branch, and buy entry is a telemetry event — the UX is designed to be measured end-to-end (artifact 06).
2. **Progressive disclosure of damage**: quick scan first → "Advanced Scan can find more files…" upsell → raw-carved files land in dedicated branches with honest coaching copy ("the file path was fully or partially missing") (artifacts 08–09).
3. **Trust engineering**: TRIM status chips, recovery-chance grading, overwrite warnings, "EaseUS NEVER keeps records of your account", anti-piracy shaming dialog (artifacts 07, 10, 11).
4. **Friction as conversion**: preview caps (15s/100MB), "Preview only" tier, "Get Pro to Save Repaired" gates, and the pressure-tuned limit dialog ("Valuable data might be LOST PERMANENTLY…") (artifacts 10–12).
5. **AI layer (2024+)**: AI Recommend ranking, AI dedup window, AI assistant robot tooltip ("Meet your recovery assistant…"), "AI Recovery Insight" cards (artifacts 08–09).

## 6. Artifact index (re-workspace/artifacts/UIUX/)

| # | Artifact | Covers |
|---|---|---|
| 01 | visual-inventory | RCC format RE, 7,400 assets, icon/type system, fonts, QML |
| 02 | string-inventory | QM parsing, 1,556 strings ×25 languages, tr-callsite census |
| 03 | window-class-map | 980 vtable classes, 141 windows, 530 UI classes, geometry census |
| 04 | userflow-state-machine | View manager decode, 4 pages, scanClickedSlot, 17 slots |
| 05 | styling-theming-layout | 118-slot palette, fonts, window sizes, page metrics |
| 06 | dialog-telemetry-inventory | Modal census, 195 telemetry events, funnel map |
| 07 | home-phase-deep-dive | Landing page, tiles, TRIM chips, session resume |
| 08 | scan-phase-deep-dive | Progress, stats grids, stop/complete dialogs, disconnect states |
| 09 | results-phase-deep-dive | 5 tree branches, classify/filter/search, AI layer, Auto-Recover |
| 10 | preview-subsystem | Per-type previewers, caps, damage grading, streaming |
| 11 | recovery-phase-funnel | Destination rails, limit gate, Free-vs-Pro matrices, VIP |
| 12 | repair-ui-flows | Video/PDF wizards, sample-based advanced repair |
| 13 | ui-core-wiring-state | Singletons, signal contracts, threads, state fields |

Raw evidence: `re-workspace/reversed/ui-resources/` (extracted themes, translations, vtable maps, tr callsites, telemetry lists, function maps) + `scripts/{rcc_extract,qm_parse,map_rtti_vtables,find_ctors_binary,mine_tr_callsites,integrate_class_ui}.py`.

## 7. Open items (next sessions)

- ~~Decode the remaining large moc dispatchers~~ — **RESOLVED (session 4, artifacts 20+22)** with a
  **premise correction**: "96/97" were vtable sizes, not moc slot counts. Actual own-method counts:
  ArchivePreviewView 0 (forward-only), CClassifyLeftTreeView 0 (override-only subclass),
  CLeftTreeView 47, CListHeaderView 5, CClassifyListHeaderView 1. The true largest dispatcher is
  **CRightContent (82 methods)** — decoded in artifact 22 §4.
- ~~QSS full property census per objectName~~ — **RESOLVED (artifact 21)**: 2,805 rules / 11,929
  declarations / 1,677 targets / 777 image assets; section map, color/state/widget censuses.
- ~~Dynamic confirmation via Wine/Windows screenshot run~~ — **RESOLVED (artifact 24)**: the Wine
  **loader** path (DRW.exe supervising) renders the real maximized DRWUI window (1600×1000 title
  "DRWUI" with tile-row children at y≈185 + 640×480 central child); the **direct** path verified
  negative (standalone exit — strongest confirmation of the supervisor architecture). New runtime
  facts: i18n-aware NAS firewall prep (netsh EN + GBK 网络发现 rule groups), optional remote-COM
  probes, WMI corroboration, shipped dev-config JSON (19.3 / 视频重组 / 19.2回退分支).
- ~~EUinApp purchase-host page-flow RE~~ — **RESOLVED with role correction (artifact 23)**:
  EUinApp is not a host — it is the shared-library `EUSetWebCtrlIEVersion` registry bootstrapper
  (HKCU FEATURE_BROWSER_EMULATION = 9000/10000/11000 by IE version), and it is **orphaned** in
  this build (zero references corpus-wide, ASCII+UTF-16). Purchase webviews live inside DRWUI's
  own embedded-IE windows.
- DRWUI RTTI class-by-class depth (980 classes) — **RESOLVED (artifact 22)**: full census with
  categories, vftables, method counts, and the Qt inheritance spine for 395 classes
  (QFrame 147 / QDialog 58 / QThread 42 / …), plus the moc-surface leaderboard.
- Remaining: decode the mid-size dispatchers (CFilterButton family, repair item rows);
  PreviewDataSource/SearchDataSource non-Qt hierarchies; QSS-target ↔ class objectName closure
  (1,677 ↔ 900).

## 8. Second-wave additions (artifacts 14–17)

- **14 — CDetailPage slot dispatch**: all 42 slots decoded; internal view-mode QStackedWidget (slots 22/24 switch, slot 27 re-binds per-mode connections); wait-dialog modal (slot 38) + nested QEventLoop confirm (slot 39).
- **15 — Scenario flows**: NAS 13-window chain with verified signal contracts (Connect/Scan/Support row actions, connect/enum result codes, pixmap streaming); Linux mirror; BitLocker unlock chain; WinPE media flow.
- **16 — Shell internals**: DrwMainWindow setup (accessible names, opacity effects, quint64 title-button IDs, currentChanged sync); AI layer ("Local AI | Secure" on-device recommend/dedup/insight/assistant).
- **17 — Monetization growth map**: complete funnel stage→surface→copy→telemetry table; pressure-gradient copy analysis.

## 9. Third wave + dynamic verification status

- **18 — Preview architecture**: 41-class system with `IPreviewStub` plugin family (Mem/Office/Pdf/Image/RtfTxt/Archive/AV), tri-state views, `CPreviewController` contract, `VideoPreviewWnd::timeout()` = the 15s free cap.
- **19 — DiskHealth Quick UI**: frameless 840×590 QML dashboard, S.M.A.R.T. table, tray-guarding model, shared EuS component library.
- **QSS layout census** (`re-workspace/reversed/ui-resources/qss_layout_census.txt`): 1,646 selectors with dimensions (DiskBackup 680×536–730, TitleGift 420×488, context menu 264×202…).
- **Dynamic ground-truth workflow** (`.github/workflows/ui-ground-truth.yml`): Wine+Xvfb screenshot & window-census run of DRWUI — prepared and dispatched, but GitHub Actions minutes on the account are exhausted (all jobs after 09:19 UTC rejected at allocation; verified across 4 dispatches incl. ubuntu fallback). Re-dispatch `ui-ground-truth` when minutes replenish to capture runtime window titles/geometry for final confirmation of the decoded flow.

## 10. Independent verification addendum (doc-agent session, line-cited)

The doc/verification agent independently re-checked the highest-risk claims of this UIUX
document set against the raw decompilation — all sampled claims PASS:

| Claim (artifact) | Verification (DRWUI_decompiled.c) | Verdict |
|---|---|---|
| View manager = QStackedWidget, pages DrwHomePage/DrwLostDiskPage/PeripheralHomeView/CDetailPage in order, landing index 2 (04) | `DrwMainViewManagerWizard::vftable` dual vtables @1312965-1312987 (MI); FUN_1408351a0: FUN_140781600→insert 0, FUN_140786090→insert 1, FUN_14093aa50→insert 2, `setCurrentIndex(param_1,2)`; CDetailPage FUN_1406b86e0→insertWidget(3) in the follow-up init FUN_140835910 @1314851-1314852 | ✓ (with precision note below) |
| Window 1240×840 (05) | `QSize::QSize(local_190, 0x4d8, 0x348)` @1312170 — 0x4D8=1240, 0x348=840 | ✓ |
| Brand blue #0560fd light / 118-slot palette (05) | `themdark.ini [normal]` slot 6 = `#0560fd`, slot 10 = `#0c99ff→#0560fd` gradient, 33+ slots counted in the file | ✓ |
| 195 telemetry events (06) | `telemetry_events.txt` = 195 unique after sort; sampled `Click_AIRecommeded` / `Click_Activateupgraderenewnow` / `Click_AppLeave` each appear as literal strings in the decompilation | ✓ |
| VideoPreviewWnd timeout() = 15 s free cap (10/18) | `QObject::connect(timer@obj+0x90, "2timeout()", …)` + `QTimer::start(local_1a0, 15000)` @1507353-1507357; ctor has QTimers at +0x90 and +0x250 @1506600-1506660 | ✓ |
| Preview class family exists: PreviewMainDialog (66 methods), CPreviewController, IPreviewStub plugin set (18) | vftables + references present: `PreviewMainDialog::vftable` (6), `CPreviewController::vftable`, `IPreviewStub` (10 refs), `MemPreviewStub`, `ArchivePreviewView`, `VideoPreviewWnd::vftable` (4) | ✓ |

**Precision note (only correction found):** artifact 04 attributes all four page
insertions to init `FUN_1408351a0`; in fact the first three pages are inserted there,
while the CDetailPage construction + `insertWidget(3)` happens in the follow-up init
`FUN_140835910` (called from the same setup path). The page order, indices, and landing
view are exactly as documented — only the containing function for page 3 differs.

## 11. Fourth wave — moc surface, QSS census, class census, EUinApp (session 4)

- **20 — Moc surface + Sink architecture**: premise correction (vtable size ≠ moc slots);
  CLeftTreeView's 47-method dispatcher fully decoded (13 signals + 34 slots, stringdata-validated);
  CClassifyLeftTreeView/ArchivePreviewView = override-only specializations (`IsTypeTree()`
  polymorphism); **CUISink** app-lifetime event hub + the 13-class Sink/observer family;
  the coordinated Freeze/Unfreeze UI protocol; async expand-on-scroll (QThread @ TimeCriticalPriority,
  1 s debounce).
- **21 — QSS property census**: 2,805 rules / 11,929 declarations / 1,677 targets / 777 image
  assets; 30-section map (DENGFEI/PENGJUN attribution, 53% unattributed modern growth); interaction
  state census (hover 224 / pressed 195 / disabled 147 + attr-states); 5-step blue tint ladder;
  Apower vestige dialogs; layout-in-QSS architecture finding (36% of declarations are geometry).
- **22 — RTTI class census**: all 980 classes categorized (900 app classes); Qt inheritance spine
  for 395 classes (QFrame 147 / QDialog 58 / QThread 42 / QPushButton 34); moc-surface leaderboard
  — **CRightContent 82 methods decoded** (the right-pane control hub: 24-signal contract incl.
  `sigAiRecommedBtnEnter`, `retranslate`, no-result states); 58-dialog census; 93 text-bearing
  classes.
- **23 — EUinApp decoded**: the "purchase host" is actually `EUSetWebCtrlIEVersion` — a
  FEATURE_BROWSER_EMULATION registry bootstrapper (IE9/10→matching, else 11000), **orphaned** in
  this build (zero references, ASCII+UTF-16, corpus-wide); purchase webviews live inside DRWUI's
  embedded-IE windows (artifacts 13 §7 / 17 corrections recorded).
- New tooling: `scripts/{moc_slot_decoder,moc_stringdata_extract,qss_property_census,rtti_class_census}.py`
  (all validated against CDetailPage ground truth); raw evidence:
  `re-workspace/reversed/ui-resources/{moc_slot_decodes,moc_stringdata,qss_property_census,rtti_class_census}.json`.
- **24 — Dynamic ground-truth ingestion**: first successful runs ingested — loader-path DRWUI
  renders maximized with real child geometry (tiles row + central 640×480); direct-path verified
  negative (supervisor necessity); NAS firewall prep i18n-aware (netsh EN+GBK); shipped
  dev-config JSON provenance (19.3, 视频重组, 19.2回退分支).

## 12. Fifth wave — interaction driver, filter chain, repair rows, objectName loop (session 5)

All three wave-4 "suggested next steps" executed, plus the workflow hardening:

- **25 — Post-scan-complete interaction ground truth**: `ui-interaction-driver.yml` (2-variant
  Windows matrix, pixel-verified click coordinates, per-step screenshots) captured the last two
  dynamic cells. The completion celebration is a **standalone 540×380 OS child window** (own
  hwnd, no reject-on-Escape — blocks all toolbar clicks until dismissed). **"Go to Recover" →
  results browse + "AI Recommend available." toast + AI FAB** (not a destination dialog);
  **"Recover All" (1.1M files, Free) → the RETENTION GATE** ("Wait! You are at risk of losing
  data!" + Get-Up-to-40%-Off / Online-Service / Quit rows — the RetentionExitDlg family);
  ESC dismisses the retention gate. Telemetry goldmine: the completion pipeline verbatim with
  vendor source paths — cache-reset cascade → **Freeze → auto_<Volume>_<timestamp>.rsf auto-save
  → Unfreeze** → CScanMgr::ScanFinished:636 → bottomarea.cpp:838/856 (nStatus=4, m_iScanType 3→4)
  → quick-scan + recoverability passes (CCheckNodeThread, re-fires on Go-to-Recover).
- **26 — Filter system decode (CFilterButton family → CFilterBar → CRightContent::onFilterChanged
  → CSetFilterThread)**: 5 filter buttons share ONE moc surface (template-sibling pattern);
  onActionChanged special action-IDs 0x1a/0x105/0x1006; **TWO CFilterBar instances (Path mode /
  Type mode)**, hidden until mode switch; CFilterBar::onValueChanged aggregates 4 buttons + AI
  button "state" property → **0x48-byte AdvanceFilterCondition** → sigFilterChange →
  CRightContent::onFilterChanged (FUN_14072b730) spawns **CSetFilterThread**; run() resolves the
  view-indexed model via the global singleton switch (path/type/search) and calls the model's
  SetFilter virtual (+0x10) or NULL to clear; empty-condition checker = 7 enable-bits.
  Filter→scan interplay telemetry-verified (CDoScanPartition::PushFolderFilter:84 at scan start).
- **27 — Repair item-row dispatchers**: CRepairVideoItem/CRepairPDFItem = identical 22-method moc
  blobs (template siblings); the row contract (Repair/Preview/Save/Stop/Advanced-Repair[bFromChange]/
  Change/FeedBack + progress); FileRepairWidgetsMgr page flow (Home→Add→List, switchToPage(N));
  FileRepairAddThread @ **TimeCriticalPriority**; FileRepairDataMgr task queue (sigDoNextRepairTask
  / sigFinishRepairTasks); **priority-7 worker fleet confirmed cross-line** (filter/check/repair).
- **28 — objectName loop closure**: QSS census v2 (bug fix — every #name indexed: 1,677→**1,710
  targets**) + binary-level lea-xref scanner + 2-hop caller attribution → **1,432/1,710 (83.9%)
  attributed** (261 exact-name + 95 direct + 23 caller-hop + 1,053 Qt-kind context) across **304
  owning classes**; the 278 unmatched are mostly runtime-composed numbered names (231 have binary
  prefixes) + type-selectors needing no setObjectName.
- New tooling: `scripts/objectname_loop.py` (+ census v2); raw evidence:
  `re-workspace/raw-evidence/ui-interaction-{recovery-flow,results-interactions}/`,
  `re-workspace/reversed/ui-resources/objectname_loop.json`.
- Corrections recorded: completion modal = OS window not overlay; "Go to Recover" lands in results
  (destination dialog only via sub-selection under the free limit); 1,677→1,710 QSS targets.

Open for next session: scripted clicks INSIDE the results view (post-Go-to-Recover) for filter
dropdown / Type-tab switch / preview-window captures; the 304-owner loop can extend the remaining
Qt-kind-context attributions via enclosing-ctor analysis; repair-wizard dynamic capture (separate
launch path EUFileRepair).
