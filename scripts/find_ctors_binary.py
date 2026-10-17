#!/usr/bin/env python3
"""Binary-direct constructor attribution:
1. Parse DRWUI_functions.txt (addr, size) -> function ranges
2. Scan .text for `lea reg, [rip+rel32]` (48/4C 8D /r) targeting known vftable VAs
3. Instruction VA -> containing function -> class constructor attribution
4. Save func->class (ctor) mapping for final integration."""
import pefile, json, re, struct

EXE = '/home/z/my-project/repo/og-codebase/DRWUI.exe'
FUNCS = '/home/z/my-project/repo/re-workspace/reversed/ghidra-drwui/DRWUI_functions.txt'
VT = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_vtable_map.json'
OUT = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_ctor_map.json'

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
text = None
for s in pe.sections:
    if s.Name.rstrip(b'\0') == b'.text':
        text = (base + s.VirtualAddress, s.Misc_VirtualSize, s.get_data())
tva, tsz, tdata = text
print(f'.text @{tva:#x} +{tsz:#x}')

vt = json.load(open(VT))
vft2c = {}
for cls, info in vt['classes'].items():
    for vf in info['vftables']:
        vft2c[int(vf, 16)] = cls

# function ranges
funcs = []
with open(FUNCS) as f:
    for line in f:
        m = re.match(r'([0-9a-f]+)\t(\d+)\t', line)
        if m:
            funcs.append((int(m.group(1), 16), int(m.group(2))))
funcs.sort()
print(f'function ranges: {len(funcs)}')

import bisect
starts = [a for a, sz in funcs]

def find_func(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0:
        a, sz = funcs[i]
        if a <= va < a + sz:
            return a
    return None

# scan for LEA reg,[rip+rel32]: REX(48/4C) 8D modrm(00reg101) rel32
ctor_func = {}  # func_va -> {class: count}
hits = 0
n = len(tdata)
i = 0
while i < n - 7:
    b0 = tdata[i]
    if b0 in (0x48, 0x4C) and tdata[i+1] == 0x8D:
        modrm = tdata[i+2]
        if modrm & 0xC7 == 0x05:  # mod=00, rm=101 -> rip-rel
            rel = struct.unpack_from('<i', tdata, i + 3)[0]
            target = tva + i + 7 + rel
            if target in vft2c:
                va = tva + i
                fn = find_func(va)
                if fn is not None:
                    cls = vft2c[target]
                    d = ctor_func.setdefault(fn, {})
                    d[cls] = d.get(cls, 0) + 1
                    hits += 1
            i += 7
            continue
    i += 1

print(f'vftable LEA hits: {hits}, ctor candidate funcs: {len(ctor_func)}')

# resolve: func -> best class (most hits)
func_class_ctor = {}
for fn, clss in ctor_func.items():
    best = max(clss.items(), key=lambda kv: kv[1])[0]
    func_class_ctor[hex(fn)] = best

with open(OUT, 'w') as f:
    json.dump({'func_class_ctor': func_class_ctor,
               'detail': {hex(k): v for k, v in ctor_func.items()}}, f, indent=0)
print('wrote', OUT)
for fn, cls in list(func_class_ctor.items())[:30]:
    print(f'  FUN_{fn[2:]}  ->  {cls}')
