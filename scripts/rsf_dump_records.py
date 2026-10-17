#!/usr/bin/env python3
"""Dump exact decompressed payloads of .rsf records 1-3 (field mapping evidence)."""
import struct, sys, zlib

MAGIC = bytes.fromhex('eaf4b31b0543b64ab4b8244a33d913bb')

def decompress(blob):
    out = bytearray()
    off = 0
    while off + 2 <= len(blob):
        h, = struct.unpack_from('<H', blob, off)
        total = (h & 0xFFF) + 3
        size = total - 2
        payload = blob[off+2:off+2+size]
        if len(payload) < size:
            break
        if h & 0x8000:
            out += zlib.decompressobj().decompress(payload)
        else:
            out += payload
        off += 2 + size
    return bytes(out)

def hexdump(b, start=0, length=None):
    n = length if length is not None else len(b)
    for i in range(0, n, 16):
        row = b[i:i+16]
        hexs = ' '.join(f'{x:02x}' for x in row)
        asc = ''.join(chr(x) if 32 <= x < 127 else '.' for x in row)
        print(f'{start+i:06x}  {hexs:<47}  |{asc}|')

path = sys.argv[1] if len(sys.argv) > 1 else 'og-codebase/SaveScan/auto_Local Disk (I_)10_14_23_13_21.rsf'
data = open(path, 'rb').read()
off = 0x8C
recs = []
while off + 0x24 <= len(data):
    hdr = data[off:off+0x24]
    if hdr[:16] != MAGIC:
        break
    chain, = struct.unpack_from('<I', hdr, 32)
    recs.append((off, hdr[16:32], chain))
    if chain == 0:
        break
    off = off + 0x24 + chain

for i, (off, rid, chain) in enumerate(recs):
    if chain > 2000:   # skip the big tree record
        continue
    blob = data[off+0x24: off+0x24+chain]
    out = decompress(blob)
    print(f'\n=== record #{i+1} (id={rid.hex()} chain={chain}) decompressed {len(out)} bytes ===')
    hexdump(out)

# also try interpreting record-2 tail as SYSTEMTIME candidates
print('\n=== record 2 SYSTEMTIME candidates ===')
r2 = decompress(data[recs[1][0]+0x24: recs[1][0]+0x24+recs[1][2]])
for st_off in range(0x70, 0x94-16, 2):
    y, mo, dow, d, h, mi, s, ms = struct.unpack_from('<8H', r2, st_off)
    if 2000 < y < 2100 and 1 <= mo <= 12 and 1 <= d <= 31 and h < 24 and mi < 60 and s < 60:
        print(f'  +{st_off:#04x}: {y}-{mo:02d}-{d:02d} (dow={dow}) {h:02d}:{mi:02d}:{s:02d}.{ms:03d}')
