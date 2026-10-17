# EUinApp.exe — IE/WinINet Environment Bootstrapper (browser-emulation + secure-protocol config)

**Binary**: EUinApp.exe — 3,898-line decompilation (ghidra-misc), VC9-era, registry-only imports (zero browser/network imports)
**Evidence**: import table (RegQuery/RegSet/CreateKey family ONLY + CRT), string census (4 registry paths + 3 value names)
**Role**: Independently decodes and **corroborates the UIUX wave-4 role correction** ("EUinApp = IE-emulation bootstrapper, not the in-app store itself") — with the exact registry contract.

---

## 1. The complete registry contract (all strings in the binary)

| Operation | Key | Value | Purpose |
|---|---|---|---|
| write | `Software\Microsoft\Internet Explorer\Main\FeatureControl\FEATURE_BROWSER_EMULATION` | (process-name → mode) | **pins the IE engine version** that any embedded WebBrowser control (in the product's HTML surfaces) will emulate — without this, embedded browsers render in ancient IE7 mode |
| read | `SOFTWARE\Microsoft\Internet Explorer` | `version`, `svcVersion` | detects the installed IE version to choose the emulation mode |
| write | `Software\Microsoft\Windows\CurrentVersion\Internet Settings` | `SecureProtocols` | **forces the system secure-protocol bitmask** (TLS 1.0/1.1/1.2 selection) for WinINet consumers — the store/licensing HTTPS flows need modern TLS on old Windows |

## 2. What it is NOT (verified)

- **No browser imports** (no urlmon/wininet/mshtml/shdocvw — import table is KERNEL32 + ADVAPI32 registry APIs + CRT only)
- **No network code at all** — it configures the environment; other binaries do the browsing
- 3.9K lines = mostly CRT; the real logic is a handful of registry functions

## 3. Who benefits

The product's embedded-HTML surfaces (the licensing/store pages and any WebBrowser-hosted content) inherit IE's engine; EUinApp runs first to make that engine (a) modern (FEATURE_BROWSER_EMULATION) and (b) TLS-capable (SecureProtocols) — the classic pre-flight for WinINet-era commerce integrations on Windows 7/8 where TLS 1.2 was off by default and the WebBrowser control defaulted to IE7 rendering.

## 4. Cross-links

- Role correction this corroborates: `UIUX/05-uiux-architecture.md` §11 (wave-4: "EUinApp role correction — orphaned IE-emulation bootstrapper")
- The actual store/in-app flow: `UIUX/17-monetization-growth-surfaces.md`; licensing chain: `Licensing/` artifacts
- Runtime-family note (VC9 generation): `runtime-families/vc-runtime-generations.md`
