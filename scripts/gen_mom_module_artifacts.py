#!/usr/bin/env python3
"""Generate detailed per-.mo-module artifacts from ghidra-mo decompilations + RTTI + strings.
Each artifact: identity, RTTI class table, trace strings (source paths/functions),
key function census, interface roles, cross-links. Output: re-workspace/artifacts/MOM-modules/"""
import json, os, re, glob
from collections import Counter

WS = "/home/z/my-project/workspace"
MO = f"{WS}/re-workspace/reversed/ghidra-mo"
RTTI = json.load(open(f"{WS}/re-workspace/rtti_classes.json"))
OUT = f"{WS}/re-workspace/artifacts/MOM-modules"
os.makedirs(OUT, exist_ok=True)

# strings from the multitool batch if present
MT = f"{WS}/re-workspace/reversed/ci-multitool/partition"

ROLE_HINTS = {
    "NTFSLib": ("NTFS on-disk structure library", "MFT records, attributes, runlists for the partition-recovery side (separate from NTFSSearchDLL's engine: this is the PartitionRecovery monorepo copy)"),
    "NTFSUtil": ("NTFS utility layer", "high-level NTFS queries over NTFSLib (file paths, attribute walking)"),
    "NTFSFileSystemAnalyser": ("NTFS filesystem analyser", "IFSAnalyser implementation for NTFS — scans a found partition and reconstructs its file tree for partition-recovery verdicts"),
    "FATFileSystemAnalyser": ("FAT filesystem analyser", "IFSAnalyser for FAT12/16/32"),
    "ExFatFileSystemAnalyser": ("exFAT filesystem analyser", "IFSAnalyser for exFAT"),
    "ExtFileSystemAnalyser": ("EXT filesystem analyser", "IFSAnalyser for ext2/3/4"),
    "RefsFileSystemAnalyser": ("ReFS filesystem analyser", "IFSAnalyser for ReFS (MSB structures)"),
    "FileSystemAnalyser": ("FS analyser framework", "the IFSAnalyser interface + shared analyser logic"),
    "FileSystem": ("filesystem abstraction", "volume/file abstraction layer"),
    "FileSystemCheck": ("FS health checking", "validates found partitions' filesystem consistency"),
    "FatLib": ("FAT structure library", "BPB/FAT table/dir entry primitives"),
    "FatFormat": ("FAT formatting", "partition formatting support (EPM heritage)"),
    "Partition": ("partition model", "partition objects + table parsing (MBR/GPT)"),
    "LdmManager": ("LDM dynamic disks", "Windows Logical Disk Manager — dynamic disk config parsing"),
    "RegLib": ("registry HIVE parser", "offline registry hives — reads Windows state without booting it"),
    "CheckVersion": ("Windows installation detection", "finds installed Windowses in offline hives for boot repair"),
    "EFIBoot": ("EFI/BCD boot management", "EFI NVRAM entries, BCD stores, boot entry repair"),
    "Device": ("device model", "disk/partition device objects"),
    "DeviceManager": ("device manager", "device enumeration/coordination for the module system"),
    "DeviceAdapter": ("device adapter", "adapts Win32 devices to the MOM device model"),
    "Config": ("module config", "MOM module configuration persistence"),
    "Common": ("shared common", "shared utilities for the module set"),
    "Error": ("error model", "error codes/objects shared across modules"),
    "Log": ("logging", "module-side logging sink (EPMLOG)"),
    "Thread": ("threading", "worker-thread infrastructure for modules"),
    "Fixup": ("partition-table fixup", "repairs damaged partition tables (write-side; read-side = analysers)"),
    "Mom": ("MOM core client", "Module Object Model client-side glue"),
    "CallbackOperator": ("callback framework", "MOM event/callback operators"),
    "PartitionRecoveryD": ("partition recovery driver module", "the orchestrating module of the lost-partition scan"),
    "bitlockerhelp": ("BitLocker helper", "BitLocker detection/unlock assistance in the module system"),
}

for f in sorted(glob.glob(f"{MO}/*_decompiled.c")):
    base = os.path.basename(f).replace("_decompiled.c", "")
    src = open(f, encoding="utf-8", errors="replace").read()
    lines = src.count("\n")
    fns = []
    ftxt = f.replace("_decompiled.c", "_functions.txt")
    if os.path.exists(ftxt):
        with open(ftxt, encoding="utf-8", errors="replace") as fh:
            fns = [l.split("\t")[1] if "\t" in l else l.strip() for l in fh if l.strip() and l[:1].isdigit()]
    # RTTI classes
    rtti = RTTI.get(f"PartitionRecovery/{base}.mo", RTTI.get(f"{base}.mo", RTTI.get(base, [])))
    # trace strings: file paths + __FUNCTION__ traces
    paths = sorted(set(re.findall(r'[A-Za-z]:\\[\\\w\-.+ ]+\.(?:cpp|h|c|rc)', src)))
    funcsigs = sorted(set(re.findall(r'"[A-Za-z_][\w:~<>]*(?:\([^)]*\))?"\s*(?:,\s*0x[0-9a-f]+)?\)', src)))
    tracy = [t.strip('"') for t in funcsigs if re.search(r'::|\)\s*$', t.strip('"'))][:0]  # skip noise
    # interesting string literals (windows paths, formats, registry, magic words)
    strs = re.findall(r'"((?:[A-Za-z]:\\|\\\\|\.{0,2}[\\/]?[A-Za-z0-9_\- .]+\.(?:dll|exe|sys|mo|log|ini|xml|dat|bin|hive))[^"]{0,60})"', src)
    strs = sorted(set(strs))[:25]
    # vftable classes in code
    vfts = Counter(re.findall(r'(\w+)::vftable', src))
    role, roletxt = ROLE_HINTS.get(base, ("MOM module", "role TBD — see mo-module-map"))
    rtti_line = ", ".join(rtti[:25]) if rtti else "*(none — C-style module or stripped)*"
    L = []
    L.append(f"# MOM Module: {base}.mo — {role}\n")
    L.append(f"**Role in system**: {roletxt}.  ")
    L.append(f"**Decompilation**: `re-workspace/reversed/ghidra-mo/{base}_decompiled.c` — {lines:,} lines, {len(fns):,} functions.  ")
    L.append(f"**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).\n")
    L.append("## RTTI classes\n")
    L.append(rtti_line + ("\n" if len(rtti) > 25 else ""))
    if len(rtti) > 25: L.append(f"*(+{len(rtti)-25} more)*\n")
    L.append("## Vftable-instantiated classes (code census)\n")
    for name, n in vfts.most_common(15):
        L.append(f"- `{name}` ×{n}")
    if not vfts: L.append("- *(no RTTI vftables in decompiled output)*")
    L.append("\n## Source-file trace strings (embedded build paths)\n")
    for p in paths[:20]: L.append(f"- `{p}`")
    if not paths: L.append("- *(no path strings — release build without trace)*")
    L.append("\n## Notable string evidence\n")
    for s in strs: L.append(f"- `{s}`")
    if not strs: L.append("- *(no file/registry literals extracted)*")
    L.append("\n## Function census (top-level, first 30)\n")
    for fn in (fns[:30] if fns else ["*(see functions.txt)*"]):
        L.append(f"- `{fn[:110]}`")
    L.append("\n## Cross-links\n")
    L.append("- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`")
    L.append("- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family")
    L.append("- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`")
    with open(f"{OUT}/{base}.md", "w") as fh:
        fh.write("\n".join(L) + "\n")
    print(f"{base}.md: {lines} lines, {len(fns)} fns, {len(rtti)} rtti, {len(vfts)} vfts, {len(paths)} paths")
