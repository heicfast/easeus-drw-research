#!/usr/bin/env python3
"""Dump the raw CFileSystemNode vtable at 0x14187ff60 from DRWUI.exe
(manual PE parsing, no pefile dependency)."""
import struct

EXE = '/home/z/easeus-drw-research/og-codebase/DRWUI.exe'
data = open(EXE, 'rb').read()

# Parse PE headers
e_lfanew = struct.unpack_from('<I', data, 0x3C)[0]
assert data[e_lfanew:e_lfanew+4] == b'PE\0\0'
coff = e_lfanew + 4
machine, nsec, _, _, _, opt_size, _ = struct.unpack_from('<HHIIIHH', data, coff)
opt = coff + 20
magic = struct.unpack_from('<H', data, opt)[0]
assert magic == 0x20b  # PE32+
base = struct.unpack_from('<Q', data, opt + 24)[0]  # ImageBase
sec_table = opt + opt_size

sections = []
for i in range(nsec):
    off = sec_table + i * 40
    nm = data[off:off+8].rstrip(b'\0').decode(errors='replace')
    vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', data, off + 8)
    sections.append((nm, base + vaddr, vsize, rawptr, rawsize))
    print(f'{nm:10s} VA {base+vaddr:#x} vsize {vsize:#x} raw {rawptr:#x}')

def va_to_off(va):
    for nm, sva, vsz, rawptr, rawsz in sections:
        if sva <= va < sva + vsz:
            if va - sva < rawsz:
                return rawptr + (va - sva)
    return None

def read_qword(va):
    off = va_to_off(va)
    if off is None:
        return None
    return struct.unpack_from('<Q', data, off)[0]

VT = 0x14187ff60
print()
print('COL ptr at vftable-8:', hex(read_qword(VT - 8) or 0))
print()
for i in range(20):
    fp = read_qword(VT + i * 8)
    sec = None
    for nm, sva, vsz, rawptr, rawsz in sections:
        if sva <= fp < sva + vsz:
            sec = nm
    print(f'slot +0x{i*8:02X} (index {i:2d}): {fp:#x}  [{sec}]')
