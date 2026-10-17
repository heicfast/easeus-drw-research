#!/usr/bin/env python3
"""Resolve content-object classes for the record-4 tree grammar.

For each factory function in the FUN_1400d6e50 dispatch, disassemble to find
the vftable it installs, resolve the COL -> class name, and dump ordered slots.
Also resolve CFileNode's vtable (marker-0 node class).
"""
import struct, subprocess, re, sys

EXE = '/home/z/easeus-drw-research/og-codebase/DRWUI.exe'
data = open(EXE, 'rb').read()

# --- manual PE parse ---
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
        if sva <= va < sva + vsz:
            if va - sva < rawsz:
                return rawptr + (va - sva)
    return None

def read_qword(va):
    off = va_to_off(va)
    return None if off is None else struct.unpack_from('<Q', data, off)[0]

def read_dword(va):
    off = va_to_off(va)
    return None if off is None else struct.unpack_from('<I', data, off)[0]

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

# --- build COL -> class map ---
rdata = [(nm, sva, vsz, rp, rs) for nm, sva, vsz, rp, rs in sections if nm == '.rdata'][0]
nm, sva, vsz, rp, rs = rdata
rdata_bytes = data[rp:rp+rs]
col_to_class = {}
for off in range(0, vsz - 24, 4):
    sig, obj_off, cd_off, td_rel, chd_rel = struct.unpack_from('<5I', rdata_bytes, off)
    if sig != 1 or td_rel == 0:
        continue
    td_va = base + td_rel
    # TypeDescriptor: [vftable(8)][spare(8)][name...]
    name = read_cstr(td_va + 0x10)
    if name and name.startswith('.?A'):
        col_to_class[sva + off] = demangle(name)

print(f'COL map: {len(col_to_class)} classes')

# --- vftable -> class ---
def vftable_class(vft_va):
    col = read_qword(vft_va - 8)
    if col in col_to_class:
        return col_to_class[col]
    return None

# --- disassemble a function, find vftable references ---
def find_vftables_in_fn(fn_va, max_len=0x200):
    out = subprocess.run(
        ['objdump', '-d', f'--start-address={fn_va:#x}', f'--stop-address={fn_va + max_len:#x}', EXE],
        capture_output=True, text=True).stdout
    refs = []
    for line in out.splitlines():
        m = re.search(r'lea\s+0x[0-9a-f]+\(%rip\),%\w+\s+#\s+0x([0-9a-f]+)', line)
        if m:
            target = int(m.group(1), 16)
            col = read_qword(target - 8)
            if col in col_to_class:
                refs.append((target, col_to_class[col]))
    return refs

FACTORIES = {
    0x00: 0x140520600,
    0x01: 0x1405aec10,
    0x03: 0x140c40ce0,
    0x04: 0x14058c350,
    0x05a: 0x1405e3d40,   # param_2 == 0 variant
    0x05b: 0x1405e46d0,   # param_2 != 0 variant (new 0x40)
    0x06: 0x1405f4e00,
    0x07: 0x1404f91b0,    # new 0xb6
    0x08: 0x1405abbf0,
    0x09: 0x140322e30,
    0x0c: 0x1400d69d0,
}

print('\n=== content-object class resolution ===')
for code, fn in sorted(FACTORIES.items(), key=lambda x: (x[0])):
    refs = find_vftables_in_fn(fn)
    if refs:
        for vft, cls in refs:
            print(f'type {code:#04x}: factory {fn:#x} -> vftable {vft:#x} = class {cls}')
    else:
        print(f'type {code:#04x}: factory {fn:#x} -> NO vftable ref found (base ctor?)')

# CFileNode vtable: find the inline ctor's vftable — search for CFileNode in COL map
print('\n=== CFileNode vtable ===')
for col, cls in col_to_class.items():
    if cls == 'CFileNode':
        print(f'CFileNode COL at {col:#x}')
# find vftables pointing at CFileNode COLs
n_slots = len(rdata_bytes) // 8
cfn_vfts = []
for slot in range(n_slots):
    off = slot * 8
    try:
        p = struct.unpack_from('<Q', rdata_bytes, off)[0]
    except struct.error:
        break
    if p in col_to_class and col_to_class[p] == 'CFileNode':
        vft_va = sva + off + 8
        cfn_vfts.append(vft_va)
        print(f'CFileNode vftable at {vft_va:#x}')
        for i in range(12):
            fp = read_qword(vft_va + i * 8)
            print(f'  slot +0x{i*8:02X}: {fp if fp is None else hex(fp)}')
