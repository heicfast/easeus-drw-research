# 00 — Master Index & Progress

> The one place to see everything this research has produced and where it lives.

## Top-level architecture documents

| # | Document | Coverage |
|---|---|---|
| 01 | `01-build-tree-intelligence.md` | PDB paths → vendor internal build tree (DRWIntelligentScan monorepo, PartitionRecovery/EPM, Fixo suite, EuPEMaker, es_icloud, DiskHealth, WinDiskAccessDriver); build-machine forensics (e:/i:/d:/h: drives, Azure DevOps agent) |
| 02 | `02-kernel-driver-architecture.md` | All 7 drivers: EPMNtDrv family (eprdtdrv/ebrntdrv/epmdkdrv), hook drivers (EUDCPEPM/EUEDKEPM), EuMrx NAS redirector, eprdtdrv_win7older |
| 03 | `03-winpe-boot-environment.md` | BUILDPE boot chain, winpeshl.ini, regdrv.reg device-stack filters, WAIK ISO carving via dlconfig.xml |
| 04 | `04-recovery-workflow.md` | **Master step-by-step workflow**: launch → home → scenario → scan setup (factories, FS codes) → scan (structured + carving) → organize (tree/classify/check/filter) → preview → recovery (CRecoveryMgr chain, destination validation) → session persistence → repair → failure paths; full data-flow diagram + verification ledger |
| 05 | `05-scan-engine-architecture.md` | Engine library layout, plugin contract (EUCreate*), controller=tree-builder multiple inheritance, CPartitionVirtualVolumeDevice (lost partitions), per-engine evidence table, RAW carving deep-dive, merge/classify/filter pipeline, volume-IO layers |
| 06 | `06-repair-chain.md` | Two repair worlds (DRW video vs Fixo), entry points, video algorithm, per-format engines (21 RAW formats, HWPX+OpenSSL, 7zNextHeader, OpenCV enhance), process topology |
| 07 | `07-user-flow-uiux.md` | Screen-by-screen UI walkthrough with byte-exact shipped copy, scan modes, results screen, recovery dialogs, repair wizards, monetization, polish layer |
| 05u | `05-uiux-architecture.md` | **UI/UX master doc** (19 UIUX artifacts synthesized): view-manager decode, design system (118-slot palette, 1240×840), 195 telemetry events, per-phase deep dives, preview architecture (41 classes), funnel/monetization map — **+ independent verification addendum (§10, doc-agent)** |

## Per-target deep artifacts (`re-workspace/artifacts/`)

| Artifact | Target | Highlights |
|---|---|---|
| `DRW-exe--launcher.md` | DRW.exe | DRWLoader watchdog: crash events, 2MB shared log, supervisor restart loop, DRWReport handoff — deep version w/ exact GUIDs, telemetry JSON format, line-cited |
| `DRWService-exe--bitlocker-service.md` | DRWService.exe | "Read FVE Server" (AUTO_START): FVEAutoUnlock registry enum, pipe wire format (0x138 stride: 50-char GUID + 256B key, 100-cap), service=pipe CLIENT |
| `DRWUI-exe--main-ui-architecture.md` | DRWUI.exe | 1,073 RTTI classes; 126 windows; scenario start pages; 28 controllers; 44 threads; §9: embedded source tree, factory dispatchers, EuRdr IOCTL protocol, VAPreviewListener ports 20171/20172 + zmq, crypto inventory |
| `SearchDLL/searchdll-family--architecture.md` | 9 engines | plugin contract, interface hierarchy, RAW 190+ analysers, signature maps |
| **`SearchDLL/ntfs-engine--deep-dive.md`** | NTFSSearchDLL | **algorithm-level**: MFT bootstrap + $ATTRIBUTE_LIST fork, record-walk filters ($-skip, deleted bit-4), bitmap extent scoring, runlist nibble math, quick-vs-complete, fastsearch default — line-cited |
| **`SearchDLL/rawsearch-carving--deep-dive.md`** | RAWSearchDLL | **carving internals**: signature RB-tree registry + verified fourccs, ForCellTest harness, raw_signs.json istream tokenizer, PDF/JPEG grammar sites |
| `PartitionRecovery/eprdtdrv-sys--driver-internals.md` | eprdtdrv.sys | EPMNtDrv: device namespace \\.\EPRDTDRV\d\p, IOCTLs 0x60002400/04/08, MDL async sector IO (len<<9), pass-through proxy |
| `PartitionRecovery/mom-module-system--architecture.md` | MainModule + .mo | MOM = in-house COM (aggregation/cloning/events/functors), **loading contract decoded** (name→.mo→LoadLibraryA→GetModule/CreateObject exports), pending-operation partition engine shared with EPM |
| `PartitionRecovery/mo-module-map.md` | all 30 .mo | per-module RTTI-verified roles (LDM, registry HIVE, CTbFile, ReFS MSB, BCD/EFI, FATX…) |
| `PartitionRecovery/pending-operation-engine.md` | MainModule ops | Controller→Operation→PendingOperation triads, 40+ ops, ACL-preserving copy, transactional composition |
| `PartitionRecovery/rawfixer-fs-repair.md` | RawFixer.dll | transactional FS repair: NTFS/FAT/exFAT fixers, complete 31-method inventory (exFAT ChecksumDBR/TryFixFromSectorsPerCluster), FixFromDBR, FixByScanSector, Undo |
| `FileRepair/repair-architecture.md` | Fixo chain + EUVideoRepair | full repair algorithms incl. decompiled trace-point reconstruction |
| **`FileRepair/image-repair--format-grammar.md`** | EUImgRepairFile.exe | **per-format grammar deep-dive**: 37-file source tree, 29 C<Format>Info classes (20 RAW), JPEG skeleton FFD8/FF01/FFD9 + marker state machine, JXL libjxl event walk, AVIF ffmpeg shell-out, LibRaw 560-export static link, window-IPC + registry invocation chain, log-census pipeline evidence |
| `EuShare/eumrx-nas-architecture.md` | EuMrx.sys + libssh2 + NasConfig | static-RDBSS redirector, EuRdrDN protocol, SSH agent push, Synology model DB, loopback bridge |
| `Cloud/cloud-recovery-architecture.md` | cloud_session + EuICloudRecovery + firebase | OAuth2 loopback (Dropbox/GDrive/OneDrive), esicloud full iCloud client (idmsa/setup.ws/PCS), remote config |
| **`SaveScan/rsf-format--scan-session.md`** | .rsf format | **FULLY REVERSED** (corrections register): record chains + zlib-chunked payload (NOT CryptoAPI-encrypted), CRSDataEx/CZlibCompressor classes, working parser `scripts/rsf_parser.py` |
| `config-files/config-data-reference.md` | all data files | raw_signs.json (139 ext), EUUserData, Dict (brute-force dictionary), FileFilter.xml (8 cats/1489 ext), FilterFolder.ini, dlconfig.xml, NasModel.xml, ssh_config.ini |
| **`config-files/drwcfg-bin--aes-config-cache.md`** | DRWCfg.bin | AES-256-CBC config cache with **hardcoded key** XZJE151628AED2A6ABF7158809CF4F3C / IV XZJ2030405060708 (AES_CBC256 class) + DRWUI crypto inventory |
| `DRWReport-exe--crash-reporter.md` | DRWReport.exe | XCrashReport provenance, minidump + telemetry, Aliyun upload, supervisor chain |
| `Licensing/licensing-activation-chain.md` | euactiveonline etc. | activation.easeus.com[.cn], free-tier gating events |
| `PartitionRecovery/bitlockerlib--bitlocker-implementation.md` | BitLockerLib.dll | protectors, BEK, PSUnlock + manage-bde fallback, EOW metadata, AES-XTS, unlock flow |
| `PartitionRecovery/eudcpepm-euedkepm--hook-drivers.md` | hook drivers | device-stack hook pair |
| `per-binary/` (110+ artifacts) | every in-tree binary | systematic identity/census/exports/RTTI/role/crosslinks (EUDCPEPM carries decoded dispatch table) |

## Raw RE evidence (`re-workspace/reversed/`)

| Directory | Contents |
|---|---|
| `ghidra-drwui/` | DRWUI.exe: 119,182 functions / 2.38M lines C |
| `ghidra-core/` | DRW, DRWService, DRWReport (19K fns), InfoForSetup, SetupUE |
| `ghidra-searchdll/` | 9 FS engines: 349K lines |
| `ghidra-drivers/` | 7 kernel drivers: 42K lines |
| `ghidra-mo/` | 30 PartitionRecovery .mo modules: 689K lines |
| `ghidra-partition/` | 19 PartitionRecovery DLLs: 1.17M lines |
| `ghidra-repair/` | 17 repair binaries: 4.02M lines |
| `ghidra-misc/` | 22 binaries (cloud, firebase, aliyun, viewers, unin…): 2.82M lines |
| `ghidra-local/` | local Ghidra runs (DRW.exe, DRWService.exe, InfoForSetup) |
| `ci-multitool/` | capa+FLOSS+rabin2+RetDec per batch (drivers, searchdll, core…) |
| `<binary>/` | per-binary rabin2/strings/pefile round-1 outputs (89 binaries) |

## Inventories & tooling

- `re-workspace/inventory.{json,csv}` — 565 PE binaries catalogued (arch/imports/exports/dotnet…)
- `re-workspace/pdb_paths.json` — PDB paths from 507 binaries
- `re-workspace/rtti_classes.json` — 6,903 class names from 89 binaries
- `re-workspace/scripts` (repo root `scripts/`) — inventory, RTTI extractor, QM parser, RSF analyzer, Ghidra local runner, artifact downloader
- `.github/workflows/` — `ghidra-decompile.yml` (batch matrix incl. wave2), `multitool-static.yml`

## Coverage status

- [x] All 7 kernel drivers decompiled + documented (EUDCPEPM IRP-hook semantics RESOLVED — all-28-slots generic hook + VolSnap attach)
- [x] All 9 FS engines decompiled + documented at ALGORITHM level (deep-dive per engine in artifacts/SearchDLL/)
- [x] All 30 .mo MOM modules decompiled + mapped
- [x] All 19 PartitionRecovery DLLs decompiled (RawFixer + BitLockerLib + pending-ops deep-dived)
- [x] DRWUI (2.38M lines) + core EXEs + repair chain (17) + misc (22)
- [x] Config/data formats decoded (.rsf format fully reversed with working parser)
- [x] Cloud + NAS + BitLocker chains documented
- [x] Per-binary artifacts generated for every in-tree binary (110+)
- [x] wave2 CI batch (EuSendMessage, DiskHealth, VideoFileRepairer, MediaGraph, libssh2) ingested
- [x] EuICloudRecovery SRP handshake instruction-level verified (authenticate_with_srp + libsrp + idmsa.apple.com/appleauth/auth)
- [ ] EUEDKEPM dispatch enumeration (35 fns)
- [x] Full .rsf record-1/2/3 field schemas DECODED from `CSaveAndRestoreResult::SaveResult` writer (§5 of rsf artifact): record IDs = .rdata GUID constants; record 1 = counts+flags (12B); record 2 = 0x7F sig + name[100] + devtype + SYSTEMTIME + 2 stat qwords + flags (147B exact arithmetic; timestamp correction: 2026-10-14 23:13:21.774); record 3 = [count][1781B partition struct][5400B volume-device blob = disk identity + 512B boot-sector snapshot] (7,185B exact); filename sanitizer `/ * : ? " < > |`→`_`

## Worklog

See `worklog.md` (root) for chronological progress stages 0→5.
