# WinPE Boot Environment & Bootable Media Architecture

**Evidence**: BUILDPE/ tree, regdrv.reg (decoded from UTF-16), winpeshl.ini, auto.bat, dlconfig.xml, PEtools.xml, PE_Tools.dll strings, SetupUE.exe
**Role**: EaseUS DRW ships a bootable WinPE ("Emergency Disk") builder + prebuilt PE environment for recovering from systems that won't boot.

## 1. The prebuilt PE environment (BUILDPE/)

```
BUILDPE/
├── EaseUS-x64/          <- full second copy of the DRW application tree (PE build, x64)
│   ├── DRW.exe, DRWUI.exe, all SearchDLLs, PartitionRecovery/, repair tools...
│   └── config/, language/, Resource/, platforms/ (Qt PE plugins)
└── x64/                 <- PE OS overlay
    ├── auto.bat                  <- boot script (shell setup)
    ├── regdrv.reg                <- driver service registrations (UTF-16 .reg)
    ├── software.reg
    ├── wallpaper.bmp
    └── Windows/
        ├── system32/
        │   ├── ebrntdrv.sys      <- EPMNtDrv (raw disk, demand start)
        │   ├── epmdkdrv.sys      <- EPMNtDrv (raw disk, demand start)
        │   ├── msi.dll, oledlg.dll (PE-compat shims)
        │   ├── winpeshl.ini      <- PE shell launch list
        │   └── Unattend.xml
        ├── SysWOW64/ (msi.dll, oledbg.dll for 32-bit support)
        └── drivers/
            ├── EUDCPEPM.sys     <- "epmdiskcopydrv" BOOT_START disk-class filter
            └── EUEDKEPM.sys     <- EDK driver, SYSTEM_START
```

## 2. Boot sequence (decoded from winpeshl.ini + auto.bat)

1. `wpeinit.exe` — Plug and Play device initialization in PE
2. `ChangeRes.exe setmax` — set maximum screen resolution
3. `launch.exe 0 "x:\program files\Other\explorer\auto.bat"` — run shell setup:
   - imports ~30 .reg files: taskbar/explorer chrome, PowerShell enablement, file type associations, address bar, navigation pane, MMC snap-ins (regsvr32 devmgr/dmdskmgr...), Cortana off, desktop icons
   - Registers **Google Chrome as the viewer** for image/PDF/HTML file types (`-app=%%1` kiosk mode)
   - Creates desktop shortcuts: **Data Recovery Wizard** (→ x:\program files\EaseUS\DRW\DRW.exe), Disk Health (DiskInfo.exe), Disk Mark (DiskMarkUI.exe), Chrome, Wi-Fi help images
   - Installs companion tools if present on the boot media: DiskHealth (diskhealth/ app), DiskMark
4. `x:\Program Files\easeus\DRW\DRW.exe` — **DRWLoader starts the product**
5. `launch.exe 2` — final shell keep-alive

So the PE environment is a mini-Windows with a desktop, taskbar and Chrome-as-viewer, plus DRW auto-start — designed for non-technical users to recover data off an unbootable machine.

## 3. Driver registration in PE (regdrv.reg decoded)

| Service | Type | Start | ImagePath | Notes |
|---|---|---|---|---|
| epmdkdrv | 1 (KERNEL_DRIVER) | 3 (demand) | `\SystemRoot\System32\epmdkdrv.sys` | raw-disk proxy (EPMNtDrv) |
| ebrntdrv | 1 | 3 (demand) | `\SystemRoot\System32\ebrntdrv.sys` | same, Group="Boot File System" |
| EUDCPEPM | 1 | **0 (BOOT_START)** | `system32\drivers\EUDCPEPM.sys` | DeviceName=`epmdiskcopydrv`, **IoctlBase=0x10000** |
| EUEDKEPM | 1 | 1 (SYSTEM_START) | `system32\drivers\EUEDKEPM.sys` | DeviceName=EUEDKEPM, IoctlBase=0x10000 |

**Critical detail**: `HKLM\PE_Sys\ControlSet001\Control\Class\{71A27CDD-812A-11D0-BEC7-08002BE2092F}` (GUID_DEVCLASS_DISKDRIVE) gets `UpperFilters = EUDCPEPM` — the disk-copy hook driver is attached as a class upper filter to EVERY disk device in the PE. That is how DrvHKHookNewDevice gets invoked for each disk PnP add.

## 4. The bootable media builder (in the live product)

- `PE_Tools.dll` (RTTI: 51 classes) + `PEtools.xml` + `dlconfig.xml` + `EuDownloader.exe` implement "Create Emergency Disk" (WinPE media):
  - `dlconfig.xml` — download manifest: byte-ranges + MD5s of files (BOOTMGR, WINPE.WIM, BCD, ETFSBOOT.COM, BOOT.SDI, BOOTX64.EFI, language/font CABs) **carved out of Microsoft's official WAIK supplement ISO** (`download.microsoft.com/.../waik_supplement_en-us.iso`) — i.e., the product downloads the WAIK ISO once and slices the boot files out of it by offset
  - `PEtools.xml` — deployment manifest for the same files into `\Windows AIK\Tools\PETools\{X86|AMD64}` trees
  - Builder flow (PE_Tools.dll): 1) download WAIK objects (EuDownloader, resume + MD5 verify), 2) stage WAIK tree, 3) mount/customize WINPE.WIM (DISM APIs — dism host seen in imports), 4) inject DRW app tree (BUILDPE/EaseUS-x64), drivers (regdrv.reg + .sys files), auto.bat shell config, 5) write ISO/USB (Burn.dll — IMAPI2)
- Boot media variants: PE3 (Win7)/PE4/PE5/Win10PE x86+amd64 — id comments in dlconfig.xml `<VALID id=""/>` (winpe3=1/101, winpe4=3/101,401,10, win10pe=4/101,402,22 etc.)

## 5. Why two copies of everything
`BUILDPE/EaseUS-x64/` duplicates the main install tree so the PE build has a matching application set; its `config/version.ini`, `PriorityDisplayType.xml` etc. differ (PE-specific defaults). This is also why the repo carries two copies of many binaries — they are separate builds from the same branch (verified: same PDBs, same versions, occasionally different timestamps).

## 6. PE edition vs live edition — verified capability diff

Full name-level diff of the two trees (census artifact: `re-workspace/artifacts/WinPE/pe-payload-census--buildpe-easeus-x64.md`):

- **PE-only binaries (6)**: EuSendMessage.exe (role TBD), d3d8thk/d3d9/d3d11/dxgi.dll (D3D shims so Qt video preview renders on WinPE's reduced graphics stack), mfc90u.dll
- **Live-only binaries (15)**: setup trio (SetupUE/unins000/InfoForSetup), 7za.exe, Aliyun channel (AliyunWrap, AliyunWrapExe, send_dmp_with_aliyun), cloud_session.dll + cpprest141_2_10.dll, EuUserRate.dll, MD-CRT OpenSSL pair, msvcm90.dll
- **Live-only directories (8)**: `PartitionRecovery/` (31 .mo MOM modules + 19 DLLs — **zero .mo files exist anywhere under BUILDPE**, find-verified), `EuShare/` (EuMrx.sys NAS redirector), `NasConfig/`, `License/`, `SaveScan/` (zero .rsf on media), `EUFileRepair/`, `VideoViewer/`, `diskhealth/`
- **Consequences**: the bootable edition CANNOT do lost-partition recovery (no MOM modules to load), has no NAS redirector (network recovery = PENetwork SMB or runtime-downloaded connect.exe), ships no licensing blobs (PE = FREE edition by construction: version.ini `version=free`, `product-code=RE-DRW-FREE-WIN`), and carries its own UCRT (49 api-ms-win-* forwarders + ucrtbase.dll — WinPE has no Universal CRT) plus qoffscreen.dll (headless Qt platform).
- **OEM branch**: auto.bat queries `HKLM\SOFTWARE\EASEUS\EPM\Version\OEM`; "Mainland" builds get a preset .lnk pack, international builds get a "Data Recovery Wizard" desktop shortcut — the emergency media is one shared image across EaseUS products (EPM registry key + EPM-built hook drivers in the same WIM), with DRW as the launched product.
- **Boot-USB companions**: at boot, GetDriver.exe detects the media; `Tools\{DiskHealth,DiskMark,Google Chrome}` deploy from the USB (not the WIM), Chrome registers as jpeg/png/gif/ico/pdf/html viewer in kiosk `-app` mode, and help is two JPG screenshots wired into .lnk files ("How to access shared folder", "How to connect to Wi-Fi").
