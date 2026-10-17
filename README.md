# Data Recovery Wizard — Research Repository

Complete research of Data Recovery Wizard ( Windows
data-recovery app). Everything in `re-workspace/` and `architecture/` is derived from
the original binaries in `og-codebase/` via multi-tool static RE (Ghidra headless, Radare2/
rabin2, capa, FLOSS, RetDec, pefile, RTTI extraction) executed locally and on GitHub Actions
CI runners, with every claim traced to raw evidence.

## Repository layout

| Directory | Contents |
|---|---|
| `og-codebase/` | Original codebase |
| `re-workspace/` | Per-target RE work: `raw/` references, `reversed/` (decompilations, strings, capa, rabin2, RetDec), `artifacts/` (deep .md documentation), inventories |
| `architecture/` | Top-level cross-linked knowledge (numbered docs + this index) |
| `.github/workflows/` | CI RE pipeline (Ghidra headless batch decompiler, multi-tool static analyzer) |

## Start here (reading order)

1. `architecture/00-INDEX.md` — master index & progress
2. `architecture/01-build-tree-intelligence.md` — what the binaries reveal about the vendor's internal build system
3. `architecture/02-kernel-driver-architecture.md` — the 7 kernel drivers
4. `architecture/03-winpe-boot-environment.md` — bootable media internals
5. `architecture/04-recovery-workflow.md` — **the complete step-by-step recovery workflow**
6. `architecture/05-scan-engine-architecture.md` — the 9 FS engines + RAW carving + tree building
7. `architecture/06-repair-chain.md` — file repair subsystem
8. `architecture/07-user-flow-uiux.md` — what the user sees, screen by screen

## Scale of extraction (updated continuously)

- ~90 binaries fully decompiled (Ghidra headless): **>10 million lines of C**
- 6,903 C++ class names recovered via RTTI type descriptors
- 55+ trace-point extractions with internal source paths (vendor build trees mapped)
- 7 kernel drivers fully reversed (IOCTL contracts, dispatch, MDL IO)
- Full config/data-format decodes (raw_signs.json, FileFilter.xml, .rsf, NasModel.xml, dlconfig.xml…)

## Method & integrity

- Local toolchain: Ghidra 11.3.2 + JDK21, Radare2 5.9.8, RetDec 5.0, capa+FLOSS, pefile/dnfile,
  diec, ilspycmd (2 CPU / no-sudo box).
- Heavy lifting offloaded to GitHub Actions (ubuntu runners, per-batch Ghidra + multitool
  jobs, artifacts downloaded back into `re-workspace/reversed/`).
- Every artifact carries an evidence/verification section; hypotheses are labeled as such.
- No deobfuscation-by-guessing: class names come from RTTI, function semantics from
  decompiled code, UI copy from shipped string tables.
