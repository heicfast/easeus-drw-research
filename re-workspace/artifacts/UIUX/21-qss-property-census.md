# UI/UX Artifact 21 — QSS Full Property Census (style.css, section-by-section)

> Scope: 05-uiux §7 open item #2 — full per-objectName property census of the master QSS, beyond
> the layout-only census (`qss_layout_census.txt`).
> Tool: `scripts/qss_property_census.py`; raw evidence:
> `re-workspace/reversed/ui-resources/qss_property_census.json` (per-target rule/property/state
> aggregation, 30 sections, color/image/widget/state censuses).
> Source: `og-codebase/style.css` — 20,802 lines, **2,805 rules, 11,929 declarations, 1,677 styled
> targets, 777 unique image assets**.

## 1. The stylesheet's shape

| Metric | Value | Reading |
|---|---|---|
| rules / declarations | 2,805 / 11,929 | avg 4.3 props per rule — terse, atomized rules |
| styled targets | 1,677 (#objectNames + widget classes) | every named widget is themed |
| targets with interaction states | 453 (27%) | hover/pressed/disabled/attr-state variants |
| unique image assets referenced | 777 | `url(Resource/...)` — RCC asset surface |
| most-referenced asset | `Resource/WndShadow/shadow.png` (21×) | the universal window shadow |

**Property-type census (top 15 of 60+):** `min-height` 1239 · `max-height` 1118 · `min-width` 1036 ·
`color` 921 · `max-width` 847 · `font-size` 752 · `background-color` 594 · `background` 579 ·
`border-radius` 472 · `border` 430 · `font-family` 388 · `font-weight` 376 · `background-image` 290 ·
`image` 287 · `border-image` 201.

Reading: **size discipline dominates** — 4,240 of 11,929 declarations (36%) are min/max geometry,
i.e. the layout is *encoded in the stylesheet*, not in code layouts; the binary's moc/vtable layer
(artifact 20) handles behavior while QSS carries the metrics. Color+background together = 2,094
(18%); typography = 1,516 (13%).

**Widget-class census:** QLabel 1141 · QPushButton 873 · QFrame 342 · QWidget 134 · QDialog 72 ·
QLineEdit 49 · QProgressBar 37 · QScrollBar 32 · QMenu 29 · QCheckBox 24 — the styled-widget
pyramid confirms a QLabel+QPushButton-dominated custom UI (standard widgets mostly unstyled or
re-styled wholesale).

## 2. Section map (the 30 /*====SECTION====*/ markers)

| Lines | Section | Content notes |
|---|---|---|
| 3–562 | PUBLIC | global base (fonts, base colors, scrollbars) |
| 563–601 | BasicDialog | the dialog chrome shared system-wide |
| 602–940 | public pushbutton styleSheet | the button design system (nor/hov/pre/dis × primary/secondary/ghost) |
| 941–942 | **DENGFEI** (dev attribution) | — |
| 943–1440 | Title | title-bar system (close/min buttons, logo) |
| 1441–1592 | MainWindow | main window chrome |
| 1593–1970 | homepage | home/landing page tiles + drive rows |
| 1971–2035 | Dialog | generic dialog bits |
| 2036–2208 | recover progress | recovery progress UI |
| 2209–2358 | DrwLostDiskPage | lost-disk screen |
| 2359–2985 | Preview | preview subsystem chrome |
| 2986–3338 | activate window | license-activation UI |
| 3339–5356 | **PENGJUN** (dev attribution) | — |
| 5357–5479 | Aboutdlg | about box |
| 5480–5525 | **AboutApowerdlg** | **Apower-branded about dialog** (sister-product vestige) |
| 5526–5556 | AboutOriginaldlg | |
| 5557–5608 | ApowerActivatedlg | **Apower activation dialog** |
| 5609–5644 | Followusdlg | social follow-upsell |
| 5645–5660 | PirateVictimsTipDlg | anti-piracy shaming dialog (artifact 11 §trust) |
| 5661–6386 | PeripheralView | the peripheral/external-device home (artifact 07's landing) |
| 6387–6536 | CPopupMenu | context menus |
| 6898–8147 | CNasDeviceMgr | NAS manager (artifact 15) |
| 8150–8309 | Raid | RAID reconstruction UI |
| 8312–9250 | Auto_Recover | auto-recover settings (artifact 09 §6) |
| 9253–9713 | PERecovery | Partition Recovery UI |
| 9714–20802 | (marker says PERecovery; actually the modern surface) | ChooseDestinationPathDialog ×29 rules, SDCard items, MoreTools grid, TitleGift upsell frames, DrwAIDedupWindow, RecoverViewPushButton, LostLeftTreeView … |

Developer attribution: two developers (DENGFEI, PENGJUN) own the classic core; the 11,088-line
trailing range (53% of the file) is unattributed modern additions — the QSS grew 2× after the
original authors stopped sectioning.

## 3. Interaction-state census

- **Pseudo-states:** `:hover` 224 · `:pressed` 195 · `:disabled` 147 · `:checked` 22 · `:item` 32 ·
  `:indicator` 26 · `:chunk`/`:handle` (progress/slider innards) 29.
- **Attribute-states** (custom dynamic properties set from C++): `state=hover` 20 · `state=error` 13 ·
  `state=selected` 13 · `state=select` 12 · `state=sel` 10 · `state=disable` 9 · `state=dark` 7 ·
  `state=0/1/2` 22 · `state=checked` 6 · `state=long` 6 — the code drives sub-state theming by
  setting dynamic properties (reparsed QSS), e.g. destination-picker validation (`state=error`
  on invalid drive), and the classify tab strip (`CClassifyListHeaderView::onChangeCurQSS`,
  artifact 20 §5).

## 4. Color census vs. the documented palette

Top literal colors: `#ffffff` 206 · `#1a1a1a` 158 · **`#0560fd` 107 (brand blue — the single most
used brand token)** · `#616777` 92 · `#e7e7e7` 82 · **`#2978ff` 59 (a second interaction blue —
link/pressed tones)** · `#ffffffff` 55 · `#a0a6b1` 50 · `#1b212b` 47 · `#596680` 37 · `#2c385a` 32 ·
`#c1ccdf` 32 · promo/upsell golds `#FFCE76`/`#FFB025` · alert `#e74f4f` · hover blues `#f2f7ff`/
`#e9edf5`/`#e0eaff`/`#c4d7ff`/`#CCD8ED`.

Refinement to artifact 05's palette table: beyond the 4-step neutral ladder, the QSS shows a
**5-step blue tint ladder** for hover/selected backgrounds (`#f2f7ff → #e9edf5 → #e0eaff →
#c4d7ff → #CCD8ED`) and the interaction blue `#2978ff` as a distinct token from brand `#0560fd`.

**Typography placeholders:** `SEMIBOLD_FONT_FAMILY` ×334 vs `NORMAL_FONT_FAMILY` ×36 — the UI is
predominantly semibold (matches Segoe UI Semibold 600 base, artifact 05 §3); placeholders resolved
at load from config (CJK font stacks per-locale).

## 5. Most complex styled targets (rule-count leaders)

| Target | Rules | States | Notable |
|---|---|---|---|
| `#ChooseDestinationPathDialog` | 29 | 6 | destination picker — the recovery funnel's key dialog (artifact 11) |
| `#navigate_direction_button` | 20 | 3 | breadcrumb back/forward chrome |
| `#CShowContextMenuMenu` | 19 | 2 | context menu (incl. `[state="long"]` variant) |
| `QScrollBar` | 18 | — | the slim custom scrollbar system |
| `#navigate_address_button` | 14 | 4 | breadcrumb path segments |
| `#SDCardDeviceItemIcon` | 13 | — | per-type device icons from QSS |
| `#DrwMessageIconLabel` | 12 | — | message-box icon set |
| `#TitleGiftDlgRightFrame` | 12 | 3 | gift/upsell frame |
| `QHeaderView` | 11 | — | sortable column headers (ties to artifact 20 §5) |
| `#LostLeftTreeView` | 10 | **8** | richest state machine in QSS: the lost-files tree |
| `#DrwAIDedupWindow*` | 18 | — | AI dedup window family |

## 6. Findings summary

1. **Layout-in-QSS architecture**: over a third of all declarations are size constraints — the
   geometry lives in the stylesheet; per-objectName names are the contract between C++ (setObjectName)
   and theming. This is why the moc surface (artifact 20) is behavior-only.
2. **The file documents its own history**: dev-attributed sections (DENGFEI/PENGJUN) cover the
   classic surface; 53% of the file is unattributed modern growth (AI dedup, More Tools, gift
   frames, destination picker).
3. **Apower vestiges confirmed in QSS**: AboutApowerdlg / ApowerActivatedlg — shared codebase with
   the ApowerSoft product line (same engine lineage as ApowerRECOVER).
4. **Dual state mechanisms**: Qt pseudo-states for standard interactions + dynamic-property
   attr-states for app semantics (error/selected/dark/checked/long) — the C++ side re-polishes on
   property change.
5. `shadow.png` as most-referenced asset = every floating window draws the same 9-slice-ish shadow.

## 7. Open follow-ups

- Cross-reference the 1,677 objectNames against the 980 RTTI classes (artifact 03 §6) → which
  classes set which objectName (closure of the widget tree).
- 777 QSS-referenced assets vs. the ~7,400 RCC assets — which images are code-referenced only
  (icons switched imperatively, e.g. device-type icons).

Raw: `qss_property_census.json` (by_target: rules/props/states/attrs/widgets per target with line
numbers — the section-by-section index is inside as `sections`).
