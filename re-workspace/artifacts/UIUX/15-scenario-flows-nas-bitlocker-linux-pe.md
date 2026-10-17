# UI/UX Artifact 15 — Scenario Flows: NAS · BitLocker · Linux · WinPE (Signal Contracts)

> Scope: the out-of-stack scenario wizards, their page chains and signal contracts, decoded from the decompiled connect-wiring.
> Evidence: NAS-region signal census (0x140860000–0x1408b0000, function-attributed); class map §4; NAS_view/NAS_linux RCC assets (247); tr strings per page (artifact 02 data); `CNasBasePage` ctor `FUN_140864990` (QFrame base, dual vftable).

## 1. NAS recovery flow (the richest scenario — 13 windows)

Class chain: `CNasStartPage` → `CNasLogonPage` → `CNasSSHPage`(+`CNasSSHPopWnd`/`CNasSSHInfoWnd`) → `CNasDownloadPage` → `CNasEnummingPage` → `CNasDevicePage` (+ `CNasEnumFailedPage`, `CNasNoSystemPage`, `CNasHelpTipsWnd`, `CNasPortTipsWnd`, `CNasNetErrorTipsWnd`).

**Signal contracts (function-attributed, verified)**:

| Emitter | Signals | Meaning |
|---|---|---|
| NAS device row (`FUN_140895a40`) | `sigItemClickConnect()` · `sigItemClickScan(const NasDeviceInfo&)` · `sigItemClickSupport()` | The three per-device actions: **Connect / Scan / Support** |
| Agent download worker | `finished()` · `sigDownloadError()` | SSH-agent download completes/fails (`CNasDownloadPage`) |
| Connect worker (`FUN_14087baf0`) | `sigConnectRet(int)` | SSH connect result code |
| Enumeration (`FUN_140899300`) | `SigEnumRet(bool)` | NAS share enumeration result |
| Busy query (`FUN_1408731d0`) | `sigIsBusy(bool&)` | by-reference busy check (same pattern as CDetailPage state queries) |
| Cancel (`FUN_1408774b0`) | `sigCancelRet(bool)` | cancel confirmation result |
| List pixmap streamer (`FUN_1408a0920`) | `sigFinished(int, QPixmap)` · `sigPushPixmapGetIndex(int)` | async icon streaming for NAS file list (request/response by index) |
| Message dispatch (`FUN_14089fc90`) | `dispatch(int, void*, int&)` · `doDispatchMessage(int,void*,int&)` | MOM-style message pump into the pages |

**User-visible copy** (tr, artifact 02 data): login page labels, SSH instructions ("Control Panel" on target NAS server — telemetry `Click 'Control Panel' on target nas server`), download progress ("NasDownloadPageProgressPercent/FileSize" objectNames), error states ("Check your network to make sure the %1 server is accessible…", "Check network and make sure NAS is on. Then try again."), "Disconnect with NAS".

**Flow synthesis**: Start → login (creds) → SSH enable guidance (Control Panel path + port tips) → agent download (error overlay) → share enumeration (failure/no-system states) → device list (Connect/Scan/Support per row) → scan launches the main flow (`sigScanNasDevice(IStorageDevice*)` → view-manager `scanClickedSlot` — artifact 04 §3). The whole chain runs over the EuMrx kernel redirector + SSH-tunnel agent (EuShare artifacts).

## 2. Linux RAID/box flow (mirrors NAS)

`CLinuxBasePage` → `CLinuxLogonPage` → `CLinuxDownloadPage` → `CLinuxNoSystemPage`, workers `CLinuxConnectThread`/`CLinuxCancelConnectThread`/`CLinuxDownloadConnectZipThread`. Same agent pattern (zip download instead of SSH script); error copy "Due to techinical limitation, Windows 8.1/8/7 or previous are not supported for Linux [recovery]" (QM). Connect results route through the same disconnect/retry states as CDetailPage (artifact 08 §5 — "Disconnect with Linux").

## 3. BitLocker flow

`CBitlockerStartWnd` → `BitlockerUnlockDialog` → `BitlockerUnlockRetDlg` / `BitlockerUnlockRetWithPwdDlg` (+ `BitlockerUnlockThread`, `BitLockerMSGuideDlg`). Entry copy: "Select a location to unlock Bitlocker and start recovering" (home tile). The MS guide dialog walks through `manage-bde` (engine side: BitLockerLib PowerShell + FVE registry — DRWService artifact). Password/key entry → unlock thread → result dialogs → scan proceeds on the unlocked volume (device icons switch lock→unlock via ImageResource.xml type codes 2-5/9-13/17-21/46-49).

## 4. WinPE bootable-media flow

`CPEStartWnd` → `CPEConnectWnd` (connect existing PE env) / `CPEBuyRetainWnd` (buy/retain offers) + `CPECreateThread`/`CPEGetInfoThread`. Uses the WAIK ISO carver (dlconfig.xml — WinPE artifact) to build bootable media; "Crashed PC Rescue" and "Boot Repair" home tiles route here. In WinPE the app runs the same DRWUI flow (BUILDPE winpeshl.ini chain — WinPE artifact).

## 5. Common scenario-UI patterns

1. **By-reference state queries** (`sigIsBusy(bool&)`, `sigIsFilterBtnToggled(bool&)`, `sigGetRightIndex(int&,int&)`) — synchronous cross-component state polling without exposing fields.
2. **Result-code signals** (`sigConnectRet(int)`, `SigEnumRet(bool)`) → mapped to error states with Retry/Cancel/Disconnect triads (artifact 08 §5).
3. **Page base classes**: `CNasBasePage`/`CLinuxBasePage` (QFrame, dual-vtable MI) standardize chrome/back-button behavior; per-page init functions carry the wiring.
4. **Async icon streaming** for remote lists (pixmap push/pull by index) — required because NAS/Linux lists render over the redirector.

Cross-links: artifacts 04 (entry), 07 (tiles), 08 (error states), EuShare/EPMNtDrv artifacts (transport), WinPE artifact (boot flow).
