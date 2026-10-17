#!/usr/bin/env python3
"""Generate per-binary RE artifacts from inventories + batch reports + reversed data.
Creates re-workspace/artifacts/per-binary/<safe-name>.md for every decompiled target."""
import json, os, re, glob, hashlib
from collections import defaultdict

WS = "/home/z/my-project/workspace"
REW = f"{WS}/re-workspace"
INV = json.load(open(f"{REW}/inventory.json"))
INV_BY_REL = {it["rel"]: it for it in INV}

# ---- gather decompilation stats from all ghidra batches ----
batches = {
    "ghidra-drwui": "DRWUI.exe", "ghidra-core": None, "ghidra-searchdll": None,
    "ghidra-drivers": None, "ghidra-mo": None, "ghidra-partition": None,
    "ghidra-repair": None, "ghidra-misc": None, "ghidra-local": None,
}
decomp = {}  # basename -> (batch, functions, lines, path_in_og)
for batch in batches:
    d = f"{REW}/reversed/{batch}"
    if not os.path.isdir(d): continue
    for f in glob.glob(f"{d}/*_decompiled.c"):
        base = os.path.basename(f).replace("_decompiled.c", "")
        try: nlines = sum(1 for _ in open(f, encoding="utf-8", errors="replace"))
        except: nlines = 0
        fns = []
        ftxt = f.replace("_decompiled.c", "_functions.txt")
        if os.path.exists(ftxt):
            with open(ftxt, encoding="utf-8", errors="replace") as fh:
                fns = [l.split("\t")[0] for l in fh if l[:1].isdigit() or (l and l[0] in "0123456789abcdef")]
        decomp[base] = (batch, len(fns), nlines, f)

# map basenames to og paths
OG = f"{WS}/og-codebase"
og_path = {}
for root, _, files in os.walk(OG):
    for fn in files:
        og_path.setdefault(fn, os.path.join(root, fn).replace(OG + "/", ""))

# RTTI
RTTI = json.load(open(f"{REW}/rtti_classes.json"))

# PDB paths
PDB = json.load(open(f"{REW}/pdb_paths.json")) if os.path.exists(f"{REW}/pdb_paths.json") else {}

def find_og(base):
    for cand in (base + ".dll", base + ".exe", base + ".sys", base + ".mo"):
        if cand in og_path: return og_path[cand]
    # fuzzy
    for k, v in og_path.items():
        if k.rsplit(".", 1)[0] == base: return v
    return None

def inv_for(rel):
    return INV_BY_REL.get(rel)

def sha_short(path, n=16):
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""): h.update(chunk)
    return h.hexdigest()[:n]

def esc(s): return str(s).replace("|", "\\|")

OUT = f"{REW}/artifacts/per-binary"
os.makedirs(OUT, exist_ok=True)

ARCH_ROLE = {
 "DRWUI": ("Main application", "The product itself: all UI, orchestration, recovery manager. See artifacts/DRWUI-exe--main-ui-architecture.md and architecture/04-05,07."),
 "DRW": ("Supervisor launcher", "DRWLoader watchdog: spawns DRWUI, crash events, restart, DRWReport handoff. artifacts/DRW-exe--launcher.md"),
 "DRWService": ("BitLocker key service", "BitlockerReadFVEService; FVE auto-unlock keys over \\\\.\\Pipe\\DRWBitlocker. artifacts/DRWService-exe--bitlocker-service.md"),
 "DRWReport": ("Crash reporter", "19K functions: minidump collection, Elapsed/Error/Result JSON, upload (send_dmp_with_aliyun path)."),
 "SetupUE": ("Installer", "Installation/uninstall, geo detection, retention triggers."),
 "InfoForSetup": ("Installer helper", "Pre-install environment probing (PE export resolution, analysis-tool strings per capa)."),
 "unins000": ("Uninstaller", "Inno Setup uninstaller (3rd-party generated, customized)."),
 "PE_Tools": ("PE/tool library", "Large helper DLL used by setup/tools (3,286 fns)."),
 "PubLog": ("Logging library", "Shared publish-log facility (88 fns)."),
 "Japanese": ("Localization", "Japanese resource DLL."),
 "legacy": ("Legacy library", "Legacy support DLL (275 fns)."),
 "archive": ("Archive library", "Archive handling DLL (1,353 fns) - extraction for archive preview/repair."),
 "cloud_session": ("Cloud OAuth sessions", "cpprestsdk OAuth2 loopback for Dropbox/Google/OneDrive; artifacts/Cloud/cloud-recovery-architecture.md"),
 "EuICloudRecovery": ("iCloud client", "esicloud namespace: full iCloud (idmsa/setup.ws/PCS). 10,964 fns."),
 "firebaseonlineconfig": ("Remote config", "Firebase Remote Config wrapper (A/B flags)."),
 "firebasefetch": ("Config fetcher", "Out-of-proc firebase config fetch, hands results to DRWUI."),
 "AliyunWrap": ("Aliyun OSS wrapper", "Aliyun cloud upload wrapper (crash dumps etc)."),
 "AliyunWrapExe": ("Aliyun OSS CLI", "Standalone upload exe."),
 "send_dmp_with_aliyun": ("Dump uploader", "Uploads crash dumps to Aliyun OSS."),
 "EuDownloader": ("Downloader", "Component/file downloader (4,646 fns) - PE tools, agent zips, holiday res."),
 "EuUserRate": ("Rating/telemetry", "User rating + telemetry DLL (4,731 fns)."),
 "EUinApp": ("In-app purchase", "Store/licensing bridge (209 fns)."),
 "EUHwpViewer": ("HWP viewer", "Korean Hangul word processor viewer (out-of-proc preview)."),
 "EuOfficeViewer": ("Office viewer", "Office document preview host (9,855 fns)."),
 "PDFViewer": ("PDF viewer", "PDFium-based preview host (9,206 fns)."),
 "EuSendMessage": ("Message helper", "WinPE-side messaging helper (BUILDPE drop)."),
 "MainModule": ("MOM host + partition engine", "Module Object Model host; pending-op partition engine shared with EPM. artifacts/PartitionRecovery/mom-module-system--architecture.md"),
 "PartitionRecovery": ("PR core", "Partition recovery core DLL (3,182 fns)."),
 "RecoveryModule": ("Recovery engine", "Recovery module of PR (8,811 fns)."),
 "ToolsModule": ("Tools engine", "DM pending operations, tools (17,876 fns)."),
 "UILogic": ("PR UI logic", "UI logic layer for PR flows (9,516 fns)."),
 "RawFixer": ("FS repair", "Transactional NTFS/FAT/exFAT structure repair. artifacts/PartitionRecovery/rawfixer-fs-repair.md"),
 "Boot": ("Boot module", "Boot sector handling (843 fns)."),
 "BootDriver": ("Boot driver helper", "Driver install helpers for boot components."),
 "BitLockerLib": ("BitLocker library", "XTS-AES + FVE + manage-bde orchestration (2,320 fns)."),
 "CloneModule": ("Clone/PE builder", "Disk clone + ISO9660 + WinPE/BCD builder (15,273 fns)."),
 "Win32Bcd": ("BCD editor", "Windows Boot Configuration Data editing (996 fns)."),
 "libvmdk": ("VMDK library", "VMware VMDK disk access (libvmdk-derived, customized)."),
 "AutoUpdate": ("Auto-update", "PR auto-update imp (506 fns)."),
 "GetDriverInfo": ("Driver info", "Queries driver/disk info (207 fns) - user-mode side of EPMNtDrv contract."),
 "Logger": ("Logger", "PR logging (498 fns)."),
 "peformat": ("PE format", "Partition/format helpers (207 fns)."),
 "WinChkdsk": ("chkdsk wrapper", "Launches/monitors chkdsk (legacy mod)."),
 "Burn": ("Burner", "ISO/media burning (1,029 fns)."),
 "setupdrvx64": ("Driver setup", "Installs EPMNtDrv drivers (x64)."),
 "EUVideoRepair": ("Video repair engine", "Weighted atom grammar + regroup; architecture/06-repair-chain.md"),
 "EUImageEnhance": ("Image enhance", "OpenCV 2.4 static; enhances repaired photos."),
 "EUImgRepair": ("Image repair CLI", "Fixo image repair entry (564 fns)."),
 "EUImgRepairFile": ("Image repair engine", "37 source files; 21 RAW formats + BMP/GIF/JPEG/JXL/PNG/SVG/WebP."),
 "EuOfficeRepairFile": ("Office repair engine", "HWPX + legacy HWP repair (42,215 fns - biggest repair engine)."),
 "EuOfficeRepairWin32": ("Office repair host", "MFC host for office repair (Azure DevOps build)."),
 "EuOfficeTools": ("Office tools", "Office file utilities (3,633 fns)."),
 "EuPDFRepairFile": ("PDF repair engine", "xref surgery + decrypt (4,649 fns)."),
 "EUArchiveRepair": ("Archive repair", "7z next-header recovery + archive7z (3,338 fns)."),
 "EUAdobeRepair": ("Adobe repair", "Adobe format repair + cloud client (2,209 fns)."),
 "EURawImg": ("RAW image tool", "RAW container ops (784 fns)."),
 "EUUnZip": ("Zip utility", "Repair-tolerant unzip (MFC)."),
 "EUHwpFilePathCheckerModule": ("HWP path checker", "HWP file validation helper."),
 "EuRepairHost": ("Repair licensing host", "Activation bridge to repair engines (50 fns)."),
 "eprdtdrv": ("Kernel: EPMNtDrv", "Raw IO driver \\Device\\EPMNTDRV, user path \\\\.\\EPRDTDRV\\d\\p. artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md"),
 "eprdtdrv_win7older": ("Kernel: EPMNtDrv legacy", "Win7-and-older build of same driver."),
 "ebrntdrv": ("Kernel: EPMNtDrv", "BUILDPE drop of EPMNtDrv."),
 "epmdkdrv": ("Kernel: EPMNtDrv", "system32 drop of EPMNtDrv."),
 "EUDCPEPM": ("Kernel: disk-copy hook", "epmdiskcopydrv - disk-class UpperFilter (BOOT_START) in WinPE."),
 "EUEDKEPM": ("Kernel: hook", "EUDCPEPM twin (drivers/ drop)."),
 "EuMrx": ("Kernel: NAS redirector", "Self-contained RDBSS mini-redirector. artifacts/EuShare/eumrx-nas-architecture.md"),
 "DiskHealth": ("Disk health app", "Qt/QML disk health monitor (separate product)."),
 "EaseUS_VideoViewer": ("Video viewer", "Media player for preview (ffmpeg-based - out of core scope)."),
 "VideoFileRepairer": ("Video repair UI", "VideoViewer-side repair entry."),
 "EaseUS_MediaGraph": ("Media graph", "Media pipeline for viewer/repair preview."),
 "libssh2": ("SSH library", "libssh2 1.11.0 (3rd party, used for NAS agent transport)."),
}

# multitool evidence
MT = f"{REW}/reversed/ci-multitool"
mt_dirs = defaultdict(dict)
for sub in ("searchdll", "core", ""):
    d = f"{MT}/{sub}" if sub else MT
    if not os.path.isdir(d): continue
    for b in os.listdir(d):
        p = os.path.join(d, b)
        if os.path.isdir(p):
            mt_dirs[b]["dir"] = p

written = []
for base, (batch, nfns, nlines, path) in sorted(decomp.items()):
    rel = find_og(base)
    inv = inv_for(rel) if rel else None
    role, desc = ARCH_ROLE.get(base, ("Component", "Analyzed; see reversed evidence."))
    rtti = RTTI.get(base + ".dll", RTTI.get(base + ".exe", RTTI.get(base + ".sys", RTTI.get(base + ".mo", []))))
    pdb = PDB.get(base) if isinstance(PDB, dict) else None
    # multitool capa
    capa_rules = None
    mtd = mt_dirs.get(base, {}).get("dir")
    if mtd and os.path.exists(f"{mtd}/capa_capabilities.json"):
        try:
            capa_rules = list(json.load(open(f"{mtd}/capa_capabilities.json")).get("rules", {}))
        except Exception: pass
    L = []
    L.append(f"# {base} — RE Artifact")
    L.append("")
    L.append(f"> Generated by systematic per-binary extraction. Deep-dive artifacts linked where available.")
    L.append("")
    L.append("## Identity")
    L.append("")
    L.append("| Field | Value |")
    L.append("|---|---|")
    if rel:
        L.append(f"| Original path | `og-codebase/{rel}` |")
        try: L.append(f"| SHA256 (short) | `{sha_short(f'{OG}/{rel}')}` |")
        except Exception: pass
    if inv:
        L.append(f"| Size | {inv.get('size', '?')} bytes |")
        L.append(f"| Arch | {inv.get('arch', '?')} / machine {inv.get('machine','?')} |")
        L.append(f"| Subsystem | {inv.get('subsystem', '?')} |")
        L.append(f"| .NET | {inv.get('dotnet', False)} |")
        L.append(f"| Imports | {inv.get('import_count', '?')} functions / {len(inv.get('imports', {}))} DLLs |")
        exp = inv.get("exports", [])
        L.append(f"| Exports | {len(exp)} |")
    if pdb: L.append(f"| PDB path | `{pdb}` |")
    L.append(f"| RTTI classes | {len(rtti) if isinstance(rtti, list) else 0} |")
    L.append("")
    L.append("## Decompilation census")
    L.append("")
    L.append(f"- Ghidra batch: `{batch}`")
    L.append(f"- Functions: **{nfns:,}**")
    L.append(f"- Decompiled lines: **{nlines:,}**")
    L.append(f"- Raw output: `re-workspace/reversed/{batch}/{base}_decompiled.c` (+ `_functions.txt`, `_imports.txt`, `_blocks.txt`)")
    if capa_rules is not None:
        L.append(f"- capa capabilities ({len(capa_rules)}): {', '.join(capa_rules[:12])}")
    L.append("")
    if exp := (inv or {}).get("exports"):
        L.append("## Exports")
        L.append("")
        shown = 0
        for e in exp[:20]:
            name = e.get("name") if isinstance(e, dict) else str(e)
            if not name: continue
            L.append(f"- `{name}`")
            shown += 1
        if len(exp) > 20: L.append(f"- ... {len(exp)-20} more")
        L.append("")
    if rtti and isinstance(rtti, list) and len(rtti) > 0:
        L.append(f"## RTTI classes ({len(rtti)})")
        L.append("")
        show = [c for c in rtti if not c.startswith("class ?$") and not c.startswith("struct ?$")][:25]
        for c in show: L.append(f"- {esc(c)}")
        L.append("")
    L.append("## Role in the application")
    L.append("")
    L.append(f"**{role}.** {desc}")
    L.append("")
    L.append("## Cross-links")
    L.append("")
    L.append("- Master workflow: `architecture/04-recovery-workflow.md`")
    L.append("- Index: `architecture/00-INDEX.md`")
    L.append("")
    out = f"{OUT}/{base}.md"
    with open(out, "w") as f: f.write("\n".join(L))
    written.append(base)

print(f"wrote {len(written)} per-binary artifacts")
print("\n".join(sorted(written)[:30]))
