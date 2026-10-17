# Dynamic UI Ground-Truth v4 — FULL LANDING PAGE on Real Windows (loader flow, CI runner)

**Experiment**: `ui-ground-truth.yml` run 39035022251, **windows-latest** runner, `app=drw` (DRW.exe loader), 60s wait — the final matrix cell (real Windows + real disks + production loader path)
**Evidence**: `re-workspace/raw-evidence/ui-ground-truth-win-native/` (screen_main/late.png 1024x720, windows_census.txt, processes.txt, launch.txt); VLM decode (z-ai vision); static correlation 100% (every read string found verbatim in DRWUI strings)
**Role**: The complete user-entry experience — pixel-verified landing page, closing the dynamic ground-truth matrix (Wine direct/loader + Windows direct/loader).

---

## 1. Runtime state (process + window census, verbatim)

```
launch.txt:    launched pid=208 exe=DRW                       (DRWLoader)
processes.txt: 208  DRW     (no window — supervisor, as decoded)
               6616 DRWUI   "EaseUS Data Recovery Wizard"    (main window)
windows_census: pid=6616 hwnd=0x20212 class=Qt5QWindowIcon
                title="EaseUS Data Recovery Wizard" rect=(0,0)-(1024,720)
```

**Loader chain confirmed on real Windows**: DRW.exe stays windowless while DRWUI owns the main window — exactly the supervisor contract. Enumeration **completed** on real hardware (unlike Wine where it hung at the splash) → the landing page rendered.

## 2. The landing page — complete visual decode (VLM, screen_late.png)

```
┌──────────────────────────────────────────────────────────────┐
│ EaseUS Data Recovery Wizard Free          [Hi Guess you need:]│
│──────────────┬───────────────────────────────│  • Unable to  │
│ DATA RECOVERY│ Select a location to search   │    find your  │
│ ▸Hardware Disk│ for lost data                │    hard drive?│
│  SD Card     │ ─ Internal drives (2) ─       │  • Try Advanced│
│  More        │ ┌─────────┐ ┌─────────┐       │    File Repair│
│  Recovery    │ │Windows▣ │ │ (drive2)│       │    [Pro/New]  │
│  Tools       │ │  (C:)   │ └─────────┘       │  • Quick start│
│──────────────│ │30.96/   │                   │    guide      │
│ ADVANCED     │ │149.45GB │  ▓▓▓▓░░ used      │  • Chat with us│
│  File Repair │ └─────────┘                   │  [wizard avatar]│
│  Lost Partition│ ─ Specify a location ─      │───────────────│
│  Rescue      │  ♻ Recycle Bin  🖥 Desktop    │                │
│──────────────│  📁 Select Folder             │                │
│ FILE BACKUP  │                                │                │
│  ChronoSnap  │  Unable to find your hard     │                │
│  Backup      │  drive? ⟳      [Search for Lost Data]          │
└──────────────────────────────────────────────────────────────┘
```

Verbatim strings captured: `EaseUS Data Recovery Wizard Free`, `Select a location to search for lost data`, `Internal drives (2)`, `Windows(C:)`, `30.96 GB/149.45 GB`, `Recycle Bin`, `Desktop`, `Select Folder`, `Unable to find your hard drive?`, `Search for Lost Data`, `Hi Guess you need:`, `Try Advanced File Repair`, `Quick start guide`, `Chat with us`, `Hardware Disk`, `SD Card`, `More Recovery Tools`, `File Repair`, `Lost Partition Rescue`, `ChronoSnap Backup`.

## 3. Static↔dynamic correlation ledger (all PASS)

| VLM-read string | Static location (DRWUI strings_ascii.txt) |
|---|---|
| `Select a location to search for lost data` | line 14538 ✓ |
| `Hi Guess you need:` | line 12455 ✓ |
| `More Recovery Tools` | lines 12967/14509 ✓ |
| `ChronoSnap` family | lines 10254–10289 (`url_chronosnap`, "Getting ChronoSnap Backup...", "ChronoSnap Backup Free", "Get started with ChronoSnap") ✓ |
| `Search for Lost Data` / sidebar entries / Specify-a-location trio | home-phase artifact 07 string inventory ✓ |

**100% of read UI text exists verbatim in the binary** — the strongest possible ground-truth validation of the string-inventory method.

## 4. Findings that refine the static model

1. **Left sidebar navigation is a first-class surface** — sections "Data Recovery" (Hardware Disk/SD Card/More Recovery Tools), "Advanced Features" (File Repair/Lost Partition Rescue), "File Backup" (ChronoSnap Backup). The static decode centered the 4-page stack + home tiles; the sidebar is the persistent mode-switcher between them (pairs with the UIUX view-manager decode — sidebar entries navigate the same stack).
2. **The Assistant popup renders at boot** ("Hi Guess you need:" + 4 suggestions + wizard avatar) — dynamic confirmation of the "AI layer" decoded in UIUX artifact 16; its 4 suggestions deep-link to: hard-drive help, repair upsell (Pro badge), quick-start guide, support chat.
3. **Device cards show live capacity + used-space bars** (Windows(C:) 30.96/149.45 GB) — enumeration data (WMI/mountmgr pass from the earlier artifacts) feeds the card stats directly.
4. **"Specify a location" trio** (Recycle Bin / Desktop / Select Folder) = the targeted-scan entries — matches the scenario controllers (CDoScanRecycleBin-family) from the DRWUI architecture artifact.
5. **Window class `Qt5QWindowIcon`**, 1024x720 (runner display floor) — the Qt window class name for the record.
6. Title carries **"Free"** suffix — the edition badge (version.ini `version=free` static + dynamic agree).

## 5. The dynamic ground-truth matrix — COMPLETE

| Environment | Launch | Result | Artifact |
|---|---|---|---|
| Wine 9 | DRWUI direct | exits pre-window (Firebase init) | v1 |
| Wine 9 | DRW loader | splash "Reading the disk information…" sustained (fake disks, enumeration never completes) | v1/v2/v3 |
| Windows (CI) | DRWUI direct | no UI, exits | v2 §2 |
| **Windows (CI)** | **DRW loader** | **FULL LANDING PAGE — device cards, sidebar, Assistant, all strings verified** | **this artifact (v4)** |

## 6. Next dynamic steps (queued)

- Scan-phase capture: xdotool/AutoIt click on "Search for Lost Data" → the scan progress + results tree (workflow extension ready to write)
- Deeper wait + dialog inventory on interactions (refresh flow, Select Folder browser)

## 7. Cross-links

- Splash-phase + loader dependency: `dynamic-ground-truth--splash-captured.md`, `--window-census-verification.md`, `--wine-loader-run.md`
- Static landing-page decode: `UIUX/07-home-phase-deep-dive.md`, `05-uiux-architecture.md`
- Boot architecture: `architecture/04-recovery-workflow.md`, `architecture/07-user-flow-uiux.md`
