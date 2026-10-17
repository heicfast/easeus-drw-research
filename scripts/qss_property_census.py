#!/usr/bin/env python3
"""
qss_property_census.py — Full per-objectName property census of DRWUI style.css.

Covers (beyond the existing layout-only census):
  - ALL properties per selector (colors, backgrounds, borders, images, fonts, spacing)
  - per-objectName aggregation across rules + pseudo-states (:hover/:pressed/...)
  - attribute-state selectors ([state='...'])
  - section-by-section breakdown (/*====DEV====*/ markers, line ranges)
  - color usage census (literal colors + themed palette slots)
  - image asset reference census (url(:/Resource/...) -> RCC asset paths)
  - widget-type coverage (which Qt widget classes are styled)

Output: re-workspace/reversed/ui-resources/qss_property_census.json + digest to stdout.
"""
import re, json, sys
from collections import defaultdict, Counter

SRC = '/home/z/my-project/repo/og-codebase/style.css'
OUT = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/qss_property_census.json'

PSEUDO_RE = re.compile(r':(hover|pressed|checked|unchecked|disabled|enabled|focus|selected|default|on|off|indeterminate|open|closed|editable|read-only|focus.*)?\b')
ATTR_RE = re.compile(r"\[([^\]=\s]+)\s*=\s*'([^']+)'\]|\[([^\]=\s]+)\s*=\s*\"([^\"]+)\"\]")
NAME_RE = re.compile(r'#([A-Za-z_][A-Za-z0-9_\-]*)')
WIDGET_RE = re.compile(r'\b(Q[A-Z][A-Za-z]+|[A-Z][A-Za-z]*Button|[A-Z][A-Za-z]*View|[A-Z][A-Za-z]*Widget|[A-Z][A-Za-z]*Bar|[A-Z][A-Za-z]*Dlg|[A-Z][A-Za-z]*Wnd|[A-Z][A-Za-z]*Menu|[A-Z][A-Za-z]*Frame|[A-Z][A-Za-z]*Label)\b')
PROP_SPLIT = re.compile(r';')
COLOR_VAL = re.compile(r'#[0-9a-fA-F]{3,8}\b|rgba?\([^)]*\)')
URL_VAL = re.compile(r'url\(\s*([^)]+?)\s*\)')

def main():
    lines = open(SRC).read().splitlines()
    txt = '\n'.join(lines)

    # ---- sections (developer/functional markers with line ranges) ----
    sections = []
    sec_re = re.compile(r'/\*\s*=+\s*(.*?)\s*=+\s*\*/')
    for m in sec_re.finditer(txt):
        ln = txt[:m.start()].count('\n') + 1
        sections.append({'line': ln, 'title': m.group(1)[:80]})
    for i, s in enumerate(sections):
        s['end_line'] = sections[i + 1]['line'] - 1 if i + 1 < len(sections) else len(lines)

    # ---- rules ----
    rules = []
    rule_re = re.compile(r'([^{}]+)\{([^{}]*)\}')
    for m in rule_re.finditer(txt):
        ln = txt[:m.start()].count('\n') + 1
        sel_txt = m.group(1).strip()
        body = m.group(2)
        props = {}
        for decl in PROP_SPLIT.split(body):
            if ':' not in decl: continue
            k, _, v = decl.partition(':')
            k = k.strip(); v = v.strip().rstrip('\n')
            if k: props[k] = v
        if not props: continue
        rules.append({'line': ln, 'selector': sel_txt, 'props': props})

    # ---- per-selector classification ----
    by_name = defaultdict(lambda: {'rules': [], 'props': Counter(), 'states': set(), 'attrs': set(), 'widgets': set()})
    color_census = Counter()
    image_refs = Counter()
    prop_type_census = Counter()
    widget_census = Counter()
    pseudo_census = Counter()
    attr_state_census = Counter()

    for r in rules:
        sel = r['selector']
        sels = [s.strip() for s in sel.split(',')]
        for one in sels:
            names = NAME_RE.findall(one)
            pseudos = re.findall(r':([a-z\-]+(?:\([^)]*\))?)', one)
            attrs = [(a or c, b or d) for a, b, c, d in ATTR_RE.findall(one)]
            widgets = WIDGET_RE.findall(one)
            for p in pseudos: pseudo_census[p] += 1
            for a in attr_state_census: pass
            for k, v in attrs: attr_state_census[(k, v)] += 1
            for w in widgets: widget_census[w] += 1
            key = names[0] if names else (widgets[0] if widgets else one)
            ent = by_name[key]
            ent['rules'].append({'line': r['line'], 'selector': one, 'props': r['props']})
            for k, v in r['props'].items():
                ent['props'][k] += 1
                prop_type_census[k] += 1
                for c in COLOR_VAL.findall(v): color_census[c] += 1
                for u in URL_VAL.findall(v): image_refs[u] += 1
            if names: ent['states'].update(pseudos)
            ent['attrs'].update(f'{k}={v}' for k, v in attrs)
            ent['widgets'].update(widgets)

    # ---- package ----
    out = {
        'meta': {'source': 'og-codebase/style.css', 'lines': len(lines), 'rules': len(rules),
                 'unique_targets': len(by_name), 'declarations': sum(prop_type_census.values())},
        'sections': sections,
        'prop_type_census': dict(prop_type_census.most_common()),
        'color_census': dict(color_census.most_common()),
        'image_refs': dict(image_refs.most_common()),
        'widget_census': dict(widget_census.most_common()),
        'pseudo_state_census': dict(pseudo_census.most_common()),
        'attr_state_census': {f'{k}={v}': c for (k, v), c in attr_state_census.most_common()},
        'by_target': {},
    }
    for key, ent in sorted(by_name.items(), key=lambda kv: -len(kv[1]['rules'])):
        out['by_target'][key] = {
            'n_rules': len(ent['rules']),
            'props': dict(ent['props'].most_common()),
            'states': sorted(ent['states']),
            'attrs': sorted(ent['attrs']),
            'widgets': sorted(ent['widgets']),
            'rules': ent['rules'][:40],
        }
    json.dump(out, open(OUT, 'w'), indent=1)

    # ---- digest ----
    m = out['meta']
    print(f"[+] {m['rules']} rules / {m['declarations']} declarations / {m['unique_targets']} styled targets / {len(sections)} sections")
    print('\nTop property types:')
    for k, c in list(out['prop_type_census'].items())[:15]: print(f'   {k:28s} {c}')
    print('\nTop colors:')
    for k, c in list(out['color_census'].items())[:12]: print(f'   {k:28s} {c}')
    print('\nTop pseudo-states:')
    for k, c in list(out['pseudo_state_census'].items())[:10]: print(f'   {k:28s} {c}')
    print('\nTop attr-states:')
    for k, c in list(out['attr_state_census'].items())[:12]: print(f'   {k:36s} {c}')
    print('\nTop widgets styled:')
    for k, c in list(out['widget_census'].items())[:12]: print(f'   {k:28s} {c}')
    print(f'\nImage refs: {len(out["image_refs"])} unique assets')
    print(f'[+] wrote {OUT}')

if __name__ == '__main__':
    main()
