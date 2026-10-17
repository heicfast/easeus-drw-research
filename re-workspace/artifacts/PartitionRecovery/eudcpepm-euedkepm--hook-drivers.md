# EUDCPEPM.sys / EUEDKEPM.sys — Disk-Stack Hook Drivers (Deep-Dive)

> Binaries: `og-codebase/BUILDPE/x64/Windows/system32/drivers/EUDCPEPM.sys` (10,057 lines
> decompiled) and `.../drivers/EUEDKEPM.sys` (1,799 lines).
> PDB paths (extracted): EUDCPEPM = `d:\epm\_epm_main\sharelib\dc\Output\sys\fre_wlh_amd64\amd64\EuBackup.pdb`
> EUEDKEPM = `d:\epm\_epm_main\sharelib\dc\Output\sys\fre_wlh_amd64\amd64\EuDskAcs.pdb`
> → both built from the **EPM (Partition Master) solution's shared disk-copy library**
> (`sharelib/dc`); "fre_wlh" = free/WLH(Vista+) build config.
## Identity & deployment

- EUDCPEPM = "EuBackup" — the WinPE **disk copy/backup filter**; per BUILDPE regdrv.reg it
  registers as **epmdiskcopydrv, a disk-class UpperFilter with Start=0 (BOOT_START)** in the
  WinPE environment (see architecture/03-winpe).
- EUEDKEPM = "EuDskAcs" (EaseUS Disk Access) — the disk-access companion (control device).
- Both are deployed under BUILDPE's drivers/ tree — they run in the bootable environment,
  not (normally) in the installed product.

## EUDCPEPM — the filter + AddDevice hooker (decompiled)

Named exports of the hooking layer (mangled-name strings in binary — ground truth):
- `DrvHookNextAddDevice(DRIVER_OBJECT*, DEVICE_OBJECT*)` — **hooks the NEXT driver's
  AddDevice**: interposes on future device-object creations by other drivers (patching the
  target DriverObject's AddDevice pointer).
- `DrvHookSelfAddDeviceWithHookVersion(...)` / `...WithNoHookVersion(...)` — two self-attach
  modes (with/without the hook interposition active); trace "DrvHKSelfAddDevice
  eHKNotHOOK return".
- Filter-device construction (`FUN_00013d10`, byte-verified):
  1. `IoCreateDevice(ext=0x130, Type=FILE_DEVICE_DISK(7), chars=0x100)` — filter DO
  2. `Flags |= 0x10` (DO_DIRECT_IO — MDL IO), later `|= 0x2000`, `&= ~0x80` (ready)
  3. `IoAttachDeviceToDeviceStack(...)` — attach INTO the disk device stack
  4. `KeInitializeEvent` in shared context; sector-size probe via
     `IOCTL_DISK_GET_DRIVE_GEOMETRY_EX (0x700A0)` — trace "DiskperfGetSectorSize
     status=0x%X,ss=%u" / "add device sectorsize=%u"
  5. **Writes magic `0xD2C8E4C5` + installs callback pointer at +0x38 into the target
     device extension** (`*puVar3 = 0xd2c8e4c5; *(code**)(puVar3+0x38) = FUN_00018510`) —
     a handshake signature so other EaseUS components (and the hook itself) can recognize
     an EaseUS-hooked device and find the callback fast-path.
- Sector-accurate IO through the attached stack (direct-IO MDL) — this is the engine that
  gives CloneModule (CCopyDisk*) and the WinPE disk-copy UI **exclusive, consistent,
  sector-level access** to disks being duplicated in PE.

## EUDCPEPM — custom IOCTL protocol (MainDispatch decoder, fully enumerated this session)

**Entry**: FUN_000120f8 (decompiled lines 840–1226) — the dispatch installed over the hook
stubs. IRP major-function byte read from the current stack location (`IRP+0xB8`):
CREATE (0x00) → immediate success; CLOSE (0x02) and CLEANUP (0x12) → FUN_00012aa0 (session
teardown on handle death); DEVICE_CONTROL (0x0E) → the decoder below; anything else →
`STATUS_INVALID_DEVICE_REQUEST (0xC000000D)`.

**Code normalization**: `custom = IOCTL_code − IoctlBase` where IoctlBase = `_DAT_00020144`
(the registry value `IoctlBase=0x10000` from regdrv.reg — confirmed in use here, unlike
EUEDKEPM). Custom range observed: **0x800C2AC8 … 0x800C2B38**. Every handler validates the
caller's session object via the magic **`0x74534298`** at session+0x28 ("tSB\x98" —
Todo-Backup-Session tag); failures return `0xC0000008` (STATUS_INVALID_HANDLE) or hit
`DbgBreakPointWithStatus(1)` on the GETNEXTBLOCK path.

### Command table (custom code → semantics, line-cited)

| custom code | name/role | handler | contract |
|---|---|---|---|
| 0x800C2AC8 | **GET_VERSION** | inline @908-917 | out ≥ 0x84 B: writes `0x00010100` (v1.1.0) + 0x2E-char string `"EASEUS Todo Backup Driver (c) Ea…"` (s_00020150) — the driver's identity card |
| 0x800C2AD0 | **OpenSession** | FUN_00011734, trace `"OpenSession"` @923 | out ≥ 0x840 B: creates the **CSession** object (ctor trace @2985); returns it to user mode |
| 0x800C2AD8 | session op | FUN_0001590c @936 | in ≥ 8 B: session handle → per-session control (e.g. run/pause) |
| 0x800C2AE0 | session op 2 | FUN_0001601c @954 | in ≥ 0x28 B: parameterized session command |
| 0x800C2AE8 | **IOCTL_GETNEXTBLOCK** (named in trace) | FUN_00015628 @974 | in ≥ 0x1E B — the **async data pump**; returns STATUS_PENDING and completes the IRP later (see below) |
| 0x800C2AF0 | session status | inline @987-996 | in ≥ 8 B: returns dword at session+0x100 (state code) |
| 0x800C2AF8 | **GET_PROGRESS** | FUN_00016490 + inline @1000-1021 | in > 0xB B: out+8 = `percent = (bytesDone(session+0xE8) × 100) / totalBytes(session+0xF0)` |
| 0x800C2B00 | **CloseSession** | FUN_000152c4 + ExFreePool @892-903 | in ≥ 8 B: magic check at session+0x28, runs session destructor, frees the pool, returns 0 |
| 0x800C2B0A | **direct sector read** | FUN_000141f8 @1050 | in > 0x10 B: user MDL buffer `{u32 diskId, u32 sectorCount, u64 offset, data…}`; target device resolved by FUN_000131c0; bounds check `devSectorSize(+0x98)×count+0x10 ≤ outLen` |
| 0x800C2B12 | **direct sector write** | FUN_00014300 @1081 | twin of 0xB0A (write direction) |
| 0x800C2B18 | op mode 4 | FUN_00013fe4(irp, 4) @1093 | out ≥ 0x1C B, in > 3 B — mode-4 control (e.g. flush/unlock family) |
| 0x800C2B20 | op mode 3 | FUN_00013fe4(irp, 3) @1103 | twin with mode 3 (lock/hold family — 3/4 pair matches the volume-lock/unlock idiom used elsewhere in the product) |
| 0x800C2B2A | **sized sector transfer** | FUN_00014508 @1132 | MDL buffer; size probe via FUN_00014748(dev, &bytesPerUnit), then `unit×count+0x10 ≤ outLen` check — sized variant of 0xB0A |
| 0x800C2B2E | **sized sector transfer 2** | FUN_000143f8 @1163 | twin of 0xB2A |
| 0x800C2B38 | **CANCEL/ABORT** | inline @1171-1195 | in ≥ 8 B: spinlock; `session+0x38 = 3` (abort state); bounded kick counter `session+0x80 < 0x12D (301)` — worker-notify with **retry budget of 301** |

Anything else in the 0xE branch: forwarded (transparent proxy to the attached disk stack).
Standard storage IOCTLs get traced by name in the forward path @1377-1434:
`IOCTL_SCSI_PASS_THROUGH{,_DIRECT}`, `IOCTL_IDE_PASS_THROUGH`, `IOCTL_ATA_PASS_THROUGH{,_DIRECT}`,
`IOCTL_STORAGE_MANAGE_DATA_SET_ATTRIBUTES` (with `Action=Trim` specially logged) — i.e. the
hook driver is a **pass-through + trace + session-aware filter**, not a blocker.

### CSession — the copy/backup session object (0x840 B, ctor @2950-3050, trace @2985)

```
OpenSession input buffer (in=param_4, also 0x840 B out):
  +0x04  u64  DataFirstSec     (first data sector of the copy range)
  +0x0C  u64  tSecs            (total sectors)
  +0x14  u64  extent param     (→ FUN_00017b48 block-map builder)
  +0x1C  u64  extent param 2
  +0x24  u64  bitmap size      (must be ≠ 0)
  +0x2C  u32  bitmap count     (must be ≠ 0)
  +0x30  u32  spb              (sectors-per-block; 0 → driver picks: tSecs < 0x20 → 1,
                                else 0x10 + tail remainder stored at session+0xD0)
  +0x34  0x800 B block bitmap  (copied into session+0x20 object; bit per copy-block)
  +0x83C u32  out: sector size (echoed from the target device +0x98)
  +0x838 u32  out: effective spb
CSession fields:
  +0x18 target device object   +0x19 sector size   +0x28 magic 0x74534298
  +0xD8 DataFirstSec  +0xE0 tSecs  +0xCC spb  +0xD0 tail sectors
  +0x150 = 0x100000 (1 MiB transfer buffer → allocated at +0x148)
  +0x1b580 (111,744 B) secondary buffer   pool tag 0x4C435545 "ECLU"
  +0x30 state (0x38 after init)  +0x38 abort state (3 = cancel)
  +0x80 worker-kick counter (cap 0x12D)   +0xE8 bytesDone  +0xF0 totalBytes
  +0x40/0x48 pending-IRP queue (spinlock +0x50)   +0x158 IRP-context lookaside
```
Invalid input (tSecs/bitmapSize/bitmapCount == 0) → `STATUS_INVALID_DEVICE_REQUEST`.
The session wires up: block-map/extent object (FUN_00017b48 from the bitmap), a worker with
completion callback FUN_0001664c (FUN_0001820c), and the 1 MiB transfer buffer — a
**bitmap-driven, block-granular disk-copy state machine** shared by EPM clone and Todo
Backup image paths.

### GETNEXTBLOCK — the asynchronous data pump (FUN_00015628 @3241-3299)

1. Allocates an IRP-context node from the session lookaside (FUN_0001bfb8 @3254);
   failure → `STATUS_INSUFFICIENT_RESOURCES (0xC0000017)`.
2. Marks the caller's IRP pending: sets `SL_PENDING_RETURNED` bit (byte at current-stack+3)
   and `Irp->IoStatus.Status = 0x103` (@3260-3263) — **the IRP is NOT completed here**.
3. Inserts the context {irp, fileObject} into the session's doubly-linked pending queue
   under spinlock (`dev+0x40` head; insert-after-tail via FUN_00015868 walk @3272-3287).
4. Kicks the worker: `if (kickCounter++ < 0x12D) { spinlock; FUN_00013454(dev); }`
   — bounded to **301 outstanding kicks** to avoid runaway DPC storms (@3289-3295).
5. Returns STATUS_PENDING; the driver's read path completes queued IRPs as copy blocks
   become available (completion bookkeeping at session+0xE8 bytesDone drives GET_PROGRESS).

`AddUrgentIRP` (FUN_0001573c @3304-3353, named by its trace `"AddUrgentIRP %d ns=%I64u,
secs=%u,secsize=%u pDisk=%I64u"`) is the priority variant: carries explicit
(startSector, sectorCount, sectorSize), inserts at the queue HEAD, same bounded kick —
used for out-of-band reads that must overtake the sequential copy stream.

**Architecture read**: EUDCPEPM is not merely a hook — it is a **kernel-side copy engine**
(Todo Backup/EPM lineage): user mode opens a session describing the copy range + block
bitmap, then either pumps GETNEXTBLOCK IRPs (async, queue-completed) or issues direct
sized sector read/write IOCTLs, while all foreign storage traffic passes through
unmolested (and traced). The VolSnap attach (FUN_00018bd0) exists so volume-snapshot
state stays coherent during the copy window.

## EUEDKEPM — full driver internals (decompiled, line-cited)

**Identity (version resource, byte-exact):** `FileDescription="Disk Access Driver"`,
`InternalName=OriginalFilename=EuDskAcs.sys`, `FileVersion=5.8.0.0`,
`ProductName=EaseUS Todo Backup 5.8.0.0`, `CHENGDU YIWO Tech` — a raw-disk access door
brought from the EPM/Todo-Backup shared disk-copy library; PE timestamp 1707066510
(2024-02-04, modern rebuild of the legacy source). VS2008 toolchain + `/GS` stack
protection (strsafe `StringVPrintfWorkerW` library matches; `__GSHandlerCheck`,
`__report_gsfailure` → `KeBugCheckEx(0xF7 /* DRIVER_OVERRAN_STACK_BUFFER */)`).

**Service registration (regdrv.reg, decoded UTF-16):**
`HKLM\PE_Sys\ControlSet001\services\EUDKEPM` — `Type=1 (KERNEL_DRIVER)`,
`Start=1 (SYSTEM_START)`, `DeviceName="EUDKEPM"`, `IoctlBase=dword:00010000`.
The registry `DeviceName` value is read at DriverEntry (`ZwOpenKey` with the
DriverEntry RegistryPath, `ZwQueryValueKey` "DeviceName", REG_SZ, length ≤ 0xFFFF
> 2) and formatted into two globals: `\Device\%s` and `\DosDevices\%s`
(`FUN_000119bc`, lines 499-549) → control device + symlink. `IoctlBase` is read
by EUDCPEPM's scheme but is **unused by this driver** — its IOCTL handler does no
base-relative decoding.

**Device + dispatch table (FUN_00011c70, line 577-592):**
`IoCreateDevice(DriverObject, 0, "\Device\EUDKEPM", 0x22 /*FILE_DEVICE_UNKNOWN*/,
0, FALSE, &g_Device)`; `IoCreateSymbolicLink("\DosDevices\EUDKEPM", ...)`;
`DeviceObject->Flags |= 0x10` (**DO_DIRECT_IO** — MDL transfer, matches READ/WRITE
handlers using `Irp->MdlAddress`). Registered slots (DRIVER_OBJECT offsets):

| Offset | Slot | Function | Role |
|---|---|---|---|
| 0x68 | DriverUnload | `FUN_000110b4` | delete symlink + device, free name strings |
| 0x70 | IRP_MJ_CREATE | `FUN_000110f8` (906 blocks) | PID-token-gated disk binding |
| 0x80 | IRP_MJ_CLOSE | `FUN_00011488` | deref FsContext/FsContext2 refs |
| 0x88 | IRP_MJ_READ | `FUN_00011858` | async FSD READ(3) forward, sector IO |
| 0x90 | IRP_MJ_WRITE | `FUN_000116f4` | async FSD WRITE(4) forward, sector IO |
| 0xE0 | IRP_MJ_DEVICE_CONTROL | `FUN_00011594` | buffered pass-through IOCTL |
| 0x100 | IRP_MJ_CLEANUP | `FUN_000116cc` | complete 0 |

### CREATE — PID-token access control + target binding (FUN_000110f8)

FileObject path is expected as `\<TOKEN>\<DISK#>` (device-relative; `\\.\EUDKEPM\…`).
The handler scans for the `\` separator, parses the prefix as decimal, and compares
it to a transform of the **caller's own PID**:

```c
pid  = PsGetCurrentProcessId();                 // 32-bit used
b0,b1,b2,b3 = pid bytes (LE)
TOKEN = b0 | (b0+b1)<<8 | (b1+b2)<<16 | (b2+b3)<<24   // line 175-188, byte-sum chain
if ((int)TOKEN == parsed_prefix) allow;         // line 186
```

Because the driver recomputes TOKEN from the *current* process at IRP time, a handle
can only be opened by the process that derived the expected number — an anti-hijack
scheme that makes the open path process-specific. The suffix after the separator is
parsed as decimal DISK# (must be < 100) and formatted as
`\Device\Harddisk%u\Partition0` → `IoGetDeviceObjectPointer` →
- `FileObject->FsContext (0x18) = raw disk device object` (referenced, line 129)
- walk **down** the attachment stack (`IoGetLowerDeviceObject` loop, lines 135-146)
  comparing each layer's DriverObject name against `L"Disk"` (RtlCompareUnicodeString
  → `\Driver\Disk`), and store that disk-class DO in `FileObject->FsContext2 (0x20)`
  — the direct forward target for all later READ/WRITE/IOCTL.

Allocation pool tag `0x72647365` = **"esdr"** — the shared EaseUS driver family tag
(also used by EPMNtDrv/eprdtdrv).

### READ / WRITE — sector-granular async forwarding (FUN_00011858 / FUN_000116f4)

1. Take user buffer: `Irp->MdlAddress`; if MDL flags (byte at +0xA) don't have
   PAGES_LOCKED|SOURCE_IS_NONPAGED (`& 5 == 0`) → `MmMapLockedPagesSpecifyCache(
   …, MmNonCached, 0x10)` else use `Mdl->MappedSystemVa (+0x18)`.
2. `IoBuildAsynchronousFsdRequest(3 /*READ*/ | 4 /*WRITE*/, FsContext2 target,
   buffer, *(u32*)(stack+0x08) /*= length in SECTORS*/, &ByteOffset, &iosb)`.
3. Install completion `FUN_000114f4` (Control=0xE0 → invoke on success/error),
   which unlocks + frees the MDL chain (`Irp+8` walk: `MmUnlockPages` +
   `IoFreeMdl` per link), frees the DO_DIRECT buffer, then reports the final
   status/Information pair through the UserBuffer (lines 258-263: writes
   `Irp->IoStatus` into `*(PVOID*)(param_2+0x48)` + `KeSetEvent`), and returns
   `STATUS_MORE_PROCESSING_REQUIRED (0xC0000016)` before `IoFreeIrp`.
4. Dispatcher waits on the event and, on success, completes the origin IRP with
   `Information = sectors << 9` — **the 512-byte sector contract, identical to
   EPMNtDrv** (lines 379/440).

### DEVICE_CONTROL — clean pass-through (FUN_00011594)

No custom codes: takes `Parameters.DeviceIoControl.IoControlCode` (stack+0x18),
input/output lengths (stack+0x10/+0x08) and `Irp->AssociatedIrp.SystemBuffer`
(param_2+0x18) and issues a synchronous `IoBuildDeviceIoControlRequest` against
`IoGetAttachedDeviceReference(FsContext2)` — the **top** of the target's stack —
then copies `iosb.Information` into the origin IRP. The regdrv.reg `IoctlBase`
value is therefore informational for installers, not interpreted here (contrast:
EUDCPEPM decodes custom 0x800C2B00+ codes relative to its IoctlBase).

### CLEANUP / CLOSE / Unload

- CLEANUP: completes 0/0 (line 325-327).
- CLOSE: dereferences the objects referenced at CREATE — `ObfDereferenceObject` on
  the FsContext chain (lines 225-233), i.e. symmetric teardown of the disk binding.
- Unload: `IoDeleteSymbolicLink(\DosDevices\EUDKEPM)` + `IoDeleteDevice`.

### DriverEntry security cookie (entry, lines 1786-1796)

`DAT_00014100 = (KUSER_SHARED_DATA(0xFFFFF78000000000+0x320) ^ 0x14100) & 0xFFFFFFFFFFFF`,
fallback constant `0x2B992DDFA232`, complement stored at DAT_00014108 — the classic
`__security_init_cookie` kernel-side pattern (also seen in GetDriverInfo.dll
user-mode: same constant) used by the /GS guard `FUN_00011d80` that bugchecks
0xF7 when the stack cookie check fails.

### Verified role + consumer analysis (in-tree exhaustive search)

Searched every decompiled tree (DRWUI 2.38M lines, PartitionRecovery 1.17M, .mo
689K, core, misc) and every in-tree PE binary's strings: **no in-tree component
opens `\\.\EUDKEPM\...`** — Device.mo opens `\\.\EPRDTDRV\%d\%d` / `\Volume\%d`
(5 sites, lines 329/7793/50628/52414/54621); CloneModule only touches
`\\.\MountPointManager`. Conclusion: EUEDKEPM is **deployed-and-registered in the
WinPE image but dormant in this product** — its consumer is the EPM/Todo-Backup
disk-copy lineage (`sharelib\dc`) it was built from; it is carried by the WinPE
image builder (EuPEMaker scripts) as part of the shared BUILDPE driver set.
Contrary to the earlier one-line description, it is *not* a steering surface for
EUDCPEPM: it neither references EUDCPEPM's extension magic (0xD2C8E4C5) nor its
callback slot — it is an independent, self-contained raw-disk access door with
PID-locked opens and direct \Driver\Disk forwarding.

### capa corroboration (ci-multitool/EUEDKEPM)

`create device object`, `complete processing asynchronous IO request`,
`create or open registry key`, `query or enumerate registry value`,
`delay execution`, `__security_check_cookie`, `__GSHandlerCheck`,
`contains PDB path` — all consistent with the decompiled story above.

## Why hook drivers in a recovery product (engineering analysis)

WinPE disk copy needs: (a) seeing ALL disks including ones without drivers loaded,
(b) exclusive access to source disks, (c) bypassing filesystem lock semantics entirely.
A BOOT_START UpperFilter + AddDevice interposition guarantees the filter is in every disk
stack from the earliest PnP enumeration — no timing races with late-attaching storage
drivers — while the magic+callback handshake provides a private fast-path that survives
Microsoft's undocumented-extension hazards.

## Relationship to the other drivers

| Driver | Family | Role |
|---|---|---|
| eprdtdrv/ebrntdrv/epmdkdrv (EPMNtDrv) | raw IO | `\\.\EPRDTDRV\d\p` sector door (installed product) |
| **EUDCPEPM (EuBackup)** | hook | WinPE disk-copy upper filter (BOOT_START) |
| **EUEDKEPM (EuDskAcs)** | raw IO door | WinPE named disk-access device (PID-token gated); dormant in-tree — no in-tree opener found |
| EuMrx | redirector | NAS virtual-drive mini-RDR |

## Cross-links

- Driver family overview: `architecture/02-kernel-driver-architecture.md`
- WinPE deployment (UpperFilter registration): `architecture/03-winpe-boot-environment.md`
- Clone engine that consumes this: `artifacts/PartitionRecovery/pending-operation-engine.md`
  (CCopyDisk*/CCloneOperationController) + CloneModule sources (devio/iso9660)
- Raw evidence: `re-workspace/reversed/ghidra-drivers/EUDCPEPM_*`, `EUEDKEPM_*`

## Confidence

IoCreateDevice/IoAttachDeviceToDeviceStack call structure, flags, IOCTL code, magic
constant, function-name strings, and both PDB paths are byte-exact from decompilation.
The "hook other drivers' AddDevice" semantic is taken from the symbol names themselves
(DrvHookNextAddDevice) plus mode strings; the exact DriverObject patch site is in the
hook layer around FUN_00018510 (decompiled, cited).
