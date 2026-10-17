# UI/UX Artifact 20 — The Moc Surface: Left-Tree Dispatcher Decode + Sink Event Architecture

> Scope: resolution of 05-uiux §7 open item #1 ("decode the remaining large moc dispatchers") — with a
> **precision correction of its premise** — plus the Sink event-broadcast architecture that emerged
> from the decode.
> Tools: `scripts/moc_slot_decoder.py` (qt_metacall chain → static-metacall case table → per-slot body
> analysis; validated against CDetailPage ground truth) and `scripts/moc_stringdata_extract.py`
> (Qt5 stringdata blob extraction from DRWUI.exe rdata — authoritative method/property names).
> Raw evidence: `re-workspace/reversed/ui-resources/moc_slot_decodes.json`, `moc_stringdata.json`.

## 1. Precision correction: "96/97-slot dispatchers" were vtable sizes

The §7 open item listed `ArchivePreviewView 96, CClassifyLeftTreeView 97, CListHeaderView 96` as
"large moc dispatchers". Those numbers were **vtable entry counts** (artifact 03's census), not moc
slot counts. Actual moc surfaces (qt_metacall bound + stringdata method count, both decoded):

| Class | vtable entries | OWN moc methods | Base (metacall) | Finding |
|---|---|---|---|---|
| `CLeftTreeView` | 97 | **47** (13 signals + 34 slots) | QTreeView | the real dispatcher (below) |
| `CClassifyLeftTreeView` | 97 | **0** | inherits CLeftTreeView's | pure virtual-override specialization |
| `ArchivePreviewView` | 96 | **0** (forward-only metacall) | QTreeView | pure virtual-override class |
| `CListHeaderView` | 96 | **5** (4 signals + 1 slot) + 3 props | QHeaderView | small contract (§5) |
| `CClassifyListHeaderView` | 96 | **1** + 4 props | inherits CListHeaderView's | QSS-switching specialization |

Mechanism of proof: (a) `qt_metacall` decode — a forward-only body (`return QTreeView::qt_metacall(...)`)
proves zero own methods, because moc generates that exact body when a class declares no signals/slots/
properties; (b) no stringdata blob exists for `ArchivePreviewView`/`CClassifyLeftTreeView` in rdata
(moc emits no own stringdata for member-less classes); (c) `CClassifyLeftTreeView::qt_metacall`
(FUN_140bbd780) is a 200-char trampoline to `CLeftTreeView::qt_metacall` (FUN_140bbc240) — the
moc-generated inheritance form.

**Consequence for the class map**: the path tree and the classify ("Type") tree are ONE class
(`CLeftTreeView`) with a subclass that specializes behavior purely by overriding virtuals. The
polymorphic switch is `IsTypeTree()` — moc slot 21, `FUN_1406ce650`, bool return via the metacall
`*param_4` out-arg. This is why both trees share every signal/slot in §2–§3 and differ only in
rendering/behavior overrides (e.g. `CClassifyLeftTreeView` vtable[0..1] = its own mouse handlers).

## 2. CLeftTreeView — the 47-method moc surface (fully decoded)

`qt_metacall` FUN_140bbc240 (base `QTreeView`, bound `0x2f` = 47) → `qt_static_metacall`
FUN_140bbc3a0 (switch + if-chain hybrid, 11,078 chars). Method names from stringdata blob
@0x140f22778 (59 strings: classname + method names + parameter types/names + 1 property).
Slot indices cross-validated three ways: invoke-table position, signal-stub address in the
IndexOfMethod pointer comparisons, and in-body `SIGNAL()/SLOT()` macro literals (e.g. slot 14's
body contains `"1onExpandRoot()"`).

**13 signals (slots 0–12, declaration order = stringdata order):**

| Slot | Signal | Semantics (from consumers/emit sites) |
|---|---|---|
| 0 | `sigShowFreeze` | request to enter frozen display state (§6) |
| 1 | `sigBeforeFreeze` | pre-freeze notification (UI snapshot prep) |
| 2 | `sigFreezeDone` | freeze completed (consumed by CDetailPage `onFreezeDone`) |
| 3 | `sigSelectFileNode` (CFileNode*) | selection changed → file list update |
| 4 | `sigRefreshCache` | thumbnail/cache invalidation |
| 5 | `sigPathItemExpand` | path node expanded (lazy load trigger) |
| 6 | `sigCorrectCurIndex` | current-index correction after model mutation |
| 7 | `sigRecordVirtualIndex` | virtual (unrealized) index bookkeeping |
| 8 | `sigFreezeRetSections` | header section sizes preserved across freeze (shared name with CListHeaderView slot 3 — coordinated freeze) |
| 9 | `sigCloseQuickPartitonNotify` | dismiss quick-partition-found toast (note vendor typo "Partiton") |
| 10 | `sigCloseQuickScanNotify` | dismiss quick-scan toast |
| 11 | `sigExpandItemFromUISink` (CFileNode*) | UI-initiated expand request routing |
| 12 | `sigLostPartitionIconClicked` | lost-partition icon click → partition flow entry |

**34 slots/methods (13–46), decoded bodies:**

| Slot | Method | Body evidence |
|---|---|---|
| 13 | `onDataReady` | FUN_140a9b170, 325 ch |
| 14 | `onExpandRoot` | FUN_140a9b1c0 — **disconnects `rowsInserted` during expand** (`QObject::disconnect` + `"2rowsInserted(const QModelIndex &, int, int)"` + `"1onExpandRoot()"` literals) then `QTreeView::expand` — batch-insert guard |
| 15/16 | `expandTreeview`/`expandChild` | shared FUN_140a9b3a0 (QModelIndex copied by 24-byte loop; flag arg distinguishes: slot 16 passes literal `1`) |
| 17 | (QModelIndex method) | QModelIndex by-value + sub-call |
| 18 | `parentNode`-family | FUN_140a9b820 — **returns value via `*param_4`** (query method, callable via QMetaObject::invokeMethod) |
| 19 | `connectSink` | FUN_140a9baf0 (4,462 ch) — the subscription storm (§4) |
| 20 | `disconnectSink` | FUN_140a9bf20 (3,560 ch) — mirror-image disconnect storm (`"1OnSinkRefresh(bool)"`, `"1OnSinkRefreshRoot()"`, … literals) |
| 21 | `IsTypeTree` | FUN_1406ce650 — bool query: **path tree vs classify tree** (the §1 polymorphic switch) |
| 22/23 | `OnSinkRefresh`/`OnSinkRefreshRoot` | small refresh entries |
| 24 | `OnSinkInsertNode` | FUN_140a9c2b0 + `QTimer::isActive` — insert with timer coalescing |
| 25 | `OnSinkDoBeforeFreeze` | FUN_140a9c310 (3,153 ch) — `QMessageLogger` debug `"DoBeforeFreeze:1"`…`":4"` trace points + `QWidget::window` — 4-stage freeze prep with logging |
| 26 | `OnSinkUnfreeze` | FUN_140a9c6d0 — `"Unfreeze:1"/"Unfreeze:2"` trace points |
| 27 | `OnSinkExpandItem` | FUN_140a9c860 — `QModelIndex::isValid` + `QTreeView::expand` |
| 28/29 | `OnSinkSelectItem`/`OnSinkRemoveItem` | small mutators (112/44 ch) |
| 30 | `OnExpandPathItem` | FUN_140a9c9f0 (1,741 ch) — QModelIndex ops + expand |
| 31 | `OnSinkExpandPathItem` | vector<CFileNode*> construction (FUN_1401d86f0) then FUN_140a9cba0 — **batch path expand** |
| 32 | `slotExpandItemFromUISink` | FUN_140a9dd70 — also referenced as functor target in connectSink (typed connection) |
| 33 | `onShowFreeze` | FUN_140a9dda0 (4,084 ch) — `selectionModel`/`clearSelection` + `QApplication::activeWindow` + `QObject::deleteLater` + emits `sigFreezeDone()`; debug `"onShowFreeze:1"/":2"` |
| 34/35 | `onSelFileNode`/`onSelFileNodeEx` | identical body FUN_140a9e290 (2,304 ch) — `currentIndex` + `setAutoScroll` + `QModelIndex::data` + `setItemsExpandable` toggling |
| 36 | `onCollapseItem` | FUN_140a9e550 — `setItemsExpandable(false)` + QModelIndex ops |
| 37 | `onExpandItem` | FUN_140a9e710 — currentIndex-based expand |
| 38 | `onRefreshCache` | FUN_140a9e950 — QModelIndex construction |
| 39 | `onIsScrolling` | FUN_140a9eac0 — **async expand-on-scroll** (§7) |
| 40/41 | `onSliderPressed`/`onSliderReleased` | 123/96 ch — scroll interaction guards |
| 42 | `onReceiveData` | FUN_140a9ecb0 — `QWidget::update` (repaint on data arrival) |
| 43/44 | `onFreezeDone`/`onCorrectCurIndex` | small state finalizers (132/44 ch) |
| 45 | `onRecordVirtualIndex` | FUN_140a9ed30 — currentIndex + `setAutoScroll` + `setItemsExpandable` |
| 46 | (currentIndex query) | FUN_140a9eec0 — currentIndex-based accessor |

Property: `tooltipInterval` (stringdata tail; no read/write props in metacall → used as plain
member, likely re-purposed from a Q_PROPERTY in an older build).

## 3. What the surface tells us (synthesis)

1. **The tree is a reactive subscriber, not a poller** — 13 of 34 methods are `OnSink*` handlers and
   the only "storm" methods are connectSink/disconnectSink. All data arrival flows through the Sink
   (§4); nothing in the tree queries the scan engine directly.
2. **Freeze/Unfreeze is a first-class UI protocol** (§6) — not an ad-hoc busy overlay: 7 dedicated
   methods/signals, 4-stage logged prep, selection cleared, done-signal fanout.
3. **Insert batching everywhere** — expand-root disconnects `rowsInserted` first (slot 14), insert
   coalesces with a QTimer (slot 24), scroll-expand debounces 1s (slot 39): the tree defends itself
   against the scan engine's high-frequency model mutations.
4. **Query methods are invokeMethod-callable** (slots 18/21/46 write results via `*param_4`) — the
   page/controller layer interrogates the tree through the metaobject system, not direct pointers:
   loose coupling between CDetailPage and the tree implementation.

## 4. The Sink event architecture (new finding)

`connectSink` (slot 19) decodes as: obtain global singleton via `FUN_140aed6f0` → `FUN_140aed7a0`,
then `QObject::connect(sink, SIGNAL(...), this, SLOT(...))` for every event, **preceded by a full
disconnectSink** (idempotent re-subscribe). The singleton factory:

```c
FUN_140aed6f0():  MSVC _Init_thread_header/_Init_thread_footer guard (thread-safe lazy init)
                  allocates 0x40 bytes → FUN_140aed7e0 ctor → caches in DAT_141be0280
FUN_140aed7e0():  QObject::QObject(this, QCoreApplication::instance())   // app-lifetime parent
                  this->vftable = CUISink::vftable
                  +0x10 sub-object init (FUN_140aed200), +0x28 sub-object init (FUN_140aed5d0)
```

**`CUISink` = the app-lifetime UI event hub** (QObject singleton parented to the application).
Its Qt signal catalogue (from the connect storm's SIGNAL literals):

`sigRefresh(bool)`, `sigRefreshRoot()`, `sigSelectItem(CFileNode*)`, `sigInsertNode(CFileNode*,CFileNode*)`,
`sigDoBeforeFreeze()`, `sigUnfreeze()`, `sigRemoveItem(CFileNode*)` (+ typed functor connections via
`QMetaObject::connect` wrappers FUN_140a9f420/FUN_140a9f2b0 targeting slot 32 and slot 27).

The **Sink family census** (vtable map + stringdata, all decoded this session):

| Class | moc methods | Signals | Role |
|---|---|---|---|
| `CBaskSink` | 3 | sigRefresh, sigRefreshRoot, sigScanFinished | base broadcaster (Bask = base-sink) |
| `CUISink` | (inherits CBaskSink surface) | + SelectItem/InsertNode/RemoveItem/Freeze family | app-lifetime hub the tree subscribes to |
| `CTreeviewSink` | 10 | sigExpandItem, sigSelectItem, sigInsertNode, sigDoBeforeFreeze, sigUnfreeze, sigRemoveItem, sigAboutToGrabPixmap, sigExpandPathItem(vector<CFileNode*>), sigFoundQuickPartitonNotify, sigRefreshLeftTree | tree-specific event surface |
| `CListviewSink` | 3 | (list-side trio) | list counterpart |
| `CPEUISink` | 2 | sigPercentChange, sigDeviceChange | Partition Recovery progress hub |
| `RecoverProgressUISink` | 2 | sigUpdateProgress(const IUIProgressInfo*), sigFinished | recovery progress events (typed `IUIProgressInfo` interface — MOM-style) |
| `SpyUserInfoUISink` | 6 | (user-info events) | telemetry/user-state |
| interfaces: `IPEUISink`, `IPreviewSink`, `ISpyUserInfoUISink`, `IPELogicSink`, `IAdvanceFileFilterSink`, `IWorkerSink` | — | pure C++ interfaces | the MOM-style observer contracts |

Architecture reading: the "Sink" family is DRWUI's **observer-layer for the MOM/service world** —
backend services emit through sink singletons; views subscribe on demand (connectSink) and
unsubscribe (disconnectSink) — the same aggregation/event pattern the MainModule MOM uses, surfaced
in the Qt signal world.

## 5. The header contracts (CListHeaderView family)

`CListHeaderView` (base `QHeaderView`, 5 methods + 3 properties):
- Signals: `sigSelectAll`, `sigResetSectionSizes`, `sigResetSectionNormalSizes`, `sigFreezeRetSections`
  — select-all propagation + column-size persistence + freeze coordination with the tree (same
  `sigFreezeRetSections` name as tree signal 8 — the coordinated freeze of §6 spans both panes).
- Slot: `onGetMinSectionWidth` (int& out) — minimum width query used for responsive column layout.
- Properties: `checkboxNameIntX`, `sortIconWidth`, `spaceingX` (read+write accessors
  FUN_140acfc70/90 + FUN_140bc5530/50) — pixel-metric tuning knobs for the checkbox column and
  sort indicator (note vendor typo "spaceing").

`CClassifyListHeaderView` adds one slot — **`onChangeCurQSS`** — plus properties `nTextWidth`,
`nIndex`, `arrowFirstPaddingLeft`, `arrowNormalPaddingLeft`: the classify tabs' header switches
stylesheet (QSS) on current-tab change, and its arrow padding differs first-tab vs normal — the
per-tab QSS theming hook for the type-classify tab strip.

`ArchivePreviewView`: zero moc surface; its 96 vtable entries are pure Qt virtual overrides
(mouse handlers in the 0x140964xxx region, paint/viewport logic). The archive preview's moc
surface lives on `ArchivePreviewWindow` (properties `previewPixDefSize`, `cursorPixmapZooin`,
`cursorPixmapZooout`, `cursorPixmapDrag` — the zoom/drag cursor system) and `ArchivePreviewModel`
(QAbstractItemModel invokables: index/row/column/parent/child/rowCount/columnCount/data).

## 6. The Freeze/Unfreeze protocol (consolidated)

From slots 0/1/2/25/26/33 + tree signal 8 + CListHeaderView signal 3 + CDetailPage's
`onBeforeFreeze`/`onFreezeDone` (CDetailPage stringdata [28]/[30]):

1. Something destructive starts (partition apply / recover-all) → `sigBeforeFreeze` broadcast.
2. Views run 4-stage logged prep (`DoBeforeFreeze:1..4`) — snapshot state, stop timers,
   `setItemsExpandable(false)`, `setAutoScroll(false)` (slots 34–36 bodies).
3. `sigShowFreeze` → `onShowFreeze`: `clearSelection()`, drop transient widgets
   (`deleteLater`), reference `QApplication::activeWindow`, then emit `sigFreezeDone()` —
   the frozen "shell" keeps the last rendered pixels while the model is unsafe underneath.
4. Column layouts ride along: `sigFreezeRetSections` (tree AND header emit it) — section sizes
   captured for restoration.
5. Operation ends → `sigUnfreeze` → `OnSinkUnfreeze` (2-stage, logged) restores interactivity.

This is a **coordinated UI freeze** across tree + list header + page — a locking protocol, not a
spinner: the results page deliberately freezes during model-destructive phases.

## 7. Async expand-on-scroll (slot 39 decode)

`onIsScrolling` (FUN_140a9eac0): `QTimer` @this+0x78 `setInterval(1000)` (1 s debounce);
condition check (FUN_140aa25d0); allocates a 0x18-byte functor-carrying `QThread` worker capturing
the view pointer (FUN_1406c3e00) and payload; `QObject::connect(thread, "2finished()", handler)`;
`QThread::start(thread, 7)` — **priority 7 = Qt::TimeCriticalPriority** — then cleanup. Scrolling
far into the found-file tree lazily expands nodes on a worker thread at time-critical priority so
deep-tree navigation stays responsive; completion re-enters the UI thread via the `finished()`
signal (queued connection).

## 8. Raw evidence map

- `moc_slot_decodes.json` — 11 classes: qt_metacall/base/slot-count/static-metacall/invoke table/
  signal-ptr table/property tables/per-slot body analysis (imports, strings, activate counts, sizes)/
  vtable override census with Qt-virtual inference.
- `moc_stringdata.json` — authoritative stringdata blobs (class + method/property/param names).
- Functions: metacall FUN_140bbc240 / static FUN_140bbc3a0 (CLeftTreeView); FUN_140b9e730
  (ArchivePreviewView forward-only); FUN_140bc34d0/FUN_140bc3640 (CListHeaderView);
  FUN_140bc3c60/FUN_140bc3dc0 (CClassifyListHeaderView); sink singleton FUN_140aed6f0/FUN_140aed7e0
  (CUISink ctor).
- stringdata VAs: CLeftTreeView 0x140f22778, CListHeaderView 0x140f27070,
  CClassifyListHeaderView 0x140f272b8, CTreeviewSink 0x140f2d9a0, CBaskSink 0x140f2d788,
  CPEUISink 0x140f01c90, RecoverProgressUISink 0x140f1e5d0, ArchivePreviewWindow 0x140f0cf98.

## 9. Corrections to prior artifacts

- Artifact 03 §6 / master doc §6 table: `CClassifyLeftTreeView 97 methods` row → re-label as
  "97 vtable entries, 0 own moc; virtual-override specialization of CLeftTreeView (47 moc methods)".
- Artifact 09 §3 "CClassifyLeftTreeView (+Controller/ViewModel) — the Type tree" → the Type/Path
  duality is virtual-dispatch (`IsTypeTree()`), not a separate class contract.
- Master doc §7 open item #1: resolved by this artifact (with premise correction).

## 10. Open follow-ups

- Decode `CTreeViewController`/`CClassifyRightListView`/`CClassifyRightIconView` moc surfaces (the
  classify right-pane pair) with the same tooling — expected small, same pattern.
- Trace `CUISink` emitters (who calls its signals — scan orchestrator? PartitionRecovery module?)
  to close the loop on the event source.
- `RecoverProgressUISink::IUIProgressInfo` — MOM-interface field layout (progress/percent/stage).
