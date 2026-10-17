
undefined4 FUN_10001000(void)

{
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2008 Release */

undefined4 __CRT_INIT_12(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  void *Exchange;
  void *pvVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  
  Exchange = StackBase;
  if (param_2 == (int *)0x0) {
    if (DAT_10003010 < 1) {
      return 0;
    }
    DAT_10003010 = DAT_10003010 + -1;
  }
  _DAT_1000334c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 == (int *)0x1) {
    bVar1 = false;
    while (pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_10003354,(LONG)Exchange,0),
          pvVar2 != (void *)0x0) {
      if (pvVar2 == Exchange) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_10003350 == 0) {
      DAT_10003350 = 1;
      iVar3 = initterm_e(&DAT_10002088,&DAT_10002090);
      if (iVar3 != 0) {
        return 0;
      }
      initterm(&DAT_10002080,&DAT_10002084);
      DAT_10003350 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar1) {
      InterlockedExchange((LONG *)&DAT_10003354,0);
    }
    if ((DAT_10003360 != (code *)0x0) &&
       (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_10003360), BVar4 != 0)) {
      (*DAT_10003360)(param_1,2,param_3);
    }
    DAT_10003010 = DAT_10003010 + 1;
  }
  else if (param_2 == (int *)0x0) {
    bVar1 = false;
    while (pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_10003354,(LONG)Exchange,0),
          pvVar2 != (void *)0x0) {
      if (pvVar2 == Exchange) {
        bVar1 = true;
        break;
      }
      Sleep(1000);
    }
    if (DAT_10003350 == 2) {
      param_2 = (int *)decode_pointer(DAT_1000335c);
      if (param_2 != (int *)0x0) {
        piVar5 = (int *)decode_pointer(DAT_10003358);
        param_1 = piVar5;
        param_3 = param_2;
        while (piVar5 = piVar5 + -1, param_2 <= piVar5) {
          if ((*piVar5 != 0) && (iVar3 = encoded_null(), *piVar5 != iVar3)) {
            pcVar6 = (code *)decode_pointer(*piVar5);
            iVar3 = encoded_null();
            *piVar5 = iVar3;
            (*pcVar6)();
            piVar7 = (int *)decode_pointer(DAT_1000335c);
            piVar8 = (int *)decode_pointer(DAT_10003358);
            if ((param_3 != piVar7) || (param_1 != piVar8)) {
              piVar5 = piVar8;
              param_1 = piVar8;
              param_2 = piVar7;
              param_3 = piVar7;
            }
          }
        }
        free(param_2);
        DAT_10003358 = encoded_null();
        DAT_1000335c = DAT_10003358;
      }
      DAT_10003350 = 0;
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_10003354,0);
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  return 1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000132c) */
/* WARNING: Removing unreachable block (ram,0x100012d9) */
/* WARNING: Removing unreachable block (ram,0x10001359) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

int ___DllMainCRTStartup(undefined4 param_1)

{
  int iVar1;
  undefined4 in_ECX;
  int in_EDX;
  int local_20;
  
  _DAT_10003008 = in_EDX;
  if ((in_EDX == 0) && (DAT_10003010 == 0)) {
    local_20 = 0;
  }
  else if (((in_EDX != 1) && (in_EDX != 2)) ||
          (local_20 = __CRT_INIT_12(param_1,in_EDX,in_ECX), local_20 != 0)) {
    local_20 = FUN_10001000(param_1,in_EDX,in_ECX);
    if ((in_EDX == 1) && (local_20 == 0)) {
      FUN_10001000(param_1,0,in_ECX);
      __CRT_INIT_12(param_1,0,in_ECX);
    }
    if (((in_EDX == 0) || (in_EDX == 3)) &&
       (iVar1 = __CRT_INIT_12(param_1,in_EDX,in_ECX), iVar1 == 0)) {
      local_20 = 0;
    }
  }
  FUN_10001397();
  return local_20;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001397(void)

{
  _DAT_10003008 = 0xffffffff;
  return;
}




void entry(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_10003130 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_10003134 = &stack0x00000004;
  _DAT_10003070 = 0x10001;
  _DAT_10003018 = 0xc0000409;
  _DAT_1000301c = 1;
  local_32c = DAT_10003000;
  local_328 = DAT_10003004;
  _DAT_10003024 = unaff_retaddr;
  _DAT_100030fc = in_GS;
  _DAT_10003100 = in_FS;
  _DAT_10003104 = in_ES;
  _DAT_10003108 = in_DS;
  _DAT_1000310c = unaff_EDI;
  _DAT_10003110 = unaff_ESI;
  _DAT_10003114 = unaff_EBX;
  _DAT_10003118 = in_EDX;
  _DAT_1000311c = in_ECX;
  _DAT_10003120 = in_EAX;
  _DAT_10003124 = unaff_EBP;
  DAT_10003128 = unaff_retaddr;
  _DAT_1000312c = in_CS;
  _DAT_10003138 = in_SS;
  DAT_10003068 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_100020c0);
  if (DAT_10003068 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_100021b0;
  uStack_c = 0x100014e3;
  local_20[0] = decode_pointer(DAT_1000335c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_1000335c);
    local_24 = decode_pointer(DAT_10003358);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_1000335c = encode_pointer(local_20[0]);
    DAT_10003358 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_10001573();
  }
  return p_Var1;
}




void FUN_10001573(void)

{
  _unlock(8);
  return;
}




/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  int iVar1;
  
  iVar1 = __onexit(param_1);
  return (iVar1 != 0) - 1;
}




/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}




/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2008 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_100017a1;
  local_14 = ExceptionList;
  local_c = DAT_10003000 ^ 0x100021d0;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10000000,(DWORD_PTR)(pTarget + -0x10000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}




/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_10003000 ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}




void FUN_100017a1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_10003000,&LAB_10001008,param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2008 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_10003000 == 0xbb40e64e) || ((DAT_10003000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_10003000 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_10003000 == 0xbb40e64e) {
      DAT_10003000 = 0xbb40e64f;
    }
    else if ((DAT_10003000 & 0xffff0000) == 0) {
      DAT_10003000 = DAT_10003000 | DAT_10003000 << 0x10;
    }
    DAT_10003004 = ~DAT_10003000;
  }
  else {
    DAT_10003004 = ~DAT_10003000;
  }
  return;
}



