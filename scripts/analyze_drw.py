#!/usr/bin/env python3
"""Analyze DRW.exe decompiled code: launcher/monitor flow.
Maps the process startup, named events, crash monitoring, DRWReport invocation."""
import re, sys

# We use r2 for quick disasm analysis of DRW.exe (small file) instead of waiting
import subprocess, os

R2 = "/home/z/my-project/workspace/tools/r2/r2-static/usr/bin/r2"
DRW = "/home/z/my-project/workspace/og-codebase/DRW.exe"
OUT = "/home/z/my-project/workspace/re-workspace/reversed/DRW.exe"

def r2cmd(cmd):
    r = subprocess.run([R2, "-q", "-c", cmd, DRW], capture_output=True, text=True, timeout=300,
                       env={**os.environ, "LD_LIBRARY_PATH": "/home/z/my-project/workspace/tools/r2/r2-static/usr/lib"})
    return r.stdout

# List all functions
funcs = r2cmd("afl")
print(funcs[:3000])
