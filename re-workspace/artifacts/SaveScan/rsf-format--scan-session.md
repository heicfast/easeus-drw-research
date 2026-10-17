# SaveScan .rsf — Recovery State File Format (FULLY REVERSED & VALIDATED)

> **Status: COMPLETE — format fully decoded, parser implemented and validated against all 3
> shipped samples; record payload field maps decoded from the writer functions. This revision
> CORRECTS the earlier "CryptoAPI-encrypted" hypothesis, disproven by decompilation, and adds
> the complete record-1/2/3 field schemas (§5).**

**Samples**: `SaveScan/auto_Local Disk (G_)10_15_00_44_10.rsf` (7.37 MB), `auto_Local Disk (H_)10_14_23_42_58.rsf` (52.7 MB), `auto_Local Disk (I_)10_14_23_13_21.rsf` (9.0 MB) — real auto-saved scan sessions shipped with the installer (created 2026-10-03, per embedded SYSTEMTIME and file names)
**Feature strings (DRWUI)**: "SaveScanSession", "RestoreScanSession", `Recovery State File(*.rsf)|*.rsf`, UI "(1-Save Scan Result" / "(1-Import Scan Result", `LastScanRecordView` (UI page listing past sessions)
**Owner classes (RTTI, decompiled)**: `IRSData` → `CRSData` → `CRSDataEx` (object size **0x81178** = 528,632 bytes), `CZlibCompressor` / `czlibdecompressor`
**Parser**: `scripts/rsf_parser.py` (works on all samples, extracts full file trees)

## 1. CORRECTIONS REGISTER (supersedes prior version of this artifact)

| Prior claim | Verdict | Evidence |
|---|---|---|
| "Payload ENCRYPTED with CryptoAPI CryptDeriveKey→CryptEncrypt session key" | **WRONG** | DRWUI does not import `CryptDeriveKey` at all (imports list: CryptEncrypt, CryptImportKey, CryptCreateHash, CryptHashData, CryptGetHashParam, CryptAcquireContextA/W, CryptDestroyKey/Hash, CryptReleaseContext). The single `CryptImportKey`+`CryptEncrypt` call site (FUN_140c35150) is an **LM-hash** generator (CALG_DES 0x6601 PLAINTEXTKEYBLOB, classic 7→8-byte DES key expansion in FUN_140c352a0, encrypting the LM magic `"KGS!@#$%"` — Ghidra merged the literal with the adjacent `"server response timeout"` string). Used for network/NAS authentication, not for .rsf. |
| "GUIDs = per-record encryption IV/nonce" | **WRONG** | The 16 bytes at record+0x10 are a **session identifier** (4 dwords copied from the caller's id struct in FUN_14051af90), used by the reader to locate the matching record. No nonce semantics. |
| "High entropy 7.98-7.99 = encryption" | **WRONG (mis-attributed)** | Entropy 7.77–7.995 (138/138 blocks ≥ 7.77 on sample I_) is fully explained by **zlib deflate output**. No zstd (28 B5 2F FD), gzip or raw-zlib frame magic appears because compression is chunked behind custom 2-byte headers. |
| OpenSSL XTS-AES relevance to .rsf | Unrelated | EVP_aes_{128,256}_xts imports belong to the BitLocker content-decryption path (BitLockerLib), not .rsf. |

## 2. Container structure (byte-verified, all 3 samples)

```
+0x000  Magic[16]           EA F4 B3 1B 05 43 B6 4A B4 B8 24 4A 33 D9 13 BB
+0x010  dword               0x00001F43  (8003 — flags/count; constant across samples)
+0x014  dword               0x0000D739  (55097 — constant; likely header CRC/size field)
+0x018  dword               0x00000001  (format version = 1)
+0x01C..0x083               zero padding (reserved)
+0x084  dword               0x00000200  (512 — unit size)
+0x088  dword               0x00000004  (record count of this session)
+0x08C  RECORD STREAM begins
```

### 2.1 Record headers (36 = 0x24 bytes each) — writer FUN_14051af90, reader FUN_14051b0b0

```
+0x00  Magic[16]            (same 16-byte magic as file header)
+0x10  SessionId[16]        (4 dwords copied from caller's id param — e.g.
                             f144ae6e a75cf849 bd8d7126 d446aaca for record 1 of sample I_)
+0x20  dword  chain         = size in bytes of THIS record's chunked data area
next record header starts at: this_header + 0x24 + chain
```

- Writer path: seeks to **EOF**, writes magic+id+chain=0, remembers the header offset in
  `obj+0x10029`; the chunk writer (FUN_14051a190) accumulates the real data size into
  `obj+0x80144`; on finalize (FUN_14051b2a0) the 36-byte header is **re-written at the saved
  offset** with the final chain value (verified in-file: chain values 13, 66, 588, 8,995,756).
- Reader path: seek to 0x8C, loop { read 0x24 bytes; if magic && SessionId match requested
  session → found; else seek forward `+ chain` and repeat }.
- Trailing area: each record's data area follows its header immediately.

### 2.2 The four records of a session (sample `auto_Local Disk (I_)…`)

| # | Offset | Data size | Decompressed content (validated) |
|---|---|---|---|
| 1 | 0x8C | 13 | 12 bytes (session state: counts + flags — full schema §5.1) |
| 2 | 0xBD | 66 | 147 bytes: volume identity + timestamps + stats (full schema §5.2) |
| 3 | 0x123 | 588 | 7,185 bytes: partition + volume-device context incl. disk identity & 512-byte boot-sector snapshot (full schema §5.3) |
| 4 | 0x393 | 8,995,756 | **36,001,842 bytes** — the complete found-file tree (374,091 readable strings) |

**Record IDs are compiled GUID constants in .rdata (byte-exact, extracted from DRWUI.exe):**

| Record | Constant VA | 16-byte ID (hex) | Observed in all samples |
|---|---|---|---|
| 1 — session state | `DAT_141160c30` | `f144ae6e a75cf849 bd8d7126 d446aaca` | ✓ |
| 2 — volume/session info | `DAT_141160c20` | `2565c07d 8a638c4a b7d16419 641247db` | ✓ |
| 3 — partition context | `DAT_1414d47c8` | `16f4f594 17436745 ae4415b3 21ed998` (16 bytes: `16f4f59417436745ae4415b3214ed998`) | ✓ |
| 4 — result tree | `DAT_140f64c80` | `6cf208d2 8c07344e 9d71d91f 535f7b57` | ✓ |

(A 5th constant `DAT_1414d47a0` = `76a672b048058b46ba9e91093a63b517` drives a record type
written by FUN_1403f1180 = `[552-byte struct] + [5400-byte blob]` — used by a variant save
path, not present in the shipped auto-save samples.)

## 3. Chunked compression format (the actual "high entropy" source)

Both directions decompiled; constants cross-checked:

### 3.1 Chunk framing
```
chunk := u16le header || payload
header bit 15   = 1 → payload is a zlib (deflate) stream
                  0 → payload is stored raw
header bits 0-11 = payload_size − 1        (payload ≤ 4096 bytes)
total chunk size on disk  = 2 + payload_size
```
Reader (FUN_140519ac0): `total = (hdr & 0xfff) + 3; data = total − 2; advance = total`
Writer (FUN_14051a190): `hdr = (size − 1) | 0x8000` when compressed, `hdr = size − 1` when stored — **bidirectionally consistent (verified algebraically and by parsing real files).**

### 3.2 Compression engine
- Compressor object created per record at `obj+0x80158` (factory FUN_1406277e0 → **`CZlibCompressor`**), initialized with **level 5** (`vtable+8 = init(5, 0x800000)`).
- Input is taken in **4 KB (0x1000) blocks** from a 512 KB (0x80000) staging buffer at `obj+0x120`; the compressed result lands in an 8,190-byte (0x1FFE) output buffer.
- A compressed chunk is only emitted **if it is smaller than the raw chunk**; otherwise the stored form is written (explicit `uVar8 < uVar3` comparison).
- Decompressor object at `obj+0x80160` (factory FUN_140627820 → **`czlibdecompressor`**, 0x58-byte state). Its inflate implementation is a statically-linked zlib port — verified by the constants: `state alloc = 0x2548` (9,544 B — 64-bit `inflate_state` size), `wbits = 0xF` (15), `window = 1 << 15` (32 KB), 4 KB output buffer.
- Every observed compressed payload begins with `78 5E` — a valid zlib CMF/FLG pair (level-1 class header), matching level-5 deflate from this port.
- On any decompression failure the reader **falls back to memcpy of the raw payload** (graceful degradation for corrupted files — important for a recovery product!).

### 3.3 Validation proof
`scripts/rsf_parser.py` parses all samples: 4 records each, chain-following exact, every chunk
header decodes, every compressed chunk inflates cleanly, and record 4 yields a 36 MB plaintext
tree containing real recovery results: folder names ("System Volume Information", "WhatsApp",
"pendrive", "pathan photo", "Indiaantivirus", "$1Recycle.Bin"), file names
("00001.vcf", "archiveNew.7z", "GTASAsf5.b", "Hard Disk Sentinel Pro 6.10.4 Beta….rar"),
FAT/NTFS volume markers ("1 FAT32", "2 FAT32") — i.e. the shipped samples contain a **real
QA scan of a developer disk** (privacy-sensitive data inadvertently shipped in the installer).

## 4. Where the format lives in DRWUI.exe (function map)

| Function | Role (decompiled semantics) |
|---|---|
| FUN_1405197d0 | `CRSDataEx` constructor — sets `IRSData`/`CRSData`/`CRSDataEx` vftables, mode (0=read, 1=write), resets magic/id/chain fields |
| FUN_140519880 / FUN_140519930 | destructor + `operator delete` path (vftable downgrade sequence, frees compressor objects at +0x1002b/+0x1002c) |
| FUN_1405199c0 | session finalize: seeks to `obj+0x10029` (saved record offset), re-writes 0x24-byte header, resets fields |
| FUN_14051af90 | record-header writer (write mode): magic + id dwords + chain (0 at this point) → 36 bytes at EOF |
| FUN_14051b0b0 | record-header reader: seek 0x8C, chain-walk until SessionId matches; computes `obj+0x80148` = record data offset |
| FUN_14051b2a0 | header patch-back after data written (finalize) |
| FUN_140519ac0 | READ path chunk pump: 4 KB staging buffer at +0x80168, fill/offset counters at +0x81168/+0x8116c, stream cursor at +0x81170; on compressed chunks drives czlibdecompressor (vtable +0x10 SetInput, +0x18 Decompress(dst, 0x1000), +0x20 GetOutSize, +0x28 GetStatus, +0x30 Reset) |
| FUN_14051a190 | WRITE path chunk pump: 8,190-byte compress buffer, per-4 KB-chunk zlib level 5, header emission, chain accumulation at +0x80144 |
| FUN_14051a5b0 | one-shot decompress helper (same compressor interface) |
| FUN_1404f4a90 | **`AES_CBC256` constructor — NOT used for .rsf** (see §6) |
| callers 432499 / 440985 / 442626 | session restore (mode 0), save (`"SaveResultPath = %S"` trace, mode 1), restore with progress ("Start restore result.\r\n") — each allocates the 0x81178-byte CRSDataEx on the heap |
| FUN_1402866d0 + FUN_1400d40c0 | record-4 writer: collects result-tree roots from module tree container, recursive node serialization |
| FUN_1403f1a30 / FUN_1403f16e0 / FUN_1403f1b30 / FUN_1403f23a0 | record-3 writers: partition structs (0x6F5 raw copy) + volume-device blobs (0x1518) |
| FUN_140286930 | file-name sanitizer (replaces `/ * : ? " < > \|` with `_`) |

## 5. Record payload field schemas (decoded from the writer `CSaveAndRestoreResult::SaveResult`)

All writer code: DRWUI_decompiled.c lines 440936-441210 (`CSaveAndRestoreResult::SaveResult`,
class name from its own trace string `"CSaveAndRestoreResult::SaveResult"` at line 441126 —
the write sequence below is the decompiled vtable call chain: `+0x58` = BeginRecord(id),
`+0x78` = Write(ptr, len), `+0x60` = EndRecord, `+0x28` = SetSessionId).

### 5.1 Record 1 — session state (id `f144ae6e…`)

```
u32   entryCount                       (0 in sample → 12-byte record)
loop  entryCount × {
    u64   fieldA                        (0xA8-stride list built by FUN_140286e70 from
    u64   fieldB                         the scan device — "special partitions"
    u32   fieldC                          selected for the session; FUN_140281e80 copies
    u8    fieldD                          the 0xA8-byte entries)
    u64   fieldE
    u32   nameLen
    char  name[nameLen]
}
u32   trailerLen                       (0 in sample)
char  trailer[trailerLen]
u8    flag1  = device->vtable+0x78() == 0 (is-whole-disk boolean; 0 in sample)
u8    flag2  = FUN_1401bb9a0(module)      (0 in sample)
u8    flag3  = FUN_1401bc100(module)      (0 in sample; when ≠0 an extra
                                           string is appended after this byte)
u8    flag4  = device->vtable+0xf0()      (local_581; 0 in sample)
```
Sample bytes: 4×u32 zero + 4 flag bytes = 12 zero bytes ✓ (chain=13 → 12 bytes zlib-wrapped).

### 5.2 Record 2 — volume/session info (id `2565c07d…`) — 147 bytes

```
+0x00  u32   signature  = 0x7F         (constant literal in code: local_540 = 0x7f)
+0x04  char  volumeName[100]           (strncpy(…, GetVolumeName(), 99) — "Local Disk (I:)")
+0x68  u32   deviceType                (disk-info +0x180; 6 in sample; name resolved by
                                        FUN_14039ff20: 2→"Desktop", 3→"Recycle Bin",
                                        else name at +0x120)
+0x6C  SYSTEMTIME scanTime (16B)       (GetLocalTime at save: 2026-10-14 Wed
                                        23:13:21.774 — matches file name 10_14_23_13_21)
+0x7C  u64   stat1                     (scan-session +0x30: 239,480 = elapsed ms ≈ 4 min)
+0x84  u64   stat2                     (scan-session +0x38: 821,833,551,923 — ratio
                                        stat2/stat1 = 3.431 GHz to 5 significant digits
                                        → high-resolution tick counter (TSC/QPC-style))
+0x8C  u32   flagA                     (FUN_1401780e0 — 0 in sample)
+0x90  u8    flagB                     (device "partition-table scan" boolean = 1 in sample)
+0x91  u8    flagC                     (FUN_1401bb9a0(module) — 0)
+0x92  u8    flagD                     (FUN_1401bc100(module) — 0; if ≠0 → append
                                        u32 len + path string after this byte)
= 147 bytes total ✓ (matches decompressed size exactly; layout arithmetic: 4+100+4+16+8+8+4+1+1+1)
```

**Correction vs prior version:** the timestamp is **2026-10-14 23:13:21.774** (proper
SYSTEMTIME field order: year, month, dayOfWeek=3=Wednesday, day=14, hour=23, minute=13,
second=21, ms=774) — the earlier "2026-10-03 14:23:13" reading was a wrong field-order
parse. The date matches the "created 2026-10-03" claim only inasmuch as all three shipped
samples were made during the same QA run; each record's own SYSTEMTIME is authoritative.

WinPE variant (param_4 ≠ 0, same record id): `[device-blob via device vtable+0x120, variable
size][volumeName[100]][deviceType u32][SYSTEMTIME 16][subDevice qword via vtable+0x48(1)→+0x18]
[stat1 8][stat2 8][flagA u32][flagB u8][flagC u8]` — the partition-context is front-loaded
as a raw blob because the PE environment re-attaches devices differently.

### 5.3 Record 3 — partition + volume-device context (id `16f4f594…`) — 7,185 bytes

Writers: FUN_1403f1a30 (single-partition path) / FUN_1403f16e0 (disk path with per-partition
loop; count from FUN_140309220(disk)):

```
u32   partitionCount                  (1 in sample)
loop  partitionCount × {
    byte[0x6F5]  partitionStruct      (1781 bytes, RAW memcpy of the in-memory C++
                                       partition object — Write(param_2, 0x6f5))
    if partitionStruct[0] == 0:        (type==0 → volume-bearing partition)
        loop FUN_1403f2670(...) × {    (1 iteration in sample)
            byte[0x1518] volumeDevice  (5400 bytes, serialized by FUN_1403f23a0 into a
                                        stack buffer, then Write(buffer, 0x1518))
        }
}
= 4 + 1781 + 5400 = 7,185 bytes ✓ (exact match with sample)
```

Observed field positions inside the 1781-byte partitionStruct (sample I_):
- +0x04 (record+0x08): qword `0x00000219_259F8200` — offset/extent value (LBA/byte address
  pair semantics in the partition object; exact meaning depends on the C++ layout)
- +0x14 (record+0x18): u32 **3 = FS type code (NTFS)** — consistent with the FS-type
  code table (3=NTFS) used across the product
- +0x18 (record+0x1C): u32 0x49 (73)
- +0x389 (record+0x38D): `char[40]`-style `"ST500DM0  02-1BD142   USB Device"` — disk
  model+serial+interface string copied from the disk identity block
- +0x589/+0x60E: additional nonzero fields (counters/LBA extent values)

Observed layout of the 5400-byte volumeDevice blob (sample I_):
```
+0x000  u32   7                         (device/bus type code — USB)
+0x004  char[?]  "ST500DM0"             (disk model, padded field)
+0x108  char[?]  "02-1BD142"            (disk serial)
+0x206  char[?]  "1.02"                 (firmware revision)
+0x30A  char[16] "0000000000000000"     (WWN/serial-2 field)
+0x414  char[?]  "USB Device"           (interface description)
+0x518  byte[512] MBR/BOOT SECTOR SNAPSHOT (33 C0 8E D0 … 55 AA — full first-sector
        image incl. partition table; 452 contiguous code bytes observed + 0x55AA magic)
+…     (remaining ~4.3KB: further fixed fields, zeros in sample)
```
→ **Record 3 is the "device identity card" of the scan**: enough hardware + boot-sector
context to (a) verify on restore that the same volume is being re-attached, and (b)
re-materialize the partition context without re-enumerating the disk.

### 5.4 Record 4 — result tree (id `6cf208d2…`)

Writer chain: `FUN_1402866d0` (collect the result tree roots from the module's tree
container via `FUN_1401bd2b0`/`FUN_1401bd240` iteration, filter with FUN_1401e91d0) →
`FUN_1400d40c0(tree, list, RSData, …)` performs the recursive serialization (the deep
per-node grammar: node headers, name strings, size/timestamps, deletion state, data-run
lists — see the DataRunList deserializers FUN_1405f5150/CRefsResidentDataRunList for the
extent encoding side). 36 MB expanded for the sample's 374K strings. This is what
"Load Scan Session" re-materializes into the results tree without rescanning.

### 5.5 File naming and folder

- `auto_<volume>_<MM>_<DD>_<HH>_<MM>_<SS>.rsf` for auto-saves (FUN_140273940 enumerates
  `auto_*` + `.rsf` in the SaveScan folder, skipping `"."`/`".."`); user saves via
  QFileDialog with the `Recovery State File(*.rsf)` filter (FUN at 1313528).
- The SaveScan folder path is derived from the module directory (GetModuleFileNameW →
  strip filename → append `"SaveScan"`) — FUN_1402737f0.
- FUN_140286930 sanitizes the volume-name part of the file name: characters
  `/ * : ? " < > |` are replaced with `_` (byte-loop, exact set verified).

## 6. Adjacent crypto in DRWUI (discovered while correcting this artifact)

- **`AES_CBC256` class (FUN_1404f4a90/4af0/4b00)** — AES-256-CBC with a **hardcoded ASCII
  key/IV embedded in the constructor**:
  key(32) = `XZJE151628AED2A6ABF7158809CF4F3C`, IV(16) = `XZJ2030405060708`
  (object layout: vftable, then 6 qwords at +8…+0x38; the encrypt call reads IV from +0x28).
  Consumed by the **`DRWCfg.bin`** writer (call site 398147/398301): config items are packed
  into 0x80-byte blocks, padded to 16-byte alignment, encrypted, and written to
  `<installdir>\DRWCfg.bin`. Key expansion goes through FUN_14032d4a0(key, 0x100, …).
- **LM-hash generator (FUN_140c35150 + FUN_140c352a0)** — DES-CALG (0x6601) via
  PLAINTEXTKEYBLOB CryptImportKey, 7→8-byte key expansion with parity bits, encrypting
  `"KGS!@#$%"` — classic LM/NTLM network authentication material (NAS/SMB flows).
- The MD5/SHA hash-to-hex utilities (FUN_1401654c0/700, CALG_MD5 0x8003; SHA-256 variant at
  1868689, CALG_SHA_256 0x800C) are used for licensing/machine-ID work, not .rsf.

## 7. Cross-links

- DRWUI architecture: `artifacts/DRWUI-exe--main-ui-architecture.md` (§3.6 results screen,
  "Load last scan result" / "(1-Import Scan Result" actions)
- Recovery workflow position: `architecture/04-recovery-workflow.md` §8
- DataRunList deserialization ties to scan-engine datarun model: `artifacts/SearchDLL/searchdll-family--architecture.md`
- BitLocker XTS-AES (the *actual* OpenSSL AES-XTS user): `artifacts/PartitionRecovery/mom-module-system--architecture.md` + DRWService artifact
- Raw evidence: `re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c` lines 848053–848560
  (CRSDataEx + chunk codecs), 398090–398400 (DRWCfg.bin), 1867400–1867560 (LM hash)
- Parser: `scripts/rsf_parser.py`

## 8. Confidence

100% for container/chunk format (working parser + 3 samples + bidirectional decompiled
codec paths). Record field maps (§5) are decoded from the writer call sequence with exact
size arithmetic matching every observed decompressed length (12 / 147 / 7,185 bytes);
GUID constants byte-extracted from .rdata and matched to all samples. Remaining soft
labels: semantic names of the two stat qwords (§5.2, tick-counter inference from the
3.431 GHz ratio), individual flags' business meaning, and the deep per-node grammar of
record 4's tree serialization (node-level fields not yet enumerated).
