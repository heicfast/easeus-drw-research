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

## Per-target deep artifacts (`re-workspace/artifacts/`)

| Artifact | Target | Highlights |
|---|---|---|
| `DRW-exe--launcher.md` | DRW.exe | DRWLoader watchdog: crash events, 2MB shared log, supervisor restart loop, DRWReport handoff |
| `DRWService-exe--bitlocker-service.md` | DRWService.exe | BitlockerReadFVEService: \\.\Pipe\DRWBitlocker, FVEAutoUnlock registry, PowerShell manage-bde fallback |
| `DRWUI-exe--main-ui-architecture.md` | DRWUI.exe | 1,073 RTTI classes; 126 windows; scenario start pages; 28 controllers; 44 threads; §9: embedded source tree, factory dispatchers, EuRdr IOCTL protocol |
| `SearchDLL/searchdll-family--architecture.md` | 9 engines | plugin contract, interface hierarchy, RAW 190+ analysers, signature maps |
| `PartitionRecovery/eprdtdrv-sys--driver-internals.md` | eprdtdrv.sys | EPMNtDrv: device namespace \\.\EPRDTDRV\d\p, IOCTLs 0x60002400/04/08, MDL async sector IO (len<<9), pass-through proxy |
| `PartitionRecovery/mom-module-system--architecture.md` | MainModule + .mo | MOM = in-house COM (aggregation/cloning/events/functors), pending-operation partition engine shared with EPM |
| `PartitionRecovery/rawfixer-fs-repair.md` | RawFixer.dll | transactional FS repair: NTFS/FAT/exFAT fixers, FixFromDBR, FixByScanSector, Undo |
| `FileRepair/repair-architecture.md` | Fixo chain + EUVideoRepair | full repair algorithms incl. decompiled trace-point reconstruction |
| `EuShare/eumrx-nas-architecture.md` | EuMrx.sys + libssh2 + NasConfig | static-RDBSS redirector, EuRdrDN protocol, SSH agent push, Synology model DB, loopback bridge |
| `Cloud/cloud-recovery-architecture.md` | cloud_session + EuICloudRecovery + firebase | OAuth2 loopback (Dropbox/GDrive/OneDrive), esicloud full iCloud client (idmsa/setup.ws/PCS), remote config |
| `SaveScan/*` | .rsf format | magic, metadata, CryptoAPI encryption, OpenSSL XTS-AES BitLocker path |
| `config-files/config-data-reference.md` | all data files | raw_signs.json (139 ext), EUUserData, Dict (brute-force dictionary), FileFilter.xml (8 cats/1489 ext), FilterFolder.ini, dlconfig.xml, NasModel.xml, ssh_config.ini |

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

- [x] All 7 kernel drivers decompiled + documented
- [x] All 9 FS engines decompiled + documented
- [x] All 30 .mo MOM modules decompiled
- [x] All 19 PartitionRecovery DLLs decompiled (RawFixer deep-dived)
- [x] DRWUI (2.38M lines) + core EXEs + repair chain (17) + misc (22)
- [x] Config/data formats decoded
- [x] Cloud + NAS + BitLocker chains documented
- [ ] Per-binary artifact .md for every remaining decompiled target (in progress — see worklog)
- [ ] wave2 CI batch (EuSendMessage, DiskHealth, VideoFileRepairer, MediaGraph, libssh2)

## Worklog

See `worklog.md` (root) for chronological progress stages 0→4.
