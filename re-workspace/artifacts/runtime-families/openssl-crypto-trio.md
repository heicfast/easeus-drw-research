# Runtime Family: OpenSSL — THREE shipped generations

**Pattern**: `^(libeay32|ssleay32|libcrypto-1_1|libssl-1_1|libcrypto-1_1-x64|libssl-1_1-x64|libcrypto-3-x64|libssl-3-x64|libssl32)\.dll$`  
**Shipped copies**: 16 across the tree  
**Role**: Three OpenSSL generations coexist because different subsystems link different versions — each consumer pins its own.

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/libcrypto-1_1-x64.dll`
- `BUILDPE/EaseUS-x64/libcrypto-3-x64.dll`
- `BUILDPE/EaseUS-x64/libeay32.dll`
- `BUILDPE/EaseUS-x64/libssl-1_1-x64.dll`
- `BUILDPE/EaseUS-x64/libssl-3-x64.dll`
- `BUILDPE/EaseUS-x64/libssl32.dll`
- `BUILDPE/EaseUS-x64/ssleay32.dll`
- `libcrypto-1_1-x64.dll`
- `libcrypto-1_1.dll`
- `libcrypto-3-x64.dll`
- `libeay32.dll`
- `libssl-1_1-x64.dll`
- `libssl-1_1.dll`
- `libssl-3-x64.dll`
- `libssl32.dll`
- `ssleay32.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `DRWUI.exe`
- `cloud_session.dll`
- `legacy.dll`
- `libssh2.dll`
- `libssl-1_1-x64.dll`
- `libssl-1_1.dll`
- `libssl-3-x64.dll`
- `libssl32.dll`
- `ssleay32.dll`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/DRWUI.exe`
- `BUILDPE/EaseUS-x64/legacy.dll`
- `BUILDPE/EaseUS-x64/libssh2.dll`
- `BUILDPE/EaseUS-x64/libssl-1_1-x64.dll`
- `BUILDPE/EaseUS-x64/libssl-3-x64.dll`
- `BUILDPE/EaseUS-x64/libssl32.dll`
- `BUILDPE/EaseUS-x64/ssleay32.dll`

## Family members

- libeay32/ssleay32 (0.9.8/1.0.x lineage names) — legacy modules (EuRepairHost licensing, older engine code)
- libcrypto-1_1-x64/libssl-1_1-x64 (1.1) — cloud/licensing stack of the 2019-era modules
- libcrypto-3-x64/libssl-3-x64 (3.x) — newest consumers (firebasefetch, cloud recovery)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
