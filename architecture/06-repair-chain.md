# 06 — File Repair Subsystem (Cross-Linked Top-Level)

> Consolidates: repair batch decompilation (4.02M lines / 17 binaries), Fixo source-tree
> extraction, DRWUI repair wizard RTTI, EuRepairHost analysis.
> Deep dive: `re-workspace/artifacts/FileRepair/repair-architecture.md`

## 1. Two repair worlds inside one product

| World | Origin | Components | Built from |
|---|---|---|---|
| **Video repair** | DRW monorepo (in-house) | EUVideoRepair.dll (7,154 fns) | `e:\drw\_drw_main\drwintelligentscan\videorepair\` (26 files) |
| **Fixo repair suite** | Fixo product line | EUImgRepair/EUImgRepairFile, EuOfficeRepairFile, EuPDFRepairFile, EUArchiveRepair, EUAdobeRepair, EURawImg, EUImageEnhance, EUUnZip, EuOfficeTools | `D:\Fixo\01_Project\00_Source\_main\{ImageRepair,OfficeRepair,ArchiveRepair,AdobeRepair}` |

DRW embeds the Fixo features as a product capability ("EaseUS Fixo" is sold standalone; DRW
bundles the same engines). `EuRepairHost.exe` (50 functions) is the licensing/activation
bridge: activation.easeus.com via AWS Global Accelerator, then repair EXEs run as children.

## 2. Entry points (when does repair happen?)

1. **From scan results**: user selects damaged files → "Try Advanced Repair" (UI string) →
   `CFileRepairPreviewCtl` / `FileRepairGeneralRealize` (DRWUI RTTI/traces).
2. **Direct repair home**: `FileRepairHomePage` → per-type wizards:
   - Video: `CRepairVideoHomeWnd` → Add → **GetSample** (user provides healthy sample from
     same device) → Advanced Analyze → Items → Save
   - PDF: `CRepairPDFHomeWnd` → Add → **Decrypt** (password-protected PDFs; CRepairPDFDecryptWnd;
     brute-force via Dict dictionary) → Items → Preview → Save
   - Image/Archive/Office: Add → Repairing (`RepairingWnd`, "Repairing (%1/%2): %3") → compare
3. **Repair during recovery**: recovered-but-corrupt files surfaced with repair hints
   ("Quick Repair Failed" / "Try Advanced Repair" strings).

## 3. Video repair algorithm (125 trace points decoded — the deepest mapped)

1. **Weighted ISO-BMFF atom grammar**: registry of top-level 4CCs with float weights
   (ftyp, pdin, moov, moof, mfra, mdat, free, skip, meta, meco, styp, sidx, ssix, prft) —
   tolerant walker for damaged files.
2. **Two-scan architecture**: scan 1 (locate atoms) → block-bound calc → scan 2 (verify).
3. **moov triage**: raw moov good? → use; bad/missing → **sample-file moov substitution**
   (that's why the UI collects a sample video from the same device/camera).
4. **Fragment tracking**: self-built sector bitmap ("bitmap create by self",
   "set to bmp:start sector %lld count: %lld"; enhancebitmap "fill sectors").
5. **Datarun selection**: original filesystem datarun (from scan engine results — the file's
   on-disk extents) vs. regrouped datarun carved from mdat extents
   ("useOrgFsDatarun:%d usergedDatarun:%d"); HD-video rollback algorithm for fragmented files.
6. **Per-format regroup**: MP4/MOV (stco/stsc/stsz/stsd box repair), AVI (idx1 index rebuild),
   MTS/M2TS (raw stream finding at DEVICE offset — device-level scan), MXF (KLV regroup).

## 4. Fixo repair engines (per format)

| Engine | Files | Algorithms (from source tree + traces) |
|---|---|---|
| EUImgRepairFile | 37 files | per-format: BMP/GIF/JPEG(libjpeg ops)/JXL/PNG/SVG/WebP + **21 RAW camera formats** (3fr arw avif cr2 cr3 crw dng erf gpr heic mrw nef orf pef raf rw2 sr2 srf srw tiff x3f) + inline-scan-jpeg (embedded JPEG carving in RAWs); cloud assist via net/client.cpp |
| EuOfficeRepairFile | 20 files | **HWPX** (Korean OOXML): container parse (contentsHeader/contentsHpf/metaContainer/mimetype), **opensslHwpx.cpp = OpenSSL CFB/decrypt**; legacy **HWP** 3/5 record surgery (FileHeader/FileRecord/Script); common aesOperate+zlibOperate |
| EUArchiveRepair | 5 files | **7z next-header recovery** (7zNextHeader.cpp — walk past corrupted headers to locate next structure), archive7z wrapper; 7z.dll for extraction |
| EUAdobeRepair | 3 files | Adobe format repair + cloud client |
| EuPDFRepairFile | 4649 fns | PDF xref surgery (from earlier analysis) + decrypt (Dict brute-force + user password) |
| EUImageEnhance | OpenCV 2.4 static (9,841 fns!) | photo enhancement of repaired images (denoise/enhance) |
| EUUnZip | 1,325 fns | zip extraction with repair tolerance (MFC-based) |
| EURawImg | 784 fns | RAW container conversions |

## 5. Process topology

```
DRWUI repair wizard
  └─ EuRepairHost.exe            (activation check: activation.easeus.com, AWS GA)
       └─ EUImgRepair.exe / EuOfficeRepairFile.exe / ... (CLI: commandParser.cpp per engine)
            ├─ per-format repair engines (in-proc)
            ├─ net/client.cpp → cloud repair assist (server-side heavy lifting for hard cases)
            └─ terminal_process_tree helpers (child process cleanup — DRWUI OfficePreviewStub mirrors)
```
All Fixo engines expose a command-line interface (commandParser.cpp each) — DRWUI shells out
with paths + options, reads results; "Advanced Repair" upsell routes through licensing first.

## 6. What "repair" means here vs "recovery"

- **Recovery** = get bytes back from damaged/deleted storage (scan engines + drivers).
- **Repair** = make an already-recovered (or user-supplied) FILE playable/openable again by
  rebuilding its internal structure (containers, indexes, metadata).
- Video repair uniquely bridges both: it can consume **filesystem dataruns from the scan
  engines** (engine-recovered extents) to reconstruct video even when mdat was overwritten —
  that's the "useOrgFsDatarun" path: recovery intelligence feeding repair.

## 7. Cross-links

- Deep artifact (all trace points, algorithms): `artifacts/FileRepair/repair-architecture.md`
- DRWUI repair wizards: `artifacts/DRWUI-exe--main-ui-architecture.md` §3.7
- Recovery workflow: `architecture/04-recovery-workflow.md` §9
- Dict password dictionary: `artifacts/config-files/config-data-reference.md`
- Raw evidence: `re-workspace/reversed/ghidra-repair/` (17 binaries, 4.02M lines)

## 8. Verification ledger

| Claim | Evidence |
|---|---|
| Fixo source tree | embedded `__FILE__` paths in 4 binaries |
| Video algorithm steps | 125 trace (file,line,msg) triples |
| Atom 4CC set + weights | registry init code (FUN_1800013c0) |
| Sample-moov mechanism | GetSample UI + regroupfile traces + L185/L239/L248 |
| HWPX OpenSSL decrypt | hwpxInfo/opensslHwpx.cpp path + aesOperate |
| 7z next-header | 7zNextHeader.cpp paths in traces |
| OpenCV 2.4 static | C:\builds\2_4_PackSlave paths (527 refs) |
| Cloud repair assist | net/client.cpp in ImageRepair + AdobeRepair + ArchiveRepair trees |
