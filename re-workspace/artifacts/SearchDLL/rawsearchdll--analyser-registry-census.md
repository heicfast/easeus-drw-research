# RAWSearchDLL Analyser Registry — Complete Class Census, Magic-Key Table, and Developer Attribution

**Binary**: RAWSearchDLL.dll (80,614 lines Ghidra decompilation ingested)
**Evidence**: RTTI type-descriptor census (182 types from `.?AV` strings), vftable instantiation census (106 analyser classes), registry static-initializer decode (lines 1690–4195 of `ghidra-searchdll/RAWSearchDLL_decompiled.c`), 6 DLL exports, raw_signs.json (139 extensions)
**Role**: The complete map of what file formats the raw/deep-scan engine can carve, which class carves each, who wrote it, and how the dispatch table is keyed.

---

## 1. The three-layer dispatch architecture

```
EUGetAnalyserList()      ─┐
EUGetAnalyserMap()        ├─► FUN_180006a80 (registry singleton getter)
EUGetAnalyserMultimap()  ─┘      │
                                  ├─ FUN_180006b20 (list view: all analysers)
                                  ├─ FUN_180006b00 (map view: magic → first-match)
                                  └─ FUN_180006b10 (multimap view: magic → ALL matches)
```

All three exports share one singleton (built by the static initializer at load time) and expose three projections of the same data:
- **List** — every analyser instance (used by scan setup to enumerate capabilities)
- **Map** — magic DWORD → analyser chain (fast first-match dispatch during carving)
- **Multimap** — magic DWORD → all chains that claim that magic (signature-collision resolution: e.g. 4 different JPG magics, TIFF's `II*.` claimed by both TIFF and several camera-RAW analysers)

`GetRawUserInfoMap()` exposes the user-extension→analyser bindings (RAW custom-format feature).

## 2. Registry node structure (decoded from the static initializer)

Each binding constructs a 0x18-byte chain node:

```c
node = alloc(0x18);
node->vt = IRawFileAnalyser::vftable;   // base vtable first (safe destruction path)
node->idx = 0xffffffff;                  // then overwritten:
node->vt = Brance::DMGAnalyser::vftable; // concrete analyser
node->idx = 0x71;                        // priority/format code (0x71 = 113 for DMG)
// optional fallback link:
fb = alloc(0x18); fb->vt = FileDMGAnalyser::vftable;  // legacy generation analyser
node->fallback = fb;                     // chain: new impl → legacy impl
map[key] = node;                         // FUN_180006c80 = std::map operator[]
```

**The two-generation design**: every format has a modern analyser (namespaced, FileInfo-paired) and — where one exists — a legacy fallback `File*Analyser` (first generation, flat names). When the modern analyser rejects a candidate (validation failure), the chain falls to the legacy implementation before giving up. This is why carving rarely false-positives: two independent validators must both fail before a match is discarded, and one strong validator accepting is enough.

## 3. Complete magic-key table (70 unique keys, byte-decoded)

Keys are little-endian DWORDs read from the candidate file's first 4 bytes:

| Magic (bytes) | Hex key | Format | Analyser chain (verified examples) |
|---|---|---|---|
| `FF D8 FF E0/E1/DB/EE` | 0xe0ffd8ff, 0xe1ffd8ff, 0xdbffd8ff, 0xeeffd8ff | JPEG (JFIF/EXIF/quantization-reset/other) | JPG carving map (see SearchDLL artifact; 4 magics → std::map dispatch) |
| `%PDF` | 0x46445025 | PDF | BruteForce::PdfAnalyzer |
| `MM\x00*` / `II*\x00` / `IIU\x00` | 0x2a004d4d, 0x2a4949, 0x554949 | TIFF (both byte orders + TIFF/EP variant) | BruteForce::TiffAnalyzer |
| `IIRO` / `IIRS` / `MMOR` | 0x4f524949, 0x53524949, 0x524f4d4d | Olympus ORF (3 magic variants) | camera-RAW chain |
| `FUJI` | 0x494a5546 | Fujifilm RAF | camera-RAW chain |
| `II\x1a\x00` / `MM\x1a\x00` | 0x1a4949, 0x1a4d4d | Minolta MRW (both byte orders) | FileMRWAnalyser |
| `BZh1` | 0x31685a42 | bzip2 stream (DMG payload compression) | **Brance::DMGAnalyser → FileDMGAnalyser** (byte-exact verified) |
| `FOVb` | 0x62564f46 | Foveon/Sigma X3F RAW | **Brance::X3FAnalyser → FileX3FAnalyser** |
| `<?xm` / UTF8-BOM`<` / `<svg` | 0x6d783f3c, 0x3cbfbbef, 0x6776733c | XML (+BOM variant) / SVG | HTML/SVG chain |
| `00 00 01 B3` / `00 00 01 BA` | 0xb3010000, 0xba010000 | MPEG-PS (audio/video start codes) | MPEG chain |
| `OggS` | 0x5367674f | Ogg container (Vorbis/Theora/Opus) | Brance::OGGAnalyser → CFileOggAnalyser |
| `.RMF` | 0x464d522e | RealMedia | Brance::RM_RMVBAnalyser → FileRM_RMVBAnalyser |
| `06 0E 2B 34` | 0x342b0e06 | **MXF** (SMPTE KLVP key prefix) | Brance::MXFAnalyser |
| `30 26 B2 75` | 0x75b22630 | **ASF/WMA/WMV** (GUID prefix) | BruteForce::CAsfAnalyser |
| `\x20\x20 0\x0D` | 0xd302020 | MPEG audio frame sync variant | MPEG audio chain |
| `MAC ` | 0x2043414d | Monkey's Audio (APE) | BruteForce::CAPEAnalyser |
| `SQLi` | 0x694c5153 | **SQLite database** (carves .db/.sqlite) | DB chain |
| `C5 D0 D3 C6` | 0xc6d3d0c5 | dBase/DBF-family | DB chain |
| `AC10` | 0x30314341 | **AutoCAD DWG** (R13+ magic "AC10xx") | BruteForce::CDWGAnalyser |
| `GIF8` | 0x38464947 | GIF | BruteForce::CGifAnalyser |
| `MThd` | 0x6468544d | Standard MIDI file | RawSpeed::MIDAnalyser → FileMIDAnalyser |
| `.PNG` | 0x474e5089 | PNG | RawSpeed::PNGAnalyser → FilePNGAnalyser |
| `8BPS` | 0x53504238 | Photoshop PSD | FilePSDAnalyser |
| `{\rt` | 0x74725c7b | RTF | RawSpeed::RTFAnalyser → FileRTFAnalyser |
| `Pain` | 0x6e696150 | Paint Shop Pro ("Paint Shop Pro Image") | RawSpeed::PSPAnalyser → FilePSPAnalyser |
| `Rar!` | 0x21726152 | RAR | RawSpeed::RARAnalyser → FileRARAnalyser |
| `Stuf` | 0x66757453 | StuffIt | RawSpeed::SITAnalyser → FileSITAnalyser |
| `E4 52 5C 7B` | 0x7b5c52e4 | **LZH arc** | LZH chain |
| `wpg` | 0x677077 | WordPerfect Graphics (also seen as magic check `0x677077` in WPG FileInfo ctor) | RawSpeed::WpgAnalyser |
| `JMF6` | 0x36464d4a | JMF6 container | (bound in ZIP/Dbx cluster region) |
| `CF AD 12 FE` | 0xfe12adcf | MS-DOS executables/compound variant | — |
| `F7 89 34 2C` | 0x2c3489f7 | Windows thumbnail/repair variant | — |
| `PK\x03\x04` | 0x04034b50 | ZIP | FileZIPAnalyser |
| `\xFF WPC` / `D7 CD C6 9A` | 0x435057ff, 0x9ac6cdd7 | **WordPerfect** (WPG/doc) | FileWPDAnalyser |
| `01 00 09 00` | 0x90001 | Windows thumbnail cache | — |
| `00 01 00 00` / `00 02 00 00` | 0x100, 0x20000 | **ICO / CUR** (01/02 + count) | FileICOAnalyser |
| `RIFF` | 0x46464952 | RIFF (AVI/WAV/etc. — sub-dispatch by form type) | Brance::RIFFAnalyser → FileRIFFAnalyser |
| `!BDN` | 0x4e444221 | Bentley/BDN document | — |
| `D0 CF 11 E0` | 0xe011cfd0 | **OLE compound document** (DOC/XLS/PPT/MSI) | FileOLEAnalyser → FileLowDocAnalyser |
| `DB A5 2D 00` / `94 A6 2E 00` | 0x2da5db, 0x2ea694 | Windows Help / old MS formats | FileHLPAnalyser cluster |
| `3F 5F 03 00` | 0x35f3f | Nikon NEF/other | — |
| `FORM` | 0x4d524f46 | IFF (AIFF/ILBM...) | CFileAIFAnalyzer (→ FileAUAnalyser cluster) |
| `CPT7`/`CPT8`/`CPT9` | 0x37545043, 0x38545043, 0x39545043 | **Corel PhotoPaint** (3 generations!) | RawSpeed::CPTAnalyser (exists in RTTI; legacy CPT) |
| `MSCF` / `mscf` | 0x4643534d, 0x6663736d | Microsoft CAB (both cases — case-insensitive formats) | FileCABAnalyser |
| `.snd` | 0x646e732e | Sun/NeXT AU audio | FileAUAnalyser |
| `1A 45 DF A3` | 0xa3df451a | **EBML → Matroska/MKV/WebM** | FileMKVAnalyser |
| `ITSF` | 0x46535449 | **CHM** (InfoTech Storage File) | FileCHMAnalyser |
| `\x00 MRM` | 0x4d524d00 | AN MRW-variant | FileMRWAnalyser cluster |
| `0x81`, `0x1cd`, `0x11c`, `0x10000`, `0x35f3f`, `0xfe12adcf`... | numeric | format-version/length-prefixed structures (ICO sizes, MTS/ADTS sync) | — |

*(Chains listed are those whose construction is byte-adjacent to the insert in the static initializer — the trailing-chain evidence; ambiguous windows are marked "—". The multimap exists precisely because several of these keys are claimed by more than one chain.)*

## 4. Complete analyser class census (106 instantiated classes, by family)

**`@BruteForce` namespace — 24 classes (20 analysers)**: CADTS, CAPE, CAsf, CDWG, CDXF, CEPS, CFCPEvt, CFH11, CGif, CM2TS, CMTS, CMP3 (MP3Analyzer), CJpeg (JpegAnalyzer), CMov (MovAnalyzer), CPdf (PdfAnalyzer), CTiff (TiffAnalyzer) + FileInfo pairs (AsfRawFileInfo, APERawFileInfo, ADTSRawFileInfo, DWGRawInfo, DXFRawFileInfo, FCPEvtFileInfo, GifFileInfo, ...). Audio/video "brute force" = frame-sync scanning rather than container parsing.

**`@RawSpeed` namespace — 20 classes**: CPT, TAR, RAR, HTML, New3DS (Nintendo 3DS!), GZ (GZAnalyzer), MID, PNG, PSP, RTF, SIT, One (OneNote!), Wpg, MDB (Access), Dbx (Outlook Express) + FileInfo pairs. Namespace borrowed from the open-source **RawSpeed** camera library — these are EaseUS implementations in RawSpeed's naming style (HTML/One/MDB/Dbx are not RawSpeed formats; the namespace is homage/borrowed conventions, not library code).

**`@RawFormat_xjq` namespace — 8 classes**: CommonRaw, HEIC, JP2, M1V, MOBI + FileInfo pairs. **xjq = developer initials** (Chinese pinyin convention) — the newest-generation formats (HEIC/JP2/MOBI) belong to this author.

**`@Brance` namespace — 22 classes**: CRW (Canon RAW), DMG, FLV, LZH, MPG, MXF, OGG, RIFF, RM_RMVB, SVG, X3F, OfficeTagFromXML + FileInfo pairs. **"Brance" = another developer's handle** — owns the media-container/Apple-ecosystem set (DMG/FLV/MOV-adjacent/X3F).

**First-generation `File*Analyser` family — 46 classes**: flat names (FileJPG, FilePNG, FileZIP, FilePST, FilePSD, FilePDF, FileSWF, FileTTF, FileWPD, FileWMF, FileEMF, FileICO, FileHLP, FileCHM, FileCAB, FileOLE, FileLowDoc, FileMDB, FileMNY (MS Money), FileSIT, File3DS, File3GP, FileAU, FileBMP, FileCRW, FileDMG, FileFCPEVENT (Final Cut Pro!), FileFLV, FileGZ, FileHTM, FileLZH, FileMKV, FileMID, FileMP3, FileMPG, FileMRW, FileONE, FilePSP, FileRAR, FileRIFF, FileRM_RMVB, FileRTF, FileSVG, FileTAR, FileTIF, FileWPD, FileX3F, FileZIP...). These double as fallback-chain validators.

**Standalone/un-namespaced modern classes**: AEPAnalyser (After Effects Project), CHFPAnalyser, CHIKAnalyser (Hikvision?), COSPAnalyser, CPOSAnalyser, CGPXAnalyser (GPS Exchange), CVCFAnalyser (vCard), C7ZIPAnalyser, CFileAACAnalyzer, CFileAIFAnalyzer, CFileOggAnalyser (note Analyser/Analyzer spelling inconsistency — vendor typos preserved).

**Infrastructure classes**: IRawFileAnalyser (root interface), ISpecialRawFileAnalyser (extended validation contract — DXF/ZIP/Dbx chains include it), CRawFileInfo (base result type), CZeroEndRawFileInfo (NUL-terminated name results), CRAWSearchController (engine controller), CNeedRawMgr, CRawFileCellTestStorageDevice (test harness — pairs with the `EUCreateRAWSearcherForCellTest` export), IStorageDevice, plus **tinyxml2** (raw_signs.json parser) and **neb::CJsonObject** (embedded JSON library).

## 5. raw_signs.json cross-reference (the external signature DB)

139 extensions configured in raw_signs.json vs ~106 analyser classes: the JSON drives *header/tail signature scanning* (offset+hex+confidence, min/max size — see config-files artifact) for formats WITHOUT dedicated C++ analysers (e.g. `itc2`, `prproj`, `nes`, `rpgmvo`, `apk`, `blp`, `resw`...), while the C++ classes handle formats needing *structural validation* (carving size, internal consistency). The engine consults BOTH: magic-key registry first (C++ chain), then the JSON signs for unclaimed extensions — that's why the product can advertise carving for far more formats than it has analyser classes.

## 6. Verified behavioural notes

1. **DMG binds `BZh1`** — bzip2-compressed DMG payloads are carved via the DMG analyser (byte-exact code path verified); the DMG chain also has a legacy FileDMGAnalyser fallback.
2. **WPG magic check** `0x677077` appears again in the WPG FileInfo constructor (`local_18 = 0x677077; if (*param_2 == 0x677077) → size 0x45`) — the analyser re-validates the magic inside the FileInfo and stamps a canonical size — defense-in-depth validation.
3. **Case-insensitive formats get duplicate keys** (`MSCF`/`mscf`) rather than case-folding — deliberate registry bloat for correctness.
4. **Three-generation PhotoPaint support** (CPT7/CPT8/CPT9) — rare format, fully covered.
5. **Database carving exists** (SQLite `SQLi` + dBase + Access MDB + Outlook Express Dbx + PST via FilePSTAnalyser) — the "email/document recovery" marketing claims map to these concrete classes.

## 7. Cross-links

- JPG carving algorithm detail: `SearchDLL/` family artifact (std::map of 0xFFD8FFE0/E1/DB/EE signatures)
- raw_signs.json format: `config-files/` artifact + `architecture/05-scan-engine-architecture.md`
- RAWSearchController / engine integration: `architecture/04-recovery-workflow.md` (deep-scan stage)
- Consumer side (UI categorization of carved files): `architecture/05-uiux-architecture.md` tree/type mapping
- LibRaw/EUImgRepair relationship (repair-side RAW): `FileRepair/image-repair--format-grammar.md`
