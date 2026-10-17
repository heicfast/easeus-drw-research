# RAWSearchDLL Analyser Family: RawFormat_xjq-namespace analysers

**Namespace/prefix pattern**: `RawFormat_xjq`  
**Family description**: Newest-generation formats by developer 'xjq': HEIC, JP2, M1V, MOBI + CommonRaw (shared RAW-photo base).  
**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)

## Class roster (5)

| Class | vftable refs (code weight) |
|---|---|
| `RawFormat_xjq::CommonRawAnalyser` | 4 |
| `RawFormat_xjq::HEICAnalyser` | 3 |
| `RawFormat_xjq::JP2Analyser` | 3 |
| `RawFormat_xjq::M1VAnalyser` | 3 |
| `RawFormat_xjq::MOBIAnalyser` | 3 |

## Notable decode facts

- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)
- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3

## Cross-links

- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`
- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)
