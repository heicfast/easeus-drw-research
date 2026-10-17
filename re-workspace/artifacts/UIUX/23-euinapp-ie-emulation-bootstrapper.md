# UI/UX Artifact 23 — EUinApp.exe Decoded: The IE-Emulation Bootstrapper (Not a Purchase Host)

> Scope: 05-uiux §7 open item #4 — "EUinApp purchase-host page-flow RE". Result: **the purchase-host
> premise was wrong**. EUinApp is a shared-library registry helper; the artifact below decodes its
> complete logic (209 functions, 3,898 decompiled lines — fully read).
> Evidence: `re-workspace/reversed/ghidra-misc/EUinApp_decompiled.c` (FUN_00402110 entry,
> FUN_00402080 controller, FUN_00401a20/140 IE-version readers, FUN_00401c90 version mapper,
> FUN_00401ce0 registry writer, FUN_00401fb0 Internet-Settings pass), rabin2 imports/strings;
> PDB path `e:\AWork\share_lib\99_PublicLibrary\EUSetWebCtrlIEVersion\x86\EUinApp.pdb`.

## 1. What EUinApp.exe actually is

A 40 KB, 32-bit, VS2008 (MSVCP90) console helper from EaseUS's shared "public library" tree —
project name **`EUSetWebCtrlIEVersion`** ("EU Set WebCtrl IE Version"). It has **no UI imports**
(no USER32/GDI32/WININET/ole32): it is not a window, not a browser host, not a web view. Its
entire purpose:

**Register a host process for IE `FEATURE_BROWSER_EMULATION` so embedded WebBrowser controls
render in IE11 mode instead of the legacy IE7 default.**

## 2. The complete flow (every step decoded)

```
wWinMain-equivalent FUN_00402110:
  GetCommandLineW → CommandLineToArgvW
  if (argc > 1): name = argv[1]                      # the ONE argument = host EXE name
  FUN_00402080(name):
    if (wcslen(name) > 3):                           # plausible ".exe" name
      ver = FUN_00401c90():
          ieMajor = FUN_00401a20()                    # reads HKLM\SOFTWARE\Microsoft\Internet Explorer
                                                      #   svcVersion → fallback "version" → atoi(major)
          return  9000 if ieMajor ==  9               # IE9  → IE9  doc mode
                 10000 if ieMajor == 10               # IE10 → IE10 doc mode
                 11000 otherwise                      #      → IE11 doc mode (incl. IE7/8 hosts!)
      if (ver != 0):
        FUN_00401ce0():
          key = HKCU (0x80000001) \Software\Microsoft\Internet Explorer\
                Main\FeatureControl\FEATURE_BROWSER_EMULATION
          RegCreateKeyExW(key, KEY_READ|KEY_WRITE)
          if (existing_value(name) < ver):            # upgrade-only (FUN_00401660 compare)
              RegSetValueExW(hkey, name, REG_DWORD, ver)
          RegCloseKey
        FUN_00401fb0():
          touches Software\Microsoft\Windows\CurrentVersion\Internet Settings
          (CRegKey open/query — companion check of the browser config)
```

**Invocation contract**: `EUinApp.exe <HostExeName.exe>` — e.g. `EUinApp.exe DRWUI.exe` would set
`HKCU\...\FEATURE_BROWSER_EMULATION\DRWUI.exe = 11000 (DWORD)`. Upgrade-only semantics: an existing
higher value is never downgraded. IE9/IE10 hosts get their matching doc mode; **anything else
(including IE7/IE8) is pinned to 11000** — the checkout pages are authored for IE11-grade rendering.

## 3. The deployment fact that rewrites the role

A full-corpus scan (all top-level EXEs/DLLs, ASCII **and** UTF-16) finds **zero references to
`EUinApp`** — not from DRW.exe, not from DRWUI.exe, not from SetupUE.exe/InfoForSetup.exe/unins000.exe.
In this build EUinApp is an **orphaned deployment**: the shared-library helper shipped (vestige of
the `99_PublicLibrary` tree) but no in-tree component invokes it. Its function — enabling modern
rendering inside DRWUI's embedded-IE shells (`InnerWebWindow`, `ChinaMainlandbuyIeWnd`) — is
either performed by the external installer (out-of-tree), already-absorbed elsewhere, or simply
not wired in this build.

## 4. Corrections to prior artifacts

- Artifact 13 §7: "EUinApp.exe — in-app purchase host (no custom UI classes; rendered via DRWUI's
  InnerWebWindow/ChinaMainlandbuyIeWnd embedded-IE shells" → **EUinApp hosts nothing and renders
  nothing**. The purchase webviews are hosted *inside DRWUI itself* (QAxWidget-embedded IE);
  EUinApp is the (orphaned) registry prerequisite-setter for those views.
- Artifact 17 §2 revenue row: same correction — the "purchase UI host" is DRWUI's embedded-IE
  window classes; EUinApp is infrastructure.
- Master doc §1 "Companion UIs … EUinApp purchase host (embedded web)" → reclassify as
  "shared-library IE-emulation helper (orphaned in this build)".

## 5. The actual purchase page-flow (as it stands after this correction)

The in-app checkout flow lives entirely in DRWUI: purchase entry points (limit dialog artifact 11,
buy buttons, `Result_Inappbuywindow` telemetry) open `InnerWebWindow` / `ChinaMainlandbuyIeWnd`
(IE WebBrowser control embedded via Qt) pointed at EaseUS's web checkout; CN-mainland variants
get the dedicated IE shell. Page content is remote (out of codebase scope); what the codebase
supplies is the embedding, sizing, and result-handling of the windows — already decoded in
artifacts 13 §7 and 17. **No additional local page-flow exists to reverse.**

## 6. Open follow-ups

- If the Windows-native ground-truth run (CI) ever shows the checkout window, confirm the
  emulation mode actually applied (reg query of FEATURE_BROWSER_EMULATION on the runner).
- `InnerWebWindow` / `ChinaMainlandbuyIeWnd` class decodes (QAxWidget surface, navigate/result
  IPC) as a possible future artifact.
