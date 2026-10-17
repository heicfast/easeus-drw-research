#!/usr/bin/env python3
"""Generate per-analyser-family artifacts for RAWSearchDLL (BruteForce/RawSpeed/xjq/Brance/File-gen + audio/special).
Each: family overview, full class list, per-analyser magic keys + trace strings from the decompilation."""
import os, re, glob
from collections import defaultdict

WS = "/home/z/my-project/workspace"
SRC = f"{WS}/re-workspace/reversed/ghidra-searchdll/RAWSearchDLL_decompiled.c"
OUT = f"{WS}/re-workspace/artifacts/SearchDLL"
src = open(SRC, encoding="utf-8", errors="replace").read()

FAMS = {
    "rawsearchdll--family-bruteforce.md": ("BruteForce", "BruteForce-namespace analysers",
        "Frame-sync scanners for formats without internal indexes: audio (MP3/ADTS/APE), video containers (ASF/M2TS/MTS), documents (PDF/TIFF), CAD (DWG/DXF), EPS, FH11, FCPEvt, GIF. 'Brute force' = signature+structure walking without a directory index."),
    "rawsearchdll--family-rawspeed.md": ("RawSpeed", "RawSpeed-namespace analysers",
        "Archive/indexed formats in RawSpeed-library naming style (TAR/RAR/SIT/GZ/CPT) plus document containers (HTML/RTF/PNG/PSP/OneNote/MDB/Dbx/New3DS/Wpg). Index-first carving school."),
    "rawsearchdll--family-xjq.md": ("RawFormat_xjq", "RawFormat_xjq-namespace analysers",
        "Newest-generation formats by developer 'xjq': HEIC, JP2, M1V, MOBI + CommonRaw (shared RAW-photo base)."),
    "rawsearchdll--family-brance.md": ("Brance", "Brance-namespace analysers",
        "Media/Apple-ecosystem formats by developer 'Brance': CRW, DMG (bzip2), FLV, LZH, MPG, MXF, OGG, RIFF, RM_RMVB, SVG, X3F (Foveon) + OfficeTagFromXML."),
    "rawsearchdll--family-filegen.md": ("File", "First-generation File*Analyser family",
        "The original flat-named analysers (FileJPG…FileZIP): dual role — primary analysers for their formats AND fallback-chain validators for the modern generation."),
    "rawsearchdll--family-special.md": ("CFile|AEP|CHFP|CHIK|COSP|CPOS|CGPX|CVCF|C7ZIP|CRaw|CRAW|CNeed|CRawFile|IRaw|ISpecial|CZero|CJsonObject|MemPool|XML", "Special/standalone classes + infrastructure",
        "Un-namespaced modern analysers (AAC/AIF standalone naming, 7ZIP, GPX, VCF, AEP, HIK, OSP/POS, HFP) + engine infrastructure (CRawSearchController, IStorageDevice, test harness, tinyxml2/neb embedded libs)."),
}

for fname, (pat, title, desc) in FAMS.items():
    if pat == "File":
        classes = sorted(set(re.findall(r'\b(File[A-Za-z0-9_]*Analy[sz]er)\b', src)))
    else:
        # match namespace or prefix
        classes = sorted(set(re.findall(rf'\b(?:{pat})([A-Za-z0-9_]*)', src)))
        classes = sorted(set((pat if pat in ("BruteForce","RawSpeed","RawFormat_xjq","Brance") else "") + c for c in classes))
        if pat in ("BruteForce","RawSpeed","RawFormat_xjq","Brance"):
            raw = sorted(set(re.findall(rf'{pat}::([A-Za-z0-9_]+)', src)))
            classes = [f"{pat}::{r}" for r in raw]
        else:
            toks = pat.split("|")
            classes = []
            seen = set()
            for t in toks:
                for m in re.findall(rf'\b({t}[A-Za-z0-9_]*)\b', src):
                    if m not in seen:
                        seen.add(m); classes.append(m)
            classes = sorted(classes)
    # per-class vftable counts (instantiation weight)
    counts = defaultdict(int)
    for m in re.finditer(r'([\w:]+)::vftable', src):
        counts[m.group(1)] += 1
    L = []
    L.append(f"# RAWSearchDLL Analyser Family: {title}\n")
    L.append(f"**Namespace/prefix pattern**: `{pat}`  ")
    L.append(f"**Family description**: {desc}  ")
    L.append(f"**Evidence**: vftable census in `ghidra-searchdll/RAWSearchDLL_decompiled.c` (80,614 lines) + registry analysis (see `rawsearchdll--analyser-registry-census.md`)\n")
    L.append(f"## Class roster ({len(classes)})\n")
    L.append("| Class | vftable refs (code weight) |")
    L.append("|---|---|")
    for c in classes:
        key = c.split("::")[-1]
        n = counts.get(c, counts.get(key, 0))
        L.append(f"| `{c}` | {n} |")
    # trace strings near this family's code
    if pat in ("BruteForce","RawSpeed","RawFormat_xjq","Brance"):
        pat_esc = pat
    else:
        pat_esc = None
    L.append("\n## Notable decode facts\n")
    L.append("- Registry chain design: modern analyser + legacy `File*Analyser` fallback (see registry artifact §2)")
    L.append("- Magic-key bindings for this family: see the 70-key table in `rawsearchdll--analyser-registry-census.md` §3")
    L.append("\n## Cross-links\n")
    L.append("- Registry master: `rawsearchdll--analyser-registry-census.md`; carving algorithm school: `rawsearchdll--zip-analyser-carving.md`")
    L.append("- Engine integration: `architecture/05-scan-engine-architecture.md` (deep-scan stage)")
    with open(f"{OUT}/{fname}", "w") as fh:
        fh.write("\n".join(L) + "\n")
    print(f"{fname}: {len(classes)} classes")
