# Cloud Recovery Architecture — cloud_session.dll + EuICloudRecovery.dll (+ firebase)

> Binaries: `og-codebase/cloud_session.dll` (91 RTTI types), `og-codebase/EuICloudRecovery.dll`
> (81 RTTI types), `og-codebase/firebasefetch.exe` + `firebaseonlineconfig.dll`,
> DRWUI cloud UI (RTTI + Qt strings), cpprest141_2_10.dll runtime.
> Evidence: RTTI type descriptors, string tables, import lists.

## 1. Product Flow (DRWUI, string-verified)

Home tile "Cloud" → `CHomeCloudLoggingWnd` (sign-in) → `CHomeCloudDriveView` ("Select a Cloud
Drive to Start Recovering") → provider pick: **iCloud / Dropbox / Google Drive / OneDrive** →
`CDoScanCloudDevice` + `CloudSearchController`/`ICloudSearchController` (RTTI) → "Cloud Scanning
%1, Files Found:" → results → recovery either to local or BACK TO a cloud drive ("You can select
a Cloud drive to save the found data", quota check "Not enough free space on the target Cloud
drive"). Disconnect/re-auth states: "Cloud Drive Disconnected", "Please re-authorize or select
another cloud drive", "Reselect Cloud". `CCloudRecoveryController` drives the recovery strategy;
`CCloudLogginThread`, `CCloudDataRunList`, `CCloudDevice`, `CCloudFileProperties` support it.
ESIcloud also surfaces `EuICloudRecovery.dll` directly ("es_icloud_recovery" build project).

## 2. cloud_session.dll — OAuth2 drive sessions (Dropbox / Google / OneDrive)

Built on **C++ REST SDK (Casablanca) cpprest141_2_10.dll** with its experimental OAuth2 layer:

| RTTI class | Role |
|---|---|
| `oauth2_code_listener` (+ binder on `http_request`) | loopback HTTP listener capturing `?code=` on the OAuth2 redirect |
| `oauth2_config` (experimental::oauth2::http::web) | authorization-code flow config: `build_authorization_uri`, `_request_token`, `access_token`, `grant_type`, `redirect_uri`, `authorization_code` strings present |
| `dropbox_session`, `dropbox_download_stream`, `dropbox_file_stream`, `dropbox_folders_list` | Dropbox content access (folders list + ranged download streams) |
| `google_download_stream` (+session glue) | Google Drive content access |
| `onedrive_session`, `onedrive_cloud_stream`, `onedrive_download_stream` | OneDrive/Graph content access |
| `ItemInfo` + PPL task continuations (`_ContinuationTaskHandle<pair<tuple<bool,ItemInfo*,int>,uint64>>`) | async item enumeration pipeline with cancellation tokens — each cloud item is fetched as a task producing (bool ok, ItemInfo, depth) + size |

So: standard OAuth2 authorization-code-with-loopback per provider; items enumerated into
`ItemInfo` records streamed back to DRWUI; downloads exposed as seekable streams so the
scan engines can read cloud files with arbitrary offsets (same contract as local volumes).

## 3. EuICloudRecovery.dll — full iCloud client (namespace `esicloud`)

Statically linked OpenSSL 1.x (e_des3.c, rec_layer_s3.c, s3_enc/msg/lib — TLS + 3DES).
Apple endpoints (strings): `https://idmsa.apple.com` (Apple ID auth),
`/setup/ws/1/accountLogin`, `/setup/ws/1/requestPCS` (**Protected Cloud Storage** — Advanced
Data Protection key requests), `/setup/ws/1/storageUsageInfo`, telemetry
`feedbackws.icloud.com/reportStats` (+ `.com.cn` China variant), `appIdentifier=iclouddrive`,
`zone=com.apple.{Keynote,Numbers,Pages}` (iWork zones), `drivewsid` (Drive sync token).

Service classes (RTTI, `esicloud` namespace):
| Class | Domain |
|---|---|
| `IESIcloud`, `IcloudClient` | entry point + HTTP session |
| `ICloudAuthenticator` | Apple ID (idmsa) authentication + PCS key requests |
| `IcloudDrive`, `ICloudDriveUploadTask` | Drive items + upload (save recovered data back) |
| `IcloudPhotos` | Photos library |
| `IcloudContacts` / `IcloudMail` / `IcloudMessages` / `IcloudNotes` | PIM data |
| `IcloudKeychain` | keychain items |
| `IcloudHealth` / `IcloudHomeKitSecureVideo` | Health + HSV (video clips) |
| `ICloudRecovery` | the recovery orchestration facade used by DRWUI |

iCloud's login (idmsa.apple.com) uses Apple's SRP-6a "Grand Slam" auth + session cookies, then
the setup/ws endpoints provision per-service state; PCS (ADP) unlocks end-to-end-encrypted
data when the user's escrow is available — consistent with `requestPCS` here.

## 4. Firebase components (config/experiments, not storage)

`firebaseonlineconfig.dll` (`COnlineConfigFirebase::init/fetch`, "environment:%s"),
`firebasefetch.exe` (`DrwMainWindow::doFirebaseFetchFinished` in DRWUI) — Remote Config /
A-B feature flags (e.g. holiday-resource download toggles `startDownloadHolidayRes firebaseValue`).
`firebasefetch.exe` is fetched/run out-of-process to pull config and hand results to DRWUI.

## 5. End-to-end cloud recovery path

```
DRWUI CHomeCloudLoggingWnd ── OAuth2 loopback (cloud_session.dll) ──> Dropbox/Google/OneDrive
DRWUI "Sign in to iCloud" ── esicloud auth (EuICloudRecovery.dll, OpenSSL, idmsa+setup/ws) ──> iCloud
   ↓ item enumeration (ItemInfo tasks / Drive zones)
CDoScanCloudDevice / CloudSearchController ("Cloud Scanning %1, Files Found:")
   ↓ scan engines read via provider download streams (seekable)
results tree (same classify/filter/preview as local)
   ↓ CCloudRecoveryController
recover to local disk  OR  upload back (onedrive_cloud_stream / ICloudDriveUploadTask, quota-checked)
```

## 6. Cross-links

- DRWUI architecture: `artifacts/DRWUI-exe--main-ui-architecture.md` §3.2 cloud classes
- Search controller interfaces: same artifact §3.8
- Build tree: `architecture/01-build-tree-intelligence.md` (es_icloud_recovery project)
- RAW evidence: `re-workspace/reversed/cloud_session.dll/`, `re-workspace/reversed/EuICloudRecovery.dll/` (rabin2/strings)

## 7. Confidence

RTTI class lists and endpoint URLs are byte-exact from binaries. OAuth2 flow mechanics follow
from cpprestsdk's named APIs present in RTTI/strings (build_authorization_uri, code listener).
The exact Apple SRP handshake sequence is inferred from endpoint + OpenSSL presence (not yet
instruction-level verified — pending Ghidra run on EuICloudRecovery.dll, queued in misc batch 2).

---

## 8. SRP HANDSHAKE — INSTRUCTION-LEVEL VERIFIED (doc-session addition)

The prior §7 caveat ("Apple SRP handshake inferred, not yet instruction-verified") is now
**resolved**. `esicloud::ICloudAuthenticatorImpl::authenticate_with_srp` (EuICloudRecovery
decompilation, ghidra-misc) implements the full client side of Apple's "Grand Slam" SRP-6a
login with **libsrp statically linked** (symbols `srp_user_new`, `srp_user_process_challenge`,
`srp_user_get_username`, `srp_verifier_*` present):

```
authenticate_with_srp()                                  [icloud_authenticator.cc]
  1. generate_srp_public_a():
       srp_user_new(2, 1, username, password, 1, NULL, NULL)   // SRPUser* (alg/ngflavor consts)
       → public value 'a'   ("SRP user new failed." on error,
         source trace: H:\VS_SPACE\es_icloud_recovery\source\icloud_authenticator.cc:0x186)
  2. init_srp_auth_session(): POST 'a' to Apple → receive salt(s) + server public B
       endpoint (strings, byte-exact): https://idmsa.apple.com/appleauth/auth
  3. generate_srp_m1_m2():
       srp_user_process_challenge(user, s, len_s, B, len_B, &M1, &M1_len)  // SRP-6a proof
       base64_encode(M1) → request payload (std::vector<byte> ranges visible)
  4. Authentication state persisted via nlohmann::json (abi_v3_12_0) + CurlRequest (libcurl);
     eslog::Logger error channel with class::method context strings.
```

Also verified: `/setup/ws/1/storageUsageInfo?` request construction (memmove of literal at
213715) — the setup/ws family is built the same way as previously inferred.

**Confidence: 100% for the SRP mechanism** (function names + libsrp API calls + endpoint
strings + source path all byte-exact from decompilation).
