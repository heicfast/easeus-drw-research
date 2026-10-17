
undefined8 FUN_180001000(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined * FUN_180001010(void)

{
  return &DAT_1800bde58;
}




int FUN_180001020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180001010();
  local_14 = __stdio_common_vswprintf(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




void FUN_180001090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180001020(param_1,param_2,param_3,0,param_4);
  return;
}




undefined4
FUN_1800010d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180001090(param_1,0x7fffffff,param_2,&local_res18);
  return uVar1;
}




/* Library Function - Single Match
    wmemchr
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

wchar_t * __cdecl wmemchr(wchar_t *_S,wchar_t _C,size_t _N)

{
  wchar_t *local_res8;
  size_t local_res18;
  
  local_res8 = _S;
  local_res18 = _N;
  while( true ) {
    if (local_res18 == 0) {
      return (wchar_t *)0x0;
    }
    if (*local_res8 == _C) break;
    local_res8 = local_res8 + 1;
    local_res18 = local_res18 - 1;
  }
  return local_res8;
}




undefined1 * FUN_180001190(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = param_3 << 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




void FUN_1800011c0(void *param_1,void *param_2,longlong param_3)

{
  memmove(param_1,param_2,param_3 << 1);
  return;
}




undefined8 FUN_180001200(void)

{
  return 0x7fffffffffffffff;
}




void FUN_180001210(void)

{
  return;
}




void FUN_180001220(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_180001240(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *param_2 + 0x27;
  uVar1 = *param_1 - *(longlong *)(*param_1 + -8);
  if ((7 < uVar1) && (uVar1 < 0x28)) {
    *param_1 = *(longlong *)(*param_1 + -8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




undefined8 FUN_1800012e0(undefined8 param_1)

{
  return param_1;
}




void FUN_1800012f0(undefined8 param_1,undefined8 param_2,undefined *param_3,longlong param_4,
                  int param_5)

{
  int iVar1;
  LPCWSTR pszDir;
  undefined8 uVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  wchar_t *pwVar5;
  __uint64 _Var6;
  undefined1 auStack_b18 [32];
  DWORD local_af8;
  __uint64 local_af0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_ae8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_ae0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_ad8;
  undefined8 local_ad0;
  undefined1 local_ac8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_aa8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a88 [32];
  wchar_t local_a68 [264];
  wchar_t local_858 [264];
  WCHAR local_648 [264];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_ad0 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_b18;
  pWVar4 = local_648;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  GetModuleFileNameW((HMODULE)0x0,local_648,0x104);
  local_ae8 = basic_string<>(local_aa8,local_648);
  local_af0 = FUN_180001ca0(local_ae8,L"\\/",0xffffffffffffffff);
  FUN_180001db0(local_aa8);
  if (local_af0 != 0xffffffffffffffff) {
    local_ae0 = basic_string<>(local_a88,local_648);
    _Var6 = local_af0;
    local_ad8 = local_ae0;
    FUN_180001c30(local_ae0,(longlong)local_ac8,0,local_af0);
    FUN_180001db0(local_a88);
    pWVar4 = local_438;
    for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)pWVar4 = 0;
      pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
    }
    pszDir = (LPCWSTR)FUN_180001d20(local_ac8);
    PathCombineW(local_438,pszDir,L"..\\BUILDPE\\Tools");
    local_af8 = GetFileAttributesW(local_438);
    if ((local_af8 & 0x10) != 0) {
      pWVar4 = local_228;
      for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)pWVar4 = 0;
        pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
      }
      pwVar5 = local_a68;
      for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)pwVar5 = 0;
        pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
      }
      uVar2 = FUN_180001d20(param_2);
      FUN_1800010d0(local_a68,L"%s\\TOOLS",uVar2,_Var6);
      iVar1 = _waccess(local_a68,0);
      if (iVar1 == -1) {
        CreateDirectoryW(local_a68,(LPSECURITY_ATTRIBUTES)0x0);
      }
      uVar2 = FUN_180001d20(local_ac8);
      FUN_1800010d0(local_228,L"%s\\BUILDPE\\Downloads\\TOOLS\\Google Chrome",uVar2,_Var6);
      pwVar5 = local_858;
      for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)pwVar5 = 0;
        pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
      }
      FUN_1800010d0(local_858,L"%s\\Google Chrome",local_a68,_Var6);
      iVar1 = _waccess(local_858,0);
      if (iVar1 == -1) {
        CreateDirectoryW(local_858,(LPSECURITY_ATTRIBUTES)0x0);
      }
      FUN_180001620(local_858,local_228);
      if ((param_3 != (undefined *)0x0) && (param_4 != 0)) {
        param_5 = param_5 + 1;
        (*(code *)param_3)(param_4,param_5);
      }
      if ((param_3 != (undefined *)0x0) && (param_4 != 0)) {
        param_5 = param_5 + 1;
        (*(code *)param_3)(param_4,param_5);
      }
      if ((param_3 != (undefined *)0x0) && (param_4 != 0)) {
        (*(code *)param_3)(param_4,param_5 + 1);
      }
    }
    FUN_180001db0(local_ac8);
  }
  FUN_180001db0(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_b18);
  return;
}




void FUN_180001620(wchar_t *param_1,WCHAR *param_2)

{
  WCHAR WVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 *puVar5;
  _WIN32_FIND_DATAW *p_Var6;
  wchar_t *pwVar7;
  short *psVar8;
  WCHAR *pWVar9;
  undefined1 auStack_958 [32];
  uint local_938;
  WCHAR local_934;
  WCHAR local_932;
  wchar_t local_930;
  short *local_928;
  short *local_920;
  short *local_918;
  WCHAR *local_910;
  WCHAR *local_908;
  DWORD local_900;
  HANDLE local_8f8;
  WCHAR *local_8f0;
  WCHAR *local_8e8;
  wchar_t *local_8e0;
  WCHAR *local_8d8;
  WCHAR *local_8d0;
  wchar_t *local_8c8;
  WCHAR *local_8c0;
  WCHAR *local_8b8;
  wchar_t *local_8b0;
  _WIN32_FIND_DATAW local_8a8;
  wchar_t local_658 [263];
  short sStack_44a;
  WCHAR local_448 [263];
  short sStack_23a;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_958;
  local_900 = 0;
  local_938 = 0;
  p_Var6 = &local_8a8;
  for (lVar4 = 0x250; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&p_Var6->dwFileAttributes = 0;
    p_Var6 = (_WIN32_FIND_DATAW *)((longlong)&p_Var6->dwFileAttributes + 1);
  }
  local_8f8 = (HANDLE)0xffffffffffffffff;
  pWVar9 = local_238;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar9 = 0;
    pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
  }
  pWVar9 = local_448;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar9 = 0;
    pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
  }
  pwVar7 = local_658;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pwVar7 = 0;
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
  }
  iVar2 = _waccess(param_1,0);
  if (iVar2 == -1) {
    CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  local_8c0 = local_238;
  local_8f0 = local_8c0;
  local_8d8 = param_2;
  do {
    local_934 = *local_8d8;
    *local_8f0 = local_934;
    local_8d8 = local_8d8 + 1;
    local_8f0 = local_8f0 + 1;
  } while (local_934 != L'\0');
  local_928 = &sStack_23a;
  do {
    local_928 = local_928 + 1;
  } while (*local_928 != 0);
  puVar5 = &DAT_18003fa40;
  psVar8 = local_928;
  for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)psVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    psVar8 = (short *)((longlong)psVar8 + 1);
  }
  local_8f8 = FindFirstFileW(local_238,&local_8a8);
  if (local_8f8 == (HANDLE)0xffffffffffffffff) {
    local_938 = 0xe211d12;
  }
  else {
    do {
      if ((local_8a8.cFileName[0] != L'.') || ((local_8a8.dwFileAttributes & 0x10) == 0)) {
        local_8b8 = local_448;
        local_8e8 = local_8b8;
        local_8d0 = param_2;
        do {
          local_932 = *local_8d0;
          *local_8e8 = local_932;
          local_8d0 = local_8d0 + 1;
          local_8e8 = local_8e8 + 1;
        } while (local_932 != L'\0');
        local_920 = &sStack_44a;
        do {
          local_920 = local_920 + 1;
        } while (*local_920 != 0);
        puVar5 = &DAT_18003f93c;
        psVar8 = local_920;
        for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)psVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          psVar8 = (short *)((longlong)psVar8 + 1);
        }
        local_918 = &sStack_44a;
        do {
          local_918 = local_918 + 1;
        } while (*local_918 != 0);
        lVar4 = 0;
        do {
          WVar1 = local_8a8.cFileName[lVar4];
          local_918[lVar4] = WVar1;
          lVar4 = lVar4 + 1;
        } while (WVar1 != L'\0');
        local_8b0 = local_658;
        local_8e0 = local_8b0;
        local_8c8 = param_1;
        do {
          local_930 = *local_8c8;
          *local_8e0 = local_930;
          local_8c8 = local_8c8 + 1;
          local_8e0 = local_8e0 + 1;
        } while (local_930 != L'\0');
        local_910 = local_8a8.cAlternateFileName + 0xd;
        do {
          local_910 = local_910 + 1;
        } while (*local_910 != L'\0');
        puVar5 = &DAT_18003f95c;
        pWVar9 = local_910;
        for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)pWVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
        }
        local_908 = local_8a8.cAlternateFileName + 0xd;
        do {
          local_908 = local_908 + 1;
        } while (*local_908 != L'\0');
        lVar4 = 0;
        do {
          WVar1 = local_8a8.cFileName[lVar4];
          local_908[lVar4] = WVar1;
          lVar4 = lVar4 + 1;
        } while (WVar1 != L'\0');
        if ((local_8a8.dwFileAttributes & 0x10) == 0) {
          BVar3 = CopyFileW(local_448,local_658,0);
          if (BVar3 == 0) {
            local_938 = 0x11711d12;
            goto LAB_180001ad8;
          }
          local_938 = 0;
        }
        else {
          BVar3 = CreateDirectoryW(local_658,(LPSECURITY_ATTRIBUTES)0x0);
          if (BVar3 == 0) {
            local_938 = 0xf911d12;
            goto LAB_180001ad8;
          }
          local_938 = 0;
          local_938 = FUN_180001b10(local_658,local_448);
          if (((local_938 & 0xfff) != 0) ||
             (local_938 = FUN_180001620(local_658,local_448), (local_938 & 0xfff) != 0))
          goto LAB_180001ad8;
        }
      }
      BVar3 = FindNextFileW(local_8f8,&local_8a8);
    } while (BVar3 != 0);
    local_900 = GetLastError();
    if (local_900 != 0x12) {
      local_938 = 0x12411d12;
    }
  }
LAB_180001ad8:
  if (local_8f8 != (HANDLE)0xffffffffffffffff) {
    FindClose(local_8f8);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_958);
  return;
}




undefined4 FUN_180001b10(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  DWORD local_38;
  undefined4 local_34;
  DWORD local_30;
  void *local_28;
  void *local_20;
  void *local_18;
  
  local_34 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = (void *)0x0;
  GetFileSecurityW(param_2,4,(PSECURITY_DESCRIPTOR)0x0,0,&local_38);
  if (local_38 != 0) {
    local_28 = operator_new((ulonglong)local_38);
    local_20 = local_28;
    if (local_28 == (void *)0x0) {
      local_34 = 0x14411408;
    }
    else {
      local_30 = local_38;
      BVar1 = GetFileSecurityW(param_2,4,local_28,local_38,&local_38);
      if (BVar1 == 0) {
        local_34 = 0x14c11d12;
      }
      else {
        BVar1 = SetFileSecurityW(param_1,4,local_28);
        if (BVar1 == 0) {
          local_34 = 0x15311d12;
        }
      }
    }
  }
  if (local_28 != (void *)0x0) {
    local_18 = local_28;
    free(local_28);
  }
  return local_34;
}




longlong FUN_180001c30(undefined8 param_1,longlong param_2,ulonglong param_3,__uint64 param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_1800020c0(param_1,local_18);
  FUN_180002460(param_2,param_1,param_3,param_4,uVar1);
  return param_2;
}




void FUN_180001ca0(undefined8 param_1,wchar_t *param_2,__uint64 param_3)

{
  undefined8 *puVar1;
  __uint64 _Var2;
  wchar_t *pwVar3;
  
  puVar1 = (undefined8 *)FUN_180001f40(param_1);
  _Var2 = std::_WChar_traits<wchar_t>::length(param_2);
  pwVar3 = (wchar_t *)Myptr(puVar1);
  FUN_1800029e0(pwVar3,puVar1[2],param_3,param_2,_Var2);
  return;
}




void FUN_180001d20(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180001f40(param_1);
  Myptr(puVar1);
  return;
}




void FUN_180001d50(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,param_2);
  return;
}




void FUN_180001d80(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,undefined8 param_2)

{
  FID_conflict_append(param_1,param_2);
  return;
}




void FUN_180001db0(undefined8 param_1)

{
  FID_conflict__Tidy_deallocate(param_1);
  FUN_180001e90();
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(unsigned short const * __ptr64 const) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(wchar_t const * __ptr64 const) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *
basic_string<>(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               *param_1,wchar_t *param_2)

{
  FUN_180001f60((longlong)param_1);
  FID_conflict__Tidy_init(param_1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > const & __ptr64) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > const & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined8 param_2)

{
  IObject *pIVar1;
  IObject local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pIVar1 = (IObject *)FUN_180001f40(param_2);
  pIVar1 = IObject::operator=(local_18,pIVar1);
  FUN_180002b90(param_1,pIVar1);
  FID_conflict__Construct_lv_contents(param_1,param_2);
  return param_1;
}




void FUN_180001e90(void)

{
  FUN_180001eb0();
  return;
}




void FUN_180001eb0(void)

{
  FUN_180001ed0();
  return;
}




void FUN_180001ed0(void)

{
  FUN_180001210();
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<unsigned
   short> >::_Myptr(void) __ptr64
    public: wchar_t * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * Myptr(undefined8 *param_1)

{
  bool bVar1;
  undefined8 local_18;
  
  bVar1 = Large_string_engaged((longlong)param_1);
  local_18 = param_1;
  if (bVar1) {
    local_18 = (undefined8 *)FUN_1800012e0(*param_1);
  }
  return local_18;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x1f30  4  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1f30  5  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




void FUN_180001f40(undefined8 param_1)

{
  FUN_1800012e0(param_1);
  return;
}




longlong FUN_180001f60(longlong param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Tidy_deallocate(void) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy_deallocate(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Tidy_deallocate(undefined8 param_1)

{
  bool bVar1;
  undefined2 local_28 [4];
  undefined8 *local_20;
  undefined8 local_18;
  void *local_10;
  
  FUN_1800025b0(param_1);
  local_20 = (undefined8 *)FUN_180001f40(param_1);
  bVar1 = Large_string_engaged((longlong)local_20);
  if (bVar1) {
    local_10 = (void *)*local_20;
    local_18 = FUN_180001f40(param_1);
    FUN_1800012e0(local_20);
    FUN_180002c00();
    deallocate(local_18,local_10,local_20[3] + 1);
  }
  local_20[2] = 0;
  local_20[3] = 7;
  local_28[0] = 0;
  assign((undefined2 *)local_20,local_28);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Tidy_init(void) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy_init(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Tidy_init(undefined8 param_1)

{
  undefined2 local_18 [4];
  undefined2 *local_10;
  
  local_10 = (undefined2 *)FUN_180001f40(param_1);
  *(undefined8 *)(local_10 + 8) = 0;
  *(undefined8 *)(local_10 + 0xc) = 7;
  local_18[0] = 0;
  assign(local_10,local_18);
  return;
}




undefined8 FUN_1800020c0(undefined8 param_1,undefined8 param_2)

{
  FUN_180001f40(param_1);
  return param_2;
}




undefined8 FUN_1800020f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180001f40(param_1);
  return *(undefined8 *)(lVar1 + 0x10);
}




/* Library Function - Single Match
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(wchar_t const * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this,wchar_t *param_1)

{
  __uint64 _Var1;
  ulonglong uVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  
  _Var1 = _WChar_traits<wchar_t>::length(param_1);
  uVar2 = FUN_1800012e0(_Var1);
  pbVar3 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FID_conflict_assign(this,(undefined1 *)param_1,uVar2);
  return pbVar3;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::assign(unsigned short
   const * __ptr64 const,unsigned __int64) __ptr64
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 FID_conflict_assign(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [2];
  undefined2 local_26 [3];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = (undefined8 *)FUN_180001f40(param_1);
  if ((ulonglong)local_20[3] < param_3) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = _Reallocate_for<>(param_1,param_3,local_28[0],param_2);
  }
  else {
    local_18 = Myptr(local_20);
    local_20[2] = param_3;
    move(local_18,param_2,param_3);
    local_26[0] = 0;
    assign((undefined2 *)((longlong)local_18 + param_3 * 2),local_26);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl <lambda_05cef1f6fdf474c9f3ed207deba0f73b>::operator()(unsigned short *
   __ptr64 const,unsigned __int64,unsigned short const * __ptr64 const)const __ptr64
    public: void __cdecl <lambda_3fa8b2c8193a0f3144fc4b1b8f243931>::operator()(wchar_t * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const)const __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined2 local_18 [12];
  
  copy(param_2,param_4,param_3);
  local_18[0] = 0;
  assign((undefined2 *)(param_2 + param_3 * 2),local_18);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(wchar_t const * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this,wchar_t *param_1)

{
  __uint64 _Var1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  
  _Var1 = _WChar_traits<wchar_t>::length(param_1);
  _Var1 = FUN_1800012e0(_Var1);
  pbVar2 = append(this,param_1,_Var1);
  return pbVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::append(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64) __ptr64
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict_append(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                         *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  
  puVar1 = (undefined8 *)FUN_180001f40(param_2);
  pwVar2 = (wchar_t *)Myptr(puVar1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,pwVar2,puVar1[2]);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Construct_lv_contents(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Construct_lv_contents(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > const & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Construct_lv_contents(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  __uint64 *p_Var5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 local_38;
  undefined8 *local_30;
  __uint64 local_28;
  __uint64 local_20;
  ulonglong local_18;
  longlong local_10;
  
  puVar2 = (undefined1 *)FUN_180001f40(param_1);
  puVar3 = (undefined8 *)FUN_180001f40(param_2);
  uVar1 = puVar3[2];
  local_30 = Myptr(puVar3);
  if (uVar1 < 8) {
    copy(puVar2,(undefined1 *)local_30,8);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(undefined8 *)(puVar2 + 0x18) = 7;
  }
  else {
    uVar4 = FUN_180001f40(param_1);
    local_20 = FID_conflict_max_size(param_1);
    local_18 = uVar1 | 7;
    p_Var5 = std::_Min_value<unsigned___int64>(&local_18,&local_20);
    local_28 = *p_Var5;
    local_38 = allocate(uVar4,local_28 + 1);
    uVar6 = FUN_1800012e0(puVar2);
    construct<>(uVar4,uVar6,&local_38);
    local_10 = uVar1 + 1;
    puVar7 = (undefined1 *)FUN_1800012e0(local_38);
    copy(puVar7,(undefined1 *)local_30,local_10);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(__uint64 *)(puVar2 + 0x18) = local_28;
  }
  return;
}




longlong FUN_180002460(longlong param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4,
                      undefined8 param_5)

{
  FUN_180002b90(param_1,param_5);
  FID_conflict__Tidy_init(param_1);
  FUN_180002640(param_1,param_2,param_3,param_4);
  return param_1;
}




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Max_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 * __cdecl std::_Max_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_1 < *param_2) {
    local_18 = param_2;
  }
  return local_18;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __ptr64 __cdecl std::_WChar_traits<unsigned
   short>::copy(unsigned short * __ptr64 const,unsigned short const * __ptr64 const,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::_WChar_traits<wchar_t>::copy(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64)
   
   Library: Visual Studio 2017 Release */

void copy(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180001190(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    public: static unsigned __int64 __cdecl std::_WChar_traits<wchar_t>::length(wchar_t const *
   __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 __cdecl std::_WChar_traits<wchar_t>::length(wchar_t *param_1)

{
  __uint64 local_18;
  
  local_18 = 0xffffffffffffffff;
  do {
    local_18 = local_18 + 1;
  } while (param_1[local_18] != L'\0');
  return local_18;
}




/* Library Function - Multiple Matches With Same Base Name
    public: bool __cdecl std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Large_string_engaged(void)const __ptr64
    public: bool __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Large_string_engaged(void)const __ptr64
   
   Library: Visual Studio 2017 Release */

bool Large_string_engaged(longlong param_1)

{
  return 7 < *(ulonglong *)(param_1 + 0x18);
}




void FUN_1800025b0(undefined8 param_1)

{
  FUN_180001f40(param_1);
  FUN_180001210();
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned __int64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::max_size(void)const
   __ptr64
    public: unsigned __int64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::max_size(void)const __ptr64
   
   Library: Visual Studio 2017 Release */

__uint64 FID_conflict_max_size(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_38;
  __uint64 local_30;
  __uint64 local_28;
  __uint64 local_20;
  __uint64 local_18 [3];
  
  FUN_180001f40(param_1);
  local_30 = FUN_180002960();
  local_38 = 8;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_180001200();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
}




void FUN_180002640(undefined8 param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 _Var1;
  undefined8 *puVar2;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180001f40(param_2);
  FUN_180002930((longlong)this,param_3);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this,param_3,param_4);
  puVar2 = Myptr((undefined8 *)this);
  FID_conflict_assign(param_1,(undefined1 *)((longlong)puVar2 + param_3 * 2),_Var1);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(wchar_t const * __ptr64
   const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this,wchar_t *param_1,__uint64 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [2];
  undefined2 local_26 [3];
  undefined8 *local_20;
  longlong local_18;
  undefined8 *local_10;
  
  local_20 = (undefined8 *)FUN_180001f40(this);
  local_18 = local_20[2];
  if ((ulonglong)(local_20[3] - local_18) < param_2) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           _Reallocate_grow_by<>(this,param_2,local_28[0],(undefined1 *)param_1,param_2);
  }
  else {
    local_20[2] = local_18 + param_2;
    local_10 = Myptr(local_20);
    move((void *)((longlong)local_10 + local_18 * 2),param_1,param_2);
    local_26[0] = 0;
    ::assign((undefined2 *)((longlong)local_10 + (local_18 + param_2) * 2),local_26);
  }
  return this;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl <lambda_1dfe18491bcca09701d8ccb01d0b0af4>::operator()(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64,wchar_t const * __ptr64 const,unsigned
   __int64)const __ptr64
    public: void __cdecl <lambda_7030d12a21dba11210293044e97fe9c7>::operator()(unsigned short *
   __ptr64 const,unsigned short const * __ptr64 const,unsigned __int64,unsigned short const *
   __ptr64 const,unsigned __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
               undefined1 *param_5,longlong param_6)

{
  undefined2 local_18 [12];
  
  copy(param_2,param_3,param_4);
  copy(param_2 + param_4 * 2,param_5,param_6);
  local_18[0] = 0;
  assign((undefined2 *)(param_2 + (param_4 + param_6) * 2),local_18);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

void allocate(undefined8 param_1,__uint64 param_2)

{
  __uint64 _Var1;
  
  _Var1 = std::_Get_size_of_n<2>(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<unsigned short>::deallocate(unsigned short * __ptr64
   const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<wchar_t>::deallocate(wchar_t * __ptr64 const,unsigned
   __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_WChar_traits<unsigned short>::assign(unsigned short &
   __ptr64,unsigned short const & __ptr64)
    public: static void __cdecl std::_WChar_traits<wchar_t>::assign(wchar_t & __ptr64,wchar_t const
   & __ptr64)
   
   Library: Visual Studio 2017 Release */

void assign(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __ptr64 __cdecl std::_WChar_traits<unsigned
   short>::move(unsigned short * __ptr64 const,unsigned short const * __ptr64 const,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::_WChar_traits<wchar_t>::move(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void move(void *param_1,void *param_2,longlong param_3)

{
  FUN_1800011c0(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__uint64 __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
          (_String_val<struct_std::_Simple_types<char>_> *this,__uint64 param_1,__uint64 param_2)

{
  __uint64 *p_Var1;
  __uint64 local_res18 [2];
  __uint64 local_18 [3];
  
  local_18[0] = *(longlong *)(this + 0x10) - param_1;
  local_res18[0] = param_2;
  p_Var1 = _Min_value<unsigned___int64>(local_res18,local_18);
  return *p_Var1;
}




void FUN_180002930(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_180002970();
  }
  return;
}




undefined8 FUN_180002960(void)

{
  return 0x7fffffffffffffff;
}




void FUN_180002970(void)

{
  std::_Xout_of_range("invalid string position");
  return;
}




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}




void FUN_1800029e0(wchar_t *param_1,longlong param_2,__uint64 param_3,wchar_t *param_4,
                  size_t param_5)

{
  char cVar1;
  ulonglong uVar2;
  __uint64 *p_Var3;
  longlong lVar4;
  undefined1 *puVar5;
  __uint64 local_res18;
  wchar_t *local_res20;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  wchar_t *local_130;
  __uint64 local_128 [2];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_128[1] = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_168;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_5 != 0) && (param_2 != 0)) {
    FUN_180002b70(local_118);
    uVar2 = FUN_180003090((longlong)local_118,(ushort *)local_res20,
                          (ushort *)(local_res20 + param_5));
    if ((uVar2 & 0xff) == 0) {
      puVar5 = local_138;
      for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_180003210(param_1,param_2,local_res18,local_res20,param_5);
    }
    else {
      local_128[0] = param_2 - 1;
      p_Var3 = std::_Min_value<unsigned___int64>(&local_res18,local_128);
      local_130 = param_1 + *p_Var3;
      while ((cVar1 = FUN_180003040((longlong)local_118,*local_130), cVar1 == '\0' &&
             (local_130 != param_1))) {
        local_130 = local_130 + -1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_168);
  return;
}




undefined1 * FUN_180002b70(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x100; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




longlong FUN_180002b90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_1800012e0(param_2);
  FUN_1800032d0(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char> >,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2015 Release */

longlong _Compressed_pair<><>(longlong param_1)

{
  FUN_1800012e0(param_1);
  _String_val<>(param_1);
  return param_1;
}




void FUN_180002c00(void)

{
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::_Reallocate_for<class
   <lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const * __ptr64>(unsigned __int64,class
   <lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const * __ptr64) __ptr64
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_for<class
   <lambda_3fa8b2c8193a0f3144fc4b1b8f243931>,wchar_t const * __ptr64>(unsigned __int64,class
   <lambda_3fa8b2c8193a0f3144fc4b1b8f243931>,wchar_t const * __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8
_Reallocate_for<>(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4)

{
  __uint64 _Var1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined8 local_30;
  undefined8 local_28;
  __uint64 local_20;
  ulonglong local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  _Var1 = FID_conflict_max_size(param_1);
  if (_Var1 < param_2) {
    FUN_180003130();
  }
  puVar2 = (undefined8 *)FUN_180001f40(param_1);
  local_18 = puVar2[3];
  local_20 = FID_conflict__Calculate_growth(param_1,param_2);
  local_28 = FUN_180001f40(param_1);
  local_30 = allocate(local_28,local_20 + 1);
  FUN_180001210();
  puVar2[2] = param_2;
  puVar2[3] = local_20;
  puVar3 = (undefined1 *)FUN_1800012e0(local_30);
  FID_conflict_operator__(local_res18,puVar3,param_2,local_res20);
  if (local_18 < 8) {
    uVar4 = FUN_1800012e0(puVar2);
    construct<>(local_28,uVar4,&local_30);
  }
  else {
    deallocate(local_28,(void *)*puVar2,local_18 + 1);
    *puVar2 = local_30;
  }
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short * __ptr64,unsigned short * __ptr64 const & __ptr64>(class
   std::allocator<unsigned short> & __ptr64,unsigned short * __ptr64 * __ptr64 const,unsigned short
   * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t * __ptr64,wchar_t * __ptr64 const & __ptr64>(class std::allocator<wchar_t> &
   __ptr64,wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64)
   
   Library: Visual Studio 2017 Release */

void construct<>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180001000(8,param_2);
  puVar2 = (undefined8 *)FUN_1800012e0(param_3);
  *puVar1 = *puVar2;
  return;
}




/* Library Function - Single Match
    void * __ptr64 __cdecl std::_Allocate<16,struct std::_Default_allocate_traits,0>(unsigned
   __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Allocate<16,struct_std::_Default_allocate_traits,0>(__uint64 param_1)

{
  void *pvVar1;
  
  if (param_1 < 0x1000) {
    if (param_1 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = (void *)FUN_180001220(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_180003310(param_1);
  }
  return pvVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<8,0>(void * __ptr64,unsigned __int64)
    void __cdecl std::_Deallocate<16,0>(void * __ptr64,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _Deallocate<>(void *param_1,ulonglong param_2)

{
  void *local_res8;
  ulonglong local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (0xfff < param_2) {
    FUN_180001240((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
   <lambda_1dfe18491bcca09701d8ccb01d0b0af4>,wchar_t const * __ptr64,unsigned __int64>(unsigned
   __int64,class <lambda_1dfe18491bcca09701d8ccb01d0b0af4>,wchar_t const * __ptr64,unsigned __int64)
   __ptr64
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Reallocate_grow_by<class <lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *
   __ptr64,unsigned __int64>(unsigned __int64,class
   <lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const * __ptr64,unsigned __int64)
   __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8
_Reallocate_grow_by<>
          (undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4,
          longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180001f40(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_180003130();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180001f40(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_180001210();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800012e0(local_48);
  if (local_28 < 8) {
    FID_conflict_operator__(local_res18,local_18,(undefined1 *)puVar2,lVar1,local_res20,param_5);
    uVar5 = FUN_1800012e0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800012e0(local_20);
    FID_conflict_operator__(local_res18,local_18,puVar4,lVar1,local_res20,param_5);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<2>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<2>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 << 1;
  if (0x7fffffffffffffff < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




undefined1 FUN_180003040(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if ((param_2 < 0x100) && (*(char *)(param_1 + (ulonglong)param_2) != '\0')) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




undefined8 FUN_180003090(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort *local_res10;
  byte local_18;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 == param_3) {
      return CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    }
    uVar1 = *local_res10;
    if (0xff < uVar1) break;
    local_18 = (byte)uVar1;
    *(undefined1 *)(param_1 + (ulonglong)local_18) = 1;
    local_res10 = local_res10 + 1;
  }
  return (ulonglong)(byte)(uVar1 >> 8) << 8;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
   std::_Simple_types<char> >(void) __ptr64
    public: __cdecl std::_String_val<struct std::_Simple_types<unsigned short> >::_String_val<struct
   std::_Simple_types<unsigned short> >(void) __ptr64
    public: __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_String_val<struct
   std::_Simple_types<wchar_t> >(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _String_val<>(longlong param_1)

{
  FUN_1800012e0(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




void FUN_180003130(void)

{
  std::_Xlength_error("string too long");
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned __int64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Calculate_growth(unsigned __int64)const __ptr64
    public: unsigned __int64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Calculate_growth(unsigned
   __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

__uint64 FID_conflict__Calculate_growth(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  __uint64 *p_Var3;
  ulonglong local_28;
  longlong local_20;
  __uint64 local_18 [3];
  
  _Var2 = FID_conflict_max_size(param_1);
  local_20 = FUN_180001f40(param_1);
  local_28 = param_2 | 7;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




longlong FUN_180003210(wchar_t *param_1,longlong param_2,__uint64 param_3,wchar_t *param_4,
                      size_t param_5)

{
  __uint64 *p_Var1;
  longlong lVar2;
  __uint64 local_res18;
  wchar_t *local_res20;
  wchar_t *local_18;
  __uint64 local_10 [2];
  
  if ((param_5 == 0) || (param_2 == 0)) {
LAB_1800032b7:
    lVar2 = -1;
  }
  else {
    local_10[0] = param_2 - 1;
    local_res18 = param_3;
    local_res20 = param_4;
    p_Var1 = std::_Min_value<unsigned___int64>(&local_res18,local_10);
    local_18 = param_1 + *p_Var1;
    while (lVar2 = FUN_1800033a0(local_res20,param_5,local_18), lVar2 == 0) {
      if (local_18 == param_1) goto LAB_1800032b7;
      local_18 = local_18 + -1;
    }
    lVar2 = (longlong)local_18 - (longlong)param_1 >> 1;
  }
  return lVar2;
}




longlong FUN_1800032d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800012e0(param_3);
  _String_val<>(param_1);
  return param_1;
}




ulonglong FUN_180003310(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_180001220(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void FUN_1800033a0(wchar_t *param_1,size_t param_2,wchar_t *param_3)

{
  wmemchr(param_1,*param_3,param_2);
  return;
}




int FUN_1800033d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = FUN_180001020(param_1,param_2,param_3,0,&local_res20);
  return iVar1;
}




void FUN_180003430(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return;
}




undefined8 * FUN_180003450(undefined8 *param_1,uint param_2)

{
  FUN_180003430(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180003490(undefined8 *param_1)

{
  *param_1 = IBCDEdit::vftable;
  FUN_180003430(param_1);
  return;
}




undefined8 * FUN_1800034c0(undefined8 *param_1,uint param_2)

{
  FUN_180003490(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180003500(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_158 [32];
  HMODULE local_138;
  FARPROC local_130;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_158;
  local_130 = (FARPROC)0x0;
  pcVar2 = local_128;
  for (lVar1 = 0x104; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  strcpy_s(local_128,0x104,param_1);
  strcat_s(local_128,0x104,".dll");
  local_138 = (HMODULE)0x0;
  local_138 = LoadLibraryA(local_128);
  if (local_138 != (HMODULE)0x0) {
    local_130 = GetProcAddress(local_138,"TBCreateObject");
    if (local_130 == (FARPROC)0x0) {
      FreeLibrary(local_138);
    }
    else if (param_2 != (undefined8 *)0x0) {
      *param_2 = local_138;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




undefined1 * FUN_180003600(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static bool __cdecl std::_Narrow_char_traits<char,int>::eq(char const & __ptr64,char
   const & __ptr64)
    public: static bool __cdecl std::char_traits<char>::eq(char const & __ptr64,char const &
   __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool eq(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}




undefined1 FUN_180003670(undefined1 *param_1)

{
  return *param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static bool __cdecl std::_Narrow_char_traits<char,int>::eq_int_type(int const &
   __ptr64,int const & __ptr64)
    public: static bool __cdecl std::char_traits<char>::eq_int_type(int const & __ptr64,int const &
   __ptr64)
   
   Library: Visual Studio */

bool eq_int_type(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl std::_Narrow_char_traits<char,int>::not_eof(int const & __ptr64)
    public: static int __cdecl std::char_traits<char>::not_eof(int const & __ptr64)
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

uint not_eof(uint *param_1)

{
  undefined8 uVar1;
  uint local_18;
  uint local_14;
  
  uVar1 = FUN_180003710();
  if (*param_1 == (uint)uVar1) {
    uVar1 = FUN_180003710();
    local_18 = (uint)((int)uVar1 == 0);
    local_14 = local_18;
  }
  else {
    local_14 = *param_1;
  }
  return local_14;
}




undefined8 FUN_180003710(void)

{
  return 0xffffffff;
}




CResetPropExchange * FUN_180003720(CResetPropExchange *param_1)

{
  CResetPropExchange::CResetPropExchange(param_1);
  *(undefined ***)param_1 = CBCDEdit::vftable;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x428) = 0;
  return param_1;
}




undefined8 * FUN_1800037c0(undefined8 *param_1,uint param_2)

{
  FUN_180003800(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180003800(undefined8 *param_1)

{
  *param_1 = CBCDEdit::vftable;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_180003b60((longlong)param_1);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x85) = 0;
  FUN_180006210(param_1);
  return;
}




undefined4 FUN_1800038b0(longlong param_1,short *param_2,short *param_3,undefined4 param_4)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 local_64;
  short *local_60;
  short *local_58;
  longlong local_50;
  short *local_48;
  short *local_40;
  undefined *local_30;
  
  local_64 = 0;
  if ((param_2 == (short *)0x0) || (param_3 == (short *)0x0)) {
    local_64 = 0x3912409;
  }
  else {
    local_60 = (short *)(param_1 + 0x18);
    local_48 = param_2;
    do {
      sVar2 = *local_48;
      *local_60 = sVar2;
      local_48 = local_48 + 1;
      local_60 = local_60 + 1;
    } while (sVar2 != 0);
    local_58 = (short *)(param_1 + 0x428);
    local_40 = param_3;
    do {
      sVar2 = *local_40;
      *local_58 = sVar2;
      local_40 = local_40 + 1;
      local_58 = local_58 + 1;
    } while (sVar2 != 0);
    local_50 = -1;
    lVar7 = local_50;
    do {
      local_50 = lVar7;
      lVar7 = local_50 + 1;
    } while (param_3[local_50 + 1] != 0);
    puVar5 = (ushort *)(param_3 + local_50 + -2);
    lVar7 = (longlong)&DAT_18003fa70 - (longlong)puVar5;
    do {
      uVar3 = *puVar5;
      uVar1 = *(ushort *)((longlong)puVar5 + lVar7);
      if (uVar3 != uVar1) {
        uVar4 = -(uint)(uVar3 < uVar1) | 1;
        goto LAB_180003a33;
      }
      puVar5 = puVar5 + 1;
    } while (uVar3 != 0);
    uVar4 = 0;
LAB_180003a33:
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = param_4;
    plVar6 = (longlong *)FUN_180007470();
    if (plVar6 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        local_30 = &DAT_18003fab8;
      }
      else {
        local_30 = &DAT_18003fab0;
      }
      (**(code **)(*plVar6 + 0x30))
                (plVar6,1,0x12400,L"%S %d BCDEDIT:%s BCD:%s %s\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp",0x46,param_1 + 0x18,
                 param_1 + 0x428,local_30);
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return local_64;
}




undefined4 FUN_180003b60(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}




undefined8 FUN_180003ba0(longlong param_1,short *param_2)

{
  short sVar1;
  longlong *plVar2;
  short *local_30;
  short *local_28;
  
  local_30 = (short *)(param_1 + 0x220);
  local_28 = param_2;
  do {
    sVar1 = *local_28;
    *local_30 = sVar1;
    local_28 = local_28 + 1;
    local_30 = local_30 + 1;
  } while (sVar1 != 0);
  plVar2 = (longlong *)FUN_180007470();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,1,0x12400,L"bcdedit2 %s",param_1 + 0x220);
  }
  return 0;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180003c80(longlong *param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 auStack_15b8 [32];
  uint *local_1598;
  undefined4 local_1590;
  undefined1 *local_1588;
  undefined4 local_1580;
  DWORD local_1578;
  undefined4 local_1568;
  int local_1564;
  uint local_1560 [2];
  char *local_1558;
  undefined4 local_1550;
  undefined4 local_154c;
  longlong *local_1548;
  char *local_1540;
  longlong local_1538;
  char *local_1530;
  undefined8 local_1528;
  undefined8 local_1520;
  longlong local_1518 [2];
  basic_ostream<char,struct_std::char_traits<char>_> local_1508 [240];
  char local_1418 [1024];
  undefined1 local_1018 [2048];
  undefined1 local_818 [1024];
  undefined1 local_418 [1024];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x180003c9a;
  local_1528 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_15b8;
  local_1564 = 0;
  FUN_180006570((basic_iostream<char,struct_std::char_traits<char>_> *)local_1518,3,1);
  local_1558 = (char *)0x0;
  local_1568 = 0x6b12401;
  local_1550 = 0;
  local_1560[0] = 0x2000;
  puVar5 = local_1018;
  for (lVar3 = 0x800; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pcVar4 = local_1418;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  puVar5 = local_818;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_418;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_1520 = 0;
  *param_3 = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_1568 = 0x7712405;
  }
  else {
    local_1558 = (char *)operator_new(0x2000);
    local_1540 = local_1558;
    if (local_1558 == (char *)0x0) {
      local_1568 = 0x7e1240a;
    }
    else {
      while( true ) {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_1564 == 0)) {
          FUN_1800033d0(local_1018,0x400,L" /enum %s",param_2);
        }
        else {
          local_1598 = (uint *)param_2;
          FUN_1800033d0(local_1018,0x400,L" /store %s /enum %s",param_1 + 0x85);
        }
        local_1598 = local_1560;
        iVar2 = (**(code **)(*param_1 + 0x78))(param_1,local_1018,&local_1550,local_1558);
        if (iVar2 == 0) break;
        *param_3 = 0;
        local_1568 = 0;
        std::basic_ostream<char,struct_std::char_traits<char>_>::write
                  (local_1508,local_1558,(ulonglong)local_1560[0]);
        do {
          bVar1 = std::ios_base::eof((ios_base *)
                                     ((longlong)local_1518 + (longlong)*(int *)(local_1518[0] + 4)))
          ;
          if (bVar1) goto LAB_180003fa1;
          std::basic_istream<char,struct_std::char_traits<char>_>::getline
                    ((basic_istream<char,struct_std::char_traits<char>_> *)local_1518,local_1418,
                     0x400);
          iVar2 = strncmp(local_1418,"----------",10);
        } while (iVar2 != 0);
        local_1568 = 0;
        *param_3 = 1;
LAB_180003fa1:
        if (((*param_3 != 0) || (*(int *)((longlong)param_1 + 0x14) != 0)) ||
           (((int)param_1[2] == 0 ||
            ((local_1564 != 0 || (iVar2 = (**(code **)(*param_1 + 0x70))(param_1), iVar2 != 0))))))
        goto LAB_180004033;
        local_1564 = local_1564 + 1;
        std::basic_ios<char,struct_std::char_traits<char>_>::clear
                  ((basic_ios<char,struct_std::char_traits<char>_> *)
                   ((longlong)local_1518 + (longlong)*(int *)(local_1518[0] + 4)),0,false);
        local_1560[0] = 0x2000;
      }
      local_1548 = (longlong *)FUN_180007470();
      if (local_1548 != (longlong *)0x0) {
        local_1578 = GetLastError();
        local_1538 = *local_1548;
        local_1580 = local_1550;
        local_1588 = local_1018;
        local_1590 = 0x8f;
        local_1598 = (uint *)0x18003fc38;
        (**(code **)(local_1538 + 0x30))
                  (local_1548,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
      }
      local_1568 = 0x9012500;
    }
  }
LAB_180004033:
  if (local_1558 != (char *)0x0) {
    local_1530 = local_1558;
    free(local_1558);
    local_1558 = (char *)0x0;
  }
  local_154c = local_1568;
  FUN_180004090((longlong)local_1518);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_15b8);
  return;
}




void FUN_180004090(longlong param_1)

{
  FUN_1800064e0(param_1 + 0x98);
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>
            ((basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0x98));
  return;
}




void FUN_1800040d0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_8a8 [32];
  int *local_888;
  int *local_880;
  int *local_878;
  int local_870;
  DWORD local_868;
  int local_858;
  uint local_854;
  int local_850;
  int local_84c;
  longlong *local_848;
  longlong *local_840;
  longlong *local_838;
  longlong local_830;
  longlong local_828;
  int local_818 [512];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_8a8;
  local_858 = 0;
  local_84c = 0;
  local_854 = 0;
  piVar3 = local_818;
  for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((longlong)piVar3 + 1);
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_854 = 0xd112405;
  }
  else if (param_2 == (int *)0x0) {
    local_854 = 0xd31240a;
  }
  else {
    while( true ) {
      local_850 = *param_2;
      if (local_850 == 0) {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_858 == 0)) {
          local_888 = param_2 + 0x201;
          FUN_1800033d0(local_818,0x400,L" /create %s /d %s /device",param_2 + 1);
        }
        else {
          local_880 = param_2 + 0x201;
          local_888 = param_2 + 1;
          FUN_1800033d0(local_818,0x400,L" /store %s /create %s /d %s /device",param_1 + 0x85);
        }
      }
      else if (local_850 == 1) {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_858 == 0)) {
          local_888 = param_2 + 0x201;
          FUN_1800033d0(local_818,0x400,L" /create %s /d %s /application osloader",param_2 + 1);
        }
        else {
          local_880 = param_2 + 0x201;
          local_888 = param_2 + 1;
          FUN_1800033d0(local_818,0x400,L" /store %s /create %s /d %s /application osloader",
                        param_1 + 0x85);
        }
      }
      else if (local_850 == 2) {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_858 == 0)) {
          local_888 = param_2 + 0x201;
          FUN_1800033d0(local_818,0x400,L" /create %s /d %s /application bootsector",param_2 + 1);
        }
        else {
          local_880 = param_2 + 0x201;
          local_888 = param_2 + 1;
          FUN_1800033d0(local_818,0x400,L" /store %s /create %s /d %s /application bootsector",
                        param_1 + 0x85);
        }
      }
      else if (local_850 == 3) {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_858 == 0)) {
          local_888 = param_2 + 0x201;
          FUN_1800033d0(local_818,0x400,L" /create %s /d %s",param_2 + 1);
        }
        else {
          local_880 = param_2 + 0x201;
          local_888 = param_2 + 1;
          FUN_1800033d0(local_818,0x400,L" /store %s /create %s /d %s",param_1 + 0x85);
        }
      }
      else {
        local_854 = 0x10c12403;
      }
      if ((local_854 & 0xfff) != 0) goto LAB_18000467a;
      local_848 = (longlong *)FUN_180007470();
      if (local_848 != (longlong *)0x0) {
        local_880 = local_818;
        local_888 = (int *)CONCAT44(local_888._4_4_,0x111);
        (**(code **)(*local_848 + 0x30))(local_848,1,0x12400,L"%d wzCmdLine:%s \n");
      }
      local_888 = (int *)0x0;
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_818,&local_84c,0);
      if (iVar1 == 0) {
        local_840 = (longlong *)FUN_180007470();
        if (local_840 != (longlong *)0x0) {
          local_868 = GetLastError();
          local_830 = *local_840;
          local_870 = local_84c;
          local_878 = local_818;
          local_880 = (int *)CONCAT44(local_880._4_4_,0x115);
          local_888 = (int *)0x18003ffc8;
          (**(code **)(local_830 + 0x30))
                    (local_840,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
        }
        local_854 = 0x11612500;
        goto LAB_18000467a;
      }
      if (local_84c == 0) goto LAB_18000467a;
      local_838 = (longlong *)FUN_180007470();
      if (local_838 != (longlong *)0x0) {
        local_868 = GetLastError();
        local_828 = *local_838;
        local_870 = local_84c;
        local_878 = local_818;
        local_880 = (int *)CONCAT44(local_880._4_4_,0x11e);
        local_888 = (int *)0x180040078;
        (**(code **)(local_828 + 0x30))(local_838,1,0x12400);
      }
      if (((*(int *)((longlong)param_1 + 0x14) != 0) || ((int)param_1[2] == 0)) ||
         ((local_858 != 0 || (iVar1 = (**(code **)(*param_1 + 0x70))(param_1), iVar1 != 0)))) break;
      local_858 = local_858 + 1;
    }
    local_854 = 0x12412491;
  }
LAB_18000467a:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_8a8);
  return;
}




void FUN_1800046a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_898 [32];
  char *local_878;
  undefined4 local_870;
  undefined1 *local_868;
  int local_860;
  DWORD local_858;
  undefined4 local_848;
  int local_844;
  int local_840;
  longlong *local_838;
  longlong *local_830;
  longlong local_828;
  longlong local_820;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_898;
  local_840 = 0;
  local_844 = 0;
  local_848 = 0;
  puVar3 = local_818;
  for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_848 = 0x13712405;
  }
  else if (param_2 == 0) {
    local_848 = 0x13d1240a;
  }
  else {
    while( true ) {
      if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) && (local_840 == 0))
      {
        FUN_1800033d0(local_818,0x400,L" /delete %s",param_2 + 4);
      }
      else {
        local_878 = (char *)(param_2 + 4);
        FUN_1800033d0(local_818,0x400,L" /store %s /delete %s",param_1 + 0x85);
      }
      local_878 = (char *)0x0;
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_818,&local_844,0);
      if (iVar1 == 0) {
        local_838 = (longlong *)FUN_180007470();
        if (local_838 != (longlong *)0x0) {
          local_858 = GetLastError();
          local_828 = *local_838;
          local_860 = local_844;
          local_868 = local_818;
          local_870 = 0x14f;
          local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
          (**(code **)(local_828 + 0x30))
                    (local_838,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
        }
        local_848 = 0x15012500;
        goto LAB_180004955;
      }
      if (local_844 == 0) goto LAB_180004955;
      local_830 = (longlong *)FUN_180007470();
      if (local_830 != (longlong *)0x0) {
        local_858 = GetLastError();
        local_820 = *local_830;
        local_860 = local_844;
        local_868 = local_818;
        local_870 = 0x156;
        local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
        (**(code **)(local_820 + 0x30))
                  (local_830,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
      }
      if (((*(int *)((longlong)param_1 + 0x14) != 0) || ((int)param_1[2] == 0)) ||
         ((local_840 != 0 || (iVar1 = (**(code **)(*param_1 + 0x70))(param_1), iVar1 != 0)))) break;
      local_840 = local_840 + 1;
    }
    local_848 = 0x15c12491;
  }
LAB_180004955:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_898);
  return;
}




void FUN_180004980(longlong param_1,LPCSTR param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  __uint64 _Var3;
  LPWSTR lpWideCharStr;
  undefined1 auStackY_b8 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_b8;
  iVar2 = MultiByteToWideChar(0,0,param_2,param_3,(LPWSTR)0x0,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)iVar2;
  _Var3 = SUB168(ZEXT816(2) * auVar1,0);
  if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
    _Var3 = 0xffffffffffffffff;
  }
  lpWideCharStr = (LPWSTR)thunk_FUN_18003d108(_Var3);
  basic_string<>((longlong)local_58);
  if (lpWideCharStr != (LPWSTR)0x0) {
    iVar2 = MultiByteToWideChar(0,0,param_2,param_3,lpWideCharStr,iVar2);
    basic_string<>((longlong)local_38,(undefined1 *)lpWideCharStr,(longlong)iVar2);
    free(lpWideCharStr);
    FUN_180006350((longlong)local_58,local_38);
    FUN_180001db0(local_38);
  }
  basic_string<>(param_1,local_58);
  FUN_180001db0(local_58);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_b8);
  return;
}




void FUN_180004b10(longlong *param_1,longlong param_2,char param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  LPCSTR pCVar9;
  undefined1 auStack_908 [32];
  uint *local_8e8;
  longlong local_8e0;
  wchar_t *local_8d8;
  int local_8d0;
  DWORD local_8c8;
  undefined4 local_8b8;
  uint local_8b4;
  int local_8b0;
  int local_8ac;
  LPCSTR local_8a8;
  longlong *local_8a0;
  longlong *local_898;
  longlong *local_890;
  longlong *local_888;
  longlong *local_880;
  LPCSTR local_878;
  ulonglong local_870;
  longlong local_868;
  longlong local_860;
  longlong local_858;
  LPCSTR local_850;
  undefined8 local_848;
  undefined1 local_840 [40];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_848 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_908;
  local_8ac = 0;
  local_8a8 = (LPCSTR)0x0;
  local_8b0 = 0;
  local_8b4 = 0x2000;
  local_8b8 = 0;
  pwVar8 = local_818;
  for (lVar6 = 0x800; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pwVar8 = 0;
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_8a0 = (longlong *)FUN_180007470();
    if (local_8a0 != (longlong *)0x0) {
      local_8e8 = (uint *)CONCAT44(local_8e8._4_4_,0x17f);
      (**(code **)(*local_8a0 + 0x30))(local_8a0,1,0x12400,L"SetEntry line=%d");
    }
    local_8b8 = 0x18012405;
  }
  else if (param_2 == 0) {
    local_898 = (longlong *)FUN_180007470();
    if (local_898 != (longlong *)0x0) {
      local_8e8 = (uint *)CONCAT44(local_8e8._4_4_,0x186);
      (**(code **)(*local_898 + 0x30))(local_898,1,0x12400,L"SetEntry line=%d");
    }
    local_8b8 = 0x1871240a;
  }
  else {
    local_8a8 = (LPCSTR)operator_new(0x2000);
    local_878 = local_8a8;
    if (local_8a8 != (LPCSTR)0x0) {
      local_870 = (ulonglong)local_8b4;
      pCVar9 = local_8a8;
      for (uVar7 = local_870; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pCVar9 = '\0';
        pCVar9 = pCVar9 + 1;
      }
      do {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_8ac == 0)) {
          local_8e0 = param_2 + 0x1000;
          local_8e8 = (uint *)(param_2 + 0x800);
          FUN_1800033d0(local_818,0x400,L" /set %s %s %s",param_2);
        }
        else {
          local_8d8 = (wchar_t *)(param_2 + 0x1000);
          local_8e0 = param_2 + 0x800;
          local_8e8 = (uint *)param_2;
          FUN_1800033d0(local_818,0x400,L" /store %s /set %s %s %s",param_1 + 0x85);
        }
        if (param_3 != '\0') {
          puVar5 = (ushort *)(param_2 + 0x800);
          lVar6 = (longlong)L"displayorder" - (longlong)puVar5;
          do {
            uVar2 = *puVar5;
            uVar1 = *(ushort *)((longlong)puVar5 + lVar6);
            if (uVar2 != uVar1) {
              uVar3 = -(uint)(uVar2 < uVar1) | 1;
              goto LAB_180004da5;
            }
            puVar5 = puVar5 + 1;
          } while (uVar2 != 0);
          uVar3 = 0;
LAB_180004da5:
          if (uVar3 == 0) {
            FUN_180007540(local_818,L" /addlast");
          }
        }
        local_8e8 = &local_8b4;
        iVar4 = (**(code **)(*param_1 + 0x78))(param_1,local_818,&local_8b0,local_8a8);
        if (iVar4 == 0) {
          local_890 = (longlong *)FUN_180007470();
          if (local_890 != (longlong *)0x0) {
            local_8c8 = GetLastError();
            local_868 = *local_890;
            local_8d0 = local_8b0;
            local_8d8 = local_818;
            local_8e0 = CONCAT44(local_8e0._4_4_,0x1a8);
            local_8e8 = (uint *)0x1800404d8;
            (**(code **)(local_868 + 0x30))
                      (local_890,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
          }
          local_8b8 = 0x1a912500;
          goto LAB_180005047;
        }
        OutputDebugStringA(local_8a8);
        FUN_180004980((longlong)local_840,local_8a8,local_8b4);
        local_888 = (longlong *)FUN_180007470();
        if (local_888 != (longlong *)0x0) {
          local_8e0 = FUN_180001d20(local_840);
          local_860 = *local_888;
          local_8e8 = (uint *)CONCAT44(local_8e8._4_4_,0x1ae);
          (**(code **)(local_860 + 0x30))(local_888,1,0x12400,L"SetEntry line=%d, pOutBuf=%s");
        }
        if (local_8b0 == 0) {
          FUN_180001db0(local_840);
          goto LAB_180005047;
        }
        local_880 = (longlong *)FUN_180007470();
        if (local_880 != (longlong *)0x0) {
          local_8c8 = GetLastError();
          local_858 = *local_880;
          local_8d0 = local_8b0;
          local_8d8 = local_818;
          local_8e0 = CONCAT44(local_8e0._4_4_,0x1b3);
          local_8e8 = (uint *)0x180040588;
          (**(code **)(local_858 + 0x30))
                    (local_880,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
        }
        if (((*(int *)((longlong)param_1 + 0x14) != 0) || ((int)param_1[2] == 0)) ||
           ((local_8ac != 0 || (iVar4 = (**(code **)(*param_1 + 0x70))(param_1), iVar4 != 0))))
        goto LAB_180005019;
        local_8ac = local_8ac + 1;
        FUN_180001db0(local_840);
      } while( true );
    }
    local_8b8 = 0x18e1240a;
  }
LAB_180005047:
  if (local_8a8 != (LPCSTR)0x0) {
    local_850 = local_8a8;
    free(local_8a8);
    local_8a8 = (LPCSTR)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_908);
  return;
LAB_180005019:
  local_8b8 = 0x1b912491;
  FUN_180001db0(local_840);
  goto LAB_180005047;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180005090(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 auStack_1618 [32];
  uint *local_15f8;
  undefined4 local_15f0;
  undefined1 *local_15e8;
  int local_15e0;
  DWORD local_15d8;
  uint local_15c8;
  undefined4 local_15c4;
  int local_15c0;
  int local_15bc;
  char *local_15b8;
  char *local_15b0;
  int local_15a8;
  longlong local_15a0;
  size_t local_1598;
  longlong local_1590;
  longlong local_1588;
  undefined4 local_1580;
  longlong *local_1578;
  longlong *local_1570;
  ulonglong local_1568;
  char *local_1560;
  longlong local_1558;
  longlong local_1550;
  char *local_1548;
  char *local_1540;
  char *local_1538;
  char *local_1530;
  char *local_1528;
  undefined8 local_1520;
  longlong local_1518 [2];
  basic_ostream<char,struct_std::char_traits<char>_> local_1508 [240];
  char local_1418 [1024];
  char local_1018 [1024];
  char local_c18 [1024];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1800050a5;
  local_1520 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_1618;
  local_15bc = 0;
  FUN_180006570((basic_iostream<char,struct_std::char_traits<char>_> *)local_1518,3,1);
  local_15b0 = (char *)0x0;
  local_15a8 = 0;
  local_15c4 = 0x1cb12f88;
  local_15c0 = 0;
  local_15c8 = 0x2000;
  puVar6 = local_818;
  for (lVar5 = 0x800; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pcVar7 = local_1418;
  for (lVar5 = 0x400; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 1;
  }
  pcVar7 = local_1018;
  for (lVar5 = 0x400; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 1;
  }
  pcVar7 = local_c18;
  for (lVar5 = 0x400; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 1;
  }
  local_15b8 = (char *)0x0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_15c4 = 0x1d512405;
  }
  else {
    local_15b0 = (char *)operator_new(0x2000);
    local_1560 = local_15b0;
    if (local_15b0 == (char *)0x0) {
      local_15c4 = 0x1dc1240a;
    }
    else {
      while( true ) {
        if (((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) &&
           (local_15bc == 0)) {
          FUN_1800033d0(local_818,0x400,L" /enum %s",param_2);
        }
        else {
          local_15f8 = (uint *)param_2;
          FUN_1800033d0(local_818,0x400,L" /store %s /enum %s",param_1 + 0x85);
        }
        local_15f8 = &local_15c8;
        iVar3 = (**(code **)(*param_1 + 0x78))(param_1,local_818,&local_15c0,local_15b0);
        if (iVar3 == 0) {
          local_1578 = (longlong *)FUN_180007470();
          if (local_1578 != (longlong *)0x0) {
            local_15d8 = GetLastError();
            local_1558 = *local_1578;
            local_15e0 = local_15c0;
            local_15e8 = local_818;
            local_15f0 = 0x1ee;
            local_15f8 = (uint *)0x1800406c8;
            (**(code **)(local_1558 + 0x30))
                      (local_1578,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
          }
          local_15c4 = 0x1ef12500;
          goto LAB_180005732;
        }
        if (local_15c0 == 0) {
          sVar4 = wcstombs(local_1018,(wchar_t *)(param_2 + 0x800),0x400);
          if (sVar4 != 0) {
            std::basic_ostream<char,struct_std::char_traits<char>_>::write
                      (local_1508,local_15b0,(ulonglong)local_15c8);
            goto LAB_180005464;
          }
          local_15c4 = 0x20212486;
          goto LAB_180005732;
        }
        local_1570 = (longlong *)FUN_180007470();
        if (local_1570 != (longlong *)0x0) {
          local_15d8 = GetLastError();
          local_1550 = *local_1570;
          local_15e0 = local_15c0;
          local_15e8 = local_818;
          local_15f0 = 0x1f5;
          local_15f8 = (uint *)0x180040778;
          (**(code **)(local_1550 + 0x30))
                    (local_1570,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
        }
        if (((*(int *)((longlong)param_1 + 0x14) != 0) || ((int)param_1[2] == 0)) ||
           ((local_15bc != 0 || (iVar3 = (**(code **)(*param_1 + 0x70))(param_1), iVar3 != 0))))
        break;
        local_15bc = local_15bc + 1;
        local_15c8 = 0x2000;
      }
      local_15c4 = 0x1fc12500;
    }
  }
LAB_180005732:
  if (local_15b0 != (char *)0x0) {
    local_1528 = local_15b0;
    free(local_15b0);
    local_15b0 = (char *)0x0;
  }
  local_1580 = local_15c4;
  FUN_180004090((longlong)local_1518);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1618);
  return;
LAB_180005464:
  bVar2 = std::ios_base::eof((ios_base *)
                             ((longlong)local_1518 + (longlong)*(int *)(local_1518[0] + 4)));
  if (!bVar2) {
    std::basic_istream<char,struct_std::char_traits<char>_>::getline
              ((basic_istream<char,struct_std::char_traits<char>_> *)local_1518,local_1418,0x400);
    local_1548 = local_1418;
    local_15a0 = -1;
    do {
      local_15a0 = local_15a0 + 1;
    } while (local_1548[local_15a0] != '\0');
    for (local_15c8 = (uint)local_15a0; local_1418[local_15c8] == '\r'; local_15c8 = local_15c8 - 1)
    {
      local_1568 = (ulonglong)local_15c8;
      if (0x3ff < local_1568) {
        __report_rangecheckfailure();
      }
      local_1418[local_1568] = '\0';
    }
    if (local_15a8 == 0) goto code_r0x000180005542;
    local_15b8 = local_1418;
    if (local_1418[0] == ' ') goto LAB_1800056c4;
    strcat_s(local_c18,0x400,"\r");
    sVar4 = mbstowcs((wchar_t *)(param_2 + 0x1000),local_c18,0x400);
    if (sVar4 != 0) {
      local_15c4 = 0;
    }
  }
  goto LAB_180005732;
code_r0x000180005542:
  local_1540 = local_1018;
  local_1598 = 0xffffffffffffffff;
  do {
    local_1598 = local_1598 + 1;
  } while (local_1540[local_1598] != '\0');
  iVar3 = strncmp(local_1418,local_1018,local_1598);
  if (iVar3 == 0) {
    local_1538 = local_1018;
    local_1590 = -1;
    lVar5 = local_1590;
    do {
      local_1590 = lVar5;
      lVar5 = local_1590 + 1;
    } while (local_1538[lVar5] != '\0');
    lVar1 = local_1590 + 1;
    local_1590 = lVar5;
    if (local_1418[lVar1] == ' ') {
      local_15a8 = 1;
      local_1530 = local_1018;
      local_1588 = -1;
      lVar5 = local_1588;
      do {
        local_1588 = lVar5;
        lVar5 = local_1588 + 1;
      } while (local_1530[lVar5] != '\0');
      local_15b8 = local_1418 + local_1588 + 1;
      local_1588 = lVar5;
LAB_1800056c4:
      for (; *local_15b8 == ' '; local_15b8 = local_15b8 + 1) {
      }
      if (*local_15b8 != '\0') {
        strcat_s(local_c18,0x400,local_15b8);
        strcat_s(local_c18,0x400,"\r");
      }
    }
  }
  goto LAB_180005464;
}




void FUN_1800057a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_898 [32];
  char *local_878;
  undefined4 local_870;
  undefined1 *local_868;
  int local_860;
  DWORD local_858;
  undefined4 local_848;
  int local_844;
  longlong *local_840;
  longlong *local_838;
  longlong local_830;
  longlong local_828;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_898;
  local_844 = 0;
  local_848 = 0;
  puVar3 = local_818;
  for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_848 = 0x25212405;
  }
  else if (param_2 == 0) {
    local_848 = 0x2581240a;
  }
  else if ((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) {
    FUN_1800033d0(local_818,0x400,L" /export \"%s\"",param_2);
    local_878 = (char *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_818,&local_844,0);
    if (iVar1 == 0) {
      local_840 = (longlong *)FUN_180007470();
      if (local_840 != (longlong *)0x0) {
        local_858 = GetLastError();
        local_830 = *local_840;
        local_860 = local_844;
        local_868 = local_818;
        local_870 = 0x267;
        local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
        (**(code **)(local_830 + 0x30))
                  (local_840,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
      }
      local_848 = 0x26812500;
    }
    else if (local_844 != 0) {
      local_838 = (longlong *)FUN_180007470();
      if (local_838 != (longlong *)0x0) {
        local_858 = GetLastError();
        local_828 = *local_838;
        local_860 = local_844;
        local_868 = local_818;
        local_870 = 0x26e;
        local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
        (**(code **)(local_828 + 0x30))
                  (local_838,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
      }
      local_848 = 0x26f12491;
    }
  }
  else {
    local_848 = 0x25e12406;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_898);
  return;
}




void FUN_1800059e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_898 [32];
  char *local_878;
  undefined4 local_870;
  undefined1 *local_868;
  int local_860;
  DWORD local_858;
  undefined4 local_848;
  int local_844;
  longlong *local_840;
  longlong *local_838;
  longlong local_830;
  longlong local_828;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_898;
  local_844 = 0;
  local_848 = 0;
  puVar3 = local_818;
  for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_848 = 0x28112405;
  }
  else if (param_2 == 0) {
    local_848 = 0x2871240a;
  }
  else if ((*(int *)((longlong)param_1 + 0x14) == 0) && ((int)param_1[2] != 0)) {
    FUN_1800033d0(local_818,0x400,L" /import \"%s\"",param_2);
    local_878 = (char *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_818,&local_844,0);
    if (iVar1 == 0) {
      local_840 = (longlong *)FUN_180007470();
      if (local_840 != (longlong *)0x0) {
        local_858 = GetLastError();
        local_830 = *local_840;
        local_860 = local_844;
        local_868 = local_818;
        local_870 = 0x296;
        local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
        (**(code **)(local_830 + 0x30))
                  (local_840,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
      }
      local_848 = 0x29712500;
    }
    else if (local_844 != 0) {
      local_838 = (longlong *)FUN_180007470();
      if (local_838 != (longlong *)0x0) {
        local_858 = GetLastError();
        local_828 = *local_838;
        local_860 = local_844;
        local_868 = local_818;
        local_870 = 0x29d;
        local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
        (**(code **)(local_828 + 0x30))
                  (local_838,1,0x12400,L"Boot:%S %d wzCmdLine:%s ExitCode:%08x failed:%08X\n");
      }
      local_848 = 0x29e12491;
    }
  }
  else {
    local_848 = 0x28d12406;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_898);
  return;
}




undefined4 FUN_180005c20(void)

{
  DWORD dwMessageId;
  undefined4 local_34;
  HLOCAL local_30;
  HKEY local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_28 = (HKEY)0x0;
  local_34 = 1;
  dwMessageId = RegOpenKeyExW((HKEY)0xffffffff80000002,L"BCD00000000",0,0x20019,&local_28);
  if (dwMessageId != 0) {
    local_30 = (HLOCAL)0x0;
    FormatMessageW(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPWSTR)&local_30,0,(va_list *)0x0);
    if (local_30 != (HLOCAL)0x0) {
      local_20 = (longlong *)FUN_180007470();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x30))
                  (local_20,1,0x12400,L"Boot:%S %d failed:%s\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp",0x2be,local_30);
      }
      LocalFree(local_30);
    }
    local_18 = (longlong *)FUN_180007470();
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x30))
                (local_18,1,0x12400,L"Boot:%S %d failed\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp",0x2c2);
    }
    local_34 = 0;
  }
  if (local_28 != (HKEY)0x0) {
    RegCloseKey(local_28);
  }
  return local_34;
}




void FUN_180005dc0(longlong param_1,char *param_2,DWORD *param_3,LPVOID param_4,DWORD *param_5)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_898 [32];
  char *local_878;
  WCHAR *local_870;
  uint local_868;
  undefined1 local_858 [4];
  BOOL local_854;
  uint local_850;
  DWORD local_84c;
  longlong *local_848;
  longlong *local_840;
  longlong *local_838;
  longlong *local_830;
  longlong *local_828;
  undefined8 local_820;
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_820 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_898;
  local_854 = 0;
  if (param_2 != (char *)0x0) {
    local_84c = 0;
    if (param_5 != (DWORD *)0x0) {
      local_84c = *param_5;
    }
    pWVar2 = local_818;
    for (lVar1 = 0x800; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)pWVar2 = 0;
      pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
    }
    local_878 = param_2;
    FUN_1800033d0(local_818,0x400,L"\"%s\"%s",param_1 + 0x18);
    local_848 = (longlong *)FUN_180007470();
    if (local_848 != (longlong *)0x0) {
      local_870 = local_818;
      local_878 = (char *)CONCAT44(local_878._4_4_,0x2e3);
      (**(code **)(*local_848 + 0x30))(local_848,1,0x12400,L"BootExecCommand %d wzCmdLine=%s\n");
    }
    local_854 = FUN_18000d910(local_818,param_3,param_4,param_5);
    if ((local_854 == 0) && (local_840 = (longlong *)FUN_180007470(), local_840 != (longlong *)0x0))
    {
      local_870 = (WCHAR *)CONCAT44(local_870._4_4_,0x2e8);
      local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
      (**(code **)(*local_840 + 0x30))(local_840,1,0x12400,L"%S %d");
    }
    if (((local_854 == 0) || ((param_3 != (DWORD *)0x0 && (*param_3 != 0)))) &&
       (*(short *)(param_1 + 0x220) != 0)) {
      local_850 = 0;
      FUN_1800012e0(local_858);
      local_850 = FUN_18003b760(local_858,0);
      if ((local_850 & 0xfff) == 0) {
        local_878 = param_2;
        FUN_1800033d0(local_818,0x400,L"\"%s\"%s",param_1 + 0x220);
        if (param_5 != (DWORD *)0x0) {
          *param_5 = local_84c;
        }
        local_854 = FUN_18000d910(local_818,param_3,param_4,param_5);
        if (local_854 == 0) {
          local_830 = (longlong *)FUN_180007470();
          if (local_830 != (longlong *)0x0) {
            local_868 = local_850;
            local_870 = (WCHAR *)CONCAT44(local_870._4_4_,0x303);
            local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
            (**(code **)(*local_830 + 0x30))(local_830,1,0x12400,L"%S %d nRes=0x%x\n");
          }
          FUN_18003b760(local_858,1);
          local_854 = 0;
          FUN_180001210();
        }
        else {
          local_850 = FUN_18003b760(local_858,1);
          if ((local_850 & 0xfff) == 0) {
            FUN_180001210();
          }
          else {
            local_828 = (longlong *)FUN_180007470();
            if (local_828 != (longlong *)0x0) {
              local_868 = local_850;
              local_870 = (WCHAR *)CONCAT44(local_870._4_4_,0x30c);
              local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
              (**(code **)(*local_828 + 0x30))(local_828,1,0x12400,L"%S %d nRes=0x%x\n");
            }
            local_854 = 0;
            FUN_180001210();
          }
        }
      }
      else {
        local_838 = (longlong *)FUN_180007470();
        if (local_838 != (longlong *)0x0) {
          local_868 = local_850;
          local_870 = (WCHAR *)CONCAT44(local_870._4_4_,0x2f6);
          local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bcdedit.cpp";
          (**(code **)(*local_838 + 0x30))(local_838,1,0x12400,L"%S %d nRes=0x%x\n");
        }
        local_854 = 0;
        FUN_180001210();
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_898);
  return;
}




void FUN_180006210(undefined8 *param_1)

{
  *param_1 = CInterfaceImpl<class_IBCDEdit>::vftable;
  FUN_180003490(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl CResetPropExchange::CResetPropExchange(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CResetPropExchange * __thiscall CResetPropExchange::CResetPropExchange(CResetPropExchange *this)

{
  FUN_180007020((undefined8 *)this);
  *(undefined ***)this = CInterfaceImpl<class_IBCDEdit>::vftable;
  *(undefined4 *)(this + 8) = 1;
  return this;
}




undefined8 FUN_180006280(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x2d1240a;
  }
  else {
    uVar1 = 0x2f12406;
  }
  return uVar1;
}




undefined8 FUN_1800062b0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  DAT_1800bde78 = DAT_1800bde78 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_1800062d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  LOCK();
  DAT_1800bde78 = DAT_1800bde78 + -1;
  UNLOCK();
  plVar2 = param_1 + 1;
  LOCK();
  lVar1 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if (((int)lVar1 + -1 < 1) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,1);
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x000180006375) */

longlong FUN_180006350(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1800012e0(param_2);
  if (param_1 != lVar1) {
    FUN_180001f40(param_2);
    FUN_180007130(param_1);
    puVar2 = (undefined8 *)FUN_180001f40(param_2);
    puVar3 = Myptr(puVar2);
    FID_conflict_assign(param_1,(undefined1 *)puVar3,puVar2[2]);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > && __ptr64) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar1 = FUN_180001f40(param_2);
  uVar1 = FUN_1800012e0(uVar1);
  FUN_180002b90(param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_1800012e0(param_2);
  FUN_180007160(param_1,uVar1);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(unsigned short const * __ptr64 const,unsigned
   __int64) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(wchar_t const * __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined1 *param_2,ulonglong param_3)

{
  FUN_180001f60(param_1);
  FID_conflict__Tidy_init(param_1);
  FID_conflict_assign(param_1,param_2,param_3);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(void) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1)

{
  FUN_180001f60(param_1);
  FID_conflict__Tidy_init(param_1);
  return param_1;
}




void FUN_1800064e0(longlong param_1)

{
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)(param_1 + -0x9c + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       *(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98;
  FUN_180006fa0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + -0x80));
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)(param_1 + -0x78));
  return;
}




basic_iostream<char,struct_std::char_traits<char>_> *
FUN_180006570(basic_iostream<char,struct_std::char_traits<char>_> *param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined **)param_1 = &DAT_180056e60;
    *(undefined **)(param_1 + 0x10) = &DAT_180056c90;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0x98));
  }
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  basic_iostream<char,struct_std::char_traits<char>_>
            (param_1,(basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 0x18));
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  FUN_1800072c0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




fpos<struct__Mbstatet> *
FUN_180006660(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,
             fpos<struct__Mbstatet> *param_2,longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar1 = FUN_180007390(param_3);
  pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
  if ((pcVar3 != (char *)0x0) && (*(char **)(param_1 + 0x68) < pcVar3)) {
    *(char **)(param_1 + 0x68) = pcVar3;
  }
  pcVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - (longlong)pcVar4) < uVar1) {
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  }
  else if ((uVar1 == 0) ||
          ((((param_4 & 1) == 0 || (pcVar2 != (char *)0x0)) &&
           (((param_4 & 2) == 0 || (pcVar3 != (char *)0x0)))))) {
    if (((param_4 & 1) != 0) && (pcVar2 != (char *)0x0)) {
      std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
                (param_1,pcVar4,pcVar4 + uVar1,*(char **)(param_1 + 0x68));
    }
    if (((param_4 & 2) != 0) && (pcVar3 != (char *)0x0)) {
      pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::epptr(param_1);
      std::basic_streambuf<char,struct_std::char_traits<char>_>::setp
                (param_1,pcVar4,pcVar4 + uVar1,pcVar2);
    }
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,uVar1);
  }
  else {
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  }
  return param_2;
}




fpos<struct__Mbstatet> *
FUN_180006800(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,
             fpos<struct__Mbstatet> *param_2,longlong param_3,int param_4,uint param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong local_30;
  
  pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
  if ((pcVar2 != (char *)0x0) && (*(char **)(param_1 + 0x68) < pcVar2)) {
    *(char **)(param_1 + 0x68) = pcVar2;
  }
  pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
  if (param_4 == 0) {
    local_30 = 0;
LAB_180006964:
    if ((ulonglong)(*(longlong *)(param_1 + 0x68) - (longlong)pcVar3) < param_3 + local_30) {
      std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
    }
    else {
      lVar4 = param_3 + local_30;
      if ((lVar4 == 0) ||
         ((((param_5 & 1) == 0 || (pcVar1 != (char *)0x0)) &&
          (((param_5 & 2) == 0 || (pcVar2 != (char *)0x0)))))) {
        if (((param_5 & 1) != 0) && (pcVar1 != (char *)0x0)) {
          std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
                    (param_1,pcVar3,pcVar3 + lVar4,*(char **)(param_1 + 0x68));
        }
        if (((param_5 & 2) != 0) && (pcVar2 != (char *)0x0)) {
          pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::epptr(param_1);
          std::basic_streambuf<char,struct_std::char_traits<char>_>::setp
                    (param_1,pcVar3,pcVar3 + lVar4,pcVar1);
        }
        std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,lVar4);
      }
      else {
        std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
      }
    }
  }
  else {
    if (param_4 == 1) {
      if ((param_5 & 3) != 3) {
        if ((param_5 & 1) == 0) {
          if (((param_5 & 2) != 0) && ((pcVar2 != (char *)0x0 || (pcVar3 == (char *)0x0)))) {
            local_30 = (longlong)pcVar2 - (longlong)pcVar3;
            goto LAB_180006964;
          }
        }
        else if ((pcVar1 != (char *)0x0) || (pcVar3 == (char *)0x0)) {
          local_30 = (longlong)pcVar1 - (longlong)pcVar3;
          goto LAB_180006964;
        }
      }
    }
    else {
      local_30 = *(longlong *)(param_1 + 0x68) - (longlong)pcVar3;
      if (param_4 == 2) goto LAB_180006964;
    }
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  }
  return param_2;
}




void FUN_180006ab0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  char *pcVar2;
  __uint64 *p_Var3;
  char *local_18;
  char *local_10;
  
  pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  if (pcVar1 == (char *)0x0) {
    FUN_180003710();
  }
  else {
    pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::egptr(param_1);
    if (pcVar1 < pcVar2) {
      FUN_180003670(pcVar1);
    }
    else {
      local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
      if ((local_18 == (char *)0x0) || ((*(uint *)(param_1 + 0x70) & 4) != 0)) {
        FUN_180003710();
      }
      else {
        p_Var3 = std::_Max_value<unsigned___int64>
                           ((__uint64 *)(param_1 + 0x68),(__uint64 *)&local_18);
        pcVar2 = (char *)*p_Var3;
        if (pcVar1 < pcVar2) {
          *(char **)(param_1 + 0x68) = pcVar2;
          local_10 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
          pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
          std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
                    (param_1,pcVar1,local_10,pcVar2);
          pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
          FUN_180003670(pcVar1);
        }
        else {
          FUN_180003710();
        }
      }
    }
  }
  return;
}




void FUN_180006bc0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint local_res10 [6];
  char local_28;
  char local_27;
  int local_24;
  int local_20 [2];
  char *local_18;
  
  local_res10[0] = param_2;
  local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  if ((local_18 != (char *)0x0) &&
     (pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1),
     pcVar2 < local_18)) {
    uVar3 = FUN_180003710();
    local_24 = (int)uVar3;
    bVar1 = eq_int_type(&local_24,(int *)local_res10);
    if (!bVar1) {
      local_28 = FUN_180003670((undefined1 *)local_res10);
      bVar1 = eq(&local_28,local_18 + -1);
      if ((!bVar1) && ((*(uint *)(param_1 + 0x70) & 2) != 0)) goto LAB_180006c5b;
    }
    std::basic_streambuf<char,struct_std::char_traits<char>_>::gbump(param_1,-1);
    uVar3 = FUN_180003710();
    local_20[0] = (int)uVar3;
    bVar1 = eq_int_type(local_20,(int *)local_res10);
    if (!bVar1) {
      local_27 = FUN_180003670((undefined1 *)local_res10);
      pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
      *pcVar2 = local_27;
    }
    not_eof(local_res10);
    return;
  }
LAB_180006c5b:
  FUN_180003710();
  return;
}




ulonglong FUN_180006cc0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 extraout_var;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  uint local_res10 [6];
  ulonglong local_48;
  longlong local_38;
  int local_28 [2];
  char *local_20;
  char *local_18;
  
  local_res10[0] = param_2;
  if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
    uVar5 = FUN_180003710();
    local_28[0] = (int)uVar5;
    bVar1 = eq_int_type(local_28,(int *)local_res10);
    if (bVar1) {
      uVar3 = not_eof(local_res10);
      uVar4 = CONCAT44(extraout_var,uVar3);
    }
    else {
      pcVar6 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
      local_20 = std::basic_streambuf<char,struct_std::char_traits<char>_>::epptr(param_1);
      if ((pcVar6 == (char *)0x0) || (local_20 <= pcVar6)) {
        local_48 = 0;
        pcVar7 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
        if (pcVar6 != (char *)0x0) {
          local_48 = (longlong)local_20 - (longlong)pcVar7;
        }
        if (local_48 < 0x20) {
          local_38 = 0x20;
        }
        else if (local_48 < 0x3fffffff) {
          local_38 = local_48 << 1;
        }
        else {
          if (0x7ffffffe < local_48) {
            uVar4 = FUN_180003710();
            return uVar4;
          }
          local_38 = 0x7fffffff;
        }
        uVar5 = allocate(param_1 + 0x74,local_38);
        pcVar6 = (char *)FUN_1800012e0(uVar5);
        FUN_180003600(pcVar6,pcVar7,local_48);
        local_18 = pcVar6 + local_48;
        *(char **)(param_1 + 0x68) = local_18 + 1;
        std::basic_streambuf<char,struct_std::char_traits<char>_>::setp
                  (param_1,pcVar6,local_18,pcVar6 + local_38);
        if ((*(uint *)(param_1 + 0x70) & 4) == 0) {
          pcVar8 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
          std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
                    (param_1,pcVar6,pcVar6 + ((longlong)pcVar8 - (longlong)pcVar7),
                     *(char **)(param_1 + 0x68));
        }
        else {
          std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
                    (param_1,pcVar6,(char *)0x0,pcVar6);
        }
        if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
          pvVar9 = (void *)FUN_180007110(pcVar7);
          FUN_180007360(param_1 + 0x74,pvVar9,local_48);
        }
        *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
        cVar2 = FUN_180003670((undefined1 *)local_res10);
        pcVar6 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
        *pcVar6 = cVar2;
        uVar4 = (ulonglong)local_res10[0];
      }
      else {
        cVar2 = FUN_180003670((undefined1 *)local_res10);
        pcVar7 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
        *pcVar7 = cVar2;
        *(char **)(param_1 + 0x68) = pcVar6 + 1;
        uVar4 = (ulonglong)local_res10[0];
      }
    }
  }
  else {
    uVar4 = FUN_180003710();
  }
  return uVar4;
}




void FUN_180006fa0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  *(undefined ***)param_1 =
       std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::vftable
  ;
  FUN_1800071e0(param_1);
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}




undefined8 * FUN_180006fe0(undefined8 *param_1,uint param_2)

{
  FUN_180006210(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180007020(undefined8 *param_1)

{
  FUN_1800070f0(param_1);
  *param_1 = IBCDEdit::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::basic_stringstream<char,struct
   std::char_traits<char>,class std::allocator<char> >::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __thiscall
std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_scalar_deleting_destructor_
          (basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          uint param_1)

{
  FUN_180004090((longlong)(this + -0x98));
  if ((param_1 & 1) != 0) {
    free(this + -0x98);
  }
  return this + -0x98;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_1800070b0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_180006fa0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800070f0(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return param_1;
}




void FUN_180007110(undefined8 param_1)

{
  FUN_1800012e0(param_1);
  return;
}




void FUN_180007130(undefined8 param_1)

{
  FUN_180001f40(param_1);
  _Pocca<>();
  return;
}




void FUN_180007160(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_180001f40(param_2);
  uVar2 = FUN_180001f40(param_1);
  puVar3 = (undefined1 *)FUN_1800012e0(uVar2);
  puVar4 = (undefined1 *)FUN_1800012e0(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__Tidy_init(param_2);
  return;
}




void FUN_1800071e0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  char *local_18;
  
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
    if (pcVar1 == (char *)0x0) {
      local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::egptr(param_1);
    }
    else {
      local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::epptr(param_1);
    }
    pcVar1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
    pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
    pvVar3 = (void *)FUN_180007110(pcVar2);
    FUN_180007360(param_1 + 0x74,pvVar3,(longlong)local_18 - (longlong)pcVar1);
  }
  std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
            (param_1,(char *)0x0,(char *)0x0,(char *)0x0);
  std::basic_streambuf<char,struct_std::char_traits<char>_>::setp(param_1,(char *)0x0,(char *)0x0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  return;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_1800072c0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,int param_2)

{
  int iVar1;
  
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  *(undefined ***)param_1 =
       std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::vftable
  ;
  *(undefined8 *)(param_1 + 0x68) = 0;
  iVar1 = std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          _Getstate(param_2);
  *(int *)(param_1 + 0x70) = iVar1;
  FUN_1800012e0(param_1 + 0x74);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,undefined8 param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_1800012e0(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180007360(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




longlong FUN_180007390(longlong *param_1)

{
  return *param_1 + param_1[1];
}




/* Library Function - Single Match
    public: __cdecl std::fpos<struct _Mbstatet>::fpos<struct _Mbstatet>(__int64) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

fpos<struct__Mbstatet> * __thiscall
std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(fpos<struct__Mbstatet> *this,__int64 param_1)

{
  longlong lVar1;
  fpos<struct__Mbstatet> *pfVar2;
  
  *(__int64 *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pfVar2 = this + 0x10;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pfVar2 = (fpos<struct__Mbstatet>)0x0;
    pfVar2 = pfVar2 + 1;
  }
  return this;
}




/* Library Function - Single Match
    private: static int __cdecl std::basic_stringbuf<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Getstate(int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl
std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Getstate
          (int param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if ((param_1 & 1U) == 0) {
    local_18 = 4;
  }
  if ((param_1 & 2U) == 0) {
    local_18 = local_18 | 2;
  }
  if ((param_1 & 8U) != 0) {
    local_18 = local_18 | 8;
  }
  if ((param_1 & 4U) != 0) {
    local_18 = local_18 | 0x10;
  }
  return local_18;
}




longlong FUN_180007470(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *local_18 [3];
  
  lVar3 = DAT_1800bde70;
  if (DAT_1800bde70 == 0) {
    local_18[0] = (undefined8 *)0x0;
    iVar1 = FUN_1800075a0("CodeLog",0x1800,local_18);
    if (iVar1 == 0) {
      plVar2 = (longlong *)
               __RTDynamicCast(local_18[0],0,&ITbCreator::RTTI_Type_Descriptor,
                               &CTbBaseCreator<class_ILog>::RTTI_Type_Descriptor,0);
      if ((plVar2 != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x1800)) {
        DAT_1800bde70 = (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      (**(code **)*local_18[0])(local_18[0]);
      lVar3 = DAT_1800bde70;
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}




void FUN_180007540(wchar_t *param_1,wchar_t *param_2)

{
  wcscat_s(param_1,0x400,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocca<struct std::_Wrap_alloc<class std::allocator<char> > >(struct
   std::_Wrap_alloc<class std::allocator<char> > & __ptr64,struct std::_Wrap_alloc<class
   std::allocator<char> > const & __ptr64)
    void __cdecl std::_Pocca<struct std::_Wrap_alloc<class std::allocator<unsigned short> > >(struct
   std::_Wrap_alloc<class std::allocator<unsigned short> > & __ptr64,struct std::_Wrap_alloc<class
   std::allocator<unsigned short> > const & __ptr64)
    void __cdecl std::_Pocca<struct std::_Wrap_alloc<class std::allocator<wchar_t> > >(struct
   std::_Wrap_alloc<class std::allocator<wchar_t> > & __ptr64,struct std::_Wrap_alloc<class
   std::allocator<wchar_t> > const & __ptr64)
   
   Library: Visual Studio 2015 Release */

void _Pocca<>(void)

{
  FUN_180007660();
  return;
}




undefined4 FUN_1800075a0(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1800bde60) {
    _Init_thread_header(&DAT_1800bde60);
    if (DAT_1800bde60 == -1) {
      DAT_1800bde68 = (code *)FUN_180003500(param_1,&local_20);
      _Init_thread_footer(&DAT_1800bde60);
    }
  }
  if (DAT_1800bde68 == (code *)0x0) {
    uVar1 = 0x12412402;
  }
  else {
    uVar1 = (*DAT_1800bde68)(0x10000,param_2,param_3);
  }
  return uVar1;
}




void FUN_180007660(void)

{
  return;
}




void FUN_180007670(longlong param_1,uint param_2)

{
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _scalar_deleting_destructor_
            ((basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




int FUN_180007680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180001010();
  local_14 = __stdio_common_vswprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




void FUN_1800076f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180007680(param_1,param_2,param_3,0,param_4);
  return;
}




void FUN_180007730(undefined8 *param_1)

{
  *param_1 = IBoot::vftable;
  FUN_180003430(param_1);
  return;
}




undefined8 * FUN_180007760(undefined8 *param_1,uint param_2)

{
  FUN_180007730(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800077a0(undefined8 *param_1)

{
  *param_1 = ITbCreator::vftable;
  FUN_180003430(param_1);
  return;
}




undefined8 * FUN_1800077d0(undefined8 *param_1,uint param_2)

{
  FUN_1800077a0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::_Container_proxy::_Container_proxy(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall std::_Container_proxy::_Container_proxy(_Container_proxy *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}




undefined8 * FUN_180007840(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::_Iterator_base12::_Iterator_base12(struct std::_Iterator_base12 const &
   __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

_Iterator_base12 * __thiscall
std::_Iterator_base12::_Iterator_base12(_Iterator_base12 *this,_Iterator_base12 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  operator=(this,param_1);
  return this;
}




/* Library Function - Single Match
    public: struct std::_Iterator_base12 & __ptr64 __cdecl std::_Iterator_base12::operator=(struct
   std::_Iterator_base12 const & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

_Iterator_base12 * __thiscall
std::_Iterator_base12::operator=(_Iterator_base12 *this,_Iterator_base12 *param_1)

{
  if ((*(longlong *)this != *(longlong *)param_1) && (*(longlong *)param_1 != 0)) {
    _Adopt(this,(_Container_base12 *)**(undefined8 **)param_1);
  }
  return this;
}




/* Library Function - Single Match
    public: void __cdecl std::_Iterator_base12::_Adopt(struct std::_Container_base12 const *
   __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall std::_Iterator_base12::_Adopt(_Iterator_base12 *this,_Container_base12 *param_1)

{
  if (param_1 != (_Container_base12 *)0x0) {
    *(undefined8 *)this = *(undefined8 *)param_1;
  }
  return;
}




/* Library Function - Single Match
    public: struct std::_Container_base12 const * __ptr64 __cdecl
   std::_Iterator_base12::_Getcont(void)const __ptr64
   
   Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015, Visual Studio 2017 */

_Container_base12 * __thiscall std::_Iterator_base12::_Getcont(_Iterator_base12 *this)

{
  undefined8 local_18;
  
  if (*(longlong *)this == 0) {
    local_18 = (_Container_base12 *)0x0;
  }
  else {
    local_18 = (_Container_base12 *)**(undefined8 **)this;
  }
  return local_18;
}




void FUN_180007970(LPWSTR param_1,DWORD param_2,int param_3)

{
  WCHAR WVar1;
  BOOL BVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  short *psVar6;
  LPWSTR pWVar7;
  undefined1 auStack_2c8 [32];
  WCHAR local_2a8;
  undefined2 local_2a6;
  int local_2a4;
  short *local_2a0;
  LPWSTR local_298;
  LPWSTR local_290;
  DWORD local_288;
  longlong local_280;
  WCHAR *local_278;
  LPWSTR local_270;
  LPWSTR local_268;
  WCHAR *local_260;
  LPWSTR local_258;
  WCHAR *local_250;
  LPWSTR local_248;
  short sStack_23a;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_2c8;
  local_288 = 0;
  if ((param_1 != (LPWSTR)0x0) &&
     (local_288 = GetModuleFileNameW((HMODULE)0x0,param_1,param_2), local_288 != 0)) {
    local_280 = -1;
    do {
      local_280 = local_280 + 1;
    } while (param_1[local_280] != L'\0');
    for (local_2a4 = (int)local_280; param_1[local_2a4] != L'\\'; local_2a4 = local_2a4 + -1) {
      param_1[local_2a4] = L'\0';
    }
    local_258 = param_1;
    if (param_3 == 0) {
      local_290 = param_1 + -1;
      do {
        local_290 = local_290 + 1;
      } while (*local_290 != L'\0');
      pwVar4 = L"image.iso";
      pWVar7 = local_290;
      for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(char *)pWVar7 = (char)*pwVar4;
        pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
        pWVar7 = (LPWSTR)((longlong)pWVar7 + 1);
      }
    }
    else {
      pWVar5 = local_238;
      for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)pWVar5 = 0;
        pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
      }
      local_250 = local_238;
      local_278 = local_250;
      local_268 = param_1;
      do {
        local_2a8 = *local_268;
        *local_278 = local_2a8;
        local_268 = local_268 + 1;
        local_278 = local_278 + 1;
      } while (local_2a8 != L'\0');
      local_2a0 = &sStack_23a;
      do {
        local_2a0 = local_2a0 + 1;
      } while (*local_2a0 != 0);
      pwVar4 = L"imageLinux.iso";
      psVar6 = local_2a0;
      for (lVar3 = 0x1e; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(char *)psVar6 = (char)*pwVar4;
        pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
        psVar6 = (short *)((longlong)psVar6 + 1);
      }
      BVar2 = PathFileExistsW(local_238);
      if (BVar2 == 0) {
        local_298 = param_1 + -1;
        do {
          local_298 = local_298 + 1;
        } while (*local_298 != L'\0');
        pwVar4 = L"image.iso";
        pWVar7 = local_298;
        for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(char *)pWVar7 = (char)*pwVar4;
          pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
          pWVar7 = (LPWSTR)((longlong)pWVar7 + 1);
        }
      }
      else {
        local_260 = local_238;
        local_270 = param_1;
        do {
          WVar1 = *local_260;
          *local_270 = WVar1;
          local_260 = local_260 + 1;
          local_270 = local_270 + 1;
        } while (WVar1 != L'\0');
        local_2a6 = 0;
        local_248 = param_1;
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_2c8);
  return;
}




undefined8 FUN_180007c30(LPWSTR param_1,DWORD param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  int local_28;
  longlong local_20;
  
  if (param_1 == (LPWSTR)0x0) {
    uVar2 = 0x6312409;
  }
  else {
    DVar1 = GetModuleFileNameW((HMODULE)0x0,param_1,param_2);
    if (DVar1 == 0) {
      uVar2 = 0x6912602;
    }
    else {
      local_20 = -1;
      do {
        local_20 = local_20 + 1;
      } while (param_1[local_20] != L'\0');
      for (local_28 = (int)local_20; param_1[local_28] != L'\\'; local_28 = local_28 + -1) {
        param_1[local_28] = L'\0';
      }
      param_1[local_28] = L'\0';
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined4 FUN_180007d00(uint param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  INT_PTR IVar2;
  undefined4 local_28;
  
  local_28 = 0x2a12401;
  hModule = LoadLibraryA("peformat.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"DoFormat");
    if (pFVar1 != (FARPROC)0x0) {
      IVar2 = (*pFVar1)((ulonglong)param_1);
      if ((int)IVar2 != 0) {
        local_28 = 0;
      }
    }
  }
  return local_28;
}




undefined4 FUN_180007d70(uint *param_1,int *param_2)

{
  int iVar1;
  INT_PTR IVar2;
  char local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  HMODULE local_18;
  FARPROC local_10;
  
  local_24 = 0x3c12401;
  local_18 = LoadLibraryA("peformat.dll");
  if (local_18 != (HMODULE)0x0) {
    local_10 = GetProcAddress(local_18,"CheckFormat");
    if (local_10 != (FARPROC)0x0) {
      local_28[0] = '\0';
      local_20 = 0;
      local_1c = 0;
      IVar2 = (*local_10)((ulonglong)*param_1,local_28,&local_20,&local_1c);
      if ((int)IVar2 != 0) {
        if (local_20 == 0) {
          if (local_1c != 0) {
            local_24 = 0x4f127c5;
          }
        }
        else {
          local_24 = 0x4a127c6;
          iVar1 = toupper((int)local_28[0]);
          *param_2 = iVar1 + -0x41;
        }
      }
    }
  }
  return local_24;
}




CResetPropExchange * FUN_180007e40(CResetPropExchange *param_1)

{
  CResetPropExchange::CResetPropExchange(param_1);
  *(undefined ***)param_1 = CBoot::vftable;
  FUN_18000ae00((undefined8 *)(param_1 + 0x1570));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x428) = 1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x42c) = 0;
  *(undefined2 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_18000abf0(param_1 + 0x1570);
  return param_1;
}




undefined8 * FUN_180007f30(undefined8 *param_1,uint param_2)

{
  FUN_180007f70(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180007f70(undefined8 *param_1)

{
  *param_1 = CBoot::vftable;
  FUN_18000abf0(param_1 + 0x2ae);
  FUN_18000add0(param_1 + 0x2ae);
  FUN_18000ae30(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180008166) */
/* WARNING: Removing unreachable block (ram,0x000180008099) */
/* WARNING: Removing unreachable block (ram,0x0001800081ce) */
/* WARNING: Removing unreachable block (ram,0x0001800080ff) */

void FUN_180007fc0(longlong param_1,int param_2,short *param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 auStack_4b8 [32];
  char *local_498;
  char *local_490;
  undefined4 local_488;
  undefined *local_480;
  longlong local_478;
  longlong local_470;
  uint local_468;
  longlong *local_460;
  longlong *local_458;
  undefined *local_450;
  longlong local_448;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_4b8;
  local_468 = 0;
  pWVar5 = local_438;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_228;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  if ((param_2 == 0) || (param_2 == 1)) {
    if (param_3 == (short *)0x0) {
      local_468 = FUN_180007970(local_438,0x104,0);
      if ((local_468 & 0xfff) != 0) goto LAB_1800082fb;
      FUN_18003bb00((short *)(param_1 + 0x18),0x104,(longlong)local_438);
    }
    else {
      uVar1 = FUN_18003bb60(param_3);
      if ((0x103 < uVar1) || (iVar2 = FUN_18003bb60(param_3), iVar2 == 0)) {
        local_468 = 0xa112475;
        goto LAB_1800082fb;
      }
      FUN_18003bb00((short *)(param_1 + 0x18),0x104,(longlong)param_3);
    }
    if (param_4 == (short *)0x0) {
      uVar3 = FUN_180007c30(local_228,0x104);
      local_468 = (uint)uVar3;
      if ((uVar3 & 0xfff) != 0) goto LAB_1800082fb;
      FUN_18003bb00((short *)(param_1 + 0x220),0x104,(longlong)local_228);
    }
    else {
      uVar1 = FUN_18003bb60(param_4);
      if ((0x103 < uVar1) || (iVar2 = FUN_18003bb60(param_4), iVar2 == 0)) {
        local_468 = 0xbe12475;
        goto LAB_1800082fb;
      }
      FUN_18003bb00((short *)(param_1 + 0x220),0x104,(longlong)param_4);
    }
    *(undefined2 *)(param_1 + 0x634) = 0;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_18000abf0(param_1 + 0x1570);
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_460 = (longlong *)FUN_180007470();
    if (local_460 != (longlong *)0x0) {
      if (param_2 == 0) {
        local_450 = &DAT_18003fe64;
      }
      else {
        local_450 = &DAT_180040f78;
      }
      local_470 = param_1 + 0x220;
      local_478 = param_1 + 0x18;
      local_448 = *local_460;
      local_480 = local_450;
      local_488 = 0xd3;
      local_490 = "CBoot::Init";
      local_498 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
      (**(code **)(local_448 + 0x30))
                (local_460,1,0x12400,
                 L"Boot:File:%S Func:%S Line:%d BootType:%s IsoPath:%s ToolsPath:%s\n");
    }
  }
  else {
    local_468 = 0x8b12409;
  }
LAB_1800082fb:
  local_458 = (longlong *)FUN_180007470();
  if (local_458 != (longlong *)0x0) {
    local_480 = (undefined *)CONCAT44(local_480._4_4_,local_468);
    local_488 = 0xd6;
    local_490 = "CBoot::Init";
    local_498 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
    (**(code **)(*local_458 + 0x30))(local_458,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4b8);
  return;
}




undefined4 FUN_180008380(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x42c) = 0;
  *(undefined2 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_18000abf0(param_1 + 0x1570);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x428) = 1;
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x0001800084af) */

undefined4 FUN_180008440(longlong param_1,short *param_2)

{
  uint uVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_18 = 0x10412405;
  }
  else if ((param_2 == (short *)0x0) || (uVar1 = FUN_18003bb60(param_2), 0x103 < uVar1)) {
    local_18 = 0x10a12409;
  }
  else {
    FUN_18003bb00((short *)(param_1 + 0x42c),0x104,(longlong)param_2);
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00018000854f) */

undefined4 FUN_1800084e0(longlong param_1,short *param_2)

{
  uint uVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_18 = 0x12912405;
  }
  else if ((param_2 == (short *)0x0) || (uVar1 = FUN_18003bb60(param_2), 0x79b < uVar1)) {
    local_18 = 0x12f12409;
  }
  else {
    FUN_18003bb00((short *)(param_1 + 0x634),0x79c,(longlong)param_2);
  }
  return local_18;
}




uint FUN_180008570(undefined8 param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_180007d70(param_2,param_3);
  plVar2 = (longlong *)FUN_180007470();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))
              (plVar2,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp","CBoot::PreInstallCheck",0x1e1,
               uVar1,uVar1,uVar3);
  }
  if ((uVar1 & 0xfff) == 0) {
    uVar1 = 0x1e5127c6;
  }
  return uVar1;
}




undefined4
FUN_180008ae0(longlong param_1,int param_2,ushort param_3,int param_4,int param_5,uint param_6,
             undefined *param_7,longlong param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18002c570(param_2,param_3,(wchar_t *)(param_1 + 0x220),(LPCWSTR)(param_1 + 0x18),
                        (LPCWSTR)(param_1 + 0x42c),(LPCWSTR)(param_1 + 0x634),param_6,param_7,
                        param_8,param_4,param_5);
  return uVar1;
}




uint FUN_180008bc0(longlong *param_1,uint param_2,short param_3,uint param_4,undefined *param_5,
                  longlong param_6,uint param_7)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  ushort local_28 [2];
  uint local_24;
  int local_20;
  undefined4 local_1c;
  longlong *local_18;
  
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_24 = 0x26112405;
  }
  else if (param_7 < 3) {
    puVar4 = (ushort *)(param_1 + 0x44);
    lVar5 = (longlong)&DAT_18003fa1c - (longlong)puVar4;
    do {
      uVar2 = *puVar4;
      uVar1 = *(ushort *)((longlong)puVar4 + lVar5);
      if (uVar2 != uVar1) {
        uVar3 = -(uint)(uVar2 < uVar1) | 1;
        goto LAB_180008c4d;
      }
      puVar4 = puVar4 + 1;
    } while (uVar2 != 0);
    uVar3 = 0;
LAB_180008c4d:
    if (uVar3 == 0) {
      local_24 = 0x26d12475;
    }
    else {
      puVar4 = (ushort *)(param_1 + 3);
      lVar5 = (longlong)&DAT_18003fa6c - (longlong)puVar4;
      do {
        uVar2 = *puVar4;
        uVar1 = *(ushort *)((longlong)puVar4 + lVar5);
        if (uVar2 != uVar1) {
          uVar3 = -(uint)(uVar2 < uVar1) | 1;
          goto LAB_180008c8c;
        }
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
      uVar3 = 0;
LAB_180008c8c:
      if (uVar3 == 0) {
        local_24 = 0x27312475;
      }
      else {
        local_28[0] = param_3 + 0x41;
        if ((local_28[0] < 0x41) || (0x5a < local_28[0])) {
          local_24 = 0x27a12460;
        }
        else {
          local_24 = (**(code **)(*param_1 + 0x70))(param_1,&local_1c);
          if (((local_24 & 0xfff) == 0) &&
             (local_24 = FUN_180009aa0((longlong)param_1), (local_24 & 0xfff) == 0)) {
            local_20 = (int)param_1[2];
            if (local_20 == 0) {
              local_24 = FUN_180008ae0((longlong)param_1,param_2,local_28[0],0,param_7,param_4,
                                       param_5,param_6);
            }
            else if (local_20 == 1) {
              local_24 = FUN_180008e40((longlong)param_1,param_2,local_28,
                                       (LPCWSTR)(ulonglong)param_4,param_5,param_6);
            }
          }
        }
      }
    }
  }
  else {
    local_24 = 0x26712406;
  }
  local_18 = (longlong *)FUN_180007470();
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x30))
              (local_18,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp","CBoot::Install",0x296,local_24);
  }
  return local_24;
}




/* WARNING: Removing unreachable block (ram,0x000180008fa4) */
/* WARNING: Removing unreachable block (ram,0x000180008fbf) */
/* WARNING: Removing unreachable block (ram,0x000180008fcb) */
/* WARNING: Removing unreachable block (ram,0x000180008fdd) */
/* WARNING: Removing unreachable block (ram,0x000180009013) */
/* WARNING: Removing unreachable block (ram,0x000180009018) */
/* WARNING: Removing unreachable block (ram,0x000180009042) */
/* WARNING: Removing unreachable block (ram,0x000180009060) */
/* WARNING: Removing unreachable block (ram,0x000180009096) */
/* WARNING: Removing unreachable block (ram,0x00018000909b) */
/* WARNING: Removing unreachable block (ram,0x0001800090a2) */
/* WARNING: Removing unreachable block (ram,0x0001800090ad) */
/* WARNING: Removing unreachable block (ram,0x000180009130) */

void FUN_180008e40(longlong param_1,uint param_2,ushort *param_3,LPCWSTR param_4,undefined *param_5,
                  longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_298 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_298;
  pWVar5 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  uVar1 = *param_3;
  wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d\\");
  GetDriveTypeW(local_228);
  FUN_180016000(param_2);
  FUN_180016200(uVar1 - 0x41);
  pWVar3 = (LPCWSTR)(param_1 + 0x42c);
  pWVar4 = (LPCWSTR)(param_1 + 0x18);
  FUN_18003a960(*param_3,(wchar_t *)(param_1 + 0x220),pWVar4,pWVar3,(LPCWSTR)(param_1 + 0x634),
                (uint)param_4,param_5,param_6);
  FUN_180016000(param_2);
  FUN_180016200(uVar1 - 0x41);
  FUN_18000a6c0(param_1,*param_3,pWVar4,pWVar3);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_298);
  return;
}




undefined4 FUN_1800091d0(longlong param_1,uint param_2,ushort param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18002cfd0((ulonglong)param_2,param_3,(LPCWSTR)(param_1 + 0x220),
                        (LPCWSTR)(param_1 + 0x18),(short *)(param_1 + 0x42c),0,param_4);
  return uVar1;
}




undefined4 FUN_180009250(void)

{
  return 0x30b12406;
}




uint FUN_180009280(longlong *param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  short local_res18;
  WCHAR local_28 [2];
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18 [2];
  longlong *local_10;
  
  local_28[0] = L'\0';
  local_20 = 0;
  local_24 = 0;
  local_18[0] = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_24 = 0x32c12405;
  }
  else if (param_4 < 3) {
    puVar5 = (ushort *)(param_1 + 0x44);
    lVar6 = (longlong)&DAT_18003fb6c - (longlong)puVar5;
    do {
      uVar2 = *puVar5;
      uVar1 = *(ushort *)((longlong)puVar5 + lVar6);
      if (uVar2 != uVar1) {
        uVar3 = -(uint)(uVar2 < uVar1) | 1;
        goto LAB_180009315;
      }
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0);
    uVar3 = 0;
LAB_180009315:
    if (uVar3 == 0) {
      local_24 = 0x33812475;
    }
    else {
      local_24 = (**(code **)(*param_1 + 0x70))(param_1,local_18);
      if (((local_24 & 0xfff) == 0) &&
         (local_24 = FUN_180009aa0((longlong)param_1), (local_24 & 0xfff) == 0)) {
        local_1c = (int)param_1[2];
        if (local_1c == 0) {
          uVar3 = param_2;
          if ((param_2 == 0xffffffff) &&
             (local_20 = FUN_180010190(), uVar3 = local_20, (int)local_20 < 0)) {
            local_24 = 0x35112461;
          }
          else {
            local_20 = uVar3;
            if (param_3 == -1) {
              iVar4 = FUN_18000f310(local_28);
              if (iVar4 != 0) {
                local_24 = 0x35f12460;
                goto LAB_180009442;
              }
            }
            else {
              local_res18 = (short)param_3;
              local_28[0] = local_res18 + L'A';
            }
            local_24 = FUN_1800091d0((longlong)param_1,local_20,local_28[0],param_4);
          }
        }
        else if (local_1c == 1) {
          local_24 = FUN_180009250();
        }
      }
    }
  }
  else {
    local_24 = 0x33212406;
  }
LAB_180009442:
  local_10 = (longlong *)FUN_180007470();
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x30))
              (local_10,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp","CBoot::Remove",0x371,local_24);
  }
  return local_24;
}




uint FUN_1800094c0(longlong *param_1)

{
  int iVar1;
  WCHAR local_28 [2];
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18 [2];
  longlong *local_10;
  
  local_28[0] = L'\0';
  local_20 = 0;
  local_24 = 0;
  local_18[0] = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_24 = 0x38812405;
  }
  else if ((short)param_1[3] == 0) {
    local_24 = 0x38e12475;
  }
  else if ((short)param_1[0x44] == 0) {
    local_24 = 0x39412475;
  }
  else {
    local_24 = (**(code **)(*param_1 + 0x70))(param_1,local_18);
    if (((local_24 & 0xfff) == 0) &&
       (local_24 = FUN_180009aa0((longlong)param_1), (local_24 & 0xfff) == 0)) {
      local_1c = (int)param_1[2];
      if (local_1c == 0) {
        local_20 = FUN_180010190();
        if ((int)local_20 < 0) {
          local_24 = 0x3aa12461;
        }
        else {
          iVar1 = FUN_18000f310(local_28);
          if (iVar1 == 0) {
            local_24 = FUN_18002e300((ulonglong)local_20,local_28[0],(short *)(param_1 + 0x44),
                                     (LPCWSTR)(param_1 + 3),(short *)((longlong)param_1 + 0x42c));
          }
          else {
            local_24 = 0x3b012460;
          }
        }
      }
      else if (local_1c == 1) {
        local_24 = 0x3b912406;
      }
    }
  }
  local_10 = (longlong *)FUN_180007470();
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x30))
              (local_10,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp","CBoot::GetBootItemInstallStatus",
               0x3be,local_24);
  }
  return local_24;
}




void FUN_1800096c0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_288 [32];
  char *local_268;
  char *local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined2 local_244;
  longlong *local_240;
  undefined4 local_238;
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_288;
  local_238 = 0;
  local_248 = 0;
  local_244 = 0;
  puVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_248 = FUN_180007d00(param_2);
  local_240 = (longlong *)FUN_180007470();
  if (local_240 != (longlong *)0x0) {
    local_250 = local_248;
    local_258 = 0x400;
    local_260 = "CBoot::Format";
    local_268 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
    (**(code **)(*local_240 + 0x30))(local_240,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_288);
  return;
}




void FUN_1800097c0(longlong param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 auStack_4b8 [32];
  char *local_498;
  char *local_490;
  undefined4 local_488;
  undefined4 local_480;
  uint local_478;
  undefined4 local_474;
  int local_470;
  int *local_468;
  undefined4 local_460;
  longlong *local_458;
  ulonglong local_450;
  int local_448;
  undefined1 local_444;
  ushort local_442;
  short local_440 [260];
  int local_238;
  undefined1 local_234 [524];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_4b8;
  local_478 = 0;
  piVar5 = &local_238;
  for (lVar4 = 0x204; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)piVar5 = 0;
    piVar5 = (int *)((longlong)piVar5 + 1);
  }
  local_468 = (int *)0x0;
  piVar5 = &local_448;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)piVar5 = 0;
    piVar5 = (int *)((longlong)piVar5 + 1);
  }
  local_474 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_474 = 0x41912405;
  }
  else {
    local_470 = *(int *)(param_1 + 0x10);
    if (local_470 == 0) {
      local_474 = 0x42012406;
    }
    else if (local_470 == 1) {
      if (param_2 == 0) {
        FUN_18000abf0(param_1 + 0x1570);
        *param_3 = 0;
        local_468 = (int *)FUN_18003a530(&local_238);
        if (local_468 != (int *)0x0) {
          do {
            local_448 = local_238;
            local_444 = 0x10;
            local_460 = FUN_18000f020();
            local_442 = local_442 & 0xfffe | (ushort)local_460 & 1;
            FUN_18003bb00(local_440,0x100,(longlong)local_234);
            FUN_18000ac70(param_1 + 0x1570,&local_448);
            *param_3 = *param_3 + 1;
            iVar1 = FUN_18003a740(local_468,&local_238);
          } while (iVar1 != 0);
          FUN_18003a920(local_468);
        }
      }
      else {
        local_450 = (ulonglong)*param_3;
        uVar2 = FUN_18000aba0(param_1 + 0x1570);
        if (uVar2 < local_450) {
          local_474 = 0x43f1240e;
        }
        else {
          for (local_478 = 0; local_478 < *param_3; local_478 = local_478 + 1) {
            puVar3 = (undefined1 *)FUN_18000ab70(param_1 + 0x1570,(ulonglong)local_478);
            puVar6 = (undefined1 *)(param_2 + (ulonglong)local_478 * 0x208);
            for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar6 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar6 = puVar6 + 1;
            }
          }
        }
      }
    }
  }
  local_458 = (longlong *)FUN_180007470();
  if (local_458 != (longlong *)0x0) {
    local_480 = local_474;
    local_488 = 0x44c;
    local_490 = "CBoot::GetDriverInfo";
    local_498 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
    (**(code **)(*local_458 + 0x30))(local_458,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_4b8);
  return;
}




uint FUN_180009aa0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x428) != 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 == 1) {
      local_20 = FUN_18003bc80(L"boot",L"BootNameLinux",L"EaseUS DC Linux",(LPWSTR)(param_1 + 0x42c)
                               ,0x104,(LPCWSTR)0x0);
    }
    else if ((uVar1 < 2) || (3 < uVar1)) {
      local_28 = 0x47412982;
    }
    else {
      local_20 = FUN_18003bc80(L"boot",L"BootNameWinpe",L"EaseUS DC Windows PE",
                               (LPWSTR)(param_1 + 0x42c),0x104,(LPCWSTR)0x0);
    }
    if (((local_28 & 0xfff) == 0) && (local_20 == 0)) {
      local_28 = 0x47e12506;
    }
  }
  plVar2 = (longlong *)FUN_180007470();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))
              (plVar2,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp","CBoot::ReadProductName",0x483,
               local_28);
  }
  return local_28;
}




uint FUN_180009c20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 local_14 [5];
  
  local_14[0] = 0;
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,local_14);
  return uVar1;
}




undefined4 FUN_180009c80(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_28;
  int local_20;
  int local_1c;
  undefined4 local_18 [2];
  longlong *local_10;
  
  local_20 = 0;
  local_18[0] = 0;
  local_28 = 0;
  local_1c = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_28 = 0x4b312405;
  }
  else {
    iVar1 = FUN_18000e5e0((LPCWSTR)(param_1 + 0x18));
    if (iVar1 == 0) {
      local_28 = 0x4ba12981;
    }
    else {
      local_1c = FUN_180034dd0((LPCWSTR)(param_1 + 0x18),local_18,&local_20);
      if (local_1c == 1) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        *param_2 = 1;
        *param_3 = 0x20;
      }
      else if (local_1c == 2) {
        if (local_20 == 0) {
          *(undefined4 *)(param_1 + 0x14) = 2;
          *param_2 = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 3;
          *param_2 = 3;
        }
        *param_3 = 0x20;
      }
      else if (local_1c == 3) {
        if (local_20 == 0) {
          *(undefined4 *)(param_1 + 0x14) = 2;
          *param_2 = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 3;
          *param_2 = 3;
        }
        *param_3 = 0x40;
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *param_2 = 0;
        *param_3 = 0;
        local_28 = 0x4e712982;
      }
    }
  }
  local_10 = (longlong *)FUN_180007470();
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x30))
              (local_10,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp","CBoot::GetPreOSTypeEx",0x4ec,
               local_28);
  }
  return local_28;
}




void FUN_180009e90(undefined8 param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  WCHAR *pWVar4;
  undefined1 auStack_6b8 [32];
  char *local_698;
  char *local_690;
  undefined4 local_688;
  uint local_680;
  uint local_678;
  int local_674;
  int local_670;
  UINT local_66c;
  uint local_668;
  int local_664;
  longlong *local_660;
  longlong *local_658;
  longlong *local_650;
  longlong *local_648;
  longlong *local_640;
  undefined1 *local_638;
  WCHAR local_628 [264];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_6b8;
  puVar3 = local_418;
  for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_678 = 0;
  local_66c = 0;
  pWVar4 = local_628;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_670 = 0;
  local_664 = 0;
  local_638 = local_418;
  wsprintfW(local_628,L"\\\\.\\PhysicalDrive%d");
  iVar1 = FUN_18000e710(local_628,local_638,0x400);
  if (iVar1 == 0) {
    local_678 = 0x50a12500;
    local_660 = (longlong *)FUN_180007470();
    if (local_660 != (longlong *)0x0) {
      local_680 = local_678;
      local_688 = 0x50b;
      local_690 = "CBoot::GetUSBActivePartFsType";
      local_698 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
      (**(code **)(*local_660 + 0x30))(local_660,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
    }
  }
  else if (*(int *)(local_638 + 0x1c) == 7) {
    local_678 = FUN_180011430(*param_2,&local_670);
    if ((local_678 & 0xfff) == 0) {
      if (local_670 == 0) {
        wsprintfW(local_628,L"\\\\.\\PhysicalDrive%d\\");
        local_66c = GetDriveTypeW(local_628);
        local_668 = (uint)(local_66c == 2);
        *param_3 = local_668;
        local_678 = FUN_180024c70(*param_2,&local_664);
        if ((local_678 & 0xfff) == 0) {
          local_674 = local_664;
          if (local_664 == 1) {
            *param_4 = 2;
          }
          else if (local_664 == 2) {
            *param_4 = 3;
          }
          else if (local_664 == 4) {
            *param_4 = 4;
          }
          else {
            *param_4 = 0xff;
          }
        }
        else {
          local_640 = (longlong *)FUN_180007470();
          if (local_640 != (longlong *)0x0) {
            local_680 = local_678;
            local_688 = 0x52c;
            local_690 = "CBoot::GetUSBActivePartFsType";
            local_698 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
            (**(code **)(*local_640 + 0x30))(local_640,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
          }
        }
      }
      else {
        local_678 = 0x51e127c0;
        local_648 = (longlong *)FUN_180007470();
        if (local_648 != (longlong *)0x0) {
          local_680 = local_678;
          local_688 = 0x51f;
          local_690 = "CBoot::GetUSBActivePartFsType";
          local_698 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
          (**(code **)(*local_648 + 0x30))(local_648,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
        }
      }
    }
    else {
      local_650 = (longlong *)FUN_180007470();
      if (local_650 != (longlong *)0x0) {
        local_680 = local_678;
        local_688 = 0x519;
        local_690 = "CBoot::GetUSBActivePartFsType";
        local_698 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
        (**(code **)(*local_650 + 0x30))(local_650,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
      }
    }
  }
  else {
    local_678 = 0x51012406;
    local_658 = (longlong *)FUN_180007470();
    if (local_658 != (longlong *)0x0) {
      local_680 = local_678;
      local_688 = 0x511;
      local_690 = "CBoot::GetUSBActivePartFsType";
      local_698 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\boot.cpp";
      (**(code **)(*local_658 + 0x30))(local_658,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_6b8);
  return;
}




undefined4 FUN_18000a2d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    local_18 = 0x54e12405;
  }
  else if ((short)param_1[3] == 0) {
    local_18 = 0x55412475;
  }
  else if ((short)param_1[0x44] == 0) {
    local_18 = 0x55a12475;
  }
  else {
    local_18 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
  }
  return local_18;
}




void FUN_18000a370(undefined8 param_1,wchar_t *param_2)

{
  WCHAR WVar1;
  WCHAR WVar2;
  char cVar3;
  uint uVar4;
  BOOL BVar5;
  undefined8 uVar6;
  LPCWSTR pWVar7;
  WCHAR *pWVar8;
  longlong lVar9;
  _WIN32_FIND_DATAW *p_Var10;
  undefined1 auStack_3d8 [32];
  HANDLE local_3b8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_3b0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_3a8;
  longlong local_3a0;
  longlong local_398;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_390;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_388;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_380 [40];
  undefined8 local_358;
  undefined1 local_350 [32];
  undefined1 local_330 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_310 [32];
  undefined1 local_2f0 [32];
  undefined1 local_2d0 [32];
  undefined1 local_2b0 [32];
  undefined1 local_290 [40];
  _WIN32_FIND_DATAW local_268;
  ulonglong local_18;
  
  local_358 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_3d8;
  if (param_2 != (wchar_t *)0x0) {
    FUN_18000ab20((undefined8 *)local_380);
    basic_string<>(local_310,param_2);
    FUN_18000aaf0(local_380,local_310);
    FUN_180001db0(local_310);
    while (cVar3 = FUN_18000aad0(local_380), cVar3 == '\0') {
      uVar6 = FUN_18000aab0(local_380);
      basic_string<>((longlong)local_350,uVar6);
      FUN_18000aa90(local_380);
      p_Var10 = &local_268;
      for (lVar9 = 0x250; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&p_Var10->dwFileAttributes = 0;
        p_Var10 = (_WIN32_FIND_DATAW *)((longlong)&p_Var10->dwFileAttributes + 1);
      }
      local_3b8 = (HANDLE)0xffffffffffffffff;
      FUN_18000c290((longlong)local_330,local_350,L"\\*");
      pWVar7 = (LPCWSTR)FUN_180001d20(local_330);
      local_3b8 = FindFirstFileW(pWVar7,&local_268);
      if (local_3b8 == (HANDLE)0xffffffffffffffff) {
        FUN_180001db0(local_330);
        FUN_180001db0(local_350);
      }
      else {
        do {
          pWVar8 = local_268.cFileName;
          lVar9 = (longlong)&DAT_180040224 - (longlong)pWVar8;
          do {
            WVar2 = *pWVar8;
            WVar1 = *(WCHAR *)((longlong)pWVar8 + lVar9);
            if (WVar2 != WVar1) {
              uVar4 = -(uint)((ushort)WVar2 < (ushort)WVar1) | 1;
              goto LAB_18000a4dd;
            }
            pWVar8 = pWVar8 + 1;
          } while (WVar2 != L'\0');
          uVar4 = 0;
LAB_18000a4dd:
          if (uVar4 != 0) {
            pWVar8 = local_268.cFileName;
            lVar9 = (longlong)&DAT_180040b54 - (longlong)pWVar8;
            do {
              WVar2 = *pWVar8;
              WVar1 = *(WCHAR *)((longlong)pWVar8 + lVar9);
              if (WVar2 != WVar1) {
                uVar4 = -(uint)((ushort)WVar2 < (ushort)WVar1) | 1;
                goto LAB_18000a512;
              }
              pWVar8 = pWVar8 + 1;
            } while (WVar2 != L'\0');
            uVar4 = 0;
LAB_18000a512:
            if (uVar4 != 0) {
              if ((local_268.dwFileAttributes & 0x10) != 0) {
                local_3b0 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                             *)FUN_18000c290((longlong)local_2b0,local_350,L"\\");
                local_3a8 = local_3b0;
                local_3a0 = FUN_18000c230((longlong)local_2d0,local_3b0,local_268.cFileName);
                local_398 = local_3a0;
                FUN_18000aaf0(local_380,local_3a0);
                FUN_180001db0(local_2d0);
                FUN_180001db0(local_2b0);
              }
              local_390 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                           *)FUN_18000c290((longlong)local_290,local_350,L"\\");
              local_388 = local_390;
              FUN_18000c230((longlong)local_2f0,local_390,local_268.cFileName);
              FUN_180001db0(local_290);
              pWVar7 = (LPCWSTR)FUN_180001d20(local_2f0);
              SetFileAttributesW(pWVar7,0x80);
              FUN_180001db0(local_2f0);
            }
          }
          BVar5 = FindNextFileW(local_3b8,&local_268);
        } while (BVar5 != 0);
        FindClose(local_3b8);
        FUN_180001db0(local_330);
        FUN_180001db0(local_350);
      }
    }
    FUN_18000a6a0(local_380);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_3d8);
  return;
}




void FUN_18000a6a0(undefined8 param_1)

{
  FUN_18000ab40(param_1);
  return;
}




void FUN_18000a6c0(undefined8 param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_248;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  FUN_18000c370(local_228,L"%c:\\Boot",(ulonglong)param_2,param_4);
  SetFileAttributesW(local_228,0x80);
  FUN_18000a370(param_1,local_228);
  FUN_18000c370(local_228,L"%c:\\Sources",(ulonglong)param_2,param_4);
  SetFileAttributesW(local_228,0x80);
  FUN_18000a370(param_1,local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




bool TBCanUnloadNow(void)

{
                    /* 0xa790  10  TBCanUnloadNow */
  return DAT_1800bde78 == 0;
}




int TBCreateObject(uint param_1,int param_2,longlong *param_3)

{
  int local_18;
  
                    /* 0xa7c0  11  TBCreateObject */
  if (param_3 == (longlong *)0x0) {
    local_18 = 0x5a112409;
  }
  else {
    local_18 = 0;
    if (param_1 < 0x10001) {
      if (param_2 == 0x12400) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4) < DAT_1800bde8c) &&
           (_Init_thread_header(&DAT_1800bde8c), DAT_1800bde8c == -1)) {
          FUN_18000aa50((undefined8 *)&DAT_1800bde80,0x12400);
          atexit(FUN_18003eab0);
          _Init_thread_footer(&DAT_1800bde8c);
        }
        *param_3 = (longlong)&DAT_1800bde80;
      }
      else {
        local_18 = 0x5a312406;
      }
      if ((local_18 == 0) && (*param_3 == 0)) {
        local_18 = 0x5a312408;
      }
      if (local_18 == 0) {
        LOCK();
        DAT_1800bde78 = DAT_1800bde78 + 1;
        UNLOCK();
      }
    }
    else {
      local_18 = 0x5a112402;
    }
  }
  return local_18;
}




void FUN_18000a8d0(undefined8 *param_1)

{
  FUN_18000a8f0(param_1);
  return;
}




void FUN_18000a8f0(undefined8 *param_1)

{
  *param_1 = CTbBaseCreator<class_IBoot>::vftable;
  FUN_1800077a0(param_1);
  return;
}




undefined8 FUN_18000a920(void)

{
  return 0;
}




undefined4 FUN_18000a930(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




CResetPropExchange * FUN_18000a940(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_38;
  
  pCVar1 = (CResetPropExchange *)operator_new(0x1588);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_38 = (CResetPropExchange *)0x0;
  }
  else {
    local_38 = FUN_180007e40(pCVar1);
  }
  if (local_38 != (CResetPropExchange *)0x0) {
    LOCK();
    DAT_1800bde78 = DAT_1800bde78 + 1;
    UNLOCK();
  }
  return local_38;
}




undefined8 FUN_18000a9e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x431240a;
  }
  else {
    uVar1 = 0x4412406;
  }
  return uVar1;
}




undefined8 FUN_18000aa10(void)

{
  LOCK();
  DAT_1800bde78 = DAT_1800bde78 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_18000aa30(void)

{
  LOCK();
  DAT_1800bde78 = DAT_1800bde78 + -1;
  UNLOCK();
  return 0;
}




undefined8 * FUN_18000aa50(undefined8 *param_1,undefined4 param_2)

{
  FUN_18000af20(param_1);
  *param_1 = CTbCreator<class_IBoot,class_CBoot>::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  return param_1;
}




void FUN_18000aa90(undefined8 param_1)

{
  FUN_18000b170(param_1);
  return;
}




void FUN_18000aab0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::back
            (param_1);
  return;
}




void FUN_18000aad0(undefined8 param_1)

{
  FUN_18000b2e0(param_1);
  return;
}




void FUN_18000aaf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800012e0(param_2);
  FUN_18000b320(param_1,uVar1);
  return;
}




undefined8 * FUN_18000ab20(undefined8 *param_1)

{
  FUN_18000b520(param_1);
  return param_1;
}




void FUN_18000ab40(undefined8 param_1)

{
  FUN_18000b020(param_1);
  FUN_18000aff0(param_1);
  return;
}




longlong FUN_18000ab70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18000b560(param_1);
  return param_2 * 0x208 + *plVar1;
}




longlong FUN_18000aba0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b540(param_1);
  plVar2 = (longlong *)FUN_18000b560(param_1);
  return (*plVar1 - *plVar2) / 0x208;
}




void FUN_18000abf0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1800025b0(param_1);
  FUN_18000b540(param_1);
  FUN_18000b560(param_1);
  FUN_18000b690(param_1);
  puVar1 = (undefined8 *)FUN_18000b560(param_1);
  puVar2 = (undefined8 *)FUN_18000b540(param_1);
  *puVar2 = *puVar1;
  return;
}




void FUN_18000ac70(undefined8 param_1,undefined8 param_2)

{
  FUN_18000aca0(param_1,param_2);
  return;
}




void FUN_18000aca0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000b6d0(param_1);
  if (bVar1) {
    uVar2 = FUN_1800012e0(param_2);
    FUN_18000ad10(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800012e0(param_2);
    plVar3 = (longlong *)FUN_18000b540(param_1);
    FUN_18000c400(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_18000ad10(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_1800012e0(param_2);
  puVar2 = (undefined8 *)FUN_18000b540(param_1);
  p_Var3 = (_Container_proxy *)FUN_1800012e0(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_18000b540(param_1);
  FUN_18000b540(param_1);
  FUN_18000b5b0();
  FUN_18000b540(param_1);
  plVar5 = (longlong *)FUN_18000b540(param_1);
  *plVar5 = *plVar5 + 0x208;
  return;
}




void FUN_18000add0(undefined8 param_1)

{
  FUN_18000b5c0(param_1);
  return;
}




undefined8 * FUN_18000ae00(undefined8 *param_1)

{
  FUN_18000b580(param_1);
  return param_1;
}




void FUN_18000ae30(undefined8 *param_1)

{
  *param_1 = CInterfaceImpl<class_IBoot>::vftable;
  FUN_180007730(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl CResetPropExchange::CResetPropExchange(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CResetPropExchange * __thiscall CResetPropExchange::CResetPropExchange(CResetPropExchange *this)

{
  FUN_18000af90((undefined8 *)this);
  *(undefined ***)this = CInterfaceImpl<class_IBoot>::vftable;
  *(undefined4 *)(this + 8) = 1;
  return this;
}




undefined8 * FUN_18000aea0(undefined8 *param_1,uint param_2)

{
  FUN_18000a8f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000aee0(undefined8 *param_1,uint param_2)

{
  FUN_18000a8d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000af20(undefined8 *param_1)

{
  FUN_18000afc0(param_1);
  *param_1 = CTbBaseCreator<class_IBoot>::vftable;
  return param_1;
}




undefined8 * FUN_18000af50(undefined8 *param_1,uint param_2)

{
  FUN_18000ae30(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_18000af90(undefined8 *param_1)

{
  FUN_1800070f0(param_1);
  *param_1 = IBoot::vftable;
  return param_1;
}




undefined8 * FUN_18000afc0(undefined8 *param_1)

{
  FUN_1800070f0(param_1);
  *param_1 = ITbCreator::vftable;
  return param_1;
}




void FUN_18000aff0(undefined8 param_1)

{
  Free_proxy(param_1);
  return;
}




void FUN_18000b020(undefined8 param_1)

{
  bool bVar1;
  IObject *pIVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  IObject local_28 [8];
  longlong local_20;
  longlong local_18;
  longlong *local_10;
  
  pIVar2 = (IObject *)FUN_180001f40(param_1);
  IObject::operator=(local_28,pIVar2);
  while (bVar1 = FUN_18000b2e0(param_1), !bVar1) {
    FUN_18000b170(param_1);
  }
  plVar3 = (longlong *)FUN_18000b860(param_1);
  local_20 = *plVar3;
  while (local_20 != 0) {
    local_20 = local_20 + -1;
    plVar3 = (longlong *)FUN_18000b540(param_1);
    if (*(longlong *)(*plVar3 + local_20 * 8) != 0) {
      plVar3 = (longlong *)FUN_18000b540(param_1);
      local_18 = *plVar3;
      uVar4 = FUN_180001f40(param_1);
      FUN_18000be00(uVar4,*(void **)(local_18 + local_20 * 8),1);
      plVar3 = (longlong *)FUN_18000b540(param_1);
      FUN_1800012e0(*plVar3 + local_20 * 8);
      FUN_180002c00();
    }
  }
  plVar3 = (longlong *)FUN_18000b540(param_1);
  if (*plVar3 != 0) {
    local_10 = (longlong *)FUN_18000b860(param_1);
    puVar5 = (undefined8 *)FUN_18000b540(param_1);
    FUN_18000b7f0(local_28,(void *)*puVar5,*local_10);
  }
  puVar5 = (undefined8 *)FUN_18000b860(param_1);
  *puVar5 = 0;
  puVar5 = (undefined8 *)FUN_18000b540(param_1);
  *puVar5 = 0;
  return;
}




void FUN_18000b170(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  plVar1 = (longlong *)FUN_18000b840(param_1);
  plVar2 = (longlong *)FUN_18000b820(param_1);
  lVar3 = FUN_18000b920(param_1,*plVar1 + -1 + *plVar2);
  plVar1 = (longlong *)FUN_18000b540(param_1);
  pvVar4 = (void *)FUN_1800012e0(*(undefined8 *)(*plVar1 + lVar3 * 8));
  uVar5 = FUN_180001f40(param_1);
  destroy<>(uVar5,pvVar4);
  plVar1 = (longlong *)FUN_18000b820(param_1);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    puVar6 = (undefined8 *)FUN_18000b840(param_1);
    *puVar6 = 0;
  }
  return;
}




/* Library Function - Single Match
    public: wchar_t & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::back(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

wchar_t * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::back
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this)

{
  _Container_proxy *this_00;
  _Iterator_base12 *p_Var1;
  wchar_t *pwVar2;
  undefined1 local_38 [24];
  _Container_proxy local_20 [32];
  
  this_00 = FUN_18000bd50(this,local_20);
  p_Var1 = (_Iterator_base12 *)
           _String_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>::operator-
                     ((_String_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>
                       *)this_00,(__int64)local_38);
  pwVar2 = (wchar_t *)FUN_18000b7d0(p_Var1);
  FUN_18000b720();
  FUN_18000b720();
  return pwVar2;
}




bool FUN_18000b2e0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18000b820(param_1);
  return *plVar1 == 0;
}




void FUN_18000b320(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_1800025b0(param_1);
  FUN_18000b840(param_1);
  FUN_18000b820(param_1);
  puVar1 = (ulonglong *)FUN_18000b860(param_1);
  plVar2 = (longlong *)FUN_18000b820(param_1);
  if (*puVar1 <= *plVar2 + 1U) {
    FUN_18000b950(param_1,1);
  }
  puVar1 = (ulonglong *)FUN_18000b840(param_1);
  plVar2 = (longlong *)FUN_18000b860(param_1);
  *puVar1 = *puVar1 & *plVar2 - 1U;
  plVar2 = (longlong *)FUN_18000b840(param_1);
  plVar3 = (longlong *)FUN_18000b820(param_1);
  lVar4 = FUN_18000b920(param_1,*plVar2 + *plVar3);
  plVar2 = (longlong *)FUN_18000b540(param_1);
  if (*(longlong *)(*plVar2 + lVar4 * 8) == 0) {
    this = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
    p_Var5 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
    plVar2 = (longlong *)FUN_18000b540(param_1);
    *(_Container_proxy **)(*plVar2 + lVar4 * 8) = p_Var5;
  }
  uVar6 = FUN_1800012e0(param_2);
  plVar2 = (longlong *)FUN_18000b540(param_1);
  uVar7 = FUN_1800012e0(*(undefined8 *)(*plVar2 + lVar4 * 8));
  uVar8 = FUN_180001f40(param_1);
  FUN_18000c690(uVar8,uVar7,uVar6);
  plVar2 = (longlong *)FUN_18000b820(param_1);
  *plVar2 = *plVar2 + 1;
  return;
}




undefined8 * FUN_18000b520(undefined8 *param_1)

{
  FUN_18000b8f0(param_1);
  return param_1;
}




longlong FUN_18000b540(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180001f40(param_1);
  return lVar1 + 8;
}




void FUN_18000b560(undefined8 param_1)

{
  FUN_180001f40(param_1);
  return;
}




undefined8 * FUN_18000b580(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




void FUN_18000b5b0(void)

{
  return;
}




void FUN_18000b5c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1800025b0(param_1);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  if (*plVar1 != 0) {
    FUN_18000b540(param_1);
    FUN_18000b560(param_1);
    FUN_18000b690(param_1);
    lVar2 = FUN_18000be30(param_1);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    uVar4 = FUN_180001f40(param_1);
    FUN_18000be80(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000b540(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000b860(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_18000b690(undefined8 param_1)

{
  FUN_180001f40(param_1);
  FUN_18000c710();
  return;
}




bool FUN_18000b6d0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b860(param_1);
  plVar2 = (longlong *)FUN_18000b540(param_1);
  return *plVar1 != *plVar2;
}




void FUN_18000b720(void)

{
  FUN_18000b740();
  return;
}




void FUN_18000b740(void)

{
  FUN_180001210();
  return;
}




/* Library Function - Single Match
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __cdecl std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   >::operator-(__int64)const __ptr64
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017 */

__int64 __thiscall
std::_String_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>::operator-
          (_String_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_> *this,
          __int64 param_1)

{
  _Iterator_base12 *p_Var1;
  longlong in_R8;
  _Iterator_base12 local_28 [40];
  
  FUN_18000beb0(local_28,(_Iterator_base12 *)this);
  p_Var1 = (_Iterator_base12 *)FID_conflict_operator__((longlong)local_28,in_R8);
  FUN_18000beb0((_Iterator_base12 *)param_1,p_Var1);
  FUN_18000b720();
  return param_1;
}




void FUN_18000b7d0(_Iterator_base12 *param_1)

{
  FUN_18000bf20(param_1);
  return;
}




void FUN_18000b7f0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 3);
  return;
}




longlong FUN_18000b820(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180001f40(param_1);
  return lVar1 + 0x20;
}




longlong FUN_18000b840(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180001f40(param_1);
  return lVar1 + 0x18;
}




longlong FUN_18000b860(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180001f40(param_1);
  return lVar1 + 0x10;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_Free_proxy(void) __ptr64
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_Free_proxy(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void Free_proxy(undefined8 param_1)

{
  IObject *pIVar1;
  undefined8 *puVar2;
  IObject local_18 [24];
  
  pIVar1 = (IObject *)FUN_180001f40(param_1);
  IObject::operator=(local_18,pIVar1);
  FUN_1800025b0(param_1);
  FUN_18000b560(param_1);
  FUN_180002c00();
  puVar2 = (undefined8 *)FUN_18000b560(param_1);
  std::_Deallocate_plain<class_std::allocator<struct_std::_Container_proxy>,0>
            ((allocator<struct_std::_Container_proxy> *)local_18,(_Container_proxy *)*puVar2);
  puVar2 = (undefined8 *)FUN_18000b560(param_1);
  *puVar2 = 0;
  return;
}




undefined8 * FUN_18000b8f0(undefined8 *param_1)

{
  FUN_18000c790(param_1);
  Alloc_proxy(param_1);
  return param_1;
}




void FUN_18000b920(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180001f40(param_1);
  FUN_18000bff0(lVar1,param_2);
  return;
}




void FUN_18000b950(undefined8 param_1,ulonglong param_2)

{
  IObject *pIVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  IObject local_88 [8];
  IObject *local_80;
  ulonglong local_78;
  ulonglong local_70;
  IObject *local_68;
  ulonglong local_60;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  longlong *local_18;
  
  pIVar1 = (IObject *)FUN_180001f40(param_1);
  IObject::operator=(local_88,pIVar1);
  plVar2 = (longlong *)FUN_18000b860(param_1);
  if (*plVar2 == 0) {
    local_60 = 1;
  }
  else {
    puVar3 = (ulonglong *)FUN_18000b860(param_1);
    local_60 = *puVar3;
  }
  local_70 = local_60;
  while( true ) {
    plVar2 = (longlong *)FUN_18000b860(param_1);
    if ((param_2 <= local_70 - *plVar2) && (7 < local_70)) break;
    lVar4 = FUN_18000c120(param_1);
    if (lVar4 - local_70 < local_70) {
      FUN_18000c100();
    }
    local_70 = local_70 << 1;
  }
  plVar2 = (longlong *)FUN_18000b860(param_1);
  uVar6 = local_70 - *plVar2;
  puVar3 = (ulonglong *)FUN_18000b840(param_1);
  local_78 = *puVar3;
  plVar2 = (longlong *)FUN_18000b860(param_1);
  local_68 = (IObject *)allocate(local_88,*plVar2 + uVar6);
  local_80 = local_68 + local_78 * 8;
  local_50 = (longlong *)FUN_18000b540(param_1);
  plVar2 = (longlong *)FUN_18000b860(param_1);
  local_48 = *local_50 + *plVar2 * 8;
  plVar2 = (longlong *)FUN_18000b540(param_1);
  local_80 = FUN_18000c7c0(*plVar2 + local_78 * 8,local_48,local_80,local_88);
  if (uVar6 < local_78) {
    plVar2 = (longlong *)FUN_18000b540(param_1);
    local_38 = *plVar2 + uVar6 * 8;
    puVar5 = (undefined8 *)FUN_18000b540(param_1);
    FUN_18000c7c0(*puVar5,local_38,local_80,local_88);
    plVar2 = (longlong *)FUN_18000b540(param_1);
    local_30 = *plVar2 + local_78 * 8;
    plVar2 = (longlong *)FUN_18000b540(param_1);
    local_80 = FUN_18000c7c0(*plVar2 + uVar6 * 8,local_30,local_68,local_88);
    FUN_18000c8a0(local_80,uVar6);
  }
  else {
    plVar2 = (longlong *)FUN_18000b540(param_1);
    local_40 = *plVar2 + local_78 * 8;
    puVar5 = (undefined8 *)FUN_18000b540(param_1);
    local_80 = FUN_18000c7c0(*puVar5,local_40,local_80,local_88);
    FUN_18000c8a0(local_80,uVar6 - local_78);
    FUN_18000c8a0(local_68,local_78);
  }
  local_28 = (longlong *)FUN_18000b540(param_1);
  plVar2 = (longlong *)FUN_18000b860(param_1);
  local_20 = *local_28 + *plVar2 * 8;
  FUN_18000b540(param_1);
  FUN_18000c710();
  plVar2 = (longlong *)FUN_18000b540(param_1);
  if (*plVar2 != 0) {
    local_18 = (longlong *)FUN_18000b860(param_1);
    puVar5 = (undefined8 *)FUN_18000b540(param_1);
    FUN_18000b7f0(local_88,(void *)*puVar5,*local_18);
  }
  puVar5 = (undefined8 *)FUN_18000b540(param_1);
  *puVar5 = local_68;
  plVar2 = (longlong *)FUN_18000b860(param_1);
  *plVar2 = *plVar2 + uVar6;
  return;
}




_Container_proxy * FUN_18000bd50(undefined8 param_1,_Container_proxy *param_2)

{
  undefined8 uVar1;
  _Container_base12 *p_Var2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar1 = FUN_180001f40(param_1);
  p_Var2 = (_Container_base12 *)FUN_1800012e0(uVar1);
  plVar3 = (longlong *)FUN_18000b840(param_1);
  plVar4 = (longlong *)FUN_18000b820(param_1);
  FUN_18000bfb0(param_2,*plVar3 + *plVar4,p_Var2);
  return param_2;
}




/* Library Function - Single Match
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall
std::allocator<struct_std::_Container_proxy>::allocate
          (allocator<struct_std::_Container_proxy> *this,__uint64 param_1)

{
  __uint64 _Var1;
  _Container_proxy *p_Var2;
  
  _Var1 = _Get_size_of_n<16>(param_1);
  p_Var2 = (_Container_proxy *)_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return p_Var2;
}




void FUN_18000be00(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x20);
  return;
}




longlong FUN_18000be30(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b860(param_1);
  plVar2 = (longlong *)FUN_18000b560(param_1);
  return (*plVar1 - *plVar2) / 0x208;
}




void FUN_18000be80(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x208);
  return;
}




_Iterator_base12 * FUN_18000beb0(_Iterator_base12 *param_1,_Iterator_base12 *param_2)

{
  _String_const_iterator<>(param_1,param_2);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >(class std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > > const & __ptr64) __ptr64
    public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64) __ptr64
    public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >(class std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > > const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_Iterator_base12 * _String_const_iterator<>(_Iterator_base12 *param_1,_Iterator_base12 *param_2)

{
  std::_Iterator_base12::_Iterator_base12(param_1,param_2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}




undefined8 FUN_18000bf20(_Iterator_base12 *param_1)

{
  _Container_base12 *p_Var1;
  ulonglong uVar2;
  
  p_Var1 = std::_Iterator_base12::_Getcont(param_1);
  uVar2 = FUN_18000bff0((longlong)p_Var1,*(ulonglong *)(param_1 + 0x10));
  return *(undefined8 *)(*(longlong *)(p_Var1 + 8) + uVar2 * 8);
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::_String_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> >::operator-=(__int64) __ptr64
    public: class std::_String_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::_String_iterator<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::operator-=(__int64)
   __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > &
   __ptr64 __cdecl std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator-=(__int64) __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > & __ptr64 __cdecl std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator-=(__int64) __ptr64
     6 names - too many to list
   
   Library: Visual Studio */

void FID_conflict_operator__(longlong param_1,longlong param_2)

{
  FUN_18000c190(param_1,-param_2);
  return;
}




_Container_proxy *
FUN_18000bfb0(_Container_proxy *param_1,undefined8 param_2,_Container_base12 *param_3)

{
  FID_conflict__String_const_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>
            (param_1,param_2,param_3);
  return param_1;
}




ulonglong FUN_18000bff0(longlong param_1,ulonglong param_2)

{
  return param_2 & *(longlong *)(param_1 + 0x10) - 1U;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_18000c940(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_Alloc_proxy(void) __ptr64
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_Alloc_proxy(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void Alloc_proxy(undefined8 param_1)

{
  IObject *pIVar1;
  _Container_proxy *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  IObject local_38 [8];
  undefined8 local_30;
  _Container_proxy *local_28;
  undefined8 local_20;
  _Container_proxy local_18 [24];
  
  pIVar1 = (IObject *)FUN_180001f40(param_1);
  IObject::operator=(local_38,pIVar1);
  p_Var2 = std::allocator<struct_std::_Container_proxy>::allocate
                     ((allocator<struct_std::_Container_proxy> *)local_38,1);
  local_30 = FUN_1800012e0(p_Var2);
  puVar3 = (undefined8 *)FUN_18000b560(param_1);
  *puVar3 = local_30;
  local_28 = (_Container_proxy *)std::_Container_proxy::_Container_proxy(local_18);
  puVar3 = (undefined8 *)FUN_18000b560(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
            ((allocator<struct_std::_Container_proxy> *)local_38,(_Container_proxy *)*puVar3,
             local_28);
  uVar4 = FUN_180001f40(param_1);
  local_20 = FUN_1800012e0(uVar4);
  puVar3 = (undefined8 *)FUN_18000b560(param_1);
  *(undefined8 *)*puVar3 = local_20;
  return;
}




void FUN_18000c100(void)

{
  std::_Xlength_error("deque<T> too long");
  return;
}




void FUN_18000c120(undefined8 param_1)

{
  FUN_180001f40(param_1);
  FUN_18000c1c0();
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >(char const * __ptr64,struct std::_Container_base12 const * __ptr64)
   __ptr64
    public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >(unsigned short const * __ptr64,struct
   std::_Container_base12 const * __ptr64) __ptr64
    public: __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >(wchar_t const * __ptr64,struct std::_Container_base12 const *
   __ptr64) __ptr64
    public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   > > >::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > * __ptr64,struct
   std::_Container_base12 const * __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release, Visual Studio 2015 Debug, Visual
   Studio 2015 Release */

_Container_proxy *
FID_conflict__String_const_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>
          (_Container_proxy *param_1,undefined8 param_2,_Container_base12 *param_3)

{
  std::_Container_proxy::_Container_proxy(param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_18000c200((_Iterator_base12 *)param_1,param_3);
  return param_1;
}




longlong FUN_18000c190(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_2;
  return param_1;
}




undefined8 FUN_18000c1c0(void)

{
  return 0x7ffffffffffffff;
}




/* Library Function - Single Match
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Container_proxy * __thiscall
std::allocator<struct_std::_Container_proxy>::allocate
          (allocator<struct_std::_Container_proxy> *this,__uint64 param_1)

{
  __uint64 _Var1;
  _Container_proxy *p_Var2;
  
  _Var1 = _Get_size_of_n<16>(param_1);
  p_Var2 = (_Container_proxy *)_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return p_Var2;
}




void FUN_18000c200(_Iterator_base12 *param_1,_Container_base12 *param_2)

{
  std::_Iterator_base12::_Adopt(param_1,param_2);
  return;
}




longlong FUN_18000c230(longlong param_1,
                      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *param_2,wchar_t *param_3)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           append(param_2,param_3);
  uVar2 = FUN_1800012e0(pbVar1);
  basic_string<>(param_1,uVar2);
  return param_1;
}




void FUN_18000c290(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  __uint64 _Var1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  longlong local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18005e010 ^ (ulonglong)auStack_68;
  local_48 = 0;
  basic_string<>((longlong)local_30);
  local_40 = FUN_1800020f0(param_2);
  _Var1 = std::_WChar_traits<wchar_t>::length(param_3);
  uVar2 = FUN_1800012e0(local_40 + _Var1);
  FUN_18000ce20(local_30,uVar2);
  FUN_180001d80((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_2);
  FUN_180001d50((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_3);
  basic_string<>(param_1,local_30);
  local_48 = local_48 | 1;
  FUN_180001db0(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_18000c370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800076f0(param_1,0x104,param_2,&local_res18);
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::construct<struct std::_Container_proxy,struct
   std::_Container_proxy>(class std::allocator<struct std::_Container_proxy> & __ptr64,struct
   std::_Container_proxy * __ptr64 const,struct std::_Container_proxy && __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined1 *)FUN_180001000(0x208,param_2);
  puVar2 = (undefined1 *)FUN_1800012e0(param_3);
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




longlong FUN_18000c400(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *paVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  IObject *pIVar7;
  _Container_proxy *p_Var8;
  _Container_proxy *p_Var9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_18000b560(param_1);
  lVar2 = (param_2 - *plVar1) / 0x208;
  paVar3 = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
  _Var4 = FUN_18000aba0(param_1);
  _Var5 = FUN_18000cda0(param_1);
  if (_Var4 == _Var5) {
    FUN_18000cb40();
  }
  uVar6 = FUN_18000cc70(param_1,_Var4 + 1);
  pIVar7 = (IObject *)allocate(paVar3,uVar6);
  p_Var8 = (_Container_proxy *)FUN_1800012e0(pIVar7 + lVar2 * 0x208);
  p_Var9 = (_Container_proxy *)FUN_1800012e0(param_3);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar3,p_Var8,p_Var9);
  plVar1 = (longlong *)FUN_18000b540(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_18000b540(param_1);
    puVar11 = (undefined8 *)FUN_18000b560(param_1);
    FUN_18000cd00(param_1,*puVar11,*puVar10,pIVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_18000b560(param_1);
    FUN_18000cd60(param_1,*puVar10,param_2,pIVar7);
    puVar10 = (undefined8 *)FUN_18000b540(param_1);
    FUN_18000cd60(param_1,param_2,*puVar10,pIVar7 + lVar2 * 0x208 + 0x208);
  }
  FUN_18000cb60(param_1,(longlong)pIVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  return lVar2 * 0x208 + *plVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >::destroy<class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> >(class std::_Func_impl<bool (__cdecl*)(enum
   Concurrency::agent_status const & __ptr64),class std::allocator<int>,bool,enum
   Concurrency::agent_status const & __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> >::destroy<class std::_Func_impl<class <lambda_1187368b38821e05d57fc25412a6151f>,class
   std::allocator<int>,void,unsigned __int64 const & __ptr64> >(class std::_Func_impl<class
   <lambda_1187368b38821e05d57fc25412a6151f>,class std::allocator<int>,void,unsigned __int64 const &
   __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >::destroy<class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> >(class std::_Func_impl<class
   <lambda_1b86bb99c5f0accb58b69827f0131d11>,class std::allocator<int>,void,class
   Concurrency::message<unsigned __int64> * __ptr64> * __ptr64) __ptr64
    public: void __cdecl std::allocator<class std::_Func_impl<class
   <lambda_663e0bd7633808f1ab348a7d98e0888e>,class std::allocator<int>,void,class
   Concurrency::message<enum Concurrency::agent_status> * __ptr64> >::destroy<class
   std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64>
   >(class std::_Func_impl<class <lambda_663e0bd7633808f1ab348a7d98e0888e>,class
   std::allocator<int>,void,class Concurrency::message<enum Concurrency::agent_status> * __ptr64> *
   __ptr64) __ptr64
     7 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void destroy<>(undefined8 param_1,void *param_2)

{
  FUN_18000ca30(param_2,0);
  return;
}




void FUN_18000c690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180001000(0x20,param_2);
  uVar2 = FUN_1800012e0(param_3);
  basic_string<>(lVar1,uVar2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char> >,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2015 Release */

undefined8 * _Compressed_pair<><>(undefined8 *param_1)

{
  FUN_1800012e0(param_1);
  FUN_18000cb00(param_1);
  return param_1;
}




void FUN_18000c710(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000d010();
  return;
}




/* Library Function - Single Match
    void __cdecl std::_Deallocate_plain<class std::allocator<struct std::_Container_proxy>,0>(class
   std::allocator<struct std::_Container_proxy> & __ptr64,struct std::_Container_proxy * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Deallocate_plain<class_std::allocator<struct_std::_Container_proxy>,0>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2)

{
  _Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::deallocate
            (param_1,param_2,1);
  return;
}




undefined8 * FUN_18000c790(undefined8 *param_1)

{
  FUN_1800012e0(param_1);
  FUN_18000caa0(param_1);
  return param_1;
}




IObject * FUN_18000c7c0(undefined8 param_1,undefined8 param_2,IObject *param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 uVar2;
  IObject *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  IObject *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800012e0(param_1);
  local_10[0] = FUN_1800012e0(param_2);
  pIVar1 = (IObject *)FUN_18000c870((longlong *)&local_20,local_10);
  local_18 = IObject::operator=(local_res18,pIVar1);
  FUN_18000d060(local_28);
  uVar2 = FUN_18000d080(local_20,local_10[0],local_18);
  FUN_18000d0c0(&local_res18,uVar2);
  return local_res18;
}




void FUN_18000c870(longlong *param_1,longlong *param_2)

{
  FUN_18000d030(param_1,param_2);
  return;
}




void FUN_18000c8a0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000d0e0(param_1,param_2);
  return;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x20;
  if (0x7ffffffffffffff < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




longlong FUN_18000c940(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 << 3;
  if (0x1fffffffffffffff < param_1) {
    local_18 = -1;
  }
  return local_18;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::construct<struct std::_Container_proxy,struct
   std::_Container_proxy>(class std::allocator<struct std::_Container_proxy> & __ptr64,struct
   std::_Container_proxy * __ptr64 const,struct std::_Container_proxy && __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined1 *)FUN_180001000(0x10,param_2);
  puVar2 = (undefined1 *)FUN_1800012e0(param_3);
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x10;
  if (0xfffffffffffffff < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




void * FUN_18000ca30(void *param_1,uint param_2)

{
  FUN_180001db0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::deallocate(class std::allocator<struct std::_Container_proxy> &
   __ptr64,struct std::_Container_proxy * __ptr64 const,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::deallocate
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          __uint64 param_3)

{
  _Deallocate<>(param_2,param_3 * 0x10);
  return;
}




undefined8 * FUN_18000caa0(undefined8 *param_1)

{
  FUN_180007840(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




undefined8 * FUN_18000cb00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_18000cb40(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




void FUN_18000cb60(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1800025b0(param_1);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  if (*plVar1 != 0) {
    FUN_18000b540(param_1);
    FUN_18000b560(param_1);
    FUN_18000b690(param_1);
    lVar2 = FUN_18000be30(param_1);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    uVar4 = FUN_180001f40(param_1);
    FUN_18000be80(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_18000b560(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_18000b540(param_1);
  *plVar1 = param_2 + param_3 * 0x208;
  plVar1 = (longlong *)FUN_18000b860(param_1);
  *plVar1 = param_2 + param_4 * 0x208;
  return;
}




ulonglong FUN_18000cc70(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_18000be30(param_1);
  _Var2 = FUN_18000cda0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18000cd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,IObject *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18000cd60(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18000cd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,IObject *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001f40(param_1);
  FUN_18000d120(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_18000cda0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180001f40(param_1);
  local_18 = FUN_18000cf40();
  local_10[0] = FUN_180001200();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_18000d200(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_18000ce20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_20 = FUN_180001f40(param_1);
  if ((*(ulonglong *)(local_20 + 0x10) <= param_2) && (*(ulonglong *)(local_20 + 0x18) != param_2))
  {
    if (*(ulonglong *)(local_20 + 0x18) < param_2) {
      local_18 = *(longlong *)(local_20 + 0x10);
      puVar3 = local_28;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FUN_18000d250(param_1,param_2 - local_18,local_28[0]);
      *(longlong *)(local_20 + 0x10) = local_18;
    }
    else if ((param_2 < 8) && (bVar1 = Large_string_engaged(local_20), bVar1)) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      _Become_small(param_1);
    }
  }
  return;
}




void FUN_18000cf00(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  copy(param_2,param_3,param_4 + 1);
  return;
}




undefined8 FUN_18000cf40(void)

{
  return 0x7e07e07e07e07e;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Become_small(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Become_small
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_180001f40(this);
  FUN_180001210();
  pvVar1 = (void *)*puVar3;
  uVar4 = FUN_180001f40(this);
  FUN_1800012e0(puVar3);
  FUN_180002c00();
  lVar2 = puVar3[2];
  puVar5 = (undefined1 *)FUN_1800012e0(pvVar1);
  copy((undefined1 *)puVar3,puVar5,lVar2 + 1);
  deallocate(uVar4,pvVar1,puVar3[3] + 1);
  puVar3[3] = 7;
  return;
}




void FUN_18000d010(void)

{
  return;
}




longlong FUN_18000d030(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 3;
}




undefined8 FUN_18000d060(undefined8 param_1)

{
  return param_1;
}




void FUN_18000d080(void *param_1,longlong param_2,void *param_3)

{
  FUN_18000d3f0(param_1,param_2,param_3);
  return;
}




void FUN_18000d0c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_18000d0e0(undefined1 *param_1,longlong param_2)

{
  FUN_18000d460(param_1,(longlong)(param_1 + param_2 * 8));
  return;
}




IObject * FUN_18000d120(undefined8 param_1,undefined8 param_2,IObject *param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 uVar2;
  IObject *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  IObject *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800012e0(param_1);
  local_10[0] = FUN_1800012e0(param_2);
  pIVar1 = (IObject *)FUN_18000d1d0((longlong *)&local_20,local_10);
  local_18 = IObject::operator=(local_res18,pIVar1);
  FUN_18000d060(local_28);
  uVar2 = FUN_18000d080(local_20,local_10[0],local_18);
  FUN_18000d0c0(&local_res18,uVar2);
  return local_res18;
}




void FUN_18000d1d0(longlong *param_1,longlong *param_2)

{
  FUN_18000d4b0(param_1,param_2);
  return;
}




longlong FUN_18000d200(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x208;
  if (0x7e07e07e07e07e < param_1) {
    local_18 = -1;
  }
  return local_18;
}




undefined8 FUN_18000d250(undefined8 param_1,ulonglong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [16];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  puVar2 = (undefined8 *)FUN_180001f40(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_180003130();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180001f40(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_180001210();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800012e0(local_48);
  if (local_28 < 8) {
    FUN_18000cf00(local_res18,local_18,(undefined1 *)puVar2,lVar1);
    uVar5 = FUN_1800012e0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800012e0(local_20);
    FUN_18000cf00(local_res18,local_18,puVar4,lVar1);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




longlong FUN_18000d3f0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}




longlong FUN_18000d460(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return param_2;
}




longlong FUN_18000d4b0(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x208;
}




void FUN_18000d4e0(wchar_t *param_1,wchar_t *param_2)

{
  wcsstr(param_1,param_2);
  return;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0xd510  8  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)(this,param_1);
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0xd540  9  ?Release@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 8))(this);
  return uVar1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0xd560  7  ?AddRef@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this);
  return uVar1;
}




/* public: __cdecl IObject::IObject(void) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this)

{
                    /* 0xd580  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0xd5a0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0xd5a0  2  ??0IObject@@QEAA@AEBU0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




undefined8 FUN_18000d5c0(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_1)(param_2);
  }
  return uVar1;
}




undefined8 FUN_18000d610(LPCSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined8 uVar2;
  
  hModule = LoadLibraryA(param_1);
  if (hModule == (HMODULE)0x0) {
    uVar2 = 0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"GetModule");
    if (pFVar1 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_18000d5c0(pFVar1,hModule);
    }
  }
  return uVar2;
}




void FUN_18000d690(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_168 [32];
  char *local_148;
  ulonglong local_140;
  ulonglong local_138;
  CHAR local_128;
  char acStack_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_168;
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    while (local_148 = pcVar1, *local_148 != '\0') {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_18000d80c;
      local_148[(longlong)(&local_128 + -(longlong)param_1)] = *local_148;
      pcVar1 = local_148 + 1;
    }
    local_140 = (longlong)local_148 - (longlong)param_1;
    if (0x103 < local_140) {
      __report_rangecheckfailure();
    }
    (&local_128)[local_140] = '\0';
    local_148[(longlong)(&local_128 + -(longlong)param_1)] = '.';
    local_148[(longlong)(&local_128 + (1 - (longlong)param_1))] = 'm';
    local_148[(longlong)(&local_128 + (2 - (longlong)param_1))] = 'o';
    local_148 = local_148 + 3;
    local_138 = (longlong)local_148 - (longlong)param_1;
    if (0x103 < local_138) {
      __report_rangecheckfailure();
    }
    (&local_128)[local_138] = '\0';
    FUN_18000d610(&local_128);
  }
LAB_18000d80c:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




int FUN_18000d830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_20 = (longlong *)0x0;
  local_18 = (longlong *)FUN_180017680("EFIBoot");
  if (local_18 == (longlong *)0x0) {
    local_28 = 1;
  }
  else {
    (**(code **)(*local_18 + 0x38))(local_18,&local_20);
    if (local_20 == (longlong *)0x0) {
      local_28 = 1;
    }
    else {
      local_28 = (**(code **)(*local_20 + 0x60))(local_20,param_1);
    }
  }
  return local_28;
}




undefined8 * FUN_18000d8d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_18000d8f0(undefined8 *param_1)

{
  CloseHandle((HANDLE)*param_1);
  return;
}




BOOL FUN_18000d910(LPWSTR param_1,DWORD *param_2,LPVOID param_3,DWORD *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  _STARTUPINFOW *p_Var4;
  _PROCESS_INFORMATION *p_Var5;
  BOOL local_128;
  BOOL local_124;
  DWORD local_120;
  DWORD local_11c;
  HANDLE local_118;
  undefined8 local_110;
  undefined8 local_108;
  HANDLE local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  _PROCESS_INFORMATION local_a8;
  _SECURITY_ATTRIBUTES local_90;
  _STARTUPINFOW local_78;
  
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_100 = (HANDLE)0xffffffffffffffff;
  local_118 = (HANDLE)0xffffffffffffffff;
  p_Var4 = &local_78;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var4->cb = 0;
    p_Var4 = (_STARTUPINFOW *)((longlong)&p_Var4->cb + 1);
  }
  local_78.cb = 0x68;
  p_Var5 = &local_a8;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var5->hProcess = 0;
    p_Var5 = (_PROCESS_INFORMATION *)((longlong)&p_Var5->hProcess + 1);
  }
  if (((param_3 != (LPVOID)0x0) && (param_4 != (DWORD *)0x0)) && (*param_4 != 0)) {
    local_90.nLength = 0x18;
    local_90.lpSecurityDescriptor = (LPVOID)0x0;
    local_90.bInheritHandle = 1;
    BVar1 = CreatePipe(&local_100,&local_118,&local_90,0);
    if (BVar1 == 0) {
      local_f8 = (longlong *)FUN_180007470();
      if (local_f8 != (longlong *)0x0) {
        DVar2 = GetLastError();
        local_d0 = *local_f8;
        (**(code **)(local_d0 + 0x30))
                  (local_f8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x54,DVar2);
      }
      local_128 = 0;
      goto LAB_18000de6f;
    }
    GetStartupInfoW(&local_78);
    local_78.hStdError = local_118;
    local_78.hStdOutput = local_118;
    local_78.wShowWindow = 0;
    local_78.dwFlags = 0x101;
    local_124 = 1;
  }
  local_128 = CreateProcessW((LPCWSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,local_124,0x8000000,(LPVOID)0x0,(LPCWSTR)0x0
                             ,&local_78,&local_a8);
  if (local_128 == 0) {
    local_f0 = (longlong *)FUN_180007470();
    if (local_f0 != (longlong *)0x0) {
      DVar2 = GetLastError();
      local_c8 = *local_f0;
      (**(code **)(local_c8 + 0x30))
                (local_f0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x70,DVar2);
    }
  }
  else {
    FUN_18000d8d0(&local_108,local_a8.hProcess);
    FUN_18000d8d0(&local_110,local_a8.hThread);
    DVar2 = WaitForSingleObject(local_a8.hProcess,0xffffffff);
    if (DVar2 == 0) {
      BVar1 = GetExitCodeProcess(local_a8.hProcess,&local_120);
      if (BVar1 == 0) {
        local_e0 = (longlong *)FUN_180007470();
        if (local_e0 != (longlong *)0x0) {
          DVar2 = GetLastError();
          local_b8 = *local_e0;
          (**(code **)(local_b8 + 0x30))
                    (local_e0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x80,DVar2);
        }
        local_128 = 0;
        FUN_18000d8f0(&local_110);
        FUN_18000d8f0(&local_108);
      }
      else {
        if (param_2 != (DWORD *)0x0) {
          *param_2 = local_120;
        }
        if (((param_3 == (LPVOID)0x0) || (param_4 == (DWORD *)0x0)) ||
           ((*param_4 == 0 ||
            (BVar1 = ReadFile(local_100,param_3,*param_4,&local_11c,(LPOVERLAPPED)0x0), BVar1 != 0))
           )) {
          FUN_18000d8f0(&local_110);
          FUN_18000d8f0(&local_108);
        }
        else {
          local_d8 = (longlong *)FUN_180007470();
          if (local_d8 != (longlong *)0x0) {
            DVar2 = GetLastError();
            local_b0 = *local_d8;
            (**(code **)(local_b0 + 0x30))
                      (local_d8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x8e,DVar2);
          }
          local_128 = 0;
          FUN_18000d8f0(&local_110);
          FUN_18000d8f0(&local_108);
        }
      }
    }
    else {
      local_e8 = (longlong *)FUN_180007470();
      if (local_e8 != (longlong *)0x0) {
        DVar2 = GetLastError();
        local_c0 = *local_e8;
        (**(code **)(local_c0 + 0x30))
                  (local_e8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x79,DVar2);
      }
      local_128 = 0;
      FUN_18000d8f0(&local_110);
      FUN_18000d8f0(&local_108);
    }
  }
LAB_18000de6f:
  if (local_118 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_118);
  }
  if (local_100 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_100);
  }
  if (param_4 != (DWORD *)0x0) {
    *param_4 = local_11c;
  }
  return local_128;
}




undefined4
FUN_18000dec0(LPCWSTR param_1,LPCWSTR param_2,undefined *param_3,undefined8 param_4,uint param_5,
             uint *param_6)

{
  ulonglong uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  DWORD *pDVar6;
  undefined1 *puVar7;
  undefined4 local_e8;
  DWORD local_e4;
  uint local_e0;
  int local_dc;
  HANDLE local_d8;
  HANDLE local_d0;
  void *local_c8;
  int local_c0;
  undefined8 local_b8;
  DWORD local_b0;
  DWORD aDStack_ac [3];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  void *local_40;
  void *local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  void *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_e0 = 0;
  local_e4 = 0;
  aDStack_ac[1] = 0;
  local_d8 = (HANDLE)0xffffffffffffffff;
  local_d0 = (HANDLE)0xffffffffffffffff;
  local_b0 = 0;
  pDVar6 = aDStack_ac;
  for (lVar5 = 4; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pDVar6 = 0;
    pDVar6 = (DWORD *)((longlong)pDVar6 + 1);
  }
  local_b8 = local_b8 & 0xffffffff00000000;
  puVar7 = (undefined1 *)((longlong)&local_b8 + 4);
  for (lVar5 = 4; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  local_d8 = CreateFileW(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (local_d8 == (HANDLE)0xffffffffffffffff) {
    local_a0 = (longlong *)FUN_180007470();
    if (local_a0 != (longlong *)0x0) {
      DVar2 = GetLastError();
      local_60 = *local_a0;
      (**(code **)(local_60 + 0x30))
                (local_a0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xca,DVar2);
    }
    local_e8 = 0;
  }
  else {
    local_e0 = FUN_180013520(param_1);
    if (((local_e0 & 0xfff) == 0x474) || ((local_e0 & 0xfff) == 0)) {
      local_e8 = 1;
      iVar3 = FUN_18000e5e0(param_1);
      if ((iVar3 == 1) && (BVar4 = DeleteFileW(param_1), BVar4 == 0)) {
        local_90 = (longlong *)FUN_180007470();
        if (local_90 != (longlong *)0x0) {
          DVar2 = GetLastError();
          local_50 = *local_90;
          (**(code **)(local_50 + 0x30))
                    (local_90,1,0x12400,L"Boot:%S %d failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xdf,DVar2);
        }
        local_e8 = 0;
      }
      else {
        local_d0 = CreateFileW(param_1,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
        if (local_d0 == (HANDLE)0xffffffffffffffff) {
          local_88 = (longlong *)FUN_180007470();
          if (local_88 != (longlong *)0x0) {
            DVar2 = GetLastError();
            local_48 = *local_88;
            (**(code **)(local_48 + 0x30))
                      (local_88,1,0x12400,L"Boot:%S %d failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xef,DVar2);
          }
          local_e8 = 0;
        }
        else {
          local_c8 = operator_new(0x40000);
          local_40 = local_c8;
          local_38 = local_c8;
          if (local_c8 == (void *)0x0) {
            local_78 = (longlong *)FUN_180007470();
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x30))
                        (local_78,1,0x12400,L"Boot:%S %d failed\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x100);
            }
            local_e8 = 0;
          }
          else {
            local_b8 = 0;
            local_b0 = GetFileSize(local_d8,aDStack_ac);
            while ((longlong)local_b8 < CONCAT44(aDStack_ac[0],local_b0)) {
              BVar4 = ReadFile(local_d8,local_c8,0x40000,&local_e4,(LPOVERLAPPED)0x0);
              if (BVar4 == 0) {
                local_70 = (longlong *)FUN_180007470();
                if (local_70 != (longlong *)0x0) {
                  DVar2 = GetLastError();
                  local_30 = *local_70;
                  (**(code **)(local_30 + 0x30))
                            (local_70,1,0x12400,L"Boot:%S %d failed:%08X\n",
                             "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x10b,DVar2);
                }
                local_e8 = 0;
                break;
              }
              BVar4 = WriteFile(local_d0,local_c8,local_e4,aDStack_ac + 1,(LPOVERLAPPED)0x0);
              if (BVar4 == 0) {
                local_68 = (longlong *)FUN_180007470();
                if (local_68 != (longlong *)0x0) {
                  DVar2 = GetLastError();
                  local_28 = *local_68;
                  (**(code **)(local_28 + 0x30))
                            (local_68,1,0x12400,L"Boot:%S %d failed:%08X\n",
                             "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x112,DVar2);
                }
                local_e8 = 0;
                break;
              }
              local_b8 = local_b8 + local_e4;
              if ((param_3 != (undefined *)0x0) && (param_5 != 0)) {
                *param_6 = *param_6 + local_e4;
                local_20 = (ulonglong)param_5;
                uVar1 = ((ulonglong)*param_6 * 100) / local_20;
                local_dc = (int)uVar1;
                if (local_dc != local_c0) {
                  (*(code *)param_3)(param_4,uVar1 & 0xffffffff);
                  local_c0 = local_dc;
                }
              }
            }
          }
        }
      }
    }
    else {
      local_98 = (longlong *)FUN_180007470();
      if (local_98 != (longlong *)0x0) {
        DVar2 = GetLastError();
        local_58 = *local_98;
        (**(code **)(local_58 + 0x30))
                  (local_98,1,0x12400,L"Boot:%S %d failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xd7,DVar2);
      }
      local_e8 = 0;
    }
  }
  if (local_d8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_d8);
    local_d8 = (HANDLE)0xffffffffffffffff;
  }
  if (local_d0 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_d0);
    CloseHandle(local_d0);
    local_d0 = (HANDLE)0xffffffffffffffff;
    FUN_180013520(param_1);
  }
  if (local_c8 != (void *)0x0) {
    local_18 = local_c8;
    free(local_c8);
  }
  return local_e8;
}




void FUN_18000e5e0(LPCWSTR param_1)

{
  BOOL BVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_2b8 [32];
  LPCWSTR local_298;
  undefined4 local_290;
  undefined4 local_288;
  longlong *local_280;
  longlong *local_278;
  undefined8 local_270;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_2b8;
  local_288 = 1;
  puVar3 = local_268;
  for (lVar2 = 0x250; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_270 = 0xffffffffffffffff;
  if (param_1 == (LPCWSTR)0x0) {
    local_280 = (longlong *)FUN_180007470();
    if (local_280 != (longlong *)0x0) {
      local_290 = 0x14b;
      local_298 = L"k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(*local_280 + 0x30))(local_280,1,0x12400,L"Boot:%S %d failed. pName is NULL.\n");
    }
  }
  else {
    BVar1 = PathFileExistsW(param_1);
    if (BVar1 == 0) {
      local_278 = (longlong *)FUN_180007470();
      if (local_278 != (longlong *)0x0) {
        local_298 = param_1;
        (**(code **)(*local_278 + 0x30))(local_278,1,0x12400,L"Boot:%s not find.\n");
      }
      local_288 = 0;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2b8);
  return;
}




void FUN_18000e710(LPCWSTR param_1,LPVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hDevice;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStackY_98 [32];
  DWORD local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_98;
  local_4c = 0;
  local_28 = 0;
  puVar4 = local_24;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  }
  hDevice = CreateFileW(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
    if ((DVar1 != 2) && (local_48 = (longlong *)FUN_180007470(), local_48 != (longlong *)0x0)) {
      GetLastError();
      local_38 = *local_48;
      (**(code **)(local_38 + 0x30))(local_48,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  else {
    local_28 = 0;
    local_24[0] = 0;
    BVar2 = DeviceIoControl(hDevice,0x2d1400,&local_28,0xc,param_2,param_3,&local_4c,
                            (LPOVERLAPPED)0x0);
    if ((BVar2 == 0) && (local_40 = (longlong *)FUN_180007470(), local_40 != (longlong *)0x0)) {
      GetLastError();
      local_30 = *local_40;
      (**(code **)(local_30 + 0x30))(local_40,1,0x12400);
    }
  }
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_18000e940(LPCWSTR param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined1 *local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_448;
  puVar3 = local_418;
  for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_428 = 0;
  local_420 = local_418;
  iVar1 = FUN_18000e710(param_1,local_420,0x400);
  if (iVar1 == 1) {
    local_428 = *(undefined4 *)(local_420 + 0x1c);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_448);
  return;
}




undefined4 FUN_18000e9d0(LPCWSTR param_1,undefined8 *param_2)

{
  DWORD DVar1;
  HANDLE hFile;
  longlong lVar2;
  DWORD *pDVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  DWORD DStack_24;
  longlong *local_20;
  longlong local_18;
  
  uVar4 = 1;
  uVar5 = 0;
  pDVar3 = &DStack_24;
  for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pDVar3 = 0;
    pDVar3 = (DWORD *)((longlong)pDVar3 + 1);
  }
  hFile = CreateFileW(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    local_20 = (longlong *)FUN_180007470();
    if (local_20 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_18 = *local_20;
      (**(code **)(local_18 + 0x30))
                (local_20,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x1db,param_1,DVar1,uVar4,
                 hFile,uVar5);
    }
    uVar4 = 0;
  }
  else {
    DVar1 = GetFileSize(hFile,&DStack_24);
    *param_2 = CONCAT44(DStack_24,DVar1);
  }
  if (hFile != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hFile);
  }
  return uVar4;
}




void FUN_18000eb20(undefined2 param_1)

{
  BOOL BVar1;
  HANDLE hDevice;
  longlong lVar2;
  wchar_t *pwVar3;
  WCHAR *pWVar4;
  uint *puVar5;
  undefined1 auStackY_4c8 [32];
  DWORD local_470 [2];
  longlong *local_468;
  longlong *local_460;
  longlong *local_458;
  longlong local_450;
  longlong local_448;
  WCHAR local_440 [4];
  undefined2 uStack_438;
  uint local_428 [256];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_4c8;
  pwVar3 = L"\\\\.\\X:";
  pWVar4 = local_440;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pWVar4 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  uStack_438 = param_1;
  hDevice = CreateFileW(local_440,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_458 = (longlong *)FUN_180007470();
    if (local_458 != (longlong *)0x0) {
      GetLastError();
      local_448 = *local_458;
      (**(code **)(local_448 + 0x30))(local_458,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
    }
  }
  else {
    puVar5 = local_428;
    for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (uint *)((longlong)puVar5 + 1);
    }
    local_470[0] = 0;
    BVar1 = DeviceIoControl(hDevice,0x560000,(LPVOID)0x0,0,local_428,0x400,local_470,
                            (LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_460 = (longlong *)FUN_180007470();
      if (local_460 != (longlong *)0x0) {
        GetLastError();
        local_450 = *local_460;
        (**(code **)(local_450 + 0x30))(local_460,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
      }
    }
    else if ((1 < local_428[0]) &&
            (local_468 = (longlong *)FUN_180007470(), local_468 != (longlong *)0x0)) {
      (**(code **)(*local_468 + 0x30))
                (local_468,1,0x12400,L"Boot:%S %d VOL:%s NumberOfDiskExtents:%d\n");
    }
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_4c8);
  return;
}




void FUN_18000edf0(undefined2 param_1)

{
  BOOL BVar1;
  HANDLE hDevice;
  longlong lVar2;
  wchar_t *pwVar3;
  WCHAR *pWVar4;
  undefined1 *puVar5;
  undefined1 auStackY_4b8 [32];
  DWORD local_468 [2];
  longlong *local_460;
  longlong *local_458;
  undefined1 *local_450;
  longlong local_448;
  longlong local_440;
  WCHAR local_438 [4];
  undefined2 uStack_430;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_4b8;
  pwVar3 = L"\\\\.\\X:";
  pWVar4 = local_438;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pWVar4 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  uStack_430 = param_1;
  hDevice = CreateFileW(local_438,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_458 = (longlong *)FUN_180007470();
    if (local_458 != (longlong *)0x0) {
      GetLastError();
      local_440 = *local_458;
      (**(code **)(local_440 + 0x30))(local_458,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
    }
  }
  else {
    puVar5 = local_428;
    for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_468[0] = 0;
    local_450 = local_428;
    BVar1 = DeviceIoControl(hDevice,0x74004,(LPVOID)0x0,0,local_450,0x400,local_468,
                            (LPOVERLAPPED)0x0);
    if ((BVar1 == 0) && (local_460 = (longlong *)FUN_180007470(), local_460 != (longlong *)0x0)) {
      GetLastError();
      local_448 = *local_460;
      (**(code **)(local_448 + 0x30))(local_460,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_4b8);
  return;
}




void FUN_18000f020(void)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hDevice;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStackY_298 [32];
  DWORD local_248 [2];
  longlong *local_240;
  longlong *local_238;
  longlong local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_298;
  local_248[0] = 0;
  pWVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
  hDevice = CreateFileW(local_228,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_238 = (longlong *)FUN_180007470();
    if (local_238 != (longlong *)0x0) {
      GetLastError();
      local_230 = *local_238;
      (**(code **)(local_230 + 0x30))(local_238,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
    }
  }
  else {
    BVar1 = DeviceIoControl(hDevice,0x70024,(LPVOID)0x0,0,(LPVOID)0x0,0,local_248,(LPOVERLAPPED)0x0)
    ;
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x13) {
        CloseHandle(hDevice);
        goto LAB_18000f21c;
      }
      local_240 = (longlong *)FUN_180007470();
      if (local_240 != (longlong *)0x0) {
        (**(code **)(*local_240 + 0x30))(local_240,1,0x12400,L"Boot:%S %d failed:%08X\n");
      }
    }
    CloseHandle(hDevice);
  }
LAB_18000f21c:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_298);
  return;
}




undefined4 FUN_18000f240(int param_1,int param_2,short *param_3)

{
  short sVar1;
  DWORD DVar2;
  int iVar3;
  int local_24;
  
  DVar2 = GetLogicalDrives();
  local_24 = 0;
  do {
    if (0x19 < local_24) {
      return 0;
    }
    if ((DVar2 & 1 << ((byte)local_24 & 0x1f)) != 0) {
      sVar1 = (short)local_24 + 0x41;
      iVar3 = FUN_18000eb20(sVar1);
      if ((iVar3 == param_1) && (iVar3 = FUN_18000edf0(sVar1), iVar3 == param_2)) {
        *param_3 = sVar1;
        return 1;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}




void FUN_18000f310(WCHAR *param_1)

{
  UINT UVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_288 [32];
  char *local_268;
  undefined4 local_260;
  DWORD local_258;
  undefined4 local_248;
  longlong *local_240;
  longlong local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_288;
  local_248 = 0xffffffff;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  UVar1 = GetSystemDirectoryW(local_228,0x104);
  if (((UVar1 == 0) || (0x5a < (ushort)local_228[0])) || ((ushort)local_228[0] < 0x41)) {
    local_240 = (longlong *)FUN_180007470();
    if (local_240 != (longlong *)0x0) {
      local_258 = GetLastError();
      local_238 = *local_240;
      local_260 = 0x2cd;
      local_268 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(local_238 + 0x30))(local_240,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  else {
    *param_1 = local_228[0];
    local_248 = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_288);
  return;
}




longlong FUN_18000f430(ushort *param_1)

{
  ushort *local_res8;
  ushort local_18;
  longlong local_10;
  
  local_10 = 0;
  for (local_res8 = param_1; *local_res8 != 0; local_res8 = local_res8 + 1) {
    local_18 = *local_res8;
    if ((0x60 < local_18) && (local_18 < 0x7b)) {
      local_18 = local_18 - 0x20;
    }
    if ((local_18 < 0x41) || (0x5a < local_18)) {
      local_18 = local_18 - 0x30;
    }
    else {
      local_18 = local_18 - 0x37;
    }
    local_10 = local_10 * 0x10 + (ulonglong)local_18;
  }
  return local_10;
}




void FUN_18000f4f0(wchar_t *param_1,uint *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  LSTATUS LVar3;
  BOOL BVar4;
  int iVar5;
  HANDLE pvVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  longlong lVar9;
  WCHAR *pWVar10;
  undefined1 *puVar11;
  undefined1 auStackY_9f8 [32];
  wchar_t *local_990;
  int local_980;
  DWORD local_97c [3];
  longlong local_970;
  longlong local_968;
  HANDLE local_960;
  longlong local_958;
  longlong local_950;
  wchar_t *local_948;
  wchar_t *local_940;
  DWORD local_938 [2];
  longlong *local_930;
  HKEY local_928;
  longlong *local_920;
  longlong *local_918;
  longlong *local_910;
  longlong *local_908;
  longlong *local_900;
  longlong *local_8f8;
  undefined1 *local_8f0;
  longlong *local_8e8;
  longlong *local_8e0;
  ulonglong local_8d8;
  undefined4 local_8d0;
  longlong local_8c8;
  longlong local_8c0;
  longlong local_8b8;
  longlong local_8b0;
  longlong local_8a8;
  longlong local_8a0;
  WCHAR *local_898;
  WCHAR *local_890;
  longlong local_888;
  WCHAR *local_880;
  wchar_t *local_878;
  WCHAR local_870 [4];
  WCHAR local_868 [15];
  WCHAR WStack_84a;
  WCHAR local_848 [264];
  undefined1 local_638 [528];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_9f8;
  local_938[0] = 0;
  local_928 = (HKEY)0x0;
  bVar2 = false;
  local_97c[0] = 0x104;
  puVar11 = local_638;
  for (lVar9 = 0x208; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  pWVar10 = local_848;
  for (lVar9 = 0x208; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined1 *)pWVar10 = 0;
    pWVar10 = (WCHAR *)((longlong)pWVar10 + 1);
  }
  local_8d0 = 0x208;
  pwVar7 = L"\\\\.\\HDBOOTDOSDEVICE";
  pWVar10 = local_870;
  for (lVar9 = 0x28; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(char *)pWVar10 = (char)*pwVar7;
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
    pWVar10 = (WCHAR *)((longlong)pWVar10 + 1);
  }
  LVar3 = RegOpenKeyExW((HKEY)0xffffffff80000002,L"SYSTEM\\Setup",0,0x20019,&local_928);
  if (LVar3 == 0) {
    LVar3 = RegQueryValueExW(local_928,L"SystemPartition",(LPDWORD)0x0,local_938,(LPBYTE)local_848,
                             local_97c);
    if (LVar3 == 0) {
      bVar2 = true;
    }
    else {
      local_930 = (longlong *)FUN_180007470();
      if (local_930 != (longlong *)0x0) {
        GetLastError();
        local_8c8 = *local_930;
        (**(code **)(local_8c8 + 0x30))(local_930,1,0x12400,L"Boot:%S %S %d failed:%08X\n");
      }
    }
    RegCloseKey(local_928);
  }
  else {
    local_920 = (longlong *)FUN_180007470();
    if (local_920 != (longlong *)0x0) {
      GetLastError();
      local_8c0 = *local_920;
      (**(code **)(local_8c0 + 0x30))(local_920,1,0x12400,L"Boot:%S %S %d failed:%08X\n");
    }
  }
  if (bVar2) {
    local_950 = 0;
    local_980 = 0;
    puVar11 = local_428;
    for (lVar9 = 0x400; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_97c[1] = 0;
    local_960 = (HANDLE)0xffffffffffffffff;
    local_8f0 = local_428;
    bVar2 = false;
    BVar4 = DefineDosDeviceW(1,local_868,local_848);
    if (BVar4 == 0) {
      local_908 = (longlong *)FUN_180007470();
      if (local_908 != (longlong *)0x0) {
        GetLastError();
        local_8a8 = *local_908;
        (**(code **)(local_8a8 + 0x30))(local_908,1,0x12400,L"Boot:%S %S %d VOL:%s failed:%08X\n");
      }
    }
    else {
      pvVar6 = CreateFileW(local_870,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (pvVar6 == (HANDLE)0xffffffffffffffff) {
        local_910 = (longlong *)FUN_180007470();
        if (local_910 != (longlong *)0x0) {
          GetLastError();
          local_8b0 = *local_910;
          (**(code **)(local_8b0 + 0x30))(local_910,1,0x12400,L"Boot:%S %S %d VOL:%s failed:%08X\n")
          ;
        }
      }
      else {
        BVar4 = DeviceIoControl(pvVar6,0x56c008,(LPVOID)0x0,0,(LPVOID)0x0,0,local_97c + 1,
                                (LPOVERLAPPED)0x0);
        if ((BVar4 == 0) && (local_918 = (longlong *)FUN_180007470(), local_918 != (longlong *)0x0))
        {
          GetLastError();
          local_8b8 = *local_918;
          (**(code **)(local_8b8 + 0x30))(local_918,1,0x12400,L"Boot:%S %S %d VOL:%s failed:%08X\n")
          ;
        }
        CloseHandle(pvVar6);
        wcsncpy(param_1,local_848,(ulonglong)local_97c[0]);
        *param_2 = local_97c[0];
        bVar2 = true;
      }
      DefineDosDeviceW(2,local_868,(LPCWSTR)0x0);
    }
    if (!bVar2) {
      pwVar7 = (wchar_t *)FUN_18000d4e0(local_848,L"\\Harddisk");
      if (pwVar7 != (wchar_t *)0x0) {
        local_990 = (wchar_t *)FUN_18000d4e0(pwVar7,L"\\");
        if (local_990 != (wchar_t *)0x0) {
          *local_990 = L'\0';
          local_990 = local_990 + 1;
        }
        local_980 = _wtoi(pwVar7 + 9);
        if (((local_990 != (wchar_t *)0x0) &&
            (pwVar7 = (wchar_t *)FUN_18000d4e0(local_990,L"0x"), pwVar7 != (wchar_t *)0x0)) &&
           (puVar8 = (undefined2 *)FUN_18000d4e0(pwVar7,L"-"), puVar8 != (undefined2 *)0x0)) {
          *puVar8 = 0;
          local_950 = FUN_18000f430((ushort *)(pwVar7 + 2));
        }
      }
      local_900 = (longlong *)FUN_180007470();
      if (local_900 != (longlong *)0x0) {
        (**(code **)(*local_900 + 0x30))(local_900,1,0x12400,L"Boot:%S %S %d VOL:%s %d %llu\n");
      }
      local_960 = FindFirstVolumeW(local_848,0x104);
      if (local_960 != (HANDLE)0xffffffffffffffff) {
        do {
          local_898 = local_848;
          local_970 = -1;
          lVar9 = local_970;
          do {
            local_970 = lVar9;
            lVar9 = local_970 + 1;
          } while (local_898[lVar9] != L'\0');
          pWVar10 = local_848 + local_970;
          local_970 = lVar9;
          if (*pWVar10 == L'\\') {
            local_890 = local_848;
            local_958 = -1;
            do {
              local_958 = local_958 + 1;
            } while (local_890[local_958] != L'\0');
            local_8d8 = local_958 * 2 - 2;
            if (0x207 < local_8d8) {
              __report_rangecheckfailure();
            }
            *(undefined2 *)((longlong)local_848 + local_8d8) = 0;
          }
          pvVar6 = CreateFileW(local_848,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
          if (pvVar6 != (HANDLE)0xffffffffffffffff) {
            BVar4 = DeviceIoControl(pvVar6,0x560000,(LPVOID)0x0,0,local_8f0,0x400,local_97c + 1,
                                    (LPOVERLAPPED)0x0);
            if (BVar4 == 0) {
              CloseHandle(pvVar6);
            }
            else {
              if ((local_980 == *(int *)(local_8f0 + 8)) &&
                 (local_950 == *(longlong *)(local_8f0 + 0x10))) {
                BVar4 = DeviceIoControl(pvVar6,0x56c008,(LPVOID)0x0,0,(LPVOID)0x0,0,local_97c + 1,
                                        (LPOVERLAPPED)0x0);
                if ((BVar4 == 0) &&
                   (local_8e8 = (longlong *)FUN_180007470(), local_8e8 != (longlong *)0x0)) {
                  GetLastError();
                  local_888 = *local_8e8;
                  (**(code **)(local_888 + 0x30))
                            (local_8e8,1,0x12400,L"Boot:%S %S %d VOL:%s failed:%08X\n");
                }
                CloseHandle(pvVar6);
                local_8e0 = (longlong *)FUN_180007470();
                if (local_8e0 != (longlong *)0x0) {
                  (**(code **)(*local_8e0 + 0x30))
                            (local_8e0,1,0x12400,L"Boot:%S %S %d VOL:%s %d %llx\n");
                }
                iVar5 = wcsncmp(local_848,L"\\\\?\\",4);
                if (iVar5 == 0) {
                  local_848[1] = 0x3f;
                }
                local_940 = local_848;
                local_948 = param_1;
                do {
                  wVar1 = *local_940;
                  *local_948 = wVar1;
                  local_940 = local_940 + 1;
                  local_948 = local_948 + 1;
                } while (wVar1 != L'\0');
                local_880 = local_848;
                local_968 = -1;
                do {
                  local_968 = local_968 + 1;
                } while (local_880[local_968] != L'\0');
                *param_2 = (uint)local_968;
                local_878 = param_1;
LAB_180010157:
                FindVolumeClose(local_960);
                goto LAB_18001016f;
              }
              CloseHandle(pvVar6);
            }
          }
          BVar4 = FindNextVolumeW(local_960,local_848,0x104);
          if (BVar4 == 0) goto LAB_180010157;
        } while( true );
      }
      local_8f8 = (longlong *)FUN_180007470();
      if (local_8f8 != (longlong *)0x0) {
        GetLastError();
        local_8a0 = *local_8f8;
        (**(code **)(local_8a0 + 0x30))(local_8f8,1,0x12400,L"Boot:%S %S %d failed:%08X\n");
      }
    }
  }
LAB_18001016f:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_9f8);
  return;
}




void FUN_180010190(void)

{
  int iVar1;
  BOOL BVar2;
  HANDLE hDevice;
  longlong lVar3;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  undefined1 auStackY_6f8 [32];
  int local_6b8;
  uint local_6a8;
  DWORD local_6a4;
  longlong *local_6a0;
  longlong *local_698;
  longlong *local_690;
  undefined1 *local_688;
  longlong local_680;
  longlong local_678;
  longlong local_670;
  WCHAR local_668 [4];
  WCHAR local_660 [20];
  wchar_t local_638 [264];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_6f8;
  local_6b8 = -1;
  pwVar4 = local_638;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pwVar4 = 0;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  local_6a8 = 0x208;
  pwVar4 = L"\\\\.\\HDBOOTDOSDEVICE";
  pWVar5 = local_668;
  for (lVar3 = 0x28; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(char *)pWVar5 = (char)*pwVar4;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  iVar1 = FUN_18000f4f0(local_638,&local_6a8);
  if (iVar1 == 1) {
    local_6b8 = 0;
  }
  if (local_6b8 == 0) {
    BVar2 = DefineDosDeviceW(1,local_660,local_638);
    if (BVar2 == 0) {
      local_6a0 = (longlong *)FUN_180007470();
      if (local_6a0 != (longlong *)0x0) {
        GetLastError();
        local_680 = *local_6a0;
        (**(code **)(local_680 + 0x30))(local_6a0,1,0x12400,L"Boot:%S %d failed:%08X\n");
      }
    }
    else {
      hDevice = CreateFileW(local_668,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hDevice == (HANDLE)0xffffffffffffffff) {
        local_690 = (longlong *)FUN_180007470();
        if (local_690 != (longlong *)0x0) {
          GetLastError();
          local_670 = *local_690;
          (**(code **)(local_670 + 0x30))(local_690,1,0x12400);
        }
      }
      else {
        puVar6 = local_428;
        for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        local_6a4 = 0;
        local_688 = local_428;
        BVar2 = DeviceIoControl(hDevice,0x560000,(LPVOID)0x0,0,local_688,0x400,&local_6a4,
                                (LPOVERLAPPED)0x0);
        if ((BVar2 == 0) && (local_698 = (longlong *)FUN_180007470(), local_698 != (longlong *)0x0))
        {
          GetLastError();
          local_678 = *local_698;
          (**(code **)(local_678 + 0x30))(local_698,1,0x12400);
        }
        CloseHandle(hDevice);
      }
      DefineDosDeviceW(2,local_660,(LPCWSTR)0x0);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_6f8);
  return;
}




void FUN_1800104e0(void)

{
  BOOL BVar1;
  longlong lVar2;
  _OSVERSIONINFOW *p_Var3;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined4 local_170;
  DWORD local_168;
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  _OSVERSIONINFOW local_138;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_198;
  local_158 = 0;
  p_Var3 = &local_138;
  for (lVar2 = 0x114; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOW *)((longlong)&p_Var3->dwOSVersionInfoSize + 1);
  }
  p_Var3 = &local_138;
  for (lVar2 = 0x114; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOW *)((longlong)&p_Var3->dwOSVersionInfoSize + 1);
  }
  local_138.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_138);
  if (BVar1 == 0) {
    local_150 = (longlong *)FUN_180007470();
    if (local_150 != (longlong *)0x0) {
      local_168 = GetLastError();
      local_148 = *local_150;
      local_170 = 0x437;
      local_178 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(local_148 + 0x30))(local_150,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
    local_158 = 0;
  }
  else if ((5 < local_138.dwMajorVersion) ||
          ((local_138.dwMajorVersion == 5 && (local_138.dwMinorVersion != 0)))) {
    local_158 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_198);
  return;
}




void FUN_180010600(WCHAR *param_1,undefined4 *param_2)

{
  WCHAR WVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_6e8 [32];
  WCHAR *local_698;
  longlong local_690;
  longlong local_688;
  DWORD local_680 [2];
  WCHAR *local_678;
  longlong *local_670;
  WCHAR *local_668;
  WCHAR *local_660;
  WCHAR *local_658;
  WCHAR WStack_64a;
  WCHAR local_648 [264];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_6e8;
  local_680[1] = 0;
  pWVar5 = local_648;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_228;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_438;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_680[0] = 0;
  local_658 = local_648;
  local_698 = local_658;
  local_678 = param_1;
  do {
    WVar1 = *local_678;
    *local_698 = WVar1;
    local_678 = local_678 + 1;
    local_698 = local_698 + 1;
  } while (WVar1 != L'\0');
  local_668 = local_648;
  local_690 = -1;
  lVar4 = local_690;
  do {
    local_690 = lVar4;
    lVar4 = local_690 + 1;
  } while (local_668[local_690 + 1] != L'\0');
  if (local_648[local_690] != L'\\') {
    local_660 = local_648;
    local_688 = -1;
    do {
      local_688 = local_688 + 1;
    } while (local_660[local_688] != L'\0');
    local_648[local_688] = L'\\';
  }
  BVar2 = GetVolumeInformationW
                    (local_648,local_228,0x104,local_680 + 1,(LPDWORD)0x0,local_680,local_438,0x104)
  ;
  if (BVar2 == 0) {
    GetLastError();
    local_670 = (longlong *)FUN_180007470();
    if (local_670 != (longlong *)0x0) {
      (**(code **)(*local_670 + 0x30))(local_670,1,0x12400,L"Boot:%S %d %s failed:%08X\n");
    }
    *param_2 = 0;
  }
  else {
    iVar3 = _wcsicmp(local_438,L"FAT");
    if (iVar3 == 0) {
      *param_2 = 1;
    }
    else {
      iVar3 = _wcsicmp(local_438,L"FAT32");
      if (iVar3 == 0) {
        *param_2 = 2;
      }
      else {
        iVar3 = _wcsicmp(local_438,L"NTFS");
        if (iVar3 == 0) {
          *param_2 = 4;
        }
        else {
          iVar3 = _wcsicmp(local_438,L"EXFAT");
          if (iVar3 == 0) {
            *param_2 = 3;
          }
          else {
            *param_2 = 0;
          }
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_6e8);
  return;
}




void FUN_180010940(int param_1,WCHAR *param_2,short *param_3)

{
  WCHAR WVar1;
  BOOL BVar2;
  HANDLE hDevice;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_718 [32];
  short local_6cc [2];
  int local_6c8;
  HANDLE local_6c0;
  DWORD local_6b8 [2];
  longlong local_6b0;
  longlong local_6a8;
  longlong local_6a0;
  longlong local_698;
  WCHAR *local_690;
  longlong *local_688;
  undefined1 *local_680;
  WCHAR *local_678;
  ulonglong local_670;
  undefined1 *local_668;
  longlong local_660;
  WCHAR *local_658;
  WCHAR *local_650;
  WCHAR *local_648;
  WCHAR *local_640;
  WCHAR *local_638;
  WCHAR WStack_62a;
  WCHAR local_628 [264];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_718;
  local_6c8 = 0;
  puVar4 = local_418;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_6b8[0] = 0;
  local_6c0 = (HANDLE)0xffffffffffffffff;
  local_6cc[0] = 0;
  pWVar5 = local_628;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_668 = local_418;
  local_680 = local_418;
  local_6c0 = FindFirstVolumeW(local_628,0x104);
  if (local_6c0 == (HANDLE)0xffffffffffffffff) {
    local_688 = (longlong *)FUN_180007470();
    if (local_688 != (longlong *)0x0) {
      GetLastError();
      local_660 = *local_688;
      (**(code **)(local_660 + 0x30))(local_688,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  else {
    do {
      local_658 = local_628;
      local_6b0 = -1;
      lVar3 = local_6b0;
      do {
        local_6b0 = lVar3;
        lVar3 = local_6b0 + 1;
      } while (local_658[lVar3] != L'\0');
      pWVar5 = local_628 + local_6b0;
      local_6b0 = lVar3;
      if (*pWVar5 == L'\\') {
        local_650 = local_628;
        local_6a8 = -1;
        do {
          local_6a8 = local_6a8 + 1;
        } while (local_650[local_6a8] != L'\0');
        local_670 = local_6a8 * 2 - 2;
        if (0x207 < local_670) {
          __report_rangecheckfailure();
        }
        *(undefined2 *)((longlong)local_628 + local_670) = 0;
      }
      hDevice = CreateFileW(local_628,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hDevice != (HANDLE)0xffffffffffffffff) {
        BVar2 = DeviceIoControl(hDevice,0x560000,(LPVOID)0x0,0,local_668,0x400,local_6b8,
                                (LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          CloseHandle(hDevice);
        }
        else if (param_1 == *(int *)(local_668 + 8)) {
          BVar2 = DeviceIoControl(hDevice,0x74004,(LPVOID)0x0,0,local_680,0x400,local_6b8,
                                  (LPOVERLAPPED)0x0);
          if (BVar2 == 1) {
            CloseHandle(hDevice);
            if (*(longlong *)(local_680 + 8) != 0) {
              FUN_18000f240(param_1,*(int *)(local_680 + 0x14),local_6cc);
              local_6c8 = 1;
              break;
            }
          }
          else {
            CloseHandle(hDevice);
          }
        }
        else {
          CloseHandle(hDevice);
        }
      }
      BVar2 = FindNextVolumeW(local_6c0,local_628,0x104);
    } while (BVar2 != 0);
  }
  if (local_6c8 == 1) {
    local_648 = local_628;
    local_6a0 = -1;
    lVar3 = local_6a0;
    do {
      local_6a0 = lVar3;
      lVar3 = local_6a0 + 1;
    } while (local_648[lVar3] != L'\0');
    if (local_628[local_6a0] != L'\\') {
      local_640 = local_628;
      local_698 = -1;
      do {
        local_698 = local_698 + 1;
      } while (local_640[local_698] != L'\0');
      local_628[local_698] = L'\\';
    }
    local_678 = local_628;
    local_690 = param_2;
    do {
      WVar1 = *local_678;
      *local_690 = WVar1;
      local_678 = local_678 + 1;
      local_690 = local_690 + 1;
    } while (WVar1 != L'\0');
    *param_3 = local_6cc[0];
    local_6a0 = lVar3;
    local_638 = param_2;
  }
  else {
    *param_2 = L'\0';
    *param_3 = 0;
  }
  if (local_6c0 != (HANDLE)0xffffffffffffffff) {
    FindVolumeClose(local_6c0);
    local_6c0 = (HANDLE)0xffffffffffffffff;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_718);
  return;
}




undefined4 FUN_180010e60(LPCWSTR param_1,ulonglong param_2,undefined4 *param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  DWORD *pDVar5;
  undefined4 local_38;
  ULARGE_INTEGER local_28;
  ULARGE_INTEGER local_20;
  longlong local_18;
  
  local_38 = 0;
  local_20.s.LowPart = 0;
  pDVar5 = &local_20.s.HighPart;
  for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pDVar5 = 0;
    pDVar5 = (DWORD *)((longlong)pDVar5 + 1);
  }
  local_28.s.LowPart = 0;
  pDVar5 = &local_28.s.HighPart;
  for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pDVar5 = 0;
    pDVar5 = (DWORD *)((longlong)pDVar5 + 1);
  }
  BVar1 = GetDiskFreeSpaceExW(param_1,&local_20,&local_28,(PULARGE_INTEGER)0x0);
  if (BVar1 == 0) {
    plVar3 = (longlong *)FUN_180007470();
    if (plVar3 != (longlong *)0x0) {
      DVar2 = GetLastError();
      local_18 = *plVar3;
      (**(code **)(local_18 + 0x30))
                (plVar3,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x527,param_1,DVar2);
    }
    local_38 = 0x52812500;
  }
  else if (CONCAT44(local_28.s.HighPart,local_28.s.LowPart) < param_2) {
    *param_3 = 1;
  }
  else if (CONCAT44(local_20.s.HighPart,local_20.s.LowPart) < param_2) {
    *param_3 = 2;
  }
  else {
    *param_3 = 0;
  }
  return local_38;
}




void FUN_180010fb0(undefined8 param_1,LPVOID param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hDevice;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStackY_298 [32];
  DWORD local_248 [2];
  longlong *local_240;
  longlong *local_238;
  longlong local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_298;
  pWVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_248[0] = 0;
  wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
  hDevice = CreateFileW(local_228,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_240 = (longlong *)FUN_180007470();
    if (local_240 != (longlong *)0x0) {
      GetLastError();
      local_230 = *local_240;
      (**(code **)(local_230 + 0x30))(local_240,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
    }
  }
  else {
    BVar1 = DeviceIoControl(hDevice,0x70000,(LPVOID)0x0,0,param_2,0x18,local_248,(LPOVERLAPPED)0x0);
    if (((BVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0x15)) &&
       (local_238 = (longlong *)FUN_180007470(), local_238 != (longlong *)0x0)) {
      (**(code **)(*local_238 + 0x30))(local_238,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_298);
  return;
}




undefined4 FUN_1800111f0(longlong param_1)

{
  uint local_18;
  longlong local_10;
  
  local_10 = param_1 + 0x1be;
  local_18 = 0;
  while( true ) {
    if (3 < local_18) {
      return 0;
    }
    if (*(char *)(local_10 + 4) == 'B') break;
    local_10 = local_10 + 0x10;
    local_18 = local_18 + 1;
  }
  return 1;
}




bool FUN_180011280(longlong param_1)

{
  return *(char *)(param_1 + 0x1c2) == -0x12;
}




void FUN_1800112e0(void *param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  void *local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_68;
  local_38 = 0xa0;
  local_37 = 0x60;
  local_36 = 0x9b;
  local_35 = 0xaf;
  local_34 = 0x31;
  local_33 = 0x14;
  local_32 = 0x62;
  local_31 = 0x4f;
  local_30 = 0xbc;
  local_2f = 0x68;
  local_2e = 0x33;
  local_2d = 0x11;
  local_2c = 0x71;
  local_2b = 0x4a;
  local_2a = 0x69;
  local_29 = 0xad;
  local_28 = 0xaa;
  local_27 = 200;
  local_26 = 8;
  local_25 = 0x58;
  local_24 = 0x8f;
  local_23 = 0x7e;
  local_22 = 0xe0;
  local_21 = 0x42;
  local_20 = 0x85;
  local_1f = 0xd2;
  local_1e = 0xe1;
  local_1d = 0xe9;
  local_1c = 4;
  local_1b = 0x34;
  local_1a = 0xcf;
  local_19 = 0xb3;
  local_48 = 0;
  local_40 = param_1;
  while (((local_48 < 0x80 && (iVar1 = memcmp(param_1,&local_38,0x10), iVar1 != 0)) &&
         (iVar1 = memcmp(param_1,&local_28,0x10), iVar1 != 0))) {
    local_48 = local_48 + 1;
  }
  local_44 = (uint)(local_48 < 0x80);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180011430(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 auStack_2b8 [32];
  char *local_298;
  char *local_290;
  undefined4 local_288;
  uint local_280;
  uint local_278;
  void *local_270;
  longlong *local_268;
  longlong *local_260;
  void *local_258;
  void *local_250;
  undefined4 local_248;
  undefined1 local_244 [16];
  uint local_234;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_2b8;
  local_270 = (void *)0x0;
  local_248 = 0;
  puVar4 = local_244;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_278 = 0;
  pWVar5 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_278 = FUN_180010fb0((ulonglong)param_1,&local_248);
  if ((local_278 & 0xfff) == 0) {
    if ((local_234 == 0) || (local_234 % 0x200 != 0)) {
      local_234 = 0x200;
    }
    local_270 = operator_new((ulonglong)(local_234 * 0x20));
    local_258 = local_270;
    if (local_270 == (void *)0x0) {
      local_278 = 0x5d81240a;
    }
    else {
      wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
      local_278 = FUN_180014b40(local_228,local_270,0,1);
      if ((local_278 & 0xfff) == 0) {
        bVar1 = FUN_180011280((longlong)local_270);
        if ((int)CONCAT71(extraout_var,bVar1) == 1) {
          local_278 = FUN_180014b40(local_228,local_270,2,0x20);
          if ((local_278 & 0xfff) == 0) {
            iVar2 = FUN_1800112e0(local_270);
            if (iVar2 == 1) {
              *param_2 = 3;
            }
            else {
              *param_2 = 1;
            }
          }
          else {
            local_260 = (longlong *)FUN_180007470();
            if (local_260 != (longlong *)0x0) {
              local_280 = local_278;
              local_288 = 0x5e9;
              local_290 = "BootGetDiskType";
              local_298 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
              (**(code **)(*local_260 + 0x30))
                        (local_260,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
            }
          }
        }
        else {
          iVar2 = FUN_1800111f0((longlong)local_270);
          if (iVar2 == 1) {
            *param_2 = 2;
          }
          else {
            *param_2 = 0;
          }
        }
      }
      else {
        local_268 = (longlong *)FUN_180007470();
        if (local_268 != (longlong *)0x0) {
          local_280 = local_278;
          local_288 = 0x5e0;
          local_290 = "BootGetDiskType";
          local_298 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
          (**(code **)(*local_268 + 0x30))(local_268,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
        }
      }
    }
  }
  if (local_270 != (void *)0x0) {
    local_250 = local_270;
    free(local_270);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2b8);
  return;
}




void FUN_180011720(uint param_1,LPCWSTR param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40;
  int local_38 [2];
  ulonglong local_30;
  undefined4 local_28;
  undefined4 auStack_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_18005e010 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_28 = 0;
  puVar3 = auStack_24;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((longlong)puVar3 + 1);
  }
  local_48 = 0;
  local_40 = local_40 & 0xffffffff00000000;
  puVar4 = (undefined1 *)((longlong)&local_40 + 4);
  for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_18000f020();
  if (iVar1 == 1) {
    local_48 = 0x620127c2;
  }
  else {
    puVar3 = &local_28;
    local_48 = FUN_180010fb0((ulonglong)param_1,puVar3);
    if (((local_48 & 0xfff) == 0) &&
       (local_48 = FUN_180016400(local_38,puVar3,param_3,param_4), (local_48 & 0xfff) == 0)) {
      if ((local_14 == 0x200) || (local_38[0] != 0)) {
        FUN_18000e9d0(param_2,&local_40);
        local_30 = (ulonglong)local_14;
        local_40 = 0x7f800000 / local_30;
        if ((longlong)(CONCAT44(auStack_24[0],local_28) * (ulonglong)local_1c * (ulonglong)local_18)
            < (longlong)local_40) {
          local_48 = 0x6461240b;
        }
      }
      else {
        local_48 = 0x633127c3;
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180011890(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_68;
  local_40 = 0x2d;
  local_3f = 0x46;
  local_3e = 0x56;
  local_3d = 0x45;
  local_3c = 0x2d;
  local_3b = 0x46;
  local_3a = 0x53;
  local_39 = 0x2d;
  local_38 = 0x78;
  local_37 = 0x78;
  local_36 = 0x78;
  local_35 = 0x78;
  local_34 = 0x78;
  local_33 = 0x78;
  local_32 = 0x78;
  local_31 = 0x78;
  local_30 = 0xff;
  local_2f = 0xff;
  local_2e = 0xff;
  local_2d = 0xff;
  local_2c = 0xff;
  local_2b = 0xff;
  local_2a = 0xff;
  local_29 = 0xff;
  local_28 = 0xff;
  local_27 = 0xff;
  local_26 = 0xff;
  local_25 = 0xff;
  local_24 = 0xff;
  local_23 = 0xff;
  local_22 = 0xff;
  local_21 = 0xff;
  local_20 = 0xff;
  local_1f = 0xff;
  local_1e = 0xff;
  local_1d = 0;
  local_1c = 0x1f;
  local_1b = 0x2c;
  local_48 = (void *)(param_1 + 3);
  iVar1 = memcmp(local_48,&local_40,8);
  if (iVar1 != 0) {
    local_48 = (void *)(param_1 + 0x1e0);
    memcmp(local_48,&local_38,0x1e);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_1800119e0(uint param_1,WCHAR *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  WCHAR *pWVar4;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  WCHAR local_2b4;
  void *local_2b0;
  WCHAR *local_2a8;
  longlong local_2a0;
  longlong local_298;
  WCHAR *local_290;
  ulonglong local_288;
  ulonglong local_280;
  WCHAR *local_278;
  WCHAR *local_270;
  void *local_268;
  ulonglong local_260;
  void *local_258;
  WCHAR *local_250;
  undefined4 local_248;
  undefined1 local_244 [16];
  uint local_234;
  WCHAR WStack_22a;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_2d8;
  local_280 = 0;
  local_2b0 = (void *)0x0;
  local_248 = 0;
  puVar3 = local_244;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_2b8 = 0;
  pWVar4 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_250 = local_228;
  local_2a8 = local_250;
  local_290 = param_2;
  do {
    local_2b4 = *local_290;
    *local_2a8 = local_2b4;
    local_290 = local_290 + 1;
    local_2a8 = local_2a8 + 1;
  } while (local_2b4 != L'\0');
  local_278 = local_228;
  local_2a0 = -1;
  lVar2 = local_2a0;
  do {
    local_2a0 = lVar2;
    lVar2 = local_2a0 + 1;
  } while (local_278[lVar2] != L'\0');
  pWVar4 = local_228 + local_2a0;
  local_2a0 = lVar2;
  if (*pWVar4 == L'\\') {
    local_270 = local_228;
    local_298 = -1;
    do {
      local_298 = local_298 + 1;
    } while (local_270[local_298] != L'\0');
    local_288 = local_298 * 2 - 2;
    if (0x207 < local_288) {
      __report_rangecheckfailure();
    }
    *(undefined2 *)((longlong)local_228 + local_288) = 0;
  }
  local_2b8 = FUN_1800125b0(local_228,&local_280);
  if (((local_2b8 & 0xfff) == 0) &&
     (local_2b8 = FUN_180010fb0((ulonglong)param_1,&local_248), (local_2b8 & 0xfff) == 0)) {
    if ((local_234 == 0) || (local_234 % 0x200 != 0)) {
      local_234 = 0x200;
    }
    local_2b0 = operator_new((ulonglong)local_234);
    local_268 = local_2b0;
    if (local_2b0 == (void *)0x0) {
      local_2b8 = 0x6941240a;
    }
    else {
      wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
      local_260 = (ulonglong)local_234;
      local_2b8 = FUN_180014b40(local_228,local_2b0,local_280 / local_260,1);
      if (((local_2b8 & 0xfff) == 0) && (iVar1 = FUN_180011890((longlong)local_2b0), iVar1 == 1)) {
        local_2b8 = 0x6a1127cb;
      }
    }
  }
  if (local_2b0 != (void *)0x0) {
    local_258 = local_2b0;
    free(local_2b0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2d8);
  return;
}




undefined4 FUN_180011cd0(ushort param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if ((param_1 < 0x41) || (0x5a < param_1)) {
    local_18 = 0x6be12460;
  }
  return local_18;
}




void FUN_180011d10(longlong param_1,LPCWSTR param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_298 [32];
  char *local_278;
  undefined4 local_270;
  int local_268;
  uint local_264;
  int local_260;
  longlong local_258;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_298;
  local_268 = 1;
  local_260 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  *param_3 = 0;
  local_264 = FUN_180034dd0(param_2,(undefined4 *)0x0,(undefined4 *)0x0);
  if (local_264 == 1) {
    iVar1 = FUN_18000e9d0(param_2,param_3);
    if (iVar1 == 0) {
      local_250 = (longlong *)FUN_180007470();
      if (local_250 != (longlong *)0x0) {
        local_270 = 0x6e1;
        local_278 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
        (**(code **)(*local_250 + 0x30))(local_250,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_268 = 0;
    }
  }
  else if ((local_264 < 2) || (3 < local_264)) {
    local_240 = (longlong *)FUN_180007470();
    if (local_240 != (longlong *)0x0) {
      local_270 = 0x704;
      local_278 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(*local_240 + 0x30))(local_240,1,0x12400,L"Boot:%S %d failed\n");
    }
    local_268 = 0;
  }
  else {
    local_258 = -1;
    do {
      local_258 = local_258 + 1;
    } while (*(short *)(param_1 + local_258 * 2) != 0);
    local_238 = param_1;
    if (*(short *)(param_1 + -2 + local_258 * 2) == 0x5c) {
      wsprintfW(local_228,L"%sBOOT\\%s");
    }
    else {
      wsprintfW(local_228,L"%s\\BOOT\\%s");
    }
    iVar1 = FUN_180028670(local_228,param_2,L"SOURCES/BOOT.WIM");
    if (iVar1 == 0) {
      local_260 = FUN_1800339c0(param_2,"SOURCES/BOOT.WIM");
      if (local_260 < 0) {
        local_248 = (longlong *)FUN_180007470();
        if (local_248 != (longlong *)0x0) {
          local_270 = 0x6fa;
          local_278 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
          (**(code **)(*local_248 + 0x30))(local_248,1,0x12400,L"Boot:%S %d failed\n");
        }
        local_268 = 0;
      }
      else {
        *param_3 = (longlong)local_260;
      }
    }
  }
  if (local_268 == 1) {
    *param_3 = (ulonglong)(*param_3 * 5) / 100 + *param_3;
  }
  *param_3 = 0x7f800000;
  local_268 = 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_298);
  return;
}




undefined4 FUN_180012030(LPCWSTR param_1,undefined4 *param_2)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hDevice;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 local_d8;
  uint local_d4;
  undefined1 *local_d0;
  DWORD local_c0 [2];
  longlong *local_b8;
  longlong *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  longlong *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  undefined1 *local_28;
  longlong local_20;
  undefined1 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_d0 = (undefined1 *)0x0;
  local_d8 = 0;
  local_d4 = 0x400;
  local_c0[0] = 0;
  hDevice = CreateFileW(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_b8 = (longlong *)FUN_180007470();
    if (local_b8 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_68 = *local_b8;
      (**(code **)(local_68 + 0x30))
                (local_b8,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x734,param_1,DVar1);
    }
    local_d8 = 0x7351242d;
  }
  else {
    iVar2 = FUN_1800104e0();
    if (iVar2 == 1) {
      local_a0 = (undefined1 *)0x0;
      local_70 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)operator_new(0x400);
      local_60 = local_d0;
      local_58 = local_d0;
      if (local_d0 == (undefined1 *)0x0) {
        local_a8 = (longlong *)FUN_180007470();
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 0x30))
                    (local_a8,1,0x12400,L"Boot:%S %d failed\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x74a);
        }
        local_d8 = 0x74b12408;
      }
      else {
        local_50 = 0x400;
        puVar6 = local_d0;
        for (lVar4 = local_50; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        local_70 = local_d0 + 0x20;
        local_a0 = local_d0;
        BVar3 = DeviceIoControl(hDevice,0x700a0,(LPVOID)0x0,0,local_d0,0x400,local_c0,
                                (LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          local_98 = (longlong *)FUN_180007470();
          if (local_98 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_48 = *local_98;
            (**(code **)(local_48 + 0x30))
                      (local_98,1,0x12400,L"Boot:%S %d failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x763,DVar1);
          }
          local_d8 = 0x76412500;
        }
        else {
          *param_2 = *(undefined4 *)(local_70 + 8);
          local_d8 = 0;
        }
      }
    }
    else {
      local_80 = (undefined1 *)0x0;
      do {
        local_d0 = (undefined1 *)operator_new((ulonglong)local_d4);
        local_40 = local_d0;
        local_38 = local_d0;
        if (local_d0 == (undefined1 *)0x0) {
          local_88 = (longlong *)FUN_180007470();
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 0x30))
                      (local_88,1,0x12400,L"Boot:%S %d failed\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x77a);
          }
          local_d8 = 0x77b12408;
          break;
        }
        local_30 = (ulonglong)local_d4;
        puVar6 = local_d0;
        for (uVar5 = local_30; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        local_80 = local_d0;
        BVar3 = DeviceIoControl(hDevice,0x7400c,(LPVOID)0x0,0,local_d0,local_d4,local_c0,
                                (LPOVERLAPPED)0x0);
        if (BVar3 != 0) {
          *param_2 = *(undefined4 *)(local_80 + 4);
          local_d8 = 0;
          break;
        }
        DVar1 = GetLastError();
        if (DVar1 != 0x7a) {
          local_78 = (longlong *)FUN_180007470();
          if (local_78 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_20 = *local_78;
            (**(code **)(local_20 + 0x30))
                      (local_78,1,0x12400,L"Boot:%S %d failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x79a,DVar1);
          }
          local_d8 = 0x79b12500;
          break;
        }
        local_d4 = local_d4 << 1;
        local_28 = local_d0;
        free(local_d0);
        local_d0 = (undefined1 *)0x0;
      } while (local_d4 < 0x100000);
    }
  }
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hDevice);
  }
  if (local_d0 != (undefined1 *)0x0) {
    local_18 = local_d0;
    free(local_d0);
  }
  return local_d8;
}




void FUN_1800125b0(LPCWSTR param_1,undefined8 *param_2)

{
  BOOL BVar1;
  HANDLE hDevice;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStackY_498 [32];
  DWORD local_448 [2];
  longlong *local_440;
  longlong *local_438;
  undefined1 *local_430;
  longlong local_428;
  longlong local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_498;
  puVar3 = local_418;
  for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_448[0] = 0;
  local_430 = local_418;
  hDevice = CreateFileW(param_1,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_440 = (longlong *)FUN_180007470();
    if (local_440 != (longlong *)0x0) {
      GetLastError();
      local_428 = *local_440;
      (**(code **)(local_428 + 0x30))(local_440,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
    }
  }
  else {
    BVar1 = DeviceIoControl(hDevice,0x560000,(LPVOID)0x0,0,local_430,0x400,local_448,
                            (LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_438 = (longlong *)FUN_180007470();
      if (local_438 != (longlong *)0x0) {
        GetLastError();
        local_420 = *local_438;
        (**(code **)(local_420 + 0x30))(local_438,1,0x12400,L"Boot:%S %d failed:%08X\n");
      }
    }
    else {
      *param_2 = *(undefined8 *)(local_430 + 0x10);
    }
  }
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_498);
  return;
}




void FUN_180012800(LPCWSTR param_1)

{
  WCHAR WVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  _WIN32_FIND_DATAW *p_Var5;
  short *psVar6;
  WCHAR *pWVar7;
  undefined1 auStack_7a8 [32];
  char *local_788;
  undefined4 local_780;
  WCHAR *local_778;
  DWORD local_770;
  DWORD local_768;
  uint local_758;
  WCHAR local_754;
  WCHAR local_752;
  short *local_750;
  WCHAR *local_748;
  WCHAR *local_740;
  DWORD local_738;
  HANDLE local_730;
  WCHAR *local_728;
  WCHAR *local_720;
  LPCWSTR local_718;
  longlong *local_710;
  LPCWSTR local_708;
  longlong *local_700;
  longlong *local_6f8;
  longlong *local_6f0;
  longlong *local_6e8;
  longlong *local_6e0;
  longlong *local_6d8;
  longlong *local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  WCHAR *local_6a8;
  WCHAR *local_6a0;
  _WIN32_FIND_DATAW local_698;
  WCHAR local_448 [263];
  short sStack_23a;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_7a8;
  local_738 = 0;
  local_758 = 0;
  p_Var5 = &local_698;
  for (lVar3 = 0x250; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var5->dwFileAttributes = 0;
    p_Var5 = (_WIN32_FIND_DATAW *)((longlong)&p_Var5->dwFileAttributes + 1);
  }
  local_730 = (HANDLE)0xffffffffffffffff;
  pWVar7 = local_238;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  pWVar7 = local_448;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  local_6a8 = local_238;
  local_728 = local_6a8;
  local_718 = param_1;
  do {
    local_754 = *local_718;
    *local_728 = local_754;
    local_718 = local_718 + 1;
    local_728 = local_728 + 1;
  } while (local_754 != L'\0');
  local_750 = &sStack_23a;
  do {
    local_750 = local_750 + 1;
  } while (*local_750 != 0);
  puVar4 = &DAT_180041234;
  psVar6 = local_750;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)psVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    psVar6 = (short *)((longlong)psVar6 + 1);
  }
  local_730 = FindFirstFileW(local_238,&local_698);
  if (local_730 == (HANDLE)0xffffffffffffffff) {
    local_758 = 0x80212500;
    local_710 = (longlong *)FUN_180007470();
    if (local_710 != (longlong *)0x0) {
      local_768 = GetLastError();
      local_6c8 = *local_710;
      local_770 = local_758;
      local_778 = local_238;
      local_780 = 0x804;
      local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(local_6c8 + 0x30))
                (local_710,1,0x12400,L"%S %d FindFirstFile:%s nRes=0x%x,GetLastError=%d\n");
    }
  }
  else {
    do {
      if (local_698.cFileName[0] != L'.') {
        local_6a0 = local_448;
        local_720 = local_6a0;
        local_708 = param_1;
        do {
          local_752 = *local_708;
          *local_720 = local_752;
          local_708 = local_708 + 1;
          local_720 = local_720 + 1;
        } while (local_752 != L'\0');
        local_748 = local_698.cAlternateFileName + 0xd;
        do {
          local_748 = local_748 + 1;
        } while (*local_748 != L'\0');
        puVar4 = &DAT_1800411f4;
        pWVar7 = local_748;
        for (lVar3 = 4; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined1 *)pWVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
        }
        local_740 = local_698.cAlternateFileName + 0xd;
        do {
          local_740 = local_740 + 1;
        } while (*local_740 != L'\0');
        lVar3 = 0;
        do {
          WVar1 = local_698.cFileName[lVar3];
          local_740[lVar3] = WVar1;
          lVar3 = lVar3 + 1;
        } while (WVar1 != L'\0');
        local_758 = FUN_180013520(local_448);
        if ((local_758 & 0xfff) != 0) {
          local_700 = (longlong *)FUN_180007470();
          if (local_700 != (longlong *)0x0) {
            local_780 = 0x815;
            local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
            (**(code **)(*local_700 + 0x30))(local_700,1,0x12400,L"Boot:%S %d failed\n");
          }
          break;
        }
        if ((local_698.dwFileAttributes & 0x10) == 0) {
          BVar2 = DeleteFileW(local_448);
          if (BVar2 == 0) {
            local_758 = 0x8251250d;
            local_6f0 = (longlong *)FUN_180007470();
            if (local_6f0 != (longlong *)0x0) {
              local_770 = GetLastError();
              local_6c0 = *local_6f0;
              local_778 = (WCHAR *)CONCAT44(local_778._4_4_,local_758);
              local_780 = 0x826;
              local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
              (**(code **)(local_6c0 + 0x30))
                        (local_6f0,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n");
            }
            break;
          }
        }
        else {
          local_758 = FUN_180012800(local_448);
          if ((local_758 & 0xfff) != 0) {
            local_6f8 = (longlong *)FUN_180007470();
            if (local_6f8 != (longlong *)0x0) {
              local_778 = (WCHAR *)CONCAT44(local_778._4_4_,local_758);
              local_780 = 0x81d;
              local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
              (**(code **)(*local_6f8 + 0x30))(local_6f8,1,0x12400,L"%S %d nRes=0x%x\n");
            }
            break;
          }
        }
      }
      BVar2 = FindNextFileW(local_730,&local_698);
    } while (BVar2 != 0);
    if ((local_758 & 0xfff) == 0) {
      local_738 = GetLastError();
      if (local_738 == 0x12) {
        local_758 = FUN_180013520(param_1);
        if ((local_758 & 0xfff) == 0) {
          BVar2 = RemoveDirectoryW(param_1);
          if (BVar2 == 0) {
            local_758 = 0x8401250d;
            local_6d0 = (longlong *)FUN_180007470();
            if (local_6d0 != (longlong *)0x0) {
              local_770 = GetLastError();
              local_6b0 = *local_6d0;
              local_778 = (WCHAR *)CONCAT44(local_778._4_4_,local_758);
              local_780 = 0x841;
              local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
              (**(code **)(local_6b0 + 0x30))
                        (local_6d0,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n");
            }
          }
        }
        else {
          local_6d8 = (longlong *)FUN_180007470();
          if (local_6d8 != (longlong *)0x0) {
            local_780 = 0x83b;
            local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
            (**(code **)(*local_6d8 + 0x30))(local_6d8,1,0x12400,L"Boot:%S %d failed\n");
          }
        }
      }
      else {
        local_758 = 0x83312500;
        local_6e0 = (longlong *)FUN_180007470();
        if (local_6e0 != (longlong *)0x0) {
          local_770 = GetLastError();
          local_6b8 = *local_6e0;
          local_778 = (WCHAR *)CONCAT44(local_778._4_4_,local_758);
          local_780 = 0x834;
          local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
          (**(code **)(local_6b8 + 0x30))(local_6e0,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n");
        }
      }
    }
    else {
      local_6e8 = (longlong *)FUN_180007470();
      if (local_6e8 != (longlong *)0x0) {
        local_778 = (WCHAR *)CONCAT44(local_778._4_4_,local_758);
        local_780 = 0x82d;
        local_788 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
        (**(code **)(*local_6e8 + 0x30))(local_6e8,1,0x12400,L"%S %d nRes=0x%x\n");
      }
    }
  }
  if (local_730 != (HANDLE)0xffffffffffffffff) {
    FindClose(local_730);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_7a8);
  return;
}




uint FUN_180012f80(LPCWSTR param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong *plVar4;
  uint local_48;
  
  local_48 = FUN_180013520(param_1);
  if ((local_48 & 0xfff) != 0) {
    plVar4 = (longlong *)FUN_180007470();
    if (plVar4 == (longlong *)0x0) {
      return local_48;
    }
    (**(code **)(*plVar4 + 0x30))
              (plVar4,1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x858);
    return local_48;
  }
  iVar1 = FUN_18000e5e0(param_2);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      local_48 = FUN_180013520(param_2);
      if ((local_48 & 0xfff) != 0) {
        plVar4 = (longlong *)FUN_180007470();
        if (plVar4 == (longlong *)0x0) {
          return local_48;
        }
        (**(code **)(*plVar4 + 0x30))
                  (plVar4,1,0x12400,L"Boot:%S %d failed\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x868);
        return local_48;
      }
      BVar2 = DeleteFileW(param_2);
      if (BVar2 == 0) {
        plVar4 = (longlong *)FUN_180007470();
        if (plVar4 == (longlong *)0x0) {
          return 0x86e1250d;
        }
        DVar3 = GetLastError();
        (**(code **)(*plVar4 + 0x30))
                  (plVar4,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x86f,0x86e1250d,DVar3);
        return 0x86e1250d;
      }
    }
    else {
      local_48 = FUN_180012800(param_2);
    }
    if ((local_48 & 0xfff) != 0) {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 == (longlong *)0x0) {
        return local_48;
      }
      (**(code **)(*plVar4 + 0x30))
                (plVar4,1,0x12400,L"Boot:%S %d failed\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x875);
      return local_48;
    }
  }
  BVar2 = MoveFileW(param_1,param_2);
  if (BVar2 == 0) {
    plVar4 = (longlong *)FUN_180007470();
    if (plVar4 != (longlong *)0x0) {
      DVar3 = GetLastError();
      (**(code **)(*plVar4 + 0x30))
                (plVar4,1,0x12400,L"Boot:%S %d GetLastError:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x87c,DVar3);
    }
    local_48 = 0x87d1250c;
  }
  return local_48;
}




undefined4 FUN_180013260(LPCWSTR param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined2 local_58 [2];
  undefined4 local_54;
  DWORD local_50;
  HANDLE local_48;
  DWORD local_40 [2];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_58[0] = 0;
  local_54 = 0;
  local_48 = (HANDLE)0xffffffffffffffff;
  local_50 = 0;
  local_40[0] = 0;
  local_50 = GetFileAttributesW(param_1);
  if (local_50 == 0xffffffff) {
    local_38 = (longlong *)FUN_180007470();
    if (local_38 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_20 = *local_38;
      (**(code **)(local_20 + 0x30))
                (local_38,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x898,param_1,DVar1);
    }
    local_54 = 0x89912500;
  }
  else if ((local_50 & 0x800) == 0x800) {
    local_48 = CreateFileW(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (local_48 == (HANDLE)0xffffffffffffffff) {
      local_30 = (longlong *)FUN_180007470();
      if (local_30 != (longlong *)0x0) {
        DVar1 = GetLastError();
        local_18 = *local_30;
        (**(code **)(local_18 + 0x30))
                  (local_30,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x8ab,param_1,DVar1);
      }
      local_54 = 0x8ac12504;
    }
    else {
      local_58[0] = 0;
      BVar2 = DeviceIoControl(local_48,0x9c040,local_58,2,(LPVOID)0x0,0,local_40,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_28 = (longlong *)FUN_180007470();
        if (local_28 != (longlong *)0x0) {
          DVar1 = GetLastError();
          local_10 = *local_28;
          (**(code **)(local_10 + 0x30))
                    (local_28,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x8ba,param_1,DVar1);
        }
        local_54 = 0x8bb12500;
      }
    }
  }
  if (local_48 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_48);
  }
  return local_54;
}




uint FUN_180013520(LPCWSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  longlong *plVar4;
  uint local_48;
  
  local_48 = 0;
  iVar1 = FUN_18000e5e0(param_1);
  if (iVar1 == 0) {
    local_48 = 0x8d912474;
  }
  else {
    DVar2 = GetFileAttributesW(param_1);
    if (DVar2 == 0xffffffff) {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        DVar2 = GetLastError();
        (**(code **)(*plVar4 + 0x30))
                  (plVar4,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x8e0,param_1,DVar2);
      }
      local_48 = 0x8e112500;
    }
    else if (((DVar2 & 1) == 0) ||
            (BVar3 = SetFileAttributesW(param_1,DVar2 & 0xfffffffe), BVar3 != 0)) {
      if (((DVar2 & 0x4000) == 0) || (BVar3 = DecryptFileW(param_1,0), BVar3 != 0)) {
        if ((DVar2 & 0x800) != 0) {
          local_48 = FUN_180013260(param_1);
        }
      }
      else {
        plVar4 = (longlong *)FUN_180007470();
        if (plVar4 != (longlong *)0x0) {
          DVar2 = GetLastError();
          (**(code **)(*plVar4 + 0x30))
                    (plVar4,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x8f5,param_1,DVar2);
        }
        local_48 = 0x8f612500;
      }
    }
    else {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        DVar2 = GetLastError();
        (**(code **)(*plVar4 + 0x30))
                  (plVar4,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x8ea,param_1,DVar2);
      }
      local_48 = 0x8eb12500;
    }
  }
  return local_48;
}




uint FUN_180013790(ushort param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  __uint64 _Var4;
  uint uVar5;
  uint local_c4;
  undefined4 uVar6;
  uint uVar7;
  uint local_b0;
  uint local_ac;
  void *local_a8;
  int local_a0;
  void *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  void *local_50;
  longlong local_48;
  void *local_40;
  ulonglong local_38;
  void *local_30;
  longlong local_28;
  void *local_20;
  void *local_18;
  
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0;
  uVar6 = 0;
  plVar3 = (longlong *)FUN_180017830("EnumDisk");
  if (plVar3 == (longlong *)0x0) {
    uVar5 = 0x91f12405;
    local_90 = (longlong *)FUN_180007470();
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x30))
                (local_90,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                 "BootGetDynamicPartitionType",0x920,uVar5);
    }
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_b0);
    if ((uVar5 & 0xfff) == 0) {
      if (local_b0 != 0) {
        local_58 = CONCAT44(0,local_b0);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_58;
        _Var4 = SUB168(ZEXT816(0x128) * auVar1,0);
        if (SUB168(ZEXT816(0x128) * auVar1,8) != 0) {
          _Var4 = 0xffffffffffffffff;
        }
        local_98 = operator_new(_Var4);
        local_50 = local_98;
        if (local_98 == (void *)0x0) {
          uVar5 = 0x93212408;
          local_80 = (longlong *)FUN_180007470();
          if (local_80 != (longlong *)0x0) {
            (**(code **)(*local_80 + 0x30))
                      (local_80,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                       "BootGetDynamicPartitionType",0x933,uVar5,uVar5,uVar6);
          }
        }
        else {
          uVar5 = (**(code **)(*plVar3 + 0x48))(plVar3,local_98,local_b0);
          if ((uVar5 & 0xfff) == 0) {
            for (local_c4 = 0; local_c4 < local_b0; local_c4 = local_c4 + 1) {
              local_48 = *plVar3;
              uVar5 = (**(code **)(local_48 + 0x80))
                                (plVar3,*(undefined4 *)
                                         ((longlong)local_98 + (ulonglong)local_c4 * 0x128),
                                 &local_ac);
              if (((uVar5 & 0xfff) == 0) && (local_ac != 0)) {
                if (local_a8 != (void *)0x0) {
                  local_40 = local_a8;
                  free(local_a8);
                  local_a8 = (void *)0x0;
                }
                local_38 = CONCAT44(0,local_ac);
                auVar2._8_8_ = 0;
                auVar2._0_8_ = local_38;
                _Var4 = SUB168(ZEXT816(0x140) * auVar2,0);
                if (SUB168(ZEXT816(0x140) * auVar2,8) != 0) {
                  _Var4 = 0xffffffffffffffff;
                }
                local_a8 = operator_new(_Var4);
                local_30 = local_a8;
                if (local_a8 == (void *)0x0) {
                  uVar5 = 0x95212408;
                  local_70 = (longlong *)FUN_180007470();
                  if (local_70 != (longlong *)0x0) {
                    (**(code **)(*local_70 + 0x30))
                              (local_70,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                               "BootGetDynamicPartitionType",0x953,uVar5);
                  }
                  break;
                }
                local_28 = *plVar3;
                uVar5 = (**(code **)(local_28 + 0x50))
                                  (plVar3,*(undefined4 *)
                                           ((longlong)local_98 + (ulonglong)local_c4 * 0x128),
                                   local_a8,local_ac);
                if ((uVar5 & 0xfff) == 0) {
                  for (uVar7 = 0; uVar7 < local_ac; uVar7 = uVar7 + 1) {
                    if (param_1 == *(byte *)((longlong)local_a8 + (ulonglong)uVar7 * 0x140 + 0x134))
                    {
                      *param_2 = (uint)(*(ushort *)
                                         ((longlong)local_a8 + (ulonglong)uVar7 * 0x140 + 0x13a) >>
                                       9);
                      local_a0 = 1;
                      break;
                    }
                  }
                  if (local_a0 != 0) break;
                }
                else {
                  local_68 = (longlong *)FUN_180007470();
                  if (local_68 != (longlong *)0x0) {
                    (**(code **)(*local_68 + 0x30))
                              (local_68,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                               "BootGetDynamicPartitionType",0x95a,uVar5);
                  }
                }
              }
            }
            if (local_a0 == 0) {
              uVar5 = 0x97012460;
              local_60 = (longlong *)FUN_180007470();
              if (local_60 != (longlong *)0x0) {
                (**(code **)(*local_60 + 0x30))
                          (local_60,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                           "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                           "BootGetDynamicPartitionType",0x971,uVar5);
              }
            }
          }
          else {
            local_78 = (longlong *)FUN_180007470();
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x30))
                        (local_78,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                         "BootGetDynamicPartitionType",0x93a,uVar5);
            }
          }
        }
      }
    }
    else {
      local_88 = (longlong *)FUN_180007470();
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x30))
                  (local_88,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",
                   "BootGetDynamicPartitionType",0x927,uVar5);
      }
    }
  }
  if (local_a8 != (void *)0x0) {
    local_20 = local_a8;
    free(local_a8);
  }
  if (local_98 != (void *)0x0) {
    local_18 = local_98;
    free(local_98);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)*plVar3)(plVar3);
  }
  return uVar5;
}




void FUN_180013e60(undefined2 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  uint *puVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_4b8 [32];
  DWORD local_474;
  longlong *local_470;
  longlong *local_468;
  HANDLE local_460;
  uint *local_458;
  longlong local_450;
  longlong local_448;
  WCHAR local_440 [4];
  undefined2 uStack_438;
  uint local_428 [256];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_4b8;
  puVar4 = local_428;
  for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (uint *)((longlong)puVar4 + 1);
  }
  local_474 = 0;
  pwVar3 = L"\\\\.\\X:";
  pWVar5 = local_440;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pWVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_458 = local_428;
  uStack_438 = param_1;
  local_460 = CreateFileW(local_440,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (local_460 == (HANDLE)0xffffffffffffffff) {
    local_470 = (longlong *)FUN_180007470();
    if (local_470 != (longlong *)0x0) {
      GetLastError();
      local_450 = *local_470;
      (**(code **)(local_450 + 0x30))(local_470,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
    }
  }
  else {
    BVar1 = DeviceIoControl(local_460,0x560000,(LPVOID)0x0,0,local_458,0x400,&local_474,
                            (LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_468 = (longlong *)FUN_180007470();
      if (local_468 != (longlong *)0x0) {
        GetLastError();
        local_448 = *local_468;
        (**(code **)(local_448 + 0x30))(local_468,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
      }
    }
    else if (*local_458 < 2) {
      *param_2 = 0;
    }
    else {
      *param_2 = 1;
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_4b8);
  return;
}




int FUN_1800140b0(LPCWSTR param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  longlong lVar3;
  LONG *pLVar4;
  undefined8 local_res10;
  int local_res18;
  undefined8 local_res20;
  LARGE_INTEGER local_118;
  DWORD local_110 [2];
  HANDLE local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  LARGE_INTEGER local_98;
  longlong *local_90;
  int *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  LARGE_INTEGER local_48;
  longlong local_40;
  longlong local_38;
  LARGE_INTEGER local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_100 = 0;
  local_fc = 0;
  local_110[0] = 0;
  local_98.QuadPart = 0;
  local_108 = (HANDLE)0xffffffffffffffff;
  local_88 = (int *)&local_res10;
  local_118.QuadPart = local_118.QuadPart & 0xffffffff00000000;
  pLVar4 = &local_118.s.HighPart;
  for (lVar3 = 4; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pLVar4 = 0;
    pLVar4 = (LONG *)((longlong)pLVar4 + 1);
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_108 = CreateFileW(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (local_108 == (HANDLE)0xffffffffffffffff) {
    local_f8 = (longlong *)FUN_180007470();
    if (local_f8 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_80 = *local_f8;
      (**(code **)(local_80 + 0x30))
                (local_f8,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x9e6,param_1,DVar1);
    }
    local_fc = -1;
  }
  else {
    do {
      while( true ) {
        do {
          BVar2 = ReadFile(local_108,&local_100,4,local_110,(LPOVERLAPPED)0x0);
          if ((BVar2 == 0) || (local_110[0] != 4)) {
            local_f0 = (longlong *)FUN_180007470();
            if (local_f0 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_78 = *local_f0;
              (**(code **)(local_78 + 0x30))
                        (local_f0,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x9f0,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
          local_118.QuadPart = 0;
          BVar2 = SetFilePointerEx(local_108,(LARGE_INTEGER)0x0,&local_118,1);
          if (BVar2 == 0) {
            local_e8 = (longlong *)FUN_180007470();
            if (local_e8 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_70 = *local_e8;
              (**(code **)(local_70 + 0x30))
                        (local_e8,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x9f7,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
          local_98.s = local_118.s;
        } while (local_100 != *local_88);
        BVar2 = ReadFile(local_108,&local_100,4,local_110,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (local_110[0] != 4)) {
          local_e0 = (longlong *)FUN_180007470();
          if (local_e0 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_68 = *local_e0;
            (**(code **)(local_68 + 0x30))
                      (local_e0,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa02,param_1,DVar1)
            ;
          }
          goto LAB_180014b15;
        }
        if (local_100 != local_88[1]) break;
        local_118.QuadPart = 0x10;
        BVar2 = SetFilePointerEx(local_108,(LARGE_INTEGER)0x10,(PLARGE_INTEGER)0x0,1);
        if (BVar2 == 0) {
          local_d8 = (longlong *)FUN_180007470();
          if (local_d8 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_60 = *local_d8;
            (**(code **)(local_60 + 0x30))
                      (local_d8,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa0c,param_1,DVar1)
            ;
          }
          goto LAB_180014b15;
        }
        BVar2 = ReadFile(local_108,&local_100,4,local_110,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (local_110[0] != 4)) {
          local_d0 = (longlong *)FUN_180007470();
          if (local_d0 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_58 = *local_d0;
            (**(code **)(local_58 + 0x30))
                      (local_d0,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa12,param_1,DVar1)
            ;
          }
          goto LAB_180014b15;
        }
        if (local_100 == local_res18) {
          local_fc = local_fc + 1;
          local_118.QuadPart = 0;
          BVar2 = SetFilePointerEx(local_108,(LARGE_INTEGER)0x0,&local_118,1);
          if (BVar2 == 0) {
            local_c8 = (longlong *)FUN_180007470();
            if (local_c8 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_50 = *local_c8;
              (**(code **)(local_50 + 0x30))
                        (local_c8,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa1d,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
          local_48.QuadPart = local_118.QuadPart + -0x1c;
          local_30.QuadPart = local_118.QuadPart + -4;
          local_118.QuadPart = local_48.QuadPart;
          BVar2 = SetFilePointerEx(local_108,local_48,(PLARGE_INTEGER)0x0,0);
          if (BVar2 == 0) {
            local_c0 = (longlong *)FUN_180007470();
            if (local_c0 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_40 = *local_c0;
              (**(code **)(local_40 + 0x30))
                        (local_c0,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa26,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
          BVar2 = WriteFile(local_108,&local_res20,8,local_110,(LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            local_b8 = (longlong *)FUN_180007470();
            if (local_b8 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_38 = *local_b8;
              (**(code **)(local_38 + 0x30))
                        (local_b8,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa2b,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
          local_118 = local_30;
          BVar2 = SetFilePointerEx(local_108,local_30,(PLARGE_INTEGER)0x0,0);
          if (BVar2 == 0) {
            local_b0 = (longlong *)FUN_180007470();
            if (local_b0 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_28 = *local_b0;
              (**(code **)(local_28 + 0x30))
                        (local_b0,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa32,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
          BVar2 = WriteFile(local_108,&stack0x00000028,4,local_110,(LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            local_a8 = (longlong *)FUN_180007470();
            if (local_a8 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_20 = *local_a8;
              (**(code **)(local_20 + 0x30))
                        (local_a8,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa37,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
        }
        else {
          local_118 = local_98;
          BVar2 = SetFilePointerEx(local_108,local_98,(PLARGE_INTEGER)0x0,0);
          if (BVar2 == 0) {
            local_a0 = (longlong *)FUN_180007470();
            if (local_a0 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_18 = *local_a0;
              (**(code **)(local_18 + 0x30))
                        (local_a0,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa40,param_1,
                         DVar1);
            }
            goto LAB_180014b15;
          }
        }
      }
      local_118 = local_98;
      BVar2 = SetFilePointerEx(local_108,local_98,(PLARGE_INTEGER)0x0,0);
    } while (BVar2 != 0);
    local_90 = (longlong *)FUN_180007470();
    if (local_90 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_10 = *local_90;
      (**(code **)(local_10 + 0x30))
                (local_90,1,0x12400,L"Boot:%S %d %s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xa4a,param_1,DVar1);
    }
  }
LAB_180014b15:
  if (local_108 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_108);
  }
  return local_fc;
}




void FUN_180014b40(WCHAR *param_1,LPVOID param_2,longlong param_3,int param_4)

{
  WCHAR WVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined1 *puVar5;
  WCHAR *pWVar6;
  undefined1 auStackY_338 [32];
  HANDLE local_2e8;
  DWORD local_2e0 [2];
  WCHAR *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  DWORD local_2b8 [2];
  WCHAR *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  ulonglong local_288;
  WCHAR *local_280;
  WCHAR *local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  WCHAR *local_250;
  undefined4 local_248;
  undefined1 local_244 [16];
  uint local_234;
  WCHAR WStack_22a;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_338;
  local_2e0[0] = 0;
  local_258 = 0;
  local_2b8[0] = 0;
  local_2c0 = local_2c0 & 0xffffffff00000000;
  puVar5 = (undefined1 *)((longlong)&local_2c0 + 4);
  for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_248 = 0;
  puVar5 = local_244;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pWVar6 = local_228;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  local_2e8 = (HANDLE)0xffffffffffffffff;
  if (((param_1 != (WCHAR *)0x0) && (param_2 != (LPVOID)0x0)) && (param_4 != 0)) {
    local_250 = local_228;
    local_2d8 = local_250;
    local_2b0 = param_1;
    do {
      WVar1 = *local_2b0;
      *local_2d8 = WVar1;
      local_2b0 = local_2b0 + 1;
      local_2d8 = local_2d8 + 1;
    } while (WVar1 != L'\0');
    local_280 = local_228;
    local_2d0 = -1;
    lVar4 = local_2d0;
    do {
      local_2d0 = lVar4;
      lVar4 = local_2d0 + 1;
    } while (local_280[lVar4] != L'\0');
    pWVar6 = local_228 + local_2d0;
    local_2d0 = lVar4;
    if (*pWVar6 == L'\\') {
      local_278 = local_228;
      local_2c8 = -1;
      do {
        local_2c8 = local_2c8 + 1;
      } while (local_278[local_2c8] != L'\0');
      local_288 = local_2c8 * 2 - 2;
      if (0x207 < local_288) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_228 + local_288) = 0;
    }
    local_2e8 = CreateFileW(local_228,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_2e8 == (HANDLE)0xffffffffffffffff) {
      local_2a8 = (longlong *)FUN_180007470();
      if (local_2a8 != (longlong *)0x0) {
        GetLastError();
        local_270 = *local_2a8;
        (**(code **)(local_270 + 0x30))(local_2a8,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
      }
    }
    else {
      BVar2 = DeviceIoControl(local_2e8,0x70000,(LPVOID)0x0,0,&local_248,0x18,local_2b8,
                              (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if ((DVar3 != 0x15) &&
           (local_2a0 = (longlong *)FUN_180007470(), local_2a0 != (longlong *)0x0)) {
          (**(code **)(*local_2a0 + 0x30))(local_2a0,1,0x12400,L"Boot:%S %d failed:%08X\n");
        }
      }
      else {
        if ((local_234 == 0) || (local_234 % 0x200 != 0)) {
          local_234 = 0x200;
        }
        local_2c0 = param_3 * (ulonglong)local_234;
        DVar3 = SetFilePointer(local_2e8,(LONG)local_2c0,(PLONG)((longlong)&local_2c0 + 4),0);
        if (DVar3 == 0xffffffff) {
          local_298 = (longlong *)FUN_180007470();
          if (local_298 != (longlong *)0x0) {
            GetLastError();
            local_268 = *local_298;
            (**(code **)(local_268 + 0x30))(local_298,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
        }
        else {
          BVar2 = ReadFile(local_2e8,param_2,local_234 * param_4,local_2e0,(LPOVERLAPPED)0x0);
          if (((BVar2 == 0) || (local_2e0[0] != local_234 * param_4)) &&
             (local_290 = (longlong *)FUN_180007470(), local_290 != (longlong *)0x0)) {
            GetLastError();
            local_260 = *local_290;
            (**(code **)(local_260 + 0x30))(local_290,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
        }
      }
    }
  }
  if (local_2e8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_2e8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_338);
  return;
}




void FUN_1800150f0(WCHAR *param_1,LPCVOID param_2,longlong param_3,int param_4)

{
  WCHAR WVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined1 *puVar5;
  WCHAR *pWVar6;
  undefined1 auStackY_338 [32];
  HANDLE local_2e8;
  DWORD local_2e0 [2];
  WCHAR *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  DWORD local_2b8 [2];
  WCHAR *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  ulonglong local_288;
  WCHAR *local_280;
  WCHAR *local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  WCHAR *local_250;
  undefined4 local_248;
  undefined1 local_244 [16];
  uint local_234;
  WCHAR WStack_22a;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_338;
  local_258 = 0;
  local_2e0[0] = 0;
  local_2b8[0] = 0;
  local_2c0 = local_2c0 & 0xffffffff00000000;
  puVar5 = (undefined1 *)((longlong)&local_2c0 + 4);
  for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_248 = 0;
  puVar5 = local_244;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pWVar6 = local_228;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  local_2e8 = (HANDLE)0xffffffffffffffff;
  if (((param_1 != (WCHAR *)0x0) && (param_2 != (LPCVOID)0x0)) && (param_4 != 0)) {
    local_250 = local_228;
    local_2d8 = local_250;
    local_2b0 = param_1;
    do {
      WVar1 = *local_2b0;
      *local_2d8 = WVar1;
      local_2b0 = local_2b0 + 1;
      local_2d8 = local_2d8 + 1;
    } while (WVar1 != L'\0');
    local_280 = local_228;
    local_2d0 = -1;
    lVar4 = local_2d0;
    do {
      local_2d0 = lVar4;
      lVar4 = local_2d0 + 1;
    } while (local_280[lVar4] != L'\0');
    pWVar6 = local_228 + local_2d0;
    local_2d0 = lVar4;
    if (*pWVar6 == L'\\') {
      local_278 = local_228;
      local_2c8 = -1;
      do {
        local_2c8 = local_2c8 + 1;
      } while (local_278[local_2c8] != L'\0');
      local_288 = local_2c8 * 2 - 2;
      if (0x207 < local_288) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_228 + local_288) = 0;
    }
    local_2e8 = CreateFileW(local_228,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_2e8 == (HANDLE)0xffffffffffffffff) {
      local_2a8 = (longlong *)FUN_180007470();
      if (local_2a8 != (longlong *)0x0) {
        GetLastError();
        local_270 = *local_2a8;
        (**(code **)(local_270 + 0x30))(local_2a8,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
      }
    }
    else {
      BVar2 = DeviceIoControl(local_2e8,0x70000,(LPVOID)0x0,0,&local_248,0x18,local_2b8,
                              (LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        DVar3 = GetLastError();
        if ((DVar3 != 0x15) &&
           (local_2a0 = (longlong *)FUN_180007470(), local_2a0 != (longlong *)0x0)) {
          (**(code **)(*local_2a0 + 0x30))(local_2a0,1,0x12400,L"Boot:%S %d failed:%08X\n");
        }
      }
      else {
        if ((local_234 == 0) || (local_234 % 0x200 != 0)) {
          local_234 = 0x200;
        }
        local_2c0 = param_3 * (ulonglong)local_234;
        DVar3 = SetFilePointer(local_2e8,(LONG)local_2c0,(PLONG)((longlong)&local_2c0 + 4),0);
        if (DVar3 == 0xffffffff) {
          local_298 = (longlong *)FUN_180007470();
          if (local_298 != (longlong *)0x0) {
            GetLastError();
            local_268 = *local_298;
            (**(code **)(local_268 + 0x30))(local_298,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
        }
        else {
          BVar2 = WriteFile(local_2e8,param_2,local_234 * param_4,local_2e0,(LPOVERLAPPED)0x0);
          if (((BVar2 == 0) || (local_2e0[0] != local_234 * param_4)) &&
             (local_290 = (longlong *)FUN_180007470(), local_290 != (longlong *)0x0)) {
            GetLastError();
            local_260 = *local_290;
            (**(code **)(local_260 + 0x30))(local_290,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
        }
      }
    }
  }
  if (local_2e8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_2e8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_338);
  return;
}




undefined4 FUN_1800156a0(byte param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if ((0x1f < param_1) && (param_1 < 0x7f)) {
    local_18 = 1;
  }
  return local_18;
}




undefined4 FUN_1800156e0(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  int iVar17;
  longlong *plVar18;
  uint local_b8;
  uint local_b4;
  
  local_b8 = 0;
  for (local_b4 = 0; local_b4 < param_2 / 0x10; local_b4 = local_b4 + 1) {
    plVar18 = (longlong *)FUN_180007470();
    if (plVar18 != (longlong *)0x0) {
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 0xf)));
      if (iVar17 == 0) {
        uVar1 = 0x2e;
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xf));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 0xe)));
      if (iVar17 == 0) {
        uVar2 = 0x2e;
      }
      else {
        uVar2 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xe));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 0xd)));
      if (iVar17 == 0) {
        uVar3 = 0x2e;
      }
      else {
        uVar3 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xd));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 0xc)));
      if (iVar17 == 0) {
        uVar4 = 0x2e;
      }
      else {
        uVar4 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xc));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 0xb)));
      if (iVar17 == 0) {
        uVar5 = 0x2e;
      }
      else {
        uVar5 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xb));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 10)));
      if (iVar17 == 0) {
        uVar6 = 0x2e;
      }
      else {
        uVar6 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 10));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 9)));
      if (iVar17 == 0) {
        uVar7 = 0x2e;
      }
      else {
        uVar7 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 9));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 8)));
      if (iVar17 == 0) {
        uVar8 = 0x2e;
      }
      else {
        uVar8 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 8));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 7)));
      if (iVar17 == 0) {
        uVar9 = 0x2e;
      }
      else {
        uVar9 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 7));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 6)));
      if (iVar17 == 0) {
        uVar10 = 0x2e;
      }
      else {
        uVar10 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 6));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 5)));
      if (iVar17 == 0) {
        uVar11 = 0x2e;
      }
      else {
        uVar11 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 5));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 4)));
      if (iVar17 == 0) {
        uVar12 = 0x2e;
      }
      else {
        uVar12 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 4));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 3)));
      if (iVar17 == 0) {
        uVar13 = 0x2e;
      }
      else {
        uVar13 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 3));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 2)));
      if (iVar17 == 0) {
        uVar14 = 0x2e;
      }
      else {
        uVar14 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 2));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)(local_b8 + 1)));
      if (iVar17 == 0) {
        uVar15 = 0x2e;
      }
      else {
        uVar15 = *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 1));
      }
      iVar17 = FUN_1800156a0(*(byte *)(param_1 + (ulonglong)local_b8));
      if (iVar17 == 0) {
        uVar16 = 0x2e;
      }
      else {
        uVar16 = *(undefined1 *)(param_1 + (ulonglong)local_b8);
      }
      (**(code **)(*plVar18 + 0x30))
                (plVar18,1,0x12400,
                 L"%08X: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n"
                 ,local_b8,*(undefined1 *)(param_1 + (ulonglong)local_b8),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 1)),
                 *(undefined1 *)((ulonglong)(local_b8 + 2) + param_1),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 3)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 4)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 5)),
                 *(undefined1 *)((ulonglong)(local_b8 + 6) + param_1),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 7)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 8)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 9)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 10)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xb)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xc)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xd)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xe)),
                 *(undefined1 *)(param_1 + (ulonglong)(local_b8 + 0xf)),uVar16,uVar15,uVar14,uVar13,
                 uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
    }
    local_b8 = local_b8 + 0x10;
  }
  return 0;
}




void FUN_180016000(uint param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 *puVar3;
  undefined1 auStack_2a8 [32];
  char *local_288;
  char *local_280;
  undefined4 local_278;
  uint local_270;
  uint local_268;
  void *local_260;
  longlong *local_258;
  void *local_250;
  void *local_248;
  undefined4 local_240;
  undefined1 local_23c [16];
  uint local_22c;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_2a8;
  local_260 = (void *)0x0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  local_268 = 0;
  local_240 = 0;
  puVar3 = local_23c;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_268 = FUN_180010fb0((ulonglong)param_1,&local_240);
  if ((local_268 & 0xfff) == 0) {
    if ((local_22c == 0) || (local_22c % 0x200 != 0)) {
      local_22c = 0x200;
    }
    local_260 = operator_new((ulonglong)local_22c);
    local_250 = local_260;
    if (local_260 == (void *)0x0) {
      local_268 = 0xb871240a;
    }
    else {
      wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
      local_268 = FUN_180014b40(local_228,local_260,0,1);
      if ((local_268 & 0xfff) == 0) {
        local_258 = (longlong *)FUN_180007470();
        if (local_258 != (longlong *)0x0) {
          local_278 = 0xb92;
          local_280 = "BootDumpDiskMBR";
          local_288 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
          local_270 = param_1;
          (**(code **)(*local_258 + 0x30))(local_258,1,0x12400,L"%S %S %d nDiskIndex:%d\n");
        }
        local_268 = FUN_1800156e0((longlong)local_260,local_22c);
      }
    }
  }
  if (local_260 != (void *)0x0) {
    local_248 = local_260;
    free(local_260);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2a8);
  return;
}




void FUN_180016200(uint param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 *puVar3;
  undefined1 auStack_2a8 [32];
  char *local_288;
  char *local_280;
  undefined4 local_278;
  uint local_270;
  uint local_268;
  void *local_260;
  longlong *local_258;
  void *local_250;
  void *local_248;
  undefined4 local_240;
  undefined1 local_23c [16];
  uint local_22c;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_2a8;
  local_260 = (void *)0x0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  local_268 = 0;
  local_240 = 0;
  puVar3 = local_23c;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_268 = FUN_180010fb0((ulonglong)param_1,&local_240);
  if ((local_268 & 0xfff) == 0) {
    if ((local_22c == 0) || (local_22c % 0x200 != 0)) {
      local_22c = 0x200;
    }
    local_260 = operator_new((ulonglong)(local_22c << 3));
    local_250 = local_260;
    if (local_260 == (void *)0x0) {
      local_268 = 0xbbf1240a;
    }
    else {
      wsprintfW(local_228,L"\\\\.\\%C:");
      local_268 = FUN_180014b40(local_228,local_260,0,8);
      if ((local_268 & 0xfff) == 0) {
        local_258 = (longlong *)FUN_180007470();
        if (local_258 != (longlong *)0x0) {
          local_278 = 0xbca;
          local_280 = "BootDumpPartDBR";
          local_288 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
          local_270 = param_1;
          (**(code **)(*local_258 + 0x30))(local_258,1,0x12400,L"%S %S %d nPartIndex:%d\n");
        }
        local_268 = FUN_1800156e0((longlong)local_260,local_22c << 3);
      }
    }
  }
  if (local_260 != (void *)0x0) {
    local_248 = local_260;
    free(local_260);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2a8);
  return;
}




void FUN_180016400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18000d830(param_1,param_2,param_3,param_4);
  return;
}




undefined4 FUN_180016420(undefined4 *param_1)

{
  DWORD DVar1;
  HMODULE hModule;
  longlong *plVar2;
  FARPROC pFVar3;
  longlong lVar4;
  short *psVar5;
  undefined4 local_78;
  short local_40 [28];
  
  psVar5 = local_40;
  for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)psVar5 = 0;
    psVar5 = (short *)((longlong)psVar5 + 1);
  }
  local_78 = 0;
  hModule = LoadLibraryW(L"Kernel32.dll");
  if (hModule == (HMODULE)0x0) {
    local_78 = 0xbf912500;
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      DVar1 = GetLastError();
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xbfa,0xbf912500,DVar1);
    }
  }
  else {
    pFVar3 = GetProcAddress(hModule,"GetNativeSystemInfo");
    if (pFVar3 == (FARPROC)0x0) {
      local_78 = 0xc0112500;
      plVar2 = (longlong *)FUN_180007470();
      if (plVar2 != (longlong *)0x0) {
        DVar1 = GetLastError();
        (**(code **)(*plVar2 + 0x30))
                  (plVar2,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xc02,0xc0112500,DVar1);
      }
    }
    else {
      (*pFVar3)(local_40);
      if (local_40[0] == 9) {
        *param_1 = 0x40;
      }
      else {
        *param_1 = 0x20;
      }
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  return local_78;
}




void FUN_1800165f0(undefined4 *param_1)

{
  BOOL BVar1;
  longlong lVar2;
  _OSVERSIONINFOW *p_Var3;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined4 local_170;
  DWORD local_168;
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  _OSVERSIONINFOW local_138;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_198;
  p_Var3 = &local_138;
  for (lVar2 = 0x114; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOW *)((longlong)&p_Var3->dwOSVersionInfoSize + 1);
  }
  local_158 = 0;
  p_Var3 = &local_138;
  for (lVar2 = 0x114; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOW *)((longlong)&p_Var3->dwOSVersionInfoSize + 1);
  }
  local_138.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_138);
  if (BVar1 == 0) {
    local_150 = (longlong *)FUN_180007470();
    if (local_150 != (longlong *)0x0) {
      local_168 = GetLastError();
      local_148 = *local_150;
      local_170 = 0xc24;
      local_178 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(local_148 + 0x30))(local_150,1,0x12400,L"Boot:%S %d Disk:%s failed:%08X\n");
    }
    local_158 = 0xc2512500;
  }
  else if ((local_138.dwMajorVersion < 7) &&
          ((local_138.dwMajorVersion != 6 || (local_138.dwMinorVersion < 2)))) {
    *param_1 = 0;
  }
  else {
    *param_1 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_198);
  return;
}




void FUN_180016720(WCHAR *param_1)

{
  WCHAR WVar1;
  WCHAR WVar2;
  BOOL BVar3;
  uint uVar4;
  WCHAR *pWVar5;
  longlong lVar6;
  undefined1 auStack_4b8 [32];
  ushort local_498;
  undefined2 local_494;
  WCHAR *local_490;
  longlong local_488;
  longlong local_480;
  WCHAR *local_478;
  undefined4 local_470;
  WCHAR *local_468;
  WCHAR *local_460;
  WCHAR *local_458;
  WCHAR local_450 [11];
  WCHAR WStack_43a;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_4b8;
  local_498 = 0;
  pWVar5 = local_450;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_470 = 0;
  pWVar5 = local_228;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_438;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  if (param_1 != (WCHAR *)0x0) {
    local_458 = local_438;
    local_490 = local_458;
    local_478 = param_1;
    do {
      WVar1 = *local_478;
      *local_490 = WVar1;
      local_478 = local_478 + 1;
      local_490 = local_490 + 1;
    } while (WVar1 != L'\0');
    local_468 = local_438;
    local_488 = -1;
    lVar6 = local_488;
    do {
      local_488 = lVar6;
      lVar6 = local_488 + 1;
    } while (local_468[lVar6] != L'\0');
    if (local_438[local_488] != L'\\') {
      local_460 = local_438;
      local_480 = -1;
      do {
        local_480 = local_480 + 1;
      } while (local_460[local_480] != L'\0');
      local_438[local_480] = L'\\';
    }
    local_494 = 0;
    local_488 = lVar6;
    for (local_498 = 0x41; local_498 < 0x5b; local_498 = local_498 + 1) {
      wsprintfW(local_450,L"%C:\\");
      BVar3 = GetVolumeNameForVolumeMountPointW(local_450,local_228,0x104);
      if (BVar3 != 0) {
        pWVar5 = local_228;
        lVar6 = (longlong)local_438 - (longlong)pWVar5;
        do {
          WVar2 = *pWVar5;
          WVar1 = *(WCHAR *)((longlong)pWVar5 + lVar6);
          if (WVar2 != WVar1) {
            uVar4 = -(uint)((ushort)WVar2 < (ushort)WVar1) | 1;
            goto LAB_1800168fc;
          }
          pWVar5 = pWVar5 + 1;
        } while (WVar2 != L'\0');
        uVar4 = 0;
LAB_1800168fc:
        if (uVar4 == 0) break;
      }
    }
    if ((local_498 < 0x41) || (0x5a < local_498)) {
      local_498 = 0;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4b8);
  return;
}




void FUN_180016950(int param_1,uint *param_2)

{
  short sVar1;
  BOOL BVar2;
  HANDLE hFindVolume;
  HANDLE hDevice;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_718 [32];
  longlong local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  longlong local_6a0;
  DWORD local_698 [2];
  longlong *local_690;
  longlong *local_688;
  longlong *local_680;
  ulonglong local_678;
  undefined1 *local_670;
  longlong local_668;
  WCHAR *local_660;
  WCHAR *local_658;
  longlong local_650;
  longlong local_648;
  WCHAR *local_640;
  WCHAR *local_638;
  WCHAR WStack_62a;
  WCHAR local_628 [264];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_718;
  puVar4 = local_418;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_698[0] = 0;
  pWVar5 = local_628;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_670 = local_418;
  hFindVolume = FindFirstVolumeW(local_628,0x104);
  if (hFindVolume == (HANDLE)0xffffffffffffffff) {
    local_690 = (longlong *)FUN_180007470();
    if (local_690 != (longlong *)0x0) {
      GetLastError();
      local_668 = *local_690;
      (**(code **)(local_668 + 0x30))(local_690,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  else {
    *param_2 = 0;
    do {
      local_660 = local_628;
      local_6b8 = -1;
      lVar3 = local_6b8;
      do {
        local_6b8 = lVar3;
        lVar3 = local_6b8 + 1;
      } while (local_660[local_6b8 + 1] != L'\0');
      if (local_628[local_6b8] == L'\\') {
        local_658 = local_628;
        local_6b0 = -1;
        do {
          local_6b0 = local_6b0 + 1;
        } while (local_658[local_6b0] != L'\0');
        local_678 = local_6b0 * 2 - 2;
        if (0x207 < local_678) {
          __report_rangecheckfailure();
        }
        *(undefined2 *)((longlong)local_628 + local_678) = 0;
      }
      hDevice = CreateFileW(local_628,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hDevice == (HANDLE)0xffffffffffffffff) {
        local_688 = (longlong *)FUN_180007470();
        if (local_688 != (longlong *)0x0) {
          GetLastError();
          local_650 = *local_688;
          (**(code **)(local_650 + 0x30))(local_688,1,0x12400);
        }
      }
      else {
        BVar2 = DeviceIoControl(hDevice,0x560000,(LPVOID)0x0,0,local_670,0x400,local_698,
                                (LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_680 = (longlong *)FUN_180007470();
          if (local_680 != (longlong *)0x0) {
            GetLastError();
            local_648 = *local_680;
            (**(code **)(local_648 + 0x30))(local_680,1,0x12400);
          }
          CloseHandle(hDevice);
        }
        else {
          CloseHandle(hDevice);
          if (param_1 == *(int *)(local_670 + 8)) {
            local_640 = local_628;
            local_6a8 = -1;
            lVar3 = local_6a8;
            do {
              local_6a8 = lVar3;
              lVar3 = local_6a8 + 1;
            } while (local_640[local_6a8 + 1] != L'\0');
            if (local_628[local_6a8] != L'\\') {
              local_638 = local_628;
              local_6a0 = -1;
              do {
                local_6a0 = local_6a0 + 1;
              } while (local_638[local_6a0] != L'\0');
              local_628[local_6a0] = L'\\';
            }
            sVar1 = FUN_180016720(local_628);
            if (sVar1 != 0) {
              local_698[1] = 1;
              *param_2 = *param_2 | 1 << ((char)sVar1 + 0xbfU & 0x1f);
            }
          }
        }
      }
      BVar2 = FindNextVolumeW(hFindVolume,local_628,0x104);
    } while (BVar2 != 0);
  }
  if (hFindVolume != (HANDLE)0xffffffffffffffff) {
    FindVolumeClose(hFindVolume);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_718);
  return;
}




void FUN_180016e50(LPCWSTR param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined4 local_100;
  uint local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  int local_e0 [2];
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  byte local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_128;
  local_f4 = 0;
  local_e8 = 0x20;
  local_e0[0] = 0;
  local_e4 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_b8[0x50] = 0;
  local_b8[0x51] = 0;
  local_b8[0x52] = 0;
  local_b8[0x53] = 0;
  local_b8[0x54] = 0;
  local_b8[0x55] = 1;
  local_b8[0x56] = 0;
  local_b8[0x57] = 0;
  local_b8[0x58] = 0;
  local_b8[0x59] = 0;
  local_b8[0x5a] = 0;
  local_b8[0x5b] = 1;
  local_b8[0x5c] = 0;
  local_b8[0x5d] = 0;
  local_b8[0x5e] = 0;
  local_b8[0x5f] = 0;
  local_b8[0x60] = 0;
  local_b8[0x61] = 0;
  local_b8[0x62] = 0;
  local_b8[99] = 0;
  local_b8[100] = 0;
  local_b8[0x65] = 0;
  local_b8[0x66] = 0;
  local_b8[0x67] = 0;
  local_b8[0x68] = 0;
  local_b8[0x69] = 0;
  local_b8[0x6a] = 0;
  local_b8[0x6b] = 0;
  local_b8[0x6c] = 0;
  local_b8[0x6d] = 0;
  local_b8[0x6e] = 0;
  local_b8[0x6f] = 0;
  local_b8[0x70] = 0;
  local_b8[0x71] = 0;
  local_b8[0x72] = 0;
  local_b8[0x73] = 0;
  local_b8[0x74] = 0;
  local_b8[0x75] = 0;
  local_b8[0x76] = 0;
  local_b8[0x77] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[5] = 1;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 1;
  local_b8[0xc] = 1;
  local_b8[0xd] = 1;
  local_b8[0xe] = 1;
  local_b8[0xf] = 0;
  local_b8[0x10] = 0;
  local_b8[0x11] = 0;
  local_b8[0x12] = 0;
  local_b8[0x13] = 0;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0;
  local_b8[0x18] = 0;
  local_b8[0x19] = 0;
  local_b8[0x1a] = 0;
  local_b8[0x1b] = 0;
  local_b8[0x1c] = 0;
  local_b8[0x1d] = 0;
  local_b8[0x1e] = 0;
  local_b8[0x1f] = 0;
  local_b8[0x20] = 1;
  local_b8[0x21] = 1;
  local_b8[0x22] = 1;
  local_b8[0x23] = 0;
  local_b8[0x24] = 0;
  local_b8[0x25] = 0;
  local_b8[0x26] = 0;
  local_b8[0x27] = 0;
  local_b8[0x78] = 0;
  local_b8[0x79] = 0;
  local_b8[0x7a] = 0;
  local_b8[0x7b] = 0;
  local_b8[0x7c] = 0;
  local_b8[0x7d] = 1;
  local_b8[0x7e] = 0;
  local_b8[0x7f] = 0;
  local_b8[0x80] = 0;
  local_b8[0x81] = 0;
  local_b8[0x82] = 0;
  local_b8[0x83] = 1;
  local_b8[0x84] = 0;
  local_b8[0x85] = 0;
  local_b8[0x86] = 0;
  local_b8[0x87] = 0;
  local_b8[0x88] = 1;
  local_b8[0x89] = 0;
  local_b8[0x8a] = 0;
  local_b8[0x8b] = 0;
  local_b8[0x8c] = 0;
  local_b8[0x8d] = 0;
  local_b8[0x8e] = 0;
  local_b8[0x8f] = 0;
  local_b8[0x90] = 0;
  local_b8[0x91] = 0;
  local_b8[0x92] = 0;
  local_b8[0x93] = 0;
  local_b8[0x94] = 0;
  local_b8[0x95] = 0;
  local_b8[0x96] = 0;
  local_b8[0x97] = 0;
  local_b8[0x98] = 0;
  local_b8[0x99] = 0;
  local_b8[0x9a] = 0;
  local_b8[0x9b] = 0;
  local_b8[0x9c] = 1;
  local_b8[0x9d] = 0;
  local_b8[0x9e] = 0;
  local_b8[0x9f] = 0;
  local_b8[0x28] = 0;
  local_b8[0x29] = 0;
  local_b8[0x2a] = 0;
  local_b8[0x2b] = 0;
  local_b8[0x2c] = 0;
  local_b8[0x2d] = 1;
  local_b8[0x2e] = 0;
  local_b8[0x2f] = 0;
  local_b8[0x30] = 0;
  local_b8[0x31] = 0;
  local_b8[0x32] = 0;
  local_b8[0x33] = 1;
  local_b8[0x34] = 1;
  local_b8[0x35] = 1;
  local_b8[0x36] = 1;
  local_b8[0x37] = 0;
  local_b8[0x38] = 1;
  local_b8[0x39] = 1;
  local_b8[0x3a] = 1;
  local_b8[0x3b] = 1;
  local_b8[0x3c] = 0;
  local_b8[0x3d] = 0;
  local_b8[0x3e] = 0;
  local_b8[0x3f] = 0;
  local_b8[0x40] = 0;
  local_b8[0x41] = 0;
  local_b8[0x42] = 0;
  local_b8[0x43] = 0;
  local_b8[0x44] = 0;
  local_b8[0x45] = 0;
  local_b8[0x46] = 0;
  local_b8[0x47] = 0;
  local_b8[0x48] = 0;
  local_b8[0x49] = 0;
  local_b8[0x4a] = 0;
  local_b8[0x4b] = 0;
  local_b8[0x4c] = 1;
  local_b8[0x4d] = 1;
  local_b8[0x4e] = 1;
  local_b8[0x4f] = 1;
  piVar2 = &local_e4;
  puVar1 = &local_ec;
  local_f0 = FUN_180034dd0(param_1,puVar1,piVar2);
  if (local_f0 == 0) {
    local_f8 = 0xd2c12982;
    local_d8 = (longlong *)FUN_180007470();
    if (local_d8 != (longlong *)0x0) {
      local_100 = 0xd2d;
      local_108 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
      (**(code **)(*local_d8 + 0x30))(local_d8,1,0x12400,L"Boot:%S %d failed\n");
    }
  }
  else {
    local_f8 = FUN_180016400(&local_f4,puVar1,piVar2,param_4);
    if ((local_f8 & 0xfff) == 0) {
      local_f8 = FUN_180016420(&local_e8);
      if ((local_f8 & 0xfff) == 0) {
        local_f8 = FUN_1800165f0(local_e0);
        if ((local_f8 & 0xfff) == 0) {
          if ((local_f4 == 0) || (local_e4 != 0)) {
            if (local_e0[0] == 0) {
              if (local_e8 == 0x20) {
                *param_2 = (uint)local_b8[(ulonglong)local_ec +
                                          (ulonglong)local_f0 * 5 + (longlong)local_f4 * 0x14 + 0x50
                                         ];
              }
              else {
                *param_2 = (uint)local_b8[(ulonglong)local_ec +
                                          (ulonglong)local_f0 * 5 + (longlong)local_f4 * 0x14 + 0x78
                                         ];
              }
            }
            else if (local_e8 == 0x20) {
              *param_2 = (uint)local_b8[(ulonglong)local_ec +
                                        (ulonglong)local_f0 * 5 + (longlong)local_f4 * 0x14];
            }
            else {
              *param_2 = (uint)local_b8[(ulonglong)local_ec +
                                        (ulonglong)local_f0 * 5 + (longlong)local_f4 * 0x14 + 0x28];
            }
          }
          else {
            *param_2 = 0;
          }
        }
        else {
          local_c0 = (longlong *)FUN_180007470();
          if (local_c0 != (longlong *)0x0) {
            local_100 = 0xd42;
            local_108 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
            (**(code **)(*local_c0 + 0x30))(local_c0,1,0x12400,L"Boot:%S %d failed\n");
          }
        }
      }
      else {
        local_c8 = (longlong *)FUN_180007470();
        if (local_c8 != (longlong *)0x0) {
          local_100 = 0xd3b;
          local_108 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
          (**(code **)(*local_c8 + 0x30))(local_c8,1,0x12400,L"Boot:%S %d failed\n");
        }
      }
    }
    else {
      local_d0 = (longlong *)FUN_180007470();
      if (local_d0 != (longlong *)0x0) {
        local_100 = 0xd34;
        local_108 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp";
        (**(code **)(*local_d0 + 0x30))(local_d0,1,0x12400,L"Boot:%S %d failed\n");
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_128);
  return;
}




void FUN_180017680(char *param_1)

{
  undefined1 auStack_168 [32];
  char *local_148;
  undefined8 *local_140;
  char *local_138;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_168;
  local_140 = (undefined8 *)FUN_18000d690(param_1);
  if (local_140 != (undefined8 *)0x0) {
    local_128[0] = 'I';
    for (local_148 = param_1; *local_148 != '\0'; local_148 = local_148 + 1) {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_180017814;
      local_148[(longlong)(local_128 + (1 - (longlong)param_1))] = *local_148;
    }
    local_148[(longlong)(local_128 + (1 - (longlong)param_1))] = 'M';
    local_148[(longlong)(local_128 + (2 - (longlong)param_1))] = 'o';
    local_148[(longlong)(local_128 + (3 - (longlong)param_1))] = 'd';
    local_148[(longlong)(local_128 + (4 - (longlong)param_1))] = 'u';
    local_148[(longlong)(local_128 + (5 - (longlong)param_1))] = 'l';
    local_148[(longlong)(local_128 + (6 - (longlong)param_1))] = 'e';
    local_138 = local_148 + (7 - (longlong)param_1);
    if ((char *)0x103 < local_138) {
      __report_rangecheckfailure();
    }
    local_128[(longlong)local_138] = '\0';
    (**(code **)*local_140)(local_140,local_128);
  }
LAB_180017814:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




undefined8 FUN_180017830(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = FUN_180017940(param_1,0x8000,&local_28);
  if (iVar1 == 0) {
    plVar2 = (longlong *)
             __RTDynamicCast(local_28,0,&ITbCreator::RTTI_Type_Descriptor,
                             &CTbBaseCreator<class_IEnumDisk>::RTTI_Type_Descriptor,0);
    if ((plVar2 != (longlong *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x8000)) {
      local_18 = (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)*local_28)(local_28);
  }
  else {
    local_20 = (longlong *)FUN_180007470();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x12400,L"Failed to Load lib (Err=0x%x) %S",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




undefined4 FUN_180017940(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1800bde98) {
    _Init_thread_header(&DAT_1800bde98);
    if (DAT_1800bde98 == -1) {
      DAT_1800bde90 = (code *)FUN_180003500(param_1,&local_20);
      _Init_thread_footer(&DAT_1800bde98);
    }
  }
  if (DAT_1800bde90 == (code *)0x0) {
    uVar1 = 0x12412402;
  }
  else {
    uVar1 = (*DAT_1800bde90)(0x10000,param_2,param_3);
  }
  return uVar1;
}




undefined8 * FUN_180017a00(LPCWSTR param_1)

{
  DWORD DVar1;
  HANDLE hFile;
  longlong lVar2;
  DWORD *pDVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  DWORD local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  undefined8 *local_18;
  
  uVar5 = 0;
  uVar6 = 0;
  pDVar3 = &local_44;
  for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pDVar3 = 0;
    pDVar3 = (DWORD *)((longlong)pDVar3 + 1);
  }
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    local_40 = (longlong *)FUN_180007470();
    if (local_40 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_28 = *local_40;
      (**(code **)(local_28 + 0x30))
                (local_40,1,0x12400,L"%S %S %d GetLastError:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_open",0x22,DVar1,uVar5,
                 hFile,uVar6);
    }
    local_18 = (undefined8 *)0x0;
  }
  else {
    DVar1 = GetFileSize(hFile,&local_44);
    if (DVar1 == 0xffffffff) {
      local_38 = (longlong *)FUN_180007470();
      if (local_38 != (longlong *)0x0) {
        DVar1 = GetLastError();
        local_20 = *local_38;
        (**(code **)(local_20 + 0x30))
                  (local_38,1,0x12400,L"%S %S %d GetLastError:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_open",0x29,DVar1);
      }
      CloseHandle(hFile);
      local_18 = (undefined8 *)0x0;
    }
    else {
      local_18 = (undefined8 *)operator_new(0x220);
      if (local_18 == (undefined8 *)0x0) {
        local_30 = (longlong *)FUN_180007470();
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x30))
                    (local_30,1,0x12400,L"%S %S %d failed.\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_open",0x31);
        }
        CloseHandle(hFile);
        local_18 = (undefined8 *)0x0;
      }
      else {
        puVar4 = local_18;
        for (lVar2 = 0x220; lVar2 != 0; lVar2 = lVar2 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        }
        *local_18 = hFile;
        *(undefined4 *)(local_18 + 1) = 0;
        *(undefined4 *)((longlong)local_18 + 0xc) = 0;
        local_18[3] = 0;
        *(DWORD *)(local_18 + 2) = DVar1;
      }
    }
  }
  return local_18;
}




undefined8 FUN_180017c90(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_180007470();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_close",0x6c);
    }
    uVar2 = 0xffffffff;
  }
  else {
    if (*param_1 != -1) {
      CloseHandle((HANDLE)*param_1);
      *param_1 = -1;
    }
    free(param_1);
    uVar2 = 0;
  }
  return uVar2;
}




DWORD FUN_180017d50(undefined8 *param_1,undefined1 *param_2,ulonglong param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined1 *local_res10;
  ulonglong local_res18;
  uint local_78;
  int local_70;
  DWORD local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  local_64 = 0;
  if (param_1 == (undefined8 *)0x0) {
    local_60 = (longlong *)FUN_180007470();
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x30))
                (local_60,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0x81);
    }
    local_res18._0_4_ = 0xffffffff;
  }
  else if ((*(int *)(param_1 + 1) < *(int *)((longlong)param_1 + 0xc)) ||
          (*(int *)(param_1 + 2) < *(int *)(param_1 + 1))) {
    local_58 = (longlong *)FUN_180007470();
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x30))
                (local_58,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0x88);
    }
    local_res18._0_4_ = 0xffffffff;
  }
  else {
    local_res18 = param_3;
    if ((ulonglong)(longlong)(*(int *)(param_1 + 2) - *(int *)(param_1 + 1)) < param_3) {
      local_res18 = (ulonglong)(*(int *)(param_1 + 2) - *(int *)(param_1 + 1));
    }
    if (local_res18 == 0) {
      local_res18._0_4_ = 0;
    }
    else if (((*(uint *)(param_1 + 1) & 0x1ff) == 0) && (0x1ff < local_res18)) {
      if ((local_res18 & 0x1ff) == 0) {
        DVar1 = SetFilePointer((HANDLE)*param_1,*(LONG *)(param_1 + 1),(PLONG)0x0,0);
        if (*(DWORD *)(param_1 + 1) == DVar1) {
          BVar2 = ReadFile((HANDLE)*param_1,param_2,(DWORD)local_res18,&local_64,(LPOVERLAPPED)0x0);
          if (BVar2 == 0) {
            local_20 = (longlong *)FUN_180007470();
            if (local_20 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_10 = *local_20;
              (**(code **)(local_10 + 0x30))
                        (local_20,1,0x12400,L"%S %S %d GetLastError:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0xda,DVar1
                        );
            }
            local_res18._0_4_ = 0xffffffff;
          }
          else {
            *(DWORD *)(param_1 + 1) = *(int *)(param_1 + 1) + (DWORD)local_res18;
          }
        }
        else {
          local_28 = (longlong *)FUN_180007470();
          if (local_28 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_18 = *local_28;
            (**(code **)(local_18 + 0x30))
                      (local_28,1,0x12400,L"%S %S %d GetLastError:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0xd3,DVar1);
          }
          local_res18._0_4_ = 0xffffffff;
        }
      }
      else {
        DVar1 = FUN_180017d50(param_1,param_2,local_res18 & 0xfffffffffffffe00);
        if ((int)DVar1 < 0) {
          local_38 = (longlong *)FUN_180007470();
          if (local_38 != (longlong *)0x0) {
            (**(code **)(*local_38 + 0x30))
                      (local_38,1,0x12400,L"%S %S %d failed.\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0xbf);
          }
          local_res18._0_4_ = 0xffffffff;
        }
        else {
          local_res18._0_4_ =
               FUN_180017d50(param_1,param_2 + (int)DVar1,local_res18 - (longlong)(int)DVar1);
          if ((int)(DWORD)local_res18 < 0) {
            local_30 = (longlong *)FUN_180007470();
            if (local_30 != (longlong *)0x0) {
              (**(code **)(*local_30 + 0x30))
                        (local_30,1,0x12400,L"%S %S %d failed.\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0xcb);
            }
            local_res18._0_4_ = 0xffffffff;
          }
          else {
            local_res18._0_4_ = (DWORD)local_res18 + DVar1;
          }
        }
      }
    }
    else {
      local_78 = *(uint *)(param_1 + 1) & 0x1ff;
      local_48 = (undefined1 *)((longlong)param_1 + (longlong)(int)local_78 + 0x20);
      local_70 = 0;
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffe00;
      DVar1 = FUN_180017d50(param_1,(undefined1 *)(param_1 + 4),0x200);
      local_res10 = param_2;
      if ((int)DVar1 < 0) {
        local_50 = (longlong *)FUN_180007470();
        if (local_50 != (longlong *)0x0) {
          (**(code **)(*local_50 + 0x30))
                    (local_50,1,0x12400,L"%S %S %d failed.\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0x9f);
        }
        *(uint *)(param_1 + 1) = *(int *)(param_1 + 1) + local_78;
        local_res18._0_4_ = 0xffffffff;
      }
      else {
        for (; (local_res18 != 0 && ((int)local_78 < 0x200)); local_78 = local_78 + 1) {
          *local_res10 = *local_48;
          local_48 = local_48 + 1;
          local_res10 = local_res10 + 1;
          local_res18 = local_res18 - 1;
          local_70 = local_70 + 1;
        }
        *(uint *)(param_1 + 1) = *(int *)(param_1 + 1) - (0x200 - local_78);
        local_res18._0_4_ = FUN_180017d50(param_1,local_res10,local_res18);
        if ((int)(DWORD)local_res18 < 0) {
          local_40 = (longlong *)FUN_180007470();
          if (local_40 != (longlong *)0x0) {
            (**(code **)(*local_40 + 0x30))
                      (local_40,1,0x12400,L"%S %S %d failed.\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_read",0xb5);
          }
          local_res18._0_4_ = 0xffffffff;
        }
        else {
          local_res18._0_4_ = (DWORD)local_res18 + local_70;
        }
      }
    }
  }
  return (DWORD)local_res18;
}




int FUN_1800184b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\devio.cpp","devio_lseek",0x158);
    }
    iVar1 = -1;
  }
  else {
    if (param_3 == 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc) + param_2;
    }
    else {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
    }
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  }
  return iVar1;
}




undefined8 * FUN_1800185a0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x200;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}




void FUN_1800185d0(longlong *param_1)

{
  if (*param_1 != -1) {
    FUN_180018830(param_1);
  }
  return;
}




void FUN_180018600(longlong *param_1,LPCWSTR param_2)

{
  int iVar1;
  HANDLE pvVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStackY_98 [32];
  undefined4 local_30;
  undefined1 local_2c [16];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_98;
  local_30 = 0;
  puVar5 = local_2c;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pvVar2 = CreateFileW(param_2,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  *param_1 = (longlong)pvVar2;
  if (*param_1 == -1) {
    plVar3 = (longlong *)FUN_180007470();
    if (plVar3 != (longlong *)0x0) {
      GetLastError();
      (**(code **)(*plVar3 + 0x30))(plVar3,1,0x12400,L"Boot:%S %d DevName:%s failed:%08X\n");
    }
  }
  else {
    iVar1 = FUN_180018a10(param_1,0x70000,(LPVOID)0x0,0,&local_30,0x18,(DWORD *)0x0);
    if (iVar1 == 0) {
      plVar3 = (longlong *)FUN_180007470();
      if (plVar3 != (longlong *)0x0) {
        GetLastError();
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x12400,L"Boot:%S %d DevName:%s failed:%08X\n");
      }
    }
    else {
      if ((local_1c == 0) || (local_1c % 0x200 != 0)) {
        local_1c = 0x200;
      }
      *(uint *)(param_1 + 1) = local_1c;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




BOOL FUN_180018830(longlong *param_1)

{
  BOOL local_18;
  
  local_18 = 1;
  if (*param_1 != -1) {
    local_18 = CloseHandle((HANDLE)*param_1);
    *param_1 = -1;
  }
  *(undefined4 *)(param_1 + 1) = 0x200;
  return local_18;
}




undefined4 FUN_180018890(undefined8 *param_1,LPVOID param_2,longlong param_3,int param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 local_18;
  DWORD local_14;
  undefined8 local_10;
  
  local_18 = 1;
  local_10 = param_3 * (ulonglong)*(uint *)(param_1 + 1);
  DVar1 = SetFilePointer((HANDLE)*param_1,(LONG)local_10,(PLONG)((longlong)&local_10 + 4),0);
  local_10 = CONCAT44(local_10._4_4_,DVar1);
  if (DVar1 == 0xffffffff) {
    local_18 = 0;
  }
  else {
    BVar2 = ReadFile((HANDLE)*param_1,param_2,param_4 * *(int *)(param_1 + 1),&local_14,
                     (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      local_18 = 0;
    }
  }
  return local_18;
}




undefined4 FUN_180018950(undefined8 *param_1,LPCVOID param_2,longlong param_3,int param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined4 local_18;
  DWORD local_14;
  undefined8 local_10;
  
  local_18 = 1;
  local_10 = param_3 * (ulonglong)*(uint *)(param_1 + 1);
  DVar1 = SetFilePointer((HANDLE)*param_1,(LONG)local_10,(PLONG)((longlong)&local_10 + 4),0);
  local_10 = CONCAT44(local_10._4_4_,DVar1);
  if (DVar1 == 0xffffffff) {
    local_18 = 0;
  }
  else {
    BVar2 = WriteFile((HANDLE)*param_1,param_2,param_4 * *(int *)(param_1 + 1),&local_14,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      local_18 = 0;
    }
  }
  return local_18;
}




undefined4
FUN_180018a10(undefined8 *param_1,DWORD param_2,LPVOID param_3,DWORD param_4,LPVOID param_5,
             DWORD param_6,DWORD *param_7)

{
  BOOL BVar1;
  undefined4 local_18;
  DWORD local_14 [5];
  
  local_18 = 1;
  BVar1 = DeviceIoControl((HANDLE)*param_1,param_2,param_3,param_4,param_5,param_6,local_14,
                          (LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_18 = 0;
  }
  else if (param_7 != (DWORD *)0x0) {
    *param_7 = local_14[0];
  }
  return local_18;
}




undefined8 FUN_180018ab0(void)

{
  return 1;
}




void FUN_180018ae0(void *param_1,int param_2,size_t param_3)

{
  memchr(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    wmemcmp
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl wmemcmp(wchar_t *_S1,wchar_t *_S2,size_t _N)

{
  wchar_t *local_res8;
  wchar_t *local_res10;
  size_t local_res18;
  
  local_res8 = _S1;
  local_res10 = _S2;
  local_res18 = _N;
  while( true ) {
    if (local_res18 == 0) {
      return 0;
    }
    if (*local_res8 != *local_res10) break;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 - 1;
  }
  if ((ushort)*local_res8 < (ushort)*local_res10) {
    return -1;
  }
  return 1;
}




void * FUN_180018bb0(void *param_1,uint param_2,char *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  void *_Buf1;
  uint local_24;
  void *local_18;
  
  if ((param_4 <= param_2) && (param_4 != 0)) {
    cVar1 = *param_3;
    local_24 = (param_2 - param_4) + 1;
    local_18 = param_1;
    do {
      _Buf1 = (void *)FUN_180018ae0(local_18,(int)cVar1,(ulonglong)local_24);
      if (_Buf1 == (void *)0x0) {
        return (void *)0x0;
      }
      iVar2 = memcmp(_Buf1,param_3,(ulonglong)param_4);
      if (iVar2 == 0) {
        return _Buf1;
      }
      local_24 = local_24 - (((int)_Buf1 - (int)local_18) + 1);
      local_18 = (void *)((longlong)_Buf1 + 1);
    } while (param_4 <= local_24);
  }
  return (void *)0x0;
}




undefined8 * FUN_180018ce0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  *param_1 = CEditBootItem::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x85) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *(undefined2 *)(param_1 + 0x107) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x189) = 0;
  *(undefined2 *)(param_1 + 0x1ca) = 0;
  *(undefined2 *)(param_1 + 0x20b) = 0;
  *(undefined2 *)(param_1 + 0x24c) = 0;
  *(undefined2 *)(param_1 + 0x28d) = 0;
  param_1[0x2ce] = 0;
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x167c) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  param_1[0x2d1] = 0;
  puVar2 = param_1 + 0x2d2;
  for (lVar1 = 0x41c; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  puVar3 = (undefined1 *)((longlong)param_1 + 0x1aac);
  for (lVar1 = 0x41c; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x3d9) = 0;
  param_1[0x3da] = 0;
  *(undefined4 *)(param_1 + 0x3e3) = 0;
  param_1[0x3e4] = 0;
  *(undefined4 *)(param_1 + 0x3db) = 0;
  param_1[0x3dc] = 0;
  *(undefined4 *)(param_1 + 0x3dd) = 0;
  param_1[0x3de] = 0;
  *(undefined4 *)(param_1 + 0x3df) = 0;
  param_1[0x3e0] = 0;
  *(undefined4 *)(param_1 + 0x3e1) = 0;
  param_1[0x3e2] = 0;
  return param_1;
}




undefined8 * FUN_180018f70(undefined8 *param_1,uint param_2)

{
  FUN_180018fb0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180018fb0(undefined8 *param_1)

{
  *param_1 = CEditBootItem::vftable;
  if (*(int *)(param_1 + 1) != 0) {
    FUN_18001a1c0((longlong)param_1);
  }
  return;
}




undefined4 FUN_180018ff0(undefined8 param_1,LPCWSTR param_2,undefined1 *param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined4 local_38;
  DWORD local_34;
  HANDLE local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  local_34 = 0;
  local_38 = 0;
  local_30 = (HANDLE)0xffffffffffffffff;
  iVar1 = FUN_18000e5e0(param_2);
  if (iVar1 == 0) {
    for (lVar4 = 0x41c; lVar4 != 0; lVar4 = lVar4 + -1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
  }
  else {
    local_30 = CreateFileW(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (local_30 == (HANDLE)0xffffffffffffffff) {
      local_28 = (longlong *)FUN_180007470();
      if (local_28 != (longlong *)0x0) {
        DVar2 = GetLastError();
        local_18 = *local_28;
        (**(code **)(local_18 + 0x30))
                  (local_28,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x60,param_2,DVar2);
      }
      local_38 = 0x6112504;
    }
    else {
      BVar3 = ReadFile(local_30,param_3,0x41c,&local_34,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        local_20 = (longlong *)FUN_180007470();
        if (local_20 != (longlong *)0x0) {
          DVar2 = GetLastError();
          local_10 = *local_20;
          (**(code **)(local_10 + 0x30))
                    (local_20,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x67,param_2,DVar2);
        }
        local_38 = 0x6812506;
      }
      else if (local_34 != 0x41c) {
        local_38 = 0x6e12506;
      }
    }
  }
  if (local_30 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_30);
  }
  return local_38;
}




void FUN_180019200(longlong param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 *puVar3;
  undefined1 auStack_268 [32];
  char *local_248;
  undefined4 local_240;
  uint local_238;
  longlong *local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_268;
  local_238 = 0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  wsprintfW(local_228,L"%s\\BOOT\\%s");
  local_238 = FUN_180018ff0(param_1,local_228,(undefined1 *)(param_1 + 0x1690));
  if ((local_238 & 0xfff) == 0) {
    if (*(int *)(param_1 + 0x167c) != *(int *)(param_1 + 0x1690)) {
      puVar3 = (undefined1 *)(param_1 + 0x1690);
      for (lVar1 = 0x41c; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_230 = (longlong *)FUN_180007470();
      if (local_230 != (longlong *)0x0) {
        local_240 = 0x8c;
        local_248 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
        (**(code **)(*local_230 + 0x30))(local_230,1,0x12400,L"Boot:%S %d failed\n");
      }
    }
    wsprintfW(local_228,L"%s\\BOOT\\%s");
    local_238 = FUN_180018ff0(param_1,local_228,(undefined1 *)(param_1 + 0x1aac));
    if ((local_238 & 0xfff) != 0) {
      puVar3 = (undefined1 *)(param_1 + 0x1aac);
      for (lVar1 = 0x41c; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




uint FUN_1800193e0(undefined8 param_1,LPCWSTR param_2,LPCVOID param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  uint local_38;
  DWORD local_34;
  HANDLE local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  local_34 = 0;
  local_30 = (HANDLE)0xffffffffffffffff;
  local_38 = FUN_180013520(param_2);
  if (((local_38 & 0xfff) == 0x474) || ((local_38 & 0xfff) == 0)) {
    local_38 = 0;
    DeleteFileW(param_2);
    local_30 = CreateFileW(param_2,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
    if (local_30 == (HANDLE)0xffffffffffffffff) {
      local_28 = (longlong *)FUN_180007470();
      if (local_28 != (longlong *)0x0) {
        DVar1 = GetLastError();
        local_18 = *local_28;
        (**(code **)(local_18 + 0x30))
                  (local_28,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0xb7,param_2,DVar1);
      }
      local_38 = 0xb812504;
    }
    else {
      BVar2 = WriteFile(local_30,param_3,0x41c,&local_34,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        local_20 = (longlong *)FUN_180007470();
        if (local_20 != (longlong *)0x0) {
          DVar1 = GetLastError();
          local_10 = *local_20;
          (**(code **)(local_10 + 0x30))
                    (local_20,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0xbe,param_2,DVar1);
        }
        local_38 = 0xbf12506;
      }
      else if (local_34 != 0x41c) {
        local_38 = 0xc512506;
      }
    }
  }
  if (local_30 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_30);
    CloseHandle(local_30);
  }
  return local_38;
}




void FUN_180019610(longlong param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_258 [32];
  uint local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)(param_1 + 0x167c);
  wsprintfW(local_228,L"%s\\BOOT\\%s");
  local_238 = FUN_1800193e0(param_1,local_228,(LPCVOID)(param_1 + 0x1690));
  if (((local_238 & 0xfff) == 0) && (*(int *)(param_1 + 0x1aac) != 0)) {
    wsprintfW(local_228,L"%s\\BOOT\\%s");
    local_238 = FUN_1800193e0(param_1,local_228,(LPCVOID)(param_1 + 0x1aac));
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_180019780(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  WCHAR *pWVar6;
  undefined1 auStackY_2d8 [32];
  undefined8 *local_278;
  undefined4 local_240;
  undefined1 local_23c [16];
  uint local_22c;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_2d8;
  local_240 = 0;
  puVar5 = local_23c;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pWVar6 = local_228;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 == (undefined8 *)0x0) {
    local_278 = (undefined8 *)0x0;
  }
  else {
    local_278 = FUN_1800185a0(puVar2);
  }
  *(undefined8 **)(param_1 + 0x1670) = local_278;
  if (*(longlong *)(param_1 + 0x1670) != 0) {
    wsprintfW(local_228,L"%s");
    iVar1 = FUN_180018600(*(longlong **)(param_1 + 0x1670),local_228);
    if (iVar1 == 0) {
      plVar3 = (longlong *)FUN_180007470();
      if (plVar3 != (longlong *)0x0) {
        GetLastError();
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x12400,L"Boot:%S %d volume:%s failed:%08X\n");
      }
    }
    else {
      iVar1 = FUN_180018a10(*(undefined8 **)(param_1 + 0x1670),0x70000,(LPVOID)0x0,0,&local_240,0x18
                            ,(DWORD *)0x0);
      if (iVar1 == 0) {
        plVar3 = (longlong *)FUN_180007470();
        if (plVar3 != (longlong *)0x0) {
          GetLastError();
          (**(code **)(*plVar3 + 0x30))(plVar3,1,0x12400,L"Boot:%S %d volume:%s failed:%08X\n");
        }
      }
      else {
        if ((local_22c == 0) || (local_22c % 0x200 != 0)) {
          local_22c = 0x200;
        }
        *(uint *)(param_1 + 0x1680) = local_22c;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2d8);
  return;
}




undefined4 FUN_180019aa0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1670) != 0) {
    FUN_180018830(*(longlong **)(param_1 + 0x1670));
    if (*(longlong **)(param_1 + 0x1670) != (longlong *)0x0) {
      FUN_180019b40(*(longlong **)(param_1 + 0x1670),1);
    }
    *(undefined8 *)(param_1 + 0x1670) = 0;
  }
  return 0;
}




longlong * FUN_180019b40(longlong *param_1,uint param_2)

{
  FUN_1800185d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




uint FUN_180019b80(longlong *param_1,short *param_2,short *param_3,short *param_4,short *param_5,
                  undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  longlong *plVar2;
  uint local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  short *local_68;
  short *local_60;
  short *local_58;
  short *local_50;
  wchar_t *local_40;
  
  local_88 = param_1 + 3;
  local_68 = param_2;
  do {
    sVar1 = *local_68;
    *(short *)local_88 = sVar1;
    local_68 = local_68 + 1;
    local_88 = (longlong *)((longlong)local_88 + 2);
  } while (sVar1 != 0);
  local_80 = param_1 + 0x44;
  local_60 = param_3;
  do {
    sVar1 = *local_60;
    *(short *)local_80 = sVar1;
    local_60 = local_60 + 1;
    local_80 = (longlong *)((longlong)local_80 + 2);
  } while (sVar1 != 0);
  local_78 = param_1 + 0x85;
  local_58 = param_4;
  do {
    sVar1 = *local_58;
    *(short *)local_78 = sVar1;
    local_58 = local_58 + 1;
    local_78 = (longlong *)((longlong)local_78 + 2);
  } while (sVar1 != 0);
  local_50 = param_5;
  local_70 = param_1 + 0xc6;
  do {
    sVar1 = *local_50;
    *(short *)local_70 = sVar1;
    local_50 = local_50 + 1;
    local_70 = (longlong *)((longlong)local_70 + 2);
  } while (sVar1 != 0);
  *(undefined4 *)((longlong)param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 2) = param_7;
  local_98 = FUN_18001a3c0((longlong)param_1);
  if (((((local_98 & 0xfff) == 0) &&
       (local_98 = FUN_180019780((longlong)param_1), (local_98 & 0xfff) == 0)) &&
      ((*(int *)((longlong)param_1 + 0xc) == 0 ||
       ((local_98 = FUN_18001aec0((longlong)param_1), (local_98 & 0xfff) == 0 &&
        (local_98 = (**(code **)(*param_1 + 0x20))(param_1), (local_98 & 0xfff) == 0)))))) &&
     ((local_98 = FUN_18001b480((longlong)param_1), (local_98 & 0xfff) == 0 &&
      ((((local_98 = FUN_18001a4a0((longlong)param_1), (local_98 & 0xfff) == 0 &&
         (local_98 = FUN_18001b5c0((longlong)param_1), (local_98 & 0xfff) == 0)) &&
        (local_98 = (**(code **)(*param_1 + 0x28))(param_1), (local_98 & 0xfff) == 0)) &&
       ((local_98 = FUN_180019200((longlong)param_1), (local_98 & 0xfff) == 0 &&
        (local_98 = FUN_18001ef50((longlong)param_1), (local_98 & 0xfff) == 0)))))))) {
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      if (*(int *)((longlong)param_1 + 0x167c) == 1) {
        param_1[0x107] = 0x4400430042;
      }
      else {
        param_1[0x107] = 0x4400430042;
      }
    }
    else {
      param_1[0x107] = 0x4400430042;
    }
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      if (*(int *)((longlong)param_1 + 0xc) == 0) {
        local_40 = L"NOT USB";
      }
      else {
        local_40 = L"USB";
      }
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"Boot:%S %d %s %s %s %s %s %s %s %s %d %d %s\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x19b,param_1 + 3,
                 param_1 + 0x44,param_1 + 0x85,param_1 + 0xc6,param_1 + 0x107,param_1 + 0x148,
                 param_1 + 0x1ca,param_1 + 0x20b,(int)param_1[0x2cf],
                 *(undefined4 *)((longlong)param_1 + 0x167c),local_40);
    }
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return local_98;
}




uint FUN_18001a1c0(longlong param_1)

{
  uint local_48;
  
  local_48 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    local_48 = FUN_180019610(param_1);
  }
  FUN_180019aa0(param_1);
  if (*(longlong *)(param_1 + 0x1688) != 0) {
    free(*(void **)(param_1 + 0x1688));
    *(undefined8 *)(param_1 + 0x1688) = 0;
  }
  if (*(longlong *)(param_1 + 0x1f20) != 0) {
    free(*(void **)(param_1 + 0x1f20));
    *(undefined8 *)(param_1 + 0x1f20) = 0;
  }
  if (*(longlong *)(param_1 + 0x1ee0) != 0) {
    free(*(void **)(param_1 + 0x1ee0));
    *(undefined8 *)(param_1 + 0x1ee0) = 0;
  }
  if (*(longlong *)(param_1 + 0x1ef0) != 0) {
    free(*(void **)(param_1 + 0x1ef0));
    *(undefined8 *)(param_1 + 0x1ef0) = 0;
  }
  if (*(longlong *)(param_1 + 0x1f00) != 0) {
    free(*(void **)(param_1 + 0x1f00));
    *(undefined8 *)(param_1 + 0x1f00) = 0;
  }
  if (*(longlong *)(param_1 + 0x1f10) != 0) {
    free(*(void **)(param_1 + 0x1f10));
    *(undefined8 *)(param_1 + 0x1f10) = 0;
  }
  if (*(longlong *)(param_1 + 0x1ed0) != 0) {
    free(*(void **)(param_1 + 0x1ed0));
    *(undefined8 *)(param_1 + 0x1ed0) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return local_48;
}




void FUN_18001a3c0(longlong param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_258 [32];
  uint local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  wsprintfW(local_228,L"%s\\");
  local_238 = FUN_180010600(local_228,(undefined4 *)(param_1 + 0x1678));
  if (((local_238 & 0xfff) == 0) &&
     ((*(int *)(param_1 + 0x1678) == 0 || (*(int *)(param_1 + 0x1678) == 3)))) {
    local_238 = 0x1f512415;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




uint FUN_18001a4a0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint local_38;
  
  local_38 = 0;
  if (*(int *)(param_1 + 0x1678) == 4) {
    if ((*(char *)(*(longlong *)(param_1 + 0x1688) + 0x200) == '\x05') &&
       (iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x202),L"NTLDR",10), iVar1 == 0))
    {
      *(undefined4 *)(param_1 + 0x167c) = 1;
    }
    else if ((*(char *)(*(longlong *)(param_1 + 0x1688) + 0x200) == '\a') &&
            (iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x202),L"BOOTMGR",0xe),
            iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x167c) = 2;
    }
    else {
      local_38 = 0x214127c8;
    }
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"Boot:%S %S %d Dump system partition bootsect\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",
                 "CEditBootItem::GetBootType",0x217);
    }
    FUN_1800156e0(*(longlong *)(param_1 + 0x1688),0x400);
  }
  else if (*(int *)(param_1 + 0x1678) == 2) {
    iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x170),"NTLDR",5);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x167c) = 1;
    }
    else {
      iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x169),"BOOTMGR",7);
      if ((iVar1 == 0) ||
         (iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x16d),"BOOTMGR",7), iVar1 == 0)
         ) {
        *(undefined4 *)(param_1 + 0x167c) = 2;
      }
      else {
        local_38 = 0x228127c8;
      }
    }
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"Boot:%S %S %d Dump system partition bootsect\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",
                 "CEditBootItem::GetBootType",0x22b);
    }
    FUN_1800156e0(*(longlong *)(param_1 + 0x1688),0x200);
  }
  else {
    iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x1a1),"NTLDR",5);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x167c) = 1;
    }
    else {
      iVar1 = memcmp((void *)(*(longlong *)(param_1 + 0x1688) + 0x1a1),"BOOTMGR",7);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x167c) = 2;
      }
      else {
        local_38 = 0x23b127c8;
      }
    }
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"Boot:%S %S %d Dump system partition bootsect\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",
                 "CEditBootItem::GetBootType",0x23e);
    }
    FUN_1800156e0(*(longlong *)(param_1 + 0x1688),0x200);
  }
  if ((((local_38 & 0xfff) != 0) ||
      (((*(int *)(param_1 + 0x167c) != 2 || (iVar1 = FUN_18001aa90(), iVar1 == 0)) &&
       ((*(int *)(param_1 + 0x167c) != 1 || (iVar1 = FUN_18001ab90(), iVar1 == 0)))))) &&
     ((*(int *)(param_1 + 0xc) == 0 && (local_38 = FUN_18001acd0(param_1), (local_38 & 0xfff) == 0))
     )) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return local_38;
}




void FUN_18001a960(undefined8 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  longlong lVar2;
  _OSVERSIONINFOW *p_Var3;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined4 local_170;
  DWORD local_168;
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  _OSVERSIONINFOW local_138;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_198;
  p_Var3 = &local_138;
  for (lVar2 = 0x114; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOW *)((longlong)&p_Var3->dwOSVersionInfoSize + 1);
  }
  local_158 = 0;
  p_Var3 = &local_138;
  for (lVar2 = 0x114; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOW *)((longlong)&p_Var3->dwOSVersionInfoSize + 1);
  }
  local_138.dwOSVersionInfoSize = 0x114;
  BVar1 = GetVersionExW(&local_138);
  if (BVar1 == 0) {
    local_150 = (longlong *)FUN_180007470();
    if (local_150 != (longlong *)0x0) {
      local_168 = GetLastError();
      local_148 = *local_150;
      local_170 = 0x26f;
      local_178 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
      (**(code **)(local_148 + 0x30))(local_150,1,0x12400,L"Boot:%S %d Disk:%s failed:%08X\n");
    }
    local_158 = 0x27012500;
  }
  else if (local_138.dwMajorVersion < 6) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_198);
  return;
}




void FUN_18001aa90(void)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  undefined4 local_444;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_468;
  local_444 = 0;
  pWVar3 = local_438;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  wsprintfW(local_438,L"%s\\BOOTMGR");
  wsprintfW(local_228,L"%s\\BOOT\\BCD");
  iVar1 = FUN_18000e5e0(local_438);
  if ((iVar1 == 0) || (iVar1 = FUN_18000e5e0(local_228), iVar1 == 0)) {
    local_448 = 0;
  }
  else {
    local_448 = 1;
  }
  local_444 = local_448;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_468);
  return;
}




void FUN_18001ab90(void)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_678 [32];
  undefined4 local_658;
  undefined4 local_654;
  WCHAR local_648 [264];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_678;
  local_654 = 0;
  pWVar3 = local_648;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  pWVar3 = local_438;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  wsprintfW(local_648,L"%s\\NTLDR");
  wsprintfW(local_438,L"%s\\BOOT.INI");
  wsprintfW(local_228,L"%s\\NTDETECT.COM");
  iVar1 = FUN_18000e5e0(local_648);
  if (((iVar1 == 0) || (iVar1 = FUN_18000e5e0(local_438), iVar1 == 0)) ||
     (iVar1 = FUN_18000e5e0(local_228), iVar1 == 0)) {
    local_658 = 0;
  }
  else {
    local_658 = 1;
  }
  local_654 = local_658;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_678);
  return;
}




uint FUN_18001acd0(longlong param_1)

{
  int iVar1;
  uint local_28;
  int local_24;
  longlong *local_20;
  longlong *local_18;
  
  local_24 = 0;
  local_28 = FUN_18001a960(param_1,&local_24);
  if ((local_28 & 0xfff) == 0) {
    if (local_24 == 0) {
      iVar1 = FUN_18001aa90();
      if ((iVar1 == 0) || (iVar1 = FUN_18001ab90(), iVar1 == 0)) {
        iVar1 = FUN_18001aa90();
        if (iVar1 == 0) {
          iVar1 = FUN_18001ab90();
          if (iVar1 == 0) {
            local_18 = (longlong *)FUN_180007470();
            if (local_18 != (longlong *)0x0) {
              (**(code **)(*local_18 + 0x30))
                        (local_18,1,0x12400,L"Boot:%S %d\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x2c8);
            }
            local_28 = 0x2c9127c8;
          }
          else {
            *(undefined4 *)(param_1 + 0x167c) = 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x167c) = 2;
        }
      }
      else {
        local_20 = (longlong *)FUN_180007470();
        if (local_20 != (longlong *)0x0) {
          (**(code **)(*local_20 + 0x30))
                    (local_20,1,0x12400,L"Boot:%S %d\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x2b6);
        }
        *(undefined4 *)(param_1 + 0x167c) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x167c) = 2;
    }
  }
  return local_28;
}




undefined4 FUN_18001ae70(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  
  local_18 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x2d912405;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x167c);
  }
  return local_18;
}




void FUN_18001aec0(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  undefined1 auStack_348 [32];
  char *local_328;
  undefined4 local_320;
  WCHAR *local_318;
  DWORD local_310;
  undefined4 local_308;
  longlong *local_300;
  undefined1 *local_2f8;
  int local_2f0;
  LPVOID local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  undefined8 *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong local_290;
  undefined1 *local_288;
  LPVOID local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  longlong *local_258;
  undefined1 *local_250;
  void *local_248;
  undefined8 local_240;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_240 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_348;
  local_2f0 = 0;
  local_2f8 = (undefined1 *)0x0;
  local_2e8 = (LPVOID)0x0;
  local_300 = (longlong *)0x0;
  local_308 = 0;
  pWVar5 = local_238;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  if ((*(int *)(param_1 + 0x1680) == 0) || (*(longlong *)(param_1 + 0x1670) == 0)) {
    local_308 = 0x2f012409;
  }
  else {
    local_2f0 = FUN_18000eb20(*(undefined2 *)(param_1 + 0x220));
    if (local_2f0 < 0) {
      local_308 = 0x2f712461;
    }
    else {
      local_2c0 = (undefined8 *)operator_new(0x10);
      local_2a8 = local_2c0;
      if (local_2c0 == (undefined8 *)0x0) {
        local_2b8 = (longlong *)0x0;
      }
      else {
        local_2b8 = FUN_1800185a0(local_2c0);
        local_2a0 = local_2b8;
      }
      local_298 = local_2b8;
      local_300 = local_2b8;
      if (local_2b8 == (longlong *)0x0) {
        local_308 = 0x3071240a;
      }
      else {
        wsprintfW(local_238,L"\\\\.\\PhysicalDrive%d");
        iVar1 = FUN_180018600(local_300,local_238);
        if (iVar1 == 0) {
          local_2e0 = (longlong *)FUN_180007470();
          if (local_2e0 != (longlong *)0x0) {
            local_310 = GetLastError();
            local_290 = *local_2e0;
            local_318 = local_238;
            local_320 = 0x30e;
            local_328 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
            (**(code **)(local_290 + 0x30))(local_2e0,1,0x12400,L"Boot:%S %d Disk:%s failed:%08X\n")
            ;
          }
          local_308 = 0x30f1242d;
        }
        else {
          local_2f8 = (undefined1 *)thunk_FUN_18003d108((ulonglong)*(uint *)(param_1 + 0x1680));
          local_288 = local_2f8;
          local_2e8 = (LPVOID)thunk_FUN_18003d108((ulonglong)*(uint *)(param_1 + 0x1680));
          local_280 = local_2e8;
          if ((local_2f8 == (undefined1 *)0x0) || (local_2e8 == (LPVOID)0x0)) {
            local_308 = 0x31912408;
          }
          else {
            iVar1 = FUN_180018890(local_300,local_2f8,0,1);
            if (iVar1 == 0) {
              local_2d8 = (longlong *)FUN_180007470();
              if (local_2d8 != (longlong *)0x0) {
                DVar2 = GetLastError();
                local_278 = *local_2d8;
                local_318 = (WCHAR *)CONCAT44(local_318._4_4_,DVar2);
                local_320 = 799;
                local_328 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
                (**(code **)(local_278 + 0x30))(local_2d8,1,0x12400,L"Boot:%S %d failed:%08X\n");
              }
              local_308 = 0x32012476;
            }
            else {
              iVar1 = FUN_180018890(*(undefined8 **)(param_1 + 0x1670),local_2e8,0,1);
              if (iVar1 == 0) {
                local_2d0 = (longlong *)FUN_180007470();
                if (local_2d0 != (longlong *)0x0) {
                  DVar2 = GetLastError();
                  local_270 = *local_2d0;
                  local_318 = (WCHAR *)CONCAT44(local_318._4_4_,DVar2);
                  local_320 = 0x327;
                  local_328 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
                  (**(code **)(local_270 + 0x30))(local_2d0,1,0x12400,L"Boot:%S %d failed:%08X\n");
                }
                local_308 = 0x32812476;
              }
              else {
                iVar1 = memcmp(local_2f8,local_2e8,(ulonglong)*(uint *)(param_1 + 0x1680));
                if (iVar1 == 0) {
                  local_308 = 0;
                }
                else {
                  puVar4 = &DAT_180064840;
                  puVar6 = local_2f8;
                  for (lVar3 = 0x1b8; lVar3 != 0; lVar3 = lVar3 + -1) {
                    *puVar6 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar6 = puVar6 + 1;
                  }
                  iVar1 = FUN_180018950(local_300,local_2f8,0,1);
                  if (iVar1 == 0) {
                    local_2c8 = (longlong *)FUN_180007470();
                    if (local_2c8 != (longlong *)0x0) {
                      DVar2 = GetLastError();
                      local_268 = *local_2c8;
                      local_318 = (WCHAR *)CONCAT44(local_318._4_4_,DVar2);
                      local_320 = 0x336;
                      local_328 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
                      (**(code **)(local_268 + 0x30))
                                (local_2c8,1,0x12400,L"Boot:%S %d failed:%08X\n");
                    }
                    local_308 = 0x33712477;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_300 != (longlong *)0x0) {
    FUN_180018830(local_300);
    local_260 = local_300;
    local_2b0 = local_300;
    if (local_300 == (longlong *)0x0) {
      local_258 = (longlong *)0x0;
    }
    else {
      local_258 = FUN_180019b40(local_300,1);
    }
    local_300 = (longlong *)0x0;
  }
  if (local_2f8 != (undefined1 *)0x0) {
    local_250 = local_2f8;
    free(local_2f8);
    local_2f8 = (undefined1 *)0x0;
  }
  if (local_2e8 != (void *)0x0) {
    local_248 = local_2e8;
    free(local_2e8);
    local_2e8 = (void *)0x0;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_348);
  return;
}




undefined4 FUN_18001b480(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined4 local_38;
  
  local_38 = 0;
  pvVar3 = operator_new((ulonglong)(uint)(*(int *)(param_1 + 0x1680) * 0x10));
  *(void **)(param_1 + 0x1688) = pvVar3;
  if (*(longlong *)(param_1 + 0x1688) == 0) {
    local_38 = 0x36412408;
  }
  else {
    iVar1 = FUN_180018890(*(undefined8 **)(param_1 + 0x1670),*(LPVOID *)(param_1 + 0x1688),0,0x10);
    if (iVar1 == 0) {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        DVar2 = GetLastError();
        (**(code **)(*plVar4 + 0x30))
                  (plVar4,1,0x12400,L"Boot:%S %d failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x36a,DVar2);
      }
      local_38 = 0x36b12476;
    }
  }
  return local_38;
}




void FUN_18001b5c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_268 [32];
  int local_248;
  undefined4 local_244;
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_268;
  local_244 = 0;
  puVar3 = local_238;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      local_248 = *(int *)(param_1 + 0x1678);
      if (local_248 == 1) {
        if (*(int *)(param_1 + 0x167c) == 1) {
          puVar3 = &DAT_180060440;
          puVar4 = *(undefined1 **)(param_1 + 0x1688);
          for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = &DAT_180060476;
          puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x36);
          for (lVar2 = 0x1ca; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          puVar3 = &DAT_180060640;
          puVar4 = *(undefined1 **)(param_1 + 0x1688);
          for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = &DAT_180060676;
          puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x36);
          for (lVar2 = 0x1ca; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
      }
      else if (local_248 == 2) {
        if (*(int *)(param_1 + 0x167c) == 1) {
          puVar3 = &DAT_180060240;
          puVar4 = *(undefined1 **)(param_1 + 0x1688);
          for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = &DAT_180060292;
          puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x52);
          for (lVar2 = 0x1ae; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          puVar3 = &DAT_180060040;
          puVar4 = *(undefined1 **)(param_1 + 0x1688);
          for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = &DAT_180060092;
          puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x52);
          for (lVar2 = 0x1ae; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
      }
      else if (local_248 == 4) {
        if (*(int *)(param_1 + 0x167c) == 1) {
          puVar3 = &DAT_180060840;
          puVar4 = *(undefined1 **)(param_1 + 0x1688);
          for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = &DAT_180060890;
          puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x50);
          for (lVar2 = 0x1fb0; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          puVar3 = &DAT_18005e040;
          puVar4 = *(undefined1 **)(param_1 + 0x1688);
          for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = &DAT_18005e090;
          puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x50);
          for (lVar2 = 0x1fb0; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
      }
      else {
        local_244 = 0x3cd12415;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x1678) == 1) || (*(int *)(param_1 + 0x1678) == 2)) {
    if (*(int *)(param_1 + 0x1678) == 1) {
      **(undefined1 **)(param_1 + 0x1688) = 0xeb;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 1) = 0x3c;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 2) = 0x90;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x24) = 0x80;
    }
    else {
      **(undefined1 **)(param_1 + 0x1688) = 0xeb;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 1) = 0x58;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 2) = 0x90;
      *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x40) = 0x80;
    }
    iVar1 = FUN_180018950(*(undefined8 **)(param_1 + 0x1670),*(LPCVOID *)(param_1 + 0x1688),0,1);
    if (iVar1 == 0) {
      local_244 = 0x39212477;
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_268);
  return;
}




void FUN_18001b9e0(longlong param_1,int param_2)

{
  WCHAR WVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  undefined1 auStackY_d68 [32];
  uint local_d28;
  DWORD local_d24;
  undefined2 local_d20;
  WCHAR local_d1e;
  short local_d1c;
  short local_d1a;
  WCHAR local_d18;
  int local_d14;
  int local_d10;
  short *local_d08;
  WCHAR *local_d00;
  WCHAR *local_cf8;
  WCHAR *local_cf0;
  short *local_ce8;
  uint local_ce0;
  WCHAR *local_cd8;
  longlong *local_cd0;
  WCHAR *local_cc8;
  longlong *local_cc0;
  WCHAR *local_cb8;
  short *local_cb0;
  short *local_ca8;
  longlong *local_ca0;
  undefined4 local_c98;
  longlong local_c90;
  longlong local_c88;
  longlong local_c80;
  undefined8 local_c78;
  WCHAR *local_c70;
  WCHAR *local_c68;
  short *local_c60;
  short *local_c58;
  WCHAR *local_c50;
  int local_c48 [136];
  WCHAR local_a28 [264];
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_c78 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_d68;
  local_d24 = 0;
  FUN_18002f090(local_c48);
  local_d10 = 0;
  local_c98 = 0;
  local_d14 = 0;
  pWVar5 = local_a28;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_818;
  for (lVar4 = 0x800; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  wsprintfW(local_a28,L"%s\\BOOT.INI");
  local_d28 = FUN_18002f230(local_c48,local_a28,*(int *)(param_1 + 0xc));
  if ((local_d28 & 0xfff) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if (param_2 == 0) {
        FUN_18002f8c0(local_c48,L"boot loader",L"timeout",local_818,0x400,&local_d24);
        if (local_d24 == 0) {
          local_ca0 = (longlong *)FUN_180007470();
          if (local_ca0 != (longlong *)0x0) {
            GetLastError();
            local_c80 = *local_ca0;
            (**(code **)(local_c80 + 0x30))(local_ca0,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          puVar6 = (undefined1 *)(param_1 + 0x18a4);
          for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          uVar2 = FUN_18002f940(local_c48,L"boot loader",L"timeout",L"5");
          if ((uVar2 & 0xfff) != 0) {
            local_d28 = 0x47912490;
            goto LAB_18001c48f;
          }
        }
        else {
          local_d10 = _wtoi(local_818);
          if (local_d10 < 5) {
            local_cd8 = local_818;
            local_c50 = (WCHAR *)(param_1 + 0x18a4);
            local_d00 = local_c50;
            do {
              local_d18 = *local_cd8;
              *local_d00 = local_d18;
              local_cd8 = local_cd8 + 1;
              local_d00 = local_d00 + 1;
            } while (local_d18 != L'\0');
            uVar2 = FUN_18002f940(local_c48,L"boot loader",L"timeout",L"5");
            if ((uVar2 & 0xfff) != 0) {
              local_d28 = 0x48612490;
              goto LAB_18001c48f;
            }
          }
        }
        local_d28 = FUN_18002f940(local_c48,L"operating systems",(LPCWSTR)(param_1 + 0xa40),
                                  (LPCWSTR)(param_1 + 0x630));
        if ((local_d28 & 0xfff) == 0) {
          *(undefined4 *)(param_1 + 0x1698) = 1;
        }
        else {
          local_d28 = 0x49012490;
        }
      }
      else {
        FUN_18002f8c0(local_c48,L"boot loader",L"default",local_818,0x400,&local_d24);
        if (local_d24 == 0) {
          local_cd0 = (longlong *)FUN_180007470();
          if (local_cd0 != (longlong *)0x0) {
            GetLastError();
            local_c90 = *local_cd0;
            (**(code **)(local_c90 + 0x30))(local_cd0,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          puVar6 = (undefined1 *)(param_1 + 0x169c);
          for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          iVar3 = _wcsicmp((wchar_t *)(param_1 + 0xa40),local_818);
          if ((iVar3 == 0) || (iVar3 = _wcsicmp((wchar_t *)(param_1 + 0xc48),local_818), iVar3 == 0)
             ) {
            iVar3 = _wcsicmp((wchar_t *)(param_1 + 0xc48),local_818);
            if (iVar3 == 0) {
              if ((*(int *)(param_1 + 0x1aac) == 0) || (*(int *)(param_1 + 0x1ab0) != 1)) {
                local_d14 = 0;
                puVar6 = (undefined1 *)(param_1 + 0x169c);
                for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar6 = 0;
                  puVar6 = puVar6 + 1;
                }
              }
              else {
                local_d14 = 1;
              }
            }
          }
          else {
            local_cc8 = local_818;
            local_c70 = (WCHAR *)(param_1 + 0x169c);
            local_cf8 = local_c70;
            do {
              WVar1 = *local_cc8;
              *local_cf8 = WVar1;
              local_cc8 = local_cc8 + 1;
              local_cf8 = local_cf8 + 1;
            } while (WVar1 != L'\0');
            local_d20 = 0;
          }
        }
        FUN_18002f8c0(local_c48,L"boot loader",L"timeout",local_818,0x400,&local_d24);
        if (local_d24 == 0) {
          local_cc0 = (longlong *)FUN_180007470();
          if (local_cc0 != (longlong *)0x0) {
            GetLastError();
            local_c88 = *local_cc0;
            (**(code **)(local_c88 + 0x30))(local_cc0,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          puVar6 = (undefined1 *)(param_1 + 0x18a4);
          for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          uVar2 = FUN_18002f940(local_c48,L"boot loader",L"timeout",L"5");
          if ((uVar2 & 0xfff) != 0) {
            local_d28 = 0x43012490;
            goto LAB_18001c48f;
          }
        }
        else {
          iVar3 = _wcsicmp(L"5",local_818);
          if (iVar3 != 0) {
            local_cb8 = local_818;
            local_c68 = (WCHAR *)(param_1 + 0x18a4);
            local_cf0 = local_c68;
            do {
              local_d1e = *local_cb8;
              *local_cf0 = local_d1e;
              local_cb8 = local_cb8 + 1;
              local_cf0 = local_cf0 + 1;
            } while (local_d1e != L'\0');
          }
        }
        uVar2 = FUN_18002f940(local_c48,L"boot loader",L"default",(LPCWSTR)(param_1 + 0xa40));
        if ((uVar2 & 0xfff) == 0) {
          uVar2 = FUN_18002f940(local_c48,L"boot loader",L"timeout",L"5");
          if ((uVar2 & 0xfff) == 0) {
            local_d28 = FUN_18002f940(local_c48,L"operating systems",(LPCWSTR)(param_1 + 0xa40),
                                      (LPCWSTR)(param_1 + 0x630));
            if ((local_d28 & 0xfff) == 0) {
              *(undefined4 *)(param_1 + 0x1694) = 1;
              if (local_d14 != 0) {
                if (*(short *)(param_1 + 0x1cc0) != 0) {
                  local_cb0 = (short *)(param_1 + 0x1cc0);
                  local_c60 = (short *)(param_1 + 0x18a4);
                  local_ce8 = local_c60;
                  do {
                    local_d1c = *local_cb0;
                    *local_ce8 = local_d1c;
                    local_cb0 = local_cb0 + 1;
                    local_ce8 = local_ce8 + 1;
                  } while (local_d1c != 0);
                }
                if (*(short *)(param_1 + 0x1ab8) != 0) {
                  local_ca8 = (short *)(param_1 + 0x1ab8);
                  local_c58 = (short *)(param_1 + 0x169c);
                  local_d08 = local_c58;
                  do {
                    local_d1a = *local_ca8;
                    *local_d08 = local_d1a;
                    local_ca8 = local_ca8 + 1;
                    local_d08 = local_d08 + 1;
                  } while (local_d1a != 0);
                }
              }
              puVar6 = (undefined1 *)(param_1 + 0x1ab8);
              for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              puVar6 = (undefined1 *)(param_1 + 0x1cc0);
              for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              *(undefined4 *)(param_1 + 0x1ab0) = 0;
            }
            else {
              local_d28 = 0x45012490;
            }
          }
          else {
            local_d28 = 0x44812490;
          }
        }
        else {
          local_d28 = 0x44012490;
        }
      }
    }
    else {
      uVar2 = FUN_18002f940(local_c48,L"boot loader",L"default",(LPCWSTR)(param_1 + 0xa40));
      if ((uVar2 & 0xfff) == 0) {
        uVar2 = FUN_18002f940(local_c48,L"boot loader",L"timeout",L"0");
        if ((uVar2 & 0xfff) == 0) {
          local_d28 = FUN_18002f940(local_c48,L"operating systems",(LPCWSTR)(param_1 + 0xa40),
                                    (LPCWSTR)(param_1 + 0x630));
          if ((local_d28 & 0xfff) == 0) {
            *(undefined4 *)(param_1 + 0x1694) = 0;
            *(undefined4 *)(param_1 + 0x1698) = 1;
          }
          else {
            local_d28 = 0x3ff12490;
          }
        }
        else {
          local_d28 = 0x3f712490;
        }
      }
      else {
        local_d28 = 0x3ef12490;
      }
    }
  }
LAB_18001c48f:
  FUN_18002f780(local_c48);
  local_ce0 = local_d28;
  FUN_18002f0e0(local_c48);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_d68);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001c4e0(longlong param_1,int param_2)

{
  WCHAR WVar1;
  WCHAR WVar2;
  int iVar3;
  uint uVar4;
  WCHAR *pWVar5;
  size_t sVar6;
  longlong lVar7;
  short *psVar8;
  undefined1 *puVar9;
  undefined1 auStackY_1568 [32];
  uint local_1528;
  uint local_1524;
  DWORD local_1520;
  short local_151c;
  short *local_1518;
  longlong local_1510;
  longlong local_1508;
  longlong local_1500;
  longlong local_14f8;
  longlong local_14f0;
  LPCWSTR local_14e8;
  uint local_14e0;
  longlong *local_14d8;
  short *local_14d0;
  longlong *local_14c8;
  longlong *local_14c0;
  void *local_14b8;
  longlong local_14b0;
  short *local_14a8;
  longlong local_14a0;
  wchar_t *local_1498;
  longlong local_1490;
  longlong local_1488;
  wchar_t *local_1480;
  longlong local_1478;
  longlong local_1470;
  longlong local_1468;
  undefined8 local_1460;
  short *local_1458;
  int local_1448 [136];
  WCHAR local_1228 [1024];
  WCHAR local_a28 [264];
  short local_818 [1024];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18001c4f4;
  local_1460 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_1568;
  FUN_18002f090(local_1448);
  local_14e8 = (LPCWSTR)0x0;
  local_14b8 = (void *)0x0;
  local_1520 = 0;
  pWVar5 = local_a28;
  for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_1228;
  for (lVar7 = 0x800; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  psVar8 = local_818;
  for (lVar7 = 0x800; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)psVar8 = 0;
    psVar8 = (short *)((longlong)psVar8 + 1);
  }
  wsprintfW(local_a28,L"%s\\BOOT.INI");
  local_1528 = FUN_18002f230(local_1448,local_a28,0);
  if ((local_1528 & 0xfff) == 0) {
    if (param_2 == 0) {
      FUN_18002f8c0(local_1448,L"boot loader",L"default",local_1228,0x400,&local_1520);
      if (local_1520 == 0) {
        local_14c0 = (longlong *)FUN_180007470();
        if (local_14c0 != (longlong *)0x0) {
          GetLastError();
          local_1468 = *local_14c0;
          (**(code **)(local_1468 + 0x30))(local_14c0,1,0x12400);
        }
        puVar9 = (undefined1 *)(param_1 + 0x169c);
        for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        puVar9 = (undefined1 *)(param_1 + 0x18a4);
        for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(param_1 + 0x1694) = 0;
        FUN_18002f940(local_1448,L"operating systems",(LPCWSTR)(param_1 + 0xa40),(LPCWSTR)0x0);
      }
      else {
        iVar3 = _wcsicmp((wchar_t *)(param_1 + 0xa40),local_1228);
        if (iVar3 != 0) {
          puVar9 = (undefined1 *)(param_1 + 0x169c);
          for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          if (*(short *)(param_1 + 0x18a4) != 0) {
            FUN_18002f8c0(local_1448,L"boot loader",L"timeout",local_1228,0x400,&local_1520);
            pWVar5 = local_1228;
            lVar7 = (longlong)&DAT_18004165c - (longlong)pWVar5;
            do {
              WVar2 = *pWVar5;
              WVar1 = *(WCHAR *)((longlong)pWVar5 + lVar7);
              if (WVar2 != WVar1) {
                uVar4 = -(uint)((ushort)WVar2 < (ushort)WVar1) | 1;
                goto LAB_18001cf53;
              }
              pWVar5 = pWVar5 + 1;
            } while (WVar2 != L'\0');
            uVar4 = 0;
LAB_18001cf53:
            if ((uVar4 == 0) &&
               (local_1528 = FUN_18002f940(local_1448,L"boot loader",L"timeout",
                                           (LPCWSTR)(param_1 + 0x18a4)), (local_1528 & 0xfff) != 0))
            {
              local_1528 = 0x54b12490;
              goto LAB_18001d00e;
            }
            puVar9 = (undefined1 *)(param_1 + 0x18a4);
            for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
          *(undefined4 *)(param_1 + 0x1694) = 0;
          FUN_18002f940(local_1448,L"operating systems",(LPCWSTR)(param_1 + 0xa40),(LPCWSTR)0x0);
        }
      }
      *(undefined4 *)(param_1 + 0x1698) = 0;
    }
    else {
      FUN_18002f8c0(local_1448,L"boot loader",L"default",local_1228,0x400,&local_1520);
      if (local_1520 == 0) {
        local_14d8 = (longlong *)FUN_180007470();
        if (local_14d8 != (longlong *)0x0) {
          GetLastError();
          local_14b0 = *local_14d8;
          (**(code **)(local_14b0 + 0x30))(local_14d8,1,0x12400,L"Boot:%S %d failed:%08X\n");
        }
        puVar9 = (undefined1 *)(param_1 + 0x169c);
        for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        puVar9 = (undefined1 *)(param_1 + 0x18a4);
        for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      else {
        iVar3 = _wcsicmp((wchar_t *)(param_1 + 0xa40),local_1228);
        if (iVar3 == 0) {
          psVar8 = local_818;
          for (lVar7 = 0x800; lVar7 != 0; lVar7 = lVar7 + -1) {
            *(undefined1 *)psVar8 = 0;
            psVar8 = (short *)((longlong)psVar8 + 1);
          }
          local_14d0 = (short *)(param_1 + 0x169c);
          local_1458 = local_818;
          local_1518 = local_1458;
          do {
            local_151c = *local_14d0;
            *local_1518 = local_151c;
            local_14d0 = local_14d0 + 1;
            local_1518 = local_1518 + 1;
          } while (local_151c != 0);
          if ((*(short *)(param_1 + 0x169c) != 0) &&
             (local_1528 = FUN_18002f940(local_1448,L"boot loader",L"default",
                                         (LPCWSTR)(param_1 + 0x169c)), (local_1528 & 0xfff) != 0)) {
            local_1528 = 0x4cc12490;
            goto LAB_18001d00e;
          }
          puVar9 = (undefined1 *)(param_1 + 0x169c);
          for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          if (*(short *)(param_1 + 0x18a4) == 0) {
            puVar9 = (undefined1 *)(param_1 + 0x18a4);
            for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
          else {
            FUN_18002f8c0(local_1448,L"boot loader",L"timeout",local_1228,0x400,&local_1520);
            pWVar5 = local_1228;
            lVar7 = (longlong)&DAT_180041494 - (longlong)pWVar5;
            do {
              WVar2 = *pWVar5;
              WVar1 = *(WCHAR *)((longlong)pWVar5 + lVar7);
              if (WVar2 != WVar1) {
                uVar4 = -(uint)((ushort)WVar2 < (ushort)WVar1) | 1;
                goto LAB_18001c8cd;
              }
              pWVar5 = pWVar5 + 1;
            } while (WVar2 != L'\0');
            uVar4 = 0;
LAB_18001c8cd:
            if ((uVar4 == 0) &&
               (local_1528 = FUN_18002f940(local_1448,L"boot loader",L"timeout",
                                           (LPCWSTR)(param_1 + 0x18a4)), (local_1528 & 0xfff) != 0))
            {
              local_1528 = 0x4df12490;
              goto LAB_18001d00e;
            }
            puVar9 = (undefined1 *)(param_1 + 0x18a4);
            for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
          if (*(int *)(param_1 + 0x1698) == 0) {
            FUN_18002f940(local_1448,L"operating systems",(LPCWSTR)(param_1 + 0xa40),(LPCWSTR)0x0);
          }
          FUN_18002f8c0(local_1448,L"operating systems",(LPCWSTR)0x0,local_1228,0x400,&local_1520);
          if (local_1520 == 0) {
            local_1528 = 0x4f412490;
            goto LAB_18001d00e;
          }
          local_14a8 = local_818;
          local_1510 = -1;
          do {
            local_1510 = local_1510 + 1;
          } while (local_14a8[local_1510] != 0);
          local_14b8 = FUN_180018bb0(local_1228,0x800,(char *)local_818,(int)local_1510 * 2 + 2);
          if ((local_818[0] == 0) || (local_14b8 == (void *)0x0)) {
            local_14e8 = (LPCWSTR)0x0;
            local_1524 = 0;
LAB_18001ca74:
            if ((0x3ff < local_1524) || (local_1228[local_1524] == L'\0')) goto LAB_18001cc49;
            local_14a0 = param_1 + 0xa40;
            local_1508 = -1;
            lVar7 = local_1508;
            do {
              local_1508 = lVar7;
              lVar7 = local_1508 + 1;
            } while (*(short *)(local_14a0 + lVar7 * 2) != 0);
            sVar6 = local_1508 + 2;
            local_1498 = local_1228 + local_1524;
            local_1508 = lVar7;
            iVar3 = wmemcmp(local_1498,(wchar_t *)(param_1 + 0xa40),sVar6);
            if (iVar3 == 0) {
              local_1490 = param_1 + 0xa40;
              local_1500 = -1;
              do {
                local_1500 = local_1500 + 1;
              } while (*(short *)(local_1490 + local_1500 * 2) != 0);
              iVar3 = (int)local_1500;
LAB_18001ca6a:
              local_1524 = local_1524 + iVar3;
              local_1524 = local_1524 + 1;
              goto LAB_18001ca74;
            }
            local_1488 = param_1 + 0xc48;
            local_14f8 = -1;
            lVar7 = local_14f8;
            do {
              local_14f8 = lVar7;
              lVar7 = local_14f8 + 1;
            } while (*(short *)(local_1488 + lVar7 * 2) != 0);
            sVar6 = local_14f8 + 2;
            local_1480 = local_1228 + local_1524;
            local_14f8 = lVar7;
            iVar3 = wmemcmp(local_1480,(wchar_t *)(param_1 + 0xc48),sVar6);
            if (iVar3 == 0) {
              local_1478 = param_1 + 0xc48;
              local_14f0 = -1;
              do {
                local_14f0 = local_14f0 + 1;
              } while (*(short *)(local_1478 + local_14f0 * 2) != 0);
              iVar3 = (int)local_14f0;
              goto LAB_18001ca6a;
            }
            local_14e8 = local_1228 + local_1524;
LAB_18001cc49:
            if (local_14e8 == (LPCWSTR)0x0) {
              local_14c8 = (longlong *)FUN_180007470();
              if (local_14c8 != (longlong *)0x0) {
                GetLastError();
                local_1470 = *local_14c8;
                (**(code **)(local_1470 + 0x30))(local_14c8,1,0x12400,L"Boot:%S %d failed:%08X\n");
              }
            }
            else {
              FUN_18002f940(local_1448,L"boot loader",L"default",local_14e8);
            }
          }
        }
        else {
          puVar9 = (undefined1 *)(param_1 + 0x169c);
          for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          puVar9 = (undefined1 *)(param_1 + 0x18a4);
          for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x1694) = 0;
      FUN_18002f8c0(local_1448,L"operating systems",(LPCWSTR)(param_1 + 0xa40),local_1228,0x400,
                    &local_1520);
      if (local_1520 == 0) {
        *(undefined4 *)(param_1 + 0x1698) = 0;
      }
    }
  }
LAB_18001d00e:
  FUN_18002f780(local_1448);
  local_14e0 = local_1528;
  FUN_18002f0e0(local_1448);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1568);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001d060(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 *puVar4;
  undefined1 auStackY_14b8 [32];
  DWORD local_1478;
  uint local_1474;
  uint local_1470;
  longlong *local_1468;
  longlong local_1460;
  undefined8 local_1458;
  int local_1448 [136];
  WCHAR local_1228 [264];
  WCHAR local_1018 [1024];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18001d079;
  local_1458 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_14b8;
  local_1478 = 0;
  FUN_18002f090(local_1448);
  local_1474 = 0;
  pWVar3 = local_1228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  pWVar3 = local_1018;
  for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  puVar4 = local_818;
  for (lVar2 = 0x800; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  wsprintfW(local_1228,L"%s\\BOOT.INI");
  local_1474 = FUN_18002f230(local_1448,local_1228,0);
  if ((local_1474 & 0xfff) == 0) {
    if (param_2 == 0) {
      FUN_18002f8c0(local_1448,L"operating systems",(LPCWSTR)(param_1 + 0xa40),local_1018,0x400,
                    &local_1478);
      if (local_1478 == 0) {
        *(undefined4 *)(param_1 + 0x1694) = 0;
        *(undefined4 *)(param_1 + 0x1698) = 0;
        puVar4 = (undefined1 *)(param_1 + 0x169c);
        for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar4 = (undefined1 *)(param_1 + 0x18a4);
        for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *param_3 = *(undefined4 *)(param_1 + 0x1698);
      }
      else {
        FUN_18002f8c0(local_1448,L"boot loader",L"default",local_1018,0x400,&local_1478);
        if (local_1478 == 0) {
          local_1468 = (longlong *)FUN_180007470();
          if (local_1468 != (longlong *)0x0) {
            GetLastError();
            local_1460 = *local_1468;
            (**(code **)(local_1460 + 0x30))(local_1468,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          *(undefined4 *)(param_1 + 0x1694) = 0;
          puVar4 = (undefined1 *)(param_1 + 0x169c);
          for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          puVar4 = (undefined1 *)(param_1 + 0x18a4);
          for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          iVar1 = _wcsicmp((wchar_t *)(param_1 + 0xa40),local_1018);
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x1694) = 0;
            puVar4 = (undefined1 *)(param_1 + 0x169c);
            for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
            puVar4 = (undefined1 *)(param_1 + 0x18a4);
            for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
          }
        }
        *param_3 = *(undefined4 *)(param_1 + 0x1698);
      }
    }
    else {
      local_1474 = 0x57212406;
    }
  }
  FUN_18002f780(local_1448);
  local_1470 = local_1474;
  FUN_18002f0e0(local_1448);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_14b8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001d3d0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 *puVar3;
  undefined1 auStack_18b8 [32];
  uint local_1898;
  uint local_1894;
  wchar_t local_1890;
  uint local_188c;
  int local_1888;
  longlong local_1880;
  int local_1878;
  longlong local_1870;
  wchar_t *local_1868;
  wchar_t *local_1860;
  longlong local_1858;
  longlong local_1850;
  longlong local_1848;
  longlong local_1840;
  wchar_t *local_1838;
  undefined1 local_1828 [2048];
  undefined1 local_1028 [2048];
  wchar_t local_828 [1024];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x18001d3f0;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_18b8;
  local_1894 = 0;
  local_1878 = 0;
  puVar3 = local_1828;
  for (lVar1 = 0x1800; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_1898 = 0;
  local_188c = 0;
  local_1888 = 0;
  local_1870 = 0;
  local_1880 = 0;
  if (param_2 == (longlong *)0x0) {
    local_1898 = 0x5af1240a;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    if (param_4 == 0) {
      local_1888 = *(int *)(param_1 + 0x1ed8);
      local_1880 = *(longlong *)(param_1 + 0x1ee0);
      local_188c = *(uint *)(param_1 + 0x1ee8);
      local_1870 = *(longlong *)(param_1 + 0x1ef0);
    }
    else {
      local_1888 = *(int *)(param_1 + 0x1ef8);
      local_1880 = *(longlong *)(param_1 + 0x1f00);
      local_188c = *(uint *)(param_1 + 0x1f08);
      local_1870 = *(longlong *)(param_1 + 0x1f10);
    }
    if (*(int *)(param_1 + 0x167c) == 1) {
      if (local_1870 == 0) {
        local_1898 = 0x5cc1240a;
      }
      else {
        for (local_1894 = 0; local_1894 < local_188c; local_1894 = local_1894 + 1) {
          local_1858 = *param_2;
          local_1898 = (**(code **)(local_1858 + 0x50))
                                 (param_2,local_1870 + (ulonglong)local_1894 * 0x1800);
          if ((local_1898 & 0xfff) != 0) break;
        }
      }
    }
    else if (local_1880 == 0) {
      local_1898 = 0x5de1240a;
    }
    else {
      for (local_1894 = 0; local_1894 < local_1888 - 2U; local_1894 = local_1894 + 1) {
        local_1850 = *param_2;
        local_1898 = (**(code **)(local_1850 + 0x50))
                               (param_2,local_1880 + (ulonglong)local_1894 * 0x1800,0);
        if ((local_1898 & 0xfff) != 0) break;
      }
      if ((local_1898 & 0xfff) == 0) {
        if (param_3 == 0) {
          local_1894 = local_1894 + 1;
          local_1840 = *param_2;
          local_1898 = (**(code **)(local_1840 + 0x50))
                                 (param_2,local_1880 + (ulonglong)local_1894 * 0x1800);
          pwVar2 = L"{bootmgr}";
          puVar3 = local_1828;
          for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
            *puVar3 = (char)*pwVar2;
            pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
            puVar3 = puVar3 + 1;
          }
          pwVar2 = L"timeout";
          puVar3 = local_1028;
          for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
            *puVar3 = (char)*pwVar2;
            pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
            puVar3 = puVar3 + 1;
          }
          local_1898 = (**(code **)(*param_2 + 0x58))(param_2,local_1828);
          if ((local_1898 & 0xfff) == 0) {
            local_1878 = _wtoi(local_828);
            if (local_1878 < 5) {
              local_1860 = local_828;
              local_1838 = (wchar_t *)(param_1 + 0x18a4);
              local_1868 = local_1838;
              do {
                local_1890 = *local_1860;
                *local_1868 = local_1890;
                local_1860 = local_1860 + 1;
                local_1868 = local_1868 + 1;
              } while (local_1890 != L'\0');
              local_828[0] = L'5';
              local_828[1] = L'\0';
              local_1898 = (**(code **)(*param_2 + 0x50))(param_2,local_1828);
              if ((local_1898 & 0xfff) != 0) goto LAB_18001d84b;
            }
            *(undefined4 *)(param_1 + 0x1698) = 1;
          }
        }
        else {
          local_1848 = *param_2;
          local_1898 = (**(code **)(local_1848 + 0x50))
                                 (param_2,local_1880 + (ulonglong)local_1894 * 0x1800);
        }
      }
    }
  }
  else {
    local_1898 = 0x5b512406;
  }
LAB_18001d84b:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_18b8);
  return;
}




void FUN_18001d870(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 *puVar6;
  WCHAR *pWVar7;
  undefined1 auStackY_f78 [32];
  int *local_f30;
  undefined4 local_f24;
  longlong *local_f20;
  longlong *local_f18;
  longlong *local_f10;
  longlong *local_f08;
  undefined8 local_f00;
  undefined4 *local_ef8;
  int *local_ef0;
  int *local_ee8;
  undefined4 *local_ee0;
  int *local_ed8;
  int *local_ed0;
  int *local_ec8;
  int *local_ec0;
  undefined8 local_eb8;
  WCHAR local_eb0 [4];
  undefined2 uStack_ea8;
  WCHAR local_e98 [264];
  WCHAR local_c88 [264];
  WCHAR local_a78 [264];
  WCHAR local_868 [264];
  WCHAR local_658 [264];
  undefined1 local_448 [528];
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_eb8 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_f78;
  local_f24 = 0;
  local_f00 = 0;
  local_f30 = (int *)0x0;
  pwVar5 = L"\\\\.\\X:";
  pWVar7 = local_eb0;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(char *)pWVar7 = (char)*pwVar5;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  pWVar7 = local_868;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  puVar6 = local_448;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_238;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pWVar7 = local_e98;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  pWVar7 = local_c88;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  pWVar7 = local_a78;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  pWVar7 = local_658;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  if ((((param_2 != (longlong *)0x0) && (*(int *)(param_1 + 0xc) == 0)) &&
      (*(longlong *)(param_1 + 0x1f00) != 0)) && (*(longlong *)(param_1 + 0x1f10) != 0)) {
    wsprintfW(local_e98,L"%s\\ESSYSTEM.BCD");
    wsprintfW(local_c88,L"%s\\ESLOADER.BCD");
    wsprintfW(local_658,L"%s\\ESLOADER.REG");
    wsprintfW(local_a78,L"%s\\BOOT\\BTB");
    iVar2 = FUN_18000eb20(*(undefined2 *)(param_1 + 0x220));
    if (-1 < iVar2) {
      wsprintfW(local_868,L"\\\\.\\PhysicalDrive%d");
      uVar3 = FUN_180012030(local_868,&local_f24);
      if ((uVar3 & 0xfff) == 0) {
        uStack_ea8 = *(undefined2 *)(param_1 + 0x220);
        uVar3 = FUN_1800125b0(local_eb0,&local_f00);
        if ((uVar3 & 0xfff) == 0) {
          if (*(int *)(param_1 + 0x167c) == 2) {
            uVar3 = (**(code **)(*param_2 + 0x60))(param_2,local_e98);
            if ((uVar3 & 0xfff) != 0) goto LAB_18001df51;
          }
          else {
            iVar2 = FUN_18000dec0(local_e98,local_a78,(undefined *)0x0,0,0,(uint *)0x0);
            if (iVar2 == 0) goto LAB_18001df51;
          }
          iVar2 = FUN_18000dec0(local_c88,local_658,(undefined *)0x0,0,0,(uint *)0x0);
          if (iVar2 != 0) {
            iVar2 = FUN_1800140b0(local_c88,0x7e00,-0x18651866,local_f00);
            if (iVar2 < 1) {
              local_f20 = (longlong *)FUN_180007470();
              if (local_f20 != (longlong *)0x0) {
                (**(code **)(*local_f20 + 0x30))(local_f20,1,0x12400,L"Boot:%S %d\n");
              }
            }
            else {
              local_ef8 = (undefined4 *)operator_new(0x414);
              local_ee0 = local_ef8;
              if (local_ef8 == (undefined4 *)0x0) {
                local_ef0 = (int *)0x0;
              }
              else {
                local_ef0 = FUN_180036400(local_ef8);
                local_ed8 = local_ef0;
              }
              piVar1 = local_ef0;
              local_ed0 = local_ef0;
              local_f30 = local_ef0;
              if (local_ef0 == (int *)0x0) {
                local_f30 = (int *)0x0;
              }
              else {
                uVar3 = FUN_1800364b0(local_ef0,local_e98,local_c88);
                if ((uVar3 & 0xfff) == 0) {
                  uVar3 = FUN_180036620(piVar1);
                  if ((uVar3 & 0xfff) == 0) {
                    if (*(int *)(param_1 + 0x167c) == 2) {
                      uVar3 = (**(code **)(*param_2 + 0x68))(param_2,local_e98);
                      if ((uVar3 & 0xfff) != 0) {
                        local_f08 = (longlong *)FUN_180007470();
                        if (local_f08 != (longlong *)0x0) {
                          (**(code **)(*local_f08 + 0x30))
                                    (local_f08,1,0x12400,L"Boot:%S %d nRes:0x%08x\n");
                        }
                        goto LAB_18001df51;
                      }
                    }
                    else {
                      iVar2 = FUN_18000dec0(local_a78,local_e98,(undefined *)0x0,0,0,(uint *)0x0);
                      if (iVar2 == 0) goto LAB_18001df51;
                    }
                    FUN_18001d3d0(param_1,param_2,param_3,1);
                  }
                  else {
                    local_f10 = (longlong *)FUN_180007470();
                    if (local_f10 != (longlong *)0x0) {
                      (**(code **)(*local_f10 + 0x30))
                                (local_f10,1,0x12400,L"Boot:%S %d nRes:0x%08x\n");
                    }
                  }
                }
                else {
                  local_f18 = (longlong *)FUN_180007470();
                  if (local_f18 != (longlong *)0x0) {
                    (**(code **)(*local_f18 + 0x30))
                              (local_f18,1,0x12400,L"Boot:%S %d nRes:0x%08x\n");
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_18001df51:
  if (local_f30 != (int *)0x0) {
    FUN_1800365e0(local_f30);
    local_ec8 = local_f30;
    local_ee8 = local_f30;
    if (local_f30 == (int *)0x0) {
      local_ec0 = (int *)0x0;
    }
    else {
      local_ec0 = FUN_18001e000(local_f30,1);
    }
  }
  DeleteFileW(local_e98);
  DeleteFileW(local_c88);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_f78);
  return;
}




int * FUN_18001e000(int *param_1,uint param_2)

{
  FUN_180036450(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001e040(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_1868 [32];
  uint local_1848;
  uint local_1844;
  int local_1840 [2];
  longlong local_1838;
  longlong local_1830;
  longlong local_1828;
  undefined1 local_1818 [6144];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18001e05a;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_1868;
  local_1848 = 0;
  local_1840[0] = 0;
  puVar2 = local_1818;
  for (lVar1 = 0x1800; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1844 = 0;
  if (param_2 == (longlong *)0x0) {
    local_1844 = 0x6c91240a;
  }
  else {
    for (local_1848 = 0; local_1848 < *(uint *)(param_1 + 0x1ec8); local_1848 = local_1848 + 1) {
      local_1838 = *param_2;
      local_1844 = (**(code **)(local_1838 + 0x38))
                             (param_2,*(longlong *)(param_1 + 0x1ed0) + 4 +
                                      (ulonglong)local_1848 * 0x1004,local_1840);
      if ((local_1844 & 0xfff) != 0) break;
      if (local_1840[0] == 0) {
        local_1830 = *param_2;
        local_1844 = (**(code **)(local_1830 + 0x40))
                               (param_2,(ulonglong)local_1848 * 0x1004 +
                                        *(longlong *)(param_1 + 0x1ed0));
        if ((local_1844 & 0xfff) != 0) break;
      }
    }
    if ((local_1844 & 0xfff) == 0) {
      if (*(int *)(param_1 + 0xc) == 0) {
        local_1844 = FUN_18001d3d0(param_1,param_2,param_3,0);
      }
      else {
        for (local_1848 = 0; local_1848 < *(uint *)(param_1 + 0x1f18); local_1848 = local_1848 + 1)
        {
          local_1828 = *param_2;
          local_1844 = (**(code **)(local_1828 + 0x50))
                                 (param_2,(ulonglong)local_1848 * 0x1800 +
                                          *(longlong *)(param_1 + 0x1f20),0);
          if ((local_1844 & 0xfff) != 0) break;
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1868);
  return;
}




void FUN_18001e290(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_8b8 [32];
  char *local_898;
  undefined4 local_890;
  uint local_888;
  uint local_878;
  uint local_874;
  uint local_870;
  longlong *local_868;
  undefined8 local_860;
  CResetPropExchange local_858 [1584];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_860 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_8b8;
  FUN_180003720(local_858);
  local_878 = 0;
  local_874 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  local_878 = (**(code **)(*param_1 + 0x30))(param_1);
  uVar1 = local_878;
  if ((local_878 & 0xfff) == 0) {
    if ((int)param_1[2] == 0) {
      wsprintfW(local_228,L"%s\\boot\\%s");
    }
    else {
      wsprintfW(local_228,L"%s\\EFI\\Microsoft\\Boot\\%s");
    }
    local_878 = FUN_1800038b0((longlong)local_858,(short *)(param_1 + 0x24c),local_228,
                              *(undefined4 *)((longlong)param_1 + 0xc));
    FUN_180003ba0((longlong)local_858,(short *)(param_1 + 0x28d));
    uVar1 = local_878;
    if (((((local_878 & 0xfff) == 0) &&
         (local_878 = FUN_18001e040((longlong)param_1,(longlong *)local_858,param_2),
         uVar1 = local_878, (local_878 & 0xfff) != 0)) && ((int)param_1[2] == 0)) &&
       ((local_874 = FUN_18001d870((longlong)param_1,(longlong *)local_858,param_2),
        uVar1 = local_874, (local_874 & 0xfff) != 0 &&
        (local_868 = (longlong *)FUN_180007470(), uVar1 = local_878, local_868 != (longlong *)0x0)))
       ) {
      local_888 = local_874;
      local_890 = 0x730;
      local_898 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp";
      (**(code **)(*local_868 + 0x30))(local_868,1,0x12400,L"Boot:%S %d nTempRes:0x%08x\n");
      uVar1 = local_878;
    }
  }
  local_878 = uVar1;
  FUN_180003b60((longlong)local_858);
  local_870 = local_878;
  FUN_180003800((undefined8 *)local_858);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_8b8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001e510(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  WCHAR *pWVar7;
  undefined1 *puVar8;
  undefined1 auStack_20c8 [32];
  uint local_20a8;
  uint local_20a4;
  ushort local_20a0;
  int local_209c;
  ushort *local_2098;
  uint local_2090;
  ushort *local_2088;
  undefined8 local_2080;
  ushort *local_2078;
  CResetPropExchange local_2068 [1584];
  undefined1 local_1a38 [2048];
  undefined1 local_1238 [2048];
  ushort local_a38 [1024];
  WCHAR local_238 [264];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x18001e525;
  local_2080 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_20c8;
  local_20a4 = 0;
  FUN_180003720(local_2068);
  local_209c = 0;
  puVar8 = local_1a38;
  for (lVar5 = 0x1800; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_20a8 = 0;
  pWVar7 = local_238;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      wsprintfW(local_238,L"%s\\boot\\%s");
    }
    else {
      wsprintfW(local_238,L"%s\\EFI\\Microsoft\\Boot\\%s");
    }
    local_20a8 = FUN_1800038b0((longlong)local_2068,(short *)(param_1 + 0x1260),local_238,
                               *(undefined4 *)(param_1 + 0xc));
    FUN_180003ba0((longlong)local_2068,(short *)(param_1 + 0x1468));
    if ((local_20a8 & 0xfff) == 0) {
      *(undefined4 *)(param_1 + 0x1698) = 0;
      local_20a4 = 0;
      while (((local_20a4 < *(uint *)(param_1 + 0x1ec8) &&
              (local_20a8 = FUN_180003c80((longlong *)local_2068,
                                          *(longlong *)(param_1 + 0x1ed0) + 4 +
                                          (ulonglong)local_20a4 * 0x1004,&local_209c),
              (local_20a8 & 0xfff) == 0)) &&
             ((local_209c == 0 ||
              (local_20a8 = FUN_1800046a0((longlong *)local_2068,
                                          (ulonglong)local_20a4 * 0x1004 +
                                          *(longlong *)(param_1 + 0x1ed0)),
              (local_20a8 & 0xfff) == 0))))) {
        local_20a4 = local_20a4 + 1;
      }
      if ((local_20a8 & 0xfff) == 0) {
        pwVar6 = L"{bootmgr}";
        puVar8 = local_1a38;
        for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = (char)*pwVar6;
          pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
          puVar8 = puVar8 + 1;
        }
        pwVar6 = L"timeout";
        puVar8 = local_1238;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = (char)*pwVar6;
          pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
          puVar8 = puVar8 + 1;
        }
        local_20a8 = FUN_180005090((longlong *)local_2068,(longlong)local_1a38);
        if ((local_20a8 & 0xfff) == 0) {
          if (*(short *)(param_1 + 0x18a4) != 0) {
            puVar4 = local_a38;
            lVar5 = (longlong)&DAT_180041724 - (longlong)puVar4;
            do {
              uVar2 = *puVar4;
              uVar1 = *(ushort *)((longlong)puVar4 + lVar5);
              if (uVar2 != uVar1) {
                uVar3 = -(uint)(uVar2 < uVar1) | 1;
                goto LAB_18001e80e;
              }
              puVar4 = puVar4 + 1;
            } while (uVar2 != 0);
            uVar3 = 0;
LAB_18001e80e:
            if (uVar3 == 0) {
              pwVar6 = L"{bootmgr}";
              puVar8 = local_1a38;
              for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar8 = (char)*pwVar6;
                pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
                puVar8 = puVar8 + 1;
              }
              pwVar6 = L"timeout";
              puVar8 = local_1238;
              for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar8 = (char)*pwVar6;
                pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
                puVar8 = puVar8 + 1;
              }
              local_2088 = (ushort *)(param_1 + 0x18a4);
              local_2078 = local_a38;
              local_2098 = local_2078;
              do {
                local_20a0 = *local_2088;
                *local_2098 = local_20a0;
                local_2088 = local_2088 + 1;
                local_2098 = local_2098 + 1;
              } while (local_20a0 != 0);
              local_20a8 = FUN_180004b10((longlong *)local_2068,(longlong)local_1a38,'\0');
              if ((local_20a8 & 0xfff) != 0) goto LAB_18001e902;
            }
          }
          puVar8 = (undefined1 *)(param_1 + 0x18a4);
          for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
        }
      }
    }
  }
  else {
    local_20a8 = 0x74712406;
  }
LAB_18001e902:
  FUN_180003b60((longlong)local_2068);
  local_2090 = local_20a8;
  FUN_180003800((undefined8 *)local_2068);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_20c8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001e940(longlong param_1,wchar_t *param_2,WCHAR *param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  wchar_t *pwVar3;
  WCHAR *pWVar4;
  undefined1 *puVar5;
  WCHAR *pWVar6;
  undefined1 auStack_20a8 [32];
  uint local_2088;
  uint local_2084;
  int local_2080;
  int local_207c;
  uint local_2078;
  undefined8 local_2070;
  CResetPropExchange local_2068 [1584];
  undefined1 local_1a38 [2048];
  undefined1 local_1238 [2048];
  wchar_t local_a38 [1024];
  WCHAR local_238 [264];
  ulonglong local_28;
  undefined8 uStack_18;
  
  iVar2 = (int)param_2;
  uStack_18 = 0x18001e95a;
  local_2070 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_20a8;
  local_2084 = 0;
  pWVar6 = param_3;
  FUN_180003720(local_2068);
  local_2080 = 0;
  local_207c = 0;
  puVar5 = local_1a38;
  for (lVar1 = 0x1800; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_2088 = 0;
  pWVar4 = local_238;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  if (iVar2 == 0) {
    local_2088 = FUN_180016400(&local_2080,param_2,pWVar6,param_4);
    if ((local_2088 & 0xfff) == 0) {
      if (local_2080 == 0) {
        wsprintfW(local_238,L"%s\\boot\\%s");
      }
      else {
        wsprintfW(local_238,L"%s\\EFI\\Microsoft\\Boot\\%s");
      }
      local_2088 = FUN_1800038b0((longlong)local_2068,(short *)(param_1 + 0x1260),local_238,
                                 *(undefined4 *)(param_1 + 0xc));
      FUN_180003ba0((longlong)local_2068,(short *)(param_1 + 0x1468));
      if ((local_2088 & 0xfff) == 0) {
        if (local_2080 == 0) {
          local_2084 = 0;
          while (((local_2084 < *(uint *)(param_1 + 0x1ec8) &&
                  (local_2088 = FUN_180003c80((longlong *)local_2068,
                                              *(longlong *)(param_1 + 0x1ed0) + 4 +
                                              (ulonglong)local_2084 * 0x1004,&local_207c),
                  (local_2088 & 0xfff) == 0)) && (local_207c != 0))) {
            local_2084 = local_2084 + 1;
          }
          if ((local_2088 & 0xfff) != 0) goto LAB_18001ed0d;
          if (local_207c == 0) {
            for (local_2084 = 0; local_2084 < *(uint *)(param_1 + 0x1ec8);
                local_2084 = local_2084 + 1) {
              FUN_1800046a0((longlong *)local_2068,
                            (ulonglong)local_2084 * 0x1004 + *(longlong *)(param_1 + 0x1ed0));
            }
            puVar5 = (undefined1 *)(param_1 + 0x18a4);
            for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            *(undefined4 *)(param_1 + 0x1698) = 0;
            *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x1698);
            goto LAB_18001ed0d;
          }
        }
        pwVar3 = L"{bootmgr}";
        puVar5 = local_1a38;
        for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar5 = (char)*pwVar3;
          pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
          puVar5 = puVar5 + 1;
        }
        pwVar3 = L"displayorder";
        puVar5 = local_1238;
        for (lVar1 = 0x1a; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar5 = (char)*pwVar3;
          pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
          puVar5 = puVar5 + 1;
        }
        local_2088 = FUN_180005090((longlong *)local_2068,(longlong)local_1a38);
        if ((local_2088 & 0xfff) == 0) {
          lVar1 = FUN_18000d4e0(local_a38,(wchar_t *)(*(longlong *)(param_1 + 0x1ed0) + 4));
          if (lVar1 == 0) {
            puVar5 = (undefined1 *)(param_1 + 0x18a4);
            for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            *(undefined4 *)(param_1 + 0x1698) = 0;
            *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x1698);
          }
          else {
            *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x1698);
          }
        }
      }
    }
  }
  else {
    local_2088 = 0x79f12406;
  }
LAB_18001ed0d:
  FUN_180003b60((longlong)local_2068);
  local_2078 = local_2088;
  FUN_180003800((undefined8 *)local_2068);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_20a8);
  return;
}




undefined4 FUN_18001ed50(longlong *param_1,int param_2)

{
  undefined4 local_18;
  
  if ((int)param_1[1] == 0) {
    local_18 = 0x7ff12405;
  }
  else if (*(int *)((longlong)param_1 + 0x167c) == 1) {
    local_18 = FUN_18001b9e0((longlong)param_1,param_2);
  }
  else if (*(int *)((longlong)param_1 + 0x167c) == 2) {
    local_18 = FUN_18001e290(param_1,param_2);
  }
  else {
    local_18 = 0x81812406;
  }
  return local_18;
}




undefined4 FUN_18001ee00(longlong param_1,int param_2)

{
  undefined4 local_18;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x82812405;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x167c) == 1) {
      local_18 = FUN_18001c4e0(param_1,param_2);
    }
    else if (*(int *)(param_1 + 0x167c) == 2) {
      local_18 = FUN_18001e510(param_1,param_2);
    }
    else {
      local_18 = 0x83d12406;
    }
  }
  else {
    local_18 = 0x82e12406;
  }
  return local_18;
}




undefined4 FUN_18001eea0(longlong param_1,uint param_2,WCHAR *param_3,ulonglong param_4)

{
  undefined4 local_18;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x84d12405;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x167c) == 1) {
      local_18 = FUN_18001d060(param_1,param_2,(undefined4 *)param_3);
    }
    else if (*(int *)(param_1 + 0x167c) == 2) {
      local_18 = FUN_18001e940(param_1,(wchar_t *)(ulonglong)param_2,param_3,param_4);
    }
    else {
      local_18 = 0x86212406;
    }
  }
  else {
    local_18 = 0x85312406;
  }
  return local_18;
}




uint FUN_18001ef50(longlong param_1)

{
  uint uVar1;
  UINT UVar2;
  DWORD DVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  short *psVar6;
  int local_34;
  short *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_34 = 0;
  uVar1 = FUN_18001a960(param_1,&local_34);
  if ((uVar1 & 0xfff) == 0) {
    if (local_34 != 0) {
      UVar2 = GetSystemDirectoryW((LPWSTR)(param_1 + 0x1468),0x104);
      if (UVar2 == 0) {
        local_28 = (longlong *)FUN_180007470();
        if (local_28 != (longlong *)0x0) {
          DVar3 = GetLastError();
          local_20 = *local_28;
          (**(code **)(local_20 + 0x30))
                    (local_28,1,0x12400,L"Boot:%S %d Disk:%s failed:%08X\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\editbootitem.cpp",0x87b,DVar3);
        }
        return 0x87c12500;
      }
      local_30 = (short *)(param_1 + 0x1466);
      do {
        local_30 = local_30 + 1;
      } while (*local_30 != 0);
      pwVar5 = L"\\bcdedit.exe";
      psVar6 = local_30;
      for (lVar4 = 0x1a; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(char *)psVar6 = (char)*pwVar5;
        pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
        psVar6 = (short *)((longlong)psVar6 + 1);
      }
    }
    wsprintfW((LPWSTR)(param_1 + 0x1260),L"%s\\bcdedit.exe");
  }
  return uVar1;
}




undefined8 * FUN_18001f0c0(undefined8 *param_1)

{
  FUN_180018ce0(param_1);
  *param_1 = CEditBootItemLinux::vftable;
  return param_1;
}




undefined8 * FUN_18001f0f0(undefined8 *param_1,uint param_2)

{
  FUN_18001f130(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18001f130(undefined8 *param_1)

{
  *param_1 = CEditBootItemLinux::vftable;
  FUN_180018fb0(param_1);
  return;
}




void FUN_18001f160(longlong param_1)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined4 local_274;
  undefined1 *local_270;
  int local_268;
  DWORD local_264;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined8 local_248;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_248 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_298;
  local_270 = (undefined1 *)0x0;
  local_264 = 0;
  local_278 = 0;
  local_274 = 0;
  pWVar5 = local_238;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  wsprintfW(local_238,L"%s\\bootsect.exe /nt52 %C:");
  BVar1 = FUN_18000d910(local_238,&local_264,(LPVOID)0x0,(DWORD *)0x0);
  if ((BVar1 == 0) || (local_264 != 0)) {
    local_270 = (undefined1 *)operator_new((ulonglong)(uint)(*(int *)(param_1 + 0x1680) * 0x10));
    local_260 = local_270;
    local_258 = local_270;
    iVar2 = FUN_180018890(*(undefined8 **)(param_1 + 0x1670),local_270,0,0x10);
    if (iVar2 == 0) {
      local_274 = 0x7712476;
    }
    else {
      local_268 = *(int *)(param_1 + 0x1678);
      if (local_268 == 1) {
        local_278 = 0x200;
        puVar4 = &DAT_180060440;
        puVar6 = local_270;
        for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = &DAT_180060476;
        puVar6 = local_270 + 0x36;
        for (lVar3 = 0x1ca; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else if (local_268 == 2) {
        local_278 = 0x200;
        puVar4 = &DAT_180060240;
        puVar6 = local_270;
        for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = &DAT_180060292;
        puVar6 = local_270 + 0x52;
        for (lVar3 = 0x1ae; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else if (local_268 == 4) {
        local_278 = 0x2000;
        puVar4 = &DAT_180060840;
        puVar6 = local_270;
        for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = &DAT_180060890;
        puVar6 = local_270 + 0x50;
        for (lVar3 = 0x1fb0; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        local_274 = 0x9312415;
      }
      iVar2 = FUN_180018950(*(undefined8 **)(param_1 + 0x1670),local_270,0,
                            local_278 / *(uint *)(param_1 + 0x1680));
      if (iVar2 == 0) {
        local_274 = 0x9912477;
      }
    }
  }
  if (local_270 != (undefined1 *)0x0) {
    local_250 = local_270;
    free(local_270);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_298);
  return;
}




void FUN_18001f430(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 auStack_288 [32];
  uint local_268;
  char *local_260;
  undefined4 local_258;
  int local_254;
  int local_250;
  char *local_248;
  int local_240;
  undefined4 local_23c;
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_288;
  local_23c = 0;
  local_268 = 0;
  local_254 = 0;
  local_258 = 0;
  puVar5 = local_238;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_260 = (char *)0x0;
  local_248 = (char *)0x0;
  local_240 = *(int *)(param_1 + 0x167c);
  if (local_240 == 1) {
    local_248 = *(char **)(param_1 + 0x1688);
    local_268 = *(uint *)(param_1 + 0x1680);
    do {
      local_260 = (char *)FUN_180018bb0(local_248,local_268,"NTLDR",5);
      if (local_260 == (char *)0x0) {
        local_260 = (char *)0x0;
        break;
      }
      pcVar2 = "DCLDR";
      pcVar4 = local_260;
      for (lVar1 = 5; lVar1 != 0; lVar1 = lVar1 + -1) {
        *pcVar4 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      }
      local_254 = 1;
      local_260 = local_260 + 5;
      local_268 = *(int *)(param_1 + 0x1680) -
                  ((int)local_260 - (int)*(undefined8 *)(param_1 + 0x1688));
      local_248 = local_260;
    } while (4 < local_268);
    if (local_254 == 0) {
      local_258 = 0x10912486;
    }
    else if ((*(int *)(param_1 + 0x1678) != 1) && (*(int *)(param_1 + 0x1678) != 2)) {
      local_260 = (char *)FUN_180018bb0((void *)((ulonglong)*(uint *)(param_1 + 0x1680) +
                                                *(longlong *)(param_1 + 0x1688)),0xc,
                                        (char *)L"NTLDR",10);
      if (local_260 == (char *)0x0) {
        local_258 = 0x11712486;
      }
      else {
        pwVar3 = L"DCLDR";
        pcVar2 = local_260;
        for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
          *pcVar2 = (char)*pwVar3;
          pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
          pcVar2 = pcVar2 + 1;
        }
      }
    }
  }
  else if (local_240 == 2) {
    local_250 = *(int *)(param_1 + 0x1678);
    if (local_250 != 1) {
      if (local_250 == 2) {
        local_248 = *(char **)(param_1 + 0x1688);
        local_268 = *(uint *)(param_1 + 0x1680);
        do {
          local_260 = (char *)FUN_180018bb0(local_248,local_268,"BOOTMGR",7);
          if (local_260 == (char *)0x0) {
            local_260 = (char *)0x0;
            break;
          }
          pcVar2 = "DCLDR  ";
          pcVar4 = local_260;
          for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
            *pcVar4 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            pcVar4 = pcVar4 + 1;
          }
          local_254 = 1;
          local_260 = local_260 + 7;
          local_268 = *(int *)(param_1 + 0x1680) -
                      ((int)local_260 - (int)*(undefined8 *)(param_1 + 0x1688));
          local_248 = local_260;
        } while (6 < local_268);
        if (local_254 == 0) {
          local_258 = 0xd112486;
        }
      }
      else if (local_250 == 4) {
        if (*(int *)(*(longlong *)(param_1 + 0x1688) + 0x27a) == 0x6b70f66) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0xb7) = 0xe9;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0xb8) = 0xc0;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0xb9) = 1;
        }
        else {
          if (*(int *)(*(longlong *)(param_1 + 0x1688) + 0x319) != 0x6b70f66) {
            local_258 = 0xe5127c8;
            goto LAB_18001f8ec;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0xb7) = 0xe9;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0xb8) = 0x5f;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0xb9) = 2;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x200) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x25a) = 5;
        pwVar3 = L"DCLDR";
        puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x1688) + 0x25c);
        for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar5 = (char)*pwVar3;
          pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
          puVar5 = puVar5 + 1;
        }
      }
      else {
        local_258 = 0xee12406;
      }
    }
  }
  else {
    local_258 = 0x11f12406;
  }
LAB_18001f8ec:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_288);
  return;
}




void FUN_18001f920(longlong param_1)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStackY_2b8 [32];
  DWORD local_274;
  HANDLE local_270;
  DWORD local_268 [2];
  longlong *local_260;
  longlong *local_258;
  longlong *local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_2b8;
  local_268[0] = 0;
  pWVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_270 = (HANDLE)0xffffffffffffffff;
  if ((*(int *)(param_1 + 0x1678) == 1) || (*(int *)(param_1 + 0x1678) == 2)) {
    local_274 = *(DWORD *)(param_1 + 0x1680);
  }
  else {
    local_274 = *(int *)(param_1 + 0x1680) * 0x10;
  }
  wsprintfW(local_228,L"%s\\%s");
  uVar1 = FUN_180013520(local_228);
  if (((uVar1 & 0xfff) == 0x474) || ((uVar1 & 0xfff) == 0)) {
    DeleteFileW(local_228);
    local_270 = CreateFileW(local_228,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
    if (local_270 == (HANDLE)0xffffffffffffffff) {
      local_260 = (longlong *)FUN_180007470();
      if (local_260 != (longlong *)0x0) {
        GetLastError();
        local_248 = *local_260;
        (**(code **)(local_248 + 0x30))(local_260,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n");
      }
    }
    else if (*(int *)(param_1 + 0x1678) == 1) {
      BVar2 = WriteFile(local_270,&DAT_180062840,0x2000,local_268,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) && (local_258 = (longlong *)FUN_180007470(), local_258 != (longlong *)0x0)) {
        GetLastError();
        local_240 = *local_258;
        (**(code **)(local_240 + 0x30))(local_258,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n");
      }
    }
    else {
      BVar2 = WriteFile(local_270,*(LPCVOID *)(param_1 + 0x1688),local_274,local_268,
                        (LPOVERLAPPED)0x0);
      if ((BVar2 == 0) && (local_250 = (longlong *)FUN_180007470(), local_250 != (longlong *)0x0)) {
        GetLastError();
        local_238 = *local_250;
        (**(code **)(local_238 + 0x30))(local_250,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n");
      }
    }
  }
  else {
    GetLastError();
  }
  if (local_270 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_270);
    CloseHandle(local_270);
    FUN_180013520(local_228);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2b8);
  return;
}




undefined4 FUN_18001fcf0(longlong param_1)

{
  undefined1 auVar1 [16];
  __uint64 _Var2;
  void *pvVar3;
  longlong lVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  undefined4 local_78;
  
  local_78 = 0;
  *(undefined4 *)(param_1 + 0x1ec8) = 1;
  auVar1 = ZEXT816(0x1004) * ZEXT416(*(uint *)(param_1 + 0x1ec8));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1ed0) = pvVar3;
  *(undefined4 *)(param_1 + 0x1ed8) = 4;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1ed8));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1ee0) = pvVar3;
  *(undefined4 *)(param_1 + 0x1ee8) = 0;
  *(undefined8 *)(param_1 + 0x1ef0) = 0;
  *(undefined4 *)(param_1 + 0x1ef8) = 0;
  *(undefined8 *)(param_1 + 0x1f00) = 0;
  *(undefined4 *)(param_1 + 0x1f08) = 0;
  *(undefined8 *)(param_1 + 0x1f10) = 0;
  *(undefined4 *)(param_1 + 0x1f18) = 5;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1f18));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1f20) = pvVar3;
  if (((*(longlong *)(param_1 + 0x1ed0) == 0) || (*(longlong *)(param_1 + 0x1ee0) == 0)) ||
     (*(longlong *)(param_1 + 0x1f20) == 0)) {
    local_78 = 0x1961240a;
  }
  else {
    puVar5 = &DAT_180072240;
    puVar7 = *(undefined1 **)(param_1 + 0x1ed0);
    for (lVar4 = 0x1004; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    pwVar6 = u__a889172e_8d5c_482f_bf2e_3d4ac05_18006c240;
    puVar5 = *(undefined1 **)(param_1 + 0x1ee0);
    for (lVar4 = 0x6000; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = u__a889172e_8d5c_482f_bf2e_3d4ac05_180064a40;
    puVar5 = *(undefined1 **)(param_1 + 0x1f20);
    for (lVar4 = 0x7800; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"C:\\DCLOADLX";
    puVar5 = (undefined1 *)(param_1 + 0xa40);
    for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"C:\\DCLOADPE";
    puVar5 = (undefined1 *)(param_1 + 0xc48);
    for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"EUDCLINUX.DAT";
    puVar5 = (undefined1 *)(param_1 + 0xe50);
    for (lVar4 = 0x1c; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"EUDCWINPE.DAT";
    puVar5 = (undefined1 *)(param_1 + 0x1058);
    for (lVar4 = 0x1c; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
  }
  return local_78;
}




void FUN_180020000(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  uint local_234 [3];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  local_234[0] = 0x208;
  wsprintfW((LPWSTR)(*(longlong *)(param_1 + 0x1ed0) + 0x804),L"\"%s\"");
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_18000f4f0(local_228,local_234);
    if (iVar1 == 0) {
      local_238 = 0x1b912500;
    }
    else {
      wsprintfW((LPWSTR)(*(longlong *)(param_1 + 0x1ee0) + 0x1000),L"partition=%s");
    }
  }
  else {
    u_partition_X__180065a40[10] = *(wchar_t *)(param_1 + 0x220);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




uint FUN_180020150(longlong *param_1,int param_2)

{
  uint local_18;
  
  if ((int)param_1[1] == 0) {
    local_18 = 0x1cc12405;
  }
  else {
    local_18 = FUN_18001f430((longlong)param_1);
    if (((local_18 & 0xfff) == 0) &&
       (local_18 = FUN_18001f920((longlong)param_1), (local_18 & 0xfff) == 0)) {
      local_18 = FUN_18001ed50(param_1,param_2);
    }
  }
  if ((local_18 & 0xfff) != 0) {
    FUN_18001ee00((longlong)param_1,param_2);
  }
  return local_18;
}




uint FUN_180020200(longlong param_1,int param_2)

{
  uint local_18;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x1f612405;
  }
  else {
    local_18 = FUN_18001ee00(param_1,param_2);
  }
  return local_18;
}




uint FUN_180020260(longlong param_1,uint param_2,WCHAR *param_3,ulonglong param_4)

{
  uint local_18;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x20c12405;
  }
  else {
    local_18 = FUN_18001eea0(param_1,param_2,param_3,param_4);
  }
  return local_18;
}




undefined8 * FUN_1800202d0(undefined8 *param_1)

{
  FUN_180018ce0(param_1);
  *param_1 = CEditBootItemPe::vftable;
  return param_1;
}




undefined8 * FUN_180020300(undefined8 *param_1,uint param_2)

{
  FUN_180020340(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180020340(undefined8 *param_1)

{
  *param_1 = CEditBootItemPe::vftable;
  FUN_180018fb0(param_1);
  return;
}




void FUN_180020370(longlong param_1)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined4 local_274;
  undefined1 *local_270;
  int local_268;
  DWORD local_264;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined8 local_248;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_248 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_298;
  local_270 = (undefined1 *)0x0;
  local_264 = 0;
  local_278 = 0;
  local_274 = 0;
  pWVar5 = local_238;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  wsprintfW(local_238,L"%s\\bootsect.exe /nt60 %C:");
  BVar1 = FUN_18000d910(local_238,&local_264,(LPVOID)0x0,(DWORD *)0x0);
  if ((BVar1 == 0) || (local_264 != 0)) {
    local_270 = (undefined1 *)operator_new((ulonglong)(uint)(*(int *)(param_1 + 0x1680) * 0x10));
    local_260 = local_270;
    local_258 = local_270;
    iVar2 = FUN_180018890(*(undefined8 **)(param_1 + 0x1670),local_270,0,0x10);
    if (iVar2 == 0) {
      local_274 = 0x14c12476;
    }
    else {
      local_268 = *(int *)(param_1 + 0x1678);
      if (local_268 == 1) {
        local_278 = 0x200;
        puVar4 = &DAT_180060640;
        puVar6 = local_270;
        for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = &DAT_180060676;
        puVar6 = local_270 + 0x36;
        for (lVar3 = 0x1ca; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else if (local_268 == 2) {
        local_278 = 0x200;
        puVar4 = &DAT_180060040;
        puVar6 = local_270;
        for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = &DAT_180060092;
        puVar6 = local_270 + 0x52;
        for (lVar3 = 0x1ae; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else if (local_268 == 4) {
        local_278 = 0x2000;
        puVar4 = &DAT_18005e040;
        puVar6 = local_270;
        for (lVar3 = 3; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = &DAT_18005e090;
        puVar6 = local_270 + 0x50;
        for (lVar3 = 0x1fb0; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        local_274 = 0x16812415;
      }
      iVar2 = FUN_180018950(*(undefined8 **)(param_1 + 0x1670),local_270,0,
                            local_278 / *(uint *)(param_1 + 0x1680));
      if (iVar2 == 0) {
        local_274 = 0x16e12477;
      }
    }
  }
  if (local_270 != (undefined1 *)0x0) {
    local_250 = local_270;
    free(local_270);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_298);
  return;
}




undefined4 FUN_180020640(longlong param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  uint local_38;
  undefined4 local_34;
  char *local_20;
  
  bVar1 = false;
  local_34 = 0;
  local_20 = *(char **)(param_1 + 0x1688);
  local_38 = *(uint *)(param_1 + 0x1680);
  do {
    local_20 = (char *)FUN_180018bb0(local_20,local_38,"NTLDR",5);
    if (local_20 == (char *)0x0) break;
    pcVar4 = "DCMGR";
    pcVar6 = local_20;
    for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    }
    bVar1 = true;
    local_20 = local_20 + 5;
    local_38 = *(int *)(param_1 + 0x1680) - ((int)local_20 - (int)*(undefined8 *)(param_1 + 0x1688))
    ;
  } while (4 < local_38);
  if (bVar1) {
    if ((*(int *)(param_1 + 0x1678) != 1) && (*(int *)(param_1 + 0x1678) != 2)) {
      puVar2 = (undefined1 *)
               FUN_180018bb0((void *)((ulonglong)*(uint *)(param_1 + 0x1680) +
                                     *(longlong *)(param_1 + 0x1688)),0xc,(char *)L"NTLDR",10);
      if (puVar2 == (undefined1 *)0x0) {
        local_34 = 0x1a812486;
      }
      else {
        pwVar5 = L"DCMGR";
        for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar2 = (char)*pwVar5;
          pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
          puVar2 = puVar2 + 1;
        }
      }
    }
  }
  else {
    local_34 = 0x19a12486;
  }
  return local_34;
}




void FUN_1800207f0(longlong param_1)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStackY_2a8 [32];
  DWORD local_264;
  HANDLE local_260;
  DWORD local_258 [2];
  longlong *local_250;
  longlong *local_248;
  longlong local_240;
  longlong local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_2a8;
  local_258[0] = 0;
  pWVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_260 = (HANDLE)0xffffffffffffffff;
  if ((*(int *)(param_1 + 0x1678) == 1) || (*(int *)(param_1 + 0x1678) == 2)) {
    local_264 = *(DWORD *)(param_1 + 0x1680);
  }
  else {
    local_264 = *(int *)(param_1 + 0x1680) * 0x10;
  }
  wsprintfW(local_228,L"%s\\%s");
  uVar1 = FUN_180013520(local_228);
  if (((uVar1 & 0xfff) == 0x474) || ((uVar1 & 0xfff) == 0)) {
    DeleteFileW(local_228);
    local_260 = CreateFileW(local_228,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
    if (local_260 == (HANDLE)0xffffffffffffffff) {
      local_250 = (longlong *)FUN_180007470();
      if (local_250 != (longlong *)0x0) {
        GetLastError();
        local_240 = *local_250;
        (**(code **)(local_240 + 0x30))(local_250,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n");
      }
    }
    else {
      BVar2 = WriteFile(local_260,*(LPCVOID *)(param_1 + 0x1688),local_264,local_258,
                        (LPOVERLAPPED)0x0);
      if ((BVar2 == 0) && (local_248 = (longlong *)FUN_180007470(), local_248 != (longlong *)0x0)) {
        GetLastError();
        local_238 = *local_248;
        (**(code **)(local_238 + 0x30))(local_248,1,0x12400,L"Boot:%S %d File:%s failed:%08X\n");
      }
    }
  }
  else {
    GetLastError();
  }
  if (local_260 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_260);
    CloseHandle(local_260);
    FUN_180013520(local_228);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2a8);
  return;
}




undefined4 FUN_180020ae0(longlong param_1)

{
  undefined1 auVar1 [16];
  __uint64 _Var2;
  void *pvVar3;
  longlong lVar4;
  undefined1 *puVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  undefined4 local_b8;
  
  local_b8 = 0;
  *(undefined4 *)(param_1 + 0x1ec8) = 2;
  auVar1 = ZEXT816(0x1004) * ZEXT416(*(uint *)(param_1 + 0x1ec8));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1ed0) = pvVar3;
  *(undefined4 *)(param_1 + 0x1ed8) = 0xd;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1ed8));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1ee0) = pvVar3;
  *(undefined4 *)(param_1 + 0x1ee8) = 0xe;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1ee8));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1ef0) = pvVar3;
  *(undefined4 *)(param_1 + 0x1ef8) = 3;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1ef8));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1f00) = pvVar3;
  *(undefined4 *)(param_1 + 0x1f08) = 4;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1f08));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1f10) = pvVar3;
  *(undefined4 *)(param_1 + 0x1f18) = 0xe;
  auVar1 = ZEXT816(0x1800) * ZEXT416(*(uint *)(param_1 + 0x1f18));
  _Var2 = auVar1._0_8_;
  if (auVar1._8_8_ != 0) {
    _Var2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new(_Var2);
  *(void **)(param_1 + 0x1f20) = pvVar3;
  if ((((*(longlong *)(param_1 + 0x1ed0) == 0) || (*(longlong *)(param_1 + 0x1ee0) == 0)) ||
      (*(longlong *)(param_1 + 0x1ef0) == 0)) ||
     (((*(int *)(param_1 + 0x1ef8) == 0 || (*(longlong *)(param_1 + 0x1f10) == 0)) ||
      (*(longlong *)(param_1 + 0x1f20) == 0)))) {
    local_b8 = 0x2151240a;
  }
  else {
    puVar5 = &DAT_1800bb250;
    puVar7 = *(undefined1 **)(param_1 + 0x1ed0);
    for (lVar4 = 0x2008; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    pwVar6 = u__8e0b8211_7965_4722_94cb_16c9e07_1800a3250;
    puVar5 = *(undefined1 **)(param_1 + 0x1ee0);
    for (lVar4 = 0x13800; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = u__8e0b8211_7965_4722_94cb_16c9e07_18008e250;
    puVar5 = *(undefined1 **)(param_1 + 0x1ef0);
    for (lVar4 = 0x15000; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = u__341672c6_105f_4185_b472_60afa55_1800b6a50;
    puVar5 = *(undefined1 **)(param_1 + 0x1f00);
    for (lVar4 = 0x4800; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = u__341672c6_105f_4185_b472_60afa55_180088250;
    puVar5 = *(undefined1 **)(param_1 + 0x1f10);
    for (lVar4 = 0x6000; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = u__8e0b8211_7965_4722_94cb_16c9e07_180073250;
    puVar5 = *(undefined1 **)(param_1 + 0x1f20);
    for (lVar4 = 0x15000; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"C:\\DCLOADPE";
    puVar5 = (undefined1 *)(param_1 + 0xa40);
    for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"C:\\DCLOADLX";
    puVar5 = (undefined1 *)(param_1 + 0xc48);
    for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"EUDCWINPE.DAT";
    puVar5 = (undefined1 *)(param_1 + 0xe50);
    for (lVar4 = 0x1c; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
    pwVar6 = L"EUDCLINUX.DAT";
    puVar5 = (undefined1 *)(param_1 + 0x1058);
    for (lVar4 = 0x1c; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = (char)*pwVar6;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      puVar5 = puVar5 + 1;
    }
  }
  return local_b8;
}




void FUN_180020f80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  WCHAR *pWVar4;
  undefined1 *puVar5;
  undefined1 auStackY_278 [32];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_278;
  pWVar4 = local_238;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  iVar1 = FUN_18003bc80(L"boot",L"RamOptions",L"EaseUS Ramdisk options",local_238,0x104,(LPCWSTR)0x0
                       );
  if (iVar1 != 0) {
    wsprintfW((LPWSTR)(*(longlong *)(param_1 + 0x1ed0) + 0x804),L"\"%s\"");
    wsprintfW((LPWSTR)(*(longlong *)(param_1 + 0x1ed0) + 0x1808),L"\"%s\"");
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined2 *)(*(longlong *)(param_1 + 0x1ef0) + 0x1014) = *(undefined2 *)(param_1 + 0x220);
      *(undefined2 *)(*(longlong *)(param_1 + 0x1ef0) + 0x4012) = *(undefined2 *)(param_1 + 0x220);
      *(undefined2 *)(*(longlong *)(param_1 + 0x1ef0) + 0x7012) = *(undefined2 *)(param_1 + 0x220);
      *(undefined2 *)(*(longlong *)(param_1 + 0x1ee0) + 0x1014) = *(undefined2 *)(param_1 + 0x220);
      *(undefined2 *)(*(longlong *)(param_1 + 0x1ee0) + 0x4012) = *(undefined2 *)(param_1 + 0x220);
      *(undefined2 *)(*(longlong *)(param_1 + 0x1ee0) + 0x7012) = *(undefined2 *)(param_1 + 0x220);
      wsprintfW((LPWSTR)(*(longlong *)(param_1 + 0x1f10) + 0x1000),L"\"%s\"");
      wsprintfW((LPWSTR)(*(longlong *)(param_1 + 0x1f00) + 0x1000),L"\"%s\"");
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pwVar3 = L"\\Windows\\system32\\winload.efi";
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x1ef0) + 0x5800);
      for (lVar2 = 0x3c; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = (char)*pwVar3;
        pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
        puVar5 = puVar5 + 1;
      }
      pwVar3 = L"\\Windows\\system32\\winload.efi";
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x1ee0) + 0x5800);
      for (lVar2 = 0x3c; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = (char)*pwVar3;
        pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
        puVar5 = puVar5 + 1;
      }
      pwVar3 = L"\\Windows\\system32\\winload.efi";
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x1f20) + 0x5800);
      for (lVar2 = 0x3c; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = (char)*pwVar3;
        pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
        puVar5 = puVar5 + 1;
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_278);
  return;
}




uint FUN_180021360(longlong *param_1,int param_2)

{
  uint local_18;
  
  if ((int)param_1[1] == 0) {
    local_18 = 0x25b12405;
  }
  else if ((((*(int *)((longlong)param_1 + 0x167c) != 1) ||
            ((local_18 = FUN_180020640((longlong)param_1), (local_18 & 0xfff) == 0 &&
             (local_18 = FUN_1800207f0((longlong)param_1), (local_18 & 0xfff) == 0)))) &&
           (local_18 = FUN_18001ed50(param_1,param_2), (local_18 & 0xfff) == 0)) &&
          (*(int *)((longlong)param_1 + 0x167c) == 1)) {
    local_18 = FUN_18001e290(param_1,0);
  }
  if ((local_18 & 0xfff) != 0) {
    FUN_18001ee00((longlong)param_1,param_2);
  }
  return local_18;
}




uint FUN_180021460(longlong param_1,int param_2)

{
  uint local_18;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x29312405;
  }
  else {
    local_18 = FUN_18001ee00(param_1,param_2);
  }
  return local_18;
}




uint FUN_1800214c0(longlong param_1,uint param_2,WCHAR *param_3,ulonglong param_4)

{
  uint local_18;
  
  if (*(int *)(param_1 + 8) == 0) {
    local_18 = 0x2a912405;
  }
  else {
    local_18 = FUN_18001eea0(param_1,param_2,param_3,param_4);
  }
  return local_18;
}




int FUN_180021530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = FUN_180007680(param_1,param_2,param_3,0,&local_res20);
  return iVar1;
}




void FUN_180021590(uint param_1,WCHAR *param_2,undefined4 *param_3,uint *param_4)

{
  WCHAR WVar1;
  uint uVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 *puVar5;
  WCHAR *pWVar6;
  longlong *plVar7;
  undefined1 auStackY_738 [32];
  uint local_6f0;
  DWORD local_6ec;
  char *local_6e8;
  HANDLE local_6e0;
  void *local_6d8;
  uint local_6d0;
  WCHAR *local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  WCHAR *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  ulonglong local_698;
  longlong *local_690;
  void *local_688;
  WCHAR *local_680;
  WCHAR *local_678;
  longlong local_670;
  longlong local_668;
  ulonglong local_660;
  void *local_658;
  WCHAR *local_650;
  undefined4 local_648;
  undefined1 local_644 [16];
  uint local_634;
  WCHAR WStack_62a;
  WCHAR local_628 [264];
  longlong local_418 [128];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_738;
  local_6ec = 0;
  local_648 = 0;
  puVar5 = local_644;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pWVar6 = local_628;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  local_6e0 = (HANDLE)0xffffffffffffffff;
  local_6e8 = (char *)0x0;
  plVar7 = local_418;
  for (lVar4 = 0x400; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)plVar7 = 0;
    plVar7 = (longlong *)((longlong)plVar7 + 1);
  }
  local_6d8 = (void *)0x0;
  local_690 = local_418;
  *param_3 = 0;
  *param_4 = 0;
  uVar2 = FUN_180010fb0((ulonglong)param_1,&local_648);
  if ((uVar2 & 0xfff) == 0) {
    if ((local_634 == 0) || (local_634 % 0x200 != 0)) {
      local_634 = 0x200;
    }
    local_6d8 = operator_new((ulonglong)local_634);
    local_688 = local_6d8;
    if (local_6d8 != (void *)0x0) {
      FUN_180021530(local_628,0x104,L"\\\\.\\PhysicalDrive%d",(ulonglong)param_1);
      uVar2 = FUN_180014b40(local_628,local_6d8,0,1);
      if ((uVar2 & 0xfff) == 0) {
        local_650 = local_628;
        local_6c8 = local_650;
        local_6b0 = param_2;
        do {
          WVar1 = *local_6b0;
          *local_6c8 = WVar1;
          local_6b0 = local_6b0 + 1;
          local_6c8 = local_6c8 + 1;
        } while (WVar1 != L'\0');
        local_680 = local_628;
        local_6c0 = -1;
        lVar4 = local_6c0;
        do {
          local_6c0 = lVar4;
          lVar4 = local_6c0 + 1;
        } while (local_680[lVar4] != L'\0');
        pWVar6 = local_628 + local_6c0;
        local_6c0 = lVar4;
        if (*pWVar6 == L'\\') {
          local_678 = local_628;
          local_6b8 = -1;
          do {
            local_6b8 = local_6b8 + 1;
          } while (local_678[local_6b8] != L'\0');
          local_698 = local_6b8 * 2 - 2;
          if (0x207 < local_698) {
            __report_rangecheckfailure();
          }
          *(undefined2 *)((longlong)local_628 + local_698) = 0;
        }
        local_6e0 = CreateFileW(local_628,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                               );
        if (local_6e0 == (HANDLE)0xffffffffffffffff) {
          local_6a8 = (longlong *)FUN_180007470();
          if (local_6a8 != (longlong *)0x0) {
            GetLastError();
            local_670 = *local_6a8;
            (**(code **)(local_670 + 0x30))(local_6a8,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
          }
        }
        else {
          BVar3 = DeviceIoControl(local_6e0,0x74004,(LPVOID)0x0,0,local_690,0x400,&local_6ec,
                                  (LPOVERLAPPED)0x0);
          if (BVar3 == 0) {
            local_6a0 = (longlong *)FUN_180007470();
            if (local_6a0 != (longlong *)0x0) {
              GetLastError();
              local_668 = *local_6a0;
              (**(code **)(local_668 + 0x30))
                        (local_6a0,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
            }
          }
          else {
            local_660 = (ulonglong)local_634;
            local_6ec = (DWORD)(*local_690 / (longlong)local_660);
            local_6e8 = (char *)((longlong)local_6d8 + 0x1be);
            for (local_6f0 = 0; local_6f0 < 4; local_6f0 = local_6f0 + 1) {
              if ((local_6e8[4] != '\x0f') && (local_6ec == *(DWORD *)(local_6e8 + 8))) {
                *param_3 = 1;
                local_6d0 = (uint)(*local_6e8 == -0x80);
                *param_4 = local_6d0;
                break;
              }
              local_6e8 = local_6e8 + 0x10;
            }
          }
        }
      }
    }
  }
  if (local_6e0 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_6e0);
    local_6e0 = (HANDLE)0xffffffffffffffff;
  }
  if (local_6d8 != (void *)0x0) {
    local_658 = local_6d8;
    free(local_6d8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_738);
  return;
}




void FUN_180021b70(uint param_1,WCHAR *param_2)

{
  WCHAR WVar1;
  uint uVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 *puVar5;
  WCHAR *pWVar6;
  longlong *plVar7;
  undefined1 auStackY_738 [32];
  uint local_6f8;
  uint local_6f0;
  char *local_6e8;
  DWORD local_6e0 [2];
  void *local_6d8;
  HANDLE local_6d0;
  WCHAR *local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  WCHAR *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  ulonglong local_698;
  longlong *local_690;
  void *local_688;
  WCHAR *local_680;
  WCHAR *local_678;
  longlong local_670;
  longlong local_668;
  ulonglong local_660;
  void *local_658;
  WCHAR *local_650;
  undefined4 local_648;
  undefined1 local_644 [16];
  uint local_634;
  WCHAR WStack_62a;
  WCHAR local_628 [264];
  longlong local_418 [128];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_738;
  local_6e0[0] = 0;
  local_648 = 0;
  puVar5 = local_644;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pWVar6 = local_628;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  local_6d0 = (HANDLE)0xffffffffffffffff;
  plVar7 = local_418;
  for (lVar4 = 0x400; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)plVar7 = 0;
    plVar7 = (longlong *)((longlong)plVar7 + 1);
  }
  local_6d8 = (void *)0x0;
  local_690 = local_418;
  uVar2 = FUN_180010fb0((ulonglong)param_1,&local_648);
  if ((uVar2 & 0xfff) == 0) {
    if ((local_634 == 0) || (local_634 % 0x200 != 0)) {
      local_634 = 0x200;
    }
    local_6d8 = operator_new((ulonglong)local_634);
    local_688 = local_6d8;
    if (local_6d8 != (void *)0x0) {
      FUN_180021530(local_628,0x104,L"\\\\.\\PhysicalDrive%d",(ulonglong)param_1);
      uVar2 = FUN_180014b40(local_628,local_6d8,0,1);
      if ((uVar2 & 0xfff) == 0) {
        local_650 = local_628;
        local_6c8 = local_650;
        local_6b0 = param_2;
        do {
          WVar1 = *local_6b0;
          *local_6c8 = WVar1;
          local_6b0 = local_6b0 + 1;
          local_6c8 = local_6c8 + 1;
        } while (WVar1 != L'\0');
        local_680 = local_628;
        local_6c0 = -1;
        lVar4 = local_6c0;
        do {
          local_6c0 = lVar4;
          lVar4 = local_6c0 + 1;
        } while (local_680[lVar4] != L'\0');
        pWVar6 = local_628 + local_6c0;
        local_6c0 = lVar4;
        if (*pWVar6 == L'\\') {
          local_678 = local_628;
          local_6b8 = -1;
          do {
            local_6b8 = local_6b8 + 1;
          } while (local_678[local_6b8] != L'\0');
          local_698 = local_6b8 * 2 - 2;
          if (0x207 < local_698) {
            __report_rangecheckfailure();
          }
          *(undefined2 *)((longlong)local_628 + local_698) = 0;
        }
        local_6d0 = CreateFileW(local_628,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                               );
        if (local_6d0 == (HANDLE)0xffffffffffffffff) {
          local_6a8 = (longlong *)FUN_180007470();
          if (local_6a8 != (longlong *)0x0) {
            GetLastError();
            local_670 = *local_6a8;
            (**(code **)(local_670 + 0x30))(local_6a8,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
          }
        }
        else {
          BVar3 = DeviceIoControl(local_6d0,0x74004,(LPVOID)0x0,0,local_690,0x400,local_6e0,
                                  (LPOVERLAPPED)0x0);
          if (BVar3 == 0) {
            local_6a0 = (longlong *)FUN_180007470();
            if (local_6a0 != (longlong *)0x0) {
              GetLastError();
              local_668 = *local_6a0;
              (**(code **)(local_668 + 0x30))
                        (local_6a0,1,0x12400,L"Boot:%S %d DEV:%s failed:%08X\n");
            }
          }
          else {
            local_6f8 = 0xc212437;
            local_660 = (ulonglong)local_634;
            local_6e0[0] = (DWORD)(*local_690 / (longlong)local_660);
            local_6e8 = (char *)((longlong)local_6d8 + 0x1be);
            for (local_6f0 = 0; local_6f0 < 4; local_6f0 = local_6f0 + 1) {
              if ((local_6e8[4] == '\x0f') || (local_6e0[0] != *(DWORD *)(local_6e8 + 8))) {
                if (*local_6e8 == -0x80) {
                  *local_6e8 = '\0';
                }
              }
              else {
                *local_6e8 = -0x80;
                local_6f8 = 0;
              }
              local_6e8 = local_6e8 + 0x10;
            }
            if ((local_6f8 & 0xfff) == 0) {
              FUN_180021530(local_628,0x104,L"\\\\.\\PhysicalDrive%d",(ulonglong)param_1);
              FUN_1800150f0(local_628,local_6d8,0,1);
            }
          }
        }
      }
    }
  }
  if (local_6d0 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_6d0);
  }
  if (local_6d8 != (void *)0x0) {
    local_658 = local_6d8;
    free(local_6d8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_738);
  return;
}




uint FUN_180022180(void)

{
  DWORD DVar1;
  uint local_18;
  
  DVar1 = GetLogicalDrives();
  local_18 = 2;
  while ((local_18 < 0x1a && ((DVar1 & 1 << ((byte)local_18 & 0x1f)) != 0))) {
    local_18 = local_18 + 1;
  }
  return local_18;
}




void FUN_1800221e0(WCHAR *param_1,undefined8 *param_2)

{
  WCHAR WVar1;
  BOOL BVar2;
  HANDLE hDevice;
  longlong lVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_6e8 [32];
  WCHAR *local_698;
  longlong local_690;
  longlong local_688;
  DWORD local_680 [2];
  WCHAR *local_678;
  longlong *local_670;
  longlong *local_668;
  ulonglong local_660;
  undefined1 *local_658;
  WCHAR *local_650;
  WCHAR *local_648;
  longlong local_640;
  longlong local_638;
  undefined8 local_630;
  WCHAR local_628 [264];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_6e8;
  puVar4 = local_418;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_680[0] = 0;
  pWVar5 = local_628;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_658 = local_418;
  local_630 = local_628;
  local_698 = local_630;
  local_678 = param_1;
  do {
    WVar1 = *local_678;
    *local_698 = WVar1;
    local_678 = local_678 + 1;
    local_698 = local_698 + 1;
  } while (WVar1 != L'\0');
  local_650 = local_628;
  local_690 = -1;
  lVar3 = local_690;
  do {
    local_690 = lVar3;
    lVar3 = local_690 + 1;
  } while (local_650[local_690 + 1] != L'\0');
  if (local_628[local_690] == L'\\') {
    local_648 = local_628;
    local_688 = -1;
    do {
      local_688 = local_688 + 1;
    } while (local_648[local_688] != L'\0');
    local_660 = local_688 * 2 - 2;
    if (0x207 < local_660) {
      __report_rangecheckfailure();
    }
    *(undefined2 *)((longlong)local_628 + local_660) = 0;
  }
  hDevice = CreateFileW(local_628,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_670 = (longlong *)FUN_180007470();
    if (local_670 != (longlong *)0x0) {
      GetLastError();
      local_640 = *local_670;
      (**(code **)(local_640 + 0x30))(local_670,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n");
    }
  }
  else {
    BVar2 = DeviceIoControl(hDevice,0x74004,(LPVOID)0x0,0,local_658,0x400,local_680,
                            (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      local_668 = (longlong *)FUN_180007470();
      if (local_668 != (longlong *)0x0) {
        GetLastError();
        local_638 = *local_668;
        (**(code **)(local_638 + 0x30))(local_668,1,0x12400,L"Boot:%S %d failed:%08X\n");
      }
    }
    else {
      *param_2 = *(undefined8 *)(local_658 + 8);
    }
  }
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hDevice);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_6e8);
  return;
}




undefined4 FUN_180022560(LPCWSTR param_1,int *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 local_38;
  DWORD local_34;
  DWORD local_30 [4];
  longlong *local_20;
  longlong local_18;
  
  local_30[0] = 0;
  local_34 = 0;
  local_30[2] = 0;
  local_30[1] = 0;
  local_38 = 0;
  if (((param_1 == (LPCWSTR)0x0) || (*param_1 == L'\0')) || (param_2 == (int *)0x0)) {
    local_38 = 0x15212409;
  }
  else {
    BVar1 = GetDiskFreeSpaceW(param_1,&local_34,local_30,local_30 + 2,local_30 + 1);
    if (BVar1 == 0) {
      local_20 = (longlong *)FUN_180007470();
      if (local_20 != (longlong *)0x0) {
        DVar2 = GetLastError();
        local_18 = *local_20;
        (**(code **)(local_18 + 0x30))
                  (local_20,1,0x12400,L"Boot:%S %d VOL:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\getinstallvol.cpp",0x15c,param_1,DVar2);
      }
      local_38 = 0x15d12500;
    }
    else {
      *param_2 = local_34 * local_30[0];
    }
  }
  return local_38;
}




void FUN_1800226b0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  HANDLE hDevice;
  undefined1 auStackY_308 [32];
  uint local_2c4;
  uint *local_2c0;
  DWORD local_2b0 [2];
  longlong *local_2a8;
  longlong *local_298;
  uint *local_290;
  longlong *local_288;
  longlong *local_280;
  uint *local_278;
  longlong local_270;
  uint *local_268;
  uint *local_260;
  longlong local_258;
  uint *local_250;
  longlong local_248;
  uint *local_240;
  uint *local_238;
  undefined8 local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_230 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_308;
  local_2c0 = (uint *)0x0;
  local_2c4 = 0x400;
  local_2b0[0] = 0;
  wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
  hDevice = CreateFileW(local_228,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice == (HANDLE)0xffffffffffffffff) {
    local_2a8 = (longlong *)FUN_180007470();
    if (local_2a8 != (longlong *)0x0) {
      GetLastError();
      local_270 = *local_2a8;
      (**(code **)(local_270 + 0x30))(local_2a8,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  else {
    do {
      local_2c0 = (uint *)operator_new((ulonglong)local_2c4);
      local_268 = local_2c0;
      local_260 = local_2c0;
      if (local_2c0 == (uint *)0x0) {
        local_298 = (longlong *)FUN_180007470();
        if (local_298 != (longlong *)0x0) {
          (**(code **)(*local_298 + 0x30))(local_298,1,0x12400);
        }
        break;
      }
      iVar2 = FUN_1800104e0();
      if (iVar2 == 1) {
        BVar3 = DeviceIoControl(hDevice,0x70050,(LPVOID)0x0,0,local_2c0,local_2c4,local_2b0,
                                (LPOVERLAPPED)0x0);
        if (BVar3 == 0) {
          DVar4 = GetLastError();
          if (DVar4 != 0x7a) {
            local_288 = (longlong *)FUN_180007470();
            if (local_288 != (longlong *)0x0) {
              GetLastError();
              local_258 = *local_288;
              (**(code **)(local_258 + 0x30))(local_288,1,0x12400);
            }
            break;
          }
          local_2c4 = local_2c4 << 1;
          local_250 = local_2c0;
          free(local_2c0);
          local_2c0 = (uint *)0x0;
        }
        else {
          local_290 = local_2c0;
          if (((*local_2c0 != 0) || (param_2 != 1)) || (1 < local_2c0[1])) break;
          lVar1 = *(longlong *)(local_2c0 + 0xe);
joined_r0x000180022aa4:
          if (lVar1 == 0) break;
        }
      }
      else {
        BVar3 = DeviceIoControl(hDevice,0x7400c,(LPVOID)0x0,0,local_2c0,local_2c4,local_2b0,
                                (LPOVERLAPPED)0x0);
        if (BVar3 != 0) {
          local_278 = local_2c0;
          if ((param_2 == 1) && (*local_2c0 < 2)) {
            lVar1 = *(longlong *)(local_2c0 + 2);
            goto joined_r0x000180022aa4;
          }
          break;
        }
        DVar4 = GetLastError();
        if (DVar4 != 0x7a) {
          local_280 = (longlong *)FUN_180007470();
          if (local_280 != (longlong *)0x0) {
            GetLastError();
            local_248 = *local_280;
            (**(code **)(local_248 + 0x30))(local_280,1,0x12400);
          }
          break;
        }
        local_2c4 = local_2c4 << 1;
        local_240 = local_2c0;
        free(local_2c0);
        local_2c0 = (uint *)0x0;
      }
    } while (local_2c4 < 0x100000);
  }
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hDevice);
  }
  if (local_2c0 != (uint *)0x0) {
    local_238 = local_2c0;
    free(local_2c0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_308);
  return;
}




void FUN_180022c00(LPCWSTR param_1,short *param_2)

{
  BOOL BVar1;
  HANDLE hHandle;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_278 [32];
  short local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  LPVOID local_248;
  void *local_240;
  void *local_238;
  WCHAR local_230 [4];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_278;
  local_254 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  builtin_memcpy(local_230,L"X:\\",8);
  local_258 = 0;
  if (*param_2 == 0) {
    local_24c = FUN_180022180();
    if ((int)local_24c < 0x1a) {
      local_258 = (short)local_24c + 0x41;
      local_230[0] = local_258;
      wsprintfW(local_228,L"\\\\.\\%C:");
      BVar1 = SetVolumeMountPointW(local_230,param_1);
      if (BVar1 == 0) {
        local_254 = 0x235127c4;
      }
      else {
        local_248 = operator_new(0x1000);
        local_240 = local_248;
        if (local_248 != (void *)0x0) {
          local_250 = 0;
          while ((local_250 < 5 &&
                 (local_254 = FUN_180014b40(local_228,local_248,0,1), (local_254 & 0xfff) != 0))) {
            hHandle = GetCurrentThread();
            WaitForSingleObject(hHandle,1000);
            local_250 = local_250 + 1;
          }
          *param_2 = local_258;
          local_238 = local_248;
          free(local_248);
        }
      }
    }
    else {
      local_254 = 0x22b127c4;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_278);
  return;
}




void FUN_180022db0(uint param_1,LPCWSTR param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  WCHAR *pWVar4;
  undefined1 *puVar5;
  undefined1 auStack_4d8 [32];
  uint local_4b8;
  char *local_4b0;
  short local_4a8 [2];
  int local_4a4;
  int local_4a0;
  int local_49c;
  undefined4 local_498;
  uint local_494 [3];
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 local_474;
  char *local_470;
  char *local_468;
  undefined4 local_460;
  undefined1 local_45c [16];
  uint local_44c;
  undefined8 local_448;
  WCHAR local_438 [264];
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_4d8;
  local_478 = 0;
  local_4a0 = 0;
  local_4a4 = 0;
  local_474 = 0;
  local_494[0] = 0;
  local_498 = 0;
  local_494[1] = 0;
  local_49c = 0;
  local_480 = 0;
  puVar3 = &uStack_47c;
  for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((longlong)puVar3 + 1);
  }
  local_488 = 0;
  puVar3 = &uStack_484;
  for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((longlong)puVar3 + 1);
  }
  local_4b8 = 0;
  local_4b0 = (char *)0x0;
  local_460 = 0;
  puVar5 = local_45c;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4a8[0] = 0;
  pWVar4 = local_438;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_448 = 0x5c003a0058;
  puVar5 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4b8 = FUN_180010fb0((ulonglong)param_1,&local_460);
  if ((local_4b8 & 0xfff) == 0) {
    if ((local_44c == 0) || (local_44c % 0x200 != 0)) {
      local_44c = 0x200;
    }
    local_4b0 = (char *)operator_new((ulonglong)local_44c);
    local_470 = local_4b0;
    if (local_4b0 == (char *)0x0) {
      local_4b8 = 0x2821240a;
    }
    else {
      iVar1 = FUN_180010940(param_1,local_438,local_4a8);
      if (iVar1 == 0) {
        local_4b8 = 0x290127c5;
      }
      else {
        local_4b8 = FUN_1800119e0(param_1,local_438);
        if ((local_4b8 & 0xfff) == 0) {
          local_4b8 = FUN_180021590(param_1,local_438,&local_498,local_494);
          if (local_494[0] == 0) {
            local_4b8 = FUN_180021b70(param_1,local_438);
          }
          iVar1 = FUN_180011d10((longlong)local_438,param_2,(longlong *)&local_488);
          if (iVar1 == 0) {
            local_4b8 = 0x2ae127ca;
          }
          else {
            local_4b8 = FUN_1800221e0(local_438,(undefined8 *)&local_480);
            if ((local_4b8 & 0xfff) == 0) {
              if (CONCAT44(uStack_47c,local_480) < CONCAT44(uStack_484,local_488)) {
                local_4b8 = 0x2ba127c5;
              }
              else {
                local_4b8 = FUN_180010600(local_438,&local_4a4);
                if ((local_4b8 & 0xfff) == 0) {
                  local_4b8 = FUN_180022560(local_438,(int *)(local_494 + 1));
                  if ((local_4b8 & 0xfff) == 0) {
                    local_4b8 = FUN_180010e60(local_438,CONCAT44(uStack_484,local_488),&local_4a0);
                    if ((local_4b8 & 0xfff) == 0) {
                      if (local_4a0 == 1) {
                        local_4b8 = 0x2e7127c5;
                      }
                      else if (local_4a0 == 2) {
                        local_4b8 = 0x2ec127c5;
                      }
                      else {
                        local_4b8 = FUN_180014b40(local_438,local_4b0,0,1);
                        if ((local_4b8 & 0xfff) == 0) {
                          if (local_4a4 == 2) {
                            if (((*local_4b0 != -0x15) || (local_4b0[1] != 'X')) ||
                               (local_4b0[2] != -0x70)) {
                              *local_4b0 = -0x15;
                              local_4b0[1] = 'X';
                              local_4b0[2] = -0x70;
                              local_49c = 1;
                            }
                          }
                          else if (((*local_4b0 != -0x15) || (local_4b0[1] != '<')) ||
                                  (local_4b0[2] != -0x70)) {
                            *local_4b0 = -0x15;
                            local_4b0[1] = '<';
                            local_4b0[2] = -0x70;
                            local_49c = 1;
                          }
                          if ((local_49c == 0) ||
                             (local_4b8 = FUN_1800150f0(local_438,local_4b0,0,1),
                             (local_4b8 & 0xfff) == 0)) {
                            local_4b8 = 0x329127c6;
                          }
                        }
                      }
                    }
                  }
                  else {
                    local_4b8 = 0x2d2127c6;
                  }
                }
                else {
                  local_4b8 = 0x2c4127c6;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_4b8 == 0) || ((local_4b8 & 0xfff) == 0x7c6)) {
    FUN_180022c00(local_438,local_4a8);
    *param_3 = local_4a8[0];
  }
  if (local_4b0 != (char *)0x0) {
    local_468 = local_4b0;
    free(local_4b0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4d8);
  return;
}




void FUN_180023310(uint param_1,LPCWSTR param_2,short *param_3)

{
  WCHAR WVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  BOOL BVar6;
  ulonglong uVar7;
  HANDLE hHandle;
  longlong lVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  WCHAR *pWVar11;
  undefined1 auStackY_c38 [32];
  uint local_bf8;
  uint local_bf0;
  uint local_bec;
  uint local_be4;
  int local_be0;
  uint local_bdc;
  uint local_bd8;
  HANDLE local_bd0;
  HANDLE local_bc8;
  int local_bc0;
  int local_bbc;
  int local_bb8 [2];
  undefined8 local_bb0 [3];
  void *local_b98;
  WCHAR *local_b90;
  longlong local_b88;
  longlong local_b80;
  longlong local_b78;
  longlong local_b70;
  longlong local_b68;
  longlong local_b60;
  WCHAR *local_b58;
  DWORD local_b50;
  uint local_b4c;
  uint local_b48;
  longlong *local_b40;
  undefined4 local_b38;
  undefined4 uStack_b34;
  WCHAR *local_b30;
  undefined1 *local_b28;
  WCHAR *local_b20;
  ulonglong local_b18;
  void *local_b10;
  longlong local_b08;
  WCHAR *local_b00;
  WCHAR *local_af8;
  WCHAR *local_af0;
  WCHAR *local_ae8;
  ulonglong local_ae0;
  longlong local_ad8;
  ulonglong local_ad0;
  longlong local_ac8;
  longlong local_ac0;
  WCHAR *local_ab8;
  WCHAR *local_ab0;
  void *local_aa8;
  undefined4 local_aa0;
  undefined8 local_a98;
  WCHAR *local_a90;
  WCHAR *local_a88;
  undefined4 local_a80;
  undefined1 local_a7c [16];
  uint local_a6c;
  WCHAR local_a68 [260];
  int local_860;
  longlong local_858;
  WCHAR local_848 [7];
  WCHAR WStack_83a;
  WCHAR local_838 [264];
  WCHAR local_628 [264];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_a98 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_c38;
  local_bdc = 0;
  local_bc0 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_b4c = 0;
  local_bb8[0] = 0;
  puVar9 = local_418;
  for (lVar8 = 0x400; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_aa0 = 0;
  local_b50 = 0;
  local_b98 = (void *)0x0;
  local_a80 = 0;
  puVar9 = local_a7c;
  for (lVar8 = 0x14; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_b38 = 0;
  puVar10 = &uStack_b34;
  for (lVar8 = 4; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((longlong)puVar10 + 1);
  }
  local_bbc = 0;
  pWVar11 = local_a68;
  for (lVar8 = 0x218; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pWVar11 = 0;
    pWVar11 = (WCHAR *)((longlong)pWVar11 + 1);
  }
  local_bc8 = (HANDLE)0xffffffffffffffff;
  FUN_18000ae00(local_bb0);
  local_b28 = local_418;
  pWVar11 = local_838;
  for (lVar8 = 0x208; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pWVar11 = 0;
    pWVar11 = (WCHAR *)((longlong)pWVar11 + 1);
  }
  builtin_memcpy(local_848,L"X:\\",8);
  pWVar11 = local_628;
  for (lVar8 = 0x208; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pWVar11 = 0;
    pWVar11 = (WCHAR *)((longlong)pWVar11 + 1);
  }
  local_bf8 = FUN_180010fb0((ulonglong)param_1,&local_a80);
  if ((local_bf8 & 0xfff) == 0) {
    if ((local_a6c == 0) || (local_a6c % 0x200 != 0)) {
      local_a6c = 0x200;
    }
    local_b98 = operator_new((ulonglong)local_a6c);
    local_b10 = local_b98;
    if (local_b98 == (void *)0x0) {
      local_bf8 = 0x3641240a;
    }
    else {
      local_bf8 = FUN_180011430(param_1,&local_bbc);
      if ((local_bf8 & 0xfff) == 0) {
        FUN_18000abf0(local_bb0);
        local_bc8 = FindFirstVolumeW(local_838,0x104);
        if (local_bc8 == (HANDLE)0xffffffffffffffff) {
          local_b40 = (longlong *)FUN_180007470();
          if (local_b40 != (longlong *)0x0) {
            GetLastError();
            local_b08 = *local_b40;
            (**(code **)(local_b08 + 0x30))(local_b40,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          local_bf8 = 0x37312500;
        }
        else {
          do {
            local_b00 = local_838;
            local_b78 = -1;
            lVar8 = local_b78;
            do {
              local_b78 = lVar8;
              lVar8 = local_b78 + 1;
            } while (local_b00[lVar8] != L'\0');
            pWVar11 = local_838 + local_b78;
            local_b78 = lVar8;
            if (*pWVar11 == L'\\') {
              local_af8 = local_838;
              local_b70 = -1;
              do {
                local_b70 = local_b70 + 1;
              } while (local_af8[local_b70] != L'\0');
              local_b18 = local_b70 * 2 - 2;
              if (0x207 < local_b18) {
                __report_rangecheckfailure();
              }
              *(undefined2 *)((longlong)local_838 + local_b18) = 0;
            }
            local_bd0 = CreateFileW(local_838,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                    (HANDLE)0x0);
            if (local_bd0 == (HANDLE)0xffffffffffffffff) {
              local_bd0 = (HANDLE)0xffffffffffffffff;
            }
            else {
              BVar6 = DeviceIoControl(local_bd0,0x560000,(LPVOID)0x0,0,local_b28,0x400,&local_b50,
                                      (LPOVERLAPPED)0x0);
              if (BVar6 == 0) {
                CloseHandle(local_bd0);
                local_bd0 = (HANDLE)0xffffffffffffffff;
              }
              else {
                CloseHandle(local_bd0);
                local_bd0 = (HANDLE)0xffffffffffffffff;
                if (param_1 == *(uint *)(local_b28 + 8)) {
                  local_af0 = local_838;
                  local_b68 = -1;
                  lVar8 = local_b68;
                  do {
                    local_b68 = lVar8;
                    lVar8 = local_b68 + 1;
                  } while (local_af0[lVar8] != L'\0');
                  if (local_838[local_b68] != L'\\') {
                    local_ae8 = local_838;
                    local_b60 = -1;
                    do {
                      local_b60 = local_b60 + 1;
                    } while (local_ae8[local_b60] != L'\0');
                    local_838[local_b60] = L'\\';
                  }
                  local_b68 = lVar8;
                  uVar4 = FUN_1800119e0(param_1,local_838);
                  if ((uVar4 & 0xfff) == 0) {
                    local_bf8 = FUN_180010600(local_838,&local_be0);
                    if ((local_bf8 & 0xfff) == 0) {
                      if (((local_be0 == 1) || (local_be0 == 2)) &&
                         (iVar5 = FUN_180011d10((longlong)local_838,param_2,(longlong *)&local_b38),
                         iVar5 != 0)) {
                        local_bf8 = FUN_180010e60(local_838,CONCAT44(uStack_b34,local_b38),
                                                  &local_bc0);
                        if ((local_bf8 & 0xfff) == 0) {
                          if (local_bc0 == 0) {
                            if (local_bbc == 0) {
                              local_bf8 = FUN_180021590(param_1,local_838,local_bb8,&local_b4c);
                              if ((local_bf8 & 0xfff) == 0) {
                                if (local_bb8[0] != 0) goto LAB_18002397b;
                              }
                              else {
                                local_bf8 = 0;
                              }
                            }
                            else {
LAB_18002397b:
                              local_b30 = local_838;
                              local_a90 = local_a68;
                              local_b58 = local_a90;
                              do {
                                WVar1 = *local_b30;
                                *local_b58 = WVar1;
                                local_b30 = local_b30 + 1;
                                local_b58 = local_b58 + 1;
                              } while (WVar1 != L'\0');
                              local_858 = *(longlong *)(local_b28 + 0x10) /
                                          (longlong)(ulonglong)local_a6c;
                              uVar2 = FUN_180016720(local_838);
                              if (uVar2 == 0) {
                                local_860 = 0xff;
                              }
                              else {
                                local_860 = uVar2 - 0x41;
                              }
                              FUN_180025230(local_bb0,local_a68);
                            }
                          }
                        }
                        else {
                          local_bf8 = 0;
                        }
                      }
                    }
                    else {
                      local_bf8 = 0;
                    }
                  }
                  else {
                    local_bf8 = 0;
                  }
                }
              }
            }
            BVar6 = FindNextVolumeW(local_bc8,local_838,0x104);
          } while (BVar6 != 0);
          if (local_bc8 != (HANDLE)0xffffffffffffffff) {
            FindVolumeClose(local_bc8);
            local_bc8 = (HANDLE)0xffffffffffffffff;
          }
          if ((local_bf8 & 0xfff) == 0) {
            lVar8 = FUN_1800251e0(local_bb0);
            if (lVar8 == 0) {
              local_bf8 = 0x3fd129a0;
            }
            else {
              local_be4 = 0;
              local_bf0 = 0;
              while( true ) {
                local_ae0 = (ulonglong)local_bf0;
                uVar7 = FUN_1800251e0(local_bb0);
                if (uVar7 <= local_ae0) break;
                local_ad8 = FUN_1800251b0(local_bb0,(ulonglong)local_bf0);
                lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_be4);
                if (*(ulonglong *)(local_ad8 + 0x210) < *(ulonglong *)(lVar8 + 0x210)) {
                  local_be4 = local_bf0;
                }
                local_bf0 = local_bf0 + 1;
              }
              local_bec = 0xffffffff;
              local_bf0 = 0;
              while( true ) {
                local_ad0 = (ulonglong)local_bf0;
                uVar7 = FUN_1800251e0(local_bb0);
                if (uVar7 <= local_ad0) break;
                lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_bf0);
                if (*(int *)(lVar8 + 0x208) != 0xff) {
                  if (local_bec == 0xffffffff) {
                    local_bec = local_bf0;
                  }
                  else {
                    local_ac8 = FUN_1800251b0(local_bb0,(ulonglong)local_bf0);
                    lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_bec);
                    if (*(ulonglong *)(local_ac8 + 0x210) < *(ulonglong *)(lVar8 + 0x210)) {
                      local_bec = local_bf0;
                    }
                  }
                }
                local_bf0 = local_bf0 + 1;
              }
              if (local_bec != 0xffffffff) {
                local_ac0 = FUN_1800251b0(local_bb0,(ulonglong)local_bec);
                lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_be4);
                if (*(ulonglong *)(local_ac0 + 0x210) <= *(ulonglong *)(lVar8 + 0x210)) {
                  lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_bec);
                  *param_3 = *(short *)(lVar8 + 0x208) + 0x41;
                  goto LAB_180023f45;
                }
              }
              local_bdc = FUN_180022180();
              if (local_bdc < 0x1a) {
                local_b20 = (WCHAR *)FUN_1800251b0(local_bb0,(ulonglong)local_be4);
                local_a88 = local_838;
                local_b90 = local_a88;
                do {
                  WVar1 = *local_b20;
                  *local_b90 = WVar1;
                  local_b20 = local_b20 + 1;
                  local_b90 = local_b90 + 1;
                } while (WVar1 != L'\0');
                local_ab8 = local_838;
                local_b88 = -1;
                lVar8 = local_b88;
                do {
                  local_b88 = lVar8;
                  lVar8 = local_b88 + 1;
                } while (local_ab8[lVar8] != L'\0');
                if (local_838[local_b88] != L'\\') {
                  local_ab0 = local_838;
                  local_b80 = -1;
                  do {
                    local_b80 = local_b80 + 1;
                  } while (local_ab0[local_b80] != L'\0');
                  local_838[local_b80] = L'\\';
                }
                sVar3 = (short)local_bdc + 0x41;
                local_848[0] = sVar3;
                local_b88 = lVar8;
                wsprintfW(local_628,L"\\\\.\\%C:");
                BVar6 = SetVolumeMountPointW(local_848,local_838);
                if (BVar6 == 1) {
                  while ((local_bd8 < 5 &&
                         (local_bf8 = FUN_180014b40(local_628,local_b98,0,1),
                         (local_bf8 & 0xfff) != 0))) {
                    hHandle = GetCurrentThread();
                    WaitForSingleObject(hHandle,1000);
                    local_bd8 = local_bd8 + 1;
                  }
                  *param_3 = sVar3;
                }
                else if (local_bec == 0xffffffff) {
                  local_bf8 = 0x460127c4;
                }
                else {
                  lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_bec);
                  *param_3 = *(short *)(lVar8 + 0x208) + 0x41;
                }
              }
              else if (local_bec == 0xffffffff) {
                local_bf8 = 0x435127c4;
              }
              else {
                lVar8 = FUN_1800251b0(local_bb0,(ulonglong)local_bec);
                *param_3 = *(short *)(lVar8 + 0x208) + 0x41;
              }
            }
          }
        }
      }
    }
  }
LAB_180023f45:
  if (local_b98 != (void *)0x0) {
    local_aa8 = local_b98;
    free(local_b98);
  }
  local_b48 = local_bf8;
  FUN_180025390(local_bb0);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_c38);
  return;
}




void FUN_180023fb0(uint param_1,LPCWSTR param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE hHandle;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  WCHAR *pWVar8;
  undefined1 auStackY_988 [32];
  char *local_940;
  int local_938;
  int local_934;
  int local_930;
  uint local_92c;
  uint local_928;
  uint local_924;
  HANDLE local_920;
  HANDLE local_918;
  int local_910;
  uint local_90c;
  int local_908 [2];
  longlong local_900;
  longlong local_8f8;
  longlong local_8f0;
  longlong local_8e8;
  longlong local_8e0;
  longlong local_8d8;
  DWORD local_8d0 [2];
  longlong *local_8c8;
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  ulonglong local_8b8;
  undefined1 *local_8b0;
  char *local_8a8;
  longlong local_8a0;
  WCHAR *local_898;
  WCHAR *local_890;
  WCHAR *local_888;
  WCHAR *local_880;
  WCHAR *local_878;
  WCHAR *local_870;
  char *local_868;
  undefined4 local_860;
  undefined1 local_85c [16];
  uint local_84c;
  WCHAR local_848 [7];
  WCHAR WStack_83a;
  WCHAR local_838 [264];
  WCHAR local_628 [264];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_988;
  local_928 = 0;
  local_908[0] = 0;
  local_938 = 0;
  local_934 = 0;
  local_924 = 0;
  local_90c = 0;
  local_910 = 0;
  puVar6 = local_418;
  for (lVar5 = 0x400; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_92c = 0;
  local_8d0[0] = 0;
  local_930 = 0;
  local_940 = (char *)0x0;
  local_860 = 0;
  puVar6 = local_85c;
  for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_8c0 = 0;
  puVar7 = &uStack_8bc;
  for (lVar5 = 4; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((longlong)puVar7 + 1);
  }
  local_920 = (HANDLE)0xffffffffffffffff;
  local_8b0 = local_418;
  pWVar8 = local_838;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar8 = 0;
    pWVar8 = (WCHAR *)((longlong)pWVar8 + 1);
  }
  builtin_memcpy(local_848,L"X:\\",8);
  pWVar8 = local_628;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar8 = 0;
    pWVar8 = (WCHAR *)((longlong)pWVar8 + 1);
  }
  uVar2 = FUN_180010fb0((ulonglong)param_1,&local_860);
  if ((uVar2 & 0xfff) == 0) {
    if ((local_84c == 0) || (local_84c % 0x200 != 0)) {
      local_84c = 0x200;
    }
    local_940 = (char *)operator_new((ulonglong)local_84c);
    local_8a8 = local_940;
    if ((local_940 != (char *)0x0) &&
       (local_934 = FUN_1800226b0((ulonglong)param_1,0), local_934 != 0)) {
      local_920 = FindFirstVolumeW(local_838,0x104);
      if (local_920 == (HANDLE)0xffffffffffffffff) {
        local_8c8 = (longlong *)FUN_180007470();
        if (local_8c8 != (longlong *)0x0) {
          GetLastError();
          local_8a0 = *local_8c8;
          (**(code **)(local_8a0 + 0x30))(local_8c8,1,0x12400,L"Boot:%S %d failed:%08X\n");
        }
      }
      else {
        local_934 = 0;
        do {
          local_898 = local_838;
          local_8f8 = -1;
          lVar5 = local_8f8;
          do {
            local_8f8 = lVar5;
            lVar5 = local_8f8 + 1;
          } while (local_898[lVar5] != L'\0');
          pWVar8 = local_838 + local_8f8;
          local_8f8 = lVar5;
          if (*pWVar8 == L'\\') {
            local_890 = local_838;
            local_8f0 = -1;
            do {
              local_8f0 = local_8f0 + 1;
            } while (local_890[local_8f0] != L'\0');
            local_8b8 = local_8f0 * 2 - 2;
            if (0x207 < local_8b8) {
              __report_rangecheckfailure();
            }
            *(undefined2 *)((longlong)local_838 + local_8b8) = 0;
          }
          local_918 = CreateFileW(local_838,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0)
          ;
          if (local_918 == (HANDLE)0xffffffffffffffff) {
            local_918 = (HANDLE)0xffffffffffffffff;
          }
          else {
            BVar3 = DeviceIoControl(local_918,0x560000,(LPVOID)0x0,0,local_8b0,0x400,local_8d0,
                                    (LPOVERLAPPED)0x0);
            if (BVar3 == 0) {
              CloseHandle(local_918);
              local_918 = (HANDLE)0xffffffffffffffff;
            }
            else {
              CloseHandle(local_918);
              local_918 = (HANDLE)0xffffffffffffffff;
              if (param_1 == *(uint *)(local_8b0 + 8)) {
                local_888 = local_838;
                local_8e8 = -1;
                lVar5 = local_8e8;
                do {
                  local_8e8 = lVar5;
                  lVar5 = local_8e8 + 1;
                } while (local_888[lVar5] != L'\0');
                if (local_838[local_8e8] != L'\\') {
                  local_880 = local_838;
                  local_8e0 = -1;
                  do {
                    local_8e0 = local_8e0 + 1;
                  } while (local_880[local_8e0] != L'\0');
                  local_838[local_8e0] = L'\\';
                }
                local_8e8 = lVar5;
                uVar2 = FUN_180021590(param_1,local_838,&local_910,&local_90c);
                if ((((uVar2 & 0xfff) == 0) && (local_910 == 1)) && (local_90c == 1)) {
                  local_934 = 1;
                  break;
                }
              }
            }
          }
          BVar3 = FindNextVolumeW(local_920,local_838,0x104);
        } while (BVar3 != 0);
        if (local_920 != (HANDLE)0xffffffffffffffff) {
          FindVolumeClose(local_920);
          local_920 = (HANDLE)0xffffffffffffffff;
        }
        if (((((local_934 != 0) && (uVar2 = FUN_1800119e0(param_1,local_838), (uVar2 & 0xfff) == 0))
             && (uVar2 = FUN_180010600(local_838,&local_938), (uVar2 & 0xfff) == 0)) &&
            (((local_938 == 1 || (local_938 == 2)) || (local_938 == 4)))) &&
           (uVar2 = FUN_180022560(local_838,(int *)&local_92c), (uVar2 & 0xfff) == 0)) {
          if (local_938 == 4) {
            if (0x1000 < local_92c) goto LAB_180024a71;
          }
          else if ((local_938 == 2) && (0x8000 < local_92c)) goto LAB_180024a71;
          iVar4 = FUN_180011d10((longlong)local_838,param_2,(longlong *)&local_8c0);
          if ((((iVar4 != 0) &&
               (uVar2 = FUN_180010e60(local_838,CONCAT44(uStack_8bc,local_8c0),local_908),
               (uVar2 & 0xfff) == 0)) && (local_908[0] == 0)) &&
             ((uVar2 = FUN_180014b40(local_838,local_940,0,1), (uVar2 & 0xfff) == 0 &&
              (*(int *)(local_940 + 0x1c) != 0)))) {
            if (local_938 == 2) {
              if (((*local_940 != -0x15) || (local_940[1] != 'X')) || (local_940[2] != -0x70)) {
                *local_940 = -0x15;
                local_940[1] = 'X';
                local_940[2] = -0x70;
                local_930 = 1;
              }
            }
            else if (local_938 == 1) {
              if (((*local_940 != -0x15) || (local_940[1] != '<')) || (local_940[2] != -0x70)) {
                *local_940 = -0x15;
                local_940[1] = '<';
                local_940[2] = -0x70;
                local_930 = 1;
              }
            }
            else if (((*local_940 != -0x15) || (local_940[1] != 'R')) || (local_940[2] != -0x70)) {
              *local_940 = -0x15;
              local_940[1] = 'R';
              local_940[2] = -0x70;
              local_930 = 1;
            }
            if ((local_930 == 0) ||
               (uVar2 = FUN_1800150f0(local_838,local_940,0,1), (uVar2 & 0xfff) == 0)) {
              local_878 = local_838;
              local_8d8 = -1;
              lVar5 = local_8d8;
              do {
                local_8d8 = lVar5;
                lVar5 = local_8d8 + 1;
              } while (local_878[lVar5] != L'\0');
              if (local_838[local_8d8] != L'\\') {
                local_870 = local_838;
                local_900 = -1;
                do {
                  local_900 = local_900 + 1;
                } while (local_870[local_900] != L'\0');
                local_838[local_900] = L'\\';
              }
              local_8d8 = lVar5;
              sVar1 = FUN_180016720(local_838);
              if (sVar1 == 0) {
                local_928 = FUN_180022180();
                if (local_928 < 0x1a) {
                  sVar1 = (short)local_928 + 0x41;
                  local_848[0] = sVar1;
                  wsprintfW(local_628,L"\\\\.\\%C:");
                  BVar3 = SetVolumeMountPointW(local_848,local_838);
                  if (BVar3 != 0) {
                    while ((local_924 < 5 &&
                           (uVar2 = FUN_180014b40(local_628,local_940,0,1), (uVar2 & 0xfff) != 0)))
                    {
                      hHandle = GetCurrentThread();
                      WaitForSingleObject(hHandle,1000);
                      local_924 = local_924 + 1;
                    }
                    *param_3 = sVar1;
                  }
                }
              }
              else {
                *param_3 = sVar1;
              }
            }
          }
        }
      }
    }
  }
LAB_180024a71:
  if (local_940 != (char *)0x0) {
    local_868 = local_940;
    free(local_940);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_988);
  return;
}




void FUN_180024c70(uint param_1,undefined4 *param_2)

{
  BOOL BVar1;
  uint uVar2;
  HANDLE hFindVolume;
  HANDLE hDevice;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 *puVar5;
  undefined1 auStackY_918 [32];
  int local_8c0;
  uint local_8bc;
  int local_8b8;
  longlong local_8b0;
  longlong local_8a8;
  longlong local_8a0;
  longlong local_898;
  DWORD local_890 [2];
  longlong *local_888;
  longlong *local_880;
  longlong *local_878;
  ulonglong local_870;
  undefined1 *local_868;
  longlong local_860;
  WCHAR *local_858;
  WCHAR *local_850;
  WCHAR *local_848;
  undefined8 local_840;
  WCHAR local_838 [264];
  undefined1 local_628 [528];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_918;
  local_8b8 = 0;
  local_8bc = 0;
  local_8c0 = 0;
  puVar5 = local_418;
  for (lVar3 = 0x400; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_890[0] = 0;
  local_868 = local_418;
  pWVar4 = local_838;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  puVar5 = local_628;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  hFindVolume = FindFirstVolumeW(local_838,0x104);
  if (hFindVolume == (HANDLE)0xffffffffffffffff) {
    local_888 = (longlong *)FUN_180007470();
    if (local_888 != (longlong *)0x0) {
      GetLastError();
      local_860 = *local_888;
      (**(code **)(local_860 + 0x30))(local_888,1,0x12400,L"Boot:%S %d failed:%08X\n");
    }
  }
  else {
    do {
      local_858 = local_838;
      local_8b0 = -1;
      lVar3 = local_8b0;
      do {
        local_8b0 = lVar3;
        lVar3 = local_8b0 + 1;
      } while (local_858[lVar3] != L'\0');
      pWVar4 = local_838 + local_8b0;
      local_8b0 = lVar3;
      if (*pWVar4 == L'\\') {
        local_850 = local_838;
        local_8a8 = -1;
        do {
          local_8a8 = local_8a8 + 1;
        } while (local_850[local_8a8] != L'\0');
        local_870 = local_8a8 * 2 - 2;
        if (0x207 < local_870) {
          __report_rangecheckfailure();
        }
        *(undefined2 *)((longlong)local_838 + local_870) = 0;
      }
      hDevice = CreateFileW(local_838,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (hDevice != (HANDLE)0xffffffffffffffff) {
        BVar1 = DeviceIoControl(hDevice,0x560000,(LPVOID)0x0,0,local_868,0x400,local_890,
                                (LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          CloseHandle(hDevice);
        }
        else {
          CloseHandle(hDevice);
          if (param_1 == *(uint *)(local_868 + 8)) {
            local_848 = local_838;
            local_8a0 = -1;
            lVar3 = local_8a0;
            do {
              local_8a0 = lVar3;
              lVar3 = local_8a0 + 1;
            } while (local_848[lVar3] != L'\0');
            if (local_838[local_8a0] != L'\\') {
              local_840 = local_838;
              local_898 = -1;
              do {
                local_898 = local_898 + 1;
              } while (local_840[local_898] != L'\0');
              local_838[local_898] = L'\\';
            }
            local_8a0 = lVar3;
            uVar2 = FUN_180021590(param_1,local_838,&local_8c0,&local_8bc);
            if ((((uVar2 & 0xfff) == 0) && (local_8c0 == 1)) && (local_8bc == 1)) {
              local_8b8 = 1;
              break;
            }
          }
        }
      }
      BVar1 = FindNextVolumeW(hFindVolume,local_838,0x104);
    } while (BVar1 != 0);
    if (hFindVolume != (HANDLE)0xffffffffffffffff) {
      FindVolumeClose(hFindVolume);
    }
    if (local_8b8 == 0) {
      local_880 = (longlong *)FUN_180007470();
      if (local_880 != (longlong *)0x0) {
        (**(code **)(*local_880 + 0x30))(local_880,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
      }
    }
    else {
      uVar2 = FUN_180010600(local_838,param_2);
      if (((uVar2 & 0xfff) != 0) &&
         (local_878 = (longlong *)FUN_180007470(), local_878 != (longlong *)0x0)) {
        (**(code **)(*local_878 + 0x30))(local_878,1,0x12400,L"Boot:%S %S %d ErrorCode:%08X\n");
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_918);
  return;
}




longlong FUN_1800251b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18000b560(param_1);
  return param_2 * 0x218 + *plVar1;
}




longlong FUN_1800251e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b540(param_1);
  plVar2 = (longlong *)FUN_18000b560(param_1);
  return (*plVar1 - *plVar2) / 0x218;
}




void FUN_180025230(undefined8 param_1,undefined8 param_2)

{
  FUN_180025260(param_1,param_2);
  return;
}




void FUN_180025260(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000b6d0(param_1);
  if (bVar1) {
    uVar2 = FUN_1800012e0(param_2);
    FUN_1800252d0(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800012e0(param_2);
    plVar3 = (longlong *)FUN_18000b540(param_1);
    FUN_180025560(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_1800252d0(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_1800012e0(param_2);
  puVar2 = (undefined8 *)FUN_18000b540(param_1);
  p_Var3 = (_Container_proxy *)FUN_1800012e0(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_18000b540(param_1);
  FUN_18000b540(param_1);
  FUN_18000b5b0();
  FUN_18000b540(param_1);
  plVar5 = (longlong *)FUN_18000b540(param_1);
  *plVar5 = *plVar5 + 0x218;
  return;
}




void FUN_180025390(undefined8 param_1)

{
  FUN_1800253c0(param_1);
  return;
}




void FUN_1800253c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1800025b0(param_1);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  if (*plVar1 != 0) {
    FUN_18000b540(param_1);
    FUN_18000b560(param_1);
    FUN_18000b690(param_1);
    lVar2 = FUN_180025490(param_1);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    uVar4 = FUN_180001f40(param_1);
    FUN_1800254e0(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000b540(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000b860(param_1);
    *puVar3 = 0;
  }
  return;
}




longlong FUN_180025490(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b860(param_1);
  plVar2 = (longlong *)FUN_18000b560(param_1);
  return (*plVar1 - *plVar2) / 0x218;
}




void FUN_1800254e0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x218);
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::construct<struct std::_Container_proxy,struct
   std::_Container_proxy>(class std::allocator<struct std::_Container_proxy> & __ptr64,struct
   std::_Container_proxy * __ptr64 const,struct std::_Container_proxy && __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined1 *)FUN_180001000(0x218,param_2);
  puVar2 = (undefined1 *)FUN_1800012e0(param_3);
  for (lVar3 = 0x218; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




longlong FUN_180025560(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *paVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  IObject *pIVar7;
  _Container_proxy *p_Var8;
  _Container_proxy *p_Var9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_18000b560(param_1);
  lVar2 = (param_2 - *plVar1) / 0x218;
  paVar3 = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
  _Var4 = FUN_1800251e0(param_1);
  _Var5 = FUN_180025a10(param_1);
  if (_Var4 == _Var5) {
    FUN_18000cb40();
  }
  uVar6 = FUN_1800258e0(param_1,_Var4 + 1);
  pIVar7 = (IObject *)allocate(paVar3,uVar6);
  p_Var8 = (_Container_proxy *)FUN_1800012e0(pIVar7 + lVar2 * 0x218);
  p_Var9 = (_Container_proxy *)FUN_1800012e0(param_3);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar3,p_Var8,p_Var9);
  plVar1 = (longlong *)FUN_18000b540(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_18000b540(param_1);
    puVar11 = (undefined8 *)FUN_18000b560(param_1);
    FUN_180025970(param_1,*puVar11,*puVar10,pIVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_18000b560(param_1);
    FUN_1800259d0(param_1,*puVar10,param_2,pIVar7);
    puVar10 = (undefined8 *)FUN_18000b540(param_1);
    FUN_1800259d0(param_1,param_2,*puVar10,pIVar7 + lVar2 * 0x218 + 0x218);
  }
  FUN_1800257d0(param_1,(longlong)pIVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  return lVar2 * 0x218 + *plVar1;
}




void FUN_1800257d0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1800025b0(param_1);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  if (*plVar1 != 0) {
    FUN_18000b540(param_1);
    FUN_18000b560(param_1);
    FUN_18000b690(param_1);
    lVar2 = FUN_180025490(param_1);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    uVar4 = FUN_180001f40(param_1);
    FUN_1800254e0(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_18000b560(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_18000b540(param_1);
  *plVar1 = param_2 + param_3 * 0x218;
  plVar1 = (longlong *)FUN_18000b860(param_1);
  *plVar1 = param_2 + param_4 * 0x218;
  return;
}




ulonglong FUN_1800258e0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180025490(param_1);
  _Var2 = FUN_180025a10(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180025970(undefined8 param_1,undefined8 param_2,undefined8 param_3,IObject *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1800259d0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800259d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,IObject *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001f40(param_1);
  FUN_180025aa0(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_180025a10(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180001f40(param_1);
  local_18 = FUN_180025a90();
  local_10[0] = FUN_180001200();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_180025b80(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




undefined8 FUN_180025a90(void)

{
  return 0x7a44c6afc2dd9c;
}




IObject * FUN_180025aa0(undefined8 param_1,undefined8 param_2,IObject *param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 uVar2;
  IObject *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  IObject *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800012e0(param_1);
  local_10[0] = FUN_1800012e0(param_2);
  pIVar1 = (IObject *)FUN_180025b50((longlong *)&local_20,local_10);
  local_18 = IObject::operator=(local_res18,pIVar1);
  FUN_18000d060(local_28);
  uVar2 = FUN_18000d080(local_20,local_10[0],local_18);
  FUN_18000d0c0(&local_res18,uVar2);
  return local_res18;
}




void FUN_180025b50(longlong *param_1,longlong *param_2)

{
  FUN_180025bd0(param_1,param_2);
  return;
}




longlong FUN_180025b80(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x218;
  if (0x7a44c6afc2dd9c < param_1) {
    local_18 = -1;
  }
  return local_18;
}




longlong FUN_180025bd0(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x218;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180025c00(short *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  WCHAR *pWVar4;
  undefined1 *puVar5;
  undefined1 auStack_4108 [32];
  char *local_40e8;
  undefined4 local_40e0;
  WCHAR *local_40d8;
  short *local_40d0;
  DWORD local_40c8;
  uint local_40b8;
  uint local_40b4;
  uint local_40b0;
  longlong *local_40a8;
  longlong *local_40a0;
  longlong local_4098;
  longlong local_4090;
  undefined8 local_4088;
  CResetPropExchange local_4078 [1584];
  undefined1 local_3a48 [20];
  undefined1 local_3a34 [2028];
  undefined1 local_3248 [36];
  undefined1 local_3224 [2012];
  undefined8 local_2a48;
  undefined1 local_2a40 [2040];
  undefined4 local_2248;
  undefined1 local_2244 [20];
  undefined1 local_2230 [2028];
  undefined1 local_1a44 [32];
  undefined1 local_1a24 [2016];
  undefined4 local_1244;
  undefined1 local_1240 [78];
  undefined1 local_11f2 [1970];
  undefined1 local_a40 [6];
  undefined1 local_a3a [2050];
  WCHAR local_238 [264];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x180025c1b;
  local_4088 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_4108;
  local_40b8 = 0;
  FUN_180003720(local_4078);
  local_40b4 = 0;
  pWVar4 = local_238;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_2248 = 1;
  pwVar3 = L"{default}";
  puVar2 = local_2244;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_2230;
  for (lVar1 = 0x7ec; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  pwVar3 = L"\"Windows Setup\"";
  puVar2 = local_1a44;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_1a24;
  for (lVar1 = 0x7e0; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1244 = 0;
  pwVar3 = L"{7619dcc8-fafe-11d9-b411-000476eba25f}";
  puVar2 = local_1240;
  for (lVar1 = 0x4e; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_11f2;
  for (lVar1 = 0x7b2; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_180048414;
  puVar5 = local_a40;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = local_a3a;
  for (lVar1 = 0x7fa; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  pwVar3 = L"{bootmgr}";
  puVar2 = local_3a48;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_3a34;
  for (lVar1 = 0x7ec; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  pwVar3 = L"nointegritychecks";
  puVar2 = local_3248;
  for (lVar1 = 0x24; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_3224;
  for (lVar1 = 0x7dc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_2a48 = 0x7300650079;
  puVar2 = local_2a40;
  for (lVar1 = 0x7f8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  wsprintfW(local_238,L"%s\\bcdedit.exe");
  local_40b4 = FUN_1800038b0((longlong)local_4078,local_238,param_1,param_3);
  if ((local_40b4 & 0xfff) == 0) {
    for (local_40b8 = 0; local_40b8 < 2; local_40b8 = local_40b8 + 1) {
      FUN_1800046a0((longlong *)local_4078,
                    (longlong)(local_2244 + (ulonglong)local_40b8 * 0x1004 + -4));
    }
    if (((param_3 == 0) &&
        (local_40b4 = FUN_180004b10((longlong *)local_4078,(longlong)local_3a48,'\0'),
        (local_40b4 & 0xfff) != 0)) &&
       (local_40a0 = (longlong *)FUN_180007470(), local_40a0 != (longlong *)0x0)) {
      local_40c8 = GetLastError();
      local_4090 = *local_40a0;
      local_40d8 = local_238;
      local_40e0 = 0x3f;
      local_40e8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\getisofile.cpp";
      local_40d0 = param_1;
      (**(code **)(local_4090 + 0x30))(local_40a0,1,0x12400,L"Boot:%S %d %s %s failed:%08X\n");
    }
  }
  else {
    local_40a8 = (longlong *)FUN_180007470();
    if (local_40a8 != (longlong *)0x0) {
      local_40c8 = GetLastError();
      local_4098 = *local_40a8;
      local_40d8 = local_238;
      local_40e0 = 0x2e;
      local_40e8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\getisofile.cpp";
      local_40d0 = param_1;
      (**(code **)(local_4098 + 0x30))(local_40a8,1,0x12400,L"Boot:%S %d %s %s failed:%08X\n");
    }
  }
  FUN_180003b60((longlong)local_4078);
  local_40b0 = local_40b4;
  FUN_180003800((undefined8 *)local_4078);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_4108);
  return;
}




void FUN_180026000(wchar_t *param_1,undefined8 param_2,LPCWSTR param_3,undefined *param_4,
                  undefined8 param_5)

{
  int iVar1;
  LPCWSTR pWVar2;
  longlong lVar3;
  CHAR *pCVar4;
  undefined1 auStackY_318 [32];
  uint local_2d8;
  uint local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_2c0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_2a0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_280 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_260 [40];
  CHAR local_238 [272];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_2c8 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_318;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2d4 = 0;
  pCVar4 = local_238;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  pCVar4 = local_128;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  basic_string<>(local_260,L"");
  basic_string<>(local_280,L"");
  basic_string<>(local_2a0,L"");
  basic_string<>(local_2c0,L"");
  FUN_180028a30(local_2a0,param_1);
  FUN_180001d50(local_2a0,L"\\EUDCLINUX.KNL");
  FUN_180028a30(local_2c0,param_1);
  FUN_180001d50(local_2c0,L"\\EUDCLINUX.IRD");
  pWVar2 = (LPCWSTR)FUN_180001d20(local_2a0);
  iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_238,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar1 != 0) {
    pWVar2 = (LPCWSTR)FUN_180001d20(local_2c0);
    iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_128,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 != 0) {
      local_2d8 = FUN_1800339c0(param_3,"bzImage");
      if ((int)local_2d8 < 0) {
        local_2d0 = 0xfa1250c;
      }
      else {
        local_2d4 = local_2d4 + local_2d8;
        local_2d8 = FUN_1800339c0(param_3,"initrd.img");
        if ((int)local_2d8 < 0) {
          local_2d0 = 0x1021250c;
        }
        else {
          local_2d4 = local_2d4 + local_2d8;
          local_2d8 = 0;
          iVar1 = FUN_180033330(param_3,"bzImage",local_238,param_4,param_5,local_2d4,&local_2d8);
          if ((iVar1 != 0) ||
             (iVar1 = FUN_180033330(param_3,"initrd.img",local_128,param_4,param_5,local_2d4,
                                    &local_2d8), iVar1 != 0)) {
            local_2d0 = 0x10e1250c;
          }
        }
      }
      goto LAB_1800262ca;
    }
  }
  local_2d0 = 0xf212486;
LAB_1800262ca:
  local_2cc = local_2d0;
  FUN_180001db0(local_2c0);
  FUN_180001db0(local_2a0);
  FUN_180001db0(local_280);
  FUN_180001db0(local_260);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_318);
  return;
}




void FUN_180026320(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,LPCWSTR param_4,
                  undefined *param_5,undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  LPCWSTR pWVar2;
  wchar_t *pwVar3;
  short *psVar4;
  longlong lVar5;
  CHAR *pCVar6;
  undefined1 auStackY_458 [32];
  uint local_418;
  uint local_414;
  uint local_410;
  int local_40c;
  int local_408;
  int local_404;
  int local_400;
  int local_3fc;
  longlong local_3f8;
  uint local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3d0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3b0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_390 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_370 [40];
  CHAR local_348 [272];
  CHAR local_238 [272];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_3d8 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_458;
  local_3f8 = 0;
  local_410 = 0;
  local_418 = 0;
  local_414 = 0;
  basic_string<>(local_370,L"");
  basic_string<>(local_3d0,L"");
  basic_string<>(local_390,L"");
  basic_string<>(local_3b0,L"");
  pCVar6 = local_348;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar6 = '\0';
    pCVar6 = pCVar6 + 1;
  }
  pCVar6 = local_128;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar6 = '\0';
    pCVar6 = pCVar6 + 1;
  }
  pCVar6 = local_238;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar6 = '\0';
    pCVar6 = pCVar6 + 1;
  }
  local_408 = 1;
  local_404 = 1;
  local_400 = 1;
  local_3fc = 1;
  local_40c = 1;
  FUN_180028a30(local_3d0,param_1);
  FUN_180001d50(local_3d0,L"\\BOOT\\FONTS");
  pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
  iVar1 = FUN_18000e5e0(pWVar2);
  if (iVar1 == 0) {
    pwVar3 = (wchar_t *)FUN_180001d20(local_3d0);
    _wmkdir(pwVar3);
    pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
    SetFileAttributesW(pWVar2,6);
  }
  FUN_180028a30(local_3d0,param_2);
  pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
  iVar1 = FUN_18000e5e0(pWVar2);
  if (iVar1 == 0) {
    pwVar3 = (wchar_t *)FUN_180001d20(local_3d0);
    _wmkdir(pwVar3);
    pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
    SetFileAttributesW(pWVar2,6);
  }
  FUN_180028a30(local_3b0,param_2);
  FUN_180001d50(local_3b0,L"\\EASEDCPE.SDI");
  FUN_180028a30(local_390,param_2);
  FUN_180001d50(local_390,L"\\EASEDCPE.WIM");
  pWVar2 = (LPCWSTR)FUN_180001d20(local_3b0);
  iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_238,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar1 != 0) {
    pWVar2 = (LPCWSTR)FUN_180001d20(local_390);
    iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_128,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 != 0) {
      pWVar2 = (LPCWSTR)FUN_180001d20(local_3b0);
      iVar1 = FUN_180028670(pWVar2,param_4,L"BOOT/BOOT.SDI");
      if (iVar1 == 0) {
        local_418 = FUN_1800339c0(param_4,"BOOT/BOOT.SDI");
        if ((int)local_418 < 0) {
          local_410 = 0x1571250c;
          goto LAB_180026de8;
        }
        local_414 = local_414 + local_418;
        local_408 = 0;
      }
      pWVar2 = (LPCWSTR)FUN_180001d20(local_390);
      iVar1 = FUN_180028670(pWVar2,param_4,L"SOURCES/BOOT.WIM");
      if (iVar1 == 0) {
        local_418 = FUN_1800339c0(param_4,"SOURCES/BOOT.WIM");
        if ((int)local_418 < 0) {
          local_410 = 0x1651250c;
          goto LAB_180026de8;
        }
        local_414 = local_414 + local_418;
        local_404 = 0;
      }
      FUN_180028a30(local_3d0,param_1);
      FUN_180001d50(local_3d0,L"\\BOOT\\FONTS\\WGL4_BOOT.TTF");
      pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
      iVar1 = FUN_18000e5e0(pWVar2);
      if (iVar1 == 0) {
        local_418 = FUN_1800339c0(param_4,"BOOT/FONTS/WGL4_BOO.TTF");
        if ((int)local_418 < 0) {
          local_418 = FUN_1800339c0(param_4,"BOOT/FONTS/WGL4_BOOT.TTF");
        }
        if ((int)local_418 < 0) {
          local_40c = 1;
        }
        else {
          local_414 = local_414 + local_418;
          local_40c = 0;
        }
      }
      if ((param_7 != 0) || (param_8 != 0)) {
        FUN_180028a30(local_3d0,param_1);
        if (param_7 == 0) {
          FUN_180001d50(local_3d0,L"\\BOOT\\BCD");
        }
        else {
          FUN_180001d50(local_3d0,L"\\BOOT\\BCD");
        }
        local_418 = FUN_1800339c0(param_4,"BOOT/BCD");
        if ((int)local_418 < 0) {
          local_410 = 0x1991250c;
          goto LAB_180026de8;
        }
        local_414 = local_414 + local_418;
        local_400 = 0;
        FUN_180028a30(local_3d0,param_1);
        if (param_7 == 0) {
          FUN_180001d50(local_3d0,L"\\DCMGR");
        }
        else {
          FUN_180001d50(local_3d0,L"\\BOOTMGR");
        }
        local_418 = FUN_1800339c0(param_4,"BOOTMGR");
        if ((int)local_418 < 0) {
          local_410 = 0x1b01250c;
          goto LAB_180026de8;
        }
        local_414 = local_414 + local_418;
        local_3fc = 0;
      }
      local_418 = 0;
      if (local_408 == 0) {
        iVar1 = FUN_180033330(param_4,"BOOT/BOOT.SDI",local_238,param_5,param_6,local_414,&local_418
                             );
        if (iVar1 != 0) {
          local_410 = 0x1c01250c;
          goto LAB_180026de8;
        }
        local_3f8 = FUN_180035f10(param_4,"BOOT/BOOT.SDI");
        pWVar2 = (LPCWSTR)FUN_180001d20(local_3b0);
        FUN_180028900(pWVar2,local_3f8);
      }
      if (local_404 == 0) {
        iVar1 = FUN_180033330(param_4,"SOURCES/BOOT.WIM",local_128,param_5,param_6,local_414,
                              &local_418);
        if (iVar1 != 0) {
          local_410 = 0x1ce1250c;
          goto LAB_180026de8;
        }
        local_3f8 = FUN_180035f10(param_4,"SOURCES/BOOT.WIM");
        pWVar2 = (LPCWSTR)FUN_180001d20(local_390);
        FUN_180028900(pWVar2,local_3f8);
      }
      if (local_40c == 0) {
        FUN_180028a30(local_3d0,param_1);
        FUN_180001d50(local_3d0,L"\\BOOT\\FONTS\\WGL4_BOOT.TTF");
        pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
        iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_348,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 == 0) {
          local_410 = 0x1de12486;
          local_3e8 = (longlong *)FUN_180007470();
          if (local_3e8 != (longlong *)0x0) {
            (**(code **)(*local_3e8 + 0x30))(local_3e8,1,0x12400,L"Boot:%S %d failed\n");
          }
          goto LAB_180026de8;
        }
        iVar1 = FUN_180033330(param_4,"BOOT/FONTS/WGL4_BOO.TTF",local_348,param_5,param_6,local_414,
                              &local_418);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_180033330(param_4,"BOOT/FONTS/WGL4_BOOT.TTF",local_348,param_5,param_6,
                                  local_414,&local_418), iVar1 != 0)) {
          local_410 = 0x1e91250c;
          goto LAB_180026de8;
        }
      }
      if (local_400 == 0) {
        FUN_180028a30(local_3d0,param_1);
        if (param_7 == 0) {
          FUN_180001d50(local_3d0,L"\\BOOT\\BCD");
        }
        else {
          FUN_180001d50(local_3d0,L"\\BOOT\\BCD");
        }
        pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
        iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_348,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        if ((iVar1 == 0) ||
           (iVar1 = FUN_180033330(param_4,"BOOT/BCD",local_348,param_5,param_6,local_414,&local_418)
           , iVar1 != 0)) {
          local_410 = 0x2001250c;
          goto LAB_180026de8;
        }
        psVar4 = (short *)FUN_180001d20(local_3d0);
        local_410 = FUN_180025c00(psVar4,param_3,param_7);
        if ((local_410 & 0xfff) != 0) goto LAB_180026de8;
      }
      if (local_3fc == 0) {
        FUN_180028a30(local_3d0,param_1);
        if (param_7 == 0) {
          FUN_180001d50(local_3d0,L"\\DCMGR");
        }
        else {
          FUN_180001d50(local_3d0,L"\\BOOTMGR");
        }
        pWVar2 = (LPCWSTR)FUN_180001d20(local_3d0);
        iVar1 = WideCharToMultiByte(0,0,pWVar2,-1,local_348,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        if ((iVar1 == 0) ||
           (iVar1 = FUN_180033330(param_4,"BOOTMGR",local_348,param_5,param_6,local_414,&local_418),
           iVar1 != 0)) {
          local_3e0 = (longlong *)FUN_180007470();
          if (local_3e0 != (longlong *)0x0) {
            (**(code **)(*local_3e0 + 0x30))(local_3e0,1,0x12400,L"Boot:%S %d failed\n");
          }
          local_410 = 0x21d1250c;
          goto LAB_180026de8;
        }
      }
      if (param_5 != (undefined *)0x0) {
        (*(code *)param_5)(param_6,100);
      }
      goto LAB_180026de8;
    }
  }
  local_410 = 0x14d12486;
LAB_180026de8:
  local_3f0 = local_410;
  FUN_180001db0(local_3b0);
  FUN_180001db0(local_390);
  FUN_180001db0(local_3d0);
  FUN_180001db0(local_370);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_458);
  return;
}




void FUN_180026e50(wchar_t *param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4,
                  uint param_5,undefined *param_6,longlong param_7)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  longlong *plVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 auStackY_488 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3c8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3a8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_388 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_368 [32];
  char local_348 [272];
  undefined1 local_238 [272];
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_488;
  basic_string<>(local_3c8,L"");
  basic_string<>(local_3a8,L"");
  basic_string<>(local_368,L"");
  basic_string<>(local_388,L"");
  pcVar8 = local_348;
  for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pcVar8 = '\0';
    pcVar8 = pcVar8 + 1;
  }
  puVar9 = local_238;
  for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_128;
  for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  sVar3 = wcstombs(local_348,param_1,0x104);
  if (sVar3 == 0) {
    plVar4 = (longlong *)FUN_180007470();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
    }
  }
  else {
    iVar1 = FUN_1800353c0(param_4,local_348,param_5,param_6,param_7);
    if (iVar1 == 0) {
      FUN_180028a30(local_3c8,param_1);
      FUN_180001d50(local_3c8,L"\\BootMgr");
      FUN_180028a30(local_3a8,param_1);
      FUN_180001d50(local_3a8,L"\\Ntldr");
      pWVar5 = (LPCWSTR)FUN_180001d20(local_3a8);
      pWVar6 = (LPCWSTR)FUN_180001d20(local_3c8);
      CopyFileW(pWVar6,pWVar5,1);
      pWVar5 = (LPCWSTR)FUN_180001d20(local_3c8);
      pWVar6 = (LPCWSTR)FUN_180001d20(local_3a8);
      CopyFileW(pWVar6,pWVar5,1);
      FUN_180028a30(local_3c8,param_1);
      FUN_180001d50(local_3c8,L"\\BOOT\\EFISYS_N.BIN");
      FUN_180028a30(local_3a8,param_1);
      FUN_180001d50(local_3a8,L"\\BOOT\\EFISYS_NOPROMPT.BIN");
      pWVar5 = (LPCWSTR)FUN_180001d20(local_3c8);
      iVar1 = FUN_18000e5e0(pWVar5);
      if (iVar1 != 0) {
        pWVar5 = (LPCWSTR)FUN_180001d20(local_3a8);
        pWVar6 = (LPCWSTR)FUN_180001d20(local_3c8);
        uVar2 = FUN_180012f80(pWVar6,pWVar5,0);
        if ((uVar2 & 0xfff) != 0) {
          plVar4 = (longlong *)FUN_180007470();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
          }
          goto LAB_1800275a6;
        }
      }
      FUN_180028a30(local_3c8,param_1);
      FUN_180001d50(local_3c8,L"\\BOOT\\FONTS\\WGL4_BOO.TTF");
      FUN_180028a30(local_3a8,param_1);
      FUN_180001d50(local_3a8,L"\\BOOT\\FONTS\\WGL4_BOOT.TTF");
      pWVar5 = (LPCWSTR)FUN_180001d20(local_3c8);
      iVar1 = FUN_18000e5e0(pWVar5);
      if (iVar1 != 0) {
        pWVar5 = (LPCWSTR)FUN_180001d20(local_3a8);
        pWVar6 = (LPCWSTR)FUN_180001d20(local_3c8);
        uVar2 = FUN_180012f80(pWVar6,pWVar5,0);
        if ((uVar2 & 0xfff) != 0) {
          plVar4 = (longlong *)FUN_180007470();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
          }
          goto LAB_1800275a6;
        }
      }
      FUN_180028a30(local_3c8,param_1);
      FUN_180001d50(local_3c8,L"\\EFI\\MICROSOF");
      FUN_180028a30(local_3a8,param_1);
      FUN_180001d50(local_3a8,L"\\EFI\\MICROSOFT");
      pWVar5 = (LPCWSTR)FUN_180001d20(local_3c8);
      iVar1 = FUN_18000e5e0(pWVar5);
      if (iVar1 != 0) {
        pWVar5 = (LPCWSTR)FUN_180001d20(local_3a8);
        pWVar6 = (LPCWSTR)FUN_180001d20(local_3c8);
        uVar2 = FUN_180012f80(pWVar6,pWVar5,1);
        if ((uVar2 & 0xfff) != 0) {
          plVar4 = (longlong *)FUN_180007470();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
          }
          goto LAB_1800275a6;
        }
      }
      FUN_180028a30(local_3c8,param_1);
      FUN_180001d50(local_3c8,L"\\EFI\\MICROSOFT\\BOOT\\FONTS\\WGL4_BOO.TTF");
      FUN_180028a30(local_3a8,param_1);
      FUN_180001d50(local_3a8,L"\\EFI\\MICROSOFT\\BOOT\\FONTS\\WGL4_BOOT.TTF");
      pWVar5 = (LPCWSTR)FUN_180001d20(local_3c8);
      iVar1 = FUN_18000e5e0(pWVar5);
      if (iVar1 != 0) {
        pWVar5 = (LPCWSTR)FUN_180001d20(local_3a8);
        pWVar6 = (LPCWSTR)FUN_180001d20(local_3c8);
        uVar2 = FUN_180012f80(pWVar6,pWVar5,0);
        if ((uVar2 & 0xfff) != 0) {
          plVar4 = (longlong *)FUN_180007470();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
          }
          goto LAB_1800275a6;
        }
      }
      if (param_6 != (undefined *)0x0) {
        (*(code *)param_6)(param_7,100);
      }
    }
    else {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
      }
    }
  }
LAB_1800275a6:
  FUN_180001db0(local_388);
  FUN_180001db0(local_368);
  FUN_180001db0(local_3a8);
  FUN_180001db0(local_3c8);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_488);
  return;
}




void FUN_180027610(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,LPCWSTR param_4,uint param_5
                  ,undefined *param_6,longlong param_7,int param_8)

{
  int iVar1;
  size_t sVar2;
  LPCWSTR pWVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStackY_4a8 [32];
  uint local_468;
  uint local_464;
  uint local_460;
  int local_45c;
  int local_458;
  int local_454;
  longlong local_450;
  uint local_448;
  longlong *local_440;
  longlong *local_438;
  longlong *local_430;
  longlong *local_428;
  longlong *local_420;
  longlong *local_418;
  longlong *local_410;
  longlong *local_408;
  longlong *local_400;
  LPCWSTR local_3f8;
  LPCWSTR local_3f0;
  LPCWSTR local_3e8;
  LPCWSTR local_3e0;
  undefined8 local_3d8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3d0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3b0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_390 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_370 [40];
  char local_348 [272];
  char local_238 [272];
  char local_128 [272];
  ulonglong local_18;
  
  local_3d8 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_4a8;
  local_450 = 0;
  local_468 = 0;
  local_464 = 0;
  local_460 = 0;
  local_458 = 1;
  local_454 = 1;
  local_45c = 1;
  basic_string<>(local_3b0,L"");
  basic_string<>(local_3d0,L"");
  basic_string<>(local_370,L"");
  basic_string<>(local_390,L"");
  pcVar6 = local_348;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar6 = '\0';
    pcVar6 = pcVar6 + 1;
  }
  pcVar6 = local_128;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar6 = '\0';
    pcVar6 = pcVar6 + 1;
  }
  pcVar6 = local_238;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar6 = '\0';
    pcVar6 = pcVar6 + 1;
  }
  if (param_8 == 0) {
    FUN_180028a30(local_3d0,param_1);
    FUN_180001d50(local_3d0,L"\\BOOT\\FONTS");
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3d0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if (iVar1 == 0) {
      pwVar4 = (wchar_t *)FUN_180001d20(local_3d0);
      _wmkdir(pwVar4);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3d0);
      SetFileAttributesW(pWVar3,6);
    }
    FUN_180028a30(local_3d0,param_2);
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3d0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if (iVar1 == 0) {
      pwVar4 = (wchar_t *)FUN_180001d20(local_3d0);
      _wmkdir(pwVar4);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3d0);
      SetFileAttributesW(pWVar3,6);
    }
    FUN_180028a30(local_390,param_2);
    FUN_180001d50(local_390,L"\\EASEDCPE.SDI");
    FUN_180028a30(local_370,param_2);
    FUN_180001d50(local_370,L"\\EASEDCPE.WIM");
    pwVar4 = (wchar_t *)FUN_180001d20(local_390);
    sVar2 = wcstombs(local_238,pwVar4,0x104);
    if (sVar2 == 0) {
      local_410 = (longlong *)FUN_180007470();
      if (local_410 != (longlong *)0x0) {
        (**(code **)(*local_410 + 0x30))(local_410,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_468 = 0x30c12486;
      goto LAB_18002834d;
    }
    pwVar4 = (wchar_t *)FUN_180001d20(local_370);
    sVar2 = wcstombs(local_128,pwVar4,0x104);
    if (sVar2 == 0) {
      local_408 = (longlong *)FUN_180007470();
      if (local_408 != (longlong *)0x0) {
        (**(code **)(*local_408 + 0x30))(local_408,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_468 = 0x31212486;
      goto LAB_18002834d;
    }
    pWVar3 = (LPCWSTR)FUN_180001d20(local_390);
    iVar1 = FUN_180028670(pWVar3,param_4,L"BOOT/BOOT.SDI");
    if (iVar1 == 0) {
      local_464 = FUN_1800339c0(param_4,"BOOT/BOOT.SDI");
      if ((int)local_464 < 0) {
        local_468 = 0x31c1250c;
        goto LAB_18002834d;
      }
      local_460 = local_460 + local_464;
      local_458 = 0;
    }
    pWVar3 = (LPCWSTR)FUN_180001d20(local_370);
    iVar1 = FUN_180028670(pWVar3,param_4,L"SOURCES/BOOT.WIM");
    if (iVar1 == 0) {
      local_464 = FUN_1800339c0(param_4,"SOURCES/BOOT.WIM");
      if ((int)local_464 < 0) {
        local_468 = 0x32a1250c;
        goto LAB_18002834d;
      }
      local_460 = local_460 + local_464;
      local_454 = 0;
    }
    FUN_180028a30(local_3d0,param_1);
    FUN_180001d50(local_3d0,L"\\BOOT\\FONTS\\WGL4_BOOT.TTF");
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3d0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if ((iVar1 == 0) &&
       (local_464 = FUN_1800339c0(param_4,"BOOT/FONTS/WGL4_BOO.TTF"), (int)local_464 < 0)) {
      iVar1 = FUN_1800339c0(param_4,"BOOT/FONTS/WGL4_BOOT.TTF");
      if (iVar1 < 0) {
        local_45c = 1;
      }
      else {
        local_460 = local_460 + iVar1;
        local_45c = 0;
      }
    }
    local_464 = 0;
    if (local_458 == 0) {
      iVar1 = FUN_180033330(param_4,"BOOT/BOOT.SDI",local_238,param_6,param_7,local_460,&local_464);
      if (iVar1 != 0) {
        local_468 = 0x34e1250c;
        goto LAB_18002834d;
      }
      local_450 = FUN_180035f10(param_4,"BOOT/BOOT.SDI");
      pWVar3 = (LPCWSTR)FUN_180001d20(local_390);
      FUN_180028900(pWVar3,local_450);
    }
    if (local_454 == 0) {
      iVar1 = FUN_180033330(param_4,"SOURCES/BOOT.WIM",local_128,param_6,param_7,local_460,
                            &local_464);
      if (iVar1 != 0) {
        local_468 = 0x35c1250c;
        goto LAB_18002834d;
      }
      local_450 = FUN_180035f10(param_4,"SOURCES/BOOT.WIM");
      pWVar3 = (LPCWSTR)FUN_180001d20(local_370);
      FUN_180028900(pWVar3,local_450);
    }
    if (local_45c == 0) {
      FUN_180028a30(local_3d0,param_1);
      FUN_180001d50(local_3d0,L"\\BOOT\\FONTS\\WGL4_BOOT.TTF");
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3d0);
      iVar1 = WideCharToMultiByte(0,0,pWVar3,-1,local_348,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar1 == 0) {
        local_468 = 0x36c12486;
        local_400 = (longlong *)FUN_180007470();
        if (local_400 != (longlong *)0x0) {
          (**(code **)(*local_400 + 0x30))(local_400,1,0x12400,L"Boot:%S %d failed\n");
        }
        goto LAB_18002834d;
      }
      iVar1 = FUN_180033330(param_4,"BOOT/FONTS/WGL4_BOO.TTF",local_348,param_6,param_7,local_460,
                            &local_464);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_180033330(param_4,"BOOT/FONTS/WGL4_BOOT.TTF",local_348,param_6,param_7,
                                local_460,&local_464), iVar1 != 0)) {
        local_468 = 0x3771250c;
        goto LAB_18002834d;
      }
    }
  }
  else {
    sVar2 = wcstombs(local_348,param_1,0x104);
    if (sVar2 == 0) {
      local_440 = (longlong *)FUN_180007470();
      if (local_440 != (longlong *)0x0) {
        (**(code **)(*local_440 + 0x30))(local_440,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_468 = 0x2ad12486;
      goto LAB_18002834d;
    }
    iVar1 = FUN_1800353c0(param_4,local_348,param_5,param_6,param_7);
    if (iVar1 != 0) {
      local_438 = (longlong *)FUN_180007470();
      if (local_438 != (longlong *)0x0) {
        (**(code **)(*local_438 + 0x30))(local_438,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_468 = 0x2b51250c;
      goto LAB_18002834d;
    }
    FUN_180028a30(local_3b0,param_1);
    FUN_180001d50(local_3b0,L"\\BOOT\\EFISYS_N.BIN");
    FUN_180028a30(local_3d0,param_1);
    FUN_180001d50(local_3d0,L"\\BOOT\\EFISYS_NOPROMPT.BIN");
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if (iVar1 != 0) {
      local_3f8 = (LPCWSTR)FUN_180001d20(local_3d0);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
      local_468 = FUN_180012f80(pWVar3,local_3f8,0);
      if ((local_468 & 0xfff) != 0) {
        local_430 = (longlong *)FUN_180007470();
        if (local_430 != (longlong *)0x0) {
          (**(code **)(*local_430 + 0x30))(local_430,1,0x12400,L"Boot:%S %d failed\n");
        }
        goto LAB_18002834d;
      }
    }
    FUN_180028a30(local_3b0,param_1);
    FUN_180001d50(local_3b0,L"\\BOOT\\FONTS\\WGL4_BOO.TTF");
    FUN_180028a30(local_3d0,param_1);
    FUN_180001d50(local_3d0,L"\\BOOT\\FONTS\\WGL4_BOOT.TTF");
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if (iVar1 != 0) {
      local_3f0 = (LPCWSTR)FUN_180001d20(local_3d0);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
      local_468 = FUN_180012f80(pWVar3,local_3f0,0);
      if ((local_468 & 0xfff) != 0) {
        local_428 = (longlong *)FUN_180007470();
        if (local_428 != (longlong *)0x0) {
          (**(code **)(*local_428 + 0x30))(local_428,1,0x12400,L"Boot:%S %d failed\n");
        }
        goto LAB_18002834d;
      }
    }
    FUN_180028a30(local_3b0,param_1);
    FUN_180001d50(local_3b0,L"\\EFI\\MICROSOF");
    FUN_180028a30(local_3d0,param_1);
    FUN_180001d50(local_3d0,L"\\EFI\\MICROSOFT");
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if (iVar1 != 0) {
      local_3e8 = (LPCWSTR)FUN_180001d20(local_3d0);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
      local_468 = FUN_180012f80(pWVar3,local_3e8,1);
      if ((local_468 & 0xfff) != 0) {
        local_420 = (longlong *)FUN_180007470();
        if (local_420 != (longlong *)0x0) {
          (**(code **)(*local_420 + 0x30))(local_420,1,0x12400,L"Boot:%S %d failed\n");
        }
        goto LAB_18002834d;
      }
    }
    FUN_180028a30(local_3b0,param_1);
    FUN_180001d50(local_3b0,L"\\EFI\\MICROSOFT\\BOOT\\FONTS\\WGL4_BOO.TTF");
    FUN_180028a30(local_3d0,param_1);
    FUN_180001d50(local_3d0,L"\\EFI\\MICROSOFT\\BOOT\\FONTS\\WGL4_BOOT.TTF");
    pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
    iVar1 = FUN_18000e5e0(pWVar3);
    if (iVar1 != 0) {
      local_3e0 = (LPCWSTR)FUN_180001d20(local_3d0);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_3b0);
      local_468 = FUN_180012f80(pWVar3,local_3e0,0);
      if ((local_468 & 0xfff) != 0) {
        local_418 = (longlong *)FUN_180007470();
        if (local_418 != (longlong *)0x0) {
          (**(code **)(*local_418 + 0x30))(local_418,1,0x12400,L"Boot:%S %d failed\n");
        }
        goto LAB_18002834d;
      }
    }
  }
  if (param_6 != (undefined *)0x0) {
    (*(code *)param_6)(param_7,100);
  }
LAB_18002834d:
  local_448 = local_468;
  FUN_180001db0(local_390);
  FUN_180001db0(local_370);
  FUN_180001db0(local_3d0);
  FUN_180001db0(local_3b0);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_4a8);
  return;
}




uint FUN_1800283b0(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,LPCWSTR param_4,uint param_5
                  ,undefined *param_6,longlong param_7,int param_8,int param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPCWSTR pWVar4;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar5;
  uint local_28;
  int local_20;
  uint local_1c;
  longlong *local_18;
  longlong *local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  local_20 = 0;
  local_1c = 0;
  uVar3 = 0;
  uVar2 = 0;
  pWVar4 = param_4;
  uVar1 = FUN_180034dd0(param_4,(undefined4 *)0x0,(undefined4 *)0x0);
  if (uVar1 == 1) {
    local_28 = FUN_180026000(param_2,param_3,param_4,param_6,param_7);
  }
  else if ((uVar1 < 2) || (3 < uVar1)) {
    local_28 = 0x3c512403;
  }
  else {
    local_28 = FUN_180016400(&local_20,uVar2,uVar3,pWVar4);
    if ((local_28 & 0xfff) == 0) {
      local_28 = FUN_180016e50(param_4,&local_1c,uVar3,pWVar4);
      if ((local_28 & 0xfff) == 0) {
        if (param_8 == 0) {
          if ((local_20 == 0) || (local_1c == 0)) {
            local_28 = FUN_180026320(param_1,param_2,param_3,param_4,param_6,param_7,0,param_9);
          }
          else {
            local_28 = FUN_180027610(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
          }
        }
        else {
          local_28 = FUN_180026e50(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        }
      }
      else {
        local_10 = (longlong *)FUN_180007470();
        if (local_10 != (longlong *)0x0) {
          (**(code **)(*local_10 + 0x30))
                    (local_10,1,0x12400,L"Boot:%S %d failed\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\getisofile.cpp",CONCAT44(uVar5,0x3b0))
          ;
        }
      }
    }
    else {
      local_18 = (longlong *)FUN_180007470();
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x30))
                  (local_18,1,0x12400,L"Boot:%S %d failed\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\getisofile.cpp",CONCAT44(uVar5,0x3a9));
      }
    }
  }
  return local_28;
}




void FUN_180028670(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  CHAR *pCVar4;
  _FILETIME *p_Var5;
  undefined8 *puVar6;
  undefined1 auStackY_1a8 [32];
  HANDLE local_158;
  undefined8 local_150;
  DWORD local_148;
  DWORD local_144;
  _FILETIME local_140;
  _FILETIME local_138 [2];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_1a8;
  local_144 = 0;
  local_148 = 0;
  local_158 = (HANDLE)0xffffffffffffffff;
  pCVar4 = local_128;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  p_Var5 = &local_140;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var5->dwLowDateTime = 0;
    p_Var5 = (_FILETIME *)((longlong)&p_Var5->dwLowDateTime + 1);
  }
  p_Var5 = local_138;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var5->dwLowDateTime = 0;
    p_Var5 = (_FILETIME *)((longlong)&p_Var5->dwLowDateTime + 1);
  }
  puVar6 = &local_150;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined8 *)((longlong)puVar6 + 1);
  }
  iVar1 = WideCharToMultiByte(0,0,param_3,-1,local_128,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar1 != 0) {
    local_158 = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (local_158 != (HANDLE)0xffffffffffffffff) {
      local_144 = GetFileSize(local_158,(LPDWORD)0x0);
      local_148 = FUN_1800339c0(param_2,local_128);
      if (local_144 == local_148) {
        BVar2 = GetFileTime(local_158,&local_140,(LPFILETIME)0x0,local_138);
        if (BVar2 != 0) {
          lVar3 = FUN_180035f10(param_2,local_128);
          local_150 = lVar3 * 10000000 + 0x19db1ded53e8000;
        }
      }
    }
  }
  if (local_158 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_158);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1a8);
  return;
}




BOOL FUN_180028900(LPCWSTR param_1,longlong param_2)

{
  HANDLE hFile;
  longlong lVar1;
  FILETIME *pFVar2;
  BOOL local_28;
  FILETIME local_10;
  
  pFVar2 = &local_10;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar2->dwLowDateTime = 0;
    pFVar2 = (FILETIME *)((longlong)&pFVar2->dwLowDateTime + 1);
  }
  hFile = CreateFileW(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    local_28 = 0;
  }
  else {
    local_10 = (FILETIME)(param_2 * 10000000 + 0x19db1ded53e8000);
    local_28 = SetFileTime(hFile,&local_10,&local_10,&local_10);
    CloseHandle(hFile);
  }
  return local_28;
}




void FUN_180028a30(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
  return;
}




void FUN_180028a60(wchar_t *param_1,wchar_t param_2)

{
  wcsrchr(param_1,param_2);
  return;
}




/* Library Function - Single Match
    _vsnprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_180001010();
  local_14 = __stdio_common_vsprintf(*puVar1 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




/* Library Function - Single Match
    _vsprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = _vsnprintf_l(_DstBuf,0xffffffffffffffff,_Format,param_3,_ArgList);
  return iVar1;
}




/* Library Function - Single Match
    sprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  iVar1 = _vsprintf_l(_Dest,_Format,(_locale_t)0x0,(va_list)&local_res18);
  return iVar1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180028bb0(LPCWSTR param_1,LPCWSTR param_2,WCHAR *param_3,char *param_4,char *param_5,
                  int param_6)

{
  WCHAR WVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  WCHAR *pWVar7;
  CHAR *pCVar8;
  char *pcVar9;
  short *psVar10;
  undefined1 *puVar11;
  undefined1 auStackY_1088 [32];
  uint local_1048;
  uint local_1044;
  uint local_1040;
  HANDLE local_1038;
  ulonglong local_1028;
  uint local_1020;
  uint local_101c;
  int local_1018;
  char *local_1010;
  short *local_1008;
  DWORD local_1000 [2];
  undefined1 *local_ff8;
  HANDLE local_ff0;
  longlong local_fe8;
  WCHAR *local_fe0;
  longlong local_fd8;
  longlong local_fd0;
  WCHAR *local_fc8;
  longlong local_fc0;
  uint local_fb8;
  longlong *local_fb0;
  longlong *local_fa8;
  WCHAR *local_fa0;
  longlong *local_f98;
  longlong *local_f90;
  longlong *local_f88;
  LPCWSTR local_f80;
  longlong *local_f78;
  longlong *local_f70;
  longlong *local_f68;
  longlong *local_f60;
  longlong *local_f58;
  longlong *local_f48;
  longlong *local_f40;
  longlong *local_f38;
  ulonglong local_f30;
  ulonglong local_f28;
  longlong local_f20;
  char *local_f18;
  longlong local_f10;
  CHAR *local_f08;
  ulonglong local_f00;
  longlong local_ef8;
  longlong local_ef0;
  char *local_ee8;
  char *local_ee0;
  longlong local_ed8;
  char *local_ed0;
  char *local_ec8;
  longlong local_ec0;
  char *local_eb8;
  undefined8 local_eb0;
  WCHAR *local_ea8;
  WCHAR *local_ea0;
  longlong local_e98 [2];
  basic_ostream<char,struct_std::char_traits<char>_> local_e88 [240];
  undefined4 local_d98;
  undefined1 local_d94 [16];
  uint local_d84;
  WCHAR local_d80 [4];
  WCHAR WStack_d78;
  CHAR local_d68;
  char acStack_d67 [269];
  short sStack_c5a;
  WCHAR local_c58 [264];
  char local_a48 [272];
  char local_938 [272];
  char local_828 [2048];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x180028bd0;
  local_eb0 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_1088;
  local_1020 = 0;
  local_1028 = 0;
  FUN_180006570((basic_iostream<char,struct_std::char_traits<char>_> *)local_e98,3,1);
  local_101c = 0;
  local_1000[0] = 0;
  local_1000[1] = 0;
  local_d98 = 0;
  puVar11 = local_d94;
  for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_ff0 = (HANDLE)0xffffffffffffffff;
  local_1038 = (HANDLE)0xffffffffffffffff;
  pwVar6 = L"\\\\.\\X:";
  pWVar7 = local_d80;
  for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(char *)pWVar7 = (char)*pwVar6;
    pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  local_ff8 = (undefined1 *)0x0;
  pWVar7 = local_c58;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  local_1010 = (char *)0x0;
  pcVar9 = local_828;
  for (lVar5 = 0x800; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar9 = '\0';
    pcVar9 = pcVar9 + 1;
  }
  pcVar9 = local_a48;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar9 = '\0';
    pcVar9 = pcVar9 + 1;
  }
  pCVar8 = &local_d68;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar8 = '\0';
    pCVar8 = pCVar8 + 1;
  }
  pcVar9 = local_938;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pcVar9 = '\0';
    pcVar9 = pcVar9 + 1;
  }
  WStack_d78 = *param_3;
  local_101c = FUN_18000eb20(*param_3);
  if ((int)local_101c < 0) {
    local_1048 = 0x6712461;
  }
  else {
    local_1048 = FUN_180010fb0((ulonglong)local_101c,&local_d98);
    if ((local_1048 & 0xfff) == 0) {
      if ((local_d84 == 0) || (local_d84 % 0x200 != 0)) {
        local_d84 = 0x200;
      }
      local_1048 = FUN_180012030(local_d80,&local_1020);
      if ((local_1048 & 0xfff) == 0) {
        local_1048 = FUN_1800125b0(local_d80,&local_1028);
        if ((local_1048 & 0xfff) == 0) {
          local_f28 = (ulonglong)local_d84;
          local_1028 = local_1028 / local_f28;
          local_ea8 = local_c58;
          local_fe0 = local_ea8;
          local_fa0 = param_3;
          do {
            WVar1 = *local_fa0;
            *local_fe0 = WVar1;
            local_fa0 = local_fa0 + 1;
            local_fe0 = local_fe0 + 1;
          } while (WVar1 != L'\0');
          local_1008 = &sStack_c5a;
          do {
            local_1008 = local_1008 + 1;
          } while (*local_1008 != 0);
          pwVar6 = L"\\EUDCBT.IDX";
          psVar10 = local_1008;
          for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
            *(char *)psVar10 = (char)*pwVar6;
            pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
            psVar10 = (short *)((longlong)psVar10 + 1);
          }
          local_1048 = FUN_180013520(local_c58);
          if (((local_1048 & 0xfff) == 0x474) || ((local_1048 & 0xfff) == 0)) {
            DeleteFileW(local_c58);
            local_1038 = CreateFileW(local_c58,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,
                                     (HANDLE)0x0);
            if (local_1038 == (HANDLE)0xffffffffffffffff) {
              local_f98 = (longlong *)FUN_180007470();
              if (local_f98 != (longlong *)0x0) {
                GetLastError();
                local_f20 = *local_f98;
                (**(code **)(local_f20 + 0x30))(local_f98,1,0x12400,L"Boot:%S %d failed:%08X\n");
              }
              local_1048 = 0x9d12505;
            }
            else {
              sprintf(local_828,"%08X%08X%08X",(ulonglong)local_1020,local_1028 >> 0x20);
              local_f18 = local_828;
              local_fd8 = -1;
              do {
                local_fd8 = local_fd8 + 1;
              } while (local_f18[local_fd8] != '\0');
              BVar3 = WriteFile(local_1038,local_828,(DWORD)local_fd8,local_1000 + 1,
                                (LPOVERLAPPED)0x0);
              if (BVar3 == 0) {
                local_f90 = (longlong *)FUN_180007470();
                if (local_f90 != (longlong *)0x0) {
                  GetLastError();
                  local_f10 = *local_f90;
                  (**(code **)(local_f10 + 0x30))(local_f90,1,0x12400,L"Boot:%S %d failed:%08X\n");
                }
                local_1048 = 0xa412507;
              }
              else {
                FlushFileBuffers(local_1038);
                CloseHandle(local_1038);
                local_1038 = (HANDLE)0xffffffffffffffff;
                iVar4 = WideCharToMultiByte(0,0,local_c58,-1,&local_d68,0x104,(LPCSTR)0x0,
                                            (LPBOOL)0x0);
                if (iVar4 == 0) {
                  local_f88 = (longlong *)FUN_180007470();
                  if (local_f88 != (longlong *)0x0) {
                    (**(code **)(*local_f88 + 0x30))(local_f88,1,0x12400,L"Boot:%S %d failed\n");
                  }
                  local_1048 = 0xae12486;
                }
                else {
                  local_1044 = 0;
                  while( true ) {
                    local_f08 = &local_d68;
                    local_fd0 = -1;
                    do {
                      local_fd0 = local_fd0 + 1;
                    } while (local_f08[local_fd0] != '\0');
                    if ((uint)local_fd0 <= local_1044) break;
                    if ((&local_d68)[local_1044] == '\\') {
                      (&local_d68)[local_1044] = '/';
                    }
                    local_1044 = local_1044 + 1;
                  }
                  sprintf(local_a48,"--boot-magic=%s %s",local_828);
                  local_ea0 = local_c58;
                  local_fc8 = local_ea0;
                  local_f80 = param_2;
                  do {
                    WVar1 = *local_f80;
                    *local_fc8 = WVar1;
                    local_f80 = local_f80 + 1;
                    local_fc8 = local_fc8 + 1;
                  } while (WVar1 != L'\0');
                  local_ff8 = (undefined1 *)FUN_180028a60(local_c58,L'\\');
                  if (local_ff8 == (undefined1 *)0x0) {
                    local_f78 = (longlong *)FUN_180007470();
                    if (local_f78 != (longlong *)0x0) {
                      (**(code **)(*local_f78 + 0x30))(local_f78,1,0x12400,L"Boot:%S %d failed\n");
                    }
                    local_1048 = 0xbf12486;
                  }
                  else {
                    local_ff8 = local_ff8 + 2;
                    pwVar6 = L"LINUX.LST";
                    puVar11 = local_ff8;
                    for (lVar5 = 0x14; lVar5 != 0; lVar5 = lVar5 + -1) {
                      *puVar11 = (char)*pwVar6;
                      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
                      puVar11 = puVar11 + 1;
                    }
                    if (param_6 == 0) {
                      local_1048 = FUN_180012030(param_1,&local_1020);
                      if ((local_1048 & 0xfff) != 0) {
                        local_f70 = (longlong *)FUN_180007470();
                        if (local_f70 != (longlong *)0x0) {
                          (**(code **)(*local_f70 + 0x30))
                                    (local_f70,1,0x12400,L"Boot:%S %d failed\n");
                        }
                        goto LAB_180029cbc;
                      }
                      local_1048 = FUN_1800125b0(param_1,&local_1028);
                      if ((local_1048 & 0xfff) != 0) {
                        local_f68 = (longlong *)FUN_180007470();
                        if (local_f68 != (longlong *)0x0) {
                          (**(code **)(*local_f68 + 0x30))
                                    (local_f68,1,0x12400,L"Boot:%S %d failed\n");
                        }
                        goto LAB_180029cbc;
                      }
                      local_f00 = (ulonglong)local_d84;
                      local_1028 = local_1028 / local_f00;
                      sprintf(local_938,"SYSTEMPART=%08X%08X%08X",(ulonglong)local_1020);
                    }
                    local_ff0 = CreateFileW(local_c58,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                            (HANDLE)0x0);
                    if (local_ff0 == (HANDLE)0xffffffffffffffff) {
                      local_f60 = (longlong *)FUN_180007470();
                      if (local_f60 != (longlong *)0x0) {
                        GetLastError();
                        local_ef8 = *local_f60;
                        (**(code **)(local_ef8 + 0x30))
                                  (local_f60,1,0x12400,L"Boot:%S %d failed:%08X\n");
                      }
                      local_1048 = 0xe812504;
                    }
                    else {
                      local_1048 = FUN_180013520(param_2);
                      if (((local_1048 & 0xfff) == 0x474) || ((local_1048 & 0xfff) == 0)) {
                        local_1048 = 0;
                        DeleteFileW(param_2);
                        local_1038 = CreateFileW(param_2,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6
                                                 ,(HANDLE)0x0);
                        if (local_1038 == (HANDLE)0xffffffffffffffff) {
                          local_f58 = (longlong *)FUN_180007470();
                          if (local_f58 != (longlong *)0x0) {
                            GetLastError();
                            local_ef0 = *local_f58;
                            (**(code **)(local_ef0 + 0x30))
                                      (local_f58,1,0x12400,L"Boot:%S %d failed:%08X\n");
                          }
                          local_1048 = 0x10312505;
                        }
                        else {
                          local_1010 = (char *)operator_new(0x400);
                          local_ee8 = local_1010;
                          local_ee0 = local_1010;
                          if (local_1010 == (char *)0x0) {
                            local_f48 = (longlong *)FUN_180007470();
                            if (local_f48 != (longlong *)0x0) {
                              (**(code **)(*local_f48 + 0x30))
                                        (local_f48,1,0x12400,L"Boot:%S %d failed\n");
                            }
                            local_1048 = 0x11412408;
                          }
                          else {
                            BVar3 = ReadFile(local_ff0,local_1010,0x400,local_1000,(LPOVERLAPPED)0x0
                                            );
                            if (BVar3 == 0) {
                              local_f40 = (longlong *)FUN_180007470();
                              if (local_f40 != (longlong *)0x0) {
                                GetLastError();
                                local_ed8 = *local_f40;
                                (**(code **)(local_ed8 + 0x30))
                                          (local_f40,1,0x12400,L"Boot:%S %d failed:%08X\n");
                              }
                              local_1048 = 0x11b12506;
                            }
                            else {
                              local_1044 = 0;
                              std::basic_ostream<char,struct_std::char_traits<char>_>::write
                                        (local_e88,local_1010,(ulonglong)local_1000[0]);
                              while (bVar2 = std::ios_base::eof((ios_base *)
                                                                ((longlong)local_e98 +
                                                                (longlong)*(int *)(local_e98[0] + 4)
                                                                )), !bVar2) {
                                std::basic_istream<char,struct_std::char_traits<char>_>::getline
                                          ((basic_istream<char,struct_std::char_traits<char>_> *)
                                           local_e98,local_828,0x800);
                                local_ed0 = local_828;
                                local_fc0 = -1;
                                do {
                                  local_fc0 = local_fc0 + 1;
                                } while (local_ed0[local_fc0] != '\0');
                                local_1040 = (uint)local_fc0;
                                while ((local_1040 != 0 &&
                                       ((local_1040 = local_1040 - 1, local_828[local_1040] == '\r'
                                        || (local_828[local_1040] == '\n'))))) {
                                  local_f30 = (ulonglong)local_1040;
                                  if (0x7ff < local_f30) {
                                    __report_rangecheckfailure();
                                  }
                                  local_828[local_f30] = '\0';
                                }
                                local_1018 = local_1044;
                                if (local_1044 == 3) {
                                  strcat_s(local_828,0x800," ");
                                  strcat_s(local_828,0x800,param_4);
                                }
                                else if (local_1044 == 4) {
                                  strcat_s(local_828,0x800," ");
                                  strcat_s(local_828,0x800,local_a48);
                                }
                                else if (local_1044 == 5) {
                                  strcat_s(local_828,0x800," ");
                                  strcat_s(local_828,0x800,param_5);
                                  if (param_6 == 0) {
                                    strcat_s(local_828,0x800,local_938);
                                    strcat_s(local_828,0x800,"                                ");
                                  }
                                }
                                strcat_s(local_828,0x800,"\r\n");
                                local_ec8 = local_828;
                                local_fe8 = -1;
                                do {
                                  local_fe8 = local_fe8 + 1;
                                } while (local_ec8[local_fe8] != '\0');
                                BVar3 = WriteFile(local_1038,local_828,(DWORD)local_fe8,
                                                  local_1000 + 1,(LPOVERLAPPED)0x0);
                                if (BVar3 == 0) {
                                  local_f38 = (longlong *)FUN_180007470();
                                  if (local_f38 != (longlong *)0x0) {
                                    GetLastError();
                                    local_ec0 = *local_f38;
                                    (**(code **)(local_ec0 + 0x30))(local_f38,1,0x12400);
                                  }
                                  local_1048 = 0x15612507;
                                  break;
                                }
                                local_1044 = local_1044 + 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_fa8 = (longlong *)FUN_180007470();
          if (local_fa8 != (longlong *)0x0) {
            (**(code **)(*local_fa8 + 0x30))(local_fa8,1,0x12400,L"Boot:%S %d failed\n");
          }
        }
      }
      else {
        local_fb0 = (longlong *)FUN_180007470();
        if (local_fb0 != (longlong *)0x0) {
          (**(code **)(*local_fb0 + 0x30))(local_fb0,1,0x12400,L"Boot:%S %d failed\n");
        }
      }
    }
  }
LAB_180029cbc:
  if (local_ff0 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_ff0);
  }
  if (local_1038 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_1038);
    CloseHandle(local_1038);
  }
  if (local_1010 != (char *)0x0) {
    local_eb8 = local_1010;
    free(local_1010);
  }
  local_fb8 = local_1048;
  FUN_180004090((longlong)local_e98);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_1088);
  return;
}




undefined4 FUN_180029d50(LPCWSTR param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 local_178;
  DWORD local_174;
  uint local_170;
  int local_16c;
  DWORD local_168;
  DWORD local_164;
  HANDLE local_160;
  uint local_158;
  DWORD local_154;
  void *local_150;
  DWORD local_148;
  void *local_140;
  HANDLE local_138;
  DWORD local_130 [2];
  longlong local_128;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [4];
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  void *local_28;
  void *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_b0 = 0;
  puVar4 = local_ac;
  for (lVar3 = 4; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_178 = 0;
  local_160 = (HANDLE)0xffffffffffffffff;
  local_138 = (HANDLE)0xffffffffffffffff;
  local_154 = 0;
  local_174 = 0;
  local_148 = 0;
  local_140 = (void *)0x0;
  local_150 = (void *)0x0;
  local_128 = 0;
  local_158 = 0;
  local_170 = 0;
  local_164 = 0;
  local_130[0] = 0;
  local_16c = 0;
  local_168 = 0;
  local_140 = operator_new(0x400);
  local_a8 = local_140;
  local_a0 = local_140;
  local_150 = operator_new(0x2000);
  local_98 = local_150;
  local_90 = local_150;
  if ((local_140 == (void *)0x0) || (local_150 == (void *)0x0)) {
    local_118 = (longlong *)FUN_180007470();
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 0x30))
                (local_118,1,0x12400,L"Boot:%S %d failed\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x18b);
    }
    local_178 = 0x18c12408;
  }
  else {
    local_138 = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (local_138 == (HANDLE)0xffffffffffffffff) {
      local_110 = (longlong *)FUN_180007470();
      if (local_110 != (longlong *)0x0) {
        DVar1 = GetLastError();
        local_88 = *local_110;
        (**(code **)(local_88 + 0x30))
                  (local_110,1,0x12400,L"Boot:%S %d failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x199,DVar1);
      }
      local_178 = 0x19a12505;
    }
    else {
      local_168 = GetFileSize(local_138,(LPDWORD)0x0);
      if ((local_168 == 0xffffffff) || (0x400 < local_168)) {
        local_178 = 0x1a11240c;
      }
      else {
        BVar2 = ReadFile(local_138,local_140,local_168,&local_164,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          local_108 = (longlong *)FUN_180007470();
          if (local_108 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_80 = *local_108;
            (**(code **)(local_80 + 0x30))
                      (local_108,1,0x12400,L"Boot:%S %d failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1a7,DVar1);
          }
          local_178 = 0x1a812506;
        }
        else if (local_164 == local_168) {
          local_160 = CreateFileW(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
          if (local_160 == (HANDLE)0xffffffffffffffff) {
            local_f8 = (longlong *)FUN_180007470();
            if (local_f8 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_70 = *local_f8;
              (**(code **)(local_70 + 0x30))
                        (local_f8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1bb,DVar1);
            }
            local_178 = 0x1bc12505;
          }
          else {
            for (local_158 = 0; local_158 < 4; local_158 = local_158 + 1) {
              BVar2 = ReadFile(local_160,local_150,0x2000,&local_164,(LPOVERLAPPED)0x0);
              if (BVar2 == 0) {
                local_f0 = (longlong *)FUN_180007470();
                if (local_f0 != (longlong *)0x0) {
                  DVar1 = GetLastError();
                  local_68 = *local_f0;
                  (**(code **)(local_68 + 0x30))
                            (local_f0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                             "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1c5,DVar1)
                  ;
                }
                local_178 = 0x1c612506;
                break;
              }
              if (local_164 != 0x2000) {
                local_e8 = (longlong *)FUN_180007470();
                if (local_e8 != (longlong *)0x0) {
                  DVar1 = GetLastError();
                  local_60 = *local_e8;
                  (**(code **)(local_60 + 0x30))
                            (local_e8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                             "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1cb,DVar1)
                  ;
                }
                local_178 = 0x1cc12506;
                break;
              }
              for (local_170 = 0; local_170 < 0x10; local_170 = local_170 + 1) {
                if (*(int *)((longlong)local_150 + (ulonglong)(local_170 * 0x200)) == 0x8270ea) {
                  local_128 = (longlong)local_150 + (ulonglong)(local_170 * 0x200);
                  local_16c = local_16c + local_170 * 0x200;
                  break;
                }
              }
              if (local_128 != 0) break;
              local_16c = local_16c + 0x2000;
            }
            if (local_128 == 0) {
              local_178 = 0x1e31240c;
            }
            else {
              local_154 = *(int *)(local_128 + 0xc) + -0x8200 + local_16c;
              local_148 = *(int *)(local_128 + 0x6c) + -0x8200 + local_16c;
              if (local_154 == 0) {
                local_178 = 0x1eb1240c;
              }
              else {
                DVar1 = SetFilePointer(local_160,local_154,(PLONG)0x0,0);
                if (local_154 == DVar1) {
                  BVar2 = ReadFile(local_160,&local_174,4,&local_164,(LPOVERLAPPED)0x0);
                  if (BVar2 == 0) {
                    local_d8 = (longlong *)FUN_180007470();
                    if (local_d8 != (longlong *)0x0) {
                      DVar1 = GetLastError();
                      local_50 = *local_d8;
                      (**(code **)(local_50 + 0x30))
                                (local_d8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1f6,
                                 DVar1);
                    }
                    local_178 = 0x1f712506;
                  }
                  else if (local_164 == 4) {
                    local_174 = (local_174 - 0x8200) + local_16c;
                    if (local_174 == 0) {
                      local_178 = 0x2041240c;
                    }
                    else {
                      if (local_174 == local_148) {
                        local_174 = local_148 + 0x10;
                      }
                      DVar1 = SetFilePointer(local_160,local_174,(PLONG)0x0,0);
                      if (local_174 == DVar1) {
                        BVar2 = WriteFile(local_160,local_140,local_168,local_130,(LPOVERLAPPED)0x0)
                        ;
                        if (BVar2 == 0) {
                          local_c0 = (longlong *)FUN_180007470();
                          if (local_c0 != (longlong *)0x0) {
                            DVar1 = GetLastError();
                            local_38 = *local_c0;
                            (**(code **)(local_38 + 0x30))
                                      (local_c0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",
                                       0x214,DVar1);
                          }
                          local_178 = 0x21512507;
                        }
                        else if (local_168 != local_130[0]) {
                          local_b8 = (longlong *)FUN_180007470();
                          if (local_b8 != (longlong *)0x0) {
                            DVar1 = GetLastError();
                            local_30 = *local_b8;
                            (**(code **)(local_30 + 0x30))
                                      (local_b8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",
                                       0x21a,DVar1);
                          }
                          local_178 = 0x21b12507;
                        }
                      }
                      else {
                        local_c8 = (longlong *)FUN_180007470();
                        if (local_c8 != (longlong *)0x0) {
                          DVar1 = GetLastError();
                          local_40 = *local_c8;
                          (**(code **)(local_40 + 0x30))
                                    (local_c8,1,0x12400,L"Boot:%S %d failed:%08X\n",
                                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",
                                     0x20e,DVar1);
                        }
                        local_178 = 0x20f12509;
                      }
                    }
                  }
                  else {
                    local_d0 = (longlong *)FUN_180007470();
                    if (local_d0 != (longlong *)0x0) {
                      DVar1 = GetLastError();
                      local_48 = *local_d0;
                      (**(code **)(local_48 + 0x30))
                                (local_d0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1fc,
                                 DVar1);
                    }
                    local_178 = 0x1fd12506;
                  }
                }
                else {
                  local_e0 = (longlong *)FUN_180007470();
                  if (local_e0 != (longlong *)0x0) {
                    DVar1 = GetLastError();
                    local_58 = *local_e0;
                    (**(code **)(local_58 + 0x30))
                              (local_e0,1,0x12400,L"Boot:%S %d failed:%08X\n",
                               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1f0,
                               DVar1);
                  }
                  local_178 = 0x1f112509;
                }
              }
            }
          }
        }
        else {
          local_100 = (longlong *)FUN_180007470();
          if (local_100 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_78 = *local_100;
            (**(code **)(local_78 + 0x30))
                      (local_100,1,0x12400,L"Boot:%S %d failed:%08X\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x1ad,DVar1);
          }
          local_178 = 0x1ae12506;
        }
      }
    }
  }
  if (local_138 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_138);
  }
  if (local_160 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_160);
    CloseHandle(local_160);
  }
  if (local_150 != (void *)0x0) {
    local_28 = local_150;
    free(local_150);
  }
  if (local_140 != (void *)0x0) {
    local_20 = local_140;
    free(local_140);
  }
  return local_178;
}




void FUN_18002a930(undefined8 param_1)

{
  int iVar1;
  BOOL BVar2;
  LPCWSTR pWVar3;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  DWORD local_a8;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  LPCWSTR local_68;
  longlong local_60;
  undefined8 local_58;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_58 = 0xfffffffffffffffe;
  local_10 = DAT_18005e010 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  basic_string<>((longlong)local_50,param_1);
  pWVar3 = (LPCWSTR)FUN_180001d20(param_1);
  iVar1 = FUN_18000e5e0(pWVar3);
  if (iVar1 == 0) {
    local_88 = (longlong *)FUN_180007470();
    if (local_88 != (longlong *)0x0) {
      local_b0 = 0x240;
      local_b8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
      (**(code **)(*local_88 + 0x30))(local_88,1,0x12400,L"Boot:%S %d failed\n");
    }
    local_98 = 0x24112474;
    FUN_180001db0(local_50);
  }
  else {
    local_94 = FUN_18002ea00(local_50,0x5c,0xffffffffffffffff);
    if (local_94 == -1) {
      local_80 = (longlong *)FUN_180007470();
      if (local_80 != (longlong *)0x0) {
        local_b0 = 0x248;
        local_b8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
        (**(code **)(*local_80 + 0x30))(local_80,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_98 = 0x24912474;
      FUN_180001db0(local_50);
    }
    else {
      local_70 = FUN_180001c30(local_50,(longlong)local_30,0,(longlong)local_94);
      FID_conflict_operator_((longlong)local_50,local_70);
      FUN_180001db0(local_30);
      FUN_180001d50(local_50,L"\\ntldr");
      pWVar3 = (LPCWSTR)FUN_180001d20(local_50);
      DeleteFileW(pWVar3);
      local_68 = (LPCWSTR)FUN_180001d20(local_50);
      pWVar3 = (LPCWSTR)FUN_180001d20(param_1);
      BVar2 = MoveFileW(pWVar3,local_68);
      if (BVar2 == 0) {
        local_78 = (longlong *)FUN_180007470();
        if (local_78 != (longlong *)0x0) {
          local_a8 = GetLastError();
          local_60 = *local_78;
          local_b0 = 0x252;
          local_b8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
          (**(code **)(local_60 + 0x30))(local_78,1,0x12400,L"Boot:%S %d failed:%08X\n");
        }
        local_98 = 0x25312474;
        FUN_180001db0(local_50);
      }
      else {
        FUN_180001db0(local_50);
      }
    }
  }
  local_90 = local_98;
  FUN_180001db0(param_1);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_d8);
  return;
}




void FUN_18002ac00(wchar_t *param_1,LPCWSTR param_2,wchar_t *param_3,LPCWSTR param_4,int param_5,
                  LPCWSTR param_6,LPCWSTR param_7,uint param_8,undefined *param_9,longlong param_10,
                  int param_11,int param_12)

{
  int iVar1;
  LPCWSTR pWVar2;
  wchar_t *_Path;
  LPCWSTR pWVar3;
  longlong *plVar4;
  longlong lVar5;
  CHAR *pCVar6;
  undefined1 auStackY_9f8 [32];
  uint local_9a8;
  undefined1 local_948 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_928 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_908 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_8e8 [32];
  CHAR local_8c8 [272];
  CHAR local_7b8 [1952];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_9f8;
  basic_string<>(local_908,L"");
  basic_string<>(local_928,L"");
  basic_string<>(local_8e8,L"");
  pCVar6 = local_8c8;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar6 = '\0';
    pCVar6 = pCVar6 + 1;
  }
  pCVar6 = local_7b8;
  for (lVar5 = 0x79c; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar6 = '\0';
    pCVar6 = pCVar6 + 1;
  }
  FUN_180028a30(local_928,param_1);
  FUN_180001d50(local_928,L"\\BOOT");
  pWVar2 = (LPCWSTR)FUN_180001d20(local_928);
  iVar1 = FUN_18000e5e0(pWVar2);
  if (iVar1 == 0) {
    _Path = (wchar_t *)FUN_180001d20(local_928);
    _wmkdir(_Path);
    pWVar2 = (LPCWSTR)FUN_180001d20(local_928);
    SetFileAttributesW(pWVar2,6);
  }
  iVar1 = FUN_18000e5e0(param_2);
  if (iVar1 == 0) {
    _wmkdir(param_2);
    SetFileAttributesW(param_2,6);
  }
  if (param_5 == 1) {
    FUN_180028a30(local_928,param_3);
    FUN_180001d50(local_928,L"\\grub4dos\\");
    FUN_180001d50(local_928,L"EUDCLD.LST");
    iVar1 = WideCharToMultiByte(0,0,param_6,-1,local_8c8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((iVar1 == 0) ||
       (iVar1 = WideCharToMultiByte(0,0,param_7,-1,local_7b8,0x79c,(LPCSTR)0x0,(LPBOOL)0x0),
       iVar1 == 0)) {
      local_9a8 = 0x28212486;
      goto LAB_18002b374;
    }
    pWVar2 = (LPCWSTR)FUN_180001d20(local_928);
    local_9a8 = FUN_180028bb0(param_1,pWVar2,param_2,local_8c8,local_7b8,param_11);
    if ((local_9a8 & 0xfff) != 0) goto LAB_18002b374;
    pWVar2 = (LPCWSTR)FUN_180001d20(local_928);
    SetFileAttributesW(pWVar2,0x80);
    FUN_180006350((longlong)local_8e8,local_928);
    FUN_180028a30(local_908,param_3);
    FUN_180001d50(local_908,L"\\");
    FUN_180001d50(local_908,L"EUDCLD.LDR");
    FUN_180028a30(local_928,param_3);
    FUN_180001d50(local_928,L"\\");
    FUN_180001d50(local_928,L"DCLDR");
    pWVar2 = (LPCWSTR)FUN_180001d20(local_908);
    pWVar3 = (LPCWSTR)FUN_180001d20(local_928);
    iVar1 = FUN_18000dec0(pWVar3,pWVar2,(undefined *)0x0,0,0,(uint *)0x0);
    if (iVar1 == 0) {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_9a8 = 0x29e1250c;
      goto LAB_18002b374;
    }
    pWVar2 = (LPCWSTR)FUN_180001d20(local_928);
    SetFileAttributesW(pWVar2,0x80);
    pWVar2 = (LPCWSTR)FUN_180001d20(local_8e8);
    pWVar3 = (LPCWSTR)FUN_180001d20(local_928);
    local_9a8 = FUN_180029d50(pWVar3,pWVar2);
    if ((local_9a8 & 0xfff) != 0) goto LAB_18002b374;
    FUN_180028a30(local_908,param_3);
    FUN_180001d50(local_908,L"\\");
    FUN_180001d50(local_908,L"DCLDR");
    FUN_180028a30(local_928,param_1);
    FUN_180001d50(local_928,L"\\");
    FUN_180001d50(local_928,L"DCLDR");
    pWVar2 = (LPCWSTR)FUN_180001d20(local_908);
    pWVar3 = (LPCWSTR)FUN_180001d20(local_928);
    iVar1 = FUN_18000dec0(pWVar3,pWVar2,(undefined *)0x0,0,0,(uint *)0x0);
    if (iVar1 == 0) {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_9a8 = 0x2b51250c;
      goto LAB_18002b374;
    }
    pWVar2 = (LPCWSTR)FUN_180001d20(local_908);
    DeleteFileW(pWVar2);
    pWVar2 = (LPCWSTR)FUN_180001d20(local_8e8);
    DeleteFileW(pWVar2);
    if (param_11 != 0) {
      lVar5 = basic_string<>((longlong)local_948,local_928);
      local_9a8 = FUN_18002a930(lVar5);
      if ((local_9a8 & 0xfff) != 0) goto LAB_18002b374;
      FUN_180028a30(local_908,param_3);
      FUN_180001d50(local_908,L"\\NTDETECT.COM");
      FUN_180028a30(local_928,param_1);
      FUN_180001d50(local_928,L"\\NTDETECT.COM");
      pWVar2 = (LPCWSTR)FUN_180001d20(local_908);
      pWVar3 = (LPCWSTR)FUN_180001d20(local_928);
      iVar1 = FUN_18000dec0(pWVar3,pWVar2,(undefined *)0x0,0,0,(uint *)0x0);
      if (iVar1 == 0) {
        plVar4 = (longlong *)FUN_180007470();
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d failed\n");
        }
        local_9a8 = 0x2de1250c;
        goto LAB_18002b374;
      }
    }
  }
  local_9a8 = FUN_1800283b0(param_1,param_2,param_3,param_4,param_8,param_9,param_10,param_11,
                            param_12);
LAB_18002b374:
  if (((local_9a8 & 0xfff) != 0) &&
     (plVar4 = (longlong *)FUN_180007470(), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"Boot:%S %d error %s %s\n");
  }
  FUN_180001db0(local_8e8);
  FUN_180001db0(local_928);
  FUN_180001db0(local_908);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_9f8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18002b440(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  LPCWSTR pWVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 *puVar5;
  undefined1 auStack_18f8 [32];
  uint local_18d8;
  undefined4 local_18d4;
  undefined4 local_18d0;
  undefined8 local_18c8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_18c0 [40];
  wchar_t local_1898 [14];
  undefined1 local_187c [492];
  undefined1 local_1690 [28];
  undefined1 local_1674 [492];
  wchar_t local_1488 [12];
  undefined1 local_1470 [496];
  undefined1 local_1280 [30];
  undefined1 local_1262 [490];
  undefined1 local_1078 [30];
  undefined1 local_105a [498];
  wchar_t local_e68 [10];
  undefined1 local_e54 [500];
  undefined1 local_c60 [14];
  undefined1 local_c52 [506];
  undefined1 local_a58 [40];
  undefined1 local_a30 [488];
  wchar_t local_848 [10];
  undefined1 local_834 [500];
  undefined1 local_640 [14];
  undefined1 local_632 [506];
  undefined1 local_438 [34];
  undefined1 local_416 [486];
  undefined1 local_230 [40];
  undefined1 local_208 [480];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x18002b45b;
  local_18c8 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_18f8;
  local_18d8 = 0;
  basic_string<>(local_18c0,L"");
  local_18d4 = 0;
  pwVar3 = L"\\DCLOADLX";
  pwVar4 = local_848;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pwVar4 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  puVar5 = local_834;
  for (lVar2 = 500; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\DCLDR";
  puVar5 = local_640;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_632;
  for (lVar2 = 0x1fa; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\BOOT\\EUDCLD.LST";
  puVar5 = local_438;
  for (lVar2 = 0x22; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_416;
  for (lVar2 = 0x1e6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\BOOT\\EUDCLINUX.DAT";
  puVar5 = local_230;
  for (lVar2 = 0x28; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_208;
  for (lVar2 = 0x1e0; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\EUDCBT.IDX";
  pwVar4 = local_1488;
  for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pwVar4 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  puVar5 = local_1470;
  for (lVar2 = 0x1f0; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\EUDCLINUX.KNL";
  puVar5 = local_1280;
  for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1262;
  for (lVar2 = 0x1ea; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\EUDCLINUX.IRD";
  puVar5 = local_1078;
  for (lVar2 = 0x1e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_105a;
  for (lVar2 = 0x1ea; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\DCLOADPE";
  pwVar4 = local_e68;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pwVar4 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  puVar5 = local_e54;
  for (lVar2 = 500; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\DCMGR";
  puVar5 = local_c60;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_c52;
  for (lVar2 = 0x1fa; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\BOOT\\EUDCWINPE.DAT";
  puVar5 = local_a58;
  for (lVar2 = 0x28; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_a30;
  for (lVar2 = 0x1e0; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\EASEDCPE.SDI";
  pwVar4 = local_1898;
  for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(char *)pwVar4 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  puVar5 = local_187c;
  for (lVar2 = 0x1ec; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pwVar3 = L"\\EASEDCPE.WIM";
  puVar5 = local_1690;
  for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = (char)*pwVar3;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1674;
  for (lVar2 = 0x1ec; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (param_3 == 1) {
    for (local_18d8 = 0; local_18d8 < 4; local_18d8 = local_18d8 + 1) {
      FUN_180028a30(local_18c0,param_1);
      FUN_180001d50(local_18c0,local_848 + (ulonglong)local_18d8 * 0x104);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      SetFileAttributesW(pWVar1,0x80);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      DeleteFileW(pWVar1);
    }
    for (local_18d8 = 0; local_18d8 < 3; local_18d8 = local_18d8 + 1) {
      FUN_180028a30(local_18c0,param_2);
      FUN_180001d50(local_18c0,local_1488 + (ulonglong)local_18d8 * 0x104);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      SetFileAttributesW(pWVar1,0x80);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      DeleteFileW(pWVar1);
    }
  }
  else {
    for (local_18d8 = 0; local_18d8 < 3; local_18d8 = local_18d8 + 1) {
      FUN_180028a30(local_18c0,param_1);
      FUN_180001d50(local_18c0,local_e68 + (ulonglong)local_18d8 * 0x104);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      SetFileAttributesW(pWVar1,0x80);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      DeleteFileW(pWVar1);
    }
    for (local_18d8 = 0; local_18d8 < 2; local_18d8 = local_18d8 + 1) {
      FUN_180028a30(local_18c0,param_2);
      FUN_180001d50(local_18c0,local_1898 + (ulonglong)local_18d8 * 0x104);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      SetFileAttributesW(pWVar1,0x80);
      pWVar1 = (LPCWSTR)FUN_180001d20(local_18c0);
      DeleteFileW(pWVar1);
    }
  }
  local_18d0 = local_18d4;
  FUN_180001db0(local_18c0);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_18f8);
  return;
}




void FUN_18002b920(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  longlong *plVar5;
  HANDLE hObject;
  longlong lVar6;
  _SYSTEMTIME *p_Var7;
  wchar_t *pwVar8;
  WCHAR *pWVar9;
  undefined1 auStackY_4f8 [32];
  uint local_4b0;
  wchar_t *local_4a8;
  longlong local_4a0;
  longlong local_498;
  wchar_t *local_490;
  _SYSTEMTIME local_450;
  wchar_t wStack_43a;
  wchar_t local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_4f8;
  p_Var7 = &local_450;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&p_Var7->wYear = 0;
    p_Var7 = (_SYSTEMTIME *)((longlong)&p_Var7->wYear + 1);
  }
  pwVar8 = local_438;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pwVar8 = 0;
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
  }
  pWVar9 = local_228;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar9 = 0;
    pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
  }
  local_4a8 = local_438;
  local_490 = param_1;
  do {
    wVar1 = *local_490;
    *local_4a8 = wVar1;
    local_490 = local_490 + 1;
    local_4a8 = local_4a8 + 1;
  } while (wVar1 != L'\0');
  local_4a0 = -1;
  lVar6 = local_4a0;
  do {
    local_4a0 = lVar6;
    lVar6 = local_4a0 + 1;
  } while (local_438[local_4a0 + 1] != L'\0');
  if (local_438[local_4a0] == L'\\') {
    local_498 = -1;
    lVar6 = local_498;
    do {
      local_498 = lVar6;
      lVar6 = local_498 + 1;
    } while (local_438[lVar6] != L'\0');
    if (0x207 < lVar6 * 2 - 2U) {
      __report_rangecheckfailure();
    }
    local_438[local_498] = L'\0';
  }
  wsprintfW(local_228,L"%s\\*");
  iVar2 = FUN_18000e5e0(local_228);
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 5) goto LAB_18002bcce;
    if ((DVar3 == 3) || (DVar3 == 2)) {
      _wmkdir(local_438);
      BVar4 = SetFileAttributesW(local_438,6);
      if ((BVar4 == 0) && (plVar5 = (longlong *)FUN_180007470(), plVar5 != (longlong *)0x0)) {
        GetLastError();
        (**(code **)(*plVar5 + 0x30))(plVar5,1,0x12400,L"Boot:%S %S %d warning:%08X\n");
      }
    }
  }
  for (local_4b0 = 0; local_4b0 < 100; local_4b0 = local_4b0 + 1) {
    GetSystemTime(&local_450);
    wsprintfW(local_228,L"%s\\TEST%02d%02d%02d%04d.TMP");
    iVar2 = FUN_18000e5e0(local_228);
    if (iVar2 == 0) break;
  }
  if (local_4b0 < 100) {
    hObject = CreateFileW(local_228,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffffffffffff) {
      GetLastError();
    }
    else {
      CloseHandle(hObject);
      DeleteFileW(local_228);
    }
  }
LAB_18002bcce:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_4f8);
  return;
}




void FUN_18002bcf0(wchar_t *param_1,wchar_t *param_2,undefined8 *param_3,uint *param_4)

{
  wchar_t wVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  wchar_t *pwVar8;
  WCHAR *pWVar9;
  undefined1 auStackY_568 [32];
  uint local_538;
  short *local_518;
  short *local_510;
  short *local_508;
  short *local_500;
  short *local_4f8;
  DWORD local_4f0 [2];
  undefined8 *local_4e8;
  wchar_t *local_4e0;
  longlong local_4d8;
  wchar_t *local_4d0;
  longlong local_4c8;
  wchar_t *local_4c0;
  longlong local_4b8;
  wchar_t *local_4b0;
  wchar_t *local_4a8;
  wchar_t *local_4a0;
  int *local_498;
  undefined8 *local_490;
  int *local_488;
  wchar_t *local_480;
  wchar_t *local_478;
  wchar_t *local_470;
  undefined8 local_468;
  wchar_t *local_460;
  wchar_t *local_458;
  undefined8 local_450;
  wchar_t local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_468 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_568;
  local_538 = 0;
  pwVar8 = local_448;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pwVar8 = 0;
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
  }
  pWVar9 = local_238;
  for (lVar5 = 0x202; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar9 = 0;
    pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
  }
  local_4f0[0] = 0x101;
  BVar3 = GetUserNameW(local_238,local_4f0);
  if (BVar3 != 0) {
    local_4e8 = (undefined8 *)operator_new(0xc98);
    local_490 = local_4e8;
    if (local_4e8 == (undefined8 *)0x0) {
      local_498 = (int *)0x0;
    }
    else {
      *local_4e8 = 3;
      _eh_vector_constructor_iterator_(local_4e8 + 1,0x430,3,FUN_180038790,FUN_180038820);
      local_498 = (int *)(local_4e8 + 1);
    }
    piVar2 = local_498;
    local_488 = local_498;
    if (param_1 != (wchar_t *)0x0) {
      iVar4 = FUN_18002b920(param_1);
      if (iVar4 == 0) {
        local_460 = local_448;
        local_4e0 = local_460;
        local_4b0 = param_1;
        do {
          wVar1 = *local_4b0;
          *local_4e0 = wVar1;
          local_4b0 = local_4b0 + 1;
          local_4e0 = local_4e0 + 1;
        } while (wVar1 != L'\0');
        local_480 = local_448;
        local_4d8 = -1;
        lVar5 = local_4d8;
        do {
          local_4d8 = lVar5;
          lVar5 = local_4d8 + 1;
        } while (local_480[lVar5] != L'\0');
        if (local_448[local_4d8] != L'\\') {
          local_518 = (short *)((longlong)&local_450 + 6);
          do {
            local_518 = local_518 + 1;
          } while (*local_518 != 0);
          puVar7 = &DAT_180042204;
          for (lVar6 = 4; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined1 *)local_518 = *puVar7;
            puVar7 = puVar7 + 1;
            local_518 = (short *)((longlong)local_518 + 1);
          }
        }
        local_538 = 1;
        local_4d8 = lVar5;
        FUN_180038850(piVar2,local_448,1,local_238);
        FUN_180039250(piVar2);
      }
      local_458 = local_448;
      local_4d0 = local_458;
      local_4a8 = param_1;
      do {
        wVar1 = *local_4a8;
        *local_4d0 = wVar1;
        local_4a8 = local_4a8 + 1;
        local_4d0 = local_4d0 + 1;
      } while (wVar1 != L'\0');
      local_478 = local_448;
      local_4c8 = -1;
      lVar5 = local_4c8;
      do {
        local_4c8 = lVar5;
        lVar5 = local_4c8 + 1;
      } while (local_478[lVar5] != L'\0');
      if (local_448[local_4c8] != L'\\') {
        local_510 = (short *)((longlong)&local_450 + 6);
        do {
          local_510 = local_510 + 1;
        } while (*local_510 != 0);
        puVar7 = &DAT_180042294;
        for (lVar6 = 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)local_510 = *puVar7;
          puVar7 = puVar7 + 1;
          local_510 = (short *)((longlong)local_510 + 1);
        }
      }
      local_508 = (short *)((longlong)&local_450 + 6);
      do {
        local_508 = local_508 + 1;
      } while (*local_508 != 0);
      pwVar8 = L"BOOT";
      for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(char *)local_508 = (char)*pwVar8;
        pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
        local_508 = (short *)((longlong)local_508 + 1);
      }
      local_4c8 = lVar5;
      iVar4 = FUN_18002b920(local_448);
      if (iVar4 == 0) {
        local_538 = local_538 | 2;
        FUN_180038850(piVar2 + 0x10c,local_448,1,local_238);
        FUN_180039250(piVar2 + 0x10c);
      }
    }
    if (param_2 != (wchar_t *)0x0) {
      local_450 = local_448;
      local_4c0 = local_450;
      local_4a0 = param_2;
      do {
        wVar1 = *local_4a0;
        *local_4c0 = wVar1;
        local_4a0 = local_4a0 + 1;
        local_4c0 = local_4c0 + 1;
      } while (wVar1 != L'\0');
      local_470 = local_448;
      local_4b8 = -1;
      lVar5 = local_4b8;
      do {
        local_4b8 = lVar5;
        lVar5 = local_4b8 + 1;
      } while (local_470[lVar5] != L'\0');
      if (local_448[local_4b8] != L'\\') {
        local_500 = (short *)((longlong)&local_450 + 6);
        do {
          local_500 = local_500 + 1;
        } while (*local_500 != 0);
        puVar7 = &DAT_1800422ac;
        for (lVar6 = 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          *(undefined1 *)local_500 = *puVar7;
          puVar7 = puVar7 + 1;
          local_500 = (short *)((longlong)local_500 + 1);
        }
      }
      local_4f8 = (short *)((longlong)&local_450 + 6);
      do {
        local_4f8 = local_4f8 + 1;
      } while (*local_4f8 != 0);
      pwVar8 = L"BOOT";
      for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(char *)local_4f8 = (char)*pwVar8;
        pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
        local_4f8 = (short *)((longlong)local_4f8 + 1);
      }
      local_4b8 = lVar5;
      iVar4 = FUN_18002b920(local_448);
      if (iVar4 == 0) {
        local_538 = local_538 | 4;
        FUN_180038850(piVar2 + 0x218,local_448,1,local_238);
        FUN_180039250(piVar2 + 0x218);
      }
    }
    *param_3 = piVar2;
    *param_4 = local_538;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_568);
  return;
}




int * FUN_18002c3a0(int *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    FUN_180038820(param_1);
    if ((param_2 & 1) != 0) {
      free(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,0x430,*(__uint64 *)(param_1 + -2),FUN_180038820);
    if ((param_2 & 1) != 0) {
      free(param_1 + -2);
    }
    param_1 = param_1 + -2;
  }
  return param_1;
}




undefined4 FUN_18002c450(longlong *param_1,uint param_2)

{
  uint local_38;
  undefined4 local_34;
  int *local_28;
  
  local_28 = (int *)0x0;
  local_34 = 0;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_34 = 0x3f612409;
  }
  else {
    local_28 = (int *)*param_1;
    for (local_38 = 0; local_38 < 3; local_38 = local_38 + 1) {
      if ((param_2 & 1 << ((byte)local_38 & 0x1f)) != 0) {
        FUN_180039840(local_28 + (ulonglong)local_38 * 0x10c);
        FUN_180038a10(local_28 + (ulonglong)local_38 * 0x10c);
      }
    }
  }
  if (local_28 != (int *)0x0) {
    FUN_18002c3a0(local_28,3);
  }
  return local_34;
}




void FUN_18002c570(int param_1,ushort param_2,wchar_t *param_3,LPCWSTR param_4,LPCWSTR param_5,
                  LPCWSTR param_6,uint param_7,undefined *param_8,longlong param_9,int param_10,
                  int param_11)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  short *psVar6;
  longlong lVar7;
  undefined1 *puVar8;
  WCHAR *pWVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  LPCWSTR pWVar12;
  undefined1 auStackY_858 [32];
  uint local_7f8;
  longlong *local_7e8;
  int local_7dc;
  uint local_7d8;
  undefined4 local_7d4;
  int local_7d0;
  uint local_7cc;
  uint local_7c8;
  int local_7c4;
  int local_7c0;
  uint local_7bc;
  ulonglong local_7b8;
  wchar_t *local_7b0;
  ulonglong local_7a8;
  uint local_7a0;
  uint local_79c;
  longlong *local_798;
  longlong *local_790;
  longlong *local_788;
  wchar_t *local_780;
  longlong *local_770;
  longlong *local_768;
  undefined8 *local_760;
  longlong *local_758;
  undefined8 *local_750;
  longlong *local_748;
  longlong local_740;
  LPCWSTR local_738;
  LPCWSTR local_730;
  longlong local_728;
  undefined8 *local_720;
  longlong *local_718;
  longlong *local_710;
  undefined8 *local_708;
  longlong *local_700;
  longlong *local_6f8;
  short *local_6f0;
  longlong *local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  wchar_t *local_6d0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_6c8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_6a8 [32];
  wchar_t local_688 [4];
  WCHAR local_680 [20];
  wchar_t local_658 [8];
  undefined1 local_648 [512];
  WCHAR local_448 [264];
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_6d8 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_858;
  local_7dc = 0;
  local_7d8 = 0;
  local_7c0 = 0;
  local_7c8 = 0;
  local_7bc = 0;
  local_740 = 0;
  local_7e8 = (longlong *)0x0;
  pwVar5 = local_238;
  for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pwVar5 = 0;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
  }
  pWVar12 = param_4;
  basic_string<>(local_6a8,L"");
  basic_string<>(local_6c8,L"");
  pwVar5 = L"\\\\.\\%X:";
  pwVar10 = local_658;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(char *)pwVar10 = (char)*pwVar5;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
  }
  puVar8 = local_648;
  for (lVar7 = 0x1f8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pWVar9 = local_448;
  for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pWVar9 = 0;
    pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
  }
  pwVar5 = L"\\\\.\\HDBOOTDOSDEVICE";
  pwVar10 = local_688;
  for (lVar7 = 0x28; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(char *)pwVar10 = (char)*pwVar5;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
  }
  local_7a0 = 0x208;
  local_7d0 = 0;
  if (((((-1 < param_1) && (0x40 < param_2)) && (param_2 < 0x5b)) &&
      ((param_3 != (wchar_t *)0x0 && (param_4 != (LPCWSTR)0x0)))) && (param_5 != (LPCWSTR)0x0)) {
    local_738 = param_5;
    local_7a8 = 0xffffffffffffffff;
    do {
      local_7a8 = local_7a8 + 1;
    } while (param_5[local_7a8] != L'\0');
    if ((local_7a8 < 0x105) && (param_6 != (LPCWSTR)0x0)) {
      local_730 = param_6;
      local_7b8 = 0xffffffffffffffff;
      do {
        local_7b8 = local_7b8 + 1;
      } while (param_6[local_7b8] != L'\0');
      if (local_7b8 < 0x739) {
        FUN_18002ea90(local_6c8,param_2);
        FUN_180001d50(local_6c8,L":");
        uVar2 = FUN_180034dd0(param_4,(undefined4 *)0x0,(undefined4 *)0x0);
        if (uVar2 == 0) {
          local_7f8 = 0x44612403;
          goto LAB_18002ced6;
        }
        if (param_10 == 0) {
          iVar3 = FUN_18000f4f0(local_238,&local_7a0);
          if (iVar3 == 0) {
            local_790 = (longlong *)FUN_180007470();
            if (local_790 != (longlong *)0x0) {
              (**(code **)(*local_790 + 0x30))(local_790,1,0x12400,L"Boot:%S %d failed\n");
            }
            local_7f8 = 0x45012500;
            goto LAB_18002ced6;
          }
          BVar4 = DefineDosDeviceW(1,local_680,local_238);
          if (BVar4 == 0) {
            local_788 = (longlong *)FUN_180007470();
            if (local_788 != (longlong *)0x0) {
              GetLastError();
              local_728 = *local_788;
              (**(code **)(local_728 + 0x30))(local_788,1,0x12400,L"Boot:%S %d failed:%08X\n");
            }
            local_7f8 = 0x45812500;
            goto LAB_18002ced6;
          }
          local_780 = local_688;
          local_6d0 = local_658;
          local_7b0 = local_6d0;
          do {
            wVar1 = *local_780;
            *local_7b0 = wVar1;
            local_780 = local_780 + 1;
            local_7b0 = local_7b0 + 1;
          } while (wVar1 != L'\0');
          wsprintfW(local_448,L"%C:\\BOOT");
          local_7c0 = 1;
          pwVar5 = (wchar_t *)FUN_180001d20(local_6c8);
          pWVar12 = (LPCWSTR)&local_7bc;
          plVar11 = &local_740;
          FUN_18002bcf0(local_658,pwVar5,plVar11,(uint *)pWVar12);
        }
        else {
          wsprintfW(local_658,L"\\\\.\\%C:");
          plVar11 = (longlong *)(ulonglong)param_2;
          pwVar5 = L"%C:\\BOOT";
          wsprintfW(local_448,L"%C:\\BOOT");
        }
        if (uVar2 == 1) {
          local_750 = (undefined8 *)operator_new(0x1f28);
          local_708 = local_750;
          if (local_750 == (undefined8 *)0x0) {
            local_748 = (longlong *)0x0;
          }
          else {
            local_748 = FUN_18001f0c0(local_750);
            local_700 = local_748;
          }
          local_6f8 = local_748;
          local_7e8 = local_748;
        }
        else if ((1 < uVar2) && (uVar2 < 4)) {
          local_760 = (undefined8 *)operator_new(0x1f28);
          local_720 = local_760;
          if (local_760 == (undefined8 *)0x0) {
            local_758 = (longlong *)0x0;
          }
          else {
            local_758 = FUN_1800202d0(local_760);
            local_718 = local_758;
          }
          local_710 = local_758;
          local_7e8 = local_758;
        }
        local_7f8 = FUN_180016400(&local_7dc,pwVar5,plVar11,pWVar12);
        if ((local_7f8 & 0xfff) == 0) {
          local_7f8 = FUN_180016e50(param_4,&local_7d8,plVar11,pWVar12);
          if ((local_7f8 & 0xfff) == 0) {
            FUN_180028a30(local_6a8,local_658);
            if ((local_7dc == 0) || (local_7d8 == 0)) {
              local_7d4 = 0;
            }
            else {
              local_7d4 = 1;
            }
            local_6f0 = (short *)FUN_180001d20(local_6c8);
            psVar6 = (short *)FUN_180001d20(local_6a8);
            local_7f8 = FUN_180019b80(local_7e8,psVar6,local_6f0,param_3,param_5,param_10,local_7d4)
            ;
            if ((local_7f8 & 0xfff) == 0) {
              if ((uVar2 == 2) || (uVar2 == 3)) {
                local_7f8 = FUN_18001ae70((longlong)local_7e8,&local_7d0);
                if ((local_7f8 & 0xfff) != 0) goto LAB_18002ced6;
                local_7cc = (uint)(local_7d0 == 1);
                local_7c8 = local_7cc;
              }
              local_7f8 = FUN_18002ac00(local_658,local_448,param_3,param_4,uVar2,param_5,param_6,
                                        param_7,param_8,param_9,param_10,local_7c8);
              if ((local_7f8 & 0xfff) == 0) {
                local_7c4 = param_11;
                if (param_11 == 1) {
                  local_7f8 = (**(code **)(*local_7e8 + 8))(local_7e8,1);
                }
                else if (param_11 == 2) {
                  local_7f8 = (**(code **)(*local_7e8 + 8))(local_7e8,0);
                }
              }
            }
          }
          else {
            local_770 = (longlong *)FUN_180007470();
            if (local_770 != (longlong *)0x0) {
              (**(code **)(*local_770 + 0x30))(local_770,1,0x12400,L"Boot:%S %d failed\n");
            }
          }
        }
        goto LAB_18002ced6;
      }
    }
  }
  local_798 = (longlong *)FUN_180007470();
  if (local_798 != (longlong *)0x0) {
    (**(code **)(*local_798 + 0x30))(local_798,1,0x12400,L"Boot:%S %d failed\n");
  }
  local_7f8 = 0x43c12409;
LAB_18002ced6:
  if (local_7e8 != (longlong *)0x0) {
    FUN_18001a1c0((longlong)local_7e8);
    local_6e8 = local_7e8;
    local_768 = local_7e8;
    if (local_7e8 == (longlong *)0x0) {
      local_6e0 = 0;
    }
    else {
      local_6e0 = (**(code **)*local_7e8)(local_7e8,1);
    }
  }
  if (local_7c0 == 1) {
    FUN_18002c450(&local_740,local_7bc);
    DefineDosDeviceW(2,local_680,(LPCWSTR)0x0);
  }
  local_79c = local_7f8;
  FUN_180001db0(local_6c8);
  FUN_180001db0(local_6a8);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_858);
  return;
}




void FUN_18002cfd0(undefined8 param_1,ushort param_2,LPCWSTR param_3,LPCWSTR param_4,short *param_5,
                  int param_6,int param_7)

{
  wchar_t wVar1;
  int iVar2;
  BOOL BVar3;
  wchar_t *pwVar4;
  short *psVar5;
  longlong lVar6;
  undefined1 *puVar7;
  WCHAR *pWVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  LPCWSTR pWVar11;
  undefined1 auStackY_808 [32];
  uint local_7c8;
  longlong *local_7c0;
  uint local_7b4;
  int local_7a8;
  uint local_7a4;
  undefined4 local_7a0;
  int local_79c;
  uint local_798 [2];
  wchar_t *local_790;
  uint local_788;
  uint local_784;
  longlong *local_780;
  longlong *local_778;
  wchar_t *local_770;
  longlong *local_760;
  longlong *local_758;
  undefined8 *local_750;
  longlong *local_748;
  undefined8 *local_740;
  longlong *local_738;
  longlong local_730;
  longlong local_728;
  undefined8 *local_720;
  longlong *local_718;
  longlong *local_710;
  undefined8 *local_708;
  longlong *local_700;
  longlong *local_6f8;
  short *local_6f0;
  longlong *local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  wchar_t *local_6d0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_6c8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_6a8 [32];
  wchar_t local_688 [4];
  WCHAR local_680 [20];
  wchar_t local_658 [4];
  WCHAR local_650 [4];
  undefined1 local_648 [512];
  WCHAR local_448 [264];
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_6d8 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_808;
  local_7a8 = 0;
  local_7a4 = 0;
  local_79c = 0;
  local_798[0] = 0;
  local_730 = 0;
  local_7c0 = (longlong *)0x0;
  pwVar4 = local_238;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pwVar4 = 0;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  pWVar11 = param_4;
  basic_string<>(local_6a8,L"");
  basic_string<>(local_6c8,L"");
  pwVar4 = L"\\\\.\\%X:";
  pwVar9 = local_658;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)pwVar9 = (char)*pwVar4;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
    pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
  }
  puVar7 = local_648;
  for (lVar6 = 0x1f8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  pWVar8 = local_448;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar8 = 0;
    pWVar8 = (WCHAR *)((longlong)pWVar8 + 1);
  }
  pwVar4 = L"\\\\.\\HDBOOTDOSDEVICE";
  pwVar9 = local_688;
  for (lVar6 = 0x28; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)pwVar9 = (char)*pwVar4;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
    pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
  }
  local_7b4 = 0;
  local_788 = 0x208;
  if ((param_2 < 0x41) || (0x5a < param_2)) {
    local_7c8 = 0x50e12409;
  }
  else {
    FUN_18002ea90(local_6c8,param_2);
    FUN_180001d50(local_6c8,L":");
    local_7b4 = FUN_180034dd0(param_4,(undefined4 *)0x0,(undefined4 *)0x0);
    if (local_7b4 == 0) {
      local_7c8 = 0x51812403;
    }
    else {
      if (param_6 == 0) {
        iVar2 = FUN_18000f4f0(local_238,&local_788);
        if (iVar2 == 0) {
          local_780 = (longlong *)FUN_180007470();
          if (local_780 != (longlong *)0x0) {
            (**(code **)(*local_780 + 0x30))(local_780,1,0x12400,L"Boot:%S %d failed\n");
          }
          local_7c8 = 0x52212500;
          goto LAB_18002d6c1;
        }
        BVar3 = DefineDosDeviceW(1,local_680,local_238);
        if (BVar3 == 0) {
          local_778 = (longlong *)FUN_180007470();
          if (local_778 != (longlong *)0x0) {
            GetLastError();
            local_728 = *local_778;
            (**(code **)(local_728 + 0x30))(local_778,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          local_7c8 = 0x52a12500;
          goto LAB_18002d6c1;
        }
        local_770 = local_688;
        local_6d0 = local_658;
        local_790 = local_6d0;
        do {
          wVar1 = *local_770;
          *local_790 = wVar1;
          local_770 = local_770 + 1;
          local_790 = local_790 + 1;
        } while (wVar1 != L'\0');
        wsprintfW(local_448,L"%C:\\BOOT");
        local_79c = 1;
        pwVar4 = (wchar_t *)FUN_180001d20(local_6c8);
        pWVar11 = (LPCWSTR)local_798;
        plVar10 = &local_730;
        FUN_18002bcf0(local_658,pwVar4,plVar10,(uint *)pWVar11);
      }
      else {
        wsprintfW(local_658,L"\\\\.\\%C:");
        plVar10 = (longlong *)(ulonglong)param_2;
        pwVar4 = L"%C:\\BOOT";
        wsprintfW(local_448,L"%C:\\BOOT");
      }
      if (local_7b4 == 1) {
        local_740 = (undefined8 *)operator_new(0x1f28);
        local_708 = local_740;
        if (local_740 == (undefined8 *)0x0) {
          local_738 = (longlong *)0x0;
        }
        else {
          local_738 = FUN_18001f0c0(local_740);
          local_700 = local_738;
        }
        local_6f8 = local_738;
        local_7c0 = local_738;
      }
      else if ((1 < local_7b4) && (local_7b4 < 4)) {
        local_750 = (undefined8 *)operator_new(0x1f28);
        local_720 = local_750;
        if (local_750 == (undefined8 *)0x0) {
          local_748 = (longlong *)0x0;
        }
        else {
          local_748 = FUN_1800202d0(local_750);
          local_718 = local_748;
        }
        local_710 = local_748;
        local_7c0 = local_748;
      }
      local_7c8 = FUN_180016400(&local_7a8,pwVar4,plVar10,pWVar11);
      if ((local_7c8 & 0xfff) == 0) {
        local_7c8 = FUN_180016e50(param_4,&local_7a4,plVar10,pWVar11);
        if ((local_7c8 & 0xfff) == 0) {
          FUN_180028a30(local_6a8,local_658);
          if ((local_7a8 == 0) || (local_7a4 == 0)) {
            local_7a0 = 0;
          }
          else {
            local_7a0 = 1;
          }
          local_6f0 = (short *)FUN_180001d20(local_6c8);
          psVar5 = (short *)FUN_180001d20(local_6a8);
          local_7c8 = FUN_180019b80(local_7c0,psVar5,local_6f0,param_3,param_5,param_6,local_7a0);
          if ((local_7c8 & 0xfff) == 0) {
            if (param_7 == 0) {
              (**(code **)(*local_7c0 + 0x10))(local_7c0,1);
              (**(code **)(*local_7c0 + 0x10))(local_7c0,0);
            }
            else if (param_7 == 1) {
              (**(code **)(*local_7c0 + 0x10))(local_7c0,1);
            }
            else if (param_7 == 2) {
              (**(code **)(*local_7c0 + 0x10))(local_7c0,0);
            }
          }
        }
        else {
          local_760 = (longlong *)FUN_180007470();
          if (local_760 != (longlong *)0x0) {
            (**(code **)(*local_760 + 0x30))(local_760,1,0x12400,L"Boot:%S %d failed\n");
          }
        }
      }
    }
  }
LAB_18002d6c1:
  if (local_7c0 != (longlong *)0x0) {
    FUN_18001a1c0((longlong)local_7c0);
    local_6e8 = local_7c0;
    local_758 = local_7c0;
    if (local_7c0 == (longlong *)0x0) {
      local_6e0 = 0;
    }
    else {
      local_6e0 = (**(code **)*local_7c0)(local_7c0,1);
    }
  }
  if (((local_7c8 & 0xfff) == 0) && (param_7 == 0)) {
    FUN_18002b440(local_658,local_448,local_7b4);
  }
  if (local_79c == 1) {
    FUN_18002c450(&local_730,local_798[0]);
    DefineDosDeviceW(2,local_650,(LPCWSTR)0x0);
  }
  local_784 = local_7c8;
  FUN_180001db0(local_6c8);
  FUN_180001db0(local_6a8);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_808);
  return;
}




void FUN_18002d7e0(uint param_1,LPCWSTR param_2)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_288 [32];
  char *local_268;
  char *local_260;
  undefined4 local_258;
  uint local_250;
  uint local_248;
  int local_244;
  longlong *local_240;
  longlong *local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_288;
  local_244 = 0;
  local_248 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  if ((int)param_1 < 0) {
    local_248 = 0x5a112461;
  }
  else {
    local_240 = (longlong *)FUN_180007470();
    if (local_240 != (longlong *)0x0) {
      local_258 = 0x5a5;
      local_260 = "HardDiskPreDiskInstallCheck";
      local_268 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
      local_250 = param_1;
      (**(code **)(*local_240 + 0x30))(local_240,1,0x12400,L"Boot:%S %S %d nDiskIndex:%d\n");
    }
    FUN_180016000(param_1);
    wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
    iVar1 = FUN_18000e940(local_228);
    if (iVar1 == 0xf) {
      local_238 = (longlong *)FUN_180007470();
      if (local_238 != (longlong *)0x0) {
        local_260 = (char *)CONCAT44(local_260._4_4_,0x5ac);
        local_268 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
        (**(code **)(*local_238 + 0x30))(local_238,1,0x12400,L"Boot:%S %d failed\n");
      }
      local_248 = 0x5ad127ce;
    }
    else {
      iVar1 = FUN_180034dd0(param_2,(undefined4 *)0x0,(undefined4 *)0x0);
      if (((iVar1 == 1) && (local_248 = FUN_180011430(param_1,&local_244), (local_248 & 0xfff) == 0)
          ) && (local_244 != 0)) {
        local_248 = 0x5bb127c0;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_288);
  return;
}




void FUN_18002d9b0(void)

{
  int iVar1;
  BOOL BVar2;
  LPCWSTR pWVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_318 [32];
  char *local_2f8;
  undefined4 local_2f0;
  DWORD local_2e8;
  uint local_2d8;
  int local_2d4;
  int local_2d0;
  uint local_2cc [3];
  longlong *local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined8 local_290;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_288 [32];
  wchar_t local_268 [4];
  WCHAR local_260 [20];
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_290 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_318;
  local_2d4 = 0;
  local_2d0 = 0;
  basic_string<>(local_288,L"");
  local_2cc[0] = 0;
  local_2a0 = 0;
  local_2b0 = (ulonglong)local_2b0._4_4_ << 0x20;
  puVar6 = (undefined1 *)((longlong)&local_2b0 + 4);
  for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_2d8 = 0;
  pwVar5 = local_238;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pwVar5 = 0;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
  }
  local_2cc[1] = 0x208;
  pwVar5 = L"\\\\.\\HDBOOTDOSDEVICE";
  pwVar7 = local_268;
  for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(char *)pwVar7 = (char)*pwVar5;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
  }
  iVar1 = FUN_18000f4f0(local_238,local_2cc + 1);
  if (iVar1 == 0) {
    local_2c0 = (longlong *)FUN_180007470();
    if (local_2c0 != (longlong *)0x0) {
      local_2f0 = 0x5d6;
      local_2f8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
      (**(code **)(*local_2c0 + 0x30))(local_2c0,1,0x12400,L"Boot:%S %d failed\n");
    }
    local_2d8 = 0x5d712500;
  }
  else {
    BVar2 = DefineDosDeviceW(1,local_260,local_238);
    if (BVar2 == 0) {
      local_2b8 = (longlong *)FUN_180007470();
      if (local_2b8 != (longlong *)0x0) {
        local_2e8 = GetLastError();
        local_298 = *local_2b8;
        local_2f0 = 0x5de;
        local_2f8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
        (**(code **)(local_298 + 0x30))(local_2b8,1,0x12400,L"Boot:%S %d failed:%08X\n");
      }
      local_2d8 = 0x5df12500;
    }
    else {
      local_2d0 = 1;
      FUN_18002bcf0(local_268,(wchar_t *)0x0,&local_2a0,local_2cc);
      FUN_180028a30(local_288,local_268);
      FUN_180001d50(local_288,L"\\");
      local_2b0 = 0x100000;
      pWVar3 = (LPCWSTR)FUN_180001d20(local_288);
      local_2d8 = FUN_180010e60(pWVar3,local_2b0,&local_2d4);
      if (((local_2d8 & 0xfff) == 0) && (local_2d4 != 0)) {
        local_2a8 = (longlong *)FUN_180007470();
        if (local_2a8 != (longlong *)0x0) {
          local_2f0 = 0x5f2;
          local_2f8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
          (**(code **)(*local_2a8 + 0x30))(local_2a8,1,0x12400,L"Boot:%S %d failed\n");
        }
        local_2d8 = 0x5f31240b;
      }
    }
  }
  if (local_2d0 == 1) {
    FUN_18002c450(&local_2a0,local_2cc[0]);
    DefineDosDeviceW(2,local_260,(LPCWSTR)0x0);
  }
  local_2cc[2] = local_2d8;
  FUN_180001db0(local_288);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_318);
  return;
}




void FUN_18002dcf0(ushort param_1,LPCWSTR param_2)

{
  int iVar1;
  WCHAR *pWVar2;
  LPCWSTR pWVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_2f8 [32];
  char *local_2d8;
  char *local_2d0;
  undefined8 local_2c8;
  LPCWSTR local_2c0;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  int local_2a8;
  int local_2a4;
  uint local_2a0;
  uint local_29c;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  longlong *local_278;
  longlong local_270;
  longlong local_268;
  undefined8 local_260;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_258 [32];
  wchar_t local_238;
  undefined6 uStack_236;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_260 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_2f8;
  local_2a4 = 0;
  local_2b4 = 0;
  basic_string<>(local_258,L"");
  local_2a8 = 0;
  local_2a0 = 0;
  local_270 = 0;
  local_2b0 = 0;
  local_280 = 0;
  puVar5 = &uStack_27c;
  for (lVar4 = 4; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((longlong)puVar5 + 1);
  }
  local_2b8 = 0;
  pWVar2 = local_228;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  _local_238 = CONCAT62(0x5c003a,param_1);
  FUN_18002bcf0((wchar_t *)0x0,&local_238,&local_270,&local_2a0);
  local_2b4 = FUN_18000eb20(param_1);
  if ((int)local_2b4 < 0) {
    local_2b8 = 0x61812461;
    goto LAB_18002e222;
  }
  local_298 = (longlong *)FUN_180007470();
  if (local_298 != (longlong *)0x0) {
    local_2c0 = (LPCWSTR)CONCAT44(local_2c0._4_4_,local_2b4);
    local_2c8 = CONCAT44(local_2c8._4_4_,0x61b);
    local_2d0 = "HardDiskPreVolInstallCheckBootVol";
    local_2d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
    (**(code **)(*local_298 + 0x30))(local_298,1,0x12400,L"Boot:%S %S %d nDiskIndex:%d\n");
  }
  wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d");
  iVar1 = FUN_18000e940(local_228);
  if (iVar1 == 0xf) {
    local_290 = (longlong *)FUN_180007470();
    if (local_290 != (longlong *)0x0) {
      local_2d0 = (char *)CONCAT44(local_2d0._4_4_,0x621);
      local_2d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
      (**(code **)(*local_290 + 0x30))(local_290,1,0x12400,L"Boot:%S %d failed\n");
    }
    local_2b8 = 0x622127ce;
    goto LAB_18002e222;
  }
  local_2b8 = FUN_180011430(local_2b4,&local_2b0);
  if ((local_2b8 & 0xfff) != 0) goto LAB_18002e222;
  local_2ac = FUN_180034dd0(param_2,(undefined4 *)0x0,(undefined4 *)0x0);
  if (local_2ac == 1) {
    if (local_2b0 == 0) {
      FUN_180028a30(local_258,L"\\\\.\\");
      FUN_18002ea60(local_258,param_1);
      FUN_180001d50(local_258,L":");
      pWVar2 = (WCHAR *)FUN_180001d20(local_258);
      local_2b8 = FUN_1800119e0(local_2b4,pWVar2);
      if ((local_2b8 & 0xfff) == 0) {
        FUN_18002ea90(local_258,param_1);
        FUN_180001d50(local_258,L":\\");
      }
    }
    else {
      local_2b8 = 0x633127c0;
    }
  }
  else if ((local_2ac < 2) || (3 < local_2ac)) {
    local_2b8 = 0x66812403;
  }
  else if ((local_2b0 == 2) || (local_2b0 == 3)) {
    local_2b8 = FUN_180013790(param_1,&local_2b0);
    if ((local_2b8 & 0xfff) == 0) {
      if (local_2b0 != 1) goto LAB_18002e076;
      local_2b8 = FUN_180013e60(param_1,&local_2a8);
      if ((local_2b8 & 0xfff) == 0) {
        if (local_2a8 == 0) goto LAB_18002e076;
        local_2b8 = 0x65c127fd;
      }
    }
  }
  else {
LAB_18002e076:
    FUN_18002ea90(local_258,param_1);
    FUN_180001d50(local_258,L":\\");
  }
  if ((local_2b8 & 0xfff) == 0) {
    lVar4 = FUN_180001d20(local_258);
    iVar1 = FUN_180011d10(lVar4,param_2,(longlong *)&local_280);
    if (iVar1 == 0) {
      local_288 = (longlong *)FUN_180007470();
      if (local_288 != (longlong *)0x0) {
        local_2c8 = FUN_180001d20(local_258);
        local_268 = *local_288;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,0x675);
        local_2d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
        local_2c0 = param_2;
        (**(code **)(local_268 + 0x30))(local_288,1,0x12400,L"Boot:%S %d failed:%s %s\n");
      }
      local_2b8 = 0x676127ca;
    }
    else {
      pWVar3 = (LPCWSTR)FUN_180001d20(local_258);
      local_2b8 = FUN_180010e60(pWVar3,CONCAT44(uStack_27c,local_280),&local_2a4);
      if (((local_2b8 & 0xfff) == 0) && (local_2a4 != 0)) {
        local_278 = (longlong *)FUN_180007470();
        if (local_278 != (longlong *)0x0) {
          local_2d0 = (char *)CONCAT44(local_2d0._4_4_,0x682);
          local_2d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp";
          (**(code **)(*local_278 + 0x30))(local_278,1,0x12400,L"Boot:%S %d failed\n");
        }
        local_2b8 = 0x6831240b;
      }
    }
  }
LAB_18002e222:
  FUN_18002c450(&local_270,local_2a0);
  local_29c = local_2b8;
  FUN_180001db0(local_258);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2f8);
  return;
}




uint FUN_18002e270(ushort param_1,LPCWSTR param_2)

{
  uint local_18;
  
  if ((param_1 < 0x41) || (0x5a < param_1)) {
    local_18 = 0x69d12460;
  }
  else if (param_2 == (LPCWSTR)0x0) {
    local_18 = 0x6a312409;
  }
  else {
    local_18 = FUN_18002dcf0(param_1,param_2);
    if ((local_18 & 0xfff) == 0) {
      local_18 = FUN_18002d9b0();
    }
  }
  return local_18;
}




void FUN_18002e300(undefined8 param_1,ushort param_2,short *param_3,LPCWSTR param_4,short *param_5)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  short *psVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined1 auStackY_5e8 [32];
  uint local_5a8;
  longlong *local_5a0;
  int local_590;
  uint local_58c;
  undefined4 local_588;
  int local_584;
  uint local_580 [2];
  wchar_t *local_578;
  uint local_570;
  uint local_56c;
  longlong *local_568;
  longlong *local_560;
  wchar_t *local_558;
  longlong *local_548;
  longlong *local_540;
  undefined8 *local_538;
  longlong *local_530;
  undefined8 *local_528;
  longlong *local_520;
  longlong local_518;
  longlong local_510;
  undefined8 *local_508;
  longlong *local_500;
  longlong *local_4f8;
  undefined8 *local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  short *local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  wchar_t *local_4b8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_4b0 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_490 [32];
  wchar_t local_470 [4];
  WCHAR local_468 [16];
  wchar_t local_448 [4];
  WCHAR local_440 [4];
  undefined1 local_438 [512];
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_4c0 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_5e8;
  local_590 = 0;
  local_58c = 0;
  local_584 = 0;
  local_580[0] = 0;
  local_518 = 0;
  local_5a0 = (longlong *)0x0;
  pwVar8 = local_238;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pwVar8 = 0;
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
  }
  basic_string<>(local_490,L"");
  basic_string<>(local_4b0,L"");
  local_570 = 0x208;
  pwVar8 = L"\\\\.\\%X:";
  pwVar10 = local_448;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)pwVar10 = (char)*pwVar8;
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
  }
  puVar9 = local_438;
  for (lVar6 = 0x1f8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  pwVar8 = L"\\\\.\\HDBOOTDOSDEVICE";
  pwVar10 = local_470;
  for (lVar6 = 0x28; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(char *)pwVar10 = (char)*pwVar8;
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
    pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
  }
  if ((param_2 < 0x41) || (0x5a < param_2)) {
    local_5a8 = 0x6db12409;
  }
  else {
    uVar2 = FUN_180034dd0(param_4,(undefined4 *)0x0,(undefined4 *)0x0);
    if (uVar2 == 0) {
      local_5a8 = 0x6e212403;
    }
    else {
      iVar3 = FUN_18000f4f0(local_238,&local_570);
      if (iVar3 == 0) {
        local_568 = (longlong *)FUN_180007470();
        if (local_568 != (longlong *)0x0) {
          (**(code **)(*local_568 + 0x30))(local_568,1,0x12400,L"Boot:%S %d failed\n");
        }
        local_5a8 = 0x6ea12500;
      }
      else {
        BVar4 = DefineDosDeviceW(1,local_468,local_238);
        if (BVar4 == 0) {
          local_560 = (longlong *)FUN_180007470();
          if (local_560 != (longlong *)0x0) {
            GetLastError();
            local_510 = *local_560;
            (**(code **)(local_510 + 0x30))(local_560,1,0x12400,L"Boot:%S %d failed:%08X\n");
          }
          local_5a8 = 0x6f212500;
        }
        else {
          local_558 = local_470;
          local_4b8 = local_448;
          local_578 = local_4b8;
          do {
            wVar1 = *local_558;
            *local_578 = wVar1;
            local_558 = local_558 + 1;
            local_578 = local_578 + 1;
          } while (wVar1 != L'\0');
          local_584 = 1;
          puVar12 = local_580;
          plVar11 = &local_518;
          uVar7 = 0;
          FUN_18002bcf0(local_448,(wchar_t *)0x0,plVar11,puVar12);
          if (uVar2 == 1) {
            local_528 = (undefined8 *)operator_new(0x1f28);
            local_4f0 = local_528;
            if (local_528 == (undefined8 *)0x0) {
              local_520 = (longlong *)0x0;
            }
            else {
              local_520 = FUN_18001f0c0(local_528);
              local_4e8 = local_520;
            }
            local_4e0 = local_520;
            local_5a0 = local_520;
          }
          else if ((1 < uVar2) && (uVar2 < 4)) {
            local_538 = (undefined8 *)operator_new(0x1f28);
            local_508 = local_538;
            if (local_538 == (undefined8 *)0x0) {
              local_530 = (longlong *)0x0;
            }
            else {
              local_530 = FUN_1800202d0(local_538);
              local_500 = local_530;
            }
            local_4f8 = local_530;
            local_5a0 = local_530;
          }
          local_5a8 = FUN_180016400(&local_590,uVar7,plVar11,puVar12);
          if ((local_5a8 & 0xfff) == 0) {
            local_5a8 = FUN_180016e50(param_4,&local_58c,plVar11,puVar12);
            if ((local_5a8 & 0xfff) == 0) {
              FUN_180028a30(local_490,local_448);
              FUN_18002ea90(local_4b0,param_2);
              FUN_180001d50(local_4b0,L":");
              if ((local_590 == 0) || (local_58c == 0)) {
                local_588 = 0;
              }
              else {
                local_588 = 1;
              }
              local_4d8 = (short *)FUN_180001d20(local_4b0);
              psVar5 = (short *)FUN_180001d20(local_490);
              local_5a8 = FUN_180019b80(local_5a0,psVar5,local_4d8,param_3,param_5,0,local_588);
              if ((local_5a8 & 0xfff) == 0) {
                local_5a8 = (**(code **)(*local_5a0 + 0x18))(local_5a0);
              }
            }
            else {
              local_548 = (longlong *)FUN_180007470();
              if (local_548 != (longlong *)0x0) {
                (**(code **)(*local_548 + 0x30))(local_548,1,0x12400,L"Boot:%S %d failed\n");
              }
            }
          }
        }
      }
    }
  }
  if (local_5a0 != (longlong *)0x0) {
    FUN_18001a1c0((longlong)local_5a0);
    local_4d0 = local_5a0;
    local_540 = local_5a0;
    if (local_5a0 == (longlong *)0x0) {
      local_4c8 = 0;
    }
    else {
      local_4c8 = (**(code **)*local_5a0)(local_5a0,1);
    }
  }
  if (local_584 == 1) {
    FUN_18002c450(&local_518,local_580[0]);
    DefineDosDeviceW(2,local_440,(LPCWSTR)0x0);
  }
  local_56c = local_5a8;
  FUN_180001db0(local_4b0);
  FUN_180001db0(local_490);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_5e8);
  return;
}




void FUN_18002ea00(undefined8 param_1,short param_2,__uint64 param_3)

{
  undefined8 *puVar1;
  short *psVar2;
  
  puVar1 = (undefined8 *)FUN_180001f40(param_1);
  psVar2 = (short *)Myptr(puVar1);
  FUN_18002ed70(psVar2,puVar1[2],param_3,param_2);
  return;
}




undefined8 FUN_18002ea60(undefined8 param_1,undefined2 param_2)

{
  FID_conflict_push_back(param_1,param_2);
  return param_1;
}




undefined8 FUN_18002ea90(undefined8 param_1,undefined2 param_2)

{
  undefined2 local_res10 [12];
  undefined2 local_28 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_res10[0] = param_2;
  local_20 = (undefined8 *)FUN_180001f40(param_1);
  local_20[2] = 1;
  local_18 = Myptr(local_20);
  assign((undefined2 *)local_18,local_res10);
  local_28[0] = 0;
  assign((undefined2 *)((longlong)local_18 + 2),local_28);
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::operator=(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > && __ptr64) __ptr64
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::operator=(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &&
   __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong FID_conflict_operator_(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = FUN_1800012e0(param_2);
  if (param_1 != lVar1) {
    FID_conflict__Tidy_deallocate(param_1);
    uVar2 = FUN_180001f40(param_2);
    Move_alloc(param_1,uVar2);
    puVar3 = local_18;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar2 = FUN_1800012e0(param_2);
    FID_conflict__Assign_rv_contents(param_1,uVar2);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_Move_alloc(class std::allocator<unsigned short> & __ptr64)
   __ptr64
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_Move_alloc(class std::allocator<wchar_t> & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void Move_alloc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001f40(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::push_back(unsigned short) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::push_back(wchar_t) __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict_push_back(undefined8 param_1,undefined2 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined2 local_res10 [12];
  undefined1 local_28 [2];
  undefined2 local_26 [3];
  undefined8 *local_20;
  ulonglong local_18;
  undefined8 *local_10;
  
  local_res10[0] = param_2;
  local_20 = (undefined8 *)FUN_180001f40(param_1);
  local_18 = local_20[2];
  if (local_18 < (ulonglong)local_20[3]) {
    local_20[2] = local_18 + 1;
    local_10 = Myptr(local_20);
    assign((undefined2 *)((longlong)local_10 + local_18 * 2),local_res10);
    local_26[0] = 0;
    assign((undefined2 *)((longlong)local_10 + local_18 * 2 + 2),local_26);
  }
  else {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _Reallocate_grow_by<>(param_1,1,local_28[0],local_res10[0]);
  }
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl <lambda_25953b27f3c43b57ba59f021c7f225c5>::operator()(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64,wchar_t)const __ptr64
    public: void __cdecl <lambda_3fdb14453883e86a37ebade6a7a0ebb0>::operator()(unsigned short *
   __ptr64 const,unsigned short const * __ptr64 const,unsigned __int64,unsigned short)const __ptr64
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  undefined2 local_18 [12];
  
  copy(param_2,param_3,param_4);
  assign((undefined2 *)(param_2 + param_4 * 2),(undefined2 *)&stack0x00000028);
  local_18[0] = 0;
  assign((undefined2 *)(param_2 + param_4 * 2 + 2),local_18);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Assign_rv_contents(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64,struct
   std::integral_constant<bool,1>) __ptr64
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Assign_rv_contents(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > && __ptr64,struct std::integral_constant<bool,1>) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Assign_rv_contents(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > && __ptr64,struct
   std::integral_constant<bool,1>) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void FID_conflict__Assign_rv_contents(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_1800012e0(param_2);
  FUN_180007160(param_1,uVar1);
  return;
}




longlong FUN_18002ed70(short *param_1,longlong param_2,__uint64 param_3,short param_4)

{
  bool bVar1;
  __uint64 *p_Var2;
  longlong lVar3;
  __uint64 local_res18;
  short local_res20 [4];
  short *local_18;
  __uint64 local_10 [2];
  
  if (param_2 == 0) {
LAB_18002ee09:
    lVar3 = -1;
  }
  else {
    local_10[0] = param_2 - 1;
    local_res18 = param_3;
    local_res20[0] = param_4;
    p_Var2 = std::_Min_value<unsigned___int64>(&local_res18,local_10);
    local_18 = param_1 + *p_Var2;
    while (bVar1 = eq_int_type(local_18,local_res20), !bVar1) {
      if (local_18 == param_1) goto LAB_18002ee09;
      local_18 = local_18 + -1;
    }
    lVar3 = (longlong)local_18 - (longlong)param_1 >> 1;
  }
  return lVar3;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> & __ptr64,class std::allocator<unsigned short> & __ptr64)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64)
   
   Library: Visual Studio 2017 Release */

void _Pocma<>(undefined8 param_1,undefined8 param_2)

{
  _Pocma<>(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
   <lambda_25953b27f3c43b57ba59f021c7f225c5>,wchar_t>(unsigned __int64,class
   <lambda_25953b27f3c43b57ba59f021c7f225c5>,wchar_t) __ptr64
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Reallocate_grow_by<class <lambda_3fdb14453883e86a37ebade6a7a0ebb0>,unsigned short>(unsigned
   __int64,class <lambda_3fdb14453883e86a37ebade6a7a0ebb0>,unsigned short) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8
_Reallocate_grow_by<>(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined2 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  undefined2 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180001f40(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_180003130();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180001f40(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_180001210();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800012e0(local_48);
  if (local_28 < 8) {
    FID_conflict_operator__(local_res18,local_18,(undefined1 *)puVar2,lVar1);
    uVar5 = FUN_1800012e0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800012e0(local_20);
    FID_conflict_operator__(local_res18,local_18,puVar4,lVar1);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static bool __cdecl std::_WChar_traits<unsigned short>::eq_int_type(unsigned short const
   & __ptr64,unsigned short const & __ptr64)
    public: static bool __cdecl std::_WChar_traits<wchar_t>::eq_int_type(unsigned short const &
   __ptr64,unsigned short const & __ptr64)
    public: static bool __cdecl std::char_traits<unsigned short>::eq_int_type(unsigned short const &
   __ptr64,unsigned short const & __ptr64)
    public: static bool __cdecl std::char_traits<wchar_t>::eq_int_type(unsigned short const &
   __ptr64,unsigned short const & __ptr64)
   
   Library: Visual Studio */

bool eq_int_type(short *param_1,short *param_2)

{
  return *param_1 == *param_2;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> & __ptr64,class
   std::allocator<char> & __ptr64,struct std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> & __ptr64,class std::allocator<unsigned short> & __ptr64,struct
   std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &
   __ptr64,class std::allocator<wchar_t> & __ptr64,struct std::integral_constant<bool,1>)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void _Pocma<>(undefined8 param_1,undefined8 param_2)

{
  FUN_1800012e0(param_2);
  return;
}




undefined4 * FUN_18002f090(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  return param_1;
}




void FUN_18002f0e0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_18002f780(param_1);
  }
  return;
}




undefined4 FUN_18002f110(longlong param_1)

{
  DWORD DVar1;
  HANDLE hObject;
  longlong *plVar2;
  undefined4 local_28;
  
  local_28 = 0;
  hObject = CreateFileW((LPCWSTR)(param_1 + 4),0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,
                        (HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      DVar1 = GetLastError();
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"Boot:%S %S %d CreateFile:%s failed:%08X\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp","CIniEdit::CreateIniFile",
                 0x33,param_1 + 4,DVar1);
    }
    local_28 = 0x3412504;
  }
  if (hObject != (HANDLE)0xffffffffffffffff) {
    CloseHandle(hObject);
  }
  return local_28;
}




void FUN_18002f230(undefined4 *param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  short *psVar6;
  undefined1 auStack_328 [32];
  char *local_308;
  char *local_300;
  undefined4 local_2f8;
  undefined4 *local_2f0;
  DWORD local_2e8;
  uint local_2d8;
  WCHAR local_2d4;
  WCHAR *local_2d0;
  undefined4 local_2c8;
  LPCWSTR local_2c0;
  longlong *local_2b8;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined4 *local_290;
  undefined4 *local_288;
  longlong local_280;
  undefined4 *local_278;
  undefined4 *local_270;
  undefined4 *local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  WCHAR *local_248;
  short local_238 [264];
  ulonglong local_28;
  
  local_250 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_328;
  local_2c8 = 0;
  local_2d8 = 0;
  psVar6 = local_238;
  for (lVar4 = 0x202; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)psVar6 = 0;
    psVar6 = (short *)((longlong)psVar6 + 1);
  }
  if (param_2 == (LPCWSTR)0x0) {
    local_2d8 = 0x4b12409;
    goto LAB_18002f757;
  }
  local_248 = (WCHAR *)(param_1 + 1);
  local_2d0 = local_248;
  local_2c0 = param_2;
  do {
    local_2d4 = *local_2c0;
    *local_2d0 = local_2d4;
    local_2c0 = local_2c0 + 1;
    local_2d0 = local_2d0 + 1;
  } while (local_2d4 != L'\0');
  iVar1 = FUN_18000e5e0(param_2);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      local_2b8 = (longlong *)FUN_180007470();
      if (local_2b8 != (longlong *)0x0) {
        local_2e8 = GetLastError();
        local_2f0 = param_1 + 1;
        local_280 = *local_2b8;
        local_2f8 = 0x60;
        local_300 = "CIniEdit::Init";
        local_308 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp";
        (**(code **)(local_280 + 0x30))
                  (local_2b8,1,0x12400,L"Boot:%S %S %d BootIsFileExist:%s failed:%08X\n");
      }
      local_2d8 = 0x6112404;
      goto LAB_18002f757;
    }
    local_2d8 = FUN_18002f110((longlong)param_1);
    if ((local_2d8 & 0xfff) != 0) goto LAB_18002f757;
  }
  local_2c8 = 0x101;
  pwVar5 = L"Everyone";
  psVar6 = local_238;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(char *)psVar6 = (char)*pwVar5;
    pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    psVar6 = (short *)((longlong)psVar6 + 1);
  }
  local_290 = (undefined4 *)operator_new(0x430);
  local_278 = local_290;
  if (local_290 == (undefined4 *)0x0) {
    local_288 = (undefined4 *)0x0;
  }
  else {
    local_288 = FUN_180038790(local_290);
    local_270 = local_288;
  }
  local_268 = local_288;
  *(undefined4 **)(param_1 + 0x86) = local_288;
  if (*(longlong *)(param_1 + 0x86) == 0) {
    local_2a8 = (longlong *)FUN_180007470();
    if (local_2a8 != (longlong *)0x0) {
      local_300 = (char *)CONCAT44(local_300._4_4_,0x7e);
      local_308 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp";
      (**(code **)(*local_2a8 + 0x30))(local_2a8,1,0x12400,L"Boot:%S %d failed\n");
    }
    local_2d8 = 0x7f1240a;
  }
  else {
    FUN_180038850(*(undefined4 **)(param_1 + 0x86),(short *)(param_1 + 1),1,local_238);
    FUN_180039250(*(int **)(param_1 + 0x86));
    DVar2 = GetFileAttributesW((LPCWSTR)(param_1 + 1));
    param_1[0x83] = DVar2;
    if (param_1[0x83] == -1) {
      local_2a0 = (longlong *)FUN_180007470();
      if (local_2a0 != (longlong *)0x0) {
        local_2e8 = GetLastError();
        local_2f0 = param_1 + 1;
        local_260 = *local_2a0;
        local_2f8 = 0x8a;
        local_300 = "CIniEdit::Init";
        local_308 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp";
        (**(code **)(local_260 + 0x30))
                  (local_2a0,1,0x12400,L"Boot:%S %S %d GetFileAttributes:%s failed:%08X\n");
      }
      local_2d8 = 0x8b12500;
    }
    else {
      if ((param_1[0x83] & 1) != 0) {
        BVar3 = SetFileAttributesW((LPCWSTR)(param_1 + 1),param_1[0x83] & 0xfffffffe);
        if (BVar3 == 0) {
          local_298 = (longlong *)FUN_180007470();
          if (local_298 != (longlong *)0x0) {
            local_2e8 = GetLastError();
            local_2f0 = param_1 + 1;
            local_258 = *local_298;
            local_2f8 = 0x94;
            local_300 = "CIniEdit::Init";
            local_308 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp";
            (**(code **)(local_258 + 0x30))
                      (local_298,1,0x12400,L"Boot:%S %S %d SetFileAttributes:%s failed:%08X\n");
          }
          local_2d8 = 0x9512500;
          goto LAB_18002f757;
        }
        param_1[0x84] = 1;
      }
      *param_1 = 1;
    }
  }
LAB_18002f757:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_328);
  return;
}




undefined4 FUN_18002f780(int *param_1)

{
  if (*param_1 != 0) {
    if (param_1[0x84] != 0) {
      SetFileAttributesW((LPCWSTR)(param_1 + 1),param_1[0x83]);
      param_1[0x84] = 0;
      param_1[0x83] = 0;
    }
    if (*(longlong *)(param_1 + 0x86) != 0) {
      FUN_180038a10(*(int **)(param_1 + 0x86));
      if (*(int **)(param_1 + 0x86) != (int *)0x0) {
        FUN_18002f880(*(int **)(param_1 + 0x86),1);
      }
      param_1[0x86] = 0;
      param_1[0x87] = 0;
    }
    *param_1 = 0;
  }
  return 0;
}




int * FUN_18002f880(int *param_1,uint param_2)

{
  FUN_180038820(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4
FUN_18002f8c0(int *param_1,LPCWSTR param_2,LPCWSTR param_3,LPWSTR param_4,DWORD param_5,
             DWORD *param_6)

{
  DWORD DVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if (*param_1 == 0) {
    local_18 = 0xc912405;
  }
  else {
    DVar1 = GetPrivateProfileStringW
                      (param_2,param_3,(LPCWSTR)0x0,param_4,param_5,(LPCWSTR)(param_1 + 1));
    *param_6 = DVar1;
  }
  return local_18;
}




undefined4 FUN_18002f940(int *param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong *plVar3;
  undefined4 local_28;
  
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = 0xdd12405;
  }
  else {
    BVar1 = WritePrivateProfileStringW(param_2,param_3,param_4,(LPCWSTR)(param_1 + 1));
    if (BVar1 == 0) {
      plVar3 = (longlong *)FUN_180007470();
      if (plVar3 != (longlong *)0x0) {
        DVar2 = GetLastError();
        (**(code **)(*plVar3 + 0x30))
                  (plVar3,1,0x12400,L"Boot:%S %S %d WritePrivateProfileString:%s failed:%08X\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp","CIniEdit::SetKey",0xe4,
                   param_1 + 1,DVar2);
      }
      local_28 = 0xe512490;
    }
  }
  return local_28;
}




int FUN_18002fa60(undefined1 *param_1)

{
  return (int)CONCAT11(*param_1,param_1[1]);
}




undefined2 FUN_18002fa90(undefined2 *param_1)

{
  return *param_1;
}




uint FUN_18002fac0(byte *param_1)

{
  return (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
         (uint)param_1[3];
}




undefined4 FUN_18002fb20(undefined4 *param_1)

{
  return *param_1;
}




longlong FUN_18002fb80(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  longlong local_res18;
  char *local_20;
  char *local_18;
  
  local_res18 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if (param_3 == 0) {
    local_res18 = 0;
  }
  else {
    do {
      cVar1 = *local_18;
      cVar2 = *local_20;
      local_20 = local_20 + 1;
      local_18 = local_18 + 1;
      if (cVar1 != cVar2) {
        return local_res18;
      }
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return local_res18;
}




void FUN_18002fc10(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 *local_res8;
  undefined1 *local_res10;
  longlong local_res18;
  
  if ((param_2 < param_1) || (param_1 + param_3 <= param_2)) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    local_res8 = param_1 + param_3;
    local_res10 = param_2 + param_3;
    local_res18 = param_3;
    while (local_res18 != 0) {
      local_res8 = local_res8 + -1;
      local_res10 = local_res10 + -1;
      *local_res10 = *local_res8;
      local_res18 = local_res18 + -1;
    }
  }
  return;
}




bool FUN_18002fce0(char *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined7 extraout_var;
  char *local_res8;
  int local_18;
  char *local_10;
  
  local_10 = param_2 + 8;
  uVar1 = FUN_180003670(param_2);
  local_18 = (int)CONCAT71(extraout_var,uVar1);
  local_res8 = param_1;
  while( true ) {
    local_18 = local_18 + -1;
    if (local_18 < 0) {
      return *local_res8 == '/';
    }
    iVar2 = toupper((int)*local_res8);
    iVar3 = toupper((int)*local_10);
    if (iVar2 != iVar3) break;
    local_res8 = local_res8 + 1;
    local_10 = local_10 + 1;
  }
  return false;
}




undefined8 FUN_18002fd90(char *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  char *local_res8;
  int local_18;
  char *local_10;
  
  if ((*(byte *)(param_2 + 0x19) & 6) == 0) {
    local_10 = (char *)(param_2 + 0x21);
    uVar1 = FUN_180003670((undefined1 *)(param_2 + 0x20));
    local_18 = (int)CONCAT71(extraout_var,uVar1);
    for (local_res8 = param_1; (local_18 = local_18 + -1, -1 < local_18 && (*local_res8 != '\0'));
        local_res8 = local_res8 + 1) {
      iVar2 = toupper((int)*local_res8);
      iVar3 = toupper((int)*local_10);
      if (iVar2 != iVar3) {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    if (*local_res8 == '\0') {
      if ((local_18 < 0) || ((*local_10 != ';' && (*local_10 != '.')))) {
LAB_18002fefd:
        uVar4 = 1;
      }
      else if ((*local_10 == '.') && (local_10[1] != ';')) {
        uVar4 = 0;
      }
      else {
        do {
          local_18 = local_18 + -1;
          if (local_18 < 0) goto LAB_18002fefd;
          local_10 = local_10 + 1;
        } while ((*local_10 == ';') || (('/' < *local_10 && (*local_10 < ':'))));
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




undefined4 * FUN_18002ff10(LPCWSTR param_1,char *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined2 uVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined6 extraout_var_10;
  ulonglong uVar12;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined7 extraout_var_07;
  undefined8 uVar13;
  undefined7 extraout_var_08;
  undefined7 extraout_var_09;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  int local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  ulonglong local_d0;
  undefined1 *local_c8;
  int local_c0;
  int local_a8;
  ulonglong local_98;
  char *local_90;
  ulonglong local_88;
  
  local_e0 = (undefined1 *)0x0;
  plVar9 = FUN_180017a00(param_1);
  if (plVar9 == (longlong *)0x0) {
    plVar10 = (longlong *)FUN_180007470();
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))
                (plVar10,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xa8);
    }
  }
  else {
    local_98 = 0x800;
    local_c8 = (undefined1 *)malloc(0x800);
    local_e0 = local_c8;
    if (local_c8 != (undefined1 *)0x0) {
      local_e8 = 0x10;
      while( true ) {
        FUN_1800184b0((longlong)plVar9,local_e8 * 0x800,0);
        DVar4 = FUN_180017d50(plVar9,local_c8,0x800);
        if (DVar4 != 0x800) goto code_r0x0001800300ec;
        lVar11 = FUN_18002fb80(local_c8 + 1,"CD001",5);
        if (lVar11 != 0) {
          plVar10 = (longlong *)FUN_180007470();
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x30))
                      (plVar10,1,0x12400,L"%S %S %d failed.\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xc3);
          }
          goto LAB_180030a47;
        }
        uVar1 = FUN_180003670(local_c8);
        if ((int)CONCAT71(extraout_var,uVar1) == 0xff) {
          plVar10 = (longlong *)FUN_180007470();
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x30))
                      (plVar10,1,0x12400,L"%S %S %d failed.\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xc9);
          }
          goto LAB_180030a47;
        }
        uVar1 = FUN_180003670(local_c8);
        if ((int)CONCAT71(extraout_var_00,uVar1) == 1) break;
        local_e8 = local_e8 + 1;
      }
      uVar3 = FUN_18002fa90((undefined2 *)(local_c8 + 0x80));
      if ((int)CONCAT62(extraout_var_10,uVar3) != 0x800) {
        plVar10 = (longlong *)FUN_180007470();
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x30))
                    (plVar10,1,0x12400,L"%S %S %d failed.\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xd5);
        }
        goto LAB_180030a47;
      }
      uVar5 = FUN_18002fac0(local_c8 + 0x94);
      iVar6 = FUN_18002fb20((undefined4 *)(local_c8 + 0x84));
      uVar12 = (ulonglong)iVar6;
      if (0x800 < uVar12) {
        if (local_c8 != (undefined1 *)0x0) {
          free(local_c8);
        }
        local_98 = ((uVar12 + 0x7ff) / 0x800) * 0x800;
        local_e0 = (undefined1 *)malloc(local_98);
        if (local_e0 == (undefined1 *)0x0) {
          plVar10 = (longlong *)FUN_180007470();
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x30))
                      (plVar10,1,0x12400,L"%S %S %d failed.\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xe6);
          }
          goto LAB_180030a47;
        }
      }
      FUN_1800184b0((longlong)plVar9,uVar5 * 0x800,0);
      DVar4 = FUN_180017d50(plVar9,local_e0,local_98);
      if ((longlong)(int)DVar4 != local_98) {
        plVar10 = (longlong *)FUN_180007470();
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x30))
                    (plVar10,1,0x12400,L"%S %S %d failed.\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xef);
        }
        goto LAB_180030a47;
      }
      local_a8 = 1;
      local_d8 = local_e0;
      local_c0 = 1;
      uVar5 = FUN_18002fac0(local_e0 + 2);
      uVar1 = FUN_180003670(local_e0 + 1);
      local_e8 = uVar5 + (int)CONCAT71(extraout_var_01,uVar1);
      local_90 = param_2;
      while (((iVar6 = local_c0, *local_90 != '\0' && (local_d8 < local_e0 + uVar12)) &&
             (iVar7 = FUN_18002fa60(local_d8 + 6), iVar7 == local_a8))) {
        bVar2 = FUN_18002fce0(local_90,local_d8);
        if ((int)CONCAT71(extraout_var_02,bVar2) == 0) {
          uVar1 = FUN_180003670(local_d8);
          local_d8 = local_d8 + (((int)CONCAT71(extraout_var_03,uVar1) + 9) / 2 << 1);
          local_c0 = local_c0 + 1;
        }
        else {
          uVar1 = FUN_180003670(local_d8);
          local_90 = local_90 + ((int)CONCAT71(extraout_var_04,uVar1) + 1);
          local_a8 = local_c0;
          uVar5 = FUN_18002fac0(local_d8 + 2);
          uVar1 = FUN_180003670(local_d8 + 1);
          local_e8 = uVar5 + (int)CONCAT71(extraout_var_05,uVar1);
          while ((local_d8 < local_e0 + uVar12 &&
                 (iVar7 = FUN_18002fa60(local_d8 + 6), iVar7 != iVar6))) {
            uVar1 = FUN_180003670(local_d8);
            local_d8 = local_d8 + (((int)CONCAT71(extraout_var_06,uVar1) + 9) / 2 << 1);
            local_c0 = local_c0 + 1;
          }
        }
      }
      local_e8 = local_e8 + -1;
      local_88 = 1;
      local_d0 = 0;
      while (local_d0 < local_88) {
        if (local_d0 % 0x800 == 0) {
          local_e8 = local_e8 + 1;
          FUN_1800184b0((longlong)plVar9,local_e8 * 0x800,0);
          DVar4 = FUN_180017d50(plVar9,local_e0,0x800);
          if (DVar4 != 0x800) {
            plVar10 = (longlong *)FUN_180007470();
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x30))
                        (plVar10,1,0x12400,L"%S %S %d failed.\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0x123)
              ;
            }
            goto LAB_180030a47;
          }
          local_c8 = local_e0;
        }
        uVar1 = FUN_180003670(local_c8);
        if ((int)CONCAT71(extraout_var_07,uVar1) == 0) {
          if (local_c8 == local_e0) {
            local_d0 = local_d0 + 0x800;
          }
          else {
            local_d0 = ((local_d0 + 0x7ff) / 0x800) * 0x800;
          }
        }
        else {
          if (local_88 == 1) {
            iVar6 = FUN_18002fb20((undefined4 *)(local_c8 + 10));
            local_88 = (ulonglong)iVar6;
          }
          uVar13 = FUN_18002fd90(local_90,(longlong)local_c8);
          if ((int)uVar13 != 0) break;
          uVar1 = FUN_180003670(local_c8);
          local_d0 = local_d0 + (longlong)(int)CONCAT71(extraout_var_08,uVar1);
          uVar1 = FUN_180003670(local_c8);
          local_c8 = local_c8 + (int)CONCAT71(extraout_var_09,uVar1);
        }
      }
      if (local_d0 < local_88) {
        puVar14 = (undefined4 *)operator_new(0x20);
        if (puVar14 != (undefined4 *)0x0) {
          puVar16 = puVar14;
          for (lVar11 = 0x20; lVar11 != 0; lVar11 = lVar11 + -1) {
            *(undefined1 *)puVar16 = 0;
            puVar16 = (undefined4 *)((longlong)puVar16 + 1);
          }
          *puVar14 = 0;
          uVar8 = FUN_18002fb20((undefined4 *)(local_c8 + 2));
          puVar14[1] = uVar8;
          uVar8 = FUN_18002fb20((undefined4 *)(local_c8 + 10));
          puVar14[2] = uVar8;
          *(longlong **)(puVar14 + 6) = plVar9;
          puVar15 = local_c8 + 0x12;
          puVar16 = puVar14 + 3;
          for (lVar11 = 7; lVar11 != 0; lVar11 = lVar11 + -1) {
            *(undefined1 *)puVar16 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar16 = (undefined4 *)((longlong)puVar16 + 1);
          }
          if (local_e0 == (undefined1 *)0x0) {
            return puVar14;
          }
          free(local_e0);
          return puVar14;
        }
        plVar10 = (longlong *)FUN_180007470();
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x30))
                    (plVar10,1,0x12400,L"%S %S %d failed.\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0x14d);
        }
      }
      else {
        plVar10 = (longlong *)FUN_180007470();
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x30))
                    (plVar10,1,0x12400,L"%S %S %d failed.\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0x145);
        }
      }
      goto LAB_180030a47;
    }
    plVar10 = (longlong *)FUN_180007470();
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))
                (plVar10,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xb2);
    }
  }
LAB_180030a47:
  if (local_e0 != (undefined1 *)0x0) {
    free(local_e0);
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_180017c90(plVar9);
  }
  return (undefined4 *)0x0;
code_r0x0001800300ec:
  plVar10 = (longlong *)FUN_180007470();
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x30))
              (plVar10,1,0x12400,L"%S %S %d failed.\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_open",0xbd);
  }
  goto LAB_180030a47;
}




int FUN_180030a80(void *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 == (void *)0x0) {
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_close",0x176);
    }
    iVar1 = -1;
  }
  else {
    uVar3 = FUN_180017c90(*(longlong **)((longlong)param_1 + 0x18));
    iVar1 = (int)uVar3;
    if (iVar1 == 0) {
      free(param_1);
    }
  }
  return iVar1;
}




void FUN_180030b40(uint *param_1,undefined1 *param_2,ulonglong param_3)

{
  DWORD DVar1;
  undefined1 *local_res10;
  ulonglong local_res18;
  undefined1 auStack_898 [32];
  char *local_878;
  char *local_870;
  undefined4 local_868;
  longlong local_858;
  int local_850;
  longlong local_848;
  longlong *local_840;
  longlong *local_838;
  longlong *local_830;
  undefined1 *local_828;
  ulonglong local_820;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_898;
  local_858 = 0;
  if (param_1 == (uint *)0x0) {
    local_840 = (longlong *)FUN_180007470();
    if (local_840 != (longlong *)0x0) {
      local_868 = 0x18e;
      local_870 = "iso9660_read";
      local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
      (**(code **)(*local_840 + 0x30))(local_840,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else if ((int)*param_1 < 0) {
    local_838 = (longlong *)FUN_180007470();
    if (local_838 != (longlong *)0x0) {
      local_868 = 0x195;
      local_870 = "iso9660_read";
      local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
      (**(code **)(*local_838 + 0x30))(local_838,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    local_820 = param_3;
    if ((int)*param_1 < (int)param_1[2]) {
      local_res18 = param_3;
      if ((ulonglong)(longlong)(int)(param_1[2] - *param_1) < param_3) {
        local_res18 = (ulonglong)(int)(param_1[2] - *param_1);
      }
      local_820 = local_res18;
      local_res10 = param_2;
      while( true ) {
        if (((local_res18 == 0) || ((int)*param_1 < 0)) || ((int)param_1[2] <= (int)*param_1))
        goto LAB_180030f6e;
        local_850 = ((int)*param_1 >> 0xb) + param_1[1];
        if (((*param_1 & 0x7ff) == 0) && (0x7ff < local_res18)) {
          local_828 = local_res10;
        }
        else {
          local_828 = local_818;
        }
        FUN_1800184b0(*(longlong *)(param_1 + 6),local_850 * 0x800,0);
        DVar1 = FUN_180017d50(*(undefined8 **)(param_1 + 6),local_828,0x800);
        local_858 = (longlong)(int)DVar1;
        if (local_858 != 0x800) break;
        if (local_828 == local_818) {
          local_848 = (longlong)(int)(*param_1 & 0x7ff);
          local_858 = 0x800;
          if (local_848 + local_res18 < 0x800) {
            local_858 = local_848 + local_res18;
          }
          local_858 = local_858 - (int)(*param_1 & 0x7ff);
          FUN_18002fc10(local_818 + local_848,local_res10,local_858);
          local_res10 = local_res10 + local_858;
          *param_1 = *param_1 + (int)local_858;
          local_res18 = local_res18 - local_858;
        }
        else {
          local_res10 = local_res10 + 0x800;
          *param_1 = *param_1 + 0x800;
          local_res18 = local_res18 - 0x800;
        }
      }
      local_830 = (longlong *)FUN_180007470();
      if (local_830 != (longlong *)0x0) {
        local_868 = 0x1bb;
        local_870 = "iso9660_read";
        local_878 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
        (**(code **)(*local_830 + 0x30))(local_830,1,0x12400,L"%S %S %d failed.\n");
      }
    }
  }
LAB_180030f6e:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_898);
  return;
}




undefined4 FUN_180030f90(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_file_size",0x332);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}




undefined8 FUN_180031020(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    plVar1 = (longlong *)FUN_180007470();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp","iso9660_file_ctime",0x33e);
    }
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = (int)*(char *)(param_1 + 0xc);
    param_2[1] = (int)*(char *)(param_1 + 0xd);
    param_2[2] = (int)*(char *)(param_1 + 0xe);
    param_2[3] = (int)*(char *)(param_1 + 0xf);
    param_2[4] = (int)*(char *)(param_1 + 0x10);
    param_2[5] = (int)*(char *)(param_1 + 0x11);
    param_2[6] = (int)*(char *)(param_1 + 0x12);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_180031170(undefined8 param_1,int param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint local_28;
  
  local_28 = 0;
  while( true ) {
    uVar1 = FUN_180032940(param_1);
    if (uVar1 <= local_28) {
      return 0xffffffff;
    }
    piVar2 = (int *)FUN_180032910(param_1,(ulonglong)local_28);
    if (param_2 == *piVar2) break;
    local_28 = local_28 + 1;
  }
  puVar3 = (undefined1 *)FUN_180032910(param_1,(ulonglong)local_28);
  for (lVar4 = 0x10c; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  return 0;
}




void FUN_180031200(LPCWSTR param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined6 extraout_var_07;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined8 uVar6;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_388 [32];
  char *local_368;
  char *local_360;
  undefined4 local_358;
  undefined1 local_348;
  char local_347;
  undefined1 *local_340;
  uint local_338;
  undefined1 *local_330;
  int local_328;
  longlong *local_320;
  DWORD local_318;
  int local_314;
  undefined1 *local_310;
  char *local_308;
  char *local_300;
  size_t local_2f8;
  char *local_2f0;
  char *local_2e8;
  uint local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  ulonglong local_298;
  char *local_290;
  longlong *local_288;
  char *local_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined1 *local_268;
  char *local_260;
  char *local_258;
  int local_248;
  undefined4 local_244;
  char cStack_241;
  char local_240 [264];
  char local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_388;
  local_340 = (undefined1 *)0x0;
  local_320 = (longlong *)0x0;
  local_320 = FUN_180017a00(param_1);
  if (local_320 == (longlong *)0x0) {
    local_2d8 = (longlong *)FUN_180007470();
    if (local_2d8 != (longlong *)0x0) {
      local_358 = 0x36f;
      local_360 = "iso9660_get_dir";
      local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
      (**(code **)(*local_2d8 + 0x30))(local_2d8,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    local_2f8 = 0x800;
    local_340 = (undefined1 *)malloc(0x800);
    if (local_340 == (undefined1 *)0x0) {
      local_2d0 = (longlong *)FUN_180007470();
      if (local_2d0 != (longlong *)0x0) {
        local_358 = 0x377;
        local_360 = "iso9660_get_dir";
        local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
        (**(code **)(*local_2d0 + 0x30))(local_2d0,1,0x12400,L"%S %S %d failed.\n");
      }
    }
    else {
      local_338 = 0x10;
      local_310 = local_340;
      local_268 = local_340;
      while( true ) {
        FUN_1800184b0((longlong)local_320,local_338 * 0x800,0);
        local_318 = FUN_180017d50(local_320,local_340,0x800);
        if (local_318 != 0x800) break;
        lVar5 = FUN_18002fb80(local_310 + 1,"CD001",5);
        if (lVar5 != 0) {
          local_2c0 = (longlong *)FUN_180007470();
          if (local_2c0 != (longlong *)0x0) {
            local_358 = 0x388;
            local_360 = "iso9660_get_dir";
            local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_2c0 + 0x30))(local_2c0,1,0x12400,L"%S %S %d failed.\n");
          }
          goto LAB_180031c20;
        }
        uVar2 = FUN_180003670(local_310);
        if ((int)CONCAT71(extraout_var,uVar2) == 0xff) {
          local_2b8 = (longlong *)FUN_180007470();
          if (local_2b8 != (longlong *)0x0) {
            local_358 = 0x38e;
            local_360 = "iso9660_get_dir";
            local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_2b8 + 0x30))(local_2b8,1,0x12400,L"%S %S %d failed.\n");
          }
          goto LAB_180031c20;
        }
        uVar2 = FUN_180003670(local_310);
        if ((int)CONCAT71(extraout_var_00,uVar2) == 1) {
          uVar3 = FUN_18002fa90((undefined2 *)(local_310 + 0x80));
          if ((int)CONCAT62(extraout_var_07,uVar3) != 0x800) {
            local_2b0 = (longlong *)FUN_180007470();
            if (local_2b0 != (longlong *)0x0) {
              local_358 = 0x39a;
              local_360 = "iso9660_get_dir";
              local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
              (**(code **)(*local_2b0 + 0x30))(local_2b0,1,0x12400,L"%S %S %d failed.\n");
            }
            goto LAB_180031c20;
          }
          local_338 = FUN_18002fac0(local_310 + 0x94);
          iVar4 = FUN_18002fb20((undefined4 *)(local_310 + 0x84));
          local_298 = (ulonglong)iVar4;
          if (0x800 < local_298) {
            if (local_340 != (undefined1 *)0x0) {
              free(local_340);
            }
            local_2f8 = ((local_298 + 0x7ff) / 0x800) * 0x800;
            local_340 = (undefined1 *)malloc(local_2f8);
            if (local_340 == (undefined1 *)0x0) {
              local_2a8 = (longlong *)FUN_180007470();
              if (local_2a8 != (longlong *)0x0) {
                local_358 = 0x3ab;
                local_360 = "iso9660_get_dir";
                local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
                (**(code **)(*local_2a8 + 0x30))(local_2a8,1,0x12400,L"%S %S %d failed.\n");
              }
              goto LAB_180031c20;
            }
          }
          FUN_1800184b0((longlong)local_320,local_338 * 0x800,0);
          local_318 = FUN_180017d50(local_320,local_340,local_2f8);
          if ((longlong)(int)local_318 != local_2f8) {
            local_2a0 = (longlong *)FUN_180007470();
            if (local_2a0 != (longlong *)0x0) {
              local_358 = 0x3b4;
              local_360 = "iso9660_get_dir";
              local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
              (**(code **)(*local_2a0 + 0x30))(local_2a0,1,0x12400,L"%S %S %d failed.\n");
            }
            goto LAB_180031c20;
          }
          local_314 = 1;
          local_330 = local_340;
          local_328 = 1;
          local_2e0 = FUN_18002fac0(local_340 + 2);
          uVar2 = FUN_180003670(local_330 + 1);
          local_338 = local_2e0 + (int)CONCAT71(extraout_var_01,uVar2);
          goto LAB_180031820;
        }
        local_338 = local_338 + 1;
      }
      local_2c8 = (longlong *)FUN_180007470();
      if (local_2c8 != (longlong *)0x0) {
        local_358 = 0x382;
        local_360 = "iso9660_get_dir";
        local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
        (**(code **)(*local_2c8 + 0x30))(local_2c8,1,0x12400,L"%S %S %d failed.\n");
      }
    }
  }
LAB_180031c20:
  if (local_340 != (undefined1 *)0x0) {
    free(local_340);
  }
  if (local_320 != (longlong *)0x0) {
    FUN_180017c90(local_320);
  }
LAB_180031c4a:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_388);
  return;
LAB_180031820:
  if (local_340 + local_298 <= local_330) goto LAB_180031bff;
  if (local_328 == 1) {
    uVar2 = FUN_180003670(local_330);
    strncpy(local_138,local_330 + 8,(longlong)(int)CONCAT71(extraout_var_04,uVar2));
    uVar2 = FUN_180003670(local_330);
    local_270 = (ulonglong)(int)CONCAT71(extraout_var_05,uVar2);
    if (0x103 < local_270) {
      __report_rangecheckfailure();
    }
    local_138[local_270] = '\0';
    local_280 = local_138;
    local_258 = local_240;
    local_2f0 = local_258;
    do {
      local_347 = *local_280;
      *local_2f0 = local_347;
      local_280 = local_280 + 1;
      local_2f0 = local_2f0 + 1;
    } while (local_347 != '\0');
    local_248 = local_328;
    local_244 = 0xffffffff;
    FUN_180032990(param_2,&local_248);
  }
  else {
    local_314 = FUN_18002fa60(local_330 + 6);
    uVar2 = FUN_180003670(local_330);
    strncpy(local_138,local_330 + 8,(longlong)(int)CONCAT71(extraout_var_02,uVar2));
    uVar2 = FUN_180003670(local_330);
    local_278 = (ulonglong)(int)CONCAT71(extraout_var_03,uVar2);
    if (0x103 < local_278) {
      __report_rangecheckfailure();
    }
    local_138[local_278] = '\0';
    if (local_314 == 1) {
      local_290 = local_138;
      local_260 = local_240;
      local_2e8 = local_260;
      do {
        cVar1 = *local_290;
        *local_2e8 = cVar1;
        local_290 = local_290 + 1;
        local_2e8 = local_2e8 + 1;
      } while (cVar1 != '\0');
      local_348 = 0;
    }
    else {
      uVar6 = FUN_180031170(param_2,local_314,(undefined1 *)&local_248);
      if ((int)uVar6 != 0) {
        local_288 = (longlong *)FUN_180007470();
        if (local_288 != (longlong *)0x0) {
          local_358 = 0x3d3;
          local_360 = "iso9660_get_dir";
          local_368 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
          (**(code **)(*local_288 + 0x30))(local_288,1,0x12400,L"%S %S %d failed.\n");
        }
        goto LAB_180031c20;
      }
      local_308 = &cStack_241;
      do {
        local_308 = local_308 + 1;
      } while (*local_308 != '\0');
      pcVar7 = "/";
      pcVar8 = local_308;
      for (lVar5 = 2; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_300 = &cStack_241;
      do {
        local_300 = local_300 + 1;
      } while (*local_300 != '\0');
      lVar5 = 0;
      do {
        cVar1 = local_138[lVar5];
        local_300[lVar5] = cVar1;
        lVar5 = lVar5 + 1;
      } while (cVar1 != '\0');
    }
    local_248 = local_328;
    local_244 = 0xffffffff;
    FUN_180032990(param_2,&local_248);
  }
  uVar2 = FUN_180003670(local_330);
  local_330 = local_330 + (((int)CONCAT71(extraout_var_06,uVar2) + 9) / 2 << 1);
  local_328 = local_328 + 1;
  goto LAB_180031820;
LAB_180031bff:
  if (local_340 != (undefined1 *)0x0) {
    free(local_340);
  }
  FUN_180017c90(local_320);
  goto LAB_180031c4a;
}




void FUN_180031c70(LPCWSTR param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined6 extraout_var_12;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined7 extraout_var_07;
  undefined7 extraout_var_08;
  undefined7 extraout_var_09;
  undefined7 extraout_var_10;
  undefined7 extraout_var_11;
  undefined1 auStack_378 [32];
  char *local_358;
  char *local_350;
  undefined4 local_348;
  uint local_338;
  char local_334;
  undefined1 *local_330;
  undefined1 *local_328;
  int local_320;
  undefined1 *local_318;
  ulonglong local_310;
  int local_308;
  DWORD local_304;
  longlong *local_300;
  int local_2f8;
  char *local_2f0;
  undefined1 *local_2e8;
  size_t local_2e0;
  longlong local_2d8;
  char *local_2d0;
  char *local_2c8;
  uint local_2c0;
  uint local_2bc;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  ulonglong local_270;
  char *local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  char *local_248;
  char *local_240;
  undefined4 local_238;
  undefined4 local_234;
  char local_230 [264];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_378;
  local_330 = (undefined1 *)0x0;
  local_300 = (longlong *)0x0;
  local_300 = FUN_180017a00(param_1);
  if (local_300 == (longlong *)0x0) {
    local_2b8 = (longlong *)FUN_180007470();
    if (local_2b8 != (longlong *)0x0) {
      local_348 = 0x415;
      local_350 = "iso9660_get_file_list";
      local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
      (**(code **)(*local_2b8 + 0x30))(local_2b8,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    local_2e0 = 0x800;
    local_2c8 = param_2;
    local_330 = (undefined1 *)malloc(0x800);
    if (local_330 != (undefined1 *)0x0) {
      local_338 = 0x10;
      local_318 = local_330;
      local_2e8 = local_330;
LAB_180031e12:
      FUN_1800184b0((longlong)local_300,local_338 * 0x800,0);
      local_304 = FUN_180017d50(local_300,local_330,0x800);
      if (local_304 == 0x800) {
        lVar6 = FUN_18002fb80(local_2e8 + 1,"CD001",5);
        if (lVar6 != 0) {
          local_2a0 = (longlong *)FUN_180007470();
          if (local_2a0 != (longlong *)0x0) {
            local_348 = 0x430;
            local_350 = "iso9660_get_file_list";
            local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_2a0 + 0x30))(local_2a0,1,0x12400,L"%S %S %d failed.\n");
          }
          goto LAB_1800328c5;
        }
        uVar2 = FUN_180003670(local_2e8);
        if ((int)CONCAT71(extraout_var,uVar2) == 0xff) {
          local_298 = (longlong *)FUN_180007470();
          if (local_298 != (longlong *)0x0) {
            local_348 = 0x436;
            local_350 = "iso9660_get_file_list";
            local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_298 + 0x30))(local_298,1,0x12400,L"%S %S %d failed.\n");
          }
          goto LAB_1800328c5;
        }
        uVar2 = FUN_180003670(local_2e8);
        if ((int)CONCAT71(extraout_var_00,uVar2) != 1) goto LAB_180031e08;
        uVar4 = FUN_18002fa90((undefined2 *)(local_2e8 + 0x80));
        if ((int)CONCAT62(extraout_var_12,uVar4) != 0x800) {
          local_290 = (longlong *)FUN_180007470();
          if (local_290 != (longlong *)0x0) {
            local_348 = 0x442;
            local_350 = "iso9660_get_file_list";
            local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_290 + 0x30))(local_290,1,0x12400,L"%S %S %d failed.\n");
          }
          goto LAB_1800328c5;
        }
        local_338 = FUN_18002fac0(local_2e8 + 0x94);
        iVar5 = FUN_18002fb20((undefined4 *)(local_2e8 + 0x84));
        local_310 = (ulonglong)iVar5;
        if (0x800 < local_310) {
          if (local_330 != (undefined1 *)0x0) {
            free(local_330);
          }
          local_2e0 = ((local_310 + 0x7ff) / 0x800) * 0x800;
          local_330 = (undefined1 *)malloc(local_2e0);
          if (local_330 == (undefined1 *)0x0) {
            local_288 = (longlong *)FUN_180007470();
            if (local_288 != (longlong *)0x0) {
              local_348 = 0x453;
              local_350 = "iso9660_get_file_list";
              local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
              (**(code **)(*local_288 + 0x30))(local_288,1,0x12400,L"%S %S %d failed.\n");
            }
            goto LAB_1800328c5;
          }
        }
        FUN_1800184b0((longlong)local_300,local_338 * 0x800,0);
        local_304 = FUN_180017d50(local_300,local_330,local_2e0);
        if ((longlong)(int)local_304 == local_2e0) {
          local_2f8 = 1;
          local_328 = local_330;
          local_308 = 1;
          local_2c0 = FUN_18002fac0(local_330 + 2);
          uVar2 = FUN_180003670(local_328 + 1);
          local_338 = local_2c0 + (int)CONCAT71(extraout_var_01,uVar2);
          while (((*local_2c8 != '\0' && (local_328 < local_330 + local_310)) &&
                 (iVar5 = FUN_18002fa60(local_328 + 6), iVar5 == local_2f8))) {
            bVar3 = FUN_18002fce0(local_2c8,local_328);
            if ((int)CONCAT71(extraout_var_02,bVar3) == 0) {
              uVar2 = FUN_180003670(local_328);
              local_328 = local_328 + (((int)CONCAT71(extraout_var_03,uVar2) + 9) / 2 << 1);
              local_308 = local_308 + 1;
            }
            else {
              uVar2 = FUN_180003670(local_328);
              local_2c8 = local_2c8 + ((int)CONCAT71(extraout_var_04,uVar2) + 1);
              local_2f8 = local_308;
              local_2bc = FUN_18002fac0(local_328 + 2);
              uVar2 = FUN_180003670(local_328 + 1);
              local_338 = local_2bc + (int)CONCAT71(extraout_var_05,uVar2);
              while ((local_328 < local_330 + local_310 &&
                     (iVar5 = FUN_18002fa60(local_328 + 6), iVar5 != local_2f8))) {
                uVar2 = FUN_180003670(local_328);
                local_328 = local_328 + (((int)CONCAT71(extraout_var_06,uVar2) + 9) / 2 << 1);
                local_308 = local_308 + 1;
              }
            }
          }
          local_338 = local_338 - 1;
          local_270 = 1;
          local_310 = 0;
          while( true ) {
            if (local_270 <= local_310) {
              if (local_330 != (undefined1 *)0x0) {
                free(local_330);
              }
              FUN_180017c90(local_300);
              goto LAB_1800328ef;
            }
            if (local_310 % 0x800 == 0) break;
LAB_18003252f:
            uVar2 = FUN_180003670(local_318);
            if ((int)CONCAT71(extraout_var_07,uVar2) == 0) {
              if (local_318 == local_330) {
                local_310 = local_310 + 0x800;
              }
              else {
                local_310 = ((local_310 + 0x7ff) / 0x800) * 0x800;
              }
            }
            else {
              if (local_270 == 1) {
                iVar5 = FUN_18002fb20((undefined4 *)(local_318 + 10));
                local_270 = (ulonglong)iVar5;
              }
              if ((local_318[0x19] & 6) == 0) {
                uVar2 = FUN_180003670(local_318 + 0x20);
                strncpy(local_128,local_318 + 0x21,(longlong)(int)CONCAT71(extraout_var_08,uVar2));
                uVar2 = FUN_180003670(local_318 + 0x20);
                local_260 = (ulonglong)(int)CONCAT71(extraout_var_09,uVar2);
                if (0x103 < local_260) {
                  __report_rangecheckfailure();
                }
                local_128[local_260] = '\0';
                local_248 = local_128;
                local_2d8 = -1;
                do {
                  local_2d8 = local_2d8 + 1;
                } while (local_248[local_2d8] != '\0');
                local_320 = (int)local_2d8;
                if (((2 < local_320) &&
                    (iVar5 = isdigit((int)local_128[local_320 + -1]), iVar5 != 0)) &&
                   (local_128[local_320 + -2] == ';')) {
                  if ((local_320 < 4) || (local_128[local_320 + -3] != '.')) {
                    local_250 = (ulonglong)(local_320 + -2);
                    if (0x103 < local_250) {
                      __report_rangecheckfailure();
                    }
                    local_128[local_250] = '\0';
                  }
                  else {
                    local_258 = (ulonglong)(local_320 + -3);
                    if (0x103 < local_258) {
                      __report_rangecheckfailure();
                    }
                    local_128[local_258] = '\0';
                  }
                }
                local_238 = FUN_18002fb20((undefined4 *)(local_318 + 2));
                local_234 = FUN_18002fb20((undefined4 *)(local_318 + 10));
                local_240 = local_230;
                local_2d0 = local_240;
                local_268 = param_2;
                do {
                  local_334 = *local_268;
                  *local_2d0 = local_334;
                  local_268 = local_268 + 1;
                  local_2d0 = local_2d0 + 1;
                } while (local_334 != '\0');
                local_2f0 = (char *)((longlong)&local_234 + 3);
                do {
                  local_2f0 = local_2f0 + 1;
                } while (*local_2f0 != '\0');
                lVar6 = 0;
                do {
                  cVar1 = local_128[lVar6];
                  local_2f0[lVar6] = cVar1;
                  lVar6 = lVar6 + 1;
                } while (cVar1 != '\0');
                FUN_180032990(param_3,&local_238);
              }
              uVar2 = FUN_180003670(local_318);
              local_310 = local_310 + (longlong)(int)CONCAT71(extraout_var_10,uVar2);
              uVar2 = FUN_180003670(local_318);
              local_318 = local_318 + (int)CONCAT71(extraout_var_11,uVar2);
            }
          }
          local_338 = local_338 + 1;
          FUN_1800184b0((longlong)local_300,local_338 * 0x800,0);
          local_304 = FUN_180017d50(local_300,local_330,0x800);
          if (local_304 == 0x800) {
            local_318 = local_330;
            goto LAB_18003252f;
          }
          local_278 = (longlong *)FUN_180007470();
          if (local_278 != (longlong *)0x0) {
            local_348 = 0x490;
            local_350 = "iso9660_get_file_list";
            local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_278 + 0x30))(local_278,1,0x12400,L"%S %S %d failed.\n");
          }
        }
        else {
          local_280 = (longlong *)FUN_180007470();
          if (local_280 != (longlong *)0x0) {
            local_348 = 0x45c;
            local_350 = "iso9660_get_file_list";
            local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
            (**(code **)(*local_280 + 0x30))(local_280,1,0x12400,L"%S %S %d failed.\n");
          }
        }
        goto LAB_1800328c5;
      }
      local_2a8 = (longlong *)FUN_180007470();
      if (local_2a8 != (longlong *)0x0) {
        local_348 = 0x42a;
        local_350 = "iso9660_get_file_list";
        local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
        (**(code **)(*local_2a8 + 0x30))(local_2a8,1,0x12400,L"%S %S %d failed.\n");
      }
      goto LAB_1800328c5;
    }
    local_2b0 = (longlong *)FUN_180007470();
    if (local_2b0 != (longlong *)0x0) {
      local_348 = 0x41f;
      local_350 = "iso9660_get_file_list";
      local_358 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iso9660.cpp";
      (**(code **)(*local_2b0 + 0x30))(local_2b0,1,0x12400,L"%S %S %d failed.\n");
    }
  }
LAB_1800328c5:
  if (local_330 != (undefined1 *)0x0) {
    free(local_330);
  }
  if (local_300 != (longlong *)0x0) {
    FUN_180017c90(local_300);
  }
LAB_1800328ef:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_378);
  return;
LAB_180031e08:
  local_338 = local_338 + 1;
  goto LAB_180031e12;
}




longlong FUN_180032910(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18000b560(param_1);
  return param_2 * 0x10c + *plVar1;
}




longlong FUN_180032940(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b540(param_1);
  plVar2 = (longlong *)FUN_18000b560(param_1);
  return (*plVar1 - *plVar2) / 0x10c;
}




void FUN_180032990(undefined8 param_1,undefined8 param_2)

{
  FUN_1800329c0(param_1,param_2);
  return;
}




void FUN_1800329c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_18000b6d0(param_1);
  if (bVar1) {
    uVar2 = FUN_1800012e0(param_2);
    FUN_180032a30(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800012e0(param_2);
    plVar3 = (longlong *)FUN_18000b540(param_1);
    FUN_180032b40(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_180032a30(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_1800012e0(param_2);
  puVar2 = (undefined8 *)FUN_18000b540(param_1);
  p_Var3 = (_Container_proxy *)FUN_1800012e0(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_18000b540(param_1);
  FUN_18000b540(param_1);
  FUN_18000b5b0();
  FUN_18000b540(param_1);
  plVar5 = (longlong *)FUN_18000b540(param_1);
  *plVar5 = *plVar5 + 0x10c;
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Container_proxy> >::construct<struct std::_Container_proxy,struct
   std::_Container_proxy>(class std::allocator<struct std::_Container_proxy> & __ptr64,struct
   std::_Container_proxy * __ptr64 const,struct std::_Container_proxy && __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
          (allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined1 *)FUN_180001000(0x10c,param_2);
  puVar2 = (undefined1 *)FUN_1800012e0(param_3);
  for (lVar3 = 0x10c; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




longlong FUN_180032b40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *paVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  IObject *pIVar7;
  _Container_proxy *p_Var8;
  _Container_proxy *p_Var9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_18000b560(param_1);
  lVar2 = (param_2 - *plVar1) / 0x10c;
  paVar3 = (allocator<struct_std::_Container_proxy> *)FUN_180001f40(param_1);
  _Var4 = FUN_180032940(param_1);
  _Var5 = FUN_180032ff0(param_1);
  if (_Var4 == _Var5) {
    FUN_18000cb40();
  }
  uVar6 = FUN_180032ec0(param_1,_Var4 + 1);
  pIVar7 = (IObject *)allocate(paVar3,uVar6);
  p_Var8 = (_Container_proxy *)FUN_1800012e0(pIVar7 + lVar2 * 0x10c);
  p_Var9 = (_Container_proxy *)FUN_1800012e0(param_3);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar3,p_Var8,p_Var9);
  plVar1 = (longlong *)FUN_18000b540(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_18000b540(param_1);
    puVar11 = (undefined8 *)FUN_18000b560(param_1);
    FUN_180032f50(param_1,*puVar11,*puVar10,pIVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_18000b560(param_1);
    FUN_180032fb0(param_1,*puVar10,param_2,pIVar7);
    puVar10 = (undefined8 *)FUN_18000b540(param_1);
    FUN_180032fb0(param_1,param_2,*puVar10,pIVar7 + lVar2 * 0x10c + 0x10c);
  }
  FUN_180032db0(param_1,(longlong)pIVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  return lVar2 * 0x10c + *plVar1;
}




void FUN_180032db0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1800025b0(param_1);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  if (*plVar1 != 0) {
    FUN_18000b540(param_1);
    FUN_18000b560(param_1);
    FUN_18000b690(param_1);
    lVar2 = FUN_1800330b0(param_1);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    uVar4 = FUN_180001f40(param_1);
    FUN_180033070(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_18000b560(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_18000b540(param_1);
  *plVar1 = param_2 + param_3 * 0x10c;
  plVar1 = (longlong *)FUN_18000b860(param_1);
  *plVar1 = param_2 + param_4 * 0x10c;
  return;
}




ulonglong FUN_180032ec0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_1800330b0(param_1);
  _Var2 = FUN_180032ff0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180032f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,IObject *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180032fb0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_180032fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,IObject *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001f40(param_1);
  FUN_180033100(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_180032ff0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180001f40(param_1);
  local_18 = FUN_1800330a0();
  local_10[0] = FUN_180001200();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: struct std::_Container_proxy * __ptr64 __cdecl std::allocator<struct
   std::_Container_proxy>::allocate(unsigned __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(undefined8 param_1,ulonglong param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_1800331e0(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180033070(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x10c);
  return;
}




undefined8 FUN_1800330a0(void)

{
  return 0xf4898d5f85bb39;
}




longlong FUN_1800330b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_18000b860(param_1);
  plVar2 = (longlong *)FUN_18000b560(param_1);
  return (*plVar1 - *plVar2) / 0x10c;
}




IObject * FUN_180033100(undefined8 param_1,undefined8 param_2,IObject *param_3,undefined8 param_4)

{
  IObject *pIVar1;
  undefined8 uVar2;
  IObject *local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  IObject *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_1800012e0(param_1);
  local_10[0] = FUN_1800012e0(param_2);
  pIVar1 = (IObject *)FUN_1800331b0((longlong *)&local_20,local_10);
  local_18 = IObject::operator=(local_res18,pIVar1);
  FUN_18000d060(local_28);
  uVar2 = FUN_18000d080(local_20,local_10[0],local_18);
  FUN_18000d0c0(&local_res18,uVar2);
  return local_res18;
}




void FUN_1800331b0(longlong *param_1,longlong *param_2)

{
  FUN_180033230(param_1,param_2);
  return;
}




longlong FUN_1800331e0(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x10c;
  if (0xf4898d5f85bb39 < param_1) {
    local_18 = -1;
  }
  return local_18;
}




longlong FUN_180033230(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x10c;
}




int FUN_180033260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180001010();
  local_14 = __stdio_common_vsprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_1800332d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = FUN_180033260(param_1,param_2,param_3,0,&local_res20);
  return iVar1;
}




/* WARNING: Removing unreachable block (ram,0x00018003387f) */
/* WARNING: Removing unreachable block (ram,0x00018003354c) */
/* WARNING: Removing unreachable block (ram,0x000180033570) */
/* WARNING: Removing unreachable block (ram,0x0001800335b8) */

void FUN_180033330(LPCWSTR param_1,char *param_2,LPCSTR param_3,undefined *param_4,
                  undefined8 param_5,uint param_6,uint *param_7)

{
  int iVar1;
  DWORD nNumberOfBytesToWrite;
  BOOL BVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  WCHAR *pWVar7;
  undefined1 auStackY_2f8 [32];
  HANDLE local_2a8;
  undefined1 *local_2a0;
  uint local_298;
  DWORD local_284;
  longlong *local_280;
  longlong *local_278;
  longlong *local_268;
  longlong *local_260;
  longlong *local_258;
  longlong *local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_2f8;
  local_2a0 = (undefined1 *)0x0;
  local_298 = 0;
  pWVar7 = local_228;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  local_2a8 = (HANDLE)0xffffffffffffffff;
  local_284 = 0;
  puVar4 = FUN_18002ff10(param_1,param_2);
  if (puVar4 == (uint *)0x0) {
    local_280 = (longlong *)FUN_180007470();
    if (local_280 != (longlong *)0x0) {
      (**(code **)(*local_280 + 0x30))(local_280,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    iVar1 = MultiByteToWideChar(0,0,param_3,-1,local_228,0x104);
    if (iVar1 == 0) {
      local_278 = (longlong *)FUN_180007470();
      if (local_278 != (longlong *)0x0) {
        GetLastError();
        local_248 = *local_278;
        (**(code **)(local_248 + 0x30))(local_278,1,0x12400,L"%S %S %d GetLastError:%08X\n");
      }
    }
    else {
      FUN_180013520(local_228);
      DeleteFileW(local_228);
      local_2a8 = CreateFileA(param_3,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
      if (local_2a8 == (HANDLE)0xffffffffffffffff) {
        local_268 = (longlong *)FUN_180007470();
        if (local_268 != (longlong *)0x0) {
          GetLastError();
          local_240 = *local_268;
          (**(code **)(local_240 + 0x30))(local_268,1,0x12400,L"%S %S %d GetLastError:%08X\n");
        }
      }
      else {
        local_2a0 = (undefined1 *)malloc(0x40000);
        if (local_2a0 == (undefined1 *)0x0) {
          local_260 = (longlong *)FUN_180007470();
          if (local_260 != (longlong *)0x0) {
            (**(code **)(*local_260 + 0x30))(local_260,1,0x12400,L"%S %S %d failed.\n");
          }
        }
        else {
          while (nNumberOfBytesToWrite = FUN_180030b40(puVar4,local_2a0,0x40000),
                0 < (int)nNumberOfBytesToWrite) {
            BVar2 = WriteFile(local_2a8,local_2a0,nNumberOfBytesToWrite,&local_284,(LPOVERLAPPED)0x0
                             );
            if (BVar2 == 0) {
              local_258 = (longlong *)FUN_180007470();
              if (local_258 != (longlong *)0x0) {
                GetLastError();
                local_238 = *local_258;
                (**(code **)(local_238 + 0x30))(local_258,1,0x12400,L"%S %S %d GetLastError:%08X\n")
                ;
              }
              goto LAB_18003395a;
            }
            if ((param_4 != (undefined *)0x0) && (param_6 != 0)) {
              *param_7 = *param_7 + nNumberOfBytesToWrite;
              uVar5 = (ulonglong)((double)(((ulonglong)*param_7 * 100) / (ulonglong)param_6) * 0.94)
              ;
              uVar3 = (uint)uVar5;
              if (local_298 < uVar3) {
                (*(code *)param_4)(param_5,uVar5 & 0xffffffff);
                local_298 = uVar3;
              }
            }
          }
          if (((int)nNumberOfBytesToWrite < 0) &&
             (local_250 = (longlong *)FUN_180007470(), local_250 != (longlong *)0x0)) {
            (**(code **)(*local_250 + 0x30))(local_250,1,0x12400,L"%S %S %d failed.\n");
          }
        }
      }
    }
  }
LAB_18003395a:
  if (local_2a8 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_2a8);
    CloseHandle(local_2a8);
  }
  if (puVar4 != (uint *)0x0) {
    FUN_180030a80(puVar4);
  }
  if (local_2a0 != (undefined1 *)0x0) {
    free(local_2a0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2f8);
  return;
}




undefined4 FUN_1800339c0(LPCWSTR param_1,char *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 local_28;
  
  local_28 = 0xffffffff;
  puVar1 = FUN_18002ff10(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    plVar2 = (longlong *)FUN_180007470();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x12400,L"%S %S %d failed.\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp","GetIsoFileSize",0xc9);
    }
  }
  else {
    local_28 = FUN_180030f90((longlong)puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_180030a80(puVar1);
  }
  return local_28;
}




void FUN_180033a90(LPCSTR param_1,LPSTR param_2)

{
  BOOL BVar1;
  longlong lVar2;
  uint *puVar3;
  LPSTR pCVar4;
  undefined1 auStack_1f8 [32];
  char *local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  uint local_1b8;
  uint local_1b4;
  LPCSTR local_1b0;
  void *local_1a8;
  DWORD local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  void *local_148;
  void *local_140;
  void *local_138;
  void *local_130;
  CHAR local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_1f8;
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPSTR)0x0)) {
    local_170 = (longlong *)FUN_180007470();
    if (local_170 != (longlong *)0x0) {
      local_1c8 = 0xde;
      local_1d0 = "GetFileVersionDetail";
      local_1d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
      (**(code **)(*local_170 + 0x30))(local_170,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    local_1a0 = GetFileVersionInfoSizeA(param_1,(LPDWORD)0x0);
    if (local_1a0 == 0) {
      local_168 = (longlong *)FUN_180007470();
      if (local_168 != (longlong *)0x0) {
        local_1c8 = 0xe6;
        local_1d0 = "GetFileVersionDetail";
        local_1d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
        (**(code **)(*local_168 + 0x30))(local_168,1,0x12400,L"%S %S %d failed.\n");
      }
    }
    else {
      local_1a8 = operator_new((ulonglong)local_1a0);
      local_148 = local_1a8;
      if (local_1a8 == (void *)0x0) {
        local_160 = (longlong *)FUN_180007470();
        if (local_160 != (longlong *)0x0) {
          local_1c8 = 0xee;
          local_1d0 = "GetFileVersionDetail";
          local_1d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
          (**(code **)(*local_160 + 0x30))(local_160,1,0x12400,L"%S %S %d failed.\n");
        }
      }
      else {
        BVar1 = GetFileVersionInfoA(param_1,0,local_1a0,local_1a8);
        if (BVar1 == 0) {
          local_158 = (longlong *)FUN_180007470();
          if (local_158 != (longlong *)0x0) {
            local_1c8 = 0xf3;
            local_1d0 = "GetFileVersionDetail";
            local_1d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
            (**(code **)(*local_158 + 0x30))(local_158,1,0x12400,L"%S %S %d failed.\n");
          }
          local_140 = local_1a8;
          free(local_1a8);
        }
        else {
          pCVar4 = param_2;
          for (lVar2 = 0x234; lVar2 != 0; lVar2 = lVar2 + -1) {
            *pCVar4 = '\0';
            pCVar4 = pCVar4 + 1;
          }
          BVar1 = VerQueryValueA(local_1a8,"\\",&local_178,&local_1b8);
          if (BVar1 != 0) {
            puVar3 = local_178;
            pCVar4 = param_2 + 0x200;
            for (lVar2 = 0x34; lVar2 != 0; lVar2 = lVar2 + -1) {
              *pCVar4 = (CHAR)*puVar3;
              puVar3 = (uint *)((longlong)puVar3 + 1);
              pCVar4 = pCVar4 + 1;
            }
          }
          BVar1 = VerQueryValueA(local_1a8,"\\VarFileInfo\\Translation",&local_178,&local_1b8);
          if (BVar1 == 0) {
            local_150 = (longlong *)FUN_180007470();
            if (local_150 != (longlong *)0x0) {
              local_1c8 = 0x108;
              local_1d0 = "GetFileVersionDetail";
              local_1d8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
              (**(code **)(*local_150 + 0x30))(local_150,1,0x12400,L"%S %S %d failed.\n");
            }
            local_138 = local_1a8;
            free(local_1a8);
          }
          else {
            local_1b4 = *local_178 >> 0x10 | *local_178 << 0x10;
            local_1b0 = (LPCSTR)0x0;
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\FileVersion",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_19c = local_1b8;
              }
              else {
                local_19c = 0x40;
              }
              lstrcpynA(param_2,local_1b0,local_19c);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\FileDescription",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_198 = local_1b8;
              }
              else {
                local_198 = 0x40;
              }
              lstrcpynA(param_2 + 0x40,local_1b0,local_198);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\LegalCopyright",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_194 = local_1b8;
              }
              else {
                local_194 = 0x40;
              }
              lstrcpynA(param_2 + 0x80,local_1b0,local_194);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\ProductName",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_190 = local_1b8;
              }
              else {
                local_190 = 0x40;
              }
              lstrcpynA(param_2 + 0xc0,local_1b0,local_190);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\ProductVersion",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_18c = local_1b8;
              }
              else {
                local_18c = 0x40;
              }
              lstrcpynA(param_2 + 0x100,local_1b0,local_18c);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\InternalName",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_188 = local_1b8;
              }
              else {
                local_188 = 0x40;
              }
              lstrcpynA(param_2 + 0x140,local_1b0,local_188);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\OriginalFilename",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_184 = local_1b8;
              }
              else {
                local_184 = 0x40;
              }
              lstrcpynA(param_2 + 0x180,local_1b0,local_184);
            }
            FUN_1800332d0(local_128,0x100,"\\StringFileInfo\\%08lx\\CompanyName",
                          (ulonglong)local_1b4);
            BVar1 = VerQueryValueA(local_1a8,local_128,&local_1b0,&local_1b8);
            if (BVar1 != 0) {
              if (local_1b8 < 0x41) {
                local_180 = local_1b8;
              }
              else {
                local_180 = 0x40;
              }
              lstrcpynA(param_2 + 0x1c0,local_1b0,local_180);
            }
            local_130 = local_1a8;
            free(local_1a8);
          }
        }
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_1f8);
  return;
}




void FUN_180034280(LPCWSTR param_1,LPCWSTR param_2,undefined2 *param_3,LPSTR param_4)

{
  DWORD DVar1;
  UINT UVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  WCHAR *pWVar6;
  CHAR *pCVar7;
  undefined1 auStackY_6d8 [32];
  CHAR local_658 [272];
  CHAR local_548 [272];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_6d8;
  pWVar6 = local_438;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  pWVar6 = local_228;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  pCVar7 = local_658;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar7 = '\0';
    pCVar7 = pCVar7 + 1;
  }
  pCVar7 = local_548;
  for (lVar5 = 0x104; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pCVar7 = '\0';
    pCVar7 = pCVar7 + 1;
  }
  DVar1 = GetTempPathW(0x104,local_228);
  if ((DVar1 < 0x105) && (DVar1 != 0)) {
    UVar2 = GetTempFileNameW(local_228,L"NEW",0,local_438);
    if (UVar2 == 0) {
      plVar4 = (longlong *)FUN_180007470();
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"%S %S %d failed.\n");
      }
    }
    else {
      iVar3 = WideCharToMultiByte(0,0,local_438,-1,local_658,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar3 == 0) ||
         (iVar3 = WideCharToMultiByte(0,0,param_2,-1,local_548,0x104,(LPCSTR)0x0,(LPBOOL)0x0),
         iVar3 == 0)) {
        plVar4 = (longlong *)FUN_180007470();
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"%S %S %d failed.\n");
        }
      }
      else {
        iVar3 = FUN_180033330(param_1,local_548,local_658,(undefined *)0x0,0,0,(uint *)0x0);
        if (iVar3 == 0) {
          iVar3 = FUN_1800360a0(local_658,param_3);
          if (iVar3 == 0) {
            plVar4 = (longlong *)FUN_180007470();
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"%S %S %d failed.\n");
            }
          }
          else {
            iVar3 = FUN_180033a90(local_658,param_4);
            if ((iVar3 == 0) && (plVar4 = (longlong *)FUN_180007470(), plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"%S %S %d failed.\n");
            }
          }
        }
        else {
          plVar4 = (longlong *)FUN_180007470();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"%S %S %d failed.\n");
          }
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)FUN_180007470();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  DeleteFileW(local_438);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_6d8);
  return;
}




void FUN_180034700(LPCWSTR param_1,LPCWSTR param_2,LPVOID param_3,LPVOID param_4,LPVOID param_5)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  CHAR *pCVar5;
  undefined1 auStackY_718 [32];
  DWORD local_6d4;
  DWORD local_6d0;
  HANDLE local_6c8;
  UINT local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  longlong *local_690;
  longlong *local_688;
  longlong *local_680;
  longlong local_678;
  longlong local_670;
  longlong local_668;
  longlong local_660;
  CHAR local_658 [272];
  CHAR local_548 [272];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_718;
  local_6d4 = 0;
  local_6c0 = 0;
  local_6d0 = 0;
  local_6c8 = (HANDLE)0xffffffffffffffff;
  pWVar4 = local_438;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  pWVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  pCVar5 = local_658;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar5 = '\0';
    pCVar5 = pCVar5 + 1;
  }
  pCVar5 = local_548;
  for (lVar3 = 0x104; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar5 = '\0';
    pCVar5 = pCVar5 + 1;
  }
  local_6d0 = GetTempPathW(0x104,local_228);
  if ((local_6d0 < 0x105) && (local_6d0 != 0)) {
    local_6c0 = GetTempFileNameW(local_228,L"NEW",0,local_438);
    if (local_6c0 == 0) {
      local_6b0 = (longlong *)FUN_180007470();
      if (local_6b0 != (longlong *)0x0) {
        (**(code **)(*local_6b0 + 0x30))(local_6b0,1,0x12400,L"%S %S %d failed.\n");
      }
    }
    else {
      iVar1 = WideCharToMultiByte(0,0,local_438,-1,local_658,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar1 == 0) ||
         (iVar1 = WideCharToMultiByte(0,0,param_2,-1,local_548,0x104,(LPCSTR)0x0,(LPBOOL)0x0),
         iVar1 == 0)) {
        local_6a8 = (longlong *)FUN_180007470();
        if (local_6a8 != (longlong *)0x0) {
          (**(code **)(*local_6a8 + 0x30))(local_6a8,1,0x12400,L"%S %S %d failed.\n");
        }
      }
      else {
        iVar1 = FUN_180033330(param_1,local_548,local_658,(undefined *)0x0,0,0,(uint *)0x0);
        if (iVar1 == 0) {
          local_6c8 = CreateFileW(local_438,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0)
          ;
          if (local_6c8 == (HANDLE)0xffffffffffffffff) {
            local_698 = (longlong *)FUN_180007470();
            if (local_698 != (longlong *)0x0) {
              GetLastError();
              local_678 = *local_698;
              (**(code **)(local_678 + 0x30))(local_698,1,0x12400,L"%S %d failed:%08X\n");
            }
          }
          else {
            BVar2 = ReadFile(local_6c8,param_3,4,&local_6d4,(LPOVERLAPPED)0x0);
            if ((BVar2 == 0) || (local_6d4 != 4)) {
              local_690 = (longlong *)FUN_180007470();
              if (local_690 != (longlong *)0x0) {
                GetLastError();
                local_670 = *local_690;
                (**(code **)(local_670 + 0x30))(local_690,1,0x12400,L"%S %d failed:%08X\n");
              }
            }
            else {
              BVar2 = ReadFile(local_6c8,param_4,4,&local_6d4,(LPOVERLAPPED)0x0);
              if ((BVar2 == 0) || (local_6d4 != 4)) {
                local_688 = (longlong *)FUN_180007470();
                if (local_688 != (longlong *)0x0) {
                  GetLastError();
                  local_668 = *local_688;
                  (**(code **)(local_668 + 0x30))(local_688,1,0x12400,L"%S %d failed:%08X\n");
                }
              }
              else {
                BVar2 = ReadFile(local_6c8,param_5,4,&local_6d4,(LPOVERLAPPED)0x0);
                if (((BVar2 == 0) || (local_6d4 != 4)) &&
                   (local_680 = (longlong *)FUN_180007470(), local_680 != (longlong *)0x0)) {
                  GetLastError();
                  local_660 = *local_680;
                  (**(code **)(local_660 + 0x30))(local_680,1,0x12400,L"%S %d failed:%08X\n");
                }
              }
            }
          }
        }
        else {
          local_6a0 = (longlong *)FUN_180007470();
          if (local_6a0 != (longlong *)0x0) {
            (**(code **)(*local_6a0 + 0x30))(local_6a0,1,0x12400,L"%S %S %d failed.\n");
          }
        }
      }
    }
  }
  else {
    local_6b8 = (longlong *)FUN_180007470();
    if (local_6b8 != (longlong *)0x0) {
      (**(code **)(*local_6b8 + 0x30))(local_6b8,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  if (local_6c8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_6c8);
    DeleteFileW(local_438);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_718);
  return;
}




void FUN_180034dd0(LPCWSTR param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  CHAR *pCVar4;
  short *psVar5;
  undefined1 auStackY_328 [32];
  uint local_2e8;
  int local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  int local_2d8;
  int local_2d4;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0 [3];
  undefined8 local_2a8 [3];
  undefined4 local_290;
  ulonglong local_288;
  ulonglong local_280;
  ulonglong local_278;
  ulonglong local_270;
  short local_268 [8];
  CHAR local_258 [256];
  char cStack_158;
  char cStack_156;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_328;
  local_2dc = 0;
  local_2d8 = 0;
  FUN_180035380(local_2a8);
  FUN_180035380(local_2c0);
  pCVar4 = local_258;
  for (lVar3 = 0x234; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pCVar4 = '\0';
    pCVar4 = pCVar4 + 1;
  }
  psVar5 = local_268;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)psVar5 = 0;
    psVar5 = (short *)((longlong)psVar5 + 1);
  }
  local_2e4 = 0;
  local_290 = 0;
  local_2e0 = 0;
  FUN_18000abf0(local_2a8);
  FUN_18000abf0(local_2c0);
  iVar1 = FUN_180031200(param_1,local_2a8);
  if (iVar1 == 0) {
    iVar1 = FUN_180031c70(param_1,"",local_2c0);
    if (iVar1 == 0) {
      local_2e8 = 0;
      while( true ) {
        local_288 = (ulonglong)local_2e8;
        uVar2 = FUN_180032940(local_2a8);
        if (uVar2 <= local_288) break;
        lVar3 = FUN_180032910(local_2a8,(ulonglong)local_2e8);
        _strupr((char *)(lVar3 + 8));
        lVar3 = FUN_180032910(local_2a8,(ulonglong)local_2e8);
        iVar1 = strncmp((char *)(lVar3 + 8),"ISOLINUX",8);
        if (iVar1 == 0) {
          local_2e4 = 1;
          break;
        }
        local_2e8 = local_2e8 + 1;
      }
      if (local_2e4 == 0) {
        local_2e8 = 0;
        while( true ) {
          local_280 = (ulonglong)local_2e8;
          uVar2 = FUN_180032940(local_2c0);
          if (uVar2 <= local_280) break;
          lVar3 = FUN_180032910(local_2c0,(ulonglong)local_2e8);
          _strupr((char *)(lVar3 + 8));
          lVar3 = FUN_180032910(local_2c0,(ulonglong)local_2e8);
          iVar1 = strncmp((char *)(lVar3 + 8),"BOOTMGR",7);
          if (iVar1 == 0) {
            local_2e4 = 2;
            break;
          }
          local_2e8 = local_2e8 + 1;
        }
        if (local_2e4 != 0) {
          local_2e8 = 0;
          while( true ) {
            local_278 = (ulonglong)local_2e8;
            uVar2 = FUN_180032940(local_2c0);
            if (uVar2 <= local_278) break;
            lVar3 = FUN_180032910(local_2c0,(ulonglong)local_2e8);
            _strupr((char *)(lVar3 + 8));
            lVar3 = FUN_180032910(local_2c0,(ulonglong)local_2e8);
            iVar1 = strncmp((char *)(lVar3 + 8),"BOOTMGR.EFI",0xb);
            if (iVar1 == 0) break;
            local_2e8 = local_2e8 + 1;
          }
          local_270 = (ulonglong)local_2e8;
          uVar2 = FUN_180032940(local_2c0);
          if ((local_270 < uVar2) &&
             (iVar1 = FUN_180034280(param_1,L"BOOTMGR.EFI",local_268,local_258), iVar1 != 0)) {
            if (local_268[0] == 0x20) {
              local_2e4 = 2;
            }
            else {
              local_2e4 = 3;
            }
            if ((cStack_158 == '6') && (cStack_156 == '1')) {
              local_2e0 = 1;
            }
            else if ((cStack_158 == '6') && (cStack_156 == '2')) {
              local_2e0 = 2;
            }
            else if ((cStack_158 == '6') && (cStack_156 == '3')) {
              local_2e0 = 3;
            }
            else {
              local_2e0 = 4;
            }
            local_2dc = 1;
          }
          else {
            iVar1 = FUN_180034700(param_1,L"BOOT/EASEUSPE.BIN",&local_2e0,&local_2d8,&local_2dc);
            if (iVar1 == 0) {
              local_2e4 = 2;
              local_2e0 = 1;
              local_2dc = 0;
            }
            else if (local_2d8 == 0) {
              local_2e4 = 2;
            }
            else {
              local_2e4 = 3;
            }
          }
        }
      }
    }
    else {
      local_2c8 = (longlong *)FUN_180007470();
      if (local_2c8 != (longlong *)0x0) {
        (**(code **)(*local_2c8 + 0x30))(local_2c8,1,0x12400,L"%S %S %d failed.\n");
      }
      local_2e4 = 0;
    }
  }
  else {
    local_2d0 = (longlong *)FUN_180007470();
    if (local_2d0 != (longlong *)0x0) {
      (**(code **)(*local_2d0 + 0x30))(local_2d0,1,0x12400,L"%S %S %d failed.\n");
    }
    local_2e4 = 0;
  }
  FUN_18000abf0(local_2c0);
  FUN_18000abf0(local_2a8);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_2e0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_2dc;
  }
  local_2d4 = local_2e4;
  FUN_1800353a0(local_2c0);
  FUN_1800353a0(local_2a8);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_328);
  return;
}




undefined8 * FUN_180035380(undefined8 *param_1)

{
  FUN_18000ae00(param_1);
  return param_1;
}




void FUN_1800353a0(undefined8 param_1)

{
  FUN_180036300(param_1);
  return;
}




void FUN_1800353c0(LPCWSTR param_1,char *param_2,uint param_3,undefined *param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_5b8 [32];
  uint local_578;
  int local_570;
  uint local_56c;
  char *local_568;
  char *local_560;
  char *local_558;
  char *local_550;
  char *local_548;
  char *local_540;
  char *local_538;
  char *local_530;
  undefined8 local_528 [3];
  int local_510;
  longlong *local_508;
  char *local_500;
  char *local_4f8;
  longlong *local_4f0;
  char *local_4e8;
  longlong *local_4e0;
  uint local_4d8 [2];
  undefined8 local_4d0 [3];
  ulonglong local_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_4a0;
  ulonglong local_498;
  char *local_490;
  char *local_488;
  char *local_480;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_478 [31];
  char cStack_459;
  char local_458 [271];
  char acStack_349 [273];
  wchar_t local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_5b8;
  local_570 = 0;
  FUN_180035380(local_528);
  FUN_180035380(local_4d0);
  local_56c = 0;
  local_4d8[0] = 0;
  pcVar10 = acStack_349;
  for (lVar8 = 0x104; pcVar10 = pcVar10 + 1, lVar8 != 0; lVar8 = lVar8 + -1) {
    *pcVar10 = '\0';
  }
  pcVar10 = local_458;
  for (lVar8 = 0x104; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pcVar10 = '\0';
    pcVar10 = pcVar10 + 1;
  }
  FUN_18000abf0(local_528);
  FUN_18000abf0(local_4d0);
  iVar3 = FUN_180031200(param_1,local_528);
  if (iVar3 == 0) {
    local_578 = 0;
    while( true ) {
      local_498 = (ulonglong)local_578;
      uVar5 = FUN_180032940(local_528);
      if (uVar5 <= local_498) break;
      lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
      iVar3 = _stricmp((char *)(lVar8 + 8),"TOOLS");
      if (iVar3 != 0) {
        lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
        iVar3 = _strnicmp((char *)(lVar8 + 8),"TOOLS/",6);
        if (iVar3 != 0) {
          local_490 = local_458;
          local_530 = local_490;
          local_500 = param_2;
          do {
            cVar1 = *local_500;
            *local_530 = cVar1;
            local_500 = local_500 + 1;
            local_530 = local_530 + 1;
          } while (cVar1 != '\0');
          local_568 = &cStack_459;
          do {
            local_568 = local_568 + 1;
          } while (*local_568 != '\0');
          pcVar10 = "\\";
          for (lVar8 = 2; lVar8 != 0; lVar8 = lVar8 + -1) {
            *local_568 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            local_568 = local_568 + 1;
          }
          lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
          local_560 = &cStack_459;
          do {
            local_560 = local_560 + 1;
          } while (*local_560 != '\0');
          lVar9 = 0;
          do {
            cVar1 = *(char *)(lVar8 + 8 + lVar9);
            local_560[lVar9] = cVar1;
            lVar9 = lVar9 + 1;
          } while (cVar1 != '\0');
          _mkdir(local_458);
          SetFileAttributesA(local_458,6);
        }
      }
      local_578 = local_578 + 1;
    }
    local_578 = 0;
    while( true ) {
      local_4b8 = (ulonglong)local_578;
      uVar5 = FUN_180032940(local_528);
      if (uVar5 <= local_4b8) break;
      lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
      pbVar6 = (byte *)(lVar8 + 8);
      lVar8 = (longlong)&DAT_18003f92f - (longlong)pbVar6;
      do {
        bVar2 = *pbVar6;
        if (bVar2 != pbVar6[lVar8]) {
          uVar4 = -(uint)(bVar2 < pbVar6[lVar8]) | 1;
          goto LAB_180035740;
        }
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
      uVar4 = 0;
LAB_180035740:
      if (uVar4 == 0) {
        acStack_349[1] = 0;
LAB_180035872:
        iVar3 = FUN_180031c70(param_1,acStack_349 + 1,local_4d0);
        if (iVar3 != 0) {
          local_4f0 = (longlong *)FUN_180007470();
          if (local_4f0 != (longlong *)0x0) {
            (**(code **)(*local_4f0 + 0x30))(local_4f0,1,0x12400,L"%S %S %d failed.\n");
          }
          local_570 = -2;
          break;
        }
      }
      else {
        lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
        iVar3 = _stricmp((char *)(lVar8 + 8),"TOOLS");
        if (iVar3 != 0) {
          lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
          iVar3 = _strnicmp((char *)(lVar8 + 8),"TOOLS/",6);
          if (iVar3 != 0) {
            lVar8 = FUN_180032910(local_528,(ulonglong)local_578);
            local_4f8 = (char *)(lVar8 + 8);
            local_488 = acStack_349 + 1;
            local_540 = local_488;
            do {
              cVar1 = *local_4f8;
              *local_540 = cVar1;
              local_4f8 = local_4f8 + 1;
              local_540 = local_540 + 1;
            } while (cVar1 != '\0');
            local_558 = acStack_349;
            do {
              local_558 = local_558 + 1;
            } while (*local_558 != '\0');
            pcVar10 = "/";
            for (lVar8 = 2; lVar8 != 0; lVar8 = lVar8 + -1) {
              *local_558 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              local_558 = local_558 + 1;
            }
            goto LAB_180035872;
          }
        }
      }
      local_578 = local_578 + 1;
    }
    if (local_570 == 0) {
      local_578 = 0;
      while( true ) {
        local_4b0 = (ulonglong)local_578;
        uVar5 = FUN_180032940(local_4d0);
        if (uVar5 <= local_4b0) break;
        lVar8 = FUN_180032910(local_4d0,(ulonglong)local_578);
        local_56c = local_56c + *(int *)(lVar8 + 4);
        local_578 = local_578 + 1;
      }
      local_578 = 0;
      while( true ) {
        local_4a8 = (ulonglong)local_578;
        uVar5 = FUN_180032940(local_4d0);
        if (uVar5 <= local_4a8) break;
        local_480 = local_458;
        local_538 = local_480;
        local_4e8 = param_2;
        do {
          cVar1 = *local_4e8;
          *local_538 = cVar1;
          local_4e8 = local_4e8 + 1;
          local_538 = local_538 + 1;
        } while (cVar1 != '\0');
        local_550 = &cStack_459;
        do {
          local_550 = local_550 + 1;
        } while (*local_550 != '\0');
        pcVar10 = "\\";
        for (lVar8 = 2; lVar8 != 0; lVar8 = lVar8 + -1) {
          *local_550 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          local_550 = local_550 + 1;
        }
        lVar8 = FUN_180032910(local_4d0,(ulonglong)local_578);
        local_548 = &cStack_459;
        do {
          local_548 = local_548 + 1;
        } while (*local_548 != '\0');
        lVar9 = 0;
        do {
          cVar1 = *(char *)(lVar8 + 8 + lVar9);
          local_548[lVar9] = cVar1;
          lVar9 = lVar9 + 1;
        } while (cVar1 != '\0');
        lVar8 = FUN_180032910(local_4d0,(ulonglong)local_578);
        iVar3 = FUN_180033330(param_1,(char *)(lVar8 + 8),local_458,param_4,param_5,local_56c,
                              local_4d8);
        if (iVar3 != 0) {
          local_4e0 = (longlong *)FUN_180007470();
          if (local_4e0 != (longlong *)0x0) {
            (**(code **)(*local_4e0 + 0x30))(local_4e0,1,0x12400,L"%S %S %d failed.\n");
          }
          local_570 = -3;
          break;
        }
        local_578 = local_578 + 1;
      }
      if (local_570 == 0) {
        pwVar11 = local_238;
        for (lVar8 = 0x208; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(undefined1 *)pwVar11 = 0;
          pwVar11 = (wchar_t *)((longlong)pwVar11 + 1);
        }
        FUN_1800033d0(local_238,0x104,&DAT_180052f78,param_2);
        local_4a0 = local_478;
        pbVar7 = basic_string<>(local_4a0,local_238);
        FUN_1800012f0((ulonglong)param_3,pbVar7,param_4,param_5,0x5e);
      }
    }
  }
  else {
    local_508 = (longlong *)FUN_180007470();
    if (local_508 != (longlong *)0x0) {
      (**(code **)(*local_508 + 0x30))(local_508,1,0x12400,L"%S %S %d failed.\n");
    }
    local_570 = -1;
  }
  FUN_18000abf0(local_4d0);
  FUN_18000abf0(local_528);
  local_510 = local_570;
  FUN_1800353a0(local_4d0);
  FUN_1800353a0(local_528);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_5b8);
  return;
}




void FUN_180035c90(undefined1 *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char *local_a0;
  undefined4 local_98;
  int local_88;
  int local_84;
  longlong local_80;
  longlong *local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_50 [12];
  ulonglong local_20;
  
  local_20 = DAT_18005e010 ^ (ulonglong)auStack_c8;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  piVar4 = &local_70;
  for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)piVar4 = 0;
    piVar4 = (int *)((longlong)piVar4 + 1);
  }
  local_50[0] = 0x1f;
  local_50[1] = 0x1c;
  local_50[2] = 0x1f;
  local_50[3] = 0x1e;
  local_50[4] = 0x1f;
  local_50[5] = 0x1e;
  local_50[6] = 0x1f;
  local_50[7] = 0x1f;
  local_50[8] = 0x1e;
  local_50[9] = 0x1f;
  local_50[10] = 0x1e;
  local_50[0xb] = 0x1f;
  piVar4 = &local_70;
  for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = (int *)((longlong)piVar4 + 1);
  }
  if (local_70 < 0x46) {
    local_78 = (longlong *)FUN_180007470();
    if (local_78 != (longlong *)0x0) {
      local_98 = 0x305;
      local_a0 = "IsoTimeToSecond";
      local_a8 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
      (**(code **)(*local_78 + 0x30))(local_78,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    iVar1 = local_70 + -0x46;
    local_88 = iVar1 * 0x16d;
    if (2 < iVar1) {
      local_88 = local_88 + ((int)(local_70 + -0x45 + (local_70 + -0x45 >> 0x1f & 3U)) >> 2);
    }
    for (local_84 = 1; local_84 < local_6c; local_84 = local_84 + 1) {
      local_88 = local_88 + local_50[local_84 + -1];
    }
    uVar3 = local_70 + -0x44 >> 0x1f & 3;
    if (((local_70 + -0x44 + uVar3 & 3) == uVar3) && (2 < local_6c)) {
      local_88 = local_88 + 1;
    }
    local_88 = local_88 + -1 + local_68;
    local_80 = (longlong)(((local_88 * 0x18 + local_64) * 0x3c + local_60) * 0x3c + local_5c);
    if ((local_58 & 0x80) != 0) {
      local_58 = local_58 | 0xffffff00;
    }
    local_70 = iVar1;
    if ((-0x35 < (int)local_58) && ((int)local_58 < 0x35)) {
      local_80 = local_80 - (int)(local_58 * 900);
    }
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_180035f10(LPCWSTR param_1,char *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_98 [32];
  char *local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38 [8];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_98;
  local_40 = 0;
  local_58 = (undefined4 *)0x0;
  piVar3 = local_38;
  for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((longlong)piVar3 + 1);
  }
  local_58 = FUN_18002ff10(param_1,param_2);
  if (local_58 == (undefined4 *)0x0) {
    local_50 = (longlong *)FUN_180007470();
    if (local_50 != (longlong *)0x0) {
      local_68 = 0x33f;
      local_70 = "GetIsoFileTime";
      local_78 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
      (**(code **)(*local_50 + 0x30))(local_50,1,0x12400,L"%S %S %d failed.\n");
    }
  }
  else {
    uVar1 = FUN_180031020((longlong)local_58,local_38);
    if ((int)uVar1 == 0) {
      local_40 = FUN_180035c90((undefined1 *)local_38);
    }
    else {
      local_48 = (longlong *)FUN_180007470();
      if (local_48 != (longlong *)0x0) {
        local_68 = 0x345;
        local_70 = "GetIsoFileTime";
        local_78 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\isofs.cpp";
        (**(code **)(*local_48 + 0x30))(local_48,1,0x12400,L"%S %S %d failed.\n");
      }
    }
  }
  if (local_58 != (undefined4 *)0x0) {
    FUN_180030a80(local_58);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_98);
  return;
}




void FUN_1800360a0(char *param_1,undefined2 *param_2)

{
  errno_t eVar1;
  int iVar2;
  size_t sVar3;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined4 local_174;
  FILE *local_170;
  short local_168 [30];
  int local_12c;
  int local_128;
  short local_124;
  ushort local_112;
  short local_110;
  undefined2 local_e8;
  undefined2 local_e6;
  short local_cc;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_198;
  if ((param_1 == (char *)0x0) || (param_2 == (undefined2 *)0x0)) goto LAB_1800362db;
  local_174 = 0;
  eVar1 = fopen_s(&local_170,param_1,"rb");
  if (eVar1 != 0) goto LAB_1800362db;
  sVar3 = fread(local_168,1,0x40,local_170);
  if ((((sVar3 == 0x40) && (local_168[0] == 0x5a4d)) &&
      (iVar2 = _fseeki64(local_170,(longlong)local_12c,0), iVar2 == 0)) &&
     ((sVar3 = fread(&local_128,1,0x108,local_170), sVar3 == 0x108 && (local_128 == 0x4550)))) {
    if (local_110 == 0x20b) {
      *param_2 = 0x40;
    }
    else {
      if (local_110 != 0x10b) goto LAB_1800362cc;
      *param_2 = 0x20;
    }
    if ((local_112 & 0x100) == 0) {
      if ((local_124 == -0x799c) || (local_124 == 0x200)) {
        *(undefined1 *)(param_2 + 1) = 0x40;
        goto LAB_18003625d;
      }
    }
    else if (local_124 == 0x14c) {
      *(undefined1 *)(param_2 + 1) = 0x20;
LAB_18003625d:
      param_2[2] = local_124;
      param_2[3] = local_e8;
      param_2[4] = local_e6;
      local_178 = (uint)(local_cc == 1);
      *(uint *)(param_2 + 6) = local_178;
      local_174 = 1;
    }
  }
LAB_1800362cc:
  fclose(local_170);
LAB_1800362db:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_198);
  return;
}




void FUN_180036300(undefined8 param_1)

{
  FUN_180036330(param_1);
  return;
}




void FUN_180036330(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1800025b0(param_1);
  plVar1 = (longlong *)FUN_18000b560(param_1);
  if (*plVar1 != 0) {
    FUN_18000b540(param_1);
    FUN_18000b560(param_1);
    FUN_18000b690(param_1);
    lVar2 = FUN_1800330b0(param_1);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    uVar4 = FUN_180001f40(param_1);
    FUN_180033070(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_18000b560(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000b540(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_18000b860(param_1);
    *puVar3 = 0;
  }
  return;
}




undefined4 * FUN_180036400(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  return param_1;
}




void FUN_180036450(int *param_1)

{
  if (*param_1 != 0) {
    FUN_1800365e0(param_1);
  }
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  return;
}




undefined4 FUN_1800364b0(int *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined4 local_44;
  int *local_40;
  int *local_38;
  short *local_30;
  short *local_28;
  
  local_44 = 0;
  if (*param_1 != 1) {
    if ((param_2 == (short *)0x0) || (param_3 == (short *)0x0)) {
      local_44 = 0x281240a;
    }
    else {
      local_40 = param_1 + 1;
      local_30 = param_3;
      do {
        sVar1 = *local_30;
        *(short *)local_40 = sVar1;
        local_30 = local_30 + 1;
        local_40 = (int *)((longlong)local_40 + 2);
      } while (sVar1 != 0);
      local_38 = param_1 + 0x83;
      local_28 = param_2;
      do {
        sVar1 = *local_28;
        *(short *)local_38 = sVar1;
        local_28 = local_28 + 1;
        local_38 = (int *)((longlong)local_38 + 2);
      } while (sVar1 != 0);
      *param_1 = 1;
    }
  }
  return local_44;
}




undefined4 FUN_1800365e0(int *param_1)

{
  if (*param_1 == 1) {
    *param_1 = 0;
  }
  return 0;
}




uint FUN_180036620(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint local_18;
  
  bVar2 = false;
  bVar1 = false;
  if (*param_1 == 0) {
    local_18 = 0x4f12405;
  }
  else {
    local_18 = FUN_180036aa0(param_1,L"SeBackupPrivilege",1);
    if (((((local_18 & 0xfff) == 0) &&
         (local_18 = FUN_180036aa0(param_1,L"SeRestorePrivilege",1), (local_18 & 0xfff) == 0)) &&
        (local_18 = FUN_180036aa0(param_1,L"SeTakeOwnershipPrivilege",1), (local_18 & 0xfff) == 0))
       && (local_18 = FUN_180036870(param_1,(LPCWSTR)(param_1 + 0x83),L"ESDESBCD"),
          (local_18 & 0xfff) == 0)) {
      bVar1 = true;
      local_18 = FUN_180036870(param_1,(LPCWSTR)(param_1 + 1),L"ESSRCBCD");
      if ((local_18 & 0xfff) == 0) {
        bVar2 = true;
        local_18 = FUN_180038360(param_1,L"ESDESBCD",L"Objects",L"ESSRCBCD",L"Objects");
        if (((local_18 & 0xfff) == 0) &&
           (local_18 = FUN_180036990(param_1,L"ESDESBCD"), (local_18 & 0xfff) == 0)) {
          bVar1 = false;
          local_18 = FUN_180036990(param_1,L"ESSRCBCD");
          if ((local_18 & 0xfff) == 0) {
            bVar2 = false;
          }
        }
      }
    }
  }
  if (bVar1) {
    FUN_180036990(param_1,L"ESDESBCD");
  }
  if (bVar2) {
    FUN_180036990(param_1,L"ESSRCBCD");
  }
  FUN_180036aa0(param_1,L"SeTakeOwnershipPrivilege",0);
  FUN_180036aa0(param_1,L"SeRestorePrivilege",0);
  FUN_180036aa0(param_1,L"SeBackupPrivilege",0);
  return local_18;
}




undefined4 FUN_180036870(undefined8 param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  DWORD dwMessageId;
  undefined4 local_24;
  HLOCAL local_20;
  longlong *local_18;
  
  local_24 = 0;
  dwMessageId = RegLoadKeyW((HKEY)0xffffffff80000002,param_3,param_2);
  if (dwMessageId != 0) {
    local_20 = (HLOCAL)0x0;
    FormatMessageW(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPWSTR)&local_20,0,(va_list *)0x0);
    if (local_20 != (HLOCAL)0x0) {
      local_18 = (longlong *)FUN_180007470();
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x30))
                  (local_18,1,0x12400,L"Boot:%S %d failed:%s\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0xaf,local_20);
      }
      LocalFree(local_20);
    }
    local_24 = 0xb312501;
  }
  return local_24;
}




undefined4 FUN_180036990(undefined8 param_1,LPCWSTR param_2)

{
  DWORD dwMessageId;
  undefined4 local_24;
  HLOCAL local_20;
  longlong *local_18;
  
  local_24 = 0;
  dwMessageId = RegUnLoadKeyW((HKEY)0xffffffff80000002,param_2);
  if (dwMessageId != 0) {
    local_20 = (HLOCAL)0x0;
    FormatMessageW(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPWSTR)&local_20,0,(va_list *)0x0);
    if (local_20 != (HLOCAL)0x0) {
      local_18 = (longlong *)FUN_180007470();
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x30))
                  (local_18,1,0x12400,L"Boot:%S %d failed:%s\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0xd2,local_20);
      }
      LocalFree(local_20);
    }
    local_24 = 0xd612501;
  }
  return local_24;
}




void FUN_180036aa0(undefined8 param_1,LPCWSTR param_2,int param_3)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  longlong lVar2;
  _TOKEN_PRIVILEGES *p_Var3;
  LUID *pLVar4;
  undefined1 auStackY_b8 [32];
  HANDLE local_70;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  LUID local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  _TOKEN_PRIVILEGES local_28;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_b8;
  local_68 = 0;
  local_70 = (HANDLE)0x0;
  do {
    p_Var3 = &local_28;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&p_Var3->PrivilegeCount = 0;
      p_Var3 = (_TOKEN_PRIVILEGES *)((longlong)&p_Var3->PrivilegeCount + 1);
    }
    pLVar4 = &local_48;
    for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&pLVar4->LowPart = 0;
      pLVar4 = (LUID *)((longlong)&pLVar4->LowPart + 1);
    }
    ProcessHandle = GetCurrentProcess();
    BVar1 = OpenProcessToken(ProcessHandle,0x28,&local_70);
    if (BVar1 == 0) {
      local_60 = (longlong *)FUN_180007470();
      if (local_60 != (longlong *)0x0) {
        GetLastError();
        local_40 = *local_60;
        (**(code **)(local_40 + 0x30))
                  (local_60,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
      }
      break;
    }
    BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,param_2,&local_48);
    if (BVar1 == 0) {
      local_58 = (longlong *)FUN_180007470();
      if (local_58 != (longlong *)0x0) {
        GetLastError();
        local_38 = *local_58;
        (**(code **)(local_38 + 0x30))
                  (local_58,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
      }
      break;
    }
    local_28.PrivilegeCount = 1;
    local_28.Privileges[0].Luid = local_48;
    if (param_3 == 0) {
      local_28.Privileges[0].Attributes = 0;
    }
    else {
      local_28.Privileges[0].Attributes = 2;
    }
    BVar1 = AdjustTokenPrivileges(local_70,0,&local_28,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
    if (BVar1 == 0) {
      local_50 = (longlong *)FUN_180007470();
      if (local_50 != (longlong *)0x0) {
        GetLastError();
        local_30 = *local_50;
        (**(code **)(local_30 + 0x30))
                  (local_50,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
      }
      break;
    }
  } while (local_68 != 0);
  if (local_70 != (HANDLE)0x0) {
    CloseHandle(local_70);
    local_70 = (HANDLE)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_b8);
  return;
}




void FUN_180036db0(undefined8 param_1,HKEY param_2,HKEY param_3)

{
  LSTATUS LVar1;
  int iVar2;
  HANDLE pvVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_348 [32];
  int local_2f8;
  DWORD local_2f4;
  DWORD local_2f0 [2];
  LPBYTE local_2e8;
  HKEY local_2e0;
  HKEY local_2d8;
  DWORD local_2d0;
  int local_2cc;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong local_270;
  longlong local_268;
  SIZE_T local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_348;
  local_2e8 = (LPBYTE)0x0;
  local_2e0 = (HKEY)0x0;
  local_2d8 = (HKEY)0x0;
  local_2cc = 0;
  do {
    local_2d0 = 0;
    local_2f0[0] = 0;
    local_2f0[1] = 0x104;
    if ((param_2 == (HKEY)0x0) || (param_3 == (HKEY)0x0)) {
      local_2c8 = (longlong *)FUN_180007470();
      if (local_2c8 != (longlong *)0x0) {
        (**(code **)(*local_2c8 + 0x30))(local_2c8,1,0x12400,L"Boot:%S %d u32Result=0x%x\n");
      }
      break;
    }
    local_2f4 = 0;
    while( true ) {
      pWVar5 = local_228;
      for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)pWVar5 = 0;
        pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
      }
      local_2f0[1] = 0x104;
      LVar1 = RegEnumValueW(param_2,local_2f4,local_228,local_2f0 + 1,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,local_2f0);
      if (LVar1 == 0x103) {
        local_2c0 = (longlong *)FUN_180007470();
        if (local_2c0 != (longlong *)0x0) {
          GetLastError();
          local_270 = *local_2c0;
          (**(code **)(local_270 + 0x30))
                    (local_2c0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
        local_2f8 = 0;
        goto LAB_1800372f7;
      }
      if ((LVar1 != 0) || (local_2f0[0] == 0)) {
        local_2b8 = (longlong *)FUN_180007470();
        if (local_2b8 != (longlong *)0x0) {
          GetLastError();
          local_268 = *local_2b8;
          (**(code **)(local_268 + 0x30))
                    (local_2b8,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
        local_2f8 = 0x15712502;
        goto LAB_1800372f7;
      }
      if (local_2e8 != (LPBYTE)0x0) {
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,local_2e8);
        local_2e8 = (LPBYTE)0x0;
      }
      local_260 = (ulonglong)(local_2f0[0] + 1) << 1;
      pvVar3 = GetProcessHeap();
      local_2e8 = (LPBYTE)HeapAlloc(pvVar3,8,local_260);
      if (local_2e8 == (LPBYTE)0x0) {
        local_2f8 = 0x16412408;
        local_2b0 = (longlong *)FUN_180007470();
        if (local_2b0 != (longlong *)0x0) {
          GetLastError();
          local_258 = *local_2b0;
          (**(code **)(local_258 + 0x30))
                    (local_2b0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
        goto LAB_1800372f7;
      }
      pWVar5 = local_228;
      for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)pWVar5 = 0;
        pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
      }
      local_2f0[1] = 0x104;
      LVar1 = RegEnumValueW(param_2,local_2f4,local_228,local_2f0 + 1,(LPDWORD)0x0,&local_2d0,
                            local_2e8,local_2f0);
      if (LVar1 != 0) {
        local_2a8 = (longlong *)FUN_180007470();
        if (local_2a8 != (longlong *)0x0) {
          (**(code **)(*local_2a8 + 0x30))(local_2a8,1,0x12400,L"Boot:%S %d u32Result=0x%x\n");
        }
        local_2f8 = 0x17912502;
        goto LAB_1800372f7;
      }
      LVar1 = RegSetValueExW(param_3,local_228,0,local_2d0,local_2e8,local_2f0[0]);
      if (LVar1 != 0) break;
      local_2f4 = local_2f4 + 1;
    }
    local_2a0 = (longlong *)FUN_180007470();
    if (local_2a0 != (longlong *)0x0) {
      (**(code **)(*local_2a0 + 0x30))(local_2a0,1,0x12400,L"Boot:%S %d u32Result=0x%x\n");
    }
    local_2f8 = 0x18b12503;
LAB_1800372f7:
    if (local_2f8 != 0) break;
    local_2f0[0] = 0;
    local_2f4 = 0;
    while( true ) {
      pWVar5 = local_228;
      for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)pWVar5 = 0;
        pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
      }
      local_2f0[1] = 0x104;
      LVar1 = RegEnumKeyExW(param_2,local_2f4,local_228,local_2f0 + 1,(LPDWORD)0x0,(LPWSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      if (LVar1 == 0x103) {
        local_298 = (longlong *)FUN_180007470();
        if (local_298 != (longlong *)0x0) {
          GetLastError();
          local_250 = *local_298;
          (**(code **)(local_250 + 0x30))
                    (local_298,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
        goto LAB_18003777c;
      }
      if (LVar1 != 0) {
        local_290 = (longlong *)FUN_180007470();
        if (local_290 != (longlong *)0x0) {
          GetLastError();
          local_248 = *local_290;
          (**(code **)(local_248 + 0x30))
                    (local_290,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
        goto LAB_18003777c;
      }
      if (local_2e0 != (HKEY)0x0) {
        RegCloseKey(local_2e0);
        local_2e0 = (HKEY)0x0;
      }
      LVar1 = RegOpenKeyExW(param_2,local_228,0,0x20019,&local_2e0);
      if (LVar1 != 0) {
        local_288 = (longlong *)FUN_180007470();
        if (local_288 != (longlong *)0x0) {
          GetLastError();
          local_240 = *local_288;
          (**(code **)(local_240 + 0x30))
                    (local_288,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
        goto LAB_18003777c;
      }
      if (local_2d8 != (HKEY)0x0) {
        RegCloseKey(local_2d8);
        local_2d8 = (HKEY)0x0;
      }
      LVar1 = RegCreateKeyExW(param_3,local_228,0,(LPWSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                              &local_2d8,(LPDWORD)0x0);
      if (LVar1 != 0) {
        local_280 = (longlong *)FUN_180007470();
        if (local_280 != (longlong *)0x0) {
          GetLastError();
          local_238 = *local_280;
          (**(code **)(local_238 + 0x30))
                    (local_280,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d,destpath=%s\n")
          ;
        }
        goto LAB_18003777c;
      }
      iVar2 = FUN_180036db0(param_1,local_2e0,local_2d8);
      if (iVar2 != 0) break;
      local_2f4 = local_2f4 + 1;
    }
    local_278 = (longlong *)FUN_180007470();
    if (local_278 != (longlong *)0x0) {
      GetLastError();
      local_230 = *local_278;
      (**(code **)(local_230 + 0x30))
                (local_278,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d,destpath=%s\n");
    }
LAB_18003777c:
  } while (local_2cc != 0);
  if (local_2e8 != (LPBYTE)0x0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,local_2e8);
    local_2e8 = (LPBYTE)0x0;
  }
  if (local_2e0 != (HKEY)0x0) {
    RegCloseKey(local_2e0);
    local_2e0 = (HKEY)0x0;
  }
  if (local_2d8 != (HKEY)0x0) {
    RegCloseKey(local_2d8);
    local_2d8 = (HKEY)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_348);
  return;
}




int FUN_180037810(undefined8 param_1,HKEY param_2,LPCWSTR param_3,HKEY param_4,LPCWSTR param_5)

{
  DWORD DVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  LPCWSTR pObjectName;
  longlong lVar4;
  _EXPLICIT_ACCESS_W *p_Var5;
  int local_138;
  PACL local_120;
  PACL local_118;
  HLOCAL local_110;
  HLOCAL local_108;
  PSECURITY_DESCRIPTOR local_100;
  HKEY local_f8;
  HKEY local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  _EXPLICIT_ACCESS_W local_40;
  
  local_f0 = (HKEY)0x0;
  local_f8 = (HKEY)0x0;
  p_Var5 = &local_40;
  for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&p_Var5->grfAccessPermissions = 0;
    p_Var5 = (_EXPLICIT_ACCESS_W *)((longlong)&p_Var5->grfAccessPermissions + 1);
  }
  local_118 = (PACL)0x0;
  local_120 = (PACL)0x0;
  local_100 = (HLOCAL)0x0;
  pvVar3 = GetProcessHeap();
  pObjectName = (LPCWSTR)HeapAlloc(pvVar3,8,0x208);
  if (pObjectName == (LPCWSTR)0x0) {
    local_138 = 0x21612408;
    local_e8 = (longlong *)FUN_180007470();
    if (local_e8 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_70 = *local_e8;
      (**(code **)(local_70 + 0x30))
                (local_e8,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x217,0x21612408,DVar1);
    }
  }
  else {
    FUN_1800033d0(pObjectName,0x104,L"MACHINE\\ESDESBCD\\%s",param_3);
    DVar1 = SetEntriesInAclW(0,(PEXPLICIT_ACCESS_W)0x0,(PACL)0x0,&local_118);
    if (DVar1 == 0) {
      DVar1 = SetEntriesInAclW(0,(PEXPLICIT_ACCESS_W)0x0,(PACL)0x0,&local_120);
      if (DVar1 == 0) {
        DVar1 = GetNamedSecurityInfoW
                          (pObjectName,SE_REGISTRY_KEY,4,(PSID *)0x0,(PSID *)0x0,&local_118,
                           (PACL *)0x0,&local_100);
        if (DVar1 == 0) {
          p_Var5 = &local_40;
          for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined1 *)&p_Var5->grfAccessPermissions = 0;
            p_Var5 = (_EXPLICIT_ACCESS_W *)((longlong)&p_Var5->grfAccessPermissions + 1);
          }
          BuildExplicitAccessWithNameW(&local_40,L"Everyone",0x10000000,SET_ACCESS,3);
          DVar1 = SetEntriesInAclW(1,&local_40,local_118,&local_120);
          if (DVar1 == 0) {
            DVar1 = SetNamedSecurityInfoW
                              (pObjectName,SE_REGISTRY_KEY,4,(PSID)0x0,(PSID)0x0,local_120,(PACL)0x0
                              );
            if (DVar1 == 0) {
              DVar1 = RegOpenKeyExW(param_4,param_5,0,0x20019,&local_f0);
              if (DVar1 == 0) {
                DVar1 = RegOpenKeyExW(param_2,param_3,0,0xf003f,&local_f8);
                if (DVar1 == 0) {
                  local_138 = FUN_180036db0(param_1,local_f0,local_f8);
                  local_80 = (longlong *)FUN_180007470();
                  if (local_80 != (longlong *)0x0) {
                    (**(code **)(*local_80 + 0x30))
                              (local_80,1,0x12400,
                               L"Boot:%S %d CopyPERegeditHardwareKeyToDestRegedit 004 u32Result=0x%x\n"
                               ,"k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x2a1,
                               local_138);
                  }
                  if ((local_138 != 0) &&
                     (local_78 = (longlong *)FUN_180007470(), local_78 != (longlong *)0x0)) {
                    (**(code **)(*local_78 + 0x30))
                              (local_78,1,0x12400,L"Boot:%S %d u32Result=0x%x\n",
                               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x2a4,
                               local_138);
                  }
                }
                else {
                  local_108 = (HLOCAL)0x0;
                  FormatMessageW(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPWSTR)&local_108,0,(va_list *)0x0
                                );
                  if (local_108 != (HLOCAL)0x0) {
                    local_88 = (longlong *)FUN_180007470();
                    if (local_88 != (longlong *)0x0) {
                      (**(code **)(*local_88 + 0x30))
                                (local_88,1,0x12400,L"Boot:%S %d failed:%s\n",
                                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x298,
                                 local_108);
                    }
                    LocalFree(local_108);
                  }
                  local_138 = 0x29c12501;
                }
              }
              else {
                local_110 = (HLOCAL)0x0;
                FormatMessageW(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPWSTR)&local_110,0,(va_list *)0x0);
                if (local_110 != (HLOCAL)0x0) {
                  local_90 = (longlong *)FUN_180007470();
                  if (local_90 != (longlong *)0x0) {
                    (**(code **)(*local_90 + 0x30))
                              (local_90,1,0x12400,L"Boot:%S %d failed:%s\n",
                               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x27f,
                               local_110);
                  }
                  LocalFree(local_110);
                }
                local_138 = 0x28312501;
              }
            }
            else {
              local_a0 = (longlong *)FUN_180007470();
              if (local_a0 != (longlong *)0x0) {
                DVar2 = GetLastError();
                local_48 = *local_a0;
                (**(code **)(local_48 + 0x30))
                          (local_a0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                           "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x268,DVar1,DVar2)
                ;
              }
              local_138 = 0x26912500;
              local_98 = (longlong *)FUN_180007470();
              if (local_98 != (longlong *)0x0) {
                (**(code **)(*local_98 + 0x30))
                          (local_98,1,0x12400,L"Boot:%S %d u32Result=0x%x\n",
                           "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x26a,0x26912500);
              }
            }
          }
          else {
            local_b0 = (longlong *)FUN_180007470();
            if (local_b0 != (longlong *)0x0) {
              DVar2 = GetLastError();
              local_50 = *local_b0;
              (**(code **)(local_50 + 0x30))
                        (local_b0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",599,DVar1,DVar2);
            }
            local_138 = 0x25812500;
            local_a8 = (longlong *)FUN_180007470();
            if (local_a8 != (longlong *)0x0) {
              (**(code **)(*local_a8 + 0x30))
                        (local_a8,1,0x12400,L"Boot:%S %d u32Result=0x%x\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x259,0x25812500);
            }
          }
        }
        else {
          local_c0 = (longlong *)FUN_180007470();
          if (local_c0 != (longlong *)0x0) {
            DVar2 = GetLastError();
            local_58 = *local_c0;
            (**(code **)(local_58 + 0x30))
                      (local_c0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x242,DVar1,DVar2);
          }
          local_138 = 0x24312500;
          local_b8 = (longlong *)FUN_180007470();
          if (local_b8 != (longlong *)0x0) {
            (**(code **)(*local_b8 + 0x30))
                      (local_b8,1,0x12400,L"Boot:%S %d u32Result=0x%x\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x244,0x24312500);
          }
        }
      }
      else {
        local_d0 = (longlong *)FUN_180007470();
        if (local_d0 != (longlong *)0x0) {
          DVar2 = GetLastError();
          local_60 = *local_d0;
          (**(code **)(local_60 + 0x30))
                    (local_d0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x22f,DVar1,DVar2);
        }
        local_138 = 0x23012500;
        local_c8 = (longlong *)FUN_180007470();
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 0x30))
                    (local_c8,1,0x12400,L"Boot:%S %d u32Result=0x%x\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x231,0x23012500);
        }
      }
    }
    else {
      local_e0 = (longlong *)FUN_180007470();
      if (local_e0 != (longlong *)0x0) {
        DVar2 = GetLastError();
        local_68 = *local_e0;
        (**(code **)(local_68 + 0x30))
                  (local_e0,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x226,DVar1,DVar2);
      }
      local_138 = 0x22712500;
      local_d8 = (longlong *)FUN_180007470();
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x30))
                  (local_d8,1,0x12400,L"Boot:%S %d u32Result=0x%x\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x228,0x22712500);
      }
    }
  }
  if (pObjectName != (LPCWSTR)0x0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,pObjectName);
  }
  if (local_100 != (HLOCAL)0x0) {
    LocalFree(local_100);
    local_100 = (HLOCAL)0x0;
  }
  if (local_120 != (PACL)0x0) {
    LocalFree(local_120);
    local_120 = (PACL)0x0;
  }
  if (local_118 != (PACL)0x0) {
    LocalFree(local_118);
    local_118 = (PACL)0x0;
  }
  if (local_f8 != (HKEY)0x0) {
    RegCloseKey(local_f8);
  }
  if (local_f0 != (HKEY)0x0) {
    RegCloseKey(local_f0);
  }
  return local_138;
}




uint FUN_180038360(undefined8 param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4,
                  LPCWSTR param_5)

{
  DWORD DVar1;
  uint local_44;
  HKEY local_40;
  HLOCAL local_38;
  HLOCAL local_30;
  HKEY local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_28 = (HKEY)0x0;
  local_40 = (HKEY)0x0;
  DVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,param_4,0,0x2001f,&local_28);
  if (DVar1 == 0) {
    DVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,param_2,0,0x80000,&local_40);
    if (DVar1 == 0) {
      local_44 = FUN_180037810(param_1,local_40,param_3,local_28,param_5);
    }
    else {
      local_30 = (HLOCAL)0x0;
      FormatMessageW(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPWSTR)&local_30,0,(va_list *)0x0);
      if (local_30 != (HLOCAL)0x0) {
        local_18 = (longlong *)FUN_180007470();
        if (local_18 != (longlong *)0x0) {
          (**(code **)(*local_18 + 0x30))
                    (local_18,1,0x12400,L"Boot:%S %d failed:%s\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x324,local_30);
        }
        LocalFree(local_30);
      }
      local_44 = 0x32812501;
    }
  }
  else {
    local_38 = (HLOCAL)0x0;
    FormatMessageW(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPWSTR)&local_38,0,(va_list *)0x0);
    if (local_38 != (HLOCAL)0x0) {
      local_20 = (longlong *)FUN_180007470();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x30))
                  (local_20,1,0x12400,L"Boot:%S %d failed:%s\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\mergebcd.cpp",0x30b,local_38);
      }
      LocalFree(local_38);
    }
    local_44 = 0x30f12501;
  }
  if (local_40 != (HKEY)0x0) {
    RegCloseKey(local_40);
    local_40 = (HKEY)0x0;
  }
  if (local_28 != (HKEY)0x0) {
    RegCloseKey(local_28);
  }
  return local_44;
}




void FUN_180038610(LPCWSTR param_1,int param_2)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  longlong lVar2;
  _TOKEN_PRIVILEGES *p_Var3;
  LUID *pLVar4;
  undefined1 auStackY_68 [32];
  HANDLE local_30;
  LUID local_28;
  _TOKEN_PRIVILEGES local_20;
  ulonglong local_10;
  
  local_10 = DAT_18005e010 ^ (ulonglong)auStackY_68;
  local_30 = (HANDLE)0x0;
  p_Var3 = &local_20;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->PrivilegeCount = 0;
    p_Var3 = (_TOKEN_PRIVILEGES *)((longlong)&p_Var3->PrivilegeCount + 1);
  }
  pLVar4 = &local_28;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pLVar4->LowPart = 0;
    pLVar4 = (LUID *)((longlong)&pLVar4->LowPart + 1);
  }
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,0x28,&local_30);
  if ((BVar1 != 0) && (BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,param_1,&local_28), BVar1 != 0)) {
    local_20.PrivilegeCount = 1;
    local_20.Privileges[0].Luid = local_28;
    if (param_2 == 0) {
      local_20.Privileges[0].Attributes = 0;
    }
    else {
      local_20.Privileges[0].Attributes = 2;
    }
    AdjustTokenPrivileges(local_30,0,&local_20,0,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
  }
  if (local_30 != (HANDLE)0x0) {
    CloseHandle(local_30);
    local_30 = (HANDLE)0x0;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_68);
  return;
}




undefined4 * FUN_180038790(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[0x105] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  return param_1;
}




void FUN_180038820(int *param_1)

{
  if (*param_1 != 0) {
    FUN_180038a10(param_1);
  }
  return;
}




uint FUN_180038850(undefined4 *param_1,short *param_2,undefined4 param_3,short *param_4)

{
  short sVar1;
  uint local_48;
  short *local_40;
  short *local_38;
  short *local_30;
  short *local_28;
  
  if ((param_2 == (short *)0x0) || (param_4 == (short *)0x0)) {
    local_48 = 0x1f12409;
  }
  else {
    local_48 = FUN_180038610(L"SeBackupPrivilege",1);
    if ((((local_48 & 0xfff) == 0) &&
        (local_48 = FUN_180038610(L"SeRestorePrivilege",1), (local_48 & 0xfff) == 0)) &&
       (local_48 = FUN_180038610(L"SeTakeOwnershipPrivilege",1), (local_48 & 0xfff) == 0)) {
      local_40 = (short *)(param_1 + 1);
      local_30 = param_2;
      do {
        sVar1 = *local_30;
        *local_40 = sVar1;
        local_30 = local_30 + 1;
        local_40 = local_40 + 1;
      } while (sVar1 != 0);
      local_38 = (short *)(param_1 + 0x83);
      local_28 = param_4;
      do {
        sVar1 = *local_28;
        *local_38 = sVar1;
        local_28 = local_28 + 1;
        local_38 = local_38 + 1;
      } while (sVar1 != 0);
      param_1[0x105] = param_3;
      FUN_180038af0((longlong)param_1,1);
      *param_1 = 1;
    }
  }
  return local_48;
}




undefined4 FUN_180038a10(int *param_1)

{
  if (*param_1 == 1) {
    FUN_180038af0((longlong)param_1,0);
    FUN_180038610(L"SeTakeOwnershipPrivilege",0);
    FUN_180038610(L"SeRestorePrivilege",0);
    FUN_180038610(L"SeBackupPrivilege",0);
    *param_1 = 0;
  }
  if (*(longlong *)(param_1 + 0x106) != 0) {
    LocalFree(*(HLOCAL *)(param_1 + 0x106));
    param_1[0x106] = 0;
    param_1[0x107] = 0;
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    LocalFree(*(HLOCAL *)(param_1 + 0x108));
    param_1[0x108] = 0;
    param_1[0x109] = 0;
  }
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  return 0;
}




void FUN_180038af0(longlong param_1,int param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 auStackY_d8 [32];
  PSID local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  _SID_IDENTIFIER_AUTHORITY local_20;
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_d8;
  local_48 = 0;
  local_70 = (PSID)0x0;
  local_20.Value[0] = '\0';
  local_20.Value[1] = '\0';
  local_20.Value[2] = '\0';
  local_20.Value[3] = '\0';
  local_20.Value[4] = '\0';
  local_20.Value[5] = '\x01';
  if (param_2 == 1) {
    BVar1 = AllocateAndInitializeSid(&local_20,'\x01',0,0,0,0,0,0,0,0,&local_70);
    if (BVar1 == 0) {
      local_68 = (longlong *)FUN_180007470();
      if (local_68 != (longlong *)0x0) {
        GetLastError();
        local_40 = *local_68;
        (**(code **)(local_40 + 0x30))(local_68,1,0x12400,L"Boot:%S %d nRes=0x%x,GetLastError=%d\n")
        ;
      }
    }
    else {
      DVar2 = GetNamedSecurityInfoW
                        ((LPCWSTR)(param_1 + 4),*(SE_OBJECT_TYPE *)(param_1 + 0x414),1,
                         (PSID *)(param_1 + 0x428),(PSID *)0x0,(PACL *)0x0,(PACL *)0x0,
                         (PSECURITY_DESCRIPTOR *)0x0);
      if (DVar2 == 0) {
        DVar2 = SetNamedSecurityInfoW
                          ((LPWSTR)(param_1 + 4),*(SE_OBJECT_TYPE *)(param_1 + 0x414),1,local_70,
                           (PSID)0x0,(PACL)0x0,(PACL)0x0);
        if ((DVar2 != 0) && (local_58 = (longlong *)FUN_180007470(), local_58 != (longlong *)0x0)) {
          GetLastError();
          local_30 = *local_58;
          (**(code **)(local_30 + 0x30))
                    (local_58,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
      }
      else {
        local_60 = (longlong *)FUN_180007470();
        if (local_60 != (longlong *)0x0) {
          GetLastError();
          local_38 = *local_60;
          (**(code **)(local_38 + 0x30))
                    (local_60,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
        }
      }
    }
  }
  else {
    DVar2 = SetNamedSecurityInfoW
                      ((LPWSTR)(param_1 + 4),*(SE_OBJECT_TYPE *)(param_1 + 0x414),1,
                       *(PSID *)(param_1 + 0x428),(PSID)0x0,(PACL)0x0,(PACL)0x0);
    if ((DVar2 != 0) && (local_50 = (longlong *)FUN_180007470(), local_50 != (longlong *)0x0)) {
      GetLastError();
      local_28 = *local_50;
      (**(code **)(local_28 + 0x30))
                (local_50,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n");
    }
  }
  if (local_70 != (PSID)0x0) {
    FreeSid(local_70);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_d8);
  return;
}




void FUN_180038f50(undefined8 param_1,PACL param_2)

{
  BOOL BVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  uint local_78;
  DWORD local_70;
  uint local_68;
  uint local_64;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  uint local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStack_a8;
  puVar3 = local_28;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (uint *)((longlong)puVar3 + 1);
  }
  local_48 = (char *)0x0;
  local_64 = 0;
  local_68 = 0;
  if (param_2 == (PACL)0x0) {
    local_68 = 0xca12409;
  }
  else {
    while( true ) {
      local_28[0] = 0;
      local_28[2] = 0;
      local_28[1] = 8;
      BVar1 = GetAclInformation(param_2,local_28,0xc,AclSizeInformation);
      if (BVar1 == 0) break;
      if (local_28[0] == 0) goto LAB_180039225;
      for (local_64 = 0; local_64 < local_28[0]; local_64 = local_64 + 1) {
        BVar1 = GetAce(param_2,local_64,&local_48);
        if (BVar1 == 0) {
          local_68 = 0xe512500;
          local_58 = (longlong *)FUN_180007470();
          if (local_58 != (longlong *)0x0) {
            local_70 = GetLastError();
            local_38 = *local_58;
            local_78 = local_68;
            local_80 = 0xe6;
            local_88 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp";
            (**(code **)(local_38 + 0x30))
                      (local_58,1,0x12400,L"Boot:%S %d nRes=0x%x,GetLastError=%d\n");
          }
          break;
        }
        if (*local_48 == '\x01') {
          BVar1 = DeleteAce(param_2,local_64);
          if (BVar1 == 0) {
            local_68 = 0xf112500;
            local_50 = (longlong *)FUN_180007470();
            if (local_50 != (longlong *)0x0) {
              local_70 = GetLastError();
              local_30 = *local_50;
              local_78 = local_68;
              local_80 = 0xf2;
              local_88 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp";
              (**(code **)(local_30 + 0x30))
                        (local_50,1,0x12400,L"Boot:%S %d nRes=0x%x,GetLastError=%d\n");
            }
          }
          break;
        }
      }
      if (((local_68 & 0xfff) != 0) || (local_28[0] <= local_64)) goto LAB_180039225;
    }
    local_68 = 0xd812500;
    local_60 = (longlong *)FUN_180007470();
    if (local_60 != (longlong *)0x0) {
      local_70 = GetLastError();
      local_40 = *local_60;
      local_78 = local_68;
      local_80 = 0xd9;
      local_88 = "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp";
      (**(code **)(local_40 + 0x30))(local_60,1,0x12400,L"Boot:%S %d nRes=0x%x,GetLastError=%d\n");
    }
  }
LAB_180039225:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}




undefined4 FUN_180039250(int *param_1)

{
  PEXPLICIT_ACCESS_W p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined4 local_a4;
  PACL local_a0;
  PEXPLICIT_ACCESS_W local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  PEXPLICIT_ACCESS_W local_58;
  PEXPLICIT_ACCESS_W local_50;
  longlong local_48;
  longlong local_40;
  LPCWSTR local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  PEXPLICIT_ACCESS_W local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_60 = 0;
  local_a4 = 0;
  local_98 = (PEXPLICIT_ACCESS_W)0x0;
  local_a0 = (PACL)0x0;
  if (*param_1 == 0) {
    local_a4 = 0x11112405;
  }
  else {
    if (*(longlong *)(param_1 + 0x106) != 0) {
      LocalFree(*(HLOCAL *)(param_1 + 0x106));
      param_1[0x106] = 0;
      param_1[0x107] = 0;
    }
    if (*(longlong *)(param_1 + 0x108) != 0) {
      LocalFree(*(HLOCAL *)(param_1 + 0x108));
      param_1[0x108] = 0;
      param_1[0x109] = 0;
    }
    local_98 = (PEXPLICIT_ACCESS_W)operator_new(0x30);
    local_58 = local_98;
    local_50 = local_98;
    DVar2 = SetEntriesInAclW(0,(PEXPLICIT_ACCESS_W)0x0,(PACL)0x0,(PACL *)(param_1 + 0x108));
    if (DVar2 == 0) {
      DVar2 = SetEntriesInAclW(0,(PEXPLICIT_ACCESS_W)0x0,(PACL)0x0,&local_a0);
      if (DVar2 == 0) {
        local_38 = (LPCWSTR)(param_1 + 1);
        DVar2 = GetNamedSecurityInfoW
                          (local_38,param_1[0x105],4,(PSID *)0x0,(PSID *)0x0,
                           (PACL *)(param_1 + 0x108),(PACL *)0x0,
                           (PSECURITY_DESCRIPTOR *)(param_1 + 0x106));
        if (DVar2 == 0) {
          p_Var1 = local_98;
          for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined1 *)&p_Var1->grfAccessPermissions = 0;
            p_Var1 = (PEXPLICIT_ACCESS_W)((longlong)&p_Var1->grfAccessPermissions + 1);
          }
          BuildExplicitAccessWithNameW(local_98,(LPWSTR)(param_1 + 0x83),0x10000000,SET_ACCESS,3);
          DVar2 = SetEntriesInAclW(1,local_98,*(PACL *)(param_1 + 0x108),&local_a0);
          if (DVar2 == 0) {
            FUN_180038f50(param_1,local_a0);
            DVar2 = SetNamedSecurityInfoW
                              ((LPWSTR)(param_1 + 1),param_1[0x105],4,(PSID)0x0,(PSID)0x0,local_a0,
                               (PACL)0x0);
            if (DVar2 != 0) {
              local_68 = (longlong *)FUN_180007470();
              if (local_68 != (longlong *)0x0) {
                DVar3 = GetLastError();
                local_20 = *local_68;
                (**(code **)(local_20 + 0x30))
                          (local_68,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                           "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x171,DVar2,
                           DVar3);
              }
              local_a4 = 0x17212500;
            }
          }
          else {
            local_70 = (longlong *)FUN_180007470();
            if (local_70 != (longlong *)0x0) {
              DVar3 = GetLastError();
              local_28 = *local_70;
              (**(code **)(local_28 + 0x30))
                        (local_70,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x15d,DVar2,DVar3)
              ;
            }
            local_a4 = 0x15e12500;
          }
        }
        else {
          local_78 = (longlong *)FUN_180007470();
          if (local_78 != (longlong *)0x0) {
            DVar3 = GetLastError();
            local_30 = *local_78;
            (**(code **)(local_30 + 0x30))
                      (local_78,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x14a,DVar2,DVar3);
          }
          local_a4 = 0x14b12500;
        }
      }
      else {
        local_80 = (longlong *)FUN_180007470();
        if (local_80 != (longlong *)0x0) {
          DVar3 = GetLastError();
          local_40 = *local_80;
          (**(code **)(local_40 + 0x30))
                    (local_80,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x138,DVar2,DVar3);
        }
        local_a4 = 0x13912500;
      }
    }
    else {
      local_88 = (longlong *)FUN_180007470();
      if (local_88 != (longlong *)0x0) {
        DVar3 = GetLastError();
        local_48 = *local_88;
        (**(code **)(local_48 + 0x30))
                  (local_88,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x130,DVar2,DVar3);
      }
      local_a4 = 0x13112500;
    }
  }
  if (local_a0 != (PACL)0x0) {
    LocalFree(local_a0);
    local_a0 = (PACL)0x0;
  }
  if (local_98 != (PEXPLICIT_ACCESS_W)0x0) {
    local_18 = local_98;
    free(local_98);
  }
  return local_a4;
}




undefined4 FUN_180039840(int *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong *plVar3;
  undefined4 local_24;
  
  local_24 = 0;
  if (*param_1 == 0) {
    local_24 = 0x18f12405;
  }
  else if ((*(longlong *)(param_1 + 0x108) != 0) &&
          (DVar1 = SetNamedSecurityInfoW
                             ((LPWSTR)(param_1 + 1),param_1[0x105],4,(PSID)0x0,(PSID)0x0,
                              *(PACL *)(param_1 + 0x108),(PACL)0x0), DVar1 != 0)) {
    plVar3 = (longlong *)FUN_180007470();
    if (plVar3 != (longlong *)0x0) {
      DVar2 = GetLastError();
      (**(code **)(*plVar3 + 0x30))
                (plVar3,1,0x12400,L"Boot:%S %d u32Result=0x%x,GetLastError=%d\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x1a1,DVar1,DVar2);
    }
    local_24 = 0x1a212500;
  }
  return local_24;
}




void FUN_180039970(LPCWSTR param_1,char *param_2,char *param_3)

{
  WCHAR WVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  WCHAR *pWVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 auStackY_c68 [32];
  uint local_c28;
  uint local_c24;
  int local_c1c;
  HANDLE local_c18;
  char *local_c10;
  DWORD local_c08;
  int local_c04;
  undefined1 *local_c00;
  HANDLE local_bf8;
  longlong local_bf0;
  longlong local_be8;
  WCHAR *local_be0;
  DWORD local_bd8;
  uint local_bd4;
  LPCWSTR local_bd0;
  longlong *local_bc8;
  longlong *local_bc0;
  longlong *local_bb8;
  longlong *local_bb0;
  longlong *local_ba8;
  ulonglong local_ba0;
  longlong local_b98;
  longlong local_b90;
  longlong local_b88;
  char *local_b80;
  char *local_b78;
  longlong local_b70;
  char *local_b68;
  char *local_b60;
  longlong local_b58;
  char *local_b50;
  undefined8 local_b48;
  WCHAR *local_b40;
  longlong local_b38 [2];
  basic_ostream<char,struct_std::char_traits<char>_> local_b28 [240];
  WCHAR local_a38 [264];
  char local_828 [2048];
  ulonglong local_28;
  
  local_b48 = 0xfffffffffffffffe;
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_c68;
  FUN_180006570((basic_iostream<char,struct_std::char_traits<char>_> *)local_b38,3,1);
  local_c08 = 0;
  local_bd8 = 0;
  local_bf8 = (HANDLE)0xffffffffffffffff;
  local_c18 = (HANDLE)0xffffffffffffffff;
  local_c00 = (undefined1 *)0x0;
  pWVar6 = local_a38;
  for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar6 = 0;
    pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
  }
  local_c10 = (char *)0x0;
  pcVar7 = local_828;
  for (lVar4 = 0x800; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pcVar7 = '\0';
    pcVar7 = pcVar7 + 1;
  }
  local_b40 = local_a38;
  local_be0 = local_b40;
  local_bd0 = param_1;
  do {
    WVar1 = *local_bd0;
    *local_be0 = WVar1;
    local_bd0 = local_bd0 + 1;
    local_be0 = local_be0 + 1;
  } while (WVar1 != L'\0');
  lVar4 = FUN_180028a60(local_a38,L'\\');
  if (lVar4 == 0) {
    local_c28 = 0x3512409;
    local_c00 = (undefined1 *)0x0;
  }
  else {
    local_c00 = (undefined1 *)(lVar4 + 2);
    pwVar5 = L"LINUX.CFG";
    puVar8 = local_c00;
    for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = (char)*pwVar5;
      pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
      puVar8 = puVar8 + 1;
    }
    local_bf8 = CreateFileW(local_a38,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (local_bf8 == (HANDLE)0xffffffffffffffff) {
      local_bc8 = (longlong *)FUN_180007470();
      if (local_bc8 != (longlong *)0x0) {
        GetLastError();
        local_b98 = *local_bc8;
        (**(code **)(local_b98 + 0x30))
                  (local_bc8,1,0x12400,L"Boot:%S %d CreateFile:%s failed:%08X\n");
      }
      local_c28 = 0x4512504;
    }
    else {
      local_c28 = FUN_180013520(param_1);
      if (((local_c28 & 0xfff) == 0x474) || ((local_c28 & 0xfff) == 0)) {
        local_c28 = 0;
        local_c18 = CreateFileW(param_1,0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,6,(HANDLE)0x0);
        if (local_c18 == (HANDLE)0xffffffffffffffff) {
          local_bb8 = (longlong *)FUN_180007470();
          if (local_bb8 != (longlong *)0x0) {
            GetLastError();
            local_b88 = *local_bb8;
            (**(code **)(local_b88 + 0x30))
                      (local_bb8,1,0x12400,L"Boot:%S %d CreateFile:%s failed:%08X\n");
          }
          local_c28 = 0x6012505;
        }
        else {
          local_c10 = (char *)operator_new(0x400);
          local_b80 = local_c10;
          local_b78 = local_c10;
          if (local_c10 == (char *)0x0) {
            local_c28 = 0x6f12408;
          }
          else {
            BVar3 = ReadFile(local_bf8,local_c10,0x400,&local_c08,(LPOVERLAPPED)0x0);
            if (BVar3 == 0) {
              local_bb0 = (longlong *)FUN_180007470();
              if (local_bb0 != (longlong *)0x0) {
                GetLastError();
                local_b70 = *local_bb0;
                (**(code **)(local_b70 + 0x30))(local_bb0,1,0x12400,L"Boot:%S %d failed:%08X\n");
              }
              local_c28 = 0x7612506;
            }
            else {
              local_c1c = 0;
              std::basic_ostream<char,struct_std::char_traits<char>_>::write
                        (local_b28,local_c10,(ulonglong)local_c08);
              while (bVar2 = std::ios_base::eof((ios_base *)
                                                ((longlong)local_b38 +
                                                (longlong)*(int *)(local_b38[0] + 4))), !bVar2) {
                std::basic_istream<char,struct_std::char_traits<char>_>::getline
                          ((basic_istream<char,struct_std::char_traits<char>_> *)local_b38,local_828
                           ,0x800);
                local_b68 = local_828;
                local_bf0 = -1;
                do {
                  local_bf0 = local_bf0 + 1;
                } while (local_b68[local_bf0] != '\0');
                local_c24 = (uint)local_bf0;
                while ((local_c24 != 0 &&
                       ((local_c24 = local_c24 - 1, local_828[local_c24] == '\r' ||
                        (local_828[local_c24] == '\n'))))) {
                  local_ba0 = (ulonglong)local_c24;
                  if (0x7ff < local_ba0) {
                    __report_rangecheckfailure();
                  }
                  local_828[local_ba0] = '\0';
                }
                local_c04 = local_c1c;
                if (local_c1c == 1) {
                  strcat_s(local_828,0x800," ");
                  strcat_s(local_828,0x800,param_2);
                }
                else if (local_c1c == 3) {
                  strcat_s(local_828,0x800," ");
                  strcat_s(local_828,0x800,param_3);
                }
                strcat_s(local_828,0x800,"\r\n");
                local_b60 = local_828;
                local_be8 = -1;
                do {
                  local_be8 = local_be8 + 1;
                } while (local_b60[local_be8] != '\0');
                BVar3 = WriteFile(local_c18,local_828,(DWORD)local_be8,&local_bd8,(LPOVERLAPPED)0x0)
                ;
                if (BVar3 == 0) {
                  local_ba8 = (longlong *)FUN_180007470();
                  if (local_ba8 != (longlong *)0x0) {
                    GetLastError();
                    local_b58 = *local_ba8;
                    (**(code **)(local_b58 + 0x30))(local_ba8,1,0x12400);
                  }
                  local_c28 = 0xa412507;
                  break;
                }
                local_c1c = local_c1c + 1;
              }
            }
          }
        }
      }
      else {
        local_bc0 = (longlong *)FUN_180007470();
        if (local_bc0 != (longlong *)0x0) {
          GetLastError();
          local_b90 = *local_bc0;
          (**(code **)(local_b90 + 0x30))(local_bc0,1,0x12400,L"Boot:%S %d failed:%08X\n");
        }
      }
    }
  }
  if (local_bf8 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(local_bf8);
  }
  if (local_c18 != (HANDLE)0xffffffffffffffff) {
    FlushFileBuffers(local_c18);
    CloseHandle(local_c18);
  }
  if (local_c10 != (char *)0x0) {
    local_b50 = local_c10;
    free(local_c10);
  }
  local_bd4 = local_c28;
  FUN_180004090((longlong)local_b38);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_c68);
  return;
}




void FUN_18003a1c0(int param_1,undefined4 *param_2,char *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  WCHAR *pWVar5;
  char *pcVar6;
  undefined1 auStack_718 [32];
  int local_6f8;
  undefined1 *local_6f0;
  char local_6e8 [4];
  uint local_6e4;
  uint local_6e0 [2];
  longlong local_6d8;
  undefined4 local_6d0;
  char *local_6c8;
  char local_6b8 [128];
  WCHAR local_638 [264];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStack_718;
  local_6e0[0] = 0;
  local_6f8 = 0;
  local_6e0[1] = 0xffffffff;
  puVar4 = local_428;
  for (lVar2 = 0x400; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_6e4 = 0;
  pWVar5 = local_638;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pcVar3 = local_6b8;
  for (lVar2 = 0x80; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = "X:";
  pcVar6 = local_6e8;
  for (lVar2 = 3; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  local_6f0 = local_428;
  wsprintfW(local_638,L"\\\\.\\PhysicalDrive%d");
  iVar1 = FUN_18000e710(local_638,local_6f0,0x400);
  if (iVar1 == 1) {
    *param_2 = *(undefined4 *)(local_6f0 + 0x1c);
    strcpy_s(param_3,(longlong)param_4,"");
    if (*(int *)(local_6f0 + 0xc) != 0) {
      strcat_s(param_3,(longlong)param_4,local_6f0 + *(uint *)(local_6f0 + 0xc));
    }
    if (*(int *)(local_6f0 + 0x10) != 0) {
      strcat_s(param_3,(longlong)param_4,local_6f0 + *(uint *)(local_6f0 + 0x10));
    }
    for (; (local_6f8 < param_4 && (param_3[local_6f8] == ' ')); local_6f8 = local_6f8 + 1) {
    }
    if (local_6f8 != 0) {
      strcpy_s(param_3,(longlong)param_4,param_3 + local_6f8);
    }
    local_6d8 = -1;
    do {
      local_6d8 = local_6d8 + 1;
    } while (param_3[local_6d8] != '\0');
    local_6f8 = (int)local_6d8;
    while ((local_6f8 = local_6f8 + -1, -1 < local_6f8 && (param_3[local_6f8] == ' '))) {
      param_3[local_6f8] = '\0';
    }
    param_3[param_4 + -1] = '\0';
    local_6e0[1] = 0;
    local_6c8 = param_3;
    local_6e4 = FUN_180016950(param_1,local_6e0);
    if ((local_6e4 & 0xfff) == 0) {
      for (local_6f8 = 0; local_6f8 < 0x1a; local_6f8 = local_6f8 + 1) {
        local_6d0 = 1;
        if ((local_6e0[0] & 1 << ((byte)local_6f8 & 0x1f)) != 0) {
          strcat_s(local_6b8,0x80,", ");
          local_6e8[0] = (char)local_6f8 + 'A';
          strcat_s(local_6b8,0x80,local_6e8);
        }
      }
      strcat_s(param_3,(longlong)param_4,local_6b8);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_718);
  return;
}




void FUN_18003a530(int *param_1)

{
  int iVar1;
  UINT UVar2;
  longlong lVar3;
  char *pcVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_578 [32];
  int *local_548;
  int local_53c;
  int local_538;
  char local_528 [256];
  WCHAR local_428 [256];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_578;
  local_538 = 0;
  pcVar4 = local_528;
  for (lVar3 = 0x100; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  local_53c = 0;
  local_548 = (int *)0x0;
  pWVar5 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_428;
  for (lVar3 = 0x200; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  if ((param_1 != (int *)0x0) && (local_548 = (int *)malloc(4), local_548 != (int *)0x0)) {
    *local_548 = 0;
    while (*local_548 < 0x40) {
      iVar1 = FUN_18003a1c0(*local_548,&local_53c,local_528,0x100);
      if ((iVar1 == 0) && (local_53c == 7)) {
        wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d\\");
        UVar2 = GetDriveTypeW(local_228);
        if (((UVar2 == 2) || (UVar2 == 3)) &&
           (iVar1 = MultiByteToWideChar(0,0,local_528,-1,local_428,0x100), iVar1 != 0)) break;
      }
      *local_548 = *local_548 + 1;
    }
    if (*local_548 != 0x40) {
      *param_1 = *local_548;
      wcscpy_s((wchar_t *)(param_1 + 1),0x100,local_428);
      local_538 = 1;
    }
  }
  if ((local_538 == 0) && (local_548 != (int *)0x0)) {
    free(local_548);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_578);
  return;
}




void FUN_18003a740(int *param_1,int *param_2)

{
  int iVar1;
  UINT UVar2;
  longlong lVar3;
  char *pcVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_578 [32];
  int local_53c [5];
  char local_528 [256];
  WCHAR local_428 [256];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_578;
  local_53c[1] = 0;
  pcVar4 = local_528;
  for (lVar3 = 0x100; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  local_53c[0] = 0;
  pWVar5 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_428;
  for (lVar3 = 0x200; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    *param_1 = *param_1 + 1;
    while (*param_1 < 0x40) {
      iVar1 = FUN_18003a1c0(*param_1,local_53c,local_528,0x100);
      if ((iVar1 == 0) && (local_53c[0] == 7)) {
        wsprintfW(local_228,L"\\\\.\\PhysicalDrive%d\\");
        UVar2 = GetDriveTypeW(local_228);
        if (((UVar2 == 2) || (UVar2 == 3)) &&
           (iVar1 = MultiByteToWideChar(0,0,local_528,-1,local_428,0x100), iVar1 != 0)) break;
      }
      *param_1 = *param_1 + 1;
    }
    if (*param_1 != 0x40) {
      *param_2 = *param_1;
      wcscpy_s((wchar_t *)(param_2 + 1),0x100,local_428);
      local_53c[1] = 1;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_578);
  return;
}




bool FUN_18003a920(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return param_1 != (void *)0x0;
}




void FUN_18003a960(undefined2 param_1,wchar_t *param_2,LPCWSTR param_3,LPCWSTR param_4,
                  LPCWSTR param_5,uint param_6,undefined *param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  wchar_t *pwVar4;
  LPCWSTR pWVar5;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  short *psVar8;
  longlong lVar9;
  uint *puVar10;
  CHAR *pCVar11;
  undefined1 auStackY_aa8 [32];
  uint local_a58;
  int local_a4c;
  uint local_a48 [2];
  longlong *local_a40;
  DWORD local_a38;
  undefined4 local_a34;
  ulonglong local_a30;
  ulonglong local_a28;
  DWORD local_a20;
  uint local_a1c;
  longlong *local_a18;
  longlong *local_a10;
  longlong *local_a08;
  longlong *local_a00;
  longlong *local_9f8;
  longlong *local_9f0;
  longlong *local_9e8;
  longlong *local_9e0;
  undefined8 *local_9d8;
  longlong *local_9d0;
  LPCWSTR local_9c8;
  LPCWSTR local_9c0;
  LPCWSTR local_9b8;
  LPCWSTR local_9b0;
  wchar_t *local_9a8;
  undefined8 *local_9a0;
  longlong *local_998;
  longlong *local_990;
  short *local_988;
  longlong *local_980;
  undefined8 local_978;
  undefined8 local_970;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_968 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_948 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_928 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_908 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_8e8 [32];
  CHAR local_8c8 [272];
  CHAR local_7b8 [1952];
  ulonglong local_18;
  
  local_970 = 0xfffffffffffffffe;
  local_18 = DAT_18005e010 ^ (ulonglong)auStackY_aa8;
  local_a38 = 0;
  local_a4c = 0;
  local_a48[0] = 0;
  local_a40 = (longlong *)0x0;
  basic_string<>(local_908,L"");
  basic_string<>(local_8e8,L"");
  basic_string<>(local_928,L"");
  basic_string<>(local_948,L"");
  basic_string<>(local_968,L"");
  pCVar11 = local_8c8;
  for (lVar9 = 0x104; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pCVar11 = '\0';
    pCVar11 = pCVar11 + 1;
  }
  pCVar11 = local_7b8;
  for (lVar9 = 0x79c; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pCVar11 = '\0';
    pCVar11 = pCVar11 + 1;
  }
  if (((param_3 != (LPCWSTR)0x0) && (param_5 != (LPCWSTR)0x0)) && (param_4 != (LPCWSTR)0x0)) {
    local_a30 = 0xffffffffffffffff;
    do {
      local_a30 = local_a30 + 1;
    } while (param_4[local_a30] != L'\0');
    local_9c8 = param_4;
    if ((local_a30 < 0x105) && (param_2 != (wchar_t *)0x0)) {
      local_9c0 = param_5;
      local_a28 = 0xffffffffffffffff;
      do {
        local_a28 = local_a28 + 1;
      } while (param_5[local_a28] != L'\0');
      if (local_a28 < 0x739) {
        uVar1 = FUN_180034dd0(param_3,(undefined4 *)0x0,(undefined4 *)0x0);
        if (uVar1 == 0) {
          local_a18 = (longlong *)FUN_180007470();
          if (local_a18 != (longlong *)0x0) {
            (**(code **)(*local_a18 + 0x30))(local_a18,1,0x12400,L"Boot:%S %d failed\n");
          }
          local_a58 = 0x1cb12403;
        }
        else {
          FUN_18002ea90(local_968,param_1);
          FUN_180001d50(local_968,L":\\BOOT");
          pwVar4 = (wchar_t *)FUN_180001d20(local_968);
          _wmkdir(pwVar4);
          pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
          iVar2 = FUN_18000e5e0(pWVar5);
          if (iVar2 == 0) {
            local_a58 = 0x1d512511;
          }
          else {
            pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
            SetFileAttributesW(pWVar5,6);
            if (uVar1 == 1) {
              FUN_180001d50(local_968,L"\\syslinux");
              pwVar4 = (wchar_t *)FUN_180001d20(local_968);
              _wmkdir(pwVar4);
              pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
              iVar2 = FUN_18000e5e0(pWVar5);
              if (iVar2 == 0) {
                local_a58 = 0x1e112511;
                goto LAB_18003b52f;
              }
              pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
              SetFileAttributesW(pWVar5,6);
              FUN_180028a30(local_948,param_2);
              FUN_180001d50(local_948,L"\\syslinux\\syslinux\\SYSLINUX.CFG");
              FUN_18002ea90(local_968,param_1);
              FUN_180001d50(local_968,L":\\BOOT\\syslinux\\SYSLINUX.CFG");
              local_9b8 = (LPCWSTR)FUN_180001d20(local_948);
              pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
              iVar2 = FUN_18000dec0(pWVar5,local_9b8,(undefined *)0x0,0,0,(uint *)0x0);
              if (iVar2 == 0) {
                local_a58 = 0x1ee1250c;
                goto LAB_18003b52f;
              }
              FUN_180028a30(local_948,param_2);
              FUN_180001d50(local_948,L"\\syslinux\\syslinux\\LINUX.CFG");
              FUN_18002ea90(local_968,param_1);
              FUN_180001d50(local_968,L":\\BOOT\\syslinux\\LINUX.CFG");
              local_9b0 = (LPCWSTR)FUN_180001d20(local_948);
              pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
              iVar2 = FUN_18000dec0(pWVar5,local_9b0,(undefined *)0x0,0,0,(uint *)0x0);
              if (iVar2 == 0) {
                local_a58 = 0x1f81250c;
                goto LAB_18003b52f;
              }
              FUN_18002ea90(local_968,param_1);
              FUN_180001d50(local_968,L":\\BOOT\\syslinux\\LIVE.CFG");
              iVar2 = WideCharToMultiByte(0,0,param_4,-1,local_8c8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              if ((iVar2 == 0) ||
                 (iVar2 = WideCharToMultiByte(0,0,param_5,-1,local_7b8,0x79c,(LPCSTR)0x0,(LPBOOL)0x0
                                             ), iVar2 == 0)) {
                local_a10 = (longlong *)FUN_180007470();
                if (local_a10 != (longlong *)0x0) {
                  (**(code **)(*local_a10 + 0x30))(local_a10,1,0x12400,L"Boot:%S %d failed\n");
                }
                local_a58 = 0x20512486;
                goto LAB_18003b52f;
              }
              pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
              local_a58 = FUN_180039970(pWVar5,local_8c8,local_7b8);
              if ((local_a58 & 0xfff) != 0) {
                local_a08 = (longlong *)FUN_180007470();
                if (local_a08 != (longlong *)0x0) {
                  (**(code **)(*local_a08 + 0x30))(local_a08,1,0x12400,L"Boot:%S %d failed\n");
                }
                goto LAB_18003b52f;
              }
              FUN_18002ea90(local_968,param_1);
              FUN_180001d50(local_968,L":\\BOOT\\syslinux\\LINUX.CFG");
              pWVar5 = (LPCWSTR)FUN_180001d20(local_968);
              DeleteFileW(pWVar5);
            }
            FUN_18002ea90(local_948,param_1);
            FUN_180001d50(local_948,L":");
            FUN_18002ea90(local_968,param_1);
            FUN_180001d50(local_968,L":\\BOOT");
            local_9a8 = (wchar_t *)FUN_180001d20(local_968);
            pwVar6 = (wchar_t *)FUN_180001d20(local_948);
            pwVar4 = param_2;
            pWVar5 = param_3;
            local_a58 = FUN_1800283b0(pwVar6,local_9a8,param_2,param_3,param_6,param_7,param_8,1,0);
            if ((local_a58 & 0xfff) == 0) {
              if (uVar1 == 1) {
                FUN_180028a30(local_928,param_2);
                FUN_180001d50(local_928,L"\\syslinux.exe -ma -d /boot/syslinux ");
                FUN_18002ea60(local_928,param_1);
                FUN_180001d50(local_928,L":");
                pWVar7 = (LPWSTR)FUN_180001d20(local_928);
                BVar3 = FUN_18000d910(pWVar7,&local_a38,(LPVOID)0x0,(DWORD *)0x0);
                if (BVar3 == 0) {
                  local_9f8 = (longlong *)FUN_180007470();
                  if (local_9f8 != (longlong *)0x0) {
                    (**(code **)(*local_9f8 + 0x30))(local_9f8);
                  }
                  local_a58 = 0x22d12500;
                }
                else {
                  local_a20 = local_a38;
                  if (local_a38 == 0) {
                    local_a58 = 0;
                  }
                  else {
                    local_9f0 = (longlong *)FUN_180007470();
                    if (local_9f0 != (longlong *)0x0) {
                      (**(code **)(*local_9f0 + 0x30))(local_9f0);
                    }
                    local_a58 = 0x23912507;
                  }
                }
              }
              else if ((1 < uVar1) && (uVar1 < 4)) {
                puVar10 = local_a48;
                local_a58 = FUN_180016e50(param_3,puVar10,pwVar4,pWVar5);
                if ((local_a58 & 0xfff) == 0) {
                  if ((local_a48[0] == 0) ||
                     ((local_a58 = FUN_180016400(&local_a4c,puVar10,pwVar4,pWVar5),
                      (local_a58 & 0xfff) == 0 && (local_a4c == 0)))) {
                    FUN_180028a30(local_908,L"\\\\.\\");
                    FUN_18002ea60(local_908,param_1);
                    FUN_180001d50(local_908,L":");
                    FUN_18002ea90(local_8e8,param_1);
                    FUN_180001d50(local_8e8,L":");
                    local_9d8 = (undefined8 *)operator_new(0x1f28);
                    local_9a0 = local_9d8;
                    if (local_9d8 == (undefined8 *)0x0) {
                      local_9d0 = (longlong *)0x0;
                    }
                    else {
                      local_9d0 = FUN_1800202d0(local_9d8);
                      local_998 = local_9d0;
                    }
                    local_990 = local_9d0;
                    local_a40 = local_9d0;
                    if (local_9d0 == (longlong *)0x0) {
                      local_a58 = 0x2661240a;
                    }
                    else {
                      if ((local_a4c == 0) || (local_a48[0] == 0)) {
                        local_a34 = 0;
                      }
                      else {
                        local_a34 = 1;
                      }
                      local_988 = (short *)FUN_180001d20(local_8e8);
                      psVar8 = (short *)FUN_180001d20(local_908);
                      local_a58 = FUN_180019b80(local_a40,psVar8,local_988,param_2,param_4,1,
                                                local_a34);
                    }
                  }
                }
                else {
                  local_9e8 = (longlong *)FUN_180007470();
                  if (local_9e8 != (longlong *)0x0) {
                    (**(code **)(*local_9e8 + 0x30))(local_9e8);
                  }
                }
              }
            }
            else {
              local_a00 = (longlong *)FUN_180007470();
              if (local_a00 != (longlong *)0x0) {
                (**(code **)(*local_a00 + 0x30))(local_a00,1,0x12400,L"Boot:%S %d failed\n");
              }
            }
          }
        }
        goto LAB_18003b52f;
      }
    }
  }
  local_a58 = 0x1c312409;
LAB_18003b52f:
  if (local_a40 != (longlong *)0x0) {
    FUN_18001a1c0((longlong)local_a40);
    local_980 = local_a40;
    local_9e0 = local_a40;
    if (local_a40 == (longlong *)0x0) {
      local_978 = 0;
    }
    else {
      local_978 = (**(code **)*local_a40)(local_a40,1);
    }
  }
  local_a1c = local_a58;
  FUN_180001db0(local_968);
  FUN_180001db0(local_948);
  FUN_180001db0(local_928);
  FUN_180001db0(local_8e8);
  FUN_180001db0(local_908);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_aa8);
  return;
}




uint FUN_18003b610(uint param_1,LPCWSTR param_2,undefined8 param_3,undefined8 param_4)

{
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  longlong *local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_24 = 0;
  if ((int)param_1 < 0) {
    local_28 = 0x2bc12461;
  }
  else {
    local_28 = FUN_180016400(&local_20,param_2,param_3,param_4);
    if ((local_28 & 0xfff) == 0) {
      local_28 = FUN_180016e50(param_2,&local_1c,param_3,param_4);
      if ((local_28 & 0xfff) == 0) {
        local_28 = FUN_180011430(param_1,&local_24);
        if ((local_28 & 0xfff) == 0) {
          if ((local_20 == 0) || (local_1c == 0)) {
            if (local_24 != 0) {
              local_28 = 0x2d8127c5;
            }
          }
          else if ((local_24 != 0) && (local_24 != 1)) {
            local_28 = 0x2e0127c5;
          }
        }
      }
      else {
        local_18 = (longlong *)FUN_180007470();
        if (local_18 != (longlong *)0x0) {
          (**(code **)(*local_18 + 0x30))
                    (local_18,1,0x12400,L"Boot:%S %d failed\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\usbdiskboot.cpp",0x2c9);
        }
      }
    }
  }
  return local_28;
}




undefined4 FUN_18003b760(undefined8 param_1,uint param_2)

{
  DWORD DVar1;
  HMODULE hModule;
  HANDLE pvVar2;
  INT_PTR IVar3;
  undefined4 local_88;
  int local_78 [2];
  longlong *local_70;
  longlong *local_68;
  FARPROC local_60;
  longlong *local_58;
  longlong *local_50;
  FARPROC local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_78[0] = 0;
  local_88 = 0;
  local_60 = (FARPROC)0x0;
  local_48 = (FARPROC)0x0;
  hModule = LoadLibraryW(L"Kernel32.dll");
  if (hModule == (HMODULE)0x0) {
    local_88 = 0x1c12d12;
    local_70 = (longlong *)FUN_180007470();
    if (local_70 != (longlong *)0x0) {
      DVar1 = GetLastError();
      local_38 = *local_70;
      (**(code **)(local_38 + 0x30))
                (local_70,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.boot\\wow64fsredirection.cpp",0x1d,0x1c12d12,
                 DVar1);
    }
  }
  else {
    local_60 = GetProcAddress(hModule,"IsWow64Process");
    if (local_60 == (FARPROC)0x0) {
      local_68 = (longlong *)FUN_180007470();
      if (local_68 != (longlong *)0x0) {
        DVar1 = GetLastError();
        local_30 = *local_68;
        (**(code **)(local_30 + 0x30))
                  (local_68,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.boot\\wow64fsredirection.cpp",0x24,0,DVar1);
      }
    }
    else {
      pvVar2 = GetCurrentProcess();
      IVar3 = (*local_60)(pvVar2,local_78);
      if ((int)IVar3 == 0) {
        local_88 = 0x2912d12;
        local_58 = (longlong *)FUN_180007470();
        if (local_58 != (longlong *)0x0) {
          DVar1 = GetLastError();
          local_28 = *local_58;
          (**(code **)(local_28 + 0x30))
                    (local_58,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                     "k:\\_epm_re_main\\legacy_mod\\mod.boot\\wow64fsredirection.cpp",0x2a,0x2912d12
                     ,DVar1);
        }
      }
      else if (local_78[0] != 0) {
        local_48 = GetProcAddress(hModule,"Wow64EnableWow64FsRedirection");
        if (local_48 == (FARPROC)0x0) {
          local_88 = 0x3512d12;
          local_50 = (longlong *)FUN_180007470();
          if (local_50 != (longlong *)0x0) {
            DVar1 = GetLastError();
            local_20 = *local_50;
            (**(code **)(local_20 + 0x30))
                      (local_50,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                       "k:\\_epm_re_main\\legacy_mod\\mod.boot\\wow64fsredirection.cpp",0x36,
                       0x3512d12,DVar1);
          }
        }
        else {
          IVar3 = (*local_48)((ulonglong)param_2);
          if ((int)IVar3 == 0) {
            local_88 = 0x3c12d12;
            local_40 = (longlong *)FUN_180007470();
            if (local_40 != (longlong *)0x0) {
              DVar1 = GetLastError();
              local_18 = *local_40;
              (**(code **)(local_18 + 0x30))
                        (local_40,1,0x12400,L"%S %d nRes=0x%x,GetLastError=%d\n",
                         "k:\\_epm_re_main\\legacy_mod\\mod.boot\\wow64fsredirection.cpp",0x3d,
                         0x3c12d12,DVar1);
            }
          }
        }
      }
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  return local_88;
}




longlong FUN_18003bb00(short *param_1,int param_2,longlong param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  if ((param_1 == (short *)0x0) || (param_3 == 0)) {
    return 0;
  }
  psVar3 = param_1;
  iVar4 = param_2;
  do {
    psVar2 = psVar3;
    sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar2);
    *psVar2 = sVar1;
    if (sVar1 == 0) break;
    iVar4 = iVar4 + -1;
    psVar3 = psVar2 + 1;
  } while (iVar4 != 0);
  psVar3 = psVar2 + 1;
  if (iVar4 == 0) {
    param_1[param_2 - 1] = 0;
    psVar3 = psVar2;
  }
  return (longlong)psVar3 - (longlong)param_1 >> 1;
}




int FUN_18003bb60(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (short *)0x0) {
    sVar1 = *param_1;
    iVar2 = 0;
    while (sVar1 != 0) {
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 1;
      sVar1 = *param_1;
    }
  }
  return iVar2;
}




PVOID FUN_18003bb80(void)

{
  SIZE_T SVar1;
  PVOID local_48;
  _MEMORY_BASIC_INFORMATION local_40;
  
  SVar1 = VirtualQuery(FUN_18003bb80,&local_40,0x30);
  if (SVar1 == 0) {
    local_48 = (PVOID)0x0;
  }
  else {
    local_48 = local_40.AllocationBase;
  }
  return local_48;
}




void FUN_18003bbc0(LPWSTR param_1,DWORD param_2)

{
  HMODULE hModule;
  int local_38;
  longlong local_30;
  longlong local_28;
  
  hModule = (HMODULE)FUN_18003bb80();
  GetModuleFileNameW(hModule,param_1,param_2);
  local_30 = -1;
  do {
    local_30 = local_30 + 1;
  } while (param_1[local_30] != L'\0');
  if (local_30 != 0) {
    local_28 = -1;
    do {
      local_28 = local_28 + 1;
    } while (param_1[local_28] != L'\0');
    for (local_38 = (int)local_28; param_1[local_38] != L'\\'; local_38 = local_38 + -1) {
      param_1[local_38] = L'\0';
    }
  }
  return;
}




void FUN_18003bc80(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPWSTR param_4,DWORD param_5,
                  LPCWSTR param_6)

{
  WCHAR WVar1;
  longlong lVar2;
  undefined1 *puVar3;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_5c8 [32];
  short *local_590;
  short *local_588;
  WCHAR *local_580;
  WCHAR *local_578;
  short sStack_55a;
  WCHAR local_558 [264];
  WCHAR local_348 [264];
  undefined1 local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_18005e010 ^ (ulonglong)auStackY_5c8;
  puVar3 = local_138;
  for (lVar2 = 0x104; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pWVar5 = local_348;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_558;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  if (param_6 == (LPCWSTR)0x0) {
    FUN_18003bbc0(local_348,0x104);
    local_578 = local_348;
    local_580 = local_558;
    do {
      WVar1 = *local_578;
      *local_580 = WVar1;
      local_578 = local_578 + 1;
      local_580 = local_580 + 1;
    } while (WVar1 != L'\0');
    local_590 = &sStack_55a;
    do {
      local_590 = local_590 + 1;
    } while (*local_590 != 0);
    puVar3 = &DAT_1800438bc;
    for (lVar2 = 4; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)local_590 = *puVar3;
      puVar3 = puVar3 + 1;
      local_590 = (short *)((longlong)local_590 + 1);
    }
    local_588 = &sStack_55a;
    do {
      local_588 = local_588 + 1;
    } while (*local_588 != 0);
    pwVar4 = L"../../res/language.ini";
    for (lVar2 = 0x2e; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(char *)local_588 = (char)*pwVar4;
      pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
      local_588 = (short *)((longlong)local_588 + 1);
    }
    GetPrivateProfileStringW(param_1,param_2,param_3,param_4,param_5,local_558);
  }
  else {
    GetPrivateProfileStringW(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_5c8);
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18005e010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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
    FUN_18003cf7c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18003cf5c();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_18003bf50(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_1800bd828,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18003c0a2;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_1800bd858 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_1800bd858 != (HANDLE)0x0) goto LAB_18003c040;
  }
  else {
    DAT_1800bd858 = (HANDLE)0x0;
    (*pFVar3)(&DAT_1800bd850);
    bVar7 = 0x40 - ((byte)DAT_18005e010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_1800bd860 = DAT_18005e010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_1800bd868 = DAT_18005e010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18003c040:
    uVar6 = FUN_18003c720(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18003c0b0);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18003c0a2:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_18003c0b0(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
  if (DAT_1800bd858 != (HANDLE)0x0) {
    CloseHandle(DAT_1800bd858);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
  uVar1 = (ulonglong)_tls_index;
  DAT_18005e000 = DAT_18005e000 + 1;
  *param_1 = DAT_18005e000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18005e000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18003c1bc:
                    /* WARNING: Could not recover jumptable at 0x00018003c1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18005e000;
      goto LAB_18003c1bc;
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
  
  if (DAT_1800bd858 != (HANDLE)0x0) {
    SetEvent(DAT_1800bd858);
                    /* WARNING: Could not recover jumptable at 0x00018003c219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_1800bd858);
    return;
  }
  bVar1 = (byte)DAT_18005e010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018003d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18005e010 ^ _DAT_1800bd868) >> bVar1 |
            (DAT_18005e010 ^ _DAT_1800bd868) << 0x40 - bVar1))(&DAT_1800bd850);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_1800bd858 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
    WaitForSingleObjectEx(DAT_1800bd858,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018003c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800bd828);
    return;
  }
  bVar1 = (byte)DAT_18005e010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018003d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18005e010 ^ _DAT_1800bd860) >> bVar1 |
            (DAT_18005e010 ^ _DAT_1800bd860) << 0x40 - bVar1))
            (&DAT_1800bd850,&DAT_1800bd828,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00018003c2c5. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18003c2f6;
  capture_previous_context((PCONTEXT)&DAT_1800bd910);
  _DAT_1800bd880 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800bd9a8 = puVar3 + 0x40;
  _DAT_1800bd990 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800bd870 = 0xc0000409;
  _DAT_1800bd874 = 1;
  _DAT_1800bd888 = 1;
  DAT_1800bd890 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18005e010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18005e008;
  *(undefined8 *)(puVar3 + -8) = 0x18003c398;
  DAT_1800bda08 = _DAT_1800bd880;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18003f838);
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
  *(undefined8 *)(puVar3 + -8) = 0x18003c3de;
  capture_current_context((PCONTEXT)&DAT_1800bd910);
  _DAT_1800bd880 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_1800bd9a8 = puVar3 + 0x30;
  _DAT_1800bd870 = 0xc0000409;
  _DAT_1800bd874 = 1;
  _DAT_1800bd888 = 1;
  DAT_1800bd890 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18003c44a;
  DAT_1800bda08 = _DAT_1800bd880;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18003f838);
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




undefined8 * FUN_18003c53c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
LAB_18003c596:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1800bdde8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1800bdde8;
        pvVar1 = DAT_1800bdde8;
      }
      DAT_1800bdde8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18003c596;
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
    uVar3 = FUN_18003d2a4();
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
  
  uVar1 = FUN_18003c720(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18003d4c0();
  if (cVar1 != '\0') {
    cVar1 = FUN_18003d4c0();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18003d4c0();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18003d4c0();
  FUN_18003d4c0();
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
    _execute_onexit_table(&DAT_1800bddf8);
    return;
  }
  uVar2 = FUN_18003d4c4();
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
  FUN_18003d4c0();
  FUN_18003d4c0();
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
    DAT_1800bddf0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_18003d4c0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18003d4c0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18003d4c0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18003c720(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_1800bddf1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18005e010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18005e010;
      _DAT_1800bddf8 = in_RAX;
      uRam00000001800bde00 = in_RAX;
      _DAT_1800bde08 = in_RAX;
      _DAT_1800bde10 = in_RAX;
      uRam00000001800bde18 = in_RAX;
      _DAT_1800bde20 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1800bddf8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1800bde10), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1800bddf1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018003c886) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000218; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000308;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18003c86f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18003c86f:
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
    DAT_1800bdde8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1800bddf0 == '\0') || (param_2 == '\0')) {
    FUN_18003d4c0();
    FUN_18003d4c0();
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
  
  bVar2 = (byte)DAT_18005e010 & 0x3f;
  if (((DAT_18005e010 ^ _DAT_1800bddf8) >> bVar2 | (DAT_18005e010 ^ _DAT_1800bddf8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1800bddf8,_Func);
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
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2017 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector constructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64),void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4,
          _func_void_void_ptr *param_5)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    (*param_4)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
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
    if (DAT_1800bde28 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_1800bde28 = DAT_1800bde28 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_1800bdde0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_18003d374();
      FID_conflict__RTC_Initialize();
      DAT_1800bdde0 = 0;
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
    if (DAT_1800bdde0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_1800bdde0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_18003d364();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18003f6f8,&DAT_18003f708);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18003f6e8,&DAT_18003f6f0);
        DAT_1800bdde0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_18003d3a4();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_1800bde28 = DAT_1800bde28 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018003cd54) */
/* WARNING: Removing unreachable block (ram,0x00018003cce3) */
/* WARNING: Removing unreachable block (ram,0x00018003cd97) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_1800bde28 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180018ab0();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180018ab0();
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




undefined8 * FUN_18003ce0c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18003ce4c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18003ce6c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18003ceac(undefined8 *param_1)

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




undefined8 * FUN_18003cf18(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18003cf5c(void)

{
  undefined8 local_28 [5];
  
  FUN_18003ce4c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18005bc60);
}




void FUN_18003cf7c(void)

{
  undefined8 local_28 [5];
  
  FUN_18003ceac(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18005bce8);
}




char * FUN_18003cf9c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18003cfb0(void)

{
  _DAT_1800bde2c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18003cfeb;
  FUN_18003cfb0();
  *(undefined8 *)(puVar4 + -8) = 0x18003cffc;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18003d006;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18003d020;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18003d061;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18003d093;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18003d0b5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18003d0d6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18003d0e1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18003d0f1;
    FUN_18003cfb0();
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_18003d108(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018003d1f6) */
/* WARNING: Removing unreachable block (ram,0x00018003d174) */
/* WARNING: Removing unreachable block (ram,0x00018003d14f) */
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
  
  DAT_18005e01c = 2;
  _DAT_18005e018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18005e020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800bde34 = DAT_1800bde34 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_1800bde34 = DAT_1800bde34 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18005e018 = 2;
    DAT_18005e01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18005e01c = 0xe;
      _DAT_18005e018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18005e018 = 5;
        DAT_18005e01c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18003d2a4(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18005e030 != 0;
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
  
  if (DAT_18005e010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18005e010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18005e010 == 0x2b992ddfa232) {
      DAT_18005e010 = 0x2b992ddfa233;
    }
  }
  DAT_18005e008 = ~DAT_18005e010;
  return;
}




void FUN_18003d364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018003d36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1800bde40);
  return;
}




void FUN_18003d374(void)

{
  __std_type_info_destroy_list(&DAT_1800bde40);
  return;
}




undefined * FUN_18003d380(void)

{
  return &DAT_1800bde50;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001010();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_18003d380();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_18003d3a4(void)

{
  return &DAT_1800bdea0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180059318; puVar1 < &DAT_180059318; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180059328; puVar1 < &DAT_180059328; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_18003d4c0(void)

{
  return 1;
}




undefined8 FUN_18003d4c4(void)

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
  
                    /* WARNING: Could not recover jumptable at 0x00018003d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_18003d670(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(*(undefined8 *)(param_2 + 0xb28));
  return;
}




void Unwind_18003d68b(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x90);
  return;
}




void Unwind_18003d6a6(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x50);
  return;
}




void Unwind_18003d6c0(void)

{
  FUN_180001e90();
  return;
}




void Unwind_18003d6e0(undefined8 param_1,longlong param_2)

{
  FUN_180004090(param_2 + 0xa0);
  return;
}




void Unwind_18003d700(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x60);
  return;
}




void Unwind_18003d718(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x80);
  return;
}




void Unwind_18003d740(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 200);
  return;
}




void Unwind_18003d760(undefined8 param_1,longlong param_2)

{
  FUN_180004090(param_2 + 0x100);
  return;
}




void Unwind_18003d780(void)

{
  FUN_180001210();
  return;
}




void Unwind_18003d7a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (*(longlong *)(param_2 + 0x40) + 0x98));
  }
  return;
}




void Unwind_18003d7ce(undefined8 param_1,longlong param_2)

{
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18003d7f0(undefined8 param_1,longlong param_2)

{
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_18003d810(void)

{
  _Init_thread_abort(&DAT_1800bde60);
  return;
}




void Unwind_18003d830(undefined8 param_1,longlong param_2)

{
  FUN_18000a6a0(param_2 + 0x58);
  return;
}




void Unwind_18003d848(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 200);
  return;
}




void Unwind_18003d863(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x88);
  return;
}




void Unwind_18003d87e(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xa8);
  return;
}




void Unwind_18003d899(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x128);
  return;
}




void Unwind_18003d8b4(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x108);
  return;
}




void Unwind_18003d8cf(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x148);
  return;
}




void Unwind_18003d8f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




undefined8 Catch_All_18003d90d(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0x18000a9c8;
}




void Unwind_18003d930(void)

{
  FUN_18000b720();
  return;
}




void Unwind_18003d948(void)

{
  FUN_18000b720();
  return;
}




void Unwind_18003d960(void)

{
  FUN_18000b720();
  return;
}




void Unwind_18003d980(void)

{
  FUN_180001210();
  return;
}




void Unwind_18003d9a0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x38);
  return;
}




void Catch_All_18003d9c0(undefined8 param_1,longlong param_2)

{
  FUN_18000b690(*(undefined8 *)(param_2 + 0xa0));
  FUN_18000be80(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_All_18003da10(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x28) = 0;
  return &DAT_18000d5fa;
}




undefined * Catch_All_18003da40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0xa8) = lVar1;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa8) + 0x30))
              (*(undefined8 *)(param_2 + 0xa8),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0xfa);
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  return &DAT_18000e2a2;
}




undefined * Catch_All_18003dad0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x68) = lVar1;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + 0x30))
              (*(undefined8 *)(param_2 + 0x68),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x744);
  }
  *(undefined4 *)(param_2 + 0x40) = 0x74512408;
  return &DAT_18001219d;
}




undefined * Catch_All_18003db4b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x88) = lVar1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + 0x30))
              (*(undefined8 *)(param_2 + 0x88),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\bootcommon.cpp",0x774);
  }
  *(undefined4 *)(param_2 + 0x40) = 0x77512408;
  return &DAT_180012375;
}




void Unwind_18003dbe0(void)

{
  _Init_thread_abort(&DAT_1800bde98);
  return;
}




void Unwind_18003dc00(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




undefined * Catch_All_18003dc1d(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x40) = 0x1011240a;
  *(undefined8 *)(*(longlong *)(param_2 + 0x2e0) + 0x1670) = 0;
  return &DAT_18001984d;
}




void Unwind_18003dc60(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




undefined * Catch_All_18003dc80(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x40) = 0x3011240a;
  *(undefined8 *)(param_2 + 0x48) = 0;
  return &DAT_18001b012;
}




undefined * Catch_All_18003dcc0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x40) = 0x35e12408;
  *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x1688) = 0;
  return &DAT_18001b4d9;
}




void Unwind_18003dd00(undefined8 param_1,longlong param_2)

{
  FUN_18002f0e0((int *)(param_2 + 0x120));
  return;
}




void Unwind_18003dd20(undefined8 param_1,longlong param_2)

{
  FUN_18002f0e0((int *)(param_2 + 0x70));
  return;
}




void Unwind_18003dd40(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




undefined * Catch_All_18003dd60(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x40) = 0x67e1240a;
  *(undefined8 *)(param_2 + 0x48) = 0;
  return &DAT_18001dd08;
}




void Unwind_18003dda0(undefined8 param_1,longlong param_2)

{
  FUN_180003800((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_18003ddc0(undefined8 param_1,longlong param_2)

{
  FUN_180003800((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_All_18003dde0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x24) = 0x7112408;
  return &DAT_18001f254;
}




undefined * Catch_All_18003de10(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0x18f1240a;
  return &DAT_18001feba;
}




undefined * Catch_All_18003de40(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x24) = 0x14612408;
  return &DAT_180020464;
}




undefined * Catch_All_18003de70(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x20) = 0x20d1240a;
  return &DAT_180020da0;
}




undefined * Catch_All_18003dea0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x68) = lVar1;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + 0x30))
              (*(undefined8 *)(param_2 + 0x68),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\getinstallvol.cpp",400);
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  return &DAT_180022815;
}




void Unwind_18003df20(undefined8 param_1,longlong param_2)

{
  FUN_180025390(param_2 + 0x88);
  return;
}




void Catch_All_18003df40(undefined8 param_1,longlong param_2)

{
  FUN_18000b690(*(undefined8 *)(param_2 + 0xa0));
  FUN_1800254e0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003df90(undefined8 param_1,longlong param_2)

{
  FUN_180003800((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_18003dfb0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xb8);
  return;
}




void Unwind_18003dfcb(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x98);
  return;
}




void Unwind_18003dfe6(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x78);
  return;
}




void Unwind_18003dffe(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x58);
  return;
}




void Unwind_18003e020(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xe8);
  return;
}




void Unwind_18003e03b(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x88);
  return;
}




void Unwind_18003e056(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 200);
  return;
}




void Unwind_18003e071(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xa8);
  return;
}




void Unwind_18003e090(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xc0);
  return;
}




void Unwind_18003e0ab(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xe0);
  return;
}




void Unwind_18003e0c6(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x120);
  return;
}




void Unwind_18003e0e1(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x100);
  return;
}




void Unwind_18003e100(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xf8);
  return;
}




void Unwind_18003e11b(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xd8);
  return;
}




void Unwind_18003e136(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x138);
  return;
}




void Unwind_18003e151(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x118);
  return;
}




void Unwind_18003e170(undefined8 param_1,longlong param_2)

{
  FUN_180004090(param_2 + 0x1f0);
  return;
}




undefined * Catch_All_18003e18b(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x138) = lVar1;
  if (*(longlong *)(param_2 + 0x138) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x138) + 0x30))
              (*(undefined8 *)(param_2 + 0x138),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x10d);
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  return &DAT_180029841;
}




undefined * Catch_All_18003e220(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x98) = lVar1;
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + 0x30))
              (*(undefined8 *)(param_2 + 0x98),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x184);
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  return &DAT_180029e75;
}




void Unwind_18003e2b0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(*(undefined8 *)(param_2 + 0xe0));
  return;
}




void Unwind_18003e2cb(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x88);
  return;
}




void Unwind_18003e2f0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xf0);
  return;
}




void Unwind_18003e30b(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xd0);
  return;
}




void Unwind_18003e326(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x110);
  return;
}




void Unwind_18003e350(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x80));
  return;
}




undefined * Catch_All_18003e370(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0x3af1240a;
  return &DAT_18002be51;
}




void Unwind_18003e3a0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x1b0);
  return;
}




void Unwind_18003e3bb(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 400);
  return;
}




void Unwind_18003e3d6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xf8));
  return;
}




void Unwind_18003e3f6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x108));
  return;
}




undefined * Catch_All_18003e416(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0xe0) = lVar1;
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x30))
              (*(undefined8 *)(param_2 + 0xe0),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x479);
  }
  *(undefined4 *)(param_2 + 0x60) = 0x47a1240a;
  return &DAT_18002cc04;
}




void Unwind_18003e4a0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x160);
  return;
}




void Unwind_18003e4bb(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x140);
  return;
}




void Unwind_18003e4d6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xb8));
  return;
}




void Unwind_18003e4f6(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 200));
  return;
}




undefined * Catch_All_18003e516(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0xa0) = lVar1;
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xa0) + 0x30))
              (*(undefined8 *)(param_2 + 0xa0),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x54b);
  }
  *(undefined4 *)(param_2 + 0x40) = 0x54c1240a;
  return &DAT_18002d4ec;
}




void Unwind_18003e5a0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x90);
  return;
}




void Unwind_18003e5c0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0xa0);
  return;
}




void Unwind_18003e5e0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x158);
  return;
}




void Unwind_18003e5fb(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x138);
  return;
}




void Unwind_18003e616(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xb0));
  return;
}




void Unwind_18003e636(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xc0));
  return;
}




undefined * Catch_All_18003e656(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x98) = lVar1;
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + 0x30))
              (*(undefined8 *)(param_2 + 0x98),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\harddiskboot.cpp",0x70c);
  }
  *(undefined4 *)(param_2 + 0x40) = 0x70d1240a;
  return &DAT_18002e75b;
}




void Unwind_18003e6e0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x98));
  return;
}




undefined * Catch_All_18003e700(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x78) = lVar1;
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x30))
              (*(undefined8 *)(param_2 + 0x78),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\iniedit.cpp",0x78);
  }
  *(undefined4 *)(param_2 + 0x50) = 0x791240a;
  return &DAT_18002f499;
}




void Catch_All_18003e780(undefined8 param_1,longlong param_2)

{
  FUN_18000b690(*(undefined8 *)(param_2 + 0xa0));
  FUN_180033070(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_All_18003e7d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180007470();
  *(longlong *)(param_2 + 0x58) = lVar1;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x30))
              (*(undefined8 *)(param_2 + 0x58),1,0x12400,L"Boot:%S %d failed\n",
               "k:\\_epm_re_main\\legacy_mod\\mod.boot\\ntsecurity.cpp",0x127);
  }
  *(undefined4 *)(param_2 + 0x44) = 0x12812408;
  return &DAT_180039357;
}




void Unwind_18003e850(undefined8 param_1,longlong param_2)

{
  FUN_180004090(param_2 + 0x130);
  return;
}




undefined * Catch_All_18003e86b(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x40) = 0x6a12408;
  return &DAT_180039da3;
}




void Unwind_18003e8a0(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x1a0);
  return;
}




void Unwind_18003e8bb(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x1c0);
  return;
}




void Unwind_18003e8d6(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x180);
  return;
}




void Unwind_18003e8f1(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x160);
  return;
}




void Unwind_18003e90c(undefined8 param_1,longlong param_2)

{
  FUN_180001db0(param_2 + 0x140);
  return;
}




void Unwind_18003e927(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0xd0));
  return;
}




undefined * Catch_All_18003e947(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0x2611240a;
  return &DAT_18003b47f;
}




void FUN_18003e98a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),
                  *(__uint64 *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}




/* Library Function - Single Match
    int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void *
   __ptr64))'::`1'::filt$0
   
   Library: Visual Studio 2005 Release */

undefined4
`void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::
__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x38) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




void FUN_18003e9f7(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x50),*(__uint64 *)(param_2 + 0x58),
                  *(__uint64 *)(param_2 + 0x28),*(_func_void_void_ptr **)(param_2 + 0x70));
  }
  return;
}




void FUN_18003ea23(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18003ea3a(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18003ea56(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




undefined * Catch_All_18003ea8c(void)

{
  return &DAT_18003d11d;
}




void FUN_18003eab0(void)

{
  FUN_18000a8d0((undefined8 *)&DAT_1800bde80);
  return;
}



