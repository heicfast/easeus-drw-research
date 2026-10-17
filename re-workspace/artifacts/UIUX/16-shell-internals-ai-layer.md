# UI/UX Artifact 16 — Application Shell Internals (DrwMainWindow · Title Bar · Nav Rail · AI Layer)

> Scope: the persistent chrome around the wizard stack — title bar, navigation rail, menus, and the AI assistant layer.
> Evidence: `DrwMainWindow` ctors `FUN_140839630`/`FUN_140839f80` + setup `FUN_1408412c0` (12,462 chars); class map §2; QSS Title/Titlebar sections; AI QM strings; `DrwAIDedupWindow` (53 v-methods), `AIAssistantTipDialog` (57), `AIDeduplicationTipMenu` (55).

## 1. DrwMainWindow construction (FUN_1408412c0 decoded)

Setup installs the chrome with these verified Qt operations:
- `setWindowTitle`, `setObjectName` (every chrome element named for QSS targeting), **`setAccessibleName` (accessibility support!)**
- `QGraphicsOpacityEffect` + `setOpacity` — fade-in/out chrome animations (title bar/nav transitions)
- `QBoxLayout::addWidget`/`setContentsMargins` — shell layout
- Wiring: **`currentChanged(int)`** (nav rail / stacked index sync), **`itemClicked(const quint64)`** + **`sigEnterOrLeaveTitleButton(const quint64, bool)`** (title-bar buttons identified by 64-bit IDs — hover/leave tracking), **`sigScanFinished()`** (shell reacts to scan end: title/CTA refresh)
- Sub-builders: `FUN_140847da0` (settings-driven variant config — `QVariant::toInt` reads), `FUN_140849f60/14084a0d0/14084a7c0/14084ad80/14084b900` (nav/toolbar/status regions), `FUN_14089f890`, `FUN_1409c80b0`, `FUN_140b30c40`.

## 2. Title bar (`BasicTitleBar`, 53 v-methods)

- Buttons: min/max/restore/close with 4-state SVGs (`btn_close_{nor,hov,pre,dis}.svg` etc. — artifact 01 §2)
- 64-bit button IDs dispatched via `itemClicked(quint64)`; hover states via `sigEnterOrLeaveTitleButton`
- `TitleGiftDlg` gift entry in the bar: "Your current edition expires in %1. Upgrade to Lifetime for permanent security—pay once, p[ermanently]" + "Don't show this again" (also drives exit interrupt: "Don't Exit" / "Exit Anyway")
- OEM branding slot `#OriginalVersionLogo` (min-width 248px) — the About-dialog family (`CAbout{EaseUS,Apower,Cisdem,Original,_cn_fx,_cn_jz,_cn_lc}Dlg`) shows the white-label product matrix (EaseUS + ApowerRecovery + Cisdem + Foxit builds — build-tree artifact)

## 3. Navigation rail (`DrwFlyoutWindow`/`DrwFlyoutMenu`)

Flyout menu (52 v-methods + items) hosting the `nav/` RCC assets; syncs with the wizard stack via `currentChanged(int)`; telemetry `Click_Home`/`Click_Back`/`Click_MoreTool*`. The "More Recovery Tools" index (`MoreToolIndexWidgetItemIcon` QSS) routes to the tool matrix.

## 4. AI layer (2024+ generation features — QM + class verified)

| Feature | Copy (verbatim) | Classes |
|---|---|---|
| **AI Recommend** | "AI Recommend avaliable." [sic] · "AI Recommend is on. Showing %1 recommended files." · "Switch views anytime to see all files." · "AI recommeded %1 files" · "AI Recommendations" | CDetailPage region + `Click_AIRecommeded` telemetry |
| **AI Deduplication** | "AI Deduplication" (+ upsell: "One-time Purchase" / "No auto renewal" / "Buy Now" in `AIDeduplicationTipMenu`) | `DrwAIDedupWindow` (53 v-methods; labels `DrwAIDedupWindow{Analyzing,Desc,Item,Status,Type}Label` QSS) |
| **AI Recovery Insight** | "AI Recovery Insight:" insight cards on results | CDetailPage region |
| **AI assistant robot** | "Meet your recovery assistant. I'm here to help you find, repair, or c[hat…]" | `RobotToolTipDlg` (80×32 fixed) + `AIAssistantTipDialog`; "Local AI | Secure" — **on-device inference, privacy-flagged** |
| Assistant entry | `Click_Assistant` / `NeedHelpMenu` | Help menu |

## 5. Monetization chrome

- `AdToolPopWindow` banners (`Ad/` RCC: `Ad_bg1.png`, `Ad_ico_{Unlimited,preview,repair,support}.png`, `Buyhov_{AI,Infinity,once}.png`) — the right-rail ad slot
- `BuyNowTipsMenu` (55 v-methods) — persistent buy chip
- Exit-interrupt stack: `RetentionExitDlg`/`RetentionActiveDlg` (win-back), `CExitHelpWnd` ("Stuck on refreshing?" coaching via `FreezeAnimalDialog`), `TitleGiftDlg` expiry nag
- Rating: `UserRateDlg` + `Evaluate/` assets (162) — "How likely are you to recommend EaseUS Data Recovery Wizard?" (NPS)
- Anti-piracy: `PirateVictimsTipDlg` + license-state strings ("Pirate license code." / host-tamper warning — artifact 11 §4)

## 6. Shell state handling

- Window state: `window_show_state=StatusMaxed` default + QSettings persistence; `DRW_Min` telemetry on minimize (tray behavior)
- The shell's `sigScanFinished` listener updates CTA/title post-scan (e.g., switching primary button from Scan to Recover)
- `MainWndExitThread` performs staged shutdown (services → sessions → UI) under DRWLoader supervision (launcher artifact)

Cross-links: artifacts 03 §2, 04 (stack), 05 (styling), 06 (telemetry), 11 (monetization funnel).
