# UI/UX Artifact 06 — Modal-Dialog Inventory & Telemetry Checkpoints

> Scope: every modal interaction point and every analytics event = the complete "decision surface" of the app.
> Evidence: 226 `QDialog::exec/open`/`QMenu::exec` sites + 435 geometry sites mined from decompilation with class attribution (`drwwui_function_map.json`, `drwwui_class_ui_map.json`); 195 unique telemetry events (`telemetry_events.txt`); QM contexts; QSS `#ChooseDestinationPathDialog` styling census.

## 1. Dialog inventory (exec-capable classes, by call count)

| Dialog class | Sites | Purpose (from decoded strings + flows) |
|---|---|---|
| `PublicMessageBox` / `DrwMessageBox` (540×240) / `DrwNewMessageBox` | most | Shared confirm/inform modals (classify-tab telemetry emitted from here) |
| `CScanCommonPopDlg` | 3 geometry + 25 strings | **Scan-stop / return-home / scan-complete** multimode dialog (see artifact 08) |
| `RefreshHelpDialog`, refresh modals in view-manager slots 7/14 | 2 flows | Device-refresh progress modal (QDialog::exec with `refreshFinished()` wiring) |
| `ChooseDestinationPathDialog` (29 QSS rules — most-styled surface) | QM 6 strings | Destination picker: Local/Cloud tabs, "Enable file repair" toggle |
| `CQuickScanCompleteWnd` | 53 v-methods | Post-quick-scan upsell (Recover now vs Advanced Scan) |
| `CRecoverLimitDlg` | 6 strings | Free-tier limit gate ("Give Up" vs "Recover Remaining") |
| `CLocalRecoverBuyDlg`, `CRecoverFinishBuyDlg`, `CBuyGuideWnd`, `ChinaMainlandbuy*Wnd` | 6–12 strings | Purchase funnels (CN payment variants) |
| `BitlockerUnlockDialog`(+Ret/WithPwd), `BitLockerMSGuideDlg` | 2+ geometry | BitLocker unlock (password/key; MS how-to guide) |
| `BadSectorTipsDlg` (274×240, 256×240 moves) | 7 geometry | Bad-sector coaching |
| `RobotToolTipDlg` (80×32 fixed) | 7 geometry | AI-assistant robot tooltip |
| `AIAssistantTipDialog` | 6 geometry | AI assistant tips |
| `FreezeAnimalDialog` | 6 geometry | Marketing animation modal |
| `PirateVictimsTipDlg` | 2+1 | Anti-piracy warning |
| `RecoveryChancesTipsWidget`, `recoverLayerTipWnd` family | 6+ | Coaching overlays during scan/recovery |
| `PartitionCheckDialog`, `PartitionCheckRetDialog` | 1+1 | Partition-check flows |
| `CheckUpgradeDlg`, `RetentionActiveDlg`/`RetentionExitDlg`, `CEnterLicenceDlg`, `UserRateDlg`, `CFollowusDlg`, `CExitHelpWnd`, `IntroductionTipDialog`, `CUserGuidTipWnd` | 1–2 each | Upgrade / win-back / license / rating / follow / exit-help / first-run tour |
| `CAutoRecoverEntry/Open/Close/SettingWnd` + `CAutoRecoverMgr` | 4 windows | Auto-recover feature suite |
| `DiskBackupDialog` + `DiskBackupSaveDlg` + `DiskBackProgressPage` | 12–14 strings | Disk-image creation flow |
| `CSDCardHelpPopWnd`, `CSDCardScanTipsWnd`, `CSearchNltPopWnd`, `CNasSSHPopWnd`, `CPopupMenu`, `CThemeMenuItem` | 1–3 | Popups/tips |
| `CRepairVideoSaveWnd`, `CRepairPDFSaveWnd`, `CRepairPDFDecryptWnd` | 2 geometry each | Repair save/decrypt steps |
| `ApowerActivateDialog`, `ExternalActivateDialog`, `ActivateResultDialog` | 60 v-methods | Activation |
| `FollowShadowDialog`, `PublicShadowDialog`, `PublicCloseDialog`, `PublicLoadingDialog`, `UiBasicDialog` | chrome | Shared backdrops/spinners |

## 2. Telemetry = click-census (195 events; the definitive "what can the user press" list)

Grouped by funnel stage (full file: `re-workspace/reversed/ui-resources/telemetry_events.txt`, each with owner class):

**Shell/navigation**: `Click_Home`, `Click_Back`, `Click_Exit`, `Click_Exit_Bottomwindow`, `Click_AppLeave`, `Click_Close`, `Click_Min`, `Click_Help`, `Click_About`, `Click_Checkupdate`, `Click_Details`, `Click_Change`, `Click_Continue`, `Click_Cancel`, `Click_OK`-family, `Click_Retry`-family.

**Scenario discovery**: `Click_Cloud`, `Click_Nas*`, `Click_Device`, `Click_Existing`, `Click_Lost`, `Click_All`, `Click_Auto`, `Click_Create`, `Click_DiskImage`, `Click_Backup`, `Click_Cannotfindlocation`, `Click_Support`, `Click_Assistant` (NeedHelpMenu), `Click_MoreTool*`.

**Device/selection**: `Click_Select`-family, `Click_Double_Object`, `Click_Checker`, `Click_Date`, `Click_Enable`/`Click_Disable`, `Click_Connect`/`Click_Connection`, `Click_Control Panel` (+ "on target nas server" variant).

**Scan control**: `Click_Scan`-family, `Click_Deepscan*`, `Result_Pre_Scan`, `Result_Enumpartition`, `Click_Stop`-family, `Click_ExitChrono` (ChronoSnap), `%1 file chunks scanned...` progress milestone.

**Results manipulation**: `Click_Audio/Document/Photo/Video/Archives/Emails/Databases/Bookmarks` (the 8 classify tabs), `Click_Bysearch`, `Click_Clearsearch`, `Click_ClearAdvanced/Clearsize/Cleartype/Cleartime`, `Click_Lostfiles`-family, `Click_Tree`-family (view switch), `Click_Preview`-family, `Click_Recover`-family, `Click_Continuerecover`, `Click_Dontrecover`.

**Buy/activate**: `Click_Buy`, `Click_BuyNow`, `Click_Activate`, `Click_Activatenow`, `Click_Activateupgraderenew[now]`, `Click_Contactsupport`, `Click_Chat`, `Click_Chat_Vip`, `Click_ChatPDF`, `Click_AIRecommeded`, `Result_Inappbuywindow`, `Result_Email`, `Result_Buy`.

**Flow results** (completion beacons): `Result_Recover`, `Result_Restore`, `Result_Preview`, `Result_Repairvideo`, `Result_Nasmodule`, `Result_Nas`, `Result_Connect`, `Result_Wechat`, `Result_Savesession`, `Result_Loadsession`, `Result_Decrypt`, `Result_PartitionRecover`, `Result_Firebase`, `Result_Checkupdate`, `Result_Clicklink`, `Save_RepairFile_Result`, `Result_Create`, `ViewResults`, `Result_Scan*`.

## 3. UX narrative implied by the telemetry design

The event taxonomy reveals the product's funnel priorities: every classify tab, every filter reset, both stop-scan branches, every buy entry, and even the "cannot find location" dead-end are instrumented — a data-driven UX where the free-tier recovery limit is the pivot (CRecoverLimitDlg strings "Sure to give up recovering remaining valuable files?" / "Valuable data might be LOST PERMANENTLY…" are the highest-pressure copy in the app, backed by `%1 users choose to activate Pro` social proof).

Cross-links: artifact 04 (flow), 08 (scan dialogs), 11 (recovery funnel), 02 (string sources).
