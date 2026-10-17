
void FUN_180001040(wchar_t *param_1,wchar_t param_2)

{
  wcsrchr(param_1,param_2);
  return;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1070  6  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1070  7  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1070  8  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1070  9  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: class CCallBackOperate & __ptr64 __cdecl CCallBackOperate::operator=(class
   CCallBackOperate const & __ptr64) __ptr64 */

CCallBackOperate * __thiscall
CCallBackOperate::operator=(CCallBackOperate *this,CCallBackOperate *param_1)

{
  longlong lVar1;
  CCallBackOperate *pCVar2;
  
  pCVar2 = this;
                    /* 0x1080  4  ??4CCallBackOperate@@QEAAAEAV0@AEBV0@@Z
                       0x1080  5  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar2 = *param_1;
    param_1 = param_1 + 1;
    pCVar2 = pCVar2 + 1;
  }
  return this;
}




undefined8 FUN_1800010b0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined * FUN_1800010c0(void)

{
  return &DAT_18004fdc0;
}




/* Library Function - Single Match
    _vsnprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_1800010c0();
  local_14 = __stdio_common_vswprintf(*puVar1 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_180001150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_1800010c0();
  local_14 = __stdio_common_vswprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_1800011c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = FUN_180001150(param_1,param_2,param_3,0,&local_res20);
  return iVar1;
}




int FUN_180001220(char *param_1,size_t param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = _vsnprintf_l(param_1,param_2,param_3,(_locale_t)0x0,(va_list)&local_res20);
  return iVar1;
}




/* Library Function - Single Match
    vsnprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl vsnprintf(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_1800010c0();
  local_14 = __stdio_common_vsprintf(*puVar1 | 2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




/* Library Function - Single Match
    snprintf
   
   Library: Visual Studio 2019 Release */

int snprintf(char *param_1,size_t param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = vsnprintf(param_1,param_2,param_3,(va_list)&local_res20);
  return iVar1;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(char const * __ptr64 const,int) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

exception * __thiscall std::exception::exception(exception *this,char *param_1,int param_2)

{
  longlong lVar1;
  exception *peVar2;
  
  *(undefined ***)this = vftable;
  peVar2 = this + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *peVar2 = (exception)0x0;
    peVar2 = peVar2 + 1;
  }
  *(char **)(this + 8) = param_1;
  return this;
}




undefined8 * FUN_1800013b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = std::exception::vftable;
  puVar2 = param_1 + 1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  __std_exception_copy(param_2 + 8,param_1 + 1);
  return param_1;
}




void FUN_180001410(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




char * FUN_180001440(longlong param_1)

{
  char *local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_18 = "Unknown exception";
  }
  else {
    local_18 = *(char **)(param_1 + 8);
  }
  return local_18;
}




undefined8 * FUN_180001480(undefined8 *param_1,uint param_2)

{
  FUN_180001410(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined1 * FUN_1800014c0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




void FUN_1800014f0(void *param_1,void *param_2,longlong param_3)

{
  memmove(param_1,param_2,param_3 << 1);
  return;
}




undefined8 FUN_180001530(void)

{
  return 0x7fffffffffffffff;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned __int64 __cdecl std::_Narrow_char_traits<char,int>::length(char const *
   __ptr64 const)
    public: static unsigned __int64 __cdecl std::char_traits<char>::length(char const * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

longlong length(longlong param_1)

{
  undefined8 local_18;
  
  local_18 = -1;
  do {
    local_18 = local_18 + 1;
  } while (*(char *)(param_1 + local_18) != '\0');
  return local_18;
}




undefined1 * FUN_180001580(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




/* Library Function - Single Match
    public: static char * __ptr64 __cdecl std::char_traits<char>::move(char * __ptr64 const,char
   const * __ptr64 const,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

char * __cdecl std::char_traits<char>::move(char *param_1,char *param_2,__uint64 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)memmove(param_1,param_2,param_3);
  return pcVar1;
}




void FUN_1800015e0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined1 FUN_180001600(undefined1 *param_1)

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
  
  uVar1 = FUN_1800016a0();
  if (*param_1 == (uint)uVar1) {
    uVar1 = FUN_1800016a0();
    local_18 = (uint)((int)uVar1 == 0);
    local_14 = local_18;
  }
  else {
    local_14 = *param_1;
  }
  return local_14;
}




undefined8 FUN_1800016a0(void)

{
  return 0xffffffff;
}




void FUN_1800016b0(void)

{
  return;
}




void FUN_1800016c0(void)

{
  return;
}




undefined8 FUN_1800016d0(undefined8 param_1)

{
  return param_1;
}




void FUN_1800016e0(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_180001700(longlong *param_1,longlong *param_2)

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




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::bad_alloc::bad_alloc(void) __ptr64
    public: __cdecl std::bad_cast::bad_cast(void) __ptr64
    public: __cdecl std::bad_exception::bad_exception(void) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

exception * FID_conflict_bad_cast(exception *param_1)

{
  std::exception::exception(param_1,"bad cast",1);
  *(undefined ***)param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_1800017e0(undefined8 *param_1,uint param_2)

{
  FUN_180001820(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001820(undefined8 *param_1)

{
  FUN_180001410(param_1);
  return;
}




void FUN_180001840(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (puVar1 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(undefined8 *)(param_1 + 8)),
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}




longlong FUN_1800018d0(longlong param_1,ulonglong param_2)

{
  _Locimp *p_Var1;
  longlong local_28;
  longlong local_10;
  
  if (param_2 < *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18)) {
    local_28 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + param_2 * 8);
  }
  else {
    local_28 = 0;
  }
  local_10 = local_28;
  if ((local_28 == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x24) != '\0')) {
    p_Var1 = std::locale::_Getgloballocale();
    if (param_2 < *(ulonglong *)(p_Var1 + 0x18)) {
      local_10 = *(longlong *)(*(longlong *)(p_Var1 + 0x10) + param_2 * 8);
    }
    else {
      local_10 = 0;
    }
  }
  return local_10;
}




longlong * FUN_180001990(longlong *param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1800016e0(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    local_20 = FUN_180001b50(puVar1,param_2);
  }
  *param_1 = (longlong)local_20;
  if (*param_1 == 0) {
    FUN_180037a70(0x8007000e);
  }
  return param_1;
}




longlong * FUN_180001a20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_20;
  
  plVar1 = (longlong *)FUN_1800016e0(0x18);
  if (plVar1 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_20 = FUN_180001ba0(plVar1,param_2);
  }
  *param_1 = (longlong)local_20;
  if (*param_1 == 0) {
    FUN_180037a70(0x8007000e);
  }
  return param_1;
}




void FUN_180001ab0(longlong *param_1)

{
  FUN_180001b10(param_1);
  return;
}




undefined8 FUN_180001ad0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  if (*param_1 == 0) {
    local_18 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1800016d0(*param_1);
    local_18 = *puVar1;
  }
  return local_18;
}




void FUN_180001b10(longlong *param_1)

{
  if (*param_1 != 0) {
    _AfxBindHost::Release((_AfxBindHost *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_180001b50(undefined8 *param_1,LPCSTR param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  uVar1 = FUN_180037a80(param_2);
  *param_1 = uVar1;
  return param_1;
}




longlong * FUN_180001ba0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  lVar1 = Ordinal_2(param_2);
  *param_1 = lVar1;
  if ((*param_1 == 0) && (param_2 != 0)) {
    FUN_180037a70(0x8007000e);
  }
  return param_1;
}




/* Library Function - Single Match
    public: virtual unsigned long __cdecl _AfxBindHost::Release(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

ulong __thiscall _AfxBindHost::Release(_AfxBindHost *this)

{
  int iVar1;
  _AfxBindHost *p_Var2;
  
  p_Var2 = this + 0x10;
  LOCK();
  iVar1 = *(int *)p_Var2;
  *(int *)p_Var2 = *(int *)p_Var2 + -1;
  UNLOCK();
  if ((iVar1 - 1U == 0) && (this != (_AfxBindHost *)0x0)) {
    FUN_180001c80((longlong *)this,1);
  }
  return iVar1 - 1U;
}




longlong * FUN_180001c80(longlong *param_1,uint param_2)

{
  FUN_180001cc0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001cc0(longlong *param_1)

{
  FUN_180001ce0(param_1);
  return;
}




void FUN_180001ce0(longlong *param_1)

{
  if (*param_1 != 0) {
    Ordinal_6(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1d50  12  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)(this,param_1);
  return pIVar1;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1d90  13  ?Release@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 8))(this);
  return uVar1;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1db0  11  ?AddRef@IObject@@QEBAKXZ */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))(this);
  return uVar1;
}




/* public: __cdecl IObject::IObject(void) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this)

{
                    /* 0x1dd0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1df0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1df0  2  ??0IObject@@QEAA@AEBU0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




bool FUN_180001e10(undefined1 *param_1,FILE *param_2)

{
  int iVar1;
  undefined1 local_18;
  
  iVar1 = fgetc(param_2);
  if (iVar1 != -1) {
    local_18 = (undefined1)iVar1;
    *param_1 = local_18;
  }
  return iVar1 != -1;
}




bool FUN_180001e50(char param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = fputc((int)param_1,param_2);
  return iVar1 != -1;
}




bool FUN_180001e90(byte *param_1,FILE *param_2)

{
  int iVar1;
  
  iVar1 = ungetc((uint)*param_1,param_2);
  return iVar1 != -1;
}




void FUN_180001ee0(void)

{
  longlong lVar1;
  _SYSTEMTIME *p_Var2;
  _FILETIME *p_Var3;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_48;
  p_Var2 = &local_20;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&p_Var2->wYear = 0;
    p_Var2 = (_SYSTEMTIME *)((longlong)&p_Var2->wYear + 1);
  }
  p_Var3 = &local_28;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&p_Var3->dwLowDateTime = 0;
    p_Var3 = (_FILETIME *)((longlong)&p_Var3->dwLowDateTime + 1);
  }
  GetSystemTime(&local_20);
  SystemTimeToFileTime(&local_20,&local_28);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}




void FUN_180001f60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_178 [32];
  uint local_158;
  uint local_150;
  uint local_148;
  uint local_140;
  uint local_138;
  uint local_130;
  uint local_128;
  uint local_120;
  uint local_118;
  uint local_110;
  uint local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  char local_88 [112];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_178;
  pcVar3 = local_88;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  pbVar1 = (byte *)FUN_180011bc0(param_2,0xf);
  local_d8 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,0xe);
  local_d4 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,0xd);
  local_d0 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,0xc);
  local_cc = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,0xb);
  local_c8 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,10);
  local_c4 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,9);
  local_c0 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,8);
  local_bc = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,6);
  local_b8 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,7);
  local_b4 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,4);
  local_b0 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,5);
  local_ac = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,0);
  local_a8 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,1);
  local_a4 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,2);
  local_a0 = (uint)*pbVar1;
  pbVar1 = (byte *)FUN_180011bc0(param_2,3);
  local_9c = (uint)*pbVar1;
  local_e8 = local_d8;
  local_f0 = local_d4;
  local_f8 = local_d0;
  local_100 = local_cc;
  local_108 = local_c8;
  local_110 = local_c4;
  local_118 = local_c0;
  local_120 = local_bc;
  local_128 = local_b8;
  local_130 = local_b4;
  local_138 = local_b0;
  local_140 = local_ac;
  local_148 = local_a8;
  local_150 = local_a4;
  local_158 = local_a0;
  snprintf(local_88,100,"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X",
           (ulonglong)local_9c);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_1,local_88);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_178);
  return;
}




void FUN_180002280(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [32];
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
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_27 = param_2[1];
  local_26 = param_2[2];
  local_25 = param_2[3];
  local_24 = param_2[4];
  local_23 = param_2[5];
  local_22 = param_2[6];
  local_21 = param_2[7];
  local_20 = param_2[8];
  local_1f = param_2[9];
  local_1e = param_2[10];
  local_1d = param_2[0xb];
  local_1c = param_2[0xc];
  local_1b = param_2[0xd];
  local_1a = param_2[0xe];
  local_19 = param_2[0xf];
  FUN_180001f60(param_1,(longlong)&local_28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}




void FUN_180002430(longlong param_1)

{
  FUN_180013af0(param_1 + 0xa8);
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>
            ((basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0xa8));
  return;
}




void FUN_180002470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  size_t sVar7;
  void *pvVar8;
  longlong lVar9;
  undefined1 auStackY_168 [32];
  ulonglong local_c8 [22];
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_168;
  bVar1 = FUN_180011e20(param_1);
  if ((((!bVar1) && (bVar1 = FUN_180011e20(param_2), !bVar1)) &&
      (bVar1 = FUN_180011e20(param_3), !bVar1)) &&
     (((bVar1 = FUN_180011e20(param_4), !bVar1 && (lVar2 = FUN_180011de0(param_1), lVar2 == 0x10))
      && ((lVar2 = FUN_180011de0(param_2), lVar2 == 0xc &&
          (lVar2 = FUN_180011de0(param_3), lVar2 == 0x20)))))) {
    uVar3 = FUN_180011de0(param_4);
    FUN_180011f50(param_5,uVar3);
    FUN_18002bb00(local_c8);
    lVar2 = FUN_180011de0(param_3);
    uVar4 = FUN_180011c50(param_3);
    FUN_18002bb10((longlong)local_c8,2,uVar4,(uint)(lVar2 << 3));
    uVar3 = FUN_180011de0(param_1);
    lVar2 = FUN_180011c50(param_1);
    puVar5 = (undefined1 *)FUN_180011c50(param_5);
    puVar6 = (ulonglong *)FUN_180011c50(param_4);
    sVar7 = FUN_180011de0(param_2);
    pvVar8 = (void *)FUN_180011c50(param_2);
    lVar9 = FUN_180011de0(param_4);
    FUN_18002c480(local_c8,lVar9,pvVar8,sVar7,0,0,puVar6,puVar5,lVar2,uVar3);
    FUN_18002bbe0((undefined1 *)local_c8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_168);
  return;
}




<lambda_1> * FUN_1800026e0(<lambda_1> *param_1,undefined8 param_2,ushort *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  ushort *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined8 local_68 [3];
  undefined8 local_50 [3];
  undefined8 local_38 [3];
  undefined8 local_20 [4];
  
  local_70 = 0xfffffffffffffffe;
  local_f0 = param_3 + 4;
  local_e0 = FUN_1800016d0(&local_f3);
  local_d8 = (longlong)local_f0 + ((ulonglong)*param_3 - 8);
  FUN_180018b30(local_88,local_f0 + 0xe,local_d8,local_e0);
  uVar2 = FUN_1800016d0(&local_f2);
  local_d0 = FUN_180018b30(local_50,local_f0,local_f0 + 6,uVar2);
  local_c8 = local_d0;
  local_b0 = local_d0;
  uVar2 = FUN_1800016d0(&local_f1);
  local_c0 = FUN_180018b30(local_68,local_f0 + 6,local_f0 + 0xe,uVar2);
  local_b8 = local_c0;
  local_a8 = local_c0;
  cVar1 = FUN_180002470(local_c0,local_b0,param_2,local_88,local_88);
  FUN_1800121e0(local_68);
  FUN_1800121e0(local_50);
  if (cVar1 == '\0') {
    local_e8 = FUN_180011b90(local_38);
    local_98 = local_e8;
  }
  else {
    local_e8 = FUN_1800122a0(local_20,local_88);
    local_a0 = local_e8;
  }
  local_90 = local_e8;
  FUN_180012210(param_1,local_e8);
  if (cVar1 == '\0') {
    FUN_1800121e0(local_38);
  }
  else {
    FUN_1800121e0(local_20);
  }
  FUN_1800121e0(local_88);
  return param_1;
}




void FUN_180002970(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_107 [3];
  uint local_104;
  int *local_100;
  undefined1 local_f8;
  undefined1 local_f7 [7];
  undefined2 *local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined2 *local_d8;
  undefined8 *local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88 [3];
  undefined8 local_70 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
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
  ulonglong local_20;
  
  local_58 = 0xfffffffffffffffe;
  local_20 = DAT_18004e038 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)FUN_180011770(param_3,0);
  if (*(short *)(*plVar1 + 4) != 2) {
    local_40 = 0x20;
    local_3f = 0;
    local_3e = 0;
    local_3d = 0;
    local_3c = 2;
    local_3b = 0;
    local_3a = 1;
    local_39 = 0;
    local_38 = 0x45;
    local_37 = 0;
    local_36 = 0x78;
    local_35 = 0;
    local_34 = 0x74;
    local_33 = 0;
    local_32 = 0x65;
    local_31 = 0;
    local_30 = 0x72;
    local_2f = 0;
    local_2e = 0x6e;
    local_2d = 0;
    local_2c = 0x61;
    local_2b = 0;
    local_2a = 0x6c;
    local_29 = 0;
    local_28 = 0x4b;
    local_27 = 0;
    local_26 = 0x65;
    local_25 = 0;
    local_24 = 0x79;
    local_23 = 0;
    local_22 = 0;
    local_21 = 0;
    local_b8 = &local_40;
    local_b0 = FUN_180011820(param_3,&local_50);
    local_b0 = (undefined8 *)*local_b0;
    FUN_180011990(param_3,&local_48,local_b0,&local_b8);
  }
  local_104 = 0x20;
  local_e8 = 0;
  while( true ) {
    uVar2 = FUN_1800117a0(param_3);
    if (uVar2 <= local_e8) break;
    puVar3 = (undefined8 *)FUN_180011770(param_3,local_e8);
    local_104 = local_104 + *(ushort *)*puVar3;
    local_e8 = local_e8 + 1;
  }
  local_a8 = FUN_1800016d0(&local_f8);
  local_108 = 0;
  FUN_180012380(local_88,(ulonglong)local_104,&local_108,local_a8);
  local_f0 = (undefined2 *)FUN_180011c50(local_88);
  *local_f0 = (undefined2)local_104;
  local_f0[1] = 6;
  local_f0[2] = 9;
  local_f0[3] = 1;
  local_d8 = local_f0 + 4;
  puVar4 = (undefined1 *)FUN_1800016d0(param_1);
  puVar7 = local_d8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = (undefined2 *)((longlong)puVar7 + 1);
  }
  *(undefined8 *)(local_d8 + 8) = param_2;
  local_c8 = local_d8 + 0xc;
  local_c0 = param_3;
  local_e0 = (undefined8 *)FUN_180011800(param_3);
  local_a0 = (undefined8 *)FUN_1800117e0(local_c0);
  for (; local_e0 != local_a0; local_e0 = local_e0 + 1) {
    local_d0 = local_e0;
    puVar4 = (undefined1 *)*local_e0;
    puVar7 = local_c8;
    for (uVar2 = (ulonglong)*(ushort *)*local_e0; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = (undefined2 *)((longlong)puVar7 + 1);
    }
    local_c8 = (undefined2 *)((longlong)local_c8 + (ulonglong)*(ushort *)*local_e0);
  }
  local_98 = FUN_1800016d0(local_f7);
  local_107[0] = 0;
  FUN_180012380(local_70,(ulonglong)local_104 + 0x30,local_107,local_98);
  local_100 = (int *)FUN_180011c50(local_70);
  local_100[2] = 0x30;
  *local_100 = local_100[2] + local_104;
  local_100[1] = 1;
  local_100[3] = *local_100;
  puVar4 = (undefined1 *)FUN_1800016d0(param_1);
  piVar8 = local_100 + 4;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)piVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    piVar8 = (int *)((longlong)piVar8 + 1);
  }
  local_100[8] = 1;
  local_100[9] = 0;
  uVar5 = FUN_180001ee0();
  *(undefined8 *)(local_100 + 10) = uVar5;
  local_90 = FUN_180011de0(local_88);
  puVar4 = (undefined1 *)FUN_180011c50(local_88);
  piVar8 = local_100 + 0xc;
  for (lVar6 = local_90; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)piVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    piVar8 = (int *)((longlong)piVar8 + 1);
  }
  FUN_180011fd0(param_4,local_70);
  FUN_1800121e0(local_70);
  FUN_1800121e0(local_88);
  __security_check_cookie(local_20 ^ (ulonglong)auStack_128);
  return;
}




longlong * FUN_180002e20(longlong *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  hModule = GetModuleHandleW(L"kernel32");
  pFVar1 = GetProcAddress(hModule,"Wow64DisableWow64FsRedirection");
  *param_1 = (longlong)pFVar1;
  if (*param_1 != 0) {
    (*(code *)*param_1)(param_1 + 1);
  }
  return param_1;
}




void FUN_180002ea0(longlong *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  if (*param_1 != 0) {
    hModule = GetModuleHandleW(L"kernel32");
    pFVar1 = GetProcAddress(hModule,"Wow64RevertWow64FsRedirection");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1[1]);
    }
  }
  return;
}




longlong * FUN_180002f10(longlong *param_1)

{
  *param_1 = 0;
  FUN_180002f70(param_1);
  return param_1;
}




void FUN_180002f40(longlong *param_1)

{
  FUN_180002fe0(param_1);
  return;
}




bool FUN_180002f70(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003030();
  if ((int)uVar1 != 0) {
    FUN_180003080(param_1,param_1);
  }
  if (*param_1 == 0) {
    CLogWriter::Log("[BitlockerHelp]: Init wmi failed!");
  }
  return *param_1 != 0;
}




void FUN_180002fe0(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))(*param_1);
    *param_1 = 0;
  }
  FUN_180003060();
  return;
}




undefined8 FUN_180003030(void)

{
  CoInitializeEx((LPVOID)0x0,0);
  return 1;
}




void FUN_180003060(void)

{
  CoUninitialize();
  return;
}




undefined4 FUN_180003080(undefined8 param_1,undefined8 *param_2)

{
  HRESULT HVar1;
  int iVar2;
  longlong *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  code *local_20;
  longlong local_18 [3];
  
  local_18[1] = 0xfffffffffffffffe;
  local_48 = 0;
  local_50 = (longlong *)0x0;
  HVar1 = CoInitializeSecurity
                    ((PSECURITY_DESCRIPTOR)0x0,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0,0,3
                     ,(void *)0x0,0,(void *)0x0);
  if (((-1 < HVar1) || (HVar1 == -0x7ffefee7)) &&
     (HVar1 = CoCreateInstance((IID *)&DAT_18003c7b0,(LPUNKNOWN)0x0,1,(IID *)&DAT_18003c7c0,
                               &local_50), -1 < HVar1)) {
    local_40 = L"\\\\.\\root\\CIMV2\\Security\\MicrosoftVolumeEncryption";
    local_20 = *(code **)(*local_50 + 0x18);
    local_38 = FUN_180001a20(local_18,0x18003ca60);
    local_30 = local_38;
    local_28 = FUN_180001ad0(local_38);
    iVar2 = (*local_20)(local_50,local_28,0,0,0,0,0,0,param_2);
    FUN_180001ab0(local_18);
    if ((-1 < iVar2) &&
       (HVar1 = CoSetProxyBlanket((IUnknown *)*param_2,10,0,(OLECHAR *)0x0,3,3,
                                  (RPC_AUTH_IDENTITY_HANDLE)0x0,0), -1 < HVar1)) {
      local_48 = 1;
    }
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))(local_50);
  }
  return local_48;
}




void FUN_180003280(undefined8 param_1,longlong *param_2,
                  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  int local_60;
  short local_58 [4];
  wchar_t *local_50;
  code *local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_98;
  local_68 = 0;
  if (param_2 != (longlong *)0x0) {
    Ordinal_8(local_58);
    local_40 = *(code **)(*param_2 + 0x20);
    local_70 = 0;
    local_78 = 0;
    local_60 = (*local_40)(param_2,L"DeviceID",0,local_58);
    if ((((-1 < local_60) && (local_58[0] != 1)) && (local_58[0] != 0)) &&
       (local_50 != (wchar_t *)0x0)) {
      FUN_180013300(param_3,local_50);
      bVar1 = FUN_180012d90(param_3);
      if (!bVar1) {
        lVar2 = FUN_180012e90(param_3);
        local_38 = FUN_180012c90(param_3,(longlong)local_30,0,lVar2 - 1);
        FUN_1800133f0((longlong)param_3,local_38);
        FUN_1800133c0(local_30);
        bVar1 = FUN_180012d90(param_3);
        local_64 = (uint)!bVar1;
        local_68 = local_64;
      }
    }
    Ordinal_9(local_58);
  }
  if (local_68 == 0) {
    CLogWriter::Log("[BitlockerHelp]: GetGuidPath failed!");
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_98);
  return;
}




void FUN_180003430(undefined8 param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  BOOL BVar2;
  LPCWSTR pWVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStackY_158 [32];
  DWORD local_118;
  int local_114;
  HANDLE local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_d8;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_48;
  undefined1 local_44 [16];
  uint local_34;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_f8 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_158;
  local_114 = 0;
  if (param_2 != (longlong *)0x0) {
    basic_string<>((longlong)local_30);
    iVar1 = FUN_180003280(param_1,param_2,local_30);
    if (iVar1 == 0) {
      FUN_1800133c0(local_30);
    }
    else {
      pWVar3 = (LPCWSTR)FUN_180012eb0(local_30);
      local_110 = CreateFileW(pWVar3,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (local_110 == (HANDLE)0xffffffffffffffff) {
        pWVar3 = (LPCWSTR)FUN_180012eb0(local_30);
        local_110 = CreateFileW(pWVar3,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      }
      if (local_110 == (HANDLE)0xffffffffffffffff) {
        FUN_1800133c0(local_30);
      }
      else {
        puVar5 = local_e8;
        for (lVar4 = 0x90; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_118 = 0;
        BVar2 = DeviceIoControl(local_110,0x70048,(LPVOID)0x0,0,local_e8,0x90,&local_118,
                                (LPOVERLAPPED)0x0);
        if (BVar2 != 0) {
          local_48 = 0;
          puVar5 = local_44;
          for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          BVar2 = DeviceIoControl(local_110,0x70000,(LPVOID)0x0,0,&local_48,0x18,&local_118,
                                  (LPOVERLAPPED)0x0);
          if (BVar2 != 0) {
            puVar5 = local_58;
            for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            BVar2 = DeviceIoControl(local_110,0x2d1080,(LPVOID)0x0,0,local_58,0xc,&local_118,
                                    (LPOVERLAPPED)0x0);
            if ((BVar2 != 0) && (local_34 != 0)) {
              *param_3 = local_54;
              local_108 = (ulonglong)local_34;
              *param_4 = local_e0 / (longlong)local_108;
              local_100 = (ulonglong)local_34;
              *param_5 = local_d8 / (longlong)local_100;
              local_114 = 1;
            }
          }
        }
        CloseHandle(local_110);
        FUN_1800133c0(local_30);
      }
    }
  }
  if (local_114 == 0) {
    CLogWriter::Log("[BitlockerHelp]: GetPartOffset failed!");
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_158);
  return;
}




bool FUN_180003750(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong *local_60;
  int local_58 [2];
  longlong *local_50;
  undefined4 local_48;
  code *local_40;
  code *local_38;
  code *local_30;
  short local_28 [20];
  
  local_60 = (longlong *)0x0;
  local_40 = *(code **)(*param_2 + 0xa0);
  local_48 = (*local_40)(param_2,&DAT_18003cb18,L"SELECT * FROM Win32_EncryptableVolume ",0x30,0,
                         &local_60);
  local_50 = (longlong *)0x0;
  local_58[0] = 0;
  while (local_60 != (longlong *)0x0) {
    local_38 = *(code **)(*local_60 + 0x20);
    iVar2 = (*local_38)(local_60,0xffffffff,1,&local_50,local_58);
    if ((local_58[0] == 0) || (iVar2 < 0)) break;
    Ordinal_8(local_28);
    local_30 = *(code **)(*local_50 + 0x20);
    iVar2 = (*local_30)(local_50,L"DeviceID",0,local_28,0,0);
    if ((-1 < iVar2) && ((local_28[0] != 1 && (local_28[0] != 0)))) {
      FUN_1800119e0(param_3,&local_50);
    }
    Ordinal_9(local_28);
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))(local_60);
  }
  bVar1 = FUN_180011e20(param_3);
  return !bVar1;
}




int FUN_180003900(longlong *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48 [5];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_20 = 0xfffffffffffffffe;
  local_58 = 0;
  if (*param_1 != 0) {
    FUN_180011b90(local_48 + 2);
    FUN_180003750(param_1,(longlong *)*param_1,local_48 + 2);
    FUN_180011820(local_48 + 2,&local_50);
    while( true ) {
      plVar3 = FUN_1800124b0(local_48 + 2,local_18);
      bVar1 = FID_conflict_operator__(&local_50,plVar3);
      if (!bVar1) break;
      local_54 = -1;
      local_48[0] = -1;
      local_48[1] = 0xffffffffffffffff;
      puVar4 = (undefined8 *)FUN_180011700(&local_50);
      iVar2 = FUN_180003430(param_1,(longlong *)*puVar4,&local_54,local_48,local_48 + 1);
      if (((iVar2 != 0) && (param_2 == local_54)) && (local_48[0] == param_3)) {
        puVar4 = (undefined8 *)FUN_180011700(&local_50);
        *param_4 = *puVar4;
        (**(code **)(*(longlong *)*param_4 + 8))(*param_4);
        local_58 = 1;
        break;
      }
      FUN_180011720(&local_50);
    }
    FUN_180003aa0(param_1,local_48 + 2);
    FUN_180011b60(local_48 + 2);
  }
  if (local_58 == 0) {
    CLogWriter::Log("[BitlockerHelp]: Find vol failed!");
  }
  return local_58;
}




void FUN_180003aa0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18 [3];
  
  FUN_180011820(param_2,&local_28);
  while( true ) {
    plVar2 = FUN_1800124b0(param_2,local_18);
    bVar1 = FID_conflict_operator__(&local_28,plVar2);
    if (!bVar1) break;
    puVar3 = (undefined8 *)FUN_180011700(&local_28);
    local_20 = (longlong *)*puVar3;
    (**(code **)(*local_20 + 0x10))(local_20);
    FUN_180011720(&local_28);
  }
  return;
}




int FUN_180003b20(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  code *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  code *local_c0;
  longlong local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_30;
  undefined2 local_28 [4];
  undefined2 local_20;
  
  local_30 = 0xfffffffffffffffe;
  local_128 = -1;
  local_110 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  local_120 = (longlong *)0x0;
  Ordinal_8(local_48);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_e8 = *(code **)(*param_2 + 0x30);
    local_100 = FUN_180001a20(&local_e0,0x18003cbb8);
    local_f8 = local_100;
    local_f0 = FUN_180001ad0(local_100);
    (*local_e8)(param_2,local_f0,0,0,&local_110,0);
    FUN_180001ab0(&local_e0);
    if (local_110 != (longlong *)0x0) {
      local_c0 = *(code **)(*local_110 + 0x98);
      local_d8 = FUN_180001990(&local_b8,"Lock");
      local_d0 = local_d8;
      local_c8 = FUN_180001ad0(local_d8);
      uVar1 = 0;
      (*local_c0)(local_110,local_c8,0,&local_118,0);
      FUN_180001ab0(&local_b8);
      if (local_118 != (longlong *)0x0) {
        local_b0 = *(code **)(*local_118 + 0x78);
        (*local_b0)(local_118,0,&local_120);
        if (local_120 != (longlong *)0x0) {
          local_28[0] = 0xb;
          local_20 = 1;
          local_a8 = *(code **)(*local_120 + 0x28);
          (*local_a8)(local_120,L"ForceDismount",0,local_28,uVar1 & 0xffffffff00000000);
          local_a0 = *(code **)(*param_3 + 0x20);
          local_128 = (*local_a0)(param_3,L"__PATH",0,local_48,0,0);
          if (-1 < local_128) {
            local_108 = (longlong *)0x0;
            local_78 = *(code **)(*param_2 + 0xc0);
            local_88 = local_120;
            local_98 = FUN_180001a20(&local_70,0x18003cc20);
            local_90 = local_98;
            local_80 = FUN_180001ad0(local_98);
            local_128 = (*local_78)(param_2,local_40,local_80,0,0,local_88,&local_108,0);
            FUN_180001ab0(&local_70);
            if ((-1 < local_128) && (local_128 = -1, local_108 != (longlong *)0x0)) {
              Ordinal_8(local_60);
              local_68 = *(code **)(*local_108 + 0x20);
              local_128 = (*local_68)(local_108,L"ReturnValue",0,local_60,0,0);
              if (-1 < local_128) {
                local_128 = local_58;
                CLogWriter::Log("[BitlockerHelp]: Lock hr=0x%x");
              }
              Ordinal_9(local_60);
              (**(code **)(*local_108 + 0x10))(local_108);
            }
          }
        }
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))(local_120);
  }
  Ordinal_9(local_48);
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))(local_118);
  }
  if (local_110 != (longlong *)0x0) {
    (**(code **)(*local_110 + 0x10))(local_110);
  }
  return local_128;
}




uint FUN_180003f90(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  code *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  code *local_b8;
  longlong local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_104 = 0;
  local_120 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  local_130 = (longlong *)0x0;
  Ordinal_8(local_40);
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (param_4 != 0)) {
    local_e0 = *(code **)(*param_2 + 0x30);
    local_f8 = FUN_180001a20(&local_d8,0x18003cc68);
    local_f0 = local_f8;
    local_e8 = FUN_180001ad0(local_f8);
    (*local_e0)(param_2,local_e8,0,0,&local_120,0);
    FUN_180001ab0(&local_d8);
    if (local_120 != (longlong *)0x0) {
      local_b8 = *(code **)(*local_120 + 0x98);
      local_d0 = FUN_180001990(&local_b0,"UnlockWithPassphrase");
      local_c8 = local_d0;
      local_c0 = FUN_180001ad0(local_d0);
      uVar2 = 0;
      local_110 = (*local_b8)(local_120,local_c0,0,&local_128,0);
      FUN_180001ab0(&local_b0);
      if (local_128 != (longlong *)0x0) {
        local_a8 = *(code **)(*local_128 + 0x78);
        (*local_a8)(local_128,0,&local_130);
        if (local_130 != (longlong *)0x0) {
          FUN_180001a20(&local_100,param_4);
          local_20[0] = 8;
          local_18 = FUN_180001ad0(&local_100);
          local_a0 = *(code **)(*local_130 + 0x28);
          (*local_a0)(local_130,L"Passphrase",0,local_20,uVar2 & 0xffffffff00000000);
          local_98 = *(code **)(*param_3 + 0x20);
          local_110 = (*local_98)(param_3,L"__PATH",0,local_40,0,0);
          if (local_110 < 0) {
            FUN_180001ab0(&local_100);
          }
          else {
            local_118 = (longlong *)0x0;
            local_70 = *(code **)(*param_2 + 0xc0);
            local_80 = local_130;
            local_90 = FUN_180001a20(&local_68,0x18003ccd8);
            local_88 = local_90;
            local_78 = FUN_180001ad0(local_90);
            iVar1 = (*local_70)(param_2,local_38,local_78,0,0,local_80,&local_118,0);
            local_10c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_68);
            if ((-1 < iVar1) && (local_118 != (longlong *)0x0)) {
              Ordinal_8(local_58);
              local_60 = *(code **)(*local_118 + 0x20);
              iVar1 = (*local_60)(local_118,L"ReturnValue",0,local_58,0,0);
              if (-1 < iVar1) {
                local_108 = (uint)(local_50 == 0);
                local_104 = local_108;
              }
              Ordinal_9(local_58);
              (**(code **)(*local_118 + 0x10))(local_118);
            }
            FUN_180001ab0(&local_100);
          }
        }
      }
    }
  }
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))(local_130);
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))(local_128);
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))(local_120);
  }
  Ordinal_9(local_40);
  return local_104;
}




uint FUN_180004460(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  code *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  code *local_b8;
  longlong local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_104 = 0;
  local_120 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  local_130 = (longlong *)0x0;
  Ordinal_8(local_40);
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (param_4 != 0)) {
    local_e0 = *(code **)(*param_2 + 0x30);
    local_f8 = FUN_180001a20(&local_d8,0x18003cd20);
    local_f0 = local_f8;
    local_e8 = FUN_180001ad0(local_f8);
    (*local_e0)(param_2,local_e8,0,0,&local_120,0);
    FUN_180001ab0(&local_d8);
    if (local_120 != (longlong *)0x0) {
      local_b8 = *(code **)(*local_120 + 0x98);
      local_d0 = FUN_180001990(&local_b0,"UnlockWithNumericalPassword");
      local_c8 = local_d0;
      local_c0 = FUN_180001ad0(local_d0);
      uVar2 = 0;
      local_110 = (*local_b8)(local_120,local_c0,0,&local_128,0);
      FUN_180001ab0(&local_b0);
      if (local_128 != (longlong *)0x0) {
        local_a8 = *(code **)(*local_128 + 0x78);
        (*local_a8)(local_128,0,&local_130);
        if (local_130 != (longlong *)0x0) {
          FUN_180001a20(&local_100,param_4);
          local_20[0] = 8;
          local_18 = FUN_180001ad0(&local_100);
          local_a0 = *(code **)(*local_130 + 0x28);
          (*local_a0)(local_130,L"NumericalPassword",0,local_20,uVar2 & 0xffffffff00000000);
          local_98 = *(code **)(*param_3 + 0x20);
          local_110 = (*local_98)(param_3,L"__PATH",0,local_40,0,0);
          if (local_110 < 0) {
            FUN_180001ab0(&local_100);
          }
          else {
            local_118 = (longlong *)0x0;
            local_70 = *(code **)(*param_2 + 0xc0);
            local_80 = local_130;
            local_90 = FUN_180001a20(&local_68,0x18003cda8);
            local_88 = local_90;
            local_78 = FUN_180001ad0(local_90);
            iVar1 = (*local_70)(param_2,local_38,local_78,0,0,local_80,&local_118,0);
            local_10c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_68);
            if ((-1 < iVar1) && (local_118 != (longlong *)0x0)) {
              Ordinal_8(local_58);
              local_60 = *(code **)(*local_118 + 0x20);
              iVar1 = (*local_60)(local_118,L"ReturnValue",0,local_58,0,0);
              if (-1 < iVar1) {
                local_108 = (uint)(local_50 == 0);
                local_104 = local_108;
              }
              Ordinal_9(local_58);
              (**(code **)(*local_118 + 0x10))(local_118);
            }
            FUN_180001ab0(&local_100);
          }
        }
      }
    }
  }
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))(local_130);
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))(local_128);
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))(local_120);
  }
  Ordinal_9(local_40);
  return local_104;
}




undefined4 FUN_180004930(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0xffffffff;
  local_30 = (longlong *)0x0;
  if (((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_30), iVar1 != 0)) &&
     (local_30 != (longlong *)0x0)) {
    FUN_180011b90(local_20);
    iVar1 = FUN_180004a60(param_1,(longlong *)*param_1,local_30,param_4,local_20);
    if (iVar1 == 0) {
      FUN_1800121e0(local_20);
    }
    else {
      uVar2 = FUN_180004fb0(param_1,(longlong *)*param_1,local_30,local_20);
      if (uVar2 == 0) {
        local_38 = 0xffffffff;
      }
      else {
        local_38 = 0;
      }
      FUN_1800121e0(local_20);
    }
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))(local_30);
  }
  return local_38;
}




undefined4
FUN_180004a60(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  int local_130;
  uint local_12c;
  undefined4 local_128;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  code *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  code *local_d8;
  longlong local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  code *local_80;
  code *local_78;
  short local_70 [12];
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_128 = 0;
  local_138 = (longlong *)0x0;
  local_140 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  Ordinal_8(local_40);
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (param_4 != 0)) {
    local_100 = *(code **)(*param_2 + 0x30);
    local_118 = FUN_180001a20(&local_f8,0x18003cdf8);
    local_110 = local_118;
    local_108 = FUN_180001ad0(local_118);
    (*local_100)(param_2,local_108,0,0,&local_138,0);
    FUN_180001ab0(&local_f8);
    if (local_138 != (longlong *)0x0) {
      local_d8 = *(code **)(*local_138 + 0x98);
      local_f0 = FUN_180001990(&local_d0,"GetExternalKeyFromFile");
      local_e8 = local_f0;
      local_e0 = FUN_180001ad0(local_f0);
      uVar2 = 0;
      local_130 = (*local_d8)(local_138,local_e0,0,&local_140,0);
      FUN_180001ab0(&local_d0);
      if (local_140 != (longlong *)0x0) {
        local_c8 = *(code **)(*local_140 + 0x78);
        (*local_c8)(local_140,0,&local_148);
        if (local_148 != (longlong *)0x0) {
          FUN_180001a20(&local_120,param_4);
          local_20[0] = 8;
          local_18 = FUN_180001ad0(&local_120);
          local_c0 = *(code **)(*local_148 + 0x28);
          (*local_c0)(local_148,L"PathWithFileName",0,local_20,uVar2 & 0xffffffff00000000);
          local_b8 = *(code **)(*param_3 + 0x20);
          local_130 = (*local_b8)(param_3,L"__PATH",0,local_40,0,0);
          if (local_130 < 0) {
            FUN_180001ab0(&local_120);
          }
          else {
            local_150 = (longlong *)0x0;
            local_90 = *(code **)(*param_2 + 0xc0);
            local_a0 = local_148;
            local_b0 = FUN_180001a20(&local_88,0x18003ce78);
            local_a8 = local_b0;
            local_98 = FUN_180001ad0(local_b0);
            iVar1 = (*local_90)(param_2,local_38,local_98,0,0,local_a0,&local_150,0);
            local_12c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_88);
            if ((-1 < iVar1) && (local_150 != (longlong *)0x0)) {
              Ordinal_8(local_58);
              local_80 = *(code **)(*local_150 + 0x20);
              iVar1 = (*local_80)(local_150,L"ReturnValue",0,local_58,0,0);
              if ((-1 < iVar1) && (local_50 == 0)) {
                Ordinal_8(local_70);
                local_78 = *(code **)(*local_150 + 0x20);
                iVar1 = (*local_78)(local_150,L"ExternalKey",0,local_70,0,0);
                if (-1 < iVar1) {
                  local_128 = FUN_180005f70(param_1,local_70,param_5);
                }
                Ordinal_9(local_70);
              }
              Ordinal_9(local_58);
              (**(code **)(*local_150 + 0x10))(local_150);
            }
            FUN_180001ab0(&local_120);
          }
        }
      }
    }
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))(local_148);
  }
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 0x10))(local_140);
  }
  if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 0x10))(local_138);
  }
  Ordinal_9(local_40);
  return local_128;
}




uint FUN_180004fb0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  undefined1 *local_118;
  code *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  code *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong local_c0;
  code *local_b8;
  longlong local_b0;
  code *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  code *local_80;
  longlong local_78;
  code *local_70;
  undefined2 local_68 [4];
  longlong local_60;
  undefined1 local_50 [8];
  int local_48;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_120 = 0;
  local_140 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  local_150 = (longlong *)0x0;
  Ordinal_8(local_38);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_110 = *(code **)(*param_3 + 0x20);
    iVar1 = (*local_110)(param_3,L"__PATH",0,local_38,0,0);
    if (-1 < iVar1) {
      local_f0 = *(code **)(*param_2 + 0x30);
      local_108 = FUN_180001a20(&local_e8,0x18003cee8);
      local_100 = local_108;
      local_f8 = FUN_180001ad0(local_108);
      (*local_f0)(param_2,local_f8,0,0,&local_140,0);
      FUN_180001ab0(&local_e8);
      if (local_140 != (longlong *)0x0) {
        local_c8 = *(code **)(*local_140 + 0x98);
        local_e0 = FUN_180001990(&local_c0,"UnlockWithExternalKey");
        local_d8 = local_e0;
        local_d0 = FUN_180001ad0(local_e0);
        uVar6 = 0;
        (*local_c8)(local_140,local_d0,0,&local_148,0);
        FUN_180001ab0(&local_c0);
        if (local_148 != (longlong *)0x0) {
          local_b8 = *(code **)(*local_148 + 0x78);
          (*local_b8)(local_148,0,&local_150);
          if (local_150 != (longlong *)0x0) {
            uVar2 = FUN_180011de0(param_4);
            local_138 = Ordinal_411(0x11,0,uVar2 & 0xffffffff);
            if (local_138 != 0) {
              local_118 = (undefined1 *)0x0;
              iVar1 = Ordinal_23(local_138,&local_118);
              if (-1 < iVar1) {
                local_b0 = FUN_180011de0(param_4);
                puVar3 = (undefined1 *)FUN_180011c50(param_4);
                puVar5 = local_118;
                for (lVar4 = local_b0; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar5 = *puVar3;
                  puVar3 = puVar3 + 1;
                  puVar5 = puVar5 + 1;
                }
              }
              Ordinal_24(local_138);
              if (local_118 == (undefined1 *)0x0) {
                Ordinal_16(local_138);
                local_138 = 0;
              }
              else {
                Ordinal_8(local_68);
                local_68[0] = 0x2011;
                local_60 = local_138;
                local_a8 = *(code **)(*local_150 + 0x28);
                (*local_a8)(local_150,L"ExternalKey",0,local_68,uVar6 & 0xffffffff00000000);
                local_130 = (longlong *)0x0;
                local_80 = *(code **)(*param_2 + 0xc0);
                local_90 = local_150;
                local_a0 = FUN_180001a20(&local_78,0x18003cf48);
                local_98 = local_a0;
                local_88 = FUN_180001ad0(local_a0);
                iVar1 = (*local_80)(param_2,local_30,local_88,0,0,local_90,&local_130,0);
                local_128 = (uint)(-1 < iVar1);
                FUN_180001ab0(&local_78);
                if ((-1 < iVar1) && (local_130 != (longlong *)0x0)) {
                  Ordinal_8(local_50);
                  local_70 = *(code **)(*local_130 + 0x20);
                  iVar1 = (*local_70)(local_130,L"ReturnValue",0,local_50,0,0);
                  if (-1 < iVar1) {
                    local_124 = (uint)(local_48 == 0);
                    local_120 = local_124;
                  }
                  Ordinal_9(local_50);
                  (**(code **)(*local_130 + 0x10))(local_130);
                }
                Ordinal_9(local_68);
              }
            }
          }
        }
      }
    }
  }
  if (local_150 != (longlong *)0x0) {
    (**(code **)(*local_150 + 0x10))(local_150);
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))(local_148);
  }
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 0x10))(local_140);
  }
  Ordinal_9(local_38);
  return local_120;
}




undefined4
FUN_180005530(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  int local_110;
  uint local_10c;
  undefined4 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  code *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  code *local_c0;
  longlong local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_30;
  undefined2 local_28 [4];
  undefined4 local_20;
  
  local_30 = 0xfffffffffffffffe;
  local_108 = 0;
  local_118 = (longlong *)0x0;
  local_120 = (longlong *)0x0;
  local_130 = (longlong *)0x0;
  Ordinal_8(local_48);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_e8 = *(code **)(*param_2 + 0x30);
    local_100 = FUN_180001a20(&local_e0,0x18003cf90);
    local_f8 = local_100;
    local_f0 = FUN_180001ad0(local_100);
    (*local_e8)(param_2,local_f0,0,0,&local_118,0);
    FUN_180001ab0(&local_e0);
    if (local_118 != (longlong *)0x0) {
      local_c0 = *(code **)(*local_118 + 0x98);
      local_d8 = FUN_180001990(&local_b8,"GetKeyProtectors");
      local_d0 = local_d8;
      local_c8 = FUN_180001ad0(local_d8);
      uVar2 = 0;
      local_110 = (*local_c0)(local_118,local_c8,0,&local_120,0);
      FUN_180001ab0(&local_b8);
      if (local_120 != (longlong *)0x0) {
        local_b0 = *(code **)(*local_120 + 0x78);
        (*local_b0)(local_120,0,&local_130);
        if (local_130 != (longlong *)0x0) {
          local_28[0] = 0x17;
          local_a8 = *(code **)(*local_130 + 0x28);
          local_20 = param_4;
          (*local_a8)(local_130,L"KeyProtectorType",0,local_28,uVar2 & 0xffffffff00000000);
          local_a0 = *(code **)(*param_3 + 0x20);
          local_110 = (*local_a0)(param_3,L"__PATH",0,local_48,0,0);
          if (-1 < local_110) {
            local_128 = (longlong *)0x0;
            local_78 = *(code **)(*param_2 + 0xc0);
            local_88 = local_130;
            local_98 = FUN_180001a20(&local_70,0x18003d018);
            local_90 = local_98;
            local_80 = FUN_180001ad0(local_98);
            iVar1 = (*local_78)(param_2,local_40,local_80,0,0,local_88,&local_128,0);
            local_10c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_70);
            if ((-1 < iVar1) && (local_128 != (longlong *)0x0)) {
              Ordinal_8(local_60);
              local_68 = *(code **)(*local_128 + 0x20);
              iVar1 = (*local_68)(local_128,L"ReturnValue",0,local_60,0,0);
              if ((-1 < iVar1) && (local_58 == 0)) {
                local_108 = FUN_18000dad0(param_1,local_128,param_5);
              }
              Ordinal_9(local_60);
              (**(code **)(*local_128 + 0x10))(local_128);
            }
          }
        }
      }
    }
  }
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))(local_130);
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))(local_120);
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))(local_118);
  }
  Ordinal_9(local_48);
  return local_108;
}




undefined4
FUN_1800059d0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
             wchar_t *param_5)

{
  int iVar1;
  ulonglong uVar2;
  ushort local_156;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  int local_130;
  uint local_12c;
  undefined4 local_128;
  longlong local_120;
  ushort local_118 [4];
  wchar_t *local_110;
  longlong *local_100;
  undefined8 local_f8;
  code *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  code *local_80;
  longlong local_78;
  code *local_70;
  code *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_128 = 0;
  local_138 = (longlong *)0x0;
  local_140 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  Ordinal_8(local_40);
  if ((((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (param_4 != 0)) &&
     (param_4 != 0)) {
    local_f0 = *(code **)(*param_2 + 0x30);
    local_100 = FUN_180001a20(&local_e8,0x18003d058);
    local_60 = local_100;
    local_f8 = FUN_180001ad0(local_100);
    (*local_f0)(param_2,local_f8,0,0,&local_138,0);
    FUN_180001ab0(&local_e8);
    if (local_138 != (longlong *)0x0) {
      local_c8 = *(code **)(*local_138 + 0x98);
      local_e0 = FUN_180001990(&local_c0,"GetKeyProtectorNumericalPassword");
      local_d8 = local_e0;
      local_d0 = FUN_180001ad0(local_e0);
      uVar2 = 0;
      local_130 = (*local_c8)(local_138,local_d0,0,&local_140,0);
      FUN_180001ab0(&local_c0);
      if (local_140 != (longlong *)0x0) {
        local_b8 = *(code **)(*local_140 + 0x78);
        (*local_b8)(local_140,0,&local_148);
        if (local_148 != (longlong *)0x0) {
          FUN_180001a20(&local_120,param_4);
          local_20[0] = 8;
          local_18 = FUN_180001ad0(&local_120);
          local_b0 = *(code **)(*local_148 + 0x28);
          (*local_b0)(local_148,L"VolumeKeyProtectorID",0,local_20,uVar2 & 0xffffffff00000000);
          local_a8 = *(code **)(*param_3 + 0x20);
          local_130 = (*local_a8)(param_3,L"__PATH",0,local_40,0,0);
          if (local_130 < 0) {
            FUN_180001ab0(&local_120);
          }
          else {
            local_150 = (longlong *)0x0;
            local_80 = *(code **)(*param_2 + 0xc0);
            local_90 = local_148;
            local_a0 = FUN_180001a20(&local_78,0x18003d0f0);
            local_98 = local_a0;
            local_88 = FUN_180001ad0(local_a0);
            iVar1 = (*local_80)(param_2,local_38,local_88,0,0,local_90,&local_150,0);
            local_12c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_78);
            if (-1 < iVar1) {
              if (local_150 == (longlong *)0x0) {
                FUN_180001ab0(&local_120);
                goto LAB_180005f07;
              }
              Ordinal_8(local_58);
              local_70 = *(code **)(*local_150 + 0x20);
              iVar1 = (*local_70)(local_150,L"ReturnValue",0,local_58,0,0);
              if ((-1 < iVar1) && (local_50 == 0)) {
                Ordinal_8(local_118);
                local_68 = *(code **)(*local_150 + 0x20);
                iVar1 = (*local_68)(local_150,L"NumericalPassword",0,local_118,0,0);
                if (-1 < iVar1) {
                  local_156 = (ushort)(local_110 != (wchar_t *)0x0);
                  local_118[0] = local_156;
                  if (local_156 != 0) {
                    wcscpy_s(param_5,0x104,local_110);
                    local_128 = 1;
                  }
                }
                Ordinal_9(local_118);
              }
              Ordinal_9(local_58);
              (**(code **)(*local_150 + 0x10))(local_150);
            }
            FUN_180001ab0(&local_120);
          }
        }
      }
    }
  }
LAB_180005f07:
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))(local_148);
  }
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 0x10))(local_140);
  }
  if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 0x10))(local_138);
  }
  Ordinal_9(local_40);
  return local_128;
}




undefined4 FUN_180005f70(undefined8 param_1,short *param_2,undefined8 param_3)

{
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  longlong local_18;
  
  local_2c = 0;
  if ((*param_2 == 0x2011) && (local_18 = *(longlong *)(param_2 + 4), local_18 != 0)) {
    local_28 = 0;
    local_24 = 0;
    local_30 = Ordinal_20(local_18,1,&local_28);
    local_20 = Ordinal_19(local_18,1,&local_24);
    if ((-1 < local_30) && (-1 < local_20)) {
      local_2c = 1;
      for (local_34 = local_28; local_34 <= local_24; local_34 = local_34 + 1) {
        local_38[0] = 0;
        local_30 = Ordinal_25(local_18,&local_34,local_38);
        if (local_30 < 0) {
          return 0;
        }
        FUN_180012130(param_3,local_38);
      }
    }
  }
  return local_2c;
}




undefined4
FUN_180006090(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  int local_130;
  uint local_12c;
  undefined4 local_128;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  code *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  code *local_d8;
  longlong local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  code *local_80;
  code *local_78;
  short local_70 [12];
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_128 = 0;
  local_138 = (longlong *)0x0;
  local_140 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  Ordinal_8(local_40);
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (param_4 != 0)) {
    local_100 = *(code **)(*param_2 + 0x30);
    local_118 = FUN_180001a20(&local_f8,0x18003d178);
    local_110 = local_118;
    local_108 = FUN_180001ad0(local_118);
    (*local_100)(param_2,local_108,0,0,&local_138,0);
    FUN_180001ab0(&local_f8);
    if (local_138 != (longlong *)0x0) {
      local_d8 = *(code **)(*local_138 + 0x98);
      local_f0 = FUN_180001990(&local_d0,"GetKeyProtectorExternalKey");
      local_e8 = local_f0;
      local_e0 = FUN_180001ad0(local_f0);
      uVar2 = 0;
      local_130 = (*local_d8)(local_138,local_e0,0,&local_140,0);
      FUN_180001ab0(&local_d0);
      if (local_140 != (longlong *)0x0) {
        local_c8 = *(code **)(*local_140 + 0x78);
        (*local_c8)(local_140,0,&local_148);
        if (local_148 != (longlong *)0x0) {
          FUN_180001a20(&local_120,param_4);
          local_20[0] = 8;
          local_18 = FUN_180001ad0(&local_120);
          local_c0 = *(code **)(*local_148 + 0x28);
          (*local_c0)(local_148,L"VolumeKeyProtectorID",0,local_20,uVar2 & 0xffffffff00000000);
          local_b8 = *(code **)(*param_3 + 0x20);
          local_130 = (*local_b8)(param_3,L"__PATH",0,local_40,0,0);
          if (local_130 < 0) {
            FUN_180001ab0(&local_120);
          }
          else {
            local_150 = (longlong *)0x0;
            local_90 = *(code **)(*param_2 + 0xc0);
            local_a0 = local_148;
            local_b0 = FUN_180001a20(&local_88,0x18003d208);
            local_a8 = local_b0;
            local_98 = FUN_180001ad0(local_b0);
            iVar1 = (*local_90)(param_2,local_38,local_98,0,0,local_a0,&local_150,0);
            local_12c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_88);
            if (-1 < iVar1) {
              if (local_150 == (longlong *)0x0) {
                FUN_180001ab0(&local_120);
                goto LAB_18000657c;
              }
              Ordinal_8(local_58);
              local_80 = *(code **)(*local_150 + 0x20);
              iVar1 = (*local_80)(local_150,L"ReturnValue",0,local_58,0,0);
              if ((-1 < iVar1) && (local_50 == 0)) {
                Ordinal_8(local_70);
                local_78 = *(code **)(*local_150 + 0x20);
                iVar1 = (*local_78)(local_150,L"ExternalKey",0,local_70,0,0);
                if (-1 < iVar1) {
                  local_128 = FUN_180005f70(param_1,local_70,param_5);
                }
                Ordinal_9(local_70);
              }
              Ordinal_9(local_58);
              (**(code **)(*local_150 + 0x10))(local_150);
            }
            FUN_180001ab0(&local_120);
          }
        }
      }
    }
  }
LAB_18000657c:
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))(local_148);
  }
  if (local_140 != (longlong *)0x0) {
    (**(code **)(*local_140 + 0x10))(local_140);
  }
  if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 0x10))(local_138);
  }
  Ordinal_9(local_40);
  return local_128;
}




uint FUN_1800065e0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  code *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  code *local_e0;
  longlong local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  code *local_80;
  undefined1 local_78 [8];
  int local_70;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_48;
  undefined2 local_40 [4];
  undefined8 local_38;
  undefined2 local_28 [4];
  undefined8 local_20;
  
  local_48 = 0xfffffffffffffffe;
  local_134 = 0;
  local_150 = (longlong *)0x0;
  local_158 = (longlong *)0x0;
  local_160 = (longlong *)0x0;
  Ordinal_8(local_60);
  if ((((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) && (param_4 != 0)) &&
     (param_5 != 0)) {
    local_108 = *(code **)(*param_2 + 0x30);
    local_120 = FUN_180001a20(&local_100,0x18003d270);
    local_118 = local_120;
    local_110 = FUN_180001ad0(local_120);
    (*local_108)(param_2,local_110,0,0,&local_150,0);
    FUN_180001ab0(&local_100);
    if (local_150 != (longlong *)0x0) {
      local_e0 = *(code **)(*local_150 + 0x98);
      local_f8 = FUN_180001990(&local_d8,"SaveExternalKeyToFile");
      local_f0 = local_f8;
      local_e8 = FUN_180001ad0(local_f8);
      uVar2 = 0;
      local_140 = (*local_e0)(local_150,local_e8,0,&local_158,0);
      FUN_180001ab0(&local_d8);
      if (local_158 != (longlong *)0x0) {
        local_d0 = *(code **)(*local_158 + 0x78);
        (*local_d0)(local_158,0,&local_160);
        if (local_160 != (longlong *)0x0) {
          FUN_180001a20(&local_130,param_4);
          local_40[0] = 8;
          local_38 = FUN_180001ad0(&local_130);
          local_c8 = *(code **)(*local_160 + 0x28);
          uVar2 = uVar2 & 0xffffffff00000000;
          (*local_c8)(local_160,L"VolumeKeyProtectorID",0,local_40,uVar2);
          FUN_180001ab0(&local_130);
          FUN_180001a20(&local_128,param_5);
          local_28[0] = 8;
          local_20 = FUN_180001ad0(&local_128);
          local_c0 = *(code **)(*local_160 + 0x28);
          (*local_c0)(local_160,L"Path",0,local_28,uVar2 & 0xffffffff00000000);
          FUN_180001ab0(&local_128);
          local_b8 = *(code **)(*param_3 + 0x20);
          local_140 = (*local_b8)(param_3,L"__PATH",0,local_60,0,0);
          if (-1 < local_140) {
            local_148 = (longlong *)0x0;
            local_90 = *(code **)(*param_2 + 0xc0);
            local_a0 = local_160;
            local_b0 = FUN_180001a20(&local_88,0x18003d308);
            local_a8 = local_b0;
            local_98 = FUN_180001ad0(local_b0);
            iVar1 = (*local_90)(param_2,local_58,local_98,0,0,local_a0,&local_148,0);
            local_13c = (uint)(-1 < iVar1);
            FUN_180001ab0(&local_88);
            if ((-1 < iVar1) && (local_148 != (longlong *)0x0)) {
              Ordinal_8(local_78);
              local_80 = *(code **)(*local_148 + 0x20);
              iVar1 = (*local_80)(local_148,L"ReturnValue",0,local_78,0,0);
              if (-1 < iVar1) {
                local_138 = (uint)(local_70 == 0);
                local_134 = local_138;
              }
              Ordinal_9(local_78);
              (**(code **)(*local_148 + 0x10))(local_148);
            }
          }
        }
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    (**(code **)(*local_160 + 0x10))(local_160);
  }
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))(local_158);
  }
  if (local_150 != (longlong *)0x0) {
    (**(code **)(*local_150 + 0x10))(local_150);
  }
  Ordinal_9(local_60);
  return local_134;
}




void FUN_180006b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  bool bVar2;
  BitLockerManager *pBVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  ushort *puVar9;
  byte *pbVar10;
  wchar_t *pwVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStackY_8d8 [32];
  undefined1 local_898;
  undefined1 local_897;
  undefined1 local_896 [6];
  longlong *local_890;
  undefined4 local_888;
  int local_884;
  ushort *local_880;
  uint *local_878;
  ushort *local_870;
  int local_868 [4];
  longlong local_858;
  ulonglong local_850;
  uint *local_848;
  undefined8 local_840 [3];
  undefined8 local_828 [3];
  code *local_810;
  undefined8 local_808;
  code *local_800;
  undefined8 local_7f8;
  longlong local_7f0;
  ushort *local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  __int64 local_7c0;
  char *local_7b8;
  undefined8 local_7b0;
  ulonglong local_7a8;
  undefined8 local_7a0 [3];
  <lambda_1> local_788 [24];
  undefined8 local_770 [3];
  uint local_758 [2];
  longlong local_750;
  char *local_748;
  undefined8 local_740;
  longlong local_738;
  basic_ostream<char,struct_std::char_traits<char>_> local_728 [272];
  undefined1 local_618 [16];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_608 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_5e8 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_5c8 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_5a8 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_588 [32];
  byte local_568 [48];
  wchar_t local_538 [104];
  char local_468 [272];
  char local_358 [272];
  char local_248 [272];
  byte local_138 [272];
  ulonglong local_28;
  
  local_740 = 0xfffffffffffffffe;
  local_28 = DAT_18004e038 ^ (ulonglong)auStackY_8d8;
  local_868[2] = 0;
  pcVar12 = local_468;
  for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pcVar12 = '\0';
    pcVar12 = pcVar12 + 1;
  }
  snprintf(local_468,0x104,"%ws",param_2);
  local_850 = 0x20;
  local_7b0 = FUN_1800016d0(&local_898);
  local_7a8 = local_850;
  FUN_180012420(local_828,local_850,local_7b0);
  pBVar3 = GetBitLockerMgr();
  if (pBVar3 == (BitLockerManager *)0x0) {
    FUN_1800121e0(local_828);
    goto LAB_180007379;
  }
  local_810 = (code *)**(undefined8 **)pBVar3;
  (*local_810)(pBVar3,local_468,0);
  cVar1 = (**(code **)(*(longlong *)pBVar3 + 0x30))(pBVar3);
  if (cVar1 == '\0') {
LAB_180006ccc:
    local_888 = 0;
  }
  else {
    local_800 = *(code **)(*(longlong *)pBVar3 + 0x78);
    local_808 = FUN_180011c50(local_828);
    cVar1 = (*local_800)(pBVar3,local_808,&local_850);
    if (cVar1 == '\0') goto LAB_180006ccc;
    local_888 = 1;
  }
  local_897 = (undefined1)local_888;
  DestroyBitLockerMgr(pBVar3);
  pcVar12 = local_248;
  for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pcVar12 = '\0';
    pcVar12 = pcVar12 + 1;
  }
  pcVar12 = local_468;
  pcVar13 = "%s\\Windows\\System32\\config\\SYSTEM";
  snprintf(local_248,0x104,"%s\\Windows\\System32\\config\\SYSTEM",pcVar12);
  local_890 = (longlong *)FUN_180029e20(local_248,1,pcVar13,(ulonglong)pcVar12);
  if ((local_890 != (longlong *)0x0) && (bVar2 = FUN_180011e20(local_828), !bVar2)) {
    if ((int)local_890[2] != 2) {
      FUN_1800121e0(local_828);
      goto LAB_180007379;
    }
    pbVar8 = (byte *)"\\ControlSet001\\Control\\FVEAutoUnlock\\";
    pbVar10 = local_568;
    for (lVar7 = 0x26; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pbVar10 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar10 = pbVar10 + 1;
    }
    local_884 = FUN_180028890((longlong)local_890,0,local_568,(byte *)0x0);
    if (local_884 == 0) {
      FUN_1800121e0(local_828);
      goto LAB_180007379;
    }
    local_868[1] = 0;
    local_868[0] = 0;
    while (uVar4 = FUN_180028410((longlong)local_890,local_884 + 4,local_868 + 1,local_868,local_758
                                ), 0 < (int)uVar4) {
      pbVar8 = local_138;
      for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pbVar8 = 0;
        pbVar8 = pbVar8 + 1;
      }
      snprintf((char *)local_138,0x104,"%s%s\\Data",local_568);
      local_878 = FUN_180029410((longlong)local_890,(uint *)0x0,0,local_138,3,0x81);
      local_848 = local_878 + 1;
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                (local_608,local_748,(longlong)*(short *)(local_750 + 0x48));
      local_7f8 = FUN_1800016d0(local_896);
      local_7f0 = (longlong)local_848 + (longlong)(int)*local_878;
      FUN_180018b30(local_770,local_848,local_7f0,local_7f8);
      local_880 = (ushort *)0x0;
      FUN_180011b90(local_840);
      local_870 = (ushort *)FUN_180011c50(local_770);
      if ((*local_870 == 0) || (local_870[2] != 9)) {
        FUN_180011b60(local_840);
        FUN_1800121e0(local_770);
        FUN_1800138f0(local_608);
      }
      else {
        local_880 = local_870 + 4;
        FUN_180018bd0(local_870,local_840);
        puVar5 = (undefined8 *)FUN_180011740(local_840);
        local_7e8 = (ushort *)*puVar5;
        FUN_1800026e0(local_788,local_828,local_7e8);
        bVar2 = FUN_180011e20(local_788);
        if (bVar2) {
          FUN_1800121e0(local_788);
          FUN_180011b60(local_840);
          FUN_1800121e0(local_770);
          FUN_1800138f0(local_608);
        }
        else {
          local_858 = FUN_180011c50(local_788);
          local_738 = local_858 + 8;
          *(undefined2 *)(local_858 + 6) = 1;
          FUN_180011920(local_840);
          FUN_1800119e0(local_840,&local_858);
          puVar6 = local_618;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          puVar6 = (undefined1 *)FUN_1800016d0(local_618);
          puVar9 = local_880;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar6 = (char)*puVar9;
            puVar9 = (ushort *)((longlong)puVar9 + 1);
            puVar6 = puVar6 + 1;
          }
          FUN_180011b90(local_7a0);
          FUN_180002970(local_618,*(undefined8 *)(local_880 + 8),local_840,(longlong)local_7a0);
          pwVar11 = local_538;
          for (lVar7 = 200; lVar7 != 0; lVar7 = lVar7 + -1) {
            *(undefined1 *)pwVar11 = 0;
            pwVar11 = (wchar_t *)((longlong)pwVar11 + 1);
          }
          local_7e0 = FUN_180002280(local_5c8,(undefined1 *)local_880);
          uVar4 = FUN_180013780(local_7e0);
          FUN_180001220((char *)local_538,100,"%",uVar4);
          FUN_1800138f0(local_5c8);
          basic_string<>(local_5e8,local_538);
          FUN_180012940(param_3,local_5e8);
          FUN_1800133c0(local_5e8);
          if (param_4 != 0) {
            pcVar12 = local_358;
            for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pcVar12 = '\0';
              pcVar12 = pcVar12 + 1;
            }
            local_7d8 = FUN_180002280(local_588,(undefined1 *)local_880);
            local_7d0 = local_7d8;
            local_7c8 = FUN_180018ce0((longlong)local_5a8,local_7d8,".BEK");
            FUN_180013780(local_7c8);
            snprintf(local_358,0x104,"%ws\\%s",param_4);
            FUN_1800138f0(local_5a8);
            FUN_1800138f0(local_588);
            FUN_180013b80(local_728,local_358,0x20,0x40,1);
            local_7c0 = FUN_180011de0(local_7a0);
            local_7b8 = (char *)FUN_180011c50(local_7a0);
            std::basic_ostream<char,struct_std::char_traits<char>_>::write
                      (local_728,local_7b8,local_7c0);
            FUN_180013a90((longlong *)local_728);
            SetFileAttributesA(local_358,7);
            FUN_180002430((longlong)local_728);
          }
          FUN_1800121e0(local_7a0);
          FUN_1800121e0(local_788);
          FUN_180011b60(local_840);
          if (local_878 != (uint *)0x0) {
            free(local_878);
            local_878 = (uint *)0x0;
          }
          FUN_1800121e0(local_770);
          FUN_1800138f0(local_608);
        }
      }
    }
    FUN_180029d20(local_890);
  }
  FUN_1800121e0(local_828);
LAB_180007379:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_8d8);
  return;
}




uint FUN_1800073a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  code *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  code *local_c0;
  longlong local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_30;
  undefined2 local_28 [4];
  undefined4 local_20;
  
  local_30 = 0xfffffffffffffffe;
  local_104 = 0;
  local_120 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  local_130 = (longlong *)0x0;
  Ordinal_8(local_48);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_e8 = *(code **)(*param_2 + 0x30);
    local_100 = FUN_180001a20(&local_e0,0x18003d3c0);
    local_f8 = local_100;
    local_f0 = FUN_180001ad0(local_100);
    (*local_e8)(param_2,local_f0,0,0,&local_120,0);
    FUN_180001ab0(&local_e0);
    if (local_120 != (longlong *)0x0) {
      local_c0 = *(code **)(*local_120 + 0x98);
      local_d8 = FUN_180001990(&local_b8,"DisableKeyProtectors");
      local_d0 = local_d8;
      local_c8 = FUN_180001ad0(local_d8);
      uVar2 = 0;
      local_110 = (*local_c0)(local_120,local_c8,0,&local_128,0);
      FUN_180001ab0(&local_b8);
      if (local_128 != (longlong *)0x0) {
        local_b0 = *(code **)(*local_128 + 0x78);
        (*local_b0)(local_128,0,&local_130);
        if (local_130 == (longlong *)0x0) goto LAB_1800077c9;
        local_28[0] = 0x17;
        local_20 = 1;
        local_a8 = *(code **)(*local_130 + 0x28);
        (*local_a8)(local_130,L"DisableCount",0,local_28,uVar2 & 0xffffffff00000000);
      }
      local_a0 = *(code **)(*param_3 + 0x20);
      local_110 = (*local_a0)(param_3,L"__PATH",0,local_48,0,0);
      if (-1 < local_110) {
        local_118 = (longlong *)0x0;
        local_78 = *(code **)(*param_2 + 0xc0);
        local_88 = local_130;
        local_98 = FUN_180001a20(&local_70,0x18003d438);
        local_90 = local_98;
        local_80 = FUN_180001ad0(local_98);
        iVar1 = (*local_78)(param_2,local_40,local_80,0,0,local_88,&local_118,0);
        local_10c = (uint)(-1 < iVar1);
        FUN_180001ab0(&local_70);
        if ((-1 < iVar1) && (local_118 != (longlong *)0x0)) {
          Ordinal_8(local_60);
          local_68 = *(code **)(*local_118 + 0x20);
          iVar1 = (*local_68)(local_118,L"ReturnValue",0,local_60,0,0);
          if (-1 < iVar1) {
            local_108 = (uint)(local_58 == 0);
            local_104 = local_108;
          }
          Ordinal_9(local_60);
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
  }
LAB_1800077c9:
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))(local_130);
  }
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))(local_128);
  }
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x10))(local_120);
  }
  Ordinal_9(local_48);
  return local_104;
}




int FUN_180007830(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  code *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  code *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  undefined1 local_48 [8];
  int local_40;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_e8 = 1;
  local_e0 = (longlong *)0x0;
  Ordinal_8(local_30);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_b8 = *(code **)(*param_2 + 0x30);
    local_d0 = FUN_180001a20(&local_b0,0x18003d480);
    local_c8 = local_d0;
    local_c0 = FUN_180001ad0(local_d0);
    (*local_b8)(param_2,local_c0,0,0,&local_e0,0);
    FUN_180001ab0(&local_b0);
    if (local_e0 != (longlong *)0x0) {
      local_90 = *(code **)(*local_e0 + 0x98);
      local_a8 = FUN_180001990(&local_88,"EnableKeyProtectors");
      local_a0 = local_a8;
      local_98 = FUN_180001ad0(local_a8);
      local_e8 = (*local_90)(local_e0,local_98,0,0,0);
      FUN_180001ab0(&local_88);
      if (-1 < local_e8) {
        local_80 = *(code **)(*param_3 + 0x20);
        local_e8 = (*local_80)(param_3,L"__PATH",0,local_30,0,0);
        if (-1 < local_e8) {
          local_d8 = (longlong *)0x0;
          local_60 = *(code **)(*param_2 + 0xc0);
          local_78 = FUN_180001a20(&local_58,0x18003d4d8);
          local_70 = local_78;
          local_68 = FUN_180001ad0(local_78);
          local_e8 = (*local_60)(param_2,local_28,local_68,0,0,0,&local_d8,0);
          FUN_180001ab0(&local_58);
          if ((-1 < local_e8) && (local_d8 != (longlong *)0x0)) {
            Ordinal_8(local_48);
            local_50 = *(code **)(*local_d8 + 0x20);
            iVar1 = (*local_50)(local_d8,L"ReturnValue",0,local_48,0,0);
            if (-1 < iVar1) {
              local_e8 = local_40;
            }
            Ordinal_9(local_48);
            (**(code **)(*local_d8 + 0x10))(local_d8);
          }
        }
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
  }
  Ordinal_9(local_30);
  return local_e8;
}




int FUN_180007ba0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  undefined4 local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 local_150;
  code *local_148;
  longlong local_140;
  code *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 local_120;
  code *local_118;
  longlong local_110;
  code *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  code *local_e8;
  longlong local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  code *local_a0;
  longlong local_98;
  code *local_90;
  short local_88 [4];
  undefined4 local_80;
  undefined2 local_70 [4];
  undefined4 local_68;
  undefined2 local_58 [4];
  undefined4 local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_28 [8];
  int local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  iVar4 = -1;
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_178 = (longlong *)0x0;
    local_148 = *(code **)(*param_2 + 0x30);
    local_160 = FUN_180001a20(&local_140,0x18003d518);
    local_158 = local_160;
    local_150 = FUN_180001ad0(local_160);
    (*local_148)(param_2,local_150,0,0,&local_178,0);
    FUN_180001ab0(&local_140);
    if (local_178 != (longlong *)0x0) {
      Ordinal_8(local_40);
      local_138 = *(code **)(*param_3 + 0x20);
      iVar4 = (*local_138)(param_3,L"__PATH",0,local_40,0,0);
      if (-1 < iVar4) {
        local_180 = (longlong *)0x0;
        local_118 = *(code **)(*param_2 + 0xc0);
        local_130 = FUN_180001a20(&local_110,0x18003d558);
        local_128 = local_130;
        local_120 = FUN_180001ad0(local_130);
        uVar3 = 0;
        pplVar2 = &local_180;
        iVar4 = (*local_118)(param_2,local_38,local_120,0,0,0,pplVar2,0);
        FUN_180001ab0(&local_110);
        local_168 = 0;
        if ((-1 < iVar4) && (uVar5 = 0xffffffff, local_180 != (longlong *)0x0)) {
          Ordinal_8(local_88);
          local_108 = *(code **)(*local_180 + 0x20);
          (*local_108)(local_180,L"EncryptionMethod",0,local_88,0,0,pplVar2,uVar3,uVar5);
          if (local_88[0] != 0) {
            local_168 = local_80;
          }
          Ordinal_9(local_88);
        }
        local_170 = (longlong *)0x0;
        local_e8 = *(code **)(*local_178 + 0x98);
        local_100 = FUN_180001990(&local_e0,"Encrypt");
        local_f8 = local_100;
        local_f0 = FUN_180001ad0(local_100);
        uVar1 = 0;
        iVar4 = (*local_e8)(local_178,local_f0,0,&local_170,0);
        FUN_180001ab0(&local_e0);
        if (-1 < iVar4) {
          local_190 = (longlong *)0x0;
          local_d8 = *(code **)(*local_170 + 0x78);
          iVar4 = (*local_d8)(local_170,0,&local_190);
          if (iVar4 < 0) {
            return iVar4;
          }
          Ordinal_8(local_70);
          local_70[0] = 0x17;
          local_68 = local_168;
          local_d0 = *(code **)(*local_190 + 0x28);
          uVar1 = uVar1 & 0xffffffff00000000;
          (*local_d0)(local_190,L"KeyProtectorType",0,local_70,uVar1);
          Ordinal_9(local_70);
          Ordinal_8(local_58);
          local_58[0] = 0x17;
          local_50 = 0;
          local_c8 = *(code **)(*local_190 + 0x28);
          (*local_c8)(local_190,L"EncryptionFlags",0,local_58,uVar1 & 0xffffffff00000000);
          Ordinal_9(local_58);
          local_188 = (longlong *)0x0;
          local_a0 = *(code **)(*param_2 + 0xc0);
          local_b0 = local_190;
          local_c0 = FUN_180001a20(&local_98,0x18003d5f8);
          local_b8 = local_c0;
          local_a8 = FUN_180001ad0(local_c0);
          iVar4 = (*local_a0)(param_2,local_38,local_a8,0,0,local_b0,&local_188,0);
          FUN_180001ab0(&local_98);
          if ((-1 < iVar4) && (iVar4 = -1, local_188 != (longlong *)0x0)) {
            Ordinal_8(local_28);
            local_90 = *(code **)(*local_188 + 0x20);
            iVar4 = (*local_90)(local_188,L"ReturnValue",0,local_28,0,0);
            if (-1 < iVar4) {
              CLogWriter::Log("[BitlockerHelp]: TurnOn hr=0x%x");
              iVar4 = local_20;
            }
            Ordinal_9(local_28);
          }
          if (local_188 != (longlong *)0x0) {
            (**(code **)(*local_188 + 0x10))(local_188);
            local_188 = (longlong *)0x0;
          }
          if (local_190 != (longlong *)0x0) {
            (**(code **)(*local_190 + 0x10))(local_190);
            local_190 = (longlong *)0x0;
          }
        }
        if (local_170 != (longlong *)0x0) {
          (**(code **)(*local_170 + 0x10))(local_170);
          local_170 = (longlong *)0x0;
        }
        if (local_180 != (longlong *)0x0) {
          (**(code **)(*local_180 + 0x10))(local_180);
          local_180 = (longlong *)0x0;
        }
        if (local_178 != (longlong *)0x0) {
          (**(code **)(*local_178 + 0x10))(local_178);
          local_178 = (longlong *)0x0;
        }
        Ordinal_9(local_40);
      }
    }
  }
  return iVar4;
}




int FUN_180008250(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  code *local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  code *local_48;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_b8 = -1;
  local_a8 = (longlong *)0x0;
  Ordinal_8(local_28);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_88 = *(code **)(*param_2 + 0x30);
    local_a0 = FUN_180001a20(&local_80,0x18003d640);
    local_98 = local_a0;
    local_90 = FUN_180001ad0(local_a0);
    (*local_88)(param_2,local_90,0,0,&local_a8,0);
    FUN_180001ab0(&local_80);
    if (local_a8 != (longlong *)0x0) {
      local_78 = *(code **)(*param_3 + 0x20);
      local_b8 = (*local_78)(param_3,L"__PATH",0,local_28,0,0);
      if (-1 < local_b8) {
        local_b0 = (longlong *)0x0;
        local_58 = *(code **)(*param_2 + 0xc0);
        local_70 = FUN_180001a20(&local_50,0x18003d680);
        local_68 = local_70;
        local_60 = FUN_180001ad0(local_70);
        local_b8 = (*local_58)(param_2,local_20,local_60,0,0,0,&local_b0,0);
        FUN_180001ab0(&local_50);
        if ((-1 < local_b8) && (local_b8 = -1, local_b0 != (longlong *)0x0)) {
          Ordinal_8(local_40);
          local_48 = *(code **)(*local_b0 + 0x20);
          local_b8 = (*local_48)(local_b0,L"ReturnValue",0,local_40,0,0);
          if (-1 < local_b8) {
            local_b8 = local_38;
            CLogWriter::Log("[BitlockerHelp]: TurnOff hr=0x%x");
          }
          Ordinal_9(local_40);
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
  }
  Ordinal_9(local_28);
  return local_b8;
}




int FUN_180008540(undefined8 param_1,longlong *param_2,longlong *param_3,uint *param_4,
                 float *param_5,uint *param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong *local_170;
  uint local_168;
  longlong *local_160;
  uint local_158;
  int local_154;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  uint local_13c;
  short local_138 [4];
  uint local_130;
  int local_120;
  longlong *local_118;
  undefined8 local_110;
  code *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  code *local_e0;
  longlong local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  code *local_98;
  longlong local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined2 local_20 [4];
  undefined4 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_154 = 0;
  local_148 = (longlong *)0x0;
  local_150 = (longlong *)0x0;
  local_160 = (longlong *)0x0;
  Ordinal_8(local_40);
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) goto LAB_180008bcf;
  local_158 = 1;
  local_108 = *(code **)(*param_2 + 0x30);
  local_118 = FUN_180001a20(&local_100,0x18003d6d0);
  local_60 = local_118;
  local_110 = FUN_180001ad0(local_118);
  (*local_108)(param_2,local_110,0,0,&local_148,0);
  FUN_180001ab0(&local_100);
  if (local_148 == (longlong *)0x0) goto LAB_180008bcf;
  local_e0 = *(code **)(*local_148 + 0x98);
  local_f8 = FUN_180001990(&local_d8,"GetConversionStatus");
  local_f0 = local_f8;
  local_e8 = FUN_180001ad0(local_f8);
  uVar2 = 0;
  local_140 = (*local_e0)(local_148,local_e8,0,&local_150,0);
  FUN_180001ab0(&local_d8);
  if (local_150 != (longlong *)0x0) {
    local_d0 = *(code **)(*local_150 + 0x78);
    (*local_d0)(local_150,0,&local_160);
    if (local_160 != (longlong *)0x0) {
      local_20[0] = 3;
      local_18 = 4;
      local_c8 = *(code **)(*local_160 + 0x28);
      local_120 = (*local_c8)(local_160,L"PrecisionFactor",0,local_20,uVar2 & 0xffffffff00000000);
      if (-1 < local_120) {
        local_158 = 10000;
      }
    }
  }
  local_c0 = *(code **)(*param_3 + 0x20);
  local_140 = (*local_c0)(param_3,L"__PATH",0,local_40,0,0);
  if (local_140 < 0) goto LAB_180008bcf;
  local_170 = (longlong *)0x0;
  local_98 = *(code **)(*param_2 + 0xc0);
  local_a8 = local_160;
  local_b8 = FUN_180001a20(&local_90,0x18003d748);
  local_b0 = local_b8;
  local_a0 = FUN_180001ad0(local_b8);
  iVar1 = (*local_98)(param_2,local_38,local_a0,0,0,local_a8,&local_170,0);
  local_13c = (uint)(iVar1 < 0);
  FUN_180001ab0(&local_90);
  if ((iVar1 < 0) || (local_170 == (longlong *)0x0)) goto LAB_180008bcf;
  Ordinal_8(local_58);
  local_88 = *(code **)(*local_170 + 0x20);
  iVar1 = (*local_88)(local_170,L"ReturnValue",0,local_58,0,0);
  if ((-1 < iVar1) && (local_50 == 0)) {
    local_154 = 1;
    Ordinal_8(local_138);
    local_80 = *(code **)(*local_170 + 0x20);
    (*local_80)(local_170,L"ConversionStatus",0,local_138,0,0);
    if (local_138[0] != 0) {
      *param_4 = local_130;
    }
    Ordinal_9(local_138);
    local_168 = *param_4;
    if (local_168 == 2) {
LAB_180008a13:
      local_78 = *(code **)(*local_170 + 0x20);
      (*local_78)(local_170,L"EncryptionPercentage",0,local_138,0,0);
      if (local_138[0] != 0) {
        *param_5 = (float)local_130 / (float)local_158;
      }
      Ordinal_9(local_138);
    }
    else if (local_168 == 3) {
LAB_180008a9b:
      local_70 = *(code **)(*local_170 + 0x20);
      (*local_70)(local_170,L"EncryptionPercentage",0,local_138,0,0);
      if (local_138[0] != 0) {
        *param_5 = 100.0 - (float)local_130 / (float)local_158;
      }
      Ordinal_9(local_138);
    }
    else {
      if (local_168 == 4) goto LAB_180008a13;
      if (local_168 == 5) goto LAB_180008a9b;
    }
    if (param_6 != (uint *)0x0) {
      local_68 = *(code **)(*local_170 + 0x20);
      (*local_68)(local_170,L"EncryptionFlags",0,local_138,0,0);
      if (local_138[0] != 0) {
        *param_6 = local_130;
      }
      Ordinal_9(local_138);
    }
  }
  Ordinal_9(local_58);
  (**(code **)(*local_170 + 0x10))(local_170);
LAB_180008bcf:
  if (local_160 != (longlong *)0x0) {
    (**(code **)(*local_160 + 0x10))(local_160);
  }
  if (local_150 != (longlong *)0x0) {
    (**(code **)(*local_150 + 0x10))(local_150);
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))(local_148);
  }
  Ordinal_9(local_40);
  if (local_154 == 0) {
    CLogWriter::Log("[BitlockerHelp]: GetStatus failed!");
  }
  return local_154;
}




int FUN_180008c50(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  code *local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  code *local_48;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_b8 = -1;
  local_a8 = (longlong *)0x0;
  Ordinal_8(local_28);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_88 = *(code **)(*param_2 + 0x30);
    local_a0 = FUN_180001a20(&local_80,0x18003d858);
    local_98 = local_a0;
    local_90 = FUN_180001ad0(local_a0);
    (*local_88)(param_2,local_90,0,0,&local_a8,0);
    FUN_180001ab0(&local_80);
    if (local_a8 != (longlong *)0x0) {
      local_78 = *(code **)(*param_3 + 0x20);
      local_b8 = (*local_78)(param_3,L"__PATH",0,local_28,0,0);
      if (-1 < local_b8) {
        local_b0 = (longlong *)0x0;
        local_58 = *(code **)(*param_2 + 0xc0);
        local_70 = FUN_180001a20(&local_50,0x18003d898);
        local_68 = local_70;
        local_60 = FUN_180001ad0(local_70);
        local_b8 = (*local_58)(param_2,local_20,local_60,0,0,0,&local_b0,0);
        FUN_180001ab0(&local_50);
        if ((-1 < local_b8) && (local_b8 = -1, local_b0 != (longlong *)0x0)) {
          Ordinal_8(local_40);
          local_48 = *(code **)(*local_b0 + 0x20);
          local_b8 = (*local_48)(local_b0,L"ReturnValue",0,local_40,0,0);
          if (-1 < local_b8) {
            local_b8 = local_38;
          }
          Ordinal_9(local_40);
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
  }
  Ordinal_9(local_28);
  return local_b8;
}




int FUN_180008f30(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  code *local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  code *local_48;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_b8 = -1;
  local_a8 = (longlong *)0x0;
  Ordinal_8(local_28);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_88 = *(code **)(*param_2 + 0x30);
    local_a0 = FUN_180001a20(&local_80,0x18003d8d0);
    local_98 = local_a0;
    local_90 = FUN_180001ad0(local_a0);
    (*local_88)(param_2,local_90,0,0,&local_a8,0);
    FUN_180001ab0(&local_80);
    if (local_a8 != (longlong *)0x0) {
      local_78 = *(code **)(*param_3 + 0x20);
      local_b8 = (*local_78)(param_3,L"__PATH",0,local_28,0,0);
      if (-1 < local_b8) {
        local_b0 = (longlong *)0x0;
        local_58 = *(code **)(*param_2 + 0xc0);
        local_70 = FUN_180001a20(&local_50,0x18003d910);
        local_68 = local_70;
        local_60 = FUN_180001ad0(local_70);
        local_b8 = (*local_58)(param_2,local_20,local_60,0,0,0,&local_b0,0);
        FUN_180001ab0(&local_50);
        if ((-1 < local_b8) && (local_b8 = -1, local_b0 != (longlong *)0x0)) {
          Ordinal_8(local_40);
          local_48 = *(code **)(*local_b0 + 0x20);
          local_b8 = (*local_48)(local_b0,L"ReturnValue",0,local_40,0,0);
          if (-1 < local_b8) {
            local_b8 = local_38;
          }
          Ordinal_9(local_40);
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
  }
  Ordinal_9(local_28);
  return local_b8;
}




int FUN_180009210(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *local_e0;
  int local_d8;
  uint local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  code *local_b0;
  longlong local_a8;
  code *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  code *local_80;
  longlong local_78;
  code *local_70;
  code *local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined1 local_48 [8];
  int local_40;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_d8 = 0;
  local_d0 = (longlong *)0x0;
  Ordinal_8(local_30);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_b0 = *(code **)(*param_2 + 0x30);
    local_c8 = FUN_180001a20(&local_a8,0x18003d950);
    local_c0 = local_c8;
    local_b8 = FUN_180001ad0(local_c8);
    (*local_b0)(param_2,local_b8,0,0,&local_d0,0);
    FUN_180001ab0(&local_a8);
    if (local_d0 != (longlong *)0x0) {
      local_a0 = *(code **)(*param_3 + 0x20);
      iVar1 = (*local_a0)(param_3,L"__PATH",0,local_30,0,0);
      if (-1 < iVar1) {
        local_e0 = (longlong *)0x0;
        local_80 = *(code **)(*param_2 + 0xc0);
        local_98 = FUN_180001a20(&local_78,0x18003d990);
        local_90 = local_98;
        local_88 = FUN_180001ad0(local_98);
        iVar1 = (*local_80)(param_2,local_28,local_88,0,0,0,&local_e0,0);
        local_d4 = (uint)(iVar1 < 0);
        FUN_180001ab0(&local_78);
        if ((iVar1 >= 0) && (local_e0 != (longlong *)0x0)) {
          Ordinal_8(local_48);
          local_70 = *(code **)(*local_e0 + 0x20);
          iVar1 = (*local_70)(local_e0,L"ReturnValue",0,local_48,0,0);
          if ((-1 < iVar1) && (local_40 == 0)) {
            local_d8 = 1;
            Ordinal_8(local_60);
            local_68 = *(code **)(*local_e0 + 0x20);
            (*local_68)(local_e0,L"LockStatus",0,local_60,0,0);
            *param_4 = local_58;
            Ordinal_9(local_60);
          }
          Ordinal_9(local_48);
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
  }
  Ordinal_9(local_30);
  if (local_d8 == 0) {
    CLogWriter::Log("[BitlockerHelp]: GetLockStatus failed!");
  }
  return local_d8;
}




undefined4 FUN_180009590(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *local_e0;
  uint local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  int local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  code *local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_d4 = 0;
  *param_4 = 0;
  local_d0 = (longlong *)0x0;
  Ordinal_8(local_28);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_a8 = *(code **)(*param_2 + 0x30);
    local_c0 = FUN_180001a20(&local_a0,0x18003da08);
    local_b8 = local_c0;
    local_b0 = FUN_180001ad0(local_c0);
    (*local_a8)(param_2,local_b0,0,0,&local_d0,0);
    FUN_180001ab0(&local_a0);
    if (local_d0 != (longlong *)0x0) {
      local_98 = *(code **)(*param_3 + 0x20);
      local_c8 = (*local_98)(param_3,L"__PATH",0,local_28,0,0);
      if (-1 < local_c8) {
        local_e0 = (longlong *)0x0;
        local_78 = *(code **)(*param_2 + 0xc0);
        local_90 = FUN_180001a20(&local_70,0x18003da48);
        local_88 = local_90;
        local_80 = FUN_180001ad0(local_90);
        iVar1 = (*local_78)(param_2,local_20,local_80,0,0,0,&local_e0,0);
        local_d8 = (uint)(iVar1 < 0);
        FUN_180001ab0(&local_70);
        if ((iVar1 >= 0) && (local_e0 != (longlong *)0x0)) {
          Ordinal_8(local_40);
          local_68 = *(code **)(*local_e0 + 0x20);
          iVar1 = (*local_68)(local_e0,L"ReturnValue",0,local_40,0,0);
          if ((-1 < iVar1) && (local_38 == 0)) {
            local_d4 = 1;
            Ordinal_8(local_58);
            local_60 = *(code **)(*local_e0 + 0x20);
            (*local_60)(local_e0,L"IsAutoUnlockEnabled",0,local_58,0,0);
            *param_4 = local_50;
            Ordinal_9(local_58);
          }
          Ordinal_9(local_40);
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
  }
  Ordinal_9(local_28);
  return local_d4;
}




undefined4
FUN_180009920(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
             basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
             *param_5)

{
  int iVar1;
  longlong *local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  int local_d8;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  code *local_a0;
  longlong local_98;
  code *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  undefined1 local_48 [8];
  int local_40;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_e4 = 0;
  *param_4 = 0;
  FUN_180013300(param_5,L"");
  local_e0 = (longlong *)0x0;
  Ordinal_8(local_30);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_a0 = *(code **)(*param_2 + 0x30);
    local_b8 = FUN_180001a20(&local_98,0x18003dab0);
    local_b0 = local_b8;
    local_a8 = FUN_180001ad0(local_b8);
    (*local_a0)(param_2,local_a8,0,0,&local_e0,0);
    FUN_180001ab0(&local_98);
    if (local_e0 != (longlong *)0x0) {
      local_90 = *(code **)(*param_3 + 0x20);
      local_d8 = (*local_90)(param_3,L"__PATH",0,local_30,0,0);
      if (-1 < local_d8) {
        local_f0 = (longlong *)0x0;
        local_70 = *(code **)(*param_2 + 0xc0);
        local_88 = FUN_180001a20(&local_68,0x18003daf0);
        local_80 = local_88;
        local_78 = FUN_180001ad0(local_88);
        iVar1 = (*local_70)(param_2,local_28,local_78,0,0,0,&local_f0,0);
        local_e8 = (uint)(iVar1 < 0);
        FUN_180001ab0(&local_68);
        if ((iVar1 >= 0) && (local_f0 != (longlong *)0x0)) {
          Ordinal_8(local_48);
          local_60 = *(code **)(*local_f0 + 0x20);
          iVar1 = (*local_60)(local_f0,L"ReturnValue",0,local_48,0,0);
          if ((-1 < iVar1) && (local_40 == 0)) {
            local_e4 = 1;
            Ordinal_8(local_d0);
            local_58 = *(code **)(*local_f0 + 0x20);
            (*local_58)(local_f0,L"IsAutoUnlockEnabled",0,local_d0,0,0);
            *param_4 = local_c8;
            Ordinal_9(local_d0);
            Ordinal_8(local_d0);
            local_50 = *(code **)(*local_f0 + 0x20);
            (*local_50)(local_f0,L"VolumeKeyProtectorID",0,local_d0,0,0);
            FUN_180013300(param_5,(wchar_t *)CONCAT44(uStack_c4,local_c8));
            Ordinal_9(local_d0);
          }
          Ordinal_9(local_48);
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
  }
  Ordinal_9(local_30);
  return local_e4;
}




undefined4 FUN_180009d30(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *local_c0;
  uint local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  int local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  code *local_88;
  longlong local_80;
  code *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  code *local_48;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_b4 = 0;
  local_b0 = (longlong *)0x0;
  Ordinal_8(local_28);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_88 = *(code **)(*param_2 + 0x30);
    local_a0 = FUN_180001a20(&local_80,0x18003db88);
    local_98 = local_a0;
    local_90 = FUN_180001ad0(local_a0);
    (*local_88)(param_2,local_90,0,0,&local_b0,0);
    FUN_180001ab0(&local_80);
    if (local_b0 != (longlong *)0x0) {
      local_78 = *(code **)(*param_3 + 0x20);
      local_a8 = (*local_78)(param_3,L"__PATH",0,local_28,0,0);
      if (-1 < local_a8) {
        local_c0 = (longlong *)0x0;
        local_58 = *(code **)(*param_2 + 0xc0);
        local_70 = FUN_180001a20(&local_50,0x18003dbc8);
        local_68 = local_70;
        local_60 = FUN_180001ad0(local_70);
        iVar1 = (*local_58)(param_2,local_20,local_60,0,0,0,&local_c0,0);
        local_b8 = (uint)(iVar1 < 0);
        FUN_180001ab0(&local_50);
        if ((iVar1 >= 0) && (local_c0 != (longlong *)0x0)) {
          Ordinal_8(local_40);
          local_48 = *(code **)(*local_c0 + 0x20);
          iVar1 = (*local_48)(local_c0,L"ReturnValue",0,local_40,0,0);
          if ((-1 < iVar1) && (local_38 == 0)) {
            local_b4 = 1;
          }
          Ordinal_9(local_40);
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))(local_b0);
  }
  Ordinal_9(local_28);
  return local_b4;
}




undefined4 FUN_18000a030(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *local_e0;
  uint local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  int local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  code *local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined1 local_40 [8];
  int local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_d4 = 0;
  *param_4 = 0;
  local_d0 = (longlong *)0x0;
  Ordinal_8(local_28);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_a8 = *(code **)(*param_2 + 0x30);
    local_c0 = FUN_180001a20(&local_a0,0x18003dc10);
    local_b8 = local_c0;
    local_b0 = FUN_180001ad0(local_c0);
    (*local_a8)(param_2,local_b0,0,0,&local_d0,0);
    FUN_180001ab0(&local_a0);
    if (local_d0 != (longlong *)0x0) {
      local_98 = *(code **)(*param_3 + 0x20);
      local_c8 = (*local_98)(param_3,L"__PATH",0,local_28,0,0);
      if (-1 < local_c8) {
        local_e0 = (longlong *)0x0;
        local_78 = *(code **)(*param_2 + 0xc0);
        local_90 = FUN_180001a20(&local_70,0x18003dc50);
        local_88 = local_90;
        local_80 = FUN_180001ad0(local_90);
        iVar1 = (*local_78)(param_2,local_20,local_80,0,0,0,&local_e0,0);
        local_d8 = (uint)(iVar1 < 0);
        FUN_180001ab0(&local_70);
        if ((iVar1 >= 0) && (local_e0 != (longlong *)0x0)) {
          Ordinal_8(local_40);
          local_68 = *(code **)(*local_e0 + 0x20);
          iVar1 = (*local_68)(local_e0,L"ReturnValue",0,local_40,0,0);
          if ((-1 < iVar1) && (local_38 == 0)) {
            local_d4 = 1;
            Ordinal_8(local_58);
            local_60 = *(code **)(*local_e0 + 0x20);
            (*local_60)(local_e0,L"IsAutoUnlockKeyStored",0,local_58,0,0);
            *param_4 = local_50;
            Ordinal_9(local_58);
          }
          Ordinal_9(local_40);
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
  }
  Ordinal_9(local_28);
  return local_d4;
}




int FUN_18000a3c0(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  int local_18;
  longlong *local_10 [2];
  
  local_18 = -1;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      local_18 = FUN_180003b20(param_1,(longlong *)*param_1,local_10[0]);
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_18;
}




undefined4 FUN_18000a460(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  longlong *local_10 [2];
  
  local_14 = 0xffffffff;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      uVar2 = FUN_180003f90(param_1,(longlong *)*param_1,local_10[0],param_4);
      if (uVar2 == 0) {
        local_18 = 0xffffffff;
      }
      else {
        local_18 = 0;
      }
      local_14 = local_18;
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_14;
}




undefined4 FUN_18000a530(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  longlong *local_10 [2];
  
  local_14 = 0xffffffff;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      uVar2 = FUN_1800073a0(param_1,(longlong *)*param_1,local_10[0]);
      if (uVar2 == 0) {
        local_18 = 0xffffffff;
      }
      else {
        local_18 = 0;
      }
      local_14 = local_18;
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_14;
}




int FUN_18000a5f0(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  int local_18;
  longlong *local_10 [2];
  
  local_18 = -1;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      local_18 = FUN_180007830(param_1,(longlong *)*param_1,local_10[0]);
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_18;
}




undefined4 FUN_18000a690(longlong *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  longlong *local_10 [2];
  
  local_14 = 0xffffffff;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      uVar2 = FUN_180004460(param_1,(longlong *)*param_1,local_10[0],param_4);
      if (uVar2 == 0) {
        local_18 = 0xffffffff;
      }
      else {
        local_18 = 0;
      }
      local_14 = local_18;
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_14;
}




void FUN_18000a760(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined1 auStack_78 [32];
  int local_58 [2];
  longlong *local_50;
  undefined4 local_48;
  undefined8 local_40;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_38 [32];
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_78;
  local_48 = 0xffffffff;
  local_50 = (longlong *)0x0;
  if (((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_50), iVar1 != 0)) &&
     (local_50 != (longlong *)0x0)) {
    basic_string<>((longlong)local_38);
    iVar1 = FUN_180003280(param_1,local_50,local_38);
    if (iVar1 == 0) {
      FUN_1800133c0(local_38);
    }
    else {
      lVar2 = FUN_180012e90(local_38);
      if (lVar2 != 0) {
        lVar2 = FUN_180012e90(local_38);
        psVar3 = (short *)FUN_180013020(local_38,lVar2 + -1);
        if (*psVar3 != 0x5c) {
          FID_conflict_push_back(local_38,0x5c);
        }
      }
      local_58[0] = 1;
      iVar1 = FUN_180009210(param_1,(longlong *)*param_1,local_50,local_58);
      if (iVar1 == 0) {
        FUN_1800133c0(local_38);
      }
      else {
        if (local_58[0] != 0) {
          iVar1 = FUN_18000cc00(param_1,local_38);
          if (iVar1 == 0) {
            FUN_1800133c0(local_38);
            goto LAB_18000a91c;
          }
          local_48 = 0;
        }
        iVar1 = FUN_180009210(param_1,(longlong *)*param_1,local_50,local_58);
        if (iVar1 == 0) {
          FUN_1800133c0(local_38);
        }
        else {
          if (local_58[0] == 0) {
            local_48 = 0;
          }
          FUN_1800133c0(local_38);
        }
      }
    }
  }
LAB_18000a91c:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))(local_50);
    local_50 = (longlong *)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}




void FUN_18000a960(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  int local_78;
  longlong *local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_98;
  local_78 = -1;
  if (*param_1 != 0) {
    local_70 = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,&local_70);
    if ((iVar1 != 0) && (local_70 != (longlong *)0x0)) {
      basic_string<>((longlong)local_30);
      iVar1 = FUN_180003280(param_1,local_70,local_30);
      if (iVar1 == 0) {
        FUN_1800133c0(local_30);
      }
      else {
        uVar2 = FUN_1800073a0(param_1,(longlong *)*param_1,local_70);
        if (uVar2 == 0) {
          FUN_1800133c0(local_30);
        }
        else {
          FUN_180011b90(local_48);
          local_60 = FUN_180012eb0(local_30);
          local_58 = FUN_180012eb0(local_30);
          iVar1 = FUN_180006b40(param_1,local_58,local_48,local_60);
          if (iVar1 == 0) {
            local_68 = 0xffffffff;
          }
          else {
            local_68 = 0;
          }
          local_78 = local_68;
          local_78 = FUN_180008250(param_1,(longlong *)*param_1,local_70);
          if (local_78 == -0x7fceffd7) {
            lVar3 = FUN_180012eb0(local_30);
            FUN_18000ba90(param_1,lVar3);
            FUN_180009d30(param_1,(longlong *)*param_1,local_70);
            local_78 = FUN_180008250(param_1,(longlong *)*param_1,local_70);
          }
          (**(code **)(*local_70 + 0x10))(local_70);
          local_70 = (longlong *)0x0;
          FUN_180012c40(local_48);
          FUN_1800133c0(local_30);
        }
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_98);
  return;
}




void FUN_18000ab90(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  longlong *local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  float local_44 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_38 [32];
  ulonglong local_18;
  
  local_44[1] = -NAN;
  local_44[2] = -NAN;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_98;
  local_60 = (longlong *)0x0;
  if ((((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_60), iVar1 != 0))
      && (local_60 != (longlong *)0x0)) &&
     (iVar1 = FUN_180008540(param_1,(longlong *)*param_1,local_60,&local_4c,local_44,&local_48),
     iVar1 != 0)) {
    local_58 = local_4c;
    if (local_4c == 0) {
      basic_string<>((longlong)local_38);
      iVar1 = FUN_180003280(param_1,local_60,local_38);
      if (iVar1 == 0) {
        FUN_1800133c0(local_38);
      }
      else {
        iVar1 = FUN_18000cf00(param_1,local_38);
        if (iVar1 == 0) {
          local_54 = 0xffffffff;
        }
        else {
          local_54 = 0;
        }
        FUN_1800133c0(local_38);
      }
    }
    else if (((local_4c == 3) || (local_4c == 5)) &&
            (iVar1 = FUN_180007ba0(param_1,(longlong *)*param_1,local_60), -1 < iVar1)) {
      iVar1 = FUN_180007830(param_1,(longlong *)*param_1,local_60);
      if (iVar1 == 0) {
        local_50 = 0xffffffff;
      }
      else {
        local_50 = 0;
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))(local_60);
    local_60 = (longlong *)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




int FUN_18000ada0(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  int local_18;
  longlong *local_10 [2];
  
  local_18 = -1;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      local_18 = FUN_180008c50(param_1,(longlong *)*param_1,local_10[0]);
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_18;
}




int FUN_18000ae40(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  int local_18;
  longlong *local_10 [2];
  
  local_18 = -1;
  if (*param_1 != 0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = FUN_180003900(param_1,param_2,param_3,local_10);
    if ((iVar1 != 0) && (local_10[0] != (longlong *)0x0)) {
      local_18 = FUN_180008f30(param_1,(longlong *)*param_1,local_10[0]);
      (**(code **)(*local_10[0] + 0x10))(local_10[0]);
    }
  }
  return local_18;
}




void FUN_18000aee0(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_68;
  local_3c = 0xffffffff;
  local_48 = (longlong *)0x0;
  if (((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_48), iVar1 != 0)) &&
     (local_48 != (longlong *)0x0)) {
    basic_string<>((longlong)local_30);
    iVar1 = FUN_180003280(param_1,local_48,local_30);
    if (iVar1 == 0) {
      FUN_1800133c0(local_30);
    }
    else {
      iVar1 = FUN_18000d270(param_1,local_30);
      if (iVar1 == 0) {
        local_40 = 0xffffffff;
      }
      else {
        local_40 = 0;
      }
      local_3c = local_40;
      FUN_1800133c0(local_30);
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))(local_48);
    local_48 = (longlong *)0x0;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




undefined4
FUN_18000b000(longlong *param_1,int param_2,longlong param_3,int *param_4,uint *param_5,
             float *param_6,longlong *param_7,uint *param_8)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  longlong local_18 [3];
  
  local_28 = 0xffffffff;
  local_20 = (longlong *)0x0;
  if (((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_20), iVar1 != 0)) &&
     (local_20 != (longlong *)0x0)) {
    local_24 = 0xffffffff;
    local_18[0] = -1;
    iVar1 = FUN_180003430(param_1,local_20,&local_24,local_18,param_7);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_180009210(param_1,(longlong *)*param_1,local_20,param_4), iVar1 != 0)) {
      if (*param_4 == 0) {
        iVar1 = FUN_180008540(param_1,(longlong *)*param_1,local_20,param_5,param_6,param_8);
        if (iVar1 != 0) {
          local_28 = 0;
        }
      }
      else {
        *param_5 = 1;
        *param_6 = 0.0;
        local_28 = 0;
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))(local_20);
  }
  return local_28;
}




void FUN_18000b170(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStackY_e8 [32];
  longlong local_b8;
  int local_b0;
  uint local_ac;
  undefined8 local_a8 [3];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  longlong local_30;
  int local_28;
  undefined4 local_24;
  uint local_20;
  float local_1c;
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_50 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_e8;
  if (*param_1 != 0) {
    FUN_180011b90(local_a8);
    bVar1 = FUN_180003750(param_1,(longlong *)*param_1,local_a8);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_180011b60(local_a8);
    }
    else {
      FUN_180011820(local_a8,&local_b8);
      while( true ) {
        plVar3 = FUN_1800124b0(local_a8,&local_48);
        bVar1 = FID_conflict_operator__(&local_b8,plVar3);
        if (!bVar1) break;
        puVar6 = local_40;
        for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((longlong)puVar6 + 1);
        }
        puVar4 = (undefined8 *)FUN_180011700(&local_b8);
        local_90 = (longlong *)*puVar4;
        local_88 = (longlong *)*param_1;
        iVar2 = FUN_180009210(param_1,local_88,local_90,&local_28);
        if (iVar2 != 0) {
          local_b0 = local_28;
          if (local_28 == 0) {
            puVar4 = (undefined8 *)FUN_180011700(&local_b8);
            local_80 = (longlong *)*puVar4;
            local_78 = (longlong *)*param_1;
            FUN_180009590(param_1,local_78,local_80,&local_24);
            puVar4 = (undefined8 *)FUN_180011700(&local_b8);
            local_70 = (longlong *)*puVar4;
            local_68 = (longlong *)*param_1;
            FUN_18000a030(param_1,local_68,local_70,local_18);
            puVar4 = (undefined8 *)FUN_180011700(&local_b8);
            local_60 = (longlong *)*puVar4;
            local_58 = (longlong *)*param_1;
            iVar2 = FUN_180008540(param_1,local_58,local_60,&local_20,&local_1c,(uint *)0x0);
            if (iVar2 != 0) {
              local_b0 = 1;
            }
          }
          if (local_b0 != 0) {
            puVar4 = (undefined8 *)FUN_180011700(&local_b8);
            iVar2 = FUN_180003430(param_1,(longlong *)*puVar4,local_40,&local_38,&local_30);
            if (iVar2 != 0) {
              FUN_180012750(param_2,local_40);
            }
          }
        }
        FUN_180011720(&local_b8);
      }
      FUN_180003aa0(param_1,local_a8);
      FUN_180011b60(local_a8);
    }
  }
  bVar1 = FUN_180011e20(param_2);
  local_ac = (uint)!bVar1;
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_e8);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000b542) */
/* WARNING: Removing unreachable block (ram,0x00018000b59a) */
/* WARNING: Removing unreachable block (ram,0x00018000b60d) */
/* WARNING: Removing unreachable block (ram,0x00018000b625) */
/* WARNING: Removing unreachable block (ram,0x00018000b6e0) */
/* WARNING: Removing unreachable block (ram,0x00018000b63a) */
/* WARNING: Removing unreachable block (ram,0x00018000b6bc) */
/* WARNING: Removing unreachable block (ram,0x00018000b6b7) */
/* WARNING: Removing unreachable block (ram,0x00018000b618) */
/* WARNING: Removing unreachable block (ram,0x00018000b5fe) */
/* WARNING: Removing unreachable block (ram,0x00018000b595) */

void FUN_18000b470(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 auStack_188 [48];
  longlong local_158;
  uint local_14c;
  undefined8 local_128 [10];
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_a8 [32];
  int local_88 [21];
  int local_34;
  ulonglong local_18;
  
  local_b8 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_188;
  if (*param_1 != 0) {
    FUN_180011b90(local_128);
    bVar1 = FUN_180003750(param_1,(longlong *)*param_1,local_128);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_180011b60(local_128);
    }
    else {
      FUN_180011820(local_128,&local_158);
      while( true ) {
        plVar3 = FUN_1800124b0(local_128,&local_b0);
        bVar1 = FID_conflict_operator__(&local_158,plVar3);
        if (!bVar1) break;
        basic_string<>((longlong)local_a8);
        puVar4 = (undefined8 *)FUN_180011700(&local_158);
        iVar2 = FUN_180003280(param_1,(longlong *)*puVar4,local_a8);
        if (iVar2 == 0) {
          FUN_1800133c0(local_a8);
        }
        else {
          piVar7 = local_88;
          for (lVar6 = 0x70; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined1 *)piVar7 = 0;
            piVar7 = (int *)((longlong)piVar7 + 1);
          }
          puVar4 = (undefined8 *)FUN_180011700(&local_158);
          FUN_180010170(param_1,(longlong *)*puVar4,local_88);
          local_14c = 0;
          if (local_34 == 1) {
            puVar4 = (undefined8 *)FUN_180011700(&local_158);
            local_d8 = (longlong *)*puVar4;
            local_d0 = (longlong *)*param_1;
            local_14c = FUN_1800073a0(param_1,local_d0,local_d8);
          }
          uVar5 = FUN_180012eb0(local_a8);
          FUN_180006b40(param_1,uVar5,param_2,param_3);
          if (local_14c != 0) {
            puVar4 = (undefined8 *)FUN_180011700(&local_158);
            local_c8 = (longlong *)*puVar4;
            local_c0 = (longlong *)*param_1;
            FUN_180007830(param_1,local_c0,local_c8);
          }
          FUN_1800133c0(local_a8);
        }
        FUN_180011720(&local_158);
      }
      FUN_180003aa0(param_1,local_128);
      FUN_180011b60(local_128);
    }
  }
  FUN_180012900(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_188);
  return;
}




void FUN_18000b8a0(undefined8 param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  DWORD local_294;
  undefined1 local_290 [4];
  BOOL local_28c;
  ulonglong local_288;
  DWORD local_280;
  DWORD local_27c;
  UINT local_278;
  uint local_274;
  undefined8 local_270 [3];
  LPWCH local_258;
  LPCWSTR local_250;
  LPWCH local_248;
  LPCWSTR local_240;
  undefined8 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_238 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_2b8;
  local_298 = 0;
  uVar2 = FUN_1800016d0(local_290);
  FUN_180011d50(local_270,0x104,uVar2);
  local_294 = 0;
  lVar3 = FUN_180011c10(local_270);
  local_280 = (DWORD)lVar3;
  local_258 = (LPWCH)FUN_180011c50(local_270);
  local_250 = (LPCWSTR)FUN_180012eb0(param_1);
  local_28c = GetVolumePathNamesForVolumeNameW(local_250,local_258,local_280,&local_294);
  if ((local_28c == 0) && (DVar1 = GetLastError(), DVar1 == 0xea)) {
    FUN_180011c80(local_270,(ulonglong)local_294);
    lVar3 = FUN_180011c10(local_270);
    local_27c = (DWORD)lVar3;
    local_248 = (LPWCH)FUN_180011c50(local_270);
    local_240 = (LPCWSTR)FUN_180012eb0(param_1);
    local_28c = GetVolumePathNamesForVolumeNameW(local_240,local_248,local_27c,&local_294);
  }
  if ((local_28c == 0) || (local_294 == 0)) {
    FUN_180011d20(local_270);
  }
  else {
    local_278 = GetSystemDirectoryW(local_228,0x104);
    if (local_278 == 0) {
      FUN_180011d20(local_270);
    }
    else {
      for (local_288 = 0; local_288 < local_294; local_288 = local_288 + 1) {
        local_274 = (uint)(ushort)local_228[0];
        puVar4 = (ushort *)FUN_180011be0(local_270,local_288);
        if (local_274 == *puVar4) {
          local_298 = 1;
          break;
        }
      }
      FUN_180011d20(local_270);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2b8);
  return;
}




undefined8 FUN_18000ba90(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int local_98 [2];
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80 [3];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30 [3];
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    FUN_180011b90(local_80);
    bVar1 = FUN_180003750(param_1,(longlong *)*param_1,local_80);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_180011b60(local_80);
    }
    else {
      FUN_180011820(local_80,&local_90);
      while( true ) {
        plVar3 = FUN_1800124b0(local_80,local_10);
        bVar1 = FID_conflict_operator__(&local_90,plVar3);
        if (!bVar1) break;
        local_98[0] = 0;
        puVar4 = (undefined8 *)FUN_180011700(&local_90);
        local_68 = (longlong *)*puVar4;
        local_60 = (longlong *)*param_1;
        FUN_180009590(param_1,local_60,local_68,local_98);
        if (local_98[0] != 0) {
          FUN_180011b90(local_30);
          puVar4 = (undefined8 *)FUN_180011700(&local_90);
          local_58 = (longlong *)*puVar4;
          local_50 = (longlong *)*param_1;
          iVar2 = FUN_180005530(param_1,local_50,local_58,2,local_30);
          if (iVar2 == 0) {
            FUN_180012c40(local_30);
          }
          else {
            local_88 = 0;
            while (uVar5 = FUN_180012900(local_30), local_88 < uVar5) {
              lVar6 = FUN_1800128d0(local_30,local_88);
              local_48 = FUN_180012eb0(lVar6);
              puVar4 = (undefined8 *)FUN_180011700(&local_90);
              local_40 = (longlong *)*puVar4;
              local_38 = (longlong *)*param_1;
              FUN_1800065e0(param_1,local_38,local_40,local_48,param_2);
              local_88 = local_88 + 1;
            }
            FUN_180012c40(local_30);
          }
        }
        FUN_180011720(&local_90);
      }
      FUN_180003aa0(param_1,local_80);
      FUN_180011b60(local_80);
    }
  }
  return 1;
}




void FUN_18000bd10(longlong *param_1,wchar_t *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  short *psVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_408 [32];
  char local_3d8;
  longlong local_3d0;
  int local_3c8 [2];
  ulonglong local_3c0;
  ulonglong local_3b8;
  longlong local_3b0;
  uint local_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0 [3];
  undefined8 local_388 [3];
  longlong *local_370;
  longlong *local_368;
  longlong local_360;
  longlong *local_358;
  longlong *local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  wchar_t *local_338;
  wchar_t *local_330;
  undefined8 *local_328;
  longlong *local_320;
  longlong *local_318;
  longlong local_310;
  longlong *local_308;
  longlong *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined1 *local_2e8;
  wchar_t *local_2e0;
  undefined8 *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0 [3];
  undefined8 local_2a8 [3];
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280 [3];
  undefined8 local_268 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_250 [40];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_290 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_408;
  if (*param_1 != 0) {
    FUN_180011b90(local_388);
    bVar1 = FUN_180003750(param_1,(longlong *)*param_1,local_388);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_180011b60(local_388);
    }
    else {
      FUN_180011820(local_388,&local_3d0);
      while( true ) {
        plVar3 = FUN_1800124b0(local_388,&local_288);
        bVar1 = FID_conflict_operator__(&local_3d0,plVar3);
        if (!bVar1) break;
        FUN_180011b90(local_3a0);
        local_3d8 = '\0';
        basic_string<>((longlong)local_250);
        puVar4 = (undefined8 *)FUN_180011700(&local_3d0);
        iVar2 = FUN_180003280(param_1,(longlong *)*puVar4,local_250);
        if (iVar2 != 0) {
          lVar5 = FUN_180012e90(local_250);
          if (lVar5 != 0) {
            lVar5 = FUN_180012e90(local_250);
            psVar6 = (short *)FUN_180013020(local_250,lVar5 + -1);
            if (*psVar6 != 0x5c) {
              FID_conflict_push_back(local_250,0x5c);
            }
          }
          local_3d8 = FUN_18000b8a0(local_250);
        }
        if (local_3d8 == '\0') {
          local_3c8[0] = 0;
          puVar4 = (undefined8 *)FUN_180011700(&local_3d0);
          local_2d0 = (longlong *)*puVar4;
          local_2c8 = (longlong *)*param_1;
          FUN_180009590(param_1,local_2c8,local_2d0,local_3c8);
          if (local_3c8[0] != 0) goto LAB_18000bf06;
          FUN_1800133c0(local_250);
          FUN_180012c40(local_3a0);
        }
        else {
LAB_18000bf06:
          puVar4 = (undefined8 *)FUN_180011700(&local_3d0);
          local_370 = (longlong *)*puVar4;
          local_368 = (longlong *)*param_1;
          iVar2 = FUN_180005530(param_1,local_368,local_370,3,local_3a0);
          if (iVar2 == 0) {
            FUN_1800133c0(local_250);
            FUN_180012c40(local_3a0);
          }
          else {
            local_3c0 = 0;
            while (uVar7 = FUN_180012900(local_3a0), local_3c0 < uVar7) {
              pwVar8 = local_228;
              for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
                *(undefined1 *)pwVar8 = 0;
                pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
              }
              lVar5 = FUN_1800128d0(local_3a0,local_3c0);
              local_360 = FUN_180012eb0(lVar5);
              puVar4 = (undefined8 *)FUN_180011700(&local_3d0);
              local_358 = (longlong *)*puVar4;
              local_350 = (longlong *)*param_1;
              iVar2 = FUN_1800059d0(param_1,local_350,local_358,local_360,local_228);
              if (iVar2 != 0) {
                lVar5 = FUN_1800128d0(local_3a0,local_3c0);
                local_330 = (wchar_t *)FUN_180012eb0(lVar5);
                local_348 = local_280;
                local_340 = FUN_1800122a0(local_348,param_3);
                local_338 = local_228;
                local_3b0 = -1;
                do {
                  local_3b0 = local_3b0 + 1;
                } while (local_338[local_3b0] != L'\0');
                local_328 = local_340;
                FUN_18000dca0(param_1,param_2,local_340,local_330,(undefined1 *)local_228,
                              (int)local_3b0 * 2);
              }
              local_3c0 = local_3c0 + 1;
            }
            FUN_180011b90(local_2a8);
            puVar4 = (undefined8 *)FUN_180011700(&local_3d0);
            local_320 = (longlong *)*puVar4;
            local_318 = (longlong *)*param_1;
            iVar2 = FUN_180005530(param_1,local_318,local_320,2,local_2a8);
            if (iVar2 == 0) {
              FUN_180012c40(local_2a8);
              FUN_1800133c0(local_250);
              FUN_180012c40(local_3a0);
            }
            else {
              local_3b8 = 0;
              while (uVar7 = FUN_180012900(local_2a8), local_3b8 < uVar7) {
                FUN_180011b90(local_2c0);
                lVar5 = FUN_1800128d0(local_2a8,local_3b8);
                local_310 = FUN_180012eb0(lVar5);
                puVar4 = (undefined8 *)FUN_180011700(&local_3d0);
                local_308 = (longlong *)*puVar4;
                local_300 = (longlong *)*param_1;
                iVar2 = FUN_180006090(param_1,local_300,local_308,local_310,local_2c0);
                if (iVar2 == 0) {
                  FUN_1800121e0(local_2c0);
                }
                else {
                  lVar5 = FUN_180011de0(local_2c0);
                  local_3a8 = (uint)lVar5;
                  local_2e8 = (undefined1 *)FUN_180011c50(local_2c0);
                  lVar5 = FUN_1800128d0(local_3a0,local_3b8);
                  local_2e0 = (wchar_t *)FUN_180012eb0(lVar5);
                  local_2f8 = local_268;
                  local_2f0 = FUN_1800122a0(local_2f8,param_3);
                  local_2d8 = local_2f0;
                  FUN_18000dca0(param_1,param_2,local_2f0,local_2e0,local_2e8,local_3a8);
                  FUN_1800121e0(local_2c0);
                }
                local_3b8 = local_3b8 + 1;
              }
              FUN_180012c40(local_2a8);
              FUN_1800133c0(local_250);
              FUN_180012c40(local_3a0);
            }
          }
        }
        FUN_180011720(&local_3d0);
      }
      FUN_180003aa0(param_1,local_388);
      FUN_180011b60(local_388);
    }
  }
  local_3a4 = 1;
  FUN_1800121e0(param_3);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_408);
  return;
}




void FUN_18000c3d0(longlong *param_1)

{
  BOOL BVar1;
  LPCWSTR pWVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStack_528 [32];
  undefined4 local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  undefined8 *local_4e8;
  undefined8 *local_4e0;
  wchar_t *local_4d8;
  undefined8 local_4d0 [3];
  undefined8 local_4b8;
  undefined8 local_4b0 [3];
  undefined8 local_498 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_480 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_460 [40];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_4b8 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_528;
  local_508 = 0;
  FUN_180011b90(local_4d0);
  basic_string<>(local_460,L"C:\\Program Files\\EaseUS");
  pWVar2 = (LPCWSTR)FUN_180012eb0(local_460);
  CreateDirectoryW(pWVar2,(LPSECURITY_ATTRIBUTES)0x0);
  basic_string<>(local_480,L"C:\\Program Files\\EaseUS\\BL");
  pWVar2 = (LPCWSTR)FUN_180012eb0(local_480);
  CreateDirectoryW(pWVar2,(LPSECURITY_ATTRIBUTES)0x0);
  pWVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  FUN_180010550(param_1,local_228);
  wcscat_s(local_228,0x104,L"..\\BUILDPE\\EaseUS-x64\\BL");
  pWVar4 = local_438;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  BVar1 = PathCanonicalizeW(local_438,local_228);
  if (BVar1 == 0) {
    FUN_1800133c0(local_480);
    FUN_1800133c0(local_460);
    FUN_1800121e0(local_4d0);
  }
  else {
    CreateDirectoryW(local_438,(LPSECURITY_ATTRIBUTES)0x0);
    FUN_180010e40(param_1,local_438,local_4d0);
    local_500 = local_4b0;
    local_4f8 = FUN_1800122a0(local_500,local_4d0);
    FUN_18000bd10(param_1,local_438,local_4f8);
    local_4f0 = local_498;
    local_4e8 = FUN_1800122a0(local_4f0,local_4d0);
    local_4e0 = local_4e8;
    local_4d8 = (wchar_t *)FUN_180012eb0(local_480);
    FUN_18000bd10(param_1,local_4d8,local_4e0);
    local_508 = 1;
    FUN_1800133c0(local_480);
    FUN_1800133c0(local_460);
    FUN_1800121e0(local_4d0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_528);
  return;
}




void FUN_18000c610(longlong *param_1,wchar_t *param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int *piVar8;
  undefined1 auStackY_1b8 [32];
  longlong local_188;
  ulonglong local_180;
  undefined4 local_178;
  undefined8 local_170 [3];
  undefined8 local_158 [3];
  undefined8 local_140 [3];
  undefined8 local_128 [3];
  longlong *local_110;
  longlong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  wchar_t *local_f0;
  undefined8 *local_e8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_e0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_d8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_d0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  undefined1 *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_78 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_1b8;
  if (*param_1 != 0) {
    FUN_180011b90(local_128);
    bVar1 = FUN_180003750(param_1,(longlong *)*param_1,local_128);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_180011b60(local_128);
    }
    else {
      FUN_180011820(local_128,&local_188);
      while( true ) {
        plVar3 = FUN_1800124b0(local_128,&local_70);
        bVar1 = FID_conflict_operator__(&local_188,plVar3);
        if (!bVar1) break;
        FUN_180011b90(local_140);
        puVar4 = (undefined8 *)FUN_180011700(&local_188);
        local_110 = (longlong *)*puVar4;
        local_108 = (longlong *)*param_1;
        iVar2 = FUN_180005530(param_1,local_108,local_110,0,local_140);
        if (iVar2 == 0) {
          FUN_180012c40(local_140);
        }
        else {
          local_180 = 0;
          while (uVar5 = FUN_180012900(local_140), local_180 < uVar5) {
            FUN_180011b90(local_170);
            lVar6 = FUN_1800128d0(local_140,local_180);
            local_f0 = (wchar_t *)FUN_180012eb0(lVar6);
            local_100 = local_68;
            local_f8 = FUN_1800122a0(local_100,param_3);
            local_e8 = local_f8;
            iVar2 = FUN_18000df60(param_1,param_2,local_f8,local_f0,local_170);
            if (iVar2 == 0) {
              FUN_1800121e0(local_170);
            }
            else {
              FUN_180011b90(local_158);
              local_e0 = local_50;
              lVar6 = FUN_1800128d0(local_140,local_180);
              pwVar7 = (wchar_t *)FUN_180012eb0(lVar6);
              local_d8 = basic_string<>(local_e0,pwVar7);
              local_d0 = local_d8;
              local_c8 = local_d8;
              puVar4 = (undefined8 *)FUN_180011700(&local_188);
              local_c0 = (longlong *)*puVar4;
              local_b8 = (longlong *)*param_1;
              iVar2 = FUN_18000e7f0(param_1,local_b8,local_c0,local_c8,local_158);
              if ((iVar2 == 0) && (lVar6 = FUN_180012550(local_158), lVar6 != 0)) {
                FUN_180012720(local_158);
                FUN_1800121e0(local_170);
              }
              else {
                piVar8 = (int *)FUN_180012520(local_158,0);
                if (*piVar8 == 2) {
                  puVar4 = (undefined8 *)FUN_180011700(&local_188);
                  local_b0 = (longlong *)*puVar4;
                  local_a8 = (longlong *)*param_1;
                  FUN_180004fb0(param_1,local_a8,local_b0,local_170);
                }
                else {
                  piVar8 = (int *)FUN_180012520(local_158,0);
                  if (*piVar8 == 3) {
                    local_a0 = FUN_180011de0(local_170);
                    local_a0 = local_a0 / 2;
                    local_98 = (undefined1 *)FUN_180011c50(local_170);
                    basic_string<>((longlong)local_30,local_98,local_a0);
                    local_90 = FUN_180012eb0(local_30);
                    puVar4 = (undefined8 *)FUN_180011700(&local_188);
                    local_88 = (longlong *)*puVar4;
                    local_80 = (longlong *)*param_1;
                    FUN_180004460(param_1,local_80,local_88,local_90);
                    FUN_1800133c0(local_30);
                  }
                }
                FUN_180012720(local_158);
                FUN_1800121e0(local_170);
              }
            }
            local_180 = local_180 + 1;
          }
          FUN_180012c40(local_140);
        }
        FUN_180011720(&local_188);
      }
      FUN_180003aa0(param_1,local_128);
      FUN_180011b60(local_128);
    }
  }
  local_178 = 1;
  FUN_1800121e0(param_3);
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_1b8);
  return;
}




void FUN_18000cae0(longlong *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined8 local_60 [3];
  undefined8 local_48 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_c8;
  basic_string<>(local_30,L"x:\\Program Files\\EaseUS\\BL");
  FUN_180011b90(local_80);
  pwVar2 = (wchar_t *)FUN_180012eb0(local_30);
  iVar1 = FUN_1800111e0(param_1,pwVar2,local_80);
  if (iVar1 != 0) {
    local_a0 = local_60;
    local_98 = FUN_1800122a0(local_a0,local_80);
    FUN_18000c610(param_1,L"C:\\Program Files\\EaseUS\\BL",local_98);
    local_90 = local_48;
    local_88 = FUN_1800122a0(local_90,local_80);
    FUN_18000c610(param_1,L"x:\\Program Files\\EaseUS\\BL",local_88);
  }
  local_a8 = 1;
  FUN_1800121e0(local_80);
  FUN_1800133c0(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_18000cc00(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  LSTATUS LVar2;
  int iVar3;
  BOOL BVar4;
  char *pcVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  WCHAR *pWVar8;
  _STARTUPINFOW *p_Var9;
  _PROCESS_INFORMATION *p_Var10;
  undefined1 auStackY_488 [32];
  HKEY local_430;
  LONG local_428 [2];
  longlong local_420 [2];
  _PROCESS_INFORMATION local_410;
  undefined8 local_3f8;
  _STARTUPINFOW local_3e8;
  undefined1 local_378 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_358 [32];
  WCHAR local_338 [136];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_3f8 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_488;
  bVar1 = false;
  local_430 = (HKEY)0x0;
  FUN_180002e20(local_420);
  RegOpenKeyW((HKEY)0xffffffff80000000,L"Drive\\shell\\unlock-bde\\command",&local_430);
  if (local_430 == (HKEY)0x0) {
    FUN_180002ea0(local_420);
  }
  else {
    pWVar8 = local_338;
    for (lVar7 = 0x104; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)pWVar8 = 0;
      pWVar8 = (WCHAR *)((longlong)pWVar8 + 1);
    }
    local_428[0] = 0x104;
    LVar2 = RegQueryValueW(local_430,(LPCWSTR)0x0,local_338,local_428);
    if (LVar2 == 0) {
      basic_string<>((longlong)local_358);
      basic_string<>((longlong)local_378);
      pcVar5 = (char *)FUN_180012eb0(param_2);
      iVar3 = FUN_18000d870(param_1,local_338,pcVar5,local_358,(longlong)local_378);
      if (iVar3 == 0) {
        FUN_1800133c0(local_378);
        FUN_1800133c0(local_358);
        FUN_180002ea0(local_420);
      }
      else {
        p_Var9 = &local_3e8;
        for (lVar7 = 0x68; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined1 *)&p_Var9->cb = 0;
          p_Var9 = (_STARTUPINFOW *)((longlong)&p_Var9->cb + 1);
        }
        local_3e8.cb = 0x68;
        p_Var10 = &local_410;
        for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined1 *)&p_Var10->hProcess = 0;
          p_Var10 = (_PROCESS_INFORMATION *)((longlong)&p_Var10->hProcess + 1);
        }
        pwVar6 = local_228;
        for (lVar7 = 0x208; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined1 *)pwVar6 = 0;
          pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
        }
        pwVar6 = (wchar_t *)FUN_180012eb0(local_358);
        FUN_180018dc0(local_228,pwVar6);
        iVar3 = FUN_18000d5c0();
        if (iVar3 != 0) {
          pwVar6 = (wchar_t *)FUN_180012eb0(local_378);
          FUN_18000d740(param_1,pwVar6);
        }
        BVar4 = CreateProcessW((LPCWSTR)0x0,local_228,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_3e8,
                               &local_410);
        if (BVar4 != 0) {
          iVar3 = FUN_18000d5c0();
          if (iVar3 == 0) {
            WaitForSingleObject(local_410.hProcess,0xffffffff);
          }
          else {
            FUN_18000d650(param_1,local_410.hProcess,300000);
          }
          bVar1 = true;
          CloseHandle(local_410.hThread);
          CloseHandle(local_410.hProcess);
        }
        FUN_1800133c0(local_378);
        FUN_1800133c0(local_358);
        FUN_180002ea0(local_420);
      }
    }
    else {
      FUN_180002ea0(local_420);
    }
  }
  if (local_430 != (HKEY)0x0) {
    RegCloseKey(local_430);
  }
  if (!bVar1) {
    CLogWriter::Log("[BitlockerHelp]: ExecuteUnlock failed!");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_488);
  return;
}




void FUN_18000cf00(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  LSTATUS LVar2;
  int iVar3;
  BOOL BVar4;
  short *psVar5;
  char *pcVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  WCHAR *pWVar9;
  _STARTUPINFOW *p_Var10;
  _PROCESS_INFORMATION *p_Var11;
  undefined1 auStackY_4a8 [32];
  HKEY local_450;
  LONG local_448 [2];
  longlong local_440 [2];
  _PROCESS_INFORMATION local_430;
  undefined8 local_418;
  _STARTUPINFOW local_408;
  undefined1 local_398 [32];
  undefined1 local_378 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_358 [32];
  WCHAR local_338 [136];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_418 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_4a8;
  bVar1 = false;
  local_450 = (HKEY)0x0;
  FUN_180002e20(local_440);
  RegOpenKeyW((HKEY)0xffffffff80000000,L"Drive\\shell\\encrypt-bde\\command",&local_450);
  if (local_450 == (HKEY)0x0) {
    FUN_180002ea0(local_440);
  }
  else {
    pWVar9 = local_338;
    for (lVar8 = 0x104; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)pWVar9 = 0;
      pWVar9 = (WCHAR *)((longlong)pWVar9 + 1);
    }
    local_448[0] = 0x104;
    LVar2 = RegQueryValueW(local_450,(LPCWSTR)0x0,local_338,local_448);
    if (LVar2 == 0) {
      basic_string<>((longlong)local_358);
      basic_string<>((longlong)local_378);
      basic_string<>((longlong)local_398,param_2);
      lVar8 = FUN_180012e90(local_398);
      psVar5 = (short *)FUN_180013020(local_398,lVar8 + -1);
      if (*psVar5 != 0x5c) {
        FUN_180013270(local_398,0x5c);
      }
      pcVar6 = (char *)FUN_180012eb0(local_398);
      iVar3 = FUN_18000d870(param_1,local_338,pcVar6,local_358,(longlong)local_378);
      if (iVar3 == 0) {
        FUN_1800133c0(local_398);
        FUN_1800133c0(local_378);
        FUN_1800133c0(local_358);
        FUN_180002ea0(local_440);
      }
      else {
        p_Var10 = &local_408;
        for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(undefined1 *)&p_Var10->cb = 0;
          p_Var10 = (_STARTUPINFOW *)((longlong)&p_Var10->cb + 1);
        }
        local_408.cb = 0x68;
        p_Var11 = &local_430;
        for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(undefined1 *)&p_Var11->hProcess = 0;
          p_Var11 = (_PROCESS_INFORMATION *)((longlong)&p_Var11->hProcess + 1);
        }
        pwVar7 = local_228;
        for (lVar8 = 0x208; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(undefined1 *)pwVar7 = 0;
          pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
        }
        pwVar7 = (wchar_t *)FUN_180012eb0(local_358);
        FUN_180018dc0(local_228,pwVar7);
        iVar3 = FUN_18000d5c0();
        if (iVar3 != 0) {
          pwVar7 = (wchar_t *)FUN_180012eb0(local_378);
          FUN_18000d740(param_1,pwVar7);
        }
        BVar4 = CreateProcessW((LPCWSTR)0x0,local_228,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_408,
                               &local_430);
        if (BVar4 != 0) {
          iVar3 = FUN_18000d5c0();
          if (iVar3 == 0) {
            WaitForSingleObject(local_430.hProcess,0xffffffff);
          }
          else {
            FUN_18000d650(param_1,local_430.hProcess,300000);
          }
          bVar1 = true;
          CloseHandle(local_430.hThread);
          CloseHandle(local_430.hProcess);
        }
        FUN_1800133c0(local_398);
        FUN_1800133c0(local_378);
        FUN_1800133c0(local_358);
        FUN_180002ea0(local_440);
      }
    }
    else {
      FUN_180002ea0(local_440);
    }
  }
  if (local_450 != (HKEY)0x0) {
    RegCloseKey(local_450);
  }
  if (!bVar1) {
    CLogWriter::Log("[BitlockerHelp]: ExecuteTurnOn failed!");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_4a8);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000d579) */

void FUN_18000d270(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  short *psVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  WCHAR *pWVar7;
  _OSVERSIONINFOW *p_Var8;
  _STARTUPINFOW *p_Var9;
  _PROCESS_INFORMATION *p_Var10;
  bool bVar11;
  undefined1 auStackY_6a8 [32];
  _PROCESS_INFORMATION local_648;
  undefined8 local_630;
  _STARTUPINFOW local_628;
  undefined1 local_5b8 [32];
  undefined1 local_598 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_578 [32];
  _OSVERSIONINFOW local_558;
  WCHAR local_438 [264];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_630 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_6a8;
  bVar11 = false;
  pWVar7 = local_438;
  for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  GetWindowsDirectoryW(local_438,0x104);
  p_Var8 = &local_558;
  for (lVar6 = 0x114; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&p_Var8->dwOSVersionInfoSize = 0;
    p_Var8 = (_OSVERSIONINFOW *)((longlong)&p_Var8->dwOSVersionInfoSize + 1);
  }
  local_558.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_558);
  if ((local_558.dwMajorVersion < 6) ||
     ((local_558.dwMajorVersion == 6 && (local_558.dwMinorVersion == 1)))) {
    wcscat_s(local_438,0x104,L"\\system32\\bitlockerwizard.exe %1 U");
  }
  else {
    wcscat_s(local_438,0x104,L"\\system32\\bitlockerwizard.exe %1 Y");
  }
  basic_string<>((longlong)local_578);
  basic_string<>((longlong)local_598);
  basic_string<>((longlong)local_5b8,param_2);
  lVar6 = FUN_180012e90(local_5b8);
  psVar3 = (short *)FUN_180013020(local_5b8,lVar6 + -1);
  if (*psVar3 != 0x5c) {
    FUN_180013270(local_5b8,0x5c);
  }
  pcVar4 = (char *)FUN_180012eb0(local_5b8);
  iVar1 = FUN_18000d870(param_1,local_438,pcVar4,local_578,(longlong)local_598);
  if (iVar1 == 0) {
    FUN_1800133c0(local_5b8);
    FUN_1800133c0(local_598);
    FUN_1800133c0(local_578);
  }
  else {
    p_Var9 = &local_628;
    for (lVar6 = 0x68; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)&p_Var9->cb = 0;
      p_Var9 = (_STARTUPINFOW *)((longlong)&p_Var9->cb + 1);
    }
    local_628.cb = 0x68;
    p_Var10 = &local_648;
    for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)&p_Var10->hProcess = 0;
      p_Var10 = (_PROCESS_INFORMATION *)((longlong)&p_Var10->hProcess + 1);
    }
    pwVar5 = local_228;
    for (lVar6 = 0x208; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined1 *)pwVar5 = 0;
      pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    }
    pwVar5 = (wchar_t *)FUN_180012eb0(local_578);
    FUN_180018dc0(local_228,pwVar5);
    iVar1 = FUN_18000d5c0();
    if (iVar1 != 0) {
      pwVar5 = (wchar_t *)FUN_180012eb0(local_598);
      FUN_18000d740(param_1,pwVar5);
    }
    BVar2 = CreateProcessW((LPCWSTR)0x0,local_228,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_628,
                           &local_648);
    bVar11 = BVar2 != 0;
    if (bVar11) {
      WaitForSingleObject(local_648.hProcess,0xffffffff);
      CloseHandle(local_648.hThread);
      CloseHandle(local_648.hProcess);
    }
    FUN_1800133c0(local_5b8);
    FUN_1800133c0(local_598);
    FUN_1800133c0(local_578);
  }
  if (!bVar11) {
    CLogWriter::Log("[BitlockerHelp]: BitlockerBackup failed!");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_6a8);
  return;
}




void FUN_18000d5c0(void)

{
  longlong lVar1;
  _OSVERSIONINFOW *p_Var2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  _OSVERSIONINFOW local_138;
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_168;
  local_148 = 0;
  p_Var2 = &local_138;
  for (lVar1 = 0x114; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&p_Var2->dwOSVersionInfoSize = 0;
    p_Var2 = (_OSVERSIONINFOW *)((longlong)&p_Var2->dwOSVersionInfoSize + 1);
  }
  local_138.dwOSVersionInfoSize = 0x114;
  GetVersionExW(&local_138);
  if ((local_138.dwMajorVersion < 6) ||
     ((local_138.dwMajorVersion == 6 && (local_138.dwMinorVersion == 1)))) {
    local_148 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




void FUN_18000d650(undefined8 param_1,HANDLE param_2,uint param_3)

{
  DWORD DVar1;
  int iVar2;
  DWORD local_28;
  DWORD local_24;
  DWORD local_20;
  HWND local_18;
  
  local_24 = GetTickCount();
  while( true ) {
    DVar1 = GetTickCount();
    if (param_3 <= DVar1 - local_24) {
      return;
    }
    DVar1 = WaitForSingleObject(param_2,10);
    if (DVar1 != 0x102) break;
    DVar1 = GetProcessId(param_2);
    iVar2 = FUN_18000d9d0(param_1,DVar1);
    if (((iVar2 != 0) || (DVar1 = GetTickCount(), 19999 < DVar1 - local_24)) &&
       (local_18 = GetForegroundWindow(), local_18 != (HWND)0x0)) {
      local_28 = 0;
      local_20 = 0;
      local_20 = GetWindowThreadProcessId(local_18,&local_28);
      if (((local_28 != 0) && (local_28 != 0xffffffff)) &&
         (DVar1 = GetCurrentProcessId(), local_28 == DVar1)) {
        TerminateProcess(param_2,0);
        return;
      }
    }
  }
  return;
}




void FUN_18000d740(undefined8 param_1,wchar_t *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_298 [32];
  int local_278;
  HANDLE local_270;
  HANDLE local_268;
  undefined4 local_258 [2];
  DWORD local_250;
  wchar_t local_22c [266];
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_298;
  if ((param_2 != (wchar_t *)0x0) &&
     (local_268 = (HANDLE)CreateToolhelp32Snapshot(2,0), local_268 != (HANDLE)0xffffffffffffffff)) {
    puVar3 = local_258;
    for (lVar2 = 0x238; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
    }
    local_258[0] = 0x238;
    local_278 = Process32FirstW(local_268);
    while (local_278 != 0) {
      iVar1 = _wcsicmp(param_2,local_22c);
      if ((iVar1 == 0) && (local_270 = OpenProcess(1,0,local_250), local_270 != (HANDLE)0x0)) {
        TerminateProcess(local_270,0);
        CloseHandle(local_270);
        local_270 = (HANDLE)0x0;
      }
      local_278 = Process32NextW(local_268);
    }
    CloseHandle(local_268);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_298);
  return;
}




void FUN_18000d870(undefined8 param_1,wchar_t *param_2,char *param_3,
                  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *param_4,longlong param_5)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  __uint64 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_78;
  local_58 = 0;
  if ((param_2 != (wchar_t *)0x0) && (param_3 != (char *)0x0)) {
    FUN_180013300(param_4,param_2);
    local_50 = 0;
    local_50 = FUN_180012d00(param_4,L"%1",0);
    if (local_50 != 0xffffffffffffffff) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::replace
                ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 param_4,local_50,2,param_3);
      FUN_180013330(param_5,param_4);
      local_48 = FUN_180012d00(param_4,L".exe",0);
      if (local_48 != -1) {
        local_40 = FUN_180012c90(param_5,(longlong)local_38,0,local_48 + 4);
        FUN_1800133f0(param_5,local_40);
        FUN_1800133c0(local_38);
        local_58 = 1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}




undefined4 FUN_18000d9d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = param_2;
  EnumWindows((WNDENUMPROC)&LAB_18000da20,(LPARAM)&local_10);
  return local_c;
}




void FUN_18000dad0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  wchar_t *local_60;
  code *local_58;
  short local_50 [4];
  longlong local_48;
  undefined8 local_38;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_b8;
  local_7c = 0;
  Ordinal_8(local_50);
  local_58 = *(code **)(*param_2 + 0x20);
  local_90 = 0;
  local_98 = 0;
  local_70 = (*local_58)(param_2,L"VolumeKeyProtectorID",0,local_50);
  if (((-1 < local_70) && (local_50[0] == 0x2008)) && (local_78 = local_48, local_48 != 0)) {
    local_84 = 0;
    local_80 = 0;
    local_6c = Ordinal_20(local_48,1,&local_84);
    local_68 = Ordinal_19(local_78,1);
    if ((-1 < local_6c) && (-1 < local_68)) {
      for (local_88 = local_84; local_88 <= local_80; local_88 = local_88 + 1) {
        local_60 = (wchar_t *)0x0;
        Ordinal_25(local_78,&local_88);
        if (local_60 != (wchar_t *)0x0) {
          basic_string<>(local_30,local_60);
          FUN_180012940(param_3,local_30);
          FUN_1800133c0(local_30);
          local_7c = 1;
        }
      }
    }
  }
  Ordinal_9(local_50);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_18000dca0(undefined8 param_1,wchar_t *param_2,undefined8 param_3,wchar_t *param_4,
                  undefined1 *param_5,uint param_6)

{
  longlong lVar1;
  short *psVar2;
  LPCWSTR lpFileName;
  undefined1 auStackY_138 [32];
  BOOL local_f8;
  DWORD local_f4;
  DWORD local_f0;
  BOOL local_ec;
  HANDLE local_e8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_e0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  LPCVOID local_b0;
  undefined8 local_a8 [3];
  undefined8 local_90;
  undefined8 local_88 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_70 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_138;
  local_f8 = 0;
  if (((param_2 != (wchar_t *)0x0) && (param_4 != (wchar_t *)0x0)) && (param_5 != (undefined1 *)0x0)
     ) {
    basic_string<>(local_50,param_2);
    lVar1 = FUN_180012e90(local_50);
    psVar2 = (short *)FUN_180013020(local_50,lVar1 + -1);
    if (*psVar2 != 0x5c) {
      FUN_1800132a0(local_50,L"\\");
    }
    local_e0 = local_70;
    local_d8 = basic_string<>(local_e0,param_4);
    local_d0 = FUN_180010960(param_1,(longlong)local_30,local_d8);
    local_c8 = local_d0;
    FUN_1800132d0(local_50,local_d0);
    FUN_1800133c0(local_30);
    FUN_180011b90(local_a8);
    local_c0 = local_88;
    local_b8 = FUN_1800122a0(local_c0,param_3);
    FUN_1800107e0(param_1,1,local_b8,param_5,param_6,local_a8);
    lpFileName = (LPCWSTR)FUN_180012eb0(local_50);
    local_e8 = CreateFileW(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (local_e8 == (HANDLE)0xffffffffffffffff) {
      FUN_1800121e0(local_a8);
      FUN_1800133c0(local_50);
    }
    else {
      local_f4 = 0;
      lVar1 = FUN_180011de0(local_a8);
      local_f0 = (DWORD)lVar1;
      local_b0 = (LPCVOID)FUN_180011c50(local_a8);
      local_f8 = WriteFile(local_e8,local_b0,local_f0,&local_f4,(LPOVERLAPPED)0x0);
      CloseHandle(local_e8);
      FUN_1800121e0(local_a8);
      FUN_1800133c0(local_50);
    }
  }
  local_ec = local_f8;
  FUN_1800121e0(param_3);
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_138);
  return;
}




void FUN_18000df60(undefined8 param_1,wchar_t *param_2,undefined8 param_3,wchar_t *param_4,
                  undefined8 param_5)

{
  BOOL BVar1;
  longlong lVar2;
  short *psVar3;
  LPCWSTR lpFileName;
  LPVOID lpBuffer;
  undefined1 auStackY_148 [32];
  undefined1 local_108 [4];
  uint local_104;
  DWORD local_100;
  undefined4 local_fc;
  HANDLE local_f8;
  uint local_f0;
  undefined4 local_ec;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_e8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8 [3];
  undefined8 local_90;
  undefined8 local_88 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_70 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_148;
  local_fc = 0;
  if ((param_2 != (wchar_t *)0x0) && (param_4 != (wchar_t *)0x0)) {
    basic_string<>(local_50,param_2);
    lVar2 = FUN_180012e90(local_50);
    psVar3 = (short *)FUN_180013020(local_50,lVar2 + -1);
    if (*psVar3 != 0x5c) {
      FUN_1800132a0(local_50,L"\\");
    }
    local_e8 = local_70;
    local_e0 = basic_string<>(local_e8,param_4);
    local_d8 = FUN_180010960(param_1,(longlong)local_30,local_e0);
    local_d0 = local_d8;
    FUN_1800132d0(local_50,local_d8);
    FUN_1800133c0(local_30);
    lpFileName = (LPCWSTR)FUN_180012eb0(local_50);
    local_f8 = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_f8 == (HANDLE)0xffffffffffffffff) {
      FUN_1800133c0(local_50);
    }
    else {
      local_104 = GetFileSize(local_f8,(LPDWORD)0x0);
      if ((local_104 != 0) && (local_104 < 1000000)) {
        FUN_180011b90(local_a8);
        local_108[0] = 0;
        FUN_180011e70(local_a8,(ulonglong)local_104,local_108);
        local_100 = 0;
        lpBuffer = (LPVOID)FUN_180011c50(local_a8);
        BVar1 = ReadFile(local_f8,lpBuffer,local_104,&local_100,(LPOVERLAPPED)0x0);
        if ((BVar1 != 0) && (local_100 == local_104)) {
          lVar2 = FUN_180011de0(local_a8);
          local_f0 = (uint)lVar2;
          local_b8 = (undefined1 *)FUN_180011c50(local_a8);
          local_c8 = local_88;
          local_c0 = FUN_1800122a0(local_c8,param_3);
          local_b0 = local_c0;
          local_fc = FUN_1800107e0(param_1,0,local_c0,local_b8,local_f0,param_5);
        }
        FUN_1800121e0(local_a8);
      }
      CloseHandle(local_f8);
      FUN_1800133c0(local_50);
    }
  }
  local_ec = local_fc;
  FUN_1800121e0(param_3);
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_148);
  return;
}




undefined4 FUN_18000e280(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  int local_160;
  uint local_15c;
  undefined4 local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  code *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  code *local_108;
  longlong local_100;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  code *local_c0;
  longlong local_b8;
  code *local_b0;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 local_98 [3];
  undefined1 local_80 [8];
  int local_78;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40 [4];
  undefined4 local_38;
  undefined1 local_28 [40];
  
  local_50 = 0xfffffffffffffffe;
  local_158 = 0;
  local_168 = (longlong *)0x0;
  local_170 = (longlong *)0x0;
  local_180 = (longlong *)0x0;
  Ordinal_8(local_68);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_130 = *(code **)(*param_2 + 0x30);
    local_148 = FUN_180001a20(&local_128,0x18003df28);
    local_140 = local_148;
    local_138 = FUN_180001ad0(local_148);
    (*local_130)(param_2,local_138,0,0,&local_168,0);
    FUN_180001ab0(&local_128);
    if (local_168 != (longlong *)0x0) {
      local_108 = *(code **)(*local_168 + 0x98);
      local_120 = FUN_180001990(&local_100,"GetKeyProtectors");
      local_118 = local_120;
      local_110 = FUN_180001ad0(local_120);
      uVar5 = 0;
      local_160 = (*local_108)(local_168,local_110,0,&local_170,0);
      FUN_180001ab0(&local_100);
      if (local_170 != (longlong *)0x0) {
        local_f8 = *(code **)(*local_170 + 0x78);
        (*local_f8)(local_170,0,&local_180);
        if (local_180 != (longlong *)0x0) {
          local_40[0] = 0x17;
          local_38 = 0;
          local_f0 = *(code **)(*local_180 + 0x28);
          (*local_f0)(local_180,L"KeyProtectorType",0,local_40,uVar5 & 0xffffffff00000000);
          local_e8 = *(code **)(*param_3 + 0x20);
          local_160 = (*local_e8)(param_3,L"__PATH",0,local_68,0,0);
          if (-1 < local_160) {
            local_178 = (longlong *)0x0;
            local_c0 = *(code **)(*param_2 + 0xc0);
            local_d0 = local_180;
            local_e0 = FUN_180001a20(&local_b8,0x18003e060);
            local_d8 = local_e0;
            local_c8 = FUN_180001ad0(local_e0);
            iVar2 = (*local_c0)(param_2,local_60,local_c8,0,0,local_d0,&local_178,0);
            local_15c = (uint)(-1 < iVar2);
            FUN_180001ab0(&local_b8);
            if ((-1 < iVar2) && (local_178 != (longlong *)0x0)) {
              Ordinal_8(local_80);
              local_b0 = *(code **)(*local_178 + 0x20);
              iVar2 = (*local_b0)(local_178,L"ReturnValue",0,local_80,0,0);
              if ((-1 < iVar2) && (local_78 == 0)) {
                FUN_180011b90(local_98);
                local_158 = FUN_18000edd0(param_1,local_178,local_98);
                FUN_180011820(local_98,&local_150);
                while( true ) {
                  plVar3 = FUN_1800124b0(local_98,&local_48);
                  bVar1 = FID_conflict_operator__(&local_150,plVar3);
                  if (!bVar1) break;
                  local_a8 = local_28;
                  uVar4 = FUN_180011700(&local_150);
                  local_a0 = basic_string<>((longlong)local_a8,uVar4);
                  FUN_18000e7f0(param_1,param_2,param_3,local_a0,param_4);
                  FUN_1800116e0(&local_150);
                }
                FUN_180012c40(local_98);
              }
              Ordinal_9(local_80);
              (**(code **)(*local_178 + 0x10))(local_178);
            }
          }
        }
      }
    }
  }
  if (local_180 != (longlong *)0x0) {
    (**(code **)(*local_180 + 0x10))(local_180);
  }
  if (local_170 != (longlong *)0x0) {
    (**(code **)(*local_170 + 0x10))(local_170);
  }
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))(local_168);
  }
  Ordinal_9(local_68);
  return local_158;
}




void FUN_18000e7f0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_1e8 [32];
  longlong **local_1c8;
  longlong *local_1c0;
  longlong **local_1b8;
  undefined8 local_1b0;
  char local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  int local_180;
  uint local_17c;
  undefined4 local_178;
  longlong local_170;
  undefined4 local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 local_150;
  code *local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  code *local_120;
  longlong local_118;
  code *local_110;
  code *local_108;
  code *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  code *local_d8;
  longlong local_d0;
  code *local_c8;
  code *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined1 local_a8 [8];
  int local_a0;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_78;
  undefined2 local_70 [4];
  undefined8 local_68;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  undefined4 local_40 [10];
  ulonglong local_18;
  
  local_78 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_1e8;
  local_178 = 0;
  local_188 = (longlong *)0x0;
  local_190 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  Ordinal_8(local_90);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_148 = *(code **)(*param_2 + 0x30);
    local_160 = FUN_180001a20(&local_140,0x18003e0a0);
    local_158 = local_160;
    local_150 = FUN_180001ad0(local_160);
    local_1c0 = (longlong *)0x0;
    local_1c8 = &local_188;
    (*local_148)(param_2,local_150,0,0);
    FUN_180001ab0(&local_140);
    if (local_188 != (longlong *)0x0) {
      local_120 = *(code **)(*local_188 + 0x98);
      local_138 = FUN_180001990(&local_118,"GetKeyProtectorType");
      local_130 = local_138;
      local_128 = FUN_180001ad0(local_138);
      local_1c8 = (longlong **)0x0;
      local_180 = (*local_120)(local_188,local_128,0,&local_190);
      FUN_180001ab0(&local_118);
      if (local_190 != (longlong *)0x0) {
        local_110 = *(code **)(*local_190 + 0x78);
        (*local_110)(local_190,0,&local_198);
        if (local_198 != (longlong *)0x0) {
          lVar2 = FUN_180012eb0(param_4);
          FUN_180001a20(&local_170,lVar2);
          local_70[0] = 8;
          local_68 = FUN_180001ad0(&local_170);
          local_108 = *(code **)(*local_198 + 0x28);
          local_1c8 = (longlong **)((ulonglong)local_1c8 & 0xffffffff00000000);
          (*local_108)(local_198,L"VolumeKeyProtectorID",0,local_70);
          local_100 = *(code **)(*param_3 + 0x20);
          local_1c0 = (longlong *)0x0;
          local_1c8 = (longlong **)0x0;
          local_180 = (*local_100)(param_3,L"__PATH",0);
          if (local_180 < 0) {
            FUN_180001ab0(&local_170);
          }
          else {
            local_1a0 = (longlong *)0x0;
            local_d8 = *(code **)(*param_2 + 0xc0);
            local_e8 = local_198;
            local_f8 = FUN_180001a20(&local_d0,0x18003e128);
            local_f0 = local_f8;
            local_e0 = FUN_180001ad0(local_f8);
            local_1b0 = 0;
            local_1b8 = &local_1a0;
            local_1c0 = local_e8;
            local_1c8 = (longlong **)0x0;
            iVar1 = (*local_d8)(param_2,local_88);
            local_1a8 = -1 < iVar1;
            local_17c = (uint)(byte)local_1a8;
            FUN_180001ab0(&local_d0);
            if (local_1a8 != '\0') {
              if (local_1a0 == (longlong *)0x0) {
                FUN_180001ab0(&local_170);
                goto LAB_18000ed18;
              }
              Ordinal_8(local_a8);
              local_c8 = *(code **)(*local_1a0 + 0x20);
              local_1c0 = (longlong *)0x0;
              local_1c8 = (longlong **)0x0;
              iVar1 = (*local_c8)(local_1a0,L"ReturnValue");
              if ((-1 < iVar1) && (local_a0 == 0)) {
                Ordinal_8(local_58);
                local_c0 = *(code **)(*local_1a0 + 0x20);
                local_1c0 = (longlong *)0x0;
                local_1c8 = (longlong **)0x0;
                (*local_c0)(local_1a0,L"KeyProtectorType",0);
                local_b8 = FUN_180018df0(local_40,local_50,param_4);
                local_b0 = local_b8;
                FUN_1800125a0(param_5,local_b8);
                FUN_18000edb0((longlong)local_40);
                local_178 = 1;
              }
              Ordinal_9(local_a8);
              (**(code **)(*local_1a0 + 0x10))(local_1a0);
            }
            FUN_180001ab0(&local_170);
          }
        }
      }
    }
  }
LAB_18000ed18:
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x10))(local_198);
  }
  if (local_190 != (longlong *)0x0) {
    (**(code **)(*local_190 + 0x10))(local_190);
  }
  if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x10))(local_188);
  }
  Ordinal_9(local_90);
  local_168 = local_178;
  FUN_1800133c0(param_4);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1e8);
  return;
}




void FUN_18000edb0(longlong param_1)

{
  FUN_1800133c0(param_1 + 8);
  return;
}




void FUN_18000edd0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  int local_70;
  int local_6c;
  int local_68;
  wchar_t *local_60;
  code *local_58;
  short local_50 [4];
  longlong local_48;
  undefined8 local_38;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_b8;
  local_7c = 0;
  Ordinal_8(local_50);
  local_58 = *(code **)(*param_2 + 0x20);
  local_90 = 0;
  local_98 = 0;
  local_70 = (*local_58)(param_2,L"VolumeKeyProtectorID",0,local_50);
  if (((-1 < local_70) && (local_50[0] == 0x2008)) && (local_78 = local_48, local_48 != 0)) {
    local_84 = 0;
    local_80 = 0;
    local_6c = Ordinal_20(local_48,1,&local_84);
    local_68 = Ordinal_19(local_78,1);
    if ((-1 < local_6c) && (-1 < local_68)) {
      for (local_88 = local_84; local_88 <= local_80; local_88 = local_88 + 1) {
        local_60 = (wchar_t *)0x0;
        Ordinal_25(local_78,&local_88);
        if (local_60 != (wchar_t *)0x0) {
          basic_string<>(local_30,local_60);
          FUN_180012940(param_3,local_30);
          FUN_1800133c0(local_30);
          local_7c = 1;
        }
      }
    }
  }
  Ordinal_9(local_50);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_b8);
  return;
}




undefined4 FUN_18000efa0(longlong *param_1,int param_2,longlong param_3,int *param_4)

{
  int iVar1;
  undefined4 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_38 = 0xffffffff;
  local_30 = (longlong *)0x0;
  if ((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_30), iVar1 != 0)) {
    FUN_180011b90(local_20);
    iVar1 = FUN_18000e280(param_1,(longlong *)*param_1,local_30,local_20);
    if (iVar1 != 0) {
      local_38 = FUN_18000fc50(param_1,local_20,param_4);
    }
    FUN_180012720(local_20);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))(local_30);
  }
  return local_38;
}




undefined4 FUN_18000f080(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  int local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  code *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_e4 = 0;
  local_e0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  Ordinal_8(local_40);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_a8 = *(code **)(*param_2 + 0x30);
    local_c0 = FUN_180001a20(&local_a0,0x18003e1c0);
    local_b8 = local_c0;
    local_b0 = FUN_180001ad0(local_c0);
    (*local_a8)(param_2,local_b0,0,0,&local_e0,0);
    FUN_180001ab0(&local_a0);
    if (local_e0 != (longlong *)0x0) {
      local_98 = *(code **)(*param_3 + 0x20);
      local_d8 = (*local_98)(param_3,L"__PATH",0,local_40,0,0);
      if (-1 < local_d8) {
        local_f0 = (longlong *)0x0;
        local_78 = *(code **)(*param_2 + 0xc0);
        local_90 = FUN_180001a20(&local_70,0x18003e200);
        local_88 = local_90;
        local_80 = FUN_180001ad0(local_90);
        iVar1 = (*local_78)(param_2,local_38,local_80,0,0,0,&local_f0,0);
        local_e8 = (uint)(-1 < iVar1);
        FUN_180001ab0(&local_70);
        if ((-1 < iVar1) && (local_f0 != (longlong *)0x0)) {
          Ordinal_8(local_58);
          local_68 = *(code **)(*local_f0 + 0x20);
          iVar1 = (*local_68)(local_f0,L"ReturnValue",0,local_58,0,0);
          if ((-1 < iVar1) && (local_50 == 0)) {
            Ordinal_8(local_20);
            local_60 = *(code **)(*local_f0 + 0x20);
            (*local_60)(local_f0,L"ProtectionStatus",0,local_20,0,0);
            *param_4 = local_18;
            local_e4 = 1;
          }
          Ordinal_9(local_58);
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))(local_c8);
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
  }
  Ordinal_9(local_40);
  return local_e4;
}




undefined4 FUN_18000f430(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  int local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  code *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_e4 = 0;
  local_e0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  Ordinal_8(local_40);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_a8 = *(code **)(*param_2 + 0x30);
    local_c0 = FUN_180001a20(&local_a0,0x18003e268);
    local_b8 = local_c0;
    local_b0 = FUN_180001ad0(local_c0);
    (*local_a8)(param_2,local_b0,0,0,&local_e0,0);
    FUN_180001ab0(&local_a0);
    if (local_e0 != (longlong *)0x0) {
      local_98 = *(code **)(*param_3 + 0x20);
      local_d8 = (*local_98)(param_3,L"__PATH",0,local_40,0,0);
      if (-1 < local_d8) {
        local_f0 = (longlong *)0x0;
        local_78 = *(code **)(*param_2 + 0xc0);
        local_90 = FUN_180001a20(&local_70,0x18003e2a8);
        local_88 = local_90;
        local_80 = FUN_180001ad0(local_90);
        iVar1 = (*local_78)(param_2,local_38,local_80,0,0,0,&local_f0,0);
        local_e8 = (uint)(-1 < iVar1);
        FUN_180001ab0(&local_70);
        if ((-1 < iVar1) && (local_f0 != (longlong *)0x0)) {
          Ordinal_8(local_58);
          local_68 = *(code **)(*local_f0 + 0x20);
          iVar1 = (*local_68)(local_f0,L"ReturnValue",0,local_58,0,0);
          if ((-1 < iVar1) && (local_50 == 0)) {
            Ordinal_8(local_20);
            local_60 = *(code **)(*local_f0 + 0x20);
            (*local_60)(local_f0,L"Version",0,local_20,0,0);
            *param_4 = local_18;
            local_e4 = 1;
          }
          Ordinal_9(local_58);
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))(local_c8);
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
  }
  Ordinal_9(local_40);
  return local_e4;
}




undefined4 FUN_18000f7e0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong *local_f0;
  uint local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  int local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  code *local_a8;
  longlong local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  code *local_68;
  code *local_60;
  undefined1 local_58 [8];
  int local_50;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  local_28 = 0xfffffffffffffffe;
  local_e4 = 0;
  local_e0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  Ordinal_8(local_40);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_a8 = *(code **)(*param_2 + 0x30);
    local_c0 = FUN_180001a20(&local_a0,0x18003e2e8);
    local_b8 = local_c0;
    local_b0 = FUN_180001ad0(local_c0);
    (*local_a8)(param_2,local_b0,0,0,&local_e0,0);
    FUN_180001ab0(&local_a0);
    if (local_e0 != (longlong *)0x0) {
      local_98 = *(code **)(*param_3 + 0x20);
      local_d8 = (*local_98)(param_3,L"__PATH",0,local_40,0,0);
      if (-1 < local_d8) {
        local_f0 = (longlong *)0x0;
        local_78 = *(code **)(*param_2 + 0xc0);
        local_90 = FUN_180001a20(&local_70,0x18003e328);
        local_88 = local_90;
        local_80 = FUN_180001ad0(local_90);
        iVar1 = (*local_78)(param_2,local_38,local_80,0,0,0,&local_f0,0);
        local_e8 = (uint)(-1 < iVar1);
        FUN_180001ab0(&local_70);
        if ((-1 < iVar1) && (local_f0 != (longlong *)0x0)) {
          Ordinal_8(local_58);
          local_68 = *(code **)(*local_f0 + 0x20);
          iVar1 = (*local_68)(local_f0,L"ReturnValue",0,local_58,0,0);
          if ((-1 < iVar1) && (local_50 == 0)) {
            Ordinal_8(local_20);
            local_60 = *(code **)(*local_f0 + 0x20);
            (*local_60)(local_f0,L"EncryptionMethod",0,local_20,0,0);
            *param_4 = local_18;
            local_e4 = 1;
          }
          Ordinal_9(local_58);
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))(local_d0);
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))(local_c8);
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))(local_e0);
  }
  Ordinal_9(local_40);
  return local_e4;
}




undefined4 FUN_18000fb90(longlong *param_1,int param_2,longlong param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 local_18;
  longlong *local_10;
  
  local_18 = 0xffffffff;
  local_10 = (longlong *)0x0;
  piVar3 = param_4;
  for (lVar2 = 0x70; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((longlong)piVar3 + 1);
  }
  if (((*param_1 != 0) && (iVar1 = FUN_180003900(param_1,param_2,param_3,&local_10), iVar1 != 0)) &&
     (local_10 != (longlong *)0x0)) {
    local_18 = FUN_180010170(param_1,local_10,param_4);
  }
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x10))(local_10);
  }
  return local_18;
}




undefined4 FUN_18000fc50(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  void *pvVar5;
  undefined4 *puVar6;
  wchar_t *_Src;
  undefined4 local_38;
  ulonglong local_30;
  
  local_38 = 0xffffffff;
  *param_3 = 0;
  lVar2 = FUN_180012550(param_2);
  if (lVar2 != 0) {
    uVar3 = FUN_180012550(param_2);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar3;
    _Var4 = SUB168(ZEXT816(0x210) * auVar1,0);
    if (SUB168(ZEXT816(0x210) * auVar1,8) != 0) {
      _Var4 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(_Var4);
    *(void **)(param_3 + 2) = pvVar5;
    if (*(longlong *)(param_3 + 2) != 0) {
      lVar2 = FUN_180012550(param_2);
      *param_3 = (int)lVar2;
      local_30 = 0;
      while( true ) {
        uVar3 = FUN_180012550(param_2);
        if (uVar3 <= local_30) break;
        puVar6 = (undefined4 *)FUN_180012520(param_2,local_30);
        *(undefined4 *)(*(longlong *)(param_3 + 2) + local_30 * 0x210) = *puVar6;
        *(undefined4 *)(*(longlong *)(param_3 + 2) + 4 + local_30 * 0x210) = 0;
        lVar2 = FUN_180012520(param_2,local_30);
        _Src = (wchar_t *)FUN_180012eb0(lVar2 + 8);
        wcscpy_s((wchar_t *)(*(longlong *)(param_3 + 2) + 8 + local_30 * 0x210),0x104,_Src);
        local_30 = local_30 + 1;
      }
    }
    if (*param_3 != 0) {
      local_38 = 0;
    }
  }
  return local_38;
}




undefined4 FUN_18000fde0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined4 *local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18 [2];
  
  local_20 = 0xfffffffffffffffe;
  local_68 = 0;
  puVar4 = param_3;
  for (lVar3 = 0x30; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  }
  lVar3 = FUN_180012550(param_2);
  if (lVar3 != 0) {
    FUN_180011670(local_30);
    for (local_58 = 0; uVar2 = FUN_180012550(param_2), local_58 < uVar2; local_58 = local_58 + 1) {
      lVar3 = FUN_180012520(param_2,local_58);
      FUN_180018e50(local_30,local_18,lVar3);
    }
    local_60 = 0;
    local_48 = local_30;
    FUN_1800115f0(local_48,&local_50);
    FUN_1800115b0(local_48,&local_40);
    while ((bVar1 = FUN_1800114c0(&local_50,&local_40), bVar1 &&
           (local_38 = (undefined4 *)FUN_180011590(&local_50), local_60 < 0xb))) {
      param_3[local_60 + 1] = *local_38;
      local_60 = local_60 + 1;
      FUN_180011500(&local_50);
    }
    *param_3 = (undefined4)local_60;
    local_68 = 1;
    FUN_18000ff50(local_30);
  }
  return local_68;
}




void FUN_18000ff50(undefined8 param_1)

{
  FUN_180011640(param_1);
  return;
}




undefined4 FUN_18000ff70(longlong *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  undefined7 extraout_var;
  longlong lVar4;
  __uint64 _Var5;
  void *_Memory;
  longlong *plVar6;
  undefined8 *puVar7;
  uint local_68;
  undefined4 local_64;
  longlong local_58;
  undefined8 local_50 [3];
  ulonglong local_38;
  void *local_30;
  int *local_28;
  void *local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_18 = 0xfffffffffffffffe;
  local_64 = 0xffffffff;
  if (*param_1 != 0) {
    FUN_180011b90(local_50);
    bVar2 = FUN_180003750(param_1,(longlong *)*param_1,local_50);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      FUN_180011b60(local_50);
    }
    else {
      lVar4 = FUN_1800117a0(local_50);
      if (lVar4 == 0) {
        FUN_180011b60(local_50);
      }
      else {
        local_38 = FUN_1800117a0(local_50);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_38;
        _Var5 = SUB168(ZEXT816(0x70) * auVar1,0);
        if (SUB168(ZEXT816(0x70) * auVar1,8) != 0) {
          _Var5 = 0xffffffffffffffff;
        }
        _Memory = operator_new(_Var5);
        local_30 = _Memory;
        if (_Memory == (void *)0x0) {
          FUN_180011b60(local_50);
        }
        else {
          local_68 = 0;
          FUN_180011820(local_50,&local_58);
          while( true ) {
            plVar6 = FUN_1800124b0(local_50,local_10);
            bVar2 = FID_conflict_operator__(&local_58,plVar6);
            if (!bVar2) break;
            local_28 = (int *)((longlong)_Memory + (ulonglong)local_68 * 0x70);
            puVar7 = (undefined8 *)FUN_180011700(&local_58);
            iVar3 = FUN_180010170(param_1,(longlong *)*puVar7,local_28);
            if (iVar3 == 0) {
              local_68 = local_68 + 1;
            }
            FUN_180011720(&local_58);
          }
          FUN_180003aa0(param_1,local_50);
          if (local_68 == 0) {
            local_20 = _Memory;
            free(_Memory);
            local_64 = 0xffffffff;
          }
          else {
            *param_2 = local_68;
            *(void **)(param_2 + 2) = _Memory;
            local_64 = 0;
          }
          FUN_180011b60(local_50);
        }
      }
    }
  }
  return local_64;
}




void FUN_180010170(longlong *param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStackY_b8 [32];
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74 [3];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58 [3];
  undefined8 local_40;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_38 [32];
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_b8;
  local_74[1] = 0xffffffff;
  piVar4 = param_3;
  for (lVar3 = 0x70; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)piVar4 = 0;
    piVar4 = (int *)((longlong)piVar4 + 1);
  }
  if ((*param_1 != 0) && (param_2 != (longlong *)0x0)) {
    local_84 = -1;
    local_60 = -1;
    iVar2 = FUN_180003430(param_1,param_2,&local_84,&local_60,(longlong *)(param_3 + 6));
    if (iVar2 != 0) {
      param_3[3] = local_84;
      *(longlong *)(param_3 + 4) = local_60;
      local_80 = 0;
      local_88 = 0xffffffff;
      iVar2 = FUN_180009210(param_1,(longlong *)*param_1,param_2,param_3);
      if (iVar2 != 0) {
        if (*param_3 == 0) {
          FUN_180008540(param_1,(longlong *)*param_1,param_2,&local_88,(float *)(param_3 + 2),
                        &local_80);
        }
        else {
          local_88 = 1;
          param_3[2] = 0;
        }
      }
      if (local_88 == 0xffffffff) {
        local_88 = 6;
      }
      param_3[0x17] = local_80;
      param_3[1] = local_88;
      FUN_18000f430(param_1,(longlong *)*param_1,param_2,param_3 + 8);
      local_7c = 0;
      FUN_18000f7e0(param_1,(longlong *)*param_1,param_2,&local_7c);
      param_3[0x16] = local_7c;
      local_78 = 0;
      FUN_18000f080(param_1,(longlong *)*param_1,param_2,&local_78);
      param_3[0x15] = local_78;
      FUN_180011b90(local_58);
      FUN_18000e280(param_1,(longlong *)*param_1,param_2,local_58);
      FUN_18000fc50(param_1,local_58,param_3 + 0x18);
      local_74[0] = 0;
      basic_string<>(local_38,L"");
      FUN_180009920(param_1,(longlong *)*param_1,param_2,local_74,local_38);
      if (local_74[0] != 0) {
        for (local_68 = 0; local_68 < (uint)param_3[0x18]; local_68 = local_68 + 1) {
          cVar1 = FUN_180018e90((wchar_t *)(*(longlong *)(param_3 + 0x1a) + 8 + local_68 * 0x210),
                                local_38);
          if (cVar1 != '\0') {
            *(undefined4 *)(*(longlong *)(param_3 + 0x1a) + 4 + local_68 * 0x210) = 1;
          }
        }
      }
      FUN_18000fde0(param_1,local_58,param_3 + 9);
      local_74[1] = 0;
      FUN_1800133c0(local_38);
      FUN_180012720(local_58);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_b8);
  return;
}




undefined4 FUN_180010550(undefined8 param_1,LPWSTR param_2)

{
  DWORD DVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  DVar1 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_180000000,param_2,0x104);
  if (DVar1 != 0) {
    param_2[0x103] = L'\0';
    lVar2 = FUN_180001040(param_2,L'\\');
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 2) = 0;
      local_18 = 1;
    }
  }
  return local_18;
}




BOOL FUN_1800105e0(undefined8 param_1,int param_2,undefined8 param_3,BYTE *param_4,DWORD *param_5,
                  DWORD *param_6)

{
  BOOL BVar1;
  longlong lVar2;
  BOOL local_48;
  HCRYPTHASH local_38;
  HCRYPTKEY local_30;
  HCRYPTPROV local_28;
  BYTE *local_20;
  HCRYPTHASH local_18;
  
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  BVar1 = CryptAcquireContextW
                    (&local_28,(LPCWSTR)0x0,L"Microsoft Enhanced RSA and AES Cryptographic Provider"
                     ,0x18,0xf0000000);
  if ((BVar1 != 0) && (BVar1 = CryptCreateHash(local_28,0x800c,0,0,&local_38), BVar1 != 0)) {
    lVar2 = FUN_180011de0(param_3);
    local_20 = (BYTE *)FUN_180011c50(param_3);
    local_18 = local_38;
    BVar1 = CryptHashData(local_38,local_20,(DWORD)lVar2,0);
    if ((BVar1 != 0) && (BVar1 = CryptDeriveKey(local_28,0x6610,local_38,0,&local_30), BVar1 != 0))
    {
      if (param_2 == 0) {
        local_48 = CryptDecrypt(local_30,0,1,0,param_4,param_5);
      }
      else {
        local_48 = CryptEncrypt(local_30,0,1,0,param_4,param_5,*param_6);
      }
    }
  }
  if (local_38 != 0) {
    CryptDestroyHash(local_38);
  }
  if (local_30 != 0) {
    CryptDestroyKey(local_30);
  }
  if (local_28 != 0) {
    CryptReleaseContext(local_28,0);
  }
  FUN_1800121e0(param_3);
  return local_48;
}




undefined4
FUN_1800107e0(undefined8 param_1,int param_2,undefined8 param_3,undefined1 *param_4,uint param_5,
             undefined8 param_6)

{
  BOOL BVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_78;
  undefined4 local_74;
  DWORD local_70;
  undefined4 local_6c;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  BYTE *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38 [5];
  
  local_40 = 0xfffffffffffffffe;
  local_74 = 0;
  if ((param_4 != (undefined1 *)0x0) && (param_5 != 0)) {
    FUN_180011890(param_6);
    FUN_180011f50(param_6,(ulonglong)(param_5 + 0x20));
    local_68 = (ulonglong)param_5;
    puVar2 = (undefined1 *)FUN_180011c50(param_6);
    for (uVar4 = local_68; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
    local_78 = param_5;
    lVar3 = FUN_180011de0(param_6);
    local_70 = (DWORD)lVar3;
    local_50 = (BYTE *)FUN_180011c50(param_6);
    local_60 = local_38;
    local_58 = FUN_1800122a0(local_60,param_3);
    local_48 = local_58;
    BVar1 = FUN_1800105e0(param_1,param_2,local_58,local_50,&local_78,&local_70);
    if (BVar1 != 0) {
      FUN_180011f50(param_6,(ulonglong)local_78);
      local_74 = 1;
    }
  }
  local_6c = local_74;
  FUN_1800121e0(param_3);
  return local_6c;
}




void FUN_180010960(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  ushort local_78;
  uint local_74;
  ushort *local_70;
  short *local_68;
  short *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  ushort *local_48;
  short *local_40;
  undefined8 local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_98;
  local_74 = 0;
  basic_string<>((longlong)local_30);
  local_58 = param_3;
  local_70 = (ushort *)FUN_180012eb0(param_3);
  local_48 = (ushort *)FUN_180013060(local_58);
  for (; local_70 != local_48; local_70 = local_70 + 1) {
    local_78 = *local_70;
    if (((local_78 != 0x7b) && (local_78 != 0x7d)) && (local_78 != 0x2d)) {
      iVar1 = toupper((uint)local_78);
      FID_conflict_push_back(local_30,(short)iVar1);
    }
  }
  local_50 = local_30;
  local_68 = (short *)FUN_180012eb0(local_50);
  local_40 = (short *)FUN_180013060(local_50);
  for (; local_68 != local_40; local_68 = local_68 + 1) {
    local_60 = local_68;
    if (*local_68 == 0x39) {
      *local_68 = 0x5a;
    }
    else {
      *local_68 = *local_68 + 1;
    }
  }
  FUN_180013490(param_2,local_30);
  local_74 = local_74 | 1;
  FUN_1800133c0(local_30);
  FUN_1800133c0(param_3);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_98);
  return;
}




void FUN_180010b10(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  longlong lVar2;
  undefined1 *puVar3;
  WCHAR *pWVar4;
  undefined1 auStackY_6e8 [32];
  DWORD local_6a8;
  int local_6a4;
  DWORD local_6a0;
  undefined4 local_69c;
  uint local_698;
  longlong local_690;
  DWORD local_688;
  _SID_NAME_USE local_684;
  DWORD local_680 [2];
  PSID_IDENTIFIER_AUTHORITY local_678;
  byte *local_670;
  PDWORD local_668;
  longlong local_660;
  longlong local_658;
  undefined1 local_648 [528];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_6e8;
  local_69c = 0;
  pWVar4 = local_438;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  local_688 = 0x104;
  BVar1 = GetUserNameW(local_438,&local_688);
  if (BVar1 != 0) {
    puVar3 = local_648;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    pWVar4 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar4 = 0;
      pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
    }
    local_6a8 = 0x208;
    local_680[0] = 0x104;
    local_684 = SidTypeInvalid;
    BVar1 = LookupAccountNameW((LPCWSTR)0x0,local_438,local_648,&local_6a8,local_228,local_680,
                               &local_684);
    if (((BVar1 != 0) && (BVar1 = IsValidSid(local_648), BVar1 != 0)) &&
       (local_678 = GetSidIdentifierAuthority(local_648),
       local_678 != (PSID_IDENTIFIER_AUTHORITY)0x0)) {
      local_6a8 = 0;
      local_6a4 = FUN_1800011c0(param_2,0x104,L"S-%lu-",1);
      if (local_6a4 == -1) {
        local_6a4 = -1;
      }
      else {
        local_6a8 = local_6a8 + local_6a4;
        local_690 = -1;
        do {
          local_690 = local_690 + 1;
        } while (*(short *)(param_2 + local_690 * 2) != 0);
        local_658 = param_2 + local_690 * 2;
        local_660 = param_2;
        local_6a4 = FUN_1800011c0(local_658,(ulonglong)(0x104 - local_6a8),L"%-lu",
                                  (ulonglong)local_678->Value[5]);
        if (local_6a4 != -1) {
          local_6a8 = local_6a8 + local_6a4;
          local_6a0 = 0;
          local_670 = GetSidSubAuthorityCount(local_648);
          if ((local_670 != (byte *)0x0) && (local_698 = (uint)*local_670, local_698 < 0x10)) {
            local_69c = 1;
            for (local_6a0 = 0; local_6a0 < local_698; local_6a0 = local_6a0 + 1) {
              local_668 = GetSidSubAuthority(local_648,local_6a0);
              if (local_668 == (PDWORD)0x0) {
                local_69c = 0;
                break;
              }
              local_6a4 = FUN_1800011c0(param_2 + (ulonglong)local_6a8 * 2,
                                        (ulonglong)(0x104 - local_6a8),L"-%lu",(ulonglong)*local_668
                                       );
              if (local_6a4 == -1) {
                local_69c = 0;
                break;
              }
              local_6a8 = local_6a8 + local_6a4;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_6e8);
  return;
}




void FUN_180010e40(undefined8 param_1,wchar_t *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  short *psVar4;
  LPCWSTR lpFileName;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStackY_358 [32];
  longlong local_310;
  DWORD local_304;
  DWORD local_300;
  HANDLE local_2f8;
  undefined8 local_2f0 [3];
  undefined8 local_2d8 [3];
  short *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined1 *local_298;
  undefined8 *local_290;
  LPCVOID local_288;
  undefined8 local_280;
  undefined8 local_278 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_260 [40];
  short local_238 [264];
  ulonglong local_28;
  
  local_280 = 0xfffffffffffffffe;
  local_28 = DAT_18004e038 ^ (ulonglong)auStackY_358;
  psVar4 = local_238;
  for (lVar5 = 0x208; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)psVar4 = 0;
    psVar4 = (short *)((longlong)psVar4 + 1);
  }
  iVar1 = FUN_180010b10(param_1,(longlong)local_238);
  if (iVar1 != 0) {
    local_2c0 = local_238;
    local_310 = -1;
    do {
      local_310 = local_310 + 1;
    } while (local_2c0[local_310] != 0);
    FUN_180011f50(param_3,local_310 * 2);
    local_2b8 = FUN_180011de0(param_3);
    puVar2 = (undefined1 *)FUN_180011c50(param_3);
    psVar4 = local_238;
    for (lVar5 = local_2b8; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar2 = (char)*psVar4;
      psVar4 = (short *)((longlong)psVar4 + 1);
      puVar2 = puVar2 + 1;
    }
    FUN_180011b90(local_2f0);
    FUN_180011f50(local_2f0,8);
    local_2b0 = FUN_180011de0(local_2f0);
    pcVar3 = (char *)FUN_180011c50(local_2f0);
    pcVar6 = "easeusbl";
    for (lVar5 = local_2b0; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pcVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_180011b90(local_2d8);
    lVar5 = FUN_180011de0(param_3);
    local_298 = (undefined1 *)FUN_180011c50(param_3);
    local_2a8 = local_278;
    local_2a0 = FUN_1800122a0(local_2a8,local_2f0);
    local_290 = local_2a0;
    iVar1 = FUN_1800107e0(param_1,1,local_2a0,local_298,(uint)lVar5,local_2d8);
    if (iVar1 == 0) {
      FUN_1800121e0(local_2d8);
      FUN_1800121e0(local_2f0);
    }
    else {
      basic_string<>(local_260,param_2);
      lVar5 = FUN_180012e90(local_260);
      psVar4 = (short *)FUN_180013020(local_260,lVar5 + -1);
      if (*psVar4 != 0x5c) {
        FUN_1800132a0(local_260,L"\\");
      }
      FUN_1800132a0(local_260,L"temp.dat");
      lpFileName = (LPCWSTR)FUN_180012eb0(local_260);
      local_2f8 = CreateFileW(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
      ;
      if (local_2f8 == (HANDLE)0xffffffffffffffff) {
        FUN_1800133c0(local_260);
        FUN_1800121e0(local_2d8);
        FUN_1800121e0(local_2f0);
      }
      else {
        local_304 = 0;
        lVar5 = FUN_180011de0(local_2d8);
        local_300 = (DWORD)lVar5;
        local_288 = (LPCVOID)FUN_180011c50(local_2d8);
        WriteFile(local_2f8,local_288,local_300,&local_304,(LPOVERLAPPED)0x0);
        CloseHandle(local_2f8);
        FUN_1800133c0(local_260);
        FUN_1800121e0(local_2d8);
        FUN_1800121e0(local_2f0);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_358);
  return;
}




void FUN_1800111e0(undefined8 param_1,wchar_t *param_2,undefined8 param_3)

{
  BOOL BVar1;
  longlong lVar2;
  short *psVar3;
  LPCWSTR lpFileName;
  LPVOID lpBuffer;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [4];
  DWORD local_d4;
  DWORD local_d0;
  undefined4 local_cc;
  HANDLE local_c8;
  uint local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 local_90 [3];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined8 local_58 [3];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_40 [32];
  ulonglong local_20;
  
  local_60 = 0xfffffffffffffffe;
  local_20 = DAT_18004e038 ^ (ulonglong)auStackY_118;
  local_cc = 0;
  basic_string<>(local_40,param_2);
  lVar2 = FUN_180012e90(local_40);
  psVar3 = (short *)FUN_180013020(local_40,lVar2 + -1);
  if (*psVar3 != 0x5c) {
    FUN_1800132a0(local_40,L"\\");
  }
  FUN_1800132a0(local_40,L"temp.dat");
  lpFileName = (LPCWSTR)FUN_180012eb0(local_40);
  local_c8 = CreateFileW(lpFileName,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (local_c8 == (HANDLE)0xffffffffffffffff) {
    FUN_1800133c0(local_40);
  }
  else {
    FUN_180011b90(local_78);
    local_d4 = GetFileSize(local_c8,(LPDWORD)0x0);
    if ((local_d4 != 0) && (local_d4 < 1000000)) {
      local_d8[0] = 0;
      FUN_180011e70(local_78,(ulonglong)local_d4,local_d8);
      local_d0 = 0;
      lpBuffer = (LPVOID)FUN_180011c50(local_78);
      BVar1 = ReadFile(local_c8,lpBuffer,local_d4,&local_d0,(LPOVERLAPPED)0x0);
      if ((BVar1 != 0) && (local_d0 == local_d4)) {
        FUN_180011b90(local_90);
        FUN_180011f50(local_90,8);
        local_b8 = FUN_180011de0(local_90);
        pcVar4 = (char *)FUN_180011c50(local_90);
        pcVar5 = "easeusbl";
        for (lVar2 = local_b8; lVar2 != 0; lVar2 = lVar2 + -1) {
          *pcVar4 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        }
        lVar2 = FUN_180011de0(local_78);
        local_c0 = (uint)lVar2;
        local_a0 = (undefined1 *)FUN_180011c50(local_78);
        local_b0 = local_58;
        local_a8 = FUN_1800122a0(local_b0,local_90);
        local_98 = local_a8;
        local_cc = FUN_1800107e0(param_1,0,local_a8,local_a0,local_c0,param_3);
        FUN_1800121e0(local_90);
      }
    }
    CloseHandle(local_c8);
    FUN_1800121e0(local_78);
    FUN_1800133c0(local_40);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStackY_118);
  return;
}




bool FUN_1800114c0(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FUN_180014d10(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




longlong * FUN_180011500(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(*(longlong *)(*param_1 + 0x10) + 0x19) == '\0') {
    plVar2 = FUN_180014da0(*(longlong **)(*param_1 + 0x10));
    *param_1 = (longlong)plVar2;
  }
  else {
    while ((lVar1 = *(longlong *)(*param_1 + 8), *(char *)(lVar1 + 0x19) == '\0' &&
           (*param_1 == *(longlong *)(lVar1 + 0x10)))) {
      *param_1 = lVar1;
    }
    *param_1 = lVar1;
  }
  return param_1;
}




longlong FUN_180011590(longlong *param_1)

{
  return *param_1 + 0x1c;
}




undefined8 * FUN_1800115b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_180014d50(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_1800115f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  puVar1 = (undefined8 *)FUN_180014d90(puVar1);
  FUN_180014d50(param_2,*puVar1);
  return param_2;
}




void FUN_180011640(undefined8 param_1)

{
  FUN_180014e30(param_1);
  FUN_180014e00(param_1);
  return;
}




undefined8 * FUN_180011670(undefined8 *param_1)

{
  undefined1 local_18 [24];
  
  FUN_180014e90(param_1,local_18);
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator!=(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator!=(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FID_conflict_operator__(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




longlong * FUN_1800116e0(longlong *param_1)

{
  FUN_180014fa0(param_1);
  return param_1;
}




void FUN_180011700(undefined8 *param_1)

{
  FUN_180014d90(param_1);
  return;
}




longlong * FUN_180011720(longlong *param_1)

{
  FUN_180015000(param_1);
  return param_1;
}




longlong FUN_180011740(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  return *plVar1 + -8;
}




longlong FUN_180011770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 + param_2 * 8;
}




longlong FUN_1800117a0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2 >> 3;
}




undefined8 FUN_1800117e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014ec0(param_1);
  return *puVar1;
}




undefined8 FUN_180011800(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014ee0(param_1);
  return *puVar1;
}




undefined8 * FUN_180011820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_1800016d0(uVar1);
  puVar2 = (undefined8 *)FUN_180014ee0(param_1);
  FUN_180014fc0(param_2,*puVar2);
  return param_2;
}




void FUN_180011890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_180012c70(param_1);
  FUN_180014ec0(param_1);
  FUN_180014ee0(param_1);
  FUN_180015110(param_1);
  puVar2 = (undefined8 *)FUN_180014ee0(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  *puVar2 = uVar1;
  return;
}




void FUN_180011920(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  FUN_1800016d0(*plVar1 + -8);
  FUN_180014f00(param_1);
  FUN_1800016c0();
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = *plVar1 + -8;
  return;
}




undefined8 *
FUN_180011990(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_4);
  FUN_180018ec0(param_1,param_2,param_3,uVar1);
  return param_2;
}




void FUN_1800119e0(undefined8 param_1,undefined8 param_2)

{
  FUN_180011a10(param_1,param_2);
  return;
}




longlong FUN_180011a10(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_180011a90(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_1800190b0(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




undefined8 FUN_180011a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800016d0(param_2);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar3 = FUN_1800016d0(*puVar2);
  uVar4 = FUN_180014f00(param_1);
  construct<>(uVar4,uVar3,uVar1);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180014ec0(param_1);
  *plVar5 = *plVar5 + 8;
  return uVar1;
}




void FUN_180011b60(undefined8 param_1)

{
  FUN_180015030(param_1);
  return;
}




undefined8 * FUN_180011b90(undefined8 *param_1)

{
  _String_alloc<>(param_1);
  return param_1;
}




longlong FUN_180011bc0(longlong param_1,longlong param_2)

{
  return param_1 + param_2;
}




longlong FUN_180011be0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 + param_2 * 2;
}




longlong FUN_180011c10(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2 >> 1;
}




void FUN_180011c50(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014ee0(param_1);
  FUN_1800016d0(*puVar1);
  return;
}




void FUN_180011c80(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_18 [3];
  
  FUN_180011d00(local_18,param_1);
  FUN_180019310(param_1,param_2,local_18[0]);
  return;
}




void FUN_180011cc0(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180015380(*param_1,param_2,param_3);
  return;
}




undefined8 * FUN_180011d00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_180011d20(undefined8 param_1)

{
  FUN_1800151a0(param_1);
  return;
}




undefined8 * FUN_180011d50(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_1800195b0(param_1,param_3);
  uVar1 = FUN_180015280(param_1,param_2);
  if ((uVar1 & 0xff) != 0) {
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    uVar3 = FUN_180015380(param_1,(undefined1 *)*puVar2,param_2);
    puVar2 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar2 = uVar3;
  }
  return param_1;
}




longlong FUN_180011de0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2;
}




bool FUN_180011e20(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  plVar2 = (longlong *)FUN_180014ec0(param_1);
  return *plVar1 == *plVar2;
}




void FUN_180011e70(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_38 [2];
  undefined8 local_28 [3];
  
  FUN_180011f20(local_38,param_1,param_3);
  puVar2 = local_38;
  puVar3 = local_28;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_180019630(param_1,param_2,local_28);
  return;
}




void FUN_180011ed0(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180015830(*param_1,param_2,param_3,(undefined1 *)param_1[1]);
  return;
}




undefined8 * FUN_180011f20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}




void FUN_180011f50(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_18 [3];
  
  FUN_180011d00(local_18,param_1);
  FUN_1800198c0(param_1,param_2,local_18[0]);
  return;
}




void FUN_180011f90(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180015870(*param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180011ff5) */

longlong FUN_180011fd0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1800016d0(param_2);
  if (param_1 != lVar2) {
    FUN_180014f00(param_2);
    FUN_1800153c0(param_1);
    puVar3 = (undefined8 *)FUN_180014ec0(param_2);
    uVar1 = *puVar3;
    puVar3 = (undefined8 *)FUN_180014ee0(param_2);
    FUN_180018c50(param_1,*puVar3,uVar1);
  }
  return param_1;
}




undefined8 FUN_180012060(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800016d0(param_2);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar3 = FUN_1800016d0(*puVar2);
  uVar4 = FUN_180014f00(param_1);
  FUN_180019b50(uVar4,uVar3,uVar1);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180014ec0(param_1);
  *plVar5 = *plVar5 + 1;
  return uVar1;
}




void FUN_180012130(undefined8 param_1,undefined8 param_2)

{
  FUN_180012160(param_1,param_2);
  return;
}




longlong FUN_180012160(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_180012060(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_180019b90(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




void FUN_1800121e0(undefined8 param_1)

{
  FUN_180015410(param_1);
  return;
}




<lambda_1> * FUN_180012210(<lambda_1> *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  __uint64 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_180014f00(param_2);
  uVar1 = FUN_1800016d0(uVar1);
  FUN_1800195b0((undefined8 *)param_1,uVar1);
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28[1] = local_28[0];
  local_20 = (__uint64 *)FUN_1800016d0(param_2);
  FUN_180015940(param_1,local_20);
  return param_1;
}




undefined8 * FUN_1800122a0(undefined8 *param_1,undefined8 param_2)

{
  CLogWriter *pCVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  CLogWriter local_48 [8];
  CLogWriter *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pCVar1 = (CLogWriter *)FUN_180014f00(param_2);
  pCVar1 = CLogWriter::operator=(local_48,pCVar1);
  FUN_1800195b0(param_1,pCVar1);
  uVar2 = FUN_180011de0(param_2);
  uVar2 = FUN_180015610(param_1,uVar2);
  if ((uVar2 & 0xff) != 0) {
    puVar3 = (undefined8 *)FUN_180014ee0(param_1);
    local_40 = (CLogWriter *)*puVar3;
    puVar3 = (undefined8 *)FUN_180014ec0(param_2);
    local_38 = *puVar3;
    puVar3 = (undefined8 *)FUN_180014ee0(param_2);
    local_30 = *puVar3;
    local_28 = FUN_1800157f0(param_1,local_30,local_38,local_40);
    local_20 = local_28;
    puVar3 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar3 = local_20;
  }
  return param_1;
}




undefined8 *
FUN_180012380(undefined8 *param_1,ulonglong param_2,undefined1 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_1800195b0(param_1,param_4);
  uVar1 = FUN_180015610(param_1,param_2);
  if ((uVar1 & 0xff) != 0) {
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    uVar3 = FUN_180015830(param_1,(undefined1 *)*puVar2,param_2,param_3);
    puVar2 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar2 = uVar3;
  }
  return param_1;
}




undefined8 * FUN_180012420(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_1800195b0(param_1,param_3);
  uVar1 = FUN_180015610(param_1,param_2);
  if ((uVar1 & 0xff) != 0) {
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    uVar3 = FUN_180015870(param_1,(undefined1 *)*puVar2,param_2);
    puVar2 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar2 = uVar3;
  }
  return param_1;
}




undefined8 * FUN_1800124b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_1800016d0(uVar1);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  FUN_180014fc0(param_2,*puVar2);
  return param_2;
}




longlong FUN_180012520(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return param_2 * 0x28 + *plVar1;
}




longlong FUN_180012550(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return (*plVar1 - *plVar2) / 0x28;
}




void FUN_1800125a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_2);
  FUN_1800125d0(param_1,uVar1);
  return;
}




longlong FUN_1800125d0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_180012650(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_180019e40(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




undefined8 FUN_180012650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800016d0(param_2);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar3 = FUN_1800016d0(*puVar2);
  uVar4 = FUN_180014f00(param_1);
  FUN_180019df0(uVar4,uVar3,uVar1);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180014ec0(param_1);
  *plVar5 = *plVar5 + 0x28;
  return uVar1;
}




void FUN_180012720(undefined8 param_1)

{
  FUN_180015a80(param_1);
  return;
}




void FUN_180012750(undefined8 param_1,undefined8 param_2)

{
  FUN_180012780(param_1,param_2);
  return;
}




longlong FUN_180012780(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_180012800(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_18001a110(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




undefined8 FUN_180012800(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  _Container_proxy *p_Var2;
  undefined8 *puVar3;
  _Container_proxy *p_Var4;
  allocator<struct_std::_Container_proxy> *paVar5;
  longlong *plVar6;
  
  p_Var2 = (_Container_proxy *)FUN_1800016d0(param_2);
  puVar3 = (undefined8 *)FUN_180014ec0(param_1);
  p_Var4 = (_Container_proxy *)FUN_1800016d0(*puVar3);
  paVar5 = (allocator<struct_std::_Container_proxy> *)FUN_180014f00(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar5,p_Var4,p_Var2);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar3 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar3;
  plVar6 = (longlong *)FUN_180014ec0(param_1);
  *plVar6 = *plVar6 + 0x30;
  return uVar1;
}




longlong FUN_1800128d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return param_2 * 0x20 + *plVar1;
}




longlong FUN_180012900(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2 >> 5;
}




void FUN_180012940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_2);
  FUN_180012970(param_1,uVar1);
  return;
}




longlong FUN_180012970(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_1800129f0(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_18001a3e0(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




undefined8 FUN_1800129f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800016d0(param_2);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar3 = FUN_1800016d0(*puVar2);
  uVar4 = FUN_180014f00(param_1);
  FUN_18001a390(uVar4,uVar3,uVar1);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180014ec0(param_1);
  *plVar5 = *plVar5 + 0x20;
  return uVar1;
}




void FUN_180012ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_180012af0(param_1,param_2);
  return;
}




longlong FUN_180012af0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_180012b70(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_18001a6b0(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




undefined8 FUN_180012b70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800016d0(param_2);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar3 = FUN_1800016d0(*puVar2);
  uVar4 = FUN_180014f00(param_1);
  FUN_18001a660(uVar4,uVar3,uVar1);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180014ec0(param_1);
  *plVar5 = *plVar5 + 0x20;
  return uVar1;
}




void FUN_180012c40(undefined8 param_1)

{
  FUN_180015b60(param_1);
  return;
}




void FUN_180012c70(undefined8 param_1)

{
  FUN_180014f00(param_1);
  FUN_1800016b0();
  return;
}




longlong FUN_180012c90(undefined8 param_1,longlong param_2,__uint64 param_3,__uint64 param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_180015f30(param_1,local_18);
  FUN_180016800(param_2,param_1,param_3,param_4,uVar1);
  return param_2;
}




void FUN_180012d00(undefined8 param_1,wchar_t *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  
  puVar2 = (undefined8 *)FUN_180014f00(param_1);
  _Var3 = std::_WChar_traits<wchar_t>::length(param_2);
  uVar1 = puVar2[2];
  puVar2 = Myptr(puVar2);
  FUN_18001a930((longlong)puVar2,uVar1,param_3,(ushort *)param_2,_Var3);
  return;
}




bool FUN_180012d90(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180012e90(param_1);
  return lVar1 == 0;
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
  
  FUN_180014f00(param_1);
  local_30 = FUN_180015d20();
  local_38 = 8;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
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




undefined8 FUN_180012e90(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180014f00(param_1);
  return *(undefined8 *)(lVar1 + 0x10);
}




void FUN_180012eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014f00(param_1);
  Myptr(puVar1);
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
  local_20 = (undefined8 *)FUN_180014f00(param_1);
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




longlong FUN_180013020(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014f00(param_1);
  puVar1 = Myptr(puVar1);
  return (longlong)puVar1 + param_2 * 2;
}




longlong FUN_180013060(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180014f00(param_1);
  puVar2 = Myptr(puVar1);
  return (longlong)puVar2 + puVar1[2] * 2;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::replace(unsigned __int64,unsigned __int64,char const * __ptr64 const) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::replace
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1,__uint64 param_2,char *param_3)

{
  __uint64 _Var1;
  ulonglong uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  
  _Var1 = _WChar_traits<wchar_t>::length((wchar_t *)param_3);
  uVar2 = FUN_1800016d0(_Var1);
  pbVar3 = FUN_180015f60(this,param_1,param_2,param_3,uVar2);
  return pbVar3;
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
  
  local_20 = (undefined8 *)FUN_180014f00(this);
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




undefined8 FUN_180013270(undefined8 param_1,undefined2 param_2)

{
  FID_conflict_push_back(param_1,param_2);
  return param_1;
}




void FUN_1800132a0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,param_2);
  return;
}




void FUN_1800132d0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,undefined8 param_2)

{
  FUN_180016560(param_1,param_2);
  return;
}




void FUN_180013300(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180013355) */

longlong FUN_180013330(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1800016d0(param_2);
  if (param_1 != lVar2) {
    FUN_180014f00(param_2);
    FUN_1800153c0(param_1);
    puVar3 = (undefined8 *)FUN_180014f00(param_2);
    uVar1 = puVar3[2];
    puVar3 = Myptr(puVar3);
    FID_conflict_assign(param_1,(undefined1 *)puVar3,uVar1);
  }
  return param_1;
}




void FUN_1800133c0(undefined8 param_1)

{
  FID_conflict__Tidy_deallocate(param_1);
  FUN_180014c10();
  return;
}




longlong FUN_1800133f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = FUN_1800016d0(param_2);
  if (param_1 != lVar1) {
    FID_conflict__Tidy_deallocate(param_1);
    uVar2 = FUN_180014f00(param_2);
    FUN_180015d30(param_1,uVar2);
    puVar3 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28[1] = local_28[0];
    local_20 = FUN_1800016d0(param_2);
    FUN_1800167a0(param_1,local_20);
  }
  return param_1;
}




longlong FUN_180013490(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_180014f00(param_2);
  uVar1 = FUN_1800016d0(uVar1);
  FUN_18001adf0(param_1,uVar1);
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28[1] = local_28[0];
  local_20 = FUN_1800016d0(param_2);
  FUN_180016720(param_1,local_20);
  return param_1;
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
  _String_alloc<>((longlong)param_1);
  FID_conflict__Tidy_init(param_1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
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
  _String_alloc<>(param_1);
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
  _String_alloc<>(param_1);
  FID_conflict__Tidy_init(param_1);
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
  CLogWriter *pCVar1;
  CLogWriter local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pCVar1 = (CLogWriter *)FUN_180014f00(param_2);
  pCVar1 = CLogWriter::operator=(local_18,pCVar1);
  FUN_18001adf0(param_1,pCVar1);
  FID_conflict__Construct_lv_contents(param_1,param_2);
  return param_1;
}




void FUN_180013660(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  longlong local_18;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_1);
  if ((*(ulonglong *)(local_20 + 0x10) <= param_2) && (*(ulonglong *)(local_20 + 0x18) != param_2))
  {
    if (*(ulonglong *)(local_20 + 0x18) < param_2) {
      local_18 = *(longlong *)(local_20 + 0x10);
      puVar3 = local_28;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FUN_18001ae40(param_1,param_2 - local_18,local_28[0]);
      *(longlong *)(local_20 + 0x10) = local_18;
    }
    else if ((param_2 < 0x10) &&
            (bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged
                               (local_20), bVar1)) {
      FUN_180016990(param_1);
    }
  }
  return;
}




void FUN_180013740(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  FUN_180001580(param_2,param_3,param_4 + 1);
  return;
}




void FUN_180013780(undefined8 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_1);
  Myptr(p_Var1);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::begin(void) __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::begin(void) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * FID_conflict_begin(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  
  uVar1 = FUN_180014f00(param_1);
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1800016d0(uVar1);
  p_Var2 = Myptr(p_Var2);
  uVar1 = FUN_1800016d0(p_Var2);
  FUN_180014fc0(param_2,uVar1);
  return param_2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(char const * __ptr64 const) __ptr64
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64 const) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  
  lVar1 = length((longlong)param_1);
  _Var2 = FUN_1800016d0(lVar1);
  pbVar3 = append(this,param_1,_Var2);
  return pbVar3;
}




void FUN_180013860(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined8 param_2)

{
  __uint64 _Var1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_2);
  _Var1 = *(__uint64 *)(p_Var2 + 0x10);
  p_Var2 = Myptr(p_Var2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,(char *)p_Var2,_Var1);
  return;
}




void FUN_1800138c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined8 param_2)

{
  FUN_180013860(param_1,param_2);
  return;
}




void FUN_1800138f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_180014c10();
  return;
}




longlong FUN_180013920(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_180014f00(param_2);
  uVar1 = FUN_1800016d0(uVar1);
  FUN_18001adf0(param_1,uVar1);
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28[1] = local_28[0];
  local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_1800016d0(param_2);
  FUN_180017000(param_1,local_20);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(char const *
   __ptr64 const) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  _String_alloc<>((longlong)this);
  _Tidy_init(this);
  assign(this,param_1);
  return this;
}




/* Library Function - Single Match
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(char const *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1,__uint64 param_2)

{
  _String_alloc<>((longlong)this);
  _Tidy_init(this);
  assign(this,param_1,param_2);
  return this;
}




/* Library Function - Single Match
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(void) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  _String_alloc<>((longlong)this);
  _Tidy_init(this);
  return this;
}




void FUN_180013a90(longlong *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  pbVar1 = FUN_1800174b0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 1));
  if (pbVar1 == (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),2,false);
  }
  return;
}




void FUN_180013af0(longlong param_1)

{
  *(undefined ***)(param_1 + -0xa8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       std::basic_ofstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(param_1 + -0xac + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       *(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xa8;
  FUN_180014ba0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + -0xa0));
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)(param_1 + -0x98));
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_180013b80(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2,uint param_3
             ,int param_4,int param_5)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  if (param_5 != 0) {
    *(undefined **)param_1 = &DAT_180042c10;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0xa8));
  }
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  basic_ostream<char,struct_std::char_traits<char>_>
            (param_1,(basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 8),false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ofstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  FUN_180017600((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 8),0);
  pbVar1 = FUN_180017540((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 8),
                         param_2,param_3 | 2,param_4);
  if (pbVar1 == (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,struct_std::char_traits<char>_>::setstate
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return param_1;
}




void FUN_180013cd0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,locale *param_2)

{
  _Facet_base *p_Var1;
  
  p_Var1 = FUN_18001afe0(param_2);
  FUN_180017170(param_1,(codecvt_base *)p_Var1);
  return;
}




undefined4 FUN_180013d00(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int local_20;
  int local_1c;
  code *local_18;
  
  if (param_1[0x10] != 0) {
    local_18 = *(code **)(*param_1 + 0x18);
    uVar3 = FUN_1800016a0();
    local_20 = (*local_18)(param_1,uVar3 & 0xffffffff);
    uVar4 = FUN_1800016a0();
    local_1c = (int)uVar4;
    bVar1 = eq_int_type(&local_1c,&local_20);
    if ((!bVar1) && (iVar2 = fflush((FILE *)param_1[0x10]), iVar2 < 0)) {
      return 0xffffffff;
    }
  }
  return 0;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180013da0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
             size_t param_3)

{
  int iVar1;
  int local_18;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((param_2 == (char *)0x0) && (param_3 == 0)) {
      local_18 = 4;
    }
    else {
      local_18 = 0;
    }
    iVar1 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,local_18,param_3);
    if (iVar1 == 0) {
      FUN_180017380(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
}




fpos<struct__Mbstatet> *
FUN_180013e40(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,
             fpos<struct__Mbstatet> *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_18 = FUN_1800177c0(param_3);
  if (((*(longlong *)(param_1 + 0x80) != 0) &&
      (cVar1 = FUN_1800171d0((longlong *)param_1), cVar1 != '\0')) &&
     (iVar2 = fsetpos(*(FILE **)(param_1 + 0x80),&local_18), iVar2 == 0)) {
    puVar3 = FUN_1800177e0((longlong)param_3,local_10);
    *(undefined8 *)(param_1 + 0x74) = *puVar3;
    FUN_180017110(param_1);
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>
              (param_2,*(undefined8 *)(param_1 + 0x74),local_18);
    return param_2;
  }
  std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  return param_2;
}




fpos<struct__Mbstatet> *
FUN_180013f10(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,
             fpos<struct__Mbstatet> *param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar3;
  longlong local_res18;
  fpos_t local_18 [3];
  
  pbVar3 = (basic_streambuf<char,struct_std::char_traits<char>_> *)
           std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  local_res18 = param_3;
  if (((pbVar3 == param_1 + 0x70) && (param_4 == 1)) && (*(longlong *)(param_1 + 0x68) == 0)) {
    local_res18 = param_3 + -1;
  }
  if ((((*(longlong *)(param_1 + 0x80) != 0) &&
       (cVar1 = FUN_1800171d0((longlong *)param_1), cVar1 != '\0')) &&
      (((local_res18 == 0 && (param_4 == 1)) ||
       (iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),local_res18,param_4), iVar2 == 0)))) &&
     (iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),local_18), iVar2 == 0)) {
    FUN_180017110(param_1);
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>
              (param_2,*(undefined8 *)(param_1 + 0x74),local_18[0]);
    return param_2;
  }
  std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  return param_2;
}




__int64 FUN_180014010(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                     size_t param_3)

{
  __int64 _Var1;
  char *pcVar2;
  size_t sVar3;
  char *local_res10;
  size_t local_res18;
  size_t local_18;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pnavail(param_1);
    local_res10 = param_2;
    local_res18 = param_3;
    if ((0 < (longlong)param_3) && (0 < (longlong)local_18)) {
      if ((longlong)param_3 < (longlong)local_18) {
        local_18 = param_3;
      }
      pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
      FUN_180001580(pcVar2,param_2,local_18);
      local_res10 = param_2 + local_18;
      local_res18 = param_3 - local_18;
      std::basic_streambuf<char,struct_std::char_traits<char>_>::pbump(param_1,(int)local_18);
    }
    if ((0 < (longlong)local_res18) && (*(longlong *)(param_1 + 0x80) != 0)) {
      sVar3 = fwrite(local_res10,1,local_res18,*(FILE **)(param_1 + 0x80));
      local_res18 = local_res18 - sVar3;
    }
    _Var1 = param_3 - local_res18;
  }
  else {
    _Var1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::xsputn
                      (param_1,param_2,param_3);
  }
  return _Var1;
}




__int64 FUN_180014140(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                     size_t param_3)

{
  __int64 _Var1;
  char *pcVar2;
  size_t sVar3;
  char *local_res10;
  size_t local_res18;
  size_t local_18;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gnavail(param_1);
    local_res10 = param_2;
    local_res18 = param_3;
    if ((0 < (longlong)param_3) && (0 < (longlong)local_18)) {
      if ((longlong)param_3 < (longlong)local_18) {
        local_18 = param_3;
      }
      pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
      FUN_180001580(param_2,pcVar2,local_18);
      local_res10 = param_2 + local_18;
      local_res18 = param_3 - local_18;
      std::basic_streambuf<char,struct_std::char_traits<char>_>::gbump(param_1,(int)local_18);
    }
    if ((0 < (longlong)local_res18) && (*(longlong *)(param_1 + 0x80) != 0)) {
      FUN_180017110(param_1);
      sVar3 = fread(local_res10,1,local_res18,*(FILE **)(param_1 + 0x80));
      local_res18 = local_res18 - sVar3;
    }
    _Var1 = param_3 - local_res18;
  }
  else {
    _Var1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::xsgetn
                      (param_1,param_2,param_3);
  }
  return _Var1;
}




void FUN_180014280(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 extraout_var_00;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8;
  char local_a7;
  char local_a6 [2];
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  char *local_80;
  char *local_78;
  longlong local_70;
  char *local_68;
  char *local_60;
  codecvt<char,char,struct__Mbstatet> *local_58;
  char *local_50;
  longlong local_48;
  undefined8 local_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_e8;
  pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  if (pcVar3 != (char *)0x0) {
    local_78 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
    pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::egptr(param_1);
    if (local_78 < pcVar3) {
      pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gninc(param_1);
      FUN_180001600(pcVar3);
      goto LAB_1800145e9;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_1800016a0();
  }
  else {
    FUN_180017110(param_1);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      bVar1 = FUN_180001e10(&local_a8,*(FILE **)(param_1 + 0x80));
      if (bVar1) {
        uVar2 = FUN_180001600(&local_a8);
        local_a0 = (undefined4)CONCAT71(extraout_var,uVar2);
      }
      else {
        uVar4 = FUN_1800016a0();
        local_a0 = (undefined4)uVar4;
      }
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
      while (local_9c = fgetc(*(FILE **)(param_1 + 0x80)), local_9c != -1) {
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                  (local_38,(char)local_9c);
        local_58 = *(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68);
        local_70 = FUN_180013780(local_38);
        lVar5 = FUN_180012e90(local_38);
        local_68 = (char *)(local_70 + lVar5);
        local_60 = (char *)FUN_180013780(local_38);
        local_a4 = std::codecvt<char,char,struct__Mbstatet>::in
                             (local_58,(_Mbstatet *)(param_1 + 0x74),local_60,local_68,&local_80,
                              &local_a7,local_a6,&local_50);
        if (local_a4 < 0) {
LAB_1800145ba:
          uVar4 = FUN_1800016a0();
          local_84 = (undefined4)uVar4;
          FUN_1800138f0(local_38);
          goto LAB_1800145e9;
        }
        if (1 < local_a4) {
          if (local_a4 != 3) goto LAB_1800145ba;
          pcVar3 = (char *)FUN_180016ac0(local_38);
          local_88 = (int)*pcVar3;
          FUN_1800138f0(local_38);
          goto LAB_1800145e9;
        }
        if (local_50 != &local_a7) {
          local_48 = FUN_180013780(local_38);
          lVar5 = FUN_180012e90(local_38);
          local_98 = (local_48 + lVar5) - (longlong)local_80;
          while (0 < local_98) {
            local_98 = local_98 + -1;
            ungetc((int)local_80[local_98],*(FILE **)(param_1 + 0x80));
          }
          uVar2 = FUN_180001600(&local_a7);
          local_8c = (undefined4)CONCAT71(extraout_var_00,uVar2);
          FUN_1800138f0(local_38);
          goto LAB_1800145e9;
        }
        lVar5 = FUN_180013780(local_38);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                  (local_38,0,(longlong)local_80 - lVar5);
      }
      uVar4 = FUN_1800016a0();
      local_90 = (undefined4)uVar4;
      FUN_1800138f0(local_38);
    }
  }
LAB_1800145e9:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_e8);
  return;
}




uint FUN_180014610(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  uint local_28;
  int local_24;
  char *local_20;
  code *local_18;
  
  pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  if (pcVar3 != (char *)0x0) {
    local_20 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
    pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::egptr(param_1);
    if (local_20 < pcVar3) {
      pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
      uVar1 = FUN_180001600(pcVar3);
      return (uint)CONCAT71(extraout_var,uVar1);
    }
  }
  local_28 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
  uVar4 = FUN_1800016a0();
  local_24 = (int)uVar4;
  bVar2 = eq_int_type(&local_24,(int *)&local_28);
  if (!bVar2) {
    local_18 = *(code **)(*(longlong *)param_1 + 0x20);
    (*local_18)(param_1,local_28);
  }
  return local_28;
}




ulonglong FUN_1800146d0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  basic_streambuf<char,struct_std::char_traits<char>_> bVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar7;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar8;
  uint local_res10 [6];
  byte local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  FILE *local_10;
  
  local_res10[0] = param_2;
  pcVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
  if (pcVar5 != (char *)0x0) {
    local_18 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
    pcVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
    if (local_18 < pcVar5) {
      uVar6 = FUN_1800016a0();
      local_24 = (int)uVar6;
      bVar1 = eq_int_type(&local_24,(int *)local_res10);
      if (!bVar1) {
        pcVar5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
        uVar2 = FUN_180001600(pcVar5 + -1);
        local_20 = (int)CONCAT71(extraout_var,uVar2);
        bVar1 = eq_int_type(&local_20,(int *)local_res10);
        if (!bVar1) goto LAB_18001478d;
      }
      std::basic_streambuf<char,struct_std::char_traits<char>_>::_Gndec(param_1);
      uVar4 = not_eof(local_res10);
      return CONCAT44(extraout_var_00,uVar4);
    }
  }
LAB_18001478d:
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar6 = FUN_1800016a0();
    local_1c = (int)uVar6;
    bVar1 = eq_int_type(&local_1c,(int *)local_res10);
    if (!bVar1) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        local_10 = *(FILE **)(param_1 + 0x80);
        local_28[0] = FUN_180001600((undefined1 *)local_res10);
        bVar1 = FUN_180001e90(local_28,local_10);
        if (bVar1) {
          return (ulonglong)local_res10[0];
        }
      }
      pbVar8 = (basic_streambuf<char,struct_std::char_traits<char>_> *)
               std::basic_streambuf<char,struct_std::char_traits<char>_>::gptr(param_1);
      if (pbVar8 != param_1 + 0x70) {
        bVar3 = (basic_streambuf<char,struct_std::char_traits<char>_>)
                FUN_180001600((undefined1 *)local_res10);
        param_1[0x70] = bVar3;
        FUN_180017080(param_1);
        return (ulonglong)local_res10[0];
      }
      uVar7 = FUN_1800016a0();
      return uVar7;
    }
  }
  uVar7 = FUN_1800016a0();
  return uVar7;
}




void FUN_180014860(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  size_t sVar4;
  uint local_res10 [6];
  undefined1 auStackY_c8 [32];
  char local_88;
  char local_87;
  char local_86;
  char local_85;
  int local_84;
  uint local_80;
  uint local_7c;
  int local_78 [2];
  size_t local_70;
  char *local_68;
  FILE *local_60;
  codecvt<char,char,struct__Mbstatet> *local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  char local_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_c8;
  local_res10[0] = param_2;
  uVar2 = FUN_1800016a0();
  local_78[0] = (int)uVar2;
  bVar1 = eq_int_type(local_78,(int *)local_res10);
  if (bVar1) {
    not_eof(local_res10);
  }
  else {
    pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
    if (pcVar3 != (char *)0x0) {
      local_68 = std::basic_streambuf<char,struct_std::char_traits<char>_>::pptr(param_1);
      pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::epptr(param_1);
      if (local_68 < pcVar3) {
        local_86 = FUN_180001600((undefined1 *)local_res10);
        pcVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::_Pninc(param_1);
        *pcVar3 = local_86;
        goto LAB_180014b22;
      }
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      FUN_1800016a0();
    }
    else {
      FUN_180017110(param_1);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        local_60 = *(FILE **)(param_1 + 0x80);
        local_85 = FUN_180001600((undefined1 *)local_res10);
        bVar1 = FUN_180001e50(local_85,local_60);
        if (bVar1) {
          local_80 = local_res10[0];
        }
        else {
          uVar2 = FUN_1800016a0();
          local_80 = (uint)uVar2;
        }
      }
      else {
        local_40 = 0x20;
        local_88 = FUN_180001600((undefined1 *)local_res10);
        local_58 = *(codecvt<char,char,struct__Mbstatet> **)(param_1 + 0x68);
        local_84 = std::codecvt<char,char,struct__Mbstatet>::out
                             (local_58,(_Mbstatet *)(param_1 + 0x74),&local_88,&local_87,&local_48,
                              local_38,local_18,&local_50);
        if (-1 < local_84) {
          if (local_84 < 2) {
            local_70 = (longlong)local_50 - (longlong)local_38;
            if ((local_70 == 0) ||
               (sVar4 = fwrite(local_38,1,local_70,*(FILE **)(param_1 + 0x80)), local_70 == sVar4))
            {
              param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x1;
              if (local_48 == &local_88) {
                FUN_1800016a0();
              }
            }
            else {
              FUN_1800016a0();
            }
            goto LAB_180014b22;
          }
          if (local_84 == 3) {
            bVar1 = FUN_180001e50(local_88,*(FILE **)(param_1 + 0x80));
            if (bVar1) {
              local_7c = local_res10[0];
            }
            else {
              uVar2 = FUN_1800016a0();
              local_7c = (uint)uVar2;
            }
            goto LAB_180014b22;
          }
        }
        FUN_1800016a0();
      }
    }
  }
LAB_180014b22:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_c8);
  return;
}




void FUN_180014b40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    _unlock_file(*(FILE **)(param_1 + 0x80));
  }
  return;
}




void FUN_180014b70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    _lock_file(*(FILE **)(param_1 + 0x80));
  }
  return;
}




void FUN_180014ba0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  *(undefined ***)param_1 = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_180017110(param_1);
  }
  if (param_1[0x7c] != (basic_streambuf<char,struct_std::char_traits<char>_>)0x0) {
    FUN_1800174b0(param_1);
  }
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}




void FUN_180014c10(void)

{
  FUN_180014cd0();
  return;
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
  FUN_180002430((longlong)(this + -0xa8));
  if ((param_1 & 1) != 0) {
    free(this + -0xa8);
  }
  return this + -0xa8;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180014c90(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_180014ba0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180014cd0(void)

{
  FUN_180014cf0();
  return;
}




void FUN_180014cf0(void)

{
  FUN_1800016b0();
  return;
}




bool FUN_180014d10(longlong *param_1,longlong *param_2)

{
  return *param_1 == *param_2;
}




undefined8 * FUN_180014d50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_1800016c0();
  return param_1;
}




undefined8 FUN_180014d90(undefined8 *param_1)

{
  return *param_1;
}




longlong * FUN_180014da0(longlong *param_1)

{
  undefined8 local_res8;
  
  for (local_res8 = param_1; *(char *)(*local_res8 + 0x19) == '\0';
      local_res8 = (longlong *)*local_res8) {
  }
  return local_res8;
}




void FUN_180014dd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_1);
  FUN_1800016d0(uVar1);
  return;
}




void FUN_180014e00(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_1800178a0(param_1,(void *)*puVar1);
  return;
}




void FUN_180014e30(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar2 = FUN_180017a20(param_1,&local_28);
  lVar1 = *plVar2;
  plVar2 = FUN_180017a90(param_1,&local_20);
  FUN_180017920(param_1,local_18,*plVar2,lVar1);
  return;
}




undefined8 * FUN_180014e90(undefined8 *param_1,undefined8 param_2)

{
  FUN_1800178d0(param_1,param_2);
  return param_1;
}




longlong FUN_180014ec0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180014f00(param_1);
  return lVar1 + 8;
}




void FUN_180014ee0(undefined8 param_1)

{
  FUN_180014f00(param_1);
  return;
}




void FUN_180014f00(undefined8 param_1)

{
  FUN_1800016d0(param_1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >(void) __ptr64
    public: __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_String_alloc<struct std::_String_base_types<unsigned
   short,class std::allocator<unsigned short> > >(void) __ptr64
    public: __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >(void) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * _String_alloc<>(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator==(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator==(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator==(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  FUN_1800016c0();
  return *param_1 == *param_2;
}




longlong * FUN_180014fa0(longlong *param_1)

{
  *param_1 = *param_1 + 0x20;
  return param_1;
}




undefined8 * FUN_180014fc0(undefined8 *param_1,undefined8 param_2)

{
  FUN_180014d50(param_1,param_2);
  return param_1;
}




longlong * FUN_180015000(longlong *param_1)

{
  *param_1 = *param_1 + 8;
  return param_1;
}




void FUN_180015020(void)

{
  return;
}




void FUN_180015030(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017b20(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017be0(uVar2,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_180015110(undefined8 param_1)

{
  FUN_180014f00(param_1);
  FUN_18001b150();
  return;
}




bool FUN_180015150(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ec0(param_1);
  return *plVar1 != *plVar2;
}




void FUN_1800151a0(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017c10(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    deallocate(uVar2,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




ulonglong FUN_180015280(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  longlong *plVar6;
  
  puVar2 = (undefined8 *)FUN_180014ee0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180017b00(param_1);
  *puVar2 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  else {
    _Var4 = FUN_180017c50(param_1);
    if (_Var4 < param_2) {
      FUN_1800153f0();
    }
    uVar5 = FUN_180014f00(param_1);
    uVar5 = allocate(uVar5,param_2);
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar2 = uVar5;
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    uVar5 = *puVar2;
    puVar2 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar2 = uVar5;
    plVar6 = (longlong *)FUN_180014ee0(param_1);
    lVar1 = *plVar6;
    plVar6 = (longlong *)FUN_180017b00(param_1);
    *plVar6 = lVar1 + param_2 * 2;
    uVar3 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
  return uVar3;
}




void FUN_180015380(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180014f00(param_1);
  FUN_18001b1a0(param_2,param_3);
  return;
}




void FUN_1800153c0(undefined8 param_1)

{
  FUN_180014f00(param_1);
  _Pocca<>();
  return;
}




void FUN_1800153f0(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




void FUN_180015410(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    uVar3 = FUN_1800158b0(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180015a50(uVar2,(void *)*puVar4,uVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_1800154f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    uVar3 = FUN_1800158b0(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180015a50(uVar2,(void *)*puVar4,uVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4;
  return;
}




ulonglong FUN_180015610(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  longlong *plVar6;
  
  puVar2 = (undefined8 *)FUN_180014ee0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180017b00(param_1);
  *puVar2 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  else {
    _Var4 = FUN_1800158f0(param_1);
    if (_Var4 < param_2) {
      FUN_1800153f0();
    }
    uVar5 = FUN_180014f00(param_1);
    uVar5 = allocate(uVar5,param_2);
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar2 = uVar5;
    puVar2 = (undefined8 *)FUN_180014ee0(param_1);
    uVar5 = *puVar2;
    puVar2 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar2 = uVar5;
    plVar6 = (longlong *)FUN_180014ee0(param_1);
    lVar1 = *plVar6;
    plVar6 = (longlong *)FUN_180017b00(param_1);
    *plVar6 = lVar1 + param_2;
    uVar3 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
  return uVar3;
}




ulonglong FUN_180015700(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_1800158b0(param_1);
  _Var2 = FUN_1800158f0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180015790(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1800157f0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800157f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001b220(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_180015830(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined1 *param_4)

{
  FUN_180014f00(param_1);
  FUN_18001b360(param_2,param_3,param_4);
  return;
}




void FUN_180015870(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180014f00(param_1);
  FUN_18001b3c0(param_2,param_3);
  return;
}




longlong FUN_1800158b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2;
}




__uint64 FUN_1800158f0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180014f00(param_1);
  local_18 = FUN_180017ca0();
  local_10[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_180015940(<lambda_1> *param_1,__uint64 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  std::_Invoker_functor::
  _Call<class__public:_static_void___cdecl_Concurrency::agent::wait_for_all(unsigned___int64,class_Concurrency::agent*___ptr64*___ptr64,enum_Concurrency::agent_status*___ptr64,unsigned_int)_::_2_::<lambda_1>&___ptr64,unsigned___int64_const&___ptr64>
            (param_1,param_2);
  puVar2 = (undefined8 *)FUN_180014ee0(param_2);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_180014ee0(param_1);
  *puVar2 = uVar1;
  puVar2 = (undefined8 *)FUN_180014ec0(param_2);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  *puVar2 = uVar1;
  puVar2 = (undefined8 *)FUN_180017b00(param_2);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_180017b00(param_1);
  *puVar2 = uVar1;
  puVar2 = (undefined8 *)FUN_180014ee0(param_2);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180014ec0(param_2);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_180017b00(param_2);
  *puVar2 = 0;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

void allocate(undefined8 param_1,undefined8 param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_1800016d0(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180015a50(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




void FUN_180015a80(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)FUN_180014ee0(param_1);
    FUN_180017cf0(param_1,*plVar1,lVar3);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017d30(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017d80(uVar2,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_180015b60(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)FUN_180014ee0(param_1);
    FUN_180017db0(param_1,*plVar1,lVar3);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017df0(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017e30(uVar2,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

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




/* Library Function - Single Match
    public: void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Check_offset(unsigned
   __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Check_offset
          (_String_val<struct_std::_Simple_types<char>_> *this,__uint64 param_1)

{
  if (*(ulonglong *)(this + 0x10) < param_1) {
    FUN_180017e60();
  }
  return;
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
    local_18 = (undefined8 *)FUN_1800016d0(*param_1);
  }
  return local_18;
}




undefined8 FUN_180015d20(void)

{
  return 0x7fffffffffffffff;
}




void FUN_180015d30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >(void) __ptr64
    public: __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_String_alloc<struct std::_String_base_types<unsigned
   short,class std::allocator<unsigned short> > >(void) __ptr64
    public: __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >(void) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong _String_alloc<>(longlong param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




/* Library Function - Single Match
    public: bool __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Large_string_engaged(void)const __ptr64
   
   Library: Visual Studio 2017 Release */

bool __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged
          (_String_val<struct_std::_Simple_types<char>_> *this)

{
  return 0xf < *(ulonglong *)(this + 0x18);
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<unsigned
   short> >::_Myptr(void) __ptr64
    public: wchar_t * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void) __ptr64
   
   Library: Visual Studio 2017 Release */

_String_val<struct_std::_Simple_types<char>_> *
Myptr(_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  bool bVar1;
  undefined8 local_18;
  
  bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(param_1);
  local_18 = param_1;
  if (bVar1) {
    local_18 = (_String_val<struct_std::_Simple_types<char>_> *)
               FUN_1800016d0(*(undefined8 *)param_1);
  }
  return local_18;
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
  
  FUN_180012c70(param_1);
  local_20 = (undefined8 *)FUN_180014f00(param_1);
  bVar1 = Large_string_engaged((longlong)local_20);
  if (bVar1) {
    local_10 = (void *)*local_20;
    local_18 = FUN_180014f00(param_1);
    FUN_1800016d0(local_20);
    FUN_1800016c0();
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
  
  local_10 = (undefined2 *)FUN_180014f00(param_1);
  *(undefined8 *)(local_10 + 8) = 0;
  *(undefined8 *)(local_10 + 0xc) = 7;
  local_18[0] = 0;
  assign(local_10,local_18);
  return;
}




undefined8 FUN_180015f30(undefined8 param_1,undefined8 param_2)

{
  FUN_180014f00(param_1);
  return param_2;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180015f60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             __uint64 param_2,__uint64 param_3,void *param_4,ulonglong param_5)

{
  __uint64 _Var1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_68 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  void *local_40;
  void *local_38;
  void *local_30;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  undefined1 *local_10;
  
  local_60 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_1);
  std::_String_val<struct_std::_Simple_types<char>_>::_Check_offset(local_60,param_2);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (local_60,param_2,param_3);
  if (_Var1 == param_5) {
    puVar2 = Myptr((undefined8 *)local_60);
    move((void *)((longlong)puVar2 + param_2 * 2),param_4,param_5);
  }
  else {
    local_50 = *(longlong *)(local_60 + 0x10);
    local_20 = ((local_50 - _Var1) - param_2) + 1;
    if (param_5 < _Var1) {
      *(__uint64 *)(local_60 + 0x10) = local_50 - (_Var1 - param_5);
      local_18 = Myptr((undefined8 *)local_60);
      local_30 = (void *)((longlong)local_18 + param_2 * 2);
      move(local_30,param_4,param_5);
      move((void *)((longlong)local_30 + param_5 * 2),(void *)((longlong)local_30 + _Var1 * 2),
           local_20);
    }
    else {
      local_48 = param_5 - _Var1;
      if ((ulonglong)(*(longlong *)(local_60 + 0x18) - local_50) < local_48) {
        puVar4 = local_68;
        for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        param_1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  ::
                  _Reallocate_grow_by<class_<lambda_16d2cb92461ac9818af78a76c749bd7f>,unsigned___int64,unsigned___int64,char_const*___ptr64,unsigned___int64>
                            (param_1,local_48,local_68[0],param_2,_Var1,param_4,param_5);
      }
      else {
        *(ulonglong *)(local_60 + 0x10) = local_50 + local_48;
        local_28 = Myptr((undefined8 *)local_60);
        local_38 = (void *)((longlong)local_28 + param_2 * 2);
        local_40 = (void *)((longlong)local_38 + _Var1 * 2);
        if ((local_38 < (void *)((longlong)param_4 + param_5 * 2)) &&
           (param_4 <= (void *)((longlong)local_28 + local_50 * 2))) {
          if (param_4 < local_40) {
            local_58 = (longlong)local_40 - (longlong)param_4 >> 1;
          }
          else {
            local_58 = 0;
          }
        }
        else {
          local_58 = param_5;
        }
        move((void *)((longlong)local_40 + local_48 * 2),local_40,local_20);
        move(local_38,param_4,local_58);
        local_10 = (undefined1 *)((longlong)local_38 + local_58 * 2);
        copy(local_10,(undefined1 *)((longlong)param_4 + local_58 * 2 + local_48 * 2),
             param_5 - local_58);
      }
    }
  }
  return param_1;
}




void FUN_180016310(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined1 *param_7,longlong param_8)

{
  copy(param_2,param_3,param_5);
  copy(param_2 + param_5 * 2,param_7,param_8);
  copy(param_2 + param_8 * 2 + param_5 * 2,param_3 + param_6 * 2 + param_5 * 2,
       ((param_4 - param_6) - param_5) + 1);
  return;
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
  uVar2 = FUN_1800016d0(_Var1);
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
  
  local_20 = (undefined8 *)FUN_180014f00(param_1);
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
  _Var1 = FUN_1800016d0(_Var1);
  pbVar2 = append(this,param_1,_Var1);
  return pbVar2;
}




void FUN_180016560(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,undefined8 param_2)

{
  __uint64 _Var1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  
  puVar2 = (undefined8 *)FUN_180014f00(param_2);
  _Var1 = puVar2[2];
  pwVar3 = (wchar_t *)Myptr(puVar2);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,pwVar3,_Var1);
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
  
  puVar2 = (undefined1 *)FUN_180014f00(param_1);
  puVar3 = (undefined8 *)FUN_180014f00(param_2);
  uVar1 = puVar3[2];
  local_30 = Myptr(puVar3);
  if (uVar1 < 8) {
    copy(puVar2,(undefined1 *)local_30,8);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(undefined8 *)(puVar2 + 0x18) = 7;
  }
  else {
    uVar4 = FUN_180014f00(param_1);
    local_20 = FID_conflict_max_size(param_1);
    local_18 = uVar1 | 7;
    p_Var5 = std::_Min_value<unsigned___int64>(&local_18,&local_20);
    local_28 = *p_Var5;
    local_38 = allocate(uVar4,local_28 + 1);
    uVar6 = FUN_1800016d0(puVar2);
    construct<>(uVar4,uVar6,&local_38);
    local_10 = uVar1 + 1;
    puVar7 = (undefined1 *)FUN_1800016d0(local_38);
    copy(puVar7,(undefined1 *)local_30,local_10);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(__uint64 *)(puVar2 + 0x18) = local_28;
  }
  return;
}




void FUN_180016720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_180014f00(param_2);
  uVar2 = FUN_180014f00(param_1);
  puVar3 = (undefined1 *)FUN_1800016d0(uVar2);
  puVar4 = (undefined1 *)FUN_1800016d0(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__Tidy_init(param_2);
  return;
}




void FUN_1800167a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18[1] = local_18[0];
  local_10 = FUN_1800016d0(param_2);
  FUN_180016720(param_1,local_10);
  return;
}




longlong FUN_180016800(longlong param_1,undefined8 param_2,__uint64 param_3,__uint64 param_4,
                      undefined8 param_5)

{
  FUN_18001adf0(param_1,param_5);
  FID_conflict__Tidy_init(param_1);
  FUN_180017e80(param_1,param_2,param_3,param_4);
  return param_1;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_deallocate(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_deallocate
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  bool bVar1;
  undefined1 local_28 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  undefined8 local_18;
  void *local_10;
  
  FUN_180012c70(this);
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(this);
  bVar1 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(local_20);
  if (bVar1) {
    local_10 = *(void **)local_20;
    local_18 = FUN_180014f00(this);
    FUN_1800016d0(local_20);
    FUN_1800016c0();
    FUN_180015a50(local_18,local_10,*(longlong *)(local_20 + 0x18) + 1);
  }
  *(undefined8 *)(local_20 + 0x10) = 0;
  *(undefined8 *)(local_20 + 0x18) = 0xf;
  local_28[0] = 0;
  FUN_1800015e0(local_20,local_28);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Tidy_init(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = (undefined1 *)FUN_180014f00(this);
  *(undefined8 *)(local_10 + 0x10) = 0;
  *(undefined8 *)(local_10 + 0x18) = 0xf;
  local_18[0] = 0;
  FUN_1800015e0(local_10,local_18);
  return;
}




void FUN_180016990(undefined8 param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_180014f00(param_1);
  FUN_1800016b0();
  pvVar1 = (void *)*puVar3;
  uVar4 = FUN_180014f00(param_1);
  FUN_1800016d0(puVar3);
  FUN_1800016c0();
  lVar2 = puVar3[2];
  puVar5 = (undefined1 *)FUN_1800016d0(pvVar1);
  FUN_180001580((undefined1 *)puVar3,puVar5,lVar2 + 1);
  FUN_180015a50(uVar4,pvVar1,puVar3[3] + 1);
  puVar3[3] = 0xf;
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
  
  FUN_180014f00(param_1);
  local_30 = FUN_180017ca0();
  local_38 = 0x10;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
}




void FUN_180016ac0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_18 [3];
  
  puVar1 = FID_conflict_begin(param_1,local_18);
  FUN_180011700(puVar1);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::push_back(char) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  char local_res10 [24];
  undefined1 local_28;
  undefined1 local_27 [7];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  ulonglong local_18;
  _String_val<struct_std::_Simple_types<char>_> *local_10;
  
  local_res10[0] = param_1;
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(this);
  local_18 = *(ulonglong *)(local_20 + 0x10);
  if (local_18 < *(ulonglong *)(local_20 + 0x18)) {
    *(ulonglong *)(local_20 + 0x10) = local_18 + 1;
    local_10 = Myptr(local_20);
    FUN_1800015e0(local_10 + local_18,local_res10);
    local_28 = 0;
    FUN_1800015e0(local_10 + local_18 + 1,&local_28);
  }
  else {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    _Reallocate_grow_by<class_<lambda_319d5e083f45f90dcdce5dce53cbb275>,char>
              (this,1,local_27[0],local_res10[0]);
  }
  return;
}




/* Library Function - Single Match
    public: void __cdecl <lambda_319d5e083f45f90dcdce5dce53cbb275>::operator()(char * __ptr64
   const,char const * __ptr64 const,unsigned __int64,char)const __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
<lambda_319d5e083f45f90dcdce5dce53cbb275>::operator()
          (<lambda_319d5e083f45f90dcdce5dce53cbb275> *this,char *param_1,char *param_2,
          __uint64 param_3,char param_4)

{
  undefined1 local_18 [24];
  
  FUN_180001580(param_1,param_2,param_3);
  FUN_1800015e0(param_1 + param_3,&param_4);
  local_18[0] = 0;
  FUN_1800015e0(param_1 + param_3 + 1,local_18);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::erase(unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1,__uint64 param_2)

{
  longlong lVar1;
  _String_val<struct_std::_Simple_types<char>_> *this_00;
  __uint64 _Var2;
  _String_val<struct_std::_Simple_types<char>_> *p_Var3;
  
  this_00 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(this);
  _String_val<struct_std::_Simple_types<char>_>::_Check_offset(this_00,param_1);
  _Var2 = _String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size(this_00,param_1,param_2)
  ;
  lVar1 = *(longlong *)(this_00 + 0x10);
  p_Var3 = Myptr(this_00);
  *(__uint64 *)(this_00 + 0x10) = lVar1 - _Var2;
  char_traits<char>::move
            ((char *)(p_Var3 + param_1),(char *)(p_Var3 + param_1 + _Var2),
             ((lVar1 - _Var2) - param_1) + 1);
  return this;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64 const) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  
  lVar1 = length((longlong)param_1);
  _Var2 = FUN_1800016d0(lVar1);
  pbVar3 = assign(this,param_1,_Var2);
  return pbVar3;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1,__uint64 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28;
  undefined1 local_27 [7];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  _String_val<struct_std::_Simple_types<char>_> *local_18;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(this);
  if (*(ulonglong *)(local_20 + 0x18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = _Reallocate_for<class_<lambda_66f57f934f28d61049862f64df852ff0>,char_const*___ptr64>
                     (this,param_2,local_27[0],param_1);
  }
  else {
    local_18 = Myptr(local_20);
    *(__uint64 *)(local_20 + 0x10) = param_2;
    char_traits<char>::move((char *)local_18,param_1,param_2);
    local_28 = 0;
    FUN_1800015e0(local_18 + param_2,&local_28);
  }
  return this;
}




/* Library Function - Single Match
    public: void __cdecl <lambda_66f57f934f28d61049862f64df852ff0>::operator()(char * __ptr64
   const,unsigned __int64,char const * __ptr64 const)const __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
<lambda_66f57f934f28d61049862f64df852ff0>::operator()
          (<lambda_66f57f934f28d61049862f64df852ff0> *this,char *param_1,__uint64 param_2,
          char *param_3)

{
  undefined1 local_18 [24];
  
  FUN_180001580(param_1,param_3,param_2);
  local_18[0] = 0;
  FUN_1800015e0(param_1 + param_2,local_18);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(char const * __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char *param_1,__uint64 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28;
  undefined1 local_27 [7];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  longlong local_18;
  _String_val<struct_std::_Simple_types<char>_> *local_10;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(this);
  local_18 = *(longlong *)(local_20 + 0x10);
  if ((ulonglong)(*(longlong *)(local_20 + 0x18) - local_18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = _Reallocate_grow_by<class_<lambda_65e615be2a453ca0576c979606f46740>,char_const*___ptr64,unsigned___int64>
                     (this,param_2,local_27[0],param_1,param_2);
  }
  else {
    *(__uint64 *)(local_20 + 0x10) = local_18 + param_2;
    local_10 = Myptr(local_20);
    char_traits<char>::move((char *)(local_10 + local_18),param_1,param_2);
    local_28 = 0;
    FUN_1800015e0(local_10 + local_18 + param_2,&local_28);
  }
  return this;
}




/* Library Function - Single Match
    public: void __cdecl <lambda_65e615be2a453ca0576c979606f46740>::operator()(char * __ptr64
   const,char const * __ptr64 const,unsigned __int64,char const * __ptr64 const,unsigned
   __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
<lambda_65e615be2a453ca0576c979606f46740>::operator()
          (<lambda_65e615be2a453ca0576c979606f46740> *this,char *param_1,char *param_2,
          __uint64 param_3,char *param_4,__uint64 param_5)

{
  undefined1 local_18 [24];
  
  FUN_180001580(param_1,param_2,param_3);
  FUN_180001580(param_1 + param_3,param_4,param_5);
  local_18[0] = 0;
  FUN_1800015e0(param_1 + param_3 + param_5,local_18);
  return;
}




void FUN_180017000(undefined8 param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_180014f00(param_2);
  uVar2 = FUN_180014f00(param_1);
  puVar3 = (undefined1 *)FUN_1800016d0(uVar2);
  puVar4 = (undefined1 *)FUN_1800016d0(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_2);
  return;
}




void FUN_180017080(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  char *pcVar2;
  
  pbVar1 = (basic_streambuf<char,struct_std::char_traits<char>_> *)
           std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
  if (pbVar1 != param_1 + 0x70) {
    pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
    *(char **)(param_1 + 0x88) = pcVar2;
    pcVar2 = std::basic_streambuf<char,struct_std::char_traits<char>_>::egptr(param_1);
    *(char **)(param_1 + 0x90) = pcVar2;
  }
  std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
            (param_1,(char *)(param_1 + 0x70),(char *)(param_1 + 0x70),(char *)(param_1 + 0x71));
  return;
}




void FUN_180017110(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  pbVar1 = (basic_streambuf<char,struct_std::char_traits<char>_> *)
           std::basic_streambuf<char,struct_std::char_traits<char>_>::eback(param_1);
  if (pbVar1 == param_1 + 0x70) {
    std::basic_streambuf<char,struct_std::char_traits<char>_>::setg
              (param_1,*(char **)(param_1 + 0x88),*(char **)(param_1 + 0x88),
               *(char **)(param_1 + 0x90));
  }
  return;
}




void FUN_180017170(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,
                  codecvt_base *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::codecvt_base::always_noconv(param_2);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  }
  return;
}




void FUN_1800171d0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStackY_a8 [32];
  int local_6c;
  int local_68 [2];
  size_t local_60;
  code *local_58;
  codecvt<char,char,struct__Mbstatet> *local_50;
  char *local_48;
  undefined8 local_40;
  char local_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_18004e038 ^ (ulonglong)auStackY_a8;
  if ((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x71) != '\0')) {
    local_58 = *(code **)(*param_1 + 0x18);
    uVar3 = FUN_1800016a0();
    local_6c = (*local_58)(param_1,uVar3 & 0xffffffff);
    uVar4 = FUN_1800016a0();
    local_68[0] = (int)uVar4;
    bVar1 = eq_int_type(local_68,&local_6c);
    if (!bVar1) {
      local_40 = 0x20;
      local_50 = (codecvt<char,char,struct__Mbstatet> *)param_1[0xd];
      iVar2 = std::codecvt<char,char,struct__Mbstatet>::unshift
                        (local_50,(_Mbstatet *)((longlong)param_1 + 0x74),local_38,local_18,
                         &local_48);
      if (iVar2 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
      }
      else if (iVar2 != 1) goto LAB_180017362;
      local_60 = (longlong)local_48 - (longlong)local_38;
      if (local_60 != 0) {
        fwrite(local_38,1,local_60,(FILE *)param_1[0x10]);
      }
    }
  }
LAB_180017362:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_a8);
  return;
}




void FUN_180017380(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,longlong param_2,
                  int param_3)

{
  int *local_30;
  char **local_28;
  char **local_20;
  int *local_18;
  
  param_1[0x7c] = (basic_streambuf<char,struct_std::char_traits<char>_>)(param_3 == 1);
  param_1[0x71] = (basic_streambuf<char,struct_std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  if (param_2 != 0) {
    local_20 = (char **)0x0;
    local_28 = (char **)0x0;
    local_30 = (int *)0x0;
    _get_stream_buffer_pointers(param_2,&local_20,&local_28,&local_30);
    local_18 = local_30;
    std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init
              (param_1,local_20,local_28,local_30,local_20,local_28,local_30);
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_180052090;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_1800174b0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  int iVar2;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_18 = (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
  }
  else {
    cVar1 = FUN_1800171d0((longlong *)param_1);
    local_18 = param_1;
    if (cVar1 == '\0') {
      local_18 = (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
    }
    iVar2 = fclose(*(FILE **)(param_1 + 0x80));
    if (iVar2 != 0) {
      local_18 = (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
    }
  }
  FUN_180017380(param_1,0,2);
  return local_18;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180017540(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
             int param_3,int param_4)

{
  _iobuf *p_Var1;
  locale *plVar2;
  _Facet_base *p_Var3;
  undefined1 local_18 [24];
  
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var1 = std::_Fiopen(param_2,param_3,param_4), p_Var1 != (_iobuf *)0x0)) {
    FUN_180017380(param_1,(longlong)p_Var1,1);
    plVar2 = (locale *)std::basic_streambuf<char,struct_std::char_traits<char>_>::getloc(param_1);
    p_Var3 = FUN_18001afe0(plVar2);
    FUN_180017170(param_1,(codecvt_base *)p_Var3);
    FUN_180001840((longlong)local_18);
    return param_1;
  }
  return (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0;
}




basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180017600(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,longlong param_2)

{
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  *(undefined ***)param_1 = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  FUN_180017380(param_1,param_2,0);
  return param_1;
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
  FUN_1800014f0(param_1,param_2,param_3);
  return;
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
  FUN_1800014c0(param_1,param_2,param_3);
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




undefined4 FUN_180017710(ushort *param_1,ushort *param_2,longlong param_3)

{
  undefined4 local_24;
  longlong local_20;
  ushort *local_18;
  ushort *local_10;
  
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_1;
  local_10 = param_2;
  if (param_3 != 0) {
    while( true ) {
      if (*local_18 < *local_10) break;
      if (*local_10 < *local_18) {
        return 1;
      }
      if (local_20 == 1) {
        return 0;
      }
      local_20 = local_20 + -1;
      local_18 = local_18 + 1;
      local_10 = local_10 + 1;
    }
    local_24 = 0xffffffff;
  }
  return local_24;
}




longlong FUN_1800177c0(longlong *param_1)

{
  return *param_1 + param_1[1];
}




undefined8 * FUN_1800177e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}




/* Library Function - Single Match
    public: __cdecl std::fpos<struct _Mbstatet>::fpos<struct _Mbstatet>(struct _Mbstatet,__int64)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

fpos<struct__Mbstatet> * __thiscall
std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>
          (fpos<struct__Mbstatet> *this,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)this = param_3;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = param_2;
  return this;
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




void FUN_1800178a0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014dd0(param_1);
  FUN_18001bd20(uVar1,param_2);
  return;
}




undefined8 * FUN_1800178d0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_18;
  byte local_17;
  undefined8 *local_10;
  
  local_10 = param_1;
  FUN_18001bdb0(param_1,(ulonglong)local_17,param_2,&local_18);
  FUN_180017fb0(param_1);
  return param_1;
}




undefined8 * FUN_180017920(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_res18 = (undefined8 *)param_3;
  local_res20 = param_4;
  plVar2 = FUN_180017a90(param_1,&local_28);
  bVar1 = FUN_180014d10((longlong *)&local_res18,plVar2);
  if (bVar1) {
    plVar2 = FUN_180017a20(param_1,&local_20);
    bVar1 = FUN_180014d10(&local_res20,plVar2);
    if (bVar1) {
      FUN_180017fe0(param_1);
      FUN_180017a90(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_1800114c0((longlong *)&local_res18,&local_res20), bVar1) {
    plVar2 = FUN_180017f60((longlong *)&local_res18,&local_18);
    FUN_180018080(param_1,local_10,(longlong *)*plVar2);
  }
  uVar3 = FUN_180014dd0(param_1);
  FUN_1800016d0(uVar3);
  FUN_180014fc0(param_2,local_res18);
  return local_res18;
}




undefined8 * FUN_180017a20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_1800016d0(puVar1);
  FUN_180014fc0(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_180017a90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_1800016d0(puVar1);
  puVar1 = (undefined8 *)FUN_180014d90(puVar1);
  FUN_180014fc0(param_2,*puVar1);
  return param_2;
}




longlong FUN_180017b00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180014f00(param_1);
  return lVar1 + 0x10;
}




longlong FUN_180017b20(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2 >> 3;
}




__uint64 FUN_180017b60(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180014f00(param_1);
  local_18 = FUN_180018140();
  local_10[0] = FUN_180001530();
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
  
  _Var1 = FUN_18001be00(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180017be0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 3);
  return;
}




longlong FUN_180017c10(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2 >> 1;
}




__uint64 FUN_180017c50(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180014f00(param_1);
  local_18 = FUN_180015d20();
  local_10[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




undefined8 FUN_180017ca0(void)

{
  return 0xffffffffffffffff;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Invoker_functor::_Call<class `public: static void __cdecl
   Concurrency::agent::wait_for_all(unsigned __int64,class Concurrency::agent * __ptr64 *
   __ptr64,enum Concurrency::agent_status * __ptr64,unsigned int)'::`2'::<lambda_1> &
   __ptr64,unsigned __int64 const & __ptr64>(class `public: static void __cdecl
   Concurrency::agent::wait_for_all(unsigned __int64,class Concurrency::agent * __ptr64 *
   __ptr64,enum Concurrency::agent_status * __ptr64,unsigned int)'::`2'::<lambda_1> &
   __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void __cdecl
std::_Invoker_functor::
_Call<class__public:_static_void___cdecl_Concurrency::agent::wait_for_all(unsigned___int64,class_Concurrency::agent*___ptr64*___ptr64,enum_Concurrency::agent_status*___ptr64,unsigned_int)_::_2_::<lambda_1>&___ptr64,unsigned___int64_const&___ptr64>
          (<lambda_1> *param_1,__uint64 *param_2)

{
  FUN_180014f00(param_1);
  FUN_180014f00(param_2);
  FUN_1800016c0();
  return;
}




void FUN_180017cf0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001be50(param_2,param_3,uVar1);
  return;
}




longlong FUN_180017d30(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return (*plVar1 - *plVar2) / 0x28;
}




void FUN_180017d80(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x28);
  return;
}




void FUN_180017db0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001bea0(param_2,param_3,uVar1);
  return;
}




longlong FUN_180017df0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 - *plVar2 >> 5;
}




void FUN_180017e30(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x20);
  return;
}




void FUN_180017e60(void)

{
  std::_Xout_of_range("invalid string position");
  return;
}




void FUN_180017e80(undefined8 param_1,undefined8 param_2,__uint64 param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 _Var1;
  undefined8 *puVar2;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_2);
  std::_String_val<struct_std::_Simple_types<char>_>::_Check_offset(this,param_3);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this,param_3,param_4);
  puVar2 = Myptr((undefined8 *)this);
  FID_conflict_assign(param_1,(undefined1 *)((longlong)puVar2 + param_3 * 2),_Var1);
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




longlong * FUN_180017f60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180018150(param_1);
  *param_2 = lVar1;
  return param_2;
}




void FUN_180017fb0(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = FUN_180018760(param_1);
  puVar2 = (undefined8 *)FUN_180014dd0(param_1);
  *puVar2 = p_Var1;
  return;
}




void FUN_180017fe0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_180014dd0(param_1);
  lVar1 = *plVar2;
  puVar3 = (undefined8 *)FUN_180018740(plVar2);
  FUN_180018820(param_1,(undefined8 *)*puVar3);
  plVar4 = (longlong *)FUN_180018740(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_180014d90(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_180018720(plVar2);
  *plVar4 = lVar1;
  plVar2[1] = 0;
  return;
}




undefined8 * FUN_180018080(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)FUN_180014dd0(param_1);
  local_20 = param_3;
  FUN_180018150((longlong *)&local_20);
  plVar2 = FUN_180018170(plVar1,param_3);
  uVar3 = FUN_180014dd0(param_1);
  FUN_1800016d0((longlong)plVar2 + 0x1c);
  FUN_1800016c0();
  FUN_18001bd20(uVar3,plVar2);
  local_18 = FUN_1800016d0(plVar1);
  local_10 = local_20;
  FUN_180014fc0(param_2,local_20);
  return param_2;
}




undefined8 FUN_180018140(void)

{
  return 0x1fffffffffffffff;
}




longlong * FUN_180018150(longlong *param_1)

{
  FUN_180011500(param_1);
  return param_1;
}




longlong * FUN_180018170(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *local_res10 [3];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_18;
  longlong *local_10;
  
  local_res10[0] = param_2;
  FUN_180018150((longlong *)local_res10);
  local_38 = param_2;
  if (*(char *)(*param_2 + 0x19) == '\0') {
    if (*(char *)(param_2[2] + 0x19) == '\0') {
      local_38 = local_res10[0];
      local_28 = (longlong *)local_res10[0][2];
    }
    else {
      local_28 = (longlong *)*param_2;
    }
  }
  else {
    local_28 = (longlong *)param_2[2];
  }
  if (local_38 == param_2) {
    local_30 = (longlong *)param_2[1];
    if (*(char *)((longlong)local_28 + 0x19) == '\0') {
      local_28[1] = (longlong)local_30;
    }
    plVar1 = (longlong *)FUN_180018740(param_1);
    if ((longlong *)*plVar1 == param_2) {
      puVar2 = (undefined8 *)FUN_180018740(param_1);
      *puVar2 = local_28;
    }
    else if ((longlong *)*local_30 == param_2) {
      *local_30 = (longlong)local_28;
    }
    else {
      local_30[2] = (longlong)local_28;
    }
    plVar1 = (longlong *)FUN_180014d90(param_1);
    if ((longlong *)*plVar1 == param_2) {
      local_18 = local_30;
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_18 = FUN_180014da0(local_28);
      }
      plVar1 = (longlong *)FUN_180014d90(param_1);
      *plVar1 = (longlong)local_18;
    }
    plVar1 = (longlong *)FUN_180018720(param_1);
    if ((longlong *)*plVar1 == param_2) {
      local_10 = local_30;
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_10 = (longlong *)FUN_180018a80((longlong)local_28);
      }
      plVar1 = (longlong *)FUN_180018720(param_1);
      *plVar1 = (longlong)local_10;
    }
  }
  else {
    *(longlong **)(*param_2 + 8) = local_38;
    *local_38 = *param_2;
    if (local_38 == (longlong *)param_2[2]) {
      local_30 = local_38;
    }
    else {
      local_30 = (longlong *)local_38[1];
      if (*(char *)((longlong)local_28 + 0x19) == '\0') {
        local_28[1] = (longlong)local_30;
      }
      *local_30 = (longlong)local_28;
      local_38[2] = param_2[2];
      *(longlong **)(param_2[2] + 8) = local_38;
    }
    plVar1 = (longlong *)FUN_180018740(param_1);
    if ((longlong *)*plVar1 == param_2) {
      puVar2 = (undefined8 *)FUN_180018740(param_1);
      *puVar2 = local_38;
    }
    else if (*(longlong **)param_2[1] == param_2) {
      *(longlong **)param_2[1] = local_38;
    }
    else {
      *(longlong **)(param_2[1] + 0x10) = local_38;
    }
    local_38[1] = param_2[1];
    std::swap<char,void>((char *)(local_38 + 3),(char *)(param_2 + 3));
  }
  if ((char)param_2[3] != '\x01') {
LAB_1800186ea:
    if (param_1[1] != 0) {
      param_1[1] = param_1[1] + -1;
    }
    return param_2;
  }
LAB_180018467:
  plVar1 = (longlong *)FUN_180018740(param_1);
  if ((local_28 == (longlong *)*plVar1) || ((char)local_28[3] != '\x01')) goto LAB_1800186e1;
  if (local_28 == (longlong *)*local_30) {
    local_38 = (longlong *)local_30[2];
    if ((char)local_38[3] == '\0') {
      *(undefined1 *)(local_38 + 3) = 1;
      *(undefined1 *)(local_30 + 3) = 0;
      FUN_1800189a0(param_1,(longlong)local_30);
      local_38 = (longlong *)local_30[2];
    }
    if (*(char *)((longlong)local_38 + 0x19) == '\0') {
      if ((*(char *)(*local_38 + 0x18) != '\x01') || (*(char *)(local_38[2] + 0x18) != '\x01')) {
        if (*(char *)(local_38[2] + 0x18) == '\x01') {
          *(undefined1 *)(*local_38 + 0x18) = 1;
          *(undefined1 *)(local_38 + 3) = 0;
          FUN_1800188c0(param_1,local_38);
          local_38 = (longlong *)local_30[2];
        }
        *(char *)(local_38 + 3) = (char)local_30[3];
        *(undefined1 *)(local_30 + 3) = 1;
        *(undefined1 *)(local_38[2] + 0x18) = 1;
        FUN_1800189a0(param_1,(longlong)local_30);
LAB_1800186e1:
        *(undefined1 *)(local_28 + 3) = 1;
        goto LAB_1800186ea;
      }
      *(undefined1 *)(local_38 + 3) = 0;
    }
  }
  else {
    local_38 = (longlong *)*local_30;
    if ((char)local_38[3] == '\0') {
      *(undefined1 *)(local_38 + 3) = 1;
      *(undefined1 *)(local_30 + 3) = 0;
      FUN_1800188c0(param_1,local_30);
      local_38 = (longlong *)*local_30;
    }
    if (*(char *)((longlong)local_38 + 0x19) == '\0') {
      if ((*(char *)(local_38[2] + 0x18) != '\x01') || (*(char *)(*local_38 + 0x18) != '\x01')) {
        if (*(char *)(*local_38 + 0x18) == '\x01') {
          *(undefined1 *)(local_38[2] + 0x18) = 1;
          *(undefined1 *)(local_38 + 3) = 0;
          FUN_1800189a0(param_1,(longlong)local_38);
          local_38 = (longlong *)*local_30;
        }
        *(char *)(local_38 + 3) = (char)local_30[3];
        *(undefined1 *)(local_30 + 3) = 1;
        *(undefined1 *)(*local_38 + 0x18) = 1;
        FUN_1800188c0(param_1,local_30);
        goto LAB_1800186e1;
      }
      *(undefined1 *)(local_38 + 3) = 0;
    }
  }
  local_28 = local_30;
  local_30 = (longlong *)local_30[1];
  goto LAB_180018467;
}




longlong FUN_180018720(longlong *param_1)

{
  return *param_1 + 0x10;
}




longlong FUN_180018740(longlong *param_1)

{
  return *param_1 + 8;
}




_Container_proxy * FUN_180018760(undefined8 param_1)

{
  undefined8 uVar1;
  _Container_proxy *local_28;
  allocator<struct_std::_Container_proxy> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (allocator<struct_std::_Container_proxy> *)FUN_180014dd0(param_1);
  local_28 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  uVar1 = FUN_1800016d0(local_28);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800016d0(local_28 + 8);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800016d0(local_28 + 0x10);
  construct<>(local_20,uVar1,&local_28);
  local_28[0x18] = (_Container_proxy)0x1;
  local_28[0x19] = (_Container_proxy)0x1;
  return local_28;
}




void FUN_180018820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_18;
  
  local_18 = param_2;
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    FUN_180018820(param_1,(undefined8 *)local_18[2]);
    puVar1 = (undefined8 *)*local_18;
    uVar2 = FUN_180014dd0(param_1);
    FUN_1800016d0((longlong)local_18 + 0x1c);
    FUN_1800016c0();
    FUN_18001bd20(uVar2,local_18);
    local_18 = puVar1;
  }
  return;
}




void FUN_1800188c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
  }
  else if (param_2 == *(longlong **)(param_2[1] + 0x10)) {
    *(longlong *)(param_2[1] + 0x10) = lVar1;
  }
  else {
    *(longlong *)param_2[1] = lVar1;
  }
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_1800189a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
  }
  else if (param_2 == **(longlong **)(param_2 + 8)) {
    **(longlong **)(param_2 + 8) = (longlong)plVar1;
  }
  else {
    *(longlong **)(*(longlong *)(param_2 + 8) + 0x10) = plVar1;
  }
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




longlong FUN_180018a80(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  while (*(char *)(*(longlong *)(local_res8 + 0x10) + 0x19) == '\0') {
    local_res8 = *(longlong *)(local_res8 + 0x10);
  }
  return local_res8;
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




undefined8 *
FUN_180018b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_26 [6];
  longlong local_20;
  longlong local_18;
  
  FUN_1800195b0(param_1,param_4);
  FUN_1800016c0();
  puVar2 = local_26;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = FUN_1800016d0(param_3);
  local_18 = FUN_1800016d0(param_2);
  FUN_18001d360(param_1,local_18,local_20);
  return param_1;
}




void FUN_180018bd0(ushort *param_1,undefined8 param_2)

{
  ushort *local_18;
  ushort *local_10 [2];
  
  FUN_180011890(param_2);
  for (local_18 = param_1 + 0x10; local_18 < (ushort *)((longlong)param_1 + (ulonglong)*param_1);
      local_18 = (ushort *)((longlong)local_18 + (ulonglong)*local_10[0])) {
    local_10[0] = local_18;
    FUN_1800119e0(param_2,local_10);
  }
  return;
}




void FUN_180018c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_26 [6];
  longlong local_20;
  void *local_18;
  
  FUN_1800016c0();
  puVar2 = local_26;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = FUN_1800016d0(param_3);
  local_18 = (void *)FUN_1800016d0(param_2);
  FUN_18001d400(param_1,local_18,local_20);
  return;
}




void FUN_180018ce0(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  longlong local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_68;
  local_48 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_30);
  local_40 = FUN_180012e90(param_2);
  lVar1 = length((longlong)param_3);
  uVar2 = FUN_1800016d0(local_40 + lVar1);
  FUN_180013660(local_30,uVar2);
  FUN_1800138c0(local_30,param_2);
  FUN_18001d110(local_30,param_3);
  FUN_180013920(param_1,local_30);
  local_48 = local_48 | 1;
  FUN_1800138f0(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180018dc0(wchar_t *param_1,wchar_t *param_2)

{
  wcscpy_s(param_1,0x104,param_2);
  return;
}




undefined4 * FUN_180018df0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_1800016d0(param_2);
  *param_1 = *puVar1;
  uVar2 = FUN_1800016d0(param_3);
  basic_string<>((longlong)(param_1 + 2),uVar2);
  return param_1;
}




undefined8 * FUN_180018e50(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 local_18;
  
  FUN_18001d700(param_1,param_2,'\0',param_3,local_18);
  return param_2;
}




void FUN_180018e90(wchar_t *param_1,undefined8 param_2)

{
  FUN_18001cfd0(param_2,param_1);
  return;
}




undefined8 *
FUN_180018ec0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_18 [3];
  
  plVar2 = (longlong *)FUN_180014ec0(param_1);
  puVar7 = (undefined8 *)*plVar2;
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    if (param_3 == puVar7) {
      uVar3 = FUN_1800016d0(param_4);
      FUN_180011a90(param_1,uVar3);
    }
    else {
      puVar4 = (undefined8 *)FUN_1800016d0(param_4);
      local_18[0] = *puVar4;
      FUN_180015020();
      uVar3 = FUN_1800016d0(puVar7 + -1);
      uVar5 = FUN_1800016d0(puVar7);
      uVar6 = FUN_180014f00(param_1);
      construct<>(uVar6,uVar5,uVar3);
      plVar2 = (longlong *)FUN_180014ec0(param_1);
      *plVar2 = *plVar2 + 8;
      FUN_18001dba0(param_3,(longlong)(puVar7 + -1),(longlong)puVar7);
      puVar7 = (undefined8 *)FUN_1800016d0(local_18);
      *param_3 = *puVar7;
    }
    FUN_18001c140(param_1,param_2,param_3);
  }
  else {
    uVar3 = FUN_1800016d0(param_4);
    lVar8 = FUN_1800190b0(param_1,(longlong)param_3,uVar3);
    FUN_18001c140(param_1,param_2,lVar8);
  }
  return param_2;
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
  
  puVar1 = (undefined8 *)FUN_1800010b0(8,param_2);
  puVar2 = (undefined8 *)FUN_1800016d0(param_3);
  *puVar1 = *puVar2;
  return;
}




longlong FUN_1800190b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CLogWriter *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_180014f00(param_1);
  _Var4 = FUN_1800117a0(param_1);
  _Var5 = FUN_180017b60(param_1);
  if (_Var4 == _Var5) {
    FUN_1800153f0();
  }
  uVar6 = FUN_18001c2b0(param_1,_Var4 + 1);
  pCVar7 = (CLogWriter *)allocate(uVar3,uVar6);
  uVar8 = FUN_1800016d0(param_3);
  uVar9 = FUN_1800016d0(pCVar7 + lVar2 * 8);
  construct<>(uVar3,uVar9,uVar8);
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180014ec0(param_1);
    uVar3 = *puVar10;
    puVar10 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001c340(param_1,*puVar10,uVar3,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001c3a0(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_18001c3a0(param_1,param_2,*puVar10,pCVar7 + lVar2 * 8 + 8);
  }
  FUN_18001c190(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 + lVar2 * 8;
}




void FUN_180019310(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  CLogWriter *pCVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  uVar2 = FUN_180011c10(param_1);
  uVar3 = FUN_180017c10(param_1);
  if (uVar3 < param_2) {
    _Var4 = FUN_180017c50(param_1);
    if (_Var4 < param_2) {
      FUN_1800153f0();
    }
    uVar3 = FUN_18001c500(param_1,param_2);
    uVar5 = FUN_180014f00(param_1);
    pCVar6 = (CLogWriter *)allocate(uVar5,uVar3);
    FUN_180011cc0(local_res18,pCVar6 + uVar2 * 2,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar5 = *puVar7;
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001c590(param_1,*puVar7,uVar5,pCVar6);
    FUN_18001c3e0(param_1,(longlong)pCVar6,param_2,uVar3);
  }
  else if (uVar2 < param_2) {
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar5 = FUN_180011cc0(local_res18,(undefined1 *)*puVar7,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar5;
    FUN_180015020();
  }
  else if (param_2 != uVar2) {
    plVar8 = (longlong *)FUN_180014ee0(param_1);
    lVar1 = *plVar8;
    FUN_180014ec0(param_1);
    FUN_180015020();
    FUN_180014ec0(param_1);
    FUN_180015110(param_1);
    plVar8 = (longlong *)FUN_180014ec0(param_1);
    *plVar8 = lVar1 + param_2 * 2;
  }
  return;
}




undefined8 * FUN_1800195b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_27;
  
  uVar1 = FUN_1800016d0(param_2);
  FUN_18001dc20(param_1,(ulonglong)local_27,uVar1);
  return param_1;
}




longlong FUN_180019600(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 1;
}




void FUN_180019630(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  CLogWriter *pCVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  uVar2 = FUN_180011de0(param_1);
  uVar3 = FUN_1800158b0(param_1);
  if (uVar3 < param_2) {
    _Var4 = FUN_1800158f0(param_1);
    if (_Var4 < param_2) {
      FUN_1800153f0();
    }
    uVar3 = FUN_180015700(param_1,param_2);
    uVar5 = FUN_180014f00(param_1);
    pCVar6 = (CLogWriter *)allocate(uVar5,uVar3);
    FUN_180011ed0(param_3,pCVar6 + uVar2,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar5 = *puVar7;
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180015790(param_1,*puVar7,uVar5,pCVar6);
    FUN_1800154f0(param_1,(longlong)pCVar6,param_2,uVar3);
  }
  else if (uVar2 < param_2) {
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar5 = FUN_180011ed0(param_3,(undefined1 *)*puVar7,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar5;
    FUN_180015020();
  }
  else if (param_2 != uVar2) {
    plVar8 = (longlong *)FUN_180014ee0(param_1);
    lVar1 = *plVar8;
    FUN_180014ec0(param_1);
    FUN_180015020();
    FUN_180014ec0(param_1);
    FUN_180015110(param_1);
    plVar8 = (longlong *)FUN_180014ec0(param_1);
    *plVar8 = lVar1 + param_2;
  }
  return;
}




void FUN_1800198c0(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  CLogWriter *pCVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  uVar2 = FUN_180011de0(param_1);
  uVar3 = FUN_1800158b0(param_1);
  if (uVar3 < param_2) {
    _Var4 = FUN_1800158f0(param_1);
    if (_Var4 < param_2) {
      FUN_1800153f0();
    }
    uVar3 = FUN_180015700(param_1,param_2);
    uVar5 = FUN_180014f00(param_1);
    pCVar6 = (CLogWriter *)allocate(uVar5,uVar3);
    FUN_180011f90(local_res18,pCVar6 + uVar2,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar5 = *puVar7;
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180015790(param_1,*puVar7,uVar5,pCVar6);
    FUN_1800154f0(param_1,(longlong)pCVar6,param_2,uVar3);
  }
  else if (uVar2 < param_2) {
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar5 = FUN_180011f90(local_res18,(undefined1 *)*puVar7,param_2 - uVar2);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar5;
    FUN_180015020();
  }
  else if (param_2 != uVar2) {
    plVar8 = (longlong *)FUN_180014ee0(param_1);
    lVar1 = *plVar8;
    FUN_180014ec0(param_1);
    FUN_180015020();
    FUN_180014ec0(param_1);
    FUN_180015110(param_1);
    plVar8 = (longlong *)FUN_180014ec0(param_1);
    *plVar8 = lVar1 + param_2;
  }
  return;
}




void FUN_180019b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)FUN_1800010b0(1,param_2);
  puVar2 = (undefined1 *)FUN_1800016d0(param_3);
  *puVar1 = *puVar2;
  return;
}




longlong FUN_180019b90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  CLogWriter *pCVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  lVar10 = param_2 - *plVar1;
  uVar2 = FUN_180014f00(param_1);
  _Var3 = FUN_180011de0(param_1);
  _Var4 = FUN_1800158f0(param_1);
  if (_Var3 == _Var4) {
    FUN_1800153f0();
  }
  uVar5 = FUN_180015700(param_1,_Var3 + 1);
  pCVar6 = (CLogWriter *)allocate(uVar2,uVar5);
  uVar7 = FUN_1800016d0(param_3);
  uVar8 = FUN_1800016d0(pCVar6 + lVar10);
  FUN_180019b50(uVar2,uVar8,uVar7);
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    uVar2 = *puVar9;
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180015790(param_1,*puVar9,uVar2,pCVar6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_1800157f0(param_1,*puVar9,param_2,pCVar6);
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_1800157f0(param_1,param_2,*puVar9,pCVar6 + lVar10 + 1);
  }
  FUN_1800154f0(param_1,(longlong)pCVar6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 + lVar10;
}




void FUN_180019df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_1800010b0(0x28,param_2);
  puVar2 = (undefined4 *)FUN_1800016d0(param_3);
  FUN_18001c020(puVar1,puVar2);
  return;
}




longlong FUN_180019e40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  _Container_proxy *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  lVar2 = (param_2 - *plVar1) / 0x28;
  this = (allocator<struct_std::_Container_proxy> *)FUN_180014f00(param_1);
  _Var3 = FUN_180012550(param_1);
  _Var4 = FUN_18001c840(param_1);
  if (_Var3 == _Var4) {
    FUN_1800153f0();
  }
  uVar5 = FUN_18001c710(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  uVar7 = FUN_1800016d0(param_3);
  uVar8 = FUN_1800016d0(p_Var6 + lVar2 * 0x28);
  FUN_180019df0(this,uVar8,uVar7);
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    uVar7 = *puVar9;
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001c7a0(param_1,*puVar9,uVar7,(CLogWriter *)p_Var6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001c800(param_1,*puVar9,param_2,(CLogWriter *)p_Var6);
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_18001c800(param_1,param_2,*puVar9,(CLogWriter *)(p_Var6 + lVar2 * 0x28 + 0x28));
  }
  FUN_18001c5f0(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return lVar2 * 0x28 + *plVar1;
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
  
  puVar1 = (undefined1 *)FUN_1800010b0(0x30,param_2);
  puVar2 = (undefined1 *)FUN_1800016d0(param_3);
  for (lVar3 = 0x30; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




longlong FUN_18001a110(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  _Container_proxy *p_Var7;
  _Container_proxy *p_Var8;
  _Container_proxy *p_Var9;
  undefined8 *puVar10;
  
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  lVar3 = (param_2 - *plVar2) / 0x30;
  this = (allocator<struct_std::_Container_proxy> *)FUN_180014f00(param_1);
  _Var4 = FUN_18001cb60(param_1);
  _Var5 = FUN_18001cb10(param_1);
  if (_Var4 == _Var5) {
    FUN_1800153f0();
  }
  uVar6 = FUN_18001c9e0(param_1,_Var4 + 1);
  p_Var7 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar6);
  p_Var8 = (_Container_proxy *)FUN_1800016d0(param_3);
  p_Var9 = (_Container_proxy *)FUN_1800016d0(p_Var7 + lVar3 * 0x30);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(this,p_Var9,p_Var8);
  plVar2 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar2) {
    puVar10 = (undefined8 *)FUN_180014ec0(param_1);
    uVar1 = *puVar10;
    puVar10 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001ca70(param_1,*puVar10,uVar1,(CLogWriter *)p_Var7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001cad0(param_1,*puVar10,param_2,(CLogWriter *)p_Var7);
    puVar10 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_18001cad0(param_1,param_2,*puVar10,(CLogWriter *)(p_Var7 + lVar3 * 0x30 + 0x30));
  }
  FUN_18001c8c0(param_1,(longlong)p_Var7,_Var4 + 1,uVar6);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return lVar3 * 0x30 + *plVar2;
}




void FUN_18001a390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1800010b0(0x20,param_2);
  uVar2 = FUN_1800016d0(param_3);
  FUN_180013490(lVar1,uVar2);
  return;
}




longlong FUN_18001a3e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  _Container_proxy *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  lVar2 = param_2 - *plVar1 >> 5;
  this = (allocator<struct_std::_Container_proxy> *)FUN_180014f00(param_1);
  _Var3 = FUN_180012900(param_1);
  _Var4 = FUN_18001ce60(param_1);
  if (_Var3 == _Var4) {
    FUN_1800153f0();
  }
  uVar5 = FUN_18001cd30(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  uVar7 = FUN_1800016d0(param_3);
  uVar8 = FUN_1800016d0(p_Var6 + lVar2 * 0x20);
  FUN_18001a390(this,uVar8,uVar7);
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    uVar7 = *puVar9;
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001cdc0(param_1,*puVar9,uVar7,(CLogWriter *)p_Var6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001ce20(param_1,*puVar9,param_2,(CLogWriter *)p_Var6);
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_18001ce20(param_1,param_2,*puVar9,(CLogWriter *)(p_Var6 + lVar2 * 0x20 + 0x20));
  }
  FUN_18001cc10(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return lVar2 * 0x20 + *plVar1;
}




void FUN_18001a660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1800010b0(0x20,param_2);
  uVar2 = FUN_1800016d0(param_3);
  basic_string<>(lVar1,uVar2);
  return;
}




longlong FUN_18001a6b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  _Container_proxy *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  lVar2 = param_2 - *plVar1 >> 5;
  this = (allocator<struct_std::_Container_proxy> *)FUN_180014f00(param_1);
  _Var3 = FUN_180012900(param_1);
  _Var4 = FUN_18001ce60(param_1);
  if (_Var3 == _Var4) {
    FUN_1800153f0();
  }
  uVar5 = FUN_18001cd30(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  uVar7 = FUN_1800016d0(param_3);
  uVar8 = FUN_1800016d0(p_Var6 + lVar2 * 0x20);
  FUN_18001a660(this,uVar8,uVar7);
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    uVar7 = *puVar9;
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001cdc0(param_1,*puVar9,uVar7,(CLogWriter *)p_Var6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001ce20(param_1,*puVar9,param_2,(CLogWriter *)p_Var6);
    puVar9 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_18001ce20(param_1,param_2,*puVar9,(CLogWriter *)(p_Var6 + lVar2 * 0x20 + 0x20));
  }
  FUN_18001cc10(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return lVar2 * 0x20 + *plVar1;
}




ulonglong FUN_18001a930(longlong param_1,ulonglong param_2,ulonglong param_3,ushort *param_4,
                       ulonglong param_5)

{
  int iVar1;
  ushort *local_18;
  
  if ((param_2 < param_5) || (param_2 - param_5 < param_3)) {
    param_3 = 0xffffffffffffffff;
  }
  else if (param_5 != 0) {
    local_18 = (ushort *)(param_1 + param_3 * 2);
    while (local_18 = (ushort *)
                      FUN_18001d140((short *)local_18,
                                    (longlong)
                                    ((param_1 + 2 + (param_2 - param_5) * 2) - (longlong)local_18)
                                    >> 1,(short *)param_4), local_18 != (ushort *)0x0) {
      iVar1 = FUN_180017710(local_18,param_4,param_5);
      if (iVar1 == 0) {
        return (longlong)local_18 - param_1 >> 1;
      }
      local_18 = local_18 + 1;
    }
    param_3 = 0xffffffffffffffff;
  }
  return param_3;
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
  puVar2 = (undefined8 *)FUN_180014f00(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_18001cef0();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180014f00(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800016b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800016d0(local_48);
  if (local_28 < 8) {
    FID_conflict_operator__(local_res18,local_18,(undefined1 *)puVar2,lVar1);
    uVar5 = FUN_1800016d0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800016d0(local_20);
    FID_conflict_operator__(local_res18,local_18,puVar4,lVar1);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
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
  puVar2 = (undefined8 *)FUN_180014f00(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_18001cef0();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180014f00(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800016b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800016d0(local_48);
  if (local_28 < 8) {
    FID_conflict_operator__(local_res18,local_18,(undefined1 *)puVar2,lVar1,local_res20,param_5);
    uVar5 = FUN_1800016d0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800016d0(local_20);
    FID_conflict_operator__(local_res18,local_18,puVar4,lVar1,local_res20,param_5);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




longlong FUN_18001adf0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_27;
  
  uVar1 = FUN_1800016d0(param_2);
  FUN_18001dc90(param_1,(ulonglong)local_27,uVar1);
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_18001ae40(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             ulonglong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [16];
  undefined8 local_48;
  undefined8 local_40;
  __uint64 local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  puVar2 = (undefined8 *)FUN_180014f00(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_18001cef0();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             _Calculate_growth(param_1,local_38);
  local_40 = FUN_180014f00(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800016b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800016d0(local_48);
  if (local_28 < 0x10) {
    FUN_180013740(local_res18,local_18,(undefined1 *)puVar2,lVar1);
    uVar5 = FUN_1800016d0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800016d0(local_20);
    FUN_180013740(local_res18,local_18,puVar4,lVar1);
    FUN_180015a50(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




_Facet_base * FUN_18001afe0(locale *param_1)

{
  __uint64 _Var1;
  _Facet_base *local_68;
  _Facet_base *local_60;
  _Facet_base *local_58;
  _Lockit local_50 [8];
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_48 [8];
  __uint64 local_40;
  _Facet_base *local_38;
  undefined8 local_30;
  exception local_28 [40];
  
  local_30 = 0xfffffffffffffffe;
  std::_Lockit::_Lockit(local_50,0);
  local_68 = DAT_18004fdc8;
  local_40 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  local_58 = (_Facet_base *)FUN_1800018d0((longlong)param_1,local_40);
  if (local_58 == (_Facet_base *)0x0) {
    if (local_68 == (_Facet_base *)0x0) {
      _Var1 = std::codecvt<char,char,struct__Mbstatet>::_Getcat((facet **)&local_68,param_1);
      if (_Var1 == 0xffffffffffffffff) {
        FID_conflict_bad_cast(local_28);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_28,(ThrowInfo *)&DAT_18004b260);
      }
      local_60 = local_68;
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_><struct_std::default_delete<class_std::_Facet_base>,0>
                (local_48,local_68);
      std::_Facet_Register(local_60);
      (**(code **)(*(longlong *)local_60 + 8))(local_60);
      DAT_18004fdc8 = local_68;
      local_58 = local_68;
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      release(local_48);
      FUN_18001c0b0(local_48);
    }
    else {
      local_58 = local_68;
    }
  }
  local_38 = local_58;
  std::_Lockit::~_Lockit(local_50);
  return local_38;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t)
   __ptr64
    public: __cdecl std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * _Compressed_pair<><>(undefined8 *param_1)

{
  FUN_1800016d0(param_1);
  FUN_18001c100(param_1);
  return param_1;
}




void FUN_18001b150(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001dcd0();
  return;
}




void FUN_18001b1a0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001dcf0(param_1,param_2);
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
  FUN_18001dd30();
  return;
}




CLogWriter *
FUN_18001b220(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_52 [2];
  void *local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  longlong local_20;
  void *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = (void *)FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_18001b340((longlong *)&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  FUN_18001dc60(local_52);
  local_28 = local_48;
  local_20 = local_40;
  local_18 = local_50;
  uVar1 = FUN_18001dd40(local_50,local_40,local_48);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




longlong FUN_18001b340(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1;
}




void FUN_18001b360(undefined1 *param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001dda0(param_1,param_2,param_3);
  return;
}




void FUN_18001b3c0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001dde0(param_1,param_2);
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
      pvVar1 = (void *)FUN_1800016e0(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_18001de20(param_1);
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
    FUN_180001700((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
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
    public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t)
   __ptr64
    public: __cdecl std::_Compressed_pair<class std::allocator<unsigned short>,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1>::_Compressed_pair<class
   std::allocator<unsigned short>,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<class std::allocator<wchar_t>,class
   std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<class
   std::allocator<wchar_t>,class std::_String_val<struct std::_Simple_types<wchar_t> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong _Compressed_pair<><>(longlong param_1)

{
  FUN_1800016d0(param_1);
  _String_val<>(param_1);
  return param_1;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_grow_by<class <lambda_16d2cb92461ac9818af78a76c749bd7f>,unsigned __int64,unsigned
   __int64,char const * __ptr64,unsigned __int64>(unsigned __int64,class
   <lambda_16d2cb92461ac9818af78a76c749bd7f>,unsigned __int64,unsigned __int64,char const *
   __ptr64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_grow_by<class_<lambda_16d2cb92461ac9818af78a76c749bd7f>,unsigned___int64,unsigned___int64,char_const*___ptr64,unsigned___int64>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          ulonglong param_1,undefined1 param_3,longlong param_4,longlong param_5,undefined1 *param_6
          ,longlong param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180014f00(this);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(this);
  if (_Var3 - lVar1 < param_1) {
    FUN_18001cef0();
  }
  local_38 = lVar1 + param_1;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(this,local_38);
  local_40 = FUN_180014f00(this);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800016b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_1800016d0(local_48);
  if (local_28 < 8) {
    FUN_180016310(local_res18,local_18,(undefined1 *)puVar2,lVar1,local_res20,param_5,param_6,
                  param_7);
    uVar5 = FUN_1800016d0(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_1800016d0(local_20);
    FUN_180016310(local_res18,local_18,puVar4,lVar1,local_res20,param_5,param_6,param_7);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return this;
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
    FUN_18001cef0();
  }
  puVar2 = (undefined8 *)FUN_180014f00(param_1);
  local_18 = puVar2[3];
  local_20 = FID_conflict__Calculate_growth(param_1,param_2);
  local_28 = FUN_180014f00(param_1);
  local_30 = allocate(local_28,local_20 + 1);
  FUN_1800016b0();
  puVar2[2] = param_2;
  puVar2[3] = local_20;
  puVar3 = (undefined1 *)FUN_1800016d0(local_30);
  FID_conflict_operator__(local_res18,puVar3,param_2,local_res20);
  if (local_18 < 8) {
    uVar4 = FUN_1800016d0(puVar2);
    construct<>(local_28,uVar4,&local_30);
  }
  else {
    deallocate(local_28,(void *)*puVar2,local_18 + 1);
    *puVar2 = local_30;
  }
  return param_1;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_grow_by<class <lambda_319d5e083f45f90dcdce5dce53cbb275>,char>(unsigned
   __int64,class <lambda_319d5e083f45f90dcdce5dce53cbb275>,char) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_grow_by<class_<lambda_319d5e083f45f90dcdce5dce53cbb275>,char>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          ulonglong param_1,<lambda_319d5e083f45f90dcdce5dce53cbb275> param_3,char param_4)

{
  __uint64 _Var1;
  char *pcVar2;
  __uint64 _Var3;
  char *pcVar4;
  undefined8 uVar5;
  <lambda_319d5e083f45f90dcdce5dce53cbb275> local_res18 [8];
  char local_res20;
  undefined8 local_48;
  undefined8 local_40;
  __uint64 local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  char *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  pcVar2 = (char *)FUN_180014f00(this);
  _Var1 = *(__uint64 *)(pcVar2 + 0x10);
  _Var3 = FID_conflict_max_size(this);
  if (_Var3 - _Var1 < param_1) {
    FUN_18001cef0();
  }
  local_38 = _Var1 + param_1;
  local_28 = *(ulonglong *)(pcVar2 + 0x18);
  local_30 = _Calculate_growth(this,local_38);
  local_40 = FUN_180014f00(this);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800016b0();
  *(__uint64 *)(pcVar2 + 0x10) = local_38;
  *(__uint64 *)(pcVar2 + 0x18) = local_30;
  local_18 = (char *)FUN_1800016d0(local_48);
  if (local_28 < 0x10) {
    <lambda_319d5e083f45f90dcdce5dce53cbb275>::operator()
              (local_res18,local_18,pcVar2,_Var1,local_res20);
    uVar5 = FUN_1800016d0(pcVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = *(void **)pcVar2;
    pcVar4 = (char *)FUN_1800016d0(local_20);
    <lambda_319d5e083f45f90dcdce5dce53cbb275>::operator()
              (local_res18,local_18,pcVar4,_Var1,local_res20);
    FUN_180015a50(local_40,local_20,local_28 + 1);
    *(undefined8 *)pcVar2 = local_48;
  }
  return this;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_for<class <lambda_66f57f934f28d61049862f64df852ff0>,char const * __ptr64>(unsigned
   __int64,class <lambda_66f57f934f28d61049862f64df852ff0>,char const * __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_for<class_<lambda_66f57f934f28d61049862f64df852ff0>,char_const*___ptr64>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          ulonglong param_1,<lambda_66f57f934f28d61049862f64df852ff0> param_3,char *param_4)

{
  __uint64 _Var1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  <lambda_66f57f934f28d61049862f64df852ff0> local_res18 [8];
  char *local_res20;
  undefined8 local_30;
  undefined8 local_28;
  __uint64 local_20;
  ulonglong local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  _Var1 = FID_conflict_max_size(this);
  if (_Var1 < param_1) {
    FUN_18001cef0();
  }
  puVar2 = (undefined8 *)FUN_180014f00(this);
  local_18 = puVar2[3];
  local_20 = _Calculate_growth(this,param_1);
  local_28 = FUN_180014f00(this);
  local_30 = allocate(local_28,local_20 + 1);
  FUN_1800016b0();
  puVar2[2] = param_1;
  puVar2[3] = local_20;
  pcVar3 = (char *)FUN_1800016d0(local_30);
  <lambda_66f57f934f28d61049862f64df852ff0>::operator()(local_res18,pcVar3,param_1,local_res20);
  if (local_18 < 0x10) {
    uVar4 = FUN_1800016d0(puVar2);
    construct<>(local_28,uVar4,&local_30);
  }
  else {
    FUN_180015a50(local_28,(void *)*puVar2,local_18 + 1);
    *puVar2 = local_30;
  }
  return this;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Reallocate_grow_by<class <lambda_65e615be2a453ca0576c979606f46740>,char const *
   __ptr64,unsigned __int64>(unsigned __int64,class <lambda_65e615be2a453ca0576c979606f46740>,char
   const * __ptr64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
_Reallocate_grow_by<class_<lambda_65e615be2a453ca0576c979606f46740>,char_const*___ptr64,unsigned___int64>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          ulonglong param_1,<lambda_65e615be2a453ca0576c979606f46740> param_3,char *param_4,
          __uint64 param_5)

{
  __uint64 _Var1;
  char *pcVar2;
  __uint64 _Var3;
  char *pcVar4;
  undefined8 uVar5;
  <lambda_65e615be2a453ca0576c979606f46740> local_res18 [8];
  char *local_res20;
  undefined8 local_48;
  undefined8 local_40;
  __uint64 local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  char *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  pcVar2 = (char *)FUN_180014f00(this);
  _Var1 = *(__uint64 *)(pcVar2 + 0x10);
  _Var3 = FID_conflict_max_size(this);
  if (_Var3 - _Var1 < param_1) {
    FUN_18001cef0();
  }
  local_38 = _Var1 + param_1;
  local_28 = *(ulonglong *)(pcVar2 + 0x18);
  local_30 = _Calculate_growth(this,local_38);
  local_40 = FUN_180014f00(this);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800016b0();
  *(__uint64 *)(pcVar2 + 0x10) = local_38;
  *(__uint64 *)(pcVar2 + 0x18) = local_30;
  local_18 = (char *)FUN_1800016d0(local_48);
  if (local_28 < 0x10) {
    <lambda_65e615be2a453ca0576c979606f46740>::operator()
              (local_res18,local_18,pcVar2,_Var1,local_res20,param_5);
    uVar5 = FUN_1800016d0(pcVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = *(void **)pcVar2;
    pcVar4 = (char *)FUN_1800016d0(local_20);
    <lambda_65e615be2a453ca0576c979606f46740>::operator()
              (local_res18,local_18,pcVar4,_Var1,local_res20,param_5);
    FUN_180015a50(local_40,local_20,local_28 + 1);
    *(undefined8 *)pcVar2 = local_48;
  }
  return this;
}




void FUN_18001bd20(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800016d0(param_2);
  FUN_1800016c0();
  FUN_1800016d0((longlong)param_2 + 8);
  FUN_1800016c0();
  FUN_1800016d0((longlong)param_2 + 0x10);
  FUN_1800016c0();
  FUN_180017e30(local_18,param_2,1);
  return;
}




undefined8 *
FUN_18001bdb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800016d0(param_3);
  FUN_1800016d0(param_4);
  FUN_18001dee0(param_1);
  return param_1;
}




longlong FUN_18001be00(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 << 3;
  if (0x1fffffffffffffff < param_1) {
    local_18 = -1;
  }
  return local_18;
}




void FUN_18001be50(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001df10(param_1,param_2,param_3);
  return;
}




void FUN_18001bea0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001df70(param_1,param_2,param_3);
  return;
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




/* Library Function - Single Match
    void __cdecl std::swap<char,void>(char & __ptr64,char & __ptr64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __cdecl std::swap<char,void>(char *param_1,char *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 local_18 [24];
  
  puVar1 = (undefined1 *)FUN_1800016d0(param_1);
  local_18[0] = *puVar1;
  pcVar2 = (char *)FUN_1800016d0(param_2);
  *param_1 = *pcVar2;
  pcVar2 = (char *)FUN_1800016d0(local_18);
  *param_2 = *pcVar2;
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




undefined8 * FUN_18001bfe0(undefined8 *param_1,longlong param_2)

{
  FUN_1800013b0(param_1,param_2);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined4 * FUN_18001c020(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_180013490((longlong)(param_1 + 2),param_2 + 2);
  return param_1;
}




/* Library Function - Single Match
    public: class std::_Facet_base * __ptr64 __cdecl std::unique_ptr<class std::_Facet_base,struct
   std::default_delete<class std::_Facet_base> >::release(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Facet_base * __thiscall
std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release
          (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
           *this)

{
  _Facet_base *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = get(this);
  puVar2 = (undefined8 *)FUN_180014f00(this);
  *puVar2 = 0;
  return p_Var1;
}




void FUN_18001c0b0(unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   *param_1)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           get(param_1);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_180014f00(param_1);
    p_Var1 = std::
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             ::get(param_1);
    FUN_18001d1f0(uVar2,(undefined8 *)p_Var1);
  }
  return;
}




undefined8 * FUN_18001c100(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_18001c140(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_1);
  FUN_1800016d0(uVar1);
  FUN_180014fc0(param_2,param_3);
  return param_2;
}




void FUN_18001c190(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017b20(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017be0(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3 * 8;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4 * 8;
  return;
}




ulonglong FUN_18001c2b0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180017b20(param_1);
  _Var2 = FUN_180017b60(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18001c340(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001c3a0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001c3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001dfd0(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_18001c3e0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017c10(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    deallocate(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3 * 2;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4 * 2;
  return;
}




ulonglong FUN_18001c500(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180017c10(param_1);
  _Var2 = FUN_180017c50(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18001c590(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001d290(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001c5f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)FUN_180014ee0(param_1);
    FUN_180017cf0(param_1,*plVar1,lVar3);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017d30(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017d80(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3 * 0x28;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4 * 0x28;
  return;
}




ulonglong FUN_18001c710(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180017d30(param_1);
  _Var2 = FUN_18001c840(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18001c7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001c800(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001c800(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001e0f0(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_18001c840(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180014f00(param_1);
  local_18 = FUN_18001d260();
  local_10[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
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




void FUN_18001c8c0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_18001d2d0(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001cbe0(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3 * 0x30;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4 * 0x30;
  return;
}




ulonglong FUN_18001c9e0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_18001d2d0(param_1);
  _Var2 = FUN_18001cb10(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18001ca70(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001cad0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001cad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001e2b0(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_18001cb10(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180014f00(param_1);
  local_18 = FUN_18001d270();
  local_10[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




longlong FUN_18001cb60(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return (*plVar1 - *plVar2) / 0x30;
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




void FUN_18001cbe0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x30);
  return;
}




void FUN_18001cc10(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)FUN_180014ee0(param_1);
    FUN_180017db0(param_1,*plVar1,lVar3);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017df0(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017e30(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3 * 0x20;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4 * 0x20;
  return;
}




ulonglong FUN_18001cd30(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180017df0(param_1);
  _Var2 = FUN_18001ce60(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_18001cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_18001ce20(param_1,param_2,param_3,param_4);
  return;
}




void FUN_18001ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001e450(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_18001ce60(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180014f00(param_1);
  local_18 = FUN_18001d280();
  local_10[0] = FUN_180001530();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
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
  FUN_1800016d0(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




void FUN_18001cef0(void)

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
  local_20 = FUN_180014f00(param_1);
  local_28 = param_2 | 7;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




void FUN_18001cfd0(undefined8 param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  ushort *puVar4;
  
  puVar2 = (undefined8 *)FUN_180014f00(param_1);
  _Var3 = std::_WChar_traits<wchar_t>::length(param_2);
  lVar1 = puVar2[2];
  puVar4 = (ushort *)Myptr(puVar2);
  FUN_18001e5c0(puVar4,lVar1,(ushort *)param_2,_Var3);
  return;
}




/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Calculate_growth(unsigned __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

__uint64 __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Calculate_growth
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1)

{
  ulonglong uVar1;
  __uint64 _Var2;
  __uint64 *p_Var3;
  ulonglong local_28;
  longlong local_20;
  __uint64 local_18 [3];
  
  _Var2 = FID_conflict_max_size(this);
  local_20 = FUN_180014f00(this);
  local_28 = param_1 | 0xf;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = _Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




void FUN_18001d110(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,param_2);
  return;
}




short * FUN_18001d140(short *param_1,longlong param_2,short *param_3)

{
  longlong local_20;
  short *local_18;
  short *local_10;
  
  local_10 = (short *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  if (param_2 != 0) {
    for (; *local_18 != *param_3; local_18 = local_18 + 1) {
      if (local_20 == 1) {
        return (short *)0x0;
      }
      local_20 = local_20 + -1;
    }
    local_10 = local_18;
  }
  return local_10;
}




/* Library Function - Single Match
    public: class std::_Facet_base * __ptr64 __cdecl std::unique_ptr<class std::_Facet_base,struct
   std::default_delete<class std::_Facet_base> >::get(void)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Facet_base * __thiscall
std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::get
          (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
           *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014f00(this);
  return (_Facet_base *)*puVar1;
}




void FUN_18001d1f0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}




undefined8 FUN_18001d260(void)

{
  return 0x666666666666666;
}




undefined8 FUN_18001d270(void)

{
  return 0x555555555555555;
}




undefined8 FUN_18001d280(void)

{
  return 0x7ffffffffffffff;
}




void FUN_18001d290(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_18001e620(param_2,param_3,param_4,uVar1);
  return;
}




longlong FUN_18001d2d0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180017b00(param_1);
  plVar2 = (longlong *)FUN_180014ee0(param_1);
  return (*plVar1 - *plVar2) / 0x30;
}




/* Library Function - Single Match
    public: __cdecl std::unique_ptr<class std::_Facet_base,struct std::default_delete<class
   std::_Facet_base> >::unique_ptr<class std::_Facet_base,struct std::default_delete<class
   std::_Facet_base> ><struct std::default_delete<class std::_Facet_base>,0>(class std::_Facet_base
   * __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_> * __thiscall
std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_><struct_std::default_delete<class_std::_Facet_base>,0>
          (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
           *this,_Facet_base *param_1)

{
  _Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
  _Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_><class_std::_Facet_base*___ptr64>
            ((_Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
              *)this,param_1);
  return this;
}




void FUN_18001d360(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_18001e940(param_2,param_3);
  uVar2 = FUN_1800016d0(uVar1);
  uVar2 = FUN_180015610(param_1,uVar2);
  if ((uVar2 & 0xff) != 0) {
    puVar3 = (undefined8 *)FUN_180014ee0(param_1);
    uVar1 = FUN_1800157f0(param_1,param_2,param_3,(CLogWriter *)*puVar3);
    puVar3 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar3 = uVar1;
  }
  return;
}




void FUN_18001d400(undefined8 param_1,void *param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar1 = FUN_18001e940((longlong)param_2,param_3);
  uVar2 = FUN_1800016d0(uVar1);
  FUN_180012c70(param_1);
  uVar3 = FUN_180011de0(param_1);
  uVar4 = FUN_1800158b0(param_1);
  if (uVar4 < uVar2) {
    _Var5 = FUN_1800158f0(param_1);
    if (_Var5 < uVar2) {
      FUN_1800153f0();
    }
    uVar2 = FUN_180015700(param_1,uVar2);
    plVar6 = (longlong *)FUN_180014ee0(param_1);
    if (*plVar6 != 0) {
      FUN_180014ec0(param_1);
      FUN_180014ee0(param_1);
      FUN_180015110(param_1);
      uVar1 = FUN_180014f00(param_1);
      puVar7 = (undefined8 *)FUN_180014ee0(param_1);
      FUN_180015a50(uVar1,(void *)*puVar7,uVar4);
    }
    FUN_180015610(param_1,uVar2);
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    uVar1 = FUN_1800157f0(param_1,param_2,param_3,(CLogWriter *)*puVar7);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar1;
  }
  else if (uVar3 < uVar2) {
    lVar8 = FUN_18001e970((longlong)param_2,uVar3);
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001d6b0(param_2,lVar8,(void *)*puVar7);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar1 = FUN_1800157f0(param_1,lVar8,param_3,(CLogWriter *)*puVar7);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar1;
  }
  else {
    plVar6 = (longlong *)FUN_180014ee0(param_1);
    lVar8 = *plVar6;
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001d6b0(param_2,param_3,(void *)*puVar7);
    FUN_180014ec0(param_1);
    FUN_180015110(param_1);
    plVar6 = (longlong *)FUN_180014ec0(param_1);
    *plVar6 = lVar8 + uVar2;
  }
  return;
}




void FUN_18001d6b0(void *param_1,longlong param_2,void *param_3)

{
  undefined1 local_18 [24];
  
  FUN_18001dc60(local_18);
  FUN_18001e9a0(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018001d8ff) */

undefined8 *
FUN_18001d700(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,byte param_5)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool local_108;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined1 local_100 [8];
  undefined8 *local_f8;
  undefined8 *local_f0;
  uint local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  undefined8 local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  undefined8 local_80;
  undefined8 *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_38 = 0xfffffffffffffffe;
  local_d0 = (longlong *)FUN_180014dd0(param_1);
  local_f0 = (undefined8 *)*local_d0;
  local_f8 = (undefined8 *)local_f0[1];
  local_108 = true;
  while (*(char *)((longlong)local_f8 + 0x19) == '\0') {
    local_f0 = local_f8;
    if (param_3 == '\0') {
      local_80 = FUN_180014f00(param_1);
      local_a0 = (uint *)FUN_18001e790(param_1,(longlong)local_f8);
      local_90 = local_a0;
      local_98 = (uint *)FUN_18001e7c0(param_1,param_4);
      local_88 = local_98;
      local_108 = FUN_18001e7f0(local_80,local_98,local_90);
    }
    else {
      local_a8 = FUN_180014f00(param_1);
      local_c8 = (uint *)FUN_18001e7c0(param_1,param_4);
      local_b8 = local_c8;
      local_c0 = (uint *)FUN_18001e790(param_1,(longlong)local_f8);
      local_b0 = local_c0;
      local_108 = FUN_18001e7f0(local_a8,local_c0,local_b8);
      local_108 = !local_108;
      local_e8 = (uint)local_108;
    }
    if (local_108 == false) {
      local_d8 = (undefined8 *)local_f8[2];
    }
    else {
      local_d8 = (undefined8 *)*local_f8;
    }
    local_f8 = local_d8;
  }
  FUN_1800016d0(local_d0);
  FUN_180014fc0(&local_e0,local_f0);
  if (local_108 != false) {
    plVar2 = FUN_180017a90(param_1,&local_28);
    bVar1 = FUN_180014d10(&local_e0,plVar2);
    if (bVar1) {
      local_103 = 1;
      uVar3 = FUN_1800016d0(param_4);
      local_70 = FUN_18001e9e0(param_1,&local_20,'\x01',local_f0,uVar3,param_5);
      FUN_18001ed40(param_2,local_70,&local_103);
      return param_2;
    }
    FUN_18001e740(&local_e0);
  }
  local_48 = FUN_180014f00(param_1);
  local_68 = (uint *)FUN_18001e7c0(param_1,param_4);
  local_58 = local_68;
  local_60 = (uint *)FUN_18001e790(param_1,local_e0);
  local_50 = local_60;
  local_102 = FUN_18001e7f0(local_48,local_60,local_58);
  if ((bool)local_102) {
    local_101 = 1;
    uVar3 = FUN_1800016d0(param_4);
    local_40 = FUN_18001e9e0(param_1,local_18,local_108,local_f0,uVar3,param_5);
    FUN_18001ed40(param_2,local_40,&local_101);
  }
  else {
    FUN_18001e7e0();
    local_100[0] = 0;
    FUN_18001ed40(param_2,&local_e0,local_100);
  }
  return param_2;
}




void FUN_18001dba0(void *param_1,longlong param_2,longlong param_3)

{
  undefined1 local_18 [24];
  
  FUN_18001dc60(local_18);
  FUN_18001ed90(param_1,param_2,param_3);
  return;
}




longlong FUN_18001dbf0(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 3;
}




undefined8 * FUN_18001dc20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800016d0(param_3);
  FUN_18001c100(param_1);
  return param_1;
}




undefined1 * FUN_18001dc60(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




longlong FUN_18001dc90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800016d0(param_3);
  _String_val<>(param_1);
  return param_1;
}




void FUN_18001dcd0(void)

{
  return;
}




void FUN_18001dcf0(undefined1 *param_1,longlong param_2)

{
  FUN_18001edd0(param_1,(longlong)(param_1 + param_2 * 2));
  return;
}




void FUN_18001dd30(void)

{
  return;
}




void FUN_18001dd40(void *param_1,longlong param_2,void *param_3)

{
  FUN_18001ee20(param_1,param_2,param_3);
  return;
}




void FUN_18001dd80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined1 * FUN_18001dda0(undefined1 *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  uVar1 = *param_3;
  puVar3 = param_1;
  for (lVar2 = param_2; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  return param_1 + param_2;
}




void FUN_18001dde0(undefined1 *param_1,longlong param_2)

{
  FUN_18001edd0(param_1,(longlong)(param_1 + param_2));
  return;
}




ulonglong FUN_18001de20(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_1800016e0(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
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
  FUN_1800016d0(param_2);
  return;
}




undefined8 * FUN_18001dee0(undefined8 *param_1)

{
  FUN_1800016d0(param_1);
  FUN_18001e760(param_1);
  return param_1;
}




void FUN_18001df10(longlong param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x28) {
    pvVar1 = (void *)FUN_1800016d0(local_res8);
    destroy<>(param_3,pvVar1);
  }
  return;
}




void FUN_18001df70(longlong param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x20) {
    pvVar1 = (void *)FUN_1800016d0(local_res8);
    destroy<>(param_3,pvVar1);
  }
  return;
}




CLogWriter *
FUN_18001dfd0(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_52 [2];
  void *local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  longlong local_20;
  void *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = (void *)FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_18001dbf0((longlong *)&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  FUN_18001dc60(local_52);
  local_28 = local_48;
  local_20 = local_40;
  local_18 = local_50;
  uVar1 = FUN_18001dd40(local_50,local_40,local_48);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




CLogWriter *
FUN_18001e0f0(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  CLogWriter local_52;
  CLogWriter local_51;
  longlong local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  CLogWriter *local_20;
  longlong local_18;
  longlong local_10;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_18001e230(&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  local_28 = &local_52;
  FUN_18001eed0();
  CLogWriter::operator=(local_28,&local_51);
  local_20 = local_48;
  local_18 = local_40;
  local_10 = local_50;
  uVar1 = FUN_18001ef00(local_50,local_40,local_48,local_res20);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




longlong FUN_18001e230(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x28;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x28;
  if (0x666666666666666 < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




CLogWriter *
FUN_18001e2b0(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_52 [2];
  void *local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  longlong local_20;
  void *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = (void *)FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_18001e3d0((longlong *)&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  FUN_18001dc60(local_52);
  local_28 = local_48;
  local_20 = local_40;
  local_18 = local_50;
  uVar1 = FUN_18001dd40(local_50,local_40,local_48);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




longlong FUN_18001e3d0(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x30;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x30;
  if (0x555555555555555 < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




CLogWriter *
FUN_18001e450(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  CLogWriter local_52;
  CLogWriter local_51;
  longlong local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  CLogWriter *local_20;
  longlong local_18;
  longlong local_10;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_18001e590(&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  local_28 = &local_52;
  FUN_18001eed0();
  CLogWriter::operator=(local_28,&local_51);
  local_20 = local_48;
  local_18 = local_40;
  local_10 = local_50;
  uVar1 = FUN_18001ef90(local_50,local_40,local_48,local_res20);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




longlong FUN_18001e590(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 5;
}




undefined1 FUN_18001e5c0(ushort *param_1,longlong param_2,ushort *param_3,longlong param_4)

{
  int iVar1;
  
  if ((param_2 == param_4) && (iVar1 = FUN_180017710(param_1,param_3,param_2), iVar1 == 0)) {
    return 1;
  }
  return 0;
}




CLogWriter *
FUN_18001e620(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  undefined1 local_52 [2];
  void *local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  longlong local_20;
  void *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = (void *)FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_180019600((longlong *)&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  FUN_18001dc60(local_52);
  local_28 = local_48;
  local_20 = local_40;
  local_18 = local_50;
  uVar1 = FUN_18001dd40(local_50,local_40,local_48);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




longlong * FUN_18001e740(longlong *param_1)

{
  FUN_18001e830(param_1);
  return param_1;
}




undefined8 * FUN_18001e760(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




void FUN_18001e790(undefined8 param_1,longlong param_2)

{
  FUN_18001e7c0(param_1,param_2 + 0x1c);
  return;
}




void FUN_18001e7c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1800016d0(param_2);
  return;
}




void FUN_18001e7e0(void)

{
  return;
}




bool FUN_18001e7f0(undefined8 param_1,uint *param_2,uint *param_3)

{
  return *param_2 < *param_3;
}




longlong * FUN_18001e830(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(*param_1 + 0x19) == '\0') {
    if (*(char *)(*(longlong *)*param_1 + 0x19) == '\0') {
      lVar2 = FUN_180018a80(*(longlong *)*param_1);
      *param_1 = lVar2;
    }
    else {
      while ((plVar1 = *(longlong **)(*param_1 + 8), *(char *)((longlong)plVar1 + 0x19) == '\0' &&
             (*param_1 == *plVar1))) {
        *param_1 = (longlong)plVar1;
      }
      if (*(char *)(*param_1 + 0x19) == '\0') {
        *param_1 = (longlong)plVar1;
      }
    }
  }
  else {
    *param_1 = *(longlong *)(*param_1 + 0x10);
  }
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::_Unique_ptr_base<class std::_Facet_base,struct std::default_delete<class
   std::_Facet_base> >::_Unique_ptr_base<class std::_Facet_base,struct std::default_delete<class
   std::_Facet_base> ><class std::_Facet_base * __ptr64>(class std::_Facet_base * __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

_Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_> *
__thiscall
std::_Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
_Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_><class_std::_Facet_base*___ptr64>
          (_Unique_ptr_base<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
           *this,_Facet_base *param_1)

{
  _Facet_base *local_res10 [3];
  undefined1 local_18;
  
  local_res10[0] = param_1;
  _Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
  ::
  _Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1><class_std::_Facet_base*___ptr64&___ptr64>
            ((_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
              *)this,local_18,local_res10);
  return this;
}




void FUN_18001e940(longlong param_1,longlong param_2)

{
  FUN_18001f1e0(param_1,param_2);
  return;
}




longlong FUN_18001e970(longlong param_1,longlong param_2)

{
  longlong local_res8;
  longlong local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_18001f200(&local_res8,param_2);
  return local_res8;
}




void FUN_18001e9a0(void *param_1,longlong param_2,void *param_3)

{
  FUN_18001ee20(param_1,param_2,param_3);
  return;
}




undefined8 *
FUN_18001e9e0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,byte param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_180014dd0(param_1);
  lVar2 = FUN_18001f180(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_18001e7e0();
    std::_Xlength_error("map/set<T> too long");
  }
  uVar3 = FUN_1800016d0(param_5);
  plVar4 = (longlong *)FUN_18001f230(param_1,(ulonglong)param_6,uVar3);
  plVar1[1] = plVar1[1] + 1;
  plVar4[1] = (longlong)param_4;
  local_28 = plVar4;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar5 = (undefined8 *)FUN_180018740(plVar1);
    *puVar5 = plVar4;
    puVar5 = (undefined8 *)FUN_180014d90(plVar1);
    *puVar5 = plVar4;
    puVar5 = (undefined8 *)FUN_180018720(plVar1);
    *puVar5 = plVar4;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar4;
    plVar6 = (longlong *)FUN_180018720(plVar1);
    if (param_4 == (undefined8 *)*plVar6) {
      puVar5 = (undefined8 *)FUN_180018720(plVar1);
      *puVar5 = plVar4;
    }
  }
  else {
    *param_4 = plVar4;
    plVar6 = (longlong *)FUN_180014d90(plVar1);
    if (param_4 == (undefined8 *)*plVar6) {
      puVar5 = (undefined8 *)FUN_180014d90(plVar1);
      *puVar5 = plVar4;
    }
  }
  while (*(char *)(local_28[1] + 0x18) == '\0') {
    if (local_28[1] == **(longlong **)(local_28[1] + 8)) {
      lVar2 = *(longlong *)(*(longlong *)(local_28[1] + 8) + 0x10);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)(local_28[1] + 0x10)) {
          local_28 = (longlong *)local_28[1];
          FUN_1800189a0(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_1800188c0(plVar1,*(longlong **)(local_28[1] + 8));
      }
    }
    else {
      lVar2 = **(longlong **)(local_28[1] + 8);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)local_28[1]) {
          local_28 = (longlong *)local_28[1];
          FUN_1800188c0(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_1800189a0(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar6 = (longlong *)FUN_180018740(plVar1);
  *(undefined1 *)(*plVar6 + 0x18) = 1;
  FUN_1800016d0(plVar1);
  FUN_180014fc0(param_2,plVar4);
  return param_2;
}




undefined8 * FUN_18001ed40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800016d0(param_2);
  *param_1 = *puVar1;
  puVar2 = (undefined1 *)FUN_1800016d0(param_3);
  *(undefined1 *)(param_1 + 1) = *puVar2;
  return param_1;
}




void FUN_18001ed90(void *param_1,longlong param_2,longlong param_3)

{
  FUN_18001f260(param_1,param_2,param_3);
  return;
}




longlong FUN_18001edd0(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return param_2;
}




longlong FUN_18001ee20(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
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
  FUN_18001f020(param_2,0);
  return;
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
  FUN_18001f060(param_2,0);
  return;
}




undefined1 FUN_18001eed0(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return local_18[0];
}




undefined8 FUN_18001ef00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_28 [5];
  
  FUN_18001f100(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x28) {
    uVar1 = FUN_1800016d0(local_res8);
    FUN_18001f2d0((longlong)local_28,uVar1);
  }
  uVar1 = FUN_18001f0a0(local_28);
  FUN_18001f140(local_28);
  return uVar1;
}




undefined8 FUN_18001ef90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_28 [5];
  
  FUN_18001f100(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x20) {
    uVar1 = FUN_1800016d0(local_res8);
    FUN_18001f340((longlong)local_28,uVar1);
  }
  uVar1 = FUN_18001f0a0(local_28);
  FUN_18001f0c0(local_28);
  return uVar1;
}




void * FUN_18001f020(void *param_1,uint param_2)

{
  FUN_18000edb0((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void * FUN_18001f060(void *param_1,uint param_2)

{
  FUN_1800133c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 FUN_18001f0a0(undefined8 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




void FUN_18001f0c0(longlong *param_1)

{
  FUN_18001bea0(*param_1,param_1[1],param_1[2]);
  return;
}




undefined8 * FUN_18001f100(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




void FUN_18001f140(longlong *param_1)

{
  FUN_18001be50(*param_1,param_1[1],param_1[2]);
  return;
}




void FUN_18001f180(undefined8 param_1)

{
  FUN_180014dd0(param_1);
  FUN_18001d280();
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_Compressed_pair<struct std::default_delete<class std::_Facet_base>,class
   std::_Facet_base * __ptr64,1>::_Compressed_pair<struct std::default_delete<class
   std::_Facet_base>,class std::_Facet_base * __ptr64,1><class std::_Facet_base * __ptr64 &
   __ptr64>(struct std::_Zero_then_variadic_args_t,class std::_Facet_base * __ptr64 & __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
* __thiscall
std::
_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
::
_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1><class_std::_Facet_base*___ptr64&___ptr64>
          (_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
           *this,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800016d0(param_3);
  *(undefined8 *)this = *puVar1;
  return this;
}




longlong FUN_18001f1e0(longlong param_1,longlong param_2)

{
  return param_2 - param_1;
}




void FUN_18001f200(longlong *param_1,longlong param_2)

{
  FUN_18001f3b0(param_1,param_2);
  return;
}




void FUN_18001f230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_3);
  FUN_18001f3e0(param_1,uVar1);
  return;
}




void FUN_18001f260(void *param_1,longlong param_2,longlong param_3)

{
  memmove((void *)(param_3 - (param_2 - (longlong)param_1)),param_1,param_2 - (longlong)param_1);
  return;
}




void FUN_18001f2d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1800016d0(param_2);
  uVar2 = FUN_1800016d0(*(undefined8 *)(param_1 + 8));
  FUN_180019df0(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
  return;
}




void FUN_18001f340(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1800016d0(param_2);
  uVar2 = FUN_1800016d0(*(undefined8 *)(param_1 + 8));
  FUN_18001a390(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}




void FUN_18001f3b0(longlong *param_1,longlong param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}




_Container_proxy * FUN_18001f3e0(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  p_Var1 = FUN_18001f470(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_1800016d0(param_2);
  uVar3 = FUN_1800016d0(p_Var1 + 0x1c);
  uVar4 = FUN_180014dd0(param_1);
  FUN_18001f550(uVar4,uVar3,uVar2);
  return p_Var1;
}




_Container_proxy * FUN_18001f470(undefined8 param_1)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = (allocator<struct_std::_Container_proxy> *)FUN_180014dd0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  uVar2 = FUN_180014dd0(param_1);
  uVar3 = FUN_1800016d0(p_Var1);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800016d0(p_Var1 + 8);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800016d0(p_Var1 + 0x10);
  construct<>(this,uVar3,uVar2);
  return p_Var1;
}




void FUN_18001f550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_1800010b0(4,param_2);
  puVar2 = (undefined4 *)FUN_1800016d0(param_3);
  *puVar1 = *puVar2;
  return;
}




void FUN_18001f590(longlong param_1,uint param_2)

{
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _scalar_deleting_destructor_
            ((basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




undefined4 FUN_18001f5a0(void)

{
  FUN_180025b40((undefined4 *)&DAT_18004fe00);
  return 0;
}




undefined4 FUN_18001f5d0(void)

{
  FUN_180025bd0((undefined4 *)&DAT_18004fe00);
  return 0;
}




undefined4 FUN_18001f600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180025d10(0x18004fe00,param_2,param_3);
  return 0;
}




undefined4 FUN_18001f640(undefined8 param_1,int param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_14 = 0xffffffff;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_18002a740(&local_18);
    iVar1 = FUN_18002af10(&local_18,param_2,param_3,param_4);
    if (iVar1 != 0) {
      local_14 = 0;
    }
    FUN_18002a770(&local_18);
  }
  return local_14;
}




int FUN_18001f6d0(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000a3c0(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10032,local_28);
  return local_28[0];
}




int FUN_18001f760(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000a760(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10033,local_28);
  return local_28[0];
}




int FUN_18001f7f0(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000a530(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x1003a,local_28);
  return local_28[0];
}




int FUN_18001f880(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000a5f0(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x1003b,local_28);
  return local_28[0];
}




int FUN_18001f910(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000ada0(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x1003d,local_28);
  return local_28[0];
}




int FUN_18001f9a0(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000ae40(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x1003e,local_28);
  return local_28[0];
}




int FUN_18001fa30(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000a690(local_20,param_2,param_3,param_4);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10033,local_28);
  return local_28[0];
}




int FUN_18001fac0(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if (((-1 < param_2) && (-1 < param_3)) && (param_4 != 0)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_180004930(local_20,param_2,param_3,param_4);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10033,local_28);
  return local_28[0];
}




int FUN_18001fb60(undefined8 param_1,int param_2,longlong param_3,longlong param_4)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000a460(local_20,param_2,param_3,param_4);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10033,local_28);
  return local_28[0];
}




void FUN_18001fbf0(undefined8 param_1,longlong param_2,int param_3,CCallBackOperate *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStackY_2b8 [32];
  uint local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  uint local_264;
  float local_260;
  ulong local_25c;
  int local_258;
  float local_254;
  longlong local_250;
  int local_248 [2];
  longlong local_240 [3];
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_240[1] = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_2b8;
  local_278 = 0xffffffff;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_18001ff0f;
  FUN_180002f10(&local_250);
  if (param_4 != (CCallBackOperate *)0x0) {
    local_268 = 0;
    for (local_270 = 0; local_270 < param_3; local_270 = local_270 + 1) {
      local_278 = FUN_18000a960(&local_250,*(int *)(param_2 + (longlong)local_270 * 0x10),
                                *(longlong *)(param_2 + 8 + (longlong)local_270 * 0x10));
      if (local_278 != 0) {
        local_268 = 1;
        break;
      }
    }
    if (local_268 == 0) {
      do {
        local_258 = 0;
        local_260 = 0.0;
        for (local_26c = 0; local_26c < param_3; local_26c = local_26c + 1) {
          local_264 = 0;
          local_254 = 0.0;
          local_248[0] = 0;
          local_240[0] = -1;
          puVar3 = local_228;
          for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          local_278 = FUN_18000b000(&local_250,*(int *)(param_2 + (longlong)local_26c * 0x10),
                                    *(longlong *)(param_2 + 8 + (longlong)local_26c * 0x10),
                                    local_248,&local_264,&local_254,local_240,(uint *)0x0);
          if (local_278 != 0) {
            local_268 = 1;
            break;
          }
          if ((local_264 != 0) && (local_264 != 3)) {
            local_278 = 0xffffffff;
            local_268 = 1;
            break;
          }
          local_258 = local_258 + local_264;
          local_260 = local_260 + local_254;
        }
        if (local_268 != 0) goto LAB_18001fefb;
        local_25c = (ulong)(local_260 / (float)param_3);
        if (99 < (int)local_25c) {
          local_25c = 100;
        }
        CCallBackOperate::SetCurChildOperationValue(param_4,local_25c);
        if (local_258 == 0) goto code_r0x00018001fed6;
        Sleep(1000);
      } while( true );
    }
    FUN_180002f40(&local_250);
    goto LAB_18001ff0f;
  }
  for (local_274 = 0; local_274 < param_3; local_274 = local_274 + 1) {
    uVar1 = FUN_18000a960(&local_250,*(int *)(param_2 + (longlong)local_274 * 0x10),
                          *(longlong *)(param_2 + 8 + (longlong)local_274 * 0x10));
    local_278 = local_278 | uVar1;
  }
LAB_18001fefb:
  FUN_180002f40(&local_250);
LAB_18001ff0f:
  FUN_180020450(param_1,0x10034,(int *)&local_278);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2b8);
  return;
code_r0x00018001fed6:
  CCallBackOperate::SetCurChildOperationValue(param_4,100);
  goto LAB_18001fefb;
}




undefined4 FUN_18001ff50(undefined8 param_1,int param_2,longlong param_3,int *param_4)

{
  uint local_28;
  undefined4 local_24;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_24 = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28 = 6;
    param_4[3] = param_2;
    *(longlong *)(param_4 + 4) = param_3;
    local_24 = FUN_18000b000(local_20,param_2,param_3,param_4,&local_28,(float *)(param_4 + 2),
                             (longlong *)(param_4 + 6),(uint *)0x0);
    if (local_28 == 0xffffffff) {
      local_28 = 6;
    }
    param_4[1] = local_28;
    FUN_180002f40(local_20);
  }
  return local_24;
}




undefined4 FUN_180020060(undefined8 param_1,longlong *param_2,int *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  __uint64 _Var6;
  undefined4 *puVar7;
  int local_98;
  longlong local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60 [3];
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_28 = 0xfffffffffffffffe;
  local_84 = 0xffffffff;
  FUN_180002f10(&local_80);
  FUN_180011b90(local_60);
  iVar3 = FUN_18000b170(&local_80,local_60);
  if (iVar3 == 0) {
    FUN_180020bf0(local_60);
    FUN_180002f40(&local_80);
  }
  else {
    local_88 = 0;
    *param_3 = 0;
    FUN_180011820(local_60,&local_78);
    while( true ) {
      plVar4 = FUN_1800124b0(local_60,&local_20);
      bVar2 = FID_conflict_operator__(&local_78,plVar4);
      if (!bVar2) break;
      lVar5 = FUN_180020bd0(&local_78);
      if (*(int *)(lVar5 + 0x1c) != 0) {
        *param_3 = *param_3 + 1;
      }
      lVar5 = FUN_180020bd0(&local_78);
      if (*(int *)(lVar5 + 0x28) != 0) {
        local_88 = 1;
      }
      FUN_180020bb0(&local_78);
    }
    if (local_88 == 0) {
      *param_3 = 0;
    }
    if (*param_3 == 0) {
      FUN_180020bf0(local_60);
      FUN_180002f40(&local_80);
    }
    else {
      local_48 = (ulonglong)*param_3;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_48;
      _Var6 = SUB168(ZEXT816(0x20) * auVar1,0);
      if (SUB168(ZEXT816(0x20) * auVar1,8) != 0) {
        _Var6 = 0xffffffffffffffff;
      }
      local_40 = thunk_FUN_180039108(_Var6);
      *param_2 = local_40;
      if (*param_2 == 0) {
        FUN_180020bf0(local_60);
        FUN_180002f40(&local_80);
      }
      else {
        local_98 = 0;
        FUN_180011820(local_60,&local_90);
        while( true ) {
          plVar4 = FUN_1800124b0(local_60,local_18);
          bVar2 = FID_conflict_operator__(&local_90,plVar4);
          if ((!bVar2) || (*param_3 <= local_98)) break;
          lVar5 = FUN_180020bd0(&local_90);
          if (*(int *)(lVar5 + 0x1c) != 0) {
            puVar7 = (undefined4 *)FUN_180020bd0(&local_90);
            local_70 = *puVar7;
            *(undefined4 *)(*param_2 + 0xc + (longlong)local_98 * 0x20) = local_70;
            lVar5 = FUN_180020bd0(&local_90);
            local_38 = *(undefined8 *)(lVar5 + 8);
            *(undefined8 *)(*param_2 + 0x10 + (longlong)local_98 * 0x20) = local_38;
            lVar5 = FUN_180020bd0(&local_90);
            local_30 = *(undefined8 *)(lVar5 + 0x10);
            *(undefined8 *)(*param_2 + 0x18 + (longlong)local_98 * 0x20) = local_30;
            lVar5 = FUN_180020bd0(&local_90);
            local_6c = *(undefined4 *)(lVar5 + 0x18);
            *(undefined4 *)(*param_2 + (longlong)local_98 * 0x20) = local_6c;
            lVar5 = FUN_180020bd0(&local_90);
            local_68 = *(undefined4 *)(lVar5 + 0x24);
            *(undefined4 *)(*param_2 + 8 + (longlong)local_98 * 0x20) = local_68;
            lVar5 = FUN_180020bd0(&local_90);
            local_64 = *(undefined4 *)(lVar5 + 0x20);
            *(undefined4 *)(*param_2 + 4 + (longlong)local_98 * 0x20) = local_64;
            local_98 = local_98 + 1;
          }
          FUN_180020bb0(&local_90);
        }
        local_84 = 0;
        FUN_180020bf0(local_60);
        FUN_180002f40(&local_80);
      }
    }
  }
  return local_84;
}




undefined4 FUN_180020400(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    free(param_2);
  }
  return 0;
}




void FUN_180020450(undefined8 param_1,int param_2,int *param_3)

{
  if (*param_3 == -1) {
    *param_3 = param_2;
  }
  return;
}




int FUN_180020480(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000aee0(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x1003c,local_28);
  return local_28[0];
}




int FUN_180020510(undefined8 param_1,int param_2,longlong param_3,int *param_4)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = -1;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000fb90(local_20,param_2,param_3,param_4);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10040,local_28);
  return local_28[0];
}




undefined8 FUN_1800205a0(longlong *param_1,longlong param_2)

{
  (**(code **)(*param_1 + 0xf0))(param_1,param_2 + 0x60);
  return 0;
}




int FUN_1800205e0(undefined8 param_1,int param_2,longlong param_3,int *param_4)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = -1;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000efa0(local_20,param_2,param_3,param_4);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x1003f,local_28);
  return local_28[0];
}




undefined8 FUN_180020670(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0) && (*(longlong *)(param_2 + 2) != 0)) {
    free(*(void **)(param_2 + 2));
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
  }
  return 0;
}




int FUN_1800206d0(undefined8 param_1,uint *param_2)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = -1;
  FUN_180002f10(local_20);
  local_28[0] = FUN_18000ff70(local_20,param_2);
  FUN_180002f40(local_20);
  FUN_180020450(param_1,0x10040,local_28);
  return local_28[0];
}




undefined8 FUN_180020740(longlong *param_1,uint *param_2)

{
  uint local_28;
  
  if ((*param_2 != 0) && (*(longlong *)(param_2 + 2) != 0)) {
    for (local_28 = 0; local_28 < *param_2; local_28 = local_28 + 1) {
      (**(code **)(*param_1 + 0xf0))
                (param_1,*(longlong *)(param_2 + 2) + 0x60 + (ulonglong)local_28 * 0x70);
    }
    free(*(void **)(param_2 + 2));
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
  }
  return 0;
}




void FUN_180020800(undefined8 param_1,int param_2,longlong param_3,CCallBackOperate *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStackY_2a8 [32];
  int local_268;
  uint local_264;
  ulong local_260;
  float local_25c;
  float local_258;
  uint local_254;
  longlong local_250;
  int local_248 [2];
  longlong local_240 [3];
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_240[1] = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_2a8;
  local_268 = -1;
  FUN_180002f10(&local_250);
  if (param_4 == (CCallBackOperate *)0x0) {
    local_268 = FUN_18000a960(&local_250,param_2,param_3);
  }
  else {
    local_268 = FUN_18000a960(&local_250,param_2,param_3);
    if (local_268 != 0) {
      FUN_180002f40(&local_250);
      goto LAB_1800209e7;
    }
    while( true ) {
      local_254 = 0;
      local_258 = 0.0;
      local_264 = 0;
      local_25c = 0.0;
      local_248[0] = 0;
      local_240[0] = -1;
      puVar2 = local_228;
      for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      local_268 = FUN_18000b000(&local_250,param_2,param_3,local_248,&local_264,&local_25c,local_240
                                ,(uint *)0x0);
      if (local_268 != 0) goto LAB_1800209d3;
      if ((local_264 != 0) && (local_264 != 3)) {
        local_268 = -1;
        goto LAB_1800209d3;
      }
      local_254 = local_264;
      local_258 = local_25c;
      local_260 = (ulong)local_25c;
      if (99 < (int)local_260) {
        local_260 = 100;
      }
      CCallBackOperate::SetCurChildOperationValue(param_4,local_260);
      if (local_254 == 0) break;
      Sleep(1000);
    }
    CCallBackOperate::SetCurChildOperationValue(param_4,100);
  }
LAB_1800209d3:
  FUN_180002f40(&local_250);
LAB_1800209e7:
  FUN_180020450(param_1,0x10034,&local_268);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2a8);
  return;
}




int FUN_180020a20(undefined8 param_1,int param_2,longlong param_3)

{
  int local_28 [2];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28[0] = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180002f10(local_20);
    local_28[0] = FUN_18000ab90(local_20,param_2,param_3);
    FUN_180002f40(local_20);
  }
  FUN_180020450(param_1,0x10041,local_28);
  return local_28[0];
}




undefined4 FUN_180020ab0(void)

{
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  FUN_180002f10(local_20);
  FUN_18000c3d0(local_20);
  FUN_180002f40(local_20);
  return 0;
}




undefined4 FUN_180020b00(void)

{
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  FUN_180002f10(local_20);
  FUN_18000cae0(local_20);
  FUN_180002f40(local_20);
  return 0;
}




undefined4 FUN_180020b50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  FUN_180002f10(local_20);
  uVar1 = FUN_18000b470(local_20,param_2,param_3);
  FUN_180002f40(local_20);
  return uVar1;
}




longlong * FUN_180020bb0(longlong *param_1)

{
  FUN_180020c20(param_1);
  return param_1;
}




void FUN_180020bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014d90(param_1);
  FUN_1800016d0(uVar1);
  return;
}




void FUN_180020bf0(undefined8 param_1)

{
  FUN_180020c40(param_1);
  return;
}




longlong * FUN_180020c20(longlong *param_1)

{
  *param_1 = *param_1 + 0x30;
  return param_1;
}




void FUN_180020c40(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    FUN_180014ec0(param_1);
    FUN_180014ee0(param_1);
    FUN_180015110(param_1);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_18001d2d0(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001cbe0(uVar2,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_180020d20(longlong param_1)

{
  __std_type_info_name(param_1 + 8,&DAT_18004f830);
  return;
}




int FUN_180020d50(char *param_1,undefined1 *param_2,uint *param_3)

{
  uint local_28;
  uint local_20;
  int local_1c;
  char *local_18;
  
  local_28 = 0;
  local_1c = 0;
  if ((*param_3 == 0) || (param_2 == (undefined1 *)0x0)) {
    local_1c = 0;
  }
  else {
    *param_2 = 0;
    if (*param_1 == 'c') {
      local_20 = 6;
    }
    else {
      if (*param_1 != 's') {
        return 0;
      }
      local_20 = 7;
    }
    for (local_18 = param_1 + local_20; *local_18 != '\0'; local_18 = local_18 + 1) {
      if (*local_18 == ':') {
        if (*param_3 <= local_28) {
          return 0;
        }
        param_2[local_28] = 0x2e;
        local_18 = local_18 + 1;
        local_1c = local_28 + 1;
      }
      else {
        if (*param_3 <= local_28) {
          return 0;
        }
        param_2[local_28] = *local_18;
      }
      local_28 = local_28 + 1;
    }
    if (local_28 < *param_3) {
      param_2[local_28] = 0;
      *param_3 = local_28;
    }
    else {
      local_1c = 0;
    }
  }
  return local_1c;
}




undefined * FUN_180020ec0(void)

{
  return &DAT_18004e064;
}




undefined8 FUN_180020ed0(undefined *param_1,undefined8 param_2)

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




undefined8 FUN_180020f20(LPCSTR param_1)

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
      uVar2 = FUN_180020ed0(pFVar1,hModule);
    }
  }
  return uVar2;
}




void FUN_180020fa0(char *param_1)

{
  char *pcVar1;
  undefined1 auStack_168 [32];
  char *local_148;
  ulonglong local_140;
  ulonglong local_138;
  CHAR local_128;
  char acStack_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_168;
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    while (local_148 = pcVar1, *local_148 != '\0') {
      if (0xff < (longlong)local_148 - (longlong)param_1) goto LAB_18002111c;
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
    FUN_180020f20(&local_128);
  }
LAB_18002111c:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_168);
  return;
}




undefined8 * FUN_180021140(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (param_3 != '\0') {
    FUN_180021190(param_1,0xffffffff);
  }
  return param_1;
}




undefined4 FUN_180021190(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))(*param_1,param_2);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return *(undefined4 *)(param_1 + 1);
}




undefined8 FUN_1800211e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < *(int *)(param_1 + 1)) {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 1) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




void FUN_180021240(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
  return;
}




void FUN_180021270(void *param_1,void *param_2,size_t param_3)

{
  memcmp(param_1,param_2,param_3);
  return;
}




undefined8 FUN_1800212a0(void)

{
  return 0;
}




void FUN_1800212c0(undefined8 param_1,char *param_2)

{
  FUN_180021370(param_1,param_2);
  return;
}




undefined8 FUN_1800212f0(void)

{
  return 1;
}




void GetModule(undefined8 param_1)

{
  DAT_18004fdf8 = param_1;
                    /* 0x21320  14  GetModule */
  FUN_180021530();
  return;
}




undefined8 FUN_180021340(void)

{
  return DAT_18004fdf8;
}




char * FUN_180021350(void)

{
  return "BitlockerHelp";
}




char * FUN_180021360(void)

{
  return "CBitlockerHelpModule";
}




undefined8 FUN_180021370(undefined8 param_1,char *param_2)

{
  uint local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  if (param_2 == (char *)0x0) {
    param_1 = 0;
  }
  else {
    local_58 = (uint)(*param_2 == '*');
    if (param_2[(int)local_58] != '1') {
      local_48 = (char *)FUN_180022b40();
      local_50 = param_2 + (int)local_58;
      for (; ((*local_50 == *local_48 && (*local_50 != '\0')) && (*local_48 != '\0'));
          local_48 = local_48 + 1) {
        local_50 = local_50 + 1;
      }
      if (*local_50 != *local_48) {
        local_38 = (char *)FUN_180022b60();
        local_40 = param_2 + (int)local_58;
        for (; ((*local_40 == *local_38 && (*local_40 != '\0')) && (*local_38 != '\0'));
            local_38 = local_38 + 1) {
          local_40 = local_40 + 1;
        }
        if (*local_40 != *local_38) {
          param_1 = 0;
        }
      }
    }
  }
  return param_1;
}




undefined * FUN_180021530(void)

{
  char *pcVar1;
  IObject *pIVar2;
  undefined8 uVar3;
  undefined8 local_20 [4];
  
  if (DAT_18004fde8 == (undefined *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_1800521a0) && (_Init_thread_header(&DAT_1800521a0), DAT_1800521a0 == -1)) {
      DAT_1800523f0 = (IObject *)FUN_180020fa0("Thread");
      _Init_thread_footer(&DAT_1800521a0);
    }
    if (DAT_1800523f0 == (IObject *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_1800521a4) && (_Init_thread_header(&DAT_1800521a4), DAT_1800521a4 == -1)
         ) {
        FUN_1800218d0((_AfxBindHost *)&DAT_1800522d0);
        atexit(FUN_18003b050);
        _Init_thread_footer(&DAT_1800521a4);
      }
      DAT_18004fde8 = &DAT_1800522d0;
      FUN_1800218c0();
    }
    else {
      pcVar1 = (char *)FUN_180022b80();
      pIVar2 = IObject::GetInterfaceEx(DAT_1800523f0,pcVar1);
      if (pIVar2 != (IObject *)0x0) {
        uVar3 = (**(code **)(*(longlong *)pIVar2 + 0x28))(pIVar2);
        FUN_180021140(local_20,uVar3,'\x01');
        if (DAT_18004fde8 == (undefined *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
               DAT_180052098) && (_Init_thread_header(&DAT_180052098), DAT_180052098 == -1)) {
            FUN_1800218d0((_AfxBindHost *)&DAT_1800522b0);
            atexit(FUN_18003b030);
            _Init_thread_footer(&DAT_180052098);
          }
          DAT_18004fde8 = &DAT_1800522b0;
          FUN_1800211e0(local_20);
          FUN_1800218c0();
        }
        FUN_180021240(local_20);
      }
    }
  }
  return DAT_18004fde8;
}




void FUN_180021730(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  _String_val<struct_std::_Simple_types<char>_> *p_Var3;
  _String_val<struct_std::_Simple_types<char>_> *p_Var4;
  
  p_Var3 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_1);
  p_Var4 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180014f00(param_2);
  uVar1 = *(ulonglong *)(p_Var4 + 0x10);
  p_Var4 = Myptr(p_Var4);
  uVar2 = *(ulonglong *)(p_Var3 + 0x10);
  p_Var3 = Myptr(p_Var3);
  FUN_180022ba0(p_Var3,uVar2,p_Var4,uVar1);
  return;
}




void FUN_1800217d0(longlong param_1)

{
  FUN_1800217f0(param_1);
  return;
}




void FUN_1800217f0(longlong param_1)

{
  FUN_180021810(param_1 + 0x10);
  return;
}




void FUN_180021810(undefined8 param_1)

{
  FUN_180021bf0(param_1);
  return;
}




void FUN_180021830(longlong param_1)

{
  FUN_180021c80(param_1);
  return;
}




int FUN_180021850(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_180021ca0((longlong)param_1);
  if (iVar1 == 0) {
    free(param_1);
  }
  return iVar1;
}




undefined8 FUN_180021890(void)

{
  return 0;
}




void FUN_1800218a0(void)

{
  FUN_180021360();
  return;
}




undefined8 FUN_1800218c0(void)

{
  return 0;
}




_AfxBindHost * FUN_1800218d0(_AfxBindHost *param_1)

{
  FUN_180021ce0(param_1);
  *(undefined ***)param_1 =
       CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CBitlockerHelpModule>_>_>::
       vftable;
  return param_1;
}




void FUN_180021900(longlong param_1)

{
  FUN_180021ec0(param_1 + 0x10);
  return;
}




void FUN_180021920(longlong param_1,char *param_2,undefined4 *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 0x10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,param_2);
  FUN_180021de0(local_60,&local_68,local_38);
  FUN_1800138f0(local_38);
  local_58 = param_1 + 0x10;
  plVar2 = FUN_180021f60(local_58,&local_40);
  bVar1 = FUN_180014d10(&local_68,plVar2);
  if (bVar1) {
    *param_3 = 0;
  }
  else {
    lVar3 = FUN_180021d20(&local_68);
    lVar3 = FUN_1800117a0(lVar3 + 0x20);
    *param_3 = (int)lVar3;
    local_50 = FUN_180021d20(&local_68);
    local_50 = local_50 + 0x20;
    FUN_180011770(local_50,0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_180021a30(longlong param_1,char *param_2,IObject *param_3)

{
  bool bVar1;
  longlong *plVar2;
  <lambda_1> *p<Var3;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_f8;
  local_c8 = param_1 + 0x10;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_58,param_2);
  FUN_180021de0(local_c8,&local_d8,local_58);
  FUN_1800138f0(local_58);
  local_c0 = param_1 + 0x10;
  plVar2 = FUN_180021f60(local_c0,&local_80);
  bVar1 = FUN_180014d10(&local_d8,plVar2);
  if (bVar1) {
    local_b8 = FUN_180011b90(local_70);
    local_a8 = param_1 + 0x10;
    local_b0 = local_b8;
    local_a0 = local_b8;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,param_2);
    p<Var3 = (<lambda_1> *)FUN_180022040(local_a8,local_38);
    FUN_180022230(p<Var3,local_a0);
    FUN_1800138f0(local_38);
    FUN_180022200(local_70);
    local_98 = param_1 + 0x10;
    plVar2 = FUN_180021fd0(local_98,&local_78);
    local_d8 = *plVar2;
  }
  local_90 = FUN_180021d20(&local_d8);
  local_90 = local_90 + 0x20;
  FUN_180022c20(&local_d0,param_3);
  FUN_180022080(local_90,&local_d0);
  FUN_180021c20(&local_d0);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_f8);
  return;
}




void FUN_180021bf0(undefined8 param_1)

{
  FUN_180021d70(param_1);
  FUN_180021d40(param_1);
  return;
}




void FUN_180021c20(longlong *param_1)

{
  FUN_180021c40(param_1);
  return;
}




void FUN_180021c40(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
  }
  return;
}




undefined4 FUN_180021c80(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_180021ca0(longlong param_1)

{
  undefined4 local_18;
  
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  UNLOCK();
  if (*(int *)(param_1 + 8) < 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 8);
  }
  return local_18;
}




_AfxBindHost * FUN_180021ce0(_AfxBindHost *param_1)

{
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 = CMomEventObject<class_CModuleImpl<class_CBitlockerHelpModule>_>::vftable
  ;
  FUN_1800225f0((undefined8 *)(param_1 + 0x10));
  return param_1;
}




void FUN_180021d20(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180022330(param_1);
  FUN_1800222d0(uVar1);
  return;
}




void FUN_180021d40(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_180022390(param_1,(void *)*puVar1);
  return;
}




void FUN_180021d70(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar2 = FUN_180021f60(param_1,&local_28);
  lVar1 = *plVar2;
  plVar2 = FUN_180021fd0(param_1,&local_20);
  FUN_1800224f0(param_1,local_18,*plVar2,lVar1);
  return;
}




undefined8 * FUN_180021de0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_180022490(param_1,&local_48,param_3);
  plVar3 = FUN_180021f60(param_1,&local_18);
  bVar1 = FUN_180014d10(&local_48,plVar3);
  if (!bVar1) {
    local_30 = FUN_180014f00(param_1);
    local_38 = FUN_1800223c0(param_1,local_48);
    cVar2 = FUN_180022620(local_30,param_3,local_38);
    if (cVar2 == '\0') {
      local_40 = local_28;
      goto LAB_180021e98;
    }
  }
  local_40 = FUN_180021f60(param_1,local_10);
LAB_180021e98:
  *param_2 = *local_40;
  return param_2;
}




void FUN_180021ec0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_180014dd0(param_1);
  lVar1 = *plVar2;
  puVar3 = (undefined8 *)FUN_180018740(plVar2);
  FUN_1800223f0(param_1,(undefined8 *)*puVar3);
  plVar4 = (longlong *)FUN_180018740(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_180014d90(plVar2);
  *plVar4 = lVar1;
  plVar4 = (longlong *)FUN_180018720(plVar2);
  *plVar4 = lVar1;
  plVar2[1] = 0;
  return;
}




undefined8 * FUN_180021f60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_1800016d0(puVar1);
  FUN_180022350(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_180021fd0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180014dd0(param_1);
  FUN_1800016d0(puVar1);
  puVar1 = (undefined8 *)FUN_180014d90(puVar1);
  FUN_180022350(param_2,*puVar1);
  return param_2;
}




longlong FUN_180022040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_18 [3];
  
  uVar1 = FUN_1800016d0(param_2);
  plVar2 = FUN_180022c50(param_1,local_18,uVar1);
  lVar3 = FUN_180021d20(plVar2);
  return lVar3 + 0x20;
}




void FUN_180022080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_2);
  FUN_1800220b0(param_1,uVar1);
  return;
}




longlong FUN_1800220b0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180015150(param_1);
  if (bVar1) {
    uVar2 = FUN_1800016d0(param_2);
    lVar3 = FUN_180022130(param_1,uVar2);
  }
  else {
    uVar2 = FUN_1800016d0(param_2);
    plVar4 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = FUN_180022ce0(param_1,*plVar4,uVar2);
  }
  return lVar3;
}




undefined8 FUN_180022130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_1800016d0(param_2);
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar3 = FUN_1800016d0(*puVar2);
  uVar4 = FUN_180014f00(param_1);
  FUN_180022c90(uVar4,uVar3,uVar1);
  FUN_180014ec0(param_1);
  FUN_180014ec0(param_1);
  FUN_180015020();
  puVar2 = (undefined8 *)FUN_180014ec0(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180014ec0(param_1);
  *plVar5 = *plVar5 + 8;
  return uVar1;
}




void FUN_180022200(undefined8 param_1)

{
  FUN_180022650(param_1);
  return;
}




<lambda_1> * FUN_180022230(<lambda_1> *param_1,undefined8 param_2)

{
  <lambda_1> *p<Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  p<Var1 = (<lambda_1> *)FUN_1800016d0(param_2);
  if (param_1 != p<Var1) {
    FUN_180022650(param_1);
    uVar2 = FUN_180014f00(param_2);
    FUN_180015d30(param_1,uVar2);
    puVar4 = local_28;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_28[1] = local_28[0];
    local_20 = FUN_1800016d0(param_2);
    FUN_180022730(param_1,local_20);
  }
  return param_1;
}




void FUN_1800222d0(undefined8 param_1)

{
  FUN_1800016d0(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl _AfxBindHost::_AfxBindHost(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

_AfxBindHost * __thiscall _AfxBindHost::_AfxBindHost(_AfxBindHost *this)

{
  FUN_180022790((IObject *)this);
  *(undefined ***)this = CMomObject<class_CModuleImpl<class_CBitlockerHelpModule>_>::vftable;
  *(undefined4 *)(this + 8) = 0;
  return this;
}




void FUN_180022330(longlong *param_1)

{
  FUN_180022850(param_1);
  return;
}




undefined8 * FUN_180022350(undefined8 *param_1,undefined8 param_2)

{
  FUN_180014fc0(param_1,param_2);
  return param_1;
}




void FUN_180022390(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014dd0(param_1);
  FUN_180022f40(uVar1,param_2);
  return;
}




void FUN_1800223c0(undefined8 param_1,longlong param_2)

{
  FUN_18001e7c0(param_1,param_2 + 0x20);
  return;
}




void FUN_1800223f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined8 *local_18;
  
  local_18 = param_2;
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    FUN_1800223f0(param_1,(undefined8 *)local_18[2]);
    puVar1 = (undefined8 *)*local_18;
    uVar2 = FUN_180014dd0(param_1);
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_1800016d0(local_18 + 4);
    destroy<>(uVar2,pbVar3);
    FUN_180022f40(uVar2,local_18);
    local_18 = puVar1;
  }
  return;
}




undefined8 * FUN_180022490(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180014dd0(param_1);
  FUN_1800016d0(uVar1);
  puVar2 = FUN_180022ff0(param_1,param_3);
  FUN_180022350(param_2,puVar2);
  return param_2;
}




undefined8 * FUN_1800224f0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_res18;
  longlong local_res20;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_res18 = (undefined8 *)param_3;
  local_res20 = param_4;
  plVar2 = FUN_180021fd0(param_1,&local_28);
  bVar1 = FUN_180014d10((longlong *)&local_res18,plVar2);
  if (bVar1) {
    plVar2 = FUN_180021f60(param_1,&local_20);
    bVar1 = FUN_180014d10(&local_res20,plVar2);
    if (bVar1) {
      FUN_180021ec0(param_1);
      FUN_180021fd0(param_1,param_2);
      return param_2;
    }
  }
  while (bVar1 = FUN_1800114c0((longlong *)&local_res18,&local_res20), bVar1) {
    plVar2 = FUN_180017f60((longlong *)&local_res18,&local_18);
    FUN_180022870(param_1,local_10,(longlong *)*plVar2);
  }
  uVar3 = FUN_180014dd0(param_1);
  FUN_1800016d0(uVar3);
  FUN_180022350(param_2,local_res18);
  return local_res18;
}




undefined8 * FUN_1800225f0(undefined8 *param_1)

{
  undefined1 local_18 [24];
  
  FUN_180022930(param_1,local_18);
  return param_1;
}




void FUN_180022620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180023090(param_2,param_3);
  return;
}




void FUN_180022650(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)FUN_180014ee0(param_1);
    FUN_180022960(param_1,*plVar1,lVar3);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017b20(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017be0(uVar2,(void *)*puVar4,lVar3);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar4 = 0;
    puVar4 = (undefined8 *)FUN_180017b00(param_1);
    *puVar4 = 0;
  }
  return;
}




void FUN_180022730(<lambda_1> *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [8];
  __uint64 *local_10;
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18[1] = local_18[0];
  local_10 = (__uint64 *)FUN_1800016d0(param_2);
  FUN_180015940(param_1,local_10);
  return;
}




IObject * FUN_180022790(IObject *param_1)

{
  FUN_1800227c0(param_1);
  *(undefined ***)param_1 = CModuleImpl<class_CBitlockerHelpModule>::vftable;
  return param_1;
}




IObject * FUN_1800227c0(IObject *param_1)

{
  FUN_1800227f0(param_1);
  *(undefined ***)param_1 = CBitlockerHelpModule::vftable;
  return param_1;
}




IObject * FUN_1800227f0(IObject *param_1)

{
  FUN_180022820(param_1);
  *(undefined ***)param_1 = IBitlockerHelpModule::vftable;
  return param_1;
}




IObject * FUN_180022820(IObject *param_1)

{
  IObject::IObject(param_1);
  *(undefined ***)param_1 = IModule::vftable;
  return param_1;
}




longlong FUN_180022850(longlong *param_1)

{
  return *param_1 + 0x20;
}




undefined8 * FUN_180022870(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)FUN_180014dd0(param_1);
  local_20 = param_3;
  FUN_180018150((longlong *)&local_20);
  plVar2 = FUN_180018170(plVar1,param_3);
  uVar3 = FUN_180014dd0(param_1);
  pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1800016d0(plVar2 + 4);
  destroy<>(uVar3,pbVar4);
  FUN_180022f40(uVar3,plVar2);
  local_18 = FUN_1800016d0(plVar1);
  local_10 = local_20;
  FUN_180022350(param_2,local_20);
  return param_2;
}




undefined8 * FUN_180022930(undefined8 *param_1,undefined8 param_2)

{
  FUN_1800229a0(param_1,param_2);
  return param_1;
}




void FUN_180022960(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_1800230d0(param_2,param_3,uVar1);
  return;
}




undefined8 * FUN_1800229a0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_18;
  byte local_17;
  undefined8 *local_10;
  
  local_10 = param_1;
  FUN_18001bdb0(param_1,(ulonglong)local_17,param_2,&local_18);
  FUN_1800229f0(param_1);
  return param_1;
}




void FUN_1800229f0(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = FUN_180022a20(param_1);
  puVar2 = (undefined8 *)FUN_180014dd0(param_1);
  *puVar2 = p_Var1;
  return;
}




_Container_proxy * FUN_180022a20(undefined8 param_1)

{
  undefined8 uVar1;
  _Container_proxy *local_28;
  allocator<struct_std::_Container_proxy> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (allocator<struct_std::_Container_proxy> *)FUN_180014dd0(param_1);
  local_28 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  uVar1 = FUN_1800016d0(local_28);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800016d0(local_28 + 8);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_1800016d0(local_28 + 0x10);
  construct<>(local_20,uVar1,&local_28);
  local_28[0x18] = (_Container_proxy)0x1;
  local_28[0x19] = (_Container_proxy)0x1;
  return local_28;
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




void FUN_180022b10(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x58);
  return;
}




void FUN_180022b40(void)

{
  FUN_180023520();
  return;
}




void FUN_180022b60(void)

{
  FUN_180023590();
  return;
}




void FUN_180022b80(void)

{
  FUN_180023600();
  return;
}




int FUN_180022ba0(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  __uint64 *p_Var2;
  ulonglong local_res10;
  void *local_res18;
  ulonglong local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  p_Var2 = std::_Min_value<unsigned___int64>(&local_res10,&local_res20);
  iVar1 = FUN_180021270(param_1,local_res18,*p_Var2);
  if (iVar1 == 0) {
    if (local_res10 < local_res20) {
      iVar1 = -1;
    }
    else if (local_res20 < local_res10) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}




longlong * FUN_180022c20(longlong *param_1,IObject *param_2)

{
  CTempBuffer<>(param_1,param_2);
  return param_1;
}




undefined8 * FUN_180022c50(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_3);
  FUN_180023670(param_1,param_2,uVar1);
  return param_2;
}




void FUN_180022c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_1800010b0(8,param_2);
  puVar2 = (undefined8 *)FUN_1800016d0(param_3);
  FUN_180023420(plVar1,puVar2);
  return;
}




longlong FUN_180022ce0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  CLogWriter *pCVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_180014f00(param_1);
  _Var4 = FUN_1800117a0(param_1);
  _Var5 = FUN_180017b60(param_1);
  if (_Var4 == _Var5) {
    FUN_1800153f0();
  }
  uVar6 = FUN_18001c2b0(param_1,_Var4 + 1);
  pCVar7 = (CLogWriter *)allocate(uVar3,uVar6);
  uVar8 = FUN_1800016d0(param_3);
  uVar9 = FUN_1800016d0(pCVar7 + lVar2 * 8);
  FUN_180022c90(uVar3,uVar9,uVar8);
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_180014ec0(param_1);
    uVar3 = *puVar10;
    puVar10 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180023380(param_1,*puVar10,uVar3,pCVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_1800233e0(param_1,*puVar10,param_2,pCVar7);
    puVar10 = (undefined8 *)FUN_180014ec0(param_1);
    FUN_1800233e0(param_1,param_2,*puVar10,pCVar7 + lVar2 * 8 + 8);
  }
  FUN_180023260(param_1,(longlong)pCVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  return *plVar1 + lVar2 * 8;
}




void FUN_180022f40(undefined8 param_1,void *param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1800016d0(param_2);
  FUN_1800016c0();
  FUN_1800016d0((longlong)param_2 + 8);
  FUN_1800016c0();
  FUN_1800016d0((longlong)param_2 + 0x10);
  FUN_1800016c0();
  FUN_180022b10(local_18,param_2,1);
  return;
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

void destroy<>(undefined8 param_1,
              basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  FUN_180023170(param_2,0);
  return;
}




undefined8 * FUN_180022ff0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_180014dd0(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    uVar3 = FUN_1800223c0(param_1,(longlong)local_18);
    cVar1 = FUN_180023220(param_1,uVar3,param_2);
    if (cVar1 == '\0') {
      local_10 = local_18;
      local_18 = (undefined8 *)*local_18;
    }
    else {
      local_18 = (undefined8 *)local_18[2];
    }
  }
  return local_10;
}




bool FUN_180023090(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_180021730(param_1,param_2);
  return iVar1 < 0;
}




void FUN_1800230d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1800237f0(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x58;
  if (0x2e8ba2e8ba2e8ba < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180023170(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             uint param_2)

{
  FUN_1800231b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800231b0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  FUN_180022200(param_1 + 0x20);
  FUN_1800138f0(param_1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl ATL::CTempBuffer<char,128,class ATL::CCRTAllocator>::CTempBuffer<char,128,class
   ATL::CCRTAllocator>(unsigned __int64) __ptr64
    public: __cdecl ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::CTempBuffer<unsigned char,128,class ATL::CCRTAllocator>(unsigned __int64)
   __ptr64
    public: __cdecl ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::CTempBuffer<wchar_t,128,class ATL::CCRTAllocator>(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

longlong * CTempBuffer<>(longlong *param_1,IObject *param_2)

{
  *param_1 = 0;
  FUN_180023450(param_1,param_2);
  return param_1;
}




void FUN_180023220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_180022620(uVar1,param_2,param_3);
  return;
}




void FUN_180023260(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_180012c70(param_1);
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  if (*plVar1 != 0) {
    plVar1 = (longlong *)FUN_180014ec0(param_1);
    lVar3 = *plVar1;
    plVar1 = (longlong *)FUN_180014ee0(param_1);
    FUN_180022960(param_1,*plVar1,lVar3);
    uVar2 = FUN_180014f00(param_1);
    lVar3 = FUN_180017b20(param_1);
    puVar4 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_180017be0(uVar2,(void *)*puVar4,lVar3);
  }
  plVar1 = (longlong *)FUN_180014ee0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_180014ec0(param_1);
  *plVar1 = param_2 + param_3 * 8;
  plVar1 = (longlong *)FUN_180017b00(param_1);
  *plVar1 = param_2 + param_4 * 8;
  return;
}




void FUN_180023380(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1800233e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800233e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,CLogWriter *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180014f00(param_1);
  FUN_180023850(param_2,param_3,param_4,uVar1);
  return;
}




longlong * FUN_180023420(longlong *param_1,undefined8 *param_2)

{
  CTempBuffer<>(param_1,(IObject *)*param_2);
  return param_1;
}




longlong FUN_180023450(longlong *param_1,IObject *param_2)

{
  char *pcVar1;
  IObject *pIVar2;
  
  if ((IObject *)*param_1 != param_2) {
    if (*param_1 != 0) {
      (**(code **)(*(longlong *)*param_1 + 8))(*param_1);
      *param_1 = 0;
    }
    if (param_2 != (IObject *)0x0) {
      pcVar1 = FUN_180020ec0();
      pIVar2 = IObject::GetInterfaceEx(param_2,pcVar1);
      *param_1 = (longlong)pIVar2;
      if (*param_1 == 0) {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
        (**(code **)(*(longlong *)param_2 + 8))(param_2);
      }
      else {
        (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
      }
    }
  }
  return *param_1;
}




undefined * FUN_180023520(void)

{
  uint local_28 [2];
  undefined *local_20;
  char *local_18;
  
  if (DAT_18004fdd8 == (undefined *)0x0) {
    DAT_18004fdd8 = &DAT_1800520a0;
    local_28[0] = 0x100;
    local_20 = &DAT_1800520a0;
    local_18 = (char *)FUN_180020d20(0x18004f5c8);
    FUN_180020d50(local_18,local_20,local_28);
  }
  return DAT_18004fdd8;
}




undefined * FUN_180023590(void)

{
  uint local_28 [2];
  undefined *local_20;
  char *local_18;
  
  if (DAT_18004fde0 == (undefined *)0x0) {
    DAT_18004fde0 = &DAT_1800521b0;
    local_28[0] = 0x100;
    local_20 = &DAT_1800521b0;
    local_18 = (char *)FUN_180020d20(0x18004f6f8);
    FUN_180020d50(local_18,local_20,local_28);
  }
  return DAT_18004fde0;
}




undefined * FUN_180023600(void)

{
  uint local_28 [2];
  undefined *local_20;
  char *local_18;
  
  if (DAT_18004fdd0 == (undefined *)0x0) {
    DAT_18004fdd0 = &DAT_1800522f0;
    local_28[0] = 0x100;
    local_20 = &DAT_1800522f0;
    local_18 = (char *)FUN_180020d20(0x18004f628);
    FUN_180020d50(local_18,local_20,local_28);
  }
  return DAT_18004fdd0;
}




undefined8 * FUN_180023670(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66 [6];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_180022490(param_1,&local_60,param_3);
  plVar3 = FUN_180021f60(param_1,&local_20);
  bVar1 = FUN_180014d10((longlong *)&local_60,plVar3);
  if (!bVar1) {
    local_50 = FUN_180014f00(param_1);
    local_58 = FUN_1800223c0(param_1,(longlong)local_60);
    cVar2 = FUN_180022620(local_50,param_3,local_58);
    if (cVar2 == '\0') {
      local_67 = 0;
      FUN_18001ed40(param_2,&local_60,&local_67);
      return param_2;
    }
  }
  local_68 = 1;
  local_38 = FUN_1800239c0(local_66);
  uVar4 = FUN_1800016d0(param_3);
  local_30 = FUN_180023990(&local_18,uVar4);
  local_48 = local_60;
  local_40 = local_60;
  local_28 = local_60;
  puVar5 = FUN_1800239e0(param_1,local_10,local_60,&DAT_180042c18,local_30,local_38);
  FUN_18001ed40(param_2,puVar5,&local_68);
  return param_2;
}




void FUN_1800237f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    plVar1 = (longlong *)FUN_1800016d0(local_res8);
    destroy<>(param_3,plVar1);
  }
  return;
}




CLogWriter *
FUN_180023850(undefined8 param_1,undefined8 param_2,CLogWriter *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CLogWriter *local_res18;
  undefined8 local_res20;
  CLogWriter local_52;
  CLogWriter local_51;
  longlong local_50;
  CLogWriter *local_48;
  longlong local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  CLogWriter *local_20;
  longlong local_18;
  longlong local_10;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = FUN_1800016d0(param_1);
  local_40 = FUN_1800016d0(param_2);
  local_38 = (CLogWriter *)FUN_18001dbf0(&local_50,&local_40);
  local_30 = local_res18;
  local_48 = CLogWriter::operator=(local_res18,local_38);
  local_28 = &local_52;
  FUN_18001eed0();
  CLogWriter::operator=(local_28,&local_51);
  local_20 = local_48;
  local_18 = local_40;
  local_10 = local_50;
  uVar1 = FUN_180023aa0(local_50,local_40,local_48,local_res20);
  FUN_18001dd80(&local_res18,uVar1);
  return local_res18;
}




undefined8 * FUN_180023990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_2);
  FUN_180023bb0(param_1,uVar1);
  return param_1;
}




undefined8 FUN_1800239c0(undefined8 param_1)

{
  FUN_1800016d0(param_1);
  return param_1;
}




undefined8 *
FUN_1800239e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _Container_proxy *p_Var4;
  
  uVar1 = FUN_1800016d0(param_6);
  uVar2 = FUN_1800016d0(param_5);
  uVar3 = FUN_1800016d0(param_4);
  p_Var4 = FUN_180023c20(param_1,uVar3,uVar2,uVar1);
  FUN_180023d00(param_1,param_2,param_3,p_Var4 + 0x20,p_Var4);
  return param_2;
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

void destroy<>(undefined8 param_1,longlong *param_2)

{
  FUN_180023b30(param_2,0);
  return;
}




undefined8 FUN_180023aa0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong local_28 [5];
  
  FUN_18001f100(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 8) {
    uVar1 = FUN_1800016d0(local_res8);
    FUN_180024d40((longlong)local_28,uVar1);
  }
  uVar1 = FUN_18001f0a0(local_28);
  FUN_180023b70(local_28);
  return uVar1;
}




longlong * FUN_180023b30(longlong *param_1,uint param_2)

{
  FUN_180021c20(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180023b70(longlong *param_1)

{
  FUN_1800230d0(*param_1,param_1[1],param_1[2]);
  return;
}




undefined8 * FUN_180023bb0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pbVar2 = local_28;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
  }
  local_20 = FUN_1800016d0(param_2);
  local_28[1] = local_28[0];
  FUN_180024f40(param_1,(ulonglong)local_28[0],local_20);
  return param_1;
}




_Container_proxy *
FUN_180023c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  p_Var1 = FUN_180024dd0(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_1800016d0(param_4);
  uVar3 = FUN_1800016d0(param_3);
  uVar4 = FUN_1800016d0(param_2);
  uVar5 = FUN_1800016d0(p_Var1 + 0x20);
  uVar6 = FUN_180014dd0(param_1);
  FUN_180024fa0(uVar6,uVar5,uVar4,uVar3,uVar2);
  return p_Var1;
}




/* WARNING: Removing unreachable block (ram,0x000180023dc9) */
/* WARNING: Removing unreachable block (ram,0x000180023f02) */
/* WARNING: Removing unreachable block (ram,0x000180024070) */
/* WARNING: Removing unreachable block (ram,0x00018002410d) */
/* WARNING: Removing unreachable block (ram,0x0001800241cc) */
/* WARNING: Removing unreachable block (ram,0x000180024248) */
/* WARNING: Removing unreachable block (ram,0x0001800241dd) */
/* WARNING: Removing unreachable block (ram,0x0001800242b9) */
/* WARNING: Removing unreachable block (ram,0x000180024356) */
/* WARNING: Removing unreachable block (ram,0x0001800243c8) */
/* WARNING: Removing unreachable block (ram,0x000180024462) */
/* WARNING: Removing unreachable block (ram,0x0001800244e4) */
/* WARNING: Removing unreachable block (ram,0x000180024476) */
/* WARNING: Removing unreachable block (ram,0x00018002454f) */
/* WARNING: Removing unreachable block (ram,0x000180023f38) */
/* WARNING: Removing unreachable block (ram,0x000180023fea) */
/* WARNING: Removing unreachable block (ram,0x00018002406b) */
/* WARNING: Removing unreachable block (ram,0x000180023dff) */
/* WARNING: Removing unreachable block (ram,0x000180023e8c) */
/* WARNING: Removing unreachable block (ram,0x000180023ef8) */
/* WARNING: Removing unreachable block (ram,0x000180024554) */

undefined8 *
FUN_180023d00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             void *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 *local_390 [2];
  undefined1 local_37f;
  char local_37e;
  undefined1 local_37d;
  char local_37c;
  char local_37b;
  char local_37a;
  char local_379;
  undefined1 local_378;
  char local_377;
  longlong *local_370;
  undefined8 local_368;
  undefined8 *local_360;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [4];
  
  local_58 = 0xfffffffffffffffe;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180024db0(local_390);
  local_370 = (longlong *)FUN_180014dd0(param_1);
  lVar1 = FUN_180024f00(param_1);
  if (lVar1 == 0) {
    local_368 = FUN_1800016d0(local_res20);
    local_360 = (undefined8 *)*local_370;
    FUN_180025070(param_1,param_2,'\x01',local_360,local_368,param_5);
    return param_2;
  }
  plVar2 = FUN_180021fd0(param_1,&local_38);
  local_37f = FUN_180014d10((longlong *)&local_res18,plVar2);
  if ((bool)local_37f) {
    local_1b8 = FUN_180014f00(param_1);
    local_1d8 = FUN_1800223c0(param_1,(longlong)local_res18);
    local_1c8 = local_1d8;
    local_1d0 = FUN_18001e7c0(param_1,local_res20);
    local_1c0 = local_1d0;
    local_37e = FUN_180022620(local_1b8,local_1d0,local_1c8);
    if (local_37e != '\0') {
      local_1b0 = FUN_1800016d0(local_res20);
      local_1a8 = local_res18;
      FUN_180025070(param_1,param_2,'\x01',local_res18,local_1b0,param_5);
      return param_2;
    }
    local_37e = 0;
  }
  else {
    plVar2 = FUN_180021f60(param_1,&local_30);
    local_37d = FUN_180014d10((longlong *)&local_res18,plVar2);
    if ((bool)local_37d) {
      local_178 = FUN_180014f00(param_1);
      local_1a0 = FUN_18001e7c0(param_1,local_res20);
      local_188 = local_1a0;
      local_198 = (longlong *)FUN_180018720(local_370);
      local_190 = FUN_1800223c0(param_1,*local_198);
      local_180 = local_190;
      local_37c = FUN_180022620(local_178,local_190,local_188);
      if (local_37c != '\0') {
        local_168 = FUN_1800016d0(local_res20);
        local_170 = (undefined8 *)FUN_180018720(local_370);
        local_160 = (undefined8 *)*local_170;
        FUN_180025070(param_1,param_2,'\0',local_160,local_168,param_5);
        return param_2;
      }
      local_37c = 0;
    }
    else {
      local_138 = FUN_180014f00(param_1);
      local_158 = FUN_1800223c0(param_1,(longlong)local_res18);
      local_148 = local_158;
      local_150 = FUN_18001e7c0(param_1,local_res20);
      local_140 = local_150;
      local_37b = FUN_180022620(local_138,local_150,local_148);
      if (local_37b != '\0') {
        local_390[0] = local_res18;
        local_108 = FUN_180014f00(param_1);
        local_130 = FUN_18001e7c0(param_1,local_res20);
        local_118 = local_130;
        local_128 = FUN_18001e740((longlong *)local_390);
        local_120 = FUN_1800223c0(param_1,*local_128);
        local_110 = local_120;
        local_37a = FUN_180022620(local_108,local_120,local_118);
        if (local_37a != '\0') {
          if (*(char *)(local_390[0][2] + 0x19) != '\0') {
            local_100 = FUN_1800016d0(local_res20);
            local_f8 = local_390[0];
            FUN_180025070(param_1,param_2,'\0',local_390[0],local_100,param_5);
            return param_2;
          }
          local_f0 = FUN_1800016d0(local_res20);
          local_e8 = local_res18;
          FUN_180025070(param_1,param_2,'\x01',local_res18,local_f0,param_5);
          return param_2;
        }
      }
      local_c0 = FUN_180014f00(param_1);
      local_e0 = FUN_18001e7c0(param_1,local_res20);
      local_d0 = local_e0;
      local_d8 = FUN_1800223c0(param_1,(longlong)local_res18);
      local_c8 = local_d8;
      local_379 = FUN_180022620(local_c0,local_d8,local_d0);
      if (local_379 != '\0') {
        local_390[0] = local_res18;
        local_b8 = FUN_180018150((longlong *)local_390);
        local_a8 = local_b8;
        local_b0 = FUN_180021f60(param_1,&local_28);
        local_378 = FUN_180014d10(local_a8,local_b0);
        if (!(bool)local_378) {
          local_80 = FUN_180014f00(param_1);
          local_a0 = FUN_1800223c0(param_1,(longlong)local_390[0]);
          local_90 = local_a0;
          local_98 = FUN_18001e7c0(param_1,local_res20);
          local_88 = local_98;
          local_377 = FUN_180022620(local_80,local_98,local_90);
          if (local_377 == '\0') goto LAB_180024ce1;
        }
        if (*(char *)(local_res18[2] + 0x19) != '\0') {
          local_78 = FUN_1800016d0(local_res20);
          local_70 = local_res18;
          FUN_180025070(param_1,param_2,'\0',local_res18,local_78,param_5);
          return param_2;
        }
        local_68 = FUN_1800016d0(local_res20);
        local_60 = local_390[0];
        FUN_180025070(param_1,param_2,'\x01',local_390[0],local_68,param_5);
        return param_2;
      }
    }
  }
LAB_180024ce1:
  uVar3 = FUN_1800016d0(local_res20);
  puVar4 = FUN_1800253d0(param_1,local_20,'\0',uVar3,param_5);
  *param_2 = *puVar4;
  return param_2;
}




void FUN_180024d40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1800016d0(param_2);
  uVar2 = FUN_1800016d0(*(undefined8 *)(param_1 + 8));
  FUN_180022c90(*(undefined8 *)(param_1 + 0x10),uVar2,uVar1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
  return;
}




undefined8 * FUN_180024db0(undefined8 *param_1)

{
  FUN_180024f20(param_1);
  return param_1;
}




_Container_proxy * FUN_180024dd0(undefined8 param_1)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = (allocator<struct_std::_Container_proxy> *)FUN_180014dd0(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  uVar2 = FUN_180014dd0(param_1);
  uVar3 = FUN_1800016d0(p_Var1);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800016d0(p_Var1 + 8);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_1800016d0(p_Var1 + 0x10);
  construct<>(this,uVar3,uVar2);
  return p_Var1;
}




void FUN_180024eb0(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  uVar1 = FUN_180014dd0(param_1);
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1800016d0((longlong)param_2 + 0x20);
  destroy<>(uVar1,pbVar2);
  FUN_180022f40(uVar1,param_2);
  return;
}




undefined8 FUN_180024f00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180014dd0(param_1);
  return *(undefined8 *)(lVar1 + 8);
}




undefined8 * FUN_180024f20(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




undefined8 * FUN_180024f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 *local_10;
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_180025900(param_1);
  local_10 = param_1;
  uVar1 = FUN_1800016d0(param_3);
  FUN_180025910(local_10,uVar1);
  return param_1;
}




void FUN_180024fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  CLogWriter *pCVar1;
  byte *pbVar2;
  CLogWriter local_45 [5];
  CLogWriter *local_40;
  CLogWriter *local_38;
  CLogWriter *local_30;
  CLogWriter *local_28;
  longlong local_20;
  CLogWriter local_18 [24];
  
  local_20 = FUN_1800010b0(0x38,param_2);
  local_40 = local_45;
  pCVar1 = (CLogWriter *)FUN_1800016d0(param_5);
  local_30 = CLogWriter::operator=(local_40,pCVar1);
  local_38 = local_18;
  pCVar1 = (CLogWriter *)FUN_1800016d0(param_4);
  local_28 = FUN_180025870(local_38,pCVar1);
  pbVar2 = (byte *)FUN_1800016d0(param_3);
  FUN_180025940(local_20,(ulonglong)*pbVar2,local_28);
  return;
}




undefined8 *
FUN_180025070(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,void *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_180014dd0(param_1);
  lVar2 = FUN_1800258d0(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_180024eb0(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
  }
  FUN_1800016d0(param_5);
  plVar3 = (longlong *)FUN_180025990(param_1,param_6);
  plVar1[1] = plVar1[1] + 1;
  plVar3[1] = (longlong)param_4;
  local_28 = plVar3;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar4 = (undefined8 *)FUN_180018740(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_180014d90(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_180018720(plVar1);
    *puVar4 = plVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar3;
    plVar5 = (longlong *)FUN_180018720(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_180018720(plVar1);
      *puVar4 = plVar3;
    }
  }
  else {
    *param_4 = plVar3;
    plVar5 = (longlong *)FUN_180014d90(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_180014d90(plVar1);
      *puVar4 = plVar3;
    }
  }
  while (*(char *)(local_28[1] + 0x18) == '\0') {
    if (local_28[1] == **(longlong **)(local_28[1] + 8)) {
      lVar2 = *(longlong *)(*(longlong *)(local_28[1] + 8) + 0x10);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)(local_28[1] + 0x10)) {
          local_28 = (longlong *)local_28[1];
          FUN_1800189a0(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_1800188c0(plVar1,*(longlong **)(local_28[1] + 8));
      }
    }
    else {
      lVar2 = **(longlong **)(local_28[1] + 8);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)local_28[1]) {
          local_28 = (longlong *)local_28[1];
          FUN_1800188c0(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_1800189a0(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar5 = (longlong *)FUN_180018740(plVar1);
  *(undefined1 *)(*plVar5 + 0x18) = 1;
  FUN_1800016d0(plVar1);
  FUN_180022350(param_2,plVar3);
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x0001800255cf) */

undefined8 *
FUN_1800253d0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,void *param_5)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char local_108;
  undefined1 local_103;
  char local_102;
  undefined1 local_101;
  undefined1 local_100 [8];
  undefined8 *local_f8;
  undefined8 *local_f0;
  uint local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_38 = 0xfffffffffffffffe;
  local_d0 = (longlong *)FUN_180014dd0(param_1);
  local_f0 = (undefined8 *)*local_d0;
  local_f8 = (undefined8 *)local_f0[1];
  local_108 = '\x01';
  while (*(char *)((longlong)local_f8 + 0x19) == '\0') {
    local_f0 = local_f8;
    if (param_3 == '\0') {
      local_80 = FUN_180014f00(param_1);
      local_a0 = FUN_1800223c0(param_1,(longlong)local_f8);
      local_90 = local_a0;
      local_98 = FUN_18001e7c0(param_1,param_4);
      local_88 = local_98;
      local_108 = FUN_180022620(local_80,local_98,local_90);
    }
    else {
      local_a8 = FUN_180014f00(param_1);
      local_c8 = FUN_18001e7c0(param_1,param_4);
      local_b8 = local_c8;
      local_c0 = FUN_1800223c0(param_1,(longlong)local_f8);
      local_b0 = local_c0;
      cVar1 = FUN_180022620(local_a8,local_c0,local_b8);
      local_108 = cVar1 == '\0';
      local_e8 = (uint)(byte)local_108;
    }
    if (local_108 == '\0') {
      local_d8 = (undefined8 *)local_f8[2];
    }
    else {
      local_d8 = (undefined8 *)*local_f8;
    }
    local_f8 = local_d8;
  }
  FUN_1800016d0(local_d0);
  FUN_180022350(&local_e0,local_f0);
  if (local_108 != '\0') {
    plVar3 = FUN_180021fd0(param_1,&local_28);
    bVar2 = FUN_180014d10(&local_e0,plVar3);
    if (bVar2) {
      local_103 = 1;
      uVar4 = FUN_1800016d0(param_4);
      local_70 = FUN_180025070(param_1,&local_20,'\x01',local_f0,uVar4,param_5);
      FUN_18001ed40(param_2,local_70,&local_103);
      return param_2;
    }
    FUN_1800258b0(&local_e0);
  }
  local_48 = FUN_180014f00(param_1);
  local_68 = FUN_18001e7c0(param_1,param_4);
  local_58 = local_68;
  local_60 = FUN_1800223c0(param_1,local_e0);
  local_50 = local_60;
  local_102 = FUN_180022620(local_48,local_60,local_58);
  if (local_102 == '\0') {
    FUN_180024eb0(param_1,param_5);
    local_100[0] = 0;
    FUN_18001ed40(param_2,&local_e0,local_100);
  }
  else {
    local_101 = 1;
    uVar4 = FUN_1800016d0(param_4);
    local_40 = FUN_180025070(param_1,local_18,local_108,local_f0,uVar4,param_5);
    FUN_18001ed40(param_2,local_40,&local_101);
  }
  return param_2;
}




CLogWriter * FUN_180025870(CLogWriter *param_1,CLogWriter *param_2)

{
  CLogWriter::operator=(param_1,param_2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return param_1;
}




longlong * FUN_1800258b0(longlong *param_1)

{
  FUN_18001e740(param_1);
  return param_1;
}




void FUN_1800258d0(undefined8 param_1)

{
  FUN_180014dd0(param_1);
  FUN_1800258f0();
  return;
}




undefined8 FUN_1800258f0(void)

{
  return 0x2e8ba2e8ba2e8ba;
}




undefined8 FUN_180025900(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_180025910(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800016d0(param_2);
  *param_1 = uVar1;
  return param_1;
}




longlong FUN_180025940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800259b0(param_1,param_3);
  return param_1;
}




undefined8 FUN_180025990(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




longlong FUN_1800259b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1800016d0(param_2);
  uVar2 = FUN_180025a10(puVar1);
  FUN_180013920(param_1,uVar2);
  FUN_180011b90((undefined8 *)(param_1 + 0x20));
  return param_1;
}




void FUN_180025a10(undefined8 *param_1)

{
  FUN_1800016d0(*param_1);
  return;
}




LPCRITICAL_SECTION FUN_180025a30(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}




void FUN_180025a60(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




void FUN_180025a80(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}




void FUN_180025aa0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}




undefined4 * FUN_180025ac0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_180025a30((LPCRITICAL_SECTION)(param_1 + 4));
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}




void FUN_180025b20(longlong param_1)

{
  FUN_180025a60((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}




void FUN_180025b40(undefined4 *param_1)

{
  HANDLE pvVar1;
  DWORD local_18 [6];
  
  FUN_180025a80((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(longlong *)(param_1 + 2) == 0) {
    *param_1 = 0;
    local_18[0] = 0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180026120,param_1,0,local_18);
    *(HANDLE *)(param_1 + 2) = pvVar1;
  }
  FUN_180025aa0((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}




void FUN_180025bd0(undefined4 *param_1)

{
  FUN_180025a80((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(longlong *)(param_1 + 2) != 0) {
    *param_1 = 1;
    WaitForSingleObject(*(HANDLE *)(param_1 + 2),0xffffffff);
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  FUN_180025aa0((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}




undefined4 FUN_180025c50(undefined8 param_1,int *param_2,int *param_3)

{
  undefined4 local_18;
  
  local_18 = 0;
  if ((*param_2 == *param_3) && (*(longlong *)(param_2 + 2) == *(longlong *)(param_3 + 2))) {
    if (param_2[6] == param_3[6]) {
      if (param_2[6] == 0) {
        if ((param_2[8] != param_3[8]) || ((float)param_2[9] != (float)param_3[9])) {
          local_18 = 1;
        }
      }
      else {
        local_18 = 0;
      }
    }
    else {
      local_18 = 1;
    }
  }
  return local_18;
}




void FUN_180025d10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180025a80((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  FUN_180025aa0((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}




void FUN_180025d70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  int *local_158;
  longlong local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [48];
  undefined1 local_100 [56];
  int local_c8 [12];
  int local_98 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_18004e038 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_180011820(param_3,&local_160);
    while( true ) {
      plVar3 = FUN_1800124b0(param_3,&local_140);
      bVar1 = FID_conflict_operator__(&local_160,plVar3);
      if (!bVar1) break;
      FUN_180011820(param_2,&local_168);
      while( true ) {
        plVar3 = FUN_1800124b0(param_2,&local_138);
        bVar1 = FID_conflict_operator__(&local_168,plVar3);
        if (!bVar1) break;
        local_158 = (int *)FUN_180020bd0(&local_160);
        piVar4 = (int *)FUN_180020bd0(&local_168);
        if (*local_158 == *piVar4) {
          local_150 = FUN_180020bd0(&local_160);
          lVar5 = FUN_180020bd0(&local_168);
          if (*(longlong *)(local_150 + 8) == *(longlong *)(lVar5 + 8)) {
            puVar6 = (undefined1 *)FUN_180011700(&local_168);
            puVar8 = local_130;
            for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar6 = local_130;
            piVar4 = local_c8;
            for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
              *(undefined1 *)piVar4 = *puVar6;
              puVar6 = puVar6 + 1;
              piVar4 = (int *)((longlong)piVar4 + 1);
            }
            puVar6 = (undefined1 *)FUN_180011700(&local_160);
            puVar8 = local_100;
            for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar6 = local_100;
            piVar4 = local_98;
            for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
              *(undefined1 *)piVar4 = *puVar6;
              puVar6 = puVar6 + 1;
              piVar4 = (int *)((longlong)piVar4 + 1);
            }
            iVar2 = FUN_180025c50(param_1,local_98,local_c8);
            if (iVar2 != 0) {
              puVar7 = &local_68;
              for (lVar5 = 0x40; lVar5 != 0; lVar5 = lVar5 + -1) {
                *(undefined1 *)puVar7 = 0;
                puVar7 = (undefined4 *)((longlong)puVar7 + 1);
              }
              puVar7 = (undefined4 *)FUN_180020bd0(&local_168);
              local_5c = *puVar7;
              lVar5 = FUN_180020bd0(&local_168);
              local_58 = *(undefined8 *)(lVar5 + 8);
              lVar5 = FUN_180020bd0(&local_168);
              local_50 = *(undefined8 *)(lVar5 + 0x10);
              lVar5 = FUN_180020bd0(&local_168);
              local_68 = *(undefined4 *)(lVar5 + 0x18);
              lVar5 = FUN_180020bd0(&local_168);
              local_64 = *(undefined4 *)(lVar5 + 0x20);
              lVar5 = FUN_180020bd0(&local_168);
              local_60 = *(undefined4 *)(lVar5 + 0x24);
              puVar7 = (undefined4 *)FUN_180020bd0(&local_160);
              local_3c = *puVar7;
              lVar5 = FUN_180020bd0(&local_160);
              local_38 = *(undefined8 *)(lVar5 + 8);
              lVar5 = FUN_180020bd0(&local_160);
              local_30 = *(undefined8 *)(lVar5 + 0x10);
              lVar5 = FUN_180020bd0(&local_160);
              local_48 = *(undefined4 *)(lVar5 + 0x18);
              lVar5 = FUN_180020bd0(&local_160);
              local_44 = *(int *)(lVar5 + 0x20);
              lVar5 = FUN_180020bd0(&local_160);
              local_40 = *(undefined4 *)(lVar5 + 0x24);
              CLogWriter::Log("[BitlockerHelp]: Bitlock change: oldlock = 0x%x ,newlock=0x%x");
              CLogWriter::Log("[BitlockerHelp]: Bitlock change: oldStatus = 0x%x ,newStatus=0x%x");
              CLogWriter::Log(
                             "[BitlockerHelp]: Bitlock change: nDiskIndex = 0x%x ,nStartSector=0x%I64x"
                             );
              if ((local_44 == 2) || (local_44 == 3)) {
                CLogWriter::Log("[BitlockerHelp]: Bitlock change: percent=%.2f%%");
              }
              local_148 = *(code **)(param_1 + 0x38);
              (*local_148)(&local_68,1,*(undefined8 *)(param_1 + 0x40));
            }
          }
        }
        FUN_180020bb0(&local_168);
      }
      FUN_180020bb0(&local_160);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_188);
  return;
}




undefined4 FUN_180026120(int *param_1)

{
  bool bVar1;
  int iVar2;
  longlong local_48 [5];
  undefined8 local_20 [4];
  
  local_48[1] = 0xfffffffffffffffe;
  FUN_180002f10(local_48);
  FUN_180011b90(local_20);
  do {
    if (param_1 == (int *)0x0) {
LAB_180026202:
      FUN_180020bf0(local_20);
      FUN_180002f40(local_48);
      return 0;
    }
    FUN_180011b90(local_48 + 2);
    iVar2 = FUN_18000b170(local_48,local_48 + 2);
    if (iVar2 != 0) {
      bVar1 = FUN_180011e20(local_20);
      if (bVar1) {
        FUN_180026230((longlong)local_20,local_48 + 2);
      }
      else {
        FUN_180025d70((longlong)param_1,local_20,local_48 + 2);
        FUN_180026230((longlong)local_20,local_48 + 2);
      }
    }
    if (*param_1 != 0) {
      FUN_180020bf0(local_48 + 2);
      goto LAB_180026202;
    }
    Sleep(1000);
    FUN_180020bf0(local_48 + 2);
  } while( true );
}




/* WARNING: Removing unreachable block (ram,0x000180026255) */

longlong FUN_180026230(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1800016d0(param_2);
  if (param_1 != lVar2) {
    FUN_180014f00(param_2);
    FUN_1800153c0(param_1);
    puVar3 = (undefined8 *)FUN_180014ec0(param_2);
    uVar1 = *puVar3;
    puVar3 = (undefined8 *)FUN_180014ee0(param_2);
    FUN_1800262c0(param_1,*puVar3,uVar1);
  }
  return param_1;
}




void FUN_1800262c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_26 [6];
  longlong local_20;
  void *local_18;
  
  FUN_1800016c0();
  puVar2 = local_26;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_20 = FUN_1800016d0(param_3);
  local_18 = (void *)FUN_1800016d0(param_2);
  FUN_180026350(param_1,local_18,local_20);
  return;
}




void FUN_180026350(undefined8 param_1,void *param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar1 = FUN_180026700((longlong)param_2,param_3);
  uVar2 = FUN_1800016d0(uVar1);
  FUN_180012c70(param_1);
  uVar3 = FUN_18001cb60(param_1);
  uVar4 = FUN_18001d2d0(param_1);
  if (uVar4 < uVar2) {
    _Var5 = FUN_18001cb10(param_1);
    if (_Var5 < uVar2) {
      FUN_1800153f0();
    }
    uVar2 = FUN_18001c9e0(param_1,uVar2);
    plVar6 = (longlong *)FUN_180014ee0(param_1);
    if (*plVar6 != 0) {
      FUN_180014ec0(param_1);
      FUN_180014ee0(param_1);
      FUN_180015110(param_1);
      uVar1 = FUN_180014f00(param_1);
      puVar7 = (undefined8 *)FUN_180014ee0(param_1);
      FUN_18001cbe0(uVar1,(void *)*puVar7,uVar4);
    }
    FUN_180026600(param_1,uVar2);
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    uVar1 = FUN_18001cad0(param_1,param_2,param_3,(CLogWriter *)*puVar7);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar1;
  }
  else if (uVar3 < uVar2) {
    lVar8 = FUN_180026730((longlong)param_2,uVar3);
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001d6b0(param_2,lVar8,(void *)*puVar7);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    uVar1 = FUN_18001cad0(param_1,lVar8,param_3,(CLogWriter *)*puVar7);
    puVar7 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar7 = uVar1;
  }
  else {
    plVar6 = (longlong *)FUN_180014ee0(param_1);
    lVar8 = *plVar6;
    puVar7 = (undefined8 *)FUN_180014ee0(param_1);
    FUN_18001d6b0(param_2,param_3,(void *)*puVar7);
    FUN_180014ec0(param_1);
    FUN_180015110(param_1);
    plVar6 = (longlong *)FUN_180014ec0(param_1);
    *plVar6 = uVar2 * 0x30 + lVar8;
  }
  return;
}




ulonglong FUN_180026600(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var6;
  longlong *plVar7;
  
  puVar3 = (undefined8 *)FUN_180014ee0(param_1);
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_180014ec0(param_1);
  *puVar3 = 0;
  puVar3 = (undefined8 *)FUN_180017b00(param_1);
  *puVar3 = 0;
  if (param_2 == 0) {
    uVar4 = (ulonglong)puVar3 & 0xffffffffffffff00;
  }
  else {
    _Var5 = FUN_18001cb10(param_1);
    if (_Var5 < param_2) {
      FUN_1800153f0();
    }
    this = (allocator<struct_std::_Container_proxy> *)FUN_180014f00(param_1);
    p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,param_2);
    puVar3 = (undefined8 *)FUN_180014ee0(param_1);
    *puVar3 = p_Var6;
    puVar3 = (undefined8 *)FUN_180014ee0(param_1);
    uVar1 = *puVar3;
    puVar3 = (undefined8 *)FUN_180014ec0(param_1);
    *puVar3 = uVar1;
    plVar7 = (longlong *)FUN_180014ee0(param_1);
    lVar2 = *plVar7;
    plVar7 = (longlong *)FUN_180017b00(param_1);
    *plVar7 = param_2 * 0x30 + lVar2;
    uVar4 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  return uVar4;
}




void FUN_180026700(longlong param_1,longlong param_2)

{
  FUN_180026760(param_1,param_2);
  return;
}




longlong FUN_180026730(longlong param_1,longlong param_2)

{
  longlong local_res8;
  longlong local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_180026790(&local_res8,param_2);
  return local_res8;
}




longlong FUN_180026760(longlong param_1,longlong param_2)

{
  return (param_2 - param_1) / 0x30;
}




void FUN_180026790(longlong *param_1,longlong param_2)

{
  FUN_1800267c0(param_1,param_2);
  return;
}




void FUN_1800267c0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2 * 0x30 + *param_1;
  return;
}




undefined * FUN_1800267f0(void)

{
  return &DAT_180052400;
}




/* Library Function - Single Match
    _vfprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1800010c0();
  iVar1 = __stdio_common_vfprintf(*puVar2,_File,_Format,_Locale,_ArgList);
  return iVar1;
}




/* Library Function - Single Match
    fprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  iVar1 = _vfprintf_l(_File,_Format,(_locale_t)0x0,(va_list)&local_res18);
  return iVar1;
}




int FUN_1800268a0(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  FILE *_File;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _File = (FILE *)__acrt_iob_func(1);
  iVar1 = _vfprintf_l(_File,param_1,(_locale_t)0x0,(va_list)&local_res10);
  return iVar1;
}




void FUN_180026900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800267f0();
  __stdio_common_vsscanf(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}




undefined4
FUN_180026950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180026900(param_1,param_2,0,&local_res18);
  return uVar1;
}




void FUN_1800269a0(undefined4 param_1,undefined8 param_2)

{
  _fstat64i32(param_1,param_2);
  return;
}




char * FUN_1800269d0(char *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong local_40;
  char *local_38;
  char *local_30;
  
  if (param_1 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    local_40 = -1;
    lVar2 = local_40;
    do {
      local_40 = lVar2;
      lVar2 = local_40 + 1;
    } while (param_1[local_40 + 1] != '\0');
    pcVar3 = (char *)calloc(local_40 + 2,1);
    local_38 = pcVar3;
    local_30 = param_1;
    if (pcVar3 == (char *)0x0) {
      perror(s_malloc_failure_18004f268);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    do {
      cVar1 = *local_30;
      *local_38 = cVar1;
      local_30 = local_30 + 1;
      local_38 = local_38 + 1;
    } while (cVar1 != '\0');
  }
  return pcVar3;
}




undefined1 * FUN_180026ab0(undefined1 *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if (param_1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)calloc((longlong)(param_2 + 1),1);
    if (puVar1 == (undefined1 *)0x0) {
      perror(s_malloc_failure_18004f258);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = puVar1;
    for (lVar2 = (longlong)param_2; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1[param_2] = 0;
  }
  return puVar1;
}




longlong FUN_180026b30(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  FILE *_File;
  longlong local_28;
  longlong local_20;
  
  FUN_1800268a0(&DAT_18004e6f4,param_1,param_3,param_4);
  _File = (FILE *)__acrt_iob_func(0);
  fgets(param_2,(int)param_3 + 1,_File);
  local_28 = -1;
  lVar1 = local_28;
  do {
    local_28 = lVar1;
    lVar1 = local_28 + 1;
  } while (param_2[local_28 + 1] != '\0');
  param_2[local_28] = '\0';
  local_20 = -1;
  do {
    local_20 = local_20 + 1;
  } while (param_2[local_20] != '\0');
  return local_20;
}




void FUN_180026be0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint local_res10;
  int local_14;
  int local_10;
  uint local_c;
  
  iVar5 = (int)param_4;
  iVar4 = (int)param_3;
  for (local_res10 = param_2; (int)local_res10 < iVar4; local_res10 = local_res10 + 0x10) {
    local_10 = iVar4 - local_res10;
    if (0x10 < local_10) {
      local_10 = 0x10;
    }
    uVar3 = (ulonglong)local_res10;
    FUN_1800268a0(s___05X_18004f250,uVar3,param_3,param_4);
    for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
      uVar3 = (ulonglong)*(byte *)(param_1 + (int)local_res10 + (longlong)local_14);
      FUN_1800268a0(s__02X_18004e7f4,uVar3,param_3,param_4);
    }
    if (iVar5 != 0) {
      for (local_14 = local_10; local_14 < 0x10; local_14 = local_14 + 1) {
        FUN_1800268a0(&DAT_18004e68c,uVar3,param_3,param_4);
      }
      for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
        cVar1 = *(char *)(param_1 + (int)local_res10 + (longlong)local_14);
        iVar2 = isprint((int)cVar1);
        if (iVar2 == 0) {
          local_c = 0x2e;
        }
        else {
          local_c = (uint)cVar1;
        }
        uVar3 = (ulonglong)local_c;
        FUN_1800268a0(&DAT_18004e5f4,uVar3,param_3,param_4);
      }
    }
    FUN_1800268a0(&DAT_18004e5d4,uVar3,param_3,param_4);
  }
  return;
}




int FUN_180026d50(byte *param_1)

{
  return (uint)*param_1 + (uint)param_1[1] * 0x100 + (uint)param_1[2] * 0x10000 +
         (char)param_1[3] * 0x1000000;
}




void FUN_180026dd0(longlong *param_1)

{
  while (*(char *)*param_1 == ' ') {
    *param_1 = *param_1 + 1;
  }
  return;
}




undefined4 FUN_180026e00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18 [6];
  
  FUN_180026dd0(param_1);
  if (*(char *)*param_1 == '\0') {
    local_18[0] = 0;
  }
  else {
    FUN_180026950(*param_1,&DAT_18004e594,local_18,param_4);
    while ((*(char *)*param_1 != ' ' && (*(char *)*param_1 != '\0'))) {
      *param_1 = *param_1 + 1;
    }
  }
  return local_18[0];
}




int FUN_180026e80(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *local_res10;
  int local_18;
  
  local_18 = 0;
  puVar2 = param_2;
  FUN_180026dd0(param_1);
  local_res10 = param_2;
  if (*(char *)*param_1 == '\'') {
    *param_1 = *param_1 + 1;
    while (*(char *)*param_1 != '\0') {
      *local_res10 = *(undefined1 *)*param_1;
      local_res10 = local_res10 + 1;
      *param_1 = *param_1 + 1;
      local_18 = local_18 + 1;
    }
  }
  else {
    do {
      uVar1 = FUN_180026e00(param_1,puVar2,param_3,param_4);
      *local_res10 = (char)uVar1;
      local_res10 = local_res10 + 1;
      local_18 = local_18 + 1;
      FUN_180026dd0(param_1);
    } while (*(char *)*param_1 != '\0');
  }
  return local_18;
}




void FUN_180026f60(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_158 [32];
  uint local_138;
  uint local_134;
  char *local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  int local_114;
  int local_110;
  char local_108 [112];
  char local_98 [112];
  ulonglong local_28;
  
  uVar2 = (uint)param_2;
  local_28 = DAT_18004e038 ^ (ulonglong)auStack_158;
  local_114 = 0;
  local_118 = 0;
  FUN_1800268a0(s_Buffer_debugger______for_help__18004f230,param_2,param_3,param_4);
  do {
    do {
      do {
        uVar6 = 0x5a;
        pcVar3 = local_98;
        lVar1 = FUN_180026b30(&DAT_18004e4e4,pcVar3,0x5a,param_4);
        local_110 = (int)lVar1;
        local_130 = local_98;
        FUN_180026dd0((longlong *)&local_130);
      } while (local_110 < 1);
    } while (*local_130 == '\0');
    local_11c = *local_130 + -0x3a;
    switch(local_11c) {
    case 0:
      local_130 = local_130 + 1;
      if (*local_130 != '\0') {
        local_134 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
        local_124 = FUN_180026e80((longlong *)&local_130,local_108,uVar6,param_4);
        FUN_1800268a0(s_from___x__wlen___d_18004f178,(ulonglong)local_134,(ulonglong)local_124,
                      param_4);
        pcVar3 = local_108;
        pcVar5 = (char *)(param_1 + (int)local_134);
        for (lVar1 = (longlong)(int)local_124; lVar1 != 0; lVar1 = lVar1 + -1) {
          *pcVar5 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        }
        local_114 = 1;
      }
      break;
    default:
      FUN_1800268a0(&DAT_18004e2d4,pcVar3,uVar6,param_4);
      break;
    case 5:
      FUN_1800268a0(s_d__<from>___<to>____dump_buffer_w_18004f148,pcVar3,uVar6,param_4);
      FUN_1800268a0(s_a__<from>___<to>____same_as_d__b_18004f190,pcVar3,uVar6,param_4);
      FUN_1800268a0(s___<offset>_<hexbyte>__<hexbyte>___18004f0c8,pcVar3,uVar6,param_4);
      FUN_1800268a0(s_h_<from>_<to>_<hexbyte>__<hexbyt_18004f100,pcVar3,uVar6,param_4);
      FUN_1800268a0(s_ha_<hexbyte>__<hexbyte]___Hunt_a_18004f090,pcVar3,uVar6,param_4);
      FUN_1800268a0(s_s___save___quit_18004f078,pcVar3,uVar6,param_4);
      FUN_1800268a0(s_q___quit__no_save__18004f060,pcVar3,uVar6,param_4);
      FUN_1800268a0(s_instead_of_<hexbyte>_etc__you_ma_18004f010,pcVar3,uVar6,param_4);
      break;
    case 0x27:
      local_130 = local_130 + 1;
      if (*local_130 == '\0') {
        local_134 = local_118;
        local_138 = 0;
      }
      else {
        local_134 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
        local_138 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
      }
      if (local_138 == 0) {
        local_138 = local_134 + 0x100;
      }
      if ((int)uVar2 < (int)local_138) {
        local_138 = uVar2;
      }
      param_4 = 0;
      FUN_180026be0(param_1,local_134,(ulonglong)local_138,0);
      local_118 = local_138;
      break;
    case 0x2a:
      local_130 = local_130 + 1;
      if (*local_130 == '\0') {
        local_134 = local_118;
        local_138 = 0;
      }
      else {
        local_134 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
        local_138 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
      }
      if (local_138 == 0) {
        local_138 = local_134 + 0x100;
      }
      if ((int)uVar2 < (int)local_138) {
        local_138 = uVar2;
      }
      param_4 = 1;
      FUN_180026be0(param_1,local_134,(ulonglong)local_138,1);
      local_118 = local_138;
      break;
    case 0x2e:
      if (local_130[1] == 'a') {
        local_134 = 0;
        local_130 = local_130 + 2;
        local_138 = uVar2;
      }
      else {
        local_130 = local_130 + 1;
        local_134 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
        local_138 = FUN_180026e00((longlong *)&local_130,pcVar3,uVar6,param_4);
      }
      local_124 = FUN_180026e80((longlong *)&local_130,local_108,uVar6,param_4);
      if ((int)uVar2 < (int)local_138) {
        local_138 = uVar2;
      }
      param_4 = (ulonglong)local_124;
      uVar7 = (ulonglong)local_138;
      uVar4 = (ulonglong)local_134;
      FUN_1800268a0(s_from___x__to___x__wlen___d_18004f1e0,uVar4,uVar7,param_4);
      for (local_120 = local_134; (int)local_120 < (int)local_138; local_120 = local_120 + 1) {
        for (local_128 = 0;
            ((int)local_128 < (int)local_124 &&
            (*(char *)(param_1 + (int)local_120 + (longlong)(int)local_128) ==
             local_108[(int)local_128])); local_128 = local_128 + 1) {
        }
        if (local_128 == local_124) {
          uVar4 = (ulonglong)local_120;
          FUN_1800268a0(s__06x_18004e4dc,uVar4,uVar7,param_4);
        }
      }
      FUN_1800268a0(&DAT_18004e434,uVar4,uVar7,param_4);
      break;
    case 0x37:
LAB_1800273cc:
      __security_check_cookie(local_28 ^ (ulonglong)auStack_158);
      return;
    case 0x39:
      if (local_114 == 0) {
        FUN_1800268a0(s_Buffer_has_not_changed__no_need_t_18004f200,pcVar3,uVar6,param_4);
      }
      goto LAB_1800273cc;
    }
  } while( true );
}




void FUN_180027450(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_28;
  char *local_18;
  
  FUN_1800268a0(s____nk_at_offset__0x_18004eff8,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  if (*(short *)(lVar1 + 2) == 0x2c) {
    local_18 = s_ROOT_KEY_18004efe8;
  }
  else {
    local_18 = &DAT_18004fe48;
  }
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 2);
  FUN_1800268a0(s__04x_type___0x_02x__s_18004efc0,
                ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,uVar3,
                local_18);
  FUN_1800268a0(s__04x_timestamp_skipped_18004efa0,
                ((lVar1 + 4) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,uVar3,
                local_18);
  FUN_1800268a0(s__04x_parent_key_offset___0x_0x_18004ef78,
                ((lVar1 + 0x10) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 0x10) + 0x1000),local_18);
  FUN_1800268a0(s__04x_number_of_subkeys____d_18004ef58,
                ((lVar1 + 0x14) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x14),local_18);
  FUN_1800268a0(s__04x_lf_record_offset___0x_0x_18004ef30,
                ((lVar1 + 0x1c) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 0x1c) + 0x1000),local_18);
  FUN_1800268a0(s__04x_number_of_values____d_18004ef10,
                ((lVar1 + 0x24) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x24),local_18);
  FUN_1800268a0(s__04x_val_list_offset___0x_0x_18004eee8,
                ((lVar1 + 0x28) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 0x28) + 0x1000),local_18);
  FUN_1800268a0(s__04x_sk_record_offset___0x_0x_18004eec0,
                ((lVar1 + 0x2c) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 0x2c) + 0x1000),local_18);
  FUN_1800268a0(s__04x_classname_offset___0x_0x_18004ee98,
                ((lVar1 + 0x30) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 0x30) + 0x1000),local_18);
  FUN_1800268a0(s__04x_dummy3___0x_0x___d__18004ee70,
                ((lVar1 + 0x34) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x34),(ulonglong)*(uint *)(lVar1 + 0x34));
  FUN_1800268a0(s__04x_dummy4___0x_0x___d__18004ee48,
                ((lVar1 + 0x38) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x38),(ulonglong)*(uint *)(lVar1 + 0x38));
  FUN_1800268a0(s__04x_dummy5___0x_0x___d__18004ee20,
                ((lVar1 + 0x3c) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x3c),(ulonglong)*(uint *)(lVar1 + 0x3c));
  FUN_1800268a0(s__04x_dummy6___0x_0x___d__18004edf8,
                ((lVar1 + 0x40) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x40),(ulonglong)*(uint *)(lVar1 + 0x40));
  uVar4 = (ulonglong)*(uint *)(lVar1 + 0x44);
  FUN_1800268a0(s__04x_dummy7___0x_0x___d__18004edd0,
                ((lVar1 + 0x44) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0x44),uVar4);
  FUN_1800268a0(s__04x_name_length____d_18004edb0,
                ((lVar1 + 0x48) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(uint)(int)*(short *)(lVar1 + 0x48),uVar4);
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 0x4a);
  FUN_1800268a0(s__04x_classname_length____d_18004ed90,
                ((lVar1 + 0x4a) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,uVar3,
                uVar4);
  lVar2 = ((lVar1 + 0x4c) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  FUN_1800268a0(s__04x_Key_name__<_18004ed78,lVar2,uVar3,uVar4);
  for (local_28 = 0; local_28 < *(short *)(lVar1 + 0x48); local_28 = local_28 + 1) {
    putchar((int)*(char *)(lVar1 + 0x4c + (longlong)local_28));
  }
  FUN_1800268a0(s_>____End_of_key_info__18004ed60,lVar2,uVar3,uVar4);
  return;
}




void FUN_1800278a0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_28;
  char *local_18;
  
  FUN_1800268a0(s____vk_at_offset__0x_18004ed48,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  FUN_1800268a0(s__04x_name_length____d__0x_0x__18004ed20,
                ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(uint)(int)*(short *)(lVar1 + 2),
                (ulonglong)(uint)(int)*(short *)(lVar1 + 2));
  uVar3 = (ulonglong)*(uint *)(lVar1 + 4);
  FUN_1800268a0(s__04x_length_of_data____d__0x_0x__18004ecf8,
                ((lVar1 + 4) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 4),uVar3);
  FUN_1800268a0(s__04x_data_offset___0x_0x_18004ecd0,
                ((lVar1 + 8) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 8) + 0x1000),uVar3);
  if (*(int *)(lVar1 + 0xc) < 0xd) {
    local_18 = (&PTR_s_REG_NONE_18004e140)[*(int *)(lVar1 + 0xc)];
  }
  else {
    local_18 = s__unknown__18004ecc0;
  }
  FUN_1800268a0(s__04x_value_type___0x_0x__s_18004ec98,
                ((lVar1 + 0xc) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0xc),local_18);
  FUN_1800268a0(s__04x_flag___0x_0x_18004ec70,
                ((lVar1 + 0x10) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(uint)(int)*(short *)(lVar1 + 0x10),local_18);
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 0x12);
  FUN_1800268a0(s__04x__unused_____0x_0x_18004ec48,
                ((lVar1 + 0x12) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,uVar3,
                local_18);
  lVar2 = ((lVar1 + 0x14) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  FUN_1800268a0(s__04x_Key_name__<_18004ec30,lVar2,uVar3,local_18);
  for (local_28 = 0; local_28 < *(short *)(lVar1 + 2); local_28 = local_28 + 1) {
    putchar((int)*(char *)(lVar1 + 0x14 + (longlong)local_28));
  }
  FUN_1800268a0(s_>____End_of_key_info__18004ec18,lVar2,uVar3,local_18);
  return;
}




void FUN_180027ad0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FUN_1800268a0(s____sk_at_offset__0x_18004ec00,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  FUN_1800268a0(s__04x__unused______d_18004ebe0,
                ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(uint)(int)*(short *)(lVar1 + 2),param_4);
  FUN_1800268a0(s__04x_Offset_to_prev_sk___0x_0x_18004ebb8,
                ((lVar1 + 4) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 4) + 0x1000),param_4);
  FUN_1800268a0(s__04x_Offset_to_next_sk___0x_0x_18004eb90,
                ((lVar1 + 8) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(*(int *)(lVar1 + 8) + 0x1000),param_4);
  FUN_1800268a0(s__04x_Usage_counter____d__0x_0x__18004eb68,
                ((lVar1 + 0xc) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)*(uint *)(lVar1 + 0xc),(ulonglong)*(uint *)(lVar1 + 0xc));
  lVar2 = ((lVar1 + 0x10) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  uVar4 = (ulonglong)*(uint *)(lVar1 + 0x10);
  uVar3 = (ulonglong)*(uint *)(lVar1 + 0x10);
  FUN_1800268a0(s__04x_Security_data_len____d__0x__18004eb40,lVar2,uVar3,uVar4);
  FUN_1800268a0(s____End_of_key_info__18004eb28,lVar2,uVar3,uVar4);
  return;
}




void FUN_180027c40(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_18;
  
  FUN_1800268a0(s____lf_at_offset__0x_18004eb10,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  lVar2 = ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 2);
  FUN_1800268a0(s__04x_number_of_keys____d_18004eaf0,lVar2,uVar3,param_4);
  for (local_18 = 0; (int)local_18 < (int)*(short *)(lVar1 + 2); local_18 = local_18 + 1) {
    param_4 = (ulonglong)(*(int *)(lVar1 + 4 + (longlong)(int)local_18 * 8) + 0x1000);
    lVar2 = ((lVar1 + 4 + (longlong)(int)local_18 * 8) - *(longlong *)(param_1 + 0x40)) -
            (longlong)(int)param_2;
    uVar3 = (ulonglong)local_18;
    FUN_1800268a0(s__04x__3d_Offset__0x_0x___<_c_c_c_18004eac0,lVar2,uVar3,param_4);
  }
  FUN_1800268a0(s____End_of_key_info__18004eaa8,lVar2,uVar3,param_4);
  return;
}




void FUN_180027dc0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_18;
  
  FUN_1800268a0(s____lh_at_offset__0x_18004ea90,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  lVar2 = ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 2);
  FUN_1800268a0(s__04x_number_of_keys____d_18004ea70,lVar2,uVar3,param_4);
  for (local_18 = 0; (int)local_18 < (int)*(short *)(lVar1 + 2); local_18 = local_18 + 1) {
    lVar2 = ((lVar1 + 4 + (longlong)(int)local_18 * 8) - *(longlong *)(param_1 + 0x40)) -
            (longlong)(int)param_2;
    param_4 = (ulonglong)(*(int *)(lVar1 + 4 + (longlong)(int)local_18 * 8) + 0x1000);
    uVar3 = (ulonglong)local_18;
    FUN_1800268a0(s__04x__3d_Offset__0x_0x___<hash:___18004ea40,lVar2,uVar3,param_4);
  }
  FUN_1800268a0(s____End_of_key_info__18004ea28,lVar2,uVar3,param_4);
  return;
}




void FUN_180027ec0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_18;
  
  FUN_1800268a0(s____li_at_offset__0x_18004ea10,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  lVar2 = ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 2);
  FUN_1800268a0(s__04x_number_of_keys____d_18004e9f0,lVar2,uVar3,param_4);
  for (local_18 = 0; (int)local_18 < (int)*(short *)(lVar1 + 2); local_18 = local_18 + 1) {
    lVar2 = ((lVar1 + 4 + (longlong)(int)local_18 * 4) - *(longlong *)(param_1 + 0x40)) -
            (longlong)(int)param_2;
    param_4 = (ulonglong)(*(int *)(lVar1 + 4 + (longlong)(int)local_18 * 4) + 0x1000);
    uVar3 = (ulonglong)local_18;
    FUN_1800268a0(s__04x__3d_Offset__0x_0x_18004e9d0,lVar2,uVar3,param_4);
  }
  FUN_1800268a0(s____End_of_key_info__18004e9b8,lVar2,uVar3,param_4);
  return;
}




void FUN_180027fb0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_18;
  
  FUN_1800268a0(s____ri_at_offset__0x_18004e9a0,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  lVar2 = ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  uVar3 = (ulonglong)(uint)(int)*(short *)(lVar1 + 2);
  FUN_1800268a0(s__04x_number_of_subindices____d_18004e978,lVar2,uVar3,param_4);
  for (local_18 = 0; (int)local_18 < (int)*(short *)(lVar1 + 2); local_18 = local_18 + 1) {
    lVar2 = ((lVar1 + 4 + (longlong)(int)local_18 * 4) - *(longlong *)(param_1 + 0x40)) -
            (longlong)(int)param_2;
    param_4 = (ulonglong)(*(int *)(lVar1 + 4 + (longlong)(int)local_18 * 4) + 0x1000);
    uVar3 = (ulonglong)local_18;
    FUN_1800268a0(s__04x__3d_Offset__0x_0x_18004e958,lVar2,uVar3,param_4);
  }
  FUN_1800268a0(s____End_of_key_info__18004e940,lVar2,uVar3,param_4);
  return;
}




void FUN_1800280a0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1800268a0(s____db_at_offset__0x_18004e928,(ulonglong)param_2,param_3,param_4);
  lVar1 = (longlong)(int)param_2 + *(longlong *)(param_1 + 0x40);
  FUN_1800268a0(s__04x_number_of_parts____d_18004e908,
                ((lVar1 + 2) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2,
                (ulonglong)(uint)(int)*(short *)(lVar1 + 2),param_4);
  lVar2 = ((lVar1 + 4) - *(longlong *)(param_1 + 0x40)) - (longlong)(int)param_2;
  uVar3 = (ulonglong)(*(int *)(lVar1 + 4) + 0x1000);
  FUN_1800268a0(s__04x_Data_list_at_offset__0x_0x_18004e8e0,lVar2,uVar3,param_4);
  FUN_1800268a0(s____End_of_key_info__18004e878,lVar2,uVar3,param_4);
  return;
}




uint FUN_180028160(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint local_14;
  
  iVar5 = (int)param_3;
  iVar3 = (int)param_2;
  uVar4 = param_2;
  local_14 = FUN_180026d50((byte *)((longlong)iVar3 + *(longlong *)(param_1 + 0x40)));
  if (local_14 == 0) {
    FUN_1800268a0(s_parse_block__FATAL__Zero_data_bl_18004e890,uVar4,param_3,param_4);
    if (iVar5 != 0) {
      FUN_180026f60(*(longlong *)(param_1 + 0x40),(ulonglong)*(uint *)(param_1 + 0x28),param_3,
                    param_4);
    }
    local_14 = 0;
  }
  else {
    if ((int)local_14 < 0) {
      local_14 = -local_14;
      *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + local_14;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if (iVar5 != 0) {
        param_4 = (ulonglong)local_14;
        param_3 = (ulonglong)(iVar3 + local_14);
        FUN_1800268a0(s_USED_BLOCK____06x_to__06x____d__0_18004e850,param_2 & 0xffffffff,param_3,
                      param_4);
      }
    }
    else {
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + local_14;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (iVar5 != 0) {
        param_4 = (ulonglong)local_14;
        param_3 = (ulonglong)(iVar3 + local_14);
        FUN_1800268a0(s_FREE_BLOCK____06x_to__06x____d__0_18004e828,param_2 & 0xffffffff,param_3,
                      param_4);
      }
    }
    uVar2 = iVar3 + 4;
    uVar1 = (short)((int)*(char *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uVar2) << 8) +
            (short)*(char *)(*(longlong *)(param_1 + 0x40) + 1 + (longlong)(int)uVar2);
    if (1 < iVar5) {
      if (uVar1 < 0x6e6c) {
        if (uVar1 == 0x6e6b) {
          FUN_180027450(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
        if (uVar1 == 0x6462) {
          FUN_1800280a0(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
        if (uVar1 == 0x6c66) {
          FUN_180027c40(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
        if (uVar1 == 0x6c68) {
          FUN_180027dc0(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
        if (uVar1 == 0x6c69) {
          FUN_180027ec0(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
      }
      else {
        if (uVar1 == 0x7269) {
          FUN_180027fb0(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
        if (uVar1 == 0x736b) {
          FUN_180027ad0(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
        if (uVar1 == 0x766b) {
          FUN_1800278a0(param_1,uVar2,(ulonglong)local_14,param_4);
          return local_14;
        }
      }
      FUN_1800268a0(s_value_data__or_not_handeled_yet__18004e800,*(longlong *)(param_1 + 0x40),
                    param_3,param_4);
    }
  }
  return local_14;
}




undefined8 FUN_180028410(longlong param_1,uint param_2,int *param_3,int *param_4,uint *param_5)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  undefined8 uVar4;
  short *psVar5;
  undefined1 *puVar6;
  void *pvVar7;
  uint local_38;
  
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    psVar5 = (short *)((longlong)(int)param_2 + *(longlong *)(param_1 + 0x40));
    if (*psVar5 == 0x6b6e) {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 + (longlong)*(int *)(psVar5 + 0xe));
      psVar2 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 + (longlong)*(int *)(psVar5 + 0xe));
      if (*psVar2 == 0x6972) {
        if ((*param_4 < 0) || ((int)psVar2[1] <= *param_4)) {
          return 0;
        }
        psVar5 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 +
                          (longlong)*(int *)(psVar2 + (longlong)*param_4 * 2 + 2));
        if (*psVar5 == 0x696c) {
          iVar3 = *(int *)(psVar5 + (longlong)*param_3 * 2 + 2);
        }
        else {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) +
                           (longlong)*(int *)(psVar2 + (longlong)*param_4 * 2 + 2) + 0x1008 +
                          (longlong)*param_3 * 8);
        }
        local_38 = iVar3 + 0x1000;
        if (psVar5[1] + -1 <= *param_3) {
          *param_4 = *param_4 + 1;
          *param_3 = -1;
        }
      }
      else {
        if ((*(int *)(psVar5 + 10) < 1) || (*(int *)(psVar5 + 10) <= *param_3)) {
          return 0;
        }
        if (*psVar1 == 0x696c) {
          local_38 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(psVar5 + 0xe) +
                              0x1008 + (longlong)*param_3 * 4) + 0x1000;
        }
        else {
          local_38 = *(int *)(psVar1 + (longlong)*param_3 * 4 + 2) + 0x1000;
        }
      }
      *param_5 = local_38;
      psVar5 = (short *)(*(longlong *)(param_1 + 0x40) + 4 + (longlong)(int)local_38);
      *(short **)(param_5 + 2) = psVar5;
      if (*psVar5 == 0x6b6e) {
        if (psVar5[0x24] < 1) {
          FUN_1800268a0(s_ex_next__nk_at_0x_0x_has_no_name_18004e778,(ulonglong)local_38,param_3,
                        param_4);
        }
        else if ((psVar5[1] & 0x20U) == 0) {
          pvVar7 = FUN_180029710((longlong)(psVar5 + 0x26),(int)psVar5[0x24]);
          *(void **)(param_5 + 4) = pvVar7;
        }
        else {
          puVar6 = FUN_180026ab0((undefined1 *)(psVar5 + 0x26),(int)psVar5[0x24]);
          *(undefined1 **)(param_5 + 4) = puVar6;
        }
        *param_3 = *param_3 + 1;
        uVar4 = 1;
      }
      else {
        FUN_1800268a0(s_ex_next__ERROR__not__nk__node_at_18004e7a0,(ulonglong)local_38,param_3,
                      param_4);
        uVar4 = 0xffffffff;
      }
    }
    else {
      FUN_1800268a0(s_ex_next_error__Not_a__nk__node_a_18004e7c8,(ulonglong)param_2,param_3,param_4)
      ;
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}




int FUN_180028730(longlong param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_38;
  int local_30;
  longlong local_20;
  
  local_30 = -1;
  local_20 = -1;
  do {
    local_20 = local_20 + 1;
  } while (param_4[local_20] != '\0');
  iVar2 = (int)local_20;
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_38 = 0;
  while ((iVar3 = local_30, local_38 < param_3 &&
         (((lVar4 = (longlong)(*(int *)(param_2 + lVar1 + (longlong)local_38 * 4) + 0x1004) +
                    *(longlong *)(param_1 + 0x40), *(short *)(lVar4 + 2) != 0 || (*param_4 != '@'))
          || (iVar3 = local_38, iVar2 != 1))))) {
    if (((((param_5 & 0x80) == 0) || (*(short *)(lVar4 + 2) == iVar2)) &&
        (iVar2 <= *(short *)(lVar4 + 2))) &&
       (iVar3 = strncmp(param_4,(char *)(lVar4 + 0x14),(longlong)iVar2), iVar3 == 0)) {
      if (*(short *)(lVar4 + 2) == iVar2) {
        return local_38;
      }
      if (local_30 == -1) {
        local_30 = local_38;
      }
    }
    local_38 = local_38 + 1;
  }
  return iVar3;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180028890(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *_Size;
  short *psVar4;
  short *psVar5;
  byte *pbVar6;
  uint local_res10;
  byte *local_res18;
  undefined1 auStackY_1108 [32];
  int local_10d8;
  int local_10d0;
  int local_10cc;
  uint local_10c8;
  int local_10c4;
  short *local_10c0;
  int local_10a0;
  int local_109c;
  uint local_1098;
  int local_1094;
  byte *local_1090;
  short *local_1088;
  short *local_1080;
  uint local_1078;
  uint local_1074;
  int local_1070;
  int local_106c;
  longlong local_1068;
  byte *local_1060;
  longlong local_1058;
  byte *local_1050;
  byte *local_1048;
  longlong local_1040;
  byte *local_1038;
  byte *local_1030;
  byte local_1028 [4112];
  ulonglong local_18;
  undefined8 uStack_8;
  
  local_res10 = (uint)param_2;
  uStack_8 = 0x1800288ad;
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_1108;
  local_10d8 = 0;
  local_1090 = local_1028;
  if (param_1 != 0) {
    local_1068 = *(longlong *)(param_1 + 0x40);
    if (local_res10 == 0) {
      local_res10 = *(int *)(param_1 + 0x2c) + 4;
    }
    local_res18 = param_3;
    if (((((ulonglong)param_4 & 0x40) == 0) && (*param_3 == 0x5c)) && (param_3[1] != 0x5c)) {
      local_res18 = param_3 + 1;
      local_res10 = *(int *)(param_1 + 0x2c) + 4;
    }
    psVar4 = (short *)(local_1068 + (int)local_res10);
    if (*psVar4 == 0x6b6e) {
      pbVar6 = param_4;
      if (((ulonglong)param_4 & 0x40) == 0) {
        local_1090 = local_1028;
        local_10d8 = 0;
        while ((local_res18[local_10d8] != 0 &&
               ((local_res18[local_10d8] != 0x5c || (local_res18[local_10d8 + 1] == 0x5c))))) {
          if ((local_res18[local_10d8] == 0x5c) && (local_res18[local_10d8 + 1] == 0x5c)) {
            local_10d8 = local_10d8 + 1;
          }
          *local_1090 = local_res18[local_10d8];
          local_1090 = local_1090 + 1;
          local_10d8 = local_10d8 + 1;
        }
        *local_1090 = 0;
        local_1078 = (uint)(local_res18[local_10d8] == 0x5c);
        local_1098 = local_1078;
        if (local_10d8 == 0) goto LAB_180029222;
        if (((local_10d8 == 1) && (local_res18[1] != 0)) &&
           ((*local_res18 == 0x2e && (((ulonglong)param_4 & 0x80) == 0)))) {
          FUN_180028890(param_1,(ulonglong)local_res10,local_res18 + (longlong)(int)local_1078 + 1,
                        (byte *)((ulonglong)param_4 & 0xffffffff));
          goto LAB_180029222;
        }
        if (((((ulonglong)param_4 & 0x80) == 0) && (local_10d8 == 2)) &&
           (iVar3 = strncmp(&DAT_18004e2ac,(char *)local_res18,2), iVar3 == 0)) {
          local_1074 = *(int *)(psVar4 + 8) + 0x1004;
          if (psVar4[1] == 0x2c) {
            local_1074 = local_res10;
          }
          FUN_180028890(param_1,(ulonglong)local_1074,local_res18 + (longlong)(int)local_1098 + 2,
                        (byte *)((ulonglong)param_4 & 0xffffffff));
          goto LAB_180029222;
        }
      }
      if ((((ulonglong)param_4 & 0x41) != 0) ||
         (((local_res18[local_10d8] == 0 && (((ulonglong)param_4 & 1) != 0)) &&
          (*(int *)(psVar4 + 0x12) != 0)))) {
        if (((ulonglong)param_4 & 0x40) != 0) {
          local_1048 = local_res18;
          local_1030 = local_1028;
          local_1060 = local_1030;
          do {
            bVar1 = *local_1048;
            *local_1060 = bVar1;
            local_1048 = local_1048 + 1;
            local_1060 = local_1060 + 1;
          } while (bVar1 != 0);
          local_10d8 = FUN_180029bb0((longlong)local_1028,0);
          local_1090 = local_1028 + local_10d8;
        }
        local_1070 = *(int *)(psVar4 + 0x14) + 0x1004;
        local_1040 = local_1068 + local_1070;
        pbVar6 = local_1028;
        iVar3 = FUN_180028730(param_1,local_1070,*(int *)(psVar4 + 0x12),(char *)pbVar6,
                              (uint)param_4);
        if (iVar3 != -1) goto LAB_180029222;
      }
      if (0 < *(int *)(psVar4 + 10)) {
        local_1050 = (byte *)0x0;
        local_106c = *(int *)(psVar4 + 0xe) + 0x1004;
        local_1088 = (short *)(local_1068 + local_106c);
        local_1080 = local_1088;
        if (*local_1088 == 0x6972) {
          local_10c4 = (int)local_1088[1];
          local_10c0 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 +
                                (longlong)*(int *)(local_1088 + 2));
          local_1094 = (int)local_10c0[1];
          if (*local_10c0 != 0x696c) {
            local_1080 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 +
                                  (longlong)*(int *)(local_1088 + 2));
            local_10c0 = (short *)0x0;
          }
        }
        else {
          if (*local_1088 == 0x696c) {
            local_10c0 = (short *)(local_1068 + local_106c);
          }
          else {
            local_10c0 = (short *)0x0;
          }
          local_1088 = (short *)0x0;
          local_10c4 = 0;
          local_1094 = *(int *)(psVar4 + 10);
        }
        local_10d0 = 0;
        _Size = &local_10a0;
        psVar4 = (short *)((longlong)local_1090 - (longlong)local_1028 & 0xffffffff);
        local_1050 = FUN_180029940(local_1028,(int)((longlong)local_1090 - (longlong)local_1028),
                                   _Size);
        local_1038 = local_1028;
        local_1058 = -1;
        do {
          local_1058 = local_1058 + 1;
        } while (local_1038[local_1058] != 0);
        iVar3 = (int)local_1058;
        do {
          for (local_10cc = 0; local_10cc < local_1094; local_10cc = local_10cc + 1) {
            if (local_10c0 == (short *)0x0) {
              iVar2 = *(int *)(local_1080 + (longlong)local_10cc * 4 + 2);
            }
            else {
              iVar2 = *(int *)(local_10c0 + (longlong)local_10cc * 2 + 2);
            }
            local_10c8 = iVar2 + 0x1004;
            psVar5 = (short *)(local_1068 + (int)local_10c8);
            if (*psVar5 == 0x6b6e) {
              if (psVar5[0x24] < 1) {
                FUN_1800268a0(s__No_name__18004e718,psVar4,_Size,pbVar6);
              }
              else if (((iVar3 <= psVar5[0x24]) && (((ulonglong)param_4 & 0x80) == 0)) ||
                      (((iVar3 == psVar5[0x24] || (local_10a0 == psVar5[0x24])) &&
                       (((ulonglong)param_4 & 0x80) != 0)))) {
                local_109c = 1;
                if ((psVar5[1] & 0x20U) == 0) {
                  if (local_10a0 <= psVar5[0x24]) {
                    _Size = (int *)(longlong)local_10a0;
                    psVar4 = psVar5 + 0x26;
                    local_109c = memcmp(local_1050,psVar4,(size_t)_Size);
                  }
                }
                else if (iVar3 <= psVar5[0x24]) {
                  _Size = (int *)(longlong)iVar3;
                  psVar4 = psVar5 + 0x26;
                  local_109c = strncmp((char *)local_1028,(char *)psVar4,(size_t)_Size);
                }
                if (local_109c == 0) {
                  free(local_1050);
                  FUN_180028890(param_1,(ulonglong)local_10c8,
                                local_res18 + (longlong)(int)local_1098 + (longlong)local_10d8,
                                (byte *)((ulonglong)param_4 & 0xffffffff));
                  goto LAB_180029222;
                }
              }
            }
            else {
              FUN_1800268a0(s_ERROR__not__nk__node___strange___18004e728,psVar4,_Size,pbVar6);
            }
          }
          local_10d0 = local_10d0 + 1;
          if ((local_10c4 != 0) && (local_10d0 < local_10c4)) {
            local_10c0 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 +
                                  (longlong)*(int *)(local_1088 + (longlong)local_10d0 * 2 + 2));
            local_1094 = (int)local_10c0[1];
            if (*local_10c0 != 0x696c) {
              local_1080 = (short *)(*(longlong *)(param_1 + 0x40) + 0x1004 +
                                    (longlong)*(int *)(local_1088 + (longlong)local_10d0 * 2 + 2));
              local_10c0 = (short *)0x0;
            }
          }
        } while ((local_10d0 < local_10c4) && (local_10c4 != 0));
        free(local_1050);
      }
    }
    else {
      FUN_1800268a0(s_trav_path__Error__Not_a__nk__nod_18004e750,param_2,param_3,param_4);
    }
  }
LAB_180029222:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_1108);
  return;
}




uint FUN_180029240(longlong param_1,uint param_2,byte *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint local_14;
  
  iVar1 = FUN_180028890(param_1,(ulonglong)param_2,param_3,(byte *)(ulonglong)(param_4 | 1));
  if (iVar1 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    lVar2 = (longlong)(iVar1 + 4) + *(longlong *)(param_1 + 0x40);
    local_14 = *(uint *)(lVar2 + 4) & 0x7fffffff;
    if ((*(int *)(lVar2 + 4) == -0x80000000) && ((param_4 & 0x100) != 0)) {
      local_14 = 4;
    }
  }
  return local_14;
}




longlong FUN_1800292e0(longlong param_1,uint param_2,byte *param_3,int param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(ulonglong)(param_5 | 1);
  pbVar3 = param_3;
  iVar1 = FUN_180028890(param_1,(ulonglong)param_2,param_3,pbVar4);
  if (iVar1 == 0) {
    FUN_1800268a0(s_get_val_data___s_not_found_18004e6f8,param_3,pbVar3,pbVar4);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (longlong)(iVar1 + 4) + *(longlong *)(param_1 + 0x40);
  if (*(int *)(lVar2 + 4) == 0) {
    lVar2 = 0;
  }
  else if ((*(int *)(lVar2 + 4) == -0x80000000) && ((param_5 & 0x100) != 0)) {
    lVar2 = lVar2 + 0xc;
  }
  else {
    if ((param_4 != 0) && ((*(int *)(lVar2 + 0xc) != 0 && (*(int *)(lVar2 + 0xc) != param_4)))) {
      FUN_1800268a0(s_Value_<_s>_is_not_of_correct_typ_18004e6d0,param_3,pbVar3,pbVar4);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((*(uint *)(lVar2 + 4) & 0x80000000) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x40) + 0x1004 + (longlong)*(int *)(lVar2 + 8);
    }
    else {
      lVar2 = lVar2 + 8;
    }
  }
  return lVar2;
}




uint * FUN_180029410(longlong param_1,uint *param_2,uint param_3,byte *param_4,uint param_5,
                    uint param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint local_64;
  uint local_60;
  uint local_58;
  uint *local_48;
  uint local_38;
  
  local_60 = FUN_180029240(param_1,param_3,param_4,param_6);
  if (local_60 == 0xffffffff) {
    local_48 = (uint *)0x0;
  }
  else if ((param_2 == (uint *)0x0) || ((int)local_60 <= (int)*param_2)) {
    uVar11 = (ulonglong)param_5;
    psVar6 = (short *)FUN_1800292e0(param_1,param_3,param_4,param_5,param_6);
    local_48 = param_2;
    if ((param_2 == (uint *)0x0) &&
       (local_48 = (uint *)calloc((longlong)(int)local_60 * 4 + 4,1), local_48 == (uint *)0x0)) {
      perror(s_malloc_failure_18004e6c0);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *local_48 = local_60;
    if ((int)local_60 < 0x3fd1) {
      if (((local_60 != 0) && (local_48 != (uint *)0x0)) && (psVar6 != (short *)0x0)) {
        puVar10 = local_48 + 1;
        for (lVar7 = (longlong)(int)local_60; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(char *)puVar10 = (char)*psVar6;
          psVar6 = (short *)((longlong)psVar6 + 1);
          puVar10 = (uint *)((longlong)puVar10 + 1);
        }
      }
    }
    else {
      if (*psVar6 != 0x6264) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      sVar1 = psVar6[1];
      iVar2 = *(int *)(psVar6 + 2);
      FUN_1800268a0(s_get_val2buf__Long_value__parts___18004e690,(ulonglong)(uint)(int)sVar1,
                    (ulonglong)(iVar2 + 0x1004U),uVar11);
      local_58 = 0;
      for (local_64 = 0; (int)local_64 < (int)sVar1; local_64 = local_64 + 1) {
        iVar3 = FUN_180026d50((byte *)(*(longlong *)(param_1 + 0x40) +
                                       (longlong)(int)(iVar2 + 0x1004U) +
                                      (longlong)(int)(local_64 << 2)));
        uVar4 = iVar3 + 0x1000;
        iVar3 = FUN_180026d50((byte *)((longlong)(int)uVar4 + *(longlong *)(param_1 + 0x40)));
        uVar5 = 0xfffffff8 - iVar3;
        local_38 = uVar5;
        if ((int)local_60 < (int)uVar5) {
          local_38 = local_60;
        }
        FUN_1800268a0(s_get_val2buf__Datablock__d_offset_18004e658,(ulonglong)local_64,
                      (ulonglong)uVar4,(ulonglong)uVar5);
        FUN_1800268a0(s___Point____x__restlen____x__copy_18004e508,(ulonglong)local_58,
                      (ulonglong)local_60,(ulonglong)local_38);
        puVar8 = (undefined1 *)(*(longlong *)(param_1 + 0x40) + 4 + (longlong)(int)uVar4);
        puVar9 = (undefined1 *)((longlong)local_48 + (longlong)(int)local_58 + 4);
        for (lVar7 = (longlong)(int)local_38; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        local_58 = local_58 + local_38;
        local_60 = local_60 - local_38;
      }
    }
  }
  else {
    local_48 = (uint *)0x0;
  }
  return local_48;
}




void * FUN_180029710(longlong param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int local_28;
  int local_24;
  byte local_20;
  int local_1c;
  
  local_1c = 0;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 2) {
    uVar1 = (uint)*(byte *)(param_1 + local_24) + (uint)*(byte *)(param_1 + (local_24 + 1)) * 0x100;
    if (uVar1 < 0x80) {
      local_1c = local_1c + 1;
    }
    else if (uVar1 < 0x800) {
      local_1c = local_1c + 2;
    }
    else {
      local_1c = local_1c + 3;
    }
  }
  pvVar2 = calloc((longlong)(local_1c + 1),1);
  if (pvVar2 == (void *)0x0) {
    perror(s_malloc_failure_18004e648);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_28 = 0;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 2) {
    uVar1 = (uint)*(byte *)(param_1 + local_24) + (uint)*(byte *)(param_1 + (local_24 + 1)) * 0x100;
    local_20 = (byte)uVar1;
    if (uVar1 < 0x80) {
      *(byte *)((longlong)pvVar2 + (longlong)local_28) = local_20;
      local_28 = local_28 + 1;
    }
    else if (uVar1 < 0x800) {
      *(byte *)((longlong)pvVar2 + (longlong)local_28) = (byte)(uVar1 >> 6) | 0xc0;
      *(byte *)((longlong)pvVar2 + (longlong)(local_28 + 1)) = local_20 & 0x3f | 0x80;
      local_28 = local_28 + 2;
    }
    else {
      *(byte *)((longlong)pvVar2 + (longlong)local_28) = (byte)(uVar1 >> 0xc) | 0xe0;
      *(byte *)((longlong)pvVar2 + (longlong)(local_28 + 1)) = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      *(byte *)((longlong)pvVar2 + (longlong)(local_28 + 2)) = local_20 & 0x3f | 0x80;
      local_28 = local_28 + 3;
    }
  }
  *(undefined1 *)((longlong)pvVar2 + (longlong)local_1c) = 0;
  return pvVar2;
}




byte * FUN_180029940(byte *param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  int local_res10;
  byte *local_28;
  byte *local_20;
  
  pbVar1 = (byte *)malloc((longlong)(param_2 * 2 + 2));
  local_28 = pbVar1;
  local_20 = param_1;
  for (local_res10 = param_2; 0 < local_res10; local_res10 = local_res10 + -1) {
    if ((*local_20 & 0x80) == 0) {
      *local_28 = *local_20;
      local_28[1] = 0;
      local_28 = local_28 + 2;
    }
    else if (((*local_20 & 0xe0) == 0xc0) && (1 < local_res10)) {
      *local_28 = (byte)((*local_20 & 0x1f) << 6) | local_20[1] & 0x3f;
      local_28[1] = (byte)((int)(*local_20 & 0x1f) >> 2);
      local_28 = local_28 + 2;
      local_20 = local_20 + 1;
      local_res10 = local_res10 + -1;
    }
    else if (2 < local_res10) {
      *local_28 = (byte)((local_20[1] & 0xf) << 6) | local_20[2] & 0x3f;
      local_28[1] = (byte)((*local_20 & 0xf) << 4) | (byte)((int)(local_20[1] & 0x3f) >> 2);
      local_28 = local_28 + 2;
      local_20 = local_20 + 2;
      local_res10 = local_res10 + -2;
    }
    local_20 = local_20 + 1;
  }
  *param_3 = (int)local_28 - (int)pbVar1;
  local_28[1] = 0;
  *local_28 = 0;
  return pbVar1;
}




int FUN_180029bb0(longlong param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (param_2 == 0) {
    for (; *(char *)(param_1 + local_18) != '\0'; local_18 = local_18 + 1) {
      if (*(char *)(param_1 + local_18) == '\\') {
        local_18 = local_18 + 1;
      }
      *(undefined1 *)(param_1 + local_14) = *(undefined1 *)(param_1 + local_18);
      local_14 = local_14 + 1;
    }
    *(undefined1 *)(param_1 + local_14) = 0;
    local_14 = local_14 + 1;
  }
  else {
    for (; (*(char *)(param_1 + local_18) != '\0' ||
           (*(char *)(param_1 + 1 + (longlong)local_18) != '\0')); local_18 = local_18 + 2) {
      if ((*(char *)(param_1 + local_18) == '\\') &&
         (*(char *)(param_1 + 1 + (longlong)local_18) == '\0')) {
        local_18 = local_18 + 2;
      }
      *(undefined1 *)(param_1 + local_14) = *(undefined1 *)(param_1 + local_18);
      *(undefined1 *)(param_1 + 1 + (longlong)local_14) =
           *(undefined1 *)(param_1 + 1 + (longlong)local_18);
      local_14 = local_14 + 2;
    }
    *(undefined1 *)(param_1 + local_14) = 0;
    *(undefined1 *)(param_1 + 1 + (longlong)local_14) = 0;
    local_14 = local_14 + 2;
  }
  return local_14;
}




void FUN_180029d20(longlong *param_1)

{
  if ((*(uint *)((longlong)param_1 + 0xc) & 2) != 0) {
    _close((int)param_1[1]);
  }
  if (*param_1 != 0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if (param_1[8] != 0) {
    free((void *)param_1[8]);
    param_1[8] = 0;
  }
  if (param_1 != (longlong *)0x0) {
    free(param_1);
  }
  return;
}




uint FUN_180029dc0(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < 0x7f; local_18 = local_18 + 1) {
    local_14 = local_14 ^ *(uint *)(*(longlong *)(param_1 + 0x40) + (longlong)local_18 * 4);
  }
  return local_14;
}




void FUN_180029e20(char *param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  FILE *pFVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [32];
  int local_c8;
  longlong *local_b8;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int *local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  int *local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  int *local_70;
  undefined2 *local_68;
  uint local_60;
  short *local_58;
  void *local_50;
  char *local_48;
  undefined1 local_40 [20];
  undefined4 local_2c;
  ulonglong local_10;
  
  local_10 = DAT_18004e038 ^ (ulonglong)auStack_e8;
  local_88 = (int *)0x0;
  local_a0 = (int *)0x0;
  local_58 = (short *)0x0;
  local_68 = (undefined2 *)0x0;
  local_90 = param_2 & 0x1000;
  local_7c = (uint)((param_2 & 0x2000) != 0);
  local_60 = local_7c;
  local_94 = param_2 & 0x4000;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    local_b8 = (longlong *)calloc(1,0x48);
    if (local_b8 == (longlong *)0x0) {
      perror(s_malloc_failure_18004e638);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar3 = FUN_1800269d0(param_1);
    *local_b8 = (longlong)pcVar3;
    *(undefined4 *)((longlong)local_b8 + 0xc) = 0;
    *(undefined4 *)(local_b8 + 5) = 0;
    local_b8[8] = 0;
    if ((param_2 & 1) == 0) {
      local_98 = 2;
    }
    else {
      local_98 = 0;
    }
    local_98 = local_98 | 0x8000;
    iVar1 = _open((char *)*local_b8,local_98);
    *(int *)(local_b8 + 1) = iVar1;
    if ((int)local_b8[1] < 0) {
      piVar4 = _errno();
      local_48 = strerror(*piVar4);
      pFVar5 = (FILE *)__acrt_iob_func(2);
      fprintf(pFVar5,s_openHive__s__in_fallback_RO_mode_18004e608,*local_b8,local_48);
      FUN_180029d20(local_b8);
    }
    else {
      iVar1 = FUN_1800269a0((int)local_b8[1],local_40);
      if (iVar1 != 0) {
        perror(s_stat___18004e2a4);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      *(undefined4 *)(local_b8 + 5) = local_2c;
      *(uint *)((longlong)local_b8 + 0xc) = param_2 | 2;
      local_50 = calloc((longlong)(int)local_b8[5],1);
      local_b8[8] = (longlong)local_50;
      if (local_50 == (void *)0x0) {
        perror(s_malloc_failure_18004e5f8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_ac = 0;
      do {
        uVar2 = (int)local_b8[5] - local_ac;
        pcVar3 = (char *)(ulonglong)uVar2;
        local_80 = _read((int)local_b8[1],(void *)((longlong)local_ac + local_b8[8]),uVar2);
        local_ac = local_ac + local_80;
        if (local_80 == 0) break;
      } while (local_ac < (int)local_b8[5]);
      if (local_ac == (int)local_b8[5]) {
        if (local_ac < (int)local_b8[5]) {
          pFVar5 = (FILE *)__acrt_iob_func(2);
          fprintf(pFVar5,s_Could_not_read_file__got__d_byte_18004e458,(ulonglong)local_80,
                  (ulonglong)*(uint *)(local_b8 + 5));
          FUN_180029d20(local_b8);
        }
        else {
          local_b0 = 0x1000;
          local_a0 = (int *)local_b8[8];
          if (*local_a0 == 0x66676572) {
            local_78 = FUN_180029dc0((longlong)local_b8);
            if (local_78 != local_a0[0x7f]) {
              pFVar5 = (FILE *)__acrt_iob_func(2);
              local_c8 = local_a0[0x7f];
              param_4 = (ulonglong)local_78;
              pcVar3 = param_1;
              fprintf(pFVar5,s_openHive__s___WARNING__REGF_head_18004e540);
            }
            *(int *)((longlong)local_b8 + 0x2c) = local_a0[9] + 0x1000;
            if (local_94 != 0) {
              FUN_1800268a0(s_Hive_<_s>_name__from_header___<_18004e4e8,param_1,pcVar3,param_4);
              for (local_70 = local_a0 + 0xc;
                  ((char)*local_70 != '\0' && (local_70 < local_a0 + 0x1c));
                  local_70 = (int *)((longlong)local_70 + 2)) {
                putchar((int)(char)*local_70);
              }
              FUN_1800268a0(s_>_ROOT_KEY_at_offset__0x_06x___18004e438,
                            (ulonglong)*(uint *)((longlong)local_b8 + 0x2c),pcVar3,param_4);
            }
            local_58 = (short *)(local_b8[8] + 4 + (longlong)*(int *)((longlong)local_b8 + 0x2c));
            if (*local_58 == 0x6b6e) {
              local_68 = (undefined2 *)(local_b8[8] + 0x1004 + (longlong)*(int *)(local_58 + 0xe));
              *(undefined2 *)(local_b8 + 7) = *local_68;
              if ((short)local_b8[7] == 0x6972) {
                pFVar5 = (FILE *)__acrt_iob_func(2);
                fprintf(pFVar5,s_openHive__DEBUG__BIG_ROOT__18004e418);
                local_68 = (undefined2 *)(local_b8[8] + 0x1004 + (longlong)*(int *)(local_68 + 2));
                *(undefined2 *)(local_b8 + 7) = *local_68;
              }
              if ((((short)local_b8[7] != 0x666c) && ((short)local_b8[7] != 0x686c)) &&
                 ((short)local_b8[7] != 0x696c)) {
                *(undefined2 *)(local_b8 + 7) = 0x666c;
              }
              if (local_94 != 0) {
                param_4 = (ulonglong)(uint)((int)(short)local_b8[7] >> 8);
                pcVar3 = (char *)(ulonglong)((int)(short)local_b8[7] & 0xff);
                FUN_1800268a0(s_Subkey_indexing_type_is___04x_<__18004e358,
                              (ulonglong)(uint)(int)(short)local_b8[7],pcVar3,param_4);
              }
            }
            else {
              pFVar5 = (FILE *)__acrt_iob_func(2);
              fprintf(pFVar5,s_openHive__WARNING__ROOT_key_does_18004e490);
            }
            for (; local_b0 < local_a0[10] + 0x1000U; local_b0 = local_b0 + local_88[2]) {
              local_88 = (int *)((ulonglong)local_b0 + local_b8[8]);
              if (*local_88 != 0x6e696268) {
                if (local_94 != 0) {
                  FUN_1800268a0(s_Page_at_0x_x_is_not__hbin___assu_18004e3d0,(ulonglong)local_b0,
                                pcVar3,param_4);
                }
                break;
              }
              *(int *)((longlong)local_b8 + 0x14) = *(int *)((longlong)local_b8 + 0x14) + 1;
              if (local_90 != 0) {
                param_4 = (ulonglong)(uint)local_88[2];
                pcVar3 = (char *)(ulonglong)(uint)local_88[1];
                FUN_1800268a0(s________Page_at_0x_0x_ofs_self_0x_18004e380,(ulonglong)local_b0,
                              pcVar3,param_4);
              }
              if (local_88[2] == 0) {
                pFVar5 = (FILE *)__acrt_iob_func(2);
                fprintf(pFVar5,s_openHive__ERROR__Page_at_0x_x_ha_18004e300,(ulonglong)local_b0);
                goto LAB_18002a6d0;
              }
              for (local_a8 = local_b0 + 0x20;
                  (local_a8 - local_b0 < (uint)local_88[2] && ((int)local_a8 < (int)local_b8[5]));
                  local_a8 = local_a8 + uVar2) {
                pcVar3 = (char *)(ulonglong)local_60;
                uVar2 = FUN_180028160((longlong)local_b8,(ulonglong)local_a8,(ulonglong)pcVar3,
                                      param_4);
              }
            }
            *(int *)((longlong)local_b8 + 0x34) = local_a0[10] + 0x1000;
            *(uint *)(local_b8 + 6) = local_b0 - local_88[2];
            if (local_90 != 0) {
              FUN_1800268a0(s_Last_HBIN_at_offset___0x_x_18004e2d8,
                            (ulonglong)*(uint *)(local_b8 + 6),pcVar3,param_4);
              FUN_1800268a0(s_First_non_HBIN_page_offset__0x_x_18004e2b0,
                            (ulonglong)*(uint *)((longlong)local_b8 + 0x34),pcVar3,param_4);
              FUN_1800268a0(s_hdr_>unknown4__version_____0x_x_18004e238,(ulonglong)(uint)local_a0[6]
                            ,pcVar3,param_4);
            }
            if ((local_94 != 0) || (local_90 != 0)) {
              FUN_1800268a0(s_File_size__d___x__bytes__contain_18004e1f8,
                            (ulonglong)*(uint *)(local_b8 + 5),(ulonglong)*(uint *)(local_b8 + 5),
                            (ulonglong)*(uint *)((longlong)local_b8 + 0x14));
              local_c8 = *(int *)((longlong)local_b8 + 0x24);
              FUN_1800268a0(s_Used_for_data___d__d_blocks_byte_18004e260,
                            (ulonglong)*(uint *)(local_b8 + 3),(ulonglong)*(uint *)(local_b8 + 4),
                            (ulonglong)*(uint *)((longlong)local_b8 + 0x1c));
            }
            *(undefined4 *)(local_b8 + 2) = 0;
            uVar6 = 0;
            pcVar3 = &DAT_18004e1ec;
            iVar1 = FUN_180028890((longlong)local_b8,0,&DAT_18004e1ec,(byte *)0x0);
            if (iVar1 == 0) {
              uVar6 = 0;
              pcVar3 = s__ControlSet_18004e1e0;
              iVar1 = FUN_180028890((longlong)local_b8,0,(byte *)s__ControlSet_18004e1e0,(byte *)0x0
                                   );
              if (iVar1 == 0) {
                uVar6 = 0;
                pcVar3 = s__Policy_18004e1d8;
                iVar1 = FUN_180028890((longlong)local_b8,0,(byte *)s__Policy_18004e1d8,(byte *)0x0);
                if (iVar1 == 0) {
                  uVar6 = 0;
                  pcVar3 = s__Microsoft_18004e1c8;
                  iVar1 = FUN_180028890((longlong)local_b8,0,(byte *)s__Microsoft_18004e1c8,
                                        (byte *)0x0);
                  if (iVar1 != 0) {
                    *(undefined4 *)(local_b8 + 2) = 4;
                  }
                }
                else {
                  *(undefined4 *)(local_b8 + 2) = 3;
                }
              }
              else {
                *(undefined4 *)(local_b8 + 2) = 2;
              }
            }
            else {
              *(undefined4 *)(local_b8 + 2) = 1;
            }
            if (local_90 != 0) {
              FUN_1800268a0(s_Type_of_hive_guessed_to_be___d_18004e1a8,
                            (ulonglong)*(uint *)(local_b8 + 2),pcVar3,uVar6);
            }
          }
          else {
            pFVar5 = (FILE *)__acrt_iob_func(2);
            fprintf(pFVar5,s_openHive__s___File_does_not_seem_18004e598,param_1);
          }
        }
      }
      else {
        perror(s_openHive____read_error__18004e5d8);
        FUN_180029d20(local_b8);
      }
    }
  }
LAB_18002a6d0:
  __security_check_cookie(local_10 ^ (ulonglong)auStack_e8);
  return;
}




void FUN_18002a6f0(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))(*param_1);
    *param_1 = 0;
  }
  return;
}




undefined4 * FUN_18002a740(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_18002a7a0();
  *param_1 = uVar1;
  return param_1;
}




void FUN_18002a770(int *param_1)

{
  if (*param_1 != 0) {
    FUN_180003060();
  }
  return;
}




undefined4 FUN_18002a7a0(void)

{
  HRESULT HVar1;
  undefined4 local_14;
  
  local_14 = 0;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar1) {
    HVar1 = CoInitializeSecurity
                      ((PSECURITY_DESCRIPTOR)0x0,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0,2
                       ,3,(void *)0x0,0,(void *)0x0);
    if ((HVar1 < 0) && (HVar1 != -0x7ffefee7)) {
      FUN_180003060();
    }
    else {
      local_14 = 1;
    }
  }
  return local_14;
}




int FUN_18002a840(undefined8 param_1,longlong *param_2,uint param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  int local_18;
  
  local_18 = -0x7ffefee1;
  if (param_2 != (longlong *)0x0) {
    DVar1 = GetTickCount();
    while ((local_18 = (**(code **)(*param_2 + 0x18))(param_2), local_18 < 0 &&
           (DVar2 = GetTickCount(), DVar2 - DVar1 <= param_3))) {
      Sleep(10);
    }
  }
  return local_18;
}




undefined4 FUN_18002a8d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_34;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  code *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_34 = 0;
  local_30 = (longlong *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_180011d00(&local_28,param_2);
    iVar1 = FUN_18002b7a0(param_2,&local_30);
    if (iVar1 == 0) {
      FUN_180011d00(&local_20,local_30);
      local_18 = *(code **)(*local_30 + 0x28);
      iVar1 = (*local_18)(local_30,param_3);
      if (iVar1 == 0) {
        local_34 = 1;
        FUN_18002a6f0(&local_20);
        FUN_18002a6f0(&local_28);
      }
      else {
        FUN_18002a6f0(&local_20);
        FUN_18002a6f0(&local_28);
      }
    }
    else {
      FUN_18002a6f0(&local_28);
    }
  }
  return local_34;
}




undefined4 FUN_18002a9d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_44;
  longlong *local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  code *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_44 = 0;
  local_30 = (undefined8 *)0x0;
  local_40 = (longlong *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_180011d00(&local_38,param_2);
    iVar1 = FUN_18002b7e0(param_2,&local_30);
    if (iVar1 == 0) {
      FUN_180011d00(&local_28,local_30);
      iVar1 = FUN_18002b820(local_30,&local_40);
      if (iVar1 == 0) {
        FUN_180011d00(&local_20,local_40);
        local_18 = *(code **)(*local_40 + 0x18);
        iVar1 = (*local_18)(local_40,param_3);
        if (iVar1 == 0) {
          local_44 = 1;
          FUN_18002a6f0(&local_20);
          FUN_18002a6f0(&local_28);
          FUN_18002a6f0(&local_38);
        }
        else {
          FUN_18002a6f0(&local_20);
          FUN_18002a6f0(&local_28);
          FUN_18002a6f0(&local_38);
        }
      }
      else {
        FUN_18002a6f0(&local_28);
        FUN_18002a6f0(&local_38);
      }
    }
    else {
      FUN_18002a6f0(&local_38);
    }
  }
  return local_44;
}




undefined4 FUN_18002ab40(undefined8 param_1,undefined8 param_2)

{
  HRESULT HVar1;
  int iVar2;
  undefined4 local_44;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  code *local_20;
  code *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_44 = 0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_1800433f8,(LPUNKNOWN)0x0,0x14,(IID *)&DAT_18003c770,&local_38
                          );
  if (HVar1 == 0) {
    FUN_180011d00(&local_28,local_38);
    local_20 = *(code **)(*local_38 + 0x18);
    iVar2 = (*local_20)(local_38,0,&local_40);
    FUN_180011d00(&local_30,local_40);
    if (iVar2 == 0) {
      iVar2 = FUN_18002a840(param_1,local_40,60000);
      if (iVar2 == 0) {
        local_18 = *(code **)(*local_40 + 0x30);
        iVar2 = (*local_18)(local_40,1,param_2);
        if (iVar2 == 0) {
          local_44 = 1;
          FUN_18002a6f0(&local_30);
          FUN_18002a6f0(&local_28);
        }
        else {
          FUN_18002a6f0(&local_30);
          FUN_18002a6f0(&local_28);
        }
      }
      else {
        FUN_18002a6f0(&local_30);
        FUN_18002a6f0(&local_28);
      }
    }
    else {
      FUN_18002a6f0(&local_30);
      FUN_18002a6f0(&local_28);
    }
  }
  return local_44;
}




undefined4 FUN_18002acd0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_90 = 0;
  local_94 = -0x7fffbffc;
  local_88 = (longlong *)0x0;
  iVar1 = FUN_18002ab40(param_1,&local_88);
  if (iVar1 != 0) {
    FUN_180011d00(local_20,local_88);
    local_98 = 0;
    local_68 = (undefined8 *)0x0;
    while( true ) {
      local_50 = *(code **)(*local_88 + 0x18);
      iVar1 = (*local_50)(local_88,1,&local_68,&local_98);
      if (iVar1 != 0) break;
      local_80 = (longlong *)0x0;
      local_60 = (undefined8 *)0x0;
      iVar1 = FUN_18002a9d0(param_1,local_68,&local_80);
      if (iVar1 != 0) {
        FUN_180011d00(&local_28,local_80);
        while( true ) {
          local_48 = *(code **)(*local_80 + 0x18);
          iVar1 = (*local_48)(local_80,1,&local_60,&local_98);
          if (iVar1 != 0) break;
          local_78 = (longlong *)0x0;
          iVar1 = FUN_18002a8d0(param_1,local_60,&local_78);
          if (iVar1 != 0) {
            FUN_180011d00(&local_30,local_78);
            local_70 = (undefined8 *)0x0;
            while( true ) {
              local_40 = *(code **)(*local_78 + 0x18);
              iVar1 = (*local_40)(local_78,1,&local_70,&local_98);
              if (iVar1 != 0) break;
              FUN_180011d00(&local_38,local_70);
              local_58 = 0;
              local_94 = FUN_18002b860(local_70,&local_58);
              if (local_94 == 0) {
                local_90 = 1;
                FUN_1800119e0(param_2,&local_58);
              }
              FUN_18002a6f0(&local_38);
            }
            FUN_18002a6f0(&local_30);
          }
        }
        FUN_18002a6f0(&local_28);
      }
    }
    FUN_18002a6f0(local_20);
  }
  return local_90;
}




undefined4 FUN_18002af10(undefined8 param_1,int param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined4 local_18;
  longlong *local_10 [2];
  
  local_18 = 0;
  local_10[0] = (longlong *)0x0;
  if (((-1 < param_2) && (-1 < param_3)) &&
     (iVar1 = FUN_18002b5f0(param_1,param_2,param_3,local_10), iVar1 != 0)) {
    local_18 = FUN_18002afb0(param_1,local_10[0],param_4);
  }
  if (local_10[0] != (longlong *)0x0) {
    (**(code **)(*local_10[0] + 0x10))(local_10[0]);
  }
  return local_18;
}




undefined4 FUN_18002afb0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *local_48;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  longlong local_28;
  code *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_38 = 0;
  local_48 = (longlong *)0x0;
  if (((param_2 != (undefined8 *)0x0) &&
      (local_40 = FUN_18002b8a0(param_2,&local_48), -1 < local_40)) && (local_48 != (longlong *)0x0)
     ) {
    local_30 = 0;
    local_20 = *(code **)(*local_48 + 0x18);
    local_40 = (*local_20)(local_48,&local_30);
    if (-1 < local_40) {
      local_34 = 0xffffffff;
      local_18 = -1;
      local_28 = -1;
      local_3c = 0;
      iVar1 = FUN_18002b4b0(param_1,param_2,&local_34,&local_18,&local_28,&local_3c);
      if ((iVar1 != 0) && (0 < (int)local_3c)) {
        local_10 = (ulonglong)(int)local_3c;
        *param_3 = local_28 - local_30 / local_10;
        if (0 < *param_3) {
          local_38 = 1;
        }
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))(local_48);
  }
  return local_38;
}




void FUN_18002b130(undefined8 param_1,wchar_t *param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5,uint *param_6)

{
  BOOL BVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 *puVar4;
  undefined1 auStackY_378 [32];
  DWORD local_338 [2];
  HANDLE local_330;
  undefined4 local_328;
  longlong local_320;
  longlong local_318;
  ulonglong local_310;
  wchar_t *local_308;
  wchar_t *local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  undefined1 local_2e8 [8];
  longlong local_2e0;
  longlong local_2d8;
  undefined4 local_258;
  undefined1 local_254 [16];
  uint local_244;
  undefined1 local_240 [4];
  undefined4 local_23c;
  wchar_t wStack_22a;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStackY_378;
  local_328 = 0;
  if (param_2 != (wchar_t *)0x0) {
    pwVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    FUN_180018dc0(local_228,param_2);
    local_308 = local_228;
    local_320 = -1;
    lVar2 = local_320;
    do {
      local_320 = lVar2;
      lVar2 = local_320 + 1;
    } while (local_308[lVar2] != L'\0');
    pwVar3 = local_228 + local_320;
    local_320 = lVar2;
    if (*pwVar3 == L'\\') {
      local_300 = local_228;
      local_318 = -1;
      do {
        local_318 = local_318 + 1;
      } while (local_300[local_318] != L'\0');
      local_310 = local_318 * 2 - 2;
      if (0x207 < local_310) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_228 + local_310) = 0;
    }
    local_330 = CreateFileW(local_228,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_330 == (HANDLE)0xffffffffffffffff) {
      local_330 = CreateFileW(local_228,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    }
    if (local_330 != (HANDLE)0xffffffffffffffff) {
      puVar4 = local_2e8;
      for (lVar2 = 0x90; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_338[0] = 0;
      BVar1 = DeviceIoControl(local_330,0x70048,(LPVOID)0x0,0,local_2e8,0x90,local_338,
                              (LPOVERLAPPED)0x0);
      if (BVar1 != 0) {
        local_258 = 0;
        puVar4 = local_254;
        for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        BVar1 = DeviceIoControl(local_330,0x70000,(LPVOID)0x0,0,&local_258,0x18,local_338,
                                (LPOVERLAPPED)0x0);
        if (BVar1 != 0) {
          puVar4 = local_240;
          for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          BVar1 = DeviceIoControl(local_330,0x2d1080,(LPVOID)0x0,0,local_240,0xc,local_338,
                                  (LPOVERLAPPED)0x0);
          if ((BVar1 != 0) && (local_244 != 0)) {
            *param_6 = local_244;
            *param_3 = local_23c;
            local_2f8 = (ulonglong)local_244;
            *param_4 = local_2e0 / (longlong)local_2f8;
            local_2f0 = (ulonglong)local_244;
            *param_5 = local_2d8 / (longlong)local_2f0;
            local_328 = 1;
          }
        }
      }
      CloseHandle(local_330);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_378);
  return;
}




undefined4
FUN_18002b4b0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4,
             longlong *param_5,uint *param_6)

{
  int iVar1;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong *local_28;
  LPVOID local_20;
  code *local_18;
  
  local_30 = 0;
  if (param_2 != (undefined8 *)0x0) {
    local_28 = (longlong *)0x0;
    local_2c = FUN_18002b8e0(param_2,&local_28);
    if (local_28 != (longlong *)0x0) {
      local_20 = (LPVOID)0x0;
      local_34 = 0;
      local_18 = *(code **)(*local_28 + 0x18);
      local_2c = (*local_18)(local_28,&local_20,&local_34);
      if (local_20 != (LPVOID)0x0) {
        for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
          iVar1 = FUN_18002b130(param_1,*(wchar_t **)((longlong)local_20 + (ulonglong)local_38 * 8),
                                param_3,param_4,param_5,param_6);
          if (iVar1 != 0) {
            local_30 = 1;
            break;
          }
        }
        CoTaskMemFree(local_20);
      }
      (**(code **)(*local_28 + 0x10))(local_28);
    }
  }
  return local_30;
}




undefined4 FUN_18002b5f0(undefined8 param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  uint local_48 [2];
  longlong local_40;
  undefined8 local_38 [3];
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_54 = 0;
  if ((-1 < param_2) && (-1 < param_3)) {
    FUN_180011b90(local_38);
    iVar2 = FUN_18002acd0(param_1,local_38);
    if (iVar2 == 0) {
      FUN_180011b60(local_38);
    }
    else {
      FUN_180011820(local_38,&local_50);
      while( true ) {
        plVar3 = FUN_1800124b0(local_38,local_20 + 2);
        bVar1 = FID_conflict_operator__(&local_50,plVar3);
        if (!bVar1) break;
        local_58 = -1;
        local_40 = -1;
        local_20[0] = -1;
        local_48[0] = 0;
        puVar4 = (undefined8 *)FUN_180011700(&local_50);
        iVar2 = FUN_18002b4b0(param_1,(undefined8 *)*puVar4,&local_58,&local_40,local_20,local_48);
        if (((iVar2 != 0) && (local_58 == param_2)) && (local_40 == param_3)) {
          puVar4 = (undefined8 *)FUN_180011700(&local_50);
          *param_4 = *puVar4;
          (**(code **)(*(longlong *)*param_4 + 8))(*param_4);
          local_54 = 1;
          break;
        }
        FUN_180011720(&local_50);
      }
      FUN_18002b920(param_1,local_38);
      FUN_180011b60(local_38);
    }
  }
  return local_54;
}




void FUN_18002b7a0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,&DAT_180043418,param_2);
  return;
}




void FUN_18002b7e0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,&DAT_1800433d8,param_2);
  return;
}




void FUN_18002b820(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,&DAT_1800433e8,param_2);
  return;
}




void FUN_18002b860(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,&DAT_180043408,param_2);
  return;
}




void FUN_18002b8a0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,&DAT_180043428,param_2);
  return;
}




void FUN_18002b8e0(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)*param_1)(param_1,&DAT_1800433c8,param_2);
  return;
}




undefined8 FUN_18002b920(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18 [3];
  
  FUN_180011820(param_2,&local_28);
  while( true ) {
    plVar2 = FUN_1800124b0(param_2,local_18);
    bVar1 = FID_conflict_operator__(&local_28,plVar2);
    if (!bVar1) break;
    puVar3 = (undefined8 *)FUN_180011700(&local_28);
    local_20 = (longlong *)*puVar3;
    (**(code **)(*local_20 + 0x10))(local_20);
    FUN_180011720(&local_28);
  }
  return 1;
}




void FUN_18002b9a0(longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  
  uVar16 = 0;
  if (7 < param_4) {
    puVar15 = param_3;
    do {
      uVar16 = uVar16 + 8;
      *(ulonglong *)((param_1 - (longlong)param_3) + (longlong)puVar15) =
           *(ulonglong *)((param_2 - (longlong)param_3) + (longlong)puVar15) ^ *puVar15;
      puVar15 = puVar15 + 1;
    } while ((ulonglong)((8 - (longlong)param_3) + (longlong)puVar15) <= param_4);
  }
  uVar13 = param_4 - uVar16;
  if (uVar16 < param_4) {
    if (0x3f < uVar13) {
      puVar15 = (ulonglong *)((param_4 - 1) + param_1);
      if ((((longlong)param_3 + (param_4 - 1) < uVar16 + param_1) ||
          (puVar15 < (ulonglong *)(uVar16 + (longlong)param_3))) &&
         ((param_2 + -1 + param_4 < uVar16 + param_1 || (puVar15 < (ulonglong *)(uVar16 + param_2)))
         )) {
        lVar11 = param_2 - (longlong)param_3;
        lVar14 = param_1 - (longlong)param_3;
        puVar15 = (ulonglong *)(uVar16 + (longlong)param_3);
        do {
          uVar3 = puVar15[1];
          uVar16 = uVar16 + 0x40;
          uVar4 = ((ulonglong *)((longlong)puVar15 + lVar11))[1];
          puVar1 = (ulonglong *)(lVar11 + 0x10 + (longlong)puVar15);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = puVar15 + 8;
          uVar7 = puVar15[2];
          uVar8 = puVar15[3];
          *(ulonglong *)((longlong)puVar15 + lVar14) =
               *(ulonglong *)((longlong)puVar15 + lVar11) ^ *puVar15;
          ((ulonglong *)((longlong)puVar15 + lVar14))[1] = uVar4 ^ uVar3;
          uVar3 = puVar15[4];
          uVar4 = puVar15[5];
          puVar2 = (ulonglong *)(lVar11 + -0x20 + (longlong)puVar1);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (ulonglong *)(lVar14 + -0x30 + (longlong)puVar1);
          *puVar2 = uVar5 ^ uVar7;
          puVar2[1] = uVar6 ^ uVar8;
          uVar5 = puVar15[6];
          uVar6 = puVar15[7];
          puVar15 = (ulonglong *)(lVar11 + -0x10 + (longlong)puVar1);
          uVar7 = *puVar15;
          uVar8 = puVar15[1];
          puVar15 = (ulonglong *)(lVar14 + -0x20 + (longlong)puVar1);
          *puVar15 = uVar9 ^ uVar3;
          puVar15[1] = uVar10 ^ uVar4;
          puVar15 = (ulonglong *)(lVar14 + -0x10 + (longlong)puVar1);
          *puVar15 = uVar7 ^ uVar5;
          puVar15[1] = uVar8 ^ uVar6;
          puVar15 = puVar1;
        } while (uVar16 < param_4 - ((uint)uVar13 & 0x3f));
      }
    }
    if (uVar16 < param_4) {
      pbVar12 = (byte *)(uVar16 + (longlong)param_3);
      lVar11 = param_4 - uVar16;
      do {
        pbVar12[param_1 - (longlong)param_3] = pbVar12[param_2 - (longlong)param_3] ^ *pbVar12;
        pbVar12 = pbVar12 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  return;
}




void FUN_18002bb00(void *param_1)

{
  memset(param_1,0,0xb0);
  return;
}




undefined8 FUN_18002bb10(longlong param_1,int param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar2 = FUN_18002c4f0(param_2,param_4);
  if ((ppuVar2 == (undefined **)0x0) || (((ulonglong)ppuVar2[1] & 0x1f) != 0x10)) {
    uVar3 = 0xfffffff3;
  }
  else {
    FUN_18002c590((longlong *)(param_1 + 0x48));
    uVar3 = FUN_18002c600((longlong *)(param_1 + 0x48),(longlong)ppuVar2);
    if ((int)uVar3 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
      if ((lVar1 == 0) ||
         (((*(uint *)(lVar1 + 8) >> 0x19 & 1) == 0 &&
          ((*(uint *)(lVar1 + 8) >> 2 & 0x3c0) != param_4)))) {
        uVar3 = 0xffff9f00;
      }
      else {
        *(uint *)(param_1 + 0x50) = param_4;
        *(undefined4 *)(param_1 + 0x54) = 1;
        uVar3 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(lVar1 + 8) >> 0x1a & 0x1f] + 0x40))
                          (*(undefined8 *)(param_1 + 0x98),param_3,param_4);
      }
    }
  }
  return uVar3;
}




void FUN_18002bbe0(undefined1 *param_1)

{
  longlong lVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    FUN_18002c590((longlong *)(param_1 + 0x48));
    for (lVar1 = 0xb0; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}




void FUN_18002bc10(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined1 auStackY_78 [32];
  ulonglong local_48;
  ulonglong local_40 [3];
  
  local_40[2] = DAT_18004e038 ^ (ulonglong)auStackY_78;
  local_40[0] = 0;
  local_40[1] = 0;
  local_48 = 0;
  uVar1 = FUN_18002c740((longlong *)(param_1 + 0x48),(ulonglong *)(param_1 + 0x10),0x10,local_40,
                        &local_48);
  if ((int)uVar1 == 0) {
    FUN_18002b9a0(param_5,param_4,(ulonglong *)((longlong)local_40 + param_2),param_3);
    puVar3 = local_40;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (ulonglong *)((longlong)puVar3 + 1);
    }
  }
  else {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
    puVar3 = local_40;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (ulonglong *)((longlong)puVar3 + 1);
    }
  }
  __security_check_cookie(local_40[2] ^ (ulonglong)auStackY_78);
  return;
}




undefined8 FUN_18002bcd0(ulonglong *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8 [4];
  
  if (((byte)(int)param_1[0x15] & 3) == 3) {
    bVar2 = 0;
    if (param_1[6] == 0) {
      if (1 < *(int *)((longlong)param_1 + 0x44) - 2U) {
        return 0xfffffff3;
      }
      param_1[4] = 0;
    }
    if (param_1[5] != 0) {
      bVar2 = 0x40;
    }
    uVar3 = 0;
    *(byte *)param_1 = (byte)*param_1 | bVar2;
    bVar2 = ((char)param_1[6] - 2U & 0x3e) << 2 | (byte)*param_1;
    *(byte *)param_1 = bVar2;
    *(byte *)param_1 = (char)param_1[8] - 1U | bVar2;
    uVar4 = param_1[4];
    if ((int)param_1[8] != 0) {
      do {
        bVar2 = (char)uVar3 + 1;
        *(char *)((longlong)param_1 + (0xf - uVar3)) = (char)uVar4;
        uVar4 = uVar4 >> 8;
        uVar3 = (ulonglong)bVar2;
      } while ((uint)bVar2 < (uint)param_1[8]);
    }
    if (uVar4 != 0) {
      *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 0x10;
      return 0xfffffff3;
    }
    uVar1 = FUN_18002c740((longlong *)(param_1 + 9),param_1,0,param_1,local_res8);
    if ((int)uVar1 != 0) {
      *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 0x10;
      return uVar1;
    }
  }
  return 0;
}




undefined8 FUN_18002bdb0(ulonglong *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  
  if (param_4 - 7 < 7) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(uint *)(param_1 + 8) = 0xf - ((uint)param_4 & 0xff);
    param_1[2] = 0;
    param_1[3] = 0;
    *(char *)(param_1 + 2) = (char)param_1[8] + -1;
    memcpy((void *)((longlong)param_1 + 0x11),param_3,param_4);
    memset((void *)(param_4 + 0x11 + (longlong)param_1),0,(ulonglong)(uint)param_1[8]);
    *(undefined1 *)((longlong)param_1 + 0x1f) = 1;
    memcpy((void *)((longlong)param_1 + 1),param_3,param_4);
    *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 1;
    uVar1 = FUN_18002bcd0(param_1);
    return uVar1;
  }
  return 0xfffffff3;
}




void FUN_18002be70(longlong param_1,ulonglong *param_2,ulonglong param_3,void *param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong _Size;
  ulonglong *puVar7;
  undefined1 auStackY_88 [32];
  ulonglong local_58;
  ulonglong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_18004e038 ^ (ulonglong)auStackY_88;
  if (((*(byte *)(param_1 + 0xa8) & 0x10) == 0) &&
     (((*(longlong *)(param_1 + 0x30) == 0 ||
       (*(longlong *)(param_1 + 0x38) + param_3 <= *(ulonglong *)(param_1 + 0x20))) &&
      (param_3 <= param_5)))) {
    *param_6 = param_3;
    if (param_3 != 0) {
      do {
        uVar6 = (ulonglong)((uint)*(longlong *)(param_1 + 0x38) & 0xf);
        _Size = param_3;
        if (0x10 - uVar6 <= param_3) {
          _Size = 0x10 - uVar6;
        }
        *(ulonglong *)(param_1 + 0x38) = _Size + *(longlong *)(param_1 + 0x38);
        if ((*(int *)(param_1 + 0x44) - 1U & 0xfffffffd) == 0) {
          FUN_18002b9a0(param_1 + uVar6,param_1 + uVar6,param_2,_Size);
          if (((_Size + uVar6 == 0x10) ||
              (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x20))) &&
             (uVar3 = FUN_18002c740((longlong *)(param_1 + 0x48),(ulonglong *)param_1,0x10,
                                    (ulonglong *)param_1,&local_58), (int)uVar3 != 0)) {
LAB_18002c06a:
            *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
          }
          else {
            iVar2 = FUN_18002bc10(param_1,uVar6,_Size,(longlong)param_2,(longlong)param_4);
            if (iVar2 == 0) goto LAB_18002bf8f;
          }
          break;
        }
LAB_18002bf8f:
        if ((*(uint *)(param_1 + 0x44) & 0xfffffffd) == 0) {
          iVar2 = FUN_18002bc10(param_1,uVar6,_Size,(longlong)param_2,(longlong)local_50);
          if (iVar2 != 0) break;
          FUN_18002b9a0(param_1 + uVar6,param_1 + uVar6,local_50,_Size);
          memcpy(param_4,local_50,_Size);
          if (((_Size + uVar6 == 0x10) ||
              (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x20))) &&
             (uVar3 = FUN_18002c740((longlong *)(param_1 + 0x48),(ulonglong *)param_1,0x10,
                                    (ulonglong *)param_1,&local_58), (int)uVar3 != 0))
          goto LAB_18002c06a;
        }
        if (((_Size + uVar6 == 0x10) ||
            (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x20))) &&
           (uVar6 = 0, *(int *)(param_1 + 0x40) != 0)) {
          do {
            pcVar1 = (char *)((param_1 - uVar6) + 0x1f);
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 != '\0') break;
            bVar5 = (char)uVar6 + 1;
            uVar6 = (ulonglong)bVar5;
          } while ((uint)bVar5 < *(uint *)(param_1 + 0x40));
        }
        param_2 = (ulonglong *)((longlong)param_2 + _Size);
        param_4 = (void *)((longlong)param_4 + _Size);
        param_3 = param_3 - _Size;
      } while (param_3 != 0);
    }
    puVar7 = local_50;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (ulonglong *)((longlong)puVar7 + 1);
    }
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_88);
  return;
}




undefined8
FUN_18002c0b0(ulonglong *param_1,undefined8 param_2,ulonglong param_3,void *param_4,size_t param_5,
             ulonglong *param_6,ulonglong param_7,ulonglong *param_8,void *param_9,void *param_10,
             ulonglong param_11)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong local_28 [2];
  
  uVar2 = FUN_18002bdb0(param_1,param_2,param_4,param_5);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if ((((param_11 == 2) || (0x10 < param_11)) || ((param_11 & 1) != 0)) || (0xfeff < param_7)) {
    return 0xfffffff3;
  }
  *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 2;
  param_1[4] = param_3;
  param_1[5] = param_7;
  param_1[6] = param_11;
  param_1[7] = 0;
  uVar2 = FUN_18002bcd0(param_1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar4 = param_1[0x15];
  if ((uVar4 & 0x10) == 0) {
    if (param_7 != 0) {
      if ((uVar4 & 8) != 0) {
        return 0xfffffff3;
      }
      uVar5 = param_1[5];
      if ((uVar4 & 4) == 0) {
        if (uVar5 < param_7) {
          return 0xfffffff3;
        }
        *(byte *)param_1 = (byte)*param_1 ^ *(byte *)((longlong)param_1 + 0x29);
        *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) ^ (byte)uVar5;
        *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 4;
      }
      else if (uVar5 < param_1[7] + param_7) {
        return 0xfffffff3;
      }
      do {
        uVar5 = (ulonglong)((int)param_1[7] + 2U & 0xf);
        uVar4 = param_7;
        if (0x10 - uVar5 <= param_7) {
          uVar4 = 0x10 - uVar5;
        }
        puVar6 = param_6;
        FUN_18002b9a0(uVar5 + (longlong)param_1,uVar5 + (longlong)param_1,param_6,uVar4);
        uVar1 = param_1[7];
        param_7 = param_7 - uVar4;
        param_6 = (ulonglong *)((longlong)param_6 + uVar4);
        param_1[7] = uVar1 + uVar4;
        if (((uVar4 + uVar5 == 0x10) || (uVar1 + uVar4 == param_1[5])) &&
           (uVar2 = FUN_18002c740((longlong *)(param_1 + 9),param_1,puVar6,param_1,local_28),
           (int)uVar2 != 0)) {
          *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 0x10;
          return uVar2;
        }
      } while (param_7 != 0);
      if (param_1[7] == param_1[5]) {
        *(uint *)(param_1 + 0x15) = (uint)param_1[0x15] | 8;
        param_1[7] = 0;
      }
    }
    uVar2 = FUN_18002be70((longlong)param_1,param_8,param_3,param_9,param_3,local_28);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((param_1[0x15] & 0x10) != 0) {
      return 0xffffff92;
    }
    if (((param_1[5] == 0) || ((param_1[0x15] & 8) != 0)) &&
       ((param_1[4] == 0 || (param_1[7] == param_1[4])))) {
      uVar4 = 0;
      if ((int)param_1[8] != 0) {
        do {
          bVar3 = (char)uVar4 + 1;
          *(undefined1 *)((longlong)param_1 + (0x1f - uVar4)) = 0;
          uVar4 = (ulonglong)bVar3;
        } while ((uint)bVar3 < (uint)param_1[8]);
      }
      uVar2 = FUN_18002bc10((longlong)param_1,0,0x10,(longlong)param_1,(longlong)param_1);
      if ((int)uVar2 == 0) {
        if (param_10 != (void *)0x0) {
          memcpy(param_10,param_1,param_11);
        }
        *(undefined4 *)(param_1 + 0x15) = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        return 0;
      }
      return uVar2;
    }
  }
  return 0xfffffff3;
}




void FUN_18002c370(ulonglong *param_1,undefined8 param_2,ulonglong param_3,void *param_4,
                  size_t param_5,undefined8 param_6,ulonglong param_7,ulonglong *param_8,
                  undefined1 *param_9,longlong param_10,ulonglong param_11)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined1 auStackY_98 [32];
  byte local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_18004e038 ^ (ulonglong)auStackY_98;
  uVar1 = FUN_18002c0b0(param_1,param_6,param_3,param_4,param_5,(ulonglong *)param_6,param_7,param_8
                        ,param_9,local_38,param_11);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
    uVar4 = uVar2;
    if (param_11 != 0) {
      do {
        pbVar3 = local_38 + uVar2;
        uVar2 = uVar2 + 1;
        uVar4 = (ulonglong)((uint)uVar4 | (uint)(*pbVar3 ^ pbVar3[param_10 - (longlong)local_38]));
      } while (uVar2 < param_11);
    }
    if ((uVar4 != 0) && (param_3 != 0)) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *param_9 = 0;
        param_9 = param_9 + 1;
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_18002c480(ulonglong *param_1,undefined8 param_2,void *param_3,size_t param_4,
                  undefined8 param_5,ulonglong param_6,ulonglong *param_7,undefined1 *param_8,
                  longlong param_9,ulonglong param_10)

{
  FUN_18002c370(param_1,param_2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10);
  return;
}




undefined ** FUN_18002c4f0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar3 = &PTR_s_AES_128_ECB_18003f070;
  ppuVar4 = &PTR_PTR_s_AES_128_ECB_18003f9d8;
  do {
    uVar1 = *(uint *)(ppuVar3 + 1);
    if (*(int *)(&PTR_DAT_18003f950)[uVar1 >> 0x1a & 0x1f] == param_1) {
      uVar2 = uVar1 >> 2 & 0x3c0;
      if (ppuVar3 == (undefined **)0x0) {
        uVar2 = 0;
      }
      if ((uVar2 == param_2) && ((uVar1 & 0xf000) == 0x1000)) {
        return ppuVar3;
      }
    }
    ppuVar3 = (undefined **)ppuVar4[2];
    ppuVar4 = ppuVar4 + 2;
    if (ppuVar3 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}




void FUN_18002c590(longlong *param_1)

{
  undefined1 *_Memory;
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (longlong *)0x0) {
    _Memory = (undefined1 *)param_1[0xb];
    if (_Memory != (undefined1 *)0x0) {
      puVar2 = _Memory;
      for (lVar1 = 0x28; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      free(_Memory);
    }
    if (param_1[10] != 0) {
      (**(code **)((&PTR_DAT_18003f950)[*(uint *)(*param_1 + 8) >> 0x1a & 0x1f] + 0x58))();
    }
    for (lVar1 = 0x60; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)param_1 = 0;
      param_1 = (longlong *)((longlong)param_1 + 1);
    }
  }
  return;
}




undefined8 FUN_18002c600(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return 0xffff9f00;
  }
  memset(param_1,0,0x60);
  if (*(code **)((&PTR_DAT_18003f950)[*(uint *)(param_2 + 8) >> 0x1a & 0x1f] + 0x50) != (code *)0x0)
  {
    lVar1 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(param_2 + 8) >> 0x1a & 0x1f] + 0x50))();
    param_1[10] = lVar1;
    if (lVar1 == 0) {
      return 0xffff9e80;
    }
  }
  *param_1 = param_2;
  return 0;
}




undefined8 FUN_18002c680(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (((param_4 < 2) && (lVar1 = *param_1, lVar1 != 0)) &&
     (((*(uint *)(lVar1 + 8) >> 0x19 & 1) != 0 || ((*(uint *)(lVar1 + 8) >> 2 & 0x3c0) == param_3)))
     ) {
    *(uint *)(param_1 + 1) = param_3;
    *(uint *)((longlong)param_1 + 0xc) = param_4;
    if (param_4 != 1) {
      uVar3 = *(uint *)(lVar1 + 8) & 0xf000;
      if (((uVar3 - 0x3000 & 0xffffcfff) != 0) || (uVar3 == 0x6000)) {
        if (param_4 != 0) {
          return 0xffff9f00;
        }
                    /* WARNING: Could not emulate address calculation at 0x00018002c708 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(lVar1 + 8) >> 0x1a & 0x1f] + 0x48))
                          (param_1[10],param_2,param_3);
        return uVar2;
      }
    }
                    /* WARNING: Could not emulate address calculation at 0x00018002c72d */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(lVar1 + 8) >> 0x1a & 0x1f] + 0x40))
                      (param_1[10],param_2,param_3);
    return uVar2;
  }
  return 0xffff9f00;
}




undefined8
FUN_18002c740(longlong *param_1,ulonglong *param_2,undefined8 param_3,ulonglong *param_4,
             ulonglong *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  size_t sVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar12 = 0x10;
  if (*param_1 == 0) {
    return 0xffff9f00;
  }
  uVar2 = *(uint *)(*param_1 + 8);
  *param_5 = 0;
  uVar14 = CONCAT44(0,uVar2 & 0x1f);
  if ((uVar2 & 0x1f) == 0) {
    return 0xffff9c80;
  }
  uVar11 = uVar2 & 0xf000;
  if (uVar11 == 0x1000) {
    if (uVar14 != 0x10) {
      return 0xffff9d80;
    }
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    lVar13 = param_1[10];
    *param_5 = 0x10;
    uVar9 = (**(code **)((&PTR_DAT_18003f950)[uVar2 >> 0x1a & 0x1f] + 8))
                      (lVar13,uVar3,param_2,param_4);
    if ((int)uVar9 == 0) {
      return 0;
    }
    return uVar9;
  }
  if (uVar11 == 0x6000) {
    uVar9 = FUN_18002d390(param_1[10],param_2,0x10,param_4,0x10,param_5);
    return uVar9;
  }
  if (uVar11 == 0x9000) {
    uVar9 = FUN_18002be70(param_1[10],param_2,0x10,param_4,0x10,param_5);
    return uVar9;
  }
  if ((char)(uVar2 >> 0x10) == 'M') {
    piVar4 = (int *)param_1[10];
    *param_5 = 0x10;
    uVar9 = FUN_18002cc20(piVar4,0x10,param_2,(byte *)param_4);
    return uVar9;
  }
  if (param_2 == param_4) {
    if (param_1[6] != 0) {
      return 0xffff9f00;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10)) % auVar5,0) != 0) {
      return 0xffff9f00;
    }
  }
  if (uVar11 != 0x2000) {
    if (uVar11 == 0x3000) {
      uVar9 = (**(code **)((&PTR_DAT_18003f950)[uVar2 >> 0x1a & 0x1f] + 0x18))
                        (param_1[10],*(undefined4 *)((longlong)param_1 + 0xc),0x10,param_1 + 6,
                         param_1 + 7,param_2,param_4);
      iVar8 = (int)uVar9;
    }
    else if (uVar11 == 0x4000) {
      uVar9 = (**(code **)((&PTR_DAT_18003f950)[uVar2 >> 0x1a & 0x1f] + 0x20))
                        (param_1[10],0x10,param_1 + 6,param_1 + 7,param_2,param_4);
      iVar8 = (int)uVar9;
    }
    else if (uVar11 == 0x5000) {
      uVar9 = (**(code **)((&PTR_DAT_18003f950)[uVar2 >> 0x1a & 0x1f] + 0x28))
                        (param_1[10],0x10,param_1 + 6,param_1 + 7,param_1 + 4,param_2,param_4);
      iVar8 = (int)uVar9;
    }
    else if (uVar11 == 0xa000) {
      if (param_1[6] != 0) {
        return 0xffff9f80;
      }
      uVar9 = (**(code **)((&PTR_DAT_18003f950)[uVar2 >> 0x1a & 0x1f] + 0x30))
                        (param_1[10],*(undefined4 *)((longlong)param_1 + 0xc),0x10,param_1 + 7,
                         param_2,param_4);
      iVar8 = (int)uVar9;
    }
    else {
      if (uVar11 != 0x7000) {
        return 0xffff9f80;
      }
      uVar9 = (**(code **)((&PTR_DAT_18003f950)[uVar2 >> 0x1a & 0x1f] + 0x38))
                        (param_1[10],0x10,param_2,param_4);
      iVar8 = (int)uVar9;
    }
    if (iVar8 == 0) {
      *param_5 = 0x10;
      return 0;
    }
    return uVar9;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    if (param_1[2] != 0) {
      lVar13 = param_1[6];
      if (0xf < uVar14 - lVar13) goto LAB_18002ca06;
      if (param_1[2] != 0) goto LAB_18002c8df;
    }
    lVar13 = param_1[6];
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc) != 1) goto LAB_18002c8df;
    lVar13 = param_1[6];
  }
  if (0x10 < uVar14 - lVar13) {
LAB_18002ca06:
    uVar12 = param_2[1];
    puVar1 = (ulonglong *)(lVar13 + 0x20 + (longlong)param_1);
    *puVar1 = *param_2;
    puVar1[1] = uVar12;
    param_1[6] = param_1[6] + 0x10;
    return 0;
  }
LAB_18002c8df:
  lVar13 = param_1[6];
  if (lVar13 != 0) {
    sVar10 = uVar14 - lVar13;
    memcpy((void *)(lVar13 + 0x20 + (longlong)param_1),param_2,sVar10);
    uVar9 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(*param_1 + 8) >> 0x1a & 0x1f] + 0x10))
                      (param_1[10],*(undefined4 *)((longlong)param_1 + 0xc),uVar14,param_1 + 7,
                       param_1 + 4,param_4);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    *param_5 = *param_5 + uVar14;
    param_4 = (ulonglong *)((longlong)param_4 + uVar14);
    param_2 = (ulonglong *)((longlong)param_2 + sVar10);
    param_1[6] = 0;
    uVar12 = 0x10 - sVar10;
    if (uVar12 == 0) {
      return 0;
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar12;
  sVar10 = SUB168(auVar7 % auVar6,0);
  if (((sVar10 == 0) && (*(int *)((longlong)param_1 + 0xc) == SUB164(auVar7 % auVar6,0))) &&
     (param_1[2] != 0)) {
    sVar10 = uVar14;
  }
  memcpy(param_1 + 4,(void *)((longlong)param_2 + (uVar12 - sVar10)),sVar10);
  param_1[6] = param_1[6] + sVar10;
  lVar13 = uVar12 - sVar10;
  if (lVar13 != 0) {
    uVar9 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(*param_1 + 8) >> 0x1a & 0x1f] + 0x10))
                      (param_1[10],*(undefined4 *)((longlong)param_1 + 0xc),lVar13,param_1 + 7,
                       param_2,param_4);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    *param_5 = *param_5 + lVar13;
  }
  return 0;
}




void FUN_18002cba0(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0xd8) & 0xf;
  if (uVar1 == 0) {
    __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
    return;
  }
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_1a = 0;
  FUN_18002e880((uint *)(param_1 + 0x88),&local_28,(ulonglong)(0x10 - uVar1));
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}




undefined8 FUN_18002cc20(int *param_1,ulonglong param_2,void *param_3,byte *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1[0x3a] == 1) {
    param_1[0x3a] = 2;
    uVar2 = FUN_18002cba0((longlong)param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else if (param_1[0x3a] != 2) {
    return 0xffffffac;
  }
  *(ulonglong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + param_2;
  if (param_1[0x3b] == 0) {
    uVar2 = FUN_18002e4f0(param_1,param_2,(longlong)param_3,param_4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_18002e880((uint *)(param_1 + 0x22),param_4,param_2);
    iVar1 = (int)uVar2;
  }
  else {
    uVar2 = FUN_18002e880((uint *)(param_1 + 0x22),param_3,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_18002e4f0(param_1,param_2,(longlong)param_3,param_4);
    iVar1 = (int)uVar2;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_18002ccf0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte *pbVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar16 = param_2 - (longlong)param_3;
  lVar17 = param_1 - (longlong)param_3;
  uVar15 = 0;
  puVar11 = param_3;
  do {
    uVar15 = uVar15 + 8;
    *(ulonglong *)(lVar17 + (longlong)puVar11) =
         *(ulonglong *)(lVar16 + (longlong)puVar11) ^ *puVar11;
    puVar11 = puVar11 + 1;
  } while ((ulonglong)((8 - (longlong)param_3) + (longlong)puVar11) < 0x11);
  uVar14 = 0x10 - uVar15;
  if (uVar15 < 0x10) {
    if (0x3f < uVar14) {
      if ((((longlong)param_3 + 0xfU < uVar15 + param_1) ||
          ((ulonglong *)(param_1 + 0xf) < (ulonglong *)(uVar15 + (longlong)param_3))) &&
         ((param_2 + 0xfU < uVar15 + param_1 ||
          ((ulonglong *)(param_1 + 0xf) < (ulonglong *)(uVar15 + param_2))))) {
        puVar11 = (ulonglong *)(uVar15 + (longlong)param_3);
        do {
          uVar3 = puVar11[1];
          uVar15 = uVar15 + 0x40;
          uVar4 = ((ulonglong *)((longlong)puVar11 + lVar16))[1];
          puVar1 = (ulonglong *)(lVar16 + 0x10 + (longlong)puVar11);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = puVar11 + 8;
          uVar7 = puVar11[2];
          uVar8 = puVar11[3];
          *(ulonglong *)((longlong)puVar11 + lVar17) =
               *(ulonglong *)((longlong)puVar11 + lVar16) ^ *puVar11;
          ((ulonglong *)((longlong)puVar11 + lVar17))[1] = uVar4 ^ uVar3;
          uVar3 = puVar11[4];
          uVar4 = puVar11[5];
          puVar2 = (ulonglong *)(lVar16 + -0x20 + (longlong)puVar1);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (ulonglong *)(lVar17 + -0x30 + (longlong)puVar1);
          *puVar2 = uVar5 ^ uVar7;
          puVar2[1] = uVar6 ^ uVar8;
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          puVar11 = (ulonglong *)(lVar16 + -0x10 + (longlong)puVar1);
          uVar7 = *puVar11;
          uVar8 = puVar11[1];
          puVar11 = (ulonglong *)(lVar17 + -0x20 + (longlong)puVar1);
          *puVar11 = uVar9 ^ uVar3;
          puVar11[1] = uVar10 ^ uVar4;
          puVar11 = (ulonglong *)(lVar17 + -0x10 + (longlong)puVar1);
          *puVar11 = uVar7 ^ uVar5;
          puVar11[1] = uVar8 ^ uVar6;
          puVar11 = puVar1;
        } while (uVar15 < 0x10 - (ulonglong)((uint)uVar14 & 0x3f));
      }
    }
    if (uVar15 < 0x10) {
      pbVar12 = (byte *)(uVar15 + (longlong)param_3);
      lVar13 = 0x10 - uVar15;
      do {
        pbVar12[lVar17] = pbVar12[lVar16] ^ *pbVar12;
        pbVar12 = pbVar12 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return;
}




undefined8 FUN_18002ce60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  bool bVar7;
  undefined8 uVar8;
  undefined7 extraout_var;
  longlong lVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong local_res8;
  ulonglong local_28;
  longlong local_20;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  local_28 = 0;
  local_20 = 0;
  local_res8 = 0;
  uVar8 = FUN_18002c740(param_1,&local_28,param_3,&local_28,&local_res8);
  if ((int)uVar8 == 0) {
    iVar11 = 2;
    *(undefined1 *)((longlong)param_1 + 0x1a1) = 0;
    bVar7 = FUN_18002e960(2);
    if ((int)CONCAT71(extraout_var,bVar7) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x1a1) = 2;
    }
    param_1[0x1c] = local_28;
    param_1[0x1d] = local_20;
    if (*(char *)((longlong)param_1 + 0x1a1) != '\x02') {
      iVar14 = 4;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      do {
        puVar13 = (ulonglong *)(param_1 + ((longlong)iVar14 + 6) * 2);
        puVar10 = (ulonglong *)(param_1 + ((longlong)(iVar14 * 2) + 6) * 2);
        uVar12 = puVar10[1];
        uVar1 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28;
        uVar2 = uVar1 | (uVar12 & 0xff0000000000) >> 0x18;
        uVar3 = uVar2 | (uVar12 & 0xff00000000) >> 8;
        uVar4 = uVar3 | (uVar12 & 0xff000000) << 8;
        uVar5 = uVar4 | (uVar12 & 0xff0000) << 0x18;
        uVar6 = uVar5 | (uVar12 & 0xff00) << 0x28;
        puVar13[1] = (uVar12 << 0x38) >> 0x39 |
                     ((uVar6 | uVar12 << 0x38) >> 1 & 0xff000000000000) >> 0x28 |
                     (uVar6 & 0x1fe0000000000) >> 0x19 | (uVar5 & 0x1fe00000000) >> 9 |
                     ((uVar4 & 0x1fe000000) >> 1) << 8 | ((uVar3 & 0x1fe0000) >> 1) << 0x18 |
                     ((uVar2 & 0x1fe00) >> 1) << 0x28 | ((uVar1 & 0x1fe) >> 1) << 0x38;
        *(byte *)(puVar13 + 1) = *(char *)((longlong)puVar10 + 7) << 7 | (byte)uVar12 >> 1;
        uVar12 = *puVar10;
        uVar1 = uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28;
        uVar2 = uVar1 | (uVar12 & 0xff0000000000) >> 0x18;
        uVar3 = uVar2 | (uVar12 & 0xff00000000) >> 8;
        uVar4 = uVar3 | (uVar12 & 0xff000000) << 8;
        uVar5 = uVar4 | (uVar12 & 0xff0000) << 0x18;
        uVar6 = uVar5 | (uVar12 & 0xff00) << 0x28;
        *puVar13 = (uVar12 << 0x38) >> 0x39 |
                   ((uVar6 | uVar12 << 0x38) >> 1 & 0xff000000000000) >> 0x28 |
                   (uVar6 & 0x1fe0000000000) >> 0x19 | (uVar5 & 0x1fe00000000) >> 9 |
                   ((uVar4 & 0x1fe000000) >> 1) << 8 | ((uVar3 & 0x1fe0000) >> 1) << 0x18 |
                   ((uVar2 & 0x1fe00) >> 1) << 0x28 | ((uVar1 & 0x1fe) >> 1) << 0x38;
        iVar14 = iVar14 >> 1;
        *(byte *)puVar13 =
             -((*(byte *)((longlong)puVar10 + 0xf) & 1) != 0) & 0xe1U ^ (byte)uVar12 >> 1;
      } while (iVar14 != 0);
      iVar14 = 8;
      do {
        lVar9 = (longlong)iVar14;
        iVar14 = iVar14 >> 1;
        uVar12 = param_1[(lVar9 + 6) * 2];
        param_1[(lVar9 + 6) * 2] =
             uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
             (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
             (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 |
             uVar12 << 0x38;
        uVar12 = param_1[lVar9 * 2 + 0xd];
        param_1[lVar9 * 2 + 0xd] =
             uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
             (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
             (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 |
             uVar12 << 0x38;
      } while (iVar14 != 0);
      do {
        if (1 < iVar11) {
          puVar10 = (ulonglong *)(param_1 + 0xe);
          uVar12 = (ulonglong)(iVar11 - 1);
          do {
            FUN_18002ccf0((longlong)(puVar10 + (longlong)(iVar11 + 1) * 2 + -2),
                          (longlong)(param_1 + ((longlong)iVar11 + 6) * 2),puVar10);
            puVar10 = puVar10 + 2;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        iVar11 = iVar11 * 2;
      } while (iVar11 < 0x10);
    }
    uVar8 = 0;
  }
  return uVar8;
}




undefined8 FUN_18002d020(longlong *param_1,int param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_4;
  if (((((param_4 - 0x80 & 0xffffff3f) != 0) || (param_4 == 0x140)) ||
      (ppuVar2 = FUN_18002c4f0(param_2,param_4), ppuVar2 == (undefined **)0x0)) ||
     (((ulonglong)ppuVar2[1] & 0x1f) != 0x10)) {
    return 0xffffffec;
  }
  FUN_18002c590(param_1);
  uVar3 = FUN_18002c600(param_1,(longlong)ppuVar2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) &&
     (((*(uint *)(lVar1 + 8) >> 0x19 & 1) != 0 || ((*(uint *)(lVar1 + 8) >> 2 & 0x3c0) == param_4)))
     ) {
    *(uint *)(param_1 + 1) = param_4;
    *(undefined4 *)((longlong)param_1 + 0xc) = 1;
    uVar3 = (**(code **)((&PTR_DAT_18003f950)[*(uint *)(lVar1 + 8) >> 0x1a & 0x1f] + 0x40))
                      (param_1[10]);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_18002ce60(param_1,param_3,uVar4);
    return uVar3;
  }
  return 0xffff9f00;
}




void FUN_18002d110(longlong param_1,undefined1 *param_2,ulonglong *param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong local_28;
  ulonglong local_20;
  
  if (*(char *)(param_1 + 0x1a1) == '\0') {
    uVar4 = (ulonglong)((byte)param_2[0xf] & 0xf);
    lVar1 = param_1 + 0x60;
    uVar3 = *(ulonglong *)(param_1 + 0x68 + uVar4 * 0x10);
    uVar4 = *(ulonglong *)(lVar1 + uVar4 * 0x10);
    local_20 = uVar3 >> 4 | uVar4 << 0x3c;
    local_28 = (ulonglong)*(ushort *)(&DAT_18003e7f8 + (ulonglong)((uint)uVar3 & 0xf) * 2) << 0x30 ^
               uVar4 >> 4;
    FUN_18002ccf0((longlong)&local_28,(longlong)&local_28,
                  (ulonglong *)(((ulonglong)(byte)param_2[0xf] & 0xfffffffffffffff0) + lVar1));
    lVar6 = 0xe;
    do {
      bVar2 = param_2[lVar6];
      bVar5 = (byte)local_20;
      local_20 = local_28 << 0x3c | local_20 >> 4;
      local_28 = (ulonglong)*(ushort *)(&DAT_18003e7f8 + (ulonglong)(bVar5 & 0xf) * 2) << 0x30 ^
                 local_28 >> 4;
      FUN_18002ccf0((longlong)&local_28,(longlong)&local_28,
                    (ulonglong *)((ulonglong)(bVar2 & 0xf) * 0x10 + lVar1));
      bVar5 = (byte)local_20;
      local_20 = local_28 << 0x3c | local_20 >> 4;
      local_28 = (ulonglong)*(ushort *)(&DAT_18003e7f8 + (ulonglong)(bVar5 & 0xf) * 2) << 0x30 ^
                 local_28 >> 4;
      FUN_18002ccf0((longlong)&local_28,(longlong)&local_28,
                    (ulonglong *)(((ulonglong)bVar2 & 0xfffffffffffffff0) + lVar1));
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    *param_3 = local_28 >> 0x38 | (local_28 & 0xff000000000000) >> 0x28 |
               (local_28 & 0xff0000000000) >> 0x18 | (local_28 & 0xff00000000) >> 8 |
               (local_28 & 0xff000000) << 8 | (local_28 & 0xff0000) << 0x18 |
               (local_28 & 0xff00) << 0x28 | local_28 << 0x38;
    param_3[1] = local_20 >> 0x38 | (local_20 & 0xff000000000000) >> 0x28 |
                 (local_20 & 0xff0000000000) >> 0x18 | (local_20 & 0xff00000000) >> 8 |
                 (local_20 & 0xff000000) << 8 | (local_20 & 0xff0000) << 0x18 |
                 (local_20 & 0xff00) << 0x28 | local_20 << 0x38;
  }
  else if (*(char *)(param_1 + 0x1a1) == '\x02') {
    FUN_18002e9d0((undefined1 *)param_3,param_2,(undefined1 *)(param_1 + 0xe0));
    return;
  }
  return;
}




int FUN_18002d2c0(longlong param_1,undefined1 *param_2,longlong param_3,ulonglong param_4,
                 ulonglong *param_5,ulonglong *param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong local_res8;
  
  local_res8 = 0;
  uVar2 = FUN_18002c740((longlong *)param_1,(ulonglong *)(param_1 + 0x180),0x10,(ulonglong *)param_2
                        ,&local_res8);
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    lVar3 = param_3 + 400 + param_1;
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      FUN_18002b9a0(lVar3,lVar3,param_5,param_4);
    }
    FUN_18002b9a0((longlong)param_6,(longlong)(param_2 + param_3),param_5,param_4);
    if (*(char *)(param_1 + 0x1a0) == '\x01') {
      FUN_18002b9a0(lVar3,lVar3,param_6,param_4);
    }
    iVar1 = 0;
  }
  else {
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
  }
  return iVar1;
}




void FUN_18002d390(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
                  ulonglong param_5,ulonglong *param_6)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStackY_88 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_18004e038 ^ (ulonglong)auStackY_88;
  local_58 = 0;
  local_50 = 0;
  if (((param_3 <= param_5) && (*param_6 = param_3, param_3 != 0)) &&
     ((param_4 <= param_2 || (param_3 <= (ulonglong)((longlong)param_4 - (longlong)param_2))))) {
    uVar3 = *(ulonglong *)(param_1 + 0x160);
    if ((uVar3 <= uVar3 + param_3) && (uVar3 + param_3 < 0xfffffffe1)) {
      if ((uVar3 == 0) && ((*(byte *)(param_1 + 0x168) & 0xf) != 0)) {
        FUN_18002d110(param_1,(undefined1 *)(param_1 + 400),(ulonglong *)(param_1 + 400));
        uVar3 = *(ulonglong *)(param_1 + 0x160);
      }
      uVar6 = (uint)uVar3 & 0xf;
      if ((uVar3 & 0xf) != 0) {
        uVar2 = 0x10 - (ulonglong)uVar6;
        uVar3 = param_3;
        if (uVar2 <= param_3) {
          uVar3 = uVar2;
        }
        iVar1 = FUN_18002d2c0(param_1,(undefined1 *)&local_58,(ulonglong)uVar6,uVar3,param_2,param_4
                             );
        if (iVar1 != 0) goto LAB_18002d58a;
        if (uVar3 + uVar6 == 0x10) {
          FUN_18002d110(param_1,(undefined1 *)(param_1 + 400),(ulonglong *)(param_1 + 400));
        }
        param_3 = param_3 - uVar3;
        param_2 = (ulonglong *)((longlong)param_2 + uVar3);
        param_4 = (ulonglong *)((longlong)param_4 + uVar3);
        uVar3 = *(longlong *)(param_1 + 0x160) + uVar3;
      }
      *(ulonglong *)(param_1 + 0x160) = uVar3 + param_3;
      for (; 0xf < param_3; param_3 = param_3 - 0x10) {
        uVar6 = *(uint *)(param_1 + 0x18c);
        uVar6 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) +
                1;
        *(uint *)(param_1 + 0x18c) =
             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
        iVar1 = FUN_18002d2c0(param_1,(undefined1 *)&local_58,0,0x10,param_2,param_4);
        if (iVar1 != 0) goto LAB_18002d58a;
        FUN_18002d110(param_1,(undefined1 *)(param_1 + 400),(ulonglong *)(param_1 + 400));
        param_2 = param_2 + 2;
        param_4 = param_4 + 2;
      }
      if (param_3 != 0) {
        uVar6 = *(uint *)(param_1 + 0x18c);
        uVar6 = (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) +
                1;
        *(uint *)(param_1 + 0x18c) =
             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
        iVar1 = FUN_18002d2c0(param_1,(undefined1 *)&local_58,0,param_3,param_2,param_4);
        if (iVar1 != 0) goto LAB_18002d58a;
      }
      puVar5 = &local_58;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      }
    }
  }
LAB_18002d58a:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_88);
  return;
}




void * FUN_18002d5b0(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0x1a8);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x1a8);
  }
  return _Dst;
}




void FUN_18002d5f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    FUN_18002c590(param_1);
    plVar2 = param_1;
    for (lVar1 = 0x1a8; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)plVar2 = 0;
      plVar2 = (longlong *)((longlong)plVar2 + 1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002d621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




void * FUN_18002d630(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0xb0);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0xb0);
  }
  return _Dst;
}




void FUN_18002d670(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    FUN_18002c590((longlong *)(param_1 + 0x48));
    puVar2 = param_1;
    for (lVar1 = 0xb0; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002d6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




void * FUN_18002d740(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0x120);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memset(_Dst,0,0x120);
  return _Dst;
}




void FUN_18002d780(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x120; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002d7a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




void * FUN_18002d7d0(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0x240);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x240);
  }
  return _Dst;
}




void FUN_18002d810(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x120; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_1 + 0x120 != (undefined1 *)0x0) {
      puVar2 = param_1 + 0x120;
      for (lVar1 = 0x120; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00018002d84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_1);
    return;
  }
  return;
}




undefined8
FUN_18002d8a0(int *param_1,uint param_2,longlong param_3,ulonglong *param_4,uint *param_5,
             longlong param_6,byte *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 2) {
    uVar3 = *param_4;
    if (uVar3 < 0x10) {
      if (param_3 != 0) {
        lVar4 = param_6 - (longlong)param_7;
        if (param_2 == 0) {
          do {
            param_3 = param_3 + -1;
            if (uVar3 == 0) {
              FUN_1800331a0(param_1,1,param_5,param_5);
            }
            bVar1 = param_7[lVar4];
            *param_7 = bVar1 ^ *(byte *)(uVar3 + (longlong)param_5);
            param_7 = param_7 + 1;
            *(byte *)(uVar3 + (longlong)param_5) = bVar1;
            uVar3 = (ulonglong)((int)uVar3 + 1U & 0xf);
          } while (param_3 != 0);
        }
        else {
          do {
            param_3 = param_3 + -1;
            if (uVar3 == 0) {
              FUN_1800331a0(param_1,1,param_5,param_5);
            }
            bVar1 = param_7[lVar4] ^ *(byte *)(uVar3 + (longlong)param_5);
            *param_7 = bVar1;
            param_7 = param_7 + 1;
            *(byte *)(uVar3 + (longlong)param_5) = bVar1;
            uVar3 = (ulonglong)((int)uVar3 + 1U & 0xf);
          } while (param_3 != 0);
        }
      }
      *param_4 = uVar3;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffdc;
    }
    return uVar2;
  }
  return 0xffffffdc;
}




void * FUN_18002d9e0(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0x114);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memset(_Dst,0,0x114);
  return _Dst;
}




void FUN_18002da20(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x114; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002da49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




undefined8 FUN_18002db30(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  FUN_18002f640(param_1,param_2);
  lVar3 = 0;
  puVar2 = param_1 + 0x1f;
  do {
    uVar1 = param_1[lVar3];
    param_1[lVar3] = puVar2[-1];
    puVar2[-1] = uVar1;
    uVar1 = param_1[lVar3 + 1];
    param_1[lVar3 + 1] = *puVar2;
    lVar3 = lVar3 + 2;
    *puVar2 = uVar1;
    puVar2 = puVar2 + -2;
  } while (lVar3 < 0x10);
  return 0;
}




undefined8 FUN_18002db90(uint *param_1,uint *param_2)

{
  FUN_18002f640(param_1,param_2);
  return 0;
}




void * FUN_18002dd00(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0x80);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memset(_Dst,0,0x80);
  return _Dst;
}




void FUN_18002dd40(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x80; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002dd69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




void FUN_18002ddb0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x180; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002ddd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




ulonglong FUN_18002de40(int *param_1,ulonglong param_2,longlong param_3,byte *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_18002e4f0(param_1,param_2,param_3,param_4);
  uVar2 = uVar1 & 0xffffffff;
  if ((int)uVar1 == -0x51) {
    uVar2 = 0xffff9f00;
  }
  return uVar2;
}




undefined1 * FUN_18002de60(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)calloc(1,0x88);
  if (puVar1 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  puVar3 = puVar1;
  for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = puVar1 + 0x40;
  for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(puVar1 + 0x80) = 0x40;
  return puVar1;
}




void FUN_18002dec0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x88; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018002dee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




void FUN_18002df70(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
    for (lVar1 = 0x88; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_1 + 0x88 != (undefined1 *)0x0) {
      puVar2 = param_1 + 0x88;
      for (lVar1 = 0x50; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018002dfc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




void * FUN_18002dfd0(void)

{
  void *_Dst;
  
  _Dst = calloc(1,0x60);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x60);
  }
  return _Dst;
}




void FUN_18002e010(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_18002c590(param_1);
  plVar2 = param_1;
  for (lVar1 = 0x60; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018002e03b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}




undefined8 FUN_18002e050(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = FUN_18002c4f0(2,param_3);
  if ((ppuVar1 == (undefined **)0x0) || (((ulonglong)ppuVar1[1] & 0x1f) != 0x10)) {
    uVar2 = 0xffff9f00;
  }
  else {
    FUN_18002c590(param_1);
    uVar2 = FUN_18002c600(param_1,(longlong)ppuVar1);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_18002c680(param_1,param_2,param_3,1);
    }
  }
  return uVar2;
}




undefined8 FUN_18002e0e0(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = FUN_18002c4f0(2,param_3);
  if ((ppuVar1 == (undefined **)0x0) || (((ulonglong)ppuVar1[1] & 0x1f) != 0x10)) {
    uVar2 = 0xffff9f00;
  }
  else {
    FUN_18002c590(param_1);
    uVar2 = FUN_18002c600(param_1,(longlong)ppuVar1);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_18002c680(param_1,param_2,param_3,0);
    }
  }
  return uVar2;
}




void FUN_18002e170(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar7 = *param_1 + param_1[4];
  uVar13 = param_1[0xc] ^ uVar7;
  uVar14 = uVar13 << 0x10 | uVar13 >> 0x10;
  uVar13 = param_1[8] + uVar14;
  uVar1 = param_1[4] ^ uVar13;
  uVar2 = uVar1 << 0xc | uVar1 >> 0x14;
  uVar7 = uVar2 + uVar7;
  uVar14 = uVar14 ^ uVar7;
  uVar15 = uVar14 << 8 | uVar14 >> 0x18;
  uVar13 = uVar15 + uVar13;
  uVar2 = uVar2 ^ uVar13;
  uVar1 = param_1[1] + param_1[5];
  uVar3 = uVar2 << 7 | uVar2 >> 0x19;
  uVar2 = uVar1 ^ param_1[0xd];
  uVar16 = uVar2 << 0x10 | uVar2 >> 0x10;
  uVar2 = param_1[9] + uVar16;
  uVar14 = param_1[5] ^ uVar2;
  uVar5 = uVar14 << 0xc | uVar14 >> 0x14;
  uVar1 = uVar5 + uVar1;
  uVar14 = param_1[2] + param_1[6];
  uVar16 = uVar16 ^ uVar1;
  uVar8 = param_1[0xe] ^ uVar14;
  uVar17 = uVar16 << 8 | uVar16 >> 0x18;
  uVar9 = uVar8 << 0x10 | uVar8 >> 0x10;
  uVar2 = uVar2 + uVar17;
  uVar8 = param_1[10] + uVar9;
  uVar16 = param_1[6] ^ uVar8;
  uVar5 = uVar5 ^ uVar2;
  uVar16 = uVar16 << 0xc | uVar16 >> 0x14;
  uVar6 = uVar5 << 7 | uVar5 >> 0x19;
  uVar14 = uVar14 + uVar16;
  uVar9 = uVar9 ^ uVar14;
  uVar10 = uVar9 << 8 | uVar9 >> 0x18;
  uVar8 = uVar10 + uVar8;
  uVar16 = uVar8 ^ uVar16;
  uVar12 = uVar16 << 7 | uVar16 >> 0x19;
  uVar5 = param_1[3] + param_1[7] ^ param_1[0xf];
  uVar11 = uVar5 << 0x10 | uVar5 >> 0x10;
  uVar16 = param_1[0xb] + uVar11;
  uVar5 = uVar16 ^ param_1[7];
  uVar9 = uVar5 << 0xc | uVar5 >> 0x14;
  uVar5 = uVar9 + param_1[3] + param_1[7];
  param_1[3] = uVar5;
  uVar11 = uVar5 ^ uVar11;
  uVar11 = uVar11 << 8 | uVar11 >> 0x18;
  uVar16 = uVar11 + uVar16;
  uVar9 = uVar16 ^ uVar9;
  uVar4 = uVar9 << 7 | uVar9 >> 0x19;
  param_1[7] = uVar4;
  uVar7 = uVar6 + uVar7;
  uVar11 = uVar7 ^ uVar11;
  uVar9 = uVar11 << 0x10 | uVar11 >> 0x10;
  uVar8 = uVar9 + uVar8;
  uVar6 = uVar8 ^ uVar6;
  uVar11 = uVar6 << 0xc | uVar6 >> 0x14;
  uVar7 = uVar7 + uVar11;
  *param_1 = uVar7;
  uVar7 = uVar7 ^ uVar9;
  uVar7 = uVar7 << 8 | uVar7 >> 0x18;
  param_1[0xf] = uVar7;
  uVar7 = uVar7 + uVar8;
  param_1[10] = uVar7;
  uVar7 = uVar7 ^ uVar11;
  param_1[5] = uVar7 << 7 | uVar7 >> 0x19;
  uVar1 = uVar12 + uVar1;
  uVar15 = uVar1 ^ uVar15;
  uVar7 = uVar15 << 0x10 | uVar15 >> 0x10;
  uVar16 = uVar7 + uVar16;
  param_1[0xb] = uVar16;
  uVar16 = uVar16 ^ uVar12;
  uVar8 = uVar16 << 0xc | uVar16 >> 0x14;
  uVar1 = uVar1 + uVar8;
  uVar7 = uVar7 ^ uVar1;
  param_1[1] = uVar1;
  uVar7 = uVar7 << 8 | uVar7 >> 0x18;
  param_1[0xb] = param_1[0xb] + uVar7;
  uVar8 = uVar8 ^ param_1[0xb];
  param_1[6] = uVar8 << 7 | uVar8 >> 0x19;
  param_1[0xc] = uVar7;
  uVar14 = uVar14 + uVar4;
  param_1[2] = uVar14;
  uVar14 = uVar14 ^ uVar17;
  uVar7 = uVar14 << 0x10 | uVar14 >> 0x10;
  uVar13 = uVar13 + uVar7;
  param_1[8] = uVar13;
  uVar13 = uVar13 ^ uVar4;
  uVar13 = uVar13 << 0xc | uVar13 >> 0x14;
  param_1[2] = param_1[2] + uVar13;
  uVar7 = param_1[2] ^ uVar7;
  uVar7 = uVar7 << 8 | uVar7 >> 0x18;
  param_1[8] = param_1[8] + uVar7;
  param_1[0xd] = uVar7;
  uVar13 = param_1[8] ^ uVar13;
  param_1[7] = uVar13 << 7 | uVar13 >> 0x19;
  uVar5 = uVar5 + uVar3;
  uVar10 = uVar5 ^ uVar10;
  uVar7 = uVar10 << 0x10 | uVar10 >> 0x10;
  uVar2 = uVar2 + uVar7;
  param_1[9] = uVar2;
  uVar2 = uVar2 ^ uVar3;
  uVar13 = uVar2 << 0xc | uVar2 >> 0x14;
  uVar5 = uVar5 + uVar13;
  param_1[3] = uVar5;
  uVar5 = uVar5 ^ uVar7;
  uVar7 = uVar5 << 8 | uVar5 >> 0x18;
  param_1[9] = param_1[9] + uVar7;
  param_1[0xe] = uVar7;
  uVar13 = param_1[9] ^ uVar13;
  param_1[4] = uVar13 << 7 | uVar13 >> 0x19;
  return;
}




void FUN_18002e390(int *param_1,uint *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_18004e038 ^ (ulonglong)auStack_88;
  local_68 = *(undefined8 *)param_1;
  uStack_60 = *(undefined8 *)(param_1 + 2);
  local_58 = *(undefined8 *)(param_1 + 4);
  uStack_50 = *(undefined8 *)(param_1 + 6);
  lVar3 = 10;
  local_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 10);
  local_38 = *(undefined8 *)(param_1 + 0xc);
  uStack_30 = *(undefined8 *)(param_1 + 0xe);
  do {
    FUN_18002e170((uint *)&local_68);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if ((param_1 + 0xf < &local_68) || (uVar2 = 0, (int *)((longlong)&uStack_30 + 4U) < param_1)) {
    local_68 = CONCAT44(param_1[1] + local_68._4_4_,*param_1 + (uint)local_68);
    uStack_60 = CONCAT44(param_1[3] + uStack_60._4_4_,param_1[2] + (uint)uStack_60);
    local_58 = CONCAT44(param_1[5] + local_58._4_4_,param_1[4] + (uint)local_58);
    uStack_50 = CONCAT44(param_1[7] + uStack_50._4_4_,param_1[6] + (uint)uStack_50);
    local_48 = CONCAT44(param_1[9] + local_48._4_4_,param_1[8] + (uint)local_48);
    uStack_40 = CONCAT44(param_1[0xb] + uStack_40._4_4_,param_1[10] + (uint)uStack_40);
    local_38 = CONCAT44(param_1[0xd] + local_38._4_4_,param_1[0xc] + (uint)local_38);
    uStack_30 = CONCAT44(param_1[0xf] + uStack_30._4_4_,param_1[0xe] + (uint)uStack_30);
    uVar2 = 0x10;
  }
  if (uVar2 < 0x10) {
    do {
      piVar1 = (int *)((longlong)&local_68 + uVar2 * 4);
      *piVar1 = *piVar1 + param_1[uVar2];
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < 0x10);
  }
  *param_2 = (uint)local_68;
  param_2[1] = local_68._4_4_;
  param_2[2] = (uint)uStack_60;
  param_2[3] = uStack_60._4_4_;
  param_2[4] = (uint)local_58;
  param_2[5] = local_58._4_4_;
  param_2[6] = (uint)uStack_50;
  param_2[7] = uStack_50._4_4_;
  param_2[8] = (uint)local_48;
  param_2[9] = local_48._4_4_;
  param_2[10] = (uint)uStack_40;
  param_2[0xb] = uStack_40._4_4_;
  param_2[0xc] = (uint)local_38;
  param_2[0xd] = local_38._4_4_;
  param_2[0xe] = (uint)uStack_30;
  param_2[0xf] = uStack_30._4_4_;
  puVar4 = &local_68;
  for (lVar3 = 0x40; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined8 *)((longlong)puVar4 + 1);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_88);
  return;
}




undefined8 FUN_18002e4f0(int *param_1,ulonglong param_2,longlong param_3,byte *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (param_2 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    pbVar1 = param_4;
    do {
      if (0x3f < uVar2) break;
      lVar3 = lVar3 + 1;
      *pbVar1 = pbVar1[param_3 - (longlong)param_4] ^ *(byte *)((longlong)param_1 + uVar2 + 0x40);
      pbVar1 = pbVar1 + 1;
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
      uVar2 = *(ulonglong *)(param_1 + 0x20);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (0x3f < param_2) {
    uVar2 = param_2 >> 6;
    param_2 = param_2 + uVar2 * -0x40;
    pbVar1 = param_4 + lVar3;
    lVar3 = lVar3 + uVar2 * 0x40;
    do {
      FUN_18002e390(param_1,(uint *)(param_1 + 0x10));
      param_1[0xc] = param_1[0xc] + 1;
      FUN_18002b9a0((longlong)pbVar1,(longlong)(pbVar1 + (param_3 - (longlong)param_4)),
                    (ulonglong *)(param_1 + 0x10),0x40);
      pbVar1 = pbVar1 + 0x40;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_2 != 0) {
    FUN_18002e390(param_1,(uint *)(param_1 + 0x10));
    param_1[0xc] = param_1[0xc] + 1;
    FUN_18002b9a0((longlong)(param_4 + lVar3),lVar3 + param_3,(ulonglong *)(param_1 + 0x10),param_2)
    ;
    *(ulonglong *)(param_1 + 0x20) = param_2;
  }
  return 0;
}




void FUN_18002e610(uint *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar17 = param_1[1];
  uVar14 = (ulonglong)uVar17;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar8 = (ulonglong)param_1[8];
  uVar6 = (ulonglong)param_1[9];
  uVar9 = (ulonglong)param_1[10];
  uVar7 = (ulonglong)param_1[0xb];
  uVar16 = param_1[0xc];
  uVar4 = (ulonglong)((uVar2 >> 2) + uVar2);
  if (param_2 != 0) {
    uVar5 = (ulonglong)((uVar1 >> 2) + uVar1);
    uVar13 = (ulonglong)((uVar17 >> 2) + uVar17);
    puVar3 = (uint *)(param_3 + 4);
    do {
      uVar8 = (ulonglong)puVar3[-1] + (uVar8 & 0xffffffff);
      uVar15 = (uVar6 & 0xffffffff) + (ulonglong)*puVar3 + (uVar8 >> 0x20);
      uVar8 = uVar8 & 0xffffffff;
      uVar12 = (uVar9 & 0xffffffff) + (ulonglong)puVar3[1] + (uVar15 >> 0x20);
      uVar15 = uVar15 & 0xffffffff;
      uVar6 = (uVar12 >> 0x20) + (ulonglong)puVar3[2] + (uVar7 & 0xffffffff);
      uVar12 = uVar12 & 0xffffffff;
      uVar7 = uVar6 & 0xffffffff;
      uVar16 = (int)(uVar6 >> 0x20) + 1 + uVar16;
      uVar17 = *param_1;
      uVar10 = uVar17 * uVar8 + uVar13 * uVar7 + uVar5 * uVar12 + uVar4 * uVar15;
      uVar11 = uVar14 * uVar8 + uVar16 * uVar13 + uVar7 * uVar5 + uVar17 * uVar15 + uVar12 * uVar4 +
               (uVar10 >> 0x20);
      uVar9 = uVar1 * uVar8 + uVar14 * uVar15 + uVar16 * uVar5 + uVar17 * uVar12 +
              (uVar6 & 0xffffffff) * uVar4 + (uVar11 >> 0x20);
      uVar7 = uVar2 * uVar8 + uVar1 * uVar15 + uVar14 * uVar12 + uVar17 * uVar7 + uVar16 * uVar4 +
              (uVar9 >> 0x20);
      uVar17 = uVar16 * *param_1 + (int)(uVar7 >> 0x20);
      uVar8 = (ulonglong)(uVar17 >> 2) + ((ulonglong)uVar17 & 0xfffffffc) + (uVar10 & 0xffffffff);
      uVar6 = (uVar8 >> 0x20) + (uVar11 & 0xffffffff);
      uVar9 = (uVar6 >> 0x20) + (uVar9 & 0xffffffff);
      uVar7 = (uVar9 >> 0x20) + (uVar7 & 0xffffffff);
      puVar3 = puVar3 + 4;
      uVar16 = (int)(uVar7 >> 0x20) + (uVar17 & 3);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_1[8] = (uint)uVar8;
  param_1[9] = (uint)uVar6;
  param_1[10] = (uint)uVar9;
  param_1[0xb] = (uint)uVar7;
  param_1[0xc] = uVar16;
  return;
}




undefined8 FUN_18002e880(uint *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  void *_Dst;
  ulonglong _Size;
  
  _Size = 0;
  if ((param_3 != 0) && (lVar1 = *(longlong *)(param_1 + 0x12), lVar1 != 0)) {
    _Size = 0x10 - lVar1;
    _Dst = (void *)((longlong)param_1 + lVar1 + 0x34);
    if (param_3 < _Size) {
      memcpy(_Dst,param_2,param_3);
      *(size_t *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + param_3;
      return 0;
    }
    memcpy(_Dst,param_2,_Size);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    FUN_18002e610(param_1,1,(longlong)(param_1 + 0xd));
    param_3 = param_3 - _Size;
  }
  if (0xf < param_3) {
    FUN_18002e610(param_1,param_3 >> 4,_Size + (longlong)param_2);
    _Size = _Size + (param_3 >> 4) * 0x10;
    param_3 = (size_t)((uint)param_3 & 0xf);
  }
  if (param_3 != 0) {
    *(size_t *)(param_1 + 0x12) = param_3;
    memcpy(param_1 + 0xd,(void *)(_Size + (longlong)param_2),param_3);
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00018002e985) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18002e960(uint param_1)

{
  undefined4 *puVar1;
  
  if (DAT_18004fe4c == 0) {
    DAT_18004fe4c = 1;
    puVar1 = (undefined4 *)cpuid_Version_info(1);
    _DAT_18004fe60 = puVar1[3];
    _DAT_18004fe58 = *puVar1;
    _DAT_18004fe5c = puVar1[1];
    _DAT_18004fe64 = puVar1[2];
    DAT_18004fe50 = _DAT_18004fe60;
    return (param_1 & _DAT_18004fe60) != 0;
  }
  return (param_1 & DAT_18004fe50) != 0;
}




/* WARNING: Removing unreachable block (ram,0x00018002ebca) */
/* WARNING: Removing unreachable block (ram,0x00018002eb69) */
/* WARNING: Removing unreachable block (ram,0x00018002eb3d) */
/* WARNING: Removing unreachable block (ram,0x00018002eb17) */

void FUN_18002e9d0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = CONCAT17(param_2[8],
                      CONCAT16(param_2[9],
                               CONCAT15(param_2[10],
                                        CONCAT14(param_2[0xb],
                                                 CONCAT13(param_2[0xc],
                                                          CONCAT12(param_2[0xd],
                                                                   CONCAT11(param_2[0xe],
                                                                            param_2[0xf])))))));
  local_28 = CONCAT17(param_3[8],
                      CONCAT16(param_3[9],
                               CONCAT15(param_3[10],
                                        CONCAT14(param_3[0xb],
                                                 CONCAT13(param_3[0xc],
                                                          CONCAT12(param_3[0xd],
                                                                   CONCAT11(param_3[0xe],
                                                                            param_3[0xf])))))));
  uStack_30 = CONCAT17(*param_2,CONCAT16(param_2[1],
                                         CONCAT15(param_2[2],
                                                  CONCAT14(param_2[3],
                                                           CONCAT13(param_2[4],
                                                                    CONCAT12(param_2[5],
                                                                             CONCAT11(param_2[6],
                                                                                      param_2[7]))))
                                                 )));
  uStack_20 = CONCAT17(*param_3,CONCAT16(param_3[1],
                                         CONCAT15(param_3[2],
                                                  CONCAT14(param_3[3],
                                                           CONCAT13(param_3[4],
                                                                    CONCAT12(param_3[5],
                                                                             CONCAT11(param_3[6],
                                                                                      param_3[7]))))
                                                 )));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_30;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_28;
  auVar19 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar19 = auVar19 ^ auVar21 << uVar1;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_38;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uStack_20;
  auVar4 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar4 = auVar4 ^ auVar6 << uVar1;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uStack_30;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uStack_20;
  auVar21 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar7 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar21 = auVar21 ^ auVar8 << uVar1;
    }
  }
  auVar21 = auVar21 ^ (auVar4 ^ auVar19) >> 0x40;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar4 ^ auVar19,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_38;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_28;
  auVar19 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar2 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar19 = auVar19 ^ auVar3 << uVar1;
    }
  }
  auVar19 = auVar19 ^ auVar9 << 0x40;
  uVar13 = auVar19._0_8_;
  uVar15 = auVar19._8_8_;
  auVar17._0_8_ = uVar13 << 1;
  auVar17._8_8_ = uVar15 << 1;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar15 >> 0x3f;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar13 >> 0x3f;
  auVar17 = auVar19 << 0x40 | auVar17;
  lVar12 = auVar17._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = lVar12 << 0x3e ^ lVar12 << 0x39;
  auVar17 = auVar10 << 0x40 ^ auVar17;
  uVar13 = auVar17._0_8_;
  uVar15 = auVar17._8_8_;
  auVar18._0_8_ = uVar13 >> 2;
  auVar18._8_8_ = uVar15 >> 2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar15 << 0x3f ^ uVar15 << 0x3e ^ uVar15 << 0x39;
  auVar14._0_8_ = uVar13 >> 1;
  auVar14._8_8_ = uVar15 >> 1;
  auVar16._0_8_ = uVar13 >> 7;
  auVar16._8_8_ = uVar15 >> 7;
  uVar13 = auVar21._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar13 >> 0x3f;
  auVar22._0_8_ = uVar13 << 1;
  auVar22._8_8_ = auVar21._8_8_ << 1;
  auVar19 = auVar23 ^ auVar18 ^ auVar14 ^ auVar16 ^ auVar17 ^ (auVar11 << 0x40 | auVar22 | auVar20);
  *param_1 = auVar19[0xf];
  param_1[1] = auVar19[0xe];
  param_1[2] = auVar19[0xd];
  param_1[3] = auVar19[0xc];
  param_1[4] = auVar19[0xb];
  param_1[5] = auVar19[10];
  param_1[6] = auVar19[9];
  param_1[7] = auVar19[8];
  param_1[8] = auVar19[7];
  param_1[9] = auVar19[6];
  param_1[10] = auVar19[5];
  param_1[0xb] = auVar19[4];
  param_1[0xc] = auVar19[3];
  param_1[0xd] = auVar19[2];
  param_1[0xe] = auVar19[1];
  param_1[0xf] = auVar19[0];
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018002ef0c) */
/* WARNING: Removing unreachable block (ram,0x00018002eefb) */
/* WARNING: Removing unreachable block (ram,0x00018002eef2) */
/* WARNING: Removing unreachable block (ram,0x00018002eed2) */
/* WARNING: Removing unreachable block (ram,0x00018002eec1) */
/* WARNING: Removing unreachable block (ram,0x00018002eeb8) */
/* WARNING: Removing unreachable block (ram,0x00018002ee98) */
/* WARNING: Removing unreachable block (ram,0x00018002ee87) */
/* WARNING: Removing unreachable block (ram,0x00018002ee7e) */
/* WARNING: Removing unreachable block (ram,0x00018002ee61) */
/* WARNING: Removing unreachable block (ram,0x00018002ee50) */
/* WARNING: Removing unreachable block (ram,0x00018002ee47) */
/* WARNING: Removing unreachable block (ram,0x00018002ee2a) */
/* WARNING: Removing unreachable block (ram,0x00018002ee19) */
/* WARNING: Removing unreachable block (ram,0x00018002ee10) */
/* WARNING: Removing unreachable block (ram,0x00018002edf3) */
/* WARNING: Removing unreachable block (ram,0x00018002ede2) */
/* WARNING: Removing unreachable block (ram,0x00018002edd9) */
/* WARNING: Removing unreachable block (ram,0x00018002edbc) */
/* WARNING: Removing unreachable block (ram,0x00018002edab) */
/* WARNING: Removing unreachable block (ram,0x00018002eda2) */
/* WARNING: Removing unreachable block (ram,0x00018002ed85) */
/* WARNING: Removing unreachable block (ram,0x00018002ed74) */
/* WARNING: Removing unreachable block (ram,0x00018002ed6b) */
/* WARNING: Removing unreachable block (ram,0x00018002ed4e) */
/* WARNING: Removing unreachable block (ram,0x00018002ed3d) */
/* WARNING: Removing unreachable block (ram,0x00018002ed34) */
/* WARNING: Removing unreachable block (ram,0x00018002ed17) */
/* WARNING: Removing unreachable block (ram,0x00018002ed0e) */
/* WARNING: Removing unreachable block (ram,0x00018002ed05) */

void FUN_18002ecf0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar21;
  undefined1 auVar20 [16];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  auVar20 = *param_2;
  uVar22 = auVar20._0_8_;
  auVar19 = aeskeygenassist(auVar20,1);
  uVar21 = auVar19._12_4_;
  auVar37._4_4_ = uVar21;
  auVar37._0_4_ = uVar21;
  auVar37._8_4_ = uVar21;
  auVar37._12_4_ = uVar21;
  *param_1 = auVar20;
  auVar23._0_8_ = uVar22 << 0x20;
  auVar23._8_8_ = auVar20._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar37 ^ auVar20 ^ auVar23 ^ auVar19 << 0x40 ^ auVar9 << 0x40;
  auVar20 = aeskeygenassist(auVar19,2);
  uVar21 = auVar20._12_4_;
  auVar24._4_4_ = uVar21;
  auVar24._0_4_ = uVar21;
  auVar24._8_4_ = uVar21;
  auVar24._12_4_ = uVar21;
  param_1[1] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar38._0_8_ = uVar22 << 0x20;
  auVar38._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar20 << 0x40 ^ auVar38 ^ auVar24 ^ auVar19 ^ auVar10 << 0x40;
  auVar20 = aeskeygenassist(auVar19,4);
  uVar21 = auVar20._12_4_;
  auVar25._4_4_ = uVar21;
  auVar25._0_4_ = uVar21;
  auVar25._8_4_ = uVar21;
  auVar25._12_4_ = uVar21;
  param_1[2] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar33._0_8_ = uVar22 << 0x20;
  auVar33._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar1 << 0x40 ^ auVar33 ^ auVar25 ^ auVar19 ^ auVar11 << 0x40;
  auVar20 = aeskeygenassist(auVar19,8);
  uVar21 = auVar20._12_4_;
  auVar26._4_4_ = uVar21;
  auVar26._0_4_ = uVar21;
  auVar26._8_4_ = uVar21;
  auVar26._12_4_ = uVar21;
  param_1[3] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar39._0_8_ = uVar22 << 0x20;
  auVar39._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar2 << 0x40 ^ auVar39 ^ auVar26 ^ auVar19 ^ auVar12 << 0x40;
  auVar20 = aeskeygenassist(auVar19,0x10);
  uVar21 = auVar20._12_4_;
  auVar27._4_4_ = uVar21;
  auVar27._0_4_ = uVar21;
  auVar27._8_4_ = uVar21;
  auVar27._12_4_ = uVar21;
  param_1[4] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar34._0_8_ = uVar22 << 0x20;
  auVar34._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar3 << 0x40 ^ auVar34 ^ auVar27 ^ auVar19 ^ auVar13 << 0x40;
  auVar20 = aeskeygenassist(auVar19,0x20);
  uVar21 = auVar20._12_4_;
  auVar28._4_4_ = uVar21;
  auVar28._0_4_ = uVar21;
  auVar28._8_4_ = uVar21;
  auVar28._12_4_ = uVar21;
  param_1[5] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar40._0_8_ = uVar22 << 0x20;
  auVar40._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar4 << 0x40 ^ auVar40 ^ auVar28 ^ auVar19 ^ auVar14 << 0x40;
  auVar20 = aeskeygenassist(auVar19,0x40);
  uVar21 = auVar20._12_4_;
  auVar29._4_4_ = uVar21;
  auVar29._0_4_ = uVar21;
  auVar29._8_4_ = uVar21;
  auVar29._12_4_ = uVar21;
  param_1[6] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar35._0_8_ = uVar22 << 0x20;
  auVar35._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar5 << 0x40 ^ auVar35 ^ auVar29 ^ auVar19 ^ auVar15 << 0x40;
  auVar20 = aeskeygenassist(auVar19,0x80);
  uVar21 = auVar20._12_4_;
  auVar30._4_4_ = uVar21;
  auVar30._0_4_ = uVar21;
  auVar30._8_4_ = uVar21;
  auVar30._12_4_ = uVar21;
  param_1[7] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar41._0_8_ = uVar22 << 0x20;
  auVar41._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar6 << 0x40 ^ auVar41 ^ auVar30 ^ auVar19 ^ auVar16 << 0x40;
  auVar20 = aeskeygenassist(auVar19,0x1b);
  uVar21 = auVar20._12_4_;
  auVar31._4_4_ = uVar21;
  auVar31._0_4_ = uVar21;
  auVar31._8_4_ = uVar21;
  auVar31._12_4_ = uVar21;
  param_1[8] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar36._0_8_ = uVar22 << 0x20;
  auVar36._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  auVar19 = auVar7 << 0x40 ^ auVar36 ^ auVar31 ^ auVar19 ^ auVar17 << 0x40;
  auVar20 = aeskeygenassist(auVar19,0x36);
  uVar21 = auVar20._12_4_;
  auVar32._4_4_ = uVar21;
  auVar32._0_4_ = uVar21;
  auVar32._8_4_ = uVar21;
  auVar32._12_4_ = uVar21;
  param_1[9] = auVar19;
  uVar22 = auVar19._0_8_;
  auVar42._0_8_ = uVar22 << 0x20;
  auVar42._8_8_ = auVar19._8_8_ << 0x20 | uVar22 >> 0x20;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar22 >> 0x20) << 0x20 | uVar22 & 0xffffffff;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = (uVar22 & 0xffffffff) << 0x20;
  param_1[10] = auVar8 << 0x40 ^ auVar42 ^ auVar32 ^ auVar19 ^ auVar18 << 0x40;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018002f199) */
/* WARNING: Removing unreachable block (ram,0x00018002f187) */
/* WARNING: Removing unreachable block (ram,0x00018002f17e) */
/* WARNING: Removing unreachable block (ram,0x00018002f16e) */
/* WARNING: Removing unreachable block (ram,0x00018002f14d) */
/* WARNING: Removing unreachable block (ram,0x00018002f134) */
/* WARNING: Removing unreachable block (ram,0x00018002f12b) */
/* WARNING: Removing unreachable block (ram,0x00018002f122) */
/* WARNING: Removing unreachable block (ram,0x00018002f0fa) */
/* WARNING: Removing unreachable block (ram,0x00018002f0e1) */
/* WARNING: Removing unreachable block (ram,0x00018002f0d8) */
/* WARNING: Removing unreachable block (ram,0x00018002f0cf) */
/* WARNING: Removing unreachable block (ram,0x00018002f0a7) */
/* WARNING: Removing unreachable block (ram,0x00018002f091) */
/* WARNING: Removing unreachable block (ram,0x00018002f088) */
/* WARNING: Removing unreachable block (ram,0x00018002f07b) */
/* WARNING: Removing unreachable block (ram,0x00018002f056) */
/* WARNING: Removing unreachable block (ram,0x00018002f044) */
/* WARNING: Removing unreachable block (ram,0x00018002f03b) */
/* WARNING: Removing unreachable block (ram,0x00018002f032) */
/* WARNING: Removing unreachable block (ram,0x00018002f00d) */
/* WARNING: Removing unreachable block (ram,0x00018002eff7) */
/* WARNING: Removing unreachable block (ram,0x00018002efee) */
/* WARNING: Removing unreachable block (ram,0x00018002efe5) */
/* WARNING: Removing unreachable block (ram,0x00018002efc0) */
/* WARNING: Removing unreachable block (ram,0x00018002efaa) */
/* WARNING: Removing unreachable block (ram,0x00018002efa1) */
/* WARNING: Removing unreachable block (ram,0x00018002ef98) */
/* WARNING: Removing unreachable block (ram,0x00018002ef73) */
/* WARNING: Removing unreachable block (ram,0x00018002ef5d) */
/* WARNING: Removing unreachable block (ram,0x00018002ef54) */
/* WARNING: Removing unreachable block (ram,0x00018002ef4b) */

void FUN_18002ef20(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulonglong local_18;
  ulonglong uVar27;
  ulonglong uVar37;
  
  uVar1 = param_2[1];
  *(undefined8 *)*param_1 = *param_2;
  *(undefined8 *)(*param_1 + 8) = uVar1;
  uVar37 = param_2[2];
  *(ulonglong *)param_1[1] = uVar37;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  auVar17 = *param_1;
  auVar16 = aeskeygenassist(auVar19,1);
  uVar18 = auVar16._4_4_;
  auVar38._4_4_ = uVar18;
  auVar38._0_4_ = uVar18;
  auVar38._8_4_ = uVar18;
  auVar38._12_4_ = uVar18;
  uVar27 = auVar17._0_8_;
  auVar28._0_8_ = uVar27 << 0x20;
  auVar28._8_8_ = auVar17._8_8_ << 0x20 | uVar27 >> 0x20;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (uVar27 >> 0x20) << 0x20 | uVar27 & 0xffffffff;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar27 & 0xffffffff) << 0x20;
  auVar16 = auVar38 ^ auVar17 ^ auVar28 ^ auVar16 << 0x40 ^ auVar8 << 0x40;
  *(undefined1 (*) [16])(param_1[1] + 8) = auVar16;
  uVar18 = auVar16._12_4_;
  auVar29._4_4_ = uVar18;
  auVar29._0_4_ = uVar18;
  auVar29._8_4_ = uVar18;
  auVar29._12_4_ = uVar18;
  auVar30._0_8_ = uVar37 << 0x20;
  auVar30._8_8_ = uVar37 >> 0x20;
  auVar30 = auVar29 ^ auVar19 ^ auVar30;
  auVar17 = aeskeygenassist(auVar30,2);
  local_18 = auVar30._0_8_;
  *(ulonglong *)(param_1[2] + 8) = local_18;
  uVar18 = auVar17._4_4_;
  auVar46._4_4_ = uVar18;
  auVar46._0_4_ = uVar18;
  auVar46._8_4_ = uVar18;
  auVar46._12_4_ = uVar18;
  uVar37 = auVar16._0_8_;
  auVar39._0_8_ = uVar37 << 0x20;
  auVar39._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar16 = auVar46 ^ auVar16 ^ auVar39 ^ auVar17 << 0x40 ^ auVar9 << 0x40;
  param_1[3] = auVar16;
  uVar18 = auVar16._12_4_;
  auVar20._4_4_ = uVar18;
  auVar20._0_4_ = uVar18;
  auVar20._8_4_ = uVar18;
  auVar20._12_4_ = uVar18;
  auVar21._0_8_ = local_18 << 0x20;
  auVar21._8_8_ = auVar30._8_8_ << 0x20 | local_18 >> 0x20;
  auVar21 = auVar20 ^ auVar30 ^ auVar21;
  auVar17 = aeskeygenassist(auVar21,4);
  local_18 = auVar21._0_8_;
  *(ulonglong *)param_1[4] = local_18;
  uVar18 = auVar17._4_4_;
  auVar40._4_4_ = uVar18;
  auVar40._0_4_ = uVar18;
  auVar40._8_4_ = uVar18;
  auVar40._12_4_ = uVar18;
  uVar37 = auVar16._0_8_;
  auVar47._0_8_ = uVar37 << 0x20;
  auVar47._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar16 = auVar40 ^ auVar16 ^ auVar47 ^ auVar2 << 0x40 ^ auVar10 << 0x40;
  *(undefined1 (*) [16])(param_1[4] + 8) = auVar16;
  uVar18 = auVar16._12_4_;
  auVar31._4_4_ = uVar18;
  auVar31._0_4_ = uVar18;
  auVar31._8_4_ = uVar18;
  auVar31._12_4_ = uVar18;
  auVar32._0_8_ = local_18 << 0x20;
  auVar32._8_8_ = auVar21._8_8_ << 0x20 | local_18 >> 0x20;
  auVar32 = auVar31 ^ auVar21 ^ auVar32;
  auVar17 = aeskeygenassist(auVar32,8);
  local_18 = auVar32._0_8_;
  *(ulonglong *)(param_1[5] + 8) = local_18;
  uVar18 = auVar17._4_4_;
  auVar48._4_4_ = uVar18;
  auVar48._0_4_ = uVar18;
  auVar48._8_4_ = uVar18;
  auVar48._12_4_ = uVar18;
  uVar37 = auVar16._0_8_;
  auVar41._0_8_ = uVar37 << 0x20;
  auVar41._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar16 = auVar48 ^ auVar16 ^ auVar41 ^ auVar3 << 0x40 ^ auVar11 << 0x40;
  uVar18 = auVar16._12_4_;
  auVar22._4_4_ = uVar18;
  auVar22._0_4_ = uVar18;
  auVar22._8_4_ = uVar18;
  auVar22._12_4_ = uVar18;
  auVar23._0_8_ = local_18 << 0x20;
  auVar23._8_8_ = auVar32._8_8_ << 0x20 | local_18 >> 0x20;
  auVar23 = auVar22 ^ auVar32 ^ auVar23;
  param_1[6] = auVar16;
  auVar17 = aeskeygenassist(auVar23,0x10);
  uVar18 = auVar17._4_4_;
  auVar42._4_4_ = uVar18;
  auVar42._0_4_ = uVar18;
  auVar42._8_4_ = uVar18;
  auVar42._12_4_ = uVar18;
  local_18 = auVar23._0_8_;
  uVar37 = auVar16._0_8_;
  auVar49._0_8_ = uVar37 << 0x20;
  auVar49._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  *(ulonglong *)param_1[7] = local_18;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar16 = auVar42 ^ auVar16 ^ auVar49 ^ auVar4 << 0x40 ^ auVar12 << 0x40;
  *(undefined1 (*) [16])(param_1[7] + 8) = auVar16;
  uVar18 = auVar16._12_4_;
  auVar33._4_4_ = uVar18;
  auVar33._0_4_ = uVar18;
  auVar33._8_4_ = uVar18;
  auVar33._12_4_ = uVar18;
  auVar34._0_8_ = local_18 << 0x20;
  auVar34._8_8_ = auVar23._8_8_ << 0x20 | local_18 >> 0x20;
  auVar34 = auVar33 ^ auVar23 ^ auVar34;
  auVar17 = aeskeygenassist(auVar34,0x20);
  local_18 = auVar34._0_8_;
  *(ulonglong *)(param_1[8] + 8) = local_18;
  uVar18 = auVar17._4_4_;
  auVar50._4_4_ = uVar18;
  auVar50._0_4_ = uVar18;
  auVar50._8_4_ = uVar18;
  auVar50._12_4_ = uVar18;
  uVar37 = auVar16._0_8_;
  auVar43._0_8_ = uVar37 << 0x20;
  auVar43._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar16 = auVar50 ^ auVar16 ^ auVar43 ^ auVar5 << 0x40 ^ auVar13 << 0x40;
  param_1[9] = auVar16;
  uVar18 = auVar16._12_4_;
  auVar24._4_4_ = uVar18;
  auVar24._0_4_ = uVar18;
  auVar24._8_4_ = uVar18;
  auVar24._12_4_ = uVar18;
  auVar25._0_8_ = local_18 << 0x20;
  auVar25._8_8_ = auVar34._8_8_ << 0x20 | local_18 >> 0x20;
  auVar25 = auVar24 ^ auVar34 ^ auVar25;
  auVar17 = aeskeygenassist(auVar25,0x40);
  local_18 = auVar25._0_8_;
  *(ulonglong *)param_1[10] = local_18;
  uVar18 = auVar17._4_4_;
  auVar44._4_4_ = uVar18;
  auVar44._0_4_ = uVar18;
  auVar44._8_4_ = uVar18;
  auVar44._12_4_ = uVar18;
  uVar37 = auVar16._0_8_;
  auVar51._0_8_ = uVar37 << 0x20;
  auVar51._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar16 = auVar44 ^ auVar16 ^ auVar51 ^ auVar6 << 0x40 ^ auVar14 << 0x40;
  *(undefined1 (*) [16])(param_1[10] + 8) = auVar16;
  uVar18 = auVar16._12_4_;
  auVar35._4_4_ = uVar18;
  auVar35._0_4_ = uVar18;
  auVar35._8_4_ = uVar18;
  auVar35._12_4_ = uVar18;
  auVar36._0_8_ = local_18 << 0x20;
  auVar36._8_8_ = auVar25._8_8_ << 0x20 | local_18 >> 0x20;
  auVar36 = auVar35 ^ auVar25 ^ auVar36;
  auVar17 = aeskeygenassist(auVar36,0x80);
  uVar18 = auVar17._4_4_;
  auVar26._4_4_ = uVar18;
  auVar26._0_4_ = uVar18;
  auVar26._8_4_ = uVar18;
  auVar26._12_4_ = uVar18;
  local_18 = auVar36._0_8_;
  uVar37 = auVar16._0_8_;
  auVar45._0_8_ = uVar37 << 0x20;
  auVar45._8_8_ = auVar16._8_8_ << 0x20 | uVar37 >> 0x20;
  *(ulonglong *)(param_1[0xb] + 8) = local_18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (uVar37 >> 0x20) << 0x20 | uVar37 & 0xffffffff;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (uVar37 & 0xffffffff) << 0x20;
  auVar17 = auVar26 ^ auVar16 ^ auVar45 ^ auVar7 << 0x40 ^ auVar15 << 0x40;
  uVar18 = auVar17._12_4_;
  local_18 = CONCAT44(uVar18,uVar18) ^ local_18 ^ local_18 << 0x20;
  *(ulonglong *)param_1[0xd] = local_18;
  param_1[0xc] = auVar17;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018002f4c7) */
/* WARNING: Removing unreachable block (ram,0x00018002f4be) */
/* WARNING: Removing unreachable block (ram,0x00018002f4b1) */
/* WARNING: Removing unreachable block (ram,0x00018002f491) */
/* WARNING: Removing unreachable block (ram,0x00018002f480) */
/* WARNING: Removing unreachable block (ram,0x00018002f477) */
/* WARNING: Removing unreachable block (ram,0x00018002f457) */
/* WARNING: Removing unreachable block (ram,0x00018002f446) */
/* WARNING: Removing unreachable block (ram,0x00018002f43d) */
/* WARNING: Removing unreachable block (ram,0x00018002f41d) */
/* WARNING: Removing unreachable block (ram,0x00018002f40c) */
/* WARNING: Removing unreachable block (ram,0x00018002f403) */
/* WARNING: Removing unreachable block (ram,0x00018002f3e3) */
/* WARNING: Removing unreachable block (ram,0x00018002f3d2) */
/* WARNING: Removing unreachable block (ram,0x00018002f3c9) */
/* WARNING: Removing unreachable block (ram,0x00018002f3a9) */
/* WARNING: Removing unreachable block (ram,0x00018002f398) */
/* WARNING: Removing unreachable block (ram,0x00018002f38f) */
/* WARNING: Removing unreachable block (ram,0x00018002f36f) */
/* WARNING: Removing unreachable block (ram,0x00018002f35e) */
/* WARNING: Removing unreachable block (ram,0x00018002f355) */
/* WARNING: Removing unreachable block (ram,0x00018002f335) */
/* WARNING: Removing unreachable block (ram,0x00018002f324) */
/* WARNING: Removing unreachable block (ram,0x00018002f31b) */
/* WARNING: Removing unreachable block (ram,0x00018002f2fe) */
/* WARNING: Removing unreachable block (ram,0x00018002f2ed) */
/* WARNING: Removing unreachable block (ram,0x00018002f2e4) */
/* WARNING: Removing unreachable block (ram,0x00018002f2c7) */
/* WARNING: Removing unreachable block (ram,0x00018002f2b6) */
/* WARNING: Removing unreachable block (ram,0x00018002f2ad) */
/* WARNING: Removing unreachable block (ram,0x00018002f290) */
/* WARNING: Removing unreachable block (ram,0x00018002f27f) */
/* WARNING: Removing unreachable block (ram,0x00018002f276) */
/* WARNING: Removing unreachable block (ram,0x00018002f255) */
/* WARNING: Removing unreachable block (ram,0x00018002f24c) */
/* WARNING: Removing unreachable block (ram,0x00018002f243) */
/* WARNING: Removing unreachable block (ram,0x00018002f226) */
/* WARNING: Removing unreachable block (ram,0x00018002f21d) */
/* WARNING: Removing unreachable block (ram,0x00018002f214) */
/* WARNING: Removing unreachable block (ram,0x00018002f1f3) */
/* WARNING: Removing unreachable block (ram,0x00018002f1e6) */
/* WARNING: Removing unreachable block (ram,0x00018002f1dd) */

void FUN_18002f1c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong uVar24;
  undefined4 uVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  auVar26 = *param_2;
  uVar24 = auVar26._0_8_;
  *param_1 = auVar26;
  auVar43 = param_2[1];
  uVar41 = auVar43._0_8_;
  auVar25 = aeskeygenassist(auVar43,1);
  uVar27 = auVar25._12_4_;
  auVar48._4_4_ = uVar27;
  auVar48._0_4_ = uVar27;
  auVar48._8_4_ = uVar27;
  auVar48._12_4_ = uVar27;
  auVar28._0_8_ = uVar24 << 0x20;
  auVar28._8_8_ = auVar26._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar25 = auVar48 ^ auVar26 ^ auVar28 ^ auVar25 << 0x40 ^ auVar10 << 0x40;
  auVar26 = aeskeygenassist(auVar25,0);
  uVar27 = auVar26._8_4_;
  auVar53._4_4_ = uVar27;
  auVar53._0_4_ = uVar27;
  auVar53._8_4_ = uVar27;
  auVar53._12_4_ = uVar27;
  param_1[2] = auVar25;
  param_1[1] = auVar43;
  auVar42._0_8_ = uVar41 << 0x20;
  auVar42._8_8_ = auVar43._8_8_ << 0x20 | uVar41 >> 0x20;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = (uVar41 >> 0x20) << 0x20 | uVar41 & 0xffffffff;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (uVar41 & 0xffffffff) << 0x20;
  auVar54 = auVar53 ^ auVar43 ^ auVar42 ^ auVar26 << 0x40 ^ auVar11 << 0x40;
  auVar26 = aeskeygenassist(auVar54,2);
  uVar27 = auVar26._12_4_;
  auVar29._4_4_ = uVar27;
  auVar29._0_4_ = uVar27;
  auVar29._8_4_ = uVar27;
  auVar29._12_4_ = uVar27;
  param_1[3] = auVar54;
  uVar24 = auVar25._0_8_;
  auVar49._0_8_ = uVar24 << 0x20;
  auVar49._8_8_ = auVar25._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar43 = auVar43 << 0x40 ^ auVar29 ^ auVar25 ^ auVar49 ^ auVar12 << 0x40;
  auVar26 = aeskeygenassist(auVar43,0);
  uVar27 = auVar26._8_4_;
  auVar30._4_4_ = uVar27;
  auVar30._0_4_ = uVar27;
  auVar30._8_4_ = uVar27;
  auVar30._12_4_ = uVar27;
  param_1[4] = auVar43;
  uVar24 = auVar54._0_8_;
  auVar55._0_8_ = uVar24 << 0x20;
  auVar55._8_8_ = auVar54._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar25 = auVar56 << 0x40 ^ auVar55 ^ auVar30 ^ auVar54 ^ auVar13 << 0x40;
  auVar26 = aeskeygenassist(auVar25,4);
  uVar27 = auVar26._12_4_;
  auVar31._4_4_ = uVar27;
  auVar31._0_4_ = uVar27;
  auVar31._8_4_ = uVar27;
  auVar31._12_4_ = uVar27;
  param_1[5] = auVar25;
  uVar24 = auVar43._0_8_;
  auVar44._0_8_ = uVar24 << 0x20;
  auVar44._8_8_ = auVar43._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar56 = auVar54 << 0x40 ^ auVar44 ^ auVar31 ^ auVar43 ^ auVar14 << 0x40;
  auVar26 = aeskeygenassist(auVar56,0);
  uVar27 = auVar26._8_4_;
  auVar32._4_4_ = uVar27;
  auVar32._0_4_ = uVar27;
  auVar32._8_4_ = uVar27;
  auVar32._12_4_ = uVar27;
  param_1[6] = auVar56;
  uVar24 = auVar25._0_8_;
  auVar50._0_8_ = uVar24 << 0x20;
  auVar50._8_8_ = auVar25._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar43 = auVar1 << 0x40 ^ auVar50 ^ auVar32 ^ auVar25 ^ auVar15 << 0x40;
  auVar26 = aeskeygenassist(auVar43,8);
  uVar27 = auVar26._12_4_;
  auVar33._4_4_ = uVar27;
  auVar33._0_4_ = uVar27;
  auVar33._8_4_ = uVar27;
  auVar33._12_4_ = uVar27;
  param_1[7] = auVar43;
  uVar24 = auVar56._0_8_;
  auVar57._0_8_ = uVar24 << 0x20;
  auVar57._8_8_ = auVar56._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar25 = auVar2 << 0x40 ^ auVar57 ^ auVar33 ^ auVar56 ^ auVar16 << 0x40;
  auVar26 = aeskeygenassist(auVar25,0);
  uVar27 = auVar26._8_4_;
  auVar34._4_4_ = uVar27;
  auVar34._0_4_ = uVar27;
  auVar34._8_4_ = uVar27;
  auVar34._12_4_ = uVar27;
  param_1[8] = auVar25;
  uVar24 = auVar43._0_8_;
  auVar45._0_8_ = uVar24 << 0x20;
  auVar45._8_8_ = auVar43._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar56 = auVar3 << 0x40 ^ auVar45 ^ auVar34 ^ auVar43 ^ auVar17 << 0x40;
  auVar26 = aeskeygenassist(auVar56,0x10);
  uVar27 = auVar26._12_4_;
  auVar35._4_4_ = uVar27;
  auVar35._0_4_ = uVar27;
  auVar35._8_4_ = uVar27;
  auVar35._12_4_ = uVar27;
  param_1[9] = auVar56;
  uVar24 = auVar25._0_8_;
  auVar51._0_8_ = uVar24 << 0x20;
  auVar51._8_8_ = auVar25._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar43 = auVar4 << 0x40 ^ auVar51 ^ auVar35 ^ auVar25 ^ auVar18 << 0x40;
  auVar26 = aeskeygenassist(auVar43,0);
  uVar27 = auVar26._8_4_;
  auVar36._4_4_ = uVar27;
  auVar36._0_4_ = uVar27;
  auVar36._8_4_ = uVar27;
  auVar36._12_4_ = uVar27;
  param_1[10] = auVar43;
  uVar24 = auVar56._0_8_;
  auVar58._0_8_ = uVar24 << 0x20;
  auVar58._8_8_ = auVar56._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar25 = auVar5 << 0x40 ^ auVar58 ^ auVar36 ^ auVar56 ^ auVar19 << 0x40;
  auVar26 = aeskeygenassist(auVar25,0x20);
  uVar27 = auVar26._12_4_;
  auVar37._4_4_ = uVar27;
  auVar37._0_4_ = uVar27;
  auVar37._8_4_ = uVar27;
  auVar37._12_4_ = uVar27;
  param_1[0xb] = auVar25;
  uVar24 = auVar43._0_8_;
  auVar46._0_8_ = uVar24 << 0x20;
  auVar46._8_8_ = auVar43._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar43 = auVar6 << 0x40 ^ auVar46 ^ auVar37 ^ auVar43 ^ auVar20 << 0x40;
  auVar26 = aeskeygenassist(auVar43,0);
  uVar27 = auVar26._8_4_;
  auVar38._4_4_ = uVar27;
  auVar38._0_4_ = uVar27;
  auVar38._8_4_ = uVar27;
  auVar38._12_4_ = uVar27;
  param_1[0xc] = auVar43;
  uVar24 = auVar25._0_8_;
  auVar52._0_8_ = uVar24 << 0x20;
  auVar52._8_8_ = auVar25._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar25 = auVar7 << 0x40 ^ auVar52 ^ auVar38 ^ auVar25 ^ auVar21 << 0x40;
  auVar26 = aeskeygenassist(auVar25,0x40);
  uVar27 = auVar26._12_4_;
  auVar39._4_4_ = uVar27;
  auVar39._0_4_ = uVar27;
  auVar39._8_4_ = uVar27;
  auVar39._12_4_ = uVar27;
  param_1[0xd] = auVar25;
  uVar24 = auVar43._0_8_;
  auVar59._0_8_ = uVar24 << 0x20;
  auVar59._8_8_ = auVar43._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  auVar43 = auVar8 << 0x40 ^ auVar59 ^ auVar39 ^ auVar43 ^ auVar22 << 0x40;
  auVar26 = aeskeygenassist(auVar43,0);
  param_1[0xe] = auVar43;
  uVar27 = auVar26._8_4_;
  auVar40._4_4_ = uVar27;
  auVar40._0_4_ = uVar27;
  auVar40._8_4_ = uVar27;
  auVar40._12_4_ = uVar27;
  uVar24 = auVar25._0_8_;
  auVar47._0_8_ = uVar24 << 0x20;
  auVar47._8_8_ = auVar25._8_8_ << 0x20 | uVar24 >> 0x20;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (uVar24 >> 0x20) << 0x20 | uVar24 & 0xffffffff;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = (uVar24 & 0xffffffff) << 0x20;
  param_1[0xf] = auVar9 << 0x40 ^ auVar47 ^ auVar40 ^ auVar25 ^ auVar23 << 0x40;
  return;
}




void FUN_18002f4e0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar17 = param_2 - (longlong)param_3;
  lVar14 = param_1 - (longlong)param_3;
  uVar15 = 0;
  puVar11 = param_3;
  do {
    uVar15 = uVar15 + 8;
    *(ulonglong *)(lVar14 + (longlong)puVar11) =
         *(ulonglong *)(lVar17 + (longlong)puVar11) ^ *puVar11;
    puVar11 = puVar11 + 1;
  } while ((ulonglong)((8 - (longlong)param_3) + (longlong)puVar11) < 9);
  uVar13 = 8 - uVar15;
  if (uVar15 < 8) {
    if (0x3f < uVar13) {
      if ((((longlong)param_3 + 7U < uVar15 + param_1) ||
          ((ulonglong *)(param_1 + 7) < (ulonglong *)(uVar15 + (longlong)param_3))) &&
         ((param_2 + 7U < uVar15 + param_1 ||
          ((ulonglong *)(param_1 + 7) < (ulonglong *)(uVar15 + param_2))))) {
        puVar11 = (ulonglong *)(uVar15 + (longlong)param_3);
        do {
          uVar3 = puVar11[1];
          uVar15 = uVar15 + 0x40;
          uVar4 = ((ulonglong *)((longlong)puVar11 + lVar17))[1];
          puVar1 = (ulonglong *)(lVar17 + 0x10 + (longlong)puVar11);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = puVar11 + 8;
          uVar7 = puVar11[2];
          uVar8 = puVar11[3];
          *(ulonglong *)((longlong)puVar11 + lVar14) =
               *(ulonglong *)((longlong)puVar11 + lVar17) ^ *puVar11;
          ((ulonglong *)((longlong)puVar11 + lVar14))[1] = uVar4 ^ uVar3;
          uVar3 = puVar11[4];
          uVar4 = puVar11[5];
          puVar2 = (ulonglong *)(lVar17 + -0x20 + (longlong)puVar1);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          puVar2 = (ulonglong *)(lVar14 + -0x30 + (longlong)puVar1);
          *puVar2 = uVar5 ^ uVar7;
          puVar2[1] = uVar6 ^ uVar8;
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          puVar11 = (ulonglong *)(lVar17 + -0x10 + (longlong)puVar1);
          uVar7 = *puVar11;
          uVar8 = puVar11[1];
          puVar11 = (ulonglong *)(lVar14 + -0x20 + (longlong)puVar1);
          *puVar11 = uVar9 ^ uVar3;
          puVar11[1] = uVar10 ^ uVar4;
          puVar11 = (ulonglong *)(lVar14 + -0x10 + (longlong)puVar1);
          *puVar11 = uVar7 ^ uVar5;
          puVar11[1] = uVar8 ^ uVar6;
          puVar11 = puVar1;
        } while (uVar15 < 8 - (ulonglong)((uint)uVar13 & 0x3f));
      }
    }
    if (uVar15 < 8) {
      pbVar12 = (byte *)(uVar15 + (longlong)param_3);
      lVar16 = 8 - uVar15;
      do {
        pbVar12[lVar14] = pbVar12[lVar17] ^ *pbVar12;
        pbVar12 = pbVar12 + 1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  return;
}




void FUN_18002f640(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = param_2[1];
  uVar5 = *param_2;
  uVar4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar2 = (uVar3 >> 4 ^ uVar4) & 0xf0f0f0f;
  uVar4 = uVar4 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 << 4;
  uVar3 = (uVar3 ^ uVar4) & 0x10101010 ^ uVar3;
  uVar5 = (((((*(uint *)(&DAT_180040ee0 + (ulonglong)(uVar4 >> 0x15 & 0xf) * 4) & 0x7fffff) * 2 |
             *(uint *)(&DAT_180040ee0 + (ulonglong)((uVar5 << 0x18) >> 0x1d) * 4) & 0xffffff) * 2 |
            *(uint *)(&DAT_180040ee0 + (ulonglong)(uVar4 & 0xf) * 4) & 0x1ffffff) * 2 |
           *(uint *)(&DAT_180040ee0 + (ulonglong)(uVar4 >> 8 & 0xf) * 4) & 0x3ffffff) * 2 |
          *(uint *)(&DAT_180040ee0 + (ulonglong)(uVar4 >> 0x10 & 0xf) * 4) & 0x7ffffff) * 2 |
          ((*(int *)(&DAT_180040ee0 + (ulonglong)(uVar4 >> 5 & 0xf) * 4) * 2 |
           *(uint *)(&DAT_180040ee0 + (ulonglong)(uVar4 >> 0xd & 0xf) * 4)) << 6 |
          *(uint *)(&DAT_180040ee0 + (ulonglong)(uVar4 >> 0x18 & 0xf) * 4)) & 0xfffffff;
  uVar3 = (((((*(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 0x14 & 0xf) * 4) & 0x7fffff) * 2 |
             *(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 0x1c) * 4) & 0xffffff) * 2 |
            *(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 1 & 0xf) * 4) & 0x1ffffff) * 2 |
           *(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 9 & 0xf) * 4) & 0x3ffffff) * 2 |
          *(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 0x11 & 0xf) * 4) & 0x7ffffff) * 2 |
          ((*(int *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 4 & 0xf) * 4) * 2 |
           *(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 0xc & 0xf) * 4)) << 6 |
          *(uint *)(&DAT_180040ea0 + (ulonglong)(uVar3 >> 0x19 & 0xf) * 4)) & 0xfffffff;
  iVar7 = 0;
  do {
    if (((iVar7 < 2) || (iVar7 == 8)) || (iVar7 == 0xf)) {
      uVar6 = uVar5 >> 0x1b | uVar5 * 2;
      uVar2 = uVar3 * 2;
      uVar4 = uVar3 >> 0x1b;
    }
    else {
      uVar6 = uVar5 >> 0x1a | uVar5 * 4;
      uVar2 = uVar3 * 4;
      uVar4 = uVar3 >> 0x1a;
    }
    uVar5 = uVar6 & 0xfffffff;
    uVar1 = uVar2 & 0xfffffff;
    uVar3 = uVar4 | uVar1;
    *param_1 = (((((((((uVar1 >> 2 & 0x2000000 | uVar2 & 0x1000000) >> 6 | uVar2 & 0x100000) >> 4 |
                     uVar2 & 0x800000) >> 1 | uVar2 & 0x4000000) >> 3 | uVar6 & 0x4000000 |
                   uVar2 & 0x4000) >> 5 | uVar2 & 0x400) >> 1 | uVar2 & 0x10000) >> 1 | uVar2 & 0x40
                ) >> 2 | uVar2 & 0x800 | uVar6 & 0x200000) >> 1 |
               ((((((((uVar6 & 1) << 10 | uVar6 & 0x82) << 4 | uVar6 & 0x2000) << 4 | uVar6 & 0x100)
                   * 2 | uVar6 & 0x1000) << 3 | uVar2 & 0x20 | uVar6 & 0x40000) << 2 |
                uVar6 & 0x2400000) << 2 | uVar6 & 0x8000) << 2 | uVar2 & 0x100;
    iVar7 = iVar7 + 1;
    param_1[1] = (((((((((((uVar6 & 0x10) << 5 | uVar6 & 0x800) * 2 | uVar6 & 0x20) * 2 |
                        uVar6 & 0x4004) << 4 | uVar6 & 0x200) * 2 | uVar6 & 0x20000) << 2 |
                     uVar2 & 0x10) * 2 | (uVar4 | uVar2) & 2) << 4 | uVar6 & 0x10000) * 2 |
                  uVar4 & 1) * 2 | uVar6 & 0x800000) * 2 |
                 (((((((uVar1 >> 7 & 0x8000 | uVar2 & 0x2020000) >> 5 | uVar2 & 0x80000) >> 2 |
                     uVar2 & 0x1000) >> 1 | uVar6 & 0x1000000) >> 2 | uVar6 & 0x100000) >> 1 |
                  uVar2 & 0x88) >> 1 | uVar2 & 0x8000 | uVar6 & 0x8000000) >> 2 | uVar2 & 0x200;
    param_1 = param_1 + 2;
  } while (iVar7 < 0x10);
  return;
}




void FUN_18002fad0(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_18002f640(param_1,param_3);
  FUN_18002f640((uint *)(param_2 + 0x80),param_3 + 2);
  lVar4 = param_2 - (longlong)param_1;
  puVar3 = param_1 + 0x1f;
  lVar5 = 2;
  puVar2 = param_1 + 0x21;
  do {
    *(uint *)(lVar4 + -0x84 + (longlong)puVar2) = puVar3[-1];
    *(uint *)(lVar4 + -0x80 + (longlong)puVar2) = *puVar3;
    puVar2[-1] = *(uint *)(lVar4 + 0x7c + (longlong)puVar3);
    *puVar2 = *(uint *)(lVar4 + 0x80 + (longlong)puVar3);
    puVar2[0x1f] = puVar2[-0x21];
    puVar2[0x20] = puVar2[-0x20];
    *(undefined4 *)(lVar4 + 0x7c + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x84 + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0x80 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x80 + (longlong)puVar2);
    *(uint *)(lVar4 + -0x7c + (longlong)puVar2) = puVar3[-3];
    *(uint *)(lVar4 + -0x78 + (longlong)puVar2) = puVar3[-2];
    puVar2[1] = *(uint *)(lVar4 + 0x74 + (longlong)puVar3);
    puVar2[2] = *(uint *)(lVar4 + 0x78 + (longlong)puVar3);
    puVar2[0x21] = puVar2[-0x1f];
    puVar2[0x22] = puVar2[-0x1e];
    *(undefined4 *)(lVar4 + 0x84 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x7c + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0x88 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x78 + (longlong)puVar2);
    *(uint *)(lVar4 + -0x74 + (longlong)puVar2) = puVar3[-5];
    *(uint *)(lVar4 + -0x70 + (longlong)puVar2) = puVar3[-4];
    puVar2[3] = *(uint *)(lVar4 + 0x6c + (longlong)puVar3);
    puVar2[4] = *(uint *)(lVar4 + 0x70 + (longlong)puVar3);
    puVar2[0x23] = puVar2[-0x1d];
    puVar2[0x24] = puVar2[-0x1c];
    *(undefined4 *)(lVar4 + 0x8c + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x74 + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0x90 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x70 + (longlong)puVar2);
    *(uint *)(lVar4 + -0x6c + (longlong)puVar2) = puVar3[-7];
    *(uint *)(lVar4 + -0x68 + (longlong)puVar2) = puVar3[-6];
    puVar2[5] = *(uint *)(lVar4 + 100 + (longlong)puVar3);
    puVar2[6] = *(uint *)(lVar4 + 0x68 + (longlong)puVar3);
    puVar2[0x25] = puVar2[-0x1b];
    puVar2[0x26] = puVar2[-0x1a];
    *(undefined4 *)(lVar4 + 0x94 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x6c + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0x98 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x68 + (longlong)puVar2);
    *(uint *)(lVar4 + -100 + (longlong)puVar2) = puVar3[-9];
    *(uint *)(lVar4 + -0x60 + (longlong)puVar2) = puVar3[-8];
    puVar2[7] = *(uint *)((longlong)puVar3 + lVar4 + 0x5c);
    puVar2[8] = *(uint *)((longlong)puVar3 + lVar4 + 0x60);
    puVar2[0x27] = puVar2[-0x19];
    puVar2[0x28] = puVar2[-0x18];
    *(undefined4 *)(lVar4 + 0x9c + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -100 + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0xa0 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x60 + (longlong)puVar2);
    *(uint *)(lVar4 + -0x5c + (longlong)puVar2) = puVar3[-0xb];
    *(uint *)(lVar4 + -0x58 + (longlong)puVar2) = puVar3[-10];
    puVar2[9] = *(uint *)(lVar4 + 0x54 + (longlong)puVar3);
    puVar2[10] = *(uint *)(lVar4 + 0x58 + (longlong)puVar3);
    puVar2[0x29] = puVar2[-0x17];
    puVar2[0x2a] = puVar2[-0x16];
    *(undefined4 *)(lVar4 + 0xa4 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x5c + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0xa8 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x58 + (longlong)puVar2);
    *(uint *)(lVar4 + -0x54 + (longlong)puVar2) = puVar3[-0xd];
    *(uint *)(lVar4 + -0x50 + (longlong)puVar2) = puVar3[-0xc];
    puVar2[0xb] = *(uint *)(lVar4 + 0x4c + (longlong)puVar3);
    puVar2[0xc] = *(uint *)(lVar4 + 0x50 + (longlong)puVar3);
    puVar2[0x2b] = puVar2[-0x15];
    puVar2[0x2c] = puVar2[-0x14];
    *(undefined4 *)(lVar4 + 0xac + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x54 + (longlong)puVar2);
    *(undefined4 *)(lVar4 + 0xb0 + (longlong)puVar2) =
         *(undefined4 *)(lVar4 + -0x50 + (longlong)puVar2);
    *(uint *)(lVar4 + -0x4c + (longlong)puVar2) = puVar3[-0xf];
    *(uint *)(lVar4 + -0x48 + (longlong)puVar2) = puVar3[-0xe];
    puVar1 = puVar2 + 0x10;
    puVar3 = puVar3 + -0x10;
    puVar2[0xd] = *(uint *)(lVar4 + 0x84 + (longlong)puVar3);
    puVar2[0xe] = *(uint *)(lVar4 + 0x88 + (longlong)puVar3);
    puVar2[0x2d] = puVar2[-0x13];
    puVar2[0x2e] = puVar2[-0x12];
    *(undefined4 *)(lVar4 + 0x74 + (longlong)puVar1) =
         *(undefined4 *)(lVar4 + -0x8c + (longlong)puVar1);
    *(undefined4 *)(lVar4 + 0x78 + (longlong)puVar1) =
         *(undefined4 *)(lVar4 + -0x88 + (longlong)puVar1);
    lVar5 = lVar5 + -1;
    puVar2 = puVar1;
  } while (lVar5 != 0);
  return;
}




void FUN_180030040(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_18002f640(param_1,param_3);
  FUN_18002f640((uint *)(param_2 + 0x80),param_3 + 2);
  FUN_18002f640(param_1 + 0x40,param_3 + 4);
  lVar5 = param_2 - (longlong)param_1;
  lVar6 = 0x10;
  puVar3 = param_1 + 0x5f;
  puVar4 = param_1 + 0x20;
  do {
    puVar1 = puVar3 + -2;
    *(uint *)(lVar5 + -0x80 + (longlong)puVar4) = puVar3[-1];
    puVar2 = puVar4 + 2;
    *(uint *)(lVar5 + -0x84 + (longlong)puVar2) = *puVar3;
    *puVar4 = *(uint *)(lVar5 + -0x7c + (longlong)puVar1);
    puVar4[1] = *(uint *)(lVar5 + -0x78 + (longlong)puVar1);
    *(uint *)(lVar5 + 0x78 + (longlong)puVar2) = puVar3[-0x41];
    *(uint *)(lVar5 + 0x7c + (longlong)puVar2) = puVar3[-0x40];
    lVar6 = lVar6 + -1;
    puVar3 = puVar1;
    puVar4 = puVar2;
  } while (lVar6 != 0);
  return;
}




undefined8 FUN_180030100(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar1 = (uVar4 >> 4 ^ uVar2) & 0xf0f0f0f;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 4;
  uVar1 = (uVar4 >> 0x10 ^ uVar2) & 0xffff;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 0x10;
  uVar1 = (uVar2 >> 2 ^ uVar4) & 0x33333333;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 * 4;
  uVar1 = (uVar2 >> 8 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar1 << 8 ^ uVar2;
  uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  uVar1 = (uVar2 ^ uVar4) & 0xaaaaaaaa;
  uVar2 = uVar2 ^ uVar1;
  uVar1 = uVar1 ^ uVar4;
  uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
  lVar5 = 2;
  do {
    uVar3 = *param_1 ^ uVar2;
    uVar4 = (uVar2 >> 4 | uVar2 << 0x1c) ^ param_1[1];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[2] ^ uVar1;
    uVar4 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[3];
    uVar2 = uVar2 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[4] ^ uVar2;
    uVar4 = (uVar2 >> 4 | uVar2 << 0x1c) ^ param_1[5];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar4 = param_1[6] ^ uVar1;
    uVar3 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[7];
    uVar2 = uVar2 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar4 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar4 = param_1[8] ^ uVar2;
    uVar3 = (uVar2 >> 4 | uVar2 << 0x1c) ^ param_1[9];
    uVar3 = uVar1 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar4 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar1 = param_1[10] ^ uVar3;
    uVar4 = (uVar3 >> 4 | uVar3 << 0x1c) ^ param_1[0xb];
    uVar6 = uVar2 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4);
    uVar1 = param_1[0xc] ^ uVar6;
    uVar2 = (uVar6 >> 4 | uVar6 << 0x1c) ^ param_1[0xd];
    uVar1 = uVar3 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar2 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar2 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar2 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar2 & 0x3f) * 4);
    uVar2 = param_1[0xe] ^ uVar1;
    uVar4 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[0xf];
    uVar2 = uVar6 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar2 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar2 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar2 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar2 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4);
    lVar5 = lVar5 + -1;
    param_1 = param_1 + 0x10;
  } while (lVar5 != 0);
  uVar4 = uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f;
  uVar2 = (uVar4 ^ uVar1) & 0xaaaaaaaa;
  uVar4 = uVar4 ^ uVar2;
  uVar2 = uVar2 ^ uVar1;
  uVar2 = uVar2 >> 1 | (uint)((uVar2 & 1) != 0) << 0x1f;
  uVar1 = (uVar2 >> 8 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar2 >> 2 ^ uVar4) & 0x33333333;
  uVar4 = uVar4 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 * 4;
  uVar1 = (uVar4 >> 0x10 ^ uVar2) & 0xffff;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 0x10;
  uVar1 = (uVar4 >> 4 ^ uVar2) & 0xf0f0f0f;
  uVar2 = uVar2 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 4;
  *param_3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  param_3[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return 0;
}




undefined8 FUN_1800307e0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar1 = (uVar5 >> 4 ^ uVar4) & 0xf0f0f0f;
  uVar4 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 << 4;
  uVar1 = (uVar5 >> 0x10 ^ uVar4) & 0xffff;
  uVar4 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 << 0x10;
  uVar1 = (uVar4 >> 2 ^ uVar5) & 0x33333333;
  uVar5 = uVar5 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 4;
  uVar1 = (uVar4 >> 8 ^ uVar5) & 0xff00ff;
  uVar5 = uVar5 ^ uVar1;
  uVar4 = uVar1 << 8 ^ uVar4;
  uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
  uVar1 = (uVar4 ^ uVar5) & 0xaaaaaaaa;
  uVar4 = uVar4 ^ uVar1;
  uVar1 = uVar1 ^ uVar5;
  lVar6 = 2;
  uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
  lVar2 = 2;
  do {
    uVar5 = *param_1 ^ uVar4;
    uVar3 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[1];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[2] ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[3];
    uVar4 = uVar4 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[4] ^ uVar4;
    uVar5 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[5];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar5 = param_1[6] ^ uVar1;
    uVar3 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[7];
    uVar4 = uVar4 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar5 = param_1[8] ^ uVar4;
    uVar3 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[9];
    uVar3 = uVar1 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar5 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar1 = param_1[10] ^ uVar3;
    uVar5 = (uVar3 >> 4 | uVar3 << 0x1c) ^ param_1[0xb];
    uVar7 = uVar4 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4);
    uVar1 = param_1[0xc] ^ uVar7;
    uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ param_1[0xd];
    uVar1 = uVar3 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4);
    uVar4 = param_1[0xe] ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[0xf];
    param_1 = param_1 + 0x10;
    uVar4 = uVar7 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar4 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = 2;
  do {
    uVar3 = *param_1 ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[1];
    uVar4 = uVar4 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[2] ^ uVar4;
    uVar5 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[3];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[4] ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[5];
    uVar4 = uVar4 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[6] ^ uVar4;
    uVar5 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[7];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar5 = param_1[8] ^ uVar1;
    uVar3 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[9];
    uVar7 = uVar4 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar5 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar4 = param_1[10] ^ uVar7;
    uVar5 = (uVar7 >> 4 | uVar7 << 0x1c) ^ param_1[0xb];
    uVar3 = uVar1 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar4 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4);
    uVar1 = param_1[0xc] ^ uVar3;
    uVar4 = (uVar3 >> 4 | uVar3 << 0x1c) ^ param_1[0xd];
    uVar4 = uVar7 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4);
    uVar1 = param_1[0xe] ^ uVar4;
    uVar5 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[0xf];
    param_1 = param_1 + 0x10;
    uVar1 = uVar3 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  do {
    uVar3 = *param_1 ^ uVar4;
    uVar5 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[1];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[2] ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[3];
    uVar4 = uVar4 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[4] ^ uVar4;
    uVar5 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[5];
    uVar1 = uVar1 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar3 = param_1[6] ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[7];
    uVar4 = uVar4 ^ *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040d20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar5 = param_1[8] ^ uVar4;
    uVar3 = (uVar4 >> 4 | uVar4 << 0x1c) ^ param_1[9];
    uVar3 = uVar1 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar5 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar3 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar3 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar3 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar3 & 0x3f) * 4);
    uVar1 = param_1[10] ^ uVar3;
    uVar5 = (uVar3 >> 4 | uVar3 << 0x1c) ^ param_1[0xb];
    uVar7 = uVar4 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4);
    uVar1 = param_1[0xc] ^ uVar7;
    uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ param_1[0xd];
    uVar1 = uVar3 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar1 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar1 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar1 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar1 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar4 & 0x3f) * 4);
    uVar4 = param_1[0xe] ^ uVar1;
    uVar5 = (uVar1 >> 4 | uVar1 << 0x1c) ^ param_1[0xf];
    uVar4 = uVar7 ^ *(uint *)(&DAT_180040d20 + (ulonglong)(uVar4 >> 0x18 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041250 + (ulonglong)(uVar4 >> 0x10 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180040f50 + (ulonglong)(uVar4 >> 8 & 0x3f) * 4) ^
                    *(uint *)(&DAT_180041050 + (ulonglong)(uVar4 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040c20 + (ulonglong)(uVar5 >> 0x18 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041350 + (ulonglong)(uVar5 >> 0x10 & 0x3f) * 4) ^
            *(uint *)(&DAT_180040b10 + (ulonglong)(uVar5 >> 8 & 0x3f) * 4) ^
            *(uint *)(&DAT_180041150 + (ulonglong)(uVar5 & 0x3f) * 4);
    lVar6 = lVar6 + -1;
    param_1 = param_1 + 0x10;
  } while (lVar6 != 0);
  uVar5 = uVar4 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
  uVar4 = (uVar5 ^ uVar1) & 0xaaaaaaaa;
  uVar5 = uVar5 ^ uVar4;
  uVar4 = uVar4 ^ uVar1;
  uVar4 = uVar4 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
  uVar1 = (uVar4 >> 8 ^ uVar5) & 0xff00ff;
  uVar5 = uVar5 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 << 8;
  uVar1 = (uVar4 >> 2 ^ uVar5) & 0x33333333;
  uVar5 = uVar5 ^ uVar1;
  uVar4 = uVar4 ^ uVar1 * 4;
  uVar1 = (uVar5 >> 0x10 ^ uVar4) & 0xffff;
  uVar4 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 << 0x10;
  uVar1 = (uVar5 >> 4 ^ uVar4) & 0xf0f0f0f;
  uVar4 = uVar4 ^ uVar1;
  uVar5 = uVar5 ^ uVar1 << 4;
  *param_3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  param_3[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  return 0;
}




void FUN_180031850(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1] ^ param_2[1];
  uVar2 = *param_1 ^ *param_2;
  uVar3 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar1 >> 0x18],
                                     (&DAT_180041b60)[uVar1 >> 0x10 & 0xff]),
                            (&DAT_180041900)[uVar1 >> 8 & 0xff]),(&DAT_180041a60)[uVar1 & 0xff]);
  uVar1 = (uVar3 << 8 | (uint)(byte)(&DAT_180041c60)[uVar1 >> 0x18]) ^
          CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar2 >> 0x18],
                                     (&DAT_180041c60)[uVar2 >> 0x10 & 0xff]),
                            (&DAT_180041b60)[uVar2 >> 8 & 0xff]),(&DAT_180041900)[uVar2 & 0xff]);
  uVar3 = uVar3 ^ (uVar1 << 0x10 | uVar1 >> 0x10);
  uVar1 = uVar1 ^ (uVar3 >> 8 | uVar3 << 0x18);
  param_3[1] = param_3[1] ^ uVar1;
  *param_3 = (uVar1 >> 8 | uVar1 << 0x18) ^ *param_3 ^ uVar3;
  return;
}




void FUN_180031950(undefined4 *param_1,void *param_2,uint param_3)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 auStack_2e8 [32];
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  longlong local_2a8;
  uint local_2a0;
  uint local_29c;
  char *local_298;
  char *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  char *local_270;
  char *local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  longlong local_230;
  char *local_228;
  longlong local_220;
  char *local_218;
  longlong local_210;
  char *local_208;
  longlong local_200;
  char *local_1f8;
  longlong local_1f0;
  char *local_1e8;
  longlong local_1e0;
  char *local_1d8;
  longlong local_1d0;
  char *local_1c8;
  longlong local_1c0;
  char *local_1b8;
  longlong local_1b0;
  char *local_1a8;
  longlong local_1a0;
  char *local_198;
  longlong local_190;
  char *local_188;
  longlong local_180;
  char *local_178;
  longlong local_170;
  char *local_168;
  longlong local_160;
  char *local_158;
  longlong local_150;
  char *local_148;
  longlong local_140;
  char *local_138;
  longlong local_130;
  char *local_128;
  longlong local_120;
  char *local_118;
  longlong local_110;
  char *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_18004e038 ^ (ulonglong)auStack_2e8;
  _Dst = param_1 + 1;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_29c = param_3;
  memset(_Dst,0,0x110);
  if (param_3 == 0x80) {
    local_2a8 = 0;
    local_238 = &DAT_180041580;
    pcVar6 = "\x01\x01\x01\x01";
    local_230 = 0x80;
    local_228 = &DAT_180041581;
    pcVar12 = "\x01\x01";
    local_220 = 0x84;
    local_218 = &DAT_180041582;
    pcVar11 = "\x01";
    local_210 = 0x88;
    local_208 = &DAT_180041583;
    uVar1 = 3;
    local_200 = 0x8c;
    local_1f8 = &DAT_180041584;
    local_1e8 = &DAT_180041585;
    local_1d8 = &DAT_180041586;
    local_1c8 = &DAT_180041587;
    local_1b8 = &DAT_180041588;
    local_1a8 = &DAT_180041589;
    local_198 = &DAT_18004158a;
    local_188 = &DAT_18004158b;
    local_178 = &DAT_18004158c;
    local_168 = &DAT_18004158d;
    local_158 = &DAT_18004158e;
    local_148 = &DAT_18004158f;
    local_138 = &DAT_180041590;
    local_128 = &DAT_180041591;
    local_118 = &DAT_180041592;
    local_108 = &DAT_180041593;
    local_298 = "";
    local_290 = "";
    local_288 = "";
    local_280 = "";
    local_278 = "\x01\x01\x01\x01";
    local_270 = "\x01\x01\x01";
    local_268 = "\x01\x01";
    local_260 = "\x01";
    local_258 = "";
    local_250 = "";
    local_248 = "";
    local_240 = "";
    local_1f0 = 0x90;
    local_1e0 = 0x94;
    local_1d0 = 0x98;
    local_1c0 = 0x9c;
    local_1b0 = 0xa0;
    local_1a0 = 0xa4;
    local_190 = 0xa8;
    local_180 = 0xac;
    local_170 = 0xb0;
    local_160 = 0xb4;
    local_150 = 0xb8;
    local_140 = 0xbc;
    local_130 = 0xc0;
    local_120 = 0xc4;
    local_110 = 200;
    local_100 = 0xcc;
  }
  else {
    if ((param_3 != 0xc0) && (param_3 != 0x100)) goto LAB_180033054;
    local_2a8 = 0x50;
    local_238 = &DAT_180041594;
    local_298 = "\x01\x01";
    local_228 = &DAT_180041595;
    local_290 = "\x01";
    local_218 = &DAT_180041596;
    local_288 = "";
    local_208 = &DAT_180041597;
    local_280 = "\x01\x01\x01\x01";
    local_1f8 = &DAT_180041598;
    local_278 = "\x01\x01\x01";
    local_1e8 = &DAT_180041599;
    local_270 = "\x01\x01";
    local_1d8 = &DAT_18004159a;
    local_268 = "\x01";
    local_1c8 = &DAT_18004159b;
    local_260 = "";
    local_1b8 = &DAT_18004159c;
    local_258 = "\x01\x01";
    local_1a8 = &DAT_18004159d;
    local_250 = "\x01";
    local_198 = &DAT_18004159e;
    local_128 = &DAT_1800415a5;
    local_188 = &DAT_18004159f;
    local_248 = "";
    local_178 = &DAT_1800415a0;
    local_118 = &DAT_1800415a6;
    local_168 = &DAT_1800415a1;
    pcVar6 = "\x01";
    local_230 = 0xb0;
    local_158 = &DAT_1800415a2;
    pcVar12 = "\x01\x01\x01\x01";
    local_220 = 0xb4;
    local_148 = &DAT_1800415a3;
    pcVar11 = "\x01\x01\x01";
    local_210 = 0xb8;
    local_138 = &DAT_1800415a4;
    local_240 = "\x01";
    local_200 = 0xbc;
    local_108 = &DAT_1800415a7;
    uVar1 = 4;
    local_1f0 = 0xc0;
    local_1e0 = 0xc4;
    local_1d0 = 200;
    local_1c0 = 0xcc;
    local_1b0 = 0xd0;
    local_1a0 = 0xd4;
    local_190 = 0xd8;
    local_180 = 0xdc;
    local_170 = 0xe0;
    local_160 = 0xe4;
    local_150 = 0xe8;
    local_140 = 0xec;
    local_130 = 0xf0;
    local_120 = 0xf4;
    local_110 = 0xf8;
    local_100 = 0xfc;
  }
  *param_1 = uVar1;
  if ((ulonglong)(param_3 >> 3) != 0) {
    memcpy(&local_b8,param_2,(ulonglong)(param_3 >> 3));
  }
  if (param_3 == 0xc0) {
    local_a0._0_4_ =
         CONCAT13(~local_a8._3_1_,
                  CONCAT12(~local_a8._2_1_,CONCAT11(~local_a8._1_1_,~(byte)local_a8)));
    local_a0 = CONCAT17(~local_a8._7_1_,
                        CONCAT16(~local_a8._6_1_,
                                 CONCAT15(~local_a8._5_1_,CONCAT14(~local_a8._4_1_,(uint)local_a0)))
                       );
  }
  local_68[0] = 0xa09e667f;
  local_68[1] = 0x3bcc908b;
  local_68[2] = 0xb67ae858;
  local_68[3] = 0x4caa73b2;
  local_68[4] = 0xc6ef372f;
  local_68[5] = 0xe94f82be;
  local_68[6] = 0x54ff53a5;
  local_68[7] = 0xf1d36f1c;
  local_68[8] = 0x10e527fa;
  local_68[9] = 0xde682d1d;
  local_68[10] = 0xb05688c2;
  local_68[0xb] = 0xb3e6c1fd;
  uVar7 = (uint)local_a8 >> 0x18 | ((uint)local_a8 & 0xff0000) >> 8 | ((uint)local_a8 & 0xff00) << 8
          | (uint)local_a8 << 0x18;
  uVar4 = local_a8._4_4_ >> 0x18 | (local_a8._4_4_ & 0xff0000) >> 8 | (local_a8._4_4_ & 0xff00) << 8
          | local_a8._4_4_ << 0x18;
  uVar3 = (uint)local_a0 >> 0x18 | ((uint)local_a0 & 0xff0000) >> 8 | ((uint)local_a0 & 0xff00) << 8
          | (uint)local_a0 << 0x18;
  uVar10 = local_b8._4_4_ >> 0x18 | (local_b8._4_4_ & 0xff0000) >> 8 |
           (local_b8._4_4_ & 0xff00) << 8 | local_b8._4_4_ << 0x18;
  uVar9 = (uint)local_b0 >> 0x18 | ((uint)local_b0 & 0xff0000) >> 8 | ((uint)local_b0 & 0xff00) << 8
          | (uint)local_b0 << 0x18;
  uVar2 = local_a0._4_4_ >> 0x18 | (local_a0._4_4_ & 0xff0000) >> 8 | (local_a0._4_4_ & 0xff00) << 8
          | local_a0._4_4_ << 0x18;
  _local_e8 = CONCAT44(uVar4,uVar7);
  uVar8 = local_b0._4_4_ >> 0x18 | (local_b0._4_4_ & 0xff0000) >> 8 | (local_b0._4_4_ & 0xff00) << 8
          | local_b0._4_4_ << 0x18;
  uVar5 = (uint)local_b8 >> 0x18 | ((uint)local_b8 & 0xff0000) >> 8 | ((uint)local_b8 & 0xff00) << 8
          | (uint)local_b8 << 0x18;
  _uStack_e0 = CONCAT44(uVar2,uVar3);
  local_d8 = CONCAT44(uVar4 ^ uVar10,uVar7 ^ uVar5);
  uStack_d0 = CONCAT44(uVar2 ^ uVar8,uVar3 ^ uVar9);
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_f8 = CONCAT44(uVar10,uVar5);
  uStack_f0 = CONCAT44(uVar8,uVar9);
  FUN_180031850((uint *)&local_d8,local_68,(uint *)&uStack_d0);
  FUN_180031850((uint *)&uStack_d0,local_68 + 2,(uint *)&local_d8);
  local_d8 = local_f8 ^ local_d8;
  uStack_d0 = uStack_f0 ^ uStack_d0;
  FUN_180031850((uint *)&local_d8,local_68 + 4,(uint *)&uStack_d0);
  FUN_180031850((uint *)&uStack_d0,local_68 + 6,(uint *)&local_d8);
  if (0x80 < param_3) {
    local_c8[1] = local_d8._4_4_ ^ uStack_e4;
    local_c8[0] = (uint)local_d8 ^ local_e8;
    local_c8[3] = uStack_d0._4_4_ ^ uStack_dc;
    local_c8[2] = (uint)uStack_d0 ^ uStack_e0;
    FUN_180031850(local_c8,local_68 + 8,local_c8 + 2);
    FUN_180031850(local_c8 + 2,local_68 + 10,local_c8);
  }
  if (*pcVar6 == '\0') {
    uVar2 = (uint)local_a8;
    uVar3 = local_a8._4_4_;
    uVar4 = (uint)local_a0;
    uVar5 = local_a0._4_4_;
  }
  else {
    uVar2 = local_f8._4_4_ >> 0x11 ^ (uint)local_f8 << 0xf;
    uVar3 = (uint)uStack_f0 >> 0x11 ^ local_f8._4_4_ << 0xf;
    uVar4 = uStack_f0._4_4_ >> 0x11 ^ (uint)uStack_f0 << 0xf;
    uVar5 = uStack_f0._4_4_ << 0xf ^ (uint)local_f8 >> 0x11;
  }
  if (pcVar6[1] == '\0') {
    local_2c8 = local_90._4_4_;
    local_2a0 = (uint)local_90;
    uVar7 = (uint)local_98;
    uVar8 = local_98._4_4_;
  }
  else {
    local_2a0 = uStack_f0._4_4_ >> 2 ^ (uint)uStack_f0 << 0x1e;
    local_2c8 = uStack_f0._4_4_ << 0x1e ^ (uint)local_f8 >> 2;
    uVar7 = local_f8._4_4_ >> 2 ^ (uint)local_f8 << 0x1e;
    uVar8 = (uint)uStack_f0 >> 2 ^ local_f8._4_4_ << 0x1e;
  }
  if (*pcVar12 == '\0') {
    local_2bc = local_80._4_4_;
    local_2c0 = (uint)local_80;
    local_2c4 = local_88._4_4_;
    uVar9 = (uint)local_88;
  }
  else {
    local_2c4 = (uint)uStack_f0 >> 0x13 ^ local_f8._4_4_ << 0xd;
    local_2c0 = uStack_f0._4_4_ >> 0x13 ^ (uint)uStack_f0 << 0xd;
    local_2bc = uStack_f0._4_4_ << 0xd ^ (uint)local_f8 >> 0x13;
    uVar9 = local_f8._4_4_ >> 0x13 ^ (uint)local_f8 << 0xd;
  }
  if (*pcVar11 == '\0') {
    local_2ac = local_6c;
    local_2b0 = local_70;
    local_2b4 = local_74;
    local_2b8 = local_78;
  }
  else {
    local_2b8 = local_f8._4_4_ >> 4 ^ (uint)local_f8 << 0x1c;
    local_2b4 = (uint)uStack_f0 >> 4 ^ local_f8._4_4_ << 0x1c;
    local_2b0 = uStack_f0._4_4_ >> 4 ^ (uint)uStack_f0 << 0x1c;
    local_2ac = uStack_f0._4_4_ << 0x1c ^ (uint)local_f8 >> 4;
  }
  if ((&DAT_180041710)[local_2a8] != -1) {
    _Dst[(char)(&DAT_180041710)[local_2a8]] = (uint)local_f8;
  }
  if ((&UNK_180041711)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041711)[local_2a8]] = local_f8._4_4_;
  }
  if ((&UNK_180041712)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041712)[local_2a8]] = (uint)uStack_f0;
  }
  if ((&UNK_180041713)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041713)[local_2a8]] = uStack_f0._4_4_;
  }
  if ((&UNK_180041714)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041714)[local_2a8]] = uVar2;
  }
  if ((&UNK_180041715)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041715)[local_2a8]] = uVar3;
  }
  if ((&UNK_180041716)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041716)[local_2a8]] = uVar4;
  }
  if ((&UNK_180041717)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041717)[local_2a8]] = uVar5;
  }
  if ((&UNK_180041718)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041718)[local_2a8]] = uVar7;
  }
  if ((&UNK_180041719)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041719)[local_2a8]] = uVar8;
  }
  if ((&UNK_18004171a)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004171a)[local_2a8]] = local_2a0;
  }
  if ((&UNK_18004171b)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004171b)[local_2a8]] = local_2c8;
  }
  if ((&UNK_18004171c)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004171c)[local_2a8]] = uVar9;
  }
  if ((&UNK_18004171d)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004171d)[local_2a8]] = local_2c4;
  }
  if ((&UNK_18004171e)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004171e)[local_2a8]] = local_2c0;
  }
  if ((&UNK_18004171f)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004171f)[local_2a8]] = local_2bc;
  }
  if ((&UNK_180041720)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041720)[local_2a8]] = local_2b8;
  }
  if ((&UNK_180041721)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041721)[local_2a8]] = local_2b4;
  }
  if ((&UNK_180041722)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041722)[local_2a8]] = local_2b0;
  }
  if ((&UNK_180041723)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041723)[local_2a8]] = local_2ac;
  }
  uVar10 = local_2a0;
  if (0x80 < local_29c) {
    if (*local_298 != '\0') {
      uVar2 = uStack_e4 >> 0x11 ^ local_e8 << 0xf;
      uVar3 = uStack_e0 >> 0x11 ^ uStack_e4 << 0xf;
      uVar4 = uStack_dc >> 0x11 ^ uStack_e0 << 0xf;
      uVar5 = uStack_dc << 0xf ^ local_e8 >> 0x11;
    }
    if (*local_290 != '\0') {
      uVar7 = uStack_e4 >> 2 ^ local_e8 << 0x1e;
      uVar8 = uStack_e0 >> 2 ^ uStack_e4 << 0x1e;
      uVar10 = uStack_dc >> 2 ^ uStack_e0 << 0x1e;
      local_2c8 = uStack_dc << 0x1e ^ local_e8 >> 2;
    }
    if (*local_288 != '\0') {
      uVar9 = uStack_e4 >> 0x13 ^ local_e8 << 0xd;
      local_2c4 = uStack_e0 >> 0x13 ^ uStack_e4 << 0xd;
      local_2c0 = uStack_dc >> 0x13 ^ uStack_e0 << 0xd;
      local_2bc = uStack_dc << 0xd ^ local_e8 >> 0x13;
    }
    if (*local_280 != '\0') {
      local_2b8 = uStack_e4 >> 4 ^ local_e8 << 0x1c;
      local_2b4 = uStack_e0 >> 4 ^ uStack_e4 << 0x1c;
      local_2b0 = uStack_dc >> 4 ^ uStack_e0 << 0x1c;
      local_2ac = uStack_dc << 0x1c ^ local_e8 >> 4;
    }
    if ((&UNK_180041724)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041724)[local_2a8]] = local_e8;
    }
    if ((&UNK_180041725)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041725)[local_2a8]] = uStack_e4;
    }
    if ((&UNK_180041726)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041726)[local_2a8]] = uStack_e0;
    }
    if ((&UNK_180041727)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041727)[local_2a8]] = uStack_dc;
    }
    if ((&UNK_180041728)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041728)[local_2a8]] = uVar2;
    }
    if ((&UNK_180041729)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041729)[local_2a8]] = uVar3;
    }
    if ((&UNK_18004172a)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004172a)[local_2a8]] = uVar4;
    }
    if ((&UNK_18004172b)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004172b)[local_2a8]] = uVar5;
    }
    if ((&UNK_18004172c)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004172c)[local_2a8]] = uVar7;
    }
    if ((&UNK_18004172d)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004172d)[local_2a8]] = uVar8;
    }
    if ((&UNK_18004172e)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004172e)[local_2a8]] = uVar10;
    }
    if ((&UNK_18004172f)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004172f)[local_2a8]] = local_2c8;
    }
    if ((&UNK_180041730)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041730)[local_2a8]] = uVar9;
    }
    if ((&UNK_180041731)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041731)[local_2a8]] = local_2c4;
    }
    if ((&UNK_180041732)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041732)[local_2a8]] = local_2c0;
    }
    if ((&UNK_180041733)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041733)[local_2a8]] = local_2bc;
    }
    if ((&UNK_180041734)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041734)[local_2a8]] = local_2b8;
    }
    if ((&UNK_180041735)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041735)[local_2a8]] = local_2b4;
    }
    if ((&UNK_180041736)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041736)[local_2a8]] = local_2b0;
    }
    if ((&UNK_180041737)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041737)[local_2a8]] = local_2ac;
    }
  }
  if (*local_278 != '\0') {
    uVar2 = local_d8._4_4_ >> 0x11 ^ (uint)local_d8 << 0xf;
    uVar3 = (uint)uStack_d0 >> 0x11 ^ local_d8._4_4_ << 0xf;
    uVar4 = uStack_d0._4_4_ >> 0x11 ^ (uint)uStack_d0 << 0xf;
    uVar5 = uStack_d0._4_4_ << 0xf ^ (uint)local_d8 >> 0x11;
  }
  if (*local_270 != '\0') {
    uVar7 = (uint)local_d8 << 0x1e ^ local_d8._4_4_ >> 2;
    uVar8 = local_d8._4_4_ << 0x1e ^ (uint)uStack_d0 >> 2;
    uVar10 = (uint)uStack_d0 << 0x1e ^ uStack_d0._4_4_ >> 2;
    local_2c8 = uStack_d0._4_4_ << 0x1e ^ (uint)local_d8 >> 2;
  }
  if (*local_268 != '\0') {
    uVar9 = local_d8._4_4_ >> 0x13 ^ (uint)local_d8 << 0xd;
    local_2c4 = (uint)uStack_d0 >> 0x13 ^ local_d8._4_4_ << 0xd;
    local_2c0 = uStack_d0._4_4_ >> 0x13 ^ (uint)uStack_d0 << 0xd;
    local_2bc = uStack_d0._4_4_ << 0xd ^ (uint)local_d8 >> 0x13;
  }
  if (*local_260 != '\0') {
    local_2b8 = (uint)local_d8 << 0x1c ^ local_d8._4_4_ >> 4;
    local_2b4 = local_d8._4_4_ << 0x1c ^ (uint)uStack_d0 >> 4;
    local_2b0 = (uint)uStack_d0 << 0x1c ^ uStack_d0._4_4_ >> 4;
    local_2ac = uStack_d0._4_4_ << 0x1c ^ (uint)local_d8 >> 4;
  }
  if ((&UNK_180041738)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041738)[local_2a8]] = (uint)local_d8;
  }
  if ((&UNK_180041739)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041739)[local_2a8]] = local_d8._4_4_;
  }
  if ((&UNK_18004173a)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004173a)[local_2a8]] = (uint)uStack_d0;
  }
  if ((&UNK_18004173b)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004173b)[local_2a8]] = uStack_d0._4_4_;
  }
  if ((&UNK_18004173c)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004173c)[local_2a8]] = uVar2;
  }
  if ((&UNK_18004173d)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004173d)[local_2a8]] = uVar3;
  }
  if ((&UNK_18004173e)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004173e)[local_2a8]] = uVar4;
  }
  if ((&UNK_18004173f)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004173f)[local_2a8]] = uVar5;
  }
  if ((&UNK_180041740)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041740)[local_2a8]] = uVar7;
  }
  if ((&UNK_180041741)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041741)[local_2a8]] = uVar8;
  }
  if ((&UNK_180041742)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041742)[local_2a8]] = uVar10;
  }
  if ((&UNK_180041743)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041743)[local_2a8]] = local_2c8;
  }
  if ((&UNK_180041744)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041744)[local_2a8]] = uVar9;
  }
  if ((&UNK_180041745)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041745)[local_2a8]] = local_2c4;
  }
  if ((&UNK_180041746)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041746)[local_2a8]] = local_2c0;
  }
  if ((&UNK_180041747)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041747)[local_2a8]] = local_2bc;
  }
  if ((&UNK_180041748)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041748)[local_2a8]] = local_2b8;
  }
  if ((&UNK_180041749)[local_2a8] != -1) {
    _Dst[(char)(&UNK_180041749)[local_2a8]] = local_2b4;
  }
  if ((&UNK_18004174a)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004174a)[local_2a8]] = local_2b0;
  }
  if ((&UNK_18004174b)[local_2a8] != -1) {
    _Dst[(char)(&UNK_18004174b)[local_2a8]] = local_2ac;
  }
  if (0x80 < local_29c) {
    if (*local_258 != '\0') {
      uVar2 = local_c8[1] >> 0x11 ^ local_c8[0] << 0xf;
      uVar3 = local_c8[2] >> 0x11 ^ local_c8[1] << 0xf;
      uVar4 = local_c8[3] >> 0x11 ^ local_c8[2] << 0xf;
      uVar5 = local_c8[3] << 0xf ^ local_c8[0] >> 0x11;
    }
    if (*local_250 != '\0') {
      uVar7 = local_c8[0] << 0x1e ^ local_c8[1] >> 2;
      uVar8 = local_c8[1] << 0x1e ^ local_c8[2] >> 2;
      uVar10 = local_c8[2] << 0x1e ^ local_c8[3] >> 2;
      local_2c8 = local_c8[3] << 0x1e ^ local_c8[0] >> 2;
    }
    if (*local_248 != '\0') {
      uVar9 = local_c8[1] >> 0x13 ^ local_c8[0] << 0xd;
      local_2c4 = local_c8[2] >> 0x13 ^ local_c8[1] << 0xd;
      local_2c0 = local_c8[3] >> 0x13 ^ local_c8[2] << 0xd;
      local_2bc = local_c8[3] << 0xd ^ local_c8[0] >> 0x13;
    }
    if (*local_240 != '\0') {
      local_2b8 = local_c8[0] << 0x1c ^ local_c8[1] >> 4;
      local_2b4 = local_c8[1] << 0x1c ^ local_c8[2] >> 4;
      local_2b0 = local_c8[2] << 0x1c ^ local_c8[3] >> 4;
      local_2ac = local_c8[3] << 0x1c ^ local_c8[0] >> 4;
    }
    if ((&UNK_18004174c)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004174c)[local_2a8]] = local_c8[0];
    }
    if ((&UNK_18004174d)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004174d)[local_2a8]] = local_c8[1];
    }
    if ((&UNK_18004174e)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004174e)[local_2a8]] = local_c8[2];
    }
    if ((&UNK_18004174f)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004174f)[local_2a8]] = local_c8[3];
    }
    if ((&UNK_180041750)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041750)[local_2a8]] = uVar2;
    }
    if ((&UNK_180041751)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041751)[local_2a8]] = uVar3;
    }
    if ((&UNK_180041752)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041752)[local_2a8]] = uVar4;
    }
    if ((&UNK_180041753)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041753)[local_2a8]] = uVar5;
    }
    if ((&UNK_180041754)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041754)[local_2a8]] = uVar7;
    }
    if ((&UNK_180041755)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041755)[local_2a8]] = uVar8;
    }
    if ((&UNK_180041756)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041756)[local_2a8]] = uVar10;
    }
    if ((&UNK_180041757)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041757)[local_2a8]] = local_2c8;
    }
    if ((&UNK_180041758)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041758)[local_2a8]] = uVar9;
    }
    if ((&UNK_180041759)[local_2a8] != -1) {
      _Dst[(char)(&UNK_180041759)[local_2a8]] = local_2c4;
    }
    if ((&UNK_18004175a)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004175a)[local_2a8]] = local_2c0;
    }
    if ((&UNK_18004175b)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004175b)[local_2a8]] = local_2bc;
    }
    if ((&UNK_18004175c)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004175c)[local_2a8]] = local_2b8;
    }
    if ((&UNK_18004175d)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004175d)[local_2a8]] = local_2b4;
    }
    if ((&UNK_18004175e)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004175e)[local_2a8]] = local_2b0;
    }
    if ((&UNK_18004175f)[local_2a8] != -1) {
      _Dst[(char)(&UNK_18004175f)[local_2a8]] = local_2ac;
    }
  }
  if (*local_238 != -1) {
    *(undefined4 *)(local_230 + (longlong)_Dst) = _Dst[*local_238];
  }
  if (*local_228 != -1) {
    *(undefined4 *)(local_220 + (longlong)_Dst) = _Dst[*local_228];
  }
  if (*local_218 != -1) {
    *(undefined4 *)(local_210 + (longlong)_Dst) = _Dst[*local_218];
  }
  if (*local_208 != -1) {
    *(undefined4 *)(local_200 + (longlong)_Dst) = _Dst[*local_208];
  }
  if (*local_1f8 != -1) {
    *(undefined4 *)(local_1f0 + (longlong)_Dst) = _Dst[*local_1f8];
  }
  if (*local_1e8 != -1) {
    *(undefined4 *)(local_1e0 + (longlong)_Dst) = _Dst[*local_1e8];
  }
  if (*local_1d8 != -1) {
    *(undefined4 *)(local_1d0 + (longlong)_Dst) = _Dst[*local_1d8];
  }
  if (*local_1c8 != -1) {
    *(undefined4 *)(local_1c0 + (longlong)_Dst) = _Dst[*local_1c8];
  }
  if (*local_1b8 != -1) {
    *(undefined4 *)(local_1b0 + (longlong)_Dst) = _Dst[*local_1b8];
  }
  if (*local_1a8 != -1) {
    *(undefined4 *)(local_1a0 + (longlong)_Dst) = _Dst[*local_1a8];
  }
  if (*local_198 != -1) {
    *(undefined4 *)(local_190 + (longlong)_Dst) = _Dst[*local_198];
  }
  if (*local_188 != -1) {
    *(undefined4 *)(local_180 + (longlong)_Dst) = _Dst[*local_188];
  }
  if (*local_178 != -1) {
    *(undefined4 *)(local_170 + (longlong)_Dst) = _Dst[*local_178];
  }
  if (*local_168 != -1) {
    *(undefined4 *)(local_160 + (longlong)_Dst) = _Dst[*local_168];
  }
  if (*local_158 != -1) {
    *(undefined4 *)(local_150 + (longlong)_Dst) = _Dst[*local_158];
  }
  if (*local_148 != -1) {
    *(undefined4 *)(local_140 + (longlong)_Dst) = _Dst[*local_148];
  }
  if (*local_138 != -1) {
    *(undefined4 *)(local_130 + (longlong)_Dst) = _Dst[*local_138];
  }
  if (*local_128 != -1) {
    *(undefined4 *)(local_120 + (longlong)_Dst) = _Dst[*local_128];
  }
  if (*local_118 != -1) {
    *(undefined4 *)(local_110 + (longlong)_Dst) = _Dst[*local_118];
  }
  if (*local_108 != -1) {
    *(undefined4 *)(local_100 + (longlong)_Dst) = _Dst[*local_108];
  }
LAB_180033054:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_2e8);
  return;
}




undefined8 FUN_1800331a0(int *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  if (param_2 < 2) {
    iVar11 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar12 = param_3[3];
    uVar12 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18) ^
             param_1[4];
    uVar3 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
            param_1[1];
    uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) ^
            param_1[2];
    uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ^
            param_1[3];
    puVar1 = (uint *)(param_1 + 5);
    puVar2 = puVar1;
    if (iVar11 != 0) {
      while( true ) {
        uVar6 = puVar1[1] ^ uVar4;
        uVar7 = *puVar1 ^ uVar3;
        uVar10 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar6 >> 0x18],
                                            (&DAT_180041b60)[uVar6 >> 0x10 & 0xff]),
                                   (&DAT_180041900)[uVar6 >> 8 & 0xff]),
                          (&DAT_180041a60)[uVar6 & 0xff]);
        uVar7 = (uVar10 << 8 | (uint)(byte)(&DAT_180041c60)[uVar6 >> 0x18]) ^
                CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar7 >> 0x18],
                                           (&DAT_180041c60)[uVar7 >> 0x10 & 0xff]),
                                  (&DAT_180041b60)[uVar7 >> 8 & 0xff]),
                         (&DAT_180041900)[uVar7 & 0xff]);
        uVar10 = uVar10 ^ (uVar7 << 0x10 | uVar7 >> 0x10);
        uVar7 = uVar7 ^ (uVar10 >> 8 | uVar10 << 0x18);
        uVar6 = puVar1[3] ^ uVar12 ^ uVar7;
        uVar10 = (uVar7 >> 8 | uVar7 << 0x18) ^ uVar5 ^ uVar10;
        uVar8 = puVar1[2] ^ uVar10;
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar6 >> 0x18],
                                           (&DAT_180041b60)[uVar6 >> 0x10 & 0xff]),
                                  (&DAT_180041900)[uVar6 >> 8 & 0xff]),
                         (&DAT_180041a60)[uVar6 & 0xff]);
        uVar8 = (uVar5 << 8 | (uint)(byte)(&DAT_180041c60)[uVar6 >> 0x18]) ^
                CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar8 >> 0x18],
                                           (&DAT_180041c60)[uVar8 >> 0x10 & 0xff]),
                                  (&DAT_180041b60)[uVar8 >> 8 & 0xff]),
                         (&DAT_180041900)[uVar8 & 0xff]);
        uVar5 = uVar5 ^ (uVar8 << 0x10 | uVar8 >> 0x10);
        uVar8 = uVar8 ^ (uVar5 >> 8 | uVar5 << 0x18);
        uVar6 = puVar1[5] ^ uVar4 ^ uVar8;
        uVar5 = (uVar8 >> 8 | uVar8 << 0x18) ^ uVar3 ^ uVar5;
        uVar9 = puVar1[4] ^ uVar5;
        uVar3 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar6 >> 0x18],
                                           (&DAT_180041b60)[uVar6 >> 0x10 & 0xff]),
                                  (&DAT_180041900)[uVar6 >> 8 & 0xff]),
                         (&DAT_180041a60)[uVar6 & 0xff]);
        uVar9 = (uVar3 << 8 | (uint)(byte)(&DAT_180041c60)[uVar6 >> 0x18]) ^
                CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar9 >> 0x18],
                                           (&DAT_180041c60)[uVar9 >> 0x10 & 0xff]),
                                  (&DAT_180041b60)[uVar9 >> 8 & 0xff]),
                         (&DAT_180041900)[uVar9 & 0xff]);
        uVar3 = uVar3 ^ (uVar9 << 0x10 | uVar9 >> 0x10);
        uVar9 = uVar9 ^ (uVar3 >> 8 | uVar3 << 0x18);
        uVar12 = uVar12 ^ uVar7 ^ uVar9;
        uVar6 = puVar1[7] ^ uVar12;
        uVar3 = (uVar9 >> 8 | uVar9 << 0x18) ^ uVar10 ^ uVar3;
        uVar7 = puVar1[6] ^ uVar3;
        uVar10 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar6 >> 0x18],
                                            (&DAT_180041b60)[uVar6 >> 0x10 & 0xff]),
                                   (&DAT_180041900)[uVar6 >> 8 & 0xff]),
                          (&DAT_180041a60)[uVar6 & 0xff]);
        uVar7 = (uVar10 << 8 | (uint)(byte)(&DAT_180041c60)[uVar6 >> 0x18]) ^
                CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar7 >> 0x18],
                                           (&DAT_180041c60)[uVar7 >> 0x10 & 0xff]),
                                  (&DAT_180041b60)[uVar7 >> 8 & 0xff]),
                         (&DAT_180041900)[uVar7 & 0xff]);
        uVar10 = uVar10 ^ (uVar7 << 0x10 | uVar7 >> 0x10);
        uVar7 = uVar7 ^ (uVar10 >> 8 | uVar10 << 0x18);
        uVar4 = uVar4 ^ uVar8 ^ uVar7;
        uVar6 = puVar1[9] ^ uVar4;
        uVar10 = (uVar7 >> 8 | uVar7 << 0x18) ^ uVar5 ^ uVar10;
        uVar7 = puVar1[8] ^ uVar10;
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar6 >> 0x18],
                                           (&DAT_180041b60)[uVar6 >> 0x10 & 0xff]),
                                  (&DAT_180041900)[uVar6 >> 8 & 0xff]),
                         (&DAT_180041a60)[uVar6 & 0xff]);
        uVar7 = (uVar5 << 8 | (uint)(byte)(&DAT_180041c60)[uVar6 >> 0x18]) ^
                CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar7 >> 0x18],
                                           (&DAT_180041c60)[uVar7 >> 0x10 & 0xff]),
                                  (&DAT_180041b60)[uVar7 >> 8 & 0xff]),
                         (&DAT_180041900)[uVar7 & 0xff]);
        uVar5 = uVar5 ^ (uVar7 << 0x10 | uVar7 >> 0x10);
        uVar7 = uVar7 ^ (uVar5 >> 8 | uVar5 << 0x18);
        uVar12 = uVar12 ^ uVar7;
        uVar6 = puVar1[0xb] ^ uVar12;
        uVar5 = (uVar7 >> 8 | uVar7 << 0x18) ^ uVar3 ^ uVar5;
        uVar7 = puVar1[10] ^ uVar5;
        uVar3 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041c60)[uVar6 >> 0x18],
                                           (&DAT_180041b60)[uVar6 >> 0x10 & 0xff]),
                                  (&DAT_180041900)[uVar6 >> 8 & 0xff]),
                         (&DAT_180041a60)[uVar6 & 0xff]);
        puVar2 = puVar1 + 0xc;
        uVar6 = (uVar3 << 8 | (uint)(byte)(&DAT_180041c60)[uVar6 >> 0x18]) ^
                CONCAT31(CONCAT21(CONCAT11((&DAT_180041a60)[uVar7 >> 0x18],
                                           (&DAT_180041c60)[uVar7 >> 0x10 & 0xff]),
                                  (&DAT_180041b60)[uVar7 >> 8 & 0xff]),
                         (&DAT_180041900)[uVar7 & 0xff]);
        uVar3 = uVar3 ^ (uVar6 << 0x10 | uVar6 >> 0x10);
        uVar6 = uVar6 ^ (uVar3 >> 8 | uVar3 << 0x18);
        uVar4 = uVar4 ^ uVar6;
        uVar3 = (uVar6 >> 8 | uVar6 << 0x18) ^ uVar10 ^ uVar3;
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) break;
        uVar5 = (puVar1[0xf] | uVar12) ^ uVar5;
        uVar4 = ((uVar3 & *puVar2) << 1 | (uint)((int)(uVar3 & *puVar2) < 0)) ^ uVar4;
        uVar12 = ((puVar1[0xe] & uVar5) << 1 | (uint)((int)(puVar1[0xe] & uVar5) < 0)) ^ uVar12;
        uVar3 = (puVar1[0xd] | uVar4) ^ uVar3;
        puVar1 = puVar1 + 0x10;
      }
    }
    uVar5 = uVar5 ^ *puVar2;
    uVar12 = uVar12 ^ puVar2[1];
    uVar3 = uVar3 ^ puVar2[2];
    uVar4 = uVar4 ^ puVar2[3];
    *param_4 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    param_4[1] = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
    ;
    param_4[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    param_4[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    return 0;
  }
  return 0xffffffdc;
}




void FUN_180033a10(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *param_2;
  *param_2 = *param_1;
  *param_1 = uVar6 >> 0x10 ^ uVar6 << 0x10;
  uVar4 = *param_3;
  uVar5 = *param_4 >> 0x10 ^ *param_4 << 0x10;
  *param_4 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8;
  uVar2 = (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
  *param_3 = uVar2;
  uVar4 = *param_4;
  uVar6 = uVar6 ^ uVar4;
  uVar1 = *param_2;
  uVar3 = uVar1 >> 0x10 ^ uVar1 << 0x10;
  uVar2 = (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8 ^ uVar2 ^ uVar3;
  uVar6 = *param_1;
  uVar5 = uVar5 ^ uVar4 >> 0x10 ^ uVar4 << 0x10;
  *param_2 = uVar1 ^ uVar5 ^ uVar2;
  uVar3 = uVar3 ^ (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8;
  uVar6 = uVar5 >> 0x10 ^ uVar5 << 0x10 ^ uVar2;
  *param_1 = *param_1 ^ (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8;
  uVar4 = uVar2 >> 0x10 ^ uVar2 << 0x10;
  *param_4 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8 ^ *param_4 ^ uVar3;
  uVar6 = uVar3 >> 0x10 ^ uVar3 << 0x10;
  *param_3 = (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8 ^ *param_3 ^ uVar4;
  return;
}




void FUN_180033ba0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint3 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = param_2[2] ^ param_3[2];
  uVar2 = *param_2 ^ *param_3;
  uVar5 = param_2[3] ^ param_3[3];
  uVar11 = param_2[1] ^ param_3[1];
  uVar1 = CONCAT21(CONCAT11((&DAT_180041ea0)[uVar9 >> 0x18],(&DAT_1800420a0)[uVar9 >> 0x10 & 0xff]),
                   (&DAT_180041fa0)[uVar9 >> 8 & 0xff]);
  iVar3 = CONCAT31(uVar1,(&DAT_180041da0)[uVar9 & 0xff]);
  uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar11 >> 0x18],
                                     (&DAT_1800420a0)[uVar11 >> 0x10 & 0xff]),
                            (&DAT_180041fa0)[uVar11 >> 8 & 0xff]),(&DAT_180041da0)[uVar11 & 0xff]);
  uVar6 = (uint)CONCAT11((&DAT_180041ea0)[uVar5 >> 0x18],(&DAT_1800420a0)[uVar5 >> 0x10 & 0xff]) ^
          CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar5 >> 0x18],
                                     (&DAT_1800420a0)[uVar5 >> 0x10 & 0xff]),
                            (&DAT_180041fa0)[uVar5 >> 8 & 0xff]),(&DAT_180041da0)[uVar5 & 0xff]) <<
          0x10;
  uVar13 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar2 >> 0x18],
                                      (&DAT_1800420a0)[uVar2 >> 0x10 & 0xff]),
                             (&DAT_180041fa0)[uVar2 >> 8 & 0xff]),(&DAT_180041da0)[uVar2 & 0xff]);
  uVar12 = uVar6 >> 8 & 0xff00ff;
  uVar5 = (uint)CONCAT11((&DAT_180041ea0)[uVar11 >> 0x18],(&DAT_1800420a0)[uVar11 >> 0x10 & 0xff]) ^
          uVar9 << 0x10;
  uVar10 = (uint)CONCAT11((&DAT_180041ea0)[uVar2 >> 0x18],(&DAT_1800420a0)[uVar2 >> 0x10 & 0xff]) ^
           uVar13 << 0x10;
  uVar11 = ((uint)uVar1 ^ iVar3 << 8) & 0xff00ff ^ iVar3 << 8;
  uVar9 = uVar9 ^ uVar11;
  uVar2 = ((uVar6 ^ uVar9) << 8 ^ uVar9 >> 8) & 0xff00ff ^ (uVar6 ^ uVar9) << 8 ^ uVar12 ^ uVar10;
  uVar7 = uVar6 ^ uVar11 >> 0x10 ^ uVar11 << 0x10;
  uVar10 = uVar10 ^ (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
  uVar4 = uVar7 >> 0x10 ^ uVar7 << 0x10 ^ uVar2;
  uVar8 = uVar2 >> 0x10 ^ uVar2 << 0x10;
  uVar9 = uVar10 >> 0x10 ^ uVar10 << 0x10;
  *param_1 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8 ^ *param_4 ^ uVar5;
  param_1[1] = param_4[1] ^ uVar13 ^ uVar2 ^ uVar7;
  param_1[2] = ((uVar6 ^ uVar9) << 8 ^ uVar9 >> 8) & 0xff00ff ^ (uVar6 ^ uVar9) << 8 ^ param_4[2] ^
               uVar12 ^ uVar8;
  param_1[3] = param_4[3] ^ uVar11 ^ (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8 ^ uVar10;
  return;
}




void FUN_180033ea0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint3 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = param_2[2] ^ param_3[2];
  uVar2 = *param_2 ^ *param_3;
  uVar5 = param_2[3] ^ param_3[3];
  uVar11 = param_2[1] ^ param_3[1];
  uVar1 = CONCAT21(CONCAT11((&DAT_180041fa0)[uVar9 >> 0x18],(&DAT_180041da0)[uVar9 >> 0x10 & 0xff]),
                   (&DAT_180041ea0)[uVar9 >> 8 & 0xff]);
  iVar3 = CONCAT31(uVar1,(&DAT_1800420a0)[uVar9 & 0xff]);
  uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar11 >> 0x18],
                                     (&DAT_180041da0)[uVar11 >> 0x10 & 0xff]),
                            (&DAT_180041ea0)[uVar11 >> 8 & 0xff]),(&DAT_1800420a0)[uVar11 & 0xff]);
  uVar6 = (uint)CONCAT11((&DAT_180041fa0)[uVar5 >> 0x18],(&DAT_180041da0)[uVar5 >> 0x10 & 0xff]) ^
          CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar5 >> 0x18],
                                     (&DAT_180041da0)[uVar5 >> 0x10 & 0xff]),
                            (&DAT_180041ea0)[uVar5 >> 8 & 0xff]),(&DAT_1800420a0)[uVar5 & 0xff]) <<
          0x10;
  uVar13 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar2 >> 0x18],
                                      (&DAT_180041da0)[uVar2 >> 0x10 & 0xff]),
                             (&DAT_180041ea0)[uVar2 >> 8 & 0xff]),(&DAT_1800420a0)[uVar2 & 0xff]);
  uVar12 = uVar6 >> 8 & 0xff00ff;
  uVar5 = (uint)CONCAT11((&DAT_180041fa0)[uVar11 >> 0x18],(&DAT_180041da0)[uVar11 >> 0x10 & 0xff]) ^
          uVar9 << 0x10;
  uVar10 = (uint)CONCAT11((&DAT_180041fa0)[uVar2 >> 0x18],(&DAT_180041da0)[uVar2 >> 0x10 & 0xff]) ^
           uVar13 << 0x10;
  uVar11 = ((uint)uVar1 ^ iVar3 << 8) & 0xff00ff ^ iVar3 << 8;
  uVar9 = uVar9 ^ uVar11;
  uVar2 = ((uVar6 ^ uVar9) << 8 ^ uVar9 >> 8) & 0xff00ff ^ (uVar6 ^ uVar9) << 8 ^ uVar12 ^ uVar10;
  uVar7 = uVar6 ^ uVar11 >> 0x10 ^ uVar11 << 0x10;
  uVar10 = uVar10 ^ (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8;
  uVar4 = uVar7 >> 0x10 ^ uVar7 << 0x10 ^ uVar2;
  uVar8 = uVar2 >> 0x10 ^ uVar2 << 0x10;
  uVar9 = uVar10 >> 0x10 ^ uVar10 << 0x10;
  *param_1 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8 ^ *param_4 ^ uVar5;
  param_1[1] = param_4[1] ^ uVar13 ^ uVar2 ^ uVar7;
  param_1[2] = ((uVar6 ^ uVar9) << 8 ^ uVar9 >> 8) & 0xff00ff ^ (uVar6 ^ uVar9) << 8 ^ param_4[2] ^
               uVar12 ^ uVar8;
  param_1[3] = param_4[3] ^ uVar11 ^ (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8 ^ uVar10;
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001800341d3) */

void FUN_1800341a0(uint *param_1,longlong param_2,longlong param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  longlong lVar7;
  
  bVar6 = param_4 & 0x1f;
  bVar1 = param_4 >> 5 & 3;
  uVar3 = *(uint *)(param_3 + (ulonglong)bVar1 * 4);
  bVar2 = 0x20 - bVar6;
  if (bVar6 == 0) {
    bVar2 = 0;
  }
  lVar7 = 4;
  puVar5 = param_1;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  do {
    bVar1 = bVar1 + 1 & 3;
    uVar4 = *(uint *)(param_3 + (ulonglong)bVar1 * 4);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar3 = uVar4 >> (bVar2 & 0x1f) | uVar3 << bVar6;
    *puVar5 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ^
              *(uint *)((param_2 - (longlong)param_1) + -4 + (longlong)(puVar5 + 1));
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 1;
    uVar3 = uVar4;
  } while (lVar7 != 0);
  return;
}




void FUN_180034260(char *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  char *local_c8;
  uint local_b8 [4];
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98 [4];
  uint local_88 [4];
  uint local_78 [12];
  ulonglong local_48;
  
  local_48 = DAT_18004e038 ^ (ulonglong)auStack_e8;
  local_78[0] = 0xb7c17c51;
  local_78[1] = 0x940a2227;
  local_78[2] = 0xe8ab13fe;
  local_78[3] = 0xe06e9afa;
  local_78[4] = 0xcc4ab16d;
  local_78[5] = 0x20c8219e;
  local_78[6] = 0xd5b128ff;
  local_78[7] = 0xb0e25def;
  local_78[8] = 0x1d3792db;
  local_78[9] = 0x70e92621;
  local_78[10] = 0x75972403;
  local_78[0xb] = 0xec9e804;
  local_c8 = param_1;
  if (((param_3 - 0x80 & 0xffffff3f) == 0) && (param_3 != 0x140)) {
    local_b8[0] = *param_2;
    local_b8[1] = param_2[1];
    local_b8[2] = param_2[2];
    local_b8[3] = param_2[3];
    local_a8 = 0;
    local_a0 = 0;
    if (0xbf < param_3) {
      local_a8 = *(undefined8 *)(param_2 + 4);
    }
    if (param_3 == 0x100) {
      local_a0 = *(undefined8 *)(param_2 + 6);
    }
    uVar2 = param_3 - 0x80 >> 6;
    *param_1 = ((char)uVar2 + '\x06') * '\x02';
    FUN_180033ba0((uint *)&local_a8,local_b8,local_78 + (ulonglong)uVar2 * 4,(uint *)&local_a8);
    uVar3 = (ulonglong)(uVar2 + 1);
    if (1 < uVar2) {
      uVar3 = 0;
    }
    FUN_180033ea0(local_98,(uint *)&local_a8,local_78 + uVar3 * 4,local_b8);
    uVar4 = (ulonglong)((uint)uVar3 + 1);
    if (1 < (uint)uVar3) {
      uVar4 = 0;
    }
    FUN_180033ba0(local_88,local_98,local_78 + uVar4 * 4,(uint *)&local_a8);
    uVar2 = 1;
    puVar6 = local_b8;
    lVar7 = 4;
    do {
      puVar5 = local_b8 + (ulonglong)(uVar2 & 3) * 4;
      FUN_1800341a0((uint *)((longlong)puVar6 + (longlong)(param_1 + (4 - (longlong)local_b8))),
                    (longlong)puVar6,(longlong)puVar5,0x6d);
      puVar1 = (uint *)((longlong)puVar6 + (longlong)(param_1 + (0x84 - (longlong)local_b8)));
      FUN_1800341a0(puVar1 + -0x10,(longlong)puVar6,(longlong)puVar5,0x61);
      FUN_1800341a0(puVar1,(longlong)puVar6,(longlong)puVar5,0x3d);
      FUN_1800341a0(puVar1 + 0x10,(longlong)puVar6,(longlong)puVar5,0x1f);
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    FUN_1800341a0((uint *)(local_c8 + 0x104),(longlong)local_b8,(longlong)&local_a8,0x13);
    puVar6 = local_b8;
    for (lVar7 = 0x40; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (uint *)((longlong)puVar6 + 1);
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_e8);
  return;
}




undefined8 FUN_1800344e0(byte *param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = FUN_180034260((char *)param_1,param_2,param_3);
  if ((int)uVar2 == 0) {
    bVar6 = *param_1;
    uVar7 = (ulonglong)bVar6;
    if (uVar7 != 0) {
      lVar8 = 0;
      pbVar3 = param_1 + uVar7 * 0x10 + 0xc;
      pbVar5 = param_1 + 0xc;
      do {
        uVar1 = *(undefined4 *)(pbVar5 + -8);
        lVar8 = lVar8 + 1;
        *(undefined4 *)(pbVar5 + -8) = *(undefined4 *)(pbVar3 + -8);
        *(undefined4 *)(pbVar3 + -8) = uVar1;
        uVar7 = uVar7 - 1;
        uVar1 = *(undefined4 *)(pbVar5 + -4);
        *(undefined4 *)(pbVar5 + -4) = *(undefined4 *)(pbVar3 + -4);
        *(undefined4 *)(pbVar3 + -4) = uVar1;
        uVar1 = *(undefined4 *)pbVar5;
        *(undefined4 *)pbVar5 = *(undefined4 *)pbVar3;
        *(undefined4 *)pbVar3 = uVar1;
        uVar1 = *(undefined4 *)(pbVar5 + 4);
        *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar3 + 4);
        *(undefined4 *)(pbVar3 + 4) = uVar1;
        pbVar3 = pbVar3 + -0x10;
        pbVar5 = pbVar5 + 0x10;
      } while (lVar8 < (longlong)uVar7);
      bVar6 = *param_1;
    }
    iVar4 = 1;
    if (1 < bVar6) {
      do {
        lVar8 = (longlong)iVar4 * 0x10;
        FUN_180033a10((uint *)(param_1 + lVar8 + 4),(uint *)(param_1 + lVar8 + 8),
                      (uint *)(param_1 + lVar8 + 0xc),(uint *)(param_1 + lVar8 + 0x10));
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)*param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1800345c0(byte *param_1,uint *param_2,uint *param_3)

{
  uint3 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar5 = param_2[2] ^ *(uint *)(param_1 + 0xc);
  uVar2 = *param_2 ^ *(uint *)(param_1 + 4);
  uVar11 = param_2[1] ^ *(uint *)(param_1 + 8);
  uVar8 = param_2[3] ^ *(uint *)(param_1 + 0x10);
  uVar1 = CONCAT21(CONCAT11((&DAT_180041ea0)[uVar5 >> 0x18],(&DAT_1800420a0)[uVar5 >> 0x10 & 0xff]),
                   (&DAT_180041fa0)[uVar5 >> 8 & 0xff]);
  iVar3 = CONCAT31(uVar1,(&DAT_180041da0)[uVar5 & 0xff]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar11 >> 0x18],
                                     (&DAT_1800420a0)[uVar11 >> 0x10 & 0xff]),
                            (&DAT_180041fa0)[uVar11 >> 8 & 0xff]),(&DAT_180041da0)[uVar11 & 0xff]);
  uVar6 = (uint)CONCAT11((&DAT_180041ea0)[uVar8 >> 0x18],(&DAT_1800420a0)[uVar8 >> 0x10 & 0xff]) ^
          CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar8 >> 0x18],
                                     (&DAT_1800420a0)[uVar8 >> 0x10 & 0xff]),
                            (&DAT_180041fa0)[uVar8 >> 8 & 0xff]),(&DAT_180041da0)[uVar8 & 0xff]) <<
          0x10;
  uVar12 = uVar6 >> 8 & 0xff00ff;
  uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar2 >> 0x18],
                                     (&DAT_1800420a0)[uVar2 >> 0x10 & 0xff]),
                            (&DAT_180041fa0)[uVar2 >> 8 & 0xff]),(&DAT_180041da0)[uVar2 & 0xff]);
  uVar8 = (uint)CONCAT11((&DAT_180041ea0)[uVar11 >> 0x18],(&DAT_1800420a0)[uVar11 >> 0x10 & 0xff]) ^
          uVar4 << 0x10;
  uVar9 = (uint)CONCAT11((&DAT_180041ea0)[uVar2 >> 0x18],(&DAT_1800420a0)[uVar2 >> 0x10 & 0xff]) ^
          uVar5 << 0x10;
  uVar14 = ((uint)uVar1 ^ iVar3 << 8) & 0xff00ff ^ iVar3 << 8;
  uVar4 = uVar4 ^ uVar14;
  uVar2 = ((uVar6 ^ uVar4) << 8 ^ uVar4 >> 8) & 0xff00ff ^ (uVar6 ^ uVar4) << 8 ^ uVar12 ^ uVar9;
  uVar7 = uVar6 ^ uVar14 >> 0x10 ^ uVar14 << 0x10;
  uVar9 = uVar9 ^ (uVar8 >> 8 ^ uVar8 << 8) & 0xff00ff ^ uVar8 << 8;
  uVar4 = uVar7 >> 0x10 ^ uVar7 << 0x10 ^ uVar2;
  uVar11 = uVar2 >> 0x10 ^ uVar2 << 0x10;
  uVar5 = uVar5 ^ uVar2 ^ uVar7 ^ *(uint *)(param_1 + 0x18);
  iVar3 = 2;
  uVar7 = uVar14 ^ (uVar11 >> 8 ^ uVar11 << 8) & 0xff00ff ^ uVar11 << 8 ^ uVar9 ^
          *(uint *)(param_1 + 0x20);
  uVar2 = uVar9 >> 0x10 ^ uVar9 << 0x10;
  uVar8 = uVar8 ^ (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8 ^ *(uint *)(param_1 + 0x14);
  uVar11 = ((uVar6 ^ uVar2) << 8 ^ uVar2 >> 8) & 0xff00ff ^ (uVar6 ^ uVar2) << 8 ^
           *(uint *)(param_1 + 0x1c) ^ uVar12 ^ uVar11;
  uVar2 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar8 >> 0x18],
                                     (&DAT_180041da0)[uVar8 >> 0x10 & 0xff]),
                            (&DAT_180041ea0)[uVar8 >> 8 & 0xff]),(&DAT_1800420a0)[uVar8 & 0xff]);
  uVar8 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar5 >> 0x18],
                                     (&DAT_180041da0)[uVar5 >> 0x10 & 0xff]),
                            (&DAT_180041ea0)[uVar5 >> 8 & 0xff]),(&DAT_1800420a0)[uVar5 & 0xff]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar11 >> 0x18],
                                     (&DAT_180041da0)[uVar11 >> 0x10 & 0xff]),
                            (&DAT_180041ea0)[uVar11 >> 8 & 0xff]),(&DAT_1800420a0)[uVar11 & 0xff]);
  uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar7 >> 0x18],
                                     (&DAT_180041da0)[uVar7 >> 0x10 & 0xff]),
                            (&DAT_180041ea0)[uVar7 >> 8 & 0xff]),(&DAT_1800420a0)[uVar7 & 0xff]);
  if (2 < (ulonglong)*param_1) {
    puVar13 = (uint *)(param_1 + 0x28);
    lVar16 = 2;
    do {
      uVar9 = uVar5 >> 0x10 ^ uVar5 << 0x10;
      uVar15 = uVar8 >> 0x10 ^ uVar8 << 0x10;
      uVar11 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8;
      uVar8 = uVar8 ^ uVar11;
      uVar14 = uVar2 >> 0x10 ^ uVar2 << 0x10;
      uVar4 = uVar9 >> 8 & 0xff00ff;
      uVar6 = ((uVar9 ^ uVar8) << 8 ^ uVar8 >> 8) & 0xff00ff ^ (uVar9 ^ uVar8) << 8 ^ uVar4 ^ uVar14
      ;
      uVar12 = uVar9 ^ uVar11 >> 0x10 ^ uVar11 << 0x10;
      uVar14 = uVar14 ^ (uVar15 >> 8 ^ uVar15 << 8) & 0xff00ff ^ uVar15 << 8;
      uVar7 = uVar12 >> 0x10 ^ uVar12 << 0x10 ^ uVar6;
      uVar5 = uVar6 >> 0x10 ^ uVar6 << 0x10;
      uVar8 = uVar11 ^ (uVar5 >> 8 ^ uVar5 << 8) & 0xff00ff ^ uVar5 << 8 ^ uVar14 ^ puVar13[2];
      uVar2 = uVar2 ^ uVar6 ^ uVar12 ^ *puVar13;
      uVar11 = uVar14 >> 0x10 ^ uVar14 << 0x10;
      uVar15 = uVar15 ^ (uVar7 >> 8 ^ uVar7 << 8) & 0xff00ff ^ puVar13[-1] ^ uVar7 << 8;
      uVar5 = ((uVar9 ^ uVar11) << 8 ^ uVar11 >> 8) & 0xff00ff ^ (uVar9 ^ uVar11) << 8 ^ puVar13[1]
              ^ uVar4 ^ uVar5;
      uVar1 = CONCAT21(CONCAT11((&DAT_180041ea0)[uVar5 >> 0x18],
                                (&DAT_1800420a0)[uVar5 >> 0x10 & 0xff]),
                       (&DAT_180041fa0)[uVar5 >> 8 & 0xff]);
      iVar10 = CONCAT31(uVar1,(&DAT_180041da0)[uVar5 & 0xff]);
      uVar7 = (uint)CONCAT11((&DAT_180041ea0)[uVar8 >> 0x18],(&DAT_1800420a0)[uVar8 >> 0x10 & 0xff])
              ^ CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar8 >> 0x18],
                                           (&DAT_1800420a0)[uVar8 >> 0x10 & 0xff]),
                                  (&DAT_180041fa0)[uVar8 >> 8 & 0xff]),
                         (&DAT_180041da0)[uVar8 & 0xff]) << 0x10;
      uVar11 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar2 >> 0x18],
                                          (&DAT_1800420a0)[uVar2 >> 0x10 & 0xff]),
                                 (&DAT_180041fa0)[uVar2 >> 8 & 0xff]),(&DAT_180041da0)[uVar2 & 0xff]
                       );
      uVar8 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041ea0)[uVar15 >> 0x18],
                                         (&DAT_1800420a0)[uVar15 >> 0x10 & 0xff]),
                                (&DAT_180041fa0)[uVar15 >> 8 & 0xff]),
                       (&DAT_180041da0)[uVar15 & 0xff]);
      uVar5 = uVar7 >> 8 & 0xff00ff;
      uVar4 = (uint)CONCAT11((&DAT_180041ea0)[uVar2 >> 0x18],(&DAT_1800420a0)[uVar2 >> 0x10 & 0xff])
              ^ uVar11 << 0x10;
      uVar12 = ((uint)uVar1 ^ iVar10 << 8) & 0xff00ff ^ iVar10 << 8;
      uVar11 = uVar11 ^ uVar12;
      uVar9 = (uint)CONCAT11((&DAT_180041ea0)[uVar15 >> 0x18],
                             (&DAT_1800420a0)[uVar15 >> 0x10 & 0xff]) ^ uVar8 << 0x10;
      uVar2 = ((uVar7 ^ uVar11) << 8 ^ uVar11 >> 8) & 0xff00ff ^ (uVar7 ^ uVar11) << 8 ^ uVar5 ^
              uVar9;
      uVar11 = uVar7 ^ uVar12 >> 0x10 ^ uVar12 << 0x10;
      uVar9 = uVar9 ^ (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8;
      uVar8 = uVar8 ^ uVar2 ^ uVar11 ^ puVar13[4];
      iVar3 = iVar3 + 2;
      lVar16 = lVar16 + 2;
      uVar11 = uVar11 >> 0x10 ^ uVar11 << 0x10 ^ uVar2;
      uVar6 = uVar2 >> 0x10 ^ uVar2 << 0x10;
      uVar12 = uVar12 ^ (uVar6 >> 8 ^ uVar6 << 8) & 0xff00ff ^ uVar6 << 8 ^ uVar9 ^ puVar13[6];
      uVar2 = uVar9 >> 0x10 ^ uVar9 << 0x10;
      uVar4 = uVar4 ^ (uVar11 >> 8 ^ uVar11 << 8) & 0xff00ff ^ puVar13[3] ^ uVar11 << 8;
      uVar6 = ((uVar7 ^ uVar2) << 8 ^ uVar2 >> 8) & 0xff00ff ^ (uVar7 ^ uVar2) << 8 ^ puVar13[5] ^
              uVar5 ^ uVar6;
      uVar2 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar4 >> 0x18],
                                         (&DAT_180041da0)[uVar4 >> 0x10 & 0xff]),
                                (&DAT_180041ea0)[uVar4 >> 8 & 0xff]),(&DAT_1800420a0)[uVar4 & 0xff])
      ;
      puVar13 = puVar13 + 8;
      uVar8 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar8 >> 0x18],
                                         (&DAT_180041da0)[uVar8 >> 0x10 & 0xff]),
                                (&DAT_180041ea0)[uVar8 >> 8 & 0xff]),(&DAT_1800420a0)[uVar8 & 0xff])
      ;
      uVar4 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar6 >> 0x18],
                                         (&DAT_180041da0)[uVar6 >> 0x10 & 0xff]),
                                (&DAT_180041ea0)[uVar6 >> 8 & 0xff]),(&DAT_1800420a0)[uVar6 & 0xff])
      ;
      uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_180041fa0)[uVar12 >> 0x18],
                                         (&DAT_180041da0)[uVar12 >> 0x10 & 0xff]),
                                (&DAT_180041ea0)[uVar12 >> 8 & 0xff]),
                       (&DAT_1800420a0)[uVar12 & 0xff]);
    } while (lVar16 < (longlong)(ulonglong)*param_1);
  }
  lVar16 = (longlong)iVar3;
  uVar11 = *(uint *)(param_1 + lVar16 * 0x10 + 8);
  uVar6 = *(uint *)(param_1 + lVar16 * 0x10 + 0xc);
  uVar7 = *(uint *)(param_1 + lVar16 * 0x10 + 0x10);
  *param_3 = uVar2 ^ *(uint *)(param_1 + lVar16 * 0x10 + 4);
  param_3[1] = uVar8 ^ uVar11;
  param_3[2] = uVar4 ^ uVar6;
  param_3[3] = uVar5 ^ uVar7;
  return 0;
}




undefined8
FUN_180034fc0(byte *param_1,uint param_2,ulonglong param_3,ulonglong *param_4,uint *param_5,
             ulonglong *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (1 < param_2) {
    return 0xffffffa4;
  }
  if ((param_3 & 0xf) == 0) {
    if (param_3 != 0) {
      if (param_2 == 0) {
        lVar3 = (param_3 - 1 >> 4) + 1;
        do {
          uVar4 = *param_5;
          uVar5 = param_5[1];
          uVar6 = param_5[2];
          uVar7 = param_5[3];
          FUN_1800345c0(param_1,param_5,(uint *)param_6);
          FUN_18002ccf0((longlong)param_6,(longlong)param_6,param_4);
          param_6 = param_6 + 2;
          param_5 = param_5 + 4;
          *(uint *)param_4 = uVar4;
          *(uint *)((longlong)param_4 + 4) = uVar5;
          *(uint *)(param_4 + 1) = uVar6;
          *(uint *)((longlong)param_4 + 0xc) = uVar7;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      else {
        lVar3 = (param_3 - 1 >> 4) + 1;
        do {
          FUN_18002ccf0((longlong)param_6,(longlong)param_5,param_4);
          FUN_1800345c0(param_1,(uint *)param_6,(uint *)param_6);
          uVar1 = *param_6;
          uVar2 = param_6[1];
          param_6 = param_6 + 2;
          param_5 = param_5 + 4;
          *param_4 = uVar1;
          param_4[1] = uVar2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    return 0;
  }
  return 0xffffffa2;
}




void FUN_1800352c0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  byte abStack_228 [9];
  ushort uStack_21f;
  undefined2 uStack_21d;
  uint uStack_21b;
  byte local_128 [255];
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_18004e038 ^ (ulonglong)abStack_228;
  iVar9 = 0;
  pbVar11 = local_128;
  uVar7 = 1;
  lVar13 = 0x100;
  do {
    bVar1 = (byte)uVar7;
    *pbVar11 = bVar1;
    pbVar11 = pbVar11 + 1;
    abStack_228[uVar7] = (byte)iVar9;
    iVar9 = iVar9 + 1;
    uVar7 = (ulonglong)(byte)(bVar1 ^ (char)bVar1 >> 7 & 0x1bU ^ bVar1 * '\x02');
  } while (iVar9 < 0x100);
  uVar6 = 1;
  puVar10 = &DAT_18004fe68;
  lVar12 = 10;
  do {
    *puVar10 = uVar6;
    puVar10 = puVar10 + 1;
    uVar6 = (uint)(byte)((char)uVar6 >> 7 & 0x1bU ^ (char)uVar6 * '\x02');
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  DAT_18004fe90 = 99;
  iVar9 = 1;
  DAT_1800503f3 = 0;
  lVar12 = 0;
  do {
    bVar1 = (&local_29)[-(ulonglong)abStack_228[lVar12 + 1]];
    bVar2 = bVar1 << 1 | (char)bVar1 < '\0';
    bVar3 = bVar2 << 1 | (char)bVar2 < '\0';
    bVar4 = bVar3 << 1 | (char)bVar3 < '\0';
    bVar1 = (bVar4 << 1 | (char)bVar4 < '\0') ^ bVar4 ^ bVar1 ^ bVar2 ^ bVar3 ^ 99;
    (&DAT_18004fe91)[lVar12] = bVar1;
    (&DAT_180050390)[bVar1] = (char)iVar9;
    iVar9 = iVar9 + 1;
    lVar12 = lVar12 + 1;
  } while (iVar9 < 0x100);
  lVar12 = 0;
  do {
    bVar1 = (&DAT_18004fe90)[lVar12];
    bVar4 = (char)bVar1 >> 7 & 0x1bU ^ bVar1 * '\x02';
    bVar2 = (&DAT_180050390)[lVar12];
    bVar3 = bVar4 ^ bVar1;
    iVar9 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar1),bVar1),bVar4);
    (&DAT_180051890)[lVar12] = iVar9;
    uVar6 = iVar9 << 8;
    uVar5 = uVar6 | bVar3;
    (&DAT_180051490)[lVar12] = uVar5;
    uVar5 = uVar5 << 8;
    uVar6 = uVar5 | uVar6 >> 0x18;
    (&DAT_180050890)[lVar12] = uVar6;
    (&DAT_180050490)[lVar12] = uVar6 << 8 | uVar5 >> 0x18;
    if (bVar2 == 0) {
      uVar6 = 0;
      uVar14 = 0;
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      bVar1 = abStack_228[bVar2];
      uVar6 = (uint)local_128[(int)(((uStack_21b >> 8 & 0xff) + (uint)bVar1) % 0xff)];
      uVar14 = (uint)local_128[(int)(((uStack_21f & 0xff) + (uint)bVar1) % 0xff)];
      uVar8 = (uint)local_128[(int)(((uStack_21b & 0xff) + (uint)bVar1) % 0xff)];
      uVar5 = (uint)local_128[(int)((((uint)CONCAT42(uStack_21b,uStack_21d) & 0xff) + (uint)bVar1) %
                                   0xff)];
    }
    uVar5 = ((uVar5 << 8 ^ uVar8) << 8 ^ uVar14) << 8;
    uVar6 = uVar5 ^ uVar6;
    (&DAT_180051090)[lVar12] = uVar6;
    uVar6 = uVar6 << 8;
    uVar5 = uVar6 | uVar5 >> 0x18;
    (&DAT_180050c90)[lVar12] = uVar5;
    uVar5 = uVar5 << 8;
    uVar6 = uVar5 | uVar6 >> 0x18;
    (&DAT_180051c90)[lVar12] = uVar6;
    (&DAT_18004ff90)[lVar12] = uVar6 << 8 | uVar5 >> 0x18;
    lVar12 = lVar12 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  __security_check_cookie(local_28 ^ (ulonglong)abStack_228);
  return;
}




ulonglong FUN_180035580(int *param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (param_3 == 0x80) {
    *param_1 = 10;
  }
  else if (param_3 == 0xc0) {
    *param_1 = 0xc;
  }
  else {
    if (param_3 != 0x100) {
      return 0xffffffe0;
    }
    *param_1 = 0xe;
  }
  if (DAT_18004fe54 == 0) {
    FUN_1800352c0();
    DAT_18004fe54 = 1;
  }
  bVar3 = FUN_18002e960(0x2000000);
  uVar14 = 0;
  if (((int)CONCAT71(extraout_var,bVar3) == 0) || (((ulonglong)param_1 >> 2 & 3) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 4 - ((uint)((ulonglong)param_1 >> 2) & 3);
  }
  *(ulonglong *)(param_1 + 2) = (ulonglong)uVar5;
  pauVar1 = (undefined1 (*) [16])(param_1 + (ulonglong)uVar5 + 4);
  bVar3 = FUN_18002e960(0x2000000);
  if ((int)CONCAT71(extraout_var_00,bVar3) == 0) {
    pauVar8 = pauVar1;
    if (param_3 >> 5 != 0) {
      do {
        iVar2 = (int)uVar14;
        uVar5 = iVar2 + 1;
        uVar14 = (ulonglong)uVar5;
        *(undefined4 *)*pauVar8 = *(undefined4 *)(*param_2 + (uint)(iVar2 * 4));
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
      } while (uVar5 < param_3 >> 5);
    }
    iVar2 = *param_1;
    if (iVar2 == 10) {
      uVar14 = (ulonglong)(byte)(*pauVar1)[0xe];
      uVar5 = *(uint *)*pauVar1;
      lVar10 = 2;
      puVar11 = &DAT_18004fe70;
      puVar4 = *pauVar1 + 0xe;
      do {
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[(byte)puVar4[-2]],
                                           (&DAT_18004fe90)[(byte)puVar4[1]]),
                                  (&DAT_18004fe90)[uVar14 & 0xff]),
                         (&DAT_18004fe90)[(byte)puVar4[-1]]) ^ puVar11[-2] ^ uVar5;
        uVar9 = *(uint *)(puVar4 + -10) ^ uVar5;
        *(uint *)(puVar4 + 2) = uVar5;
        uVar7 = *(uint *)(puVar4 + -6) ^ uVar9;
        *(uint *)(puVar4 + 6) = uVar9;
        uVar6 = *(uint *)(puVar4 + -2) ^ uVar7;
        *(uint *)(puVar4 + 10) = uVar7;
        *(uint *)(puVar4 + 0xe) = uVar6;
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar6 & 0xff],
                                           (&DAT_18004fe90)[uVar6 >> 0x18]),
                                  (&DAT_18004fe90)[uVar6 >> 0x10 & 0xff]),
                         (&DAT_18004fe90)[uVar6 >> 8 & 0xff]) ^ puVar11[-1] ^ uVar5;
        *(uint *)(puVar4 + 0x12) = uVar5;
        uVar9 = uVar5 ^ uVar9;
        *(uint *)(puVar4 + 0x16) = uVar9;
        uVar7 = uVar9 ^ uVar7;
        *(uint *)(puVar4 + 0x1a) = uVar7;
        uVar6 = uVar7 ^ uVar6;
        *(uint *)(puVar4 + 0x1e) = uVar6;
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar6 & 0xff],
                                           (&DAT_18004fe90)[uVar6 >> 0x18]),
                                  (&DAT_18004fe90)[uVar6 >> 0x10 & 0xff]),
                         (&DAT_18004fe90)[uVar6 >> 8 & 0xff]) ^ *puVar11 ^ uVar5;
        *(uint *)(puVar4 + 0x22) = uVar5;
        uVar9 = uVar5 ^ uVar9;
        *(uint *)(puVar4 + 0x26) = uVar9;
        uVar7 = uVar9 ^ uVar7;
        *(uint *)(puVar4 + 0x2a) = uVar7;
        uVar6 = uVar7 ^ uVar6;
        *(uint *)(puVar4 + 0x2e) = uVar6;
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar6 & 0xff],
                                           (&DAT_18004fe90)[uVar6 >> 0x18]),
                                  (&DAT_18004fe90)[uVar6 >> 0x10 & 0xff]),
                         (&DAT_18004fe90)[uVar6 >> 8 & 0xff]) ^ puVar11[1] ^ uVar5;
        *(uint *)(puVar4 + 0x32) = uVar5;
        uVar9 = uVar5 ^ uVar9;
        *(uint *)(puVar4 + 0x36) = uVar9;
        uVar7 = uVar9 ^ uVar7;
        *(uint *)(puVar4 + 0x3a) = uVar7;
        uVar6 = uVar7 ^ uVar6;
        *(uint *)(puVar4 + 0x3e) = uVar6;
        uVar5 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar6 & 0xff],
                                           (&DAT_18004fe90)[uVar6 >> 0x18]),
                                  (&DAT_18004fe90)[uVar6 >> 0x10 & 0xff]),
                         (&DAT_18004fe90)[uVar6 >> 8 & 0xff]) ^ puVar11[2] ^ uVar5;
        *(uint *)(puVar4 + 0x42) = uVar5;
        *(uint *)(puVar4 + 0x46) = uVar5 ^ uVar9;
        uVar7 = uVar5 ^ uVar9 ^ uVar7;
        *(uint *)(puVar4 + 0x4a) = uVar7;
        uVar7 = uVar7 ^ uVar6;
        *(uint *)(puVar4 + 0x4e) = uVar7;
        uVar14 = (ulonglong)(uVar7 >> 0x10);
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 5;
        puVar4 = puVar4 + 0x50;
      } while (lVar10 != 0);
    }
    else if (iVar2 == 0xc) {
      uVar5 = *(uint *)(*pauVar1 + 0xc);
      uVar6 = *(uint *)pauVar1[1];
      uVar7 = *(uint *)(pauVar1[1] + 4);
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[(byte)pauVar1[1][4]],
                                         (&DAT_18004fe90)[(byte)pauVar1[1][7]]),
                                (&DAT_18004fe90)[(byte)pauVar1[1][6]]),
                       (&DAT_18004fe90)[(byte)pauVar1[1][5]]) ^ *(uint *)*pauVar1 ^ DAT_18004fe68;
      uVar12 = *(uint *)(*pauVar1 + 4) ^ uVar9;
      *(uint *)(pauVar1[1] + 8) = uVar9;
      uVar13 = *(uint *)(*pauVar1 + 8) ^ uVar12;
      *(uint *)(pauVar1[1] + 0xc) = uVar12;
      uVar5 = uVar5 ^ uVar13;
      *(uint *)pauVar1[2] = uVar13;
      uVar6 = uVar6 ^ uVar5;
      *(uint *)(pauVar1[2] + 4) = uVar5;
      uVar7 = uVar7 ^ uVar6;
      *(uint *)(pauVar1[2] + 8) = uVar6;
      *(uint *)(pauVar1[2] + 0xc) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[uVar7 >> 0x18]),
                                (&DAT_18004fe90)[uVar7 >> 0x10 & 0xff]),
                       (&DAT_18004fe90)[uVar7 >> 8 & 0xff]) ^ uVar9 ^ DAT_18004fe6c;
      *(uint *)pauVar1[3] = uVar9;
      uVar12 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[3] + 4) = uVar12;
      uVar13 = uVar12 ^ uVar13;
      *(uint *)(pauVar1[3] + 8) = uVar13;
      uVar5 = uVar13 ^ uVar5;
      *(uint *)(pauVar1[3] + 0xc) = uVar5;
      uVar6 = uVar5 ^ uVar6;
      uVar7 = uVar7 ^ uVar6;
      *(uint *)pauVar1[4] = uVar6;
      *(uint *)(pauVar1[4] + 4) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[uVar7 >> 0x18]),
                                (&DAT_18004fe90)[uVar7 >> 0x10 & 0xff]),
                       (&DAT_18004fe90)[uVar7 >> 8 & 0xff]) ^ uVar9 ^ DAT_18004fe70;
      *(uint *)(pauVar1[4] + 8) = uVar9;
      uVar12 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[4] + 0xc) = uVar12;
      uVar13 = uVar12 ^ uVar13;
      *(uint *)pauVar1[5] = uVar13;
      uVar5 = uVar13 ^ uVar5;
      *(uint *)(pauVar1[5] + 4) = uVar5;
      uVar6 = uVar5 ^ uVar6;
      uVar7 = uVar7 ^ uVar6;
      *(uint *)(pauVar1[5] + 8) = uVar6;
      *(uint *)(pauVar1[5] + 0xc) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[uVar7 >> 0x18]),
                                (&DAT_18004fe90)[uVar7 >> 0x10 & 0xff]),
                       (&DAT_18004fe90)[uVar7 >> 8 & 0xff]) ^ uVar9 ^ DAT_18004fe74;
      *(uint *)pauVar1[6] = uVar9;
      uVar12 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[6] + 4) = uVar12;
      uVar13 = uVar12 ^ uVar13;
      *(uint *)(pauVar1[6] + 8) = uVar13;
      uVar5 = uVar13 ^ uVar5;
      *(uint *)(pauVar1[6] + 0xc) = uVar5;
      uVar6 = uVar5 ^ uVar6;
      *(uint *)pauVar1[7] = uVar6;
      uVar7 = uVar6 ^ uVar7;
      *(uint *)(pauVar1[7] + 4) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[(byte)pauVar1[7][7]]),
                                (&DAT_18004fe90)[(byte)pauVar1[7][6]]),
                       (&DAT_18004fe90)[(byte)pauVar1[7][5]]) ^ uVar9 ^ DAT_18004fe78;
      *(uint *)(pauVar1[7] + 8) = uVar9;
      uVar12 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[7] + 0xc) = uVar12;
      uVar13 = uVar12 ^ uVar13;
      *(uint *)pauVar1[8] = uVar13;
      uVar5 = uVar13 ^ uVar5;
      *(uint *)(pauVar1[8] + 4) = uVar5;
      uVar6 = uVar5 ^ uVar6;
      *(uint *)(pauVar1[8] + 8) = uVar6;
      uVar7 = uVar6 ^ uVar7;
      *(uint *)(pauVar1[8] + 0xc) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[(byte)pauVar1[8][0xf]]),
                                (&DAT_18004fe90)[(byte)pauVar1[8][0xe]]),
                       (&DAT_18004fe90)[(byte)pauVar1[8][0xd]]) ^ uVar9 ^ DAT_18004fe7c;
      *(uint *)pauVar1[9] = uVar9;
      uVar12 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[9] + 4) = uVar12;
      uVar13 = uVar12 ^ uVar13;
      *(uint *)(pauVar1[9] + 8) = uVar13;
      uVar5 = uVar13 ^ uVar5;
      *(uint *)(pauVar1[9] + 0xc) = uVar5;
      uVar6 = uVar5 ^ uVar6;
      *(uint *)pauVar1[10] = uVar6;
      uVar7 = uVar6 ^ uVar7;
      *(uint *)(pauVar1[10] + 4) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[(byte)pauVar1[10][7]]),
                                (&DAT_18004fe90)[(byte)pauVar1[10][6]]),
                       (&DAT_18004fe90)[(byte)pauVar1[10][5]]) ^ uVar9 ^ DAT_18004fe80;
      *(uint *)(pauVar1[10] + 8) = uVar9;
      uVar12 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[10] + 0xc) = uVar12;
      uVar13 = uVar12 ^ uVar13;
      *(uint *)pauVar1[0xb] = uVar13;
      uVar5 = uVar13 ^ uVar5;
      *(uint *)(pauVar1[0xb] + 4) = uVar5;
      uVar6 = uVar5 ^ uVar6;
      *(uint *)(pauVar1[0xb] + 8) = uVar6;
      uVar7 = uVar6 ^ uVar7;
      *(uint *)(pauVar1[0xb] + 0xc) = uVar7;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar7 & 0xff],
                                         (&DAT_18004fe90)[(byte)pauVar1[0xb][0xf]]),
                                (&DAT_18004fe90)[(byte)pauVar1[0xb][0xe]]),
                       (&DAT_18004fe90)[(byte)pauVar1[0xb][0xd]]) ^ uVar9 ^ DAT_18004fe84;
      *(uint *)pauVar1[0xc] = uVar9;
      uVar9 = uVar9 ^ uVar12;
      *(uint *)(pauVar1[0xc] + 4) = uVar9;
      uVar9 = uVar9 ^ uVar13;
      *(uint *)(pauVar1[0xc] + 8) = uVar9;
      uVar9 = uVar9 ^ uVar5;
      *(uint *)(pauVar1[0xc] + 0xc) = uVar9;
      uVar9 = uVar9 ^ uVar6;
      *(uint *)pauVar1[0xd] = uVar9;
      *(uint *)(pauVar1[0xd] + 4) = uVar9 ^ uVar7;
    }
    else if (iVar2 == 0xe) {
      uVar14 = (ulonglong)(byte)pauVar1[1][0xe];
      uVar5 = *(uint *)*pauVar1;
      lVar10 = 7;
      puVar4 = pauVar1[1] + 0xe;
      puVar11 = &DAT_18004fe68;
      do {
        uVar5 = uVar5 ^ CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[(byte)puVar4[-2]],
                                                   (&DAT_18004fe90)[(byte)puVar4[1]]),
                                          (&DAT_18004fe90)[uVar14 & 0xff]),
                                 (&DAT_18004fe90)[(byte)puVar4[-1]]) ^ *puVar11;
        *(uint *)(puVar4 + 2) = uVar5;
        uVar7 = *(uint *)(puVar4 + -0x16) ^ *(uint *)(puVar4 + -0x1a) ^ uVar5;
        *(uint *)(puVar4 + 6) = *(uint *)(puVar4 + -0x1a) ^ uVar5;
        uVar6 = *(uint *)(puVar4 + -0x12) ^ uVar7;
        *(uint *)(puVar4 + 10) = uVar7;
        *(uint *)(puVar4 + 0xe) = uVar6;
        uVar7 = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar6 >> 0x18],
                                           (&DAT_18004fe90)[uVar6 >> 0x10 & 0xff]),
                                  (&DAT_18004fe90)[uVar6 >> 8 & 0xff]),
                         (&DAT_18004fe90)[uVar6 & 0xff]) ^
                *(uint *)*(undefined1 (*) [16])(puVar4 + -0xe);
        uVar6 = *(uint *)(puVar4 + -10) ^ uVar7;
        *(uint *)(puVar4 + 0x12) = uVar7;
        uVar7 = *(uint *)(puVar4 + -6) ^ uVar6;
        *(uint *)(puVar4 + 0x16) = uVar6;
        *(uint *)(puVar4 + 0x1a) = uVar7;
        uVar7 = uVar7 ^ *(uint *)(puVar4 + -2);
        *(uint *)(puVar4 + 0x1e) = uVar7;
        uVar14 = (ulonglong)(uVar7 >> 0x10);
        lVar10 = lVar10 + -1;
        puVar4 = puVar4 + 0x20;
        puVar11 = puVar11 + 1;
      } while (lVar10 != 0);
    }
    return 0;
  }
  if (param_3 == 0x80) {
    FUN_18002ecf0(pauVar1,param_2);
    return uVar14 & 0xffffffff;
  }
  if (param_3 == 0xc0) {
    FUN_18002ef20(pauVar1,(undefined8 *)param_2);
    return uVar14 & 0xffffffff;
  }
  if (param_3 == 0x100) {
    FUN_18002f1c0(pauVar1,param_2);
    return uVar14 & 0xffffffff;
  }
  return 0xffffffe0;
}




void FUN_180035eb0(uint *param_1,undefined1 (*param_2) [16],uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  bool bVar8;
  undefined7 extraout_var;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined7 extraout_var_00;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  uint *puVar14;
  uint *puVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_158 [32];
  uint local_138 [2];
  longlong local_130;
  uint local_128 [2];
  undefined8 uStack_120;
  ulonglong local_18;
  
  local_18 = DAT_18004e038 ^ (ulonglong)auStack_158;
  memset(local_138,0,0x120);
  bVar8 = FUN_18002e960(0x2000000);
  if (((int)CONCAT71(extraout_var,bVar8) == 0) || (((ulonglong)param_1 >> 2 & 3) == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulonglong)(4 - ((uint)((ulonglong)param_1 >> 2) & 3));
  }
  *(ulonglong *)(param_1 + 2) = uVar9;
  uVar10 = FUN_180035580((int *)local_138,param_2,param_3);
  if ((int)uVar10 == 0) {
    *param_1 = local_138[0];
    bVar8 = FUN_18002e960(0x2000000);
    if ((int)CONCAT71(extraout_var_00,bVar8) == 0) {
      local_130 = (int)(local_138[0] * 4) + local_130;
      param_1[uVar9 + 4] = local_128[local_130];
      param_1[uVar9 + 5] = local_128[local_130 + 1];
      param_1[uVar9 + 6] = *(uint *)((longlong)&uStack_120 + local_130 * 4);
      puVar15 = local_138 + local_130;
      param_1[uVar9 + 7] = *(uint *)((longlong)&uStack_120 + local_130 * 4 + 4);
      puVar14 = param_1 + uVar9 + 8;
      uVar5 = *param_1;
      while (uVar5 = uVar5 - 1, 0 < (int)uVar5) {
        *puVar14 = (&DAT_18004ff90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 3)]] ^
                   (&DAT_180051c90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 2)]] ^
                   (&DAT_180050c90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 1)]] ^
                   (&DAT_180051090)[(byte)(&DAT_18004fe90)[(byte)*puVar15]];
        puVar14[1] = (&DAT_18004ff90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 7)]] ^
                     (&DAT_180051c90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 6)]] ^
                     (&DAT_180050c90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 5)]] ^
                     (&DAT_180051090)[(byte)(&DAT_18004fe90)[(byte)puVar15[1]]];
        puVar14[2] = (&DAT_18004ff90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 0xb)]] ^
                     (&DAT_180051c90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 10)]] ^
                     (&DAT_180050c90)[(byte)(&DAT_18004fe90)[*(byte *)((longlong)puVar15 + 9)]] ^
                     (&DAT_180051090)[(byte)(&DAT_18004fe90)[(byte)puVar15[2]]];
        pbVar1 = (byte *)((longlong)puVar15 + 0xf);
        pbVar2 = (byte *)((longlong)puVar15 + 0xe);
        pbVar3 = (byte *)((longlong)puVar15 + 0xd);
        puVar4 = puVar15 + 3;
        puVar15 = puVar15 + -4;
        puVar14[3] = (&DAT_18004ff90)[(byte)(&DAT_18004fe90)[*pbVar1]] ^
                     (&DAT_180051c90)[(byte)(&DAT_18004fe90)[*pbVar2]] ^
                     (&DAT_180050c90)[(byte)(&DAT_18004fe90)[*pbVar3]] ^
                     (&DAT_180051090)[(byte)(&DAT_18004fe90)[(byte)*puVar4]];
        puVar14 = puVar14 + 4;
      }
      *puVar14 = *puVar15;
      puVar14[1] = puVar15[1];
      puVar14[2] = puVar15[2];
      puVar14[3] = puVar15[3];
    }
    else {
      pauVar11 = (undefined1 (*) [16])(local_128 + local_130) + (int)*param_1;
      uVar6 = *(undefined8 *)(*pauVar11 + 8);
      *(undefined8 *)(param_1 + uVar9 + 4) = *(undefined8 *)*pauVar11;
      *(undefined8 *)(param_1 + uVar9 + 6) = uVar6;
      pauVar13 = (undefined1 (*) [16])(param_1 + uVar9 + 8);
      while (pauVar7 = pauVar11 + -1, (undefined1 (*) [16])(local_128 + local_130) < pauVar7) {
        auVar16 = aesimc(*pauVar7);
        *pauVar13 = auVar16;
        pauVar13 = pauVar13 + 1;
        pauVar11 = pauVar7;
      }
      uVar6 = *(undefined8 *)(pauVar11[-1] + 8);
      *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar7;
      *(undefined8 *)((longlong)*pauVar13 + 8) = uVar6;
    }
  }
  puVar15 = local_138;
  for (lVar12 = 0x120; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (uint *)((longlong)puVar15 + 1);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




ulonglong FUN_1800361e0(int *param_1,undefined1 (*param_2) [16],uint param_3)

{
  ulonglong uVar1;
  
  if ((param_3 - 0x100 & 0xfffffeff) == 0) {
    uVar1 = FUN_180035580(param_1 + 0x48,(undefined1 (*) [16])(*param_2 + (param_3 >> 4)),
                          param_3 >> 1);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_180035580(param_1,param_2,param_3 >> 1);
      return uVar1;
    }
  }
  else {
    uVar1 = 0xffffffe0;
  }
  return uVar1;
}




ulonglong FUN_180036260(uint *param_1,undefined1 (*param_2) [16],uint param_3)

{
  ulonglong uVar1;
  
  if ((param_3 - 0x100 & 0xfffffeff) == 0) {
    uVar1 = FUN_180035580((int *)(param_1 + 0x48),(undefined1 (*) [16])(*param_2 + (param_3 >> 4)),
                          param_3 >> 1);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_180035eb0(param_1,param_2,param_3 >> 1);
      return uVar1;
    }
  }
  else {
    uVar1 = 0xffffffe0;
  }
  return uVar1;
}




void FUN_1800362e0(int *param_1,uint *param_2,uint *param_3)

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
  uint *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_38;
  
  local_38 = DAT_18004e038 ^ (ulonglong)&local_78;
  lVar14 = *(longlong *)(param_1 + 2);
  local_54 = param_1[lVar14 + 5] ^ param_2[1];
  local_50 = param_1[lVar14 + 6] ^ param_2[2];
  local_58 = param_1[lVar14 + 4] ^ *param_2;
  uVar18 = param_1[lVar14 + 7] ^ param_2[3];
  puVar13 = (uint *)(param_1 + lVar14 + 8);
  uVar17 = local_54 >> 8;
  uVar19 = local_54 >> 0x18;
  local_78 = uVar18 >> 8;
  iVar15 = (*param_1 >> 1) + -1;
  uVar20 = local_54 >> 0x10;
  uVar21 = local_50 >> 0x10;
  uVar22 = local_50 >> 8;
  uVar23 = local_50 >> 0x18;
  local_4c = uVar18;
  if (0 < iVar15) {
    do {
      uVar20 = (&DAT_180050490)[local_4c >> 0x18] ^ (&DAT_180050890)[local_50 >> 0x10 & 0xff] ^
               (&DAT_180051490)[local_54 >> 8 & 0xff] ^ (&DAT_180051890)[(byte)local_58] ^ *puVar13;
      uVar22 = (&DAT_180050890)[local_4c >> 0x10 & 0xff] ^ (&DAT_180051490)[local_50 >> 8 & 0xff] ^
               (&DAT_180050490)[local_58 >> 0x18] ^ (&DAT_180051890)[(byte)local_54] ^ puVar13[1];
      uVar21 = (&DAT_180051490)[local_4c >> 8 & 0xff] ^ (&DAT_180050490)[local_54 >> 0x18] ^
               (&DAT_180050890)[local_58 >> 0x10 & 0xff] ^ (&DAT_180051890)[(byte)local_50] ^
               puVar13[2];
      uVar17 = (&DAT_180050490)[local_50 >> 0x18] ^ (&DAT_180050890)[local_54 >> 0x10 & 0xff] ^
               (&DAT_180051490)[local_58 >> 8 & 0xff] ^ (&DAT_180051890)[(byte)local_4c] ^
               puVar13[3];
      local_58 = (&DAT_180050490)[uVar17 >> 0x18] ^ (&DAT_180050890)[uVar21 >> 0x10 & 0xff] ^
                 (&DAT_180051490)[uVar22 >> 8 & 0xff] ^ (&DAT_180051890)[uVar20 & 0xff] ^ puVar13[4]
      ;
      iVar15 = iVar15 + -1;
      local_54 = (&DAT_180050890)[uVar17 >> 0x10 & 0xff] ^ (&DAT_180051490)[uVar21 >> 8 & 0xff] ^
                 (&DAT_180050490)[uVar20 >> 0x18] ^ (&DAT_180051890)[uVar22 & 0xff] ^ puVar13[5];
      uVar19 = local_54 >> 0x18;
      local_50 = (&DAT_180050490)[uVar22 >> 0x18] ^ (&DAT_180050890)[uVar20 >> 0x10 & 0xff] ^
                 (&DAT_180051490)[uVar17 >> 8 & 0xff] ^ (&DAT_180051890)[uVar21 & 0xff] ^ puVar13[6]
      ;
      uVar23 = local_50 >> 0x18;
      local_70 = local_50 >> 8;
      local_74 = local_50 >> 0x10;
      local_4c = (&DAT_180050490)[uVar21 >> 0x18] ^ (&DAT_180050890)[uVar22 >> 0x10 & 0xff] ^
                 (&DAT_180051490)[uVar20 >> 8 & 0xff] ^ (&DAT_180051890)[uVar17 & 0xff] ^ puVar13[7]
      ;
      puVar13 = puVar13 + 8;
    } while (0 < iVar15);
    uVar21 = local_74 & 0xff;
    uVar17 = local_54 >> 8 & 0xff;
    uVar22 = local_70 & 0xff;
    uVar20 = local_54 >> 0x10 & 0xff;
    local_78 = (uint)CONCAT21((short)(uVar18 >> 0x10),(char)(local_4c >> 8));
    local_6c = uVar19;
    local_68 = uVar23;
  }
  uVar16 = (&DAT_180050490)[local_4c >> 0x18] ^ (&DAT_180050890)[uVar21 & 0xff] ^
           (&DAT_180051490)[uVar17 & 0xff] ^ (&DAT_180051890)[(byte)local_58] ^ *puVar13;
  uVar21 = (&DAT_180050490)[local_58 >> 0x18] ^ (&DAT_180050890)[local_4c >> 0x10 & 0xff] ^
           (&DAT_180051490)[uVar22 & 0xff] ^ (&DAT_180051890)[local_54 & 0xff] ^ puVar13[1];
  uVar22 = (&DAT_180050890)[local_58 >> 0x10 & 0xff] ^ (&DAT_180050490)[uVar19] ^
           (&DAT_180051490)[(byte)local_78] ^ (&DAT_180051890)[local_50 & 0xff] ^ puVar13[2];
  uVar18 = (&DAT_180051490)[local_58 >> 8 & 0xff] ^ (&DAT_180050490)[uVar23] ^
           (&DAT_180050890)[uVar20 & 0xff] ^ (&DAT_180051890)[local_4c & 0xff] ^ puVar13[3];
  uVar1 = (&DAT_18004fe90)[uVar18 >> 0x18];
  uVar2 = (&DAT_18004fe90)[uVar22 >> 0x10 & 0xff];
  uVar3 = (&DAT_18004fe90)[uVar21 >> 8 & 0xff];
  uVar4 = (&DAT_18004fe90)[uVar16 & 0xff];
  uVar19 = puVar13[4];
  uVar5 = (&DAT_18004fe90)[uVar16 >> 0x18];
  uVar6 = (&DAT_18004fe90)[uVar18 >> 0x10 & 0xff];
  uVar7 = (&DAT_18004fe90)[uVar22 >> 8 & 0xff];
  uVar8 = (&DAT_18004fe90)[uVar21 & 0xff];
  uVar23 = puVar13[5];
  uVar9 = (&DAT_18004fe90)[uVar22 >> 0x18];
  uVar10 = (&DAT_18004fe90)[uVar21 >> 0x10 & 0xff];
  uVar11 = (&DAT_18004fe90)[uVar16 >> 8 & 0xff];
  uVar12 = (&DAT_18004fe90)[uVar18 & 0xff];
  uVar17 = puVar13[7];
  param_3[2] = CONCAT31(CONCAT21(CONCAT11((&DAT_18004fe90)[uVar21 >> 0x18],
                                          (&DAT_18004fe90)[uVar16 >> 0x10 & 0xff]),
                                 (&DAT_18004fe90)[uVar18 >> 8 & 0xff]),
                        (&DAT_18004fe90)[uVar22 & 0xff]) ^ puVar13[6];
  *param_3 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) ^ uVar19;
  param_3[1] = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar6),uVar7),uVar8) ^ uVar23;
  param_3[3] = CONCAT31(CONCAT21(CONCAT11(uVar9,uVar10),uVar11),uVar12) ^ uVar17;
  puVar13 = &local_58;
  for (lVar14 = 0x20; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)puVar13 = 0;
    puVar13 = (uint *)((longlong)puVar13 + 1);
  }
  local_60 = param_3;
  __security_check_cookie(local_38 ^ (ulonglong)&local_78);
  return;
}




void FUN_1800368d0(int *param_1,uint *param_2,uint *param_3)

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
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_38;
  
  local_38 = DAT_18004e038 ^ (ulonglong)&local_78;
  lVar15 = *(longlong *)(param_1 + 2);
  local_54 = param_1[lVar15 + 5] ^ param_2[1];
  local_50 = param_1[lVar15 + 6] ^ param_2[2];
  local_58 = param_1[lVar15 + 4] ^ *param_2;
  uVar20 = param_1[lVar15 + 7] ^ param_2[3];
  puVar14 = (uint *)(param_1 + lVar15 + 8);
  local_78 = uVar20 >> 0x10;
  iVar17 = (*param_1 >> 1) + -1;
  uVar19 = local_54 >> 0x18;
  uVar21 = local_54 >> 8;
  uVar22 = local_54 >> 0x10;
  uVar23 = local_50 >> 0x10;
  uVar16 = local_50 >> 0x18;
  uVar25 = local_50 >> 8;
  local_4c = uVar20;
  if (0 < iVar17) {
    do {
      uVar21 = (&DAT_180050c90)[local_4c >> 8 & 0xff] ^ (&DAT_180051c90)[local_50 >> 0x10 & 0xff] ^
               (&DAT_18004ff90)[local_54 >> 0x18] ^ (&DAT_180051090)[(byte)local_58] ^ *puVar14;
      uVar25 = (&DAT_180051c90)[local_4c >> 0x10 & 0xff] ^ (&DAT_18004ff90)[local_50 >> 0x18] ^
               (&DAT_180050c90)[local_58 >> 8 & 0xff] ^ (&DAT_180051090)[(byte)local_54] ^
               puVar14[1];
      uVar22 = (&DAT_18004ff90)[local_4c >> 0x18] ^ (&DAT_180050c90)[local_54 >> 8 & 0xff] ^
               (&DAT_180051c90)[local_58 >> 0x10 & 0xff] ^ (&DAT_180051090)[(byte)local_50] ^
               puVar14[2];
      uVar23 = (&DAT_180050c90)[local_50 >> 8 & 0xff] ^ (&DAT_180051c90)[local_54 >> 0x10 & 0xff] ^
               (&DAT_18004ff90)[local_58 >> 0x18] ^ (&DAT_180051090)[(byte)local_4c] ^ puVar14[3];
      local_58 = (&DAT_180050c90)[uVar23 >> 8 & 0xff] ^ (&DAT_180051c90)[uVar22 >> 0x10 & 0xff] ^
                 (&DAT_18004ff90)[uVar25 >> 0x18] ^ (&DAT_180051090)[uVar21 & 0xff] ^ puVar14[4];
      iVar17 = iVar17 + -1;
      local_54 = (&DAT_180051c90)[uVar23 >> 0x10 & 0xff] ^ (&DAT_18004ff90)[uVar22 >> 0x18] ^
                 (&DAT_180050c90)[uVar21 >> 8 & 0xff] ^ (&DAT_180051090)[uVar25 & 0xff] ^ puVar14[5]
      ;
      local_64 = local_54 >> 0x10;
      uVar19 = local_54 >> 0x18;
      local_50 = (&DAT_18004ff90)[uVar23 >> 0x18] ^ (&DAT_180051c90)[uVar21 >> 0x10 & 0xff] ^
                 (&DAT_180050c90)[uVar25 >> 8 & 0xff] ^ (&DAT_180051090)[uVar22 & 0xff] ^ puVar14[6]
      ;
      local_68 = local_50 >> 8;
      uVar16 = local_50 >> 0x18;
      local_4c = (&DAT_180050c90)[uVar22 >> 8 & 0xff] ^ (&DAT_180051c90)[uVar25 >> 0x10 & 0xff] ^
                 (&DAT_18004ff90)[uVar21 >> 0x18] ^ (&DAT_180051090)[uVar23 & 0xff] ^ puVar14[7];
      puVar14 = puVar14 + 8;
    } while (0 < iVar17);
    uVar23 = local_50 >> 0x10 & 0xff;
    uVar21 = local_54 >> 8 & 0xff;
    uVar25 = local_68 & 0xff;
    uVar22 = local_64 & 0xff;
    local_78 = (uint)CONCAT11((char)(uVar20 >> 0x18),(char)(local_4c >> 0x10));
    local_70 = uVar19;
    local_6c = uVar16;
  }
  local_74 = local_4c >> 0x18;
  uVar13 = local_74;
  uVar18 = (&DAT_18004ff90)[uVar19] ^ (&DAT_180051c90)[uVar23 & 0xff] ^
           (&DAT_180050c90)[local_4c >> 8 & 0xff] ^ (&DAT_180051090)[(byte)local_58] ^ *puVar14;
  uVar23 = (&DAT_180050c90)[local_58 >> 8 & 0xff] ^ (&DAT_18004ff90)[uVar16] ^
           (&DAT_180051c90)[(byte)local_78] ^ (&DAT_180051090)[local_54 & 0xff] ^ puVar14[1];
  local_74._0_1_ = (byte)(local_4c >> 0x18);
  uVar24 = (&DAT_180051c90)[local_58 >> 0x10 & 0xff] ^ (&DAT_18004ff90)[(byte)local_74] ^
           (&DAT_180050c90)[uVar21 & 0xff] ^ (&DAT_180051090)[local_50 & 0xff] ^ puVar14[2];
  uVar21 = (&DAT_18004ff90)[local_58 >> 0x18] ^ (&DAT_180051c90)[uVar22 & 0xff] ^
           (&DAT_180050c90)[uVar25 & 0xff] ^ (&DAT_180051090)[local_4c & 0xff] ^ puVar14[3];
  uVar1 = (&DAT_180050390)[uVar23 >> 0x18];
  uVar2 = (&DAT_180050390)[uVar24 >> 0x10 & 0xff];
  uVar3 = (&DAT_180050390)[uVar21 >> 8 & 0xff];
  uVar4 = (&DAT_180050390)[uVar18 & 0xff];
  uVar19 = puVar14[4];
  uVar5 = (&DAT_180050390)[uVar24 >> 0x18];
  uVar6 = (&DAT_180050390)[uVar21 >> 0x10 & 0xff];
  uVar7 = (&DAT_180050390)[uVar18 >> 8 & 0xff];
  uVar8 = (&DAT_180050390)[uVar23 & 0xff];
  uVar16 = puVar14[5];
  uVar9 = (&DAT_180050390)[uVar18 >> 0x18];
  uVar10 = (&DAT_180050390)[uVar23 >> 0x10 & 0xff];
  uVar11 = (&DAT_180050390)[uVar24 >> 8 & 0xff];
  uVar12 = (&DAT_180050390)[uVar21 & 0xff];
  uVar20 = puVar14[7];
  param_3[2] = CONCAT31(CONCAT21(CONCAT11((&DAT_180050390)[uVar21 >> 0x18],
                                          (&DAT_180050390)[uVar18 >> 0x10 & 0xff]),
                                 (&DAT_180050390)[uVar23 >> 8 & 0xff]),
                        (&DAT_180050390)[uVar24 & 0xff]) ^ puVar14[6];
  *param_3 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) ^ uVar19;
  param_3[1] = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar6),uVar7),uVar8) ^ uVar16;
  param_3[3] = CONCAT31(CONCAT21(CONCAT11(uVar9,uVar10),uVar11),uVar12) ^ uVar20;
  puVar14 = &local_58;
  for (lVar15 = 0x20; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (uint *)((longlong)puVar14 + 1);
  }
  local_74 = uVar13;
  local_60 = param_3;
  __security_check_cookie(local_38 ^ (ulonglong)&local_78);
  return;
}




undefined8
FUN_180036eb0(int *param_1,uint param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16])

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 (*pauVar4) [16];
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 < 2) {
    bVar1 = FUN_18002e960(0x2000000);
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (((ulonglong)param_1 >> 2 & 3) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 4 - ((uint)((ulonglong)param_1 >> 2) & 3);
    }
    uVar6 = (ulonglong)uVar2;
    if (uVar6 != *(ulonglong *)(param_1 + 2)) {
      memmove(param_1 + uVar6 + 4,param_1 + *(ulonglong *)(param_1 + 2) + 4,
              (longlong)((*param_1 + 1) * 0x10));
      *(ulonglong *)(param_1 + 2) = uVar6;
    }
    bVar1 = FUN_18002e960(0x2000000);
    if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
      if (param_2 == 0) {
        uVar3 = FUN_1800368d0(param_1,(uint *)param_3,(uint *)param_4);
      }
      else {
        uVar3 = FUN_1800362e0(param_1,(uint *)param_3,(uint *)param_4);
      }
    }
    else {
      pauVar4 = (undefined1 (*) [16])(param_1 + *(longlong *)(param_1 + 2) + 8);
      iVar5 = *param_1 + -1;
      auVar7 = *(undefined1 (*) [16])(param_1 + *(longlong *)(param_1 + 2) + 4) ^ *param_3;
      if (param_2 == 0) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          auVar7 = aesdec(auVar7,*pauVar4);
          pauVar4 = pauVar4 + 1;
        }
        auVar7 = aesdeclast(auVar7,*pauVar4);
        *param_4 = auVar7;
        uVar3 = 0;
      }
      else {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          auVar7 = aesenc(auVar7,*pauVar4);
          pauVar4 = pauVar4 + 1;
        }
        auVar7 = aesenclast(auVar7,*pauVar4);
        *param_4 = auVar7;
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0xffffffdf;
  }
  return uVar3;
}




undefined8
FUN_180036fe0(int *param_1,uint param_2,ulonglong param_3,undefined1 (*param_4) [16],
             undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  
  if (1 < param_2) {
    return 0xffffffdf;
  }
  if (param_3 != 0) {
    if ((param_3 & 0xf) != 0) {
      return 0xffffffde;
    }
    if (param_2 == 0) {
      if (param_3 != 0) {
        do {
          uVar4 = *(undefined8 *)*param_5;
          uVar1 = *(undefined8 *)(*param_5 + 8);
          uVar2 = FUN_180036eb0(param_1,0,param_5,param_6);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          FUN_18002ccf0((longlong)param_6,(longlong)param_6,(ulonglong *)param_4);
          param_6 = param_6 + 1;
          param_5 = param_5 + 1;
          *(undefined8 *)*param_4 = uVar4;
          *(undefined8 *)(*param_4 + 8) = uVar1;
          param_3 = param_3 - 0x10;
        } while (param_3 != 0);
      }
    }
    else {
      pauVar5 = param_4;
      pauVar3 = param_4;
      if (param_3 != 0) {
        do {
          pauVar5 = param_6;
          FUN_18002ccf0((longlong)pauVar5,(longlong)param_5,(ulonglong *)pauVar3);
          uVar4 = FUN_180036eb0(param_1,param_2,pauVar5,pauVar5);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          param_5 = param_5 + 1;
          param_3 = param_3 - 0x10;
          pauVar3 = pauVar5;
          param_6 = pauVar5 + 1;
        } while (param_3 != 0);
      }
      uVar4 = *(undefined8 *)(*pauVar5 + 8);
      *(undefined8 *)*param_4 = *(undefined8 *)*pauVar5;
      *(undefined8 *)(*param_4 + 8) = uVar4;
    }
    return 0;
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: __cdecl std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  while (_Memory = DAT_18004f788, DAT_18004f788 != (undefined8 *)0x0) {
    puVar1 = DAT_18004f788 + 1;
    DAT_18004f788 = (undefined8 *)*DAT_18004f788;
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,in_R8,in_R9,uVar2);
    }
    free(_Memory);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl std::_Facet_Register(class std::_Facet_base * __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_18004f788;
    puVar1[1] = param_1;
  }
  DAT_18004f788 = puVar1;
  return;
}




void FUN_180037a70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180039430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_18004e000)(param_1,0);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180037a80(LPCSTR param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *_Memory;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar9;
  undefined1 auStackY_68 [32];
  int local_38;
  int iStack_34;
  void *local_30;
  ulonglong local_28;
  longlong lVar8;
  
  puVar9 = auStackY_68;
  local_28 = DAT_18004e038 ^ (ulonglong)&local_38;
  if (param_1 != (LPCSTR)0x0) {
    lVar7 = -1;
    do {
      lVar8 = lVar7;
      lVar7 = lVar8 + 1;
    } while (param_1[lVar7] != '\0');
    uVar6 = lVar8 + 2;
    if (0x7fffffff < uVar6) {
      FUN_180037a70(0x80070057);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = (int)uVar6;
    iStack_34 = iVar4;
    iVar3 = MultiByteToWideChar(0,0,param_1,iVar4,(LPWSTR)0x0,0);
    local_38 = iVar3;
    if (iVar3 == 0) {
      uVar5 = GetLastError();
      if (0 < (int)uVar5) {
        uVar5 = uVar5 & 0xffff | 0x80070000;
      }
      FUN_180037a70((ulonglong)uVar5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (iVar3 < 0x1000) {
      uVar2 = (longlong)iVar3 * 2;
      uVar6 = uVar2 + 0xf;
      if (uVar6 <= uVar2) {
        uVar6 = 0xffffffffffffff0;
      }
      _Memory = (void *)((longlong)&local_38 + -(uVar6 & 0xfffffffffffffff0));
      puVar9 = auStackY_68 + -(uVar6 & 0xfffffffffffffff0);
    }
    else {
      _Memory = malloc((longlong)iVar3 * 2);
      puVar9 = auStackY_68;
    }
    local_30 = _Memory;
    if (_Memory == (void *)0x0) {
      *(undefined8 *)(puVar9 + -8) = 0x180037bfb;
      FUN_180037a70(0x8007000e);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)(puVar9 + 0x28) = iVar3;
    *(void **)(puVar9 + 0x20) = _Memory;
    *(undefined8 *)(puVar9 + -8) = 0x180037b86;
    iVar4 = MultiByteToWideChar(0,0,param_1,iVar4,*(LPWSTR *)(puVar9 + 0x20),*(int *)(puVar9 + 0x28)
                               );
    if (iVar4 == 0) {
      if (0xfff < iVar3) {
        *(undefined8 *)(puVar9 + -8) = 0x180037c0d;
        free(_Memory);
      }
      *(undefined8 *)(puVar9 + -8) = 0x180037c13;
      uVar5 = GetLastError();
      if (0 < (int)uVar5) {
        uVar5 = uVar5 & 0xffff | 0x80070000;
      }
      *(undefined8 *)(puVar9 + -8) = 0x180037c26;
      FUN_180037a70((ulonglong)uVar5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined8 *)(puVar9 + -8) = 0x180037b93;
    lVar7 = Ordinal_2(_Memory);
    if (0xfff < iVar3) {
      *(undefined8 *)(puVar9 + -8) = 0x180037ba7;
      free(_Memory);
    }
    if (lVar7 == 0) {
      *(undefined8 *)(puVar9 + -8) = 0x180037c31;
      FUN_180037a70(0x8007000e);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = local_28 ^ (ulonglong)&local_38;
  *(undefined8 *)(puVar9 + -8) = 0x180037bbb;
  __security_check_cookie(uVar6);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: __cdecl _com_error::_com_error(class _com_error const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_com_error * __thiscall _com_error::_com_error(_com_error *this,_com_error *param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this = &PTR__scalar_deleting_destructor__18003c7a8;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(this + 0x10) = plVar1;
  *(undefined8 *)(this + 0x18) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return this;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: __cdecl _com_error::_com_error(long,struct IErrorInfo * __ptr64,bool) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_com_error * __thiscall
_com_error::_com_error(_com_error *this,long param_1,IErrorInfo *param_2,bool param_3)

{
  *(long *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__18003c7a8;
  *(IErrorInfo **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  if ((param_2 != (IErrorInfo *)0x0) && (param_3)) {
    (**(code **)(*(longlong *)param_2 + 8))(param_2);
  }
  return this;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: virtual __cdecl _com_error::~_com_error(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall _com_error::~_com_error(_com_error *this)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__18003c7a8;
  if (*(longlong **)(this + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x10) + 0x10))();
  }
  if (*(HLOCAL *)(this + 0x18) != (HLOCAL)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180037d17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LocalFree(*(HLOCAL *)(this + 0x18));
    return;
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl _com_error::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall _com_error::_scalar_deleting_destructor_(_com_error *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__18003c7a8;
  if (*(longlong **)(this + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x10) + 0x10))();
  }
  if (*(HLOCAL *)(this + 0x18) != (HLOCAL)0x0) {
    LocalFree(*(HLOCAL *)(this + 0x18));
  }
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18004e038) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    FUN_180038e04();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180038de4();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




undefined8 * FUN_180037e40(undefined8 *param_1,ulonglong param_2)

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
LAB_180037e9a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18004f7a0 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18004f7a0;
        pvVar1 = DAT_18004f7a0;
      }
      DAT_18004f7a0 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180037e9a;
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
    uVar3 = FUN_180038fa0();
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
  
  uVar1 = FUN_180038024(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180039378();
  if (cVar1 != '\0') {
    cVar1 = FUN_180039378();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180039378();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180039378();
  FUN_180039378();
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
    _execute_onexit_table(&DAT_18004f7b0);
    return;
  }
  uVar2 = FUN_18003937c();
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
  FUN_180039378();
  FUN_180039378();
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
    DAT_18004f7a8 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180039378();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180039378();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180039378();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180038024(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18004f7a9 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18004e038 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18004e038;
      _DAT_18004f7b0 = in_RAX;
      uRam000000018004f7b8 = in_RAX;
      _DAT_18004f7c0 = in_RAX;
      _DAT_18004f7c8 = in_RAX;
      uRam000000018004f7d0 = in_RAX;
      _DAT_18004f7d8 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18004f7b0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18004f7c8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18004f7a9 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018003818a) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000228; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000318;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180038173;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180038173:
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
    DAT_18004f7a0 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18004f7a8 == '\0') || (param_2 == '\0')) {
    FUN_180039378();
    FUN_180039378();
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
  
  bVar2 = (byte)DAT_18004e038 & 0x3f;
  if (((DAT_18004e038 ^ _DAT_18004f7b0) >> bVar2 | (DAT_18004e038 ^ _DAT_18004f7b0) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18004f7b0,_Func);
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

undefined8 FUN_180038258(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18004f7e0,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_1800383aa;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18004f810 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18004f810 != (HANDLE)0x0) goto LAB_180038348;
  }
  else {
    DAT_18004f810 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18004f808);
    bVar7 = 0x40 - ((byte)DAT_18004e038 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18004f818 = DAT_18004e038 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18004f820 = DAT_18004e038 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180038348:
    uVar6 = FUN_180038024(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_1800383b8);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_1800383aa:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_1800383b8(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
  if (DAT_18004f810 != (HANDLE)0x0) {
    CloseHandle(DAT_18004f810);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
  uVar1 = (ulonglong)_tls_index;
  DAT_18004e024 = DAT_18004e024 + 1;
  *param_1 = DAT_18004e024;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18004e024;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1800384c4:
                    /* WARNING: Could not recover jumptable at 0x0001800384d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18004e024;
      goto LAB_1800384c4;
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
  
  if (DAT_18004f810 != (HANDLE)0x0) {
    SetEvent(DAT_18004f810);
                    /* WARNING: Could not recover jumptable at 0x000180038521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18004f810);
    return;
  }
  bVar1 = (byte)DAT_18004e038 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180039430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18004e038 ^ _DAT_18004f820) >> bVar1 |
            (DAT_18004e038 ^ _DAT_18004f820) << 0x40 - bVar1))(&DAT_18004f808);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18004f810 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
    WaitForSingleObjectEx(DAT_18004f810,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180038598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18004f7e0);
    return;
  }
  bVar1 = (byte)DAT_18004e038 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180039430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18004e038 ^ _DAT_18004f818) >> bVar1 |
            (DAT_18004e038 ^ _DAT_18004f818) << 0x40 - bVar1))
            (&DAT_18004f808,&DAT_18004f7e0,param_1);
  return;
}




void FUN_1800385a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800385a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18004f830);
  return;
}




void FUN_1800385b0(void)

{
  __std_type_info_destroy_list(&DAT_18004f830);
  return;
}




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001800385e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
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
  *(undefined8 *)(puVar3 + -8) = 0x18003861a;
  capture_previous_context((PCONTEXT)&DAT_18004f8e0);
  _DAT_18004f850 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18004f978 = puVar3 + 0x40;
  _DAT_18004f960 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18004f840 = 0xc0000409;
  _DAT_18004f844 = 1;
  _DAT_18004f858 = 1;
  DAT_18004f860 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18004e038;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18004e030;
  *(undefined8 *)(puVar3 + -8) = 0x1800386bc;
  DAT_18004f9d8 = _DAT_18004f850;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18003c8d8);
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
  *(undefined8 *)(puVar3 + -8) = 0x180038702;
  capture_current_context((PCONTEXT)&DAT_18004f8e0);
  _DAT_18004f850 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18004f978 = puVar3 + 0x30;
  _DAT_18004f840 = 0xc0000409;
  _DAT_18004f844 = 1;
  _DAT_18004f858 = 1;
  DAT_18004f860 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x18003876e;
  DAT_18004f9d8 = _DAT_18004f850;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18003c8d8);
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
    if (DAT_18004fdb0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18004fdb0 = DAT_18004fdb0 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18004f798 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_1800385b0();
      FID_conflict__RTC_Initialize();
      DAT_18004f798 = 0;
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
    if (DAT_18004f798 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18004f798 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_1800385a0();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18003c728,&DAT_18003c738);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18003c700,&DAT_18003c720);
        DAT_18004f798 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_1800391f0();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18004fdb0 = DAT_18004fdb0 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180038b18) */
/* WARNING: Removing unreachable block (ram,0x000180038aa7) */
/* WARNING: Removing unreachable block (ram,0x000180038b5b) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18004fdb0 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_1800212f0();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_1800212f0();
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




void _guard_check_icall(void)

{
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




undefined8 * FUN_180038ccc(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180038d0c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180038d2c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180038d6c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180038da0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180038de4(void)

{
  undefined8 local_28 [5];
  
  FUN_180038d0c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18004b180);
}




void FUN_180038e04(void)

{
  undefined8 local_28 [5];
  
  FUN_180038d6c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18004b1e0);
}




/* WARNING: Removing unreachable block (ram,0x000180038ef2) */
/* WARNING: Removing unreachable block (ram,0x000180038e70) */
/* WARNING: Removing unreachable block (ram,0x000180038e4b) */
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
  
  DAT_18004e04c = 2;
  _DAT_18004e048 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18004e050 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18004fdb4 = DAT_18004fdb4 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18004fdb4 = DAT_18004fdb4 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18004e048 = 2;
    DAT_18004e04c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18004e04c = 0xe;
      _DAT_18004e048 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18004e048 = 5;
        DAT_18004e04c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180038fa0(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18004e060 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180038fb4(void)

{
  _DAT_18004fdb8 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180038fef;
  FUN_180038fb4();
  *(undefined8 *)(puVar4 + -8) = 0x180039000;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18003900a;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180039024;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180039065;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180039097;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1800390b9;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800390da;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800390e5;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800390f5;
    FUN_180038fb4();
  }
  return;
}




void FUN_180039108(__uint64 param_1)

{
  operator_new(param_1);
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
  
  if (DAT_18004e038 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18004e038 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18004e038 == 0x2b992ddfa232) {
      DAT_18004e038 = 0x2b992ddfa233;
    }
  }
  DAT_18004e030 = ~DAT_18004e038;
  return;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800010c0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800267f0();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_1800391f0(void)

{
  return &DAT_1800523f8;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180046948; puVar1 < &DAT_180046948; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180046958; puVar1 < &DAT_180046958; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
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




undefined1 FUN_180039378(void)

{
  return 1;
}




undefined8 FUN_18003937c(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180039430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180039440(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_180039460(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xa0);
  return;
}




void Unwind_18003947b(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xd8);
  return;
}




void Unwind_180039496(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xc0);
  return;
}




void Unwind_1800394c0(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xa0);
  return;
}




void Unwind_1800394db(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xb8);
  return;
}




void Unwind_180039500(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_180039520(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x128);
  return;
}




void Unwind_180039540(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x50);
  return;
}




void Unwind_180039560(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_18003957b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_180039596(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xf8));
  return;
}




void Unwind_1800395c0(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa0));
  return;
}




void Unwind_1800395db(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 200));
  return;
}




void Unwind_1800395f6(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18003960e(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x110));
  return;
}




void Unwind_180039630(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x48);
  return;
}




void Unwind_180039650(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_18003966b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xd8));
  return;
}




void Unwind_180039686(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x120));
  return;
}




void Unwind_1800396b0(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_1800396cb(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_1800396e6(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x108));
  return;
}




void Unwind_180039710(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_18003972b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xd8));
  return;
}




void Unwind_180039746(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18003975e(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x120));
  return;
}




void Unwind_180039780(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa8));
  return;
}




void Unwind_18003979b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xd0));
  return;
}




void Unwind_1800397b6(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_1800397ce(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1800397e9(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x120));
  return;
}




void Unwind_180039810(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xb0);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180039852) */

undefined * Catch_18003982b(undefined8 param_1,longlong param_2)

{
  DestroyBitLockerMgr(*(BitLockerManager **)(param_2 + 0x38));
  return &DAT_180006ce1;
}




void Unwind_180039860(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x2d0));
  return;
}




void Unwind_18003987b(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x168);
  return;
}




void Unwind_180039896(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x98);
  return;
}




void Unwind_1800398b1(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x150);
  return;
}




void Unwind_1800398cc(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x138);
  return;
}




void Unwind_1800398e7(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x2f0);
  return;
}




void Unwind_180039902(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x350));
  return;
}




void Unwind_18003991d(undefined8 param_1,longlong param_2)

{
  FUN_180002430(param_2 + 0x1b0);
  return;
}




void Unwind_180039940(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_180039958(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa0));
  return;
}




void Unwind_180039973(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xd0));
  return;
}




void Unwind_180039990(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_1800399ab(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 200));
  return;
}




void Unwind_1800399c6(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xf8));
  return;
}




void Unwind_1800399e1(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x140));
  return;
}




void Unwind_180039a00(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_180039a18(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa8));
  return;
}




void Unwind_180039a40(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xb8));
  return;
}




void Unwind_180039a5b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xe0));
  return;
}




void Unwind_180039a76(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x128));
  return;
}




void Unwind_180039aa0(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_180039abb(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xb0));
  return;
}




void Unwind_180039ae0(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_180039afb(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xb8));
  return;
}




void Unwind_180039b20(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa0));
  return;
}




void Unwind_180039b3b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xd0));
  return;
}




void Unwind_180039b60(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x40);
  return;
}




void Unwind_180039b80(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x68);
  return;
}




void Unwind_180039b98(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x50);
  return;
}




void Unwind_180039bb0(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x60);
  return;
}




void Unwind_180039bd0(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x38);
  return;
}




void Unwind_180039bf0(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x40);
  return;
}




void Unwind_180039c10(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x60);
  return;
}




void Unwind_180039c28(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x48);
  return;
}




void Unwind_180039c40(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xe0);
  return;
}




void Unwind_180039c60(undefined8 param_1,longlong param_2)

{
  FUN_180011d20(param_2 + 0x48);
  return;
}




void Unwind_180039c80(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x48);
  return;
}




void Unwind_180039c98(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x98);
  return;
}




void Unwind_180039cc0(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(*(undefined8 *)(param_2 + 0x420));
  return;
}




void Unwind_180039cdb(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x80);
  return;
}




void Unwind_180039cf6(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x68);
  return;
}




void Unwind_180039d0e(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x1b8);
  return;
}




void Unwind_180039d29(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x160);
  return;
}




void Unwind_180039d44(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x148);
  return;
}




void Unwind_180039d60(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x58);
  return;
}




void Unwind_180039d78(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 200);
  return;
}




void Unwind_180039d93(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xa8);
  return;
}




void Unwind_180039db0(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(*(undefined8 *)(param_2 + 0x1d0));
  return;
}




void Unwind_180039dcb(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x90);
  return;
}




void Unwind_180039de6(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x78);
  return;
}




void Unwind_180039dfe(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x48);
  return;
}




void Unwind_180039e16(undefined8 param_1,longlong param_2)

{
  FUN_180012720(param_2 + 0x60);
  return;
}




void Unwind_180039e2e(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(*(undefined8 *)(param_2 + 0xd8));
  return;
}




void Unwind_180039e49(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x188);
  return;
}




void Unwind_180039e70(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x98);
  return;
}




void Unwind_180039e8b(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x48);
  return;
}




void Unwind_180039eb0(undefined8 param_1,longlong param_2)

{
  FUN_180002ea0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_180039ec8(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x130);
  return;
}




void Unwind_180039ee3(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x110);
  return;
}




void Unwind_180039f00(undefined8 param_1,longlong param_2)

{
  FUN_180002ea0((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_180039f18(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x150);
  return;
}




void Unwind_180039f33(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x130);
  return;
}




void Unwind_180039f4e(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x110);
  return;
}




void Unwind_180039f70(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x130);
  return;
}




void Unwind_180039f8b(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x110);
  return;
}




void Unwind_180039fa6(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xf0);
  return;
}




void Unwind_180039fd0(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x88);
  return;
}




void Unwind_180039ff0(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(*(undefined8 *)(param_2 + 0x150));
  return;
}




void Unwind_18003a00b(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xe8);
  return;
}




void Unwind_18003a026(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x108);
  return;
}




void Unwind_18003a041(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x90);
  return;
}




void Unwind_18003a060(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(*(undefined8 *)(param_2 + 0x160));
  return;
}




void Unwind_18003a07b(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xf8);
  return;
}




void Unwind_18003a096(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x118);
  return;
}




void Unwind_18003a0b1(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xa0);
  return;
}




void Unwind_18003a0d0(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa0));
  return;
}




void Unwind_18003a0eb(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 200));
  return;
}




void Unwind_18003a106(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x110));
  return;
}




void Unwind_18003a121(undefined8 param_1,longlong param_2)

{
  FUN_180012c40(param_2 + 0x130);
  return;
}




void Unwind_18003a140(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(*(undefined8 *)(param_2 + 0x208));
  return;
}




void Unwind_18003a15b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xa8));
  return;
}




void Unwind_18003a176(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0xd0));
  return;
}




void Unwind_18003a191(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18003a1a9(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x118));
  return;
}




void Unwind_18003a1c4(undefined8 param_1,longlong param_2)

{
  FUN_18000edb0(param_2 + 0x1a8);
  return;
}




void Unwind_18003a1e0(undefined8 param_1,longlong param_2)

{
  FUN_180012720(param_2 + 0x38);
  return;
}




void Unwind_18003a200(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_18003a21b(undefined8 param_1,longlong param_2)

{
  FUN_180001ab0((longlong *)(param_2 + 200));
  return;
}




void Unwind_18003a240(undefined8 param_1,longlong param_2)

{
  FUN_18000ff50(param_2 + 0x58);
  return;
}




void Unwind_18003a260(undefined8 param_1,longlong param_2)

{
  FUN_180011b60(param_2 + 0x38);
  return;
}




void Unwind_18003a280(undefined8 param_1,longlong param_2)

{
  FUN_180012720(param_2 + 0x60);
  return;
}




void Unwind_18003a298(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x80);
  return;
}




void Unwind_18003a2c0(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(*(undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_18003a2e0(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(*(undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_18003a2fb(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0x68);
  return;
}




void Unwind_18003a320(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x68);
  return;
}




void Unwind_18003a338(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x80);
  return;
}




void Unwind_18003a353(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xf8);
  return;
}




void Unwind_18003a370(undefined8 param_1,longlong param_2)

{
  FUN_1800133c0(param_2 + 0xd8);
  return;
}




void Unwind_18003a38b(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0xa0);
  return;
}




void Unwind_18003a3a6(undefined8 param_1,longlong param_2)

{
  FUN_1800121e0(param_2 + 0x88);
  return;
}




void Catch_All_18003a3d0(undefined8 param_1,longlong param_2)

{
  FUN_1800151a0(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a400(undefined8 param_1,longlong param_2)

{
  FUN_180015410(*(undefined8 *)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a430(undefined8 param_1,longlong param_2)

{
  FUN_180015410(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a460(undefined8 param_1,longlong param_2)

{
  FUN_180015410(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003a490(void)

{
  FUN_180014c10();
  return;
}




void Unwind_18003a4b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,struct_std::char_traits<char>_>::
    ~basic_ios<char,struct_std::char_traits<char>_>
              ((basic_ios<char,struct_std::char_traits<char>_> *)
               (*(longlong *)(param_2 + 0x60) + 0xa8));
  }
  return;
}




void Unwind_18003a4de(undefined8 param_1,longlong param_2)

{
  std::basic_ostream<char,struct_std::char_traits<char>_>::
  ~basic_ostream<char,struct_std::char_traits<char>_>
            ((basic_ostream<char,struct_std::char_traits<char>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}




void Unwind_18003a4fb(undefined8 param_1,longlong param_2)

{
  FUN_180014ba0((basic_streambuf<char,struct_std::char_traits<char>_> *)
                (*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_18003a520(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0xb0));
  return;
}




void Unwind_18003a540(undefined8 param_1,longlong param_2)

{
  FUN_180001840(param_2 + 0x40);
  return;
}




void Unwind_18003a560(undefined8 param_1,longlong param_2)

{
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>
            (*(basic_streambuf<char,struct_std::char_traits<char>_> **)(param_2 + 0x40));
  return;
}




void Catch_All_18003a580(undefined8 param_1,longlong param_2)

{
  FUN_180017e30(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003a5c0(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x38));
  return;
}




void Catch_All_18003a5e0(undefined8 param_1,longlong param_2)

{
  FUN_180015110(*(undefined8 *)(param_2 + 0xb0));
  FUN_180017be0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a630(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180015110(*(undefined8 *)(param_2 + 0xb0));
  uVar1 = FUN_180014f00(*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x28),
             *(longlong *)(param_2 + 0x38));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a690(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180015110(*(undefined8 *)(param_2 + 0xb0));
  uVar1 = FUN_180014f00(*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_180015a50(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x28),
                *(ulonglong *)(param_2 + 0x38));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a6f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180015110(*(undefined8 *)(param_2 + 0xb0));
  uVar1 = FUN_180014f00(*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_180015a50(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x28),
                *(ulonglong *)(param_2 + 0x38));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a750(undefined8 param_1,longlong param_2)

{
  FUN_180015110(*(undefined8 *)(param_2 + 0xb0));
  FUN_180015a50(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(ulonglong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a7a0(undefined8 param_1,longlong param_2)

{
  FUN_180017cf0(*(undefined8 *)(param_2 + 0xb0),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_180017d80(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a7f0(undefined8 param_1,longlong param_2)

{
  FUN_180015110(*(undefined8 *)(param_2 + 0xb0));
  FUN_18001cbe0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a840(undefined8 param_1,longlong param_2)

{
  FUN_180017db0(*(undefined8 *)(param_2 + 0xb0),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_180017e30(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a890(undefined8 param_1,longlong param_2)

{
  FUN_180017db0(*(undefined8 *)(param_2 + 0xb0),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_180017e30(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003a8e0(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x38));
  return;
}




void Unwind_18003a8f9(undefined8 param_1,longlong param_2)

{
  FUN_18001c0b0((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)(param_2 + 0x40));
  return;
}




void Catch_All_18003a920(undefined8 param_1,longlong param_2)

{
  FUN_180015410(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003a950(void)

{
  FUN_18001e7e0();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003a990(undefined8 param_1,longlong param_2)

{
  FUN_18001f140((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18003a9b0(undefined8 param_1,longlong param_2)

{
  FUN_18001f0c0((longlong *)(param_2 + 0x30));
  return;
}




void Catch_All_18003a9d0(undefined8 param_1,longlong param_2)

{
  FUN_1800178a0(*(undefined8 *)(param_2 + 0x60),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003aa10(undefined8 param_1,longlong param_2)

{
  FUN_180017e30(*(undefined8 *)(param_2 + 0x20),*(void **)(param_2 + 0x28),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003aa50(undefined8 param_1,longlong param_2)

{
  FUN_18002a770((int *)(param_2 + 0x20));
  return;
}




void Unwind_18003aa70(undefined8 param_1,longlong param_2)

{
  FUN_180002f40((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18003aa90(undefined8 param_1,longlong param_2)

{
  FUN_180002f40((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_18003aab0(undefined8 param_1,longlong param_2)

{
  FUN_180002f40((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18003aad0(undefined8 param_1,longlong param_2)

{
  FUN_180002f40((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18003aae8(undefined8 param_1,longlong param_2)

{
  FUN_180020bf0(param_2 + 0x58);
  return;
}




void Unwind_18003ab00(undefined8 param_1,longlong param_2)

{
  FUN_180002f40((longlong *)(param_2 + 0x58));
  return;
}




undefined * Catch_All_18003ab20(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  return &DAT_180020f14;
}




void Unwind_18003ab50(void)

{
  _Init_thread_abort(&DAT_1800521a0);
  return;
}




void Unwind_18003ab6b(void)

{
  _Init_thread_abort(&DAT_1800521a4);
  return;
}




void Unwind_18003ab86(undefined8 param_1,longlong param_2)

{
  FUN_180021240((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18003ab9e(void)

{
  _Init_thread_abort(&DAT_180052098);
  return;
}




void Unwind_18003abc0(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x50));
  return;
}




void Unwind_18003abe0(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0xa0));
  return;
}




void Unwind_18003abfb(undefined8 param_1,longlong param_2)

{
  FUN_180022200(param_2 + 0x88);
  return;
}




void Unwind_18003ac16(undefined8 param_1,longlong param_2)

{
  FUN_1800138f0((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0xc0));
  return;
}




void Unwind_18003ac31(undefined8 param_1,longlong param_2)

{
  FUN_180021c20((longlong *)(param_2 + 0x28));
  return;
}




void Catch_All_18003ac50(undefined8 param_1,longlong param_2)

{
  FUN_180022b10(*(undefined8 *)(param_2 + 0x28),*(void **)(param_2 + 0x20),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003ac90(undefined8 param_1,longlong param_2)

{
  FUN_180022960(*(undefined8 *)(param_2 + 0xb0),*(longlong *)(param_2 + 0x30),
                *(longlong *)(param_2 + 0x50));
  FUN_180017be0(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003ace0(undefined8 param_1,longlong param_2)

{
  FUN_180023b70((longlong *)(param_2 + 0x30));
  return;
}




void Catch_All_18003ad00(undefined8 param_1,longlong param_2)

{
  FUN_180022390(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x30));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003ad40(undefined8 param_1,longlong param_2)

{
  FUN_180024eb0(*(undefined8 *)(param_2 + 0x3d0),*(void **)(param_2 + 0x3f0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003ad80(undefined8 param_1,longlong param_2)

{
  FUN_180022b10(*(undefined8 *)(param_2 + 0x20),*(void **)(param_2 + 0x28),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_18003adc0(undefined8 param_1,longlong param_2)

{
  FUN_180024eb0(*(undefined8 *)(param_2 + 0x140),*(void **)(param_2 + 0x160));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_18003ae00(undefined8 param_1,longlong param_2)

{
  FUN_180002f40((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18003ae18(undefined8 param_1,longlong param_2)

{
  FUN_180020bf0(param_2 + 0x58);
  return;
}




void Unwind_18003ae30(undefined8 param_1,longlong param_2)

{
  FUN_180020bf0(param_2 + 0x40);
  return;
}




void Unwind_18003ae50(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18003ae68(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18003ae80(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18003ae98(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18003aeb0(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18003aed0(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18003aee8(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18003af00(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x98));
  return;
}




void Unwind_18003af1b(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_18003af36(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x88));
  return;
}




void Unwind_18003af51(undefined8 param_1,longlong param_2)

{
  FUN_18002a6f0((longlong *)(param_2 + 0x80));
  return;
}




void FUN_18003af84(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18003af9b(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18003afb7(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




undefined * Catch_All_18003afed(void)

{
  return &DAT_18003911d;
}




void FUN_18003b010(void)

{
  FUN_180025b20(0x18004fe00);
  return;
}




void FUN_18003b030(void)

{
  FUN_1800217d0(0x1800522b0);
  return;
}




void FUN_18003b050(void)

{
  FUN_1800217d0(0x1800522d0);
  return;
}




void FUN_18003b068(void)

{
  std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t((_Fac_tidy_reg_t *)&DAT_18004f780);
  return;
}




void FUN_18003b080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018003b087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_9(&DAT_18004e008);
  return;
}



