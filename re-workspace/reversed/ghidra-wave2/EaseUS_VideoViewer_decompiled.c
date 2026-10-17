
/* Library Function - Single Match
    _HRESULT_FROM_WIN32
   
   Library: Visual Studio */

HRESULT __cdecl _HRESULT_FROM_WIN32(ulong x)

{
  undefined4 local_8;
  
  if ((int)x < 1) {
    local_8 = x;
  }
  else {
    local_8 = x & 0xffff | 0x80070000;
  }
  return local_8;
}




undefined * FUN_00401060(void)

{
  return &DAT_0041b5e8;
}




void __cdecl
FUN_00401070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401060();
  __stdio_common_vfprintf(*puVar1,puVar1[1],param_1,param_2,param_3,param_4);
  return;
}




undefined4 __cdecl FUN_004010a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __acrt_iob_func(1);
  uVar1 = FUN_00401070(uVar1,param_1,0,&stack0x00000008);
  return uVar1;
}




void __cdecl FUN_004010f0(LPCRITICAL_SECTION param_1,DWORD param_2,DWORD param_3)

{
  InitializeCriticalSectionEx(param_1,param_2,param_3);
  return;
}




HRESULT __fastcall FUN_00401110(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  DWORD x;
  HRESULT local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004134e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  iVar1 = FUN_004010f0(param_1,0,0);
  if (iVar1 == 0) {
    x = GetLastError();
    local_14 = _HRESULT_FROM_WIN32(x);
  }
  ExceptionList = local_10;
  return local_14;
}




void __fastcall FUN_00401180(undefined4 *param_1)

{
  *param_1 = IUiSink::vftable;
  return;
}




void FUN_004011a0(void)

{
  return;
}




void FUN_004011b0(void)

{
  return;
}




void FUN_004011c0(void)

{
  return;
}




undefined4 FUN_004011d0(void)

{
  return 0;
}




undefined1 FUN_004011e0(void)

{
  return 0;
}




undefined4 FUN_004011f0(void)

{
  return 0;
}




void FUN_00401200(void)

{
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall Concurrency::ISource<unsigned int>::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall Concurrency::ISource<enum Concurrency::agent_status>::`scalar
   deleting destructor'(unsigned int)
    public: virtual void * __thiscall Concurrency::ITarget<unsigned int>::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall Concurrency::ITarget<enum Concurrency::agent_status>::`scalar
   deleting destructor'(unsigned int)
     11 names - too many to list
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  FUN_00401180((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




undefined4 * __thiscall FUN_00401240(void *this,undefined4 param_1,undefined2 param_2)

{
  HANDLE pvVar1;
  LPCRITICAL_SECTION p_Var2;
  LPCRITICAL_SECTION local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413517;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00401350((undefined4 *)this);
  local_8 = 0;
  *(undefined ***)this = DrwSocketPeer::vftable;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = param_2;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401520,this,0,(LPDWORD)((int)this + 8));
  *(HANDLE *)((int)this + 4) = pvVar1;
  p_Var2 = (LPCRITICAL_SECTION)FUN_004124b9(0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (p_Var2 == (LPCRITICAL_SECTION)0x0) {
    local_1c = (LPCRITICAL_SECTION)0x0;
  }
  else {
    local_1c = FUN_00412180(p_Var2);
  }
  *(LPCRITICAL_SECTION *)((int)this + 0x10) = local_1c;
  ExceptionList = local_10;
  return (undefined4 *)this;
}




undefined4 * __thiscall FUN_00401320(void *this,uint param_1)

{
  FUN_00401370((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_00401350(undefined4 *param_1)

{
  *param_1 = IUiSink::vftable;
  return param_1;
}




void __fastcall FUN_00401370(undefined4 *param_1)

{
  *param_1 = DrwSocketPeer::vftable;
  WaitForSingleObject((HANDLE)param_1[1],10000);
  CloseHandle((HANDLE)param_1[1]);
  param_1[1] = 0xffffffff;
  if ((void *)param_1[4] != (void *)0x0) {
    FUN_004013f0((void *)param_1[4],1);
  }
  param_1[4] = 0;
  FUN_00401180(param_1);
  return;
}




LPCRITICAL_SECTION __thiscall FUN_004013f0(void *this,uint param_1)

{
  FUN_004121a0((LPCRITICAL_SECTION)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (LPCRITICAL_SECTION)this;
}




void __thiscall FUN_00401420(void *this,int *param_1,undefined4 param_2)

{
  undefined4 local_2c;
  void *local_28;
  void *local_24;
  size_t local_20;
  code *local_1c;
  size_t local_18;
  void *local_14;
  size_t local_10;
  void *local_c;
  void *local_8;
  
  if ((*(int *)((int)this + 0x14) != 0) && (param_1 != (int *)0x0)) {
    local_14 = (void *)0x0;
    local_1c = *(code **)(*param_1 + 0x1c);
    local_c = this;
    local_10 = (*local_1c)(&local_14);
    if ((local_14 != (void *)0x0) && (*(int *)((int)local_c + 0x10) != 0)) {
      local_18 = local_10;
      if (local_10 < 0x25a) {
        local_18 = 0x25e;
      }
      local_20 = local_18;
      local_24 = (void *)FUN_00412774(local_18);
      if (local_24 != (void *)0x0) {
        local_8 = local_24;
        memcpy(local_24,local_14,local_10);
        *(undefined4 *)((int)local_8 + 4) = 0x25a;
        *(undefined4 *)((int)local_8 + 0x224) = param_2;
        FUN_004121b0(&local_2c,*(LPCRITICAL_SECTION *)((int)local_c + 0x10));
        Ordinal_19(*(undefined4 *)((int)local_c + 0x14),local_8,0x25a,0);
        local_28 = local_8;
        free(local_8);
        FUN_004121e0(&local_2c);
      }
    }
  }
  return;
}




void FUN_00401520(int param_1)

{
  undefined1 local_198 [400];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    memset(local_198,0,400);
    Ordinal_115(0x202,local_198);
    FUN_004015a0();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_004015a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  int *local_128;
  int local_124;
  int local_120;
  int *local_11c;
  int *local_118;
  uint local_114;
  void *local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_004019d0();
  if (iVar2 == 0) {
    local_128 = (int *)FUN_00412774(0x100000);
    local_118 = local_128;
    if (local_128 != (int *)0x0) {
      memset(local_128,0,0x100000);
      while( true ) {
        while( true ) {
          if (((*(int *)((int)local_110 + 0x10) == 0) || (*(int *)((int)local_110 + 0xc) == 0)) ||
             (cVar1 = (**(code **)(**(int **)((int)local_110 + 0xc) + 0x3c))(), cVar1 == '\0'))
          goto LAB_0040198e;
          memset(&local_10c,0,0x104);
          uStack_108 = *(undefined4 *)((int)local_110 + 0x14);
          local_10c = 1;
          local_134 = 0;
          local_130 = 100;
          local_12c = Ordinal_18(0x40,&local_10c,0,0,&local_134);
          if ((0 < local_12c) &&
             (iVar2 = Ordinal_151(*(undefined4 *)((int)local_110 + 0x14),&local_10c), iVar2 != 0))
          break;
          Sleep(10);
        }
        local_114 = Ordinal_16(*(undefined4 *)((int)local_110 + 0x14),local_118,8,0);
        if (local_114 < 8) break;
        local_11c = local_118;
        if ((0x100000 < local_118[1]) || (6 < *local_118)) {
          FUN_004010a0("%s:%d failed with:%s\n");
          Ordinal_3(*(undefined4 *)((int)local_110 + 0x14));
          *(undefined4 *)((int)local_110 + 0x14) = 0;
          (**(code **)(**(int **)((int)local_110 + 0xc) + 0x40))();
          goto LAB_0040198e;
        }
        local_120 = local_118[1] + -8;
        for (; (int)local_114 < local_120; local_114 = local_114 + local_124) {
          local_124 = Ordinal_16(*(undefined4 *)((int)local_110 + 0x14),(int)local_118 + local_114,
                                 local_120,0);
          if (local_124 < 1) {
            FUN_004010a0("%s:%d failed with:%s\n");
            Ordinal_3(*(undefined4 *)((int)local_110 + 0x14));
            *(undefined4 *)((int)local_110 + 0x14) = 0;
            (**(code **)(**(int **)((int)local_110 + 0xc) + 0x40))();
            break;
          }
        }
        FUN_004010a0("recvLen%d needLen:%d\n");
        if ((int)local_114 < local_120) {
          FUN_004010a0("%s:%d failed with:%s\n");
          Ordinal_3(*(undefined4 *)((int)local_110 + 0x14));
          *(undefined4 *)((int)local_110 + 0x14) = 0;
          (**(code **)(**(int **)((int)local_110 + 0xc) + 0x40))();
          goto LAB_0040198e;
        }
        FUN_00401be0(local_110,local_11c,local_118,local_11c[1]);
      }
      FUN_004010a0("%s:%d failed with:%s\n");
      Ordinal_3(*(undefined4 *)((int)local_110 + 0x14));
      *(undefined4 *)((int)local_110 + 0x14) = 0;
      (**(code **)(**(int **)((int)local_110 + 0xc) + 0x40))();
LAB_0040198e:
      if (*(int *)((int)local_110 + 0x14) != 0) {
        Ordinal_3(*(undefined4 *)((int)local_110 + 0x14));
      }
      *(undefined4 *)((int)local_110 + 0x14) = 0;
    }
  }
  else {
    FUN_00412220("%s:%d\n");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_004019d0(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_27c;
  int local_278;
  undefined4 local_274;
  int local_270;
  undefined4 local_26c;
  DWORD local_268;
  undefined4 local_264;
  undefined1 local_260 [260];
  undefined1 local_15c [260];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_3b;
  undefined4 local_37;
  undefined4 local_33;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined4 local_27;
  undefined4 local_23;
  undefined4 local_1f;
  undefined1 local_1b;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  uVar2 = Ordinal_23(2,1,0);
  *(undefined4 *)(local_278 + 0x14) = uVar2;
  if (*(int *)(local_278 + 0x14) != 0) {
    local_27c = 1;
    Ordinal_21(*(undefined4 *)(local_278 + 0x14),6,1,&local_27c,4);
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_18 = 2;
    local_14 = Ordinal_11("127.0.0.1");
    uVar1 = Ordinal_9(*(undefined2 *)(local_278 + 0x18));
    local_18 = CONCAT22(uVar1,(undefined2)local_18);
    iVar3 = Ordinal_4(*(undefined4 *)(local_278 + 0x14),&local_18,0x10);
    if (iVar3 == 0) {
      local_274 = 0;
      local_270 = 0;
      local_26c = 0;
      local_268 = 0;
      local_264 = 0;
      memset(local_260,0,0x104);
      memset(local_15c,0,0x104);
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_3b = 0;
      local_37 = 0;
      local_33 = 0;
      local_2f = 0;
      local_2b = 0;
      local_27 = 0;
      local_23 = 0;
      local_1f = 0;
      local_1b = 0;
      local_274 = 7;
      local_270 = 0x25a;
      local_268 = GetCurrentProcessId();
      local_264 = 0;
      iVar3 = Ordinal_19(*(undefined4 *)(local_278 + 0x14),&local_274,local_270,0);
      if (local_270 == iVar3) goto LAB_00401bce;
    }
    else {
      FUN_00412220("%s:%d\n");
      (**(code **)(**(int **)(local_278 + 0xc) + 0x40))();
    }
    Ordinal_3(*(undefined4 *)(local_278 + 0x14));
    *(undefined4 *)(local_278 + 0x14) = 0;
  }
LAB_00401bce:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_00401be0(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_60;
  code *local_5c;
  code *local_58;
  code *local_54;
  int *local_50;
  code *local_4c;
  undefined4 local_48;
  code *local_44;
  code *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  void *local_30;
  int *local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413566;
  local_10 = ExceptionList;
  uVar1 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)((int)this + 0xc) != 0) && (param_1 != (int *)0x0)) &&
     (*(int *)((int)this + 0x10) != 0)) {
    local_14 = this;
    if (*param_1 == 0) {
      local_28 = (void *)FUN_004124b9(0x30);
      local_8 = 0;
      if (local_28 == (void *)0x0) {
        local_2c = (int *)0x0;
      }
      else {
        local_2c = FUN_00405b10(local_28,local_14);
      }
      local_3c = local_2c;
      local_8 = 0xffffffff;
      local_1c = local_2c;
      if (local_2c != (int *)0x0) {
        local_40 = *(code **)(*local_2c + 0x28);
        (*local_40)(*(undefined4 *)((int)local_14 + 0xc));
        local_44 = *(code **)(*local_1c + 4);
        (*local_44)(param_2,param_3);
        local_48 = *(undefined4 *)((int)local_14 + 0xc);
        local_4c = *(code **)(**(int **)((int)local_14 + 0xc) + 0x10);
        (*local_4c)(local_1c,local_14);
      }
    }
    else if (*param_1 == 5) {
      local_30 = (void *)FUN_004124b9(0x30);
      local_8 = 1;
      if (local_30 == (void *)0x0) {
        local_34 = (int *)0x0;
      }
      else {
        local_34 = FUN_00405b10(local_30,local_14);
      }
      local_50 = local_34;
      local_8 = 0xffffffff;
      local_18 = local_34;
      if (local_34 != (int *)0x0) {
        local_54 = *(code **)(*local_34 + 0x28);
        (*local_54)(*(undefined4 *)((int)local_14 + 0xc));
        local_58 = *(code **)(*local_18 + 4);
        (*local_58)(param_2,param_3);
        if (DAT_0041b5f4 != (code *)0x0) {
          local_24 = 0;
          local_20 = 0;
          local_5c = DAT_0041b5f4;
          iVar2 = (*DAT_0041b5f4)(local_18,&local_24,&local_20);
          param_1[0x89] = iVar2;
          param_1[1] = local_20 + 0x25a;
          FUN_004121b0(&local_60,*(LPCRITICAL_SECTION *)((int)local_14 + 0x10));
          local_8 = 2;
          local_38 = Ordinal_19(*(undefined4 *)((int)local_14 + 0x14),param_1,0x25a,0);
          if (((local_24 != 0) && (0 < local_38)) && (0 < local_20)) {
            local_38 = Ordinal_19(*(undefined4 *)((int)local_14 + 0x14),local_24,local_20,0);
          }
          (**(code **)(*local_18 + 0x18))();
          local_8 = 0xffffffff;
          FUN_004121e0(&local_60);
        }
      }
    }
    else {
      FUN_00412220("%s:%d\n");
      (**(code **)(**(int **)((int)local_14 + 0xc) + 0x40))(uVar1);
    }
  }
  ExceptionList = local_10;
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




undefined * FUN_00401e80(void)

{
  return &DAT_0041b600;
}




int __cdecl
FUN_00401e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int local_c;
  
  puVar1 = (uint *)FUN_00401060();
  local_c = __stdio_common_vswprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}




int __cdecl FUN_00401ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00401e90(param_1,param_2,param_3,0,&stack0x00000010);
  return iVar1;
}




void __cdecl
FUN_00401f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  puVar1 = (undefined4 *)FUN_00401e80();
  __stdio_common_vswscanf(*puVar1,puVar1[1],param_1,uVar2,param_2,param_3,param_4);
  return;
}




undefined4 __cdecl FUN_00401f60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00401f30(param_1,param_2,0,&stack0x0000000c);
  return uVar1;
}




void __cdecl FUN_00401fa0(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,param_3 << 1);
  return;
}




void __cdecl FUN_00401fc0(void *param_1,void *param_2,int param_3)

{
  memmove(param_1,param_2,param_3 << 1);
  return;
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




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned int __cdecl std::_Narrow_char_traits<char,int>::length(char const *
   const)
    public: static unsigned int __cdecl std::char_traits<char>::length(char const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl length(char *param_1)

{
  char cVar1;
  char *local_c;
  
  local_c = param_1;
  do {
    cVar1 = *local_c;
    local_c = local_c + 1;
  } while (cVar1 != '\0');
  return (int)local_c - (int)(param_1 + 1);
}




/* Library Function - Single Match
    public: static char * __cdecl std::_Narrow_char_traits<char,int>::copy(char * const,char const *
   const,unsigned int)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

char * __cdecl std::_Narrow_char_traits<char,int>::copy(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)memcpy(param_1,param_2,param_3);
  return pcVar1;
}




/* Library Function - Single Match
    public: static char * __cdecl std::char_traits<char>::move(char * const,char const *
   const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

char * __cdecl std::char_traits<char>::move(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)memmove(param_1,param_2,param_3);
  return pcVar1;
}




void __cdecl FUN_00402070(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    unsigned short * * __cdecl std::addressof<unsigned short *>(unsigned short * &)
    wchar_t * * __cdecl std::addressof<wchar_t *>(wchar_t * &)
   
   Library: Visual Studio 2017 Release */

undefined4 __cdecl addressof<>(undefined4 param_1)

{
  return param_1;
}




/* Library Function - Single Match
    public: static void * __cdecl std::_Default_allocate_traits::_Allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Default_allocate_traits::_Allocate(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_004124b9(param_1);
  return pvVar1;
}




void __cdecl FUN_004020b0(int *param_1,int *param_2)

{
  uint uVar1;
  
  *param_2 = *param_2 + 0x23;
  uVar1 = *param_1 - *(int *)(*param_1 + -4);
  if ((3 < uVar1) && (uVar1 < 0x24)) {
    *param_1 = *(int *)(*param_1 + -4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void FUN_00402120(void)

{
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00402130(void)

{
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}




/* WARNING: Removing unreachable block (ram,0x00402243) */

undefined4 FUN_00402150(void)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  HANDLE hObject;
  int iVar4;
  bool bVar5;
  uint local_1c;
  ushort *local_14;
  ushort *local_10;
  
  puVar3 = (undefined4 *)FUN_004124b9(0x22c);
  do {
    bVar2 = false;
    hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
    *puVar3 = 0x22c;
    do {
      iVar4 = Process32NextW(hObject,puVar3);
      if (iVar4 == 0) goto LAB_00402219;
      local_14 = &DAT_00414f98;
      local_10 = (ushort *)(puVar3 + 9);
      do {
        uVar1 = *local_10;
        bVar5 = uVar1 < *local_14;
        if (uVar1 != *local_14) {
LAB_004021fa:
          local_1c = -(uint)bVar5 | 1;
          goto LAB_00402202;
        }
        if (uVar1 == 0) break;
        uVar1 = local_10[1];
        bVar5 = uVar1 < local_14[1];
        if (uVar1 != local_14[1]) goto LAB_004021fa;
        local_10 = local_10 + 2;
        local_14 = local_14 + 2;
      } while (uVar1 != 0);
      local_1c = 0;
LAB_00402202:
    } while (local_1c != 0);
    bVar2 = true;
LAB_00402219:
    CloseHandle(hObject);
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      ExitProcess(0);
    }
    Sleep(5000);
  } while( true );
}




void __cdecl FUN_00402250(void *param_1,void *param_2)

{
  uint uVar1;
  short *psVar2;
  undefined4 local_80 [3];
  void *local_74;
  void *local_70;
  void *local_6c;
  void *local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  short local_58;
  short local_54;
  char local_4d;
  uint local_4c;
  char local_45;
  undefined1 local_44 [24];
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004135a8;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 0;
  FUN_004031b0(local_80);
  local_8 = 0;
  local_5c = 0;
  local_4c = 0;
  local_45 = '\0';
  local_58 = 0;
  while (uVar1 = FID_conflict_size(param_2), local_4c < uVar1) {
    psVar2 = (short *)FUN_004032e0(param_2,local_4c);
    local_54 = *psVar2;
    if ((local_54 == 0x22) || (local_54 == 0x27)) {
      local_45 = '\x01';
    }
    if (local_54 == 0x20) {
      if (local_4c != 0) {
        psVar2 = (short *)FUN_004032e0(param_2,local_4c - 1);
        local_58 = *psVar2;
      }
      if ((local_58 == 0x22) || (local_58 == 0x27)) {
        local_60 = 0;
      }
      else {
        local_60 = 1;
      }
      local_4d = (char)local_60;
      if ((local_45 == '\0') || ((char)local_60 == '\0')) {
        if (1 < local_4c - local_5c) {
          local_6c = FUN_004031f0(param_2,local_2c,local_5c,local_4c);
          local_8._0_1_ = 1;
          local_68 = local_6c;
          FUN_00402f90(local_80,local_6c);
          local_8 = (uint)local_8._1_3_ << 8;
          ~basic_string<>(local_2c);
        }
        local_5c = local_4c + 1;
        local_45 = '\0';
      }
    }
    local_4c = local_4c + 1;
  }
  if (local_4c != local_5c) {
    local_74 = FUN_004031f0(param_2,local_44,local_5c,local_4c);
    local_8._0_1_ = 2;
    local_70 = local_74;
    FUN_00402f90(local_80,local_74);
    local_8 = (uint)local_8._1_3_ << 8;
    ~basic_string<>(local_44);
  }
  FUN_00403120(param_1,local_80);
  local_64 = local_64 | 1;
  local_8 = 0xffffffff;
  FUN_004030e0(local_80);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00402430(void *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 local_58 [12];
  LPCWSTR local_4c;
  int local_48;
  LPSTR local_44;
  LPCWSTR local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined1 local_2d;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004135e0;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_2c);
  local_8 = 0;
  bVar1 = FUN_00403240(param_2);
  if (!bVar1) {
    local_3c = FID_conflict_size(param_2);
    local_40 = (LPCWSTR)FUN_00403290(param_2);
    local_34 = WideCharToMultiByte(0,0,local_40,local_3c,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar2 = Bxty(&local_2d);
    FUN_00402e70(local_58,local_34 + 1,uVar2);
    local_8._0_1_ = 1;
    local_44 = (LPSTR)FUN_00402e10(local_58,0);
    local_48 = FID_conflict_size(param_2);
    local_4c = (LPCWSTR)FUN_00403290(param_2);
    WideCharToMultiByte(0,0,local_4c,local_48,local_44,local_34,(LPCSTR)0x0,(LPBOOL)0x0);
    pcVar3 = (char *)FUN_00402e10(local_58,0);
    FUN_00403430(local_2c,pcVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00402e30(local_58);
  }
  FUN_004034a0(param_1,local_2c);
  local_38 = local_38 | 1;
  local_8 = 0xffffffff;
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            (local_2c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00402868) */
/* WARNING: Removing unreachable block (ram,0x004028a0) */
/* WARNING: Removing unreachable block (ram,0x00402881) */
/* WARNING: Removing unreachable block (ram,0x004028aa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402580(HINSTANCE param_1,undefined4 param_2,wchar_t *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  BOOL BVar5;
  undefined *puVar6;
  tagMSG local_22ac;
  code *local_2290;
  undefined4 local_228c;
  code *local_2288;
  int local_2284;
  wchar_t *local_2280;
  undefined4 local_227c;
  undefined4 local_2278;
  WPARAM local_2274;
  undefined4 local_2270;
  code *local_226c;
  undefined4 *local_2268;
  undefined4 *local_2264;
  undefined4 local_2260;
  undefined4 local_225c;
  int local_2258;
  WCHAR *local_2254;
  uint local_2250;
  wchar_t *local_224c;
  undefined4 *local_2248;
  uint local_2244;
  wchar_t *local_2240;
  undefined8 local_2238;
  undefined4 *local_2230;
  void *local_222c;
  int local_2228;
  undefined4 *local_2224;
  void *local_2220;
  undefined4 local_221c;
  int local_2210;
  FARPROC local_220c;
  undefined1 local_2208 [12];
  WCHAR *local_21fc;
  WCHAR local_21f6;
  HMODULE local_21f4;
  undefined4 *local_21f0;
  wchar_t local_21ec;
  undefined2 local_21ea;
  wchar_t local_21e8;
  wchar_t local_21e6;
  WCHAR *local_21e4;
  WCHAR *local_21e0;
  WCHAR *local_21dc;
  wchar_t *local_21d8;
  wchar_t *local_21d4;
  wchar_t *local_21d0;
  undefined4 *local_21cc;
  WCHAR local_21c6;
  WCHAR *local_21c4;
  undefined1 local_21be;
  bool local_21bd;
  int *local_21bc;
  undefined4 local_21b8 [90];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2050 [24];
  undefined1 local_2038 [24];
  undefined1 local_2020 [24];
  WCHAR local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  basic_string<>(local_2038,param_3);
  FUN_00402250(local_2208,local_2038);
  ~basic_string<>(local_2038);
  local_2210 = 0;
  uVar2 = FUN_00402f60(local_2208);
  if (1 < uVar2) {
    puVar6 = &DAT_00414fac;
    iVar3 = FUN_00402f40(local_2208,1);
    uVar4 = FUN_00403290(iVar3);
    FUN_00401f60(uVar4,puVar6);
  }
  CoInitialize((LPVOID)0x0);
  SetErrorMode(0x8007);
  SetUnhandledExceptionFilter(FUN_00402130);
  signal(0x16);
  _set_abort_behavior(0,3);
  _DAT_0041b5f8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402150,(LPVOID)0x0,0,(LPDWORD)0x0)
  ;
  memset(local_2008,0,0x2000);
  FUN_004122f0();
  FUN_00401ef0(local_2008,0xfff,L"%s\\EaseUS_MediaGraph.dll");
  local_21f4 = LoadLibraryW(local_2008);
  if (local_21f4 == (HMODULE)0x0) {
    local_2278 = 0xffffffff;
    FUN_004030e0(local_2208);
    goto LAB_00402de3;
  }
  local_220c = GetProcAddress(local_21f4,"CreateMediaGraph");
  if (local_220c == (FARPROC)0x0) {
    local_2260 = 0xfffffffe;
    FUN_004030e0(local_2208);
    goto LAB_00402de3;
  }
  local_21bc = (int *)(*local_220c)();
  if (local_21bc == (int *)0x0) {
    local_227c = 0xfffffffd;
    FUN_004030e0(local_2208);
    goto LAB_00402de3;
  }
  DAT_0041b5f4 = GetProcAddress(local_21f4,"GatherPreviewBmpData");
  FUN_00409d80(local_21b8,local_21bc);
  local_21bd = true;
  if (param_3 != (wchar_t *)0x0) {
    local_21d0 = param_3;
    local_2280 = param_3 + 1;
    do {
      local_21e6 = *local_21d0;
      local_21d0 = local_21d0 + 1;
    } while (local_21e6 != L'\0');
    local_2284 = (int)local_21d0 - (int)local_2280 >> 1;
    if (local_2284 != 0) {
      iVar3 = isdigit((uint)(ushort)*param_3);
      local_21be = iVar3 != 0;
      local_21bd = (bool)local_21be;
    }
  }
  FUN_0040a500(param_1,local_21bd,local_2210);
  local_2288 = *(code **)(*local_21bc + 4);
  (*local_2288)(local_21b8);
  FUN_0040b040((int)local_21b8);
  local_221c = 0;
  local_228c = 0;
  local_21cc = (undefined4 *)0x0;
  if (param_3 == (wchar_t *)0x0) {
LAB_004029bf:
    if (param_3 != (wchar_t *)0x0) {
      local_21d8 = param_3;
      local_224c = param_3 + 1;
      do {
        local_21ec = *local_21d8;
        local_21d8 = local_21d8 + 1;
      } while (local_21ec != L'\0');
      local_2250 = (int)local_21d8 - (int)local_224c >> 1;
      if ((4 < local_2250) && (iVar3 = FUN_00402f60(local_2208), iVar3 != 0)) {
        local_21c4 = local_2008;
        memset(local_21c4,0,0x2000);
        iVar3 = FUN_00402f40(local_2208,0);
        local_21e4 = (WCHAR *)FUN_00403290(iVar3);
        if (*local_21e4 == L'\"') {
          local_21e4 = local_21e4 + 1;
        }
        local_21fc = local_21e4;
        local_21e0 = local_21c4;
        do {
          local_21c6 = *local_21fc;
          *local_21e0 = local_21c6;
          local_21fc = local_21fc + 1;
          local_21e0 = local_21e0 + 1;
        } while (local_21c6 != L'\0');
        local_21dc = local_21c4;
        local_2254 = local_21c4 + 1;
        do {
          local_21f6 = *local_21dc;
          local_21dc = local_21dc + 1;
        } while (local_21f6 != L'\0');
        local_2258 = (int)local_21dc - (int)local_2254 >> 1;
        if (local_21c4[local_2258 + -1] == L'\"') {
          local_21c4[local_2258 + -1] = L'\0';
        }
        local_2238 = 0;
        local_2228 = local_2258;
        uVar2 = FUN_00402f60(local_2208);
        if (2 < uVar2) {
          iVar3 = FUN_00402f40(local_2208,2);
          uVar4 = FUN_00403290(iVar3);
          local_2238 = wtoll(uVar4);
        }
        local_2290 = *(code **)(*local_21bc + 8);
        basic_string<>(local_2020,local_21c4);
        uVar4 = FUN_00402430(local_2050,local_2020);
        local_225c = FUN_004033e0(uVar4);
        (*local_2290)(local_21c4,local_225c,(undefined4)local_2238,local_2238._4_4_);
        FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
                  (local_2050);
        ~basic_string<>(local_2020);
        goto LAB_00402cb7;
      }
    }
    if (local_21cc == (undefined4 *)0x0) {
      local_222c = (void *)FUN_004124b9(0x1c);
      if (local_222c == (void *)0x0) {
        local_2230 = (undefined4 *)0x0;
      }
      else {
        local_2230 = FUN_00401240(local_222c,local_21bc,0x4ecb);
      }
      local_2264 = local_2230;
      local_21cc = local_2230;
    }
  }
  else {
    local_21d4 = param_3;
    local_2240 = param_3 + 1;
    do {
      local_21e8 = *local_21d4;
      local_21d4 = local_21d4 + 1;
    } while (local_21e8 != L'\0');
    local_2244 = (int)local_21d4 - (int)local_2240 >> 1;
    if ((local_2244 < 5) || (local_21bd == false)) goto LAB_004029bf;
    local_2220 = (void *)FUN_004124b9(0x1c);
    if (local_2220 == (void *)0x0) {
      local_2224 = (undefined4 *)0x0;
    }
    else {
      iVar3 = _wtoi(param_3);
      local_21ea = (undefined2)iVar3;
      local_2224 = FUN_00401240(local_2220,local_21bc,local_21ea);
    }
    local_2248 = local_2224;
    local_21cc = local_2224;
  }
LAB_00402cb7:
  local_22ac.hwnd = (HWND)0x0;
  local_22ac.message = 0;
  local_22ac.wParam = 0;
  local_22ac.lParam = 0;
  local_22ac.time = 0;
  local_22ac.pt.x = 0;
  local_22ac.pt.y = 0;
  while ((cVar1 = (**(code **)(*local_21bc + 0x3c))(), cVar1 != '\0' &&
         (BVar5 = GetMessageW(&local_22ac,(HWND)0x0,0,0), BVar5 != 0))) {
    TranslateMessage(&local_22ac);
    DispatchMessageW(&local_22ac);
  }
  (**(code **)(*local_21bc + 0x40))();
  local_2268 = local_21cc;
  local_21f0 = local_21cc;
  if (local_21cc == (undefined4 *)0x0) {
    local_2270 = 0;
  }
  else {
    local_226c = *(code **)*local_21cc;
    local_2270 = (*local_226c)(1);
  }
  local_21cc = (undefined4 *)0x0;
  (**(code **)(*local_21bc + 0x44))();
  local_21bc = (int *)0x0;
  local_2274 = local_22ac.wParam;
  FUN_0040a200(local_21b8);
  FUN_004030e0(local_2208);
LAB_00402de3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
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




int __thiscall FUN_00402e10(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00403610(this);
  return *piVar1 + param_1;
}




void __fastcall FUN_00402e30(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403630(param_1);
  ExceptionList = local_10;
  return;
}




void * __thiscall FUN_00402e70(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413630;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00404520(this,param_2);
  uVar1 = FUN_004036e0(this,param_1);
  if ((uVar1 & 0xff) != 0) {
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_00403610(this);
    uVar3 = FUN_004037a0(this,(void *)*puVar2,param_1);
    puVar2 = (undefined4 *)Bx(this);
    *puVar2 = uVar3;
    pvVar4 = (void *)FUN_00402f0b();
    return pvVar4;
  }
  ExceptionList = local_10;
  return this;
}




void Catch_All_00402ef4(void)

{
  int unaff_EBP;
  
  FUN_00403630(*(undefined4 *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_00402f0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}




int __thiscall FUN_00402f40(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00403610(this);
  return param_1 * 0x18 + *piVar1;
}




int __fastcall FUN_00402f60(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)Bx(param_1);
  piVar2 = (int *)FUN_00403610(param_1);
  return (*piVar1 - *piVar2) / 0x18;
}




void __thiscall FUN_00402f90(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = addressof<>(param_1);
  FUN_00402fc0(this,uVar1);
  return;
}




undefined4 __thiscall FUN_00402fc0(void *this,undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  
  bVar1 = FUN_004038d0(this);
  if (bVar1) {
    uVar2 = addressof<>(param_1);
    uVar2 = FUN_00403030(this,uVar2);
  }
  else {
    uVar2 = addressof<>(param_1);
    piVar3 = (int *)Bx(this);
    uVar2 = FUN_004045a0(this,*piVar3,uVar2);
  }
  return uVar2;
}




undefined4 __thiscall FUN_00403030(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  uVar1 = addressof<>(param_1);
  puVar2 = (undefined4 *)Bx(this);
  uVar3 = addressof<>(*puVar2);
  uVar4 = FUN_004037d0(this);
  FUN_00404560(uVar4,uVar3,uVar1);
  Bx(this);
  Bx(this);
  FUN_004011b0();
  puVar2 = (undefined4 *)Bx(this);
  uVar1 = *puVar2;
  piVar5 = (int *)Bx(this);
  *piVar5 = *piVar5 + 0x18;
  return uVar1;
}




void __fastcall FUN_004030e0(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403820(param_1);
  ExceptionList = local_10;
  return;
}




void * __thiscall FUN_00403120(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_004037d0(param_1);
  uVar1 = addressof<>(uVar1);
  FUN_00404520(this,uVar1);
  uVar1 = addressof<>(param_1);
  FUN_00403910(this,uVar1);
  ExceptionList = local_10;
  return this;
}




undefined4 * __fastcall FUN_004031b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>(param_1);
  ExceptionList = local_10;
  return param_1;
}




void * __thiscall FUN_004031f0(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 local_5;
  
  uVar1 = FUN_00403bf0(this,&local_5);
  FUN_00403d10(param_1,this,param_2,param_3,uVar1);
  return param_1;
}




bool __fastcall FUN_00403240(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FID_conflict_size(param_1);
  return iVar1 == 0;
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
  
  iVar1 = FUN_004037d0(param_1);
  return *(undefined4 *)(iVar1 + 0x10);
}




void __fastcall FUN_00403290(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_004037d0(param_1);
  Myptr(puVar1);
  ExceptionList = local_10;
  return;
}




int __thiscall FUN_004032e0(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004037d0(this);
  FUN_004039d0(puVar1,param_1);
  puVar1 = Myptr(puVar1);
  return (int)puVar1 + param_1 * 2;
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
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FID_conflict__Tidy_deallocate(param_1);
  FUN_00403590();
  ExceptionList = local_10;
  return;
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

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
basic_string<>(void *this,wchar_t *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413678;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>((int)this);
  local_8 = 0;
  FID_conflict__Tidy_init(this);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)this,param_1);
  ExceptionList = local_10;
  return (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
         this;
}




void __fastcall FUN_004033e0(undefined4 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(param_1);
  Myptr(p_Var1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_00403430(void *this,char *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this,
             param_1);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::~_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >(void)
    public: __thiscall std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::~_String_alloc<struct std::_String_base_types<unsigned
   short,class std::allocator<unsigned short> > >(void)
    public: __thiscall std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::~_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >(void)
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::~basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(void)
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __fastcall
FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_00403590();
  ExceptionList = local_10;
  return;
}




void * __thiscall FUN_004034a0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_004037d0(param_1);
  uVar1 = addressof<>(uVar1);
  FUN_004047a0(this,uVar1);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           addressof<>(param_1);
  FUN_00404010(this,pbVar2);
  ExceptionList = local_10;
  return this;
}




/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(void)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>((int)this);
  _Tidy_init(this);
  ExceptionList = local_10;
  return this;
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




void FUN_00403590(void)

{
  FUN_004035b0();
  return;
}




void FUN_004035b0(void)

{
  FUN_004035d0();
  return;
}




void FUN_004035d0(void)

{
  FUN_00401200();
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
  
  iVar1 = FUN_004037d0(param_1);
  return iVar1 + 4;
}




void __fastcall FUN_00403610(undefined4 param_1)

{
  FUN_004037d0(param_1);
  return;
}




void __fastcall FUN_00403630(undefined4 param_1)

{
  int *piVar1;
  allocator<char> *this;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_00403ad0(param_1);
  piVar1 = (int *)FUN_00403610(param_1);
  if (*piVar1 != 0) {
    Bx(param_1);
    FUN_00403610(param_1);
    FUN_00404150(param_1);
    this = (allocator<char> *)FUN_004037d0(param_1);
    uVar2 = FUN_00404180(param_1);
    puVar3 = (undefined4 *)FUN_00403610(param_1);
    std::allocator<char>::deallocate(this,(char *)*puVar3,uVar2);
    puVar3 = (undefined4 *)FUN_00403610(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)Bx(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_00404120(param_1);
    *puVar3 = 0;
  }
  return;
}




uint __thiscall FUN_004036e0(void *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  allocator<char> *this_00;
  char *pcVar5;
  int *piVar6;
  
  puVar3 = (undefined4 *)FUN_00403610(this);
  *puVar3 = 0;
  puVar3 = (undefined4 *)Bx(this);
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_00404120(this);
  *puVar3 = 0;
  if (param_1 == 0) {
    uVar4 = (uint)puVar3 & 0xffffff00;
  }
  else {
    uVar4 = FUN_004041b0(this);
    if (uVar4 < param_1) {
      FUN_00404140();
    }
    this_00 = (allocator<char> *)FUN_004037d0(this);
    pcVar5 = std::allocator<char>::allocate(this_00,param_1);
    puVar3 = (undefined4 *)FUN_00403610(this);
    *puVar3 = pcVar5;
    puVar3 = (undefined4 *)FUN_00403610(this);
    uVar1 = *puVar3;
    puVar3 = (undefined4 *)Bx(this);
    *puVar3 = uVar1;
    piVar6 = (int *)FUN_00403610(this);
    iVar2 = *piVar6;
    piVar6 = (int *)FUN_00404120(this);
    *piVar6 = iVar2 + param_1;
    uVar4 = CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  return uVar4;
}




void __thiscall FUN_004037a0(void *this,void *param_1,int param_2)

{
  FUN_004037d0(this);
  _Find_unchecked<>(param_1,param_2);
  return;
}




void __fastcall FUN_004037d0(undefined4 param_1)

{
  Bxty(param_1);
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
   
   Library: Visual Studio 2017 Release */

undefined4 * __fastcall _String_alloc<>(undefined4 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




void __fastcall FUN_00403820(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00403ad0(param_1);
  piVar1 = (int *)FUN_00403610(param_1);
  if (*piVar1 != 0) {
    piVar1 = (int *)Bx(param_1);
    iVar2 = *piVar1;
    piVar1 = (int *)FUN_00403610(param_1);
    FUN_00404230(param_1,*piVar1,iVar2);
    FUN_004037d0(param_1);
    iVar2 = FUN_00404260(param_1);
    puVar3 = (undefined4 *)FUN_00403610(param_1);
    FUN_00404290((void *)*puVar3,iVar2);
    puVar3 = (undefined4 *)FUN_00403610(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)Bx(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_00404120(param_1);
    *puVar3 = 0;
  }
  return;
}




bool __fastcall FUN_004038d0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00404120(param_1);
  piVar2 = (int *)Bx(param_1);
  return *piVar1 != *piVar2;
}




void __thiscall FUN_00403910(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004136a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004041f0(this,param_1);
  puVar2 = (undefined4 *)FUN_00403610(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00403610(this);
  *puVar2 = uVar1;
  puVar2 = (undefined4 *)Bx(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)Bx(this);
  *puVar2 = uVar1;
  puVar2 = (undefined4 *)FUN_00404120(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00404120(this);
  *puVar2 = uVar1;
  puVar2 = (undefined4 *)FUN_00403610(param_1);
  *puVar2 = 0;
  puVar2 = (undefined4 *)Bx(param_1);
  *puVar2 = 0;
  puVar2 = (undefined4 *)FUN_00404120(param_1);
  *puVar2 = 0;
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_004039d0(void *this,uint param_1)

{
  if (*(uint *)((int)this + 0x10) <= param_1) {
    FUN_004042b0();
  }
  return;
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
   
   Library: Visual Studio 2017 Release */

int __fastcall _String_alloc<>(int param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




/* Library Function - Single Match
    public: bool __thiscall std::_String_val<struct std::_Simple_types<char>
   >::_Large_string_engaged(void)const 
   
   Library: Visual Studio 2017 Release */

bool __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged
          (_String_val<struct_std::_Simple_types<char>_> *this)

{
  return 0xf < *(uint *)(this + 0x14);
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Myptr(void)
    public: unsigned short const * __thiscall std::_String_val<struct std::_Simple_types<unsigned
   short> >::_Myptr(void)const 
    public: wchar_t * __thiscall std::_String_val<struct std::_Simple_types<wchar_t> >::_Myptr(void)
    public: wchar_t const * __thiscall std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_String_val<struct_std::_Simple_types<char>_> * __fastcall
Myptr(_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  bool bVar1;
  undefined4 local_c;
  
  bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(param_1);
  local_c = param_1;
  if (bVar1) {
    local_c = (_String_val<struct_std::_Simple_types<char>_> *)addressof<>(*(undefined4 *)param_1);
  }
  return local_c;
}




void __fastcall FUN_00403ad0(undefined4 param_1)

{
  FUN_004037d0(param_1);
  FUN_00401200();
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
  
  FUN_00403ad0(param_1);
  puVar3 = (undefined4 *)FUN_004037d0(param_1);
  bVar2 = Large_string_engaged((int)puVar3);
  if (bVar2) {
    pvVar1 = (void *)*puVar3;
    FUN_004037d0(param_1);
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
  
  puVar1 = (undefined2 *)FUN_004037d0(param_1);
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 10) = 7;
  local_6 = 0;
  assign(puVar1,&local_6);
  return;
}




undefined4 __thiscall FUN_00403bf0(void *this,undefined4 param_1)

{
  FUN_004037d0(this);
  return param_1;
}




/* Library Function - Single Match
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(wchar_t const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> * __thiscall
std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
          (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
           *this,wchar_t *param_1)

{
  uint uVar1;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar2;
  
  uVar1 = _WChar_traits<wchar_t>::length(param_1);
  uVar1 = addressof<>(uVar1);
  pbVar2 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FID_conflict_assign(this,param_1,uVar1);
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

void * __thiscall FID_conflict_assign(void *this,void *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 local_8;
  undefined1 local_5;
  
  puVar1 = (undefined4 *)FUN_004037d0(this);
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




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_03628ca18370b1f44a99b655e704819b>::operator()(wchar_t *
   const,unsigned int,wchar_t const * const)const 
    public: void __thiscall <lambda_2b7e716477254df52771775b37436d39>::operator()(unsigned short *
   const,unsigned int,unsigned short const * const)const 
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__(void *param_1,int param_2,void *param_3)

{
  undefined2 local_6;
  
  copy(param_1,param_3,param_2);
  local_6 = 0;
  assign((undefined2 *)((int)param_1 + param_2 * 2),&local_6);
  return;
}




void * __thiscall
FUN_00403d10(void *this,undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413678;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004047a0(this,param_4);
  local_8 = 0;
  FID_conflict__Tidy_init(this);
  FUN_00404300(this,param_1,param_2,param_3);
  ExceptionList = local_10;
  return this;
}




/* Library Function - Single Match
    public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_deallocate(void)
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_deallocate
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  char *pcVar1;
  bool bVar2;
  _String_val<struct_std::_Simple_types<char>_> *this_00;
  allocator<char> *this_01;
  undefined1 local_5;
  
  FUN_00403ad0(this);
  this_00 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(this);
  bVar2 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(this_00);
  if (bVar2) {
    pcVar1 = *(char **)this_00;
    this_01 = (allocator<char> *)FUN_004037d0(this);
    addressof<>(this_00);
    destroy<>();
    allocator<char>::deallocate(this_01,pcVar1,*(int *)(this_00 + 0x14) + 1);
  }
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0x14) = 0xf;
  local_5 = 0;
  FUN_00402070(this_00,&local_5);
  return;
}




/* Library Function - Single Match
    public: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_init(void)
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  undefined1 *puVar1;
  undefined1 local_5;
  
  puVar1 = (undefined1 *)FUN_004037d0(this);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0xf;
  local_5 = 0;
  FUN_00402070(puVar1,&local_5);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned int __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::max_size(void)const 
    public: unsigned int __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::max_size(void)const 
   
   Library: Visual Studio 2017 Release */

uint __fastcall FID_conflict_max_size(undefined4 param_1)

{
  allocator<char> *paVar1;
  uint *puVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10 [3];
  
  local_10[2] = param_1;
  paVar1 = (allocator<char> *)FUN_004037d0(param_1);
  local_10[0] = std::_Default_allocator_traits<class_std::allocator<char>_>::max_size(paVar1);
  local_10[1] = 0x10;
  puVar2 = std::_Max_value<unsigned_int>(local_10,local_10 + 1);
  local_14 = *puVar2;
  local_18 = local_14 - 1;
  local_1c = FID_conflict_max_size();
  puVar2 = std::_Max_value<unsigned_int>(&local_1c,&local_18);
  return *puVar2;
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
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  int iVar1;
  uint uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  
  iVar1 = length(param_1);
  uVar2 = addressof<>(iVar1);
  pbVar3 = assign(this,param_1,uVar2);
  return pbVar3;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * const,unsigned int)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1,uint param_2)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  undefined1 local_5;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(this);
  if (*(uint *)(p_Var1 + 0x14) < param_2) {
    this = _Reallocate_for<class_<lambda_9366063389c5f42a00a5088cf24e69de>,char_const*>
                     (this,param_2,0,param_1);
  }
  else {
    p_Var2 = Myptr(p_Var1);
    *(uint *)(p_Var1 + 0x10) = param_2;
    char_traits<char>::move((char *)p_Var2,param_1,param_2);
    local_5 = 0;
    FUN_00402070(p_Var2 + param_2,&local_5);
  }
  return this;
}




/* Library Function - Single Match
    public: void __thiscall <lambda_9366063389c5f42a00a5088cf24e69de>::operator()(char *
   const,unsigned int,char const * const)const 
   
   Library: Visual Studio 2017 Release */

void __thiscall
<lambda_9366063389c5f42a00a5088cf24e69de>::operator()
          (<lambda_9366063389c5f42a00a5088cf24e69de> *this,char *param_1,uint param_2,char *param_3)

{
  undefined1 local_5;
  
  std::_Narrow_char_traits<char,int>::copy(param_1,param_3,param_2);
  local_5 = 0;
  FUN_00402070(param_1 + param_2,&local_5);
  return;
}




void __thiscall
FUN_00404010(void *this,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004136a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_004037d0(param_1);
  uVar2 = FUN_004037d0(this);
  puVar3 = (undefined4 *)addressof<>(uVar2);
  puVar4 = (undefined4 *)addressof<>(uVar1);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
  puVar3[3] = puVar4[3];
  puVar3[4] = puVar4[4];
  puVar3[5] = puVar4[5];
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_1);
  ExceptionList = local_10;
  return;
}




/* Library Function - Single Match
    public: char * __thiscall std::allocator<char>::allocate(unsigned int)
   
   Library: Visual Studio 2017 Release */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = addressof<>(param_1);
  pcVar2 = (char *)_Allocate<8,struct_std::_Default_allocate_traits,0>(uVar1);
  return pcVar2;
}




/* Library Function - Single Match
    public: void __thiscall std::allocator<char>::deallocate(char * const,unsigned int)
   
   Library: Visual Studio 2017 Release */

void __thiscall std::allocator<char>::deallocate(allocator<char> *this,char *param_1,uint param_2)

{
  _Deallocate<>(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __cdecl std::_WChar_traits<unsigned short>::copy(unsigned short
   * const,unsigned short const * const,unsigned int)
    public: static wchar_t * __cdecl std::_WChar_traits<wchar_t>::copy(wchar_t * const,wchar_t const
   * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl copy(void *param_1,void *param_2,int param_3)

{
  FUN_00401fa0(param_1,param_2,param_3);
  return;
}




int __fastcall FUN_00404120(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004037d0(param_1);
  return iVar1 + 8;
}




void FUN_00404140(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




void __fastcall FUN_00404150(undefined4 param_1)

{
  FUN_004037d0(param_1);
  _Find_unchecked<>();
  return;
}




int __fastcall FUN_00404180(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00404120(param_1);
  piVar2 = (int *)FUN_00403610(param_1);
  return *piVar1 - *piVar2;
}




uint __fastcall FUN_004041b0(undefined4 param_1)

{
  allocator<char> *paVar1;
  uint *puVar2;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  paVar1 = (allocator<char> *)FUN_004037d0(param_1);
  local_c = std::_Default_allocator_traits<class_std::allocator<char>_>::max_size(paVar1);
  local_10 = FID_conflict_max_size();
  puVar2 = std::_Max_value<unsigned_int>(&local_10,&local_c);
  return *puVar2;
}




void __thiscall FUN_004041f0(void *this,undefined4 param_1)

{
  FUN_004037d0(this);
  FUN_004037d0(param_1);
  FUN_004011c0();
  return;
}




void __thiscall FUN_00404230(void *this,int param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_004037d0(this);
  _Find_unchecked<>(param_1,param_2,pvVar1);
  return;
}




int __fastcall FUN_00404260(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00404120(param_1);
  piVar2 = (int *)FUN_00403610(param_1);
  return (*piVar1 - *piVar2) / 0x18;
}




void FUN_00404290(void *param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0x18);
  return;
}




void FUN_004042b0(void)

{
  std::_Xout_of_range("invalid string position");
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




/* Library Function - Single Match
    public: static unsigned int __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::max_size(class std::allocator<char> const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl
std::_Default_allocator_traits<class_std::allocator<char>_>::max_size(allocator<char> *param_1)

{
  return 0xffffffff;
}




void __thiscall FUN_00404300(void *this,undefined4 param_1,uint param_2,uint param_3)

{
  _String_val<struct_std::_Simple_types<char>_> *this_00;
  uint uVar1;
  undefined4 *puVar2;
  
  this_00 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(param_1);
  FUN_00404430(this_00,param_2);
  uVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this_00,param_2,param_3);
  puVar2 = Myptr((undefined4 *)this_00);
  FID_conflict_assign(this,(void *)((int)puVar2 + param_2 * 2),uVar1);
  return;
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




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __cdecl std::_WChar_traits<unsigned short>::move(unsigned short
   * const,unsigned short const * const,unsigned int)
    public: static wchar_t * __cdecl std::_WChar_traits<wchar_t>::move(wchar_t * const,wchar_t const
   * const,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl move(void *param_1,void *param_2,int param_3)

{
  FUN_00401fc0(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    public: static unsigned int __cdecl std::_WChar_traits<wchar_t>::length(wchar_t const *)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

uint __cdecl std::_WChar_traits<wchar_t>::length(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *local_c;
  
  local_c = param_1;
  do {
    wVar1 = *local_c;
    local_c = local_c + 1;
  } while (wVar1 != L'\0');
  return (int)local_c - (int)(param_1 + 1) >> 1;
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




void __thiscall FUN_00404430(void *this,uint param_1)

{
  if (*(uint *)((int)this + 0x10) < param_1) {
    FUN_004042b0();
  }
  return;
}




void __thiscall FUN_00404450(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004136a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_004037d0(param_1);
  uVar2 = FUN_004037d0(this);
  puVar3 = (undefined4 *)addressof<>(uVar2);
  puVar4 = (undefined4 *)addressof<>(uVar1);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
  puVar3[3] = puVar4[3];
  puVar3[4] = puVar4[4];
  puVar3[5] = puVar4[5];
  FID_conflict__Tidy_init(param_1);
  ExceptionList = local_10;
  return;
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




void * __thiscall FUN_00404520(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_6;
  
  uVar1 = addressof<>(param_1);
  FUN_00404fc0(this,(uint)local_6,uVar1);
  return this;
}




void __cdecl FUN_00404560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this;
  undefined4 uVar1;
  
  this = (void *)forward<>(0x18,param_2);
  uVar1 = addressof<>(param_3);
  FUN_00404e40(this,uVar1);
  return;
}




void __thiscall FUN_004045a0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004136c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_00403610(this);
  iVar2 = (param_1 - *piVar1) / 0x18;
  uVar3 = FUN_004037d0(this);
  uVar4 = FUN_00402f60(this);
  uVar5 = FUN_00404cb0(this);
  if (uVar4 == uVar5) {
    FUN_00404140();
  }
  uVar4 = FUN_00404c00(this,uVar4 + 1);
  iVar6 = allocate(uVar4);
  local_8 = 0;
  uVar7 = addressof<>(param_2);
  uVar8 = addressof<>(iVar2 * 0x18 + iVar6);
  FUN_00404560(uVar3,uVar8,uVar7);
  piVar1 = (int *)Bx(this);
  if (param_1 == *piVar1) {
    puVar9 = (undefined4 *)Bx(this);
    uVar3 = *puVar9;
    puVar9 = (undefined4 *)FUN_00403610(this);
    FUN_00404c50(this,*puVar9,uVar3,iVar6);
  }
  else {
    iVar10 = param_1;
    iVar11 = iVar6;
    puVar9 = (undefined4 *)FUN_00403610(this);
    FUN_00404c80(this,*puVar9,iVar10,iVar11);
    iVar2 = iVar6 + 0x18 + iVar2 * 0x18;
    puVar9 = (undefined4 *)Bx(this);
    FUN_00404c80(this,param_1,*puVar9,iVar2);
  }
  FUN_0040474d();
  return;
}




void Catch_All_0040471e(void)

{
  int unaff_EBP;
  
  FUN_00404230(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x20),*(int *)(unaff_EBP + -0x30)
              );
  FUN_00404290(*(void **)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




int FUN_0040474d(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00404b40(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x18),*(int *)(unaff_EBP + -0x34)
               ,*(int *)(unaff_EBP + -0x28));
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  piVar2 = (int *)FUN_00403610(*(undefined4 *)(unaff_EBP + -0x14));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1 * 0x18 + *piVar2;
}




void * __thiscall FUN_004047a0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_6;
  
  uVar1 = addressof<>(param_1);
  FID_conflict__Compressed_pair<class_std::allocator<char>,class_std::_String_val<struct_std::_Simple_types<char>_>,1><class_std::allocator<char>_>
            (this,(uint)local_6,uVar1);
  return this;
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
  FUN_00405020(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t)
   
   Library: Visual Studio 2017 Release */

undefined4 * __fastcall _Compressed_pair<><>(undefined4 *param_1)

{
  Bxty(param_1);
  FUN_00404b10(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t)
   
   Library: Visual Studio 2017 Release */

int __fastcall _Compressed_pair<><>(int param_1)

{
  Bxty(param_1);
  _String_val<>(param_1);
  return param_1;
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

void * __thiscall _Reallocate_for<>(void *this,uint param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_c = this;
  uVar1 = FID_conflict_max_size(this);
  if (uVar1 < param_1) {
    FUN_00404d50();
  }
  local_8 = (undefined4 *)FUN_004037d0(local_c);
  uVar1 = local_8[5];
  uVar2 = FID_conflict__Calculate_growth(local_c,param_1);
  uVar3 = FUN_004037d0(local_c);
  local_10 = allocate(uVar2 + 1);
  FUN_00401200();
  local_8[4] = param_1;
  local_8[5] = uVar2;
  pvVar4 = (void *)addressof<>(local_10);
  FID_conflict_operator__(pvVar4,param_1,param_3);
  if (uVar1 < 8) {
    puVar6 = &local_10;
    uVar5 = addressof<>(local_8);
    construct<>(uVar3,uVar5,puVar6);
  }
  else {
    deallocate((void *)*local_8,uVar1 + 1);
    *local_8 = local_10;
  }
  return local_c;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_for<class <lambda_9366063389c5f42a00a5088cf24e69de>,char const *>(unsigned
   int,class <lambda_9366063389c5f42a00a5088cf24e69de>,char const *)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_for<class_<lambda_9366063389c5f42a00a5088cf24e69de>,char_const*>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          uint param_1,undefined4 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  allocator<char> *this_00;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  char **ppcVar6;
  char *local_10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_c;
  undefined4 *local_8;
  
  local_c = this;
  uVar1 = FID_conflict_max_size(this);
  if (uVar1 < param_1) {
    FUN_00404d50();
  }
  local_8 = (undefined4 *)FUN_004037d0(local_c);
  uVar1 = local_8[5];
  uVar2 = FID_conflict__Calculate_growth(local_c,param_1);
  this_00 = (allocator<char> *)FUN_004037d0(local_c);
  local_10 = allocator<char>::allocate(this_00,uVar2 + 1);
  FUN_00401200();
  local_8[4] = param_1;
  local_8[5] = uVar2;
  pcVar5 = param_4;
  pcVar3 = (char *)addressof<>(local_10);
  <lambda_9366063389c5f42a00a5088cf24e69de>::operator()
            ((<lambda_9366063389c5f42a00a5088cf24e69de> *)&param_3,pcVar3,param_1,pcVar5);
  if (uVar1 < 0x10) {
    ppcVar6 = &local_10;
    uVar4 = addressof<>(local_8);
    construct<>(this_00,uVar4,ppcVar6);
  }
  else {
    allocator<char>::deallocate(this_00,(char *)*local_8,uVar1 + 1);
    *local_8 = local_10;
  }
  return local_c;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short *,unsigned short * const &>(class std::allocator<unsigned short>
   &,unsigned short * * const,unsigned short * const &)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t *,wchar_t * const &>(class std::allocator<wchar_t> &,wchar_t * *
   const,wchar_t * const &)
   
   Library: Visual Studio 2017 Release */

void __cdecl construct<>(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)forward<>(4,param_2);
  puVar2 = (undefined4 *)addressof<>(param_3);
  *puVar1 = *puVar2;
  return;
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
    pvVar1 = (void *)FUN_00405040(param_1);
  }
  return pvVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<4,0>(void *,unsigned int)
    void __cdecl std::_Deallocate<8,0>(void *,unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl _Deallocate<>(void *param_1,uint param_2)

{
  if (0xfff < param_2) {
    FUN_004020b0((int *)&param_1,(int *)&param_2);
  }
  FUN_00412766(param_1);
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




/* Library Function - Multiple Matches With Same Base Name
    char const * __cdecl std::_Find_unchecked<char const *,char>(char const * const,char const *
   const,char const &)
    unsigned short const * __cdecl std::_Find_unchecked<unsigned short const *,unsigned
   short>(unsigned short const * const,unsigned short const * const,unsigned short const &)
    wchar_t const * __cdecl std::_Find_unchecked<wchar_t const *,wchar_t>(wchar_t const *
   const,wchar_t const * const,wchar_t const &)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl _Find_unchecked<>(int param_1,int param_2,void *param_3)

{
  FUN_004050b0(param_1,param_2,param_3);
  return;
}




undefined4 * __fastcall FUN_00404b10(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void __thiscall FUN_00404b40(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00403ad0(this);
  piVar1 = (int *)FUN_00403610(this);
  if (*piVar1 != 0) {
    piVar1 = (int *)Bx(this);
    iVar2 = *piVar1;
    piVar1 = (int *)FUN_00403610(this);
    FUN_00404230(this,*piVar1,iVar2);
    FUN_004037d0(this);
    iVar2 = FUN_00404260(this);
    puVar3 = (undefined4 *)FUN_00403610(this);
    FUN_00404290((void *)*puVar3,iVar2);
  }
  piVar1 = (int *)FUN_00403610(this);
  *piVar1 = param_1;
  piVar1 = (int *)Bx(this);
  *piVar1 = param_2 * 0x18 + param_1;
  piVar1 = (int *)FUN_00404120(this);
  *piVar1 = param_3 * 0x18 + param_1;
  return;
}




uint __thiscall FUN_00404c00(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00404260(this);
  uVar2 = FUN_00404cb0(this);
  uVar3 = param_1;
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar3 = (uVar1 >> 1) + uVar1, uVar3 < param_1)) {
    uVar3 = param_1;
  }
  return uVar3;
}




void __thiscall FUN_00404c50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00404f90(this,param_1,param_2,param_3);
  return;
}




void __thiscall FUN_00404c80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004037d0(this);
  FUN_004050f0(param_1,param_2,param_3,uVar1);
  return;
}




uint __fastcall FUN_00404cb0(undefined4 param_1)

{
  uint *puVar1;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_004037d0(param_1);
  local_c = FUN_00404f80();
  local_10 = FID_conflict_max_size();
  puVar1 = std::_Max_value<unsigned_int>(&local_10,&local_c);
  return *puVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __thiscall std::allocator<char>::allocate(unsigned int)
    public: unsigned short * __thiscall std::allocator<unsigned short>::allocate(unsigned int)
    public: struct std::_Container_proxy * __thiscall std::allocator<struct
   std::_Container_proxy>::allocate(unsigned int)
    public: wchar_t * __thiscall std::allocator<wchar_t>::allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void allocate(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004051d0(param_1);
  std::_Allocate<8,struct_std::_Default_allocate_traits,0>(uVar1);
  return;
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




void FUN_00404d50(void)

{
  std::_Xlength_error("string too long");
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
  local_18 = FUN_004037d0(local_10);
  local_14 = param_1 | 7;
  if ((local_14 <= local_8) &&
     (local_c = *(uint *)(local_18 + 0x14), local_c <= local_8 - (local_c >> 1))) {
    local_1c = (local_c >> 1) + local_c;
    puVar1 = std::_Max_value<unsigned_int>(&local_14,&local_1c);
    local_8 = *puVar1;
  }
  return local_8;
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
  FUN_004037d0(param_1);
  local_10[0] = FID_conflict_max_size();
  local_10[1] = 8;
  puVar1 = std::_Max_value<unsigned_int>(local_10,local_10 + 1);
  local_14 = *puVar1;
  local_18 = local_14 - 1;
  local_1c = FID_conflict_max_size();
  puVar1 = std::_Max_value<unsigned_int>(&local_1c,&local_18);
  return *puVar1;
}




void * __thiscall FUN_00404e40(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_004037d0(param_1);
  uVar1 = addressof<>(uVar1);
  FUN_004047a0(this,uVar1);
  uVar1 = addressof<>(param_1);
  FUN_00404450(this,uVar1);
  ExceptionList = local_10;
  return this;
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
  local_18 = FUN_004037d0(local_10);
  local_14 = param_1 | 0xf;
  if ((local_14 <= local_8) &&
     (local_c = *(uint *)(local_18 + 0x14), local_c <= local_8 - (local_c >> 1))) {
    local_1c = (local_c >> 1) + local_c;
    puVar1 = std::_Max_value<unsigned_int>(&local_14,&local_1c);
    local_8 = *puVar1;
  }
  return local_8;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __thiscall std::allocator<unsigned short>::allocate(unsigned int)
    public: wchar_t * __thiscall std::allocator<wchar_t>::allocate(unsigned int)
   
   Library: Visual Studio 2017 Release */

void allocate(uint param_1)

{
  uint uVar1;
  
  uVar1 = std::_Get_size_of_n<2>(param_1);
  std::_Allocate<8,struct_std::_Default_allocate_traits,0>(uVar1);
  return;
}




undefined4 FUN_00404f80(void)

{
  return 0xaaaaaaa;
}




void __thiscall FUN_00404f90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004037d0(this);
  FUN_004050f0(param_1,param_2,param_3,uVar1);
  return;
}




undefined4 * __thiscall FUN_00404fc0(void *this,undefined4 param_1,undefined4 param_2)

{
  addressof<>(param_2);
  FUN_00404b10((undefined4 *)this);
  return (undefined4 *)this;
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




void __cdecl FUN_00405020(void *param_1,int param_2)

{
  FUN_00405230(param_1,(int)param_1 + param_2);
  return;
}




uint __cdecl FUN_00405040(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = param_1 + 0x23;
  if (local_8 <= param_1) {
    local_8 = 0xffffffff;
  }
  pvVar1 = std::_Default_allocate_traits::_Allocate(local_8);
  if (pvVar1 != (void *)0x0) {
    uVar2 = (int)pvVar1 + 0x23U & 0xffffffe0;
    *(void **)(uVar2 - 4) = pvVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void __cdecl FUN_004050b0(int param_1,int param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    addressof<>(param_1);
    __ExceptionPtrDestroy(param_3);
  }
  return;
}




undefined4 __cdecl
FUN_004050f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = addressof<>(param_1);
  local_14 = addressof<>(param_2);
  FUN_004051b0(&local_c,&local_14);
  local_10 = addressof<>(param_3);
  uVar3 = FUN_00405270();
  iVar2 = local_c;
  uVar4 = local_10;
  iVar1 = local_14;
  local_6 = (undefined1)uVar3;
  local_5 = local_6;
  FUN_00405320(&stack0xffffffd4);
  uVar4 = FUN_00405280(iVar2,iVar1,uVar4,param_4);
  FUN_00405330(&param_3,uVar4);
  return param_3;
}




int __cdecl FUN_004051b0(int *param_1,int *param_2)

{
  return (*param_2 - *param_1) / 0x18;
}




int __cdecl FUN_004051d0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 * 0x18;
  if (0xaaaaaaa < param_1) {
    local_8 = -1;
  }
  return local_8;
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




int __cdecl FUN_00405230(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return param_2;
}




/* Library Function - Single Match
    void __cdecl __ExceptionPtrDestroy(void *)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __ExceptionPtrDestroy(void *param_1)

{
  void *in_stack_00000008;
  
  FUN_00405340(in_stack_00000008,0);
  return;
}




undefined4 FUN_00405270(void)

{
  return 0;
}




undefined4 __cdecl FUN_00405280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004136e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004053f0(local_20,param_3,param_4);
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    uVar1 = addressof<>(param_1);
    FUN_00405420(local_20,uVar1);
  }
  local_14 = FUN_00405370(local_20);
  local_8 = 0xffffffff;
  FUN_00405390(local_20);
  ExceptionList = local_10;
  return local_14;
}




undefined4 __fastcall FUN_00405320(undefined4 param_1)

{
  return param_1;
}




void __cdecl FUN_00405330(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




void * __thiscall FUN_00405340(void *this,uint param_1)

{
  ~basic_string<>(this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return this;
}




undefined4 __fastcall FUN_00405370(undefined4 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




void __fastcall FUN_00405390(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Find_unchecked<>(*param_1,param_1[1],(void *)param_1[2]);
  ExceptionList = local_10;
  return;
}




undefined4 * __thiscall FUN_004053f0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (undefined4 *)this;
}




void __thiscall FUN_00405420(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = addressof<>(param_1);
  uVar2 = addressof<>(*(undefined4 *)((int)this + 4));
  FUN_00404560(*(undefined4 *)((int)this + 8),uVar2,uVar1);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}




undefined4 * __fastcall FUN_00405480(undefined4 *param_1)

{
  *param_1 = IMediaSource::vftable;
  param_1[1] = 0;
  return param_1;
}




void __fastcall FUN_004054b0(undefined4 *param_1)

{
  *param_1 = IMediaSource::vftable;
  return;
}




undefined4 FUN_004054d0(void)

{
  return 0;
}




/* Library Function - Single Match
    protected: void __thiscall Gdiplus::Image::SetNativeImage(class Gdiplus::GpImage *)
   
   Library: Visual Studio 2010 Debug */

void __thiscall Gdiplus::Image::SetNativeImage(Image *this,GpImage *param_1)

{
  *(GpImage **)(this + 4) = param_1;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void * __thiscall Concurrency::details::_Chore::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall std::error_category::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  FUN_004054b0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




int __fastcall FUN_00405530(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)Bx(param_1);
  piVar2 = (int *)FUN_00403610(param_1);
  return *piVar1 - *piVar2;
}




bool __fastcall FUN_00405560(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00403610(param_1);
  piVar2 = (int *)Bx(param_1);
  return *piVar1 == *piVar2;
}




void __thiscall FUN_004055a0(void *this,uint param_1)

{
  undefined1 local_c [4];
  void *local_8;
  
  local_8 = this;
  FUN_00405600(local_c,this);
  FUN_00405620(local_8,param_1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CFrameWnd::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CFrameWnd::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2003 Debug */

void __thiscall OnCreate(void *this,void *param_1,int param_2)

{
                    /* WARNING: Load size is inaccurate */
  FUN_004037a0(*this,param_1,param_2);
  return;
}




undefined4 * __thiscall FUN_00405600(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return (undefined4 *)this;
}




void __thiscall FUN_00405620(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  allocator<char> *this_00;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_00405530(this);
  uVar3 = FUN_00404180(this);
  if (param_1 <= uVar3) {
    if (uVar2 < param_1) {
      puVar5 = (undefined4 *)Bx(this);
      uVar6 = OnCreate(&stack0x00000008,(void *)*puVar5,param_1 - uVar2);
      puVar5 = (undefined4 *)Bx(this);
      *puVar5 = uVar6;
      FUN_004011b0();
    }
    else if (param_1 != uVar2) {
      piVar7 = (int *)FUN_00403610(this);
      iVar1 = *piVar7;
      Bx(this);
      FUN_004011b0();
      Bx(this);
      FUN_00404150(this);
      piVar7 = (int *)Bx(this);
      *piVar7 = iVar1 + param_1;
    }
    ExceptionList = local_10;
    return;
  }
  uVar3 = FUN_004041b0(this);
  if (uVar3 < param_1) {
    FUN_00404140();
  }
  uVar3 = FUN_004058e0(this,param_1);
  this_00 = (allocator<char> *)FUN_004037d0(this);
  pcVar4 = std::allocator<char>::allocate(this_00,uVar3);
  local_8 = 0;
  OnCreate(&stack0x00000008,pcVar4 + uVar2,param_1 - uVar2);
  puVar5 = (undefined4 *)Bx(this);
  uVar6 = *puVar5;
  puVar5 = (undefined4 *)FUN_00403610(this);
  FUN_00405930(this,*puVar5,uVar6,pcVar4);
  FUN_00405748();
  return;
}




void Catch_All_0040570e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00404150(*(undefined4 *)(unaff_EBP + -0x14));
  uVar1 = FUN_004037d0(*(undefined4 *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x48) = uVar1;
  std::allocator<char>::deallocate
            (*(allocator<char> **)(unaff_EBP + -0x48),*(char **)(unaff_EBP + -0x1c),
             *(uint *)(unaff_EBP + -0x24));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00405748(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00405830(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + 8),
               *(int *)(unaff_EBP + -0x24));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




void __thiscall FUN_00405830(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  allocator<char> *this_00;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_00403ad0(this);
  piVar1 = (int *)FUN_00403610(this);
  if (*piVar1 != 0) {
    Bx(this);
    FUN_00403610(this);
    FUN_00404150(this);
    this_00 = (allocator<char> *)FUN_004037d0(this);
    uVar2 = FUN_00404180(this);
    puVar3 = (undefined4 *)FUN_00403610(this);
    std::allocator<char>::deallocate(this_00,(char *)*puVar3,uVar2);
  }
  piVar1 = (int *)FUN_00403610(this);
  *piVar1 = param_1;
  piVar1 = (int *)Bx(this);
  *piVar1 = param_1 + param_2;
  piVar1 = (int *)FUN_00404120(this);
  *piVar1 = param_1 + param_3;
  return;
}




uint __thiscall FUN_004058e0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00404180(this);
  uVar2 = FUN_004041b0(this);
  uVar3 = param_1;
  if ((uVar1 <= uVar2 - (uVar1 >> 1)) && (uVar3 = (uVar1 >> 1) + uVar1, uVar3 < param_1)) {
    uVar3 = param_1;
  }
  return uVar3;
}




void __thiscall FUN_00405930(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00405960(this,param_1,param_2,param_3);
  return;
}




void __thiscall FUN_00405960(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004037d0(this);
  FUN_00405990(param_1,param_2,param_3,uVar1);
  return;
}




undefined4 __cdecl
FUN_00405990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_10 = (void *)addressof<>(param_1);
  local_18 = addressof<>(param_2);
  FUN_00405a60((int *)&local_10,&local_18);
  local_14 = (void *)addressof<>(param_3);
  local_8 = local_a;
  puVar1 = FUN_00405a70(&local_b);
  local_9 = *puVar1;
  local_7 = local_9;
  local_6 = local_9;
  local_5 = local_9;
  uVar2 = FUN_00405a80(local_10,local_18,local_14);
  FUN_00405330(&param_3,uVar2);
  return param_3;
}




int __cdecl FUN_00405a60(int *param_1,int *param_2)

{
  return *param_2 - *param_1;
}




undefined1 * __cdecl FUN_00405a70(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void __cdecl FUN_00405a80(void *param_1,int param_2,void *param_3)

{
  FUN_00405aa0(param_1,param_2,param_3);
  return;
}




int __cdecl FUN_00405aa0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)param_3 + (param_2 - (int)param_1);
}




void * __cdecl FUN_00405ae0(void *param_1,uint param_2)

{
  FUN_004063d0(param_1,param_2);
  return param_1;
}




undefined4 * __thiscall FUN_00405b10(void *this,undefined4 param_1)

{
  FUN_00405480((undefined4 *)this);
  *(undefined ***)this = FileNodeMediaSource2::vftable;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_004031b0((undefined4 *)((int)this + 0x18));
  *(undefined1 *)((int)this + 0x24) = 0;
  FUN_00405ba0((undefined4 *)((int)this + 0x28));
  return (undefined4 *)this;
}




undefined4 * __thiscall FUN_00405b70(void *this,uint param_1)

{
  FUN_00405bd0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_00405ba0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




void __fastcall FUN_00405bd0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = FileNodeMediaSource2::vftable;
  FUN_00405d00((int)param_1);
  FUN_00405e80(param_1 + 10);
  FUN_00402e30(param_1 + 6);
  FUN_004054b0(param_1);
  ExceptionList = local_10;
  return;
}




undefined4 __thiscall FUN_00405c40(void *this,void *param_1,uint param_2)

{
  undefined4 uVar1;
  void *_Dst;
  void *_Src;
  
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*this + 8))();
  if ((param_1 == (void *)0x0) || (param_2 < 0x25a)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x21c);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)param_1 + 0x220);
    FUN_004055a0((void *)((int)this + 0x18),param_2);
    _Src = param_1;
    _Dst = (void *)FUN_00402e10((void *)((int)this + 0x18),0);
    memcpy(_Dst,_Src,param_2);
    uVar1 = FUN_00405ec0((void *)((int)this + 0x28),*(undefined4 *)((int)param_1 + 0xc),
                         *(undefined4 *)((int)param_1 + 0x10),*(uint *)((int)param_1 + 0x239));
  }
  return uVar1;
}




void __fastcall FUN_00405d00(int param_1)

{
  FUN_00406170((int *)(param_1 + 0x28));
  return;
}




undefined8 __fastcall FUN_00405d20(int param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void __thiscall FUN_00405d40(void *this,void *param_1,int param_2)

{
  FUN_004061e0((void *)((int)this + 0x28),param_1,param_2);
  return;
}




undefined8 __thiscall
FUN_00405d70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004062d0((void *)((int)this + 0x28),param_1,param_2,param_3);
  return uVar1;
}




void __fastcall FUN_00405da0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}




int __thiscall FUN_00405de0(void *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00405560((int)this + 0x18);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00402e10((void *)((int)this + 0x18),0);
    *param_1 = iVar2;
    iVar2 = FUN_00405530((int)this + 0x18);
  }
  return iVar2;
}




undefined4 __thiscall FUN_00405e30(void *this,int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_00405530((int)this + 0x18);
  if (uVar1 < 0x25a) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_00402e10((void *)((int)this + 0x18),0);
    *param_1 = iVar3 + 0x118;
    uVar2 = 200;
  }
  return uVar2;
}




void __fastcall FUN_00405e80(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406170(param_1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_00405ec0(void *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_c4 [10];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_74;
  undefined4 *local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  void *local_54;
  void *local_50;
  undefined4 *local_4c;
  int *local_48;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_44 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413738;
  local_10 = ExceptionList;
  uVar1 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (int *)this;
  local_14 = uVar1;
  FUN_00406170((int *)this);
  if (local_48[1] == 0) {
    iVar2 = zmq_ctx_new(uVar1);
    local_48[1] = iVar2;
    if (local_48[1] == 0) goto LAB_004060de;
  }
  if (*local_48 == 0) {
    iVar2 = zmq_socket(local_48[1],3);
    *local_48 = iVar2;
    if (*local_48 == 0) goto LAB_004060de;
  }
  local_54 = FUN_00405ae0(local_44,param_3);
  local_8 = 0;
  local_50 = local_54;
  local_58 = FUN_00406490(local_2c,(_String_val<struct_std::_Simple_types<char>_> *)
                                   "tcp://localhost:",local_54);
  local_5c = FUN_004033e0(local_58);
  local_60 = *local_48;
  zmq_connect(local_60,local_5c);
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            (local_2c);
  local_8 = 0xffffffff;
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            (local_44);
  local_64 = 1000;
  zmq_setsockopt(*local_48,0x1b,&local_64,4);
  FUN_00406100(&local_9c);
  local_98 = 0;
  local_94 = param_1;
  local_90 = param_2;
  zmq_send(*local_48,&local_9c,0x28,0);
  FUN_00406100(local_c4);
  local_68 = (undefined4 *)FUN_00412774(0x28);
  *local_68 = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_4c = local_68;
  local_6c = zmq_recv(*local_48,local_68,0x28,0);
  if (local_6c == -1) {
    if (local_4c != (undefined4 *)0x0) {
      local_70 = local_4c;
      free(local_4c);
      local_4c = (undefined4 *)0x0;
    }
  }
  else {
    puVar3 = local_4c;
    puVar4 = local_c4;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (local_4c != (undefined4 *)0x0) {
      local_74 = local_4c;
      free(local_4c);
      local_4c = (undefined4 *)0x0;
    }
  }
LAB_004060de:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 * __fastcall FUN_00406100(undefined4 *param_1)

{
  *param_1 = 0x29a;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x378;
  return param_1;
}




void __fastcall FUN_00406170(int *param_1)

{
  if (*param_1 != 0) {
    zmq_disconnect(*param_1,"tcp://localhost:5555");
    zmq_close(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    zmq_ctx_destroy(param_1[1]);
    param_1[1] = 0;
  }
  return;
}




size_t __thiscall FUN_004061e0(void *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_64;
  undefined4 local_60;
  int local_48;
  undefined4 local_3c [8];
  size_t local_1c;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    local_1c = 0;
  }
  else {
    local_c = (undefined4 *)this;
    FUN_00406100(&local_64);
    local_60 = 1;
    local_48 = param_2;
    zmq_send(*local_c,&local_64,0x28,0);
    FUN_00406100(local_3c);
    local_10 = (undefined4 *)FUN_00412774(param_2 + 0x28);
    local_8 = local_10;
    memset(local_10,0,param_2 + 0x28);
    zmq_recv(*local_c,local_8,param_2 + 0x28,0);
    puVar2 = local_8;
    puVar3 = local_3c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if (-1 < (int)local_1c) {
      memcpy(param_1,local_8 + 10,local_1c);
    }
    if (local_8 != (undefined4 *)0x0) {
      local_14 = local_8;
      free(local_8);
    }
  }
  return local_1c;
}




undefined8 __thiscall
FUN_004062d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_68 [10];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
                    /* WARNING: Load size is inaccurate */
  if (*this != 0) {
    local_10 = (undefined4 *)this;
    FUN_00406100(&local_40);
    local_3c = 2;
    local_30 = param_1;
    local_2c = param_2;
    local_28 = param_3;
    zmq_send(*local_10,&local_40,0x28,0);
    FUN_00406100(local_68);
    local_14 = (undefined4 *)FUN_00412774(0x28);
    *local_14 = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    local_14[4] = 0;
    local_14[5] = 0;
    local_14[6] = 0;
    local_14[7] = 0;
    local_14[8] = 0;
    local_14[9] = 0;
    local_c = local_14;
    zmq_recv(*local_10,local_14,0x28,0);
    puVar2 = local_c;
    puVar3 = local_68;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if (local_c != (undefined4 *)0x0) {
      local_18 = local_c;
      free(local_c);
    }
  }
  return 0;
}




void __cdecl FUN_004063d0(void *param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 local_25;
  char *local_24;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)FUN_00406480((int)local_20);
  local_24 = pcVar1;
  if ((int)param_2 < 0) {
    local_24 = FUN_00406690(pcVar1,-param_2);
    local_24 = local_24 + -1;
    *local_24 = '-';
  }
  else {
    local_24 = FUN_00406690(pcVar1,param_2);
  }
  uVar2 = Bxty(&local_25);
  FUN_00406750(param_1,local_24,pcVar1,uVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




int __cdecl FUN_00406480(int param_1)

{
  return param_1 + 0x15;
}




void * __cdecl
FUN_00406490(void *param_1,_String_val<struct_std::_Simple_types<char>_> *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004064d0(param_3,0,param_2);
  uVar1 = addressof<>(uVar1);
  FUN_004034a0(param_1,uVar1);
  return param_1;
}




void __thiscall
FUN_004064d0(void *this,uint param_1,_String_val<struct_std::_Simple_types<char>_> *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = length((char *)param_2);
  uVar2 = addressof<>(iVar1);
  FUN_00406510(this,param_1,param_2,uVar2);
  return;
}




void * __thiscall
FUN_00406510(void *this,uint param_1,_String_val<struct_std::_Simple_types<char>_> *param_2,
            uint param_3)

{
  int iVar1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  _String_val<struct_std::_Simple_types<char>_> *p_Var3;
  uint local_10;
  
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(this);
  FUN_00404430(p_Var2,param_1);
  iVar1 = *(int *)(p_Var2 + 0x10);
  if ((uint)(*(int *)(p_Var2 + 0x14) - iVar1) < param_3) {
    this = FUN_00406800(this,param_3,0,param_1,(char *)param_2,param_3);
  }
  else {
    *(uint *)(p_Var2 + 0x10) = iVar1 + param_3;
    p_Var2 = Myptr(p_Var2);
    p_Var3 = p_Var2 + param_1;
    if ((p_Var3 < param_2 + param_3) && (param_2 <= p_Var2 + iVar1)) {
      if (param_2 < p_Var3) {
        local_10 = (int)p_Var3 - (int)param_2;
      }
      else {
        local_10 = 0;
      }
    }
    else {
      local_10 = param_3;
    }
    std::char_traits<char>::move((char *)(p_Var3 + param_3),(char *)p_Var3,(iVar1 - param_1) + 1);
    std::_Narrow_char_traits<char,int>::copy((char *)p_Var3,(char *)param_2,local_10);
    std::_Narrow_char_traits<char,int>::copy
              ((char *)(p_Var3 + local_10),(char *)(param_2 + local_10 + param_3),param_3 - local_10
              );
  }
  return this;
}




void FUN_00406630(char *param_1,char *param_2,int param_3,uint param_4,char *param_5,uint param_6)

{
  std::_Narrow_char_traits<char,int>::copy(param_1,param_2,param_4);
  std::_Narrow_char_traits<char,int>::copy(param_1 + param_4,param_5,param_6);
  std::_Narrow_char_traits<char,int>::copy
            (param_1 + param_6 + param_4,param_2 + param_4,(param_3 - param_4) + 1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x004066a0) */
/* WARNING: Removing unreachable block (ram,0x004066d0) */
/* WARNING: Removing unreachable block (ram,0x004066c7) */
/* WARNING: Removing unreachable block (ram,0x00406704) */
/* WARNING: Removing unreachable block (ram,0x0040669a) */

char * __cdecl FUN_00406690(char *param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    param_1 = param_1 + -1;
    *param_1 = (char)((ulonglong)local_8 % 10) + '0';
    local_8 = local_8 / 10;
  } while (local_8 != 0);
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
FUN_00406750(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413768;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004047a0(this,param_3);
  local_8 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this);
  destroy<>();
  pcVar1 = (char *)addressof<>(param_2);
  pcVar2 = (char *)addressof<>(param_1);
  FUN_00406940(this,pcVar2,pcVar1);
  ExceptionList = local_10;
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}




void * __thiscall
FUN_00406800(void *this,uint param_1,undefined4 param_2,uint param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  allocator<char> *this_00;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char **ppcVar9;
  char *local_14;
  int local_10;
  void *local_c;
  char *local_8;
  
  local_c = this;
  local_8 = (char *)FUN_004037d0(this);
  local_10 = *(int *)(local_8 + 0x10);
  uVar2 = FID_conflict_max_size(local_c);
  if (uVar2 - local_10 < param_1) {
    FUN_00404d50();
  }
  uVar7 = local_10 + param_1;
  uVar2 = *(uint *)(local_8 + 0x14);
  uVar3 = FID_conflict__Calculate_growth(local_c,uVar7);
  this_00 = (allocator<char> *)FUN_004037d0(local_c);
  local_14 = std::allocator<char>::allocate(this_00,uVar3 + 1);
  FUN_00401200();
  *(uint *)(local_8 + 0x10) = uVar7;
  *(uint *)(local_8 + 0x14) = uVar3;
  pcVar4 = (char *)addressof<>(local_14);
  if (uVar2 < 0x10) {
    FUN_00406630(pcVar4,local_8,local_10,param_3,param_4,param_5);
    ppcVar9 = &local_14;
    uVar6 = addressof<>(local_8);
    construct<>(this_00,uVar6,ppcVar9);
  }
  else {
    pcVar1 = *(char **)local_8;
    iVar8 = local_10;
    pcVar5 = (char *)addressof<>(pcVar1);
    FUN_00406630(pcVar4,pcVar5,iVar8,param_3,param_4,param_5);
    std::allocator<char>::deallocate(this_00,pcVar1,uVar2 + 1);
    *(char **)local_8 = local_14;
  }
  return local_c;
}




void __thiscall FUN_00406940(void *this,char *param_1,char *param_2)

{
  uint uVar1;
  
  if (param_1 != param_2) {
    uVar1 = addressof<>((int)param_2 - (int)param_1);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
              ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this,
               param_1,uVar1);
  }
  return;
}




int __cdecl
FUN_00406980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int local_c;
  
  puVar1 = (undefined4 *)FUN_00401060();
  local_c = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}




int __cdecl FUN_004069d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00406980(param_1,param_2,param_3,0,&stack0x00000010);
  return iVar1;
}




void __cdecl FUN_00406a10(undefined4 param_1)

{
  GdipFree(param_1);
  return;
}




void __cdecl FUN_00406a20(undefined4 param_1)

{
  GdipAlloc(param_1);
  return;
}




undefined4 * __thiscall
FUN_00406a30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (undefined4 *)this;
}




undefined4 * __thiscall
FUN_00406a80(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00406ad0(0xff,param_1,param_2,param_3);
  *(undefined4 *)this = uVar1;
  return (undefined4 *)this;
}




undefined4 __fastcall FUN_00406ac0(undefined4 *param_1)

{
  return *param_1;
}




undefined4 __cdecl
FUN_00406ad0(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  return CONCAT13(param_1,CONCAT12(param_2,CONCAT11(param_3,param_4)));
}




/* Library Function - Single Match
    protected: enum Gdiplus::Status __thiscall Gdiplus::Image::SetStatus(enum Gdiplus::Status)const 
   
   Library: Visual Studio 2010 Debug */

Status __thiscall Gdiplus::Image::SetStatus(Image *this,Status param_1)

{
  if (param_1 != 0) {
    *(Status *)(this + 8) = param_1;
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void * __thiscall std::collate<char>::`scalar deleting destructor'(unsigned
   int)
    protected: virtual void * __thiscall std::collate<unsigned short>::`scalar deleting
   destructor'(unsigned int)
    protected: virtual void * __thiscall std::collate<wchar_t>::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  FUN_00407200((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUN_00406a10(this);
    }
    else {
      destroy<>();
    }
  }
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_00406b80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = GdipCreateImageAttributes(param_1);
  param_1[1] = uVar1;
  return param_1;
}




void __fastcall FUN_00406bb0(undefined4 *param_1)

{
  GdipDisposeImageAttributes(*param_1);
  return;
}




void __thiscall FUN_00406bd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipSetImageAttributesColorMatrix(*this,param_3,1,param_1,0,param_2);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




/* Library Function - Single Match
    protected: enum Gdiplus::Status __thiscall Gdiplus::Graphics::SetStatus(enum
   Gdiplus::Status)const 
   
   Library: Visual Studio 2010 Debug */

Status __thiscall Gdiplus::Graphics::SetStatus(Graphics *this,Status param_1)

{
  if (param_1 != 0) {
    *(Status *)(this + 4) = param_1;
  }
  return param_1;
}




void __fastcall FUN_00406c40(undefined4 *param_1)

{
  *param_1 = Gdiplus::Brush::vftable;
  GdipDeleteBrush(param_1[1]);
  return;
}




Image * __fastcall FUN_00406c70(Image *param_1)

{
  Status SVar1;
  void *this;
  Image *local_20;
  GpImage *local_18;
  Image *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041379b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (GpImage *)0x0;
  local_14 = param_1;
  SVar1 = GdipCloneBrush(*(undefined4 *)(param_1 + 4),&local_18,
                         DAT_0041b008 ^ (uint)&stack0xfffffffc);
  Gdiplus::Image::SetStatus(local_14,SVar1);
  this = (void *)FUN_00406a20(0xc);
  local_8 = 0;
  if (this == (void *)0x0) {
    local_20 = (Image *)0x0;
  }
  else {
    local_20 = FUN_00406d60(this,local_18,*(undefined4 *)(local_14 + 8));
  }
  local_8 = 0xffffffff;
  if (local_20 == (Image *)0x0) {
    GdipDeleteBrush(local_18);
  }
  ExceptionList = local_10;
  return local_20;
}




Image * __fastcall FUN_00406d30(Image *param_1)

{
  *(undefined ***)param_1 = Gdiplus::Brush::vftable;
  Gdiplus::Image::SetStatus(param_1,6);
  return param_1;
}




Image * __thiscall FUN_00406d60(void *this,GpImage *param_1,undefined4 param_2)

{
  *(undefined ***)this = Gdiplus::Brush::vftable;
  *(undefined4 *)((int)this + 8) = param_2;
  Gdiplus::Image::SetNativeImage((Image *)this,param_1);
  return (Image *)this;
}




/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void * __thiscall std::time_put<char,class
   std::ostreambuf_iterator<char,struct std::char_traits<char> > >::`scalar deleting
   destructor'(unsigned int)
    protected: virtual void * __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::`scalar
   deleting destructor'(unsigned int)
    protected: virtual void * __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  FUN_00406c40((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUN_00406a10(this);
    }
    else {
      destroy<>();
    }
  }
  return (undefined4 *)this;
}




Image * __thiscall FUN_00406de0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  GpImage **ppGVar3;
  GpImage *local_18;
  Image *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004137c8;
  local_10 = ExceptionList;
  uVar1 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (Image *)this;
  FUN_00406d30((Image *)this);
  local_8 = 0;
  *(undefined ***)local_14 = Gdiplus::SolidBrush::vftable;
  local_18 = (GpImage *)0x0;
  ppGVar3 = &local_18;
  uVar2 = FUN_00406ac0(param_1);
  uVar2 = GdipCreateSolidFill(uVar2,ppGVar3,uVar1);
  *(undefined4 *)(local_14 + 8) = uVar2;
  Gdiplus::Image::SetNativeImage(local_14,local_18);
  ExceptionList = local_10;
  return local_14;
}




/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void * __thiscall std::time_put<char,class
   std::ostreambuf_iterator<char,struct std::char_traits<char> > >::`scalar deleting
   destructor'(unsigned int)
    protected: virtual void * __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::`scalar
   deleting destructor'(unsigned int)
    protected: virtual void * __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  FUN_00406ec0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUN_00406a10(this);
    }
    else {
      destroy<>();
    }
  }
  return (undefined4 *)this;
}




void __fastcall FUN_00406ec0(undefined4 *param_1)

{
  FUN_00406c40(param_1);
  return;
}




undefined4 * __thiscall FUN_00406ee0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = GdipCreatePath(param_1,this);
  *(undefined4 *)((int)this + 4) = uVar1;
  return (undefined4 *)this;
}




void __fastcall FUN_00406f10(undefined4 *param_1)

{
  GdipDeletePath(*param_1);
  return;
}




void __thiscall
FUN_00406f30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipAddPathLineI(*this,param_1,param_2,param_3,param_4);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall
FUN_00406f70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipAddPathArcI(*this,param_1,param_2,param_3,param_4,param_5,param_6);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void * FUN_00406fc0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
  void *local_8;
  
  local_c = 0;
  uVar1 = GdipCreateFromHDC(param_1,&local_c);
  *(undefined4 *)((int)local_8 + 4) = uVar1;
  FUN_00407180(local_8,local_c);
  return local_8;
}




void __fastcall FUN_00407000(undefined4 *param_1)

{
  GdipDeleteGraphics(*param_1);
  return;
}




void __thiscall FUN_00407020(void *this,undefined4 param_1)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipSetSmoothingMode(*this,param_1);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall FUN_00407050(void *this,int param_1,undefined4 *param_2)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipFillPath(*this,*(undefined4 *)(param_1 + 4),*param_2);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall
FUN_00407080(void *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
            undefined4 param_9,undefined4 param_10)

{
  Status SVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_8 == (undefined4 *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_8;
  }
  if (param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 4);
  }
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipDrawImageRectRect
                    (*this,local_c,*param_2,param_2[1],param_2[2],param_2[3],param_3,param_4,param_5
                     ,param_6,param_7,local_8,param_9,param_10);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall FUN_00407180(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  return;
}




undefined4 * __thiscall FUN_004071a0(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined ***)this = Gdiplus::Image::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 == 0) {
    uVar1 = GdipLoadImageFromFile(param_1,(int)this + 4);
    *(undefined4 *)((int)this + 8) = uVar1;
  }
  else {
    uVar1 = GdipLoadImageFromFileICM(param_1,(int)this + 4);
    *(undefined4 *)((int)this + 8) = uVar1;
  }
  return (undefined4 *)this;
}




void __fastcall FUN_00407200(undefined4 *param_1)

{
  *param_1 = Gdiplus::Image::vftable;
  GdipDisposeImage(param_1[1]);
  return;
}




undefined4 __fastcall FUN_00407230(Image *param_1)

{
  Status SVar1;
  Image *this;
  undefined4 local_20;
  GpImage *local_18;
  Image *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004137fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (GpImage *)0x0;
  local_14 = param_1;
  SVar1 = GdipCloneImage(*(undefined4 *)(param_1 + 4),&local_18,
                         DAT_0041b008 ^ (uint)&stack0xfffffffc);
  Gdiplus::Image::SetStatus(local_14,SVar1);
  this = (Image *)FUN_00406a20(0x10);
  local_8 = 0;
  if (this == (Image *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = Gdiplus::Image::Image(this,local_18,*(Status *)(local_14 + 8));
  }
  ExceptionList = local_10;
  return local_20;
}




undefined4 __fastcall FUN_004072e0(Image *param_1)

{
  Status SVar1;
  undefined4 local_c;
  Image *local_8;
  
  local_c = 0;
  local_8 = param_1;
  SVar1 = GdipGetImageWidth(*(undefined4 *)(param_1 + 4),&local_c);
  Gdiplus::Image::SetStatus(local_8,SVar1);
  return local_c;
}




undefined4 __fastcall FUN_00407320(Image *param_1)

{
  Status SVar1;
  undefined4 local_c;
  Image *local_8;
  
  local_c = 0;
  local_8 = param_1;
  SVar1 = GdipGetImageHeight(*(undefined4 *)(param_1 + 4),&local_c);
  Gdiplus::Image::SetStatus(local_8,SVar1);
  return local_c;
}




/* Library Function - Single Match
    protected: __thiscall Gdiplus::Image::Image(class Gdiplus::GpImage *,enum Gdiplus::Status)
   
   Library: Visual Studio 2010 Debug */

Image * __thiscall Gdiplus::Image::Image(Image *this,GpImage *param_1,Status param_2)

{
  *(undefined ***)this = vftable;
  SetNativeImage(this,param_1);
  *(Status *)(this + 8) = param_2;
  return this;
}




void __cdecl
FUN_00407390(void *param_1,Image *param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  undefined4 local_b4 [4];
  double local_a4;
  double local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  float local_88;
  float local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041382b;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 != (void *)0x0) && (param_2 != (Image *)0x0)) {
    local_78 = 0x3f800000;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0x3f800000;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0x3f800000;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = param_7;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x3f800000;
    FUN_00406b80(local_94);
    local_8 = 0;
    FUN_00406bd0(local_94,&local_78,0,1);
    FUN_00406a30(local_b4,(float)param_3,(float)param_4,(float)(param_5 - param_3),
                 (float)(param_6 - param_4));
    local_7c = FUN_00407320(param_2);
    local_9c = (double)local_7c + *(double *)(&DAT_00417a80 + (local_7c >> 0x1f) * -8);
    local_84 = (float)local_9c;
    local_80 = FUN_004072e0(param_2);
    local_a4 = (double)local_80 + *(double *)(&DAT_00417a80 + (local_80 >> 0x1f) * -8);
    local_88 = (float)local_a4;
    local_8c = FUN_00407080(param_1,(int)param_2,local_b4,0,0,local_88,local_84,2,local_94,0,0);
    local_8 = 0xffffffff;
    FUN_00406bb0(local_94);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00407600(void)

{
  void *this;
  undefined4 *local_201c;
  undefined1 local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041386e;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0041b608 == (undefined4 *)0x0) {
    memset(local_2014,0,0x2000);
    FUN_004122f0();
    FUN_004069d0(local_2014,0x1000,L"%s/gray.png");
    this = (void *)FUN_00406a20(0x10);
    local_8 = 0;
    if (this == (void *)0x0) {
      local_201c = (undefined4 *)0x0;
    }
    else {
      local_201c = FUN_004071a0(this,local_2014,0);
    }
    DAT_0041b608 = local_201c;
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00407700(void)

{
  void *pvVar1;
  undefined4 *local_202c;
  undefined4 *local_2024;
  undefined4 *local_201c;
  undefined1 local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004138ca;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_0041b620 == (undefined4 *)0x0) && (DAT_0041b624 == (undefined4 *)0x0)) {
    memset(local_2014,0,0x2000);
    FUN_004122f0();
    FUN_004069d0(local_2014,0x1000,L"%s/Oval.png");
    pvVar1 = (void *)FUN_00406a20(0x10);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_201c = (undefined4 *)0x0;
    }
    else {
      local_201c = FUN_004071a0(pvVar1,local_2014,0);
    }
    local_8 = 0xffffffff;
    DAT_0041b620 = local_201c;
    FUN_004122f0();
    FUN_004069d0(local_2014,0x1000,L"%s/audioOval.png");
    pvVar1 = (void *)FUN_00406a20(0x10);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_2024 = (undefined4 *)0x0;
    }
    else {
      local_2024 = FUN_004071a0(pvVar1,local_2014,0);
    }
    local_8 = 0xffffffff;
    DAT_0041b624 = local_2024;
    FUN_004122f0();
    FUN_004069d0(local_2014,0x1000,L"%s/playPosition.png");
    pvVar1 = (void *)FUN_00406a20(0x10);
    local_8 = 2;
    if (pvVar1 == (void *)0x0) {
      local_202c = (undefined4 *)0x0;
    }
    else {
      local_202c = FUN_004071a0(pvVar1,local_2014,0);
    }
    DAT_0041b628 = local_202c;
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_00407950(uint param_1)

{
  void *this;
  undefined4 *local_2020;
  uint local_2018;
  undefined1 local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0041390e;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((((-1 < (int)param_1) && (param_1 < 5)) && (DAT_0041b60c == 0)) && (DAT_0041b610 == 0)) {
    memset(local_2014,0,0x2000);
    for (local_2018 = 0; local_2018 < 5; local_2018 = local_2018 + 1) {
      FUN_004122f0();
      FUN_004069d0(local_2014,0x1000,L"%s/%s");
      this = (void *)FUN_00406a20(0x10);
      local_8 = 0;
      if (this == (void *)0x0) {
        local_2020 = (undefined4 *)0x0;
      }
      else {
        local_2020 = FUN_004071a0(this,local_2014,0);
      }
      local_8 = 0xffffffff;
      (&DAT_0041b60c)[local_2018] = (int)local_2020;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __cdecl FUN_00407ae0(HDC param_1,RECT *param_2,COLORREF param_3)

{
  HBRUSH hbr;
  
  hbr = CreateSolidBrush(param_3);
  FillRect(param_1,param_2,hbr);
  DeleteObject(hbr);
  return;
}




void __cdecl FUN_00407b20(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 local_30 [3];
  undefined4 local_24 [2];
  undefined4 local_1c [2];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413958;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00406ee0(local_24,0);
  local_8 = 0;
  FUN_00407c00(local_24,param_2,param_4);
  FUN_00406fc0(param_1);
  local_8._0_1_ = 1;
  FUN_00407020(local_1c,4);
  puVar1 = FUN_00406a80(local_14,(char)param_3,(char)((uint)param_3 >> 8),
                        (char)((uint)param_3 >> 0x10));
  FUN_00406de0(local_30,puVar1);
  local_8._0_1_ = 2;
  FUN_00407050(local_1c,(int)local_30,local_24);
  local_8._0_1_ = 1;
  FUN_00406ec0(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00407000(local_1c);
  local_8 = 0xffffffff;
  FUN_00406f10(local_24);
  ExceptionList = local_10;
  return;
}




void __cdecl FUN_00407c00(void *param_1,int *param_2,int param_3)

{
  FUN_00406f70(param_1,*param_2,param_2[1],param_3 << 1,param_3 << 1,0x43340000,0x42b40000);
  FUN_00406f30(param_1,*param_2 + param_3,param_2[1],param_2[2] - param_3,param_2[1]);
  FUN_00406f70(param_1,param_2[2] + param_3 * -2,param_2[1],param_3 << 1,param_3 << 1,0x43870000,
               0x42b40000);
  FUN_00406f30(param_1,param_2[2],param_2[1] + param_3,param_2[2],param_2[3] - param_3);
  FUN_00406f70(param_1,param_2[2] + param_3 * -2,param_2[3] + param_3 * -2,param_3 << 1,param_3 << 1
               ,0,0x42b40000);
  FUN_00406f30(param_1,param_2[2] - param_3,param_2[3],*param_2 + param_3,param_2[3]);
  FUN_00406f70(param_1,*param_2,param_2[3] + param_3 * -2,param_3 << 1,param_3 << 1,0x42b40000,
               0x42b40000);
  FUN_00406f30(param_1,*param_2,param_2[1] + param_3,*param_2,param_2[3] - param_3);
  return;
}




void __cdecl FUN_00407dc0(void *param_1,Image *param_2,int *param_3,char param_4)

{
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = FUN_004072e0(param_2);
  local_c = FUN_00407320(param_2);
  if (0 < local_10) {
    local_1c = local_c;
    if (param_4 != '\0') {
      local_1c = local_c + 3;
    }
    local_18 = local_1c;
    FUN_00406a30(local_30,(float)*param_3,(float)param_3[1],0x41000000,(float)local_1c);
    FUN_00407080(param_1,(int)param_2,local_30,0,0,0x41000000,(float)local_c,2,(undefined4 *)0x0,0,0
                );
    for (local_8 = *param_3 + 8; (0x10 < param_3[2] - *param_3 && (local_8 < param_3[2] + -8));
        local_8 = local_8 + local_14) {
      if (local_10 + -0x20 < (param_3[2] + -8) - local_8) {
        local_20 = local_10 + -0x20;
      }
      else {
        local_20 = (param_3[2] + -8) - local_8;
      }
      local_14 = local_20;
      FUN_00406a30(local_40,(float)local_8,(float)param_3[1],(float)local_20,(float)local_18);
      FUN_00407080(param_1,(int)param_2,local_40,0x41000000,0,(float)local_14,(float)local_c,2,
                   (undefined4 *)0x0,0,0);
    }
    if (0x10 < param_3[2] - *param_3) {
      FUN_00406a30(local_50,(float)local_8,(float)param_3[1],0x41000000,(float)local_18);
      FUN_00407080(param_1,(int)param_2,local_50,(float)(local_10 + -8),0,0x41000000,(float)local_c,
                   2,(undefined4 *)0x0,0,0);
    }
  }
  return;
}




int __cdecl FUN_00408020(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}




int __cdecl
FUN_00408030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int local_c;
  
  puVar1 = (undefined4 *)FUN_00401060();
  local_c = __stdio_common_vsprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}




int __cdecl FUN_00408080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00408030(param_1,param_2,param_3,0,&stack0x00000010);
  return iVar1;
}




undefined4 * __fastcall FUN_004080c0(undefined4 *param_1)

{
  *param_1 = UIBaseItem::vftable;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




void __fastcall FUN_00408110(undefined4 *param_1)

{
  *param_1 = UIBaseItem::vftable;
  return;
}




void __thiscall
FUN_00408130(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  return;
}




void __thiscall FUN_00408170(void *this,char param_1)

{
  *(bool *)((int)this + 0x14) = param_1 == '\0';
  return;
}




void __thiscall FUN_004081a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}




bool __thiscall FUN_004081c0(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  BOOL BVar1;
  bool bVar2;
  
  if (*(char *)((int)this + 0x14) == '\0') {
    pt.y = param_2;
    pt.x = param_1;
    BVar1 = PtInRect((RECT *)((int)this + 4),pt);
    bVar2 = BVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}




undefined4 * __thiscall FUN_00408210(void *this,uint param_1)

{
  FUN_00408110((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void __thiscall
FUN_00408240(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  Status SVar1;
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(param_1 + 4);
  }
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipDrawImageRectI(*this,local_8,param_2,param_3,param_4,param_5);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




undefined4 * __thiscall FUN_004082a0(void *this,undefined4 param_1)

{
  HDC hdc;
  int iVar1;
  
  FUN_004080c0((undefined4 *)this);
  *(undefined ***)this = PlayProgressBar::vftable;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined8 *)((int)this + 0x28) = 0;
  *(undefined8 *)((int)this + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x44));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x5c));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x8d) = 1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(bool *)((int)this + 0x8e) = 0x78 < iVar1;
  return (undefined4 *)this;
}




undefined4 * __thiscall FUN_00408390(void *this,uint param_1)

{
  FUN_004083d0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void __fastcall FUN_004083d0(undefined4 *param_1)

{
  *param_1 = PlayProgressBar::vftable;
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x17));
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x11));
  FUN_00408110(param_1);
  return;
}




void __thiscall
FUN_00408410(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_00408130(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void __thiscall
FUN_00408450(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 local_c;
  
  SetRect((LPRECT)((int)this + 4),0x14,param_4 + -0x34,param_3 + -0x14,param_4);
  if (*(char *)((int)this + 0x8e) == '\0') {
    local_c = 0;
  }
  else {
    local_c = 0x20;
  }
  *(int *)((int)this + 0x84) = *(int *)((int)this + 4) + 0xa4 + local_c;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0xc) + -0x3c;
  return;
}




void __thiscall FUN_004084d0(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)((int)this + 0x84);
  local_18.top = *(LONG *)((int)this + 8);
  local_18.right = *(LONG *)((int)this + 0x88);
  local_18.bottom = *(LONG *)((int)this + 0x10);
  if ((*(char *)((int)this + 0x14) == '\0') &&
     (pt.y = param_2, pt.x = param_1, BVar1 = PtInRect((RECT *)((int)this + 0x74),pt), BVar1 == 0))
  {
    pt_00.y = param_2;
    pt_00.x = param_1;
    PtInRect(&local_18,pt_00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_00408570(void *this,HDC param_1)

{
  Image *pIVar1;
  int iVar2;
  void *pvVar3;
  LPCSTR lpchText;
  int iVar4;
  undefined4 local_1d4 [2];
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  Image *local_1bc;
  int local_1b8;
  int local_1b4;
  void *local_1b0;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_1ac [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_194 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_17c [24];
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  undefined4 local_14c;
  int local_148;
  tagRECT local_144;
  tagRECT local_134;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  CHAR local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004139ac;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1b0 = this;
  if ((0.0 < *(double *)((int)this + 0x30)) && (param_1 != (HDC)0x0)) {
    FUN_00406fc0(param_1);
    local_8 = 0;
    if (*(char *)((int)local_1b0 + 0x8d) != '\0') {
      pIVar1 = (Image *)FUN_00407600();
      local_124 = *(int *)((int)local_1b0 + 4);
      local_11c = *(int *)((int)local_1b0 + 0xc);
      local_120 = *(int *)((int)local_1b0 + 8) + -8;
      local_118 = *(int *)((int)local_1b0 + 0x10) + -0x14;
      FUN_00407390(local_1d4,pIVar1,local_124,local_120,local_11c,local_118,0x3dcccccd);
    }
    SetTextColor(param_1,0);
    local_1bc = (Image *)FUN_00407700();
    iVar2 = FUN_00407320(local_1bc);
    iVar2 = *(int *)((int)local_1b0 + 0x10) - iVar2;
    local_1b4 = iVar2 + 0x10;
    local_134.left = 0x1a;
    local_134.top = iVar2 + 10;
    local_134.right = *(int *)((int)local_1b0 + 0x84) + 4;
    local_134.bottom = iVar2 + 0x1a;
    if (*(char *)((int)local_1b0 + 0x8e) != '\0') {
      local_134.top = iVar2 + 3;
      local_134.bottom = iVar2 + 0x23;
    }
    pvVar3 = (void *)std::
                     basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                     basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                               (local_1ac," / ");
    local_8._0_1_ = 1;
    pvVar3 = FUN_004093e0(local_194,(int)local_1b0 + 0x44,pvVar3);
    local_8._0_1_ = 2;
    FUN_00409420(local_17c,pvVar3,(int)local_1b0 + 0x5c);
    local_8._0_1_ = 4;
    FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
              (local_194);
    local_8 = CONCAT31(local_8._1_3_,5);
    FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
              (local_1ac);
    iVar2 = FID_conflict_size(local_17c);
    lpchText = (LPCSTR)FUN_004033e0(local_17c);
    DrawTextA(param_1,lpchText,iVar2,&local_134,5);
    local_154 = *(int *)((int)local_1b0 + 0x84);
    local_150 = local_1b4;
    local_14c = *(undefined4 *)((int)local_1b0 + 0x88);
    local_148 = local_1b4 + 4;
    pIVar1 = (Image *)FUN_00407950(1);
    FUN_00407dc0(local_1d4,pIVar1,&local_154,*(char *)((int)local_1b0 + 0x8e));
    local_1c4 = (int)((double)(*(int *)((int)local_1b0 + 0x88) - *(int *)((int)local_1b0 + 0x84)) *
                     (*(double *)((int)local_1b0 + 0x28) / *(double *)((int)local_1b0 + 0x30)));
    local_1b8 = *(int *)((int)local_1b0 + 0x84) + 8 + local_1c4;
    local_164 = *(int *)((int)local_1b0 + 0x84);
    local_160 = local_1b4;
    local_158 = local_1b4 + 4;
    local_15c = local_1b8;
    pIVar1 = (Image *)FUN_00407950(0);
    FUN_00407dc0(local_1d4,pIVar1,&local_164,*(char *)((int)local_1b0 + 0x8e));
    if (*(char *)((int)local_1b0 + 0x8c) == '\0') {
      local_1c8 = *(int *)((int)local_1b0 + 0x84) + local_1c4;
    }
    else {
      local_1c8 = *(int *)((int)local_1b0 + 0x74) + 0x24;
    }
    local_1b8 = local_1c8;
    if (*(char *)((int)local_1b0 + 0x8c) == '\0') {
      local_1cc = FUN_004072e0(local_1bc);
      iVar2 = *(int *)((int)local_1b0 + 0x10);
      iVar4 = FUN_00407320(local_1bc);
      SetRect((LPRECT)((int)local_1b0 + 0x74),local_1b8 - local_1cc / 2,
              *(int *)((int)local_1b0 + 0x10) - iVar4,local_1cc / 2 + local_1b8,iVar2);
      if (*(char *)((int)local_1b0 + 0x8e) != '\0') {
        *(int *)((int)local_1b0 + 0x74) = *(int *)((int)local_1b0 + 0x74) + -10;
        *(int *)((int)local_1b0 + 0x7c) = *(int *)((int)local_1b0 + 0x7c) + 10;
      }
    }
    FUN_00408240(local_1d4,(int)local_1bc,*(undefined4 *)((int)local_1b0 + 0x74),
                 *(undefined4 *)((int)local_1b0 + 0x78),
                 *(int *)((int)local_1b0 + 0x7c) - *(int *)((int)local_1b0 + 0x74),
                 *(int *)((int)local_1b0 + 0x80) - *(int *)((int)local_1b0 + 0x78));
    memset(local_114,0,0x100);
    local_1c0 = 0;
    if (*(char *)((int)local_1b0 + 0x8c) == '\0') {
      FUN_004033e0((int)local_1b0 + 0x44);
      local_1c0 = FUN_00408080(local_114,0x100,&DAT_004161d8);
    }
    else if (*(double *)((int)local_1b0 + 0x38) < 3600.0) {
      local_1c0 = FUN_00408080(local_114,0x100,"%02d:%02d");
    }
    else {
      local_1c0 = FUN_00408080(local_114,0x100,"%02d:%02d:%02d");
    }
    SetTextColor(param_1,0xffffff);
    local_144.left = *(LONG *)((int)local_1b0 + 0x74);
    local_144.top = *(int *)((int)local_1b0 + 0x80) + -0x10;
    local_144.right = *(LONG *)((int)local_1b0 + 0x7c);
    local_144.bottom = *(int *)((int)local_1b0 + 0x80);
    if (*(char *)((int)local_1b0 + 0x8e) != '\0') {
      local_144.top = *(int *)((int)local_1b0 + 0x80) + -0x18;
      local_144.bottom = local_144.bottom + 8;
    }
    DrawTextA(param_1,local_114,local_1c0,&local_144,5);
    local_8 = local_8 & 0xffffff00;
    FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
              (local_17c);
    local_8 = 0xffffffff;
    FUN_00407000(local_1d4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_00408ce0(void *this,undefined4 param_1,uint param_2)

{
  BOOL BVar1;
  
  BVar1 = PtInRect((RECT *)((int)this + 0x74),
                   (POINT)(CONCAT44(param_2 >> 0x10,param_2) & 0xffffffff0000ffff));
  *(bool *)((int)this + 0x8c) = BVar1 != 0;
  FUN_00408da0(this,param_2 & 0xffff);
  return;
}




undefined4 __fastcall FUN_00408d50(int param_1)

{
  if ((*(char *)(param_1 + 0x8c) != '\0') && (*(int *)(param_1 + 0x24) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return 0;
}




undefined4 __thiscall FUN_00408da0(void *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (((((float)(*(int *)((int)this + 0x88) - *(int *)((int)this + 0x84)) <= 0.0) ||
       (*(int *)((int)this + 0x24) == 0)) || (param_1 < *(int *)((int)this + 0x84))) ||
     (*(int *)((int)this + 0x88) < param_1)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)((int)this + 0x40) = param_1;
    *(int *)((int)this + 0x74) = param_1 + -0x24;
    *(int *)((int)this + 0x7c) = param_1 + 0x24;
    *(undefined1 *)((int)this + 0x8c) = 1;
    *(double *)((int)this + 0x38) =
         ((double)(param_1 - *(int *)((int)this + 0x84)) * *(double *)((int)this + 0x30)) /
         (double)(*(int *)((int)this + 0x88) - *(int *)((int)this + 0x84));
    if (*(double *)((int)this + 0x38) <= 0.009999999776482582 &&
        *(double *)((int)this + 0x38) != 0.009999999776482582) {
      *(undefined8 *)((int)this + 0x38) = 0x3f847ae140000000;
    }
    pcVar1 = *(code **)(**(int **)((int)this + 0x24) + 0x2c);
    uVar2 = (*pcVar1)(*(undefined8 *)((int)this + 0x38),pcVar1,*(undefined4 *)((int)this + 0x24));
  }
  return uVar2;
}




undefined4 __thiscall FUN_00408eb0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 & 0xffff;
  if ((param_1 & 1) != 0) {
    if ((((*(char *)((int)this + 0x8c) == '\0') || ((int)uVar1 < *(int *)((int)this + 0x84))) ||
        (*(int *)((int)this + 0x88) + -2 < (int)uVar1)) ||
       ((*(int *)((int)this + 0x84) + 8 < (int)uVar1 &&
        (iVar2 = FUN_00408020(*(int *)((int)this + 0x40) - uVar1), iVar2 < 8)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00408da0(this,uVar1);
    }
    return uVar3;
  }
  if ((*(int *)((int)this + 0x84) < (int)uVar1) && ((int)uVar1 < *(int *)((int)this + 0x88))) {
    *(uint *)((int)this + 0x74) = uVar1 - 0x18;
    *(uint *)((int)this + 0x7c) = uVar1 + 0x20;
    *(undefined1 *)((int)this + 0x8c) = 1;
    *(double *)((int)this + 0x38) =
         ((double)(int)(uVar1 - *(int *)((int)this + 0x84)) * *(double *)((int)this + 0x30)) /
         (double)(*(int *)((int)this + 0x88) - *(int *)((int)this + 0x84));
  }
  return 0;
}




undefined4 __fastcall FUN_00408fd0(int param_1)

{
  *(undefined1 *)(param_1 + 0x8c) = 0;
  return 0;
}




void __thiscall
FUN_00408ff0(void *this,int param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  uint local_110;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  memset(local_108,0,0x100);
  if (((-1 < (param_1 % 0xe10) / 0x3c) && (-1 < param_1 / 0xe10)) && (-1 < param_1 % 0x3c)) {
    if (param_1 / 0xe10 < 1) {
      local_110 = FUN_00408080(local_108,0x100,"%02d:%02d");
    }
    else {
      local_110 = FUN_00408080(local_108,0x100,"%d:%02d:%02d");
    }
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
              (param_2,local_108,local_110);
    if (7 < (int)local_110) {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 4) + 0x3c;
      *(int *)((int)this + 0x88) = *(int *)((int)this + 0xc) + -0x3c;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_00409160(void *this,double param_1,double param_2)

{
  if (param_2 < 9.999999747378752e-06) {
    param_2 = 9.999999747378752e-06;
  }
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  *(double *)((int)this + 0x28) = param_1;
  *(double *)((int)this + 0x30) = param_2;
  FUN_00408ff0(this,(int)param_1,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)this + 0x44));
  FUN_00408ff0(this,(int)param_2,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)this + 0x5c));
  return;
}




void __fastcall FUN_004091f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void __thiscall FUN_00409230(void *this,undefined4 param_1)

{
  uint uVar1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(param_1);
  uVar1 = *(uint *)(p_Var2 + 0x10);
  p_Var2 = Myptr(p_Var2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this,
             (char *)p_Var2,uVar1);
  return;
}




/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(char const * const)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413678;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>((int)this);
  local_8 = 0;
  _Tidy_init(this);
  assign(this,param_1);
  ExceptionList = local_10;
  return this;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(char const * const,unsigned int)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1,uint param_2)

{
  int iVar1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  undefined1 local_5;
  
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(this);
  iVar1 = *(int *)(p_Var2 + 0x10);
  if ((uint)(*(int *)(p_Var2 + 0x14) - iVar1) < param_2) {
    this = _Reallocate_grow_by<class_<lambda_ab246b20b9526e2ef7792587e4298a77>,char_const*,unsigned_int>
                     (this,param_2,0,param_1,param_2);
  }
  else {
    *(uint *)(p_Var2 + 0x10) = iVar1 + param_2;
    p_Var2 = Myptr(p_Var2);
    char_traits<char>::move((char *)(p_Var2 + iVar1),param_1,param_2);
    local_5 = 0;
    FUN_00402070(p_Var2 + iVar1 + param_2,&local_5);
  }
  return this;
}




/* Library Function - Single Match
    public: void __thiscall <lambda_ab246b20b9526e2ef7792587e4298a77>::operator()(char * const,char
   const * const,unsigned int,char const * const,unsigned int)const 
   
   Library: Visual Studio 2017 Release */

void __thiscall
<lambda_ab246b20b9526e2ef7792587e4298a77>::operator()
          (<lambda_ab246b20b9526e2ef7792587e4298a77> *this,char *param_1,char *param_2,uint param_3,
          char *param_4,uint param_5)

{
  undefined1 local_5;
  
  std::_Narrow_char_traits<char,int>::copy(param_1,param_2,param_3);
  std::_Narrow_char_traits<char,int>::copy(param_1 + param_3,param_4,param_5);
  local_5 = 0;
  FUN_00402070(param_1 + param_3 + param_5,&local_5);
  return;
}




void * __cdecl FUN_004093e0(void *param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00409590(param_3,0,param_2);
  uVar1 = addressof<>(uVar1);
  FUN_004034a0(param_1,uVar1);
  return param_1;
}




void * __cdecl FUN_00409420(void *param_1,void *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00409230(param_2,param_3);
  uVar1 = addressof<>(uVar1);
  FUN_004034a0(param_1,uVar1);
  return param_1;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_grow_by<class <lambda_ab246b20b9526e2ef7792587e4298a77>,char const *,unsigned
   int>(unsigned int,class <lambda_ab246b20b9526e2ef7792587e4298a77>,char const *,unsigned int)
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_grow_by<class_<lambda_ab246b20b9526e2ef7792587e4298a77>,char_const*,unsigned_int>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          uint param_1,undefined4 param_3,char *param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  allocator<char> *this_00;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  char **ppcVar9;
  char *local_14;
  uint local_10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_c;
  char *local_8;
  
  local_c = this;
  local_8 = (char *)FUN_004037d0(this);
  local_10 = *(uint *)(local_8 + 0x10);
  uVar2 = FID_conflict_max_size(local_c);
  if (uVar2 - local_10 < param_1) {
    FUN_00404d50();
  }
  param_1 = local_10 + param_1;
  uVar2 = *(uint *)(local_8 + 0x14);
  uVar3 = FID_conflict__Calculate_growth(local_c,param_1);
  this_00 = (allocator<char> *)FUN_004037d0(local_c);
  local_14 = allocator<char>::allocate(this_00,uVar3 + 1);
  FUN_00401200();
  *(uint *)(local_8 + 0x10) = param_1;
  *(uint *)(local_8 + 0x14) = uVar3;
  pcVar4 = (char *)addressof<>(local_14);
  if (uVar2 < 0x10) {
    <lambda_ab246b20b9526e2ef7792587e4298a77>::operator()
              ((<lambda_ab246b20b9526e2ef7792587e4298a77> *)&param_3,pcVar4,local_8,local_10,param_4
               ,param_5);
    ppcVar9 = &local_14;
    uVar6 = addressof<>(local_8);
    construct<>(this_00,uVar6,ppcVar9);
  }
  else {
    pcVar1 = *(char **)local_8;
    uVar3 = local_10;
    pcVar7 = param_4;
    uVar8 = param_5;
    pcVar5 = (char *)addressof<>(pcVar1);
    <lambda_ab246b20b9526e2ef7792587e4298a77>::operator()
              ((<lambda_ab246b20b9526e2ef7792587e4298a77> *)&param_3,pcVar4,pcVar5,uVar3,pcVar7,
               uVar8);
    allocator<char>::deallocate(this_00,pcVar1,uVar2 + 1);
    *(char **)local_8 = local_14;
  }
  return local_c;
}




void __thiscall FUN_00409590(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_004037d0(param_2);
  uVar1 = *(uint *)(p_Var2 + 0x10);
  p_Var2 = Myptr(p_Var2);
  FUN_00406510(this,param_1,p_Var2,uVar1);
  return;
}




undefined4 * __thiscall
FUN_004095e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004139e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004080c0((undefined4 *)this);
  local_8 = 0;
  *(undefined ***)this = UiCtrlBtn::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_3;
  FUN_00408170(this,'\0');
  ExceptionList = local_10;
  return (undefined4 *)this;
}




undefined4 * __thiscall FUN_00409670(void *this,uint param_1)

{
  FUN_004096a0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void __fastcall FUN_004096a0(undefined4 *param_1)

{
  *param_1 = UiCtrlBtn::vftable;
  if ((param_1[9] != 0) && ((undefined4 *)param_1[9] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  param_1[9] = 0;
  FUN_00408110(param_1);
  return;
}




void __thiscall
FUN_00409710(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined1 *)((int)this + 0x14) = 0;
  FUN_00408130(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




bool __thiscall FUN_00409750(void *this,undefined4 param_1)

{
  void *this_00;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413a1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (void *)FUN_00406a20(0x10);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_004071a0(this_00,param_1,0);
  }
  *(undefined4 **)((int)this + 0x24) = local_1c;
  ExceptionList = local_10;
  return *(int *)((int)this + 0x24) != 0;
}




void __thiscall FUN_004097f0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4);
  iVar3 = *(int *)((int)this + 0x10) - *(int *)((int)this + 8);
  iVar1 = *(int *)((int)this + 0x28);
  if (iVar1 == 0) {
    *(int *)((int)this + 4) = (param_3 - iVar2) / 2;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 4) + iVar2;
    *(int *)((int)this + 8) = (param_4 - iVar3) / 2 + -10;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 8) + iVar3;
  }
  else if (iVar1 == 1) {
    *(int *)((int)this + 0xc) = param_3 - *(int *)((int)this + 0x2c);
    *(int *)((int)this + 4) = *(int *)((int)this + 0xc) - iVar2;
    *(int *)((int)this + 8) = param_2 + *(int *)((int)this + 0x30);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 8) + iVar3;
  }
  else if (iVar1 == 3) {
    *(int *)((int)this + 4) = param_1 + *(int *)((int)this + 0x2c);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 4) + iVar2;
    *(int *)((int)this + 8) = (param_4 - iVar3) - *(int *)((int)this + 0x30);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 8) + iVar3;
  }
  return;
}




void __thiscall FUN_00409910(void *this,int param_1)

{
  undefined4 local_1c [2];
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413a48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((*(int *)((int)this + 0x24) != 0) && (*(char *)((int)this + 0x14) == '\0')) && (param_1 != 0)
     ) {
    local_14 = this;
    FUN_00406fc0(param_1);
    local_8 = 0;
    FUN_00408240(local_1c,*(int *)((int)local_14 + 0x24),*(undefined4 *)((int)local_14 + 4),
                 *(undefined4 *)((int)local_14 + 8),
                 *(int *)((int)local_14 + 0xc) - *(int *)((int)local_14 + 4),
                 *(int *)((int)local_14 + 0x10) - *(int *)((int)local_14 + 8));
    local_8 = 0xffffffff;
    FUN_00407000(local_1c);
  }
  ExceptionList = local_10;
  return;
}




undefined4 FUN_004099c0(void)

{
  return 0;
}




BOOL __fastcall FUN_004099d0(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    local_c = -1;
  }
  else {
    local_c = PostMessageW(*(HWND *)(param_1 + 0x20),0x111,*(WPARAM *)(param_1 + 0x1c),0);
  }
  return local_c;
}




void __cdecl FUN_00409a40(char *param_1,int param_2)

{
  strrchr(param_1,param_2);
  return;
}




/* Library Function - Single Match
    _wmemset
   
   Library: Visual Studio */

wchar_t * __cdecl _wmemset(wchar_t *_S,wchar_t _C,size_t _N)

{
  wchar_t *local_8;
  
  local_8 = _S;
  for (; _N != 0; _N = _N - 1) {
    *local_8 = _C;
    local_8 = local_8 + 1;
  }
  return _S;
}




undefined4 * __thiscall FUN_00409aa0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_00409ad0(undefined4 *param_1)

{
  *param_1 = Gdiplus::Image::vftable;
  return param_1;
}




void * FUN_00409af0(void)

{
  undefined4 uVar1;
  undefined4 local_c;
  void *local_8;
  
  local_c = 0;
  uVar1 = GdipCreateMatrix(&local_c);
  *(undefined4 *)((int)local_8 + 4) = uVar1;
  FUN_00407180(local_8,local_c);
  return local_8;
}




void __fastcall FUN_00409b30(undefined4 *param_1)

{
  GdipDeleteMatrix(*param_1);
  return;
}




void __thiscall FUN_00409b50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipTranslateMatrix(*this,param_1,param_2,param_3);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall FUN_00409b90(void *this,undefined4 param_1,undefined4 param_2)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipRotateMatrix(*this,param_1,param_2);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall FUN_00409bd0(void *this,undefined4 param_1,undefined4 param_2)

{
  Status SVar1;
  
                    /* WARNING: Load size is inaccurate */
  SVar1 = GdipTransformMatrixPoints(*this,param_1,param_2);
  Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  return;
}




void __thiscall FUN_00409c00(void *this,int param_1,undefined4 param_2,int param_3)

{
  Status SVar1;
  undefined4 local_c;
  
  if ((param_3 == 3) || (param_3 == 4)) {
    if (param_1 == 0) {
      local_c = 0;
    }
    else {
      local_c = *(undefined4 *)(param_1 + 4);
    }
                    /* WARNING: Load size is inaccurate */
    SVar1 = GdipDrawImagePoints(*this,local_c,param_2,param_3);
    Gdiplus::Graphics::SetStatus((Graphics *)this,SVar1);
  }
  else {
    Gdiplus::Graphics::SetStatus((Graphics *)this,2);
  }
  return;
}




Image * __thiscall FUN_00409c70(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  GpImage *local_18;
  Image *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413a78;
  local_10 = ExceptionList;
  uVar1 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (Image *)this;
  FUN_00409ad0((undefined4 *)this);
  local_8 = 0;
  *(undefined ***)local_14 = Gdiplus::Bitmap::vftable;
  local_18 = (GpImage *)0x0;
  if (param_2 == 0) {
    uVar2 = GdipCreateBitmapFromFile(param_1,&local_18,uVar1);
    *(undefined4 *)(local_14 + 8) = uVar2;
  }
  else {
    uVar2 = GdipCreateBitmapFromFileICM(param_1,&local_18);
    *(undefined4 *)(local_14 + 8) = uVar2;
  }
  Gdiplus::Image::SetNativeImage(local_14,local_18);
  ExceptionList = local_10;
  return local_14;
}




/* Library Function - Multiple Matches With Different Base Names
    protected: virtual void * __thiscall std::collate<char>::`scalar deleting destructor'(unsigned
   int)
    protected: virtual void * __thiscall std::collate<unsigned short>::`scalar deleting
   destructor'(unsigned int)
    protected: virtual void * __thiscall std::collate<wchar_t>::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall FID_conflict__scalar_deleting_destructor_(void *this,uint param_1)

{
  FUN_00409d60((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FUN_00406a10(this);
    }
    else {
      destroy<>();
    }
  }
  return (undefined4 *)this;
}




void __fastcall FUN_00409d60(undefined4 *param_1)

{
  FUN_00407200(param_1);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00409d80(void *this,undefined4 param_1)

{
  HBRUSH pHVar1;
  HANDLE pvVar2;
  WCHAR local_2014 [4096];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413afd;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00401350((undefined4 *)this);
  local_8 = 0;
  *(undefined ***)this = VideoViewerWnd::vftable;
  FUN_00412180((LPCRITICAL_SECTION)((int)this + 4));
  local_8._0_1_ = 1;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  FUN_0040de90((void *)((int)this + 0xbc));
  local_8._0_1_ = 2;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  FUN_004031b0((undefined4 *)((int)this + 0xe4));
  local_8._0_1_ = 3;
  basic_string<>((int)this + 0xf0);
  local_8._0_1_ = 4;
  basic_string<>((int)this + 0x110);
  local_8 = CONCAT31(local_8._1_3_,5);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0x38e;
  *(undefined4 *)((int)this + 0x148) = 0x6a;
  *(undefined4 *)((int)this + 0x14c) = 0x14;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  pHVar1 = CreateSolidBrush(0xd48522);
  *(HBRUSH *)((int)this + 0x74) = pHVar1;
  memset(local_2014,0,0x2000);
  FUN_004122f0();
  FUN_004069d0(local_2014,0x1000,L"%s/hover_ico_hand.cur");
  pvVar2 = LoadImageW((HINSTANCE)0x0,local_2014,2,0x20,0x20,0x10);
  *(HANDLE *)((int)this + 0x15c) = pvVar2;
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 * __thiscall FUN_0040a1a0(void *this,uint param_1)

{
  FUN_0040a200((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void __fastcall FUN_0040a1e0(void *param_1)

{
  FUN_0040de00(param_1);
  return;
}




void __fastcall FUN_0040a200(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  code *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  code *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  code *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = VideoViewerWnd::vftable;
  local_18 = param_1;
  FUN_0040ade0((int)param_1);
  local_18[0x15] = 0;
  DestroyWindow((HWND)local_18[0x14]);
  local_18[0x14] = 0;
  DeleteObject((HGDIOBJ)local_18[0x1d]);
  local_18[0x1d] = 0;
  DeleteObject((HGDIOBJ)local_18[0x1e]);
  local_18[0x1e] = 0;
  DeleteObject((HGDIOBJ)local_18[0x1f]);
  local_18[0x1f] = 0;
  DeleteObject((HGDIOBJ)local_18[0x57]);
  local_18[0x57] = 0;
  if (local_18[0x59] != 0) {
    local_30 = (undefined4 *)local_18[0x59];
    local_20 = local_30;
    if (local_30 == (undefined4 *)0x0) {
      local_38 = 0;
    }
    else {
      local_34 = *(code **)*local_30;
      local_38 = (*local_34)(1);
    }
    local_18[0x59] = 0;
  }
  local_1c = 0;
  while (uVar1 = FUN_0040dae0(local_18 + 0x39), local_1c < uVar1) {
    local_3c = local_18 + 0x39;
    piVar2 = (int *)FUN_0040dab0(local_3c,local_1c);
    local_24 = (undefined4 *)*piVar2;
    if (local_24 != (undefined4 *)0x0) {
      if (local_24 == (undefined4 *)local_18[0x38]) {
        local_18[0x38] = 0;
      }
      local_40 = local_24;
      local_28 = local_24;
      if (local_24 == (undefined4 *)0x0) {
        local_48 = 0;
      }
      else {
        local_44 = *(code **)*local_24;
        local_48 = (*local_44)(1);
      }
    }
    local_1c = local_1c + 1;
  }
  FUN_0040db10(local_18 + 0x39);
  if (local_18[0x38] != 0) {
    local_4c = (undefined4 *)local_18[0x38];
    local_2c = local_4c;
    if (local_4c == (undefined4 *)0x0) {
      local_54 = 0;
    }
    else {
      local_50 = *(code **)*local_4c;
      local_54 = (*local_50)(1);
    }
    local_18[0x38] = 0;
  }
  puVar3 = (undefined1 *)Bxty(&local_13);
  local_12 = *puVar3;
  local_58 = local_18 + 0x2f;
  local_11 = local_12;
  puVar4 = (undefined4 *)FUN_0040dd10(local_58,local_74);
  local_68 = *puVar4;
  local_60 = local_18 + 0x2f;
  local_5c = local_68;
  puVar4 = (undefined4 *)FUN_0040dd80(local_60,local_78);
  local_6c = *puVar4;
  local_64 = local_6c;
  FUN_0040f180(&local_14);
  if (local_18[0x13] != 0) {
    local_70 = (void *)local_18[0x13];
    FUN_00412766(local_70);
    local_18[0x13] = 0;
  }
  ~basic_string<>(local_18 + 0x44);
  ~basic_string<>(local_18 + 0x3c);
  FUN_0040dba0(local_18 + 0x39);
  FUN_0040a1e0(local_18 + 0x2f);
  FUN_004121a0((LPCRITICAL_SECTION)(local_18 + 1));
  FUN_00401180(local_18);
  ExceptionList = local_10;
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0040a500(HINSTANCE param_1,char param_2,int param_3)

{
  BOOL BVar1;
  HANDLE pvVar2;
  HWND pHVar3;
  tagWNDCLASSEXW local_2044;
  DWORD local_2014;
  undefined1 local_200d;
  int local_200c;
  WCHAR local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_2044.cbSize = 0x30;
  memset(&local_2044.style,0,0x2c);
  BVar1 = GetClassInfoExW(param_1,L"EaseUS VideoViewer",&local_2044);
  if (BVar1 == 0) {
    local_2044.hInstance = param_1;
    local_2044.lpszClassName = L"EaseUS VideoViewer";
    local_2044.style = 8;
    local_2044.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    memset(local_2008,0,0x2000);
    FUN_004122f0();
    FUN_004069d0(local_2008,0x1000,L"%s/VideoViewer.ico");
    pvVar2 = LoadImageW(param_1,local_2008,1,0x20,0x20,0x10);
    *(HANDLE *)(local_200c + 0x7c) = pvVar2;
    local_2044.hIcon = *(HICON *)(local_200c + 0x7c);
    local_2044.lpfnWndProc = FUN_0040b740;
    RegisterClassExW(&local_2044);
  }
  BVar1 = IsWindow(*(HWND *)(local_200c + 0x50));
  if (BVar1 == 0) {
    pHVar3 = FindWindowExW((HWND)0x0,(HWND)0x0,(LPCWSTR)0x0,L"EaseUS_PreivewDialog");
    *(HWND *)(local_200c + 0x13c) = pHVar3;
    if (*(int *)(local_200c + 0x13c) != 0) {
      if (param_3 == 0) {
        pHVar3 = FindWindowExW(*(HWND *)(local_200c + 0x13c),(HWND)0x0,(LPCWSTR)0x0,
                               L"EaseUS_PreivewWnd_VIDEO");
        *(HWND *)(local_200c + 0x138) = pHVar3;
        if (*(int *)(local_200c + 0x138) == 0) {
          pHVar3 = FindWindowExW(*(HWND *)(local_200c + 0x13c),(HWND)0x0,(LPCWSTR)0x0,
                                 L"EaseUS_PreivewWnd_Main");
          *(HWND *)(local_200c + 0x138) = pHVar3;
          pHVar3 = FindWindowExW(*(HWND *)(local_200c + 0x138),(HWND)0x0,(LPCWSTR)0x0,
                                 L"EaseUS_PreivewWnd_VIDEO");
          *(HWND *)(local_200c + 0x138) = pHVar3;
        }
      }
      else {
        *(int *)(local_200c + 0x138) = param_3;
      }
    }
    local_2014 = 0x40000000;
    if (param_2 == '\0') {
      local_2014 = 0x50000000;
    }
    pHVar3 = CreateWindowExW(0,L"EaseUS VideoViewer",(LPCWSTR)0x0,local_2014,0,0,0,0,
                             *(HWND *)(local_200c + 0x138),(HMENU)0x0,param_1,(LPVOID)0x0);
    *(HWND *)(local_200c + 0x50) = pHVar3;
    if (*(int *)(local_200c + 0x50) == 0) goto LAB_0040a7c0;
    SetWindowLongW(*(HWND *)(local_200c + 0x50),-0x15,local_200c);
    SetWindowTextW(*(HWND *)(local_200c + 0x50),L"EaseUS VideoViewer");
    FUN_0040a7d0();
  }
  BVar1 = IsWindow(*(HWND *)(local_200c + 0x50));
  local_200d = BVar1 != 0;
LAB_0040a7c0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0040a7d0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_2094;
  code *local_2090;
  undefined4 local_208c;
  undefined4 local_2088;
  int local_2084;
  undefined4 local_2080;
  code *local_207c;
  int *local_2078;
  int local_2074;
  undefined4 local_2070;
  code *local_206c;
  int *local_2068;
  undefined4 local_2064;
  code *local_2060;
  undefined4 local_205c;
  undefined4 *local_2058;
  undefined4 *local_2054;
  void *local_2050;
  undefined4 local_204c;
  void *local_2048;
  int *local_2044;
  void *local_2040;
  int *local_203c;
  void *local_2038;
  undefined4 *local_2034;
  void *local_2030;
  int *local_202c;
  int local_2028;
  undefined4 local_2024;
  undefined4 local_2020;
  undefined4 local_201c;
  undefined4 local_2018;
  undefined1 local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413ba9;
  local_10 = ExceptionList;
  uVar1 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2024 = 0;
  local_2020 = 0;
  local_201c = 0;
  local_2018 = 0;
  local_14 = uVar1;
  local_2030 = (void *)FUN_004124b9(0x90);
  local_8 = 0;
  if (local_2030 == (void *)0x0) {
    local_2034 = (undefined4 *)0x0;
  }
  else {
    local_2034 = FUN_004082a0(local_2030,*(undefined4 *)(local_2028 + 0x54));
  }
  local_2058 = local_2034;
  local_8 = 0xffffffff;
  *(undefined4 **)(local_2028 + 0xd8) = local_2034;
  if (*(int *)(local_2028 + 0xd8) != 0) {
    local_205c = *(undefined4 *)(local_2028 + 0xd8);
    local_2060 = *(code **)(**(int **)(local_2028 + 0xd8) + 0x18);
    (*local_2060)(*(undefined4 *)(local_2028 + 0x50),0x1003,local_2024,local_2020,local_201c,
                  local_2018,uVar1);
    uVar4 = *(undefined4 *)(local_2028 + 0xd8);
    iVar3 = local_2028 + 0xbc;
    local_2064 = 0x1003;
    puVar2 = (undefined4 *)FUN_0040de50(&local_2064);
    *puVar2 = uVar4;
    local_2018 = 0x18;
    local_201c = 0x18;
    local_2038 = (void *)FUN_004124b9(0x34);
    local_8 = 1;
    if (local_2038 == (void *)0x0) {
      local_203c = (int *)0x0;
    }
    else {
      local_203c = FUN_004095e0(local_2038,3,0x20,0x1c);
    }
    local_2068 = local_203c;
    local_8 = 0xffffffff;
    local_202c = local_203c;
    if (local_203c != (int *)0x0) {
      local_206c = *(code **)(*local_203c + 0x18);
      (*local_206c)(*(undefined4 *)(local_2028 + 0x50),0x1000,local_2024,local_2020,local_201c,
                    local_2018,uVar1,uVar4,iVar3);
      memset(local_2014,0,0x2000);
      FUN_004122f0();
      FUN_004069d0(local_2014,0x1000,L"%s/PlayMedia.png");
      FUN_00409750(local_202c,local_2014);
      local_2074 = local_2028 + 0xbc;
      local_2070 = 0x1000;
      puVar2 = (undefined4 *)FUN_0040de50(&local_2070);
      *puVar2 = local_202c;
      *(int **)(local_2028 + 200) = local_202c;
      local_2040 = (void *)FUN_004124b9(0x34);
      local_8 = 2;
      if (local_2040 == (void *)0x0) {
        local_2044 = (int *)0x0;
      }
      else {
        local_2044 = FUN_004095e0(local_2040,3,0x20,0x1c);
      }
      local_2078 = local_2044;
      local_8 = 0xffffffff;
      local_202c = local_2044;
      local_207c = *(code **)(*local_2044 + 0x18);
      (*local_207c)(*(undefined4 *)(local_2028 + 0x50),0x1001,local_2024,local_2020,local_201c,
                    local_2018);
      if (local_202c != (int *)0x0) {
        FUN_004122f0();
        FUN_004069d0(local_2014,0x1000,L"%s/PauseMedia.png");
        FUN_00409750(local_202c,local_2014);
        local_2084 = local_2028 + 0xbc;
        local_2080 = 0x1001;
        puVar2 = (undefined4 *)FUN_0040de50(&local_2080);
        *puVar2 = local_202c;
        *(int **)(local_2028 + 0xcc) = local_202c;
        local_2048 = (void *)FUN_004124b9(0x60);
        local_8 = 3;
        if (local_2048 == (void *)0x0) {
          local_204c = 0;
        }
        else {
          local_204c = FUN_004114c0(local_2048,*(undefined4 *)(local_2028 + 0x54));
        }
        local_2088 = local_204c;
        local_8 = 0xffffffff;
        *(undefined4 *)(local_2028 + 0xdc) = local_204c;
        if (*(int *)(local_2028 + 0xdc) != 0) {
          local_208c = *(undefined4 *)(local_2028 + 0xdc);
          local_2090 = *(code **)(**(int **)(local_2028 + 0xdc) + 0x18);
          (*local_2090)(*(undefined4 *)(local_2028 + 0x50),0x1004,local_2024,local_2020,local_201c,
                        local_2018);
          uVar4 = *(undefined4 *)(local_2028 + 0xdc);
          local_2094 = 0x1004;
          puVar2 = (undefined4 *)FUN_0040de50(&local_2094);
          *puVar2 = uVar4;
          FUN_004122f0();
          FUN_004069d0(local_2014,0x1000,L"%s/audio_bk.png");
          local_2050 = (void *)FUN_00406a20(0x10);
          local_8 = 4;
          if (local_2050 == (void *)0x0) {
            local_2054 = (undefined4 *)0x0;
          }
          else {
            local_2054 = FUN_004071a0(local_2050,local_2014,0);
          }
          local_8 = 0xffffffff;
          *(undefined4 **)(local_2028 + 0xe0) = local_2054;
        }
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_0040ade0(int param_1)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x70));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    DeleteDC(*(HDC *)(param_1 + 0x6c));
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x140) != 0) {
    DeleteDC(*(HDC *)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x154) != 0) {
    DeleteDC(*(HDC *)(param_1 + 0x154));
  }
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x158));
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}




undefined4 __fastcall FUN_0040aeb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




void __thiscall FUN_0040aed0(void *this,int param_1,int param_2)

{
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)((int)this + 0x50) != 0)) {
    *(int *)((int)this + 0xb0) = param_1;
    *(int *)((int)this + 0xb4) = param_2;
    PostMessageW(*(HWND *)((int)this + 0x50),0x1c18,*(WPARAM *)((int)this + 0xb0),
                 *(LPARAM *)((int)this + 0xb4));
  }
  return;
}




uint __thiscall FUN_0040af40(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x80);
  iVar3 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x84);
  uVar1 = iVar2 - *param_1;
  uVar4 = (int)uVar1 >> 0x1f;
  if (((int)((uVar1 ^ uVar4) - uVar4) < 0x10) &&
     (uVar1 = iVar3 - *param_2 >> 0x1f, uVar1 = (iVar3 - *param_2 ^ uVar1) - uVar1,
     (int)uVar1 < 0x10)) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    *param_1 = iVar2;
    *param_2 = iVar3;
    uVar1 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  return uVar1;
}




void __thiscall FUN_0040afc0(void *this,WPARAM param_1,LPARAM param_2)

{
  SendMessageW(*(HWND *)((int)this + 0x50),0x1c19,param_1,param_2);
  return;
}




void __fastcall FUN_0040aff0(int param_1)

{
  PostMessageW(*(HWND *)(param_1 + 0x50),0x18,0,0);
  PostQuitMessage(0);
  return;
}




void __fastcall FUN_0040b020(void *param_1)

{
  FUN_0040cfd0(param_1,1);
  return;
}




void __fastcall FUN_0040b040(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_00411f50(*(int *)(param_1 + 0xdc));
  }
  return;
}




void __fastcall FUN_0040b070(int param_1)

{
  LONG LVar1;
  LONG LVar2;
  BOOL BVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 0x50),&local_18);
  if (local_18.right == 0) {
    if (*(int *)(param_1 + 0x138) != 0) {
      BVar3 = IsWindow(*(HWND *)(param_1 + 0x138));
      if (BVar3 != 0) {
        GetClientRect(*(HWND *)(param_1 + 0x138),&local_18);
        goto LAB_0040b0f6;
      }
    }
    SetRect(&local_18,0,0,0x38e,0x146);
  }
LAB_0040b0f6:
  LVar2 = local_18.bottom;
  LVar1 = local_18.right;
  *(undefined4 *)(param_1 + 0x58) = 1;
  SetWindowPos(*(HWND *)(param_1 + 0x50),(HWND)0x0,0,0,local_18.right,local_18.bottom,8);
  PostMessageW(*(HWND *)(param_1 + 0x50),5,0,LVar1 & 0xffffU | LVar2 << 0x10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_0040b180(int param_1)

{
  BOOL BVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 0x50),&local_18);
  SetRect((LPRECT)(param_1 + 0x80),0,0,*(int *)(param_1 + 0xb0),*(int *)(param_1 + 0xb4));
  if (local_18.right == 0) {
    if (*(int *)(param_1 + 0x138) != 0) {
      BVar1 = IsWindow(*(HWND *)(param_1 + 0x138));
      if (BVar1 != 0) {
        GetClientRect(*(HWND *)(param_1 + 0x138),&local_18);
        goto LAB_0040b246;
      }
    }
    SetRect(&local_18,0,0,0x38e,0x146);
  }
LAB_0040b246:
  FUN_00412330(*(int *)(param_1 + 0xb0),*(int *)(param_1 + 0xb4),local_18.right,local_18.bottom,
               (int *)(param_1 + 0x80));
  SetRect((LPRECT)(param_1 + 0x90),0,0,local_18.right,local_18.bottom);
  InvalidateRect(*(HWND *)(param_1 + 0x50),(RECT *)(param_1 + 0x90),1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 __thiscall FUN_0040b2e0(void *this,undefined4 *param_1,void *param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10;
  undefined4 *local_c;
  void *local_8;
  
  if ((*(int *)((int)this + 0x54) == 0) ||
     (local_8 = this, BVar1 = IsWindowVisible(*(HWND *)((int)this + 0x50)), BVar1 == 0)) {
    return 0xffffffff;
  }
  BVar1 = IsWindow(*(HWND *)((int)local_8 + 0x138));
  if ((BVar1 == 0) && (*(int *)((int)local_8 + 0x54) != 0)) {
    (**(code **)(**(int **)((int)local_8 + 0x54) + 0x28))();
    PostMessageW(*(HWND *)((int)local_8 + 0x50),0x10,0,0);
    return 0xfffffffe;
  }
  if (*(int *)((int)local_8 + 0x4c) != 0) {
    FUN_00412766(*(void **)((int)local_8 + 0x4c));
    *(undefined4 *)((int)local_8 + 0x4c) = 0;
  }
  *(undefined1 *)((int)local_8 + 0x20) = 0;
  *(undefined4 *)((int)local_8 + 0x24) = 0;
  *(undefined4 *)((int)local_8 + 0x28) = 0;
  *(undefined4 *)((int)local_8 + 0x2c) = 0;
  *(undefined4 *)((int)local_8 + 0x30) = 0;
  *(undefined4 *)((int)local_8 + 0x34) = 0;
  *(undefined4 *)((int)local_8 + 0x38) = 0;
  *(undefined4 *)((int)local_8 + 0x3c) = 0;
  *(undefined4 *)((int)local_8 + 0x40) = 0;
  *(undefined4 *)((int)local_8 + 0x44) = 0;
  *(undefined4 *)((int)local_8 + 0x48) = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (void *)0x0)) {
    FUN_004121b0(&local_10,(LPCRITICAL_SECTION)((int)local_8 + 4));
    local_c = param_1;
    if ((*(int *)((int)local_8 + 0x4c) == 0) ||
       ((*(int *)((int)local_8 + 0x28) != param_1[1] ||
        (*(int *)((int)local_8 + 0x2c) != param_1[2])))) {
      uVar2 = FUN_004127a0(param_1[1] * param_1[2] * 4);
      *(undefined4 *)((int)local_8 + 0x4c) = uVar2;
      if (*(int *)((int)local_8 + 0x4c) == 0) {
        FUN_004121e0(&local_10);
        return 0xfffffffd;
      }
    }
    *(undefined1 *)((int)local_8 + 0x20) = 1;
    puVar4 = local_c;
    puVar5 = (undefined4 *)((int)local_8 + 0x24);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    memcpy(*(void **)((int)local_8 + 0x4c),param_2,local_c[5]);
    FUN_004121e0(&local_10);
  }
  InvalidateRect(*(HWND *)((int)local_8 + 0x50),(RECT *)((int)local_8 + 0x90),1);
  return 1;
}




void __thiscall FUN_0040b4b0(void *this,double param_1,double param_2)

{
  if ((*(int *)((int)this + 0xd8) != 0) && (9.999999747378752e-06 <= param_2)) {
    if ((int)param_2 <= (int)param_1) {
      FUN_0040cfd0(this,1);
    }
    FUN_00409160(*(void **)((int)this + 0xd8),param_1,param_2);
    FUN_0040d9e0(this,param_1);
  }
  return;
}




void FUN_0040b540(int *param_1,WPARAM param_2)

{
  uint uVar1;
  int iVar2;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar3;
  void *pvVar4;
  WPARAM local_58;
  wchar_t *local_50;
  int local_4c;
  int *local_48;
  undefined1 local_44 [24];
  undefined1 local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413be8;
  local_10 = ExceptionList;
  uVar1 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_00412220("%s:%p:%d\r\n");
  FUN_0040df00(local_48 + 0x44,L"");
  if ((param_1 != (int *)0x0) && (local_48[0x4f] != 0)) {
    local_4c = 0;
    (**(code **)(*param_1 + 0x1c))(&local_4c,uVar1);
    if ((local_4c != 0) && (*(int *)(local_4c + 0xc) != 0 || *(int *)(local_4c + 0x10) != 0)) {
      if (local_48[0x2c] == 0) {
        (**(code **)(*local_48 + 0x14))(1,1);
      }
      SendMessageW((HWND)local_48[0x4f],0x1609,2,local_48[0x14]);
      if ((int)param_2 < 1) {
        local_58 = param_2;
      }
      else {
        local_58 = 0;
      }
      SendMessageW((HWND)local_48[0x4f],0x1608,local_58,*(LPARAM *)(local_4c + 0xc));
    }
    if ((0 < (int)param_2) || (local_48[0x14] == 0)) {
      local_50 = (wchar_t *)0x0;
      iVar2 = (**(code **)(*param_1 + 0x20))(&local_50);
      if ((local_50 != (wchar_t *)0x0) && (iVar2 != 0)) {
        pbVar3 = basic_string<>(local_44,local_50);
        local_8 = 0;
        pvVar4 = FUN_0040f220(local_2c,pbVar3,L" - File Preview");
        FUN_0040df20(local_48 + 0x3c,pvVar4);
        ~basic_string<>(local_2c);
        local_8 = 0xffffffff;
        ~basic_string<>(local_44);
      }
      if (local_48[0x36] != 0) {
        FUN_004091f0(local_48[0x36]);
      }
      FUN_0040cfd0(local_48,1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_0040b740(HWND param_1,uint param_2,undefined4 *param_3,void *param_4)

{
  void *this;
  
  this = (void *)GetWindowLongW(param_1,-0x15);
  if ((this == (void *)0x0) || (param_1 != *(HWND *)((int)this + 0x50))) {
    DefWindowProcW(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  }
  else {
    FUN_0040b7b0(this,param_2,(WPARAM)param_3,(uint)param_4);
    FUN_0040b960(this,param_2,param_3,param_4);
  }
  return;
}




void __thiscall FUN_0040b7b0(void *this,uint param_1,WPARAM param_2,uint param_3)

{
  if (param_1 < 0x201) {
    if (param_1 == 0x200) {
      FUN_0040be90(this,param_2,param_3);
    }
    else if (param_1 == 0x100) {
      FUN_0040cc50(this,param_2,param_3);
    }
    else if (param_1 == 0x111) {
      FUN_0040ce50(this,param_2);
    }
  }
  else {
    switch(param_1) {
    case 0x201:
      FUN_0040bab0(this,param_2,param_3);
      break;
    case 0x202:
      FUN_0040bc40(param_2,param_3);
      break;
    case 0x203:
      FUN_0040be10(this);
      break;
    case 0x2a3:
      FUN_0040c150(this,param_2,param_3);
    }
  }
  FUN_0040d1a0(this,param_1);
  return;
}




LRESULT __thiscall FUN_0040b960(void *this,uint param_1,undefined4 *param_2,void *param_3)

{
  LRESULT LVar1;
  
  if (param_1 < 0x15) {
    if (param_1 == 0x14) {
      return 1;
    }
    switch(param_1) {
    case 2:
    case 0x10:
      if (*(int *)((int)this + 0x54) != 0) {
        (**(code **)(**(int **)((int)this + 0x54) + 0x40))();
      }
      break;
    case 5:
      FUN_0040b180((int)this);
      break;
    case 0xf:
      LVar1 = FUN_0040c1f0(this);
      return LVar1;
    }
  }
  else if (param_1 == 0x20) {
    if ((*(int *)((int)this + 0xc4) == *(int *)((int)this + 0xd8)) ||
       (*(int *)((int)this + 0xc4) == *(int *)((int)this + 0xdc))) {
      return 1;
    }
  }
  else if (param_1 == 0x1c18) {
    FUN_0040b070((int)this);
  }
  else if (param_1 == 0x1c19) {
    LVar1 = FUN_0040b2e0(this,param_2,param_3);
    return LVar1;
  }
  LVar1 = DefWindowProcW(*(HWND *)((int)this + 0x50),param_1,(WPARAM)param_2,(LPARAM)param_3);
  return LVar1;
}




void __thiscall FUN_0040bab0(void *this,undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  code *local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  void *local_14;
  
  if (*(int *)((int)this + 0x50) != 0) {
    local_14 = this;
    SetCapture(*(HWND *)((int)this + 0x50));
    local_50 = param_2 & 0xffff;
    local_4c = param_2 >> 0x10;
    *(undefined4 *)((int)local_14 + 0xa4) = 0;
    *(undefined4 *)((int)local_14 + 0xa0) = 0;
    puVar2 = FUN_0040da90(local_68,local_50,local_4c);
    local_60 = *puVar2;
    local_5c = puVar2[1];
    local_1c = (void *)((int)local_14 + 0xbc);
    local_58 = local_60;
    local_54 = local_5c;
    puVar2 = (undefined4 *)FUN_0040dd10(local_1c,local_40);
    local_2c = *puVar2;
    local_24 = (void *)((int)local_14 + 0xbc);
    local_20 = local_2c;
    puVar2 = (undefined4 *)FUN_0040dd80(local_24,local_44);
    local_30 = *puVar2;
    local_28 = local_30;
    FUN_0040f260(&local_18,local_30);
    *(undefined4 *)((int)local_14 + 0xc4) = 0;
    local_34 = (void *)((int)local_14 + 0xbc);
    piVar3 = (int *)FUN_0040dd10(local_34,local_48);
    bVar1 = FUN_0040dc20(&local_18,piVar3);
    if ((!bVar1) && (iVar4 = FUN_0040dc50(&local_18), *(int *)(iVar4 + 4) != 0)) {
      iVar4 = FUN_0040dc50(&local_18);
      *(undefined4 *)((int)local_14 + 0xc4) = *(undefined4 *)(iVar4 + 4);
      local_38 = *(undefined4 *)((int)local_14 + 0xc4);
      local_3c = *(code **)(**(int **)((int)local_14 + 0xc4) + 8);
      (*local_3c)(param_1,param_2);
    }
  }
  return;
}




void FUN_0040bc40(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  code *local_44;
  undefined4 local_40;
  code *local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  int local_14;
  
  ReleaseCapture();
  local_58 = param_2 & 0xffff;
  local_54 = param_2 >> 0x10;
  puVar2 = FUN_0040da90(local_70,local_58,local_54);
  local_68 = *puVar2;
  local_64 = puVar2[1];
  local_1c = (void *)(local_14 + 0xbc);
  local_60 = local_68;
  local_5c = local_64;
  puVar2 = (undefined4 *)FUN_0040dd10(local_1c,local_48);
  local_2c = *puVar2;
  local_24 = (void *)(local_14 + 0xbc);
  local_20 = local_2c;
  puVar2 = (undefined4 *)FUN_0040dd80(local_24,local_4c);
  local_30 = *puVar2;
  local_28 = local_30;
  FUN_0040f260(&local_18,local_30);
  local_34 = (void *)(local_14 + 0xbc);
  piVar3 = (int *)FUN_0040dd10(local_34,local_50);
  bVar1 = FUN_0040dc20(&local_18,piVar3);
  if ((!bVar1) && (iVar4 = FUN_0040dc50(&local_18), *(int *)(iVar4 + 4) != 0)) {
    *(undefined4 *)(local_14 + 0xa4) = 0;
    *(undefined4 *)(local_14 + 0xa0) = 0;
    iVar4 = FUN_0040dc50(&local_18);
    *(undefined4 *)(local_14 + 0xc4) = *(undefined4 *)(iVar4 + 4);
    local_40 = *(undefined4 *)(local_14 + 0xc4);
    local_44 = *(code **)(**(int **)(local_14 + 0xc4) + 0xc);
    (*local_44)(param_1,param_2);
    return;
  }
  if (*(int *)(local_14 + 0xc4) != 0) {
    local_38 = *(undefined4 *)(local_14 + 0xc4);
    local_3c = *(code **)(**(int **)(local_14 + 0xc4) + 0xc);
    (*local_3c)(param_1,param_2);
    *(undefined4 *)(local_14 + 0xc4) = 0;
  }
  *(undefined4 *)(local_14 + 0xa4) = 0;
  *(undefined4 *)(local_14 + 0xa0) = 0;
  return;
}




void __fastcall FUN_0040be10(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  
  if (((*(int *)((int)param_1 + 0x50) != 0) && (*(int *)((int)param_1 + 0x54) != 0)) &&
     (cVar1 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0x38))(), cVar1 != '\0')) {
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x54) + 0x18))();
    if (iVar2 == 2) {
      local_c = 0x1001;
    }
    else {
      local_c = 0x1000;
    }
    FUN_0040ce50(param_1,local_c);
  }
  return;
}




void __thiscall FUN_0040be90(void *this,undefined4 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  tagTRACKMOUSEEVENT local_90;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  code *local_54;
  undefined4 local_50;
  code *local_4c;
  undefined4 local_48;
  code *local_44;
  undefined4 local_40;
  code *local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  void *local_14;
  
  local_14 = this;
  if (*(int *)((int)this + 0x60) == 0) {
    *(undefined4 *)((int)this + 0x60) = 1;
    local_90.dwHoverTime = 0;
    local_90.cbSize = 0x10;
    local_90.hwndTrack = *(HWND *)((int)this + 0x50);
    local_90.dwFlags = 2;
    TrackMouseEvent(&local_90);
  }
  local_68 = param_2 & 0xffff;
  local_64 = param_2 >> 0x10;
  if ((*(int *)((int)local_14 + 0x108) != 0) &&
     ((iVar2 = FUN_00408020(*(int *)((int)local_14 + 0x108) - local_68), 0 < iVar2 ||
      (iVar2 = FUN_00408020(*(int *)((int)local_14 + 0x10c) - local_64), 0 < iVar2)))) {
    FUN_0040cfd0(local_14,1);
  }
  *(uint *)((int)local_14 + 0x108) = local_68;
  *(uint *)((int)local_14 + 0x10c) = local_64;
  puVar3 = FUN_0040da90(local_80,local_68,local_64);
  local_78 = *puVar3;
  local_74 = puVar3[1];
  local_1c = (void *)((int)local_14 + 0xbc);
  local_70 = local_78;
  local_6c = local_74;
  puVar3 = (undefined4 *)FUN_0040dd10(local_1c,local_58);
  local_2c = *puVar3;
  local_24 = (void *)((int)local_14 + 0xbc);
  local_20 = local_2c;
  puVar3 = (undefined4 *)FUN_0040dd80(local_24,local_5c);
  local_30 = *puVar3;
  local_28 = local_30;
  FUN_0040f260(&local_18,local_30);
  local_34 = (void *)((int)local_14 + 0xbc);
  piVar4 = (int *)FUN_0040dd10(local_34,local_60);
  bVar1 = FUN_0040dbe0(&local_18,piVar4);
  if ((bVar1) && (iVar2 = FUN_0040dc50(&local_18), *(int *)(iVar2 + 4) != 0)) {
    iVar2 = FUN_0040dc50(&local_18);
    *(undefined4 *)((int)local_14 + 0xc4) = *(undefined4 *)(iVar2 + 4);
    local_38 = *(undefined4 *)((int)local_14 + 0xc4);
    local_3c = *(code **)(**(int **)((int)local_14 + 0xc4) + 0x10);
    (*local_3c)(param_1,param_2);
    local_40 = *(undefined4 *)((int)local_14 + 0xc4);
    local_44 = *(code **)(**(int **)((int)local_14 + 0xc4) + 0x24);
    (*local_44)(1);
    if ((*(int *)((int)local_14 + 0x15c) != 0) &&
       ((*(int *)((int)local_14 + 0xc4) == *(int *)((int)local_14 + 0xd8) ||
        (*(int *)((int)local_14 + 0xc4) == *(int *)((int)local_14 + 0xdc))))) {
      SetCursor(*(HCURSOR *)((int)local_14 + 0x15c));
    }
  }
  else if (*(int *)((int)local_14 + 0xc4) != 0) {
    local_48 = *(undefined4 *)((int)local_14 + 0xc4);
    local_4c = *(code **)(**(int **)((int)local_14 + 0xc4) + 0x14);
    (*local_4c)(param_1,param_2);
    local_50 = *(undefined4 *)((int)local_14 + 0xc4);
    local_54 = *(code **)(**(int **)((int)local_14 + 0xc4) + 0x24);
    (*local_54)(0);
    *(undefined4 *)((int)local_14 + 0xc4) = 0;
  }
  return;
}




void __thiscall FUN_0040c150(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  if (*(int *)((int)this + 0xc4) != 0) {
    pcVar1 = *(code **)(**(int **)((int)this + 0xc4) + 0x14);
    (*pcVar1)(param_1,param_2,pcVar1,*(undefined4 *)((int)this + 0xc4));
    *(undefined4 *)((int)this + 0xc4) = 0;
  }
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  if (*(int *)((int)this + 0x54) != 0) {
    iVar2 = (**(code **)(**(int **)((int)this + 0x54) + 0x18))();
    if (iVar2 == 2) {
      FUN_0040cfd0(this,0);
    }
  }
  return;
}




void __fastcall FUN_0040c1f0(void *param_1)

{
  HDC hdc;
  tagPAINTSTRUCT local_58;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)param_1 + 0x50) != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)((int)param_1 + 0x50),&local_18);
    memset(&local_58,0,0x40);
    hdc = BeginPaint(*(HWND *)((int)param_1 + 0x50),&local_58);
    FUN_0040c2e0(param_1,hdc);
    if (*(int *)((int)param_1 + 0x6c) != 0) {
      FUN_0040c570(param_1,*(HDC *)((int)param_1 + 0x6c));
      FUN_0040ca60(param_1,*(HDC *)((int)param_1 + 0x6c));
      FUN_0040c810(param_1,*(_func_void_ios_base_ptr___int64 **)((int)param_1 + 0x6c));
      BitBlt(hdc,0,0,local_18.right,local_18.bottom,*(HDC *)((int)param_1 + 0x6c),0,0,0xcc0020);
    }
    EndPaint(*(HWND *)((int)param_1 + 0x50),&local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_0040c2e0(void *this,HDC param_1)

{
  int nNumerator;
  HFONT pHVar1;
  HDC pHVar2;
  HBITMAP pHVar3;
  undefined4 *puVar4;
  int nDenominator;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  void *local_58;
  int local_54;
  int local_50;
  int local_4c;
  void *local_48;
  undefined4 local_44 [4];
  CCheckListBox local_34 [16];
  tagRECT local_24;
  uint local_14;
  
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffff0;
  local_48 = this;
  FUN_0040ade0((int)this);
  if ((*(int *)((int)local_48 + 0x58) != 0) && (*(int *)((int)local_48 + 0x50) != 0)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)((int)local_48 + 0x50),&local_24);
    local_50 = local_24.right;
    local_4c = local_24.bottom;
    if ((0 < local_24.right) && (0 < local_24.bottom)) {
      *(HDC *)((int)local_48 + 0x68) = param_1;
      if (*(int *)((int)local_48 + 0x78) == 0) {
        nDenominator = 0x48;
        nNumerator = GetDeviceCaps(*(HDC *)((int)local_48 + 0x68),0x5a);
        local_54 = MulDiv(0xb,nNumerator,nDenominator);
        pHVar1 = CreateFontW(local_54,0,0,0,100,0,0,0,1,0,0,0,0,L"Segoe UI Semibold");
        *(HFONT *)((int)local_48 + 0x78) = pHVar1;
      }
      pHVar2 = CreateCompatibleDC(*(HDC *)((int)local_48 + 0x68));
      *(HDC *)((int)local_48 + 0x6c) = pHVar2;
      SetBkMode(*(HDC *)((int)local_48 + 0x6c),1);
      SetStretchBltMode(*(HDC *)((int)local_48 + 0x6c),3);
      SelectObject(*(HDC *)((int)local_48 + 0x6c),*(HGDIOBJ *)((int)local_48 + 0x78));
      pHVar3 = CreateCompatibleBitmap(param_1,local_50,local_4c);
      *(HBITMAP *)((int)local_48 + 0x70) = pHVar3;
      SelectObject(*(HDC *)((int)local_48 + 0x6c),*(HGDIOBJ *)((int)local_48 + 0x70));
      SetStretchBltMode(param_1,3);
      FUN_00407ae0(*(HDC *)((int)local_48 + 0x6c),(RECT *)((int)local_48 + 0x90),0xfbf8f7);
      puVar4 = (undefined4 *)
               CCheckListBox::OnGetCheckPosition
                         (local_34,*(undefined4 *)((int)local_48 + 0x90),
                          *(undefined4 *)((int)local_48 + 0x94),
                          *(undefined4 *)((int)local_48 + 0x98),
                          *(undefined4 *)((int)local_48 + 0x9c));
      local_90 = *puVar4;
      local_8c = puVar4[1];
      local_88 = puVar4[2];
      local_84 = puVar4[3];
      local_58 = (void *)((int)local_48 + 0xbc);
      local_80 = local_90;
      local_7c = local_8c;
      local_78 = local_88;
      local_74 = local_84;
      puVar4 = (undefined4 *)FUN_0040dd10(local_58,local_94);
      local_68 = *puVar4;
      local_60 = (void *)((int)local_48 + 0xbc);
      local_5c = local_68;
      puVar4 = (undefined4 *)FUN_0040dd80(local_60,local_98);
      local_6c = *puVar4;
      local_64 = local_6c;
      FUN_0040f300(local_44,local_6c,local_68,local_90,local_8c,local_88,local_84);
      FUN_0040d2a0((int)local_48);
      FUN_0040d900((int)local_48);
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}




void __thiscall FUN_0040c570(void *this,HDC param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  undefined1 local_39;
  void *local_38;
  int local_34 [3];
  undefined4 local_28;
  RECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413c18;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = this;
  local_40 = (**(code **)(**(int **)((int)this + 0x54) + 0x18))(local_14);
  if ((((local_40 != 1) && (*(int *)((int)local_38 + 0x54) != 0)) && (param_1 != (HDC)0x0)) &&
     (*(int *)((int)local_38 + 0xd8) != 0)) {
    FUN_004121b0(&local_50,(LPCRITICAL_SECTION)((int)local_38 + 4));
    local_8 = 0;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = *(LONG *)((int)local_38 + 0x98);
    local_24.bottom = *(LONG *)((int)local_38 + 0x9c);
    FUN_00407ae0(param_1,&local_24,0xffffff);
    local_34[0] = 0;
    local_34[1] = 0;
    local_34[2] = *(undefined4 *)((int)local_38 + 0x98);
    local_28 = *(undefined4 *)((int)local_38 + 0x9c);
    FUN_00407b20(param_1,local_34,0xfbf8f7,8);
    local_4c = (*(int *)((int)local_38 + 0x88) - *(int *)((int)local_38 + 0x80)) + -2;
    local_48 = (*(int *)((int)local_38 + 0x8c) - *(int *)((int)local_38 + 0x84)) + -0x14;
    if ((*(char *)((int)local_38 + 0x20) == '\0') &&
       (iVar2 = (**(code **)(**(int **)((int)local_38 + 0x54) + 0x48))(), iVar2 == 2)) {
      local_39 = 10 < *(int *)((int)local_38 + 0x28);
      FUN_0040d510(local_38,param_1,local_39);
    }
    bVar1 = 10 < *(int *)((int)local_38 + 0x28);
    local_44 = (uint)bVar1;
    *(bool *)(*(int *)((int)local_38 + 0xd8) + 0x8d) = bVar1;
    if ((*(int *)((int)local_38 + 0x4c) != 0) &&
       (*(char *)(*(int *)((int)local_38 + 0xd8) + 0x8d) != '\0')) {
      StretchDIBits(param_1,*(int *)((int)local_38 + 0x80) + 1,
                    local_48 + -1 + *(int *)((int)local_38 + 0x84),local_4c,-local_48,0,0,
                    *(int *)((int)local_38 + 0x28),*(int *)((int)local_38 + 0x2c),
                    *(void **)((int)local_38 + 0x4c),(BITMAPINFO *)((int)local_38 + 0x24),0,0xcc0020
                   );
    }
    local_40 = (**(code **)(**(int **)((int)local_38 + 0x54) + 0x18))();
    if (((*(int *)((int)local_38 + 0x5c) != 0) && (local_40 == 2)) &&
       (DVar3 = GetTickCount(), *(int *)((int)local_38 + 0xb8) + 5000U < DVar3)) {
      FUN_0040cfd0(local_38,0);
    }
    local_8 = 0xffffffff;
    FUN_004121e0(&local_50);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_0040c810(void *this,_func_void_ios_base_ptr___int64 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffff38;
  undefined4 local_c4 [3];
  _Smanip<__int64> local_b8 [12];
  undefined4 local_ac;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  code *local_6c;
  void *local_68;
  uint local_64;
  code *local_60;
  void *local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 local_44;
  void *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  void *local_28;
  tagRECT local_24;
  uint local_14;
  
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffff0;
  local_28 = this;
  if (((*(int *)((int)this + 0x54) != 0) && (param_1 != (_func_void_ios_base_ptr___int64 *)0x0)) &&
     (*(int *)((int)this + 0x5c) != 0)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)((int)this + 0x50),&local_24);
    local_34 = (**(code **)(**(int **)((int)local_28 + 0x54) + 0x18))();
    if (local_34 != 4) {
      local_29 = local_34 == 2;
      FUN_0040cdc0(local_28,local_29);
    }
    puVar1 = (undefined4 *)
             std::_Smanip<__int64>::_Smanip<__int64>
                       (local_b8,param_1,
                        CONCAT44(in_stack_ffffff38,*(undefined4 *)((int)local_28 + 0x10c)));
    local_a0 = *puVar1;
    local_9c = puVar1[1];
    local_98 = puVar1[2];
    local_40 = (void *)((int)local_28 + 0xbc);
    local_90 = local_a0;
    local_8c = local_9c;
    local_88 = local_98;
    puVar1 = (undefined4 *)FUN_0040dd10(local_40,local_a4);
    local_50 = *puVar1;
    local_48 = (void *)((int)local_28 + 0xbc);
    local_44 = local_50;
    puVar1 = (undefined4 *)FUN_0040dd80(local_48,local_a8);
    local_54 = *puVar1;
    local_4c = local_54;
    FUN_0040f3a0(local_c4,local_54,local_50,local_a0,local_9c,local_98);
    local_5c = (void *)((int)local_28 + 0xbc);
    local_58 = 0x1000;
    FUN_0040dc70(local_5c,&local_30,&local_58);
    iVar2 = FUN_0040dc50(&local_30);
    local_38 = *(int **)(iVar2 + 4);
    local_60 = *(code **)(*local_38 + 4);
    local_78 = *(undefined4 *)((int)local_28 + 0x108);
    local_74 = *(undefined4 *)((int)local_28 + 0x10c);
    (*local_60)(param_1,local_78,local_74);
    local_68 = (void *)((int)local_28 + 0xbc);
    local_64 = 0x1001;
    piVar3 = FUN_0040dc70(local_68,&local_ac,&local_64);
    local_30 = *piVar3;
    iVar2 = FUN_0040dc50(&local_30);
    local_3c = *(int **)(iVar2 + 4);
    local_6c = *(code **)(*local_3c + 4);
    local_80 = *(undefined4 *)((int)local_28 + 0x108);
    local_7c = *(undefined4 *)((int)local_28 + 0x10c);
    (*local_6c)(param_1,local_80,local_7c);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}




void __thiscall FUN_0040ca60(void *this,HDC param_1)

{
  bool bVar1;
  undefined4 local_50 [2];
  HGDIOBJ local_48;
  COLORREF local_44;
  LPCWSTR local_40;
  int local_3c;
  Image *local_38;
  HFONT local_34;
  int local_30;
  int local_2c;
  void *local_28;
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413c48;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = this;
  if (param_1 != (HDC)0x0) {
    bVar1 = FUN_00403240((int)this + 0x110);
    if (!bVar1) {
      FUN_00406fc0(param_1);
      local_8 = 0;
      local_38 = (Image *)FUN_00407600();
      if (*(int *)((int)local_28 + 0x98) < 800) {
        local_2c = 0x28;
      }
      else {
        local_2c = 0x14;
      }
      local_30 = local_2c;
      local_24.left = 0x14;
      local_24.top = *(int *)((int)local_28 + 0x9c) / 2 + 0x14;
      local_24.right = *(int *)((int)local_28 + 0x98) + -0x14;
      local_24.bottom = *(int *)((int)local_28 + 0x9c) / 2 + 0x14 + local_2c * 2;
      FUN_00407390(local_50,local_38,0x14,local_24.top,local_24.right,local_24.bottom,0x3f000000);
      local_34 = CreateFontW(0x10,0,0,0,700,0,0,0,1,0,0,0,0,(LPCWSTR)0x0);
      local_48 = SelectObject(param_1,local_34);
      local_44 = SetTextColor(param_1,0xff);
      local_3c = FID_conflict_size((int)local_28 + 0x110);
      local_40 = (LPCWSTR)FUN_00403290((int)local_28 + 0x110);
      DrawTextW(param_1,local_40,local_3c,&local_24,0x15);
      SetTextColor(param_1,local_44);
      SelectObject(param_1,local_48);
      DeleteObject(local_34);
      local_8 = 0xffffffff;
      FUN_00407000(local_50);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_0040cc50(void *this,WPARAM param_1,LPARAM param_2)

{
  int iVar1;
  HWND hWnd;
  int local_14;
  undefined4 local_10;
  
  if (((*(int *)((int)this + 0x54) != 0) && (*(int *)((int)this + 0xd8) != 0)) &&
     (*(int *)((int)this + 0xdc) != 0)) {
    switch(param_1) {
    case 0x1b:
      *(undefined4 *)((int)this + 100) = 0;
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this + 0x14))
                (*(undefined4 *)((int)this + 0xb0),*(undefined4 *)((int)this + 0xb4));
      break;
    case 0x20:
      iVar1 = (**(code **)(**(int **)((int)this + 0x54) + 0x18))();
      if (iVar1 == 2) {
        local_10 = 0x1001;
      }
      else {
        local_10 = 0x1000;
      }
      FUN_0040ce50(this,local_10);
      break;
    case 0x25:
    case 0x27:
      hWnd = FindWindowExW((HWND)0x0,(HWND)0x0,L"EaseUS_DRWUI",L"EaseUS_PreivewDialog");
      PostMessageW(hWnd,0x570,param_1,param_2);
      break;
    case 0x26:
    case 0x28:
      if (param_1 == 0x26) {
        local_14 = 10;
      }
      else {
        local_14 = -10;
      }
      FUN_00411ef0(*(void **)((int)this + 0xdc),
                   *(int *)(*(int *)((int)this + 0xdc) + 0x30) + local_14);
    }
    FUN_0040cfd0(this,1);
  }
  return;
}




void __thiscall FUN_0040cdc0(void *this,char param_1)

{
  code *pcVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if ((*(int *)((int)this + 200) != 0) && (*(int *)((int)this + 0xcc) != 0)) {
    uVar4 = *(undefined4 *)((int)this + 200);
    pcVar3 = *(code **)(**(int **)((int)this + 200) + 0x20);
    uVar2 = (uint)(param_1 == '\0');
    (*pcVar3)(uVar2);
    pcVar1 = *(code **)(**(int **)((int)this + 0xcc) + 0x20);
    (*pcVar1)(param_1,uVar2,pcVar1,*(undefined4 *)((int)this + 0xcc),pcVar3,uVar4);
  }
  return;
}




void __thiscall FUN_0040ce50(void *this,undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x50) != 0) && (*(int *)((int)this + 0x54) != 0)) {
    switch(param_1) {
    case 0x1000:
      iVar2 = (**(code **)(**(int **)((int)this + 0x54) + 0x18))();
      if ((iVar2 == 1) || (iVar2 = (**(code **)(**(int **)((int)this + 0x54) + 0x18))(), iVar2 == 5)
         ) {
        pcVar1 = *(code **)(**(int **)((int)this + 0x54) + 0x2c);
        (*pcVar1)(0,pcVar1,*(undefined4 *)((int)this + 0x54));
      }
      (**(code **)(**(int **)((int)this + 0x54) + 0x20))();
      break;
    case 0x1001:
      (**(code **)(**(int **)((int)this + 0x54) + 0x24))();
      FUN_0040cfd0(this,1);
      break;
    case 0x1005:
      *(undefined4 *)((int)this + 100) = 1;
      SendMessageW(*(HWND *)((int)this + 0x50),0x1c18,*(WPARAM *)((int)this + 0xb0),
                   *(LPARAM *)((int)this + 0xb4));
      break;
    case 0x1006:
      *(undefined4 *)((int)this + 100) = 0;
      SendMessageW(*(HWND *)((int)this + 0x50),0x1c18,*(WPARAM *)((int)this + 0xb0),
                   *(LPARAM *)((int)this + 0xb4));
      break;
    case 0x1007:
      PostMessageW(*(HWND *)((int)this + 0x50),0x10,0,0);
    }
  }
  return;
}




void __thiscall FUN_0040cfd0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x5c) = param_1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0xb8) = DVar1;
  return;
}




void __fastcall FUN_0040d000(int param_1)

{
  FUN_0040d020(param_1);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040d020(int param_1)

{
  undefined1 *puVar1;
  DWORD cbMultiByte;
  uint cchWideChar;
  LPWSTR lpWideCharStr;
  CHAR local_3008 [4096];
  CHAR local_2008 [4096];
  CHAR local_1008 [4096];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  memset(local_1008,0,0x1000);
  GetModuleFileNameA((HMODULE)0x0,local_1008,0x1000);
  puVar1 = (undefined1 *)FUN_00409a40(local_1008,0x5c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  memset(local_3008,0,0x1000);
  FUN_00408080(local_3008,0x1000,"%s/../Config/Config.ini");
  memset(local_2008,0,0x1000);
  cbMultiByte = GetPrivateProfileStringA
                          ("string","BadSectorTip",(LPCSTR)0x0,local_2008,0x1000,local_3008);
  cchWideChar = MultiByteToWideChar(0xfde9,0,local_2008,cbMultiByte,(LPWSTR)0x0,0);
  FID_conflict_resize((void *)(param_1 + 0x110),cchWideChar,L'\0');
  lpWideCharStr = (LPWSTR)FUN_00403290(param_1 + 0x110);
  MultiByteToWideChar(0xfde9,0,local_2008,cbMultiByte,lpWideCharStr,cchWideChar);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_0040d1a0(void *this,int param_1)

{
  UINT UVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  LPVOID *ppv;
  
  if (*(int *)((int)this + 300) == 0) {
    UVar1 = RegisterWindowMessageW(L"TaskbarButtonCreated");
    *(UINT *)((int)this + 300) = UVar1;
    hModule = LoadLibraryW(L"user32.dll");
    if (hModule == (HMODULE)0x0) {
      return;
    }
    pFVar2 = GetProcAddress(hModule,"ChangeWindowMessageFilter");
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)(*(undefined4 *)((int)this + 300),1);
    }
  }
  if (*(int *)((int)this + 300) == param_1) {
    ppv = (LPVOID *)addressof<>((int)this + 0x128);
    CoCreateInstance((IID *)&DAT_00414380,(LPUNKNOWN)0x0,1,(IID *)&DAT_004179e0,ppv);
    if (*(int *)((int)this + 0x128) != 0) {
      (**(code **)(**(int **)((int)this + 0x128) + 0xc))(*(undefined4 *)((int)this + 0x128));
      (**(code **)(**(int **)((int)this + 0x128) + 0x28))
                (*(undefined4 *)((int)this + 0x128),*(undefined4 *)((int)this + 0x50),2);
    }
  }
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_0040d2a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  HDC pHVar3;
  undefined4 local_2044 [2];
  Image local_203c [16];
  HBITMAP local_202c;
  int local_2028;
  RECT local_2024;
  undefined1 local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413c86;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2028 = param_1;
  if (*(int *)(param_1 + 0x140) == 0) {
    memset(local_2014,0,0x2000);
    FUN_004122f0();
    FUN_004069d0(local_2014,0x1000,L"%s/AudioScroll.png");
    FUN_00409c70(local_203c,local_2014,0);
    local_8 = 0;
    uVar1 = FUN_004072e0(local_203c);
    if (uVar1 < 100) {
      local_8 = 0xffffffff;
      FUN_00409d60((undefined4 *)local_203c);
    }
    else {
      uVar2 = FUN_004072e0(local_203c);
      *(undefined4 *)(local_2028 + 0x144) = uVar2;
      uVar2 = FUN_00407320(local_203c);
      *(undefined4 *)(local_2028 + 0x148) = uVar2;
      pHVar3 = CreateCompatibleDC(*(HDC *)(local_2028 + 0x68));
      *(HDC *)(local_2028 + 0x140) = pHVar3;
      SetBkMode(*(HDC *)(local_2028 + 0x140),1);
      SetStretchBltMode(*(HDC *)(local_2028 + 0x140),3);
      local_202c = CreateCompatibleBitmap
                             (*(HDC *)(local_2028 + 0x68),*(int *)(local_2028 + 0x144),
                              *(int *)(local_2028 + 0x148));
      SelectObject(*(HDC *)(local_2028 + 0x140),local_202c);
      local_2024.left = 0;
      local_2024.top = 0;
      local_2024.right = *(LONG *)(local_2028 + 0x144);
      local_2024.bottom = *(LONG *)(local_2028 + 0x148);
      FUN_00407ae0(*(HDC *)(local_2028 + 0x140),&local_2024,0xfbf8f7);
      FUN_00406fc0(*(undefined4 *)(local_2028 + 0x140));
      local_8._0_1_ = 1;
      FUN_00408240(local_2044,(int)local_203c,0,0,*(undefined4 *)(local_2028 + 0x144),
                   *(undefined4 *)(local_2028 + 0x148));
      DeleteObject(local_202c);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00407000(local_2044);
      local_8 = 0xffffffff;
      FUN_00409d60((undefined4 *)local_203c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_0040d510(void *this,HDC param_1,char param_2)

{
  int iVar1;
  undefined4 local_74 [2];
  int local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60 [2];
  int local_58;
  int local_54;
  uint local_50;
  Image *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_31;
  void *local_30;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413cc0;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = this;
  if ((*(int *)((int)this + 0x140) != 0) && (*(int *)((int)this + 0xe0) != 0)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x54) + 0x18))(local_14);
    local_31 = iVar1 == 2;
    local_50 = (uint)(byte)local_31;
    if ((*(int *)((int)local_30 + 0x54) != 0) && ((bool)local_31)) {
      *(int *)((int)local_30 + 0x14c) = *(int *)((int)local_30 + 0x14c) + 1;
    }
    if (*(int *)((int)local_30 + 0x144) <= *(int *)((int)local_30 + 0x14c)) {
      *(undefined4 *)((int)local_30 + 0x14c) = 0x14;
    }
    local_58 = (*(int *)((int)local_30 + 0x9c) - *(int *)((int)local_30 + 0x148)) / 2 + -0x10;
    BitBlt(param_1,0x14,local_58,*(int *)((int)local_30 + 0x14c),*(int *)((int)local_30 + 0x148),
           *(HDC *)((int)local_30 + 0x140),
           *(int *)((int)local_30 + 0x144) - *(int *)((int)local_30 + 0x14c),0,0xcc0020);
    for (local_38 = *(int *)((int)local_30 + 0x14c);
        local_38 < *(int *)((int)local_30 + 0x98) + -0x14;
        local_38 = local_38 + *(int *)((int)local_30 + 0x144)) {
      if (*(int *)((int)local_30 + 0x144) < (*(int *)((int)local_30 + 0x98) + -0x14) - local_38) {
        local_54 = *(int *)((int)local_30 + 0x144);
      }
      else {
        local_54 = (*(int *)((int)local_30 + 0x98) + -0x14) - local_38;
      }
      local_6c = local_54;
      BitBlt(param_1,local_38,local_58,local_54,*(int *)((int)local_30 + 0x148),
             *(HDC *)((int)local_30 + 0x140),0,0,0xcc0020);
    }
    if (param_2 == '\0') {
      if (local_31 != '\0') {
        DAT_0041b62c = DAT_0041b62c + 1;
      }
      local_4c = *(Image **)((int)local_30 + 0xe0);
      local_44 = FUN_004072e0(local_4c);
      local_48 = FUN_00407320(local_4c);
      local_40 = (*(int *)((int)local_30 + 0x98) - local_44) / 2;
      local_3c = (*(int *)((int)local_30 + 0x9c) - local_48) / 2 + -0xb;
      if (local_31 != '\0') {
        *(int *)((int)local_30 + 0x150) = *(int *)((int)local_30 + 0x150) + 1;
      }
      if (0x167 < *(int *)((int)local_30 + 0x150)) {
        *(undefined4 *)((int)local_30 + 0x150) = 0;
      }
      FUN_00409af0();
      local_8 = 0;
      FUN_00409aa0(&local_68,(float)(local_44 / 2 + local_40),(float)(local_48 / 2 + local_3c));
      FUN_00409b50(local_60,local_68,local_64,0);
      FUN_00409b90(local_60,(float)*(int *)((int)local_30 + 0x150),0);
      FUN_00409b50(local_60,local_68 ^ 0x80000000,local_64 ^ 0x80000000,0);
      FUN_00409aa0(local_2c,(float)local_40,(float)local_3c);
      FUN_00409aa0(local_24,(float)(local_40 + local_44),(float)local_3c);
      FUN_00409aa0(local_1c,(float)local_40,(float)(local_3c + local_48));
      FUN_00409bd0(local_60,local_2c,3);
      FUN_00406fc0(param_1);
      local_8._0_1_ = 1;
      FUN_00409c00(local_74,(int)local_4c,local_2c,3);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00407000(local_74);
      local_8 = 0xffffffff;
      FUN_00409b30(local_60);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_0040d900(int param_1)

{
  HDC pHVar1;
  HBITMAP pHVar2;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  pHVar1 = CreateCompatibleDC(*(HDC *)(param_1 + 0x68));
  *(HDC *)(param_1 + 0x154) = pHVar1;
  SetBkMode(*(HDC *)(param_1 + 0x154),1);
  SetStretchBltMode(*(HDC *)(param_1 + 0x154),3);
  pHVar2 = CreateCompatibleBitmap(*(HDC *)(param_1 + 0x68),*(int *)(param_1 + 0x98),0x24);
  *(HBITMAP *)(param_1 + 0x158) = pHVar2;
  SelectObject(*(HDC *)(param_1 + 0x154),*(HGDIOBJ *)(param_1 + 0x158));
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = *(LONG *)(param_1 + 0x98);
  local_18.bottom = 0x32;
  FUN_00407ae0(*(HDC *)(param_1 + 0x154),&local_18,0xfbf8f7);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_0040d9e0(void *this,double param_1)

{
  if ((15.0 < param_1) && (*(int *)((int)this + 0x13c) != 0)) {
    SendMessageW(*(HWND *)((int)this + 0x13c),0x1401,0,0);
  }
  return;
}




/* Library Function - Single Match
    public: __thiscall std::_Smanip<__int64>::_Smanip<__int64>(void (__cdecl*)(class std::ios_base
   &,__int64),__int64)
   
   Library: Visual Studio */

_Smanip<__int64> * __thiscall
std::_Smanip<__int64>::_Smanip<__int64>
          (_Smanip<__int64> *this,_func_void_ios_base_ptr___int64 *param_1,__int64 param_2)

{
  undefined4 in_stack_00000008;
  
  *(_func_void_ios_base_ptr___int64 **)this = param_1;
  *(undefined4 *)(this + 4) = in_stack_00000008;
  *(undefined4 *)(this + 8) = (undefined4)param_2;
  return this;
}




/* Library Function - Single Match
    public: virtual class CRect __thiscall CCheckListBox::OnGetCheckPosition(class CRect,class
   CRect)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

CCheckListBox * __thiscall
CCheckListBox::OnGetCheckPosition
          (CCheckListBox *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_5;
  return this;
}




undefined4 * __thiscall FUN_0040da90(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (undefined4 *)this;
}




int __thiscall FUN_0040dab0(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_0040dae0(this);
  if (uVar1 <= param_1) {
    FUN_0040e030();
  }
  piVar2 = (int *)FUN_00403610(this);
  return *piVar2 + param_1 * 4;
}




int __fastcall FUN_0040dae0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)Bx(param_1);
  piVar2 = (int *)FUN_00403610(param_1);
  return *piVar1 - *piVar2 >> 2;
}




void __fastcall FUN_0040db10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004136a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00403ad0(param_1);
  Bx(param_1);
  FUN_00403610(param_1);
  FUN_00404150(param_1);
  puVar2 = (undefined4 *)FUN_00403610(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)Bx(param_1);
  *puVar2 = uVar1;
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_0040dba0(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040e040(param_1);
  ExceptionList = local_10;
  return;
}




bool __thiscall FUN_0040dbe0(void *this,int *param_1)

{
  bool local_8;
  
  local_8 = FUN_0040dc20(this,param_1);
  local_8 = !local_8;
  return local_8;
}




bool __thiscall FUN_0040dc20(void *this,int *param_1)

{
                    /* WARNING: Load size is inaccurate */
  return *this == *param_1;
}




void __fastcall FUN_0040dc50(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040e0f0(param_1);
  FUN_0040e010(uVar1);
  return;
}




undefined4 * __thiscall FUN_0040dc70(void *this,undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined1 local_28 [4];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 *local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  FUN_0040e210(this,&local_c,param_2);
  piVar2 = (int *)FUN_0040dd10(local_8,local_24);
  bVar1 = FUN_0040dc20(&local_c,piVar2);
  if (!bVar1) {
    local_18 = FUN_004037d0(local_8);
    local_14 = (uint *)FUN_0040e1a0(local_c);
    bVar1 = FUN_0040e280(param_2,local_14);
    if (!bVar1) {
      local_10 = &local_1c;
      goto LAB_0040dcf3;
    }
  }
  local_10 = (undefined4 *)FUN_0040dd10(local_8,local_28);
LAB_0040dcf3:
  *param_1 = *local_10;
  return param_1;
}




void * __thiscall FUN_0040dd10(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004136a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0040e130(this);
  addressof<>(puVar1);
  FUN_0040e110(param_1,*puVar1);
  ExceptionList = local_10;
  return param_1;
}




void * __thiscall FUN_0040dd80(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004136a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0040e130(this);
  addressof<>(puVar1);
  puVar1 = (undefined4 *)FUN_00406ac0(puVar1);
  FUN_0040e110(param_1,*puVar1);
  ExceptionList = local_10;
  return param_1;
}




void __fastcall FUN_0040de00(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040e1c0(param_1);
  FUN_0040e150(param_1);
  ExceptionList = local_10;
  return;
}




int FUN_0040de50(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_10 [8];
  void *local_8;
  
  uVar1 = addressof<>(param_1);
  piVar2 = (int *)FUN_0040f430(local_8,local_10,uVar1);
  iVar3 = FUN_0040dc50(piVar2);
  return iVar3 + 4;
}




void * __fastcall FUN_0040de90(void *param_1)

{
  undefined1 local_5;
  
  FUN_0040e260(param_1,&local_5);
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::resize(unsigned int,unsigned short)
    public: void __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::resize(unsigned int,wchar_t)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __thiscall FID_conflict_resize(void *this,uint param_1,wchar_t param_2)

{
  uint uVar1;
  
  uVar1 = FID_conflict_size(this);
  if (uVar1 < param_1) {
    FID_conflict_append(this,param_1 - uVar1,param_2);
  }
  else {
    FUN_0040e2e0(this,param_1);
  }
  return;
}




void __thiscall FUN_0040df00(void *this,wchar_t *param_1)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)this,param_1);
  return;
}




void * __thiscall FUN_0040df20(void *this,undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)addressof<>(param_1);
  if (this != pvVar1) {
    FID_conflict__Tidy_deallocate(this);
    uVar2 = FUN_004037d0(param_1);
    FID_conflict__Move_alloc(this,uVar2);
    uVar2 = addressof<>(param_1);
    FUN_0040e440(this,uVar2);
  }
  ExceptionList = local_10;
  return this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >(void)
    public: __thiscall std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void)
   
   Library: Visual Studio 2017 Release */

int __fastcall basic_string<>(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>(param_1);
  FID_conflict__Tidy_init(param_1);
  ExceptionList = local_10;
  return param_1;
}




void __cdecl FUN_0040e010(undefined4 param_1)

{
  addressof<>(param_1);
  return;
}




void FUN_0040e030(void)

{
  std::_Xout_of_range("invalid vector<T> subscript");
  return;
}




void __fastcall FUN_0040e040(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00403ad0(param_1);
  piVar1 = (int *)FUN_00403610(param_1);
  if (*piVar1 != 0) {
    Bx(param_1);
    FUN_00403610(param_1);
    FUN_00404150(param_1);
    FUN_004037d0(param_1);
    iVar2 = FUN_0040e480(param_1);
    puVar3 = (undefined4 *)FUN_00403610(param_1);
    FUN_0040e4b0((void *)*puVar3,iVar2);
    puVar3 = (undefined4 *)FUN_00403610(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)Bx(param_1);
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_00404120(param_1);
    *puVar3 = 0;
  }
  return;
}




void __fastcall FUN_0040e0f0(int *param_1)

{
  FUN_0040e4d0(param_1);
  return;
}




void * __thiscall FUN_0040e110(void *this,undefined4 param_1)

{
  _Vector_iterator<>(this,param_1);
  return this;
}




void __fastcall FUN_0040e130(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = Bxty(param_1);
  Bxty(uVar1);
  return;
}




void __fastcall FUN_0040e150(void *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0040e130(param_1);
  FUN_0040e510(param_1,(void *)*puVar1);
  ExceptionList = local_10;
  return;
}




void FUN_0040e1a0(int param_1)

{
  FUN_0040e580(param_1 + 0x10);
  return;
}




void __fastcall FUN_0040e1c0(void *param_1)

{
  undefined4 *puVar1;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_0040dd10(param_1,local_1c);
  local_14 = *puVar1;
  local_c = local_14;
  puVar1 = (undefined4 *)FUN_0040dd80(local_8,local_20);
  local_18 = *puVar1;
  local_10 = local_18;
  FUN_0040e5a0(local_8,local_24,local_18);
  return;
}




void * __thiscall FUN_0040e210(void *this,void *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0040e130(this);
  addressof<>(uVar1);
  puVar2 = FUN_0040f460(this,param_2);
  FUN_0040e110(param_1,puVar2);
  return param_1;
}




void * __thiscall FUN_0040e260(void *this,undefined4 param_1)

{
  FUN_0040e540(this,param_1);
  return this;
}




bool FUN_0040e280(uint *param_1,uint *param_2)

{
  return *param_1 < *param_2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::_Copy_alloc(struct std::_Wrap_alloc<class std::allocator<char> > const
   &)
    public: void __thiscall std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_Copy_alloc(struct std::_Wrap_alloc<class
   std::allocator<unsigned short> > const &)
    public: void __thiscall std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_Copy_alloc(struct std::_Wrap_alloc<class std::allocator<wchar_t> >
   const &)
    public: void __thiscall std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::_Move_alloc(struct std::_Wrap_alloc<class std::allocator<char> > &)
     8 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __thiscall FID_conflict__Move_alloc(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004037d0(this);
  _Pocma<>(uVar1,param_1);
  return;
}




void __thiscall FUN_0040e2e0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 local_6;
  
  puVar1 = (undefined4 *)FUN_004037d0(this);
  local_6 = 0;
  puVar2 = Myptr(puVar1);
  puVar1[4] = param_1;
  assign((undefined2 *)((int)puVar2 + param_1 * 2),&local_6);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::append(unsigned
   int,unsigned short)
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::append(unsigned int,wchar_t)
   
   Library: Visual Studio 2017 Release */

void * __thiscall FID_conflict_append(void *this,uint param_1,wchar_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 local_8;
  undefined1 local_5;
  
  puVar2 = (undefined4 *)FUN_004037d0(this);
  iVar1 = puVar2[4];
  if ((uint)(puVar2[5] - iVar1) < param_1) {
    local_5 = 0;
    this = _Reallocate_grow_by<>(this,param_1,0,param_1,param_2);
  }
  else {
    puVar2[4] = iVar1 + param_1;
    puVar2 = Myptr(puVar2);
    assign((wchar_t *)((int)puVar2 + iVar1 * 2),param_1,param_2);
    local_8 = 0;
    assign((undefined2 *)((int)puVar2 + (iVar1 + param_1) * 2),&local_8);
  }
  return this;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_2b70dce17ee1239412236ff821cd936e>::operator()(unsigned short *
   const,unsigned short const * const,unsigned int,unsigned int,unsigned short)const 
    public: void __thiscall <lambda_c3135ae829aeedc0a8af1bd1e887c66a>::operator()(wchar_t *
   const,wchar_t const * const,unsigned int,unsigned int,wchar_t)const 
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__(void *param_1,void *param_2,int param_3,size_t param_4,wchar_t param_5)

{
  undefined2 local_6;
  
  copy(param_1,param_2,param_3);
  assign((wchar_t *)((int)param_1 + param_3 * 2),param_4,param_5);
  local_6 = 0;
  assign((undefined2 *)((int)param_1 + (param_3 + param_4) * 2),&local_6);
  return;
}




void __thiscall FUN_0040e440(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = addressof<>(param_1);
  FUN_00404450(this,uVar1);
  return;
}




int __fastcall FUN_0040e480(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_00404120(param_1);
  piVar2 = (int *)FUN_00403610(param_1);
  return *piVar1 - *piVar2 >> 2;
}




void FUN_0040e4b0(void *param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 << 2);
  return;
}




int __fastcall FUN_0040e4d0(int *param_1)

{
  return *param_1 + 0x10;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<unsigned char> > > >
   >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<unsigned char> > *,struct std::_Container_base0 const *)
    public: __thiscall std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > > > >(class std::shared_ptr<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState *> > > *,struct std::_Container_base0 const *)
   
   Library: Visual Studio 2012 Release */

void * __thiscall _Vector_iterator<>(void *this,undefined4 param_1)

{
  FID_conflict__Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_std::shared_ptr<struct_Concurrency::details::_Task_impl<struct_std::pair<unsigned_char,class_Concurrency::details::_CancellationTokenState*>_>_>_>_>_>
            (this,param_1);
  return this;
}




void __thiscall FUN_0040e510(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040e130(this);
  FUN_0040f620(uVar1,param_1);
  return;
}




void * __thiscall FUN_0040e540(void *this,undefined4 param_1)

{
  byte local_6;
  undefined1 local_5;
  
  FUN_0040f6c0(this,(uint)local_6,param_1,&local_5);
  FUN_0040e6f0(this);
  return this;
}




void FUN_0040e580(undefined4 param_1)

{
  addressof<>(param_1);
  return;
}




/* WARNING: Variable defined which should be unmapped: param_2 */

void * __thiscall FUN_0040e5a0(void *param_1,void *param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  local_8 = param_1;
  piVar2 = (int *)FUN_0040dd80(param_1,local_14);
  bVar1 = FUN_0040dc20(&param_3,piVar2);
  if (bVar1) {
    piVar2 = (int *)FUN_0040dd10(local_8,local_18);
    bVar1 = FUN_0040dc20(&stack0x0000000c,piVar2);
    if (bVar1) {
      FUN_0040e720(local_8);
      FUN_0040dd80(local_8,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_0040dbe0(&param_3,(int *)&stack0x0000000c), bVar1) {
    piVar2 = FUN_0040e6c0(&param_3,&local_1c);
    FUN_0040e7b0(local_8,local_20,(int *)*piVar2);
  }
  uVar3 = FUN_0040e130(local_8);
  local_c = addressof<>(uVar3);
  local_10 = param_3;
  FUN_0040e110(param_2,param_3);
  return param_2;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __cdecl std::_WChar_traits<unsigned short>::assign(unsigned
   short * const,unsigned int,unsigned short)
    public: static wchar_t * __cdecl std::_WChar_traits<wchar_t>::assign(wchar_t * const,unsigned
   int,wchar_t)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl assign(wchar_t *param_1,size_t param_2,wchar_t param_3)

{
  _wmemset(param_1,param_3,param_2);
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
  FUN_004011c0();
  return (undefined4 *)this;
}




int * __thiscall FUN_0040e6c0(void *this,int *param_1)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *this;
  FUN_0040e960((int *)this);
  *param_1 = iVar1;
  return param_1;
}




void __fastcall FUN_0040e6f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0040ee00(param_1);
  puVar2 = (undefined4 *)FUN_0040e130(param_1);
  *puVar2 = uVar1;
  return;
}




void __fastcall FUN_0040e720(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_0040e130(param_1);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)FUN_0040ede0(piVar2);
  FUN_0040ef00(param_1,(undefined4 *)*puVar3);
  piVar4 = (int *)FUN_0040ede0(piVar2);
  *piVar4 = iVar1;
  piVar4 = (int *)FUN_00406ac0(piVar2);
  *piVar4 = iVar1;
  piVar4 = (int *)FUN_0040edc0(piVar2);
  *piVar4 = iVar1;
  piVar2[1] = 0;
  ExceptionList = local_10;
  return;
}




void * __thiscall FUN_0040e7b0(void *this,void *param_1,int *param_2)

{
  int *local_18;
  void *local_14;
  undefined4 local_10;
  int *local_c;
  void *local_8;
  
  local_8 = this;
  local_14 = (void *)FUN_0040e130(this);
  local_18 = param_2;
  FUN_0040e960((int *)&local_18);
  local_c = FUN_0040e980(local_14,param_2);
  local_10 = FUN_0040e130(local_8);
  addressof<>(local_c + 4);
  destroy<>();
  FUN_0040f620(local_10,local_c);
  addressof<>(local_14);
  FUN_0040e110(param_1,local_18);
  return param_1;
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
  
  puVar2 = (undefined4 *)FUN_004037d0(this);
  iVar1 = puVar2[4];
  if ((uint)(puVar2[5] - iVar1) < param_2) {
    local_5 = 0;
    this = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           _Reallocate_grow_by<>(this,param_2,0,param_1,param_2);
  }
  else {
    puVar2[4] = iVar1 + param_2;
    puVar2 = Myptr(puVar2);
    move((void *)((int)puVar2 + iVar1 * 2),param_1,param_2);
    local_8 = 0;
    ::assign((undefined2 *)((int)puVar2 + (iVar1 + param_2) * 2),&local_8);
  }
  return this;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __thiscall <lambda_2fb699096920f2dc628cb0826b07831d>::operator()(wchar_t *
   const,wchar_t const * const,unsigned int,wchar_t const * const,unsigned int)const 
    public: void __thiscall <lambda_68b8a09d57a0de6c0cf526835bc8b658>::operator()(unsigned short *
   const,unsigned short const * const,unsigned int,unsigned short const * const,unsigned int)const 
   
   Library: Visual Studio 2017 Release */

void FID_conflict_operator__(void *param_1,void *param_2,int param_3,void *param_4,int param_5)

{
  undefined2 local_6;
  
  copy(param_1,param_2,param_3);
  copy((void *)((int)param_1 + param_3 * 2),param_4,param_5);
  local_6 = 0;
  assign((undefined2 *)((int)param_1 + (param_3 + param_5) * 2),&local_6);
  return;
}




int * __fastcall FUN_0040e960(int *param_1)

{
  FUN_0040ef80(param_1);
  return param_1;
}




int * __thiscall FUN_0040e980(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_20;
  int *local_1c;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = param_1;
  FUN_0040e960((int *)&param_1);
  local_8 = piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    if (*(char *)(piVar1[2] + 0xd) == '\0') {
      local_8 = param_1;
      local_10 = (int *)param_1[2];
    }
    else {
      local_10 = (int *)*piVar1;
    }
  }
  else {
    local_10 = (int *)piVar1[2];
  }
  if (local_8 == piVar1) {
    local_c = (int *)piVar1[1];
    if (*(char *)((int)local_10 + 0xd) == '\0') {
      local_10[1] = (int)local_c;
    }
    piVar2 = (int *)FUN_0040ede0((int *)this);
    if ((int *)*piVar2 == piVar1) {
      puVar3 = (undefined4 *)FUN_0040ede0((int *)this);
      *puVar3 = local_10;
    }
    else if ((int *)*local_c == piVar1) {
      *local_c = (int)local_10;
    }
    else {
      local_c[2] = (int)local_10;
    }
    piVar2 = (int *)FUN_00406ac0((undefined4 *)this);
    if ((int *)*piVar2 == piVar1) {
      local_1c = local_c;
      if (*(char *)((int)local_10 + 0xd) == '\0') {
        local_1c = FUN_0040f130(local_10);
      }
      piVar2 = (int *)FUN_00406ac0((undefined4 *)this);
      *piVar2 = (int)local_1c;
    }
    piVar2 = (int *)FUN_0040edc0((int *)this);
    if ((int *)*piVar2 == piVar1) {
      local_20 = local_c;
      if (*(char *)((int)local_10 + 0xd) == '\0') {
        local_20 = (int *)FUN_0040f150((int)local_10);
      }
      piVar2 = (int *)FUN_0040edc0((int *)this);
      *piVar2 = (int)local_20;
    }
  }
  else {
    *(int **)(*piVar1 + 4) = local_8;
    *local_8 = *piVar1;
    if (local_8 == (int *)piVar1[2]) {
      local_c = local_8;
    }
    else {
      local_c = (int *)local_8[1];
      if (*(char *)((int)local_10 + 0xd) == '\0') {
        local_10[1] = (int)local_c;
      }
      *local_c = (int)local_10;
      local_8[2] = piVar1[2];
      *(int **)(piVar1[2] + 4) = local_8;
    }
    piVar2 = (int *)FUN_0040ede0((int *)this);
    if ((int *)*piVar2 == piVar1) {
      puVar3 = (undefined4 *)FUN_0040ede0((int *)this);
      *puVar3 = local_8;
    }
    else if (*(int **)piVar1[1] == piVar1) {
      *(int **)piVar1[1] = local_8;
    }
    else {
      *(int **)(piVar1[1] + 8) = local_8;
    }
    local_8[1] = piVar1[1];
    std::swap<char,void>((char *)(local_8 + 3),(char *)(piVar1 + 3));
  }
  if ((char)piVar1[3] != '\x01') {
LAB_0040ed98:
    if (*(int *)((int)this + 4) != 0) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
    return piVar1;
  }
LAB_0040eba7:
  piVar2 = (int *)FUN_0040ede0((int *)this);
  if ((local_10 == (int *)*piVar2) || ((char)local_10[3] != '\x01')) goto LAB_0040ed91;
  if (local_10 == (int *)*local_c) {
    local_8 = (int *)local_c[2];
    if ((char)local_8[3] == '\0') {
      *(undefined1 *)(local_8 + 3) = 1;
      *(undefined1 *)(local_c + 3) = 0;
      FUN_0040f090(this,(int)local_c);
      local_8 = (int *)local_c[2];
    }
    if (*(char *)((int)local_8 + 0xd) == '\0') {
      if ((*(char *)(*local_8 + 0xc) != '\x01') || (*(char *)(local_8[2] + 0xc) != '\x01')) {
        if (*(char *)(local_8[2] + 0xc) == '\x01') {
          *(undefined1 *)(*local_8 + 0xc) = 1;
          *(undefined1 *)(local_8 + 3) = 0;
          FUN_0040eff0(this,local_8);
          local_8 = (int *)local_c[2];
        }
        *(char *)(local_8 + 3) = (char)local_c[3];
        *(undefined1 *)(local_c + 3) = 1;
        *(undefined1 *)(local_8[2] + 0xc) = 1;
        FUN_0040f090(this,(int)local_c);
LAB_0040ed91:
        *(undefined1 *)(local_10 + 3) = 1;
        goto LAB_0040ed98;
      }
      *(undefined1 *)(local_8 + 3) = 0;
    }
  }
  else {
    local_8 = (int *)*local_c;
    if ((char)local_8[3] == '\0') {
      *(undefined1 *)(local_8 + 3) = 1;
      *(undefined1 *)(local_c + 3) = 0;
      FUN_0040eff0(this,local_c);
      local_8 = (int *)*local_c;
    }
    if (*(char *)((int)local_8 + 0xd) == '\0') {
      if ((*(char *)(local_8[2] + 0xc) != '\x01') || (*(char *)(*local_8 + 0xc) != '\x01')) {
        if (*(char *)(*local_8 + 0xc) == '\x01') {
          *(undefined1 *)(local_8[2] + 0xc) = 1;
          *(undefined1 *)(local_8 + 3) = 0;
          FUN_0040f090(this,(int)local_8);
          local_8 = (int *)*local_c;
        }
        *(char *)(local_8 + 3) = (char)local_c[3];
        *(undefined1 *)(local_c + 3) = 1;
        *(undefined1 *)(*local_8 + 0xc) = 1;
        FUN_0040eff0(this,local_c);
        goto LAB_0040ed91;
      }
      *(undefined1 *)(local_8 + 3) = 0;
    }
  }
  local_10 = local_c;
  local_c = (int *)local_c[1];
  goto LAB_0040eba7;
}




int __fastcall FUN_0040edc0(int *param_1)

{
  return *param_1 + 8;
}




int __fastcall FUN_0040ede0(int *param_1)

{
  return *param_1 + 4;
}




void __fastcall FUN_0040ee00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uStack_30;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413cf0;
  local_10 = ExceptionList;
  uStack_30 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  uVar1 = FUN_0040e130(param_1);
  local_18 = allocate(1);
  local_8 = 0;
  piVar3 = &local_18;
  uVar2 = addressof<>(local_18);
  construct<>(uVar1,uVar2,piVar3);
  piVar3 = &local_18;
  uVar2 = addressof<>(local_18 + 4);
  construct<>(uVar1,uVar2,piVar3);
  piVar3 = &local_18;
  uVar2 = addressof<>(local_18 + 8);
  construct<>(uVar1,uVar2,piVar3);
  FUN_0040eeca();
  return;
}




void Catch_All_0040eead(void)

{
  int unaff_EBP;
  
  FUN_00404290(*(void **)(unaff_EBP + -0x14),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_0040eeca(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 1;
  *(undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0xd) = 1;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}




void __thiscall FUN_0040ef00(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_8;
  
  local_8 = param_1;
  while (*(char *)((int)local_8 + 0xd) == '\0') {
    FUN_0040ef00(this,(undefined4 *)local_8[2]);
    puVar1 = (undefined4 *)*local_8;
    uVar2 = FUN_0040e130(this);
    addressof<>(local_8 + 4);
    destroy<>();
    FUN_0040f620(uVar2,local_8);
    local_8 = puVar1;
  }
  return;
}




int * __fastcall FUN_0040ef80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(*(int *)(*param_1 + 8) + 0xd) == '\0') {
    piVar2 = FUN_0040f130(*(int **)(*param_1 + 8));
    *param_1 = (int)piVar2;
  }
  else {
    while ((iVar1 = *(int *)(*param_1 + 4), *(char *)(iVar1 + 0xd) == '\0' &&
           (*param_1 == *(int *)(iVar1 + 8)))) {
      *param_1 = iVar1;
    }
    *param_1 = iVar1;
  }
  return param_1;
}




void __thiscall FUN_0040eff0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
                    /* WARNING: Load size is inaccurate */
  if (param_1 == *(int **)(*this + 4)) {
                    /* WARNING: Load size is inaccurate */
    *(int *)(*this + 4) = iVar1;
  }
  else if (param_1 == *(int **)(param_1[1] + 8)) {
    *(int *)(param_1[1] + 8) = iVar1;
  }
  else {
    *(int *)param_1[1] = iVar1;
  }
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}




void __thiscall FUN_0040f090(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0xd) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
                    /* WARNING: Load size is inaccurate */
  if (param_1 == *(int *)(*this + 4)) {
                    /* WARNING: Load size is inaccurate */
    *(int **)(*this + 4) = piVar1;
  }
  else if (param_1 == **(int **)(param_1 + 4)) {
    **(int **)(param_1 + 4) = (int)piVar1;
  }
  else {
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar1;
  }
  *piVar1 = param_1;
  *(int **)(param_1 + 4) = piVar1;
  return;
}




int * __cdecl FUN_0040f130(int *param_1)

{
  for (; *(char *)(*param_1 + 0xd) == '\0'; param_1 = (int *)*param_1) {
  }
  return param_1;
}




int __cdecl FUN_0040f150(int param_1)

{
  while (*(char *)(*(int *)(param_1 + 8) + 0xd) == '\0') {
    param_1 = *(int *)(param_1 + 8);
  }
  return param_1;
}




undefined4 __cdecl FUN_0040f180(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  destroy<>();
  FUN_0040f200(&local_8,&stack0x00000008);
  FUN_0040f200(&local_c,&stack0x0000000c);
  while( true ) {
    bVar1 = FUN_0040dbe0(&local_8,&local_c);
    if (!bVar1) break;
    puVar2 = (undefined4 *)FUN_0040e0f0(&local_8);
    FUN_0040fa90(local_14,puVar2);
    FUN_0040f980(&stack0x00000010,(int)local_14);
    FUN_0040e960(&local_8);
  }
  return param_1;
}




void * __cdecl FUN_0040f200(void *param_1,void *param_2)

{
  FUN_0040f9d0(param_2,param_1);
  return param_1;
}




void * __cdecl
FUN_0040f220(void *param_1,
            basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
            *param_2,wchar_t *param_3)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  undefined4 uVar2;
  
  pbVar1 = std::
           basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
           append(param_2,param_3);
  uVar2 = addressof<>(pbVar1);
  FUN_00404e40(param_1,uVar2);
  return param_1;
}




undefined4 * __cdecl FUN_0040f260(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  destroy<>();
  FUN_0040f200(&local_8,&param_2);
  FUN_0040f200(&local_c,&stack0x0000000c);
  while (bVar1 = FUN_0040dbe0(&local_8,&local_c), bVar1) {
    puVar3 = (undefined4 *)FUN_0040e0f0(&local_8);
    FUN_0040fa90(local_14,puVar3);
    cVar2 = FUN_0040f930(&stack0x00000010,(int)local_14);
    if (cVar2 != '\0') break;
    FUN_0040e960(&local_8);
  }
  FUN_0040fac0(&param_2,&local_8);
  *param_1 = param_2;
  return param_1;
}




undefined4 * __cdecl
FUN_0040f300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  destroy<>();
  FUN_0040f200(&local_8,&param_2);
  FUN_0040f200(&local_c,&param_3);
  while( true ) {
    bVar1 = FUN_0040dbe0(&local_8,&local_c);
    if (!bVar1) break;
    puVar2 = (undefined4 *)FUN_0040e0f0(&local_8);
    FUN_0040fa90(local_14,puVar2);
    FUN_0040f8d0(&param_4,(int)local_14);
    FUN_0040e960(&local_8);
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return param_1;
}




undefined4 * __cdecl
FUN_0040f3a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  int local_c;
  int local_8;
  
  destroy<>();
  FUN_0040f200(&local_8,&param_2);
  FUN_0040f200(&local_c,&param_3);
  while( true ) {
    bVar1 = FUN_0040dbe0(&local_8,&local_c);
    if (!bVar1) break;
    puVar2 = (undefined4 *)FUN_0040e0f0(&local_8);
    FUN_0040fa90(local_14,puVar2);
    FUN_0040f870(&param_4,(int)local_14);
    FUN_0040e960(&local_8);
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  return param_1;
}




void * __thiscall FUN_0040f430(void *this,void *param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)addressof<>(param_2);
  FUN_0040fae0(this,param_1,puVar1);
  return param_1;
}




undefined4 * __thiscall FUN_0040f460(void *this,uint *param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *local_10;
  undefined4 *local_8;
  
  piVar2 = (int *)FUN_0040e130(this);
  local_10 = (undefined4 *)*piVar2;
  local_8 = (undefined4 *)local_10[1];
  while (*(char *)((int)local_8 + 0xd) == '\0') {
    puVar4 = param_1;
    puVar3 = (uint *)FUN_0040e1a0((int)local_8);
    cVar1 = FUN_0040fa30(this,puVar3,puVar4);
    if (cVar1 == '\0') {
      local_10 = local_8;
      local_8 = (undefined4 *)*local_8;
    }
    else {
      local_8 = (undefined4 *)local_8[2];
    }
  }
  return local_10;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> &,class
   std::allocator<char> &)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> &,class std::allocator<unsigned short> &)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &,class
   std::allocator<wchar_t> &)
   
   Library: Visual Studio 2017 Release */

void __cdecl _Pocma<>(undefined4 param_1,undefined4 param_2)

{
  _Pocma<>(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __thiscall std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Reallocate_grow_by<class <lambda_2b70dce17ee1239412236ff821cd936e>,unsigned int,unsigned
   short>(unsigned int,class <lambda_2b70dce17ee1239412236ff821cd936e>,unsigned int,unsigned short)
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __thiscall std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
   <lambda_c3135ae829aeedc0a8af1bd1e887c66a>,unsigned int,wchar_t>(unsigned int,class
   <lambda_c3135ae829aeedc0a8af1bd1e887c66a>,unsigned int,wchar_t)
   
   Library: Visual Studio 2017 Release */

void * __thiscall
_Reallocate_grow_by<>(void *this,uint param_1,undefined4 param_2,size_t param_3,wchar_t param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_c = this;
  local_8 = (undefined4 *)FUN_004037d0(this);
  local_10 = local_8[4];
  uVar2 = FID_conflict_max_size(local_c);
  if (uVar2 - local_10 < param_1) {
    FUN_00404d50();
  }
  uVar8 = local_10 + param_1;
  uVar2 = local_8[5];
  uVar3 = FID_conflict__Calculate_growth(local_c,uVar8);
  uVar4 = FUN_004037d0(local_c);
  local_14 = allocate(uVar3 + 1);
  FUN_00401200();
  local_8[4] = uVar8;
  local_8[5] = uVar3;
  pvVar5 = (void *)addressof<>(local_14);
  if (uVar2 < 8) {
    FID_conflict_operator__(pvVar5,local_8,local_10,param_3,param_4);
    puVar10 = &local_14;
    uVar7 = addressof<>(local_8);
    construct<>(uVar4,uVar7,puVar10);
  }
  else {
    pvVar1 = (void *)*local_8;
    iVar9 = local_10;
    pvVar6 = (void *)addressof<>(pvVar1);
    FID_conflict_operator__(pvVar5,pvVar6,iVar9,param_3,param_4);
    deallocate(pvVar1,uVar2 + 1);
    *local_8 = local_14;
  }
  return local_c;
}




void __cdecl FUN_0040f620(undefined4 param_1,void *param_2)

{
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  addressof<>(param_2);
  destroy<>();
  addressof<>((int)param_2 + 4);
  destroy<>();
  addressof<>((int)param_2 + 8);
  destroy<>();
  FUN_0040fa10(&local_11,param_2,1);
  ExceptionList = local_10;
  return;
}




undefined4 * __thiscall
FUN_0040f6c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  addressof<>(param_2);
  addressof<>(param_3);
  _Compressed_pair<><>((undefined4 *)this);
  return (undefined4 *)this;
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
_Reallocate_grow_by<>(void *this,uint param_1,undefined4 param_2,void *param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined4 *local_8;
  
  local_c = this;
  local_8 = (undefined4 *)FUN_004037d0(this);
  local_10 = local_8[4];
  uVar2 = FID_conflict_max_size(local_c);
  if (uVar2 - local_10 < param_1) {
    FUN_00404d50();
  }
  uVar8 = local_10 + param_1;
  uVar2 = local_8[5];
  uVar3 = FID_conflict__Calculate_growth(local_c,uVar8);
  uVar4 = FUN_004037d0(local_c);
  local_14 = allocate(uVar3 + 1);
  FUN_00401200();
  local_8[4] = uVar8;
  local_8[5] = uVar3;
  pvVar5 = (void *)addressof<>(local_14);
  if (uVar2 < 8) {
    FID_conflict_operator__(pvVar5,local_8,local_10,param_3,param_4);
    puVar10 = &local_14;
    uVar7 = addressof<>(local_8);
    construct<>(uVar4,uVar7,puVar10);
  }
  else {
    pvVar1 = (void *)*local_8;
    iVar9 = local_10;
    pvVar6 = (void *)addressof<>(pvVar1);
    FID_conflict_operator__(pvVar5,pvVar6,iVar9,param_3,param_4);
    deallocate(pvVar1,uVar2 + 1);
    *local_8 = local_14;
  }
  return local_c;
}




/* Library Function - Single Match
    void __cdecl std::swap<char,void>(char &,char &)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __cdecl std::swap<char,void>(char *param_1,char *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 uStack_8;
  
  puVar1 = (undefined1 *)addressof<>(param_1);
  uStack_8 = CONCAT13(*puVar1,(undefined3)uStack_8);
  pcVar2 = (char *)addressof<>(param_2);
  *param_1 = *pcVar2;
  pcVar2 = (char *)addressof<>((int)&uStack_8 + 3);
  *param_2 = *pcVar2;
  return;
}




undefined4 __thiscall FUN_0040f870(void *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((*(int *)(param_1 + 4) != 0) &&
     (uVar2 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0x14), uVar2 == 0)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
                    /* WARNING: Load size is inaccurate */
    uVar2 = (*pcVar1)(*this,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),pcVar1,
                      *(undefined4 *)(param_1 + 4));
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}




undefined4 __thiscall FUN_0040f8d0(void *this,int param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x1c);
                    /* WARNING: Load size is inaccurate */
    param_1 = (*pcVar1)(*this,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
                        *(undefined4 *)((int)this + 0xc),pcVar1,*(undefined4 *)(param_1 + 4));
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}




undefined1 __thiscall FUN_0040f930(void *this,int param_1)

{
  code *pcVar1;
  undefined1 local_5;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_5 = 0;
  }
  else {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x28);
                    /* WARNING: Load size is inaccurate */
    local_5 = (*pcVar1)(*this,*(undefined4 *)((int)this + 4),pcVar1,*(undefined4 *)(param_1 + 4));
  }
  return local_5;
}




undefined4 __thiscall FUN_0040f980(void *this,int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = (**(code **)**(undefined4 **)(param_1 + 4))(1,this);
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}




void * __thiscall FUN_0040f9d0(void *this,void *param_1)

{
  FUN_004011d0();
                    /* WARNING: Load size is inaccurate */
  _Vector_iterator<>(param_1,*this);
  return param_1;
}




void __cdecl FUN_0040fa10(undefined4 param_1,void *param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0x18);
  return;
}




void __thiscall FUN_0040fa30(void *this,uint *param_1,uint *param_2)

{
  FUN_004037d0(this);
  FUN_0040e280(param_1,param_2);
  return;
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
  
  uVar1 = _WChar_traits<wchar_t>::length(param_1);
  uVar1 = addressof<>(uVar1);
  pbVar2 = append(this,param_1,uVar1);
  return pbVar2;
}




undefined4 * __thiscall FUN_0040fa90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (undefined4 *)this;
}




void __cdecl FUN_0040fac0(void *param_1,undefined4 *param_2)

{
  FUN_00407180(param_1,*param_2);
  return;
}




void * __thiscall FUN_0040fae0(void *this,void *param_1,uint *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined4 *local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = this;
  FUN_0040e210(this,&local_10,param_2);
  piVar2 = (int *)FUN_0040dd10(local_c,local_30);
  bVar1 = FUN_0040dc20(&local_10,piVar2);
  if (!bVar1) {
    local_18 = FUN_004037d0(local_c);
    local_14 = (uint *)FUN_0040e1a0((int)local_10);
    bVar1 = FUN_0040e280(param_2,local_14);
    if (!bVar1) {
      local_6 = 0;
      FUN_0040fcd0(param_1,&local_10,&local_6);
      return param_1;
    }
  }
  local_5 = 1;
  local_24 = FUN_0040fc40(&local_7);
  uVar3 = addressof<>(param_2);
  local_28 = FUN_0040fc20(local_34,uVar3);
  local_1c = local_10;
  local_20 = local_10;
  local_2c = local_10;
  puVar5 = &local_5;
  pvVar4 = FUN_0040fc50(local_c,local_38,local_10,&PTR_004179d0,local_28,local_24);
  FUN_0040fcd0(param_1,pvVar4,puVar5);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Pocma<class std::allocator<char> >(class std::allocator<char> &,class
   std::allocator<char> &,struct std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<unsigned short> >(class std::allocator<unsigned
   short> &,class std::allocator<unsigned short> &,struct std::integral_constant<bool,1>)
    void __cdecl std::_Pocma<class std::allocator<wchar_t> >(class std::allocator<wchar_t> &,class
   std::allocator<wchar_t> &,struct std::integral_constant<bool,1>)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl _Pocma<>(undefined4 param_1,undefined4 param_2)

{
  addressof<>(param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall std::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<class
   std::allocator<char>,class std::_String_val<struct std::_Simple_types<char> >,1><>(struct
   std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t)
    public: __thiscall std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 * __fastcall _Compressed_pair<><>(undefined4 *param_1)

{
  Bxty(param_1);
  FUN_00405ba0(param_1);
  return param_1;
}




void * __cdecl FUN_0040fc20(void *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = addressof<>(param_2);
  FUN_0040fd10(param_1,uVar1);
  return param_1;
}




undefined4 __cdecl FUN_0040fc40(undefined4 param_1)

{
  Bxty(param_1);
  return param_1;
}




void * __thiscall
FUN_0040fc50(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  uVar1 = addressof<>(param_5);
  uVar2 = addressof<>(param_4);
  uVar3 = addressof<>(param_3);
  pvVar4 = (void *)FUN_0040fd80(this,uVar3,uVar2,uVar1);
  FUN_0040fe80(param_1,param_2,(int)pvVar4 + 0x10,pvVar4);
  return param_1;
}




undefined4 * __thiscall FUN_0040fcd0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined4 *)addressof<>(param_1);
  *(undefined4 *)this = *puVar1;
  puVar2 = (undefined1 *)addressof<>(param_2);
  *(undefined1 *)((int)this + 4) = *puVar2;
  return (undefined4 *)this;
}




void * __thiscall FUN_0040fd10(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00413650;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = addressof<>(param_1);
  FUN_00410c30(this,0,uVar1);
  ExceptionList = local_10;
  return this;
}




void __thiscall FUN_0040fd80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00410a00(this);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0xd) = 0;
  local_8 = 0;
  uVar2 = addressof<>(param_3);
  uVar3 = addressof<>(param_2);
  uVar4 = addressof<>(param_1);
  uVar5 = addressof<>(iVar1 + 0x10);
  uVar6 = FUN_0040e130(this);
  FUN_00410c70(uVar6,uVar5,uVar4,uVar3,uVar2);
  FUN_0040fe52();
  return;
}




void Catch_All_0040fe37(void)

{
  int unaff_EBP;
  
  FUN_0040e510(*(void **)(unaff_EBP + -0x18),*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_0040fe52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}




/* WARNING: Removing unreachable block (ram,0x0040ff22) */
/* WARNING: Removing unreachable block (ram,0x0040ffd9) */
/* WARNING: Removing unreachable block (ram,0x004100a6) */
/* WARNING: Removing unreachable block (ram,0x0041010c) */
/* WARNING: Removing unreachable block (ram,0x00410197) */
/* WARNING: Removing unreachable block (ram,0x004101ea) */
/* WARNING: Removing unreachable block (ram,0x004101a5) */
/* WARNING: Removing unreachable block (ram,0x00410232) */
/* WARNING: Removing unreachable block (ram,0x004102a4) */
/* WARNING: Removing unreachable block (ram,0x004102f6) */
/* WARNING: Removing unreachable block (ram,0x00410368) */
/* WARNING: Removing unreachable block (ram,0x004103bb) */
/* WARNING: Removing unreachable block (ram,0x00410376) */
/* WARNING: Removing unreachable block (ram,0x00410400) */
/* WARNING: Removing unreachable block (ram,0x00410000) */
/* WARNING: Removing unreachable block (ram,0x0041005d) */
/* WARNING: Removing unreachable block (ram,0x004100a1) */
/* WARNING: Removing unreachable block (ram,0x0040ff49) */
/* WARNING: Removing unreachable block (ram,0x0040ff99) */
/* WARNING: Removing unreachable block (ram,0x0040ffd0) */
/* WARNING: Removing unreachable block (ram,0x00410404) */

void * FUN_0040fe80(void *param_1,undefined4 *param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uStack_1ec;
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [16];
  undefined4 *local_1bc;
  undefined4 local_1b8;
  undefined4 *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint *local_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint *local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  undefined4 local_18c;
  uint *local_188;
  uint *local_184;
  uint *local_180;
  uint *local_17c;
  undefined4 *local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  uint *local_164;
  uint *local_160;
  uint *local_15c;
  int *local_158;
  uint *local_154;
  undefined4 local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint *local_140;
  undefined4 *local_13c;
  undefined4 local_138;
  undefined4 *local_134;
  undefined4 local_130;
  uint *local_12c;
  uint *local_128;
  uint *local_124;
  int *local_120;
  uint *local_11c;
  undefined4 *local_118;
  undefined4 local_114;
  undefined4 local_110;
  uint *local_10c;
  uint *local_108;
  uint *local_104;
  uint *local_100;
  undefined4 *local_3c;
  undefined4 local_38;
  int *local_34;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_1d;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413d30;
  local_10 = ExceptionList;
  uStack_1ec = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1ec;
  ExceptionList = &local_10;
  FUN_004109e0(&local_1c);
  local_1d = 0;
  local_34 = (int *)FUN_0040e130(local_18);
  local_8 = 0;
  iVar1 = FUN_00410b50(local_18);
  if (iVar1 == 0) {
    local_38 = addressof<>(param_3);
    local_3c = (undefined4 *)*local_34;
    FUN_00410cf0(local_18,param_1,'\x01',local_3c,local_38,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = (int *)FUN_0040dd80(local_18,local_1cc);
  local_27 = FUN_0040dc20(&param_2,piVar2);
  if ((bool)local_27) {
    local_110 = FUN_004037d0(local_18);
    local_108 = (uint *)FUN_0040e1a0((int)param_2);
    local_100 = local_108;
    local_10c = (uint *)FUN_0040e580(param_3);
    local_104 = local_10c;
    local_28 = FUN_0040e280(local_10c,local_108);
    if ((bool)local_28) {
      local_114 = addressof<>(param_3);
      local_118 = param_2;
      FUN_00410cf0(local_18,param_1,'\x01',param_2,local_114,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    piVar2 = (int *)FUN_0040dd10(local_18,local_1d0);
    local_29 = FUN_0040dc20(&param_2,piVar2);
    if ((bool)local_29) {
      local_130 = FUN_004037d0(local_18);
      local_128 = (uint *)FUN_0040e580(param_3);
      local_11c = local_128;
      local_120 = (int *)FUN_0040edc0(local_34);
      local_12c = (uint *)FUN_0040e1a0(*local_120);
      local_124 = local_12c;
      local_2a = FUN_0040e280(local_12c,local_128);
      if ((bool)local_2a) {
        local_138 = addressof<>(param_3);
        local_134 = (undefined4 *)FUN_0040edc0(local_34);
        local_13c = (undefined4 *)*local_134;
        FUN_00410cf0(local_18,param_1,'\0',local_13c,local_138,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    else {
      local_150 = FUN_004037d0(local_18);
      local_148 = (uint *)FUN_0040e1a0((int)param_2);
      local_140 = local_148;
      local_14c = (uint *)FUN_0040e580(param_3);
      local_144 = local_14c;
      local_2b = FUN_0040e280(local_14c,local_148);
      if ((bool)local_2b) {
        local_1c = param_2;
        local_168 = FUN_004037d0(local_18);
        local_160 = (uint *)FUN_0040e580(param_3);
        local_154 = local_160;
        local_158 = FUN_004109c0((int *)&local_1c);
        local_164 = (uint *)FUN_0040e1a0(*local_158);
        local_15c = local_164;
        local_2c = FUN_0040e280(local_164,local_160);
        if ((bool)local_2c) {
          if (*(char *)(local_1c[2] + 0xd) != '\0') {
            local_16c = addressof<>(param_3);
            local_170 = local_1c;
            FUN_00410cf0(local_18,param_1,'\0',local_1c,local_16c,param_4);
            ExceptionList = local_10;
            return param_1;
          }
          local_174 = addressof<>(param_3);
          local_178 = param_2;
          FUN_00410cf0(local_18,param_1,'\x01',param_2,local_174,param_4);
          ExceptionList = local_10;
          return param_1;
        }
      }
      local_18c = FUN_004037d0(local_18);
      local_184 = (uint *)FUN_0040e580(param_3);
      local_17c = local_184;
      local_188 = (uint *)FUN_0040e1a0((int)param_2);
      local_180 = local_188;
      local_2d = FUN_0040e280(local_188,local_184);
      if ((bool)local_2d) {
        local_1c = param_2;
        local_198 = FUN_0040e960((int *)&local_1c);
        local_190 = local_198;
        local_194 = (int *)FUN_0040dd10(local_18,local_1d4);
        local_2e = FUN_0040dc20(local_198,local_194);
        if (!(bool)local_2e) {
          local_1ac = FUN_004037d0(local_18);
          local_1a4 = (uint *)FUN_0040e1a0((int)local_1c);
          local_19c = local_1a4;
          local_1a8 = (uint *)FUN_0040e580(param_3);
          local_1a0 = local_1a8;
          local_2f = FUN_0040e280(local_1a8,local_1a4);
          if (!(bool)local_2f) goto LAB_0041094a;
        }
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          local_1b0 = addressof<>(param_3);
          local_1b4 = param_2;
          FUN_00410cf0(local_18,param_1,'\0',param_2,local_1b0,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_1b8 = addressof<>(param_3);
        local_1bc = local_1c;
        FUN_00410cf0(local_18,param_1,'\x01',local_1c,local_1b8,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
LAB_0041094a:
  pvVar3 = (void *)FUN_00410967();
  return pvVar3;
}




void Catch_All_0041094c(void)

{
  int unaff_EBP;
  
  FUN_00410b00(*(void **)(unaff_EBP + -0x14),*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_00410967(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  void *pvVar3;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pvVar3 = *(void **)(unaff_EBP + 0x14);
  uVar1 = addressof<>(*(undefined4 *)(unaff_EBP + 0x10));
  puVar2 = (undefined4 *)
           FUN_00410f80(*(void **)(unaff_EBP + -0x14),(void *)(unaff_EBP + -0x1d8),
                        *(char *)(unaff_EBP + -0x19),uVar1,pvVar3);
  **(undefined4 **)(unaff_EBP + 8) = *puVar2;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}




int * __fastcall FUN_004109c0(int *param_1)

{
  FUN_00410b70(param_1);
  return param_1;
}




undefined4 * __fastcall FUN_004109e0(undefined4 *param_1)

{
  FUN_00410c10(param_1);
  return param_1;
}




void __fastcall FUN_00410a00(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413d50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0040e130(param_1);
  iVar2 = allocate(1);
  uVar3 = FUN_0040e130(param_1);
  local_8 = 0;
  uVar5 = uVar3;
  uVar4 = addressof<>(iVar2);
  construct<>(uVar1,uVar4,uVar5);
  uVar5 = uVar3;
  uVar4 = addressof<>(iVar2 + 4);
  construct<>(uVar1,uVar4,uVar5);
  uVar5 = addressof<>(iVar2 + 8);
  construct<>(uVar1,uVar5,uVar3);
  FUN_00410ad5();
  return;
}




void Catch_All_00410ab8(void)

{
  int unaff_EBP;
  
  FUN_00404290(*(void **)(unaff_EBP + -0x18),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_00410ad5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}




void __thiscall FUN_00410b00(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040e130(this);
  addressof<>((int)param_1 + 0x10);
  destroy<>();
  FUN_0040f620(uVar1,param_1);
  return;
}




undefined4 __fastcall FUN_00410b50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040e130(param_1);
  return *(undefined4 *)(iVar1 + 4);
}




int * __fastcall FUN_00410b70(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(*param_1 + 0xd) == '\0') {
    if (*(char *)(*(int *)*param_1 + 0xd) == '\0') {
      iVar2 = FUN_0040f150(*(int *)*param_1);
      *param_1 = iVar2;
    }
    else {
      while ((piVar1 = *(int **)(*param_1 + 4), *(char *)((int)piVar1 + 0xd) == '\0' &&
             (*param_1 == *piVar1))) {
        *param_1 = (int)piVar1;
      }
      if (*(char *)(*param_1 + 0xd) == '\0') {
        *param_1 = (int)piVar1;
      }
    }
  }
  else {
    *param_1 = *(int *)(*param_1 + 8);
  }
  return param_1;
}




undefined4 * __fastcall FUN_00410c10(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}




void * __thiscall FUN_00410c30(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00405320(this);
  uVar1 = addressof<>(param_2);
  FUN_00411330(this,uVar1);
  return this;
}




void __cdecl
FUN_00410c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = (void *)forward<>(8,param_2);
  addressof<>(param_3);
  addressof<>(param_5);
  FUN_00405320(&stack0xffffffec);
  puVar2 = (undefined4 *)addressof<>(param_4);
  FUN_004112c0(&stack0xffffffe8,puVar2);
  FUN_00411360(pvVar1);
  return;
}




void * __thiscall
FUN_00410cf0(void *this,void *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            void *param_5)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *local_8;
  
  this_00 = (int *)FUN_0040e130(this);
  iVar1 = FUN_00411310(this);
  if (iVar1 - 1U <= (uint)this_00[1]) {
    FUN_00410b00(this,param_5);
    std::_Xlength_error("map/set<T> too long");
  }
  addressof<>(param_4);
  piVar2 = (int *)FUN_00411390(param_5);
  this_00[1] = this_00[1] + 1;
  piVar2[1] = (int)param_3;
  local_8 = piVar2;
  if (param_3 == (undefined4 *)*this_00) {
    puVar3 = (undefined4 *)FUN_0040ede0(this_00);
    *puVar3 = piVar2;
    puVar3 = (undefined4 *)FUN_00406ac0(this_00);
    *puVar3 = piVar2;
    puVar3 = (undefined4 *)FUN_0040edc0(this_00);
    *puVar3 = piVar2;
  }
  else if (param_2 == '\0') {
    param_3[2] = piVar2;
    piVar4 = (int *)FUN_0040edc0(this_00);
    if (param_3 == (undefined4 *)*piVar4) {
      puVar3 = (undefined4 *)FUN_0040edc0(this_00);
      *puVar3 = piVar2;
    }
  }
  else {
    *param_3 = piVar2;
    piVar4 = (int *)FUN_00406ac0(this_00);
    if (param_3 == (undefined4 *)*piVar4) {
      puVar3 = (undefined4 *)FUN_00406ac0(this_00);
      *puVar3 = piVar2;
    }
  }
  while (*(char *)(local_8[1] + 0xc) == '\0') {
    if (local_8[1] == **(int **)(local_8[1] + 4)) {
      iVar1 = *(int *)(*(int *)(local_8[1] + 4) + 8);
      if (*(char *)(iVar1 + 0xc) == '\0') {
        *(undefined1 *)(local_8[1] + 0xc) = 1;
        *(undefined1 *)(iVar1 + 0xc) = 1;
        *(undefined1 *)(*(int *)(local_8[1] + 4) + 0xc) = 0;
        local_8 = *(int **)(local_8[1] + 4);
      }
      else {
        if (local_8 == *(int **)(local_8[1] + 8)) {
          local_8 = (int *)local_8[1];
          FUN_0040f090(this_00,(int)local_8);
        }
        *(undefined1 *)(local_8[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(local_8[1] + 4) + 0xc) = 0;
        FUN_0040eff0(this_00,*(int **)(local_8[1] + 4));
      }
    }
    else {
      iVar1 = **(int **)(local_8[1] + 4);
      if (*(char *)(iVar1 + 0xc) == '\0') {
        *(undefined1 *)(local_8[1] + 0xc) = 1;
        *(undefined1 *)(iVar1 + 0xc) = 1;
        *(undefined1 *)(*(int *)(local_8[1] + 4) + 0xc) = 0;
        local_8 = *(int **)(local_8[1] + 4);
      }
      else {
        if (local_8 == *(int **)local_8[1]) {
          local_8 = (int *)local_8[1];
          FUN_0040eff0(this_00,local_8);
        }
        *(undefined1 *)(local_8[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(local_8[1] + 4) + 0xc) = 0;
        FUN_0040f090(this_00,*(int *)(local_8[1] + 4));
      }
    }
  }
  piVar4 = (int *)FUN_0040ede0(this_00);
  *(undefined1 *)(*piVar4 + 0xc) = 1;
  addressof<>(this_00);
  FUN_0040e110(param_1,piVar2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x004110d6) */

void __thiscall FUN_00410f80(void *this,void *param_1,char param_2,undefined4 param_3,void *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uStack_a4;
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [8];
  void *local_84;
  undefined4 local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  void *local_6c;
  undefined4 local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  undefined4 local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  int *local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  void *local_1c;
  bool local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413d70;
  local_10 = ExceptionList;
  uStack_a4 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_a4;
  ExceptionList = &local_10;
  local_1c = this;
  local_3c = (int *)FUN_0040e130(this);
  local_8 = 0;
  local_2c = (undefined4 *)*local_3c;
  local_28 = (undefined4 *)local_2c[1];
  local_15 = true;
  while (*(char *)((int)local_28 + 0xd) == '\0') {
    local_2c = local_28;
    if (param_2 == '\0') {
      local_64 = FUN_004037d0(local_1c);
      local_5c = (uint *)FUN_0040e1a0((int)local_28);
      local_54 = local_5c;
      local_60 = (uint *)FUN_0040e580(param_3);
      local_58 = local_60;
      local_1e = FUN_0040e280(local_60,local_5c);
      local_15 = (bool)local_1e;
    }
    else {
      local_50 = FUN_004037d0(local_1c);
      local_48 = (uint *)FUN_0040e580(param_3);
      local_40 = local_48;
      local_4c = (uint *)FUN_0040e1a0((int)local_28);
      local_44 = local_4c;
      local_1d = FUN_0040e280(local_4c,local_48);
      local_15 = !(bool)local_1d;
      local_34 = (uint)local_15;
    }
    if (local_15 == false) {
      local_38 = (undefined4 *)local_28[2];
    }
    else {
      local_38 = (undefined4 *)*local_28;
    }
    local_28 = local_38;
  }
  addressof<>(local_3c);
  FUN_0040e110(&local_30,local_2c);
  if (local_15 != false) {
    piVar1 = (int *)FUN_0040dd80(local_1c,local_8c);
    local_20 = FUN_0040dc20(&local_30,piVar1);
    if ((bool)local_20) {
      local_21 = 1;
      uVar2 = addressof<>(param_3);
      local_6c = FUN_00410cf0(local_1c,local_90,'\x01',local_2c,uVar2,param_4);
      FUN_0040fcd0(param_1,local_6c,&local_21);
      FUN_004112a1();
      return;
    }
    FUN_004112f0(&local_30);
  }
  local_80 = FUN_004037d0(local_1c);
  local_78 = (uint *)FUN_0040e580(param_3);
  local_70 = local_78;
  local_7c = (uint *)FUN_0040e1a0(local_30);
  local_74 = local_7c;
  local_22 = FUN_0040e280(local_7c,local_78);
  if (!(bool)local_22) {
    FUN_00410b00(local_1c,param_4);
    local_24 = 0;
    FUN_0040fcd0(param_1,&local_30,&local_24);
    FUN_004112a1();
    return;
  }
  local_23 = 1;
  uVar2 = addressof<>(param_3);
  local_84 = FUN_00410cf0(local_1c,local_94,local_15,local_2c,uVar2,param_4);
  FUN_0040fcd0(param_1,local_84,&local_23);
  FUN_004112a1();
  return;
}




void Catch_All_00411276(void)

{
  int unaff_EBP;
  
  FUN_00410b00(*(void **)(unaff_EBP + -0x18),*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_004112a1(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




undefined4 * __thiscall FUN_004112c0(void *this,undefined4 *param_1)

{
  FUN_00405320(this);
  *(undefined4 *)this = *param_1;
  return (undefined4 *)this;
}




int * __fastcall FUN_004112f0(int *param_1)

{
  FUN_004109c0(param_1);
  return param_1;
}




void __fastcall FUN_00411310(undefined4 param_1)

{
  FUN_0040e130(param_1);
  FUN_00404f80();
  return;
}




undefined4 * __thiscall FUN_00411330(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = addressof<>(param_1);
  *(undefined4 *)this = uVar1;
  return (undefined4 *)this;
}




void * __fastcall FUN_00411360(void *param_1)

{
  FUN_004113a0(param_1,&stack0x00000008);
  return param_1;
}




undefined4 FUN_00411390(undefined4 param_1)

{
  return param_1;
}




undefined4 * __thiscall FUN_004113a0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)addressof<>(param_1);
  puVar1 = (undefined4 *)FUN_004113e0(puVar1);
  *(undefined4 *)this = *puVar1;
  *(undefined4 *)((int)this + 4) = 0;
  return (undefined4 *)this;
}




void __cdecl FUN_004113e0(undefined4 *param_1)

{
  addressof<>(*param_1);
  return;
}




int __cdecl
FUN_00411400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int local_c;
  
  puVar1 = (uint *)FUN_00401060();
  local_c = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}




void __cdecl
FUN_00411460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00411400(param_1,0xffffffff,param_2,param_3,param_4);
  return;
}




undefined4 __cdecl FUN_00411480(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00411460(param_1,param_2,0,&stack0x0000000c);
  return uVar1;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_004114c0(void *this,undefined4 param_1)

{
  void *pvVar1;
  undefined4 *local_2028;
  undefined4 *local_2020;
  undefined1 local_2014 [8192];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413db7;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004080c0((undefined4 *)this);
  local_8 = 0;
  *(undefined ***)this = VolumeControl::vftable;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x30) = 0x32;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  memset(local_2014,0,0x2000);
  FUN_004122f0();
  FUN_004069d0(local_2014,0x1000,L"%s/volume.png");
  pvVar1 = (void *)FUN_00406a20(0x10);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_2020 = (undefined4 *)0x0;
  }
  else {
    local_2020 = FUN_004071a0(pvVar1,local_2014,0);
  }
  local_8._0_1_ = 0;
  *(undefined4 **)((int)this + 0x28) = local_2020;
  FUN_004122f0();
  FUN_004069d0(local_2014,0x1000,L"%s/volumeMute.png");
  pvVar1 = (void *)FUN_00406a20(0x10);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    local_2028 = (undefined4 *)0x0;
  }
  else {
    local_2028 = FUN_004071a0(pvVar1,local_2014,0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x2c) = local_2028;
  FUN_004120b0((int)this);
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 * __thiscall FUN_004116c0(void *this,uint param_1)

{
  FUN_004116f0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void __fastcall FUN_004116f0(undefined4 *param_1)

{
  *param_1 = VolumeControl::vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
  }
  param_1[0xb] = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  param_1[10] = 0;
  FUN_00408110(param_1);
  return;
}




void __thiscall
FUN_00411790(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  *(int *)((int)this + 0xc) = param_3 + -0x20;
  *(int *)((int)this + 4) = *(int *)((int)this + 0xc) + -0x2c;
  *(int *)((int)this + 0x10) = param_4 + -0x1c;
  *(int *)((int)this + 8) = *(int *)((int)this + 0x10) + -0x6a;
  return;
}




void FUN_004117e0(HDC param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  COLORREF color;
  int local_15c;
  undefined4 local_158 [2];
  int local_150;
  undefined1 local_14a;
  char local_149;
  int local_148;
  tagRECT local_144;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  CHAR local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00413deb;
  local_10 = ExceptionList;
  local_14 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00406fc0(param_1);
  local_8 = 0;
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect((RECT *)(local_148 + 4),pt);
  local_14a = BVar1 != 0;
  local_149 = local_14a;
  iVar2 = FUN_00407950(2);
  local_150 = (*(int *)(local_148 + 0xc) - *(int *)(local_148 + 4)) / 2 + *(int *)(local_148 + 4);
  local_134 = local_150 + -10;
  local_130 = *(int *)(local_148 + 8);
  local_12c = local_150 + 10;
  local_128 = *(int *)(local_148 + 8) + 0x49;
  if (local_149 != '\0') {
    FUN_00408240(local_158,iVar2,local_134,local_130,local_12c - local_134,local_128 - local_130);
  }
  *(int *)(local_148 + 0x58) = *(int *)(local_148 + 8) + 4;
  *(int *)(local_148 + 0x5c) = *(int *)(local_148 + 8) + 0x36;
  local_124 = local_150 + -2;
  local_120 = *(int *)(local_148 + 0x58);
  local_11c = local_150 + 2;
  local_118 = *(int *)(local_148 + 0x5c);
  iVar2 = FUN_00407950(3);
  if (local_149 != '\0') {
    FUN_00408240(local_158,iVar2,local_124,local_120,local_11c - local_124,local_118 - local_120);
  }
  local_120 = local_118 - (*(int *)(local_148 + 0x30) * 0x32) / 100;
  iVar2 = FUN_00407950(4);
  if (local_149 != '\0') {
    FUN_00408240(local_158,iVar2,local_124,local_120,local_11c - local_124,local_118 - local_120);
  }
  SetRect((LPRECT)(local_148 + 0x34),local_150 + -4,local_120 + -4,local_150 + 4,local_120 + 4);
  SetRect((LPRECT)(local_148 + 0x44),local_150 + -0xc,*(int *)(local_148 + 8) + 0x52,local_150 + 0xc
          ,*(int *)(local_148 + 8) + 0x6a);
  if (*(char *)(local_148 + 0x55) == '\0') {
    local_15c = *(int *)(local_148 + 0x28);
  }
  else {
    local_15c = *(int *)(local_148 + 0x2c);
  }
  FUN_00408240(local_158,local_15c,*(undefined4 *)(local_148 + 0x44),
               *(undefined4 *)(local_148 + 0x48),
               *(int *)(local_148 + 0x4c) - *(int *)(local_148 + 0x44),
               *(int *)(local_148 + 0x50) - *(int *)(local_148 + 0x48));
  if ((local_149 == '\0') || (*(int *)(local_148 + 0x18) != 1)) {
    local_8 = 0xffffffff;
    FUN_00407000(local_158);
  }
  else {
    memset(local_114,0,0x100);
    iVar2 = FUN_00411480(local_114,&DAT_004172c4);
    color = SetTextColor(param_1,0);
    local_144.left = local_124 + -10;
    local_144.top = *(int *)(local_148 + 8) + 0x37;
    local_144.right = local_124 + 10;
    local_144.bottom = *(int *)(local_148 + 8) + 0x4b;
    DrawTextA(param_1,local_114,iVar2,&local_144,2);
    SetTextColor(param_1,color);
    local_8 = 0xffffffff;
    FUN_00407000(local_158);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_00411c70(void *this,LONG param_1,LONG param_2)

{
  POINT pt;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  if (*(char *)((int)this + 0x14) == '\0') {
    local_18.left = *(int *)((int)this + 4) + -0x10;
    local_18.top = *(int *)((int)this + 8) + -0x10;
    local_18.right = *(int *)((int)this + 0xc) + 0x10;
    local_18.bottom = *(int *)((int)this + 0x10) + 0x10;
    pt.y = param_2;
    pt.x = param_1;
    PtInRect(&local_18,pt);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 __thiscall FUN_00411d00(void *this,undefined4 param_1,uint param_2)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 local_10;
  
  uVar2 = param_2 >> 0x10;
  if ((*(int *)((int)this + 0x24) == 0) ||
     (BVar1 = PtInRect((RECT *)((int)this + 0x44),
                       (POINT)(CONCAT44(uVar2,param_2) & 0xffffffff0000ffff)), BVar1 == 0)) {
    BVar1 = PtInRect((RECT *)((int)this + 0x34),
                     (POINT)(CONCAT44(uVar2,param_2) & 0xffffffff0000ffff));
    *(bool *)((int)this + 0x54) = BVar1 != 0;
    if (*(char *)((int)this + 0x54) == '\0') {
      local_10 = FUN_00411e10(this,param_2 & 0xffff,uVar2);
    }
    else {
      local_10 = 0;
    }
  }
  else {
    *(byte *)((int)this + 0x55) = *(byte *)((int)this + 0x55) ^ 1;
    (**(code **)(**(int **)((int)this + 0x24) + 0x30))(0xffffffff,(int)this + 0x55);
    FUN_00411fc0((int)this);
    local_10 = 0;
  }
  return local_10;
}




undefined4 __fastcall FUN_00411df0(int param_1)

{
  *(undefined1 *)(param_1 + 0x54) = 0;
  return 0;
}




undefined4 __thiscall FUN_00411e10(void *this,undefined4 param_1,int param_2)

{
  code *pcVar1;
  
  if (*(char *)((int)this + 0x55) != '\0') {
    *(undefined1 *)((int)this + 0x55) = 0;
    pcVar1 = *(code **)(**(int **)((int)this + 0x24) + 0x30);
    (*pcVar1)(0xffffffff,(int)this + 0x55,pcVar1,*(undefined4 *)((int)this + 0x24));
  }
  *(undefined1 *)((int)this + 0x54) = 1;
  FUN_00411ef0(this,((*(int *)((int)this + 0x5c) - param_2) * 100) / 0x32);
  return 0;
}




undefined4 __thiscall FUN_00411e80(void *this,uint param_1,uint param_2)

{
  undefined4 local_c;
  
  if ((param_1 & 1) == 0) {
    local_c = 0;
  }
  else if (*(char *)((int)this + 0x54) == '\0') {
    local_c = 0;
  }
  else {
    local_c = FUN_00411e10(this,param_2 & 0xffff,(param_2 >> 0x10) + 2);
  }
  return local_c;
}




void __thiscall FUN_00411ef0(void *this,int param_1)

{
  code *pcVar1;
  
  if (((-1 < param_1) && (param_1 < 0x65)) && (*(int *)((int)this + 0x24) != 0)) {
    *(int *)((int)this + 0x30) = param_1;
    FUN_00411fc0((int)this);
    pcVar1 = *(code **)(**(int **)((int)this + 0x24) + 0x30);
    (*pcVar1)(*(undefined4 *)((int)this + 0x30),0,pcVar1,*(undefined4 *)((int)this + 0x24));
  }
  return;
}




void __fastcall FUN_00411f50(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x24) + 0x30))(*(undefined4 *)(param_1 + 0x30),0);
  if (*(char *)(param_1 + 0x55) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x30))(0xffffffff,param_1 + 0x55);
  }
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00411fc0(int param_1)

{
  LPCWSTR local_2024;
  WCHAR local_201c [4096];
  WCHAR local_1c [10];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  memset(local_201c,0,0x2000);
  FUN_004122f0();
  FUN_004069d0(local_201c,0x1000,L"%s/../Config/Config.ini");
  local_1c[0] = L'\0';
  local_1c[1] = L'\0';
  local_1c[2] = L'\0';
  local_1c[3] = L'\0';
  local_1c[4] = L'\0';
  local_1c[5] = L'\0';
  local_1c[6] = L'\0';
  local_1c[7] = L'\0';
  local_1c[8] = L'\0';
  local_1c[9] = L'\0';
  FUN_004069d0(local_1c,10,&DAT_004172e0);
  WritePrivateProfileStringW(L"User",L"VideoVolume",local_1c,local_201c);
  if (*(char *)(param_1 + 0x55) == '\0') {
    local_2024 = L"0";
  }
  else {
    local_2024 = L"1";
  }
  WritePrivateProfileStringW(L"User",L"VolumeMute",local_2024,local_201c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004120b0(int param_1)

{
  UINT UVar1;
  WCHAR local_2008 [4096];
  uint local_8;
  
  local_8 = DAT_0041b008 ^ (uint)&stack0xfffffffc;
  memset(local_2008,0,0x2000);
  FUN_004122f0();
  FUN_004069d0(local_2008,0x1000,L"%s/../Config/Config.ini");
  UVar1 = GetPrivateProfileIntW(L"User",L"VideoVolume",0x32,local_2008);
  *(UINT *)(param_1 + 0x30) = UVar1;
  UVar1 = GetPrivateProfileIntW(L"User",L"VolumeMute",0,local_2008);
  *(bool *)(param_1 + 0x55) = UVar1 == 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




LPCRITICAL_SECTION __fastcall FUN_00412180(LPCRITICAL_SECTION param_1)

{
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  InitializeCriticalSection(param_1);
  return param_1;
}




void __fastcall FUN_004121a0(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




undefined4 * __thiscall FUN_004121b0(void *this,LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  *(LPCRITICAL_SECTION *)this = param_1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(param_1);
    p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)GetCurrentThreadId();
    param_1[1].DebugInfo = p_Var1;
  }
  return (undefined4 *)this;
}




void __fastcall FUN_004121e0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}




void __cdecl FUN_00412200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00411400(param_1,param_2,param_3,0,&stack0x00000010);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_00412220(undefined4 param_1)

{
  int iVar1;
  uint *puVar2;
  undefined1 auStack_2038 [8];
  _SYSTEMTIME local_2030;
  CHAR aCStack_2018 [8196];
  uint local_14;
  
  local_14 = DAT_0041b008 ^ (uint)auStack_2038;
  local_2030.wYear = 0;
  local_2030.wMonth = 0;
  local_2030.wDayOfWeek = 0;
  local_2030.wDay = 0;
  local_2030.wHour = 0;
  local_2030.wMinute = 0;
  local_2030.wSecond = 0;
  local_2030.wMilliseconds = 0;
  GetLocalTime(&local_2030);
  memset(aCStack_2018,0,0x2000);
  iVar1 = FUN_00412200(aCStack_2018,0x30,"%02d:%02d:%02d:%03d ");
  puVar2 = (uint *)FUN_00401060();
  __stdio_common_vsprintf
            (*puVar2 | 2,puVar2[1],aCStack_2018 + iVar1,2000,param_1,0,&stack0x00000008);
  OutputDebugStringA(aCStack_2018);
  __security_check_cookie(local_14 ^ (uint)auStack_2038);
  return;
}




short * FUN_004122f0(void)

{
  wchar_t *pwVar1;
  
  if (DAT_0041b630 == 0) {
    GetModuleFileNameW((HMODULE)0x0,&DAT_0041b630,0x1000);
    pwVar1 = wcsrchr(&DAT_0041b630,L'\\');
    if (pwVar1 != (wchar_t *)0x0) {
      *pwVar1 = L'\0';
    }
  }
  return &DAT_0041b630;
}




void __fastcall FUN_00412330(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (((param_5 != (int *)0x0) && (0 < param_1)) && (0 < param_2)) {
    dVar5 = (double)param_1 / (double)param_2;
    if (dVar5 <= 1.0) {
      iVar3 = param_4;
      iVar4 = (int)((double)param_4 * dVar5);
      if (param_3 < (int)((double)param_4 * dVar5)) {
        iVar3 = (int)((double)param_3 / dVar5);
        iVar4 = param_3;
      }
    }
    else {
      iVar3 = (int)((double)param_3 / dVar5);
      iVar4 = param_3;
      if (param_4 < iVar3) {
        iVar3 = param_4;
        iVar4 = (int)((double)param_4 * dVar5);
      }
    }
    iVar1 = (param_3 - iVar4) / 2;
    *param_5 = iVar1;
    iVar2 = (param_4 - iVar3) / 2;
    param_5[1] = iVar2;
    param_5[2] = iVar1 + iVar4;
    param_5[3] = iVar2 + iVar3;
  }
  return;
}




/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::CAtlBaseModule(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  HRESULT HVar1;
  BOOL BVar2;
  
  _ATL_BASE_MODULE70::_ATL_BASE_MODULE70((_ATL_BASE_MODULE70 *)this);
  *(undefined4 *)this = 0x38;
  *(undefined4 *)(this + 8) = 0x400000;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined4 *)(this + 0xc) = 0xe00;
  *(undefined **)(this + 0x10) = &DAT_00414390;
  HVar1 = FUN_00401110((LPCRITICAL_SECTION)(this + 0x14));
  if (HVar1 < 0) {
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    }
    DAT_0041b5f0 = 1;
  }
  return this;
}




/* Library Function - Single Match
    public: __thiscall ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_ATL_BASE_MODULE70 * __thiscall
ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(_ATL_BASE_MODULE70 *this)

{
  memset(this + 0x14,0,0x18);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return this;
}




/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
  RemoveAll((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
             *)(this + 0x2c));
  return;
}




/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::RemoveAll(void)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
RemoveAll(CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
          *this)

{
  if (*(int *)this != 0) {
    free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_0041b008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




void __cdecl FUN_004124b9(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  
  do {
    uStack_c = 0x4124d3;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    uStack_c = 0x4124c6;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    FUN_00412be6();
    return;
  }
  FUN_00412b64(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_00418ea0);
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
  p_Var3 = p_Var2 + (uint)*(ushort *)(param_1 + iVar1 + 6) * 0x28;
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(p_Var2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(p_Var2 + 8) + *(int *)(p_Var2 + 0xc)))) break;
    p_Var2 = p_Var2 + 0x28;
  }
  return p_Var2;
}




/* Library Function - Single Match
    ___scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
      if (DAT_0041b294 != (void *)0x0) {
        pvVar3 = DAT_0041b294;
        pvVar1 = DAT_0041b294;
      }
      DAT_0041b294 = pvVar1;
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

int __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  uint3 uVar2;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_0041b298 = 1;
  }
  ___isa_available_init();
  cVar1 = FUN_0041313a();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_0041313a();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_0041313a();
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
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
  
  if (DAT_0041b299 != '\0') {
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
    bVar2 = 0x20 - ((byte)DAT_0041b008 & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar2 | -1 << 0x20 - bVar2) ^ DAT_0041b008;
    DAT_0041b29c = uVar4;
    DAT_0041b2a0 = uVar4;
    DAT_0041b2a4 = uVar4;
    DAT_0041b2a8 = uVar4;
    DAT_0041b2ac = uVar4;
    DAT_0041b2b0 = uVar4;
LAB_00412629:
    DAT_0041b299 = '\x01';
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar4 = initialize_onexit_table(&DAT_0041b29c);
    if (uVar4 == 0) {
      uVar4 = initialize_onexit_table(&DAT_0041b2a8);
      if (uVar4 == 0) goto LAB_00412629;
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    ___scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  uint uVar2;
  void *local_14;
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || (*(int *)(p_Var1 + 0x24) < 0)) {
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_0041b294;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0041b294 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}




/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_0041b298 == '\0') || (param_2 == '\0')) {
    FUN_0041313a();
    FUN_0041313a();
  }
  return 1;
}




/* Library Function - Single Match
    __onexit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)DAT_0041b008 & 0x1f;
  if (((DAT_0041b008 ^ DAT_0041b29c) >> bVar2 | (DAT_0041b008 ^ DAT_0041b29c) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_0041b29c,_Func);
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




void __cdecl FUN_00412766(void *param_1)

{
  free(param_1);
  return;
}




void __cdecl FUN_00412774(size_t param_1)

{
  FUN_004124b9(param_1);
  return;
}




undefined4 * __thiscall FUN_0041277d(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void FUN_004127a0(size_t param_1)

{
  FUN_00413040(param_1);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_0041286e(void)

{
  code *pcVar1;
  bool bVar2;
  WORD WVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  wchar_t *pwVar7;
  uint uVar8;
  int unaff_ESI;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_14;
  
  uVar4 = ___scrt_initialize_crt(1);
  if ((char)uVar4 != '\0') {
    bVar2 = false;
    uVar4 = ___scrt_acquire_startup_lock();
    if (DAT_0041b290 != 1) {
      if (DAT_0041b290 == 0) {
        DAT_0041b290 = 1;
        iVar5 = initterm_e(&DAT_0041435c,&DAT_00414368);
        if (iVar5 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_0041434c,&DAT_00414358);
        DAT_0041b290 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar4);
      piVar6 = (int *)FUN_00413187();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        pcVar1 = (code *)*piVar6;
        uVar10 = 0;
        uVar9 = 2;
        uVar4 = 0;
        guard_check_icall();
        (*pcVar1)(uVar4,uVar9,uVar10);
      }
      piVar6 = (int *)FUN_0041318d();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar6);
      }
      WVar3 = ___scrt_get_show_window_mode();
      pwVar7 = (wchar_t *)get_wide_winmain_command_line(WVar3);
      unaff_ESI = FUN_00402580((HINSTANCE)&IMAGE_DOS_HEADER_00400000,0,pwVar7);
      uVar8 = FUN_00412fa8();
      if ((char)uVar8 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004129db;
    }
  }
  ___scrt_fastfail();
LAB_004129db:
                    /* WARNING: Subroutine does not return */
  exit(unaff_ESI);
}




void entry(void)

{
  ___security_init_cookie();
  FUN_0041286e();
  return;
}




/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
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
  _DAT_0041b3b0 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0041b3b8 = (undefined4)uVar9;
  _DAT_0041b3c8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0041b3cc = &stack0x00000004;
  _DAT_0041b308 = 0x10001;
  _DAT_0041b2b8 = 0xc0000409;
  _DAT_0041b2bc = 1;
  _DAT_0041b2c8 = 1;
  DAT_0041b2cc = 2;
  _DAT_0041b2c4 = unaff_retaddr;
  _DAT_0041b394 = in_GS;
  _DAT_0041b398 = in_FS;
  _DAT_0041b39c = in_ES;
  _DAT_0041b3a0 = in_DS;
  _DAT_0041b3a4 = unaff_EDI;
  _DAT_0041b3a8 = unaff_ESI;
  _DAT_0041b3ac = unaff_EBX;
  _DAT_0041b3b4 = uVar3;
  _DAT_0041b3bc = unaff_EBP;
  DAT_0041b3c0 = unaff_retaddr;
  _DAT_0041b3c4 = in_CS;
  _DAT_0041b3d0 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_0041442c);
  return;
}




exception * __thiscall FUN_00412b16(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_00412b31(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




exception * __thiscall FUN_00412b49(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_00412b64(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
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
  __std_exception_copy(param_1 + 4,this + 4);
  return this;
}




undefined4 * __thiscall FUN_00412bb9(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_00412766(this);
  }
  return (undefined4 *)this;
}




void FUN_00412be6(void)

{
  undefined4 local_10 [3];
  
  FUN_00412b31(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_00418e4c);
}




char * __fastcall FUN_00412c20(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0041b008 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




void __cdecl
FUN_00412c8b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0041b008,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00412d2a) */
/* WARNING: Removing unreachable block (ram,0x00412cef) */
/* WARNING: Removing unreachable block (ram,0x00412da2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  
  _DAT_0041b5d4 = 0;
  DAT_0041b010 = DAT_0041b010 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar4 = DAT_0041b010;
  if (BVar5 != 0) {
    DAT_0041b010 = DAT_0041b010 | 2;
    _DAT_0041b5d4 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[3] == 0x6c65746e && piVar1[2] == 0x49656e69) && piVar1[1] == 0x756e6547) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_0041b5d8 = DAT_0041b5d8 | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        DAT_0041b5d8 = DAT_0041b5d8 | 2;
      }
    }
    if ((uVar7 & 0x100000) != 0) {
      DAT_0041b010 = uVar4 | 6;
      _DAT_0041b5d4 = 2;
      if ((((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0041b010 = uVar4 | 0xe;
        _DAT_0041b5d4 = 3;
        if ((uVar6 & 0x20) != 0) {
          DAT_0041b010 = uVar4 | 0x2e;
          _DAT_0041b5d4 = 5;
        }
      }
    }
  }
  return 0;
}




undefined4 FUN_00412e45(void)

{
  return 1;
}




/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2017 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0041b018 != 0;
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
  FUN_00413038();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_00413038();
  }
  return;
}




/* Library Function - Single Match
    ___scrt_get_show_window_mode
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

WORD ___scrt_get_show_window_mode(void)

{
  _STARTUPINFOW local_48;
  
  memset(&local_48,0,0x44);
  GetStartupInfoW(&local_48);
  if (((byte)local_48.dwFlags & 1) != 0) {
    return local_48.wShowWindow;
  }
  return 10;
}




undefined4 FUN_00412fa5(void)

{
  return 0;
}




uint FUN_00412fa8(void)

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




void FUN_00412feb(void)

{
  SetUnhandledExceptionFilter(FUN_00412ff7);
  return;
}




undefined4 FUN_00412ff7(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413038(void)

{
  _DAT_0041b5dc = 0;
  return;
}




void FUN_00413040(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00413e13;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004124b9(param_1);
  FUN_00413080();
  return;
}




undefined * Catch_All_00413078(void)

{
  return &DAT_0041307e;
}




void FUN_00413080(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
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
  if ((DAT_0041b008 == 0xbb40e64e) || ((DAT_0041b008 & 0xffff0000) == 0)) {
    DAT_0041b008 = ___get_entropy();
    if (DAT_0041b008 == 0xbb40e64e) {
      DAT_0041b008 = 0xbb40e64f;
    }
    else if ((DAT_0041b008 & 0xffff0000) == 0) {
      DAT_0041b008 = DAT_0041b008 | (DAT_0041b008 | 0x4711) << 0x10;
    }
  }
  DAT_0041b004 = ~DAT_0041b008;
  return;
}




undefined4 FUN_00413128(void)

{
  return 0x4000;
}




void FUN_0041312e(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0041b5e0);
  return;
}




undefined1 FUN_0041313a(void)

{
  return 1;
}




void FUN_0041313d(void)

{
  code *pcVar1;
  errno_t eVar2;
  
  eVar2 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar2 == 0) {
    return;
  }
  ___scrt_fastfail();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_0041315e(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00401060();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_00401e80();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}




bool FUN_0041317b(void)

{
  return DAT_0041b014 == 0;
}




undefined * FUN_00413187(void)

{
  return &DAT_0041d634;
}




undefined * FUN_0041318d(void)

{
  return &DAT_0041d630;
}




/* WARNING: Removing unreachable block (ram,0x004131a3) */
/* WARNING: Removing unreachable block (ram,0x004131a4) */
/* WARNING: Removing unreachable block (ram,0x004131aa) */
/* WARNING: Removing unreachable block (ram,0x004131b4) */
/* WARNING: Removing unreachable block (ram,0x004131bb) */

void FUN_00413193(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x004131cf) */
/* WARNING: Removing unreachable block (ram,0x004131d0) */
/* WARNING: Removing unreachable block (ram,0x004131d6) */
/* WARNING: Removing unreachable block (ram,0x004131e0) */
/* WARNING: Removing unreachable block (ram,0x004131e7) */

void FUN_004131bf(void)

{
  return;
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




void Unwind_00413500(void)

{
  int unaff_EBP;
  
  FUN_00401180(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00413508(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x14));
  return;
}




void Unwind_00413540(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x24));
  return;
}




void Unwind_0041354f(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x2c));
  return;
}




void Unwind_0041355e(void)

{
  int unaff_EBP;
  
  FUN_004121e0((undefined4 *)(unaff_EBP + -0x5c));
  return;
}




void Unwind_00413590(void)

{
  int unaff_EBP;
  
  FUN_004030e0((void *)(unaff_EBP + -0x7c));
  return;
}




void Unwind_00413598(void)

{
  int unaff_EBP;
  
  ~basic_string<>(unaff_EBP + -0x28);
  return;
}




void Unwind_004135a0(void)

{
  int unaff_EBP;
  
  ~basic_string<>(unaff_EBP + -0x40);
  return;
}




void Unwind_004135d0(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x28));
  return;
}




void Unwind_004135d8(void)

{
  int unaff_EBP;
  
  FUN_00402e30(unaff_EBP + -0x54);
  return;
}




void Unwind_00413670(void)

{
  FUN_00403590();
  return;
}




void Unwind_004136e0(void)

{
  int unaff_EBP;
  
  FUN_00405390((int *)(unaff_EBP + -0x1c));
  return;
}




void Unwind_00413730(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x40));
  return;
}




void Unwind_00413760(void)

{
  FUN_00403590();
  return;
}




void Unwind_00413790(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_004137c0(void)

{
  int unaff_EBP;
  
  FUN_00406c40(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004137f0(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_00413820(void)

{
  int unaff_EBP;
  
  FUN_00406bb0((undefined4 *)(unaff_EBP + -0x90));
  return;
}




void Unwind_00413860(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x2014));
  return;
}




void Unwind_004138a0(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x2014));
  return;
}




void Unwind_004138ae(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x201c));
  return;
}




void Unwind_004138bc(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x2024));
  return;
}




void Unwind_00413900(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x2018));
  return;
}




void Unwind_00413940(void)

{
  int unaff_EBP;
  
  FUN_00406f10((undefined4 *)(unaff_EBP + -0x20));
  return;
}




void Unwind_00413948(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_00413950(void)

{
  int unaff_EBP;
  
  FUN_00406ec0((undefined4 *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_00413980(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x1d0));
  return;
}




void Unwind_0041398b(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x1a8));
  return;
}




void Unwind_00413996(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -400));
  return;
}




void Unwind_004139a1(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (unaff_EBP + -0x178));
  return;
}




void Unwind_004139e0(void)

{
  int unaff_EBP;
  
  FUN_00408110(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00413a10(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}




void Unwind_00413a40(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_00413a70(void)

{
  int unaff_EBP;
  
  FUN_00407200(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00413aa0(void)

{
  int unaff_EBP;
  
  FUN_00401180(*(undefined4 **)(unaff_EBP + -0x2014));
  return;
}




void Unwind_00413aab(void)

{
  int unaff_EBP;
  
  FUN_004121a0((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x2014) + 4));
  return;
}




void Unwind_00413ab9(void)

{
  int unaff_EBP;
  
  FUN_0040a1e0((void *)(*(int *)(unaff_EBP + -0x2014) + 0xbc));
  return;
}




void Unwind_00413aca(void)

{
  int unaff_EBP;
  
  FUN_0040dba0(*(int *)(unaff_EBP + -0x2014) + 0xe4);
  return;
}




void Unwind_00413adb(void)

{
  int unaff_EBP;
  
  ~basic_string<>(*(int *)(unaff_EBP + -0x2014) + 0xf0);
  return;
}




void Unwind_00413aec(void)

{
  int unaff_EBP;
  
  ~basic_string<>(*(int *)(unaff_EBP + -0x2014) + 0x110);
  return;
}




void Unwind_00413b50(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x202c));
  return;
}




void Unwind_00413b65(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x2034));
  return;
}




void Unwind_00413b77(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x203c));
  return;
}




void Unwind_00413b89(void)

{
  int unaff_EBP;
  
  FUN_00412766(*(void **)(unaff_EBP + -0x2044));
  return;
}




void Unwind_00413b9b(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x204c));
  return;
}




void Unwind_00413be0(void)

{
  int unaff_EBP;
  
  ~basic_string<>(unaff_EBP + -0x40);
  return;
}




void Unwind_00413c10(void)

{
  int unaff_EBP;
  
  FUN_004121e0((undefined4 *)(unaff_EBP + -0x4c));
  return;
}




void Unwind_00413c40(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x4c));
  return;
}




void Unwind_00413c70(void)

{
  int unaff_EBP;
  
  FUN_00409d60((undefined4 *)(unaff_EBP + -0x2038));
  return;
}




void Unwind_00413c7b(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x2040));
  return;
}




void Unwind_00413cb0(void)

{
  int unaff_EBP;
  
  FUN_00409b30((undefined4 *)(unaff_EBP + -0x5c));
  return;
}




void Unwind_00413cb8(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x70));
  return;
}




void Unwind_00413d90(void)

{
  int unaff_EBP;
  
  FUN_00408110(*(undefined4 **)(unaff_EBP + -0x2014));
  return;
}




void Unwind_00413d9b(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x2018));
  return;
}




void Unwind_00413da9(void)

{
  int unaff_EBP;
  
  FUN_00406a10(*(undefined4 *)(unaff_EBP + -0x2020));
  return;
}




void Unwind_00413de0(void)

{
  int unaff_EBP;
  
  FUN_00407000((undefined4 *)(unaff_EBP + -0x154));
  return;
}



