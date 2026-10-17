# BUILDPE/EaseUS-x64 Payload Census — the PE Edition of DRW, diffed against the live-install tree

**Source**: full `find` census of `BUILDPE/EaseUS-x64/` (180 files), name-level diff vs `og-codebase/` main tree (in-tree `comm` on basename sets), config/version.ini textual diff, subdirectory census both trees
**Role**: Establishes exactly what the bootable (Emergency Disk) edition contains, what it deliberately omits, and what the differences imply about runtime dependencies in WinPE.

---

## 1. Payload categories (all 180 files, grouped)

| Category | Files (representative) | Notes |
|---|---|---|
| **Product core** | DRW.exe, DRWUI.exe, DRWService.exe, DRWReport.exe, DRWReport.ini | Same supervisor chain as live Windows (DRWLoader→DRWUI, BitLocker pipe service, XCrashReport reporter) |
| **Scan engines (9)** | NTFS/FAT/exFAT/EXT4/HFSPlus/ReFS/Btrfs/Zfs/RAW SearchDLL.dll | Complete engine set — deep scan works in PE |
| **Repair tools** | EUArchiveRepair.exe, EUImgRepair.exe, EUAdobeRepair.exe, EuOfficeRepairWin32.exe, EUVideoRepair.dll, EUImageEnhance.dll, EURawImg.exe, EuRepairHost.exe | Full repair line ships in PE |
| **Viewers** | PDFViewer.exe, EUOfficeViewer.exe, EUHwpViewer.exe, EuOfficeTools.exe, EUHwpFilePathCheckerModule.dll | In-app preview surfaces (out of core scope; listed for completeness) |
| **Cloud** | EuICloudRecovery.dll, firebasefetch.exe, firebaseonlineconfig.dll, google-services.json, remote_config_data | Cloud recovery available from PE (network permitting) |
| **NAS/data** | libssh2.dll, nasconfig.ini, Dict, raw_signs.json, FileFilter.xml, EUUserData | connect.exe itself is runtime-downloaded (doc-3 finding), so NAS-agent flows require internet at recovery time |
| **Qt runtime** | Qt5{Core,Gui,Widgets,Network,Svg,WinExtras}.dll, platforms/{qwindows,qoffscreen,qminimal}.dll, imageformats/{qsvg,qjpeg,qgif}.dll, iconengines/qsvgicon.dll | Qt 5.x; **qoffscreen ships PE-only** (headless fallback when no display subsystem is ready) |
| **C/C++ runtimes** | msvcp90/msvcr90/mfc90u (VC9), msvcp120/msvcr120 (VC12), msvcp140/vcruntime140/concrt140 (VC14), ucrtbase.dll + **49 api-ms-win-* forwarder DLLs** | Three compiler generations in one tree (engine codebases of different ages); the api-ms-win-* set + ucrtbase = **UCRT redistribution for WinPE, which has no UCRT** — the PE build self-carries the full userspace CRT |
| **Crypto/SSL** | libeay32.dll+ssleay32.dll (OpenSSL 0.9.8-lineage names), libssl/libcrypto-1_1-x64.dll (1.1), libssl/libcrypto-3-x64.dll (3.x), zlib.dll, zlib1.dll, liblzma.dll | THREE OpenSSL generations coexist — each major subsystem links a different one (licensing/EuRepairHost vs cloud vs engines) |
| **Media codecs (preview)** | libx265.dll, de265.dll, heif.dll, d3d8thk/d3d9/d3d11/dxgi.dll, GDIPLUS.DLL | HEVC/H.265 decode for preview + **Direct3D shims** (d3d8thk et al. are PE-only, see §2) — video preview renders via D3D in PE |
| **Config/data** | config/{config,version,themdark,nasconfig,shellexe,FilterFolder,RawConfig}.ini, usefullostfiles.xml, PriorityDisplayType.xml, style.css, Resource/ImageResource.xml, Resource/drw_light.rcc | Same config set as live tree (§3) |
| **Language** | 25 product .qm + 14 qtbase_*.qm + **4 Mainland variants** (Mainland.qm, Mainland_Foxit.qm, Mainland_JZ.qm, Mainland_LC.qm) | China-market sub-brands (Foxit/JZ/LC OEM channels) coexist in the PE image |
| **Misc tools** | EUUnZip.exe (connect.zip extraction), EuDownloader.exe (WAIK/agent downloads), EUinApp.exe (store/in-app), EuSendMessage.exe (**PE-only**, §2), PubLog.dll, PE_Tools.dll, legacy.dll, archive.dll, Japanese.dll, EUHwpFilePathCheckerModule.dll | PE_Tools.dll is the media builder itself, shipped *inside* the media (used for "create another media" flows) |

## 2. Verified diff — PE edition vs live-install tree

Name-level `comm` of the two root binary sets (this is a *build-pair* diff: same version 21.0.0.0, same PDBs):

**Present ONLY in PE (`BUILDPE/EaseUS-x64/`)** — 6 binaries:
| File | Why PE-only |
|---|---|
| `EuSendMessage.exe` | PE messaging/notification helper (live tree uses different channel); exact role not yet decoded — binary census candidate |
| `d3d8thk.dll`, `d3d9.dll`, `d3d11.dll`, `dxgi.dll` | Direct3D/DXGI — WinPE's graphics stack lacks the full D3D runtime; these make Qt video preview renderable. The live install relies on the OS |
| `mfc90u.dll` | MFC static-avoidance for the VC9-generation modules (PE ships it since WinPE base image doesn't include MFC) |

**Present ONLY in the live tree** — 15 binaries + 8 directories:
| File/Dir | Why absent from PE |
|---|---|
| `SetupUE.exe`, `unins000.exe`, `InfoForSetup.exe` | Installer/uninstaller — meaningless in a ramdisk WIM |
| `7za.exe` | Standalone archiver (used by setup-time operations) |
| `AliyunWrap.dll`, `AliyunWrapExe.exe`, `send_dmp_with_aliyun.exe` | Aliyun OSS upload/crash-dump channel — the PE uses the DRWReport.exe path instead; Aliyun upload is a live-Windows telemetry path |
| `cloud_session.dll`, `cpprest141_2_10.dll` | C++ REST SDK cloud stack — PE cloud uses the firebase pair + EuICloudRecovery instead |
| `EuUserRate.dll` | Rate/recommendation prompt — no desktop persistence in PE, dropped |
| `libeay32MD.dll`, `ssleay32MD.dll`, `libcrypto-1_1.dll`, `libssl-1_1.dll` | MD-CRT-linked OpenSSL variants used by live-tree components that don't ship in PE (PE carries the non-MD names instead) |
| `msvcm90.dll` | VC9 mixed-mode (.NET) runtime — nothing in the PE payload is a mixed-mode binary |
| **Directories**: `PartitionRecovery/` (31 .mo modules + 19 DLLs), `EuShare/` (EuMrx.sys + NAS stack), `NasConfig/` (Synology model DB), `License/` (licensing blobs), `SaveScan/` (3 .rsf sessions), `EUFileRepair/` (repair data), `VideoViewer/` (ffmpeg player), `diskhealth/`, `ResourceDark/`, `styles/`, `log/` | See §3 — the big architectural omissions |

**Zero `.mo` and zero `.rsf` files anywhere under BUILDPE** (`find` verified) — both absences are load-bearing facts.

## 3. Architectural consequences of the omissions (verified)

1. **No lost-partition search in the bootable edition.** The entire MOM module system (MainModule.dll loading 31 `.mo` modules — GPT/LDM/CTbFile/RegLib/CheckVersion..., see PartitionRecovery family artifacts) is absent. DRWUI in PE therefore cannot run the "Lost Partition" scan mode — the PE product is scoped to *file recovery from currently-visible volumes + RAW deep scan + repair*. This matches the DrwLostDiskPage UI surface (UIUX artifacts) being effectively unreachable in PE boot.
2. **No NAS redirector in PE.** `EuMrx.sys` + `EuShare/` + `NasConfig/` absent → the `\\.\EuRdrDN` namespace and drive-letter virtualization cannot exist; PE network recovery is limited to PENetwork SMB shares and (with internet) the runtime-downloaded connect.exe agent flow.
3. **No licensing blobs in PE.** `License/` absent → the PE build runs as the FREE edition by construction (`config/version.ini`: `version=free`, `product-code=RE-DRW-FREE-WIN` — §4); upgrade prompts funnel to EUinApp/purchase surfaces when online.
4. **No saved-scan sessions ship on media** (0 .rsf) — SaveScan files are per-machine, per-run artifacts; the media image is pristine.
5. **No diskhealth/ Qt-QML app in the WIM** — it's deployed from the boot USB's `Tools\` tree at runtime by auto.bat Phase E (see boot-config artifact §2E), keeping the WIM lean.

## 4. config/version.ini — build-pair state diff (textual)

| Field | PE build | Live tree | Meaning |
|---|---|---|---|
| versionNumber | 21.0.0.0 | 21.0.0.0 | same build pair |
| version | free | free | both FREE edition |
| SetupBuildTime | *(empty)* | 1013 | PE copy never went through setup's stamping |
| xurlPageID | *(empty)* | 17920437224164b6211934 | live copy stamped by installer (marketing/page attribution) |
| qq1/qq2 | `0mEP31AAv5cYOuKFUUdKIA==` / `oN3v++DnqLKMC5ROVSD3+Q==` | same values | QQ interconnect secrets identical in both builds |
| InitActive / lastUpdateTs / forceshowcloseretain | absent | 0 / 134364922225900000 / 1 | runtime-written state on the live copy only |
| TreeType | 1 | 1 | same results-tree presentation |

The live tree's `version.ini` is a *runtime-mutated* file (timestamps, activation state) while the PE copy is the pristine build output — useful for separating build-time vs run-time configuration when reading the live tree.

## 5. PE-specific runtime implications

- **UCRT self-carriage**: the 49 api-ms-win-* forwarders + ucrtbase.dll mean every CRT import resolves inside the app dir even on WinPE 5.x images lacking Universal CRT — no dependency on `wpeinit` having patched the OS.
- **qoffscreen.dll**: allows DRWUI to run headless (screenshots/RDP-less contexts); harmless in normal boot, essential in VM/serial recovery scenarios.
- **Three OpenSSL generations**: any symbol-level analysis must attribute each consumer to its specific libcrypto (e.g. EuRepairHost→1.1, cloud→3.x) — already reflected in per-binary artifacts.
- **EuSendMessage.exe** is the one PE-only binary with no decoded role yet — queued for per-binary RE (see worklog open items).

## 6. Cross-links

- Boot sequence + media builder: `architecture/03-winpe-boot-environment.md`, `artifacts/WinPE/boot-config--winpeshl-autobat-regdrv.md`
- Driver registration semantics: `architecture/02-kernel-driver-architecture.md` §7 (EUDCPEPM/EUEDKEPM), per-driver artifacts in `re-workspace/artifacts/`
- MOM module system (absent here): `artifacts/PartitionRecovery/` family
- Free-vs-Pro gating (PE is FREE by construction): `artifacts/UIUX/` monetization artifacts, `architecture/07-user-flow-uiux.md`
- Language/OEM variants: `config-files` family artifacts (.qm/Mainland analysis)
