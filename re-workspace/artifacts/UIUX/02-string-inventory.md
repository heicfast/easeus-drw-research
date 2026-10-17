# UI/UX Artifact 02 — Complete User-Visible String & Text-Flow Inventory

> Scope: every piece of text the user can see, where it lives, and how it is selected.
> Evidence: `og-codebase/language/*.qm` (25 app files parsed with `scripts/qm_parse.py` — full context/source/comment/translation extraction); DRWUI.exe `.rdata` UTF-16 extraction (18,939 VA-tagged strings, `drwwui_va_strings.json`); 2,402 `QObject::tr`/`QCoreApplication::translate` call sites mined from the Ghidra decompilation (`drwwui_tr_callsites.json`); 195 telemetry event names (`drwwui_function_map.json`).

## 1. The localization architecture

DRWUI is built **English-hardcoded**: UI strings are compiled into the binary as literal UTF-16/char arrays, wrapped in `QObject::tr(...)` calls for overridability. At startup `QCoreApplication::installTranslator` (import verified) loads `language/<Lang>.qm` when the OS locale (or user setting) requires a non-English UI.

Consequences (all verified):
1. **The complete visible-text superset is in DRWUI.exe itself** (18,939 wide strings, ~1,500 of them translatable-marked).
2. **English.qm contains only 1,556 messages** — it exists to *override* wording for the English build, not to carry it. Distribution across contexts: `QObject` 1,531 · `RecoverProgressDialog` 14 · `ChooseDestinationPathDialogClass` 6 · `ChooseDestinationPathItemClass` 5.
3. Nearly every call site uses `QObject::tr` **explicitly** (not per-class `tr()`), because most UI classes are not `Q_OBJECT` meta-classes — hence the "QObject" context dominance in the QM files.
4. Per-language files (Japanese 1556, Mainland 1545, Deutsch/French/Spanish/Korean/Russian/Arabic/Thai/Turkish/Italian/Danish/Dutch/Polish/Portuguesa/Svenska/Norwegian/Mungarian/Indonesian/Malay 1505–1528, Chinese/ChineseTrad 1528) trade ±1.6% of messages — a few strings are locale-gated (e.g. China-only payment copy).
5. Special builds: `Mainland_Foxit.qm` (19 messages — the "FoxitRestore"-branded variant), `Mainland_LC.qm` (927 — limited edition), `Mainland_JZ.qm` (1543).
6. `qtbase_*.qm` files cover Qt's own dialogs (file pickers, buttons) in 13 languages.

Parsed JSON for every language: `re-workspace/reversed/ui-resources/translations/*_qm.json`.

## 2. The QM binary format (for completeness)

Qt .qm: 16-byte magic `3cb86418caef9c95cd211cbf60a1bddd`, then blocks `{u8 tag; u32 BE len; payload}` with tag `0x42`=hashes, `0x69`=messages, `0x2f`=contexts, `0x88`=numerus rules, `0x96`=dependencies. Message records: `{tag 6 u32len+Latin1 source · tag 8 u32len+Latin1 comment · tag 3 u32len+UTF-16BE translation · tag 7 u32len+Latin1 context · tag 1 END}`. Verified empirically on English.qm first records (`Choose a destination path to save the file:` under `ChooseDestinationPathDialogClass`).

## 3. Text categories (what the user reads, by screen)

Sampled from the QM + binary string sets with call-site attribution (full JSON in `translations/` and `drwwui_class_ui_map.json`):

**Destination picker (recovery target)** — context `ChooseDestinationPathDialogClass`:
- "Choose a destination path to save the file:" / "Cloud" / "Local" / "Save" / "Enable file repair" (repair-during-recovery toggle!)
- "We highly recommend saving the found data to a different drive or a network drive." / "SSD (C:)" (sample device row)
- Privacy copy: "EaseUS NEVER keeps records of your account. Please refer to our Privacy Policy for more information." (shown when logging into a cloud destination)

**Size/date formatting** (global helpers): `%1 Byte(s)`, `%1 KB/MB/GB/TB`, `%1 file(s)`, "%1 Years+", "%1 day(s) ago", "%1 Detected:", "%1 file chunks scanned...".

**Scan/flow milestones**:
- "Advanced Scan can find more files - many users recover their data after a full scan." (deep-scan upsell)
- "Good news - some files are recoverable, you can try recovery or scan deeper." (post-quick-scan result)
- "Deep Video Reconstruct", "Add Sample Video for Advanced Repair", "Advanced Repair" / "Advanced Repair Failed" (repair upsell chain)

**Monetization copy** (the free-tier funnel):
- "%1 free recovery capacity." / "%1 users choose to activate Pro and successfully recover data." / "1-Get VIP,enjoy unlimited recovery and more." / "1-Your VIP expired, Please renew and enjoy unlimit recovery capcity." [sic]
- "Recover remaining" family + "Recovery Limit" dialogs (`CRecoverLimitDlg`, `CLocalRecoverBuyDlg`, `CRecoverFinishBuyDlg` — class-attributed via vtables)

**Session/import-export**: "1-Import Scan Result" / "1-Save Scan Result" (the `.rsf` session save/load UI entries; RSF format RE in `artifacts/SaveScan/`).

## 4. Telemetry event names = the clickable-element census

195 unique event names emitted from decompiled functions (`Result_*`, `Click_*`, `Page_*`, `Enter_*`). They enumerate the **actual decision points** of the user flow — the strongest single source for reconstructing the UX state machine. Full list: `/tmp` snapshot → `re-workspace/reversed/ui-resources/telemetry_events.txt` (in repo). Highlights by phase:

- **Navigation/shell**: `Click_Back`, `Click_Home`, `Click_Exit`, `Click_AppLeave`, `Click_Close`, `Click_Min`(window), `Click_Help`, `Click_About`, `Click_Checkupdate`
- **Scenario entries**: `Click_Cloud`, `Click_Nas`-family, `Click_DiskImage`, `Click_Backup`, `Click_Existing`, `Click_Lost`, `Click_Auto`, `Click_Create`(WinPE media)
- **Scan**: `Click_Scan`, `Click_Deepscan`-family, `Result_Pre_Scan`, `Result_Enumpartition`, `%1 file chunks scanned...` progress
- **Results**: `Click_All`, `Click_Audio`/`Click_Document`/`Click_Photo`/`Click_Video`/`Click_Archives`/`Click_Emails`/`Click_Databases`/`Click_Bookmarks` (classify tabs — emitted from `PublicMessageBox`/filter UI), `Click_Bysearch`, `Click_Clearsearch`, `Click_ClearAdvanced`/`Clearsize`/`Cleartime`/`Cleartype` (advanced filter resets), `Click_Date`, `Click_Double_Object`
- **Preview**: `Result_Preview`, `Click_Preview`-family
- **Recovery**: `Result_Recover`, `Click_Continuerecover`, `Click_Dontrecover`, `Result_Restore`, `(%1 files / %2 failed; for details, you may check the recovery log)`
- **Repair**: `Result_Repairvideo`, `Save_RepairFile_Result`, `Click_ChatPDF`, `Click_AIRecommeded`
- **Buy/activate**: `Click_Buy`, `Click_BuyNow`, `Click_Activate`, `Click_Activatenow`, `Click_Activateupgraderenew[now]`, `Result_Buy`, `Result_Inappbuywindow`, `Result_Email`, `Click_Contactsupport`, `Click_Chat`, `Click_Chat_Vip`
- **Scenario results**: `Result_Nasmodule`, `Result_Nas`, `Result_Connect`, `Result_Wechat`, `Result_Savesession`, `Result_Loadsession`, `Result_Decrypt`, `Result_PartitionRecover`, `Result_Firebase`, `Result_Checkupdate`, `Result_Clicklink`

## 5. tr()-call-site density map (which code regions own user text)

2,402 call sites over 68,344 analyzed functions; top owning classes (via vtable/ctor attribution): `CPartitionScanFrame` (27), `CNasSSHPage` (24), `CScanCommonPopDlg` (23), `ScaningRecoverMessage` (20), `CAutoRecoverSettingWnd` (15), `DiskBackProgressPage` (14), `CLinuxLogonPage` (14), `DevicePageItem` (13), `CNasLogonPage` (13) — i.e., the NAS/Linux connect flows and scan-frame widgets are the most text-dense surfaces (matching their multi-step wizard nature).

## 6. Rendering pipeline notes

- `QLabel::setText` / `QCoreApplication::translate` / `QObject::tr` import usage verified in decompiled code; rich text via embedded `<style>` blocks (e.g. `p{margin:0;padding:0}` templates with `%1..%5` substitution found in .rdata).
- `%1`-style placeholders resolved through `QString::arg` chains (visible at `ScaningRecoverMessage` sites).
- Some strings carry HTML for the "Tips"/tooltip system (`uilib_autoToolTips_win` QSS contract in `style.css`).

Cross-links: state machine (artifact 04), styling (artifact 06), config-driven text (artifacts `config-files/`), telemetry→class ownership (`drwwui_class_ui_map.json`).
