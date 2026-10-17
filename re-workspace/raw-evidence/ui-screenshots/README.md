# UI Screenshot Library — Redesign Reference Atlas

Every captured UI state, organized by user-flow area. Coordinates are window-relative (window maximized at (0,0), ~1024x735 client on 1024x768 runner desktop).

## 01-splash

- `splash-reading-disk-info.png` — Splash window: "Reading the disk information, please wait..." + progress line
- `splash-t35.png` — Splash at t+35s (Wine loader run)

## 02-landing

- `landing-baseline.png` — Landing page baseline: title bar icons, sidebar, device tiles, AI panel area, Scan CTA
- `landing-early.png` — Landing page early (device enumeration just completed)
- `landing-baseline-v2.png` — Landing baseline (atlas run 2): Windows(C:) + Temporary Storage(D:) tiles
- `landing-ai-assistant-panel.png` — AI assistant panel open: "Hi! Guess you need:" + 4 options (robot avatar toggle)
- `landing-ai-opt1-solution-wizard-1of3.png` — AI option 1 -> "Unable to find your hard drive?" 3-step solution wizard, step 1/3 (Refresh drives)
- `landing-ai-opt1-solution-wizard.png` — AI option 1 solution wizard (alt copy)
- `landing-solution-wizard-1of3.png` — Solution wizard step 1/3: "Solution 1: Refresh drives." (blue callout modal)
- `landing-solution-wizard-2of3.png` — Solution wizard step 2/3 (Next walked)
- `landing-solution-wizard-3of3.png` — Solution wizard step 3/3
- `landing-solution-wizard-closed.png` — After wizard close (Next x3) - back to landing state
- `landing-buy-activate-dialog.png` — CEnterLicenceDlg (buy/cart click): "Enter your license code to enjoy full features" + input + Paste/Activate + "Buy a License Now" (yellow) + "No reinstallation or rescan required" note

## 03-scan-phase

- `scan-midscan-21pct.png` — Mid-scan: circular 21% gauge, Files Found counter, Searching strip, pause/stop buttons
- `scan-midscan-210s.png` — Mid-scan at t+210s (deep-scan phase)
- `scan-paused.png` — PAUSED state: "Scan Paused" + red "Scanning Paused." strip, resume/stop buttons
- `scan-resumed.png` — Resumed state after pause toggle
- `scan-stop-confirm-dialog.png` — Stop confirm (CScanCommonPopDlg): "Stop Searching for Lost Data?" + files-found + used-time stats, Stop/Continue
- `scan-after-stop-attempt.png` — After stop-confirm click (dialog persisted - click landed on body)
- `scan-midscan-34pct-prior.png` — Mid-scan 34% (prior ground-truth run): tree filling progressively, preview pane active

## 04-scan-complete

- `complete-celebration-modal.png` — Scan-complete celebration: standalone 540x380 OS window with stats grid + Go to Recover CTA
- `complete-celebration-modal-v2.png` — Celebration modal (round-3 run)

## 05-results

- `results-baseline.png` — Results baseline after Go to Recover: tree + list + preview pane + AI Recommend toast
- `results-filter-bar-open.png` — Filter bar open: Path + Type dropdowns row under toolbar
- `results-type-tab-midtransition.png` — Type tab click: async classify-tree rebuild captured mid-transition
- `results-path-tab.png` — Path tab: path-tree mode restored
- `results-row-selected.png` — Row selected: checkbox fill, details pane update, Recover button becomes contextual
- `results-context-menu-open.png` — RIGHT-CLICK context menu (CShowContextMenu): Recover / Preview / Open file location / Select unrecovered files / Smart select best files / Clear selection
- `results-row-selected-gate-dismissed.png` — Row selected after retention gate dismissed (search-click hit gate X)
- `results-context-menu-open-v2.png` — Context menu on app: 6 items, panel x 300-734 y 375-636, items 43.5px (Preview = item 2 center (517,440))
- `results-baseline-v2.png` — Results baseline (round-3 run)
- `results-row-selected-round4.png` — Row selected (round-4 clean capture)
- `results-context-menu-round4.png` — Context menu (round-4 variant geometry)

## 06-preview

- `preview-panel-live.png` — Live preview panel (double-click): thumbnail + "Recovery Chances: High" circular gauge

## 07-recovery

- `recovery-entry-results.png` — Recovery entry: results view + "AI Recommend available." toast
- `recovery-retention-gate.png` — RETENTION GATE (Recover All on Free): "Wait! You are at risk of losing data!" + 40%-Off/Online-Service/Quit
- `recovery-after-esc.png` — Retention gate after ESC attempt (dialog state)
- `recovery-destdlg-early-state.png` — Destination dialog early state
- `recovery-destination-dialog.png` — ChooseDestinationPathDialog: Local/Cloud tabs, drive list w/ space stats, Enable-file-repair toggle (ON), Save button (disabled)
- `recovery-exit-retention-gate.png` — EXIT-RETENTION GATE (2nd ESC from results = exit attempt): "Wait! You are at risk of losing data!" + Get-Up-to-40%-Off / Online-Service / Quit
- `recovery-destination-dialog-clean.png` — Destination dialog clean state (round-4)
- `recovery-destdlg-local-selected.png` — Destination: Windows(C:) row selected (radio + highlight)
- `recovery-destdlg-cloud-tab.png` — Destination: Cloud tab active (cloud drive list / sign-in state)
- `recovery-destdlg-choosefolder.png` — Destination: Choose folder clicked (native folder picker or folder browse)
- `recovery-destdlg-repair-off.png` — Destination: Enable-file-repair toggle OFF state
- `recovery-insufficient-space-gate.png` — INSUFFICIENT SPACE GATE (Save with 146GB need on 3.9GB-free D:): "Need an additional 146.41 GB" + Continue/Reselect
- `recovery-retention-gate-v2.png` — Retention gate via context-menu Recover on 1.1M files (round-4 variant)

