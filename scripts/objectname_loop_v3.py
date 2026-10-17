#!/usr/bin/env python3
"""objectName loop closure v3:
Upgrades v2 with:
 (a) UTF-16LE string location + lea xrefs for names v2 missed (setObjectName(L"...") sites)
 (b) QSS-selector-context attribution for Qt widget-kind selectors (QMenu, QScrollBar...)
     -> the #ParentName in the same compound selector, resolved to its owning class
 (c) hop-owner upgrade retry for entries whose funcs have class=null
Output: re-workspace/reversed/ui-resources/objectname_loop_v3.json
"""
import pefile, json, re, struct, bisect, os
from collections import defaultdict

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(REPO, 'og-codebase', 'DRWUI.exe')
FUNCS = os.path.join(REPO, 're-workspace/reversed/ghidra-drwui/DRWUI_functions.txt')
QSS = os.path.join(REPO, 're-workspace/reversed/ui-resources/qss_property_census.json')
QSS_CSS = os.path.join(REPO, "og-codebase", "style.css")
V2 = os.path.join(REPO, 're-workspace/reversed/ui-resources/objectname_loop.json')
CTORS = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_ctor_map.json')
VT = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_vtable_map.json')
OUT = os.path.join(REPO, 're-workspace/reversed/ui-resources/objectname_loop_v3.json')

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
data = open(EXE, 'rb').read()
sections = []
for s in pe.sections:
    sections.append((base + s.VirtualAddress, s.PointerToRawData, s.SizeOfRawData, s.Misc_VirtualSize, s.Name.decode().rstrip('\x00')))

def off2va(i):
    for (sva, off, szr, szv, name) in sections:
        if off <= i < off + szr:
            return sva + (i - off)
    return None

text = None
for (sva, off, szr, szv, name) in sections:
    if name == '.text':
        text = (sva, off, szr)
tva, toff, tsz = text
tdata = data[toff:toff+tsz]

# function ranges
funcs = []
with open(FUNCS) as f:
    for line in f:
        m = re.match(r'([0-9a-f]+)\t(\d+)\t', line)
        if m:
            funcs.append((int(m.group(1), 16), int(m.group(2))))
funcs.sort()
starts = [a for a, sz in funcs]

def find_func(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0:
        a, sz = funcs[i]
        if a <= va < a + sz:
            return a
    return None

cm = json.load(open(CTORS))
fc = cm['func_class_ctor']
vt = json.load(open(VT))
m2c = vt['method_to_class']
scm_path = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_symbol_ctor_map.json')
scm = json.load(open(scm_path)) if os.path.exists(scm_path) else {}

QT_BASES = {'QLabel', 'QPushButton', 'QFrame', 'QWidget', 'QMenu', 'QVBoxLayout', 'QHBoxLayout',
            'QScrollBar', 'QCheckBox', 'QHeaderView', 'QTabBar', 'QComboBox', 'QTreeView',
            'QListView', 'QTextEdit', 'QTextBrowser', 'QStackedWidget', 'QSplitter', 'QToolButton',
            'QRadioButton', 'QProgressBar', 'QGroupBox', 'QDialog', 'QMainWindow', 'QObject',
            'QLineEdit', 'QAbstractScrollArea', 'QSizeGrip', 'QMenuBar', 'QStatusBar', 'QSlider'}

v2 = json.load(open(V2))
targets = list(v2['targets'].keys())

# ---- caller graph (for hop attribution) ----
callers_of = defaultdict(set)
n = len(tdata)
i = 0
while i < n - 5:
    if tdata[i] == 0xE8:
        rel = struct.unpack_from('<i', tdata, i + 1)[0]
        dst = tva + i + 5 + rel
        if tva <= dst < tva + tsz:
            callers_of[dst].add(tva + i)
        i += 5
        continue
    i += 1

def attributed(fva):
    h = hex(fva)
    return fc.get(h) or scm.get(h) or m2c.get(h)

def hop_class(fva, depth=3):
    seen = {fva}
    frontier = [fva]
    qt_kind = None
    for _ in range(depth):
        nxt = []
        for f in frontier:
            for c in callers_of.get(f, ()):
                fn = find_func(c)
                if fn is None or fn in seen:
                    continue
                seen.add(fn)
                cls = attributed(fn)
                if cls and cls not in QT_BASES:
                    return cls, qt_kind
                if cls and qt_kind is None:
                    qt_kind = cls
                nxt.append(fn)
        frontier = nxt
    return None, qt_kind

# ---- (a) UTF-16LE location for unlocated targets ----
unlocated = [t for t in targets if v2['targets'][t].get('n_xref_funcs', 0) == 0
             and not v2['targets'][t].get('funcs')]
# exclude Qt widget-kind names (they're class selectors, not objectNames)
QT_KIND = {t for t in unlocated if t.startswith('Q') and t[1:2].isupper()}
needs_utf16 = [t for t in unlocated if t not in QT_KIND]

utf16_vas = {}
for t in needs_utf16:
    needle = t.encode('utf-16-le') + b'\x00\x00'
    pos = 0
    vas = []
    while True:
        i = data.find(needle, pos)
        if i < 0: break
        pos = i + 1
        va = off2va(i)
        if va: vas.append(va)
    if vas:
        utf16_vas[t] = vas
print(f'UTF-16 located: {len(utf16_vas)} of {len(needs_utf16)} unlocated candidates')

# lea-xref scan for the UTF-16 VAs
va2target = {}
for t, vas in utf16_vas.items():
    for v in vas:
        va2target.setdefault(v, set()).add(t)

utf16_xrefs = defaultdict(set)
i = 0
n = len(tdata)
while i < n - 7:
    b0 = tdata[i]
    if b0 in (0x48, 0x4C) and tdata[i+1] == 0x8D:
        modrm = tdata[i+2]
        if modrm & 0xC7 == 0x05:
            rel = struct.unpack_from('<i', tdata, i + 3)[0]
            target_va = tva + i + 7 + rel
            if target_va in va2target:
                code_va = tva + i
                fn = find_func(code_va)
                if fn is not None:
                    for t in va2target[target_va]:
                        utf16_xrefs[t].add(fn)
            i += 7
            continue
    i += 1
print(f'UTF-16 targets with xrefs: {len(utf16_xrefs)}')

# ---- (b) QSS selector-context: Qt-kind -> parent #name ----
css = open(QSS_CSS, encoding='utf-8', errors='replace').read()
# strip comments
css_nc = re.sub(r'/\*.*?\*/', '', css, flags=re.S)
# find all rule blocks: selector(s) { ... }
ctx_parents = defaultdict(set)   # widget-kind -> set of #parentNames in same selector
for m in re.finditer(r'([^{}]+)\{', css_nc):
    sels = m.group(1)
    # split on commas at top level
    for sel in re.split(r',\s*(?![^()]*\))', sels):
        sel = sel.strip()
        if not sel: continue
        # tokens: #Name, QClass, QClass#Name, [state]
        names = re.findall(r'#([A-Za-z_][\w]*)', sel)
        kinds = re.findall(r'\b(Q[A-Z][A-Za-z]*)\b', sel)
        for kind in kinds:
            for nm in names:
                if nm != kind:
                    ctx_parents[kind].add(nm)

# resolve parent names to classes using v2 (or v3 utf16)
def class_of_target(name):
    e = v2['targets'].get(name)
    if e and e.get('best_class'):
        return e['best_class']
    return None

# ---- (c) hop retry for class=null funcs ----
upgraded_hops = {}
for t, e in v2['targets'].items():
    if e.get('best_class'):
        continue
    for f in e.get('funcs', []):
        if f.get('class') is None:
            fn = int(f['func'], 16)
            hc, kind = hop_class(fn)
            if hc:
                upgraded_hops.setdefault(t, []).append((f['func'], hc))
                break
print(f'hop-upgraded entries: {len(upgraded_hops)}')

# ---- merge into v3 ----
result = {}
stats = {'qss_targets': len(targets),
         'v2_attributed': sum(1 for e in v2['targets'].values() if e.get('best_class')),
         'utf16_located': len(utf16_vas),
         'utf16_with_xrefs': len(utf16_xrefs),
         'utf16_attributed': 0,
         'qt_kind_context_attributed': 0,
         'hop_retry_upgraded': 0}

for t in targets:
    e = dict(v2['targets'][t])
    if not e.get('best_class'):
        # try utf16 xref path
        fns = utf16_xrefs.get(t, set())
        if fns:
            e['encoding'] = 'utf-16le'
            e['n_xref_funcs'] = len(fns)
            e['funcs'] = []
            best = None
            for fn in sorted(fns)[:10]:
                cls = attributed(fn)
                src = 'direct-utf16'
                if cls is None or cls in QT_BASES:
                    hc, kind = hop_class(fn)
                    if hc:
                        cls = hc; src = 'hop-owner-utf16'
                e['funcs'].append({'func': hex(fn), 'class': cls, 'src': src})
                if cls and cls not in QT_BASES and best is None:
                    best = (cls, src)
            if best:
                e['best_class'], e['best_src'] = best
                stats['utf16_attributed'] += 1
        # try hop retry
        if not e.get('best_class') and t in upgraded_hops:
            e['best_class'] = upgraded_hops[t][0][1]
            e['best_src'] = 'hop-retry-v3'
            stats['hop_retry_upgraded'] += 1
        # qt-kind context
        if not e.get('best_class') and t in QT_KIND:
            parents = ctx_parents.get(t, set())
            e['selector_parents'] = sorted(parents)[:12]
            e['parent_classes'] = sorted({class_of_target(p) for p in parents if class_of_target(p)})[:12]
            if e['parent_classes']:
                e['best_class'] = e['parent_classes'][0]
                e['best_src'] = 'qss-context'
                stats['qt_kind_context_attributed'] += 1
    result[t] = e

stats['total_attributed'] = sum(1 for e in result.values() if e.get('best_class'))
stats['total_unattributed'] = len(result) - stats['total_attributed']
owners = {e['best_class'] for e in result.values() if e.get('best_class')}
stats['distinct_owners'] = len(owners)

json.dump({'stats': stats, 'targets': result}, open(OUT, 'w'), indent=1)
print(json.dumps(stats, indent=1))
print(f'wrote {OUT}')
