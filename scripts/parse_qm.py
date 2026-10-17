#!/usr/bin/env python3
"""Qt .qm translation file parser — extracts source string -> translation pairs.
The English.qm contains ALL user-visible strings with their UI class context.
This gives us the complete user-facing flow + terminology."""
import struct, sys, os

def parse_qm(path):
    """Qm format: magic 3cb64a8f... then records. Simplified: extract messages.
    Layout (QTranslator): 16-byte magic, then blocks; each block: (tag,u16 len,payload)
    We parse: tag 03 = context+source, tag 06 = source, etc. Simpler: harvest UTF-16BE strings."""
    data = open(path, 'rb').read()
    if data[:4] != bytes.fromhex('3cb64a98')[:4] and data[:4] != b'\x3c\xb6\x4a\x98':
        pass
    # Harvest UTF-16BE null-terminated strings from the .qm
    strings = []
    i = 0
    n = len(data)
    while i < n - 4:
        # look for sequence: printable UTF-16BE chars
        if data[i] == 0 and 0x20 <= data[i+1] < 0x7f:
            j = i
            chars = []
            while j + 1 < n and data[j] == 0 and data[j+1] != 0:
                c = data[j+1]
                if 0x20 <= c < 0x7f:
                    chars.append(chr(c))
                elif c >= 0x80:
                    chars.append('?')
                else:
                    break
                j += 2
            if len(chars) >= 3:
                strings.append((i, ''.join(chars)))
                i = j + 2
                continue
        i += 1
    return strings

def main():
    path = sys.argv[1]
    strings = parse_qm(path)
    # Dedup consecutive
    seen = set()
    out = []
    for off, s in strings:
        key = s
        if key not in seen:
            seen.add(key)
            out.append((off, s))
    for off, s in out:
        print(f"{off:08x}  {s}")
    print(f"--- {len(out)} unique strings ---", file=sys.stderr)

if __name__ == "__main__":
    main()
