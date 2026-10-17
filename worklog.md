# EaseUS Data Recovery Wizard — Reverse Engineering Worklog

## Session Info
- Repo: heictojpgpics/easeus-drw-research (private)
- Structure: `og-codebase/` (original) | `re-workspace/` (raw + reversed + artifacts) | `architecture/` (top-level combined knowledge)
- Environment: 2 CPU, 4GB RAM, ~10GB disk, no sudo

## Progress Log

### Stage 0 — Acquisition & Setup [DONE]
- Downloaded Part1 (175MB) + Part2 (164MB), verified zip integrity (no errors)
- Merged into og-codebase/ — 168 top-level items, 674MB, ~1650 files
- Key findings at first survey:
  - Main apps: DRW.exe (launcher), DRWUI.exe (30MB main UI, Qt5), DRWService.exe, DRWReport.exe
  - FS scan engines: NTFSSearchDLL, FATSearchDLL, exFATSearchDLL, EXT4SearchDLL, HFSPlusSearchDLL, RAWSearchDLL, ReFSSearchDLL, BtrfsSearchDLL, ZfsSearchDLL
  - PartitionRecovery/ — .mo module binaries (FileSystemAnalysers: NTFS/FAT/ExFat/Ext/Refs), MainModule.dll, RecoveryModule.dll, ToolsModule.dll, UILogic.dll, PartitionRecovery.dll, RawFixer.dll, Boot.dll, BootDriver.dll, BitLockerLib.dll, CloneModule.dll, Win32Bcd.dll, libvmdk.dll
  - KERNEL DRIVERS: ebrntdrv.sys, epmdkdrv.sys (system32), EUDCPEPM.sys, EUEDKEPM.sys (drivers/), eprdtdrv.sys + eprdtdrv_win7older.sys (PartitionRecovery/)
  - Repair tools: EUFileRepair/ (ImageMagick-based), EUImgRepair, EUVideoRepair.dll, EUArchiveRepair, EUAdobeRepair, EuOfficeRepairWin32, EuPDFRepairFile, EURawImg
  - Viewers: PDFViewer.exe, EUOfficeViewer.exe, EUHwpViewer.exe, VideoViewer/
  - BUILDPE/ = WinPE bootable environment (EaseUS-x64 + x64/Windows with drivers)
  - External/ignore: ffmpeg (VideoViewer), pdfium.dll, Qt5*, VC++ runtimes, api-ms-win-* API sets, ImageMagick CORE_RL_*
- Created GitHub repo, structured local repo (this one)
- Next: tool install, binary classification, GitHub Actions workflows for heavy analysis

### Stage 1 — Toolchain + CI + First Intelligence [DONE]
- Local toolchain: r2, Ghidra 11.3.2 (+JDK21), RetDec 5.0, ilspycmd, capa (rules+sigs), FLOSS, pefile/dnfile/vivisect, diec (partial)
- Ghidra CI workflow FIXED (script compile errors: decompileCompleted/isInitialized) — verified locally: NTFSSearchDLL = 1897 funcs decompiled (1.6MB C)
- CI running: ghidra searchdll+drivers (re-triggered), multitool searchdll/core/partition/repair
- multitool drivers batch DONE → artifacts in re-workspace/reversed/ci-multitool/
- KEY FINDINGS:
  - DRW.exe = DRWLoader (crash-monitor launcher, named events DRW_Crash_{GUID}, launches DRWUI + DRWReport)
  - DRWService.exe = "BitlockerReadFVEService" — pipe \\.\Pipe\DRWBitlocker, reads FVEAutoUnlock registry
  - Drivers: eprdtdrv/ebrntdrv/epmdkdrv = SAME "EPMNtDrv" (device \Device\EPMNTDRV, user path \\.\EPRDTDRV\{d}\{p})
  - EUDCPEPM/EUEDKEPM = device-stack HOOK drivers (DrvHookNextAddDevice) for volume lock/disk copy
  - EuMrx.sys = RDBSS network redirector mini-driver (\Device\EuRdr) for NAS scan
  - raw_signs.json = 139 ext signatures (header/tail hex+confidence, min/max size)
  - EUUserData = MIME/magic DB; Dict = password brute-force dictionary
  - FileFilter.xml = category tree; FilterFolder.ini = junk filtering
  - dlconfig.xml = WAIK ISO byte-range carver for WinPE media building
  - PartitionRecovery .mo files = PE DLL plugins; MainModule = MOM module system + full partition op engine (shared w/ EPM)
  - DRWUI classes: IScanMgr/CScanMgr, CDoScan{Partition,LostPartition,CloudDevice,RemoteDevice}, tree builders (CDirectoryTreeBuilder, IRawDirectoryTreeBuilder, CBtrfsQuickTreeBuilder), classify controllers, preview controllers
  - NTFSSearchDLL RTTI: CNTFSSearchController (0x940 bytes), CNTFSQuickSearch, CNTFSBuildVolumeBitmap, MFT record attribute classes, IFileSystemSearchController interface family
- Artifacts written: architecture/01-build-tree-intelligence.md, architecture/02-kernel-driver-architecture.md

### Stage 2 — Deep RE rounds [IN PROGRESS]
- CI Ghidra searchdll batch v2 SUCCESS: all 9 engines decompiled (349K lines) -> re-workspace/reversed/ghidra-searchdll/
- CI Ghidra drivers batch v2 SUCCESS: all 7 drivers decompiled -> re-workspace/reversed/ghidra-drivers/
- EPMNtDrv internals artifact DONE (IOCTLs 0x60002400/04/08, sector<<9 contract, path parsing, pool tag esdr)
- SearchDLL family artifact DONE (plugin contract, interface hierarchy, RAW engine 190+ analysers, signature maps 0xFFD8FFE0...)
- WinPE architecture artifact DONE (winpeshl.ini flow, regdrv.reg decoded: EUDCPEPM=epmdiskcopydrv disk-class UpperFilter, WAIK ISO carving via dlconfig.xml)
- FileFilter.xml parsed: 8 categories, 1489 extensions
- English.qm parsed: 1537 UI strings
- Running: 5 Ghidra CI batches (core/partition/repair/mo-modules/misc) + 4 multitool CI batches + local Ghidra (DRW.exe, DRWService.exe, InfoForSetup.exe)
- Artifacts so far: architecture/01-03, artifacts/PartitionRecovery/eprdtdrv-sys, artifacts/SearchDLL/searchdll-family

### Stage 3 — Mass decompilation + engine analysis [IN PROGRESS]
- Ghidra CI batches completed: core (659K lines incl DRWReport 612K!), mo-modules (689K lines, 31/31 modules), drivers (42K), searchdll (349K)
- DRWUI batch triggered (30MB, expect hours)
- multitool batches: searchdll/core/partition/repair still running
- Artifacts written:
  - artifacts/DRW-exe--launcher.md (full supervisor loop decoded)
  - artifacts/DRWService-exe--bitlocker-service.md
  - artifacts/FileRepair/repair-architecture.md (Fixo chain: video moov regroup, PDF xref, HWPX, OOXML, 7z)
  - artifacts/PartitionRecovery/mom-module-system--architecture.md (MOM = in-house COM)
  - artifacts/SearchDLL/searchdll-family--architecture.md
  - artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md
  - architecture/01-build-tree, 02-kernel-drivers, 03-winpe
- TOTAL DECOMPILED SO FAR: ~1.74M lines of C across 50 binaries
- Key decoded: DRWLoader watchdog loop, EPMNtDrv IOCTLs, MOM plugin system, RAWSearchDLL 190+ analysers, WinPE boot chain, repair algorithms

### Stage 4 — Session resume + mass decompilation mining [IN PROGRESS, resumed 08:25 UTC]
- Session recovered from context summary; token verified; CI state checked
- Fixed artifact downloader (Azure redirect auth-strip) → scripts/download_artifacts.py
- multitool searchdll batch ingested (capa digest: all engines IOCTL driver access, Btrfs=ZLIB+RC4, exFAT=XOR+FNV)
- DRWUI.exe FULLY DECOMPILED via CI: 119,182 functions / 2.38M lines (56MB)
- misc batch ingested: 2.82M lines (AliyunWrap, EUinApp, EuDownloader, viewers, unins000, send_dmp_with_aliyun)
- repair batch ingested: 4.02M lines / 17 binaries (EuOfficeRepairFile 42K fns, EUImgRepairFile 20K fns, EUImageEnhance=OpenCV2.4 static)
- TOTAL DECOMPILED NOW: ~10M+ lines across ~90 binaries
- Artifacts written this session:
  - artifacts/DRWUI-exe--main-ui-architecture.md (+§9 decompiled confirmations: 41 embedded source paths, factory dispatchers, EuRdr IOCTL protocol 0x140320-0x140644)
  - artifacts/EuShare/eumrx-nas-architecture.md (EuMrx=static RDBSS self-contained, \Device\EuRdr, 8 session slots, 127.0.0.1 loopback rewrite, SSH agent push /tmp/EaseUS, Synology model DB, libssh2 1.11.0)
  - artifacts/FileRepair/repair-architecture.md (+decompiled update: video repair algorithm from 125 trace points, Fixo source tree, HWPX OpenSSL, 7zNextHeader)
  - artifacts/Cloud/cloud-recovery-architecture.md (OAuth2 loopback, esicloud full client, PCS/ADP, firebase config)
- KEY INTELLIGENCE:
  - DRWUI embeds DRWIntelligentScan statically (hfspluslib x8, eushare/mrxioctl, filerecover.cpp, genericrecoverycontroller.cpp)
  - EuPEMaker = WinPE builder inside DRWUI (20 source files)
  - Internal codename "FoxitRestore" (registry SOFTWARE\Foxit Software\FoxitRestore + agent version URL)
  - FS-type codes: 0-2=FAT, 3=NTFS, 4-5=EXT2, 7=exFAT, 8=HFS, 9=EXT4, 10=ReFS, 13=ZFS
  - Advanced scan = all full searchers + RAWSearcher (gated by settings+0x60) w/ filename callback
  - Fixo builds from D:\Fixo\01_Project; video repair from e:\drw monorepo; EuOfficeRepairWin32 from Azure DevOps agent
- CI: 3 multitool batches (core/partition/repair) still running at last check
- NEXT: filerecover.cpp deep-dive, tree/classify/filter internals, top-level architecture docs 04-06, second CI wave for missed binaries

---
Task ID: uiux-1
Agent: UI/UX Research Agent (session 2)
Task: UI/UX-focused deep RE: full userflow, pages, sizing, styling, UI-to-core wiring

Work Log:
- Recovered context from repo (fresh session); synced with main (wave2 + per-binary artifacts ingested by parallel agent)
- Reversed Qt RCC v3 binary format from first principles + verified against Qt 5.15 rcc.cpp/qresource.cpp source
- Wrote scripts/rcc_extract.py (header 24B, 22B nodes, names=len+hash+UTF16BE, blobs=size+content)
- EXTRACTED ALL UI RESOURCES: drw_light.rcc = 3722 files (Home 435, Preview 340, Filter 221, LeftTree 199, ScanProgress 188, Evaluate 162, Titlebar 145, PopWnd 254, FileTypes 105 SVG, DriveTypes 60, AiAssistant 52, NAS 247, PEView 113, Repair 91...) → re-workspace/reversed/ui-resources/drw_light/
- drw_dark.rcc = 3657 files → ui-resources/drw_dark/; DiskHealth.rcc = 125 files incl. 54 QML components → ui-resources/diskhealth/
- DIN-Black.otf + DINCond-Black.otf fonts extracted; ImageResource.xml = device-type→icon map (50 drive types, tree icons, filetype SVGs at 24/48 with runtime scaling to 72/160)
- KEY FINDINGS: FileTypes buckets include special classify folders "File Path Lost", "Tags Extracted", "Unimportant"; CUR hand/zoom cursors for preview; Ad/ + gift/ + Evaluate/ = monetization UI; Introduction/ = first-run tour

Stage Summary:
- Complete visual asset inventory recovered for both themes (7,500+ files) — the definitive "what the user sees" evidence base
- Claiming ownership of: re-workspace/artifacts/UIUX/*, architecture/05-uiux-*.md, re-workspace/reversed/ui-resources/* (parallel agents: avoid these paths)
- Next: QM translation parser (context→source→text), then DRWUI decompiled-code mining for view manager/geometry/userflow

### Stage 5 — Documentation & Cross-Link Completion [DONE 09:35 UTC]
Session deliverables (this agent, alongside parallel UIUX/DOC sessions):
- CI waves completed: drwui (2.38M lines!), partition (1.17M — was un-ingested), repair (4.02M), misc (2.82M), wave2 (DiskHealth/VideoFileRepairer/MediaGraph/libssh2/EuSendMessage)
- multitool searchdll + core batches ingested; partition + repair multitool still running
- TOTAL: ~11M lines decompiled across 110 binaries, 0 misses (phantom entries explained)
- Deep artifacts added (9): DRWUI-exe--main-ui-architecture (master), EuShare/eumrx-nas-architecture, Cloud/cloud-recovery-architecture, PartitionRecovery/rawfixer-fs-repair + mo-module-map + pending-operation-engine, DRWReport-exe--crash-reporter (XCrashReport provenance), Licensing/licensing-activation-chain, SearchDLL/ntfs-engine-internals
- architecture/ docs completed: 00-INDEX, 04-recovery-workflow (master step-by-step), 05-scan-engine-architecture (controller=tree-builder MI decoded), 06-repair-chain, 07-user-flow-uiux; README.md
- 110 per-binary systematic artifacts (scripts/gen_per_binary_artifacts.py, auto-discovers batches)
- KEY DECODES this session: EuRdr IOCTL protocol (7 codes), FS-type→factory codes, EuPEMaker in DRWUI, FoxitRestore codename, EPM shared engine (40+ pending ops), LDM/RegLib/CTbFile in .mo layer, XCrashReport identity, euactiveonline + activation.easeus.com[.cn], DRWUI embeds hfspluslib statically, mrxioctl.cpp in DRWUI
- Corrections synced from parallel session: .rsf = zlib-chunked (not CryptoAPI)
- NEXT: multitool partition/repair ingestion when CI completes, deeper per-FS engine artifacts (FAT/exFAT/ext4/ReFS), EUDCPEPM hook driver deep-dive, DRWLoader DRWReport interop verification at instruction level

### Stage 5 — Documentation enhancement & verification session [IN PROGRESS, doc-agent]
- Role: verification + deepening + cross-linking of artifacts only (parallel with RE agents)
- MAJOR CORRECTIONS (verified against decompilation):
  - .rsf is NOT CryptoAPI-encrypted: format fully reversed = zlib-chunked stream
    (2-byte chunk headers bit15=compressed/(len-1), CZlibCompressor/czlibdecompressor,
    level 5, windowBits 15) inside 36-byte record chains (magic+id+chain). Working parser
    scripts/rsf_parser.py validated on all 3 shipped samples (36MB tree extracted from
    8.99MB record; 374K strings incl. real QA scan data "Local Disk (I:)" 2026-10-03).
  - DRWCfg.bin = AES-256-CBC with HARDCODED key XZJE151628AED2A6ABF7158809CF4F3C IV
    XZJ2030405060708 (class AES_CBC256, FUN_1404f4a90) — new artifact.
  - DRWService: service name "Read FVE Server", AUTO_START (not demand); pipe wire format
    decoded (message-mode, 0x138 stride: 50-char GUID + 256B key, 100-cap, count-first);
    service is pipe CLIENT, DRWUI is server.
  - VAPreviewListener IPC: TCP 127.0.0.1:20171/20172 (0x4ECB+flag) + zmq REP channel;
    ws2_32 imported by ordinal; child helper launched with port on cmdline.
  - EUDCPEPM IRP-hook semantics RESOLVED: all 28 major slots = generic hook, CREATE/PNP/
    POWER overridden, IoctlBase-relative custom IOCTLs (0x800C2B00+), VolSnap hooked.
  - LM-hash DES ("KGS!@#$%") identified in DRWUI (NAS auth), CryptoAPI crypto map complete.
- New/rewritten artifacts: rsf-format (full rewrite + corrections register),
  drwcfg-bin--aes-config-cache (new), ntfs-engine--deep-dive (new, line-cited),
  rawsearch-carving--deep-dive (new), DRWService (deep rewrite), DRW launcher (deep
  rewrite), DRWUI §8/§9.5/§9.6 updates, EUDCPEPM per-binary deep-dive addition,
  architecture/02 §7 all rows resolved.
- Method: every claim re-verified by direct read of ghidra-decompiled C with line citations;
  conflict avoidance via pull --rebase before every push.

### Stage 5 — Documentation enhancement & verification session [CLOSED for this batch]
Session deliverables (all committed & pushed, conflict-free via pull --rebase):
- 9 engine deep-dives (NTFS/RAW/FAT/exFAT/HFS+/EXT4/ReFS/Btrfs/ZFS) — every FS engine
  now documented at algorithm level with line-cited verification ledgers
- .rsf format FULLY REVERSED (corrections register; zlib-chunked, not CryptoAPI) +
  scripts/rsf_parser.py (validated on all 3 shipped samples)
- DRWCfg.bin AES-256-CBC hardcoded-key artifact (new)
- DRWService (pipe wire format + AUTO_START + "Read FVE Server") + DRW launcher
  (exact GUIDs/telemetry/restart guard) deep rewrites
- EUDCPEPM IRP-hook semantics RESOLVED (all-28-slots + VolSnap) — doc 02 §7 all rows
- VAPreviewListener IPC decoded (ports 20171/20172 + zmq REP)
- SRP-6a handshake instruction-level verified (Cloud artifact §8)
- MOM loading contract decoded; RawFixer 31-method complete inventory
- config counts byte-verified (139/46/8/1489; Dict corrected to 228 entries/2742B)
- 00-INDEX: all new artifacts indexed; coverage refreshed; stale items cleared
- Verification discipline: every enhancement re-checked against decompiled C with
  exact line/function citations; vendor typos preserved (Complate/Proerties/roged/
  rollbakc/IDirecotryTreeBuilder/Fuction/Enumming)
- Remaining open items (for next sessions): EUEDKEPM dispatch enumeration, .rsf
  record-1/3 bitfield mapping, FileRepair/repair-architecture per-engine deep-dives
  (ImageRepair per-format grammar walks), EuShare exact SSH-forward port from
  libssh2 dynamic call sites, DRWUI RTTI-class-by-class documentation depth

---
Task ID: uiux-2 (session completion)
Agent: UI/UX Research Agent (session 2)
Task: UI/UX deep-dive completion — artifacts + top-level architecture doc

Work Log:
- Mined DRWUI decompiled code with class attribution toolchain (vtable map 980 classes/8022 methods; binary ctor scan 2364; symbol ctors 1383; callgraph propagation)
- Decoded DrwMainViewManagerWizard completely: QStackedWidget with 4 pages [DrwHomePage, DrwLostDiskPage, PeripheralHomeView(default idx 2), CDetailPage], 17 moc slots, scanClickedSlot transition chain with CVersionCtrl/service/telemetry hops
- Decoded CDetailPage: 42-slot dispatcher, 30-signal contract, setScanDevice chain (orchestrator vft+0x18 = scan start)
- Extracted per-class UI text (tr callsites): home tiles (14), scan dialogs (CScanCommonPopDlg 25 strings), 5 special tree branches with coaching copy, recovery funnel strings, Free-vs-Pro matrices, VIP copy
- Analyzed styling: 118-slot themdark.ini palette (light #0560fd / dark #5094fd), window sizes 1240x840/800x600/max, font stacks, QSS layout metrics
- Wrote 13 UIUX artifacts + architecture/05-uiux-architecture.md

Stage Summary:
- COMPLETE UI/UX documentation set: visual (7,400 assets), strings (1,556x25 langs + 18,939 binary strings), classes (141 windows), userflow (view manager + scan chain), styling (palette+geometry), dialogs (51 classes + 195 telemetry events), per-phase deep dives (home/scan/results/preview/recovery/repair), UI-to-core wiring (singletons, signals, threads, state)
- All committed and pushed; scripts persisted in scripts/ for re-runs

---
Task ID: uiux-3 (verification + wave 3)
Agent: UI/UX Research Agent (session 2)
Task: ground-truth verification + remaining deep dives

Work Log:
- Decoded CDetailPage 42-slot dispatcher (view-mode stack + slot-27 rebinder + nested QEventLoop modal) → artifact 14
- Extracted NAS/Linux/BitLocker/WinPE scenario signal contracts (Connect/Scan/Support row actions, connect/enum results, pixmap streaming) → artifact 15
- Decoded DrwMainWindow shell internals (quint64 title-button IDs, accessible names, opacity effects, currentChanged sync) + AI layer ("Local AI | Secure") → artifact 16
- Mapped complete monetization funnel (stage→surface→copy→telemetry) → artifact 17
- Preview architecture: 41 classes, IPreviewStub plugin family → artifact 18
- DiskHealth QML UI documented (840x590 frameless, SMART table, 32 strings) → artifact 19
- QSS systematic census: 1,646 selectors w/ layout constraints → qss_layout_census.txt
- Built ui-ground-truth.yml (Wine+Xvfb screenshots + window census); dispatched 4x — ALL rejected at job allocation: GitHub Actions minutes EXHAUSTED on account (jobs after 09:19 UTC never scheduled, no runner; verified windows-latest AND ubuntu-latest)
- 19 artifacts + architecture/05 + toolchain committed

Stage Summary:
- UI/UX research COMPLETE statically (19 artifacts, all phases, verified via 4 independent evidence channels: QM/tr-strings, RTTI vtables, moc tables, QSS/RCC assets)
- PENDING: dynamic Wine ground-truth — workflow ready, blocked by account Actions-minutes exhaustion; re-dispatch when minutes available

---
Task ID: doc-3
Agent: Documentation Enhancement & Verification Agent (session 3)
Task: Resolve tracked open items, deepen artifacts, verify parallel-agent output, ingest pending CI data

Work Log:
- Synced with main (33→77 commits incl. parallel UIUX session: 19 artifacts + 05-uiux-architecture.md)
- EUEDKEPM RESOLVED (INDEX open item): full driver internals decoded from ghidra-drivers —
  identity = EuDskAcs.sys "Disk Access Driver" (Todo Backup 5.8 lineage, rebuilt 2024-02-04),
  dispatch table (CREATE=PID-token gate + \Device\Harddisk%u\Partition0 binding + \Driver\Disk
  walk-down; READ/WRITE async FSD sector forward len<<9; IOCTL clean pass-through, IoctlBase
  unused; CLEANUP/CLOSE/Unload), regdrv.reg evidence (SYSTEM_START, DeviceName=EUDKEPM),
  /GS bugcheck 0xF7, pool tag esdr, NO in-tree opener (dormant deployment); corrected wrong
  "EDK=EaseUS Deploy Kit / smaller hook variant" claims in doc 02 + hook-driver artifact
- .rsf record-1/2/3 field schemas FULLY DECODED (INDEX open item) from writer
  CSaveAndRestoreResult::SaveResult (DRWUI 440936-441210): all 4 record IDs byte-extracted
  from .rdata and matched to samples; rec1 = counts+flags (12B arithmetic exact); rec2 = 0x7F
  sig + name[100] + devtype + SYSTEMTIME + 2 stat qwords + 4 flags (147B exact; TIMESTAMP
  CORRECTION: 2026-10-14 23:13:21.774 matches filename — prior 10-03 reading was wrong
  field order; stat2/stat1 = 3.431GHz → tick counter); rec3 = [count][1781B partition struct
  (FS code 3=NTFS, disk model @+0x389)][5400B volume-device blob (model/serial/firmware/USB +
  512B MBR snapshot @+0x518)] = 7185B exact; new script scripts/rsf_dump_records.py
- EuShare SSH-forward port RESOLVED (verified negative): DRWUI has ZERO ssh2 symbols across
  119,182 fns; SSH client = connect.exe which is runtime-DOWNLOADED
  (CLinuxDownloadConnectZipThread → EUUnZip.exe → NasConfig\connect.exe, connectver-gated) —
  not shipped; libssh2.dll ships solely as its dependency (0 in-tree importers verified by PE
  import scan); port lives in connect.exe — not recoverable from this codebase; added RDBSS
  internals evidence (static rdbss.lib, \;0:\EuShare.com\ prefix, 8 session slots re-verified
  (<8 loop), 26 drive-letter tables, STATUS_BAD_NETWORK_NAME, LanmanWorkStation tuning);
  corrected data-flow diagram (connect.exe is the SSH actor, not DRWUI)
- ImageRepair per-format grammar deep-dive (NEW artifact FileRepair/image-repair--format-grammar.md):
  37-file Fixo source tree, 29 C<Format>Info classes (IImageInfo base, 20 RAW vendors),
  JPEG repair skeleton FFD8/FF01/FFD9 + LibRaw ljpeg_start marker state machine, JXL libjxl
  event walk (0x40 basic-info, 1 error), AVIF ffmpeg.exe shell-out + buildpitm/buildhdlr
  atom reconstruction, 560-export LibRaw static link, gpr SDK, XMP metadata reattachment,
  window-IPC invocation chain (EUImgRepair_Wndname + registry key), EasyLogging++ census
- UIUX verification (parallel agent's 19 artifacts): independent spot-checks ALL PASS —
  view manager pages/landing idx 2 (FUN_1408351a0 + 140835910), QSize(0x4D8,0x348)=1240x840
  @1312170, themdark.ini slot 6 #0560fd, 195 telemetry events (literals in binary),
  VideoPreviewWnd QTimer::start(15000)+timeout() @1507357; one precision note (CDetailPage
  inserted in FUN_140835910 not 1408351a0) — verification addendum written as §10 of
  05-uiux-architecture.md
- Stale claims swept: .rsf "CryptoAPI" references corrected in doc 04 (2 sites) + DRWUI
  artifact §4.8; cross-links added 00-INDEX (05u row, image-repair row, ci-multitool row) +
  docs 04/06/07 → UIUX master + image-repair grammar
- multitool partition+repair CI batches INGESTED (worklog pending item): repair (10 bins,
  EUVideoRepair 161K retdec lines) + partition (13 bins incl MainModule/CloneModule/RawFixer/
  libvmdk) — 18 convention files each; capa digests mined ("delete drive layout via IOCTL"
  confirms destructive partition ops; libvmdk luhn = documented false-positive)

Stage Summary:
- ALL 4 tracked open items RESOLVED (EUEDKEPM, .rsf schema, SSH port, ImageRepair grammar);
  2 corrections of prior wrong claims (EuDskAcs role, rsf timestamp), 1 verified-negative
  with full architecture correction (connect.exe is the SSH actor)
- 6 commits pushed conflict-free (pull --rebase before every push)
- New: image-repair--format-grammar.md + rsf_dump_records.py; deepened: eudcpepm-euedkepm
  (EUEDKEPM section), rsf-format (§5 schemas), eumrx (§6.1/6.2), pending-operation (capa),
  05-uiux (§10 verification), docs 02/04/06/07 + 00-INDEX
- Remaining for next sessions: DRWUI RTTI class-by-class depth (980 classes), record-4
  per-node tree grammar, .rsf stat-qword semantics naming, ImageRepair per-format
  AnalysisData case-by-case walks (PNG/WebP/HEIC state machines), UI dynamic ground-truth
  re-dispatch when CI minutes replenish
