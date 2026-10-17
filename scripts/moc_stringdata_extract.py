#!/usr/bin/env python3
"""
moc_stringdata_extract.py — Extract Qt5 moc stringdata blobs from DRWUI.exe rdata.

The Qt5 QMetaObject stringdata blob layout:
  "ClassName\0\0" + for each method: "name\0signature(args)\0" pairs
  (interleaved: name then full signature), then property name/refs, enum names.

We scan the .rdata section for "ClassName\0" occurrences where the following
bytes contain plausible moc identifiers (signal/slot name + signature pairs),
then dump the null-separated string sequence as the method table.

Usage: python3 moc_stringdata_extract.py ClassName [ClassName ...]
"""
import sys, re, json, struct, os

try:
    import pefile
except ImportError:
    sys.exit('pip install pefile first')

EXE = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'og-codebase', 'DRWUI.exe')

def load_sections():
    pe = pefile.PE(EXE, fast_load=True)
    secs = []
    for s in pe.sections:
        secs.append((s.VirtualAddress + pe.OPTIONAL_HEADER.ImageBase, s.SizeOfRawData, s.Name.decode(errors='replace').rstrip('\x00')))
    data = open(EXE, 'rb').read()
    return pe, data, secs

def rva_to_off(pe, rva):
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + s.Misc_VirtualSize:
            return s.PointerToRawData + (rva - s.VirtualAddress)
    return None

def extract_blob(classname, data, off, max_len=6000):
    """Extract null-separated strings starting at off."""
    end = min(off + max_len, len(data))
    raw = data[off:end]
    # stop at a run of many non-printable / high-entropy bytes (blob boundary)
    strings = []
    cur = []
    i = 0
    while i < len(raw):
        b = raw[i]
        if b == 0:
            if cur:
                strings.append(bytes(cur).decode('latin1'))
                cur = []
                # heuristic end: 8+ consecutive nulls or non-ascii
                j = i + 1
                nn = 0
                while j < len(raw) and raw[j] == 0:
                    nn += 1; j += 1
                if nn >= 4:
                    break
                i = j
                continue
            i += 1
            continue
        if 32 <= b < 127:
            cur.append(b)
        else:
            if cur:
                strings.append(bytes(cur).decode('latin1'))
                cur = []
            break  # non-ascii byte ends blob
        i += 1
    if cur:
        strings.append(bytes(cur).decode('latin1'))
    return strings

def main():
    pe, data, secs = load_sections()
    targets = sys.argv[1:]
    out = {}
    for classname in targets:
        needle = classname.encode() + b'\x00'
        results = []
        start = 0
        while True:
            off = data.find(needle, start)
            if off < 0: break
            start = off + 1
            # must be preceded by a null (string boundary, not substring)
            if off > 0 and data[off-1] != 0:
                continue
            strings = extract_blob(classname, data, off)
            # Qt5 stringdata: classname, then method NAMES (no parens), then property names
            ident = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')
            if len(strings) >= 3 and sum(1 for s in strings[1:8] if ident.match(s)) >= 2:
                # plausibly the moc stringdata
                va = None
                for s_va, s_sz, s_name in secs:
                    rva = off - None if False else None
                # compute VA via PE mapping
                for s in pe.sections:
                    if s.PointerToRawData <= off < s.PointerToRawData + s.SizeOfRawData:
                        va = s.VirtualAddress + (off - s.PointerToRawData) + pe.OPTIONAL_HEADER.ImageBase
                        break
                results.append({'va': hex(va) if va else '?', 'file_off': hex(off), 'strings': strings})
        out[classname] = results
        for r in results:
            print(f"=== {classname} @ {r['va']} ({len(r['strings'])} strings) ===")
            for i, s in enumerate(r['strings'][:60]):
                print(f'   [{i:2d}] {s!r}')
    json.dump(out, open('/home/z/my-project/easeus-drw-research/re-workspace/reversed/ui-resources/moc_stringdata.json', 'w'), indent=1)
    print('[+] wrote moc_stringdata.json')

if __name__ == '__main__':
    main()
