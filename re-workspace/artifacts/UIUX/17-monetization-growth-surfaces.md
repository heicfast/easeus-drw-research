# UI/UX Artifact 17 — Engagement, Monetization & Growth Surfaces (Complete Funnel Map)

> Scope: every growth/monetization surface mapped to its funnel stage — the commercial UX layer of DRW.
> Evidence: tr/QM strings per class (verified); 195-event telemetry census; RCC `Ad/`(32) + `gift/` + `Evaluate/`(162) assets; dialog class map; QSS monetization rules.

## 1. Funnel map (stage → surface → copy → telemetry)

| Stage | Surface | Key copy (verbatim) | Telemetry |
|---|---|---|---|
| **Acquisition** (in-product) | `AdToolPopWindow` right-rail banners | Ad assets: Unlimited/preview/repair/support CTAs, `Buyhov_{AI,Infinity,once}.png` | ad impressions |
| **Activation** (first-run) | `IntroductionTipDialog` + `Introduction/` slides; `CUserGuidTipWnd` | guided tour | `Enter_*`/`Page_*` |
| **Engagement** | `RobotToolTipDlg`/AI assistant; `NeedHelpMenu`; `RecoveryChancesTipsWidget`; `ScaningRecoverMessage` coaching | "Meet your recovery assistant…" · "Warning: Most users lose their data permanently due to untimely data recovery. So we highl[y recommend…]" | `Click_Assistant`, `Click_Help` |
| **Habit** | Auto-Recover suite (`CAutoRecoverSettingWnd`) | "Auto-Recover after Advanced Scan Completed" + email notify | `Click_Auto` |
| **Retention** | Exit-interrupt stack (`RetentionExitDlg`/`RetentionActiveDlg`, `CExitHelpWnd`, `TitleGiftDlg`) | "Don't Exit" / "Exit Anyway" · "Your current edition expires in %1. Upgrade to Lifetime…" · "Don't show this again" | `Click_Exit*`, `Click_AppLeave` |
| **Revenue — free tier** | `CRecoverLimitDlg` gate | "Sure to give up…?" · "Valuable data might be LOST PERMANENTLY…" · "Recovered: %1/%2" · "Give Up" vs "Recover Remaining" | `Click_Continuerecover`/`Click_Dontrecover` |
| **Revenue — compare** | `CLocalRecoverBuyDlg` | Free-vs-Pro matrix (artifact 11 §4) | `Click_Buy*` |
| **Revenue — win-back** | `CRecoverFinishBuyDlg` | "Unlock Pro… exclusive benefits!" · "%1 users choose to activate Pro…" · "30 million" | `Result_Buy` |
| **Revenue — minimal** | `CBuyGuideWnd` | "Why Pro?" · "Unlimited Recovery · Corrupted Repair · Full Preview" | `Click_BuyNow` |
| **Revenue — repair gates** | repair save gates | "Get Pro to Save Repaired Videos/Documents" · "Unlock to Save Repaired" | `Result_Repairvideo` |
| **Revenue — preview gates** | preview caps | "15s preview only" · "Files larger than 100MB…" · "Preview only. Unlock Pro…" | `Result_Preview` |
| **Revenue — purchase UI** | `EUinApp.exe` host (`InnerWebWindow`/`ChinaMainlandbuyIeWnd`) | in-app web checkout (CN payment variants incl. error states) | `Result_Inappbuywindow` |
| **Revenue — VIP tier** | VIP family + `Vip Chat` | "1-Get VIP,enjoy unlimited recovery and more." · Enterprise/Professional VIP welcome banners · "We have enabled the VIP channel for you… Try VIP Chat" | `Click_Chat_Vip` |
| **Revenue — activation** | `CEnterLicenceDlg` + Apower/External activate dialogs | "Enter license code 'XXXXX-…' here." · states: Expired/Invalid/Locked/Pirate | `Click_Activate*` |
| **Referral** | `UserRateDlg` + `CFollowusDlg` | NPS question + "Subscribe to EaseUS YouTube." | rating events |
| **Integrity** | `PirateVictimsTipDlg` | host-tamper warning copy | — |

## 2. Pressure-gradient design (observation)

Copy intensity escalates by stage: neutral coaching during scan ("We highly recommend recovering files after scan completes" family) → loss-framing at the limit gate ("LOST PERMANENTLY") → social proof + authority at purchase ("%1 users…", "30 million", "Fram EaseUS at 7x24h" [sic]) → fear appeals in warnings ("Most users lose their data permanently due to untimely data recovery"). All strings verbatim from QM/tr-sites (typos preserved as shipped).

## 3. Ad/asset inventory (RCC `Ad/` + `gift/` + `Evaluate/`)

32 ad assets (bg + 4 CTA icon families + 3 buy-hover variants), gift/ promo art, 162 evaluate assets (star states ×5, comment bubbles, submit states) — the complete visual kit for the surfaces above (extraction: `re-workspace/reversed/ui-resources/drw_{light,dark}/Resource/{Ad,gift,Evaluate}/`).

Cross-links: artifact 11 (recovery funnel detail), 06 (telemetry census), 02 (string sources), licensing-chain artifact (activation infrastructure).

## Addendum (session 4 correction — EUinApp)

The revenue-row "EUinApp.exe host" is a mislabel (artifact 23): EUinApp is an orphaned
IE-emulation registry helper; the in-app web checkout runs in DRWUI's embedded-IE windows
(`InnerWebWindow`/`ChinaMainlandbuyIeWnd`).
