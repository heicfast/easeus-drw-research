
void FUN_100011d0(void)

{
  FUN_10003620(&DAT_100185dc);
  return;
}




void FUN_100011f0(void)

{
  FUN_10003620(&DAT_10018684);
  return;
}




void FUN_10001210(void)

{
  FUN_10003620(&DAT_10018614);
  return;
}




void FUN_10001230(void)

{
  FUN_10003620(&DAT_10018678);
  return;
}




void FUN_10001250(void)

{
  FUN_10003620(&DAT_10018670);
  return;
}




void FUN_10001270(void)

{
  FUN_10003620(&DAT_10018620);
  return;
}




void FUN_10001290(void)

{
  FUN_10003620(&DAT_10018680);
  return;
}




void FUN_100012b0(void)

{
  FUN_10003620(&DAT_10018674);
  return;
}




void FUN_100012d0(void)

{
  FUN_10003620(&DAT_100185e0);
  return;
}




void FUN_100012f0(void)

{
  FUN_10003620(&DAT_100185d8);
  return;
}




void FUN_10001310(void)

{
  FUN_10003620(&DAT_100185e4);
  return;
}




void FUN_10001330(void)

{
  FUN_10003620(&DAT_10018668);
  return;
}




void FUN_10001350(void)

{
  FUN_10003620(&DAT_1001867c);
  return;
}




void FUN_10001370(void)

{
  FUN_10003620(&DAT_10018618);
  return;
}




void FUN_10001390(void)

{
  FUN_10003620(&DAT_10018630);
  return;
}




void FUN_100013b0(void)

{
  FUN_10003620(&DAT_10018628);
  return;
}




void FUN_100013d0(void)

{
  FUN_10003620(&DAT_10018624);
  return;
}




void FUN_100013f0(void)

{
  FUN_10003620(&DAT_1001861c);
  return;
}




void FUN_10001410(void)

{
  FUN_10003620(&DAT_10018664);
  return;
}




void FUN_10001430(void)

{
  FUN_10003620(&DAT_1001862c);
  return;
}




void FUN_10001450(void)

{
  FUN_10003620(&DAT_1001866c);
  return;
}




void FUN_10001470(void)

{
  FUN_10003620(&DAT_10018660);
  return;
}




void FUN_10001490(void)

{
  FUN_10003620(&DAT_1001865c);
  return;
}




void FUN_100014b0(void)

{
  FUN_100016b0((undefined4 *)&DAT_10018634);
  _atexit(FUN_1000e980);
  return;
}




void FUN_100014d0(void)

{
  FUN_10001830((_ATL_WIN_MODULE70 *)&DAT_100185e8);
  _atexit(FUN_1000e990);
  return;
}




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




void __cdecl FUN_10001560(DWORD param_1,DWORD param_2)

{
  RaiseException(param_1,param_2,0,(ULONG_PTR *)0x0);
  return;
}




void __cdecl FUN_10001580(LPCRITICAL_SECTION param_1,DWORD param_2,DWORD param_3)

{
  InitializeCriticalSectionEx(param_1,param_2,param_3);
  return;
}




undefined4 * __fastcall FUN_100015a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}




void FUN_100015d0(void)

{
  return;
}




HRESULT __fastcall FUN_100015e0(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  DWORD x;
  HRESULT local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  iVar1 = FUN_10001580(param_1,0,0);
  if (iVar1 == 0) {
    x = GetLastError();
    local_14 = _HRESULT_FROM_WIN32(x);
  }
  ExceptionList = local_10;
  return local_14;
}




/* Library Function - Single Match
    public: long __thiscall ATL::CComCriticalSection::Term(void)
   
   Library: Visual Studio 2012 Debug */

long __thiscall ATL::CComCriticalSection::Term(CComCriticalSection *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return 0;
}




undefined4 __fastcall FUN_10001670(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




/* Library Function - Single Match
    public: __thiscall ATL::CComBSTR::~CComBSTR(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual
   Studio 2010 Debug */

void __thiscall ATL::CComBSTR::~CComBSTR(CComBSTR *this)

{
  Ordinal_6(*(undefined4 *)this);
  return;
}




undefined4 * __fastcall FUN_100016b0(undefined4 *param_1)

{
  HRESULT HVar1;
  
  FUN_100017f0((int)param_1);
  *param_1 = 0;
  param_1[1] = 0x10000000;
  param_1[2] = &DAT_10014498;
  param_1[3] = &DAT_10014498;
  HVar1 = FUN_100015e0((LPCRITICAL_SECTION)(param_1 + 4));
  if (HVar1 < 0) {
    DAT_100165a1 = 1;
  }
  else {
    *param_1 = 0x28;
  }
  return param_1;
}




void __fastcall FUN_10001710(CAtlComModule *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ATL::CAtlComModule::Term(param_1);
  ATL::_ATL_COM_MODULE70::~_ATL_COM_MODULE70((_ATL_COM_MODULE70 *)param_1);
  ExceptionList = local_10;
  return;
}




/* Library Function - Single Match
    public: void __thiscall ATL::CAtlComModule::Term(void)
   
   Library: Visual Studio 2012 Debug */

void __thiscall ATL::CAtlComModule::Term(CAtlComModule *this)

{
  int *piVar1;
  int *piVar2;
  int *local_8;
  
  if (*(int *)this != 0) {
    for (local_8 = *(int **)(this + 8); local_8 < *(int **)(this + 0xc); local_8 = local_8 + 1) {
      if ((*local_8 != 0) && (piVar1 = *(int **)(*local_8 + 0x10), *piVar1 != 0)) {
        piVar2 = (int *)DecodePointer((PVOID)*piVar1);
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar1 = 0;
      }
    }
    CComCriticalSection::Term((CComCriticalSection *)(this + 0x10));
    *(undefined4 *)this = 0;
  }
  return;
}




int __fastcall FUN_100017f0(int param_1)

{
  FUN_100015a0((undefined4 *)(param_1 + 0x10));
  return param_1;
}




/* Library Function - Single Match
    public: __thiscall ATL::_ATL_COM_MODULE70::~_ATL_COM_MODULE70(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
   Studio 2012 Debug */

void __thiscall ATL::_ATL_COM_MODULE70::~_ATL_COM_MODULE70(_ATL_COM_MODULE70 *this)

{
  FUN_100015d0();
  return;
}




_ATL_WIN_MODULE70 * __fastcall FUN_10001830(_ATL_WIN_MODULE70 *param_1)

{
  HRESULT HVar1;
  
  ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(param_1);
  *(undefined4 *)param_1 = 0x2c;
  HVar1 = FUN_10001a20((int *)param_1);
  if (HVar1 < 0) {
    DAT_100165a1 = 1;
    *(undefined4 *)param_1 = 0;
  }
  return param_1;
}




void __fastcall FUN_10001880(CAtlWinModule *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ATL::CAtlWinModule::Term(param_1);
  ATL::_ATL_WIN_MODULE70::~_ATL_WIN_MODULE70((_ATL_WIN_MODULE70 *)param_1);
  ExceptionList = local_10;
  return;
}




/* Library Function - Single Match
    public: void __thiscall ATL::CAtlWinModule::Term(void)
   
   Library: Visual Studio */

void __thiscall ATL::CAtlWinModule::Term(CAtlWinModule *this)

{
  HINSTANCE pHVar1;
  
  pHVar1 = (HINSTANCE)FUN_10001670(0x100161c0);
  FUN_10001980((int *)this,pHVar1);
  return;
}




/* Library Function - Single Match
    public: __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(void)
   
   Library: Visual Studio 2005 Debug */

_ATL_WIN_MODULE70 * __thiscall ATL::_ATL_WIN_MODULE70::_ATL_WIN_MODULE70(_ATL_WIN_MODULE70 *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e44b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100015a0((undefined4 *)(this + 4));
  local_8 = 0;
  CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::
  CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>
            ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
             (this + 0x20));
  ExceptionList = local_10;
  return this;
}




/* Library Function - Single Match
    public: __thiscall ATL::_ATL_WIN_MODULE70::~_ATL_WIN_MODULE70(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
   Studio 2012 Debug */

void __thiscall ATL::_ATL_WIN_MODULE70::~_ATL_WIN_MODULE70(_ATL_WIN_MODULE70 *this)

{
  FUN_10003630((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
               (this + 0x20));
  FUN_100015d0();
  return;
}




undefined4 FUN_10001980(int *param_1,HINSTANCE param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  HINSTANCE hInstance;
  int local_8;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0x80070057;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0x2c) {
    local_8 = 0;
    while( true ) {
      iVar2 = FUN_10001670((int)(param_1 + 8));
      if (iVar2 <= local_8) break;
      hInstance = param_2;
      puVar3 = (ushort *)FUN_10002f30(param_1 + 8,local_8);
      UnregisterClassW((LPCWSTR)(uint)*puVar3,hInstance);
      local_8 = local_8 + 1;
    }
    ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
              ((CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *)
               (param_1 + 8));
    ATL::CComCriticalSection::Term((CComCriticalSection *)(param_1 + 1));
    *param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}




HRESULT FUN_10001a20(int *param_1)

{
  HRESULT HVar1;
  
  if (param_1 == (int *)0x0) {
    HVar1 = -0x7ff8ffa9;
  }
  else if (*param_1 == 0x2c) {
    param_1[7] = 0;
    HVar1 = FUN_100015e0((LPCRITICAL_SECTION)(param_1 + 1));
  }
  else {
    HVar1 = -0x7ff8ffa9;
  }
  return HVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void * __thiscall Concurrency::details::GlobalCore::`vector deleting
   destructor'(unsigned int)
    public: void * __thiscall Concurrency::details::GlobalNode::`vector deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

CComBSTR * __thiscall FID_conflict__vector_deleting_destructor_(void *this,uint param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 & 2) == 0) {
    FUN_10001b20((CComBSTR *)this);
    if ((param_1 & 1) != 0) {
      FUN_1000ccb2(this);
    }
  }
  else {
    _eh_vector_destructor_iterator_(this,0xc,*(uint *)((int)this + -4),FUN_10001b20);
    if ((param_1 & 1) != 0) {
      FUN_1000c756((void *)((int)this + -4));
    }
    this = (void *)((int)this + -4);
  }
  ExceptionList = local_10;
  return (CComBSTR *)this;
}




void __fastcall FUN_10001b20(CComBSTR *param_1)

{
  ATL::CComBSTR::~CComBSTR(param_1);
  return;
}




void FUN_10001b40(void)

{
  return;
}




/* Library Function - Single Match
    public: static void * __cdecl std::_Default_allocate_traits::_Allocate(unsigned int)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void * __cdecl std::_Default_allocate_traits::_Allocate(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000c764(param_1);
  return pvVar1;
}




void __cdecl FUN_10001b70(int *param_1,int *param_2)

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




float10 __cdecl FUN_10001be0(int param_1,int param_2)

{
  return (float10)((double)param_1 / (double)param_2);
}




undefined4 * __fastcall FUN_10001c00(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION p_Var3;
  undefined4 uVar4;
  undefined4 *local_24;
  LPCRITICAL_SECTION local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e48a;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_10002f10(param_1 + 0x15);
  local_8 = 0;
  param_1[0x17] = 0;
  p_Var3 = (LPCRITICAL_SECTION)FUN_1000c764(0x1c);
  local_8._0_1_ = 1;
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
    local_20 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    local_20 = FUN_1000bb20(p_Var3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x13] = local_20;
  local_24 = (undefined4 *)FUN_1000c764(0x12);
  if (local_24 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    *local_24 = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0;
    *(undefined2 *)(local_24 + 4) = 0;
  }
  param_1[5] = local_24;
  if (param_1[5] != 0) {
    puVar1 = (undefined4 *)param_1[5];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar4 = av_frame_alloc(uVar2);
  param_1[3] = uVar4;
  ExceptionList = local_10;
  return param_1;
}




void __fastcall FUN_10001da0(int param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e4b0;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10001ed0(param_1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
      FUN_10001e80(*(void **)(param_1 + 0x4c),1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1000ccb2(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    av_frame_free(param_1 + 0xc,uVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((void *)(param_1 + 0x54));
  ExceptionList = local_10;
  return;
}




LPCRITICAL_SECTION __thiscall FUN_10001e80(void *this,uint param_1)

{
  FUN_1000bb40((LPCRITICAL_SECTION)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (LPCRITICAL_SECTION)this;
}




undefined4 __fastcall FUN_10001eb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




void __fastcall FUN_10001ed0(int param_1)

{
  undefined4 local_10;
  void *local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_10002c10(param_1);
  if (*(int *)(local_8 + 0x4c) != 0) {
    FUN_1000bb80(&local_10,*(LPCRITICAL_SECTION *)(local_8 + 0x4c));
    if (*(int *)(local_8 + 8) != 0) {
      avcodec_free_context(local_8 + 8);
    }
    *(undefined4 *)(local_8 + 8) = 0;
    if (*(int *)(local_8 + 0x10) != 0) {
      swr_close(*(undefined4 *)(local_8 + 0x10));
    }
    *(undefined4 *)(local_8 + 0x10) = 0;
    if (*(int *)(local_8 + 0x18) != 0) {
      local_c = *(void **)(local_8 + 0x18);
      free(local_c);
      *(undefined4 *)(local_8 + 0x18) = 0;
    }
    *(undefined4 *)(local_8 + 4) = 0;
    *(undefined8 *)(local_8 + 0x40) = 0;
    *(undefined4 *)(local_8 + 0x1c) = 0xffffffff;
    *(undefined4 *)(local_8 + 0x5c) = 0;
    FUN_1000bbb0(&local_10);
  }
  return;
}




float10 __thiscall FUN_10001fa0(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e4d8;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_1;
  FUN_10001ed0((int)param_1);
  if (((param_3 == 0) || (local_14[0x13] == 0)) || (local_14[5] == 0)) {
    fVar3 = (float10)0;
  }
  else {
    FUN_1000bb80(&local_18,(LPCRITICAL_SECTION)local_14[0x13]);
    local_8 = 0;
    local_14[1] = param_3;
    local_14[7] = *(int *)(local_14[1] + 4);
    iVar2 = avcodec_alloc_context3(0,uVar1);
    local_14[2] = iVar2;
    if (local_14[2] == 0) {
      local_8 = 0xffffffff;
      FUN_1000bbb0(&local_18);
      fVar3 = (float10)0.0;
    }
    else {
      iVar2 = avcodec_parameters_to_context(local_14[2],*(undefined4 *)(param_3 + 0xc));
      if (iVar2 < 0) {
        local_8 = 0xffffffff;
        FUN_1000bbb0(&local_18);
        fVar3 = (float10)0.0;
      }
      else {
        iVar2 = avcodec_find_decoder(*(undefined4 *)(local_14[2] + 0x10));
        *local_14 = iVar2;
        if (*local_14 == 0) {
          local_8 = 0xffffffff;
          FUN_1000bbb0(&local_18);
          fVar3 = (float10)0.0;
        }
        else {
          *(undefined4 *)(local_14[2] + 0x248) = 0;
          iVar2 = avcodec_open2(local_14[2],*local_14,0);
          if (iVar2 == 0) {
            local_14[0x17] = *(int *)(local_14[2] + 0x13c);
            *(undefined2 *)(local_14[5] + 2) = *(undefined2 *)(local_14[2] + 0x13c);
            if ((*(short *)(local_14[5] + 2) == 0) || (2 < *(ushort *)(local_14[5] + 2))) {
              *(undefined2 *)(local_14[5] + 2) = 2;
            }
            *(undefined2 *)local_14[5] = 1;
            *(undefined4 *)(local_14[5] + 4) = *(undefined4 *)(local_14[2] + 300);
            if (*(int *)(local_14[5] + 4) == 0) {
              *(undefined4 *)(local_14[5] + 4) = 0xac44;
            }
            *(undefined2 *)(local_14[5] + 0xe) = 0x10;
            iVar2 = (uint)*(ushort *)(local_14[5] + 2) * (uint)*(ushort *)(local_14[5] + 0xe);
            *(short *)(local_14[5] + 0xc) = (short)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
            *(uint *)(local_14[5] + 8) =
                 (uint)*(ushort *)(local_14[5] + 0xc) * *(int *)(local_14[5] + 4);
            fVar3 = FUN_10002260((int)local_14);
            local_8 = 0xffffffff;
            FUN_1000bbb0(&local_18);
            fVar3 = (float10)(double)fVar3;
          }
          else {
            local_8 = 0xffffffff;
            FUN_1000bbb0(&local_18);
            fVar3 = (float10)0.0;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return fVar3;
}




undefined4 __fastcall FUN_10002240(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




float10 __fastcall FUN_10002260(int param_1)

{
  int iVar1;
  float10 fVar2;
  double in_XMM0_Qa;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  double local_48;
  double local_40;
  double local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 local_20;
  void *local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    fVar2 = (float10)0;
  }
  else {
    local_8 = param_1;
    iVar1 = av_samples_get_buffer_size
                      (0,*(undefined2 *)(*(int *)(param_1 + 0x14) + 2),
                       *(undefined4 *)(*(int *)(param_1 + 0x14) + 4),1,0);
    *(int *)(local_8 + 0x20) = iVar1 << 2;
    if (*(int *)(local_8 + 0x18) != 0) {
      local_1c = *(void **)(local_8 + 0x18);
      free(local_1c);
      *(undefined4 *)(local_8 + 0x18) = 0;
    }
    local_20 = FUN_1000ccc0(*(size_t *)(local_8 + 0x20));
    *(undefined4 *)(local_8 + 0x18) = local_20;
    if (*(int *)(local_8 + 0x18) == 0) {
      fVar2 = (float10)0;
    }
    else {
      memset(*(void **)(local_8 + 0x18),0,*(size_t *)(local_8 + 0x20));
      *(undefined4 *)(local_8 + 0x50) = 0;
      if (*(short *)(*(int *)(local_8 + 0x14) + 2) == 1) {
        local_30 = 4;
      }
      else {
        local_30 = 3;
      }
      local_2c = 0;
      av_channel_layout_from_mask(local_8 + 0x28,local_30,0);
      local_c = *(int *)(local_8 + 8);
      if (*(int *)(local_c + 0x140) == 0 && *(int *)(local_c + 0x144) == 0) {
        local_10 = (undefined4 *)(local_8 + 0x28);
      }
      else {
        local_10 = (undefined4 *)(*(int *)(local_8 + 8) + 0x138);
      }
      local_24 = local_10;
      local_70 = *local_10;
      local_6c = local_10[1];
      local_68 = local_10[2];
      local_64 = local_10[3];
      local_60 = local_10[4];
      local_5c = local_10[5];
      if (*(int *)(local_8 + 0x10) != 0) {
        swr_close(*(undefined4 *)(local_8 + 0x10));
      }
      swr_alloc_set_opts2(local_8 + 0x10,local_8 + 0x28,1,
                          *(undefined4 *)(*(int *)(local_8 + 0x14) + 4),&local_70,
                          *(undefined4 *)(*(int *)(local_8 + 8) + 0x130),
                          *(undefined4 *)(*(int *)(local_8 + 8) + 300),0,0);
      if (*(int *)(local_8 + 0x10) == 0) {
        fVar2 = (float10)0;
      }
      else {
        if ((*(int *)(local_8 + 4) != 0) &&
           ((local_14 = *(int *)(local_8 + 4), *(int *)(local_14 + 0x20) != 0 ||
            (*(int *)(local_14 + 0x24) != -0x80000000)))) {
          FUN_1000e300();
          local_38 = in_XMM0_Qa;
          fVar2 = FUN_10001be0(*(int *)(*(int *)(local_8 + 4) + 0x14),
                               *(int *)(*(int *)(local_8 + 4) + 0x18));
          local_40 = (double)fVar2;
          in_XMM0_Qa = local_38 * local_40;
          *(double *)(local_8 + 0x40) = in_XMM0_Qa;
        }
        local_28 = swr_init(*(undefined4 *)(local_8 + 0x10));
        if (((local_28 == 0) && (0 < *(int *)(*(int *)(local_8 + 4) + 0x18))) &&
           (0 < *(int *)(*(int *)(local_8 + 4) + 0x14))) {
          local_18 = *(int *)(local_8 + 4);
          if ((*(int *)(local_18 + 0x28) == 0) && (*(int *)(local_18 + 0x2c) == -0x80000000)) {
            fVar2 = (float10)0;
          }
          else {
            FUN_1000e300();
            local_48 = in_XMM0_Qa;
            fVar2 = FUN_10001be0(*(int *)(*(int *)(local_8 + 4) + 0x14),
                                 *(int *)(*(int *)(local_8 + 4) + 0x18));
            fVar2 = (float10)(local_48 * (double)fVar2);
          }
        }
        else {
          fVar2 = (float10)0;
        }
      }
    }
  }
  return fVar2;
}




int __thiscall FUN_10002540(void *this,int param_1)

{
  int local_10;
  int local_8;
  
  if ((*(int *)((int)this + 8) == 0) || (param_1 == 0)) {
    local_10 = -1;
  }
  else {
    local_10 = avcodec_send_packet(*(undefined4 *)((int)this + 8),param_1);
    local_8 = 0;
    while ((local_8 < 0x20 && (local_10 == -0xb))) {
      local_10 = avcodec_send_packet(*(undefined4 *)((int)this + 8),param_1);
      local_8 = local_8 + 1;
    }
  }
  return local_10;
}




undefined4 __thiscall FUN_100025c0(void *this,double param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  undefined4 local_40;
  void *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  size_t local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e517;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)((int)this + 8) == 0) || (*(int *)((int)this + 0x20) <= *(int *)((int)this + 0x50)))
     || (*(int *)((int)this + 0x18) == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (((*(int *)((int)this + 0x4c) == 0) || (*(int *)((int)this + 0xc) == 0)) ||
          ((*(int *)((int)this + 0x10) == 0 || (*(int *)((int)this + 0x14) == 0)))) {
    uVar2 = 0xfffffffe;
  }
  else {
    local_1c = 0;
    local_14 = this;
    FUN_1000bb80(&local_40,*(LPCRITICAL_SECTION *)((int)this + 0x4c));
    local_8 = 0;
LAB_1000265b:
    local_1c = avcodec_receive_frame
                         (*(undefined4 *)((int)local_14 + 8),*(undefined4 *)((int)local_14 + 0xc),
                          uVar1);
    if (local_1c == 0) {
      local_20 = *(int *)((int)local_14 + 0xc);
      if (((*(int *)(local_20 + 0xd0) != 0) || (*(int *)(local_20 + 0xd4) != -0x80000000)) &&
         (0 < *(int *)(*(int *)((int)local_14 + 4) + 0x14))) goto code_r0x100026ae;
      goto LAB_10002705;
    }
LAB_1000284b:
    if (local_1c == -0x20464f45) {
      *(undefined1 *)((int)local_14 + 0x48) = 1;
    }
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_40);
    uVar2 = 0;
  }
  ExceptionList = local_10;
  return uVar2;
code_r0x100026ae:
  FUN_1000e300();
  fVar3 = FUN_10001be0(*(int *)(*(int *)((int)local_14 + 4) + 0x14),
                       *(int *)(*(int *)((int)local_14 + 4) + 0x18));
  dVar4 = in_XMM0_Qa * (double)fVar3;
  in_XMM0_Qa = param_1;
  if (param_1 <= dVar4) {
LAB_10002705:
    if (*(int *)(*(int *)((int)local_14 + 0xc) + 0x104) != *(int *)((int)local_14 + 0x5c)) {
      fVar3 = FUN_10002260((int)local_14);
      in_XMM0_Qa = 9.999999747378752e-05;
      if ((double)fVar3 < 9.999999747378752e-05) goto LAB_1000284b;
      *(undefined4 *)((int)local_14 + 0x5c) = *(undefined4 *)(*(int *)((int)local_14 + 0xc) + 0x104)
      ;
    }
    local_24 = swr_convert(*(undefined4 *)((int)local_14 + 0x10),(int)local_14 + 0x18,
                           *(undefined4 *)(*(int *)((int)local_14 + 0xc) + 0x4c),
                           *(undefined4 *)((int)local_14 + 0xc));
    if (local_24 < 1) goto LAB_1000284b;
    local_34 = *(undefined4 *)((int)local_14 + 0x2c);
    local_30 = av_samples_get_buffer_size(0,local_34,local_24,1);
    local_28 = (undefined4 *)FUN_1000c764(0x18);
    local_8._0_1_ = 1;
    if (local_28 == (undefined4 *)0x0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      local_2c = FUN_100045c0(local_28);
    }
    local_38 = local_2c;
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = local_2c;
    if (local_2c == (undefined4 *)0x0) goto LAB_1000284b;
    FUN_1000e300();
    FUN_10004680(local_18,*(void **)((int)local_14 + 0x18),local_30,in_XMM0_Qa);
    *(size_t *)((int)local_14 + 0x50) = *(int *)((int)local_14 + 0x50) + local_30;
    local_3c = (void *)((int)local_14 + 0x54);
    FUN_10002dc0(local_3c,&local_18);
  }
  goto LAB_1000265b;
}




size_t __thiscall FUN_10002890(void *this,void *param_1,size_t param_2,double *param_3)

{
  bool bVar1;
  int *piVar2;
  float10 fVar3;
  double dVar4;
  ulonglong uVar5;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  size_t local_48;
  undefined4 local_44;
  void *local_40;
  void *local_3c;
  shared_ptr<class___ExceptionPtr> *local_38;
  void *local_34;
  int local_30;
  shared_ptr<class___ExceptionPtr> *local_2c;
  undefined4 local_28;
  size_t local_24;
  size_t local_20;
  void *local_1c;
  shared_ptr<class___ExceptionPtr> *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e548;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((param_1 == (void *)0x0) || (*(int *)((int)this + 0x4c) == 0)) ||
     (*(int *)((int)this + 4) == 0)) {
    local_48 = 0xffffffff;
  }
  else {
    local_1c = this;
    FUN_1000bb80(&local_44,*(LPCRITICAL_SECTION *)((int)this + 0x4c));
    local_8 = 0;
    while (((*(int *)((int)local_1c + 4) != 0 && (0 < (int)param_2)) &&
           (bVar1 = FUN_10002e20((int)local_1c + 0x54), !bVar1))) {
      local_34 = (void *)((int)local_1c + 0x54);
      piVar2 = (int *)FUN_10002e50(local_34,local_4c);
      piVar2 = (int *)FUN_10002da0(piVar2);
      local_18 = (shared_ptr<class___ExceptionPtr> *)*piVar2;
      if (local_18 == (shared_ptr<class___ExceptionPtr> *)0x0) break;
      if ((int)param_2 < *(int *)(local_18 + 8)) {
        local_24 = param_2;
      }
      else {
        local_24 = *(size_t *)(local_18 + 8);
      }
      local_20 = local_24;
      if (*(int *)(local_18 + 4) != 0) {
        memcpy(param_1,*(void **)(local_18 + 4),local_24);
      }
      param_1 = (void *)((int)param_1 + local_20);
      param_2 = param_2 - local_20;
      *(size_t *)((int)local_1c + 0x50) = *(int *)((int)local_1c + 0x50) - local_20;
      uVar5 = FUN_1000e1af();
      local_54 = (int)uVar5;
      if (((local_54 == 0) && (local_50 = (int)(uVar5 >> 0x20), local_50 == -0x80000000)) ||
         ((*(int *)(*(int *)((int)local_1c + 4) + 0x14) < 1 ||
          (*(int *)(*(int *)((int)local_1c + 4) + 0x18) < 1)))) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
      local_11 = (char)local_28;
      if ((char)local_28 != '\0') {
        fVar3 = FUN_10001be0(*(int *)(*(int *)((int)local_1c + 4) + 0x14),
                             *(int *)(*(int *)((int)local_1c + 4) + 0x18));
        *param_3 = (double)fVar3 * *(double *)(local_18 + 0x10);
      }
      if ((int)local_20 < *(int *)(local_18 + 8)) {
        *(size_t *)(local_18 + 8) = *(int *)(local_18 + 8) - local_20;
        if (((0 < *(int *)(local_18 + 8)) && (0 < (int)local_20)) && (*(int *)(local_18 + 4) != 0))
        {
          local_40 = (void *)(*(int *)(local_18 + 4) + local_20);
          memmove(*(void **)(local_18 + 4),local_40,*(size_t *)(local_18 + 8));
          if ((local_11 != '\0') && (*(int *)(*(int *)((int)local_1c + 0x14) + 8) != 0)) {
            dVar4 = (double)(int)local_20;
            fVar3 = FUN_10001be0(*(int *)(*(int *)((int)local_1c + 4) + 0x14),
                                 *(int *)(*(int *)((int)local_1c + 4) + 0x18));
            local_30 = *(int *)(*(int *)((int)local_1c + 0x14) + 8);
            *(double *)(local_18 + 0x10) =
                 *(double *)(local_18 + 0x10) +
                 (dVar4 / (double)fVar3) /
                 ((double)local_30 + *(double *)(&DAT_10013640 + (local_30 >> 0x1f) * -8));
          }
        }
      }
      else {
        FUN_10002df0((void *)((int)local_1c + 0x54));
        if (local_18 != (shared_ptr<class___ExceptionPtr> *)0x0) {
          local_38 = local_18;
          local_2c = local_18;
          if (local_18 == (shared_ptr<class___ExceptionPtr> *)0x0) {
            local_3c = (void *)0x0;
          }
          else {
            local_3c = std::shared_ptr<class___ExceptionPtr>::_scalar_deleting_destructor_
                                 (local_18,1);
          }
          local_18 = (shared_ptr<class___ExceptionPtr> *)0x0;
        }
      }
    }
    if (param_2 != 0) {
      memset(param_1,0,param_2);
    }
    local_48 = param_2;
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_44);
  }
  ExceptionList = local_10;
  return local_48;
}




/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<class __ExceptionPtr>::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void * __thiscall
std::shared_ptr<class___ExceptionPtr>::_scalar_deleting_destructor_
          (shared_ptr<class___ExceptionPtr> *this,uint param_1)

{
  ~shared_ptr<class___ExceptionPtr>(this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return this;
}




bool __fastcall FUN_10002be0(int param_1)

{
  return *(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x20);
}




void __fastcall FUN_10002c10(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_30 [4];
  undefined4 local_2c;
  void *local_28;
  shared_ptr<class___ExceptionPtr> *local_24;
  void *local_20;
  shared_ptr<class___ExceptionPtr> *local_1c;
  shared_ptr<class___ExceptionPtr> *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e578;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x4c) != 0) {
    local_14 = param_1;
    FUN_1000bb80(&local_2c,*(LPCRITICAL_SECTION *)(param_1 + 0x4c));
    local_8 = 0;
    if (*(int *)(local_14 + 8) != 0) {
      avcodec_flush_buffers(*(undefined4 *)(local_14 + 8),uVar2);
    }
    while (bVar1 = FUN_10002e20(local_14 + 0x54), !bVar1) {
      local_20 = (void *)(local_14 + 0x54);
      piVar3 = (int *)FUN_10002e50(local_20,local_30);
      puVar4 = (undefined4 *)FUN_10002da0(piVar3);
      local_18 = (shared_ptr<class___ExceptionPtr> *)*puVar4;
      FUN_10002df0((void *)(local_14 + 0x54));
      if (local_18 != (shared_ptr<class___ExceptionPtr> *)0x0) {
        local_24 = local_18;
        local_1c = local_18;
        if (local_18 == (shared_ptr<class___ExceptionPtr> *)0x0) {
          local_28 = (void *)0x0;
        }
        else {
          local_28 = std::shared_ptr<class___ExceptionPtr>::_scalar_deleting_destructor_(local_18,1)
          ;
        }
        local_18 = (shared_ptr<class___ExceptionPtr> *)0x0;
      }
    }
    *(undefined4 *)(local_14 + 0x50) = 0;
    *(undefined1 *)(local_14 + 0x48) = 0;
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_2c);
  }
  ExceptionList = local_10;
  return;
}




undefined1 __fastcall FUN_10002d20(int *param_1)

{
  bool bVar1;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if ((param_1[7] < 0) || (*param_1 == 0)) {
    local_5 = 1;
  }
  else {
    local_c = param_1;
    FUN_1000bb80(&local_14,(LPCRITICAL_SECTION)param_1[0x13]);
    if (((char)local_c[0x12] == '\0') || (bVar1 = FUN_10002e20(local_c + 0x15), !bVar1)) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
    local_5 = (undefined1)local_10;
    FUN_1000bbb0(&local_14);
  }
  return local_5;
}




void __fastcall FUN_10002da0(int *param_1)

{
  FUN_10003020(param_1);
  return;
}




void __thiscall FUN_10002dc0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined1 local_10 [4];
  int local_c;
  void *local_8;
  
  local_8 = this;
  piVar1 = (int *)FUN_100031a0(this,local_10);
  local_c = *piVar1;
  FUN_10003670(local_8,local_c,param_1);
  return;
}




void __fastcall FUN_10002df0(void *param_1)

{
  undefined4 *puVar1;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined4 local_c;
  void *local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_10002e50(param_1,local_10);
  local_c = *puVar1;
  FUN_10003150(local_14,local_c);
  return;
}




bool __fastcall FUN_10002e20(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)Mysize(param_1);
  return *piVar1 == 0;
}




void * __thiscall FUN_10002e50(void *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e5a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_100030a0(this);
  addressof<>(uVar1);
  puVar2 = (undefined4 *)FUN_10003080(this);
  FUN_10003040(param_1,*(undefined4 *)*puVar2);
  ExceptionList = local_10;
  return param_1;
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
          (void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10003130(param_1);
  FUN_10003000(param_1);
  ExceptionList = local_10;
  return;
}




undefined4 * __fastcall FUN_10002f10(undefined4 *param_1)

{
  FUN_10003110(param_1);
  return param_1;
}




int __thiscall FUN_10002f30(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    FUN_10001560(0xc000008c,1);
  }
                    /* WARNING: Load size is inaccurate */
  return *this + param_1 * 2;
}




/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleArray<unsigned short,class
   ATL::CSimpleArrayEqualHelper<unsigned short> >::RemoveAll(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug */

void __thiscall
ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
          (CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *this)

{
  int local_c;
  
  if (*(int *)this != 0) {
    for (local_c = 0; local_c < *(int *)(this + 4); local_c = local_c + 1) {
    }
    free(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* Library Function - Single Match
    public: __thiscall ATL::CSimpleArray<unsigned short,class ATL::CSimpleArrayEqualHelper<unsigned
   short> >::CSimpleArray<unsigned short,class ATL::CSimpleArrayEqualHelper<unsigned short> >(void)
   
   Library: Visual Studio 2005 Debug */

CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> * __thiscall
ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::
CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>
          (CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_> *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return this;
}




void __fastcall FUN_10003000(void *param_1)

{
  FUN_100030c0(param_1);
  return;
}




int __fastcall FUN_10003020(int *param_1)

{
  return *param_1 + 8;
}




void * __thiscall FUN_10003040(void *this,undefined4 param_1)

{
  _Vector_iterator<>(this,param_1);
  return this;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned int const & __thiscall std::_String_alloc<struct
   std::_String_base_types<unsigned short,class std::allocator<unsigned short> >
   >::_Mysize(void)const 
    public: unsigned int const & __thiscall std::_String_alloc<struct
   std::_String_base_types<wchar_t,class std::allocator<wchar_t> > >::_Mysize(void)const 
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

int __fastcall Mysize(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100030a0(param_1);
  return iVar1 + 4;
}




void __fastcall FUN_10003080(undefined4 param_1)

{
  FUN_100030a0(param_1);
  return;
}




void __fastcall FUN_100030a0(undefined4 param_1)

{
  Bxty(param_1);
  return;
}




void __fastcall FUN_100030c0(void *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_10003080(param_1);
  FUN_10003230(param_1,(void *)*puVar1);
  ExceptionList = local_10;
  return;
}




undefined4 * __fastcall FUN_10003110(undefined4 *param_1)

{
  FUN_10003260(param_1);
  return param_1;
}




void __fastcall FUN_10003130(void *param_1)

{
  FUN_100032f0(param_1);
  return;
}




void * FUN_10003150(void *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_10;
  int *local_c;
  void *local_8;
  
  puVar1 = FUN_10003200(&param_2,&local_10);
  local_c = FUN_100033b0(local_8,(int *)*puVar1);
  FUN_100032a0(local_8,local_c);
  FUN_10003400(local_8,param_1,param_2);
  return param_1;
}




void * __thiscall FUN_100031a0(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10003080(this);
  _Vector_iterator<>(param_1,*puVar1);
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




undefined4 * __thiscall FUN_10003200(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *this;
  FUN_100034a0((undefined4 *)this);
  *param_1 = uVar1;
  return param_1;
}




void __thiscall FUN_10003230(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100030a0(this);
  FUN_10003750(uVar1,param_1);
  return;
}




undefined4 * __fastcall FUN_10003260(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  _Compressed_pair<><>(param_1);
  uVar1 = FUN_100034c0(param_1);
  puVar2 = (undefined4 *)FUN_10003080(param_1);
  *puVar2 = uVar1;
  return param_1;
}




void __thiscall FUN_100032a0(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100030a0(this);
  addressof<>((int)param_1 + 8);
  destroy<>();
  FUN_10003750(uVar1,param_1);
  return;
}




void __fastcall FUN_100032f0(void *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e4b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_10003080(param_1);
  local_18 = *(undefined4 **)*puVar2;
  puVar2 = (undefined4 *)FUN_10003080(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_10003080(param_1);
  *(undefined4 *)*puVar2 = uVar1;
  puVar2 = (undefined4 *)FUN_10003080(param_1);
  uVar1 = *puVar2;
  piVar3 = (int *)FUN_10003080(param_1);
  *(undefined4 *)(*piVar3 + 4) = uVar1;
  puVar2 = (undefined4 *)Mysize(param_1);
  *puVar2 = 0;
  while( true ) {
    piVar3 = (int *)FUN_10003080(param_1);
    if (local_18 == (undefined4 *)*piVar3) break;
    puVar2 = (undefined4 *)*local_18;
    FUN_100032a0(param_1,local_18);
    local_18 = puVar2;
  }
  ExceptionList = local_10;
  return;
}




int * __thiscall FUN_100033b0(void *this,int *param_1)

{
  int *piVar1;
  
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  piVar1 = (int *)Mysize(this);
  *piVar1 = *piVar1 + -1;
  return param_1;
}




void * __thiscall FUN_10003400(void *this,void *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e5a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_100030a0(this);
  addressof<>(uVar1);
  FUN_10003040(param_1,param_2);
  ExceptionList = local_10;
  return param_1;
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
  FUN_10001b40();
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_100034a0(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)*param_1;
  return param_1;
}




void __fastcall FUN_100034c0(void *param_1)

{
  FUN_100034e0(param_1,0,0);
  return;
}




void __thiscall FUN_100034e0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e5c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100030a0(this);
  iVar1 = allocate(1);
  if (param_1 == 0) {
    param_1 = iVar1;
    param_2 = iVar1;
  }
  uVar2 = FUN_100030a0(this);
  local_8 = 0;
  piVar4 = &param_1;
  uVar3 = addressof<>(iVar1);
  construct<>(uVar2,uVar3,piVar4);
  piVar4 = &param_2;
  uVar3 = addressof<>(iVar1 + 4);
  construct<>(uVar2,uVar3,piVar4);
  FUN_100035a7();
  return;
}




void Catch_All_1000358a(void)

{
  int unaff_EBP;
  
  FUN_10003600(*(void **)(unaff_EBP + -0x14),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_100035a7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
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
  
  uVar1 = FUN_10003830(param_1);
  std::_Allocate<8,struct_std::_Default_allocate_traits,0>(uVar1);
  return;
}




void FUN_10003600(void *param_1,int param_2)

{
  _Deallocate<>(param_1,param_2 * 0xc);
  return;
}




undefined4 __fastcall FUN_10003620(undefined4 param_1)

{
  return param_1;
}




void __fastcall
FUN_10003630(CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>
             *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ATL::CSimpleArray<unsigned_short,class_ATL::CSimpleArrayEqualHelper<unsigned_short>_>::RemoveAll
            (param_1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_10003670(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  uVar2 = addressof<>(param_2);
  uVar2 = FUN_10003930(this,param_1,(int)puVar1,uVar2);
  FUN_100038b0(this,1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *puVar1 = uVar2;
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
    pvVar1 = (void *)FUN_10003a00(param_1);
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
    FUN_10001b70((int *)&param_1,(int *)&param_2);
  }
  FUN_1000ccb2(param_1);
  return;
}




void __cdecl FUN_10003750(undefined4 param_1,void *param_2)

{
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  addressof<>(param_2);
  destroy<>();
  addressof<>((int)param_2 + 4);
  destroy<>();
  FUN_10003890(&local_11,param_2,1);
  ExceptionList = local_10;
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
  FUN_10003860(param_1);
  return param_1;
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
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char *,char * const &>(class std::allocator<char> &,char * * const,char * const &)
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




int __cdecl FUN_10003830(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 * 0xc;
  if (0x15555555 < param_1) {
    local_8 = -1;
  }
  return local_8;
}




undefined4 * __fastcall FUN_10003860(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




void __cdecl FUN_10003890(undefined4 param_1,void *param_2,int param_3)

{
  _Deallocate<>(param_2,param_3 * 0xc);
  return;
}




void __thiscall FUN_100038b0(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10003900(this);
  piVar2 = (int *)Mysize(this);
  if ((iVar1 - *piVar2) - 1U < param_1) {
    std::_Xlength_error("list<T> too long");
  }
  piVar2 = (int *)Mysize(this);
  *piVar2 = *piVar2 + param_1;
  return;
}




void __fastcall FUN_10003900(undefined4 param_1)

{
  FUN_100030a0(param_1);
  FUN_10003920();
  return;
}




undefined4 FUN_10003920(void)

{
  return 0x15555555;
}




void __thiscall FUN_10003930(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e5e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_100034e0(this,param_1,param_2);
  uVar2 = FUN_100030a0(this);
  local_8 = 0;
  uVar3 = addressof<>(param_3);
  uVar4 = addressof<>(iVar1 + 8);
  construct<>(uVar2,uVar4,uVar3);
  FUN_100039d8();
  return;
}




void Catch_All_100039bb(void)

{
  int unaff_EBP;
  
  FUN_10003600(*(void **)(unaff_EBP + -0x14),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 FUN_100039d8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}




uint __cdecl FUN_10003a00(uint param_1)

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




/* Library Function - Single Match
    public: __thiscall Gdiplus::GdiplusStartupInput::GdiplusStartupInput(void (__stdcall*)(enum
   Gdiplus::DebugEventLevel,char *),int,int)
   
   Library: Visual Studio 2010 Debug */

GdiplusStartupInput * __thiscall
Gdiplus::GdiplusStartupInput::GdiplusStartupInput
          (GdiplusStartupInput *this,_func_void_DebugEventLevel_char_ptr *param_1,int param_2,
          int param_3)

{
  *(undefined4 *)this = 1;
  *(_func_void_DebugEventLevel_char_ptr **)(this + 4) = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  return this;
}




void FUN_10003ab0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  while( true ) {
    if (param_3 == 0) break;
    (*(code *)param_4)();
    param_3 = param_3 + -1;
  }
  return;
}




undefined4 FUN_10003af0(undefined4 param_1,int param_2)

{
  GdiplusStartupInput local_18 [16];
  undefined4 local_8;
  
  if (param_2 == 1) {
    destroy<>();
    local_8 = 0;
    Gdiplus::GdiplusStartupInput::GdiplusStartupInput
              (local_18,(_func_void_DebugEventLevel_char_ptr *)0x0,0,0);
    GdiplusStartup(&local_8,local_18,0);
  }
  return 1;
}




undefined4 * CreateMediaGraph(void)

{
  undefined4 *puVar1;
  undefined4 local_c;
  
                    /* 0x3b40  1  CreateMediaGraph */
  puVar1 = (undefined4 *)FUN_1000c764(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = FUN_10005560(puVar1);
  }
  return local_c;
}




void GatherPreviewBmpData(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 local_18 [4];
  uint local_8;
  
                    /* 0x3b80  2  GatherPreviewBmpData */
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    FUN_10003cf0(local_18);
    FUN_10003d40(param_1,param_2,param_3);
    FUN_100015d0();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void GetPreviewDataWithFile(LPCSTR param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *local_2d0;
  undefined4 local_2c8 [176];
  uint local_8;
  
                    /* 0x3be0  3  GetPreviewDataWithFile */
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  if (param_1 != (LPCSTR)0x0) {
    FUN_10007ed0(local_2c8);
    local_2d0 = param_1;
    do {
      cVar1 = *local_2d0;
      local_2d0 = local_2d0 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_10008010(local_2c8,param_1,(int)local_2d0 - (int)(param_1 + 1));
    if (iVar2 < 0) {
      FUN_10007fa0(local_2c8);
    }
    else {
      GatherPreviewBmpData((int)local_2c8,param_2,param_3);
      FUN_10007fa0(local_2c8);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 __fastcall FUN_10003cd0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 * __fastcall FUN_10003cf0(undefined4 *param_1)

{
  if (DAT_100165bc == 0) {
    DAT_100165bc = FUN_1000ccc0(0x100000);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}




undefined4 FUN_10003d40(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  int local_148 [36];
  int local_b8 [14];
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e616;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_1 == 0) || (DAT_100165bc == 0)) {
    local_4c = 0xffffffff;
  }
  else {
    FUN_10004720(local_b8,0);
    local_8 = 0;
    local_2c = FUN_10004810(local_b8,param_1);
    if (local_2c == 0) {
      local_20 = FUN_10003cd0((int)local_b8);
      local_50 = 0;
      local_30 = av_find_best_stream(local_20,0,0xffffffff,0xffffffff,&local_50,0,uVar1);
      if (local_30 < 0) {
        local_54 = 0xfffffffc;
        local_8 = 0xffffffff;
        FUN_100047b0((int)local_b8);
        local_4c = local_54;
      }
      else {
        local_14 = *(int *)(*(int *)(local_20 + 0x1c) + local_30 * 4);
        if ((local_14 == 0) || (*(int *)(local_14 + 0xc) == 0)) {
          local_58 = 0xfffffffc;
          local_8 = 0xffffffff;
          FUN_100047b0((int)local_b8);
          local_4c = local_58;
        }
        else {
          local_3c = *(int *)(*(int *)(local_14 + 0xc) + 0x38);
          local_38 = *(int *)(*(int *)(local_14 + 0xc) + 0x3c);
          FUN_10009240(local_148);
          local_8 = CONCAT31(local_8._1_3_,1);
          fVar3 = FUN_10009730(local_148,local_20,local_14);
          local_80 = (double)fVar3;
          local_5c = FUN_1000a7f0((int)local_148);
          local_70 = (double)(*(int *)(local_14 + 0x18) / *(int *)(local_14 + 0x14));
          local_78 = local_70 * 5.0;
          FUN_1000e300();
          local_48 = FUN_1000e1af();
          if (local_80 < 5.0) {
            local_34 = local_14;
            if ((*(int *)(local_14 + 0x2c) < 0) ||
               ((*(int *)(local_14 + 0x2c) < 1 && (*(int *)(local_14 + 0x28) == 0)))) {
              FUN_10004df0(local_b8,5000000,0,'\0');
            }
            else {
              local_48 = CONCAT44(*(int *)(local_14 + 0x2c) + *(int *)(local_14 + 0x24) +
                                  (uint)CARRY4(*(uint *)(local_14 + 0x28),*(uint *)(local_14 + 0x20)
                                              ),
                                  *(uint *)(local_14 + 0x28) + *(uint *)(local_14 + 0x20));
            }
          }
          else {
            FUN_10004df0(local_b8,5000000,0,'\0');
          }
          FUN_1000c070(local_3c,local_38,0xa0,0x78,local_18);
          FUN_10009c90(local_148,local_18[2] - *local_18,local_18[3] - local_18[1]);
          local_1c = 0;
          local_28 = 0;
          local_24 = 0;
          while ((local_24 < 1000 && (local_28 < 0x14))) {
            local_1c = FUN_10005100(local_b8);
            if ((local_1c == 0) || (local_5c == *(int *)(local_1c + 0x20))) {
              if (local_1c == 0) {
                local_28 = local_28 + 1;
              }
              FUN_1000a060(local_148,local_1c);
              local_68 = 0;
              iVar2 = FUN_1000a110(local_148,0.0,(undefined4 *)&local_68,'\x01');
              if (0 < iVar2) {
                if (local_48._4_4_ <= local_68._4_4_) {
                  if (local_48._4_4_ < local_68._4_4_) break;
                  if ((uint)local_48 <= (uint)local_68) break;
                }
              }
            }
            local_24 = local_24 + 1;
          }
          local_2c = FUN_100040e0(local_148,param_2,param_3);
          if (local_2c == 0) {
            local_40 = 0;
          }
          else {
            local_40 = 0xfffffffa;
          }
          local_60 = local_40;
          local_8 = local_8 & 0xffffff00;
          FUN_100093d0(local_148);
          local_8 = 0xffffffff;
          FUN_100047b0((int)local_b8);
          local_4c = local_60;
        }
      }
    }
    else {
      local_4c = 0xfffffffe;
      local_8 = 0xffffffff;
      FUN_100047b0((int)local_b8);
    }
  }
  ExceptionList = local_10;
  return local_4c;
}




undefined4 FUN_100040e0(void *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  double local_20;
  void *local_18;
  LPVOID local_14;
  int *local_10;
  undefined4 *local_c;
  LPBITMAPINFO local_8;
  
  if (param_1 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    local_20 = 0.0;
    local_10 = (int *)FUN_1000a460(param_1,&local_20,'\0');
    puVar1 = DAT_100165bc;
    if (((local_10 == (int *)0x0) || (*local_10 == 0)) || (DAT_100165bc == (undefined4 *)0x0)) {
      uVar3 = 0xfffffffe;
    }
    else {
      local_8 = (LPBITMAPINFO)((int)DAT_100165bc + 0xe);
      if (local_8 == (LPBITMAPINFO)0x0) {
        uVar3 = 0xfffffffd;
      }
      else {
        (local_8->bmiHeader).biSize = 0;
        *(undefined4 *)((int)puVar1 + 0x12) = 0;
        *(undefined4 *)((int)puVar1 + 0x16) = 0;
        *(undefined4 *)((int)puVar1 + 0x1a) = 0;
        *(undefined4 *)((int)puVar1 + 0x1e) = 0;
        *(undefined4 *)((int)puVar1 + 0x22) = 0;
        *(undefined4 *)((int)puVar1 + 0x26) = 0;
        *(undefined4 *)((int)puVar1 + 0x2a) = 0;
        *(undefined4 *)((int)puVar1 + 0x2e) = 0;
        *(undefined4 *)((int)puVar1 + 0x32) = 0;
        (local_8->bmiHeader).biSize = 0x28;
        *(undefined4 *)((int)puVar1 + 0x12) = 0xa0;
        *(undefined4 *)((int)puVar1 + 0x16) = 0x78;
        *(undefined2 *)((int)puVar1 + 0x1a) = 1;
        *(undefined2 *)(puVar1 + 7) = 0x18;
        *(undefined4 *)((int)puVar1 + 0x1e) = 0;
        iVar4 = *(int *)((int)puVar1 + 0x12) * *(int *)((int)puVar1 + 0x16) *
                (uint)*(ushort *)(puVar1 + 7);
        *(int *)((int)puVar1 + 0x22) = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
        puVar2 = DAT_100165bc;
        local_c = DAT_100165bc;
        if (DAT_100165bc == (undefined4 *)0x0) {
          uVar3 = 0xfffffffc;
        }
        else {
          *DAT_100165bc = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          *(undefined2 *)(puVar2 + 3) = 0;
          *(undefined2 *)puVar2 = 0x4d42;
          *(undefined4 *)((int)puVar2 + 2) = *(undefined4 *)((int)puVar1 + 0x22);
          *(undefined4 *)((int)puVar2 + 10) = 0x36;
          local_14 = (LPVOID)((int)DAT_100165bc + *(int *)((int)puVar2 + 10));
          if (local_14 == (LPVOID)0x0) {
            uVar3 = 0xfffffffb;
          }
          else {
            FUN_10004290(local_18,(int)param_1,local_10,local_8,local_14);
            *param_2 = DAT_100165bc;
            *param_3 = (local_8->bmiHeader).biSizeImage + *(int *)((int)local_c + 10);
            uVar3 = 0;
          }
        }
      }
    }
  }
  return uVar3;
}




undefined4 __thiscall
FUN_10004290(void *this,int param_1,int *param_2,LPBITMAPINFO param_3,LPVOID param_4)

{
  BITMAPINFO *lpbmi;
  HDC hdc;
  int iVar1;
  undefined4 local_24;
  int local_1c;
  HBITMAP local_c;
  HDC local_8;
  
  if ((((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_1 == 0)) ||
     ((param_3 == (LPBITMAPINFO)0x0 || (param_4 == (LPVOID)0x0)))) {
    local_24 = 0xffffffff;
  }
  else {
    lpbmi = (BITMAPINFO *)FUN_1000a860(param_1);
    if (lpbmi == (BITMAPINFO *)0x0) {
      local_24 = 0xfffffffe;
    }
    else {
      local_8 = (HDC)0x0;
      local_c = (HBITMAP)0x0;
      local_1c = 0;
      hdc = GetDC((HWND)0x0);
      if (((hdc != (HDC)0x0) && (local_8 = CreateCompatibleDC(hdc), local_8 != (HDC)0x0)) &&
         (local_c = CreateCompatibleBitmap(hdc,0xa0,0x78), local_c != (HBITMAP)0x0)) {
        SelectObject(local_8,local_c);
        SetStretchBltMode(local_8,3);
                    /* WARNING: Load size is inaccurate */
        iVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4);
                    /* WARNING: Load size is inaccurate */
        StretchDIBits(local_8,*this,iVar1 + *(int *)((int)this + 4),*(int *)((int)this + 8) - *this,
                      -iVar1,0,0,(lpbmi->bmiHeader).biWidth,(lpbmi->bmiHeader).biHeight,
                      (void *)*param_2,lpbmi,0,0xcc0020);
        local_1c = GetDIBits(local_8,local_c,0,(param_3->bmiHeader).biHeight,param_4,param_3,0);
      }
      if (local_c != (HBITMAP)0x0) {
        DeleteObject(local_c);
      }
      if (local_8 != (HDC)0x0) {
        DeleteObject(local_8);
      }
      if (hdc != (HDC)0x0) {
        ReleaseDC((HWND)0x0,hdc);
      }
      if (local_1c < 1) {
        local_24 = 0xfffffffd;
      }
      else {
        local_24 = 0;
      }
    }
  }
  return local_24;
}




void FUN_10004470(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18;
  int local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar1 = (int)(uint)*(ushort *)(param_3 + 0xe) >> 3;
    for (local_10 = 0; local_10 < *(int *)(param_3 + 8); local_10 = local_10 + 1) {
      local_c = (undefined1 *)
                (((*(int *)(param_3 + 8) - local_10) + -1) * *(int *)(param_3 + 4) * iVar1 + param_2
                );
      local_8 = (undefined1 *)(local_10 * *(int *)(param_3 + 4) * iVar1 + param_1);
      if ((local_c != (undefined1 *)0x0) && (local_8 != (undefined1 *)0x0)) {
        for (local_18 = 0; local_18 < *(int *)(param_3 + 4); local_18 = local_18 + 1) {
          *local_8 = local_c[2];
          local_8[1] = local_c[1];
          local_8[2] = *local_c;
          if (iVar1 == 4) {
            local_8[3] = local_c[3];
          }
          local_8 = local_8 + iVar1;
          local_c = local_c + iVar1;
        }
      }
    }
  }
  return;
}




undefined4 * __fastcall FUN_100045c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return param_1;
}




/* Library Function - Single Match
    public: __thiscall std::shared_ptr<class __ExceptionPtr>::~shared_ptr<class
   __ExceptionPtr>(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall
std::shared_ptr<class___ExceptionPtr>::~shared_ptr<class___ExceptionPtr>
          (shared_ptr<class___ExceptionPtr> *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10004640((int)this);
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_10004640(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




size_t __thiscall FUN_10004680(void *this,void *param_1,size_t param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_10004640((int)this);
  if ((param_1 == (void *)0x0) || ((int)param_2 < 1)) {
    param_2 = 0xffffffff;
  }
  else {
    *(undefined8 *)((int)this + 0x10) = param_3;
    *(size_t *)((int)this + 8) = param_2;
    uVar1 = FUN_1000ccc0(*(size_t *)((int)this + 8));
    *(undefined4 *)((int)this + 4) = uVar1;
    if (*(int *)((int)this + 4) == 0) {
      param_2 = 0;
    }
    else {
      memcpy(*(void **)((int)this + 4),param_1,param_2);
    }
  }
  return param_2;
}




void __cdecl FUN_10004700(undefined4 param_1)

{
  avio_seek(param_1,0,0,1);
  return;
}




undefined4 * __thiscall FUN_10004720(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined8 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = av_packet_alloc();
  *(undefined4 *)((int)this + 8) = uVar1;
  return (undefined4 *)this;
}




void __fastcall FUN_100047b0(int param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10004c00(param_1);
  if (*(int *)(param_1 + 8) != 0) {
    av_packet_free(param_1 + 8,uVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_10;
  return;
}




int __thiscall FUN_10004810(void *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  code *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  code *local_20;
  undefined4 local_1c;
  code *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  FUN_10004c00((int)this);
  if ((*(int *)((int)local_8 + 8) == 0) || (param_1 == 0)) {
    local_c = -1;
  }
  else {
    uVar1 = av_malloc(0x100000);
    *(undefined4 *)((int)local_8 + 0x14) = uVar1;
    if (*(int *)((int)local_8 + 0x14) == 0) {
      local_c = -2;
    }
    else {
      uVar1 = avio_alloc_context(*(undefined4 *)((int)local_8 + 0x14),0x100000,0,local_8,
                                 FUN_10005240,0,FUN_10005290);
      *(undefined4 *)((int)local_8 + 0xc) = uVar1;
      if (*(int *)((int)local_8 + 0xc) == 0) {
        local_c = -3;
      }
      else {
        *(int *)((int)local_8 + 4) = param_1;
        local_14 = *(undefined4 *)((int)local_8 + 4);
        local_18 = *(code **)(**(int **)((int)local_8 + 4) + 0x10);
        local_c = (*local_18)(*(undefined4 *)((int)local_8 + 0x14),0x10000);
        if ((local_c < 1) || (0x10000 < local_c)) {
          local_c = -4;
        }
        else {
          uVar1 = avformat_alloc_context();
          *(undefined4 *)((int)local_8 + 0x10) = uVar1;
          if (*(int *)((int)local_8 + 0x10) == 0) {
            local_c = -5;
          }
          else {
            *(undefined4 *)(*(int *)((int)local_8 + 0x10) + 0x10) =
                 *(undefined4 *)((int)local_8 + 0xc);
            *(uint *)(*(int *)((int)local_8 + 0x10) + 0x14) =
                 *(uint *)(*(int *)((int)local_8 + 0x10) + 0x14) | 0x80;
            local_1c = *(undefined4 *)((int)local_8 + 4);
            local_20 = *(code **)(**(int **)((int)local_8 + 4) + 0x14);
            (*local_20)(0,0,0);
            local_40 = "MediaDemux::SetMediaSource";
            local_3c = *(undefined4 *)((int)local_8 + 0x14);
            local_38 = local_c;
            local_34 = 0;
            local_24 = av_probe_input_format(&local_40,1);
            *(undefined4 *)(*(int *)((int)local_8 + 0x10) + 4) = local_24;
            if (*(int *)(*(int *)((int)local_8 + 0x10) + 4) == 0) {
              local_28 = av_probe_input_format(&local_40,0);
              *(undefined4 *)(*(int *)((int)local_8 + 0x10) + 4) = local_28;
            }
            if (*(int *)(*(int *)((int)local_8 + 0x10) + 4) == 0) {
              local_c = -2;
            }
            else {
              local_10 = 0;
              local_2c = *(undefined4 *)((int)local_8 + 4);
              local_30 = *(code **)(**(int **)((int)local_8 + 4) + 0x24);
              (*local_30)(&local_10);
              local_c = avformat_open_input((int)local_8 + 0x10,local_10,0,0);
              if ((local_c == 0) && (*(int *)((int)local_8 + 0x10) != 0)) {
                if (*(int *)(*(int *)((int)local_8 + 0x10) + 0x10) != 0) {
                  uVar2 = FUN_10004700(*(undefined4 *)(*(int *)((int)local_8 + 0x10) + 0x10));
                  *(undefined8 *)((int)local_8 + 0x18) = uVar2;
                }
                local_c = avformat_find_stream_info(*(undefined4 *)((int)local_8 + 0x10),0);
                FUN_10004a80(local_8,local_10,*(int *)((int)local_8 + 0x10));
              }
              else {
                local_c = -3;
              }
            }
          }
        }
      }
    }
  }
  return local_c;
}




void __thiscall FUN_10004a80(void *this,undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  uint local_1c;
  byte *local_14;
  byte *local_10;
  
  iVar2 = *(int *)(param_2 + 0x10);
  local_14 = &DAT_10012078;
  local_10 = (byte *)**(undefined4 **)(*(int *)((int)this + 0x10) + 4);
  do {
    bVar1 = *local_10;
    bVar5 = bVar1 < *local_14;
    if (bVar1 != *local_14) {
LAB_10004ae4:
      local_1c = -(uint)bVar5 | 1;
      goto LAB_10004aec;
    }
    if (bVar1 == 0) break;
    bVar1 = local_10[1];
    bVar5 = bVar1 < local_14[1];
    if (bVar1 != local_14[1]) goto LAB_10004ae4;
    local_10 = local_10 + 2;
    local_14 = local_14 + 2;
  } while (bVar1 != 0);
  local_1c = 0;
LAB_10004aec:
  if ((local_1c == 0) && (iVar2 != 0)) {
    *(undefined1 *)((int)this + 0x20) = 1;
    avio_seek(iVar2,0,0,0);
    uVar3 = avio_rb32(iVar2);
    avio_rl32(iVar2);
    if (((uVar3 & 0xffffff00) == 0x43575300) || ((uVar3 & 0xffffff00) == 0x46575300)) {
      iVar4 = avio_r8(iVar2);
      iVar4 = (iVar4 >> 3) * 4 + 4;
      iVar4 = iVar4 + (iVar4 >> 0x1f & 7U);
      avio_skip(iVar2,iVar4 >> 3,iVar4 >> 0x1f);
      iVar4 = avio_rl16(iVar2);
      *(double *)((int)this + 0x28) =
           ((double)iVar4 + *(double *)(&DAT_10013640 + (iVar4 >> 0x1f) * -8)) / 256.0;
      avio_rl16(iVar2);
      uVar6 = FUN_1000e1af();
      *(ulonglong *)(param_2 + 0x40) = uVar6;
    }
  }
  return;
}




void __fastcall FUN_10004c00(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 4) != 0)) {
    avformat_close_input(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    av_free(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    av_free(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}




undefined4 __fastcall FUN_10004c90(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18);
  }
  return local_c;
}




undefined4 __thiscall FUN_10004cc0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)((int)this + 0x10) == 0) || (param_1 < 0)) ||
     (*(int *)(*(int *)((int)this + 0x10) + 0x18) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x10) + 0x1c) + param_1 * 4);
  }
  return uVar1;
}




undefined4 __fastcall FUN_10004d00(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(*(int *)(param_1 + 0x10) + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x10) + 4);
  }
  return uVar1;
}




float10 __fastcall FUN_10004d30(int param_1)

{
  int iVar1;
  double in_XMM0_Qa;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x3c);
    if ((0 < iVar1) || ((-1 < iVar1 && (*(int *)(*(int *)(param_1 + 0x10) + 0x38) != 0)))) {
      FUN_1000e300();
      return (float10)(in_XMM0_Qa / 1000000.0);
    }
  }
  return (float10)0;
}




float10 __fastcall FUN_10004d90(int param_1)

{
  int iVar1;
  double in_XMM0_Qa;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x44);
    if ((0 < iVar1) || ((-1 < iVar1 && (*(int *)(*(int *)(param_1 + 0x10) + 0x40) != 0)))) {
      FUN_1000e300();
      return (float10)(in_XMM0_Qa / 1000000.0);
    }
  }
  return (float10)0;
}




int __thiscall FUN_10004df0(void *this,uint param_1,uint param_2,char param_3)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  
  fVar2 = FUN_10004d90((int)this);
  if (9.999999747378752e-05 <= (double)fVar2) {
    if (*(char *)((int)this + 0x20) == '\0') {
      iVar1 = av_seek_frame(*(undefined4 *)((int)this + 0x10),0xffffffff,param_1,param_2,1);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = av_seek_frame(*(undefined4 *)((int)this + 0x10),0xffffffff,param_1,param_2,5);
        if ((param_3 != '\0') && (iVar1 < 0)) {
          iVar1 = av_seek_frame(*(undefined4 *)((int)this + 0x10),0xffffffff,0,0,5);
        }
      }
    }
    else {
      lVar3 = FUN_10004f90(this,param_1,param_2);
      iVar1 = (int)lVar3;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}




undefined4 FUN_10004eb0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 local_60 [8];
  uint local_58;
  int local_54;
  int local_40;
  uint local_3c;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  av_init_packet(local_60);
  local_5 = '\0';
LAB_10004ec9:
  do {
    iVar1 = av_read_frame(*(undefined4 *)(local_c + 0x10),local_60);
    if (iVar1 < 0) {
LAB_10004f64:
      if (local_5 == '\0') {
        local_10 = 0;
      }
      else {
        local_10 = *(undefined4 *)(local_c + 8);
      }
      return local_10;
    }
    if (local_40 != param_1) {
      av_packet_unref(local_60);
      goto LAB_10004ec9;
    }
    if ((param_3 <= local_54) && ((param_3 < local_54 || (param_2 < local_58)))) {
      av_packet_unref(local_60);
      goto LAB_10004f64;
    }
    if ((local_3c & 1) != 0) {
      if (**(int **)(local_c + 8) != 0) {
        av_packet_unref(*(undefined4 *)(local_c + 8));
      }
      av_packet_ref(*(undefined4 *)(local_c + 8),local_60);
      local_5 = '\x01';
    }
    av_packet_unref(local_60);
  } while( true );
}




longlong __thiscall FUN_10004f90(void *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_10018688) &&
     (FUN_1000ce75(&DAT_10018688), DAT_10018688 == -1)) {
    DAT_1001868c = av_find_best_stream(*(undefined4 *)((int)this + 0x10),0,0xffffffff,0xffffffff,0,
                                       0xffffffff);
    FUN_1000ce2b(&DAT_10018688);
  }
  *(uint *)((int)this + 0x30) = param_1;
  *(uint *)((int)this + 0x34) = param_2;
  lVar3 = avio_seek(*(undefined4 *)(*(int *)((int)this + 0x10) + 0x10),
                    *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),0);
  if ((0 < (int)((ulonglong)lVar3 >> 0x20)) || (-1 < lVar3)) {
    iVar1 = av_packet_alloc();
    __alldiv(param_1,param_2,1000000,0);
    FUN_1000e300();
    uVar4 = FUN_1000e1af();
    while( true ) {
      do {
        uVar5 = (undefined4)(uVar4 >> 0x20);
        uVar4 = CONCAT44(uVar5,iVar1);
        iVar2 = av_read_frame(*(undefined4 *)((int)this + 0x10),iVar1,uVar5);
      } while (iVar2 == -0xb);
      if (iVar2 < 0) {
        return lVar3;
      }
      iVar2 = (int)(uVar4 >> 0x20);
      if (((DAT_1001868c == *(int *)(iVar1 + 0x20)) && (iVar2 <= *(int *)(iVar1 + 0x14))) &&
         ((iVar2 < *(int *)(iVar1 + 0x14) || ((uint)uVar4 < *(uint *)(iVar1 + 0x10))))) break;
      uVar4 = CONCAT44(iVar2,iVar1);
      av_packet_unref();
    }
    av_packet_unref(iVar1);
  }
  return lVar3;
}




int __fastcall FUN_10005100(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  if (param_1[4] == 0) {
    local_10 = 0;
  }
  else {
    if (*(int *)param_1[2] != 0) {
      av_packet_unref(param_1[2]);
    }
    iVar1 = av_read_frame(param_1[4],param_1[2]);
    FUN_100051c0(param_1,param_1[2]);
    if ((iVar1 < 0) &&
       (((iVar1 == -0x20464f45 ||
         (iVar2 = avio_feof(*(undefined4 *)(param_1[4] + 0x10)), iVar2 != 0)) && (*param_1 != 0))))
    {
      FUN_10007130(*param_1);
    }
    if (iVar1 == 0) {
      local_10 = param_1[2];
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}




void __thiscall FUN_100051c0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(char *)((int)this + 0x20) != '\0') &&
     (**(int **)(*(int *)(*(int *)(*(int *)((int)this + 0x10) + 0x1c) + *(int *)(param_1 + 0x20) * 4
                         ) + 0xc) == 1)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x30);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x34);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x30);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x34);
    uVar1 = *(uint *)((int)this + 0x30);
    uVar2 = *(uint *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x34);
    *(uint *)((int)this + 0x30) = uVar1 + *(uint *)(param_1 + 0x30);
    *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) + iVar3 + (uint)CARRY4(uVar1,uVar2);
  }
  return;
}




undefined4 __cdecl FUN_10005240(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) || (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x10);
    uVar2 = (*pcVar1)(param_2,param_3,pcVar1,*(undefined4 *)(param_1 + 4));
  }
  return uVar2;
}




undefined4 __cdecl FUN_10005290(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (param_4 == 0x10000) {
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  }
  else {
    pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0x14);
    uVar2 = (*pcVar1)(param_2,param_3,param_4,pcVar1,*(undefined4 *)(param_1 + 4));
  }
  return uVar2;
}




void __cdecl FUN_10005300(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,param_3 << 1);
  return;
}




wchar_t * __cdecl FUN_10005320(char *param_1,undefined4 param_2,_Cvtvec *param_3)

{
  char cVar1;
  mbstate_t local_44 [4];
  int local_34;
  char *local_30;
  size_t local_2c;
  wchar_t *local_28;
  char *local_24;
  wchar_t *local_20;
  char *local_1c;
  size_t local_18;
  int local_14;
  size_t local_10;
  wchar_t local_c [3];
  undefined1 local_5;
  
  local_44[2] = 0;
  local_44[3] = 0;
  local_1c = param_1;
  local_30 = param_1 + 1;
  do {
    cVar1 = *local_1c;
    local_1c = local_1c + 1;
  } while (cVar1 != '\0');
  local_34 = (int)local_1c - (int)local_30;
  local_2c = local_34 + 1;
  local_10 = 0;
  local_24 = param_1;
  local_5 = 0;
  local_18 = local_2c;
  while ((local_18 != 0 &&
         (local_14 = _Mbrtowc(local_c,local_24,local_18,local_44 + 2,param_3), 0 < local_14))) {
    local_18 = local_18 - local_14;
    local_24 = local_24 + local_14;
    local_10 = local_10 + 1;
  }
  local_10 = local_10 + 1;
  local_28 = (wchar_t *)calloc(local_10,2);
  if (local_28 == (wchar_t *)0x0) {
    std::_Xbad_alloc();
  }
  local_20 = local_28;
  local_44[0] = 0;
  local_44[1] = 0;
  while ((local_10 != 0 &&
         (local_14 = _Mbrtowc(local_20,param_1,local_2c,local_44,param_3), 0 < local_14))) {
    local_18 = local_18 - local_14;
    param_1 = param_1 + local_14;
    local_10 = local_10 - 1;
    local_20 = local_20 + 1;
  }
  *local_20 = L'\0';
  return local_28;
}




void * __cdecl FUN_10005460(short *param_1)

{
  short sVar1;
  void *pvVar2;
  size_t _Count;
  short *local_c;
  
  local_c = param_1;
  do {
    sVar1 = *local_c;
    local_c = local_c + 1;
  } while (sVar1 != 0);
  _Count = ((int)local_c - (int)(param_1 + 1) >> 1) + 1;
  pvVar2 = calloc(_Count,2);
  if (pvVar2 == (void *)0x0) {
    std::_Xbad_alloc();
  }
  FUN_10005300(pvVar2,param_1,_Count);
  return pvVar2;
}




void __fastcall FUN_100054e0(undefined4 *param_1)

{
  *param_1 = IMediaGraph::vftable;
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
  FUN_100054e0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (undefined4 *)this;
}




undefined4 * __thiscall
FUN_10005530(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_10005560(undefined4 *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  undefined4 *puVar2;
  void *this;
  undefined4 *local_34;
  undefined4 *local_2c;
  undefined4 *local_24;
  LPCRITICAL_SECTION local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e692;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100057d0(param_1);
  local_8 = 0;
  *param_1 = MediaGraph::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10002f10(param_1 + 6);
  local_8._0_1_ = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  *(undefined1 *)((int)param_1 + 0x6f) = 1;
  p_Var1 = (LPCRITICAL_SECTION)FUN_1000c764(0x1c);
  local_8._0_1_ = 2;
  if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
    local_1c = (LPCRITICAL_SECTION)0x0;
  }
  else {
    local_1c = FUN_1000bb20(p_Var1);
  }
  local_8._0_1_ = 1;
  param_1[5] = local_1c;
  puVar2 = (undefined4 *)FUN_1000c764(0x90);
  local_8._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_10009240(puVar2);
  }
  local_8._0_1_ = 1;
  param_1[10] = local_24;
  puVar2 = (undefined4 *)FUN_1000c764(0x60);
  local_8._0_1_ = 4;
  if (puVar2 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_10001c00(puVar2);
  }
  local_8._0_1_ = 1;
  param_1[0xb] = local_2c;
  this = (void *)FUN_1000c764(0x38);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (this == (void *)0x0) {
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_34 = FUN_10004720(this,param_1);
  }
  param_1[9] = local_34;
  ExceptionList = local_10;
  return param_1;
}




undefined4 * __thiscall FUN_100057a0(void *this,uint param_1)

{
  FUN_100057f0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_100057d0(undefined4 *param_1)

{
  *param_1 = IMediaGraph::vftable;
  return param_1;
}




void __fastcall FUN_100057f0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e6b0;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MediaGraph::vftable;
  if (param_1[3] != 0) {
    if ((shared_ptr<class___ExceptionPtr> *)param_1[3] != (shared_ptr<class___ExceptionPtr> *)0x0) {
      std::shared_ptr<class___ExceptionPtr>::_scalar_deleting_destructor_
                ((shared_ptr<class___ExceptionPtr> *)param_1[3],1);
    }
    param_1[3] = 0;
  }
  if (param_1[0xc] != 0) {
    if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xc])(1,uVar1);
    }
    param_1[0xc] = 0;
  }
  if (param_1[9] != 0) {
    if ((void *)param_1[9] != (void *)0x0) {
      FUN_100059f0((void *)param_1[9],1);
    }
    param_1[9] = 0;
  }
  if (param_1[10] != 0) {
    if ((void *)param_1[10] != (void *)0x0) {
      FUN_10005a20((void *)param_1[10],1);
    }
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    if ((void *)param_1[0xb] != (void *)0x0) {
      FUN_10005a60((void *)param_1[0xb],1);
    }
    param_1[0xb] = 0;
  }
  if (param_1[5] != 0) {
    if ((void *)param_1[5] != (void *)0x0) {
      FUN_10001e80((void *)param_1[5],1);
    }
    param_1[5] = 0;
  }
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            (param_1 + 6);
  FUN_100054e0(param_1);
  ExceptionList = local_10;
  return;
}




/* Library Function - Single Match
    public: void * __thiscall std::shared_ptr<class __ExceptionPtr>::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void * __thiscall
std::shared_ptr<class___ExceptionPtr>::_scalar_deleting_destructor_
          (shared_ptr<class___ExceptionPtr> *this,uint param_1)

{
  ~shared_ptr<class___ExceptionPtr>(this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return this;
}




void * __thiscall FUN_100059f0(void *this,uint param_1)

{
  FUN_100047b0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return this;
}




void * __thiscall FUN_10005a20(void *this,uint param_1)

{
  FUN_100093d0(this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return this;
}




void * __thiscall FUN_10005a60(void *this,uint param_1)

{
  FUN_10001da0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return this;
}




void __thiscall FUN_10005a90(void *this,undefined4 param_1)

{
  void *this_00;
  HANDLE pvVar1;
  undefined4 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e6df;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x20) = param_1;
  if (*(int *)((int)this + 0xc) == 0) {
    this_00 = (void *)FUN_1000c764(0x20);
    local_8 = 0;
    if (this_00 == (void *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      local_1c = FUN_1000b390(this_00,this);
    }
    *(undefined4 **)((int)this + 0xc) = local_1c;
  }
  local_8 = 0xffffffff;
  if (*(int *)((int)this + 4) == 0) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_100065e0,this,0,
                          (LPDWORD)((int)this + 0x10));
    *(HANDLE *)((int)this + 4) = pvVar1;
  }
  if (*(int *)((int)this + 8) == 0) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_100065c0,this,0,(LPDWORD)0x0);
    *(HANDLE *)((int)this + 8) = pvVar1;
  }
  ExceptionList = local_10;
  return;
}




undefined4 __thiscall FUN_10005b80(void *this,char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_28;
  char *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e712;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == (char *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    puVar4 = (undefined4 *)FUN_1000c764(0x2c0);
    local_8 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      local_28 = (int *)0x0;
    }
    else {
      local_28 = FUN_10007ed0(puVar4);
    }
    local_8 = 0xffffffff;
    if (local_28 == (int *)0x0) {
      uVar3 = 0xfffffffe;
    }
    else {
      FUN_100083f0(local_28,param_2,param_3);
      local_1c = param_1;
      do {
        cVar1 = *local_1c;
        local_1c = local_1c + 1;
      } while (cVar1 != '\0');
      iVar5 = (**(code **)(*local_28 + 4))(param_1,(int)local_1c - (int)(param_1 + 1),uVar2);
      if (iVar5 < 0) {
        (**(code **)(*local_28 + 0x18))();
        uVar3 = 0xfffffffd;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        uVar3 = (**(code **)(*this + 0x10))(local_28,*(undefined4 *)((int)this + 0x20));
      }
    }
  }
  ExceptionList = local_10;
  return uVar3;
}




undefined4 __thiscall
FUN_10005cb0(void *this,short *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_28;
  short *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e712;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    puVar4 = (undefined4 *)FUN_1000c764(0x2c0);
    local_8 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      local_28 = (int *)0x0;
    }
    else {
      local_28 = FUN_10007ed0(puVar4);
    }
    local_8 = 0xffffffff;
    if (local_28 == (int *)0x0) {
      uVar3 = 0xfffffffe;
    }
    else {
      FUN_100083f0(local_28,param_3,param_4);
      local_1c = param_1;
      do {
        sVar1 = *local_1c;
        local_1c = local_1c + 1;
      } while (sVar1 != 0);
      iVar5 = (**(code **)(*local_28 + 0x2c))
                        (param_1,param_2,(int)local_1c - (int)(param_1 + 1) >> 1,uVar2);
      if (iVar5 < 0) {
        (**(code **)(*local_28 + 0x18))();
        uVar3 = 0xfffffffd;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        uVar3 = (**(code **)(*this + 0x10))(local_28,*(undefined4 *)((int)this + 0x20));
      }
    }
  }
  ExceptionList = local_10;
  return uVar3;
}




undefined4 FUN_10005de0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_10006240(0,param_2,param_1,param_1 >> 0x1f);
  }
  return uVar1;
}




void __thiscall FUN_10005e10(void *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_10006240(4,0,0,0);
  if (((iVar2 != 0) && (*(int *)((int)this + 0x20) != 0)) && (param_1 != 0)) {
    pcVar1 = *(code **)(**(int **)((int)this + 0x20) + 0xc);
    (*pcVar1)(param_1,pcVar1,*(undefined4 *)((int)this + 0x20));
  }
  return;
}




undefined4 __fastcall FUN_10005e70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




void __thiscall FUN_10005e90(void *this,double *param_1,double *param_2)

{
  undefined8 local_10;
  
  if (((*(double *)((int)this + 0x50) < 9.999999747378752e-06) ||
      (*(double *)((int)this + 0x50) < *(double *)((int)this + 0x58) ||
       *(double *)((int)this + 0x50) == *(double *)((int)this + 0x58))) ||
     (*(double *)((int)this + 0x50) < *(double *)((int)this + 0x60) ||
      *(double *)((int)this + 0x50) == *(double *)((int)this + 0x60))) {
    *param_1 = *(double *)((int)this + 0x60) - *(double *)((int)this + 0x40);
  }
  else {
    *param_1 = *(double *)((int)this + 0x58) - *(double *)((int)this + 0x40);
  }
  if (*(double *)((int)this + 0x50) < *(double *)((int)this + 0x48) ||
      *(double *)((int)this + 0x50) == *(double *)((int)this + 0x48)) {
    local_10 = *(double *)((int)this + 0x48);
  }
  else {
    local_10 = *(double *)((int)this + 0x50);
  }
  *param_2 = local_10 - *(double *)((int)this + 0x40);
  return;
}




void __fastcall FUN_10005f50(int param_1)

{
  FUN_10006240(1,*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}




void __fastcall FUN_10005f70(int param_1)

{
  FUN_10006240(2,*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}




void __fastcall FUN_10005f90(int param_1)

{
  FUN_10006240(4,*(undefined4 *)(param_1 + 0x20),0,0);
  return;
}




void __fastcall FUN_10005fb0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1000e1af();
  FUN_10006240(3,*(undefined4 *)(param_1 + 0x20),(int)uVar1,(int)(uVar1 >> 0x20));
  return;
}




void __thiscall FUN_10006000(void *this,int *param_1)

{
  if (*(int *)((int)this + 0xc) != 0) {
    FUN_1000ba20(*(void **)((int)this + 0xc),param_1);
  }
  return;
}




void __thiscall FUN_10006030(void *this,int param_1,undefined1 *param_2)

{
  undefined1 local_5;
  
  if (*(int *)((int)this + 0xc) != 0) {
    if (param_2 == (undefined1 *)0x0) {
      local_5 = 0;
    }
    else {
      local_5 = *param_2;
    }
    *(undefined1 *)((int)this + 0x6d) = local_5;
    if (param_1 != -1) {
      FUN_1000ba80(*(void **)((int)this + 0xc),param_1);
    }
  }
  return;
}




undefined1 __fastcall FUN_10006090(int param_1)

{
  int iVar1;
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     (iVar1 = FUN_1000a7f0(*(int *)(param_1 + 0x28)), iVar1 == -1)) {
    local_c = 0;
  }
  else if ((9.999999747378752e-06 < *(double *)(param_1 + 0x48)) ||
          (*(int *)(*(int *)(param_1 + 0x28) + 0x58) != 0)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}




bool __fastcall FUN_100060f0(int param_1)

{
  return *(char *)(param_1 + 0x6c) == '\0';
}




void __fastcall FUN_10006120(int param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 1;
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x28))();
  }
  return;
}




void __fastcall FUN_10006150(undefined4 *param_1)

{
  FUN_10006570((int)param_1);
  FUN_10006d00((int)param_1);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}




undefined4 __fastcall FUN_100061a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  
  if ((*(int *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    uVar1 = 0;
  }
  else {
    local_c = FUN_1000a7f0(*(int *)(param_1 + 0x28));
    iVar2 = FUN_1000a7f0(*(int *)(param_1 + 0x28));
    if ((iVar2 != -1) && (*(char *)(*(int *)(param_1 + 0x28) + 0x69) != '\0')) {
      local_c = -1;
    }
    iVar2 = FUN_10001eb0(*(int *)(param_1 + 0x2c));
    if ((local_c == -1) || (iVar2 == -1)) {
      if (local_c == -1) {
        if (iVar2 == -1) {
          uVar1 = 0;
        }
        else {
          uVar1 = 2;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  return uVar1;
}




undefined4 FUN_10006240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_2c;
  void *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e747;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (void *)FUN_1000c764(0x10);
  local_8 = 0;
  if (local_18 == (void *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    local_1c = FUN_10005530(local_18,param_2,param_1,param_3,param_4);
  }
  local_24 = local_1c;
  local_8 = 0xffffffff;
  local_20 = local_1c;
  if ((local_1c == (undefined4 *)0x0) || (*(int *)(local_14 + 0x14) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1000bb80(&local_2c,*(LPCRITICAL_SECTION *)(local_14 + 0x14));
    local_8 = 1;
    local_28 = (void *)(local_14 + 0x18);
    FUN_10002dc0(local_28,&local_20);
    uVar1 = FUN_10007ac0(local_14 + 0x18);
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_2c);
  }
  ExceptionList = local_10;
  return uVar1;
}




size_t __thiscall FUN_10006330(void *this,void *param_1,size_t param_2)

{
  size_t sVar1;
  
  if ((param_1 == (void *)0x0) || ((int)param_2 < 1)) {
    sVar1 = 0xffffffff;
  }
  else if ((*(int *)((int)this + 0x34) == 2) && (*(int *)((int)this + 0x2c) != 0)) {
    sVar1 = FUN_10002890(*(void **)((int)this + 0x2c),param_1,param_2,(double *)((int)this + 0x58));
    if (*(char *)((int)this + 0x6d) != '\0') {
      memset(param_1,0,param_2);
    }
  }
  else {
    memset(param_1,0,param_2);
    sVar1 = 0;
  }
  return sVar1;
}




void __thiscall FUN_100063c0(void *this,undefined4 param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  void *this_00;
  int iVar3;
  float10 fVar4;
  undefined8 local_2c;
  undefined8 local_24;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 0xc) != 0)) && (*(int *)((int)this + 0x28) != 0)) &&
     ((*(int *)((int)this + 0x2c) != 0 && (*(int *)((int)this + 0xc) != 0)))) {
    if (**(int **)(param_2 + 0xc) == 0) {
      if (*(double *)((int)this + 0x48) < 9.999999747378752e-06) {
        fVar4 = FUN_10009730(*(int **)((int)this + 0x28),param_1,param_2);
        *(double *)((int)this + 0x48) =
             (double)fVar4 + *(double *)(*(int *)((int)this + 0x28) + 0x48);
        dVar2 = *(double *)(*(int *)((int)this + 0x28) + 0x48);
        pdVar1 = (double *)(*(int *)((int)this + 0x2c) + 0x40);
        if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
          local_24 = *(undefined8 *)(*(int *)((int)this + 0x2c) + 0x40);
        }
        else {
          local_24 = *(undefined8 *)(*(int *)((int)this + 0x28) + 0x48);
        }
        *(undefined8 *)((int)this + 0x40) = local_24;
      }
    }
    else if ((**(int **)(param_2 + 0xc) == 1) &&
            (*(double *)((int)this + 0x50) < 9.999999747378752e-06)) {
      fVar4 = FUN_10001fa0(*(int **)((int)this + 0x2c),param_1,param_2);
      *(double *)((int)this + 0x50) = (double)fVar4 + *(double *)(*(int *)((int)this + 0x2c) + 0x40)
      ;
      dVar2 = *(double *)(*(int *)((int)this + 0x28) + 0x48);
      pdVar1 = (double *)(*(int *)((int)this + 0x2c) + 0x40);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
        local_2c = *(undefined8 *)(*(int *)((int)this + 0x2c) + 0x40);
      }
      else {
        local_2c = *(undefined8 *)(*(int *)((int)this + 0x28) + 0x48);
      }
      *(undefined8 *)((int)this + 0x40) = local_2c;
      this_00 = *(void **)((int)this + 0xc);
      iVar3 = FUN_10002240(*(int *)((int)this + 0x2c));
      FUN_1000b4d0(this_00,iVar3);
    }
  }
  return;
}




void __fastcall FUN_10006570(int param_1)

{
  *(undefined1 *)(param_1 + 0x6c) = 1;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1000c040((undefined4 *)(param_1 + 8),10000);
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1000c040((undefined4 *)(param_1 + 4),10000);
  }
  return;
}




undefined4 FUN_100065c0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10007770();
  }
  return uVar1;
}




undefined4 FUN_100065e0(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    while (cVar1 = (**(code **)(*param_1 + 0x3c))(), cVar1 != '\0') {
      FUN_10006640(param_1);
      FUN_100068f0(param_1);
    }
    FUN_1000be30("%s:%d\n");
  }
  return 0;
}




void __fastcall FUN_10006640(void *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_48 [4];
  int *local_44;
  code *local_40;
  undefined4 local_3c;
  code *local_38;
  int local_34;
  void *local_30;
  void *local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e778;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (int *)0x0;
  local_14 = param_1;
  if (*(int *)((int)param_1 + 0x14) != 0) {
    FUN_1000bb80(&local_24,*(LPCRITICAL_SECTION *)((int)param_1 + 0x14));
    local_8 = 0;
    bVar1 = FUN_10002e20((int)local_14 + 0x18);
    if (bVar1) {
      local_8 = 0xffffffff;
      FUN_1000bbb0(&local_24);
      ExceptionList = local_10;
      return;
    }
    local_2c = (void *)((int)local_14 + 0x18);
    piVar2 = (int *)FUN_10002e50(local_2c,local_48);
    puVar3 = (undefined4 *)FUN_10002da0(piVar2);
    local_18 = (int *)*puVar3;
    FUN_10002df0((void *)((int)local_14 + 0x18));
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_24);
  }
  if (local_18 != (int *)0x0) {
    local_28 = local_18[1];
    switch(local_28) {
    case 0:
      if (*(int *)((int)local_14 + 0x28) != 0) {
        local_30 = *(void **)((int)local_14 + 0x28);
        FUN_10009620(local_30,'\0');
      }
      if (*(int *)((int)local_14 + 0x2c) != 0) {
        FUN_10001ed0(*(int *)((int)local_14 + 0x2c));
      }
      local_1c = (int *)local_18[2];
      if (local_1c != (int *)0x0) {
        local_20 = FUN_10006940(local_14,(int)local_1c);
        if (local_20 < 1) {
          FUN_10006d00((int)local_14);
        }
        if ((local_20 < 1) && (*(int *)((int)local_14 + 0x34) != 5)) {
          *(undefined4 *)((int)local_14 + 0x34) = 1;
        }
        if (*local_18 != 0) {
          local_34 = *local_18;
          local_38 = *(code **)(*(int *)*local_18 + 8);
          (*local_38)(local_1c,local_20);
        }
        if ((*(int *)((int)local_14 + 0x20) != 0) && (*local_18 != *(int *)((int)local_14 + 0x20)))
        {
          local_3c = *(undefined4 *)((int)local_14 + 0x20);
          local_40 = *(code **)(**(int **)((int)local_14 + 0x20) + 8);
          (*local_40)(local_1c,local_20);
        }
        if (local_20 < 1) {
          (**(code **)(*local_1c + 0x18))();
        }
      }
      break;
    default:
      *(undefined1 *)((int)local_14 + 0x6f) = 0;
      *(undefined1 *)((int)local_14 + 0x6e) = 0;
      *(undefined4 *)((int)local_14 + 0x34) = 2;
      break;
    case 2:
      *(undefined4 *)((int)local_14 + 0x34) = 3;
      break;
    case 3:
      *(undefined4 *)((int)local_14 + 0x34) = 4;
      FUN_10007050((int)local_14);
      *(undefined1 *)((int)local_14 + 0x6f) = 0;
      *(undefined1 *)((int)local_14 + 0x6e) = 0;
      *(undefined4 *)((int)local_14 + 0x34) = 2;
      break;
    case 4:
      if (*(int *)((int)local_14 + 0x34) != 5) {
        *(undefined4 *)((int)local_14 + 0x34) = 1;
      }
      if (*(int *)((int)local_14 + 0x28) != 0) {
        *(undefined1 *)(*(int *)((int)local_14 + 0x28) + 0x70) = 0;
      }
      if (*(int *)((int)local_14 + 0x2c) != 0) {
        *(undefined1 *)(*(int *)((int)local_14 + 0x2c) + 0x48) = 0;
      }
    }
    if (local_18 != (int *)0x0) {
      local_44 = local_18;
      FUN_1000ccb2(local_18);
    }
  }
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_100068f0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if ((iVar1 == 2) || (iVar1 == 4)) {
    FUN_10006e30(param_1);
  }
  else {
    FUN_100071d0(100000,0);
  }
  return;
}




undefined4 __thiscall FUN_10006940(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  
  FUN_10006d00((int)this);
  if ((((param_1 == 0) || (*(int *)((int)this + 0x28) == 0)) || (*(int *)((int)this + 0x24) == 0))
     || (*(int *)((int)this + 0x14) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_10004810(*(void **)((int)this + 0x24),param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_10004c90(*(int *)((int)this + 0x24));
      if (iVar2 < 1) {
        uVar1 = 0xfffffffd;
      }
      else {
        iVar2 = FUN_10003cd0(*(int *)((int)this + 0x24));
        if (iVar2 == 0) {
          uVar1 = 0xfffffffc;
        }
        else {
          iVar3 = av_find_best_stream(iVar2,0,0xffffffff,0xffffffff,0,0);
          iVar4 = av_find_best_stream(iVar2,1,0xffffffff,iVar3,0,0);
          iVar3 = FUN_10004cc0(*(void **)((int)this + 0x24),iVar3);
          iVar4 = FUN_10004cc0(*(void **)((int)this + 0x24),iVar4);
          if ((iVar3 == 0) && (iVar4 == 0)) {
            uVar1 = 0xfffffffb;
          }
          else {
            *(undefined8 *)((int)this + 0x50) = 0;
            *(undefined8 *)((int)this + 0x48) = 0;
            *(undefined8 *)((int)this + 0x58) = 0;
            *(undefined8 *)((int)this + 0x60) = 0;
            *(undefined8 *)((int)this + 0x40) = 0;
            FUN_100063c0(this,iVar2,iVar3);
            FUN_100063c0(this,iVar2,iVar4);
            local_54 = *(double *)((int)this + 0x50) -
                       *(double *)(*(int *)((int)this + 0x2c) + 0x40);
            local_5c = *(double *)((int)this + 0x48) -
                       *(double *)(*(int *)((int)this + 0x28) + 0x48);
            iVar2 = FUN_10001eb0(*(int *)((int)this + 0x2c));
            if ((iVar2 != -1) &&
               (*(undefined8 *)((int)this + 0x58) = *(undefined8 *)((int)this + 0x40),
               local_54 < 9.999999747378752e-05)) {
              local_44 = local_5c;
              if (local_5c <= 9.999999747378752e-05) {
                fVar5 = FUN_10004d90(*(int *)((int)this + 0x24));
                local_44 = (double)fVar5;
              }
              *(double *)((int)this + 0x50) =
                   local_44 + *(double *)(*(int *)((int)this + 0x2c) + 0x40);
            }
            iVar2 = FUN_1000a7f0(*(int *)((int)this + 0x28));
            if ((iVar2 != -1) &&
               (*(undefined8 *)((int)this + 0x60) = *(undefined8 *)((int)this + 0x40),
               local_5c < 9.999999747378752e-05)) {
              local_4c = local_54;
              if (local_54 <= 9.999999747378752e-05) {
                fVar5 = FUN_10004d90(*(int *)((int)this + 0x24));
                local_4c = (double)fVar5;
              }
              *(double *)((int)this + 0x48) =
                   local_4c + *(double *)(*(int *)((int)this + 0x28) + 0x48);
            }
            if (local_54 <=
                *(double *)((int)this + 0x50) - *(double *)(*(int *)((int)this + 0x2c) + 0x40)) {
              local_54 = *(double *)((int)this + 0x50) -
                         *(double *)(*(int *)((int)this + 0x2c) + 0x40);
            }
            if (local_5c <=
                *(double *)((int)this + 0x48) - *(double *)(*(int *)((int)this + 0x28) + 0x48)) {
              local_5c = *(double *)((int)this + 0x48) -
                         *(double *)(*(int *)((int)this + 0x28) + 0x48);
            }
            *(double *)((int)this + 0x50) =
                 *(double *)(*(int *)((int)this + 0x2c) + 0x40) + local_54;
            *(double *)((int)this + 0x48) =
                 *(double *)(*(int *)((int)this + 0x28) + 0x48) + local_5c;
            if ((9.999999747378752e-06 <= local_5c) || (9.999999747378752e-06 <= local_54)) {
              *(int *)((int)this + 0x30) = param_1;
              iVar2 = FUN_1000a7f0(*(int *)((int)this + 0x28));
              if (iVar2 == -1) {
                *(undefined4 *)(*(int *)((int)this + 0x28) + 0x1c) = 0x38e;
                *(undefined4 *)(*(int *)((int)this + 0x28) + 0x20) = 0x146;
              }
              uVar1 = FUN_10006240(1,0,0,0);
            }
            else {
              uVar1 = 0xfffffffa;
            }
          }
        }
      }
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}




void __fastcall FUN_10006d00(int param_1)

{
  uint uVar1;
  undefined4 local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e7a8;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x34) != 0) && (*(int *)(param_1 + 0x34) != 5)) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if ((((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
      (*(int *)(param_1 + 0x2c) != 0)) && (*(int *)(param_1 + 0x14) != 0)) {
    local_14 = param_1;
    FUN_1000bb80(&local_1c,*(LPCRITICAL_SECTION *)(param_1 + 0x14));
    local_8 = 0;
    local_18 = *(void **)(local_14 + 0x28);
    FUN_10009620(local_18,'\0');
    FUN_10001ed0(*(int *)(local_14 + 0x2c));
    FUN_10004c00(*(int *)(local_14 + 0x24));
    if (*(int *)(local_14 + 0x30) != 0) {
      (**(code **)(**(int **)(local_14 + 0x30) + 0x18))(uVar1);
    }
    *(undefined4 *)(local_14 + 0x30) = 0;
    *(undefined4 *)(local_14 + 0x68) = 0;
    *(undefined8 *)(local_14 + 0x48) = 0;
    *(undefined8 *)(local_14 + 0x50) = 0;
    *(undefined8 *)(local_14 + 0x60) = 0;
    *(undefined8 *)(local_14 + 0x58) = 0;
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_1c);
  }
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_10006e30(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_18;
  void *local_10;
  void *local_c;
  int *local_8;
  
  if ((param_1[10] != 0) && (param_1[0xb] != 0)) {
    local_8 = param_1;
    iVar2 = (**(code **)(*param_1 + 0x18))();
    if ((iVar2 == 2) &&
       (((iVar2 = FUN_10001eb0(local_8[0xb]), iVar2 != -1 && (local_8[3] != 0)) &&
        (cVar1 = FUN_1000bae0(local_8[3]), cVar1 != '\0')))) {
      local_c = (void *)local_8[0xb];
      FUN_100025c0(local_c,*(double *)(local_8 + 0x16));
    }
    iVar2 = FUN_1000a7f0(local_8[10]);
    if (iVar2 != -1) {
      local_18 = 0;
      local_10 = (void *)local_8[10];
      FUN_1000a110(local_10,*(double *)(local_8 + 0x18),(undefined4 *)&local_18,'\0');
    }
    uVar3 = FUN_10006f10(local_8);
    if ((uVar3 & 0xff) == 0) {
      FUN_100071d0(10000,0);
    }
  }
  return;
}




uint __fastcall FUN_10006f10(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  int *piVar6;
  int *piVar7;
  undefined3 extraout_var_00;
  
  if ((((param_1[10] == 0) || (param_1[0xb] == 0)) || (param_1[9] == 0)) ||
     ((*(char *)((int)param_1 + 0x6e) != '\0' || (param_1[0xd] != 2)))) {
    return (uint)param_1 & 0xffffff00;
  }
  iVar3 = FUN_1000a7f0(param_1[10]);
  iVar4 = FUN_10001eb0(param_1[0xb]);
  if ((iVar3 == -1) && (iVar4 == -1)) {
    return 0xffffff00;
  }
  if (iVar3 == -1) {
LAB_10006f96:
    if (iVar4 != -1) {
      bVar1 = FUN_10002be0(param_1[0xb]);
      uVar5 = CONCAT31(extraout_var,bVar1);
      if (!bVar1) goto LAB_10006fae;
    }
    piVar6 = (int *)FUN_10005100((int *)param_1[9]);
    if (piVar6 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      if (iVar3 == piVar6[8]) {
        piVar7 = (int *)FUN_1000a060((void *)param_1[10],piVar6);
      }
      else {
        piVar7 = piVar6;
        if (((iVar4 == piVar6[8]) &&
            (piVar7 = (int *)(**(code **)(*param_1 + 0x18))(), piVar7 == (int *)0x2)) &&
           (piVar7 = param_1, param_1[3] != 0)) {
          cVar2 = FUN_1000bae0(param_1[3]);
          piVar7 = (int *)CONCAT31(extraout_var_00,cVar2);
          if (cVar2 != '\0') {
            piVar7 = (int *)FUN_10002540((void *)param_1[0xb],(int)piVar6);
          }
        }
      }
      uVar5 = CONCAT31((int3)((uint)piVar7 >> 8),1);
    }
  }
  else {
    bVar1 = FUN_1000a880((int *)param_1[10]);
    uVar5 = (uint)bVar1;
    if (uVar5 != 0) goto LAB_10006f96;
LAB_10006fae:
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}




void __fastcall FUN_10007050(int param_1)

{
  void *this;
  int iVar1;
  double in_XMM0_Qa;
  ulonglong uVar2;
  char cVar3;
  
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    FUN_1000a8d0(*(void **)(param_1 + 0x28),'\0');
    FUN_10002c10(*(int *)(param_1 + 0x2c));
    FUN_1000e300();
    *(double *)(param_1 + 0x38) = in_XMM0_Qa + *(double *)(param_1 + 0x40);
    iVar1 = FUN_10001eb0(*(int *)(param_1 + 0x2c));
    if (iVar1 != -1) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x38);
    }
    iVar1 = FUN_1000a7f0(*(int *)(param_1 + 0x28));
    if (iVar1 != -1) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x38);
    }
    this = *(void **)(param_1 + 0x24);
    cVar3 = '\0';
    uVar2 = FUN_1000e1af();
    FUN_10004df0(this,(uint)uVar2,(uint)(uVar2 >> 0x20),cVar3);
  }
  return;
}




void __fastcall FUN_10007130(int param_1)

{
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x6e) == '\0') {
    *(undefined1 *)(param_1 + 0x6e) = 1;
    local_8 = param_1;
    local_c = av_packet_alloc();
    FUN_1000a060(*(void **)(local_8 + 0x28),local_c);
    FUN_10002540(*(void **)(local_8 + 0x2c),local_c);
    av_packet_free(&local_c);
  }
  return;
}




longlong FUN_100071a0(void)

{
  DWORD DVar1;
  longlong lVar2;
  
  DVar1 = GetTickCount();
  lVar2 = __allmul(DVar1,0,1000,0);
  return lVar2;
}




void FUN_100071d0(uint param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(param_1,param_2,1000,0);
  Sleep((DWORD)uVar1);
  return;
}




void __thiscall FUN_10007200(void *this,longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  longlong lVar7;
  double local_24;
  int local_14;
  int local_10;
  
  if (((*(int *)((int)this + 0x28) != 0) && (*(int *)((int)this + 0x2c) != 0)) &&
     (*(int *)((int)this + 0x24) != 0)) {
    FUN_100071a0();
    fVar4 = FUN_1000a810(*(int *)((int)this + 0x28));
    local_24 = (double)fVar4;
    FUN_1000e300();
    local_24 = (double)fVar4 - local_24;
    bVar1 = false;
                    /* WARNING: Load size is inaccurate */
    iVar3 = (**(code **)(*this + 0x18))();
                    /* WARNING: Load size is inaccurate */
    if (((iVar3 == 2) && (cVar2 = (**(code **)(*this + 0x38))(), cVar2 != '\0')) &&
       ((0.10000000149011612 < *(double *)((int)this + 0x50) - *(double *)((int)this + 0x58) &&
        (9.999999747378752e-06 <= *(double *)((int)this + 0x58) - *(double *)((int)this + 0x38)))))
    {
      bVar1 = true;
    }
    if (bVar1) {
      dVar5 = *(double *)((int)this + 0x58) - *(double *)((int)this + 0x60);
      DAT_100165cc = DAT_100165cc + 1;
      iVar3 = FUN_1000a830(*(int *)((int)this + 0x28));
      if (DAT_100165cc % iVar3 == 0) {
        FUN_1000e300();
        FUN_1000be30("videoTs:[%f] audioTs:[%f] timeSpan:[%f] renderCastTime:[%f]\n");
      }
      if (dVar5 <= 0.10000000149011612) {
        if (dVar5 < -0.20000000298023224) {
          if (dVar5 <= -0.5) {
            local_14 = 2;
          }
          else {
            local_14 = 4;
          }
          local_24 = local_24 / (double)local_14 + local_24;
        }
      }
      else {
        if (0.5 <= dVar5) {
          local_10 = 1;
        }
        else {
          local_10 = 2;
        }
        local_24 = local_24 - local_24 / (double)local_10;
      }
    }
    else {
                    /* WARNING: Load size is inaccurate */
      iVar3 = (**(code **)(*this + 0x18))();
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
      if (((iVar3 == 3) || (iVar3 = (**(code **)(*this + 0x18))(), iVar3 == 1)) ||
         (iVar3 = (**(code **)(*this + 0x18))(), iVar3 == 5)) {
        local_24 = local_24 * 10.0;
      }
    }
    if (0.0 <= local_24) {
      uVar6 = FUN_1000e1af();
      FUN_100071d0((uint)uVar6,(uint)(uVar6 >> 0x20));
    }
  }
  lVar7 = FUN_100071a0();
  *param_1 = lVar7;
  return;
}




void __thiscall FUN_10007540(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_44;
  void *local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e7d8;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)((int)this + 0x28) != 0) && (*(int *)((int)this + 0x2c) != 0)) {
    local_18 = (int *)this;
    FUN_1000bb80(&local_44,*(LPCRITICAL_SECTION *)((int)this + 0x14));
    local_8 = 0;
    local_1c = *(uint *)(local_18[10] + 0x1c);
    local_20 = *(int *)(local_18[10] + 0x20);
    if ((local_1c != 0) && (local_18[0x1a] != local_1c)) {
      local_18[0x1a] = local_1c;
      local_30 = local_18[8];
      local_34 = *(code **)(*(int *)local_18[8] + 0x14);
      (*local_34)(local_1c,local_20,uVar2);
    }
    if ((*(double *)(local_18 + 0x12) <= 9.999999747378752e-06 &&
         *(double *)(local_18 + 0x12) != 9.999999747378752e-06) ||
       (cVar1 = FUN_1000a9f0(local_18[10]), cVar1 != '\0')) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
    local_11 = (char)local_24;
    if ((*(double *)(local_18 + 0x14) <= 9.999999747378752e-06 &&
         *(double *)(local_18 + 0x14) != 9.999999747378752e-06) ||
       (cVar1 = FUN_10002d20((int *)local_18[0xb]), cVar1 != '\0')) {
      local_28 = 1;
    }
    else {
      local_28 = 0;
    }
    local_12 = (char)local_28;
    if ((local_11 == '\0') || ((char)local_28 == '\0')) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    *param_1 = (char)local_2c;
    if ((*param_1 != '\0') && (iVar3 = (**(code **)(*local_18 + 0x18))(), iVar3 == 2)) {
      local_18[0xd] = 5;
      *(undefined8 *)(local_18 + 0x16) = *(undefined8 *)(local_18 + 0x14);
      *(undefined8 *)(local_18 + 0x18) = *(undefined8 *)(local_18 + 0x12);
    }
    if (*param_1 == '\0') {
      local_1c = *(uint *)(local_18[10] + 0x24);
      local_20 = *(int *)(local_18[10] + 0x28);
      if (local_1c != 0) {
        local_38 = local_18[8];
        local_3c = *(code **)(*(int *)local_18[8] + 0x18);
        cVar1 = (*local_3c)(&local_1c,&local_20);
        if (cVar1 != '\0') {
          local_40 = (void *)local_18[10];
          FUN_10009c90(local_40,local_1c,local_20);
        }
      }
    }
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_44);
  }
  ExceptionList = local_10;
  return;
}




undefined4 FUN_10007770(void)

{
  char cVar1;
  longlong local_5c;
  double local_54;
  double local_4c;
  code *local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  int local_2c;
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  char local_7;
  char local_6;
  char local_5;
  
  local_5c = FUN_100071a0();
  while (cVar1 = (**(code **)(*local_c + 0x3c))(), cVar1 != '\0') {
    if (((local_c[10] == 0) || (local_c[0xb] == 0)) || (local_c[8] == 0)) {
      FUN_100071d0(10000,0);
    }
    else {
      local_5 = '\0';
      FUN_10007540(local_c,&local_5);
      if ((local_c[0xd] == 2) || (local_c[0xd] == 4)) {
        local_18 = 1;
      }
      else {
        local_18 = 0;
      }
      local_7 = (char)local_18;
      if (((char)local_18 == '\0') || (cVar1 = (**(code **)(*local_c + 0x38))(), cVar1 == '\0')) {
        local_1c = 1;
      }
      else {
        local_1c = 0;
      }
      local_6 = (char)local_1c;
      local_28 = (void *)local_c[10];
      local_10 = (undefined4 *)FUN_1000a460(local_28,(double *)(local_c + 0x18),(char)local_1c);
      local_14 = FUN_1000a860(local_c[10]);
      if ((local_10 == (undefined4 *)0x0) || (local_14 == 0)) {
        FUN_100071d0(10000,0);
      }
      else {
        local_4c = 0.0;
        if (9.999999747378752e-06 < *(double *)(local_c + 0x18)) {
          local_4c = *(double *)(local_c + 0x18) - *(double *)(local_c + 0x10);
        }
        if ((((9.999999747378752e-06 < *(double *)(local_c + 0x14) ||
               *(double *)(local_c + 0x14) == 9.999999747378752e-06) &&
             (*(double *)(local_c + 0x16) < *(double *)(local_c + 0x14) ||
              *(double *)(local_c + 0x16) == *(double *)(local_c + 0x14))) &&
            (*(double *)(local_c + 0x18) < *(double *)(local_c + 0x14) ||
             *(double *)(local_c + 0x18) == *(double *)(local_c + 0x14))) &&
           ((local_4c <= 9.999999747378752e-06 ||
            (9.999999747378752e-06 <= *(double *)(local_c + 0x16) - *(double *)(local_c + 0xe))))) {
          local_4c = *(double *)(local_c + 0x16) - *(double *)(local_c + 0x10);
        }
        if (*(double *)(local_c + 0x14) < *(double *)(local_c + 0x12) ||
            *(double *)(local_c + 0x14) == *(double *)(local_c + 0x12)) {
          local_54 = *(double *)(local_c + 0x12);
        }
        else {
          local_54 = *(double *)(local_c + 0x14);
        }
        local_2c = local_c[8];
        local_30 = *(code **)(*(int *)local_c[8] + 4);
        (*local_30)(local_4c,local_54 - *(double *)(local_c + 0x10));
        if ((local_5 != '\0') && (*(char *)((int)local_c + 0x6f) == '\0')) {
          *(undefined1 *)((int)local_c + 0x6f) = 1;
          (**(code **)(*local_c + 0x28))();
          (**(code **)(*(int *)local_c[8] + 0x2c))();
        }
        local_38 = *(undefined4 *)(local_14 + 0x14);
        if ((local_10 == (undefined4 *)0x0) || (local_10[0x11] == 0)) {
          local_20 = 0;
        }
        else {
          local_20 = *local_10;
        }
        local_34 = local_20;
        local_40 = local_c[8];
        local_44 = *(code **)(*(int *)local_c[8] + 0x1c);
        local_3c = local_20;
        cVar1 = (**(code **)(*local_c + 0x38))();
        if (cVar1 == '\0') {
          local_24 = 0;
        }
        else {
          local_24 = local_14;
        }
        (*local_44)(local_24,local_3c,local_38,local_4c);
        FUN_10007200(local_c,&local_5c);
      }
    }
  }
  FUN_1000be30("%s:%d\n");
  return 0;
}




undefined4 __fastcall FUN_10007ac0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)Mysize(param_1);
  return *puVar1;
}




/* WARNING: Removing unreachable block (ram,0x10007b5f) */

void __thiscall FUN_10007ae0(void *this,undefined4 param_1,_Locinfo *param_2)

{
  _Cvtvec *p_Var1;
  ushort *puVar2;
  void *pvVar3;
  int iVar4;
  uint *puVar5;
  _Cvtvec local_34;
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  p_Var1 = std::_Locinfo::_Getcvt(param_2,&local_34);
  puVar5 = (uint *)((int)this + 0x18);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = p_Var1->_Page;
    p_Var1 = (_Cvtvec *)&p_Var1->_Mbcurmax;
    puVar5 = puVar5 + 1;
  }
  puVar2 = std::_Locinfo::_W_Getdays(param_2);
  pvVar3 = FUN_10005460((short *)puVar2);
  *(void **)((int)this + 8) = pvVar3;
  puVar2 = std::_Locinfo::_W_Getmonths(param_2);
  pvVar3 = FUN_10005460((short *)puVar2);
  *(void **)((int)this + 0xc) = pvVar3;
  pvVar3 = FUN_10005460(L":AM:am:PM:pm");
  *(void **)((int)this + 0x10) = pvVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Removing unreachable block (ram,0x10007c4f) */

void __thiscall FUN_10007bd0(void *this,undefined4 param_1,_Locinfo *param_2)

{
  _Cvtvec *p_Var1;
  ushort *puVar2;
  void *pvVar3;
  int iVar4;
  uint *puVar5;
  _Cvtvec local_34;
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  p_Var1 = std::_Locinfo::_Getcvt(param_2,&local_34);
  puVar5 = (uint *)((int)this + 0x18);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = p_Var1->_Page;
    p_Var1 = (_Cvtvec *)&p_Var1->_Mbcurmax;
    puVar5 = puVar5 + 1;
  }
  puVar2 = std::_Locinfo::_W_Getdays(param_2);
  pvVar3 = FUN_10005460((short *)puVar2);
  *(void **)((int)this + 8) = pvVar3;
  puVar2 = std::_Locinfo::_W_Getmonths(param_2);
  pvVar3 = FUN_10005460((short *)puVar2);
  *(void **)((int)this + 0xc) = pvVar3;
  pvVar3 = FUN_10005460(L":AM:am:PM:pm");
  *(void **)((int)this + 0x10) = pvVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




char * __cdecl FUN_10007cc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *local_14;
  char *local_10;
  char *local_c;
  
  local_c = param_1;
  do {
    cVar1 = *local_c;
    local_c = local_c + 1;
  } while (cVar1 != '\0');
  local_10 = local_c + (1 - (int)(param_1 + 1));
  pcVar2 = (char *)calloc((size_t)local_10,1);
  local_14 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    std::_Xbad_alloc();
  }
  for (; local_10 != (char *)0x0; local_10 = local_10 + -1) {
    *local_14 = *param_1;
    param_1 = param_1 + 1;
    local_14 = local_14 + 1;
  }
  return pcVar2;
}




void __cdecl FUN_10007d60(void *param_1,void *param_2,int param_3)

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




void __cdecl FUN_10007e10(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined4 * __fastcall FUN_10007e20(undefined4 *param_1)

{
  *param_1 = IMediaSource::vftable;
  param_1[1] = 0;
  return param_1;
}




void __fastcall FUN_10007e50(undefined4 *param_1)

{
  *param_1 = IMediaSource::vftable;
  return;
}




undefined4 FUN_10007e70(void)

{
  return 0;
}




void __thiscall FUN_10007e80(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
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
  FUN_10007e50((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_10007ed0(undefined4 *param_1)

{
  FUN_10007e20(param_1);
  *param_1 = RealFileSource::vftable;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 6));
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  basic_string<>((int)(param_1 + 0x12));
  FUN_10007f80((int)(param_1 + 0x18));
  return param_1;
}




undefined4 * __thiscall FUN_10007f40(void *this,uint param_1)

{
  FUN_10007fa0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (undefined4 *)this;
}




int __fastcall FUN_10007f80(int param_1)

{
  *(undefined4 *)(param_1 + 0x239) = 0;
  return param_1;
}




void __fastcall FUN_10007fa0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = RealFileSource::vftable;
  FUN_10008200((int)param_1);
  ~basic_string<>(param_1 + 0x12);
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 6));
  FUN_10007e50(param_1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_10008010(void *this,LPCSTR param_1,int param_2)

{
  FILE *pFVar1;
  size_t _MaxCount;
  char *_Source;
  undefined8 uVar2;
  wchar_t local_208 [256];
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  if (((param_1 != (LPCSTR)0x0) && (2 < param_2)) && (param_1 != (LPCSTR)0x0)) {
    FUN_10008590((void *)((int)this + 0x18),param_1);
    uVar2 = FUN_1000bcb0(param_1);
    *(undefined8 *)((int)this + 0x10) = uVar2;
    pFVar1 = fopen(param_1,"rb");
    *(FILE **)((int)this + 8) = pFVar1;
    FUN_1000c140(param_1,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)((int)this + 0x30));
    memset(local_208,0,0x200);
    _MaxCount = FUN_10008410((int)this + 0x30);
    _Source = (char *)FUN_10008540((int)this + 0x30);
    mbstowcs(local_208,_Source,_MaxCount);
    FUN_10008480((void *)((int)this + 0x48),local_208);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 __thiscall FUN_10008160(void *this,LPCWSTR param_1,char *param_2,int param_3)

{
  FILE *pFVar1;
  undefined8 uVar2;
  undefined4 local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 < 3)) {
    local_10 = 0xfffffffd;
  }
  else if (param_1 == (LPCWSTR)0x0) {
    local_10 = 0xffffffff;
  }
  else {
    FUN_10008590((void *)((int)this + 0x18),param_2);
    uVar2 = FUN_1000bd70(param_1);
    *(undefined8 *)((int)this + 0x10) = uVar2;
    pFVar1 = _wfopen(param_1,L"rb");
    *(FILE **)((int)this + 8) = pFVar1;
    FUN_1000c1b0(param_1,(void *)((int)this + 0x48));
    if (*(int *)((int)this + 8) == 0) {
      local_10 = 0xfffffffe;
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}




void __fastcall FUN_10008200(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    fclose(*(FILE **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




undefined8 __fastcall FUN_10008230(int param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




size_t __thiscall FUN_10008250(void *this,void *param_1,size_t param_2)

{
  int *piVar1;
  size_t local_8;
  
  if (((*(int *)((int)this + 8) == 0) || (param_1 == (void *)0x0)) || ((int)param_2 < 1)) {
    local_8 = 0;
  }
  else {
    local_8 = fread(param_1,1,param_2,*(FILE **)((int)this + 8));
    if (local_8 == 0) {
      local_8 = 0xdfb9b0bb;
    }
    if (local_8 == 0xffffffff) {
      piVar1 = _errno();
      local_8 = -*piVar1;
    }
  }
  return local_8;
}




undefined8 __thiscall
FUN_100082c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_stack_fffffff0;
  
  if (*(int *)((int)this + 8) == 0) {
    iVar1 = 0;
    iVar3 = 0;
  }
  else {
    iVar1 = _fseeki64(*(FILE **)((int)this + 8),CONCAT44(param_3,param_2),in_stack_fffffff0);
    if (iVar1 < 0) {
      piVar2 = _errno();
      iVar1 = -*piVar2;
    }
    iVar3 = iVar1 >> 0x1f;
  }
  return CONCAT44(iVar3,iVar1);
}




void __fastcall FUN_10008320(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}




void __thiscall FUN_10008360(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10008430((int)this + 0x48);
  *param_1 = uVar1;
  FUN_10008410((int)this + 0x48);
  return;
}




void __thiscall FUN_10008390(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_10008540((int)this + 0x18);
    *param_1 = uVar1;
  }
  FUN_10008410((int)this + 0x18);
  return;
}




undefined4 __thiscall FUN_100083c0(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = (int)this + 0x60;
    uVar1 = 0;
  }
  return uVar1;
}




void __thiscall FUN_100083f0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x6c) = param_1;
  *(undefined4 *)((int)this + 0x70) = param_2;
  return;
}




undefined4 __fastcall FUN_10008410(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100030a0(param_1);
  return *(undefined4 *)(iVar1 + 0x10);
}




void __fastcall FUN_10008430(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_100030a0(param_1);
  Myptr(puVar1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_10008480(void *this,wchar_t *param_1)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)this,param_1);
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
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FID_conflict__Tidy_deallocate(param_1);
  FUN_10008650();
  ExceptionList = local_10;
  return;
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
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>(param_1);
  FID_conflict__Tidy_init(param_1);
  ExceptionList = local_10;
  return param_1;
}




void __fastcall FUN_10008540(undefined4 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_100030a0(param_1);
  Myptr(p_Var1);
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_10008590(void *this,char *param_1)

{
  FID_conflict_append(this,param_1);
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
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_10008650();
  ExceptionList = local_10;
  return;
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
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _String_alloc<>((int)this);
  _Tidy_init(this);
  ExceptionList = local_10;
  return this;
}




void FUN_10008650(void)

{
  FUN_10008670();
  return;
}




void FUN_10008670(void)

{
  FUN_10008690();
  return;
}




void FUN_10008690(void)

{
  FUN_100015d0();
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




void __fastcall FUN_10008790(undefined4 param_1)

{
  FUN_100030a0(param_1);
  FUN_100015d0();
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
  
  FUN_10008790(param_1);
  puVar3 = (undefined4 *)FUN_100030a0(param_1);
  bVar2 = Large_string_engaged((int)puVar3);
  if (bVar2) {
    pvVar1 = (void *)*puVar3;
    FUN_100030a0(param_1);
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
  
  puVar1 = (undefined2 *)FUN_100030a0(param_1);
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 10) = 7;
  local_6 = 0;
  assign(puVar1,&local_6);
  return;
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
  
  puVar1 = (undefined4 *)FUN_100030a0(this);
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
  
  FUN_10008790(this);
  this_00 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_100030a0(this);
  bVar2 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(this_00);
  if (bVar2) {
    pcVar1 = *(char **)this_00;
    this_01 = (allocator<char> *)FUN_100030a0(this);
    addressof<>(this_00);
    destroy<>();
    allocator<char>::deallocate(this_01,pcVar1,*(int *)(this_00 + 0x14) + 1);
  }
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(undefined4 *)(this_00 + 0x14) = 0xf;
  local_5 = 0;
  FUN_10007e10(this_00,&local_5);
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
  
  puVar1 = (undefined1 *)FUN_100030a0(this);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0xf;
  local_5 = 0;
  FUN_10007e10(puVar1,&local_5);
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
  paVar1 = (allocator<char> *)FUN_100030a0(param_1);
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




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(char const * const)
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __thiscall FID_conflict_append(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = length(param_1);
  uVar2 = addressof<>(iVar1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this,
             param_1,uVar2);
  return;
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
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_100030a0(this);
  if (*(uint *)(p_Var1 + 0x14) < param_2) {
    this = _Reallocate_for<class_<lambda_9366063389c5f42a00a5088cf24e69de>,char_const*>
                     (this,param_2,0,param_1);
  }
  else {
    p_Var2 = Myptr(p_Var1);
    *(uint *)(p_Var1 + 0x10) = param_2;
    char_traits<char>::move((char *)p_Var2,param_1,param_2);
    local_5 = 0;
    FUN_10007e10(p_Var2 + param_2,&local_5);
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
  FUN_10007e10(param_1 + param_2,&local_5);
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
  FUN_10005300(param_1,param_2,param_3);
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
  FUN_10007d60(param_1,param_2,param_3);
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
    FUN_10008fd0();
  }
  local_8 = (undefined4 *)FUN_100030a0(local_c);
  uVar1 = local_8[5];
  uVar2 = FID_conflict__Calculate_growth(local_c,param_1);
  uVar3 = FUN_100030a0(local_c);
  local_10 = allocate(uVar2 + 1);
  FUN_100015d0();
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
    FUN_10008fd0();
  }
  local_8 = (undefined4 *)FUN_100030a0(local_c);
  uVar1 = local_8[5];
  uVar2 = FID_conflict__Calculate_growth(local_c,param_1);
  this_00 = (allocator<char> *)FUN_100030a0(local_c);
  local_10 = allocator<char>::allocate(this_00,uVar2 + 1);
  FUN_100015d0();
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
    public: __thiscall std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
   std::_Simple_types<char> >(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<unsigned short>
   >::_String_val<struct std::_Simple_types<unsigned short> >(void)
    public: __thiscall std::_String_val<struct std::_Simple_types<wchar_t> >::_String_val<struct
   std::_Simple_types<wchar_t> >(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __fastcall _String_val<>(int param_1)

{
  Bxty(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}




void FUN_10008fd0(void)

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
  local_18 = FUN_100030a0(local_10);
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
  FUN_100030a0(param_1);
  local_10[0] = FID_conflict_max_size();
  local_10[1] = 8;
  puVar1 = std::_Max_value<unsigned_int>(local_10,local_10 + 1);
  local_14 = *puVar1;
  local_18 = local_14 - 1;
  local_1c = FID_conflict_max_size();
  puVar1 = std::_Max_value<unsigned_int>(&local_1c,&local_18);
  return *puVar1;
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
  local_18 = FUN_100030a0(local_10);
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




undefined * FUN_100091a0(void)

{
  return &DAT_100165d0;
}




int __cdecl
FUN_100091b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int local_c;
  
  uVar2 = 0;
  puVar1 = (uint *)FUN_100091a0();
  local_c = __stdio_common_vsprintf(*puVar1 | 2,puVar1[1],param_1,param_2,param_3,uVar2,param_4);
  if (local_c < 0) {
    local_c = -1;
  }
  return local_c;
}




int __cdecl FUN_10009200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100091b0(param_1,param_2,param_3,&stack0x00000010);
  return iVar1;
}




undefined4 * __fastcall FUN_10009240(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e80b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xf] = 0x1e;
  *(undefined8 *)(param_1 + 0x10) = 0x40e046a000000000;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_10002f10(param_1 + 0x18);
  local_8 = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_100094b0((int)param_1);
  ExceptionList = local_10;
  return param_1;
}




void __fastcall FUN_100093d0(void *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e4b0;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10009620(param_1,'\x01');
  if (*(int *)((int)param_1 + 0x10) != 0) {
    av_frame_free((int)param_1 + 0x10,uVar1);
  }
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  if (*(int *)((int)param_1 + 0x50) != 0) {
    FUN_1000ccb2(*(void **)((int)param_1 + 0x50));
    *(undefined4 *)((int)param_1 + 0x50) = 0;
  }
  if (*(int *)((int)param_1 + 0x54) != 0) {
    if (*(void **)((int)param_1 + 0x54) != (void *)0x0) {
      FUN_10001e80(*(void **)((int)param_1 + 0x54),1);
    }
    *(undefined4 *)((int)param_1 + 0x54) = 0;
  }
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((void *)((int)param_1 + 0x60));
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_100094b0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION p_Var3;
  undefined4 uVar4;
  undefined4 *local_24;
  LPCRITICAL_SECTION local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e83f;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
    p_Var3 = (LPCRITICAL_SECTION)FUN_1000c764(0x1c);
    local_8 = 0;
    if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
      local_20 = (LPCRITICAL_SECTION)0x0;
    }
    else {
      local_20 = FUN_1000bb20(p_Var3);
    }
    *(LPCRITICAL_SECTION *)(param_1 + 0x54) = local_20;
  }
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_24 = (undefined4 *)FUN_1000c764(0x28);
    if (local_24 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      *local_24 = 0;
      local_24[1] = 0;
      local_24[2] = 0;
      local_24[3] = 0;
      local_24[4] = 0;
      local_24[5] = 0;
      local_24[6] = 0;
      local_24[7] = 0;
      local_24[8] = 0;
      local_24[9] = 0;
    }
    *(undefined4 **)(param_1 + 0x50) = local_24;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x50);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined2 *)(*(int *)(param_1 + 0x50) + 0xe) = 0x20;
    *(undefined2 *)(*(int *)(param_1 + 0x50) + 0xc) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x10) = 0;
    **(undefined4 **)(param_1 + 0x50) = 0x28;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar4 = av_frame_alloc(uVar2);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_10009620(void *this,char param_1)

{
  FUN_1000a8d0(this,param_1);
  if (*(int *)((int)this + 0xc) != 0) {
    sws_freeContext(*(undefined4 *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(int *)((int)this + 8) != 0) {
    avcodec_free_context((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    free(*(void **)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined8 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  avfilter_graph_free((int)this + 0x74);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  return;
}




float10 __thiscall FUN_10009730(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar4;
  double dVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint local_50;
  double local_48;
  uint local_30;
  int local_24;
  undefined4 local_1c;
  undefined1 local_15;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e868;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = 0.0;
  if ((param_3 != 0) && (param_1[1] == 0)) {
    local_14 = param_1;
    FUN_10009620(param_1,'\0');
    FUN_100094b0((int)local_14);
    if ((local_14[0x15] != 0) && (local_14[0x14] != 0)) {
      FUN_1000bb80(&local_1c,(LPCRITICAL_SECTION)local_14[0x15]);
      local_8 = 0;
      local_14[1] = param_3;
      iVar3 = avcodec_alloc_context3(0,uVar2);
      local_14[2] = iVar3;
      if (local_14[2] == 0) {
        local_8 = 0xffffffff;
        FUN_1000bbb0(&local_1c);
      }
      else {
        iVar3 = avcodec_parameters_to_context(local_14[2],*(undefined4 *)(param_3 + 0xc));
        if (iVar3 < 0) {
          local_8 = 0xffffffff;
          FUN_1000bbb0(&local_1c);
        }
        else {
          iVar3 = *(int *)(local_14[1] + 0xc);
          if (iVar3 == 0) {
            local_8 = 0xffffffff;
            FUN_1000bbb0(&local_1c);
          }
          else {
            local_14[0x17] = 0;
            local_14[7] = *(int *)(iVar3 + 0x38);
            local_14[9] = local_14[7];
            local_14[8] = *(int *)(iVar3 + 0x3c);
            local_14[10] = local_14[8];
            if ((local_14[7] < 1) || (local_14[8] < 1)) {
              local_8 = 0xffffffff;
              FUN_1000bbb0(&local_1c);
            }
            else {
              if (*(int *)(iVar3 + 0x1c) != -1) {
                local_14[0xc] = *(int *)(iVar3 + 0x1c);
              }
              uVar6 = av_guess_frame_rate(0,local_14[1],0);
              *(undefined8 *)(local_14 + 0xd) = uVar6;
              if ((local_14[0xe] < 1) || (local_14[0xd] < 1)) {
                local_8 = 0xffffffff;
                FUN_1000bbb0(&local_1c);
              }
              else if ((*(int *)(local_14[1] + 0x18) < 1) || (*(int *)(local_14[1] + 0x14) < 1)) {
                local_8 = 0xffffffff;
                FUN_1000bbb0(&local_1c);
              }
              else {
                FUN_10001be0(local_14[0xd],local_14[0xe]);
                uVar7 = FUN_1000e330(extraout_ECX,extraout_EDX);
                local_14[0xf] = (int)uVar7;
                if (local_14[0xf] < 1) {
                  local_14[0xf] = 0x1e;
                }
                fVar4 = FUN_10001be0(local_14[0xd],local_14[0xe]);
                dVar5 = 1000000.0 / (double)fVar4;
                *(double *)(local_14 + 0x10) = dVar5;
                if ((*(int *)(param_3 + 0x20) != 0) || (*(int *)(param_3 + 0x24) != -0x80000000)) {
                  FUN_1000e300();
                  fVar4 = FUN_10001be0(*(int *)(param_3 + 0x14),*(int *)(param_3 + 0x18));
                  dVar5 = dVar5 * (double)fVar4;
                  *(double *)(local_14 + 0x12) = dVar5;
                }
                local_24 = av_image_get_buffer_size(local_14[0xc],local_14[7],local_14[8],8);
                if (local_24 < 1) {
                  local_24 = local_14[7] * local_14[8] * 4;
                }
                if ((int)(0x20000000 / (longlong)local_24) < 2) {
                  local_30 = 1;
                }
                else {
                  local_30 = (uint)(0x20000000 / (longlong)local_24);
                }
                iVar3 = (local_14[0xf] << 2) >> 0x1f;
                if (((int)local_30 >> 0x1f < iVar3) ||
                   (((int)local_30 >> 0x1f <= iVar3 && (local_30 <= (uint)(local_14[0xf] << 2))))) {
                  local_50 = local_30;
                }
                else {
                  local_50 = local_14[0xf] << 2;
                }
                local_14[0x1b] = local_50;
                iVar3 = avcodec_find_decoder(*(undefined4 *)(local_14[2] + 0x10));
                *local_14 = iVar3;
                if (*local_14 == 0) {
                  local_14[0xc] = 0x1c;
                }
                else {
                  *(undefined4 *)(local_14[2] + 0x248) = 0;
                  if ((*(int *)(local_14[1] + 0x50) == 0) || (*(int *)(local_14[1] + 0x4c) == 0)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    fVar4 = FUN_10001be0(*(int *)(local_14[1] + 0x4c),*(int *)(local_14[1] + 0x50));
                    dVar5 = 5.0;
                    if ((double)fVar4 < 5.0) {
                      *(undefined4 *)(local_14[2] + 0x248) = 1;
                    }
                  }
                  iVar3 = avcodec_open2(local_14[2],*local_14,0);
                  if (iVar3 < 0) {
                    local_8 = 0xffffffff;
                    FUN_1000bbb0(&local_1c);
                    goto LAB_10009c72;
                  }
                }
                FUN_10009d30(local_14,local_14[0xc],local_14[7],local_14[8],local_14[9],local_14[10]
                            );
                local_15 = (*(uint *)(local_14[1] + 0x38) & 0x400) != 0;
                *(undefined1 *)((int)local_14 + 0x69) = local_15;
                local_14[0xb] = *(int *)(local_14[1] + 4);
                if ((*(int *)(local_14[1] + 0x2c) < 1) && (*(int *)(local_14[1] + 0x2c) < 0)) {
                  local_48 = 0.0;
                }
                else {
                  FUN_1000e300();
                  fVar4 = FUN_10001be0(*(int *)(local_14[1] + 0x14),*(int *)(local_14[1] + 0x18));
                  local_48 = dVar5 * (double)fVar4;
                }
                if (local_48 <= 0.0) {
                  local_48 = 5e-05;
                }
                local_8 = 0xffffffff;
                FUN_1000bbb0(&local_1c);
              }
            }
          }
        }
      }
    }
  }
LAB_10009c72:
  ExceptionList = local_10;
  return (float10)local_48;
}




void __thiscall FUN_10009c90(void *this,uint param_1,int param_2)

{
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e898;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x54) != 0) {
    local_14 = this;
    FUN_1000bb80(&local_18,*(LPCRITICAL_SECTION *)((int)this + 0x54));
    local_8 = 0;
    FUN_10009d30(local_14,*(int *)((int)local_14 + 0x30),*(int *)((int)local_14 + 0x1c),
                 *(int *)((int)local_14 + 0x20),param_1,param_2);
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_18);
  }
  ExceptionList = local_10;
  return;
}




void __thiscall
FUN_10009d30(void *this,int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  size_t _Size;
  uint uVar3;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e8c8;
  local_10 = ExceptionList;
  uVar1 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)((int)this + 0x54) != 0) && (*(int *)((int)this + 0x50) != 0)) &&
     (*(int *)((int)this + 0x10) != 0)) {
    local_18 = this;
    FUN_1000bb80(&local_1c,*(LPCRITICAL_SECTION *)((int)this + 0x54));
    local_8 = 0;
    uVar3 = param_4 & 0xfffffff0;
    if ((param_2 < 1) || (param_3 < 1)) {
      local_8 = 0xffffffff;
      FUN_1000bbb0(&local_1c);
    }
    else if (((int)uVar3 < 1) || (param_5 < 1)) {
      local_8 = 0xffffffff;
      FUN_1000bbb0(&local_1c);
    }
    else {
      local_11 = '\x01';
      if (((((*(int *)((int)local_18 + 0xc) != 0) && (param_1 == *(int *)((int)local_18 + 0x30))) &&
           (param_2 == *(int *)((int)local_18 + 0x1c))) &&
          ((param_3 == *(int *)((int)local_18 + 0x20) && (uVar3 == *(uint *)((int)local_18 + 0x24)))
          )) && (param_5 == *(int *)((int)local_18 + 0x28))) {
        local_11 = '\0';
      }
      if (local_11 == '\0') {
        local_8 = 0xffffffff;
        FUN_1000bbb0(&local_1c);
      }
      else {
        *(int *)((int)local_18 + 0x30) = param_1;
        *(int *)((int)local_18 + 0x1c) = param_2;
        *(int *)((int)local_18 + 0x20) = param_3;
        *(uint *)((int)local_18 + 0x24) = uVar3;
        *(uint *)(*(int *)((int)local_18 + 0x50) + 4) = uVar3;
        *(int *)((int)local_18 + 0x28) = param_5;
        *(int *)(*(int *)((int)local_18 + 0x50) + 8) = param_5;
        *(int *)(*(int *)((int)local_18 + 0x50) + 0x14) =
             *(int *)((int)local_18 + 0x24) * *(int *)((int)local_18 + 0x28) * 4;
        if (*(int *)((int)local_18 + 0xc) != 0) {
          sws_freeContext(*(undefined4 *)((int)local_18 + 0xc),uVar1);
          *(undefined4 *)((int)local_18 + 0xc) = 0;
        }
        if (*(int *)((int)local_18 + 0x1c) < *(int *)((int)local_18 + 0x24)) {
          local_24 = 0x80;
        }
        else {
          local_24 = 4;
        }
        uVar2 = sws_getContext(*(undefined4 *)((int)local_18 + 0x1c),
                               *(undefined4 *)((int)local_18 + 0x20),
                               *(undefined4 *)((int)local_18 + 0x30),
                               *(undefined4 *)((int)local_18 + 0x24),
                               *(undefined4 *)((int)local_18 + 0x28),0x1c,local_24,0,0,0);
        *(undefined4 *)((int)local_18 + 0xc) = uVar2;
        if (*(int *)((int)local_18 + 0xc) == 0) {
          local_8 = 0xffffffff;
          FUN_1000bbb0(&local_1c);
        }
        else {
          _Size = av_image_get_buffer_size
                            (0x1c,*(undefined4 *)((int)local_18 + 0x24),
                             *(undefined4 *)((int)local_18 + 0x28),8);
          if (*(int *)((int)local_18 + 0x18) != 0) {
            free(*(void **)((int)local_18 + 0x18));
            *(undefined4 *)((int)local_18 + 0x18) = 0;
          }
          uVar2 = FUN_1000ccc0(_Size);
          *(undefined4 *)((int)local_18 + 0x18) = uVar2;
          if (*(int *)((int)local_18 + 0x18) == 0) {
            local_8 = 0xffffffff;
            FUN_1000bbb0(&local_1c);
          }
          else {
            memset(*(void **)((int)local_18 + 0x18),0,_Size);
            av_image_fill_arrays
                      (*(undefined4 *)((int)local_18 + 0x10),*(int *)((int)local_18 + 0x10) + 0x20,
                       *(undefined4 *)((int)local_18 + 0x18),0x1c,
                       *(undefined4 *)((int)local_18 + 0x24),*(undefined4 *)((int)local_18 + 0x28),8
                      );
            local_8 = 0xffffffff;
            FUN_1000bbb0(&local_1c);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}




int __thiscall FUN_1000a060(void *this,undefined4 param_1)

{
  int local_10;
  int local_c;
  
  local_c = -1;
                    /* WARNING: Load size is inaccurate */
  if (((*(int *)((int)this + 8) != 0) && (*this != 0)) && (*(int *)((int)this + 4) != 0)) {
    local_c = avcodec_send_packet(*(undefined4 *)((int)this + 8),param_1);
    local_10 = 0;
    while ((local_10 < 0x20 && (local_c == -0xb))) {
      local_c = avcodec_send_packet(*(undefined4 *)((int)this + 8),param_1);
      local_10 = local_10 + 1;
    }
    if (*(char *)((int)this + 0x69) != '\0') {
      avcodec_send_packet(*(undefined4 *)((int)this + 8),0);
    }
  }
  return local_c;
}




int __thiscall FUN_1000a110(void *this,double param_1,undefined4 *param_2,char param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  undefined1 local_38 [4];
  undefined4 local_34;
  void *local_30;
  undefined4 local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e8f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  if (*(int *)((int)this + 8) == 0) {
    local_1c = -1;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    if (*this == 0) {
      local_1c = -1;
    }
    else if (*(int *)((int)this + 4) == 0) {
      local_1c = -1;
    }
    else if (*(int *)((int)this + 0x58) < *(int *)((int)this + 0x6c)) {
      local_14 = this;
      local_18 = av_frame_alloc(DAT_1001600c ^ (uint)&stack0xfffffffc);
      if (local_18 == 0) {
        local_1c = -2;
      }
      else {
        local_20 = avcodec_receive_frame(*(undefined4 *)((int)local_14 + 8),local_18);
        if (local_20 == 0) {
          *param_2 = *(undefined4 *)(local_18 + 0x60);
          param_2[1] = *(undefined4 *)(local_18 + 100);
          local_24 = local_18;
          if ((*(int *)(local_18 + 0xd0) != 0) || (*(int *)(local_18 + 0xd4) != -0x80000000)) {
            FUN_1000e300();
            fVar4 = FUN_10001be0(*(int *)(*(int *)((int)local_14 + 4) + 0x14),
                                 *(int *)(*(int *)((int)local_14 + 4) + 0x18));
            if (in_XMM0_Qa * (double)fVar4 < param_1) {
              av_frame_free(&local_18);
              ExceptionList = local_10;
              return local_1c;
            }
          }
          FUN_1000ab60(local_14,local_18);
          if ((*(int *)((int)local_14 + 0x74) == 0) ||
             ((local_1c = av_buffersrc_add_frame(*(undefined4 *)((int)local_14 + 0x84),local_18),
              -1 < local_1c &&
              (local_1c = av_buffersink_get_frame_flags
                                    (*(undefined4 *)((int)local_14 + 0x88),local_18,0),
              -1 < local_1c)))) {
            FUN_1000bb80(&local_34,*(LPCRITICAL_SECTION *)((int)local_14 + 0x54));
            local_8 = 0;
            if (param_3 != '\0') {
              bVar1 = FUN_10002e20((int)local_14 + 0x60);
              if (!bVar1) {
                local_28 = (void *)((int)local_14 + 0x60);
                piVar2 = (int *)FUN_10002e50(local_28,local_38);
                puVar3 = (undefined4 *)FUN_10002da0(piVar2);
                local_2c = *puVar3;
                FUN_10002df0((void *)((int)local_14 + 0x60));
                av_frame_free(&local_2c);
              }
              *(undefined4 *)((int)local_14 + 0x58) = 0;
            }
            local_30 = (void *)((int)local_14 + 0x60);
            FUN_10002dc0(local_30,&local_18);
            *(int *)((int)local_14 + 0x58) = *(int *)((int)local_14 + 0x58) + 1;
            *(int *)((int)local_14 + 0x5c) = *(int *)((int)local_14 + 0x5c) + 1;
            local_1c = *(int *)((int)local_14 + 0x58);
            local_8 = 0xffffffff;
            FUN_1000bbb0(&local_34);
          }
        }
        else {
          if (local_20 == -0x20464f45) {
            *(undefined1 *)((int)local_14 + 0x70) = 1;
          }
          av_frame_free(&local_18);
          local_1c = *(int *)((int)local_14 + 0x58);
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_1c;
}




undefined4 __thiscall FUN_1000a3c0(void *this,char param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 local_14 [4];
  void *local_10;
  undefined4 local_c;
  void *local_8;
  
  local_c = 0;
  if (((param_1 == '\0') && (*(int *)((int)this + 0x54) != 0)) && (*(int *)((int)this + 0x58) != 0))
  {
    local_8 = this;
    bVar1 = FUN_10002e20((int)this + 0x60);
    if (!bVar1) {
      local_10 = (void *)((int)local_8 + 0x60);
      piVar2 = (int *)FUN_10002e50(local_10,local_14);
      puVar3 = (undefined4 *)FUN_10002da0(piVar2);
      local_c = *puVar3;
      FUN_10002df0((void *)((int)local_8 + 0x60));
      *(int *)((int)local_8 + 0x58) = *(int *)((int)local_8 + 0x58) + -1;
    }
  }
  else if (*(int *)((int)this + 0x14) != 0) {
    local_c = *(undefined4 *)((int)this + 0x14);
  }
  return local_c;
}




undefined4 __thiscall FUN_1000a460(void *this,double *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  undefined1 local_44 [4];
  undefined4 local_40;
  void *local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e928;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = this;
  if ((((*(int *)((int)this + 4) != 0) && (-1 < *(int *)((int)this + 0x2c))) &&
      (*(int *)((int)this + 0x54) != 0)) && ((*(int *)((int)this + 0x10) != 0 && (param_2 == '\0')))
     ) {
    FUN_1000bb80(&local_2c,*(LPCRITICAL_SECTION *)((int)this + 0x54));
    local_8 = 0;
    local_18 = (int *)FUN_1000a3c0(local_14,'\0');
    if ((local_18 == (int *)0x0) || ((local_18[0x11] < 1 || (*local_18 == 0)))) {
      local_8 = 0xffffffff;
      FUN_1000bbb0(&local_2c);
    }
    else {
      local_24 = *(uint *)((int)local_14 + 0x24);
      local_20 = *(int *)((int)local_14 + 0x28);
      local_1c = *(int *)(*(int *)((int)local_14 + 4) + 0xc);
      if (((local_1c != 0) && (local_24 == *(uint *)(local_1c + 0x38))) &&
         (local_20 == *(int *)(local_1c + 0x3c))) {
        local_24 = local_18[0x11];
        local_20 = local_18[0x12];
      }
      FUN_10009d30(local_14,local_18[0x14],local_18[0x11],local_18[0x12],local_24,local_20);
      if (*(int *)((int)local_14 + 0xc) == 0) {
        local_8 = 0xffffffff;
        FUN_1000bbb0(&local_2c);
      }
      else {
        local_40 = sws_scale(*(undefined4 *)((int)local_14 + 0xc),local_18,local_18 + 8,0,
                             *(undefined4 *)((int)local_14 + 0x20),
                             *(undefined4 *)((int)local_14 + 0x10),
                             *(int *)((int)local_14 + 0x10) + 0x20,uVar2);
        *(undefined4 *)(*(int *)((int)local_14 + 0x10) + 0x44) =
             *(undefined4 *)((int)local_14 + 0x24);
        *(undefined4 *)(*(int *)((int)local_14 + 0x10) + 0x48) =
             *(undefined4 *)((int)local_14 + 0x28);
        local_30 = local_18;
        if ((local_18[0x34] != 0) || (local_18[0x35] != -0x80000000)) {
          FUN_1000e300();
          fVar4 = FUN_10001be0(*(int *)(*(int *)((int)local_14 + 4) + 0x14),
                               *(int *)(*(int *)((int)local_14 + 4) + 0x18));
          in_XMM0_Qa = in_XMM0_Qa * (double)fVar4;
          *param_1 = in_XMM0_Qa;
        }
        bVar1 = FUN_10002e20((int)local_14 + 0x60);
        if (!bVar1) {
          local_3c = (void *)((int)local_14 + 0x60);
          piVar3 = (int *)FUN_10002e50(local_3c,local_44);
          piVar3 = (int *)FUN_10002da0(piVar3);
          local_28 = *piVar3;
          if (((local_28 != 0) &&
              ((local_34 = local_18, local_18[0x34] != 0 || (local_18[0x35] != -0x80000000)))) &&
             ((local_38 = local_28, *(int *)(local_28 + 0xd0) != 0 ||
              (*(int *)(local_28 + 0xd4) != -0x80000000)))) {
            FUN_1000e300();
            fVar4 = FUN_10001be0(*(int *)(*(int *)((int)local_14 + 4) + 0x14),
                                 *(int *)(*(int *)((int)local_14 + 4) + 0x18));
            in_XMM0_Qa = in_XMM0_Qa * (double)fVar4;
            if ((0.0 < in_XMM0_Qa) && (in_XMM0_Qa <= 10.0)) {
              *(double *)((int)local_14 + 0x40) = in_XMM0_Qa * 1000000.0;
            }
          }
        }
        if (*(int **)((int)local_14 + 0x14) != local_18) {
          if (*(int *)((int)local_14 + 0x14) != 0) {
            av_frame_free((int)local_14 + 0x14);
          }
          *(int **)((int)local_14 + 0x14) = local_18;
        }
        local_8 = 0xffffffff;
        FUN_1000bbb0(&local_2c);
      }
    }
  }
  ExceptionList = local_10;
  return *(undefined4 *)((int)local_14 + 0x10);
}




undefined4 __fastcall FUN_1000a7f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




float10 __fastcall FUN_1000a810(int param_1)

{
  return (float10)*(double *)(param_1 + 0x40);
}




undefined4 __fastcall FUN_1000a830(int param_1)

{
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x3c) < 1) {
    local_c = 0x1e;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 0x3c);
  }
  return local_c;
}




undefined4 __fastcall FUN_1000a860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




bool __fastcall FUN_1000a880(int *param_1)

{
  bool local_5;
  
  local_5 = true;
  if (*param_1 != 0) {
    local_5 = param_1[0x16] < param_1[0x1b];
  }
  return local_5;
}




void __thiscall FUN_1000a8d0(void *this,char param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e958;
  local_10 = ExceptionList;
  uVar2 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x54) != 0) {
    local_14 = (int *)this;
    FUN_1000bb80(&local_20,*(LPCRITICAL_SECTION *)((int)this + 0x54));
    local_8 = 0;
    if (((param_1 == '\0') && (local_14[2] != 0)) && (*local_14 != 0)) {
      avcodec_flush_buffers(local_14[2],uVar2);
    }
    while (bVar1 = FUN_10002e20(local_14 + 0x18), !bVar1) {
      local_18 = local_14 + 0x18;
      piVar3 = (int *)FUN_10002e50(local_18,local_24);
      puVar4 = (undefined4 *)FUN_10002da0(piVar3);
      local_1c = *puVar4;
      FUN_10002df0(local_14 + 0x18);
      av_frame_free(&local_1c);
    }
    local_14[0x17] = 0;
    local_14[0x16] = 0;
    if (local_14[5] != 0) {
      av_frame_free(local_14 + 5);
    }
    local_14[5] = 0;
    *(undefined1 *)(local_14 + 0x1c) = 0;
    local_8 = 0xffffffff;
    FUN_1000bbb0(&local_20);
  }
  ExceptionList = local_10;
  return;
}




undefined1 __fastcall FUN_1000a9f0(int param_1)

{
  bool bVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_5 = 1;
  }
  else {
    local_c = param_1;
    FUN_1000bb80(&local_14,*(LPCRITICAL_SECTION *)(param_1 + 0x54));
    if ((*(char *)(local_c + 0x70) == '\0') || (bVar1 = FUN_10002e20(local_c + 0x60), !bVar1)) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
    local_5 = (undefined1)local_10;
    FUN_1000bbb0(&local_14);
  }
  return local_5;
}




void __cdecl FUN_1000aa70(char *param_1,void *param_2,void *param_3)

{
  FILE *_File;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  if (((param_1 != (char *)0x0) && (param_3 != (void *)0x0)) && (param_2 != (void *)0x0)) {
    uStack_12 = 0;
    local_10 = 0;
    local_18 = 0x4d42;
    uStack_16 = (undefined2)*(undefined4 *)((int)param_2 + 0x14);
    local_14 = (undefined2)((uint)*(undefined4 *)((int)param_2 + 0x14) >> 0x10);
    uStack_e = 0x36;
    local_c = 0;
    _File = fopen(param_1,"wb");
    if (_File != (FILE *)0x0) {
      fwrite(&local_18,1,0xe,_File);
      fwrite(param_2,1,0x28,_File);
      fwrite(param_3,1,*(size_t *)((int)param_2 + 0x14),_File);
      fclose(_File);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_1000ab60(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  double dVar6;
  undefined4 local_2ec;
  undefined4 local_2e8;
  char *local_2e4;
  double local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  void *local_2cc;
  undefined1 local_2c8 [256];
  undefined1 local_1c8 [128];
  char local_148 [64];
  char local_108 [64];
  undefined1 local_c8 [64];
  char local_88 [64];
  char local_48 [64];
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  local_2d0 = 0;
  local_2cc = this;
                    /* WARNING: Load size is inaccurate */
  if (((((param_1 != 0) && (*(int *)((int)this + 4) != 0)) && (*(int *)((int)this + 8) != 0)) &&
      (*this != 0)) &&
     (((*(int *)((int)this + 0x78) != *(int *)(param_1 + 0x44) ||
       (*(int *)((int)this + 0x7c) != *(int *)(param_1 + 0x48))) ||
      (*(int *)((int)this + 0x80) != *(int *)(param_1 + 0x50))))) {
    avfilter_graph_free();
    local_2d8 = 0;
    iVar1 = av_frame_get_side_data(param_1);
    if (iVar1 != 0) {
      local_2d8 = *(int *)(iVar1 + 4);
    }
    if ((local_2d8 == 0) &&
       (piVar2 = (int *)av_packet_side_data_get
                                  (*(undefined4 *)(*(int *)((int)local_2cc + 8) + 0x2a0),
                                   *(undefined4 *)(*(int *)((int)local_2cc + 8) + 0x2a4)),
       piVar2 != (int *)0x0)) {
      local_2d8 = *piVar2;
    }
    if (local_2d8 != 0) {
      uVar3 = avfilter_graph_alloc();
      *(undefined4 *)((int)local_2cc + 0x74) = uVar3;
      if (*(int *)((int)local_2cc + 0x74) == 0) {
        local_2d0 = -1;
      }
      else {
        memset(local_2c8,0,0x100);
        FUN_10009200(local_2c8,0x100,
                     "video_size=%dx%d:pix_fmt=%d:time_base=%d/%d:pixel_aspect=%d/%d");
        if ((*(int *)((int)local_2cc + 0x34) != 0) && (*(int *)((int)local_2cc + 0x38) != 0)) {
          av_strlcatf(local_2c8,0x100,":frame_rate=%d/%d",*(undefined4 *)((int)local_2cc + 0x34),
                      *(undefined4 *)((int)local_2cc + 0x38));
        }
        uVar3 = *(undefined4 *)((int)local_2cc + 0x74);
        uVar4 = avfilter_get_by_name();
        local_2d0 = avfilter_graph_create_filter
                              ((int)local_2cc + 0x84,uVar4,"ffplay_buffer",local_2c8,0,uVar3);
        if (-1 < local_2d0) {
          uVar3 = *(undefined4 *)((int)local_2cc + 0x74);
          uVar4 = avfilter_get_by_name();
          local_2d0 = avfilter_graph_create_filter
                                ((int)local_2cc + 0x88,uVar4,"ffplay_buffersink",0,0,uVar3);
          if (-1 < local_2d0) {
            local_2ec = *(undefined4 *)((int)local_2cc + 0x88);
            fVar5 = (float10)av_display_rotation_get();
            fVar5 = (float10)round((double)fVar5);
            local_2e0 = -(double)fVar5;
            dVar6 = floor(local_2e0 / 360.0 + 0.0025);
            local_2e0 = local_2e0 - dVar6 * 360.0;
            memset(local_88,0,0x40);
            memset(local_48,0,0x40);
            memset(local_108,0,0x40);
            memset(local_c8,0,0x40);
            if (1.0 <= ABS(local_2e0 - 90.0)) {
              if (1.0 <= ABS(local_2e0 - 180.0)) {
                if (1.0 <= ABS(local_2e0 - 270.0)) {
                  if (1.0 < ABS(local_2e0)) {
                    FUN_10009200(local_148,0x40,"%f*PI/180");
                    strcpy_s(local_88,0x40,"rotate");
                    strcpy_s(local_108,0x40,local_148);
                  }
                }
                else {
                  strcpy_s(local_88,0x40,"transpose");
                  strcpy_s(local_108,0x40,"cclock");
                }
              }
              else {
                strcpy_s(local_88,0x40,"hflip");
                strcpy_s(local_48,0x40,"vflip");
              }
            }
            else {
              strcpy_s(local_88,0x40,"transpose");
              strcpy_s(local_108,0x40,"clock");
            }
            for (local_2d4 = 0; (local_2d4 < 2 && (local_88[local_2d4 * 0x40] != '\0'));
                local_2d4 = local_2d4 + 1) {
              memset(local_1c8,0,0x80);
              FUN_10009200(local_1c8,0x80,"eu_video_viewer_%s");
              local_2e4 = local_108 + local_2d4 * 0x40;
              if (*local_2e4 == '\0') {
                local_2e4 = (char *)0x0;
              }
              local_2e8 = 0;
              uVar3 = avfilter_get_by_name();
              local_2d0 = avfilter_graph_create_filter(&local_2e8,uVar3,local_1c8,local_2e4,0);
              if ((local_2d0 < 0) ||
                 (local_2d0 = avfilter_link(local_2e8,0,local_2ec), local_2d0 < 0)) break;
              local_2ec = local_2e8;
            }
            if ((-1 < local_2d0) &&
               (local_2d0 = avfilter_link(*(undefined4 *)((int)local_2cc + 0x84),0,local_2ec,0),
               -1 < local_2d0)) {
              local_2d0 = avfilter_graph_config(*(undefined4 *)((int)local_2cc + 0x74),0);
            }
          }
        }
      }
    }
    *(undefined4 *)((int)local_2cc + 0x78) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)((int)local_2cc + 0x7c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((int)local_2cc + 0x80) = *(undefined4 *)(param_1 + 0x50);
  }
  if (local_2d0 < 0) {
    avfilter_graph_free();
    *(undefined4 *)((int)local_2cc + 0x84) = 0;
    *(undefined4 *)((int)local_2cc + 0x88) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 * __thiscall FUN_1000b390(void *this,undefined4 param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0x2000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0x32;
  return (undefined4 *)this;
}




/* Library Function - Single Match
    public: __thiscall std::shared_ptr<class __ExceptionPtr>::~shared_ptr<class
   __ExceptionPtr>(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall
std::shared_ptr<class___ExceptionPtr>::~shared_ptr<class___ExceptionPtr>
          (shared_ptr<class___ExceptionPtr> *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1000b430((undefined4 *)this);
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_1000b430(undefined4 *param_1)

{
  *param_1 = 1;
  FUN_1000c040(param_1 + 1,10000);
  if (param_1[5] != 0) {
    (**(code **)(*(int *)param_1[5] + 8))(param_1[5]);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(int *)param_1[4] + 8))(param_1[4]);
  }
  param_1[4] = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(int *)param_1[3] + 8))(param_1[3]);
  }
  param_1[3] = 0;
  return;
}




void __thiscall FUN_1000b4d0(void *this,int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  HWND pHVar4;
  HANDLE pvVar5;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  FUN_1000b430((undefined4 *)this);
  *(undefined4 *)this = 0;
  iVar3 = Ordinal_1(0,(int)this + 0xc,0);
  if ((iVar3 == 0) && (*(int *)((int)this + 0xc) != 0)) {
    uVar1 = *(undefined4 *)((int)this + 0xc);
    pcVar2 = *(code **)(**(int **)((int)this + 0xc) + 0x18);
    pHVar4 = GetDesktopWindow();
    iVar3 = (*pcVar2)(uVar1,pHVar4,2);
    if (-1 < iVar3) {
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_2c = 0x24;
      local_28 = 0x18180;
      if ((0x13 < *(uint *)(param_1 + 8)) && (*(short *)(param_1 + 0xc) != 0)) {
        *(uint *)((int)this + 8) =
             (*(uint *)(param_1 + 8) / 0x14 - 1) + (uint)*(ushort *)(param_1 + 0xc);
        *(uint *)((int)this + 8) =
             (*(uint *)((int)this + 8) / (uint)*(ushort *)(param_1 + 0xc)) *
             (uint)*(ushort *)(param_1 + 0xc);
      }
      local_24 = *(int *)((int)this + 8) << 2;
      local_1c = param_1;
      (**(code **)(**(int **)((int)this + 0xc) + 0xc))
                (*(undefined4 *)((int)this + 0xc),&local_2c,(int)this + 0x10,0);
      if ((*(int *)((int)this + 0x10) != 0) &&
         ((**(code **)**(undefined4 **)((int)this + 0x10))
                    (*(undefined4 *)((int)this + 0x10),&DAT_100109a0,(int)this + 0x14),
         *(int *)((int)this + 0x14) != 0)) {
        (**(code **)(**(int **)((int)this + 0x10) + 0x34))(*(undefined4 *)((int)this + 0x10),0);
        FUN_1000ba80(this,*(int *)((int)this + 0x1c));
        pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1000b6f0,this,0,(LPDWORD)0x0);
        *(HANDLE *)((int)this + 4) = pvVar5;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 FUN_1000b6f0(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_1000b710(param_1);
  }
  return uVar1;
}




void __fastcall FUN_1000b710(int *param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  int local_58;
  void *local_54;
  size_t local_50;
  void *local_4c;
  size_t local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38 [8];
  HANDLE local_18 [4];
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  local_18[0] = (HANDLE)0x0;
  local_18[1] = (HANDLE)0x0;
  local_18[2] = (HANDLE)0x0;
  local_18[3] = (HANDLE)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_3c = param_1;
  for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    local_18[local_44] = pvVar1;
    local_38[local_44 * 2] = local_44 * local_3c[2];
    local_38[local_44 * 2 + 1] = (int)local_18[local_44];
  }
  local_40 = (**(code **)(*(int *)local_3c[5] + 0xc))(local_3c[5],4,local_38);
  if ((-1 < local_40) &&
     (local_40 = (**(code **)(*(int *)local_3c[4] + 0x30))(local_3c[4],0,0,1), -1 < local_40)) {
    while (*local_3c == 0) {
      DVar2 = WaitForMultipleObjects(4,local_18,0,0xffffffff);
      if (DVar2 < 5) {
        iVar3 = ((DVar2 + 2) % 4) * local_3c[2];
        local_54 = (void *)0x0;
        local_50 = 0;
        local_4c = (void *)0x0;
        local_48 = 0;
        local_40 = (**(code **)(*(int *)local_3c[4] + 0x2c))
                             (local_3c[4],iVar3,local_3c[2],&local_54,&local_50,&local_4c,&local_48,
                              0);
        if (local_40 == -0x7787ff6a) {
          local_40 = (**(code **)(*(int *)local_3c[4] + 0x50))(local_3c[4]);
          local_40 = (**(code **)(*(int *)local_3c[4] + 0x2c))
                               (local_3c[4],iVar3,local_3c[2],&local_54,&local_50,&local_4c,
                                &local_48,0);
        }
        if ((local_54 != (void *)0x0) && (local_50 != 0)) {
          FUN_1000b9e0(local_3c,local_54,local_50);
        }
        if ((local_4c != (void *)0x0) && (local_48 != 0)) {
          FUN_1000b9e0(local_3c,local_4c,local_48);
        }
        local_40 = (**(code **)(*(int *)local_3c[4] + 0x4c))
                             (local_3c[4],local_54,local_50,local_4c,local_48);
      }
    }
    local_40 = (**(code **)(*(int *)local_3c[4] + 0x48))(local_3c[4]);
    for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
      CloseHandle((HANDLE)local_38[local_58 * 2 + 1]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




size_t __thiscall FUN_1000b9e0(void *this,void *param_1,size_t param_2)

{
  size_t sVar1;
  
  if ((param_1 == (void *)0x0) || ((int)param_2 < 1)) {
    sVar1 = 0xffffffff;
  }
  else {
    sVar1 = FUN_10006330(*(void **)((int)this + 0x18),param_1,param_2);
  }
  return sVar1;
}




void __thiscall FUN_1000ba20(void *this,int *param_1)

{
  if (*(int *)((int)this + 0x10) != 0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0x18))(*(undefined4 *)((int)this + 0x10),param_1);
    *param_1 = (*param_1 + 10000) / 100;
  }
  return;
}




void __thiscall FUN_1000ba80(void *this,int param_1)

{
  if (*(int *)((int)this + 0x10) == 0) {
    *(int *)((int)this + 0x1c) = param_1;
  }
  else {
    (**(code **)(**(int **)((int)this + 0x10) + 0x3c))
              (*(undefined4 *)((int)this + 0x10),param_1 * 0x32 + -5000);
  }
  return;
}




undefined1 __fastcall FUN_1000bae0(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 4) == -1)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}




LPCRITICAL_SECTION __fastcall FUN_1000bb20(LPCRITICAL_SECTION param_1)

{
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  InitializeCriticalSection(param_1);
  return param_1;
}




void __fastcall FUN_1000bb40(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




void __fastcall FUN_1000bb50(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_1);
  p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)GetCurrentThreadId();
  param_1[1].DebugInfo = p_Var1;
  return;
}




undefined4 * __thiscall FUN_1000bb80(void *this,LPCRITICAL_SECTION param_1)

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




void __fastcall FUN_1000bbb0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}




int __fastcall
FUN_1000bbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_100091a0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,0,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




int __fastcall
FUN_1000bc30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_100091a0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,0,param_4);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




int __cdecl FUN_1000bc70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_100091a0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,0,&stack0x00000010);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




void __fastcall FUN_1000bcb0(LPCSTR param_1)

{
  HANDLE hFindFile;
  undefined8 local_158;
  _WIN32_FIND_DATAA local_150;
  uint local_c;
  
  local_c = DAT_1001600c ^ (uint)&local_158;
  local_158 = 0;
  if (param_1 == (LPCSTR)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_158);
    return;
  }
  memset(&local_150,0,0x140);
  hFindFile = FindFirstFileA(param_1,&local_150);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    __security_check_cookie(local_c ^ (uint)&local_158);
    return;
  }
  __security_check_cookie(local_c ^ (uint)&local_158);
  return;
}




void __fastcall FUN_1000bd70(LPCWSTR param_1)

{
  HANDLE hFindFile;
  undefined8 local_268;
  _WIN32_FIND_DATAW local_260;
  uint local_c;
  
  local_c = DAT_1001600c ^ (uint)&local_268;
  local_268 = 0;
  if (param_1 == (LPCWSTR)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_268);
    return;
  }
  memset(&local_260,0,0x250);
  hFindFile = FindFirstFileW(param_1,&local_260);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    __security_check_cookie(local_c ^ (uint)&local_268);
    return;
  }
  __security_check_cookie(local_c ^ (uint)&local_268);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_1000be30(undefined4 param_1)

{
  int iVar1;
  _SYSTEMTIME local_2018;
  CHAR local_2008 [8192];
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  local_2018.wYear = 0;
  local_2018.wMonth = 0;
  local_2018.wDayOfWeek = 0;
  local_2018.wDay = 0;
  local_2018.wHour = 0;
  local_2018.wMinute = 0;
  local_2018.wSecond = 0;
  local_2018.wMilliseconds = 0;
  GetLocalTime(&local_2018);
  memset(local_2008,0,0x2000);
  iVar1 = FUN_1000bc70(local_2008,0x30,"%02d:%02d:%02d:%03d ");
  FUN_100091b0(local_2008 + iVar1,2000,param_1,&stack0x00000008);
  OutputDebugStringA(local_2008);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_1000bf20(ushort *param_1)

{
  ushort uVar1;
  HANDLE hObject;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  bool bVar6;
  undefined4 local_234;
  undefined1 local_230 [32];
  ushort local_210 [260];
  uint local_8;
  
  local_8 = DAT_1001600c ^ (uint)&stack0xfffffffc;
  if (param_1 != (ushort *)0x0) {
    hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
    if (hObject != (HANDLE)0xffffffff) {
      local_234 = 0x22c;
      memset(local_230,0,0x228);
      Process32FirstW(hObject,&local_234);
      do {
        puVar5 = local_210;
        puVar2 = param_1;
        do {
          uVar1 = *puVar5;
          bVar6 = uVar1 < *puVar2;
          if (uVar1 != *puVar2) {
LAB_1000bfc6:
            uVar3 = -(uint)bVar6 | 1;
            goto LAB_1000bfcb;
          }
          if (uVar1 == 0) break;
          uVar1 = puVar5[1];
          bVar6 = uVar1 < puVar2[1];
          if (uVar1 != puVar2[1]) goto LAB_1000bfc6;
          puVar5 = puVar5 + 2;
          puVar2 = puVar2 + 2;
        } while (uVar1 != 0);
        uVar3 = 0;
LAB_1000bfcb:
        if (uVar3 == 0) {
          CloseHandle(hObject);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        iVar4 = Process32NextW(hObject,&local_234);
        if (iVar4 == 0) {
          CloseHandle(hObject);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      } while( true );
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_1000c040(undefined4 *param_1,DWORD param_2)

{
  HANDLE hHandle;
  
  hHandle = (HANDLE)*param_1;
  if ((hHandle != (HANDLE)0xffffffff) && (hHandle != (HANDLE)0x0)) {
    WaitForSingleObject(hHandle,param_2);
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}




void __fastcall FUN_1000c070(int param_1,int param_2,int param_3,int param_4,int *param_5)

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




char * __fastcall
FUN_1000c140(char *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = strrchr(param_1,0x5c);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = strrchr(param_1,0x2f);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = param_1;
      }
    }
    if ((*pcVar2 == '\\') || (*pcVar2 == '/')) {
      pcVar2 = pcVar2 + 1;
    }
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_1 + (int)(pcVar3 + (-(int)pcVar2 - (int)(param_1 + 1)));
    if (0 < (int)pcVar3) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
                (param_2,pcVar2,(uint)pcVar3);
      return pcVar3;
    }
  }
  return (char *)0x0;
}




uint __fastcall FUN_1000c1b0(wchar_t *param_1,void *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  uint uVar4;
  
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = wcsrchr(param_1,L'\\');
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = wcsrchr(param_1,L'/');
      if (pwVar2 == (wchar_t *)0x0) {
        pwVar2 = param_1;
      }
    }
    if ((*pwVar2 == L'\\') || (*pwVar2 == L'/')) {
      pwVar2 = pwVar2 + 1;
    }
    pwVar3 = param_1;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    uVar4 = (((int)pwVar3 - (int)(param_1 + 1) >> 1) * 2 - (int)pwVar2) + (int)param_1 >> 1;
    if (0 < (int)uVar4) {
      FID_conflict_assign(param_2,pwVar2,uVar4);
      return uVar4;
    }
  }
  return 0;
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
  *(undefined4 *)(this + 8) = 0x10000000;
  *(undefined4 *)(this + 4) = 0x10000000;
  *(undefined4 *)(this + 0xc) = 0xe00;
  *(undefined **)(this + 0x10) = &DAT_1000f3c0;
  HVar1 = FUN_100015e0((LPCRITICAL_SECTION)(this + 0x14));
  if (HVar1 < 0) {
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    }
    DAT_100165a1 = 1;
  }
  return this;
}




undefined4 * __thiscall FUN_1000c335(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  return (undefined4 *)this;
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




void __fastcall FUN_1000c368(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
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
    public: struct HINSTANCE__ * & __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::operator[](int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

HINSTANCE__ ** __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
operator[](CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
           *this,int param_1)

{
  code *pcVar1;
  HINSTANCE__ **ppHVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return (HINSTANCE__ **)(*(int *)this + param_1 * 4);
  }
  FUN_10001560(0xc000008c,1);
  pcVar1 = (code *)swi(3);
  ppHVar2 = (HINSTANCE__ **)(*pcVar1)();
  return ppHVar2;
}




/* Library Function - Single Match
    public: int __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::Add(struct HINSTANCE__ * const &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::Add
          (CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
           *this,HINSTANCE__ **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  HINSTANCE__ **_Memory;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  uint _Count;
  
  iVar5 = *(int *)(this + 4);
  iVar2 = *(int *)(this + 8);
  if (iVar5 == iVar2) {
    _Memory = *(HINSTANCE__ ***)this;
    if ((_Memory <= param_1) && (param_1 < _Memory + iVar2)) {
      FUN_1000c4b7(-0x7fffbffb);
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (iVar2 == 0) {
      _Count = 1;
LAB_1000c401:
      pvVar4 = _recalloc(_Memory,_Count,4);
      if (pvVar4 != (void *)0x0) {
        iVar5 = *(int *)(this + 4);
        *(uint *)(this + 8) = _Count;
        *(void **)this = pvVar4;
        goto LAB_1000c419;
      }
    }
    else {
      _Count = iVar5 * 2;
      if ((-1 < (int)_Count) && (_Count < 0x20000000)) goto LAB_1000c401;
    }
    iVar5 = 0;
  }
  else {
LAB_1000c419:
    puVar1 = (undefined4 *)(*(int *)this + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      iVar5 = *(int *)(this + 4);
    }
    *(int *)(this + 4) = iVar5 + 1;
    iVar5 = 1;
  }
  return iVar5;
}




/* Library Function - Single Match
    public: bool __thiscall ATL::CAtlBaseModule::AddResourceInstance(struct HINSTANCE__ *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall ATL::CAtlBaseModule::AddResourceInstance(CAtlBaseModule *this,HINSTANCE__ *param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  iVar1 = CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
          ::Add((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
                 *)(this + 0x2c),&param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return iVar1 != 0;
}




/* Library Function - Single Match
    int __cdecl ATL::AtlCrtErrorCheck(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ATL::AtlCrtErrorCheck(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return param_1;
  }
  if (param_1 == 0xc) {
    iVar2 = -0x7ff8fff2;
  }
  else if ((param_1 == 0x16) || (param_1 == 0x22)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    if (param_1 == 0x50) {
      return param_1;
    }
    iVar2 = -0x7fffbffb;
  }
  FUN_1000c4b7(iVar2);
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}




void FUN_1000c4b7(int param_1)

{
  code *pcVar1;
  
  FUN_10001560(((param_1 != -0x7ff8fff2) - 1 & 0xfffffffa) + 0xc000001d,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    public: struct HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

HINSTANCE__ * __thiscall ATL::CAtlBaseModule::GetHInstanceAt(CAtlBaseModule *this,int param_1)

{
  HINSTANCE__ **ppHVar1;
  HINSTANCE__ *pHVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  if ((*(int *)(this + 0x30) < param_1) || (param_1 < 0)) {
    pHVar2 = (HINSTANCE__ *)0x0;
  }
  else if (param_1 == *(int *)(this + 0x30)) {
    pHVar2 = *(HINSTANCE__ **)(this + 8);
  }
  else {
    ppHVar1 = CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
              ::operator[]((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
                            *)(this + 0x2c),param_1);
    pHVar2 = *ppHVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return pHVar2;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall ATL::CSimpleArray<unsigned long,class
   ATL::CSimpleArrayEqualHelper<unsigned long> >::InternalSetAtIndex(int,unsigned long const &)
    public: void __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::InternalSetAtIndex(int,struct HINSTANCE__ *
   const &)
    public: void __thiscall ATL::CSimpleArray<class CDHtmlControlSink *,class
   ATL::CSimpleArrayEqualHelper<class CDHtmlControlSink *> >::InternalSetAtIndex(int,class
   CDHtmlControlSink * const &)
    public: void __thiscall ATL::CSimpleArray<class CDHtmlElementEventSink *,class
   ATL::CSimpleArrayEqualHelper<class CDHtmlElementEventSink *> >::InternalSetAtIndex(int,class
   CDHtmlElementEventSink * const &)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void __thiscall InternalSetAtIndex(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = (undefined4 *)(*this + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}




undefined4 __fastcall FUN_1000c53b(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return 0;
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
    public: int __thiscall ATL::CSimpleArray<struct HINSTANCE__ *,class
   ATL::CSimpleArrayEqualHelper<struct HINSTANCE__ *> >::RemoveAt(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
ATL::CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
RemoveAt(CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
         *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 < 0) || (iVar2 = *(int *)(this + 4), iVar2 <= param_1)) {
    iVar2 = 0;
  }
  else {
    if (param_1 != iVar2 + -1) {
      uVar3 = (iVar2 - param_1) * 4;
      pvVar1 = (void *)(*(int *)this + param_1 * 4);
      Checked::memmove_s(pvVar1,uVar3,(void *)((int)pvVar1 + 4),uVar3 - 4);
      iVar2 = *(int *)(this + 4);
    }
    *(int *)(this + 4) = iVar2 + -1;
    iVar2 = 1;
  }
  return iVar2;
}




/* Library Function - Single Match
    public: bool __thiscall ATL::CAtlBaseModule::RemoveResourceInstance(struct HINSTANCE__ *)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __thiscall
ATL::CAtlBaseModule::RemoveResourceInstance(CAtlBaseModule *this,HINSTANCE__ *param_1)

{
  HINSTANCE__ **ppHVar1;
  bool bVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  bVar2 = false;
  iVar3 = 0;
  if (0 < *(int *)(this + 0x30)) {
    do {
      ppHVar1 = CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
                ::operator[]((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
                              *)(this + 0x2c),iVar3);
      if (*ppHVar1 == param_1) {
        CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>::
        RemoveAt((CSimpleArray<struct_HINSTANCE__*,class_ATL::CSimpleArrayEqualHelper<struct_HINSTANCE__*>_>
                  *)(this + 0x2c),iVar3);
        bVar2 = true;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x30));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return bVar2;
}




void __fastcall FUN_1000c620(undefined4 *param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




/* Library Function - Single Match
    void __cdecl ATL::Checked::memmove_s(void *,unsigned int,void const *,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ATL::Checked::memmove_s(void *param_1,uint param_2,void *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  
  if (param_4 == 0) {
LAB_1000c680:
    iVar2 = 0;
  }
  else {
    if ((param_1 == (void *)0x0) || (param_3 == (void *)0x0)) {
      piVar1 = _errno();
      iVar2 = 0x16;
    }
    else {
      if (param_4 <= param_2) {
        memmove(param_1,param_3,param_4);
        goto LAB_1000c680;
      }
      piVar1 = _errno();
      iVar2 = 0x22;
    }
    *piVar1 = iVar2;
    _invalid_parameter_noinfo();
  }
  AtlCrtErrorCheck(iVar2);
  return;
}




/* Library Function - Single Match
    _memmove_s
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_1000c6d3:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = _errno();
      eVar2 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        memmove(_Dst,_Src,_MaxCount);
        goto LAB_1000c6d3;
      }
      piVar1 = _errno();
      eVar2 = 0x22;
    }
    *piVar1 = eVar2;
    _invalid_parameter_noinfo();
  }
  return eVar2;
}




/* Library Function - Single Match
    void __stdcall `vector destructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  if (param_3 != 0) {
    do {
      guard_check_icall();
      (*param_4)(unaff_EDI);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1001600c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




void __cdecl FUN_1000c756(void *param_1)

{
  free(param_1);
  return;
}




void __cdecl FUN_1000c764(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  
  do {
    uStack_c = 0x1000c77e;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    uStack_c = 0x1000c771;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    FUN_1000d72d();
    return;
  }
  FUN_1000d68e(local_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_10014458);
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  undefined4 local_14;
  
  while( true ) {
    if (param_3 == 0) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffd0);
    param_3 = param_3 - 1;
  }
  FUN_1000c80e();
  ExceptionList = local_14;
  return;
}




void FUN_1000c80e(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  uint unaff_EDI;
  
  if (in_AL == '\0') {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}




undefined4 __cdecl FUN_1000c81e(undefined4 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,unsigned int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2017 Release */

void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  uint uVar1;
  void *in_stack_ffffffc4;
  undefined4 local_14;
  
  uVar1 = 0;
  while( true ) {
    if (uVar1 == param_3) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffc4);
    uVar1 = uVar1 + 1;
  }
  ExceptionList = local_14;
  return;
}




uint __cdecl FUN_1000c8b0(uint param_1)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1001600c & 0x1f;
  return (DAT_1001600c ^ param_1) >> bVar1 | (DAT_1001600c ^ param_1) << 0x20 - bVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    int (__stdcall*__cdecl __crt_fast_encode_pointer<int (__stdcall*)(struct _RTL_CONDITION_VARIABLE
   *,struct _RTL_CRITICAL_SECTION *,unsigned long)>(int (__stdcall*const)(struct
   _RTL_CONDITION_VARIABLE *,struct _RTL_CRITICAL_SECTION *,unsigned long)))(struct
   _RTL_CONDITION_VARIABLE *,struct _RTL_CRITICAL_SECTION *,unsigned long)
    void (__stdcall*__cdecl __crt_fast_encode_pointer<void (__stdcall*)(struct
   _RTL_CONDITION_VARIABLE *)>(void (__stdcall*const)(struct _RTL_CONDITION_VARIABLE *)))(struct
   _RTL_CONDITION_VARIABLE *)
   
   Library: Visual Studio 2017 Release */

uint __cdecl __crt_fast_encode_pointer<>(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_1001600c & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_1001600c;
}




uint __cdecl FUN_1000c8e1(uint param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f) | param_1 << 0x20 - (param_2 & 0x1f);
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
    bool __cdecl is_potentially_valid_image_base(void * const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl is_potentially_valid_image_base(void *param_1)

{
  int *piVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((((param_1 != (void *)0x0) && (*param_1 == 0x5a4d)) &&
      (piVar1 = (int *)(*(int *)((int)param_1 + 0x3c) + (int)param_1), *piVar1 == 0x4550)) &&
     ((short)piVar1[6] == 0x10b)) {
    return true;
  }
  return false;
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
      if (DAT_10016200 != (void *)0x0) {
        pvVar3 = DAT_10016200;
        pvVar1 = DAT_10016200;
      }
      DAT_10016200 = pvVar1;
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
    ___scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2017 Release */

undefined4 ___scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  uint uVar3;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = FUN_1000d995();
    uVar3 = configure_narrow_argv(uVar2);
    if (uVar3 != 0) {
      return uVar3 & 0xffffff00;
    }
    uVar2 = initialize_narrow_environment();
  }
  else {
    uVar2 = ___isa_available_init();
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}




/* Library Function - Single Match
    ___scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2017 Release */

bool ___scrt_dllmain_before_initialize_c(void)

{
  undefined4 uVar1;
  
  uVar1 = ___scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    ___scrt_dllmain_crt_thread_attach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 ___scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1000de89();
  if (cVar1 != '\0') {
    cVar1 = FUN_1000de89();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1000de89();
  }
  return 0;
}




/* Library Function - Single Match
    ___scrt_dllmain_crt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 ___scrt_dllmain_crt_thread_detach(void)

{
  FUN_1000de89();
  FUN_1000de89();
  return 1;
}




/* Library Function - Single Match
    ___scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
___scrt_dllmain_exception_filter
          (undefined4 param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  iVar2 = CONCAT31(extraout_var,bVar1);
  if ((iVar2 == 0) && (param_2 == 1)) {
    guard_check_icall();
    (*(code *)param_4)(param_1,iVar2,param_3);
  }
  seh_filter_dll(param_5,param_6);
  return;
}




void FUN_1000ca4a(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    execute_onexit_table(&DAT_10016208);
    return;
  }
  iVar2 = FUN_1000daf5();
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000ddb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}




void FUN_1000ca6d(void)

{
  FUN_1000de89();
  FUN_1000de89();
  return;
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
    DAT_10016204 = 1;
  }
  ___isa_available_init();
  cVar1 = FUN_1000de89();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1000de89();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_1000de89();
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
  
  if (DAT_10016205 != '\0') {
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
    bVar2 = 0x20 - ((byte)DAT_1001600c & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar2 | -1 << 0x20 - bVar2) ^ DAT_1001600c;
    DAT_10016208 = uVar4;
    DAT_1001620c = uVar4;
    DAT_10016210 = uVar4;
    DAT_10016214 = uVar4;
    DAT_10016218 = uVar4;
    DAT_1001621c = uVar4;
LAB_1000cb44:
    DAT_10016205 = '\x01';
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar4 = initialize_onexit_table(&DAT_10016208);
    if (uVar4 == 0) {
      uVar4 = initialize_onexit_table(&DAT_10016214);
      if (uVar4 == 0) goto LAB_1000cb44;
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
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_10000000,param_1 + 0xf0000000);
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_10016200;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_10016200 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}




/* Library Function - Single Match
    ___scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_10016204 == '\0') || (param_2 == '\0')) {
    FUN_1000de89();
    FUN_1000de89();
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
  
  bVar2 = (byte)DAT_1001600c & 0x1f;
  if (((DAT_1001600c ^ DAT_10016208) >> bVar2 | (DAT_1001600c ^ DAT_10016208) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_10016208,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}




/* Library Function - Single Match
    _at_quick_exit
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __cdecl at_quick_exit(undefined4 param_1)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1001600c & 0x1f;
  if (((DAT_1001600c ^ DAT_10016214) >> bVar1 | (DAT_1001600c ^ DAT_10016214) << 0x20 - bVar1) ==
      0xffffffff) {
    crt_at_quick_exit();
    return;
  }
  register_onexit_function(&DAT_10016214,param_1);
  return;
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




void __cdecl FUN_1000ccb2(void *param_1)

{
  free(param_1);
  return;
}




void __cdecl FUN_1000ccc0(size_t param_1)

{
  FUN_1000c764(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)
   
   Library: Visual Studio 2017 Release */

void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)

{
  code *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  undefined *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1000e5a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_10016220,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if (hModule == (HMODULE)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_1000cdd7;
  }
  pFVar2 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar3 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar4 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((pFVar2 == (FARPROC)0x0) || (pFVar3 == (FARPROC)0x0)) || (pFVar4 == (FARPROC)0x0)) {
    DAT_1001623c = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_1001623c == (HANDLE)0x0) {
LAB_1000cdd7:
      ___scrt_fastfail();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    DAT_1001623c = (HANDLE)0x0;
    puVar5 = &DAT_10016238;
    guard_check_icall();
    (*pFVar2)(puVar5);
    _DAT_10016240 = __crt_fast_encode_pointer<>((uint)pFVar3);
    _DAT_10016244 = __crt_fast_encode_pointer<>((uint)pFVar4);
  }
  ExceptionList = local_10;
  return;
}




bool __cdecl FUN_1000cddf(int param_1)

{
  return param_1 != 0;
}




/* Library Function - Single Match
    __Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void __Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
  __Init_thread_notify();
  return;
}




void FUN_1000ce2b(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
  DAT_10016004 = DAT_10016004 + 1;
  *param_1 = DAT_10016004;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_10016004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
  __Init_thread_notify();
  return;
}




void __cdecl FUN_1000ce75(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1000cebc:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_10016004;
      goto LAB_1000cebc;
    }
    __Init_thread_wait(100);
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __Init_thread_notify
   
   Library: Visual Studio 2017 Release */

void __Init_thread_notify(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_1001623c == (HANDLE)0x0) {
    uVar2 = DAT_1001600c ^ _DAT_10016244;
    bVar1 = (byte)DAT_1001600c & 0x1f;
    puVar3 = &DAT_10016238;
    guard_check_icall();
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))(puVar3);
    return;
  }
  SetEvent(DAT_1001623c);
  ResetEvent(DAT_1001623c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void __cdecl __Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (DAT_1001623c == (HANDLE)0x0) {
    uVar2 = DAT_1001600c ^ _DAT_10016240;
    bVar1 = (byte)DAT_1001600c & 0x1f;
    puVar4 = &DAT_10016220;
    puVar3 = &DAT_10016238;
    guard_check_icall();
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))(puVar3,puVar4,param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
    WaitForSingleObjectEx(DAT_1001623c,param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10016220);
  }
  return;
}




undefined4 * __thiscall FUN_1000cf88(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (undefined4 *)this;
}




/* Library Function - Single Match
    int __stdcall dllmain_crt_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2017 Release */

int dllmain_crt_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = dllmain_crt_process_detach(param_3 != (void *)0x0);
  }
  else if (param_2 == 1) {
    uVar2 = dllmain_crt_process_attach(param_1,param_3);
  }
  else {
    if (param_2 == 2) {
      bVar1 = ___scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = ___scrt_dllmain_crt_thread_detach();
    }
    uVar2 = (uint)bVar1;
  }
  return uVar2;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl dllmain_crt_process_attach(struct HINSTANCE__ * const,void * const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_crt_process_attach(HINSTANCE__ *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *local_14;
  
  uVar4 = ___scrt_initialize_crt(0);
  if ((char)uVar4 != '\0') {
    ___scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_100161fc != 0) {
      ___scrt_fastfail();
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    DAT_100161fc = 1;
    bVar3 = ___scrt_dllmain_before_initialize_c();
    if (bVar3) {
      __RTC_Initialize();
      FUN_1000dc28();
      ___scrt_initialize_default_local_stdio_options();
      iVar5 = initterm_e(&DAT_1000f360,&DAT_1000f368);
      if ((iVar5 == 0) && (uVar4 = ___scrt_dllmain_after_initialize_c(), (char)uVar4 != '\0')) {
        initterm(&DAT_1000f2f0,&DAT_1000f35c);
        DAT_100161fc = 2;
        bVar2 = false;
      }
    }
    FUN_1000d0f6();
    if (!bVar2) {
      piVar6 = (int *)FUN_1000dc63();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        uVar4 = 2;
        pcVar1 = (code *)*piVar6;
        guard_check_icall();
        (*pcVar1)(param_1,uVar4,param_2);
      }
      DAT_10016248 = DAT_10016248 + 1;
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}




void FUN_1000d0f6(void)

{
  int unaff_EBP;
  
  ___scrt_release_startup_lock((char)*(undefined4 *)(unaff_EBP + -0x1d));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl dllmain_crt_process_detach(bool)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_crt_process_detach(bool param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined3 in_stack_00000005;
  undefined4 local_14;
  
  if (DAT_10016248 < 1) {
    uVar3 = 0;
  }
  else {
    DAT_10016248 = DAT_10016248 + -1;
    ___scrt_acquire_startup_lock();
    if (DAT_100161fc != 2) {
      ___scrt_fastfail();
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    FUN_1000ca4a();
    __scrt_uninitialize_type_info();
    __RTC_Terminate();
    DAT_100161fc = 0;
    FUN_1000d183();
    cVar2 = ___scrt_uninitialize_crt(_param_1,'\0');
    uVar3 = (uint)(cVar2 != '\0');
  }
  ExceptionList = local_14;
  return uVar3;
}




void FUN_1000d183(void)

{
  int unaff_EBP;
  
  FUN_1000ca6d();
  ___scrt_release_startup_lock((char)*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  void *local_14;
  
  if ((param_2 == 0) && (DAT_10016248 < 1)) {
    iVar1 = 0;
  }
  else if (((param_2 != 1) && (param_2 != 2)) ||
          ((iVar1 = dllmain_raw(param_1,param_2,param_3), iVar1 != 0 &&
           (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)))) {
    iVar1 = FUN_10003af0(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_10003af0(param_1,0);
      dllmain_crt_dispatch(param_1,0,param_3);
      dllmain_raw(param_1,0,param_3);
    }
    if (((param_2 == 0) || (param_2 == 3)) &&
       (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0)) {
      iVar1 = dllmain_raw(param_1,param_2,param_3);
    }
  }
  ExceptionList = local_14;
  return iVar1;
}




/* WARNING: Removing unreachable block (ram,0x1000d2b3) */
/* Library Function - Single Match
    int __stdcall dllmain_raw(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2017 Release */

int dllmain_raw(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  return 1;
}




void FUN_1000d2cb(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  dllmain_crt_dispatch(param_1,param_2,param_3);
  return;
}




void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}




/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}




undefined4 __cdecl FUN_1000d2f8(undefined4 *param_1)

{
  return *param_1;
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
  _DAT_10016348 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_10016350 = (undefined4)uVar9;
  _DAT_10016360 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_10016364 = &stack0x00000004;
  _DAT_100162a0 = 0x10001;
  _DAT_10016250 = 0xc0000409;
  _DAT_10016254 = 1;
  _DAT_10016260 = 1;
  DAT_10016264 = 2;
  _DAT_1001625c = unaff_retaddr;
  _DAT_1001632c = in_GS;
  _DAT_10016330 = in_FS;
  _DAT_10016334 = in_ES;
  _DAT_10016338 = in_DS;
  _DAT_1001633c = unaff_EDI;
  _DAT_10016340 = unaff_ESI;
  _DAT_10016344 = unaff_EBX;
  _DAT_1001634c = uVar3;
  _DAT_10016354 = unaff_EBP;
  DAT_10016358 = unaff_retaddr;
  _DAT_1001635c = in_CS;
  _DAT_10016368 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1000f518);
  return;
}




/* Library Function - Single Match
    ___report_rangecheckfailure
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_securityfailure
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___report_securityfailure(undefined4 param_1)

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
  _DAT_10016348 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_10016350 = (undefined4)uVar9;
  _DAT_10016360 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_10016364 = &param_1;
  _DAT_10016250 = 0xc0000409;
  _DAT_10016254 = 1;
  _DAT_10016260 = 1;
  DAT_10016264 = param_1;
  _DAT_1001625c = unaff_retaddr;
  _DAT_1001632c = in_GS;
  _DAT_10016330 = in_FS;
  _DAT_10016334 = in_ES;
  _DAT_10016338 = in_DS;
  _DAT_1001633c = unaff_EDI;
  _DAT_10016340 = unaff_ESI;
  _DAT_10016344 = unaff_EBX;
  _DAT_1001634c = uVar3;
  _DAT_10016354 = unaff_EBP;
  DAT_10016358 = unaff_retaddr;
  _DAT_1001635c = in_CS;
  _DAT_10016368 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1000f518);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_securityfailureEx
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl ___report_securityfailureEx(undefined4 param_1,uint param_2,int param_3)

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
  uint local_8;
  
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
  _DAT_10016360 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_10016364 = &param_1;
  _DAT_10016250 = 0xc0000409;
  _DAT_10016254 = 1;
  if ((param_2 != 0) && (param_3 == 0)) {
    param_2 = 0;
  }
  if (0xe < param_2) {
    param_2 = param_2 - 1;
  }
  _DAT_10016260 = param_2 + 1;
  DAT_10016264 = param_1;
  _DAT_1001625c = unaff_retaddr;
  _DAT_1001632c = in_GS;
  _DAT_10016330 = in_FS;
  _DAT_10016334 = in_ES;
  _DAT_10016338 = in_DS;
  _DAT_1001633c = unaff_EDI;
  _DAT_10016340 = unaff_ESI;
  _DAT_10016344 = unaff_EBX;
  _DAT_1001634c = uVar3;
  _DAT_10016354 = unaff_EBP;
  DAT_10016358 = unaff_retaddr;
  _DAT_1001635c = in_CS;
  _DAT_10016368 = in_SS;
  for (local_8 = 0; _DAT_10016348 = (undefined4)((ulonglong)uVar9 >> 0x20),
      _DAT_10016350 = (undefined4)uVar9, local_8 < param_2; local_8 = local_8 + 1) {
    *(undefined4 *)(&DAT_10016268 + local_8 * 4) = *(undefined4 *)(param_3 + local_8 * 4);
    uVar9 = CONCAT44(_DAT_10016348,_DAT_10016350);
  }
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1000f518);
  return;
}




/* Library Function - Single Match
    private: __thiscall std::bad_alloc::bad_alloc(char const * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = param_1;
  *(undefined ***)this = vftable;
  return this;
}




exception * __thiscall FUN_1000d640(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_1000d65b(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




exception * __thiscall FUN_1000d673(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_1000d68e(undefined4 *param_1)

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




/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,char *param_1,int param_2)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = param_1;
  return this;
}




undefined4 * __thiscall FUN_1000d700(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_1000ccb2(this);
  }
  return (undefined4 *)this;
}




void FUN_1000d72d(void)

{
  undefined4 local_10 [3];
  
  FUN_1000d65b(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_10014404);
}




char * __fastcall FUN_1000d767(int param_1)

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1001600c ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




void __cdecl
FUN_1000d7db(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_1001600c,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x1000d87a) */
/* WARNING: Removing unreachable block (ram,0x1000d83f) */
/* WARNING: Removing unreachable block (ram,0x1000d8f2) */
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
  
  DAT_1001656c = 0;
  DAT_10016010 = DAT_10016010 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar4 = DAT_10016010;
  if (BVar5 != 0) {
    DAT_10016010 = DAT_10016010 | 2;
    DAT_1001656c = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[3] == 0x6c65746e && piVar1[2] == 0x49656e69) && piVar1[1] == 0x756e6547) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_10016570 = DAT_10016570 | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        DAT_10016570 = DAT_10016570 | 2;
      }
    }
    if ((uVar7 & 0x100000) != 0) {
      DAT_10016010 = uVar4 | 6;
      DAT_1001656c = 2;
      if ((((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_10016010 = uVar4 | 0xe;
        DAT_1001656c = 3;
        if ((uVar6 & 0x20) != 0) {
          DAT_10016010 = uVar4 | 0x2e;
          DAT_1001656c = 5;
        }
      }
    }
  }
  return 0;
}




undefined4 FUN_1000d995(void)

{
  return 1;
}




/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2017 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_100160c4 != 0;
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
  FUN_1000db88();
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
    FUN_1000db88();
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




undefined4 FUN_1000daf5(void)

{
  return 0;
}




undefined4 FUN_1000db47(int *param_1)

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

void FUN_1000db88(void)

{
  _DAT_10016574 = 0;
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
  if ((DAT_1001600c == 0xbb40e64e) || ((DAT_1001600c & 0xffff0000) == 0)) {
    DAT_1001600c = ___get_entropy();
    if (DAT_1001600c == 0xbb40e64e) {
      DAT_1001600c = 0xbb40e64f;
    }
    else if ((DAT_1001600c & 0xffff0000) == 0) {
      DAT_1001600c = DAT_1001600c | (DAT_1001600c | 0x4711) << 0x10;
    }
  }
  DAT_10016008 = ~DAT_1001600c;
  return;
}




void FUN_1000dc28(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_10016580);
  return;
}




/* Library Function - Single Match
    void __cdecl __scrt_uninitialize_type_info(void)
   
   Library: Visual Studio 2017 Release */

void __cdecl __scrt_uninitialize_type_info(void)

{
  __std_type_info_destroy_list(&DAT_10016580);
  return;
}




undefined * FUN_1000dc40(void)

{
  return &DAT_10016588;
}




/* Library Function - Single Match
    ___scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void ___scrt_initialize_default_local_stdio_options(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_100091a0();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_1000dc40();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}




undefined * FUN_1000dc63(void)

{
  return &DAT_10018690;
}




/* WARNING: Removing unreachable block (ram,0x1000dc79) */
/* WARNING: Removing unreachable block (ram,0x1000dc7a) */
/* WARNING: Removing unreachable block (ram,0x1000dc80) */
/* WARNING: Removing unreachable block (ram,0x1000dc8a) */
/* WARNING: Removing unreachable block (ram,0x1000dc91) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2017 Release */

void __RTC_Initialize(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x1000dca5) */
/* WARNING: Removing unreachable block (ram,0x1000dca6) */
/* WARNING: Removing unreachable block (ram,0x1000dcac) */
/* WARNING: Removing unreachable block (ram,0x1000dcb6) */
/* WARNING: Removing unreachable block (ram,0x1000dcbd) */
/* Library Function - Single Match
    __RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void __RTC_Terminate(void)

{
  return;
}




undefined1 FUN_1000de89(void)

{
  return 1;
}




/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

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
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
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




void __fastcall FUN_1000e14d(undefined4 param_1,int param_2)

{
  byte in_FPUControlWord;
  
  if ((param_2 == 8) || ((*(byte *)((int)&DAT_100136c8 + param_2 + 7) & in_FPUControlWord) == 0)) {
    except1(param_2,0);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x1000dff3) */
/* WARNING: Removing unreachable block (ram,0x1000e219) */
/* WARNING: Removing unreachable block (ram,0x1000dff8) */
/* WARNING: Removing unreachable block (ram,0x1000e006) */
/* WARNING: Removing unreachable block (ram,0x1000e010) */
/* WARNING: Removing unreachable block (ram,0x1000e01a) */
/* WARNING: Removing unreachable block (ram,0x1000e02c) */
/* WARNING: Removing unreachable block (ram,0x1000e03f) */
/* WARNING: Removing unreachable block (ram,0x1000e04d) */
/* WARNING: Removing unreachable block (ram,0x1000e057) */
/* WARNING: Removing unreachable block (ram,0x1000e067) */

ulonglong FUN_1000e1af(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  int iVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  iVar1 = 5;
  dVar3 = 9.223372036854776e+18;
  if (((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    auVar4._0_8_ = ABS(in_XMM0_Qa);
    auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (3.4028235677973366e+38 < auVar4._0_8_) {
      dVar3 = 9.223372036854776e+18;
      FUN_1000e14d(5,1);
      FUN_1000e14d(extraout_ECX,0x10);
      iVar1 = extraout_ECX_00;
    }
    if (1.1754943157898259e-38 <= auVar4._0_8_) {
      dVar6 = in_XMM0_Qa;
      if ((iVar1 == 4) && (9.223372036854776e+18 <= in_XMM0_Qa)) {
        dVar6 = in_XMM0_Qa - 9.223372036854776e+18;
      }
      if ((int)((ulonglong)((longlong)dVar6 << 0x23) >> 0x20) != 0) {
        FUN_1000e14d(iVar1,0x10);
        iVar1 = extraout_ECX_03;
      }
      if ((dVar3 <= in_XMM0_Qa) || (in_XMM0_Qa < -9.223372036854776e+18)) goto LAB_1000e13b;
    }
    else if (auVar4._0_8_ != 0.0) {
      FUN_1000e14d(iVar1,2);
      FUN_1000e14d(extraout_ECX_01,0x10);
      iVar1 = extraout_ECX_02;
    }
    uVar8 = 0;
    dVar3 = auVar4._0_8_;
    if (dVar3 != 0.0) {
      auVar5 = auVar4 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar7 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar3 >> 0x34);
      uVar9 = auVar5._0_8_ >> lVar7;
      iVar2 = -(uint)(0x433 < auVar4._4_4_ >> 0x14);
      uVar8 = CONCAT44(iVar2,iVar2);
      uVar8 = ~uVar8 & uVar9 |
              auVar5._0_8_ << ((ulonglong)dVar3 >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar8;
      uVar8 = ~-(ulonglong)(in_XMM0_Qa == dVar3) & -uVar8 |
              uVar8 & -(ulonglong)(in_XMM0_Qa == dVar3);
      if ((0 < (int)lVar7) &&
         (auVar10._0_8_ = uVar9 << lVar7,
         auVar10._8_8_ = (auVar5._8_8_ >> lVar7) << -(auVar4._8_8_ >> 0x34),
         SUB164(auVar5 ^ auVar10,0) != 0 || SUB164(auVar5 ^ auVar10,4) != 0)) {
        FUN_1000e14d(iVar1,0x10);
      }
    }
    return uVar8;
  }
LAB_1000e13b:
  FUN_1000e14d(iVar1,8);
  return 0x8000000000000000;
}




void FUN_1000e300(void)

{
  return;
}




ulonglong __fastcall FUN_1000e330(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_1001656c == 0) {
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




void Unwind_1000e440(void)

{
  FUN_100015d0();
  return;
}




void Unwind_1000e470(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}




void Unwind_1000e47b(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x18));
  return;
}




void Unwind_1000e4d0(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x14));
  return;
}




void Unwind_1000e500(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x3c));
  return;
}




void Unwind_1000e508(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x24));
  return;
}




void Unwind_1000e540(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x40));
  return;
}




void Unwind_1000e570(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x28));
  return;
}




void Unwind_1000e600(void)

{
  int unaff_EBP;
  
  FUN_100047b0(unaff_EBP + -0xb4);
  return;
}




void Unwind_1000e60b(void)

{
  int unaff_EBP;
  
  FUN_100093d0((void *)(unaff_EBP + -0x144));
  return;
}




void Unwind_1000e640(void)

{
  int unaff_EBP;
  
  FUN_100054e0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_1000e648(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}




void Unwind_1000e653(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x14));
  return;
}




void Unwind_1000e662(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x1c));
  return;
}




void Unwind_1000e674(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x24));
  return;
}




void Unwind_1000e683(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x2c));
  return;
}




void Unwind_1000e6d0(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x14));
  return;
}




void Unwind_1000e700(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x20));
  return;
}




void Unwind_1000e730(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x14));
  return;
}




void Unwind_1000e73f(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x28));
  return;
}




void Unwind_1000e770(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x20));
  return;
}




void Unwind_1000e7a0(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_1000e7d0(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x40));
  return;
}




void Unwind_1000e800(void)

{
  int unaff_EBP;
  
  FID_conflict___String_alloc<struct_std::_String_base_types<unsigned_short,class_std::allocator<unsigned_short>_>_>
            ((void *)(*(int *)(unaff_EBP + -0x10) + 0x60));
  return;
}




void Unwind_1000e830(void)

{
  int unaff_EBP;
  
  FUN_1000ccb2(*(void **)(unaff_EBP + -0x18));
  return;
}




void Unwind_1000e860(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_1000e890(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x14));
  return;
}




void Unwind_1000e8c0(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x18));
  return;
}




void Unwind_1000e8f0(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x30));
  return;
}




void Unwind_1000e920(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x28));
  return;
}




void Unwind_1000e950(void)

{
  int unaff_EBP;
  
  FUN_1000bbb0((undefined4 *)(unaff_EBP + -0x1c));
  return;
}




void FUN_1000e980(void)

{
  FUN_10001710((CAtlComModule *)&DAT_10018634);
  return;
}




void FUN_1000e990(void)

{
  FUN_10001880((CAtlWinModule *)&DAT_100185e8);
  return;
}




void FUN_1000e99f(void)

{
  ATL::CAtlBaseModule::~CAtlBaseModule((CAtlBaseModule *)&DAT_100161c0);
  return;
}



