# UI/UX Artifact 22 — RTTI Class Census: The 980-Class Object Map, Class by Class

> Scope: 05-uiux "remaining" item — DRWUI RTTI class-by-class depth. Every class in the RTTI/vtable
> map (artifact 03 §6) now carries a category, vftable, method count, and — for the 395 Qt-moc
> classes — a decoded **Qt base class + own moc method count** (the inheritance spine).
> Tool: `scripts/rtti_class_census.py` (vtable-map × qt_metacall scan with trampoline following).
> Raw evidence: `re-workspace/reversed/ui-resources/rtti_class_census.json` (all 980 records);
> `moc_slot_decodes.json` (14 fully-decoded dispatchers).

## 1. The census at a glance

| Partition | Count | Meaning |
|---|---|---|
| Total RTTI classes | **980** | the complete C++ object surface |
| MSVC/STL template instantiations (`?$…`) | 36 | runtime support (PPL tasks, STL streams) — not app logic |
| Qt-owned classes (`Q*`) | 44 | Qt itself present in RTTI (private/plugin classes) |
| **Application classes** | **900** | the DRWUI object model |

Category census (app classes): Widget/Control 149 · Window/View 128 · Sink/Observer 92 · Dialog 52 ·
Controller/Manager 49 · Thread/Worker/Task 43 · Model/Delegate 28 · Page 24 · Data/Node 18 · other 317.

## 2. The Qt inheritance spine (395 classes decoded)

Distribution of decoded `qt_metacall` base classes — **the framework-layer census**:

| Base | Subclasses | Reading |
|---|---|---|
| **QFrame** | 147 | the workhorse — most custom controls are QFrames (not QWidgets): frame semantics for QSS borders/radius |
| **QDialog** | 58 | the modal surface (see §4) |
| **QThread** | 42 | the app is thread-first: every long op is a QThread worker (artifact 13 §threads corroborated at RTTI scale) |
| QPushButton | 34 | custom button family |
| QObject | 27 | non-widget services (sinks, controllers) |
| QWidget | 18 | bare-widget controls |
| QLabel | 11 | rich labels |
| QStyledItemDelegate | 8 | custom row rendering |
| QTreeView / QListView / QStackedWidget | 6 / 4 / 5 | the view trio of the results page |
| QHeaderView / QLineEdit / QAbstractItemModel / QAbstractListModel | 1 / 4 / 4 / 4 | header + models |
| QMenu, QCheckBox, QProxyStyle, QScrollBar, QComboBox, QTableView, QTabWidget, QToolButton, QProgressBar | 1–3 each | styled-standard overrides |

## 3. The moc-surface leaderboard (own methods, not vtable size)

| Class | Own moc methods | Base | Role |
|---|---|---|---|
| **CRightContent** | **82** (24 signals + 58 slots, +1 read/2 write props) | QStackedWidget | the right-pane control hub of the results page — see below |
| CLeftTreeView | 47 | QTreeView | left tree (artifact 20) |
| CDetailPage | 44 | QStackedWidget | scan/results page (artifact 14) |
| CNavigateBar | 37 (11 signals) | QFrame | breadcrumb bar |
| CProgressArea | 29 (15 signals) | QWidget | scan progress panel |
| CRepairPDFRightItemsWnd / CRepairVideoRightItemsWnd | 24 / 23 | QFrame | repair wizards' item lists |
| CRepairPDFItem / CRepairVideoItem | 21 | QFrame | repair result rows |
| CFilterButton / CTypeFilterBtn / CTimeFilterBtn | 11 | QPushButton | the advanced-filter trio (shared 11-method surface — one template family) |
| CListHeaderView | 5 | QHeaderView | sortable header (artifact 20 §5) |

**Correction carried forward**: vtable size ≠ moc surface (artifact 20 §1). The true "largest
dispatchers" are CRightContent/CLeftTreeView/CDetailPage — the 96/97-entry vtable classes
(ArchivePreviewView, LostLeftTreeView, the CClassify* pair) are override-only specializations
(LostLeftTreeView moc=0, same pattern as CClassifyLeftTreeView).

## 4. CRightContent decoded (the missing hub, 82 methods)

`qt_metacall` FUN_140b73080 (base QStackedWidget, bound 0x52) → static FUN_140b731f0 (80 invoke
cases, 24 signal ptrs, 1 read + 2 write props). Stringdata @0x140eebf80 (95 strings).

**24 signals** — the right pane's full control contract: `sigListIconChanged` · `sigShowSearch` ·
`sigShowFilterBar` · `sigIsFilterBtnToggled(bool&)` · `sigCheckFinished` · `sigFilterFreezeFinished` ·
`sigLeftTreeClickTag` · `sigTabChange` · `sigClassifyChange` · `sigClassifyType` · `sigSortMenu` ·
`sigCheckBox` · `sigStopFreshTimer` · `sigTreeNodeTypeChanged` · `sigChangeRecoverBtn` ·
`sigClearTreeModel` · `sigFilterNltSearchClicked` · `sigFilterFinished` · `sigResize(QPoint)` ·
`sigFreezeRetSections` · `sigOpenFilePath(CFileNode*)` · `sigTryScanEntireDisk` ·
`sigIsStopping(bool&)` · `sigAiRecommedBtnEnter(bool)`.

**58 slots/methods** include: `retranslate` (live language switch!) · `onAutoSelect` ·
`onIconListSwitch` · `onRefreshIconViewSelectAll` · `onLeftTreeClickTag` · `onTabGroupClicked` ·
`onRefreshRightTimeout` · `onClassifyGroupClicked` · `onClassifyTypeClicked` · `onSortMenuChanged` ·
`onCheckBoxChanged` · `onBeforeClick` · `onDoUpdateNewListUI(bool bForce)` · `onStopFreshTimer` ·
`onShowNoResult(nWnd)` / `onShowFilterNoResult(bSearch)` / `onHideNoResult` · `slotTagTipsClose` ·
`slotTagWidthChange(bShow)` · `slotListInsertFinish` · `onTreeNodeChanged(QModelIndex)` ·
`onGetRightIndex(int&,int&)` … (full table in `moc_slot_decodes.json`).

Architecture reading: CRightContent is the **switchboard between CDetailPage and every right-pane
control** — the page's 42-slot dispatcher (artifact 14) fronts for this 82-slot hub that actually
owns tabs/classify/sort/select-all/no-result/AI-recommend/filter interactions. The QStackedWidget
base + `onDoUpdateNewListUI(bForce)` + `sigFilterFreezeFinished` shows it also participates in the
freeze protocol (artifact 20 §6) for filter rebuilds.

## 5. The dialog census (58 QDialog subclasses)

License/commerce: `ActivateResultDialog`, `CEnterLicenceDlg`, `CLocalRecoverBuyDlg`, `TitleGiftDlg`,
`SorryDlg` · Flows: `ChooseDestinationPathDialog`, `CAutoRecoverSettingWnd` · Coaching: `CSearchNltPopWnd`
(search-empty coach, artifact 09 §4), `BadSectorTipsDlg` · Repair: `FileRepairPreviewWnd`, `DiskBackup*`
· Social: `ShareDlg`, `FollowusDlg`, `PirateVictimsTipDlg` (anti-piracy, artifact 11) · Apower vestiges:
`AboutApowerdlg`, `ApowerActivatedlg` (artifact 21 §2).

## 6. Cross-cutting facts

1. **42 QThread subclasses** — the UI never blocks by design; every model mutation family
   (CSetClassifyThread, CSortNodeThread, CCheckNodeThread, expand-on-scroll worker — artifact 20 §7)
   is a dedicated thread class. (43 Thread/Worker-named classes, 42 confirmed QThread-based.)
2. **8 QStyledItemDelegate subclasses** — custom row painting for tree/list/archive previews
   (ArchivePreviewDelegate, CTreeListViewItemDelegate …).
3. **93 classes carry tr()-strings** (class_ui_map join) — the text-bearing surface; the other
   ~800 are layout/logic classes.
4. **The Sink/Observer family is 92+ classes** (13 decoded in artifact 20 §4) — the largest
   non-widget family, confirming the event-broadcast architecture is app-wide, not tree-local.
5. `PreviewDataSource`/`SearchDataSource`(+Adapter) have 84–104 vtable methods but NO Qt base —
   pure C++ data sources behind the preview/search stacks (candidate for a future deep-dive with
   the MOM modules).

## 7. How to read the census JSON

`rtti_class_census.json`: one record per class — `vftables`, `n_methods` (vtable size),
`category`, `qt_base` + `moc_slots` + `forward_only` (where decoded), `n_ui_strings`,
`n_geometry_calls`. Combine with `moc_slot_decodes.json` (per-slot body analysis for the 14
decoded dispatchers) and `moc_stringdata.json` (authoritative names).

## 8. Open follow-ups

- Decode the remaining >10-slot dispatchers (CFilterButton family, repair item rows — expected
  template-identical surfaces).
- PreviewDataSource/SearchDataSource non-Qt hierarchies (ITree/CTree/CTypeTreeV2 82-method family).
- Wire objectName closure: 1,677 QSS targets (artifact 21) ↔ 900 app classes ↔ ctor map.
