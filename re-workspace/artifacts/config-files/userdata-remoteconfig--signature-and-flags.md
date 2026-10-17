# EUUserData + remote_config_data — Custom Signature DB and the Firebase Feature-Flag Cache

**Files**: `og-codebase/EUUserData` (JSON, 111 entries), `og-codebase/remote_config_data` (62,579 B binary key-value cache, 1,369 null-separated tokens)
**Method**: JSON parse + token census with length-prefixed value decoding (the `\x04true`/`\x05false` pattern = 1-byte length + value strings)
**Role**: The two user/remote-side configuration stores — custom RAW signatures (user-extensible carving) and the shipped Firebase Remote-Config snapshot (the full feature-flag surface).

---

## 1. EUUserData — the user-extensible signature database

111 per-extension entries, each `{ext: {signs: ["offset,HEX"...], mime: "..."}}`:

```json
"doc":  { "signs": ["0,0D444F43", "0,CF11E0A1B11AE100"], "mime": "application/msword" }
"epub": { "signs": ["0,504B03040A000200"],              "mime": "application/epub+zip" }
"gz":   { "signs": ["0,1F8B08"],                         "mime": "application/gzip" }
"mxf":  { "signs": ["0,060E2B34020501010D0102010102", "0,3C435472616E7354696D656C696E653E"], "mime": "application/mxf" }
"123":  { "signs": ["0,00001A00051004"],                 "mime": "application/vnd.lotus-1-2-3" }
```

- Same `offset,hex` grammar as raw_signs.json but **extensible at runtime** — this is the file behind the product's "add custom file type / signature" feature (the UI's custom-format flow feeds this JSON)
- The signature choices are *sharper* than raw_signs.json (e.g. MXF gets the full SMPTE KLVP key + a `<CTransTimeline>` XML fallback; DOC gets the OLE GUID) — the user-facing signature editor ships smarter defaults for popular formats
- MIME types included — custom entries carry display/classification metadata
- Legacy coverage in the defaults: Lotus 1-2-3/Notes/WordPro, Palm, mac-binhex40, tcpdump pcap — the old-format long tail

## 2. remote_config_data — Firebase Remote-Config snapshot (feature flags)

Binary cache: `fetched` timestamp + token stream where keys are plain strings and values are **1-byte-length-prefixed** (`\x04true`, `\x05false`, numbers, strings). 1,219 semantic tokens ≈ ~600 key/value flags. First tokens establish the shape:

```
firebase
enable_activate = false          enable_app = true
enable_activate__free = false    enable_backuphome = true
enable_chat__abroad = false      enable_chat__abroad__easeus = true
enable_chronosnap = false        enable_continue = true
enable_docrepair = true          enable_ens = false
```

**Decoded structure of the flag namespace**:
1. **`enable_*` feature gates** — per-feature on/off switches (activate, app, backuphome, chat, chronosnap, continue, docrepair, ens, …) — the product's feature-flag system over Firebase Remote Config
2. **Suffix segmentation** — flags carry market/channel suffixes (`__abroad`, `__free`, `__abroad__easeus`): **per-market AND per-edition flag variants** — e.g. chat disabled abroad generally but enabled for the easeus channel abroad; activate disabled for the free edition
3. This cache is the SHIPPED DEFAULTS — the local fallback when the device can't fetch (matches DRWUI's startup "Try to initialize Remote Config..." then falls back to this snapshot)
4. `enable_chronosnap = false` in the shipped snapshot — the ChronoSnap Backup sidebar item is remotely-gated (the landing-page capture showed it present; the flag default here may be overridden post-fetch, or the flag gates the FEATURE not the sidebar entry)

**Verification cross-links**: the startup sequence (Firebase init → Remote Config) is the exact flow observed in the dynamic ground-truth runs (Wine v1 log: "Database URL not set… Try to initialize Remote Config...").

## 3. Cross-links

- raw_signs.json (the built-in signature DB): `config-files/config-data-reference.md`
- Firebase pair + fetch flow: `Cloud/` artifacts + per-binary `firebasefetch.md`
- Feature-flag consumers (monetization surfaces): `UIUX/17-monetization-growth-surfaces.md`
- Remote-config startup behavior: `UIUX/dynamic-ground-truth--wine-loader-run.md` §3
