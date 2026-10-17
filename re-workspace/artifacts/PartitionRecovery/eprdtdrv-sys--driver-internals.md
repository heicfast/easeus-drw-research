# EPMNtDrv Deep-Dive — Complete Driver Internals (Ghidra-decompiled)

**Binary**: `PartitionRecovery/eprdtdrv.sys` (identical logic in eprdtdrv_win7older.sys, ebrntdrv.sys, epmdkdrv.sys — 39 functions each, byte-similar decompilation)
**Source evidence**: re-workspace/reversed/ghidra-drivers/eprdtdrv_decompiled.c (2192 lines)
**Pool tag**: `0x72647365` = "esdr" (EaseUS Data Recovery — confirmed in ExAllocatePoolWithTag calls)

## 1. DriverEntry

```
DeviceName  = "\Device\" + "EPMNTDRV"      (UNICODE_STRING built via StringCchCopyW)
SymLinkName = "\DosDevices\" + "EPMNTDRV"
IoCreateDevice(DriverObject, ExtSize=0, &DeviceName,
               DeviceType=0x22 (FILE_DEVICE_UNKNOWN),
               , Exclusive=0, &g_DeviceObject)
IoCreateSymbolicLink(&SymLinkName, &DeviceName)
g_DeviceObject->Flags |= 0x10          // DO_DIRECT_IO  (MDL-based direct I/O)

Dispatch table (DRIVER_OBJECT.MajorFunction):
  +0x68 DriverUnload            -> FUN_00011060  ("[EPMNtDrv]DriverUnload called")
  +0x70 IRP_MJ_CREATE           -> FUN_000110b0  (path parser + target resolution)
  +0x80 IRP_MJ_CLOSE            -> FUN_000117b8  (context free)
  +0x88 IRP_MJ_READ             -> FUN_00011fd8  (sector read passthrough)
  +0x90 IRP_MJ_WRITE            -> FUN_00011de4  (sector write passthrough)
  +0xe0 IRP_MJ_DEVICE_CONTROL   -> FUN_00011bcc  (IOCTL dispatch + passthrough)
  +0x100 IRP_MJ_CLEANUP         -> FUN_00011dbc  (trivial complete)
```

## 2. IRP_MJ_CREATE — sub-device path resolution (FUN_000110b0)

The user-mode app opens `\\.\EPRDTDRV\...` paths; the trailing path segments select the target:

### Branch A — `...\Volume\{N}`
1. Path scanned for `L"\\Volume"` marker (wcsstr-style loop)
2. `RtlUnicodeStringToInteger(base 10)` parses N
3. `IoGetDeviceObjectPointer(L"\Device\HarddiskVolume%u", N)` → volume device object
4. `IoGetAttachedDeviceReference(volDevObj)` → top of THAT volume's device stack
5. Allocates 16-byte context (pool "esdr"): `{ pTargetDeviceObject; diskIndex }`
6. `FileObject->FsContext (0x18) = volumeDeviceObject; FileObject->FsContext2 (0x20) = context`

### Branch B — `...\{DiskNum}\{PartNum}` (e.g. `\\.\EPRDTDRV\0\2`)
1. Parses DiskNum (must be < 200)
2. `IoGetDeviceObjectPointer(L"\Device\Harddisk{D}\Partition0")` — **always the whole-disk device** (Partition0 = raw disk covering all partitions)
3. If open fails → fallback `L"\Device\Harddisk{D}\DR{P}"` (legacy DR{n} naming, retry once, then give up: "that's it!")
4. Then walks DOWN the device stack (`IoGetLowerDeviceObject` loop):
   - `ObQueryNameString` on each device; looks for the one whose name contains `\Device\Harddisk`
   - `RtlCompareUnicodeString(..., L"Disk", case-insensitive)` — identifies the physical disk class device
   - This skips partition-manager filter devices to reach the real disk PDO/stack top
5. Context stores the resolved disk stack device + flags ("Disk" mode)

**Meaning**: opening `\\.\EPRDTDRV\0\2` yields absolute-sector access to physical disk 0 (the partition number mainly distinguishes path instances / selects DR naming fallback). All sector addressing is caller-side absolute LBA on the whole disk — the scan engines compute partition-relative offsets themselves.

## 3. IRP_MJ_READ / IRP_MJ_WRITE — sector passthrough (FUN_00011fd8 / FUN_00011de4)

```
input MDL (Irp->MdlAddress):  if (mdl->MdlFlags & 5) == 0     // not mapped
    buffer = MmMapLockedPagesSpecifyCache(mdl, KernelMode, MmCached, ...)
else
    buffer = mdl->MappedSystemVa
target = context->pTargetDeviceObject
irp = IoBuildAsynchronousFsdRequest(IRP_MJ_READ /*3*/ or WRITE /*4*/,
                                    target, buffer,
                                    Parameters.Read.Length /*in SECTORS*/,
                                    &Parameters.Read.ByteOffset /*absolute LBA byte offset*/,
                                    &iosb)
IoSetCompletionRoutine(irp, FltReadWriteSectorsCompletion /*FUN_00011844*/, event, TRUE,TRUE,TRUE)
status = IofCallDriver(target, irp)
if (status == STATUS_PENDING) KeWaitForSingleObject(event,...)
if (success) Irp->IoStatus.Information = Length << 9     // SECTOR = 512 BYTES (hardcoded)
```

**Contract**: `ReadFile()` on the EPRDTDRV handle — read length is expressed in **sectors of 512 bytes**, file offset = absolute byte offset on disk (LBA*512). Completion routine `FltReadWriteSectorsCompletion` (FUN_00011844) unlocks pages (`MmUnlockPages`), frees MDLs/IRP, signals the wait event, and logs `[FltReadWriteSectorsCompletion] Io error` on failure.

*512-byte sector assumption*: user-mode must adapt to 4Kn/512e drives (sector-size normalization happens above the driver — see `InitSectorSize` in EUDCPEPM and user-mode geometry queries).

## 4. IRP_MJ_DEVICE_CONTROL — three custom IOCTLs + passthrough (FUN_00011bcc)

All codes CTL_CODE(DeviceType=0x600, Function, METHOD_BUFFERED, FILE_ANY_ACCESS):

| IOCTL | CTL components | Handler | Meaning |
|---|---|---|---|
| `0x60002400` | (0x600, 0x900, METHOD_BUFFERED) | FUN_00011908 | Sets/resolves the *global* (no-file-object) target: stores `DAT_00015170` device object. Used when opening without a sub-path. |
| `0x60002404` | (0x600, 0x901, METHOD_BUFFERED) | FUN_00011a90 | **GetFileObjName**: input DWORD handle + out buffer ≥ 0x208 (520 = 260 WCHARs = MAX_PATH); returns name of a kernel file object (uses `ObReferenceObjectByHandle` + `ObQueryNameString`) |
| `0x60002408` | (0x600, 0x902, METHOD_BUFFERED) | inline | **GetDiskContextMode**: returns 4-byte mode from target's device-extension (+8) |
| any other | — | passthrough | `IoGetAttachedDeviceReference(context target)` → `IoBuildDeviceIoControlRequest(same code, target, in, out)` → `IofCallDriver` — **transparent IOCTL proxy to the disk stack** (lets user mode query disk geometry, SCSI passthrough etc. without re-opening the device) |

## 5. IRP_MJ_CLOSE — teardown (FUN_000117b8)
Frees the 16-byte "esdr" context from FsContext2, dereferences the volume/file object kept in FsContext, completes IRP. No locking — relies on CLEANUP ordering.

## 6. Security & robustness observations
- **No ACL on the device** — access control comes from: (a) signed-driver install (setupdrvx64.exe writes to System32\Drivers via SCM with admin rights), (b) handle-validation behavior in the GetFileObjName IOCTL (caller passes a HANDLE, driver resolves it within its own process context).
- `KeBugCheckEx(0xf7, ...)` path (FUN_000125b0/125d8): driver-cleanup sanity assert.
- Overlay data after last section (rabin2 `overlay true`) — contains the Authenticode certificate.
- No runtime unpacking, no anti-analysis, no obfuscation: plain WDK C.

## 7. How this maps to the product workflow
1. `setupdrvx64.exe` (mod.WinDiskAccessDriverSetup) installs+starts eprdtdrv service on first scan needing raw access.
2. PartitionRecovery `Device.mo` opens `\\.\EPRDTDRV\{disk}\{part}` or `...\Volume\{N}`.
3. Scan engines (NTFSSearchDLL etc.) read **raw sectors** through this handle: MFT records, FAT tables, superblocks, inode tables — no OS filesystem stack involved, so deleted/formatted structures are visible.
4. Recovery writes either through the same raw path (partition table fixes) or via normal file APIs to the target volume.
5. In WinPE (BUILDPE): identical driver preloaded as ebrntdrv/epmdkdrv, auto.bat launches DRW.exe with full raw access from the start.

## 8. Identity confirmation (why 4 copies)
`eprdtdrv.sys`, `eprdtdrv_win7older.sys`, `ebrntdrv.sys`, `epmdkdrv.sys` all carry PDB `epmntdrv.pdb`, same 39 functions, same decompiled line counts (±1 from timestamp differences). They are the same build (or successive builds of the same source with different service-name defines) deployed under context-specific names:
- live system (DRW): eprdtdrv ("EPRDT DRV")
- WinPE boot: ebrntdrv (E(u)-BR-NT) and epmdkdrv (EPM-DK)
- Win7 legacy: separate build for older WDK ABI (eprdtdrv_win7older)
