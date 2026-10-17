#!/usr/bin/env python3
"""Extract all UTF-16LE and ASCII strings with virtual addresses from DRWUI.exe,
then map DAT_142xxxxxx references in the decompiled code to actual strings.
Produces: drwwui_va_strings.json (va -> string) + enriched function map."""
import pefile, re, json, sys
from collections import defaultdict

EXE = '/home/z/my-project/repo/og-codebase/DRWUI.exe'
OUT_VA = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_va_strings.json'

pe = pefile.PE(EXE)
image_base = pe.OPTIONAL_HEADER.ImageBase
print(f'image base: {image_base:#x}')

va_strings = {}
for sect in pe.sections:
    if sect.Characteristics & 0x40000000 == 0:  # initialized data only
        continue
    name = sect.Name.rstrip(b'\0').decode(errors='replace')
    if name not in ('.rdata', '.data', '.text'):
        continue
    data = sect.get_data()
    base = image_base + sect.VirtualAddress
    # UTF-16LE runs: printable chars, min length 3
    i = 0
    n = len(data)
    while i < n - 6:
        # aligned scan
        if data[i] != 0 and 0x20 <= data[i] < 0x7f and data[i+1] == 0:
            j = i
            chars = []
            while j + 1 < n and 0x20 <= data[j] < 0x7f and data[j+1] == 0:
                chars.append(chr(data[j]))
                j += 2
            if len(chars) >= 3:
                va = base + i
                va_strings[va] = ''.join(chars)
                i = j
                continue
        i += 1

print(f'wide strings with VA: {len(va_strings)}')
with open(OUT_VA, 'w') as f:
    json.dump({hex(k): v for k, v in va_strings.items()}, f, indent=0)
print('wrote', OUT_VA)

# ---- quick stats on UI-relevant strings ----
keywords = ['scan', 'recover', 'repair', 'preview', 'filter', 'home', 'wizard', 'deep', 'bitlocker',
            'nas', 'partition', 'file', 'drive', 'disk', 'click', 'button', 'please', 'wait']
hits = defaultdict(list)
for va, s in va_strings.items():
    ls = s.lower()
    for kw in keywords:
        if kw in ls and len(s) < 120:
            hits[kw].append((va, s))
            break
for kw in keywords:
    print(f'  {kw}: {len(hits[kw])}')
