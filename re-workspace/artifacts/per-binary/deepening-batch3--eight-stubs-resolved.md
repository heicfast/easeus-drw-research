# Deepening batch 3 — eight thin per-binary stubs resolved to full roles

> Completes the per-binary coverage for the remaining thin stubs. Each entry: corpus,
> role, key evidence (verbatim strings/code), cross-links. Corpora under
> `re-workspace/reversed/{ghidra-misc,ghidra-partition,ghidra-repair}/`.

## 1. send_dmp_with_aliyun.exe — crash-dump telemetry uploader [CODE]

- **Role**: packs crash dumps (zlib + base64 — "Input is not valid base64-encoded
  data.", zlib's inflate assertion "Call UPDATE_HASH() MIN_MATCH-3 more times") and
  uploads them through the Aliyun analytics SDK.
- **Mechanics**: dynamically loads `AliyunWrap.DLL` and drives its full session API:
  `AliyunOpenSession / AliyunAddParamToSessionA/W / AliyanSendInfo /
  AliyunCloseSession / AliyunGetUserUid / AliyunEnableUserInfoCollect /
  AliyunInstallInitUid / AliyunInstallConfigFilePath / AliyunUninstallStart/End /
  AliyunStopProcess`. Owns the namespace GUID `ALIYUN_{C69BDD99-9D0B-43f2-A794-9B70DAD4A96A}`
  (the shared-memory/mutex namespace for the telemetry IPC — same GUID pattern as
  PubLog below).
- **Position**: invoked by DRWReport (crash reporter) after writing DRWDump0/1.DMP —
  the upload leg of the crash chain (`per-binary/DRWReport-exe--crash-reporter.md`).

## 2. PubLog.dll — the multi-process shared-memory log bus [CODE]

- **Role**: cross-process logging over a memory-mapped file with named sync objects.
- **Mechanics**: opens/maps `./log/DefaultLog.txt` as a map file ("Failed to create
  map file!" / "Failed to map the map file!" / "Failed to request the permission to
  write to buffer!"); namespace GUIDs `DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}`
  and `DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}` (log mutex + data view);
  condition-variable synchronization (InitializeConditionVariable /
  SleepConditionVariableCS / WakeAllConditionVariable, dynamically resolved).
- **Position**: this is the OTHER end of DRWLoader's 2 MB shared log buffer flush
  loop (`DRW-exe--launcher.md`): processes write via PubLog's mapped section;
  the loader drains it every 5 s.

## 3. BootDriver (partition batch) — the BOOT MEDIA BUILDER (not a kernel driver!) [CODE]

- **Role**: builds bootable WinPE media — misleading name; it is a user-mode MOM
  module (CBootDriver class).
- **Mechanics**: `CBootDriver BootType:%d, nDriver:%d` + `CBootDriver Execute
  Start/End! Err = 0x%x`; burn path `CBurnBootCD CallBack Result/Type` (IMAPI2 chain
  from the Burn family); config from `../res/urls.ini` + `..\res\UIConfig.ini`;
  handles `.iso` and `.ini` assets with `CopyFileW` error tracing; hardening:
  "BootDriver: Error = 0x%x, Line = %d" checkpoints.
- **Position**: the "Create Recovery USB/CD" feature — pairs with the WinPE payload
  inventory (`architecture/03-winpe-boot-environment.md`) and Burn IMAPI2 artifact.

## 4. AutoUpdate.exe — forwarder-aware update checker [CODE]

- **Role**: update probe with WinSxS api-ms-* forwarder resilience.
- **Mechanisms**: resolves `api-ms-win-core-synch-l1-2-0.dll`, `ext-ms-*`, and
  `mscoree.dll` explicitly (down-level api-set handling), console output via
  `CONOUT$`. The heavy 22 K-line body is CRT + URL/manifest plumbing.
- **Position**: the product updater — pairs with firebasefetch (below) and the
  remote-config chain.

## 5. firebasefetch.exe — remote-config downloader [CODE]

- **Role**: downloads the regional remote-config blob:
  `https://update.easeus.com.cn/update/drw_cn/Yiwo_remote_config_data.data`
  (the CN update host; the `_abroad` twin comes from the same host per
  `remote_config_data` artifact).
- **Mechanics**: shells through `firebaseonlineconfig.dll` (the Firebase remote-config
  client) — the exe is the fetch loop + retry/cache layer.
- **Position**: feeds DRWUI's ~600 Firebase feature flags
  (`config-files/EUUserData--remote-config.md`).

## 6. AliyunWrapExe.exe — the Aliyun analytics host [CODE]

- **Role**: the OUT-OF-PROCESS Aliyun telemetry host (the DLL side is AliyunWrap.dll).
- **Mechanics**: `AliyunConfig.ini` + `ACCESSKEYSECRET` (bucket credentials);
  AES encrypt/decrypt of payloads ("AES encryption failed:" / "AES decryption
  failed:"); `AllowSendUrl` whitelist gating; the runtime sightings of
  `AliyunWrapExe.Exe` in the Wine ground-truth census (spawned by DRWUI at startup)
  confirm it launches with the product.
- **Position**: the telemetry backbone for send_dmp_with_aliyun (§1) and the
  product's analytics events (Auto_Trigger_Recover etc. in the scan-phase captures).

## 7. EUUnZip.exe — MFC archive extractor (repair verification UI) [CODE]

- **Role**: archive extraction tool used to VERIFY repaired archives
  (repair → extract → user confirms files).
- **Mechanics**: full MFC 9.0 (VS2008) application — `AfxWnd90su`,
  `AfxFrameOrView90su`, `AfxMDIFrame90su`, `AfxControlBar90su`, `AfxOleControl90su`
  class registration + "Fatal Error: MFC initialization failed"; activation-context
  aware (CreateActCtxW/ActivateActCtx/DeactivateActCtx); multi-monitor aware
  (EnumDisplayDevicesW/EnumDisplayMonitors).
- **Position**: the consumer end of `EUArchiveRepair.exe` output
  (`FileRepair/EUArchiveRepair*` artifacts — 7z/ZIP/RAR chains).

## 8. EuOfficeTools.exe — the Office surgery toolkit (111 K lines) [CODE]

- **Role**: OOXML + BIFF format validation/repair utilities backing the Office
  repair chain.
- **Mechanics**: XPath-based OOXML surgery (`//dcterms:created`, `//dcterms:modified`,
  `//cp:lastModifiedBy`, `//w:numPr/w:ilvl` — core-properties and WordprocessingML
  numbering); **BIFF** (Excel binary) record parser with strict validation
  (") for BOF record type ", "biff_version=", "NAME formula" checks, "cell name"
  and "row number" diagnostics, external-file reference handling "in external(?)
  file #"); regex-quoted pattern table for filename safety.
- **Position**: the office-repair detail layer beneath EuOfficeRepairWin32 (the
  1.64 M-line schema-driven engine — `FileRepair/` artifacts from batch 2); where
  the engine validates individual records, EuOfficeTools performs targeted
  XML/record surgery.

## Cross-links

- Crash chain: `per-binary/DRWReport-exe--crash-reporter.md` → §1 → `AliyunWrap.dll`
  family; telemetry sightings in `UIUX/` dynamic captures
- Log bus ↔ loader: `per-binary/DRW-exe--launcher.md` (2 MB flush loop)
- Boot media: `architecture/03-winpe-boot-environment.md` + Burn family
- Remote config: `config-files/` artifacts · Office repair: `architecture/06-repair-chain.md`

## Confidence

100% [CODE] — every quoted string/constant is verbatim from the corpora; roles are
decoded from those strings + import sets, each cross-referenced to its established
surrounding chain.
