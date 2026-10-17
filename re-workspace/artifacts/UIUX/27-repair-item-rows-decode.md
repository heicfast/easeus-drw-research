# 27 — Repair Item-Row Dispatchers: FileRepair/CRepairVideo/CRepairPDF Row Contracts + WidgetsMgr Page Flow + DataMgr Task Queue

**Sources**: moc stringdata blobs, moc slot decodes (static-metacall case tables), decompiled slot bodies (FUN_ addresses incl. emitter tracing), ctor map, RTTI census, repair-line architecture artifacts
**Role**: The repair product line's UI spine — how each damaged-file row exposes its actions (Repair / Preview / Save / Stop / Advanced / Feedback / Change), how the page flow is driven (Home → Add → List), and how the task queue serializes repair work. Complements the repair-engine artifacts (EUVideoRepair/EUAdobeRepair/EUArchiveRepair/EuOfficeRepairFile) with the widget-side contracts.

---

## 1. The three row-controller families (template-sibling pattern)

| Family | Classes | Own moc methods | Container/Controller |
|---|---|---|---|
| Generic file-repair row | FileRepairListItem, FileRepairScanItem | 10 (shared table `FUN_140b97cc0`) | FileRepairListFrame, FileRepairDataMgr |
| Video-repair row | **CRepairVideoItem** | 21 (table `FUN_140bdaa80`) | CRepairVideoItemsWnd, CRepairVideoWidgetsMgr, CRepairVideoController |
| PDF-repair row | **CRepairPDFItem** | 21 (table `FUN_140b87df0`) | CRepairPDFItemsWnd, CRepairPDFWidgetsMgr, CRepairPDFController |

**CRepairVideoItem and CRepairPDFItem have IDENTICAL 22-string moc blobs** (byte-for-byte the same method list) — like the filter buttons (artifact 26 §1), the vendor built one row controller and specialized per line: identical interaction contract, different preview/repair backends. This is a codebase-wide design signature: *shared moc surface + virtual-specialized subclassing*.

## 2. The row contract (CRepairVideoItem/CRepairPDFItem, stringdata-validated)

```
signals (8):
  sigRemove()                          sigStartRepair()
  sigClickedAdvancedRepair()           sigStartAdvancedRepair(bool bFromChange)
  sigStopRepair()                      sigStartSave(bool bPreview)
  sigPreview()                         sigSaveActivateSuccess()
slots (10):
  retranslate()                        onClickedRemove()
  onClickedPreview()                   onClickedSave()
  onClickedAdvancedRepair(bool bFromChange)
  onClickedFeedBack()                  onClickedChange()
  onUpdateRepairProgress()             onClickedRepair()
  onClickedStopRepair(bool bForce)
```

User-visible meaning per slot (button → behavior):

- **onClickedRepair** (FUN_140b49570): resets the row's `QProgressBar` (this+0x78) to 0, sets the percent label `QString("%1%").arg(0)` (label at this+0x80), then **emits sigStartRepair** — the controller picks the task up and the row flips to repairing state.
- **onUpdateRepairProgress**: same bar/label updated from the task's progress (`slotUpdateRepairProgress(nProgress)` in the generic FileRepairListItem).
- **onClickedStopRepair(bForce)**: emits sigStopRepair — cancel mid-repair; bForce distinguishes user-stop from window-close stop.
- **onClickedAdvancedRepair(bFromChange)**: the **"Advanced Repair" escalation** — for sample-file-guided reconstruction (video: CRepairVideoGetSampleWnd; PDF: decrypt path) vs the standard algorithmic repair. `bFromChange=true` when triggered by changing the file (re-add flow).
- **onClickedChange**: re-pick the source file for this row (replaces the item's path, re-runs analysis).
- **onClickedFeedBack**: "repair failed? tell us" — opens the feedback entry (ties into the Support/feedback telemetry events).
- **onClickedSave(bPreview)**: post-repair save; `bPreview` distinguishes save-from-preview. sigSaveActivateSuccess fires when saving completes **activation** (licensed advanced repair: the EuRepairHost activation bridge).
- **onClickedPreview**: the row preview (RepairPreviewCompareWnd — before/after compare, 58 vtable methods).

The generic **FileRepairListItem** contract is the 10-method subset (sigTranslate/sigRemove/sigRepair/sigRepairEx/sigPreview/sigSave/sigStop/sigUpdateIcon + retranslate + slotUpdateRepairProgress) — `sigRepairEx` = the advanced-repair signal in the generic naming.

## 3. FileRepairWidgetsMgr — the page-flow controller (5 moc slots)

```
slots:  slotHomePageClickedStart()      -> switchToPage(N)
        slotGoHome()                    -> switchToPage(0)
        slotAddFiles(QVector<QString>)  -> FileRepairAddThread @ QThread::start(t, 7)
        slotGoListView()                -> page 2 + triple list refresh
        slotRepairRet(QString path, bool bRet, QPixmap pix) -> item update + forward + cleanup
```

Decoded from the bodies:

- **switchToPage(N)** (FUN_140b2a140 from slots 0/1): the QStackedWidget page index setter — pages: **0 = FileRepairHomePage, 1 = FileRepairAddPage, 2 = the list view** (confirmed by slot 3's `FUN_140b2a140(param_1, 2)` + the list-frame refresh trio FUN_1407a6670/71f7/aac30).
- **slotAddFiles** (FUN_1407d2d60): `FileRepairAddThread` (0x18-byte object, ctor FUN_14079af40→FUN_1407d2570) created with the file vector, connected via the QThread `finished` PMF, then **`QThread::start(thread, 7)` = TimeCriticalPriority** — file-add/analysis runs at the same time-critical priority as the filter and check threads (artifact 26 §5). The finished handler auto-advances to the list page.
- **slotRepairRet** (FUN_1407d2f10): the repair-completion sink — updates the row (FUN_1407a6e20), walks a page-flow helper chain (FUN_1407d42b0/d42d0 → FUN_1407c2850), then two manager cleanups (FUN_140795070/7954d0) — this is where a finished task hands off to the next queued item.
- Drag-and-drop entry: FileRepairAddPage exposes `slotDragFilesIn(fileList)` + `slotBtnAddClicked()` → both funnel into slotAddFiles.

## 4. FileRepairDataMgr — the task queue (4 signals + 1 slot)

```
signals:  sigStopSave()  sigFinishRepairTasks()  sigDoNextRepairTask()  sigUpdateRepairProgress()
slot:     slotSaveRet()
```

The queue pattern (from signal names + controller wiring): each row's sigStartRepair enqueues a task; DataMgr emits **sigDoNextRepairTask** to dequeue; **sigUpdateRepairProgress** fans out to every row's onUpdateRepairProgress; **sigFinishRepairTasks** fires when the queue drains (enables batch Save); **sigStopSave**/slotSaveRet manage the save/copy-out phase. Controllers (CRepairVideoController/CRepairPDFController, 21 vtable methods) mediate between DataMgr and the engine DLLs (EUVideoRepair.dll / EuOfficeRepairFile line — see repair-engine artifacts).

## 5. The thread fleet at TimeCriticalPriority (cross-line signature)

| Thread | Line | Evidence |
|---|---|---|
| CSetFilterThread | results filter | `QThread::start(t,7)` (artifact 26) |
| CCheckNodeThread | recoverability grading | `QThread::start(t,7)` (artifact 26 §5) |
| FileRepairAddThread | repair add/analyze | `QThread::start(t,7)` (this artifact §3) |
| FileRepairThread / FileRepairSaveThread / PdfRepairThread / ArchiveRepairThread | repair execution | 12-vtable-method worker classes (same family) |

**Priority 7 (TimeCriticalPriority) is the vendor's uniform choice for all compute-bound worker threads** — deliberate: UI threads stay NormalPriority so the interface never starves during multi-hour batch repair/refilter.

## 6. QSS side (census cross-links)

Row-level styling targets from the loop-closure census: `RepairViewPushButton` (row action buttons), `repairpopWndAddBtn` (add-more popup), `RepairedBottomWnd`/`RepairingWnd`/`RepairFailedWnd`/`RepairOriginalWnd` (row state widgets), `RepairPreviewCompareWnd` (before/after viewer), plus the CRepairVideo*/CRepairPDF* window families (57-vtable-method Save/Decrypt/GetSample/Analyze/AdvancedAdd windows). The video-repair flow windows map 1:1 onto the slots above (GetSample ↔ onClickedAdvancedRepair, SaveWnd ↔ onClickedSave, DecryptWnd ↔ the encrypted-PDF path).

## 7. Dynamic/forensic corroboration

- Runtime log (artifact 25 evidence): `m_bNeedViedoRepair=0, m_pVideoRepair=1` at scan completion — the main app probes video-repair availability exactly when results finalize, pre-wiring the "repair video" coaching entry on damaged-media rows.
- Vendor QA log (forensics artifact): video-repair regroup JSON + repair-row click telemetry in the QA-night session.
- Repair-entry surface in the main UI: artifact 12 (repair wizards from the results view / home "Repair" tiles).

## 8. Cross-links

- Filter-row template-sibling pattern: `26-filterbar-family-decode.md` §1
- Repair engine internals: `../FileRepair/` family (EUVideoRepair box-parsing, EuOfficeRepairFile schema-driven repair, EUArchiveRepair 7z, EUAdobeRepair cloud client)
- Preview compare window + repair preview: `10-preview-subsystem.md` + `18-preview-architecture.md`
- Page-flow pattern sibling: DrwMainViewManagerWizard's 4-page stack (artifact 04) — same QStackedWidget-page discipline, different product line
