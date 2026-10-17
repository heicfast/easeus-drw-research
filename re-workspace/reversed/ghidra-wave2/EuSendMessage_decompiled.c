
size_t __cdecl FUN_00401000(LPCWSTR param_1,int param_2,LPSTR param_3,size_t *param_4)

{
  CHAR local_10 [4];
  size_t local_c;
  BOOL local_8;
  
  if ((param_1 == (LPCWSTR)0x0) || (param_2 == 0)) {
    local_c = 0;
  }
  else {
    local_10[0] = '_';
    local_10[1] = '\0';
    local_8 = 1;
    local_c = WideCharToMultiByte(0,0x200,param_1,param_2,(LPSTR)0x0,0,local_10,&local_8);
    if ((int)local_c < 1) {
      local_c = 0;
    }
    else if ((param_3 == (LPSTR)0x0) || ((int)*param_4 < (int)local_c)) {
      *param_4 = local_c;
    }
    else {
      memset(param_3,0,*param_4);
      local_c = WideCharToMultiByte(0,0x200,param_1,param_2,param_3,local_c,local_10,&local_8);
      *param_4 = local_c;
    }
  }
  return local_c;
}




void FUN_004010c0(void)

{
  char cVar1;
  LPWSTR lpCmdLine;
  int *pNumArgs;
  char *local_8b8;
  undefined4 local_8b4;
  int local_8b0;
  CHAR *local_8ac;
  int local_8a8;
  HWND local_8a4;
  size_t local_8a0;
  wchar_t local_89c;
  undefined1 local_89a [1042];
  size_t local_488;
  CHAR local_484;
  undefined1 local_483 [1043];
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  int local_20 [6];
  LPWSTR *local_8;
  
  local_70 = DAT_00403000 ^ (uint)&stack0xfffffffc;
  local_8 = (LPWSTR *)0x0;
  local_20[0] = 0;
  local_20[5] = 0;
  local_6c = 0x44;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_40 = 1;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  pNumArgs = local_20;
  lpCmdLine = GetCommandLineW();
  local_8 = CommandLineToArgvW(lpCmdLine,pNumArgs);
  if ((local_8 == (LPWSTR *)0x0) || (local_20[0] < 2)) {
    local_20[5] = 0xffffffff;
  }
  else {
    local_89c = L'\0';
    memset(local_89a,0,0x40e);
    for (local_8a8 = 0; local_8a8 < local_20[0]; local_8a8 = local_8a8 + 1) {
      if (local_8a8 == 1) {
        wcscat_s(&local_89c,0x208,local_8[1]);
      }
    }
    local_484 = '\0';
    memset(local_483,0,0x40f);
    local_8a0 = 0x410;
    local_488 = FUN_00401000(&local_89c,0x208,&local_484,&local_8a0);
    local_8a4 = FindWindowW((LPCWSTR)0x0,L"DRW_Installer");
    if (local_8a4 != (HWND)0x0) {
      local_8b4 = 999;
      local_8b8 = &local_484;
      do {
        cVar1 = *local_8b8;
        local_8b8 = local_8b8 + 1;
      } while (cVar1 != '\0');
      local_8b0 = (int)local_8b8 - (int)local_483;
      local_8ac = &local_484;
      SendMessageW(local_8a4,0x4a,0,(LPARAM)&local_8b4);
    }
    local_20[5] = 0;
  }
  __security_check_cookie(local_70 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_00403000) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

int ___tmainCRTStartup(void)

{
  byte bVar1;
  void *Exchange;
  void *pvVar2;
  BOOL BVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  _STARTUPINFOA local_6c;
  byte *local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x401346;
  bVar5 = false;
  local_20 = 0;
  local_8 = 0;
  GetStartupInfoA(&local_6c);
  Exchange = StackBase;
  local_8 = 1;
  do {
    pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_00403380,(LONG)Exchange,0);
    if (pvVar2 == (void *)0x0) {
LAB_0040139d:
      if (DAT_0040337c == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_0040337c == 0) {
        DAT_0040337c = 1;
        iVar4 = initterm_e(&DAT_004020dc,&DAT_004020e8);
        if (iVar4 != 0) {
          return 0xff;
        }
      }
      else {
        DAT_0040303c = 1;
      }
      if (DAT_0040337c == 1) {
        initterm(&DAT_004020d0,&DAT_004020d8);
        DAT_0040337c = 2;
      }
      if (!bVar5) {
        InterlockedExchange((LONG *)&DAT_00403380,0);
      }
      if ((DAT_0040338c != (code *)0x0) &&
         (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0040338c), BVar3 != 0)) {
        (*DAT_0040338c)(0,2,0);
      }
      pbVar6 = *(byte **)_acmdln_exref;
      while ((bVar1 = *pbVar6, local_24 = pbVar6, 0x20 < bVar1 || ((bVar1 != 0 && (local_20 != 0))))
            ) {
        if (bVar1 == 0x22) {
          local_20 = (uint)(local_20 == 0);
        }
        iVar4 = _ismbblead((uint)bVar1);
        if (iVar4 != 0) {
          pbVar6 = pbVar6 + 1;
        }
        pbVar6 = pbVar6 + 1;
      }
      for (; (*local_24 != 0 && (*local_24 < 0x21)); local_24 = local_24 + 1) {
      }
      DAT_00403038 = FUN_004010c0();
      if (DAT_0040302c != 0) {
        if (DAT_0040303c == 0) {
          _cexit();
        }
        return DAT_00403038;
      }
                    /* WARNING: Subroutine does not return */
      exit(DAT_00403038);
    }
    if (pvVar2 == Exchange) {
      bVar5 = true;
      goto LAB_0040139d;
    }
    Sleep(1000);
  } while( true );
}




void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
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
  
  _DAT_00403158 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040315c = &stack0x00000004;
  _DAT_00403098 = 0x10001;
  _DAT_00403040 = 0xc0000409;
  _DAT_00403044 = 1;
  local_32c = DAT_00403000;
  local_328 = DAT_00403004;
  _DAT_0040304c = unaff_retaddr;
  _DAT_00403124 = in_GS;
  _DAT_00403128 = in_FS;
  _DAT_0040312c = in_ES;
  _DAT_00403130 = in_DS;
  _DAT_00403134 = unaff_EDI;
  _DAT_00403138 = unaff_ESI;
  _DAT_0040313c = unaff_EBX;
  _DAT_00403140 = in_EDX;
  _DAT_00403144 = in_ECX;
  _DAT_00403148 = in_EAX;
  _DAT_0040314c = unaff_EBP;
  DAT_00403150 = unaff_retaddr;
  _DAT_00403154 = in_CS;
  _DAT_00403160 = in_SS;
  DAT_00403090 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_0040210c);
  if (DAT_00403090 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}




/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  ULONG_PTR UVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((UVar2 = pEVar1->ExceptionInformation[0], UVar2 == 0x19930520 ||
      (((UVar2 == 0x19930521 || (UVar2 == 0x19930522)) || (UVar2 == 0x1994000)))))) {
    terminate();
  }
  return 0;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t param_1)

{
  _onexit_t p_Var1;
  undefined4 uVar2;
  undefined4 local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00402230;
  uStack_c = 0x40176c;
  local_20[0] = decode_pointer(DAT_00403388);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_00403388);
    local_24 = decode_pointer(DAT_00403384);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_00403388 = encode_pointer(local_20[0]);
    DAT_00403384 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_004017fc();
  }
  return p_Var1;
}




void FUN_004017fc(void)

{
  _unlock(8);
  return;
}




/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2008 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* WARNING: Removing unreachable block (ram,0x00401830) */
/* WARNING: Removing unreachable block (ram,0x00401836) */
/* WARNING: Removing unreachable block (ram,0x00401838) */

void FUN_0040181c(void)

{
  return;
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
  
  pcStack_10 = FUN_00401a25;
  local_14 = ExceptionList;
  local_c = DAT_00403000 ^ 0x402250;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
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
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00403000 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
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




void __cdecl
FUN_00401a25(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00403000,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}




void FUN_00401a4a(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}




undefined4 FUN_00401a75(void)

{
  return 0;
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
  if ((DAT_00403000 == 0xbb40e64e) || ((DAT_00403000 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00403000 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00403000 == 0xbb40e64e) {
      DAT_00403000 = 0xbb40e64f;
    }
    else if ((DAT_00403000 & 0xffff0000) == 0) {
      DAT_00403000 = DAT_00403000 | DAT_00403000 << 0x10;
    }
    DAT_00403004 = ~DAT_00403000;
  }
  else {
    DAT_00403004 = ~DAT_00403000;
  }
  return;
}



