#!/usr/bin/env python3
"""Reverse engineer the .rsf (Recovery Session File / Scan Result) format.
Samples: SaveScan/auto_*.rsf (3 files, 7-51MB). Magic: EA F4 B3 1B.
Approach: entropy analysis + structure probing + XOR key detection."""
import sys, math, struct, collections

def entropy(data):
    if not data: return 0
    c = collections.Counter(data)
    n = len(data)
    return -sum((v/n) * math.log2(v/n) for v in c.values())

def hexdump(data, base=0, limit=256, width=16):
    out = []
    for i in range(0, min(limit, len(data)), width):
        chunk = data[i:i+width]
        hexs = ' '.join(f'{b:02x}' for b in chunk)
        asc = ''.join(chr(b) if 32 <= b < 127 else '.' for b in chunk)
        out.append(f'{base+i:08x}  {hexs:<{width*3}} {asc}')
    return '\n'.join(out)

path = sys.argv[1]
data = open(path, 'rb').read()
print(f"File: {path} ({len(data):,} bytes)")
print(f"Overall entropy: {entropy(data):.4f}")
print("\n=== First 256 bytes ===")
print(hexdump(data, 0, 256))

print("\n=== Entropy profile (64KB blocks) ===")
BS = 65536
for i in range(0, min(len(data), BS*32), BS):
    block = data[i:i+BS]
    print(f"  offset {i:>10,}: entropy {entropy(block):.4f}")

# Check for repeating keys / XOR patterns in first 4KB
head = data[:4096]
print("\n=== Byte-frequency of first 4KB (top 12) ===")
freq = collections.Counter(head).most_common(12)
for b, c in freq:
    print(f"  0x{b:02x} ({chr(b) if 32<=b<127 else '.'}): {c}")

# GUID extraction from header
print("\n=== Header GUID candidates (16-byte aligned) ===")
import re
for m in re.finditer(rb'[0-9a-fA-F]{8}-[0-9a-fA-F]{4}', data[:8192].decode('latin1')):
    print("  ascii-guid-ish:", m.group(0))
