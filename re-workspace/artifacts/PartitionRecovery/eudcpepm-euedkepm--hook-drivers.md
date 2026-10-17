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

## EUEDKEPM — the control surface (decompiled)

- Creates a named control device `IoCreateDevice(..., Type=FILE_DEVICE_UNKNOWN (0x22))`
  (name at DAT_00014150) — the user-mode door (IoCreateSymbolicLink to DosDevices) through
  which WinPE-side EaseUS apps enumerate/steer the hooked stacks (disk-selection for copy,
  lock/flush coordination).
- Companion of EUDCPEPM in the same sharelib/dc tree — access (KEPM = Kernel EPM).

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
| **EUEDKEPM (EuDskAcs)** | control | WinPE control device for disk access |
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
