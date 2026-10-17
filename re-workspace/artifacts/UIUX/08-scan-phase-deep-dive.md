# UI/UX Artifact 08 — Scan Phase Deep Dive (Progress, Stats, Stop/Complete Flows)

> Scope: everything between "user clicked Scan" and "results are browsable": progress UI, live stats, error states, stop/complete dialogs, deep-scan upsell.
> Evidence: `scanClickedSlot` decode (artifact 04 §4); `CPartitionScanFrame` (28 tr strings), `CScanCommonPopDlg` (25 tr strings), `CQuickScanCompleteWnd` (4), `ScaningRecoverMessage` + `CScanMgr` region strings; `CGenericRecoveryProgress`/`CCompleteRecoveryController`/`CDeletedRecoveryController` (vtables 18/37/25); `CDoScan*` strategies (44 v-methods each); `AnalysisGridWidget`, `UnllocateProgressLabel`, `RadiusProgressBar`, `RotateLabel`; RCC `ScanProgress/` (188 assets) + `BuildTree/` (51).

## 1. Where the scan actually renders

The scan runs **inside `CDetailPage`** (stack idx 3 — same page as results; artifact 04). `CDetailPage::FUN_1406bb5f0(detail, device)` receives the target, then `FUN_1406bbfe0` starts the flow and attaches `CNasNetErrorTipsWnd` for NAS targets. The header shows "Searching:" + the target name (tr). Progress chrome:

- `ScaningRecoverMessage` — rotating status line ("%1 file chunks scanned..." milestones; "Don't remind me again" toggle for coaching)
- `AnalysisGridWidget` (54 v-methods) — the sector-grid visualization (disk map painting)
- `UnllocateProgressLabel`, `RadiusProgressBar`, `RotateLabel` (300×40) — progress bar/spinner family
- `CGenericRecoveryProgress` + controllers `CGenericRecoveryController`/`CCompleteRecoveryController`/`CDeletedRecoveryController` — recovery-progress orchestration reused by engine callbacks
- `ScanProgress/` RCC assets (188) — animated frames, progress bar slices
- `config.ini [RecoveringTips] scaningRecoverShowTips=true` gates the coaching layer

## 2. Partition-level scanning (smart scan for lost partitions)

`CPartitionScanFrame` (28 tr strings — the most text-dense scan widget):
- Title: "Smart Partition Scanning" → progress "Scanning disk sectors: %1" → completion "Smart Partition Scan Completed" / "Scan completed for Disk %1!" / stopped: "Smart Partition Scan Stopped" ("Scanned disk sectors: %1")
- Found-partition presentation: "We found partition(s):" list rows with properties: Disk / Basic / Dynamic / MBR / GPT / File System — plus "Preview for disk %1" action
- Controls: "Recover" / "Stop" / "Home"
This UI fronts the PartitionRecovery module (FileSystemAnalysers, `artifacts/PartitionRecovery/`) via `CEnumPartitionThread` and `DrwPartitionRecoverWindow`.

## 3. The universal scan dialog: `CScanCommonPopDlg` (25 tr strings, fully mapped)

A multimode modal used for scan lifecycle decisions. Mode inventory (decoded strings):
- **Stop confirm**: "Stop searching for lost data?" → body "Remaining data can be rescanned and recovered anytime later, but continuing now …" (risk framing)
- **Repair-coupled stop**: "Stop Repairing for corrupted video?" → "The corrupted videos will not be repaired if you stop." (the recover-with-repair pipeline)
- **Navigation confirm**: "Return to Home?"
- **Organize states**: "Organizing found files..." / "Stop Organizing Found Files?" (the tree-building phase after engines finish — `BuildTree/` assets, `CSetClassifyThread`/`CSortNodeThread` workers)
- **Completion**: "Congratulations! Scan Completed!" with the stats grid: "Files found · Files scanned · Used Time · Size · Organized · Completed · Video Repaired · Video to be repaired" (the repair-during-recovery counters)

## 4. Quick → Advanced scan upsell (`CQuickScanCompleteWnd`)

Copy (tr-verified): "Quick Scan Completed" / "You may now" / **"Recover Found Deleted %1 files %2"** [primary CTA] and the coaching line "Tips: Advanced Scan is trying to find more other lost files for you while recove[ring…]" — i.e. Advanced Scan continues in the background while the user may already recover. Engine-side: quick scan = fast FS-metadata pass; advanced = all full searchers + RAWSearcher with filename callback (gated by settings+0x60 — SearchDLL artifacts). Result-state alternatives: "Good news - some files are recoverable, you can try recovery or scan deeper." (QM).

## 5. Error & disconnect states (CDetailPage region, tr-verified)

| Situation | Copy shown | Controls |
|---|---|---|
| Drive removed mid-scan | "Drive Disconnected" — "Unable to continue scanning. Reconnect your drive and try again." | Retry / Cancel |
| NAS offline | "NAS Disconnected" — "Check network and make sure NAS is on. Then try again." | Retry / Cancel / Disconnect ("Disconnect with NAS") |
| Linux box offline | "Disconnect with Linux" flow (same pattern) | Retry / Cancel / Disconnect |
| Cloud session lost | "Cloud Drive Disconnected" — "Please check your network connection and try again." | Retry / Cancel / OK |
| Network generic | "Check your network to make sure the %1 server is accessible and then r[etry]" (parameterized by Linux/NAS) | Retry / Cancel |
| NAS overlay | `CNasNetErrorTipsWnd` floating tips attached at scan start (artifact 04 §4.1) | — |

## 6. Progress → engines → UI wiring (who updates whom)

- `CScanMgr` singleton (`FUN_140149c30`) — prepared (vtable+0x1f0/+0x1f8) at every scan start; owns `IScanMgr` interface.
- Strategy objects `CDoScanPartition/CDoScanLostPartition/CDoScanCloudDevice/CDoScanRemoteDevice` (44 v-methods each) run the engine loop and drive `CUIScanProgressInfo`-style models.
- Engine callbacks → `ScaningRecoverMessage` text updates; file-count milestones → telemetry progress events.
- Scan finish routes: `sigScanFinished()` (PeripheralHomeView chain) → view-manager slot 15; quick-scan end → `CQuickScanCompleteWnd`; full end → `CScanCommonPopDlg` completion mode + "Organizing found files..." phase (tree building, `CDirectoryTreeManager`).
- Stop: `CStopScanThread` cooperative cancel + `CScanCommonPopDlg` confirm.
- Empty-recycle-bin special case: `RecycleBinScanNoRltWnd` result state.

## 7. Scan-phase telemetry checkpoints

`Result_Pre_Scan` (pre-scan service prep), `Result_Enumpartition` (partition enumeration), `%1 file chunks scanned...` (milestones), `Result_Scan*`/`ViewResults` (completion), stop-flow clicks (artifact 06).

Cross-links: artifact 04 (entry transition), SearchDLL family artifacts (engine internals), PartitionRecovery artifacts (smart scan engine), 09 (results page that fills during scan).
