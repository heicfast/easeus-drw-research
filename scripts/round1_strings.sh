#!/usr/bin/env bash
# Local round-1 RE: strings extraction for all Easeus-owned PE binaries.
# Output: re-workspace/reversed/<relpath>/strings_{ascii,unicode}.txt + rabin2 dumps
set -u
export LD_LIBRARY_PATH="${LD_LIBRARY_PATH:-}"
export PATH="/home/z/my-project/workspace/tools/r2/r2-static/usr/bin:/home/z/my-project/workspace/tools/bin:$PATH"
export RETDEC_SHARE_DIR=/home/z/my-project/workspace/tools/share/retdec

OG=/home/z/my-project/workspace/og-codebase
REW=/home/z/my-project/workspace/re-workspace/reversed

count=0
while IFS= read -r f; do
    rel="${f#"$OG"/}"
    # Skip externals except core Qt for reference
    case "$rel" in
        VideoViewer/*|EUFileRepair/*|diskhealth/*|language/*|BUILDPE/*|License/*) continue;;
        api-ms-win-*|platforms/*|imageformats/*|iconengines/*|styles/*) continue;;
        Qt5*.dll|msvc*.dll|vcruntime*.dll|ucrtbase.dll|concrt*.dll|libcrypto*|libssl*|ssleay*|libeay*|zlib*.dll|liblzma*|libssh2*|libzmq*|de265*|heif*|libx265*|pdfium*|GDIPLUS*|CORE_RL_*|7z*.dll|7za.exe|dbghelp*|Japanese.dll|legacy.dll) continue;;
    esac
    out="$REW/$rel"
    mkdir -p "$out"
    # ASCII strings >= 6 chars
    strings -n 6 "$f" > "$out/strings_ascii.txt" 2>/dev/null
    # UTF-16LE strings (Windows)
    strings -e l -n 6 "$f" > "$out/strings_utf16.txt" 2>/dev/null
    # rabin2 info if PE
    if head -c2 "$f" | grep -q "MZ"; then
        rabin2 -I "$f" > "$out/rabin2_info.txt" 2>&1
        rabin2 -i "$f" > "$out/rabin2_imports.txt" 2>&1
        rabin2 -E "$f" > "$out/rabin2_exports.txt" 2>&1
        rabin2 -S "$f" > "$out/rabin2_sections.txt" 2>&1
        rabin2 -z "$f" > "$out/rabin2_strings_data.txt" 2>&1
    fi
    count=$((count+1))
done < <(find "$OG" -type f \( -name "*.exe" -o -name "*.dll" -o -name "*.sys" -o -name "*.mo" -o -name "*.ocx" \) | sort)
echo "Processed $count binaries -> $REW"
