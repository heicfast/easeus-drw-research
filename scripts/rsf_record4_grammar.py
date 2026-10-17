#!/usr/bin/env python3
"""Record-4 per-node tree grammar parser — validates the decoded CFileNodeRS
SaveFileTree/RestoreFileTree grammar against real .rsf samples.

Grammar (decoded from DRWUI decompilation):
  record4:
    u8  flag_full
    if flag_full == 0: u32 counterA, u32 counterB, u32 counterC
    else:               u32 counterC
    u32 rootCount
    repeat rootCount:
      u32 marker (==1, CFileSystemNode)
      node_grammar(marker)
      content_grammar()
      while True:                       # BFS children
        u32 cmark
        if cmark == 0xFFFFFFFF: break
        node_grammar(cmark)             # 0=CFileNode (base only), 1=CFileSystemNode
        content_grammar()

  node_grammar(marker):
    base (34 bytes):
      u64 type_flags(+0x50); u64 f48(+0x48);
      u8 f91b0; u8 f72b1; u8 f72b0; u32 reserved; u8 f72b7_a;
      u16 f6c; u16 f68; u16 f6e; u8 f71; u8 f72b7_b; u8 f73b1; u8 f73b2
    if marker == 1 (CFileSystemNode):
      u64 type_flags(+0x50, again); 40-byte stat blob;
      u64 f1c8; u32 f1d0; u32 f1d4; u32 nameLen(+0x1e0); u32 f1e4;
      u32 f1ec; u32 f1e8; u32 f1f0; u64 f200; u64 f208; u8 f288; u8 f289;
      name[nameLen]
      u32 vecCount; vecCount * node_grammar(1)   # inline recursion, no marker/content

  content_grammar:
    u32 typeCode
    per-class field sequences (see FSProps classes)
"""
import struct, sys, zlib
from collections import Counter

MAGIC = bytes.fromhex('eaf4b31b0543b64ab4b8244a33d913bb')
REC4 = bytes.fromhex('6cf208d28c07344e9d71d91f535f7b57')

class R:
    def __init__(self, buf):
        self.b = buf
        self.o = 0
        self.stats = Counter()
        self.names = []
        self.depth = 0

    def take(self, n):
        if self.o + n > len(self.b):
            raise EOFError(f'overrun at {self.o:#x} want {n} have {len(self.b)-self.o}')
        d = self.b[self.o:self.o+n]
        self.o += n
        return d

    def u8(self):  return self.take(1)[0]
    def u16(self): return struct.unpack('<H', self.take(2))[0]
    def u32(self): return struct.unpack('<I', self.take(4))[0]
    def u64(self): return struct.unpack('<Q', self.take(8))[0]

TRACE = int(__import__('os').environ.get('TRACE', '0'))

def datarun(r):
    n = r.u32()
    r.take(n)
    r.u16()
    r.stats['datarun'] += 1

def content(r, marker):
    off0 = r.o
    t = r.u32()
    r.stats[f'content_type_{t:#x}'] += 1
    if TRACE and r.stats['nodes'] <= TRACE:
        print(f'    content @{off0:#010x} type={t:#x}')
    flags = 0
    if t == 0:      # CNTFSFileProperties
        n = r.u16()
        if n: r.take(n)
        r.u64()
        flags = r.u16()              # +0x23 — FLAGS (bit 0x10 = has children)
        r.u64(); r.u64(); r.u64(); r.u8(); r.u64(); r.u32(); r.u32()
        if r.u32(): datarun(r)
        cnt = r.u64()
        if cnt:
            if cnt > 1_000_000: raise ValueError(f'absurd runlist {cnt}')
            for _ in range(cnt):
                r.u64(); r.u64()
    elif t == 1:    # CFATFileProperties
        n = r.u16()
        if n: r.take(n)
        r.u64()
        flags = r.u16()              # +0x23 — FLAGS
        r.u64(); r.u64(); r.u64(); r.u8(); r.u32(); r.u32()
        if r.u32(): datarun(r)
    elif t == 9:    # CGenericFileProperties
        n = r.u32()
        if n: r.take(n)
        flags = r.u16()              # +0x38 — FLAGS
        r.u16()
    elif t == 3:    # CRAWFileProperties (carved files)
        n = r.u8()                   # +0x11 short-name length
        if n: r.take(n)
        m2 = r.u8()                  # +0x83 timestamp-string length
        if m2: r.take(m2)
        r.u64()                      # +0x1a FILETIME raw
        flags = r.u16()              # +0x22 — FLAGS
        r.u8()                       # +0x25
        r.u32()                      # +0x56
        m3 = r.u8()                  # +0x82 second string length
        if m3: r.take(m3)
        r.u64()                      # +0x8c
        r.u64()                      # +0x94
        r.u32()                      # +0xf4
        r.u32()                      # +0xf8
        datarun(r)                   # read unconditionally (carved files always have runs)
    elif t == 4:    # CExFatFileProperties
        r.u16()
        r.u64()
        flags = r.u16()              # +0x30 — FLAGS
        r.u64(); r.u64(); r.u64(); r.u8(); r.u32(); r.u32()
        if r.u32(): datarun(r)
    elif t == 8:    # CEXT4FileProperties
        n = r.u16()
        if n: r.take(n)
        r.u64()
        flags = r.u16()              # +0x39 — FLAGS
        r.u64(); r.u64(); r.u64(); r.u8(); r.u64()
        if r.u32(): datarun(r)
    elif t == 0x0c:  # ZfsFileProperties
        r.u64()
        n = r.u64()
        if n: r.take(n)
        r.u64(); flags = r.u16(); r.u64(); r.u64(); r.u64(); r.u16()
        r.u32()
    else:
        raise ValueError(f'unhandled content type {t:#x} at {r.o:#x}')
    return flags

def node(r, marker, depth=0):
    # base 34 bytes
    tf = r.u64(); f48 = r.u64()
    r.u8(); r.u8(); r.u8(); r.u32(); r.u8()
    r.u16(); r.u16(); r.u16(); r.u8(); r.u8(); r.u8(); r.u8()
    r.stats['nodes'] += 1
    r.stats[f'marker_{marker}'] += 1
    if marker == 1:
        r.u64()                    # type_flags again
        r.take(40)                 # stat blob
        r.u64(); r.u32(); r.u32()  # +1c8, +1d0, +1d4
        namelen = r.u32()          # +1e0
        r.u32(); r.u32(); r.u32()  # +1e4, +1ec, +1e8
        r.u32(); r.u64(); r.u64(); r.u8(); r.u8()  # +1f0, +200, +208, +288, +289
        name = b''
        if namelen:
            name = r.take(namelen)
            r.stats['named_nodes'] += 1
            if len(r.names) < 40 or depth < 3:
                r.names.append((depth, name.decode('utf-8', errors='replace')))
        if TRACE and r.stats['nodes'] <= TRACE:
            print(f'  node#{r.stats["nodes"]:5d} @{r.o:#010x} m={marker} d={depth} '
                  f'tf={tf:#x} f48={f48:#x} nl={namelen} {name[:40]!r}')
        vc = r.u32()
        if vc:
            if vc > 100_000: raise ValueError(f'absurd vector count {vc}')
            r.stats['vector_children'] += vc
            for _ in range(vc):
                node(r, 1, depth+1)
    elif TRACE and r.stats['nodes'] <= TRACE:
        print(f'  node#{r.stats["nodes"]:5d} @{r.o:#010x} m={marker} d={depth} '
              f'tf={tf:#x} f48={f48:#x}')

def parse_record4(buf):
    r = R(buf)
    flag = r.u8()
    if flag == 0:
        r.u32(); r.u32(); r.u32()
    else:
        r.u32()
    rootn = r.u32()
    r.stats['roots'] = rootn
    for i in range(rootn):
        m = r.u32()
        if m != 1:
            raise ValueError(f'root {i}: marker {m} != 1 at {r.o:#x}')
        node(r, 1, 0)
        cflags = content(r, 1)
        # root is queued unconditionally by the writer (its child list always follows)
        q = [1]
        while q:
            d = q.pop(0)
            while True:
                cm = r.u32()
                if cm == 0xFFFFFFFF:
                    break
                if cm not in (0, 1):
                    raise ValueError(f'bad child marker {cm:#x} at {r.o:#x}')
                node(r, cm, d)
                cf = content(r, cm)
                if cf & 0x10:
                    q.append(d + 1)
    return r

def load_record4(path):
    data = open(path, 'rb').read()
    assert data[:16] == MAGIC
    off = 0x8C
    while off + 0x24 <= len(data):
        hdr = data[off:off+0x24]
        assert hdr[:16] == MAGIC, f'bad magic at {off:#x}'
        sid = hdr[16:32]
        chain = struct.unpack('<I', hdr[32:36])[0]
        payload_off = off + 0x24
        if sid == REC4:
            # decompress chunk stream
            out = bytearray()
            p = payload_off
            end = payload_off + chain
            while p < end:
                h = struct.unpack_from('<H', data, p)[0]
                total = (h & 0xfff) + 3
                dsize = total - 2
                chunk = data[p+2:p+2+dsize]
                if h & 0x8000:
                    try:
                        out += zlib.decompress(chunk)
                    except zlib.error:
                        out += chunk
                else:
                    out += chunk
                p += total
            return bytes(out)
        off = payload_off + chain
    return None

if __name__ == '__main__':
    path = sys.argv[1] if len(sys.argv) > 1 else \
        'og-codebase/SaveScan/auto_Local Disk (I_)10_14_23_13_21.rsf'
    import glob
    cands = glob.glob('og-codebase/SaveScan/*.rsf') if not path else [path]
    for c in cands:
        print(f'=== {c} ===')
        buf = load_record4(c)
        if buf is None:
            print('  no record 4 found'); continue
        print(f'  record-4 decompressed: {len(buf):,} bytes')
        try:
            r = parse_record4(buf)
            print(f'  PARSED OK: consumed {r.o:,} / {len(buf):,} bytes '
                  f'({"COMPLETE" if r.o == len(buf) else "MISMATCH"})')
            for k, v in sorted(r.stats.items()):
                print(f'    {k:24s} {v:,}')
            print('  sample names:')
            for d, n in r.names[:15]:
                print(f'    d{d}: {n}')
        except (ValueError, EOFError) as e:
            print(f'  PARSE FAILED: {e}')
            print(f'  consumed {e.__traceback__.tb_frame.f_locals.get("r", None)}')
