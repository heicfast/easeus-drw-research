# DRW.exe (DRWLoader) — Launcher / Crash Supervisor

**Binary**: DRW.exe, x64 GUI, 127KB, PDB `E:\DRW\_drw_main\DRWIntelligentScan\DRWLoader\x64\Release\DRWLoader.pdb`
**Evidence**: re-workspace/reversed/ghidra-core/DRW_decompiled.c (174 functions), strings, imports
**Role**: Thin supervisor — NOT the application. Windows entry point of the product.

## Boot flow (decompiled, annotated)

```
main():
  ReadConfig:  config/version.ini (channelName, versionFrom)
  ReadReg:     SOFTWARE\EASEUS\DRW\Language  -> language selection
               (falls back to German/Japanese/Chinese DLL resource loads:
                Deutsch.dll, Chinese.dll, Japanese.dll — MUI satellite resource DLLs)
  SetEnv:      startTS = "YYYY-M-D H:M:S:ms"   (via SetEnvironmentVariableA)

  do {   // SUPERVISOR LOOP — restarts DRWUI after crashes
      CreateProcessA("DRWUI", inheritHandles=TRUE, ...)
      hCrashEvent    = CreateEventA("DRW_Crash_{FC1A0E29-3523-4152-B110-3340363E5DB7}")
      hMemCrashEvent = CreateEventA("DRW_Memory_Crash_{c3d61a40-a3e6-402b-b373-fd90d30893c8}")

      while (true) {
          rc = WaitForMultipleObjects([hProcess, hCrashEvent, hMemCrashEvent], 5000ms)
          if (timeout) {
              // Log-flusher duty (every 5 s):
              //   acquire "DRWLOG_{1BFCF65F-...}" mutex
              //   copy up to 0x200000 (2 MB) of shared, memory-mapped ring buffer
              //   (map file "DRW_{1E956C11-...}" — CreateFileMapping/MapViewOfFile)
              //   WriteFile() it to DRWLog.log; reset buffer counters; ReleaseMutex
          } else if (signalled hCrashEvent)    bUIcrash = true
          else if (signalled hMemCrashEvent)   bOOMcrash = true
          else break; // process exited
      }

      elapsed = GetTickCount64() - start
      GetExitCodeProcess(...)
      telemetry = {"Elapsed":"<ms>","Error":"<code>","Result":"<status>"}

      if (crashed) {
          // two-stage: memory-crash first (dump minidump of specific region), then:
          CreateProcessA("DRWReport.exe")  // crash reporter w/ telemetry JSON
      }
      // loop: DRWUI restarts
  } while (restart condition)
```

## IPC surface (named objects — the contract with DRWUI.exe)
| Object | Type | Purpose |
|---|---|---|
| `DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}` | File-mapping | shared 2 MB log ring buffer between UI and loader |
| `DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}` | Named mutex | log-write permission |
| `DRW_Crash_{FC1A0E29-3523-4152-B110-3340363E5DB7}` | Named event | UI signals SEH crash (SetEvent) before dying |
| `DRW_Memory_Crash_{c3d61a40-a3e6-402b-b373-fd90d30893c8}` | Named event | UI signals OOM condition |

## Design analysis
- Why a loader? **Crash resilience**: if DRWUI dies (bad disk sectors, driver hiccups, OOM during deep scans), the loader restarts it and data-loss windows are minimized; DRWReport.exe collects minidumps + telemetry for the vendor.
- The 5-second log flusher keeps DRWLog.log updated even if the UI hangs (the UI writes into the shared mapping; the loader owns the file handle).
- `-recycle` command-line argument (string) passes through to the UI for Recycle-Bin-specific recovery launching (shell integration).
- `1 < restartCount` guard: only auto-restart a limited number of times before exiting the loop (crash-loop protection — the `if ((!bVar3) || (1 < uVar17)) break;` structure).
- In WinPE: winpeshl.ini launches this same DRW.exe — identical supervision in the boot environment.
