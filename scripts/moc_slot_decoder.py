#!/usr/bin/env python3
"""
moc_slot_decoder.py (v2) — Decode Qt moc dispatchers for DRWUI classes.

Validated on CDetailPage (qt_metacall FUN_140b6b9c0 -> static FUN_140b6bb20, 44 slots).

Handles:
- trampoline chains (qt_metacall that just forwards to the real body)
- switch/case AND if-chain (param_3 == N) static-metacall tables
- IndexOfMethod (param_2==10) pointer comparisons -> signal identification
- ReadProperty(1)/WriteProperty(2) branches -> property accessors
- "forward-only" qt_metacall (no own slots; e.g. ArchivePreviewView)
- per-slot body analysis: import calls, inline/DAT strings, activate, size
- per-class vtable override census with Qt-virtual inference from signature types

Usage: python3 moc_slot_decoder.py ClassName [ClassName ...]
Output: re-workspace/reversed/ui-resources/moc_slot_decodes.json (merged)
"""
import json, re, sys, os

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEC = os.path.join(REPO, 're-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c')
VTMAP = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_vtable_map.json')
VASTR = os.path.join(REPO, 're-workspace/reversed/ui-resources/drwwui_va_strings.json')
OUT = os.path.join(REPO, 're-workspace/reversed/ui-resources/moc_slot_decodes.json')
IDX_CACHE = '/tmp/drwwui_fun_index.json'

IDX = None
LINES = None
VASTR_MAP = None

# ---------- index & text ----------
def build_index():
    global IDX
    if IDX is not None: return IDX
    if os.path.exists(IDX_CACHE):
        IDX = json.load(open(IDX_CACHE)); return IDX
    idx = {}
    defin = re.compile(r'^\s*(?:[A-Za-z_][A-Za-z0-9_:<>\*&\[\] ]*\s+)?FUN_([0-9a-f]+)\(')
    with open(DEC) as f:
        pending = None
        for i, line in enumerate(f, 1):
            if pending is not None:
                s = line.strip()
                if s == '{':
                    idx[pending[0]] = pending[1]; pending = None
                elif s and not s.startswith('/*') and not s.startswith('*') and not s.endswith(','):
                    pending = None
                continue
            if 'FUN_' in line:
                m = defin.match(line)
                if m: pending = (m.group(1), i)
    IDX = idx
    json.dump(idx, open(IDX_CACHE, 'w'))
    return idx

def load_lines():
    global LINES
    if LINES is None:
        with open(DEC) as f: LINES = f.readlines()
    return LINES

def fun_text(addr):
    idx = build_index(); lines = load_lines()
    ln = idx.get(addr)
    if ln is None: return None
    start = ln - 1
    for j in range(start + 1, min(start + 300000, len(lines))):
        if lines[j].rstrip() == '}':
            return '\n'.join(lines[start:j + 1])
    return None

# ---------- body analysis ----------
IMPORT_RE = re.compile(r'\b((?:Q|Eu|C)[A-Za-z0-9_]*::[a-zA-Z_][A-Za-z0-9_]*)\(')
STR_RE = re.compile(r'"((?:[^"\\\n]|\\.)*)"')
DAT_RE = re.compile(r'(?:&)?DAT_([0-9a-f]+)')
FUN_CALL_RE = re.compile(r'FUN_([0-9a-f]+)\(')

def analyze_body(addr, depth=0):
    txt = fun_text(addr)
    if txt is None: return {'missing': True}
    res = {
        'addr': addr,
        'size': len(txt),
        'lines': txt.count('\n') + 1,
    }
    if len(txt) > 400000:
        txt = txt[:400000]
    imports = sorted(set(IMPORT_RE.findall(txt)))
    res['qt_calls'] = imports[:60]
    strs = []
    for m in STR_RE.finditer(txt):
        s = m.group(1)
        if len(s) >= 2 and not re.fullmatch(r'[\x00-\x1f]*', s):
            strs.append(s)
    res['inline_strings'] = strs[:40]
    dats = []
    for m in DAT_RE.finditer(txt):
        va = '0x' + m.group(1)
        if VASTR_MAP and va in VASTR_MAP:
            dats.append(VASTR_MAP[va])
    res['dat_strings'] = list(dict.fromkeys(dats))[:40]
    res['activates'] = txt.count('QMetaObject::activate')
    res['tr_calls'] = txt.count('QObject::tr') + txt.count('::translate')
    inner = sorted(set(FUN_CALL_RE.findall(txt)) - {addr})
    res['calls_FUN'] = ['0x' + x for x in inner[:25]]
    return res

# ---------- metacall detection ----------
META_CALL_RE = re.compile(r'(\w+)::qt_metacall\(')
FORWARD_RE = re.compile(r'^\s*(?:\w+\s+)?FUN_([0-9a-f]+)\(([^)]*)\)\s*;\s*return\b', re.M)

def is_trampoline(txt):
    """Function that only calls one FUN_ and returns its value (body-only scan)."""
    if txt is None: return None
    body = txt[txt.find('{'):] if '{' in txt else txt  # skip signature
    if body.count(';') > 6 or 'qt_metacall' in body: return None
    calls = FUN_CALL_RE.findall(body)
    if len(set(calls)) == 1 and calls[0]:
        return calls[0]
    return None

def parse_metacall(addr, depth=0):
    """Return dict describing qt_metacall at addr (following trampolines)."""
    txt = fun_text(addr)
    if txt is None: return None
    # trampoline?
    if '::qt_metacall(' not in txt:
        tr = is_trampoline(txt)
        if tr and depth < 4:
            sub = parse_metacall(tr, depth + 1)
            if sub:
                sub['trampolines'] = sub.get('trampolines', []) + [addr]
                return sub
        # else: fall through — may still be an app-parent metacall (FUN_ base call)
    base = META_CALL_RE.search(txt)
    # dispatch structure: param_2==0 branch, bound, static call
    m_static = re.search(r'FUN_([0-9a-f]+)\(param_1,\s*0,\s*iVar\d,\s*param_4\)', txt)
    if not m_static:
        m_static = re.search(r'FUN_([0-9a-f]+)\(param_1,\s*0,\s*\w+,\s*param_4\)', txt)
    m_bound = re.search(r'iVar\d+\s*<\s*(0x[0-9a-f]+|\d+)\b', txt)
    if not m_static or not m_bound:
        if base:
            return {'qt_metacall': addr, 'base_class': base.group(1),
                    'slot_count': 0, 'static_metacall': None, 'forward_only': True,
                    'trampolines': []}
        return None
    bound = m_bound.group(1)
    sc = int(bound, 16) if bound.startswith('0x') else int(bound)
    # resolve base: named import call, or parent-class metacall via method_to_class
    base_name = base.group(1) if base else None
    if base_name is None:
        body = txt[txt.find('{'):] if '{' in txt else txt
        parent_calls = FUN_CALL_RE.findall(body)
        m2c = json.load(open(VTMAP))['method_to_class']
        for pc in parent_calls:
            if pc in m2c and pc != addr:
                base_name = m2c[pc] + '::qt_metacall (app-parent)'
                break
    return {'qt_metacall': addr, 'base_class': base_name or '?',
            'slot_count': sc, 'static_metacall': m_static.group(1),
            'forward_only': False, 'trampolines': []}

# ---------- static metacall table parsing ----------
def parse_static(addr):
    """Parse qt_static_metacall: invoke table + indexOfMethod (signals) + props."""
    txt = fun_text(addr)
    if txt is None: return None
    out = {'invoke': {}, 'signals': [], 'read_props': {}, 'write_props': {}, 'method_ptr_checks': []}
    # switch/case form
    for m in re.finditer(r'case\s+(0x[0-9a-f]+|\d+):\s*\n\s*FUN_([0-9a-f]+)\(', txt):
        v = m.group(1); out['invoke'][int(v, 16) if v.startswith('0x') else int(v)] = m.group(2)
    # if-chain form: if (param_3 == N) { FUN_xxx(...) }
    cur_n = None
    for m in re.finditer(r'if\s*\(param_3\s*==\s*(0x[0-9a-f]+|\d+)\)\s*\{?\s*\n?\s*FUN_([0-9a-f]+)\(', txt):
        v = m.group(1); out['invoke'][int(v, 16) if v.startswith('0x') else int(v)] = m.group(2)
    # signal identification via IndexOfMethod pointer comparisons:
    # if ((*(code **)param_4[1] == FUN_xxx) ...) { *puVar = N; }
    for m in re.finditer(r'\(code\s*\*\*\)param_4\[1\]\s*==\s*FUN_([0-9a-f]+)', txt):
        out['method_ptr_checks'].append(m.group(1))
    # properties: ReadProperty (param_2==1) / WriteProperty (param_2==2) branches
    # pattern: else if (param_2 == 1) { ... if (param_3 == N) { uVar = FUN_read(...); *puVar = uVar; } }
    #          write: if (param_3 == N) { FUN_write(param_1, *param_4); }
    seg_read = re.search(r'param_2\s*==\s*1\)(.*?)(?=param_2\s*==\s*[23]\b|$)', txt, re.S)
    seg_write = re.search(r'param_2\s*==\s*2\)(.*?)(?=param_2\s*==\s*[13]\b|$)', txt, re.S)
    if seg_read:
        for m in re.finditer(r'param_3\s*==\s*(\d+)\)\s*\{?\s*\n?\s*uVar\w*\s*=\s*FUN_([0-9a-f]+)\(', seg_read.group(1)):
            out['read_props'][int(m.group(1))] = m.group(2)
    if seg_write:
        for m in re.finditer(r'param_3\s*==\s*(\d+)\)\s*\{?\s*\n?\s*FUN_([0-9a-f]+)\(\s*param_1', seg_write.group(1)):
            out['write_props'][int(m.group(1))] = m.group(2)
    return out

# ---------- Qt virtual inference from decompiler signature ----------
EVENT_MAP = [
    (r'QMouseEvent', 'mouseEvent'), (r'QKeyEvent', 'keyPressEvent/Release'),
    (r'QShowEvent', 'showEvent'), (r'QHideEvent', 'hideEvent'),
    (r'QResizeEvent', 'resizeEvent'), (r'QPaintEvent', 'paintEvent'),
    (r'QCloseEvent', 'closeEvent'), (r'QWheelEvent', 'wheelEvent'),
    (r'QFocusEvent', 'focusIn/OutEvent'), (r'QTimerEvent', 'timerEvent'),
    (r'QContextMenuEvent', 'contextMenuEvent'), (r'QDragEnterEvent', 'dragEnterEvent'),
    (r'QDragMoveEvent', 'dragMoveEvent'), (r'QDragLeaveEvent', 'dragLeaveEvent'),
    (r'QDropEvent', 'dropEvent'), (r'QChildEvent', 'childEvent'),
    (r'QEvent\b', 'event/eventFilter'), (r'QModelIndex', 'model-index handler'),
    (r'QPainter', 'paint/viewportPaint'), (r'QInputMethodEvent', 'inputMethodEvent'),
    (r'QHoverEvent', 'hoverEvent'), (r'QMoveEvent', 'moveEvent'),
    (r'QActionEvent', 'actionEvent'), (r'QTouchEvent', 'touchEvent'),
    (r'QGraphicsScene', 'graphicsScene handler'), (r'QStyleOption', 'sizeHint/paint option'),
]

def infer_virtual(sig):
    for pat, name in EVENT_MAP:
        if re.search(pat, sig): return name
    return None

# ---------- main ----------
def main():
    global VASTR_MAP
    build_index(); load_lines()
    try:
        VASTR_MAP = json.load(open(VASTR))
    except Exception:
        VASTR_MAP = None
    vt = json.load(open(VTMAP))['classes']
    targets = sys.argv[1:] or ['ArchivePreviewView', 'CClassifyLeftTreeView', 'CListHeaderView', 'CClassifyListHeaderView']
    results = {}
    if os.path.exists(OUT):
        try: results = json.load(open(OUT))
        except Exception: results = {}
    for cls in targets:
        if cls not in vt:
            print(f'[-] {cls}: not in vtable map'); continue
        addrs = [a.replace('0x', '') for a in vt[cls]['methods']]
        # find qt_metacall: scan methods for metacall/trampoline
        mc = None
        for a in addrs:
            mc = parse_metacall(a)
            if mc: break
        if not mc:
            print(f'[-] {cls}: qt_metacall not found'); continue
        entry = {**mc}
        print(f"[+] {cls}: metacall=FUN_{mc['qt_metacall']} base={mc['base_class']} slots={mc['slot_count']}"
              + (f" static=FUN_{mc['static_metacall']}" if mc['static_metacall'] else ' (forward-only)'))
        if mc['static_metacall'] and not mc['forward_only']:
            table = parse_static(mc['static_metacall'])
            if table:
                entry['table'] = table
                print(f"    invoke slots: {len(table['invoke'])} | signal ptrs: {len(table['method_ptr_checks'])} | read props: {len(table['read_props'])} | write props: {len(table['write_props'])}")
                # per-slot analysis
                slot_info = {}
                for slot, fa in sorted(table['invoke'].items()):
                    slot_info[str(slot)] = analyze_body(fa)
                entry['slot_analysis'] = slot_info
                # signal stub analysis (first 6)
                sig_info = {}
                for fa in table['method_ptr_checks'][:8]:
                    sig_info[fa] = analyze_body(fa)
                entry['signal_stubs'] = sig_info
        # vtable override census
        overrides = []
        for i, a in enumerate(addrs):
            txt = fun_text(a)
            if txt is None:
                overrides.append({'idx': i, 'addr': '0x' + a, 'thunk': True}); continue
            sig = txt.splitlines()[0] if txt.splitlines() else ''
            virt = infer_virtual(sig)
            body = analyze_body(a)
            overrides.append({'idx': i, 'addr': '0x' + a, 'sig': sig[:120],
                              'virtual': virt, 'size': body.get('size', 0),
                              'qt_calls': body.get('qt_calls', [])[:12],
                              'inline_strings': body.get('inline_strings', [])[:8],
                              'dat_strings': body.get('dat_strings', [])[:8],
                              'activates': body.get('activates', 0)})
        entry['vtable_overrides'] = overrides
        results[cls] = entry
        print(f"    vtable overrides analyzed: {len(overrides)} ({sum(1 for o in overrides if o.get('thunk'))} thunks)")
    json.dump(results, open(OUT, 'w'), indent=1)
    print(f'[+] wrote {OUT} ({len(results)} classes)')

if __name__ == '__main__':
    main()
