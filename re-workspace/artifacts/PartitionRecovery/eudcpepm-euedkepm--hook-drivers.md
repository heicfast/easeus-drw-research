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
