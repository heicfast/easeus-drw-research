# EPMNtDrv internals v2 — completion engine, process-identity IOCTLs, volume resolution

> Companion to `eprdtdrv-sys--driver-internals.md` (which documents DriverEntry, dispatch
> tables, CREATE branch B, READ/WRITE sector path, IOCTL list). This file documents the
> previously-unwalked internals from the same Ghidra corpus
> (`re-workspace/reversed/ghidra-drivers/eprdtdrv_decompiled.c`, 2,192 lines).
> All addresses are image-relative (driver base 0x0, functions at 0x11000+).

## 1. `FltReadWriteSectorsCompletion` — FUN_00011844 (the async IO engine)

The completion routine behind the MDL read/write path. Its name is self-documented by
the embedded DbgPrint string `[FltReadWriteSectorsCompletion] Io error 0x%x,%p` [CODE]:

```
context (param_2) layout — the per-IRP extension:
  +0x08  PMDL mdl_chain        — walked and freed: while (m) { next = m->Next;
                                  MmUnlockPages(m); IoFreeMdl(m); m = next; }
  +0x10  flags                 — bit 0x20: free the buffer at +0x18 (ExFreePoolWithTag tag 0)
  +0x18  buffer
  +0x30  NTSTATUS io_status
  +0x38  ULONGLONG io_info     — bytes transferred (for reads: sector count << 9)
  +0x41  byte signal_enable
  +0x48  PULONGLONG result_ptr — {status, info} written back to the submitter's slot
```

Flow [CODE]:
1. Frees the MDL chain node-by-node (`MmUnlockPages` + `IoFreeMdl`) — the user buffer
   pages mapped by `IoBuildAsynchronousFsdRequest` are unlocked here.
2. Conditionally frees the bounce buffer (flag 0x20).
3. Logs failures when `io_status < 0`.
4. If `signal_enable` and the caller passed an event (`param_3`): writes
   `{status, info}` to `result_ptr[0..1]` and **`KeSetEvent(param_3, 1)`** — the
   synchronous-looking submitter (DeviceIoControl from user mode) unblocks.
5. **`IoFreeIrp` + `return 0xC0000016`** — `STATUS_MORE_PROCESSING_REQUIRED`, the
   canonical completion-routine return that stops the IO manager from touching the IRP
   after the driver has freed it (the IRP was driver-allocated via
   `IoBuildAsynchronousFsdRequest`, not from the caller's thread quota).

This closes the async loop documented in v1: submitter builds IRP → disk stack →
completion frees everything and KeSetEvent-wakes the waiting thread.

## 2. The process-identity IOCTLs — who is allowed to use the driver

### 2.1 `0x60002400` — GetProcName (FUN_00011908) [CODE]

Input: an in-buffer whose first dword is a **PID supplied by the caller**. The driver:

1. Validates stack-loc parameters (`para error %d,%d!` on mismatch).
2. `NtOpenProcess(&h, 0x20000, OBJECT_ATTRIBUTES{...}, &ClientId{pid})` — opens the
   **caller-declared** process (0x20000 access).
3. Allocates 0x400 bytes with tag **`esdr`** (0x72647365 — appears here and in the
   volume-name buffer of CREATE; the driver's house tag, also seen across the EPM
   family).
4. `ZwQueryInformationProcess(h, 0x1B /* ProcessImageFileName */, buf, 0x400, ...)`.
5. Copies the returned image path into the IRP's system buffer and stores its byte
   length at request-context `+0x38` — i.e. **the caller learns the true image path of
   any PID it names** (a privileged name-resolution service; the product uses it to
   attribute scan activity to DRWUI.exe / WinPE host processes).

### 2.2 `0x60002404` — GetFileObjName (FUN_00011a90) [CODE]

Input: `{HANDLE file, PVOID out}`. The driver:

1. `ObReferenceObjectByHandle(handle, 0x80000000, IoFileObjectType, KernelMode, &fo)`.
2. Allocates 0x400 `esdr` buffer.
3. `ObQueryNameString(fo->DeviceObject, ...)` — the **device's** name
   (e.g. `\Device\HarddiskVolume3`), then
   `RtlAppendUnicodeStringToString(..., fo->FileName)` — appending the file's own
   relative path ⇒ **fully-qualified NT path** of any open handle.
4. Copies into the caller's buffer, NUL-terminates, sets the returned length.

A second call site (line 701 in the dispatch) uses the same helper with the driver's own
global handle `DAT_00015170` — the driver resolves **its own** open handle (the volume
file object cached at CREATE time) through the same machinery.

### 2.3 `0x60002408` — GetDiskContextMode

Returns the per-open "mode" dword from the 0x10-byte context allocated at CREATE
(`{PDEVICE_OBJECT top-of-stack, LONG mode}`) — the user-mode client (Device.mo /
GetDriverInfo) queries which backing mode a `\Volume\N` vs `\{disk}\{partition}` handle
landed on [CODE — context layout from CREATE; mode semantics cross-ref v1 §4].

## 3. `\Volume\{N}` resolution — the complete chain (CREATE branch A) [CODE]

```
FO->FileName (skipping device prefix, min 2 wchars)
  └─ scan for L"\\Volume" (7-wchar literal compare loop, position tracked in uVar6)
      └─ digits after the prefix → RtlUnicodeStringToInteger(base 10) → N
          └─ RtlStringCbPrintfW → "\\Device\\HarddiskVolume%u"  (via helper FUN_00011008)
              └─ IoGetDeviceObjectPointer(name, 0, &fileObj, &devObj)   ← opens the volume
                  └─ ObfReferenceObject(fileObj)          ← pinned for the handle lifetime
                      └─ IoGetAttachedDeviceReference(devObj) → top-of-stack target
                          └─ context = ExAllocatePoolWithTag(0x10, 'esdr')
                              { +0x00 PDEVICE_OBJECT top, +0x08 LONG mode }
                              → stored at FO-extension +0x20; IRP->IoStatus.Information = 0
```

Failure paths print `[GetVolumeDeviceObejct] %ws open error 0x%x,that's it!`
(**vendor typo "Obejct" preserved**) and fail CREATE with `STATUS_INVALID_PARAMETER`
(0xC000000D). The `HarddiskVolume%u` mapping is the mount-manager numbering — the
client-side Device.mo composes `\\.\EPRDTDRV\Volume\N` names after enumerating volumes
through the user-mode volume manager, and the driver translates back to the real device.

## 4. DriverUnload — FUN_00011060 [CODE — new finding, v1 omitted it]

```
IoDeleteSymbolicLink(&dos_name);      // \DosDevices\EPRDTDRV
IoDeleteDevice(control_device);       // cached at DAT_000151a0
RtlFreeUnicodeString(&dos_name);
RtlFreeUnicodeString(&dev_name);
DbgPrint("[EPMNtDrv]DriverUnload called\r\n");
```

The driver registers a real unload routine ⇒ it is **hot-unloadable** — this is what
lets `setupdrvx64` (WinDiskAccessDriverSetup) deploy/upgrade numbered driver variants
(`%s%d` naming per the setupdrvx64 artifact) without rebooting on the live-Windows path.

## 5. Robustness & toolchain evidence [CODE]

- **GS cookie protection**: `__GSHandlerCheckCommon` (line 1842) with the fail path
  `FUN_000125b0 → FUN_000125d8 → KeBugCheckEx(0xF7, cookie, ...)` — every security-
  relevant function carries a stack cookie; corruption trips bugcheck 0xF7
  (the GS-failure code used by x64 MSVC).
- **CRT statically linked**: `_vsnwprintf/_vsnwprintf_l`, `_woutput_l`,
  `RtlStringVPrintfWorkerW`, `StringCopyWorkerW/StringLengthWorkerW/
  StringValidateDestAndLengthW` (strsafe), an SSE/AVX-vectorized `memset`
  (FUN_000128b0 — 8/64-byte block fill with `LOCK` prefix on the huge-size path) —
  **library function fingerprints resolve to "Visual Studio 2019 Release"**
  (Ghidra Library-match comments) with strsafe signatures from VS2010/2015 — the
  EPMNtDrv family is built with the VS2019 toolchain.
- **DbgPrint trace strings** (release build, still compiled in):
  `[EPMNtDrv]DriverUnload called`, `[FltReadWriteSectorsCompletion] Io error`,
  `[GetProcName] OpenProcess/QueryInfo/para error`, `[GetFileObjName]
  ObReferenceObjectByHandle/para error`, `[GetVolumeDeviceObejct] … that's it!`,
  `[epmntdrvDispatchWrite] Write error 0x%x,%u,%I64u,0x%x` — the Write dispatcher
  logs (code, len, offset, status) quadruples on failure, confirming the WRITE path is
  the symmetric twin of the documented READ path.

## 6. Updated IOCTL contract table (consolidated)

| IOCTL | Handler | In | Out | Purpose |
|---|---|---|---|---|
| 0x60002400 | FUN_00011908 GetProcName | `{u32 pid}` | image path + u64 len | process→image-name resolution (activity attribution) |
| 0x60002404 | FUN_00011a90 GetFileObjName | `{HANDLE, PVOID}` | full NT path (≤0x3F0 wchars) | handle→qualified-name resolution (destination validation) |
| 0x60002408 | (inline) GetDiskContextMode | — | mode dword | which backing mode the handle targets |
| any other | pass-through | — | — | forwarded verbatim to the top-of-stack device (v1 §4) |

## 7. Cross-links

- v1 internals: `PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- Trio byte-diff: `PartitionRecovery/epmntdrv-trio--byte-diff-verification.md`
- User-mode clients: `PartitionRecovery/getdriverinfo--tb-module-decode.md`,
  MOM `Device.mo` (ghidra-mo corpus), `per-binary/setupdrvx64.md` (deployer)
- Top-level: `architecture/02-kernel-driver-architecture.md`
- WinPE variant usage: `architecture/03-winpe-boot-environment.md`

## 8. Confidence

100% [CODE] — every item read directly from the decompiled corpus; names GetProcName /
GetFileObjName / FltReadWriteSectorsCompletion are the vendor's own (DbgPrint strings),
not guesses. Cross-file statements (setupdrvx64 deploy semantics, Device.mo client)
reference their own artifacts.
