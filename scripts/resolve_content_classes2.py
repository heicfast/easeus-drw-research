#!/usr/bin/env python3
"""Round 2: resolve remaining factory classes (0x01, 0x03, 0x06, 0x09)
by following direct call targets within the factory functions."""
import struct, subprocess, re

EXE = '/home/z/easeus-drw-research/og-codebase/DRWUI.exe'
data = open(EXE, 'rb').read()

e_lfanew = struct.unpack_from('<I', data, 0x3C)[0]
coff = e_lfanew + 4
machine, nsec, _, _, _, opt_size, _ = struct.unpack_from('<HHIIIHH', data, coff)
opt = coff + 20
base = struct.unpack_from('<Q', data, opt + 24)[0]
sec_table = opt + opt_size
sections = []
for i in range(nsec):
    off = sec_table + i * 40
    nm = data[off:off+8].rstrip(b'\0').decode(errors='replace')
    vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', data, off + 8)
    sections.append((nm, base + vaddr, vsize, rawptr, rawsize))

def va_to_off(va):
    for nm, sva, vsz, rawptr, rawsz in sections:
        if sva <= va < sva + vsz and va - sva < rawsz:
            return rawptr + (va - sva)
    return None

def read_qword(va):
    off = va_to_off(va)
    return None if off is None else struct.unpack_from('<Q', data, off)[0]

def read_cstr(va, maxn=200):
    off = va_to_off(va)
    if off is None:
        return None
    end = data.find(b'\0', off, off + maxn)
    if end == -1:
        return None
    try:
        return data[off:end].decode('ascii')
    except Exception:
        return None

def demangle(name):
    m = re.match(r'\.\?A[UVW4](.+?)@', name)
    return m.group(1).replace('@', '::') if m else name

rdata_sec = [s for s in sections if s[0] == '.rdata'][0]
nm, sva, vsz, rp, rs = rdata_sec
rdata_bytes = data[rp:rp+rs]
col_to_class = {}
for off in range(0, vsz - 24, 4):
    sig, obj_off, cd_off, td_rel, chd_rel = struct.unpack_from('<5I', rdata_bytes, off)
    if sig != 1 or td_rel == 0:
        continue
    td_va = base + td_rel
    name = read_cstr(td_va + 0x10)
    if name and name.startswith('.?A'):
        col_to_class[sva + off] = demangle(name)

def disasm(fn_va, max_len=0x400):
    return subprocess.run(
        ['objdump', '-d', f'--start-address={fn_va:#x}', f'--stop-address={fn_va + max_len:#x}', EXE],
        capture_output=True, text=True).stdout

def vftable_refs(fn_va, max_len=0x400):
    refs = []
    for line in disasm(fn_va, max_len).splitlines():
        m = re.search(r'lea\s+0x[0-9a-f]+\(%rip\),%\w+\s+#\s+0x([0-9a-f]+)', line)
        if m:
            target = int(m.group(1), 16)
            col = read_qword(target - 8)
            if col in col_to_class:
                refs.append((target, col_to_class[col]))
    return refs

def call_targets(fn_va, max_len=0x400):
    targets = []
    for line in disasm(fn_va, max_len).splitlines():
        m = re.search(r'call\s+0x([0-9a-f]+)', line)
        if m:
            t = int(m.group(1), 16)
            if not (0x140001000 <= t < 0x140001000 + 0xdc456d):
                continue
            if t != fn_va:
                targets.append(t)
    return targets

# follow the chain: factory -> called ctors -> vftables
for code, fn in [(0x01, 0x1405aec10), (0x03, 0x140c40ce0), (0x06, 0x1405f4e00),
                 (0x09, 0x140322e30), (0x0b, None)]:
    if fn is None:
        continue
    print(f'--- type {code:#04x} factory {fn:#x} ---')
    refs = vftable_refs(fn)
    for vft, cls in refs:
        print(f'  direct: {vft:#x} = {cls}')
    seen = set()
    for t in call_targets(fn):
        if t in seen:
            continue
        seen.add(t)
        for vft, cls in vftable_refs(t):
            print(f'  via call {t:#x}: {vft:#x} = {cls}')

# find the type-0x0b class: check writers that call GetType()==0xb — search
# vtables whose +0x0a0 slot returns 0xb: instead, find classes named like props
print('\n--- all IFileProperties-family classes (COL scan) ---')
for col, cls in col_to_class.items():
    if 'FilePropert' in cls or 'Properties' in cls:
        # find vftables for this COL
        for slot in range(len(rdata_bytes) // 8 - 1):
            off = slot * 8
            try:
                p = struct.unpack_from('<Q', rdata_bytes, off)[0]
            except struct.error:
                break
            if p == col:
                vft = sva + off + 8
                t0 = read_qword(vft + 0x98)
                print(f'{cls:40s} vft {vft:#x} serialize@+0x98={t0 if t0 is None else hex(t0)}')
                break
