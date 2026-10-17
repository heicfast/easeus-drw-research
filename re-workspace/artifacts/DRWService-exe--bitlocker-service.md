# DRWService.exe (BitlockerReadFVEService) — BitLocker Key Access Service

**Binary**: DRWService.exe, x64, ~40 KB, PDB `E:\DRW\_drw_main\DRWIntelligentScan\bin\Release\x64\BitlockerReadFVEService.pdb`
**Evidence**: `re-workspace/reversed/ghidra-core/DRWService_decompiled.c` (118 functions) — this artifact is line-cited
**Role**: LocalSystem Windows service that reads BitLocker **FVE auto-unlock external keys** from the registry and pushes them to DRWUI over a named pipe. Runs elevated so a standard-user DRW instance can obtain the keys without UAC.

## 1. Service identity & installation (FUN @ 1205-1270)

```
OpenSCManagerA(NULL, NULL, SC_MANAGER_ALL_ACCESS 0xF003F)
CreateServiceA(scm,
   lpServiceName  = "Read FVE Server",
   lpDisplayName  = "Read FVE Server",
   dwDesiredAccess= SERVICE_ALL_ACCESS (0xF01FF),
   dwServiceType  = 0x10  = SERVICE_WIN32_OWN_PROCESS,
   dwStartType    = 2     = SERVICE_AUTO_START,        ← auto-start at every boot
   dwErrorControl = 1     = SERVICE_ERROR_NORMAL,
   lpBinaryPath   = <full path of DRWService.exe>)
StartServiceA(svc)                     ← started immediately after creation
```
- Internal description string: `"DRW read registry key value."` (lstrcpyA at 1242 — used for the
  service description / event log).
- **Correction vs. earlier notes**: the service is installed **SERVICE_AUTO_START**, not
  demand-start. Once installed it is present at every boot; its run body harmlessly idles
  when DRW isn't running (see §3).
- Uninstall: OpenSCManager → OpenService → Control(SERVICE_STOP) → DeleteService
  (log strings "Service stopping...", "Uninstall service succeed/failed").
- SCM boilerplate: `RegisterServiceCtrlHandlerA` + `SetServiceStatus` state machine
  (state block at DAT_1400086c8: RUNNING → STOPPED with checkpoint semantics),
  `OutputDebugStringA("Service running...")` traces.

## 2. FVE registry enumeration (FUN_140001260 — decompiled exactly)

```
HKLM\SYSTEM\CurrentControlSet\Control\FVEAutoUnlock          (RegOpenKeyExA, KEY_READ)
  subkey count = RegQueryInfoKeyA()
  for each subkey (dwIndex++):
      RegEnumKeyExA → volume GUID string (max 0x104 chars), _strupr_s() uppercased
      RegOpenKeyExA(subkey)
      buf = new(0x200) ; RegQueryValueExA(subkey, "Data", ..., buf, &size)
      map[GUID] = { GUID (≤0x104), size, Data blob }         (std::map RB-tree insert)
```
- Each FVEAutoUnlock subkey name = the GUID of a data volume that is auto-unocked by this
  system; its `"Data"` value = the **external key blob** (FVEK-wrapped key material).
- A second map (FUN_140001490 builder) aggregates the same data differently — the send
  path serializes map 2 while map 1 backs volume-GUID lookups.
- This is the documented Windows BitLocker auto-unlock layout — reading it requires
  SYSTEM/admin, hence the service.

## 3. The pipe protocol (FUN @ 1450-1660 — one-shot message push)

Direction (verified): **the service is the pipe CLIENT**. DRWUI/BitLockerLib creates the
pipe server; the service connects and pushes the entire key table in ONE message.

```
WaitNamedPipeA("\\\\.\\Pipe\\DRWBitlocker", 10000 ms)        ← wait ≤10 s for server
CreateFileA(pipe, GENERIC_READ|GENERIC_WRITE, OPEN_EXISTING)
SetNamedPipeHandleState(pipe, PIPE_READMODE_MESSAGE)          ← message mode
buf = new(0xC800)          // 50 KB staging buffer
buf[0] = recordCount
for each {GUID, size, Data} in map (RB-tree walk):
    record stride = 0x138 (312) bytes:
      +0x00  strncpy_s(dst, 0x32, GUID)       ← volume GUID, 50-char cap
      +0x3C  memcpy(Data, min(size, 0x100))   ← key blob, 256-byte cap
    caps: 100 records max, total ≤ 0xC7FF bytes
WriteFile(pipe, buf, total)                                   ← single message
free(buf); WaitForSingleObject(stopEvent, INFINITE);          ← idle until stopped
→ SetServiceStatus(STOPPED); cleanup maps
```

Wire format summary (little-endian):
```
struct PipeMessage { u32 count; Record[count]; }              // ≤ 100
struct Record      { char guid[50]; pad[10]; u8 keyBlob[256]; }  // 0x138 stride
```

## 4. Why a service at all? (architecture rationale — verified by data flow)

- FVEAutoUnlock external keys are ACL-restricted (SYSTEM/admin). The service runs as
  LocalSystem, so DRWUI (possibly standard-user) obtains the keys via the pipe broker.
- The push happens at service start; with AUTO_START the table is available the moment
  DRWUI brings its pipe server up within 10 s of a scan needing BitLocker unlock.
- Downstream consumers (cross-linked):
  - `BitLockerLib.dll` — PowerShell `manage-bde -unlock … -RecoveryPassword` /
    `Unlock-BitLocker -MountPoint … -Password $SecureString` + the same registry fallbacks;
  - DRWUI classes: `BitlockerDevice`, `CCheckBitlockerPartition`, `CBitlockerStartWnd`,
    `BitlockerUnlockDialog`, `BitlockerUnlockThread`;
  - Volume content decrypt: XTS-AES via OpenSSL (EVP_aes_{128,256}_xts in DRWUI) — the
    *content* crypto, distinct from this *key retrieval* path.

## 5. Cross-links

- Kernel driver map (who-opens-what): `architecture/02-kernel-driver-architecture.md` §6
- DRWUI BitLocker flow: `artifacts/DRWUI-exe--main-ui-architecture.md` §3.2
- BitLockerLib (PowerShell/registry side): `artifacts/PartitionRecovery/mom-module-system--architecture.md`
- bitlockerhelp.mo (FVE structures/FVEK parsing): `artifacts/PartitionRecovery/mo-module-map.md`
- Launcher/supervisor (process topology): `artifacts/DRW-exe--launcher.md`
- Raw evidence: `re-workspace/reversed/ghidra-core/DRWService_{decompiled.c,functions.txt,imports.txt}`

## 6. Verification ledger

| Claim | Evidence (DRWService_decompiled.c) |
|---|---|
| Service name "Read FVE Server", AUTO_START, OWN_PROCESS | CreateServiceA call, line 1234 |
| Description "DRW read registry key value." | line 1242 |
| FVEAutoUnlock enumeration + "Data" value read + uppercased GUID | FUN_140001260, lines 104-130 |
| 0x200-byte key buffer, 0x104 GUID buffer | lines 119-123 |
| Pipe client: WaitNamedPipe(10 s) + CreateFile + message mode | lines 1496-1505 |
| 50 KB buffer, 0x138 stride, 50-char GUID, 256-byte blob, 100-record cap | lines 1461-1593 |
| One-shot WriteFile, then INFINITE wait on stop event | lines 1594-1598 |
| SCM lifecycle strings | 1230-1288 region |
