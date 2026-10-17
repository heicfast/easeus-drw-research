#!/usr/bin/env python3
"""Qt .qm translation file parser — full context/source/comment/translation extraction.

Format (Qt 5, qtranslator.cpp):
  Magic 16B: 3c b8 64 18 ca ef 9c 95 cd 21 1c bf 60 a1 bd da
  Blocks: { uint8 tag; uint32 BE blockLen; payload }
    tag 2=Messages, 3=Hashes, 4=Contexts, 5=NumerusRules, 6=Dependencies, 1=Language (empirically probed)
  Messages payload: sequence of messages:
    { uint8 tag; ... } per tag:
      7 Tag_Context:    uint32 len + Latin-1 context (class name!)
      6 Tag_SourceText: uint32 len + Latin-1 source
      8 Tag_Comment:    uint32 len + Latin-1 comment
      3 Tag_Translation:uint32 len + UTF-16BE translation
      1 Tag_End:        end of message
    (legacy 16-variants tags 2/4 use uint16 len + UTF-16BE — handled too)
Output: JSON list of {context, source, comment, translation}.
"""
import struct, sys, json

MAGIC = bytes.fromhex('3cb86418caef9c95cd211cbf60a1bddd')


def parse_qm(path):
    d = open(path, 'rb').read()
    assert d[:16] == MAGIC, f'bad qm magic: {d[:16].hex()}'
    pos = 16
    blocks = {}
    while pos < len(d) - 5:
        tag = d[pos]
        blen = struct.unpack_from('>I', d, pos + 1)[0]
        pos += 5
        if tag == 0 or blen == 0:
            break
        blocks.setdefault(tag, []).append(d[pos:pos + blen])
        pos += blen
    print(f'[qm] {path}: blocks = ' + ', '.join(f'tag{t} x{len(v)} ({sum(len(x) for x in v)}B)' for t, v in sorted(blocks.items())))

    messages = []
    for msgarr in blocks.get(0x69, []):  # Messages block (tag 0x69 per qtranslator_p.h)
        m = 0
        end = len(msgarr)
        cur = {'context': None, 'source': None, 'comment': '', 'translation': ''}
        while m < end:
            tag = msgarr[m]; m += 1
            if tag == 1:  # Tag_End
                messages.append(dict(cur))
                cur = {'context': None, 'source': None, 'comment': '', 'translation': ''}
                continue
            if tag == 3:  # Tag_Translation: u32 len + UTF-16BE
                ln = struct.unpack_from('>I', msgarr, m)[0]; m += 4
                cur['translation'] = msgarr[m:m + ln].decode('utf-16-be', 'replace'); m += ln
            elif tag == 6:  # Tag_SourceText: u32 len + Latin-1
                ln = struct.unpack_from('>I', msgarr, m)[0]; m += 4
                cur['source'] = msgarr[m:m + ln].decode('latin-1', 'replace'); m += ln
            elif tag == 7:  # Tag_Context: u32 len + Latin-1
                ln = struct.unpack_from('>I', msgarr, m)[0]; m += 4
                cur['context'] = msgarr[m:m + ln].decode('latin-1', 'replace'); m += ln
            elif tag == 8:  # Tag_Comment: u32 len + Latin-1
                ln = struct.unpack_from('>I', msgarr, m)[0]; m += 4
                cur['comment'] = msgarr[m:m + ln].decode('latin-1', 'replace'); m += ln
            elif tag == 5:  # Tag_Obsolete1
                m += 4
            elif tag == 2:  # Tag_SourceText16: u16 len + UTF-16BE
                ln = struct.unpack_from('>H', msgarr, m)[0]; m += 2
                cur['source'] = msgarr[m:m + ln].decode('utf-16-be', 'replace'); m += ln
            elif tag == 4:  # Tag_Context16
                ln = struct.unpack_from('>H', msgarr, m)[0]; m += 2
                cur['context'] = msgarr[m:m + ln].decode('utf-16-be', 'replace'); m += ln
            elif tag == 9:  # Tag_Obsolete2
                pass
            else:
                raise ValueError(f'unknown message tag {tag} at {m}')
        # trailing message without Tag_End
        if cur['source'] is not None or cur['context'] is not None:
            messages.append(dict(cur))
    # fill down context (lrelease writes context once per group)
    last = None
    for msg in messages:
        if msg['context'] is None:
            msg['context'] = last
        else:
            last = msg['context']
    return messages


def main():
    msgs = parse_qm(sys.argv[1])
    out = sys.argv[2] if len(sys.argv) > 2 else None
    ctxs = {}
    for m in msgs:
        ctxs.setdefault(m['context'] or '(none)', 0)
        ctxs[m['context'] or '(none)'] += 1
    print(f'[qm] total messages: {len(msgs)}, contexts: {len(ctxs)}')
    for c, n in sorted(ctxs.items(), key=lambda kv: -kv[1])[:40]:
        print(f'  {n:5d}  {c}')
    if out:
        with open(out, 'w', encoding='utf-8') as f:
            json.dump(msgs, f, ensure_ascii=False, indent=1)
        print(f'[qm] wrote {out}')


if __name__ == '__main__':
    main()
