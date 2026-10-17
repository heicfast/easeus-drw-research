
bool FUN_180001000(longlong param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateFileA(param_2,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  return pvVar1 != (HANDLE)0xffffffffffffffff;
}




bool FUN_180001060(longlong param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD local_res18 [4];
  
  local_res18[0] = 0;
  DVar1 = 0;
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffffffffffff) {
    WriteFile(*(HANDLE *)(param_1 + 8),param_2,param_3,local_res18,(LPOVERLAPPED)0x0);
    DVar1 = local_res18[0];
  }
  return DVar1 == param_3;
}




undefined8 FUN_1800010b0(void)

{
  return 1;
}




undefined8 FUN_1800010c0(longlong param_1,void *param_2,uint param_3)

{
  int *piVar1;
  DWORD DVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x18),1000);
  if ((DVar2 == 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      piVar1 = *(int **)(param_1 + 0x20);
      if (*piVar1 + 4U + param_3 <= *(uint *)(param_1 + 0x28)) {
        memmove((void *)((ulonglong)(*piVar1 + 4U) + (longlong)piVar1),param_2,(ulonglong)param_3);
        *piVar1 = *piVar1 + param_3;
        uVar3 = 1;
      }
    }
    ReleaseMutex(*(HANDLE *)(param_1 + 0x18));
  }
  else {
    OutputDebugStringA("Failed to request the permission to write to buffer!\n");
  }
  return uVar3;
}




undefined * FUN_180001170(void)

{
  return &DAT_180005758;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl InitLog(char const * __ptr64,enum LOGLEVEL,enum LOGTYPE) */

void __cdecl InitLog(char *param_1,LOGLEVEL param_2,LOGTYPE param_3)

{
  char *lpOutputString;
  undefined **ppuVar1;
  
                    /* 0x1180  4  ?InitLog@@YAXPEBDW4LOGLEVEL@@W4LOGTYPE@@@Z */
  if (DAT_180005760 != (undefined **)0x0) {
    return;
  }
  ppuVar1 = (undefined **)0x0;
  if (param_3 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18000574c) && (_Init_thread_header(&DAT_18000574c), DAT_18000574c == -1)) {
      DAT_180005040 = 0xffffffffffffffff;
      PTR_vftable_180005038 = (undefined *)CDirectLog::vftable;
      atexit(FUN_180002a60);
      _Init_thread_footer(&DAT_18000574c);
    }
    ppuVar1 = &PTR_vftable_180005038;
    goto LAB_180001209;
  }
  if (param_3 != 1) goto LAB_180001209;
  if ((DAT_180005750 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4))
     || (_Init_thread_header(&DAT_180005750), DAT_180005750 != -1)) {
    ppuVar1 = &PTR_vftable_180005048;
    goto LAB_180001209;
  }
  _DAT_180005070 = 0;
  PTR_vftable_180005048 = (undefined *)CFileMappingLog::vftable;
  _DAT_180005078 = 0;
  DAT_180005050 = (HANDLE)0x0;
  DAT_180005058 = (undefined4 *)0x0;
  DAT_180005060 = (HANDLE)0x0;
  _DAT_180005068 = (undefined4 *)0x0;
  DAT_180005050 = OpenFileMappingA(0xf001f,0,"DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}");
  if (DAT_180005050 == (HANDLE)0x0) {
    lpOutputString = "Failed to create map file!\n";
LAB_180001344:
    OutputDebugStringA(lpOutputString);
  }
  else {
    DAT_180005058 = (undefined4 *)MapViewOfFile(DAT_180005050,0xf001f,0,0,0x200000);
    if (DAT_180005058 == (undefined4 *)0x0) {
      CloseHandle(DAT_180005050);
      lpOutputString = "Failed to map the map file!\n";
      DAT_180005050 = (HANDLE)0x0;
      goto LAB_180001344;
    }
    _DAT_180005070 = 0x200000;
    _DAT_180005068 = DAT_180005058;
    *DAT_180005058 = 0;
  }
  DAT_180005060 =
       CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}");
  atexit(FUN_180002a00);
  _Init_thread_footer(&DAT_180005750);
  ppuVar1 = &PTR_vftable_180005048;
LAB_180001209:
  DAT_180005760 = ppuVar1;
  (**(code **)*ppuVar1)(ppuVar1,param_1);
  DAT_180005768 = param_2;
  return;
}




/* void __cdecl DebugTrace(char const * __ptr64,...) */

void __cdecl DebugTrace(char *param_1,...)

{
                    /* 0x1390  2  ?DebugTrace@@YAXPEBDZZ */
  return;
}




/* void __cdecl DebugTrace(char const * __ptr64,char * __ptr64 * __ptr64) */

void __cdecl DebugTrace(char *param_1,char **param_2)

{
                    /* 0x13a0  1  ?DebugTrace@@YAXPEBDPEAPEAD@Z */
  return;
}




/* void __cdecl ReleaseTrace(char const * __ptr64,...) */

void __cdecl ReleaseTrace(char *param_1,...)

{
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char *local_18 [3];
  
                    /* 0x13b0  14  ?ReleaseTrace@@YAXPEBDZZ */
  local_18[0] = (char *)&local_res10;
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  Log(1,param_1,local_18);
  return;
}




/* void __cdecl ReleaseTrace(char const * __ptr64,char * __ptr64 * __ptr64) */

void __cdecl ReleaseTrace(char *param_1,char **param_2)

{
                    /* 0x13f0  13  ?ReleaseTrace@@YAXPEBDPEAPEAD@Z */
  Log(1,param_1,param_2);
  return;
}




/* void __cdecl LogInfo(char const * __ptr64,...) */

void __cdecl LogInfo(char *param_1,...)

{
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char *local_18 [3];
  
                    /* 0x1400  10  ?LogInfo@@YAXPEBDZZ */
  local_18[0] = (char *)&local_res10;
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  Log(2,param_1,local_18);
  return;
}




/* void __cdecl LogInfo(char const * __ptr64,char * __ptr64 * __ptr64) */

void __cdecl LogInfo(char *param_1,char **param_2)

{
                    /* 0x1440  9  ?LogInfo@@YAXPEBDPEAPEAD@Z */
  Log(2,param_1,param_2);
  return;
}




/* void __cdecl LogWarning(char const * __ptr64,...) */

void __cdecl LogWarning(char *param_1,...)

{
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char *local_18 [3];
  
                    /* 0x1450  12  ?LogWarning@@YAXPEBDZZ */
  local_18[0] = (char *)&local_res10;
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  Log(3,param_1,local_18);
  return;
}




/* void __cdecl LogWarning(char const * __ptr64,char * __ptr64 * __ptr64) */

void __cdecl LogWarning(char *param_1,char **param_2)

{
                    /* 0x1490  11  ?LogWarning@@YAXPEBDPEAPEAD@Z */
  Log(3,param_1,param_2);
  return;
}




/* void __cdecl LogError(char const * __ptr64,...) */

void __cdecl LogError(char *param_1,...)

{
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char *local_18 [3];
  
                    /* 0x14a0  8  ?LogError@@YAXPEBDZZ */
  local_18[0] = (char *)&local_res10;
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  Log(4,param_1,local_18);
  return;
}




/* void __cdecl LogError(char const * __ptr64,char * __ptr64 * __ptr64) */

void __cdecl LogError(char *param_1,char **param_2)

{
                    /* 0x14e0  7  ?LogError@@YAXPEBDPEAPEAD@Z */
  Log(4,param_1,param_2);
  return;
}




/* void __cdecl Log(enum LOGLEVEL,char const * __ptr64,...) */

void __cdecl Log(LOGLEVEL param_1,char *param_2,...)

{
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  char *local_18 [3];
  
                    /* 0x14f0  6  ?Log@@YAXW4LOGLEVEL@@PEBDZZ */
  local_18[0] = (char *)&local_res18;
  local_res18 = in_R8;
  local_res20 = in_R9;
  Log(param_1,param_2,local_18);
  return;
}




/* void __cdecl Log(enum LOGLEVEL,char const * __ptr64,char * __ptr64 * __ptr64) */

void __cdecl Log(LOGLEVEL param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_858 [32];
  undefined8 local_838;
  undefined1 local_830 [8];
  CHAR local_828;
  char acStack_827 [2047];
  ulonglong local_28;
  longlong lVar7;
  
                    /* 0x1520  5  ?Log@@YAXW4LOGLEVEL@@PEBDPEAPEAD@Z */
  local_28 = DAT_180005010 ^ (ulonglong)auStack_858;
  if (DAT_180005760 == (undefined **)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18000574c) && (_Init_thread_header(&DAT_18000574c), DAT_18000574c == -1)) {
      DAT_180005040 = 0xffffffffffffffff;
      PTR_vftable_180005038 = (undefined *)CDirectLog::vftable;
      atexit(FUN_180002a60);
      _Init_thread_footer(&DAT_18000574c);
    }
    DAT_180005760 = &PTR_vftable_180005038;
    (**(code **)PTR_vftable_180005038)(&PTR_vftable_180005038,"./log/DefaultLog.txt");
    DAT_180005768 = 0;
  }
  if ((DAT_180005768 <= (int)param_1) && (DAT_180005760 != (undefined **)0x0)) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (param_2[uVar3] != '\0');
    if (uVar3 < 2000) {
      puVar4 = (ulonglong *)FUN_180001170();
      local_830 = (undefined1  [8])*param_3;
      local_838 = 0;
      __stdio_common_vsprintf(*puVar4 | 1,&local_828,0xffffffffffffffff,param_2);
      puVar2 = (undefined2 *)(local_830 + 7);
      do {
        puVar5 = puVar2;
        puVar2 = (undefined2 *)((longlong)puVar5 + 1);
      } while (*(char *)((longlong)puVar5 + 1) != '\0');
      *(undefined2 *)((longlong)puVar5 + 1) = 0xa0d;
      *(undefined1 *)((longlong)puVar5 + 3) = 0;
      if (-1 < (int)param_1) {
        if ((int)param_1 < 2) {
          OutputDebugStringA(&local_828);
        }
        else if ((int)param_1 < 5) {
          lVar7 = -1;
          do {
            lVar6 = lVar7 + 1;
            pcVar1 = acStack_827 + lVar7;
            lVar7 = lVar6;
          } while (*pcVar1 != '\0');
          (**(code **)(*DAT_180005760 + 8))(DAT_180005760,&local_828,lVar6);
        }
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_858);
  return;
}




/* unsigned short __cdecl FileNameToFileCode(char * __ptr64) */

ushort __cdecl FileNameToFileCode(char *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  
                    /* 0x16f0  3  ?FileNameToFileCode@@YAGPEAD@Z */
  if (param_1 != (char *)0x0) {
    lVar7 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_1[lVar3] != '\0');
    if (lVar3 != 0) {
      pcVar4 = strrchr(param_1,0x5c);
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pcVar4[lVar3] != '\0');
      if (lVar3 != 0) {
        pbVar5 = (byte *)(pcVar4 + 1);
        if ((byte *)(pcVar4 + 1) == (byte *)0x0) {
          pbVar5 = (byte *)param_1;
        }
        uVar2 = 0;
        do {
          lVar7 = lVar7 + 1;
        } while (pbVar5[lVar7] != 0);
        iVar6 = (int)lVar7 + -1;
        if (iVar6 != 0) {
          do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar2 = *(ushort *)(&DAT_180003360 + ((ulonglong)(uVar2 >> 8) ^ (ulonglong)bVar1) * 4) ^
                    uVar2 << 8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180005010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_1800017f4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180001820(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180005110,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180001972;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180005140 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180005140 != (HANDLE)0x0) goto LAB_180001910;
  }
  else {
    DAT_180005140 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180005138);
    bVar7 = 0x40 - ((byte)DAT_180005010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180005148 = DAT_180005010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180005150 = DAT_180005010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180001910:
    uVar6 = FUN_180001cf0(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180001980);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180001972:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180001980(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
  if (DAT_180005140 != (HANDLE)0x0) {
    CloseHandle(DAT_180005140);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
  uVar1 = (ulonglong)_tls_index;
  DAT_180005000 = DAT_180005000 + 1;
  *param_1 = DAT_180005000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180005000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180001a5c:
                    /* WARNING: Could not recover jumptable at 0x000180001a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180005000;
      goto LAB_180001a5c;
    }
    _Init_thread_wait(100);
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_notify
   
   Library: Visual Studio 2017 Release */

void _Init_thread_notify(void)

{
  byte bVar1;
  
  if (DAT_180005140 != (HANDLE)0x0) {
    SetEvent(DAT_180005140);
                    /* WARNING: Could not recover jumptable at 0x000180001ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180005140);
    return;
  }
  bVar1 = (byte)DAT_180005010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180002970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180005010 ^ _DAT_180005150) >> bVar1 |
            (DAT_180005010 ^ _DAT_180005150) << 0x40 - bVar1))(&DAT_180005138);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180005140 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
    WaitForSingleObjectEx(DAT_180005140,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180001b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180005110);
    return;
  }
  bVar1 = (byte)DAT_180005010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180002970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180005010 ^ _DAT_180005148) >> bVar1 |
            (DAT_180005010 ^ _DAT_180005148) << 0x40 - bVar1))
            (&DAT_180005138,&DAT_180005110,param_1);
  return;
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2017 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_180001b66:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180005160 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180005160;
        pvVar1 = DAT_180005160;
      }
      DAT_180005160 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180001b66;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2017 Release */

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_1800010b0();
    uVar3 = _configure_narrow_argv(uVar3 & 0xffffffff);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = _initialize_narrow_environment();
  }
  else {
    uVar2 = __isa_available_init();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




/* Library Function - Single Match
    __scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2017 Release */

bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001cf0(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1800028cc();
  if (cVar1 != '\0') {
    cVar1 = FUN_1800028cc();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1800028cc();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_1800028cc();
  FUN_1800028cc();
  return 1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,
               undefined4 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180005170);
    return;
  }
  uVar2 = FUN_1800028d0();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_critical
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_1800028cc();
  FUN_1800028cc();
  return;
}




/* Library Function - Single Match
    __scrt_initialize_crt
   
   Library: Visual Studio 2017 Release */

longlong __scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180005168 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1800028cc();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800028cc();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1800028cc();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180001cf0(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180005169 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180005010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180005010;
      _DAT_180005170 = in_RAX;
      uRam0000000180005178 = in_RAX;
      _DAT_180005180 = in_RAX;
      _DAT_180005188 = in_RAX;
      uRam0000000180005190 = in_RAX;
      _DAT_180005198 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180005170);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180005188), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180005169 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180001e56) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */
/* Library Function - Single Match
    __scrt_is_nonwritable_in_current_image
   
   Library: Visual Studio 2017 Release */

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1800002f8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180001e3f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180001e3f:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2017 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180005160 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180005168 == '\0') || (param_2 == '\0')) {
    FUN_1800028cc();
    FUN_1800028cc();
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  _onexit_t p_Var3;
  
  bVar2 = (byte)DAT_180005010 & 0x3f;
  if (((DAT_180005010 ^ _DAT_180005170) >> bVar2 | (DAT_180005010 ^ _DAT_180005170) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180005170,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
}




/* Library Function - Single Match
    atexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    int __cdecl dllmain_crt_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  
  if (param_2 == 0) {
    uVar12 = (undefined7)((ulonglong)param_1 >> 8);
    if (DAT_1800051a0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_1800051a0 = DAT_1800051a0 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180005158 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_1800027a8();
      FID_conflict__RTC_Initialize();
      DAT_180005158 = 0;
      __scrt_dllmain_uninitialize_critical();
      __scrt_release_startup_lock((char)uVar8);
      cVar5 = __scrt_uninitialize_crt(CONCAT71(uVar12,param_3 != (void *)0x0),'\0');
      uVar7 = (uint)(cVar5 != '\0');
    }
    return uVar7;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar3 = __scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar3 = __scrt_dllmain_crt_thread_detach();
    }
    return (int)bVar3;
  }
  uVar8 = __scrt_initialize_crt(0);
  if ((char)uVar8 != '\0') {
    uVar8 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_180005158 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180005158 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180002798();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_1800031f8,&DAT_180003208);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_1800031e8,&DAT_1800031f0);
        DAT_180005158 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_1800027d8();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_1800051a0 = DAT_1800051a0 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001800021dc) */
/* WARNING: Removing unreachable block (ram,0x00018000216b) */
/* WARNING: Removing unreachable block (ram,0x00018000221f) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_1800051a0 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_1800010b0();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_1800010b0();
      dllmain_crt_dispatch(param_1,0,param_3);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = 1;
    }
  }
  return iVar1;
}




void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001800022b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(pvVar1,0xc0000409);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1800022ea;
  capture_previous_context((PCONTEXT)&DAT_180005250);
  _DAT_1800051c0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800052e8 = puVar3 + 0x40;
  _DAT_1800052d0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800051b0 = 0xc0000409;
  _DAT_1800051b4 = 1;
  _DAT_1800051c8 = 1;
  DAT_1800051d0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180005010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180005008;
  *(undefined8 *)(puVar3 + -8) = 0x18000238c;
  DAT_180005348 = _DAT_1800051c0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180003350);
  return;
}




/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002410(void)

{
  _DAT_180005720 = 0;
  return;
}




/* Library Function - Single Match
    __scrt_fastfail
   
   Library: Visual Studio 2017 Release */

void __scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x18000244b;
  FUN_180002410();
  *(undefined8 *)(puVar4 + -8) = 0x18000245c;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180002466;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180002480;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1800024c1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800024f3;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180002515;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180002536;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180002541;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180002551;
    FUN_180002410();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180002632) */
/* WARNING: Removing unreachable block (ram,0x0001800025b0) */
/* WARNING: Removing unreachable block (ram,0x00018000258b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __isa_available_init
   
   Library: Visual Studio 2017 Release */

undefined8 __isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  
  DAT_18000501c = 2;
  _DAT_180005018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180005020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180005728 = DAT_180005728 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180005728 = DAT_180005728 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180005018 = 2;
    DAT_18000501c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000501c = 0xe;
      _DAT_180005018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180005018 = 5;
        DAT_18000501c = 0x2e;
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180005030 != 0;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_180005010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180005010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180005010 == 0x2b992ddfa232) {
      DAT_180005010 = 0x2b992ddfa233;
    }
  }
  DAT_180005008 = ~DAT_180005010;
  return;
}




void FUN_180002798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000279f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180005730);
  return;
}




void FUN_1800027a8(void)

{
  __std_type_info_destroy_list(&DAT_180005730);
  return;
}




undefined * FUN_1800027b4(void)

{
  return &DAT_180005740;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001170();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800027b4();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_1800027d8(void)

{
  return &DAT_180005770;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180003f98; puVar1 < &DAT_180003f98; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180003fa8; puVar1 < &DAT_180003fa8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_1800028cc(void)

{
  return 1;
}




undefined8 FUN_1800028d0(void)

{
  return 0;
}




/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  __security_check_cookie(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180002970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_18000298a(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800029a1(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800029bd(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180002a00(void)

{
  PTR_vftable_180005048 = (undefined *)CFileMappingLog::vftable;
  if (DAT_180005058 != (LPCVOID)0x0) {
    UnmapViewOfFile(DAT_180005058);
  }
  if (DAT_180005050 != (HANDLE)0x0) {
    CloseHandle(DAT_180005050);
  }
  if (DAT_180005060 != (HANDLE)0x0) {
    CloseHandle(DAT_180005060);
  }
  PTR_vftable_180005048 = (undefined *)IEsLog::vftable;
  return;
}




void FUN_180002a60(void)

{
  PTR_vftable_180005038 = (undefined *)CDirectLog::vftable;
  if (DAT_180005040 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_180005040);
    DAT_180005040 = (HANDLE)0xffffffffffffffff;
  }
  PTR_vftable_180005038 = (undefined *)IEsLog::vftable;
  return;
}



