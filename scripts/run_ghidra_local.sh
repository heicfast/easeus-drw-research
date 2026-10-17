#!/usr/bin/env bash
# Local Ghidra batch decompiler — runs ExportAll.java on each binary listed.
# Usage: run_ghidra_local.sh <batch-file-with-rel-paths> [output-dir]
set -u
export JAVA_HOME=/home/z/my-project/workspace/tools/jdk-21.0.12.1+1
export PATH="$JAVA_HOME/bin:$PATH"
export _JAVA_OPTIONS="-Xmx2400m"

WS=/home/z/my-project/workspace
GHIDRA="$WS/tools/ghidra/ghidra_11.3.2_PUBLIC/support/analyzeHeadless"
SCRIPTS="$WS/tools/ghidra_scripts"
OG="$WS/og-codebase"
LIST="$1"
OUT="${2:-$WS/re-workspace/reversed/ghidra-local}"
PROJDIR=$(mktemp -d /tmp/ghidra-batch-XXXX)

mkdir -p "$OUT"
while IFS= read -r rel; do
    [ -z "$rel" ] && continue
    case "$rel" in \#*) continue;; esac
    SRC="$OG/$rel"
    [ -f "$SRC" ] || { echo "[MISS] $rel"; continue; }
    NAME=$(basename "$rel" | sed 's/\.[^.]*$//')
    echo "[RUN] $rel -> $OUT"
    rm -rf "$PROJDIR"/*
    timeout 3000 "$GHIDRA" "$PROJDIR" prj \
        -import "$SRC" \
        -scriptPath "$SCRIPTS" \
        -postScript ExportAll.java "$OUT" \
        -deleteProject \
        -analysisTimeoutPerFile 2400 \
        > "/tmp/gh_${NAME}.log" 2>&1
    RC=$?
    DECOMP="$OUT/${NAME}_decompiled.c"
    if [ -s "$DECOMP" ]; then
        echo "  OK: $(grep -c '' "$DECOMP") lines ($(grep -c '' "$OUT/${NAME}_functions.txt") funcs)"
    else
        echo "  FAIL rc=$RC — log tail:"
        grep -E "SCRIPT ERROR|error:|Exception" "/tmp/gh_${NAME}.log" | head -5
    fi
done < "$LIST"
rm -rf "$PROJDIR"
echo "[DONE] batch complete"
