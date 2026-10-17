#!/usr/bin/env python3
"""Dump vtable slots +0x38 (flags getter) and +0xa0 (GetType) for the
IFileProperties classes, then disassemble the flag getters to find which
serialized field carries the has-children bit (0x10)."""
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

rd = [s for s in sections if s[0] == '.rdata'][0]
nm, sva, vsz, rp, rs = rd
rdata_bytes = data[rp:rp+rs]
col_to_class = {}
for off in range(0, vsz - 24, 4):
    sig, obj_off, cd_off, td_rel, chd_rel = struct.unpack_from('<5I', rdata_bytes, off)
    if sig != 1 or td_rel == 0:
        continue
    name = read_cstr(base + td_rel + 0x10)
    if name and name.startswith('.?A'):
        col_to_class[sva + off] = demangle(name)

def disasm(fn_va, n=0x100):
    return subprocess.run(
        ['objdump', '-d', f'--start-address={fn_va:#x}', f'--stop-address={fn_va + n:#x}', EXE],
        capture_output=True, text=True).stdout

# vftables of the classes we care about
TARGETS = {
    'CNTFSFileProperties': 0x1418944f8,
    'CGenericFileProperties': 0x1418885c0,
    'CFATFileProperties': 0x141897198,
    'CRAWFileProperties': 0x140f5f528,
}
for cls, vft in TARGETS.items():
    print(f'=== {cls} vft {vft:#x} ===')
    for slot, label in [(0x38, 'flags'), (0xa0, 'GetType')]:
        fp = read_qword(vft + slot)
        print(f'  +{slot:#x} ({label}): {fp:#x}')
        if fp:
            asm = disasm(fp, 0x60)
            for line in asm.splitlines():
                if re.search(r'mov|ret|and', line):
                    print('    ' + line.strip()[:90])
    print()
