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

---

## DECOMPILED UPDATE (Ghidra repair batch: 4.02M lines / 17 binaries — verified)

### A. Internal source trees (embedded `__FILE__` paths)

**Video repair** (`e:\drw\_drw_main\drwintelligentscan\videorepair\`, 26 files — part of the
DRWIntelligentScan monorepo, NOT Fixo):
box.cpp, ftypbox.cpp, hdlrbox.cpp, sample_entry_box.cpp, stcobox.cpp, stscbox.cpp,
stsdbox.cpp, stszbox.cpp, movmp4repair.cpp, mp4binaryanalyse.cpp, regroupfile.cpp,
integrationalg.cpp, avifilemanager.cpp, aviregroup.cpp, mtsrawfinder.cpp,
mtsregstatus.cpp, mxfregroup.cpp, filemanager.cpp, cfilenodeextend.cpp, fshelper.cpp,
iohelper.cpp, enhancebitmap.cpp, scanroundmanaegr.cpp [sic], utils.cpp, vrgfilestream.cpp,
vrgtimer.cpp.

**Fixo product line** (`D:\Fixo\01_Project\00_Source\_main\` — separate solution!):
| Project | Files (selected) |
|---|---|
| ImageRepair | 37: bmp/, gif/, jpeg/, jxl/, png/, svg/, webp/, raw/{3fr,arw,avif,cr2,cr3,crw,dng,erf,gpr,heic,mrw,nef,orf,pef,raf,rw2,sr2,srf,srw,tiff,x3f}, common/libJpegOperation, net/client (cloud), commandLine/commandParser |
| OfficeRepair | hwpxFileInfo, hwpxFileRepair, hwpxInfo/{contentsHeader,contentsHpf,metaContainer,metaContainerXml,metaManifest,mimetype,opXmlInfo,opensslHwpx,settings,version}, OldOfficeRepair/hwp/{hwp_FileHeader,hwp_FileRecord,hwp_Script,hwp_ViewText,hwp_file,repair_hwp}, common/{aesOperate,zlibOperate} |
| ArchiveRepair | 7z/7zNextHeader, archive7z, client, commandParser |
| AdobeRepair | AdobeRepair, client, commandParser |

**EUImageEnhance.dll** = statically linked **OpenCV 2.4** (C:\builds\2_4_PackSlave-win32-vc12-static)
+ project glue — explains its 9,841 functions; used for photo enhancement of repaired images.
**EuOfficeRepairWin32** built on an Azure DevOps agent (`d:\agent\_work\3\s\`) — outsourced/
CI-built component; EuRepairHost = 50 functions (thin licensing bridge, activation.easeus.com).

### B. Video repair algorithm (from 125 trace points, byte-level verified)

**MP4/ISO-BMFF engine (movmp4repair.cpp + box classes):**
1. **Weighted atom grammar**: static registry of top-level 4CCs each with float weight 1.0:
   ftyp, pdin, moov, moof, mfra, mdat, free, skip, meta, meco, styp, sidx, ssix, prft —
   box walker recognizes atoms in any order with confidence, tolerant to corruption.
2. **Two-scan architecture**: "first scan use Time start" → scan 1 (locate atoms + bounds) →
   "start calc blokc Bound" [sic] → "scan second start/end" → verification pass.
3. **moov triage** (regroupfile.cpp): "file:%s be regroup,moov is raw:%d";
   "file:%s has no full correct moov" / "%s is bad moov" → falls back to **sample-file moov**
   (user supplies a healthy video from same device — CRepairVideoGetSampleWnd) and
   "useOrgFsDatarun:%d usergedDatarun:%d" chooses between the ORIGINAL filesystem datarun
   (from scan engine results) or the regrouped datarun carved from mdat extents.
4. **Fragment tracking via self-built bitmap** (integrationalg.cpp): "bitmap create by self",
   "%s be set to bmp:start sector %lld count: %lld"; enhancebitmap.cpp "file %s fill sectors:%lld-%lld"
   — sector-granular coverage map of video fragments on disk.
5. **mdat matching**: "file:%lld can not find suit able mdat"; "HD video one frag use rollbakc alg"
   (rollback algorithm for fragmented HD videos).
6. **Per-format regroup**: AVI (idx1-based: aviregroup.cpp "regroup :frag Size %d" + idx info
   dev offset), MTS/M2TS (mtsrawfinder "find Mts Raw on device offset" — raw stream location on
   DEVICE, not file), MXF (KLV regroup), all with fragment limits ("be limited with frag:%ld").

### C. Archive repair (7z) — 7zNextHeader.cpp trace points confirm:
Scans for the NEXT 7z header after corruption (compressed-structure recovery), using the
7z.dll API + own header-walking logic.

### D. HWPX/HWP office repair — layered:
- HWPX (OOXML-like Korean format): parse container (contentsHeader/contentsHpf/metaContainer/
  mimetype/settings/version), **opensslHwpx.cpp = OpenSSL-based CFB decryption** of
  password-protected HWPX (matches DRWUI repair flow CRepairPDFDecrypt* analog + Dict
  password dictionary for brute-force).
- Legacy HWP 3.x/5.x: FileHeader/FileRecord/Script/ViewText record-level repair
  (OldOfficeRepair — clearly older codebase generation).
- Common: aesOperate + zlibOperate (AES-ECB/CBC + zlib stream repair).

### E. Chain-of-custody (who builds what)
| Component | Build tree | Build env |
|---|---|---|
| EUVideoRepair.dll | e:\drw\_drw_main (DRWIntelligentScan) | dev box (e:) |
| DRWUI.exe | e:\drw\_drw_main | dev box |
| Fixo repair EXEs (Img/Office/Archive/Adobe) | D:\Fixo\01_Project | Fixo solution (d:) |
| EuOfficeRepairWin32.exe | ? | Azure DevOps agent d:\agent\_work\3\s |
| euactiveonline (activation) | h:\awork\euactiveonline3.1 | separate activation product |

---

## VERIFICATION ADDENDUM (doc-session — all prior algorithm claims re-verified)

Spot-verified against `re-workspace/reversed/ghidra-repair/`:

| Claim | Verified at (EUVideoRepair_decompiled.c / others) |
|---|---|
| Atom 4CCs mdat/moov/free (0x7461646D/0x766F6F6D/0x65657266) | 20683, 64665, 72448, 78131, 78364, 78784 |
| Two-scan architecture ("first scan use Time start" / " scan second start") | 50867, 51427 |
| Self-built bitmap ("bitmap create by self", "file %s fill sectors:%lld - %lld") | 36412, 14371/14461 |
| Datarun choice (exact string: "%s will use roged %s datarun useOrgFsDatarun:%d usergedDatarun:%d" — vendor typo "roged") | 69299 |
| HD frag rollback ("HD video one frag use rollbakc alg" — vendor typo "rollbakc") | 68291 |
| HWPX repair source (hwpxFileRepair.cpp) | EuOfficeRepairFile @53503+ |
| 7z next-header (C7zNextHeaderInfo::ReadNextHeaderPackedStreams, 7z\7zNextHeader.cpp) | EUArchiveRepair @40323 |
| EuOfficeRepairFile scale (42,215 fns / 1.64M lines) | ghidra-repair/REPORT.md |

No inaccuracies found in the repair artifact's algorithm section — claims held.
