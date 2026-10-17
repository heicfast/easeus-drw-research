#!/usr/bin/env python3
"""Ingest all captured UI screenshots into the organized redesign-reference
library: re-workspace/raw-evidence/ui-screenshots/<area>/<descriptive-name>.png
Sources: fresh atlas runs (in /tmp) + prior committed evidence dirs.
"""
import os, shutil, glob

REPO = '/home/z/my-project/easeus-drw-research'
EV = os.path.join(REPO, 're-workspace/raw-evidence')
OUT = os.path.join(EV, 'ui-screenshots')

# (source_path, dest_area, dest_name, description)
MANIFEST = [
    # ---- 01 splash / loading ----
    (f'{EV}/ui-ground-truth-v5/drwwin_t20.png', '01-splash', 'splash-reading-disk-info.png',
     'Splash window: "Reading the disk information, please wait..." + progress line'),
    (f'{EV}/ui-ground-truth-v5/drwwin_t35.png', '01-splash', 'splash-t35.png',
     'Splash at t+35s (Wine loader run)'),
    # ---- 02 landing ----
    (f'{EV}/ui-ground-truth-win-native/screen_late.png', '02-landing', 'landing-baseline.png',
     'Landing page baseline: title bar icons, sidebar, device tiles, AI panel area, Scan CTA'),
    (f'{EV}/ui-ground-truth-win-native/screen_main.png', '02-landing', 'landing-early.png',
     'Landing page early (device enumeration just completed)'),
    ('/tmp/atlas-landing2/shot_00_landing.png', '02-landing', 'landing-baseline-v2.png',
     'Landing baseline (atlas run 2): Windows(C:) + Temporary Storage(D:) tiles'),
    ('/tmp/atlas-landing2/shot_01_ai_panel.png', '02-landing', 'landing-ai-assistant-panel.png',
     'AI assistant panel open: "Hi! Guess you need:" + 4 options (robot avatar toggle)'),
    ('/tmp/atlas-landing2/shot_02_ai_opt1_nofind.png', '02-landing', 'landing-ai-opt1-solution-wizard-1of3.png',
     'AI option 1 -> "Unable to find your hard drive?" 3-step solution wizard, step 1/3 (Refresh drives)'),
    # ---- 03 scan phase ----
    ('/tmp/atlas-scanphase2/shot_00_midscan_150s.png', '03-scan-phase', 'scan-midscan-21pct.png',
     'Mid-scan: circular 21% gauge, Files Found counter, Searching strip, pause/stop buttons'),
    ('/tmp/atlas-scanphase2/shot_01_midscan_210s.png', '03-scan-phase', 'scan-midscan-210s.png',
     'Mid-scan at t+210s (deep-scan phase)'),
    ('/tmp/atlas-scanphase2/shot_02_paused.png', '03-scan-phase', 'scan-paused.png',
     'PAUSED state: "Scan Paused" + red "Scanning Paused." strip, resume/stop buttons'),
    ('/tmp/atlas-scanphase2/shot_03_resumed.png', '03-scan-phase', 'scan-resumed.png',
     'Resumed state after pause toggle'),
    ('/tmp/atlas-scanphase2/shot_04_stop_confirm.png', '03-scan-phase', 'scan-stop-confirm-dialog.png',
     'Stop confirm (CScanCommonPopDlg): "Stop Searching for Lost Data?" + files-found + used-time stats, Stop/Continue'),
    ('/tmp/atlas-scanphase2/shot_05_after_stop_confirm.png', '03-scan-phase', 'scan-after-stop-attempt.png',
     'After stop-confirm click (dialog persisted - click landed on body)'),
    (f'{EV}/ui-ground-truth-scanphase/screen_main_long.png', '03-scan-phase', 'scan-midscan-34pct-prior.png',
     'Mid-scan 34% (prior ground-truth run): tree filling progressively, preview pane active'),
    # ---- 04 scan complete ----
    (f'{EV}/ui-interaction-recovery-flow/shot_10_complete_modal.png', '04-scan-complete', 'complete-celebration-modal.png',
     'Scan-complete celebration: standalone 540x380 OS window with stats grid + Go to Recover CTA'),
    # ---- 05 results ----
    (f'{EV}/ui-interaction-results-interactions/shot_20_after_go_to_recover.png', '05-results', 'results-baseline.png',
     'Results baseline after Go to Recover: tree + list + preview pane + AI Recommend toast'),
    (f'{EV}/ui-interaction-results-interactions/shot_21_after_filter_click.png', '05-results', 'results-filter-bar-open.png',
     'Filter bar open: Path + Type dropdowns row under toolbar'),
    (f'{EV}/ui-interaction-results-interactions/shot_23_after_type_tab.png', '05-results', 'results-type-tab-midtransition.png',
     'Type tab click: async classify-tree rebuild captured mid-transition'),
    (f'{EV}/ui-interaction-results-interactions/shot_24_after_path_tab.png', '05-results', 'results-path-tab.png',
     'Path tab: path-tree mode restored'),
    (f'{EV}/ui-interaction-results-interactions/shot_25_after_row_click.png', '05-results', 'results-row-selected.png',
     'Row selected: checkbox fill, details pane update, Recover button becomes contextual'),
    # ---- 06 preview ----
    (f'{EV}/ui-interaction-results-interactions/shot_26_after_row_dblclick.png', '06-preview', 'preview-panel-live.png',
     'Live preview panel (double-click): thumbnail + "Recovery Chances: High" circular gauge'),
    # ---- 07 recovery flow ----
    (f'{EV}/ui-interaction-recovery-flow/shot_20_after_go_to_recover.png', '07-recovery', 'recovery-entry-results.png',
     'Recovery entry: results view + "AI Recommend available." toast'),
    (f'{EV}/ui-interaction-recovery-flow/shot_22_after_recover_all.png', '07-recovery', 'recovery-retention-gate.png',
     'RETENTION GATE (Recover All on Free): "Wait! You are at risk of losing data!" + 40%-Off/Online-Service/Quit'),
    (f'{EV}/ui-interaction-recovery-flow/shot_23_after_esc2.png', '07-recovery', 'recovery-after-esc.png',
     'Retention gate after ESC attempt (dialog state)'),
    # ---- round-2 atlas captures (context menu, destination, retention) ----
    ('/tmp/atlas-results/shot_21_context_menu.png', '05-results', 'results-context-menu-open.png',
     'RIGHT-CLICK context menu (CShowContextMenu): Recover / Preview / Open file location / Select unrecovered files / Smart select best files / Clear selection'),
    ('/tmp/atlas-results/shot_27_row_selected.png', '05-results', 'results-row-selected-gate-dismissed.png',
     'Row selected after retention gate dismissed (search-click hit gate X)'),
    ('/tmp/atlas-results/shot_29_destdlg_browseclick.png', '07-recovery', 'recovery-destdlg-early-state.png',
     'Destination dialog early state'),
    ('/tmp/atlas-results/shot_28_destination_dialog.png', '07-recovery', 'recovery-destination-dialog.png',
     'ChooseDestinationPathDialog: Local/Cloud tabs, drive list w/ space stats, Enable-file-repair toggle (ON), Save button (disabled)'),
    ('/tmp/atlas-results/shot_22_view_toggle_iconview.png', '07-recovery', 'recovery-exit-retention-gate.png',
     'EXIT-RETENTION GATE (2nd ESC from results = exit attempt): "Wait! You are at risk of losing data!" + Get-Up-to-40%-Off / Online-Service / Quit'),
    ('/tmp/atlas-landing2/shot_02_ai_opt1_nofind.png', '02-landing', 'landing-ai-opt1-solution-wizard.png',
     'AI option 1 solution wizard (alt copy)'),
    # ---- round-3 atlas captures (wizard walk + context menu geometry) ----
    ('/tmp/atlas-landing3/shot_02_ai_opt1_nofind.png', '02-landing', 'landing-solution-wizard-1of3.png',
     'Solution wizard step 1/3: "Solution 1: Refresh drives." (blue callout modal)'),
    ('/tmp/atlas-landing3/shot_02b_solution2of3.png', '02-landing', 'landing-solution-wizard-2of3.png',
     'Solution wizard step 2/3 (Next walked)'),
    ('/tmp/atlas-landing3/shot_02c_solution3of3.png', '02-landing', 'landing-solution-wizard-3of3.png',
     'Solution wizard step 3/3'),
    ('/tmp/atlas-landing3/shot_02d_solution_closed.png', '02-landing', 'landing-solution-wizard-closed.png',
     'After wizard close (Next x3) - back to landing state'),
    ('/tmp/atlas-results3/shot_21_context_menu.png', '05-results', 'results-context-menu-open-v2.png',
     'Context menu on app: 6 items, panel x 300-734 y 375-636, items 43.5px (Preview = item 2 center (517,440))'),
    ('/tmp/atlas-results3/shot_20_results_baseline.png', '05-results', 'results-baseline-v2.png',
     'Results baseline (round-3 run)'),
    ('/tmp/atlas-results3/shot_10_complete_modal.png', '04-scan-complete', 'complete-celebration-modal-v2.png',
     'Celebration modal (round-3 run)'),
    # ---- round-4 atlas captures (activate dialog, destination internals, space gate) ----
    ('/tmp/atlas-landing4/shot_06_buy.png', '02-landing', 'landing-buy-activate-dialog.png',
     'CEnterLicenceDlg (buy/cart click): "Enter your license code to enjoy full features" + input + Paste/Activate + "Buy a License Now" (yellow) + "No reinstallation or rescan required" note'),
    ('/tmp/atlas-results4/shot_29_destination_dialog.png', '07-recovery', 'recovery-destination-dialog-clean.png',
     'Destination dialog clean state (round-4)'),
    ('/tmp/atlas-results4/shot_30_destdlg_localrow_selected.png', '07-recovery', 'recovery-destdlg-local-selected.png',
     'Destination: Windows(C:) row selected (radio + highlight)'),
    ('/tmp/atlas-results4/shot_31_destdlg_cloud_tab.png', '07-recovery', 'recovery-destdlg-cloud-tab.png',
     'Destination: Cloud tab active (cloud drive list / sign-in state)'),
    ('/tmp/atlas-results4/shot_32_destdlg_choosefolder_picker.png', '07-recovery', 'recovery-destdlg-choosefolder.png',
     'Destination: Choose folder clicked (native folder picker or folder browse)'),
    ('/tmp/atlas-results4/shot_33_destdlg_repair_off.png', '07-recovery', 'recovery-destdlg-repair-off.png',
     'Destination: Enable-file-repair toggle OFF state'),
    ('/tmp/atlas-results4/shot_35_recovery_progress.png', '07-recovery', 'recovery-insufficient-space-gate.png',
     'INSUFFICIENT SPACE GATE (Save with 146GB need on 3.9GB-free D:): "Need an additional 146.41 GB" + Continue/Reselect'),
    ('/tmp/atlas-results4/shot_23_icon_view.png', '07-recovery', 'recovery-retention-gate-v2.png',
     'Retention gate via context-menu Recover on 1.1M files (round-4 variant)'),
    ('/tmp/atlas-results4/shot_28_row_selected.png', '05-results', 'results-row-selected-round4.png',
     'Row selected (round-4 clean capture)'),
    ('/tmp/atlas-results4/shot_21_context_menu.png', '05-results', 'results-context-menu-round4.png',
     'Context menu (round-4 variant geometry)'),
    # ---- round-5 atlas captures (menu open, filter dropdowns, search, preview content) ----
    ('/tmp/atlas-landing5/shot_09_menu_open.png', '02-landing', 'landing-hamburger-menu-open.png',
     'Drw_More_Menu OPEN: panel x 748-972, 13 items + 3 separators (Language/Help submenus, Activate, Check for Updates, Share submenu, Refer Friends, File Repair, Todo Backup, ChatPDF, Settings submenu, User Survey +red-dot, About)'),
    ('/tmp/atlas-landing5/shot_06b_after_close.png', '02-landing', 'landing-after-activate-close.png',
     'Clean landing after activate-dialog X-close (return-to-state reference)'),
    ('/tmp/atlas-landing5/shot_07b_license_input_focus.png', '02-landing', 'landing-activate-input-focus.png',
     'Activate dialog with license input focused'),
    ('/tmp/atlas-results5/shot_21_filter_bar.png', '05-results', 'results-filter-bar-open-clean.png',
     'Filter bar open (clean sequence): Show / File Type / Date Modified / File Size dropdowns + AI Recommend toggle'),
    ('/tmp/atlas-results5/shot_22_filter_path_dropdown.png', '05-results', 'results-filter-path-dropdown.png',
     'Path dropdown open + tree list (Windows C: 1.1M / File Path Lost...)'),
    ('/tmp/atlas-results5/shot_24_search_typed.png', '05-results', 'results-search-active.png',
     'Search active: "Search results for system" + filter tag with X'),
    ('/tmp/atlas-results5/shot_33_preview_panel.png', '06-preview', 'preview-panel-html-content.png',
     'Live preview panel rendering TEXT/HTML content (index.html source) + Recovery Chances: High + Existing + full file details'),
    ('/tmp/atlas-results5/shot_25_icon_view.png', '07-recovery', 'recovery-retention-gate-recurrent.png',
     'RECURRENCE proof: retention gate re-fires during results browsing (timed nag behavior)'),
    # ---- round-6 atlas captures (sidebar pages - ALL captured) ----
    ('/tmp/atlas-landing6/shot_24_sidebar_sdcard.png', '02-landing', 'landing-sidebar-sdcard-page.png',
     'SD Card page: "Connect Your Memory Card to Recover Lost Photos & Videos" coaching + camera-icon states'),
    ('/tmp/atlas-landing6/shot_25_sidebar_moretools.png', '02-landing', 'landing-sidebar-moretools-page.png',
     'More Recovery Tools page: the peripheral/tool tile grid'),
    ('/tmp/atlas-landing6/shot_26_sidebar_filerepair.png', '02-landing', 'landing-sidebar-filerepair-page.png',
     'File Repair page: repair-tool entry (add-file flow UI)'),
    ('/tmp/atlas-landing6/shot_28_sidebar_lostpartition.png', '02-landing', 'landing-sidebar-lostpartition-page.png',
     'Lost Partition Rescue page (DrwLostDiskPage): lost-disk selection UI'),
    ('/tmp/atlas-landing6/shot_29_sidebar_chronosnap.png', '02-landing', 'landing-sidebar-chronosnap-page.png',
     'ChronoSnap Backup page: disk-image/backup feature UI'),
    ('/tmp/atlas-landing6/shot_32_desktop_tile.png', '02-landing', 'landing-desktop-tile-clicked.png',
     'Desktop tile clicked (selection state)'),
    # ---- rounds 7-8 (retention periodic proof + sidebar confirmation) ----
    ('/tmp/atlas-landing7/shot_10_language.png', '07-recovery', 'retention-gate-landing-nag.png',
     'RetentionActiveDlg firing ON THE LANDING PAGE (no scan) - periodic-nag proof: interrupts menu-item clicks'),
    ('/tmp/atlas-landing8/shot_25_sidebar_moretools.png', '02-landing', 'landing-sidebar-moretools-confirm.png',
     'More Recovery Tools page (round-8 confirmation capture)'),
]

def main():
    made = 0
    missing = []
    index = {}
    for src, area, name, desc in MANIFEST:
        if not os.path.exists(src):
            missing.append(src)
            continue
        d = os.path.join(OUT, area)
        os.makedirs(d, exist_ok=True)
        dst = os.path.join(d, name)
        shutil.copyfile(src, dst)
        index.setdefault(area, []).append((name, desc))
        made += 1
    # write the index README
    with open(os.path.join(OUT, 'README.md'), 'w') as f:
        f.write('# UI Screenshot Library — Redesign Reference Atlas\n\n')
        f.write('Every captured UI state, organized by user-flow area. ')
        f.write('Coordinates are window-relative (window maximized at (0,0), ~1024x735 client on 1024x768 runner desktop).\n\n')
        for area in sorted(index):
            f.write(f'## {area}\n\n')
            for name, desc in index[area]:
                f.write(f'- `{name}` — {desc}\n')
            f.write('\n')
    print(f'copied {made} screenshots; missing sources: {len(missing)}')
    for m in missing:
        print('  MISSING:', m)

if __name__ == '__main__':
    main()
