# MOM Modules — The UI Bridge Decode (CMessageProxy/CMessageSend) + Dependency Matrix + Coupling Census

> Scope: the module-system deepening pass — (1) the **exact engine→UI message pathway**
> decoded end-to-end from DRWUI decompilation (the wiring graph's §2 star topology now has
> its hub), (2) the **cross-module dependency matrix** from PE import tables (all 31 .mo +
> 6 host DLLs), (3) the **two coupling styles** census (factory-discovered vs link-time).
> Evidence: `re-workspace/raw-evidence/mom-modules/module_import_matrix.json` (this pass),
> `raw-evidence/ui-wiring/connect_wiring_graph.json`, DRWUI_decompiled.c line cites.
> Builds on: `PartitionRecovery/mom-module-system--architecture.md` (loading contract),
> `UIUX/25-connect-wiring-graph.md` (subscriber census).

## 1. The engine→UI bridge — CMessageProxy, INotifyObserver, CMessageSend

The single decoded pathway every MOM-side event takes into the Qt UI (all functions cited):

```
Engine side (scan workers, .mo modules, service hub)
  │  FUN_14026b8d0()                    — MOM service-hub accessor (singleton, 25+ call sites)
  │  FUN_14026bc20(hub, 1)              — query the message-service object (0x58 bytes) from the hub
  │  FUN_1402eeb90(svc, proxy+0x10)     — register CMessageProxy's INotifyObserver as target
  │  FUN_14026bce0(hub, 1, svc)         — publish service back to hub (singleton caching)
  ▼
CMessageProxy  (singleton @ DAT_141bdc740 — thread-safe lazy init: _Init_thread_header/footer + atexit)
  │  - multiple inheritance: vtable+0x00 CMessageProxy (QObject)  +0x10 INotifyObserver
  │  - FUN_14089fa10 = ctor (QObject::QObject + FUN_14089fd90 sets INotifyObserver::vftable @+0x10)
  │  - engine calls the observer slot (vtable+0x10's method) with (int msg, void* data, int& ret)
  ▼
FUN_14089f970 — the static notify shim:
  │  1. constructs a stack CMessageSend (24 bytes, ctor FUN_14089fbb0)
  │  2. FUN_14089fcf0 → FUN_140b85dd0 = EMIT CMessageSend::dispatch(int, void*, int&)
  │  3. destroys the sender (FUN_14089fc90 = disconnect + dtor)
  ▼
CMessageSend::dispatch  (Qt signal — the MOM message becomes a Qt signal)
  │  ctor wiring (FUN_14089fbb0, dual-branch):
  │    FUN_14089fd30 = thread-affinity probe:
  │       QThread::currentThread() == QCoreApplication::instance()->thread() ?
  │    same thread   → connect(this, "2dispatch(int, void*,int&)", proxy, "2doDispatchMessage(int, void*,int&)")  [direct-style]
  │    other thread  → same connect, different code path                        [queued-style marshaling]
  │  (both slot strings resolved byte-exact at RVA 0xe474d0/0xe47488 — identical text,
  │   the branch selects the connection delivery mode — the thread-safe bridge)
  ▼
CMessageProxy::doDispatchMessage  (the hub slot — singleton owns it)
  ▼
15 UI subscriber classes  (wiring graph §2): each wired `connect(bus, doDispatchMessage, this, onReceiveData)`
  → CDetailPage family, home pages, repair pages, DeviceAdapter-side (doReceivedEvent), ...
```

**Architecture reading**: the bridge is a **thread-safe adapter** between MOM's C++ observer
callbacks (engine threads — scan workers run in QThreads per the 42-thread census) and Qt's
signal system (UI thread). The temporary CMessageSend object is a *message envelope*: create →
connect → emit → destroy per message, so engine threads never touch Qt objects directly.
The `INotifyObserver` interface (vftable @ FUN_14089fd90) is the MOM-side contract — the same
interface family the `.mo` modules implement for engine-internal events
(`mom-module-system--architecture.md` §1 CallbackOperator).

**Deregistration** is symmetric (FUN_14089fc90): `disconnect(this, "2dispatch(...)", proxy,
"2doDispatchMessage(...)")` — the envelope un-wires before destruction (no dangling signal).

## 2. The cross-module dependency matrix (PE import tables, all 31 .mo + 6 hosts)

Full matrix: `raw-evidence/mom-modules/module_import_matrix.json` (imports + factory exports
+ machine per module). All modules are **x64 PE DLLs** (0x8664). Import-graph summary:

| Importer | imports .mo/.dll modules | Reading |
|---|---|---|
| ToolsModule.dll | 7 (Log, DeviceAdapter, CallbackOperator, NTFSUtil, Fixup, …) | heaviest host |
| PartitionRecovery.dll | 7 (Log, DeviceAdapter, CallbackOperator, NTFSLib, Fixup, …) | engine host |
| CloneModule.dll | 7 (Log, DeviceAdapter, CallbackOperator, NTFSLib, Fixup, …) | disk-clone host |
| MainModule.dll | 6 (Log, CallbackOperator, Fixup, FatLib, DeviceAdapter, …) | partition-op host |
| RecoveryModule.dll | 5 (Log, CallbackOperator, Fixup, Partition, FatLib) | recovery-scenario host |
| UILogic.dll | 5 (Log, CallbackOperator, Fixup, Partition, FatLib) | UI-logic host |
| DeviceManager.mo | 6 (FatLib, NTFSLib, DeviceAdapter, Partition, RegLib, …) | the enumerator hub |
| NTFSUtil.mo | 4 (Log, NTFSLib, CallbackOperator, FatLib) | |
| FatFormat.mo / FileSystemCheck.mo / bitlockerhelp.mo | 2–3 | |
| 19 infra/analyser modules | 0–1 (Log.mo) | leaf modules |

**Dependence centrality** (how many modules import X): `Log.mo` = 15+ (universal logging
layer) · `CallbackOperator.mo` = 8 (the event contract) · `NTFSLib.mo` = 5 ·
`DeviceAdapter.mo`/`Fixup.mo`/`FatLib.mo` = 4–5 · `Partition.mo` = 3 · everything else ≤1.

**The dependency graph is a DAG rooted at Log.mo + CallbackOperator.mo** — no cycles
observed at the import-table level (analyzer leaves never import hosts).

## 3. The two coupling styles (factory-discovered vs link-time)

Census from export tables (this pass):

| Style | Modules | Mechanism |
|---|---|---|
| **Factory (plugin-style)** | 26 of 31 .mo — export `GetModule(HMODULE)` (CheckVersion, Common, Config, Device, DeviceManager, EFIBoot, Error, ExFat/Ext/FAT/NTFS/RefsFileSystemAnalyser, FileSystem(.Check), LdmManager, Mom, NTFSLib*, Partition, PartitionRecoveryD, RegLib, Thread, bitlockerhelp, host DLLs also export `CreateObject`/`FreeModule`/`CanUnloadNow`) | loaded by NAME at runtime: `FUN_1800017f0("DeviceManager")` → name+"​.mo" → `LoadLibraryA` → `GetProcAddress("GetModule")` (the §1.1 loading contract) |
| **Link-time (shared-library)** | 5 modules export NO factory — **CallbackOperator.mo (29 C++ mangled exports), DeviceAdapter.mo (76), Log.mo (37), Fixup.mo (36), NTFSLib.mo (310!)**, Mom.mo/Common.mo export only the `IObject` family (10) | consumed via **import-table linkage** (the host's PE imports reference their mangled C++ symbols directly) — same object model, different binding |

`NTFSLib.mo`'s 310 exports are the entire NTFS format library surface
(`MyTemplate::CSimpleArray<...>` template families, `CNtfsFileRecord...` classes) — the
format engine is a *plain C++ DLL* in .mo clothing, bound at link time. The `IObject`
family (`??0IObject@@…`, `??_7IObject@@6B@` = the vtable symbol) is exported by **every**
module — the COM-like base contract is the one universal symbol.

**Consequence**: "module" in this system means two things — (a) runtime-discoverable
plugins (FS analysers, managers — swappable, lazy-loaded, name-keyed), and (b) versioned
shared libraries linked into the hosts (Log/NTFSLib/CallbackOperator — the kernel of the
object model itself). The 6 host DLLs are both: they import the link-time kernel AND
expose factory entry points.

## 4. Where the bridge sits in the flows (cross-links)

- Scan flow: engine progress → `INotifyObserver::Notify` → bridge → `doDispatchMessage` →
  `CDetailPage::doDispatchMessage` fans out (artifact 13 §3) → `ScaningRecoverMessage`
  status + `AnalysisGridWidget` sector map.
- The 2 bridge-relay connects at wiring-graph lines 1369866/1369872 = the CMessageSend ctor
  branches (same-thread/cross-thread) — **the wiring graph's only signal-relay pair that is
  actually a thread-marshaling adapter**, not a plain re-broadcast.
- `INotifyObserver` consumers on the module side: `doReceivedEvent` (DeviceAdapter-side
  classes, lines 1584473/1584850) — device-arrival events flow the same pipe.
- Module system master: `PartitionRecovery/mom-module-system--architecture.md`
- Per-module docs: `MOM-modules/<Name>.md` ×30 · module map: `PartitionRecovery/mo-module-map.md`

## 5. Verification ledger

| Claim | Evidence |
|---|---|
| CMessageProxy singleton + MI (QObject + INotifyObserver) | FUN_14089f890/14089fa10 (@1369715–1369750), vftable pair @1369746-7 |
| Thread-affinity dual connect | FUN_14089fbb0 (@1369855+) + FUN_14089fd30 (QThread::currentThread vs app thread) |
| Slot strings byte-exact | RVA 0xe474d0 & 0xe47488 = `2doDispatchMessage(int, void*,int&)` (×3 pairs in .rdata pool) |
| Envelope pattern (create→emit→destroy) | FUN_14089f970 (@1369775): ctor → FUN_14089fcf0(=FUN_140b85dd0 emit) → dtor |
| Symmetric disconnect | FUN_14089fc90 (@1369795) |
| Service registration (hub→svc→observer) | FUN_14089fa80 (@1369755): FUN_14026b8d0/14026bc20/1402eeb90(+0x10)/14026bce0 |
| Import matrix / centrality | `module_import_matrix.json` (pefile, all 37 binaries) |
| NTFSLib 310 exports / Log 37 / DeviceAdapter 76 | export-table census (this pass) |
| All x64 | machine 0x8664 × 37 |
