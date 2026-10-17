# Burn.dll — Disc Writer Engine (IMAPI2 wrapper: ISO/USB emergency-media burning)

**Binary**: PartitionRecovery/Burn.dll — 9,707-line decompilation (ghidra-partition); consumed by the PE_Tools media-builder flow (architecture/03 §4: "write ISO/USB (Burn.dll — IMAPI2)")
**Evidence**: function-name census (fun_* export-style names), string literals (CBurn error taxonomy), consumer chain from PE_Tools decode
**Role**: The disc-burning back-end that turns the built WinPE image into bootable media — including a REAL-TIME streaming burn mode.

---

## 1. API surface (function census)

**Standard burn flow**:
- `fun_WriteImageToCD` — the one-shot image burn (ISO → disc)
- `fun_WriteOpen`/`fun_WriteClose` — session management
- `fun_WriteGetProgress` — burn progress reporting (feeds the media-builder progress UI)
- `fun_AbortWrite` — cancellation
- `fun_GetSupportedWriteModes` — drive capability query
- `fun_WriteGetCurrBurnFileName` — current-file indicator for multi-file burns

**REAL-TIME streaming mode** (the interesting half):
- `fun_RealTimeWrite_Begin` / `_End` — real-time session bracket
- `fun_RealTimeWrite_CreateFile` / `_CloseFile` — create files ON the fly during the burn
- `fun_RealTimeWrite_SetEstimateTotalWriteSize` — pre-declare the total (multi-session bookkeeping)
- `fun_RealTimeWrite_GetDiscRemainCapacity` — capacity tracking while streaming

**Decoded**: besides post-build ISO burning, Burn.dll supports **writing files to disc as they are produced** (real-time packet/stream writing) — used when the media builder streams the WinPE payload directly to media without staging a full ISO first (or when appending files to already-built media — GetDiscRemainCapacity + SetEstimateTotalWriteSize is the multi-session append pattern).

## 2. Error taxonomy (string census)

`"CBurn Read track info error."` / `"CBurn Conv file start error."` / `"CBurn Conv file error."` — the class prefix **CBurn** + staged failures: track-info reads (disc state), conversion staging (file → burn image), write phase. Standard IMAPI2 workflow: IDiscFormat2Data + track query + staging.

## 3. Position in the emergency-media flow

```
PE_Tools.dll media builder:
  1. EuDownloader fetches WAIK objects (dlconfig.xml byte-ranges + MD5)
  2. stages WAIK tree (PEtools.xml)
  3. DISM mounts/customizes WINPE.WIM → injects BUILDPE payload + drivers (regdrv.reg)
  4. Burn.dll: WriteImageToCD (ISO/USB one-shot)  ← or RealTimeWrite_* streaming append
```

## 4. Cross-links

- Media builder master: `architecture/03-winpe-boot-environment.md` §4; WinPE payload: `WinPE/pe-payload-census--buildpe-easeus-x64.md`
- Downloader: per-binary `EuDownloader.md`; per-binary `Burn.md` (generator-stamped identity)
