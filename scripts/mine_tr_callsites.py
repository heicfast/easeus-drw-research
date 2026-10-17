#!/usr/bin/env python3
"""Mine DRWUI decompiled code for tr()/translate() call sites with full string args.
Extracts: (function, line, context, source) for every QCoreApplication::translate /
QObject::tr call — mapping UI text to code location. Multi-line string aware.
Also collects widget-text calls (QLabel::setText, setWindowTitle via tr, QMessageBox text setters)
with the resolved strings from nearby tr/translate calls.
Output: JSON call-site list + reverse indexes."""
import re, json
from collections import defaultdict

SRC = '/home/z/my-project/repo/re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c'
OUT = '/home/z/my-project/repo/re-workspace/reversed/ui-resources/drwwui_tr_callsites.json'

func_re = re.compile(r'^\s*[\w:<>~*&\[\] ]+\s+FUN_([0-9a-f]+)\s*\(')

# string-literal extractor: handles Ghidra's multi-line concatenated C strings
def extract_c_strings(seg):
    """Return list of C string literals (concatenating adjacent parts) in a code segment."""
    out = []
    i = 0
    n = len(seg)
    while i < n:
        if seg[i] == '"':
            j = i + 1
            buf = []
            while j < n:
                c = seg[j]
                if c == '\\':
                    buf.append(seg[j:j+2]); j += 2; continue
                if c == '"':
                    break
                buf.append(c); j += 1
            out.append(''.join(buf))
            # skip whitespace/newlines, check for adjacent literal
            k = j + 1
            while k < n and seg[k] in ' \t\r\n':
                k += 1
            if k < n and seg[k] == '"':
                i = k  # continuation
                out[-1] = out[-1]  # will append next literal, merge below
                # merge mode: mark by continuing loop without resetting
                i = k
                continue
            i = j + 1
        else:
            i += 1
    # merge adjacent concatenations properly: re-run with simpler approach below if needed
    return out

def extract_strings_merged(seg):
    """Extract C literals, merging adjacent (whitespace-separated) literals."""
    literals = []  # list of (start, text)
    i = 0; n = len(seg)
    while i < n:
        if seg[i] == '"':
            j = i + 1; buf = []
            while j < n:
                c = seg[j]
                if c == '\\':
                    buf.append(seg[j:j+2]); j += 2; continue
                if c == '"':
                    break
                buf.append(c); j += 1
            if j < n:
                literals.append((i, ''.join(buf)))
            i = j + 1
        else:
            i += 1
    # merge adjacent literals (only whitespace between)
    merged = []
    for pos, txt in literals:
        if merged:
            prev_pos, prev_txt = merged[-1]
            # find text between end of prev literal and this literal
            # locate end: prev_pos + len of literal rendering (approx: search)
            # simpler: if gap contains only whitespace given positions in original seg
            # we need prev end pos; track it
            merged[-1] = (prev_pos, prev_txt)
        merged.append((pos, txt))
    # do proper merge with end tracking
    merged = []
    last_end = -1
    for pos, txt in literals:
        if merged and all(ch in ' \t\r\n' for ch in seg[last_end:pos]):
            merged[-1] = merged[-1] + txt
        else:
            merged.append(txt)
        last_end = pos + 2 + len(txt) + sum(2 for _ in range(txt.count('\\')))  # approx end
        # safer: recompute by finding closing quote from pos
    # recompute ends exactly
    merged = []
    last_end = -1
    for pos, txt in literals:
        # find closing quote index: scan from pos+1 for unescaped quote
        j = pos + 1
        while j < n:
            if seg[j] == '\\':
                j += 2; continue
            if seg[j] == '"':
                break
            j += 1
        end = j + 1
        if merged and all(ch in ' \t\r\n' for ch in seg[last_end:pos]):
            merged[-1] += txt
        else:
            merged.append(txt)
        last_end = end
    return merged

def main():
    print('reading...')
    with open(SRC, errors='replace') as f:
        text = f.read()
    print(f'{len(text)/1e6:.0f} MB loaded; finding call sites...')

    callsites = []
    # translate( ... , "CTX", "SOURCE" , ...)
    for m in re.finditer(r'QCoreApplication::translate\s*\(', text):
        start = m.end()
        # capture up to ~600 chars for arg parsing (strings may be long)
        seg = text[start:start+800]
        # find the arg area till matching close paren (approx: first 4 args)
        lits = extract_strings_merged(seg[:400])
        fn_addr = None
        # find owning function: search backwards for last function header
        head = text.rfind('\nvoid FUN_', 0, m.start())
        if head == -1:
            head = text.rfind('\nFUN_', 0, m.start())
        if head != -1:
            hm = re.search(r'FUN_([0-9a-f]+)', text[head:head+80])
            if hm:
                fn_addr = hm.group(1)
        lineno = text.count('\n', 0, m.start()) + 1
        if len(lits) >= 1:
            ctx = lits[0] if len(lits) >= 1 else ''
            src = lits[1] if len(lits) >= 2 else ''
            callsites.append({'func': fn_addr, 'line': lineno, 'api': 'translate',
                              'context': ctx[:200], 'source': src[:300]})
    print(f'translate callsites: {len(callsites)}')

    # QObject::tr( "SOURCE" )  — tr's 2nd arg is the string
    tr_sites = []
    for m in re.finditer(r'\bQObject::tr\s*\(', text):
        start = m.end()
        seg = text[start:start+400]
        lits = extract_strings_merged(seg[:300])
        head = text.rfind('\nvoid FUN_', 0, m.start())
        if head == -1:
            head = text.rfind('\nFUN_', 0, m.start())
        fn_addr = None
        if head != -1:
            hm = re.search(r'FUN_([0-9a-f]+)', text[head:head+80])
            if hm:
                fn_addr = hm.group(1)
        lineno = text.count('\n', 0, m.start()) + 1
        if lits:
            tr_sites.append({'func': fn_addr, 'line': lineno, 'api': 'tr', 'source': lits[0][:300]})
    print(f'QObject::tr callsites: {len(tr_sites)}')

    with open(OUT, 'w') as f:
        json.dump({'translate': callsites, 'tr': tr_sites}, f, ensure_ascii=False, indent=0)
    print('wrote', OUT)

    # context census
    ctx_count = defaultdict(int)
    for c in callsites:
        ctx_count[c['context']] += 1
    print(f'unique contexts: {len(ctx_count)}')
    for c, n in sorted(ctx_count.items(), key=lambda kv: -kv[1])[:50]:
        print(f'  {n:5d}  {c[:70]}')

if __name__ == '__main__':
    main()
