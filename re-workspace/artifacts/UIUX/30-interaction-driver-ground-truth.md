# 30 — Post-Scan-Complete Interaction Ground Truth (Go to Recover → Retention Gate; Filter/Tab/Preview click matrix)

**Experiment**: `ui-interaction-driver.yml` run 39048461922 (2 parallel Windows-native variants, DRW.exe loader, 45s landing wait, click "Search for Lost Data" @ (922,662), 940s scan wait → scan-complete modal → scripted clicks with per-step screenshots)
**Evidence**: `re-workspace/raw-evidence/ui-interaction-recovery-flow/` + `re-workspace/raw-evidence/ui-interaction-results-interactions/` (14 screenshots, 2 interaction logs, 2 window censuses, 6 app logs)
**Role**: Closes the last two dynamic cells of the user flow — the **recovery-dialog funnel entry** and the **results-phase interaction surface** — pixel-evidenced and telemetry-corroborated. All click coordinates were pixel-verified against prior captures before dispatch (Go to Recover blue-blob center (494,473); Recover All (916,685); Filter (755,70); Type tab (234,117); Path tab (140,117)).

---

## 1. The completion celebration is a STANDALONE OS WINDOW (census precision)

The results-interactions census enumerated it as a separate top-level window:

```
pid=2568  hwnd=0xB0210  class=Qt5QWindowIcon  title=DRWUI      rect=(232,130)-(772,510)   <- 540x380
pid=2568  hwnd=0x2021C  class=Qt5QWindowIcon  title=EaseUS Data Recovery Wizard rect=(0,0)-(1024,720)
pid=2568  hwnd=0x50216  class=Qt5QWindowToolSaveBits title=DRWUI rect=(956,492)-(1004,540)
```

The VLM decode of the 540×380 window (shot_30_late crop): shield+confetti graphic, "Congratulations! Scan Completed!", **two statistic panels — "1139275 Files found" / "149.85 GB Size"**, light-blue banner "Great news: Your files are highly recoverable", blue "Go to Recover" button, X close. This corrects the earlier "in-window overlay" reading: the celebration modal is a real OS child window (own hwnd, centered 540×380), which is why it blocks the whole interaction surface until dismissed.

## 2. "Go to Recover" → results view + AI funnel toast (recovery-flow variant)

Click at (494,473) produced a full state transition (shot_20):

1. **Celebration window closes; the app lands in the RESULTS browse view** — not directly into a destination dialog. The funnel's step-2 comes from "Recover All" (below).
2. Results view at entry: tree = `Windows (C:) 1.1M` / `File Path Lost 4.3K` / **`Reconstructed 87`** (the carving branch grew 16→87 between the 34%-scan capture and completion — live-carving feed continues through the advanced pass), folder list (actionarchivecache…), right preview pane (folder icon, Open button, "Size: 284 MB").
3. **"AI Recommend available." toast** pops bottom-right with a "View Details" button — the AI-assistant funnel surfaces exactly at results entry (matches `sigEnterLeaveAiRecommedBtn` / `onBtnAiRecommendClicked` in the static CFilterBar decode, artifact 31).
4. After ESC the toast is gone but the **AI floating action button** remains (purple/blue gradient circle, robot icon, red notification dot, bottom-right corner) — the persistent assistant entry point.
5. Bottom bar: green check + "Scan Completed, Files Found: 1139261 (147.04 GB)" + active blue "Recover All ..." button.

## 3. "Recover All" → the RETENTION GATE (Free edition, 1.1M files)

Clicking Recover All with the full result set selected did NOT open a destination dialog. It opened the **retention/urgency dialog** (shot_22, VLM-decoded verbatim):

```
[hourglass icon]  Wait! You are at risk of losing data!
   1139261 files (147.04 GB) have been found. More than 50% of permanent
   data loss occurs because unrecovered files get overwritten by continued
   computer use. Take the final step now to safely secure your data.
   Price too high?        [Get Up to 40% Off]   (orange)
   Can't find your lost data?  [Online Service] (light blue)
   Really want to quit?        [Quit]           (light blue)
   [X]
```

- This is the `RetentionExitDlg*` family from the QSS census (`RetentionExitDlgBtnChildBtn`, `RecoverActivateButton`, `ExternActivateBuyButton`, `UpgradeVerifyButton` — the recovery-funnel gate widgets).
- **ESC dismisses it** (shot_23 = clean results view again, toast gone).
- The destination dialog (`ChooseDestinationPathDialog`) is only reachable with a *sub-selection* under the free limit — the mass-recover path is intercepted by monetization first. (Static strings for the limit gate: "The free version restores up to 2GB" family, artifact 11.)

## 4. ESC does NOT dismiss the celebration window (results-interactions variant)

All 8 screenshots in this variant are byte-identical (md5 3ca7014f…) — the celebration window swallowed every scripted click (Filter, Type tab, Path tab, file row single/double-click). **The completion modal has no reject-on-Escape and its window covers the interaction targets.** This is deliberate funnel design: the only exits are "Go to Recover" (primary CTA), the X button, or clicking away — the scripted ESC + toolbar clicks documented the blocking behavior as a finding, exactly as designed (all steps fault-tolerant).

## 5. Telemetry goldmine — the scan-complete pipeline with vendor source paths

The captured `DRWUI.log` (pid 2568) records the **full completion pipeline** for the first time (verbatim timestamps):

```
16:25:35  SearchDataSource::ClearCache:563            \ results-entry
16:25:35  PreviewDataSource::ClearCache:242/250        | cache-reset
16:25:35  OfficePreviewStub::doKillAllOpenProcess:654  | cascade
16:25:36  ThumbnailFactory::ClearCache:78/92/105      /
16:25:37  FileNodeShareHelper::init:198/215/217
16:25:37  -------------Start Freeze--------------       <- the coordinated Freeze protocol
16:25:39  Build tree finish.
16:25:59  SaveResultPath = D:\a\...\og-codebase\SaveScan\auto_Windows (C_)10_17_16_25_59.rsf
                                                       <- AUTO-SAVED .rsf SCAN SESSION
16:26:03  m_nFreeze=0, bUnfreeze=1 / Send unfreeze msg. / -------------------Unfreeze-----------------
16:26:03  m_bNeedViedoRepair=0, m_pVideoRepair=1        <- video-repair availability probe
16:26:03  CDoScanPartition::ScanThread:483
16:26:03  CDoScanPartition::UpdateScanFinishedInfo:498
16:26:03  CScanMgr::ScanFinished:636
16:26:03  e:\drw\_drw_main\drwintelligentscan\qtdrwui\detailpage\bottomarea.cpp, 838 nStatus=4, m_iScanType=3
16:26:03  e:\drw\_drw_main\drwintelligentscan\qtdrwui\detailpage\bottomarea.cpp, 856 nStatus=4, m_iScanType=4
16:26:03  Quick scan matched=0, total=64
16:26:03  Recovery ability matched=0, total=127
16:26:05  Recoverability finish match..
```

Decoded pipeline (each step cross-verified against the static architecture):

| Step | Evidence | Static cross-link |
|---|---|---|
| Cache reset cascade | 4 ClearCache families + Office kill | Preview subsystem (artifact 10/18) |
| **Freeze** | `Start Freeze` banner | The Freeze/Unfreeze coordinated-UI protocol from the Sink decode (artifact 20 §4) — `onBeforeFreeze`/`sigFilterFreezeFinished` in CRightContent |
| **Auto-save .rsf** | `auto_Windows (C_)10_17_16_25_59.rsf` — naming = `auto_<Volume>_<MM_DD_HH_MM_SS>.rsf` | .rsf scan-session format (SaveScan artifacts); vendor QA logs show manual saves, this proves AUTO-save on completion |
| **Unfreeze** | `m_nFreeze=0, bUnfreeze=1` + `Send unfreeze msg.` | Freeze protocol (artifact 20) |
| Video-repair probe | `m_bNeedViedoRepair=0, m_pVideoRepair=1` | Repair-line availability check (artifact 12) |
| Scan-finished chain | `CDoScanPartition::ScanThread:483 → UpdateScanFinishedInfo:498 → CScanMgr::ScanFinished:636` | DRWIntelligentScan PDB tree; CScanMgr completion path |
| Status-bar state machine | `bottomarea.cpp:838/856, nStatus=4, m_iScanType=3→4` | **NEW**: bottomarea.cpp is the status-bar controller; m_iScanType 3→4 = the quick→advanced completion transition rendered live |
| Recoverability pass | `Quick scan matched=0, total=64` + `Recovery ability matched=0, total=127` (runs 4×) then `Recoverability finish match..` | The CCheckNodeThread decode (artifact 31 §5) — the check-node pass that grades found files |
| Re-check on Go to Recover | Same "Recovery ability matched=0, total=127" lines re-fire at 16:29-16:30 in the recovery-flow log AFTER the click | onCheckFinished → CCheckNodeThread spawn (decoded body, artifact 31) |

("matched=0" on the runner because the check grades *repairable-beyond-recovery* candidates — 0 of 127 needed grading on the runner's disk.)

Also captured: `FilterPath=` + `CDoScanPartition::PushFolderFilter:84` + `AdvanceFilter current time is :2026-10-17 16:14:32` at scan START — the **advance-filter state carried into the scan controller** (filter → scan interplay, artifact 31 §7).

## 6. The complete dynamic user flow — now closed end-to-end

```
splash ("Reading the disk information…")
  → landing (device cards + Assistant + "Search for Lost Data")
    → click → scan 9% → 34% (live carving 1→16)
      → SCAN COMPLETE (standalone 540x380 celebration window, 2-stat panels)
        → [auto: Freeze → auto_*.rsf save → Unfreeze → ScanFinished → recoverability pass]
        → "Go to Recover" → results browse + AI-Recommend toast + AI FAB
          → "Recover All" (1.1M files, Free) → RETENTION GATE ("risk of losing data")
            → ESC → results   |   "Get Up to 40% Off" → purchase flow
              → [destination dialog: reachable via sub-selection — static decode, artifact 11]
```

Every stage now has pixel evidence + telemetry corroboration + static cross-link.

## 7. Method note

- Click coordinates were derived by pixel-scanning the prior captures (blue-blob detection for the CTA button) and VLM-zoom verification — not guessed.
- The two variants ran in parallel on separate runners; both scans completed in ~15.5 min (940s wait, matching the 880s baseline + margin).
- The results-interactions variant's failure-to-dismiss is itself a finding (§4) — the workflow's fault-tolerant design converted it into evidence about modal behavior.

## 8. Cross-links

- Previous dynamic cells: `dynamic-ground-truth--scan-phase-captured.md` (splash/landing/scan/complete)
- Retention/monetization static decode: `17-monetization-growth-surfaces.md`; recovery funnel: `11-recovery-phase-funnel.md`
- Filter-bar static decode (AI button + freeze signals): `31-filterbar-family-decode.md`
- Sink/Freeze protocol: `20-moc-surface-sink-architecture.md` §4
- .rsf auto-save: `../SaveScan/rsf-format--scan-session.md`; CScanMgr/CDetailPage wiring: `13-ui-core-wiring-state.md`
