# EuMrx RDBSS internals — the statically-linked redirector engine and mini-rdr dispatch

> Companion to `EuShare/eumrx-nas-architecture.md` (product-level NAS flow). This file
> documents the **RDBSS linkage itself** and the mini-redirector (MRx) dispatch contract
> decoded this session. Corpus: `re-workspace/reversed/ghidra-drivers/EuMrx_*` (672 K
> decompiled lines; Ghidra recovered ~400 real Rx* symbol names) + raw
> `og-codebase/EuShare/EuMrx.sys` disassembly (`scripts/dump_eumrx_minirdr.py`,
> `scripts/disasm_eumrx_stubs.py`).

## 1. The RDBSS linkage — Windows 7 RTM, statically linked [CODE]

The driver statically links a complete **RDBSS (Redirected Drive Buffering SubSystem)**:
~400 named `Rx*` functions (RxStartMinirdr, RxFsdDispatch, RxFsdPostRequest,
RxCreateRxContext, RxRegisterMinirdr, RxPrefixTableLookupName, RxDereferenceAndDeleteRxContext_Real,
RxAddToWorkque, RxCancelNotifyChangeDirectoryRequestsForVNetRoot, RxAcquireSharedFcbResourceInMRxEx,
…), with only ntoskrnl imports (no rdbss.sys import — verified in the earlier session's
import dump). The assert/trace strings embed the **Windows 7 RTM source tree**:
`"d:\w7rtm\base\fs\rdr2\rdbss\create.c"`, `…\rdbss\ea.c"` — the linked RDBSS is built
from the Win7 RTM branch of the redirector framework [CODE — verbatim paths].

## 2. DriverEntry flow (FUN at corpus lines 1100-1240) [CODE]

```
1. ZwOpenKey(service key) → ZwQueryValueKey(L"LogRate", REG_DWORD)
   → DAT_0002116c, capped to 31 (log-throttle rate)
2. RxDriverEntry(DriverObject, RegistryPath)           ← full RDBSS init
3. RxRegisterMinirdr(
       &DAT_00020f40,            // OUT RDBSS_DEVICE_OBJECT*
       DriverObject,
       0x20f50,                  // PMINIRDR_DISPATCH (built by FUN_00012b98, below)
       2,                        // claim/type
       L"\\Device\\EuRdr",       // device name
       0xc70, 0x14, 0x10)        // sizes/flags
4. FUN_0001301c(minirdr + 0x670)  ← EuMrx's OWN extension init
5. FUN_00012b98()                 ← builds the MINIRDR_DISPATCH table (see §3)
6. IoCreateSymbolicLink(L"\\??\\EuRdrDN", L"\\Device\\EuRdr")
7. for i in 0..26:  DriverObject->MajorFunction[i] = FUN_00012e58   ← ALL 27 IRP majors
   DriverObject->DriverUnload = FUN_00012934
8. minirdr->[0x18D] = DriverObject->MajorFunction[IRP_MJ_DEVICE_CONTROL]   (0xC68)
   ↑ the driver SAVES the RDBSS device-control slot into its extension —
     the custom EuRdr IOCTLs (0x140320/… per the NAS artifact) are reached
     through this preserved entry
9. RxCreateRxContext(NULL, minirdr, 0x200) + RxStartMinirdr(...)   ← SELF-START:
   the redirector begins operation immediately at driver load (no FsRtlRegister
   filesystem / bell hop needed); on success global state DAT_00021168 = 2
```

The all-majors forwarder `FUN_00012e58`:
```
if (DeviceObject == the RDBSS device object) return RxFsdDispatch(minirdr, Irp);
else { Irp->IoStatus = {STATUS_INVALID_DEVICE_REQUEST (0xC0000010), 0}; CompleteIrp; }
```
⇒ every IRP on any device object other than `\Device\EuRdr` is rejected — the driver
is a filesystem device, not a filter [CODE].

## 3. The MINIRDR_DISPATCH table (FUN_00012b98) [CODE]

`FUN_00012b98` builds the 0x218-byte header + callback array at 0x20f50
(zero-initialized `.data`, populated at runtime — why the raw file shows no table):

**Header:**
```
+0x00 u32 0x0000EBFF      ← MINIRDR_DISPATCH signature
+0x02 u16 0x218            ← structure length
+0x04 u32 0x2A (42)        ← dispatch entry count
+0x0C u32 0x10   +0x14 u32 4   +0x1C u32 0x270     (capabilities/limits fields)
```

**Entry slots and their targets** (slot = table offset; classification from raw
disassembly):

| Table slot | Target | Classification [disasm] |
|---|---|---|
| 0x20f70 / 0x20f78 | LAB_000138f8 | **STATUS_SUCCESS no-op** (`xor eax,eax; ret`) |
| 0x20f80 | 0 | unsupported |
| 0x20f88 | FUN_0002412c (PAGE) | real implementation (paged) |
| 0x20f90 | FUN_00013878 | real: allocates ctx node, asserts word 0xFF04 (NetRoot-type marker) |
| 0x20f98 | LAB_000240f0 (PAGE) | real (paged) |
| 0x20fa0 | LAB_000240fc (PAGE) | real (paged) |
| 0x20fb0 | LAB_000138ec | **STATUS_NOT_IMPLEMENTED (0xC0000002)** stub |
| 0x20fb8 / 0x20fc0 / 0x20fc8 / 0x20fe0 | LAB_000138f8 | SUCCESS no-op |
| 0x20fd0 | FUN_00013904 | real: closes handle at ctx+0x18 on condition (teardown-family) |
| 0x21020 | &DAT_0001233c | DATA in .text (constant descriptor, not code) |
| 0x21028 | FUN_00012534 | real (own .text) |
| 0x21030 | FUN_00012594 | real (own .text) |
| 0x21038 | LAB_000138f8 | SUCCESS no-op |
| 0x21040 | FUN_00024008 (PAGE) | real (paged) |
| 0x21048 / 0x210a0 / 0x210a8 / 0x210b0 / 0x210b8 | LAB_000240f0 | real (paged) |
| 0x21050 | LAB_00013854 | conditional: NOT_IMPLEMENTED, or 0xC000000F when ctx+0x40/+0x18 absent |
| 0x21058 / 0x210d0 | LAB_00013830 | conditional (same family, inverted test) |
| 0x21070 | FUN_00012348 | real (own .text) |
| 0x21088 | LAB_000138ec | NOT_IMPLEMENTED |
| **0x21090** | **LAB_00013950** | **real — full LowIO-style callback** (RX_CONTEXT +0x38/+0x58, +0x40/+0x18, flags at +0xA8 (bit 12 inverted), LowIo params at +0x1C0/+0x1C8/+0x1D0 — prologue disassembled) |
| **0x21098** | **LAB_00013bc8** | **real — second full LowIO-style callback** (same RX_CONTEXT field set — the read/write pair) |
| 0x210c0 | FUN_0001378c | real (own .text) |
| 0x210c8 | LAB_00024120 (PAGE) | real (paged) |
| 0x210e8 / 0x210f0 | LAB_000138f8 | SUCCESS no-op |
| 0x210f8 | LAB_000240f0 | real (paged) |

**Extension globals** (0x21100-0x21148, the EuMrx private callback bank):
`FUN_000134b0`, LAB_000138f8 ×2, LAB_000138ec, `FUN_0001371c`, `FUN_00013b3c`,
LAB_00013bb0, LAB_00013ba0, `FUN_00024014` — a secondary dispatch bank used by the
EuShare session logic (the 8-session/26-letter machinery documented in the NAS artifact).

Interpretation [INFERRED from stub semantics + RDBSS architecture]: the table's
SUCCESS-no-op slots mark operations EuMrx deliberately advertises as "supported, do
nothing" (RDBSS then short-circuits), the NOT_IMPLEMENTED/conditional stubs mark
unsupported opclasses, and the ~20 real targets (own .text + PAGE section) are the
NAS-specific implementations (create/close/read/write/query-dir/lock/ioctl families —
the PAGE-section real estate at 0x24008-0x2412c is where the \127.0.0.1\ Zw*File
forwarding lives, per the NAS artifact's loopback findings).

## 4. Unload path — MrxUnload with work-queue draining [CODE]

`FUN_00012934` (DriverUnload) prints per-processor/per-queue statistics while draining
RDBSS worker threads:
```
"MrxUnload RxDispatcher.NumberOfProcessors: %d"
"MrxUnload Processor[%d] WorkQueue[%d] NumberOfWorkItemsToBeDispatched: %d"
"MrxUnload Processor[%d] WorkQueue[%d] MaximumNumberOfWorkerThreads / Minimum… /
 Number OfActiveWorkerThreads / NumberOfIdleWorkerThreads"
```
delaying via `KeDelayExecutionThread` until every queue empties — a defensive unload
that refuses to tear down while NAS IO is in flight (correlates with the DAT_00021168
state machine: 0=registered, 2=started) [CODE].

## 5. RDBSS function census (selection of the ~400 recovered symbols)

Top-level engine: `RxDriverEntry`, `RxRegisterMinirdr`, `RxpUnregisterMinirdr`,
`RxStartMinirdr`, `RxStopMinirdr`, `RxCreateRxContext`, `RxDereferenceAndDeleteRxContext_Real`,
`RxFsdDispatch`, `RxFsdCommonDispatch` (1407 lines — the IRP engine), `RxFsdPostRequest`,
`RxAddToWorkque`, `RxFastIoDeviceControl`, `RxCancelRoutine` family (incl.
NotifyChangeDirectory cancellation per VNetRoot).
Name engine: `RxPrefixTableLookupName` (the UNC prefix table — how `\EuShare.com\…`
names resolve), `RxDereference`, `RxFinalizeConnection`.
Fcb/ea/quota/security common: `RxpCommonSetEa/QueryEa/SetSecurity/QuerySecurity/
SetQuotaInformation/QueryQuotaInformation`, `__RxAcquireFcb(...,"…\rdbss\ea.c")`,
`RxAcquireExclusiveFcbResourceInMRx`, `RxReleaseFcbResourceForThreadInMRx`.
Throttling: `RxInitiateOrContinueThrottling`, `RxShouldRequestBeThrottled` (the
LogRate registry parameter feeds this).
Misc: `RxIsThisACscAgentOpen` (offline-files agent detection — inherited RDBSS
machinery), `RxCcLogError`, `RxLogEventWithAnnotation`, `RxSpinDownMRxDispatcher`,
`RxInitializeMRxDispatcher`, `RxSystemControl` (WMI) [CODE — function map].

## 6. Cross-links

- NAS product flow (sessions, drive letters, loopback, SSH agent):
  `EuShare/eumrx-nas-architecture.md`
- The EuRdr IOCTL protocol (0x140320/24/28, 0x1404b0/b4, 0x140640/44) and DRWUI-side
  client (`mrxioctl.cpp` trace): `DRWUI-exe--main-ui-architecture.md` + NAS artifact
- Driver family map: `PartitionRecovery/epmntdrv-trio--naming-pid-handshake.md` §3 table
- Top-level: `architecture/02-kernel-driver-architecture.md`

## 7. Confidence

100% [CODE] for DriverEntry flow, dispatch forwarder, unload drains, table
header/capabilities, and every slot's target + stub disassembly (scripts committed).
Per-slot RDBSS callback NAMES are [INFERRED] (marked in §3 interpretation) — the
entry-count (42) matches the MINIRDR_DISPATCH family but the vendor table order was
not labeled in-binary; behavior-level classification is disassembly-verified.
