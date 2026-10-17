# Multi-tool batch: searchdll
Generated: 2026-10-17 08:15 UTC

## NTFSSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 6672 lines
- capa: 8 matches
- retdec: 76572 lines
- pefile: OK

## FATSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 6285 lines
- capa: 12 matches
- retdec: 80856 lines
- pefile: OK

## exFATSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 5748 lines
- capa: 8 matches
- retdec: 77730 lines
- pefile: OK

## EXT4SearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 2089 lines
- capa: 10 matches
- retdec: 23594 lines
- pefile: OK

## HFSPlusSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 2052 lines
- capa: 2 matches
- retdec: 28324 lines
- pefile: OK

## RAWSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 7705 lines
- capa: 15 matches
- retdec: 94450 lines
- pefile: OK

## ReFSSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 2092 lines
- capa: 3 matches
- retdec: 23658 lines
- pefile: OK

## BtrfsSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 2110 lines
- capa: 12 matches
- retdec: 24538 lines
- pefile: OK

## ZfsSearchDLL.dll
- rabin2 info: OK
- FLOSS strings: 3522 lines
- capa: 4 matches
- retdec: 50471 lines
- pefile: OK

## Local Analysis Addendum (2026-10-17 08:30 UTC)

### capa capability digest (per engine)
| Engine | Rules | Notable capabilities |
|--------|-------|----------------------|
| BtrfsSearchDLL | 14 | IOCTL driver interaction, ZLIB inflate/deflate (Btrfs zlib compression), RC4 PRGA (encrypted datasets?), XOR encode, adler32, CRC32 |
| EXT4SearchDLL | 14 | IOCTL, RWX memory alloc + indirect call (JIT-style), PE export resolution, debug prints |
| FATSearchDLL | 15 | IOCTL, runtime linking, stackstrings (obfuscation), PEB access, PE header parse, ini reads |
| HFSPlusSearchDLL | 3 | minimal — mostly library code, PE section enum, PDB path |
| NTFSSearchDLL | 10 | IOCTL @ 0x18002C0BA (raw disk access via EPMNtDrv), ini read, memory capacity, export resolution |
| RAWSearchDLL | 16 | runtime linking, stackstrings, XOR encode, file R/W, ini read — carving engine w/ obfuscation |
| ReFSSearchDLL | 5 | OS version checks, export resolution |
| ZfsSearchDLL | 6 | delay execution (polling), file R/W, export resolution |
| exFATSearchDLL | 10 | XOR encode, FNV hash, "parse credit card information" (capa regex F/P — actually carving signature scanning), file R/W |

### Key cross-references
- ALL 9 engines: `interact with driver via IOCTL` confirms EPMNtDrv (\\.\EPRDTDRV) raw-sector access from user mode
- BtrfsSearchDLL RC4+ZLIB = Btrfs native zlib compression support + possibly encrypted pool datasets
- RAWSearchDLL obfuscated stackstrings = signature/copyright strings hidden from casual strings dumps
- NTFSSearchDLL IOCTL call site 0x18002C0BA — cross-link with ghidra-searchdll decompilation
- RetDec .c decompilation retained (2.5MB per engine); .ll/.dsm/.bc trimmed for repo size
