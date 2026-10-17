# EUDCPEPM / EUEDKEPM internals v2 — the hook framework, urgent COW cache, and Todo-Backup variant

> Companion to `eudcpepm-euedkepm--hook-drivers.md` (PDB attribution: EuBackup /
> EuDskAcs, `d:\epm\_epm_main\sharelib\dc\`). This file documents the internals decoded
> this session from the Ghidra corpora (EUDCPEPM 10,057 lines / EUEDKEPM 1,799 lines)
> and the string table (rabin2, `og-codebase/BUILDPE/x64/Windows/system32/drivers/`).
> Vendor-own names (from embedded mangled-symbol trace strings) are used throughout.

## 1. EUDCPEPM = the EuBackup snapshot engine (three subsystems)

### 1.1 The DrvHK hook framework — hooking OTHER DRIVERS' AddDevice [CODE]

The driver embeds its own mangled signatures as `__FUNCTION__` trace strings — the
framework's real API:

```
long  DrvHookNextAddDevice(DRIVER_OBJECT*, DEVICE_OBJECT*)   // installed on OTHER drivers
void  DrvHKHookSelfNewDevice(DRIVER_OBJECT*)                  // hook own new devices
long  DrvHookSelfAddDeviceWithHookVersion(DRIVER_OBJECT*, DEVICE_OBJECT*)
long  DrvHookSelfAddDeviceWithNoHookVersion(DRIVER_OBJECT*, DEVICE_OBJECT*)
void  DrvHKSetNewHookFuns(type, pfn)                          // FUN_00018510
```

**`DrvHKSetNewHookFuns(type, pfn)`** installs up to three hook pointers into globals:
type 1 → `DAT_000203f0` (AddDevice replacement), type 2 → `DAT_000206a0` (IRP dispatch
interceptor), type 3 → `DAT_000203f8` (post-AddDevice callback) [CODE].

**`DrvHookNextAddDevice`** (FUN_0001864c) — the hook installed into other drivers'
DriverObject->DriverInit/AddDevice slots:
1. Calls the victim's original AddDevice (`DAT_000203e8`).
2. Resolves **`\Driver\VolSnap`** (the Windows Volume Snapshot driver object,
   FUN_00018ea0).
3. Walks VolSnap's device chain (`driver->DeviceObject → dev->NextDevice` at +4) and,
   for every device not already in the tracked-devices list (`DAT_000206b0` — a
   {devobj, hooked} linked list), attaches/hooks it (`FUN_00018b50`),
   logging `DrvHKHookNewDevice 2 dev 0x%x`.

⇒ **EuBackup rides on VSS snapshot devices**: whenever a new snapshot device is created
(pnP arrival through VolSnap), the hook attaches the urgent-cache filter to it
automatically [CODE; purpose INFERRED from target choice].

**The IRP interceptor** (FUN_00018570): reads the IRP major code; the hook is active
ONLY for majors **{0x03 READ, 0x04 WRITE, 0x09 FLUSH_BUFFERS, 0x0E DEVICE_CONTROL,
0x10 SHUTDOWN}** — everything else passes through the saved original dispatch table
(`DAT_000204e0[major]`). This is the data-path-only interception set [CODE].

**Self-hooking chain**: `DrvHKSelfAddDevice` returns `STATUS_NO_SUCH_DEVICE`
(0xC000000E) when the HK state (DAT_0002023c) is 1/2 (`eHKNotHOOK`); the
WithHookVersion/WithNoHookVersion pair lets a loaded EUDCPEPM hook a SECOND instance
(`"hook the hk version drv"` traces) — stacked EPM filter deployments [CODE].

### 1.2 The device extension contract [CODE — FUN at 000187xx (AddDevice)]

```
IoCreateDevice(DriverObject, 0x130 ext, NULL, 7 /*FILE_DEVICE_DISK*/, 0x100 stack, ...)
ext+0x00  MAGIC 0xD2C8E4C5                  ← EuBackup-extension identifier
ext+0x38  PVOID = DrvHKSetNewHookFuns       ← the hook installer EXPOSED via the extension
ext+0xF0  context back-pointer
ext+0xF8  KEVENT                            ← synchronization
ext+0x110  reserved 0
ext+0x118  lower device (IoAttachDeviceToDeviceStack result)
dev+0x130  u16 bytes-per-sector (queried at attach; traced "add device sectorsize=%u")
Flags: DO_DIRECT_IO (0x10) | 0x2000, cleared 0x80 (power flags)
```

Exposing `DrvHKSetNewHookFuns` **through the device extension** means another EPM
kernel component that finds a device with magic 0xD2C8E4C5 can install its hooks
without any IOCTL — a direct in-kernel plugin channel (also the mechanism the
"tracked devices" list checks) [CODE].

### 1.3 The urgent COW cache — consistent point-in-time reads [CODE + strings]

Named C++ classes survive in the trace strings:

| Class / trace | Meaning |
|---|---|
| `CSession::CSession DataFirstSec=%I64u tSecs=%I64u spb=%u` | backup session: first sector, total sectors, sectors-per-block |
| `CBitmap::SetSectors/ResetSectors (%I64u,%u) bitOff=%u` | the dirty/owned bitmap (`SetBitmapAndRevertMerg n=%u, t=%u`) |
| `AddUrgentIRP %d ns=%I64u,secs=%u,secsize=%u pDisk=%I64u` | register an in-flight write IRP as "urgent" |
| `ProcessUrgentIrp ownIRP=%p` / `pagefile bk s=%I64u,secs=%u` | urgent-IRP processing (pagefile special path) |
| `cache CacheSrcData insert %I64u->%I64u smp.nSectorCount=%u` | **original-data cache insert** (sector→cache slot map) |
| `cache CacheTransmitData0..5 %I64u(sS=%I64u) nsec=%u, realSec=%I64u` | staged transmit of cached originals to the backup reader |
| `cache ReadFromCache not align save=%I64u(%u) current=%I64u(%u)` | cache-hit read with realignment |
| `cache m_pMapCacheDst insert fail` / `cache exist %I64u` | src/dst map caches (std::map-like trees) |
| `eumonSysReadWriteVolBmpFile iBytess=%u secSize=%u` | **bitmap persistence to a volume-bitmap file** ("eumon" = EU monitor service) |
| `StartBackup %u` / `OpenSession` | session lifecycle |
| `GetNextBlock GetUrgBlock get failed s=%I64u,secs=%u` | block scheduler |

Model [INFERRED from the trace pipeline, mechanism CODE]: during a backup session the
filter intercepts WRITEs to sectors in the session range; the original content is
cached (`CacheSrcData`) and the write released; the backup reader's later READs are
served `ReadFromCache`/`CacheTransmitData` — a **copy-on-write snapshot without VSS
orchestration of its own** (and it additionally hooks VolSnap devices, §1.1).

### 1.4 Session boot: FS detection + PAGEFILE.SYS watcher [CODE]

At session start the driver opens the target volume and reads its boot sector:
- `*(u64*)(boot+0x52) == 0x2020203233544146` → `"FAT32   "` label (FAT32 BS label offset 0x52)
- `*(u64*)(boot+3) == 0x202020205346544E` → `"NTFS    "` (OEM label at +3)
- FAT32 total-sector math from the BPB:
  `root_secs + (tot_sectors*0x20 - 1 + spc) / spc + fat_copies * ...` (the classic
  cluster-arithmetic chain across +0x5B..+0x74 fields).
Then registers a **file-name watcher for `PAGEFILE.SYS`** (`FUN_0001a10c(ctx,
"PAGEFILE.SYS", FUN_00014d2c, session)`) — the page file is the most write-active
artifact on a system disk, so it is tracked explicitly for urgent caching (the
`ProcessUrgentIrp pagefile bk s=%I64u,secs=%u` trace is that path) [CODE].

### 1.5 Registry-configured identity [CODE]

DriverEntry reads three service-key values: **`DisplayName`**, **`DeviceName`**
(REG_SZ 3..0xFFFE chars) and **`IoctlBase`** — the control-device name and the IOCTL
code base are BOTH operator-configurable (multiple EuBackup instances = different
DeviceName/IoctlBase pairs; same design philosophy as the EPMNtDrv `%s%d` variants).

## 2. EUEDKEPM = the "EaseUS Todo Backup" disk-access variant [CODE + resource]

Version-resource product name: **"EaseUS Todo Backup"**. 1,799-line corpus — a member
of the EPMNtDrv code family with two differences:

1. **Naming from the `DeviceName` registry value** (REG_SZ, 3..0xFFFF chars):
   `\Device\<DeviceName>` + `\DosDevices\<DeviceName>` — NOT the service-name
   UPPERCASE scheme of eprdtdrv/ebrntdrv/epmdkdrv (this driver is deployed by
   installers that write an explicit DeviceName).
2. Identical 7-slot dispatch (CREATE/CLOSE/DEVICE_CONTROL/DIRECTORY_CONTROL stub/
   READ/WRITE/Unload at the same offsets) with DO_DIRECT_IO, and the same
   **disk.sys verification loop + `\Device\Harddisk%u\Partition0` → `\Device\Harddisk%u\DR%u`
   retry chain** in the disk branch of CREATE (strings at corpus lines 121-133).

⇒ EUEDKEPM is the raw-disk-access building block the Todo-Backup product line uses;
DRW's WinPE carries it alongside EUDCPEPM because the PE media is shared across the
EaseUS data-protection family (see `architecture/03-winpe-boot-environment.md`) [role
INFERRED; mechanics CODE].

## 3. Family map (all five user-relevant drivers, consolidated)

| Driver | Naming scheme | Dispatch | Extra machinery | Product lineage |
|---|---|---|---|---|
| eprdtdrv | UPPERCASE(service name), fallback EPMNTDRV | 7-slot | PID-token handshake, identity IOCTLs | EPM/DRW (live) |
| ebrntdrv | same | same | same | DRW WinPE spare |
| epmdkdrv | same | same | same | DRW WinPE spare |
| EUEDKEPM | registry `DeviceName` | same shape | disk.sys verify + DR retry | Todo Backup (EuDskAcs) |
| EUDCPEPM | registry `DeviceName` + `IoctlBase` + `DisplayName` | filter + FILE_DEVICE_DISK | DrvHK hook framework, VolSnap hooking, urgent COW cache, bitmap persistence | Todo Backup (EuBackup) |
| EuMrx | fixed `\Device\EuRdr` | RDBSS (statically linked) | NAS redirector | DRW NAS recovery |

## 4. Cross-links

- v1 hook-driver artifact (PDB/identity): `eudcpepm-euedkepm--hook-drivers.md`
- EPMNtDrv trio naming/handshake: `epmntdrv-trio--naming-pid-handshake.md`
- internals v2 (completion/IOCTLs): `epmntdrv-internals-v2--completion-engine-identity-ioctls.md`
- Pending-operation engine (user-mode sibling): `PartitionRecovery/pending-operation-engine.md`
- CTbFile TB-image mount (consumer of the backup format): MOM module map
- WinPE placement: `architecture/03-winpe-boot-environment.md` · Top-level: `architecture/02-kernel-driver-architecture.md`

## 5. Confidence

100% [CODE] for the hook framework (mangled names are the vendor's own), interceptor
major set, extension contract (magic + installer slot), FS labels, PAGEFILE.SYS
registration, registry naming schemes, and the VolSnap targeting. The COW model
narrative (§1.3) is marked INFERRED where it connects the named traces into a
pipeline — every individual trace/string is verbatim from the binary.
