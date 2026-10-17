# libcurl.dll (EUFileRepair) — the repair pipeline's HTTP client

**Path**: `og-codebase/EUFileRepair/libcurl.dll` (564,736 bytes, 100 exports, 419 imports)
**Class**: third-party runtime (curl/libcurl) — repair-side network substrate

## Role in the product

Shipped only inside `EUFileRepair/` — the file-repair working directory. libcurl serves the repair tools' download needs:
1. **Sample-file fetching** — video/photo repair downloads reference/sample media (the Adobe repair cloud client and format-specific sample registries live in the EUFileRepair data tree)
2. **Cloud repair relay** — EUAdobeRepair.exe's cloud client path (architecture/06 repair chain) uses HTTP(S) for upload of damaged files / download of results
3. Potentially update/channel checks for repair format packs

## Consumer anomaly (verified)

**Zero PE-import consumers** across all 1,470 inventoried files — libcurl is loaded **dynamically** (LoadLibrary/GetProcAddress) by the repair executables, or invoked as a tool by external repair helper processes. This late-binding pattern matches the repair pipeline's plugin-style tool invocation (window-IPC invocation chain documented in the image-repair grammar artifact: EUImgRepair_Wndname + registry key launch path).

## Cross-links

- `runtime-families/network-libraries.md` (family map), `architecture/06-repair-chain.md`
- `FileRepair/image-repair--format-grammar.md` (the tool-invocation chain that reaches this DLL)
- Contrast: cloud side uses cpprest141 (cloud_session.dll), telemetry uses Qt5Network/AliyunWrap — three distinct HTTP stacks in one product, each pinned to its subsystem
