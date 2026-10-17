# UI/UX Artifact 05 — Styling, Theming & Layout Engine

> Scope: how DRWUI looks the way it does — palette system, fonts, window geometry, per-page layout metrics, widget styling.
> Evidence: `og-codebase/style.css` (20,802 lines QSS), `og-codebase/config/themdark.ini` (118-slot dual palette), `og-codebase/config/config.ini`, `og-codebase/config/{PriorityDisplayType,usefullostfiles}.xml`, `og-codebase/config/RawConfig.ini`, RCC theme bundles (artifact 01).

## 1. The three-layer style system

1. **`style.css`** — the master QSS, loaded at startup and applied app-wide. Organized in sections, some attributed to individual developers (`/*====DENGFEI====*/` @ L941: Title/MainWindow/homepage/Dialog/recover-progress/DrwLostDiskPage/Preview/activate-window; `/*====PENGJUN====*/*/` @ L3339: About dialogs, PeripheralView, CPopupMenu, CNasDeviceMgr, Raid, Auto_Recover, PERecovery…). QSS targets widgets by objectName (`#DrwHomePage`, `#CRightListView`, `#filter_item_type_icon`, `#navigate_address_button` …) — these objectNames are the Rosetta stone between styles and the classes in artifact 03.
2. **`config/themdark.ini`** — a **118-slot color palette** with `[normal]` and `[dark]` variants. The QSS and code reference slots by number; theme switching swaps the section, hot-reloading colors without restarting. Brand hues:
   - Light: primary `#0560fd` (EaseUS blue), tooltip bg `#0560FD`, CTA gradient `#0c99ff→#0560fd`, hover ring `rgba(5,96,253,0.1..0.2)`, warn `#f72c2c`/`#ffc10e`, success `#30b373`, panel tints `#e5eefb/#e6edf6/#f6f9fd`, shadow `rgba(4,5,43,0.5)`.
   - Dark: primary `#5094ff` (CTA gradient `#059afd→#0ccdff`), surfaces `#1b1d1f/#202428/#32383e`, text `#f1f5ff`, accent orange `#ff7342`, warn `#ff5a5a`, borders `#404c63/#596680`, glass `rgba(141,189,255,0.08..0.2)`.
3. **RCC bundles** — `:/Resource/` (light) and `:/ResourceDark/` (dark) carry the raster/SVG half of each theme (artifact 01).

## 2. Window geometry (the definitive numbers — `config.ini [windowsSize]`)

| Property | Value |
|---|---|
| `normal_size` | **1240 × 840** |
| `minimum_size` | **800 × 600** |
| `high_dpi` | true |
| `window_show_state` | **StatusMaxed** (opens maximized) |

This resolves the code-side finding (artifact 03 §12): no literal `resize()` on `DrwMainWindow` — sizes come from this config, with `QSettings` persistence on top. Dialog standards from decompiled geometry: `DrwMessageBox` 540×240 fixed; large scenario dialogs 636×433 / 672×627; icon standards 48/56/72/80px.

## 3. Typography

- `style.css` global: `font-family: NORMAL_FONT_FAMILY; font-size: 14px` — placeholders resolved from config.
- `[style]` stacks: **Segoe UI** (+ Semibold 600) base; **Meiryo UI** (ja), **Malgun Gothic** (ko), **Microsoft YaHei** (zh_CN) — CJK-aware per-locale substitution.
- Display font for hero/marketing surfaces: **DIN-Black** + **DINCond-Black** (OTFs inside both RCC bundles).
- Tooltips: 14px, `qproperty-windowOpacity 0.9`, max-width 400px, border-radius 8px, padding 2px, min-height 25px, `#0560FD` bg / white text.

## 4. Localization matrix (`config.ini [languages]`)

22 shipped languages with locale codes (`en, ja, de, fr, es, pt, it, nl, zh_CN, zh_TW, sv, da, ru, nb, pl, hu, ar, tr, kr, in, tha, bm`) mapping to the 25 `.qm` files (artifact 02). `[DealthLanguage]` normalizes legacy names (Chinese→ChineseSimp, Deutsch→German, Portuguesa→Portuguese).

## 5. Page layout metrics (QSS qproperty + min/max constraints)

| Selector | Constraint | Meaning |
|---|---|---|
| `#DrwHomePage` | `layoutContMargins: 40px 45px 0px 48px`; `min-height: 400px`; white bg, 4px bottom radii | Home content padding |
| `#DrwLostDiskPage` | `layoutContMargins: 36px 48px 48px 24px` | Lost-disk page padding |
| `#DrwHomePage QScrollBar::vertical` | width 12px, transparent bg, 12px top margin | Home scrollbar spec |
| `#CRightListView/#CRightIconView QScrollBar::vertical` | width 6px, `padding-top:40px` | Results list slim scrollbar |
| `#DiskScrollBarRightLine` | min/max width 1px, `#dfe6ed` | Hairline separator |
| `#OriginalVersionLogo` | `min-width: 248px` | OEM logo slot |
| `uilib_autoToolTips_win` | states `normal`/`wordwrap` (402×70 min), types `left_tree_tip`/`bad_sector_tip` with direction/arrowOffset props | The in-house tooltip contract (docked, directional arrows) |

## 6. Data-driven UI configs

- **`PriorityDisplayType.xml`** — display-priority extension ordering per category (Picture: `jpg(00) png(01) jpeg(02) gif(03) tif(04) eps(05) psd(06) bmp(07) ico(08)`; Video: `mp4 mov avi swf m4v fla…`). Drives which extension icon/type shows first in mixed lists and which "Detected:" types are surfaced in the filter UI.
- **`usefullostfiles.xml`** — "useful lost files" whitelist: RAW photo formats (`cr2 cr3 nef arw dng`…) plus jpg/jpeg/gif/tif/tiff… that the deep-scan promotes into the visible tree (vs. `Unimportant` bucket).
- **`RawConfig.ini [Filter]`** — per-extension enable flags for RAW/deep results: `HEIC=1, VCF=1, WEBM=1, WEBP=1, M2TS=1, JP2=1, MOBI=1, MMAP=1, RVT=1, STL=0 …` — a runtime knob deciding which carved formats appear in results.
- **`config.ini [RecoveringTips] scaningRecoverShowTips=true`** — gates the "recovering tips" coaching layer during scan.

## 7. Widget styling highlights (QSS census)

Most-styled objectNames (occurrence counts): `#ChooseDestinationPathDialog` (29 rules — the destination picker is the most heavily styled surface), `#navigate_direction_button` (20), `#CShowContextMenuMenu` (19), `#SDCardDeviceItemIcon`/`#MoreToolIndexWidgetItemIcon` (13 each), `#TitleGiftDlgRightFrame` (12), `#DrwMessageIconLabel` (12), `#filter_item_type_icon` (11), `#LostLeftTreeView` (10), `#DrwAIDedupWindowTypeLabel/ItemLabel` (10), `#NasItemLogo` (10), `#uilib_autoToolTips_win` (8), `#panelview_handle_button` (8). Neutral ramp used for borders/dividers: `#e7e7e7`, `#dee1ed`, `#c1ccdf`, `#a0a6b1` — a 4-step gray ladder consistent with the EaseUS 2021+ design language.

## 8. Theme switching mechanics (inferred from assets + configs, code hooks pending deep-dive)

- Both RCC bundles load at startup; active root (`:/Resource/` vs `:/ResourceDark/`) selected from `themdark.ini`-backed palette + system theme query.
- Palette slots are referenced positionally (1..118); the QSS uses literal colors as fallbacks, with `qproperty-*` hooks (custom properties: `layoutContMargins`, `wordWrap`, `content_padding`, `direction`, `arrowOffset`, `minSize`) consumed by in-house widget classes (`uilib_*` namespace).
- `CThemeMenuItem` (vtable-verified) is the theme picker menu item; `config/config.ini` + registry persist the choice.

Cross-links: artifact 01 (assets), 03 (classes), 04 (flow), 09 (results-page styling details), `config-files/` artifacts (raw configs).
