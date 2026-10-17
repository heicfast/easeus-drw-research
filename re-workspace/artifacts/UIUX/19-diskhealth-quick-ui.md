# UI/UX Artifact 19 — DiskHealth: The Qt Quick Companion UI

> Scope: the disk-health companion app shipped in `diskhealth/` — a separate UI stack (Qt Quick/QML) documented for completeness of the product's UI landscape.
> Evidence: extracted QML sources (`re-workspace/reversed/ui-resources/diskhealth/` — 10 app QML + 44 shared components + Theme/ThemeBase.json); `DiskHealth.rcc` extraction; RTTI census (`per-binary/DiskHealth.md`: 4.6K functions); tr-strings extracted from qsTr() calls (32 strings).

## 1. Window shell (`qml/main.qml`)

- `NEW.ApplicationWindow` (QtQuick.Controls 2.14), **frameless** (`Qt.FramelessWindowHint` + min/max buttons), transparent background, title "EaseUS DiskHealth"
- Size: **840×590** (856×606 with window-shadow blur mode); shadow via `theme.style("shadow","blur")` when `diskInfoMgr.showWindowShadow()`
- C++ bridge object `diskInfoMgr` (context property) drives everything: `showWindow()`, `refreshDisks()`, `firstCautionIndex()`, `isTrayExist()`, `setWindowIcon()`
- **Tray behavior**: closing hides to tray when tray exists (`close.accepted = false; window.hide()`)
- Temporarily flags `WindowStaysOnTopHint` then resets (bring-to-front trick on show)
- `onCompleted`: visibility from `diskInfoMgr.showWindow()`; auto-start permission prompt ("Ask for autostart boot")
- Rich-text helper `makeColorFont(source, color, fw, fs)` builds inline-styled `<span>` labels

## 2. Component inventory

**App QML** (`qml/`): `Title` (custom title bar w/ language menu), `CautionWidget` (S.M.A.R.T. warning card), `HoverWidget`, `InfoItem`/`InfoList` (S.M.A.R.T. attribute table), `RotatingWait` (busy spinner), `MultiLanguage` (locale switching), `Theme` + `ThemeBase.json` (palette), `main`.

**Shared EuS component library** (`publicQML/` — reused across EaseUS Quick products): `EuButtonForTest`, `EuBuyNowBtn`, `EuCheckBox`, `EuCircleProgress`, `EuCombobox`, `EPMCombobox`, `EuBusyIndicator`, `EuGradientProgressBar`, `EuImageButton(Group)`, `EuLinkLabel`, `EuMessageBox`, `EuMenuItem`, `EuPageLoader`, `EuBorderShadowRect(Ex)`, `EuActivateComponent`, `EuDefaultRoundButton` — 16 styled primitives + the app-side components (44 total).

**Assets** (`res/`): check-state icons (select/halfsel/unsel + disabled), `ico_disk_32`, `ico_exit16`, `ico_language_gou`, list-open hover/normal/disable, `disksmart.ico` (+dark/ subtheme).

## 3. User-visible text (32 qsTr strings — complete census)

- **Health states**: "Good" / "Caution!" / "Normal" / "Your disk may have a physical failure:" / "Disk Health is guarding your disk health." / "Display alert when disk problem are found. (%1)"
- **S.M.A.R.T. table**: ID / Attribute / Current / Worst→(ST) / Threshold / RawValue / Status / "Temprature" [sic] — the classic SMART attribute grid
- **Navigation**: "Which disk do you care about?" / "Disk %1" / "View Solutions" / "Launch Disk Health"
- **Chrome/edit menu**: Cut/Copy/Paste/Delete/Select All/Undo/Redo (context menu on fields)
- **Growth**: "Buy Now" / "Enter license code here if you already have one." / "Don't remind me again" / "Done" / "Language"

## 4. UX model

Dashboard-style: disk selector (index-based, jumps to first Caution disk via `firstCautionIndex()`), per-disk health card + S.M.A.R.T. attribute table, caution widget with "View Solutions", tray-resident guarding ("is guarding your disk health"), startup prompt, and activation/buy integration via the shared EuS components. It complements DRW's "Rescue Crashed PC"/bad-sector flows (artifact 08) with always-on monitoring.

Cross-links: artifact 01 §6 (RCC extraction), `per-binary/DiskHealth.md` (native census), config `diskhealth/` runtime files.
