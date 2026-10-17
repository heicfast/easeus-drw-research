# Results Filtering & Type-Display Configuration — usefullostfiles, PriorityDisplayType, FilterFolder, RawConfig, shellexe

**Sources**: `og-codebase/config/{usefullostfiles.xml, PriorityDisplayType.xml, FilterFolder.ini, RawConfig.ini, shellexe.ini}` (+ PE copies in BUILDPE/EaseUS-x64/config/)
**Method**: direct parse (XML/INI), UTF-16 decode for shellexe.ini; consumer cross-ref via DRWUI decompilation
**Role**: The complete configuration layer behind the user's "filtering / categorization / display priority" behaviors — what the results tree hides, emphasizes, orders, and reports.

---

## 1. usefullostfiles.xml — the prioritized "valuable formats" set

Flat catalog: root `<type>` with **27 `<ext>` entries** — the formats the product considers "what users actually lost" (drives the home-screen quick-pitch and default result emphasis):

- **Photos (12)**: jpg, jpeg, cr2, cr3, nef, arw, dng, gif, tif, tiff, psd, bmp, heic
- **Video (9)**: mp4, mov, avi, mkv, mts, m2t, m2ts
- **Documents (6)**: pdf, doc, docx, xls, xlsx, ppt, pptx

(Note: the raw camera formats cr2/cr3/nef/arw/dng sit in the photo set — the "lost my photos" scenario is RAW-aware.)

## 2. PriorityDisplayType.xml — Type-tree ordering contract

**5 categories, 35 extensions, each with an `alias` attribute encoding a 2-digit sort key** (`00jpg`, `01png`, `02jpeg`…):

| Category (Description) | Ordered extensions (by alias) |
|---|---|
| Picture (9) | jpg, png, jpeg, gif, tif, eps, psd, bmp, ico |
| Video (7) | mp4, mov, avi, swf, m4v, fla, wmv |
| Document (7) | doc, docx, pdf, xls, xlsx, ppt, pptx |
| Audio (7) | mp3, wav, wma, m4a, ape, flac, aac |
| Archive (5) | *(zip-family first per alias ordering)* |

**Decoded semantics**: the `alias` strings are the sort keys the Type tree uses to order extensions **within** each category — this is why the results Type-tab always shows jpg before png before jpeg… The category set here (5) is the *priority* tier; FileFilter.xml's 8-category/1489-ext map (config-data-reference) is the *complete* filter set — these two files together answer "how categorization works": FileFilter.xml = membership, PriorityDisplayType.xml = presentation order.

## 3. FilterFolder.ini — noise suppression (the hidden filter layer)

```ini
[Filter]
FolderName=;Config.Msi;$Windows.~BT;$Windows.~WS;$Windows.~TMP;
FileName=;desktop.ini;._.DS_Store;.DS_Store;$UsnJrnl;IndexerVolumeGuid;WPSettings.dat;MountPointManagerRemoteDatabase;
FatFilterName=;New Folder;新建文件夹;新建資料夘;新しいフォルダー;새 폴더;Neuer Ordner;Nova pasta;Nuova cartella;Nueva carpeta;Nouveau dossier;System Volume Information;AadRecoveryPasswordDelete;ClientRecoveryPasswordRotation;FveDecryptedVolumeFolder;
TxtViewFiles=.TXT;.CFG;…(119 text-family extensions, case-mixed)…;.msbak;
SumaryFileType=aiff_aif;m4p_m4a_m4v_mp4;html_htm;rm_rmvb;mpg_mpeg_mov;mkv_webm;asf_wma_wmv;jpg_jpeg;tif_tiff;ai_pdf;zip_docx_pptx_xlsx;
```

Decoded behaviors:
1. **Folder exclusions**: Windows upgrade/setup scaffolding (`$Windows.~BT/WS/TMP`, `Config.Msi`) never shown in results.
2. **File exclusions**: filesystem metadata noise (desktop.ini, .DS_Store, $UsnJrnl, MountPointManagerRemoteDatabase) hidden.
3. **`FatFilterName` = the "New Folder" filter, localized into 10 languages** — default-named folders (新建文件夹 = zh-CN, 新しいフォルダー = ja, 새 폴더 = ko, etc.) are treated as noise and filtered — a fascinating cross-cultural noise heuristic: an empty auto-named folder is junk in every locale. Also excludes `System Volume Information` and **BitLocker recovery-password rotation artifacts** (AadRecoveryPasswordDelete/ClientRecoveryPasswordRotation/FveDecryptedVolumeFolder — Azure AD + FVE state files that would confuse users).
4. **`TxtViewFiles`** = the text-preview whitelist: extensions the preview panel will render as text (source-code-ish families: .c/.py/.java via case-mixed variants + .log/.ini/.xml/.json…).
5. **`SumaryFileType`** = **extension unification groups** for counts/summaries: `m4p_m4a_m4v_mp4` counted as one family, `zip_docx_pptx_xlsx` = "office-in-zip" family (all four are ZIP containers!) — this is why the UI can say "MP4 family: N files" — the groupings follow container identity, not just extension.

## 4. RawConfig.ini — per-format RAW-carve switches

`[Filter]` section: `FORMAT=1/0` per extension — the deep-scan carve enable/disable table. Verified cross-refs with the analyser registry:

- **=1 (enabled)**: HEIC, WEBM, WEBP, M1V, M2T, M2TS, JP2, M4P, XMIND, RVT, MOBI, MMAP, POS, EDDX, WFP, OSP, **HFP** (HitFilm), **DRP** (DaVinci Resolve project), **HIK** (Hikvision), ODP, ODT…
- **=0 (disabled)**: STL, VPJ (Vegas project)…

**Decoded**: this maps 1:1 onto the analyser registry's standalone classes (CHFPAnalyser, CHIKAnalyser, COSPAnalyser, CPOSAnalyser, CVCFAnalyser, AEPAnalyser — the niche-format analysers) — RawConfig.ini is their on/off config, letting support toggle carving per format without a rebuild. The `DRP/OVP/HFP/OSP/WFP` set = **video-editor project files** (DaVegas/Resolve/HitFilm/OpenShot/Wondershare) — carving for "recover my project file" scenarios.

## 5. shellexe.ini — shell-extension marketing strings (UTF-16, 25 locales)

`[language]` section: one-line product taglines per locale, e.g. English = **"Recover any deleted data with EaseUS"**, German = "Gelöschte Daten mit EaseUS wiederherstellen", Arabic = "استعادة أي بيانات محذوفة مع EaseUS" (RTL). Consumed by the Windows Explorer context-menu integration ("Recover any deleted data" verb on files/folders — the shellexe component referenced by DRW's install). Every shipped language has its tagline here — this is the ONLY user-visible string outside the .qm system.

## 6. Synthesis — the filtering pipeline (config → behavior)

```
scan results
  → FilterFolder.ini (noise suppression: junk folders/files, localized New-Folder filter)
  → FileFilter.xml (category membership: 8 categories / 1489 ext)
  → PriorityDisplayType.xml (presentation order within category)
  → SumaryFileType (family grouping for counts)
  → RawConfig.ini (deep-scan carve scope, per-format toggles)
  → usefullostfiles.xml (the headline "valuable formats" pitch set)
```

Each stage is config-driven (hot-tunable by EaseUS support without code changes) — the entire "filtering/categorization" user story from the original research questions resolves to these five files plus the type-tree rendering code (CLeftTreeView/CClassifyLeftTreeView per the moc tooling decode).

## 7. Cross-links

- Master config reference (all files incl. FileFilter/raw_signs/Dict): `config-files/config-data-reference.md`
- Type-tree rendering: `UIUX/09-results-phase-deep-dive.md` + moc tooling artifact (20)
- Carve toggles ↔ analysers: `SearchDLL/rawsearchdll--analyser-registry-census.md`
- Results-tree live capture: `UIUX/dynamic-ground-truth--scan-phase-captured.md` (Filter funnel + tree counts observed live)
