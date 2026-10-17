#!/usr/bin/env python3
"""MSVC x64 RTTI vtable mapper v2 (correct algorithm):
1. Scan .rdata for RTTICompleteObjectLocator candidates: sig==1, pTypeDescriptor(image-rel) -> valid TypeDescriptor name ".?A..."
2. Collect COL VAs into a set.
3. Scan .rdata 8-aligned for absolute pointers INTO that set -> vftable begins at slot+8.
4. vftable entries = absolute method pointers (validate .text range).
Output: class -> {vftable, methods[]}, method_va -> class."""
import pefile, json, re, struct, sys
from collections import defaultdict

EXE = sys.argv[1] if len(sys.argv) > 1 else '/home/z/my-project/repo/og-codebase/DRWUI.exe'
OUT = sys.argv[2] if len(sys.argv) > 2 else '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_vtable_map.json'

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
secs = []
for s in pe.sections:
    nm = s.Name.rstrip(b'\0').decode(errors='replace')
    secs.append((nm, base + s.VirtualAddress, s.VirtualAddress, s.Misc_VirtualSize, s.get_data()))
by_name = {t[0]: t for t in secs}

def va_to_local(va):
    for nm, bva, raw, vsz, data in secs:
        if bva <= va < bva + vsz:
            return va - bva, data
    return None, None

def read_td_name(td_va):
    off, data = va_to_local(td_va)
    if off is None or off + 0x10 >= len(data):
        return None
    end = data.find(b'\0', off + 0x10)
    if end == -1 or end - (off + 0x10) > 400:
        return None
    try:
        return data[off + 0x10:end].decode('ascii')
    except Exception:
        return None

def demangle(name):
    m = re.match(r'\.\?A[UVW4](.+?)@', name)
    if not m:
        return name
    return m.group(1).replace('@', '::')

rname, rva, rraw, rvsz, rdata = by_name['.rdata']
tname, tva, traw, tvsz, tdata = by_name['.text']
print(f'.rdata@{rva:#x} sz={rvsz:#x}  .text@{tva:#x} sz={tvsz:#x}')

# 1. find COLs
cols = {}  # col_va -> class name
for off in range(0, rvsz - 24, 4):
    sig, obj_off, cd_off, td_rel, chd_rel = struct.unpack_from('<5I', rdata, off)
    if sig != 1 or td_rel == 0:
        continue
    td_va = base + td_rel
    nm = read_td_name(td_va)
    if not nm or not nm.startswith('.?A'):
        continue
    cols[rva + off] = demangle(nm)
print(f'COL candidates: {len(cols)}')

# 2. find vftables: 8-aligned slots pointing at COLs
classes = {}
method_to_class = {}
n_slots = rvsz // 8
for slot in range(n_slots):
    off = slot * 8
    try:
        p = struct.unpack_from('<Q', rdata, off)[0]
    except struct.error:
        break
    if p in cols:
        vft_va = rva + off + 8
        cls = cols[p]
        methods = []
        i = 0
        while True:
            try:
                fp = struct.unpack_from('<Q', rdata, off + 8 + i * 8)[0]
            except struct.error:
                break
            if fp == 0 or not (tva <= fp < tva + tvsz):
                break
            methods.append(fp)
            i += 1
            if i > 500:
                break
        if methods:
            entry = classes.setdefault(cls, {'vftables': [], 'methods': []})
            entry['vftables'].append(hex(vft_va))
            # NOTE: keep SLOT ORDER — a method's vtable slot offset is semantic
            # (e.g. CFileSystemNode +0x20=Serialize, +0x28=Deserialize). The prior
            # set()-collection silently discarded slot order and produced wrong
            # slot attributions (fixed 2026-10-17, see rsf artifact §5.4.1).
            for m in methods:
                if m not in entry['methods']:
                    entry['methods'].append(m)
                method_to_class.setdefault(hex(m), cls)
            # record per-vftable ordered slot lists too
            entry.setdefault('slotmaps', {})[hex(vft_va)] = [hex(m) for m in methods]

print(f'classes with vtables: {len(classes)}, total methods mapped: {len(method_to_class)}')

# merge with method sets
out_classes = {}
for cls, v in classes.items():
    out_classes[cls] = {'vftables': v['vftables'], 'methods': [hex(m) for m in sorted(v['methods'])]}

with open(OUT, 'w') as f:
    json.dump({'classes': out_classes, 'method_to_class': method_to_class}, f, indent=0)
print('wrote', OUT)

ui_kw = ['Wnd', 'Window', 'Page', 'Dialog', 'View', 'Widget', 'Manager', 'Thread', 'Model',
         'Delegate', 'Item', 'Button', 'List', 'Tree', 'Tab', 'Menu', 'Bar', 'Scan', 'Preview',
         'Filter', 'Classify', 'Sort', 'Recover', 'Repair', 'Home', 'Progress', 'Nav', 'Title']
ui = [c for c in out_classes if any(k in c for k in ui_kw)]
print(f'UI-named classes: {len(ui)} / {len(out_classes)}')
for c in sorted(ui):
    print(f'  {c}  ({len(out_classes[c]["methods"])} methods)')
