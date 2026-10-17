# MOM Module: FATFileSystemAnalyser.mo — FAT filesystem analyser

**Role in system**: IFSAnalyser for FAT12/16/32.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/FATFileSystemAnalyser_decompiled.c` — 6,701 lines, 322 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CFatVolumeAnalyser` ×6
- `exception` ×3
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `28`
- `14`
- `25`
- `10`
- `4`
- `7`
- `3`
- `6`
- `6`
- `7`
- `3`
- `26`
- `8`
- `4`
- `29`
- `29`
- `16`
- `8`
- `36`
- `29`
- `42`
- `35`
- `435`
- `85`
- `75`
- `87`
- `7`
- `35`
- `403`
- `10`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
