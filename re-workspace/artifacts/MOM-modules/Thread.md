# MOM Module: Thread.mo — threading

**Role in system**: worker-thread infrastructure for modules.  
**Decompilation**: `re-workspace/reversed/ghidra-mo/Thread_decompiled.c` — 6,676 lines, 342 functions.  
**Load context**: loaded by MainModule.dll via the MOM contract (name→`<Name>.mo`→LoadLibraryA→GetModule/CreateObject exports — see mom-module-system--architecture.md).

## RTTI classes

*(none — C-style module or stripped)*
## Vftable-instantiated classes (code census)

- `CSyncObjectImpl` ×12
- `exception` ×12
- `CCriticalSection` ×5
- `CMutex` ×3
- `logic_error` ×3
- `CTimer` ×2
- `CThread` ×2
- `invalid_argument` ×2
- `bad_alloc` ×2
- `bad_array_new_length` ×2
- `CEvent` ×1
- `type_info` ×1

## Source-file trace strings (embedded build paths)

- *(no path strings — release build without trace)*

## Notable string evidence

- `api-ms-win-core-synch-l1-2-0.dll`
- `kernel32.dll`

## Function census (top-level, first 30)

- `51`
- `51`
- `14`
- `62`
- `27`
- `19`
- `62`
- `58`
- `4`
- `47`
- `47`
- `74`
- `74`
- `154`
- `102`
- `22`
- `18`
- `3`
- `14`
- `8`
- `8`
- `3`
- `9`
- `7`
- `8`
- `185`
- `96`
- `35`
- `14`
- `473`

## Cross-links

- Module system overview: `PartitionRecovery/mom-module-system--architecture.md`, `PartitionRecovery/mo-module-map.md`
- Per-binary artifact: `per-binary/` (where generated); engine-side counterparts in `SearchDLL/` family
- Pending-operation engine (MainModule ops): `PartitionRecovery/pending-operation-engine.md`
