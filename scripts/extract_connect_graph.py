#!/usr/bin/env python3
"""Extract the QObject::connect wiring graph from DRWUI_decompiled.c.
Each connect call has SIGNAL/SLOT macro literals ("2sig()" / "1slot()").
We extract: file line, sender-var, signal-literal, receiver-var, slot-literal, connection-type.
Multi-line calls are joined heuristically (up to 8 lines forward)."""
import re, json, sys

SRC = '/home/z/my-project/repo/re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c'

lines = open(SRC, encoding='utf-8', errors='replace').read().split('\n')

# Find lines containing QObject::connect( and gather the full statement
events = []
i = 0
n = len(lines)
while i < n:
    if 'QObject::connect(' in lines[i]:
        # accumulate until parenthesis balance (heuristic: until a line ends with ');' after start)
        buf = [lines[i]]
        j = i + 1
        depth = lines[i].count('(') - lines[i].count(')')
        while j < min(i + 12, n) and depth > 0:
            buf.append(lines[j])
            depth += lines[j].count('(') - lines[j].count(')')
            j += 1
        stmt = ' '.join(b.strip() for b in buf)
        # extract string literals
        lits = re.findall(r'"([^"]*)"', stmt)
        # strip what look like identifiers/vars: collect args between connect( and matching )
        events.append({
            'line': i + 1,
            'stmt': stmt[:600],
            'lits': lits,
        })
        i = j
        continue
    i += 1

print(f"total connect statements: {len(events)}", file=sys.stderr)

# Classify: signal literals start with '2', slots with '1', C++ lambdas have none
withsig = [e for e in events if any(l.startswith('2') for l in e['lits'])]
withslot = [e for e in events if any(l.startswith('1') for l in e['lits'])]
print(f"with SIGNAL literal: {len(withsig)}  with SLOT literal: {len(withslot)}", file=sys.stderr)

# Identify enclosing function name for each event (search backwards for FUN_ or :: pattern)
def find_func(idx):
    for k in range(idx, max(0, idx - 4000), -1):
        m = re.match(r'^(?:[A-Za-z_~][\w:<>~]*\s+)?(?:FUN_[0-9a-f]+|operator\w+)\s*\(', lines[k])
        if m and ('FUN_' in lines[k] or '::' in lines[k] or re.match(r'^[A-Za-z_][\w:]*\s+\w+\(', lines[k])):
            return lines[k].strip()[:150]
        # also match named methods like: void CLeftTreeView::foo(
        m2 = re.match(r'^(?:void|bool|char|int|undefined\w*|longlong|uint|HRESULT|wchar_t\*?|QString)\s+([\w:~]+)\(', lines[k])
        if m2:
            return m2.group(1)[:150]
    return '?'

for e in events:
    e['func'] = find_func(e['line'] - 1)

json.dump(events, open('/home/z/my-project/repo/scripts/connect_events.json', 'w'), indent=1)

# Summary: signal frequency
from collections import Counter
sig_count = Counter()
for e in events:
    for l in e['lits']:
        if l.startswith('2'):
            sig_count[l[1:]] += 1
print("\nTop 60 signals wired:")
for s, c in sig_count.most_common(60):
    print(f"  {c:3d}  {s}")
