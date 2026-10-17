# Runtime Family: Network protocol libraries

**Pattern**: `^(libcurl|libssh2|libzmq-mt|zlib1|zlib|liblzma)\.dll$`  
**Shipped copies**: 11 across the tree  
**Role**: libcurl (repair-side downloads), libssh2 (NAS agent transport — dependency of runtime-downloaded connect.exe), ZeroMQ (VAPreviewListener IPC on ports 20171/20172), zlib/liblzma (compression everywhere: rsf, scan sessions, image ops).

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/liblzma.dll`
- `BUILDPE/EaseUS-x64/libssh2.dll`
- `BUILDPE/EaseUS-x64/zlib.dll`
- `BUILDPE/EaseUS-x64/zlib1.dll`
- `EUFileRepair/libcurl.dll`
- `PartitionRecovery/zlib.dll`
- `PartitionRecovery/zlib1.dll`
- `liblzma.dll`
- `libssh2.dll`
- `zlib.dll`
- `zlib1.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `PartitionRecovery/libvmdk.dll`
- `archive.dll`
- `libssh2.dll`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/archive.dll`
- `BUILDPE/EaseUS-x64/libssh2.dll`

## Family members

- libzmq-mt-4_3_5.dll — ØMQ 4.3.5 (preview-listener IPC)
- libssh2.dll — SSH2 (NAS agent push)
- libcurl.dll — HTTP(S) client (EUFileRepair)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
