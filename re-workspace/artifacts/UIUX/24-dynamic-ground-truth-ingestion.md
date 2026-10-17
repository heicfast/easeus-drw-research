# UI/UX Artifact 24 — Dynamic Ground Truth Ingested: DRWUI Runs (Loader Path) with Real Window Census

> Scope: ingestion of the first **successful** dynamic ground-truth CI runs into the UIUX doc set —
> runtime confirmation of statically-decoded behaviors, plus new runtime facts not visible in static
> analysis.
> Companion artifact: `dynamic-ground-truth--wine-loader-run.md` (parallel session) analyzes the
> earlier salvaged loader run's **process tree** (DRW idle-supervisor / DRWUI alive at 452 MB RSS /
> AliyunWrapExe telemetry spawned eagerly at 25.8% CPU / SCM service stack) — this artifact ingests
> the subsequent **successful** runs' window censuses + runtime behavior; the two are complementary.
> Runs (2026-10-17 12:37–12:40 UTC): Windows-native 39033262731 (success), Wine loader 39033264252
> (success), Wine direct 39033264252/direct leg (success-with-empty-census — the finding itself).
> Workflows: `ui-ground-truth.yml` (Windows) + `ui-ground-truth-wine.yml` (loader/direct matrix,
> parallel session's design). Raw: CI artifacts `ui-ground-truth`, `ui-ground-truth-loader`,
> `ui-ground-truth-direct` (censuses, wine_out.log, app logs, screenshots).

## 1. The headline result — DRWUI renders under the loader path

The Wine **loader** variant (DRW.exe → supervises DRWUI.exe) produced a real, titled, fully-laid-out
main window under Xvfb (1600×1000 virtual screen):

```
wmctrl -l:  0x00800014  runnervm8k3b6  DRWUI
xwininfo -root -tree (top levels):
  0x200122 ()  1600x1000+0+0
    0x800014 "DRWUI"  1600x1000+0+0        ← main window, FULL display = maximized
  0x800011 "DRWUI"  365x30+128+185         ← child row elements (home-page tiles/rows)
  0x80000e "DRWUI"  212x30+204+185
  0x80000b "DRWUI"  170x30+225+185
  0x800008 "DRWUI"  268x30+176+185
  0x800004 "DRWUI"  640x480+480+260         ← central 640×480 child (splash/center content)
  + "Default IME" (1×1), explorer.exe tray bits, matchbox WM shell
```

**Runtime confirmations of static decodes:**

| Static claim (artifact) | Dynamic evidence | Verdict |
|---|---|---|
| DRW.exe = launcher/supervisor that keeps DRWUI alive (`DRW-exe--launcher.md`) | **Loader leg: DRWUI alive with rendered window at census time; direct leg (DRWUI.exe alone): zero windows** — the app exits standalone (Firebase Remote-Config init path) but survives under DRW.exe supervision | ✓ (strongest confirmation of the supervisor architecture) |
| Window opens maximized (07/05: "DrwMainWindow opens maximized 1240×840 normal") | Window occupies the entire 1600×1000 Xvfb display (maximized-to-screen) | ✓ |
| Window title (class map 03) | Top-level title = "DRWUI" (frameless title text set by the app) | ✓ |
| Home page = tile/row layout with per-feature entries (07) | Four ~30px-tall child windows clustered at (128–268, 185) — a horizontal row of UI elements sized 170/212/268/365 px wide + a 640×480 centered child | ✓ (geometry matches a tile-row + central content) |
| Device enumeration at startup (04 workflow, EPMLOG) | mountmgr ioctl traffic (volume extents, storage property queries) + fresh `CEaoActiveOnline::Init success` log entries at 12:39:29 | ✓ |

## 2. New runtime facts (not in static decodes)

1. **NAS-scan firewall prep, i18n-aware** — the app runs, at startup:
   `netsh advfirewall firewall set rule group="Network Discovery" new enable=Yes` **and** the same
   command with the GBK-encoded Chinese group name `网络发现` (wine_out.log bytes
   `\00cd\00f8\00c2\00e7\00b7\00a2\00cf\00d6` = GBK CDF8 C2E7 B7A2 CFD6). Windows matches firewall
   rule groups by **localized** name, so the app enables Network Discovery on both English and
   Chinese systems before NAS scanning — dynamic confirmation of the NAS flow's network prep
   (artifact 15), with a new i18n detail.
2. **COM dependencies (optional, tolerated)**: `CoCreateInstance` of
   `{c72be2ec-8e90-452c-b29a-ab8ff1c071fc}` with **CLSCTX_REMOTE_SERVER** fails under Wine and the
   app continues (registered nowhere in-tree) — a remote-server COM the app probes; plus
   `{9c38ed61-d565-4728-aeee-c80952f0ecde}` (context 0x4 = CLSCTX_INPROC_SERVER? local-only) also
   unregistered. Both failures are non-fatal — the startup proceeds to full window render.
3. **WMI usage at startup**: wbemprox security-blanket calls (WMI client security) — the device
   manager corroborates disks via WMI in addition to the mountmgr IOCTL path.
4. **`fsutil behavior` query** at startup (fs quirks detection).
5. **Shipped-log contamination**: the repo's `og-codebase` carries pre-existing `EPMLOG.log` /
   `Eaolog.log` / `strutureReg.log` from the **original packaging machine** — the runs append fresh
   entries, so downloaded logs mix 2026-10-14/15 (vendor machine) with 2026-10-17 (runner) entries.
   Separately, `strutureReg.log` is a shipped **dev-config JSON** with build metadata:
   `"appversion":"19.3"`, module `"视频重组"` (video reconstruction), moduleversion
   `"19.2回退分支"` (19.2 rollback branch), environment `"开发机器"` (development machine),
   workType `"输出重组datarun"`, level DEBUG — direct build-tree provenance for the repair line.

## 3. Run-by-run verdicts

| Run | Variant | Outcome | Window census | Reading |
|---|---|---|---|---|
| 39033262731 | Windows-native (DRWUI.exe direct, 45 s) | success (job) | only runner console + Progman; screenshots show dark terminal (60% #0c0c0c), no DRWUI window | DRWUI initializes (fresh Eaolog entries, pid 6920) but exits before/without rendering a visible window in the runner session — consistent with the direct-standalone early exit |
| 39033264252 (loader leg) | Wine, DRW.exe | success | **full DRWUI window tree** (§1) | the production launch path works; supervisor keeps the UI alive |
| 39033264252 (direct leg) | Wine, DRWUI.exe standalone | success (job) | empty (matchbox only) | **verified negative**: standalone exit — corroborates the loader's necessity and the earlier Firebase-init diagnosis |

## 4. What this closes / what remains

- **Closed**: 05-uiux §7 item 3 (dynamic confirmation) — the decoded launch→maximized-window→home
  layout is now runtime-verified (loader path), and the DRW supervisor role has its strongest
  evidence yet (loader-vs-direct differential).
- **Remains for the next ground-truth round** (when the workflow is re-dispatched): longer-wait
  captures on the loader path to walk past the home page (needs interaction — a scripted click
  driver, e.g. xdotool on the tile row at (128–268, 185)), screenshot capture in the Wine matrix
  (only censuses were uploaded this round), and the Windows-native variant launched through
  `DRW.exe` (the successful recipe) instead of DRWUI direct.

## 5. Raw evidence pointers

- `windows_census.txt` (loader): wmctrl + xwininfo tree — the §1 window list.
- `wine_out.log` (loader): mountmgr ioctls, fsutil, netsh ×2 (EN + GBK group), COM CLSIDs, WMI
  blanket calls.
- `applog_Eaolog.log` (loader): fresh `CEaoActiveOnline::Init success` at 2026-10-17 12:39:29
  (T/P:328/324).
- `applog_strutureReg.log`: shipped dev-config JSON (§2.5).
- Windows-native run: `launch.txt` (pid 6920), screenshots `screen_main.png`/`screen_late.png`
  (runner console only), fresh Eaolog entries at 12:37:51.

---

## 6. Source-level verification addendum (post-ingestion audit)

> Every §2 "new runtime fact" was subsequently traced to its static origin in the decompiled code,
> with two precision upgrades. All claims below carry the function/line evidence.

| §2 claim | Static origin (verified) | Verdict / correction |
|---|---|---|
| netsh EN (`Network Discovery`) | `FUN_14023e4a0` (DRWUI_decompiled.c:397497): `WinExec("netsh advfirewall firewall set rule group=\"Network Discovery\" new enable=Yes",0)` | ✓ |
| netsh GBK (`网络发现`) | Same function, 2nd `WinExec(&DAT_141103700,0)`; DAT bytes at .rdata 0x1103700 = `netsh advfirewall firewall set rule group="\xcd\xf8\xc2\xe7\xb7\xa2\xcf\xd6" new enable=Yes\0` — GBK byte-exact, 1 occurrence in DRWUI.exe | ✓ byte-exact |
| CLSID `{c72be2ec-8e90-452c-b29a-ab8ff1c071fc}` | `FUN_1403d5d40` (line 651393): `CoCreateInstance(...,0x17,...)` inside **`CMyFDHelper`** (vftable-confirmed class, `CFunctionDiscoveryNotificationWrapper` sibling) — i.e. Windows **Function Discovery**, not an anonymous remote COM. Context = **0x17** (INPROC\|INPROC_HANDLER\|LOCAL\|REMOTE), not CLSCTX_REMOTE_SERVER alone; failure returns an HRESULT the caller treats as soft | ✓ + precision upgrade (identity + context) |
| CLSID `{9c38ed61-d565-4728-aeee-c80952f0ecde}` | **NOT in DRWUI.exe** (byte scan = 0 hits). It lives in the **PartitionRecovery family** (MainModule/UILogic/RecoveryModule/CloneModule/PartitionRecovery/ToolsModule.dll) and in **Device.mo**: `Device_decompiled.c:51709` = `CDiskEnumerator : Vds loadservice` — the **VDS (Virtual Disk Service) loader**, gated by `dwMajorVersion >= 6`, context `4` = **CLSCTX_LOCAL_SERVER** (correct — VDS is a service), not "INPROC? local-only" | **corrected attribution**: requested at runtime by the **Device.mo MOM module loaded inside DRWUI's process** — dynamic proof of the module system doing COM device enumeration in-process |
| WMI at startup | `CoInitialize` + `CoInitializeSecurity` + `CoCreateInstance(DAT_140f5bdf8, 1)` + connect `ROOT\CIMV2` + `CoSetProxyBlanket(p,10,0,0,3,3,0,0)` (lines 259840–259880) — canonical WMI client-security pattern; plus `Device_decompiled.c` uses blanket `(…,6,3,…)` on 10 sites (its own WMI/SWbem helpers) | ✓ (both DRWUI and Device.mo WMI stacks confirmed) |
| `fsutil behavior` query | `FUN_14023e…` (lines 178713/178780): `GetSystemDirectoryA + "%s\fsutil.exe"`, `CreatePipe`+`CreateProcessA` with `hStdOutput=hStdError=pipe`, `WaitForSingleObject(10000)`, `PeekNamedPipe`→`ReadFile(≤0x400)`, `StrStrA("= ")` → char '0'/'1' → global `DAT_141ba9514` | ✓ (it's an **output-parsed fs-quirk probe**, result cached in a global tri-state −1/0/1) |
| COM failures non-fatal | Both paths guard: VDS `if (HVar3 == 0)` then enumerate (loop simply empty when absent); FD error returns up as HRESULT with the window still rendering (§1) | ✓ |

**Bonus static finds in the same cluster (NAS init, `FUN_14023c980` — the connector constructor):**
`%s\NasConfig` path build → `NasConfig\ssh_config.ini` append (the shipped config's consumer!),
`CoInitializeEx(0,0)` → FD init (`FUN_14023e530`) → **conditional dual-netsh** (only when
`FUN_1402413b0(+0x68)` says the firewall group needs it) → FD re-init → `GetTickCount` delta stored
at `+0xa8` (init-duration telemetry). Neighbor `FUN_14023e460`:
`WinExec("explorer ::{F02C1A0D-BE21-4350-88B0-7367FC96EF3C}",5)` — opens the shell's **Network
Computers** folder (the "browse NAS in Explorer" affordance of the NAS flow, artifact 15).

**Cross-links**: MOM module system (Device.mo in-process COM) → `MOM-modules/Mom.md`,
`MOM-modules/Device.md`; NAS flow → `UIUX/15-scenario-flows-nas-bitlocker-linux-pe.md`; FD/VDS →
`re-workspace/artifacts/MOM-modules/DeviceManager.md` (storage-space enumeration).
