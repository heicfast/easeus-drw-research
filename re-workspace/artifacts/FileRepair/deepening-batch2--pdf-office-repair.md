# Document Repair Deep-Dive — EuPDFRepairFile (xref/trailer synthesis) + EuOfficeRepairFile (OPC manifest rebuild + the Apple iWork IWA engine)

> Scope: the deepened, line-cited version of the deepening-batch-2 pass — the two document
> repair engines decoded at algorithm level. **Two new findings vs the first pass**:
> (1) the PDF repair's xref/trailer synthesis is fully decoded (canonical format strings
> byte-exact, `/Encrypt`-preserving); (2) EuOfficeRepairFile embeds a complete **Apple iWork
> (Numbers/Pages/Key) IWA repair subsystem** — `iwk::` ZIP kit + protobuf message archives
> (TSP/TST/TN namespaces) — which the first pass mis-attributed as a generic "protobuf
> descriptor engine".
> Binaries: EuPDFRepairFile (133,274 lines decompiled) + EuOfficeRepairFile (1,641,232 —
> largest in corpus). Source trees recovered: `D:\Fixo\01_Project\00_Source\_main\OfficeRepair\OfficeRepair\`
> (hwpxFileInfo.cpp, hwpxFileRepair.cpp …).

---

## 1. EuPDFRepairFile — PDF repair = xref/trailer re-synthesis (not object repair)

### 1.1 The document scanner (FUN @38180–38300) — char-level state machine

Single pass over the raw bytes, dispatch on the first character of each token:

| Lead char | Action (line-cited) |
|---|---|
| `%` / `e` | skip (comments / EOF marker) |
| `s` | match `stream` → FUN_0043b2a0 (stream extent parse) → skip `\r`+`\n` variants → record the stream extent via FUN_004622b0(len) into the extent list (+0x68) |
| `t` | `memcmp(buf,"trailer",7)` @38222 → FUN_00436df0 = trailer-dictionary parser |
| digit | `N 0 obj` parse (FUN_0046d730) → **track the maximum object number at this+200** (later becomes `/Size`) → parse dict + follow (FUN_004342c0) |
| `<` | dictionary parse (FUN_00439800) |

Progress is computed as `offset × 80 / file_size` (FUN_00433e10) — the 80-step progress
convention (image-repair state-machines §6's sibling).

### 1.2 /Root resolution (FUN_004342c0, @38860–38960)

1. Prefer the trailer's `/Root` reference: iterate the enumerated-object list; when
   `object_num(ref) == object_num(root_ref)` → adopt that object as the catalog (`this+0x38`).
2. **Fallback heuristic**: if no match → adopt the first/next entry — a truncated trailer
   still yields a usable catalog pointer.
3. `CAtlTraceProcess::IncRef` calls throughout — the engine is ATL/MFC-lineage (matches the
   MFC preview island: `CMFCRibbonProgressBar` @5951, `CMFCToolBarComboBoxButton`,
   `CPreviewView::PAGE_INFO` — the in-tool page-thumbnail previewer, separate from DRWUI's Qt).

### 1.3 xref table synthesis (FUN @67840–67960) — canonical PDF, byte-exact

The rebuild writes a **fresh classic xref** from the object offsets discovered in §1.1:

```
"0 1\n0000000000 65535 f\r\n"          ← the mandatory free-list head (line 67890)
"%d %d\n"                               ← subsection headers (first-obj, count)
"%010lld 00000 n\r\n"                   ← per-entry: 10-digit offset, gen 00000, in-use
                                         (lines 67903-67906; CRLF exact)
```

Generation numbers are zeroed (`00000`) and the max-seen generation tracked (`local_b8`).
**The repair does not relocate objects — it re-derives the cross-reference from where the
objects actually are**, which is why truncated-but-present PDFs become renderable again.

### 1.4 Trailer serialization (lines 67960–68005)

`"trailer\n"` + dictionary with, in order:
- `/Size` = maxGen+1 (FUN_004616d0)
- `/Root` = resolved catalog object ref
- `/ID` — **only when an ID array was recovered** (`this+0x44 != 0`)
- `/Encrypt` — **only when the caller passes the keep-encrypt flag AND the encrypt dict
  was recovered** (`param_2 != 0 && this+0x40 != 0`, line 67984) — the encryption dictionary
  is conditionally re-serialized so encrypted documents stay encrypted after repair
- then `"startxref\n%lld\n%%EOF"` (line 68003)

### 1.5 The structural keyword table (FUN_0046b0b0, @81900)

Exactly six tokens drive the tokenizer's structure decisions:
{`trailer`, `endobj`, `endstream`, `stream`, `startxref`, `xref`} — first-4-bytes `memcmp`
dispatch. The 150-name-operator census (`/AcroForm`, `/BleedBox`, `/ColorSpace`, `/Contents`,
`/CropBox`, `/Encrypt`, `/ExtGState` @36945, `/FontDescriptor` @37048, `/FontFile{,2,3}`
@37076, `/FirstChar`/`/LastChar`, `/Length{1,2,3}` …) drives the **resource-dictionary walk**
(§1.6), not the structure repair.

### 1.6 Resource-dictionary streaming walk (@36900–37100)

For each known resource key (`/XObject` @36928, `/ColorSpace` @36930, `/ExtGState` @36945,
`/Annots` @36947, `Link/A` @36950 …): build a character-source input adapter
(`make_input_adapter_character_source`) → parse the value object → `FUN_00440770(map, key,
value)` insert. Each key has its own reader functor — a typed per-resource decode table.

**Repair tier model** (matches the family philosophy): structure first (xref/trailer),
resources second (fonts/colorspaces are re-linked only if the container got fixed), content
streams left in place (their extents were preserved in §1.1's list).

## 2. EuOfficeRepairFile — three format families, one engine

### 2.1 ⭐ NEW: the Apple iWork IWA subsystem (the real purpose of the protobuf stack)

`iwk::` namespace (iWork Kit) — a **custom ZIP reader for iWork bundles**:

- `iwk::ZipFile` (@401243) with `ScanFileInfos` (@402551), `DecompressData` (@401448 —
  two-callback streaming: read-fn + write-fn), `DecompressFile(path, ZipFileInfo)`
  (@402336), `Crc32(path)` (@403176), `iwk::LocalFileHeader::GetExtraField(ushort,
  char*&, ushort&)` (@401186) — the extra-field accessor is where IWA's Snappy
  compression markers live.
- `iwk::iWorkFile::FindReference(google::protobuf::RepeatedPtrField<TSP::Reference>*,
  uint64)` (@406827) — reference-graph traversal inside protobuf messages.

The protobuf message families (RTTI + `__RTDynamicCast` to `google::protobuf::MessageLite`,
@407279+):

| Namespace | Messages (line-cited) | iWork domain |
|---|---|---|
| `TSP::` | `Reference` (@406827+), `SparseReferenceArray` (@413964), `DataStore` | store primitives (the object graph!) |
| `TST::` | `TableModelArchive` (@411061), `TableInfoArchive` (@412910), `CellStyleArchive` (@407578), `TableStyleArchive` (@407280), `SummaryModelArchive` (@413199), `SummaryCellVendorArchive` (@413316), `TileStorage`/`DataStore` (@414195) | tables (Numbers AND Pages tables) |
| `TN::` | `SheetArchive` (@412955), `SheetStyleArchive` (@408850), `ThemeArchive` (@414888) | Numbers sheets |
| `TSD::`/`TSA::` | drawing/style archives | shapes & styling |

**Reading**: the engine parses the iWork 2013+ IWA format (ZIP container + protobuf members
+ Snappy per-member compression) deeply enough to walk its object graph (references between
archives) — that is what "repair" means here: re-chain the reference graph and re-emit a
valid container, the same index-repair family as ZIP CD / MOV moov / PDF xref. The first-pass
claim "protobuf descriptors for its internal document model / schema-driven repair" is
**corrected**: the protobuf stack is the **Apple iWork format itself**, not an EaseUS
internal DSL.

### 2.2 OPC (OOXML) contract engine — manifest synthesis, byte-exact

- **[Content_Types].xml rebuild** (@122770–122900): entries are synthesized with
  `"<Default Extension=\"%s\" ContentType=\"%s\"/>"` (extension-typed parts) or
  `"<Override PartName=\"%s\" ContentType=\"%s\"/>"` (part-specific overrides) — sprintf
  into a 2KB buffer per line, selected by the extension-override flag. The content-type map
  is the RB-tree family (0x101-flagged nodes, §2 of the GIF walk) — same map template as the
  image repair's extent maps.
- **Relationship-type registry** (@3161–3208): the canonical
  `http://schemas.openxmlformats.org/officeDocument/2006/relationships/{vmlDrawing,
  ctrlProp, comments, officeDocument, styles, customXml}` URIs, each registered at init
  (thread-safe `_Init_thread_header` static-init pattern, @31495).
- **Part-name registry** (@31503–32042): `word/document`, `word/fontTable`, `word/header`,
  `word/footer`, `word/footnotes`, `word/endnotes`, `word/styles.xml`, `word/media/`
  (prefix strncmp @31679) — the docx part map; equivalent sets exist for xl/ppt (the
  "Target=/TargetMode=" strings of the first pass).
- **Typed-token parser** (@1393990–1396810): a recursive-descent reader whose error
  vocabulary is `"Expected identifier/double/integer/string, got: …"` — used for the
  JSON-ish metadata (repair manifests / iWork preview metadata).

### 2.3 HWPX (Korean Hangul) repair flow — the error-code contract

`bool RepairHwpxFile(const string&, const string&, const function<int(int,
RepairErrorCode, const char*)>&, const char*)` — trace strings @53503–53640
(`OfficeRepair\hwpxFileRepair.cpp` lines 0x10/0x2b):
- logs `"repair hwpx file start"` / `"\t repair hwpx file fail!"`
- progress/errors flow through the **`std::function` callback with a `RepairErrorCode`
  enum** — the same _MsgData-style progress contract as the archive/7z engine
  (`archive-repair--7z-engine.md`), unified across the repair product.
- `hwpxFileInfo.cpp` (three trace sites) = the container-info twin — the Work/Info duality
  again.

### 2.4 Scale facts

1.64M lines / largest decompilation in the corpus; source tree
`D:\Fixo\01_Project\00_Source\_main\OfficeRepair\OfficeRepair\` (the "Fixo" product line
build tree, cross-linked in image-repair--format-grammar.md); easylogging+ traces
(el::base::Writer @53560) shared with all repair binaries.

## 3. Cross-links

- Repair-chain master: `architecture/06-repair-chain.md` (document branch now complete)
- Index-repair pattern family: `SearchDLL/rawsearchdll--zip-analyser-carving.md` §5,
  video moov/mdat: `FileRepair/repair-architecture.md`
- The extent-map template family: `FileRepair/image-repair--gif-bmp-svg-tiff-walks.md` §5
- 7z sibling (same progress-callback contract): `archive-repair--7z-engine.md`
- HWP viewer chain: `hwp-pathchecker--module-decode.md`
- First-pass claims: superseded by this artifact (kept in git history)
