# cpprest141_2_10.dll — Microsoft C++ REST SDK (Casablanca), the cloud_session HTTP engine

**Path**: `og-codebase/cpprest141_2_10.dll` (3,756,032 bytes, 353 exports, 451 imports)
**Class**: third-party runtime (Microsoft) — but load-bearing for the cloud recovery feature
**Consumer (verified via PE imports)**: `cloud_session.dll` — and ONLY cloud_session.dll across the entire tree. This single-consumer fact pins the C++ REST SDK as the exclusive HTTP/WebSocket substrate of the cloud recovery session layer.

## Role in the product

The C++ REST SDK provides async HTTP client (`web::http::client::http_client`), JSON, OAuth and WebSocket primitives. DRW's cloud recovery flow (artifact `Cloud/` family + `architecture/06`-adjacent cloud docs) uses cloud_session.dll as its session broker (SRP-6a handshake, token management, session upload/download). Every network primitive that layer needs beyond WinHTTP comes from this DLL — which is why a 3.7 MB Microsoft SDK ships for exactly one consumer.

## What it is NOT

- Not used by DRWUI's own telemetry (that is Qt5Network in DRWUI + AliyunWrapExe.Exe process — verified in the dynamic ground-truth artifact)
- Not used by the repair tools (EUFileRepair uses libcurl.dll — see companion artifact)
- Not in the bootable PE build (BUILDPE lacks cpprest — cloud_session.dll itself is live-tree-only, per the WinPE payload census §2)

## Evidence trail

- PE import scan (inventory.json): 1 consumer
- BUILDPE payload census artifact: absent from PE build
- Cloud artifacts: cloud_session.dll deep-dive (SRP-6a handshake decoded there operates over this SDK's http_client)

## Cross-links

- `per-binary/cloud_session.md` (consumer), `Cloud/` family, `runtime-families/network-libraries.md`, WinPE census (`WinPE/pe-payload-census--buildpe-easeus-x64.md`)
