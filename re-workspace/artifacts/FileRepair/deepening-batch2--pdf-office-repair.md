# Thin-Binary Deepening Batch 2 — EuPDFRepairFile (PDF object-graph repair) + EuOfficeRepairFile (1.6M-line Office/HWPX repair engine)

**Binaries**: EuPDFRepairFile (133,274-line decompilation), EuOfficeRepairFile (1,641,232 lines — the LARGEST single decompilation in the corpus)
**Method**: PDF name-operator census, MFC class census, protobuf-engine signature detection, error-string taxonomy
**Role**: The document-repair engines decoded — PDF via its object model, Office via a full embedded document-format stack.

---

## 1. EuPDFRepairFile — PDF repair = object-graph reconstruction

- **150 PDF name-operator literals** in the binary — the repair engine speaks native PDF object names: `/AcroForm`, `/BleedBox`, `/ColorSpace`, `/Contents`, `/CropBox`, `/Encrypt`, `/ExtGState`, `/FontDescriptor`, `/FontFile{,2,3}` (Type1/TrueType/CFF font programs), `/FirstChar`/`/LastChar`, `/Length{1,2,3}`, `.Resource`…
- **Decoded**: repair walks the PDF's indirect-object graph (trailer → xref → pages → resources → fonts), validates each object's dictionary against the name grammar above, and rebuilds broken xref/streams — the document equivalent of the video moov/mdat regroup and ZIP central-directory walk (same family of index-repair patterns)
- **MFC UI classes in the binary** (CCheckListBox, CMFCRibbonProgressBar, CMFCToolBarComboBoxButton, CPreviewView::PAGE_INFO) — the repair tool hosts a native MFC previewer (page thumbnails/rendering of the repaired PDF before save) — a separate UI island from DRWUI's Qt
- `/Encrypt` handling — encrypted-PDF repair path (pairs with the Dict password brute-force on the archive side)

## 2. EuOfficeRepairFile — the 1.6M-line giant (Office + HWPX + protobuf stack)

- **Largest decompilation in the corpus** (1.64M lines — bigger than DRWUI's 2.38M-line claim adjusted for its 119K functions; this one is pure repair logic)
- **HWP gate**: "NOT HWP Document File" — the Korean Hangul format handled here (with the HwpFilePathChecker module on the viewer side)
- **OOXML contract engine**: `ContentType=`, `Target=`, `TargetMode=`, "by extension", "by field" — full **OPC (Open Packaging Conventions)** validation: content-types manifest, relationship targets, extension-vs-field typing
- **Embedded protocol-buffer engine** (637 proto/Serializer signatures): the error strings are **protobuf compiler/runtime messages** ("cannot be defined before the completion of the", "conflicts with an existing enum type/field", "cannot be required", "missing required fields") — the Office repair uses **protobuf descriptors for its internal document model** (or embeds protobuf's parser for .proto-driven format definitions — a schema-driven repair engine where format grammars are declared, not hand-coded!)
- **XML validation**: "Comment started here", "Expected/Actual", "Outdent() without matching Indent()" — a full XML/DTD-ish checker (the Indent/Outdent pair = a streaming XML parser's API)
- "CheckFileVersion FAIL" — version gating per document

**Decoded**: the Office repair line is schema-driven — OOXML formats described via relationship/content-type manifests + protobuf-described internal models + XML structure checks. That's how one engine covers docx/xlsx/pptx (+hwpx): the per-format grammar lives in data, the engine is generic.

## 3. Cross-links

- Repair chain master: `architecture/06-repair-chain.md`; 7z sibling: `archive-repair--7z-engine.md`
- Index-repair pattern family (ZIP CD / MOV moov / PDF xref): `SearchDLL/rawsearchdll--zip-analyser-carving.md` §5
- HWP viewer chain: `FileRepair/hwp-pathchecker--module-decode.md`
- Fixo build tree: `image-repair--format-grammar.md` (this artifact adds the document-repair branch)
