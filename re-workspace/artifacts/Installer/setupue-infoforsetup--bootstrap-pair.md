# SetupUE.exe + InfoForSetup.exe — Installer Bootstrap Pair (OS detection + /SendInfo telemetry)

**Binaries**: SetupUE.exe (24,545-line decompilation, ghidra-core), InfoForSetup.exe (13,717 lines) — both live-tree-only (absent from the bootable PE build, per the WinPE payload census)
**Evidence**: string census (OS-name table, registry keys, /SendInfo command), import analysis, unins000.dat companion
**Role**: The installer-side bootstrap — documents how the product installs (bootstrap→Inno handoff), what environment telemetry the installer collects, and the "DRW_Installer" window that EuSendMessage.exe talks to.

---

## 1. SetupUE.exe — the bootstrap

- **Full Windows-version detection table** (16 OS strings from "Microsoft Windows 2000" through "Server 2016", edition variants: Standard/Enterprise/Datacenter/Web/Compute Cluster/Storage/Itanium/x64) — the bootstrap gates installation on OS version, using `GetNativeSystemInfo` + `RtlGetNtVersionNumbers` (native, WOW64-aware)
- **Registry contract**: `SOFTWARE\EASEUS\DRW\Version` — the installer writes/reads the product version key (the same hive `software.reg` seeds for PE and auto.bat's EPM key read)
- **Launches `InfoForSetup.exe`** (literal call) — the telemetry/install-info companion
- **The `DRW_Installer` window**: SetupUE (or its UI shell) owns the titled window that `EuSendMessage.exe` targets with WM_COPYDATA command 999 (WinPE messenger artifact §3) — the installer's status channel
- `unins000.exe` + `unins000.dat` + `unins000.msg` — the **Inno Setup uninstaller trio** (unins000 naming + .dat/.msg data files are Inno's signature) — the installer itself is Inno Setup-based, with SetupUE as a pre-install bootstrap that gates OS compat and collects info BEFORE the Inno wizard runs
- API-set strings (`api-ms-`/`ext-ms-`) — modern-delayload bindings

## 2. InfoForSetup.exe — install-time telemetry collector

Launched by SetupUE; its decompilation shows the data categories collected at install time (string census):
- **`Activity`** + **`Attribute`** + **`Country`** + **`Timezone`** — install-event telemetry fields (locale/environment dimensions)
- **`/SendInfo "..."` command** — the upload verb: InfoForSetup (or SetupUE invoking it) POSTs the install report
- **`Info_Userinfo`** + **`Install`** + **`Test_id`/`Testid`** — A/B-test bucketing ids and install-phase markers (the installer participates in the product's experiment framework)

## 3. Install flow synthesis

```
user runs setup (Inno Setup wizard)
  └─ SetupUE.exe (bootstrap): OS-version gate (16-OS table, native APIs)
       ├─ reads/writes SOFTWARE\EASEUS\DRW\Version
       ├─ spawns InfoForSetup.exe (/SendInfo telemetry: Activity/Country/Timezone/TestId)
       └─ owns "DRW_Installer" window (EuSendMessage WM_COPYDATA cmd-999 target in PE contexts)
  └─ Inno Setup proper: copies tree, writes unins000.{exe,dat,msg}
  └─ PE edition alternative: PE_Tools/WAIK flow (no SetupUE involved — PE never installs)
```

## 4. Cross-links

- WinPE-only messenger to this window: `WinPE/eusendmessage--wm-copydata-messenger.md`
- PE-side installer absence + version.ini stamping: `WinPE/pe-payload-census--buildpe-easeus-x64.md` §4
- Telemetry framework (195-event UI census): `UIUX/06-dialog-telemetry-inventory.md`
