# DRWCfg.bin — AES-256-CBC Config Cache (Hardcoded Key)

> Discovered while correcting the .rsf artifact: DRWUI's only symmetric-cipher class
> (`AES_CBC256`) protects a local config cache file, **not** scan sessions.

**Owner binary**: DRWUI.exe (also present in the PE build under BUILDPE/EaseUS-x64)
**Class**: `AES_CBC256` (RTTI vftable symbol — Ghidra recovered the class name)
**Functions**: constructor FUN_1404f4a90 @ 0x826087 region; destructor FUN_1404f4ac0 (frees when
flag&1); trivial reset FUN_1404f4af0; encrypt FUN_1404f4b00
**File**: `<install dir>\DRWCfg.bin` (path built at runtime: module dir + `"DRWCfg.bin"`)

## 1. The hardcoded key material (byte-exact from the constructor)

The constructor writes 48 ASCII bytes into the object immediately after the vftable:

| Object offset | qword (LE) | ASCII |
|---|---|---|
| +0x08 | 0x36313531454A5A58 | `XZJE1516` |
| +0x10 | 0x3641324445413832 | `28AED2A6` |
| +0x18 | (byte stores) | `ABF71588` |
| +0x20 | (byte stores) | `09CF4F3C` |
| +0x28 | (byte stores) | `XZJ20304` |
| +0x30 | (byte stores) | `05060708` |

Therefore:
- **Key (32 bytes, AES-256)**: `XZJE151628AED2A6ABF7158809CF4F3C`
- **IV (16 bytes)**: `XZJ2030405060708` — the encrypt method reads the IV from object +0x28
  (4 dwords loaded at the start of FUN_1404f4b00), i.e. exactly the 5th+6th qwords.
- Key schedule: FUN_14032d4a0(this+8, 0x100, out 256-byte local) — 0x100 = 256-bit key size
  expansion table.

## 2. Writer flow (FUN at 398147/398301 call site)

1. Serializes config items into a heap buffer of 0x80-byte (128) records —
   `count = items`, buffer = `count * 0x80` bytes, each item memcpy'd in 0x80 chunks
   (an iterator loop over a std::map-equivalent container at `param_1+0x1b8`).
2. Pads to the next 16-byte multiple: `padded = ((size + 0xF) / 0x10) * 0x10`.
3. Constructs AES_CBC256 (hardcoded key above) and calls
   `encrypt(dst=paddedBuf, src=itemBuf, len=count*0x128-equivalents)`.
4. `CreateFileA("…\DRWCfg.bin", GENERIC_READ|GENERIC_WRITE, share 3, CREATE_ALWAYS 0x2,
   FILE_ATTRIBUTE_NORMAL 0x80)` → `WriteFile(padded size)` → `FlushFileBuffers` → close.
5. On any failure the plaintext buffer is freed and the file simply isn't written.

The reader path (FUN at 398301, mode 2) mirrors this: reads the file, decrypts, unpads, and
iterates 0x80-byte config records (matching memcmp against `param_2` keys — 0x14-byte
identifiers, with a 0x32-byte value update loop).

## 3. What is stored (observed semantics)

The config cache at `param_1+0x1b8` is a persistent settings map (0x80-byte fixed records:
0x14-byte key + 0x32+ value area). Items observed in the surrounding code include
per-scan-state, feature flags and MRU values that survive restarts. Because the key is
hardcoded ASCII embedded in every shipped copy of DRWUI.exe, **DRWCfg.bin provides obfuscation,
not security** — a known and accepted trade-off for local state tamper-resistance.

## 4. Related DRWUI crypto inventory (complete map, verified)

| Primitive | Where | Purpose |
|---|---|---|
| `AES_CBC256` (static AES, hardcoded key) | FUN_1404f4a90 | DRWCfg.bin config cache |
| LM-hash DES (CryptoAPI CALG_DES, "KGS!@#$%") | FUN_140c35150 + key expansion FUN_140c352a0 | LM/NTLM auth material (NAS/SMB flows; NT-side MD4/MD5 UTF-16 helpers adjacent — FUN_140c35050 widens strings) |
| CALG_MD5 hash→hex (FUN_1401654c0/700), CALG_SHA_256 (FUN at 1868689) | CryptoAPI | licensing / machine-ID / integrity |
| libcurl-Schannel (static) | FUN ~1843150 (TLS 1.3 cipher list, AcquireCredentialsHandle) | HTTPS transport |
| OpenSSL AES-XTS (EVP_aes_{128,256}_xts imports) | BitLockerLib path | BitLocker volume content decrypt |
| zlib (ported inflate/deflate, `CZlibCompressor`/`czlibdecompressor`) | FUN_1404cc6f0… | .rsf session files (see SaveScan artifact) |
| ZSTD_XXH32/XXH64 | FUN 832990–833779 | xxhash from a zstd-derived dependency |

## 5. Cross-links

- SaveScan .rsf format (the corrected story): `artifacts/SaveScan/rsf-format--scan-session.md`
- DRWUI architecture: `artifacts/DRWUI-exe--main-ui-architecture.md`
- NAS/LM-hash consumer context: `artifacts/EuShare/eumrx-nas-architecture.md`
- Raw evidence: `re-workspace/reversed/ghidra-drwui/DRWUI_decompiled.c` 826040–826240
  (class), 398090–398400 (writer/reader), 1867400–1867560 (LM hash)
