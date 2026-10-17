#!/usr/bin/env python3
"""RSF (Recovery State File) parser — validates the reverse-engineered format.

Format (derived from DRWUI.exe decompilation, CRSDataEx/czlibdecompressor):
  +0x00  magic[16]
  +0x10  dword (count/flags), +0x14 dword (size), +0x18 dword (version=1)
  +0x84  dword 0x200, +0x88 dword record-count
  +0x8C  records: 36-byte header = magic[16] + id[16] + chain_dword
         each followed by `chain` bytes of chunked data:
           chunk = 2-byte LE header: bit15 = zlib-compressed, bits0-11 = size-1
                   + payload (zlib stream or raw bytes)
Record chain: next record at (this header start) + 0x24 + chain.
"""
import struct, sys, zlib

MAGIC = bytes.fromhex('eaf4b31b0543b64ab4b8244a33d913bb')

def parse(path):
    data = open(path, 'rb').read()
    assert data[:16] == MAGIC, "bad magic"
    d10, d14, d18 = struct.unpack_from('<III', data, 0x10)
    print(f"global: +0x10={d10:#x} +0x14={d14:#x} +0x18={d18:#x} size={len(data):,}")
    d84, d88 = struct.unpack_from('<II', data, 0x84)
    print(f"+0x84={d84:#x} +0x88={d88:#x}")
    off = 0x8C
    recs = []
    while off + 0x24 <= len(data):
        hdr = data[off:off+0x24]
        if hdr[:16] != MAGIC:
            print(f"record @ {off:#x}: magic mismatch — stopping")
            break
        rec_id = hdr[16:32]
        chain, = struct.unpack_from('<I', hdr, 32)
        recs.append((off, rec_id, chain))
        print(f"record #{len(recs)} @ {off:#x}: id={rec_id.hex()} chain={chain}")
        if chain == 0:
            break
        off = off + 0x24 + chain
    return data, recs

def decompress_chunks(blob, verbose=True, limit=8):
    out = bytearray()
    off = 0
    n = 0
    while off + 2 <= len(blob):
        h, = struct.unpack_from('<H', blob, off)
        total = (h & 0xFFF) + 3
        size = total - 2
        compressed = bool(h & 0x8000)
        payload = blob[off+2:off+2+size]
        if len(payload) < size:
            break
        if compressed:
            try:
                d = zlib.decompressobj()
                chunk_out = d.decompress(payload)
                if verbose and n < limit:
                    print(f"  chunk @{off:#x}: hdr={h:#06x} COMPRESSED in={size} out={len(chunk_out)}: {chunk_out[:48]!r}")
                out += chunk_out
            except zlib.error as e:
                if verbose and n < limit:
                    print(f"  chunk @{off:#x}: hdr={h:#06x} zlib-fail({e}) raw[:16]={payload[:16].hex()}")
                out += payload
        else:
            if verbose and n < limit:
                print(f"  chunk @{off:#x}: hdr={h:#06x} STORED size={size}: {payload[:48]!r}")
            out += payload
        off += 2 + size
        n += 1
        if off >= len(blob):
            break
    return bytes(out)

if __name__ == '__main__':
    path = sys.argv[1] if len(sys.argv) > 1 else 'og-codebase/SaveScan/auto_Local Disk (I_)10_14_23_13_21.rsf'
    data, recs = parse(path)
    # decompress the LAST record's data (most recent session) and the first
    for i, (off, rec_id, chain) in enumerate(recs[:3]):
        blob = data[off+0x24: off+0x24+chain]
        print(f"--- record {i} data ({len(blob)} bytes) ---")
        out = decompress_chunks(blob)
        print(f"  total decompressed: {len(out):,} bytes")
        # show readable content summary
        txt = out[:2000]
        print(f"  head: {txt[:120]!r}")
