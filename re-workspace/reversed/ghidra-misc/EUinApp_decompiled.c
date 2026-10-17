
exception * __fastcall FUN_00401000(exception *param_1)

{
  std::exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __thiscall std::bad_alloc::~bad_alloc(void)
   
   Library: Visual Studio 2005 Debug */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = vftable;
  std::exception::~exception((exception *)this);
  return;
}




bad_alloc * __thiscall FUN_00401050(void *this,uint param_1)

{
  std::bad_alloc::~bad_alloc((bad_alloc *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (bad_alloc *)this;
}




undefined4 __cdecl FUN_00401080(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}




void FUN_00401090(void)

{
  return;
}




undefined4 * __thiscall FUN_004010a0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return (undefined4 *)this;
}




undefined4 __fastcall FUN_004010c0(undefined4 *param_1)

{
  return *param_1;
}




undefined4 __fastcall FUN_004010d0(undefined4 param_1)

{
  return param_1;
}




void FUN_004010e0(void)

{
  return;
}




undefined4 * __fastcall FUN_004010f0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void __thiscall FUN_00401110(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return;
}




undefined4 __fastcall FUN_00401130(int *param_1)

{
  undefined4 local_c;
  
  if (*param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_004010c0((undefined4 *)*param_1);
  }
  return local_c;
}




bool __thiscall FUN_00401160(void *this,int *param_1)

{
                    /* WARNING: Load size is inaccurate */
  return *this == *param_1;
}




bool __fastcall FUN_00401180(int *param_1)

{
  return *param_1 != 0;
}




exception * __thiscall
FUN_004011a0(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404339;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception((exception *)this);
  local_8 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xc),param_1);
  ExceptionList = local_10;
  return (exception *)this;
}




void __fastcall FUN_00401210(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  std::exception::~exception(param_1);
  return;
}




void __fastcall FUN_00401240(int param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  return;
}




exception * __thiscall FUN_00401260(void *this,uint param_1)

{
  FUN_00401210((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}




undefined4 * __thiscall
FUN_00401290(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  FUN_004011a0(this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (undefined4 *)this;
}




void __fastcall FUN_004012c0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  FUN_00401210(param_1);
  return;
}




exception * __thiscall FUN_004012e0(void *this,uint param_1)

{
  FUN_004012c0((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}




undefined4 * __thiscall
FUN_00401310(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  FUN_004011a0(this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (undefined4 *)this;
}




void __fastcall FUN_00401340(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  FUN_00401210(param_1);
  return;
}




exception * __thiscall FUN_00401360(void *this,uint param_1)

{
  FUN_00401340((exception *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (exception *)this;
}




undefined4 * __thiscall FUN_00401390(void *this,exception *param_1)

{
  FUN_004013c0(this,param_1);
  *(undefined ***)this = std::out_of_range::vftable;
  return (undefined4 *)this;
}




exception * __thiscall FUN_004013c0(void *this,exception *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404339;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::exception::exception((exception *)this,param_1);
  local_8 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  ExceptionList = local_10;
  return (exception *)this;
}




undefined4 * __fastcall FUN_00401440(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




void __fastcall FUN_00401470(CRegKey *param_1)

{
  ATL::CRegKey::Close(param_1);
  return;
}




/* Library Function - Single Match
    public: long __thiscall ATL::CRegKey::Close(void)
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2010 Debug */

long __thiscall ATL::CRegKey::Close(CRegKey *this)

{
  LSTATUS local_8;
  
  local_8 = 0;
  if (*(int *)this != 0) {
    local_8 = RegCloseKey(*(HKEY *)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  return local_8;
}




LSTATUS __thiscall
FUN_004014e0(void *this,HKEY param_1,LPCSTR param_2,LPSTR param_3,DWORD param_4,uint param_5,
            LPSECURITY_ATTRIBUTES param_6,DWORD *param_7)

{
  DWORD local_10;
  LSTATUS local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = RegCreateKeyExA(param_1,param_2,0,param_3,param_4,param_5,param_6,&local_8,&local_10);
  if (param_7 != (DWORD *)0x0) {
    *param_7 = local_10;
  }
  if (local_c == 0) {
    local_c = ATL::CRegKey::Close((CRegKey *)this);
    *(HKEY *)this = local_8;
    *(uint *)((int)this + 4) = param_5 & 0x300;
  }
  return local_c;
}




LSTATUS __thiscall FUN_00401560(void *this,HKEY param_1,LPCSTR param_2,uint param_3)

{
  LSTATUS local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = RegOpenKeyExA(param_1,param_2,0,param_3,&local_8);
  if (local_c == 0) {
    local_c = ATL::CRegKey::Close((CRegKey *)this);
    *(HKEY *)this = local_8;
    *(uint *)((int)this + 4) = param_3 & 0x300;
  }
  return local_c;
}




LSTATUS __thiscall FUN_004015d0(void *this,LPCSTR param_1,LPBYTE param_2)

{
  LSTATUS LVar1;
  DWORD local_c;
  DWORD local_8;
  
  local_c = 4;
                    /* WARNING: Load size is inaccurate */
  LVar1 = RegQueryValueExA(*this,param_1,(LPDWORD)0x0,&local_8,param_2,&local_c);
  if (LVar1 == 0) {
    if (local_8 == 4) {
      LVar1 = 0;
    }
    else {
      LVar1 = 0xd;
    }
  }
  return LVar1;
}




void __thiscall FUN_00401630(void *this,LPCSTR param_1)

{
                    /* WARNING: Load size is inaccurate */
  RegSetValueExA(*this,param_1,0,4,&stack0x00000008,4);
  return;
}




undefined4 __cdecl FUN_00401660(LPCSTR param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  CRegKey local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 != (LPCSTR)0x0) && (param_2 != (LPCSTR)0x0)) {
    FUN_00401440((undefined4 *)local_14);
    LVar1 = FUN_00401560(local_14,(HKEY)0x80000001,param_1,0x2001f);
    if (LVar1 == 0) {
      local_c = 0;
      LVar1 = FUN_004015d0(local_14,param_2,(LPBYTE)&local_c);
      if (LVar1 == 0) {
        local_8 = local_c;
        FUN_00401470(local_14);
      }
      else {
        local_8 = 0xfffffffe;
        FUN_00401470(local_14);
      }
    }
    else {
      local_8 = 0xffffffff;
      FUN_00401470(local_14);
    }
  }
  return local_8;
}




void __cdecl
FUN_00401700(HKEY param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                     *param_3,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_4)

{
  wchar_t *lpValueName;
  LPDWORD lpReserved;
  LPDWORD lpType;
  wchar_t *lpData;
  DWORD *lpcbData;
  DWORD local_410;
  wchar_t local_40c [512];
  uint local_c;
  LSTATUS local_8;
  
  local_c = DAT_0040701c ^ (uint)&stack0xfffffffc;
  if (param_1 != (HKEY)0x0) {
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    operator=(param_3,param_4);
    memset(local_40c,0,0x400);
    local_410 = 0x400;
    local_8 = 0;
    lpcbData = &local_410;
    lpData = local_40c;
    lpType = (LPDWORD)0x0;
    lpReserved = (LPDWORD)0x0;
    lpValueName = std::
                  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  ::c_str(param_2);
    local_8 = RegQueryValueExW(param_1,lpValueName,lpReserved,lpType,(LPBYTE)lpData,lpcbData);
    if (local_8 == 0) {
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      operator=(param_3,local_40c);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}




void * __cdecl
FUN_004017b0(void *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2,wchar_t param_3)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_68 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_4c [28];
  undefined4 local_30 [6];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404613;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_18 = std::
             basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
             find_first_of(param_2,param_3,0);
  FUN_004021e0(local_30);
  local_8 = 1;
  while (local_18 != *(uint *)npos_exref) {
    pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)std::
                basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                ::substr(param_2,(uint)local_4c,local_14);
    local_8._0_1_ = 2;
    FUN_00402400(local_30,pbVar1);
    local_8 = CONCAT31(local_8._1_3_,1);
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_4c)
    ;
    local_14 = local_18 + 1;
    local_18 = std::
               basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               ::find_first_of(param_2,param_3,local_14);
  }
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           substr(param_2,(uint)local_68,local_14);
  local_8._0_1_ = 3;
  FUN_00402400(local_30,pbVar1);
  local_8._0_1_ = 1;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_68);
  FUN_00402250(param_1,local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FID_conflict__CAtlWinModule(local_30);
  ExceptionList = local_10;
  return param_1;
}




void __cdecl
FUN_004018f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  char *pcVar3;
  LPSTR lpMultiByteStr;
  int iVar4;
  char *lpMultiByteStr_00;
  LPCSTR pCVar5;
  LPBOOL pBVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_34 [28];
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004042fc;
  local_10 = ExceptionList;
  local_14 = DAT_0040701c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_8._0_1_ = 2;
  pBVar6 = (LPBOOL)0x0;
  pCVar5 = (LPCSTR)0x0;
  iVar4 = 0;
  lpMultiByteStr = (LPSTR)0x0;
  uVar1 = std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          ::size((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&stack0x00000008);
  pwVar2 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&stack0x00000008);
  local_18 = WideCharToMultiByte(0,0,pwVar2,uVar1,lpMultiByteStr,iVar4,pCVar5,pBVar6);
  pcVar3 = (char *)FUN_00403982(local_18 + 1);
  pBVar6 = (LPBOOL)0x0;
  pCVar5 = (LPCSTR)0x0;
  lpMultiByteStr_00 = pcVar3;
  iVar4 = local_18;
  uVar1 = std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
          ::size((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&stack0x00000008);
  pwVar2 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&stack0x00000008);
  WideCharToMultiByte(0,0,pwVar2,uVar1,lpMultiByteStr_00,iVar4,pCVar5,pBVar6);
  pcVar3[local_18] = '\0';
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (local_34,pcVar3);
  operator_delete__(pcVar3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_34);
  local_8._0_1_ = 1;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_34);
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_00401a20(void)

{
  wchar_t *pwVar1;
  uint uVar2;
  void *this;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *this_00;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this_01;
  char *_Str;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  abStack_138 [4];
  undefined4 uStack_134;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_100 [28];
  undefined4 local_e4 [6];
  undefined1 *local_cc;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_c8 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_ac [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_90 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_74 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_58 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3c [28];
  uint local_20;
  int local_1c;
  HKEY local_18;
  LSTATUS local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404686;
  local_10 = ExceptionList;
  local_20 = DAT_0040701c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_3c,L"");
  local_8 = 0;
  local_18 = (HKEY)0x0;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_58,L"SOFTWARE\\Microsoft\\Internet Explorer");
  local_8._0_1_ = 1;
  phkResult = &local_18;
  samDesired = 1;
  ulOptions = 0;
  pwVar1 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           c_str(local_58);
  uStack_134 = 0x401a9d;
  local_14 = RegOpenKeyExW((HKEY)0x80000002,pwVar1,ulOptions,samDesired,phkResult);
  if (local_14 == 0) {
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (local_74,L"");
    local_8._0_1_ = 2;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (local_90,L"svcVersion");
    local_8._0_1_ = 3;
    local_14 = FUN_00401700(local_18,local_90,local_3c,local_74);
    local_8._0_1_ = 2;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_90)
    ;
    local_8._0_1_ = 1;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_74)
    ;
    if (local_14 != 0) {
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (local_ac,L"");
      local_8._0_1_ = 4;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (local_c8,L"version");
      local_8._0_1_ = 5;
      FUN_00401700(local_18,local_c8,local_3c,local_ac);
      local_8._0_1_ = 4;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (local_c8);
      local_8._0_1_ = 1;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (local_ac);
    }
    RegCloseKey(local_18);
    uVar2 = std::
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
            length(local_3c);
    if (uVar2 != 0) {
      this = FUN_004017b0(local_e4,local_3c,L'.');
      local_8._0_1_ = 6;
      this_00 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)FUN_004023b0(this,0);
      pwVar1 = std::
               basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               ::c_str(this_00);
      local_cc = abStack_138;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (abStack_138,pwVar1);
      this_01 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                FUN_004018f0(local_100);
      local_8._0_1_ = 7;
      _Str = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(this_01);
      local_1c = atoi(_Str);
      local_8._0_1_ = 6;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_100);
      local_8._0_1_ = 1;
      FID_conflict__CAtlWinModule(local_e4);
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_58);
  local_8 = 0xffffffff;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_3c);
  ExceptionList = local_10;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 FUN_00401c90(void)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_00401a20();
  if (iVar1 == 9) {
    local_8 = 9000;
  }
  else if (iVar1 == 10) {
    local_8 = 10000;
  }
  else {
    local_8 = 11000;
  }
  return local_8;
}




void FUN_00401ce0(void)

{
  wchar_t *lpSubKey;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  wchar_t *in_stack_00000020;
  DWORD Reserved;
  LPWSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  LPDWORD lpdwDisposition;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_ac [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_90 [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_74 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_58 [28];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_3c [31];
  undefined1 local_1d;
  HKEY local_1c;
  LSTATUS local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004045ac;
  local_10 = ExceptionList;
  local_14 = DAT_0040701c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = (HKEY)0x0;
  local_1d = 1;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_3c,L"Software\\Microsoft\\Internet Explorer\\Main\\FeatureControl\\");
  local_8._0_1_ = 1;
  std::operator+<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            (local_58,local_3c);
  local_8._0_1_ = 2;
  lpdwDisposition = (LPDWORD)0x0;
  phkResult = &local_1c;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  samDesired = 0x20006;
  dwOptions = 1;
  lpClass = (LPWSTR)0x0;
  Reserved = 0;
  lpSubKey = std::
             basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
             c_str(local_58);
  local_18 = RegCreateKeyExW((HKEY)0x80000001,lpSubKey,Reserved,lpClass,dwOptions,samDesired,
                             lpSecurityAttributes,phkResult,lpdwDisposition);
  if (local_18 == 0) {
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (local_90,L"");
    local_8._0_1_ = 3;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                *)&stack0xffffff14,in_stack_00000020);
    FUN_004018f0(local_74);
    local_8._0_1_ = 4;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                *)&stack0xffffff14,local_58);
    FUN_004018f0(local_ac);
    local_8 = CONCAT31(local_8._1_3_,5);
    pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_74);
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_ac);
    iVar3 = FUN_00401660(pcVar2,pcVar1);
    if (iVar3 < 1) {
      local_18 = RegSetValueExW(local_1c,in_stack_00000020,0,4,&stack0x00000024,4);
    }
    if (local_18 != 0) {
      local_1d = 0;
    }
    local_18 = RegCloseKey(local_1c);
    if (local_18 != 0) {
      local_1d = 0;
    }
    local_8._0_1_ = 4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_ac);
    local_8._0_1_ = 3;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_74);
    local_8._0_1_ = 2;
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_90)
    ;
  }
  else {
    local_1d = 0;
  }
  local_8._0_1_ = 1;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_58);
  local_8 = (uint)local_8._1_3_ << 8;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_3c);
  local_8 = 0xffffffff;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)&stack0x00000004);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




undefined1 __cdecl FUN_00401ef0(LPCSTR param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  int iVar2;
  CRegKey local_10 [11];
  undefined1 local_5;
  
  local_5 = 0;
  if ((param_1 != (LPCSTR)0x0) && (param_2 != (LPCSTR)0x0)) {
    FUN_00401440((undefined4 *)local_10);
    LVar1 = FUN_00401560(local_10,(HKEY)0x80000001,param_1,0x2001f);
    if ((LVar1 == 0) ||
       (LVar1 = FUN_004014e0(local_10,(HKEY)0x80000001,param_1,(LPSTR)0x0,0,0x2001f,
                             (LPSECURITY_ATTRIBUTES)0x0,(DWORD *)0x0), LVar1 == 0)) {
      iVar2 = FUN_00401630(local_10,param_2);
      if (iVar2 == 0) {
        local_5 = 1;
        FUN_00401470(local_10);
      }
      else {
        FUN_00401470(local_10);
      }
    }
    else {
      FUN_00401470(local_10);
    }
  }
  return local_5;
}




void FUN_00401fb0(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_4c [28];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [28];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404542;
  local_10 = ExceptionList;
  local_14 = DAT_0040701c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_4c,"Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings");
  local_8 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_30,"SecureProtocols");
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (local_30);
  pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::c_str
                     (local_4c);
  iVar3 = FUN_00401660(pcVar2,pcVar1);
  if (iVar3 < 0x880) {
    pcVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_30);
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             c_str(local_4c);
    FUN_00401ef0(pcVar2,pcVar1);
  }
  local_8 = local_8 & 0xffffff00;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_30);
  local_8 = 0xffffffff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_4c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00402080(short *param_1)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  abStack_44 [28];
  short *psStack_28;
  int iStack_24;
  undefined4 local_20;
  uint local_1c;
  short local_16;
  short *local_14;
  short *local_10;
  undefined1 *local_c;
  int local_8;
  
  if (param_1 != (short *)0x0) {
    local_10 = param_1;
    local_14 = param_1 + 1;
    do {
      local_16 = *local_10;
      local_10 = local_10 + 1;
    } while (local_16 != 0);
    local_1c = (int)local_10 - (int)local_14 >> 1;
    if (3 < local_1c) {
      iStack_24 = 0x4020ca;
      iStack_24 = FUN_00401c90();
      if (iStack_24 != 0) {
        psStack_28 = param_1;
        local_c = abStack_44;
        local_8 = iStack_24;
        local_20 = std::
                   basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   ::
                   basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                             (abStack_44,L"FEATURE_BROWSER_EMULATION");
        FUN_00401ce0();
        iStack_24 = 0x4020fe;
        FUN_00401fb0();
      }
    }
  }
  return;
}




void FUN_00402110(void)

{
  LPWSTR lpCmdLine;
  int *pNumArgs;
  int local_220;
  wchar_t local_21c [262];
  uint local_10;
  int local_c;
  LPWSTR *local_8;
  
  local_10 = DAT_0040701c ^ (uint)&stack0xfffffffc;
  local_c = 0;
  local_8 = (LPWSTR *)0x0;
  pNumArgs = &local_c;
  lpCmdLine = GetCommandLineW();
  local_8 = CommandLineToArgvW(lpCmdLine,pNumArgs);
  if (1 < local_c) {
    memset(local_21c,0,0x208);
    for (local_220 = 0; local_220 < local_c; local_220 = local_220 + 1) {
      if (local_220 == 1) {
        wcscat_s(local_21c,0x104,local_8[1]);
      }
    }
    FUN_00402080(local_21c);
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}




void * __fastcall FUN_004021e0(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404508;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004010d0(&stack0xffffffe0);
  FUN_00402800();
  local_8 = 0;
  FUN_00402640(param_1,0);
  ExceptionList = local_10;
  return param_1;
}




void * __thiscall FUN_00402250(void *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uStack_40;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004044d8;
  local_10 = ExceptionList;
  uStack_40 = DAT_0040701c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_18 = &stack0xffffffbc;
  FUN_004032a0(&stack0xffffffbc);
  FUN_00402800();
  local_8 = 0;
  uVar1 = FUN_004025a0((int)param_1);
  uVar1 = FUN_00402640(this,uVar1);
  if ((uVar1 & 0xff) != 0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00402570(param_1,local_20);
    FUN_00402510(param_1,local_28);
    uVar2 = FUN_00403110();
    *(undefined4 *)((int)this + 0x10) = uVar2;
    pvVar3 = (void *)FUN_0040231d();
    return pvVar3;
  }
  ExceptionList = local_10;
  return this;
}




void Catch_All_004022ff(void)

{
  int unaff_EBP;
  
  FUN_004026c0(*(void **)(unaff_EBP + -0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_0040231d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x28);
}




/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall ATL::CAtlWinModule::~CAtlWinModule(void)
    public: __thiscall CPaneContainerGC::~CPaneContainerGC(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void __fastcall FID_conflict__CAtlWinModule(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004043e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004026c0(param_1);
  local_8 = 0xffffffff;
  FUN_00402480(param_1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_004023b0(void *this,uint param_1)

{
  uint uVar1;
  void *this_00;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  undefined1 local_c [8];
  
  uVar1 = FUN_004025a0((int)this);
  if (uVar1 <= param_1) {
    FUN_00402780();
  }
  puVar3 = local_14;
  this_00 = FUN_004024e0(this,local_c);
  piVar2 = FUN_00402890(this_00,puVar3,param_1);
  FUN_00402870(piVar2);
  return;
}




void __thiscall
FUN_00402400(void *this,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1c [2];
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;
  
  uVar1 = FUN_004025a0((int)this);
  uVar2 = FUN_004024a0((int)this);
  if (uVar1 < uVar2) {
    iVar3 = FUN_00402740(this,*(int *)((int)this + 0x10),1,param_1);
    *(int *)((int)this + 0x10) = iVar3;
  }
  else {
    puVar4 = (undefined4 *)FUN_00402540(this,local_14);
    local_c = *puVar4;
    local_8 = puVar4[1];
    FUN_004025c0(this,local_1c,local_c,local_8,param_1);
  }
  return;
}




void __fastcall FUN_00402480(undefined4 *param_1)

{
  FUN_00402840(param_1);
  return;
}




int __fastcall FUN_004024a0(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_c = 0;
  }
  else {
    local_c = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) / 0x1c;
  }
  return local_c;
}




void * __thiscall FUN_004024e0(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(uint *)((int)this + 0xc),(undefined4 *)this);
  return param_1;
}




void * __thiscall FUN_00402510(void *this,void *param_1)

{
  FUN_00402e90(param_1,*(uint *)((int)this + 0xc),(undefined4 *)this);
  return param_1;
}




void * __thiscall FUN_00402540(void *this,void *param_1)

{
  _Vector_iterator<>(param_1,*(uint *)((int)this + 0x10),(undefined4 *)this);
  return param_1;
}




void * __thiscall FUN_00402570(void *this,void *param_1)

{
  FUN_00402e90(param_1,*(uint *)((int)this + 0x10),(undefined4 *)this);
  return param_1;
}




int __fastcall FUN_004025a0(int param_1)

{
  return (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c;
}




undefined4 * __thiscall
FUN_004025c0(void *this,undefined4 *param_1,undefined4 param_2,int param_3,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_4)

{
  int iVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  int local_8;
  
  iVar1 = FUN_004025a0((int)this);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    piVar2 = (int *)FUN_004024e0(this,local_10);
    local_20 = FUN_00402f40(&param_2,piVar2);
  }
  local_8 = local_20;
  FUN_00402920(this,param_2,param_3,1,param_4);
  puVar3 = param_1;
  iVar1 = local_8;
  this_00 = FUN_004024e0(this,local_18);
  FUN_00402890(this_00,puVar3,iVar1);
  return param_1;
}




uint __thiscall FUN_00402640(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    uVar1 = (uint)this & 0xffffff00;
  }
  else {
    uVar1 = FUN_004028d0();
    if (uVar1 < param_1) {
      this = (void *)FUN_00402d20();
    }
    else {
      uVar2 = FUN_00402e70(param_1);
      *(undefined4 *)((int)this + 0xc) = uVar2;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0xc);
      *(uint *)((int)this + 0x14) = param_1 * 0x1c + *(int *)((int)this + 0xc);
    }
    uVar1 = CONCAT31((int3)((uint)this >> 8),1);
  }
  return uVar1;
}




void __fastcall FUN_004026c0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc) != 0) {
    FUN_004028f0(param_1,*(void **)((int)param_1 + 0xc),*(void **)((int)param_1 + 0x10));
    FUN_00402e50(*(void **)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  return;
}




int __thiscall
FUN_00402740(void *this,int param_1,int param_2,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_3)

{
  FUN_00403140(param_1,param_2,param_3,(int)this + 8);
  return param_2 * 0x1c + param_1;
}




void FUN_00402780(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [28];
  undefined1 local_38 [40];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004044a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_54,"invalid vector<T> subscript");
  local_8 = 0;
  FUN_00401310(local_38,local_54);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_00405828);
}




undefined4 * FUN_00402800(void)

{
  undefined1 *puStack_10;
  undefined4 *local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)&puStack_10;
  FUN_004032a0(&puStack_10);
  FUN_00402da0(local_c);
  puStack_10 = &stack0x00000004;
  FUN_004032a0(local_c + 2);
  return local_c;
}




void __fastcall FUN_00402840(undefined4 *param_1)

{
  FUN_00402e50((void *)*param_1);
  FUN_004010e0();
  return;
}




void __fastcall FUN_00402870(int *param_1)

{
  FUN_00402ef0(param_1);
  return;
}




undefined4 * __thiscall FUN_00402890(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_c = *this;
  local_8 = *(undefined4 *)((int)this + 4);
  puVar2 = (undefined4 *)FUN_00402fb0(&local_c,param_2);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}




void FUN_004028d0(void)

{
  max_size();
  return;
}




void __thiscall FUN_004028f0(void *this,void *param_1,void *param_2)

{
  FUN_00403190(param_1,param_2,(int)this + 8);
  return;
}




void __thiscall
FUN_00402920(void *this,undefined4 param_1,int param_2,uint param_3,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uStack_7c;
  uint local_6c;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_64 [28];
  int local_48;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_44 [28];
  uint local_28;
  int local_24;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404472;
  local_10 = ExceptionList;
  uStack_7c = DAT_0040701c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_7c;
  ExceptionList = &local_10;
  local_28 = uStack_7c;
  local_18 = FUN_004024a0((int)this);
  if (param_3 != 0) {
    iVar1 = FUN_004025a0((int)this);
    iVar2 = FUN_004028d0();
    if ((uint)(iVar2 - iVar1) < param_3) {
      FUN_00402d20();
    }
    else {
      iVar1 = FUN_004025a0((int)this);
      if (local_18 < iVar1 + param_3) {
        uVar4 = local_18 >> 1;
        iVar1 = FUN_004028d0();
        if (iVar1 - uVar4 < local_18) {
          local_6c = 0;
        }
        else {
          local_6c = (local_18 >> 1) + local_18;
        }
        local_18 = local_6c;
        iVar1 = FUN_004025a0((int)this);
        if (local_18 < iVar1 + param_3) {
          iVar1 = FUN_004025a0((int)this);
          local_18 = iVar1 + param_3;
        }
        local_20 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                    *)FUN_00402e70(local_18);
        local_1c = (param_2 - *(int *)((int)this + 0xc)) / 0x1c;
        local_24 = 0;
        local_8 = 0;
        FUN_00402740(this,(int)(local_20 + local_1c * 0x1c),param_3,param_4);
        local_24 = local_24 + 1;
        do_is(this,*(undefined4 *)((int)this + 0xc),param_2,local_20);
        local_24 = local_24 + 1;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),local_20 + (local_1c + param_3) * 0x1c)
        ;
        FUN_00402af5();
        return;
      }
      if ((uint)((*(int *)((int)this + 0x10) - param_2) / 0x1c) < param_3) {
        std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
        basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  (local_44,param_4);
        local_8 = 2;
        do_is(this,param_2,*(undefined4 *)((int)this + 0x10),
              (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               *)(param_3 * 0x1c + param_2));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00402740(this,*(int *)((int)this + 0x10),
                     param_3 - (*(int *)((int)this + 0x10) - param_2) / 0x1c,local_44);
        FUN_00402c2c();
        return;
      }
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (local_64,param_4);
      local_8 = 5;
      local_48 = *(int *)((int)this + 0x10);
      uVar3 = do_is(this,local_48 + param_3 * -0x1c,local_48,
                    *(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      **)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = uVar3;
      iVar1 = local_48 + param_3 * -0x1c;
      FUN_00403230((uint3)iVar1,param_2,iVar1,local_48);
      FUN_00403200(param_2,param_3 * 0x1c + param_2,local_64);
      local_8 = 0xffffffff;
      std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
      ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                (local_64);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_28 ^ (uint)&stack0xfffffffc);
  return;
}




void Catch_All_00402a86(void)

{
  int unaff_EBP;
  
  if (1 < *(int *)(unaff_EBP + -0x20)) {
    FUN_004028f0(*(void **)(unaff_EBP + -100),*(void **)(unaff_EBP + -0x1c),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x1c)));
  }
  if (0 < *(int *)(unaff_EBP + -0x20)) {
    FUN_004028f0(*(void **)(unaff_EBP + -100),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x1c)),
                 (void *)(*(int *)(unaff_EBP + -0x18) * 0x1c + *(int *)(unaff_EBP + -0x1c) +
                         *(int *)(unaff_EBP + 0x10) * 0x1c));
  }
  FUN_00402e50(*(void **)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00402af5(void)

{
  int iVar1;
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  iVar1 = FUN_004025a0(*(int *)(unaff_EBP - 100));
  *(int *)(unaff_EBP + 0x10) = iVar1 + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(*(int *)(unaff_EBP - 100) + 0xc) != 0) {
    FUN_004028f0(*(void **)(unaff_EBP - 100),*(void **)(*(int *)(unaff_EBP - 100) + 0xc),
                 *(void **)(*(int *)(unaff_EBP - 100) + 0x10));
    FUN_00402e50(*(void **)(*(int *)(unaff_EBP - 100) + 0xc));
  }
  *(int *)(*(int *)(unaff_EBP - 100) + 0x14) =
       *(int *)(unaff_EBP - 0x14) * 0x1c + *(int *)(unaff_EBP - 0x1c);
  *(int *)(*(int *)(unaff_EBP - 100) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x1c + *(int *)(unaff_EBP - 0x1c);
  *(undefined4 *)(*(int *)(unaff_EBP - 100) + 0xc) = *(undefined4 *)(unaff_EBP - 0x1c);
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x402d19;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x24) ^ unaff_EBP);
  return;
}




void Catch_All_00402bf7(void)

{
  int unaff_EBP;
  
  FUN_004028f0(*(void **)(unaff_EBP + -100),
               (void *)(*(int *)(unaff_EBP + 0x10) * 0x1c + *(int *)(unaff_EBP + 0xc)),
               (void *)(*(int *)(unaff_EBP + 0x10) * 0x1c +
                       *(int *)(*(int *)(unaff_EBP + -100) + 0x10)));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00402c2c(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 2;
  *(int *)(*(int *)(unaff_EBP - 100) + 0x10) =
       *(int *)(unaff_EBP + 0x10) * 0x1c + *(int *)(*(int *)(unaff_EBP - 100) + 0x10);
  FUN_00403200(*(undefined4 *)(unaff_EBP + 0xc),
               *(int *)(*(int *)(unaff_EBP - 100) + 0x10) + *(int *)(unaff_EBP + 0x10) * -0x1c,
               (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                *)(unaff_EBP - 0x40));
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP - 0x40));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x402d19;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x24) ^ unaff_EBP);
  return;
}




void FUN_00402d20(void)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_54 [28];
  undefined1 local_38 [40];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004044a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_54,"vector<T> too long");
  local_8 = 0;
  FUN_00401290(local_38,local_54);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_00405864);
}




undefined4 * __fastcall FUN_00402da0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *this;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004043b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004010d0(param_1);
  local_8 = 0;
  FUN_004032a0(param_1 + 1);
  uVar1 = FUN_00403070(1);
  this = (void *)FUN_00401080(4,uVar1);
  if (this == (void *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_004010a0(this,param_1);
  }
  *param_1 = local_24;
  ExceptionList = local_10;
  return param_1;
}




void FUN_00402e50(void *param_1)

{
  operator_delete(param_1);
  return;
}




void FUN_00402e70(uint param_1)

{
  FUN_004032b0(param_1);
  return;
}




undefined4 * __thiscall FUN_00402e90(void *this,uint param_1,undefined4 *param_2)

{
  FUN_00403000((undefined4 *)this);
  if (((param_2 == (undefined4 *)0x0) || (param_1 < (uint)param_2[3])) ||
     ((uint)param_2[4] < param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_00401110(this,param_2);
  *(uint *)((int)this + 4) = param_1;
  return (undefined4 *)this;
}




int __fastcall FUN_00402ef0(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00401180(param_1);
  if (!bVar1) {
    _invalid_parameter_noinfo();
  }
  iVar2 = FUN_00401130(param_1);
  if (*(uint *)(iVar2 + 0x10) <= (uint)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




int __thiscall FUN_00402f40(void *this,int *param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00401180((int *)this);
  if ((!bVar1) || (bVar1 = FUN_00401160(this,param_1), !bVar1)) {
    _invalid_parameter_noinfo();
  }
  return (*(int *)((int)this + 4) - param_1[1]) / 0x1c;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base12 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base12 const *)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void * __thiscall _Vector_iterator<>(void *this,uint param_1,undefined4 *param_2)

{
  FUN_00402e90(this,param_1,param_2);
  return this;
}




void * __thiscall FUN_00402fb0(void *this,int param_1)

{
  FUN_00403090(this,param_1);
  return this;
}




undefined4 * __thiscall FUN_00402fd0(void *this,exception *param_1)

{
  FUN_004013c0(this,param_1);
  *(undefined ***)this = std::length_error::vftable;
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_00403000(undefined4 *param_1)

{
  FUN_00403020(param_1);
  return param_1;
}




undefined4 * __fastcall FUN_00403020(undefined4 *param_1)

{
  FUN_004010f0(param_1);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x0040305e) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int __thiscall std::allocator<char>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<unsigned short>::max_size(void)const 
    public: unsigned int __thiscall std::allocator<wchar_t>::max_size(void)const 
   
   Libraries: Visual Studio 2003, Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

undefined4 max_size(void)

{
  return 0x9249249;
}




void FUN_00403070(uint param_1)

{
  FUN_00403300(param_1);
  return;
}




int * __thiscall FUN_00403090(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = FUN_00401180((int *)this);
  if (!bVar2) {
    _invalid_parameter_noinfo();
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = FUN_00401130((int *)this);
  if ((*(uint *)(iVar3 + 0x10) < (uint)(param_1 * 0x1c + iVar1)) ||
     (iVar1 = *(int *)((int)this + 4), iVar3 = FUN_00401130((int *)this),
     (uint)(param_1 * 0x1c + iVar1) < *(uint *)(iVar3 + 0xc))) {
    _invalid_parameter_noinfo();
  }
  *(int *)((int)this + 4) = param_1 * 0x1c + *(int *)((int)this + 4);
  return (int *)this;
}




void FUN_00403110(void)

{
  FUN_00403380();
  return;
}




void __cdecl
FUN_00403140(int param_1,int param_2,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_3,undefined4 param_4)

{
  FUN_004033e0(&param_1);
  FUN_004033f0(param_1,param_2,param_3);
  return;
}




void __cdecl FUN_00403190(void *param_1,void *param_2,undefined4 param_3)

{
  FUN_004033e0(&param_1);
  _Destroy_range<>(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short const * __thiscall std::ctype<unsigned short>::do_is(unsigned
   short const *,unsigned short const *,short *)const 
    protected: virtual wchar_t const * __thiscall std::ctype<wchar_t>::do_is(wchar_t const *,wchar_t
   const *,short *)const 
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2015 Release */

void __thiscall
do_is(void *this,undefined4 param_1,undefined4 param_2,
     basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *param_3)

{
  FUN_004034e0(param_1,param_2,param_3,(int)this + 8);
  return;
}




void __cdecl
FUN_00403200(undefined4 param_1,undefined4 param_2,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_3)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  
  pbVar3 = param_3;
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_2);
  pbVar2 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_1);
  FUN_00403550(pbVar2,pbVar1,pbVar3);
  return;
}




void __thiscall FUN_00403230(uint3 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  byte *pbVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = FUN_004033e0(&param_4);
  uStack_8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_8);
  pbVar2 = (byte *)FUN_00403580((int)&uStack_8 + 1);
  uVar5 = (uint)*pbVar2;
  iVar6 = param_4;
  pbVar3 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_3);
  pbVar4 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_2);
  FUN_00403590(pbVar4,pbVar3,iVar6,uVar5,uVar1);
  return;
}




undefined4 __fastcall FUN_004032a0(undefined4 param_1)

{
  return param_1;
}




void __cdecl FUN_004032b0(uint param_1)

{
  exception local_10 [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 0x1c) {
    FUN_00401000(local_10);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040589c);
  }
  operator_new(param_1 * 0x1c);
  return;
}




void __cdecl FUN_00403300(uint param_1)

{
  exception local_10 [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((uint)(0xffffffff / (ulonglong)param_1) < 4) {
    FUN_00401000(local_10);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_10,(ThrowInfo *)&DAT_0040589c);
  }
  operator_new(param_1 << 2);
  return;
}




/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(class std::bad_alloc const &)
   
   Library: Visual Studio 2005 Debug */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1)

{
  std::exception::exception((exception *)this,(exception *)param_1);
  *(undefined ***)this = vftable;
  return this;
}




void FUN_00403380(void)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  int in_stack_00000014;
  
  FUN_004033e0(&stack0x00000014);
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403630((int)&stack0x0000000c);
  pbVar2 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403630((int)&stack0x00000004);
  FUN_00403650(pbVar2,pbVar1,in_stack_00000014);
  return;
}




undefined1 __fastcall FUN_004033e0(undefined4 param_1)

{
  undefined1 local_5;
  
  local_5 = (undefined1)((uint)param_1 >> 0x18);
  return local_5;
}




void FUN_004033f0(int param_1,int param_2,
                 basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00404390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_004035f0(param_1,param_3);
    param_1 = param_1 + 0x1c;
  }
  FUN_0040348c();
  return;
}




void FUN_00403457(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 8)) {
    FUN_00403610(*(void **)(unaff_EBP + -0x14));
    FUN_00403457();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00403460(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 8)) {
    FUN_00403610(*(void **)(unaff_EBP + -0x14));
    FUN_00403457();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_0040348c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > > >(class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > *,struct
   std::_Wrap_alloc<class std::allocator<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > &,struct std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Wrap_alloc<class
   std::allocator<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct
   std::pair<unsigned char,class Concurrency::details::_CancellationTokenState *> > > > > &,struct
   std::_Nonscalar_ptr_iterator_tag)
    void __cdecl std::_Destroy_range<struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > >(class Concurrency::details::_ContextCallback *,class
   Concurrency::details::_ContextCallback *,struct std::_Wrap_alloc<class std::allocator<class
   Concurrency::details::_ContextCallback> > &,struct std::_Nonscalar_ptr_iterator_tag)
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void __cdecl _Destroy_range<>(void *param_1,void *param_2)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x1c)) {
    FUN_00403610(param_1);
  }
  return;
}




void __cdecl
FUN_004034e0(undefined4 param_1,undefined4 param_2,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_3,undefined4 param_4)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  
  FUN_004033e0(&param_3);
  pbVar3 = param_3;
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_2);
  pbVar2 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_1);
  FUN_00403710(pbVar2,pbVar1,pbVar3);
  return;
}




void __cdecl FUN_00403530(undefined4 *param_1)

{
  FUN_00403810(param_1);
  return;
}




void __cdecl
FUN_00403550(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
             *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                     *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    operator=(param_1,param_3);
  }
  return;
}




undefined4 __cdecl FUN_00403580(undefined4 param_1)

{
  return param_1;
}




int __cdecl
FUN_00403590(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
             *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  int iVar2;
  
  iVar2 = param_3 + (((int)param_2 - (int)param_1) / 0x1c) * -0x1c;
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_00403530(&param_3);
  FUN_00403820(param_1,param_2,pbVar1);
  return iVar2;
}




void FUN_004035f0(undefined4 param_1,
                 basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_2)

{
  FUN_00403860(param_1,param_2);
  return;
}




void FUN_00403610(void *param_1)

{
  FUN_004038e0(param_1);
  return;
}




void __cdecl FUN_00403630(int param_1)

{
  FUN_00403920(param_1);
  return;
}




void FUN_00403650(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *param_1,
                 basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00404440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_004035f0(param_3,param_1);
    param_3 = param_3 + 0x1c;
  }
  FUN_004036ee();
  return;
}




void FUN_004036b9(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    FUN_00403610(*(void **)(unaff_EBP + -0x14));
    FUN_004036b9();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_004036c2(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    FUN_00403610(*(void **)(unaff_EBP + -0x14));
    FUN_004036b9();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_004036ee(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x10);
}




void FUN_00403710(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *param_1,
                 basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *param_2,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                          *param_3)

{
  uint uStack_4c;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_38 [28];
  uint local_1c;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404419;
  local_10 = ExceptionList;
  uStack_4c = DAT_0040701c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  local_18 = param_3;
  local_1c = uStack_4c;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>(local_38);
  local_8 = 1;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_004035f0(param_3,local_38);
    FUN_00403930(param_3,param_1);
    param_3 = param_3 + 0x1c;
  }
  FUN_004037d0();
  return;
}




void FUN_0040379b(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x1c;
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    FUN_00403610(*(void **)(unaff_EBP + -0x14));
    FUN_0040379b();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_004037a4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + 0x10)) {
    FUN_00403610(*(void **)(unaff_EBP + -0x14));
    FUN_0040379b();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_004037d0(void)

{
  uint unaff_EBP;
  undefined4 uStack0000000c;
  
  *(undefined4 *)(unaff_EBP - 4) = 0;
  *(undefined4 *)(unaff_EBP - 0x38) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP - 4) = 0xffffffff;
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP - 0x34));
  ExceptionList = *(void **)(unaff_EBP - 0xc);
  uStack0000000c = 0x403808;
  __security_check_cookie(*(uint *)(unaff_EBP - 0x18) ^ unaff_EBP);
  return;
}




undefined4 __cdecl FUN_00403810(undefined4 *param_1)

{
  return *param_1;
}




basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __cdecl
FUN_00403820(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
             *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2,basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                     *param_3)

{
  while (param_1 != param_2) {
    param_2 = param_2 + -0x1c;
    param_3 = param_3 + -0x1c;
    FUN_00403930(param_3,param_2);
  }
  return param_3;
}




void __cdecl
FUN_00403860(undefined4 param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00404371;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         FUN_00401080(0x1c,param_1);
  local_8 = 0;
  if (this != (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
               *)0x0) {
    std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
    basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              (this,param_2);
  }
  ExceptionList = local_10;
  return;
}




void __cdecl FUN_004038e0(void *param_1)

{
  FUN_004038f0(param_1,0);
  return;
}




basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
FUN_004038f0(void *this,uint param_1)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}




void __cdecl FUN_00403920(int param_1)

{
  FUN_00403950(param_1);
  return;
}




void __cdecl
FUN_00403930(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
             *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2)

{
  FUN_00403970(param_1,param_2);
  return;
}




undefined4 __fastcall FUN_00403950(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




void __cdecl
FUN_00403970(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
             *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::swap
            (param_1,param_2);
  return;
}




void FUN_00403982(uint param_1)

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
  if (param_1 == DAT_0040701c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CDaoRelationFieldInfo::`vector deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall std::exception::`vector deleting destructor'(unsigned int)
    public: virtual void * __thiscall logic_error::`vector deleting destructor'(unsigned int)
     5 names - too many to list
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

type_info * __thiscall FID_conflict__vector_deleting_destructor_(void *this,byte param_1)

{
  type_info *ptVar1;
  
  if ((param_1 & 2) == 0) {
    type_info::_type_info_dtor_internal_method((type_info *)this);
    ptVar1 = (type_info *)this;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    ptVar1 = (type_info *)((int)this + -4);
    _eh_vector_destructor_iterator_
              (this,0xc,*(int *)ptVar1,type_info::_type_info_dtor_internal_method);
    if ((param_1 & 1) != 0) {
      operator_delete(ptVar1);
    }
  }
  return ptVar1;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2008 Release */

int ___tmainCRTStartup(void)

{
  bool bVar1;
  void *Exchange;
  void *pvVar2;
  int iVar3;
  BOOL BVar4;
  
  Exchange = StackBase;
  bVar1 = false;
  do {
    pvVar2 = (void *)InterlockedCompareExchange((LONG *)&DAT_00407434,(LONG)Exchange,0);
    if (pvVar2 == (void *)0x0) {
LAB_00403a9e:
      if (DAT_00407430 == 1) {
        _amsg_exit(0x1f);
      }
      else if (DAT_00407430 == 0) {
        DAT_00407430 = 1;
        iVar3 = initterm_e(&DAT_00405178,&DAT_00405184);
        if (iVar3 != 0) {
          return 0xff;
        }
      }
      else {
        DAT_004070ec = 1;
      }
      if (DAT_00407430 == 1) {
        initterm(&DAT_0040516c,&DAT_00405174);
        DAT_00407430 = 2;
      }
      if (!bVar1) {
        InterlockedExchange((LONG *)&DAT_00407434,0);
      }
      if ((DAT_00407440 != (code *)0x0) &&
         (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&DAT_00407440), BVar4 != 0)) {
        (*DAT_00407440)(0,2,0);
      }
      *(undefined4 *)__initenv_exref = DAT_004070d4;
      DAT_004070e8 = FUN_00402110();
      if (DAT_004070dc != 0) {
        if (DAT_004070ec == 0) {
          _cexit();
        }
        return DAT_004070e8;
      }
                    /* WARNING: Subroutine does not return */
      exit(DAT_004070e8);
    }
    if (pvVar2 == Exchange) {
      bVar1 = true;
      goto LAB_00403a9e;
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
  
  _DAT_00407208 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_0040720c = &stack0x00000004;
  _DAT_00407148 = 0x10001;
  _DAT_004070f0 = 0xc0000409;
  _DAT_004070f4 = 1;
  local_32c = DAT_0040701c;
  local_328 = DAT_00407020;
  _DAT_004070fc = unaff_retaddr;
  _DAT_004071d4 = in_GS;
  _DAT_004071d8 = in_FS;
  _DAT_004071dc = in_ES;
  _DAT_004071e0 = in_DS;
  _DAT_004071e4 = unaff_EDI;
  _DAT_004071e8 = unaff_ESI;
  _DAT_004071ec = unaff_EBX;
  _DAT_004071f0 = in_EDX;
  _DAT_004071f4 = in_ECX;
  _DAT_004071f8 = in_EAX;
  _DAT_004071fc = unaff_EBP;
  DAT_00407200 = unaff_retaddr;
  _DAT_00407204 = in_CS;
  _DAT_00407210 = in_SS;
  DAT_00407140 = IsDebuggerPresent();
  _crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_004051c4);
  if (DAT_00407140 == 0) {
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
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_00403e63();
  return;
}




void FUN_00403e63(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
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
  
  local_8 = &DAT_00405788;
  uStack_c = 0x403ede;
  local_20[0] = decode_pointer(DAT_0040743c);
  if (local_20[0] == -1) {
    p_Var1 = _onexit(param_1);
  }
  else {
    _lock(8);
    local_8 = (undefined *)0x0;
    local_20[0] = decode_pointer(DAT_0040743c);
    local_24 = decode_pointer(DAT_00407438);
    uVar2 = encode_pointer(param_1,local_20,&local_24);
    p_Var1 = (_onexit_t)__dllonexit(uVar2);
    DAT_0040743c = encode_pointer(local_20[0]);
    DAT_00407438 = encode_pointer(local_24);
    local_8 = (undefined *)0xfffffffe;
    FUN_00403f6e();
  }
  return p_Var1;
}




void FUN_00403f6e(void)

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




/* WARNING: Removing unreachable block (ram,0x00403fa2) */
/* WARNING: Removing unreachable block (ram,0x00403fa8) */
/* WARNING: Removing unreachable block (ram,0x00403faa) */

void FUN_00403f8e(void)

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
  
  pcStack_10 = FUN_00404195;
  local_14 = ExceptionList;
  local_c = DAT_0040701c ^ 0x4057a8;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0040701c ^ (uint)&param_2;
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
FUN_00404195(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0040701c,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}




void FUN_004041ba(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}




undefined4 FUN_004041e5(void)

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
  if ((DAT_0040701c == 0xbb40e64e) || ((DAT_0040701c & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_0040701c = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_0040701c == 0xbb40e64e) {
      DAT_0040701c = 0xbb40e64f;
    }
    else if ((DAT_0040701c & 0xffff0000) == 0) {
      DAT_0040701c = DAT_0040701c | DAT_0040701c << 0x10;
    }
    DAT_00407020 = ~DAT_0040701c;
  }
  else {
    DAT_00407020 = ~DAT_0040701c;
  }
  return;
}




void Unwind_004042d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x004042d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + 0xc));
  return;
}




void Unwind_004042d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x004042dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x30));
  return;
}




void Unwind_004042e2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x004042f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                (unaff_EBP + 8));
    return;
  }
  return;
}




void Unwind_00404330(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(*(exception **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00404360(void)

{
  FUN_00401090();
  return;
}




void Unwind_004043b0(void)

{
  FUN_004010e0();
  return;
}




void Unwind_004043e0(void)

{
  int unaff_EBP;
  
  FUN_00402480(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00404410(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x34));
  return;
}




void Unwind_00404460(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00404469(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0040446c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x60));
  return;
}




void Unwind_004044a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x004044a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x50));
  return;
}




void Unwind_004044d0(void)

{
  int unaff_EBP;
  
  FUN_00402480(*(undefined4 **)(unaff_EBP + -0x28));
  return;
}




void Unwind_00404500(void)

{
  int unaff_EBP;
  
  FUN_00402480(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}




void Unwind_00404530(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x48));
  return;
}




void Unwind_00404539(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0040453c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x2c));
  return;
}




void Unwind_00404570(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + 8));
  return;
}




void Unwind_00404579(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0040457c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x38));
  return;
}




void Unwind_00404582(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x54));
  return;
}




void Unwind_0040458b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x8c));
  return;
}




void Unwind_00404597(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0040459a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x70));
  return;
}




void Unwind_004045a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x004045a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0xa8));
  return;
}




void Unwind_004045e0(void)

{
  int unaff_EBP;
  
  FID_conflict__CAtlWinModule((undefined4 *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_004045e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x004045eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x48));
  return;
}




void Unwind_004045f1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x004045f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -100));
  return;
}




void Unwind_004045fa(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x68) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x68) = *(uint *)(unaff_EBP + -0x68) & 0xfffffffe;
    FID_conflict__CAtlWinModule(*(undefined4 **)(unaff_EBP + 8));
    return;
  }
  return;
}




void Unwind_00404630(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x38));
  return;
}




void Unwind_00404639(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0040463c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x54));
  return;
}




void Unwind_00404642(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x70));
  return;
}




void Unwind_0040464b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0x8c));
  return;
}




void Unwind_00404657(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0040465d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0xa8));
  return;
}




void Unwind_00404663(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
  ~basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)(unaff_EBP + -0xc4));
  return;
}




void Unwind_0040466f(void)

{
  int unaff_EBP;
  
  FID_conflict__CAtlWinModule((undefined4 *)(unaff_EBP + -0xe0));
  return;
}




void Unwind_0040467a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00404680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0xfc));
  return;
}



