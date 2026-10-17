
void FUN_00401000(void)

{
  uint unaff_retaddr;
  undefined4 local_20c;
  undefined1 auStack_208 [516];
  uint local_4;
  
  local_4 = DAT_00404004 ^ (uint)&local_20c;
  local_20c = local_20c & 0xffff0000;
  memset((void *)((int)&local_20c + 2),0,0x206);
  GetSystemDirectoryW((LPWSTR)&local_20c,0x104);
  u_C__Windows_System32_drivers_etc__00404028[0] = (wchar_t)local_20c;
  DAT_00404590 = GetFileAttributesW(u_C__Windows_System32_drivers_etc__00404028);
  SetFileAttributesW(u_C__Windows_System32_drivers_etc__00404028,0x80);
  DAT_00404024 = CreateFileW(u_C__Windows_System32_drivers_etc__00404028,0xc0000000,3,
                             (LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if ((DAT_00404024 != (HANDLE)0xffffffff) && (DAT_00404024 != (HANDLE)0x0)) {
    DAT_0040458c = GetFileSize(DAT_00404024,(LPDWORD)0x0);
    DAT_00404594 = (void *)FUN_0040165c(0x400);
    memset(DAT_00404594,0,0x400);
    local_20c = 0x4010d3;
    __security_check_cookie(unaff_retaddr ^ (uint)auStack_208);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_20c);
  return;
}




void * __cdecl FUN_00401100(int param_1,int *param_2)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  char *pcVar4;
  char *unaff_EBX;
  
  pvVar2 = DAT_00404594;
  if (unaff_EBX == (char *)0x0) {
    *param_2 = 0;
    return (void *)0x0;
  }
  memset(DAT_00404594,0,0x400);
  uVar3 = 0;
  if (param_1 != 1) {
    pcVar4 = unaff_EBX;
    do {
      if ((0x3fd < uVar3) ||
         (((cVar1 = *pcVar4, cVar1 == '\r' && (unaff_EBX[uVar3 + 1] == '\n')) || (cVar1 == '\0'))))
      break;
      pcVar4[(int)pvVar2 - (int)unaff_EBX] = cVar1;
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 < param_1 - 1U);
  }
  *(undefined1 *)((int)pvVar2 + uVar3) = 0xd;
  *(undefined1 *)((int)pvVar2 + uVar3 + 1) = 10;
  *param_2 = uVar3 + 1;
  return pvVar2;
}




void FUN_00401170(void)

{
  HANDLE hFile;
  void *_Dst;
  void *_Dst_00;
  BOOL BVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  size_t sVar5;
  void *_Src;
  DWORD DVar6;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  DWORD DStack_38;
  size_t sStack_34;
  DWORD DStack_30;
  void *pvStack_2c;
  DWORD DStack_28;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_24 [20];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00401f89;
  local_c = ExceptionList;
  local_10 = DAT_00404004 ^ (uint)auStack_44;
  ExceptionList = &local_c;
  if (((DAT_00404024 != (HANDLE)0xffffffff) && (DAT_00404024 != (HANDLE)0x0)) && (DAT_0040458c != 0)
     ) {
    _Dst = (void *)FUN_0040165c(DAT_0040458c + 5);
    _Dst_00 = (void *)FUN_0040165c(DAT_0040458c + 5);
    DVar6 = DAT_0040458c;
    sVar5 = DAT_0040458c + 5;
    DStack_38 = 0;
    memset(_Dst,0,sVar5);
    memset(_Dst_00,0,sVar5);
    hFile = DAT_00404024;
    *(undefined1 *)(DVar6 + (int)_Dst) = 0xd;
    *(undefined1 *)(DVar6 + 1 + (int)_Dst) = 10;
    pvStack_2c = _Dst_00;
    SetFilePointer(hFile,0,(PLONG)0x0,0);
    DStack_28 = 0;
    BVar1 = ReadFile(DAT_00404024,_Dst,DAT_0040458c,&DStack_28,(LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      uStack_3c = 0;
      _Src = _Dst;
      DVar6 = DAT_0040458c;
      if (DAT_0040458c != 0) {
        do {
          DVar6 = DAT_0040458c;
          sStack_34 = 0;
          pcVar2 = (char *)FUN_00401100((DAT_0040458c - uStack_3c) + 2,(int *)&sStack_34);
          if (pcVar2 == (char *)0x0) break;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_24,pcVar2);
          pcVar2 = (char *)&DAT_0040459c;
          do {
            pcVar3 = pcVar2;
            if (0xf < *(uint *)(pcVar2 + 0x14)) {
              pcVar3 = *(char **)pcVar2;
            }
            uVar4 = std::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                    find(abStack_24,pcVar3,0);
            sVar5 = sStack_34;
            if (uVar4 != *(uint *)npos_exref) goto LAB_00401307;
            pcVar2 = pcVar2 + 0x1c;
          } while ((int)pcVar2 < 0x40460c);
          if (DAT_0040458c < sStack_34 + DStack_38) {
            sVar5 = DAT_0040458c - DStack_38;
          }
          memcpy(pvStack_2c,_Src,sVar5);
          pvStack_2c = (void *)((int)pvStack_2c + sVar5);
          DStack_38 = DStack_38 + sVar5;
LAB_00401307:
          uStack_3c = uStack_3c + sVar5;
          _Src = (void *)((int)_Src + sVar5);
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_24);
          DVar6 = DAT_0040458c;
        } while (uStack_3c < DAT_0040458c);
      }
      memset(_Dst,0,DVar6 + 2);
      SetFilePointer(DAT_00404024,0,(PLONG)0x0,0);
      DStack_30 = 0;
      WriteFile(DAT_00404024,_Dst,DAT_0040458c,&DStack_30,(LPOVERLAPPED)0x0);
      SetFilePointer(DAT_00404024,0,(PLONG)0x0,0);
      DStack_30 = 0;
      WriteFile(DAT_00404024,_Dst_00,DStack_38,&DStack_30,(LPOVERLAPPED)0x0);
      SetEndOfFile(DAT_00404024);
      operator_delete__(_Dst);
      operator_delete__(_Dst_00);
    }
  }
  ExceptionList = pvStack_4;
  uStack_40 = 0x4013e3;
  __security_check_cookie((uint)puStack_8 ^ (uint)&uStack_3c);
  return;
}




void FUN_004013f0(void)

{
  HANDLE hFile;
  DWORD DVar1;
  void *_Dst;
  BOOL BVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int aiStack_30 [2];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_28 [24];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00401f49;
  local_c = ExceptionList;
  local_10 = DAT_00404004 ^ (uint)&uStack_38;
  ExceptionList = &local_c;
  if (((DAT_00404024 != (HANDLE)0xffffffff) && (uVar6 = 0, DAT_00404024 != (HANDLE)0x0)) &&
     (DAT_0040458c != 0)) {
    _Dst = (void *)FUN_0040165c(DAT_0040458c + 5);
    DVar1 = DAT_0040458c;
    memset(_Dst,0,DAT_0040458c + 5);
    hFile = DAT_00404024;
    *(undefined1 *)(DVar1 + (int)_Dst) = 0xd;
    *(undefined1 *)(DVar1 + 1 + (int)_Dst) = 10;
    SetFilePointer(hFile,0,(PLONG)0x0,0);
    aiStack_30[1] = 0;
    BVar2 = ReadFile(DAT_00404024,_Dst,DAT_0040458c,(LPDWORD)(aiStack_30 + 1),(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      uStack_34 = 0;
      if (DAT_0040458c != 0) {
        while( true ) {
          aiStack_30[0] = 0;
          pcVar3 = (char *)FUN_00401100((DAT_0040458c - uVar6) + 2,aiStack_30);
          if (pcVar3 == (char *)0x0) break;
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    (abStack_28,pcVar3);
          pcVar3 = (char *)&DAT_0040459c;
          do {
            pcVar4 = pcVar3;
            if (0xf < *(uint *)(pcVar3 + 0x14)) {
              pcVar4 = *(char **)pcVar3;
            }
            uVar5 = std::
                    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                    find(abStack_28,pcVar4,0);
            if (uVar5 != *(uint *)npos_exref) {
              uStack_34 = 1;
              std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
              ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (abStack_28);
              goto LAB_00401565;
            }
            pcVar3 = pcVar3 + 0x1c;
          } while ((int)pcVar3 < 0x40460c);
          uVar6 = uVar6 + aiStack_30[0];
          std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(abStack_28);
          if (DAT_0040458c <= uVar6) break;
        }
      }
LAB_00401565:
      operator_delete__(_Dst);
    }
  }
  ExceptionList = puStack_8;
  uStack_38 = 0x40159b;
  __security_check_cookie((uint)local_c ^ (uint)&uStack_34);
  return;
}




void FUN_004015a0(void)

{
  SetFileAttributesW(u_C__Windows_System32_drivers_etc__00404028,DAT_00404590);
  CloseHandle(DAT_00404024);
  DAT_00404024 = (HANDLE)0xffffffff;
  if (DAT_00404594 != (void *)0x0) {
    operator_delete__(DAT_00404594);
  }
  DAT_0040458c = 0;
  DAT_00404594 = (void *)0x0;
  return;
}




uint __cdecl FUN_004015f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (1 < param_1) {
    iVar1 = FUN_00401000();
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar1 = lstrcmpW(*(LPCWSTR *)(param_2 + 4),L"repair");
      if (iVar1 == 0) {
        iVar1 = FUN_00401170();
        FUN_004015a0();
        return (uint)(iVar1 == 0);
      }
      iVar1 = lstrcmpW(*(LPCWSTR *)(param_2 + 4),L"check");
      if (iVar1 == 0) {
        uVar2 = FUN_004013f0();
      }
      FUN_004015a0();
      return uVar2;
    }
  }
  return 1;
}




void FUN_0040165c(uint param_1)

{
  operator_new(param_1);
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_00404004) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
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
  
  local_8 = &DAT_004032a0;
  uStack_c = 0x401688;
  local_20[0] = decode_pointer(DAT_0040461c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_0040461c);
    local_24 = decode_pointer(DAT_00404618);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_0040461c = encode_pointer(local_20[0]);
    DAT_00404618 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_00401718();
  }
  return p_Var1;
}




void FUN_00401718(void)

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




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_004017e1();
  return;
}




void FUN_004017e1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint ___tmainCRTStartup(void)

{
  bool bVar1;
  void *Exchange;
  void *pvVar2;
  int iVar3;
  BOOL BVar4;
  
  Exchange = StackBase;
  bVar1 = false;
  do {
    pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_00404610,(LONG)Exchange,0);
    if (pvVar2 == (void *)0x0) {
LAB_0040188f:
      if (DAT_0040460c == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_0040460c == 0) {
        DAT_0040460c = 1;
        iVar3 = initterm_e(&DAT_00403108,&DAT_00403114);
        if (iVar3 != 0) {
          return 0xff;
        }
      }
      else {
        DAT_0040424c = 1;
      }
      if (DAT_0040460c == 1) {
        initterm(&DAT_004030f8,&DAT_00403104);
        DAT_0040460c = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_00404610,0);
      }
      if ((DAT_00404614 != (code *)0x0) &&
         (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00404614), BVar4 != 0)) {
        (*DAT_00404614)(0,2,0);
      }
      *(undefined4 *)__winitenv_exref = DAT_00404234;
      DAT_00404248 = FUN_004015f0(DAT_00404230,DAT_00404238);
      if (DAT_0040423c != 0) {
        if (DAT_0040424c == 0) {
          _cexit();
        }
        return DAT_00404248;
      }
                    /* WARNING: Subroutine does not return */
      exit(DAT_00404248);
    }
    if (pvVar2 == Exchange) {
      bVar1 = true;
      goto LAB_0040188f;
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
  
  _DAT_00404368 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040436c = &stack0x00000004;
  _DAT_004042a8 = 0x10001;
  _DAT_00404250 = 0xc0000409;
  _DAT_00404254 = 1;
  local_32c = DAT_00404004;
  local_328 = DAT_00404008;
  _DAT_0040425c = unaff_retaddr;
  _DAT_00404334 = in_GS;
  _DAT_00404338 = in_FS;
  _DAT_0040433c = in_ES;
  _DAT_00404340 = in_DS;
  _DAT_00404344 = unaff_EDI;
  _DAT_00404348 = unaff_ESI;
  _DAT_0040434c = unaff_EBX;
  _DAT_00404350 = in_EDX;
  _DAT_00404354 = in_ECX;
  _DAT_00404358 = in_EAX;
  _DAT_0040435c = unaff_EBP;
  DAT_00404360 = unaff_retaddr;
  _DAT_00404364 = in_CS;
  _DAT_00404370 = in_SS;
  DAT_004042a0 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_0040313c);
  if (DAT_004042a0 == 0) {
    _crt_debugger_hook(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00404004 ^ (uint)&param_2;
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
FUN_00401c1d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_00404004,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00401cb2) */
/* WARNING: Removing unreachable block (ram,0x00401cb8) */
/* WARNING: Removing unreachable block (ram,0x00401cba) */

void FUN_00401c9e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00401cd8) */
/* WARNING: Removing unreachable block (ram,0x00401cde) */
/* WARNING: Removing unreachable block (ram,0x00401ce0) */

void FUN_00401cc4(void)

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
  
  pcStack_10 = FUN_00401c1d;
  local_14 = ExceptionList;
  local_c = DAT_00404004 ^ 0x403320;
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




void FUN_00401e4a(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}




undefined4 FUN_00401e75(void)

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
  if ((DAT_00404004 == 0xbb40e64e) || ((DAT_00404004 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_00404004 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_00404004 == 0xbb40e64e) {
      DAT_00404004 = 0xbb40e64f;
    }
    else if ((DAT_00404004 & 0xffff0000) == 0) {
      DAT_00404004 = DAT_00404004 | DAT_00404004 << 0x10;
    }
    DAT_00404008 = ~DAT_00404004;
  }
  else {
    DAT_00404008 = ~DAT_00404004;
  }
  return;
}




void Unwind_00401f40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00401f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x2c));
  return;
}




void Unwind_00401f80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00401f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x2c));
  return;
}




void Unwind_00401fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_00404598);
  return;
}




void Unwind_00401fcb(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_004045b4);
  return;
}




void Unwind_00401fd6(void)

{
                    /* WARNING: Could not recover jumptable at 0x00401fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_004045d0);
  return;
}




void FUN_00402000(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00401fe1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_00404598,"activation.easeus.com.cn");
  uStack_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_004045b4,"activation.easeus.com");
  uStack_4._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_004045d0,"aaa100cd68bbe03f3.awsglobalaccelerator.com");
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &DAT_004045ec,"216.92.61.7");
  _atexit((_func_4879 *)&LAB_00402090);
  ExceptionList = local_c;
  return;
}



