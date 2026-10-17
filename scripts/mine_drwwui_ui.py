#!/usr/bin/env python3
"""Mine DRWUI Ghidra decompilation for UI/UX intelligence:
1. Function -> (Qt imports used, wide-string literals used) map
2. Geometry calls (resize/setGeometry/setFixedSize/setMinimum/Maximum) with literal args + owner function
3. Dialog exec/show calls
4. Telemetry event names (Result_*, etc.)
Output: JSON + human-readable reports for artifact generation.
"""
import re, json, sys, os
from collections import defaultdict

SRC = '/home/z/my-project/repo/re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c'

# function boundaries: Ghidra export format? Check how functions are delimited
def detect_function_headers(sample_lines):
    for i, l in enumerate(sample_lines):
        print(i, repr(l[:100]))

def main():
    print('scanning', SRC, f'({os.path.getsize(SRC)/1e6:.0f} MB)...')
    func_re = re.compile(r'^\s*[\w:<>~*&\[\] ]+\s+FUN_([0-9a-f]+)\s*\(')
    # Ghidra C export: functions start with a signature line containing FUN_xxxx(
    wide_re = re.compile(r'L"((?:[^"\\]|\\.){2,200})"')
    import_re = re.compile(r'\b((?:Q\w+::)?~?(?:Q\w+|std::\w+)\s*::\s*\w+|QMetaObject::\w+|QWidget::\w+)\s*\(')

    cur = None
    funcs = {}  # addr -> {'strings': [], 'imports': [], 'lines': n}
    geom_calls = []
    dialog_calls = []
    telemetry = []

    geom_pat = re.compile(r'(Q(?:Widget|Dialog|MainWindow|AbstractItemView)::(?:resize|setGeometry|setFixedSize|setMinimumSize|setMaximumSize|setMinimumWidth|setMaximumWidth|setMinimumHeight|setMaximumHeight|move))\s*\(([^;]{0,160})\);')
    dlg_pat = re.compile(r'(QDialog::exec|QDialog::open|QMenu::exec|QWidget::show|QWidget::activateWindow|QDialog::show)\s*\(')

    with open(SRC, errors='replace') as f:
        for lineno, line in enumerate(f, 1):
            m = func_re.match(line)
            if m:
                addr = m.group(1)
                if addr not in funcs:
                    cur = addr
                    funcs[addr] = {'strings': [], 'imports': set(), 'start_line': lineno, 'name_hint': ''}
                    continue
            if cur is None:
                continue
            for s in wide_re.findall(line):
                if len(s) >= 2:
                    funcs[cur]['strings'].append(s)
            for im in import_re.findall(line):
                funcs[cur]['imports'].add(im)
            g = geom_pat.search(line)
            if g:
                geom_calls.append({'func': cur, 'line': lineno, 'call': g.group(1), 'args': g.group(2)[:120]})
            d = dlg_pat.search(line)
            if d:
                dialog_calls.append({'func': cur, 'line': lineno, 'call': d.group(1)})
            for s in wide_re.findall(line):
                if s.startswith(('Result_', 'Save_RepairFile_Result', 'View', 'Click', 'Enter_', 'Page_')) and len(s) < 60:
                    telemetry.append({'func': cur, 'line': lineno, 'event': s})

    print(f'functions with content: {len(funcs)}')
    nstr = sum(len(f['strings']) for f in funcs.values())
    print(f'total wide-string refs: {nstr}, geometry calls: {len(geom_calls)}, dialog calls: {len(dialog_calls)}, telemetry events: {len(telemetry)}')

    out = {
        'functions': {a: {'strings': v['strings'][:80], 'imports': sorted(v['imports'])[:60], 'start_line': v['start_line']}
                      for a, v in funcs.items() if v['strings'] or v['imports']},
        'geometry_calls': geom_calls,
        'dialog_calls': dialog_calls,
        'telemetry': telemetry,
    }
    with open('/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_function_map.json', 'w') as f:
        json.dump(out, f, indent=1)
    print('wrote drwwui_function_map.json')

if __name__ == '__main__':
    main()
