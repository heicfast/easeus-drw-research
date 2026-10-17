# RAWSearchDLL Analyser Family: RawSpeed-namespace analysers

**Namespace/prefix pattern**: `RawSpeed`  
**Family description**: Archive/indexed formats in RawSpeed-library naming style (TAR/RAR/SIT/GZ/CPT) plus document containers (HTML/RTF/PNG/PSP/OneNote/MDB/Dbx/New3DS/Wpg). Index-first carving school.  
**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)

## Class roster (15)

| Class | vftable refs (code weight) |
|---|---|
| `RawSpeed::CMDBAnalyser` | 2 |
| `RawSpeed::CPTAnalyser` | 2 |
| `RawSpeed::DbxAnalyser` | 4 |
| `RawSpeed::GZAnalyzer` | 2 |
| `RawSpeed::HTMLAnalyser` | 2 |
| `RawSpeed::MIDAnalyser` | 2 |
| `RawSpeed::New3DSAnalyser` | 2 |
| `RawSpeed::OneAnalyser` | 2 |
| `RawSpeed::PNGAnalyser` | 2 |
| `RawSpeed::PSPAnalyser` | 2 |
| `RawSpeed::RARAnalyser` | 2 |
| `RawSpeed::RTFAnalyser` | 2 |
| `RawSpeed::SITAnalyser` | 2 |
| `RawSpeed::TARAnalyser` | 4 |
| `RawSpeed::WpgAnalyser` | 2 |

## Notable decode facts

- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)
- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3

## Cross-links

- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`
- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)
