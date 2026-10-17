# 31 — The Filter System Decode: CFilterButton Family → CFilterBar → CRightContent::onFilterChanged → CSetFilterThread

**Sources**: moc stringdata blobs (rdata), moc slot decodes (vtable→qt_metacall→qt_static_metacall chains), decompiled slot bodies (FUN_ addresses), connect() string-site mining, ctor map, dynamic telemetry (artifact 30 §5)
**Role**: The complete filtering pipeline of the results view — the toolbar the user sees after a scan ("Filter" funnel button + Type/Time/Size/Advanced dropdown buttons), how a click becomes a `CSetFilterThread` that refilters the model, and the two-mode (Path/Type) filter-bar duplication.

---

## 1. Class inventory (RTTI census)

| Class | vtable methods | Base | Own moc methods | Role |
|---|---|---|---|---|
| CFilterButton | 66 | QPushButton | 11 (shared) | The dropdown filter button base |
| CTypeFilterBtn | 66 | QPushButton | 0 (**shares CFilterButton's moc**) | Type filter (Documents/Pictures/Video…) |
| CTimeFilterBtn | 66 | QPushButton | 0 (shared) | Time filter (Today/3 days/week…) |
| CSizeFilterBtn | 66 | QPushButton | 0 (shared) | Size filter (<128MB/<1GB/<5GB…) |
| CAdvancedFilterBtn | 66 | QPushButton | 0 (shared) | Advanced (combo condition) |
| CFilterLostFilesBtn | 56 | QPushButton | 1 (resetBtn) | "Lost files only" toggle |
| CFilterBar | 52 | QFrame | 12 | The aggregation bar (owns the 4 buttons + AI btn) |
| CFilterGuideWnd | 53 | QWidget(window) | 3 | First-use filter coach overlay |
| CFileTypeFilterTabBar | 52 | QWidget | 5 | Type-mode tab bar (checkbox tabs) |
| CFilterCountFrame | 52 | QFrame | 1 | Per-filter count badge |
| CFilterNoRlt | 60 | — | — | "No result after filter" empty-state |
| CAdvanceFileFilterMgr | 2 | IAdvanceFileFilterSink | 5 | Condition manager (3 slots) |
| CSetFilterThread | 12 | QThread | 1 (sigFinished) | The refilter worker |
| CRecoveryFilter | 8 | IRecoveryFilter | — | Recovery-time filter (core side) |

**Key structural finding (precision correction)**: CTypeFilterBtn/CTimeFilterBtn/CSizeFilterBtn/CAdvancedFilterBtn have **zero own moc metadata** — they are pure label/menu specializations of CFilterButton (one shared moc surface, static metacall `FUN_140b6eb20`, metacall `FUN_140b6e9b0`). The moc compiler emitted ONE QMetaObject for the family; each subclass only overrides `buildMenu()`-style virtuals. Same pattern as the repair items (artifact 32) — the codebase systematically uses template-sibling specialization instead of per-class moc.

## 2. CFilterButton — the shared moc surface (stringdata-validated)

```
signals:  sigValueChanged(bool checked, int actionId, bool flag, QVariant)
          sigCustom()          sigBtnPressed()       sigMenuHide()
          sigUpdateCount(int)
property: nCount
slots:    onActionChanged()   onReceiveData(int&)   onBtnClicked()
          resetItemCount()    retranslate()          slotUpdateCount(int)
types:    AdvanceFilterCondition  clean_btn_resource  long_string_languages
```

### 2.1 onActionChanged (FUN_1406fb510, 2730 bytes) — the menu-selection handler

Decoded body: `QObject::sender()` → `__RTDynamicCast(..., QCheckBox)` (the menu items are **checkable QCheckBox-backed QActions**) → `QPushButton::menu()` → walk `QWidget::actions()` → resolve the toggled action → `QAction::data().toInt()` → **special action-IDs `0x1a (26)`, `0x105 (261)`, `0x1006 (4102)`** bypass when the check-state is Qt::Checked(2) → emit via `FUN_140b6f3b0(this, param_2==2, actionId, flag, QVariant)` = `sigValueChanged(checked, actionId, …)`.

The three special IDs are the "select-all / lost-files / custom-range" entries that re-assert rather than toggle — visible behavior: those menu entries stay active while others behave as radio-toggles.

### 2.2 onBtnClicked (FUN_1406fb820) — the popup

`QCursor::pos` + `QRect::contains` + `mapToGlobal` — geometry-gated menu popup under the button (hover-guard: only opens if the cursor is still inside the button rect).

### 2.3 resetItemCount (FUN_1406fb920, 2342 bytes)

`QLabel::setText(QString("%1").arg(count))` — the count badge on the button face; resets on filter clear.

## 3. CFilterBar — the aggregation hub (12 own moc methods)

```
signals:  sigFilterChange(const AdvanceFilterCondition&, bool bClear, bool bForce)   <- 3-arg form
          sigEnterLeaveAiRecommedBtn(bool enter)
slots:    retranslate()  clearFilter(bool bClearSearch, bool bForce)
          onValueChanged()  onCustom()  onMenuHide()      <- shared body FUN_140702290
          onBtnAiRecommendClicked()  onBtnClickReset()
props:    is_view_result  buttonSpacing
```

### 3.1 onValueChanged/onCustom/onMenuHide (FUN_140702290, shared body)

Decoded: writes checked-state to the **4 child buttons at this+0x38/0x40/0x48/0x50** (Type/Time/Size/Advanced) → sets the AI button's dynamic property `state` to `""` (`FUN_1409ff5e0(aiBtn, "state", QVariant(""))` — the QSS `[state="..."]` selectors from the census key off exactly this property) → copies the **0x48-byte (72) AdvanceFilterCondition** struct → emits `sigFilterChange(condition, 1, 1)`.

### 3.2 clearFilter (FUN_140701fa0, 2215 bytes) — contains tr("Reset Filter")

The reset path: clears the 4 buttons, resets search, emits sigFilterChange with the empty-condition + bClear=true. The "Reset Filter" string is the tooltip/menu text (verified in qt_strings_english).

### 3.3 The AI Recommend button

`onBtnAiRecommendClicked` (FUN_140704040) checks `QObject::sender` + `QWidget::isVisible` then funnels into the AI recommendation flow; `sigEnterLeaveAiRecommedBtn(enter)` feeds the toast/hover state. Dynamic ground truth (artifact 30 §2): the **"AI Recommend available." toast pops at results entry**, and the purple AI FAB persists — this bar is where that funnel is wired.

## 4. TWO filter bars — one per tree mode (lazy, hidden until mode switch)

The results-content builder `FUN_140720f90` (invoked from CDetailPage's construction chain `FUN_1406b86e0`) constructs **two CFilterBar instances**:

```
local_9a0 = CFilterBar::CFilterBar(parent, 0, 0)   -> this+0x68   (mode 0 = Path view)
local_990 = CFilterBar::CFilterBar(parent, 1, 0)   -> this+0x70   (mode 1 = Type view)
QWidget::hide(both)                                 <- both hidden at construction
connect(this, "2sigShowFilterBar(bool)", bar_i)     <- shown on demand per mode
connect(bar_i, "2sigFilterChange(const AdvanceFilterCondition&,bool,bool, bool)",
        this, SLOT 0x140dfd4a0/0x140dfd520
        = "1onFilterChanged(const AdvanceFilterCondition&,bool,bool,bool)")
```

The 4-arg signal form (added `bool` vs the moc-declared 3-arg) is the cross-object published signature. Both bars report to the SAME parent slot — the results-content widget — which forwards into CRightContent.

## 5. CRightContent::onFilterChanged (FUN_14072b730) — the terminal handler

Decoded body:
1. `FUN_140725570(this)` (IsSelecting) → pick the active model: `this+0x38` vs `FUN_140725a10(this)`
2. Guard: filter bars present (`this+0x68` / `this+0x70`) AND `param_3` (bApply)
3. Copy the 0x48-byte condition; `FUN_14083a5d0()` → `FUN_1406c3e00()` = parent context
4. **`local_178 = CSetFilterThread::CSetFilterThread(0x60 bytes, context, condition, nodeCount)`** (ctor FUN_14072e290)
5. Telemetry: `FUN_1401b3ec0()` (thread-safe global singleton) → `FUN_1401b61f0(mgr, modeIndex)` → virtual at +0xe0 (the log/telemetry virtual — the "AdvanceFilter current time is…" line in the runtime log)

### The sibling: onCheckFinished (FUN_14072b580)

Spawns **CCheckNodeThread** (ctor FUN_140ad1100, 0x28 bytes) with `QThread::start(thread, 7)` = **TimeCriticalPriority**, connect `"2sigFinished(bool)" → "1onCheckFinished(bool)"`. This is the recoverability-grading pass — dynamically corroborated: "Recovery ability matched=0, total=127" + "Recoverability finish match.." fire on scan completion AND re-fire on Go-to-Recover (artifact 30 §5).

## 6. CSetFilterThread::run() (FUN_14072f8c0) — the refilter worker

```
mgr   = global_singleton()                      (FUN_1401b3ec0, MSVC init-guard)
model = mgr->modelForView(modeIndex)            (FUN_1401b61f0 switch:)
          case 0 -> pathView model    (FUN_1401d4920(...)+8)
          case 1 -> typeView model    (FUN_1401d4930(...)+8)
          case 2 -> search model      (FUN_14031c410()+8)
          case 3 -> FUN_1402b8530()   case 5 -> ...
if (conditionIsEmpty(cond))  cond = NULL         (FUN_1406f91d0: all 7 enable-bits set -> empty)
model->vtbl[+0x10](cond)                          <- the SetFilter virtual
if (modeIndex == 1)  model2->vtbl[+0xf0](0, 1)    <- classify-mode extra application
emit sigFinished(modeIndex == 2)                  (FUN_14072f70)
```

- **AdvanceFilterCondition = 0x48 bytes with 7 sub-condition groups** (enable-bits at dword offsets 0,4,8,32,60,64 + one more) — matching the QSS/config decode of 7 filter dimensions (type/time/size/state/tag/path/search).
- Empty condition → NULL → "clear filter" (no thread work; the model resets).
- The **model's +0x10 virtual = SetFilter**; +0xf0 = the classify (Type-view) refilter — two virtual entries per model class.
- `sigFinished(bFromSearch)` → `CRightContent::onFilterFinished` → UI refresh (`onDoUpdateNewListUI(bForce)` family).

## 7. The wiring map (connect-storm around the filter, from CDetailPage's builder)

```
CFilterButton[4] --sigValueChanged(bool,int,bool,QVariant)--> CFilterBar slots (+0x30/+0x38 receivers)
CFilterBar(mode0) --sigFilterChange(3-arg)--> results-content slotUpdateCount  (badge refresh)
CFilterBar(mode1) --sigFilterChange(3-arg)--> results-content slotUpdateCount
CFilterBar(both)  --sigFilterChange(4-arg)--> parent onFilterChanged ---------> CRightContent
CRightContent --sigFilterFinished--> ... --sigShowFilterBar(bool)--> bars
siblings: sigClearSearch / sigShowSearch / sigSwitchNavigate(bool,bool)
          sigIsFilterBtnToggled(bool&)  sigLeftTreeClickTag(bool)
          sigFilterNltSearchClicked()   sigUpdateNavigateBarPath(QString,QString)
          sigGetRightIndex(int&,int&)   sigSelectRightIndex(int,int)
          CUISink singleton --sigAboutToGrabPixmap--> this       (screenshot-safe repaint)
```

**Filter → scan interplay** (runtime-verified): at scan start the log prints `FilterPath=` + `CDoScanPartition::PushFolderFilter:84` + `AdvanceFilter current time is :...` — the filter condition is pushed INTO the scan controller, so pre-set filters also constrain incremental tree insertion (not just post-hoc list filtering).

## 8. CAdvanceFileFilterMgr (ctor FUN_140361c00)

Inherits `IAdvanceFileFilterSink`; owns **3 condition slots** (param_1[1..3], each delete-freed) — one per view mode (path/type/search), i.e. the persistent "last filter per mode" store that re-applies when the user switches tabs. Dynamic property `state` + the QSS `[state=...]` selectors complete the visual state machine.

## 9. Dynamic corroboration (artifact 30)

- Filter toolbar visible in all scan/results captures ([≡][Filter][Search files or folders] cluster at y≈70 — pixel cluster x=710-801).
- Path/Type tabs at (140/234, 117) — the two filter bars' mode switch, one visible at a time.
- The scripted Filter click hit the celebration window instead (§4 of artifact 30) — the toolbar is *under* the modal; post-dismiss the bar is live.

## 10. Cross-links

- **The complete connect() wiring graph (parallel-session artifact): `25-connect-wiring-graph.md`** — 722 signal→slot pairs fully resolved; the filter wiring in §7 is one subgraph of it, and its independent RVA-truncation resolution (`0x40ddfe68` → `0xddfe68`) cross-validates the method-string technique used in §4
- Dispatcher-decode methodology + Sink architecture: `20-moc-surface-sink-architecture.md`
- CRightContent census (82-method hub): `22-rtti-class-census.md` §CRightContent
- Results-phase UX (filter surface inventory): `09-results-phase-deep-dive.md`; filtering config layer: `../config-files/filtering-priority--config-layer.md`
- The recoverability pass runtime evidence: `30-interaction-driver-ground-truth.md` §5
- Repair-row template-sibling pattern (same moc-sharing design): `32-repair-item-rows-decode.md`
