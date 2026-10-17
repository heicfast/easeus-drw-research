# DRWService.exe (BitlockerReadFVEService) — BitLocker Key Access Service

**Binary**: DRWService.exe, x64, 40KB, PDB `E:\DRW\_drw_main\DRWIntelligentScan\bin\Release\x64\BitlockerReadFVEService.pdb`
**Evidence**: re-workspace/reversed/ghidra-core/DRWService_decompiled.c (118 functions), strings, imports
**Role**: On-demand Windows service giving DRW read access to BitLocker FVE (Full Volume Encryption) auto-unlock keys.

## Lifecycle
Installed/uninstalled by DRWUI via command line (strings in DRWUI.exe):
```
DRWService.exe /install     -> CreateServiceA(...)   (SERVICE_WIN32_OWN_PROCESS)
DRWService.exe /uninstall   -> DeleteService()       (stops if running first)
```
Log strings: "Install service succeed", "Service already installed", "OpenSCManager failed", "StartService failed", "Service stopping...", "RegisterServiceCtrlHandler succeed/failed", "Uninstall service succeed/failed" — a classic minimal SCM service with handler + status callbacks (RegisterServiceCtrlHandlerA, SetServiceStatus).

## The FVE pipe protocol
- Pipe name: `\\.\Pipe\DRWBitlocker` (CreateFileA + WaitNamedPipeA + SetNamedPipeHandleState message-mode = pipe CLIENT side)
- Registry key read: `HKLM\SYSTEM\CurrentControlSet\Control\FVEAutoUnlock` (RegOpenKeyExA + RegEnumKeyExA + RegQueryValueExA loop — enumerates ALL auto-unick protected volumes)
- "Read FVE Server" log string: reads the FVE server data
- Flow: the SERVICE enumerates FVEAutoUnlock keys (external keys for auto-unlocking data volumes — stored per system volume), and serves them over the named pipe to the requesting DRW process (DRWUI/BitLockerLib.dll user side).

## Why a service at all?
FVEAutoUnlock external keys are readable by SYSTEM/admin only for non-System volumes in specific states; running as a service (LocalSystem) lets a standard-user DRW instance obtain the keys without elevation, and gives a single broker for BitLocker-unlock attempts. Combined with `BitLockerLib.dll` (PowerShell `manage-bde -unlock ... -RecoveryPassword` / `Unlock-BitLocker -MountPoint ' -Password $SecureString'`) and the `Dict` password list, the product offers: known-password unlock, recovery-password unlock, and auto-unlock-key retrieval for BitLocker volumes before scanning them.

## Cross-links
- DRWUI.exe: `\DRWService.exe /install` / `/uninstall` strings — service lifecycle owner
- BitLockerLib.dll (PartitionRecovery): PowerShell + registry side of BitLocker handling
- BitlockerDevice / CCheckBitlockerPartition / BitlockerUnlockDialog (DRWUI classes): UI-side flow
- Driver artifact 02-kernel-driver-architecture.md section 6 has the IPC map
