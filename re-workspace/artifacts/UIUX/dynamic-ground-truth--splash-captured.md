# Dynamic UI Ground-Truth v3 — SPLASH SCREEN CAPTURED: "Reading the disk information, please wait…"

**Experiment**: `ui-ground-truth-wine.yml` run 39034393167 (v5 — capture-dir fix), loader variant; screenshots at t=20/35/50/70/90s (1600x1000 PNG, both full-screen and per-window captures), VLM-assisted visual decode (z-ai vision), static correlation against DRWUI strings
**Evidence**: `re-workspace/raw-evidence/ui-ground-truth-v5/` (5 drwwin_t*.png + screen_t*.png + censuses + wine_out.log, committed)
**Role**: Final piece of the dynamic boot-flow verification — the splash screen identified, the "640x480 modal" question resolved, and the boot story completed end-to-end with pixel evidence.

---

## 1. What the screen actually shows (VLM decode of drwwin_t50.png / screen_t50.png)

A single visible window — **the splash screen (CStartWindow)**, upper-left of the virtual desktop:

```
┌────────────────────────────────────────────┐
│ [🧰 icon]  EaseUS Data Recovery Wizard     │  ← bold title
│            Reading the disk information,   │  ← status, lighter gray
│            please wait...                  │
│        (isometric 3D illustration:         │  ← translucent blue/purple/pink
│         servers/folder/music-note/         │     blocks connected by lines,
│         hard-drive + lock/key)             │     glowing data-recovery art)
│ ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░ │  ← thin blue progress bar,
└────────────────────────────────────────────┘     ~60–70% filled, bottom edge
```

- Rounded corners, white/light-blue gradient, drop shadow, first-aid-kit icon (white kit, yellow cross on blue tile)
- **No buttons, no dialogs, no other windows** — the only rendered surface
- The progress bar at ~60–70% **matches the record-4 progress mapping finding** (splash-phase progress reporting via CSaveAndRestoreProgressInfo-family progress objects) and the mountmgr/WMI enumeration call sequence in wine_out.log

## 2. The "640x480 modal" RESOLVED

The census-tracked 640x480 window (0x800004, two at t=8s → one from t=20s) is **the splash window itself** (frameless, repositioned by matchbox to the top-left), not a modal dialog. The duplicate at t=8 (0x800005 + 0x800004) was the splash being re-created or its paint double-buffer twin — both settled to one by t=20s.

## 3. Static↔dynamic correlation (exact)

The splash status string sits in DRWUI's .rdata **directly beside its widget object names** (strings_ascii.txt lines 12925–12935):

```
DrwMainWindow::{ctor}::<lambda_aed2cbd4ca235b957e82cc5d14c088fd>::operator()
url_survey
"Reading the disk information, please wait"     ← rendered status (VLM-confirmed)
1refreshTipText(const QString&)
2textChanged(const QString&)
StartWindowIconLabel                            ← the first-aid-kit icon widget
"EaseUS Data Recovery Wizard"                   ← rendered title (VLM-confirmed)
StartWindowTitelLabel                           ← the title widget
bg_downloader.png                               ← the isometric illustration asset
```

**Decoded**: `DrwMainWindow`'s constructor (via its lambda) builds the **CStartWindow** splash from four named widgets — `StartWindowIconLabel` + `StartWindowTitelLabel` + the status label + `bg_downloader.png` art + the bottom progress bar. Every element the VLM described maps 1:1 to a static string in the binary. This also explains why the main 1600x1000 "DRWUI" window (0x800014) shows no content: the main frame is created and DPI-registered at boot but remains hidden **behind/under** the splash until disk enumeration completes.

## 4. Complete verified boot flow (all evidence channels agree)

```
1. DRW.exe (loader) starts → events + shared buffer → spawns DRWUI, watches crash events
2. DRWUI: Qt platform init, D3D probe (WineD3D fake window @ t≈8s)
3. DrwMainWindow ctor → CStartWindow splash: "Reading the disk information, please wait…"
   + progress bar (observed 60–70% under Wine, sustained)
4. Background: WMI ConnectServer ×2 + SetBlanket security, mountmgr
   IOCTL_VOLUME_GET_VOLUME_DISK_EXTENTS ×4, storage-property + geometry IOCTLs,
   fsutil behavior ×2, netsh firewall "Network Discovery" (EN + 网络发现),
   services.exe/svchost/plugplay spawned, AliyunWrapExe.Exe telemetry child
5. (Real Windows:) enumeration completes → splash closes → view manager stack
   page 2 PeripheralHomeView = landing page
   (Under Wine: fake disks + unresolved COM keep the splash spinning at 90s+ —
    the observed steady state)
```

## 5. Verification ledger update (v2 artifact §3 additions)

| Claim | v3 verdict |
|---|---|
| 640x480 modal identity (was OPEN) | **RESOLVED = CStartWindow splash** (not a dialog) |
| Landing page visible under Wine (assumed from t=20 stability) | **CORRECTED**: the stable state is the SPLASH, not PeripheralHomeView — the home page requires enumeration completion, which Wine's fake disks never deliver |
| 4 text widgets = home hero texts (v2 inference) | **CORRECTED**: they are the splash's title/status label cluster (StartWindow* widgets) |
| Splash progress = disk enumeration phase | **CONFIRMED** — progress bar sustained at 60–70% exactly while the mountmgr/WMI call sequence runs |

*(Corrections recorded against `dynamic-ground-truth--window-census-verification.md` §3 — that artifact's census data remains valid; only the two content attributions are corrected here.)*

## 6. Remaining ground-truth cells

- Windows-native **loader** run (app=drw on windows-latest): expected to complete enumeration on real disks → landing page + full UI — the one matrix cell not yet captured
- Scan-phase dynamic capture (clicking Scan needs input injection — xdotool scripted click queued as future work)
- The 100x30 four centered buttons at t=8 (v3 run) — pre-layout splash state, transient, benign

## 7. Cross-links

- Census timeline + loader-dependency: `dynamic-ground-truth--window-census-verification.md`
- v1 process tree/startup calls: `dynamic-ground-truth--wine-loader-run.md`
- Static splash widgets: `UIUX/03-window-class-map.md` + strings inventory artifact
- Boot architecture: `architecture/04-recovery-workflow.md` §1–2, `DRW-exe--launcher.md`
