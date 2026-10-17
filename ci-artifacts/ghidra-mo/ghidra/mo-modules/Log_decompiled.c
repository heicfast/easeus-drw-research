
void FUN_180001160(void)

{
  PTR_vftable_18000a038 = (undefined *)IEsLog::vftable;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800012c0(void)

{
  DWORD DVar1;
  
  PTR_vftable_18000a038 = (undefined *)CFileMappingLog::vftable;
  if ((longlong)DAT_18000a048 - 1U < 0xfffffffffffffffe) {
    DVar1 = WaitForSingleObject(DAT_18000a058,1000);
    if ((DVar1 == 0) && (DAT_18000a050 != (undefined4 *)0x0)) {
      FUN_180003030((undefined8 *)&DAT_18000a060,DAT_18000a048);
      *DAT_18000a050 = 0;
      if (DAT_18000a050 != (undefined4 *)0x0) {
        _DAT_18000a060 = DAT_18000a050;
        _DAT_18000a068 = 0x10000;
        *DAT_18000a050 = 0;
      }
      ReleaseMutex(DAT_18000a058);
    }
    else {
      OutputDebugStringA("Failed to request the permission to write to log file!\n");
    }
  }
  if (DAT_18000a050 != (undefined4 *)0x0) {
    UnmapViewOfFile(DAT_18000a050);
  }
  if (DAT_18000a040 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a040);
  }
  if (DAT_18000a058 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a058);
  }
  if (DAT_18000a048 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a048);
  }
  PTR_vftable_18000a038 = (undefined *)IEsLog::vftable;
  return;
}




void FUN_1800013e0(longlong param_1,LPCSTR param_2)

{
  DWORD dwCreationDisposition;
  HANDLE pvVar1;
  undefined1 auStackY_198 [32];
  _WIN32_FIND_DATAA local_158;
  ulonglong local_18;
  
  local_18 = DAT_18000a010 ^ (ulonglong)auStackY_198;
  memset(&local_158,0,0x140);
  pvVar1 = FindFirstFileA(param_2,&local_158);
  if (pvVar1 != (HANDLE)0xffffffffffffffff) {
    FindClose(pvVar1);
  }
  dwCreationDisposition = 4;
  if (0xa00000 < local_158.nFileSizeLow) {
    dwCreationDisposition = 2;
  }
  pvVar1 = CreateFileA(param_2,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,0,
                       (HANDLE)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffffffffffff) {
    SetFilePointerEx(pvVar1,(LARGE_INTEGER)0x0,(PLARGE_INTEGER)0x0,2);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_198);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800014c0(void)

{
  bool bVar1;
  DWORD DVar2;
  undefined7 extraout_var;
  
  if (0xfffffffffffffffd < (longlong)DAT_18000a048 - 1U) {
    return 0;
  }
  DVar2 = WaitForSingleObject(DAT_18000a058,1000);
  if ((DVar2 == 0) && (DAT_18000a050 != (undefined4 *)0x0)) {
    bVar1 = FUN_180003030((undefined8 *)&DAT_18000a060,DAT_18000a048);
    *DAT_18000a050 = 0;
    if (DAT_18000a050 != (undefined4 *)0x0) {
      _DAT_18000a060 = DAT_18000a050;
      _DAT_18000a068 = 0x10000;
      *DAT_18000a050 = 0;
    }
    ReleaseMutex(DAT_18000a058);
    return CONCAT71(extraout_var,bVar1) & 0xffffffff;
  }
  OutputDebugStringA("Failed to request the permission to write to log file!\n");
  return 0;
}




bool FUN_180001570(longlong param_1,void *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  DWORD DVar3;
  bool bVar4;
  DWORD local_res8 [2];
  
  bVar4 = false;
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),1000);
  if ((DVar3 == 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      piVar1 = *(int **)(param_1 + 0x28);
      if (*piVar1 + 4U + param_3 <= *(uint *)(param_1 + 0x30)) {
        memmove((void *)((ulonglong)(*piVar1 + 4U) + (longlong)piVar1),param_2,(ulonglong)param_3);
        *piVar1 = *piVar1 + param_3;
      }
    }
    puVar2 = *(uint **)(param_1 + 0x28);
    if (*puVar2 <= *(uint *)(param_1 + 0x30)) {
      local_res8[0] = 0;
      WriteFile(*(HANDLE *)(param_1 + 0x10),puVar2 + 1,*puVar2,local_res8,(LPOVERLAPPED)0x0);
      *puVar2 = 0;
      bVar4 = local_res8[0] == 0;
    }
    ReleaseMutex(*(HANDLE *)(param_1 + 0x20));
    return bVar4;
  }
  OutputDebugStringA("Failed to request the permission to write to buffer!\n");
  return false;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001650(void)

{
  DAT_18000a040 = OpenFileMappingA(0xf001f,0,"EPM_{1E956C11-4D20-49d7-B4C7-016A342A2D39}");
  if (DAT_18000a040 == (HANDLE)0x0) {
    DAT_18000a040 =
         CreateFileMappingA(DAT_18000a048,(LPSECURITY_ATTRIBUTES)0x0,4,0,0x10000,
                            "EPM_{1E956C11-4D20-49d7-B4C7-016A342A2D39}");
    if (DAT_18000a040 == (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800016b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      OutputDebugStringA("Failed to create map file!\n");
      return;
    }
  }
  DAT_18000a050 = (undefined4 *)MapViewOfFile(DAT_18000a040,0xf001f,0,0,0x10000);
  if (DAT_18000a050 != (undefined4 *)0x0) {
    _DAT_18000a068 = 0x10000;
    _DAT_18000a060 = DAT_18000a050;
    *DAT_18000a050 = 0;
    return;
  }
  CloseHandle(DAT_18000a040);
  DAT_18000a040 = (HANDLE)0x0;
                    /* WARNING: Could not recover jumptable at 0x000180001725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA("Failed to map the map file!\n");
  return;
}




void FUN_180001730(void)

{
  DAT_18000a058 =
       CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"EPMLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}");
  return;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter const &
   __ptr64) __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1770  8  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z */
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1780  7  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z */
  return this;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x1790  6  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




undefined * FUN_1800017a0(void)

{
  return &DAT_18000a760;
}




int FUN_1800017b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_1800017a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_3,0,param_5);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




int FUN_180001810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_1800017a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




int FUN_180001870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1800017a0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,param_5);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




int FUN_1800018d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1800017a0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3,0,param_4);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




int FUN_180001940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_1800017a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    sprintf_s
    swprintf_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl FID_conflict_sprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_1800017a0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1a00  19  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1a10  36  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1a20  14  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: __cdecl IObject::IObject(void) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this)

{
                    /* 0x1a30  4  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject const & __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1a40  3  ??0IObject@@QEAA@AEBU0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1a50  2  ??0IObject@@QEAA@$$QEAU0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject const & __ptr64)
   __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x1a60  12  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x1a70  11  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z */
  return this;
}




/* public: class CNTFSLib & __ptr64 __cdecl CNTFSLib::operator=(class CNTFSLib const & __ptr64)
   __ptr64 */

CNTFSLib * __thiscall CNTFSLib::operator=(CNTFSLib *this,CNTFSLib *param_1)

{
                    /* 0x1a80  10  ??4CNTFSLib@@QEAAAEAV0@AEBV0@@Z */
  return this;
}




/* public: class CNTFSLib & __ptr64 __cdecl CNTFSLib::operator=(class CNTFSLib && __ptr64) __ptr64
    */

CNTFSLib * __thiscall CNTFSLib::operator=(CNTFSLib *this,CNTFSLib *param_1)

{
                    /* 0x1a90  9  ??4CNTFSLib@@QEAAAEAV0@$$QEAV0@@Z */
  return this;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* public: static void __cdecl CLogWriter::Log(char const * __ptr64,...) */

void __cdecl CLogWriter::Log(char *param_1,...)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 in_RDX;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_11c8 [32];
  undefined8 local_11a8;
  undefined8 *local_11a0;
  uint local_1198;
  uint local_1190;
  uint local_1188;
  uint local_1180;
  DWORD local_1178;
  DWORD local_1170;
  char *local_1168;
  _SYSTEMTIME local_1160;
  char cStack_1149;
  CHAR local_1148;
  char acStack_1147 [269];
  char acStack_103a [2];
  undefined2 local_1038;
  char acStack_1036 [4094];
  ulonglong local_38;
  undefined8 uStack_28;
  
                    /* 0x1aa0  27  ?Log@CLogWriter@@SAXPEBDZZ */
  uStack_28 = 0x180001ac3;
  local_38 = DAT_18000a010 ^ (ulonglong)auStack_11c8;
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  memset(acStack_103a + 2,0,0x1000);
  local_1160.wYear = 0;
  local_1160.wMonth = 0;
  local_1160.wDayOfWeek = 0;
  local_1160.wDay = 0;
  local_1160.wHour = 0;
  local_1160.wMinute = 0;
  local_1160.wSecond = 0;
  local_1160.wMilliseconds = 0;
  GetLocalTime(&local_1160);
  DVar4 = GetCurrentProcessId();
  local_1178 = GetCurrentThreadId();
  local_1180 = (uint)local_1160.wMilliseconds;
  local_1188 = (uint)local_1160.wSecond;
  local_1190 = (uint)local_1160.wMinute;
  local_1198 = (uint)local_1160.wHour;
  local_11a0 = (undefined8 *)CONCAT44(local_11a0._4_4_,(uint)local_1160.wDay);
  local_11a8 = CONCAT44(local_11a8._4_4_,(uint)local_1160.wMonth);
  local_1170 = DVar4;
  FID_conflict_sprintf_s
            ((wchar_t *)(acStack_103a + 2),0x1000,
             (wchar_t *)"[%04d-%02d-%02d %02d:%02d:%02d:%03d] (T:%d/P:%d) ",
             local_1160._0_8_ & 0xffff);
  setlocale(0,"English");
  lVar8 = -1;
  lVar2 = -1;
  do {
    lVar9 = lVar2;
    lVar2 = lVar9 + 1;
  } while (acStack_103a[lVar9 + 3] != '\0');
  puVar5 = (undefined8 *)FUN_1800017a0();
  local_11a8 = 0;
  local_11a0 = &local_res10;
  __stdio_common_vsprintf_s(*puVar5,acStack_103a + lVar9 + 3,0x1000 - (lVar9 + 1),param_1);
  uVar3 = 0xffffffffffffffff;
  do {
    uVar6 = uVar3;
    uVar3 = uVar6 + 1;
  } while (acStack_103a[uVar6 + 3] != '\0');
  if (((uVar6 + 1 < 3) || (acStack_103a[uVar6 + 2] != '\n')) || (acStack_103a[uVar6 + 1] != '\r')) {
    (acStack_103a + uVar6 + 3)[0] = '\r';
    (acStack_103a + uVar6 + 3)[1] = '\n';
    acStack_103a[uVar6 + 5] = '\0';
  }
  if (DAT_18000a758 == 0) {
    memset(&local_1148,0,0x104);
    GetModuleFileNameA((HMODULE)0x0,&local_1148,0x104);
    lVar2 = -1;
    do {
      lVar9 = lVar2;
      lVar2 = lVar9 + 1;
    } while (acStack_1147[lVar9] != '\0');
    for (local_1168 = acStack_1147 + lVar9; *local_1168 != '\\'; local_1168 = local_1168 + -1) {
    }
    *local_1168 = '\0';
    pcVar1 = &cStack_1149;
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    builtin_strncpy(pcVar7 + 1,"\\EPMLOG.log",0xc);
    FUN_1800013e0(0x18000a038,&local_1148);
    DAT_18000a758 = 1;
  }
  do {
    lVar9 = lVar8 + 1;
    lVar2 = lVar8 + 3;
    lVar8 = lVar9;
  } while (acStack_103a[lVar2] != '\0');
  FUN_180001570(0x18000a038,acStack_103a + 2,(uint)lVar9);
  local_1160.wYear = 0;
  local_1160.wMonth = 0;
  local_1160.wDayOfWeek = 0;
  local_1160.wDay = 0;
  __security_check_cookie(local_38 ^ (ulonglong)auStack_11c8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* public: static void __cdecl CLogWriter::ProductVersion(char const * __ptr64) */

void __cdecl CLogWriter::ProductVersion(char *param_1)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackX_10 [24];
  undefined1 auStack_11c8 [32];
  undefined8 uStack_11a8;
  undefined1 *puStack_11a0;
  uint uStack_1198;
  uint uStack_1190;
  uint uStack_1188;
  uint uStack_1180;
  DWORD DStack_1178;
  DWORD DStack_1170;
  char *pcStack_1168;
  _SYSTEMTIME _Stack_1160;
  char cStack_1149;
  CHAR CStack_1148;
  char acStack_1147 [269];
  char acStack_103a [2];
  undefined2 uStack_1038;
  char acStack_1036 [4094];
  ulonglong uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x180001ac3;
  uStack_38 = DAT_18000a010 ^ (ulonglong)auStack_11c8;
  memset(acStack_103a + 2,0,0x1000);
  _Stack_1160.wYear = 0;
  _Stack_1160.wMonth = 0;
  _Stack_1160.wDayOfWeek = 0;
  _Stack_1160.wDay = 0;
  _Stack_1160.wHour = 0;
  _Stack_1160.wMinute = 0;
  _Stack_1160.wSecond = 0;
  _Stack_1160.wMilliseconds = 0;
  GetLocalTime(&_Stack_1160);
  DVar4 = GetCurrentProcessId();
  DStack_1178 = GetCurrentThreadId();
  uStack_1180 = (uint)_Stack_1160.wMilliseconds;
  uStack_1188 = (uint)_Stack_1160.wSecond;
  uStack_1190 = (uint)_Stack_1160.wMinute;
  uStack_1198 = (uint)_Stack_1160.wHour;
  puStack_11a0 = (undefined1 *)CONCAT44(puStack_11a0._4_4_,(uint)_Stack_1160.wDay);
  uStack_11a8 = CONCAT44(uStack_11a8._4_4_,(uint)_Stack_1160.wMonth);
  DStack_1170 = DVar4;
  FID_conflict_sprintf_s
            ((wchar_t *)(acStack_103a + 2),0x1000,
             (wchar_t *)"[%04d-%02d-%02d %02d:%02d:%02d:%03d] (T:%d/P:%d) ",
             _Stack_1160._0_8_ & 0xffff);
  setlocale(0,"English");
  lVar8 = -1;
                    /* 0x1d40  32  ?ProductVersion@CLogWriter@@SAXPEBD@Z */
  lVar2 = -1;
  do {
    lVar9 = lVar2;
    lVar2 = lVar9 + 1;
  } while (acStack_103a[lVar9 + 3] != '\0');
  puVar5 = (undefined8 *)FUN_1800017a0();
  uStack_11a8 = 0;
  puStack_11a0 = auStackX_10;
  __stdio_common_vsprintf_s(*puVar5,acStack_103a + lVar9 + 3,0x1000 - (lVar9 + 1),param_1);
  uVar3 = 0xffffffffffffffff;
  do {
    uVar6 = uVar3;
    uVar3 = uVar6 + 1;
  } while (acStack_103a[uVar6 + 3] != '\0');
  if (((uVar6 + 1 < 3) || (acStack_103a[uVar6 + 2] != '\n')) || (acStack_103a[uVar6 + 1] != '\r')) {
    (acStack_103a + uVar6 + 3)[0] = '\r';
    (acStack_103a + uVar6 + 3)[1] = '\n';
    acStack_103a[uVar6 + 5] = '\0';
  }
  if (DAT_18000a758 == 0) {
    memset(&CStack_1148,0,0x104);
    GetModuleFileNameA((HMODULE)0x0,&CStack_1148,0x104);
    lVar2 = -1;
    do {
      lVar9 = lVar2;
      lVar2 = lVar9 + 1;
    } while (acStack_1147[lVar9] != '\0');
    for (pcStack_1168 = acStack_1147 + lVar9; *pcStack_1168 != '\\';
        pcStack_1168 = pcStack_1168 + -1) {
    }
    *pcStack_1168 = '\0';
    pcVar1 = &cStack_1149;
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    builtin_strncpy(pcVar7 + 1,"\\EPMLOG.log",0xc);
    FUN_1800013e0(0x18000a038,&CStack_1148);
    DAT_18000a758 = 1;
  }
  do {
    lVar9 = lVar8 + 1;
    lVar2 = lVar8 + 3;
    lVar8 = lVar9;
  } while (acStack_103a[lVar2] != '\0');
  FUN_180001570(0x18000a038,acStack_103a + 2,(uint)lVar9);
  _Stack_1160.wYear = 0;
  _Stack_1160.wMonth = 0;
  _Stack_1160.wDayOfWeek = 0;
  _Stack_1160.wDay = 0;
  __security_check_cookie(uStack_38 ^ (ulonglong)auStack_11c8);
  return;
}




/* public: static void __cdecl CLogWriter::CurrentDate(void) */

void __cdecl CLogWriter::CurrentDate(void)

{
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38;
  _SYSTEMTIME local_28;
  ulonglong local_18;
  
                    /* 0x1d50  17  ?CurrentDate@CLogWriter@@SAXXZ */
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_68;
  GetLocalTime(&local_28);
  local_38 = (uint)local_28.wSecond;
  local_40 = (uint)local_28.wMinute;
  local_48 = (uint)local_28.wHour;
  Log("Date Generated: %02d/%02d/%d %02d:%02d:%02d",(ulonglong)local_28.wMonth,
      (ulonglong)local_28.wDay,(ulonglong)local_28.wYear);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




/* public: static void __cdecl CLogWriter::MemoryInfo(void) */

void __cdecl CLogWriter::MemoryInfo(void)

{
  BOOL BVar1;
  undefined1 auStack_78 [32];
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
                    /* 0x1dc0  28  ?MemoryInfo@CLogWriter@@SAXXZ */
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_78;
  local_58.dwLength = 0x40;
  BVar1 = GlobalMemoryStatusEx(&local_58);
  if (BVar1 == 0) {
    Log("Failed to query memory status.");
  }
  Log("Memory status:");
  Log("Total physical memory:%4I64d MB\tAvailable physical memory:%4I64d MB",
      local_58.ullTotalPhys >> 0x14,local_58.ullAvailPhys >> 0x14);
  Log("Total   page    files:%4I64d MB\tAvailable    page   files:%4I64d MB",
      local_58.ullTotalPageFile >> 0x14,local_58.ullAvailPageFile >> 0x14);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}




/* private: static void __cdecl CLogWriter::GetOS4MajorVersion10(char * __ptr64,char *
   __ptr64,struct _OSVERSIONINFOEXA & __ptr64,struct _SYSTEM_INFO & __ptr64) */

void __cdecl
CLogWriter::GetOS4MajorVersion10
          (char *param_1,char *param_2,_OSVERSIONINFOEXA *param_3,_SYSTEM_INFO *param_4)

{
  WORD WVar1;
  uint uVar2;
  char *pcVar3;
  
                    /* 0x1e50  20
                       ?GetOS4MajorVersion10@CLogWriter@@CAXPEAD0AEAU_OSVERSIONINFOEXA@@AEAU_SYSTEM_INFO@@@Z
                        */
  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    if (*(uint *)(param_3 + 0xc) < 0x55ec) {
      if (param_3[0x9a] == (_OSVERSIONINFOEXA)0x1) {
        pcVar3 = "Microsoft Windows 10";
      }
      else {
        strcpy_s(param_1,0x104,"Microsoft Windows Server 2016");
        uVar2 = *(uint *)(param_3 + 0xc);
        if (0x4562 < uVar2) {
          strcpy_s(param_1,0x104,"Microsoft Windows Server 2019");
          uVar2 = *(uint *)(param_3 + 0xc);
        }
        if (uVar2 < 0x4f7c) goto LAB_180001f1a;
        pcVar3 = "Microsoft Windows Server 2022";
      }
    }
    else if (*(uint *)(param_3 + 0xc) < 22000) {
      pcVar3 = "Microsoft Windows 11(Dev)";
    }
    else {
      pcVar3 = "Microsoft Windows 11";
    }
  }
  else {
    pcVar3 = "Unknown operating system!";
  }
  strcpy_s(param_1,0x104,pcVar3);
LAB_180001f1a:
  WVar1 = (param_4->u).s.wProcessorArchitecture;
  if (WVar1 == 0) {
    pcVar3 = "32-bit";
  }
  else {
    if (WVar1 != 9) {
      *param_2 = '\0';
      return;
    }
    pcVar3 = "64-bit";
  }
  strcpy_s(param_2,0x104,pcVar3);
  return;
}




/* private: static void __cdecl CLogWriter::GetOS4MajorVersion6(char * __ptr64,char * __ptr64,struct
   _OSVERSIONINFOEXA & __ptr64,struct _SYSTEM_INFO & __ptr64) */

void __cdecl
CLogWriter::GetOS4MajorVersion6
          (char *param_1,char *param_2,_OSVERSIONINFOEXA *param_3,_SYSTEM_INFO *param_4)

{
  WORD WVar1;
  int iVar2;
  char *pcVar3;
  
                    /* 0x1f70  24
                       ?GetOS4MajorVersion6@CLogWriter@@CAXPEAD0AEAU_OSVERSIONINFOEXA@@AEAU_SYSTEM_INFO@@@Z
                        */
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    iVar2 = *(int *)(param_3 + 8);
    if (iVar2 == 0) {
      pcVar3 = "Microsoft Windows Vista";
      if (param_3[0x9a] != (_OSVERSIONINFOEXA)0x1) {
        pcVar3 = "Microsoft Windows Server 2008";
      }
    }
    else if (iVar2 == 1) {
      if (param_3[0x9a] == (_OSVERSIONINFOEXA)0x1) {
        pcVar3 = "Microsoft Windows 7";
      }
      else {
        pcVar3 = "Microsoft Windows Server 2008 R2";
      }
    }
    else if (iVar2 == 2) {
      if (param_3[0x9a] == (_OSVERSIONINFOEXA)0x1) {
        pcVar3 = "Microsoft Windows 8";
      }
      else {
        pcVar3 = "Microsoft Windows Server 2012";
      }
    }
    else if (iVar2 == 3) {
      if (param_3[0x9a] == (_OSVERSIONINFOEXA)0x1) {
        pcVar3 = "Microsoft Windows 8.1";
      }
      else {
        pcVar3 = "Microsoft Windows Server 2012 R2";
      }
    }
    else {
      pcVar3 = "Unknown operating system!";
    }
    strcpy_s(param_1,0x104,pcVar3);
    WVar1 = (param_4->u).s.wProcessorArchitecture;
    if (WVar1 == 0) {
      pcVar3 = "32-bit";
    }
    else {
      if (WVar1 != 9) {
        *param_2 = '\0';
        return;
      }
      pcVar3 = "64-bit";
    }
    strcpy_s(param_2,0x104,pcVar3);
  }
  return;
}




/* private: static void __cdecl CLogWriter::GetOS4MajorVersion52(char * __ptr64,char * __ptr64,char
   * __ptr64,struct _OSVERSIONINFOEXA & __ptr64,struct _SYSTEM_INFO & __ptr64) */

void __cdecl
CLogWriter::GetOS4MajorVersion52
          (char *param_1,char *param_2,char *param_3,_OSVERSIONINFOEXA *param_4,
          _SYSTEM_INFO *param_5)

{
  WORD WVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  
                    /* 0x2090  22
                       ?GetOS4MajorVersion52@CLogWriter@@CAXPEAD00AEAU_OSVERSIONINFOEXA@@AEAU_SYSTEM_INFO@@@Z
                        */
  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 == (char *)0x0) {
    return;
  }
  if (param_3 == (char *)0x0) {
    return;
  }
  iVar3 = GetSystemMetrics(0x59);
  if (iVar3 == 0) {
    if (*(short *)(param_4 + 0x98) == 0x2000) {
      pcVar4 = "Microsoft Windows Storage Server 2003";
    }
    else {
      pcVar4 = "Microsoft Windows XP";
      if (param_4[0x9a] != (_OSVERSIONINFOEXA)0x1) {
        pcVar4 = "Microsoft Windows Server 2003";
      }
    }
  }
  else {
    pcVar4 = "Microsoft Windows Server 2003 R2";
  }
  strcpy_s(param_1,0x104,pcVar4);
  WVar1 = (param_5->u).s.wProcessorArchitecture;
  if (WVar1 == 6) {
    pcVar4 = "for Itanium-based Systems";
  }
  else {
    if (WVar1 != 9) {
      *param_2 = '\0';
      goto LAB_180002156;
    }
    pcVar4 = "x64 Edition";
  }
  strcpy_s(param_2,0x104,pcVar4);
LAB_180002156:
  if (param_4[0x9a] == (_OSVERSIONINFOEXA)0x1) {
    pcVar4 = "Professional";
  }
  else {
    uVar2 = *(ushort *)(param_4 + 0x98);
    if ((uVar2 & 0x4000) == 0) {
      if ((char)uVar2 < '\0') {
        pcVar4 = "Datacenter Edition";
      }
      else if ((uVar2 & 2) == 0) {
        pcVar4 = "Web Edition";
        if ((uVar2 & 0x400) == 0) {
          pcVar4 = "Standard Edition";
        }
      }
      else {
        pcVar4 = "Enterprise Edition";
      }
    }
    else {
      pcVar4 = "Compute Cluster Edition";
    }
  }
  strcpy_s(param_3,0x104,pcVar4);
  return;
}




/* private: static void __cdecl CLogWriter::GetOS4MajorVersion5(char * __ptr64,char * __ptr64,char *
   __ptr64,struct _OSVERSIONINFOEXA & __ptr64,struct _SYSTEM_INFO & __ptr64) */

void __cdecl
CLogWriter::GetOS4MajorVersion5
          (char *param_1,char *param_2,char *param_3,_OSVERSIONINFOEXA *param_4,
          _SYSTEM_INFO *param_5)

{
  int iVar1;
  char *_Src;
  
                    /* 0x21e0  23
                       ?GetOS4MajorVersion5@CLogWriter@@CAXPEAD00AEAU_OSVERSIONINFOEXA@@AEAU_SYSTEM_INFO@@@Z
                        */
  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 == (char *)0x0) {
    return;
  }
  if (param_3 == (char *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_4 + 8);
  if (iVar1 == 0) {
    strcpy_s(param_1,0x104,"Microsoft Windows 2000");
    if (param_4[0x9a] != (_OSVERSIONINFOEXA)0x1) {
      if ((char)*(ushort *)(param_4 + 0x98) < '\0') {
        _Src = "Datacenter Server";
        param_1 = param_3;
      }
      else {
        _Src = "Advanced Server";
        param_1 = param_3;
        if ((*(ushort *)(param_4 + 0x98) & 2) == 0) {
          _Src = "Server";
        }
      }
      goto LAB_1800022b4;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        GetOS4MajorVersion52(param_1,param_2,param_3,param_4,param_5);
        return;
      }
      _Src = "Unknown operating system!";
      goto LAB_1800022b4;
    }
    strcpy_s(param_1,0x104,"Microsoft Windows XP");
    if ((*(ushort *)(param_4 + 0x98) & 0x200) != 0) {
      _Src = "Home Edition";
      param_1 = param_3;
      goto LAB_1800022b4;
    }
  }
  _Src = "Professional";
  param_1 = param_3;
LAB_1800022b4:
  strcpy_s(param_1,0x104,_Src);
  return;
}




/* private: static void __cdecl CLogWriter::GetOS4MajorVersion4(char * __ptr64,char * __ptr64,struct
   _OSVERSIONINFOEXA & __ptr64) */

void __cdecl CLogWriter::GetOS4MajorVersion4(char *param_1,char *param_2,_OSVERSIONINFOEXA *param_3)

{
  char *_Src;
  
                    /* 0x22d0  21
                       ?GetOS4MajorVersion4@CLogWriter@@CAXPEAD0AEAU_OSVERSIONINFOEXA@@@Z */
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    strcpy_s(param_1,0x104,"Microsoft Windows NT");
    if (param_3[0x9a] == (_OSVERSIONINFOEXA)0x1) {
      _Src = "WorkStation 4.0";
    }
    else {
      _Src = "Server 4.0, Enterprise Edition";
      if (((byte)param_3[0x98] & 2) == 0) {
        _Src = "Server 4.0";
      }
    }
    strcpy_s(param_2,0x104,_Src);
  }
  return;
}




/* public: static char * __ptr64 __cdecl CLogWriter::GetOSVersionInfo(char * __ptr64,int) */

char * __cdecl CLogWriter::GetOSVersionInfo(char *param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  char *extraout_RAX;
  char *_Dst;
  char *pcVar5;
  undefined1 auStackY_498 [32];
  longlong local_438;
  _SYSTEM_INFO local_430;
  _OSVERSIONINFOA local_3f8;
  ushort local_360;
  char local_35e;
  char local_358 [272];
  char local_248 [272];
  char local_138 [272];
  ulonglong local_28;
  
                    /* 0x2340  25  ?GetOSVersionInfo@CLogWriter@@SAPEADPEADH@Z */
  local_28 = DAT_18000a010 ^ (ulonglong)auStackY_498;
  if (param_1 == (char *)0x0) goto LAB_180002808;
  memset(local_358,0,0x104);
  memset(local_248,0,0x104);
  memset(local_138,0,0x104);
  memset(&local_3f8.dwMajorVersion,0,0x98);
  local_3f8.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_3f8);
  if (BVar1 == 0) {
    local_3f8.dwOSVersionInfoSize = 0x94;
    BVar1 = GetVersionExA(&local_3f8);
    if (BVar1 != 0) goto LAB_1800023ef;
  }
  else {
LAB_1800023ef:
    pHVar3 = LoadLibraryA("ntdll.dll");
    if (pHVar3 == (HMODULE)0x0) {
LAB_180002457:
      local_438 = 0;
      iVar2 = NetWkstaGetInfo(0,100,&local_438);
      if ((iVar2 == 0) && (local_438 != 0)) {
        local_3f8.dwMajorVersion = *(DWORD *)(local_438 + 0x18);
        local_3f8.dwMinorVersion = *(DWORD *)(local_438 + 0x1c);
        NetApiBufferFree();
      }
    }
    else {
      pFVar4 = GetProcAddress(pHVar3,"RtlGetNtVersionNumbers");
      if (pFVar4 != (FARPROC)0x0) {
        (*pFVar4)(&local_3f8.dwMajorVersion,&local_3f8.dwMinorVersion,&local_3f8.dwBuildNumber);
        local_3f8.dwBuildNumber = local_3f8.dwBuildNumber & 0xffff;
      }
      FreeLibrary(pHVar3);
      if (pFVar4 == (FARPROC)0x0) goto LAB_180002457;
    }
    local_430.u = (_union_552)0x0;
    local_430.dwPageSize = 0;
    local_430.lpMinimumApplicationAddress = (LPVOID)0x0;
    local_430.lpMaximumApplicationAddress = (LPVOID)0x0;
    local_430.dwActiveProcessorMask = 0;
    local_430.dwNumberOfProcessors = 0;
    local_430.dwProcessorType = 0;
    local_430.dwAllocationGranularity = 0;
    local_430.wProcessorLevel = 0;
    local_430.wProcessorRevision = 0;
    pHVar3 = GetModuleHandleA("kernel32.dll");
    pFVar4 = GetProcAddress(pHVar3,"GetNativeSystemInfo");
    if (pFVar4 == (FARPROC)0x0) {
      GetSystemInfo(&local_430);
    }
    else {
      (*pFVar4)();
    }
    if (local_3f8.dwMajorVersion == 4) {
      strcpy_s(local_358,0x104,"Microsoft Windows NT");
      if (local_35e == '\x01') {
        pcVar5 = "WorkStation 4.0";
      }
      else {
        pcVar5 = "Server 4.0, Enterprise Edition";
        if ((local_360 & 2) == 0) {
          pcVar5 = "Server 4.0";
        }
      }
LAB_180002797:
      _Dst = local_248;
    }
    else if (local_3f8.dwMajorVersion == 5) {
      _Dst = local_358;
      if (local_3f8.dwMinorVersion == 0) {
        strcpy_s(_Dst,0x104,"Microsoft Windows 2000");
        if (local_35e == '\x01') {
LAB_180002722:
          pcVar5 = "Professional";
          goto LAB_180002797;
        }
        if ((char)local_360 < '\0') {
          pcVar5 = "Datacenter Server";
          goto LAB_180002797;
        }
        _Dst = local_248;
        if ((local_360 & 2) == 0) {
          pcVar5 = "Server";
        }
        else {
          pcVar5 = "Advanced Server";
        }
      }
      else {
        if (local_3f8.dwMinorVersion == 1) {
          strcpy_s(_Dst,0x104,"Microsoft Windows XP");
          if ((local_360 & 0x200) != 0) {
            pcVar5 = "Home Edition";
            goto LAB_180002797;
          }
          goto LAB_180002722;
        }
        if (local_3f8.dwMinorVersion == 2) {
          GetOS4MajorVersion52(_Dst,local_138,local_248,(_OSVERSIONINFOEXA *)&local_3f8,&local_430);
          goto LAB_1800027a9;
        }
        pcVar5 = "Unknown operating system!";
      }
    }
    else {
      if (local_3f8.dwMajorVersion == 6) {
        if (local_3f8.dwMinorVersion == 0) {
          pcVar5 = "Microsoft Windows Vista";
          if (local_35e != '\x01') {
            pcVar5 = "Microsoft Windows Server 2008";
          }
        }
        else if (local_3f8.dwMinorVersion == 1) {
          if (local_35e == '\x01') {
            pcVar5 = "Microsoft Windows 7";
          }
          else {
            pcVar5 = "Microsoft Windows Server 2008 R2";
          }
        }
        else if (local_3f8.dwMinorVersion == 2) {
          if (local_35e == '\x01') {
            pcVar5 = "Microsoft Windows 8";
          }
          else {
            pcVar5 = "Microsoft Windows Server 2012";
          }
        }
        else if (local_3f8.dwMinorVersion == 3) {
          if (local_35e == '\x01') {
            pcVar5 = "Microsoft Windows 8.1";
          }
          else {
            pcVar5 = "Microsoft Windows Server 2012 R2";
          }
        }
        else {
          pcVar5 = "Unknown operating system!";
        }
        goto LAB_1800025aa;
      }
      if (local_3f8.dwMajorVersion != 10) {
        pcVar5 = "Unknown operating system!";
        _Dst = local_358;
        goto LAB_1800027a3;
      }
      if (local_3f8.dwMinorVersion == 0) {
        if (0x55eb < local_3f8.dwBuildNumber) {
          if (local_3f8.dwBuildNumber < 22000) {
            pcVar5 = "Microsoft Windows 11(Dev)";
          }
          else {
            pcVar5 = "Microsoft Windows 11";
          }
          goto LAB_1800025aa;
        }
        if (local_35e == '\x01') {
          pcVar5 = "Microsoft Windows 10";
          goto LAB_1800025aa;
        }
        strcpy_s(local_358,0x104,"Microsoft Windows Server 2016");
        if (0x4562 < local_3f8.dwBuildNumber) {
          strcpy_s(local_358,0x104,"Microsoft Windows Server 2019");
        }
        if (0x4f7b < local_3f8.dwBuildNumber) {
          pcVar5 = "Microsoft Windows Server 2022";
          goto LAB_1800025aa;
        }
      }
      else {
        pcVar5 = "Unknown operating system!";
LAB_1800025aa:
        strcpy_s(local_358,0x104,pcVar5);
      }
      if (local_430.u.s.wProcessorArchitecture == 0) {
        pcVar5 = "32-bit";
        _Dst = local_138;
      }
      else {
        if (local_430.u.s.wProcessorArchitecture != 9) goto LAB_1800027a9;
        pcVar5 = "64-bit";
        _Dst = local_138;
      }
    }
LAB_1800027a3:
    strcpy_s(_Dst,0x104,pcVar5);
  }
LAB_1800027a9:
  FID_conflict_sprintf_s
            ((wchar_t *)param_1,(longlong)param_2,(wchar_t *)"%s %s %s %s (%d.%d.%d.%d.%d)",
             local_358);
LAB_180002808:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_498);
  return extraout_RAX;
}




/* public: static void __cdecl CLogWriter::OSVersionInfo(void) */

void __cdecl CLogWriter::OSVersionInfo(void)

{
  undefined1 auStack_458 [32];
  char local_438 [528];
  wchar_t local_228 [264];
  ulonglong local_18;
  
                    /* 0x2830  30  ?OSVersionInfo@CLogWriter@@SAXXZ */
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_458;
  memset(local_438,0,0x208);
  GetOSVersionInfo(local_438,0x208);
  memset(local_228,0,0x208);
  FID_conflict_sprintf_s(local_228,0x208,(wchar_t *)"OS: %s",local_438);
  Log((char *)local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_458);
  return;
}




/* public: static void __cdecl CLogWriter::OSPath(void) */

void __cdecl CLogWriter::OSPath(void)

{
  undefined1 auStack_248 [32];
  CHAR local_228 [528];
  ulonglong local_18;
  
                    /* 0x28d0  29  ?OSPath@CLogWriter@@SAXXZ */
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_248;
  memset(local_228,0,0x208);
  GetSystemDirectoryA(local_228,0x208);
  Log("OS Directory: %s",local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




/* public: static void __cdecl CLogWriter::AppPath(void) */

void __cdecl CLogWriter::AppPath(void)

{
  DWORD DVar1;
  undefined1 auStack_148 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
                    /* 0x2940  15  ?AppPath@CLogWriter@@SAXXZ */
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_148;
  memset(local_128,0,0x104);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,local_128,0x104);
  if (DVar1 != 0) {
    Log("Current Executable Path: %s",local_128);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
  return;
}




/* public: __cdecl CLogInBootICE::CLogInBootICE(int) __ptr64 */

void __thiscall CLogInBootICE::CLogInBootICE(CLogInBootICE *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  DWORD DVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  HANDLE pvVar8;
  undefined8 in_R9;
  undefined1 auStackY_278 [32];
  CHAR local_238;
  char local_237 [271];
  char local_128 [272];
  ulonglong local_18;
  
                    /* 0x29b0  1  ??0CLogInBootICE@@QEAA@H@Z */
  local_18 = DAT_18000a010 ^ (ulonglong)auStackY_278;
  *(int *)(this + 8) = param_1;
  *(undefined8 *)this = 0;
  memset(local_128,0,0x104);
  memset(&local_238,0,0x104);
  DVar4 = GetModuleFileNameA((HMODULE)0x0,&local_238,0x104);
  if ((ulonglong)DVar4 < 0x104) {
    (&local_238)[DVar4] = '\0';
    FUN_180001940(local_128,"\\HD%03d.dpt",(ulonglong)(uint)param_1,in_R9);
    pcVar5 = strrchr(&local_238,0x5c);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
    }
    pcVar5 = local_128;
    lVar3 = -1;
    do {
      lVar6 = lVar3;
      lVar3 = lVar6 + 1;
    } while (local_237[lVar6] != '\0');
    pcVar7 = local_237 + lVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pvVar8 = CreateFileA(&local_238,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    *(HANDLE *)this = pvVar8;
    if (pvVar8 == (HANDLE)0xffffffffffffffff) {
      *(undefined8 *)this = 0;
    }
    else {
      RecFileHeader(this);
    }
    __security_check_cookie(local_18 ^ (ulonglong)auStackY_278);
    return;
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




/* public: __cdecl CLogInBootICE::~CLogInBootICE(void) __ptr64 */

void __thiscall CLogInBootICE::~CLogInBootICE(CLogInBootICE *this)

{
                    /* 0x2b10  5  ??1CLogInBootICE@@QEAA@XZ */
  if (*(HANDLE *)this != (HANDLE)0x0) {
    FlushFileBuffers(*(HANDLE *)this);
    CloseHandle(*(HANDLE *)this);
    *(undefined8 *)this = 0;
  }
  return;
}




/* public: bool __cdecl CLogInBootICE::RecDiskInfo(char * __ptr64) __ptr64 */

bool __thiscall CLogInBootICE::RecDiskInfo(CLogInBootICE *this,char *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 extraout_AL;
  undefined1 auStackY_178 [32];
  DWORD local_128 [2];
  _SYSTEMTIME local_120;
  char local_108 [64];
  undefined1 local_c8 [33];
  undefined1 local_a7;
  ulonglong local_18;
  
                    /* 0x2b50  33  ?RecDiskInfo@CLogInBootICE@@QEAA_NPEAD@Z */
  local_18 = DAT_18000a010 ^ (ulonglong)auStackY_178;
  if (*(longlong *)this != 0) {
    memset(local_108,0,0xf0);
    local_128[0] = 0;
    local_120.wYear = 0;
    local_120.wMonth = 0;
    local_120.wDayOfWeek = 0;
    local_120.wDay = 0;
    local_120.wHour = 0;
    local_120.wMinute = 0;
    local_120.wSecond = 0;
    local_120.wMilliseconds = 0;
    GetLocalTime(&local_120);
    FUN_180001940(local_c8,"%d/%d/%d %d:%d:%d %s",(ulonglong)local_120._0_8_ >> 0x10 & 0xffff,
                  (ulonglong)local_120._0_8_ >> 0x30);
    if (param_1 != (char *)0x0) {
      lVar2 = -(longlong)param_1;
      do {
        cVar1 = *param_1;
        param_1[(longlong)(local_108 + lVar2)] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    local_a7 = 2;
    SetFilePointer(*(HANDLE *)this,0x10,(PLONG)0x0,0);
    WriteFile(*(HANDLE *)this,local_108,0xf0,local_128,(LPOVERLAPPED)0x0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_178);
  return (bool)extraout_AL;
}




/* public: bool __cdecl CLogInBootICE::RecSectorsInfo(unsigned __int64,char * __ptr64,int) __ptr64
    */

bool __thiscall
CLogInBootICE::RecSectorsInfo(CLogInBootICE *this,__uint64 param_1,char *param_2,int param_3)

{
  undefined1 extraout_AL;
  undefined1 auStackY_78 [32];
  DWORD local_48 [2];
  __uint64 local_40 [2];
  ulonglong local_30;
  
                    /* 0x2ce0  35  ?RecSectorsInfo@CLogInBootICE@@QEAA_N_KPEADH@Z */
  local_30 = DAT_18000a010 ^ (ulonglong)auStackY_78;
  if (*(HANDLE *)this != (HANDLE)0x0) {
    local_40[1] = 0;
    local_48[0] = 0;
    local_40[0] = param_1;
    WriteFile(*(HANDLE *)this,local_40,0x10,local_48,(LPOVERLAPPED)0x0);
    WriteFile(*(HANDLE *)this,param_2,param_3,local_48,(LPOVERLAPPED)0x0);
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_78);
  return (bool)extraout_AL;
}




/* protected: void __cdecl CLogInBootICE::RecFileHeader(void) __ptr64 */

void __thiscall CLogInBootICE::RecFileHeader(CLogInBootICE *this)

{
  undefined1 auStackY_58 [32];
  DWORD local_28 [2];
  char local_20 [16];
  ulonglong local_10;
  
                    /* 0x2d90  34  ?RecFileHeader@CLogInBootICE@@IEAAXXZ */
  local_10 = DAT_18000a010 ^ (ulonglong)auStackY_58;
  if (*(HANDLE *)this != (HANDLE)0x0) {
    builtin_strncpy(local_20,"DPT BY BOOTICE",0xf);
    local_28[0] = 0;
    local_20[0xf] = 0;
    WriteFile(*(HANDLE *)this,local_20,0x10,local_28,(LPOVERLAPPED)0x0);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_58);
  return;
}




/* bool __cdecl StartMemMonitor(unsigned __int64,unsigned __int64,bool (__cdecl*)(int,unsigned
   __int64,unsigned __int64,void * __ptr64),void * __ptr64) */

bool __cdecl
StartMemMonitor(__uint64 param_1,__uint64 param_2,_func_bool_int___uint64___uint64_void_ptr *param_3
               ,void *param_4)

{
  bool bVar1;
  
                    /* 0x2e30  37  ?StartMemMonitor@@YA_N_K0P6A_NH00PEAX@Z1@Z */
  bVar1 = (bool)FUN_1800031d0(&PTR_vftable_18000a070,param_1,param_2,param_3,param_4);
  return bVar1;
}




/* void __cdecl PauseMemMonitor(bool) */

void __cdecl PauseMemMonitor(bool param_1)

{
                    /* 0x2e60  31  ?PauseMemMonitor@@YAX_N@Z */
  DAT_18000a079 = param_1;
  return;
}




/* void __cdecl EndMemMonitor(void) */

void __cdecl EndMemMonitor(void)

{
                    /* 0x2e70  18  ?EndMemMonitor@@YAXXZ */
  if (DAT_18000a080 != (HANDLE)0x0) {
    DAT_18000a078 = 1;
                    /* WARNING: Could not recover jumptable at 0x000180002e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject(DAT_18000a080,0xffffffff);
    return;
  }
  return;
}




/* bool __cdecl CheckMemOverloaded(void) */

bool __cdecl CheckMemOverloaded(void)

{
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  int iVar1;
  HANDLE pvVar2;
  undefined1 auStack_c8 [32];
  _MEMORYSTATUS local_a8;
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  ulonglong local_18;
  
                    /* 0x2e90  16  ?CheckMemOverloaded@@YA_NXZ */
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_c8;
  if (DAT_18000a07a == '\0') {
    local_a8.dwLength = 0x38;
    local_a8._4_8_ = 0;
    local_a8.dwTotalPhys._4_4_ = 0;
    local_a8.dwAvailPhys._0_4_ = 0;
    local_a8.dwAvailPhys._4_4_ = 0;
    local_a8.dwTotalPageFile._0_4_ = 0;
    local_a8._28_8_ = 0;
    local_a8._36_8_ = 0;
    local_a8._44_8_ = 0;
    local_a8.dwAvailVirtual._4_4_ = 0;
    GlobalMemoryStatus(&local_a8);
    if (DAT_18000a098 <= CONCAT44(local_a8.dwAvailPhys._4_4_,(undefined4)local_a8.dwAvailPhys)) {
      pvVar2 = GetCurrentProcess();
      iVar1 = K32GetProcessMemoryInfo(pvVar2,local_68,0x48);
      if ((iVar1 == 0) || ((ulonglong)((local_58 - local_48) - local_38) <= DAT_18000a0a0)) {
        __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
        return (bool)extraout_AL;
      }
    }
    DAT_18000a07a = '\x01';
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return (bool)extraout_AL_00;
}




/* bool __cdecl IsMemOverloaded(void) */

bool __cdecl IsMemOverloaded(void)

{
                    /* 0x2f80  26  ?IsMemOverloaded@@YA_NXZ */
  return (bool)DAT_18000a07a;
}




bool FUN_180003030(undefined8 *param_1,HANDLE param_2)

{
  uint *puVar1;
  DWORD local_res8 [2];
  
  puVar1 = (uint *)*param_1;
  if (*(uint *)(param_1 + 1) < *puVar1) {
    return false;
  }
  local_res8[0] = 0;
  WriteFile(param_2,puVar1 + 1,*puVar1,local_res8,(LPOVERLAPPED)0x0);
  *puVar1 = 0;
  return local_res8[0] == 0;
}




void FUN_180003090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  hModule = LoadLibraryA("fsclog.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"log_write");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1,&local_res10);
    }
  }
  return;
}




undefined8 * FUN_180003130(undefined8 *param_1,uint param_2)

{
  *param_1 = MemMonitorProc::CMemMonitorManager::vftable;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    *(undefined1 *)(param_1 + 1) = 1;
    WaitForSingleObject((HANDLE)param_1[2],0xffffffff);
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800031d0(LPVOID param_1,longlong param_2,ulonglong param_3,LPVOID param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE pvVar5;
  char *pcVar6;
  HMODULE pHVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  LPVOID pvVar12;
  undefined1 auStackY_188 [32];
  DWORD local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_18000a010 ^ (ulonglong)auStackY_188;
  local_158[0] = 0;
  uVar11 = 0x19000000;
  if (0x18ffffff < param_3) {
    uVar11 = param_3;
  }
  lVar8 = 0x6400000;
  if (param_2 != 0) {
    lVar8 = param_2;
  }
  *(longlong *)((longlong)param_1 + 0x28) = lVar8;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  pvVar12 = param_4;
  memset(local_138,0,0x104);
  pvVar5 = GetCurrentProcess();
  DVar3 = GetModuleFileNameA((HMODULE)0x0,local_138,0x104);
  if (0x103 < (ulonglong)DVar3) {
    __report_rangecheckfailure();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_138[DVar3] = '\0';
  pcVar6 = strrchr(local_138,0x5c);
  if (pcVar6 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    pHVar7 = GetModuleHandleA(pcVar6 + 1);
    pvVar12 = (LPVOID)0x18;
    iVar4 = K32GetModuleInformation(pvVar5,pHVar7,&local_150);
    bVar2 = false;
    if (((iVar4 != 0) && (lVar8 = ImageNtHeader(local_150), lVar8 != 0)) &&
       (bVar2 = false, (*(byte *)(lVar8 + 0x16) & 0x20) != 0)) {
      bVar2 = true;
    }
    uVar10 = 0x20000000000;
    if (!bVar2) {
      uVar10 = 0x80000000;
    }
  }
  *(ulonglong *)((longlong)param_1 + 0x30) = uVar10;
  if (uVar10 != 0) {
    uVar9 = uVar10;
    if (uVar11 <= uVar10) {
      uVar9 = uVar11;
    }
    uVar10 = uVar10 - uVar9;
    if (uVar10 < 0x25800000) {
      uVar10 = 0x25800000;
    }
    *(ulonglong *)((longlong)param_1 + 0x30) = uVar10;
    if (*(longlong *)((longlong)param_1 + 0x10) != 0) goto LAB_180003389;
    *(undefined8 *)((longlong)param_1 + 0x20) = param_5;
    *(undefined2 *)((longlong)param_1 + 8) = 0;
    *(LPVOID *)((longlong)param_1 + 0x18) = param_4;
    pvVar12 = param_1;
    pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1800034a0,param_1,0,local_158);
    *(HANDLE *)((longlong)param_1 + 0x10) = pvVar5;
    if (pvVar5 != (HANDLE)0xffffffffffffffff) goto LAB_180003389;
  }
  DVar3 = GetLastError();
  FUN_180003090(L"[CMemMonitorManager]%S fail,last err : %d!",
                "MemMonitorProc::CMemMonitorManager::StartMemMonitor",(ulonglong)DVar3,pvVar12);
LAB_180003389:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_188);
  return;
}




void FUN_1800034a0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  HANDLE pvVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  _MEMORYSTATUS local_a8;
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_c8;
  pvVar6 = GetCurrentProcess();
  cVar4 = *(char *)(param_1 + 8);
  while (cVar4 == '\0') {
    Sleep(200);
    if (*(char *)(param_1 + 9) == '\0') {
      local_a8.dwLength = 0x38;
      local_a8._4_8_ = 0;
      local_a8.dwTotalPhys._4_4_ = 0;
      local_a8.dwAvailPhys._0_4_ = 0;
      local_a8.dwAvailPhys._4_4_ = 0;
      local_a8.dwTotalPageFile._0_4_ = 0;
      local_a8._28_8_ = 0;
      local_a8._36_8_ = 0;
      local_a8._44_8_ = 0;
      local_a8.dwAvailVirtual._4_4_ = 0;
      GlobalMemoryStatus(&local_a8);
      uVar2 = CONCAT44(local_a8.dwAvailPhys._4_4_,(undefined4)local_a8.dwAvailPhys);
      uVar7 = 0;
      iVar5 = K32GetProcessMemoryInfo(pvVar6,local_68,0x48);
      if (iVar5 != 0) {
        uVar7 = (local_58 - local_48) - local_38;
      }
      bVar3 = -(uVar2 < *(ulonglong *)(param_1 + 0x28)) & 2;
      bVar1 = bVar3 | 1;
      if (uVar7 <= *(ulonglong *)(param_1 + 0x30)) {
        bVar1 = bVar3;
      }
      *(bool *)(param_1 + 10) = bVar1 != 0;
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        cVar4 = (**(code **)(param_1 + 0x18))(bVar1,uVar2,uVar7,*(undefined8 *)(param_1 + 0x20));
        *(bool *)(param_1 + 8) = cVar4 == '\0';
      }
    }
    cVar4 = *(char *)(param_1 + 8);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_1800035f0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  HANDLE pvVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  _MEMORYSTATUS local_68;
  ulonglong local_18;
  
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_88;
  pvVar6 = GetCurrentProcess();
  cVar4 = *(char *)(param_1 + 8);
  while (cVar4 == '\0') {
    Sleep(200);
    if (*(char *)(param_1 + 9) == '\0') {
      local_68.dwLength = 0x38;
      local_68._4_8_ = 0;
      local_68.dwTotalPhys._4_4_ = 0;
      local_68.dwAvailPhys._0_4_ = 0;
      local_68.dwAvailPhys._4_4_ = 0;
      local_68.dwTotalPageFile._0_4_ = 0;
      local_68.dwTotalPageFile._4_4_ = 0;
      local_68.dwAvailPageFile._0_4_ = 0;
      local_68.dwAvailPageFile._4_4_ = 0;
      local_68.dwTotalVirtual._0_4_ = 0;
      local_68.dwTotalVirtual._4_4_ = 0;
      local_68.dwAvailVirtual._0_4_ = 0;
      local_68.dwAvailVirtual._4_4_ = 0;
      GlobalMemoryStatus(&local_68);
      uVar2 = CONCAT44(local_68.dwAvailPhys._4_4_,(undefined4)local_68.dwAvailPhys);
      uVar7 = 0;
      iVar5 = K32GetProcessMemoryInfo(pvVar6,&local_68,0x48);
      if (iVar5 != 0) {
        uVar7 = (CONCAT44(local_68.dwAvailPhys._4_4_,(undefined4)local_68.dwAvailPhys) -
                CONCAT44(local_68.dwAvailPageFile._4_4_,(undefined4)local_68.dwAvailPageFile)) -
                CONCAT44(local_68.dwAvailVirtual._4_4_,(undefined4)local_68.dwAvailVirtual);
      }
      bVar3 = -(uVar2 < *(ulonglong *)(param_1 + 0x28)) & 2;
      bVar1 = bVar3 | 1;
      if (uVar7 <= *(ulonglong *)(param_1 + 0x30)) {
        bVar1 = bVar3;
      }
      *(bool *)(param_1 + 10) = bVar1 != 0;
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        cVar4 = (**(code **)(param_1 + 0x18))(bVar1,uVar2,uVar7,*(undefined8 *)(param_1 + 0x20));
        *(bool *)(param_1 + 8) = cVar4 == '\0';
      }
    }
    cVar4 = *(char *)(param_1 + 8);
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_180003840(void)

{
  undefined1 auStack_68 [32];
  _MEMORYSTATUS local_48;
  ulonglong local_10;
  
  local_10 = DAT_18000a010 ^ (ulonglong)auStack_68;
  local_48.dwLength = 0x38;
  local_48._4_8_ = 0;
  local_48._12_8_ = 0;
  local_48._20_8_ = 0;
  local_48._28_8_ = 0;
  local_48._36_8_ = 0;
  local_48._44_8_ = 0;
  local_48.dwAvailVirtual._4_4_ = 0;
  GlobalMemoryStatus(&local_48);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_1800038a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_88;
  iVar1 = K32GetProcessMemoryInfo(param_2,local_68,0x48);
  if (iVar1 != 0) {
    __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
    return;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_180003910(void)

{
  HMODULE hModule;
  
  hModule = LoadLibraryA("fsclog.dll");
  if (hModule != (HMODULE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180003934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    GetProcAddress(hModule,"log_write");
    return;
  }
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18000a010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180003a60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
                    /* WARNING: Could not recover jumptable at 0x000180003ab9. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180003aea;
  capture_previous_context((PCONTEXT)&DAT_18000a210);
  _DAT_18000a180 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000a2a8 = puVar3 + 0x40;
  _DAT_18000a290 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000a170 = 0xc0000409;
  _DAT_18000a174 = 1;
  _DAT_18000a188 = 1;
  DAT_18000a190 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000a010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000a008;
  *(undefined8 *)(puVar3 + -8) = 0x180003b8c;
  DAT_18000a308 = _DAT_18000a180;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180006330);
  return;
}




/* Library Function - Single Match
    __report_rangecheckfailure
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __report_rangecheckfailure(void)

{
  __report_securityfailure(8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180003bd2;
  capture_current_context((PCONTEXT)&DAT_18000a210);
  _DAT_18000a180 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000a2a8 = puVar3 + 0x30;
  _DAT_18000a170 = 0xc0000409;
  _DAT_18000a174 = 1;
  _DAT_18000a188 = 1;
  DAT_18000a190 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180003c3e;
  DAT_18000a308 = _DAT_18000a180;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180006330);
  return;
}




/* Library Function - Single Match
    capture_current_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
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




void FUN_180003e7c(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180004854();
  _configure_narrow_argv(uVar1 & 0xffffffff);
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
LAB_180003f4e:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000a6e8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000a6e8;
        pvVar1 = DAT_18000a6e8;
      }
      DAT_18000a6e8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180003f4e;
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
    uVar3 = FUN_180004854();
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
  
  uVar1 = FUN_1800040d8(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180004dc4();
  if (cVar1 != '\0') {
    cVar1 = FUN_180004dc4();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180004dc8();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180004dc8();
  FUN_180004dc8();
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
    _execute_onexit_table(&DAT_18000a6f8);
    return;
  }
  uVar2 = FUN_180004dd4();
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
  FUN_180004dd0();
  FUN_180004dd0();
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
    DAT_18000a6f0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180004dc0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180004dc0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180004dcc();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800040d8(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000a6f1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000a010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000a010;
      _DAT_18000a6f8 = in_RAX;
      uRam000000018000a700 = in_RAX;
      _DAT_18000a708 = in_RAX;
      _DAT_18000a710 = in_RAX;
      uRam000000018000a718 = in_RAX;
      _DAT_18000a720 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000a6f8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000a710), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000a6f1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000423e) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180004227;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180004227:
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
    DAT_18000a6e8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000a6f0 == '\0') || (param_2 == '\0')) {
    FUN_180004dcc();
    FUN_180004dcc();
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
  
  bVar2 = (byte)DAT_18000a010 & 0x3f;
  if (((DAT_18000a010 ^ _DAT_18000a6f8) >> bVar2 | (DAT_18000a010 ^ _DAT_18000a6f8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000a6f8,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
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
    if (DAT_18000a728 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000a728 = DAT_18000a728 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000a6e0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180004c20();
      FID_conflict__RTC_Initialize();
      DAT_18000a6e0 = 0;
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
    if (DAT_18000a6e0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000a6e0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180004c10();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_1800062e8,&DAT_1800062f0);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_1800062c8,&DAT_1800062e0);
        DAT_18000a6e0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180004c50();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000a728 = DAT_18000a728 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180004604) */
/* WARNING: Removing unreachable block (ram,0x000180004593) */
/* WARNING: Removing unreachable block (ram,0x000180004647) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000a728 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = DllMain(param_1,param_2);
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      DllMain(param_1,0);
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




/* WARNING: Removing unreachable block (ram,0x0001800047a6) */
/* WARNING: Removing unreachable block (ram,0x000180004724) */
/* WARNING: Removing unreachable block (ram,0x0001800046ff) */
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
  
  DAT_18000a01c = 2;
  _DAT_18000a018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000a020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000a72c = DAT_18000a72c | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000a72c = DAT_18000a72c | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000a018 = 2;
    DAT_18000a01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000a01c = 0xe;
      _DAT_18000a018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000a018 = 5;
        DAT_18000a01c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180004854(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000a030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180004868(void)

{
  _DAT_18000a730 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800048a3;
  FUN_180004868();
  *(undefined8 *)(puVar4 + -8) = 0x1800048b4;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800048be;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1800048d8;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180004919;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000494b;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000496d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000498e;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180004999;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800049a9;
    FUN_180004868();
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




ulonglong FUN_180004ad4(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18 [2];
  
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res10);
  local_res8 = local_res10;
  DVar1 = GetCurrentThreadId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res18);
  return ((ulonglong)(uint)local_res18[0]._0_4_ << 0x20 ^
          CONCAT44(local_res18[0].s.HighPart,local_res18[0].s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
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
  
  if (DAT_18000a010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000a010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000a010 == 0x2b992ddfa232) {
      DAT_18000a010 = 0x2b992ddfa233;
    }
  }
  DAT_18000a008 = ~DAT_18000a010;
  return;
}




/* Library Function - Single Match
    DllMain
   
   Library: Visual Studio 2017 Release */

undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}




void FUN_180004c10(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180004c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000a740);
  return;
}




void FUN_180004c20(void)

{
  __std_type_info_destroy_list(&DAT_18000a740);
  return;
}




undefined * FUN_180004c2c(void)

{
  return &DAT_18000a750;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800017a0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180004c2c();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180004c50(void)

{
  return &DAT_18000a768;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1800081a0; puVar1 < &DAT_1800081a0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_1800081b0; puVar1 < &DAT_1800081b0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180004dc0(void)

{
  return 1;
}




undefined1 FUN_180004dc4(void)

{
  return 1;
}




undefined1 FUN_180004dc8(void)

{
  return 1;
}




undefined1 FUN_180004dcc(void)

{
  return 1;
}




undefined1 FUN_180004dd0(void)

{
  return 1;
}




undefined8 FUN_180004dd4(void)

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
/* Library Function - Single Match
    _alloca_probe
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void _alloca_probe(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (undefined1 *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180004f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180004f70(void)

{
  FUN_180001160();
  return;
}




void Unwind_180004f80(void)

{
  FUN_180001160();
  return;
}




void Unwind_180004f90(void)

{
  FUN_180001160();
  return;
}




void Unwind_180004fa0(void)

{
  FUN_180001160();
  return;
}




void FUN_180004fc4(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180004fdb(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180004ff7(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005030(void)

{
  DWORD DVar1;
  
  PTR_vftable_18000a038 = (undefined *)CFileMappingLog::vftable;
  if ((longlong)DAT_18000a048 - 1U < 0xfffffffffffffffe) {
    DVar1 = WaitForSingleObject(DAT_18000a058,1000);
    if ((DVar1 == 0) && (DAT_18000a050 != (undefined4 *)0x0)) {
      FUN_180003030((undefined8 *)&DAT_18000a060,DAT_18000a048);
      *DAT_18000a050 = 0;
      if (DAT_18000a050 != (undefined4 *)0x0) {
        _DAT_18000a060 = DAT_18000a050;
        _DAT_18000a068 = 0x10000;
        *DAT_18000a050 = 0;
      }
      ReleaseMutex(DAT_18000a058);
    }
    else {
      OutputDebugStringA("Failed to request the permission to write to log file!\n");
    }
  }
  if (DAT_18000a050 != (undefined4 *)0x0) {
    UnmapViewOfFile(DAT_18000a050);
  }
  if (DAT_18000a040 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a040);
  }
  if (DAT_18000a058 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a058);
  }
  if (DAT_18000a048 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a048);
  }
  PTR_vftable_18000a038 = (undefined *)IEsLog::vftable;
  return;
}




void FUN_180005130(void)

{
  PTR_vftable_18000a070 = (undefined *)MemMonitorProc::CMemMonitorManager::vftable;
  if (DAT_18000a080 != (HANDLE)0x0) {
    DAT_18000a078 = 1;
                    /* WARNING: Could not recover jumptable at 0x000180005156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject(DAT_18000a080,0xffffffff);
    return;
  }
  return;
}



