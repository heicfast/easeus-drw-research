# UI/UX Artifact 01 — Complete Visual Inventory (RCC Resource Bundles)

> Scope: every pixel-level asset the user sees, extracted from the two shipped Qt RCC bundles + DiskHealth QML bundle.
> Evidence: `og-codebase/Resource/drw_light.rcc` (30,742,205 B), `og-codebase/ResourceDark/drw_dark.rcc` (32,290,147 B), `og-codebase/diskhealth/DiskHealth.rcc` (451 KB); extracted trees under `re-workspace/reversed/ui-resources/`; extraction tool `scripts/rcc_extract.py`; format verified line-by-line against Qt 5.15 `src/tools/rcc/rcc.cpp` + `src/corelib/io/qresource.cpp`.

## 1. The RCC binary format (reverse-engineered, then verified)

The three `.rcc` files are Qt Compiled Resources, **format version 3** (zstd-capable variant, though EaseUS stored everything uncompressed). The full on-disk layout, decoded from first principles and cross-checked against Qt source:

| Offset | Size | Field (all big-endian) | drw_light value |
|---|---|---|---|
| 0x00 | 4 | magic `qres` | ✓ |
| 0x04 | 4 | version | 3 |
| 0x08 | 4 | tree_offset | 30,657,395 |
| 0x0C | 4 | data_offset | 24 (immediately after header) |
| 0x10 | 4 | names_offset | 30,493,411 |
| 0x14 | 4 | overall_flags | 0x01 (Compressed-capable marker; no blob actually compressed) |

Section layout: `[24B header][data blobs 24..30,493,411][names 30,493,411..30,657,395][tree 30,657,395..EOF]`.

- **Data blobs**: `{uint32 BE size; content}` — PNG/SVG/GIF/OTF/CUR stored raw; per-node flags 0x01/0x04 would mean zlib/zstd.
- **Names entries**: `{uint16 BE char_len; uint32 BE qt_hash; UTF-16BE chars}` — verified by walking `"Home_00010.png"` (len 14, hash `0x0f3502e7`).
- **Tree nodes (v2/v3 = 22 bytes)**:
  - `+0 uint32 name_offset` (relative to names section)
  - `+4 uint16 flags` — 0x01 Compressed(zlib), 0x02 Directory, 0x04 Compressed(zstd)
  - Directory: `+6 uint32 child_count`, `+10 uint32 first_child_node_index`
  - File: `+6 uint16 country`, `+8 uint16 language` (locale 0/1 = AnyCountry/C), `+10 uint32 data_offset`
  - `+14 uint64 last_modified` (ms since epoch — **build timestamps = 2026-10-17**, matching the ship date)
  - Node 0 = root directory; children occupy contiguous node indices (enables the binary-search lookup in `QResourceRoot::findNode`).

drw_light.rcc: **3,855 nodes → 3,722 files + 132 directories**; drw_dark.rcc: **3,657 files**; DiskHealth.rcc: **125 files (54 QML)**. All 4 "suspicious" magic checks were `.cur` cursors (magic `00 00 02 00` — valid Windows CUR format).

## 2. Resource tree = the UI subsystem map

The light-theme bundle root prefix is `:/Resource/`, dark is `:/ResourceDark/`. Directory names map 1:1 onto UI subsystems (file counts):

| Resource dir | Files | UI subsystem (what the user sees) |
|---|---|---|
| `Home/` | 435 | Home screen: device tiles, headers, "Home_00NNN.png" numbered illustration frames |
| `PopWnd/` | 254 | Popup-window chrome: close buttons, backgrounds, title strips |
| `Preview/` | 340 | Preview subsystem: zoom in/out, hand cursors (`preview_ico_zoomin/zoomout/hand.cur`), playback controls |
| `Filter/` | 221 | Advanced-filter panel: extension/type/size/date pickers |
| `LeftTree/` | 199 | Results left tree: root icons per device state (existing/lost/locked/unlocked/system/USB/camera/UAV/SD/recycle bin) |
| `ScanProgress/` | 188 | Scan animation frames + progress bar elements |
| `Evaluate/` | 162 | Rating/feedback prompts (star states, comment bubbles) |
| `Titlebar/` | 145 | Window title bar: min/max/restore/close states (`btn_close_nor/hov/pre/dis.svg`), logo |
| `FileTypes/` | 105 | File-type icons, **SVG at 24px and 48px** — audio (aif/ape/m4a/mid/mp3), browser (360/edge/firefox/google/liebao/safari/sougou), doc, photo, video, + special classification folders (see §4) |
| `Path/` | 95 | Path/breadcrumb bar icons per partition state |
| `Partition/` | 93 | Partition list row graphics |
| `Repair/` | 91 | File-repair flows (video/PDF repair wizard graphics) |
| `BuildTree/` | 51 | Tree-building progress states |
| `NASView/` + `NAS_linux/` | 247 | NAS recovery flows (login, SSH tips, device pages, Linux agent) |
| `PEView/` | 113 | WinPE bootable-media flow graphics |
| `DriveTypes/` | 60 | Home device-list icons (disk/system/USB/camera/UAV/SD/tachograph/recycle bin/folder/HD, each with `-lock`/`-unlock` BitLocker states) |
| `AiAssistant/` | 52 | AI Assistant tip dialog + AI deduplication graphics |
| `Tips/` | 69 | Tooltip bodies/arrows |
| `Ad/` | 32 | **Monetization banners** (`Ad_bg1.png`, `Ad_ico_Unlimited/preview/repair/support.png`, `Buyhov_AI/Infinity/once.png`) |
| `Save/` | 26 | Recovery destination picker |
| `RaidView/` | 16 | RAID array list |
| `SDCard/` | 29 | SD-card flow |
| `Introduction/` | 7 | First-run tour slides |
| `ScollBar/` `CheckBox/` `Header/` `Search/` `View/` `Refresh/` `Rkey/` `RightKey/` `PopupMenu/` `gift/` `nav/` | 200+ | Widget chrome + context menus + gift/promo + nav rail |
| `Auto-Recover/` | 29 | Auto-recover settings/entry/close/open windows |
| `Cloud Drive/`, `Disk Backup/`, `file repair/`, `long Button/`, `IP/`, `Logo/`, `Help/`, `ChronoSnap/`, `WndShadow/` | — | Cloud-drive home tile, disk-image flow, repair entry, misc |

**Typography**: `DIN-Black.otf` + `DINCond-Black.otf` ship inside the bundle — the product's display font (headers/titles). `style.css` (root dir) references `NORMAL_FONT_FAMILY` (12.6 defined by the theme engine, see artifact 06-styling).

**Cursors**: `hover_ico_hand.cur`, `preview_ico_hand/zoomin/zoomout.cur` — custom cursors for the preview surface.

## 3. ImageResource.xml — the device→icon state machine

`og-codebase/Resource/ImageResource.xml` (38,706 B) is the icon LOOKUP TABLE consumed by the UI at runtime. Its `<Partition>` node maps **50 device-type codes** to normal/hover icon paths — this is the exact type system of the home device list and tree:

| Type codes | Icon | Meaning |
|---|---|---|
| 0–1 | `drivetype_ico_system[_lock/_unlock]` | System partitions (0–1 basic, 2/4 BitLocker-locked, 3/5 unlocked) |
| 6–13 | `drivetype_ico_usb_existing[_lost/_lock/_unlock]` | USB disks — existing vs **lost** vs BitLocker states |
| 14–21 | `drivetype_ico_parti_existing[_lost/_lock/_unlock]` | Other-disk partitions (existing/lost/locked/unlocked) |
| 22–25 | `drivetype_ico_disk` | Whole disks (incl. unallocated) |
| 26–29 | `drivetype_ico_camera_sony` | Cameras (Sony etc.) |
| 30 | `drivetype_ico_UAV` | **Drone/UAV devices** |
| 31–32 | `drivetype_ico_SD` | SD cards |
| 33 | `drivetype_ico_recyclebin` | Recycle Bin |
| 34 | `drivetype_ico_folder` | Desktop/folder scan |
| 35 | `drivetype_ico_USB` | Generic USB |
| 36 | `drivetype_ico_HD` | Hard disk |
| 38–41 | `drivetype_ico_tachograph` | **Dashcams** |
| 42 | `drivetype_ico_camera_sony` | Misc camera |
| 46–49 | `parti/usb_lost_lock/unlock` | Lost-partition BitLocker variants |

The `<Tree>` node maps the same states for the results left-tree (`leftree_ico_root_*`) and the breadcrumb path bar (`path_ico_*`), plus `leftree_ico_folder_fold/unfold`, `leftree_ico_camera_nor`, `leftree_ico_Dropbox_nor` (cloud drive in tree!), `leftree_ico_root_desktop`, `leftree_ico_root_recyclebin`.

**Runtime scaling proof**: the XML references `*_72.png`/`*_160.png`/`*_24.png` paths but the bundle ships SVGs at `_24`/`_48` only — the code resolves the base SVG and rasterizes at 24/72/160 px on demand (142/335 XML paths exist verbatim; the remainder are generated size variants). The `LargeIconShadow.png` asset exists specifically for the 160px icon drop-shadow.

## 4. Classification buckets visible in the icon set

`FileTypes/` ships dedicated folder icons that reveal the **deep-scan result categorization** shown in the tree:

- `filetype_ico_File Path Lost_fold_{24,48}.svg` — files recovered by raw carving whose original path could not be reconstructed (listed under "File Path Lost" / "Tags Extracted" branches)
- `filetype_ico_Tags Extracted_fold_{24,48}.svg` — files identified via EXIF/tag mining
- `filetype_ico_Unimportant_{24,48}.svg` — junk/system files collapsed by default
- Per-format families: `audio_*` (aif, ape, m4a, mid, mp3, others), `browser_*` (360, edge, firefox, google, lieobao, safari, sougou — **browser profile recovery**), `doc_*` (ai, xml, txt, exe …), `photo_*`, `video_*` (flv …) — matching the FileFilter.xml category tree (8 categories, 1,489 extensions; see `artifacts/config-files/`).

## 5. Dark theme = parallel bundle

`ResourceDark/drw_dark.rcc` mirrors the light set (3,657 files under `:/ResourceDark/` root, 65 files fewer — light-only ad/evaluate variants) and is selected by the theme engine (config `themdark.ini`, `style.css` overrides; see artifact 06). Theme hot-swap in DRW ≥ 16 is implemented by switching the RCC registration root.

## 6. DiskHealth QML component library (Qt Quick)

`DiskHealth.rcc` (the disk-health companion app shipped in `diskhealth/`) is a **QML** application — 54 QML files under `:/publicQML/` and `:/qml/`:

- `EuButtonForTest`, `EuBuyNowBtn`, `EuCheckBox`, `EuCircleProgress`, `EuCombobox`, `EuBusyIndicator`, `EuGradientProgressBar`, `EuImageButton(Group)`, `EuLinkLabel`, `EuMessageBox`, `EuMenuItem`, `EuPageLoader`, `EuBorderShadowRect(Ex)`, `EuActivateComponent`, `EPMCombobox`, `HoverWidget`, `CautionWidget`, `InfoItem/InfoList`, `RotatingWait`, `Title`, `Theme.qml` + `ThemeBase.json`, `MultiLanguage.qml`, `main.qml`
- `res/` ships check-select/halfsel/unsel (incl. disable states), `ico_disk_32`, `ico_language_gou`, dark-theme subfolder, `disksmart.ico`.

This is a separate UI stack (Qt Quick vs DRWUI's Qt Widgets) — one more proof the product line shares the EuS component family but different rendering tech.

## 7. Where each asset family binds to code

| Asset family | Consuming classes (vtable-verified) | Phase |
|---|---|---|
| `Home/`, `DriveTypes/` | `DrwHomePage`, `DrwHomePartListView`, `DevicePageItem`, `PeripheralHomeView` | Home |
| `ScanProgress/`, `BuildTree/` | `CDoScanPartition` family, `CGenericRecoveryProgress`, `UnllocateProgressLabel` | Scan |
| `LeftTree/`, `Path/`, `FileTypes/` | `CLeftTreeView`, `CClassifyLeftTreeView`, `CTreeViewController`, `CListIconController`, `CGetListThumbnailThread` | Results |
| `Filter/` | `CAdvanceFileFilterMgr`, `CAdvancedFilterBtn`, `CFilterBar`, `CFilterGuideWnd`, `CFileExtensionGroupWnd` | Results-filter |
| `Preview/` | `PreviewMainDialog`, `ImagePreviewWindow`, `VideoPreviewWnd`, `RichTextPreviewWindow`, `ArchivePreviewWindow`, `AVPreviewStub` | Preview |
| `Repair/` | `CRepairVideoHomeWnd`, `CRepairPDFHomeWnd`, `FileRepairHomePage`, `CRepair*Wnd` family | Repair |
| `Ad/`, `gift/`, `Evaluate/` | `AdToolPopWindow`, `BuyNowTipsMenu`, `CBuyGuideWnd`, `UserRateDlg`, `TitleGiftDlg` | Monetization |
| `Titlebar/` | `DrwMainWindow`, `BasicTitleBar` | Shell |

Cross-links: window-class map (artifact 03), userflow (artifact 04), styling (artifact 06), per-phase deep dives (07–12).
