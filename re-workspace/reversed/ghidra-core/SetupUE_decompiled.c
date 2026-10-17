
void __cdecl FUN_00401000(void *param_1)

{
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  _memset(local_210,0,0x208);
  GetLocaleInfoW(0x400,0x1002,local_210,0x104);
  basic_string<>(param_1,(ushort *)local_210);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00401080(void *param_1)

{
  BOOL BVar1;
  HMODULE hModule;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char *lpProcName;
  _union_530 local_984 [9];
  uint local_960;
  uint local_95c;
  DWORD local_958;
  FARPROC local_954;
  HMODULE local_950;
  FARPROC local_94c;
  int local_948;
  _OSVERSIONINFOW local_944;
  ushort local_82c;
  byte local_82a;
  wchar_t local_828 [260];
  wchar_t local_620 [260];
  wchar_t local_418 [260];
  wchar_t local_210 [25];
  undefined1 local_1de [470];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_960 = 0;
  _memset(local_828,0,0x208);
  pwVar3 = L"Unknown operating system";
  pwVar4 = local_210;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pwVar4 = *(undefined4 *)pwVar3;
    pwVar3 = pwVar3 + 2;
    pwVar4 = pwVar4 + 2;
  }
  *pwVar4 = *pwVar3;
  _memset(local_1de,0,0x1d6);
  _memset(local_418,0,0x208);
  _memset(local_620,0,0x208);
  _memset(&local_944,0,0x11c);
  _memset(local_984,0,0x24);
  local_944.dwOSVersionInfoSize = 0x11c;
  BVar1 = GetVersionExW(&local_944);
  if (BVar1 == 0) {
    local_944.dwOSVersionInfoSize = 0x114;
    BVar1 = GetVersionExW(&local_944);
    if (BVar1 == 0) goto LAB_00401406;
  }
  local_94c = (FARPROC)0x0;
  local_950 = LoadLibraryA("ntdll.dll");
  if (local_950 != (HMODULE)0x0) {
    local_94c = GetProcAddress(local_950,"RtlGetNtVersionNumbers");
    if (local_94c != (FARPROC)0x0) {
      (*local_94c)(&local_944.dwMajorVersion,&local_944.dwMinorVersion,&local_944.dwBuildNumber);
      local_944.dwBuildNumber = local_944.dwBuildNumber & 0xffff;
    }
    FreeLibrary(local_950);
  }
  if (local_94c == (FARPROC)0x0) {
    local_948 = 0;
    iVar2 = NetWkstaGetInfo(0,100,&local_948);
    if ((iVar2 == 0) && (local_948 != 0)) {
      local_944.dwMajorVersion = *(DWORD *)(local_948 + 0xc);
      local_944.dwMinorVersion = *(DWORD *)(local_948 + 0x10);
      NetApiBufferFree(local_948);
    }
  }
  lpProcName = "GetNativeSystemInfo";
  hModule = GetModuleHandleW(L"kernel32.dll");
  local_954 = GetProcAddress(hModule,lpProcName);
  if (local_954 == (FARPROC)0x0) {
    GetSystemInfo((LPSYSTEM_INFO)&local_984[0].s);
  }
  else {
    (*local_954)(local_984);
  }
  FUN_00401600((int)&local_944,local_210);
  FUN_00401660((int)&local_944,local_210);
  FUN_004016c0((int)&local_944,local_210);
  FUN_00401720((int)&local_944,local_210);
  FUN_00401780((int)&local_944,local_210);
  FUN_004017e0((int)&local_944,(short *)&local_984[0].dwOemId,local_210,local_418,local_620);
  FUN_004019d0((int)&local_944,local_210,local_418);
  FUN_00401a50((int)&local_944,local_210,local_418);
  FUN_00401b20((int)&local_944,local_210,local_418);
  local_958 = local_944.dwMajorVersion;
  if ((local_944.dwMajorVersion == 6) || (local_944.dwMajorVersion == 10)) {
    local_95c = (uint)(ushort)local_984[0]._0_2_;
    if (local_95c == 0) {
      _wcscpy_s(local_620,0x104,L"32-bit");
    }
    else if (local_95c == 9) {
      _wcscpy_s(local_620,0x104,L"64-bit");
    }
  }
LAB_00401406:
  FID_conflict__swprintf
            (local_828,(wchar_t *)0x104,L"%s %s %s %s (%d.%d.%d.%d.%d)",local_210,local_418,
             local_620,local_944.szCSDVersion,local_944.dwMajorVersion,local_944.dwMinorVersion,
             local_944.dwBuildNumber,(uint)local_82a,(uint)local_82c);
  basic_string<>(param_1,(ushort *)local_828);
  local_960 = local_960 | 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_004014a0(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *local_f4;
  _TIME_ZONE_INFORMATION local_ec;
  undefined1 local_40 [24];
  wchar_t local_28 [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414af8;
  local_10 = ExceptionList;
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_14 = uVar1;
  GetTimeZoneInformation(&local_ec);
  basic_string<>(local_40,(ushort *)&DAT_0041585c);
  local_8 = 0;
  if (-local_ec.Bias < 1) {
    local_f4 = L"-";
  }
  else {
    local_f4 = L"+";
  }
  FUN_004022d0(local_40,local_f4);
  iVar2 = FUN_00407e28(-local_ec.Bias);
  local_28[0] = L'\0';
  local_28[1] = L'\0';
  local_28[2] = L'\0';
  local_28[3] = L'\0';
  local_28[4] = L'\0';
  local_28[5] = L'\0';
  local_28[6] = L'\0';
  local_28[7] = L'\0';
  local_28[8] = L'\0';
  local_28[9] = L'\0';
  FID_conflict__swprintf
            (local_28,(wchar_t *)0xa,L"%02d:%02d",iVar2 / 0x3c,iVar2 % 0x3c,uVar1,iVar2 / 0x3c,
             iVar2 % 0x3c,uVar3);
  FUN_004022d0(local_40,local_28);
  basic_string<>(param_1,local_40);
  local_8 = 0xffffffff;
  ~basic_string<>(local_40);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00401600(int param_1,wchar_t *param_2)

{
  if ((*(int *)(param_1 + 4) == 10) && (*(int *)(param_1 + 8) == 0)) {
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows 10");
    }
    else {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows Server 2016");
    }
  }
  return;
}




void __cdecl FUN_00401660(int param_1,wchar_t *param_2)

{
  if ((*(int *)(param_1 + 4) == 6) && (*(int *)(param_1 + 8) == 3)) {
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows 8.1");
    }
    else {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows Server 2012 R2");
    }
  }
  return;
}




void __cdecl FUN_004016c0(int param_1,wchar_t *param_2)

{
  if ((*(int *)(param_1 + 4) == 6) && (*(int *)(param_1 + 8) == 2)) {
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows 8");
    }
    else {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows Server 2012");
    }
  }
  return;
}




void __cdecl FUN_00401720(int param_1,wchar_t *param_2)

{
  if ((*(int *)(param_1 + 4) == 6) && (*(int *)(param_1 + 8) == 1)) {
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows 7");
    }
    else {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows Server 2008 R2");
    }
  }
  return;
}




void __cdecl FUN_00401780(int param_1,wchar_t *param_2)

{
  if ((*(int *)(param_1 + 4) == 6) && (*(int *)(param_1 + 8) == 0)) {
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows Vista");
    }
    else {
      _wcscpy_s(param_2,0x104,L"Microsoft Windows Server 2008");
    }
  }
  return;
}




void __cdecl
FUN_004017e0(int param_1,short *param_2,wchar_t *param_3,wchar_t *param_4,wchar_t *param_5)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) == 5) && (*(int *)(param_1 + 8) == 2)) {
    iVar1 = GetSystemMetrics(0x59);
    if (iVar1 == 0) {
      if (*(short *)(param_1 + 0x118) == 0x2000) {
        _wcscpy_s(param_3,0x104,L"Microsoft Windows Storage Server 2003");
      }
      else if (*(char *)(param_1 + 0x11a) == '\x01') {
        _wcscpy_s(param_3,0x104,L"Microsoft Windows XP");
      }
      else {
        _wcscpy_s(param_3,0x104,L"Microsoft Windows Server 2003");
      }
    }
    else {
      _wcscpy_s(param_3,0x104,L"Microsoft Windows Server 2003 R2");
    }
    if (*param_2 == 6) {
      _wcscpy_s(param_5,0x104,L"for Itanium-based Systems");
    }
    else if (*param_2 == 9) {
      _wcscpy_s(param_5,0x104,L"x64 Edition");
    }
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_4,0x104,L"Professional");
    }
    else if ((*(ushort *)(param_1 + 0x118) & 0x4000) == 0) {
      if ((*(ushort *)(param_1 + 0x118) & 0x80) == 0) {
        if ((*(ushort *)(param_1 + 0x118) & 2) == 0) {
          if ((*(ushort *)(param_1 + 0x118) & 0x400) == 0) {
            _wcscpy_s(param_4,0x104,L"Standard Edition");
          }
          else {
            _wcscpy_s(param_4,0x104,L"Web Edition");
          }
        }
        else {
          _wcscpy_s(param_4,0x104,L"Enterprise Edition");
        }
      }
      else {
        _wcscpy_s(param_4,0x104,L"Datacenter Edition");
      }
    }
    else {
      _wcscpy_s(param_4,0x104,L"Compute Cluster Edition");
    }
  }
  return;
}




void __cdecl FUN_004019d0(int param_1,wchar_t *param_2,wchar_t *param_3)

{
  if ((*(int *)(param_1 + 4) == 5) && (*(int *)(param_1 + 8) == 1)) {
    _wcscpy_s(param_2,0x104,L"Microsoft Windows XP");
    if ((*(ushort *)(param_1 + 0x118) & 0x200) == 0) {
      _wcscpy_s(param_3,0x104,L"Professional");
    }
    else {
      _wcscpy_s(param_3,0x104,L"Home Edition");
    }
  }
  return;
}




void __cdecl FUN_00401a50(int param_1,wchar_t *param_2,wchar_t *param_3)

{
  if ((*(int *)(param_1 + 4) == 5) && (*(int *)(param_1 + 8) == 0)) {
    _wcscpy_s(param_2,0x104,L"Microsoft Windows 2000");
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_3,0x104,L"Professional");
    }
    else if ((*(ushort *)(param_1 + 0x118) & 0x80) == 0) {
      if ((*(ushort *)(param_1 + 0x118) & 2) == 0) {
        _wcscpy_s(param_3,0x104,L"Server");
      }
      else {
        _wcscpy_s(param_3,0x104,L"Advanced Server");
      }
    }
    else {
      _wcscpy_s(param_3,0x104,L"Datacenter Server");
    }
  }
  return;
}




void __cdecl FUN_00401b20(int param_1,wchar_t *param_2,wchar_t *param_3)

{
  if (*(int *)(param_1 + 4) == 4) {
    _wcscpy_s(param_2,0x104,L"Microsoft Windows NT");
    if (*(char *)(param_1 + 0x11a) == '\x01') {
      _wcscpy_s(param_3,0x104,L"WorkStation 4.0");
    }
    else if ((*(ushort *)(param_1 + 0x118) & 2) == 0) {
      _wcscpy_s(param_3,0x104,L"Server 4.0");
    }
    else {
      _wcscpy_s(param_3,0x104,L"Server 4.0, Enterprise Edition");
    }
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char>
   >,class std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t)
   
   Library: Visual Studio 2015 Release */

int __fastcall _Compressed_pair<><>(int param_1)

{
  Bxty(param_1);
  _String_val<>(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><class
   std::allocator<char> const &>(struct std::_One_then_variadic_args_t,class std::allocator<char>
   const &)
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><class
   std::allocator<char> >(struct std::_One_then_variadic_args_t,class std::allocator<char> &&)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><class std::allocator<unsigned short> >(struct std::_One_then_variadic_args_t,class
   std::allocator<unsigned short> &&)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><class
   std::allocator<wchar_t> >(struct std::_One_then_variadic_args_t,class std::allocator<wchar_t> &&)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
FID_conflict__Compressed_pair<class_std::allocator<char>,class_std::_String_val<struct_std::_Simple_types<char>_>,1><class_std::allocator<char>_>
          (void *this,undefined4 param_1,undefined4 param_2)

{
  addressof<>(param_2);
  _String_val<>((int)this);
  return (int)this;
}




void * __thiscall FUN_00401c10(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_5;
  
  uVar1 = addressof<>(param_1);
  FID_conflict__Compressed_pair<class_std::allocator<char>,class_std::_String_val<struct_std::_Simple_types<char>_>,1><class_std::allocator<char>_>
            (this,(uint)local_5,uVar1);
  return this;
}




/* Library Function - Single Match
    void * __cdecl std::_Allocate<8,struct std::_Default_allocate_traits,0>(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Allocate<8,struct_std::_Default_allocate_traits,0>(uint param_1)

{
  void *pvVar1;
  
  if (param_1 < 0x1000) {
    if (param_1 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = _Default_allocate_traits::_Allocate(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_00401c80(param_1);
  }
  return pvVar1;
}




uint __cdecl FUN_00401c80(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = param_1 + 0x23;
  if (local_8 <= param_1) {
    local_8 = 0xffffffff;
  }
  pvVar1 = std::_Default_allocate_traits::_Allocate(local_8);
  if (pvVar1 == (void *)0x0) {
    FUN_00407d59();
  }
  uVar2 = (int)pvVar1 + 0x23U & 0xffffffe0;
  *(void **)(uVar2 - 4) = pvVar1;
  return uVar2;
}




/* Library Function - Multiple Matches With Same Base Name
    unsigned short * * __cdecl std::addressof<unsigned short *>(unsigned short * &)
    wchar_t * * __cdecl std::addressof<wchar_t *>(wchar_t * &)
   
   Library: Visual Studio 2017 Release */

undefined4 __cdecl addressof<>(undefined4 param_1)

{
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<4,0>(void *,unsigned int)
    void __cdecl std::_Deallocate<8,0>(void *,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl _Deallocate<>(void *param_1,uint param_2)

{
  if (0xfff < param_2) {
    FUN_004022f0((int *)&param_1,(int *)&param_2);
  }
  FUN_00404570(param_1);
  return;
}




/* Library Function - Single Match
    unsigned int __cdecl std::_Get_size_of_n<2>(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

uint __cdecl std::_Get_size_of_n<2>(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 << 1;
  if (0x7fffffff < param_1) {
    local_8 = 0xffffffff;
  }
  return local_8;
}




/* Library Function - Single Match
    unsigned int const & __cdecl std::_Max_value<unsigned int>(unsigned int const &,unsigned int
   const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

uint * __cdecl std::_Max_value<unsigned_int>(uint *param_1,uint *param_2)

{
  undefined4 local_8;
  
  if (*param_1 < *param_2) {
    local_8 = param_2;
  }
  else {
    local_8 = param_1;
  }
  return local_8;
}




/* Library Function - Single Match
    unsigned int const & __cdecl std::_Max_value<unsigned int>(unsigned int const &,unsigned int
   const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint * __cdecl std::_Max_value<unsigned_int>(uint *param_1,uint *param_2)

{
  undefined4 local_8;
  
  if (*param_2 < *param_1) {
    local_8 = param_2;
  }
  else {
    local_8 = param_1;
  }
  return local_8;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_for<class
   <lambda_03628ca18370b1f44a99b655e704819b>,wchar_t const *>(unsigned int,class
   <lambda_03628ca18370b1f44a99b655e704819b>,wchar_t const *)
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::_Reallocate_for<class
   <lambda_2b7e716477254df52771775b37436d39>,unsigned short const *>(unsigned int,class
   <lambda_2b7e716477254df52771775b37436d39>,unsigned short const *)
   
   Library: Visual Studio 2017 Release */

void * __thiscall _Reallocate_for<>(void *this,uint param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  allocator<char> *this_00;
  uint *puVar3;
  char **ppcVar4;
  char **ppcVar5;
  char *local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_c = this;
  uVar1 = FID_conflict_max_size(this);
  if (uVar1 < param_1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Xlen();
  }
  local_8 = (undefined4 *)FUN_00402490(local_c);
  uVar1 = local_8[5];
  uVar2 = FID_conflict__Calculate_growth(local_c,param_1);
  this_00 = (allocator<char> *)FUN_00402490(local_c);
  local_10 = std::allocator<char>::allocate(this_00,uVar2 + 1);
  FUN_00402210();
  local_8[4] = param_1;
  local_8[5] = uVar2;
  puVar3 = (uint *)addressof<>(local_10);
  FID_conflict_operator__(puVar3,param_1,param_3);
  if (uVar1 < 8) {
    ppcVar5 = &local_10;
    ppcVar4 = (char **)addressof<>(local_8);
    std::_Default_allocator_traits<class_std::allocator<char>_>::construct<char*,char*_const&>
              (this_00,ppcVar4,ppcVar5);
  }
  else {
    deallocate((void *)*local_8,uVar1 + 1);
    *local_8 = local_10;
  }
  return local_c;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
   <lambda_2fb699096920f2dc628cb0826b07831d>,wchar_t const *,unsigned int>(unsigned int,class
   <lambda_2fb699096920f2dc628cb0826b07831d>,wchar_t const *,unsigned int)
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Reallocate_grow_by<class <lambda_68b8a09d57a0de6c0cf526835bc8b658>,unsigned short const
   *,unsigned int>(unsigned int,class <lambda_68b8a09d57a0de6c0cf526835bc8b658>,unsigned short const
   *,unsigned int)
   
   Library: Visual Studio 2017 Release */

void * __thiscall
_Reallocate_grow_by<>(void *this,uint param_1,undefined4 param_2,uint *param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  allocator<char> *this_00;
  uint *puVar4;
  uint *puVar5;
  char **ppcVar6;
  uint uVar7;
  char **ppcVar8;
  char *local_14;
  uint local_10;
  void *local_c;
  uint *local_8;
  
  local_c = this;
  local_8 = (uint *)FUN_00402490(this);
  local_10 = local_8[4];
  uVar2 = FID_conflict_max_size(local_c);
  if (uVar2 - local_10 < param_1) {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Xlen();
  }
  uVar7 = local_10 + param_1;
  uVar2 = local_8[5];
  uVar3 = FID_conflict__Calculate_growth(local_c,uVar7);
  this_00 = (allocator<char> *)FUN_00402490(local_c);
  local_14 = std::allocator<char>::allocate(this_00,uVar3 + 1);
  FUN_00402210();
  local_8[4] = uVar7;
  local_8[5] = uVar3;
  puVar4 = (uint *)addressof<>(local_14);
  if (uVar2 < 8) {
    FID_conflict_operator__(puVar4,local_8,local_10,param_3,param_4);
    ppcVar8 = &local_14;
    ppcVar6 = (char **)addressof<>(local_8);
    std::_Default_allocator_traits<class_std::allocator<char>_>::construct<char*,char*_const&>
              (this_00,ppcVar6,ppcVar8);
  }
  else {
    pvVar1 = (void *)*local_8;
    uVar3 = local_10;
    puVar5 = (uint *)addressof<>(pvVar1);
    FID_conflict_operator__(puVar4,puVar5,uVar3,param_3,param_4);
    deallocate(pvVar1,uVar2 + 1);
    *local_8 = (uint)local_14;
  }
  return local_c;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char *,char * const &>(class std::allocator<char> &,char * * const,char * const &)
   
   Library: Visual Studio 2017 Release */

void __cdecl
std::_Default_allocator_traits<class_std::allocator<char>_>::construct<char*,char*_const&>
          (allocator<char> *param_1,char **param_2,char **param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)forward<>(4,param_2);
  puVar2 = (undefined4 *)addressof<>(param_3);
  *puVar1 = *puVar2;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::destroy<unsigned short *>(class std::allocator<unsigned short> &,unsigned short * * const)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::destroy<wchar_t *>(class std::allocator<wchar_t> &,wchar_t * * const)
   
   Library: Visual Studio 2017 Release */

void destroy<>(void)

{
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >(void)
    public: __thiscall std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_String_alloc<struct std::_String_base_types<unsigned
   short,class std::allocator<unsigned short> > >(void)
    public: __thiscall std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >(void)
   
   Library: Visual Studio 2015 Release */

int __fastcall _String_alloc<>(int param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
   std::_Simple_types<char> >(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_String_val<struct std::_Simple_types<unsigned short> >(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<wchar_t> >::_String_val<struct
   std::_Simple_types<wchar_t> >(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __fastcall _String_val<>(int param_1)

{
  Bxty(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_val<struct std::_Simple_types<char> >::_Bxty::_Bxty(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Bxty::_Bxty(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<wchar_t> >::_Bxty::_Bxty(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __fastcall Bxty(undefined4 param_1)

{
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > &&)
    public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > &&)
   
   Library: Visual Studio 2017 Release */

void * __thiscall basic_string<>(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00402490(param_1);
  uVar1 = addressof<>(uVar1);
  FUN_00401c10(this,uVar1);
  uVar1 = addressof<>(param_1);
  FID_conflict__Assign_rv_contents_with_alloc_always_equal(this,uVar1);
  ExceptionList = local_10;
  return this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(unsigned short const *
   const)
    public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(wchar_t const * const)
   
   Library: Visual Studio 2017 Release */

basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
* __thiscall basic_string<>(void *this,ushort *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414b48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>((int)this);
  local_8 = 0;
  FID_conflict__Tidy_init(this);
  std::
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)this,param_1);
  ExceptionList = local_10;
  return (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
          *)this;
}




void FUN_00402160(void)

{
  FUN_004021a0();
  return;
}




void FUN_00402180(void)

{
  FUN_00402160();
  return;
}




void FUN_004021a0(void)

{
  FUN_00402210();
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::~basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(void)
    public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::~basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void)
   
   Library: Visual Studio 2017 Release */

void __fastcall ~basic_string<>(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FID_conflict__Tidy_deallocate(param_1);
  FUN_00402180();
  ExceptionList = local_10;
  return;
}




void FUN_00402210(void)

{
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    char * const & __cdecl std::forward<char * const &>(char * const &)
    unsigned short * const & __cdecl std::forward<unsigned short * const &>(unsigned short * const
   &)
    wchar_t * const & __cdecl std::forward<wchar_t * const &>(wchar_t * const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

undefined4 __cdecl forward<>(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_03628ca18370b1f44a99b655e704819b>::operator()(wchar_t *
   const,unsigned int,wchar_t const * const)const 
    public: void __thiscall <lambda_2b7e716477254df52771775b37436d39>::operator()(unsigned short *
   const,unsigned int,unsigned short const * const)const 
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__(uint *param_1,int param_2,uint *param_3)

{
  undefined2 local_6;
  
  copy(param_1,param_3,param_2);
  local_6 = 0;
  assign((undefined2 *)((int)param_1 + param_2 * 2),&local_6);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_2fb699096920f2dc628cb0826b07831d>::operator()(wchar_t *
   const,wchar_t const * const,unsigned int,wchar_t const * const,unsigned int)const 
    public: void __thiscall <lambda_68b8a09d57a0de6c0cf526835bc8b658>::operator()(unsigned short *
   const,unsigned short const * const,unsigned int,unsigned short const * const,unsigned int)const 
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  undefined2 local_6;
  
  copy(param_1,param_2,param_3);
  copy((uint *)((int)param_1 + param_3 * 2),param_4,param_5);
  local_6 = 0;
  assign((undefined2 *)((int)param_1 + (param_3 + param_5) * 2),&local_6);
  return;
}




void __thiscall FUN_004022d0(void *this,wchar_t *param_1)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)this,param_1);
  return;
}




void __cdecl FUN_004022f0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_2 = *param_2 + 0x23;
  iVar1 = *(int *)(*param_1 + -4);
  uVar2 = *param_1 - iVar1;
  if ((uVar2 < 4) || (0x23 < uVar2)) {
    FUN_00407d59();
  }
  *param_1 = iVar1;
  return;
}




/* Library Function - Single Match
    public: static void * __cdecl std::_Default_allocate_traits::_Allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Default_allocate_traits::_Allocate(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00404540(param_1);
  return pvVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Assign_rv_contents_with_alloc_always_equal(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > &&,struct std::integral_constant<bool,1>)
    public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Assign_rv_contents_with_alloc_always_equal(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   &&,struct std::integral_constant<bool,1>)
   
   Library: Visual Studio 2017 Release */

void __thiscall
FID_conflict__Assign_rv_contents_with_alloc_always_equal(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00402490(param_1);
  uVar2 = FUN_00402490(this);
  puVar3 = (uint *)addressof<>(uVar2);
  puVar4 = (uint *)addressof<>(uVar1);
  FUN_00405180(puVar3,puVar4,0x18);
  FID_conflict__Tidy_init(param_1);
  ExceptionList = local_10;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned int __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Calculate_growth(unsigned int)const 
    public: unsigned int __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Calculate_growth(unsigned int)const 
   
   Library: Visual Studio 2017 Release */

uint __thiscall FID_conflict__Calculate_growth(void *this,uint param_1)

{
  uint *puVar1;
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = this;
  local_8 = FID_conflict_max_size(this);
  local_18 = FUN_00402490(local_10);
  local_14 = param_1 | 7;
  if ((local_14 <= local_8) &&
     (local_c = *(uint *)(local_18 + 0x14), local_c <= local_8 - (local_c >> 1))) {
    local_1c = (local_c >> 1) + local_c;
    puVar1 = std::_Max_value<unsigned_int>(&local_14,&local_1c);
    local_8 = *puVar1;
  }
  return local_8;
}




void __fastcall FUN_00402490(undefined4 param_1)

{
  Bxty(param_1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: bool __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Large_string_engaged(void)const 
    public: bool __thiscall std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Large_string_engaged(void)const 
   
   Library: Visual Studio 2017 Release */

bool __fastcall Large_string_engaged(int param_1)

{
  return 7 < *(uint *)(param_1 + 0x14);
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Myptr(void)
    public: wchar_t * __thiscall std::_String_val<struct std::_Simple_types<wchar_t> >::_Myptr(void)
   
   Library: Visual Studio 2017 Release */

undefined4 * __fastcall Myptr(undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_c;
  
  bVar1 = Large_string_engaged((int)param_1);
  local_c = param_1;
  if (bVar1) {
    local_c = (undefined4 *)addressof<>(*param_1);
  }
  return local_c;
}




void __fastcall FUN_00402520(undefined4 param_1)

{
  FUN_00402490(param_1);
  FUN_00402210();
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Tidy_deallocate(void)
    public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy_deallocate(void)
   
   Library: Visual Studio 2017 Release */

void __fastcall FID_conflict__Tidy_deallocate(undefined4 param_1)

{
  void *pvVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined2 local_6;
  
  FUN_00402520(param_1);
  puVar3 = (undefined4 *)FUN_00402490(param_1);
  bVar2 = Large_string_engaged((int)puVar3);
  if (bVar2) {
    pvVar1 = (void *)*puVar3;
    FUN_00402490(param_1);
    addressof<>(puVar3);
    destroy<>();
    deallocate(pvVar1,puVar3[5] + 1);
  }
  puVar3[4] = 0;
  puVar3[5] = 7;
  local_6 = 0;
  assign((undefined2 *)puVar3,&local_6);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Tidy_init(void)
    public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Tidy_init(void)
   
   Library: Visual Studio 2017 Release */

void __fastcall FID_conflict__Tidy_init(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 local_6;
  
  puVar1 = (undefined2 *)FUN_00402490(param_1);
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 10) = 7;
  local_6 = 0;
  assign(puVar1,&local_6);
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Xlen(void)
   
   Library: Visual Studio 2017 Release */

void __cdecl
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Xlen(void)

{
  FUN_004044e7("string too long");
  return;
}




/* Library Function - Single Match
    public: char * __thiscall std::allocator<char>::allocate(unsigned int)
   
   Library: Visual Studio 2017 Release */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = _Get_size_of_n<2>(param_1);
  pcVar2 = (char *)_Allocate<8,struct_std::_Default_allocate_traits,0>(uVar1);
  return pcVar2;
}




/* Library Function - Single Match
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(wchar_t const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this,wchar_t *param_1)

{
  uint uVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  
  uVar1 = _WChar_traits<unsigned_short>::length((ushort *)param_1);
  uVar1 = addressof<>(uVar1);
  pbVar2 = append(this,param_1,uVar1);
  return pbVar2;
}




/* Library Function - Single Match
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(wchar_t const * const,unsigned
   int)
   
   Library: Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this,wchar_t *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 local_8;
  undefined1 local_5;
  
  puVar2 = (undefined4 *)FUN_00402490(this);
  iVar1 = puVar2[4];
  if ((uint)(puVar2[5] - iVar1) < param_2) {
    local_5 = 0;
    this = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           _Reallocate_grow_by<>(this,param_2,0,(uint *)param_1,param_2);
  }
  else {
    puVar2[4] = iVar1 + param_2;
    puVar2 = Myptr(puVar2);
    move((uint *)((int)puVar2 + iVar1 * 2),(uint *)param_1,param_2);
    local_8 = 0;
    assign((undefined2 *)((int)puVar2 + (iVar1 + param_2) * 2),&local_8);
  }
  return this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_WChar_traits<unsigned short>::assign(unsigned short &,unsigned
   short const &)
    public: static void __cdecl std::_WChar_traits<wchar_t>::assign(wchar_t &,wchar_t const &)
   
   Library: Visual Studio 2017 Release */

void __cdecl assign(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::assign(unsigned short
   const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
* __thiscall
std::
basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
::assign(basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
         *this,ushort *param_1)

{
  uint uVar1;
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  *pbVar2;
  
  uVar1 = _WChar_traits<unsigned_short>::length(param_1);
  uVar1 = addressof<>(uVar1);
  pbVar2 = (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)FID_conflict_assign(this,(uint *)param_1,uVar1);
  return pbVar2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::assign(unsigned short
   const * const,unsigned int)
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(wchar_t const * const,unsigned
   int)
   
   Library: Visual Studio 2017 Release */

void * __thiscall FID_conflict_assign(void *this,uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined2 local_8;
  undefined1 local_5;
  
  puVar1 = (undefined4 *)FUN_00402490(this);
  if ((uint)puVar1[5] < param_2) {
    local_5 = 0;
    this = _Reallocate_for<>(this,param_2,0,param_1);
  }
  else {
    puVar2 = Myptr(puVar1);
    puVar1[4] = param_2;
    move(puVar2,param_1,param_2);
    local_8 = 0;
    assign((undefined2 *)((int)puVar2 + param_2 * 2),&local_8);
  }
  return this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __cdecl std::_WChar_traits<unsigned short>::copy(unsigned short
   * const,unsigned short const * const,unsigned int)
    public: static wchar_t * __cdecl std::_WChar_traits<wchar_t>::copy(wchar_t * const,wchar_t const
   * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

ulonglong __cdecl copy(uint *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_004029d0(param_1,param_2,param_3);
  return uVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall std::allocator<unsigned short>::deallocate(unsigned short *
   const,unsigned int)
    public: void __thiscall std::allocator<wchar_t>::deallocate(wchar_t * const,unsigned int)
   
   Library: Visual Studio 2017 Release */

void deallocate(void *param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 << 1);
  return;
}




/* Library Function - Single Match
    public: static unsigned int __cdecl std::_WChar_traits<unsigned short>::length(unsigned short
   const *)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl std::_WChar_traits<unsigned_short>::length(ushort *param_1)

{
  size_t sVar1;
  
  sVar1 = _wcslen((wchar_t *)param_1);
  return sVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: static int __cdecl std::numeric_limits<int>::max(void)
    public: static unsigned int __cdecl std::_Default_allocator_traits<class std::allocator<unsigned
   short> >::max_size(class std::allocator<unsigned short> const &)
    public: static unsigned int __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::max_size(class std::allocator<wchar_t> const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 FID_conflict_max_size(void)

{
  return 0x7fffffff;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned int __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::max_size(void)const 
    public: unsigned int __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::max_size(void)const 
   
   Library: Visual Studio 2017 Release */

uint __fastcall FID_conflict_max_size(undefined4 param_1)

{
  uint *puVar1;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [3];
  
  local_10[2] = param_1;
  FUN_00402490(param_1);
  local_10[0] = FID_conflict_max_size();
  local_10[1] = 8;
  puVar1 = std::_Max_value<unsigned_int>(local_10,local_10 + 1);
  local_14 = *puVar1;
  local_18 = local_14 - 1;
  local_1c = FID_conflict_max_size();
  puVar1 = std::_Max_value<unsigned_int>(&local_1c,&local_18);
  return *puVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __cdecl std::_WChar_traits<unsigned short>::move(unsigned short
   * const,unsigned short const * const,unsigned int)
    public: static wchar_t * __cdecl std::_WChar_traits<wchar_t>::move(wchar_t * const,wchar_t const
   * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

ulonglong __cdecl move(uint *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_004029f0(param_1,param_2,param_3);
  return uVar1;
}




undefined * FUN_00402930(void)

{
  return &DAT_0041d878;
}




/* Library Function - Multiple Matches With Different Base Names
    __vsprintf_s_l
    __vswprintf_s_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
FID_conflict___vsprintf_s_l
          (wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int local_c;
  
  puVar1 = (undefined4 *)FUN_00402930();
  local_c = ___stdio_common_vswprintf_s
                      (*puVar1,puVar1[1],_DstBuf,_DstSize,_Format,(__crt_locale_pointers *)_Locale,
                       _ArgList);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}




/* Library Function - Multiple Matches With Different Base Names
    _sprintf_s
    _swprintf
    _swprintf_s
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl FID_conflict__swprintf(wchar_t *_Dest,wchar_t *_Format,...)

{
  int iVar1;
  wchar_t *in_stack_0000000c;
  
  iVar1 = FID_conflict___vsprintf_s_l
                    (_Dest,(size_t)_Format,in_stack_0000000c,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}




ulonglong __cdecl FUN_004029d0(uint *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00405180(param_1,param_2,param_3 << 1);
  return uVar1;
}




ulonglong __cdecl FUN_004029f0(uint *param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00405700(param_1,param_2,param_3 << 1);
  return uVar1;
}




void FUN_00402a10(void)

{
  bool bVar1;
  char cVar2;
  LPWSTR lpCmdLine;
  DWORD DVar3;
  undefined4 *puVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_368 [16];
  undefined4 uStack_358;
  undefined1 auStack_350 [4];
  undefined4 uStack_34c;
  int iVar11;
  undefined1 local_32c [4];
  undefined1 local_328 [4];
  undefined4 local_324;
  undefined1 local_320 [4];
  undefined4 local_31c;
  undefined4 local_318;
  undefined1 local_314 [4];
  undefined1 local_310 [4];
  undefined4 local_30c;
  uint local_308;
  uint local_304;
  int local_300;
  int local_2fc;
  uint local_2f8;
  int local_2f4;
  LPWSTR *local_2f0;
  char local_2ea;
  char local_2e9;
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_228 [24];
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_30c = 0;
  local_2f0 = (LPWSTR *)0x0;
  local_2fc = 0;
  piVar6 = &local_2fc;
  lpCmdLine = GetCommandLineW();
  local_2f0 = CommandLineToArgvW(lpCmdLine,piVar6);
  if ((local_2f0 != (LPWSTR *)0x0) && (1 < local_2fc)) {
    _memset(local_210,0,0x208);
    DVar3 = GetModuleFileNameW((HMODULE)0x0,local_210,0x104);
    if ((DVar3 != 0) &&
       (local_300 = FUN_00404330((undefined1 (*) [16])local_210,0x5c), local_300 != 0)) {
      *(undefined2 *)(local_300 + 2) = 0;
      _wcscat_s(local_210,0x104,L"InfoForSetup.exe");
      basic_string<>(local_228,(ushort *)&DAT_004158c0);
      for (local_2f4 = 1; local_2f4 < local_2fc; local_2f4 = local_2f4 + 1) {
        basic_string<>(local_240,(ushort *)local_2f0[local_2f4]);
        bVar1 = FUN_00403ec0(local_240);
        if (bVar1) {
          ~basic_string<>(local_240);
        }
        else {
          puVar4 = (undefined4 *)FID_conflict_begin(local_240,local_310);
          psVar5 = (short *)FUN_00403850(puVar4);
          if (*psVar5 == 0x7b) {
            piVar6 = (int *)FUN_00404060(local_240,local_314);
            psVar5 = (short *)FUN_00403870(piVar6);
            if (*psVar5 != 0x7d) goto LAB_00402c39;
            iVar11 = 1;
            puVar4 = &local_318;
            iVar7 = FID_conflict_size(local_240);
            puVar9 = &local_31c;
            uStack_34c = 0x402be3;
            pvVar8 = FID_conflict_begin(local_240,local_320);
            puVar9 = FID_conflict_operator_(pvVar8,puVar9,iVar7);
            FID_conflict_operator_(puVar9,puVar4,iVar11);
            iVar7 = 1;
            puVar4 = &local_324;
            pvVar8 = FID_conflict_begin(local_240,local_328);
            FID_conflict_operator_(pvVar8,puVar4,iVar7);
            assign<>(local_228);
            FUN_004022d0(local_228,L",");
          }
          else {
LAB_00402c39:
            puVar4 = (undefined4 *)FID_conflict_begin(local_240,local_32c);
            psVar5 = (short *)FUN_00403850(puVar4);
            if (*psVar5 == 0x2f) {
              basic_string<>(local_288,(ushort *)local_210);
              cVar2 = FUN_00402fa0(local_288,local_240);
              local_2e9 = cVar2 == '\0';
              local_304 = (uint)(byte)local_2e9;
              ~basic_string<>(local_288);
              if (local_2e9 != '\0') {
                ~basic_string<>(local_240);
                break;
              }
            }
          }
          ~basic_string<>(local_240);
        }
      }
      FUN_004022d0(local_228,L"\"Country\":\"");
      uVar10 = FUN_00401000(local_2b8);
      FUN_00403a20(local_228,uVar10);
      ~basic_string<>(local_2b8);
      FUN_004022d0(local_228,L"\",\"Timezone\":\"");
      uVar10 = FUN_004014a0(local_2d0);
      FUN_00403a20(local_228,uVar10);
      ~basic_string<>(local_2d0);
      FUN_004022d0(local_228,L"\",\"OS\":\"");
      uVar10 = FUN_00401080(local_2e8);
      FUN_00403a20(local_228,uVar10);
      ~basic_string<>(local_2e8);
      basic_string<>(local_270,(ushort *)&DAT_00415914);
      uStack_358 = 0x402dac;
      basic_string<>(auStack_350,(ushort *)L"Testid");
      basic_string<>(auStack_368,(ushort *)L"SOFTWARE\\EASEUS\\DRW\\Version");
      FUN_00403170();
      FUN_004022d0(local_228,L"\",\"Test_id\":\"");
      FUN_00403a20(local_228,local_270);
      FUN_004022d0(local_228,L"\"}");
      for (local_2f8 = FUN_00403f90(local_228,0x22,0); local_2f8 != 0xffffffff;
          local_2f8 = FUN_00403f90(local_228,0x22,local_2f8 + 2)) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::replace
                  (local_228,local_2f8,1,"\\");
      }
      basic_string<>(local_258,
                     (ushort *)
                     L"/SendInfo \"Window\" \"Install\" \"Activity\" \"Info_Userinfo\" \"Attribute\" \""
                    );
      FUN_00403a20(local_258,local_228);
      FUN_004022d0(local_258,L"\"");
      FUN_004022d0(local_258,L" \"vid\" \"");
      FUN_00403a20(local_258,local_270);
      FUN_004022d0(local_258,L"\"");
      basic_string<>(local_2a0,(ushort *)local_210);
      cVar2 = FUN_00402fa0(local_2a0,local_258);
      local_2ea = cVar2 == '\0';
      local_308 = (uint)(byte)local_2ea;
      ~basic_string<>(local_2a0);
      if (local_2ea == '\0') {
        ~basic_string<>(local_258);
        ~basic_string<>(local_270);
        ~basic_string<>(local_228);
      }
      else {
        ~basic_string<>(local_258);
        ~basic_string<>(local_270);
        ~basic_string<>(local_228);
      }
    }
  }
  if (local_2f0 != (LPWSTR *)0x0) {
    LocalFree(local_2f0);
    local_2f0 = (LPWSTR *)0x0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined1 __cdecl FUN_00402fa0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  rsize_t rVar5;
  wchar_t *pwVar6;
  LPWSTR lpCommandLine;
  LPSECURITY_ATTRIBUTES lpProcessAttributes;
  LPSECURITY_ATTRIBUTES lpThreadAttributes;
  BOOL BVar7;
  DWORD dwCreationFlags;
  LPVOID lpEnvironment;
  LPCWSTR lpCurrentDirectory;
  _STARTUPINFOW *lpStartupInfo;
  wchar_t *pwVar8;
  _PROCESS_INFORMATION *lpProcessInformation;
  _STARTUPINFOW local_74;
  _PROCESS_INFORMATION local_30;
  undefined1 local_20 [14];
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414bb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_11 = 1;
  bVar1 = FUN_00403ec0(param_2);
  if (!bVar1) {
    uVar2 = Bxty(&local_12);
    iVar3 = FID_conflict_size(param_1);
    iVar4 = FID_conflict_size(param_2);
    FUN_00403700(local_20,iVar3 + 4 + iVar4,uVar2);
    local_8 = 0;
    pwVar8 = L"\"";
    rVar5 = FUN_00404300(local_20);
    pwVar6 = (wchar_t *)FUN_00403820(local_20,0);
    _wcscpy_s(pwVar6,rVar5,pwVar8);
    pwVar6 = (wchar_t *)FUN_00403e20(param_1);
    rVar5 = FUN_00404300(local_20);
    pwVar8 = (wchar_t *)FUN_00403820(local_20,0);
    _wcscat_s(pwVar8,rVar5,pwVar6);
    pwVar8 = L"\" ";
    rVar5 = FUN_00404300(local_20);
    pwVar6 = (wchar_t *)FUN_00403820(local_20,0);
    _wcscat_s(pwVar6,rVar5,pwVar8);
    pwVar6 = (wchar_t *)FUN_00403e20(param_2);
    rVar5 = FUN_00404300(local_20);
    pwVar8 = (wchar_t *)FUN_00403820(local_20,0);
    _wcscat_s(pwVar8,rVar5,pwVar6);
    _memset(&local_74,0,0x44);
    local_74.cb = 0x44;
    local_30.hProcess = (HANDLE)0x0;
    local_30.hThread = (HANDLE)0x0;
    local_30.dwProcessId = 0;
    local_30.dwThreadId = 0;
    lpProcessInformation = &local_30;
    lpStartupInfo = &local_74;
    lpCurrentDirectory = (LPCWSTR)0x0;
    lpEnvironment = (LPVOID)0x0;
    dwCreationFlags = 0x20;
    BVar7 = 0;
    lpThreadAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    lpProcessAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    lpCommandLine = (LPWSTR)FUN_00403820(local_20,0);
    BVar7 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,lpProcessAttributes,lpThreadAttributes,BVar7,
                           dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,
                           lpProcessInformation);
    if (BVar7 == 0) {
      local_11 = 0;
      local_8 = 0xffffffff;
      FUN_004037c0(local_20);
    }
    else {
      WaitForSingleObject(local_30.hProcess,0xffffffff);
      if (local_30.hProcess != (HANDLE)0x0) {
        CloseHandle(local_30.hProcess);
        local_30.hProcess = (HANDLE)0x0;
      }
      if (local_30.hThread != (HANDLE)0x0) {
        CloseHandle(local_30.hThread);
        local_30.hThread = (HANDLE)0x0;
      }
      local_8 = 0xffffffff;
      FUN_004037c0(local_20);
    }
  }
  ExceptionList = local_10;
  return local_11;
}




void FUN_00403170(void)

{
  LPCWSTR pWVar1;
  void *in_stack_00000034;
  LPDWORD lpReserved;
  DWORD ulOptions;
  DWORD *lpType;
  REGSAM samDesired;
  ushort *lpData;
  HKEY *phkResult;
  DWORD *lpcbData;
  DWORD local_ec [2];
  HKEY local_e4;
  LSTATUS local_e0;
  ushort local_dc [100];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00414be3;
  local_10 = ExceptionList;
  local_14 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_ec[1] = 100;
  _memset(local_dc,0,200);
  phkResult = &local_e4;
  samDesired = 0x20119;
  ulOptions = 0;
  pWVar1 = (LPCWSTR)FUN_00403e20(&stack0x00000004);
  local_e0 = RegOpenKeyExW((HKEY)0x80000002,pWVar1,ulOptions,samDesired,phkResult);
  if (local_e0 == 0) {
    lpcbData = local_ec + 1;
    lpData = local_dc;
    lpType = local_ec;
    lpReserved = (LPDWORD)0x0;
    pWVar1 = (LPCWSTR)FUN_00403e20(&stack0x0000001c);
    local_e0 = RegQueryValueExW(local_e4,pWVar1,lpReserved,lpType,(LPBYTE)lpData,lpcbData);
    if (local_e0 == 0) {
      FUN_00403800(in_stack_00000034,local_dc);
    }
  }
  RegCloseKey(local_e4);
  local_8 = local_8 & 0xffffff00;
  ~basic_string<>(&stack0x00000004);
  local_8 = 0xffffffff;
  ~basic_string<>(&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 * __thiscall FUN_00403280(void *this,undefined4 param_1,undefined4 param_2)

{
  addressof<>(param_2);
  FUN_004036b0((undefined4 *)this);
  return (undefined4 *)this;
}




void * __thiscall FUN_004032b0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_5;
  
  uVar1 = addressof<>(param_1);
  FUN_00403280(this,(uint)local_5,uVar1);
  return this;
}




/* Library Function - Single Match
    void __cdecl std::_Enable_shared_from_this<class __ExceptionPtr,class __ExceptionPtr>(class
   std::shared_ptr<class __ExceptionPtr> const &,class __ExceptionPtr *)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
          (shared_ptr<class___ExceptionPtr> *param_1,__ExceptionPtr *param_2)

{
  destroy<>();
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    char const * __cdecl std::_Find_unchecked<char const *,char>(char const * const,char const *
   const,char const &)
    unsigned short const * __cdecl std::_Find_unchecked<unsigned short const *,unsigned
   short>(unsigned short const * const,unsigned short const * const,unsigned short const &)
    wchar_t const * __cdecl std::_Find_unchecked<wchar_t const *,wchar_t>(wchar_t const *
   const,wchar_t const * const,wchar_t const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _Find_unchecked<>(void)

{
  destroy<>();
  return;
}




void __cdecl FUN_00403340(undefined4 *param_1)

{
  FUN_00403cc0(param_1);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_grow_by<class <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>,unsigned int,unsigned
   int,char const *,unsigned int>(unsigned int,class
   <lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>,unsigned int,unsigned int,char const *,unsigned int)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_grow_by<class_<lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>,unsigned_int,unsigned_int,char_const*,unsigned_int>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          uint param_1,undefined4 param_3,int param_4,int param_5,uint *param_6,int param_7)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  allocator<char> *this_00;
  uint *puVar4;
  uint *puVar5;
  char **ppcVar6;
  char **ppcVar7;
  char *local_14;
  uint local_10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_c;
  uint *local_8;
  
  local_c = this;
  local_8 = (uint *)FUN_00402490(this);
  local_10 = local_8[4];
  uVar2 = FID_conflict_max_size(local_c);
  if (uVar2 - local_10 < param_1) {
    _Xlen();
  }
  param_1 = local_10 + param_1;
  uVar2 = local_8[5];
  uVar3 = FID_conflict__Calculate_growth(local_c,param_1);
  this_00 = (allocator<char> *)FUN_00402490(local_c);
  local_14 = allocator<char>::allocate(this_00,uVar3 + 1);
  FUN_00402210();
  local_8[4] = param_1;
  local_8[5] = uVar3;
  puVar4 = (uint *)addressof<>(local_14);
  if (uVar2 < 8) {
    FUN_00403970(puVar4,local_8,local_10,param_4,param_5,param_6,param_7);
    ppcVar7 = &local_14;
    ppcVar6 = (char **)addressof<>(local_8);
    _Default_allocator_traits<class_std::allocator<char>_>::construct<char*,char*_const&>
              (this_00,ppcVar6,ppcVar7);
  }
  else {
    pvVar1 = (void *)*local_8;
    uVar3 = local_10;
    puVar5 = (uint *)addressof<>(pvVar1);
    FUN_00403970(puVar4,puVar5,uVar3,param_4,param_5,param_6,param_7);
    deallocate(pvVar1,uVar2 + 1);
    *local_8 = (uint)local_14;
  }
  return local_c;
}




void FUN_00403490(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 local_c [4];
  void *local_8;
  
  uVar1 = param_4 - (int)param_3 >> 1;
  puVar5 = param_3;
  uVar2 = FUN_004038e0(&param_2,&param_1);
  piVar3 = (int *)FUN_00403ea0(local_8,local_c);
  uVar4 = FUN_004038e0(&param_1,piVar3);
  FUN_00404100(local_8,uVar4,uVar2,puVar5,uVar1);
  return;
}




int __cdecl FUN_004034e0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 < param_2) &&
     (iVar1 = FUN_00403f70((wchar_t *)(param_1 + param_3 * 2),param_2 - param_3,
                           (wchar_t *)&stack0x00000010), iVar1 != 0)) {
    return iVar1 - param_1 >> 1;
  }
  return -1;
}




void __cdecl FUN_00403530(void *param_1,int param_2)

{
  FUN_00403580(param_1,(int)((int)param_1 + param_2 * 2));
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    char const * __cdecl std::_Find_unchecked<char const *,char>(char const * const,char const *
   const,char const &)
    unsigned short const * __cdecl std::_Find_unchecked<unsigned short const *,unsigned
   short>(unsigned short const * const,unsigned short const * const,unsigned short const &)
    wchar_t const * __cdecl std::_Find_unchecked<wchar_t const *,wchar_t>(wchar_t const *
   const,wchar_t const * const,wchar_t const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl _Find_unchecked<>(void *param_1,int param_2)

{
  FUN_00403530(param_1,param_2);
  return;
}




int __cdecl FUN_00403580(void *param_1,int param_2)

{
  _memset(param_1,0,param_2 - (int)param_1);
  return param_2;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign<class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   >(class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >,class
   std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >)
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::assign<class
   std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned short> > >
   >(class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned short> >
   >,class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned short> >
   >)
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign<class
   std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> > > >(class
   std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> > >,class
   std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> > >)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

void __fastcall assign<>(void *param_1)

{
  undefined4 *puVar1;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FID_conflict_end(param_1,local_14);
  local_c = *puVar1;
  puVar1 = (undefined4 *)FID_conflict_end(local_8,local_18);
  local_10 = *puVar1;
  FUN_00403600(local_10,local_c);
  return;
}




void FUN_00403600(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
            ((shared_ptr<class___ExceptionPtr> *)&stack0x0000000c,(__ExceptionPtr *)&stack0x00000010
            );
  puVar1 = (uint *)FUN_00403340((undefined4 *)&stack0x0000000c);
  iVar2 = FUN_00403340((undefined4 *)&stack0x00000010);
  FUN_00403490(param_1,param_2,puVar1,iVar2);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >(char const *,struct std::_Container_base0 const *)
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >(unsigned short const *,struct std::_Container_base0 const
   *)
    public: __thiscall std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >(wchar_t const *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> >
   > > >::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Container_base0 const *)
     5 names - too many to list
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined4 * __thiscall
FID_conflict__Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::shared_ptr<struct_Concurrency::details::_Task_impl<struct_std::pair<unsigned_char,class_Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
          (void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  FUN_00403a60();
  return (undefined4 *)this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >(unsigned short *,struct std::_Container_base0 const *)
    public: __thiscall std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >::_String_iterator<class std::_String_val<struct
   std::_Simple_types<wchar_t> > >(wchar_t *,struct std::_Container_base0 const *)
   
   Library: Visual Studio 2017 Release */

void * __thiscall _String_iterator<>(void *this,undefined4 param_1)

{
  FID_conflict__Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::shared_ptr<struct_Concurrency::details::_Task_impl<struct_std::pair<unsigned_char,class_Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
            (this,param_1);
  return this;
}




undefined4 * __fastcall FUN_004036b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined4 * __thiscall FUN_004036e0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return (undefined4 *)this;
}




void * __thiscall FUN_00403700(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00414c10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004032b0(this,param_2);
  uVar1 = FUN_00403a70(this,param_1);
  if ((uVar1 & 0xff) != 0) {
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_00403bc0(this);
    uVar3 = FUN_00403c90(this,(void *)*puVar2,param_1);
    puVar2 = (undefined4 *)Bx(this);
    *puVar2 = uVar3;
    pvVar4 = (void *)FUN_00403795();
    return pvVar4;
  }
  ExceptionList = local_10;
  return this;
}




undefined * Catch_All_0040377e(void)

{
  int unaff_EBP;
  
  FUN_00403c00(*(undefined4 *)(unaff_EBP + -0x14));
  __CxxThrowException_8((int *)0x0,(byte *)0x0);
  return &DAT_0040379e;
}




undefined4 FUN_00403795(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}




void __fastcall FUN_004037c0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403c00(param_1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_00403800(void *this,ushort *param_1)

{
  std::
  basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
  ::assign((basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)this,param_1);
  return;
}




int __thiscall FUN_00403820(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00403bc0(this);
  return *piVar1 + param_1 * 2;
}




undefined4 __fastcall FUN_00403840(undefined4 *param_1)

{
  return *param_1;
}




void __fastcall FUN_00403850(undefined4 *param_1)

{
  FUN_00403840(param_1);
  return;
}




void __fastcall FUN_00403870(int *param_1)

{
  int *piVar1;
  int local_c;
  int *local_8;
  
  local_c = *param_1;
  local_8 = param_1;
  piVar1 = FUN_004038c0(&local_c);
  FUN_00403850(piVar1);
  return;
}




int * __fastcall FUN_004038a0(int *param_1)

{
  *param_1 = *param_1 + -2;
  return param_1;
}




int * __fastcall FUN_004038c0(int *param_1)

{
  FUN_004038a0(param_1);
  return param_1;
}




int __thiscall FUN_004038e0(void *this,int *param_1)

{
  FUN_00403a60();
                    /* WARNING: Load size is inaccurate */
  return *this - *param_1 >> 1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator-(int)const 
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator-(int)const 
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   >::operator-(int)const 
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 * __thiscall FID_conflict_operator_(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_c;
  void *local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_c = *this;
  local_8 = this;
  puVar1 = (undefined4 *)FID_conflict_operator__(&local_c,param_2);
  *param_1 = *puVar1;
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator-(int)const 
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator-(int)const 
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   >::operator-(int)const 
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator+(int)const 
     8 names - too many to list
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

undefined4 * __thiscall FID_conflict_operator_(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_c;
  void *local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_c = *this;
  local_8 = this;
  puVar1 = (undefined4 *)FUN_00403a00(&local_c,param_2);
  *param_1 = *puVar1;
  return param_1;
}




ulonglong FUN_00403970(uint *param_1,uint *param_2,int param_3,int param_4,int param_5,uint *param_6
                      ,int param_7)

{
  ulonglong uVar1;
  
  copy(param_1,param_2,param_4);
  copy((uint *)((int)param_1 + param_4 * 2),param_6,param_7);
  uVar1 = copy((uint *)((int)param_1 + param_7 * 2 + param_4 * 2),
               (uint *)((int)param_2 + param_5 * 2 + param_4 * 2),
               ((param_3 - param_5) - param_4) + 1);
  return uVar1;
}




int * __thiscall FUN_004039e0(void *this,int param_1)

{
                    /* WARNING: Load size is inaccurate */
  *(int *)this = *this + param_1 * 2;
  return (int *)this;
}




void * __thiscall FUN_00403a00(void *this,int param_1)

{
  FUN_004039e0(this,param_1);
  return this;
}




void __thiscall FUN_00403a20(void *this,undefined4 param_1)

{
  FID_conflict_append(this,param_1);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> > & __thiscall std::_String_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> >::operator-=(int)
    public: class std::_String_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::_String_iterator<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::operator-=(int)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > > &
   __thiscall std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator-=(int)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > & __thiscall std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator-=(int)
     6 names - too many to list
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2017 Release */

void __thiscall FID_conflict_operator__(void *this,int param_1)

{
  FUN_00403a00(this,-param_1);
  return;
}




void FUN_00403a60(void)

{
  return;
}




uint __thiscall FUN_00403a70(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  allocator<char> *this_00;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)FUN_00403bc0(this);
  *puVar2 = 0;
  puVar2 = (undefined4 *)Bx(this);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_00403ba0(this);
  *puVar2 = 0;
  if (param_1 == 0) {
    uVar3 = (uint)puVar2 & 0xffffff00;
  }
  else {
    uVar3 = FUN_00404020(this);
    if (uVar3 < param_1) {
      FUN_00403ce0();
    }
    uVar3 = param_1;
    this_00 = (allocator<char> *)FUN_00402490(this);
    pcVar4 = std::allocator<char>::allocate(this_00,uVar3);
    puVar2 = (undefined4 *)FUN_00403bc0(this);
    *puVar2 = pcVar4;
    puVar2 = (undefined4 *)FUN_00403bc0(this);
    puVar5 = (undefined4 *)Bx(this);
    *puVar5 = *puVar2;
    piVar6 = (int *)FUN_00403bc0(this);
    iVar1 = *piVar6;
    piVar6 = (int *)FUN_00403ba0(this);
    *piVar6 = iVar1 + param_1 * 2;
    uVar3 = CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  return uVar3;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall std::_String_val<struct std::_Simple_types<char>
   >::_Check_offset(unsigned int)const 
    public: void __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Check_offset(unsigned int)const 
    public: void __thiscall std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Check_offset(unsigned int)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall Check_offset(void *this,uint param_1)

{
  if (*(uint *)((int)this + 0x10) < param_1) {
    Xran();
  }
  return;
}




/* Library Function - Single Match
    public: unsigned int __thiscall std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned int,unsigned int)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
          (_String_val<struct_std::_Simple_types<char>_> *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint local_c;
  _String_val<struct_std::_Simple_types<char>_> *local_8;
  
  local_c = *(int *)(this + 0x10) - param_1;
  local_8 = this;
  puVar1 = _Max_value<unsigned_int>(&param_2,&local_c);
  return *puVar1;
}




void __fastcall FUN_00403b70(undefined4 param_1)

{
  FUN_00402490(param_1);
  _Find_unchecked<>();
  return;
}




int __fastcall FUN_00403ba0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00402490(param_1);
  return iVar1 + 8;
}




void __fastcall FUN_00403bc0(undefined4 param_1)

{
  FUN_00402490(param_1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: union std::_String_val<struct std::_Simple_types<unsigned short> >::_Bxty & __thiscall
   std::_String_alloc<struct std::_String_base_types<unsigned short,class std::allocator<unsigned
   short> > >::_Bx(void)
    public: union std::_String_val<struct std::_Simple_types<wchar_t> >::_Bxty & __thiscall
   std::_String_alloc<struct std::_String_base_types<wchar_t,class std::allocator<wchar_t> >
   >::_Bx(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

int __fastcall Bx(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00402490(param_1);
  return iVar1 + 4;
}




void __fastcall FUN_00403c00(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  FUN_00402520(param_1);
  piVar1 = (int *)FUN_00403bc0(param_1);
  if (*piVar1 != 0) {
    Bx(param_1);
    FUN_00403bc0(param_1);
    FUN_00403b70(param_1);
    iVar2 = FUN_00403e70(param_1);
    puVar3 = (undefined4 *)FUN_00403bc0(param_1);
    pvVar4 = (void *)*puVar3;
    FUN_00402490(param_1);
    deallocate(pvVar4,iVar2);
    puVar3 = (undefined4 *)FUN_00403bc0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)Bx(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_00403ba0(param_1);
    *puVar3 = 0;
  }
  return;
}




void __thiscall FUN_00403c90(void *this,void *param_1,int param_2)

{
  FUN_00402490(this);
  _Find_unchecked<>(param_1,param_2);
  return;
}




void __fastcall FUN_00403cc0(undefined4 *param_1)

{
  addressof<>(*param_1);
  return;
}




void FUN_00403ce0(void)

{
  FUN_004044e7("vector<T> too long");
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Xran(void)
    public: static void __cdecl std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Xran(void)
    public: static void __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_Xran(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void Xran(void)

{
  FUN_00404507("invalid string position");
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::append(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const &)
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   &)
   
   Library: Visual Studio 2017 Release */

void __thiscall FID_conflict_append(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)FUN_00402490(param_1);
  uVar3 = puVar1[4];
  pwVar2 = (wchar_t *)Myptr(puVar1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)this,pwVar2,uVar3);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::begin(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::begin(void)
   
   Library: Visual Studio 2017 Release */

void * __thiscall FID_conflict_begin(void *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00402490(this);
  puVar2 = (undefined4 *)addressof<>(uVar1);
  puVar2 = Myptr(puVar2);
  uVar1 = addressof<>(puVar2);
  _String_iterator<>(param_1,uVar1);
  ExceptionList = local_10;
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::begin(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::begin(void)
   
   Library: Visual Studio 2017 Release */

void * __thiscall FID_conflict_begin(void *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00402490(this);
  puVar2 = (undefined4 *)addressof<>(uVar1);
  puVar2 = Myptr(puVar2);
  uVar1 = addressof<>(puVar2);
  FID_conflict__Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::shared_ptr<struct_Concurrency::details::_Task_impl<struct_std::pair<unsigned_char,class_Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
            (param_1,uVar1);
  ExceptionList = local_10;
  return param_1;
}




void __fastcall FUN_00403e20(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00402490(param_1);
  Myptr(puVar1);
  ExceptionList = local_10;
  return;
}




int __fastcall FUN_00403e70(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00403ba0(param_1);
  piVar2 = (int *)FUN_00403bc0(param_1);
  return *piVar1 - *piVar2 >> 1;
}




void * __thiscall FUN_00403ea0(void *this,void *param_1)

{
  FID_conflict_begin(this,param_1);
  return param_1;
}




bool __fastcall FUN_00403ec0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FID_conflict_size(param_1);
  return iVar1 == 0;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::end(void)
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::end(void)
   
   Library: Visual Studio 2017 Release */

void * __thiscall FID_conflict_end(void *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00402490(this);
  puVar2 = (undefined4 *)addressof<>(uVar1);
  puVar3 = Myptr(puVar2);
  iVar4 = addressof<>(puVar3);
  _String_iterator<>(param_1,iVar4 + puVar2[4] * 2);
  ExceptionList = local_10;
  return param_1;
}




void __cdecl FUN_00403f70(wchar_t *param_1,size_t param_2,wchar_t *param_3)

{
  _wmemchr(param_1,*param_3,param_2);
  return;
}




void __thiscall FUN_00403f90(void *this,undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00402490(this);
  uVar2 = puVar1[4];
  puVar1 = Myptr(puVar1);
  FUN_004034e0((int)puVar1,uVar2,param_2);
  ExceptionList = local_10;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned int __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::size(void)const 
    public: unsigned int __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::size(void)const 
   
   Library: Visual Studio 2017 Release */

undefined4 __fastcall FID_conflict_size(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00402490(param_1);
  return *(undefined4 *)(iVar1 + 0x10);
}




uint __fastcall FUN_00404020(undefined4 param_1)

{
  uint *puVar1;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_00402490(param_1);
  local_c = FID_conflict_max_size();
  local_10 = FID_conflict_max_size();
  puVar1 = std::_Max_value<unsigned_int>(&local_10,&local_c);
  return *puVar1;
}




void * __thiscall FUN_00404060(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined1 local_18 [4];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00414b20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  puVar1 = (undefined4 *)FID_conflict_end(this,local_18);
  FUN_004036e0(param_1,*puVar1);
  ExceptionList = local_10;
  return param_1;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::replace(unsigned int,unsigned int,char const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::replace
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          uint param_1,uint param_2,char *param_3)

{
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  uVar1 = _WChar_traits<unsigned_short>::length((ushort *)param_3);
  uVar1 = addressof<>(uVar1);
  pbVar2 = FUN_00404100(this,param_1,param_2,(uint *)param_3,uVar1);
  return pbVar2;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00404100(void *this,uint param_1,uint param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  _String_val<struct_std::_Simple_types<char>_> *this_00;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint local_10;
  
  this_00 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_00402490(this);
  Check_offset(this_00,param_1);
  uVar4 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this_00,param_1,param_2);
  if (uVar4 == param_4) {
    puVar5 = Myptr((undefined4 *)this_00);
    move((uint *)((int)puVar5 + param_1 * 2),param_3,param_4);
  }
  else {
    iVar3 = *(int *)(this_00 + 0x10);
    iVar6 = ((iVar3 - uVar4) - param_1) + 1;
    if (param_4 < uVar4) {
      *(uint *)(this_00 + 0x10) = iVar3 - (uVar4 - param_4);
      puVar5 = Myptr((undefined4 *)this_00);
      puVar1 = (uint *)((int)puVar5 + param_1 * 2);
      move(puVar1,param_3,param_4);
      move((uint *)((int)puVar1 + param_4 * 2),(uint *)((int)puVar1 + uVar4 * 2),iVar6);
    }
    else {
      uVar7 = param_4 - uVar4;
      if ((uint)(*(int *)(this_00 + 0x14) - iVar3) < uVar7) {
        this = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               _Reallocate_grow_by<class_<lambda_f4fd5ca79072ce85a36b5022cfb0e6d1>,unsigned_int,unsigned_int,char_const*,unsigned_int>
                         ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)this,uVar7,0,param_1,uVar4,param_3,param_4);
      }
      else {
        *(uint *)(this_00 + 0x10) = iVar3 + uVar7;
        puVar5 = Myptr((undefined4 *)this_00);
        puVar1 = (uint *)((int)puVar5 + param_1 * 2);
        puVar2 = (uint *)((int)puVar1 + uVar4 * 2);
        if ((puVar1 < (uint *)((int)param_3 + param_4 * 2)) &&
           (param_3 <= (uint *)((int)puVar5 + iVar3 * 2))) {
          if (param_3 < puVar2) {
            local_10 = (int)puVar2 - (int)param_3 >> 1;
          }
          else {
            local_10 = 0;
          }
        }
        else {
          local_10 = param_4;
        }
        move((uint *)((int)puVar2 + uVar7 * 2),puVar2,iVar6);
        move(puVar1,param_3,local_10);
        copy((uint *)((int)puVar1 + local_10 * 2),(uint *)((int)param_3 + local_10 * 2 + uVar7 * 2),
             param_4 - local_10);
      }
    }
  }
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}




int __fastcall FUN_00404300(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)Bx(param_1);
  piVar2 = (int *)FUN_00403bc0(param_1);
  return *piVar1 - *piVar2 >> 1;
}




void __cdecl FUN_00404330(undefined1 (*param_1) [16],ushort param_2)

{
  FUN_00406185(param_1,param_2);
  return;
}




/* Library Function - Single Match
    _wmemchr
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

wchar_t * __cdecl _wmemchr(wchar_t *_S,wchar_t _C,size_t _N)

{
  while( true ) {
    if (_N == 0) {
      return (wchar_t *)0x0;
    }
    if (*_S == _C) break;
    _S = _S + 1;
    _N = _N - 1;
  }
  return _S;
}




exception * __thiscall FUN_00404386(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_004043a1(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ___std_exception_copy((undefined4 *)(param_1 + 4),(undefined4 *)(this + 4));
  return this;
}




/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,char *param_1)

{
  char *local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_c = param_1;
  _local_8 = CONCAT31((int3)((uint)this >> 8),1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ___std_exception_copy(&local_c,(undefined4 *)(this + 4));
  return this;
}




exception * __thiscall FUN_0040441a(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (exception *)this;
}




exception * __thiscall FUN_00404435(void *this,char *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (exception *)this;
}




exception * __thiscall FUN_00404454(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::logic_error::vftable;
  return (exception *)this;
}




exception * __thiscall FUN_0040446f(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (exception *)this;
}




exception * __thiscall FUN_0040448a(void *this,char *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (exception *)this;
}




undefined4 * __thiscall FUN_004044ba(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  ___std_exception_destroy((undefined4 *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00404570(this);
  }
  return (undefined4 *)this;
}




void FUN_004044e7(char *param_1)

{
  code *pcVar1;
  int local_10 [3];
  
  FUN_00404435(local_10,param_1);
  __CxxThrowException_8(local_10,&DAT_0041b9bc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_00404507(char *param_1)

{
  code *pcVar1;
  int local_10 [3];
  
  FUN_0040448a(local_10,param_1);
  __CxxThrowException_8(local_10,&DAT_0041b9f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




char * __fastcall FUN_00404527(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}




void __cdecl FUN_00404540(size_t param_1)

{
  code *pcVar1;
  int iVar2;
  int aiStack_10 [2];
  
  do {
    aiStack_10[1] = 0x40455a;
    iVar2 = FUN_00409366(param_1);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 != 0xffffffff) {
    FUN_00404830();
    return;
  }
  FUN_00404818(aiStack_10);
  __CxxThrowException_8(aiStack_10,&DAT_0041ba54);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void __cdecl FUN_00404570(void *param_1)

{
  FID_conflict__free(param_1);
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_0041d004) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl __scrt_common_main_seh(void)
   
   Library: Visual Studio 2017 Release */

int __cdecl __scrt_common_main_seh(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int unaff_ESI;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0041db9c != 1) {
      if (DAT_0041db9c == 0) {
        DAT_0041db9c = 1;
        iVar4 = __initterm_e((undefined4 *)&DAT_00415160,(undefined4 *)&DAT_00415178);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        __initterm((undefined4 *)&DAT_00415154,(undefined4 *)&DAT_0041515c);
        DAT_0041db9c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00404d2f();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        uVar9 = 0;
        uVar8 = 2;
        uVar3 = 0;
        guard_check_icall();
        (*pcVar1)(uVar3,uVar8,uVar9);
      }
      puVar6 = (uint *)FUN_00404d35();
      if ((*puVar6 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)puVar6), (char)uVar3 != '\0')) {
        __register_thread_local_exe_atexit_callback(*puVar6);
      }
      ___scrt_get_show_window_mode();
      __get_wide_winmain_command_line();
      unaff_ESI = FUN_00402a10();
      uVar7 = ___scrt_is_managed_app();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          __cexit();
        }
        ___scrt_uninitialize_crt('\x01','\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004047c1;
    }
  }
  ___scrt_fastfail();
LAB_004047c1:
                    /* WARNING: Subroutine does not return */
  _exit(unaff_ESI);
}




void entry(void)

{
  ___security_init_cookie();
  __scrt_common_main_seh();
  return;
}




undefined4 * __thiscall FUN_004047da(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00404570(this);
  }
  return (undefined4 *)this;
}




exception * __thiscall FUN_004047fd(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_00404818(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




void FUN_00404830(void)

{
  code *pcVar1;
  int local_10 [3];
  
  FUN_004043a1(local_10);
  __CxxThrowException_8(local_10,&DAT_0041b94c);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    ___raise_securityfailure
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___report_gsfailure(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
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
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0041d978 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0041d980 = (undefined4)uVar9;
  _DAT_0041d990 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041d994 = &stack0x00000004;
  _DAT_0041d8d0 = 0x10001;
  _DAT_0041d880 = 0xc0000409;
  _DAT_0041d884 = 1;
  _DAT_0041d890 = 1;
  DAT_0041d894 = 2;
  _DAT_0041d88c = unaff_retaddr;
  _DAT_0041d95c = in_GS;
  _DAT_0041d960 = in_FS;
  _DAT_0041d964 = in_ES;
  _DAT_0041d968 = in_DS;
  _DAT_0041d96c = unaff_EDI;
  _DAT_0041d970 = unaff_ESI;
  _DAT_0041d974 = unaff_EBX;
  _DAT_0041d97c = uVar3;
  _DAT_0041d984 = unaff_EBP;
  DAT_0041d988 = unaff_retaddr;
  _DAT_0041d98c = in_CS;
  _DAT_0041d998 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00415aec);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    int (__cdecl*__cdecl __crt_fast_encode_pointer<int (__cdecl*)(void)>(int
   (__cdecl*const)(void)))(void)
    void (__cdecl** __cdecl __crt_fast_encode_pointer<void (__cdecl**)(void)>(void (__cdecl**
   const)(void)))(void)
   
   Library: Visual Studio 2015 Release */

uint __cdecl __crt_fast_encode_pointer<>(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_0041d004;
}




/* Library Function - Single Match
    struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + *(ushort *)(param_1 + iVar1 + 6);
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((p_Var2->VirtualAddress <= param_2) &&
       (param_2 < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) break;
    p_Var2 = p_Var2 + 1;
  }
  return p_Var2;
}




/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Library: Visual Studio 2017 Release */

uint ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT31(extraout_var,bVar2);
  if (pvVar3 != (void *)0x0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_0041dba0 != (void *)0x0) {
        pvVar3 = DAT_0041dba0;
        pvVar1 = DAT_0041dba0;
      }
      DAT_0041dba0 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return (uint)pvVar3 & 0xffffff00;
}




/* Library Function - Single Match
    ___scrt_initialize_crt
   
   Library: Visual Studio 2017 Release */

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DAT_0041dba4 = 1;
  }
  ___isa_available_init();
  uVar1 = ___vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = ___acrt_initialize();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffff00;
}




/* Library Function - Single Match
    ___scrt_initialize_onexit_tables
   
   Library: Visual Studio 2017 Release */

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  
  if (DAT_0041dba5 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    ___scrt_fastfail();
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  bVar3 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar3) == 0) || (param_1 != 0)) {
    bVar2 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar2 | -1 << 0x20 - bVar2) ^ DAT_0041d004;
    DAT_0041dba8 = uVar4;
    DAT_0041dbac = uVar4;
    DAT_0041dbb0 = uVar4;
    DAT_0041dbb4 = uVar4;
    DAT_0041dbb8 = uVar4;
    DAT_0041dbbc = uVar4;
LAB_00404aed:
    DAT_0041dba5 = '\x01';
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar4 = __initialize_onexit_table(&DAT_0041dba8);
    if (uVar4 == 0) {
      uVar4 = __initialize_onexit_table(&DAT_0041dbb4);
      if (uVar4 == 0) goto LAB_00404aed;
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Library: Visual Studio 2017 Release */

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  uint uVar2;
  void *local_14;
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || ((int)p_Var1->Characteristics < 0)) {
    uVar2 = (uint)p_Var1 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar2;
}




/* Library Function - Single Match
    ___scrt_release_startup_lock
   
   Library: Visual Studio 2017 Release */

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_0041dba0;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0041dba0 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}




/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined4 __cdecl ___scrt_uninitialize_crt(char param_1,char param_2)

{
  undefined4 in_EAX;
  
  if ((DAT_0041dba4 == '\0') || (param_2 == '\0')) {
    ___acrt_uninitialize();
    in_EAX = ___vcrt_uninitialize(param_1);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2015 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)DAT_0041d004 & 0x1f;
  if (((DAT_0041d004 ^ DAT_0041dba8) >> bVar2 | (DAT_0041d004 ^ DAT_0041dba8) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = __crt_atexit();
  }
  else {
    iVar1 = __register_onexit_function();
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}




/* Library Function - Single Match
    _atexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* Library Function - Single Match
    ___get_entropy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint ___get_entropy(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}




/* Library Function - Single Match
    ___security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_0041d004 == 0xbb40e64e) || ((DAT_0041d004 & 0xffff0000) == 0)) {
    DAT_0041d004 = ___get_entropy();
    if (DAT_0041d004 == 0xbb40e64e) {
      DAT_0041d004 = 0xbb40e64f;
    }
    else if ((DAT_0041d004 & 0xffff0000) == 0) {
      DAT_0041d004 = DAT_0041d004 | (DAT_0041d004 | 0x4711) << 0x10;
    }
  }
  DAT_0041d000 = ~DAT_0041d004;
  return;
}




undefined4 FUN_00404cc2(void)

{
  return 0;
}




undefined4 FUN_00404cc5(void)

{
  return 1;
}




undefined4 FUN_00404cc9(void)

{
  return 0x4000;
}




void FUN_00404ccf(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0041dbc0);
  return;
}




undefined1 FUN_00404cdb(void)

{
  return 1;
}




void FUN_00404cde(void)

{
  code *pcVar1;
  errno_t eVar2;
  
  eVar2 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar2 == 0) {
    return;
  }
  ___scrt_fastfail();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}




undefined * FUN_00404d00(void)

{
  return &DAT_0041dbc8;
}




void FUN_00404d06(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00402930();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00404d00();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}




bool FUN_00404d23(void)

{
  return DAT_0041d00c == 0;
}




undefined * FUN_00404d2f(void)

{
  return &DAT_0041e384;
}




undefined * FUN_00404d35(void)

{
  return &DAT_0041e380;
}




/* Library Function - Single Match
    ___scrt_fastfail
   
   Library: Visual Studio 2017 Release */

void ___scrt_fastfail(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_00404f1b();
  _memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  _memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_00404f1b();
  }
  return;
}




/* Library Function - Single Match
    ___scrt_get_show_window_mode
   
   Library: Visual Studio 2017 Release */

WORD ___scrt_get_show_window_mode(void)

{
  _STARTUPINFOW local_48;
  
  _memset(&local_48,0,0x44);
  GetStartupInfoW(&local_48);
  if (((byte)local_48.dwFlags & 1) != 0) {
    return local_48.wShowWindow;
  }
  return 10;
}




/* Library Function - Single Match
    ___scrt_is_managed_app
   
   Library: Visual Studio 2017 Release */

uint ___scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     (((pHVar1 = (HMODULE)0x10b, (short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])) &&
      (piVar2[0x3a] != 0)))) {
    return 0x101;
  }
  return (uint)pHVar1 & 0xffffff00;
}




/* Library Function - Single Match
    ___scrt_unhandled_exception_filter@4
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 ___scrt_unhandled_exception_filter_4(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
    terminate();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404f1b(void)

{
  _DAT_0041dbd0 = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00404f33) */
/* WARNING: Removing unreachable block (ram,0x00404f34) */
/* WARNING: Removing unreachable block (ram,0x00404f3a) */
/* WARNING: Removing unreachable block (ram,0x00404f44) */
/* WARNING: Removing unreachable block (ram,0x00404f4b) */

void FUN_00404f23(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00404f5f) */
/* WARNING: Removing unreachable block (ram,0x00404f60) */
/* WARNING: Removing unreachable block (ram,0x00404f66) */
/* WARNING: Removing unreachable block (ram,0x00404f70) */
/* WARNING: Removing unreachable block (ram,0x00404f77) */

void FUN_00404f4f(void)

{
  return;
}




/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041d004 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00405057) */
/* WARNING: Removing unreachable block (ram,0x0040501c) */
/* WARNING: Removing unreachable block (ram,0x004050cf) */
/* Library Function - Single Match
    ___isa_available_init
   
   Library: Visual Studio 2017 Release */

undefined4 ___isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  DAT_0041dbd4 = 0;
  DAT_0041d010 = DAT_0041d010 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar4 = DAT_0041d010;
  if (BVar5 != 0) {
    DAT_0041d010 = DAT_0041d010 | 2;
    DAT_0041dbd4 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[3] == 0x6c65746e && piVar1[2] == 0x49656e69) && piVar1[1] == 0x756e6547) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_0041dbd8 = DAT_0041dbd8 | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        DAT_0041dbd8 = DAT_0041dbd8 | 2;
      }
    }
    if ((uVar7 & 0x100000) != 0) {
      DAT_0041d010 = uVar4 | 6;
      DAT_0041dbd4 = 2;
      if ((((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0041d010 = uVar4 | 0xe;
        DAT_0041dbd4 = 3;
        if ((uVar6 & 0x20) != 0) {
          DAT_0041d010 = uVar4 | 0x2e;
          DAT_0041dbd4 = 5;
        }
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2017 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0041e37c != 0;
}




ulonglong __cdecl FUN_00405180(uint *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  uint *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  uint uVar54;
  ulonglong uVar55;
  
  if ((param_2 < param_1) && (param_1 < (uint *)(param_3 + (int)param_2))) {
    puVar49 = (undefined4 *)((int)param_2 + param_3);
    puVar52 = (undefined4 *)((int)param_1 + param_3);
    uVar46 = param_3;
    uVar47 = param_3;
    if (0x1f < param_3) {
      if ((DAT_0041d010 >> 1 & 1) == 0) {
        if (((uint)puVar52 & 3) != 0) {
          uVar47 = (uint)puVar52 & 3;
          param_3 = param_3 - uVar47;
          do {
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            puVar49 = (undefined4 *)((int)puVar49 + -1);
            puVar52 = (undefined4 *)((int)puVar52 - 1);
            uVar47 = uVar47 - 1;
          } while (uVar47 != 0);
        }
        uVar46 = param_3;
        if (0x1f < param_3) {
          uVar46 = param_3 >> 2;
          while( true ) {
            if (uVar46 == 0) break;
            uVar46 = uVar46 - 1;
            puVar52[-1] = puVar49[-1];
            puVar49 = puVar49 + -1;
            puVar52 = puVar52 + -1;
          }
          switch(param_3 & 3) {
          case 0:
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 1:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 2:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar49 + -2);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 3:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar49 + -2);
            *(undefined1 *)((int)puVar52 - 3) = *(undefined1 *)((int)puVar49 + -3);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          }
        }
      }
      else {
        while (puVar50 = puVar49, puVar53 = puVar52, ((uint)puVar52 & 0xf) != 0) {
          puVar49 = (undefined4 *)((int)puVar49 + -1);
          puVar52 = (undefined4 *)((int)puVar52 + -1);
          *(undefined1 *)puVar52 = *(undefined1 *)puVar49;
          uVar46 = uVar46 - 1;
        }
        do {
          puVar49 = puVar50;
          puVar52 = puVar53;
          if (uVar46 < 0x80) break;
          puVar49 = puVar50 + -0x20;
          puVar52 = puVar53 + -0x20;
          uVar3 = puVar50[-0x1f];
          uVar4 = puVar50[-0x1e];
          uVar5 = puVar50[-0x1d];
          uVar6 = puVar50[-0x1c];
          uVar7 = puVar50[-0x1b];
          uVar8 = puVar50[-0x1a];
          uVar9 = puVar50[-0x19];
          uVar10 = puVar50[-0x18];
          uVar11 = puVar50[-0x17];
          uVar12 = puVar50[-0x16];
          uVar13 = puVar50[-0x15];
          uVar14 = puVar50[-0x14];
          uVar15 = puVar50[-0x13];
          uVar16 = puVar50[-0x12];
          uVar17 = puVar50[-0x11];
          uVar18 = puVar50[-0x10];
          uVar19 = puVar50[-0xf];
          uVar20 = puVar50[-0xe];
          uVar21 = puVar50[-0xd];
          uVar22 = puVar50[-0xc];
          uVar23 = puVar50[-0xb];
          uVar24 = puVar50[-10];
          uVar25 = puVar50[-9];
          uVar26 = puVar50[-8];
          uVar27 = puVar50[-7];
          uVar28 = puVar50[-6];
          uVar29 = puVar50[-5];
          uVar30 = puVar50[-4];
          uVar31 = puVar50[-3];
          uVar32 = puVar50[-2];
          uVar33 = puVar50[-1];
          *puVar52 = *puVar49;
          puVar53[-0x1f] = uVar3;
          puVar53[-0x1e] = uVar4;
          puVar53[-0x1d] = uVar5;
          puVar53[-0x1c] = uVar6;
          puVar53[-0x1b] = uVar7;
          puVar53[-0x1a] = uVar8;
          puVar53[-0x19] = uVar9;
          puVar53[-0x18] = uVar10;
          puVar53[-0x17] = uVar11;
          puVar53[-0x16] = uVar12;
          puVar53[-0x15] = uVar13;
          puVar53[-0x14] = uVar14;
          puVar53[-0x13] = uVar15;
          puVar53[-0x12] = uVar16;
          puVar53[-0x11] = uVar17;
          puVar53[-0x10] = uVar18;
          puVar53[-0xf] = uVar19;
          puVar53[-0xe] = uVar20;
          puVar53[-0xd] = uVar21;
          puVar53[-0xc] = uVar22;
          puVar53[-0xb] = uVar23;
          puVar53[-10] = uVar24;
          puVar53[-9] = uVar25;
          puVar53[-8] = uVar26;
          puVar53[-7] = uVar27;
          puVar53[-6] = uVar28;
          puVar53[-5] = uVar29;
          puVar53[-4] = uVar30;
          puVar53[-3] = uVar31;
          puVar53[-2] = uVar32;
          puVar53[-1] = uVar33;
          uVar46 = uVar46 - 0x80;
          puVar50 = puVar49;
          puVar53 = puVar52;
        } while ((uVar46 & 0xffffff80) != 0);
        puVar50 = puVar49;
        puVar53 = puVar52;
        if (0x1f < uVar46) {
          do {
            puVar49 = puVar50 + -8;
            puVar52 = puVar53 + -8;
            uVar3 = puVar50[-7];
            uVar4 = puVar50[-6];
            uVar5 = puVar50[-5];
            uVar6 = puVar50[-4];
            uVar7 = puVar50[-3];
            uVar8 = puVar50[-2];
            uVar9 = puVar50[-1];
            *puVar52 = *puVar49;
            puVar53[-7] = uVar3;
            puVar53[-6] = uVar4;
            puVar53[-5] = uVar5;
            puVar53[-4] = uVar6;
            puVar53[-3] = uVar7;
            puVar53[-2] = uVar8;
            puVar53[-1] = uVar9;
            uVar46 = uVar46 - 0x20;
            puVar50 = puVar49;
            puVar53 = puVar52;
          } while ((uVar46 & 0xffffffe0) != 0);
        }
      }
    }
    for (; (uVar46 & 0xfffffffc) != 0; uVar46 = uVar46 - 4) {
      puVar52 = puVar52 + -1;
      puVar49 = puVar49 + -1;
      *puVar52 = *puVar49;
    }
    for (; uVar46 != 0; uVar46 = uVar46 - 1) {
      puVar52 = (undefined4 *)((int)puVar52 - 1);
      puVar49 = (undefined4 *)((int)puVar49 + -1);
      *(undefined1 *)puVar52 = *(undefined1 *)puVar49;
    }
    return CONCAT44(uVar47,param_1);
  }
  uVar46 = param_3;
  puVar51 = param_1;
  if (0x1f < param_3) {
    if (param_3 < 0x80) {
      if ((DAT_0041d010 >> 1 & 1) != 0) {
LAB_0040564d:
        if (uVar46 == 0) goto LAB_004056b0;
        for (param_3 = uVar46 >> 5; param_3 != 0; param_3 = param_3 - 1) {
          uVar47 = param_2[1];
          uVar54 = param_2[2];
          uVar2 = param_2[3];
          uVar34 = param_2[4];
          uVar35 = param_2[5];
          uVar36 = param_2[6];
          uVar37 = param_2[7];
          *puVar51 = *param_2;
          puVar51[1] = uVar47;
          puVar51[2] = uVar54;
          puVar51[3] = uVar2;
          puVar51[4] = uVar34;
          puVar51[5] = uVar35;
          puVar51[6] = uVar36;
          puVar51[7] = uVar37;
          param_2 = param_2 + 8;
          puVar51 = puVar51 + 8;
        }
        goto LAB_0040567b;
      }
LAB_004053a7:
      uVar46 = (uint)param_1 & 3;
      while (uVar46 != 0) {
        *(char *)puVar51 = (char)*param_2;
        param_3 = param_3 - 1;
        param_2 = (uint *)((int)param_2 + 1);
        puVar51 = (uint *)((int)puVar51 + 1);
        uVar46 = (uint)puVar51 & 3;
      }
    }
    else {
      if ((DAT_0041dbd8 >> 1 & 1) != 0) {
        for (; uVar46 != 0; uVar46 = uVar46 - 1) {
          *(char *)puVar51 = (char)*param_2;
          param_2 = (uint *)((int)param_2 + 1);
          puVar51 = (uint *)((int)puVar51 + 1);
        }
        return CONCAT44(param_3,param_1);
      }
      if (((((uint)param_1 ^ (uint)param_2) & 0xf) == 0) && ((DAT_0041d010 >> 1 & 1) != 0)) {
        if (((uint)param_2 & 0xf) != 0) {
          uVar47 = 0x10 - ((uint)param_2 & 0xf);
          param_3 = param_3 - uVar47;
          for (uVar46 = uVar47 & 3; uVar46 != 0; uVar46 = uVar46 - 1) {
            *(char *)puVar51 = (char)*param_2;
            param_2 = (uint *)((int)param_2 + 1);
            puVar51 = (uint *)((int)puVar51 + 1);
          }
          for (uVar47 = uVar47 >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
            *puVar51 = *param_2;
            param_2 = param_2 + 1;
            puVar51 = puVar51 + 1;
          }
        }
        uVar46 = param_3 & 0x7f;
        for (param_3 = param_3 >> 7; param_3 != 0; param_3 = param_3 - 1) {
          uVar47 = param_2[1];
          uVar54 = param_2[2];
          uVar2 = param_2[3];
          uVar34 = param_2[4];
          uVar35 = param_2[5];
          uVar36 = param_2[6];
          uVar37 = param_2[7];
          uVar38 = param_2[8];
          uVar39 = param_2[9];
          uVar40 = param_2[10];
          uVar41 = param_2[0xb];
          uVar42 = param_2[0xc];
          uVar43 = param_2[0xd];
          uVar44 = param_2[0xe];
          uVar45 = param_2[0xf];
          *puVar51 = *param_2;
          puVar51[1] = uVar47;
          puVar51[2] = uVar54;
          puVar51[3] = uVar2;
          puVar51[4] = uVar34;
          puVar51[5] = uVar35;
          puVar51[6] = uVar36;
          puVar51[7] = uVar37;
          puVar51[8] = uVar38;
          puVar51[9] = uVar39;
          puVar51[10] = uVar40;
          puVar51[0xb] = uVar41;
          puVar51[0xc] = uVar42;
          puVar51[0xd] = uVar43;
          puVar51[0xe] = uVar44;
          puVar51[0xf] = uVar45;
          uVar47 = param_2[0x11];
          uVar54 = param_2[0x12];
          uVar2 = param_2[0x13];
          uVar34 = param_2[0x14];
          uVar35 = param_2[0x15];
          uVar36 = param_2[0x16];
          uVar37 = param_2[0x17];
          uVar38 = param_2[0x18];
          uVar39 = param_2[0x19];
          uVar40 = param_2[0x1a];
          uVar41 = param_2[0x1b];
          uVar42 = param_2[0x1c];
          uVar43 = param_2[0x1d];
          uVar44 = param_2[0x1e];
          uVar45 = param_2[0x1f];
          puVar51[0x10] = param_2[0x10];
          puVar51[0x11] = uVar47;
          puVar51[0x12] = uVar54;
          puVar51[0x13] = uVar2;
          puVar51[0x14] = uVar34;
          puVar51[0x15] = uVar35;
          puVar51[0x16] = uVar36;
          puVar51[0x17] = uVar37;
          puVar51[0x18] = uVar38;
          puVar51[0x19] = uVar39;
          puVar51[0x1a] = uVar40;
          puVar51[0x1b] = uVar41;
          puVar51[0x1c] = uVar42;
          puVar51[0x1d] = uVar43;
          puVar51[0x1e] = uVar44;
          puVar51[0x1f] = uVar45;
          param_2 = param_2 + 0x20;
          puVar51 = puVar51 + 0x20;
        }
        goto LAB_0040564d;
      }
      if (((DAT_0041dbd8 & 1) == 0) || (((uint)param_1 & 3) != 0)) goto LAB_004053a7;
      if (((uint)param_2 & 3) == 0) {
        if (((uint)param_1 >> 2 & 1) != 0) {
          uVar46 = *param_2;
          param_3 = param_3 - 4;
          param_2 = param_2 + 1;
          *param_1 = uVar46;
          param_1 = param_1 + 1;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          uVar1 = *(undefined8 *)param_2;
          param_3 = param_3 - 8;
          param_2 = param_2 + 2;
          *(undefined8 *)param_1 = uVar1;
          param_1 = param_1 + 2;
        }
        if (((uint)param_2 & 7) == 0) {
          puVar51 = param_2 + -2;
          uVar46 = *param_2;
          uVar47 = param_2[1];
          do {
            puVar48 = puVar51;
            uVar34 = puVar48[8];
            uVar35 = puVar48[9];
            param_3 = param_3 - 0x30;
            uVar36 = puVar48[6];
            uVar37 = puVar48[7];
            uVar38 = puVar48[8];
            uVar39 = puVar48[9];
            uVar54 = puVar48[0xe];
            uVar2 = puVar48[0xf];
            uVar40 = puVar48[10];
            uVar41 = puVar48[0xb];
            uVar42 = puVar48[0xc];
            uVar43 = puVar48[0xd];
            param_1[2] = uVar46;
            param_1[3] = uVar47;
            param_1[4] = uVar34;
            param_1[5] = uVar35;
            param_1[6] = uVar36;
            param_1[7] = uVar37;
            param_1[8] = uVar38;
            param_1[9] = uVar39;
            param_1[10] = uVar40;
            param_1[0xb] = uVar41;
            param_1[0xc] = uVar42;
            param_1[0xd] = uVar43;
            param_1 = param_1 + 0xc;
            puVar51 = puVar48 + 0xc;
            uVar46 = uVar54;
            uVar47 = uVar2;
          } while (0x2f < param_3);
          puVar48 = puVar48 + 0xe;
        }
        else if (((uint)param_2 >> 3 & 1) == 0) {
          puVar51 = param_2 + -1;
          uVar46 = *param_2;
          uVar47 = param_2[1];
          uVar54 = param_2[2];
          do {
            puVar48 = puVar51;
            uVar36 = puVar48[8];
            param_3 = param_3 - 0x30;
            uVar37 = puVar48[5];
            uVar38 = puVar48[6];
            uVar39 = puVar48[7];
            uVar40 = puVar48[8];
            uVar2 = puVar48[0xd];
            uVar34 = puVar48[0xe];
            uVar35 = puVar48[0xf];
            uVar41 = puVar48[9];
            uVar42 = puVar48[10];
            uVar43 = puVar48[0xb];
            uVar44 = puVar48[0xc];
            param_1[1] = uVar46;
            param_1[2] = uVar47;
            param_1[3] = uVar54;
            param_1[4] = uVar36;
            param_1[5] = uVar37;
            param_1[6] = uVar38;
            param_1[7] = uVar39;
            param_1[8] = uVar40;
            param_1[9] = uVar41;
            param_1[10] = uVar42;
            param_1[0xb] = uVar43;
            param_1[0xc] = uVar44;
            param_1 = param_1 + 0xc;
            puVar51 = puVar48 + 0xc;
            uVar46 = uVar2;
            uVar47 = uVar34;
            uVar54 = uVar35;
          } while (0x2f < param_3);
          puVar48 = puVar48 + 0xd;
        }
        else {
          puVar51 = param_2 + -3;
          uVar46 = *param_2;
          do {
            puVar48 = puVar51;
            uVar54 = puVar48[8];
            uVar2 = puVar48[9];
            uVar34 = puVar48[10];
            param_3 = param_3 - 0x30;
            uVar35 = puVar48[7];
            uVar36 = puVar48[8];
            uVar37 = puVar48[9];
            uVar38 = puVar48[10];
            uVar47 = puVar48[0xf];
            uVar39 = puVar48[0xb];
            uVar40 = puVar48[0xc];
            uVar41 = puVar48[0xd];
            uVar42 = puVar48[0xe];
            param_1[3] = uVar46;
            param_1[4] = uVar54;
            param_1[5] = uVar2;
            param_1[6] = uVar34;
            param_1[7] = uVar35;
            param_1[8] = uVar36;
            param_1[9] = uVar37;
            param_1[10] = uVar38;
            param_1[0xb] = uVar39;
            param_1[0xc] = uVar40;
            param_1[0xd] = uVar41;
            param_1[0xe] = uVar42;
            param_1 = param_1 + 0xc;
            puVar51 = puVar48 + 0xc;
            uVar46 = uVar47;
          } while (0x2f < param_3);
          puVar48 = puVar48 + 0xf;
        }
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          uVar46 = *puVar48;
          uVar47 = puVar48[1];
          uVar54 = puVar48[2];
          uVar2 = puVar48[3];
          puVar48 = puVar48 + 4;
          *param_1 = uVar46;
          param_1[1] = uVar47;
          param_1[2] = uVar54;
          param_1[3] = uVar2;
          param_1 = param_1 + 4;
        }
        if ((param_3 >> 2 & 1) != 0) {
          uVar46 = *puVar48;
          param_3 = param_3 - 4;
          puVar48 = puVar48 + 1;
          *param_1 = uVar46;
          param_1 = param_1 + 1;
        }
        if ((param_3 >> 3 & 1) != 0) {
          param_3 = param_3 - 8;
          *(undefined8 *)param_1 = *(undefined8 *)puVar48;
        }
                    /* WARNING: Could not recover jumptable at 0x004053a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar55 = (*(code *)(&switchD_004053d5::switchdataD_004053e4)[param_3])();
        return uVar55;
      }
    }
    uVar46 = param_3;
    if (0x1f < param_3) {
      for (uVar46 = param_3 >> 2; uVar46 != 0; uVar46 = uVar46 - 1) {
        *puVar51 = *param_2;
        param_2 = param_2 + 1;
        puVar51 = puVar51 + 1;
      }
      switch(param_3 & 3) {
      case 0:
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 1:
        *(char *)puVar51 = (char)*param_2;
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 2:
        *(char *)puVar51 = (char)*param_2;
        *(undefined1 *)((int)puVar51 + 1) = *(undefined1 *)((int)param_2 + 1);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 3:
        *(char *)puVar51 = (char)*param_2;
        *(undefined1 *)((int)puVar51 + 1) = *(undefined1 *)((int)param_2 + 1);
        *(undefined1 *)((int)puVar51 + 2) = *(undefined1 *)((int)param_2 + 2);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      }
    }
  }
LAB_0040567b:
  if ((uVar46 & 0x1f) != 0) {
    for (uVar47 = (uVar46 & 0x1f) >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
      param_3 = *param_2;
      *puVar51 = param_3;
      puVar51 = puVar51 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar46 = uVar46 & 3; uVar46 != 0; uVar46 = uVar46 - 1) {
      *(char *)puVar51 = (char)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
      puVar51 = (uint *)((int)puVar51 + 1);
    }
  }
LAB_004056b0:
  return CONCAT44(param_3,param_1);
}




ulonglong __cdecl FUN_00405700(uint *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint *puVar48;
  undefined4 *puVar49;
  undefined4 *puVar50;
  uint *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  uint uVar54;
  ulonglong uVar55;
  
  if ((param_2 < param_1) && (param_1 < (uint *)(param_3 + (int)param_2))) {
    puVar49 = (undefined4 *)((int)param_2 + param_3);
    puVar52 = (undefined4 *)((int)param_1 + param_3);
    uVar46 = param_3;
    uVar47 = param_3;
    if (0x1f < param_3) {
      if ((DAT_0041d010 >> 1 & 1) == 0) {
        if (((uint)puVar52 & 3) != 0) {
          uVar47 = (uint)puVar52 & 3;
          param_3 = param_3 - uVar47;
          do {
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            puVar49 = (undefined4 *)((int)puVar49 + -1);
            puVar52 = (undefined4 *)((int)puVar52 - 1);
            uVar47 = uVar47 - 1;
          } while (uVar47 != 0);
        }
        uVar46 = param_3;
        if (0x1f < param_3) {
          uVar46 = param_3 >> 2;
          while( true ) {
            if (uVar46 == 0) break;
            uVar46 = uVar46 - 1;
            puVar52[-1] = puVar49[-1];
            puVar49 = puVar49 + -1;
            puVar52 = puVar52 + -1;
          }
          switch(param_3 & 3) {
          case 0:
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 1:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 2:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar49 + -2);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          case 3:
            *(undefined1 *)((int)puVar52 - 1) = *(undefined1 *)((int)puVar49 + -1);
            *(undefined1 *)((int)puVar52 - 2) = *(undefined1 *)((int)puVar49 + -2);
            *(undefined1 *)((int)puVar52 - 3) = *(undefined1 *)((int)puVar49 + -3);
            return CONCAT44(param_3,param_1) & 0x3ffffffff;
          }
        }
      }
      else {
        while (puVar50 = puVar49, puVar53 = puVar52, ((uint)puVar52 & 0xf) != 0) {
          puVar49 = (undefined4 *)((int)puVar49 + -1);
          puVar52 = (undefined4 *)((int)puVar52 + -1);
          *(undefined1 *)puVar52 = *(undefined1 *)puVar49;
          uVar46 = uVar46 - 1;
        }
        do {
          puVar49 = puVar50;
          puVar52 = puVar53;
          if (uVar46 < 0x80) break;
          puVar49 = puVar50 + -0x20;
          puVar52 = puVar53 + -0x20;
          uVar3 = puVar50[-0x1f];
          uVar4 = puVar50[-0x1e];
          uVar5 = puVar50[-0x1d];
          uVar6 = puVar50[-0x1c];
          uVar7 = puVar50[-0x1b];
          uVar8 = puVar50[-0x1a];
          uVar9 = puVar50[-0x19];
          uVar10 = puVar50[-0x18];
          uVar11 = puVar50[-0x17];
          uVar12 = puVar50[-0x16];
          uVar13 = puVar50[-0x15];
          uVar14 = puVar50[-0x14];
          uVar15 = puVar50[-0x13];
          uVar16 = puVar50[-0x12];
          uVar17 = puVar50[-0x11];
          uVar18 = puVar50[-0x10];
          uVar19 = puVar50[-0xf];
          uVar20 = puVar50[-0xe];
          uVar21 = puVar50[-0xd];
          uVar22 = puVar50[-0xc];
          uVar23 = puVar50[-0xb];
          uVar24 = puVar50[-10];
          uVar25 = puVar50[-9];
          uVar26 = puVar50[-8];
          uVar27 = puVar50[-7];
          uVar28 = puVar50[-6];
          uVar29 = puVar50[-5];
          uVar30 = puVar50[-4];
          uVar31 = puVar50[-3];
          uVar32 = puVar50[-2];
          uVar33 = puVar50[-1];
          *puVar52 = *puVar49;
          puVar53[-0x1f] = uVar3;
          puVar53[-0x1e] = uVar4;
          puVar53[-0x1d] = uVar5;
          puVar53[-0x1c] = uVar6;
          puVar53[-0x1b] = uVar7;
          puVar53[-0x1a] = uVar8;
          puVar53[-0x19] = uVar9;
          puVar53[-0x18] = uVar10;
          puVar53[-0x17] = uVar11;
          puVar53[-0x16] = uVar12;
          puVar53[-0x15] = uVar13;
          puVar53[-0x14] = uVar14;
          puVar53[-0x13] = uVar15;
          puVar53[-0x12] = uVar16;
          puVar53[-0x11] = uVar17;
          puVar53[-0x10] = uVar18;
          puVar53[-0xf] = uVar19;
          puVar53[-0xe] = uVar20;
          puVar53[-0xd] = uVar21;
          puVar53[-0xc] = uVar22;
          puVar53[-0xb] = uVar23;
          puVar53[-10] = uVar24;
          puVar53[-9] = uVar25;
          puVar53[-8] = uVar26;
          puVar53[-7] = uVar27;
          puVar53[-6] = uVar28;
          puVar53[-5] = uVar29;
          puVar53[-4] = uVar30;
          puVar53[-3] = uVar31;
          puVar53[-2] = uVar32;
          puVar53[-1] = uVar33;
          uVar46 = uVar46 - 0x80;
          puVar50 = puVar49;
          puVar53 = puVar52;
        } while ((uVar46 & 0xffffff80) != 0);
        puVar50 = puVar49;
        puVar53 = puVar52;
        if (0x1f < uVar46) {
          do {
            puVar49 = puVar50 + -8;
            puVar52 = puVar53 + -8;
            uVar3 = puVar50[-7];
            uVar4 = puVar50[-6];
            uVar5 = puVar50[-5];
            uVar6 = puVar50[-4];
            uVar7 = puVar50[-3];
            uVar8 = puVar50[-2];
            uVar9 = puVar50[-1];
            *puVar52 = *puVar49;
            puVar53[-7] = uVar3;
            puVar53[-6] = uVar4;
            puVar53[-5] = uVar5;
            puVar53[-4] = uVar6;
            puVar53[-3] = uVar7;
            puVar53[-2] = uVar8;
            puVar53[-1] = uVar9;
            uVar46 = uVar46 - 0x20;
            puVar50 = puVar49;
            puVar53 = puVar52;
          } while ((uVar46 & 0xffffffe0) != 0);
        }
      }
    }
    for (; (uVar46 & 0xfffffffc) != 0; uVar46 = uVar46 - 4) {
      puVar52 = puVar52 + -1;
      puVar49 = puVar49 + -1;
      *puVar52 = *puVar49;
    }
    for (; uVar46 != 0; uVar46 = uVar46 - 1) {
      puVar52 = (undefined4 *)((int)puVar52 - 1);
      puVar49 = (undefined4 *)((int)puVar49 + -1);
      *(undefined1 *)puVar52 = *(undefined1 *)puVar49;
    }
    return CONCAT44(uVar47,param_1);
  }
  uVar46 = param_3;
  puVar51 = param_1;
  if (0x1f < param_3) {
    if (param_3 < 0x80) {
      if ((DAT_0041d010 >> 1 & 1) != 0) {
LAB_00405bcd:
        if (uVar46 == 0) goto LAB_00405c30;
        for (param_3 = uVar46 >> 5; param_3 != 0; param_3 = param_3 - 1) {
          uVar47 = param_2[1];
          uVar54 = param_2[2];
          uVar2 = param_2[3];
          uVar34 = param_2[4];
          uVar35 = param_2[5];
          uVar36 = param_2[6];
          uVar37 = param_2[7];
          *puVar51 = *param_2;
          puVar51[1] = uVar47;
          puVar51[2] = uVar54;
          puVar51[3] = uVar2;
          puVar51[4] = uVar34;
          puVar51[5] = uVar35;
          puVar51[6] = uVar36;
          puVar51[7] = uVar37;
          param_2 = param_2 + 8;
          puVar51 = puVar51 + 8;
        }
        goto LAB_00405bfb;
      }
LAB_00405927:
      uVar46 = (uint)param_1 & 3;
      while (uVar46 != 0) {
        *(char *)puVar51 = (char)*param_2;
        param_3 = param_3 - 1;
        param_2 = (uint *)((int)param_2 + 1);
        puVar51 = (uint *)((int)puVar51 + 1);
        uVar46 = (uint)puVar51 & 3;
      }
    }
    else {
      if ((DAT_0041dbd8 >> 1 & 1) != 0) {
        for (; uVar46 != 0; uVar46 = uVar46 - 1) {
          *(char *)puVar51 = (char)*param_2;
          param_2 = (uint *)((int)param_2 + 1);
          puVar51 = (uint *)((int)puVar51 + 1);
        }
        return CONCAT44(param_3,param_1);
      }
      if (((((uint)param_1 ^ (uint)param_2) & 0xf) == 0) && ((DAT_0041d010 >> 1 & 1) != 0)) {
        if (((uint)param_2 & 0xf) != 0) {
          uVar47 = 0x10 - ((uint)param_2 & 0xf);
          param_3 = param_3 - uVar47;
          for (uVar46 = uVar47 & 3; uVar46 != 0; uVar46 = uVar46 - 1) {
            *(char *)puVar51 = (char)*param_2;
            param_2 = (uint *)((int)param_2 + 1);
            puVar51 = (uint *)((int)puVar51 + 1);
          }
          for (uVar47 = uVar47 >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
            *puVar51 = *param_2;
            param_2 = param_2 + 1;
            puVar51 = puVar51 + 1;
          }
        }
        uVar46 = param_3 & 0x7f;
        for (param_3 = param_3 >> 7; param_3 != 0; param_3 = param_3 - 1) {
          uVar47 = param_2[1];
          uVar54 = param_2[2];
          uVar2 = param_2[3];
          uVar34 = param_2[4];
          uVar35 = param_2[5];
          uVar36 = param_2[6];
          uVar37 = param_2[7];
          uVar38 = param_2[8];
          uVar39 = param_2[9];
          uVar40 = param_2[10];
          uVar41 = param_2[0xb];
          uVar42 = param_2[0xc];
          uVar43 = param_2[0xd];
          uVar44 = param_2[0xe];
          uVar45 = param_2[0xf];
          *puVar51 = *param_2;
          puVar51[1] = uVar47;
          puVar51[2] = uVar54;
          puVar51[3] = uVar2;
          puVar51[4] = uVar34;
          puVar51[5] = uVar35;
          puVar51[6] = uVar36;
          puVar51[7] = uVar37;
          puVar51[8] = uVar38;
          puVar51[9] = uVar39;
          puVar51[10] = uVar40;
          puVar51[0xb] = uVar41;
          puVar51[0xc] = uVar42;
          puVar51[0xd] = uVar43;
          puVar51[0xe] = uVar44;
          puVar51[0xf] = uVar45;
          uVar47 = param_2[0x11];
          uVar54 = param_2[0x12];
          uVar2 = param_2[0x13];
          uVar34 = param_2[0x14];
          uVar35 = param_2[0x15];
          uVar36 = param_2[0x16];
          uVar37 = param_2[0x17];
          uVar38 = param_2[0x18];
          uVar39 = param_2[0x19];
          uVar40 = param_2[0x1a];
          uVar41 = param_2[0x1b];
          uVar42 = param_2[0x1c];
          uVar43 = param_2[0x1d];
          uVar44 = param_2[0x1e];
          uVar45 = param_2[0x1f];
          puVar51[0x10] = param_2[0x10];
          puVar51[0x11] = uVar47;
          puVar51[0x12] = uVar54;
          puVar51[0x13] = uVar2;
          puVar51[0x14] = uVar34;
          puVar51[0x15] = uVar35;
          puVar51[0x16] = uVar36;
          puVar51[0x17] = uVar37;
          puVar51[0x18] = uVar38;
          puVar51[0x19] = uVar39;
          puVar51[0x1a] = uVar40;
          puVar51[0x1b] = uVar41;
          puVar51[0x1c] = uVar42;
          puVar51[0x1d] = uVar43;
          puVar51[0x1e] = uVar44;
          puVar51[0x1f] = uVar45;
          param_2 = param_2 + 0x20;
          puVar51 = puVar51 + 0x20;
        }
        goto LAB_00405bcd;
      }
      if (((DAT_0041dbd8 & 1) == 0) || (((uint)param_1 & 3) != 0)) goto LAB_00405927;
      if (((uint)param_2 & 3) == 0) {
        if (((uint)param_1 >> 2 & 1) != 0) {
          uVar46 = *param_2;
          param_3 = param_3 - 4;
          param_2 = param_2 + 1;
          *param_1 = uVar46;
          param_1 = param_1 + 1;
        }
        if (((uint)param_1 >> 3 & 1) != 0) {
          uVar1 = *(undefined8 *)param_2;
          param_3 = param_3 - 8;
          param_2 = param_2 + 2;
          *(undefined8 *)param_1 = uVar1;
          param_1 = param_1 + 2;
        }
        if (((uint)param_2 & 7) == 0) {
          puVar51 = param_2 + -2;
          uVar46 = *param_2;
          uVar47 = param_2[1];
          do {
            puVar48 = puVar51;
            uVar34 = puVar48[8];
            uVar35 = puVar48[9];
            param_3 = param_3 - 0x30;
            uVar36 = puVar48[6];
            uVar37 = puVar48[7];
            uVar38 = puVar48[8];
            uVar39 = puVar48[9];
            uVar54 = puVar48[0xe];
            uVar2 = puVar48[0xf];
            uVar40 = puVar48[10];
            uVar41 = puVar48[0xb];
            uVar42 = puVar48[0xc];
            uVar43 = puVar48[0xd];
            param_1[2] = uVar46;
            param_1[3] = uVar47;
            param_1[4] = uVar34;
            param_1[5] = uVar35;
            param_1[6] = uVar36;
            param_1[7] = uVar37;
            param_1[8] = uVar38;
            param_1[9] = uVar39;
            param_1[10] = uVar40;
            param_1[0xb] = uVar41;
            param_1[0xc] = uVar42;
            param_1[0xd] = uVar43;
            param_1 = param_1 + 0xc;
            puVar51 = puVar48 + 0xc;
            uVar46 = uVar54;
            uVar47 = uVar2;
          } while (0x2f < param_3);
          puVar48 = puVar48 + 0xe;
        }
        else if (((uint)param_2 >> 3 & 1) == 0) {
          puVar51 = param_2 + -1;
          uVar46 = *param_2;
          uVar47 = param_2[1];
          uVar54 = param_2[2];
          do {
            puVar48 = puVar51;
            uVar36 = puVar48[8];
            param_3 = param_3 - 0x30;
            uVar37 = puVar48[5];
            uVar38 = puVar48[6];
            uVar39 = puVar48[7];
            uVar40 = puVar48[8];
            uVar2 = puVar48[0xd];
            uVar34 = puVar48[0xe];
            uVar35 = puVar48[0xf];
            uVar41 = puVar48[9];
            uVar42 = puVar48[10];
            uVar43 = puVar48[0xb];
            uVar44 = puVar48[0xc];
            param_1[1] = uVar46;
            param_1[2] = uVar47;
            param_1[3] = uVar54;
            param_1[4] = uVar36;
            param_1[5] = uVar37;
            param_1[6] = uVar38;
            param_1[7] = uVar39;
            param_1[8] = uVar40;
            param_1[9] = uVar41;
            param_1[10] = uVar42;
            param_1[0xb] = uVar43;
            param_1[0xc] = uVar44;
            param_1 = param_1 + 0xc;
            puVar51 = puVar48 + 0xc;
            uVar46 = uVar2;
            uVar47 = uVar34;
            uVar54 = uVar35;
          } while (0x2f < param_3);
          puVar48 = puVar48 + 0xd;
        }
        else {
          puVar51 = param_2 + -3;
          uVar46 = *param_2;
          do {
            puVar48 = puVar51;
            uVar54 = puVar48[8];
            uVar2 = puVar48[9];
            uVar34 = puVar48[10];
            param_3 = param_3 - 0x30;
            uVar35 = puVar48[7];
            uVar36 = puVar48[8];
            uVar37 = puVar48[9];
            uVar38 = puVar48[10];
            uVar47 = puVar48[0xf];
            uVar39 = puVar48[0xb];
            uVar40 = puVar48[0xc];
            uVar41 = puVar48[0xd];
            uVar42 = puVar48[0xe];
            param_1[3] = uVar46;
            param_1[4] = uVar54;
            param_1[5] = uVar2;
            param_1[6] = uVar34;
            param_1[7] = uVar35;
            param_1[8] = uVar36;
            param_1[9] = uVar37;
            param_1[10] = uVar38;
            param_1[0xb] = uVar39;
            param_1[0xc] = uVar40;
            param_1[0xd] = uVar41;
            param_1[0xe] = uVar42;
            param_1 = param_1 + 0xc;
            puVar51 = puVar48 + 0xc;
            uVar46 = uVar47;
          } while (0x2f < param_3);
          puVar48 = puVar48 + 0xf;
        }
        for (; 0xf < param_3; param_3 = param_3 - 0x10) {
          uVar46 = *puVar48;
          uVar47 = puVar48[1];
          uVar54 = puVar48[2];
          uVar2 = puVar48[3];
          puVar48 = puVar48 + 4;
          *param_1 = uVar46;
          param_1[1] = uVar47;
          param_1[2] = uVar54;
          param_1[3] = uVar2;
          param_1 = param_1 + 4;
        }
        if ((param_3 >> 2 & 1) != 0) {
          uVar46 = *puVar48;
          param_3 = param_3 - 4;
          puVar48 = puVar48 + 1;
          *param_1 = uVar46;
          param_1 = param_1 + 1;
        }
        if ((param_3 >> 3 & 1) != 0) {
          param_3 = param_3 - 8;
          *(undefined8 *)param_1 = *(undefined8 *)puVar48;
        }
                    /* WARNING: Could not recover jumptable at 0x00405925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar55 = (*(code *)(&switchD_00405955::switchdataD_00405964)[param_3])();
        return uVar55;
      }
    }
    uVar46 = param_3;
    if (0x1f < param_3) {
      for (uVar46 = param_3 >> 2; uVar46 != 0; uVar46 = uVar46 - 1) {
        *puVar51 = *param_2;
        param_2 = param_2 + 1;
        puVar51 = puVar51 + 1;
      }
      switch(param_3 & 3) {
      case 0:
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 1:
        *(char *)puVar51 = (char)*param_2;
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 2:
        *(char *)puVar51 = (char)*param_2;
        *(undefined1 *)((int)puVar51 + 1) = *(undefined1 *)((int)param_2 + 1);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      case 3:
        *(char *)puVar51 = (char)*param_2;
        *(undefined1 *)((int)puVar51 + 1) = *(undefined1 *)((int)param_2 + 1);
        *(undefined1 *)((int)puVar51 + 2) = *(undefined1 *)((int)param_2 + 2);
        return CONCAT44(param_3,param_1) & 0x3ffffffff;
      }
    }
  }
LAB_00405bfb:
  if ((uVar46 & 0x1f) != 0) {
    for (uVar47 = (uVar46 & 0x1f) >> 2; uVar47 != 0; uVar47 = uVar47 - 1) {
      param_3 = *param_2;
      *puVar51 = param_3;
      puVar51 = puVar51 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar46 = uVar46 & 3; uVar46 != 0; uVar46 = uVar46 - 1) {
      *(char *)puVar51 = (char)*param_2;
      param_2 = (uint *)((int)param_2 + 1);
      puVar51 = (uint *)((int)puVar51 + 1);
    }
  }
LAB_00405c30:
  return CONCAT44(param_3,param_1);
}




/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  if (_Size == 0) {
    return _Dst;
  }
  iVar1 = (_Val & 0xffU) * 0x1010101;
  piVar3 = (int *)_Dst;
  if (0x20 < _Size) {
    if (0x7f < _Size) {
      puVar2 = (undefined1 *)_Dst;
      if ((DAT_0041dbd8 >> 1 & 1) != 0) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar2 = (char)iVar1;
          puVar2 = puVar2 + 1;
        }
        return _Dst;
      }
      if ((DAT_0041d010 >> 1 & 1) == 0) goto joined_r0x00405d8b;
      *(int *)_Dst = iVar1;
      *(int *)((int)_Dst + 4) = iVar1;
      *(int *)((int)_Dst + 8) = iVar1;
      *(int *)((int)_Dst + 0xc) = iVar1;
      piVar3 = (int *)((int)_Dst + 0x10U & 0xfffffff0);
      _Size = (int)_Dst + (_Size - (int)piVar3);
      if (0x80 < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3[8] = iVar1;
          piVar3[9] = iVar1;
          piVar3[10] = iVar1;
          piVar3[0xb] = iVar1;
          piVar3[0xc] = iVar1;
          piVar3[0xd] = iVar1;
          piVar3[0xe] = iVar1;
          piVar3[0xf] = iVar1;
          piVar3[0x10] = iVar1;
          piVar3[0x11] = iVar1;
          piVar3[0x12] = iVar1;
          piVar3[0x13] = iVar1;
          piVar3[0x14] = iVar1;
          piVar3[0x15] = iVar1;
          piVar3[0x16] = iVar1;
          piVar3[0x17] = iVar1;
          piVar3[0x18] = iVar1;
          piVar3[0x19] = iVar1;
          piVar3[0x1a] = iVar1;
          piVar3[0x1b] = iVar1;
          piVar3[0x1c] = iVar1;
          piVar3[0x1d] = iVar1;
          piVar3[0x1e] = iVar1;
          piVar3[0x1f] = iVar1;
          piVar3 = piVar3 + 0x20;
          _Size = _Size - 0x80;
        } while ((_Size & 0xffffff00) != 0);
        goto LAB_00405d50;
      }
    }
    if ((DAT_0041d010 >> 1 & 1) != 0) {
LAB_00405d50:
      if (0x1f < _Size) {
        do {
          *piVar3 = iVar1;
          piVar3[1] = iVar1;
          piVar3[2] = iVar1;
          piVar3[3] = iVar1;
          piVar3[4] = iVar1;
          piVar3[5] = iVar1;
          piVar3[6] = iVar1;
          piVar3[7] = iVar1;
          piVar3 = piVar3 + 8;
          _Size = _Size - 0x20;
        } while (0x1f < _Size);
        if ((_Size & 0x1f) == 0) {
          return _Dst;
        }
      }
      piVar3 = (int *)((int)piVar3 + (_Size - 0x20));
      *piVar3 = iVar1;
      piVar3[1] = iVar1;
      piVar3[2] = iVar1;
      piVar3[3] = iVar1;
      piVar3[4] = iVar1;
      piVar3[5] = iVar1;
      piVar3[6] = iVar1;
      piVar3[7] = iVar1;
      return _Dst;
    }
  }
joined_r0x00405d8b:
  for (; (_Size & 3) != 0; _Size = _Size - 1) {
    *(char *)piVar3 = (char)iVar1;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  if ((_Size & 4) != 0) {
    *piVar3 = iVar1;
    piVar3 = piVar3 + 1;
    _Size = _Size - 4;
  }
  for (; (_Size & 0xfffffff8) != 0; _Size = _Size - 8) {
    *piVar3 = iVar1;
    piVar3[1] = iVar1;
    piVar3 = piVar3 + 2;
  }
  return _Dst;
}




/* Library Function - Single Match
    public: static struct std::pair<class __FrameHandler3::TryBlockMap::iterator,class
   __FrameHandler3::TryBlockMap::iterator> __cdecl __FrameHandler3::GetRangeOfTrysToCheck(class
   __FrameHandler3::TryBlockMap &,int,int)
   
   Library: Visual Studio 2017 Release */

void __cdecl __FrameHandler3::GetRangeOfTrysToCheck(TryBlockMap *param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int in_stack_00000010;
  uint local_8;
  
  uVar1 = *(uint *)(*(int *)param_2 + 0xc);
  uVar4 = uVar1;
  uVar5 = uVar1;
  if (-1 < in_stack_00000010) {
    piVar3 = (int *)(uVar1 * 0x14 + *(int *)(*(int *)param_2 + 0x10) + 8);
    local_8 = uVar1;
    do {
      if (uVar4 == 0xffffffff) goto LAB_00405e56;
      uVar4 = uVar4 - 1;
      if (((piVar3[-6] < param_3) && (param_3 <= piVar3[-5])) || (uVar4 == 0xffffffff)) {
        in_stack_00000010 = in_stack_00000010 + -1;
        uVar5 = local_8;
        local_8 = uVar4;
      }
      piVar3 = piVar3 + -5;
    } while (-1 < in_stack_00000010);
  }
  if ((uVar5 <= uVar1) && (uVar4 + 1 <= uVar5)) {
    *(int *)param_1 = param_2;
    *(int *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 4) = uVar4 + 1;
    *(uint *)(param_1 + 0xc) = uVar5;
    return;
  }
LAB_00405e56:
  terminate();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  code *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_0041d004 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = __CatchGuardHandler;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}




/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2017 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  int iVar1;
  undefined4 *local_3c;
  code *local_38;
  uint local_34;
  _s_FuncInfo *local_30;
  EHRegistrationNode *local_2c;
  int local_28;
  EHRegistrationNode *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_18;
  EHExceptionRecord *local_14;
  void *local_10;
  int local_c;
  code *local_8;
  
  local_1c = &stack0xfffffffc;
  local_20 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x405f69;
    local_c = 1;
  }
  else {
    local_38 = __TranslatorGuardHandler;
    local_34 = DAT_0041d004 ^ (uint)&local_3c;
    local_30 = param_5;
    local_2c = param_2;
    local_28 = param_6;
    local_24 = param_7;
    local_18 = 0;
    local_3c = (undefined4 *)ExceptionList;
    ExceptionList = &local_3c;
    local_c = 1;
    local_14 = param_1;
    local_10 = param_3;
    iVar1 = ___vcrt_getptd();
    local_8 = *(code **)(iVar1 + 8);
    guard_check_icall();
    (*local_8)(*(undefined4 *)param_1,&local_14);
    local_c = 0;
    if (local_18 != 0) {
                    /* WARNING: Load size is inaccurate */
      *local_3c = *ExceptionList;
    }
    ExceptionList = local_3c;
  }
  return local_c;
}




/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
                    /* WARNING: Load size is inaccurate */
  ExceptionList = *ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00405fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1)();
  return;
}




/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2017 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x405fef,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}




/* Library Function - Single Match
    __CatchGuardHandler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__CatchGuardHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  __InternalCxxFrameHandler<class___FrameHandler3>
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),param_2,'\0');
  return;
}




/* Library Function - Single Match
    __CreateFrameInfo
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = ___vcrt_getptd();
  param_1[1] = *(undefined4 *)(iVar1 + 0x24);
  iVar1 = ___vcrt_getptd();
  *(undefined4 **)(iVar1 + 0x24) = param_1;
  return param_1;
}




/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2017 Release */

void __cdecl __FindAndUnlinkFrame(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = ___vcrt_getptd();
  iVar2 = *(int *)(iVar2 + 0x24);
  iVar3 = ___vcrt_getptd();
  if (param_1 == iVar2) {
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_1 + 4);
    return;
  }
  iVar2 = *(int *)(iVar3 + 0x24);
  do {
    piVar4 = (int *)(iVar2 + 4);
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      terminate();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  } while (param_1 != iVar2);
  *piVar4 = *(int *)(param_1 + 4);
  return;
}




/* Library Function - Single Match
    __TranslatorGuardHandler
   
   Library: Visual Studio 2017 Release */

undefined4 __cdecl
__TranslatorGuardHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3)

{
  undefined4 uVar1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  __InternalCxxFrameHandler<class___FrameHandler3>
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames(param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00406147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*local_8)();
  return uVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_EXCEPTION_DISPOSITION __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  _EXCEPTION_DISPOSITION _Var1;
  
  _Var1 = __InternalCxxFrameHandler<class___FrameHandler3>
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return _Var1;
}




undefined1 (*) [16] __cdecl FUN_00406185(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  
  pauVar4 = (undefined1 (*) [16])0x0;
  pauVar2 = param_1;
  if (DAT_0041dbd4 < 2) {
    do {
      puVar1 = *pauVar2;
      pauVar4 = (undefined1 (*) [16])(*pauVar2 + 2);
      pauVar2 = pauVar4;
    } while (*(short *)puVar1 != 0);
    do {
      pauVar4 = (undefined1 (*) [16])(pauVar4[-1] + 0xe);
      if (pauVar4 == param_1) break;
    } while (*(ushort *)*pauVar4 != param_2);
    if (*(ushort *)*pauVar4 != param_2) {
      pauVar4 = (undefined1 (*) [16])0x0;
    }
  }
  else {
    for (; ((uint)(*param_1 + 1) & 0xe) != 0; param_1 = (undefined1 (*) [16])(*param_1 + 2)) {
      if (*(ushort *)*param_1 == param_2) {
        pauVar4 = param_1;
      }
      if (*(ushort *)*param_1 == 0) {
        return pauVar4;
      }
    }
    bVar5 = param_2 != 0;
    bVar6 = param_2 == 0;
    if (bVar6) {
      while (iVar3 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15), !bVar6) {
        param_1 = param_1 + 1;
        bVar6 = param_1 == (undefined1 (*) [16])0x0;
      }
      pauVar4 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
    }
    else {
      while( true ) {
        iVar3 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
        if (bVar5) {
          pauVar4 = (undefined1 (*) [16])(*param_1 + iVar3 * 2);
        }
        if (bVar6) break;
        bVar5 = (undefined1 (*) [16])0xffffffef < param_1;
        param_1 = param_1 + 1;
        bVar6 = param_1 == (undefined1 (*) [16])0x0;
      }
    }
  }
  return pauVar4;
}




/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2017 Release */

void __CxxThrowException_8(int *param_1,byte *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  DWORD *pDVar4;
  DWORD *pDVar5;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  int *local_c;
  byte *local_8;
  
  pDVar4 = &DAT_00415af4;
  pDVar5 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pDVar5 = *pDVar4;
    pDVar4 = pDVar4 + 1;
    pDVar5 = pDVar5 + 1;
  }
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    piVar3 = (int *)(*param_1 + -4);
    pcVar1 = *(code **)(*piVar3 + 0x20);
    param_2 = *(byte **)(*piVar3 + 0x18);
    guard_check_icall();
    (*pcVar1)(piVar3);
  }
  local_c = param_1;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}




/* Library Function - Single Match
    ___std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___std_exception_copy(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char *_Dst;
  char *pcVar3;
  char *_Memory;
  
  if ((*(char *)(param_1 + 1) == '\0') || (pcVar3 = (char *)*param_1, pcVar3 == (char *)0x0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    _Dst = (char *)FUN_00409366((size_t)(pcVar3 + (1 - (int)pcVar1)));
    _Memory = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,(rsize_t)(pcVar3 + (1 - (int)pcVar1)),(char *)*param_1);
      _Memory = (char *)0x0;
      *param_2 = _Dst;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    FID_conflict__free(_Memory);
  }
  return;
}




/* Library Function - Single Match
    ___std_exception_destroy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___std_exception_destroy(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FID_conflict__free((void *)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




/* Library Function - Single Match
    _ValidateLocalCookies
   
   Library: Visual Studio 2017 Release */

void __cdecl _ValidateLocalCookies(int *param_1,int param_2)

{
  if (*param_1 != -2) {
    __security_check_cookie(param_1[1] + param_2 ^ *(uint *)(*param_1 + param_2));
  }
  __security_check_cookie(param_1[3] + param_2 ^ *(uint *)(param_1[2] + param_2));
  return;
}




/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2017 Release */

undefined4 __cdecl __except_handler4(PEXCEPTION_RECORD param_1,PVOID param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  PEXCEPTION_RECORD pEVar8;
  PEXCEPTION_RECORD local_20;
  int local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  char local_5;
  
  local_5 = '\0';
  iVar6 = (int)param_2 + 0x10;
  local_c = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_0041d004);
  local_10 = 1;
  local_14 = iVar6;
  _ValidateLocalCookies(local_c,iVar6);
  ___except_validate_context_record(param_3);
  uVar7 = *(uint *)((int)param_2 + 0xc);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_20 = param_1;
    local_1c = param_3;
    *(PEXCEPTION_RECORD **)((int)param_2 + -4) = &local_20;
    if (uVar7 == 0xfffffffe) {
      return local_10;
    }
    do {
      iVar3 = uVar7 * 3 + 4;
      uVar1 = local_c[iVar3];
      local_18 = local_c + iVar3;
      if ((undefined *)local_18[1] != (undefined *)0x0) {
        iVar3 = _EH4_CallFilterFunc((undefined *)local_18[1]);
        local_5 = '\x01';
        if (iVar3 < 0) {
          local_10 = 0;
          goto LAB_0040641d;
        }
        if (0 < iVar3) {
          if ((param_1->ExceptionCode == 0xe06d7363) &&
             (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_004163f0)
             , BVar4 != 0)) {
            pEVar8 = param_1;
            guard_check_icall();
            ___DestructExceptionObject((int *)pEVar8);
            iVar6 = local_14;
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar6,&DAT_0041d004);
          }
          *(uint *)((int)param_2 + 0xc) = uVar1;
          _ValidateLocalCookies(local_c,iVar6);
          _EH4_TransferToHandler((undefined *)local_18[2]);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      uVar7 = uVar1;
    } while (uVar1 != 0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (uVar7 == 0xfffffffe) {
      return local_10;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar6,&DAT_0041d004);
  }
LAB_0040641d:
  _ValidateLocalCookies(local_c,iVar6);
  return local_10;
}




/* Library Function - Single Match
    ___vcrt_initialize
   
   Library: Visual Studio 2017 Release */

uint ___vcrt_initialize(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_00407876();
  ___vcrt_initialize_winapi_thunks();
  uVar1 = ___vcrt_initialize_locks();
  if ((char)uVar1 != '\0') {
    uVar2 = ___vcrt_initialize_ptd();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_locks();
  }
  return uVar1 & 0xffffff00;
}




/* Library Function - Single Match
    ___vcrt_uninitialize
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 __cdecl ___vcrt_uninitialize(char param_1)

{
  undefined4 in_EAX;
  
  if (param_1 == '\0') {
    ___vcrt_uninitialize_ptd();
    ___vcrt_uninitialize_locks();
    in_EAX = ___vcrt_uninitialize_winapi_thunks('\0');
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* Library Function - Single Match
    ___std_type_info_compare
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___std_type_info_compare(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  if (param_1 != param_2) {
    pbVar3 = (byte *)(param_2 + 5);
    pbVar2 = (byte *)(param_1 + 5);
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00406534:
        return -(uint)bVar4 | 1;
      }
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00406534;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
  }
  return 0;
}




void FUN_0040653b(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_0041dbdc)) {
    FID_conflict__free(param_1);
  }
  return;
}




/* Library Function - Single Match
    ___vcrt_getptd
   
   Library: Visual Studio 2017 Release */

void ___vcrt_getptd(void)

{
  code *pcVar1;
  LPVOID pvVar2;
  int iVar3;
  BOOL BVar4;
  
  pvVar2 = ___vcrt_getptd_noexit();
  if (pvVar2 != (LPVOID)0x0) {
    return;
  }
  iVar3 = ___acrt_get_sigabrt_handler();
  if (iVar3 != 0) {
    _raise(0x16);
  }
  if ((DAT_0041d040 & 2) != 0) {
    BVar4 = IsProcessorFeaturePresent(0x17);
    if (BVar4 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    ___vcrt_getptd_noexit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID ___vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  int iVar2;
  LPVOID pvVar3;
  LPVOID _Memory;
  
  if (DAT_0041d020 == 0xffffffff) {
    return (LPVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = (LPVOID)___vcrt_FlsGetValue(DAT_0041d020);
  if (pvVar1 == (LPVOID)0xffffffff) {
LAB_004065a5:
    pvVar1 = (LPVOID)0x0;
    goto LAB_004065eb;
  }
  if (pvVar1 != (LPVOID)0x0) goto LAB_004065eb;
  iVar2 = ___vcrt_FlsSetValue(DAT_0041d020,(LPVOID)0xffffffff);
  if (iVar2 == 0) goto LAB_004065a5;
  pvVar3 = (LPVOID)FUN_0040a5da(1,0x28);
  if (pvVar3 == (LPVOID)0x0) {
LAB_004065cd:
    ___vcrt_FlsSetValue(DAT_0041d020,(LPVOID)0x0);
    pvVar1 = (LPVOID)0x0;
    _Memory = pvVar3;
  }
  else {
    iVar2 = ___vcrt_FlsSetValue(DAT_0041d020,pvVar3);
    if (iVar2 == 0) goto LAB_004065cd;
    _Memory = (void *)0x0;
    pvVar1 = pvVar3;
  }
  FID_conflict__free(_Memory);
LAB_004065eb:
  SetLastError(dwErrCode);
  return pvVar1;
}




/* Library Function - Single Match
    ___vcrt_initialize_ptd
   
   Library: Visual Studio 2017 Release */

uint ___vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = ___vcrt_FlsAlloc(FUN_0040653b);
  DAT_0041d020 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = ___vcrt_FlsSetValue(uVar1,&DAT_0041dbdc);
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    uVar1 = ___vcrt_uninitialize_ptd();
  }
  return uVar1 & 0xffffff00;
}




/* Library Function - Single Match
    ___vcrt_uninitialize_ptd
   
   Library: Visual Studio 2017 Release */

undefined4 ___vcrt_uninitialize_ptd(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_0041d020;
  if (DAT_0041d020 != 0xffffffff) {
    DVar1 = ___vcrt_FlsFree(DAT_0041d020);
    DAT_0041d020 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl BuildCatchObjectHelperInternal<struct _s_HandlerType const >(struct
   EHExceptionRecord *,void *,struct _s_HandlerType const *,struct _s_CatchableType const *)
    int __cdecl BuildCatchObjectHelperInternal<class __FrameHandler3>(struct EHExceptionRecord
   *,void *,struct _s_HandlerType const *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2017 Release */

int __cdecl BuildCatchObjectHelperInternal<>(int param_1,uint *param_2,uint *param_3,byte *param_4)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  void *local_14;
  
  pcVar1 = DAT_0041dc80;
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && (-1 < (int)*param_3)))) {
    ExceptionList = local_14;
    return 0;
  }
  uVar2 = *param_3;
  if (-1 < (int)uVar2) {
    param_2 = (uint *)((int)param_2 + param_3[2] + 0xc);
  }
  if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_0041dc80 != (code *)0x0)) {
    guard_check_icall();
    uVar2 = (*pcVar1)();
  }
  else {
    if ((uVar2 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (*(int *)(param_4 + 0x18) == 0) {
          if ((*(int *)(param_1 + 0x18) != 0) && (param_2 != (uint *)0x0)) {
            uVar2 = *(uint *)(param_4 + 0x14);
            puVar3 = (uint *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_00405700(param_2,puVar3,uVar2);
            ExceptionList = local_14;
            return 0;
          }
        }
        else if ((*(int *)(param_1 + 0x18) != 0) && (param_2 != (uint *)0x0)) {
          ExceptionList = local_14;
          return ((*param_4 & 4) != 0) + 1;
        }
        goto LAB_0040677e;
      }
      if ((*(int *)(param_1 + 0x18) == 0) || (param_2 == (uint *)0x0)) goto LAB_0040677e;
      FUN_00405700(param_2,*(uint **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
      if (*(int *)(param_4 + 0x14) != 4) {
        ExceptionList = local_14;
        return 0;
      }
      if (*param_2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      uVar2 = *param_2;
      goto LAB_0040670c;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar2 == 0) || (param_2 == (uint *)0x0)) {
LAB_0040677e:
    terminate();
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  *param_2 = uVar2;
LAB_0040670c:
  uVar2 = ___AdjustPointer(uVar2,(int *)(param_4 + 8));
  *param_2 = uVar2;
  ExceptionList = local_14;
  return 0;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<struct _s_HandlerType const >(struct EHExceptionRecord
   *,void *,struct _s_HandlerType const *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2017 Release */

void __cdecl
BuildCatchObjectInternal<struct__s_HandlerType_const_>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_14;
  
  pvVar3 = param_2;
  if (-1 < (int)param_3->adjectives) {
    pvVar3 = (void *)((int)param_2 + param_3->dispCatchObj + 0xc);
  }
  iVar1 = BuildCatchObjectHelperInternal<>
                    ((int)param_1,(uint *)param_2,&param_3->adjectives,(byte *)param_4);
  if (iVar1 == 1) {
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    _CallMemberFunction1(pvVar3,*(void **)(param_4 + 0x18),pvVar2);
  }
  else if (iVar1 == 2) {
    iVar1 = 1;
    pvVar2 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    _CallMemberFunction2(pvVar3,*(void **)(param_4 + 0x18),pvVar2,iVar1);
  }
  ExceptionList = local_14;
  return;
}




/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct
   _s_CatchableType const *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode
   *,unsigned char)
   
   Library: Visual Studio 2017 Release */

void __cdecl
CatchIt<class___FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
          _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<struct__s_HandlerType_const_>(param_1,param_2,param_6,param_7);
  }
  if (param_10 == (EHRegistrationNode *)0x0) {
    param_10 = param_2;
  }
  _UnwindNestedFrames(param_10,param_1);
  __FrameHandler3::FrameUnwindToState(param_2,param_4,param_5,param_8->tryLow);
  __FrameHandler3::SetState(param_2,param_5,param_8->tryHigh + 1);
  pvVar1 = CallCatchBlock(param_1,param_2,param_3,param_5,param_6->addressOfHandler,param_9,0x100);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,param_2);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl FindHandler<class __FrameHandler3>(struct EHExceptionRecord *,struct
   EHRegistrationNode *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,unsigned char,int,struct
   EHRegistrationNode *)
   
   Library: Visual Studio 2017 Release */

void __cdecl
FindHandler<class___FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  code *pcVar1;
  _s_FuncInfo *p_Var2;
  int iVar3;
  int *piVar4;
  uchar uVar5;
  bool bVar6;
  int iVar7;
  _s_ESTypeList *p_Var8;
  int iVar9;
  int *local_58;
  uint local_54 [2];
  uint local_4c;
  _s_FuncInfo *local_48;
  void *local_44;
  _s_TryBlockMapEntry *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  _s_FuncInfo *local_20;
  uint local_1c;
  int *local_18;
  _s_HandlerType *local_14;
  _CONTEXT *local_10;
  int local_c;
  char local_5;
  
  iVar9 = 0;
  local_2c = local_2c & 0xffffff00;
  local_5 = '\0';
  local_c = __FrameHandler3::GetCurrentState(param_2,param_4,param_5);
  if ((local_c < -1) || (param_5->maxState <= local_c)) goto LAB_00406c25;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) ||
       (*(int *)(param_1 + 0x14) == 0x19930522)) && (*(int *)(param_1 + 0x1c) == 0)))) {
    iVar7 = ___vcrt_getptd();
    if (*(int *)(iVar7 + 0x10) == 0) {
      return;
    }
    iVar7 = ___vcrt_getptd();
    param_1 = *(EHExceptionRecord **)(iVar7 + 0x10);
    iVar7 = ___vcrt_getptd();
    local_2c = CONCAT31(local_2c._1_3_,1);
    local_10 = *(_CONTEXT **)(iVar7 + 0x14);
    if ((param_1 == (EHExceptionRecord *)0x0) ||
       ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
         ((*(int *)(param_1 + 0x14) == 0x19930520 ||
          ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522))))))
        && (*(int *)(param_1 + 0x1c) == 0)))) goto LAB_00406c25;
    iVar7 = ___vcrt_getptd();
    if (*(int *)(iVar7 + 0x1c) != 0) {
      iVar7 = ___vcrt_getptd();
      local_20 = *(_s_FuncInfo **)(iVar7 + 0x1c);
      iVar7 = ___vcrt_getptd();
      *(undefined4 *)(iVar7 + 0x1c) = 0;
      uVar5 = IsInExceptionSpec(param_1,(_s_ESTypeList *)local_20);
      p_Var2 = local_20;
      if (uVar5 == '\0') {
        if (0 < (int)local_20->magicNumber_and_bbtFlags) {
          local_20 = (_s_FuncInfo *)0x0;
          do {
            bVar6 = type_info::operator==
                              (*(type_info **)((int)&local_20->maxState + p_Var2->maxState),
                               (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
            if (bVar6) {
              ___DestructExceptionObject((int *)param_1);
              std::bad_exception::bad_exception((bad_exception *)local_54);
              __CxxThrowException_8((int *)local_54,&DAT_0041bb94);
              param_5 = p_Var2;
              goto LAB_00406be6;
            }
            iVar9 = iVar9 + 1;
            local_20 = (_s_FuncInfo *)&local_20->pTryBlockMap;
          } while (iVar9 < (int)p_Var2->magicNumber_and_bbtFlags);
        }
        goto LAB_00406c25;
      }
    }
  }
  else {
    local_10 = param_3;
  }
  local_48 = param_5;
  local_44 = param_4;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((*(int *)(param_1 + 0x14) == 0x19930520 ||
      ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522)))))) {
    if (param_5->nTryBlocks != 0) {
      __FrameHandler3::GetRangeOfTrysToCheck((TryBlockMap *)&local_58,(int)&local_48,local_c);
      local_30 = local_58;
      local_1c = local_54[0];
      if (local_54[0] < local_4c) {
        local_20 = (_s_FuncInfo *)(local_54[0] * 0x14);
        iVar9 = local_c;
        do {
          local_40 = (_s_TryBlockMapEntry *)((int)local_20 + *(int *)(*local_30 + 0x10));
          if ((local_40->tryLow <= iVar9) && (iVar9 <= local_40->tryHigh)) {
            local_14 = local_40->pHandlerArray;
            local_38 = local_40->nCatches;
            local_28 = 0;
            if (local_38 != 0) {
              iVar7 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc);
              local_3c = *(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 1;
              iVar3 = iVar7;
              piVar4 = local_3c;
              local_34 = iVar7;
              do {
                while (local_18 = piVar4, local_24 = iVar3, 0 < local_24) {
                  iVar9 = TypeMatchHelper<struct__s_HandlerType_const_>
                                    (local_14,(_s_CatchableType *)*local_18,
                                     *(_s_ThrowInfo **)(param_1 + 0x1c));
                  if (iVar9 != 0) {
                    local_5 = '\x01';
                    CatchIt<class___FrameHandler3>
                              (param_1,param_2,local_10,param_4,param_5,local_14,
                               (_s_CatchableType *)*local_18,local_40,param_7,param_8,
                               (uchar)local_2c);
                    iVar9 = local_c;
                    goto LAB_00406b2d;
                  }
                  iVar7 = local_34;
                  piVar4 = local_18 + 1;
                  iVar3 = local_24 + -1;
                }
                local_14 = local_14 + 1;
                local_28 = local_28 + 1;
                iVar9 = local_c;
                iVar3 = iVar7;
                piVar4 = local_3c;
              } while (local_28 != local_38);
            }
          }
LAB_00406b2d:
          local_20 = (_s_FuncInfo *)((int)local_20 + 0x14);
          local_1c = local_1c + 1;
        } while (local_1c < local_4c);
      }
    }
    if (param_6 != '\0') {
      ___DestructExceptionObject((int *)param_1);
    }
    if (((local_5 == '\0') && (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff))) &&
       ((param_5->pESTypeList != (ESTypeList *)0x0 ||
        ((((uint)param_5->EHFlags >> 2 & 1) != 0 && (param_7 == 0)))))) {
      if (((uint)param_5->EHFlags >> 2 & 1) != 0) goto LAB_00406c25;
      uVar5 = IsInExceptionSpec(param_1,param_5->pESTypeList);
      if (uVar5 == '\0') {
LAB_00406be6:
        iVar9 = ___vcrt_getptd();
        *(EHExceptionRecord **)(iVar9 + 0x10) = param_1;
        iVar9 = ___vcrt_getptd();
        *(_CONTEXT **)(iVar9 + 0x14) = local_10;
        if (param_8 == (EHRegistrationNode *)0x0) {
          param_8 = param_2;
        }
        _UnwindNestedFrames(param_8,param_1);
        __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
        p_Var8 = __FrameHandler3::getESTypes(param_5);
        FUN_004070e2(p_Var8);
        goto LAB_00406c25;
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') goto LAB_00406c25;
    FindHandlerForForeignException<class___FrameHandler3>
              (param_1,param_2,local_10,param_4,param_5,local_c,param_7,param_8);
  }
  iVar9 = ___vcrt_getptd();
  if (*(int *)(iVar9 + 0x1c) == 0) {
    return;
  }
LAB_00406c25:
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException<class __FrameHandler3>(struct EHExceptionRecord
   *,struct EHRegistrationNode *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct
   EHRegistrationNode *)
   
   Library: Visual Studio 2017 Release */

void __cdecl
FindHandlerForForeignException<class___FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  code *pcVar1;
  int iVar2;
  PVOID pvVar3;
  _s_HandlerType *p_Var4;
  _s_TryBlockMapEntry *p_Var5;
  uint uVar6;
  int *local_24;
  uint local_20;
  uint local_18;
  _s_FuncInfo *local_14;
  void *local_10;
  int local_c;
  int *local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    iVar2 = ___vcrt_getptd();
    if (*(int *)(iVar2 + 8) != 0) {
      pvVar3 = EncodePointer((PVOID)0x0);
      iVar2 = ___vcrt_getptd();
      if ((((*(PVOID *)(iVar2 + 8) != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar2 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar2 != 0)) {
        return;
      }
    }
    local_14 = param_5;
    local_10 = param_4;
    if (param_5->nTryBlocks == 0) {
      terminate();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    __FrameHandler3::GetRangeOfTrysToCheck((TryBlockMap *)&local_24,(int)&local_14,param_6);
    local_8 = local_24;
    if (local_20 < local_18) {
      local_c = local_20 * 0x14;
      uVar6 = local_20;
      do {
        p_Var5 = (_s_TryBlockMapEntry *)(*(int *)(*local_24 + 0x10) + local_c);
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          p_Var4 = p_Var5->pHandlerArray + p_Var5->nCatches + -1;
          local_24 = local_8;
          if (((p_Var4->pType == (TypeDescriptor *)0x0) ||
              (*(char *)&p_Var4->pType[1].pVFTable == '\0')) && ((p_Var4->adjectives & 0x40) == 0))
          {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var4,(_s_CatchableType *)0x0,p_Var5
                       ,param_7,param_8,'\x01');
            local_24 = local_8;
          }
        }
        local_c = local_c + 0x14;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_18);
    }
  }
  return;
}




/* Library Function - Single Match
    int __cdecl TypeMatchHelper<struct _s_HandlerType const >(struct _s_HandlerType const *,struct
   _s_CatchableType const *,struct _s_ThrowInfo const *)
   
   Library: Visual Studio 2017 Release */

int __cdecl
TypeMatchHelper<struct__s_HandlerType_const_>
          (_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  byte bVar1;
  byte bVar2;
  TypeDescriptor *pTVar3;
  uint uVar4;
  TypeDescriptor *pTVar5;
  int iVar6;
  bool bVar7;
  
  pTVar3 = param_1->pType;
  if (((pTVar3 == (TypeDescriptor *)0x0) ||
      (pTVar5 = pTVar3 + 1, *(char *)&pTVar5->pVFTable == '\0')) ||
     (((param_1->adjectives & 0x80) != 0 && (((byte)*param_2 & 0x10) != 0)))) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    if (pTVar3 != *(TypeDescriptor **)(param_2 + 4)) {
      pTVar3 = *(TypeDescriptor **)(param_2 + 4) + 1;
      do {
        bVar1 = *(byte *)&pTVar5->pVFTable;
        bVar7 = bVar1 < *(byte *)&pTVar3->pVFTable;
        if (bVar1 != *(byte *)&pTVar3->pVFTable) {
LAB_00406d8d:
          uVar4 = -(uint)bVar7 | 1;
          goto LAB_00406d92;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)&pTVar5->pVFTable + 1);
        bVar2 = *(byte *)((int)&pTVar3->pVFTable + 1);
        bVar7 = bVar1 < bVar2;
        if (bVar1 != bVar2) goto LAB_00406d8d;
        pTVar5 = (TypeDescriptor *)((int)&pTVar5->pVFTable + 2);
        pTVar3 = (TypeDescriptor *)((int)&pTVar3->pVFTable + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00406d92:
      if (uVar4 != 0) {
        return 0;
      }
    }
    if (((((byte)*param_2 & 2) == 0) || ((param_1->adjectives & 8) != 0)) &&
       (((((byte)*param_3 & 1) == 0 || ((param_1->adjectives & 1) != 0)) &&
        ((((byte)*param_3 & 2) == 0 || ((param_1->adjectives & 2) != 0)))))) {
      iVar6 = 1;
    }
  }
  return iVar6;
}




/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl __InternalCxxFrameHandler<class __FrameHandler3>(struct
   EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT *,void *,struct _s_FuncInfo const
   *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2017 Release */

_EXCEPTION_DISPOSITION __cdecl
__InternalCxxFrameHandler<class___FrameHandler3>
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  _EXCEPTION_DISPOSITION _Var4;
  
  ___except_validate_context_record((int)param_3);
  iVar2 = ___vcrt_getptd();
  if ((((*(int *)(iVar2 + 0x20) != 0) || (*(int *)param_1 == -0x1f928c9d)) ||
      (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if (((param_5->nTryBlocks != 0) ||
          ((uVar3 = param_5->magicNumber_and_bbtFlags & 0x1fffffff, 0x19930520 < uVar3 &&
           (param_5->pESTypeList != (ESTypeList *)0x0)))) ||
         ((0x19930521 < uVar3 && (((uint)param_5->EHFlags >> 2 & 1) != 0)))) {
        if ((((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x10))) &&
            (0x19930522 < *(uint *)(param_1 + 0x14))) &&
           (pcVar1 = *(code **)(*(int *)(param_1 + 0x1c) + 8), pcVar1 != (code *)0x0)) {
          uVar3 = (uint)param_8;
          guard_check_icall();
          _Var4 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar3);
          return _Var4;
        }
        FindHandler<class___FrameHandler3>
                  (param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
    }
  }
  return 1;
}




exception * __thiscall FUN_00406ecc(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_exception::vftable;
  return (exception *)this;
}




/* Library Function - Single Match
    public: __thiscall std::bad_exception::bad_exception(void)
   
   Library: Visual Studio 2017 Release */

bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = "bad exception";
  *(undefined ***)this = vftable;
  return this;
}




/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2017 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  uint uVar1;
  
  uVar1 = ___std_type_info_compare((int)(this + 4),(int)(param_1 + 4));
  return (bool)('\x01' - (uVar1 != 0));
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  void *local_20;
  void *local_14;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0041bad8;
  uStack_c = 0x406f2a;
  local_20 = param_5;
  local_44 = 0;
  local_34 = *(undefined4 *)(param_2 + -4);
  local_38 = __CreateFrameInfo(local_50,*(undefined4 *)(param_1 + 0x18));
  iVar1 = ___vcrt_getptd();
  local_3c = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = ___vcrt_getptd();
  local_40 = *(undefined4 *)(iVar1 + 0x14);
  iVar1 = ___vcrt_getptd();
  *(EHExceptionRecord **)(iVar1 + 0x10) = param_1;
  iVar1 = ___vcrt_getptd();
  *(_CONTEXT **)(iVar1 + 0x14) = param_3;
  local_48 = 1;
  local_8 = (undefined *)0x1;
  pvVar2 = _CallCatchBlock2(param_2,param_4,param_5,param_6,param_7);
  local_8 = (undefined *)0xfffffffe;
  local_48 = 0;
  local_20 = pvVar2;
  FUN_00407066();
  ExceptionList = local_14;
  return pvVar2;
}




void FUN_00407066(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_EDI;
  
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x30);
  __FindAndUnlinkFrame(*(int *)(unaff_EBP + -0x34));
  iVar1 = ___vcrt_getptd();
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(unaff_EBP + -0x38);
  iVar1 = ___vcrt_getptd();
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(unaff_EBP + -0x3c);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) &&
      ((unaff_EDI[5] == 0x19930520 || ((unaff_EDI[5] == 0x19930521 || (unaff_EDI[5] == 0x19930522)))
       ))) && ((*(int *)(unaff_EBP + -0x40) == 0 && (unaff_EBX != 0)))) {
    iVar1 = __IsExceptionObjectToBeDestroyed(unaff_EDI[6]);
    if (iVar1 != 0) {
      ___DestructExceptionObject(unaff_EDI);
    }
  }
  return;
}




/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_004070e2(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  if (*(int *)(iVar2 + 0x1c) == 0) {
    unexpected();
    iVar2 = ___vcrt_getptd();
    *(undefined4 *)(iVar2 + 0x1c) = param_1;
    __CxxThrowException_8((int *)0x0,(byte *)0x0);
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void Catch_All_00407102(void)

{
  code *pcVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = ___vcrt_getptd();
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(unaff_EBP + 8);
  __CxxThrowException_8((int *)0x0,(byte *)0x0);
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ExFilterRethrow(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  int iVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if ((((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
      ((pEVar1->ExceptionInformation[0] == 0x19930520 ||
       ((pEVar1->ExceptionInformation[0] == 0x19930521 ||
        (pEVar1->ExceptionInformation[0] == 0x19930522)))))) &&
     (pEVar1->ExceptionInformation[2] == 0)) {
    iVar2 = ___vcrt_getptd();
    *(undefined4 *)(iVar2 + 0x20) = 1;
    return 1;
  }
  return 0;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(struct EHRegistrationNode
   *,void *,struct _s_FuncInfo const *)
   
   Library: Visual Studio 2017 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3)

{
  FrameUnwindToState(param_1,param_2,param_3,-1);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToState(struct EHRegistrationNode *,void
   *,struct _s_FuncInfo const *,int)
   
   Library: Visual Studio 2017 Release */

void __cdecl
__FrameHandler3::FrameUnwindToState
          (EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *local_14;
  
  iVar2 = GetCurrentState(param_1,param_2,param_3);
  iVar3 = ___vcrt_getptd();
  *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
  while (iVar3 = iVar2, iVar3 != param_4) {
    if ((iVar3 < 0) || (param_3->maxState <= iVar3)) goto LAB_00407260;
    iVar2 = param_3->pUnwindMap[iVar3].toState;
    if (param_3->pUnwindMap[iVar3].action != (action *)0x0) {
      SetState(param_1,param_3,iVar2);
      __CallSettingFrame_12(param_3->pUnwindMap[iVar3].action,param_1,0x103);
    }
  }
  FUN_0040724c();
  if (iVar3 == param_4) {
    SetState(param_1,param_3,iVar3);
    ExceptionList = local_14;
    return;
  }
LAB_00407260:
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_0040724c(void)

{
  int iVar1;
  
  iVar1 = ___vcrt_getptd();
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = ___vcrt_getptd();
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
  }
  return;
}




/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2017 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  int *piVar1;
  int iVar2;
  HandlerType *pHVar3;
  code *pcVar4;
  uchar uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  if (param_2 == (_s_ESTypeList *)0x0) {
    terminate();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  iVar8 = param_2->nCount;
  uVar5 = '\0';
  if (0 < iVar8) {
    local_8 = 0;
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
    iVar2 = *piVar1;
    uVar5 = '\0';
    do {
      if (0 < iVar2) {
        pHVar3 = param_2->pTypeArray;
        local_c = iVar2;
        piVar7 = piVar1;
        do {
          piVar7 = piVar7 + 1;
          iVar6 = TypeMatchHelper<struct__s_HandlerType_const_>
                            ((_s_HandlerType *)((int)&pHVar3->adjectives + local_8),
                             (_s_CatchableType *)*piVar7,*(_s_ThrowInfo **)(param_1 + 0x1c));
          if (iVar6 != 0) {
            uVar5 = '\x01';
            break;
          }
          local_c = local_c + -1;
        } while (0 < local_c);
      }
      local_8 = local_8 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return uVar5;
}




/* Library Function - Single Match
    void __stdcall _CallMemberFunction1(void * const,void * const,void * const)
   
   Library: Visual Studio 2017 Release */

void _CallMemberFunction1(void *param_1,void *param_2,void *param_3)

{
  (*(code *)param_2)(param_3);
  return;
}




/* Library Function - Single Match
    void __stdcall _CallMemberFunction2(void * const,void * const,void * const,int)
   
   Library: Visual Studio 2017 Release */

void _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
  (*(code *)param_2)(param_3,param_4);
  return;
}




/* Library Function - Single Match
    public: static struct _s_ESTypeList const * __cdecl __FrameHandler3::getESTypes(struct
   _s_FuncInfo const *)
   
   Library: Visual Studio 2017 Release */

_s_ESTypeList * __cdecl __FrameHandler3::getESTypes(_s_FuncInfo *param_1)

{
  return param_1->pESTypeList;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0040738b) */
/* WARNING: Removing unreachable block (ram,0x004073a0) */
/* WARNING: Removing unreachable block (ram,0x004073a5) */
/* Library Function - Single Match
    ___except_validate_context_record
   
   Library: Visual Studio 2017 Release */

void __cdecl ___except_validate_context_record(int param_1)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x004073bb) */
/* WARNING: Removing unreachable block (ram,0x004073cd) */
/* WARNING: Removing unreachable block (ram,0x004073d2) */
/* Library Function - Single Match
    ___except_validate_jump_buffer
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___except_validate_jump_buffer(int param_1)

{
  return;
}




/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_00407470;
  pvStack_28 = ExceptionList;
  local_20 = DAT_0041d004 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_00407b4b();
    }
  }
  ExceptionList = pvStack_28;
  return;
}




/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2017 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}




/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2017 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x0040750f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Library: Visual Studio 2017 Release
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x407529,param_2,(PVOID)0x0);
  return;
}




/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2017 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}




/* Library Function - Single Match
    ___vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

undefined4 ___vcrt_initialize_locks(void)

{
  int iVar1;
  uint uVar2;
  LPCRITICAL_SECTION p_Var3;
  
  p_Var3 = (LPCRITICAL_SECTION)&DAT_0041dc04;
  uVar2 = 0;
  do {
    iVar1 = ___vcrt_InitializeCriticalSectionEx(p_Var3,4000,0);
    if (iVar1 == 0) {
      uVar2 = ___vcrt_uninitialize_locks();
      return uVar2 & 0xffffff00;
    }
    DAT_0041dc1c = DAT_0041dc1c + 1;
    uVar2 = uVar2 + 0x18;
    p_Var3 = p_Var3 + 1;
  } while (uVar2 < 0x18);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* Library Function - Single Match
    ___vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 ___vcrt_uninitialize_locks(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_0041dc1c != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_0041dbec + DAT_0041dc1c * 0x18);
    iVar1 = DAT_0041dc1c;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_0041dc1c = DAT_0041dc1c + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl try_get_first_available_module(enum `anonymous
   namespace'::module_id const * const,enum `anonymous namespace'::module_id const * const)
   
   Library: Visual Studio 2017 Release */

HINSTANCE__ * __cdecl try_get_first_available_module(module_id *param_1,module_id *param_2)

{
  int *piVar1;
  LPCWSTR lpLibFileName;
  HINSTANCE__ *hLibModule;
  DWORD DVar2;
  int iVar3;
  
  do {
    if (param_1 == param_2) {
      return (HINSTANCE__ *)0x0;
    }
    piVar1 = &DAT_0041dc20 + *param_1;
    hLibModule = (HINSTANCE__ *)*piVar1;
    if (hLibModule == (HINSTANCE__ *)0x0) {
      lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_core_fibers_l1_1_1_00415b30)[*param_1];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if (hLibModule == (HMODULE)0x0) {
        DVar2 = GetLastError();
        if (((DVar2 == 0x57) && (iVar3 = _wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
           (iVar3 = _wcsncmp(lpLibFileName,L"ext-ms-",7), iVar3 != 0)) {
          hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
        }
        else {
          hLibModule = (HMODULE)0x0;
        }
        if (hLibModule == (HMODULE)0x0) {
          LOCK();
          *piVar1 = -1;
          UNLOCK();
          goto LAB_0040765f;
        }
      }
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = (int)hLibModule;
      UNLOCK();
      if (iVar3 != 0) {
        FreeLibrary(hLibModule);
      }
LAB_0040765b:
      if (hLibModule != (HINSTANCE__ *)0x0) {
        return hLibModule;
      }
    }
    else if (hLibModule != (HINSTANCE__ *)0xffffffff) goto LAB_0040765b;
LAB_0040765f:
    param_1 = param_1 + 1;
  } while( true );
}




/* Library Function - Single Match
    void * __cdecl try_get_function(enum `anonymous namespace'::function_id,char const * const,enum
   A0x5c520fe1::module_id const * const,enum A0x5c520fe1::module_id const * const)
   
   Library: Visual Studio 2017 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  uint *puVar1;
  HINSTANCE__ *hModule;
  uint uVar2;
  byte bVar3;
  FARPROC pFVar4;
  
  puVar1 = &DAT_0041dc2c + param_1;
  bVar3 = (byte)DAT_0041d004 & 0x1f;
  pFVar4 = (FARPROC)((DAT_0041d004 ^ *puVar1) >> bVar3 | (DAT_0041d004 ^ *puVar1) << 0x20 - bVar3);
  if (pFVar4 == (FARPROC)0xffffffff) {
    pFVar4 = (FARPROC)0x0;
  }
  else if (pFVar4 == (FARPROC)0x0) {
    hModule = try_get_first_available_module(param_3,param_4);
    if ((hModule == (HINSTANCE__ *)0x0) ||
       (pFVar4 = GetProcAddress(hModule,param_2), pFVar4 == (FARPROC)0x0)) {
      uVar2 = __crt_fast_encode_pointer<>(0xffffffff);
      LOCK();
      *puVar1 = uVar2;
      UNLOCK();
      pFVar4 = (FARPROC)0x0;
    }
    else {
      uVar2 = __crt_fast_encode_pointer<>((uint)pFVar4);
      LOCK();
      *puVar1 = uVar2;
      UNLOCK();
    }
  }
  return pFVar4;
}




/* Library Function - Single Match
    ___vcrt_FlsAlloc
   
   Library: Visual Studio 2017 Release */

void __cdecl ___vcrt_FlsAlloc(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0,"FlsAlloc",(module_id *)&DAT_00415be8,(module_id *)"FlsAlloc")
  ;
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040771a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}




/* Library Function - Single Match
    ___vcrt_FlsFree
   
   Library: Visual Studio 2017 Release */

void __cdecl ___vcrt_FlsFree(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(1,"FlsFree",(module_id *)&DAT_00415bfc,(module_id *)"FlsFree");
  if (pcVar1 == (code *)0x0) {
    TlsFree(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}




/* Library Function - Single Match
    ___vcrt_FlsGetValue
   
   Library: Visual Studio 2017 Release */

void __cdecl ___vcrt_FlsGetValue(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(2,"FlsGetValue",(module_id *)&DAT_00415c0c,
                                    (module_id *)"FlsGetValue");
  if (pcVar1 == (code *)0x0) {
    TlsGetValue(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}




/* Library Function - Single Match
    ___vcrt_FlsSetValue
   
   Library: Visual Studio 2017 Release */

void __cdecl ___vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(3,"FlsSetValue",(module_id *)&DAT_00415c20,
                                    (module_id *)"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}




/* Library Function - Single Match
    ___vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __cdecl
___vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(4,"InitializeCriticalSectionEx",(module_id *)&DAT_00415c34,
                                    (module_id *)"InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}




/* Library Function - Single Match
    ___vcrt_initialize_winapi_thunks
   
   Library: Visual Studio 2017 Release */

void ___vcrt_initialize_winapi_thunks(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = DAT_0041d004;
  puVar2 = &DAT_0041dc2c;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 5);
  return;
}




/* Library Function - Single Match
    ___vcrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___vcrt_uninitialize_winapi_thunks(char param_1)

{
  int *piVar1;
  
  if (param_1 == '\0') {
    piVar1 = &DAT_0041dc20;
    do {
      if (*piVar1 != 0) {
        if (*piVar1 != -1) {
          FreeLibrary((HMODULE)*piVar1);
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != &DAT_0041dc2c);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407876(void)

{
  _DAT_0041dc40 = DAT_0041d004;
  return;
}




/* Library Function - Single Match
    _unexpected
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl unexpected(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  pcVar1 = *(code **)(iVar2 + 4);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetCurrentState(struct EHRegistrationNode *,void
   *,struct _s_FuncInfo const *)
   
   Library: Visual Studio 2017 Release */

int __cdecl
__FrameHandler3::GetCurrentState(EHRegistrationNode *param_1,void *param_2,_s_FuncInfo *param_3)

{
  if (param_3->maxState < 0x81) {
    return (int)(char)param_1[8];
  }
  return *(int *)(param_1 + 8);
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(struct EHRegistrationNode *,struct
   _s_FuncInfo const *,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(EHRegistrationNode *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)(param_1 + 8) = param_3;
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2017 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int *piVar3;
  void *local_14;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[4] == 3)) &&
     ((((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)) || (param_1[5] == 0x19930522)) &&
      (pbVar1 = (byte *)param_1[7], pbVar1 != (byte *)0x0)))) {
    if (*(void **)(pbVar1 + 4) == (void *)0x0) {
      if (((*pbVar1 & 0x10) != 0) && (piVar3 = *(int **)param_1[6], piVar3 != (int *)0x0)) {
        pcVar2 = *(code **)(*piVar3 + 8);
        guard_check_icall();
        (*pcVar2)(piVar3);
      }
    }
    else {
      _CallMemberFunction0((void *)param_1[6],*(void **)(pbVar1 + 4));
    }
  }
  ExceptionList = local_14;
  return;
}




/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void * const,void * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  (*(code *)param_2)();
  return;
}




/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = ___vcrt_getptd();
  piVar1 = *(int **)(iVar2 + 0x24);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}




/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2017 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}




/* Library Function - Single Match
    ___FrameUnwindFilter
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 __cdecl ___FrameUnwindFilter(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    iVar2 = ___vcrt_getptd();
    if (0 < *(int *)(iVar2 + 0x18)) {
      iVar2 = ___vcrt_getptd();
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    iVar2 = ___vcrt_getptd();
    *(undefined4 *)(iVar2 + 0x18) = 0;
    uVar3 = terminate();
    return uVar3;
  }
  return 0;
}




/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x407a29,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}




/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_00407a31;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_00407b4b();
    }
  }
  ExceptionList = local_20;
  return;
}




/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_0041d038 = param_1;
  DAT_0041d034 = in_EAX;
  DAT_0041d03c = unaff_EBP;
  return in_EAX;
}




/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_0041d038 = param_1;
  DAT_0041d034 = in_EAX;
  DAT_0041d03c = unaff_EBP;
  return;
}




void FUN_00407b4b(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}




/* Library Function - Single Match
    public: void __thiscall __crt_state_management::dual_state_global<void
   (__cdecl*)(int)>::initialize(void (__cdecl*const)(int))
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
          (dual_state_global<void_(__cdecl*)(int)> *this,_func_void_int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ~-(uint)(this + 4 < this) & (uint)(this + 4 + (3 - (int)this)) >> 2;
  if (uVar1 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *(_func_void_int **)this = param_1;
      this = this + 4;
    } while (uVar2 != uVar1);
  }
  return;
}




/* Library Function - Single Match
    ___acrt_call_reportfault
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4 [39];
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  if (param_1 != -1) {
    FUN_00404f1b();
  }
  _memset(&local_324,0,0x50);
  _memset(local_2d4,0,0x2cc);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)local_2d4;
  local_2d4[0] = 0x10001;
  local_324.ExceptionCode = param_2;
  local_324.ExceptionFlags = param_3;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_32c);
  if (((LVar3 == 0) && (BVar2 == 0)) && (param_1 != -1)) {
    FUN_00404f1b();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00407cba(_func_void_int *param_1)

{
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041dc84,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __invalid_parameter
   
   Library: Visual Studio 2015 Release */

void __cdecl
__invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                   uintptr_t param_5)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  byte bVar3;
  code *pcVar4;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  p_Var2 = ___acrt_getptd_noexit();
  if (((p_Var2 == (__acrt_ptd *)0x0) || (pcVar4 = *(code **)(p_Var2 + 0x35c), pcVar4 == (code *)0x0)
      ) && (bVar3 = (byte)DAT_0041d004 & 0x1f,
           pcVar4 = (code *)((DAT_0041d004 ^ _DAT_0041dc84) >> bVar3 |
                            (DAT_0041d004 ^ _DAT_0041dc84) << 0x20 - bVar3), pcVar4 == (code *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  guard_check_icall();
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_00407d49(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}




void FUN_00407d59(void)

{
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2015 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  UINT uExitCode;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  ___acrt_call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}




/* Library Function - Single Match
    _wcscpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar3 = _Dst;
      do {
        wVar1 = *(wchar_t *)(((int)_Src - (int)_Dst) + (int)pwVar3);
        *pwVar3 = wVar1;
        pwVar3 = pwVar3 + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = __errno();
      iVar4 = 0x22;
      goto LAB_00407dd0;
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  iVar4 = 0x16;
LAB_00407dd0:
  *piVar2 = iVar4;
  FUN_00407d49();
  return iVar4;
}




/* Library Function - Single Match
    _wcslen
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2019 Release */

size_t __cdecl _wcslen(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((int)pwVar2 - (int)_Str >> 1) - 1;
}




int __cdecl FUN_00407e28(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}




/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::format_validation_base,wchar_t>(unsigned
   __int64,wchar_t * const,unsigned int,wchar_t const * const,struct __crt_locale_pointers *
   const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsprintf<class___crt_stdio_output::format_validation_base,wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  wchar_t *******pppppppwVar1;
  int *piVar2;
  int iVar3;
  int local_488;
  undefined1 local_484 [8];
  char local_47c;
  uint local_478;
  wchar_t *******local_474;
  uint local_470;
  uint local_46c;
  undefined4 local_468;
  wchar_t *******local_464;
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  local_460 [64];
  formatting_buffer local_420 [1048];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_464 = (wchar_t *******)param_2;
  if ((param_4 == (wchar_t *)0x0) || ((param_3 != 0 && (param_2 == (wchar_t *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00407d49();
    goto LAB_00407f8e;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_488,param_5);
  pppppppwVar1 = local_464;
  local_478 = (uint)param_1 & 2;
  local_474 = local_464;
  local_470 = param_3;
  local_46c = 0;
  if (((param_1 & 2) != 0) || (local_468 = 0, local_464 == (wchar_t *******)0x0)) {
    local_468 = 1;
  }
  local_464 = (wchar_t *******)&local_474;
  output_processor<>(local_460,&local_464,(uint)param_1,param_1._4_4_,param_4,local_484,param_6);
  iVar3 = __crt_stdio_output::
          output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          ::process(local_460);
  if (pppppppwVar1 != (wchar_t *******)0x0) {
    if ((param_1 & 1) == 0) {
      if (local_478 == 0) {
        if (param_3 != 0) {
          if (local_46c != param_3) goto LAB_00407f63;
LAB_00407fb3:
          *(undefined2 *)((int)pppppppwVar1 + (param_3 - 1) * 2) = 0;
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar3) {
          if (local_46c == param_3) goto LAB_00407fb3;
          goto LAB_00407f63;
        }
        *(undefined2 *)pppppppwVar1 = 0;
      }
    }
    else if (((param_3 != 0) || (iVar3 == 0)) && (local_46c != param_3)) {
LAB_00407f63:
      *(undefined2 *)((int)pppppppwVar1 + local_46c * 2) = 0;
    }
  }
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_420);
  if (local_47c != '\0') {
    *(uint *)(local_488 + 0x350) = *(uint *)(local_488 + 0x350) & 0xfffffffd;
  }
LAB_00407f8e:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}




/* Library Function - Single Match
    int __cdecl common_vsprintf_s<wchar_t>(unsigned __int64,wchar_t * const,unsigned int,wchar_t
   const * const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsprintf_s<wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  int *piVar1;
  int iVar2;
  
  if (param_4 == (wchar_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
    return -1;
  }
  if ((param_2 == (wchar_t *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    iVar2 = common_vsprintf<class___crt_stdio_output::format_validation_base,wchar_t>
                      (param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar2 < 0) {
      *param_2 = L'\0';
    }
    if (iVar2 != -2) {
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x22;
  }
  FUN_00407d49();
  return -1;
}




/* Library Function - Single Match
    public: unsigned int __thiscall __crt_stdio_output::formatting_buffer::count<char>(void)const 
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

uint __thiscall __crt_stdio_output::formatting_buffer::count<char>(formatting_buffer *this)

{
  if (*(int *)(this + 0x404) == 0) {
    return 0x200;
  }
  return *(uint *)(this + 0x400) >> 1;
}




/* Library Function - Single Match
    public: bool __thiscall
   __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(unsigned int)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
          (formatting_buffer *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  formatting_buffer *local_8;
  
  local_8 = this;
  if (((uint)(0xffffffff / (ulonglong)param_1) & 0xfffffffe) < 2) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    bVar3 = false;
  }
  else {
    uVar1 = param_1 * 2;
    if (((*(int *)(this + 0x404) == 0) && (uVar1 < 0x401)) || (uVar1 <= *(uint *)(this + 0x400))) {
      bVar3 = true;
    }
    else {
      local_8 = (formatting_buffer *)__malloc_base(uVar1);
      bVar3 = local_8 != (formatting_buffer *)0x0;
      if (bVar3) {
        __crt_unique_heap_ptr<char,struct___crt_internal_free_policy>::operator=
                  ((__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)(this + 0x404),
                   (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *)&local_8);
        *(uint *)(this + 0x400) = uVar1;
      }
      FID_conflict__free(local_8);
    }
  }
  return bVar3;
}




/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  bool bVar1;
  
  if (param_3 == 2) {
    return false;
  }
  if (((param_3 != 3) && (param_3 != 0xc)) && (param_3 != 0xd)) {
    bVar1 = false;
    if ((param_2 == L'c') || (param_2 == L's')) {
      bVar1 = true;
    }
    return ((param_1 & 4) != 0) == bVar1;
  }
  return true;
}




/* Library Function - Single Match
    public: char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

char * __thiscall __crt_stdio_output::formatting_buffer::scratch_data<char>(formatting_buffer *this)

{
  int iVar1;
  uint uVar2;
  formatting_buffer *pfVar3;
  
  iVar1 = *(int *)(this + 0x404);
  uVar2 = count<char>(this);
  if (iVar1 == 0) {
    pfVar3 = this + uVar2;
  }
  else {
    pfVar3 = (formatting_buffer *)(uVar2 + iVar1);
  }
  return (char *)pfVar3;
}




/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __thiscall
type_case_integer_parse_into_buffer<>(void *this,uint param_1,uint param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)((int)this + 0x444);
  if (*(formatting_buffer **)((int)this + 0x444) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)((int)this + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>
                    ((formatting_buffer *)((int)this + 0x40));
  *(formatting_buffer **)((int)this + 0x34) = pfVar3 + (uVar1 - 1);
  while ((0 < *(int *)((int)this + 0x28) || (param_1 != 0))) {
    cVar2 = (char)(param_1 % param_2) + '0';
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
    if ('9' < cVar2) {
      cVar2 = cVar2 + ((param_3 == '\0') - 1U & 0xe0) + 0x27;
    }
    **(char **)((int)this + 0x34) = cVar2;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
    param_1 = param_1 / param_2;
  }
  *(int *)((int)this + 0x38) = (int)(pfVar3 + (uVar1 - 1)) - *(int *)((int)this + 0x34);
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __thiscall
type_case_integer_parse_into_buffer<>(void *this,longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  char extraout_CL;
  char cVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)((int)this + 0x444);
  if (*(formatting_buffer **)((int)this + 0x444) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)((int)this + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>
                    ((formatting_buffer *)((int)this + 0x40));
  *(formatting_buffer **)((int)this + 0x34) = pfVar3 + (uVar1 - 1);
  while( true ) {
    if ((*(int *)((int)this + 0x28) < 1) && (param_1 == 0)) break;
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
    param_1 = __aulldvrm((uint)param_1,(uint)((ulonglong)param_1 >> 0x20),param_2,0);
    cVar2 = extraout_CL + '0';
    if ('9' < cVar2) {
      cVar2 = cVar2 + ((param_3 == '\0') - 1U & 0xe0) + 0x27;
    }
    **(char **)((int)this + 0x34) = cVar2;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
  }
  *(int *)((int)this + 0x38) = (int)(pfVar3 + (uVar1 - 1)) - *(int *)((int)this + 0x34);
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  return;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::write_multiple_characters<class
   __crt_stdio_output::string_output_adapter<wchar_t>,char>(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,char,int,int * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__crt_stdio_output::
write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
          (string_output_adapter<wchar_t> *param_1,char param_2,int param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      string_output_adapter<wchar_t>::write_character(param_1,(short)param_2,param_4);
      if (*param_4 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}




/* Library Function - Single Match
    protected: __thiscall __crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

common_data<wchar_t> * __thiscall
__crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>(common_data<wchar_t> *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 0x32) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x30] = (common_data<wchar_t>)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (common_data<wchar_t>)0x0;
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x444) = 0;
  return this;
}




/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall __crt_stdio_output::output_adapter_data<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >::output_adapter_data<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >(class
   __crt_stdio_output::stream_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
    protected: __thiscall __crt_stdio_output::output_adapter_data<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >::output_adapter_data<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

common_data<wchar_t> * __thiscall
output_adapter_data<>
          (void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  __crt_stdio_output::common_data<wchar_t>::common_data<wchar_t>((common_data<wchar_t> *)this);
  *(undefined4 *)((int)this + 0x448) = *param_1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0x14) = param_6;
  return (common_data<wchar_t> *)this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
    public: __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64,wchar_t const *
   const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

void * __thiscall
output_processor<>(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  
  output_adapter_data<>(this,param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)((int)this + 0x450) = 0;
  piVar1 = __errno();
  *(int **)((int)this + 0xc) = piVar1;
  return this;
}




/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  uint uVar1;
  undefined *puVar2;
  __acrt_ptd *p_Var3;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_0041dec4 != 0) {
      p_Var3 = ___acrt_getptd();
      *(__acrt_ptd **)this = p_Var3;
      *(int *)(this + 4) = *(int *)(p_Var3 + 0x4c);
      *(int *)(this + 8) = *(int *)(p_Var3 + 0x48);
      ___acrt_update_locale_info((int)p_Var3,(int *)(this + 4));
      ___acrt_update_multibyte_info(*(int *)this,(int *)(this + 8));
      uVar1 = *(uint *)(*(int *)this + 0x350);
      if ((uVar1 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
      return this;
    }
    *(undefined **)(this + 4) = PTR_PTR_DAT_0041d1c0;
    puVar2 = PTR_DAT_0041d1c4;
  }
  else {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
    puVar2 = *(undefined **)(param_1 + 4);
  }
  *(undefined **)(this + 8) = puVar2;
  return this;
}




/* Library Function - Single Match
    public: __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall __crt_stdio_output::formatting_buffer::~formatting_buffer(formatting_buffer *this)

{
  FID_conflict__free(*(void **)(this + 0x404));
  *(undefined4 *)(this + 0x404) = 0;
  return;
}




/* Library Function - Single Match
    public: class __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> & __thiscall
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>::operator=(class
   __crt_unique_heap_ptr<char,struct __crt_internal_free_policy> &&)
   
   Library: Visual Studio 2015 Release */

__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<char,struct___crt_internal_free_policy>::operator=
          (__crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *this,
          __crt_unique_heap_ptr<char,struct___crt_internal_free_policy> *param_1)

{
  FID_conflict__free(*(void **)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = 0;
  return this;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::crop_zeroes(char *,struct __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __cdecl __crt_stdio_output::crop_zeroes(char *param_1,__crt_locale_pointers *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  for (; (*param_1 != '\0' && (*param_1 != *(char *)**(undefined4 **)(*(int *)param_2 + 0x88)));
      param_1 = param_1 + 1) {
  }
  if (*param_1 != '\0') {
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar2 = param_1;
      if ((cVar1 == '\0') || (cVar1 == 'e')) break;
    } while (cVar1 != 'E');
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == *(char *)**(undefined4 **)(*(int *)param_2 + 0x88)) {
      pcVar2 = pcVar3 + -2;
    }
    do {
      cVar1 = *param_1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: enum __crt_stdio_output::state __thiscall
   __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::find_next_state(wchar_t,enum
   __crt_stdio_output::state)const 
    private: enum __crt_stdio_output::state __thiscall
   __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::find_next_state(wchar_t,enum
   __crt_stdio_output::state)const 
   
   Library: Visual Studio 2015 Release */

byte find_next_state(ushort param_1,int param_2)

{
  uint uVar1;
  
  if ((ushort)(param_1 - 0x20) < 0x5b) {
    uVar1 = (byte)" Complete Object Locator\'"[param_1 + 4] & 0xf;
  }
  else {
    uVar1 = 0;
  }
  return (byte)(&DAT_004163f8)[param_2 + uVar1 * 9] >> 4;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::force_decimal_point(char *,struct __crt_locale_pointers *
   const)
   
   Library: Visual Studio 2015 Release */

void __cdecl __crt_stdio_output::force_decimal_point(char *param_1,__crt_locale_pointers *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  
  iVar2 = _tolower((int)*param_1);
  bVar4 = iVar2 == 0x65;
  while (!bVar4) {
    param_1 = (char *)((byte *)param_1 + 1);
    iVar2 = _isdigit((uint)(byte)*param_1);
    bVar4 = iVar2 == 0;
  }
  iVar2 = _tolower((int)*param_1);
  if (iVar2 == 0x78) {
    param_1 = (char *)((byte *)param_1 + 2);
  }
  bVar3 = *param_1;
  *param_1 = *(byte *)**(undefined4 **)(*(int *)param_2 + 0x88);
  do {
    param_1 = (char *)((byte *)param_1 + 1);
    bVar1 = *param_1;
    *param_1 = bVar3;
    bVar3 = bVar1;
  } while (*param_1 != 0);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::parse_int_from_format_string(int * const)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::parse_int_from_format_string(int * const)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint __thiscall parse_int_from_format_string(void *this,long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *local_8;
  
  piVar1 = *(int **)((int)this + 0xc);
  iVar2 = *piVar1;
  *piVar1 = 0;
  local_8 = (wchar_t *)0x0;
  lVar3 = _wcstol((wchar_t *)(*(int *)((int)this + 0x10) + -2),&local_8,10);
  *param_1 = lVar3;
  pwVar5 = *(wchar_t **)((int)this + 0xc);
  if ((*(int *)*(wchar_t **)((int)this + 0xc) == 0x22) ||
     (pwVar5 = local_8, local_8 < *(wchar_t **)((int)this + 0x10))) {
    uVar4 = (uint)pwVar5 & 0xffffff00;
  }
  else {
    *(wchar_t **)((int)this + 0x10) = local_8;
    uVar4 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  if ((*piVar1 == 0) && (iVar2 != 0)) {
    *piVar1 = iVar2;
  }
  return uVar4;
}




/* Library Function - Single Match
    public: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::process(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::process(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          *this)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined4 uVar7;
  int iVar6;
  
  bVar2 = __crt_strtox::c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)(this + 0x448));
  if (!bVar2) {
    return -1;
  }
  if (*(int *)(this + 0x10) == 0) {
LAB_0040855a:
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00407d49();
  }
  else {
    do {
      *(int *)(this + 0x450) = *(int *)(this + 0x450) + 1;
      if (*(int *)(this + 0x450) == 2) {
        return *(int *)(this + 0x18);
      }
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
LAB_00408603:
      sVar1 = **(short **)(this + 0x10);
      *(short *)(this + 0x32) = sVar1;
      if (sVar1 != 0) {
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
        if (*(int *)(this + 0x18) < 0) goto LAB_0040861a;
        bVar3 = find_next_state(*(ushort *)(this + 0x32),*(int *)(this + 0x1c));
        iVar6 = CONCAT31(extraout_var,bVar3);
        *(int *)(this + 0x1c) = iVar6;
        if (iVar6 == 8) goto LAB_0040855a;
        switch(iVar6) {
        case 0:
          uVar7 = state_case_normal((int)this);
          cVar4 = (char)uVar7;
          break;
        case 1:
          *(undefined4 *)(this + 0x28) = 0xffffffff;
          *(undefined4 *)(this + 0x24) = 0;
          this[0x30] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                        )0x0;
          *(undefined4 *)(this + 0x20) = 0;
          *(undefined4 *)(this + 0x2c) = 0;
          this[0x3c] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                        )0x0;
          goto LAB_00408603;
        case 2:
          uVar7 = state_case_flag((int)this);
          cVar4 = (char)uVar7;
          break;
        case 3:
          uVar7 = state_case_width(this);
          cVar4 = (char)uVar7;
          break;
        case 4:
          goto switchD_004085a6_caseD_4;
        case 5:
          uVar7 = state_case_precision(this);
          cVar4 = (char)uVar7;
          break;
        case 6:
          cVar4 = state_case_size(this);
          break;
        case 7:
          cVar4 = state_case_type(this);
          break;
        default:
          goto LAB_0040863f;
        }
        if (cVar4 == '\0') {
          return -1;
        }
        goto LAB_00408603;
      }
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 2;
LAB_0040861a:
      uVar7 = validate_and_update_state_at_end_of_format_string((int)this);
    } while ((char)uVar7 != '\0');
  }
LAB_0040863f:
  return -1;
switchD_004085a6_caseD_4:
  *(undefined4 *)(this + 0x28) = 0;
  goto LAB_00408603;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_flag(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_flag(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall state_case_flag(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x32);
  if (uVar1 == 0x20) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    iVar2 = 0;
  }
  else if (uVar1 == 0x23) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x20;
    iVar2 = 0;
  }
  else if (uVar1 == 0x2b) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    iVar2 = 0;
  }
  else if (uVar1 == 0x2d) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 - 0x30;
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_normal(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal(void)
   
   Library: Visual Studio 2015 Release */

uint __fastcall state_case_normal(int param_1)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  
  cVar1 = state_case_normal_common(param_1);
  if (cVar1 == '\0') {
    piVar2 = __errno();
    *piVar2 = 0x16;
    uVar3 = FUN_00407d49();
    return uVar3 & 0xffffff00;
  }
  return CONCAT31(extraout_var,1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal_common(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_normal_common(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __fastcall state_case_normal_common(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  __crt_stdio_output::string_output_adapter<wchar_t>::write_character
            ((string_output_adapter<wchar_t> *)(param_1 + 0x448),*(wchar_t *)(param_1 + 0x32),
             (int *)(param_1 + 0x18));
  return 1;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_precision(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_precision(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall state_case_precision(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)((int)param_1 + 0x32) != 0x2a) {
    uVar2 = parse_int_from_format_string(param_1,(long *)((int)param_1 + 0x28));
    return uVar2;
  }
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4);
  *(int *)((int)param_1 + 0x28) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((int)param_1 + 0x28) = 0xffffffff;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_size(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_size(void)
   
   Library: Visual Studio 2015 Release */

bool __fastcall
state_case_size(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                *param_1)

{
  ushort uVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  int *piVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x32);
  if (uVar1 == 0x46) {
    if ((*(uint *)param_1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 7;
      bVar4 = __crt_stdio_output::
              output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
              ::state_case_type(param_1);
      return bVar4;
    }
  }
  else if (uVar1 == 0x4e) {
    if ((*(uint *)param_1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 8;
LAB_00408740:
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_00407d49();
      return false;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_00408740;
    if (uVar1 < 0x6b) {
      if (uVar1 == 0x6a) {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      else if (uVar1 == 0x49) {
        psVar3 = *(short **)(param_1 + 0x10);
        sVar2 = *psVar3;
        if ((sVar2 == 0x33) && (psVar3[1] == 0x32)) {
          *(undefined4 *)(param_1 + 0x2c) = 10;
          *(short **)(param_1 + 0x10) = psVar3 + 2;
        }
        else if ((sVar2 == 0x36) && (psVar3[1] == 0x34)) {
          *(undefined4 *)(param_1 + 0x2c) = 0xb;
          *(short **)(param_1 + 0x10) = psVar3 + 2;
        }
        else if ((((sVar2 == 100) || (sVar2 == 0x69)) || (sVar2 == 0x6f)) ||
                (((sVar2 == 0x75 || (sVar2 == 0x78)) || (sVar2 == 0x58)))) {
          *(undefined4 *)(param_1 + 0x2c) = 9;
        }
      }
      else if (uVar1 == 0x4c) {
        *(undefined4 *)(param_1 + 0x2c) = 8;
      }
      else if (uVar1 == 0x54) {
        *(undefined4 *)(param_1 + 0x2c) = 0xd;
      }
      else if (uVar1 == 0x68) {
        if (**(short **)(param_1 + 0x10) == 0x68) {
          *(undefined4 *)(param_1 + 0x2c) = 1;
          *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
    }
    else if (uVar1 == 0x6c) {
      if (**(short **)(param_1 + 0x10) == 0x6c) {
        *(undefined4 *)(param_1 + 0x2c) = 4;
        *(short **)(param_1 + 0x10) = *(short **)(param_1 + 0x10) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 3;
      }
    }
    else if (uVar1 == 0x74) {
      *(undefined4 *)(param_1 + 0x2c) = 7;
    }
    else if (uVar1 == 0x77) {
      *(undefined4 *)(param_1 + 0x2c) = 0xc;
    }
    else if (uVar1 == 0x7a) {
      *(undefined4 *)(param_1 + 0x2c) = 6;
    }
  }
  return true;
}




/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_type(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::state_case_type(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  *this)

{
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *poVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  iVar8 = 0;
  uVar9 = *(ushort *)(this + 0x32);
  if (uVar9 < 0x65) {
    if (uVar9 == 100) {
LAB_00408940:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
LAB_00408944:
      cVar5 = '\0';
      uVar11 = 10;
LAB_00408947:
      uVar11 = type_case_integer(this,uVar11,cVar5);
      cVar5 = (char)uVar11;
    }
    else if (uVar9 < 0x59) {
      if (uVar9 == 0x58) {
        cVar5 = '\x01';
LAB_004088ec:
        uVar11 = 0x10;
        goto LAB_00408947;
      }
      if (uVar9 != 0x41) {
        if (uVar9 == 0x43) goto LAB_00408900;
        if (uVar9 < 0x45) goto LAB_00408ace;
        if (0x47 < uVar9) {
          if (uVar9 != 0x53) goto LAB_00408ace;
          goto LAB_004088d4;
        }
      }
LAB_00408950:
      uVar7 = type_case_a((uint *)this);
      cVar5 = (char)uVar7;
    }
    else if (uVar9 == 0x5a) {
      uVar7 = type_case_Z((__uint64 *)this);
      cVar5 = (char)uVar7;
    }
    else {
      if (uVar9 == 0x61) goto LAB_00408950;
      if (uVar9 != 99) goto LAB_00408ace;
LAB_00408900:
      uVar7 = type_case_c_tchar((__uint64 *)this);
      cVar5 = (char)uVar7;
    }
  }
  else if (uVar9 < 0x71) {
    if (uVar9 == 0x70) {
      cVar5 = type_case_p(this);
    }
    else {
      if (uVar9 < 0x68) goto LAB_00408950;
      if (uVar9 == 0x69) goto LAB_00408940;
      if (uVar9 == 0x6e) {
        uVar11 = type_case_n((int)this);
        cVar5 = (char)uVar11;
      }
      else {
        if (uVar9 != 0x6f) goto LAB_00408ace;
        cVar5 = type_case_o(this);
      }
    }
  }
  else {
    if (uVar9 != 0x73) {
      if (uVar9 != 0x75) {
        if (uVar9 != 0x78) goto LAB_00408ace;
        cVar5 = '\0';
        goto LAB_004088ec;
      }
      goto LAB_00408944;
    }
LAB_004088d4:
    uVar7 = type_case_s((__uint64 *)this);
    cVar5 = (char)uVar7;
  }
  if ((cVar5 == '\0') ||
     (this[0x30] !=
      (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
       )0x0)) goto LAB_00408ace;
  uVar11 = *(uint *)(this + 0x20);
  local_10 = 0;
  local_c = 0;
  if ((uVar11 >> 4 & 1) != 0) {
    if ((uVar11 >> 6 & 1) == 0) {
      if ((uVar11 & 1) == 0) {
        if ((uVar11 >> 1 & 1) == 0) goto LAB_004089ce;
        uVar9 = 0x20;
      }
      else {
        uVar9 = 0x2b;
      }
    }
    else {
      uVar9 = 0x2d;
    }
    local_10 = (uint)uVar9;
    iVar8 = 1;
  }
LAB_004089ce:
  sVar2 = *(short *)(this + 0x32);
  if (((sVar2 == 0x78) || (sVar2 == 0x58)) && ((uVar11 >> 5 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((sVar2 == 0x61) || (sVar2 == 0x41)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar3) || (bVar4)) {
    *(undefined2 *)((int)&local_10 + iVar8 * 2) = 0x30;
    if ((sVar2 == 0x58) || (sVar2 == 0x41)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    *(short *)((int)&local_10 + iVar8 * 2 + 2) = (short)(char)((!bVar3 - 1U & 0xe0) + 0x78);
    iVar8 = iVar8 + 2;
  }
  iVar10 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar8;
  if ((uVar11 & 0xc) == 0) {
    write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)(this + 0x18));
  }
  string_output_adapter<wchar_t>::write_string
            ((string_output_adapter<wchar_t> *)(this + 0x448),(wchar_t *)&local_10,iVar8,
             (int *)(this + 0x18),*(int **)(this + 0xc));
  poVar1 = this + 0x18;
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),'0',iVar10,(int *)poVar1);
  }
  write_stored_string_tchar((uint)this);
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x448),' ',iVar10,(int *)poVar1);
  }
LAB_00408ace:
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::state_case_width(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_width(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall state_case_width(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)((int)param_1 + 0x32) != 0x2a) {
    uVar2 = parse_int_from_format_string(param_1,(long *)((int)param_1 + 0x24));
    return uVar2;
  }
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4);
  *(int *)((int)param_1 + 0x24) = iVar1;
  if (iVar1 < 0) {
    *(uint *)((int)param_1 + 0x20) = *(uint *)((int)param_1 + 0x20) | 4;
    *(int *)((int)param_1 + 0x24) = -*(int *)((int)param_1 + 0x24);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* Library Function - Single Match
    unsigned int __cdecl __crt_stdio_output::to_integer_size(enum
   __crt_stdio_output::length_modifier)
   
   Library: Visual Studio 2015 Release */

uint __cdecl __crt_stdio_output::to_integer_size(length_modifier param_1)

{
  uint uStack_8;
  
  switch(param_1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 9:
  case 10:
    uStack_8 = 4;
    break;
  case 1:
    return 1;
  case 2:
    uStack_8 = 2;
    break;
  case 4:
  case 5:
  case 0xb:
    uStack_8 = 8;
    break;
  default:
    return 0;
  }
  return uStack_8;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4 __fastcall type_case_Z(__uint64 *param_1)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  uVar4 = *(uint *)((int)param_1 + 0x14);
  puVar1 = *(ushort **)(uVar4 - 4);
  if ((puVar1 == (ushort *)0x0) || (iVar2 = *(int *)(puVar1 + 2), iVar2 == 0)) {
    *(char **)((int)param_1 + 0x34) = "(null)";
    *(undefined4 *)(param_1 + 7) = 6;
  }
  else {
    bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((int)param_1 + 0x32),
                       *(length_modifier *)((int)param_1 + 0x2c));
    *(int *)((int)param_1 + 0x34) = iVar2;
    uVar4 = (uint)*puVar1;
    if (bVar3) {
      uVar4 = (uint)(*puVar1 >> 1);
      *(uint *)(param_1 + 7) = uVar4;
      *(undefined1 *)((int)param_1 + 0x3c) = 1;
      goto LAB_00408bc3;
    }
    *(uint *)(param_1 + 7) = uVar4;
  }
  *(undefined1 *)((int)param_1 + 0x3c) = 0;
LAB_00408bc3:
  return CONCAT31((int3)(uVar4 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall type_case_a(uint *param_1)

{
  formatting_buffer *this;
  char cVar1;
  bool bVar2;
  uint uVar3;
  formatting_buffer *pfVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined3 uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  __crt_locale_pointers *p_Var13;
  uint *local_c;
  uint *local_8;
  
  param_1[8] = param_1[8] | 0x10;
  if ((int)param_1[10] < 0) {
    if ((*(short *)((int)param_1 + 0x32) == 0x61) || (*(short *)((int)param_1 + 0x32) == 0x41)) {
      param_1[10] = 0xd;
    }
    else {
      param_1[10] = 6;
    }
  }
  else if ((param_1[10] == 0) &&
          ((*(short *)((int)param_1 + 0x32) == 0x67 || (*(short *)((int)param_1 + 0x32) == 0x47))))
  {
    param_1[10] = 1;
  }
  this = (formatting_buffer *)(param_1 + 0x10);
  local_c = param_1;
  local_8 = param_1;
  bVar2 = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
                    (this,param_1[10] + 0x15d);
  if (!bVar2) {
    uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
    param_1[10] = uVar3 - 0x15d;
  }
  pfVar4 = (formatting_buffer *)param_1[0x111];
  if ((formatting_buffer *)param_1[0x111] == (formatting_buffer *)0x0) {
    pfVar4 = this;
  }
  param_1[0xd] = (uint)pfVar4;
  param_1[5] = param_1[5] + 8;
  local_c = *(uint **)(param_1[5] - 8);
  local_8 = *(uint **)(param_1[5] - 4);
  uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
  pfVar4 = (formatting_buffer *)param_1[0x111];
  if ((formatting_buffer *)param_1[0x111] == (formatting_buffer *)0x0) {
    pfVar4 = this;
  }
  p_Var13 = (__crt_locale_pointers *)param_1[2];
  iVar5 = (int)*(char *)((int)param_1 + 0x32);
  uVar12 = param_1[1];
  uVar11 = *param_1;
  uVar10 = param_1[10];
  pcVar6 = __crt_stdio_output::formatting_buffer::scratch_data<char>(this);
  uVar7 = __crt_stdio_output::formatting_buffer::count<char>(this);
  ___acrt_fp_format((double *)&local_c,(char *)pfVar4,uVar7,pcVar6,uVar3,iVar5,uVar10,uVar11,uVar12,
                    p_Var13);
  if (((param_1[8] >> 5 & 1) != 0) && (param_1[10] == 0)) {
    __crt_stdio_output::force_decimal_point
              ((char *)param_1[0xd],(__crt_locale_pointers *)param_1[2]);
  }
  if (((*(short *)((int)param_1 + 0x32) == 0x67) || (*(short *)((int)param_1 + 0x32) == 0x47)) &&
     ((param_1[8] >> 5 & 1) == 0)) {
    __crt_stdio_output::crop_zeroes((char *)param_1[0xd],(__crt_locale_pointers *)param_1[2]);
  }
  pcVar6 = (char *)param_1[0xd];
  if (*pcVar6 == '-') {
    param_1[8] = param_1[8] | 0x40;
    pcVar6 = pcVar6 + 1;
    param_1[0xd] = (uint)pcVar6;
  }
  pcVar9 = (char *)param_1[0xd];
  cVar1 = *pcVar9;
  uVar8 = (undefined3)((uint)pcVar6 >> 8);
  if (((cVar1 == 'i') || (cVar1 == 'I')) || ((cVar1 == 'n' || (cVar1 == 'N')))) {
    uVar8 = 0;
    *(undefined2 *)((int)param_1 + 0x32) = 0x73;
  }
  pcVar6 = pcVar9 + 1;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  param_1[0xe] = (int)pcVar9 - (int)pcVar6;
  return CONCAT31(uVar8,1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall type_case_c_tchar(__uint64 *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined4 local_8;
  
  *(undefined1 *)((int)param_1 + 0x3c) = 1;
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  wVar1 = *(wchar_t *)(*(int *)((int)param_1 + 0x14) + -4);
  local_8 = param_1;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x32),
                     *(length_modifier *)((int)param_1 + 0x2c));
  pwVar5 = (wchar_t *)(param_1 + 8);
  if (bVar2) {
    pwVar4 = *(wchar_t **)((int)param_1 + 0x444);
    if (*(wchar_t **)((int)param_1 + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    *pwVar4 = wVar1;
  }
  else {
    local_8._0_2_ = CONCAT11(bVar2,(char)wVar1);
    pwVar4 = *(wchar_t **)((int)param_1 + 0x444);
    if (*(wchar_t **)((int)param_1 + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    iVar3 = __mbtowc_l(pwVar4,(char *)&local_8,(*(_locale_t *)(param_1 + 1))->locinfo->lc_codepage,
                       *(_locale_t *)(param_1 + 1));
    if (iVar3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  pwVar4 = *(wchar_t **)((int)param_1 + 0x444);
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar5 = pwVar4;
  }
  *(wchar_t **)((int)param_1 + 0x34) = pwVar5;
  *(undefined4 *)(param_1 + 7) = 1;
  return CONCAT31((int3)((uint)pwVar4 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint __thiscall type_case_integer(void *this,uint param_1,char param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = __crt_stdio_output::to_integer_size(*(length_modifier *)((int)this + 0x2c));
  if (uVar1 == 1) {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
    if ((*(uint *)((int)this + 0x20) >> 4 & 1) == 0) {
      uVar4 = (uint)*(byte *)(*(int *)((int)this + 0x14) + -4);
    }
    else {
      uVar4 = (uint)*(char *)(*(int *)((int)this + 0x14) + -4);
    }
  }
  else if (uVar1 == 2) {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
    if ((*(uint *)((int)this + 0x20) >> 4 & 1) == 0) {
      uVar4 = (uint)*(ushort *)(*(int *)((int)this + 0x14) + -4);
    }
    else {
      uVar4 = (uint)*(short *)(*(int *)((int)this + 0x14) + -4);
    }
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 != 8) {
        piVar2 = __errno();
        *piVar2 = 0x16;
        uVar1 = FUN_00407d49();
        return uVar1 & 0xffffff00;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 8;
      uVar4 = *(uint *)(*(int *)((int)this + 0x14) + -8);
      iVar5 = *(int *)(*(int *)((int)this + 0x14) + -4);
      goto LAB_00408e84;
    }
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 4;
    if ((*(uint *)((int)this + 0x20) >> 4 & 1) == 0) {
      uVar4 = *(uint *)(*(int *)((int)this + 0x14) + -4);
      iVar5 = 0;
      goto LAB_00408e84;
    }
    uVar4 = *(uint *)(*(int *)((int)this + 0x14) + -4);
  }
  iVar5 = (int)uVar4 >> 0x1f;
LAB_00408e84:
  if ((((*(uint *)((int)this + 0x20) >> 4 & 1) != 0) && (iVar5 < 1)) && (iVar5 < 0)) {
    bVar6 = uVar4 != 0;
    uVar4 = -uVar4;
    iVar5 = -(iVar5 + (uint)bVar6);
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 0x40;
  }
  if (*(int *)((int)this + 0x28) < 0) {
    *(undefined4 *)((int)this + 0x28) = 1;
  }
  else {
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xfffffff7;
    if (0x200 < *(int *)((int)this + 0x28)) {
      *(undefined4 *)((int)this + 0x28) = 0x200;
    }
  }
  if (uVar4 == 0 && iVar5 == 0) {
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & 0xffffffdf;
  }
  if (uVar1 == 8) {
    type_case_integer_parse_into_buffer<>(this,CONCAT44(iVar5,uVar4),param_1,param_2);
  }
  else {
    type_case_integer_parse_into_buffer<>(this,uVar4,param_1,param_2);
  }
  pcVar3 = (char *)(*(uint *)((int)this + 0x20) >> 7);
  if ((((uint)pcVar3 & 1) != 0) &&
     ((*(int *)((int)this + 0x38) == 0 || (pcVar3 = *(char **)((int)this + 0x34), *pcVar3 != '0'))))
  {
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
    **(undefined1 **)((int)this + 0x34) = 0x30;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  }
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

uint __fastcall type_case_n(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  puVar1 = *(uint **)(*(int *)(param_1 + 0x14) + -4);
  iVar2 = __get_printf_count_output();
  if (iVar2 == 0) {
LAB_00408f36:
    piVar3 = __errno();
    *piVar3 = 0x16;
    uVar4 = FUN_00407d49();
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = __crt_stdio_output::to_integer_size(*(length_modifier *)(param_1 + 0x2c));
    if (uVar4 == 1) {
      uVar4 = 0;
      *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x18);
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x18);
      *(ushort *)puVar1 = *(ushort *)(param_1 + 0x18);
    }
    else if (uVar4 == 4) {
      uVar4 = *(uint *)(param_1 + 0x18);
      *puVar1 = uVar4;
    }
    else {
      if (uVar4 != 8) goto LAB_00408f36;
      uVar4 = *(uint *)(param_1 + 0x18);
      *puVar1 = uVar4;
      puVar1[1] = (int)uVar4 >> 0x1f;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_o(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_o(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_o(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_o(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __fastcall type_case_o(void *param_1)

{
  if ((*(uint *)((int)param_1 + 0x20) >> 5 & 1) != 0) {
    *(uint *)((int)param_1 + 0x20) = *(uint *)((int)param_1 + 0x20) | 0x80;
  }
  type_case_integer(param_1,8,'\0');
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_p(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_p(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_p(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_p(void)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

void __fastcall type_case_p(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x28) = 8;
  *(undefined4 *)((int)param_1 + 0x2c) = 10;
  type_case_integer(param_1,0x10,'\x01');
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined4 __fastcall type_case_s(__uint64 *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  *(int *)((int)param_1 + 0x14) = *(int *)((int)param_1 + 0x14) + 4;
  uVar3 = (uint)param_1[5];
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4);
  *(int *)((int)param_1 + 0x34) = iVar1;
  if (uVar3 == 0xffffffff) {
    uVar3 = 0x7fffffff;
  }
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x32),
                     *(length_modifier *)((int)param_1 + 0x2c));
  if (bVar2) {
    if (iVar1 == 0) {
      *(wchar_t **)((int)param_1 + 0x34) = L"(null)";
    }
    *(undefined1 *)((int)param_1 + 0x3c) = 1;
    uVar3 = FUN_0040b77e(*(short **)((int)param_1 + 0x34),uVar3);
  }
  else {
    if (iVar1 == 0) {
      *(char **)((int)param_1 + 0x34) = "(null)";
    }
    uVar3 = type_case_s_compute_narrow_string_length(param_1,uVar3);
  }
  *(uint *)(param_1 + 7) = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
    private: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_s_compute_narrow_string_length(int,wchar_t)const 
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

int __thiscall type_case_s_compute_narrow_string_length(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = *(byte **)((int)this + 0x34);
  if (0 < param_1) {
    do {
      if (*pbVar1 == 0) {
        return iVar2;
      }
      if ((*(ushort *)(*(int *)**(undefined4 **)((int)this + 8) + (uint)*pbVar1 * 2) & 0x8000) != 0)
      {
        pbVar1 = pbVar1 + 1;
      }
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return iVar2;
}




/* Library Function - Single Match
    public: bool __thiscall __crt_strtox::c_string_character_source<wchar_t>::validate(void)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_strtox::c_string_character_source<wchar_t>::validate(c_string_character_source<wchar_t> *this)

{
  int *piVar1;
  
  if (*(int *)this == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
    return false;
  }
  return true;
}




/* Library Function - Multiple Matches With Same Base Name
    protected: bool __thiscall __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>
   >::validate_and_update_state_at_end_of_format_string(void)const 
    protected: bool __thiscall __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>
   >::validate_and_update_state_at_end_of_format_string(void)const 
   
   Library: Visual Studio 2015 Release */

uint __fastcall validate_and_update_state_at_end_of_format_string(int param_1)

{
  undefined4 in_EAX;
  int *piVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x1c) != 7)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    uVar2 = FUN_00407d49();
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* Library Function - Single Match
    public: bool __thiscall
   __crt_stdio_output::string_output_adapter<wchar_t>::write_character(wchar_t,int * const)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_character
          (string_output_adapter<wchar_t> *this,wchar_t param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + 8) == *(int *)(iVar1 + 4)) {
    if (*(char *)(iVar1 + 0xc) == '\0') {
      *param_2 = -1;
    }
    else {
      *param_2 = *param_2 + 1;
    }
    uVar2 = *(undefined1 *)(*(int *)this + 0xc);
  }
  else {
    *param_2 = *param_2 + 1;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + 1;
    *(wchar_t *)**(undefined4 **)this = param_1;
    **(int **)this = **(int **)this + 2;
    uVar2 = 1;
  }
  return (bool)uVar2;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall write_stored_string_tchar(uint param_1)

{
  int *piVar1;
  int *piVar2;
  char *_SrcCh;
  int iVar3;
  uint local_8;
  uint3 extraout_var;
  
  local_8 = param_1;
  if ((*(char *)(param_1 + 0x3c) == '\0') && (piVar2 = *(int **)(param_1 + 0x38), 0 < (int)piVar2))
  {
    _SrcCh = *(char **)(param_1 + 0x34);
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      do {
        local_8 = local_8 & 0xffff0000;
        piVar1 = (int *)__mbtowc_l((wchar_t *)&local_8,_SrcCh,
                                   (*(_locale_t *)(param_1 + 8))->locinfo->lc_codepage,
                                   *(_locale_t *)(param_1 + 8));
        if ((int)piVar1 < 1) {
          *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
          piVar2 = piVar1;
          break;
        }
        __crt_stdio_output::string_output_adapter<wchar_t>::write_character
                  ((string_output_adapter<wchar_t> *)(param_1 + 0x448),(wchar_t)local_8,
                   (int *)(param_1 + 0x18));
        piVar2 = (int *)((uint)extraout_var << 8);
        _SrcCh = _SrcCh + (int)piVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != *(int *)(param_1 + 0x38));
    }
  }
  else {
    piVar2 = (int *)(param_1 + 0x18);
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              ((string_output_adapter<wchar_t> *)(param_1 + 0x448),*(wchar_t **)(param_1 + 0x34),
               *(int *)(param_1 + 0x38),piVar2,*(int **)(param_1 + 0xc));
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}




/* Library Function - Single Match
    public: void __thiscall __crt_stdio_output::string_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,int * const)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_string
          (string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = *param_4;
  *param_4 = 0;
  puVar2 = *(undefined4 **)this;
  if (puVar2[2] == puVar2[1]) {
    if (*(char *)(puVar2 + 3) == '\0') {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + param_2;
    }
  }
  else {
    uVar3 = puVar2[1] - puVar2[2];
    if ((uint)param_2 <= uVar3) {
      uVar3 = param_2;
    }
    FUN_00405180((uint *)*puVar2,(uint *)param_1,uVar3 * 2);
    **(int **)this = **(int **)this + uVar3 * 2;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + uVar3;
    if (*(char *)(*(int *)this + 0xc) == '\0') {
      if (uVar3 == param_2) {
        *param_3 = *param_3 + uVar3;
      }
      else {
        *param_3 = -1;
      }
    }
    else {
      *param_3 = *param_3 + param_2;
    }
  }
  if ((*param_4 == 0) && (iVar1 != 0)) {
    *param_4 = iVar1;
  }
  return;
}




/* Library Function - Single Match
    ___stdio_common_vswprintf_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___stdio_common_vswprintf_s
          (undefined4 param_1,undefined4 param_2,wchar_t *param_3,uint param_4,wchar_t *param_5,
          __crt_locale_pointers *param_6,char *param_7)

{
  common_vsprintf_s<wchar_t>(CONCAT44(param_2,param_1),param_3,param_4,param_5,param_6,param_7);
  return;
}




/* Library Function - Single Match
    _wcscat_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iStack_14;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        iVar4 = (int)_Src - (int)pwVar3;
        do {
          wVar1 = *(wchar_t *)(iVar4 + (int)pwVar3);
          *pwVar3 = wVar1;
          pwVar3 = pwVar3 + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        piVar2 = __errno();
        iStack_14 = 0x22;
        goto LAB_00409270;
      }
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  iStack_14 = 0x16;
LAB_00409270:
  *piVar2 = iStack_14;
  FUN_00407d49();
  return iStack_14;
}




void __cdecl FUN_004092bc(_func_void_int *param_1)

{
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041dc88,param_1);
  return;
}




/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2015 Release */

int __cdecl __callnewh(size_t _Size)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)__query_new_handler();
  if (pcVar2 != (code *)0x0) {
    guard_check_icall();
    (*pcVar2)(_Size);
  }
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __query_new_handler
   
   Library: Visual Studio 2015 Release */

uint __query_new_handler(void)

{
  byte bVar1;
  uint uVar2;
  
  ___acrt_lock(0);
  bVar1 = (byte)DAT_0041d004 & 0x1f;
  uVar2 = DAT_0041d004 ^ _DAT_0041dc88;
  FUN_0040935d();
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}




void FUN_0040935d(void)

{
  ___acrt_unlock(0);
  return;
}




void FUN_00409366(size_t param_1)

{
  __malloc_base(param_1);
  return;
}




/* Library Function - Single Match
    __seh_filter_exe
   
   Library: Visual Studio 2015 Release */

void __cdecl __seh_filter_exe(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  __acrt_ptd *p_Var6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  uVar5 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  p_Var6 = ___acrt_getptd_noexit();
  if (p_Var6 != (__acrt_ptd *)0x0) {
    puVar1 = *(uint **)p_Var6;
    for (puVar8 = puVar1; puVar8 != puVar1 + 0x24; puVar8 = puVar8 + 3) {
      if (*puVar8 == param_1) goto LAB_004093b4;
    }
    puVar8 = (uint *)0x0;
LAB_004093b4:
    if ((puVar8 != (uint *)0x0) && (pcVar2 = (code *)puVar8[2], pcVar2 != (code *)0x0)) {
      if (pcVar2 == (code *)0x5) {
        puVar8[2] = 0;
      }
      else if (pcVar2 != (code *)0x1) {
        uVar3 = *(undefined4 *)(p_Var6 + 4);
        *(undefined4 *)(p_Var6 + 4) = param_2;
        if (puVar8[1] == 8) {
          for (puVar7 = puVar1 + 9; puVar7 != puVar1 + 0x24; puVar7 = puVar7 + 3) {
            puVar7[2] = 0;
          }
          uVar4 = *(undefined4 *)(p_Var6 + 8);
          if (*puVar8 < 0xc0000092) {
            if (*puVar8 == 0xc0000091) {
              *(undefined4 *)(p_Var6 + 8) = 0x84;
            }
            else if (*puVar8 == 0xc000008d) {
              *(undefined4 *)(p_Var6 + 8) = 0x82;
            }
            else if (*puVar8 == 0xc000008e) {
              *(undefined4 *)(p_Var6 + 8) = 0x83;
            }
            else if (*puVar8 == 0xc000008f) {
              *(undefined4 *)(p_Var6 + 8) = 0x86;
            }
            else if (*puVar8 == 0xc0000090) {
              *(undefined4 *)(p_Var6 + 8) = 0x81;
            }
          }
          else if (*puVar8 == 0xc0000092) {
            *(undefined4 *)(p_Var6 + 8) = 0x8a;
          }
          else if (*puVar8 == 0xc0000093) {
            *(undefined4 *)(p_Var6 + 8) = 0x85;
          }
          else if (*puVar8 == 0xc00002b4) {
            *(undefined4 *)(p_Var6 + 8) = 0x8e;
          }
          else if (*puVar8 == 0xc00002b5) {
            *(undefined4 *)(p_Var6 + 8) = 0x8d;
          }
          uVar10 = *(undefined4 *)(p_Var6 + 8);
          uVar9 = 8;
          guard_check_icall();
          (*pcVar2)(uVar9,uVar10);
          *(undefined4 *)(p_Var6 + 8) = uVar4;
        }
        else {
          uVar11 = puVar8[1];
          puVar8[2] = 0;
          guard_check_icall();
          (*pcVar2)(uVar11);
        }
        *(undefined4 *)(p_Var6 + 4) = uVar3;
      }
    }
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 FUN_004094e4(void)

{
  return DAT_0041dc8c;
}




void __cdecl FUN_004094ea(undefined4 param_1)

{
  DAT_0041dc8c = param_1;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    int (__cdecl*__cdecl __crt_fast_encode_pointer<int (__cdecl*)(void)>(int
   (__cdecl*const)(void)))(void)
    void (__cdecl** __cdecl __crt_fast_encode_pointer<void (__cdecl**)(void)>(void (__cdecl**
   const)(void)))(void)
   
   Library: Visual Studio 2015 Release */

uint __cdecl __crt_fast_encode_pointer<>(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_0041d004;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_has_user_matherr
   
   Library: Visual Studio 2015 Release */

bool ___acrt_has_user_matherr(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_0041d004 & 0x1f;
  return (DAT_0041d004 ^ _DAT_0041dc90) >> bVar1 != 0 ||
         (DAT_0041d004 ^ _DAT_0041dc90) << 0x20 - bVar1 != 0;
}




void __cdecl FUN_00409531(_func_void_int *param_1)

{
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041dc90,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_invoke_user_matherr
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_invoke_user_matherr(undefined4 param_1)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  bVar2 = (byte)DAT_0041d004 & 0x1f;
  pcVar3 = (code *)((DAT_0041d004 ^ _DAT_0041dc90) >> bVar2 |
                   (DAT_0041d004 ^ _DAT_0041dc90) << 0x20 - bVar2);
  if (pcVar3 != (code *)0x0) {
    guard_check_icall();
    (*pcVar3)(param_1);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___setusermatherr
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___setusermatherr(uint param_1)

{
  _DAT_0041dc90 = __crt_fast_encode_pointer<>(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __cdecl common_configure_argv<wchar_t>(enum _crt_argv_mode)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_configure_argv<wchar_t>(_crt_argv_mode param_1)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  wchar_t **ppwVar4;
  int iVar5;
  uint local_10;
  wchar_t **local_c;
  uint local_8;
  
  if ((param_1 == 2) || (param_1 == 1)) {
    iVar5 = 0;
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_0041dc98,0x104);
    _DAT_0041e278 = &DAT_0041dc98;
    if ((DAT_0041e274 == (wchar_t *)0x0) || (pwVar3 = DAT_0041e274, *DAT_0041e274 == L'\0')) {
      pwVar3 = (wchar_t *)&DAT_0041dc98;
    }
    local_8 = 0;
    local_10 = 0;
    parse_command_line<wchar_t>(pwVar3,(wchar_t **)0x0,(wchar_t *)0x0,&local_8,&local_10);
    ppwVar2 = (wchar_t **)___acrt_allocate_buffer_for_argv(local_8,local_10,2);
    ppwVar4 = ppwVar2;
    if (ppwVar2 == (wchar_t **)0x0) {
      piVar1 = __errno();
      iVar5 = 0xc;
      *piVar1 = 0xc;
    }
    else {
      parse_command_line<wchar_t>(pwVar3,ppwVar2,(wchar_t *)(ppwVar2 + local_8),&local_8,&local_10);
      if (param_1 == 1) {
        _DAT_0041e264 = local_8 - 1;
        ppwVar4 = (wchar_t **)0x0;
        DAT_0041e26c = ppwVar2;
      }
      else {
        local_c = (wchar_t **)0x0;
        iVar5 = FUN_0040cdf8(ppwVar2,&local_c);
        ppwVar2 = local_c;
        if (iVar5 == 0) {
          _DAT_0041e264 = 0;
          pwVar3 = *local_c;
          while (pwVar3 != (wchar_t *)0x0) {
            local_c = local_c + 1;
            _DAT_0041e264 = _DAT_0041e264 + 1;
            pwVar3 = *local_c;
          }
          local_c = (wchar_t **)0x0;
          iVar5 = 0;
          DAT_0041e26c = ppwVar2;
        }
        FID_conflict__free(local_c);
        local_c = (wchar_t **)0x0;
      }
    }
    FID_conflict__free(ppwVar4);
  }
  else {
    piVar1 = __errno();
    iVar5 = 0x16;
    *piVar1 = 0x16;
    FUN_00407d49();
  }
  return iVar5;
}




/* Library Function - Single Match
    void __cdecl parse_command_line<wchar_t>(wchar_t *,wchar_t * *,wchar_t *,unsigned int *,unsigned
   int *)
   
   Library: Visual Studio 2015 Release */

void __cdecl
parse_command_line<wchar_t>
          (wchar_t *param_1,wchar_t **param_2,wchar_t *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  uint uVar4;
  
  bVar1 = false;
  bVar2 = false;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  do {
    wVar3 = L'\"';
    if (*param_1 == L'\"') {
      bVar1 = !bVar1;
      bVar2 = bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (wchar_t *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      wVar3 = *param_1;
      if (wVar3 == L'\0') goto LAB_0040974e;
    }
    param_1 = param_1 + 1;
  } while ((bVar2) || ((wVar3 != L' ' && (wVar3 != L'\t'))));
  if (param_3 != (wchar_t *)0x0) {
    param_3[-1] = L'\0';
  }
LAB_0040974e:
  bVar1 = false;
  while (*param_1 != L'\0') {
    for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
    }
    if (*param_1 == L'\0') break;
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar4 = 0;
      for (; *param_1 == L'\\'; param_1 = param_1 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*param_1 == L'\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (param_1[1] == L'\"')) {
            param_1 = param_1 + 1;
          }
          else {
            bVar1 = !bVar1;
            bVar2 = false;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = L'\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      wVar3 = *param_1;
      if ((wVar3 == L'\0') || ((!bVar1 && ((wVar3 == L' ' || (wVar3 == L'\t')))))) break;
      if (bVar2) {
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = wVar3;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_3 != (wchar_t *)0x0) {
      *param_3 = L'\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}




/* Library Function - Single Match
    ___acrt_allocate_buffer_for_argv
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl ___acrt_allocate_buffer_for_argv(uint param_1,uint param_2,uint param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < param_1 * -4 - 1) {
      pvVar1 = __calloc_base(param_2 * param_3 + param_1 * 4,1);
      FID_conflict__free((void *)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}




void __cdecl FUN_0040989d(_crt_argv_mode param_1)

{
  common_configure_argv<wchar_t>(param_1);
  return;
}




undefined4 FUN_004098a8(void)

{
  wchar_t *_Memory;
  wchar_t **ppwVar1;
  undefined4 uVar2;
  
  if (DAT_0041dea8 != 0) {
    return 0;
  }
  _Memory = (wchar_t *)FUN_0040d65f();
  if (_Memory == (wchar_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    ppwVar1 = create_environment<wchar_t>(_Memory);
    if (ppwVar1 == (wchar_t **)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      DAT_0041deac = ppwVar1;
      __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
                ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041dea8,(_func_void_int *)ppwVar1)
      ;
      uVar2 = 0;
    }
    FID_conflict__free((void *)0x0);
  }
  FID_conflict__free(_Memory);
  return uVar2;
}




/* Library Function - Single Match
    wchar_t * * __cdecl create_environment<wchar_t>(wchar_t * const)
   
   Library: Visual Studio 2015 Release */

wchar_t ** __cdecl create_environment<wchar_t>(wchar_t *param_1)

{
  uint _SizeInWords;
  wchar_t wVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t **local_8;
  
  iVar6 = 0;
  wVar1 = *param_1;
  pwVar3 = param_1;
  while (wVar1 != L'\0') {
    if (wVar1 != L'=') {
      iVar6 = iVar6 + 1;
    }
    pwVar5 = pwVar3;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    pwVar3 = pwVar3 + ((int)pwVar5 - (int)(pwVar3 + 1) >> 1) + 1;
    wVar1 = *pwVar3;
  }
  ppwVar2 = (wchar_t **)__calloc_base(iVar6 + 1,4);
  local_8 = ppwVar2;
  if (ppwVar2 == (wchar_t **)0x0) {
LAB_004099d7:
    ppwVar2 = (wchar_t **)0x0;
  }
  else {
    for (; *param_1 != L'\0'; param_1 = param_1 + _SizeInWords) {
      pwVar3 = param_1;
      do {
        wVar1 = *pwVar3;
        pwVar3 = pwVar3 + 1;
      } while (wVar1 != L'\0');
      _SizeInWords = ((int)pwVar3 - (int)(param_1 + 1) >> 1) + 1;
      if (*param_1 != L'=') {
        pwVar3 = (wchar_t *)__calloc_base(_SizeInWords,2);
        if (pwVar3 == (wchar_t *)0x0) {
          free_environment<wchar_t>(ppwVar2);
          FID_conflict__free((void *)0x0);
          goto LAB_004099d7;
        }
        eVar4 = _wcscpy_s(pwVar3,_SizeInWords,param_1);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_8 = pwVar3;
        local_8 = local_8 + 1;
        FID_conflict__free((void *)0x0);
      }
    }
  }
  FID_conflict__free((void *)0x0);
  return ppwVar2;
}




/* Library Function - Single Match
    void __cdecl free_environment<wchar_t>(wchar_t * * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl free_environment<wchar_t>(wchar_t **param_1)

{
  wchar_t *_Memory;
  wchar_t **ppwVar1;
  
  if (param_1 != (wchar_t **)0x0) {
    _Memory = *param_1;
    ppwVar1 = param_1;
    while (_Memory != (wchar_t *)0x0) {
      FID_conflict__free(_Memory);
      ppwVar1 = ppwVar1 + 1;
      _Memory = *ppwVar1;
    }
    FID_conflict__free(param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_state_management::dual_state_global<char * *>::uninitialize<void
   (__cdecl&)(char * * &)>(void (__cdecl&)(char * * &))
    public: void __thiscall __crt_state_management::dual_state_global<wchar_t *
   *>::uninitialize<void (__cdecl&)(wchar_t * * &)>(void (__cdecl&)(wchar_t * * &))
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall uninitialize<>(void *this,undefined *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  
  uVar2 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pvVar1 = (void *)((int)this + 4);
  for (; this != pvVar1; this = (void *)((int)this + 4)) {
    pvVar3 = this;
    guard_check_icall();
    (*(code *)param_1)(pvVar3);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl uninitialize_environment_internal<>(undefined4 *param_1)

{
  if ((wchar_t **)*param_1 != DAT_0041deb0) {
    free_environment<wchar_t>((wchar_t **)*param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * * &)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * * &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl uninitialize_environment_internal<>(undefined4 *param_1)

{
  if ((wchar_t **)*param_1 != DAT_0041deac) {
    free_environment<wchar_t>((wchar_t **)*param_1);
  }
  return;
}




void FUN_00409a9b(void)

{
  uninitialize<>(&DAT_0041dea4,uninitialize_environment_internal<>);
  uninitialize<>(&DAT_0041dea8,uninitialize_environment_internal<>);
  free_environment<wchar_t>(DAT_0041deb0);
  free_environment<wchar_t>(DAT_0041deac);
  return;
}




/* Library Function - Single Match
    __get_wide_winmain_command_line
   
   Library: Visual Studio 2015 Release */

void __get_wide_winmain_command_line(void)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  
  puVar3 = DAT_0041e274;
  if (DAT_0041e274 == (ushort *)0x0) {
    puVar3 = &DAT_0041deb4;
  }
  bVar2 = false;
  do {
    uVar1 = *puVar3;
    if (uVar1 < 0x21) {
      if (uVar1 == 0) {
        return;
      }
      if (!bVar2) {
        for (; (*puVar3 != 0 && (*puVar3 < 0x21)); puVar3 = puVar3 + 1) {
        }
        return;
      }
    }
    if (uVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}




/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2015 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  uVar3 = ~-(uint)(param_2 < param_1) & (uint)((int)param_2 + (3 - (int)param_1)) >> 2;
  if (uVar3 != 0) {
    do {
      pcVar1 = (code *)*param_1;
      if (pcVar1 != (code *)0x0) {
        guard_check_icall();
        (*pcVar1)();
      }
      param_1 = param_1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2015 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) break;
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    int __cdecl atexit_exception_filter(unsigned long)
   
   Library: Visual Studio 2015 Release */

int __cdecl atexit_exception_filter(ulong param_1)

{
  return (uint)(param_1 == 0xe06d7363);
}




/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl common_exit(int,enum _crt_exit_cleanup_mode,enum _crt_exit_return_mode)
   
   Library: Visual Studio 2015 Release */

void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *local_18;
  
  if ((param_3 == 0) && (bVar3 = is_managed_app(), bVar3)) {
    try_cor_exit_process(param_1);
  }
  ___acrt_lock(2);
  if (DAT_0041dec0 != '\0') goto LAB_00409ca8;
  LOCK();
  DAT_0041deb8 = 1;
  UNLOCK();
  if (param_2 == 0) {
    bVar2 = (byte)DAT_0041d004 & 0x1f;
    bVar1 = 0x20 - bVar2 & 0x1f;
    if (DAT_0041debc != ((0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0041d004)) {
      uVar4 = DAT_0041d004 ^ DAT_0041debc;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      guard_check_icall();
      (*(code *)(uVar4 >> bVar2 | uVar4 << 0x20 - bVar2))(uVar5,uVar6,uVar7);
    }
LAB_00409c6d:
    __execute_onexit_table();
  }
  else if (param_2 == 1) goto LAB_00409c6d;
  if (param_2 == 0) {
    __initterm((undefined4 *)&DAT_0041517c,(undefined4 *)&DAT_0041518c);
  }
  __initterm((undefined4 *)&DAT_00415190,(undefined4 *)&DAT_00415194);
  if (param_3 == 0) {
    DAT_0041dec0 = '\x01';
  }
LAB_00409ca8:
  FUN_00409cdb();
  if (param_3 != 0) {
    FUN_004145e9();
    return;
  }
  exit_or_terminate_process(param_1);
  atexit_exception_filter(*(ulong *)*local_18);
  return;
}




void FUN_00409cdb(void)

{
  ___acrt_unlock(2);
  return;
}




/* Library Function - Single Match
    void __cdecl exit_or_terminate_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl exit_or_terminate_process(uint param_1)

{
  char cVar1;
  HANDLE hProcess;
  undefined4 in_ECX;
  uint uExitCode;
  
  cVar1 = ___acrt_is_packaged_app(in_ECX);
  if ((cVar1 != '\0') && ((*(uint *)((int)ProcessEnvironmentBlock + 0x68) >> 8 & 1) == 0)) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  try_cor_exit_process(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




/* Library Function - Single Match
    bool __cdecl is_managed_app(void)
   
   Library: Visual Studio 2015 Release */

bool __cdecl is_managed_app(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     (((short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])))) {
    return piVar2[0x3a] != 0;
  }
  return false;
}




/* Library Function - Single Match
    void __cdecl try_cor_exit_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl try_cor_exit_process(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_c = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",&local_c);
  if ((BVar1 != 0) && (pFVar2 = GetProcAddress(local_c,"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    guard_check_icall();
    (*pFVar2)(param_1);
  }
  if (local_c != (HMODULE)0x0) {
    FreeLibrary(local_c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00409dd9(undefined4 param_1)

{
  DAT_0041debc = param_1;
  return;
}




/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2017 Release */

void __cdecl __cexit(void)

{
  common_exit(0,0,1);
  return;
}




/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2015 Release */

void __cdecl __exit(int param_1)

{
  common_exit(param_1,2,0);
  return;
}




/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __register_thread_local_exe_atexit_callback
   
   Library: Visual Studio 2015 Release */

void __cdecl __register_thread_local_exe_atexit_callback(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  __acrt_ptd *p_Var3;
  
  bVar2 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
  if (DAT_0041debc == ((0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0041d004)) {
    DAT_0041debc = __crt_fast_encode_pointer<>(param_1);
    return;
  }
  p_Var3 = ___acrt_getptd();
  pcVar1 = *(code **)(p_Var3 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}




/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2017 Release */

void __cdecl _exit(int _Code)

{
  common_exit(_Code,0,0);
  return;
}




/* Library Function - Single Match
    __set_fmode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl __set_fmode(int _Mode)

{
  int *piVar1;
  
  if (((_Mode != 0x4000) && (_Mode != 0x8000)) && (_Mode != 0x10000)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
    return 0x16;
  }
  LOCK();
  DAT_0041e354 = _Mode;
  UNLOCK();
  return 0;
}




/* Library Function - Single Match
    ___acrt_set_locale_changed
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_set_locale_changed(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0041dec4;
  LOCK();
  DAT_0041dec4 = 1;
  UNLOCK();
  return uVar1;
}




void FUN_00409efb(void)

{
  ___acrt_unlock(4);
  return;
}




/* Library Function - Single Match
    __configthreadlocale
   
   Library: Visual Studio 2015 Release */

int __cdecl __configthreadlocale(int _Flag)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  int *piVar3;
  uint uVar4;
  
  p_Var2 = ___acrt_getptd();
  uVar1 = *(uint *)(p_Var2 + 0x350);
  if (_Flag == -1) {
    DAT_0041d748 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        FUN_00407d49();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(p_Var2 + 0x350) = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}




undefined4 FUN_00409f66(void)

{
  return DAT_0041dec8;
}




/* Library Function - Single Match
    __set_new_mode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl __set_new_mode(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = DAT_0041dec8;
  if ((param_1 != 0) && (param_1 != 1)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00407d49();
    return 0xffffffff;
  }
  LOCK();
  DAT_0041dec8 = param_1;
  UNLOCK();
  return uVar1;
}




undefined * FUN_00409f9b(void)

{
  return &DAT_0041decc;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_800076c951b434888f4765a74a194fcc>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &,class
   <lambda_6dbb1268764f43b569ce7b67e331d33a> >(class <lambda_800076c951b434888f4765a74a194fcc>
   &&,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &,class
   <lambda_6dbb1268764f43b569ce7b67e331d33a> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_800076c951b434888f4765a74a194fcc>,class_<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,class_<lambda_6dbb1268764f43b569ce7b67e331d33a>_>
          (__crt_seh_guarded_call<int> *this,<lambda_800076c951b434888f4765a74a194fcc> *param_1,
          <lambda_4e60a939b0d047cfe11ddc22648dfba9> *param_2,
          <lambda_6dbb1268764f43b569ce7b67e331d33a> *param_3)

{
  int iVar1;
  
  ___acrt_lock(*(int *)param_1);
  iVar1 = <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(param_2);
  FUN_00409feb();
  return iVar1;
}




void FUN_00409feb(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_995298e7d72eb4c2aab26c0585b3abe5>,class <lambda_275893d493268fdec8709772e3fcec0e> &,class
   <lambda_293819299cbf9a7022e18b56a874bb5c> >(class <lambda_995298e7d72eb4c2aab26c0585b3abe5>
   &&,class <lambda_275893d493268fdec8709772e3fcec0e> &,class
   <lambda_293819299cbf9a7022e18b56a874bb5c> &&)
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_995298e7d72eb4c2aab26c0585b3abe5>,class_<lambda_275893d493268fdec8709772e3fcec0e>&,class_<lambda_293819299cbf9a7022e18b56a874bb5c>_>
          (__crt_seh_guarded_call<int> *this,<lambda_995298e7d72eb4c2aab26c0585b3abe5> *param_1,
          <lambda_275893d493268fdec8709772e3fcec0e> *param_2,
          <lambda_293819299cbf9a7022e18b56a874bb5c> *param_3)

{
  int iVar1;
  
  ___acrt_lock(*(int *)param_1);
  iVar1 = <lambda_275893d493268fdec8709772e3fcec0e>::operator()(param_2);
  FUN_0040a03c();
  return iVar1;
}




void FUN_0040a03c(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* Library Function - Single Match
    int __cdecl __acrt_lock_and_call<class <lambda_275893d493268fdec8709772e3fcec0e> >(enum
   __acrt_lock_id,class <lambda_275893d493268fdec8709772e3fcec0e> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lock_and_call<class_<lambda_275893d493268fdec8709772e3fcec0e>_>
          (__acrt_lock_id param_1,<lambda_275893d493268fdec8709772e3fcec0e> *param_2)

{
  int iVar1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<class_<lambda_995298e7d72eb4c2aab26c0585b3abe5>,class_<lambda_275893d493268fdec8709772e3fcec0e>&,class_<lambda_293819299cbf9a7022e18b56a874bb5c>_>
                    (&local_5,(<lambda_995298e7d72eb4c2aab26c0585b3abe5> *)&local_10,param_2,
                     (<lambda_293819299cbf9a7022e18b56a874bb5c> *)&local_c);
  return iVar1;
}




/* Library Function - Single Match
    int __cdecl __acrt_lock_and_call<class <lambda_4e60a939b0d047cfe11ddc22648dfba9> >(enum
   __acrt_lock_id,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lock_and_call<class_<lambda_4e60a939b0d047cfe11ddc22648dfba9>_>
          (__acrt_lock_id param_1,<lambda_4e60a939b0d047cfe11ddc22648dfba9> *param_2)

{
  int iVar1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<class_<lambda_800076c951b434888f4765a74a194fcc>,class_<lambda_4e60a939b0d047cfe11ddc22648dfba9>&,class_<lambda_6dbb1268764f43b569ce7b67e331d33a>_>
                    (&local_5,(<lambda_800076c951b434888f4765a74a194fcc> *)&local_10,param_2,
                     (<lambda_6dbb1268764f43b569ce7b67e331d33a> *)&local_c);
  return iVar1;
}




/* Library Function - Single Match
    public: int __thiscall <lambda_275893d493268fdec8709772e3fcec0e>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_275893d493268fdec8709772e3fcec0e>::operator()
          (<lambda_275893d493268fdec8709772e3fcec0e> *this)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  sbyte sVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *_Memory;
  uint local_18;
  
  uVar3 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  puVar8 = (uint *)**(int **)this;
  if (puVar8 != (uint *)0x0) {
    local_18 = DAT_0041d004 & 0x1f;
    sVar7 = (sbyte)local_18;
    _Memory = (uint *)((*puVar8 ^ DAT_0041d004) >> sVar7 | (*puVar8 ^ DAT_0041d004) << 0x20 - sVar7)
    ;
    puVar8 = (uint *)((puVar8[1] ^ DAT_0041d004) >> sVar7 |
                     (puVar8[1] ^ DAT_0041d004) << 0x20 - sVar7);
    if ((_Memory != (uint *)0x0) && (puVar9 = puVar8, _Memory != (uint *)0xffffffff)) {
      do {
        sVar7 = (sbyte)local_18;
        bVar2 = 0x20U - sVar7 & 0x1f;
        uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0041d004;
        do {
          puVar8 = puVar8 + -1;
          if (puVar8 < _Memory) {
            if (_Memory != (uint *)0xffffffff) {
              FID_conflict__free(_Memory);
            }
            bVar2 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
            uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_0041d004;
            *(uint *)**(undefined4 **)this = uVar4;
            *(uint *)(**(int **)this + 4) = uVar4;
            *(uint *)(**(int **)this + 8) = uVar4;
            goto LAB_0040a1a9;
          }
        } while (*puVar8 == uVar4);
        uVar10 = *puVar8 ^ DAT_0041d004;
        *puVar8 = uVar4;
        guard_check_icall();
        (*(code *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7))();
        local_18 = DAT_0041d004 & 0x1f;
        uVar10 = *(uint *)**(int **)this ^ DAT_0041d004;
        uVar4 = ((uint *)**(int **)this)[1] ^ DAT_0041d004;
        sVar7 = (sbyte)local_18;
        puVar1 = (uint *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7);
        puVar5 = (uint *)(uVar4 >> sVar7 | uVar4 << 0x20 - sVar7);
        if ((puVar1 != _Memory) || (puVar5 != puVar9)) {
          puVar8 = puVar5;
          _Memory = puVar1;
          puVar9 = puVar5;
        }
      } while( true );
    }
  }
LAB_0040a1a9:
  iVar6 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return iVar6;
}




/* Library Function - Single Match
    public: int __thiscall <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()
          (<lambda_4e60a939b0d047cfe11ddc22648dfba9> *this)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar5 = (uint *)**(int **)this;
  if (puVar5 == (uint *)0x0) {
    return -1;
  }
  bVar4 = (byte)DAT_0041d004 & 0x1f;
  puVar9 = (uint *)((puVar5[1] ^ DAT_0041d004) >> bVar4 | (puVar5[1] ^ DAT_0041d004) << 0x20 - bVar4
                   );
  puVar7 = (uint *)((puVar5[2] ^ DAT_0041d004) >> bVar4 | (puVar5[2] ^ DAT_0041d004) << 0x20 - bVar4
                   );
  pvVar6 = (void *)((*puVar5 ^ DAT_0041d004) >> bVar4 | (*puVar5 ^ DAT_0041d004) << 0x20 - bVar4);
  pvVar1 = pvVar6;
  if (puVar9 != puVar7) goto LAB_0040a2b2;
  uVar8 = (int)puVar7 - (int)pvVar6 >> 2;
  uVar2 = 0x200;
  if (uVar8 < 0x201) {
    uVar2 = uVar8;
  }
  uVar2 = uVar2 + uVar8;
  if (uVar2 == 0) {
    uVar2 = 0x20;
  }
  if (uVar2 < uVar8) {
LAB_0040a239:
    uVar2 = uVar8 + 4;
    pvVar1 = (void *)FUN_0040e592(pvVar6,uVar2,4);
    FID_conflict__free((void *)0x0);
    if (pvVar1 == (void *)0x0) {
      return -1;
    }
  }
  else {
    pvVar1 = (void *)FUN_0040e592(pvVar6,uVar2,4);
    FID_conflict__free((void *)0x0);
    if (pvVar1 == (void *)0x0) goto LAB_0040a239;
  }
  puVar9 = (uint *)((int)pvVar1 + uVar8 * 4);
  puVar7 = (uint *)((int)pvVar1 + uVar2 * 4);
  bVar4 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
  uVar2 = (0U >> bVar4 | 0 << 0x20 - bVar4) ^ DAT_0041d004;
  uVar8 = ~-(uint)(puVar7 < puVar9) & (uint)((int)puVar7 + (3 - (int)puVar9)) >> 2;
  if (uVar8 != 0) {
    uVar3 = 0;
    puVar5 = puVar9;
    do {
      uVar3 = uVar3 + 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    } while (uVar3 != uVar8);
  }
LAB_0040a2b2:
  uVar2 = __crt_fast_encode_pointer<>(**(uint **)(this + 4));
  *puVar9 = uVar2;
  uVar2 = __crt_fast_encode_pointer<>((uint)pvVar1);
  *(uint *)**(undefined4 **)this = uVar2;
  uVar2 = __crt_fast_encode_pointer<>((uint)(puVar9 + 1));
  *(uint *)(**(int **)this + 4) = uVar2;
  uVar2 = __crt_fast_encode_pointer<>((uint)puVar7);
  *(uint *)(**(int **)this + 8) = uVar2;
  return 0;
}




/* Library Function - Single Match
    __crt_atexit
   
   Library: Visual Studio 2015 Release */

void __crt_atexit(void)

{
  __register_onexit_function();
  return;
}




/* Library Function - Single Match
    __execute_onexit_table
   
   Library: Visual Studio 2015 Release */

void __execute_onexit_table(void)

{
  undefined1 *local_8;
  
  local_8 = &stack0x00000004;
  __acrt_lock_and_call<class_<lambda_275893d493268fdec8709772e3fcec0e>_>
            (2,(<lambda_275893d493268fdec8709772e3fcec0e> *)&local_8);
  return;
}




/* Library Function - Single Match
    __initialize_onexit_table
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl __initialize_onexit_table(uint *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*param_1 == param_1[2]) {
      bVar1 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
      uVar3 = (0U >> bVar1 | 0 << 0x20 - bVar1) ^ DAT_0041d004;
      *param_1 = uVar3;
      param_1[1] = uVar3;
      param_1[2] = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}




/* Library Function - Single Match
    __register_onexit_function
   
   Library: Visual Studio 2015 Release */

void __register_onexit_function(void)

{
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_c = &stack0x00000004;
  local_8 = &stack0x00000008;
  __acrt_lock_and_call<class_<lambda_4e60a939b0d047cfe11ddc22648dfba9>_>
            (2,(<lambda_4e60a939b0d047cfe11ddc22648dfba9> *)&local_c);
  return;
}




/* Library Function - Single Match
    ___acrt_initialize
   
   Library: Visual Studio 2015 Release */

void ___acrt_initialize(void)

{
  ___acrt_execute_initializers(&PTR_LAB_00416538,&DAT_004165b0);
  return;
}




/* Library Function - Single Match
    ___acrt_uninitialize
   
   Library: Visual Studio 2015 Release */

void ___acrt_uninitialize(void)

{
  ___acrt_execute_uninitializers(&PTR_LAB_00416538,&DAT_004165b0);
  return;
}




/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  int *piVar1;
  errno_t eVar2;
  uint uVar3;
  
  uVar3 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar3 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar3);
    }
    else {
      uVar3 = __control87(_NewValue,uVar3);
      *_CurrentState = uVar3;
    }
    eVar2 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar3 = __control87(0,0);
      *_CurrentState = uVar3;
    }
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_00407d49();
  }
  return eVar2;
}




/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _terminate
   
   Library: Visual Studio 2017 Release */

void __cdecl terminate(void)

{
  code *pcVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = ___acrt_getptd();
  pcVar1 = *(code **)(p_Var2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}




/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar3 = _Dst;
      do {
        cVar1 = pcVar3[(int)_Src - (int)_Dst];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      iVar4 = 0x22;
      goto LAB_0040a562;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  iVar4 = 0x16;
LAB_0040a562:
  *piVar2 = iVar4;
  FUN_00407d49();
  return iVar4;
}




/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2015 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar2 = ___acrt_get_sigabrt_handler();
  if (iVar2 != 0) {
    _raise(0x16);
  }
  if ((DAT_0041d040 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    ___acrt_call_reportfault(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_0040a5da(uint param_1,uint param_2)

{
  __calloc_base(param_1,param_2);
  return;
}




/* Library Function - Single Match
    _wcsncmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount != 0) {
    for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
        _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return _MaxCount;
}




/* Library Function - Single Match
    bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(unsigned int,unsigned long)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __crt_strtox::is_overflow_condition<unsigned_long>(uint param_1,ulong param_2)

{
  if (((param_1 & 4) == 0) &&
     (((param_1 & 1) == 0 ||
      ((((param_1 & 2) == 0 || (param_2 < 0x80000001)) &&
       (((param_1 & 2) != 0 || (param_2 < 0x80000000)))))))) {
    return false;
  }
  return true;
}




/* Library Function - Single Match
    unsigned long __cdecl __crt_strtox::parse_integer<unsigned long,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2015 Release */

ulong __cdecl
__crt_strtox::parse_integer<unsigned_long,class___crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,
          char param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t wVar9;
  int local_20 [3];
  char local_14;
  wchar_t *local_10;
  uint local_c;
  undefined4 local_8;
  
  bVar1 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  if (bVar1) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
      local_c = 0;
      local_10 = param_2;
      do {
        wVar9 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = _iswctype(wVar9,8);
      } while (iVar3 != 0);
      uVar7 = (uint)(param_5 != '\0');
      if (wVar9 == L'-') {
        uVar7 = uVar7 | 2;
LAB_0040a6eb:
        wVar9 = *param_2;
        param_2 = param_2 + 1;
      }
      else if (wVar9 == L'+') goto LAB_0040a6eb;
      uVar6 = (uint)(ushort)wVar9;
      local_8 = 0x19;
      if ((param_4 != 0) && (param_4 != 0x10)) goto LAB_0040a9f3;
      if ((ushort)wVar9 < 0x30) goto LAB_0040a976;
      if ((ushort)wVar9 < 0x3a) {
        iVar3 = uVar6 - 0x30;
LAB_0040a971:
        if (iVar3 == -1) goto LAB_0040a976;
      }
      else {
        if (0xff0f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0xff1a) {
            iVar3 = uVar6 - 0xff10;
          }
          else {
            iVar3 = -1;
          }
          goto LAB_0040a971;
        }
        if (0x65f < (ushort)wVar9) {
          if ((ushort)wVar9 < 0x66a) {
            iVar3 = uVar6 - 0x660;
          }
          else {
            if ((ushort)wVar9 < 0x6f0) goto LAB_0040a976;
            if ((ushort)wVar9 < 0x6fa) {
              iVar3 = uVar6 - 0x6f0;
            }
            else {
              if ((ushort)wVar9 < 0x966) goto LAB_0040a976;
              if ((ushort)wVar9 < 0x970) {
                iVar3 = uVar6 - 0x966;
              }
              else {
                if ((ushort)wVar9 < 0x9e6) goto LAB_0040a976;
                if ((ushort)wVar9 < 0x9f0) {
                  iVar3 = uVar6 - 0x9e6;
                }
                else {
                  if ((ushort)wVar9 < 0xa66) goto LAB_0040a976;
                  if ((ushort)wVar9 < 0xa70) {
                    iVar3 = uVar6 - 0xa66;
                  }
                  else {
                    if ((ushort)wVar9 < 0xae6) goto LAB_0040a976;
                    if ((ushort)wVar9 < 0xaf0) {
                      iVar3 = uVar6 - 0xae6;
                    }
                    else {
                      if ((ushort)wVar9 < 0xb66) goto LAB_0040a976;
                      if ((ushort)wVar9 < 0xb70) {
                        iVar3 = uVar6 - 0xb66;
                      }
                      else {
                        if ((ushort)wVar9 < 0xc66) goto LAB_0040a976;
                        if ((ushort)wVar9 < 0xc70) {
                          iVar3 = uVar6 - 0xc66;
                        }
                        else {
                          if ((ushort)wVar9 < 0xce6) goto LAB_0040a976;
                          if ((ushort)wVar9 < 0xcf0) {
                            iVar3 = uVar6 - 0xce6;
                          }
                          else {
                            if ((ushort)wVar9 < 0xd66) goto LAB_0040a976;
                            if ((ushort)wVar9 < 0xd70) {
                              iVar3 = uVar6 - 0xd66;
                            }
                            else {
                              if ((ushort)wVar9 < 0xe50) goto LAB_0040a976;
                              if ((ushort)wVar9 < 0xe5a) {
                                iVar3 = uVar6 - 0xe50;
                              }
                              else {
                                if ((ushort)wVar9 < 0xed0) goto LAB_0040a976;
                                if ((ushort)wVar9 < 0xeda) {
                                  iVar3 = uVar6 - 0xed0;
                                }
                                else {
                                  if ((ushort)wVar9 < 0xf20) goto LAB_0040a976;
                                  if ((ushort)wVar9 < 0xf2a) {
                                    iVar3 = uVar6 - 0xf20;
                                  }
                                  else {
                                    if ((ushort)wVar9 < 0x1040) goto LAB_0040a976;
                                    if ((ushort)wVar9 < 0x104a) {
                                      iVar3 = uVar6 - 0x1040;
                                    }
                                    else {
                                      if ((ushort)wVar9 < 0x17e0) goto LAB_0040a976;
                                      if ((ushort)wVar9 < 0x17ea) {
                                        iVar3 = uVar6 - 0x17e0;
                                      }
                                      else {
                                        if (((ushort)wVar9 < 0x1810) || (0x1819 < (ushort)wVar9))
                                        goto LAB_0040a976;
                                        iVar3 = uVar6 - 0x1810;
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
              }
            }
          }
          goto LAB_0040a971;
        }
LAB_0040a976:
        if ((((ushort)wVar9 < 0x41) || (0x5a < (ushort)wVar9)) && (0x19 < (ushort)(wVar9 + L'ﾟ')))
        {
          iVar3 = -1;
        }
        else {
          uVar4 = uVar6;
          if ((ushort)(wVar9 + L'ﾟ') < 0x1a) {
            uVar4 = uVar6 - 0x20;
          }
          iVar3 = uVar4 - 0x37;
        }
      }
      if (iVar3 == 0) {
        wVar9 = *param_2;
        if ((wVar9 == L'x') || (wVar9 == L'X')) {
          if (param_4 == 0) {
            param_4 = 0x10;
          }
          uVar6 = (uint)(ushort)param_2[1];
          param_2 = param_2 + 2;
        }
        else {
          if (param_4 == 0) {
            param_4 = 8;
          }
          param_2 = param_2 + 1;
          c_string_character_source<wchar_t>::unget
                    ((c_string_character_source<wchar_t> *)&param_2,wVar9);
        }
      }
      else if (param_4 == 0) {
        param_4 = 10;
      }
LAB_0040a9f3:
      uVar4 = (uint)(0xffffffff / (ulonglong)param_4);
      do {
        wVar9 = (wchar_t)uVar6;
        if ((ushort)wVar9 < 0x30) goto LAB_0040ac5e;
        if ((ushort)wVar9 < 0x3a) {
          uVar5 = uVar6 - 0x30;
LAB_0040ac59:
          if (uVar5 == 0xffffffff) goto LAB_0040ac5e;
        }
        else {
          if (0xff0f < (ushort)wVar9) {
            if ((ushort)wVar9 < 0xff1a) {
              uVar5 = uVar6 - 0xff10;
            }
            else {
              uVar5 = 0xffffffff;
            }
            goto LAB_0040ac59;
          }
          if (0x65f < (ushort)wVar9) {
            if ((ushort)wVar9 < 0x66a) {
              uVar5 = uVar6 - 0x660;
            }
            else {
              if ((ushort)wVar9 < 0x6f0) goto LAB_0040ac5e;
              if ((ushort)wVar9 < 0x6fa) {
                uVar5 = uVar6 - 0x6f0;
              }
              else {
                if ((ushort)wVar9 < 0x966) goto LAB_0040ac5e;
                if ((ushort)wVar9 < 0x970) {
                  uVar5 = uVar6 - 0x966;
                }
                else {
                  if ((ushort)wVar9 < 0x9e6) goto LAB_0040ac5e;
                  if ((ushort)wVar9 < 0x9f0) {
                    uVar5 = uVar6 - 0x9e6;
                  }
                  else {
                    if ((ushort)wVar9 < 0xa66) goto LAB_0040ac5e;
                    if ((ushort)wVar9 < 0xa70) {
                      uVar5 = uVar6 - 0xa66;
                    }
                    else {
                      if ((ushort)wVar9 < 0xae6) goto LAB_0040ac5e;
                      if ((ushort)wVar9 < 0xaf0) {
                        uVar5 = uVar6 - 0xae6;
                      }
                      else {
                        if ((ushort)wVar9 < 0xb66) goto LAB_0040ac5e;
                        if ((ushort)wVar9 < 0xb70) {
                          uVar5 = uVar6 - 0xb66;
                        }
                        else {
                          if ((ushort)wVar9 < 0xc66) goto LAB_0040ac5e;
                          if ((ushort)wVar9 < 0xc70) {
                            uVar5 = uVar6 - 0xc66;
                          }
                          else {
                            if ((ushort)wVar9 < 0xce6) goto LAB_0040ac5e;
                            if ((ushort)wVar9 < 0xcf0) {
                              uVar5 = uVar6 - 0xce6;
                            }
                            else {
                              if ((ushort)wVar9 < 0xd66) goto LAB_0040ac5e;
                              if ((ushort)wVar9 < 0xd70) {
                                uVar5 = uVar6 - 0xd66;
                              }
                              else {
                                if ((ushort)wVar9 < 0xe50) goto LAB_0040ac5e;
                                if ((ushort)wVar9 < 0xe5a) {
                                  uVar5 = uVar6 - 0xe50;
                                }
                                else {
                                  if ((ushort)wVar9 < 0xed0) goto LAB_0040ac5e;
                                  if ((ushort)wVar9 < 0xeda) {
                                    uVar5 = uVar6 - 0xed0;
                                  }
                                  else {
                                    if ((ushort)wVar9 < 0xf20) goto LAB_0040ac5e;
                                    if ((ushort)wVar9 < 0xf2a) {
                                      uVar5 = uVar6 - 0xf20;
                                    }
                                    else {
                                      if ((ushort)wVar9 < 0x1040) goto LAB_0040ac5e;
                                      if ((ushort)wVar9 < 0x104a) {
                                        uVar5 = uVar6 - 0x1040;
                                      }
                                      else {
                                        if ((ushort)wVar9 < 0x17e0) goto LAB_0040ac5e;
                                        if ((ushort)wVar9 < 0x17ea) {
                                          uVar5 = uVar6 - 0x17e0;
                                        }
                                        else {
                                          if (((ushort)wVar9 < 0x1810) || (0x1819 < (ushort)wVar9))
                                          goto LAB_0040ac5e;
                                          uVar5 = uVar6 - 0x1810;
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
                }
              }
            }
            goto LAB_0040ac59;
          }
LAB_0040ac5e:
          if ((((ushort)wVar9 < 0x41) || (0x5a < (ushort)wVar9)) &&
             ((ushort)local_8 < (ushort)(wVar9 + L'ﾟ'))) {
            uVar5 = 0xffffffff;
          }
          else {
            if ((ushort)(wVar9 + L'ﾟ') <= (ushort)local_8) {
              uVar6 = uVar6 - 0x20;
            }
            uVar5 = uVar6 - 0x37;
          }
        }
        if ((uVar5 == 0xffffffff) || (param_4 <= uVar5)) goto LAB_0040acc4;
        uVar8 = uVar7 | 8;
        if ((local_c < uVar4) ||
           ((local_c == uVar4 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_4))))) {
          local_c = local_c * param_4 + uVar5;
        }
        else {
          uVar8 = uVar7 | 0xc;
        }
        uVar6 = (uint)(ushort)*param_2;
        param_2 = param_2 + 1;
        uVar7 = uVar8;
      } while( true );
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00407d49();
  }
  uVar6 = 0;
LAB_0040a68d:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return uVar6;
LAB_0040acc4:
  c_string_character_source<wchar_t>::unget((c_string_character_source<wchar_t> *)&param_2,wVar9);
  uVar6 = local_c;
  if ((uVar7 & 8) == 0) {
    uVar6 = 0;
    param_2 = local_10;
  }
  else {
    bVar1 = is_overflow_condition<unsigned_long>(uVar7,local_c);
    if (bVar1) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0xffffffff;
      }
      else if ((uVar7 & 2) == 0) {
        uVar6 = 0x7fffffff;
      }
      else {
        uVar6 = 0x80000000;
      }
    }
    else if ((uVar7 & 2) != 0) {
      uVar6 = -uVar6;
    }
  }
  if (local_14 != '\0') {
    *(uint *)(local_20[0] + 0x350) = *(uint *)(local_20[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_0040a68d;
}




/* Library Function - Single Match
    public: void __thiscall __crt_strtox::c_string_character_source<wchar_t>::unget(wchar_t)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_strtox::c_string_character_source<wchar_t>::unget
          (c_string_character_source<wchar_t> *this,wchar_t param_1)

{
  int *piVar1;
  
  *(int *)this = *(int *)this + -2;
  if ((param_1 != L'\0') && (**(wchar_t **)this != param_1)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
  }
  return;
}




/* Library Function - Single Match
    __chvalidchk_l
   
   Library: Visual Studio 2015 Release */

ushort __cdecl __chvalidchk_l(int param_1,ushort param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    puVar2 = ___pctype_func();
    uVar1 = puVar2[param_1];
  }
  else {
    uVar1 = *(ushort *)(*(int *)*param_3 + param_1 * 2);
  }
  return uVar1 & param_2;
}




/* Library Function - Single Match
    __ischartype_l
   
   Library: Visual Studio 2015 Release */

void __cdecl __ischartype_l(int param_1,int param_2,_locale_t param_3)

{
  if ((param_3 == (_locale_t)0x0) || ((int)param_3->locinfo->lc_codepage < 2)) {
    __chvalidchk_l(param_1,(ushort)param_2,&param_3->locinfo);
  }
  else {
    __isctype_l(param_1,param_2,param_3);
  }
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_3518db117f0e7cdb002338c5d3c47b6c>,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &,class
   <lambda_abdedf541bb04549bc734292b4a045d4> >(class <lambda_3518db117f0e7cdb002338c5d3c47b6c>
   &&,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &,class
   <lambda_abdedf541bb04549bc734292b4a045d4> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_a7e850c220f1c8d1e6efeecdedd162c6>,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> >(class <lambda_a7e850c220f1c8d1e6efeecdedd162c6>
   &&,class <lambda_46720907175c18b6c9d2717bc0d2d362> &,class
   <lambda_9048902d66e8d99359bc9897bbb930a8> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_2,(__crt_locale_data *)**(undefined4 **)param_2[1]);
  FUN_0040ae7c();
  return;
}




void FUN_0040ae7c(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_38edbb1296d33220d7e4dd0ed76b244a>,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> >(class <lambda_38edbb1296d33220d7e4dd0ed76b244a>
   &&,class <lambda_5ce1d447e08cb34b2473517608e21441> &,class
   <lambda_fb385d3da700c9147fc39e65dd577a8c> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_51b6e8b1eb166f2a3faf91f424b38130>,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &,class
   <lambda_0b5a4a3e68152e1d9b943535f5f47bed> >(class <lambda_51b6e8b1eb166f2a3faf91f424b38130>
   &&,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &,class
   <lambda_0b5a4a3e68152e1d9b943535f5f47bed> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *_Memory;
  
  ___acrt_lock(*param_1);
  _Memory = *(int **)(*(int *)*param_2 + 0x48);
  if (_Memory != (int *)0x0) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (_Memory != &DAT_0041d4c8)) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_0040aedd();
  return;
}




void FUN_0040aedd(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_5b71d36f03204c0beab531769a5b5694>,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &,class
   <lambda_8f9ce462984622f9bf76b59e2aaaf805> >(class <lambda_5b71d36f03204c0beab531769a5b5694>
   &&,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &,class
   <lambda_8f9ce462984622f9bf76b59e2aaaf805> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_6affb1475c98b40b75cdec977db92e3c>,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> >(class <lambda_6affb1475c98b40b75cdec977db92e3c>
   &&,class <lambda_b8d4b9c228a6ecc3f80208dbb4b4a104> &,class
   <lambda_608742c3c92a14382c1684fc64f96c88> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_2,(__crt_locale_data *)0x0);
  FUN_0040af28();
  return;
}




void FUN_0040af28(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_15ade71b0218206bbe3333a0c9b79046>,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> >(class <lambda_15ade71b0218206bbe3333a0c9b79046>
   &&,class <lambda_da44e0f8b0f19ba52fefafb335991732> &,class
   <lambda_207f2d024fc103971653565357d6cd41> &&)
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_9df27f884b057bc3edfc946cb5b7cf47>,class <lambda_e69574bed617af4e071282c136b37893> &,class
   <lambda_cc0d902bcbbeb830f749456577db4721> >(class <lambda_9df27f884b057bc3edfc946cb5b7cf47>
   &&,class <lambda_e69574bed617af4e071282c136b37893> &,class
   <lambda_cc0d902bcbbeb830f749456577db4721> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void operator()<>(int *param_1,undefined4 *param_2)

{
  ___acrt_lock(*param_1);
  LOCK();
  **(int **)(*(int *)*param_2 + 0x48) = **(int **)(*(int *)*param_2 + 0x48) + 1;
  UNLOCK();
  FUN_0040af70();
  return;
}




void FUN_0040af70(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> >(enum
   __acrt_lock_id,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<class_<lambda_6250bd4b2a391816dd638c3bf72b0bcb>_>
          (__acrt_lock_id param_1,<lambda_6250bd4b2a391816dd638c3bf72b0bcb> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}




/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> >(enum
   __acrt_lock_id,class <lambda_b2ea41f6bbb362cd97d94c6828d90b61> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<class_<lambda_b2ea41f6bbb362cd97d94c6828d90b61>_>
          (__acrt_lock_id param_1,<lambda_b2ea41f6bbb362cd97d94c6828d90b61> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}




/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_be2b3da3f62db62e9dad5dc70221a656> >(enum
   __acrt_lock_id,class <lambda_be2b3da3f62db62e9dad5dc70221a656> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<class_<lambda_be2b3da3f62db62e9dad5dc70221a656>_>
          (__acrt_lock_id param_1,<lambda_be2b3da3f62db62e9dad5dc70221a656> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}




/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_e69574bed617af4e071282c136b37893> >(enum
   __acrt_lock_id,class <lambda_e69574bed617af4e071282c136b37893> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<class_<lambda_e69574bed617af4e071282c136b37893>_>
          (__acrt_lock_id param_1,<lambda_e69574bed617af4e071282c136b37893> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  operator()<>((int *)&local_10,(undefined4 *)param_2);
  return;
}




/* Library Function - Single Match
    void __cdecl construct_ptd(struct __acrt_ptd * const,struct __crt_locale_data * * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl construct_ptd(__acrt_ptd *param_1,__crt_locale_data **param_2)

{
  __acrt_ptd **local_c;
  __acrt_ptd **local_8;
  
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined **)param_1 = &DAT_00416470;
  *(undefined4 *)(param_1 + 0x350) = 1;
  *(undefined4 **)(param_1 + 0x48) = &DAT_0041d4c8;
  *(undefined2 *)(param_1 + 0x6c) = 0x43;
  *(undefined2 *)(param_1 + 0x172) = 0x43;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  local_8 = &param_1;
  __acrt_lock_and_call<class_<lambda_e69574bed617af4e071282c136b37893>_>
            (5,(<lambda_e69574bed617af4e071282c136b37893> *)&local_8);
  local_c = &param_1;
  local_8 = (__acrt_ptd **)&param_2;
  __acrt_lock_and_call<class_<lambda_b2ea41f6bbb362cd97d94c6828d90b61>_>
            (4,(<lambda_b2ea41f6bbb362cd97d94c6828d90b61> *)&local_c);
  return;
}




/* Library Function - Single Match
    void __stdcall destroy_fls(void *)
   
   Library: Visual Studio 2015 Release */

void destroy_fls(void *param_1)

{
  if (param_1 != (void *)0x0) {
    destroy_ptd((__acrt_ptd *)param_1);
    FID_conflict__free(param_1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl destroy_ptd(struct __acrt_ptd * const)
   
   Library: Visual Studio 2015 Release */

void __cdecl destroy_ptd(__acrt_ptd *param_1)

{
  __acrt_ptd **local_8;
  
  if (*(undefined **)param_1 != &DAT_00416470) {
    FID_conflict__free(*(undefined **)param_1);
  }
  FID_conflict__free(*(void **)(param_1 + 0x3c));
  FID_conflict__free(*(void **)(param_1 + 0x30));
  FID_conflict__free(*(void **)(param_1 + 0x34));
  FID_conflict__free(*(void **)(param_1 + 0x38));
  FID_conflict__free(*(void **)(param_1 + 0x28));
  FID_conflict__free(*(void **)(param_1 + 0x2c));
  FID_conflict__free(*(void **)(param_1 + 0x40));
  FID_conflict__free(*(void **)(param_1 + 0x44));
  FID_conflict__free(*(void **)(param_1 + 0x360));
  local_8 = &param_1;
  __acrt_lock_and_call<class_<lambda_6250bd4b2a391816dd638c3bf72b0bcb>_>
            (5,(<lambda_6250bd4b2a391816dd638c3bf72b0bcb> *)&local_8);
  local_8 = &param_1;
  __acrt_lock_and_call<class_<lambda_be2b3da3f62db62e9dad5dc70221a656>_>
            (4,(<lambda_be2b3da3f62db62e9dad5dc70221a656> *)&local_8);
  return;
}




/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * const,struct
   __crt_locale_data * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    ___acrt_release_locale_ref(*(int *)(param_1 + 0x4c));
    ppuVar1 = *(undefined ***)(param_1 + 0x4c);
    if (((ppuVar1 != DAT_0041defc) && (ppuVar1 != &PTR_DAT_0041d108)) &&
       (ppuVar1[3] == (undefined *)0x0)) {
      ___acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x4c) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    ___acrt_add_locale_ref((int)param_2);
  }
  return;
}




/* Library Function - Single Match
    ___acrt_getptd
   
   Library: Visual Studio 2015 Release */

__acrt_ptd * ___acrt_getptd(void)

{
  DWORD dwErrCode;
  __acrt_ptd *_Memory;
  int iVar1;
  
  dwErrCode = GetLastError();
  if ((DAT_0041d050 != 0xffffffff) &&
     (_Memory = (__acrt_ptd *)___acrt_FlsGetValue_4(DAT_0041d050), _Memory != (__acrt_ptd *)0x0)) {
LAB_0040b215:
    SetLastError(dwErrCode);
    return _Memory;
  }
  _Memory = (__acrt_ptd *)__calloc_base(1,0x364);
  if ((_Memory == (__acrt_ptd *)0x0) ||
     (iVar1 = ___acrt_FlsSetValue_8(DAT_0041d050,_Memory), iVar1 == 0)) {
    FID_conflict__free(_Memory);
  }
  else {
    construct_ptd(_Memory,(__crt_locale_data **)&DAT_0041defc);
    FID_conflict__free((void *)0x0);
    if (_Memory != (__acrt_ptd *)0x0) goto LAB_0040b215;
  }
  SetLastError(dwErrCode);
                    /* WARNING: Subroutine does not return */
  _abort();
}




/* Library Function - Single Match
    ___acrt_getptd_noexit
   
   Library: Visual Studio 2015 Release */

__acrt_ptd * ___acrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  __acrt_ptd *_Memory;
  int iVar1;
  
  dwErrCode = GetLastError();
  if ((DAT_0041d050 != 0xffffffff) &&
     (_Memory = (__acrt_ptd *)___acrt_FlsGetValue_4(DAT_0041d050), _Memory != (__acrt_ptd *)0x0)) {
LAB_0040b2a4:
    SetLastError(dwErrCode);
    return _Memory;
  }
  _Memory = (__acrt_ptd *)__calloc_base(1,0x364);
  if (_Memory == (__acrt_ptd *)0x0) {
    _Memory = (__acrt_ptd *)0x0;
  }
  else {
    iVar1 = ___acrt_FlsSetValue_8(DAT_0041d050,_Memory);
    if (iVar1 != 0) {
      construct_ptd(_Memory,(__crt_locale_data **)&DAT_0041defc);
      FID_conflict__free((void *)0x0);
      if (_Memory != (__acrt_ptd *)0x0) goto LAB_0040b2a4;
      goto LAB_0040b29b;
    }
  }
  FID_conflict__free(_Memory);
LAB_0040b29b:
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}




undefined4 FUN_0040b2df(void)

{
  DWORD DVar1;
  
  DVar1 = DAT_0041d050;
  if (DAT_0041d050 != 0xffffffff) {
    DVar1 = ___acrt_FlsFree_4(DAT_0041d050);
    DAT_0041d050 = 0xffffffff;
  }
  return CONCAT31((int3)(DVar1 >> 8),1);
}




/* Library Function - Multiple Matches With Different Base Names
    ___acrt_errno_from_os_error
    __get_errno_from_oserr
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

int __cdecl FID_conflict____acrt_errno_from_os_error(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_004165b0)[uVar1 * 2]) {
      return (&DAT_004165b4)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}




/* Library Function - Single Match
    ___acrt_errno_map_os_error
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_errno_map_os_error(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = FID_conflict____acrt_errno_from_os_error(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}




/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2015 Release */

ulong * __cdecl ___doserrno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = ___acrt_getptd_noexit();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    return (ulong *)&DAT_0041d058;
  }
  return (ulong *)(p_Var1 + 0x14);
}




/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2015 Release */

int * __cdecl __errno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = ___acrt_getptd_noexit();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    return (int *)&DAT_0041d054;
  }
  return (int *)(p_Var1 + 0x10);
}




/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  int iVar1;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  iVar1 = __ischartype_l(_C,4,&local_10);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return iVar1;
}




/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2015 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_0041dec4 != 0) {
    iVar1 = __isdigit_l(_C,(_locale_t)0x0);
    return iVar1;
  }
  return *(ushort *)(PTR_DAT_0041d108 + _C * 2) & 4;
}




/* Library Function - Single Match
    int __cdecl common_tox_l<&bool __cdecl internal_isupper_l(int,struct __crt_locale_pointers *
   const),&int __cdecl internal_map_lower(int,struct __crt_locale_pointers * const)>(int,unsigned
   long,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_tox_l<&bool___cdecl_internal_isupper_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_lower(int,struct___crt_locale_pointers*_const)>
          (int param_1,ulong param_2,__crt_locale_pointers *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  localeinfo_struct local_1c;
  char local_14;
  uint local_10;
  byte local_c [4];
  undefined2 local_8;
  undefined1 local_6;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,param_3);
  if ((uint)param_1 < 0x100) {
    bVar2 = internal_isupper_l(param_1,(__crt_locale_pointers *)&local_1c);
    if (bVar2) {
      bVar1 = (local_1c.locinfo)->pclmap[param_1];
      if (local_14 == '\0') {
        return (uint)bVar1;
      }
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
      return (uint)bVar1;
    }
    if (local_14 == '\0') {
      return param_1;
    }
    *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    return param_1;
  }
  local_8 = 0;
  local_6 = 0;
  if (1 < (int)(local_1c.locinfo)->lc_codepage) {
    local_10 = param_1 >> 8;
    iVar3 = __isleadbyte_l(local_10 & 0xff,&local_1c);
    if (iVar3 != 0) {
      local_8 = CONCAT11((byte)param_1,(char)local_10);
      local_6 = 0;
      iVar3 = 2;
      goto LAB_0040b4aa;
    }
  }
  piVar4 = __errno();
  *piVar4 = 0x2a;
  iVar3 = 1;
  local_8 = (ushort)(byte)param_1;
LAB_0040b4aa:
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  iVar3 = ___acrt_LCMapStringA
                    ((__crt_locale_pointers *)&local_1c,(local_1c.locinfo)->locale_name[2],param_2,
                     (char *)&local_8,iVar3,(char *)local_c,3,(local_1c.locinfo)->lc_collate_cp,1);
  if (iVar3 == 0) {
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  else if (iVar3 == 1) {
    param_1 = (int)local_c[0];
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  else {
    param_1 = (int)CONCAT11(local_c[0],local_c[1]);
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  return param_1;
}




/* Library Function - Single Match
    bool __cdecl internal_isupper_l(int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

bool __cdecl internal_isupper_l(int param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  
  iVar1 = __ischartype_l(param_1,1,(_locale_t)param_2);
  return iVar1 != 0;
}




/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = common_tox_l<&bool___cdecl_internal_isupper_l(int,struct___crt_locale_pointers*_const),&int___cdecl_internal_map_lower(int,struct___crt_locale_pointers*_const)>
                    (_C,0x100,(__crt_locale_pointers *)_Locale);
  return iVar1;
}




/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2015 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_0041dec4 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}




/* Library Function - Multiple Matches With Different Base Names
    __free_base
    _free
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __cdecl FID_conflict__free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_0041e360,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = FID_conflict____acrt_errno_from_os_error(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}




/* Library Function - Single Match
    __malloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl __malloc_base(size_t param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_0041e360,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_00409f66();
    } while ((iVar1 != 0) && (iVar1 = __callnewh(param_1), iVar1 != 0));
  }
  piVar3 = __errno();
  *piVar3 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Multiple Matches With Same Base Name
    class __crt_strtox::c_string_character_source<char> __cdecl
   __crt_strtox::make_c_string_character_source<char,char * *>(char const * const,char * * const)
    class __crt_strtox::c_string_character_source<wchar_t> __cdecl
   __crt_strtox::make_c_string_character_source<wchar_t,wchar_t * *>(wchar_t const * const,wchar_t *
   * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl
make_c_string_character_source<>(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return;
}




/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 2015 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = 1;
  iStack_10 = _Radix;
  make_c_string_character_source<>(auStack_18,_Str,_EndPtr);
  uVar1 = __crt_strtox::
          parse_integer<unsigned_long,class___crt_strtox::c_string_character_source<wchar_t>_>(0);
  return uVar1;
}




/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_14;
  localeinfo_struct local_10;
  char local_8;
  
  if ((_SrcCh == (char *)0x0) || (_SrcSizeInBytes == 0)) {
    return 0;
  }
  if (*_SrcCh == '\0') {
    if (_DstCh == (wchar_t *)0x0) {
      return 0;
    }
    *_DstCh = L'\0';
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  if ((local_10.locinfo)->locale_name[2] == (wchar_t *)0x0) {
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = (ushort)(byte)*_SrcCh;
    }
    uVar3 = 1;
    goto LAB_0040b74c;
  }
  iVar1 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_10);
  if (iVar1 == 0) {
    uVar3 = 1;
    iVar1 = MultiByteToWideChar((local_10.locinfo)->lc_collate_cp,9,_SrcCh,1,_DstCh,
                                (uint)(_DstCh != (wchar_t *)0x0));
    if (iVar1 != 0) goto LAB_0040b74c;
LAB_0040b73e:
    piVar2 = __errno();
    uVar3 = 0xffffffff;
    *piVar2 = 0x2a;
  }
  else {
    if ((int)(local_10.locinfo)->lc_codepage < 2) {
LAB_0040b70b:
      uVar3 = (local_10.locinfo)->lc_codepage;
LAB_0040b70e:
      if ((_SrcSizeInBytes < uVar3) || (_SrcCh[1] == '\0')) goto LAB_0040b73e;
    }
    else {
      uVar3 = (local_10.locinfo)->lc_codepage;
      if ((int)_SrcSizeInBytes < (int)uVar3) goto LAB_0040b70e;
      iVar1 = MultiByteToWideChar((local_10.locinfo)->lc_collate_cp,9,_SrcCh,
                                  (local_10.locinfo)->lc_codepage,_DstCh,
                                  (uint)(_DstCh != (wchar_t *)0x0));
      if (iVar1 == 0) goto LAB_0040b70b;
    }
    uVar3 = (local_10.locinfo)->lc_codepage;
  }
LAB_0040b74c:
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    return uVar3;
  }
  return uVar3;
}




/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2015 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}




uint __cdecl FUN_0040b77e(short *param_1,uint param_2)

{
  undefined1 (*pauVar1) [32];
  short *psVar2;
  undefined1 auVar3 [32];
  uint uVar4;
  undefined1 (*pauVar5) [32];
  short *psVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar10 [64];
  
  psVar6 = param_1;
  if (DAT_0041dbd4 < 5) {
    if (DAT_0041dbd4 < 1) {
      if (param_1 != param_1 + param_2) {
        do {
          if (*psVar6 == 0) break;
          psVar6 = psVar6 + 1;
        } while (psVar6 != param_1 + param_2);
      }
    }
    else {
      if (((uint)param_1 & 1) == 0) {
        uVar8 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        if (param_1 != param_1 + uVar8) {
          do {
            if (*psVar6 == 0) break;
            psVar6 = psVar6 + 1;
          } while (psVar6 != param_1 + uVar8);
        }
        uVar4 = (int)psVar6 - (int)param_1 >> 1;
        if (uVar4 != uVar8) {
          return uVar4;
        }
        psVar6 = param_1 + uVar4;
        auVar10 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
        psVar2 = psVar6 + ((param_2 - uVar8) - (param_2 - uVar8 & 0xf));
        for (; psVar6 != psVar2; psVar6 = psVar6 + 8) {
          auVar9._0_2_ = -(ushort)(*psVar6 == 0);
          auVar9._2_2_ = -(ushort)(psVar6[1] == 0);
          auVar9._4_2_ = -(ushort)(psVar6[2] == 0);
          auVar9._6_2_ = -(ushort)(psVar6[3] == 0);
          auVar9._8_2_ = -(ushort)(psVar6[4] == auVar10._8_2_);
          auVar9._10_2_ = -(ushort)(psVar6[5] == auVar10._10_2_);
          auVar9._12_2_ = -(ushort)(psVar6[6] == auVar10._12_2_);
          auVar9._14_2_ = -(ushort)(psVar6[7] == auVar10._14_2_);
          if ((((((((((((((((auVar9 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                           (auVar9 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar9 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar9 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar9 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar9 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar9 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar9 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar9 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar9 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar9 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar9 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar9 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar9 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar9._14_2_ >> 7 & 1) != 0) || (auVar9._14_2_ & 0x8000) != 0) break;
        }
        for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
        }
        iVar7 = (int)psVar6 - (int)param_1;
        goto LAB_0040b92b;
      }
      if (param_1 != param_1 + param_2) {
        do {
          if (*psVar6 == 0) break;
          psVar6 = psVar6 + 1;
        } while (psVar6 != param_1 + param_2);
      }
    }
  }
  else {
    if (((uint)param_1 & 1) == 0) {
      uVar8 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
      if (param_2 < uVar8) {
        uVar8 = param_2;
      }
      if (param_1 != param_1 + uVar8) {
        do {
          if (*psVar6 == 0) break;
          psVar6 = psVar6 + 1;
        } while (psVar6 != param_1 + uVar8);
      }
      uVar4 = (int)psVar6 - (int)param_1 >> 1;
      if (uVar4 != uVar8) {
        return uVar4;
      }
      pauVar5 = (undefined1 (*) [32])(param_1 + uVar4);
      pauVar1 = (undefined1 (*) [32])
                ((int)pauVar5 + ((param_2 - uVar8) - (param_2 - uVar8 & 0x1f)) * 2);
      while ((pauVar5 != pauVar1 &&
             (auVar3 = vpcmpeqw_avx2(ZEXT832(0) << 0x40,*pauVar5),
             (((((((((((((((((((((((((((((((auVar3 >> 7 & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0 &&
                                          (auVar3 >> 0xf & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar3 >> 0x17 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar3 >> 0x1f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar3 >> 0x27 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar3 >> 0x2f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar3 >> 0x37 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar3 >> 0x3f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar3 >> 0x47 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                   ) && (auVar3 >> 0x4f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                 (auVar3 >> 0x57 & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar3 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar3 >> 0x67 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar3 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             (auVar3 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            SUB321(auVar3 >> 0x7f,0) == '\0') &&
                           (auVar3 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar3 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar3 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar3 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar3 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar3 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar3 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    SUB321(auVar3 >> 0xbf,0) == '\0') &&
                   (auVar3 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar3 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar3 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar3 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar3 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar3 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar3 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) && -1 < auVar3[0x1f]
             ))) {
        pauVar5 = pauVar5 + 1;
      }
      for (; (pauVar5 != (undefined1 (*) [32])(param_1 + param_2) && (*(short *)*pauVar5 != 0));
          pauVar5 = (undefined1 (*) [32])(*pauVar5 + 2)) {
      }
      return (int)pauVar5 - (int)param_1 >> 1;
    }
    if (param_1 != param_1 + param_2) {
      do {
        if (*psVar6 == 0) break;
        psVar6 = psVar6 + 1;
      } while (psVar6 != param_1 + param_2);
    }
  }
  iVar7 = (int)psVar6 - (int)param_1;
LAB_0040b92b:
  return iVar7 >> 1;
}




/* Library Function - Single Match
    ___acrt_update_locale_info
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_update_locale_info(int param_1,int *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_0041defc) && ((*(uint *)(param_1 + 0x350) & DAT_0041d748) == 0)) {
    ppuVar1 = ___acrt_update_thread_locale_data();
    *param_2 = (int)ppuVar1;
  }
  return;
}




/* Library Function - Single Match
    ___acrt_update_multibyte_info
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_update_multibyte_info(int param_1,int *param_2)

{
  int *piVar1;
  
  if (((undefined *)*param_2 != PTR_DAT_0041d6e8) &&
     ((*(uint *)(param_1 + 0x350) & DAT_0041d748) == 0)) {
    piVar1 = ___acrt_update_thread_multibyte_data();
    *param_2 = (int)piVar1;
  }
  return;
}




/* Library Function - Single Match
    enum __acrt_fp_class __cdecl __acrt_fp_classify(double const &)
   
   Library: Visual Studio 2015 Release */

__acrt_fp_class __cdecl __acrt_fp_classify(double *param_1)

{
  uint uVar1;
  undefined4 uStack_14;
  
  uVar1 = *(uint *)((int)param_1 + 4);
  if ((uVar1 >> 0x14 & 0x7ff) == 0x7ff) {
    if (*(int *)param_1 == 0 && (uVar1 & 0xfffff) == 0) {
      uStack_14 = 1;
    }
    else if ((((uVar1 & 0x80000000) == 0) || (*(int *)param_1 != 0)) ||
            ((uVar1 & 0xfffff) != 0x80000)) {
      if ((uVar1 & 0x80000) == 0) {
        uStack_14 = 3;
      }
      else {
        uStack_14 = 2;
      }
    }
    else {
      uStack_14 = 4;
    }
  }
  else {
    uStack_14 = 0;
  }
  return uStack_14;
}




/* Library Function - Single Match
    bool __cdecl __acrt_fp_is_negative(double const &)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __acrt_fp_is_negative(double *param_1)

{
  return ((ulonglong)*param_1 & 0x8000000000000000) != 0;
}




/* Library Function - Single Match
    int __cdecl fp_format_a(double const * const,char *,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_a(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  int *piVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar7;
  char *_Dst;
  char *pcVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int local_34;
  int local_30;
  char local_28;
  undefined4 local_24;
  int local_20;
  char *local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_6 < 0) {
    param_6 = 0;
  }
  *param_2 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_34,param_9);
  if (param_3 <= param_6 + 0xbU) {
    piVar1 = __errno();
    iVar2 = 0x22;
    *piVar1 = 0x22;
    FUN_00407d49();
    goto LAB_0040bd03;
  }
  local_24 = *(undefined4 *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    iVar2 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_6,false,param_8,
                        (__crt_locale_pointers *)0x0);
    if (iVar2 == 0) {
      pauVar3 = FUN_00414880((undefined1 (*) [16])param_2,0x65);
      if (pauVar3 != (undefined1 (*) [16])0x0) {
        (*pauVar3)[0] = (!param_7 - 1U & 0xe0) + 0x70;
        (*pauVar3)[3] = 0;
      }
      iVar2 = 0;
    }
    else {
      *param_2 = '\0';
    }
    goto LAB_0040bd03;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
  }
  local_10 = 0x3ff;
  iVar2 = (!param_7 - 1 & 0xffffffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = '0';
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0x3fe;
    }
  }
  else {
    *param_2 = '1';
  }
  local_1c = param_2 + 1;
  _Dst = param_2 + 2;
  if (param_6 == 0) {
    *local_1c = '\0';
  }
  else {
    *local_1c = *(char *)**(undefined4 **)(local_30 + 0x88);
  }
  local_20 = iVar2;
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_14 = 0, *(int *)param_1 != 0)) {
    local_8 = 0;
    local_c = 0x30;
    local_14 = 0xf0000;
    do {
      if (param_6 < 1) break;
      uVar10 = __aullshr((byte)local_c,*(uint *)((int)param_1 + 4) & local_14 & 0xfffff);
      uVar4 = (uint)(ushort)((short)uVar10 + 0x30);
      if (0x39 < uVar4) {
        uVar4 = uVar4 + iVar2;
      }
      *_Dst = (char)uVar4;
      _Dst = _Dst + 1;
      local_8 = local_8 >> 4 | local_14 << 0x1c;
      local_14 = local_14 >> 4;
      local_c = local_c + -4;
      param_6 = param_6 - 1;
    } while (-1 < (short)local_c);
    if ((-1 < (short)local_c) &&
       (uVar10 = __aullshr((byte)local_c,*(uint *)((int)param_1 + 4) & local_14 & 0xfffff),
       pcVar8 = _Dst, 8 < (ushort)uVar10)) {
      while( true ) {
        pcVar5 = pcVar8 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar8 = pcVar5;
      }
      if (pcVar5 == local_1c) {
        pcVar8[-2] = pcVar8[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)local_20 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < param_6) {
    _memset(_Dst,0x30,param_6);
    _Dst = _Dst + param_6;
  }
  if (*local_1c == '\0') {
    _Dst = local_1c;
  }
  *_Dst = (!param_7 - 1U & 0xe0) + 0x70;
  uVar10 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar4 = (uint)uVar10 & 0x7ff;
  uVar6 = uVar4 - local_10;
  uVar4 = (uint)(uVar4 < local_10);
  uVar7 = -uVar4;
  if (uVar4 == 0) {
    _Dst[1] = '+';
  }
  else {
    _Dst[1] = '-';
    bVar9 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar7 = -(uVar7 + bVar9);
  }
  pcVar5 = _Dst + 2;
  *pcVar5 = '0';
  pcVar8 = pcVar5;
  if (-1 < (int)uVar7) {
    if (((int)uVar7 < 1) && (uVar6 < 1000)) {
LAB_0040bcb6:
      if (((int)uVar7 < 0) || (((int)uVar7 < 1 && (uVar6 < 100)))) goto LAB_0040bcd4;
    }
    else {
      uVar11 = __alldvrm(uVar6,uVar7,1000,0);
      local_20 = (int)((ulonglong)uVar11 >> 0x20);
      *pcVar5 = (char)uVar11 + '0';
      pcVar8 = _Dst + 3;
      uVar6 = extraout_ECX;
      if (pcVar8 == pcVar5) goto LAB_0040bcb6;
    }
    uVar11 = __alldvrm(uVar6,uVar7,100,0);
    local_20 = (int)((ulonglong)uVar11 >> 0x20);
    *pcVar8 = (char)uVar11 + '0';
    pcVar8 = pcVar8 + 1;
    uVar6 = extraout_ECX_00;
  }
LAB_0040bcd4:
  if ((pcVar8 != pcVar5) || ((-1 < (int)uVar7 && ((0 < (int)uVar7 || (9 < uVar6)))))) {
    uVar11 = __alldvrm(uVar6,uVar7,10,0);
    *pcVar8 = (char)uVar11 + '0';
    pcVar8 = pcVar8 + 1;
    uVar6 = extraout_ECX_01;
  }
  iVar2 = 0;
  *pcVar8 = (char)uVar6 + '0';
  pcVar8[1] = '\0';
LAB_0040bd03:
  if (local_28 != '\0') {
    *(uint *)(local_34 + 0x350) = *(uint *)(local_34 + 0x350) & 0xfffffffd;
  }
  return iVar2;
}




/* Library Function - Single Match
    int __cdecl fp_format_e(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_e(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  int iVar1;
  uint uVar2;
  int local_10 [3];
  
  ___acrt_fltout(*(int *)param_1,*(uint *)((int)param_1 + 4),param_6 + 1,local_10,param_4,param_5);
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = (param_3 - (local_10[0] == 0x2d)) - (uint)(0 < param_6);
  }
  iVar1 = ___acrt_fp_strflt_to_string
                    ((uint *)(param_2 + (uint)(0 < param_6) + (uint)(local_10[0] == 0x2d)),uVar2,
                     param_6 + 1,(int)local_10);
  if (iVar1 == 0) {
    iVar1 = fp_format_e_internal
                      (param_2,param_3,param_6,param_7,param_8,(_strflt *)local_10,false,param_9);
  }
  else {
    *param_2 = '\0';
  }
  return iVar1;
}




/* Library Function - Single Match
    int __cdecl fp_format_e_internal(char * const,unsigned int,int,bool,unsigned int,struct _strflt
   * const,bool,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_e_internal
          (char *param_1,uint param_2,int param_3,bool param_4,uint param_5,_strflt *param_6,
          bool param_7,__crt_locale_pointers *param_8)

{
  int *piVar1;
  char *_SizeInBytes;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_14;
  int local_10;
  char local_8;
  
  iVar4 = param_3;
  if (param_3 < 1) {
    iVar4 = 0;
  }
  if (iVar4 + 9U < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_8);
    if (param_7) {
      shift_bytes(param_1,param_2,param_1 + (*(int *)param_6 == 0x2d),(uint)(0 < param_3));
    }
    pcVar5 = param_1;
    if (*(int *)param_6 == 0x2d) {
      *param_1 = '-';
      pcVar5 = param_1 + 1;
    }
    if (0 < param_3) {
      *pcVar5 = pcVar5[1];
      pcVar5 = pcVar5 + 1;
      *pcVar5 = *(char *)**(undefined4 **)(local_10 + 0x88);
    }
    pcVar5 = pcVar5 + (uint)!param_7 + param_3;
    _SizeInBytes = (char *)0xffffffff;
    if (param_2 != 0xffffffff) {
      _SizeInBytes = param_1 + (param_2 - (int)pcVar5);
    }
    eVar2 = _strcpy_s(pcVar5,(rsize_t)_SizeInBytes,"e+000");
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4) {
      *pcVar5 = 'E';
    }
    if (**(char **)(param_6 + 8) != '0') {
      iVar4 = *(int *)(param_6 + 4) + -1;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
        pcVar5[1] = '-';
      }
      if (99 < iVar4) {
        iVar3 = iVar4 / 100;
        iVar4 = iVar4 % 100;
        pcVar5[2] = pcVar5[2] + (char)iVar3;
      }
      if (9 < iVar4) {
        iVar3 = iVar4 / 10;
        iVar4 = iVar4 % 10;
        pcVar5[3] = pcVar5[3] + (char)iVar3;
      }
      pcVar5[4] = pcVar5[4] + (char)iVar4;
    }
    if ((param_5 == 2) && ((char)*(uint *)(pcVar5 + 2) == '0')) {
      FUN_00405700((uint *)(pcVar5 + 2),(uint *)(pcVar5 + 3),3);
    }
    if (local_8 != '\0') {
      *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
    }
    iVar4 = 0;
  }
  else {
    piVar1 = __errno();
    iVar4 = 0x22;
    *piVar1 = 0x22;
    FUN_00407d49();
  }
  return iVar4;
}




/* Library Function - Single Match
    int __cdecl fp_format_f(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_f(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           __crt_locale_pointers *param_7)

{
  int iVar1;
  uint uVar2;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = 0;
  uStack_8 = 0;
  ___acrt_fltout(*(int *)param_1,*(uint *)((int)param_1 + 4),param_6,&local_10,param_4,param_5);
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = param_3 - (local_10 == 0x2d);
  }
  iVar1 = ___acrt_fp_strflt_to_string
                    ((uint *)(param_2 + (local_10 == 0x2d)),uVar2,local_c + param_6,(int)&local_10);
  if (iVar1 == 0) {
    iVar1 = fp_format_f_internal(param_2,param_3,param_6,(_strflt *)&local_10,false,param_7);
  }
  else {
    *param_2 = '\0';
  }
  return iVar1;
}




/* Library Function - Single Match
    int __cdecl fp_format_f_internal(char * const,unsigned int,int,struct _strflt *
   const,bool,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_f_internal
          (char *param_1,uint param_2,int param_3,_strflt *param_4,bool param_5,
          __crt_locale_pointers *param_6)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int local_14;
  int local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_6);
  iVar1 = *(int *)(param_4 + 4);
  if ((param_5) && (iVar1 + -1 == param_3)) {
    iVar2 = *(int *)param_4;
    (param_1 + (uint)(iVar2 == 0x2d) + iVar1 + -1)[0] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + iVar1 + -1)[1] = '\0';
  }
  pcVar3 = param_1;
  if (*(int *)param_4 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (*(int *)(param_4 + 4) < 1) {
    shift_bytes(param_1,param_2,pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + *(int *)(param_4 + 4);
  }
  if (0 < param_3) {
    shift_bytes(param_1,param_2,pcVar3,1);
    *pcVar3 = *(char *)**(undefined4 **)(local_10 + 0x88);
    iVar1 = *(int *)(param_4 + 4);
    if (iVar1 < 0) {
      if ((param_5) || (-iVar1 < param_3)) {
        param_3 = -iVar1;
      }
      shift_bytes(param_1,param_2,pcVar3 + 1,param_3);
      _memset(pcVar3 + 1,0x30,param_3);
    }
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return 0;
}




/* Library Function - Single Match
    int __cdecl fp_format_g(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_g(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  int local_14;
  int local_10;
  undefined4 uStack_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  uStack_c = 0;
  ___acrt_fltout(*(int *)param_1,*(uint *)((int)param_1 + 4),param_6,&local_14,param_4,param_5);
  bVar5 = local_14 == 0x2d;
  local_8 = local_10 + -1;
  uVar2 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar2 = param_3 - bVar5;
  }
  iVar3 = ___acrt_fp_strflt_to_string((uint *)(param_2 + bVar5),uVar2,param_6,(int)&local_14);
  if (iVar3 == 0) {
    iVar3 = local_10 + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      iVar3 = fp_format_e_internal
                        (param_2,param_3,param_6,param_7,param_8,(_strflt *)&local_14,true,param_9);
    }
    else {
      puVar1 = (uint *)(param_2 + bVar5);
      if (local_8 < iVar3) {
        do {
          puVar4 = puVar1;
          puVar1 = (uint *)((int)puVar4 + 1);
        } while ((char)*puVar4 != '\0');
        *(undefined1 *)((int)puVar4 + -1) = 0;
      }
      iVar3 = fp_format_f_internal(param_2,param_3,param_6,(_strflt *)&local_14,true,param_9);
    }
  }
  else {
    *param_2 = '\0';
  }
  return iVar3;
}




/* Library Function - Single Match
    int __cdecl fp_format_nan_or_infinity(enum __acrt_fp_class,bool,char *,unsigned int,bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_nan_or_infinity
          (__acrt_fp_class param_1,bool param_2,char *param_3,uint param_4,bool param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  errno_t eVar4;
  uint uVar5;
  char *pcVar6;
  undefined *local_48 [4];
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  char *local_28;
  undefined *local_24;
  char *local_20;
  undefined *local_1c;
  char *local_18;
  undefined *local_14;
  char *local_10;
  undefined *local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  if (param_4 < param_2 + 4) {
    *param_3 = '\0';
  }
  else {
    if (param_2) {
      *param_3 = '-';
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
      *param_3 = '\0';
    }
    local_28 = "NAN(SNAN)";
    local_48[0] = &DAT_00416718;
    local_48[1] = &DAT_00416718;
    local_48[2] = &DAT_0041671c;
    local_48[3] = &DAT_0041671c;
    local_20 = "nan(snan)";
    local_30 = &DAT_00416724;
    uVar5 = param_5 - 1 & 2;
    local_2c = &DAT_00416724;
    local_1c = &DAT_00416724;
    local_c = &DAT_00416724;
    local_18 = "NAN(IND)";
    local_38 = &DAT_00416720;
    local_34 = &DAT_00416720;
    local_24 = &DAT_00416720;
    local_14 = &DAT_00416720;
    local_10 = "nan(ind)";
    pcVar6 = local_48[param_1 * 4 + -4 + uVar5];
    pcVar1 = pcVar6 + 1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    eVar4 = _strcpy_s(param_3,param_4,
                      local_48[((param_1 * 4 + -3) -
                               (uint)((uint)((int)pcVar6 - (int)pcVar1) < param_4)) + uVar5]);
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}




/* Library Function - Single Match
    void __cdecl shift_bytes(char * const,unsigned int,char * const,int)
   
   Library: Visual Studio 2015 Release */

void __cdecl shift_bytes(char *param_1,uint param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  if (param_4 != 0) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00405700((uint *)(param_3 + param_4),(uint *)param_3,
                 (uint)(pcVar2 + (1 - (int)(param_3 + 1))));
  }
  return;
}




/* Library Function - Single Match
    ___acrt_fp_format
   
   Library: Visual Studio 2015 Release */

int __cdecl
___acrt_fp_format(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
                 int param_7,uint param_8,undefined4 param_9,__crt_locale_pointers *param_10)

{
  bool bVar1;
  int *piVar2;
  __acrt_fp_class _Var3;
  int iVar4;
  uint uVar5;
  bool local_8;
  
  if (param_2 == (char *)0x0) {
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_00407d49();
  }
  else if (((param_3 == 0) || (param_4 == (char *)0x0)) || (param_5 == 0)) {
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_00407d49();
  }
  else {
    if (((param_6 == 0x41) || (param_6 == 0x45)) ||
       ((param_6 == 0x46 || (local_8 = false, param_6 == 0x47)))) {
      local_8 = true;
    }
    if (((param_8 & 8) == 0) && (_Var3 = __acrt_fp_classify(param_1), _Var3 != 0)) {
      bVar1 = __acrt_fp_is_negative(param_1);
      iVar4 = fp_format_nan_or_infinity(_Var3,bVar1,param_2,param_3,local_8);
    }
    else {
      if ((param_8 & 0x10) == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
      if (param_6 < 0x62) {
        if ((param_6 == 0x61) || (param_6 == 0x41)) {
          iVar4 = fp_format_a(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar5,param_10
                             );
          return iVar4;
        }
        iVar4 = param_6 + -0x45;
      }
      else {
        iVar4 = param_6 + -0x65;
      }
      if (iVar4 == 0) {
        iVar4 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar5,param_10);
      }
      else if (iVar4 == 1) {
        iVar4 = fp_format_f(param_1,param_2,param_3,param_4,param_5,param_7,param_10);
      }
      else {
        iVar4 = fp_format_g(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar5,param_10);
      }
    }
  }
  return iVar4;
}




/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2015 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
    return -1;
  }
  return _File->_file;
}




/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2015 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}




void __cdecl FUN_0040c4f2(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}




/* Library Function - Single Match
    __get_printf_count_output
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __get_printf_count_output(void)

{
  return (uint)(DAT_0041def0 == (DAT_0041d004 | 1));
}




/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Library: Visual Studio 2015 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  HANDLE hFile;
  DWORD DVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  _STARTUPINFOW local_4c;
  byte *local_8;
  
  GetStartupInfoW(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((uint *)local_4c.lpReserved2 != (uint *)0x0)) {
    uVar4 = *(uint *)local_4c.lpReserved2;
    puVar3 = (uint *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)puVar3 + uVar4);
    if (0x1fff < (int)uVar4) {
      uVar4 = 0x2000;
    }
    ___acrt_lowio_ensure_fh_exists(uVar4);
    if ((int)DAT_0041e100 < (int)uVar4) {
      uVar4 = DAT_0041e100;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        hFile = *(HANDLE *)local_8;
        if ((((hFile != (HANDLE)0xffffffff) && (hFile != (HANDLE)0xfffffffe)) &&
            ((*puVar3 & 1) != 0)) &&
           (((*puVar3 & 8) != 0 || (DVar1 = GetFileType(hFile), DVar1 != 0)))) {
          iVar2 = (uVar5 & 0x3f) * 0x30 + (&DAT_0041df00)[(int)uVar5 >> 6];
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)local_8;
          *(byte *)(iVar2 + 0x28) = (byte)*puVar3;
        }
        uVar5 = uVar5 + 1;
        local_8 = local_8 + 4;
        puVar3 = (uint *)((int)puVar3 + 1);
      } while (uVar5 != uVar4);
    }
  }
  return;
}




void FUN_0040c5d1(void)

{
  HANDLE hFile;
  uint uVar1;
  int iVar2;
  uint uVar3;
  DWORD nStdHandle;
  
  uVar3 = 0;
  do {
    iVar2 = (uVar3 & 0x3f) * 0x30 + (&DAT_0041df00)[(int)uVar3 >> 6];
    if ((*(int *)(iVar2 + 0x18) == -1) || (*(int *)(iVar2 + 0x18) == -2)) {
      *(undefined1 *)(iVar2 + 0x28) = 0x81;
      if (uVar3 == 0) {
        nStdHandle = 0xfffffff6;
      }
      else if (uVar3 == 1) {
        nStdHandle = 0xfffffff5;
      }
      else {
        nStdHandle = 0xfffffff4;
      }
      hFile = GetStdHandle(nStdHandle);
      if ((hFile == (HANDLE)0xffffffff) || (hFile == (HANDLE)0x0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = GetFileType(hFile);
      }
      if (uVar1 == 0) {
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x40;
        *(undefined4 *)(iVar2 + 0x18) = 0xfffffffe;
        if (DAT_0041deec != 0) {
          *(undefined4 *)(*(int *)(DAT_0041deec + uVar3 * 4) + 0x10) = 0xfffffffe;
        }
      }
      else {
        *(HANDLE *)(iVar2 + 0x18) = hFile;
        if ((uVar1 & 0xff) == 2) {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x40;
        }
        else if ((uVar1 & 0xff) == 3) {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 8;
        }
      }
    }
    else {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 3);
  return;
}




void FUN_0040c6d4(void)

{
  ___acrt_unlock(7);
  return;
}




/* Library Function - Single Match
    ___acrt_lock
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lock(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_0041e108 + param_1 * 0x18));
  return;
}




undefined4 FUN_0040c761(void)

{
  undefined4 in_EAX;
  undefined4 extraout_EAX;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_0041e240 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_0041e0f0 + DAT_0041e240 * 0x18);
    iVar1 = DAT_0041e240;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_0041e240 = DAT_0041e240 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
      in_EAX = extraout_EAX;
    } while (iVar1 != 0);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* Library Function - Single Match
    ___acrt_unlock
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_unlock(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_0041e108 + param_1 * 0x18));
  return;
}




/* Library Function - Single Match
    int __cdecl common_tcsncpy_s<wchar_t>(wchar_t * const,unsigned int,wchar_t const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_tcsncpy_s<wchar_t>(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  if (param_4 == 0) {
    if (param_1 == (wchar_t *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_0040c7cb:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = L'\0';
          return 0;
        }
        if (param_3 != (wchar_t *)0x0) {
          uVar3 = param_4;
          uVar4 = param_2;
          pwVar5 = param_1;
          if (param_4 == 0xffffffff) {
            do {
              wVar1 = *(wchar_t *)(((int)param_3 - (int)param_1) + (int)pwVar5);
              *pwVar5 = wVar1;
              pwVar5 = pwVar5 + 1;
              if (wVar1 == L'\0') break;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          else {
            do {
              wVar1 = *(wchar_t *)(((int)param_3 - (int)param_1) + (int)pwVar5);
              *pwVar5 = wVar1;
              pwVar5 = pwVar5 + 1;
              if ((wVar1 == L'\0') || (uVar4 = uVar4 - 1, uVar4 == 0)) break;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            if (uVar3 == 0) {
              *pwVar5 = L'\0';
            }
          }
          if (uVar4 != 0) {
            return 0;
          }
          if (param_4 == 0xffffffff) {
            param_1[param_2 - 1] = L'\0';
            return 0x50;
          }
          *param_1 = L'\0';
          piVar2 = __errno();
          iVar6 = 0x22;
          goto LAB_0040c7f0;
        }
        *param_1 = L'\0';
      }
    }
  }
  else if (param_1 != (wchar_t *)0x0) goto LAB_0040c7cb;
  piVar2 = __errno();
  iVar6 = 0x16;
LAB_0040c7f0:
  *piVar2 = iVar6;
  FUN_00407d49();
  return iVar6;
}




void __cdecl FUN_0040c876(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  common_tcsncpy_s<wchar_t>(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Single Match
    __calloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl __calloc_base(uint param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  int *piVar3;
  size_t dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_0041e360,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_00409f66();
    } while ((iVar1 != 0) && (iVar1 = __callnewh(dwBytes), iVar1 != 0));
  }
  piVar3 = __errno();
  *piVar3 = 0xc;
  return (LPVOID)0x0;
}




uint __cdecl FUN_0040c8de(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_2 < param_1);
}




/* Library Function - Single Match
    int __cdecl common_expand_argv_wildcards<wchar_t>(wchar_t * * const,wchar_t * * * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_expand_argv_wildcards<wchar_t>(wchar_t **param_1,wchar_t ***param_2)

{
  short *psVar1;
  wchar_t **ppwVar2;
  short sVar3;
  undefined4 *puVar4;
  int *piVar5;
  wchar_t *pwVar6;
  wchar_t **ppwVar7;
  int iVar8;
  short *psVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  wchar_t **local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  if (param_2 == (wchar_t ***)0x0) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00407d49();
  }
  else {
    *param_2 = (wchar_t **)0x0;
    local_20 = 0;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    pwVar6 = *param_1;
    puVar12 = local_2c;
    puVar4 = local_28;
    while (local_2c = puVar12, local_28 = puVar4, pwVar6 != (wchar_t *)0x0) {
      local_10 = 0x3f002a;
      local_c = 0;
      pwVar6 = _wcspbrk(*param_1,(wchar_t *)&local_10);
      if (pwVar6 == (wchar_t *)0x0) {
        iVar8 = copy_and_add_argument_to_buffer<wchar_t>
                          (*param_1,(wchar_t *)0x0,0,(argument_list<wchar_t> *)&local_2c);
      }
      else {
        iVar8 = expand_argument_wildcards<wchar_t>
                          (*param_1,pwVar6,(argument_list<wchar_t> *)&local_2c);
      }
      if (iVar8 != 0) goto LAB_0040ca9b;
      param_1 = param_1 + 1;
      puVar12 = local_2c;
      puVar4 = local_28;
      pwVar6 = *param_1;
    }
    local_18 = 0;
    local_14 = 0;
    local_1c = (wchar_t **)(((int)puVar4 - (int)puVar12 >> 2) + 1);
    uVar11 = ~-(uint)(puVar4 < puVar12) & ((int)puVar4 - (int)puVar12) + 3U >> 2;
    if (uVar11 != 0) {
      local_18 = 0;
      puVar10 = puVar12;
      do {
        psVar9 = (short *)*puVar10;
        psVar1 = psVar9 + 1;
        do {
          sVar3 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar3 != (short)local_20);
        puVar10 = puVar10 + 1;
        local_18 = local_18 + 1 + ((int)psVar9 - (int)psVar1 >> 1);
        local_14 = local_14 + 1;
      } while (local_14 != uVar11);
    }
    ppwVar7 = (wchar_t **)___acrt_allocate_buffer_for_argv((uint)local_1c,local_18,2);
    if (ppwVar7 != (wchar_t **)0x0) {
      ppwVar2 = ppwVar7 + (int)local_1c;
      local_1c = ppwVar2;
      if (puVar12 != puVar4) {
        local_10 = (int)ppwVar7 - (int)puVar12;
        do {
          psVar9 = (short *)*puVar12;
          psVar1 = psVar9 + 1;
          do {
            sVar3 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar3 != (short)local_20);
          local_14 = ((int)psVar9 - (int)psVar1 >> 1) + 1;
          iVar8 = FUN_0040c876((wchar_t *)local_1c,local_18 - ((int)local_1c - (int)ppwVar2 >> 1),
                               (wchar_t *)*puVar12,local_14);
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(wchar_t ***)(local_10 + (int)puVar12) = local_1c;
          puVar12 = puVar12 + 1;
          local_1c = (wchar_t **)((int)local_1c + local_14 * 2);
        } while (puVar12 != puVar4);
      }
      *param_2 = ppwVar7;
    }
    FID_conflict__free((void *)0x0);
LAB_0040ca9b:
    _anon_FD16DE3C::argument_list<wchar_t>::~argument_list<wchar_t>
              ((argument_list<wchar_t> *)&local_2c);
  }
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}




/* Library Function - Single Match
    int __cdecl copy_and_add_argument_to_buffer<wchar_t>(wchar_t const * const,wchar_t const *
   const,unsigned int,class `anonymous namespace'::argument_list<wchar_t> &)
   
   Library: Visual Studio 2015 Release */

int __cdecl
copy_and_add_argument_to_buffer<wchar_t>
          (wchar_t *param_1,wchar_t *param_2,uint param_3,argument_list<wchar_t> *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pwVar2 = param_1;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  uVar4 = ((int)pwVar2 - (int)(param_1 + 1) >> 1) + 1;
  if (-param_3 - 1 < uVar4) {
    iVar3 = 0xc;
  }
  else {
    uVar5 = param_3 + 1 + uVar4;
    pwVar2 = (wchar_t *)__calloc_base(uVar5,2);
    if (param_3 != 0) {
      iVar3 = FUN_0040c876(pwVar2,uVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_0040cb54;
    }
    iVar3 = FUN_0040c876(pwVar2 + param_3,uVar5 - param_3,param_1,uVar4);
    if (iVar3 != 0) {
LAB_0040cb54:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = append(param_4,pwVar2);
    FID_conflict__free((void *)0x0);
  }
  return iVar3;
}




/* Library Function - Single Match
    int __cdecl expand_argument_wildcards<wchar_t>(wchar_t * const,wchar_t * const,class `anonymous
   namespace'::argument_list<wchar_t> &)
   
   Library: Visual Studio 2015 Release */

int __cdecl
expand_argument_wildcards<wchar_t>
          (wchar_t *param_1,wchar_t *param_2,argument_list<wchar_t> *param_3)

{
  wchar_t wVar1;
  byte bVar2;
  HANDLE hFindFile;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  _WIN32_FIND_DATAW local_258;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  for (; (((param_2 != param_1 && (wVar1 = *param_2, wVar1 != L'/')) && (wVar1 != L'\\')) &&
         (wVar1 != L':')); param_2 = param_2 + -1) {
  }
  wVar1 = *param_2;
  if ((wVar1 == L':') && (param_2 != param_1 + 1)) {
    copy_and_add_argument_to_buffer<wchar_t>(param_1,(wchar_t *)0x0,0,param_3);
  }
  else {
    if ((wVar1 == L'/') || ((wVar1 == L'\\' || (wVar1 == L':')))) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    _memset(&local_258,0,0x250);
    hFindFile = FindFirstFileExW(param_1,FindExInfoStandard,&local_258,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffff) {
      copy_and_add_argument_to_buffer<wchar_t>(param_1,(wchar_t *)0x0,0,param_3);
    }
    else {
      iVar3 = *(int *)(param_3 + 4) - *(int *)param_3 >> 2;
      do {
        if (((local_258.cFileName[0] != L'.') ||
            ((local_258.cFileName[1] != L'\0' &&
             ((local_258.cFileName[1] != L'.' || (local_258.cFileName[2] != L'\0')))))) &&
           (iVar4 = copy_and_add_argument_to_buffer<wchar_t>
                              (local_258.cFileName,param_1,
                               -(uint)bVar2 & ((int)param_2 - (int)param_1 >> 1) + 1U,param_3),
           iVar4 != 0)) goto LAB_0040cc52;
        BVar5 = FindNextFileW(hFindFile,&local_258);
      } while (BVar5 != 0);
      iVar4 = *(int *)(param_3 + 4) - *(int *)param_3 >> 2;
      if (iVar3 != iVar4) {
        _qsort((void *)(*(int *)param_3 + iVar3 * 4),iVar4 - iVar3,4,FUN_0040c8de);
      }
    }
LAB_0040cc52:
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}




/* Library Function - Single Match
    public: __thiscall `anonymous namespace'::argument_list<wchar_t>::~argument_list<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
_anon_FD16DE3C::argument_list<wchar_t>::~argument_list<wchar_t>(argument_list<wchar_t> *this)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)this; puVar1 != *(undefined4 **)(this + 4); puVar1 = puVar1 + 1) {
    FID_conflict__free((void *)*puVar1);
  }
  FID_conflict__free(*(void **)this);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall `anonymous namespace'::argument_list<wchar_t>::append(wchar_t * const)
    public: int __thiscall `anonymous namespace'::argument_list<wchar_t>::append(wchar_t * const)
   
   Library: Visual Studio 2015 Release */

int __thiscall append(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = expand_if_necessary((int *)this);
  if (iVar1 == 0) {
    **(undefined4 **)((int)this + 4) = param_1;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
    iVar1 = 0;
  }
  else {
    FID_conflict__free(param_1);
  }
  return iVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   
   Library: Visual Studio 2015 Release */

undefined4 __fastcall expand_if_necessary(int *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] == param_1[2]) {
    if (*param_1 == 0) {
      pvVar2 = __calloc_base(4,4);
      *param_1 = (int)pvVar2;
      FID_conflict__free((void *)0x0);
      iVar3 = *param_1;
      if (iVar3 != 0) {
        param_1[1] = iVar3;
        param_1[2] = iVar3 + 0x10;
        goto LAB_0040cd7f;
      }
    }
    else {
      uVar4 = param_1[2] - *param_1 >> 2;
      if (uVar4 < 0x80000000) {
        iVar3 = FUN_0040e592((void *)*param_1,uVar4 * 2,4);
        if (iVar3 == 0) {
          uVar1 = 0xc;
        }
        else {
          *param_1 = iVar3;
          param_1[1] = iVar3 + uVar4 * 4;
          param_1[2] = iVar3 + uVar4 * 8;
          uVar1 = 0;
        }
        FID_conflict__free((void *)0x0);
        return uVar1;
      }
    }
    uVar1 = 0xc;
  }
  else {
LAB_0040cd7f:
    uVar1 = 0;
  }
  return uVar1;
}




void __cdecl FUN_0040cdf8(wchar_t **param_1,wchar_t ***param_2)

{
  common_expand_argv_wildcards<wchar_t>(param_1,param_2);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall __crt_seh_guarded_call<void>::operator()<class
   <lambda_978dc153c237d78434369da87b74ff60>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &,class
   <lambda_4a8533e2866a575feecb8298ce776b0d> >(class <lambda_978dc153c237d78434369da87b74ff60>
   &&,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &,class
   <lambda_4a8533e2866a575feecb8298ce776b0d> &&)
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_978dc153c237d78434369da87b74ff60>,class_<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>&,class_<lambda_4a8533e2866a575feecb8298ce776b0d>_>
          (__crt_seh_guarded_call<void> *this,<lambda_978dc153c237d78434369da87b74ff60> *param_1,
          <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *param_2,
          <lambda_4a8533e2866a575feecb8298ce776b0d> *param_3)

{
  ___acrt_lock(*(int *)param_1);
  <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()(param_2);
  FUN_0040ce3a();
  return;
}




void FUN_0040ce3a(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* Library Function - Single Match
    void __cdecl __acrt_lock_and_call<class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> >(enum
   __acrt_lock_id,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &&)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__acrt_lock_and_call<class_<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
          (__acrt_lock_id param_1,<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *param_2)

{
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  __crt_seh_guarded_call<void> local_5;
  
  local_c = param_1;
  local_10 = param_1;
  __crt_seh_guarded_call<void>::
  operator()<class_<lambda_978dc153c237d78434369da87b74ff60>,class_<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>&,class_<lambda_4a8533e2866a575feecb8298ce776b0d>_>
            (&local_5,(<lambda_978dc153c237d78434369da87b74ff60> *)&local_10,param_2,
             (<lambda_4a8533e2866a575feecb8298ce776b0d> *)&local_c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __thiscall <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()
          (<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *this)

{
  int iVar1;
  
  _DAT_0041e248 = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 4);
  _DAT_0041e24c = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 8);
  _DAT_0041e244 = *(undefined4 *)(*(int *)(**(int **)this + 0x48) + 0x21c);
  _memcpy_s(&DAT_0041e250,0xc,(void *)(*(int *)(**(int **)this + 0x48) + 0xc),0xc);
  _memcpy_s(&DAT_0041d2c0,0x101,(void *)(*(int *)(**(int **)this + 0x48) + 0x18),0x101);
  _memcpy_s(&DAT_0041d3c8,0x100,(void *)(*(int *)(**(int **)this + 0x48) + 0x119),0x100);
  LOCK();
  iVar1 = *(int *)PTR_DAT_0041d6e8;
  *(int *)PTR_DAT_0041d6e8 = iVar1 + -1;
  UNLOCK();
  if ((iVar1 + -1 == 0) && ((undefined4 *)PTR_DAT_0041d6e8 != &DAT_0041d4c8)) {
    FID_conflict__free(PTR_DAT_0041d6e8);
  }
  PTR_DAT_0041d6e8 = *(undefined **)(**(int **)this + 0x48);
  LOCK();
  **(int **)(**(int **)this + 0x48) = **(int **)(**(int **)this + 0x48) + 1;
  UNLOCK();
  return;
}




/* Library Function - Single Match
    wchar_t const * __cdecl CPtoLocaleName(int)
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl CPtoLocaleName(int param_1)

{
  if (param_1 == 0x3a4) {
    return L"ja-JP";
  }
  if (param_1 == 0x3a8) {
    return L"zh-CN";
  }
  if (param_1 == 0x3b5) {
    return L"ko-KR";
  }
  if (param_1 != 0x3b6) {
    return (wchar_t *)0x0;
  }
  return L"zh-TW";
}




/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2015 Release */

int __cdecl getSystemCP(int param_1)

{
  int local_14;
  int local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)0x0);
  DAT_0041e25c = 0;
  if (param_1 == -2) {
    DAT_0041e25c = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_0041e25c = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_0041e25c = 1;
    param_1 = *(UINT *)(local_10 + 8);
  }
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return param_1;
}




/* Library Function - Single Match
    void __cdecl setSBCS(struct __crt_multibyte_data *)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBCS(__crt_multibyte_data *param_1)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  p_Var2 = param_1 + 0x18;
  _memset(p_Var2,0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  do {
    *p_Var2 = p_Var2[(int)&DAT_0041d4c8 - (int)param_1];
    p_Var2 = p_Var2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  p_Var2 = param_1 + 0x119;
  iVar1 = 0x100;
  do {
    *p_Var2 = p_Var2[(int)&DAT_0041d4c8 - (int)param_1];
    p_Var2 = p_Var2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* Library Function - Single Match
    void __cdecl setSBUpLow(struct __crt_multibyte_data *)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  BYTE *pBVar5;
  __crt_multibyte_data *p_Var6;
  _cpinfo local_71c;
  WORD local_708 [512];
  __crt_multibyte_data local_308 [256];
  __crt_multibyte_data local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_71c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      p_Var6 = param_1 + uVar4 + 0x119;
      if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) + 0x20 < (__crt_multibyte_data *)0x1a) {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + ' ');
LAB_0040d1b4:
        *p_Var6 = _Var2;
      }
      else {
        if (p_Var6 + (-0x61 - (int)(param_1 + 0x119)) < (__crt_multibyte_data *)0x1a) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = (__crt_multibyte_data)((char)uVar4 + -0x20);
          goto LAB_0040d1b4;
        }
        *p_Var6 = (__crt_multibyte_data)0x0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pBVar5 = local_71c.LeadByte;
    local_108[0] = ' ';
    while (local_71c.LeadByte[0] != 0) {
      bVar1 = pBVar5[1];
      for (uVar4 = (uint)local_71c.LeadByte[0]; (uVar4 <= bVar1 && (uVar4 < 0x100));
          uVar4 = uVar4 + 1) {
        local_108[uVar4] = ' ';
      }
      pBVar5 = pBVar5 + 2;
      local_71c.LeadByte[0] = *pBVar5;
    }
    ___acrt_GetStringTypeA
              ((__crt_locale_pointers *)0x0,1,local_108,0x100,local_708,*(UINT *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x21c),0x100,local_108,0x100,
               (char *)local_208,0x100,*(int *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x21c),0x200,local_108,0x100,
               (char *)local_308,0x100,*(int *)(param_1 + 4),0);
    uVar4 = 0;
    do {
      if ((local_708[uVar4] & 1) == 0) {
        if ((local_708[uVar4] & 2) != 0) {
          param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x20);
          _Var2 = local_308[uVar4];
          goto LAB_0040d15b;
        }
        param_1[uVar4 + 0x119] = (__crt_multibyte_data)0x0;
      }
      else {
        param_1[uVar4 + 0x19] = (__crt_multibyte_data)((byte)param_1[uVar4 + 0x19] | 0x10);
        _Var2 = local_208[uVar4];
LAB_0040d15b:
        param_1[uVar4 + 0x119] = _Var2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    int __cdecl setmbcp_internal(int,bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl setmbcp_internal(int param_1,bool param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  __crt_multibyte_data *p_Var6;
  __acrt_ptd **local_10 [2];
  __acrt_ptd *local_8;
  
  local_8 = ___acrt_getptd();
  ___acrt_update_thread_multibyte_data();
  local_10[0] = (__acrt_ptd **)getSystemCP(param_1);
  if (local_10[0] == *(__acrt_ptd ***)(*(int *)(local_8 + 0x48) + 4)) {
    return 0;
  }
  p_Var2 = (__crt_multibyte_data *)__malloc_base(0x220);
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    puVar5 = *(undefined4 **)(local_8 + 0x48);
    p_Var6 = p_Var2;
    for (iVar4 = 0x88; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)p_Var6 = *puVar5;
      puVar5 = puVar5 + 1;
      p_Var6 = p_Var6 + 4;
    }
    *(undefined4 *)p_Var2 = 0;
    iVar4 = __setmbcp_nolock((int)local_10[0],p_Var2);
    if (iVar4 != -1) {
      if (!param_2) {
        ___acrt_set_locale_changed();
      }
      piVar3 = *(int **)(local_8 + 0x48);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(undefined4 **)(local_8 + 0x48) != &DAT_0041d4c8)) {
        FID_conflict__free(*(void **)(local_8 + 0x48));
      }
      *(undefined4 *)p_Var2 = 1;
      p_Var6 = (__crt_multibyte_data *)0x0;
      *(__crt_multibyte_data **)(local_8 + 0x48) = p_Var2;
      if ((((byte)local_8[0x350] & 2) == 0) && (((byte)DAT_0041d748 & 1) == 0)) {
        local_10[0] = &local_8;
        __acrt_lock_and_call<class_<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>_>
                  (5,(<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> *)local_10);
        if (param_2) {
          PTR_DAT_0041d1c4 = PTR_DAT_0041d6e8;
        }
      }
      goto LAB_0040d253;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  iVar4 = -1;
  p_Var6 = p_Var2;
LAB_0040d253:
  FID_conflict__free(p_Var6);
  return iVar4;
}




undefined4 FUN_0040d2dd(void)

{
  int in_EAX;
  
  if (DAT_0041e260 == '\0') {
    in_EAX = setmbcp_internal(-3,true);
    DAT_0041e260 = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_update_thread_multibyte_data
   
   Library: Visual Studio 2015 Release */

int * ___acrt_update_thread_multibyte_data(void)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int *_Memory;
  
  p_Var2 = ___acrt_getptd();
  if (((*(uint *)(p_Var2 + 0x350) & DAT_0041d748) == 0) || (*(int *)(p_Var2 + 0x4c) == 0)) {
    ___acrt_lock(5);
    _Memory = *(int **)(p_Var2 + 0x48);
    if (_Memory != (int *)PTR_DAT_0041d6e8) {
      if (_Memory != (int *)0x0) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (_Memory != &DAT_0041d4c8)) {
          FID_conflict__free(_Memory);
        }
      }
      *(undefined **)(p_Var2 + 0x48) = PTR_DAT_0041d6e8;
      _Memory = (int *)PTR_DAT_0041d6e8;
      LOCK();
      *(int *)PTR_DAT_0041d6e8 = *(int *)PTR_DAT_0041d6e8 + 1;
      UNLOCK();
    }
    FUN_0040d38c();
  }
  else {
    _Memory = *(int **)(p_Var2 + 0x48);
  }
  if (_Memory == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  return _Memory;
}




void FUN_0040d38c(void)

{
  ___acrt_unlock(5);
  return;
}




/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2015 Release */

void __cdecl __setmbcp_nolock(int param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  __crt_multibyte_data *p_Var7;
  wchar_t *pwVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  uint uVar13;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  uVar3 = getSystemCP(param_1);
  if (uVar3 != 0) {
    uVar13 = 0;
    uVar4 = 0;
    local_20 = 0;
LAB_0040d3db:
    if (*(uint *)((int)&DAT_0041d1d0 + uVar4) != uVar3) goto code_r0x0040d3e7;
    _memset(param_2 + 0x18,0,0x101);
    pbVar9 = &DAT_0041d1e0 + local_20 * 0x30;
    do {
      bVar1 = *pbVar9;
      pbVar11 = pbVar9;
      while ((bVar1 != 0 && (bVar1 = pbVar11[1], bVar1 != 0))) {
        for (uVar4 = (uint)*pbVar11; (uVar4 <= bVar1 && (uVar4 < 0x100)); uVar4 = uVar4 + 1) {
          param_2[uVar4 + 0x19] =
               (__crt_multibyte_data)((byte)param_2[uVar4 + 0x19] | (&DAT_0041d1cc)[uVar13]);
          bVar1 = pbVar11[1];
        }
        pbVar11 = pbVar11 + 2;
        bVar1 = *pbVar11;
      }
      uVar13 = uVar13 + 1;
      pbVar9 = pbVar9 + 8;
    } while (uVar13 < 4);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar8 = CPtoLocaleName(uVar3);
    *(wchar_t **)(param_2 + 0x21c) = pwVar8;
    p_Var7 = param_2 + 0xc;
    puVar12 = (undefined2 *)(&DAT_0041d1d4 + local_20 * 0x30);
    iVar10 = 6;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *(undefined2 *)p_Var7 = uVar2;
      p_Var7 = p_Var7 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_0040d574;
  }
  setSBCS(param_2);
LAB_0040d57e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x0040d3e7:
  local_20 = local_20 + 1;
  uVar4 = uVar4 + 0x30;
  if (0xef < uVar4) goto code_r0x0040d3f5;
  goto LAB_0040d3db;
code_r0x0040d3f5:
  if (((uVar3 != 65000) && (uVar3 != 0xfde9)) &&
     (BVar5 = IsValidCodePage(uVar3 & 0xffff), BVar5 != 0)) {
    BVar5 = GetCPInfo(uVar3,&local_1c);
    if (BVar5 == 0) {
      if (DAT_0041e25c != 0) {
        setSBCS(param_2);
      }
    }
    else {
      _memset(param_2 + 0x18,0,0x101);
      *(uint *)(param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 0x21c) = 0;
      if (local_1c.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        pBVar6 = local_1c.LeadByte;
        while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar6[1], bVar1 != 0))) {
          for (uVar3 = (uint)*pBVar6; uVar3 <= bVar1; uVar3 = uVar3 + 1) {
            param_2[uVar3 + 0x19] = (__crt_multibyte_data)((byte)param_2[uVar3 + 0x19] | 4);
          }
          pBVar6 = pBVar6 + 2;
          local_1c.LeadByte[0] = *pBVar6;
        }
        p_Var7 = param_2 + 0x1a;
        iVar10 = 0xfe;
        do {
          *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 8);
          p_Var7 = p_Var7 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pwVar8 = CPtoLocaleName(*(int *)(param_2 + 4));
        *(wchar_t **)(param_2 + 0x21c) = pwVar8;
        *(undefined4 *)(param_2 + 8) = 1;
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
LAB_0040d574:
      setSBUpLow(param_2);
    }
  }
  goto LAB_0040d57e;
}




/* Library Function - Single Match
    _memcpy_s
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
    eVar1 = 0;
  }
  else if (_Dst == (void *)0x0) {
    piVar2 = __errno();
    eVar1 = 0x16;
    *piVar2 = 0x16;
    FUN_00407d49();
  }
  else if ((_Src == (void *)0x0) || (_DstSize < _MaxCount)) {
    _memset(_Dst,0,_DstSize);
    if (_Src == (void *)0x0) {
      piVar2 = __errno();
      eVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
    }
    *piVar2 = eVar1;
    FUN_00407d49();
  }
  else {
    FUN_00405180((uint *)_Dst,(uint *)_Src,_MaxCount);
    eVar1 = 0;
  }
  return eVar1;
}




/* Library Function - Single Match
    wchar_t const * __cdecl find_end_of_double_null_terminated_sequence(wchar_t const * const)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

wchar_t * __cdecl find_end_of_double_null_terminated_sequence(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar2 = param_1;
    do {
      wVar1 = *pwVar2;
      pwVar2 = pwVar2 + 1;
    } while (wVar1 != L'\0');
    param_1 = param_1 + ((int)pwVar2 - (int)(param_1 + 1) >> 1) + 1;
    wVar1 = *param_1;
  }
  return param_1 + 1;
}




uint * FUN_0040d65f(void)

{
  size_t sVar1;
  LPWCH pWVar2;
  wchar_t *pwVar3;
  uint *puVar4;
  
  pWVar2 = GetEnvironmentStringsW();
  if (pWVar2 == (LPWCH)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    pwVar3 = find_end_of_double_null_terminated_sequence(pWVar2);
    sVar1 = ((int)pwVar3 - (int)pWVar2 >> 1) * 2;
    puVar4 = (uint *)__malloc_base(sVar1);
    if (puVar4 != (uint *)0x0) {
      FUN_00405180(puVar4,(uint *)pWVar2,sVar1);
    }
    FID_conflict__free((void *)0x0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return puVar4;
}




/* Library Function - Single Match
    void * __cdecl try_get_function(enum `anonymous namespace'::function_id,char const * const,enum
   A0x9b56aee1::module_id const * const,enum A0x9b56aee1::module_id const * const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  uint *puVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  uint uVar3;
  byte bVar4;
  void *pvVar5;
  
  puVar1 = &DAT_0041e2d0 + param_1;
  bVar4 = (byte)DAT_0041d004 & 0x1f;
  pvVar5 = (void *)((DAT_0041d004 ^ *puVar1) >> bVar4 | (DAT_0041d004 ^ *puVar1) << 0x20 - bVar4);
  if (pvVar5 != (void *)0xffffffff) {
    if (pvVar5 != (void *)0x0) {
      return pvVar5;
    }
    if (param_3 != param_4) {
      do {
        hModule = try_get_module(*param_3);
        if (hModule != (HMODULE)0x0) goto LAB_0040d707;
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hModule = (HMODULE)0x0;
LAB_0040d707:
    if ((hModule != (HMODULE)0x0) &&
       (pFVar2 = GetProcAddress(hModule,param_2), pFVar2 != (FARPROC)0x0)) {
      uVar3 = __crt_fast_encode_pointer<>((uint)pFVar2);
      LOCK();
      *puVar1 = uVar3;
      UNLOCK();
      return pFVar2;
    }
    bVar4 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
    LOCK();
    *puVar1 = (0xffffffffU >> bVar4 | -1 << 0x20 - bVar4) ^ DAT_0041d004;
    UNLOCK();
  }
  return (void *)0x0;
}




/* Library Function - Multiple Matches With Same Base Name
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
   
   Library: Visual Studio 2015 Release */

HMODULE __cdecl try_get_module(int param_1)

{
  uint *puVar1;
  uint uVar2;
  LPCWSTR lpLibFileName;
  HMODULE hLibModule;
  DWORD DVar3;
  
  puVar1 = &DAT_0041e280 + param_1;
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_appmodel_runtime_l1_1_00416c68)[param_1];
    hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
    if (hLibModule == (HMODULE)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x57) {
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
      }
      else {
        hLibModule = (HMODULE)0x0;
      }
      if (hLibModule == (HMODULE)0x0) {
        LOCK();
        *puVar1 = 0xffffffff;
        UNLOCK();
        return (HMODULE)0x0;
      }
    }
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = (uint)hLibModule;
    UNLOCK();
    if (uVar2 != 0) {
      FreeLibrary(hLibModule);
    }
  }
  else {
    hLibModule = (HMODULE)(-(uint)(uVar2 != 0xffffffff) & uVar2);
  }
  return hLibModule;
}




/* Library Function - Single Match
    ___acrt_FlsAlloc@4
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsAlloc_4(undefined4 param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(3,"FlsAlloc",(module_id *)&DAT_004171b0,(module_id *)"FlsAlloc")
  ;
  if (pcVar2 == (code *)0x0) {
    TlsAlloc();
  }
  else {
    guard_check_icall();
    (*pcVar2)(param_1);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_FlsFree@4
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsFree_4(DWORD param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(4,"FlsFree",(module_id *)&DAT_004171c4,(module_id *)"FlsFree");
  if (pcVar2 == (code *)0x0) {
    TlsFree(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_FlsGetValue@4
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsGetValue_4(DWORD param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(5,"FlsGetValue",(module_id *)&DAT_004171d4,
                                    (module_id *)"FlsGetValue");
  if (pcVar2 == (code *)0x0) {
    TlsGetValue(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_FlsSetValue@8
   
   Library: Visual Studio 2015 Release */

void ___acrt_FlsSetValue_8(DWORD param_1,LPVOID param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(6,"FlsSetValue",(module_id *)&DAT_004171e8,
                                    (module_id *)"FlsSetValue");
  if (pcVar2 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar2)();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_InitializeCriticalSectionEx@12
   
   Library: Visual Studio 2015 Release */

void ___acrt_InitializeCriticalSectionEx_12
               (LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(0x14,"InitializeCriticalSectionEx",(module_id *)&DAT_00417218,
                                    (module_id *)"InitializeCriticalSectionEx");
  if (pcVar2 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    guard_check_icall();
    (*pcVar2)(param_1,param_2,param_3);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_LCMapStringEx@36
   
   Library: Visual Studio 2015 Release */

void ___acrt_LCMapStringEx_36
               (wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
               int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  code *pcVar2;
  LCID Locale;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(0x16,"LCMapStringEx",(module_id *)&DAT_0041723c,
                                    (module_id *)"LCMapStringEx");
  if (pcVar2 == (code *)0x0) {
    Locale = ___acrt_LocaleNameToLCID_8(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    guard_check_icall();
    (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Library: Visual Studio 2015 Release */

void ___acrt_LocaleNameToLCID_8(wchar_t *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  pcVar2 = (code *)try_get_function(0x18,"LocaleNameToLCID",(module_id *)&DAT_00417254,
                                    (module_id *)"LocaleNameToLCID");
  if (pcVar2 == (code *)0x0) {
    ___acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    guard_check_icall();
    (*pcVar2)(param_1,param_2);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_is_packaged_app
   
   Library: Visual Studio 2015 Release */

void __fastcall ___acrt_is_packaged_app(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  if (DAT_0041e350 == 0) {
    pcVar1 = (code *)try_get_function(8,"GetCurrentPackageId",(module_id *)&DAT_004171fc,
                                      (module_id *)"GetCurrentPackageId");
    if (pcVar1 != (code *)0x0) {
      local_c = 0;
      puVar3 = &local_c;
      uVar4 = 0;
      guard_check_icall();
      iVar2 = (*pcVar1)(puVar3,uVar4);
      if (iVar2 == 0x7a) {
        LOCK();
        DAT_0041e350 = 1;
        UNLOCK();
        goto LAB_0040db06;
      }
    }
    LOCK();
    DAT_0041e350 = 2;
    UNLOCK();
  }
LAB_0040db06:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __cdecl ___acrt_uninitialize_winapi_thunks(char param_1)

{
  int *piVar1;
  
  if (param_1 == '\0') {
    piVar1 = &DAT_0041e280;
    do {
      if (*piVar1 != 0) {
        if (*piVar1 != -1) {
          FreeLibrary((HMODULE)*piVar1);
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != &DAT_0041e2d0);
  }
  return 1;
}




/* Library Function - Single Match
    ___acrt_lowio_create_handle_array
   
   Library: Visual Studio 2015 Release */

undefined4 * ___acrt_lowio_create_handle_array(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)__calloc_base(0x40,0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else if (puVar2 != puVar2 + 0x300) {
    puVar3 = puVar2 + 8;
    do {
      ___acrt_InitializeCriticalSectionEx_12((LPCRITICAL_SECTION)(puVar3 + -8),4000,0);
      puVar3[-2] = 0xffffffff;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar1 = puVar3 + 4;
      puVar3[2] = 0xa0a0000;
      *(undefined1 *)(puVar3 + 3) = 10;
      *(byte *)((int)puVar3 + 0xd) = *(byte *)((int)puVar3 + 0xd) & 0xf8;
      *(undefined1 *)((int)puVar3 + 0xe) = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar1 != puVar2 + 0x300);
  }
  FID_conflict__free((void *)0x0);
  return puVar2;
}




/* Library Function - Single Match
    ___acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = param_1;
    if (param_1 != param_1 + 0x80) {
      do {
        DeleteCriticalSection(lpCriticalSection);
        lpCriticalSection = lpCriticalSection + 2;
      } while (lpCriticalSection != param_1 + 0x80);
    }
    FID_conflict__free(param_1);
  }
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___acrt_lowio_ensure_fh_exists(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 < 0x2000) {
    uVar4 = 0;
    ___acrt_lock(7);
    iVar5 = 0;
    iVar3 = DAT_0041e100;
    while (iVar3 <= (int)param_1) {
      if ((&DAT_0041df00)[iVar5] == 0) {
        puVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_0041df00)[iVar5] = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          uVar4 = 0xc;
          break;
        }
        iVar3 = DAT_0041e100 + 0x40;
        DAT_0041e100 = iVar3;
      }
      iVar5 = iVar5 + 1;
    }
    FUN_0040dc88();
  }
  else {
    piVar1 = __errno();
    uVar4 = 9;
    *piVar1 = 9;
    FUN_00407d49();
  }
  return uVar4;
}




void FUN_0040dc88(void)

{
  ___acrt_unlock(7);
  return;
}




/* Library Function - Single Match
    ___acrt_lowio_lock_fh
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_lowio_lock_fh(uint param_1)

{
  EnterCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x30 + (&DAT_0041df00)[(int)param_1 >> 6]));
  return;
}




/* Library Function - Single Match
    ___acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_lowio_unlock_fh(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)((param_1 & 0x3f) * 0x30 + (&DAT_0041df00)[(int)param_1 >> 6]));
  return;
}




/* Library Function - Single Match
    __free_osfhnd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_0041e100)) {
    iVar4 = (param_1 & 0x3fU) * 0x30;
    if (((*(byte *)(iVar4 + 0x28 + (&DAT_0041df00)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar4 + 0x18 + (&DAT_0041df00)[param_1 >> 6]) != -1)) {
      iVar1 = FUN_004094e4();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040dd3d;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040dd3d:
      *(undefined4 *)(iVar4 + 0x18 + (&DAT_0041df00)[param_1 >> 6]) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = __errno();
  *piVar2 = 9;
  puVar3 = ___doserrno();
  *puVar3 = 0;
  return -1;
}




/* Library Function - Single Match
    __get_osfhandle
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041e100)) {
      iVar3 = (_FileHandle & 0x3fU) * 0x30;
      if ((*(byte *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + iVar3) & 1) != 0) {
        return *(intptr_t *)((&DAT_0041df00)[_FileHandle >> 6] + 0x18 + iVar3);
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00407d49();
  }
  return -1;
}




/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2015 Release */

ushort * __cdecl ___pctype_func(void)

{
  __acrt_ptd *p_Var1;
  undefined4 *local_8;
  
  p_Var1 = ___acrt_getptd();
  local_8 = *(undefined4 **)(p_Var1 + 0x4c);
  ___acrt_update_locale_info((int)p_Var1,(int *)&local_8);
  return (ushort *)*local_8;
}




/* Library Function - Single Match
    ___acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_locale_free_monetary(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_0041d704) {
      FID_conflict__free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_0041d708) {
      FID_conflict__free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_0041d70c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_0041d710) {
      FID_conflict__free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_0041d714) {
      FID_conflict__free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_0041d718) {
      FID_conflict__free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_0041d71c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_0041d730) {
      FID_conflict__free(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_0041d734) {
      FID_conflict__free(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_0041d738) {
      FID_conflict__free(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_0041d73c) {
      FID_conflict__free(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_0041d740) {
      FID_conflict__free(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_0041d744) {
      FID_conflict__free(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}




/* Library Function - Single Match
    ___acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_locale_free_numeric(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_0041d6f8) {
      FID_conflict__free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_0041d6fc) {
      FID_conflict__free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_0041d700) {
      FID_conflict__free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_0041d728) {
      FID_conflict__free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_0041d72c) {
      FID_conflict__free((undefined *)param_1[0xd]);
    }
  }
  return;
}




/* Library Function - Single Match
    void __cdecl free_crt_array_internal(void const * * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl free_crt_array_internal(void **param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ~-(uint)(param_1 + param_2 < param_1) &
          (uint)((int)(param_1 + param_2) + (3 - (int)param_1)) >> 2;
  if (uVar1 != 0) {
    do {
      FID_conflict__free(*param_1);
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}




/* Library Function - Single Match
    ___acrt_locale_free_time
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_locale_free_time(void **param_1)

{
  if (param_1 != (void **)0x0) {
    free_crt_array_internal(param_1,7);
    free_crt_array_internal(param_1 + 7,7);
    free_crt_array_internal(param_1 + 0xe,0xc);
    free_crt_array_internal(param_1 + 0x1a,0xc);
    free_crt_array_internal(param_1 + 0x26,2);
    FID_conflict__free(param_1[0x28]);
    FID_conflict__free(param_1[0x29]);
    FID_conflict__free(param_1[0x2a]);
    free_crt_array_internal(param_1 + 0x2d,7);
    free_crt_array_internal(param_1 + 0x34,7);
    free_crt_array_internal(param_1 + 0x3b,0xc);
    free_crt_array_internal(param_1 + 0x47,0xc);
    free_crt_array_internal(param_1 + 0x53,2);
    FID_conflict__free(param_1[0x55]);
    FID_conflict__free(param_1[0x56]);
    FID_conflict__free(param_1[0x57]);
    FID_conflict__free(param_1[0x58]);
  }
  return;
}




/* Library Function - Single Match
    _wcspbrk
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl _wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar1 = _Control;
        wVar2 = *_Control;
        do {
          if (wVar2 == *_Str) {
            return _Str;
          }
          pwVar1 = pwVar1 + 1;
          wVar2 = *pwVar1;
        } while (wVar2 != L'\0');
      }
      _Str = _Str + 1;
    } while (*_Str != L'\0');
  }
  return (wchar_t *)0x0;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___acrt_GetStringTypeA
   
   Library: Visual Studio 2015 Release */

void __cdecl
___acrt_GetStringTypeA
          (__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,
          UINT param_6,int param_7)

{
  uint _Size;
  LPCWSTR lpWideCharStr;
  int cchSrc;
  LPCWSTR pWVar1;
  int local_1c;
  int local_18;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_18 + 8);
  }
  local_c = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (local_c == 0) goto LAB_0040e1bb;
  _Size = local_c * 2;
  if ((_Size + 8 & -(uint)(_Size < _Size + 8)) == 0) {
    lpWideCharStr = (LPCWSTR)0x0;
LAB_0040e17c:
    if (lpWideCharStr != (LPCWSTR)0x0) {
      _memset(lpWideCharStr,0,_Size);
      cchSrc = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,local_c);
      if (cchSrc != 0) {
        GetStringTypeW(param_2,lpWideCharStr,cchSrc,param_5);
      }
    }
  }
  else if ((-(uint)(_Size < _Size + 8) & _Size + 8) < 0x401) {
    pWVar1 = (LPCWSTR)&stack0xffffffd8;
    lpWideCharStr = (LPCWSTR)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_0040e175:
      lpWideCharStr = pWVar1 + 4;
      goto LAB_0040e17c;
    }
  }
  else {
    lpWideCharStr = (LPCWSTR)__malloc_base(-(uint)(_Size < _Size + 8) & _Size + 8);
    if (lpWideCharStr != (LPCWSTR)0x0) {
      lpWideCharStr[0] = L'\xdddd';
      lpWideCharStr[1] = L'\0';
      pWVar1 = lpWideCharStr;
      goto LAB_0040e175;
    }
  }
  __freea_crt((int)lpWideCharStr);
LAB_0040e1bb:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    __freea_crt
   
   Library: Visual Studio 2015 Release */

void __cdecl __freea_crt(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + -8) == 0xdddd)) {
    FID_conflict__free((int *)(param_1 + -8));
  }
  return;
}




/* Library Function - Single Match
    ___acrt_add_locale_ref
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_add_locale_ref(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined4 *)(param_1 + 0x28);
  iVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_0041d1c8) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ___acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x9c));
  return;
}




/* Library Function - Single Match
    ___acrt_free_locale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_free_locale(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  if ((((*(undefined ***)((int)param_1 + 0x88) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0x88) != &PTR_DAT_0041d6f8)) &&
      (*(int **)((int)param_1 + 0x7c) != (int *)0x0)) && (**(int **)((int)param_1 + 0x7c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x84);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      ___acrt_locale_free_monetary(*(int *)((int)param_1 + 0x88));
    }
    piVar1 = *(int **)((int)param_1 + 0x80);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      ___acrt_locale_free_numeric(*(undefined4 **)((int)param_1 + 0x88));
    }
    FID_conflict__free(*(void **)((int)param_1 + 0x7c));
    FID_conflict__free(*(void **)((int)param_1 + 0x88));
  }
  if ((*(int **)((int)param_1 + 0x8c) != (int *)0x0) && (**(int **)((int)param_1 + 0x8c) == 0)) {
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x90) + -0xfe));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x94) + -0x80));
    FID_conflict__free((void *)(*(int *)((int)param_1 + 0x98) + -0x80));
    FID_conflict__free(*(void **)((int)param_1 + 0x8c));
  }
  ___acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((int)param_1 + 0x9c));
  puVar2 = (undefined4 *)((int)param_1 + 0xa0);
  local_8 = 6;
  puVar3 = (undefined4 *)((int)param_1 + 0x28);
  do {
    if ((((undefined *)puVar3[-2] != &DAT_0041d1c8) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FID_conflict__free(piVar1);
      FID_conflict__free((void *)*puVar2);
    }
    if (((puVar3[-3] != 0) && (piVar1 = (int *)puVar3[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FID_conflict__free(piVar1);
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FID_conflict__free(param_1);
  return;
}




/* Library Function - Single Match
    ___acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __cdecl ___acrt_locale_add_lc_time_reference(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00416ac0)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + 1;
    UNLOCK();
    return puVar2 + 1;
  }
  return (undefined *)0x7fffffff;
}




/* Library Function - Single Match
    ___acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl ___acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00416ac0)) &&
     (param_1[0x2c] == (undefined *)0x0)) {
    ___acrt_locale_free_time(param_1);
    FID_conflict__free(param_1);
  }
  return;
}




/* Library Function - Single Match
    ___acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __cdecl ___acrt_locale_release_lc_time_reference(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_00416ac0)) {
    LOCK();
    ppuVar1 = param_1 + 0x2c;
    puVar2 = *ppuVar1;
    *ppuVar1 = *ppuVar1 + -1;
    UNLOCK();
    return puVar2 + -1;
  }
  return (undefined *)0x7fffffff;
}




/* Library Function - Single Match
    ___acrt_release_locale_ref
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_release_locale_ref(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0x7c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x84);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x8c);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)(param_1 + 0x28);
    iVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_0041d1c8) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    ___acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x9c));
  }
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_update_thread_locale_data
   
   Library: Visual Studio 2015 Release */

undefined ** ___acrt_update_thread_locale_data(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  
  p_Var1 = ___acrt_getptd();
  if (((*(uint *)(p_Var1 + 0x350) & DAT_0041d748) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x4c), ppuVar2 == (undefined **)0x0)) {
    ___acrt_lock(4);
    ppuVar2 = __updatetlocinfoEx_nolock((undefined4 *)(p_Var1 + 0x4c),DAT_0041defc);
    FUN_0040e531();
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return ppuVar2;
}




void FUN_0040e531(void)

{
  ___acrt_unlock(4);
  return;
}




/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2015 Release */

undefined ** __cdecl __updatetlocinfoEx_nolock(undefined4 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined4 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      ___acrt_add_locale_ref((int)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (___acrt_release_locale_ref((int)ppuVar1), ppuVar1[3] == (undefined *)0x0)) &&
         (ppuVar1 != &PTR_DAT_0041d108)) {
        ___acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}




void FUN_0040e592(void *param_1,uint param_2,uint param_3)

{
  __recalloc_base(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    __recalloc_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __cdecl __recalloc_base(void *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  size_t sVar3;
  uint uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    if (param_1 == (void *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = FID_conflict___msize_base(param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar2 = __realloc_base(param_1,uVar4);
    if ((pvVar2 != (LPVOID)0x0) && (sVar3 < uVar4)) {
      _memset((void *)((int)pvVar2 + sVar3),0,uVar4 - sVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}




/* Library Function - Single Match
    ___acrt_execute_initializers
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_execute_initializers(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar4 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  puVar5 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        guard_check_icall();
        cVar3 = (*pcVar2)();
        if (cVar3 == '\0') break;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != param_2);
    if ((puVar5 != param_2) && (puVar5 != param_1)) {
      puVar5 = puVar5 + -1;
      do {
        if ((puVar5[-1] != 0) && (pcVar2 = (code *)*puVar5, pcVar2 != (code *)0x0)) {
          uVar6 = 0;
          guard_check_icall();
          (*pcVar2)(uVar6);
        }
        puVar1 = puVar5 + -1;
        puVar5 = puVar5 + -2;
      } while (puVar1 != param_1);
    }
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    ___acrt_execute_uninitializers
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_execute_uninitializers(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  if (param_1 != param_2) {
    puVar4 = param_2 + -1;
    do {
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        uVar5 = 0;
        guard_check_icall();
        (*pcVar2)(uVar5);
      }
      puVar1 = puVar4 + -1;
      puVar4 = puVar4 + -2;
    } while (puVar1 != param_1);
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Same Base Name
    public: void (__cdecl*__thiscall __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_a048d3beccc847880fc8490e18b82769>,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &,class
   <lambda_f7496a158712204296dd6628a163878e> >(class <lambda_a048d3beccc847880fc8490e18b82769>
   &&,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &,class
   <lambda_f7496a158712204296dd6628a163878e> &&))(int)
    public: void (__cdecl*__thiscall __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_cbab9ec6f41b0180b23cc171c22676b0>,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &,class
   <lambda_4b292cb8dd18144e164572427af410ab> >(class <lambda_cbab9ec6f41b0180b23cc171c22676b0>
   &&,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &,class
   <lambda_4b292cb8dd18144e164572427af410ab> &&))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

uint operator()<>(int *param_1)

{
  byte bVar1;
  uint uVar2;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_0041d004 & 0x1f;
  uVar2 = DAT_0041d004 ^ _DAT_0041e36c;
  FUN_0040e743();
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}




void FUN_0040e743(void)

{
  int unaff_EBP;
  
  ___acrt_unlock(**(int **)(unaff_EBP + 0x10));
  return;
}




/* Library Function - Single Match
    void (__cdecl*__cdecl __acrt_lock_and_call<class <lambda_ec61778202f4f5fc7e7711acc23c3bca>
   >(enum __acrt_lock_id,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &&))(int)
   
   Library: Visual Studio 2015 Release */

_func_void_int * __cdecl
__acrt_lock_and_call<class_<lambda_ec61778202f4f5fc7e7711acc23c3bca>_>
          (__acrt_lock_id param_1,<lambda_ec61778202f4f5fc7e7711acc23c3bca> *param_2)

{
  _func_void_int *p_Var1;
  __acrt_lock_id local_10;
  __acrt_lock_id local_c;
  
  local_c = param_1;
  local_10 = param_1;
  p_Var1 = (_func_void_int *)operator()<>((int *)&local_10);
  return p_Var1;
}




/* Library Function - Single Match
    void (__cdecl** __cdecl get_global_action_nolock(int))(int)
   
   Library: Visual Studio 2015 Release */

_func_void_int ** __cdecl get_global_action_nolock(int param_1)

{
  if (param_1 == 2) {
    return (_func_void_int **)&DAT_0041e364;
  }
  if (param_1 != 6) {
    if (param_1 == 0xf) {
      return (_func_void_int **)&DAT_0041e370;
    }
    if (param_1 == 0x15) {
      return (_func_void_int **)&DAT_0041e368;
    }
    if (param_1 != 0x16) {
      return (_func_void_int **)0x0;
    }
  }
  return (_func_void_int **)&DAT_0041e36c;
}




/* Library Function - Single Match
    struct __crt_signal_action_t * __cdecl siglookup(int,struct __crt_signal_action_t * const)
   
   Library: Visual Studio 2015 Release */

__crt_signal_action_t * __cdecl siglookup(int param_1,__crt_signal_action_t *param_2)

{
  __crt_signal_action_t *p_Var1;
  
  p_Var1 = param_2 + 0x90;
  if (param_2 != p_Var1) {
    do {
      if (*(int *)(param_2 + 4) == param_1) {
        return param_2;
      }
      param_2 = param_2 + 0xc;
    } while (param_2 != p_Var1);
  }
  return (__crt_signal_action_t *)0x0;
}




/* Library Function - Single Match
    ___acrt_get_sigabrt_handler
   
   Library: Visual Studio 2015 Release */

void ___acrt_get_sigabrt_handler(void)

{
  <lambda_ec61778202f4f5fc7e7711acc23c3bca> local_5;
  
  __acrt_lock_and_call<class_<lambda_ec61778202f4f5fc7e7711acc23c3bca>_>(3,&local_5);
  return;
}




/* Library Function - Single Match
    ___acrt_initialize_signal_handlers
   
   Library: Visual Studio 2015 Release */

void __cdecl ___acrt_initialize_signal_handlers(_func_void_int *param_1)

{
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041e364,param_1);
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041e368,param_1);
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041e36c,param_1);
  __crt_state_management::dual_state_global<void_(__cdecl*)(int)>::initialize
            ((dual_state_global<void_(__cdecl*)(int)> *)&DAT_0041e370,param_1);
  return;
}




int FUN_0040e833(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = ___acrt_getptd();
  return (int)(p_Var1 + 8);
}




/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2015 Release */

int __cdecl _raise(int _SigNum)

{
  __crt_signal_action_t *p_Var1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char extraout_CL;
  char cVar5;
  byte bVar6;
  _func_void_int *p_Var7;
  __acrt_ptd *p_Var8;
  int iVar9;
  undefined4 local_38;
  int local_34;
  char local_21;
  
  p_Var8 = (__acrt_ptd *)0x0;
  local_38 = 0;
  local_21 = '\x01';
  if (8 < _SigNum) {
    if (_SigNum == 0xb) goto LAB_0040e896;
    if ((_SigNum == 0xf) || ((0x14 < _SigNum && (_SigNum < 0x17)))) goto LAB_0040e88b;
LAB_0040e8c1:
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00407d49();
    goto LAB_0040ea3e;
  }
  if (_SigNum == 8) {
LAB_0040e896:
    p_Var8 = ___acrt_getptd_noexit();
    if (p_Var8 == (__acrt_ptd *)0x0) goto LAB_0040ea3e;
    p_Var1 = siglookup(_SigNum,*(__crt_signal_action_t **)p_Var8);
    if (p_Var1 == (__crt_signal_action_t *)0x0) goto LAB_0040e8c1;
    p_Var1 = p_Var1 + 8;
    cVar5 = '\0';
    local_21 = '\0';
  }
  else {
    if (_SigNum != 2) {
      if (_SigNum == 4) goto LAB_0040e896;
      if (_SigNum != 6) goto LAB_0040e8c1;
    }
LAB_0040e88b:
    p_Var1 = (__crt_signal_action_t *)get_global_action_nolock(_SigNum);
    cVar5 = extraout_CL;
  }
  local_34 = 0;
  if (cVar5 != '\0') {
    ___acrt_lock(3);
    cVar5 = local_21;
  }
  if (cVar5 == '\0') {
    p_Var7 = *(_func_void_int **)p_Var1;
    local_21 = '\0';
  }
  else {
    bVar6 = (byte)DAT_0041d004 & 0x1f;
    p_Var7 = (_func_void_int *)
             ((DAT_0041d004 ^ (uint)*(_func_void_int **)p_Var1) >> bVar6 |
             (DAT_0041d004 ^ (uint)*(_func_void_int **)p_Var1) << 0x20 - bVar6);
  }
  if (p_Var7 != (_func_void_int *)0x1) {
    if (p_Var7 == (_func_void_int *)0x0) {
      if (local_21 != '\0') {
        ___acrt_unlock(3);
      }
      __exit(3);
    }
    if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
      local_34 = *(int *)(p_Var8 + 4);
      *(int *)(p_Var8 + 4) = 0;
      if (_SigNum == 8) {
        puVar3 = (undefined4 *)FUN_0040e833();
        local_38 = *puVar3;
        puVar3 = (undefined4 *)FUN_0040e833();
        *puVar3 = 0x8c;
        goto LAB_0040e97d;
      }
    }
    else {
LAB_0040e97d:
      if (_SigNum == 8) {
        iVar9 = *(int *)p_Var8;
        for (iVar4 = iVar9 + 0x24; iVar4 != iVar9 + 0x90; iVar4 = iVar4 + 0xc) {
          *(undefined4 *)(iVar4 + 8) = 0;
        }
        goto LAB_0040e9bf;
      }
    }
    bVar6 = 0x20 - ((byte)DAT_0041d004 & 0x1f) & 0x1f;
    *(_func_void_int **)p_Var1 =
         (_func_void_int *)((0U >> bVar6 | 0 << 0x20 - bVar6) ^ DAT_0041d004);
  }
LAB_0040e9bf:
  FUN_0040e9fc();
  if (p_Var7 != (_func_void_int *)0x1) {
    if (_SigNum == 8) {
      ___acrt_getptd();
      iVar9 = 8;
      guard_check_icall();
      (*p_Var7)(iVar9);
    }
    else {
      iVar9 = _SigNum;
      guard_check_icall();
      (*p_Var7)(iVar9);
      if ((_SigNum != 0xb) && (_SigNum != 4)) goto LAB_0040ea3e;
    }
    *(int *)(p_Var8 + 4) = local_34;
    if (_SigNum == 8) {
      p_Var8 = ___acrt_getptd();
      *(undefined4 *)(p_Var8 + 8) = local_38;
    }
  }
LAB_0040ea3e:
  iVar9 = FUN_004145e9();
  return iVar9;
}




void FUN_0040e9fc(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x1d) != '\0') {
    ___acrt_unlock(3);
  }
  return;
}




/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___hw_cw_sse2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_1 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2015 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  if (DAT_0041dbd4 < 1) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar2 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
    }
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar1 = uVar1 | uVar2;
    MXCSR = MXCSR & 0xffffffc0;
  }
  return uVar1;
}




/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2015 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  uVar1 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar3 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar3 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar3 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar3 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  uVar4 = ~_Mask & uVar1 | _NewValue & _Mask;
  if (uVar4 != uVar1) {
    uVar1 = __hw_cw(uVar4);
    uVar4 = 0;
    if ((uVar1 & 1) != 0) {
      uVar4 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar2 = uVar1 & 0xc00;
    if ((uVar1 & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar2 == 0x800) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        uVar4 = uVar4 | 0x300;
      }
    }
    if ((uVar1 & 0x300) == 0) {
      uVar4 = uVar4 | 0x20000;
    }
    else if ((uVar1 & 0x300) == 0x200) {
      uVar4 = uVar4 | 0x10000;
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar4 = uVar4 | 0x40000;
    }
  }
  uVar1 = uVar4;
  if (0 < DAT_0041dbd4) {
    uVar2 = 0;
    if ((char)MXCSR < '\0') {
      uVar2 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar1 = MXCSR & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar1 = MXCSR & 0x8040;
    if (uVar1 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar1 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar1 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
    uVar1 = ~(_Mask & 0x308031f) & uVar2 | _Mask & 0x308031f & _NewValue;
    if (uVar1 != uVar2) {
      uVar1 = ___hw_cw_sse2(uVar1);
      ___set_fpsr_sse2(uVar1);
      uVar2 = 0;
      if ((char)MXCSR < '\0') {
        uVar2 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar2 = uVar2 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar2 = uVar2 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar2 = uVar2 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar2 = uVar2 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      uVar1 = MXCSR & 0x6000;
      if (uVar1 != 0) {
        if (uVar1 == 0x2000) {
          uVar2 = uVar2 | 0x100;
        }
        else if (uVar1 == 0x4000) {
          uVar2 = uVar2 | 0x200;
        }
        else if (uVar1 == 0x6000) {
          uVar2 = uVar2 | 0x300;
        }
      }
      uVar1 = MXCSR & 0x8040;
      if (uVar1 == 0x40) {
        uVar2 = uVar2 | 0x2000000;
      }
      else if (uVar1 == 0x8000) {
        uVar2 = uVar2 | 0x3000000;
      }
      else if (uVar1 == 0x8040) {
        uVar2 = uVar2 | 0x1000000;
      }
    }
    uVar1 = uVar2 | uVar4;
    if (((uVar2 ^ uVar4) & 0x8031f) != 0) {
      uVar1 = uVar1 | 0x80000000;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2015 Release */

uint __cdecl __hw_cw(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}




/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2015 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  uint in_ECX;
  WCHAR local_c;
  undefined2 uStack_a;
  uint local_8;
  
  if (_C == 0xffff) {
LAB_0040ef7d:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_8._0_2_ = *(ushort *)(PTR_DAT_0041d6ec + (uint)_C * 2);
    }
    else {
      _local_c = CONCAT22((short)(in_ECX >> 0x10),_C);
      local_8 = in_ECX & 0xffff0000;
      BVar2 = GetStringTypeW(1,&local_c,1,(LPWORD)&local_8);
      if (BVar2 == 0) goto LAB_0040ef7d;
    }
    uVar1 = (uint)((ushort)local_8 & _Type);
  }
  return uVar1;
}




/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  int local_24;
  localeinfo_struct local_20;
  char local_18;
  CHAR local_14;
  CHAR local_13;
  undefined1 local_12;
  WORD local_10 [4];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,(__crt_locale_pointers *)_Locale);
  if (0x100 < _C + 1U) {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_20);
    if (iVar1 == 0) {
      local_13 = '\0';
      iVar1 = 1;
      local_14 = (CHAR)_C;
    }
    else {
      local_12 = 0;
      iVar1 = 2;
      local_14 = (CHAR)((uint)_C >> 8);
      local_13 = (CHAR)_C;
    }
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    iVar1 = ___acrt_GetStringTypeA
                      ((__crt_locale_pointers *)&local_20,1,&local_14,iVar1,local_10,
                       (local_20.locinfo)->lc_collate_cp,1);
    if (iVar1 == 0) {
      if (local_18 != '\0') {
        *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
      }
      goto LAB_0040f08a;
    }
  }
  if (local_18 != '\0') {
    *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
  }
LAB_0040f08a:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}




/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2015 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14;
  int *local_10;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  uVar1 = *(ushort *)(*local_10 + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __acrt_LCMapStringA_stat(struct __crt_locale_pointers *,wchar_t const *,unsigned
   long,char const *,int,char *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_LCMapStringA_stat
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LPCWSTR pWVar5;
  LPCWSTR lpWideCharStr;
  LPCWSTR pWVar6;
  
  uVar2 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  iVar4 = param_5;
  if (0 < param_5) {
    iVar3 = ___strncnt(param_4,param_5);
    iVar4 = iVar3 + 1;
    if (param_5 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*(int *)param_1 + 8);
  }
  iVar3 = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,iVar4,(LPWSTR)0x0,0);
  if (iVar3 == 0) goto LAB_0040f2ca;
  uVar1 = iVar3 * 2;
  if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
    lpWideCharStr = (LPCWSTR)0x0;
LAB_0040f19f:
    if (((lpWideCharStr != (LPCWSTR)0x0) &&
        (iVar4 = MultiByteToWideChar(param_8,1,param_4,iVar4,lpWideCharStr,iVar3), iVar4 != 0)) &&
       (iVar4 = ___acrt_LCMapStringEx_36(param_2,param_3,lpWideCharStr,iVar3,(LPWSTR)0x0,0,0,0,0),
       iVar4 != 0)) {
      if ((param_3 & 0x400) == 0) {
        uVar1 = iVar4 * 2;
        if ((uVar1 + 8 & -(uint)(uVar1 < uVar1 + 8)) == 0) {
          pWVar5 = (LPCWSTR)0x0;
LAB_0040f27c:
          if ((pWVar5 != (LPCWSTR)0x0) &&
             (iVar3 = ___acrt_LCMapStringEx_36
                                (param_2,param_3,lpWideCharStr,iVar3,pWVar5,iVar4,0,0,0), iVar3 != 0
             )) {
            if (param_7 == 0) {
              param_7 = 0;
              param_6 = (LPSTR)0x0;
            }
            iVar4 = WideCharToMultiByte(param_8,0,pWVar5,iVar4,param_6,param_7,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
            if (iVar4 != 0) {
              __freea_crt((int)pWVar5);
              goto LAB_0040f2c1;
            }
          }
        }
        else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
          pWVar6 = (LPCWSTR)&stack0xffffffe8;
          pWVar5 = (LPCWSTR)&stack0xffffffe8;
          if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0040f275:
            pWVar5 = pWVar6 + 4;
            goto LAB_0040f27c;
          }
        }
        else {
          pWVar5 = (LPCWSTR)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
          if (pWVar5 != (LPCWSTR)0x0) {
            pWVar5[0] = L'\xdddd';
            pWVar5[1] = L'\0';
            pWVar6 = pWVar5;
            goto LAB_0040f275;
          }
        }
        __freea_crt((int)pWVar5);
      }
      else if ((param_7 != 0) && (iVar4 <= param_7)) {
        ___acrt_LCMapStringEx_36(param_2,param_3,lpWideCharStr,iVar3,(LPWSTR)param_6,param_7,0,0,0);
      }
    }
  }
  else if ((-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8) < 0x401) {
    pWVar5 = (LPCWSTR)&stack0xffffffe8;
    lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
    if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0040f198:
      lpWideCharStr = pWVar5 + 4;
      goto LAB_0040f19f;
    }
  }
  else {
    pWVar5 = (LPCWSTR)__malloc_base(-(uint)(uVar1 < uVar1 + 8) & uVar1 + 8);
    lpWideCharStr = pWVar5;
    if (pWVar5 != (LPCWSTR)0x0) {
      pWVar5[0] = L'\xdddd';
      pWVar5[1] = L'\0';
      goto LAB_0040f198;
    }
  }
LAB_0040f2c1:
  __freea_crt((int)lpWideCharStr);
LAB_0040f2ca:
  iVar4 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar4;
}




/* Library Function - Single Match
    ___acrt_LCMapStringA
   
   Library: Visual Studio 2015 Release */

void __cdecl
___acrt_LCMapStringA
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  int local_14;
  __crt_locale_pointers local_10 [8];
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __acrt_LCMapStringA_stat(local_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  if (local_8 != '\0') {
    *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  }
  return;
}




/* Library Function - Single Match
    ___acrt_fp_strflt_to_string
   
   Library: Visual Studio 2015 Release */

int __cdecl ___acrt_fp_strflt_to_string(uint *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    *(undefined1 *)param_1 = 0;
    iVar7 = param_3;
    if (param_3 < 1) {
      iVar7 = 0;
    }
    if (param_2 <= iVar7 + 1U) {
      piVar2 = __errno();
      iVar7 = 0x22;
      goto LAB_0040f34e;
    }
    if (param_4 != 0) {
      pcVar3 = (char *)((int)param_1 + 1);
      pcVar6 = *(char **)(param_4 + 8);
      *(undefined1 *)param_1 = 0x30;
      if (0 < param_3) {
        do {
          cVar5 = *pcVar6;
          if (cVar5 == '\0') {
            cVar5 = '0';
          }
          else {
            pcVar6 = pcVar6 + 1;
          }
          *pcVar3 = cVar5;
          pcVar3 = pcVar3 + 1;
          param_3 = param_3 + -1;
        } while (0 < param_3);
      }
      *pcVar3 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if ((char)*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        puVar4 = (uint *)((int)param_1 + 1);
        do {
          uVar1 = *puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
        } while ((char)uVar1 != '\0');
        FUN_00405700(param_1,(uint *)((int)param_1 + 1),
                     (uint)((int)puVar4 + (1 - ((int)param_1 + 2))));
      }
      return 0;
    }
  }
  piVar2 = __errno();
  iVar7 = 0x16;
LAB_0040f34e:
  *piVar2 = iVar7;
  FUN_00407d49();
  return iVar7;
}




/* Library Function - Single Match
    public: __thiscall `anonymous namespace'::scoped_fp_state_reset::scoped_fp_state_reset(void)
   
   Library: Visual Studio 2015 Release */

scoped_fp_state_reset * __thiscall
_anon_3568B024::scoped_fp_state_reset::scoped_fp_state_reset(scoped_fp_state_reset *this)

{
  fegetenv((uint *)this);
  if (((byte)*(undefined4 *)this & 0x1f) == 0x1f) {
    this[8] = (scoped_fp_state_reset)0x0;
  }
  else {
    feholdexcept((uint *)this);
    this[8] = (scoped_fp_state_reset)0x1;
  }
  return this;
}




/* WARNING: Removing unreachable block (ram,0x0040f787) */
/* WARNING: Removing unreachable block (ram,0x0040f762) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::divide(struct __crt_strtox::big_integer &,struct
   __crt_strtox::big_integer const &)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl __crt_strtox::divide(big_integer *param_1,big_integer *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  uint uVar5;
  big_integer *pbVar6;
  uint uVar7;
  big_integer *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_21c [460];
  big_integer *pbStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  int iStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_2c;
  int iStack_28;
  uint local_24;
  int local_20;
  int iStack_1c;
  uint uStack_18;
  big_integer *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    return 0;
  }
  local_3c = *(uint *)param_2;
  if (local_3c == 0) {
    return 0;
  }
  local_10 = iVar1 - 1;
  uVar7 = local_3c - 1;
  if (uVar7 == 0) {
    local_2c = *(uint *)(param_2 + 4);
    if (local_2c == 1) {
      uVar7 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
      return (__uint64)uVar7;
    }
    if (local_10 == 0) {
      uVar7 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
      uVar5 = uVar7 % local_2c;
      *(uint *)(param_1 + 4) = uVar5;
      *(uint *)param_1 = (uint)(uVar5 != 0);
      return (ulonglong)uVar7 / (ulonglong)local_2c;
    }
    uVar7 = 0;
    local_c = 0;
    local_8 = 0;
    local_14 = (big_integer *)0x0;
    if (local_10 != 0xffffffff) {
      pbVar6 = param_1 + iVar1 * 4;
      local_20 = iVar1;
      do {
        uVar12 = __aulldvrm(*(uint *)pbVar6,uVar7,local_2c,0);
        uStack_48 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),(undefined4)uStack_48);
        pbVar6 = pbVar6 + -4;
        local_14 = param_1;
        local_8 = local_c;
        local_20 = local_20 + -1;
        uVar7 = extraout_ECX;
        local_c = (int)uVar12;
      } while (local_20 != 0);
      local_20 = 0;
    }
    *(undefined4 *)param_1 = 0;
    _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
    *(uint *)(param_1 + 4) = uVar7;
    *(big_integer **)(param_1 + 8) = local_14;
    *(uint *)param_1 = (local_14 != (big_integer *)0x0) + 1;
    return CONCAT44(local_8,local_c);
  }
  if (uVar7 <= local_10) {
    local_20 = local_10 - uVar7;
    if (local_20 <= (int)local_10) {
      pbVar6 = param_1 + iVar1 * 4;
      pbVar8 = param_2 + (local_10 - local_20) * 4 + 4;
      uVar7 = local_10;
      do {
        if (*(int *)pbVar8 != *(int *)pbVar6) {
          if (*(uint *)(param_1 + uVar7 * 4 + 4) <= *(uint *)(param_2 + (uVar7 - local_20) * 4 + 4))
          goto LAB_0040f5d6;
          break;
        }
        uVar7 = uVar7 - 1;
        pbVar8 = pbVar8 + -4;
        pbVar6 = pbVar6 + -4;
      } while (local_20 <= (int)uVar7);
    }
    local_20 = local_20 + 1;
LAB_0040f5d6:
    if (local_20 != 0) {
      uStack_38 = *(uint *)(param_2 + local_3c * 4);
      local_24 = *(uint *)(param_2 + local_3c * 4 + -4);
      iStack_28 = 0x1f;
      if (uStack_38 != 0) {
        for (; uStack_38 >> iStack_28 == 0; iStack_28 = iStack_28 + -1) {
        }
      }
      if (uStack_38 == 0) {
        iStack_28 = 0x20;
      }
      else {
        iStack_28 = 0x1f - iStack_28;
      }
      iStack_40 = 0x20 - iStack_28;
      if (iStack_28 != 0) {
        uVar7 = local_24 >> ((byte)iStack_40 & 0x1f);
        local_24 = local_24 << ((byte)iStack_28 & 0x1f);
        uStack_38 = uStack_38 << ((byte)iStack_28 & 0x1f) | uVar7;
        if (2 < local_3c) {
          local_24 = local_24 | *(uint *)(param_2 + local_3c * 4 + -8) >> ((byte)iStack_40 & 0x1f);
        }
      }
      uStack_4c = 0;
      local_20 = local_20 + -1;
      if (local_20 < 0) {
        uVar10 = 0;
        uStack_4c = 0;
      }
      else {
        local_14 = param_1 + local_20 * 4 + 4;
        local_c = local_20 + local_3c;
        pbStack_50 = param_1 + local_c * 4 + -4;
        uVar10 = uStack_4c;
        do {
          uStack_4c = uVar10;
          if (local_10 < local_c) {
            uStack_34 = 0;
          }
          else {
            uStack_34 = *(uint *)(pbStack_50 + 8);
          }
          uVar7 = *(uint *)(pbStack_50 + 4);
          uStack_18 = *(uint *)pbStack_50;
          local_2c = 0;
          local_8 = uStack_34;
          if (iStack_28 != 0) {
            uVar7 = uStack_18 >> ((byte)iStack_40 & 0x1f);
            lVar13 = __allshl((byte)iStack_28,uStack_34);
            local_8 = (uint)((ulonglong)lVar13 >> 0x20);
            uVar7 = uVar7 | (uint)lVar13;
            uStack_18 = uStack_18 << ((byte)iStack_28 & 0x1f);
            if (2 < local_c) {
              uStack_18 = uStack_18 |
                          *(uint *)(param_1 + (local_3c + local_20) * 4 + -8) >>
                          ((byte)iStack_40 & 0x1f);
            }
          }
          uStack_48 = __aulldvrm(uVar7,local_8,uStack_38,0);
          iStack_1c = (int)(uStack_48 >> 0x20);
          local_8 = (uint)uStack_48;
          local_2c = 0;
          uVar14 = (ulonglong)extraout_ECX_00;
          if (iStack_1c != 0) {
            lVar13 = __allmul((uint)(uStack_48 - 0xffffffff),(int)(uStack_48 - 0xffffffff >> 0x20),
                              uStack_38,0);
            uVar14 = lVar13 + uVar14;
            local_2c = (uint)(uVar14 >> 0x20);
            uStack_48 = 0xffffffff;
          }
          iStack_1c = (int)(uStack_48 >> 0x20);
          uVar7 = (uint)uVar14;
          uVar2 = uStack_48;
          if ((int)(uVar14 >> 0x20) == 0) {
            while( true ) {
              uVar5 = (uint)uStack_48;
              local_8 = uStack_18;
              uVar14 = __allmul(local_24,0,uVar5,(int)(uStack_48 >> 0x20));
              if (uVar14 <= CONCAT44(uVar7,local_8)) break;
              bVar11 = uVar5 != 0;
              uVar5 = uVar5 - 1;
              iStack_1c = iStack_1c + -1 + (uint)bVar11;
              bVar11 = CARRY4(uVar7,uStack_38);
              uVar7 = uVar7 + uStack_38;
              uStack_48 = CONCAT44(iStack_1c,uVar5);
              if (local_2c + bVar11 != 0) break;
              local_2c = 0;
            }
            uVar2 = CONCAT44(iStack_1c,uVar5);
          }
          if (uVar2 != 0) {
            uVar5 = 0;
            uVar7 = 0;
            if (local_3c != 0) {
              pbVar8 = param_2 + 4;
              local_10 = local_3c;
              pbVar6 = local_14;
              do {
                lVar13 = (uStack_48 & 0xffffffff) * (ulonglong)*(uint *)pbVar8;
                uVar3 = (uint)lVar13;
                uVar9 = uVar5 + uVar3;
                uVar5 = uVar7 + (int)((ulonglong)lVar13 >> 0x20) + uStack_48._4_4_ * *(uint *)pbVar8
                        + (uint)CARRY4(uVar5,uVar3);
                uVar7 = 0;
                if (*(uint *)pbVar6 < uVar9) {
                  bVar11 = 0xfffffffe < uVar5;
                  uVar5 = uVar5 + 1;
                  uVar7 = (uint)bVar11;
                }
                *(uint *)pbVar6 = *(uint *)pbVar6 - uVar9;
                pbVar6 = pbVar6 + 4;
                pbVar8 = pbVar8 + 4;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            if ((uVar7 != 0) || (uStack_34 < uVar5)) {
              if (local_3c != 0) {
                uVar5 = 0;
                pbVar8 = local_14;
                uVar7 = local_3c;
                pbVar6 = param_2;
                do {
                  pbVar6 = pbVar6 + 4;
                  uVar3 = *(uint *)pbVar8;
                  uVar9 = *(uint *)pbVar6;
                  uVar4 = uVar3 + *(uint *)pbVar6;
                  *(uint *)pbVar8 = uVar4 + uVar5;
                  uVar5 = (uint)CARRY4(uVar3,uVar9) + (uint)CARRY4(uVar4,uVar5);
                  uVar7 = uVar7 - 1;
                  pbVar8 = pbVar8 + 4;
                } while (uVar7 != 0);
              }
              uVar2 = uVar2 - 1;
            }
            local_10 = local_c - 1;
          }
          iStack_1c = (int)(uVar2 >> 0x20);
          uVar10 = (undefined4)uVar2;
          local_14 = local_14 + -4;
          local_20 = local_20 + -1;
          pbStack_50 = pbStack_50 + -4;
          local_c = local_c - 1;
        } while (-1 < local_20);
      }
      uVar7 = local_10 + 1;
      if (uVar7 < *(uint *)param_1) {
        pbVar6 = param_1 + (local_10 + 2) * 4;
        uVar5 = uVar7;
        do {
          *(undefined4 *)pbVar6 = 0;
          pbVar6 = pbVar6 + 4;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)param_1);
      }
      *(uint *)param_1 = uVar7;
      while ((uVar7 != 0 && (*(int *)(param_1 + *(int *)param_1 * 4) == 0))) {
        uVar7 = *(int *)param_1 - 1;
        *(uint *)param_1 = uVar7;
      }
      return CONCAT44(uStack_4c,uVar10);
    }
  }
  return 0;
}




/* Library Function - Single Match
    ___acrt_fltout
   
   Library: Visual Studio 2015 Release */

void __cdecl
___acrt_fltout(int param_1,uint param_2,int param_3,int *param_4,char *param_5,rsize_t param_6)

{
  byte bVar1;
  ulonglong uVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  __acrt_fp_class _Var6;
  rsize_t rVar7;
  uint uVar8;
  errno_t eVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_EDX;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  uint uVar19;
  float10 fVar20;
  ulonglong uVar21;
  longlong lVar22;
  __uint64 _Var23;
  char *_Src;
  double dVar24;
  uint auStack_964 [115];
  scoped_fp_state_reset local_798 [8];
  char local_790;
  int local_788;
  int *local_784;
  char *local_780;
  char *local_77c;
  uint uStack_778;
  uint *local_774;
  uint local_770;
  undefined8 local_76c;
  uint *puStack_764;
  uint *local_760;
  uint *puStack_75c;
  uint *puStack_758;
  uint *local_754;
  uint *local_750;
  undefined1 uStack_749;
  uint *puStack_748;
  uint auStack_744 [115];
  uint *local_578;
  uint local_574 [115];
  uint *puStack_3a8;
  uint auStack_3a4 [115];
  uint *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  pcVar17 = param_5;
  piVar4 = param_4;
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_784 = param_4;
  local_780 = param_5;
  _anon_3568B024::scoped_fp_state_reset::scoped_fp_state_reset(local_798);
  uVar10 = param_2;
  iVar11 = param_1;
  cVar5 = '-';
  if ((param_2 & 0x80000000) == 0) {
    cVar5 = ' ';
  }
  *piVar4 = (int)cVar5;
  piVar4[2] = (int)pcVar17;
  if (((param_2 & 0x7ff00000) == 0) && (param_1 == 0 && (param_2 & 0xfffff) == 0)) {
    _Src = "0";
    local_784[1] = 0;
  }
  else {
    _Var6 = __acrt_fp_classify((double *)&param_1);
    if (_Var6 != 0) {
      local_784[1] = 1;
    }
    if (_Var6 == 1) {
      _Src = "1#INF";
    }
    else if (_Var6 == 2) {
      _Src = "1#QNAN";
    }
    else if (_Var6 == 3) {
      _Src = "1#SNAN";
    }
    else {
      if (_Var6 != 4) {
        param_2 = uVar10 & 0x7fffffff;
        local_788 = 0;
        local_77c = (char *)(param_3 + 1);
        uVar21 = CONCAT44(uVar10,iVar11) & 0x7fffffffffffffff;
        local_76c._4_4_ = (uint)(uVar21 >> 0x20);
        uVar10 = local_76c._4_4_ >> 0x14;
        if (uVar10 != 0) {
          iVar13 = 0x100000;
        }
        else {
          iVar13 = 0;
        }
        local_76c._0_4_ = (uint)uVar21;
        uVar8 = (uint)local_76c;
        uVar19 = (local_76c._4_4_ & 0xfffff) + iVar13;
        puVar14 = (uint *)(uVar10 + ((uVar10 == 0) - 0x433));
        param_1 = iVar11;
        local_76c = uVar21;
        local_750 = puVar14;
        fVar20 = (float10)FUN_004117c0();
        dVar24 = (double)fVar20;
        FUN_004118d0(dVar24);
        uVar21 = FUN_00414790((int)((ulonglong)dVar24 >> 0x20),extraout_EDX);
        local_770 = (uint)uVar21;
        if ((local_770 == 0x7fffffff) || (local_770 == 0x80000000)) {
          local_770 = 0;
        }
        local_1d4[0] = uVar8;
        local_1d4[1] = uVar19;
        uVar10 = (uint)(uVar19 != 0);
        puVar12 = (uint *)(uVar10 + 1);
        local_1d8 = puVar12;
        if ((int)puVar14 < 0) {
          if (puVar14 == (uint *)0xfffffc02) {
LAB_0040ff70:
            uVar10 = local_1d4[uVar10];
            local_76c = local_76c & 0xffffffff;
            iVar11 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            if (uVar10 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            uStack_749 = iVar11 == 0x20;
            if ((puVar12 == (uint *)0x73) && ((bool)uStack_749)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (((uint *)0x73 < puVar12) || (bVar3)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              puVar15 = (uint *)0x72;
              if (puVar12 < (uint *)0x72) {
                puVar15 = puVar12;
              }
              if (puVar15 != (uint *)0xffffffff) {
                puVar18 = local_1d4 + (int)puVar15;
                puVar16 = puVar15;
                puStack_758 = puVar18;
                do {
                  if (puVar16 < puVar12) {
                    local_754 = (uint *)*puVar18;
                  }
                  else {
                    local_754 = (uint *)0x0;
                  }
                  if ((uint *)((int)puVar16 + -1) < puVar12) {
                    uVar10 = puVar18[-1];
                  }
                  else {
                    uVar10 = 0;
                  }
                  puVar18 = puVar18 + -1;
                  puVar16 = (uint *)((int)puVar16 + -1);
                  *puStack_758 = uVar10 >> 0x1f ^ (int)local_754 * 2;
                  puStack_758 = puStack_758 + -1;
                  puVar12 = local_1d8;
                  puVar14 = local_750;
                } while (puVar16 != (uint *)0xffffffff);
              }
              local_1d8 = puVar15;
              if ((bool)uStack_749) {
                local_1d8 = (uint *)((int)puVar15 + 1);
              }
            }
            uVar10 = 1U - (int)puVar14 >> 5;
            _memset(local_574,0,uVar10 * 4);
            local_574[uVar10] = 1 << ((byte)(1U - (int)puVar14) & 0x1f);
          }
          else {
            local_574[0] = 0;
            puVar15 = (uint *)0x2;
            local_574[1] = 0x100000;
            local_578 = (uint *)0x2;
            if (puVar12 != (uint *)0x2) goto LAB_0040ff70;
            iVar11 = 0;
            do {
              if (*(int *)((int)local_574 + iVar11) != *(int *)((int)local_1d4 + iVar11))
              goto LAB_0040ff70;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 8);
            local_76c = local_76c & 0xffffffff;
            iVar11 = 0x1f;
            if (uVar19 != 0) {
              for (; uVar19 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            if (uVar19 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            uStack_749 = 0x20U - iVar11 < 2;
            puVar14 = local_1d4 + 2;
            puStack_758 = puVar14;
            do {
              if (puVar15 < puVar12) {
                local_754 = (uint *)*puVar14;
              }
              else {
                local_754 = (uint *)0x0;
              }
              if ((uint *)((int)puVar15 + -1) < puVar12) {
                uVar10 = puVar14[-1];
              }
              else {
                uVar10 = 0;
              }
              puVar14 = puVar14 + -1;
              puVar15 = (uint *)((int)puVar15 + -1);
              *puStack_758 = uVar10 >> 0x1e ^ (int)local_754 << 2;
              puStack_758 = puStack_758 + -1;
              puVar12 = local_1d8;
            } while (puVar15 != (uint *)0xffffffff);
            local_1d8 = (uint *)((byte)uStack_749 + 2);
            puStack_75c = (uint *)(2 - (int)local_750);
            uVar10 = (uint)puStack_75c >> 5;
            _memset(local_574,0,uVar10 * 4);
            local_574[uVar10] = 1 << ((byte)puStack_75c & 0x1f);
          }
          local_578 = (uint *)(uVar10 + 1);
          puStack_3a8 = local_578;
          _memcpy_s(auStack_3a4,0x1cc,local_574,(int)local_578 * 4);
        }
        else {
          local_574[0] = 0;
          local_574[1] = 0x100000;
          local_578 = (uint *)0x2;
          if (puVar12 == (uint *)0x2) {
            iVar11 = 0;
            do {
              if (*(int *)((int)local_574 + iVar11) != *(int *)((int)local_1d4 + iVar11))
              goto LAB_0040fc80;
              iVar11 = iVar11 + 4;
            } while (iVar11 != 8);
            local_760 = (uint *)((int)local_750 + 2U & 0x1f);
            local_774 = (uint *)(0x20 - (int)local_760);
            puVar14 = (uint *)((int)local_750 + 2U >> 5);
            local_754 = puVar14;
            lVar22 = __allshl((byte)local_774,0);
            local_76c = local_76c & 0xffffffff;
            puStack_75c = (uint *)((int)lVar22 + -1);
            iVar11 = 0x1f;
            if (uVar19 != 0) {
              for (; uVar19 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            uStack_778 = ~(uint)puStack_75c;
            if (uVar19 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            puStack_758 = (uint *)((int)puVar14 + 2);
            uStack_749 = (uint *)(0x20 - iVar11) < local_760;
            if ((puStack_758 == (uint *)0x73) && ((bool)uStack_749)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((0x73 < puStack_758) || (bVar3)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              if (0x71 < puStack_758) {
                puStack_758 = (uint *)0x72;
              }
              puStack_764 = puStack_758;
              if (puStack_758 != (uint *)0xffffffff) {
                puVar15 = (uint *)((int)puStack_758 - (int)local_754);
                local_750 = local_1d4 + (int)puVar15;
                do {
                  puVar14 = local_754;
                  if (puStack_764 < local_754) break;
                  if (puVar15 < puVar12) {
                    uVar10 = *local_750;
                  }
                  else {
                    uVar10 = 0;
                  }
                  if ((uint *)((int)puVar15 + -1) < puVar12) {
                    uVar19 = local_750[-1];
                  }
                  else {
                    uVar19 = 0;
                  }
                  local_1d4[(int)puStack_764] =
                       (uVar19 & uStack_778) >> ((byte)local_774 & 0x1f) |
                       (uVar10 & (uint)puStack_75c) << ((byte)local_760 & 0x1f);
                  puStack_764 = (uint *)((int)puStack_764 + -1);
                  puVar15 = (uint *)((int)puVar15 + -1);
                  local_750 = local_750 + -1;
                  puVar12 = local_1d8;
                } while (puStack_764 != (uint *)0xffffffff);
              }
              if (puVar14 != (uint *)0x0) {
                puVar12 = local_1d4;
                for (; puVar14 != (uint *)0x0; puVar14 = (uint *)((int)puVar14 + -1)) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
              }
              local_1d8 = puStack_758;
              if ((bool)uStack_749) {
                local_1d8 = (uint *)((int)puStack_758 + 1);
              }
            }
            local_574[0] = 4;
          }
          else {
LAB_0040fc80:
            local_754 = (uint *)((int)local_750 + 1U & 0x1f);
            local_774 = (uint *)(0x20 - (int)local_754);
            puVar14 = (uint *)((int)local_750 + 1U >> 5);
            local_750 = puVar14;
            lVar22 = __allshl((byte)local_774,0);
            uVar10 = local_1d4[uVar10];
            puStack_75c = (uint *)((int)lVar22 + -1);
            local_76c = local_76c & 0xffffffff;
            iVar11 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            uStack_778 = ~(uint)puStack_75c;
            if (uVar10 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 1;
            }
            puStack_764 = (uint *)((int)puVar12 + (int)puVar14);
            uStack_749 = (uint *)(0x20 - iVar11) < local_754;
            if ((puStack_764 == (uint *)0x73) && ((bool)uStack_749)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (((uint *)0x73 < puStack_764) || (bVar3)) {
              local_578 = (uint *)0x0;
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_574,0);
            }
            else {
              if ((uint *)0x71 < puStack_764) {
                puStack_764 = (uint *)0x72;
              }
              puStack_758 = puStack_764;
              if (puStack_764 != (uint *)0xffffffff) {
                puVar15 = (uint *)((int)puStack_764 - (int)local_750);
                local_760 = local_1d4 + (int)puVar15;
                do {
                  puVar14 = local_750;
                  if (puStack_758 < local_750) break;
                  if (puVar15 < puVar12) {
                    uVar10 = *local_760;
                  }
                  else {
                    uVar10 = 0;
                  }
                  if ((uint *)((int)puVar15 + -1) < puVar12) {
                    uVar19 = local_760[-1];
                  }
                  else {
                    uVar19 = 0;
                  }
                  local_760 = local_760 + -1;
                  local_1d4[(int)puStack_758] =
                       (uVar10 & (uint)puStack_75c) << ((byte)local_754 & 0x1f) |
                       (uVar19 & uStack_778) >> ((byte)local_774 & 0x1f);
                  puStack_758 = (uint *)((int)puStack_758 + -1);
                  puVar15 = (uint *)((int)puVar15 + -1);
                  puVar12 = local_1d8;
                } while (puStack_758 != (uint *)0xffffffff);
              }
              if (puVar14 != (uint *)0x0) {
                puVar12 = local_1d4;
                for (; puVar14 != (uint *)0x0; puVar14 = (uint *)((int)puVar14 + -1)) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
              }
              local_1d8 = puStack_764;
              if ((bool)uStack_749) {
                local_1d8 = (uint *)((int)puStack_764 + 1);
              }
            }
            local_574[0] = 2;
          }
          puStack_3a8 = (uint *)0x1;
          local_574[1] = 0;
          local_578 = (uint *)0x1;
          _memcpy_s(auStack_3a4,0x1cc,local_574,4);
        }
        uStack_778 = 10;
        if ((int)local_770 < 0) {
          puStack_75c = (uint *)(-local_770 % 10);
          for (puStack_758 = (uint *)(-local_770 / 10); puStack_758 != (uint *)0x0;
              puStack_758 = (uint *)((int)puStack_758 - (int)local_750)) {
            local_750 = puStack_758;
            if ((uint *)0x26 < puStack_758) {
              local_750 = (uint *)0x26;
            }
            uVar10 = (uint)(byte)(&DAT_00418386)[(int)local_750 * 4];
            bVar1 = (&DAT_00418387)[(int)local_750 * 4];
            local_578 = (uint *)(uVar10 + bVar1);
            _memset(local_574,0,uVar10 * 4);
            FUN_00405180(local_574 + uVar10,
                         (uint *)(&UNK_00417a80 +
                                 (uint)*(ushort *)(&UNK_00418384 + (int)local_750 * 4) * 4),
                         (uint)bVar1 << 2);
            uVar10 = local_1d4[0];
            puStack_764 = local_578;
            if (local_578 < (uint *)0x2) {
              if (local_574[0] == 0) {
LAB_004105f9:
                local_1d8 = (uint *)0x0;
                rVar7 = 0;
                puVar14 = auStack_964;
                goto LAB_00410885;
              }
              if ((local_574[0] == 1) || (local_1d8 == (uint *)0x0)) goto LAB_00410896;
              uVar19 = 0;
              local_76c = CONCAT44(local_1d8,(uint)local_76c);
              puVar14 = (uint *)0x0;
              do {
                lVar22 = (ulonglong)local_574[0] * (ulonglong)local_1d4[(int)puVar14] +
                         (ulonglong)uVar19;
                local_1d4[(int)puVar14] = (uint)lVar22;
                uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                puVar14 = (uint *)((int)puVar14 + 1);
              } while (puVar14 != local_1d8);
LAB_00410659:
              if (uVar19 == 0) goto LAB_00410896;
              if (local_1d8 < (uint *)0x73) {
                local_1d4[(int)local_1d8] = uVar19;
                local_1d8 = (uint *)((int)local_1d8 + 1);
                goto LAB_00410896;
              }
LAB_00410934:
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,auStack_964,0);
              bVar3 = false;
            }
            else {
              if (local_1d8 < (uint *)0x2) {
                local_1d8 = local_578;
                _memcpy_s(local_1d4,0x1cc,local_574,(int)local_578 << 2);
                if (uVar10 != 0) {
                  if ((uVar10 != 1) && (local_1d8 != (uint *)0x0)) {
                    uVar19 = 0;
                    local_76c = CONCAT44(local_1d8,(uint)local_76c);
                    puVar14 = (uint *)0x0;
                    do {
                      lVar22 = (ulonglong)uVar10 * (ulonglong)local_1d4[(int)puVar14] +
                               (ulonglong)uVar19;
                      local_1d4[(int)puVar14] = (uint)lVar22;
                      uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                      puVar14 = (uint *)((int)puVar14 + 1);
                    } while (puVar14 != local_1d8);
                    goto LAB_00410659;
                  }
                  goto LAB_00410896;
                }
                goto LAB_004105f9;
              }
              puVar14 = local_574;
              if (local_578 < local_1d8) {
                local_774 = local_1d4;
                puStack_764 = local_1d8;
                local_754 = local_578;
              }
              else {
                puVar14 = local_1d4;
                local_774 = local_574;
                local_754 = local_1d8;
              }
              local_1d8 = (uint *)0x0;
              puVar12 = (uint *)0x0;
              puStack_748 = (uint *)0x0;
              if (local_754 != (uint *)0x0) {
                local_788 = (int)puVar14 - (int)auStack_744;
                do {
                  uVar10 = *(uint *)((int)auStack_744 + local_788 + (int)puVar12 * 4);
                  local_76c = CONCAT44(uVar10,(uint)local_76c);
                  if (uVar10 == 0) {
                    if (puVar12 == local_1d8) {
                      auStack_744[(int)puVar12] = 0;
                      local_1d8 = (uint *)((int)puVar12 + 1);
                      puStack_748 = local_1d8;
                    }
                  }
                  else {
                    uVar19 = 0;
                    local_760 = (uint *)0x0;
                    puVar14 = puVar12;
                    if (puStack_764 != (uint *)0x0) {
                      do {
                        if (puVar14 == (uint *)0x73) break;
                        if (puVar14 == local_1d8) {
                          auStack_744[(int)puVar14] = 0;
                          puStack_748 = (uint *)((int)local_760 + 1U + (int)puVar12);
                        }
                        lVar22 = (ulonglong)local_774[(int)local_760] * (ulonglong)uVar10 +
                                 (ulonglong)uVar19;
                        uVar8 = (uint)lVar22;
                        puVar15 = auStack_744 + (int)puVar14;
                        uVar19 = *puVar15;
                        *puVar15 = *puVar15 + uVar8;
                        uVar19 = (int)((ulonglong)lVar22 >> 0x20) + (uint)CARRY4(uVar19,uVar8);
                        local_760 = (uint *)((int)local_760 + 1);
                        puVar14 = (uint *)((int)puVar14 + 1);
                        local_1d8 = puStack_748;
                      } while (local_760 != puStack_764);
                      do {
                        if (uVar19 == 0) break;
                        if (puVar14 == (uint *)0x73) goto LAB_00410934;
                        if (puVar14 == local_1d8) {
                          auStack_744[(int)puVar14] = 0;
                          puStack_748 = (uint *)((int)puVar14 + 1);
                        }
                        puVar15 = auStack_744 + (int)puVar14;
                        uVar10 = *puVar15;
                        *puVar15 = *puVar15 + uVar19;
                        uVar19 = (uint)CARRY4(uVar10,uVar19);
                        puVar14 = (uint *)((int)puVar14 + 1);
                        local_1d8 = puStack_748;
                      } while( true );
                    }
                    if (puVar14 == (uint *)0x73) goto LAB_00410934;
                  }
                  puVar12 = (uint *)((int)puVar12 + 1);
                } while (puVar12 != local_754);
              }
              rVar7 = (int)local_1d8 << 2;
              puVar14 = auStack_744;
LAB_00410885:
              _memcpy_s(local_1d4,0x1cc,puVar14,rVar7);
LAB_00410896:
              bVar3 = true;
            }
            if (!bVar3) goto LAB_00410982;
          }
          if (puStack_75c != (uint *)0x0) {
            uVar10 = *(uint *)(&DAT_0041841c + (int)puStack_75c * 2);
            local_76c = CONCAT44(uVar10,(uint)local_76c);
            if (uVar10 == 0) {
LAB_00410982:
              local_1d8 = (uint *)0x0;
              puVar14 = local_1d4;
              goto LAB_0041098f;
            }
            if ((uVar10 != 1) && (local_1d8 != (uint *)0x0)) {
              uVar19 = 0;
              puVar14 = (uint *)0x0;
              do {
                lVar22 = (ulonglong)uVar10 * (ulonglong)local_1d4[(int)puVar14] + (ulonglong)uVar19;
                local_1d4[(int)puVar14] = (uint)lVar22;
                uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                puVar14 = (uint *)((int)puVar14 + 1);
              } while (puVar14 != local_1d8);
              if (uVar19 != 0) {
                if ((uint *)0x72 < local_1d8) goto LAB_00410982;
                local_1d4[(int)local_1d8] = uVar19;
                local_1d8 = (uint *)((int)local_1d8 + 1);
              }
            }
          }
        }
        else {
          local_774 = (uint *)(local_770 / 10);
          local_76c = CONCAT44(local_770 % 10,(uint)local_76c);
          uVar10 = local_770 % 10;
          if (local_774 != (uint *)0x0) {
            do {
              local_760 = local_774;
              if ((uint *)0x26 < local_774) {
                local_760 = (uint *)0x26;
              }
              uVar10 = (uint)(byte)(&DAT_00418386)[(int)local_760 * 4];
              bVar1 = (&DAT_00418387)[(int)local_760 * 4];
              local_578 = (uint *)(uVar10 + bVar1);
              _memset(local_574,0,uVar10 * 4);
              FUN_00405180(local_574 + uVar10,
                           (uint *)(&UNK_00417a80 +
                                   (uint)*(ushort *)(&UNK_00418384 + (int)local_760 * 4) * 4),
                           (uint)bVar1 << 2);
              uVar10 = auStack_3a4[0];
              puStack_764 = local_578;
              if (local_578 < (uint *)0x2) {
                if (local_574[0] == 0) {
                  rVar7 = 0;
                  puStack_748 = (uint *)0x0;
                  puStack_3a8 = (uint *)0x0;
LAB_00410442:
                  puVar14 = auStack_744;
                  goto LAB_00410449;
                }
                if ((local_574[0] == 1) || (puStack_3a8 == (uint *)0x0)) goto LAB_0041045a;
                uVar19 = 0;
                puVar14 = (uint *)0x0;
                do {
                  lVar22 = (ulonglong)local_574[0] * (ulonglong)auStack_3a4[(int)puVar14] +
                           (ulonglong)uVar19;
                  auStack_3a4[(int)puVar14] = (uint)lVar22;
                  uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                  puVar14 = (uint *)((int)puVar14 + 1);
                } while (puVar14 != puStack_3a8);
LAB_0041029a:
                puStack_75c = puStack_3a8;
                if (uVar19 == 0) goto LAB_0041045a;
                if (puStack_3a8 < (uint *)0x73) {
                  auStack_3a4[(int)puStack_3a8] = uVar19;
                  puStack_3a8 = (uint *)((int)puStack_3a8 + 1);
                  goto LAB_0041045a;
                }
                local_578 = (uint *)0x0;
                puVar14 = local_574;
LAB_004104b7:
                puStack_3a8 = (uint *)0x0;
                _memcpy_s(auStack_3a4,0x1cc,puVar14,0);
                bVar3 = false;
              }
              else {
                if ((uint *)0x1 < puStack_3a8) {
                  puVar14 = local_574;
                  if (local_578 < puStack_3a8) {
                    local_754 = auStack_3a4;
                    puStack_764 = puStack_3a8;
                    puStack_758 = local_578;
                  }
                  else {
                    puVar14 = auStack_3a4;
                    local_754 = local_574;
                    puStack_758 = puStack_3a8;
                  }
                  puStack_3a8 = (uint *)0x0;
                  puVar12 = (uint *)0x0;
                  puStack_748 = (uint *)0x0;
                  if (puStack_758 != (uint *)0x0) {
                    local_788 = (int)puVar14 - (int)auStack_744;
                    do {
                      puStack_75c = *(uint **)((int)auStack_744 + local_788 + (int)puVar12 * 4);
                      if (puStack_75c == (uint *)0x0) {
                        if (puVar12 == puStack_3a8) {
                          auStack_744[(int)puVar12] = 0;
                          puStack_3a8 = (uint *)((int)puVar12 + 1);
                          puStack_748 = puStack_3a8;
                        }
                      }
                      else {
                        uVar10 = 0;
                        local_750 = (uint *)0x0;
                        puVar14 = puVar12;
                        if (puStack_764 != (uint *)0x0) {
                          do {
                            if (puVar14 == (uint *)0x73) break;
                            if (puVar14 == puStack_3a8) {
                              auStack_744[(int)puVar14] = 0;
                              puStack_748 = (uint *)((int)local_750 + 1U + (int)puVar12);
                            }
                            lVar22 = (ulonglong)local_754[(int)local_750] * ZEXT48(puStack_75c) +
                                     (ulonglong)uVar10;
                            uVar19 = (uint)lVar22;
                            puVar15 = auStack_744 + (int)puVar14;
                            uVar10 = *puVar15;
                            *puVar15 = *puVar15 + uVar19;
                            uVar10 = (int)((ulonglong)lVar22 >> 0x20) + (uint)CARRY4(uVar10,uVar19);
                            local_750 = (uint *)((int)local_750 + 1);
                            puVar14 = (uint *)((int)puVar14 + 1);
                            puStack_3a8 = puStack_748;
                          } while (local_750 != puStack_764);
                          do {
                            if (uVar10 == 0) break;
                            if (puVar14 == (uint *)0x73) goto LAB_004104a2;
                            if (puVar14 == puStack_3a8) {
                              auStack_744[(int)puVar14] = 0;
                              puStack_748 = (uint *)((int)puVar14 + 1);
                            }
                            puVar15 = auStack_744 + (int)puVar14;
                            uVar19 = *puVar15;
                            *puVar15 = *puVar15 + uVar10;
                            uVar10 = (uint)CARRY4(uVar19,uVar10);
                            puVar14 = (uint *)((int)puVar14 + 1);
                            puStack_3a8 = puStack_748;
                          } while( true );
                        }
                        if (puVar14 == (uint *)0x73) {
LAB_004104a2:
                          puVar14 = auStack_964;
                          goto LAB_004104b7;
                        }
                      }
                      puVar12 = (uint *)((int)puVar12 + 1);
                    } while (puVar12 != puStack_758);
                  }
                  rVar7 = (int)puStack_3a8 << 2;
                  goto LAB_00410442;
                }
                puStack_3a8 = local_578;
                _memcpy_s(auStack_3a4,0x1cc,local_574,(int)local_578 << 2);
                if (uVar10 != 0) {
                  if ((uVar10 != 1) && (puStack_3a8 != (uint *)0x0)) {
                    uVar19 = 0;
                    puVar14 = (uint *)0x0;
                    do {
                      lVar22 = (ulonglong)uVar10 * (ulonglong)auStack_3a4[(int)puVar14] +
                               (ulonglong)uVar19;
                      auStack_3a4[(int)puVar14] = (uint)lVar22;
                      uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                      puVar14 = (uint *)((int)puVar14 + 1);
                    } while (puVar14 != puStack_3a8);
                    goto LAB_0041029a;
                  }
                  goto LAB_0041045a;
                }
                local_578 = (uint *)0x0;
                puStack_3a8 = (uint *)0x0;
                rVar7 = 0;
                puVar14 = local_574;
LAB_00410449:
                _memcpy_s(auStack_3a4,0x1cc,puVar14,rVar7);
LAB_0041045a:
                bVar3 = true;
              }
              if (!bVar3) goto LAB_004104dc;
              local_774 = (uint *)((int)local_774 - (int)local_760);
            } while (local_774 != (uint *)0x0);
            uVar10 = local_76c._4_4_;
          }
          if (uVar10 != 0) {
            uVar10 = *(uint *)(&DAT_0041841c + uVar10 * 2);
            if (uVar10 == 0) {
LAB_004104dc:
              puStack_3a8 = (uint *)0x0;
              puVar14 = auStack_3a4;
LAB_0041098f:
              _memcpy_s(puVar14,0x1cc,auStack_964,0);
            }
            else if (uVar10 != 1) {
              local_76c = CONCAT44(puStack_3a8,(uint)local_76c);
              if (puStack_3a8 != (uint *)0x0) {
                uVar19 = 0;
                puVar14 = (uint *)0x0;
                do {
                  lVar22 = (ulonglong)uVar10 * (ulonglong)auStack_3a4[(int)puVar14] +
                           (ulonglong)uVar19;
                  auStack_3a4[(int)puVar14] = (uint)lVar22;
                  uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
                  puVar14 = (uint *)((int)puVar14 + 1);
                } while (puVar14 != puStack_3a8);
                if (uVar19 != 0) {
                  if ((uint *)0x72 < puStack_3a8) goto LAB_004104dc;
                  auStack_3a4[(int)puStack_3a8] = uVar19;
                  puStack_3a8 = (uint *)((int)puStack_3a8 + 1);
                }
              }
            }
          }
        }
        pcVar17 = local_780;
        local_750 = (uint *)local_780;
        if (local_1d8 != (uint *)0x0) {
          uVar10 = 0;
          puVar14 = (uint *)0x0;
          do {
            lVar22 = (ulonglong)local_1d4[(int)puVar14] * 10 + (ulonglong)uVar10;
            local_1d4[(int)puVar14] = (uint)lVar22;
            uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (puVar14 != local_1d8);
          local_76c = CONCAT44(uVar10,(uint)local_76c);
          if (uVar10 != 0) {
            if (local_1d8 < (uint *)0x73) {
              local_1d4[(int)local_1d8] = uVar10;
              local_1d8 = (uint *)((int)local_1d8 + 1);
            }
            else {
              local_1d8 = (uint *)0x0;
              _memcpy_s(local_1d4,0x1cc,auStack_964,0);
            }
          }
        }
        _Var23 = __crt_strtox::divide((big_integer *)&local_1d8,(big_integer *)&puStack_3a8);
        if ((int)_Var23 == 10) {
          local_770 = local_770 + 1;
          local_750 = (uint *)(pcVar17 + 1);
          *pcVar17 = '1';
          if (puStack_3a8 != (uint *)0x0) {
            uVar10 = 0;
            puVar14 = (uint *)0x0;
            do {
              lVar22 = (ulonglong)auStack_3a4[(int)puVar14] * 10 + (ulonglong)uVar10;
              auStack_3a4[(int)puVar14] = (uint)lVar22;
              uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
              puVar14 = (uint *)((int)puVar14 + 1);
            } while (puVar14 != puStack_3a8);
            if (uVar10 != 0) {
              if (puStack_3a8 < (uint *)0x73) {
                auStack_3a4[(int)puStack_3a8] = uVar10;
                puStack_3a8 = (uint *)((int)puStack_3a8 + 1);
              }
              else {
                puStack_3a8 = (uint *)0x0;
                _memcpy_s(auStack_3a4,0x1cc,auStack_964,0);
              }
            }
          }
LAB_00410af3:
          pcVar17 = pcVar17 + 1;
          uVar10 = local_770;
        }
        else {
          if ((int)_Var23 != 0) {
            local_750 = (uint *)(pcVar17 + 1);
            *pcVar17 = (char)_Var23 + '0';
            goto LAB_00410af3;
          }
          uVar10 = local_770 - 1;
        }
        local_784[1] = uVar10;
        if ((-1 < (int)uVar10) && (local_77c < 0x80000000)) {
          local_77c = (char *)((int)local_77c + uVar10);
        }
        uVar10 = param_6 - 1;
        if (local_77c <= param_6 - 1) {
          uVar10 = (uint)local_77c;
        }
        local_77c = local_780 + uVar10;
        if (pcVar17 != local_77c) {
          do {
            puVar14 = local_750;
            if (local_1d8 == (uint *)0x0) break;
            uVar10 = 0;
            puVar12 = (uint *)0x0;
            do {
              lVar22 = (ulonglong)local_1d4[(int)puVar12] * 1000000000 + (ulonglong)uVar10;
              local_1d4[(int)puVar12] = (uint)lVar22;
              uVar10 = (uint)((ulonglong)lVar22 >> 0x20);
              puVar12 = (uint *)((int)puVar12 + 1);
            } while (puVar12 != local_1d8);
            if (uVar10 != 0) {
              if (local_1d8 < (uint *)0x73) {
                local_1d4[(int)local_1d8] = uVar10;
                local_1d8 = (uint *)((int)local_1d8 + 1);
              }
              else {
                local_1d8 = (uint *)0x0;
                _memcpy_s(local_1d4,0x1cc,auStack_964,0);
              }
            }
            uVar21 = __crt_strtox::divide((big_integer *)&local_1d8,(big_integer *)&puStack_3a8);
            uVar19 = 8;
            uVar10 = (int)local_77c - (int)puVar14;
            do {
              uVar2 = uVar21 & 0xffffffff;
              uVar21 = uVar2 / uStack_778;
              if (uVar19 <= uVar10) {
                *(char *)((int)puVar14 + uVar19) = (char)(uVar2 % (ulonglong)uStack_778) + '0';
              }
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0xffffffff);
            if (9 < uVar10) {
              uVar10 = 9;
            }
            pcVar17 = (char *)((int)puVar14 + uVar10);
            local_750 = (uint *)pcVar17;
          } while (pcVar17 != local_77c);
        }
        *pcVar17 = '\0';
        goto LAB_00410c36;
      }
      _Src = "1#IND";
    }
  }
  eVar9 = _strcpy_s(pcVar17,param_6,_Src);
  if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_00410c36:
  if (local_790 != '\0') {
    fesetenv((uint *)local_798);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_00410c6a(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  
  local_20 = 0;
  ___acrt_lock(8);
  for (iVar2 = 3; iVar2 != DAT_0041dee8; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(DAT_0041deec + iVar2 * 4);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0xc) >> 0xd & 1) != 0) {
        iVar1 = FUN_00412383(*(FILE **)(DAT_0041deec + iVar2 * 4));
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0041deec + iVar2 * 4) + 0x20));
      FID_conflict__free(*(void **)(DAT_0041deec + iVar2 * 4));
      *(undefined4 *)(DAT_0041deec + iVar2 * 4) = 0;
    }
  }
  FUN_00410d01();
  return local_20;
}




void FUN_00410d01(void)

{
  ___acrt_unlock(8);
  return;
}




/* Library Function - Single Match
    ___acrt_stdio_flush_nolock
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___acrt_stdio_flush_nolock(FILE *param_1)

{
  int *piVar1;
  int _FileHandle;
  uint uVar2;
  uint uVar3;
  char *_Buf;
  
  piVar1 = &param_1->_flag;
  if ((((byte)*piVar1 & 3) == 2) && ((*piVar1 & 0xc0U) != 0)) {
    _Buf = (char *)param_1->_cnt;
    uVar3 = (int)param_1->_ptr - (int)_Buf;
    param_1->_ptr = _Buf;
    param_1->_base = (char *)0x0;
    if (0 < (int)uVar3) {
      uVar2 = uVar3;
      _FileHandle = __fileno(param_1);
      uVar2 = __write(_FileHandle,_Buf,uVar2);
      if (uVar3 != uVar2) {
        LOCK();
        *piVar1 = *piVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)*piVar1 >> 2 & 1) != 0) {
        LOCK();
        *piVar1 = *piVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = common_flush_all(0);
    return iVar1;
  }
  iVar1 = ___acrt_stdio_flush_nolock(_File);
  if (iVar1 == 0) {
    if (((uint)_File->_flag >> 0xb & 1) != 0) {
      iVar1 = __fileno(_File);
      iVar1 = __commit(iVar1);
      if (iVar1 != 0) goto LAB_00410d91;
    }
    iVar1 = 0;
  }
  else {
LAB_00410d91:
    iVar1 = -1;
  }
  return iVar1;
}




void FUN_00410db7(void)

{
  common_flush_all(1);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _common_flush_all
   
   Library: Visual Studio 2015 Release */

int __cdecl common_flush_all(int param_1)

{
  undefined4 *puVar1;
  FILE *_File;
  int iVar2;
  undefined4 *puVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  ___acrt_lock(8);
  puVar1 = DAT_0041deec + DAT_0041dee8;
  for (puVar3 = DAT_0041deec; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    _File = (FILE *)*puVar3;
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      if (((uint)_File->_flag >> 0xd & 1) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && (((uint)_File->_flag >> 1 & 1) != 0)) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_00410e65();
    }
  }
  FUN_00410e8f();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}




void FUN_00410e65(void)

{
  int unaff_EBP;
  
  FUN_0040c4f2(*(int *)(unaff_EBP + -0x28));
  return;
}




void FUN_00410e8f(void)

{
  ___acrt_unlock(8);
  return;
}




/* Library Function - Single Match
    ___acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___acrt_stdio_free_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 3;
  if (((*puVar1 >> 0xd & 1) != 0) && ((*puVar1 >> 6 & 1) != 0)) {
    FID_conflict__free((void *)param_1[1]);
    LOCK();
    *puVar1 = *puVar1 & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}




/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2015 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041e100)) {
      return *(byte *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) &
             0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00407d49();
  }
  return 0;
}




/* Library Function - Single Match
    void __cdecl shortsort(char *,char *,unsigned int,int (__cdecl*)(void const *,void const *))
   
   Library: Visual Studio 2015 Release */

void __cdecl
shortsort(char *param_1,char *param_2,uint param_3,_func_int_void_ptr_void_ptr *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar2 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  if (param_1 < param_2) {
    do {
      pcVar6 = param_1;
      for (pcVar4 = param_1 + param_3; pcVar4 <= param_2; pcVar4 = pcVar4 + param_3) {
        pcVar7 = pcVar4;
        pcVar8 = pcVar6;
        guard_check_icall();
        iVar3 = (*param_4)(pcVar7,pcVar8);
        if (0 < iVar3) {
          pcVar6 = pcVar4;
        }
      }
      if ((pcVar6 != param_2) && (pcVar4 = param_2, uVar5 = param_3, param_3 != 0)) {
        do {
          pcVar7 = pcVar4 + 1;
          cVar1 = pcVar7[(int)(pcVar6 + (-1 - (int)param_2))];
          pcVar7[(int)(pcVar6 + (-1 - (int)param_2))] = *pcVar4;
          *pcVar4 = cVar1;
          uVar5 = uVar5 - 1;
          pcVar4 = pcVar7;
        } while (uVar5 != 0);
      }
      param_2 = param_2 + -param_3;
    } while (param_1 < param_2);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    void __cdecl swap(char *,char *,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl swap(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if ((param_1 != param_2) && (pcVar3 = param_2, param_3 != 0)) {
    do {
      pcVar1 = pcVar3 + 1;
      cVar2 = pcVar1[(int)(param_1 + (-1 - (int)param_2))];
      pcVar1[(int)(param_1 + (-1 - (int)param_2))] = *pcVar3;
      *pcVar3 = cVar2;
      param_3 = param_3 - 1;
      pcVar3 = pcVar1;
    } while (param_3 != 0);
  }
  return;
}




/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2015 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_114;
  char *local_110;
  int local_10c;
  char *local_108;
  undefined4 auStack_f8 [30];
  undefined4 auStack_80 [30];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_108 = (char *)_Base;
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00407d49();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_10c = 0;
  if (_NumOfElements < 2) {
LAB_0041139a:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar5 = (char *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_00411095:
  while (uVar1 = (uint)((int)pcVar5 - (int)local_108) / _SizeOfElements + 1, 8 < uVar1) {
    pcVar7 = local_108 + (uVar1 >> 1) * _SizeOfElements;
    pcVar9 = local_108;
    pcVar6 = pcVar7;
    guard_check_icall();
    iVar4 = (*_PtFuncCompare)(pcVar9,pcVar6);
    if (0 < iVar4) {
      swap(local_108,pcVar7,_SizeOfElements);
    }
    pcVar9 = local_108;
    pcVar6 = pcVar5;
    guard_check_icall();
    iVar4 = (*_PtFuncCompare)(pcVar9,pcVar6);
    if (0 < iVar4) {
      swap(local_108,pcVar5,_SizeOfElements);
    }
    pcVar9 = pcVar7;
    pcVar6 = pcVar5;
    guard_check_icall();
    iVar4 = (*_PtFuncCompare)(pcVar9,pcVar6);
    local_110 = local_108;
    pcVar9 = pcVar5;
    local_114 = pcVar7;
    if (0 < iVar4) {
      swap(pcVar7,pcVar5,_SizeOfElements);
    }
LAB_00411160:
    pcVar6 = pcVar9;
    if (local_110 < pcVar7) {
      do {
        local_110 = local_110 + _SizeOfElements;
        if (pcVar7 <= local_110) goto LAB_004111a1;
        pcVar10 = local_110;
        pcVar6 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar10,pcVar6);
      } while (iVar4 < 1);
      if (pcVar7 <= local_110) goto LAB_004111a1;
    }
    else {
LAB_004111a1:
      do {
        pcVar9 = pcVar6;
        local_110 = local_110 + _SizeOfElements;
        if (pcVar5 < local_110) break;
        pcVar6 = local_110;
        pcVar9 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar6,pcVar9);
        pcVar6 = pcVar9;
      } while (iVar4 < 1);
    }
    do {
      pcVar9 = pcVar9 + -_SizeOfElements;
      if (pcVar9 <= pcVar7) break;
      pcVar6 = pcVar9;
      pcVar10 = pcVar7;
      guard_check_icall();
      iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
    } while (0 < iVar4);
    if (local_110 <= pcVar9) {
      pcVar6 = pcVar9;
      sVar8 = _SizeOfElements;
      if (local_110 != pcVar9) {
        do {
          pcVar7 = pcVar6 + 1;
          cVar2 = pcVar7[(int)(local_110 + (-1 - (int)pcVar9))];
          pcVar7[(int)(local_110 + (-1 - (int)pcVar9))] = *pcVar6;
          *pcVar6 = cVar2;
          sVar8 = sVar8 - 1;
          pcVar6 = pcVar7;
          pcVar7 = local_114;
        } while (sVar8 != 0);
      }
      if (pcVar7 == pcVar9) {
        local_114 = local_110;
        pcVar7 = local_110;
      }
      goto LAB_00411160;
    }
    pcVar9 = pcVar9 + _SizeOfElements;
    if (pcVar7 < pcVar9) {
      do {
        pcVar9 = pcVar9 + -_SizeOfElements;
        if (pcVar9 <= pcVar7) goto LAB_004112b1;
        pcVar6 = pcVar9;
        pcVar10 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
      } while (iVar4 == 0);
      if (pcVar9 <= pcVar7) goto LAB_004112b1;
    }
    else {
LAB_004112b1:
      do {
        pcVar9 = pcVar9 + -_SizeOfElements;
        if (pcVar9 <= local_108) break;
        pcVar6 = pcVar9;
        pcVar10 = pcVar7;
        guard_check_icall();
        iVar4 = (*_PtFuncCompare)(pcVar6,pcVar10);
      } while (iVar4 == 0);
    }
    if ((int)pcVar9 - (int)local_108 < (int)pcVar5 - (int)local_110) goto LAB_0041132b;
    if (local_108 < pcVar9) {
      auStack_f8[local_10c] = local_108;
      auStack_80[local_10c] = pcVar9;
      local_10c = local_10c + 1;
    }
    local_108 = local_110;
    if (pcVar5 <= local_110) goto LAB_00411372;
  }
  shortsort(local_108,pcVar5,_SizeOfElements,(_func_int_void_ptr_void_ptr *)_PtFuncCompare);
  goto LAB_00411372;
LAB_0041132b:
  if (local_110 < pcVar5) {
    auStack_f8[local_10c] = local_110;
    auStack_80[local_10c] = pcVar5;
    local_10c = local_10c + 1;
  }
  pcVar5 = pcVar9;
  if (pcVar9 <= local_108) {
LAB_00411372:
    local_10c = local_10c + -1;
    if (-1 < local_10c) {
      local_108 = (char *)auStack_f8[local_10c];
      pcVar5 = (char *)auStack_80[local_10c];
      goto LAB_00411095;
    }
    goto LAB_0041139a;
  }
  goto LAB_00411095;
}




/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)(uint)bVar1;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}




/* Library Function - Single Match
    int __cdecl GetTableIndexFromLocaleName(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int __cdecl GetTableIndexFromLocaleName(wchar_t *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0xe3;
  while( true ) {
    local_8 = 0x55;
    iVar2 = (local_c + local_10) / 2;
    puVar5 = (ushort *)(&PTR_DAT_00419588)[iVar2 * 2];
    iVar3 = (int)param_1 - (int)puVar5;
    do {
      uVar4 = *(ushort *)(iVar3 + (int)puVar5);
      if ((0x40 < uVar4) && (uVar4 < 0x5b)) {
        uVar4 = uVar4 + 0x20;
      }
      uVar1 = *puVar5;
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        uVar1 = uVar1 + 0x20;
      }
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (((local_8 != 0) && (uVar4 != 0)) && (uVar4 == uVar1));
    if ((uint)uVar4 == (uint)uVar1) break;
    if ((int)((uint)uVar4 - (uint)uVar1) < 0) {
      local_c = iVar2 + -1;
    }
    else {
      local_10 = iVar2 + 1;
    }
    if (local_c < local_10) {
      return -1;
    }
  }
  return *(int *)(&UNK_0041958c + iVar2 * 8);
}




/* Library Function - Single Match
    ___acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl ___acrt_DownlevelLocaleNameToLCID(wchar_t *param_1)

{
  uint uVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    uVar1 = GetTableIndexFromLocaleName(param_1);
    if ((-1 < (int)uVar1) && (uVar1 < 0xe4)) {
      return *(undefined4 *)(&DAT_00418468 + uVar1 * 8);
    }
  }
  return 0;
}




/* Library Function - Multiple Matches With Different Base Names
    __msize
    __msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict___msize_base(void *_Memory)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_0041e360,0,_Memory);
  return SVar2;
}




/* Library Function - Single Match
    __realloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID __cdecl __realloc_base(void *param_1,uint param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = __malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FID_conflict__free(param_1);
    }
    else {
      if (param_2 < 0xffffffe1) {
        do {
          pvVar1 = HeapReAlloc(DAT_0041e360,0,param_1,param_2);
          if (pvVar1 != (LPVOID)0x0) {
            return pvVar1;
          }
          iVar3 = FUN_00409f66();
        } while ((iVar3 != 0) && (iVar3 = __callnewh(param_2), iVar3 != 0));
      }
      piVar2 = __errno();
      *piVar2 = 0xc;
    }
    pvVar1 = (LPVOID)0x0;
  }
  return pvVar1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2015 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (0 < DAT_0041dbd4) {
    if (((param_1 & 0x40) == 0) || (DAT_0041d750 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}




/* Library Function - Single Match
    __clrfp
   
   Library: Visual Studio 2015 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}




/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2015 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411638(void)

{
  return;
}




/* Library Function - Single Match
    __statfp
   
   Library: Visual Studio 2015 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}




/* Library Function - Single Match
    ___strncnt
   
   Library: Visual Studio 2015 Release */

void __cdecl ___strncnt(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 != param_2))) {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  return;
}




/* Library Function - Single Match
    _fegetenv
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = __getfpcontrolword();
  *param_1 = uVar1;
  uVar1 = __getfpstatusword();
  param_1[1] = uVar1;
  return 0;
}




/* Library Function - Single Match
    _fesetenv
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl fesetenv(uint *param_1)

{
  undefined4 uVar1;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  __setfpcontrolword(*param_1);
  __setfpstatusword(param_1[1]);
  fegetenv(&local_c);
  if ((*param_1 == local_c) && (param_1[1] == local_8)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




/* Library Function - Single Match
    _feholdexcept
   
   Library: Visual Studio 2015 Release */

undefined4 __cdecl feholdexcept(uint *param_1)

{
  int iVar1;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = fegetenv(&local_c);
  if (iVar1 == 0) {
    param_1[1] = local_8;
    *param_1 = local_c;
    local_c = local_c | 0x1f;
    iVar1 = fesetenv(&local_c);
    if (iVar1 == 0) {
      __clearfp();
      return 0;
    }
  }
  return 1;
}




void FUN_004117c0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_0041e38c != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_004129d0();
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_004130e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_00411818(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}




uint __cdecl FUN_00411818(int param_1,uint param_2)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_0041308c();
      goto LAB_004118b1;
    }
    uVar2 = in_EAX & 0x80000000;
    uVar1 = uVar2;
  }
  else {
    uVar1 = param_2;
    if ((param_2 & 0x7ff00000) == 0) {
      if (((param_2 & 0xfffff) == 0) && (param_1 == 0)) {
        uVar2 = 2;
        goto LAB_004118b1;
      }
      uVar2 = param_2 & 0x80000000;
    }
    else {
      uVar2 = param_2 & 0x80000000;
    }
  }
  if (uVar2 == 0) {
    if (DAT_0041e374 != 0) {
      return uVar1;
    }
    uVar2 = __math_exit("log10",0x1b,unaff_retaddr,param_1,param_2);
    return uVar2;
  }
  uVar2 = 1;
LAB_004118b1:
  if (DAT_0041e374 != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling("log10",0x1b,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return uVar2;
}




float10 __cdecl FUN_004118d0(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  
  if ((DAT_0041e38c == 0) || ((MXCSR & 0x7f80) != 0x1f80 || (in_FPUControlWord & 0x7f) != 0x7f)) {
    uVar2 = __ctrlfp();
    if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
      iVar3 = __sptype(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
      if (iVar3 - 1U < 3) {
        __ctrlfp();
        return (float10)param_1;
      }
      dVar5 = param_1 + 1.0;
      uVar1 = 8;
    }
    else {
      fVar4 = FUN_00413a61(param_1);
      dVar5 = (double)fVar4;
      if (((NAN((float10)param_1) || NAN(fVar4)) != ((float10)param_1 == fVar4)) ||
         ((uVar2 & 0x20) != 0)) {
        __ctrlfp();
        return (float10)dVar5;
      }
      dVar5 = (double)fVar4;
      uVar1 = 0x10;
    }
    fVar4 = (float10)__except1(uVar1,0xc,param_1,dVar5,uVar2);
    return fVar4;
  }
  uVar2 = (uint)((ulonglong)param_1 >> 0x20);
  uVar1 = uVar2 >> 0x14;
  uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
  if ((uVar1 & 0x800) == 0) {
    dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
    if (uVar1 < 0x3ff) {
      return (float10)(double)(-(ulonglong)(0.0 < param_1) & 0x3ff0000000000000);
    }
    if (uVar1 < 0x433) {
      return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & 0x3ff0000000000000));
    }
  }
  else {
    if (uVar1 < 0xbff) {
      return (float10)-0.0;
    }
    if (uVar1 < 0xc33) {
      return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
    }
  }
  if (NAN(param_1)) {
    ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
  }
  return (float10)param_1;
}




/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_ansi_nolock(int,char
   const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_double_translated_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  HANDLE hFile;
  byte *pbVar2;
  UINT CodePage;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int in_stack_00000010;
  byte *_SrcCh;
  size_t _SrcSizeInBytes;
  uint local_24;
  undefined2 local_20;
  wchar_t local_1c [2];
  CHAR local_18 [8];
  byte local_10;
  undefined1 local_f;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  iVar8 = (int)param_2 >> 6;
  iVar9 = ((uint)param_2 & 0x3f) * 0x30;
  hFile = *(HANDLE *)((&DAT_0041df00)[iVar8] + 0x18 + iVar9);
  pbVar2 = (byte *)(in_stack_00000010 + param_3);
  CodePage = GetConsoleCP();
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pbVar10 = (byte *)param_3;
  if (param_3 < pbVar2) {
    do {
      local_1c[0] = L'\0';
      local_20 = CONCAT11(*pbVar10,(undefined1)local_20);
      iVar4 = (&DAT_0041df00)[iVar8];
      bVar1 = *(byte *)(iVar4 + 0x2d + iVar9);
      if ((bVar1 & 4) == 0) {
        puVar3 = ___pctype_func();
        if ((puVar3[*pbVar10] & 0x8000) == 0) {
          _SrcSizeInBytes = 1;
          _SrcCh = pbVar10;
          goto LAB_00411ac1;
        }
        if (pbVar2 <= pbVar10) {
          *(byte *)((&DAT_0041df00)[iVar8] + 0x2e + iVar9) = *pbVar10;
          pbVar10 = (byte *)((&DAT_0041df00)[iVar8] + 0x2d + iVar9);
          *pbVar10 = *pbVar10 | 4;
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
          break;
        }
        iVar4 = _mbtowc(local_1c,(char *)pbVar10,2);
        if (iVar4 == -1) break;
        pbVar10 = pbVar10 + 1;
      }
      else {
        local_10 = *(byte *)(iVar4 + 0x2e + iVar9);
        uVar5 = CONCAT11(*pbVar10,bVar1) & 0xfffffffb;
        _SrcSizeInBytes = 2;
        local_f = (undefined1)(uVar5 >> 8);
        *(char *)(iVar4 + 0x2d + iVar9) = (char)uVar5;
        _SrcCh = &local_10;
LAB_00411ac1:
        iVar4 = _mbtowc(local_1c,(char *)_SrcCh,_SrcSizeInBytes);
        if (iVar4 == -1) break;
      }
      pbVar10 = pbVar10 + 1;
      uVar5 = WideCharToMultiByte(CodePage,0,local_1c,1,local_18,5,(LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar5 == 0) break;
      BVar6 = WriteFile(hFile,local_18,uVar5,&local_24,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
LAB_00411b85:
        DVar7 = GetLastError();
        *(DWORD *)param_1 = DVar7;
        break;
      }
      *(byte **)(param_1 + 4) = pbVar10 + (*(int *)(param_1 + 8) - param_3);
      if (local_24 < uVar5) break;
      if (local_20._1_1_ == '\n') {
        local_20 = 0xd;
        BVar6 = WriteFile(hFile,&local_20,1,&local_24,(LPOVERLAPPED)0x0);
        if (BVar6 == 0) goto LAB_00411b85;
        if (local_24 == 0) break;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
    } while (pbVar10 < pbVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_unicode_nolock(char
   const * const,unsigned int)
   
   Library: Visual Studio 2015 Release */

char * __cdecl write_double_translated_unicode_nolock(char *param_1,uint param_2)

{
  wchar_t _WCh;
  wchar_t wVar1;
  wint_t wVar2;
  wchar_t *pwVar3;
  DWORD DVar4;
  int in_stack_0000000c;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  pwVar3 = (wchar_t *)(in_stack_0000000c + param_2);
  if (param_2 < pwVar3) {
    do {
      _WCh = *(wchar_t *)param_2;
      wVar1 = __putwch_nolock(_WCh);
      if (wVar1 != _WCh) {
LAB_00411bfc:
        DVar4 = GetLastError();
        *(DWORD *)param_1 = DVar4;
        return param_1;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 2;
      if (_WCh == L'\n') {
        wVar2 = __putwch_nolock(L'\r');
        if (wVar2 != 0xd) goto LAB_00411bfc;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      param_2 = param_2 + 2;
    } while (param_2 < pwVar3);
  }
  return param_1;
}




/* Library Function - Single Match
    bool __cdecl write_requires_double_translation_nolock(int)
   
   Library: Visual Studio 2015 Release */

bool __cdecl write_requires_double_translation_nolock(int param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  BOOL BVar3;
  int iVar4;
  bool bVar5;
  DWORD local_8;
  
  iVar1 = __isatty(param_1);
  if (iVar1 == 0) {
    bVar5 = false;
  }
  else {
    iVar4 = param_1 >> 6;
    iVar1 = (param_1 & 0x3fU) * 0x30;
    if (((*(byte *)((&DAT_0041df00)[iVar4] + 0x28 + iVar1) & 0x80) == 0) ||
       ((p_Var2 = ___acrt_getptd(), *(int *)(*(int *)(p_Var2 + 0x4c) + 0xa8) == 0 &&
        (*(char *)((&DAT_0041df00)[iVar4] + 0x29 + iVar1) == '\0')))) {
      bVar5 = false;
    }
    else {
      BVar3 = GetConsoleMode(*(HANDLE *)((&DAT_0041df00)[iVar4] + 0x18 + iVar1),&local_8);
      bVar5 = BVar3 != 0;
    }
  }
  return bVar5;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  int in_stack_00000010;
  uint local_1410;
  char *local_140c;
  char local_1408 [5120];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_0041df00)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  *(undefined4 *)param_1 = 0;
  local_140c = (char *)(in_stack_00000010 + param_3);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    if (local_140c <= param_3) break;
    pcVar4 = local_1408;
    do {
      if (local_140c <= param_3) break;
      cVar1 = *(char *)param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1408 + 0x13ff);
    BVar2 = WriteFile(hFile,local_1408,(int)pcVar4 - (int)local_1408,&local_1410,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      break;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
  } while ((uint)((int)pcVar4 - (int)local_1408) <= local_1410);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  int in_stack_00000010;
  uint local_1410;
  short *local_140c;
  short local_1408 [2560];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_0041df00)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  local_140c = (short *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    if (local_140c <= param_3) break;
    psVar4 = local_1408;
    do {
      if (local_140c <= param_3) break;
      sVar1 = *(short *)param_3;
      param_3 = param_3 + 2;
      if (sVar1 == 10) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1408 + 0x9ff);
    BVar2 = WriteFile(hFile,local_1408,(int)psVar4 - (int)local_1408,&local_1410,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      break;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
  } while ((uint)((int)psVar4 - (int)local_1408) <= local_1410);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  WCHAR WVar1;
  HANDLE hFile;
  WCHAR *pWVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  WCHAR *pWVar7;
  int in_stack_00000010;
  DWORD local_1414;
  WCHAR *local_1410;
  CHAR local_140c [3416];
  WCHAR local_6b4 [854];
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_0041df00)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  local_1410 = (WCHAR *)(in_stack_00000010 + param_3);
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pWVar7 = (WCHAR *)param_3;
  if (param_3 < local_1410) {
    do {
      uVar6 = 0;
      pWVar2 = local_6b4;
      do {
        if (local_1410 <= pWVar7) break;
        WVar1 = *pWVar7;
        pWVar7 = pWVar7 + 1;
        if (WVar1 == L'\n') {
          *pWVar2 = L'\r';
          pWVar2 = pWVar2 + 1;
        }
        *pWVar2 = WVar1;
        pWVar2 = pWVar2 + 1;
      } while (pWVar2 < local_6b4 + 0x354);
      uVar3 = WideCharToMultiByte(0xfde9,0,local_6b4,(int)pWVar2 - (int)local_6b4 >> 1,local_140c,
                                  0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
      if (uVar3 == 0) {
LAB_00411f62:
        DVar5 = GetLastError();
        *(DWORD *)param_1 = DVar5;
        break;
      }
      do {
        BVar4 = WriteFile(hFile,local_140c + uVar6,uVar3 - uVar6,&local_1414,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_00411f62;
        uVar6 = uVar6 + local_1414;
      } while (uVar6 < uVar3);
      *(uint *)(param_1 + 4) = (int)pWVar7 - param_3;
    } while (pWVar7 < local_1410);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2015 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041e100)) {
      iVar3 = (_FileHandle & 0x3fU) * 0x30;
      if ((*(byte *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + iVar3) & 1) != 0) {
        ___acrt_lowio_lock_fh(_FileHandle);
        iVar4 = -1;
        if ((*(byte *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
        }
        else {
          iVar4 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_0041203f();
        return iVar4;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00407d49();
  }
  return -1;
}




void FUN_0041203f(void)

{
  uint unaff_ESI;
  
  ___acrt_lowio_unlock_fh(unaff_ESI);
  return;
}




/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  int *piVar5;
  BOOL BVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  ulong local_18;
  DWORD local_14 [2];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  local_c = _MaxCharCount;
  if (_MaxCharCount == 0) goto LAB_00412264;
  if (_Buf == (void *)0x0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00407d49();
    goto LAB_00412264;
  }
  iVar8 = _FileHandle >> 6;
  iVar7 = (_FileHandle & 0x3fU) * 0x30;
  cVar2 = *(char *)((&DAT_0041df00)[iVar8] + 0x29 + iVar7);
  if (((cVar2 == '\x02') || (cVar2 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00407d49();
    goto LAB_00412264;
  }
  if ((*(byte *)((&DAT_0041df00)[iVar8] + 0x28 + iVar7) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EBX);
  }
  bVar3 = write_requires_double_translation_nolock(_FileHandle);
  if (bVar3) {
    if (cVar2 == '\0') {
      puVar4 = (ulong *)write_double_translated_ansi_nolock
                                  ((int)&local_18,(char *)_FileHandle,(uint)_Buf);
      goto LAB_004121f0;
    }
    if ((byte)(cVar2 - 1U) < 2) {
      puVar4 = (ulong *)write_double_translated_unicode_nolock((char *)&local_18,(uint)_Buf);
      goto LAB_004121f0;
    }
  }
  else {
    if ((*(byte *)((&DAT_0041df00)[iVar8] + 0x28 + iVar7) & 0x80) == 0) {
      local_18 = 0;
      local_14[0] = 0;
      local_14[1] = 0;
      BVar6 = WriteFile(*(HANDLE *)((&DAT_0041df00)[iVar8] + 0x18 + iVar7),_Buf,local_c,local_14,
                        (LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        local_18 = GetLastError();
      }
      puVar4 = &local_18;
    }
    else if (cVar2 == '\0') {
      puVar4 = (ulong *)write_text_ansi_nolock((int)&local_18,(char *)_FileHandle,(uint)_Buf);
    }
    else if (cVar2 == '\x01') {
      puVar4 = (ulong *)write_text_utf8_nolock((int)&local_18,(char *)_FileHandle,(uint)_Buf);
    }
    else {
      if (cVar2 != '\x02') goto LAB_0041222b;
      puVar4 = (ulong *)write_text_utf16le_nolock((int)&local_18,(char *)_FileHandle,(uint)_Buf);
    }
LAB_004121f0:
    uVar1 = *puVar4;
    if (puVar4[1] != 0) goto LAB_00412264;
    if (uVar1 != 0) {
      if (uVar1 == 5) {
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        ___acrt_errno_map_os_error(uVar1);
      }
      goto LAB_00412264;
    }
  }
LAB_0041222b:
                    /* WARNING: Load size is inaccurate */
  if (((*(byte *)((&DAT_0041df00)[iVar8] + 0x28 + iVar7) & 0x40) == 0) || (*_Buf != '\x1a')) {
    piVar5 = __errno();
    *piVar5 = 0x1c;
    puVar4 = ___doserrno();
    *puVar4 = 0;
  }
LAB_00412264:
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}




/* Library Function - Single Match
    __int64 __cdecl common_lseek_nolock<__int64>(int,__int64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

__int64 __cdecl common_lseek_nolock<__int64>(int param_1,__int64 param_2,int param_3)

{
  byte *pbVar1;
  LARGE_INTEGER liDistanceToMove;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  DWORD unaff_EDI;
  uint local_c;
  uint local_8;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    liDistanceToMove.s.HighPart = (LONG)&local_c;
    liDistanceToMove.s.LowPart = (undefined4)param_2;
    BVar3 = SetFilePointerEx(hFile,liDistanceToMove,param_2._4_4_,unaff_EDI);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      ___acrt_errno_map_os_error(DVar4);
    }
    else if ((local_c & local_8) != 0xffffffff) {
      pbVar1 = (byte *)((&DAT_0041df00)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x30);
      *pbVar1 = *pbVar1 & 0xfd;
      goto LAB_004122ec;
    }
  }
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
LAB_004122ec:
  return CONCAT44(local_8,local_c);
}




/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2015 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  int unaff_EBP;
  __int64 _Var1;
  
  _Var1 = common_lseek_nolock<__int64>(_FileHandle,_Offset,unaff_EBP);
  return _Var1;
}




/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    if (((uint)_File->_flag >> 0xd & 1) != 0) {
      iVar2 = ___acrt_stdio_flush_nolock(_File);
      ___acrt_stdio_free_buffer_nolock(&_File->_ptr);
      iVar3 = __fileno(_File);
      iVar3 = __close(iVar3);
      if (iVar3 < 0) {
        iVar2 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        FID_conflict__free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(_File);
  }
  return iVar2;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int __cdecl FUN_00412383(FILE *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00407d49();
  }
  else {
    if (((uint)param_1->_flag >> 0xc & 1) == 0) {
      __lock_file(param_1);
      iVar2 = __fclose_nolock(param_1);
      FUN_004123f9();
      return iVar2;
    }
    __acrt_stdio_free_stream();
  }
  return -1;
}




void FUN_004123f9(void)

{
  int unaff_EBP;
  
  FUN_0040c4f2(*(int *)(unaff_EBP + -0x20));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_61cee617f5178ae960314fd4d05640a0>,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &,class
   <lambda_9cd88cf8ad10232537feb2133f08c833> >(class <lambda_61cee617f5178ae960314fd4d05640a0>
   &&,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &,class
   <lambda_9cd88cf8ad10232537feb2133f08c833> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_9e9de3de5fa147e2223d7db92bc10aa6>,class <lambda_38ce7e780aa69e748d6df282ebc68efe> &,class
   <lambda_8ca6da459f0f6780f1cff60fdc3d00e5> >(class <lambda_9e9de3de5fa147e2223d7db92bc10aa6>
   &&,class <lambda_38ce7e780aa69e748d6df282ebc68efe> &,class
   <lambda_8ca6da459f0f6780f1cff60fdc3d00e5> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined4 operator()<>(uint *param_1,undefined4 *param_2)

{
  uint _FileHandle;
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  DWORD DVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  ___acrt_lowio_lock_fh(*param_1);
  _FileHandle = *(uint *)*param_2;
  if ((*(byte *)((&DAT_0041df00)[(int)_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3f) * 0x30) & 1)
      != 0) {
    hFile = (HANDLE)__get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 != 0) goto LAB_00412473;
    puVar2 = ___doserrno();
    DVar3 = GetLastError();
    *puVar2 = DVar3;
  }
  piVar4 = __errno();
  *piVar4 = 9;
  uVar5 = 0xffffffff;
LAB_00412473:
  FUN_0041248f();
  return uVar5;
}




void FUN_0041248f(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}




/* Library Function - Single Match
    int __cdecl __acrt_lowio_lock_fh_and_call<class <lambda_6978c1fb23f02e42e1d9e99668cc68aa>
   >(int,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lowio_lock_fh_and_call<class_<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
          (int param_1,<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *param_2)

{
  int iVar1;
  uint local_10;
  int local_c;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = operator()<>(&local_10,(undefined4 *)param_2);
  return iVar1;
}




/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2015 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041e100)) &&
       ((*(byte *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) & 1) !=
        0)) {
      local_8 = &_FileHandle;
      iVar2 = __acrt_lowio_lock_fh_and_call<class_<lambda_6978c1fb23f02e42e1d9e99668cc68aa>_>
                        (_FileHandle,(<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *)&local_8);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00407d49();
  }
  return -1;
}




/* Library Function - Single Match
    ___get_abstract_control_sse2
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_abstract_control_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x7e80) != 0) {
    if ((char)param_1 < '\0') {
      uVar1 = 0x10;
    }
    if ((param_1 & 0x200) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 0x400) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x800) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x1000) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 0x6000) == 0x6000) {
      uVar1 = uVar1 | 0x300;
    }
    else if ((param_1 & 0x4000) == 0) {
      if ((param_1 & 0x2000) != 0) {
        uVar1 = uVar1 | 0x200;
      }
    }
    else {
      uVar1 = uVar1 | 0x100;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    ___get_abstract_control_x87
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_abstract_control_x87(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0xc3d) != 0) {
    if ((param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 0xc00) == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
    else if ((param_1 & 0x800) == 0) {
      if ((param_1 & 0x400) != 0) {
        uVar1 = uVar1 | 0x200;
      }
    }
    else {
      uVar1 = uVar1 | 0x100;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    ___get_machine_control
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_machine_control(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 799) != 0) {
    uVar1 = (uint)((param_1 & 0x10) != 0);
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x10;
    }
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 | 0x20;
    }
    if ((param_1 & 0x300) == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
    else if ((param_1 & 0x200) == 0) {
      if ((param_1 & 0x100) != 0) {
        uVar1 = uVar1 | 0x800;
      }
    }
    else {
      uVar1 = uVar1 | 0x400;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    ___get_machine_control_sse2
   
   Library: Visual Studio 2015 Release */

uint __cdecl ___get_machine_control_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 799) != 0) {
    if ((param_1 & 0x10) != 0) {
      uVar1 = 0x80;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 0x200;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 0x400;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x800;
    }
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 | 0x1000;
    }
    if ((param_1 & 0x300) == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
    else if ((param_1 & 0x200) == 0) {
      if ((param_1 & 0x100) != 0) {
        uVar1 = uVar1 | 0x4000;
      }
    }
    else {
      uVar1 = uVar1 | 0x2000;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    ___get_machine_status_sse2
   
   Library: Visual Studio 2015 Release */

byte __cdecl ___get_machine_status_sse2(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 & 0x1f) != 0) {
    bVar1 = (param_1 & 0x10000010) == 0x10000010;
    if ((param_1 & 0x8000008) == 0x8000008) {
      bVar1 = bVar1 | 4;
    }
    if ((param_1 & 0x4000004) == 0x4000004) {
      bVar1 = bVar1 | 8;
    }
    if ((param_1 & 0x2000002) == 0x2000002) {
      bVar1 = bVar1 | 0x10;
    }
    if ((param_1 & 0x1000001) == 0x1000001) {
      bVar1 = bVar1 | 0x20;
    }
  }
  return bVar1;
}




/* Library Function - Single Match
    ___get_machine_status_x87
   
   Library: Visual Studio 2015 Release */

byte __cdecl ___get_machine_status_x87(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((param_1 & 0x1f) != 0) {
    bVar1 = (param_1 & 0x100010) == 0x100010;
    if ((param_1 & 0x80008) == 0x80008) {
      bVar1 = bVar1 | 4;
    }
    if ((param_1 & 0x40004) == 0x40004) {
      bVar1 = bVar1 | 8;
    }
    if ((param_1 & 0x20002) == 0x20002) {
      bVar1 = bVar1 | 0x10;
    }
    if ((param_1 & 0x10001) == 0x10001) {
      bVar1 = bVar1 | 0x20;
    }
  }
  return bVar1;
}




/* Library Function - Single Match
    __getfpcontrolword
   
   Library: Visual Studio 2015 Release */

uint __getfpcontrolword(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUControlWord;
  undefined4 local_c;
  
  local_c = 0;
  if (0 < DAT_0041dbd4) {
    local_c = MXCSR;
  }
  uVar1 = ___get_abstract_control_x87((uint)in_FPUControlWord);
  uVar2 = ___get_abstract_control_sse2(local_c);
  return (uVar2 | uVar1) & 799;
}




/* Library Function - Single Match
    __getfpstatusword
   
   Library: Visual Studio 2015 Release */

uint __getfpstatusword(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  undefined4 local_c;
  
  uVar2 = 0;
  local_c = 0;
  if (0 < DAT_0041dbd4) {
    local_c = MXCSR;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3d) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x100010;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 0x80008;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 0x40004;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 0x20002;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 0x10001;
    }
  }
  if ((local_c & 0x3d) != 0) {
    if ((local_c & 1) != 0) {
      uVar2 = 0x10000010;
    }
    if ((local_c & 4) != 0) {
      uVar2 = uVar2 | 0x8000008;
    }
    if ((local_c & 8) != 0) {
      uVar2 = uVar2 | 0x4000004;
    }
    if ((local_c & 0x10) != 0) {
      uVar2 = uVar2 | 0x2000002;
    }
    if ((local_c & 0x20) != 0) {
      uVar2 = uVar2 | 0x1000001;
    }
  }
  return uVar1 | uVar2;
}




/* Library Function - Single Match
    __setfpcontrolword
   
   Library: Visual Studio 2015 Release */

void __cdecl __setfpcontrolword(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  ___get_machine_control(799);
  ___get_machine_control(param_1);
  uVar1 = MXCSR;
  if (0 < DAT_0041dbd4) {
    uVar2 = ___get_machine_control_sse2(799);
    MXCSR = ___get_machine_control_sse2(param_1);
    MXCSR = ~uVar2 & uVar1 | MXCSR;
  }
  return;
}




/* Library Function - Single Match
    __setfpstatusword
   
   Library: Visual Studio 2015 Release */

void __cdecl __setfpstatusword(uint param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  ___get_machine_status_x87(0x1f1f001f);
  ___get_machine_status_x87(param_1);
  uVar1 = MXCSR;
  if (0 < DAT_0041dbd4) {
    bVar2 = ___get_machine_status_sse2(0x1f1f001f);
    bVar3 = ___get_machine_status_sse2(param_1);
    MXCSR = ~CONCAT31(extraout_var,bVar2) & uVar1 | CONCAT31(extraout_var_00,bVar3);
  }
  return;
}




void FUN_004129d0(void)

{
  float10 in_ST0;
  
  FUN_004129ee((double)in_ST0);
  return;
}




float10 __cdecl FUN_004129ee(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 in_XMM0 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar6 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar7 = (double)(uVar6 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar7 + 4398046511103.008,0) & 0x7f0;
    dVar9 = (double)(uVar6 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar11 = (double)(uVar6 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar10 = dVar9 * *(double *)(&DAT_0041ab80 + uVar1) - 0.43359375;
    dVar7 = (dVar7 - dVar9) * *(double *)(&DAT_0041ab80 + uVar1);
    dVar8 = ((double)(uVar6 & 0xfffffffffffff | 0x3ff0000000000000) - dVar11) *
            *(double *)(&UNK_0041ab88 + uVar1);
    dVar9 = dVar7 + dVar10;
    in_XMM0._8_8_ = dVar8 + (dVar11 * *(double *)(&UNK_0041ab88 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((in_XMM0._8_8_ * -3.0717952561537047 + 1.775881635348345) * in_XMM0._8_8_ +
                       -1.155016766740187) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((dVar9 * 21.535473262846583 + -10.893557852776363) * dVar9 +
                       5.667600603343536) * dVar9 * dVar9 * dVar9 * dVar9 * dVar9 +
                       dVar9 * 0.0016161024074997105 +
                       *(double *)(&UNK_0041a778 + uVar1) + dVar11 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar8 & *(ulonglong *)(&UNK_0041a5a8 + iVar5)) +
                      *(double *)(&DAT_0041a770 + uVar1) + dVar10 + dVar11 * 0.30102999566395283 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_0041a5a0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        iVar4 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        iVar4 = 9;
      }
      else {
        iVar4 = 0x3e9;
      }
      goto LAB_00412bfa;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  iVar4 = 8;
LAB_00412bfa:
  ___libm_error_support(&param_1,&param_1,&local_c,iVar4);
  return (float10)local_c;
}




undefined4 FUN_0041308c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 0;
  }
  return 0;
}




uint __cdecl FUN_004130e8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}




/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}




float10 __fastcall
FUN_004131f0(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}




/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio 2015 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  __87except(param_2,&local_24,&param_3);
  return (float10)local_c;
}




/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2015 Release */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  char *local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0041d004 ^ (uint)&stack0xfffffffc;
  if (DAT_0041e378 == 0) {
    pcVar2 = ___acrt_invoke_user_matherr;
  }
  else {
    pcVar2 = (code *)DecodePointer(DAT_0041e388);
  }
  if (0x1a < param_4) {
    if (param_4 != 0x1b) {
      if (param_4 == 0x1c) {
        local_24 = "pow";
      }
      else if (param_4 == 0x31) {
        local_24 = "sqrt";
      }
      else if (param_4 == 0x3a) {
        local_24 = "acos";
      }
      else {
        if (param_4 != 0x3d) {
          if ((param_4 != 1000) && (param_4 != 0x3e9)) goto LAB_0041344b;
          uVar1 = *param_1;
          goto LAB_00413398;
        }
        local_24 = "asin";
      }
      goto LAB_004132b7;
    }
    local_28 = 2;
LAB_00413409:
    local_24 = "pow";
    goto LAB_00413410;
  }
  if (param_4 == 0x1a) {
    uVar1 = 0x3ff0000000000000;
LAB_00413398:
    *param_3 = uVar1;
    goto LAB_0041344b;
  }
  if (param_4 < 0xf) {
    if (param_4 == 0xe) {
      local_28 = 3;
      local_24 = "exp";
    }
    else {
      if (param_4 != 2) {
        if (param_4 == 3) {
          local_24 = "log";
        }
        else {
          if (param_4 == 8) {
            local_28 = 2;
            local_24 = "log10";
            goto LAB_00413410;
          }
          if (param_4 != 9) goto LAB_0041344b;
          local_24 = "log10";
        }
LAB_004132b7:
        local_28 = 1;
        local_20 = *param_1;
        local_18 = *param_2;
        puVar5 = &local_28;
        local_10 = *param_3;
        guard_check_icall();
        iVar3 = (*pcVar2)(puVar5);
        if (iVar3 == 0) {
          piVar4 = __errno();
          *piVar4 = 0x21;
        }
        goto LAB_00413446;
      }
      local_28 = 2;
      local_24 = "log";
    }
LAB_00413410:
    local_20 = *param_1;
    local_18 = *param_2;
    puVar5 = &local_28;
    local_10 = *param_3;
    guard_check_icall();
    iVar3 = (*pcVar2)(puVar5);
    if (iVar3 == 0) {
      piVar4 = __errno();
      *piVar4 = 0x22;
    }
  }
  else {
    if (param_4 == 0xf) {
      local_24 = "exp";
    }
    else {
      if (param_4 == 0x18) {
        local_28 = 3;
        goto LAB_00413409;
      }
      if (param_4 != 0x19) goto LAB_0041344b;
      local_24 = "pow";
    }
    local_28 = 4;
    local_20 = *param_1;
    local_18 = *param_2;
    puVar5 = &local_28;
    local_10 = *param_3;
    guard_check_icall();
    (*pcVar2)(puVar5);
  }
LAB_00413446:
  *param_3 = local_10;
LAB_0041344b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (DAT_0041d760 == (HANDLE)0xfffffffe) {
    ___dcrt_lowio_initialize_console_output();
  }
  if ((DAT_0041d760 == (HANDLE)0xffffffff) ||
     (BVar1 = WriteConsoleW(DAT_0041d760,&_WCh,1,&local_8,(LPVOID)0x0), BVar1 == 0)) {
    _WCh = L'\xffff';
  }
  return _WCh;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_123407a5e2ac06da108355a851863b7a>,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &,class
   <lambda_ae55bdf541ad94d75914d381c370e64d> >(class <lambda_123407a5e2ac06da108355a851863b7a>
   &&,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &,class
   <lambda_ae55bdf541ad94d75914d381c370e64d> &&)
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_218ce3db14220d0be481dae8ef3383b6>,class <lambda_628dfdc04ba53c8bfc02c9951375f3f5> &,class
   <lambda_57dc472bd5c9d5f3b2cbca59b8a843ae> >(class <lambda_218ce3db14220d0be481dae8ef3383b6>
   &&,class <lambda_628dfdc04ba53c8bfc02c9951375f3f5> &,class
   <lambda_57dc472bd5c9d5f3b2cbca59b8a843ae> &&)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int operator()<>(uint *param_1,undefined4 *param_2)

{
  uint _FileHandle;
  int iVar1;
  int *piVar2;
  
  ___acrt_lowio_lock_fh(*param_1);
  _FileHandle = *(uint *)*param_2;
  if ((*(byte *)((&DAT_0041df00)[(int)_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3f) * 0x30) & 1)
      == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = __close_nolock(_FileHandle);
  }
  FUN_004135cf();
  return iVar1;
}




void FUN_004135cf(void)

{
  int unaff_EBP;
  
  ___acrt_lowio_unlock_fh(**(uint **)(unaff_EBP + 0x10));
  return;
}




/* Library Function - Single Match
    int __cdecl __acrt_lowio_lock_fh_and_call<class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>
   >(int,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &&)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_lowio_lock_fh_and_call<class_<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_>
          (int param_1,<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *param_2)

{
  int iVar1;
  uint local_10;
  int local_c;
  
  local_c = param_1;
  local_10 = param_1;
  iVar1 = operator()<>(&local_10,(undefined4 *)param_2);
  return iVar1;
}




/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2015 Release */

int __cdecl __close(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int *local_8;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0041e100)) &&
       ((*(byte *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) & 1) !=
        0)) {
      local_8 = &_FileHandle;
      iVar3 = __acrt_lowio_lock_fh_and_call<class_<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>_>
                        (_FileHandle,(<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *)&local_8);
      return iVar3;
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00407d49();
  }
  return -1;
}




/* Library Function - Single Match
    __close_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  int iVar4;
  DWORD DVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_0041df00 + 0x88) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_0041df00 + 0x58) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_00413698;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar5 = GetLastError();
      goto LAB_004136ea;
    }
  }
LAB_00413698:
  DVar5 = 0;
LAB_004136ea:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_0041df00)[_FileHandle >> 6] + 0x28 + (_FileHandle & 0x3fU) * 0x30) = 0;
  if (DVar5 == 0) {
    iVar4 = 0;
  }
  else {
    ___acrt_errno_map_os_error(DVar5);
    iVar4 = -1;
  }
  return iVar4;
}




/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  LOCK();
  param_1[3] = 0;
  UNLOCK();
  return;
}




/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = (char *)((byte *)_Str1 + 1);
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar5 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_004137b1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    _MaxCount = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar5 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_004137b1:
      _MaxCount = 0xffffffff;
      if (!bVar5) {
        _MaxCount = 1;
      }
    }
  }
  return _MaxCount;
}




undefined4 __cdecl FUN_004137c1(double param_1)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = FUN_00413a61(param_1);
    fVar3 = (float10)param_1;
    if ((NAN(fVar3) || NAN(fVar2)) != (fVar3 == fVar2)) {
      fVar2 = FUN_00413a61((double)(fVar3 * (float10)0.5));
      fVar3 = (float10)(double)(fVar3 * (float10)0.5);
      if ((NAN(fVar3) || NAN(fVar2)) != (fVar3 == fVar2)) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}




undefined4 __cdecl FUN_0041382b(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  if (param_4 == 0x7ff00000) {
    if (param_3 != 0) goto LAB_004138bf;
    uVar2 = 0x3ff0000000000000;
    if (1.0 < dVar1 == NAN(dVar1)) {
      if (dVar1 < 1.0) {
        uVar2 = 0;
      }
      goto LAB_00413950;
    }
  }
  else {
    if ((param_4 == -0x100000) && (param_3 == 0)) {
      if (1.0 < dVar1 == NAN(dVar1)) {
        uVar2 = 0x3ff0000000000000;
        if (dVar1 < 1.0) {
          uVar2 = 0x7ff0000000000000;
        }
      }
      else {
        uVar2 = 0;
      }
      goto LAB_00413950;
    }
LAB_004138bf:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = FUN_004137c1((double)CONCAT44(param_4,param_3));
      uVar2 = 0;
      dVar1 = (double)CONCAT44(param_4,param_3);
      if (dVar1 <= 0.0) {
        if (dVar1 < 0.0 == NAN(dVar1)) {
          uVar2 = 0x3ff0000000000000;
        }
        else if (iVar3 == 1) {
          uVar2 = 0x8000000000000000;
        }
      }
      else {
        uVar2 = 0x7ff0000000000000;
        if (iVar3 == 1) {
          uVar2 = 0xfff0000000000000;
        }
      }
      goto LAB_00413950;
    }
    if (param_1 != 0) {
      return 0;
    }
    dVar1 = (double)CONCAT44(param_4,param_3);
    if (dVar1 <= 0.0) {
      uVar2 = 0;
      if (dVar1 < 0.0 == NAN(dVar1)) {
        uVar2 = 0x3ff0000000000000;
      }
      goto LAB_00413950;
    }
  }
  uVar2 = 0x7ff0000000000000;
LAB_00413950:
  *param_5 = uVar2;
  return 0;
}




/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2015 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_0041d004 ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_004139be:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_004139be;
    if (iVar2 != 8) goto LAB_00413a20;
    uVar3 = 0x10;
  }
  bVar1 = __handle_exc(uVar3,(double *)(param_2 + 6),local_94);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    __raise_exc(local_90,&local_94,uVar3,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
  }
LAB_00413a20:
  __ctrlfp();
  if (((*param_2 == 8) || (bVar1 = ___acrt_has_user_matherr(), !bVar1)) ||
     (iVar2 = ___acrt_invoke_user_matherr(param_2), iVar2 == 0)) {
    __set_errno_from_matherr(*param_2);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}




float10 __cdecl FUN_00413a61(double param_1)

{
  return (float10)ROUND(param_1);
}




/* Library Function - Single Match
    __errcode
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __errcode(uint param_1)

{
  undefined4 uStack_8;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * 2;
      }
      uStack_8 = 3;
    }
    else {
      uStack_8 = 2;
    }
  }
  else {
    uStack_8 = 5;
  }
  return uStack_8;
}




/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2015 Release */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  
  local_14 = DAT_0041d004 ^ (uint)&stack0xfffffff0;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4,0);
  }
  iVar2 = __errcode(param_1);
  bVar1 = ___acrt_has_user_matherr();
  if ((bVar1) && (iVar2 != 0)) {
    __umatherr(iVar2,param_2,(int)param_3,(int)((ulonglong)param_3 >> 0x20),0,0,SUB84(param_4,0),
               (int)((ulonglong)param_4 >> 0x20));
  }
  else {
    __set_errno_from_matherr(iVar2);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}




/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2015 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  uint local_14;
  byte bStack_10;
  undefined1 uStack_f;
  ushort uStack_e;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_00411638();
    uVar3 = param_1 & 0x17;
    goto LAB_00413d36;
  }
  if ((param_1 & param_3 & 4) != 0) {
    FUN_00411638();
    uVar3 = param_1 & 0x1b;
    goto LAB_00413d36;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      if (NAN(*param_2) == (*param_2 == 0.0)) {
        fVar5 = (float10)FUN_0041413e(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_8
                                     );
        local_8 = local_8 + -0x600;
        dVar1 = (double)fVar5;
        local_14 = SUB84(dVar1,0);
        bStack_10 = (byte)((ulonglong)dVar1 >> 0x20);
        uStack_f = (undefined1)((ulonglong)dVar1 >> 0x28);
        uStack_e = (ushort)((ulonglong)dVar1 >> 0x30);
        if (local_8 < -0x432) {
          fVar6 = (float10)0 * fVar5;
          bVar4 = true;
        }
        else {
          uStack_e = uStack_e & 0xf | 0x10;
          if (local_8 < -0x3fd) {
            iVar2 = -0x3fd - local_8;
            do {
              if (((local_14 & 1) != 0) && (!bVar4)) {
                bVar4 = true;
              }
              local_14 = local_14 >> 1;
              if ((bStack_10 & 1) != 0) {
                local_14 = local_14 | 0x80000000;
              }
              uVar3 = CONCAT22(uStack_e,CONCAT11(uStack_f,bStack_10)) >> 1;
              bStack_10 = (byte)uVar3;
              uStack_f = (undefined1)(uVar3 >> 8);
              uStack_e = uStack_e >> 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          fVar6 = (float10)(double)CONCAT26(uStack_e,CONCAT15(uStack_f,CONCAT14(bStack_10,local_14))
                                           );
          if (fVar5 < (float10)0) {
            fVar6 = -fVar6;
          }
        }
        *param_2 = (double)fVar6;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_00411638();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_00413d36;
  }
  FUN_00411638();
  uVar3 = param_3 & 0xc00;
  if (uVar3 == 0) {
    if (0.0 < *param_2 == NAN(*param_2)) {
LAB_00413c50:
      dVar1 = INFINITY;
      goto LAB_00413c56;
    }
LAB_00413c48:
    dVar1 = INFINITY;
LAB_00413c58:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      if (0.0 < *param_2 == NAN(*param_2)) goto LAB_00413c50;
      dVar1 = 1.79769313486232e+308;
      goto LAB_00413c58;
    }
    if (uVar3 == 0x800) {
      if (0.0 < *param_2 != NAN(*param_2)) goto LAB_00413c48;
      dVar1 = 1.79769313486232e+308;
LAB_00413c56:
      dVar1 = -dVar1;
      goto LAB_00413c58;
    }
    if (uVar3 == 0xc00) {
      dVar1 = 1.79769313486232e+308;
      if (0.0 < *param_2 != NAN(*param_2)) goto LAB_00413c58;
      goto LAB_00413c56;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_00413d36:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_00411638();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}




/* Library Function - Single Match
    __raise_exc
   
   Library: Visual Studio 2015 Release */

void __cdecl
__raise_exc(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}




/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2015 Release */

void __cdecl
__raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
              int param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  DWORD dwExceptionCode;
  
  puVar1 = param_2;
  param_1[1] = 0;
  dwExceptionCode = 0xc000000d;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  uVar3 = __statfp();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_00413ede;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_00413ede:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_00413f14:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_00413f14;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_00414025;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_00414025:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00414056;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_00414056:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}




/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2015 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if (param_1 - 2U < 2) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}




/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2015 Release */

float10 __cdecl
__umatherr(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  double dVar1;
  int iVar2;
  int local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = (undefined *)0x0;
  iVar2 = 0;
  do {
    if ((&DAT_0041b028)[iVar2 * 2] == param_2) {
      local_20 = (&PTR_DAT_0041b02c)[iVar2 * 2];
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1d);
  if (local_20 == (undefined *)0x0) {
    __ctrlfp();
    __set_errno_from_matherr(param_1);
    dVar1 = (double)CONCAT44(param_8,param_7);
  }
  else {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp();
    iVar2 = ___acrt_invoke_user_matherr(&local_24);
    if (iVar2 == 0) {
      __set_errno_from_matherr(param_1);
    }
    dVar1 = (double)CONCAT44(uStack_8,local_c);
  }
  return (float10)dVar1;
}




void __cdecl FUN_0041413e(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,
                           CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
  if (NAN(dVar2) == (dVar2 == 0.0)) {
    if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
      iVar5 = -0x3fd;
      uVar3 = param_2;
      if ((param_2 & 0x100000) == 0) {
        do {
          uVar1 = uVar3 * 2;
          param_2._0_2_ = (undefined2)uVar1;
          uVar3 = uVar1;
          if (param_1 < 0) {
            uVar3 = uVar1 | 1;
            param_2._0_2_ = (undefined2)uVar3;
          }
          param_1 = param_1 * 2;
          iVar5 = iVar5 + -1;
        } while ((uVar1 & 0x100000) == 0);
        param_2 = CONCAT22((short)(uVar1 >> 0x10),(undefined2)param_2);
      }
      uVar4 = (ushort)(param_2 >> 0x10) & 0xffef;
      param_2._2_1_ = (undefined1)uVar4;
      param_2._3_1_ = (byte)(uVar4 >> 8);
      if (dVar2 < 0.0) {
        param_2._3_1_ = param_2._3_1_ | 0x80;
      }
      __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1))
                        ),0);
    }
    else {
      __set_exp(dVar2,0);
      iVar5 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
    }
  }
  else {
    iVar5 = 0;
  }
  *param_3 = iVar5;
  return;
}




/* Library Function - Single Match
    __set_exp
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}




/* Library Function - Single Match
    __sptype
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __cdecl __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}




/* Library Function - Single Match
    ___dcrt_lowio_initialize_console_output
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void ___dcrt_lowio_initialize_console_output(void)

{
  DAT_0041d760 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}




/* Library Function - Single Match
    __fpclass
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      iVar1 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = 2;
    }
    return iVar1;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (NAN(_X) != (_X == 0.0)) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}




/* Library Function - Single Match
    __FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(pImageBase + 0x3c);
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
   
   Library: Visual Studio 2017 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_0041d004 ^ 0x41bf00;
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




/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if (((*(short *)pImageBase == 0x5a4d) &&
      (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) &&
     ((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b)) {
    return 1;
  }
  return 0;
}




/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041d004 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2015 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}




/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4_GS
   
   Library: Visual Studio 2015 Release */

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041d004 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_004145e9(void)

{
  uint unaff_EBP;
  
  __security_check_cookie(*(uint *)(unaff_EBP - 0x1c) ^ unaff_EBP);
  return;
}




/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2015 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}




/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2015 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}




/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2015 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}




/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2015 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}




/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}




/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio 2015 Release */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}




ulonglong __fastcall FUN_00414790(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_0041dbd4 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __alloca_probe
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}




undefined1 (*) [16] __cdecl FUN_00414880(undefined1 (*param_1) [16],byte param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  char *pcVar8;
  byte *pbVar9;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte *pbVar10;
  
  if (DAT_0041dbd4 != 0) {
    if (DAT_0041dbd4 < 2) {
      auVar14 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
      uVar3 = -1 << (sbyte)((uint)param_1 & 0xf);
      pcVar8 = (char *)((int)param_1 - ((uint)param_1 & 0xf));
      pauVar7 = (undefined1 (*) [16])0x0;
      while( true ) {
        auVar13[0] = -(*pcVar8 == '\0');
        auVar13[1] = -(pcVar8[1] == '\0');
        auVar13[2] = -(pcVar8[2] == '\0');
        auVar13[3] = -(pcVar8[3] == '\0');
        auVar13[4] = -(pcVar8[4] == '\0');
        auVar13[5] = -(pcVar8[5] == '\0');
        auVar13[6] = -(pcVar8[6] == '\0');
        auVar13[7] = -(pcVar8[7] == '\0');
        auVar13[8] = -(pcVar8[8] == '\0');
        auVar13[9] = -(pcVar8[9] == '\0');
        auVar13[10] = -(pcVar8[10] == '\0');
        auVar13[0xb] = -(pcVar8[0xb] == '\0');
        auVar13[0xc] = -(pcVar8[0xc] == '\0');
        auVar13[0xd] = -(pcVar8[0xd] == '\0');
        auVar13[0xe] = -(pcVar8[0xe] == '\0');
        auVar13[0xf] = -(pcVar8[0xf] == '\0');
        auVar12[0] = -(*pcVar8 == auVar14[0]);
        auVar12[1] = -(pcVar8[1] == auVar14[1]);
        auVar12[2] = -(pcVar8[2] == auVar14[2]);
        auVar12[3] = -(pcVar8[3] == auVar14[3]);
        auVar12[4] = -(pcVar8[4] == auVar14[4]);
        auVar12[5] = -(pcVar8[5] == auVar14[5]);
        auVar12[6] = -(pcVar8[6] == auVar14[6]);
        auVar12[7] = -(pcVar8[7] == auVar14[7]);
        auVar12[8] = -(pcVar8[8] == auVar14[0]);
        auVar12[9] = -(pcVar8[9] == auVar14[1]);
        auVar12[10] = -(pcVar8[10] == auVar14[2]);
        auVar12[0xb] = -(pcVar8[0xb] == auVar14[3]);
        auVar12[0xc] = -(pcVar8[0xc] == auVar14[4]);
        auVar12[0xd] = -(pcVar8[0xd] == auVar14[5]);
        auVar12[0xe] = -(pcVar8[0xe] == auVar14[6]);
        auVar12[0xf] = -(pcVar8[0xf] == auVar14[7]);
        uVar5 = (ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar13[0xf] >> 7) << 0xf) & uVar3;
        if (uVar5 != 0) break;
        uVar3 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar12[0xf] >> 7) << 0xf) & uVar3;
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar3 != 0) {
          pauVar7 = (undefined1 (*) [16])(pcVar8 + iVar6);
        }
        uVar3 = 0xffffffff;
        pcVar8 = pcVar8 + 0x10;
      }
      uVar3 = (uVar5 * 2 & uVar5 * -2) - 1 &
              (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar12[0xf] >> 7) << 0xf) & uVar3;
      iVar6 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      pauVar4 = (undefined1 (*) [16])(pcVar8 + iVar6);
      if (uVar3 == 0) {
        pauVar4 = pauVar7;
      }
      return pauVar4;
    }
    uVar3 = (uint)param_2;
    if (uVar3 == 0) {
      pcVar8 = (char *)((uint)param_1 & 0xfffffff0);
      auVar14[0] = -(*pcVar8 == '\0');
      auVar14[1] = -(pcVar8[1] == '\0');
      auVar14[2] = -(pcVar8[2] == '\0');
      auVar14[3] = -(pcVar8[3] == '\0');
      auVar14[4] = -(pcVar8[4] == '\0');
      auVar14[5] = -(pcVar8[5] == '\0');
      auVar14[6] = -(pcVar8[6] == '\0');
      auVar14[7] = -(pcVar8[7] == '\0');
      auVar14[8] = -(pcVar8[8] == '\0');
      auVar14[9] = -(pcVar8[9] == '\0');
      auVar14[10] = -(pcVar8[10] == '\0');
      auVar14[0xb] = -(pcVar8[0xb] == '\0');
      auVar14[0xc] = -(pcVar8[0xc] == '\0');
      auVar14[0xd] = -(pcVar8[0xd] == '\0');
      auVar14[0xe] = -(pcVar8[0xe] == '\0');
      auVar14[0xf] = -(pcVar8[0xf] == '\0');
      uVar3 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar14[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
      while (uVar3 == 0) {
        auVar11[0] = -(pcVar8[0x10] == '\0');
        auVar11[1] = -(pcVar8[0x11] == '\0');
        auVar11[2] = -(pcVar8[0x12] == '\0');
        auVar11[3] = -(pcVar8[0x13] == '\0');
        auVar11[4] = -(pcVar8[0x14] == '\0');
        auVar11[5] = -(pcVar8[0x15] == '\0');
        auVar11[6] = -(pcVar8[0x16] == '\0');
        auVar11[7] = -(pcVar8[0x17] == '\0');
        auVar11[8] = -(pcVar8[0x18] == '\0');
        auVar11[9] = -(pcVar8[0x19] == '\0');
        auVar11[10] = -(pcVar8[0x1a] == '\0');
        auVar11[0xb] = -(pcVar8[0x1b] == '\0');
        auVar11[0xc] = -(pcVar8[0x1c] == '\0');
        auVar11[0xd] = -(pcVar8[0x1d] == '\0');
        auVar11[0xe] = -(pcVar8[0x1e] == '\0');
        auVar11[0xf] = -(pcVar8[0x1f] == '\0');
        pcVar8 = pcVar8 + 0x10;
        uVar3 = (uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar11[0xf] >> 7) << 0xf);
      }
      iVar6 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
        }
      }
      pauVar7 = (undefined1 (*) [16])(pcVar8 + iVar6);
    }
    else {
      pauVar7 = (undefined1 (*) [16])0x0;
      uVar5 = (uint)param_1 & 0xf;
      while (uVar5 != 0) {
        if ((byte)(*param_1)[0] == uVar3) {
          pauVar7 = param_1;
        }
        if ((byte)(*param_1)[0] == 0) {
          return pauVar7;
        }
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
        uVar5 = (uint)param_1 & 0xf;
      }
      do {
        pauVar4 = param_1 + 1;
        iVar6 = pcmpistri(ZEXT416(uVar3),*param_1,0x40);
        if ((undefined1 (*) [16])0xffffffef < param_1) {
          pauVar7 = (undefined1 (*) [16])(pauVar4[-1] + iVar6);
        }
        param_1 = pauVar4;
      } while (pauVar4 != (undefined1 (*) [16])0x0);
    }
    return pauVar7;
  }
  iVar6 = -1;
  do {
    pauVar7 = param_1;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pauVar7 = (undefined1 (*) [16])(*param_1 + 1);
    puVar2 = *param_1;
    param_1 = pauVar7;
  } while (*puVar2 != '\0');
  iVar6 = -(iVar6 + 1);
  pbVar10 = pauVar7[-1] + 0xf;
  do {
    pbVar9 = pbVar10;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pbVar9 = pbVar10 + -1;
    bVar1 = *pbVar10;
    pbVar10 = pbVar9;
  } while (param_2 != bVar1);
  pauVar7 = (undefined1 (*) [16])(pbVar9 + 1);
  if ((*pauVar7)[0] != param_2) {
    pauVar7 = (undefined1 (*) [16])0x0;
  }
  return pauVar7;
}




void Unwind_00414af0(void)

{
  int unaff_EBP;
  
  ~basic_string<>(unaff_EBP + -0x3c);
  return;
}




void Unwind_00414b40(void)

{
  FUN_00402180();
  return;
}




void Unwind_00414bb0(void)

{
  int unaff_EBP;
  
  FUN_004037c0(unaff_EBP + -0x1c);
  return;
}




void Unwind_00414bd3(void)

{
  int unaff_EBP;
  
  ~basic_string<>(unaff_EBP + 0x20);
  return;
}




void Unwind_00414bdb(void)

{
  int unaff_EBP;
  
  ~basic_string<>(unaff_EBP + 8);
  return;
}



