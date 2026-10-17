#!/usr/bin/env python3
"""Field-value census for the IFileProperties content objects across all .rsf samples.
Purpose: infer per-field SEMANTICS (FILETIME vs size vs FRN vs flags) from value distributions.
Reuses the byte-exact-validated record-4 grammar from scripts/rsf_record4_grammar.py."""
import struct, sys, zlib, os
from collections import Counter, defaultdict

MAGIC = bytes.fromhex('eaf4b31b0543b64ab4b8244a33d913bb')
REC4 = bytes.fromhex('6cf208d28c07344e9d71d91f535f7b57')

# ---------------- container (reuse validated loader from rsf_record4_grammar.py) ----------------
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from rsf_record4_grammar import load_record4

# ---------------- census reader ----------------
class C:
    def __init__(self):
        self.by_type = defaultdict(lambda: defaultdict(list))
        self.names_by_type = defaultdict(list)
        self.count = Counter()

c = C()

def datarun(buf, o):
    n = struct.unpack_from('<I', buf, o)[0]; o += 4
    run = buf[o:o+n]; o += n
    fl = struct.unpack_from('<H', buf, o)[0]; o += 2
    return o, run, fl

def content(buf, o, marker, tid_seq):
    t = struct.unpack_from('<I', buf, o)[0]; o += 4
    c.count[f'type_{t:#x}'] += 1
    F = c.by_type[t]
    if t == 0:      # CNTFSFileProperties
        n = struct.unpack_from('<H', buf, o)[0]; o += 2
        name = buf[o:o+n]; o += n
        f1 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x1b
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2   # +0x23
        f2 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x25
        f3 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x2d
        f4 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x35
        f5 = buf[o]; o += 1                                    # +0x3d byte
        f6 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x40
        f7 = struct.unpack_from('<I', buf, o)[0]; o += 4      # +0x64 int
        f8 = struct.unpack_from('<I', buf, o)[0]; o += 4      # +0x60 int
        hasrun = struct.unpack_from('<I', buf, o)[0]; o += 4
        run = None
        if hasrun:
            o, run, rfl = datarun(buf, o)
            F['runlen'].append(len(run))
        cnt = struct.unpack_from('<Q', buf, o)[0]; o += 8
        pairs = []
        for _ in range(cnt):
            a = struct.unpack_from('<Q', buf, o)[0]; o += 8
            b = struct.unpack_from('<Q', buf, o)[0]; o += 8
            pairs.append((a, b))
        for k, v in [('f1_1b', f1), ('flags', flags), ('f2_25', f2), ('f3_2d', f3),
                     ('f4_35', f4), ('f5_3d', f5), ('f6_40', f6), ('f7_64', f7), ('f8_60', f8),
                     ('paircnt', cnt)]:
            F[k].append(v)
        if len(pairs) < 4:
            F['pairs_sample'].append(pairs)
        if len(c.names_by_type[t]) < 30 and name:
            c.names_by_type[t].append((name[:40].decode('utf-8','replace'), f1, f2, f3, f4, f5, f7, f8))
    elif t == 1:    # CFATFileProperties
        n = struct.unpack_from('<H', buf, o)[0]; o += 2
        name = buf[o:o+n]; o += n
        f1 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x1b
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2   # +0x23
        f2 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f3 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f4 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f5 = buf[o]; o += 1
        f7 = struct.unpack_from('<I', buf, o)[0]; o += 4      # +0x3e
        f8 = struct.unpack_from('<I', buf, o)[0]; o += 4      # +0x42
        hasrun = struct.unpack_from('<I', buf, o)[0]; o += 4
        if hasrun:
            o, run, rfl = datarun(buf, o)
            F['runlen'].append(len(run))
        for k, v in [('f1_1b', f1), ('flags', flags), ('f2', f2), ('f3', f3), ('f4', f4),
                     ('f5', f5), ('f7', f7), ('f8', f8)]:
            F[k].append(v)
        if len(c.names_by_type[t]) < 30 and name:
            c.names_by_type[t].append((name[:40].decode('utf-8','replace'), f1, f2, f3, f4, f5, f7, f8))
    elif t == 3:    # CRAWFileProperties
        n = buf[o]; o += 1
        sname = buf[o:o+n]; o += n
        m2 = buf[o]; o += 1
        ts = buf[o:o+m2]; o += m2
        f_ft = struct.unpack_from('<Q', buf, o)[0]; o += 8    # +0x1a FILETIME
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2   # +0x22
        f5 = buf[o]; o += 1
        f6 = struct.unpack_from('<I', buf, o)[0]; o += 4      # +0x56
        m3 = buf[o]; o += 1
        s2 = buf[o:o+m3]; o += m3
        f7 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x8c
        f8 = struct.unpack_from('<Q', buf, o)[0]; o += 8      # +0x94
        f9 = struct.unpack_from('<I', buf, o)[0]; o += 4      # +0xf4
        f10 = struct.unpack_from('<I', buf, o)[0]; o += 4     # +0xf8
        o, run, rfl = datarun(buf, o)
        for k, v in [('ft_1a', f_ft), ('flags', flags), ('f5', f5), ('f6', f6),
                     ('f7_8c', f7), ('f8_94', f8), ('f9_f4', f9), ('f10_f8', f10),
                     ('runlen', len(run))]:
            F[k].append(v)
        if len(c.names_by_type[t]) < 30 and (sname or ts):
            c.names_by_type[t].append((sname[:30].decode('utf-8','replace'), ts[:24].decode('utf-8','replace'), f_ft, f7, f8, f9, f10))
    elif t == 4:    # CExFatFileProperties
        f0 = struct.unpack_from('<H', buf, o)[0]; o += 2
        f1 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2   # +0x30
        f2 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f3 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f4 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f5 = buf[o]; o += 1
        f7 = struct.unpack_from('<I', buf, o)[0]; o += 4
        f8 = struct.unpack_from('<I', buf, o)[0]; o += 4
        hasrun = struct.unpack_from('<I', buf, o)[0]; o += 4
        if hasrun:
            o, run, rfl = datarun(buf, o)
            F['runlen'].append(len(run))
        for k, v in [('f0', f0), ('f1', f1), ('flags', flags), ('f2', f2), ('f3', f3),
                     ('f4', f4), ('f5', f5), ('f7', f7), ('f8', f8)]:
            F[k].append(v)
    elif t == 8:    # CEXT4FileProperties
        n = struct.unpack_from('<H', buf, o)[0]; o += 2
        name = buf[o:o+n]; o += n
        f1 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2   # +0x39
        f2 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f3 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f4 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f5 = buf[o]; o += 1
        f6 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        hasrun = struct.unpack_from('<I', buf, o)[0]; o += 4
        if hasrun:
            o, run, rfl = datarun(buf, o)
            F['runlen'].append(len(run))
        for k, v in [('f1', f1), ('flags', flags), ('f2', f2), ('f3', f3), ('f4', f4),
                     ('f5', f5), ('f6', f6)]:
            F[k].append(v)
    elif t == 9:    # CGenericFileProperties
        n = struct.unpack_from('<I', buf, o)[0]; o += 4
        name = buf[o:o+n]; o += n
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2   # +0x38
        f2 = struct.unpack_from('<H', buf, o)[0]; o += 2      # +0x3a
        for k, v in [('flags', flags), ('f2_3a', f2)]:
            F[k].append(v)
        if len(c.names_by_type[t]) < 30 and name:
            c.names_by_type[t].append((name[:40].decode('utf-8','replace'), flags, f2))
    elif t == 0xc:  # ZfsFileProperties
        f0 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        n = struct.unpack_from('<Q', buf, o)[0]; o += 8
        name = buf[o:o+n]; o += n
        f1 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        flags = struct.unpack_from('<H', buf, o)[0]; o += 2
        f2 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f3 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f4 = struct.unpack_from('<Q', buf, o)[0]; o += 8
        f5 = struct.unpack_from('<H', buf, o)[0]; o += 2
        f6 = struct.unpack_from('<I', buf, o)[0]; o += 4
        for k, v in [('f0', f0), ('flags', flags), ('f1', f1), ('f2', f2), ('f3', f3), ('f4', f4), ('f5', f5), ('f6', f6)]:
            F[k].append(v)
    else:
        raise ValueError(f'unhandled type {t:#x} @{o:#x}')
    return o, flags

def node(buf, o, marker):
    o += 34
    if marker == 1:
        o += 8 + 40
        o += 8 + 4 + 4
        nl = struct.unpack_from('<I', buf, o)[0]; o += 4
        o += 4 + 4 + 4
        o += 4 + 8 + 8 + 1 + 1
        o += nl
        vc = struct.unpack_from('<I', buf, o)[0]; o += 4
        for _ in range(vc):
            o = node(buf, o, 1)
    return o

def walk(buf):
    o = 0
    flag = buf[o]; o += 1
    if flag == 0: o += 12
    else: o += 4
    rootn = struct.unpack_from('<I', buf, o)[0]; o += 4
    for i in range(rootn):
        m = struct.unpack_from('<I', buf, o)[0]; o += 4
        assert m == 1
        o = node(buf, o, 1)
        o, _cf = content(buf, o, 1, None)
        q = [1]
        while q:
            q.pop(0)
            while True:
                cm = struct.unpack_from('<I', buf, o)[0]; o += 4
                if cm == 0xFFFFFFFF: break
                o = node(buf, o, cm)
                o, cf = content(buf, o, cm, None)
                if cf & 0x10:
                    q.append(1)

def is_filetime(v):
    return 0x01CE000000000000 <= v <= 0x01DB000000000000  # 2017..2027

def fmt_ft(v):
    import datetime
    try:
        return (datetime.datetime(1601,1,1) + datetime.timedelta(microseconds=v/10)).isoformat()
    except Exception:
        return '?'

def summarize(tag):
    print(f'\n########## {tag} ##########')
    for t in sorted(c.by_type):
        F = c.by_type[t]
        print(f'\n== type {t:#x} (n={c.count[f"type_{t:#x}"]}) ==')
        for k in sorted(F):
            vals = F[k]
            if k in ('pairs_sample',):
                print(f'  {k}: {vals[:3]}')
                continue
            nz = [v for v in vals if v]
            if not nz:
                print(f'  {k}: ALL-ZERO ({len(vals)} samples)')
                continue
            ft = sum(1 for v in nz if is_filetime(v) if isinstance(v,int))
            unix = sum(1 for v in nz if 1500000000 <= v <= 1900000000)
            print(f'  {k}: nonzero {len(nz)}/{len(vals)}  min={min(nz):,}  max={max(nz):,}  '
                  f'filetime-range={ft}  unix-range={unix}')
        for nm in c.names_by_type.get(t, [])[:8]:
            print('  sample:', nm)

for p in sys.argv[1:]:
    tag = os.path.basename(p)
    buf = load_record4(p)
    if buf is None:
        print(f'{tag}: no record4'); continue
    walk(buf)
    summarize(tag + ' [rec4]')
    c = C()
print('\n[done]')
