# Configuration & Data Files — Complete Reference

All files at install root / config/ — what each does, parsed contents, and which module consumes it.

## Signature & magic databases (scan engines' data)

### raw_signs.json (34KB) — RAW signature DB #1
- 139 extensions; per-ext: `{"header": {"signs": ["offset,HEXBYTES,confidence", ...]}, "tail": {...}, "min": bytes, "max": bytes}`
- 139/139 have header signs; 46 also have tail signs (footer detection → exact file end)
- Confidence values 0.50-1.00 per signature; combined header+tail scoring ranks overlapping carves
- Size bounds (min/max) prune absurd candidates
- Example: `"ifo": header "0,44564456,0.96"` = DVD-Video IFO at offset 0 "DVDV"
- Consumer: RAWSearchDLL (via CJsonObject parsing) + DRWUI raw-config UI (config/RawConfig.ini gates which extensions are enabled)

### EUUserData (16KB) — RAW signature DB #2 (magic+MIME)
- Format: `{".ext": {"signs": ["offset,hex"], "mime": "application/..."}}` — libmagic-style
- Includes offset-based checks (e.g. `"doc": ["0,0D444F43", "0,CF11E0A1B11AE100", "512,ECA5C100"]` — OLE + Word6 + others)
- Consumer: file-type identification for preview + repair routing

### Dict (2,742 B, 228 entries — byte-verified) — password brute-force dictionary
- 228 comma-terminated password lines ("12345678", "11111111", "00000000", "123123123",
  "1234567890", … numeric-first then common word passwords; corporate-style entries,
  celebrity/cartoon names) — classic leaked-credential-list derivative
- Consumer: encrypted-file recovery (BitLocker password unlock via BitLockerLib, encrypted HWPX via EuOfficeRepairFile's aesOperate, protected archives)

## Filtering & categorization

### FileFilter.xml (54KB) — result-category tree
- 8 FileCategories: Graphic, Document, Email, Audio, Video, Other, Archive, Bookmarks (each with icon key e.g. file.jpeg)
- 1489 `<Extention>` entries across categories (note the typo "Extention" — original)
- Includes 40+ camera RAW formats (nef, arw, cr2, cr3, rw2, dng, heic...) under Graphic/TIFF group
- `Selected=2` state flags (0=unchecked, 1=partial?, 2=checked) per node — UI tree state
- Consumer: DRWUI CAdvanceFileFilterMgr (Filter dropdown), CClassify* tree controllers (Type view)

### config/FilterFolder.ini — junk filter
- FolderName blocklist: `;Config.Msi;$Windows.~BT;$Windows.~WS;$Windows.~TMP;`
- FileName blocklist: desktop.ini, .DS_Store, ._DS_Store, $UsnJrnl, IndexerVolumeGuid, WPSettings.dat, MountPointManagerRemoteDatabase
- FatFilterName: localized "New Folder"/新建文件夹/Neuer Ordner + System Volume Information + BitLocker recovery-password folders (AadRecoveryPasswordDelete, FveDecryptedVolumeFolder)
- TxtViewFiles: extensions previewable as text in-app
- SumaryFileType: extension-merging rules for the summary view (e.g. "jpg_jpeg", "mp4_m4p_m4v_mp4")
- Consumer: DRWUI result tree builder (hide OS junk from results)

### config/usefullostfiles.xml — "worth recovering" whitelist
- 27 extensions: jpg/cr2/cr3/nef/arw/dng/... photos, mp4/mov/avi/mkv/mts/m2ts videos, pdf/doc(x)/xls(x)/ppt(x) documents
- Used to rank/highlight valuable files in lost-partition results

### config/PriorityDisplayType.xml — display priority of file types
### config/RawConfig.ini — per-extension RAW scan on/off (37 types listed: HEIC, WEBM, 7Z, MOBI, ...)
### config/config.ini — global UI config
- 22 languages with numeric IDs; font stacks per locale (Segoe UI/Meiryo/Malgun Gothic/Microsoft YaHei)
- window 1240x840 min 800x600, high_dpi, start maximized
- User state: showRaw, UserRated, FileRepairSavePath, VideoVolume
- ENS coordinates (rcClose/rcBuy) — "E"nd-of-scan "N"otification "S"creen buy-button placement!
- RecoveryChances/Introduction toggles — onboarding funnel switches
- BadSectorTip: "Program is trying to skip bad sectors to find data." — bad-sector skip messaging

## WinPE builder

### PEtools.xml — WAIK tools deployment manifest
- Maps files into `\Windows AIK\Tools\{x86,amd64}`: bcdboot, wimmount(.inf/.sys/installer), oscdimg, wimserv, wimgapi, imagex + full DISM servicing stack (CompatProvider, DismCore, Msdelta, PkgMgr...)
- Consumer: PE_Tools.dll (WinPE media builder)

### dlconfig.xml — WAIK download manifest (ISO carving)
- OBJECTs with id, name, output path, byte `range` + `md5` into `download.microsoft.com/.../waik_supplement_en-us.iso`
- winpe3 (id 1), winpe4 amd64 (id 2/4), winpe5 (4,101,401,21), win10pe (4,101,402,22)
- GRAPHICS ui=1, PROGRESS is_one=1, TRY times=3
- Consumer: EuDownloader.exe (resumable range-downloader with MD5 verification)

### config/shellexe.ini — shell tool launch list (PE explorer extras)
### config/nasconfig.ini — NAS connection defaults

## Install/misc
- AliyunConfig.ini — Alibaba Cloud OSS config (crash-dump/log upload)
- google-services.json — Firebase project config (remote config + analytics for the UI)
- DataFile.ini, Upgrade.ini, recoveryFree.ini — data/upgrade/free-quota state
- raw JSON at log/: CalcPartition.log, DRWUI.log, DRWLog.log — actual runtime logs (evidence of run states)
- reglog_win.txt, strutureReg.log, EPMLOG.log, Eaolog.log — installer/registration logs
- unins000.* — Inno Setup uninstaller data (2016-era!)
- remote_config_data (61KB) — fetched Firebase remote-config snapshot (feature flags!)
- style.css (427KB) — CSS for embedded web views (EUinApp/EUWeChat windows)
- LICENSE/ (19 files) — third-party license compliance set
- LICENSE/EULA, License/... — product licensing

## Cross-links
- raw_signs.json + EUUserData + RawConfig.ini + FileFilter.xml + usefullostfiles.xml together define the full classification/recovery pipeline from signature detection to UI presentation
- Dict ties to BitLockerLib (manage-bde -Password) + EuOfficeRepairFile (encrypted HWPX)
- dlconfig.xml + PEtools.xml + PE_Tools.dll + EuDownloader.exe + Burn.dll = the bootable-media subsystem

---

## Independent verification note (doc-session)

Counts re-verified byte-for-byte against the shipped files: raw_signs.json = **139
extensions** (46 with tail signs) ✓; FileFilter.xml = **8 FileCategory / 1489
`<Extention>` elements** (the "Extention" typo is in the XML tag itself) ✓; Dict =
2,742 bytes / **228 comma-terminated entries** (corrected from earlier "~8KB / ~350"
estimate) ✓; EUUserData = 16,891 B ✓. Verification script: direct json/ElementTree
parse of `og-codebase/` files.
