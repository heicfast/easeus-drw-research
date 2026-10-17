#!/usr/bin/env python3
"""Enrich connect events with the owning class: scan the enclosing function's body
for vftable assignments (Class::vftable) — the class whose ctor/setup does the wiring."""
import json, re
from collections import Counter, defaultdict

SRC = '/home/z/my-project/repo/re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c'
lines = open(SRC, encoding='utf-8', errors='replace').read().split('\n')

evs = json.load(open('/home/z/my-project/repo/scripts/connect_resolved.json'))

# vftable assignment pattern:  *(..) = CSomeClass::vftable  (or `= CSomeClass::vftable;`)
VFT = re.compile(r'=\s*([A-Za-z_][\w]*)::vftable')

# find function start indices once (reuse the find_func logic boundaries)
def func_starts():
    starts = []
    pat = re.compile(r'^(?:undefined\w+|void|bool|char|int|uint|longlong|HRESULT|wchar_t\*?|QString|float|double|undefined8|code|size_t|LP\w+|HANDLE|DWORD)\s+(FUN_[0-9a-f]+|[\w:~]+)\(')
    for i, l in enumerate(lines):
        if pat.match(l) or ('FUN_' in l and re.match(r'^.*FUN_[0-9a-f]+\s*\(', l)):
            starts.append(i)
    return starts

starts = func_starts()
import bisect

def class_hint(line_idx):
    """Search the enclosing function body for vftable assignments."""
    fi = bisect.bisect_right(starts, line_idx - 1) - 1
    if fi < 0: return []
    start = starts[fi]
    end = starts[fi + 1] if fi + 1 < len(starts) else min(start + 3000, len(lines))
    end = min(end, start + 6000)
    found = []
    for k in range(start, min(end, start + 6000)):
        m = VFT.search(lines[k])
        if m:
            found.append(m.group(1))
    return list(dict.fromkeys(found))[:6]

for e in evs:
    e['classes'] = class_hint(e['line'] - 1)

json.dump(evs, open('/home/z/my-project/repo/scripts/connect_enriched.json', 'w'), indent=1)

# group census
grp = Counter()
for e in evs:
    sig = (e['sig'] or '')[1:] if e['sig'] and e['sig'].startswith('2') else (e['sig'] or '')
    slot = (e['slot'] or '')
    if slot.startswith('1'): slot = slot[1:]
    elif slot.startswith('2'): slot = '[relay]' + slot[1:]
    grp[tuple(sorted(e['classes']))] += 1

print("Top wiring-owner class groups:")
for k, c in grp.most_common(40):
    print(f"  {c:3d}  {', '.join(k) if k else '?'}")

# functional classification
def bucket(sig, slot):
    t = (sig + ' ' + slot).lower()
    if any(x in t for x in ['scan', 'quickscan', 'loadfinish']): return 'scan-flow'
    if any(x in t for x in ['recover', 'restore', 'destination']): return 'recovery-flow'
    if any(x in t for x in ['repair']): return 'repair-flow'
    if any(x in t for x in ['filter', 'sort', 'classify', 'search', 'tree', 'node', 'expand', 'page', 'list', 'icon', 'tab']): return 'results-page'
    if any(x in t for x in ['nas', 'connect', 'linux', 'ssh', 'bitlock', 'cloud', 'icloud', 'download']): return 'scenario-connectors'
    if any(x in t for x in ['preview', 'play', 'media', 'video', 'pix']): return 'preview'
    if any(x in t for x in ['licence', 'license', 'activ', 'buy', 'purchase', 'upgrade', 'gift', 'pirate', 'about', 'share', 'follow', 'user rate']): return 'monetization'
    if any(x in t for x in ['dispatchmessage', 'receivdata', 'msgdata']): return 'mom-bus'
    if any(x in t for x in ['navigate', 'inapp', 'link', 'url']): return 'inapp-browser'
    if 'timeout' in t or 'timer' in t: return 'timers-progress'
    if 'close' in t or 'hide' in t or 'deletelater' in t: return 'lifecycle'
    return 'misc-ui'

bk = Counter()
for e in evs:
    sig = (e['sig'] or '')
    slot = (e['slot'] or '')
    bk[bucket(sig, slot)] += 1
print("\nFunctional buckets:")
for k, c in bk.most_common():
    print(f"  {c:4d}  {k}")

# timer inventory: timeout() consumers
print("\ntimeout() consumers (the polling-timer census):")
tc = Counter()
for e in evs:
    if e['sig'] == '2timeout()':
        s = e['slot'] or ''
        tc[(s[1:] if s.startswith('1') else s, ', '.join(e['classes'][:2]))] += 1
for (s, cl), c in tc.most_common(30):
    print(f"  {c:2d}  {s}   [{cl}]")
