# 34 — Results-View Chrome Contracts: CNavigateBar (Toolbar) + CBottomArea (Status Bar)

**Sources**: moc stringdata + slot decodes (vtable→metacall chains), decompiled bodies, runtime telemetry (artifact 30 §5 — `bottomarea.cpp:838/856` vendor-source-confirmed), objectName loop census
**Role**: The two chrome widgets framing the results view — the navigation/search/filter toolbar on top and the scan-status/auto-recover/buy-guide bar at the bottom — completing the results-phase widget census around the filter system (artifact 31) and the tree/list hub (CRightContent).

---

## 1. CNavigateBar — the toolbar (50-string moc surface)

The bar directly under the title bar (dynamically visible in every scan/results capture: back/up/home cluster, address breadcrumb, list-toggle, Filter funnel, search field):

```
signals (11):  sigListIconChanged          sigShowSearch            sigShowFilterBar
               sigSwitchSearch             sigAddressChanged        sigClearSearch
               sigClearSearchFilter        sigGetRightIndex(int&)   sigSelectRightIndex
               sigSearchResetSort          sigIconButonDefaltChange(isIcon)
slots (~19):   onAddressChanged            retranslate              IsFilterBtnToggled(bool&)
               onSwitch2Search             resetSearchText(bSwitch2Search)
               onBeforeFreeze              onFilterChanged(AdvanceFilterCondition)
               clearSearchEdit             slotResizeFilterTips     onBtnClicked(id)
               onSearchBtnClicked          onSearchTextChanged(str) onSearchEditChanged
               onSearchFocusout            onIconListBtnClicked     onPageChange(bSearch)
               onBtnTranslate              onBtnMouseEnter          onCloseExpendFilterBtn(bClickTag)
               onFilterNltClickedSearch    onUpdateRootPathName(strNavigate)
               slotNasReconnectVolume      slotNasVolumeMenuClose
               onDelayChangeIconListBtn    onChangeHomeBtnName(bShowSearch)
```

Decoded behaviors:

- **onFilterChanged(AdvanceFilterCondition)** — CNavigateBar is the SECOND receiver of the filter bars' signal (after CRightContent, artifact 31 §7): it re-renders the breadcrumb/search context for the filtered set and can clear the search text (`clearSearchEdit`, `sigClearSearchFilter`).
- **onBeforeFreeze** — the toolbar participates in the coordinated Freeze protocol (screenshot-safe repaint before the sink grabs pixmaps; artifact 20 §4).
- **navigate_direction_button[index=0..3]** (objectName-loop census: QButtonGroup direct) — the ◀▲⌂ + one more directional buttons, styled per-index by QSS with back/up/go icon sets (`Resource/Path/{back,go,up}_btn_{nor,pre,hov,dis}.svg`).
- **NAS integration**: `slotNasReconnectVolume` + `slotNasVolumeMenuClose` + `onUpdateRootPathName(strNavigate)` — the toolbar hosts NAS volume reconnect during NAS-result browsing (matches the NAS connector-triple architecture, artifact 15).
- **Search-family state machine**: `onSearchBtnClicked` / `onSearchTextChanged(str)` / `onSearchEditChanged` / `onSearchFocusout` / `onSwitch2Search(bSwitch2Search)` — the 9-search-type surface (artifact 09) plus the search↔filter interplay (`sigSearchResetSort`, `sigClearSearchFilter`).
- **onIconListBtnClicked / onDelayChangeIconListBtn / sigIconButonDefaltChange** — the list⇄icon view toggle (top-right of the toolbar, visible in captures as the [≡] button; ties to CRightContent::sigListIconChanged).

## 2. CBottomArea — the status bar (15-string moc surface, telemetry-confirmed)

The bar at the bottom of the detail page ("Scan Completed, Files Found: 1,139,261 (147.04 GB)" + "Recover All ..." + the Auto-Recover toggle + Buy-guide):

```
signals (5):  sigMoveBuyGuideWnd        sigCloseBuyGuideWnd       sigShowOrHideGuideWnd
              sigChangeRecoverBtnState  sigScanFinished(iScanTypeChanged, iScanType)
slots (6):    slotBtnAutoRecover        slotDoAutoRecover         slotShowAutoRecover
              slotLostPartitonBegin     slotShowBuyGuide          retranslate
property:     TxtRecoverMargin
```

### 2.1 sigScanFinished(iScanTypeChanged, iScanType) — the telemetry anchor

The 2-arg emitter (FUN_140b68d40) matches the runtime log verbatim:

```
bottomarea.cpp, 838  nStatus=4, m_iScanType=3      <- quick pass finished
bottomarea.cpp, 856  nStatus=4, m_iScanType=4      <- advanced pass finished
```

Two emit sites in the vendor source (`E:\DRW\_drw_main\DRWIntelligentScan\QtDRWUI\DetailPage\BottomArea.cpp`) — the status-bar state machine fires the completion signal with (status=4, scanType) at each phase boundary; the bar then renders the final "Scan Completed, Files Found: N (S)" line.

### 2.2 The Auto-Recover flow (slots decoded)

- **slotDoAutoRecover** (FUN_1406a6260): sets the auto-recover button's (this+0x50) dynamic property `state := "disabled"` → QSS `[state=...]` switches its skin → calls the button's vtable+0x58 virtual with 0 → disables the companion widget (this+0x58) with `state := ""`. = auto-recover STOP/complete state.
- **slotShowAutoRecover** (FUN_1406a6370): if the button is hidden → show (vtable+0x58 with 1), `state := ""`, enable companion, fire the show-telemetry (FUN_1400ec7b0 → FUN_14012a8d0). = auto-recover offered when eligible results exist.

This is the "Auto-Recover" feature decoded in artifact 09 (settings UI) — here is its runtime controller: offered on completion, disabled while running/completed.

### 2.3 The Buy-guide window family

`slotShowBuyGuide` + `sigMoveBuyGuideWnd/sigCloseBuyGuideWnd/sigShowOrHideGuideWnd` — the floating purchase coach window that tracks the Recover button (the QSS `GuideWnd`/buy-guide targets + the yellow "Buy Now" in the title bar, artifact 17). The window MOVES with the recover CTA (sigMove...) — attention-funnel design.

### 2.4 slotLostPartitonBegin

Fires when the lost-partition deep-search phase begins — the status bar switches to the partition-search state (the "Deep Scan into lost partitions" coaching from artifact 08).

## 3. ObjectName/QSS cross-links (loop census)

- CNavigateBar region: `navigate_direction_button[index]`, `CAddressBtn`, `CIconListBtn`, `CNavigateThread`, search-edit family
- CBottomArea region: `CRecoveryBtn` (the Recover All CTA — exact-name match in the census), auto-recover/buy-guide targets
- The status-bar text (`TxtRecoverMargin` property) is styled via the property name in QSS

## 4. Cross-links

- Complete signal→slot wiring topology: `25-connect-wiring-graph.md` (722 pairs; CBottomArea/CNavigateBar edges included)
- Filter chain that feeds both bars: `31-filterbar-family-decode.md`
- Completion telemetry: `30-interaction-driver-ground-truth.md` §5 (bottomarea.cpp lines)
- Freeze protocol: `20-moc-surface-sink-architecture.md` §4
- Status/scan-phase UX: `08-scan-phase-deep-dive.md`; recovery CTA funnel: `11-recovery-phase-funnel.md`
