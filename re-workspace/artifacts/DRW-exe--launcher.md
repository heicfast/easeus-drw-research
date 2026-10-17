# DRW.exe (DRWLoader) — Launcher / Crash Supervisor

**Binary**: DRW.exe, x64 GUI, ~127 KB, PDB `E:\DRW\_drw_main\DRWIntelligentScan\DRWLoader\x64\Release\DRWLoader.pdb`
**Evidence**: `re-workspace/reversed/ghidra-core/DRW_decompiled.c` (174 functions) — line-cited below
**Role**: Thin supervisor — NOT the application. Windows entry point of the product.

## 1. Boot sequence (decompiled, FUN_140004400 region)

```
main():
  1. log dir bootstrap:  <exe_dir>\log\          (CreateDirectoryA)
     log file:           <exe_dir>\log\DRWLog.log (CreateFileA GENERIC_R|W, CREATE_ALWAYS)
  2. shared log mapping: CreateFileMappingA(INVALID_HANDLE, PAGE_READWRITE,
                          size = 0x200000 (2 MB), name "DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}")
                        MapViewOfFile(FILE_MAP_ALL_ACCESS, 2 MB)   → CFileMappingLog object
                        (failure traces: "Failed to create map file!", "Failed to map the map file!")
  3. log mutex:          CreateMutexA("DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}")
  4. config:             config/version.ini → channelName (FUN_140001290 readers)
  5. language:           HKLM\SOFTWARE\EASEUS\DRW\Language → "Language" value (RegOpenKeyExA line 311)
                        fallback resource DLLs: Chinese.dll / Deutsch.dll / Japanese.dll
                        (LoadLibrary selection at 2976-2987)
  6. startTS:            GetLocalTime(SYSTEMTIME) → snprintf("startTS=%d-%d-%d %d:%d:%d:%d")
                        → SetEnvironmentVariableA("startTS")  (runtime-trace epoch for children)
```

## 2. The supervisor loop (verified control flow)

```
do {
    DebugTrace("____---Start DRW.");
    CreateProcessA("DRWUI", inheritHandles=TRUE, STARTUPINFOA cb=0x68)     // line 2521
    hCrashEvent    = CreateEventA("DRW_Crash_{FC1A0E29-3523-4152-B110-3340363E5DB7}")      // 2528
    hMemCrashEvent = CreateEventA("DRW_Memory_Crash_{c3d61a40-a3e6-402b-b373-fd90d30893c8}")// 2536

    while (true) {
        rc = WaitForMultipleObjects([hProcess, hCrashEvent, hMemCrashEvent], 5000 ms)
        if (rc == 0x102 /*WAIT_TIMEOUT*/) {
            // LOG FLUSHER DUTY (every 5 s):
            //   WaitForSingleObject(DRWLOG mutex) → copy the 2 MB mapping contents
            //   → WriteFile(DRWLog.log) → reset mapping counter → ReleaseMutex
            //   on mutex failure: OutputDebugStringA("Failed to request the permission
            //                              to write to log file!\n")             (line 2561)
            restartCount++ // (uVar17 counter — also advanced each timeout pass)
        }
        else if (signalled hCrashEvent)    bUIcrash = true
        else if (signalled hMemCrashEvent) bOOMcrash = true
        else break;                        // DRWUI process exited
    }
    DebugTrace("____---Pos = %d", rc);                                  // line 2573

    // crash bookkeeping:
    elapsed = GetTickCount64() - start
    GetExitCodeProcess(hProcess, &exitCode)
    telemetry = L"{\"Elapsed\":\"%I64d\",\"Error\":\"%d\",\"Result\":\"%s\"}"   // EXACT format, line 2590

    if (crashed) {
        CreateProcessA("DRWReport.exe", inheritHandles=1)                // line 2378
        // arguments assembled as a 3-element wide-string vector: {"Loader", "Loader_Exit",
        //  telemetry-JSON} (FUN_1400023b0) — DRWReport receives the module, reason and
        //  the loader's telemetry JSON on its command line
    }
    // restart guard — line 2576:
    if ((!bVar3) || (1 < uVar17)) break;     // bail out after >1 restart attempt
    bVar3 = false;
} while (true);
```

## 3. IPC surface (named objects — the loader↔UI contract)

| Object | Type | Purpose |
|---|---|---|
| `DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}` | File-mapping, 2 MB | shared log ring buffer (UI writes, loader owns DRWLog.log handle) — class `CFileMappingLog` |
| `DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}` | Named mutex | log-write permission arbitration |
| `DRW_Crash_{FC1A0E29-3523-4152-B110-3340363E5DB7}` | Named event | UI signals SEH crash (SetEvent) before dying |
| `DRW_Memory_Crash_{c3d61a40-a3e6-402b-b373-fd90d30893c8}` | Named event | UI signals OOM condition (first-stage crash, distinct from hard crash) |

## 4. Design analysis (why a loader exists)

- **Crash resilience**: if DRWUI dies (bad-disk IO, driver hiccups, OOM during deep scans),
  the loader restarts it and the shared-log evidence window is preserved; DRWReport collects
  minidumps + the loader's telemetry JSON (Elapsed/Error/Result) for the vendor (upload chain:
  `send_dmp_with_aliyun.exe` → Aliyun OSS).
- The **5-second log flusher** keeps DRWLog.log current even while the UI hangs — the loader
  copies the whole 2 MB mapping under the DRWLOG mutex; the UI-side writer protocol is
  "append into mapping, count at offset 0" (mapping is zeroed at creation, `*puVar11 = 0`).
- **Crash-loop protection**: the `(!bVar3 || 1 < uVar17) break` structure limits auto-restarts;
  the memory-crash event enables a two-stage diagnosis (OOM vs SEH) before DRWReport runs.
- `-recycle` command-line pass-through enables shell-integrated Recycle-Bin-specific launch.
- In WinPE: winpeshl.ini launches this same DRW.exe — identical supervision in the boot
  environment (see architecture/03).

## 5. Cross-links

- Crash reporter child: `artifacts/DRWReport-exe--crash-reporter.md` (XCrashReport provenance,
  minidump + telemetry JSON + Aliyun upload)
- Supervised process: `artifacts/DRWUI-exe--main-ui-architecture.md`
- Boot-time supervision in WinPE: `architecture/03-winpe-boot-environment.md`
- Raw evidence: `re-workspace/reversed/ghidra-core/DRW_{decompiled.c,functions.txt,imports.txt}`

## 6. Verification ledger

| Claim | Evidence (DRW_decompiled.c) |
|---|---|
| log dir/file bootstrap + 2 MB mapping + mutex | FUN_140004400, lines 2472-2505 |
| "Failed to create map file!" / "map the map file!" / "permission to write" strings | 2492/2509/2561 |
| 2× crash events with exact GUIDs | lines 2528-2537 |
| DRWUI CreateProcessA inheritHandles | line 2521 |
| 5000 ms wait + WAIT_TIMEOUT(0x102) flusher branch | 2555-2580 (`DVar7 == 0x102`) |
| Telemetry JSON exact format | line 2588-2592 |
| DRWReport CreateProcessA | line 2378 |
| Restart guard `1 < uVar17` | line 2576 |
| version.ini channelName / Language registry / MUI DLLs | lines 199/311/2976-2987 |
| startTS env var format | GetLocalTime + snprintf @ 2540-2552 |
