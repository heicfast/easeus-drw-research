# MOM Module: Fixup.mo — partition-table fixup

**Role in system**: repairs damaged partition tables (write-side; read-side = analysers).  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Fixup_decompiled.c` — 7,502 lines, 243 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CBcd` ×6
- `CEFIFirstBcd` ×3
- `exception` ×3
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `\\ArcName`
- `\\BcdLog.txt`
- `\\Device\\Harddisk%d\\Partition0`
- `\\Registry\\Machine\\BCD00000000`
- `\\\\.\\`
- `\\\\.\\PHYSICALDRIVE%d`
- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `171`
- `236`
- `14`
- `11`
- `42`
- `10`
- `4`
- `43`
- `67`
- `7`
- `232`
- `175`
- `289`
- `243`
- `104`
- `6`
- `176`
- `470`
- `700`
- `801`
- `91`
- `22`
- `396`
- `103`
- `559`
- `250`
- `325`
- `7`
- `513`
- `130`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
