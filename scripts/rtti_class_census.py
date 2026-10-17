#!/usr/bin/env python3
"""
rtti_class_census.py — Class-by-class census of DRWUI's 980 RTTI classes.

For every class in the vtable map:
  - category (app-UI family vs Qt base vs MSVC template instantiation vs vendor internal)
  - vftable(s) + method count
  - qt_metacall base-class + own moc slot count (scanned from first 25 vtable entries,
    following single trampolines) — gives the Qt inheritance spine for moc classes
  - merged enrichment: per-class UI strings + geometry calls (class_ui_map), ctor counts

Output: re-workspace/reversed/ui-resources/rtti_class_census.json + digest.
"""
import json, re, sys, os
from collections import Counter

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEC = os.path.join(REPO, 're-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c')
VTMAP = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_vtable_map.json')
UIMAP = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_class_ui_map.json')
OUT = os.path.join(REPO, 're-workspace/reversed/ui-resources/rtti_class_census.json')
IDX_CACHE = '/tmp/drwwui_fun_index.json'

LINES = None
IDX = None

def load():
    global LINES, IDX
    if LINES is None:
        with open(DEC) as f: LINES = f.readlines()
    if IDX is None:
        IDX = json.load(open(IDX_CACHE))
    return IDX, LINES

def fun_text(addr):
    idx, lines = load()
    ln = idx.get(addr)
    if ln is None: return None
    start = ln - 1
    for j in range(start + 1, min(start + 5000, len(lines))):
        if lines[j].rstrip() == '}':
            return '\n'.join(lines[start:j + 1])
    return None

META_CALL = re.compile(r'(\w+)::qt_metacall\(')
M_STATIC = re.compile(r'FUN_([0-9a-f]+)\(param_1,\s*0,\s*\w+,\s*param_4\)')
M_BOUND = re.compile(r'iVar\d+\s*<\s*(0x[0-9a-f]+|\d+)\b')
FWD_BASE = re.compile(r'^\s*(?:\w+\s+)?(?:[A-Za-z_][\w:]*::)?(?:qt_)?metacall', re.I)

def find_metacall(addrs, max_scan=25):
    """Scan first max_scan vtable entries for qt_metacall; follow 1 trampoline."""
    for a in addrs[:max_scan]:
        a = a.replace('0x', '')
        txt = fun_text(a)
        if txt is None: continue
        if len(txt) > 9000: continue
        if '::qt_metacall(' in txt:
            base = META_CALL.search(txt)
            ms = M_STATIC.search(txt)
            mb = M_BOUND.search(txt)
            if ms and mb:
                b = mb.group(1)
                return {'base': base.group(1) if base else '?',
                        'slots': int(b, 16) if b.startswith('0x') else int(b),
                        'forward_only': False}
            if base:
                return {'base': base.group(1), 'slots': 0, 'forward_only': True}
        # trampoline: single FUN_ call in body
        body = txt[txt.find('{'):] if '{' in txt else txt
        if body.count(';') <= 6 and 'qt_metacall' not in body:
            calls = re.findall(r'FUN_([0-9a-f]+)\(', body)
            if len(set(calls)) == 1 and calls[0] and calls[0] != a:
                sub = fun_text(calls[0])
                if sub and '::qt_metacall(' in sub and len(sub) <= 9000:
                    base = META_CALL.search(sub)
                    ms = M_STATIC.search(sub)
                    mb = M_BOUND.search(sub)
                    if ms and mb:
                        b = mb.group(1)
                        return {'base': base.group(1) if base else '?',
                                'slots': int(b, 16) if b.startswith('0x') else int(b),
                                'forward_only': False, 'via_trampoline': a}
                    if base:
                        return {'base': base.group(1), 'slots': 0, 'forward_only': True, 'via_trampoline': a}
    return None

CATEGORY_RULES = [
    ('MSVC/STL template', re.compile(r'^\?\$')),
    ('Qt base', re.compile(r'^Q[A-Z][A-Za-z]*$')),
    ('Qt internal', re.compile(r'^(Q[A-Z].*Private|QStatic.*|QtPrivate.*)')),
    ('std/vendor', re.compile(r'^(std::|neb::|tinyxml2|Imath|Half|drw_multimap|unz|zip|lzma|Lzma|unrar|Yuv|NvTri|tdefl|tinfl|miniz|mz_|crc32|deflate|inflate)')),
    ('App Dialog', re.compile(r'(Dlg|Dialog)$')),
    ('App Window/View', re.compile(r'(View|Wnd|Window)$')),
    ('App Page', re.compile(r'Page$')),
    ('Controller/Manager', re.compile(r'(Controller|Mgr|Manager|Cron|Scheduler|Dispatcher)$')),
    ('Thread/Worker/Task', re.compile(r'(Thread|Worker|Task|Job)$')),
    ('Sink/Observer', re.compile(r'^(I[A-Z][a-z]|.*Sink$)')),
    ('Model/Delegate', re.compile(r'(Model|Delegate|ViewModel)$')),
    ('Widget/Control', re.compile(r'(Button|Label|Item|Btn|Bar|Box|Edit|CheckBox|Tab|Menu|Tip|Toast|Bubble|Frame|Widget|Panel|Badge)$')),
    ('Event/Signal', re.compile(r'Event$')),
    ('Data/Node', re.compile(r'(Node|Data|Info|State|Condition|Config)$')),
]

def categorize(name):
    for cat, rx in CATEGORY_RULES:
        if rx.search(name): return cat
    return 'App other'

def main():
    vt = json.load(open(VTMAP))['classes']
    try:
        uimap = json.load(open(UIMAP))
        cls_strings = uimap.get('class_strings', {})
        cls_geom = uimap.get('class_geometry', {})
    except Exception:
        cls_strings, cls_geom = {}, {}
    load()
    out = {}
    cat_counter = Counter()
    metacall_found = 0
    for name, ent in vt.items():
        cat = categorize(name)
        cat_counter[cat] += 1
        rec = {
            'vftables': ent['vftables'],
            'n_methods': len(ent['methods']),
            'category': cat,
        }
        mc = find_metacall(ent['methods'])
        if mc:
            rec['qt_base'] = mc['base']
            rec['moc_slots'] = mc['slots']
            rec['forward_only'] = mc.get('forward_only', False)
            metacall_found += 1
        if name in cls_strings:
            rec['n_ui_strings'] = len(cls_strings[name])
        if name in cls_geom:
            rec['n_geometry_calls'] = len(cls_geom[name])
        out[name] = rec
    json.dump(out, open(OUT, 'w'), indent=1)
    print(f'[+] {len(out)} classes; metacall decoded for {metacall_found}')
    print('Categories:', dict(cat_counter.most_common()))
    print(f'[+] wrote {OUT}')

if __name__ == '__main__':
    main()
