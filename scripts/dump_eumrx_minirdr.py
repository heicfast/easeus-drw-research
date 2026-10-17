#!/usr/bin/env python3
"""Dump the EuMrx MINIRDR_DISPATCH table (VA 0x20f50, 0xc70 bytes) and categorize
each pointer: stock-RDBSS (imported/ Rx* thunks) vs EuMrx-custom (own .text range).
Cross-references EuMrx_functions.txt for symbol names."""
import pefile, struct, re

SYS = '/home/z/my-project/workspace/og-codebase/EuShare/EuMrx.sys'
FUNCS = '/home/z/my-project/workspace/re-workspace/reversed/ghidra-drivers/EuMrx_functions.txt'

fnmap = {}
for line in open(FUNCS, encoding='utf-8', errors='ignore'):
    m = re.match(r'^([0-9a-f]{8})\s+\d+\s+(.+)$', line.strip())
    if m:
        fnmap[int(m.group(1), 16)] = m.group(2)

pe = pefile.PE(SYS, fast_load=True)
img = pe.OPTIONAL_HEADER.ImageBase
base = img  # driver loaded at image base; corpus VA = RVA here (base 0x0)
def read(va, n):
    return pe.get_data(va - img, n)

# sections map
for s in pe.sections:
    print(f'{s.Name.decode().strip(chr(0)):8s} VA {img+s.VirtualAddress:#x} vsize {s.Misc_VirtualSize:#x}')

TABLE_VA = 0x20f50
TABLE_SIZE = min(0xc70, 0x22000 - 0x20f50 - 0x30)
data = read(TABLE_VA, TABLE_SIZE)
ptrs = struct.unpack('<' + 'Q' * (TABLE_SIZE // 8), data)

# own-code range: find .text bounds
text = None
for s in pe.sections:
    if b'.text' in s.Name:
        text = (img + s.VirtualAddress, img + s.VirtualAddress + s.Misc_VirtualSize)
print(f'\n.text range: {text[0]:#x}-{text[1]:#x}')
print(f'{"idx":>4} {"offset":>7} {"ptr":>10}  category  name')
custom = 0
for i, p in enumerate(ptrs):
    if p == 0:
        continue
    off = i * 8
    if text and text[0] <= p < text[1]:
        cat = 'OWN'
        custom += 1
    elif img <= p < img + 0x30000:
        cat = 'data?'
    else:
        cat = 'other'
    name = fnmap.get(p - img, '') or fnmap.get(p, '')
    print(f'{i:>4} +{off:#06x} {p:>10x}  {cat:8s} {name}')

print(f'\ntotal nonzero: {sum(1 for p in ptrs if p)}, in .text (OWN): {custom}')
