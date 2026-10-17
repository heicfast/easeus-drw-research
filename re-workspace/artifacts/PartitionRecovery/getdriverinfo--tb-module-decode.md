# GetDriverInfo.dll — MOM-Loadable Drive-Topology Helper (TB-contract module)

**Binary**: PartitionRecovery/GetDriverInfo.dll — 3,865-line decompilation (ghidra-partition), 6 exports
**Evidence**: export table, import table (no SCM imports!), LoadLibraryA call-site analysis, string census
**Role**: Corrects a tempting misreading — despite the name, this DLL does NOT install drivers; it is a **MOM-loadable drive-topology service** built on the Todo-Backup module contract.

---

## 1. The export contract — a TB (Todo Backup) MOM module

| Export | Meaning |
|---|---|
| `TBCreateObject` / `TBCanUnloadNow` | **the MOM module entry pair** (`TB` = Todo Backup lineage — the EPM/TB shared build system, same lineage as EUDCPEPM's "EASEUS Todo Backup Driver" version string). GetDriverInfo.dll is loaded through the same aggregation-based object system as the `.mo` modules (mom-module-system artifact), via `LoadLibraryA` + `TBCreateObject` |
| `GetDriverInfo_Init` | module init (critical-section + event setup — imports show `InitializeCriticalSectionAndSpinCount`, `CreateEventW`) |
| `GetDriverInfo_GetDriverInfo` | the query entry — returns drive topology |
| `GetDriverInfoImp` / `DeleteGetDriverInfoImp` | implementation get/release (refcounted interface handout) |

## 2. What it actually does (imports tell the story)

- `GetLogicalDrives` + `GetDriveTypeW` — enumerates Windows drive letters and their types (fixed/removable/CD-ROM/network) — **the drive-letter topology**, not drivers
- `LoadLibraryA` + `GetProcAddress` + `FreeLibrary` — late-binds its own dependencies (the only nearby literals: `".dll"` name-building + `"TBCreateObject"` — it constructs `<name>.dll` and resolves TBCreateObject in OTHER TB modules — i.e. **GetDriverInfo is also a MOM client that loads sibling modules**)
- `CreateEventW`/`SetEvent`/`WaitForSingleObjectEx` — async completion signaling for topology queries
- **NO SCM APIs** (CreateService/StartService absent — verified) — despite the name, no driver installation happens here. Driver service registration belongs to the installers/PE (regdrv.reg) and the on-demand EPMNtDrv load path in Device.mo

## 3. Position in the architecture

The module-recovery flow needs "which drives exist and what kind" early (before engines load): GetDriverInfo provides exactly that abstraction through the MOM object system, with refcounted interfaces (`Imp`/`DeleteImp` pair) and event-based async — the same shape as the device modules (`Device.mo`, `DeviceManager.mo`) it likely fronts or complements.

**Naming trap documented**: "GetDriverInfo" = "get drive(r) info" in the drive-letter sense (GetLogicalDrives/GetDriveTypeW), not "get kernel-driver info" — verified by the import set.

## 4. Cross-links

- MOM contract + TB lineage: `PartitionRecovery/mom-module-system--architecture.md`; build lineage: `architecture/01-build-tree-intelligence.md`
- Real driver-loading path: `PartitionRecovery/eprdtdrv-sys--driver-internals.md` + `WinPE/boot-config--winpeshl-autobat-regdrv.md` §3
- Sibling device modules: `MOM-modules/Device.md`, `MOM-modules/DeviceManager.md`
