# SaveScan .rsf — Recovery State File Format (scan session persistence)

**Samples**: `SaveScan/auto_Local Disk (G_)10_15_00_44_10.rsf` (7.4MB), `auto_Local Disk (H_)...` (51.5MB), `auto_Local Disk (I_)...` (8.8MB) — real scan sessions shipped with the install
**Feature strings (DRWUI)**: "SaveScanSession", "RestoreScanSession", "Recovery State File(*.rsf)|*.rsf", UI "1-Save Scan Result" / "1-Import Scan Result"

## 1. Container structure (byte-level, from sample analysis)

```
+0x000  Magic (16 bytes): EA F4 B3 1B 05 43 B6 4A  B4 B8 24 4A 33 D9 13 BB
+0x010  dword 0x00001F43  (8003 — header/total-record count or flags)
+0x014  dword 0x0000D739  (55097 — payload size? or crc)
+0x018  dword 0x00000001  (version)
+0x01C..0x083  zero padding (reserved)
+0x084  dword 0x00000200  (512 — block size)
+0x088  dword 0x00000004  (record count)
+0x08C  RECORD[0] header:
        +0x00 magic (same 16 bytes)
        +0x10 GUID/nonce (f1 44 ae 6e a7 5c f8 49 bd 8d 71 26 d4 46 aa ca)
        +0x20 dword size (0x19 = 25)
        +0x24 timestamp (16 80 78 5e = 0x5E788016 → 2020-08-23 — the scan date)
        +0x28 more metadata + next-record chain
+0x0xx  RECORD[1]: magic + GUID (25 65 c0 7d ...) + size 0x41 ...
        (records repeat; each carries its own GUID — likely per-record encryption IV/nonce)
PAYLOAD: high-entropy data (7.98-7.99 per 64KB block — uniform) = ENCRYPTED
```

## 2. Encryption (imports-verified)
DRWUI.exe imports (ADVAPI32 CryptoAPI):
`CryptAcquireContextA → CryptCreateHash → CryptHashData → CryptGetHashParam → CryptDeriveKey(CryptImportKey) → CryptEncrypt/Decrypt`
→ .rsf payloads are encrypted with a CryptoAPI session key derived by hashing a fixed passphrase/salt (hardcoded in DRWUI — extraction queued for the DRWUI decompilation batch).
Additionally OpenSSL `EVP_aes_256_xts` / `EVP_aes_128_xts` imports — XTS-AES (disk-mode AES, likely for BitLocker volume content access, not for .rsf).

## 3. What's inside (inferred from feature behavior + strings)
"Save/Import Scan Result" persists the full result tree so users can re-open results without rescanning. Therefore the payload contains:
- The scanned partition/device identification
- The complete found-file tree (CFileNode graph) — names, paths, sizes, timestamps, delete flags, source FS
- RAW-search findings + classification state
- Scan metadata (which engine, quick/deep, completion %)
The 51.5MB sample size vs 7.4MB: proportional to found-file counts (deep scan of larger disk).

## 4. Naming convention
`auto_<Drive path sanitized>_<MM>_<DD>_<HH>_<MM>_<SS>.rsf` — auto-saved sessions; user-saved ones use the QFileDialog "Recovery State File(*.rsf)" filter.

## 5. Open items
- Extract hardcoded hash passphrase from decompiled DRWUI (queued)
- Determine exact cipher (RC4 vs AES) — CryptDeriveKey usage in decompiled code
- Full record-schema mapping after payload decryption
