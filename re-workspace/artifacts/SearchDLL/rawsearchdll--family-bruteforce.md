# RAWSearchDLL Analyser Family: BruteForce-namespace analysers

**Namespace/prefix pattern**: `BruteForce`  
**Family description**: Frame-sync scanners for formats without internal indexes: audio (MP3/ADTS/APE), video containers (ASF/M2TS/MTS), documents (PDF/TIFF), CAD (DWG/DXF), EPS, FH11, FCPEvt, GIF. 'Brute force' = signature+structure walking without a directory index.  
**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)

## Class roster (23)

| Class | vftable refs (code weight) |
|---|---|
| `BruteForce::CADTSAnalyser` | 6 |
| `BruteForce::CADTSRawFileInfo` | 2 |
| `BruteForce::CAPEAnalyser` | 2 |
| `BruteForce::CAPERawFileInfo` | 2 |
| `BruteForce::CAsfAnalyser` | 2 |
| `BruteForce::CAsfRawFileInfo` | 2 |
| `BruteForce::CDWGAnalyser` | 2 |
| `BruteForce::CDWGRawInfo` | 2 |
| `BruteForce::CDXFAnalyser` | 6 |
| `BruteForce::CDXFRawFileInfo` | 2 |
| `BruteForce::CEPSAnalyser` | 3 |
| `BruteForce::CFCPEvtAnalyser` | 2 |
| `BruteForce::CFCPEvtFileInfo` | 2 |
| `BruteForce::CFH11Analyser` | 2 |
| `BruteForce::CGifAnalyser` | 2 |
| `BruteForce::CGifFileInfo` | 2 |
| `BruteForce::CM2TSAnalyser` | 5 |
| `BruteForce::CMTSAnalyser` | 5 |
| `BruteForce::JpegAnalyzer` | 4 |
| `BruteForce::MP3Analyzer` | 4 |
| `BruteForce::MovAnalyzer` | 3 |
| `BruteForce::PdfAnalyzer` | 2 |
| `BruteForce::TiffAnalyzer` | 2 |

## Notable decode facts

- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)
- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3

## Cross-links

- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`
- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)
