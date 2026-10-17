# MOM Module: NTFSFileSystemAnalyser.mo — NTFS filesystem analyser

**Role in system**: IFSAnalyser implementation for NTFS — scans a found partition and reconstructs its file tree for partition-recovery verdicts.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/NTFSFileSystemAnalyser_decompiled.c` — 6,698 lines, 325 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CNTFSVolumeAnalyser` ×5
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

- `14`
- `4`
- `7`
- `6`
- `7`
- `10`
- `151`
- `203`
- `51`
- `113`
- `507`
- `632`
- `551`
- `483`
- `172`
- `101`
- `93`
- `25`
- `27`
- `55`
- `27`
- `38`
- `16`
- `19`
- `46`
- `30`
- `77`
- `104`
- `46`
- `45`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
