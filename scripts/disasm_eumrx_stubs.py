#!/usr/bin/env python3
"""Disassemble the EuMrx MINIRDR_DISPATCH stub/implementor targets from the raw .sys.
Maps VA->file offset via section table, then capstone-disassembles each target."""
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64

SYS = '/home/z/my-project/workspace/og-codebase/EuShare/EuMrx.sys'
pe = pefile.PE(SYS, fast_load=True)
img = pe.OPTIONAL_HEADER.ImageBase
raw = open(SYS, 'rb').read()

def va2off(va):
    for s in pe.sections:
        sva = img + s.VirtualAddress
        if sva <= va < sva + s.Misc_VirtualSize:
            return s.PointerToRawData + (va - sva)
    return None

TARGETS = {
    0x138f8: 'stub-138f8 (most common)',
    0x138ec: 'stub-138ec',
    0x13854: 'stub-13854',
    0x13830: 'stub-13830',
    0x13950: 'stub-13950',
    0x13bc8: 'stub-13bc8',
    0x13878: 'FUN_00013878',
    0x240f0: 'PAGE-240f0 (common impl)',
    0x240fc: 'PAGE-240fc',
    0x24008: 'PAGE-24008',
    0x24014: 'PAGE-24014',
    0x24120: 'PAGE-24120',
    0x2412c: 'PAGE-2412c (dispatch[0x20f88])',
    0x1233c: 'DAT_0001233c (data-in-text?)',
}

md = Cs(CS_ARCH_X86, CS_MODE_64)
for va, name in TARGETS.items():
    off = va2off(va)
    if off is None:
        print(f'=== {name} @ {va:#x}: VA not mapped'); continue
    code = raw[off:off+96]
    print(f'=== {name} @ {va:#x} (file {off:#x}) ===')
    for ins in md.disasm(code, va):
        print(f'  {ins.address:#x}: {ins.mnemonic} {ins.op_str}')
        if ins.mnemonic == 'ret':
            break
    print()
