# Thin-Binary Deepening Batch 1 — Japanese.dll, WinChkdsk.dll, setupdrvx64.exe, legacy.dll

**Binaries**: BUILDPE/EaseUS-x64/Japanese.dll (4.2 MB), PartitionRecovery/WinChkdsk.dll, PartitionRecovery/setupdrvx64.exe, legacy.dll
**Method**: PE resource-language walk (Japanese), PDB + string census (setupdrvx64, WinChkdsk), embedded-library signature census (legacy)
**Role**: Four mystery/thin binaries decoded to their exact roles.

---

## 1. Japanese.dll — the ja-JP UI resource satellite (PE-only)

x86 DLL, **4.2 MB dominated by a 4 MB .rsrc**, no exports, 2.5 KB of code (resource-loader stubs only). Resource walk:

| Type | Language | Content (decoded) |
|---|---|---|
| 2 (bitmaps) | **1041 (ja-JP)** | UI bitmaps incl. a 200×154 illustration |
| 3 (icons) | 1041 | PNG icon + classic icons |
| 4 (dialogs) | 1041 | **Japanese-language dialogs** — text fragments decode to "…ノートパソコン…" ("laptop…"), full sentences in UTF-16 |
| 6 (string tables) | 1041 | Japanese UI strings |
| 1/12 (cursors/group-cursors) | **2052 (zh-CN!)** | cursor resources with Chinese-locale IDs — leftover from a zh-CN source project |
| 16 (version) | 1041 | VS_VERSION_INFO with Japanese strings |
| 24 (manifest) | 1033 | standard SxS manifest |

**Decoded**: Japanese.dll is a **Win32 resource satellite for the Japanese edition** — the non-Qt UI surfaces' ja-JP dialog/bitmap/string pack. It ships ONLY in the bootable PE build (the PE environment's Win32-layer components — installer-adjacent UI — need locale resources that .qm catalogs can't provide). The zh-CN cursor leftovers fingerprint its source project lineage (built from a Chinese-language resource base).

## 2. WinChkdsk.dll — MOM module wrapping Windows chkdsk (mod.winchkdsk)

- Build path: `i:\_drw_main\partitionrecovery\legacy_mod\mod.winchkdsk\main.cpp` — the PartitionRecovery monorepo's chkdsk module
- **Runs real chkdsk** (`\System32\` + chkdsk invocation), config via `WinChkdsk.ini`, results via `LogMsg.txt`/`LogVss.txt`
- **Volume Snapshot handling** ("Volume Snapshot name: " — coordinates with VSS for safe checking), `SectionFlags`/`GlobalSettings` config keys, `ulib.dll` (the classic chkdsk support library)
- Role: the "check filesystem" feature of the partition tools — validate/repair a volume's FS through Windows' own chkdsk, logging into the module's message system (AddErrorMsgIDs)

## 3. setupdrvx64.exe — the WinDiskAccessDriverSetup installer (live-Windows driver deployer)

- PDB: `D:\Project_Application\_EPM_Main_\mod.WinDiskAccessDriverSetup\setupempdrv03\x64\Release\setupempdrvx64.pdb` — the EPM monorepo's driver-setup module ("empdrv" = EPM driver)
- **Full SCM lifecycle**: `CreateService`/`OpenService`/`StartService`/`ControlService` with per-call error strings ("CreateService failed! Error = %d")
- Installs to three layouts: `\System32\Drivers\%s.sys`, `\SystemRoot\System32\drivers\%s.sys`, `%s\System32\Drivers\%s%d.sys` — **the `%s%d` numbered variant is the driver versioning scheme** (eprdtdrv2.sys-style coexisting versions)
- Service config: "Boot File System" group (the ebrntdrv group!), `DisplayName`/`ErrorControl`/`DeleteFlag`, `-Uninstall` mode
- **Role**: this is the tool that installs/starts eprdtdrv on live Windows (the user-mode counterpart of regdrv.reg in PE). Registry: `SYSTEM\CurrentControlSet\Services\%s` (write + verify)

## 4. legacy.dll — embedded libtomcrypt (legacy crypto substrate)

The string census is a **libtomcrypt fingerprint**: `des_get_ctx_params`, `des_init`, `kdf_pbkdf1_derive`, `cipher_generic_init_internal`, `alg_id_param`, `custom-iv`, `has-randkey`, `engine`, `digest`, `blocksize` — the parameter-descriptor names of the LibTomCrypt library.
- Role: the legacy crypto substrate (DES-era + PBKDF1) kept for backward compatibility — most plausibly the **old .rsf / scan-session decryption** (pre-CryptoAPI era) or legacy-license blobs; the modern paths use CryptoAPI/OpenSSL (crypto inventory in the DRWUI artifact)
- Carries `SectionFlags` too (resource MUI conventions like WinChkdsk)

## 5. Cross-links

- Driver deploy paths: `PartitionRecovery/eprdtdrv-sys--driver-internals.md` + `WinPE/boot-config--winpeshl-autobat-regdrv.md` (PE-side counterpart)
- MOM module family: `MOM-modules/` (WinChkdsk joins the module set — add to module map)
- Build-tree intelligence: setupdrvx64 PDB adds `mod.WinDiskAccessDriverSetup` to the EPM tree (arch 01)
- Crypto inventory: `SaveScan/rsf-format--scan-session.md` (modern paths), DRWCfg AES artifact
