# UI/UX Artifact 12 — Repair Product UI Flows (Video · PDF · Advanced Repair)

> Scope: the Fixo-based repair experience inside DRW — wizards, states, sample-file advanced repair, and repair-preview.
> Evidence: class map §9; `FileRepairScanPopWnd` (10 tr strings); QM video/repair string family (25+); `CRepairVideo*`/`CRepairPDF*` window families (52–58 v-methods each); `FileRepairHomePage`/`FileRepairAddPage`; repair engine chain in `artifacts/FileRepair/repair-architecture.md`; EUinApp licensing bridge.

## 1. Entry points

- Home tile "File Repair" (PeripheralHomeView, artifact 07) → `FileRepairHomePage`.
- Recovery-time: "Enable file repair" toggle in destination dialog (artifact 11 §1) — corrupted files queued during recovery.
- Results list: "Corrupted Video" rows → repair handoff; preview-failure grading ("Recovery Chances: High", artifact 10 §4).

## 2. The add/scan surface (`FileRepairScanPopWnd`, tr-verified)

- Empty state: "Click or drag files from your %1 to start the repair." with source chips ("Local Disk" + %1 substitution for other roots)
- CTAs: "Add Files" (×2 positions) / "Remove All" / "Close"
- Purpose line: "Fix damaged or unreadable files."
- Progress header: "Repairing:" / destination "Save:" / "Finish"
- Telemetry: `Result_Repairvideo`, `Save_RepairFile_Result`.

## 3. Video repair wizard (`CRepairVideoHomeWnd` chain)

| Stage | Window | What the user sees |
|---|---|---|
| Home | `CRepairVideoHomeWnd` | "Click to add videos to start repairing" + "Add Videos" |
| Add | `CRapairVideoAddWnd` / `CRepairVideoItemsWnd` / `CRepairVideoRightItemsWnd` | file list, "Adding videos:", "All Videos" |
| Analyze | `CRepairVideoAdvancedAnalyzeWnd` | "Analyzing sample video..." |
| Advanced | `CRepairVideoAdvancedAddWnd` + `CRepairVideoGetSampleWnd` | **"Add Sample Video for Advanced Repair"** + coaching: "Download a video of the same format from the Internet." (sample-from-same-device guidance) |
| Repair | `RepairingWnd` (+ "Enhanced video repairing" / "Enhanced video Paused, Video to be repaired:" states) | progress with pause; stats "Repair Stopped, Videos repaired:" |
| Save | `CRepairVideoSaveWnd` | destination + gate "Get Pro to Save Repaired Videos" |
| Result | `RepairFailedWnd` / `RepairOriginalWnd` / `RepairedBottomWnd` | failure/original/repaired triage; compare view `CRepairPreviewCompareWnd` |

**"Deep Video Reconstruct"** (QM) — the deep mode for heavily damaged files (two-scan weighted-atom grammar engine — repair-architecture artifact). Stop-flow integrates with `CScanCommonPopDlg`'s "Stop Repairing for corrupted video?" mode (artifact 08 §3).

## 4. PDF repair wizard (`CRepairPDFHomeWnd` chain)

| Stage | Window | Copy/notes |
|---|---|---|
| Home | `CRepairPDFHomeWnd` | add damaged PDFs |
| Add | `CRapairPDFAddWnd` / `CRepairPDFItemsWnd` / `CRepairPDFRightItemsWnd` | list + "Remove All" |
| Decrypt | `CRepairPDFDecryptWnd` → `CRepairPDFDecryptSuccessWnd` | encrypted PDFs: "%1 needs to enter password below to proceed with repair." (QM) |
| Progress | `CRepairPDFAddProgressWnd` | repair + "Repair Stopped" |
| Preview | `CRepairPDFPreviewWnd` (+`FileRepairPreviewWnd`/`FileRepairPreviewCtl`) | page preview via `CPDFRepairGetPixmapThread` |
| Save | `CRepairPDFSaveWnd` + `CRepairPDFSaveInforTipsWnd` | destination + info tips; gate "Get Pro to Save Repaired Documents" |

Engine: xref/trailer surgery + object reconstruction (repair-architecture artifact).

## 5. Repair ↔ licensing bridge

`EuRepairHost.exe` = out-of-proc activation/licensing bridge for the repair chain (activation.easeus.com via AWS Global Accelerator — licensing artifact). Gates: "Unlock to Save Repaired" / "Get Pro to Save Repaired {Videos,Documents}". The repair UI runs FREE for repair+preview; saving repaired output is Pro-gated (mirrors preview funnel artifact 10 §3). `EUinApp.exe` provides the in-app purchase surfaces (`Result_Inappbuywindow`, `Click_Buy*` telemetry).

## 6. State machines (synthesized)

**Video**: Added → [auto-repair: header/moov regroup] → OK? → Repaired : (Damaged → Advanced(sample) → Analyze → Reconstruct → Repaired|Failed) → Save(gated).
**PDF**: Added → [encrypted? → Password] → Repair → Preview → Save(gated).
**During-recovery variant**: Recover(with repair on) → "Video to be repaired" counter → background repair → "Video Repaired" stat (artifact 08 §3) → save gate at destination.

Cross-links: `artifacts/FileRepair/repair-architecture.md` (engines), 08 (repair-during-scan), 10 (preview gates), 11 (licensing), per-binary artifacts for EUVideoRepair/EuPDFRepairFile/EuRepairHost.
