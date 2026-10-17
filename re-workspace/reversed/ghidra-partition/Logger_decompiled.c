
undefined8 FUN_180001010(void)

{
  return 1;
}




undefined8 FUN_180001040(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_180001050(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_48;
  *param_1 = std::exception::vftable;
  puVar2 = param_1 + 1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  local_20 = 1;
  local_28 = param_2;
  __std_exception_copy(&local_28,param_1 + 1);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
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




undefined8 * FUN_180001120(undefined8 *param_1,longlong param_2)

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




void FUN_180001180(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




char * FUN_1800011b0(longlong param_1)

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




undefined8 * FUN_1800011f0(undefined8 *param_1,uint param_2)

{
  FUN_180001180(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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




undefined1 * FUN_180001290(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




void FUN_1800012c0(void *param_1,void *param_2,longlong param_3)

{
  memmove(param_1,param_2,param_3 << 1);
  return;
}




/* Library Function - Single Match
    wmemset
   
   Library: Visual Studio */

wchar_t * __cdecl wmemset(wchar_t *_S,wchar_t _C,size_t _N)

{
  size_t local_res18;
  wchar_t *local_18;
  
  local_18 = _S;
  for (local_res18 = _N; local_res18 != 0; local_res18 = local_res18 - 1) {
    *local_18 = _C;
    local_18 = local_18 + 1;
  }
  return _S;
}




undefined8 FUN_180001360(void)

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




undefined1 * FUN_1800013b0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




void FUN_180001410(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_180001430(void)

{
  return;
}




undefined8 * FUN_180001440(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}




undefined8 * FUN_180001470(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




/* Library Function - Single Match
    public: void __cdecl std::_Iterator_base12::_Adopt(struct std::_Container_base12 const *
   __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

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




undefined8 FUN_180001510(undefined8 param_1)

{
  return param_1;
}




void FUN_180001520(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_180001540(longlong *param_1,longlong *param_2)

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




undefined8 * FUN_1800015e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180004090(param_2);
  FUN_180001050(param_1,uVar1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}




undefined8 * FUN_180001620(undefined8 *param_1,uint param_2)

{
  FUN_180001660(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001660(undefined8 *param_1)

{
  FUN_180001180(param_1);
  return;
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




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::logic_error::logic_error(class std::logic_error const & __ptr64) __ptr64
    public: __cdecl std::runtime_error::runtime_error(class std::runtime_error const & __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 * FID_conflict_runtime_error(undefined8 *param_1,longlong param_2)

{
  FUN_180001120(param_1,param_2);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}




void FUN_180001700(longlong param_1)

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




longlong FUN_180001780(longlong param_1,ulonglong param_2)

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




/* Library Function - Single Match
    public: __cdecl std::error_category::error_category(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

error_category * __thiscall std::error_category::error_category(error_category *this)

{
  *(error_category **)(this + 8) = this;
  return this;
}




/* Library Function - Single Match
    public: bool __cdecl std::error_category::operator==(class std::error_category const &
   __ptr64)const __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __thiscall std::error_category::operator==(error_category *this,error_category *param_1)

{
  return *(longlong *)(this + 8) == *(longlong *)(param_1 + 8);
}




/* Library Function - Single Match
    public: __cdecl std::error_condition::error_condition(int,class std::error_category const &
   __ptr64) __ptr64
   
   Library: Visual Studio */

error_condition * __thiscall
std::error_condition::error_condition(error_condition *this,int param_1,error_category *param_2)

{
  *(int *)this = param_1;
  *(error_category **)(this + 8) = param_2;
  return this;
}




undefined4 FUN_1800018d0(undefined4 *param_1)

{
  return *param_1;
}




undefined8 FUN_1800018e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8
FUN_1800018f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1800018e0((longlong)param_1);
  uVar1 = FUN_1800018d0(param_1);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,uVar1);
  return param_2;
}




/* Library Function - Single Match
    bool __cdecl std::operator==(class std::error_condition const & __ptr64,class
   std::error_condition const & __ptr64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __cdecl std::operator==(error_condition *param_1,error_condition *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  error_category *peVar4;
  error_category *this;
  
  peVar4 = (error_category *)FUN_1800018e0((longlong)param_2);
  this = (error_category *)FUN_1800018e0((longlong)param_1);
  bVar1 = error_category::operator==(this,peVar4);
  if (bVar1) {
    iVar2 = FUN_1800018d0((undefined4 *)param_1);
    iVar3 = FUN_1800018d0((undefined4 *)param_2);
    if (iVar2 == iVar3) {
      return true;
    }
  }
  return false;
}




/* Library Function - Multiple Matches With Same Base Name
    public: virtual class std::error_condition __cdecl
   std::_System_error_category::default_error_condition(int)const __ptr64
    public: virtual class std::error_condition __cdecl
   std::error_category::default_error_condition(int)const __ptr64
   
   Library: Visual Studio */

error_condition *
default_error_condition(error_category *param_1,error_condition *param_2,int param_3)

{
  std::error_condition::error_condition(param_2,param_3,param_1);
  return param_2;
}




/* Library Function - Single Match
    public: virtual bool __cdecl std::error_category::equivalent(int,class std::error_condition
   const & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release, Visual Studio 2012 Debug, Visual
   Studio 2012 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  bool bVar1;
  error_condition *peVar2;
  undefined1 local_18 [24];
  
  peVar2 = (error_condition *)(**(code **)(*(longlong *)this + 0x18))(this,local_18,param_1);
  bVar1 = std::operator==(peVar2,param_2);
  return bVar1;
}




/* Library Function - Single Match
    public: virtual bool __cdecl std::error_category::equivalent(class std::error_code const &
   __ptr64,int)const __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  error_category *peVar3;
  
  peVar3 = (error_category *)FUN_1800018e0((longlong)param_1);
  bVar1 = operator==(this,peVar3);
  if ((bVar1) && (iVar2 = FUN_1800018d0((undefined4 *)param_1), iVar2 == param_2)) {
    return true;
  }
  return false;
}




/* Library Function - Single Match
    class std::error_code __cdecl std::make_error_code(enum std::io_errc)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

error_condition * __cdecl std::make_error_code(io_errc param_1)

{
  error_category *peVar1;
  undefined4 in_register_0000000c;
  int in_EDX;
  
  peVar1 = iostream_category();
  error_condition::error_condition
            ((error_condition *)CONCAT44(in_register_0000000c,param_1),in_EDX,peVar1);
  return (error_condition *)CONCAT44(in_register_0000000c,param_1);
}




longlong FUN_180001ae0(longlong param_1,undefined4 *param_2,
                      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [40];
  
  pbVar3 = param_3;
  bVar1 = FUN_180004050(param_3);
  if (!bVar1) {
    FUN_1800040c0(param_3,": ");
  }
  uVar2 = FUN_1800018f0(param_2,local_28,pbVar3,param_4);
  FID_conflict_append(param_3,uVar2);
  FUN_180004150(local_28);
  basic_string<>(param_1,param_3);
  FUN_180004150(param_3);
  return param_1;
}




undefined8 *
FUN_180001ba0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 local_68 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  undefined1 local_38 [40];
  
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           basic_string<>((longlong)local_38,param_3);
  puVar3 = param_2;
  puVar4 = local_68;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  }
  lVar2 = FUN_180001ae0((longlong)local_58,local_68,pbVar1,param_4);
  FUN_1800015e0(param_1,lVar2);
  FUN_180004150(local_58);
  *param_1 = std::_System_error::vftable;
  puVar5 = param_1 + 3;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = (undefined8 *)((longlong)puVar5 + 1);
  }
  return param_1;
}




undefined8 * FUN_180001c80(undefined8 *param_1,uint param_2)

{
  FUN_180001cc0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001cc0(undefined8 *param_1)

{
  FUN_180001660(param_1);
  return;
}




undefined8 *
FUN_180001ce0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_48 [16];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [40];
  
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,"");
  puVar2 = local_48;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_180001ba0(param_1,local_48,local_38,param_4);
  FUN_180004150(local_38);
  *param_1 = std::system_error::vftable;
  return param_1;
}




undefined8 * FUN_180001d70(undefined8 *param_1,uint param_2)

{
  FUN_180001db0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001db0(undefined8 *param_1)

{
  FUN_180001cc0(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_Generic_error_category::_Generic_error_category(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_Generic_error_category * __thiscall
std::_Generic_error_category::_Generic_error_category(_Generic_error_category *this)

{
  error_category::error_category((error_category *)this);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 3;
  return this;
}




char * FUN_180001e10(void)

{
  return "generic";
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_180001e20(undefined8 param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
             int param_3)

{
  char *pcVar1;
  
  pcVar1 = std::_Syserror_map(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2,pcVar1);
  return param_2;
}




void * FUN_180001e70(void *param_1,uint param_2)

{
  FUN_180001eb0();
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001eb0(void)

{
  FUN_180001430();
  return;
}




/* Library Function - Single Match
    class std::error_category const & __ptr64 __cdecl std::iostream_category(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

error_category * __cdecl std::iostream_category(void)

{
  error_category *peVar1;
  
  peVar1 = (error_category *)FUN_180007a60();
  return peVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::ios_base::failure::failure(class std::ios_base::failure const & __ptr64)
   __ptr64
    public: __cdecl std::system_error::system_error(class std::system_error const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 * FID_conflict_failure(undefined8 *param_1,longlong param_2)

{
  FID_conflict_system_error(param_1,param_2);
  *param_1 = std::system_error::vftable;
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::_System_error::_System_error(class std::_System_error const & __ptr64)
   __ptr64
    public: __cdecl std::system_error::system_error(class std::system_error const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 * FID_conflict_system_error(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  FID_conflict_runtime_error(param_1,param_2);
  *param_1 = std::_System_error::vftable;
  puVar2 = (undefined1 *)(param_2 + 0x18);
  puVar3 = param_1 + 3;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  return param_1;
}




void FUN_180001f90(tm *param_1,__time64_t *param_2)

{
  _localtime64_s(param_1,param_2);
  return;
}




int FUN_180001fc0(int param_1)

{
  if (param_1 != 0) {
    std::_Throw_C_error(param_1);
  }
  return param_1;
}




void FUN_180001ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_14;
  
  local_14 = _Thrd_start(param_1,param_2,param_3);
  if (local_14 == 4) {
    local_14 = 1;
  }
  FUN_180001fc0(local_14);
  return;
}




void FUN_180002050(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_init(param_1,param_2);
  FUN_180001fc0(iVar1);
  return;
}




void FUN_180002080(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1);
  FUN_180001fc0(iVar1);
  return;
}




void FUN_1800020a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_unlock(param_1);
  FUN_180001fc0(iVar1);
  return;
}




void FUN_1800020c0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = _Cnd_init(param_1);
  FUN_180001fc0(iVar1);
  return;
}




void FUN_1800020e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _Cnd_wait(param_1,param_2);
  FUN_180001fc0(iVar1);
  return;
}




void FUN_180002110(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = _Cnd_signal(param_1);
  FUN_180001fc0(iVar1);
  return;
}




undefined1 * FUN_180002130(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  return param_1;
}




void FUN_180002160(char *param_1)

{
  if (*param_1 != '\0') {
    _Cnd_destroy(*(undefined8 *)(param_1 + 8));
  }
  return;
}




void FUN_180002190(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_1800021a0(char *param_1)

{
  if (*param_1 != '\0') {
    _Mtx_destroy(*(undefined8 *)(param_1 + 8));
  }
  return;
}




void FUN_1800021d0(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  Logger local_30 [16];
  Logger local_20 [16];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  FUN_1800020c0(param_1 + 8);
  Logger::__autoclassinit2(local_20,0x10);
  FUN_180002130(local_20,*(undefined8 *)(param_1 + 8));
  FUN_180002050(param_1 + 0x10,1);
  Logger::__autoclassinit2(local_30,0x10);
  FUN_180002130(local_30,*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_180002080(*(undefined8 *)(param_1 + 0x10));
  FUN_180002190(local_30);
  FUN_180002190(local_20);
  FUN_1800021a0((char *)local_30);
  FUN_180002160((char *)local_20);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1800022c0(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  Logger local_30 [16];
  Logger local_20 [16];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  Logger::__autoclassinit2(local_20,0x10);
  FUN_180002130(local_20,*(undefined8 *)(param_1 + 8));
  Logger::__autoclassinit2(local_30,0x10);
  FUN_180002130(local_30,*(undefined8 *)(param_1 + 0x10));
  FUN_1800020a0(*(undefined8 *)(param_1 + 0x10));
  FUN_1800021a0((char *)local_30);
  FUN_180002160((char *)local_20);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_180002370(longlong param_1,undefined8 param_2)

{
  FUN_180001ff0(param_2,FUN_180002410,param_1);
  while (*(char *)(param_1 + 0x18) == '\0') {
    FUN_1800020e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  return;
}




void FUN_1800023c0(longlong param_1)

{
  FUN_180002080(*(undefined8 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_180002110(*(undefined8 *)(param_1 + 8));
  FUN_1800020a0(*(undefined8 *)(param_1 + 0x10));
  return;
}




undefined8 FUN_180002410(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1);
  return 0;
}




/* public: void __cdecl Logger::__autoclassinit2(unsigned __int64) __ptr64 */

void __thiscall Logger::__autoclassinit2(Logger *this,__uint64 param_1)

{
                    /* 0x2430  3  ?__autoclassinit2@Logger@@QEAAX_K@Z */
  for (; param_1 != 0; param_1 = param_1 - 1) {
    *this = (Logger)0x0;
    this = this + 1;
  }
  return;
}




undefined8 * FUN_180002450(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}




void FUN_180002480(longlong param_1)

{
  bool bVar1;
  
  bVar1 = FUN_1800024e0(param_1);
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}




void FUN_1800024b0(undefined1 *param_1,undefined8 *param_2)

{
  FUN_180002510(param_1,param_2);
  return;
}




bool FUN_1800024e0(longlong param_1)

{
  return *(int *)(param_1 + 8) != 0;
}




undefined1 * FUN_180002510(undefined1 *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  bVar1 = FUN_1800024e0((longlong)param_1);
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    puVar4 = puVar4 + 1;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_1;
}




undefined4 * FUN_180002570(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_180002590(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 local_44;
  undefined4 local_40 [2];
  int *local_38;
  undefined1 local_28 [24];
  
  bVar1 = FUN_1800024e0((longlong)param_1);
  if (!bVar1) {
    std::_Throw_Cpp_error(1);
  }
  if (*(int *)(param_1 + 1) == 0) {
    std::_Throw_Cpp_error(1);
  }
  local_38 = FUN_1800026c0(&local_44);
  piVar3 = FUN_180002680((longlong)param_1,local_40);
  bVar1 = FUN_1800026f0(*piVar3,*local_38);
  if (bVar1) {
    std::_Throw_Cpp_error(5);
  }
  puVar5 = param_1;
  puVar6 = local_28;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined8 *)((longlong)puVar5 + 1);
    puVar6 = puVar6 + 1;
  }
  iVar2 = _Thrd_join(local_28,0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(2);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




undefined4 * FUN_180002680(longlong param_1,undefined4 *param_2)

{
  FUN_180002570(param_2,*(undefined4 *)(param_1 + 8));
  return param_2;
}




undefined4 * FUN_1800026c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Thrd_id();
  FUN_180002570(param_1,uVar1);
  return param_1;
}




bool FUN_1800026f0(int param_1,int param_2)

{
  return param_1 == param_2;
}




undefined8 FUN_180002720(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_1);
  _Mtx_init_in_situ(uVar1,param_2 | 2);
  return param_1;
}




void FUN_180002760(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_1);
  _Mtx_destroy_in_situ(uVar1);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::_Mutex_base::lock(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __thiscall std::_Mutex_base::lock(_Mutex_base *this)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(this);
  FUN_180002080(uVar1);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::_Mutex_base::unlock(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::_Mutex_base::unlock(_Mutex_base *this)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(this);
  FUN_1800020a0(uVar1);
  return;
}




undefined8 FUN_1800027d0(undefined8 param_1)

{
  FUN_180002720(param_1,0);
  return param_1;
}




undefined8 FUN_1800027f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_1);
  _Cnd_init_in_situ(uVar1);
  return param_1;
}




void FUN_180002820(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_1);
  _Cnd_destroy_in_situ(uVar1);
  return;
}




void FUN_180002850(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_1);
  FUN_180002110(uVar1);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::condition_variable::wait(class std::unique_lock<class std::mutex> &
   __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
std::condition_variable::wait(condition_variable *this,unique_lock<class_std::mutex> *param_1)

{
  mutex *pmVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pmVar1 = unique_lock<class_std::mutex>::mutex(param_1);
  uVar2 = FUN_180001510(pmVar1);
  uVar3 = FUN_180001510(this);
  FUN_1800020e0(uVar3,uVar2);
  return;
}




void FUN_1800028d0(undefined8 param_1)

{
  FUN_180002760(param_1);
  return;
}




/* public: static class Logger & __ptr64 __cdecl Logger::getInstance(void) */

Logger * __cdecl Logger::getInstance(void)

{
                    /* 0x28f0  6  ?getInstance@Logger@@SAAEAV1@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180013ba4) {
    _Init_thread_header(&DAT_180013ba4);
    if (DAT_180013ba4 == -1) {
      __autoclassinit2((Logger *)&DAT_180013bb0,0x100);
      Logger((Logger *)&DAT_180013bb0);
      atexit(FUN_18000c170);
      _Init_thread_footer(&DAT_180013ba4);
    }
  }
  return (Logger *)&DAT_180013bb0;
}




/* private: __cdecl Logger::Logger(void) __ptr64 */

Logger * __thiscall Logger::Logger(Logger *this)

{
                    /* 0x2980  1  ??0Logger@@AEAA@XZ */
  *(undefined4 *)this = 2;
  basic_string<>((longlong)(this + 8));
  FUN_1800027d0(this + 0x28);
  FUN_180003ab0((undefined8 *)(this + 0x78));
  FUN_1800027f0(this + 0xa0);
  FUN_180002450((undefined8 *)(this + 0xe8));
  this[0xf8] = (Logger)0x0;
  return this;
}




void FUN_180002a10(undefined8 param_1)

{
  FUN_180003ad0(param_1);
  return;
}




/* private: __cdecl Logger::~Logger(void) __ptr64 */

void __thiscall Logger::~Logger(Logger *this)

{
                    /* 0x2a30  2  ??1Logger@@AEAA@XZ */
  stop(this);
  FUN_180002480((longlong)(this + 0xe8));
  FUN_180002820(this + 0xa0);
  FUN_180002a10(this + 0x78);
  FUN_1800028d0(this + 0x28);
  FUN_180003ed0(this + 8);
  return;
}




/* public: void __cdecl Logger::log(enum LogLevel,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,unsigned __int64,unsigned long,unsigned
   long) __ptr64 */

void __thiscall
Logger::log(Logger *this,int param_1,undefined8 param_3,undefined8 param_4,undefined8 param_5,
           undefined4 param_6,undefined4 param_7)

{
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 *local_e8;
  longlong local_e0;
  undefined1 *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [10];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  lock_guard<class_std::mutex> local_20 [8];
  ulonglong local_18;
  
                    /* 0x2ab0  7
                       ?log@Logger@@QEAAXW4LogLevel@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@1_KKK@Z
                        */
  local_b0 = 0xfffffffffffffffe;
  local_18 = DAT_180013010 ^ (ulonglong)auStack_128;
  local_res10[0] = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)this <= param_1) {
    std::lock_guard<class_std::mutex>::lock_guard<class_std::mutex>(local_20,(mutex *)(this + 0x28))
    ;
    local_e8 = local_60;
    local_d8 = local_40;
    local_e0 = basic_string<>((longlong)local_e8,local_res20);
    local_d0 = local_e0;
    local_c8 = basic_string<>((longlong)local_d8,local_res18);
    local_f0 = param_7;
    local_f8 = param_6;
    local_100 = param_5;
    local_108 = local_d0;
    local_c0 = formatLogMessage(this,local_80,local_res10[0],local_c8);
    local_b8 = local_c0;
    FUN_180007aa0(local_a8,local_res10,local_c0);
    FUN_180003a80(this + 0x78,local_a8);
    FUN_180002c80((longlong)local_a8);
    FUN_180003ed0(local_80);
    FUN_180002850(this + 0xa0);
    std::lock_guard<class_std::mutex>::~lock_guard<class_std::mutex>(local_20);
  }
  FUN_180003ed0(local_res18);
  FUN_180003ed0(local_res20);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_128);
  return;
}




void FUN_180002c80(longlong param_1)

{
  FUN_180003ed0(param_1 + 8);
  return;
}




/* public: void __cdecl Logger::setLogLevel(enum LogLevel) __ptr64 */

void __thiscall Logger::setLogLevel(Logger *this,LogLevel param_1)

{
                    /* 0x2ca0  10  ?setLogLevel@Logger@@QEAAXW4LogLevel@@@Z */
  *(LogLevel *)this = param_1;
  return;
}




/* public: void __cdecl Logger::setLogFile(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >) __ptr64 */

void __thiscall Logger::setLogFile(Logger *this,undefined8 param_2)

{
  __uint64 _Var1;
  LPCWSTR pWVar2;
  HANDLE hObject;
  undefined1 auStackY_98 [32];
  lock_guard<class_std::mutex> local_40 [8];
  undefined1 local_38 [32];
  ulonglong local_18;
  
                    /* 0x2cc0  9
                       ?setLogFile@Logger@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
                        */
  local_18 = DAT_180013010 ^ (ulonglong)auStackY_98;
  std::lock_guard<class_std::mutex>::lock_guard<class_std::mutex>(local_40,(mutex *)(this + 0x28));
  FUN_180003e50((longlong)(this + 8),param_2);
  _Var1 = FUN_180003d40(this + 8,L"\\/",0xffffffffffffffff);
  if (_Var1 != 0xffffffffffffffff) {
    FUN_180003cd0(this + 8,(longlong)local_38,0,_Var1);
    pWVar2 = (LPCWSTR)FUN_180003de0(local_38);
    CreateDirectoryW(pWVar2,(LPSECURITY_ATTRIBUTES)0x0);
    FUN_180003ed0(local_38);
  }
  pWVar2 = (LPCWSTR)FUN_180003de0(this + 8);
  hObject = CreateFileW(pWVar2,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  CloseHandle(hObject);
  std::lock_guard<class_std::mutex>::~lock_guard<class_std::mutex>(local_40);
  FUN_180003ed0(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




/* public: void __cdecl Logger::start(void) __ptr64 */

void __thiscall Logger::start(Logger *this)

{
  Logger *local_38;
  code *local_30;
  undefined8 *local_28;
  undefined1 local_20 [32];
  
                    /* 0x2e20  11  ?start@Logger@@QEAAXXZ */
  if (this[0xf8] == (Logger)0x0) {
    this[0xf8] = (Logger)0x1;
    local_30 = processLogs;
    local_38 = this;
    local_28 = (undefined8 *)FUN_180007af0(local_20,&local_30,&local_38);
    FUN_1800024b0(this + 0xe8,local_28);
    FUN_180002480((longlong)local_20);
  }
  return;
}




/* public: void __cdecl Logger::stop(void) __ptr64 */

void __thiscall Logger::stop(Logger *this)

{
  bool bVar1;
  undefined1 auStack_38 [32];
  lock_guard<class_std::mutex> local_18 [8];
  ulonglong local_10;
  
                    /* 0x2ea0  12  ?stop@Logger@@QEAAXXZ */
  local_10 = DAT_180013010 ^ (ulonglong)auStack_38;
  std::lock_guard<class_std::mutex>::lock_guard<class_std::mutex>(local_18,(mutex *)(this + 0x28));
  this[0xf8] = (Logger)0x0;
  FUN_180002850(this + 0xa0);
  std::lock_guard<class_std::mutex>::~lock_guard<class_std::mutex>(local_18);
  bVar1 = FUN_1800024e0((longlong)(this + 0xe8));
  if (bVar1) {
    FUN_180002590((undefined8 *)(this + 0xe8));
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_38);
  return;
}




/* private: void __cdecl Logger::processLogs(void) __ptr64 */

void __thiscall Logger::processLogs(Logger *this)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  Logger local_48 [16];
  undefined4 local_38 [2];
  undefined1 local_30 [32];
  ulonglong local_10;
  
                    /* 0x2f40  8  ?processLogs@Logger@@AEAAXXZ */
  local_78 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_a8;
  while (this[0xf8] != (Logger)0x0) {
    __autoclassinit2(local_48,0x10);
    std::unique_lock<class_std::mutex>::unique_lock<class_std::mutex>
              ((unique_lock<class_std::mutex> *)local_48,(mutex *)(this + 0x28));
    puVar2 = FUN_180003110(&local_70,this);
    uVar5 = *puVar2;
    std::condition_variable::wait<class_<lambda_a1eabba02874cbf8cbb226c45133fc37>_>
              ((condition_variable *)(this + 0xa0),local_48);
    while( true ) {
      cVar1 = FUN_180003a60(this + 0x78);
      if (cVar1 != '\0') break;
      puVar3 = (undefined4 *)
               FUN_180003a40((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)(this + 0x78));
      FUN_180003130(local_38,puVar3);
      FUN_180003a20(this + 0x78);
      FUN_180003b80((longlong *)local_48,puVar3,uVar5,in_R9);
      local_88 = local_68;
      lVar4 = basic_string<>((longlong)local_88,local_30);
      local_80 = lVar4;
      writeLog(this);
      FUN_180003c10((longlong *)local_48,lVar4,uVar5,in_R9);
      FUN_180002c80((longlong)local_38);
    }
    std::unique_lock<class_std::mutex>::~unique_lock<class_std::mutex>
              ((unique_lock<class_std::mutex> *)local_48);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_a8);
  return;
}




undefined1 FUN_1800030b0(longlong *param_1)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_180003a60(*param_1 + 0x78);
  if ((cVar1 == '\0') || (*(char *)(*param_1 + 0xf8) == '\0')) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}




undefined8 * FUN_180003110(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




undefined4 * FUN_180003130(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  basic_string<>((longlong)(param_1 + 2),param_2 + 2);
  return param_1;
}




/* private: void __cdecl Logger::writeLog(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >) __ptr64 */

void __thiscall Logger::writeLog(Logger *this,undefined8 param_2)

{
  BOOL BVar1;
  LPCWSTR lpFileName;
  HANDLE hFile;
  LPCVOID lpBuffer;
  longlong lVar2;
  _OVERLAPPED *p_Var3;
  undefined1 auStackY_98 [32];
  DWORD local_40 [2];
  _OVERLAPPED local_38;
  ulonglong local_18;
  
                    /* 0x3170  13
                       ?writeLog@Logger@@AEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z
                        */
  local_18 = DAT_180013010 ^ (ulonglong)auStackY_98;
  lpFileName = (LPCWSTR)FUN_180003de0(this + 8);
  hFile = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    p_Var3 = &local_38;
    for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&p_Var3->Internal = 0;
      p_Var3 = (_OVERLAPPED *)((longlong)&p_Var3->Internal + 1);
    }
    BVar1 = LockFileEx(hFile,2,0,0xffffffff,0xffffffff,&local_38);
    if (BVar1 != 0) {
      SetFilePointer(hFile,0,(PLONG)0x0,2);
      lVar2 = FUN_180003dc0(param_2);
      lpBuffer = (LPCVOID)FUN_180003de0(param_2);
      WriteFile(hFile,lpBuffer,(DWORD)(lVar2 << 1),local_40,(LPOVERLAPPED)0x0);
      checkLogFileSize(this,hFile);
      UnlockFileEx(hFile,0,0xffffffff,0xffffffff,&local_38);
    }
    CloseHandle(hFile);
  }
  FUN_180003ed0(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




/* private: void __cdecl Logger::checkLogFileSize(void * __ptr64) __ptr64 */

void __thiscall Logger::checkLogFileSize(Logger *this,void *param_1)

{
  BOOL BVar1;
  longlong lVar2;
  LPVOID lpBuffer;
  ulonglong uVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined1 auStackY_98 [32];
  ulonglong local_68;
  LARGE_INTEGER local_48;
  undefined1 local_40 [32];
  DWORD local_20;
  DWORD local_1c;
  ulonglong local_18;
  
                    /* 0x3310  4  ?checkLogFileSize@Logger@@AEAAXPEAX@Z */
  local_18 = DAT_180013010 ^ (ulonglong)auStackY_98;
  if (((param_1 != (void *)0xffffffffffffffff) &&
      (BVar1 = GetFileSizeEx(param_1,&local_48), BVar1 != 0)) && (0x9fffff < local_48.QuadPart)) {
    basic_string<>((longlong)local_40,(ulonglong)local_48.QuadPart / 2,L'\0');
    SetFilePointer(param_1,0,(PLONG)0x0,0);
    lVar2 = FUN_180003dc0(local_40);
    lpBuffer = (LPVOID)FUN_180003e10(local_40,0);
    BVar1 = ReadFile(param_1,lpBuffer,(DWORD)(lVar2 << 1),&local_20,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      FUN_180003ed0(local_40);
    }
    else {
      local_68 = FUN_180003dc0(local_40);
      local_68 = local_68 / 2;
      while ((uVar3 = FUN_180003dc0(local_40), local_68 < uVar3 &&
             (psVar4 = (short *)FUN_180003e10(local_40,local_68), *psVar4 != 10))) {
        local_68 = local_68 + 1;
      }
      uVar3 = FUN_180003dc0(local_40);
      if (local_68 < uVar3) {
        local_68 = local_68 + 1;
      }
      SetFilePointer(param_1,0,(PLONG)0x0,0);
      SetEndOfFile(param_1);
      uVar5 = FUN_180003dc0(local_40);
      lVar2 = FUN_180003de0(local_40);
      WriteFile(param_1,(LPCVOID)(lVar2 + local_68 * 2),((int)uVar5 - (int)local_68) * 2,&local_1c,
                (LPOVERLAPPED)0x0);
      FUN_180003ed0(local_40);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_180003520(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,DWORD param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 *puVar4;
  undefined1 auStack_268 [32];
  uint local_248;
  HANDLE local_240;
  wchar_t local_238 [10];
  undefined1 local_224 [508];
  ulonglong local_28;
  
  local_28 = DAT_180013010 ^ (ulonglong)auStack_268;
  local_248 = 0;
  pwVar2 = L"<unknown>";
  pwVar3 = local_238;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(char *)pwVar3 = (char)*pwVar2;
    pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  puVar4 = local_224;
  for (lVar1 = 500; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_240 = OpenProcess(0x410,0,param_2);
  if (local_240 != (HANDLE)0x0) {
    K32GetModuleBaseNameW(local_240,0,local_238,0x104);
    CloseHandle(local_240);
  }
  basic_string<>(param_1,local_238);
  local_248 = local_248 | 1;
  __security_check_cookie(local_28 ^ (ulonglong)auStack_268);
  return;
}




/* private: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > __cdecl Logger::formatLogMessage(enum LogLevel,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >,unsigned __int64,unsigned long,unsigned long) __ptr64 */

void __thiscall
Logger::formatLogMessage
          (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,__uint64 param_6,DWORD param_7,ulong param_8)

{
  undefined8 *puVar1;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar2;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  uint local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_178 [32];
  undefined8 local_158 [3];
  __time64_t local_140;
  Logger local_138 [16];
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> local_128 [240];
  tm local_38;
  ulonglong local_10;
  
                    /* 0x3600  5
                       ?formatLogMessage@Logger@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4LogLevel@@V23@1_KKK@Z
                        */
  local_180 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_1b8;
  local_194 = 0;
  __autoclassinit2(local_138,0xf8);
  FUN_180004390((basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *)local_138,3,1);
  _time64(&local_140);
  FUN_180001f90(&local_38,&local_140);
  puVar1 = FUN_180007bb0(local_158,&local_38,L"%Y-%m-%d %X");
  FUN_180007bf0(local_128,puVar1);
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(local_128,L" ")
  ;
  FUN_180008210(pbVar2,param_5);
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(local_128,L" ")
  ;
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(pbVar2,L"(");
  pbVar2 = std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<(pbVar2,param_6)
  ;
  FUN_180007e30(pbVar2,L")");
  local_190 = FUN_180003520(local_178,param_7);
  local_188 = local_190;
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(local_128,L" ")
  ;
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
           FUN_180007e30(pbVar2,L"[PID:");
  pbVar2 = std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<(pbVar2,param_7)
  ;
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(pbVar2,L" ");
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
           FUN_180008210(pbVar2,local_188);
  FUN_180007e30(pbVar2,L"]");
  FUN_180003ed0(local_178);
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(local_128,L" ")
  ;
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
           FUN_180007e30(pbVar2,L"[TID:");
  pbVar2 = std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<(pbVar2,param_8)
  ;
  FUN_180007e30(pbVar2,L"]");
  local_198 = param_3;
  switch(param_3) {
  case 0:
    pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             FUN_180007e30(local_128,L" ");
    FUN_180007e30(pbVar2,L"[TRACE]");
    break;
  case 1:
    pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             FUN_180007e30(local_128,L" ");
    FUN_180007e30(pbVar2,L"[DEBUG]");
    break;
  case 2:
    pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             FUN_180007e30(local_128,L" ");
    FUN_180007e30(pbVar2,L"[INFO]");
    break;
  case 3:
    pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             FUN_180007e30(local_128,L" ");
    FUN_180007e30(pbVar2,L"[WARN]");
    break;
  case 4:
    pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             FUN_180007e30(local_128,L" ");
    FUN_180007e30(pbVar2,L"[ERROR]");
    break;
  case 5:
    pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             FUN_180007e30(local_128,L" ");
    FUN_180007e30(pbVar2,L"[CRITICAL]");
  }
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180007e30(local_128,L" ")
  ;
  pbVar2 = (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)FUN_180008210(pbVar2,param_4)
  ;
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::operator<<(pbVar2,FUN_180008260);
  FUN_1800042b0((longlong)local_138,param_2);
  local_194 = local_194 | 1;
  FUN_1800039d0((longlong)local_138);
  FUN_180003ed0(param_4);
  FUN_180003ed0(param_5);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_1b8);
  return;
}




void FUN_1800039d0(longlong param_1)

{
  FUN_180004300(param_1 + 0x98);
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x98));
  return;
}




void getLoggerInstance(void)

{
                    /* 0x3a10  14  getLoggerInstance */
  Logger::getInstance();
  return;
}




void FUN_180003a20(undefined8 param_1)

{
  FUN_1800050b0(param_1);
  return;
}




void FUN_180003a40(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::front(param_1);
  return;
}




void FUN_180003a60(undefined8 param_1)

{
  FUN_180005200(param_1);
  return;
}




void FUN_180003a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_2);
  FUN_180005240(param_1,uVar1);
  return;
}




undefined8 * FUN_180003ab0(undefined8 *param_1)

{
  FUN_180005440(param_1);
  return param_1;
}




void FUN_180003ad0(undefined8 param_1)

{
  FUN_180004f40(param_1);
  FUN_180004f10(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::lock_guard<class std::mutex>::~lock_guard<class std::mutex>(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall
std::lock_guard<class_std::mutex>::~lock_guard<class_std::mutex>(lock_guard<class_std::mutex> *this)

{
  _Mutex_base::unlock(*(_Mutex_base **)this);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::lock_guard<class std::mutex>::lock_guard<class std::mutex>(class std::mutex
   & __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

lock_guard<class_std::mutex> * __thiscall
std::lock_guard<class_std::mutex>::lock_guard<class_std::mutex>
          (lock_guard<class_std::mutex> *this,mutex *param_1)

{
  *(mutex **)this = param_1;
  _Mutex_base::lock(*(_Mutex_base **)this);
  return this;
}




/* Library Function - Single Match
    public: class std::mutex * __ptr64 __cdecl std::unique_lock<class std::mutex>::mutex(void)const
   __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

mutex * __thiscall std::unique_lock<class_std::mutex>::mutex(unique_lock<class_std::mutex> *this)

{
  return *(mutex **)this;
}




void FUN_180003b80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48 [7];
  
  if ((*param_1 != 0) && ((char)param_1[1] != '\0')) {
    std::_Mutex_base::unlock((_Mutex_base *)*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  puVar1 = (undefined1 *)std::make_error_code((io_errc)local_58);
  puVar3 = local_68;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_180001ce0(local_48,local_68,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1800104d8);
}




void FUN_180003c10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005460(param_1,param_2,param_3,param_4);
  std::_Mutex_base::lock((_Mutex_base *)*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}




/* Library Function - Single Match
    public: __cdecl std::unique_lock<class std::mutex>::~unique_lock<class std::mutex>(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall
std::unique_lock<class_std::mutex>::~unique_lock<class_std::mutex>
          (unique_lock<class_std::mutex> *this)

{
  if (this[8] != (unique_lock<class_std::mutex>)0x0) {
    _Mutex_base::unlock(*(_Mutex_base **)this);
  }
  return;
}




/* Library Function - Single Match
    public: __cdecl std::unique_lock<class std::mutex>::unique_lock<class std::mutex>(class
   std::mutex & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

unique_lock<class_std::mutex> * __thiscall
std::unique_lock<class_std::mutex>::unique_lock<class_std::mutex>
          (unique_lock<class_std::mutex> *this,mutex *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001510(param_1);
  *(undefined8 *)this = uVar1;
  this[8] = (unique_lock<class_std::mutex>)0x0;
  _Mutex_base::lock(*(_Mutex_base **)this);
  this[8] = (unique_lock<class_std::mutex>)0x1;
  return this;
}




longlong FUN_180003cd0(undefined8 param_1,longlong param_2,ulonglong param_3,__uint64 param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_180005940(param_1,local_18);
  FUN_180005d80(param_2,param_1,param_3,param_4,uVar1);
  return param_2;
}




void FUN_180003d40(undefined8 param_1,wchar_t *param_2,__uint64 param_3)

{
  undefined8 *puVar1;
  __uint64 _Var2;
  wchar_t *pwVar3;
  
  puVar1 = (undefined8 *)FUN_180005570(param_1);
  _Var2 = std::_WChar_traits<wchar_t>::length(param_2);
  pwVar3 = (wchar_t *)Myptr(puVar1);
  FUN_1800082b0(pwVar3,puVar1[2],param_3,param_2,_Var2);
  return;
}




undefined8 FUN_180003dc0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180005570(param_1);
  return *(undefined8 *)(lVar1 + 0x10);
}




void FUN_180003de0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180005570(param_1);
  Myptr(puVar1);
  return;
}




longlong FUN_180003e10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180005570(param_1);
  puVar1 = Myptr(puVar1);
  return (longlong)puVar1 + param_2 * 2;
}




/* WARNING: Removing unreachable block (ram,0x000180003e75) */

longlong FUN_180003e50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_180001510(param_2);
  if (param_1 != lVar1) {
    FUN_180005570(param_2);
    FUN_180005590(param_1);
    puVar2 = (undefined8 *)FUN_180005570(param_2);
    puVar3 = Myptr(puVar2);
    FID_conflict_assign(param_1,(undefined1 *)puVar3,puVar2[2]);
  }
  return param_1;
}




void FUN_180003ed0(undefined8 param_1)

{
  FID_conflict__Tidy_deallocate(param_1);
  FUN_180004df0();
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(unsigned __int64,unsigned short) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(unsigned __int64,wchar_t) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,ulonglong param_2,wchar_t param_3)

{
  FUN_1800055c0(param_1);
  FID_conflict__Tidy_init(param_1);
  FID_conflict_assign(param_1,param_2,param_3);
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
  FUN_1800055c0((longlong)param_1);
  FID_conflict__Tidy_init(param_1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
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
  FUN_1800055c0(param_1);
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
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180005570(param_2);
  uVar1 = select_on_container_copy_construction(local_18);
  FUN_180008460(param_1,uVar1);
  FUN_180005c00(param_1,param_2);
  return param_1;
}




bool FUN_180004050(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180003dc0(param_1);
  return lVar1 == 0;
}




void FUN_180004090(undefined8 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(param_1);
  Myptr(p_Var1);
  return;
}




void FUN_1800040c0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2)

{
  longlong lVar1;
  __uint64 _Var2;
  
  lVar1 = length((longlong)param_2);
  _Var2 = FUN_180001510(lVar1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,param_2,_Var2);
  return;
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

void FID_conflict_append(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *param_1,undefined8 param_2)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(param_2);
  p_Var2 = Myptr(p_Var1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,(char *)p_Var2,*(__uint64 *)(p_Var1 + 0x10));
  return;
}




void FUN_180004150(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_180004df0();
  return;
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
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar1 = FUN_180005570(param_2);
  uVar1 = FUN_180001510(uVar1);
  FUN_180008460(param_1,uVar1);
  puVar4 = local_18;
  for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_180001510(param_2);
  FUN_180006460(param_1,pbVar2);
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
  FUN_1800055c0((longlong)this);
  _Tidy_init(this);
  assign(this,param_1);
  return this;
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
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180005570(param_2);
  uVar1 = select_on_container_copy_construction(local_18);
  FUN_180008460(param_1,uVar1);
  FUN_1800062e0(param_1,param_2);
  return param_1;
}




longlong FUN_1800042b0(longlong param_1,longlong param_2)

{
  FUN_1800065c0((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x18),
                param_2);
  return param_2;
}




void FUN_180004300(longlong param_1)

{
  *(undefined ***)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       std::
       basic_stringstream<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
       vftable;
  *(int *)(param_1 + -0x9c + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       *(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98;
  FUN_180004db0((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + -0x80));
  std::basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + -0x78));
  return;
}




basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_180004390(basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,int param_2,
             int param_3)

{
  if (param_3 != 0) {
    *(undefined **)param_1 = &DAT_18000d898;
    *(undefined **)(param_1 + 0x10) = &DAT_18000d890;
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
    basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x98));
  }
  std::basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>
            (param_1,(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x18))
  ;
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::
       basic_stringstream<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::
       vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  FUN_180006730((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x18),
                param_2);
  return param_1;
}




fpos<struct__Mbstatet> *
FUN_180004480(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
             fpos<struct__Mbstatet> *param_2,longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  uVar1 = FUN_1800069a0(param_3);
  pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
  if ((pwVar3 != (wchar_t *)0x0) && (*(wchar_t **)(param_1 + 0x68) < pwVar3)) {
    *(wchar_t **)(param_1 + 0x68) = pwVar3;
  }
  pwVar4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - (longlong)pwVar4 >> 1) < uVar1) {
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  }
  else if ((uVar1 == 0) ||
          ((((param_4 & 1) == 0 || (pwVar2 != (wchar_t *)0x0)) &&
           (((param_4 & 2) == 0 || (pwVar3 != (wchar_t *)0x0)))))) {
    if (((param_4 & 1) != 0) && (pwVar2 != (wchar_t *)0x0)) {
      std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
                (param_1,pwVar4,pwVar4 + uVar1,*(wchar_t **)(param_1 + 0x68));
    }
    if (((param_4 & 2) != 0) && (pwVar3 != (wchar_t *)0x0)) {
      pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::epptr(param_1);
      std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setp
                (param_1,pwVar4,pwVar4 + uVar1,pwVar2);
    }
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,uVar1);
  }
  else {
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  }
  return param_2;
}




fpos<struct__Mbstatet> *
FUN_180004620(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
             fpos<struct__Mbstatet> *param_2,longlong param_3,int param_4,uint param_5)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong local_30;
  
  pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
  if ((pwVar2 != (wchar_t *)0x0) && (*(wchar_t **)(param_1 + 0x68) < pwVar2)) {
    *(wchar_t **)(param_1 + 0x68) = pwVar2;
  }
  pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
  uVar4 = *(longlong *)(param_1 + 0x68) - (longlong)pwVar3 >> 1;
  if (param_4 == 0) {
    local_30 = 0;
LAB_18000478d:
    if (uVar4 < param_3 + local_30) {
      std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
    }
    else {
      lVar5 = param_3 + local_30;
      if ((lVar5 == 0) ||
         ((((param_5 & 1) == 0 || (pwVar1 != (wchar_t *)0x0)) &&
          (((param_5 & 2) == 0 || (pwVar2 != (wchar_t *)0x0)))))) {
        if (((param_5 & 1) != 0) && (pwVar1 != (wchar_t *)0x0)) {
          std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
                    (param_1,pwVar3,pwVar3 + lVar5,*(wchar_t **)(param_1 + 0x68));
        }
        if (((param_5 & 2) != 0) && (pwVar2 != (wchar_t *)0x0)) {
          pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::epptr(param_1);
          std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setp
                    (param_1,pwVar3,pwVar3 + lVar5,pwVar1);
        }
        std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,lVar5);
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
          if (((param_5 & 2) != 0) && ((pwVar2 != (wchar_t *)0x0 || (pwVar3 == (wchar_t *)0x0)))) {
            local_30 = (longlong)pwVar2 - (longlong)pwVar3 >> 1;
            goto LAB_18000478d;
          }
        }
        else if ((pwVar1 != (wchar_t *)0x0) || (pwVar3 == (wchar_t *)0x0)) {
          local_30 = (longlong)pwVar1 - (longlong)pwVar3 >> 1;
          goto LAB_18000478d;
        }
      }
    }
    else {
      local_30 = uVar4;
      if (param_4 == 2) goto LAB_18000478d;
    }
    std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
  }
  return param_2;
}




void FUN_1800048d0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  wchar_t *pwVar1;
  ulonglong *puVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  wchar_t *local_30;
  wchar_t *local_28;
  wchar_t *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_58;
  local_38 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  if (local_38 == (wchar_t *)0x0) {
    FUN_180006860();
  }
  else {
    pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::egptr(param_1);
    if (local_38 < pwVar1) {
      FUN_180006920(local_38);
    }
    else {
      local_20 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
      if ((local_20 == (wchar_t *)0x0) || ((*(uint *)(param_1 + 0x70) & 4) != 0)) {
        FUN_180006860();
      }
      else {
        puVar2 = _Max_value<>((ulonglong *)(param_1 + 0x68),(ulonglong *)&local_20);
        local_30 = (wchar_t *)*puVar2;
        if (local_38 < local_30) {
          *(wchar_t **)(param_1 + 0x68) = local_30;
          local_28 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
          pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
          std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
                    (param_1,pwVar1,local_28,local_30);
          pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
          FUN_180006920(pwVar1);
        }
        else {
          FUN_180006860();
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}




void FUN_180004a00(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  ushort param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  ushort local_res10 [12];
  short local_18;
  short local_16;
  short local_14;
  wchar_t local_12;
  wchar_t *local_10;
  
  local_res10[0] = param_2;
  local_10 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  if ((local_10 != (wchar_t *)0x0) &&
     (pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1),
     pwVar2 < local_10)) {
    uVar3 = FUN_180006860();
    local_18 = (short)uVar3;
    bVar1 = eq_int_type(&local_18,(short *)local_res10);
    if (!bVar1) {
      local_16 = FUN_180006920(local_res10);
      bVar1 = eq_int_type(&local_16,local_10 + -1);
      if ((!bVar1) && ((*(uint *)(param_1 + 0x70) & 2) != 0)) goto LAB_180004a9e;
    }
    std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gbump(param_1,-1);
    uVar3 = FUN_180006860();
    local_14 = (short)uVar3;
    bVar1 = eq_int_type(&local_14,(short *)local_res10);
    if (!bVar1) {
      local_12 = FUN_180006920(local_res10);
      pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
      *pwVar2 = local_12;
    }
    not_eof(local_res10);
    return;
  }
LAB_180004a9e:
  FUN_180006860();
  return;
}




ulonglong FUN_180004b10(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                       ushort param_2)

{
  bool bVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined6 extraout_var;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  void *pvVar7;
  ushort local_res10 [12];
  ulonglong local_40;
  short local_38;
  wchar_t local_36;
  wchar_t local_34;
  wchar_t *local_30;
  __uint64 local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  wchar_t *local_10;
  
  local_res10[0] = param_2;
  if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
    uVar4 = FUN_180006860();
    local_38 = (short)uVar4;
    bVar1 = eq_int_type(&local_38,(short *)local_res10);
    if (bVar1) {
      uVar2 = not_eof(local_res10);
      uVar3 = CONCAT62(extraout_var,uVar2);
    }
    else {
      local_30 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
      local_18 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::epptr(param_1);
      if ((local_30 == (wchar_t *)0x0) || (local_18 <= local_30)) {
        local_40 = 0;
        local_20 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
        if (local_30 != (wchar_t *)0x0) {
          local_40 = (longlong)local_18 - (longlong)local_20 >> 1;
        }
        if (local_40 < 0x20) {
          local_28 = 0x20;
        }
        else if (local_40 < 0x3fffffff) {
          local_28 = local_40 * 2;
        }
        else {
          if (0x7ffffffe < local_40) {
            uVar3 = FUN_180006860();
            return uVar3;
          }
          local_28 = 0x7fffffff;
        }
        uVar4 = allocate(param_1 + 0x74,local_28);
        pwVar5 = (wchar_t *)FUN_180001510(uVar4);
        copy((undefined1 *)pwVar5,(undefined1 *)local_20,local_40);
        local_10 = pwVar5 + local_40;
        *(wchar_t **)(param_1 + 0x68) = local_10 + 1;
        std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setp
                  (param_1,pwVar5,local_10,pwVar5 + local_28);
        if ((*(uint *)(param_1 + 0x70) & 4) == 0) {
          pwVar6 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
          std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
                    (param_1,pwVar5,pwVar5 + ((longlong)pwVar6 - (longlong)local_20 >> 1),
                     *(wchar_t **)(param_1 + 0x68));
        }
        else {
          std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
                    (param_1,pwVar5,(wchar_t *)0x0,pwVar5);
        }
        if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
          pvVar7 = (void *)FUN_180004ef0(local_20);
          deallocate(param_1 + 0x74,pvVar7,local_40);
        }
        *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
        local_34 = FUN_180006920(local_res10);
        pwVar5 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Pninc(param_1);
        *pwVar5 = local_34;
        uVar3 = (ulonglong)local_res10[0];
      }
      else {
        local_36 = FUN_180006920(local_res10);
        pwVar5 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Pninc(param_1);
        *pwVar5 = local_36;
        *(wchar_t **)(param_1 + 0x68) = local_30 + 1;
        uVar3 = (ulonglong)local_res10[0];
      }
    }
  }
  else {
    uVar3 = FUN_180006860();
  }
  return uVar3;
}




void FUN_180004db0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  *(undefined ***)param_1 =
       std::basic_stringbuf<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
       ::vftable;
  FUN_1800064e0(param_1);
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>(param_1);
  return;
}




void FUN_180004df0(void)

{
  FUN_180004eb0();
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
  FUN_1800039d0((longlong)(this + -0x98));
  if ((param_1 & 1) != 0) {
    free(this + -0x98);
  }
  return this + -0x98;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_180004e70(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,uint param_2)

{
  FUN_180004db0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180004eb0(void)

{
  FUN_180004ed0();
  return;
}




void FUN_180004ed0(void)

{
  FUN_180001430();
  return;
}




void FUN_180004ef0(undefined8 param_1)

{
  FUN_180001510(param_1);
  return;
}




void FUN_180004f10(undefined8 param_1)

{
  FUN_180006b00(param_1);
  return;
}




void FUN_180004f40(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_58;
  FUN_180005570(param_1);
  select_on_container_copy_construction(local_20);
  while (bVar1 = FUN_180005200(param_1), !bVar1) {
    FUN_180007030(param_1);
  }
  plVar2 = (longlong *)FUN_180006ac0(param_1);
  local_38 = *plVar2;
  while (local_38 != 0) {
    local_38 = local_38 + -1;
    plVar2 = (longlong *)FUN_180006ae0(param_1);
    if (*(longlong *)(*plVar2 + local_38 * 8) != 0) {
      plVar2 = (longlong *)FUN_180006ae0(param_1);
      local_30 = *plVar2;
      uVar3 = FUN_180005570(param_1);
      FUN_1800071a0(uVar3,*(void **)(local_30 + local_38 * 8),1);
      plVar2 = (longlong *)FUN_180006ae0(param_1);
      FUN_180001510(*plVar2 + local_38 * 8);
      FUN_1800084a0();
    }
  }
  plVar2 = (longlong *)FUN_180006ae0(param_1);
  if (*plVar2 != 0) {
    local_28 = (longlong *)FUN_180006ac0(param_1);
    puVar4 = (undefined8 *)FUN_180006ae0(param_1);
    FUN_180006a50(local_20,(void *)*puVar4,*local_28);
  }
  puVar4 = (undefined8 *)FUN_180006ac0(param_1);
  *puVar4 = 0;
  puVar4 = (undefined8 *)FUN_180006ae0(param_1);
  *puVar4 = 0;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1800050b0(undefined8 param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar2 = (ulonglong *)FUN_180006aa0(param_1);
  lVar3 = FUN_180006bc0(param_1,*puVar2);
  plVar4 = (longlong *)FUN_180006ae0(param_1);
  lVar1 = *plVar4;
  FUN_180006aa0(param_1);
  pvVar5 = (void *)FUN_180001510(*(undefined8 *)(lVar1 + lVar3 * 8));
  uVar6 = FUN_180005570(param_1);
  destroy<>(uVar6,pvVar5);
  plVar4 = (longlong *)FUN_180006a80(param_1);
  *plVar4 = *plVar4 + -1;
  if (*plVar4 == 0) {
    puVar7 = (undefined8 *)FUN_180006aa0(param_1);
    *puVar7 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_180006aa0(param_1);
    *plVar4 = *plVar4 + 1;
  }
  return;
}




/* Library Function - Single Match
    public: char & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::front(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

char * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::front
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  _Iterator_base12 *p_Var1;
  char *pcVar2;
  _Iterator_base12 local_28 [40];
  
  p_Var1 = FUN_180007110(this,local_28);
  pcVar2 = (char *)FUN_180006a30(p_Var1);
  FUN_180006a10();
  return pcVar2;
}




bool FUN_180005200(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180006a80(param_1);
  return *plVar1 == 0;
}




void FUN_180005240(undefined8 param_1,undefined8 param_2)

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
  
  FUN_1800057f0(param_1);
  FUN_180006aa0(param_1);
  FUN_180006a80(param_1);
  puVar1 = (ulonglong *)FUN_180006ac0(param_1);
  plVar2 = (longlong *)FUN_180006a80(param_1);
  if (*puVar1 <= *plVar2 + 1U) {
    FUN_180006bf0(param_1,1);
  }
  puVar1 = (ulonglong *)FUN_180006aa0(param_1);
  plVar2 = (longlong *)FUN_180006ac0(param_1);
  *puVar1 = *puVar1 & *plVar2 - 1U;
  plVar2 = (longlong *)FUN_180006aa0(param_1);
  plVar3 = (longlong *)FUN_180006a80(param_1);
  lVar4 = FUN_180006bc0(param_1,*plVar2 + *plVar3);
  plVar2 = (longlong *)FUN_180006ae0(param_1);
  if (*(longlong *)(*plVar2 + lVar4 * 8) == 0) {
    this = (allocator<struct_std::_Container_proxy> *)FUN_180005570(param_1);
    p_Var5 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
    plVar2 = (longlong *)FUN_180006ae0(param_1);
    *(_Container_proxy **)(*plVar2 + lVar4 * 8) = p_Var5;
  }
  uVar6 = FUN_180001510(param_2);
  plVar2 = (longlong *)FUN_180006ae0(param_1);
  uVar7 = FUN_180001510(*(undefined8 *)(*plVar2 + lVar4 * 8));
  uVar8 = FUN_180005570(param_1);
  FUN_1800084d0(uVar8,uVar7,uVar6);
  plVar2 = (longlong *)FUN_180006a80(param_1);
  *plVar2 = *plVar2 + 1;
  return;
}




undefined8 * FUN_180005440(undefined8 *param_1)

{
  FUN_180006b90(param_1);
  return param_1;
}




void FUN_180005460(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68 [5];
  undefined8 local_40 [6];
  
  if (*param_1 == 0) {
    puVar1 = (undefined1 *)std::make_error_code((io_errc)local_88);
    puVar3 = local_a8;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_180001ce0(local_68,local_a8,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_68,(ThrowInfo *)&DAT_1800104d8);
  }
  if ((char)param_1[1] != '\0') {
    puVar1 = (undefined1 *)std::make_error_code((io_errc)local_78);
    puVar3 = local_98;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_180001ce0(local_40,local_98,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_40,(ThrowInfo *)&DAT_1800104d8);
  }
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
    local_18 = (undefined8 *)FUN_180001510(*param_1);
  }
  return local_18;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static class std::allocator<char> __cdecl std::_Default_allocator_traits<class
   std::allocator<char> >::select_on_container_copy_construction(class std::allocator<char> const &
   __ptr64)
    public: static class std::allocator<unsigned short> __cdecl std::_Default_allocator_traits<class
   std::allocator<unsigned short> >::select_on_container_copy_construction(class
   std::allocator<unsigned short> const & __ptr64)
    public: static class std::allocator<wchar_t> __cdecl std::_Default_allocator_traits<class
   std::allocator<wchar_t> >::select_on_container_copy_construction(class std::allocator<wchar_t>
   const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

undefined8 select_on_container_copy_construction(undefined8 param_1)

{
  return param_1;
}




void FUN_180005570(undefined8 param_1)

{
  FUN_180001510(param_1);
  return;
}




void FUN_180005590(undefined8 param_1)

{
  FUN_180005570(param_1);
  _Pocca<>();
  return;
}




longlong FUN_1800055c0(longlong param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




undefined1 FUN_1800055f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}




void FUN_180005600(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::_Osfx
              ((basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)*param_1);
  }
  FUN_180007200(param_1);
  return;
}




longlong *
FUN_180005640(longlong *param_1,basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_2)

{
  bool bVar1;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar2;
  
  FUN_180007290(param_1,(longlong)param_2);
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::tie
                       ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                        (param_2 + *(int *)(*(longlong *)param_2 + 4)));
    if (pbVar2 != (basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0) {
      pbVar2 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::tie
                         ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                          (param_2 + *(int *)(*(longlong *)param_2 + 4)));
      if (pbVar2 != param_2) {
        pbVar2 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::tie
                           ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                            (param_2 + *(int *)(*(longlong *)param_2 + 4)));
        std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush(pbVar2);
      }
    }
  }
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  *(bool *)(param_1 + 1) = bVar1;
  return param_1;
}




undefined1 FUN_180005740(undefined1 *param_1)

{
  return *param_1;
}




undefined1 * FUN_180005750(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
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
    public: char const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Myptr(void)const __ptr64
    public: unsigned short const * __ptr64 __cdecl std::_String_val<struct
   std::_Simple_types<unsigned short> >::_Myptr(void)const __ptr64
    public: wchar_t const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Myptr(void)const __ptr64
   
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
               FUN_180001510(*(undefined8 *)param_1);
  }
  return local_18;
}




void FUN_1800057f0(undefined8 param_1)

{
  FUN_180005570(param_1);
  FUN_180001430();
  return;
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
  
  FUN_1800057f0(param_1);
  local_20 = (undefined8 *)FUN_180005570(param_1);
  bVar1 = Large_string_engaged((longlong)local_20);
  if (bVar1) {
    local_10 = (void *)*local_20;
    local_18 = FUN_180005570(param_1);
    FUN_180001510(local_20);
    FUN_1800084a0();
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
  
  local_10 = (undefined2 *)FUN_180005570(param_1);
  *(undefined8 *)(local_10 + 8) = 0;
  *(undefined8 *)(local_10 + 0xc) = 7;
  local_18[0] = 0;
  assign(local_10,local_18);
  return;
}




undefined8 FUN_180005940(undefined8 param_1,undefined8 param_2)

{
  FUN_180005570(param_1);
  return param_2;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::assign(unsigned
   __int64,unsigned short) __ptr64
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::assign(unsigned __int64,wchar_t)
   __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 FID_conflict_assign(undefined8 param_1,ulonglong param_2,wchar_t param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [2];
  undefined2 local_26 [3];
  undefined8 *local_20;
  wchar_t *local_18;
  
  local_20 = (undefined8 *)FUN_180005570(param_1);
  if ((ulonglong)local_20[3] < param_2) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = FUN_180008580(param_1,param_2,local_28[0],param_3);
  }
  else {
    local_18 = (wchar_t *)Myptr(local_20);
    local_20[2] = param_2;
    assign(local_18,param_2,param_3);
    local_26[0] = 0;
    assign(local_18 + param_2,local_26);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl `public: class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > & __ptr64 __cdecl
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::assign(unsigned __int64,unsigned short)
   __ptr64'::`2'::<lambda_1>::operator()(unsigned short * __ptr64 const,unsigned __int64,unsigned
   short)const __ptr64
    public: void __cdecl `public: class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64 __cdecl
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >::assign(unsigned __int64,wchar_t) __ptr64'::`2'::<lambda_1>::operator()(wchar_t * __ptr64
   const,unsigned __int64,wchar_t)const __ptr64
    public: void __cdecl <lambda_8317d86ccc4fc543e8e6132f798c706e>::operator()(unsigned short *
   __ptr64 const,unsigned __int64,unsigned short)const __ptr64
    public: void __cdecl <lambda_b316f76599580dcfa601a433435bf0fe>::operator()(wchar_t * __ptr64
   const,unsigned __int64,wchar_t)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__(undefined8 param_1,wchar_t *param_2,size_t param_3,wchar_t param_4)

{
  undefined2 local_18 [12];
  
  assign(param_2,param_3,param_4);
  local_18[0] = 0;
  assign(param_2 + param_3,local_18);
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
  uVar2 = FUN_180001510(_Var1);
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
  
  local_20 = (undefined8 *)FUN_180005570(param_1);
  if ((ulonglong)local_20[3] < param_3) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = FUN_1800086e0(param_1,param_3,local_28[0],param_2);
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
    public: void __cdecl `public: class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > & __ptr64 __cdecl
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::assign(unsigned short const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>::operator()(unsigned short * __ptr64 const,unsigned __int64,unsigned
   short const * __ptr64 const)const __ptr64
    public: void __cdecl `public: class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64 __cdecl
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >::assign(wchar_t const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>::operator()(wchar_t * __ptr64 const,unsigned __int64,wchar_t const *
   __ptr64 const)const __ptr64
    public: void __cdecl <lambda_3fa8b2c8193a0f3144fc4b1b8f243931>::operator()(wchar_t * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined2 local_18 [12];
  
  copy(param_2,param_4,param_3);
  local_18[0] = 0;
  assign((undefined2 *)(param_2 + param_3 * 2),local_18);
  return;
}




void FUN_180005c00(undefined8 param_1,undefined8 param_2)

{
  __uint64 *p_Var1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  __uint64 local_40;
  __uint64 local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_88;
  local_68 = (undefined1 *)FUN_180005570(param_1);
  local_58 = (undefined8 *)FUN_180005570(param_2);
  local_60 = local_58[2];
  local_48 = Myptr(local_58);
  if (local_60 < 8) {
    copy(local_68,(undefined1 *)local_48,8);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(undefined8 *)(local_68 + 0x18) = 7;
  }
  else {
    local_50 = FUN_180005570(param_1);
    local_38 = FUN_180007340(param_1);
    local_30 = local_60 | 7;
    p_Var1 = std::_Min_value<unsigned___int64>(&local_30,&local_38);
    local_40 = *p_Var1;
    local_20 = allocate(local_50,local_40 + 1);
    uVar2 = FUN_180001510(local_68);
    construct<>(local_50,uVar2,&local_20);
    local_28 = local_60 + 1;
    puVar3 = (undefined1 *)FUN_180001510(local_20);
    copy(puVar3,(undefined1 *)local_48,local_28);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(__uint64 *)(local_68 + 0x18) = local_40;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




longlong FUN_180005d80(longlong param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4,
                      undefined8 param_5)

{
  FUN_180008460(param_1,param_5);
  FID_conflict__Tidy_init(param_1);
  FUN_1800073d0(param_1,param_2,param_3,param_4);
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
  
  FUN_1800057f0(this);
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(this);
  bVar1 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(local_20);
  if (bVar1) {
    local_10 = *(void **)local_20;
    local_18 = FUN_180005570(this);
    FUN_180001510(local_20);
    FUN_1800084a0();
    FUN_180006830(local_18,local_10,*(longlong *)(local_20 + 0x18) + 1);
  }
  *(undefined8 *)(local_20 + 0x10) = 0;
  *(undefined8 *)(local_20 + 0x18) = 0xf;
  local_28[0] = 0;
  FUN_180001410(local_20,local_28);
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
  
  local_10 = (undefined1 *)FUN_180005570(this);
  *(undefined8 *)(local_10 + 0x10) = 0;
  *(undefined8 *)(local_10 + 0x18) = 0xf;
  local_18[0] = 0;
  FUN_180001410(local_10,local_18);
  return;
}




void FUN_180005f10(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  __uint64 local_28;
  __uint64 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  FUN_180005570(param_1);
  local_18 = FUN_180007330();
  local_38 = 0x10;
  puVar1 = _Max_value<>(&local_18,&local_38);
  local_30 = *puVar1;
  local_28 = local_30 - 1;
  local_20 = FUN_180001360();
  std::_Min_value<unsigned___int64>(&local_20,&local_28);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    char * __ptr64 const & __ptr64 __cdecl std::_Max_value<char * __ptr64>(char * __ptr64 const &
   __ptr64,char * __ptr64 const & __ptr64)
    unsigned __int64 const & __ptr64 __cdecl std::_Max_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

ulonglong * _Max_value<>(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *local_18;
  
  local_18 = param_1;
  if (*param_1 < *param_2) {
    local_18 = param_2;
  }
  return local_18;
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
  _Var2 = FUN_180001510(lVar1);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(this);
  if (*(ulonglong *)(local_20 + 0x18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_180008890(this,param_2,local_27[0],param_1);
  }
  else {
    local_18 = Myptr(local_20);
    *(__uint64 *)(local_20 + 0x10) = param_2;
    char_traits<char>::move((char *)local_18,param_1,param_2);
    local_28 = 0;
    FUN_180001410(local_18 + param_2,&local_28);
  }
  return this;
}




void FUN_1800060f0(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 local_18 [24];
  
  FUN_1800013b0(param_2,param_4,param_3);
  local_18[0] = 0;
  FUN_180001410(param_2 + param_3,local_18);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(this);
  local_18 = *(longlong *)(local_20 + 0x10);
  if ((ulonglong)(*(longlong *)(local_20 + 0x18) - local_18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1800089f0(this,param_2,local_27[0],param_1,param_2);
  }
  else {
    *(__uint64 *)(local_20 + 0x10) = local_18 + param_2;
    local_10 = Myptr(local_20);
    char_traits<char>::move((char *)(local_10 + local_18),param_1,param_2);
    local_28 = 0;
    FUN_180001410(local_10 + local_18 + param_2,&local_28);
  }
  return this;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::append(char const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64
   const,unsigned __int64,char const * __ptr64 const,unsigned __int64)const __ptr64
    public: void __cdecl <lambda_65e615be2a453ca0576c979606f46740>::operator()(char * __ptr64
   const,char const * __ptr64 const,unsigned __int64,char const * __ptr64 const,unsigned
   __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
               undefined1 *param_5,longlong param_6)

{
  undefined1 local_18 [24];
  
  FUN_1800013b0(param_2,param_3,param_4);
  FUN_1800013b0(param_2 + param_4,param_5,param_6);
  local_18[0] = 0;
  FUN_180001410(param_2 + param_4 + param_6,local_18);
  return;
}




void FUN_1800062e0(undefined8 param_1,undefined8 param_2)

{
  __uint64 *p_Var1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  ulonglong local_60;
  _String_val<struct_std::_Simple_types<char>_> *local_58;
  undefined8 local_50;
  _String_val<struct_std::_Simple_types<char>_> *local_48;
  __uint64 local_40;
  __uint64 local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_88;
  local_68 = (undefined1 *)FUN_180005570(param_1);
  local_58 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(param_2);
  local_60 = *(ulonglong *)(local_58 + 0x10);
  local_48 = Myptr(local_58);
  if (local_60 < 0x10) {
    FUN_1800013b0(local_68,local_48,0x10);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(undefined8 *)(local_68 + 0x18) = 0xf;
  }
  else {
    local_50 = FUN_180005570(param_1);
    local_38 = FUN_180005f10(param_1);
    local_30 = local_60 | 0xf;
    p_Var1 = std::_Min_value<unsigned___int64>(&local_30,&local_38);
    local_40 = *p_Var1;
    local_20 = allocate(local_50,local_40 + 1);
    uVar2 = FUN_180001510(local_68);
    construct<>(local_50,uVar2,&local_20);
    local_28 = local_60 + 1;
    puVar3 = (undefined1 *)FUN_180001510(local_20);
    FUN_1800013b0(puVar3,local_48,local_28);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(__uint64 *)(local_68 + 0x18) = local_40;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_180006460(undefined8 param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_180005570(param_2);
  uVar2 = FUN_180005570(param_1);
  puVar3 = (undefined1 *)FUN_180001510(uVar2);
  puVar4 = (undefined1 *)FUN_180001510(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_2);
  return;
}




void FUN_1800064e0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  void *pvVar3;
  wchar_t *local_18;
  
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
    if (pwVar1 == (wchar_t *)0x0) {
      local_18 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::egptr(param_1);
    }
    else {
      local_18 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::epptr(param_1);
    }
    pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
    pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
    pvVar3 = (void *)FUN_180004ef0(pwVar2);
    deallocate(param_1 + 0x74,pvVar3,(longlong)local_18 - (longlong)pwVar1 >> 1);
  }
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
            (param_1,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setp
            (param_1,(wchar_t *)0x0,(wchar_t *)0x0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  return;
}




void FUN_1800065c0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  longlong param_2)

{
  wchar_t *pwVar1;
  ulonglong *puVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_78;
  local_58 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (local_30,(allocator<char> *)(param_1 + 0x74));
  if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
    pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
    if (pwVar1 != (wchar_t *)0x0) {
      local_50 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pbase(param_1);
      local_40 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
      puVar2 = _Max_value<>((ulonglong *)&local_40,(ulonglong *)(param_1 + 0x68));
      FID_conflict_assign(local_30,(undefined1 *)local_50,
                          (longlong)(*puVar2 - (longlong)local_50) >> 1);
      goto LAB_1800066ee;
    }
  }
  if ((*(uint *)(param_1 + 0x70) & 4) == 0) {
    pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
    if (pwVar1 != (wchar_t *)0x0) {
      local_48 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
      pwVar1 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::egptr(param_1);
      FID_conflict_assign(local_30,(undefined1 *)local_48,(longlong)pwVar1 - (longlong)local_48 >> 1
                         );
    }
  }
LAB_1800066ee:
  basic_string<>(param_2,local_30);
  local_58 = local_58 | 1;
  FUN_180003ed0(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
  return;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_180006730(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,int param_2)

{
  int iVar1;
  
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>(param_1);
  *(undefined ***)param_1 =
       std::basic_stringbuf<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
       ::vftable;
  *(undefined8 *)(param_1 + 0x68) = 0;
  iVar1 = std::basic_stringbuf<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          _Getstate(param_2);
  *(int *)(param_1 + 0x70) = iVar1;
  FUN_180001510(param_1 + 0x74);
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned short * __ptr64 __cdecl std::allocator<unsigned short>::allocate(unsigned
   __int64) __ptr64
    public: wchar_t * __ptr64 __cdecl std::allocator<wchar_t>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

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
  
  _Var1 = FUN_180001510(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180006830(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




undefined8 FUN_180006860(void)

{
  return 0xffff;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short __cdecl std::_WChar_traits<unsigned short>::not_eof(unsigned short
   const & __ptr64)
    public: static unsigned short __cdecl std::_WChar_traits<wchar_t>::not_eof(unsigned short const
   & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

ushort not_eof(ushort *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ushort local_18;
  ushort local_16;
  
  uVar1 = *param_1;
  uVar2 = FUN_180006860();
  if ((uint)uVar1 == ((uint)uVar2 & 0xffff)) {
    uVar3 = FUN_180006860();
    local_18 = (ushort)((uVar3 & 0xffff) == 0);
    local_16 = local_18;
  }
  else {
    local_16 = *param_1;
  }
  return local_16;
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




undefined2 FUN_180006920(undefined2 *param_1)

{
  return *param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __ptr64 __cdecl std::_WChar_traits<unsigned
   short>::copy(unsigned short * __ptr64 const,unsigned short const * __ptr64 const,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::_WChar_traits<wchar_t>::copy(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void copy(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180001290(param_1,param_2,param_3);
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




longlong FUN_1800069a0(longlong *param_1)

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




void FUN_180006a10(void)

{
  FUN_180001eb0();
  return;
}




void FUN_180006a30(_Iterator_base12 *param_1)

{
  FUN_180007600(param_1);
  return;
}




void FUN_180006a50(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 3);
  return;
}




longlong FUN_180006a80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180005570(param_1);
  return lVar1 + 0x20;
}




longlong FUN_180006aa0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180005570(param_1);
  return lVar1 + 0x18;
}




longlong FUN_180006ac0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180005570(param_1);
  return lVar1 + 0x10;
}




longlong FUN_180006ae0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180005570(param_1);
  return lVar1 + 8;
}




void FUN_180006b00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  allocator<struct_std::_Container_proxy> local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_38;
  FUN_180005570(param_1);
  select_on_container_copy_construction(local_18);
  FUN_1800057f0(param_1);
  FUN_180007700(param_1);
  FUN_1800084a0();
  puVar1 = (undefined8 *)FUN_180007700(param_1);
  _Deallocate_plain<>(local_18,(_Container_proxy *)*puVar1);
  puVar1 = (undefined8 *)FUN_180007700(param_1);
  *puVar1 = 0;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_38);
  return;
}




undefined8 * FUN_180006b90(undefined8 *param_1)

{
  FUN_180008d00(param_1);
  FUN_180007720(param_1);
  return param_1;
}




void FUN_180006bc0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180005570(param_1);
  FUN_1800076a0(lVar1,param_2);
  return;
}




void FUN_180006bf0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 *local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_a8;
  FUN_180005570(param_1);
  select_on_container_copy_construction(local_18);
  plVar1 = (longlong *)FUN_180006ac0(param_1);
  if (*plVar1 == 0) {
    local_68 = 1;
  }
  else {
    puVar2 = (ulonglong *)FUN_180006ac0(param_1);
    local_68 = *puVar2;
  }
  local_78 = local_68;
  while( true ) {
    plVar1 = (longlong *)FUN_180006ac0(param_1);
    if ((param_2 <= local_78 - *plVar1) && (7 < local_78)) break;
    lVar3 = FUN_180007810(param_1);
    if (lVar3 - local_78 < local_78) {
      FUN_1800077f0();
    }
    local_78 = local_78 << 1;
  }
  plVar1 = (longlong *)FUN_180006ac0(param_1);
  uVar5 = local_78 - *plVar1;
  puVar2 = (ulonglong *)FUN_180006aa0(param_1);
  local_80 = *puVar2;
  plVar1 = (longlong *)FUN_180006ac0(param_1);
  local_70 = (undefined1 *)allocate(local_18,*plVar1 + uVar5);
  local_88 = local_70 + local_80 * 8;
  local_58 = (longlong *)FUN_180006ae0(param_1);
  plVar1 = (longlong *)FUN_180006ac0(param_1);
  local_50 = *local_58 + *plVar1 * 8;
  plVar1 = (longlong *)FUN_180006ae0(param_1);
  local_88 = (undefined1 *)FUN_180008d30(*plVar1 + local_80 * 8,local_50,local_88,local_18);
  if (uVar5 < local_80) {
    plVar1 = (longlong *)FUN_180006ae0(param_1);
    local_40 = *plVar1 + uVar5 * 8;
    puVar4 = (undefined8 *)FUN_180006ae0(param_1);
    FUN_180008d30(*puVar4,local_40,local_88,local_18);
    plVar1 = (longlong *)FUN_180006ae0(param_1);
    local_38 = *plVar1 + local_80 * 8;
    plVar1 = (longlong *)FUN_180006ae0(param_1);
    local_88 = (undefined1 *)FUN_180008d30(*plVar1 + uVar5 * 8,local_38,local_70,local_18);
    FUN_180008e40(local_88,uVar5);
  }
  else {
    plVar1 = (longlong *)FUN_180006ae0(param_1);
    local_48 = *plVar1 + local_80 * 8;
    puVar4 = (undefined8 *)FUN_180006ae0(param_1);
    local_88 = (undefined1 *)FUN_180008d30(*puVar4,local_48,local_88,local_18);
    FUN_180008e40(local_88,uVar5 - local_80);
    FUN_180008e40(local_70,local_80);
  }
  local_30 = (longlong *)FUN_180006ae0(param_1);
  plVar1 = (longlong *)FUN_180006ac0(param_1);
  local_28 = *local_30 + *plVar1 * 8;
  FUN_180006ae0(param_1);
  FUN_180008e90();
  plVar1 = (longlong *)FUN_180006ae0(param_1);
  if (*plVar1 != 0) {
    local_20 = (longlong *)FUN_180006ac0(param_1);
    puVar4 = (undefined8 *)FUN_180006ae0(param_1);
    FUN_180006a50(local_18,(void *)*puVar4,*local_20);
  }
  plVar1 = (longlong *)FUN_180006ae0(param_1);
  *plVar1 = (longlong)local_70;
  local_60 = (longlong *)FUN_180006ac0(param_1);
  *local_60 = *local_60 + uVar5;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_180007030(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  plVar1 = (longlong *)FUN_180006aa0(param_1);
  plVar2 = (longlong *)FUN_180006a80(param_1);
  lVar3 = FUN_180006bc0(param_1,*plVar1 + -1 + *plVar2);
  plVar1 = (longlong *)FUN_180006ae0(param_1);
  pvVar4 = (void *)FUN_180001510(*(undefined8 *)(*plVar1 + lVar3 * 8));
  uVar5 = FUN_180005570(param_1);
  destroy<>(uVar5,pvVar4);
  plVar1 = (longlong *)FUN_180006a80(param_1);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    puVar6 = (undefined8 *)FUN_180006aa0(param_1);
    *puVar6 = 0;
  }
  return;
}




_Iterator_base12 * FUN_180007110(undefined8 param_1,_Iterator_base12 *param_2)

{
  undefined8 uVar1;
  _Container_base12 *p_Var2;
  undefined8 *puVar3;
  
  uVar1 = FUN_180005570(param_1);
  p_Var2 = (_Container_base12 *)FUN_180001510(uVar1);
  puVar3 = (undefined8 *)FUN_180006aa0(param_1);
  FUN_180007660(param_2,*puVar3,p_Var2);
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




void FUN_1800071a0(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x28);
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




void FUN_180007200(longlong *param_1)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  
  pbVar1 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0) {
    pbVar1 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                       ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 0x10))(pbVar1);
  }
  return;
}




longlong * FUN_180007290(longlong *param_1,longlong param_2)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  
  *param_1 = param_2;
  pbVar1 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                     ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0) {
    pbVar1 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                       ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 8))(pbVar1);
  }
  return param_1;
}




undefined8 FUN_180007330(void)

{
  return 0xffffffffffffffff;
}




void FUN_180007340(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  __uint64 local_28;
  __uint64 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  FUN_180005570(param_1);
  local_18 = FUN_1800078a0();
  local_38 = 8;
  puVar1 = _Max_value<>(&local_18,&local_38);
  local_30 = *puVar1;
  local_28 = local_30 - 1;
  local_20 = FUN_180001360();
  std::_Min_value<unsigned___int64>(&local_20,&local_28);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1800073d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 _Var1;
  undefined8 *puVar2;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180005570(param_2);
  FUN_180007870((longlong)this,param_3);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this,param_3,param_4);
  puVar2 = Myptr((undefined8 *)this);
  FID_conflict_assign(param_1,(undefined1 *)((longlong)puVar2 + param_3 * 2),_Var1);
  return;
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
  uVar1 = FUN_180005570(param_2);
  uVar1 = FUN_180001510(uVar1);
  FUN_180008460(param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_180001510(param_2);
  FUN_1800078b0(param_1,uVar1);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(class
   std::allocator<char> const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          allocator<char> *param_1)

{
  FUN_180008460((longlong)this,param_1);
  FID_conflict__Tidy_init(this);
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
   short>::assign(unsigned short * __ptr64 const,unsigned __int64,unsigned short)
    public: static wchar_t * __ptr64 __cdecl std::_WChar_traits<wchar_t>::assign(wchar_t * __ptr64
   const,unsigned __int64,wchar_t)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void assign(wchar_t *param_1,size_t param_2,wchar_t param_3)

{
  wmemset(param_1,param_3,param_2);
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
  FUN_1800012c0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_180007600(_Iterator_base12 *param_1)

{
  _Container_base12 *p_Var1;
  ulonglong uVar2;
  
  p_Var1 = std::_Iterator_base12::_Getcont(param_1);
  uVar2 = FUN_1800076a0((longlong)p_Var1,*(ulonglong *)(param_1 + 0x10));
  return *(undefined8 *)(*(longlong *)(p_Var1 + 8) + uVar2 * 8);
}




_Iterator_base12 *
FUN_180007660(_Iterator_base12 *param_1,undefined8 param_2,_Container_base12 *param_3)

{
  FID_conflict__String_const_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>
            (param_1,param_2,param_3);
  return param_1;
}




ulonglong FUN_1800076a0(longlong param_1,ulonglong param_2)

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
  
  _Var1 = FUN_180008f30(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_180007700(undefined8 param_1)

{
  FUN_180005570(param_1);
  return;
}




void FUN_180007720(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  _Container_proxy *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  allocator<struct_std::_Container_proxy> local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_68;
  FUN_180005570(param_1);
  select_on_container_copy_construction(local_20);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  local_48 = FUN_180001510(p_Var1);
  puVar2 = (undefined8 *)FUN_180007700(param_1);
  *puVar2 = local_48;
  local_40 = (_Container_proxy *)FUN_180001440(local_30);
  puVar2 = (undefined8 *)FUN_180007700(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
            (local_20,(_Container_proxy *)*puVar2,local_40);
  uVar3 = FUN_180005570(param_1);
  local_38 = FUN_180001510(uVar3);
  puVar2 = (undefined8 *)FUN_180007700(param_1);
  *(undefined8 *)*puVar2 = local_38;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_1800077f0(void)

{
  std::_Xlength_error("deque<T> too long");
  return;
}




void FUN_180007810(undefined8 param_1)

{
  FUN_180005570(param_1);
  FUN_180007980();
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




void FUN_180007870(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_180007990();
  }
  return;
}




undefined8 FUN_1800078a0(void)

{
  return 0x7fffffffffffffff;
}




void FUN_1800078b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_180005570(param_2);
  uVar2 = FUN_180005570(param_1);
  puVar3 = (undefined1 *)FUN_180001510(uVar2);
  puVar4 = (undefined1 *)FUN_180001510(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__Tidy_init(param_2);
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

_Iterator_base12 *
FID_conflict__String_const_iterator<class_std::_String_val<struct_std::_Simple_types<wchar_t>_>_>
          (_Iterator_base12 *param_1,undefined8 param_2,_Container_base12 *param_3)

{
  FUN_180001440((undefined8 *)param_1);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_1800079e0(param_1,param_3);
  return param_1;
}




undefined8 FUN_180007980(void)

{
  return 0x666666666666666;
}




void FUN_180007990(void)

{
  std::_Xout_of_range("invalid string position");
  return;
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




void FUN_1800079e0(_Iterator_base12 *param_1,_Container_base12 *param_2)

{
  std::_Iterator_base12::_Adopt(param_1,param_2);
  return;
}




/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}




undefined * FUN_180007a60(void)

{
  int iVar1;
  
  iVar1 = std::_Execute_once((once_flag *)&DAT_180013b98,
                             (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_180009770,
                             &DAT_180013cb0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return &DAT_180013cb0;
}




undefined4 * FUN_180007aa0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_180001510(param_2);
  *param_1 = *puVar1;
  uVar2 = FUN_180001510(param_3);
  basic_string<>((longlong)(param_1 + 2),uVar2);
  return param_1;
}




undefined8 FUN_180007af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  _Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
  *p_Var3;
  _Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
  local_20 [8];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_180001510(param_3);
  uVar2 = FUN_180001510(param_2);
  p_Var3 = FUN_1800097b0(local_20,uVar2,uVar1);
  FUN_180009850(param_1,p_Var3);
  FUN_180009190((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)local_20);
  return param_1;
}




/* Library Function - Single Match
    public: void __cdecl std::condition_variable::wait<class
   <lambda_a1eabba02874cbf8cbb226c45133fc37> >(class std::unique_lock<class std::mutex> &
   __ptr64,class <lambda_a1eabba02874cbf8cbb226c45133fc37>) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
std::condition_variable::wait<class_<lambda_a1eabba02874cbf8cbb226c45133fc37>_>
          (condition_variable *this,unique_lock<class_std::mutex> *param_1,longlong param_3)

{
  char cVar1;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  while( true ) {
    cVar1 = FUN_1800030b0(local_res18);
    if (cVar1 != '\0') break;
    wait(this,param_1);
  }
  return;
}




undefined8 * FUN_180007bb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800092a0(param_1,param_2,param_3);
  return param_1;
}




void FUN_180007bf0(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  undefined8 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_f8 [32];
  wchar_t local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  wchar_t local_b8;
  uint local_b4;
  locale *local_b0;
  locale *local_a8;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_a0;
  time_put<wchar_t,class_std::ostreambuf_iterator<wchar_t,struct_std::char_traits<wchar_t>_>_>
  *local_98;
  undefined1 *local_90;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_80 = 0xfffffffffffffffe;
  local_28 = DAT_180013010 ^ (ulonglong)auStack_f8;
  local_b4 = 0;
  FUN_180005640(local_38,param_1);
  cVar1 = FUN_1800055f0((longlong)local_38);
  if (cVar1 != '\0') {
    local_b0 = (locale *)
               std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_a8 = local_b0;
    local_98 = (time_put<wchar_t,class_std::ostreambuf_iterator<wchar_t,struct_std::char_traits<wchar_t>_>_>
                *)FUN_1800098d0(local_b0);
    FUN_180001700((longlong)local_78);
    local_a0 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                         ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                          (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    puVar2 = FUN_180005750(local_58,local_a0);
    puVar4 = local_68;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    local_d8 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::fill
                         ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                          (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_c0 = param_2[2];
    local_c8 = param_2[1];
    local_d0 = *param_2;
    local_b8 = local_d8;
    local_90 = (undefined1 *)
               std::
               time_put<wchar_t,class_std::ostreambuf_iterator<wchar_t,struct_std::char_traits<wchar_t>_>_>
               ::put(local_98,local_48,local_68,param_1 + *(int *)(*(longlong *)param_1 + 4));
    cVar1 = FUN_180005740(local_90);
    if (cVar1 != '\0') {
      local_b4 = local_b4 | 4;
    }
  }
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),local_b4,false);
  local_88 = param_1;
  FUN_180005600(local_38);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_f8);
  return;
}




void FUN_180007e30(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  wchar_t *param_2)

{
  char cVar1;
  bool bVar2;
  __int64 _Var3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  uint local_88;
  wchar_t local_84;
  ushort local_82;
  ushort local_80;
  short local_7e;
  wchar_t local_7c;
  ushort local_7a;
  ushort local_78;
  short local_76 [3];
  longlong local_70;
  __uint64 local_68;
  uint local_60;
  longlong local_58;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_50;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_48;
  __uint64 local_40;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_38;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *local_30;
  undefined8 local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_68 = std::_WChar_traits<wchar_t>::length(param_2);
  _Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((_Var3 < 1) ||
     (_Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     _Var3 <= (longlong)local_68)) {
    local_58 = 0;
  }
  else {
    _Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_58 = _Var3 - local_68;
  }
  local_70 = local_58;
  FUN_180005640(local_20,param_1);
  cVar1 = FUN_1800055f0((longlong)local_20);
  if (cVar1 == '\0') {
    local_88 = local_88 | 4;
  }
  else {
    local_60 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((local_60 & 0x1c0) != 0x40) {
      for (; 0 < local_70; local_70 = local_70 + -1) {
        local_84 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::fill
                             ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_50 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                             ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_82 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                             (local_50,local_84);
        local_80 = local_82;
        uVar4 = FUN_180006860();
        local_7e = (short)uVar4;
        bVar2 = eq_int_type(&local_7e,(short *)&local_80);
        if (bVar2) {
          local_88 = local_88 | 4;
          break;
        }
      }
    }
    if (local_88 == 0) {
      local_48 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      local_40 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputn
                           (local_48,param_2,local_68);
      if (local_40 != local_68) {
        local_88 = local_88 | 4;
      }
    }
    if (local_88 == 0) {
      for (; 0 < local_70; local_70 = local_70 + -1) {
        local_7c = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::fill
                             ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_38 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                             ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_7a = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                             (local_38,local_7c);
        local_78 = local_7a;
        uVar4 = FUN_180006860();
        local_76[0] = (short)uVar4;
        bVar2 = eq_int_type(local_76,(short *)&local_78);
        if (bVar2) {
          local_88 = local_88 | 4;
          break;
        }
      }
    }
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),local_88,false);
  local_30 = param_1;
  FUN_180005600(local_20);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_180008210(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  undefined8 param_2)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  
  uVar1 = FUN_180003dc0(param_2);
  pwVar2 = (wchar_t *)FUN_180003de0(param_2);
  FUN_180009a30(param_1,pwVar2,uVar1);
  return;
}




basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_180008260(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  wchar_t wVar1;
  
  wVar1 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::widen
                    ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::put(param_1,wVar1);
  std::basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>::flush(param_1);
  return param_1;
}




void FUN_1800082b0(wchar_t *param_1,longlong param_2,__uint64 param_3,wchar_t *param_4,
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
  local_18 = DAT_180013010 ^ (ulonglong)auStackY_168;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_5 != 0) && (param_2 != 0)) {
    FUN_180008440(local_118);
    uVar2 = FUN_180009130((longlong)local_118,(ushort *)local_res20,
                          (ushort *)(local_res20 + param_5));
    if ((uVar2 & 0xff) == 0) {
      puVar5 = local_138;
      for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_180009670(param_1,param_2,local_res18,local_res20,param_5);
    }
    else {
      local_128[0] = param_2 - 1;
      p_Var3 = std::_Min_value<unsigned___int64>(&local_res18,local_128);
      local_130 = param_1 + *p_Var3;
      while ((cVar1 = FUN_1800090e0((longlong)local_118,*local_130), cVar1 == '\0' &&
             (local_130 != param_1))) {
        local_130 = local_130 + -1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_168);
  return;
}




undefined1 * FUN_180008440(undefined1 *param_1)

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




longlong FUN_180008460(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_180001510(param_2);
  FUN_180009e10(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




void FUN_1800084a0(void)

{
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
  FUN_180009060(param_2,0);
  return;
}




void FUN_1800084d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_180001040(0x28,param_2);
  puVar2 = (undefined4 *)FUN_180001510(param_3);
  FUN_1800090a0(puVar1,puVar2);
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
  FUN_180009e50();
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

longlong _Compressed_pair<><>(longlong param_1)

{
  FUN_180001510(param_1);
  _String_val<>(param_1);
  return param_1;
}




void FUN_180008580(undefined8 param_1,ulonglong param_2,undefined1 param_3,wchar_t param_4)

{
  ulonglong uVar1;
  __uint64 _Var2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  undefined1 local_res18 [8];
  wchar_t local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  local_res18[0] = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180007340(param_1);
  if (uVar1 < param_2) {
    FUN_1800093b0();
  }
  local_38 = (undefined8 *)FUN_180005570(param_1);
  local_20 = local_38[3];
  local_28 = FUN_1800093d0(param_1,param_2);
  local_30 = FUN_180005570(param_1);
  _Var2 = local_28 + 1;
  if (local_28 == -1) {
    _Var2 = 0xffffffffffffffff;
  }
  local_18 = allocate(local_30,_Var2);
  FUN_180001430();
  local_38[2] = param_2;
  local_38[3] = local_28;
  pwVar3 = (wchar_t *)FUN_180001510(local_18);
  FID_conflict_operator__(local_res18,pwVar3,param_2,local_res20);
  if (local_20 < 8) {
    uVar4 = FUN_180001510(local_38);
    construct<>(local_30,uVar4,&local_18);
  }
  else {
    deallocate(local_30,(void *)*local_38,local_20 + 1);
    *local_38 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1800086e0(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  __uint64 _Var2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  local_res18[0] = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180007340(param_1);
  if (uVar1 < param_2) {
    FUN_1800093b0();
  }
  local_38 = (undefined8 *)FUN_180005570(param_1);
  local_20 = local_38[3];
  local_28 = FUN_1800093d0(param_1,param_2);
  local_30 = FUN_180005570(param_1);
  _Var2 = local_28 + 1;
  if (local_28 == -1) {
    _Var2 = 0xffffffffffffffff;
  }
  local_18 = allocate(local_30,_Var2);
  FUN_180001430();
  local_38[2] = param_2;
  local_38[3] = local_28;
  puVar3 = (undefined1 *)FUN_180001510(local_18);
  FID_conflict_operator__(local_res18,puVar3,param_2,local_res20);
  if (local_20 < 8) {
    uVar4 = FUN_180001510(local_38);
    construct<>(local_30,uVar4,&local_18);
  }
  else {
    deallocate(local_30,(void *)*local_38,local_20 + 1);
    *local_38 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char * __ptr64,char * __ptr64 const & __ptr64>(class std::allocator<char> &
   __ptr64,char * __ptr64 * __ptr64 const,char * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned short>
   >::construct<unsigned short * __ptr64,unsigned short * __ptr64 const & __ptr64>(class
   std::allocator<unsigned short> & __ptr64,unsigned short * __ptr64 * __ptr64 const,unsigned short
   * __ptr64 const & __ptr64)
    public: static void __cdecl std::_Default_allocator_traits<class std::allocator<wchar_t>
   >::construct<wchar_t * __ptr64,wchar_t * __ptr64 const & __ptr64>(class std::allocator<wchar_t> &
   __ptr64,wchar_t * __ptr64 * __ptr64 const,wchar_t * __ptr64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void construct<>(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180001040(8,param_2);
  puVar2 = (undefined8 *)FUN_180001510(param_3);
  *puVar1 = *puVar2;
  return;
}




void FUN_180008890(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  local_res18[0] = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180005f10(param_1);
  if (uVar1 < param_2) {
    FUN_1800093b0();
  }
  local_38 = (undefined8 *)FUN_180005570(param_1);
  local_20 = local_38[3];
  local_28 = FUN_1800094b0(param_1,param_2);
  local_30 = FUN_180005570(param_1);
  lVar2 = local_28 + 1;
  if (local_28 == -1) {
    lVar2 = -1;
  }
  local_18 = allocate(local_30,lVar2);
  FUN_180001430();
  local_38[2] = param_2;
  local_38[3] = local_28;
  puVar3 = (undefined1 *)FUN_180001510(local_18);
  FUN_1800060f0(local_res18,puVar3,param_2,local_res20);
  if (local_20 < 0x10) {
    uVar4 = FUN_180001510(local_38);
    construct<>(local_30,uVar4,&local_18);
  }
  else {
    FUN_180006830(local_30,(void *)*local_38,local_20 + 1);
    *local_38 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1800089f0(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined1 auStackY_88 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStackY_88;
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar4 = (undefined8 *)FUN_180005570(param_1);
  lVar1 = puVar4[2];
  lVar5 = FUN_180005f10(param_1);
  if ((ulonglong)(lVar5 - lVar1) < param_2) {
    FUN_1800093b0();
  }
  uVar2 = puVar4[3];
  lVar5 = FUN_1800094b0(param_1,lVar1 + param_2);
  uVar6 = FUN_180005570(param_1);
  lVar7 = lVar5 + 1;
  if (lVar5 == -1) {
    lVar7 = -1;
  }
  local_18 = allocate(uVar6,lVar7);
  FUN_180001430();
  puVar4[2] = lVar1 + param_2;
  puVar4[3] = lVar5;
  puVar8 = (undefined1 *)FUN_180001510(local_18);
  if (uVar2 < 0x10) {
    FID_conflict_operator__(local_res18,puVar8,(undefined1 *)puVar4,lVar1,local_res20,param_5);
    uVar10 = FUN_180001510(puVar4);
    construct<>(uVar6,uVar10,&local_18);
  }
  else {
    pvVar3 = (void *)*puVar4;
    puVar9 = (undefined1 *)FUN_180001510(pvVar3);
    FID_conflict_operator__(local_res18,puVar8,puVar9,lVar1,local_res20,param_5);
    FUN_180006830(uVar6,pvVar3,uVar2 + 1);
    *puVar4 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_88);
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
      pvVar1 = (void *)FUN_180001520(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_180009e60(param_1);
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
    FUN_180001540((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate_plain<class std::allocator<struct std::_Container_proxy>,0>(class
   std::allocator<struct std::_Container_proxy> & __ptr64,struct std::_Container_proxy * __ptr64
   const)
    void __cdecl std::_Deallocate_plain<class std::allocator<struct std::_Container_proxy> >(class
   std::allocator<struct std::_Container_proxy> & __ptr64,struct std::_Container_proxy * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _Deallocate_plain<>(allocator<struct_std::_Container_proxy> *param_1,_Container_proxy *param_2)

{
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::deallocate
            (param_1,param_2,1);
  return;
}




undefined8 * FUN_180008d00(undefined8 *param_1)

{
  FUN_180001510(param_1);
  FUN_180009310(param_1);
  return param_1;
}




void FUN_180008d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined1 local_37;
  void *local_30;
  void *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180013010 ^ (ulonglong)auStack_68;
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = (void *)FUN_180001510(param_1);
  local_20 = FUN_180001510(param_2);
  FUN_180008e10((longlong *)&local_30,&local_20);
  local_28 = (void *)select_on_container_copy_construction(local_res18);
  puVar1 = (undefined1 *)FUN_180009f20(&local_38);
  local_40 = local_37;
  local_48 = *puVar1;
  uVar2 = FUN_180009f40(local_30,local_20,local_28);
  FUN_180009f80(&local_res18,uVar2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_180008e10(longlong *param_1,longlong *param_2)

{
  FUN_180009ef0(param_1,param_2);
  return;
}




void FUN_180008e40(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180009fa0(param_1,param_2);
  return;
}




void FUN_180008e90(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_180009fe0();
  return;
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




longlong FUN_180008f30(ulonglong param_1)

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
  
  puVar1 = (undefined1 *)FUN_180001040(0x10,param_2);
  puVar2 = (undefined1 *)FUN_180001510(param_3);
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




undefined8 * FUN_180009020(undefined8 *param_1,longlong param_2)

{
  FUN_180001120(param_1,param_2);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




void * FUN_180009060(void *param_1,uint param_2)

{
  FUN_180002c80((longlong)param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 * FUN_1800090a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  basic_string<>((longlong)(param_1 + 2),param_2 + 2);
  return param_1;
}




undefined1 FUN_1800090e0(longlong param_1,ushort param_2)

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




undefined8 FUN_180009130(longlong param_1,ushort *param_2,ushort *param_3)

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




void FUN_180009190(unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   *param_1)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           get(param_1);
  if (p_Var1 != (_Facet_base *)0x0) {
    p_Var1 = std::
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             ::get(param_1);
    uVar2 = FUN_180005570(param_1);
    FUN_1800095b0(uVar2,p_Var1);
  }
  return;
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
  puVar2 = (undefined8 *)FUN_180005570(this);
  *puVar2 = 0;
  return p_Var1;
}




void FUN_180009220(unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   *param_1)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           get(param_1);
  if (p_Var1 != (_Facet_base *)0x0) {
    p_Var1 = std::
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             ::get(param_1);
    uVar2 = FUN_180005570(param_1);
    FUN_180009610(uVar2,(undefined8 *)p_Var1);
  }
  return;
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




undefined8 * FUN_1800092a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_1[1];
  while (*(short *)param_1[2] != 0) {
    param_1[2] = param_1[2] + 2;
  }
  return param_1;
}




undefined8 * FUN_180009310(undefined8 *param_1)

{
  FUN_180001470(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
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
  FUN_180001510(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




void FUN_1800093b0(void)

{
  std::_Xlength_error("string too long");
  return;
}




void FUN_1800093d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  local_38 = FUN_180007340(param_1);
  local_28 = FUN_180005570(param_1);
  local_18 = param_2 | 7;
  if ((local_18 <= local_38) &&
     (local_30 = *(ulonglong *)(local_28 + 0x18), local_30 <= local_38 - local_30 / 2)) {
    local_20 = local_30 + local_30 / 2;
    _Max_value<>(&local_18,&local_20);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1800094b0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180013010 ^ (ulonglong)auStack_58;
  local_38 = FUN_180005f10(param_1);
  local_28 = FUN_180005570(param_1);
  local_18 = param_2 | 0xf;
  if ((local_18 <= local_38) &&
     (local_30 = *(ulonglong *)(local_28 + 0x18), local_30 <= local_38 - local_30 / 2)) {
    local_20 = local_30 + local_30 / 2;
    _Max_value<>(&local_18,&local_20);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
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
  
  puVar1 = (undefined8 *)FUN_180005570(this);
  return (_Facet_base *)*puVar1;
}




void FUN_1800095b0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_180009610(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}




longlong FUN_180009670(wchar_t *param_1,longlong param_2,__uint64 param_3,wchar_t *param_4,
                      size_t param_5)

{
  __uint64 *p_Var1;
  longlong lVar2;
  __uint64 local_res18;
  wchar_t *local_res20;
  wchar_t *local_18;
  __uint64 local_10 [2];
  
  if ((param_5 == 0) || (param_2 == 0)) {
LAB_180009717:
    lVar2 = -1;
  }
  else {
    local_10[0] = param_2 - 1;
    local_res18 = param_3;
    local_res20 = param_4;
    p_Var1 = std::_Min_value<unsigned___int64>(&local_res18,local_10);
    local_18 = param_1 + *p_Var1;
    while (lVar2 = FUN_18000a050(local_res20,param_5,local_18), lVar2 == 0) {
      if (local_18 == param_1) goto LAB_180009717;
      local_18 = local_18 + -1;
    }
    lVar2 = (longlong)local_18 - (longlong)param_1 >> 1;
  }
  return lVar2;
}




_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
* FUN_180009730(_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
                *param_1,undefined8 param_2)

{
  FUN_18000a1a0(param_1,param_2);
  return param_1;
}




_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
* FUN_1800097b0(_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
                *param_1,undefined8 param_2,undefined8 param_3)

{
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  p_Var1 = (_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *)
           operator_new(0x10);
  if (p_Var1 == (_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
                 *)0x0) {
    local_18 = (_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
                *)0x0;
  }
  else {
    uVar2 = FUN_180001510(param_3);
    uVar3 = FUN_180001510(param_2);
    local_18 = FUN_18000a1d0(p_Var1,uVar3,uVar2);
  }
  FUN_180009730(param_1,local_18);
  return param_1;
}




void FUN_180009850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  Logger local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_180013010 ^ (ulonglong)auStack_68;
  Logger::__autoclassinit2(local_40,0x28);
  uVar1 = FUN_180001510(param_2);
  FUN_18000a240((undefined8 *)local_40,uVar1);
  FUN_180002370((longlong)local_40,param_1);
  FUN_18000a000((longlong)local_40);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_1800098d0(locale *param_1)

{
  __uint64 _Var1;
  undefined1 auStack_88 [32];
  _Facet_base *local_68;
  _Facet_base *local_60;
  __uint64 local_58;
  _Facet_base *local_50;
  undefined8 local_48;
  exception local_40 [24];
  _Facet_base *local_28;
  _Lockit local_20 [8];
  Logger local_18 [8];
  ulonglong local_10;
  
  local_48 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_88;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_180013b90;
  local_58 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  local_60 = (_Facet_base *)FUN_180001780((longlong)param_1,local_58);
  if (local_60 == (_Facet_base *)0x0) {
    if (local_28 == (_Facet_base *)0x0) {
      _Var1 = std::
              time_put<wchar_t,class_std::ostreambuf_iterator<wchar_t,struct_std::char_traits<wchar_t>_>_>
              ::_Getcat((facet **)&local_28,param_1);
      if (_Var1 == 0xffffffffffffffff) {
        FID_conflict_bad_cast(local_40);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_40,(ThrowInfo *)&DAT_180010490);
      }
      local_68 = local_28;
      Logger::__autoclassinit2(local_18,8);
      FUN_180009730((_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
                     *)local_18,local_68);
      std::_Facet_Register(local_68);
      (**(code **)(*(longlong *)local_68 + 8))(local_68);
      DAT_180013b90 = local_28;
      local_60 = local_28;
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      release((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
               *)local_18);
      FUN_180009220((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                     *)local_18);
    }
    else {
      local_60 = local_28;
    }
  }
  local_50 = local_60;
  std::_Lockit::~_Lockit(local_20);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_88);
  return;
}




void FUN_180009a30(basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  wchar_t *param_2,ulonglong param_3)

{
  char cVar1;
  bool bVar2;
  __int64 _Var3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  uint local_88;
  wchar_t local_84;
  ushort local_82;
  ushort local_80;
  short local_7e;
  wchar_t local_7c;
  ushort local_7a;
  ushort local_78;
  short local_76 [3];
  longlong local_70;
  uint local_68;
  longlong local_60;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_58;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_50;
  ulonglong local_48;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_40;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_18 = DAT_180013010 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  _Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((_Var3 < 1) ||
     (uVar4 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     uVar4 <= param_3)) {
    local_60 = 0;
  }
  else {
    _Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_60 = _Var3 - param_3;
  }
  local_70 = local_60;
  FUN_180005640(local_28,param_1);
  cVar1 = FUN_1800055f0((longlong)local_28);
  if (cVar1 == '\0') {
    local_88 = local_88 | 4;
    goto LAB_180009da2;
  }
  local_68 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((local_68 & 0x1c0) != 0x40) {
    for (; local_70 != 0; local_70 = local_70 + -1) {
      local_84 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::fill
                           ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      local_58 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      local_82 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                           (local_58,local_84);
      local_80 = local_82;
      uVar5 = FUN_180006860();
      local_7e = (short)uVar5;
      bVar2 = eq_int_type(&local_7e,(short *)&local_80);
      if (bVar2) {
        local_88 = local_88 | 4;
        break;
      }
    }
  }
  if (local_88 == 0) {
    local_50 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                         ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                          (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_48 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputn
                         (local_50,param_2,param_3);
    if (local_48 == param_3) goto LAB_180009cc4;
    local_88 = local_88 | 4;
  }
  else {
LAB_180009cc4:
    for (; local_70 != 0; local_70 = local_70 + -1) {
      local_7c = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::fill
                           ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      local_40 = std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::rdbuf
                           ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      local_7a = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::sputc
                           (local_40,local_7c);
      local_78 = local_7a;
      uVar5 = FUN_180006860();
      local_76[0] = (short)uVar5;
      bVar2 = eq_int_type(local_76,(short *)&local_78);
      if (bVar2) {
        local_88 = local_88 | 4;
        break;
      }
    }
  }
  std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
LAB_180009da2:
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),local_88,false);
  local_38 = param_1;
  FUN_180005600(local_28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}




longlong FUN_180009e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180001510(param_3);
  _String_val<>(param_1);
  return param_1;
}




void FUN_180009e50(void)

{
  return;
}




ulonglong FUN_180009e60(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_180001520(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




longlong FUN_180009ef0(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 3;
}




undefined8 FUN_180009f20(undefined8 param_1)

{
  return param_1;
}




void FUN_180009f40(void *param_1,longlong param_2,void *param_3)

{
  FUN_18000a290(param_1,param_2,param_3);
  return;
}




void FUN_180009f80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_180009fa0(undefined1 *param_1,longlong param_2)

{
  FUN_18000a300(param_1,(longlong)(param_1 + param_2 * 8));
  return;
}




void FUN_180009fe0(void)

{
  return;
}




void FUN_18000a000(longlong param_1)

{
  FUN_180009190((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)(param_1 + 0x20));
  FUN_1800022c0(param_1);
  return;
}




void FUN_18000a030(longlong param_1)

{
  FUN_18000a080(param_1);
  return;
}




void FUN_18000a050(wchar_t *param_1,size_t param_2,wchar_t *param_3)

{
  wmemchr(param_1,*param_3,param_2);
  return;
}




void FUN_18000a080(longlong param_1)

{
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_> *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  Logger local_18 [8];
  ulonglong local_10;
  
  local_20 = 0xfffffffffffffffe;
  local_10 = DAT_180013010 ^ (ulonglong)auStack_48;
  Logger::__autoclassinit2(local_18,8);
  puVar1 = (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_> *
           )FUN_180001510(param_1 + 0x20);
  FUN_18000a140((undefined8 *)local_18,puVar1);
  FUN_1800023c0(param_1);
  lVar2 = FUN_18000a120((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                         *)local_18);
  FUN_18000a350(lVar2);
  _Cnd_do_broadcast_at_thread_exit();
  FUN_180009190((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)local_18);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}




void FUN_18000a120(unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   *param_1)

{
  std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::get
            (param_1);
  return;
}




undefined8 *
FUN_18000a140(undefined8 *param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  _Facet_base *p_Var2;
  
  uVar1 = FUN_180005570(param_2);
  uVar1 = FUN_180001510(uVar1);
  p_Var2 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_18000a3a0(param_1,p_Var2,uVar1);
  return param_1;
}




_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
* FUN_18000a1a0(_Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
                *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 local_18;
  
  local_res10[0] = param_2;
  std::
  _Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1>
  ::
  _Compressed_pair<struct_std::default_delete<class_std::_Facet_base>,class_std::_Facet_base*___ptr64,1><class_std::_Facet_base*___ptr64&___ptr64>
            (param_1,local_18,local_res10);
  return param_1;
}




_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *
FUN_18000a1d0(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
              *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pbVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = 0;
    pbVar3 = pbVar3 + 1;
  }
  local_20 = FUN_180001510(param_3);
  uVar1 = FUN_180001510(param_2);
  FUN_18000a420(param_1,(ulonglong)local_28[0],uVar1,local_20);
  return param_1;
}




undefined8 * FUN_18000a240(undefined8 *param_1,undefined8 param_2)

{
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_> *puVar1;
  
  FUN_1800021d0((longlong)param_1);
  *param_1 = std::
             _LaunchPad<class_std::unique_ptr<class_std::tuple<void_(__cdecl_Logger::*)(void)___ptr64,class_Logger*___ptr64>,struct_std::default_delete<class_std::tuple<void_(__cdecl_Logger::*)(void)___ptr64,class_Logger*___ptr64>_>_>_>
             ::vftable;
  puVar1 = (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_> *
           )FUN_180001510(param_2);
  FUN_18000a140(param_1 + 4,puVar1);
  return param_1;
}




longlong FUN_18000a290(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}




longlong FUN_18000a300(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return param_2;
}




void FUN_18000a350(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_180001510(param_1);
  uVar1 = FUN_180001510(uVar1);
  lVar2 = FUN_18000a490(param_1);
  uVar3 = FUN_180001510(lVar2);
  FUN_18000a4a0(uVar3,uVar1);
  return;
}




undefined8 * FUN_18000a3a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  byte local_18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  uVar1 = FUN_180001510(param_3);
  FUN_18000a4e0(param_1,(ulonglong)local_18,uVar1,&local_res10);
  return param_1;
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
  
  puVar1 = (undefined8 *)FUN_180001510(param_3);
  *(undefined8 *)this = *puVar1;
  return this;
}




_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *
FUN_18000a420(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
              *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  _func_bool_agent_status_ptr **pp_Var2;
  longlong lVar3;
  byte *pbVar4;
  byte local_18 [16];
  
  pbVar4 = local_18;
  for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = 0;
    pbVar4 = pbVar4 + 1;
  }
  uVar1 = FUN_180001510(param_4);
  FUN_18000a550(param_1,(ulonglong)local_18[0],uVar1);
  pp_Var2 = (_func_bool_agent_status_ptr **)FUN_180001510(param_3);
  std::_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>::
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0><bool_(__cdecl*const&___ptr64)(enum_Concurrency::agent_status_const&___ptr64)>
            (param_1 + 8,pp_Var2);
  return param_1;
}




longlong FUN_18000a490(longlong param_1)

{
  return param_1 + 8;
}




void FUN_18000a4a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180001510(param_2);
  puVar2 = (undefined8 *)FUN_180001510(param_1);
  FUN_18000a520((undefined *)*puVar2,uVar1);
  return;
}




undefined8 *
FUN_18000a4e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  FUN_180001510(param_3);
  puVar1 = (undefined8 *)FUN_180001510(param_4);
  *param_1 = *puVar1;
  return param_1;
}




void FUN_18000a520(undefined *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180001510(param_2);
  (*(code *)param_1)(*puVar1);
  return;
}




_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *
FUN_18000a550(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
              *param_1,undefined8 param_2,undefined8 param_3)

{
  _func_bool_agent_status_ptr **pp_Var1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_18000a5e0(param_1);
  pp_Var1 = (_func_bool_agent_status_ptr **)FUN_180001510(param_3);
  std::_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>::
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0><bool_(__cdecl*const&___ptr64)(enum_Concurrency::agent_status_const&___ptr64)>
            (param_1,pp_Var1);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::_Callable_base<bool (__cdecl*const)(enum Concurrency::agent_status const &
   __ptr64),0>::_Callable_base<bool (__cdecl*const)(enum Concurrency::agent_status const &
   __ptr64),0><bool (__cdecl*const & __ptr64)(enum Concurrency::agent_status const & __ptr64)>(bool
   (__cdecl*const & __ptr64)(enum Concurrency::agent_status const & __ptr64)) __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> * __thiscall
std::_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>::
_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0><bool_(__cdecl*const&___ptr64)(enum_Concurrency::agent_status_const&___ptr64)>
          (_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
           *this,_func_bool_agent_status_ptr **param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180001510(param_1);
  *(undefined8 *)this = *puVar1;
  return this;
}




undefined8 FUN_18000a5e0(undefined8 param_1)

{
  return param_1;
}




void FUN_18000a5f0(longlong param_1,uint param_2)

{
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _scalar_deleting_destructor_
            ((basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180013010) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    FUN_18000b3fc();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18000b3dc();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




undefined8 * FUN_18000a678(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_18000a6a4(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180013540,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18000a7f6;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180013570 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180013570 != (HANDLE)0x0) goto LAB_18000a794;
  }
  else {
    DAT_180013570 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180013568);
    bVar7 = 0x40 - ((byte)DAT_180013010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180013578 = DAT_180013010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180013580 = DAT_180013010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18000a794:
    uVar6 = FUN_18000aba4(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18000a804);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18000a7f6:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_18000a804(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
  if (DAT_180013570 != (HANDLE)0x0) {
    CloseHandle(DAT_180013570);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
  uVar1 = (ulonglong)_tls_index;
  DAT_180013000 = DAT_180013000 + 1;
  *param_1 = DAT_180013000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180013000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000a910:
                    /* WARNING: Could not recover jumptable at 0x00018000a91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180013000;
      goto LAB_18000a910;
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
  
  if (DAT_180013570 != (HANDLE)0x0) {
    SetEvent(DAT_180013570);
                    /* WARNING: Could not recover jumptable at 0x00018000a96d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180013570);
    return;
  }
  bVar1 = (byte)DAT_180013010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018000bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180013010 ^ _DAT_180013580) >> bVar1 |
            (DAT_180013010 ^ _DAT_180013580) << 0x40 - bVar1))(&DAT_180013568);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180013570 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
    WaitForSingleObjectEx(DAT_180013570,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018000a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180013540);
    return;
  }
  bVar1 = (byte)DAT_180013010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018000bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180013010 ^ _DAT_180013578) >> bVar1 |
            (DAT_180013010 ^ _DAT_180013578) << 0x40 - bVar1))
            (&DAT_180013568,&DAT_180013540,param_1);
  return;
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
LAB_18000aa1a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180013590 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180013590;
        pvVar1 = DAT_180013590;
      }
      DAT_180013590 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000aa1a;
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
    uVar3 = FUN_18000b6f0();
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
  
  uVar1 = FUN_18000aba4(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18000b9dc();
  if (cVar1 != '\0') {
    cVar1 = FUN_18000b9dc();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18000b9dc();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18000b9dc();
  FUN_18000b9dc();
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
    _execute_onexit_table(&DAT_1800135a0);
    return;
  }
  uVar2 = FUN_18000b9e0();
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
  FUN_18000b9dc();
  FUN_18000b9dc();
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
    DAT_180013598 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_18000b9dc();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000b9dc();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000b9dc();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000aba4(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180013599 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180013010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180013010;
      _DAT_1800135a0 = in_RAX;
      uRam00000001800135a8 = in_RAX;
      _DAT_1800135b0 = in_RAX;
      _DAT_1800135b8 = in_RAX;
      uRam00000001800135c0 = in_RAX;
      _DAT_1800135c8 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1800135a0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1800135b8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180013599 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000ad0a) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1800002f8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_18000acf3;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000acf3:
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
    DAT_180013590 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180013598 == '\0') || (param_2 == '\0')) {
    FUN_18000b9dc();
    FUN_18000b9dc();
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
  
  bVar2 = (byte)DAT_180013010 & 0x3f;
  if (((DAT_180013010 ^ _DAT_1800135a0) >> bVar2 | (DAT_180013010 ^ _DAT_1800135a0) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1800135a0,_Func);
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
    if (DAT_1800135d0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_1800135d0 = DAT_1800135d0 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180013588 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_18000b7c0();
      FID_conflict__RTC_Initialize();
      DAT_180013588 = 0;
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
    if (DAT_180013588 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180013588 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_18000b7b0();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18000d498,&DAT_18000d4a8);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18000d480,&DAT_18000d490);
        DAT_180013588 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_18000b7f8();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_1800135d0 = DAT_1800135d0 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000b090) */
/* WARNING: Removing unreachable block (ram,0x00018000b01f) */
/* WARNING: Removing unreachable block (ram,0x00018000b0d3) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_1800135d0 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180001010();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180001010();
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




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00018000b16d. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18000b19e;
  capture_previous_context((PCONTEXT)&DAT_180013680);
  _DAT_1800135f0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180013718 = puVar3 + 0x40;
  _DAT_180013700 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800135e0 = 0xc0000409;
  _DAT_1800135e4 = 1;
  _DAT_1800135f8 = 1;
  DAT_180013600 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180013010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180013008;
  *(undefined8 *)(puVar3 + -8) = 0x18000b240;
  DAT_180013778 = _DAT_1800135f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000d5f0);
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




undefined8 * FUN_18000b2c4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000b304(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000b324(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000b364(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000b398(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000b3dc(void)

{
  undefined8 local_28 [5];
  
  FUN_18000b304(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180010388);
}




void FUN_18000b3fc(void)

{
  undefined8 local_28 [5];
  
  FUN_18000b364(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800103e8);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b41c(void)

{
  _DAT_180013b50 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18000b457;
  FUN_18000b41c();
  *(undefined8 *)(puVar4 + -8) = 0x18000b468;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000b472;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18000b48c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000b4cd;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000b4ff;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000b521;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000b542;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000b54d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000b55d;
    FUN_18000b41c();
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000b642) */
/* WARNING: Removing unreachable block (ram,0x00018000b5c0) */
/* WARNING: Removing unreachable block (ram,0x00018000b59b) */
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
  
  DAT_18001301c = 2;
  _DAT_180013018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180013020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180013b58 = DAT_180013b58 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180013b58 = DAT_180013b58 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180013018 = 2;
    DAT_18001301c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001301c = 0xe;
      _DAT_180013018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180013018 = 5;
        DAT_18001301c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000b6f0(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180013030 != 0;
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
  
  if (DAT_180013010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180013010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180013010 == 0x2b992ddfa232) {
      DAT_180013010 = 0x2b992ddfa233;
    }
  }
  DAT_180013008 = ~DAT_180013010;
  return;
}




void FUN_18000b7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000b7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180013b60);
  return;
}




void FUN_18000b7c0(void)

{
  __std_type_info_destroy_list(&DAT_180013b60);
  return;
}




undefined * FUN_18000b7cc(void)

{
  return &DAT_180013b70;
}




undefined * FUN_18000b7d4(void)

{
  return &DAT_180013b78;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000b7cc();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_18000b7d4();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_18000b7f8(void)

{
  return &DAT_180013cc0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000f2e8; puVar1 < &DAT_18000f2e8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18000f2f8; puVar1 < &DAT_18000f2f8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
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
  while (_Memory = DAT_180013b88, DAT_180013b88 != (undefined8 *)0x0) {
    puVar1 = DAT_180013b88 + 1;
    DAT_180013b88 = (undefined8 *)*DAT_180013b88;
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
    *puVar1 = DAT_180013b88;
    puVar1[1] = param_1;
  }
  DAT_180013b88 = puVar1;
  return;
}




undefined1 FUN_18000b9dc(void)

{
  return 1;
}




undefined8 FUN_18000b9e0(void)

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

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00018000bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_18000bb10(undefined8 param_1,longlong param_2)

{
  FUN_180004150(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_2 + 0x80));
  return;
}




void Unwind_18000bb2b(undefined8 param_1,longlong param_2)

{
  FUN_180004150((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x40));
  return;
}




void Unwind_18000bb50(undefined8 param_1,longlong param_2)

{
  FUN_180004150((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x60));
  return;
}




void Unwind_18000bb70(undefined8 param_1,longlong param_2)

{
  FUN_180004150((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x40));
  return;
}




void Unwind_18000bb90(undefined8 param_1,longlong param_2)

{
  FUN_180002160((char *)(param_2 + 0x38));
  return;
}




void Unwind_18000bba8(undefined8 param_1,longlong param_2)

{
  FUN_1800021a0((char *)(param_2 + 0x28));
  return;
}




void Unwind_18000bbc0(void)

{
  _Init_thread_abort(&DAT_180013ba4);
  return;
}




void Unwind_18000bbe0(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_18000bbfc(undefined8 param_1,longlong param_2)

{
  FUN_1800028d0(*(longlong *)(param_2 + 0x40) + 0x28);
  return;
}




void Unwind_18000bc18(undefined8 param_1,longlong param_2)

{
  FUN_180002a10(*(longlong *)(param_2 + 0x40) + 0x78);
  return;
}




void Unwind_18000bc40(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0x148));
  return;
}




void Unwind_18000bc5b(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_18000bc76(undefined8 param_1,longlong param_2)

{
  std::lock_guard<class_std::mutex>::~lock_guard<class_std::mutex>
            ((lock_guard<class_std::mutex> *)(param_2 + 0x108));
  return;
}




void Unwind_18000bc91(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000bca9(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(param_2 + 0xa8);
  return;
}




void Unwind_18000bcc4(undefined8 param_1,longlong param_2)

{
  FUN_180002c80(param_2 + 0x80);
  return;
}




void Unwind_18000bce0(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_18000bcfb(undefined8 param_1,longlong param_2)

{
  std::lock_guard<class_std::mutex>::~lock_guard<class_std::mutex>
            ((lock_guard<class_std::mutex> *)(param_2 + 0x58));
  return;
}




void Unwind_18000bd20(undefined8 param_1,longlong param_2)

{
  std::unique_lock<class_std::mutex>::~unique_lock<class_std::mutex>
            ((unique_lock<class_std::mutex> *)(param_2 + 0x60));
  return;
}




void Unwind_18000bd38(undefined8 param_1,longlong param_2)

{
  FUN_180002c80(param_2 + 0x70);
  return;
}




void Unwind_18000bd50(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_18000bd70(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(param_2 + 0x58);
  return;
}




void Unwind_18000bd90(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0x1e0));
  return;
}




void Unwind_18000bdab(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(*(undefined8 *)(param_2 + 0x1d8));
  return;
}




void Unwind_18000bdc6(undefined8 param_1,longlong param_2)

{
  FUN_1800039d0(param_2 + 0x80);
  return;
}




void Unwind_18000bde1(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(param_2 + 0x40);
  return;
}




void Unwind_18000be00(void)

{
  FUN_180004df0();
  return;
}




void Unwind_18000be20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
               (*(longlong *)(param_2 + 0x40) + 0x98));
  }
  return;
}




void Unwind_18000be4e(undefined8 param_1,longlong param_2)

{
  std::basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_18000be70(void)

{
  FUN_180006a10();
  return;
}




void Unwind_18000be90(undefined8 param_1,longlong param_2)

{
  FUN_180007200(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_18000beb0(undefined8 param_1,longlong param_2)

{
  FUN_180003ed0(param_2 + 0x48);
  return;
}




void Unwind_18000bed0(undefined8 param_1,longlong param_2)

{
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)(param_2 + 0x40));
  return;
}




void Unwind_18000bef0(void)

{
  FUN_180001430();
  return;
}




void Unwind_18000bf10(undefined8 param_1,longlong param_2)

{
  FUN_180009190((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)(param_2 + 0x38));
  return;
}




void Unwind_18000bf30(undefined8 param_1,longlong param_2)

{
  FUN_180005600((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_18000bf4b(undefined8 param_1,longlong param_2)

{
  FUN_180001700(param_2 + 0x80);
  return;
}




undefined8 Catch_All_18000bf66(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0x100) +
             (longlong)*(int *)(**(longlong **)(param_2 + 0x100) + 4)),4,true);
  return 0x180007dc5;
}




void Unwind_18000bfb0(undefined8 param_1,longlong param_2)

{
  FUN_180005600((longlong *)(param_2 + 0x88));
  return;
}




undefined8 Catch_All_18000bfcb(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0xb0) +
             (longlong)*(int *)(**(longlong **)(param_2 + 0xb0) + 4)),4,true);
  return 0x1800081ac;
}




void Unwind_18000c020(undefined8 param_1,longlong param_2)

{
  FUN_18000a000(param_2 + 0x28);
  return;
}




void Unwind_18000c040(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x68));
  return;
}




void Unwind_18000c059(undefined8 param_1,longlong param_2)

{
  FUN_180009220((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)(param_2 + 0x70));
  return;
}




void Unwind_18000c080(undefined8 param_1,longlong param_2)

{
  FUN_180005600((longlong *)(param_2 + 0x80));
  return;
}




undefined8 Catch_All_18000c09b(undefined8 param_1,longlong param_2)

{
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0xb0) +
             (longlong)*(int *)(**(longlong **)(param_2 + 0xb0) + 4)),4,true);
  return 0x180009da2;
}




void FUN_18000c0fb(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_18000c112(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18000c12e(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_18000c170(void)

{
  Logger::~Logger((Logger *)&DAT_180013bb0);
  return;
}



