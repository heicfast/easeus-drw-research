# UI/UX Artifact 11 — Recovery Phase & Monetization Funnel Deep Dive

> Scope: from "user selected files and pressed Recover" to "files are on disk" — destination choice, safety rails, progress, free-limit gates, upsell, and final states.
> Evidence: `ChooseDestinationPathDialog` QM context (6 strings) + 29 QSS rules; `RecoverProgressDialog` QM context (14 strings); `CRecoverLimitDlg` (6 strings), `CLocalRecoverBuyDlg` (13), `CRecoverFinishBuyDlg` (11), `CBuyGuideWnd` (6) — all tr-verified; `CGenericRecoveryController`/`CCompleteRecoveryController`/`CDeletedRecoveryController` vtables; `RecoverResultDlg`; QM save/recover/license/VIP string families; telemetry `Result_Recover`/`Result_Restore`/buy chain.

## 1. Destination picker (`ChooseDestinationPathDialog`)

- Header: "Choose a destination path to save the file:" with **Local / Cloud** tabs (`ChooseDestinationPathItem` rows: "SSD (C:)"-style device entries; cloud destinations trigger account login → privacy copy "EaseUS NEVER keeps records of your account…").
- The dialog hosts the **"Enable file repair"** toggle — turning on repair-during-recovery (video/PDF/doc files get queued to the Fixo chain as they recover; counters appear in `CScanCommonPopDlg`'s "Video Repaired / Video to be repaired" stats — artifact 08).
- 29 QSS rules — the most-styled surface in the app (artifact 05 §7).

## 2. Safety rails (QM-verified)

- "Cannot save to original partition" — hard block for the source partition.
- Softer coaching: "Data might be %1 and %2 if you save files to original drive (where you lost data). %3" / "Do not save data to this drive" / "Don't save to this where you lost data." — the classic recovery-overwrite warning ladder.
- Path validation: "Might be invalid path to save." / "2.The recovery path is too long." (numbered error taxonomy shared with the recovery log).
- Recommendation: "We recommend using the image file of this disk for scanning, as this can reduce perfo[rmance impact]" (disk-image workflow tie-in).

## 3. Progress (`RecoverProgressDialog`, 14 QM strings)

Shows per-file progress, aggregate "Recovering…" state, and the completion summary: "(%1 files / %2 failed; for details, you may check the recovery log)". Driven by `CGenericRecoveryController` (+Complete/Deleted variants) over the recovery worker threads; the controller family is shared with the engine layer (artifact 03 §13).

## 4. The free-tier gate & upsell ladder

**Trigger** — `CRecoverLimitDlg` (highest-pressure copy in the product):
- "Sure to give up recovering remaining valuable files?"
- "Valuable data might be LOST PERMANENTLY if not recover now."
- Counters: "Recovered: %1/ %2 files" / "To be recovered: %1 files"
- Buttons: **"Give Up"** vs **"Recover Remaining"**
- Hard-stop state: "<font color='#D23636'>No</font> free recovery remaining." / "6.The data amount you want to recover has exceeded the free quota." (the numbered error list continues — QM carries items 1–6+ of recovery-failure causes)

**Feature comparison** — `CLocalRecoverBuyDlg` (Free vs Pro matrix, tr-verified):
- FREE column: "Preview only" · "Limited recovery" · "Scan disk only" · "Preview before recovery" · "Technical support"
- PRO column: "One-time Purchase - NO SUBSCIPTION" [sic] · "Recover Unlimited Data" · "Recover SD Card" · "Recover Nas, Linux and RAID" · "Rescue Lost Partition" · "Rescue Crashed PC" · "Repair Videos, Photos, Documents and Audio"

**Post-recovery win-back** — `CRecoverFinishBuyDlg`:
- "Unlock Pro. You're gonna enjoy more exclusive benefits!"
- Benefit rows: "Full preview / Without any interuptions" [sic] · "Corrupted repair / Photos,videos & documents" · "Premium support / Fram EaseUS at 7x24h" [sic]
- Social proof: "%1 users choose to activate Pro and successfully recover data." + "30 million" user base figure
- CTAs: "Unlock Pro Now" / "Unlock to Save Repaired"

**Minimal variant** — `CBuyGuideWnd`: "Why Pro?" / "Unlock Pro to enjoy:" / "Unlimited Recovery · Corrupted Repair · Full Preview" / "Unlock Pro Now".

**Licensing surfaces**: `CEnterLicenceDlg` ("Enter license code 'XXXXX-XXXXX-XXXXX-XXXXX-XXXXX' here.", states: Expired / Invalid length / Invalid / **Locked** / **Pirate** license code), `ApowerActivateDialog`/`ExternalActivateDialog`/`ActivateResultDialog` ("Activate Successful"/"Activate failed."/"Activate Manually"/"Try to Activate Manually Again!"), VIP family ("1-Get VIP,enjoy unlimited recovery and more." / "1-Your VIP expired…" / Enterprise/Professional VIP welcome banners / "Vip Chat" — "We have enabled the VIP channel for you. Please click on 'Try VIP Chat'…" / "Try VIP Chat"). Anti-tamper: "It has been detected that your host settings have been maliciously tampered…" → `PirateVictimsTipDlg`.

## 5. Completion states

- `RecoverResultDlg` summary + "(%1 files / %2 failed…)" log pointer.
- Auto-Recover completion notification: "Congratulations! Your data had been successfully saved by Auto-Recover on %1/%2/%3. Go a[head]…" (artifact 09 §6).
- Partition-recovery success: "%1 partition and its data were successfully recovered!" (ties to PartitionRecovery module).
- Continuation coaching: "Any unrecovered files risk being permantently overwritten by continued computer use." (urgency framing) and "AI Recovery Insight:" insight cards on results.

## 6. Flow wiring

Selection (`CSelAllCheckBox`/row checkboxes) → `sigRecoverBtnClicked()` (CDetailPage, artifact 09) → destination dialog → controllers start → progress → [free-limit check → gate/upsell] → copy loop (ACL-preserving copy engine — pending-operation artifact) with repair-during-recovery if enabled → result + telemetry (`Result_Recover`, `Result_Restore`, `Click_Continuerecover`/`Click_Dontrecover` from the limit gate).

Cross-links: artifact 04 (flow), 08 (repair-during-scan counters), 09 (selection), 12 (repair product), licensing-chain artifact (activation servers), Pending-operation engine artifact (copy internals).
