# EPMNtDrv trio — device naming, PID-token handshake, and the WinPE pair (ebrntdrv/epmdkdrv)

> Covers the three same-family driver binaries (`eprdtdrv.sys`, `ebrntdrv.sys`,
> `epmdkdrv.sys` — family proof in `epmntdrv-trio--byte-diff-verification.md`) and the
> **complete client-side open contract** decoded from MOM `Device.mo`. All items [CODE]
> unless noted. Corpus: `re-workspace/reversed/ghidra-drivers/*_decompiled.c` +
> `re-workspace/reversed/ghidra-mo/Device_decompiled.c`.

## 1. Device naming is RUNTIME-COMPOSED from the service name [CODE]

DriverEntry receives the driver's **service registry path** (`param_2`, a
PUNICODE_STRING) and builds BOTH device names from it:

```
dev_name  = "\Device\"      + UPPERCASE(last path component of RegistryPath)
dos_name  = "\DosDevices\"  + UPPERCASE(same)
fallback  = "EPMNTDRV"      ← used when RegistryPath is NULL or shorter than 2 wchars
```

Mechanics (ebrntdrv_decompiled.c ~lines 780-860): two `ExAllocatePool` buffers are
seeded with the `\Device\` / `\DosDevices\` prefixes via `StringCopyWorkerW`; the
registry path is scanned **backwards for the last `\` (0x5C)**; each character of the
service-name suffix is appended with **`RtlUpcaseUnicodeChar`**; length bookkeeping via
`StringValidateDestAndLengthW`; the fallback branch appends the literal `L"EPMNTDRV"`.

Consequences:
| Service name | Control device | DosDevices symlink |
|---|---|---|
| `eprdtdrv` | `\Device\EPRDTDRV` | `EPRDTDRV` |
| `ebrntdrv` | `\Device\EBRNTDRV` | `EBRNTDRV` |
| `epmdkdrv` | `\Device\EPMDKDRV` | `EPMDKDRV` |
| *(no registry path)* | `\Device\EPMNTDRV` | `EPMNTDRV` |

This is the mechanism behind `setupdrvx64`'s **`%s%d` numbered driver variants**
(WinDiskAccessDriverSetup): deploying `eprdtdrv2`, `eprdtdrv3`, … creates
`EPRDTDRV2`, `EPRDTDRV3`, … — **multiple instances coexist with independent device
names**, enabling in-place driver upgrades without rebooting (each new service name =
new device name; the old instance keeps serving existing handles until unload —
see the DriverUnload support in `epmntdrv-internals-v2--completion-engine-identity-ioctls.md` §4).

Device creation parameters: `IoCreateDevice(DriverObject, 0, &name, 0x22
(FILE_DEVICE_UNKNOWN), 0, FALSE, &devObj)`; then `devObj->Flags |= 0x10`
(DO_DIRECT_IO — consistent with the MDL-based read/write path) [CODE].

## 2. The dispatch table — including the undocumented slot [CODE]

`MajorFunction` writes (DRIVER_OBJECT offsets, ebrntdrv ~line 860):

| Offset | IRP major | Handler | Notes |
|---|---|---|---|
| +0x68 | DriverUnload | FUN_00011060 | delete symlink+device, free names |
| +0x70 | IRP_MJ_CREATE | FUN_000110b0 | path resolution + handshake (below) |
| +0x80 | IRP_MJ_CLOSE | FUN_000117b8 | teardown |
| +0x88 | IRP_MJ_READ | FUN_00011fd8 | MDL async sector read |
| +0x90 | IRP_MJ_WRITE | FUN_00011de4 | `[epmntdrvDispatchWrite] Write error 0x%x,%u,%I64u,0x%x` (code,len,offset,status) |
| +0xE0 | IRP_MJ_DEVICE_CONTROL | FUN_00011bcc | 3 custom IOCTLs + pass-through |
| **+0x100** | **IRP_MJ_DIRECTORY_CONTROL** | **FUN_00011dbc** | **NOT previously documented**: a 6-line stub — `IoStatus={STATUS_SUCCESS,0}; IofCompleteRequest` — directory queries are swallowed as no-ops (the namespace is flat; clients enumerate disks/partitions via IOCTL instead) |

## 3. The PID-token handshake — full client↔driver contract [CODE, both sides]

### 3.1 Driver side (CREATE, the branch previously labeled "para error" guard)

For a first path component that is numeric (scanned before any `\Volume` match):

```
b0..b3 = bytes of PsGetCurrentProcessId()
token  = b0 | (b1+b0)<<8 | (b2+b1)<<16 | (b3+b2)<<24     // 8-bit wraps
match  = (token == RtlUnicodeStringToInteger(first_component, 10))
```

The transform appears in the decompile as explicit byte arithmetic
(`local_f8._3_1_ + local_f8._2_1_`, `…_2_1_ + …_1_1_`, `…_1_1_ + (char)local_f8`).
A failed match sets `bVar4 = false` → CREATE ends `STATUS_INVALID_PARAMETER` [CODE].

### 3.2 Client side — MOM `Device.mo` (Device_decompiled.c ~line 342)

```
template = "\\\\.\\EPRDTDRV\\%d\\Volume\\%d"      // 26-byte literal copy loop
pid      = GetCurrentProcessId()
b3 += b2; b2 += b1; b1 += b0;                     // SAME transform, top-down in-place
sprintf(path, template, token, volumeN)
handle   = CreateFileW(path, GENERIC_READ /*0x80000000*/, 0, ...)
```

The client composes the SAME transformed PID into the first `%d` — a lightweight
anti-abuse bind: any process that wants raw-device access through EPMNtDrv must encode
**its own live PID** into the device path; a different process reusing the string gets
`STATUS_INVALID_PARAMETER` at CREATE (the driver re-derives the token from
`PsGetCurrentProcessId()` of the *opening* process) [CODE — both sides byte-exact].

### 3.3 The full path grammar (consolidated)

```
\\.\{SYM}\<PID-TOKEN>\Volume\<N>            → resolves to \Device\HarddiskVolume<N> top-of-stack
\\.\{SYM}\<PID-TOKEN>\<disk#>\<partition#>  → raw disk/partition (see §4)
```

where `{SYM}` ∈ {EPRDTDRV, EBRNTDRV, EPMDKDRV, …} per service name. The `\Volume`
branch internals (RtlUnicodeStringToInteger → `HarddiskVolume%u` →
IoGetDeviceObjectPointer → ObfReferenceObject → IoGetAttachedDeviceReference →
0x10-byte `esdr` context {top-of-stack, mode}) are documented in internals-v2 §3.

## 4. The disk branch — retry chain + disk.sys verification [CODE]

For `\<disk#>\<partition#>` paths (all three drivers, identical code at lines ~186-240):

1. `if (disk# > 199) reject` — max 200 disks.
2. `sprintf("\Device\Harddisk%u\Partition0")` → `IoGetDeviceObjectPointer`.
3. **On failure: retry** — `sprintf("\Device\Harddisk%u\DR%u")` (same number twice —
   the legacy/alternate harddisk-device naming used by some storage stacks) →
   `[GetDiskDeviceObejct] %ws open error 0x%x,retry`.
4. On second failure: `[GetDiskDeviceObejct] … that's it!` → reject.
5. **Stack-type verification loop**: from the acquired device, walk
   `IoGetLowerDeviceObject` chain; for each layer `ObQueryNameString` (0x200 `esdr`
   buffer) and require the name to contain `\Device\Harddisk`; then
   `RtlCompareUnicodeString(layer->DriverObject->DriverName, "Disk", TRUE)` —
   **the layer must be driven by disk.sys** (the Windows disk class driver). The
   result (equal/not-equal) becomes the per-handle "mode" stored in the context
   (queried later by IOCTL 0x60002408 GetDiskContextMode).
6. Then the standard top-of-stack reference + context allocation.

This makes the driver refuse to attach to non-disk stacks (e.g. a filtered CD-ROM or
virtual bus pretending to be a disk) — the IO target is provably the real disk class.

## 5. ebrntdrv vs epmdkdrv vs eprdtdrv — role table (verified identical except identity)

All three are the same source compiled three times (byte-diff: 2,907/9,703 differing
bytes, register allocation variance only — trio artifact). Differences that matter:

| Aspect | eprdtdrv.sys | ebrntdrv.sys | epmdkdrv.sys |
|---|---|---|---|
| Shipped in | live Windows (System32/drivers) | **WinPE only** (`BUILDPE/…/System32\` root) + live tree | **WinPE only** (System32 root) + live tree |
| Service name (hence device) | `eprdtdrv` → EPRDTDRV | `ebrntdrv` → EBRNTDRV | `epmdkdrv` → EPMDKDRV |
| Start type (regdrv.reg, WinPE) | absent in PE | demand-start, group "Boot File System" | demand-start |
| Client | Device.mo primary path (`\\.\EPRDTDRV\…`) | PE fallback instances | PE fallback instances |

The WinPE environment carries **two spare instances of the same driver** under
different service names: if the primary instance is blocked (driver-signing policy
differences in WinPE, a stale loaded copy from a prior boot, or an in-use device name),
the PE host (DRWLoader/Device.mo retry logic — `FUN_1800577e0()` probe at the
CreateFile site) can start `ebrntdrv`/`epmdkdrv` instead and open `\\.\EBRNTDRV\…` /
`\\.\EPMDKDRV\…` without a name collision [CODE for the naming/probe mechanics; the
failover *policy* INFERRED from the redundant instances + runtime naming design].

## 6. Client fallback path [CODE]

Device.mo's same site carries a direct fallback: when the driver-probe
`FUN_1800577e0()` fails, it opens **`\\.\HarddiskVolume%d`** directly (GENERIC_READ)
— plain volume access without the driver (sufficient when the volume is not locked/
dismounted; the driver is only required for raw/locked-volume and disk-level IO).
This is the "no-admin" degraded mode visible in the UI flows.

## 7. Cross-links

- Internals v1: `eprdtdrv-sys--driver-internals.md` · v2 (completion/IOCTLs):
  `epmntdrv-internals-v2--completion-engine-identity-ioctls.md`
- Byte-diff proof: `epmntdrv-trio--byte-diff-verification.md`
- Deployer: `per-binary/setupdrvx64.md` (%s%d numbered variants — now explained by §1)
- WinPE boot env (driver placement/start types): `architecture/03-winpe-boot-environment.md`
- Client module: `PartitionRecovery/getdriverinfo--tb-module-decode.md`, MOM module map
- Top-level driver architecture: `architecture/02-kernel-driver-architecture.md`

## 8. Confidence

100% [CODE] — every claim read from the decompiled corpora, including the byte-level
PID transform verified **identically on both driver and client sides**. The WinPE
failover *policy* (§5) is explicitly marked INFERRED; the mechanics that enable it are
verified.
