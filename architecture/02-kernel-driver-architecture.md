# Kernel Driver Architecture — Raw Disk Access Subsystem

**Evidence base**: rabin2 dumps + capa + FLOSS strings from CI (re-workspace/reversed/ci-multitool/), PDB paths (re-workspace/pdb_paths.json), inventory.json
**Method**: cross-referencing driver imports, device-name strings, user-mode counterpart strings, WDK build paths
**Confidence**: device names/paths = 100% (literal strings); behavioral roles = high (imports + capa + call-site strings)

## 1. The Driver Family — 6 distinct binaries, 4 distinct roles

| Binary | Size | Internal name (PDB) | Device | Role |
|---|---|---|---|---|
| `PartitionRecovery/eprdtdrv.sys` | 27,272 | **epmntdrv.pdb** (mod.windiskaccessdriver) | `\Device\EPMNTDRV` + `\\.\EPRDTDRV\…` namespace | Raw disk access proxy (production, Win8+) |
| `PartitionRecovery/eprdtdrv_win7older.sys` | 27,272 | epmntdrv.pdb | same | Same driver built for Win7 and older |
| `BUILDPE/.../system32/ebrntdrv.sys` | 27,272 | epmntdrv.pdb | same | Same driver, WinPE deployment, renamed "ebrntdrv" (E(u) BR NT DRV) |
| `BUILDPE/.../system32/epmdkdrv.sys` | 27,272 | epmntdrv.pdb | same | Same driver, WinPE deployment, renamed "epmdkdrv" (EPM DK DRV) |
| `BUILDPE/.../drivers/EUDCPEPM.sys` | 72,144 | `_epm_main_/sharelib/dc` (EuBackup.pdb) | `\Device\%s` dynamic | **Device-stack HOOK driver** (disk copy / volume lock) |
| `BUILDPE/.../drivers/EUEDKEPM.sys` | 19,408 | same sharelib (EuDskAcs.pdb) | `\Device\EUDKEPM` (reg DeviceName) | **Named raw-disk access door** (PID-token gated, direct \Driver\Disk forwarding; NOT a hook) |
| `EuShare/EuMrx.sys` | 248KB | EuMrx | `\Device\EuRdr` | **Network redirector mini-driver** (NAS access) |

All are WDK `fre_wlh_amd64` (free/retail, Vista+ ABI, x64) builds, Authenticode-signed (EaseUS = "Chengdu Yiwo Tech Development Co., Ltd").

## 2. EPMNtDrv — the WinDiskAccessDriver (core raw-disk engine)

### 2.1 What it is
One driver source (`mod.windiskaccessdriver` in the EPM/DRW shared codebase), shipped under 4 filenames depending on context:
- `eprdtdrv.sys` — installed by DRW's `PartitionRecovery/setupdrvx64.exe` when the app runs on a live Windows system (DRW = Data Recovery Wizard)
- `ebrntdrv.sys` / `epmdkdrv.sys` — preloaded inside the WinPE boot environment (BUILDPE) where no driver-signing enforcement issues exist
- `eprdtdrv_win7older.sys` — legacy build for Windows 7-

### 2.2 Device namespace (how user-mode finds it)
From user-mode `Device.mo` (PartitionRecovery module) strings:
```
\\.\EPRDTDRV\%d\%d              <- disk index \ partition index   (e.g. \\.\EPRDTDRV\0\2)
\\.\EPRDTDRV\%d\Volume\%d       <- disk index \ volume index
regex: ^\\\\.\\EPRDTDRV\\(\d+)\\(\d+)$
regex: ^\\\\.\\EPRDTDRV\\(\d+)\\Volume\\(\d+)$
```
The driver's main control device is `\Device\EPMNTDRV` with `\DosDevices\EPMNTDRV` symlink (from `IoCreateDevice`/`IoCreateSymbolicLink` strings). It then enumerates and opens physical device objects by name:
```
\Device\Harddisk%u\DR%u          <- physical disk N, device-revision R
\Device\Harddisk%u\Partition0    <- whole-disk device (partition0 = raw disk)
\Device\HarddiskVolume%u         <- mounted volume device
```
Its internal routines `GetDiskDeviceObejct` / `GetVolumeDeviceObejct` (sic — EaseUS's own typo) retry-open these devices.

### 2.3 How a read flows (import-verified)
1. User mode `CreateFile("\\\\..\\EPRDTDRV\\0\\2")` → IRP_MJ_CREATE dispatched to EPMNtDrv
2. Driver resolves `\Device\Harddisk0\Partition2` (or `HarddiskVolume%u`) via `IoGetDeviceObjectPointer`
3. Read IOCTL / IRP_MJ_READ: driver builds IRP via `IoBuildDeviceIoControlRequest` / `IoBuildAsynchronousFsdRequest`
4. `MmMapLockedPagesSpecifyCache` + `IoFreeMdl` — direct I/O with MDL mapping (zero-copy user buffer)
5. `IofCallDriver` sends down to disk stack; completion routine fires `KeSetEvent`; caller waits in `KeWaitForSingleObject`
6. `IofCompleteRequest` completes the original user IRP

### 2.4 Process-protection checks
Imports `PsGetCurrentProcessId`, `ObReferenceObjectByHandle`, `ZwQueryInformationProcess`, `ObQueryNameString` — the driver validates which process is requesting access (anti-abuse: only the authorized DRW/EPM process may use the raw path).

### 2.5 capa verification (CI, 35 functions)
- "complete processing asynchronous IO request" (6 sites) — IRP completion paths
- "create device object" (2 sites) — control device + per-target devices
- "print debug messages" (9 sites) — DbgPrint trace logging

## 3. EUDCPEPM / EUEDKEPM — WinPE driver pair from the disk-copy sharelib

(NB: only EUDCPEPM is a *hook* driver — see the EUEDKEPM internals section below for
its true identity as an independent raw-disk access door, fully decompiled in
`artifacts/PartitionRecovery/eudcpepm-euedkepm--hook-drivers.md`.)

From strings:
```
DrvHKSelfAddDevice eHKNotHOOK return
DrvHKHookNewDevice driver=0x%x
?DrvHookNextAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z
InitSectorSize m_pTargetDeviceObject=%I64u pDisk=%I64u
```
- "HK" = hook. `DrvHookNextAddDevice` attaches into the device stack when the PnP manager adds new disk devices.
- Purpose (from EPM "dc"/disk-copy sharelib context): intercept/modify IRPs for **volume locking and disk copy** — when DRW/EPM needs exclusive access to an in-use volume (e.g. to fix a partition table or image a disk), the hook driver suppresses/queues foreign IO.
- `InitSectorSize` — normalizes sector geometry between target device objects.
- Deployed only in WinPE (BUILDPE/.../drivers/), where no signature-enforcement issues exist on locked-down systems.
- These are NOT loaded during normal Windows operation of DRW — they are for the bootable environment (and EPM's disk-copy product).

## 4. EuMrx — the NAS redirector

- Device `\Device\EuRdr`; service params under `HKLM\SYSTEM\CurrentControlSet\Services\EuMrx\Parameters`
- Imports/strings show a full **Windows Redirector (RDBSS) mini-redir**: `RxStopMinirdr`, `RxDereferenceAndDeleteRxContext`, FCB management, per-processor work queues (`RxDispatcher.NumberOfProcessors`, `PostedRequestCount`, `OverflowQueueCount`)
- Role: lets DRW mount NAS shares (SMB/other protocols) as browsable file systems during NAS scan/recovery — the "NAS device" feature in the UI (`CDoScanRemoteDevice`, `CNasCancelConnectThread` classes in DRWUI confirm the user-mode side).
- The user-mode counterpart is `cloud_session.dll` / `EuShare/` directory (EuMrx.sys lives in EuShare/).

## 5. Driver installation lifecycle (user-mode orchestration)

1. `PartitionRecovery/setupdrvx64.exe` (PDB: `mod.WinDiskAccessDriverSetup/setupempdrv03`) installs `eprdtdrv.sys`:
   - copies to `%SystemRoot%\System32\Drivers\%s.sys` (strings confirmed)
   - creates + starts the service (SCM APIs)
2. `DRWService.exe` — a separate, on-demand service ("BitlockerReadFVEService") installed/uninstalled via `\DRWService.exe /install` / `/uninstall` (strings in DRWUI.exe)
3. At app exit / driver uninstall, service is stopped and deleted.
4. In WinPE (BUILDPE), drivers are pre-registered via `regdrv.reg` (BUILDPE/x64/regdrv.reg) — loaded at PE boot by winpeshl.ini shell launch of DRW.

## 6. Who-opens-what map (verified by strings)

```
DRWUI.exe / PartitionRecovery modules (user mode)
  ├── Device.mo  ──CreateFile──>  \\.\EPRDTDRV\{disk}\{part}   (raw partition/disk I/O)
  │                                 served by: eprdtdrv.sys (EPMNTDRV)
  ├── BitLockerLib.dll ──PowerShell──> manage-bde -unlock / Unlock-BitLocker
  │                     ──registry──> HKLM\SYSTEM\...\FVEAutoUnlock
  │                     via pipe \\.\Pipe\DRWBitlocker served by DRWService.exe
  ├── EuShare/cloud_session.dll ──RDBSS──> EuMrx.sys → NAS shares
  └── WinPE path: BUILDPE auto.bat launches DRW.exe with drivers preloaded
```

## 7. Open questions — status (updated after drivers decompilation batch)

| Question (original) | Status | Answer (evidence) |
|---|---|---|
| Exact IOCTL codes EPMNtDrv handles | **RESOLVED** | 0x60002400 (set/resolve global target), 0x60002404 (GetFileObjName: handle→name, ≥0x208 out), 0x60002408 (GetDiskContextMode: 4-byte mode); all other codes pass through to the disk stack (transparent IOCTL proxy). See `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md` §4. |
| How EPMNtDrv maps `EPRDTDRV\{d}\{p}` to devices | **RESOLVED** | `\Volume\{N}` → `IoGetDeviceObjectPointer(\Device\HarddiskVolume{N})` + top-of-stack; `{d}\{p}` → `\Device\Harddisk{d}\Partition0` with `\Device\Harddisk{d}\DR{p}` fallback, then walk-down (`IoGetLowerDeviceObject`) to the disk-class device. 16-byte "esdr" context in FsContext2. §2 of the same artifact. |
| EuMrx wire protocol | **PARTIALLY RESOLVED** | EuMrx is RDBSS-only (no wire protocol itself); the userspace side tunnels via libssh2 (agent on NAS at /tmp/EaseUS) and EuMrx rewrites opens to `\\127.0.0.1\...` (FileNameInformation handler). Data-channel ports for the *preview* subsystem are 20171/20172 (DRWUI VAPreviewListener — different subsystem). See `artifacts/EuShare/eumrx-nas-architecture.md`. |
| EUDCPEPM IRP-hook semantics | **RESOLVED (doc-session)** | EUDCPEPM (176 fns, 10,057 lines decompiled) overwrites **ALL 28 MajorFunction slots** with generic hook stub FUN_000120c4, then overrides IRP_MJ_CREATE (FUN_00011f94), IRP_MJ_PNP (FUN_00012f88), IRP_MJ_POWER (FUN_00013170); DriverExtension->AddDevice = FUN_00012014 (the DrvHK attach); DriverUnload = FUN_00011fb4. The stub routes IOCTL-class requests through a decoder that subtracts the registry `IoctlBase` (0x10000 per regdrv.reg) and dispatches a custom code range (0x800C2B00+; trace `"MainDispatch %d code=0x%X"`); non-IOCTL IRPs take the forward path (FUN_00012b70). **Additionally hooks `\Driver\VolSnap`** (VSS volume-snapshot driver — FUN_00018bd0 with `L"\\Driver\\VolSnap"`) for snapshot/volume-lock coordination. |
| **EUEDKEPM dispatch + identity** | **RESOLVED (this session, line-cited)** | EUEDKEPM = **EuDskAcs.sys** ("Disk Access Driver", EaseUS Todo Backup 5.8 lineage, rebuilt 2024-02-04). Dispatch: CREATE=FUN_000110f8 (PID-token gate + `\Device\Harddisk%u\Partition0` binding, FsContext2 = \Driver\Disk dev from stack walk), READ=FUN_00011858 / WRITE=FUN_000116f4 (async FSD forward, `Information = sectors<<9`), DEVICE_CONTROL=FUN_00011594 (clean pass-through, no custom codes — regdrv `IoctlBase` unused), CLEANUP/CLOSE complete+deref, Unload deletes symlink+device. Service: `Start=1 SYSTEM_START`, `DeviceName="EUDKEPM"` → `\Device\EUDKEPM`. Open-path token = `b0\|(b0+b1)<<8\|(b1+b2)<<16\|(b2+b3)<<24` of caller PID (anti-hijack). **No in-tree opener** — dormant deployment from the EPM/Todo-Backup disk-copy lineage. Full detail: `artifacts/PartitionRecovery/eudcpepm-euedkepm--hook-drivers.md` §EUEDKEPM. |

Remaining open items are tracked in the worklog and the per-driver artifacts.
