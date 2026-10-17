# RAWSearchDLL Analyser Family: Special/standalone classes + infrastructure

**Namespace/prefix pattern**: `CFile|AEP|CHFP|CHIK|COSP|CPOS|CGPX|CVCF|C7ZIP|CRaw|CRAW|CNeed|CRawFile|IRaw|ISpecial|CZero|CJsonObject|MemPool|XML`  
**Family description**: Un-namespaced modern analysers (AAC/AIF standalone naming, 7ZIP, GPX, VCF, AEP, HIK, OSP/POS, HFP) + engine infrastructure (CRawSearchController, IStorageDevice, test harness, tinyxml2/neb embedded libs).  
**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)

## Class roster (29)

| Class | vftable refs (code weight) |
|---|---|
| `AEPAnalyser` | 3 |
| `C7ZIPAnalyser` | 3 |
| `CFileAACAnalyzer` | 3 |
| `CFileAIFAnalyzer` | 4 |
| `CFileOggAnalyser` | 2 |
| `CGPXAnalyser` | 3 |
| `CHFPAnalyser` | 3 |
| `CHIKAnalyser` | 3 |
| `CJsonObject` | 0 |
| `CNeedRawMgr` | 2 |
| `COSPAnalyser` | 3 |
| `CPOSAnalyser` | 3 |
| `CRAWSearchController` | 3 |
| `CRawFileCellTestStorageDevice` | 112 |
| `CRawFileInfo` | 2 |
| `CVCFAnalyser` | 3 |
| `CZeroEndRawFileInfo` | 3 |
| `IRawFileAnalyser` | 224 |
| `ISpecialRawFileAnalyser` | 2 |
| `MemPool` | 0 |
| `MemPoolT` | 0 |
| `XMLAttribute` | 0 |
| `XMLComment` | 0 |
| `XMLDeclaration` | 0 |
| `XMLDocument` | 0 |
| `XMLElement` | 0 |
| `XMLNode` | 0 |
| `XMLText` | 0 |
| `XMLUnknown` | 0 |

## Notable decode facts

- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)
- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3

## Cross-links

- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`
- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)
