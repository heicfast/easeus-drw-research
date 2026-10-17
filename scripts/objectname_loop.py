#!/usr/bin/env python3
"""objectName loop closure:
1. Parse all QSS target objectNames (from qss_property_census.json by_target)
2. Locate each name string in DRWUI.exe .rdata (VA)
3. Scan .text for `lea reg,[rip+rel32]` referencing that VA (string xrefs)
4. Instruction VA -> containing Ghidra function -> class attribution
   (ctor map primary, vtable method map secondary, symbol ctor map tertiary)
5. Emit coverage matrix: QSS target -> set in function(s) -> class(es)
Output: re-workspace/reversed/ui-resources/objectname_loop.json
"""
import pefile, json, re, struct, bisect, os
from collections import defaultdict

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(REPO, 'og-codebase', 'DRWUI.exe')
FUNCS = os.path.join(REPO, 're-workspace/reversed/ghidra-drwui/DRWUI_functions.txt')
QSS = os.path.join(REPO, 're-workspace/reversed/ui-resources/qss_property_census.json')
CTORS = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_ctor_map.json')
VT = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_vtable_map.json')
OUT = os.path.join(REPO, 're-workspace/reversed/ui-resources/objectname_loop.json')

pe = pefile.PE(EXE)
base = pe.OPTIONAL_HEADER.ImageBase
data = open(EXE, 'rb').read()
sections = []
for s in pe.sections:
    sections.append((base + s.VirtualAddress, s.PointerToRawData, s.SizeOfRawData, s.Misc_VirtualSize, s.Name.decode().rstrip('\x00')))

def va2off(va):
    for (sva, off, szr, szv, name) in sections:
        if sva <= va < sva + szv:
            o = off + (va - sva)
            if o < off + szr:
                return o
    return None

# .text for scanning
text = None
for (sva, off, szr, szv, name) in sections:
    if name == '.text':
        text = (sva, off, szr)
tva, toff, tsz = text
tdata = data[toff:toff+tsz]

# QSS targets
qss = json.load(open(QSS))
targets = list(qss['by_target'].keys())
print(f'QSS targets: {len(targets)}')

# locate name strings in whole binary (any section) - find ALL occurrences
name_vas = {}
for t in targets:
    needle = t.encode() + b'\x00'
    vas = []
    pos = 0
    while True:
        i = data.find(needle, pos)
        if i < 0: break
        pos = i + 1
        va = None
        for (sva, off, szr, szv, name) in sections:
            if off <= i < off + szr:
                va = sva + (i - off)
                break
        if va:
            vas.append(va)
    if vas:
        name_vas[t] = vas
print(f'targets located in binary: {len(name_vas)}')

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

# class attribution sources
cm = json.load(open(CTORS))
fc = cm['func_class_ctor']          # ctor func -> class (primary: this class OWNS the widget setup)
vt = json.load(open(VT))
m2c = vt['method_to_class']         # vtable method -> class
scm = json.load(open(os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_symbol_ctor_map.json'))) if os.path.exists(os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_symbol_ctor_map.json')) else {}

QT_BASES = {'QLabel', 'QPushButton', 'QFrame', 'QWidget', 'QMenu', 'QVBoxLayout', 'QHBoxLayout',
            'QScrollBar', 'QCheckBox', 'QHeaderView', 'QTabBar', 'QComboBox', 'QTreeView',
            'QListView', 'QTextEdit', 'QTextBrowser', 'QStackedWidget', 'QSplitter', 'QToolButton',
            'QRadioButton', 'QProgressBar', 'QGroupBox', 'QDialog', 'QMainWindow', 'QObject'}

# ---- caller-hop attribution (up to 2 hops) ----
# scan .text once for direct CALL rel32 edges, build callee -> callers
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
    """class of a function from any source"""
    h = hex(fva)
    return fc.get(h) or scm.get(h) or m2c.get(h)

def hop_class(fva, depth=3):
    """walk callers up to depth hops; prefer an APP-class ancestor (skip past
    Qt-base attributions to the composite owner), returning (class, kind)"""
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

# build xref index: target VA -> set of func VAs (lea rip-rel scan)
va2target = {}
for t, vas in name_vas.items():
    for v in vas:
        va2target.setdefault(v, set()).add(t)

xrefs = defaultdict(set)   # target -> func vas
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
                        xrefs[t].add(fn)
            i += 7
            continue
    i += 1

print(f'targets with .text xrefs: {len(xrefs)}')

# join with class attribution (priority: exact name > app-class vtable > app-class ctor
# > Qt-base ctor > caller-hop)
result = {}
matched_cls = 0
hop_matches = 0
for t in targets:
    fns = xrefs.get(t, set())
    entry = {'n_xref_funcs': len(fns), 'funcs': []}
    cand = []
    for fn in sorted(fns)[:10]:
        cls = attributed(fn)
        src = 'direct'
        kind = None
        if cls is None or cls in QT_BASES:
            hop_cls, kind = hop_class(fn)
            if hop_cls is not None and cls is None:
                cls = hop_cls
                src = 'caller-hop'
            elif cls in QT_BASES and hop_cls is not None:
                cls = hop_cls
                src = 'hop-owner'
        cand.append({'func': hex(fn), 'class': cls, 'src': src, 'kind': kind or (attributed(fn) if attributed(fn) in QT_BASES else None)})
        entry['funcs'].append(cand[-1])
    # pick best
    best = None
    for c in cand:
        if c['class'] == t:
            best = (c['class'], 'exact-name'); break
    if best is None:
        for c in cand:
            if c['class'] and c['class'] not in QT_BASES and c['src'] == 'direct':
                best = (c['class'], 'direct'); break
    if best is None:
        for c in cand:
            if c['class'] and c['class'] not in QT_BASES:
                best = (c['class'], c['src']); break
    if best is None:
        for c in cand:
            if c['class']:
                best = (c['class'], 'qt-base/' + c['src']); break
    if best:
        entry['best_class'] = best[0]
        entry['best_src'] = best[1]
        if best[1] == 'caller-hop':
            hop_matches += 1
        matched_cls += 1
    result[t] = entry

# ---- pass 2: parent-context inheritance ----
# child objectNames styled under '#Parent Child#child' selectors inherit the
# parent target's class when their own attribution is Qt-base-only or missing
qss = json.load(open(QSS))
inherit_count = 0
for t in targets:
    e = result.get(t, {})
    if e.get('best_src') in ('exact-name', 'direct', 'caller-hop', 'hop-owner'):
        continue
    ent = qss['by_target'].get(t)
    if not ent:
        continue
    for r in ent.get('rules', []):
        m = re.match(r'#([A-Za-z_][A-Za-z0-9_]*)\s', r['selector'] + ' ')
        if not m:
            continue
        parent = m.group(1)
        if parent == t:
            continue
        pe = result.get(parent, {})
        pc = pe.get('best_class')
        if pc and pc not in QT_BASES:
            e['best_class'] = pc
            e['best_src'] = 'parent-context'
            inherit_count += 1
            break

stats = {
    'qss_targets': len(targets),
    'located_in_binary': len(name_vas),
    'with_text_xrefs': len(xrefs),
    'with_class_attribution': matched_cls,
    'total_xref_functions': sum(len(v) for v in xrefs.values()),
    'hop_attributed': hop_matches,
    'parent_context_inherited': inherit_count,
}
print(json.dumps(stats, indent=1))
json.dump({'stats': stats, 'targets': result}, open(OUT, 'w'), indent=1)
print('wrote', OUT)
