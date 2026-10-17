#!/usr/bin/env python3
"""Resolve C<Format>Info classes in EUImgRepairFile.exe (32-bit PE):
find vftables via RTTI COLs, dump ordered slots, so we can locate
AnalysisData/Repair method addresses for PNG/WebP/HEIC."""
import struct, subprocess, re, sys

EXE = '/home/z/easeus-drw-research/og-codebase/EUFileRepair/EUImgRepairFile.exe'
data = open(EXE, 'rb').read()

e_lfanew = struct.unpack_from('<I', data, 0x3C)[0]
coff = e_lfanew + 4
machine, nsec, _, _, _, opt_size, _ = struct.unpack_from('<HHIIIHH', data, coff)
opt = coff + 20
magic = struct.unpack_from('<H', data, opt)[0]
base = struct.unpack_from('<I', data, opt + 28)[0] if magic == 0x10b else struct.unpack_from('<Q', data, opt + 24)[0]
bit32 = magic == 0x10b
sec_table = opt + opt_size
sections = []
for i in range(nsec):
    off = sec_table + i * 40
    nm = data[off:off+8].rstrip(b'\0').decode(errors='replace')
    vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', data, off + 8)
    sections.append((nm, base + vaddr, vsize, rawptr, rawsize))
    print(f'{nm:10s} VA {base+vaddr:#x} vsize {vsize:#x}')

def va_to_off(va):
    for nm, sva, vsz, rawptr, rawsz in sections:
        if sva <= va < sva + vsz and va - sva < rawsz:
            return rawptr + (va - sva)
    return None

def read_ptr(va):
    off = va_to_off(va)
    if off is None:
        return None
    return struct.unpack_from('<I' if bit32 else '<Q', data, off)[0]

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

# find .rdata
rd = [s for s in sections if s[0] == '.rdata'][0]
nm, sva, vsz, rp, rs = rd
rdata_bytes = data[rp:rp+rs]
col_to_class = {}
# 32-bit RTTI COL: {sig=1, offset, cdOffset, pTypeDescriptor(RVA), pClassDescriptor(RVA)}
for off in range(0, vsz - 20, 4):
    sig, obj_off, cd_off, td_rel, chd_rel = struct.unpack_from('<5I', rdata_bytes, off)
    if sig != 1 or td_rel == 0:
        continue
    name = read_cstr(base + td_rel + (8 if bit32 else 0x10))
    if name and name.startswith('.?A'):
        col_to_class[sva + off] = demangle(name)
print(f'COL map: {len(col_to_class)} classes')

def dump_class(target):
    # find vftables whose COL matches target
    found = []
    for slot in range(len(rdata_bytes) // 4):
        off = slot * 4
        try:
            p = struct.unpack_from('<I', rdata_bytes, off)[0]
        except struct.error:
            break
        if p in col_to_class and col_to_class[p] == target:
            vft_va = sva + off + 4
            slots = []
            i = 0
            while i < 40:
                fp = read_ptr(vft_va + i * 4)
                if fp is None or fp == 0:
                    break
                sec = None
                for snm, ssva, svsz, srp, srsz in sections:
                    if ssva <= fp < ssva + svsz and snm == '.text':
                        sec = '.text'
                if sec is None:
                    break
                slots.append(fp)
                i += 1
            found.append((vft_va, slots))
    return found

for target in ['CPngInfo', 'CWebpInfo', 'CHeicInfo', 'CAvifInfo', 'CJxlInfo', 'CJpegInfo', 'IImageInfo', 'CBmpInfo', 'CGifInfo', 'CTiffInfo']:
    for vft, slots in dump_class(target):
        print(f'\n=== {target} vftable {vft:#x} ({len(slots)} slots) ===')
        for i, fp in enumerate(slots):
            print(f'  +0x{i*4:03X}: {fp:#x}')
