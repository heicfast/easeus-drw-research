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
| 05u | `05-uiux-architecture.md` | **UI/UX master doc** (23 UIUX artifacts synthesized): view-manager decode, design system (118-slot palette, 1240×840), 195 telemetry events, per-phase deep dives, preview architecture (41 classes), funnel/monetization map — **+ independent verification addendum (§10)** + **wave-4 (§11): moc-surface/Sink architecture (CLeftTreeView 47-slot, CUISink hub, Freeze protocol), QSS full property census, 980-class RTTI census w/ Qt inheritance spine + CRightContent 82-slot hub, EUinApp role correction (orphaned IE-emulation bootstrapper), **dynamic ground-truth INGESTED (24): loader-path DRWUI renders maximized under Wine, direct-path verified negative, NAS firewall prep i18n-aware** |

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
| **`FileRepair/image-repair--format-grammar.md`** | EUImgRepairFile.exe | **per-format grammar deep-dive**: 37-file source tree, 29 C<Format>Info classes (20 RAW), JPEG skeleton FFD8/FF01/FFD9 + marker state machine, JXL libjxl event walk, AVIF ffmpeg shell-out, LibRaw 560-export static link, window-IPC + registry invocation chain, log-census pipeline evidence; **+ §12 (this session): PNG/WebP/HEIC state machines — IImageInfo 5-slot contract, corruption-tolerant parallel chunk scans, BasisRepair/SampleRepair two-tier pipelines, HEIC ipco/ipma dispatch, WebPDecode-as-validation** |
| `EuShare/eumrx-nas-architecture.md` | EuMrx.sys + libssh2 + NasConfig | static-RDBSS redirector, EuRdrDN protocol, SSH agent push, Synology model DB, loopback bridge |
| `Cloud/cloud-recovery-architecture.md` | cloud_session + EuICloudRecovery + firebase | OAuth2 loopback (Dropbox/GDrive/OneDrive), esicloud full iCloud client (idmsa/setup.ws/PCS), remote config |
| **`SaveScan/rsf-format--scan-session.md`** | .rsf format | **FULLY REVERSED + record-4 tree grammar byte-exact-validated** (all 3 samples to EOF, 1.99M nodes): CFileNodeRS::Save/RestoreFileTree BFS algorithm, CFileNode(0x93)/CFileSystemNode(0x290) node classes + 34-byte base grammar, IFileProperties content family (10 per-FS classes), NTFS-style datarun persistence; parsers `rsf_parser.py` + `rsf_record4_grammar.py` |
| `config-files/config-data-reference.md` | all data files | raw_signs.json (139 ext), EUUserData, Dict (brute-force dictionary), FileFilter.xml (8 cats/1489 ext), FilterFolder.ini, dlconfig.xml, NasModel.xml, ssh_config.ini |
| **`config-files/drwcfg-bin--aes-config-cache.md`** | DRWCfg.bin | AES-256-CBC config cache with **hardcoded key** XZJE151628AED2A6ABF7158809CF4F3C / IV XZJ2030405060708 (AES_CBC256 class) + DRWUI crypto inventory |
| `DRWReport-exe--crash-reporter.md` | DRWReport.exe | XCrashReport provenance, minidump + telemetry, Aliyun upload, supervisor chain |
| **`WinPE/boot-config--winpeshl-autobat-regdrv.md`** | BUILDPE boot configs | winpeshl launch list, auto.bat 6-phase shell build (OEM Mainland branch, GetDriver USB tools, Chrome-as-viewer, PENetwork), regdrv.reg driver start-types, Unattend display floor — byte-exact decoded |
| **`WinPE/pe-payload-census--buildpe-easeus-x64.md`** | BUILDPE/EaseUS-x64 | 180-file census + PE-vs-live diff: **0 .mo / 0 .rsf in PE** (no partition search/NAS/licensing in bootable edition), PE-only D3D shims + EuSendMessage + qoffscreen, UCRT self-carriage (49 forwarders), version.ini build-pair state |
| **`SearchDLL/rawsearchdll--analyser-registry-census.md`** | RAWSearchDLL | **complete registry map**: 182 RTTI types, 106 analyser classes, 70 magic keys byte-decoded (MXF/ASF/SQLite/DWG/CPT7-9/EBML...), developer namespaces (BruteForce/RawSpeed/xjq/Brance = author attribution), two-generation fallback chains, List/Map/Multimap projections |
| **`SearchDLL/rawsearchdll--zip-analyser-carving.md`** | FileZIPAnalyser | index-first carving: CD-walk with per-entry inventory, sector-aligned zero-padding extension (5.24MB cap), PK0304/0102/0506 anchors, 0xd indexless marker |
| **`FileRepair/image-repair--state-machines.md`** | EUImgRepairFile | CPngInfo::BasisRepair staged pipeline (20/30/50/80% Scan*→Hand*), APNG sample path, **Work/Info dual-class architecture**, 31-format census, TIFF 4-tier repair, CScanJepgInfo shared JPEG-salvage backbone |
| **`FileRepair/image-repair--gif-bmp-svg-tiff-walks.md`** | EUImgRepairFile | **classic-format walks (closes §7 item 2)**: BMP DIB taxonomy 12/40/108/124 + RGBQUAD palette arithmetic, GIF extent RB-tree re-chain (3 trees, 64-bit pair keys), SVG envelope-injection + render-validate + atomic CopyFileW, TIFF endian arbitration by valid-IFD count + IFD0 tail backward scan + Canon HEAP/CIFF |
| `SaveScan/rsf-record4--tree-node-grammar.md` | record-4 companion | group framing + type-code factory (3/4/5/6/7/8/9/0xC) + progress 40-65% mapping — companion to the validated §5.4 grammar |
| **`UIUX/dynamic-ground-truth--splash-captured.md`** | DRWUI runtime | **SPLASH SCREEN screenshot-captured + VLM-decoded**: "Reading the disk information, please wait…" = CStartWindow (StartWindowIconLabel/TitelLabel/bg_downloader.png static-correlated 1:1); 640x480 = splash not modal; full boot flow verified end-to-end |
| `UIUX/dynamic-ground-truth--window-census-verification.md` | DRWUI runtime | loader-flow window timeline (t=8→90s), direct-launch zero-window ×3 environments (**DRWUI requires DRWLoader**), netsh Network Discovery dual-locale, static-claim verification ledger |
| `UIUX/dynamic-ground-truth--wine-loader-run.md` | DRW.exe runtime | process tree DRW→DRWUI→AliyunWrapExe, services.exe SCM interaction, WMI/mountmgr/fsutil startup sequence, 6 DPI windows |
| **`UIUX/dynamic-ground-truth--landing-page-windows.md`** | DRW.exe on real Windows | **FULL LANDING PAGE captured + VLM-decoded**: complete sidebar (Data Recovery/Advanced Features/File Backup→ChronoSnap), device cards w/ live capacity, Specify-a-location trio, Assistant popup, 'Search for Lost Data' — **100% of read text verbatim-verified in binary**; dynamic matrix COMPLETE (4 cells) |
| **`UIUX/25-connect-wiring-graph.md`** | DRWUI.exe | **the complete connect() wiring graph — 722/722 sites resolved** (661 SIGNAL→SLOT + 61 relays, 444 unique pairs): MOM-bus star topology (15 subscribers + dispatch bridge), scan/recovery/repair flow edges, 38 timeout-consumer polling census, finished→deleteLater convention; raw evidence JSON |
| **`MOM-modules/mom-modules--ui-bridge-and-dependency-matrix.md`** | MOM + DRWUI | **engine→UI bridge fully decoded**: CMessageProxy singleton (MI QObject+INotifyObserver), CMessageSend envelope w/ thread-affinity dual connect (queued marshaling); cross-module dependency matrix (37 binaries, Log.mo = 15+ importers), two coupling styles (26 factory plugins vs 5 link-time libs, NTFSLib 310 exports) |
| **`FileRepair/deepening-batch2--pdf-office-repair.md`** | EuPDFRepairFile + EuOfficeRepairFile | PDF xref/trailer **synthesis byte-exact** ("%010lld 00000 n", conditional /Encrypt /ID preservation) + **corrected Office protobuf claim = Apple iWork IWA engine** (iwk:: ZipFile + TSP/TST/TN archives = Numbers/Pages/Key) + OPC manifest synthesis + RepairHwpxFile contract |
| **`MOM-modules/*.md` (30)** | all .mo modules | per-module artifacts: RTTI + vftable census + source paths + function census (NTFSLib mftwith0x20.cpp, LdmManager 18 paths, NTFSUtil 2871 fns…) — generated + hand-curated roles |
| **`SearchDLL/rawsearchdll--family-*.md` (6)** | analyser families | BruteForce 23 / RawSpeed 15 / xjq 5 / Brance 12 / File-gen 47 / special 29 classes with vftable weights |
| **`runtime-families/*.md` (10)** | 218 binaries | consumer-mapped runtime roles (Qt5 x2, OpenSSL trio, UCRT, D3D shims, VC generations, codecs, ImageMagick, network, shims) |
| `Languages/language-packs--family-census.md` | 37 .qm | Mainland OEM set-analysis (Foxit=NAS+BitLocker-forward, 4 independent sub-brand catalogs), selection architecture |
| **`config-files/filtering-priority--config-layer.md`** | 5 config files | the filtering pipeline decoded: noise layer (10-locale New-Folder + BitLocker artifacts), type ordering, family groupings, per-format carve switches (= analyser registry), 25-locale shell taglines |
| **`FileRepair/archive-repair--7z-engine.md`** | EUArchiveRepair | CArchive7zInfo + C7zNextHeaderInfo footer repair, bit7z/7z.dll pinned SDK, password-aware + Dict |
| `DiskHealth/diskhealth--smart-companion.md` | DiskHealth.exe | CrystalDiskInfo lineage: CAtaSmart multi-transport (SAT/CSMI/NVMe-Realtek), USB bridge tables, DiskSmart |
| **`DRWUI-exe--thread-architecture.md`** | DRWUI.exe | 45 named-thread census by subsystem + _ThreadImg loader handshake + pool; UI-thread purity analysis |
| **`PartitionRecovery/epmntdrv-trio--byte-diff-verification.md`** | 3 drivers | SAME family, THREE compilations (exact diff numbers) — refines prior claim |
| `PartitionRecovery/getdriverinfo--tb-module-decode.md` | GetDriverInfo.dll | TB-MOM module (naming trap: drive-LETTER topology, not drivers) |
| `PartitionRecovery/burn--imapi2-disc-writer.md` | Burn.dll | IMAPI2 writer + REAL-TIME streaming burn mode (multi-session append pattern) |
| `FileRepair/x3f-repair--section-checkers-walk.md` | CX3fWork | X3F section grammar map (SECi/SECe/SECm/SECp/SECc), deepest-checker rationale |
| `Installer/setupue-infoforsetup--bootstrap-pair.md` | SetupUE + InfoForSetup | 16-OS gate, Inno lineage (unins000 trio), /SendInfo install telemetry, DRW_Installer window |
| `FileRepair/hwp-pathchecker--module-decode.md` | EUHwpFilePathCheckerModule | IsAccessiblePath security gate (window-station checks), Korean viewer chain |
| **`UIUX/dynamic-ground-truth--scan-phase-captured.md`** | scan-phase runtime | **CLICK-INJECTED SCAN CAPTURE**: 'Advanced Scanning 9%' + 1.11M files (Quick pass done), **3-branch tree live-verified = .rsf record-4 roots** (Windows(C:)/File Path Lost 4.4K/Reconstructed), browse-while-scanning, Path/Type tabs, preview panel, live Searching ticker |
| `WinPE/eusendmessage--wm-copydata-messenger.md` | EuSendMessage.exe | WM_COPYDATA messenger to 'DRW_Installer' window, cmd 999, PE-only rationale (scripted builder) |
| **`runtime-families/*.md` (10 families)** | 218 binaries | consumer-mapped runtime roles: Qt5 core + QML stacks, OpenSSL trio (3 generations), UCRT forwarders, D3D shims, VC runtime generations, media codecs, ImageMagick delegates, network libs (zmq/ssh2/curl), system shims |
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
| `ci-multitool/` | capa+FLOSS+rabin2+pefile per batch: drivers, searchdll, core, **repair (10 bins: EUVideoRepair, EUArchiveRepair, EUAdobeRepair, EUImageEnhance, EuOfficeRepairWin32, EuOfficeTools, EuRepairHost, EURawImg, EUImgRepair, EUUnZip), partition (13 bins: MainModule, CloneModule, RawFixer, BitLockerLib, Boot, BootDriver, RecoveryModule, ToolsModule, UILogic, PartitionRecovery, Win32Bcd, libvmdk)** — all waves COMPLETE and ingested |
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
- [x] EUEDKEPM dispatch fully decoded (see artifacts/PartitionRecovery/eudcpepm-euedkepm--hook-drivers.md §EUEDKEPM; residual checklist item from doc-2, resolved by 10d9bfd)
- [x] Full .rsf record-1/2/3 field schemas DECODED from `CSaveAndRestoreResult::SaveResult` writer (§5 of rsf artifact): record IDs = .rdata GUID constants; record 1 = counts+flags (12B); record 2 = 0x7F sig + name[100] + devtype + SYSTEMTIME + 2 stat qwords + flags (147B exact arithmetic; timestamp correction: 2026-10-14 23:13:21.774); record 3 = [count][1781B partition struct][5400B volume-device blob = disk identity + 512B boot-sector snapshot] (7,185B exact); filename sanitizer `/ * : ? " < > |`→`_`

- [x] IFileProperties per-FS walkthroughs parts 1-3 (23-slot vtable interface, census-backed NTFS/FAT semantics, Btrfs dual-runlist, ZFS ZfsDataRunlist; 2 corrections to rsf 5.4.5)
- [x] Kernel-driver internals v2 wave: epmntdrv completion-engine + identity IOCTLs; trio runtime device-naming + PID-token handshake (byte-exact both sides); EUDCPEPM DrvHK hook framework + urgent COW cache; EuMrx RDBSS w7rtm linkage + MINIRDR_DISPATCH decoded
- [x] Engine ALGORITHMS v2 wave (all 9): NTFS deleted-viability scoring, FAT table polymorphism + cycle-guard, exFAT InUse-mask triples, EXT4/HFS+ gates, ReFS refs:: MSB, Btrfs generation-select, ZFS txg uberblock walk
- [x] MOM module wave2: LDM VMDB/TOCBLOCK parser, RegLib hive read+WRITE engine, CTbFile
- [x] RAWSearchDLL dual registry (u16 magic-key table + analyser IDs)
- [x] Deepening batch 3 (8 stubs) + per-engine function-map census

## Worklog

See `worklog.md` (root) for chronological progress stages 0→5.
