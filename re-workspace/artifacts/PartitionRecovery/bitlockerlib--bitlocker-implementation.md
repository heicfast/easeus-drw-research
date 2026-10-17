# BitLockerLib.dll — Complete BitLocker Implementation (Deep-Dive)

> Binary: `og-codebase/PartitionRecovery/BitLockerLib.dll` — 2,320 functions / 83,772 lines
> decompiled (`re-workspace/reversed/ghidra-partition/BitLockerLib_*`). Ghidra recovered
> the full C++ symbol names (RTTI + decorated names in release build) — API surface below
> is ground truth. Namespace: `bitlocker::`.

## API surface (symbol-exact, all verified in decompilation)

| Method | Role |
|---|---|
| `GetBitLockerStatus` → `bitlocker::fve_status_t` | encrypted/locked/clear state |
| `ParserBitLocker`, `GetVolumeIdentifier` | detect FVE volumes ("-FVE-FS-" OEM signature memcmp — BitLocker volume boot marker) |
| `GetProtectors(bitlocker::protector_type_t, bitlocker::protector_t&)` | enumerate key protectors by type |
| `GetProtectorsCount`, `GetAutoUnlockKey(uchar*, u64*)` | protector counting + auto-unlock keys (pairs with DRWService FVE pipe) |
| `PSUnlockBitLocker(char*, char*)` | unlock via PowerShell: builds `Unlock-BitLocker -MountPoint '<drive>'` (line-verified) |
| (legacy) | `manage-bde -unlock <...>` string-built command — pre-PowerShell fallback |
| `GetFullVolumeEncryptionKey`, `SetProcessProtectorKey`, `SetProcessProtectorKeyFromBEK` | FVEK / VMK handling; **BEK = BitLocker Encryption Key file** (external-key protector) |
| `GenerateKeys`, `Encryption`, `Decryption`, `CancelEncryption` | full volume encrypt/decrypt engine (not just read-through) |
| `BuildMetadataEOWInformation` (20 refs — the most-built structure) | BitLocker EOW (encrypted-on-write) metadata construction — needed to *author* FVE metadata |
| `WriteRawData` / `ReadRawData` | raw sector IO for metadata/data (via EPMNtDrv path) |
| `VolumeSize`, `SectorSize`, `GetInformationOffset`, `GetBackupBootOffset` | FVE metadata geometry (info blocks, backup boot sector) |
| `UnlockVolumeAndRefresh`, `LockVolume`, `IsBitLockerLocked`, `IsBitLockerEncrypted` | volume lock state management |
| `PercentageEncrypted`, `Convert` | progress + conversion helpers |

## Key-recovery crypto (decompiled at lines ~181–230)

An 8-round word-mixing chain over 4-byte words:
`x' = ((x >> 11 | x << 21) ^ (x << 7 | x >> 25) ^ …)` — a custom stretch function in the
BitLocker key-derivation path (consistent with the recovery-password → intermediate-key
stretching used by BitLocker's 48-digit recovery passwords). Also present (imports of the
wider DRW stack): OpenSSL EVP `aes_{128,256}_xts` — the actual volume-content cipher
(BitLocker's AES-XTS data encryption), used to decrypt sectors after key acquisition.

## Recovery flow (how a locked volume gets scanned)

```
DRWUI CBitlockerStartWnd / BitlockerUnlockDialog
  ├─ user supplies password / recovery key / BEK file
  ├─ BitLockerLib::GetProtectors (match type) 
  ├─ stretch/derive (custom rounds) → VMK → FVEK
  ├─ OR auto path: DRWService.exe (\\.\Pipe\DRWBitlocker) reads FVEAutoUnlock keys →
  │   GetAutoUnlockKey applies them (system volumes unlocked at boot)
  ├─ PSUnlockBitLocker / manage-bde fallback (let Windows itself unlock the volume)
  └─ success → engine layer reads sectors; AES-XTS decrypt via OpenSSL EVP path;
     tree/scan proceeds on plaintext view (BITLOCKER device classes in DRWUI RTTI:
     BitlockerDevice, CCheckBitlockerPartition)
Decryption option: BitLockerManager::Decryption can fully decrypt the volume
(post-recovery convenience, mirrors "Unlock and Recover" UI copy).
```

## Engineering assessment

This is a **full third-party-clean-room BitLocker stack**: detection, metadata parse/
**author** (EOW), protector enumeration, key derivation, PowerShell interop, and whole-
volume encrypt/decrypt — comparable to dislocker/libbde class libraries but with
write capability. It exists because locked BitLocker volumes are the #1 consumer
data-loss scenario DRW must handle, and Windows' own unlock surface (manage-bde) is
insufficient when the OS is the thing that's broken (WinPE flows).

## Cross-links

- DRWService pipe (auto-unlock keys): `artifacts/DRWService-exe--bitlocker-service.md`
- DRWUI unlock flow: `artifacts/DRWUI-exe--main-ui-architecture.md` §3.2
- bitlockerhelp.mo (MOM module): `artifacts/PartitionRecovery/mo-module-map.md`
- Raw IO: `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- .rsf corrections note (OpenSSL XTS belongs to this path): `artifacts/SaveScan/rsf-format--scan-session.md`

## Confidence

Every API name is a recovered symbol (byte-exact). PowerShell/manage-bde command strings
verified. The stretch-round description cites the decompiled arithmetic; its exact
position in the recovery-password KDF is inferred from structure (labeled as such).
