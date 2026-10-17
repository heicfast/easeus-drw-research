# Dynamic UI Ground-Truth v2 — DRWUI Window Census under Wine (loader flow), Static-Claim Verification

**Experiment**: `ui-ground-truth-wine.yml` run 39033264252 (matrix: loader/direct), Wine 9.0 + Xvfb 1600x1000x24 + **matchbox-window-manager** (windows now MAP and appear in `_NET_CLIENT_LIST`), 90s observation, censuses at t=8/20/35/50/70/90s
**Companion run**: 39033262731 — Windows-native (windows-latest), DRWUI standalone direct launch
**Evidence**: windows_census.txt artifacts (loader + direct), job-log census timeline, wine_out.log 8,497 B, all_processes/processes.txt (Windows)
**Role**: Runtime verification of the statically-decoded user flow — what actually appears on screen when the product starts, and the loader-dependency of DRWUI.

---

## 1. The loader-flow window timeline (verified, time-series)

**t=8s (early boot state)**:
```
managed client: 0x800011 "DRWUI"
0x800008 "DRWUI" 100x30+740+445    ┐
0x800011 "DRWUI" 100x30+740+445    │ four SAME-SIZED (100x30) widgets,
0x80000e "DRWUI" 100x30+740+445    │ all stacked at screen center (740,445)
0x80000b "DRWUI" 100x30+740+445    ┘
0x800005 "DRWUI" 640x480+480+260   ┐ TWO 640x480 dialogs, centered
0x800004 "DRWUI" 640x480+480+260   ┘ (480,260 = exact center on 1600x1000)
```

**t=20s → t=90s (stable landing state)**:
```
managed client: 0x800014 "DRWUI" (main window now mapped)
0x800014 "DRWUI" 1600x1000+0+0     — MAIN WINDOW, FULL SCREEN (parent 0x200122 same size)
0x800011 "DRWUI" 365x30+128+185    ┐ four DIFFERENTLY-sized text widgets,
0x80000e "DRWUI" 212x30+204+185    │ laid out left-aligned at y=185
0x80000b "DRWUI" 170x30+225+185    │ (title/subtitle/link cluster — upper-left area)
0x800008 "DRWUI" 268x30+176+185    ┘
0x800004 "DRWUI" 640x480+480+260   — ONE 640x480 modal persists through t=90s
```

**Window count**: 22 X children total at t=90 (incl. 1x1 helper windows, "Default IME", Wine desktop's explorer.exe stubs, matchbox panel).

## 2. Direct-launch control (DRWUI.exe without DRW.exe)

**ZERO DRWUI windows at every census (t=8→90s)** — wmctrl client list empty, no DRWUI children under root. Combined with the prior no-WM run (Firebase init then exit) and the Windows-native run (processes.txt empty after 45s):

> **VERIFIED**: DRWUI.exe launched standalone does not present UI and exits (all three environments agree). The full UI appears **only when launched via DRW.exe (DRWLoader)**. This runtime-confirms the decoded supervisor contract (DRWLoader creates the crash events + shared log buffer + environment that DRWUI requires) — artifact `DRW-exe--launcher.md` — and resolves why `winpeshl.ini` launches DRW.exe, never DRWUI.exe directly.

## 3. Static-claim verification ledger

| Static claim (source) | Runtime observation | Verdict |
|---|---|---|
| View manager: QStackedWidget, 4 pages, landing = `PeripheralHomeView` idx 2 (UIUX 04, verified §10) | Main window maps fullscreen with a left-aligned text cluster (title/subtitle/links) in the upper area — consistent with the peripheral-home layout (list + hero text at top-left margins 36/48) | **CONSISTENT** (content-level check needs screenshot v4) |
| Main window geometry QSize(1240,840) @1312170 (UIUX 05, verified) | Window sized 1600x1000 = ENTIRE Xvfb screen — DRWUI maximizes/sizes-to-screen at boot; 1240x840 is the defaulted/min window | **REFINED**: default size vs runtime fullscreen behavior — both true (window opens maximized on large screens) |
| "6 DPI-scaled windows at startup" (Wine run 1, EnableNonClientDpiScaling ×6) | Census shows exactly: main + 4 text widgets + 1 modal = 6 non-helper windows | **EXACT MATCH — 6 windows confirmed** |
| Scan dialogs inventory: CScanCommonPopDlg 25 strings, 51 dialog classes (UIUX 06) | A 640x480 centered modal persists from t=8 to t=90 — a startup modal (splash/loading or error; no 640x480 literal found in binary geometry calls — likely default QDialog size or computed) | **OPEN** — identification pending screenshot capture (v4 run dispatched) |
| Firebase init at startup (cloud artifacts) | App-level stdout "Try to initialize Remote Config…" + urlmon binding | **CONFIRMED** |
| WMI disk enumeration (device classes) | wbemprox ConnectServer ×2 rounds + SetBlanket security negotiation | **CONFIRMED** — plus 2nd CLSID {9c38ed61-d565-4728-aeee-c80952f0ecde} local-server attempt recorded |
| Network Discovery for NAS flows (EuShare/NAS artifacts) | **NEW**: `netsh advfirewall firewall set rule group="Network Discovery" new enable=Yes` — DRWUI shell-executes netsh, trying BOTH the English rule-group name AND the Chinese name (网络发现) | **CONFIRMED + EXTENDED** — firewall enablement is a startup action (dual-locale rule names), previously unknown |
| fsutil shell-out (v1 finding) | `fsutil behavior` seen again (2 invocations) | **RE-CONFIRMED** |
| Volume enumeration before scan | `IOCTL_VOLUME_GET_VOLUME_DISK_EXTENTS` ×4 + storage-property queries + 3 more IOCTLs (7405c/4d004/70048) | **CONFIRMED + EXTENDED** — IOCTL 0x7405C (func 17 volume), 0x4D004 (storage query class 4), 0x70048 (disk geometry) recorded |

## 4. Refined boot-flow model (synthesis)

```
t=0     DRW.exe (loader) starts → creates events + shared buffer → spawns DRWUI
t≈2-8s  DRWUI: Qt platform init → D3D probe → 6 windows created (DPI-registered):
        main frame (hidden) + 4 placeholder widgets (centered, equal 100x30)
        + 2 centered 640x480 dialogs (splash pair)
        …services.exe/svchost/plugplay spawned (SCM interaction)
        …AliyunWrapExe.Exe spawned (telemetry)
t≈8-20s Firebase/remote-config attempt, WMI disk enumeration, mountmgr volume
        queries, netsh firewall rules (Network Discovery ×2 locales), fsutil
t≈20s   Layout settles: main window MAPS fullscreen; 4 hero texts take final
        left-aligned positions; one 640x480 modal remains
t=20-90s STABLE — landing page + persistent modal (no user input available)
```

The 4 text widgets' final positions (y=185, x=128–225, widths 170–365) match a multi-line left-aligned text block — the landing-page hero copy ("Recover lost data..." title + subtitle + link rows) per UIUX artifact 07.

> **v3 CORRECTION (supersedes two inferences below)**: the 640x480 window is the
> **CStartWindow splash** ("Reading the disk information, please wait…" — screenshot-verified,
> see `dynamic-ground-truth--splash-captured.md`), not a modal dialog; and the 4 text widgets
> are the splash title/status labels, not home-page hero texts. The landing page never appears
> under Wine because disk enumeration never completes. Census data itself unchanged.

## 5. Open items

- Screenshot capture failed silently in v3 (`import` + `xwd` both, errors suppressed) — v4 dispatched with visible errors + per-window capture (`import -window 0x800014`)
- 640x480 modal identity (splash vs error vs license prompt) — screenshot will resolve
- Windows-native run launched DRWUI direct (exits); a Windows-native run with `app=drw` (loader) is the remaining matrix cell — dispatch queued after v4
- CLSID {9c38ed61-...} and {c72be2ec-...} remain unidentified (recorded, no attribution)

## 6. Cross-links

- v1 runtime findings: `dynamic-ground-truth--wine-loader-run.md`
- Static UI claims verified here: UIUX artifacts 04/05/06/07 + `05-uiux-architecture.md` §10
- Loader contract: `DRW-exe--launcher.md`; NAS discovery: EuShare artifacts + `15-scenario-flows-nas-bitlocker-linux-pe.md`
- Full boot sequence (WinPE context): `architecture/03-winpe-boot-environment.md`
