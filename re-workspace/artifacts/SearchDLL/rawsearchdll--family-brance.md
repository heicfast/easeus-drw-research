# RAWSearchDLL Analyser Family: Brance-namespace analysers

**Namespace/prefix pattern**: `Brance`  
**Family description**: Media/Apple-ecosystem formats by developer 'Brance': CRW, DMG (bzip2), FLV, LZH, MPG, MXF, OGG, RIFF, RM_RMVB, SVG, X3F (Foveon) + OfficeTagFromXML.  
**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)

## Class roster (12)

| Class | vftable refs (code weight) |
|---|---|
| `Brance::CRWAnalyser` | 2 |
| `Brance::DMGAnalyser` | 2 |
| `Brance::FLVAnalyser` | 2 |
| `Brance::LZHAnalyser` | 2 |
| `Brance::MPGAnalyser` | 2 |
| `Brance::MXFAnalyser` | 2 |
| `Brance::OGGAnalyser` | 2 |
| `Brance::OfficeTagFromXML` | 3 |
| `Brance::RIFFAnalyser` | 2 |
| `Brance::RM_RMVBAnalyser` | 2 |
| `Brance::SVGAnalyser` | 2 |
| `Brance::X3FAnalyser` | 2 |

## Notable decode facts

- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)
- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3

## Cross-links

- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`
- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)
