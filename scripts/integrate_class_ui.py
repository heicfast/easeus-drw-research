#!/usr/bin/env python3
"""Constructor-based class attribution: scan decompiled code for assignments of known
vftable VAs (DAT_141xxxxxx = vftable address) -> that function is a constructor/method
initializer of that class. Then propagate callees. Rebuild class UI map with better coverage."""
import re, json
from collections import defaultdict

SRC = '/home/z/my-project/repo/re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c'
VT = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_vtable_map.json'
TR = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_tr_callsites.json'
OUT = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_class_ui_map.json'

vt = json.load(open(VT))
m2c = vt['method_to_class']
ctor_map = json.load(open('/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_ctor_map.json'))['func_class_ctor']
# build vftable -> class map
vft2c = {}
for cls, info in vt['classes'].items():
    for vf in info['vftables']:
        vft2c[int(vf, 16)] = cls
print(f'vftables: {len(vft2c)}, vtable methods: {len(m2c)}')
tr = json.load(open(TR))

func_re = re.compile(r'^\s*[\w:<>~*&\[\] ]+\s+FUN_([0-9a-f]+)\s*\(')
call_re = re.compile(r'\bFUN_([0-9a-f]+)\s*\(')
dat_re = re.compile(r'DAT_([0-9a-f]{9,12})\b')

func_class = {}
for m, c in m2c.items():
    func_class[m] = c
for fn, cls in ctor_map.items():
    if fn not in func_class:
        func_class[fn] = cls + ' (ctor)'

callgraph = defaultdict(set)
ctor_hits = defaultdict(set)  # func -> classes (vftables referenced)

with open(SRC, errors='replace') as f:
    cur = None
    for line in f:
        m = func_re.match(line)
        if m:
            cur = '0x' + m.group(1)
            continue
        if cur is None:
            continue
        if 'DAT_' in line:
            for d in dat_re.findall(line):
                va = int(d, 16)
                if va in vft2c:
                    ctor_hits[cur].add(vft2c[va])
        if 'FUN_' in line:
            for c in call_re.findall(line):
                cc = '0x' + c
                if cc != cur:
                    callgraph[cur].add(cc)

print(f'callgraph callers: {len(callgraph)}, ctor candidates: {len(ctor_hits)}')

# constructors: function referencing a vftable -> that class (assign directly, strongest signal)
for fn, clss in ctor_hits.items():
    if len(clss) == 1:
        func_class[fn] = next(iter(clss)) + ' (ctor)'
    else:
        # multiple vftables referenced = composed object; attribute to first
        func_class[fn] = sorted(clss)[0] + ' (ctor+)'

# propagate to callees (2 rounds)
for _ in range(2):
    new = {}
    for caller, callees in callgraph.items():
        c = func_class.get(caller)
        if c:
            for callee in callees:
                if callee not in func_class:
                    new[callee] = c + ' (sub)'
    func_class.update(new)

print(f'attributed functions: {len(func_class)}')

# ---- strings ----
cls_strings = defaultdict(set)
for site in tr['tr'] + tr['translate']:
    fn = site['func']
    if fn:
        va = '0x' + fn
        c = func_class.get(va)
        src = site.get('source') or ''
        if c:
            cls_strings[c.replace(' (ctor)', '').replace(' (ctor+)', '').replace(' (sub)', '').replace(' (callee)', '').replace(' (callee2)', '')].add(src)

# ---- geometry ----
cls_geom = defaultdict(list)
geom_pat = re.compile(r'(Q(?:Widget|Dialog|MainWindow)::(?:resize|setGeometry|setFixedSize|setMinimumSize|setMaximumSize|setMinimumWidth|setMaximumWidth|setMinimumHeight|setMaximumHeight))\s*\(([^;]{0,160})\);')
dlg_pat = re.compile(r'(QDialog::exec|QDialog::open|QMenu::exec)\s*\(')
win_pat = re.compile(r'setWindowTitle|setWindowFlag')
with open(SRC, errors='replace') as f:
    cur = None
    for lineno, line in enumerate(f, 1):
        m = func_re.match(line)
        if m:
            cur = '0x' + m.group(1)
            continue
        if cur is None:
            continue
        g = geom_pat.search(line)
        if g:
            c = func_class.get(cur, '?')
            cls_geom[c].append({'func': cur, 'call': g.group(1), 'args': g.group(2)[:120], 'line': lineno})
        d = dlg_pat.search(line)
        if d:
            c = func_class.get(cur, '?')
            cls_geom[c].append({'func': cur, 'call': 'DIALOG:' + d.group(1), 'args': '', 'line': lineno})

out = {
    'class_strings': {c: sorted(s)[:120] for c, s in cls_strings.items()},
    'class_geometry': dict(cls_geom),
    'func_class': func_class,
    'stats': {
        'classes_with_strings': len(cls_strings),
        'classes_with_geometry': len([c for c in cls_geom if c != '?']),
        'unattributed_geom': len(cls_geom.get('?', [])),
        'total_geom': sum(len(v) for v in cls_geom.values()),
    },
}
with open(OUT, 'w') as f:
    json.dump(out, f, indent=0)
print('wrote', OUT)
print(out['stats'])
print('\nTOP CLASSES BY STRINGS:')
for c, s in sorted(cls_strings.items(), key=lambda kv: -len(kv[1]))[:40]:
    print(f'  {len(s):4d}  {c}')
print('\nCLASSES WITH GEOMETRY:')
for c, v in sorted(cls_geom.items(), key=lambda kv: -len(kv[1]))[:40]:
    print(f'  {len(v):4d}  {c}')
