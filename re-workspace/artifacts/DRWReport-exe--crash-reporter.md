# DRWReport.exe — Crash Reporter (XCrashReport-based)

> Binary: og-codebase/DRWReport.exe — 19,008 functions / 612,091 lines decompiled
> (`re-workspace/reversed/ghidra-core/DRWReport_*`). PDB path embedded:
> `E:\AWork\DRW_VS17_Main\DRWIntelligentScan\DRWReport\Release\XCrashReport.pdb`

## Provenance (what it really is)

DRWReport is a customized build of **XCrashReport** — the well-known CodeProject crash-handler
library (Hans Dietrich). Ground truth:
- PDB name: `XCrashReport.pdb` under `DRW_VS17_Main\DRWIntelligentScan\DRWReport\`
  (VS2017-era main solution; `E:\AWork\` is the same drive as the activation product's
  `h:\awork\` — "AWork" = shared work tree convention).
- Registry residue: `HKCU\Software\CodeProject\XCrashReportTest`.
- MFC + BCGSoft/CMFC ribbon class inventory (the 614 RTTI classes are mostly MFC/BCG
  chrome — the actual crash logic is a small fraction).

## Role in the DRW supervisor chain

```
DRW.exe (DRWLoader watchdog)
  on DRW_Crash_{GUID} / DRW_Memory_Crash_{GUID}:
    launch DRWReport.exe <elapsed> <error-code> <result-json>
      ├─ XCrashReport engine: collect crash info from the faulted DRWUI process
      ├─ dumps: DRWDump0.DMP / DRWDump1.DMP (rotating pair, app dir)
      ├─ report UI (MFC): error details, "Serial Number: %s", send options
      ├─ upload path: send_dmp_with_aliyun.exe (AliyunWrap/OSS upload)
      └─ after DRWReport exits → DRWLoader restarts DRWUI (supervisor loop)
```

- DRWReport.ini configures reporting behavior (present in BUILDPE drop too — crash
  handling also active in the WinPE environment).
- The "Elapsed/Error/Result JSON" handoff (from DRWLoader analysis) feeds crash context
  into the report (how long the scan ran, what error occurred, what result state).
- MAPISendMail import = legacy email-submission option from XCrashReport's feature set.

## Why this matters for the architecture

- The supervisor trio (DRWLoader → DRWUI → DRWReport) makes the product
  crash-resilient: a 119K-function Qt app that never takes the whole recovery session
  down — sessions (.rsf) survive, restarts resume.
- Crash dumps + Aliyun upload = vendor-side failure telemetry (which scan engines crash
  on which disk layouts), feeding the QA loop visible in the trace strings.

## Cross-links

- Launcher: `artifacts/DRW-exe--launcher.md` (watchdog + restart loop)
- Upload helper: `re-workspace/artifacts/per-binary/send_dmp_with_aliyun.md`, AliyunWrap
- Licensing surfaces: `artifacts/Licensing/licensing-activation-chain.md`

## Confidence

PDB path, registry key, dump names, and class inventory are byte-exact. The supervisor
interaction model is from the decompiled DRWLoader flow (previous stage) — consistent with
XCrashReport's documented command-line contract.
