# CX3fWork Deep-Walk — Foveon/Sigma X3F RAW Repair (section grammar + embedded-JPEG salvage)

**Binary**: EUImgRepairFile.dll — trace-rich region (x3fWork.cpp, EasyLogging++ per-method)
**Evidence**: method-site census (8/5/2/6/12 sites across the section checkers), trace signatures with exact parameter types, X3F format spec knowledge cross-ref
**Role**: The deepest per-vendor RAW repair walk in the image-repair line — Sigma's X3F is a sectioned container; this artifact decodes which sections the repair validates and how salvage works.

---

## 1. The X3F container (format background for the decode)

X3F (Foveon X3 sensor, Sigma cameras) is a **sectioned format**: a file header (`FOVb` magic — the registry binds `Brance::X3FAnalyser` to it on the scan side) followed by a directory of sections with 4-character names. The canonical sections:

| Section | Content | Repair checker (trace-verified methods) |
|---|---|---|
| `SECi` | **info** — camera make/model, image parameters | `CheckSeciSectionByDirInfo(uint dirIndex, uint count)` (5 sites) + `SeciTypeFormatInfo(uint type)` (12 sites — the type-dispatch inside SECi entries) |
| `SECe` | EXIF metadata | handled in the generic `CheckSectionInfo` (6 sites) |
| `SECm` | **image data** (the sensor raw stream) | generic CheckSectionInfo + `CreateSrcFile` salvage |
| `SECp` | **preview/properties** (embedded JPEG preview) | `CheckSecpSectionByDirInfo(uint, uint)` (2 sites) |
| (`SECc`) | camera/extended info (variant sections exist per body firmware) | `CheckSeccSectionByDirInfo(uint, uint)` (8 sites — the heaviest checker) |

*(Section-name literals are compared numerically in code (no "SEC*" string literals — 4CC integer compares), consistent with the format's on-disk encoding.)*

## 2. The repair strategy (decoded from the method set)

1. **Directory-first validation**: every `Check*SectionByDirInfo` takes `(directory-index, count)` — the X3F's section **directory** (like ZIP's central directory) is walked entry-by-entry with per-section-type validation dispatching (SECi's `SeciTypeFormatInfo` decodes the type field of each info entry — 12 dispatch sites = the info-entry type taxonomy).
2. **Salvage path** (`CreateSrcFile`, 3 sites): extracts the readable payload (sections whose extents validate) into a source file for rebuild.
3. **Embedded-JPEG fallback** (`IsJpegData`, 2 sites + `CRafWork`-style build check): X3F carries a full-size JPEG preview in SECp — when the sensor stream (SECm) is unrecoverable, repair extracts the JPEG (the CScanJepgInfo-shared salvage backbone documented in the state-machines artifact).
4. **Camera identification** (`GetImageSrcMakeModel`, 2 sites): reads make/model from SECi — used both for repair-format dispatch and for result reporting ("which camera this file came from").
5. **Rebuild** (`CreateNewFile`, 6 sites): reassembles a valid X3F from validated sections, or a JPEG deliverable when only the preview survives.

## 3. Why X3F gets the deepest checker set

X3F is the only RAW in the set with a **directory-of-sections container** (most RAWs are TIFF-based or monolithic) — so it gets ZIP-like index-driven repair: validate directory → trust extents → rebuild. The 8-site SECc checker (heaviest) matches Sigma's firmware-variant sprawl (multiple SECc layouts across camera generations).

## 4. Cross-links

- Scan-side counterpart: `SearchDLL/rawsearchdll--analyser-registry-census.md` (FOVb magic → X3F chain)
- Shared JPEG salvage: `FileRepair/image-repair--state-machines.md` §5 (CScanJepgInfo)
- 31-format census + Work/Info architecture: same artifact §1
