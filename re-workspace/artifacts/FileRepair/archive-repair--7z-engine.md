# EUArchiveRepair.exe — 7z Archive Repair Engine (Fixo ArchiveRepair module)

**Binary**: EUArchiveRepair.exe — 117,834-line Ghidra decompilation (ghidra-repair), Fixo build tree (`D:\Fixo\01_Project\00_Source\_main\ArchiveRepair\`)
**Evidence**: trace strings (Fixo source paths + full method signatures), class census, embedded SDK identity string
**Role**: The archive-repair tool of the repair line — dedicated 7z repair with password-aware recovery, built on a pinned 7-Zip SDK + a from-scratch next-header repair engine.

---

## 1. Provenance and architecture

- **Fixo product line** (same D:\Fixo tree as image/video repair) — source files: `ArchiveRepair\7z\archive7z.cpp`, `ArchiveRepair\7z\7zNextHeader.cpp`
- **Embedded SDK fingerprint**: `"961c151d2e87f2686a955a9be24d316f1362bf21 3.10.5"` — this is the **libarchive-style/7-Zip SHA-version string** (git-commit + version), pinning the SDK generation; plus `BitPropVariant` errors = **Bit7z / 7-Zip C++ wrapper** in use (bit7z's property-variant type), loaded via **`7z.dll` at runtime** ("Failed to load the 7-zip library")
- Test fixtures referenced: `/1.rar`, `/1.zip`, `/t.7z` (dev paths — ZIP/RAR handled via the shared repair pipeline's other modules; this binary's engine code is the 7z deep repair)

## 2. The two-class repair engine

**`CArchive7zInfo`** (the IImageInfo-family orchestrator for 7z):
| Method (trace-verified signature) | Role |
|---|---|
| `AnalysisData(void*, srcPath, dstPath, fn<MsgData>, out&, bool)` | full analysis pass over the damaged archive — streams progress via `std::function<int(const _MsgData&)>` callback (the UI progress contract) |
| `AnalysisSaveData(void*, src, dst, another, fn, out&)` | the save/repair write pass (variant of AnalysisData with an extra path — extract-to vs rebuild) |
| `AnalysisFileHeader()` | header structure validation |
| `CheckPassWord(str)` / `CheckPassWordByData(str)` | **password-aware repair**: validates candidate password via header crypto (CheckPassWord) or via body data CRC (ByData) — pairs with the shipped `Dict` brute-force dictionary (config-files artifact) |
| `GetDataCrc()` | CRC verification of extracted data ("CRC failed" path) |
| `GetArchiveFileDataInfo()` | per-entry inventory for the results list |
| `HanleHeaderDataInfo()` *(vendor typo preserved)*, `ScanNexHeaderDataFlage()` *(sic)* | header flag walking |

**`C7zNextHeaderInfo`** — the novel part (7z-specific):
| Method | Role |
|---|---|
| `ReadNextHeaderPackedStreams()` | walks the **end-of-archive "next header"** structure (7z's footer index) even when damaged — this is the recovery-grade replacement for trusting the footer blindly |
| `HandFolderInfo(uint&, u64)` | folder (codec-chain group) reconstruction |
| `CheckSubStreamsEnd(u64&, uint)` | substream enumeration bounds-check |
| Error-tagged paths: `ARCHIVE_7Z_STRUCTURE::kSubStreamsInfo ERROR` — the code names 7z format constants (`kSubStreamsInfo` = property IDs from the 7z spec) |

**Design**: 7z's directory ("next header") sits at the END of the file and is the most damage-prone part (truncate a download and it's gone). The repair engine scans/validates the next-header packed streams by walking folders and substreams with explicit bounds checks, then re-derives extractable entries — for entries whose CRC verifies, repair succeeds; for password-protected archives, the Dict/password path validates candidates first.

## 3. Password error taxonomy (user-facing strings)

- `"7z check file name pass word error"` — filename encryption (7z's `-mhe` mode: names encrypted, header password needed)
- `"7z check file data extract pass word error"` — body decryption failure
- `"A password is required but none was provided."` — bit7z SDK message surfacing

## 4. UI/progress contract

Progress flows through `std::function<int(const _MsgData&)>` callbacks — the same `_MsgData` IPC family used across the Fixo repair tools (window-IPC invocation chain per image-repair grammar artifact §invocation): DRWUI/EURepairHost launches this exe and receives typed progress messages.

## 5. Cross-links

- Repair chain overview: `architecture/06-repair-chain.md`
- Sister engines: `FileRepair/image-repair--format-grammar.md` + `--state-machines.md` (video: `FileRepair/` video artifacts)
- Password dictionary: `config-files/config-data-reference.md` (Dict = 228 entries)
- ZIP carving (scan side, different product path): `SearchDLL/rawsearchdll--zip-analyser-carving.md`
