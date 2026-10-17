#!/usr/bin/env python3
"""Extract PDB paths (RSD debug data) + rich PE metadata from all binaries.
The PDB paths reveal EaseUS's internal source tree layout — critical intel."""
import os, re, struct, json
from datetime import datetime, timezone

OG = "/home/z/my-project/workspace/og-codebase"
OUT = "/home/z/my-project/workspace/re-workspace/pdb_paths.json"

def find_pdb_paths(data):
    """RSD debug directory: 'RSD'<GUID+age><pdbpath>"""
    results = []
    for m in re.finditer(rb'RSDS(.{20})([\x20-\x7e]{4,260}?)\x00', data, re.DOTALL):
        path = m.group(2).decode('ascii', errors='replace')
        if any(path.lower().endswith(ext) for ext in ('.pdb', '.ilk', '.mlpdb')) or '\\' in path or '/' in path:
            results.append(path)
    return list(set(results))

def find_nb10(data):
    results = []
    for m in re.finditer(rb'NB10(.{16})([\x20-\x7e]{4,260}?)\x00', data, re.DOTALL):
        results.append(m.group(2).decode('ascii', errors='replace'))
    return list(set(results))

def main():
    out = {}
    for root, dirs, files in os.walk(OG):
        for fn in sorted(files):
            path = os.path.join(root, fn)
            rel = os.path.relpath(path, OG)
            with open(path, 'rb') as f:
                head = f.read(2)
                if head != b'MZ': continue
                # PDB strings usually in last part of file — read whole if < 60MB
                sz = os.path.getsize(path)
                if sz > 80*1024*1024:
                    f.seek(-4*1024*1024, 2); data = f.read()
                else:
                    data = f.read()
            pdbs = find_pdb_paths(data) + find_nb10(data)
            if pdbs:
                out[rel] = pdbs
    with open(OUT, 'w') as f:
        json.dump(out, f, indent=1)
    print(f"Found PDB paths in {len(out)} binaries")
    print("\n=== INTERNAL SOURCE TREE MAP (from PDB paths) ===")
    dirs_seen = {}
    for rel, paths in sorted(out.items()):
        for p in paths:
            # Normalize: extract project dir chain
            m = re.match(r'[A-Z]:(?:\\[^\\]+)*\\([^\\]+)\\(?:x64\\)?(Release|Debug)', p)
            d = os.path.dirname(p)
            dirs_seen.setdefault(d, []).append(rel)
    for d in sorted(dirs_seen):
        files = dirs_seen[d]
        print(f"{d}")
        for ff in files[:3]:
            print(f"    -> {ff}{' (+%d more)' % (len(files)-3) if len(files) > 3 else ''}")

if __name__ == "__main__":
    main()
