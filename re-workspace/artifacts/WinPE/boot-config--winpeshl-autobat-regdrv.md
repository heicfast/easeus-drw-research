# WinPE Boot Configuration Files — winpeshl.ini, auto.bat, regdrv.reg, software.reg, Unattend.xml

**Binaries/files**: `BUILDPE/x64/Windows/system32/winpeshl.ini`, `BUILDPE/x64/auto.bat`, `BUILDPE/x64/regdrv.reg`, `BUILDPE/x64/software.reg`, `BUILDPE/x64/Windows/system32/Unattend.xml`, `BUILDPE/wallpaper.bmp`
**Tool evidence**: direct file reads (UTF-16 .reg decoded manually), directory census (`find`), name-diff vs main install tree
**Role**: These five small files are the complete "operating system configuration layer" of the bootable Emergency Disk — they define process launch order, driver service registration, shell chrome construction, and the display floor.

---

## 1. winpeshl.ini — the PE process launch list

WinPE's `winpeshl.ini` replaces the standard Windows shell (`explorer.exe`) with an ordered app list. Decoded content (byte-exact):

```ini
[LaunchApps]
"%systemdrive%\Windows\System32\wpeinit.exe"
"x:\program files\Other\Tools\ChangeRes.exe", setmax
"x:\program files\Other\Tools\launch.exe",  0 "x:\program files\Other\explorer\auto.bat"
"%systemdrive%\Program Files\easeus\DRW\DRW.exe"
"x:\program files\Other\Tools\launch.exe",  2
```

**Launch sequence semantics** (each entry runs in order; winpeshl waits for each to exit before the next, except where a program detaches):

| # | Command | Purpose |
|---|---------|---------|
| 1 | `wpeinit.exe` | WinPE initialization: PnP device enumeration, registry hive finalization, network stack init (if included in the WIM) |
| 2 | `ChangeRes.exe setmax` | Third-party tool — bumps display to the monitor's maximum resolution (PE default is 1024x768, see Unattend.xml §5) |
| 3 | `launch.exe 0 "...explorer\auto.bat"` | EaseUS wrapper `launch.exe` with mode `0` runs `auto.bat` (see §2) — this builds the pseudo-desktop shell **synchronously before the product starts** |
| 4 | `DRW.exe` | **The product itself** — DRWLoader (see artifact `DRW-exe--launcher.md`) spawns DRWUI.exe and enters its crash-supervisor loop |
| 5 | `launch.exe 2` | Mode `2` — keep-alive: holds the PE session open after DRW exits so the user can keep using the desktop (shortcuts, Chrome, Disk Management) |

**Key architectural fact**: DRW is launched by the *shell* (`winpeshl.ini`), not by `auto.bat` — so even if shell setup fails, the recovery product still starts. `auto.bat` is deliberately sequenced *before* DRW so the desktop/taskbar exist when DRWUI's Qt event loop comes up (Qt asks the OS for screen geometry via the platforms plugin — `platforms/qwindows.dll` shipped in `BUILDPE/EaseUS-x64/platforms/`).

## 2. auto.bat — the pseudo-desktop builder

Runs under `launch.exe 0` (an EaseUS batch interpreter wrapper — not stock `cmd.exe`, evidenced by the `launch.exe <mode> <command>` calling convention). Full decoded flow:

**Phase A — registry chrome imports** (~25 `.reg` files, applied via `regedit /s`):
- `ExplorerTaskBar-HKCU/HKLM.reg` + `ExplorerTaskBar-HKLM-CLSIDs.bat` — taskbar chrome (a PE explorer shell exists at `x:\program files\Other\explorer\`)
- `del-network.reg` — strips the network-places navbar (PE keeps network via PENetwork instead)
- `openfile.reg` — disables the "Open Containing Folder" context menu
- `powershell.reg` — enables PowerShell in PE
- `timedate.reg` — date/time CPL support
- `filetype.reg` — Chrome file-type bindings (see Phase E)
- `CLSID_DBFolderBoth.reg`, `address{,1,2}.reg`, `navigation.reg`, `filemgmt1.reg` — Explorer folder views, address bar, navigation pane
- `searchall.reg`, `query.reg` — search plumbing
- `clsid-mmc.reg`, `clsid-mmc2.reg`, `mmc.reg`, `msc.reg`, `msc1.reg`, `cpl.reg`, `cpl2.reg` — MMC + Control Panel applets
- `IExplorerHost.reg`, `desktop.reg`, `Cortana.reg`, `search.reg`, `txt.reg`, `display.reg`, `folder.reg`, `Properties.reg`, `navpane.reg` — desktop icons, Cortana off, display CPL, folder options

**Phase B — MMC snap-in registration** (`regsvr32 /s` on): `mmcndmgr.dll`, `devmgr.dll`, `dmdskmgr.dll`, `dmocx.dll`, `dmdlgs.dll`, `dmview.ocx`, `mmcshext.dll`, `filemgmt.dll`, `mycomput.dll` — this brings **Device Manager + Disk Management + Computer Management + Services** into the PE (a user who can't boot Windows can still inspect disk/device state from the recovery media).

**Phase C — profile + shortcut creation** (`createshort.exe`, an EaseUS tool):
- Start Menu "Administrative Tools" tree + systemprofile dirs (mmc, diskmgmt, "3D Objects")
- Desktop shortcuts: Computer Management, **Disk Manager** (diskmgmt.msc), **Device Manager** (devmgmt.msc), Change Keyboard Layout, PENetwork
- Deletes default desktop.ini files (clean desktop)

**Phase D — OEM channel branch** (regional product differentiation):
```bat
reg query "HKLM\SOFTWARE\EASEUS\EPM\Version" /v OEM  →  %ismainland%
echo %ismainland% | findstr /B /I "Mainland" && (
    copy /Y "x:\program files\Other\lnk\*.lnk" x:\Users\Default\Desktop\   [China OEM: preset shortcut pack]
) || (
    createshort.exe DRW.exe → "Data Recovery Wizard.lnk"                    [Intl: DRW desktop icon]
)
```
The **EPM** (EaseUS Partition Master) registry key gates DRW's own desktop branding — this PE image is shared across the EaseUS emergency-media lineage (DRW and EPM boot the same base image; the OEM value selects which shortcuts land on the desktop). This is independent confirmation of the shared `d:\epm\_epm_main\` build tree seen in the EUDCPEPM/EUEDKEPM PDB paths.

**Phase E — boot-media companion deployment** (GetDriver.exe detects the USB boot drive):
```bat
for /f %%i in ('GetDriver.exe') do set bootdrive=%%i
IF DEFINED bootdrive (
    :: Chrome becomes the file viewer (kiosk -app mode):
    HKCR\{jpegfile,pngfile,Paint.Picture,giffile,icofile,pdffile,htmlfile}\shell\open\command → chrome.exe -app=%%1
    IF EXIST bootdrive\Tools\DiskHealth\bin\DiskInfo.exe → copy api*.* aliyun*.* + "Disk Health.lnk"
    IF EXIST bootdrive\Tools\DiskMark\bin\DiskMarkUI.exe → copy + "Disk Mark.lnk"
    IF EXIST bootdrive\Tools\Google Chrome\chrome.exe → "Google Chrome.lnk"
    createshort "How to access shared folder.jpg" → .lnk   [screenshot-as-documentation]
    createshort "How to connect to Wi-Fi.jpg"   → .lnk
)
```
Two recoverable facts: (1) the bootable USB carries a `Tools\` tree beyond the WIM — DiskHealth (SMART), DiskMark (benchmark), Chrome are deployed **from the USB at boot time**, which is why `aliyun*.*` DLLs get copied (DiskHealth's telemetry stack — see `diskhealth/` in the main tree); (2) user assistance in PE is delivered as JPG screenshots wired into .lnk files — zero help subsystem in PE.

**Phase F — shell + network bring-up**:
```bat
launch.exe 0 "...PENetwork\PENetwork.exe"    [network stack — shares + Wi-Fi in PE]
start x:\windows\explorer.exe -winpe          [real Explorer, PE mode]
launch.exe 1 changerres.exe trayicon          [resolution tray applet]
:: ...shortcut creation with ping -n 2 pacing (1s sleep between each)...
del /Q /F explorer\*.reg & explorer\*.bat    [cleanup: chrome scripts removed from disk]
```
`explorer.exe -winpe` is the documented PE switch that runs Explorer with the WinPE profile (no Start-menu search, no Cortana — matches `Cortana.reg`/`search.reg` imports). PENetwork provides SMB client + Wi-Fi — the **network recovery path** in PE (NAS/NAS-agent flows from `EuShare` artifact still need `connect.exe`, which is runtime-downloaded; PENetwork gives plain SMB share access first).

## 3. regdrv.reg — driver service registration (UTF-16 LE)

Decoded entries (all values hex-verified):

| Service | Type | Start | ImagePath | Extra values |
|---|---|---|---|---|
| `epmdkdrv` | 1 KERNEL_DRIVER | 3 DEMAND_START | `\SystemRoot\System32\epmdkdrv.sys` | — |
| `ebrntdrv` | 1 KERNEL_DRIVER | 3 DEMAND_START | `\SystemRoot\System32\ebrntdrv.sys` | `Group="Boot File System"` |
| `EUDCPEPM` | 1 KERNEL_DRIVER | **0 BOOT_START** | `system32\drivers\EUDCPEPM.sys` | `DeviceName="epmdiskcopydrv"`, `IoctlBase=0x10000` |
| `EUEDKEPM` | 1 KERNEL_DRIVER | 1 SYSTEM_START | `system32\drivers\EUEDKEPM.sys` | `DeviceName="EUEDKEPM"`, `IoctlBase=0x10000` |

Plus the class-filter registration:
```
HKLM\PE_Sys\ControlSet001\Control\Class\{71A27CDD-812A-11D0-BEC7-08002BE2092F}
    UpperFilters = REG_MULTI_SZ "EUDCPEPM"
```
`{71A27CDD-...}` is **GUID_DEVCLASS_DISKDRIVE** — EUDCPEPM attaches as a class upper filter to *every* disk device in the PE, from boot.

**Placement facts (verified by directory census)**:
- `ebrntdrv.sys` + `epmdkdrv.sys` sit at `Windows/system32/` **root** (unusual — matches their `\SystemRoot\System32\...` ImagePaths)
- `EUDCPEPM.sys` + `EUEDKEPM.sys` sit in `Windows/system32/drivers/` (standard)
- `eprdtdrv.sys` (the live-Windows on-demand raw-disk driver) is **absent from the PE image** — the PE relies on ebrntdrv/epmdkdrv demand-started by the product, plus the two boot-time hook drivers
- `EuMrx.sys` (NAS redirector) is also absent — no NAS mount in PE (consistent with EuShare/ + NasConfig/ being absent from the PE payload, §4)

**Start-type rationale** (cross-linked to driver artifacts):
- EUDCPEPM must be BOOT_START because a boot filter cannot attach after the disk stack is built; its `AddDevice` hook chain (DrvHKHookNewDevice, extension magic 0xd2c8e4c5) is documented in `architecture/02-kernel-driver-architecture.md` §7 and the eudcpepm-euedkepm artifact
- ebrntdrv/epmdkdrv are DEMAND + "Boot File System" group: loaded only when DRW's Device.mo opens `\\.\EPRDTDRV\<disk#>\<partition#>` (per-disk sub-device namespace; the product triggers `NtLoadDriver` via the service SCM at first raw access — see driver architecture artifact §"user-mode contract")
- EUEDKEPM SYSTEM_START is dormant in the PE (doc-3 finding: no in-tree opener; deployment-only lineage)

## 4. software.reg — product hive seed

Single entry: `HKLM\SOFTWARE\EASEUS\DRW\Language = "English"` — the PE boots English-first; DRWUI's language picker (25 languages + Mainland variants shipped as .qm) overrides per user selection. This is the *only* software-hive seeding the PE does — everything else (EPM\Version\OEM read by auto.bat Phase D) is expected to pre-exist in the shared WIM's baked hive.

## 5. Unattend.xml — display floor

```xml
<settings pass="windowsPE">
  <component name="Microsoft-Windows-Setup" ... amd64>
    <Display> ColorDepth 32, HorizontalResolution 1024, RefreshRate 60, VerticalResolution 768 </Display>
```
1024x768@60Hz@32bpp is the guaranteed floor so the DRWUI window (verified geometry 1240x840, UIUX artifact §view-manager) never opens on an unusable display; `ChangeRes.exe setmax` (winpeshl step 2) then raises it when the monitor supports more.

## 6. Cross-file consistency verdicts (independent verification)

1. **winpeshl.ini ↔ BUILDPE payload**: `%systemdrive%\Program Files\easeus\DRW\DRW.exe` — the PE app deploys to `Program Files\easeus\DRW\` (lowercase easeus), while `auto.bat` shortcuts reference the same path; BUILDPE/EaseUS-x64 is the *staging* tree that the media builder (PE_Tools.dll flow, architecture/03 §4) injects into the WIM at that target.
2. **regdrv.reg ↔ file layout**: all four ImagePaths match the actual .sys placements in the tree (verified by `find`).
3. **auto.bat ↔ PE payload**: PENetwork/Chrome/DiskHealth references are all *outside* the DRW tree (x:\program files\Other\..., boot-media \Tools\) — the DRW payload stays self-contained under its own directory; nothing in auto.bat touches DRW files.
4. **auto.bat OEM gate ↔ shared build system**: EPM registry key + EPM-built drivers in the same image = the emergency media is one codebase shared across EaseUS products, with DRW as the launched product (see architecture/01 build-tree intelligence).

## 7. Open items

- `launch.exe` mode semantics (0=batch?, 1=tray?, 2=keep-alive) inferred from call sites — binary itself lives in `Other\Tools\` which is not part of og-codebase (WIM-external); mark as inferred, not decoded
- `wallpaper.bmp` — unexamined (cosmetic; skip unless branding research needed)
- Exact `ExplorerTaskBar-*.reg` contents unavailable (applied-then-deleted by auto.bat Phase F; files not shipped in og-codebase)
