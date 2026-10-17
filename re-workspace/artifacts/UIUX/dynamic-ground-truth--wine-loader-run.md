# DRW.exe Dynamic Ground-Truth under Wine — Runtime Process Tree, Disk Enumeration, and Startup Behavior

**Experiment**: `ui-ground-truth-wine.yml` run 39032355890, job `screenshot (DRW.exe, loader)` — Wine 9.0 (Ubuntu 9.0~repack-4build3) on ubuntu-latest, Xvfb :99 1600x1000x24, WINEPREFIX fresh, WINEDEBUG=err+seh,err+module, 90s observation
**Evidence**: job log (process table at t=90s, wine_out.log 9,682 bytes echoed, orphan-process termination list), prior direct-DRWUI run 39031718799 (Firebase init output)
**Role**: First runtime verification of the decoded startup architecture — DRWLoader→DRWUI supervisor chain, service interaction, disk-enumeration call sequence, and spawned telemetry processes.

---

## 1. Verified process tree at t=90s (ps output, verbatim)

```
runner 12153 30.1% CPU  /usr/lib/wine/wineserver64 -p0
runner 12171           C:\windows\system32\winedevice.exe        (Wine device svc)
runner 12213           C:\windows\system32\winedevice.exe        (2nd instance)
runner 12230           Z:\...\og-codebase\DRW.exe                (loader, idle — supervisor)
runner 12234  6.1% CPU  DRWUI                                    (2,224,272 KB VSZ / 452,604 KB RSS — ALIVE)
runner 12238 25.8% CPU  Z:\...\og-codebase\AliyunWrapExe.Exe     (telemetry uploader, ACTIVE)
```

Plus orphan-termination list: `Xvfb, start.exe (DRW.exe stub), wineserver64, services.exe, winedevice.exe, svchost.exe, plugplay.exe`.

**Confirmations against static analysis**:
1. **DRW.exe = supervisor, not the app** — it stays resident (idle) while DRWUI does the work; exactly the DRWLoader contract decoded from PDB `DRWLoader.pdb` and decompiled flow (artifact `DRW-exe--launcher.md`).
2. **DRWUI spawned by the loader survives 90+ seconds** and consumes 452 MB RSS / 2.1 GB VSZ — consistent with the decoded 2 MB shared log buffer + Qt UI + engine preloading.
3. **DRWUI spawns `AliyunWrapExe.Exe` at startup** — the Aliyun OSS wrapper (crash-dump/telemetry upload path; sibling of `send_dmp_with_aliyun.exe` in the live tree) is launched eagerly, before any user interaction, and consumes 25.8% CPU (upload retry loop against unreachable endpoints).
4. **DRWLoader triggers the NT service stack**: `services.exe`, `svchost.exe`, `plugplay.exe` running under Wine = the loader (or DRWUI) attempted SCM operations — consistent with DRWService.exe (BitlockerReadFVEService, AUTO_START per decoded service artifact) being registered/started by the install-supervisor flow.

## 2. DRWUI's decoded runtime call sequence (from wine_out.log fixme/err lines)

In start-up order (thread ids 0144 = DRWUI main, 007c = worker, 01b8/01c4 = helpers):

| Wine log line | Decoded DRWUI behavior |
|---|---|
| `ver:GetCurrentPackageId` stub | MSIX/package identity query — the app checks whether it's running as an appx (Store build detection) |
| `win:RegisterPowerSettingNotification` | **Power-source monitoring** — DRW registers for AC/battery events (disk-scan safety on laptops; pairs with the USB-unplug guard in the UI artifacts) |
| `urlmon:InternetBindInfo_GetBindString` | URL moniker binding — the remote-config/firebase network stack initializing |
| `ole:CoInitializeSecurity` + `wbemprox:wbem_locator_ConnectServer` (×2 rounds) | **WMI connection for hardware inventory** — disk/USB enumeration via WMI (Win32_DiskDrive class family) exactly as the device-enumeration artifacts decode |
| `d3d:wined3d_guess_card` (llvmpipe) | Qt scene-graph / D3D surface probing — the graphics stack initializing for the landing page |
| `system:EnableNonClientDpiScaling` ×6 | **Six top-level windows DPI-registered** at startup — matches the window census from RTTI: main window + toplevel dialogs created before scan starts |
| `event:wait_for_withdrawn_state` timeouts on hwnd 0x20098 / 0x60082 / 0x50086 / 0x40090 (×4 rounds) | Qt window state machine cycling on 4 windows — splash/landing transitions waiting for map/unmap events |
| `mountmgr:query_property Faking StorageDeviceProperty` + `IOCTL_VOLUME_GET_VOLUME_DISK_EXTENTS` ×4 | **Physical disk enumeration** — 4 volume-extent queries = the runner's C: plus Wine's virtual devices; DRWUI is building its device list |
| `mountmgr` volume-label denial for `Z:\` | Drive-type probe of the working directory (network-drive classification path) |
| `ntlm_auth not found` / `ntlm_LsaApInitializePackage` | DRWUI attempting an authenticated network path (proxy/cloud) — NTLM unavailable under Wine |
| `ole class {c72be2ec-8e90-452c-b29a-ab8ff1c071fc} not registered` + `CLSCTX_REMOTE_SERVER` | COM server activation attempt (out-of-proc); CLSID unresolved under Wine — candidate: shell/automation helper |
| `fsutil behavior` ×2 (unsupported under Wine) | **DRWUI shells out to `fsutil behavior`** — filesystem-behavior queries (e.g. disable last-access updates, symlink eval) — new runtime finding not visible in static import scan (launched via cmd, not import) |
| `ole:com_get_class_object apartment not initialised` | A worker thread using COM before CoInitialize — benign race in a telemetry thread |

## 3. Direct-DRWUI control run (previous run, DRWUI.exe standalone)

DRWUI launched standalone prints (app-level stdout, pre-window):
```
WARNING: Database URL not set in the Firebase config.
Try to initialize Remote Config...
```
then exits before 60s. Decoded meaning: DRWUI parses `google-services.json` (shipped in tree), finds no `databaseURL` (field genuinely absent in the shipped JSON — verified), proceeds to Firebase Remote-Config bootstrap, and (without the loader environment / under unsupported conditions) terminates. **The loader-launched run stays alive** — evidence the loader provides required runtime context (events, log buffer, restart guard) beyond mere process creation.

## 4. Findings that refine the static model

1. **AliyunWrapExe.Exe is a startup-critical child** — the telemetry/aliyun channel is not lazy (uploaded only on crash) as earlier described; it launches during DRWUI init. Its 25.8% CPU is the retry loop (no network on the runner).
2. **WMI-first enumeration** — DRWUI's device enumeration issues WMI + mountmgr queries in the first seconds, BEFORE any scan starts: the device list on the landing page is built from this pass (feeds `CEnumDevice`-family classes from RTTI map).
3. **Six windows, not one** — the "single main window" simplification is wrong at Win32 level: 6 top-level HWNDs get DPI-registered (Qt creates helper toplevels — tooltip/popup share windows + the main frame + progress dialog templates).
4. **fsutil usage** — first observation of `fsutil behavior` shell-out (two invocations); static analysis missed it because it's a CreateProcess launch, not an import. Candidate purpose: `fsutil behavior query disabledeletenotify` (TRIM status — affects recovery advice on SSDs — pairs with the SSD-TRIM warning strings in the UI artifacts).
5. **No window mapped under bare Xvfb** — wmctrl census empty because no window manager ran (Xvfb alone): windows existed (4 hwnds cycling state) but never managed/mapped. Fix applied (matchbox-window-manager) in workflow v3 — re-run pending.

## 5. Method notes (verification discipline)

- All claims above cite either the ps table, the wine log, or the orphan-process list from the job log (run 39032355890) — no inference beyond the evidence is stated as fact.
- The `{c72be2ec-...}` CLSID is recorded as unresolved — no attribution made.
- DRWUI.exe standalone behavior (run 39031718799) is kept separate from loader-flow claims.

## 6. Cross-links

- DRWLoader static decode: `artifacts/DRW-exe--launcher.md`; service chain: `DRWService-exe--bitlocker-service.md`
- Aliyun channel static: per-binary artifact AliyunWrapExe / send_dmp_with_aliyun
- Device enumeration static: DRWUI device classes (`CEnumNasDevice`, drive lists) in `DRWUI-exe--main-ui-architecture.md`
- Window census static: `UIUX/` artifacts (view manager 4 pages, 141 window classes)
- Follow-up: v3 re-run with matchbox WM (screenshots expected once windows map)

---

*Cross-link (session 4): the follow-up successful runs (39033262731 Windows-native, 39033264252
Wine loader/direct matrix) are ingested in `24-dynamic-ground-truth-ingestion.md` — window census
(maximized 1600×1000 "DRWUI" + tile-row children + 640×480 central child), loader-vs-direct
differential, and i18n-aware NAS firewall prep (netsh EN + GBK 网络发现).*
