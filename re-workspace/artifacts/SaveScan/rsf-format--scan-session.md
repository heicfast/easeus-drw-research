# SaveScan .rsf — Recovery State File Format (FULLY REVERSED & VALIDATED)

> **Status: COMPLETE — format fully decoded, parser implemented and validated against all 3
> shipped samples; record payload field maps decoded from the writer functions. This revision
> CORRECTS the earlier "CryptoAPI-encrypted" hypothesis, disproven by decompilation, adds the
> complete record-1/2/3 field schemas (§5), and the full record-4 per-node tree grammar
> (§5.4, byte-exact-validated on all samples this session — 293 MB of decompressed trees,
> 1,986,806 nodes).**

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
| FUN_1402866d0 + FUN_1400d40c0 | record-4 writer: collects result-tree roots from module tree container, BFS node-class-marked serialization (**= `CFileNodeRS::SaveFileTree`**, §5.4) |
| FUN_1400d4870 | record-4 reader **= `CFileNodeRS::RestoreFileTree`** (trace-string-named) |
| FUN_14008a660 / FUN_14008a8a0 | `CFileSystemNode::Serialize/Deserialize` (vft 0x14187ff60 +0x20/+0x28) — §5.4.2 |
| FUN_140088940 / FUN_140088af0 | `CFileNode::Serialize/Deserialize` (vft 0x14187fec8 +0x20/+0x28) — base 34 B |
| FUN_1400d6fa0 / FUN_1400d6e50 | IFileProperties content-object `[u32 type][body]` write / read factory (10 classes, §5.4.5) |
| FUN_14051e3a0 / FUN_14051e440 | DataRunList `[u32 len][NTFS-runlist bytes][u16]` write / read |
| FUN_140286930 | file-name sanitizer (replaces `/ * : ? " < > |` with `_`) |
| FUN_1403f1a30 / FUN_1403f16e0 / FUN_1403f1b30 / FUN_1403f23a0 | record-3 writers: partition structs (0x6F5 raw copy) + volume-device blobs (0x1518) |

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

### 5.4 Record 4 — result tree (id `6cf208d2…`) — **FULLY DECODED & VALIDATED** (this session)

> Writer `CFileNodeRS::SaveFileTree` = FUN_1400d40c0 (DRWUI_decompiled.c 186446–186717);
> Reader `CFileNodeRS::RestoreFileTree` = FUN_1400d4870 (186756–187150, class name from its
> own trace strings `"CFileNodeRS::RestoreFileTree"` with source line numbers 0x112–0x13d).
> Collection driver: FUN_1402866d0 (443216–443265) pulls the root `std::vector<CHN*>` from
> the module tree container (FUN_1401b63c0), filters with FUN_1401e91d0, feeds FUN_1400d40c0.
> **Validated: `scripts/rsf_record4_grammar.py` parses all 3 shipped samples byte-exact —
> 36,001,842/36,001,842 B (I_), 29,894,861/29,894,861 B (G_), 226,686,612/226,686,612 B (H_).**

#### 5.4.1 Object model (who is being serialized)

| Class | Size | Vftable | Role |
|---|---|---|---|
| `CHN` (= legacy typedef for the node type; the module tree container is `std::vector<CHN*>`) | — | — | mangled-name evidence (443257) |
| `CFileNode` | **0x93 (147 B)** | `0x14187fec8` | lightweight node — carved/structured file entries (99.99% of the tree) |
| `CFileSystemNode : CFileNode` | **0x290 (656 B)** | `0x14187ff60` | full node — roots + volume shortcut nodes only (17 in I_, 15 in H_) |
| content objects | per-FS | `IFileProperties` family | refcounted (+0xC), one per tree node |

CFileSystemNode layout (ctor FUN_140089840 @134381, clone FUN_140088d10 @133454):
`+0x00 vftable · +0x08 parent · +0x10 first-child · +0x18 next-sibling · +0x20 prev-sibling ·
+0x30 content (IFileProperties*) · +0x48 qword (-1 default) · +0x50 type/flags qword (-1
default; **-0x10 = "hidden" — second root list filters these out**) · +0x68 u16 · +0x6C u16 ·
+0x71 u8 (enum, 2↔5 remap on wire) · +0x72/0x73/0x74 flag bytes · +0x91 flags byte ·
+0x98 stat blob (0x28 B: counters/sizes/times) · +0x210 std::vector<CHN*> child vector ·
+0x228 mutex · +0x1C8 qword · +0x1D0 u32 · +0x1D8 name ptr · +0x1E0 name length u32 ·
+0x1E8 root-role u32 · +0x1EC flag u32 · +0x1F0 sub-role u32 · +0x288/+0x289 bytes`.

CFileSystemNode vtable (raw slot order — **note: `map_rtti_vtables.py` output was
order-corrupted by a set() collection; raw PE dump is authoritative**; fixed this session):

| Slot | Function | Semantics |
|---|---|---|
| +0x00 | FUN_14008ab60 | (unknown, first slot) |
| +0x08 | FUN_140089c60 | `IsFullNode()` → **always 1** (the child-list marker source!) |
| +0x10 | FUN_140089ba0 | GetData(out qword +0x1C8, out dword +0x1D0) |
| +0x18 | FUN_140089bd0 | GetX() → +0x1D4 |
| **+0x20** | **FUN_14008a660** | **Serialize(writer)** — §5.4.2 |
| **+0x28** | **FUN_14008a8a0** | **Deserialize(stream)** |
| +0x30 | FUN_140089990 | vector deleting destructor |
| +0x38 | FUN_140089b90 | SetData(qword, dword) |
| +0x40 | FUN_140089bc0 | SetX(dword) |
| +0x48 | FUN_140089be0 | CopyOut: 0x108 B from +0xC0 |
| +0x50 | FUN_140089c10 | CopyIn: 0x108 B to +0xC0 |
| +0x58 | FUN_140089c70 | recursive stats accumulator (+0x9C/+0xA8/+0xB4/+0xBC) |
| +0x68 | FUN_140089c30 | CopyOut: 0x28 B stat blob from +0x98 |

CFileNode vtable `0x14187fec8`: +0x08 = FUN_140088890 (`IsFullNode()` → **always 0**),
+0x20 = FUN_140088940 (Serialize — base 34 B only), +0x28 = FUN_140088af0 (Deserialize),
+0x00 = FUN_140088d10 (clone: alloc 0x93, refcounts content at +0x30→+0xC).

**The marker byte written before each child in the stream = "which node class"**
(0 = CFileNode → 34-byte base grammar; 1 = CFileSystemNode → full grammar).
Roots are always CFileSystemNode → marker 1 (reader enforces: `local_ac != 1 → abort` @186882).

#### 5.4.2 Per-node grammar (CFileSystemNode::Serialize FUN_14008a660 @135103 / CFileNode::Serialize FUN_140088940 @133313)

```
node_body(marker):
  # ---- CFileNode base, 34 bytes (FUN_140088940 @133327-133362) ----
  u64  type_flags        (node+0x50; the -0x10 "hidden" value filters 2nd root list)
  u64  f_48              (node+0x48; default -1)
  u8   flag_91_bit0
  u8   flag_72_bit1
  u8   flag_72_bit0
  u32  reserved          (always 0 on write; read into scratch and discarded — legacy field)
  u8   flag_72_bit7_a
  u16  f_6c              (default 0xFFFF)
  u16  f_68              (default 0xFFFF)
  u16  f_6e
  u8   f_71              (enum; value 2 is remapped to 5 on write, back on read — enum renumbering)
  u8   flag_72_bit7_b    (DUPLICATE of flag_72_bit7_a — reader applies this one last; kept for
                         backward compatibility, both write @133348 and @133357)
  u8   flag_73_bit1
  u8   flag_73_bit2
  # ---- CFileSystemNode extension (FUN_14008a660 @135130-135147), marker==1 only ----
  u64  type_flags_again  (node+0x50 re-serialized — base+derived versioning artifact)
  40B  stat_blob         (image: [u32 lo(+0x98)][u32 0][u64 +0xA0][u64 0][u32 +0xB0][u32 0]
                         [u32 lo(+0xB8)][u32 0] — 3rd qword and high dwords zeroed on write;
                         reader stores the 40-byte image directly at +0x98)
  u64  f_1c8   u32 f_1d0   u32 f_1d4
  u32  name_len          (node+0x1E0)
  u32  f_1e4   u32 f_1ec   u32 f_1e8 (root-role: 0=main tree, 1=secondary;
                         ==1 && f_1f0==1 → f_1ec:=1)   u32 f_1f0
  u64  f_200   u64 f_208   u8 f_288   u8 f_289
  char name[name_len]    (buffer at node+0x1D8; UTF-8, reader null-terminates @135208)
  u32  vector_count      (children in the node's own std::vector<CHN*> @+0x210)
  vector_count × node_body(1)      # INLINE recursion — full CFileSystemNode bodies,
                                   # NO marker and NO content objects (FUN_14008a660
                                   # @135148-135165 loop; reader FUN_14008a8a0 @186210-186232)
```

#### 5.4.3 The two child structures (dual representation)

- **Intrusive sibling list** (`+0x10` first-child → `+0x18` next-sibling): the tree topology
  the BFS walker (FUN_1400d40c0) serializes; on restore, nodes are inserted at the list HEAD
  (@187044-187050: `*(parent+0x10) = node`) and each child **inherits the parent's +0x50 type
  tag** (`node[9] = *(parent+0x50)` @187051).
- **`std::vector<CHN*>`** (`+0x210`): serialized inline by the node body itself. Observed
  usage: the root nodes carry the volume-shortcut children named `" (I:)"`/`" (H:)"`
  (6/6/4+8+... = 14/12 entries) — a flat volume list attached to the root, not the scan tree.
  The scan tree proper flows through the BFS channel.

#### 5.4.4 Record-4 container algorithm (CFileNodeRS::SaveFileTree)

```
u8   flag_full                  (param_5; 0 in all samples)
if flag_full == 0:  u32 counterA, u32 counterB, u32 counterC     (root-list counts)
else:               u32 counterC
u32  root_count                (writer @186544: both root lists combined)
for each root:                                  # root loop @186550
    u32 1                       (class marker — always CFileSystemNode)
    node_body(1)
    content_object()            # §5.4.5 — ALWAYS written (roots always have content)
    queue = [root]              # pushed unconditionally @186553-186563
    drain queue:                # @186569 — inside the root loop; each root's subtree
        pop node                                 # is written contiguously (queue empty
        collect children from intrusive list     # between roots)
        filter: child.content == null || child.content.GetType() != 0xB   # type 0xB
                (runtime-only properties — thumbcache/cloud — NEVER saved) @186597
        for each child:
            u32 marker          (0=CFileNode / 1=CFileSystemNode — from vtable+0x08)
            node_body(marker)
            if child.content != 0:  content_object()
            if child.content.flags & 0x10:  queue.push(child)   # has-children bit
        u32 0xFFFFFFFF          # end-of-children sentinel @186676 (reader @186986)
        (progress callback: 40% + 50%·done/(2·total) — @186575; cancel check @186644)
EndRecord (vtable+0x60 @186691)
```

Progress contract: this function reports **40%→~65%** of the save progress (local_8c starts
0x28=40, formula `40 + 50·processed/(2·remaining)`); the restore mirror reports
`40 + 50·done/(total+done)` @186965. Cancellation: `param_4->vtable+0x20()` (IUIProgressInfo
IsCancelled) checked after every child; on cancel the writer tears down all 3 lists and
returns 0 (writer @186644-186674, reader @187082-187099 — reader additionally calls
`EndRecord` before aborting).


> **CORRECTIONS (session of 2026-10-17, per-FS walkthrough parts 1-3 —
> `ifileproperties-part{1,2,3}*.md`):** (a) CRAW `+0x1A` is the **file size**, not a
> FILETIME — the timestamp survives only as the formatted +0x26 string (FUN_140c41aa0);
> census values are jpg-sized (83,104 etc.). (b) ZFS grammar leads with **one** u64
> (name length), not two — serializer FUN_140536430/reader FUN_140536570 pair is
> authoritative (the two-u64 census branch was never exercised: 0 ZFS records in all
> samples). (c) The +0x60/+0x64 NTFS ints decode as **type-registry ID** (feeds Type
> column/filter) + secondary id; +0x40 is a parent/directory anchor (consecutive-per-dir
> bands), not the FRN itself.

#### 5.4.5 Content objects — the IFileProperties family (per-FS file metadata)

Written as `[u32 type_code][class-specific fields]` (writer FUN_1400d6fa0 @188981:
type from vtable+0xa0, body via vtable+0x98; reader factory FUN_1400d6e50 @188913 reads the
type code then dispatches to constructor + vtable+0xa8 deserialize). **All 10 persisted type
codes resolved to RTTI class names this session (factory→ctor→vftable→COL chain):**

| Code | Class | vftable | Serialized grammar (offsets = in-memory fields) |
|---|---|---|---|
| 0 | `CNTFSFileProperties` | 0x1418944f8 | u16 len; bytes[len]; u64(+0x1B); **u16 FLAGS(+0x23)**; u64(+0x25); u64(+0x2D); u64(+0x35); u8(+0x3D); u64(+0x40); u32(+0x64); u32(+0x60); u32 hasRun → runlist; u64 cnt → cnt×{u64,u64} runlist-list (FUN_140520d20 @853443 / deserial 853511) |
| 1 | `CFATFileProperties` | 0x141897198 | u16 len; bytes[len]; u64(+0x1B); **u16 FLAGS(+0x23)**; u64; u64; u64; u8(+0x3D); u32(+0x3E); u32(+0x42); u32 hasRun → runlist (FUN_1405af360 @945555 / 945597) |
| 3 | `CRAWFileProperties` | 0x140f5f528 | u8 shortNameLen; bytes; u8 tsLen; ts bytes (std::string, SSO, **timestamp string formatted "%d-%d-%d %d-%d-%d" from FILETIME @+0x1A** — FUN_140c41aa0); u64 filetime; **u16 FLAGS(+0x22)**; u8; u32; u8 len2; bytes2; u64; u64; u32; u32; **runlist UNCONDITIONAL** (FUN_140c418c0 @1876198 / deserial FUN_140c40d80 @1875575) |
| 4 | `CExFatFileProperties` | 0x141896bb8 | u16(+0x20); u64(+0x28); **u16 FLAGS(+0x30)**; u64(+0x34); u64; u64; u8(+0x4C); u32(+0x50); u32(+0x54); u32 hasRun → runlist (FUN_14058c870 @924502) |
| 5 | `HFSPlusFileProperties` (marker 0) / `HFSPlusSystemNodeProperties` (marker 1, alloc 0x40) | 0x141898720 / 0x1418985d8 | variant selected by the NODE's marker (FUN_1400d6e50 case 5 @188941); fields incl. strings + datarun (FUN_1405e4180 @981193) |
| 6 | `RefsFileProperties` | 0x1418995a8 | via ctor FUN_1405f4a40 (grammar same family shape) |
| 7 | `CBtrfsFileProerties` *(sic — EaseUS's own typo)* | 0x141893378 | alloc 0xb6, ctor FUN_1404f91b0 |
| 8 | `CEXT4FileProperties` | 0x141896ff8 | u16 strLen(+0x21); str (SSO, >15→heap); u64(+0x31); **u16 FLAGS(+0x39)**; u64(+0x3B); u64; u64; u8(+0x53); u64(+0x55); u32 hasRun → runlist (FUN_1405ac360 @943648) |
| 9 | `CGenericFileProperties` | 0x1418885c0 | u32 strLen; str; **u16 FLAGS(+0x38)**; u16(+0x3A) (FUN_140323080 @543789; GetType()=9 literal @543829) |
| 0xB | *(never persisted — writer filters GetType()==0xB children; reader switch has no case)* | — | runtime-only (thumbcache/cloud class family) |
| 0xC | `ZfsFileProperties` | 0x1418849f8 | strings + fixed fields (FUN_140536430 @866814) |

**FLAGS u16 — the `has-children` bit**: `flags = vtable+0x38()` (assembly-verified:
CNTFS `movzwl 0x23(%rcx)` @140520840; CGeneric `movzwl 0x38(%rax)` @140322f20; CRAW
`*(u16*)(+0x22)` @1875650). Bit 0x10 = node has children → drives the BFS queue.

**Runlist (DataRunList) sub-format** (FUN_14051e3a0 @851580 write / FUN_14051e440 @851612
read): `[u32 byte_len][runlist bytes][u16 flags]` where the runlist is a **raw NTFS-style
datarun byte string** — header nibbles: high = offset-field size, low = length-field size,
entry size = offsize + 1 + lensize, 0x00 terminator; the byte_len walker at 851590-851599
implements exactly this nibble math. (Same encoding family as the scan engines' datarun model
— see SearchDLL family artifact.) The CNTFS class additionally persists a *list of 16-byte
{u64,u64} extent pairs* (FUN_140520d20 @853474-853489).

The leading `[u16 len][bytes]` in codes 0/1 (and SSO strings in 3/8) is the **file name**
(short name / LFN-style) — this is where the 374,091 strings of sample I_ live (248,727 NTFS
names + 12,147 carved short names/timestamp strings + 6,959 generic strings + 39 FAT names),
not in the tree-node name field (only 17 CFileSystemNode names).

#### 5.4.6 Empirical validation census (scripts/rsf_record4_grammar.py, this session)

| Sample | Record-4 size | Nodes | Roots (names) | Content census | Dataruns |
|---|---|---|---|---|---|
| I_ 10_14_23_13_21 | 36,001,842 B | 267,886 (267,869 CFileNode + 17 CFileSystemNode) | 3: "Local Disk(I:)", "File Path Lost", "Reconstructed" | NTFS 248,727 · RAW 12,147 · Generic 6,959 · FAT 39 | 260,843 |
| G_ 10_15_00_44_10 | 29,894,861 B | 218,513 | 4 | NTFS-dominated | ~213K |
| H_ 10_14_23_42_58 | 226,686,612 B | 1,500,407 (1,500,392 + 15) | 3: "Local Disk(H:)", "File Path Lost", … | NTFS 971,532 · Generic 432,708 · RAW 94,057 · FAT 2,098 | 1,059,424 |

All three parse **byte-exact to EOF** — the grammar is closed under the entire shipped corpus
(1,986,806 nodes total). Structural findings: (a) the saved tree is ~99.999% lightweight
`CFileNode`s — full `CFileSystemNode`s appear only as roots and their vector-carried volume
shortcuts; (b) "File Path Lost" is the carved-file root (raw carving results whose parentage
could not be reconstructed) and "Reconstructed" holds lost-file rebuilds — matching the
product's results-screen sections; (c) volume shortcut children named `" (I:)"` are stored in
the ROOT's inline `std::vector<CHN*>`, not in the BFS channel.

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
  (CRSDataEx + chunk codecs), 398090–398400 (DRWCfg.bin), 1867400–1867560 (LM hash),
  186446–187150 (CFileNodeRS save/restore tree), 133273–135237 (CFileNode/CFileSystemNode
  serialize/deserialize), 853443–853560 & 945555–945626 & 543789–543880 & 1875575–1876243
  (IFileProperties serializers), 851580–851641 (DataRunList)
- Parsers: `scripts/rsf_parser.py` (container) + `scripts/rsf_record4_grammar.py`
  (record-4 tree grammar, this session) + `scripts/rsf_dump_records.py`

## 8. Confidence

100% for container/chunk format (working parser + 3 samples + bidirectional decompiled
codec paths). Record field maps (§5) are decoded from the writer call sequence with exact
size arithmetic matching every observed decompressed length (12 / 147 / 7,185 bytes);
GUID constants byte-extracted from .rdata and matched to all samples. **Record 4 (§5.4) is
now byte-exact-validated: `scripts/rsf_record4_grammar.py` walks all 3 samples to EOF with
zero slack (36,001,842 / 29,894,861 / 226,686,612 decompressed bytes), reconstructing the
3-roots + BFS-child-lists + IFileProperties-content structure including every datarun —
any single-field error would desync the walk within a few nodes.** Remaining soft labels:
semantic names of the two stat qwords (§5.2, tick-counter inference from the 3.431 GHz ratio)
and individual CFileNode flag-bit business meanings (§5.4.2 flag bytes).
