# DiskHealth.exe — SMART Disk-Monitoring Companion (CrystalDiskInfo-lineage, Qt+QML shell)

**Binary**: diskhealth/DiskHealth.exe — 93,316-line Ghidra decompilation (ghidra-wave2); Qt Quick/QML UI stack shipped alongside (Qt5Qml/Qt5Quick/Controls.2 style plugins — see runtime-families)
**Evidence**: vftable census, ATA/USB bridge-model strings, SMART attribute accessor names, tray-icon class, notification strings
**Role**: The SMART-health companion (deployed from the boot USB by auto.bat Phase E and shipped in the live tree) — documents the disk-side telemetry that pairs with DRW's recovery advisories (SSD/TRIM warnings).

---

## 1. Lineage and identity

- **CrystalDiskInfo lineage**: the engine class census (`CAtaSmart`, `DiskInfoMgr`, `CTrayIcon`) and the bridge-table strings (`AddDisk - ASM1352R`, `AddDisk - Si`, `AddDisk - USB0A…USB20`) are the signature structures of the open-source **CrystalDiskInfo** architecture (its USB-bridge database and CAtaSmart engine) — EaseUS's DiskHealth is built on that codebase family, re-skinned with the Qt Quick UI (`:/res/disksmart.ico`, `ico_logo_pallets_disksmart16.png` — the internal product name is **DiskSmart**)
- Interface model: `"ATA Disk Device"`, `"SATA Disk Device"`, `"SCSI Disk Device"`, `"INTERFACE_TYPE_NVME"`, `"Parallels Virtual NVMe Disk"` — full NVMe + virtual-disk awareness

## 2. Engine architecture (vftable census)

| Class | Role |
|---|---|
| `DiskInfoMgr` | disk collection manager — owns the disk list, drives refresh cycles |
| `CAtaSmart` | **the SMART engine** — per-disk attribute polling with transport-specific accessors: `GetSmartAttributeSat - 1A/-2/-2A` (SAT/ATA passthrough variants), `GetSmartAttributeCsmi` (CSMI for Intel RST arrays), `GetSmartAttributeNVMeRealtek` (Realtek NVMe bridge) — the multi-transport accessor set is CrystalDiskInfo's solution to OEM storage stacks |
| `RefreshThread` | background poller (periodic SMART refresh) |
| `CTrayIcon` + `QMenu`/`QTimer` | tray integration (the auto.bat `trayicon` mode) |
| `AttrModel` | QML-facing attribute table model (feeds the QML SMART dashboard) |
| Virtual-disk detection: `"Parallels Virtual NVMe Disk"` — VM awareness in device naming |

## 3. Product integration points (cross-binary)

1. **Boot media**: auto.bat Phase E copies DiskHealth from the boot USB's `Tools\DiskHealth\bin\` (with `api*.*` + `aliyun*.*` — the Aliyun telemetry DLLs) and drops a desktop shortcut (WinPE boot-config artifact §2E)
2. **IPC/notification**: `"Click_Open_DiskHealth_By_Notification"` + `"EaseUS_DiskHealth"`/`"EaseUS_DiskHealthConsole"` window names — the console is openable from Windows notifications (a health alert launches the app)
3. **DRW pairing**: DRWUI's SSD/TRIM warnings (UIUX strings "TRIM OFF/ON" on the home page) present recovery-affecting health facts; DiskHealth is the deep-dive companion for the same disks

## 4. What ships with it (runtime-families cross-ref)

- Qt5Qml/Qt5Quick + Controls.2 style plugins (Imagine/Material/Fusion/Universal) — the QML dashboard theming
- The QML plugin set (window/layout/settings/remoteobjects) — `qmlsettingsplugin` persists user prefs; `Qt5RemoteObjects` syncs the model to other processes (the console variant)

## 5. Cross-links

- Runtime families: `runtime-families/qt5-quick-qml-stack.md` (the DiskHealth-only QML distribution — proof it's a separate app generation from DRWUI's widgets)
- Boot deployment: `WinPE/boot-config--winpeshl-autobat-regdrv.md` §2E
- UI census: `UIUX/19-diskhealth-quick-ui.md` (840x590 frameless QML window, SMART table, 32 strings)
