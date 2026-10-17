#!/usr/bin/env python3
"""Build runtime-library consumer map + generate runtime-family role artifacts.
Maps which EaseUS binaries import which shipped runtime DLLs (imports from inventory.json),
then writes one artifact per runtime family with full consumer lists and role analysis."""
import json, os, re, glob
from collections import defaultdict

WS = "/home/z/my-project/workspace"
INV = json.load(open(f"{WS}/re-workspace/inventory.json"))
PE = [it for it in INV if it.get("machine") and it.get("imports")]

def base(rel): return os.path.basename(rel)

# ---- consumer map: runtime dll (lowercase) -> [consumers] ----
consumers = defaultdict(set)   # dllname_lower -> set of rel
for it in PE:
    for dll in (it.get("imports") or {}):
        consumers[dll.lower()].add(it["rel"])

# also map by basename without extension for api-set matching
def consumers_of(pattern):
    pat = re.compile(pattern, re.I)
    hits = set()
    for dll, cs in consumers.items():
        if pat.search(dll):
            hits |= cs
    return sorted(hits)

FAMS = [
    ("qt5-core-stack", "Qt 5 Application Framework (core stack)",
     r"^(Qt5Core|Qt5Gui|Qt5Widgets|Qt5Network|Qt5Svg|Qt5WinExtras|Qt5Xml)\.dll$",
     "The Qt 5 main-window framework powering DRWUI.exe (and shipped duplicated into BUILDPE + diskhealth).",
     ["Qt5Core.dll (event loop, signals/slots, i18n, QSettings)",
      "Qt5Gui.dll (raster/OpenGL painting, window integration, QSS styling)",
      "Qt5Widgets.dll (QMainWindow/QTreeView/QStackedWidget — the entire results UI)",
      "Qt5Network.dll (QNetworkAccessManager — firebase/remote-config/telemetry HTTP)",
      "Qt5Svg.dll + iconengines/qsvgicon.dll (SVG icons via RCC resources)",
      "Qt5WinExtras.dll (taskbar progress/jump-list integration for scan progress)"]),
    ("qt5-quick-qml-stack", "Qt Quick 2 / QML engine (DiskHealth app only)",
     r"^(Qt5Qml|Qt5Quick|Qt5QuickTemplates2|Qt5QuickControls2|Qt5QuickShapes|Qt5QmlModels|Qt5RemoteObjects)\.dll$",
     "The QML engine stack used exclusively by diskhealth/DiskHealth.exe — DRWUI is widgets-only; DiskHealth is the QML-based companion.",
     ["Qt5Qml/Qt5Quick — QML scene engine (SMART dashboard UI)",
      "QtQuick/Controls.2 style plugins (Imagine/Material/Fusion/Universal) — theme selection",
      "Qt5RemoteObjects — cross-process model sync (DiskInfo service <-> UI)"]),
    ("openssl-crypto-trio", "OpenSSL — THREE shipped generations",
     r"^(libeay32|ssleay32|libcrypto-1_1|libssl-1_1|libcrypto-1_1-x64|libssl-1_1-x64|libcrypto-3-x64|libssl-3-x64|libssl32)\.dll$",
     "Three OpenSSL generations coexist because different subsystems link different versions — each consumer pins its own.",
     ["libeay32/ssleay32 (0.9.8/1.0.x lineage names) — legacy modules (EuRepairHost licensing, older engine code)",
      "libcrypto-1_1-x64/libssl-1_1-x64 (1.1) — cloud/licensing stack of the 2019-era modules",
      "libcrypto-3-x64/libssl-3-x64 (3.x) — newest consumers (firebasefetch, cloud recovery)"]),
    ("ucrt-forwarders", "Universal C Runtime API-set forwarders",
     r"^api-ms-win-crt-.*\.dll$",
     "WinPE lacks the Universal CRT; the app trees self-carry the full api-ms-win-crt-* forwarder set + ucrtbase.dll so every CRT import resolves inside the app dir (verified: BUILDPE ships 49 forwarders).",
     ["api-ms-win-crt-{stdio,heap,multibyte,math,string,...} — 1:1 UCRT api sets",
      "ucrtbase.dll — the actual CRT implementation they forward to"]),
    ("d3d-graphics-shims", "Direct3D/DXGI shims (PE-only)",
     r"^(d3d9|d3d11|d3d8thk|dxgi)\.dll$",
     "BUILDPE-only: WinPE's reduced graphics stack lacks full D3D; these shims let Qt's OpenGL scene-graph + video preview render. The live Windows install relies on the OS.",
     ["d3d9.dll (2MB — D3D9 + D3DX runtime)", "d3d11.dll + dxgi.dll (D3D11 modern path)",
      "d3d8thk.dll (legacy D3D8 thunk)"]),
    ("vc-runtime-generations", "Visual C++ runtime — three compiler generations",
     r"^(msvcp90|msvcr90|mfc90u|msvcp120|msvcr120|msvcp140|vcruntime140|concrt140|msvcm90)\.dll$",
     "The codebase spans ~12 years of MSVC: VC9 (2008 — engine/legacy modules), VC12 (2013 — mid-generation), VC14 (2015-2022 — current). Each generation's CRT ships because modules of that age still link it.",
     ["VC9: msvcp90/msvcr90/mfc90u (+ Microsoft.VC90.CRT.manifest) — oldest engine code",
      "VC12: msvcp120/msvcr120 — EUArchiveRepair/others",
      "VC14: msvcp140/vcruntime140/concrt140 — DRWUI current build",
      "msvcm90.dll (.NET mixed-mode, live tree only — one mixed-mode module)"]),
    ("media-codecs", "Media codec set (preview + repair)",
     r"^(libx265|de265|heif|GDIPLUS|avcodec|avformat|avutil|swres|swscale|postproc)\.dll$",
     "Decode support for preview and repair: HEVC/H.265 both ways, HEIF stills, ffmpeg family in VideoViewer (EUFileRepair copies: postproc-58 + libav family).",
     ["libx265.dll — HEVC ENcoder (repair re-encode)", "de265.dll — HEVC decoder (preview)",
      "heif.dll — HEIF/HEIC image codec", "postproc-58.dll — ffmpeg postprocessing (repair)"]),
    ("imagemagick-modules", "ImageMagick delegate modules (EUFileRepair)",
     r"^IM_MOD_RL_.*\.dll$",
     "ImageMagick modular delegates — each format codec is a separate DLL loaded at runtime by the repair pipeline's ImageMagick usage.",
     ["IM_MOD_RL_png_.dll, IM_MOD_RL_svg_.dll (+others in EUFileRepair) — per-format encode/decode delegates"]),
    ("network-libraries", "Network protocol libraries",
     r"^(libcurl|libssh2|libzmq-mt|zlib1|zlib|liblzma)\.dll$",
     "libcurl (repair-side downloads), libssh2 (NAS agent transport — dependency of runtime-downloaded connect.exe), ZeroMQ (VAPreviewListener IPC on ports 20171/20172), zlib/liblzma (compression everywhere: rsf, scan sessions, image ops).",
     ["libzmq-mt-4_3_5.dll — ØMQ 4.3.5 (preview-listener IPC)", "libssh2.dll — SSH2 (NAS agent push)",
      "libcurl.dll — HTTP(S) client (EUFileRepair)"]),
    ("misc-windows-shims", "Windows system shims shipped for portability",
     r"^(dbghelp|ole32|msi|oledlg|legacy|PubLog)\.dll$",
     "Local copies of system DLLs pinned for older-Windows/WinPE compat (dbghelp for crash minidumps, msi/oledlg for PE, legacy.dll + PubLog.dll are EaseUS-authored utility glue).",
     ["dbghelp.dll — crash-dump symbol resolution (DRWReport path)",
      "msi.dll + oledlg.dll — WinPE-compat copies (both trees + SysWOW64)"]),
]

OG = f"{WS}/og-codebase"
# locate shipped copies of each family's members
def find_copies(pattern):
    pat = re.compile(pattern, re.I)
    out = []
    for root, _, files in os.walk(OG):
        for fn in files:
            if pat.match(fn):
                out.append(os.path.join(root, fn).replace(OG + "/", ""))
    return sorted(out)

os.makedirs(f"{WS}/re-workspace/artifacts/runtime-families", exist_ok=True)
for key, title, pat, role, members in FAMS:
    copies = find_copies(pat)
    cons = consumers_of(pat)
    easeus_cons = [c for c in cons if not c.startswith(("diskhealth/", "BUILDPE/", "VideoViewer/", "EUFileRepair/", "EuShare/"))]
    lines = []
    lines.append(f"# Runtime Family: {title}\n")
    lines.append(f"**Pattern**: `{pat}`  ")
    lines.append(f"**Shipped copies**: {len(copies)} across the tree  ")
    lines.append(f"**Role**: {role}\n")
    lines.append("## Shipped copies (all locations)\n")
    for c in copies:
        lines.append(f"- `{c}`")
    lines.append("\n## Consumer map (binaries importing this family, from PE import tables)\n")
    if easeus_cons:
        lines.append("**Core-tree consumers** (root + PartitionRecovery + repair + service):")
        for c in easeus_cons[:40]:
            lines.append(f"- `{c}`")
        other = [c for c in cons if c not in easeus_cons]
        if other:
            lines.append("\n**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):")
            for c in other[:30]:
                lines.append(f"- `{c}`")
    else:
        lines.append("No PE-import consumers found in inventoried binaries — loaded dynamically (LoadLibrary) or consumed only by external processes. " 
                     "(Cross-check: the consumer may be the runtime-downloaded connect.exe, or loading is late-bound.)")
    lines.append("\n## Family members\n")
    for m in members:
        lines.append(f"- {m}")
    lines.append("\n## Cross-links\n")
    lines.append("- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`")
    with open(f"{WS}/re-workspace/artifacts/runtime-families/{key}.md", "w") as f:
        f.write("\n".join(lines) + "\n")
    print(f"wrote {key}.md ({len(copies)} copies, {len(cons)} consumers)")
