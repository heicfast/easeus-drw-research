#!/usr/bin/env python3
"""Dump IFileProperties class vtables from DRWUI.exe and map slots to decompiled FUN_ addresses.
Session: per-FS IFileProperties field-by-field walkthroughs (todo 3-5)."""
import pefile, struct, re, sys

PE = '/home/z/my-project/workspace/og-codebase/DRWUI.exe'
FUNCS = '/home/z/my-project/workspace/re-workspace/reversed/ghidra-drwui/DRWUI_functions.txt'

# function-name map from Ghidra listing (address -> FUN_ name / labels)
fnmap = {}
with open(FUNCS, encoding='utf-8', errors='ignore') as f:
    for line in f:
        m2 = re.search(r'(FUN_[0-9a-f]+)\s+([0-9a-f]+)', line)
        if m2:
            fnmap[int(m2.group(2), 16)] = m2.group(1)
        else:
            m = re.match(r'^\s*([0-9a-f]{16})\s+(.*)$', line.strip())
            if m:
                fnmap[int(m.group(1), 16)] = m.group(2)

pe = pefile.PE(PE, fast_load=True)
img = pe.OPTIONAL_HEADER.ImageBase

def read_ptr(va):
    rva = va - img
    d = pe.get_data(rva, 8)
    return struct.unpack('<Q', d)[0]

VTABLES = {
    'CNTFSFileProperties':     0x1418944f8,
    'CFATFileProperties':      0x141897198,
    'CRAWFileProperties':      0x140f5f528,
    'CExFatFileProperties':    0x141896bb8,
    'HFSPlusFileProperties':   0x141898720,
    'HFSPlusSystemNodeProps':  0x1418985d8,
    'RefsFileProperties':      0x1418995a8,
    'CBtrfsFileProerties':     0x141893378,
    'CEXT4FileProperties':     0x141896ff8,
    'CGenericFileProperties':  0x1418885c0,
    'ZfsFileProperties':       0x1418849f8,
}

# known accessors (from decompiled reading): address -> semantic guess
KNOWN = {
    0x140520780: 'GetShortNameLen',
    0x140520790: 'SetShortName',
    0x140520820: 'GetShortNamePtr',
    0x140520830: 'Get+0x1b(qword)',
    0x140520840: 'Get+0x23(FLAGS u16)',
    0x140520850: 'Get+0x25(qword)',
    0x1405208a0: 'Get+0x2d(qword)',
    0x1405208b0: 'Get+0x35(qword)',
    0x1405208c0: 'Get+0x3d(byte)',
    0x1405208d0: 'GetDataRunList(resident/non-resident)',
    0x1405209f0: 'GetConst0x2ff',
    0x140520a00: 'Get+0x3f(byte)',
    0x140520a10: 'Set+0x3f(byte)',
    0x140520d20: 'Serialize(rec-writer)',
    0x140520f20: 'Deserialize(rec-reader)',
    0x14051e3a0: 'DataRunList::Write',
    0x14051e440: 'DataRunList::Read',
    0x1405aec10: 'CFAT ctor',
    0x140520600: 'CNTFS ctor',
    0x140c40ce0: 'CRAW ctor',
    0x14058c350: 'CExFat ctor',
    0x1405e3d40: 'HFSPlus ctor',
    0x1405f4e00: 'CRefs ctor',
    0x1404f91b0: 'CBtrfs ctor(0xb6)',
    0x1405abbf0: 'CEXT4 ctor',
    0x140322e30: 'CGeneric ctor',
    0x1400d69d0: 'CZfs ctor',
}

out = []
for name, va in VTABLES.items():
    out.append(f'\n=== {name} vftable @ {va:#x} ===')
    for i in range(0, 0x90 // 8):  # 18 slots = +0x88
        try:
            fn = read_ptr(va + i * 8)
        except Exception:
            out.append(f'  +0x{i*8:02x}: <unreadable>')
            break
        if not (img < fn < img + 0x14000000):
            out.append(f'  +0x{i*8:02x}: {fn:#x}  <-- non-code, vtable ends')
            break
        label = KNOWN.get(fn) or fnmap.get(fn) or '?'
        out.append(f'  +0x{i*8:02x}: {fn:#x}  {label}')

print('\n'.join(out))
open('/home/z/my-project/workspace/re-workspace/raw-evidence/props-vtables.txt', 'w').write('\n'.join(out))
print('\n[saved] re-workspace/raw-evidence/props-vtables.txt')
