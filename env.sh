#!/bin/bash
# Master RE environment setup for EaseUS DRW research session
# Source this file: source /home/z/my-project/workspace/env.sh

export TOOLS=/home/z/my-project/workspace/tools
export WS=/home/z/my-project/workspace
export OG=$WS/og-codebase
export REW=$WS/re-workspace

# radare2
export R2HOME=$TOOLS/r2/r2-static/usr
export PATH="$R2HOME/bin:$PATH"
export LD_LIBRARY_PATH="$R2HOME/lib:$LD_LIBRARY_PATH"

# RetDec
export PATH="$TOOLS/bin:$PATH"
export RETDEC_SHARE_DIR=$TOOLS/share/retdec

# .NET (dotnet + ilspycmd)
export PATH="$TOOLS/dotnet:$PATH"
export DOTNET_ROOT=$TOOLS/dotnet
export PATH="$HOME/.dotnet/tools:$PATH"

# DIE (Detect It Easy CLI)
alias diec="LD_LIBRARY_PATH=\"$TOOLS/die-libs/usr/lib/x86_64-linux-gnu:$TOOLS/die/usr/lib/x86_64-linux-gnu\" $TOOLS/die/usr/bin/diec"
export DIEC_LIBS="$TOOLS/die-libs/usr/lib/x86_64-linux-gnu:$TOOLS/die/usr/lib/x86_64-linux-gnu"

# Ghidra headless
export GHIDRA_HEADLESS=$TOOLS/ghidra/ghidra_11.3.2_PUBLIC/support/analyzeHeadless

# Ghidra memory tuning for 4GB RAM box (2GB max heap)
export _JAVA_OPTIONS="-Xmx2200m"

echo "[env] RE toolchain ready: r2 $(r2 -v 2>/dev/null | head -1 | cut -d' ' -f2), retdec, ilspycmd, ghidra-headless, diec, floss, python-pefile/capstone/dnfile"
