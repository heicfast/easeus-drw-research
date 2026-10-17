#!/usr/bin/env python3
"""Extract MSVC RTTI class names (.?AV... type descriptors) from all EaseUS PE binaries.
These reveal the complete C++ class architecture: class names, inheritance (via
complete object locators is harder, but names alone map the object model)."""
import os, re, json

OG = "/home/z/my-project/workspace/og-codebase"
OUT = "/home/z/my-project/workspace/re-workspace/rtti_classes.json"

def is_easeus(rel):
    externals = ["VideoViewer/","EUFileRepair/","diskhealth/","language/","BUILDPE/","License/",
        "api-ms-win-","platforms/","imageformats/","iconengines/","styles/"]
    if any(rel.startswith(e) or e in rel for e in externals): return False
    b = os.path.basename(rel).lower()
    if b.startswith(("qt5","msvc","vcruntime","ucrtbase","concrt","libcrypto","libssl","ssleay","libeay","zlib","liblzma","libssh2","libzmq","de265","heif","libx265","pdfium","gdiplus","core_rl_","7z","dbghelp","japanese","legacy","api-ms")): return False
    return True

def extract(data):
    # MSVC RTTI type descriptor names: ".?AV<class>@", ".?AU<struct>@", ".?AW4<enum>@"
    names = set()
    for m in re.finditer(rb'\.\?A(V|U|W4)([\w@$?][\w@$?.]{1,300}?)@', data):
        kind = {'V':'class','U':'struct','W4':'enum'}[m.group(1).decode()]
        name = m.group(2).decode('ascii', errors='replace')
        names.add(f"{kind} {name}")
    return sorted(names)

def main():
    out = {}
    for root, dirs, files in os.walk(OG):
        for fn in sorted(files):
            path = os.path.join(root, fn)
            rel = os.path.relpath(path, OG).replace("\\", "/")
            if not is_easeus(rel): continue
            with open(path, 'rb') as f:
                head = f.read(2)
                if head != b'MZ': continue
                data = f.read()
            classes = extract(data)
            if classes:
                out[rel] = classes
    with open(OUT, 'w') as f:
        json.dump(out, f, indent=1)
    total = sum(len(v) for v in out.values())
    print(f"RTTI classes extracted from {len(out)} binaries, {total} total type names")
    for rel, classes in sorted(out.items()):
        # Filter out pure std:: names for summary
        own = [c for c in classes if not c.split(' ',1)[1].startswith('std::')]
        print(f"  {rel}: {len(classes)} types ({len(own)} non-std)")

if __name__ == "__main__":
    main()
