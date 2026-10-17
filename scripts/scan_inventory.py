#!/usr/bin/env python3
"""
Master binary inventory scanner for EaseUS DRW codebase.
Scans every file, records: size, type, PE details (arch, subsystem, .NET flag,
imports/exports counts, sections, entropy estimate), and classification.
Output: re-workspace/inventory.csv + inventory.json
"""
import os, sys, json, hashlib, math, csv
import pefile

OG = "/home/z/my-project/workspace/og-codebase"
OUT_DIR = "/home/z/my-project/workspace/re-workspace"

def entropy(data):
    if not data: return 0.0
    counts = [0]*256
    for b in data: counts[b] += 1
    n = len(data)
    e = 0.0
    for c in counts:
        if c:
            p = c/n
            e -= p * math.log2(p)
    return round(e, 3)

def sha256(path, blocksize=65536):
    h = hashlib.sha256()
    with open(path, 'rb') as f:
        for chunk in iter(lambda: f.read(blocksize), b''):
            h.update(chunk)
    return h.hexdigest()

def classify_external(rel):
    """Files that are third-party/external — we deprioritize but still record."""
    externals = [
        "VideoViewer/", "ffmpeg", "avcodec", "avformat", "avutil", "swresample", "swscale",
        "pdfium.dll", "heif.dll", "de265.dll", "libx265.dll",
        "Qt5Core.dll", "Qt5Gui.dll", "Qt5Network.dll", "Qt5Svg.dll", "Qt5Widgets.dll", "Qt5WinExtras.dll",
        "msvcp", "msvcr", "vcruntime", "ucrtbase", "concrt", "msvcm",
        "libcrypto", "libssl", "ssleay", "libeay", "zlib", "liblzma", "libssh2", "libzmq",
        "python3", "CORE_RL_", "7z.dll", "7za.exe", "GDIPLUS.DLL",
        "dbghelp.dll", "platforms/", "imageformats/", "iconengines/", "styles/",
        "msi.dll", "oledlg.dll", "Japanese.dll",
    ]
    for e in externals:
        if e in rel: return "external"
    return "easeus"

def analyze_pe(path):
    info = {"format": "PE"}
    try:
        pe = pefile.PE(path, fast_load=True)
        pe.parse_data_directories(directories=[
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT'],
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT'],
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_RESOURCE'],
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_TLS'],
        ])
        info["machine"] = hex(pe.FILE_HEADER.Machine)
        info["arch"] = {0x8664:"x64",0x14c:"x86",0x1c0:"ARM",0xaa64:"ARM64"}.get(pe.FILE_HEADER.Machine, hex(pe.FILE_HEADER.Machine))
        info["subsystem"] = {1:"NATIVE(driver)",2:"GUI",3:"CONSOLE",9:"CE_GUI"}.get(pe.OPTIONAL_HEADER.Subsystem, str(pe.OPTIONAL_HEADER.Subsystem))
        info["bits"] = 64 if pe.PE_TYPE == 0x20b else 32
        info["timestamp"] = pe.FILE_HEADER.TimeDateStamp
        info["entrypoint"] = hex(pe.OPTIONAL_HEADER.AddressOfEntryPoint)
        try:
            info["dotnet"] = bool(pe.OPTIONAL_HEADER.DATA_DIRECTORY[14].VirtualAddress)
        except: info["dotnet"] = False
        imports = {}
        if hasattr(pe, "DIRECTORY_ENTRY_IMPORT"):
            for entry in pe.DIRECTORY_ENTRY_IMPORT:
                dll = entry.dll.decode(errors='replace')
                imports[dll] = len(entry.imports)
        info["imports"] = imports
        info["import_count"] = sum(imports.values())
        exps = []
        if hasattr(pe, "DIRECTORY_ENTRY_EXPORT"):
            for sym in pe.DIRECTORY_ENTRY_EXPORT.symbols:
                if sym.name: exps.append(sym.name.decode(errors='replace'))
        info["exports"] = exps
        secs = []
        for s in pe.sections:
            name = s.Name.decode(errors='replace').rstrip('\x00')
            secs.append({"name": name, "vsize": s.Misc_VirtualSize, "rawsize": s.SizeOfRawData,
                         "entropy": round(s.get_entropy(), 3)})
        info["sections"] = secs
        info["tls"] = hasattr(pe, "DIRECTORY_ENTRY_TLS")
        info["resources"] = bool(hasattr(pe, "DIRECTORY_ENTRY_RESOURCE"))
        info["company"] = ""
        try:
            if hasattr(pe, 'FileInfo'):
                for fi in pe.FileInfo:
                    if fi.Key.decode() == 'StringFileInfo':
                        for st in fi.StringTable:
                            for k, v in st.entries.items():
                                if k in (b'CompanyName', b'ProductName', b'FileDescription', b'FileVersion', b'InternalName', b'OriginalFilename'):
                                    info[k.decode()] = v.decode(errors='replace')
        except Exception: pass
        pe.close()
    except Exception as e:
        info["error"] = str(e)
    return info

def main():
    rows = []
    for root, dirs, files in os.walk(OG):
        for fn in sorted(files):
            path = os.path.join(root, fn)
            rel = os.path.relpath(path, OG).replace("\\", "/")
            sz = os.path.getsize(path)
            with open(path, 'rb') as f: magic = f.read(2)
            row = {"rel": rel, "size": sz, "magic": magic.hex()}
            is_pe = magic == b'MZ'
            if is_pe:
                try:
                    with open(path,'rb') as f:
                        f.seek(0x3C); peoff = int.from_bytes(f.read(4),'little')
                        f.seek(peoff); pesig = f.read(4)
                    is_pe = pesig == b'PE\x00\x00'
                except: is_pe = False
            if is_pe:
                row.update(analyze_pe(path))
            else:
                row["format"] = "data"
            row["class"] = classify_external(rel)
            row["sha256"] = sha256(path) if sz < 100*1024*1024 else "skip"
            rows.append(row)
            print(f"[{len(rows)}] {rel} ({'PE' if is_pe else 'data'}, {sz//1024}KB)", file=sys.stderr)
    os.makedirs(OUT_DIR, exist_ok=True)
    with open(os.path.join(OUT_DIR, "inventory.json"), 'w') as f:
        json.dump(rows, f, indent=1)
    with open(os.path.join(OUT_DIR, "inventory.csv"), 'w', newline='') as f:
        w = csv.writer(f)
        w.writerow(["rel","size","class","format","arch","subsystem","dotnet","import_count","export_count","company","description"])
        for r in rows:
            w.writerow([r["rel"], r["size"], r.get("class"), r.get("format"), r.get("arch"),
                        r.get("subsystem"), r.get("dotnet"), r.get("import_count", 0),
                        len(r.get("exports", []) or []), r.get("company",""), r.get("FileDescription","")])
    pe_files = [r for r in rows if r.get("format")=="PE"]
    dotnet = [r for r in pe_files if r.get("dotnet")]
    native = [r for r in pe_files if not r.get("dotnet")]
    drivers = [r for r in pe_files if "NATIVE" in str(r.get("subsystem",""))]
    easeus_pe = [r for r in pe_files if r.get("class")=="easeus"]
    print(f"\n=== INVENTORY SUMMARY ===")
    print(f"Total files: {len(rows)}")
    print(f"PE binaries: {len(pe_files)} (native: {len(native)}, .NET: {len(dotnet)})")
    print(f"Kernel drivers (NATIVE subsystem): {len(drivers)}")
    print(f"EaseUS-owned PE files (non-external): {len(easeus_pe)}")
    print(f"Data/other files: {len(rows)-len(pe_files)}")
    print("\n--- DRIVERS ---")
    for d in drivers: print(" *", d["rel"])
    print("\n--- .NET assemblies ---")
    for d in dotnet: print(" *", d["rel"])

if __name__ == "__main__":
    main()
