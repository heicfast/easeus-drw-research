# UI/UX Artifact 35 — The Redesign Reference Atlas (Visual + Coordinate + State)

> **Purpose**: the single self-contained reference for rebuilding the EaseUS Data Recovery Wizard UI from scratch — every screen state, every interactive element's verified position, every menu/dialog inventory, and the behavioral rules learned from dynamic driving. Everything here is either pixel-verified from real captures or statically decoded from the binary (and cross-marked).
> **Evidence**: `re-workspace/raw-evidence/ui-screenshots/` (the organized library), `raw-evidence/ui-atlas-*` run dirs, artifacts 24/30 (prior dynamic runs), 2 successful atlas CI runs + 1 partial (alias-bug run).

---

## 1. Window & layout constants (design tokens)

| Token | Value | Source |
|---|---|---|
| Window (normal) | 1240×840 | static geometry decode (artifact 05) |
| Window (minimum) | 800×600 | static |
| Window (runner, maximized) | client ≈ 1024×735 at origin (0,0) on 1024×768 desktop | dynamic census |
| Window (Wine loader) | 1600×1000 maximized | dynamic (artifact 24) |
| Title bar height | ~35 px (custom frameless chrome) | pixel scan: icons at y 13–28 |
| Base background | `#E8F0FF` light blue (window edges); white content | pixel sampling |
| Brand blue (CTA) | ≈ `#1B6DD0`–`#2C7BE5` family | blue-blob pixel scan |
| Neutral ramp | `#e7e7e7` → `#dee1ed` → `#c1ccdf` → `#a0a6b1` | QSS census (artifact 21) |
| Themes | Light (`/Resource`) + Dark (`/ResourceDark`) parallel RCC bundles; menu-switchable (Use system setting / Light / Dark) | artifact 05 + menu decode §4 |
| DPI/zoom options | 100% / 150% / 200% (`windowsSize/set_dpi`) | FUN_1408551c0 decode |

---

## 2. Title bar — the icon strip (pixel-verified)

Window-relative positions on the 1024×735 client (icons at y 13–28; **click centers at y≈20**):

| Element | x-range | Center | Icon asset | objectName family |
|---|---|---|---|---|
| AI robot avatar | 681–720 | **(700, 17)** | `helper/titlebar_ico_robot.png` (blue robot, yellow star) | AI assistant toggle |
| Buy / store | 746–761 | **(753, 20)** | `titlebar_ico_buy_nor.png` (orange cart) | `TitleHomeBuyButton`/`TitleVipButton` |
| Activate / license | 788–801 | **(794, 20)** | `titlebar_ico_active_nor.png` (bronze key ♂-shape) | `TitleActivateButton` |
| Save scan session (.rsf) | 828–841 | **(834, 20)** | `titlebar_btn_scansave_*` (floppy/upload arrow) | `TitleSaveScanButton` |
| Hamburger (Drw_More_Menu) | 870–879 | **(874, 20)** | `titlebar_btn_menu_*` (3 lines) | `TitleMenuButton` |
| Minimize | ~959 | (959, 20) | `titlebar_btn_min_*` | `TitleShowMinButton` |
| Maximize | 990–999 | (994, 20) | — | `TitleShowMaxedButton`/`TitleShowNormalButton` |
| Close | ~1015 | (1015, 20) | — | `TitleCloseButton` |

Full title-bar button family (static decode, `FUN_` title ctor): `TitleIconLabel` `TitleTextLabel` `TitleVersionLabel` `TitleLoadScanButton` `TitleLoginButton` `TitleLoginInfoButton` `TitleLoginInfoName` `TitleUserHeadIcon` `TitleFollowusButton` `TitleNeedHelpButton` `TitleNotifyMessageButton` `TitleOnlineChatButton` `TitleOnlineHelpButton` `TitleSurVeyButton` `TitleServiceButton` `TitleSharedButton` `TitleHomeButton` `TitleHomeUnlockButton` `TitleNasIP` `TitleNasDisconnect` `TitleNasSplitter` — conditional visibility by license/locale/NAS context (`"mainland"` CN gate for the online-chat button).

**Dynamic proof**: the robot avatar click toggles the AI assistant panel (§3); the hamburger opens Drw_More_Menu (§4).

---

## 3. The AI assistant panel (landing, auto-opens ~t+60–75 s)

Panel bounds **x 653–922, y 42–295** (pixel-verified). Content: robot header + **"Hi! Guess you need:"** + 4 options (text rows pixel-measured):

| Option | Text row (y) | Click center | What it does (dynamic) |
|---|---|---|---|
| 1 | 125–134 | **(780, 130)** | Opens the **3-step "Unable to find your hard drive?" solution wizard** (blue modal x 657–986 y 137–323: "Solution 1: Refresh drives." + 1/3 pill + **Next** button at **(921, 288)** pixel-verified) |
| 2 | 168–179 | **(780, 174)** | **Navigates to the File Repair page** ("Try Advanced File Repair", Pro badge) |
| 3 | 211–220 | **(780, 216)** | "Quick start guide" (web/guide) |
| 4 | 255–264 | **(780, 260)** | "Chat with us" (headset icon, web chat) |

Behavioral notes: the panel **auto-opens ~60–75 s after landing** and persists; it swallows clicks inside its bounds; clicking option 1's wizard requires walking Next ×3 (solutions 1/3 → 2/3 → 3/3 → closes).

---

## 4. Drw_More_Menu (hamburger dropdown) — static inventory

Built by `FUN_140842c40` (QAction + `QVariant::setData(id)`); icons under `Resource/Titlebar/Menu/`:

| Item | Action ID | Icon | Behavior |
|---|---|---|---|
| Add Driver | 0xC | `menu_ico_Add driver` | driver-add dialog ("Load Driver %1 Success") |
| About | 6 | `menu_ico_about` | About dialog |
| Language | — | `menu_ico_language` | **submenu** (languages; `menu_ico_ens.png` = English flag) |
| Help | 2 | `menu_ico_help` | **submenu**: Video Tutorial / Online Help / Contact Technical Support / Feedback / EaseUS Logs |
| Import Scan Result | 0x10 | `menu_ico_inport` | .rsf session picker |
| Save Scan Result | 0xF | `menu_ico_inport` | .rsf export (disabled on landing, no session) |
| Check for Updates | 4 | `menu_ico_checkupdate` | update check dialog |
| Share EaseUS to | — | `menu_ico_share` | **share submenu** |
| Refer Friends | 0x15 | `menu_ico_Refer` | referral web |
| EaseUS File Repair | 0x12 | `menu_ico_fixo` | repair product link |
| EaseUS Todo Backup Free | 5 | `menu_ico_TBFree` | product link |
| ChatPDF | — | `ico_chatpdf_logo` | product link |
| Settings | — | `menu_ico_setting` | settings dialog |
| Theme | — | `menu_ico_Theme`/`Dark`/`light` | **submenu: Use system setting / Light / Dark** |
| Display/zoom | — | `menu_ico_size` | **submenu: 100% / 150% / 200%** |
| (survey variant) | — | `surveyMenuItem*` | User Survey row (A/B) |

URLs dispatched from the menu family: `url_videotutorial`, `url_onlinedoc`, `url_supportmenu`, `url_feedback`, `url_onlinerepair`, `url_fixo`, `url_chatpdf`, `url_win11checker`, `url_refer`, `url_tb` — telemetry-clicked via `MainWindowTitleBar`.

---

## 4b. The Activate dialog (CEnterLicenceDlg — buy/cart click, dynamically captured)

Dialog bounds ≈ x 222–781, y 130–509 (centered modal); **close X at (770, 150)** (ESC rejected).

- Title: "Activate EaseUS Data Recovery Wizard" + app icon (medical kit)
- Body: "Enter your license code to enjoy full features and unlimited recovery."
- License input field + floating blue **Paste** button + blue **Activate** button
- Note: "Note: No reinstallation or rescan required after activation."
- Footer: "Don't have a license?" + **Buy a License Now** (yellow/gold CTA → web store)

The buy/cart title-bar icon opens THIS dialog (dynamic proof, round-4); the activate icon opens the same dialog. QSS family: `TitleGiftDlgRightFrame`, `Activate/*` assets.

---

## 5. Landing page layout (complete map)

Left sidebar (text rows pixel-verified):

| Row | y-range | Click center |
|---|---|---|
| Hardware Disk (selected) | 115–126 | **(135, 120)** |
| SD Card | 169–178 | **(135, 174)** |
| More Recovery Tools | 221–230 | **(135, 226)** |
| File Repair | 317–326 | **(135, 322)** |
| Lost Partition Rescue | 369–378 | **(135, 374)** |
| ChronoSnap Backup | 461–473 | **(135, 467)** |

Section headers (lighter gray): "Data Recovery" (~90), "Advanced Features" (~290), "File Backup" (~420).

Center content:

| Element | Bounds | Click center |
|---|---|---|
| Page title "Select a location to search for lost data" | y 183–198 | — |
| "Internal drives (N)" header | y 237–247 | — |
| Windows(C:) tile | ≈ (305,185)–(496,347) | **(400, 266)** |
| 2nd drive tile (D:) | ≈ (523,221)–(687,311) | **(605, 266)** |
| "Specify a location" header | y ~460 | — |
| Recycle Bin tile | ≈ (310,474)–(490,560) | **(371, 510)** |
| Desktop tile | ≈ (520,472)–(612,555) | **(566, 513)** |
| Select Folder tile | ≈ (315,505)–(432,630) | **(375, 590)** |
| "Unable to find your hard drive?" link | bottom bar | — |
| **Search for Lost Data** (blue CTA) | (798,660)–(997,696) | **(897, 678)** |

Tile content: drive icon + name + used/total capacity bar ("31.15 GB/149.45 GB"); selection = blue border + checkmark.

---

## 6. Scan phase (dynamic-verified states)

Bottom-left control cluster (pixel-verified):

| Element | Position |
|---|---|
| Circular % gauge (blue ring) | center **(48, 687)** (ring x 16–79, y 660–714) |
| **Pause** (‖ icon) | **(104, 698)** |
| **Stop** (■ icon) | **(127, 698)** |
| Status line "Advanced Scanning, Files Found: N (size)" | y ~667–676 |
| "Remaining time: 07m43s" + "Reading sector: X/Y" | y ~694–703 |
| "Searching: …" strip (light blue, full width) | y ~630–648 |
| Recover All... (blue CTA) | center **(916, 684)** (x 832–1001, y 666–702) |

States: **running** (gauge animates, results fill progressively in the 3-pane layout) → **paused** ("Scan Paused" + red "Scanning Paused." strip, gauge frozen at pause %) → **stop-confirm dialog** (`CScanCommonPopDlg`): title "Stop Searching for Lost Data?", stat tiles (files found count + used time 00:02:38), coaching "Remaining data can be rescanned and recovered anytime later, but continuing now save you time.", **Stop** (pink/red) + **Continue** (blue) buttons.

---

## 7. Scan-complete celebration

Standalone **540×380 OS window** (census-proven; not part of the main window; **does not close on ESC**). Content: "Congratulations! Scan Completed!" + stats grid (Files found / Files scanned / Used Time / Size / Organized / Completed / Video Repaired / Video to be repaired) + primary CTA **Go to Recover** at window-fraction **(0.4824, 0.6569)** (proven ×3 runs). The Auto-Recover pipeline (Freeze → auto-*.rsf → Unfreeze) fires under it.

---

## 8. Results view (the 3-pane layout)

Toolbar row (y ≈ 55–105):

| Element | x-range | Click center |
|---|---|---|
| Home / Back / Up nav cluster | 18–144 | Home (35,80) Back (85,80) Up (130,80) |
| Address breadcrumb "Windows (C:)" | 165–280 | — |
| **View toggle** (list⇄icon) | 650–688 | **(667, 80)** |
| **Filter** (funnel + label) | 695–780 | **(737, 80)** |
| **Search** ("Search files or folders") | 792–980 | **(886, 80)** |

Filter bar (toggle-visible, y ≈ 120–180): **Path dropdown** center **(72, 160)**, **Type dropdown** center **(200, 160)**.

List header (y ≈ 215–265): select-all checkbox (~297,240) + sortable columns Name / Date Modified / Type (Size) with sort indicators (`CListHeaderView`, artifact 20 §5).

Bottom bar: checkmark-circle icon (18–74, 618–712) + "Scan Completed, Files Found: N (size)" + **Recover All...** → contextual **Recover...** on selection (box 808–976 × 615–720, center **(892, 668)**).

**Row-selection dynamics** (dynamic-verified): single-click → checkbox fills blue + details pane updates (name/size/path) + bottom CTA changes "Recover All ..." → "Recover ..." + view-toggle icon state; double-click → live preview panel (below).

**Right-click context menu** (CShowContextMenu; captured ×3 runs):

| # | Label | Icon |
|---|---|---|
| 1 | Recover | circular arrow |
| 2 | **Preview** (→ PreviewMainDialog modal) | eye |
| 3 | Open file location | folder |
| 4 | Select unrecovered files | crosshair |
| 5 | Smart select best files | magic wand |
| 6 | Clear selection | ✕ |

Menu geometry (measured): panel x 300–734, y 375–636 for a mid-list right-click at (600,350) — items ≈ 43.5 px tall → item centers ≈ (517, 396/440/482/526/568/612). The menu anchors below-right of the click; geometry varies with click point/row (round-4 saw a different anchor). Static ctor keys were the short names (Smart/Select/Recover/Preview/Location/Clear); the visible labels are the full forms above. **Dynamic caution**: clicking "Recover" with the whole 1.1M-file set → the retention gate fires (not the destination dialog).

---

## 9. Filter dropdown contents (static-decoded option sets)

- **File Type**: Pictures / Videos / Documents / Archive / Emails / Bookmarks / Others / Unsaved File / **Custom** ("Enter the file type suffix, such as *.doc; *.xlsx; *.ppt")
- **Date Modified**: Yesterday / Last 7 days / Last 1 month / **Custom** (dateEdit_from / dateEdit_to)
- **File Size**: < 512KB / 512KB~1MB / 1MB~512MB / 512MB~1GB / **Custom**
- **Toggles**: Existing (existing-files filter) / Hide 0KB Files / Hide System Files / Hide Temp Files / Hide Browser Cache
- Per-category "Select All (%1)" checkboxes with live counts; **Reset Filter** button
- QSS objectNames: `filter_menu`, `filter_menu_item_checkbox`, `filter_menu_item_checkbox_type`, `filter_custom_item`, `filter_type_custom`, `filter_item_count`, `filter_item_type_icon`, `FiterBtnInnerBackLabel` (vendor typo), `FilterBtnDrawLabel`
- Execution: selection → 0x48-byte `AdvanceFilterCondition` → `CRightContent::onFilterChanged` → `CSetFilterThread` (artifact 31)

---

## 10. Recovery funnel (destination → progress)

**ChooseDestinationPathDialog** (captured; 29 QSS rules — most-styled surface):

- Title: "Choose a destination path to save the file:" + "You have N file(s) (size) to recover."
- **Local | Cloud tabs** (y ≈ 216–225; Local center ~(410,222), Cloud ~(510,222))
- Destination list: Windows (C:) "31.30 GB / 149.45 GB" + warning icons; Temporary Storage (D:); **Choose folder...** (y ≈ 401–407, center (357,404) → native folder picker)
- **Enable file repair** toggle — **ON by default** — pill center **(255, 613)** (label "Enable file repair" x 245–400)
- **Save** button (gray/disabled until a destination selected) — center **(707, 613)** (x 647–767)
- Coaching (static): "Data might be OVERWRITTEN and LOST PERMANENTLY if you save files to original drive (where you lost data)." + "Do not save data to this drive" + insufficient-space gate ("Need additional %1 of space. Please free up space or select another drive." + Manage Storage) + cloud re-auth gate ("Login Failed" / Re-authorize / Reselect cloud)
- Cloud tab: "You can select a Cloud drive to save the found data."
- **Insufficient-space gate** (dynamically captured): "Insufficient Disk Space" + folder/warning icon + "Need an additional 146.41 GB of space. Please free up space or select another drive." + **Continue** (white/blue) / **Reselect** (blue primary)

**Retention gates** (Free tier):
1. On **Recover All** with large result sets → "Wait! You are at risk of losing data!" + **Get Up to 40% Off / Online Service / Quit** (`RetentionExitDlg` family)
2. On **exit attempts** (2nd ESC from results!) → the same gate dynamically proven — **ESC discipline: single ESC only; a second ESC is an exit signal**
3. `CRecoverLimitDlg`: Free-tier limit ("Give Up" vs "Recover Remaining")
4. `CQuickScanCompleteWnd` quick-scan upsell ("Recover Found Deleted %1 files %2" + Advanced-scan coaching)

---

## 11. Preview subsystem (visible surfaces)

- **Live preview panel** (double-click row): thumbnail + "Recovery Chances: High" circular gauge (the `CCheckNodeThread` grading visualized) + Existing status + name/size/path/date fields
- **PreviewMainDialog** (context-menu Preview item, 2nd at (715,395)): modal `exec()` under the Freeze protocol, `PreviewWindowStackedWidget` hosts per-format windows (Image/Video/RtfTxt/Archive), 15 s free-tier video cap, Loading→Failure/Content tri-states, repair compare mode (`RepairPreviewCompareWnd` before/after)
- Free-tier banner copy: "Preview only. Unlock Pro to enjoy full features and unlimited recovery."

---

## 12. Interaction rules learned (for faithful re-implementation)

1. **Window-relative clicks**: window is frameless-custom-chrome at origin; icon strip at y 13–28 (click y≈20), NOT y 30.
2. **AI panel auto-opens ~60–75 s** after landing and swallows clicks in its bounds; toggle via robot avatar.
3. **Solution wizard** (option 1) is modal; only its Next ×3 walk closes it; ESC does not.
4. **Celebration modal** is a standalone OS window; ESC-reject disabled; only the CTA dismisses it.
5. **Double-ESC = exit attempt** from results → retention gate. Use single ESC.
6. **Menus close on single ESC**; the hamburger menu requires re-click of the button to reopen.
7. **View toggle** is a two-state toolbar button (list⇄icon) — its icon reflects current state.
8. **Contextual CTA**: bottom-right button text/enable-state tracks selection ("Recover All ..." ⇄ "Recover ...").
9. **Progressive disclosure**: results fill during scan (3-pane visible mid-scan); pause/stop always available; Recover All active even mid-scan.
10. **Modal dialogs dim the main window**; clicks outside are swallowed (no click-through).
11. **The Activate dialog rejects ESC** — close only via its X (770,150). (The AI-panel web options also spawn Edge, which then blocks all app clicks — kill msedge between steps.)
12. **The main window can spontaneously minimize** (census: rect −32000,−32000) — a restore-resilient driver (ShowWindow SW_RESTORE + SetForegroundWindow before every shot/click) is mandatory.
13. **Context-menu Recover on huge selections → retention gate**, not destination dialog — select a single row for the real destination flow.
14. **Space check precedes recovery**: Save with insufficient destination → the space gate (Continue = proceed anyway / Reselect = back).

---

## 13. Coverage matrix & remaining gaps

| UI state | Capture | Quality |
|---|---|---|
| Splash / loading | ✓ `01-splash/` | Wine loader |
| Landing baseline + tiles | ✓ `02-landing/` | pixel-mapped |
| AI panel + solution wizard 1/3 | ✓ `02-landing/` | options 2–4 walked in round-3 |
| Scan mid / paused / resumed / stop-confirm | ✓ `03-scan-phase/` | complete |
| Celebration modal | ✓ `04-scan-complete/` | complete |
| Results baseline / filter bar / tabs / row select | ✓ `05-results/` | complete |
| Context menu (6 items) | ✓ `05-results/` | open state |
| Icon (grid) view | round-5 | pending |
| Filter dropdown CONTENTS | round-5 | pending (static list §9 ready) |
| Search active state | round-5 | pending |
| PreviewMainDialog | round-5 | pending (menu item mapped at (517,440)) |
| Destination dialog + Cloud tab + folder picker + repair toggle | ✓ `07-recovery/` | complete (round-4) |
| Insufficient-space gate | ✓ `07-recovery/` | captured |
| Recovery progress dialog | round-5 | pending (single-folder C: flow) |
| Activate dialog (CEnterLicenceDlg) | ✓ `02-landing/` | captured |
| Hamburger menu open + Settings/About/Language/Theme dialogs | round-5 | pending (inventory §4 ready) |
| Repair wizard pages | future | entry mapped (sidebar + AI option 2) |
| NAS / BitLocker / lost-disk flows | static only | artifacts 15 |
| Dark theme variants | future | Theme submenu mapped (§4) |

Cross-links: artifacts 04 (state machine), 05 (styling), 07–12 (phase deep-dives), 24/30 (prior dynamic runs), 31 (filter chain), 34 (toolbar chrome). Coordinate conventions: all positions window-relative on the 1024×735 runner client; verify per-resolution before reuse.
