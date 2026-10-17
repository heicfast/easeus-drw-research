# File Repair Architecture — The Fixo Engine Chain

**Evidence**: PDB paths, strings, RTTI, source-file names embedded in binaries, DRWUI controller classes
**Products involved**: EaseUS Fixo (D:\Fixo\01_Project\00_Source\_main) engines embedded in DRW; RepairHost (i:\_drw_main_\RepairHost); VideoRepair (E:\DRW\_drw_main\DRWIntelligentScan\videorepair\)

## 1. Repair Component Map

| Component | Arch | PDB/Project | What it repairs |
|---|---|---|---|
| EUVideoRepair.dll (DRWUI in-proc) | x64 | DRWIntelligentScan\videorepair | MP4/MOV/AVI/MTS/MXF video (moov rebuild, regroup) |
| VideoViewer/VideoFileRepairer.exe | x86 | fix_main_code\UI | Video repair UI host |
| EUImgRepair.exe + EUFileRepair/EUImgRepairFile.exe | Win32 | DRWIntelligentScan / Fixo ImageRepair | JPG/PNG/RAW images |
| EUFileRepair/EuPDFRepairFile.exe | Win32 | Fixo | PDF (xref/trailer reconstruction) |
| EUFileRepair/EuOfficeRepairFile.exe | Win32 | Fixo | **HWP/HWPX** (Korean Hangul) + encrypted HWPX |
| EuOfficeRepairWin32.exe | x64 (MFC OLE) | DRWIntelligentScan OfficeRepairWin32 | MS Office DOC/XLS/PPT + OOXML rebuild |
| EUAdobeRepair.exe | Win32 | Fixo\AdobeRepair | PSD/PSB (parse + ConvertPsdbToJpeg, **cloud-assisted**) |
| EUArchiveRepair.exe | Win32 | Fixo | ZIP/7Z/RAR (7zNextHeader, archive7z) |
| EUHwpViewer.exe + EUHwpFilePathCheckerModule.dll | x64 | DRW16.2.1-QT ShareBin | HWP preview in results UI |
| CHKPERepair/CHKRepair/CHKRepairAdapterMgr/CHKRepairFileSign (DRWUI classes) | — | DRWUI.exe | CHK/repair orchestration in main UI |
| EuRepairHost.exe | Win32 2021 | RepairHost | Activation/licensing bridge for repair features |
| EURawImg.exe | x64 | DRWIntelligentScan | RAW image processing |
| EUImageEnhance.dll | x64 | DRW_MAIN | Image enhancement (293 RTTI classes — vision pipeline) |

## 2. Video Repair — deepest algorithm (source-file evidence)

The binary embeds its own source paths (assert/log strings) — the module consists of:
```
videorepair/
├── box.cpp                 <- MP4 box (atom) tree base
├── ftypbox.cpp, hdlrbox.cpp <- specific box parsers
├── mp4binaryanalyse.cpp    <- binary-level MP4 analysis
├── movmp4repair.cpp        <- MOV/MP4 repair driver
├── avifilemanager.cpp, aviregroup.cpp   <- AVI regroup
├── mtsrawfinder.cpp, mtsregstatus.cpp   <- MTS/M2TS raw stream finding + regroup status
├── mxfregroup.cpp          <- MXF regroup
├── regroupfile.cpp         <- generic regroup engine
├── integrationalg.cpp      <- integration algorithm (recombining streams)
├── filemanager.cpp, cfilenodeextend.cpp, fshelper.cpp, iohelper.cpp
└── enhancebitmap.cpp       <- frame bitmap enhancement (thumbnails)
```
Algorithm (from log strings, in repair-pipeline order):
1. Parse MP4 box tree; detect `ftyp`/`moov`/`mdat` (box.cpp, mp4binaryanalyse.cpp)
2. "file has no moov" / "is bad moov" / "has no full correct moov" — validate moov (index) atom
3. "org frag(pre align) index" — walk original fragmented MP4 (moof) fragments, pre-align indices
4. "offset:%lld org data run is correct, will not fix it" — verify each data run against index
5. "file:%s be regroup, moov is raw:%d" — **regroup**: extract raw streams from mdat, rebuild a fresh moov around them (regroupfile.cpp, integrationalg.cpp)
6. Advanced mode (DRWUI: CRepairVideoAdvancedAddWnd + "Add Sample Video for Advanced Repair") — uses a healthy sample file's box template to reconstruct the damaged file's index (transplant approach)

## 3. Adobe Repair (PSD/PSB) — hybrid local+cloud
- RTTI: `CAdobeFactory`, `IAdobeInfo`, `CPsdbInfo` with async `AnalysisData` tasks (VS PPL `*_Task_async_state`)
- `NETCLIENT::CClient::ConnectServer` — connects to remote service (server-assisted heavy conversion)
- `ConvertPsdbToJpeg` — rasterizes repaired PSB/PSD to JPEG for preview
- Command-line driven (`commandLine/commandParser.cpp`) — spawned by DRWUI with paths, returns repaired file

## 4. Office Repair family
- **EuOfficeRepairWin32.exe** (MFC OLE document app): hosts OLE structures; contains a full `[Content_Types].xml` template for **DOCX** (word/document.xml, fontTable, settings, styles, theme overrides) — it can synthesize a fresh OOXML package shell around salvaged parts. `_Repair` symbol + COleStreamFile = OLE compound-file (legacy .doc/.xls/.ppt) stream-level repair.
- **EuOfficeRepairFile.exe** (Win32, Fixo): the **HWP/HWPX specialist**:
  - hwp_FileHeader/hwp_FileRecord/hwp_Script = legacy HWP 3.x-5.x binary format records
  - hwpxFileRepair + metaContainer/metaManifest/mimetype = HWPTX (ZIP+OPF-style container) package rebuild
  - aesOperate/opensslHwpx/zlibOperate = decrypt encrypted HWPX + inflate streams (ties to the `Dict` password list in the main app!)
  - ABNF_* / ASTNodeArchive* classes (huge family) = **spreadsheet formula parser** (cell references A1:B2, lambda idents, cross-table refs) — validates/rebuilds formula ASTs inside sheet XML
- **CHKPERepair (DRWUI)**: CHK = EaseUS "check & repair" flow — CHKRepairFileSign validates file signatures before dispatching to the right Fixo engine (CHKRepairAdapterMgr = adapter registry)

## 5. PDF Repair
- Strings prove real xref-table surgery: `startxref`, `trailer`, "object offset out of range: %d (%d 0 R)", "first object in xref is not free", `%%PDF-%d.%d` header rewrite (PDF-1.x through PDF-2.0)
- `CPDFObjectIndirect::ToStringNormal` — object model with serialization (its own mini PDF object library)
- XObject handling for embedded streams/images

## 6. Archive Repair
- `ArchiveRepair.cpp`, `archive7z.cpp`, `7zNextHeader.cpp` — 7z "next header" recovery (7z stores header at END; damaged tail = re-derive header by scanning), `client.cpp` (net), `commandParser.cpp`
- 7z.dll present in EUFileRepair dir for extraction verification

## 7. Orchestration flow (DRWUI → engines)
1. User opens "File Repair" (FileRepairHomePage) or right-clicks a corrupt file in scan results ("Preview failed" → repair offer: PreviewFailedWnd/CRepairAddProgressWnd)
2. DRWUI `CFileRepairPreviewCtl` previews + identifies damage; `CHKRepairFileSign` checks signature
3. Activation check via `EuRepairHost.exe` (connects activation.easeus.com / AWS Global Accelerator `aaa100cd68bbe03f3.awsglobalaccelerator.com`) — repair is a **paid feature gate**
4. DRWUI spawns the right Win32 engine (EUAdobeRepair/EUArchiveRepair/EuPDFRepairFile/EuOfficeRepairFile/EUImgRepairFile) as a child process with command-line paths (commandParser pattern in every engine); x64-only repair paths (video, MS-Office OLE) run in-proc or via x64 exes
5. Progress via callbacks/IPC (CRepairAddProgressWnd, RepairingWnd); comparison view (RepairPreviewCompareWnd: before/after)
6. Output saved to FileRepairSavePath (config.ini [User]); "Advanced Repair" uses sample files for video (CRepairVideoGetSampleWnd)

## 8. Cross-links
- FileFilter.xml categories drive which result files get the "repair" context action
- Repairable formats overlap RAWSearchDLL analysers (both know MP4/MOV internals — RAW carving uses the same box knowledge to find headers)
- EUImageEnhance.dll + ImageMagick stack (CORE_RL_*) enhance thumbnails of damaged images after repair
- Fixo engines also ship in BUILDPE/EaseUS-x64 (same PDBs) — repair available in WinPE
