#!/usr/bin/env python3
"""Resolve the SLOT-string addresses in DRWUI connect() calls to their C-strings,
then build the complete signal->slot wiring pairs."""
import json, struct, re
from collections import Counter

PE = '/home/z/my-project/repo/og-codebase/DRWUI.exe'
data = open(PE, 'rb').read()

# Parse PE sections for RVA -> file offset
pe_off = struct.unpack('<I', data[0x3c:0x40])[0]
nsec = struct.unpack('<H', data[pe_off+6:pe_off+8])[0]
opt_size = struct.unpack('<H', data[pe_off+20:pe_off+22])[0]
sec0 = pe_off + 24 + opt_size
secs = []
for i in range(nsec):
    s = sec0 + i*40
    name = data[s:s+8].rstrip(b'\0').decode()
    vsize, va, rsize, raw = struct.unpack('<IIII', data[s+8:s+24])
    secs.append((name, va, vsize, raw, rsize))

def rva_to_off(rva):
    for name, va, vsize, raw, rsize in secs:
        if va <= rva < va + vsize:
            return raw + (rva - va), name
    return None, None

def read_cstr(rva):
    off, sec = rva_to_off(rva)
    if off is None: return None, sec
    end = data.find(b'\x00', off)
    if end < 0 or end - off > 200: return None, sec
    try: return data[off:end].decode('utf-8', 'replace'), sec
    except: return None, sec

evs = json.load(open('/home/z/my-project/repo/scripts/connect_events.json'))

# Pattern: connect(a, b, "2signal(...)", c, 0xADDR)  OR  connect(a, b, ptr, "2signal()", 0xADDR)
# The 0xADDR (truncated 0x140...) is likely the SLOT string; occasionally another signal string.
pat = re.compile(r'QObject::connect\((.*)\)\s*;')
resolved = []
for e in evs:
    m = pat.search(e['stmt'])
    if not m: continue
    args = m.group(1)
    lits = re.findall(r'"([^"]*)"', args)
    hexes = re.findall(r'0x([0-9a-f]{8})\b', args)
    sig = next((l for l in lits if l.startswith('2')), None)
    other = [l for l in lits if not l.startswith('2')]
    slot = None
    for h in hexes:
        v = int(h, 16)
        # Ghidra prints truncated (low-32) VAs for stack args: 0x40ddfe68 == 0x140ddfe68
        rva = None
        if v >= 0x40000000:          # truncated form: VA = v + 0x100000000, RVA = v - 0x40000000
            rva = v - 0x40000000
        elif 0x140000000 > v >= 0x1000:  # full VA printed
            rva = v - 0x140000000 if v >= 0x140000000 else v
        if rva is None: continue
        s, sec = read_cstr(rva)
        if s and (s.startswith('1') or s.startswith('2')):
            slot = s
            break
        elif s and slot is None and len(s) < 120 and '(' in s:
            slot = s  # non-macro method string (PMF style normalized)
    resolved.append({
        'line': e['line'], 'func': e['func'], 'sig': sig, 'slot': slot,
        'other_lits': other, 'hexes': hexes,
    })

json.dump(resolved, open('/home/z/my-project/repo/scripts/connect_resolved.json', 'w'), indent=1)

n_pair = sum(1 for r in resolved if r['sig'] and r['slot'])
n_sig = sum(1 for r in resolved if r['sig'])
n_slot_lit = sum(1 for r in resolved if r['slot'] and r['slot'].startswith('1'))
print(f"connects with signal: {n_sig}/{len(resolved)}")
print(f"connects with BOTH sig+slot resolved: {n_pair}")
print(f"slot resolved as SLOT-macro literal ('1...'): {n_slot_lit}")

# top pairs
pairs = Counter()
for r in resolved:
    if r['sig'] and r['slot']:
        pairs[(r['sig'][1:] if r['sig'].startswith('2') else r['sig'],
               r['slot'][1:] if r['slot'].startswith('1') else r['slot'])] += 1
print(f"\nunique (signal,slot) pairs: {len(pairs)}")
print("\nTop 50 pairs:")
for (a, b), c in pairs.most_common(50):
    print(f"  {c:3d}  {a}   -->   {b}")
