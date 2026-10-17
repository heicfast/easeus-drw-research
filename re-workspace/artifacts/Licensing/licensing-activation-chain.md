# Licensing & Activation Chain

> Evidence: DRWUI strings/RTTI, EUinApp.exe, EuRepairHost.exe, euactiveonline PDB path,
> English.qm UI copy.

## Components

| Component | Role | Evidence |
|---|---|---|
| **euactiveonline 3.1** (library) | core activation protocol, statically linked into DRWUI | PDB `h:\awork\euactiveonline3.1\source\euactiveonline\euactiveonline.cpp`; RTTI `EuActiveOnline`, `IEuActiveOnline`, `COnlineActivation`, `IOnlineActivate` |
| DRWUI activation UI | dialogs + gating | RTTI: `ActivateResultDialog`, `ActivateViewProxy`, `ApowerActivateDialog`, `CChinaMainlandActivateDlg`, `ExternalActivateDialog`, `InnerBuyActivateDlg`, `LicenseInputEdit`, `TitleActivateButton`; strings: "Auto-Activation Successful", "Manual-Activation Successful", "Automatic activation failed after payment.", "Paid successfully and it may take a while for activation." |
| **EUinApp.exe** | in-app purchase / store bridge (209 fns) | certificate infrastructure (GlobalSign/DigiCert CRL+OCSP URLs embedded — TLS chain validation of store/payment endpoints) |
| **EuRepairHost.exe** | repair-feature licensing bridge (50 fns) | `activation.easeus.com` + `activation.easeus.com.cn` endpoints (China variant) |
| firebase remote config | A/B gating of monetization surfaces | `firebaseonlineconfig.dll` + `firebasefetch.exe` |

## Activation endpoints (string-verified)

- `activation.easeus.com` (global)
- `activation.easeus.com.cn` (mainland China variant — matches `CChinaMainlandActivateDlg`,
  `ChinaMainlandbuyIeWnd`/`ChinaMainlandbuyErrorWnd` UI classes and "Mainland_Foxit" flag)

## Free→paid gates in the UX (byte-exact UI copy)

- "%1 free recovery capacity." — free quota display
- "Recover remaining" / "Recovery remaining" / "yet to be recovered."
- "Unlock Full Recovery" / "Unlock and Recover" (BitLocker unlock+upsell)
- "Recover unlimited" / "Unlimited Recovery" / "Recover Unlimited Data" / "Lifetime data recovery"
- "Suggested Recovery" — curated subset offered within free tier
- "1 License for %1", "1-My Order", "Serial Number: %s", "%1 users choose to activate Pro
  and successfully recover data." (social proof), "Create to Recover Now" [sic]
- Repair upsell: "Try Advanced Repair", "Quick Repair Failed", "$Enable file repair" flag

## Flow (reconstructed)

```
scan results (free tier)
  → Recover with count > quota? → Recovering_Click_Upgrade (analytics event, decompiled
    in CRecoveryMgr::ExportThread) → buy surfaces (CBuyGuideWnd / InnerBuyActivateDlg /
    ApowerActivateDialog / China mainland variants)
  → payment (EUinApp / external store) → "Paid successfully..."
  → COnlineActivation: auto-activate against activation.easeus.com[.cn]
    (fallback: Manual-Activation — LicenseInputEdit serial entry)
  → writeActivateData (registry/files) → gates lift
Repair features: EuRepairHost checks activation before spawning Fixo engines
Cloud/PE variants: CPEBuyRetainWnd (boot-media retention offer), UninstallDlgRetentionTrigger,
value_inappuninstallretain / value_uninstallretain172 (retention experiments)
```

## Cross-links

- Recovery gating hook (decompiled): `architecture/04-recovery-workflow.md` §7
- Monetization UI inventory: `architecture/07-user-flow-uiux.md` §7
- Per-binary: `re-workspace/artifacts/per-binary/{EUinApp,EuRepairHost}.md`
- Repair chain: `architecture/06-repair-chain.md` §2

## Confidence

Endpoints, class names, UI copy: byte-exact from binaries. Purchase flow order is
reconstructed from UI state machine + event names (labeled as reconstruction).
