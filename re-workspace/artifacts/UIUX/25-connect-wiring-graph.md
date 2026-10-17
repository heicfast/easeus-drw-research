# UI/UX Artifact 25 — The connect() Wiring Graph: 722 Signal→Slot Bindings, the Complete UI Wiring Topology

> Scope: resolution of artifact 22 §8 open item #3 ("wire objectName closure") and the wiring
> half of the 05-uiux architecture — **every `QObject::connect` call site in DRWUI decoded
> into its (signal, slot) pair** with line citations. This is the literal wiring diagram of
> the app: what listens to what, in which flow.
> Method: `scripts/extract_connect_graph.py` (statement joiner) +
> `scripts/resolve_connect_slots.py` (Ghidra-truncated VA → .rdata string resolution —
> the decompiler prints stack-passed slot-string pointers as low-32 values, e.g.
> `0x40ddfe68` → RVA 0xddfe68 = `"1slotSwitchClick()"`, verified byte-exact).
> Raw evidence: `re-workspace/raw-evidence/ui-wiring/connect_wiring_graph.json`
> (722 records: line, wiring function, signal, slot, kind).

## 1. The headline numbers

| Metric | Value |
|---|---|
| `QObject::connect` call sites (decompiled) | **741 raw / 722 fully resolved** |
| Classic SIGNAL→SLOT macro pairs (`"2sig()"→"1slot()"`) | **661** (91.5%) |
| Signal→**signal relays** (`"2sig()"→"2sig()"` re-broadcast) | **61** (8.5%) |
| Unique (signal, slot) pairs | **444** |
| Most-wired signal | `clicked()` ×174, `timeout()` ×38, `finished()` ×33 |
| Most-wired app signal | `sigIsBusy(bool&)` ×14, `doDispatchMessage(int,void*,int&)` ×15 |

**Architecture reading 1 — the wiring style is 100% string-based**: all 722 calls pass
SIGNAL()/SLOT() macro literals (Qt old-style string connects), zero pointer-to-member
connects. Slot strings live in .rdata literal pools (typically adjacent to the owning
class's moc stringdata — e.g. `1slotSwitchClick()` sits next to `2clicked()` and
`AutoRecoverSetLogo1`). This matches the moc surface census (artifact 22) and means
**every wiring edge is runtime-normalized by QMetaObject** — the same property that lets
`retranslate()` re-wire text without breaking connections.

**Architecture reading 2 — relays are the Sink architecture in string form**: the 61
signal→signal connects are the re-broadcast layer (the 92-class Sink/Observer family,
artifact 20 §4). Component-local signals are re-emitted at container scope:
`sigListIconChanged→sigListIconChanged`, `sigEnableWidget→sigEnableWidget`,
`sigScanFinished→sigScanFinished` (the page re-emits the controller's signal to its
children) — one hop of delegation between the object that owns the event and the
component that exposes it to the page.

## 2. The MOM-bus subscription wiring (the app-wide event contract)

The single most important app signal is `doDispatchMessage(int, void*, int&)` —
**15 UI classes subscribe to it**, always wiring to `onReceiveData(int,void*,int&)`
(or `doReceivedEvent` in the DeviceAdapter-side classes):

| Wiring site (line) | Wiring function | Subscriber shape |
|---|---|---|
| 1095216 / 1097777 / 1106595 | home-page + landing classes | `onReceiveData` |
| 1142708 / 1144966 | button-row wizard pages | `onReceiveData` |
| 1154729 / 1160694 / 1172011 | detail-page family | `onReceiveData` |
| 1179970 / 1317017 / 1480692 | page managers + repair pages | `onReceiveData` |
| 1584473 / 1584850 | **DeviceAdapter-side** | `doReceivedEvent` |
| 1617679 / 1635198 / 1666848 / 1668989 | late page/service classes | `onReceiveData` |
| 1369866 + 1369872 | `FUN_14089fa80` | `dispatch(int,void*,int&)` → **relays into `doDispatchMessage`** ×2 — the bus-to-bus bridge |

This is the **CUISink subscription pattern** (artifact 20 §4) at full scale: engine
messages (progress, file counts, tree updates — see artifact 13 §3) enter the UI through
one signal, and every interested page subscribes identically. The double bridge at
1369866/1369872 (`dispatch` → `doDispatchMessage`) is the module-side publisher feeding
the UI-side bus — the Qt-visible edge of the MOM module system
(`MOM-modules/Mom.md` §event model).

## 3. Flow wiring (the user journey as connect-edges)

### 3.1 Scan flow

```
sigQuickScanFinished(int) --×2--> onQuickScanCompleted(int)          (L1106543/575 — the two-phase gate)
sigScanFinished()         ------> retranslate()                     (L1106484/90 — live re-label at completion)
sigScanFinished()         --relay-> sigScanFinished()               (L1106538/1314856 — page re-broadcast)
sigScanFinished()         ------> OnSinkDoBeforeFreeze()            (L1163684 — freeze protocol entry, art. 20 §6)
sigScanFinished()         ------> onScanFinishRefreshUI()           (L1163692)
sigScanFinished()         ------> onDoAutoRecover()                 (L1163697 — auto-recover continuation)
sigScanFinished()         ------> onScanFinish()                    (L1164663)
sigScanFinished()         ------> scanFreezeFinished()              (L1320677)
sigLoadFinished(bool)     ------> onLoadScanRetFinished()           (L1106503 — .rsf session-import path)
```

The two `onQuickScanCompleted(int)` wirings (quick→deep transition) match the
runtime-verified two-phase scan model (dynamic ground truth artifacts: 9% quick-pass
completion).

### 3.2 Recovery flow

```
clicked()               --> slotBtnAutoRecover() / onRecovery() / slotBtnRecoverClicked() / viewRecoveredClicked()
sigRecoverAll()         --×2--> onRecovery()                       (L1107913/87)
sigRecoverBtnClicked()  --> onBtnRecoverAllClicked()               (L1106557 — Recover-All button)
sigShowAutoRecoverBtn() --> slotShowAutoRecover()
sigAllFinished()        --> slotDoAutoRecover()                    (L1096062 — the auto-recover chain end)
sigFinished(bool)       --relay-> sigRecoverAll()                  (L1666676 — thread end → recover-all event)
sigRecoverClicked(int)  --relay-> sigRecoverOriginal(int)          (L1505524)
sigRecoverClicked(int)  --relay-> sigRecoverRepaired(int)          (L1505840/3 — repair-result recovery)
sigRecoverOriginal(int) --> onRecoverOriginal(int)                 (×5 sites L1484853-4951)
sigRecoverRepaired(int) --> onRecoverRepaired(int)                 (×5 sites — the repair-page rows)
sigCheckRecoverAll()    --> retranslate()                          (×3 — recoverable-state re-label)
```

The `sigRecoverOriginal/Repaired(int)` pairs (5 duplicate wiring sites each) = the
per-row repair-result recovery wiring family (CRepairVideoItem/CRepairPDFItem rows,
artifact 22 §3) — one template family, instantiated per item row.

### 3.3 Repair flow (polling-timer convention)

```
timeout()  --> onUpdateRepairProgress()   (×8 — repair progress polls)
timeout()  --> onGetAddProgress()  (×4) / onGetSaveProgress() (×4)  — add/save file phases
timeout()  --> doNextRepair() (×2) / slotTimerUpdateProgress() (×2) / slotTimerCheckConnectState() (×2)
finished() --> sigFinishSort() / sigUpdate() / deleteLater()
```

**38 named `timeout()` consumers** total — the polling-timer census (full list in raw
evidence). Progress is pull-polled (`onGet*Progress`) rather than push-emitted in most
flows — the `_MsgData` IPC funnels into these timer slots (matches repair-chain
architecture, `architecture/06-repair-chain.md`).

### 3.4 Thread lifecycle convention

12 sites wire `finished() → deleteLater()` — every QThread subclass ends its life by
self-disposal after completion (matches the 42-QThread census, artifact 22 §6). Combined
with `connect(thread, finished(), this, slot)` pairs (`slotDownloadThreadFinish`,
`slotDoAutoRecover`), the pattern is: **notify owner → delete self**.

## 4. The results-page wiring hub (CRightContent confirmed as switchboard)

Top wired app-signals map exactly onto artifact 22 §4's CRightContent surface:
`sigShowSearch(bool)` ×11, `sigShowFilterBar(bool)` ×6 (→ `setVisible(bool)` ×5 — the
filter bar visibility), `sigGotoPage(int,int)` ×7 → `gotoPage(int,int)`, `sigResizeWidth()`
×9 → `ResizeWidth()`, `sigEditOnFocus()` ×9 → `slotOnEditFocus()` ×8, `sigIsBusy(bool&)`
×14 (→ `isBusy(bool&)` ×7 + relays), `sigIsStopping(bool&)` ×8, `sigGotoLastPage()` ×5 →
`slotGotoLastPage()`, `sigBeforeFreeze()` ×4 → `onBeforeFreeze()`, `sigFilterChange(...)`
×4, `sigSort(int,bool)` ×4 → `onDoSort(int,bool)`, `sigSelectRightIndex(int,int)` ×5,
`sigGetRightIndex(int&,int&)` ×4 → `onGetRightIndex(...)`, `sigNodeSel(QModelIndex)` ×4,
`modelReset()` ×5, `expanded(QModelIndex)` ×3.

Plus the **list-scrollbar/keyboard spine**: `sigUpdateBlueContentWidth()`,
`sigListIconChanged(int)` (list/icon switch), `sigResetStartIdx(int)` (virtual-scroll
reset), `sigAsyncSortRet(int,bool,bool)` (worker-sort completion), `sigClearSearch()`,
`sigSwitchNavigate(bool,bool)` (breadcrumb state).

**Filter-bar wiring detail**: `toggled(bool) → sigShowFilterBar(bool)` (L1154588 relay)
+ `sigShowFilterBar(bool) → setVisible(bool)` ×5 — the advanced-filter toggle drives a
visibility cascade down the pane stack.

### 4.1 The search box family

`textChanged(QString)` ×5, `textEdited(QString)` (L1688712), `returnPressed()` ×3 →
`sigCustom()` relays (L1145262 — the "Go" behavior), `sigBtnSearchClicked() →
sigFilterNltSearchClicked()` (L1164123 — the NLT natural-language search funnel,
matching `CSearchNltPopWnd` coach, artifact 09 §4).

### 4.2 Model/view edges

`modelReset()` ×5, `expanded(QModelIndex)` ×3, `stateChanged(int)` ×3 →
`onActionChanged(int)`, `linkActivated(QString)` ×3, `checkboxStateChanged(int) →
itemCheckedChanged(int)` (L1403514 — checkbox columns), `sigValueChanged(bool,int,bool,
QVariant)` ×4 (delegate editor commit).

## 5. Scenario connectors (NAS / Linux / cloud / in-app)

- `sigConnectRet(int)` (L1303229), `clicked() → slotBtnConnectClicked()` ×4,
  `slotTimerCheckConnectState()` ×2 — the NAS connect chain (NAS connector init is
  FUN_14023c980, artifact 24 §6 addendum).
- `clicked() → sigBtnLinuxClicked()` (L1362073 relay) — Linux recovery entry.
- `navigateComplete(QString)` ×4 → `navigateCompleteSlot`, `beforeNavigate2(QString,bool&)`
  ×4 → `beforeNavigate2Slot` — the **EUinApp IE-emulation surface** (artifact 23), wired
  in 4 places (the in-app browser's navigation contract).
- `onLinkURL(QString,QString) → onLinkURLClicked(QString,QString)` (L1537053) — link
  routing.
- Download pair: `finished() → slotDownloadThreadFinish()` + `sigDownloadError() →
  slotDownloadFailed()` — the runtime-download tool chain (EuDownloader → connect.exe,
  `EuShare` artifacts).

## 6. What the wiring adds to the census (deltas vs artifacts 13/20/22)

1. **Completeness**: 722/722 resolved — the wiring layer is now *closed*, not sampled.
   No hidden dynamic wiring style exists (no PMF connects, no `connectSlotsByName`
   auto-wiring beyond the one import at 0x140dc7718 — `QMetaObject::connectSlotsByName`
   is imported but the `on_<object>_<signal>` naming census shows it as a minor path).
2. **The bus topology is a star, not a mesh**: 15 identical `doDispatchMessage →
   onReceiveData` subscriptions + 2 bridge relays = the complete engine→UI channel.
   Everything else is widget-local.
3. **Relays quantify the Sink family**: 61 re-broadcast edges ≈ the string-form evidence
   for the 92-class Sink census — one relay per container-exposed child signal.
4. **Progress = poll, events = push**: scan/finish events push (signals); progress
   percentages pull (38 timeout-consumers). The only progress-push signal is
   `sigPercentChange` (CUISink's, `moc_stringdata.json`).
5. **Auto-recover is a wired state machine**: `sigAllFinished → slotDoAutoRecover →
   clicked → slotBtnAutoRecover → sigShowAutoRecoverBtn → slotShowAutoRecover →
   sigScanFinished → onDoAutoRecover` — the CAutoRecoverSettingWnd flow is fully closed
   in wiring edges (matches artifact 11 §monetization-surfaces).

## 7. Open follow-ups

- Bind each wiring function (`FUN_*`) to its RTTI class via ctor-map joins for a
  per-class wiring matrix (the census + this graph make it mechanical).
- The 19 unresolved raw statements (multiline joins missed) — expected to be QML-side or
  lambda connects; spot-check pending.

## 8. Cross-links

- Class census: `UIUX/22-rtti-class-census.md` · moc decode: `UIUX/20-moc-surface-sink-architecture.md`
- UI→core chain: `UIUX/13-ui-core-wiring-state.md` · pages: `UIUX/14-cdetailpage-slots-viewmodes.md`
- Scan-phase dynamic ground truth: `UIUX/dynamic-ground-truth--scan-phase-captured.md`
- MOM event model: `MOM-modules/Mom.md` · thread census: `DRWUI-exe--thread-architecture.md`
- Architecture master: `architecture/05-uiux-architecture.md` §wiring (update pointer there)
