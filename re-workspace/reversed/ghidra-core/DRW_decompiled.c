
void FUN_140001050(undefined8 *param_1)

{
  *param_1 = CFileMappingLog::vftable;
  if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
    UnmapViewOfFile((LPCVOID)param_1[2]);
  }
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((HANDLE)param_1[3] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[3]);
  }
  *param_1 = IEsLog::vftable;
  return;
}




undefined8 FUN_1400010a0(void)

{
  return 1;
}




undefined8 FUN_1400010b0(longlong param_1,void *param_2,uint param_3)

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




undefined * FUN_140001160(void)

{
  return &DAT_14000cdd8;
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
  puVar2 = (undefined8 *)FUN_140001160();
  iVar1 = __stdio_common_vswprintf(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
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
  puVar2 = (undefined8 *)FUN_140001160();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* Library Function - Single Match
    snprintf
   
   Library: Visual Studio 2019 Release */

int snprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_140001160();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




void FUN_140001290(longlong *param_1,undefined8 param_2,undefined8 param_3,LPCSTR param_4,
                  longlong *param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong _Size;
  longlong *lpDefault;
  ulonglong uVar5;
  void *pvVar6;
  undefined1 auStackY_ae8 [32];
  undefined8 local_a88;
  longlong lStack_a80;
  ulonglong local_a78;
  ulonglong uStack_a70;
  CHAR local_a68;
  char acStack_a67 [271];
  char local_958 [272];
  CHAR local_848 [1024];
  CHAR local_448 [1040];
  ulonglong local_38;
  
  local_38 = DAT_14000c010 ^ (ulonglong)auStackY_ae8;
  if (param_4 == (LPCSTR)0x0) {
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_1400058d0(param_1,&DAT_14000892b);
    if ((ulonglong)param_5[3] < 0x10) goto LAB_1400015c9;
    pvVar3 = (void *)*param_5;
    pvVar6 = pvVar3;
    if ((0xfff < param_5[3] + 1U) &&
       (pvVar6 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    memset(local_448,0,0x410);
    pvVar6 = (void *)0x0;
    if ((DAT_14000cdd0 == 0) || (DAT_14000c9d0 == '\0')) {
      local_a88 = (void *)0x0;
      lStack_a80 = 0;
      local_a78 = 0;
      uStack_a70 = 0;
      memset(local_958,0,0x104);
      memset(local_848,0,0x400);
      GetModuleFileNameA((HMODULE)0x0,local_848,0x3ff);
      _splitpath_s(local_848,(char *)&local_a88,0x20,local_958,0x104,(char *)0x0,0,(char *)0x0,0);
      DAT_14000cdd0 = FID_conflict_sprintf_s((wchar_t *)&DAT_14000c9d0,0x3ff,L"猥猥",&local_a88);
    }
    FUN_140006040(local_448,&DAT_140008930,&DAT_14000c9d0,"config/version.ini");
    memset(&local_a68,0,0x104);
    lpDefault = param_5;
    if (0xf < (ulonglong)param_5[3]) {
      lpDefault = (longlong *)*param_5;
    }
    GetPrivateProfileStringA("ver",param_4,(LPCSTR)lpDefault,&local_a68,0x104,local_448);
    uStack_a70 = 0xf;
    local_a88 = (void *)((ulonglong)local_a88 & 0xffffffffffffff00);
    _Size = 0xffffffffffffffff;
    do {
      uVar5 = _Size;
      _Size = uVar5 + 1;
    } while (acStack_a67[uVar5] != '\0');
    if (_Size < 0x10) {
      local_a78 = _Size;
      memmove(&local_a88,&local_a68,_Size);
      *(undefined1 *)((longlong)&local_a88 + uVar5 + 1) = 0;
    }
    else {
      if (0x7fffffffffffffff < _Size) {
        FUN_140006360();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar2 = _Size | 0xf;
      uVar5 = 0x7fffffffffffffff;
      if ((uVar2 < 0x8000000000000000) && (uVar5 = uVar2, uVar2 < 0x16)) {
        uVar5 = 0x16;
      }
      uVar2 = uVar5 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 != 0) {
          pvVar6 = operator_new(uVar2);
        }
      }
      else {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar2) {
          uVar4 = 0xffffffffffffffff;
        }
        pvVar3 = operator_new(uVar4);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        pvVar6 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar6 - 8) = pvVar3;
      }
      local_a78 = _Size;
      uStack_a70 = uVar5;
      memcpy(pvVar6,&local_a68,_Size);
      *(undefined1 *)((longlong)pvVar6 + _Size) = 0;
      local_a88 = pvVar6;
    }
    *param_1 = (longlong)local_a88;
    param_1[1] = lStack_a80;
    param_1[2] = local_a78;
    param_1[3] = uStack_a70;
    if ((ulonglong)param_5[3] < 0x10) goto LAB_1400015c9;
    pvVar3 = (void *)*param_5;
    pvVar6 = pvVar3;
    if ((0xfff < param_5[3] + 1U) &&
       (pvVar6 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(pvVar6);
LAB_1400015c9:
  param_5[2] = 0;
  param_5[3] = 0xf;
  *(undefined1 *)param_5 = 0;
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_ae8);
  return;
}




void FUN_140001620(void)

{
  void *pvVar1;
  LSTATUS LVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStackY_1b8 [32];
  DWORD local_188 [2];
  HKEY local_180 [2];
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined8 local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  BYTE local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_14000c010 ^ (ulonglong)auStackY_1b8;
  local_188[0] = 0x104;
  local_188[1] = 1;
  local_180[0] = (HKEY)0x0;
  memset(local_128,0,0x104);
  LVar2 = RegOpenKeyExA((HKEY)0xffffffff80000002,"SOFTWARE\\EASEUS\\DRW\\Language",0,1,local_180);
  if (LVar2 == 0) {
    RegQueryValueExA(local_180[0],"Language",(LPDWORD)0x0,local_188 + 1,local_128,local_188);
    RegCloseKey(local_180[0]);
  }
  pcVar8 = "Deutsch";
  lVar4 = 0;
  do {
    lVar5 = lVar4 + 1;
    if (local_128[lVar4] != "Deutsch"[lVar4]) {
      iVar3 = strcmp((char *)local_128,"Japanese");
      if (iVar3 == 0) {
        DAT_14000c144 = 4;
        goto LAB_1400019fc;
      }
      pcVar7 = "easeus";
      local_160 = 0;
      local_158 = 0xf;
      local_170 = '\0';
      FUN_1400058d0((longlong *)&local_170,"easeus");
      FUN_140001290((longlong *)&local_150,pcVar7,pcVar8,"versionFrom",(longlong *)&local_170);
      pcVar7 = &local_150;
      if (0xf < local_138) {
        pcVar7 = (char *)CONCAT71(uStack_14f,local_150);
      }
      iVar3 = _stricmp(pcVar7,"cn");
      if (0xf < local_138) {
        pvVar1 = (void *)CONCAT71(uStack_14f,local_150);
        pvVar6 = pvVar1;
        if ((0xfff < local_138 + 1) &&
           (pvVar6 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar6);
      }
      if (iVar3 != 0) {
        pcVar7 = "easeus";
        local_140 = 0;
        local_138 = 0xf;
        local_150 = '\0';
        FUN_1400058d0((longlong *)&local_150,"easeus");
        FUN_140001290((longlong *)&local_170,pcVar7,pcVar8,"channelName",(longlong *)&local_150);
        pcVar7 = &local_170;
        if (0xf < local_158) {
          pcVar7 = (char *)CONCAT71(uStack_16f,local_170);
        }
        iVar3 = _stricmp(pcVar7,"jz");
        if (0xf < local_158) {
          pvVar1 = (void *)CONCAT71(uStack_16f,local_170);
          pvVar6 = pvVar1;
          if ((0xfff < local_158 + 1) &&
             (pvVar6 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar6);
        }
        if (iVar3 != 0) {
          pcVar7 = "easeus";
          local_140 = 0;
          local_138 = 0xf;
          local_150 = '\0';
          FUN_1400058d0((longlong *)&local_150,"easeus");
          FUN_140001290((longlong *)&local_170,pcVar7,pcVar8,"channelName",(longlong *)&local_150);
          pcVar7 = &local_170;
          if (0xf < local_158) {
            pcVar7 = (char *)CONCAT71(uStack_16f,local_170);
          }
          iVar3 = _stricmp(pcVar7,"comeorg");
          if (0xf < local_158) {
            pvVar1 = (void *)CONCAT71(uStack_16f,local_170);
            pvVar6 = pvVar1;
            if ((0xfff < local_158 + 1) &&
               (pvVar6 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar6);
          }
          if (iVar3 != 0) {
            pcVar7 = "easeus";
            local_140 = 0;
            local_138 = 0xf;
            local_150 = '\0';
            FUN_1400058d0((longlong *)&local_150,"easeus");
            FUN_140001290((longlong *)&local_170,pcVar7,pcVar8,"channelName",(longlong *)&local_150)
            ;
            pcVar8 = &local_170;
            if (0xf < local_158) {
              pcVar8 = (char *)CONCAT71(uStack_16f,local_170);
            }
            iVar3 = _stricmp(pcVar8,"fuxin");
            if (0xf < local_158) {
              pvVar1 = (void *)CONCAT71(uStack_16f,local_170);
              pvVar6 = pvVar1;
              if ((0xfff < local_158 + 1) &&
                 (pvVar6 = *(void **)((longlong)pvVar1 + -8),
                 0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar6);
            }
            DAT_14000c144 = 2;
            if (iVar3 != 0) goto LAB_1400019fc;
          }
        }
      }
      DAT_14000c144 = 1;
      goto LAB_1400019fc;
    }
    lVar4 = lVar5;
  } while (lVar5 != 8);
  DAT_14000c144 = 3;
LAB_1400019fc:
  DAT_14000c9c0 = 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1b8);
  return;
}




void FUN_140001a40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140001a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(param_1,param_2,0,0);
  return;
}




undefined4 * FUN_140001a50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_140001a60(undefined4 param_1)

{
  undefined4 local_res10 [6];
  
  FUN_140001a50(local_res10,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_res10,(ThrowInfo *)&DAT_14000a400);
}




ushort * FUN_140001aa0(HMODULE param_1,HRSRC param_2,uint param_3)

{
  DWORD DVar1;
  HGLOBAL hResData;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  
  hResData = LoadResource(param_1,param_2);
  if ((hResData != (HGLOBAL)0x0) &&
     (puVar2 = (ushort *)LockResource(hResData), puVar2 != (ushort *)0x0)) {
    DVar1 = SizeofResource(param_1,param_2);
    puVar3 = (ushort *)((ulonglong)DVar1 + (longlong)puVar2);
    for (uVar4 = param_3 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar3 <= puVar2) {
        return (ushort *)0x0;
      }
      puVar2 = puVar2 + (ulonglong)*puVar2 + 1;
    }
    if ((puVar2 < puVar3) && (*puVar2 != 0)) {
      return puVar2;
    }
  }
  return (ushort *)0x0;
}




void FUN_140001b30(longlong param_1,SIZE_T param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140001b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapAlloc(*(HANDLE *)(param_1 + 8),0,param_2);
  return;
}




void FUN_140001b40(longlong param_1,LPVOID param_2)

{
  if (param_2 != (LPVOID)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140001b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(*(HANDLE *)(param_1 + 8),0,param_2);
    return;
  }
  return;
}




LPVOID FUN_140001b60(longlong param_1,LPVOID param_2,SIZE_T param_3)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  
  hHeap = *(HANDLE *)(param_1 + 8);
  if (param_2 == (LPVOID)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140001b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = HeapAlloc(hHeap,0,param_3);
    return pvVar1;
  }
  if (param_3 == 0) {
    HeapFree(hHeap,0,param_2);
    return (LPVOID)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140001b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapReAlloc(hHeap,0,param_2,param_3);
  return pvVar1;
}




void FUN_140001bb0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140001bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapSize(*(undefined8 *)(param_1 + 8),0,param_2);
  return;
}




/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl ATL::CWin32Heap::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall ATL::CWin32Heap::_scalar_deleting_destructor_(CWin32Heap *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((this[0x10] != (CWin32Heap)0x0) && (*(HANDLE *)(this + 8) != (HANDLE)0x0)) {
    HeapDestroy(*(HANDLE *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140001c10(void)

{
  longlong lVar1;
  
                    /* WARNING: Load size is inaccurate */
  lVar1 = *ThreadLocalStoragePointer;
  if (*(int *)(lVar1 + 4) < DAT_14000cde0) {
    _Init_thread_header(&DAT_14000cde0);
    if (DAT_14000cde0 == -1) {
      DAT_14000cdf0 = GetProcessHeap();
      DAT_14000cdf8 = 0;
      _DAT_14000cde8 = ATL::CWin32Heap::vftable;
      atexit((_func_5014 *)&LAB_140007c20);
      _Init_thread_footer(&DAT_14000cde0);
    }
  }
  if (*(int *)(lVar1 + 4) < DAT_14000ce00) {
    _Init_thread_header(&DAT_14000ce00);
    if (DAT_14000ce00 == -1) {
      _DAT_14000ce28 = 2;
      _DAT_14000ce08 = ATL::CAtlStringMgr::vftable;
      _DAT_14000ce18 = &DAT_14000ce08;
      _DAT_14000ce10 = &DAT_14000cde8;
      _DAT_14000ce20 = 0;
      _DAT_14000ce30 = 0;
      atexit((_func_5014 *)&DAT_140007c10);
      _Init_thread_footer(&DAT_14000ce00);
      return &DAT_14000ce08;
    }
  }
  return &DAT_14000ce08;
}




longlong * FUN_140001d20(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((-1 < param_2) && (0 < 0x7fffffff - param_2)) &&
     (uVar3 = param_2 + 8U & 0xfffffff8, param_2 + 1 <= (int)uVar3)) {
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)(int)uVar3;
      if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) <
          (ulonglong)(longlong)param_3) {
        return (longlong *)0x0;
      }
      uVar4 = (longlong)(int)uVar3 * (longlong)param_3;
      if (0xffffffffffffffe7 < uVar4) {
        return (longlong *)0x0;
      }
    }
    plVar2 = (longlong *)HeapAlloc(*(HANDLE *)(*(longlong *)(param_1 + 8) + 8),0,uVar4 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = param_1;
      *(uint *)((longlong)plVar2 + 0xc) = uVar3 - 1;
      *(undefined4 *)(plVar2 + 2) = 1;
      *(undefined4 *)(plVar2 + 1) = 0;
      return plVar2;
    }
  }
  return (longlong *)0x0;
}




void FUN_140001dc0(longlong param_1,LPVOID param_2)

{
  if (param_2 != (LPVOID)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140001dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(*(HANDLE *)(*(longlong *)(param_1 + 8) + 8),0,param_2);
    return;
  }
  return;
}




LPVOID FUN_140001de0(longlong param_1,LPVOID param_2,int param_3,ulonglong param_4)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((((-1 < param_3) && (0 < 0x7fffffff - param_3)) &&
      (uVar4 = param_3 + 8U & 0xfffffff8, param_3 + 1 <= (int)uVar4)) &&
     ((uVar3 = (ulonglong)uVar4 * (param_4 & 0xffffffff), uVar3 < 0x100000000 &&
      (uVar2 = (uint)uVar3, uVar2 < 0xffffffe8)))) {
    uVar3 = (ulonglong)(uVar2 + 0x18);
    hHeap = *(HANDLE *)(*(longlong *)(param_1 + 8) + 8);
    if (param_2 == (LPVOID)0x0) {
      pvVar1 = HeapAlloc(hHeap,0,uVar3);
    }
    else {
      if (uVar3 == 0) {
        HeapFree(hHeap,0,param_2);
        return (LPVOID)0x0;
      }
      pvVar1 = HeapReAlloc(hHeap,0,param_2,uVar3);
    }
    if (pvVar1 != (LPVOID)0x0) {
      *(uint *)((longlong)pvVar1 + 0xc) = uVar4 - 1;
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}




longlong FUN_140001e80(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return param_1 + 0x10;
}




undefined8 FUN_140001e90(undefined8 param_1)

{
  return param_1;
}




void * FUN_140001ea0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140001ed0(undefined8 param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  void *pvVar1;
  LSTATUS LVar2;
  void *pvVar3;
  LPCWSTR pWVar4;
  ulonglong uVar5;
  undefined1 auStackY_288 [32];
  DWORD local_258;
  DWORD local_254;
  HKEY local_250;
  undefined8 local_248;
  LPCWSTR local_240;
  LPCWSTR local_238;
  short local_228 [264];
  ulonglong local_18;
  
  local_248 = 0xfffffffffffffffe;
  local_18 = DAT_14000c010 ^ (ulonglong)auStackY_288;
  local_258 = 0x104;
  local_240 = param_2;
  local_238 = param_3;
  memset(local_228,0,0x208);
  pWVar4 = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pWVar4 = *(LPCWSTR *)param_2;
  }
  LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000002,pWVar4,0,0x20019,&local_250);
  if (LVar2 == 0) {
    if (*(longlong *)(param_3 + 8) == 0) {
      pWVar4 = (LPCWSTR)0x0;
    }
    else {
      pWVar4 = param_3;
      if (7 < *(ulonglong *)(param_3 + 0xc)) {
        pWVar4 = *(LPCWSTR *)param_3;
      }
    }
    LVar2 = RegQueryValueExW(local_250,pWVar4,(LPDWORD)0x0,&local_254,(LPBYTE)local_228,&local_258);
    if (LVar2 == 0) {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar5 = uVar5 + 1;
      } while (local_228[uVar5] != 0);
      FUN_140005740(&DAT_14000c148,local_228,uVar5);
    }
  }
  RegCloseKey((HKEY)0xffffffff80000002);
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pvVar1 = *(void **)param_2;
    pvVar3 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0xc) * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  param_2[8] = L'\0';
  param_2[9] = L'\0';
  param_2[10] = L'\0';
  param_2[0xb] = L'\0';
  param_2[0xc] = L'\a';
  param_2[0xd] = L'\0';
  param_2[0xe] = L'\0';
  param_2[0xf] = L'\0';
  *param_2 = L'\0';
  if (7 < *(ulonglong *)(param_3 + 0xc)) {
    pvVar1 = *(void **)param_3;
    pvVar3 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_3 + 0xc) * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  param_3[8] = L'\0';
  param_3[9] = L'\0';
  param_3[10] = L'\0';
  param_3[0xb] = L'\0';
  param_3[0xc] = L'\a';
  param_3[0xd] = L'\0';
  param_3[0xe] = L'\0';
  param_3[0xf] = L'\0';
  *param_3 = L'\0';
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_288);
  return;
}




undefined8 * FUN_1400020b0(undefined8 *param_1)

{
  WCHAR *pWVar1;
  WCHAR local_50 [8];
  undefined8 local_40;
  undefined8 local_38;
  WCHAR local_30 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  if (DAT_14000c158 == 0) {
    local_40 = 0;
    local_38 = 7;
    local_50[0] = L'\0';
    FUN_140005740((longlong *)local_50,L"Testid",6);
    local_20 = 0;
    local_18 = 7;
    local_30[0] = L'\0';
    pWVar1 = local_30;
    FUN_140005740((longlong *)pWVar1,L"SOFTWARE\\EASEUS\\DRW\\Version",0x1b);
    FUN_140001ed0(pWVar1,local_30,local_50);
  }
  FUN_1400055e0(param_1,&DAT_14000c148);
  return param_1;
}




void FUN_140002160(longlong *param_1)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  undefined1 auStack_258 [32];
  longlong *local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_14000c010 ^ (ulonglong)auStack_258;
  local_238 = param_1;
  memset(local_228,0,0x20a);
  GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
  pwVar1 = wcsrchr(local_228,L'\\');
  uVar2 = 0xffffffffffffffff;
  pwVar1[1] = L'\0';
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (local_228[uVar2] != L'\0');
  FUN_140005740(param_1,local_228,uVar2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




DWORD FUN_140002220(LPCWSTR param_1,LPWSTR param_2)

{
  void *pvVar1;
  DWORD DVar2;
  BOOL BVar3;
  LPCWSTR lpApplicationName;
  void *pvVar4;
  LPWSTR lpCommandLine;
  DWORD local_a8 [2];
  _PROCESS_INFORMATION local_a0;
  _STARTUPINFOW local_88;
  
  local_a8[0] = 0;
  memset(&local_88.field_0x4,0,100);
  local_88.cb = 0x68;
  local_a0.hProcess = (HANDLE)0x0;
  local_a0.hThread = (HANDLE)0x0;
  local_a0.dwProcessId = 0;
  local_a0.dwThreadId = 0;
  lpCommandLine = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    lpCommandLine = *(LPWSTR *)param_2;
  }
  lpApplicationName = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    lpApplicationName = *(LPCWSTR *)param_1;
  }
  BVar3 = CreateProcessW(lpApplicationName,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_88,&local_a0
                        );
  if ((BVar3 == 0) || (BVar3 = GetExitCodeProcess(local_a0.hProcess,local_a8), BVar3 == 0)) {
    local_a8[0] = 0xffffffff;
  }
  else {
    CloseHandle(local_a0.hProcess);
    CloseHandle(local_a0.hThread);
  }
  DVar2 = local_a8[0];
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pvVar1 = *(void **)param_1;
    pvVar4 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0xc) * 2 + 2) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) goto LAB_14000239a;
    free(pvVar4);
  }
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  *param_1 = L'\0';
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pvVar1 = *(void **)param_2;
    pvVar4 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_2 + 0xc) * 2 + 2) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
LAB_14000239a:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  param_2[8] = L'\0';
  param_2[9] = L'\0';
  param_2[10] = L'\0';
  param_2[0xb] = L'\0';
  param_2[0xc] = L'\a';
  param_2[0xd] = L'\0';
  param_2[0xe] = L'\0';
  param_2[0xf] = L'\0';
  *param_2 = L'\0';
  return DVar2;
}




void FUN_1400023b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  void *pvVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  LPWSTR pWVar10;
  void **ppvVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  undefined8 ***pppuVar16;
  ulonglong uVar17;
  undefined1 auStackY_208 [32];
  undefined8 ***local_1c0;
  undefined8 **ppuStack_1b8;
  undefined8 **local_1b0;
  undefined8 **ppuStack_1a8;
  undefined8 ***local_1a0;
  undefined8 **ppuStack_198;
  undefined8 **local_190;
  undefined8 **ppuStack_188;
  undefined8 ***local_180;
  undefined8 **ppuStack_178;
  undefined8 **local_170;
  undefined8 **ppuStack_168;
  undefined8 ***local_160;
  undefined8 **ppuStack_158;
  undefined8 **local_150;
  undefined8 **ppuStack_148;
  undefined8 ***local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  ulonglong uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulonglong uStack_108;
  undefined8 ***local_100;
  undefined8 **ppuStack_f8;
  undefined8 **local_f0;
  undefined8 **ppuStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 **local_a0;
  undefined8 **ppuStack_98;
  undefined8 **local_90;
  undefined8 **ppuStack_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  undefined8 local_70;
  ulonglong uStack_68;
  void *local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14000c010 ^ (ulonglong)auStackY_208;
  local_90 = (undefined8 ***)0x0;
  ppuStack_88 = (undefined8 ***)0x7;
  local_a0 = (undefined8 **)((ulonglong)local_a0 & 0xffffffffffff0000);
  if (param_3[2] == 0) {
    if (DAT_14000c158 == 0) {
      local_130 = 0;
      uStack_128 = 7;
      local_140 = (undefined8 ***)((ulonglong)local_140 & 0xffffffffffff0000);
      FUN_140005740((longlong *)&local_140,L"Testid",6);
      local_d0 = 0;
      uStack_c8 = 7;
      local_e0 = (void *)((ulonglong)local_e0 & 0xffffffffffff0000);
      ppvVar11 = &local_e0;
      FUN_140005740((longlong *)ppvVar11,L"SOFTWARE\\EASEUS\\DRW\\Version",0x1b);
      FUN_140001ed0(ppvVar11,(LPCWSTR)&local_e0,(LPCWSTR)&local_140);
    }
    puVar13 = &DAT_14000c148;
    FUN_1400055e0(&local_100,&DAT_14000c148);
    ppppuVar8 = &local_100;
    if (7 < ppuStack_e8) {
      ppppuVar8 = (undefined8 ****)local_100;
    }
    puVar13 = FUN_1400060a0(&local_c0,puVar13,param_1);
    lVar3 = puVar13[2];
    if ((ulonglong)(puVar13[3] - lVar3) < 0xc) {
      puVar13 = FUN_1400061b0(puVar13,0xc,param_1,L"\" Activity \"",0xc);
    }
    else {
      puVar13[2] = lVar3 + 0xc;
      puVar9 = puVar13;
      if (7 < (ulonglong)puVar13[3]) {
        puVar9 = (undefined8 *)*puVar13;
      }
      param_1 = (undefined8 *)0x18;
      memmove((void *)((longlong)puVar9 + lVar3 * 2),L"\" Activity \"",0x18);
      *(undefined2 *)((longlong)puVar9 + (lVar3 + 0xc) * 2) = 0;
    }
    local_120 = (void *)*puVar13;
    uStack_118 = puVar13[1];
    local_110 = puVar13[2];
    uStack_108 = puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 7;
    *(undefined2 *)puVar13 = 0;
    puVar13 = FUN_140005bd0(&local_120,param_2);
    local_180 = (undefined8 ***)*puVar13;
    ppuStack_178 = (undefined8 **)puVar13[1];
    local_170 = (undefined8 **)puVar13[2];
    ppuStack_168 = (undefined8 **)puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 7;
    *(undefined2 *)puVar13 = 0;
    if (ppuStack_168 == local_170) {
      ppppuVar7 = (undefined8 ****)FUN_1400061b0(&local_180,1,param_1,&DAT_140008a68,1);
    }
    else {
      uVar17 = (longlong)local_170 + 1;
      ppppuVar7 = &local_180;
      if (7 < ppuStack_168) {
        ppppuVar7 = (undefined8 ****)local_180;
      }
      lVar3 = (longlong)local_170 * 2;
      param_1 = (undefined8 *)0x2;
      local_170 = (undefined8 **)uVar17;
      memmove((void *)((longlong)ppppuVar7 + lVar3),&DAT_140008a68,2);
      *(undefined2 *)((longlong)ppppuVar7 + uVar17 * 2) = 0;
      ppppuVar7 = &local_180;
    }
    local_190 = (undefined8 **)0x0;
    ppuStack_188 = (undefined8 **)0x0;
    local_1a0 = *ppppuVar7;
    ppuStack_198 = ppppuVar7[1];
    local_190 = ppppuVar7[2];
    ppuStack_188 = ppppuVar7[3];
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar7 = 0;
    if ((ulonglong)((longlong)ppuStack_188 - (longlong)local_190) < 6) {
      ppppuVar7 = (undefined8 ****)FUN_1400061b0(&local_1a0,6,param_1,L" VID \"",6);
    }
    else {
      pppuVar16 = (undefined8 ***)((longlong)local_190 + 6);
      ppppuVar7 = &local_1a0;
      if ((undefined8 ***)0x7 < ppuStack_188) {
        ppppuVar7 = (undefined8 ****)local_1a0;
      }
      lVar3 = (longlong)local_190 * 2;
      param_1 = (undefined8 *)0xc;
      local_190 = pppuVar16;
      memmove((void *)((longlong)ppppuVar7 + lVar3),L" VID \"",0xc);
      *(undefined2 *)((longlong)ppppuVar7 + (longlong)pppuVar16 * 2) = 0;
      ppppuVar7 = &local_1a0;
    }
    local_150 = (undefined8 **)0x0;
    ppuStack_148 = (undefined8 **)0x0;
    local_160 = *ppppuVar7;
    ppuStack_158 = ppppuVar7[1];
    local_150 = ppppuVar7[2];
    ppuStack_148 = ppppuVar7[3];
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar7 = 0;
    puVar13 = FUN_140006380(&local_160,ppppuVar8);
    local_1c0 = (undefined8 ***)*puVar13;
    ppuStack_1b8 = (undefined8 **)puVar13[1];
    local_1b0 = (undefined8 **)puVar13[2];
    ppuStack_1a8 = (undefined8 **)puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 7;
    *(undefined2 *)puVar13 = 0;
    if (ppuStack_1a8 == local_1b0) {
      ppppuVar8 = (undefined8 ****)FUN_1400061b0(&local_1c0,1,param_1,&DAT_140008a68,1);
    }
    else {
      uVar17 = (longlong)local_1b0 + 1;
      ppppuVar8 = &local_1c0;
      if (7 < ppuStack_1a8) {
        ppppuVar8 = (undefined8 ****)local_1c0;
      }
      lVar3 = (longlong)local_1b0 * 2;
      local_1b0 = (undefined8 **)uVar17;
      memmove((void *)((longlong)ppppuVar8 + lVar3),&DAT_140008a68,2);
      *(undefined2 *)((longlong)ppppuVar8 + uVar17 * 2) = 0;
      ppppuVar8 = &local_1c0;
    }
    pppuVar16 = *ppppuVar8;
    pppuVar2 = ppppuVar8[1];
    pppuVar4 = ppppuVar8[2];
    pppuVar5 = ppppuVar8[3];
    ppppuVar8[2] = (undefined8 ***)0x0;
    ppppuVar8[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar8 = 0;
    local_a0 = pppuVar16;
    ppuStack_98 = pppuVar2;
    local_90 = pppuVar4;
    ppuStack_88 = pppuVar5;
    if (7 < ppuStack_1a8) {
      ppppuVar8 = (undefined8 ****)local_1c0;
      if ((0xfff < (longlong)ppuStack_1a8 * 2 + 2U) &&
         (ppppuVar8 = (undefined8 ****)local_1c0[-1],
         0x1f < (ulonglong)((longlong)local_1c0 + (-8 - (longlong)ppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar8);
    }
    local_1b0 = (undefined8 **)0x0;
    ppuStack_1a8 = (undefined8 **)0x7;
    local_1c0 = (undefined8 ***)((ulonglong)local_1c0 & 0xffffffffffff0000);
    if ((undefined8 ***)0x7 < ppuStack_148) {
      pppuVar16 = local_160;
      if ((0xfff < (longlong)ppuStack_148 * 2 + 2U) &&
         (pppuVar16 = (undefined8 ***)local_160[-1],
         0x1f < (ulonglong)((longlong)local_160 + (-8 - (longlong)pppuVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppuVar16);
    }
    local_150 = (undefined8 **)0x0;
    ppuStack_148 = (undefined8 **)0x7;
    local_160 = (undefined8 ***)((ulonglong)local_160 & 0xffffffffffff0000);
    if ((undefined8 ***)0x7 < ppuStack_188) {
      ppppuVar8 = (undefined8 ****)local_1a0;
      if ((0xfff < (longlong)ppuStack_188 * 2 + 2U) &&
         (ppppuVar8 = (undefined8 ****)local_1a0[-1],
         0x1f < (ulonglong)((longlong)local_1a0 + (-8 - (longlong)ppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar8);
    }
    local_190 = (undefined8 **)0x0;
    ppuStack_188 = (undefined8 **)0x7;
    local_1a0 = (undefined8 ***)((ulonglong)local_1a0 & 0xffffffffffff0000);
    if (7 < ppuStack_168) {
      ppppuVar8 = (undefined8 ****)local_180;
      if ((0xfff < (longlong)ppuStack_168 * 2 + 2U) &&
         (ppppuVar8 = (undefined8 ****)local_180[-1],
         0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)ppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar8);
    }
    local_170 = (undefined8 **)0x0;
    ppuStack_168 = (undefined8 **)0x7;
    local_180 = (undefined8 ***)((ulonglong)local_180 & 0xffffffffffff0000);
    if (7 < uStack_108) {
      pvVar12 = local_120;
      if ((0xfff < uStack_108 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)local_120 + -8),
         0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    local_110 = 0;
    uStack_108 = 7;
    local_120 = (void *)((ulonglong)local_120 & 0xffffffffffff0000);
    if (7 < uStack_a8) {
      pvVar12 = local_c0;
      if ((0xfff < uStack_a8 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)local_c0 + -8),
         0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    local_b0 = 0;
    uStack_a8 = 7;
    local_c0 = (void *)((ulonglong)local_c0 & 0xffffffffffff0000);
    if (ppuStack_e8 < 8) goto LAB_1400030e2;
    ppppuVar7 = (undefined8 ****)local_100;
    if ((0xfff < (longlong)ppuStack_e8 * 2 + 2U) &&
       (ppppuVar7 = (undefined8 ****)local_100[-1],
       0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)local_100[-1])))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    FUN_1400055e0(&local_140,param_3);
    puVar13 = FUN_1400020b0(local_60);
    if (7 < (ulonglong)puVar13[3]) {
      puVar13 = (undefined8 *)*puVar13;
    }
    puVar9 = FUN_1400060a0((undefined8 *)&local_80,param_3,param_1);
    lVar3 = puVar9[2];
    if ((ulonglong)(puVar9[3] - lVar3) < 0xc) {
      puVar9 = FUN_1400061b0(puVar9,0xc,param_1,L"\" Activity \"",0xc);
    }
    else {
      puVar9[2] = lVar3 + 0xc;
      puVar15 = puVar9;
      if (7 < (ulonglong)puVar9[3]) {
        puVar15 = (undefined8 *)*puVar9;
      }
      param_1 = (undefined8 *)0x18;
      memmove((void *)((longlong)puVar15 + lVar3 * 2),L"\" Activity \"",0x18);
      *(undefined2 *)((longlong)puVar15 + (lVar3 + 0xc) * 2) = 0;
    }
    local_e0 = (void *)*puVar9;
    uStack_d8 = puVar9[1];
    local_d0 = puVar9[2];
    uStack_c8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_140005bd0(&local_e0,param_2);
    local_160 = (undefined8 ***)*puVar9;
    ppuStack_158 = (undefined8 **)puVar9[1];
    local_150 = (undefined8 **)puVar9[2];
    ppuStack_148 = (undefined8 **)puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    if ((ulonglong)((longlong)ppuStack_148 - (longlong)local_150) < 0xd) {
      ppppuVar8 = (undefined8 ****)FUN_1400061b0(&local_160,0xd,param_1,L"\" Attribute \"",0xd);
    }
    else {
      lVar3 = (longlong)local_150 + 0xd;
      ppppuVar8 = &local_160;
      if (7 < ppuStack_148) {
        ppppuVar8 = (undefined8 ****)local_160;
      }
      lVar1 = (longlong)local_150 * 2;
      local_150 = (undefined8 **)lVar3;
      memmove((void *)((longlong)ppppuVar8 + lVar1),L"\" Attribute \"",0x1a);
      *(undefined2 *)((longlong)ppppuVar8 + lVar3 * 2) = 0;
      ppppuVar8 = &local_160;
    }
    local_1b0 = (undefined8 **)0x0;
    ppuStack_1a8 = (undefined8 **)0x0;
    local_1c0 = *ppppuVar8;
    ppuStack_1b8 = ppppuVar8[1];
    local_1b0 = ppppuVar8[2];
    pppuVar16 = ppppuVar8[3];
    ppppuVar8[2] = (undefined8 ***)0x0;
    ppppuVar8[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar8 = 0;
    uVar17 = uStack_128;
    ppppuVar8 = (undefined8 ****)local_140;
    ppppuVar7 = &local_140;
    if (7 < uStack_128) {
      ppppuVar7 = (undefined8 ****)local_140;
    }
    ppuStack_1a8 = pppuVar16;
    if ((ulonglong)((longlong)pppuVar16 - (longlong)local_1b0) < local_130) {
      ppppuVar7 = (undefined8 ****)FUN_1400061b0(&local_1c0,local_130,pppuVar16,ppppuVar7,local_130)
      ;
      ppppuVar8 = (undefined8 ****)local_140;
      uVar17 = uStack_128;
    }
    else {
      pppuVar2 = (undefined8 ***)(local_130 + (longlong)local_1b0);
      ppppuVar14 = &local_1c0;
      if ((undefined8 ***)0x7 < pppuVar16) {
        ppppuVar14 = (undefined8 ****)local_1c0;
      }
      pppuVar16 = (undefined8 ***)(local_130 * 2);
      lVar3 = (longlong)local_1b0 * 2;
      local_1b0 = pppuVar2;
      memmove((void *)((longlong)ppppuVar14 + lVar3),ppppuVar7,(size_t)pppuVar16);
      *(undefined2 *)((longlong)ppppuVar14 + (longlong)pppuVar2 * 2) = 0;
      ppppuVar7 = &local_1c0;
    }
    local_190 = (undefined8 **)0x0;
    ppuStack_188 = (undefined8 **)0x0;
    local_1a0 = *ppppuVar7;
    ppuStack_198 = ppppuVar7[1];
    local_190 = ppppuVar7[2];
    ppuStack_188 = ppppuVar7[3];
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar7 = 0;
    if (ppuStack_188 == local_190) {
      ppppuVar7 = (undefined8 ****)FUN_1400061b0(&local_1a0,1,pppuVar16,&DAT_140008a68,1);
    }
    else {
      pppuVar2 = (undefined8 ***)((longlong)local_190 + 1);
      ppppuVar7 = &local_1a0;
      if ((undefined8 ***)0x7 < ppuStack_188) {
        ppppuVar7 = (undefined8 ****)local_1a0;
      }
      lVar3 = (longlong)local_190 * 2;
      pppuVar16 = (undefined8 ***)0x2;
      local_190 = pppuVar2;
      memmove((void *)((longlong)ppppuVar7 + lVar3),&DAT_140008a68,2);
      *(undefined2 *)((longlong)ppppuVar7 + (longlong)pppuVar2 * 2) = 0;
      ppppuVar7 = &local_1a0;
    }
    local_170 = (undefined8 **)0x0;
    ppuStack_168 = (undefined8 **)0x0;
    local_180 = *ppppuVar7;
    ppuStack_178 = ppppuVar7[1];
    local_170 = ppppuVar7[2];
    ppuStack_168 = ppppuVar7[3];
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar7 = 0;
    if ((ulonglong)((longlong)ppuStack_168 - (longlong)local_170) < 6) {
      ppppuVar7 = (undefined8 ****)FUN_1400061b0(&local_180,6,pppuVar16,L" VID \"",6);
    }
    else {
      pppuVar16 = (undefined8 ***)((longlong)local_170 + 6);
      ppppuVar7 = &local_180;
      if ((undefined8 ***)0x7 < ppuStack_168) {
        ppppuVar7 = (undefined8 ****)local_180;
      }
      lVar3 = (longlong)local_170 * 2;
      local_170 = pppuVar16;
      memmove((void *)((longlong)ppppuVar7 + lVar3),L" VID \"",0xc);
      *(undefined2 *)((longlong)ppppuVar7 + (longlong)pppuVar16 * 2) = 0;
      ppppuVar7 = &local_180;
    }
    local_f0 = (undefined8 **)0x0;
    ppuStack_e8 = (undefined8 **)0x0;
    local_100 = *ppppuVar7;
    ppuStack_f8 = ppppuVar7[1];
    local_f0 = ppppuVar7[2];
    ppuStack_e8 = ppppuVar7[3];
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x7;
    *(undefined2 *)ppppuVar7 = 0;
    puVar13 = FUN_140006380(&local_100,puVar13);
    local_120 = (void *)*puVar13;
    uStack_118 = puVar13[1];
    local_110 = puVar13[2];
    uStack_108 = puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 7;
    *(undefined2 *)puVar13 = 0;
    puVar13 = FUN_140006380(&local_120,&DAT_140008a68);
    local_c0 = (void *)*puVar13;
    uStack_b8 = puVar13[1];
    local_b0 = puVar13[2];
    uStack_a8 = puVar13[3];
    puVar13[2] = 0;
    puVar13[3] = 7;
    *(undefined2 *)puVar13 = 0;
    FUN_140005540((longlong *)&local_a0,(longlong *)&local_c0);
    if (7 < uStack_a8) {
      pvVar12 = local_c0;
      if ((0xfff < uStack_a8 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)local_c0 + -8),
         0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    if (7 < uStack_108) {
      pvVar12 = local_120;
      if ((0xfff < uStack_108 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)local_120 + -8),
         0x1f < (ulonglong)((longlong)local_120 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    local_110 = 0;
    uStack_108 = 7;
    local_120 = (void *)((ulonglong)local_120 & 0xffffffffffff0000);
    if ((undefined8 ***)0x7 < ppuStack_e8) {
      pppuVar16 = local_100;
      if ((0xfff < (longlong)ppuStack_e8 * 2 + 2U) &&
         (pppuVar16 = (undefined8 ***)local_100[-1],
         0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)pppuVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppuVar16);
    }
    local_f0 = (undefined8 **)0x0;
    ppuStack_e8 = (undefined8 **)0x7;
    local_100 = (undefined8 ***)((ulonglong)local_100 & 0xffffffffffff0000);
    if ((undefined8 ***)0x7 < ppuStack_168) {
      ppppuVar7 = (undefined8 ****)local_180;
      if ((0xfff < (longlong)ppuStack_168 * 2 + 2U) &&
         (ppppuVar7 = (undefined8 ****)local_180[-1],
         0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar7);
    }
    local_170 = (undefined8 **)0x0;
    ppuStack_168 = (undefined8 **)0x7;
    local_180 = (undefined8 ***)((ulonglong)local_180 & 0xffffffffffff0000);
    if ((undefined8 ***)0x7 < ppuStack_188) {
      ppppuVar7 = (undefined8 ****)local_1a0;
      if ((0xfff < (longlong)ppuStack_188 * 2 + 2U) &&
         (ppppuVar7 = (undefined8 ****)local_1a0[-1],
         0x1f < (ulonglong)((longlong)local_1a0 + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar7);
    }
    local_190 = (undefined8 **)0x0;
    ppuStack_188 = (undefined8 **)0x7;
    local_1a0 = (undefined8 ***)((ulonglong)local_1a0 & 0xffffffffffff0000);
    if ((undefined8 ***)0x7 < ppuStack_1a8) {
      ppppuVar7 = (undefined8 ****)local_1c0;
      if ((0xfff < (longlong)ppuStack_1a8 * 2 + 2U) &&
         (ppppuVar7 = (undefined8 ****)local_1c0[-1],
         0x1f < (ulonglong)((longlong)local_1c0 + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar7);
    }
    local_1b0 = (undefined8 **)0x0;
    ppuStack_1a8 = (undefined8 **)0x7;
    local_1c0 = (undefined8 ***)((ulonglong)local_1c0 & 0xffffffffffff0000);
    if (7 < ppuStack_148) {
      ppppuVar7 = (undefined8 ****)local_160;
      if ((0xfff < (longlong)ppuStack_148 * 2 + 2U) &&
         (ppppuVar7 = (undefined8 ****)local_160[-1],
         0x1f < (ulonglong)((longlong)local_160 + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar7);
    }
    local_150 = (undefined8 **)0x0;
    ppuStack_148 = (undefined8 **)0x7;
    local_160 = (undefined8 ***)((ulonglong)local_160 & 0xffffffffffff0000);
    if (7 < uStack_c8) {
      pvVar12 = local_e0;
      if ((0xfff < uStack_c8 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)local_e0 + -8),
         0x1f < (ulonglong)((longlong)local_e0 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    local_d0 = 0;
    uStack_c8 = 7;
    local_e0 = (void *)((ulonglong)local_e0 & 0xffffffffffff0000);
    if (7 < uStack_68) {
      pvVar6 = (void *)CONCAT62(uStack_7e,local_80);
      pvVar12 = pvVar6;
      if ((0xfff < uStack_68 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)pvVar6 + -8),
         0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    local_70 = 0;
    uStack_68 = 7;
    local_80 = 0;
    if (7 < local_48) {
      pvVar12 = local_60[0];
      if ((0xfff < local_48 * 2 + 2) &&
         (pvVar12 = *(void **)((longlong)local_60[0] + -8),
         0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar12);
    }
    if (uVar17 < 8) goto LAB_1400030e2;
    ppppuVar7 = ppppuVar8;
    if ((0xfff < uVar17 * 2 + 2) &&
       (ppppuVar7 = (undefined8 ****)ppppuVar8[-1],
       0x1f < (ulonglong)((longlong)ppppuVar8 + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(ppppuVar7);
LAB_1400030e2:
  pWVar10 = (LPWSTR)FUN_1400055e0((undefined8 *)&local_80,&local_a0);
  puVar13 = (undefined8 *)FUN_140002160((longlong *)local_60);
  puVar13 = FUN_140006380(puVar13,L"InfoForSetup.exe");
  local_140 = (undefined8 ***)*puVar13;
  uStack_138 = puVar13[1];
  local_130 = puVar13[2];
  uStack_128 = puVar13[3];
  puVar13[2] = 0;
  puVar13[3] = 7;
  *(undefined2 *)puVar13 = 0;
  FUN_140002220((LPCWSTR)&local_140,pWVar10);
  if (7 < local_48) {
    pvVar12 = local_60[0];
    if ((0xfff < local_48 * 2 + 2) &&
       (pvVar12 = *(void **)((longlong)local_60[0] + -8),
       0x1f < (ulonglong)((longlong)local_60[0] + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar12);
  }
  if ((undefined8 ***)0x7 < ppuStack_88) {
    pppuVar16 = (undefined8 ***)local_a0;
    if ((0xfff < (longlong)ppuStack_88 * 2 + 2U) &&
       (pppuVar16 = (undefined8 ***)local_a0[-1],
       0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pppuVar16)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pppuVar16);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_208);
  return;
}




void FUN_140003210(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *****pppppuVar10;
  LPWSTR pWVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined1 auStackY_258 [32];
  undefined8 ****local_210;
  undefined8 uStack_208;
  ulonglong local_200;
  ulonglong uStack_1f8;
  undefined8 ****local_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0;
  ulonglong uStack_1d8;
  undefined8 ****local_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***local_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ****local_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***local_1a0;
  undefined8 ***pppuStack_198;
  void *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong uStack_178;
  undefined8 ***local_170;
  undefined8 ***pppuStack_168;
  undefined8 ***local_160;
  undefined8 ***pppuStack_158;
  undefined8 ***local_150;
  undefined8 ***pppuStack_148;
  undefined8 ***local_140;
  undefined8 ***pppuStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong uStack_118;
  void *local_110 [3];
  ulonglong local_f8;
  undefined8 ***local_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***local_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***local_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***local_c0;
  undefined8 ***pppuStack_b8;
  void *local_b0 [3];
  ulonglong local_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong uStack_78;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined8 local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14000c010 ^ (ulonglong)auStackY_258;
  local_c0 = (undefined8 ****)0x0;
  pppuStack_b8 = (undefined8 ****)0x7;
  local_d0 = (undefined8 ***)((ulonglong)local_d0 & 0xffffffffffff0000);
  if (param_4[2] == 0) {
    puVar9 = param_2;
    puVar8 = FUN_1400020b0(local_110);
    if (7 < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    puVar9 = FUN_1400060a0(&local_190,puVar9,param_1);
    lVar3 = puVar9[2];
    if ((ulonglong)(puVar9[3] - lVar3) < 10) {
      puVar9 = FUN_1400061b0(puVar9,10,param_1,L"\" Source \"",10);
    }
    else {
      puVar9[2] = lVar3 + 10;
      puVar15 = puVar9;
      if (7 < (ulonglong)puVar9[3]) {
        puVar15 = (undefined8 *)*puVar9;
      }
      param_1 = (undefined8 *)0x14;
      memmove((void *)((longlong)puVar15 + lVar3 * 2),L"\" Source \"",0x14);
      *(undefined2 *)((longlong)puVar15 + (lVar3 + 10) * 2) = 0;
    }
    local_130 = (void *)*puVar9;
    uStack_128 = puVar9[1];
    local_120 = puVar9[2];
    uStack_118 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_140005bd0(&local_130,param_2);
    local_1f0 = (undefined8 ****)*puVar9;
    uStack_1e8 = puVar9[1];
    local_1e0 = puVar9[2];
    uStack_1d8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    if (uStack_1d8 - local_1e0 < 0xc) {
      pppppuVar10 = (undefined8 *****)FUN_1400061b0(&local_1f0,0xc,param_1,L"\" Activity \"",0xc);
    }
    else {
      lVar3 = local_1e0 + 0xc;
      pppppuVar10 = &local_1f0;
      if (7 < uStack_1d8) {
        pppppuVar10 = (undefined8 *****)local_1f0;
      }
      lVar2 = local_1e0 * 2;
      param_1 = (undefined8 *)0x18;
      local_1e0 = lVar3;
      memmove((void *)((longlong)pppppuVar10 + lVar2),L"\" Activity \"",0x18);
      *(undefined2 *)((longlong)pppppuVar10 + lVar3 * 2) = 0;
      pppppuVar10 = &local_1f0;
    }
    local_140 = (undefined8 ***)0x0;
    pppuStack_138 = (undefined8 ***)0x0;
    local_150 = *pppppuVar10;
    pppuStack_148 = pppppuVar10[1];
    local_140 = pppppuVar10[2];
    pppuStack_138 = pppppuVar10[3];
    pppppuVar10[2] = (undefined8 ****)0x0;
    pppppuVar10[3] = (undefined8 ****)0x7;
    *(undefined2 *)pppppuVar10 = 0;
    puVar9 = FUN_140005bd0(&local_150,param_3);
    local_210 = (undefined8 ****)*puVar9;
    uStack_208 = puVar9[1];
    local_200 = puVar9[2];
    uStack_1f8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    if (uStack_1f8 == local_200) {
      pppppuVar10 = (undefined8 *****)FUN_1400061b0(&local_210,1,param_1,&DAT_140008a68,1);
    }
    else {
      uVar1 = local_200 + 1;
      pppppuVar10 = &local_210;
      if (7 < uStack_1f8) {
        pppppuVar10 = (undefined8 *****)local_210;
      }
      lVar3 = local_200 * 2;
      param_1 = (undefined8 *)0x2;
      local_200 = uVar1;
      memmove((void *)((longlong)pppppuVar10 + lVar3),&DAT_140008a68,2);
      *(undefined2 *)((longlong)pppppuVar10 + uVar1 * 2) = 0;
      pppppuVar10 = &local_210;
    }
    local_1a0 = (undefined8 ***)0x0;
    pppuStack_198 = (undefined8 ***)0x0;
    local_1b0 = *pppppuVar10;
    pppuStack_1a8 = pppppuVar10[1];
    local_1a0 = pppppuVar10[2];
    pppuStack_198 = pppppuVar10[3];
    pppppuVar10[2] = (undefined8 ****)0x0;
    pppppuVar10[3] = (undefined8 ****)0x7;
    *(undefined2 *)pppppuVar10 = 0;
    if ((ulonglong)((longlong)pppuStack_198 - (longlong)local_1a0) < 6) {
      pppppuVar10 = (undefined8 *****)FUN_1400061b0(&local_1b0,6,param_1,L" VID \"",6);
    }
    else {
      ppppuVar13 = (undefined8 ****)((longlong)local_1a0 + 6);
      pppppuVar10 = &local_1b0;
      if ((undefined8 ****)0x7 < pppuStack_198) {
        pppppuVar10 = (undefined8 *****)local_1b0;
      }
      lVar3 = (longlong)local_1a0 * 2;
      param_1 = (undefined8 *)0xc;
      local_1a0 = ppppuVar13;
      memmove((void *)((longlong)pppppuVar10 + lVar3),L" VID \"",0xc);
      *(undefined2 *)((longlong)pppppuVar10 + (longlong)ppppuVar13 * 2) = 0;
      pppppuVar10 = &local_1b0;
    }
    local_160 = (undefined8 ***)0x0;
    pppuStack_158 = (undefined8 ***)0x0;
    local_170 = *pppppuVar10;
    pppuStack_168 = pppppuVar10[1];
    local_160 = pppppuVar10[2];
    pppuStack_158 = pppppuVar10[3];
    pppppuVar10[2] = (undefined8 ****)0x0;
    pppppuVar10[3] = (undefined8 ****)0x7;
    *(undefined2 *)pppppuVar10 = 0;
    puVar8 = FUN_140006380(&local_170,puVar8);
    local_1d0 = (undefined8 ****)*puVar8;
    pppuStack_1c8 = (undefined8 ***)puVar8[1];
    local_1c0 = (undefined8 ***)puVar8[2];
    pppuStack_1b8 = (undefined8 ***)puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 7;
    *(undefined2 *)puVar8 = 0;
    if (pppuStack_1b8 == local_1c0) {
      pppppuVar10 = (undefined8 *****)FUN_1400061b0(&local_1d0,1,param_1,&DAT_140008a68,1);
    }
    else {
      uVar1 = (longlong)local_1c0 + 1;
      pppppuVar10 = &local_1d0;
      if (7 < pppuStack_1b8) {
        pppppuVar10 = (undefined8 *****)local_1d0;
      }
      lVar3 = (longlong)local_1c0 * 2;
      local_1c0 = (undefined8 ***)uVar1;
      memmove((void *)((longlong)pppppuVar10 + lVar3),&DAT_140008a68,2);
      *(undefined2 *)((longlong)pppppuVar10 + uVar1 * 2) = 0;
      pppppuVar10 = &local_1d0;
    }
    ppppuVar13 = *pppppuVar10;
    ppppuVar4 = pppppuVar10[1];
    ppppuVar5 = pppppuVar10[2];
    ppppuVar6 = pppppuVar10[3];
    pppppuVar10[2] = (undefined8 ****)0x0;
    pppppuVar10[3] = (undefined8 ****)0x7;
    *(undefined2 *)pppppuVar10 = 0;
    local_d0 = ppppuVar13;
    pppuStack_c8 = ppppuVar4;
    local_c0 = ppppuVar5;
    pppuStack_b8 = ppppuVar6;
    if (7 < pppuStack_1b8) {
      pppppuVar10 = (undefined8 *****)local_1d0;
      if ((0xfff < (longlong)pppuStack_1b8 * 2 + 2U) &&
         (pppppuVar10 = (undefined8 *****)local_1d0[-1],
         0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppuVar10);
    }
    local_1c0 = (undefined8 ***)0x0;
    pppuStack_1b8 = (undefined8 ***)0x7;
    local_1d0 = (undefined8 ****)((ulonglong)local_1d0 & 0xffffffffffff0000);
    if ((undefined8 ****)0x7 < pppuStack_158) {
      ppppuVar13 = (undefined8 ****)local_170;
      if ((0xfff < (longlong)pppuStack_158 * 2 + 2U) &&
         (ppppuVar13 = (undefined8 ****)local_170[-1],
         0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)ppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar13);
    }
    local_160 = (undefined8 ***)0x0;
    pppuStack_158 = (undefined8 ***)0x7;
    local_170 = (undefined8 ***)((ulonglong)local_170 & 0xffffffffffff0000);
    if ((undefined8 ****)0x7 < pppuStack_198) {
      pppppuVar10 = (undefined8 *****)local_1b0;
      if ((0xfff < (longlong)pppuStack_198 * 2 + 2U) &&
         (pppppuVar10 = (undefined8 *****)local_1b0[-1],
         0x1f < (ulonglong)((longlong)local_1b0 + (-8 - (longlong)pppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppuVar10);
    }
    local_1a0 = (undefined8 ***)0x0;
    pppuStack_198 = (undefined8 ***)0x7;
    local_1b0 = (undefined8 ****)((ulonglong)local_1b0 & 0xffffffffffff0000);
    if (7 < uStack_1f8) {
      pppppuVar10 = (undefined8 *****)local_210;
      if ((0xfff < uStack_1f8 * 2 + 2) &&
         (pppppuVar10 = (undefined8 *****)local_210[-1],
         0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)pppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppuVar10);
    }
    local_200 = 0;
    uStack_1f8 = 7;
    local_210 = (undefined8 ****)((ulonglong)local_210 & 0xffffffffffff0000);
    if ((undefined8 ****)0x7 < pppuStack_138) {
      ppppuVar13 = (undefined8 ****)local_150;
      if ((0xfff < (longlong)pppuStack_138 * 2 + 2U) &&
         (ppppuVar13 = (undefined8 ****)local_150[-1],
         0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)ppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar13);
    }
    local_140 = (undefined8 ***)0x0;
    pppuStack_138 = (undefined8 ***)0x7;
    local_150 = (undefined8 ***)((ulonglong)local_150 & 0xffffffffffff0000);
    if (7 < uStack_1d8) {
      pppppuVar10 = (undefined8 *****)local_1f0;
      if ((0xfff < uStack_1d8 * 2 + 2) &&
         (pppppuVar10 = (undefined8 *****)local_1f0[-1],
         0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)pppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppuVar10);
    }
    local_1e0 = 0;
    uStack_1d8 = 7;
    local_1f0 = (undefined8 ****)((ulonglong)local_1f0 & 0xffffffffffff0000);
    if (7 < uStack_118) {
      pvVar14 = local_130;
      if ((0xfff < uStack_118 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_130 + -8),
         0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_120 = 0;
    uStack_118 = 7;
    local_130 = (void *)((ulonglong)local_130 & 0xffffffffffff0000);
    if (7 < uStack_178) {
      pvVar14 = local_190;
      if ((0xfff < uStack_178 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_190 + -8),
         0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_180 = 0;
    uStack_178 = 7;
    local_190 = (void *)((ulonglong)local_190 & 0xffffffffffff0000);
    if (local_f8 < 8) goto LAB_1400040b7;
    pvVar14 = local_110[0];
    if ((0xfff < local_f8 * 2 + 2) &&
       (pvVar14 = *(void **)((longlong)local_110[0] + -8),
       0x1f < (ulonglong)
              ((longlong)local_110[0] + (-8 - (longlong)*(void **)((longlong)local_110[0] + -8)))))
    {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    FUN_1400055e0(local_110,param_4);
    puVar8 = FUN_1400020b0(local_b0);
    if (7 < (ulonglong)puVar8[3]) {
      puVar8 = (undefined8 *)*puVar8;
    }
    puVar9 = FUN_1400060a0((undefined8 *)&local_70,param_4,param_1);
    lVar3 = puVar9[2];
    if ((ulonglong)(puVar9[3] - lVar3) < 10) {
      puVar9 = FUN_1400061b0(puVar9,10,param_1,L"\" Source \"",10);
    }
    else {
      puVar9[2] = lVar3 + 10;
      puVar15 = puVar9;
      if (7 < (ulonglong)puVar9[3]) {
        puVar15 = (undefined8 *)*puVar9;
      }
      param_1 = (undefined8 *)0x14;
      memmove((void *)((longlong)puVar15 + lVar3 * 2),L"\" Source \"",0x14);
      *(undefined2 *)((longlong)puVar15 + (lVar3 + 10) * 2) = 0;
    }
    local_190 = (void *)*puVar9;
    uStack_188 = puVar9[1];
    local_180 = puVar9[2];
    uStack_178 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_140005bd0(&local_190,param_2);
    local_210 = (undefined8 ****)*puVar9;
    uStack_208 = puVar9[1];
    local_200 = puVar9[2];
    uStack_1f8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    if (uStack_1f8 - local_200 < 0xc) {
      pppppuVar10 = (undefined8 *****)FUN_1400061b0(&local_210,0xc,param_1,L"\" Activity \"",0xc);
    }
    else {
      lVar3 = local_200 + 0xc;
      pppppuVar10 = &local_210;
      if (7 < uStack_1f8) {
        pppppuVar10 = (undefined8 *****)local_210;
      }
      lVar2 = local_200 * 2;
      param_1 = (undefined8 *)0x18;
      local_200 = lVar3;
      memmove((void *)((longlong)pppppuVar10 + lVar2),L"\" Activity \"",0x18);
      *(undefined2 *)((longlong)pppppuVar10 + lVar3 * 2) = 0;
      pppppuVar10 = &local_210;
    }
    local_e0 = (undefined8 ***)0x0;
    pppuStack_d8 = (undefined8 ***)0x0;
    local_f0 = *pppppuVar10;
    pppuStack_e8 = pppppuVar10[1];
    local_e0 = pppppuVar10[2];
    pppuStack_d8 = pppppuVar10[3];
    pppppuVar10[2] = (undefined8 ****)0x0;
    pppppuVar10[3] = (undefined8 ****)0x7;
    *(undefined2 *)pppppuVar10 = 0;
    puVar9 = FUN_140005bd0(&local_f0,param_3);
    local_1f0 = (undefined8 ****)*puVar9;
    uStack_1e8 = puVar9[1];
    local_1e0 = puVar9[2];
    uStack_1d8 = puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    if (uStack_1d8 - local_1e0 < 0xd) {
      pppppuVar10 = (undefined8 *****)FUN_1400061b0(&local_1f0,0xd,param_1,L"\" Attribute \"",0xd);
    }
    else {
      lVar3 = local_1e0 + 0xd;
      pppppuVar10 = &local_1f0;
      if (7 < uStack_1d8) {
        pppppuVar10 = (undefined8 *****)local_1f0;
      }
      lVar2 = local_1e0 * 2;
      local_1e0 = lVar3;
      memmove((void *)((longlong)pppppuVar10 + lVar2),L"\" Attribute \"",0x1a);
      *(undefined2 *)((longlong)pppppuVar10 + lVar3 * 2) = 0;
      pppppuVar10 = &local_1f0;
    }
    local_1c0 = (undefined8 ***)0x0;
    pppuStack_1b8 = (undefined8 ***)0x0;
    local_1d0 = *pppppuVar10;
    pppuStack_1c8 = pppppuVar10[1];
    local_1c0 = pppppuVar10[2];
    pppuStack_1b8 = pppppuVar10[3];
    pppppuVar10[2] = (undefined8 ****)0x0;
    pppppuVar10[3] = (undefined8 ****)0x7;
    *(undefined2 *)pppppuVar10 = 0;
    puVar9 = FUN_140005bd0(&local_1d0,local_110);
    local_1b0 = (undefined8 ****)*puVar9;
    pppuStack_1a8 = (undefined8 ***)puVar9[1];
    local_1a0 = (undefined8 ***)puVar9[2];
    pppuStack_198 = (undefined8 ***)puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_140006380(&local_1b0,&DAT_140008a68);
    local_170 = (undefined8 ***)*puVar9;
    pppuStack_168 = (undefined8 ***)puVar9[1];
    local_160 = (undefined8 ***)puVar9[2];
    pppuStack_158 = (undefined8 ***)puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar9 = FUN_140006380(&local_170,L" VID \"");
    local_150 = (undefined8 ***)*puVar9;
    pppuStack_148 = (undefined8 ***)puVar9[1];
    local_140 = (undefined8 ***)puVar9[2];
    pppuStack_138 = (undefined8 ***)puVar9[3];
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    puVar8 = FUN_140006380(&local_150,puVar8);
    local_130 = (void *)*puVar8;
    uStack_128 = puVar8[1];
    local_120 = puVar8[2];
    uStack_118 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 7;
    *(undefined2 *)puVar8 = 0;
    puVar8 = FUN_140006380(&local_130,&DAT_140008a68);
    local_90 = (void *)*puVar8;
    uStack_88 = puVar8[1];
    local_80 = puVar8[2];
    uStack_78 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 7;
    *(undefined2 *)puVar8 = 0;
    FUN_140005540((longlong *)&local_d0,(longlong *)&local_90);
    if (7 < uStack_78) {
      pvVar14 = local_90;
      if ((0xfff < uStack_78 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_90 + -8),
         0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    if (7 < uStack_118) {
      pvVar14 = local_130;
      if ((0xfff < uStack_118 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_130 + -8),
         0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_120 = 0;
    uStack_118 = 7;
    local_130 = (void *)((ulonglong)local_130 & 0xffffffffffff0000);
    if (7 < pppuStack_138) {
      pppuVar12 = local_150;
      if ((0xfff < (longlong)pppuStack_138 * 2 + 2U) &&
         (pppuVar12 = (undefined8 ***)local_150[-1],
         0x1f < (ulonglong)((longlong)local_150 + (-8 - (longlong)pppuVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppuVar12);
    }
    local_140 = (undefined8 ***)0x0;
    pppuStack_138 = (undefined8 ***)0x7;
    local_150 = (undefined8 ***)((ulonglong)local_150 & 0xffffffffffff0000);
    if (7 < pppuStack_158) {
      pppuVar12 = local_170;
      if ((0xfff < (longlong)pppuStack_158 * 2 + 2U) &&
         (pppuVar12 = (undefined8 ***)local_170[-1],
         0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)pppuVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppuVar12);
    }
    local_160 = (undefined8 ***)0x0;
    pppuStack_158 = (undefined8 ***)0x7;
    local_170 = (undefined8 ***)((ulonglong)local_170 & 0xffffffffffff0000);
    if (7 < pppuStack_198) {
      ppppuVar13 = local_1b0;
      if ((0xfff < (longlong)pppuStack_198 * 2 + 2U) &&
         (ppppuVar13 = (undefined8 ****)local_1b0[-1],
         0x1f < (ulonglong)((longlong)local_1b0 + (-8 - (longlong)ppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar13);
    }
    local_1a0 = (undefined8 ***)0x0;
    pppuStack_198 = (undefined8 ***)0x7;
    local_1b0 = (undefined8 ****)((ulonglong)local_1b0 & 0xffffffffffff0000);
    if ((undefined8 ****)0x7 < pppuStack_1b8) {
      ppppuVar13 = local_1d0;
      if ((0xfff < (longlong)pppuStack_1b8 * 2 + 2U) &&
         (ppppuVar13 = (undefined8 ****)local_1d0[-1],
         0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)ppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar13);
    }
    local_1c0 = (undefined8 ***)0x0;
    pppuStack_1b8 = (undefined8 ***)0x7;
    local_1d0 = (undefined8 ****)((ulonglong)local_1d0 & 0xffffffffffff0000);
    if (7 < uStack_1d8) {
      pppppuVar10 = (undefined8 *****)local_1f0;
      if ((0xfff < uStack_1d8 * 2 + 2) &&
         (pppppuVar10 = (undefined8 *****)local_1f0[-1],
         0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)pppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppuVar10);
    }
    local_1e0 = 0;
    uStack_1d8 = 7;
    local_1f0 = (undefined8 ****)((ulonglong)local_1f0 & 0xffffffffffff0000);
    if ((undefined8 ****)0x7 < pppuStack_d8) {
      ppppuVar13 = (undefined8 ****)local_f0;
      if ((0xfff < (longlong)pppuStack_d8 * 2 + 2U) &&
         (ppppuVar13 = (undefined8 ****)local_f0[-1],
         0x1f < (ulonglong)((longlong)local_f0 + (-8 - (longlong)ppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppuVar13);
    }
    local_e0 = (undefined8 ***)0x0;
    pppuStack_d8 = (undefined8 ***)0x7;
    local_f0 = (undefined8 ***)((ulonglong)local_f0 & 0xffffffffffff0000);
    if (7 < uStack_1f8) {
      pppppuVar10 = (undefined8 *****)local_210;
      if ((0xfff < uStack_1f8 * 2 + 2) &&
         (pppppuVar10 = (undefined8 *****)local_210[-1],
         0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)pppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppuVar10);
    }
    local_200 = 0;
    uStack_1f8 = 7;
    local_210 = (undefined8 ****)((ulonglong)local_210 & 0xffffffffffff0000);
    if (7 < uStack_178) {
      pvVar14 = local_190;
      if ((0xfff < uStack_178 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_190 + -8),
         0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_180 = 0;
    uStack_178 = 7;
    local_190 = (void *)((ulonglong)local_190 & 0xffffffffffff0000);
    if (7 < uStack_58) {
      pvVar7 = (void *)CONCAT62(uStack_6e,local_70);
      pvVar14 = pvVar7;
      if ((0xfff < uStack_58 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar7 + -8),
         0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    local_60 = 0;
    uStack_58 = 7;
    local_70 = 0;
    if (7 < local_98) {
      pvVar14 = local_b0[0];
      if ((0xfff < local_98 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)local_b0[0] + -8),
         0x1f < (ulonglong)((longlong)local_b0[0] + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    if (local_f8 < 8) goto LAB_1400040b7;
    pvVar14 = local_110[0];
    if ((0xfff < local_f8 * 2 + 2) &&
       (pvVar14 = *(void **)((longlong)local_110[0] + -8),
       0x1f < (ulonglong)((longlong)local_110[0] + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(pvVar14);
LAB_1400040b7:
  pWVar11 = (LPWSTR)FUN_1400055e0(local_110,&local_d0);
  puVar8 = (undefined8 *)FUN_140002160((longlong *)local_b0);
  puVar8 = FUN_140006380(puVar8,L"InfoForSetup.exe");
  local_190 = (void *)*puVar8;
  uStack_188 = puVar8[1];
  local_180 = puVar8[2];
  uStack_178 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 7;
  *(undefined2 *)puVar8 = 0;
  FUN_140002220((LPCWSTR)&local_190,pWVar11);
  if (7 < local_98) {
    pvVar14 = local_b0[0];
    if ((0xfff < local_98 * 2 + 2) &&
       (pvVar14 = *(void **)((longlong)local_b0[0] + -8),
       0x1f < (ulonglong)((longlong)local_b0[0] + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar14);
  }
  if ((undefined8 ****)0x7 < pppuStack_b8) {
    ppppuVar13 = (undefined8 ****)local_d0;
    if ((0xfff < (longlong)pppuStack_b8 * 2 + 2U) &&
       (ppppuVar13 = (undefined8 ****)local_d0[-1],
       0x1f < (ulonglong)((longlong)local_d0 + (-8 - (longlong)ppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppuVar13);
  }
  __security_check_cookie(local_50 ^ (ulonglong)auStackY_258);
  return;
}




void FUN_1400041e0(void)

{
  void *pvVar1;
  BOOL BVar2;
  void *pvVar3;
  undefined1 auStackY_158 [32];
  _PROCESS_INFORMATION local_108;
  undefined8 local_f0;
  _STARTUPINFOA local_e8;
  undefined2 local_78;
  undefined6 uStack_76;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined2 local_38;
  undefined6 uStack_36;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_f0 = 0xfffffffffffffffe;
  local_18 = DAT_14000c010 ^ (ulonglong)auStackY_158;
  local_28 = 0;
  uStack_20 = 7;
  local_38 = 0;
  FUN_140005740((longlong *)&local_38,&DAT_14000892c,0);
  local_48 = 0;
  uStack_40 = 7;
  local_58 = 0;
  FUN_140005740((longlong *)&local_58,L"Trigger_Appcrash",0x10);
  local_68 = 0;
  uStack_60 = 7;
  local_78 = 0;
  FUN_140005740((longlong *)&local_78,L"Crash",5);
  FUN_1400023b0((undefined8 *)&local_78,(undefined8 *)&local_58,(undefined8 *)&local_38);
  if (7 < uStack_60) {
    pvVar1 = (void *)CONCAT62(uStack_76,local_78);
    pvVar3 = pvVar1;
    if ((0xfff < uStack_60 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  if (7 < uStack_40) {
    pvVar1 = (void *)CONCAT62(uStack_56,local_58);
    pvVar3 = pvVar1;
    if ((0xfff < uStack_40 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  if (7 < uStack_20) {
    pvVar1 = (void *)CONCAT62(uStack_36,local_38);
    pvVar3 = pvVar1;
    if ((0xfff < uStack_20 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
  }
  local_108.hProcess = (HANDLE)0x0;
  local_108.hThread = (HANDLE)0x0;
  local_108.dwProcessId = 0;
  local_108.dwThreadId = 0;
  memset(&local_e8.field_0x4,0,100);
  local_e8.cb = 0x68;
  BVar2 = CreateProcessA((LPCSTR)0x0,"DRWReport.exe",(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,&local_e8,&local_108
                        );
  if (BVar2 != 0) {
    CloseHandle(local_108.hThread);
    CloseHandle(local_108.hProcess);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_158);
  return;
}




void FUN_140004400(void)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  BOOL BVar6;
  DWORD DVar7;
  DWORD DVar8;
  uchar *puVar9;
  HANDLE pvVar10;
  uint *puVar11;
  HANDLE pvVar12;
  ULONGLONG UVar13;
  char *lpOutputString;
  void *pvVar14;
  ulonglong uVar15;
  HANDLE *ppvVar16;
  uint uVar17;
  uint *lpCurrentDirectory;
  uint *puVar18;
  uint *puVar19;
  DWORD nCount;
  longlong lVar20;
  undefined1 auStackY_738 [32];
  DWORD local_6d8;
  DWORD local_6d4;
  HANDLE local_6d0;
  _PROCESS_INFORMATION local_6c8;
  undefined **local_6b0;
  HANDLE local_6a8;
  uint *local_6a0;
  HANDLE local_698;
  uint *local_690;
  undefined4 local_688;
  undefined4 local_680;
  HANDLE local_678;
  ULONGLONG local_670;
  undefined8 local_668;
  _STARTUPINFOA local_658;
  _SYSTEMTIME local_5e8;
  undefined2 local_5d8;
  undefined6 uStack_5d6;
  undefined8 local_5c8;
  ulonglong local_5c0;
  undefined2 local_5b8;
  undefined6 uStack_5b6;
  undefined8 local_5a8;
  ulonglong local_5a0;
  undefined2 local_598;
  undefined6 uStack_596;
  undefined8 local_588;
  ulonglong local_580;
  HANDLE local_578 [4];
  CHAR local_558 [272];
  uchar local_448 [528];
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_668 = 0xfffffffffffffffe;
  local_38 = DAT_14000c010 ^ (ulonglong)auStackY_738;
  memset(local_448,0,0x208);
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_448,0x208);
  puVar9 = _mbsrchr(local_448,0x5c);
  puVar9[1] = '\0';
  strcat_s((char *)local_448,0x208,"log");
  CreateDirectoryA((LPCSTR)local_448,(LPSECURITY_ATTRIBUTES)0x0);
  strcat_s((char *)local_448,0x208,"\\");
  strcat_s((char *)local_448,0x208,"DRWLog.log");
  lpCurrentDirectory = (uint *)0x0;
  local_6d0 = CreateFileA((LPCSTR)local_448,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
  local_6b0 = CFileMappingLog::vftable;
  local_6a0 = (uint *)0x0;
  local_690 = (uint *)0x0;
  local_688 = 0;
  local_680 = 1;
  pvVar10 = CreateFileMappingA((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,0x200000,
                               "DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}");
  local_6a8 = pvVar10;
  if (pvVar10 == (HANDLE)0x0) {
    lpOutputString = "Failed to create map file!\n";
    puVar19 = lpCurrentDirectory;
  }
  else {
    puVar11 = (uint *)MapViewOfFile(pvVar10,0xf001f,0,0,0x200000);
    puVar19 = puVar11;
    local_6a0 = puVar11;
    if (puVar11 != (uint *)0x0) {
      puVar18 = (uint *)0x200000;
      local_688 = 0x200000;
      *puVar11 = 0;
      local_690 = puVar11;
      goto LAB_1400045c6;
    }
    CloseHandle(pvVar10);
    local_6a8 = (HANDLE)0x0;
    lpOutputString = "Failed to map the map file!\n";
  }
  OutputDebugStringA(lpOutputString);
  puVar11 = lpCurrentDirectory;
  puVar18 = lpCurrentDirectory;
LAB_1400045c6:
  local_698 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,
                           "DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}");
  bVar3 = false;
  local_670 = GetTickCount64();
  do {
    DebugTrace("____---Start DRW.");
    local_6c8.hProcess = (HANDLE)0x0;
    local_6c8.hThread = (HANDLE)0x0;
    local_6c8.dwProcessId = 0;
    local_6c8.dwThreadId = 0;
    memset(&local_658.field_0x4,0,100);
    local_658.cb = 0x68;
    memset(local_558,0,0x104);
    local_5e8.wYear = 0;
    local_5e8.wMonth = 0;
    local_5e8.wDayOfWeek = 0;
    local_5e8.wDay = 0;
    local_5e8.wHour = 0;
    local_5e8.wMinute = 0;
    local_5e8.wSecond = 0;
    local_5e8.wMilliseconds = 0;
    GetLocalTime(&local_5e8);
    snprintf(local_558,0x103,"startTS=%d-%d-%d %d:%d:%d:%d",local_5e8._0_8_ & 0xffff);
    SetEnvironmentVariableA("startTS",local_558);
    BVar6 = CreateProcessA((LPCSTR)0x0,"DRWUI",(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                           ,1,(DWORD)lpCurrentDirectory,lpCurrentDirectory,
                           (LPCSTR)lpCurrentDirectory,&local_658,&local_6c8);
    if (BVar6 == 0) goto LAB_140004b34;
    local_578[0] = local_6c8.hProcess;
    DebugTrace("____---hProcess = %X");
    lVar20 = 1;
    pvVar10 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,
                           "DRW_Crash_{FC1A0E29-3523-4152-B110-3340363E5DB7}");
    DebugTrace("____---CrashEvent = %X");
    if (pvVar10 != (HANDLE)0x0) {
      lVar20 = 2;
      local_578[1] = pvVar10;
    }
    nCount = (DWORD)lVar20;
    pvVar12 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,
                           "DRW_Memory_Crash_{c3d61a40-a3e6-402b-b373-fd90d30893c8}");
    local_678 = pvVar12;
    DebugTrace("____---MemoryCrashEvent = %X",pvVar12);
    if (pvVar10 != (HANDLE)0x0) {
      local_578[lVar20] = pvVar12;
      nCount = nCount + 1;
    }
    bVar4 = false;
    bVar5 = false;
    while( true ) {
      do {
        DVar7 = WaitForMultipleObjects(nCount,local_578,0,5000);
        if ((longlong)local_6d0 - 1U < 0xfffffffffffffffe) {
          DVar8 = WaitForSingleObject(local_698,1000);
          if ((DVar8 == 0) && (puVar19 != (uint *)0x0)) {
            if (*puVar11 <= (uint)puVar18) {
              local_6d8 = 0;
              WriteFile(local_6d0,puVar11 + 1,*puVar11,&local_6d8,(LPOVERLAPPED)0x0);
            }
            puVar18 = (uint *)0x200000;
            local_688 = 0x200000;
            *puVar19 = 0;
            local_690 = puVar19;
            ReleaseMutex(local_698);
            puVar11 = puVar19;
          }
          else {
            OutputDebugStringA("Failed to request the permission to write to log file!\n");
          }
        }
        uVar17 = (int)lpCurrentDirectory + 1;
        lpCurrentDirectory = (uint *)(ulonglong)uVar17;
      } while (DVar7 == 0x102);
      if (nCount <= DVar7) goto LAB_1400048a2;
      DebugTrace("____---Pos = %d",(ulonglong)DVar7);
      if (local_578[DVar7] != pvVar10) goto LAB_140004887;
      if ((!bVar3) || (1 < uVar17)) break;
      bVar3 = false;
    }
    bVar5 = true;
LAB_140004887:
    if (local_578[DVar7] == local_678) {
      bVar3 = true;
      bVar4 = true;
    }
LAB_1400048a2:
    UVar13 = GetTickCount64();
    uVar15 = UVar13 - local_670;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar15;
    lVar20 = SUB168(ZEXT816(0x179ec9cbd821dc3b) * auVar1,8);
    GetExitCodeProcess(local_6c8.hProcess,&local_6d4);
    memset(local_238,0,0x200);
    FID_conflict_sprintf_s
              (local_238,0x100,
               L"{\\\"Elapsed\\\":\\\"%I64d\\\",\\\"Error\\\":\\\"%d\\\",\\\"Result\\\":\\\"%s\\\"}"
               ,(uVar15 - lVar20 >> 1) + lVar20 >> 0xf);
    lpCurrentDirectory = (uint *)0x0;
    local_588 = 0;
    local_580 = 7;
    local_598 = 0;
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (local_238[uVar15] != L'\0');
    FUN_140005740((longlong *)&local_598,local_238,uVar15);
    local_5a8 = 0;
    local_5a0 = 7;
    local_5b8 = 0;
    FUN_140005740((longlong *)&local_5b8,L"Loader_Exit",0xb);
    local_5c8 = 0;
    local_5c0 = 7;
    local_5d8 = 0;
    FUN_140005740((longlong *)&local_5d8,L"Loader",6);
    FUN_1400023b0((undefined8 *)&local_5d8,(undefined8 *)&local_5b8,(undefined8 *)&local_598);
    if (7 < local_5c0) {
      pvVar2 = (void *)CONCAT62(uStack_5d6,local_5d8);
      pvVar14 = pvVar2;
      if ((0xfff < local_5c0 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    if (7 < local_5a0) {
      pvVar2 = (void *)CONCAT62(uStack_5b6,local_5b8);
      pvVar14 = pvVar2;
      if ((0xfff < local_5a0 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    if (7 < local_580) {
      pvVar2 = (void *)CONCAT62(uStack_596,local_598);
      pvVar14 = pvVar2;
      if ((0xfff < local_580 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
    if (1 < nCount) {
      ppvVar16 = local_578;
      lpCurrentDirectory = (uint *)(ulonglong)(nCount - 1);
      do {
        ppvVar16 = ppvVar16 + 1;
        CloseHandle(*ppvVar16);
        lpCurrentDirectory = (uint *)((longlong)lpCurrentDirectory + -1);
      } while (lpCurrentDirectory != (uint *)0x0);
    }
    CloseHandle(local_6c8.hThread);
    CloseHandle(local_6c8.hProcess);
  } while (bVar4);
  if (bVar5) {
    FUN_1400041e0();
  }
  if ((longlong)local_6d0 - 1U < 0xfffffffffffffffe) {
    CloseHandle(local_6d0);
  }
LAB_140004b34:
  if (puVar19 != (uint *)0x0) {
    UnmapViewOfFile(puVar19);
  }
  if (local_6a8 != (HANDLE)0x0) {
    CloseHandle(local_6a8);
  }
  if (local_698 != (HANDLE)0x0) {
    CloseHandle(local_698);
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_738);
  return;
}




void FUN_140004ba0(undefined8 param_1,undefined8 param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint *puVar3;
  void *pvVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  DWORD DVar8;
  BOOL BVar9;
  longlong *plVar10;
  HINSTANCE pHVar11;
  HANDLE pvVar12;
  uint *TokenInformation;
  void *pvVar13;
  char *lpLibFileName;
  LPCSTR lpText;
  HINSTANCE pHVar14;
  undefined1 auStackY_448 [32];
  PSID local_3e8;
  HANDLE local_3e0;
  DWORD local_3d8 [2];
  longlong *local_3d0;
  undefined8 local_3c8;
  _SID_IDENTIFIER_AUTHORITY local_3c0;
  undefined2 local_3b8;
  undefined6 uStack_3b6;
  undefined8 local_3a8;
  ulonglong uStack_3a0;
  undefined2 local_398;
  undefined6 uStack_396;
  undefined8 local_388;
  ulonglong uStack_380;
  undefined2 local_378;
  undefined6 uStack_376;
  undefined8 local_368;
  ulonglong uStack_360;
  undefined2 local_358;
  undefined6 uStack_356;
  undefined8 local_348;
  ulonglong uStack_340;
  undefined2 local_338;
  undefined6 uStack_336;
  undefined8 local_328;
  ulonglong uStack_320;
  undefined2 local_318;
  undefined6 uStack_316;
  undefined8 local_308;
  ulonglong uStack_300;
  undefined2 local_2f8;
  undefined6 uStack_2f6;
  undefined8 local_2e8;
  ulonglong uStack_2e0;
  undefined2 local_2d8;
  undefined6 uStack_2d6;
  undefined8 local_2c8;
  ulonglong uStack_2c0;
  undefined2 local_2b8;
  undefined6 uStack_2b6;
  undefined8 local_2a8;
  ulonglong uStack_2a0;
  undefined2 local_298;
  undefined6 uStack_296;
  undefined8 local_288;
  ulonglong uStack_280;
  undefined2 local_278;
  undefined6 uStack_276;
  undefined8 local_268;
  ulonglong uStack_260;
  CHAR local_258 [272];
  CHAR local_148 [272];
  ulonglong local_38;
  
  local_3c8 = 0xfffffffffffffffe;
  local_38 = DAT_14000c010 ^ (ulonglong)auStackY_448;
  local_368 = 0;
  uStack_360 = 7;
  pHVar14 = (HINSTANCE)0x0;
  local_378 = 0;
  FUN_140005740((longlong *)&local_378,&DAT_14000892c,0);
  local_388 = 0;
  uStack_380 = 7;
  local_398 = 0;
  FUN_140005740((longlong *)&local_398,L"Loader_Start",0xc);
  local_3a8 = 0;
  uStack_3a0 = 7;
  local_3b8 = 0;
  FUN_140005740((longlong *)&local_3b8,L"Loader",6);
  FUN_1400023b0((undefined8 *)&local_3b8,(undefined8 *)&local_398,(undefined8 *)&local_378);
  if (7 < uStack_3a0) {
    pvVar4 = (void *)CONCAT62(uStack_3b6,local_3b8);
    pvVar13 = pvVar4;
    if ((0xfff < uStack_3a0 * 2 + 2) &&
       (pvVar13 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
  }
  if (7 < uStack_380) {
    pvVar4 = (void *)CONCAT62(uStack_396,local_398);
    pvVar13 = pvVar4;
    if ((0xfff < uStack_380 * 2 + 2) &&
       (pvVar13 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
  }
  if (7 < uStack_360) {
    pvVar4 = (void *)CONCAT62(uStack_376,local_378);
    pvVar13 = pvVar4;
    if ((0xfff < uStack_360 * 2 + 2) &&
       (pvVar13 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
  }
  plVar10 = (longlong *)FUN_140001c10();
  if (plVar10 == (longlong *)0x0) {
    FUN_140001a60(0x80004005);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((undefined **)*plVar10 == ATL::CAtlStringMgr::vftable) {
    LOCK();
    *(int *)(plVar10 + 4) = (int)plVar10[4] + 1;
    UNLOCK();
    plVar10 = plVar10 + 2;
  }
  else {
    plVar10 = (longlong *)(*(code *)((undefined **)*plVar10)[3])();
  }
  local_3d0 = plVar10 + 3;
  bVar5 = false;
  pHVar11 = pHVar14;
  if (param_3 == (void *)0x0) {
LAB_140004d9d:
    FUN_140005c60((longlong *)&local_3d0,param_3,(int)pHVar11);
  }
  else {
    if ((void *)0xffff < param_3) {
      pHVar11 = (HINSTANCE)0xffffffffffffffff;
      do {
        pHVar11 = (HINSTANCE)((longlong)&pHVar11->unused + 1);
      } while (*(char *)((longlong)param_3 + (longlong)pHVar11) != '\0');
      goto LAB_140004d9d;
    }
    FUN_140005a30((longlong *)&local_3d0,(uint)param_3 & 0xffff);
  }
  plVar10 = local_3d0;
  iVar7 = _mbscmp((uchar *)local_3d0,(uchar *)"-right");
  if (iVar7 == 0) {
    local_2e8 = 0;
    uStack_2e0 = 7;
    local_2f8 = 0;
    FUN_140005740((longlong *)&local_2f8,&DAT_14000892c,0);
    local_308 = 0;
    uStack_300 = 7;
    local_318 = 0;
    FUN_140005740((longlong *)&local_318,L"Trigger_Load",0xc);
    local_328 = 0;
    uStack_320 = 7;
    local_338 = 0;
    FUN_140005740((longlong *)&local_338,L"Folder",6);
    local_348 = 0;
    uStack_340 = 7;
    local_358 = 0;
    FUN_140005740((longlong *)&local_358,L"Load",4);
    FUN_140003210((undefined8 *)&local_358,(undefined8 *)&local_338,(undefined8 *)&local_318,
                  (undefined8 *)&local_2f8);
    if (7 < uStack_340) {
      pvVar4 = (void *)CONCAT62(uStack_356,local_358);
      pvVar13 = pvVar4;
      if ((0xfff < uStack_340 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar13);
    }
    if (7 < uStack_320) {
      pvVar4 = (void *)CONCAT62(uStack_336,local_338);
      pvVar13 = pvVar4;
      if ((0xfff < uStack_320 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar13);
    }
    if (7 < uStack_300) {
      pvVar4 = (void *)CONCAT62(uStack_316,local_318);
      pvVar13 = pvVar4;
      if ((0xfff < uStack_300 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar13);
    }
    if (7 < uStack_2e0) {
      pvVar4 = (void *)CONCAT62(uStack_2f6,local_2f8);
      pvVar13 = pvVar4;
      if ((0xfff < uStack_2e0 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)*(void **)((longlong)pvVar4 + -8)))))
      {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
LAB_140005195:
      free(pvVar13);
    }
  }
  else {
    iVar7 = _mbscmp((uchar *)plVar10,(uchar *)"-recycle");
    if (iVar7 == 0) {
      local_268 = 0;
      uStack_260 = 7;
      local_278 = 0;
      FUN_140005740((longlong *)&local_278,&DAT_14000892c,0);
      local_288 = 0;
      uStack_280 = 7;
      local_298 = 0;
      FUN_140005740((longlong *)&local_298,L"Trigger_Load",0xc);
      local_2a8 = 0;
      uStack_2a0 = 7;
      local_2b8 = 0;
      FUN_140005740((longlong *)&local_2b8,L"RecycleBin",10);
      local_2c8 = 0;
      uStack_2c0 = 7;
      local_2d8 = 0;
      FUN_140005740((longlong *)&local_2d8,L"Load",4);
      FUN_140003210((undefined8 *)&local_2d8,(undefined8 *)&local_2b8,(undefined8 *)&local_298,
                    (undefined8 *)&local_278);
      if (7 < uStack_2c0) {
        pvVar4 = (void *)CONCAT62(uStack_2d6,local_2d8);
        pvVar13 = pvVar4;
        if ((0xfff < uStack_2c0 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
      if (7 < uStack_2a0) {
        pvVar4 = (void *)CONCAT62(uStack_2b6,local_2b8);
        pvVar13 = pvVar4;
        if ((0xfff < uStack_2a0 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
      if (7 < uStack_280) {
        pvVar4 = (void *)CONCAT62(uStack_296,local_298);
        pvVar13 = pvVar4;
        if ((0xfff < uStack_280 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
      if (7 < uStack_260) {
        pvVar4 = (void *)CONCAT62(uStack_276,local_278);
        pvVar13 = pvVar4;
        if ((0xfff < uStack_260 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        goto LAB_140005195;
      }
    }
  }
  if (DAT_14000c9c0 == 0) {
    FUN_140001620();
  }
  if (DAT_14000c144 == 1) {
    lpLibFileName = "Chinese.dll";
LAB_1400051d9:
    pHVar11 = LoadLibraryA(lpLibFileName);
  }
  else {
    if (DAT_14000c144 == 3) {
      lpLibFileName = "Deutsch.dll";
      goto LAB_1400051d9;
    }
    pHVar11 = pHVar14;
    if (DAT_14000c144 == 4) {
      lpLibFileName = "Japanese.dll";
      goto LAB_1400051d9;
    }
  }
  DAT_14000c9b8 = pHVar11;
  LoadStringA(pHVar11,0x15a,s_Data_Recovery_Wizard_14000c040,0x104);
  DVar8 = GetVersion();
  if (DVar8 < 0x80000000) {
    local_3c0.Value[0] = '\0';
    local_3c0.Value[1] = '\0';
    local_3c0.Value[2] = '\0';
    local_3c0.Value[3] = '\0';
    local_3c0.Value[4] = '\0';
    local_3c0.Value[5] = '\x05';
    local_3e8 = (PSID)0x0;
    BVar9 = AllocateAndInitializeSid(&local_3c0,'\x02',0x20,0x220,0,0,0,0,0,0,&local_3e8);
    if (BVar9 != 0) {
      local_3e0 = (HANDLE)0x0;
      pvVar12 = GetCurrentThread();
      BVar9 = OpenThreadToken(pvVar12,0x2000a,1,&local_3e0);
      if (BVar9 == 0) {
        pvVar12 = GetCurrentProcess();
        BVar9 = OpenProcessToken(pvVar12,0x2000a,&local_3e0);
        if (BVar9 == 0) {
          FreeSid(local_3e8);
          local_3e8 = (PSID)0x0;
          goto LAB_1400052fb;
        }
      }
      local_3d8[0] = 0;
      GetTokenInformation(local_3e0,TokenGroups,(LPVOID)0x0,0,local_3d8);
      DVar8 = local_3d8[0];
      TokenInformation = (uint *)calloc((ulonglong)local_3d8[0],1);
      if (TokenInformation == (uint *)0x0) {
        FreeSid(local_3e8);
        local_3e8 = (PSID)0x0;
        CloseHandle(local_3e0);
        local_3e0 = (HANDLE)0x0;
      }
      else {
        GetTokenInformation(local_3e0,TokenGroups,TokenInformation,DVar8,local_3d8);
        puVar3 = TokenInformation;
        if (*TokenInformation != 0) {
          do {
            BVar9 = EqualSid(*(PSID *)(puVar3 + 2),local_3e8);
            if ((BVar9 != 0) && ((puVar3[4] & 6) != 0)) {
              bVar5 = true;
              break;
            }
            pHVar14 = (HINSTANCE)((longlong)&pHVar14->unused + 1);
            puVar3 = puVar3 + 4;
          } while (pHVar14 < (HINSTANCE)(ulonglong)*TokenInformation);
        }
        FreeSid(local_3e8);
        local_3e8 = (PSID)0x0;
        CloseHandle(local_3e0);
        local_3e0 = (HANDLE)0x0;
        free(TokenInformation);
        if (bVar5) {
          FUN_140004400();
          if (DAT_14000c9b8 != (HINSTANCE)0x0) {
            FreeLibrary(DAT_14000c9b8);
          }
          goto LAB_14000534f;
        }
      }
    }
LAB_1400052fb:
    memset(local_148,0,0x104);
    LoadStringA(DAT_14000c9b8,0x1d9,local_148,0x104);
    lpText = local_148;
  }
  else {
    memset(local_258,0,0x104);
    LoadStringA(DAT_14000c9b8,0x1da,local_258,0x104);
    lpText = local_258;
  }
  MessageBoxA((HWND)0x0,lpText,s_Data_Recovery_Wizard_14000c040,0x40);
LAB_14000534f:
  LOCK();
  plVar1 = plVar10 + -1;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 < 2) {
    (**(code **)(*(longlong *)plVar10[-3] + 8))();
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_448);
  return;
}




void FUN_1400054d0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}




longlong * FUN_140005540(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      _Memory = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}




undefined8 * FUN_1400055e0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 8) {
    uVar2 = param_2[1];
    uVar6 = 7;
    *param_1 = *param_2;
    param_1[1] = uVar2;
    goto LAB_1400056b9;
  }
  uVar6 = uVar1 | 7;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7ffffffffffffffe;
  }
  uVar5 = (uVar6 + 1) * 2;
  if (uVar6 + 1 < 0x8000000000000000) {
    if (0xfff < uVar5) goto LAB_14000566c;
    if (uVar5 != 0) {
      _Dst = operator_new(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
LAB_14000566c:
    uVar4 = uVar5 + 0x27;
    if (uVar4 <= uVar5) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar4);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  *param_1 = _Dst;
  memcpy(_Dst,param_2,uVar1 * 2 + 2);
LAB_1400056b9:
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  return param_1;
}




void FUN_1400056e0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}




longlong * FUN_140005740(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  void *_Memory;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  
  uVar1 = param_1[3];
  if (uVar1 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      FUN_140006360();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = param_3 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar5 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
      uVar7 = uVar6;
    }
    _Dst = (void *)0x0;
    uVar5 = (uVar7 + 1) * 2;
    uVar6 = 0xffffffffffffffff;
    if ((uVar7 + 1 < 0x8000000000000000) && (uVar6 = uVar5, uVar5 < 0x1000)) {
      if (uVar5 != 0) {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar5 = uVar6 + 0x27;
      if (uVar6 + 0x27 <= uVar6) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar5);
      if (pvVar3 == (void *)0x0) goto LAB_1400058bd;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[3] = uVar7;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_1400058bd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar4 = param_1;
    if (7 < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar4,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar4) = 0;
  }
  return param_1;
}




longlong * FUN_1400058d0(longlong *param_1,void *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong _Size;
  ulonglong uVar7;
  void *_Dst;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_2 + _Size) != '\0');
  uVar1 = param_1[3];
  if (uVar1 < _Size) {
    if (0x7fffffffffffffff < _Size) {
      FUN_140006360();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = _Size | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar5 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
      uVar7 = uVar6;
    }
    uVar5 = uVar7 + 1;
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar5) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar6);
      if (pvVar3 == (void *)0x0) goto LAB_140005a21;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[2] = _Size;
    param_1[3] = uVar7;
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
    if (0xf < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_140005a21:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar4 = param_1;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = _Size;
    memmove(plVar4,param_2,_Size);
    *(undefined1 *)((longlong)plVar4 + _Size) = 0;
  }
  return param_1;
}




undefined8 FUN_140005a30(longlong *param_1,uint param_2)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  HINSTANCE__ *hModule;
  HRSRC pHVar4;
  ushort *puVar5;
  LPSTR lpMultiByteStr;
  undefined8 uVar6;
  
  hModule = ATL::CAtlBaseModule::GetHInstanceAt((CAtlBaseModule *)&DAT_14000c950,0);
  if (hModule != (HINSTANCE__ *)0x0) {
    sVar2 = (short)(param_2 >> 4);
    iVar3 = 1;
    do {
      pHVar4 = FindResourceExW(hModule,(LPCWSTR)0x6,(LPCWSTR)(ulonglong)(ushort)(sVar2 + 1),0);
      if ((pHVar4 != (HRSRC)0x0) &&
         (puVar5 = FUN_140001aa0(hModule,pHVar4,param_2), puVar5 != (ushort *)0x0)) {
        if (hModule == (HMODULE)0x0) {
          return 0;
        }
        pHVar4 = FindResourceW(hModule,(LPCWSTR)(ulonglong)(ushort)(sVar2 + 1),(LPCWSTR)0x6);
        if ((pHVar4 != (HRSRC)0x0) &&
           (puVar5 = FUN_140001aa0(hModule,pHVar4,param_2), puVar5 != (ushort *)0x0)) {
          iVar3 = WideCharToMultiByte(3,0,(LPCWSTR)(puVar5 + 1),(uint)*puVar5,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (-1 < iVar3) {
            lpMultiByteStr = (LPSTR)*param_1;
            if ((int)(1U - *(int *)(lpMultiByteStr + -8) | *(int *)(lpMultiByteStr + -0xc) - iVar3)
                < 0) {
              FUN_140005ea0(param_1,iVar3);
              lpMultiByteStr = (LPSTR)*param_1;
            }
            WideCharToMultiByte(3,0,(LPCWSTR)(puVar5 + 1),(uint)*puVar5,lpMultiByteStr,iVar3,
                                (LPCSTR)0x0,(LPBOOL)0x0);
            if (iVar3 <= *(int *)(*param_1 + -0xc)) {
              *(int *)(*param_1 + -0x10) = iVar3;
              *(undefined1 *)((longlong)iVar3 + *param_1) = 0;
              return 1;
            }
          }
          FUN_140001a60(0x80070057);
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        return 0;
      }
      hModule = ATL::CAtlBaseModule::GetHInstanceAt((CAtlBaseModule *)&DAT_14000c950,iVar3);
      iVar3 = iVar3 + 1;
    } while (hModule != (HINSTANCE__ *)0x0);
  }
  return 0;
}




undefined8 * FUN_140005bd0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar2 = param_1[3];
  lVar3 = param_1[2];
  if (uVar1 <= uVar2 - lVar3) {
    param_1[2] = uVar1 + lVar3;
    puVar4 = param_1;
    if (7 < uVar2) {
      puVar4 = (undefined8 *)*param_1;
    }
    memmove((void *)((longlong)puVar4 + lVar3 * 2),param_2,uVar1 * 2);
    *(undefined2 *)((longlong)puVar4 + (uVar1 + lVar3) * 2) = 0;
    return param_1;
  }
  puVar4 = FUN_1400061b0(param_1,uVar1,uVar2,param_2,uVar1);
  return puVar4;
}




void FUN_140005c60(longlong *param_1,void *param_2,int param_3)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int *piVar5;
  longlong *plVar6;
  ulonglong _Size;
  ulonglong uVar7;
  void *_Dst;
  
  _Size = (ulonglong)param_3;
  if (param_3 == 0) {
    lVar3 = *param_1;
    plVar6 = *(longlong **)(lVar3 + -0x18);
    if (*(int *)(lVar3 + -0x10) != 0) {
      if (*(int *)(lVar3 + -8) < 0) {
        if (*(int *)(lVar3 + -0xc) < 0) goto LAB_140005dec;
        *(undefined4 *)(lVar3 + -0x10) = 0;
        *(undefined1 *)*param_1 = 0;
      }
      else {
        LOCK();
        piVar5 = (int *)(lVar3 + -8);
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 < 2) {
          (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
        }
        if ((undefined **)*plVar6 == ATL::CAtlStringMgr::vftable) {
          LOCK();
          *(int *)(plVar6 + 4) = (int)plVar6[4] + 1;
          UNLOCK();
          plVar6 = plVar6 + 2;
        }
        else {
          plVar6 = (longlong *)(*(code *)((undefined **)*plVar6)[3])(plVar6);
        }
        *param_1 = (longlong)(plVar6 + 3);
      }
    }
  }
  else {
    if (param_2 == (void *)0x0) {
      FUN_140001a60(0x80070057);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    _Dst = (void *)*param_1;
    uVar2 = *(uint *)((longlong)_Dst + -0x10);
    uVar7 = (longlong)param_2 - (longlong)_Dst;
    if (param_3 < 0) {
      FUN_140001a60(0x80070057);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((int)(1U - *(int *)((longlong)_Dst + -8) | *(int *)((longlong)_Dst + -0xc) - param_3) < 0) {
      FUN_140005ea0(param_1,param_3);
      _Dst = (void *)*param_1;
    }
    if (uVar2 < uVar7) {
      FUN_140005e10(_Dst,(longlong)*(int *)((longlong)_Dst + -0xc),param_2,param_3);
    }
    else {
      _Src = (void *)((longlong)_Dst + uVar7);
      if (param_3 != 0) {
        if (_Src == (void *)0x0) {
          piVar5 = _errno();
          *piVar5 = 0x16;
          _invalid_parameter_noinfo();
        }
        else if ((ulonglong)(longlong)*(int *)((longlong)_Dst + -0xc) < _Size) {
          piVar5 = _errno();
          *piVar5 = 0x22;
          _invalid_parameter_noinfo();
        }
        else {
          memmove(_Dst,_Src,_Size);
        }
      }
    }
    if (*(int *)(*param_1 + -0xc) < param_3) {
      FUN_140001a60(0x80070057);
LAB_140005dec:
      FUN_140001a60(0x80070057);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)(*param_1 + -0x10) = param_3;
    *(undefined1 *)(_Size + *param_1) = 0;
  }
  return;
}




void FUN_140005e10(void *param_1,ulonglong param_2,void *param_3,int param_4)

{
  int *piVar1;
  ulonglong _Size;
  
  if (param_4 == 0) {
    return;
  }
  _Size = (ulonglong)param_4;
  if (param_1 != (void *)0x0) {
    if ((param_3 != (void *)0x0) && (_Size <= param_2)) {
      memcpy(param_1,param_3,_Size);
      return;
    }
    memset(param_1,0,param_2);
    if (param_3 != (void *)0x0) {
      if (_Size <= param_2) {
        return;
      }
      piVar1 = _errno();
      *piVar1 = 0x22;
      goto LAB_140005e88;
    }
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
LAB_140005e88:
  _invalid_parameter_noinfo();
  return;
}




void FUN_140005ea0(longlong *param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = *param_1;
  if (param_2 < *(int *)(lVar6 + -0x10)) {
    param_2 = *(int *)(lVar6 + -0x10);
  }
  if (1 < *(int *)(lVar6 + -8)) {
    pvVar2 = (void *)*param_1;
    plVar7 = *(longlong **)((longlong)pvVar2 + -0x18);
    iVar4 = *(int *)((longlong)pvVar2 + -0x10);
    ppuVar5 = (undefined **)*plVar7;
    if (ppuVar5 != ATL::CAtlStringMgr::vftable) {
      plVar7 = (longlong *)(*(code *)ppuVar5[4])();
      ppuVar5 = (undefined **)*plVar7;
    }
    lVar6 = (*(code *)*ppuVar5)(plVar7,param_2,1);
    if (lVar6 == 0) {
      FUN_140006030();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar4 < param_2) {
      param_2 = iVar4;
    }
    FUN_140005e10((void *)(lVar6 + 0x18),(longlong)(param_2 + 1),pvVar2,param_2 + 1);
    *(int *)(lVar6 + 8) = iVar4;
    LOCK();
    piVar1 = (int *)((longlong)pvVar2 + -8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 < 2) {
      (**(code **)(**(longlong **)((longlong)pvVar2 + -0x18) + 8))
                (*(longlong **)((longlong)pvVar2 + -0x18),(longlong)pvVar2 + -0x18);
    }
    *param_1 = lVar6 + 0x18;
    return;
  }
  iVar4 = *(int *)(lVar6 + -0xc);
  if (param_2 <= iVar4) {
    return;
  }
  if (iVar4 < 0x40000001) {
    iVar4 = iVar4 / 2 + iVar4;
    if (param_2 <= iVar4) {
      param_2 = iVar4;
    }
  }
  else if (param_2 <= iVar4 + 0x100000) {
    param_2 = iVar4 + 0x100000;
  }
  if (((*(int *)(*param_1 + -0xc) < param_2) && (0 < param_2)) &&
     (lVar6 = (**(code **)(**(longlong **)(*param_1 + -0x18) + 0x10))(), lVar6 != 0)) {
    *param_1 = lVar6 + 0x18;
    return;
  }
  FUN_140006030();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}




void FUN_140006030(void)

{
  code *pcVar1;
  
  FUN_140001a60(0x8007000e);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




int FUN_140006040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_140001160();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,0x410,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




undefined8 * FUN_1400060a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Src;
  ulonglong uVar3;
  void *_Memory;
  
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar3 = param_3[2] + 0x13;
  uVar1 = param_1[2];
  if (uVar1 <= uVar3) {
    uVar2 = param_1[3];
    if (uVar2 != uVar3) {
      if (uVar2 < uVar3) {
        FUN_140006410(param_1,uVar3 - uVar1);
        param_1[2] = uVar1;
      }
      else if ((uVar3 < 8) && (7 < uVar2)) {
        _Src = (void *)*param_1;
        memcpy(param_1,_Src,uVar1 * 2 + 2);
        _Memory = _Src;
        if ((0xfff < param_1[3] * 2 + 2U) &&
           (_Memory = *(void **)((longlong)_Src + -8),
           0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
        param_1[3] = 7;
      }
    }
  }
  FUN_140006380(param_1,L" /SendInfo Window \"");
  FUN_140005bd0(param_1,param_3);
  return param_1;
}




undefined8 *
FUN_1400061b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
             longlong param_5)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  size_t _Size;
  void *pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Memory;
  void *_Dst;
  
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
    FUN_140006360();
    pcVar4 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar4)();
    return puVar6;
  }
  uVar3 = param_1[3];
  uVar7 = lVar2 + param_2 | 7;
  uVar9 = 0x7ffffffffffffffe;
  if (((uVar7 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (uVar8 = (uVar3 >> 1) + uVar3, uVar9 = uVar7, uVar7 < uVar8)) {
    uVar9 = uVar8;
  }
  _Dst = (void *)0x0;
  uVar7 = (uVar9 + 1) * 2;
  uVar8 = 0xffffffffffffffff;
  if ((uVar9 + 1 < 0x8000000000000000) && (uVar8 = uVar7, uVar7 < 0x1000)) {
    if (uVar7 != 0) {
      _Dst = operator_new(uVar7);
    }
  }
  else {
    uVar7 = uVar8 + 0x27;
    if (uVar8 + 0x27 <= uVar8) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar7);
    if (pvVar5 == (void *)0x0) goto LAB_140006308;
    _Dst = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar5;
  }
  _Size = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar9;
  puVar1 = (undefined2 *)((longlong)_Dst + (param_5 + lVar2) * 2);
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5 * 2);
    *puVar1 = 0;
  }
  else {
    pvVar5 = (void *)*param_1;
    memcpy(_Dst,pvVar5,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5 * 2);
    *puVar1 = 0;
    _Memory = pvVar5;
    if ((0xfff < uVar3 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
LAB_140006308:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




void FUN_140006360(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 * FUN_140006380(undefined8 *param_1,void *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(short *)((longlong)param_2 + uVar4 * 2) != 0);
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  if (uVar4 <= uVar1 - lVar2) {
    param_1[2] = lVar2 + uVar4;
    puVar3 = param_1;
    if (7 < uVar1) {
      puVar3 = (undefined8 *)*param_1;
    }
    memmove((void *)((longlong)puVar3 + lVar2 * 2),param_2,uVar4 * 2);
    *(undefined2 *)((longlong)puVar3 + (lVar2 + uVar4) * 2) = 0;
    return param_1;
  }
  puVar3 = FUN_1400061b0(param_1,uVar4,uVar1,param_2,uVar4);
  return puVar3;
}




undefined8 * FUN_140006410(undefined8 *param_1,ulonglong param_2)

{
  size_t _Size;
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Memory;
  void *_Dst;
  
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
    FUN_140006360();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar2 = param_1[3];
  uVar6 = lVar1 + param_2 | 7;
  uVar8 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uVar7 = (uVar2 >> 1) + uVar2, uVar8 = uVar6, uVar6 < uVar7)) {
    uVar8 = uVar7;
  }
  uVar6 = (uVar8 + 1) * 2;
  if (uVar8 + 1 < 0x8000000000000000) {
    if (0xfff < uVar6) goto LAB_1400064a7;
    if (uVar6 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
LAB_1400064a7:
    uVar7 = uVar6 + 0x27;
    if (uVar7 <= uVar6) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar7);
    if (pvVar4 == (void *)0x0) goto LAB_140006535;
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  param_1[2] = lVar1 + param_2;
  _Size = lVar1 * 2 + 2;
  param_1[3] = uVar8;
  if (uVar2 < 8) {
    memcpy(_Dst,param_1,_Size);
  }
  else {
    pvVar4 = (void *)*param_1;
    memcpy(_Dst,pvVar4,_Size);
    _Memory = pvVar4;
    if ((0xfff < uVar2 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
LAB_140006535:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14000c010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_1400065a4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  do {
    pvVar3 = malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_140007140();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_140007120();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

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
LAB_14000664a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_14000c328 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_14000c328;
        pvVar1 = DAT_14000c328;
      }
      DAT_14000c328 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_14000664a;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
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
    DAT_14000c330 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1400075fc();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1400075fc();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1400075fc();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400066a4(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_14000c331 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_14000c010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_14000c010;
      _DAT_14000c338 = in_RAX;
      uRam000000014000c340 = in_RAX;
      _DAT_14000c348 = in_RAX;
      _DAT_14000c350 = in_RAX;
      uRam000000014000c358 = in_RAX;
      _DAT_14000c360 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_14000c338);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_14000c350), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_14000c331 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00014000680a) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */
/* Library Function - Single Match
    __scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002d8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_1400067f3;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1400067f3:
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_14000c328 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_14000c330 == '\0') || (param_2 == '\0')) {
    FUN_1400075fc();
    FUN_1400075fc();
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
  
  bVar2 = (byte)DAT_14000c010 & 0x3f;
  if (((DAT_14000c010 ^ _DAT_14000c338) >> bVar2 | (DAT_14000c010 ^ _DAT_14000c338) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_14000c338,_Func);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_1400068d0(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_14000c368,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_140006a22;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_14000c398 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_14000c398 != (HANDLE)0x0) goto LAB_1400069c0;
  }
  else {
    DAT_14000c398 = (HANDLE)0x0;
    (*pFVar3)(&DAT_14000c390);
    bVar7 = 0x40 - ((byte)DAT_14000c010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_14000c3a0 = DAT_14000c010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_14000c3a8 = DAT_14000c010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_1400069c0:
    uVar6 = FUN_1400066a4(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_140006a30);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_140006a22:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_140006a30(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
  if (DAT_14000c398 != (HANDLE)0x0) {
    CloseHandle(DAT_14000c398);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
  uVar1 = (ulonglong)_tls_index;
  DAT_14000c004 = DAT_14000c004 + 1;
  *param_1 = DAT_14000c004;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_14000c004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_140006b0c:
                    /* WARNING: Could not recover jumptable at 0x000140006b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_14000c004;
      goto LAB_140006b0c;
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
  
  if (DAT_14000c398 != (HANDLE)0x0) {
    SetEvent(DAT_14000c398);
                    /* WARNING: Could not recover jumptable at 0x000140006b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_14000c398);
    return;
  }
  bVar1 = (byte)DAT_14000c010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000140007a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_14000c010 ^ _DAT_14000c3a8) >> bVar1 |
            (DAT_14000c010 ^ _DAT_14000c3a8) << 0x40 - bVar1))(&DAT_14000c390);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_14000c398 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
    WaitForSingleObjectEx(DAT_14000c398,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000140006be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14000c368);
    return;
  }
  bVar1 = (byte)DAT_14000c010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000140007a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_14000c010 ^ _DAT_14000c3a0) >> bVar1 |
            (DAT_14000c010 ^ _DAT_14000c3a0) << 0x40 - bVar1))
            (&DAT_14000c390,&DAT_14000c368,param_1);
  return;
}




void FUN_140006be8(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(2);
  uVar5 = FUN_1400075e4();
  _set_fmode((int)uVar5);
  puVar6 = (undefined4 *)__p__commode();
  uVar5 = FUN_140007494();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_1400066a4(1);
  if ((char)uVar5 != '\0') {
    FUN_140007640();
    atexit((_func_5014 *)&LAB_14000767c);
    uVar7 = FUN_1400010a0();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_1400075ec();
      bVar2 = FUN_140007624();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140007494);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140007494();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_1400075fc();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140007494();
      uVar5 = thunk_FUN_140007494();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_140006ccc(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  void *pvVar6;
  IMAGE_DOS_HEADER *pIVar7;
  undefined8 unaff_RBX;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = __scrt_initialize_crt(1);
  if ((char)uVar3 == '\0') {
    __scrt_fastfail(7);
  }
  else {
    bVar1 = false;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_14000c320 != 1) {
      if (DAT_14000c320 == 0) {
        DAT_14000c320 = 1;
        iVar2 = _initterm_e(&DAT_1400084b8,&DAT_1400084d8);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140008490);
        DAT_14000c320 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock((char)uVar3);
      plVar4 = (longlong *)FUN_140007630();
      if ((*plVar4 != 0) &&
         (uVar5 = __scrt_is_nonwritable_in_current_image((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)*plVar4)(0);
      }
      plVar4 = (longlong *)FUN_140007638();
      if ((*plVar4 != 0) &&
         (uVar5 = __scrt_is_nonwritable_in_current_image((longlong)plVar4), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar4);
      }
      __scrt_get_show_window_mode();
      pvVar6 = (void *)_get_narrow_winmain_command_line();
      pIVar7 = &IMAGE_DOS_HEADER_140000000;
      iVar2 = FUN_140004ba0(&IMAGE_DOS_HEADER_140000000,0,pvVar6);
      uVar5 = __scrt_is_managed_app();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)pIVar7 >> 8),1),'\0');
        return iVar2;
      }
      goto LAB_140006e2d;
    }
  }
  __scrt_fastfail(7);
LAB_140006e2d:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}




void entry(void)

{
  __security_init_cookie();
  FUN_140006ccc();
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
                    /* WARNING: Could not recover jumptable at 0x000140006e81. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x140006eb2;
  capture_previous_context((PCONTEXT)&DAT_14000c450);
  _DAT_14000c3c0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_14000c4e8 = puVar3 + 0x40;
  _DAT_14000c4d0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_14000c3b0 = 0xc0000409;
  _DAT_14000c3b4 = 1;
  _DAT_14000c3c8 = 1;
  DAT_14000c3d0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_14000c010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_14000c008;
  *(undefined8 *)(puVar3 + -8) = 0x140006f54;
  DAT_14000c548 = _DAT_14000c3c0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140008618);
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




undefined8 * FUN_140006fd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_140007010(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_140007030(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_140007070(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy(param_1 + 8);
  return this;
}




undefined8 * FUN_1400070dc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140007120(void)

{
  undefined8 local_28 [5];
  
  FUN_140007010(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14000a2d8);
}




void FUN_140007140(void)

{
  undefined8 local_28 [5];
  
  FUN_140007070(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14000a360);
}




char * FUN_140007160(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x000140007242) */
/* WARNING: Removing unreachable block (ram,0x0001400071c0) */
/* WARNING: Removing unreachable block (ram,0x00014000719b) */
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
  
  DAT_14000c01c = 2;
  _DAT_14000c018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_14000c020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_14000c920 = DAT_14000c920 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_14000c920 = DAT_14000c920 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_14000c018 = 2;
    DAT_14000c01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14000c01c = 0xe;
      _DAT_14000c018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_14000c018 = 5;
        DAT_14000c01c = 0x2e;
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_14000c030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400072fc(void)

{
  _DAT_14000c924 = 0;
  return;
}




/* Library Function - Single Match
    __scrt_fastfail
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  *(undefined8 *)(puVar4 + -8) = 0x140007337;
  FUN_1400072fc();
  *(undefined8 *)(puVar4 + -8) = 0x140007348;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140007352;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x14000736c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1400073ad;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1400073df;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140007401;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x140007422;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x14000742d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14000743d;
    FUN_1400072fc();
  }
  return;
}




/* Library Function - Single Match
    __scrt_get_show_window_mode
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  memset(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}




undefined8 FUN_140007494(void)

{
  return 0;
}




/* Library Function - Single Match
    __scrt_is_managed_app
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || (((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)) ||
             (piVar3[0x3e] == 0)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = 0x201;
  }
  return uVar2;
}




void FUN_1400074ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400074f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_1400074fc);
  return;
}




void _guard_check_icall(void)

{
  return;
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
  
  if (DAT_14000c010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_14000c010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_14000c010 == 0x2b992ddfa232) {
      DAT_14000c010 = 0x2b992ddfa233;
    }
  }
  DAT_14000c008 = ~DAT_14000c010;
  return;
}




undefined8 FUN_1400075e4(void)

{
  return 0x4000;
}




void FUN_1400075ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400075f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_14000c930);
  return;
}




undefined1 FUN_1400075fc(void)

{
  return 1;
}




undefined * FUN_140007600(void)

{
  return &DAT_14000c940;
}




void FUN_140007608(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140001160();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_140007600();
  *puVar1 = *puVar1 | 2;
  return;
}




bool FUN_140007624(void)

{
  return DAT_14000c028 == 0;
}




undefined * FUN_140007630(void)

{
  return &DAT_14000ce40;
}




undefined * FUN_140007638(void)

{
  return &DAT_14000ce38;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140007640(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140009978; puVar1 < &DAT_140009978; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::CAtlBaseModule(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  memset(this + 0x28,0,0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(IMAGE_DOS_HEADER **)(this + 0x10) = &IMAGE_DOS_HEADER_140000000;
  *(IMAGE_DOS_HEADER **)(this + 8) = &IMAGE_DOS_HEADER_140000000;
  *(undefined **)(this + 0x20) = &DAT_1400086b0;
  *(undefined4 *)this = 0x60;
  *(undefined4 *)(this + 0x18) = 0xe00;
  BVar2 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(this + 0x28),0,0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    DVar1 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      DVar1 = DVar3;
    }
    if ((int)DVar1 < 0) {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
      }
      DAT_14000c9c4 = 1;
    }
  }
  return this;
}




/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::~CAtlBaseModule(void) __ptr64
   
   Library: Visual Studio */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}




/* Library Function - Single Match
    public: struct HINSTANCE__ * __ptr64 __cdecl ATL::CAtlBaseModule::GetHInstanceAt(int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(CAtlBaseModule *this,int param_1)

{
  code *pcVar1;
  HINSTANCE__ *pHVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  pHVar2 = (HINSTANCE__ *)0x0;
  if ((param_1 <= *(int *)(this + 0x58)) && (-1 < param_1)) {
    if (param_1 == *(int *)(this + 0x58)) {
      pHVar2 = *(HINSTANCE__ **)(this + 0x10);
    }
    else {
      if (*(int *)(this + 0x58) <= param_1) {
        FUN_140001a40(0xc000008c,1);
        pcVar1 = (code *)swi(3);
        pHVar2 = (HINSTANCE__ *)(*pcVar1)();
        return pHVar2;
      }
      pHVar2 = *(HINSTANCE__ **)(*(longlong *)(this + 0x50) + (longlong)param_1 * 8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  return pHVar2;
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
  
                    /* WARNING: Could not recover jumptable at 0x000140007a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_140007a10(undefined8 param_1,longlong param_2)

{
  FUN_1400056e0(*(longlong **)(param_2 + 0x58));
  return;
}




void Unwind_140007a20(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_140007a30(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140007a40(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_140007a50(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x168));
  return;
}




void Unwind_140007a60(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x108));
  return;
}




void Unwind_140007a70(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x148));
  return;
}




void Unwind_140007a80(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0xe8));
  return;
}




void Unwind_140007a90(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_140007aa0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_140007ab0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0xa8));
  return;
}




void Unwind_140007ac0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_140007ad0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 200));
  return;
}




void Unwind_140007ae0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x1a8));
  return;
}




void Unwind_140007af0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x188));
  return;
}




void Unwind_140007b00(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x128));
  return;
}




void Unwind_140007b10(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0(*(longlong **)(param_2 + 0x38));
  return;
}




void Unwind_140007b20(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_140007b30(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x1e8));
  return;
}




void Unwind_140007b40(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x120));
  return;
}




void Unwind_140007b50(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x100));
  return;
}




void Unwind_140007b60(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0xe0));
  return;
}




void Unwind_140007b70(undefined8 param_1,longlong param_2)

{
  FUN_140001050((undefined8 *)(param_2 + 0x88));
  return;
}




void Unwind_140007b80(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x1a0));
  return;
}




void Unwind_140007b90(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x180));
  return;
}




void Unwind_140007ba0(undefined8 param_1,longlong param_2)

{
  FUN_1400054d0((longlong *)(param_2 + 0x160));
  return;
}




void Unwind_140007bb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1400054d0(*(longlong **)(param_2 + 0x40));
  }
  return;
}




void FUN_140007bee(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_140007c50(void)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < DAT_14000c160) {
    pvVar1 = (void *)CONCAT62(DAT_14000c148._2_6_,(undefined2)DAT_14000c148);
    _Memory = pvVar1;
    if ((0xfff < DAT_14000c160 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  DAT_14000c158 = 0;
  DAT_14000c160 = 7;
  DAT_14000c148._0_2_ = 0;
  return;
}



