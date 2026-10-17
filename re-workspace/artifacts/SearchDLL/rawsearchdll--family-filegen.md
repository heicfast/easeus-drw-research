# RAWSearchDLL Analyser Family: First-generation File*Analyser family

**Namespace/prefix pattern**: `File`  
**Family description**: The original flat-named analysers (FileJPG…FileZIP): dual role — primary analysers for their formats AND fallback-chain validators for the modern generation.  
**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)

## Class roster (47)

| Class | vftable refs (code weight) |
|---|---|
| `File3DSAnalyser` | 2 |
| `File3GPAnalyser` | 3 |
| `FileAUAnalyser` | 2 |
| `FileBMPAnalyser` | 2 |
| `FileCABAnalyser` | 3 |
| `FileCHMAnalyser` | 2 |
| `FileCPTAnalyser` | 2 |
| `FileCRWAnalyser` | 2 |
| `FileDMGAnalyser` | 2 |
| `FileEMFAnalyser` | 3 |
| `FileFCPEVENTAnalyser` | 2 |
| `FileFLVAnalyser` | 2 |
| `FileGZAnalyser` | 2 |
| `FileHLPAnalyser` | 2 |
| `FileHTMAnalyser` | 2 |
| `FileICOAnalyser` | 3 |
| `FileJPGAnalyser` | 2 |
| `FileLZHAnalyser` | 3 |
| `FileLowDocAnalyser` | 3 |
| `FileMDBAnalyser` | 2 |
| `FileMIDAnalyser` | 2 |
| `FileMKVAnalyser` | 2 |
| `FileMNYAnalyser` | 2 |
| `FileMP3Analyser` | 2 |
| `FileMPGAnalyser` | 2 |
| `FileMRWAnalyser` | 2 |
| `FileOLEAnalyser` | 2 |
| `FileONEAnalyser` | 2 |
| `FilePDFAnalyser` | 2 |
| `FilePNGAnalyser` | 2 |
| `FilePSDAnalyser` | 2 |
| `FilePSPAnalyser` | 2 |
| `FilePSTAnalyser` | 2 |
| `FileRARAnalyser` | 2 |
| `FileRIFFAnalyser` | 2 |
| `FileRM_RMVBAnalyser` | 2 |
| `FileRTFAnalyser` | 2 |
| `FileSITAnalyser` | 2 |
| `FileSVGAnalyser` | 2 |
| `FileSWFAnalyser` | 3 |
| `FileTARAnalyser` | 3 |
| `FileTIFAnalyser` | 2 |
| `FileTTFAnalyser` | 2 |
| `FileWMFAnalyser` | 3 |
| `FileWPDAnalyser` | 2 |
| `FileX3FAnalyser` | 2 |
| `FileZIPAnalyser` | 4 |

## Notable decode facts

- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)
- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3

## Cross-links

- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`
- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)
