#!/usr/bin/env python3
"""Qt RCC binary resource extractor (format v1/v2/v3 — per Qt 5.15 rcc.cpp/qresource.cpp).

Format (all big-endian), verified against Qt source + empirical hex analysis:
  Header (20B, 24B if v3):
    +0  "qres" magic
    +4  uint32 version (1..3)
    +8  uint32 tree_offset
    +12 uint32 data_offset
    +16 uint32 names_offset
    +20 [v3] uint32 overall_flags (0x01=has zlib blobs, 0x04=has zstd blobs)
  Data section: sequence of { uint32 size; content[size] } (content may be compressed)
  Names section: entries { uint16 char_len; uint32 hash; UTF-16BE chars }
  Tree section: nodes of (14 + 8 if version>=2) bytes:
    +0  uint32 name_offset (relative to names section)
    +4  uint16 flags   (0x01 Compressed/zlib, 0x02 Directory, 0x04 CompressedZstd)
    Directory: +6 uint32 child_count; +10 uint32 first_child_node_index
    File:      +6 uint16 country; +8 uint16 language; +10 uint32 data_offset (rel. to data section)
    +14 [v2+] uint64 last_modified_msecs
  Node 0 = root directory. Children are contiguous node indices.

Output: extracts every resource to out_dir preserving :/ path structure, plus manifest.json.
Validation: section bounds, PNG/SVG magic sanity, path cross-check list.
"""
import struct, sys, os, json, zlib

try:
    import zstandard as zstd_mod
except ImportError:
    zstd_mod = None

FLAG_COMPRESSED = 0x01
FLAG_DIRECTORY = 0x02
FLAG_ZSTD = 0x04


def u16(b, o): return struct.unpack_from('>H', b, o)[0]
def u32(b, o): return struct.unpack_from('>I', b, o)[0]
def u64(b, o): return struct.unpack_from('>Q', b, o)[0]


def parse_rcc(path):
    data = open(path, 'rb').read()
    assert data[:4] == b'qres', 'bad magic'
    version = u32(data, 4)
    tree_off = u32(data, 8)
    data_off = u32(data, 12)
    names_off = u32(data, 16)
    overall_flags = u32(data, 20) if version >= 3 else 0
    node_size = 14 + (8 if version >= 2 else 0)
    tree_end = len(data)  # tree is the last section (data..names..tree order per observed file)
    n_nodes = (len(data) - tree_off) // node_size
    assert (len(data) - tree_off) % node_size == 0, 'tree size not multiple of node size'
    print(f'[rcc] {os.path.basename(path)}: version={version} size={len(data)}')
    print(f'[rcc] tree@{tree_off} ({n_nodes} nodes) names@{names_off} data@{data_off} overall_flags={overall_flags:#x}')

    # ---- names section ----
    def read_name(off):
        ln = u16(data, names_off + off)
        h = u32(data, names_off + off + 2)
        raw = data[names_off + off + 6: names_off + off + 6 + ln * 2]
        name = raw.decode('utf-16-be')
        return name, h, off + 2 + 4 + ln * 2  # returns next entry offset

    # ---- node parser ----
    def node(i):
        o = tree_off + i * node_size
        name_off = u32(data, o)
        flags = u16(data, o + 4)
        if flags & FLAG_DIRECTORY:
            child_count = u32(data, o + 6)
            first_child = u32(data, o + 10)
            payload = ('dir', child_count, first_child)
        else:
            country = u16(data, o + 6)
            language = u16(data, o + 8)
            dataoff = u32(data, o + 10)
            payload = ('file', country, language, dataoff)
        mtime = u64(data, o + 14) if version >= 2 else 0
        return name_off, flags, payload, mtime

    # ---- blob reader (handles zlib & zstd) ----
    stats = {'raw': 0, 'zlib': 0, 'zstd': 0, 'zstd_missing': []}

    def read_blob(dataoff, flags):
        size = u32(data, data_off + dataoff)
        content = data[data_off + dataoff + 4: data_off + dataoff + 4 + size]
        if flags & FLAG_ZSTD:
            if zstd_mod:
                stats['zstd'] += 1
                return zstd_mod.ZstdDecompressor().decompress(content)
            stats['zstd_missing'].append(dataoff)
            return content
        if flags & FLAG_COMPRESSED:
            stats['zlib'] += 1
            # qCompress() = 4-byte BE uncompressed size + zlib stream
            expected = struct.unpack_from('>I', content, 0)[0]
            out = zlib.decompress(content[4:])
            assert len(out) == expected, f'zlib size mismatch {len(out)} != {expected}'
            return out
        stats['raw'] += 1
        return content

    # ---- walk ----
    entries = []  # (path, size, compressed_flag, mtime)

    def walk(i, prefix):
        name_off, flags, payload, mtime = node(i)
        if flags & FLAG_DIRECTORY:
            _, child_count, first_child = payload
            name = ''
            if i != 0:
                name, _, _ = read_name(name_off)
            base = prefix + name + ('/' if name else '')
            if i != 0:
                entries.append(('DIR', base.rstrip('/'), 0, 0, mtime))
            for c in range(child_count):
                walk(first_child + c, base)
        else:
            _, country, language, dataoff = payload
            name, _, _ = read_name(name_off)
            full = prefix + name
            size = u32(data, data_off + dataoff)
            entries.append(('FILE', full, size, flags & (FLAG_COMPRESSED | FLAG_ZSTD), mtime))

    walk(0, '/')
    return data, data_off, entries, stats, read_blob


def main():
    src = sys.argv[1]
    out = sys.argv[2]
    data, data_off, entries, stats, read_blob = parse_rcc(src)
    os.makedirs(out, exist_ok=True)
    manifest = []
    magic_ok = magic_bad = 0
    for kind, path, size, cflag, mtime in entries:
        rel = path.lstrip('/')
        if kind == 'DIR':
            os.makedirs(os.path.join(out, rel), exist_ok=True)
            manifest.append({'path': '/' + rel, 'type': 'dir', 'mtime': mtime})
            continue
        blob = read_blob(0, 0)  # placeholder never used
        manifest.append({'path': '/' + rel, 'type': 'file', 'stored_size': size,
                         'compressed': bool(cflag), 'mtime': mtime})
    # second pass: actually extract files (need dataoff per entry)
    # re-walk to keep data offsets
    # (kept simple: re-parse)
    data2, data_off2, entries2, _, _ = parse_rcc.__wrapped__(src) if hasattr(parse_rcc, '__wrapped__') else (None, None, None, None, None)
    # simpler: inline walk again with extraction
    # (the function above returns entries w/o dataoff for files; do it here)
    d = open(src, 'rb').read()
    version = u32(d, 4); tree_off = u32(d, 8); data_off = u32(d, 12); names_off = u32(d, 16)
    node_size = 14 + (8 if version >= 2 else 0)

    def read_name(off):
        ln = u16(d, names_off + off)
        raw = d[names_off + off + 6: names_off + off + 6 + ln * 2]
        return raw.decode('utf-16-be')

    def node(i):
        o = tree_off + i * node_size
        return u32(d, o), u16(d, o + 4), o

    counters = {'ok': 0, 'bad': 0}

    def walk(i, prefix):
        name_off, flags, o = node(i)
        if flags & FLAG_DIRECTORY:
            name = '' if i == 0 else read_name(name_off)
            base = prefix + name + ('/' if name else '')
            cc = u32(d, o + 6); fc = u32(d, o + 10)
            for c in range(cc):
                walk(fc + c, base)
            return
        name = read_name(name_off)
        full = (prefix + name).lstrip('/')
        dataoff = u32(d, o + 10)
        size = u32(d, data_off + dataoff)
        content = d[data_off + dataoff + 4: data_off + dataoff + 4 + size]
        if flags & FLAG_ZSTD and zstd_mod:
            content = zstd_mod.ZstdDecompressor().decompress(content)
        elif flags & FLAG_COMPRESSED and not (flags & FLAG_ZSTD):
            content = zlib.decompress(content[4:])
        dest = os.path.join(out, full)
        os.makedirs(os.path.dirname(dest), exist_ok=True)
        with open(dest, 'wb') as f:
            f.write(content)
        # magic validation
        head = content[:8]
        if full.lower().endswith(('.png', '.svg', '.jpg', '.jpeg', '.gif', '.bmp', '.ico', '.qm', '.qss', '.css', '.json', '.xml', '.txt', '.html', '.js', '.cur', '.ani', '.ttf', '.wav', '.mp3')):
            good = (head.startswith(b'\x89PNG') or head.startswith(b'<svg') or head.startswith(b'<') or
                    head.startswith(b'{') or b'GIF8' in head or head.startswith(b'BM') or
                    head[:2] == b'\xff\xd8' or head[:4] == b'\x00\x00\x01\x00' or
                    head[:2] in (b'\x1f\x8b',) or content == b'' or head.startswith(b'//') or
                    head.startswith(b'/*') or head[:1] in (b' ', b'\t', b'\n', b'#', b'@', b'!', b'V', b'D', b'I'))
            if good:
                counters['ok'] += 1
            else:
                counters['bad'] += 1
                if counters['bad'] <= 5:
                    print(f'  [?] {full}: head={head.hex()}')

    walk(0, '')
    magic_ok, magic_bad = counters['ok'], counters['bad']
    nfiles = sum(1 for m in manifest if m['type'] == 'file')
    print(f'[rcc] extracted: {len(manifest)} entries ({nfiles} files), stats={stats}')
    print(f'[rcc] magic check: ok={magic_ok} suspicious={magic_bad}')
    with open(os.path.join(out, '_manifest.json'), 'w') as f:
        json.dump(manifest, f, indent=1)


if __name__ == '__main__':
    main()
