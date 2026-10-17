
undefined8 FUN_140001040(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_140001050(char *param_1,int param_2)

{
  strrchr(param_1,param_2);
  return;
}




void FUN_140001080(char *param_1,char *param_2)

{
  strstr(param_1,param_2);
  return;
}




void FUN_1400010b0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_48;
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




undefined8 * FUN_140001180(undefined8 *param_1,longlong param_2)

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




void FUN_1400011e0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




char * FUN_140001210(longlong param_1)

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




undefined8 * FUN_140001250(undefined8 *param_1,uint param_2)

{
  FUN_1400011e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined1 * FUN_140001290(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




void FUN_1400012c0(void *param_1,void *param_2,longlong param_3)

{
  memmove(param_1,param_2,param_3 << 1);
  return;
}




undefined8 FUN_140001300(void)

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




undefined1 * FUN_140001350(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




undefined1 * FUN_1400013b0(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}




void FUN_1400013e0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
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




undefined8 FUN_140001440(void)

{
  return 0xffffffff;
}




void FUN_140001450(void)

{
  return;
}




void FUN_140001460(void)

{
  return;
}




undefined8 FUN_140001470(undefined8 param_1)

{
  return param_1;
}




void FUN_140001480(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_1400014a0(longlong *param_1,longlong *param_2)

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




undefined8 * FUN_140001540(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140004910(param_2);
  FUN_1400010b0(param_1,uVar1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}




undefined8 * FUN_140001580(undefined8 *param_1,uint param_2)

{
  FUN_1400015c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1400015c0(undefined8 *param_1)

{
  FUN_1400011e0(param_1);
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
  FUN_140001180(param_1,param_2);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}




void FUN_140001660(longlong param_1)

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




longlong FUN_1400016f0(longlong param_1,ulonglong param_2)

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
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

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




undefined4 FUN_140001840(undefined4 *param_1)

{
  return *param_1;
}




undefined8 FUN_140001850(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8
FUN_140001860(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_140001850((longlong)param_1);
  pcVar1 = *(code **)(*plVar3 + 0x10);
  uVar2 = FUN_140001840(param_1);
  (*pcVar1)(plVar3,param_2,uVar2);
  return param_2;
}




/* Library Function - Single Match
    bool __cdecl std::operator==(class std::error_condition const & __ptr64,class
   std::error_condition const & __ptr64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool __cdecl std::operator==(error_condition *param_1,error_condition *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  error_category *this;
  error_category *peVar4;
  
  this = (error_category *)FUN_140001850((longlong)param_1);
  peVar4 = (error_category *)FUN_140001850((longlong)param_2);
  bVar1 = error_category::operator==(this,peVar4);
  if (bVar1) {
    iVar2 = FUN_140001840((undefined4 *)param_1);
    iVar3 = FUN_140001840((undefined4 *)param_2);
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




void FUN_140001980(longlong *param_1,undefined4 param_2,error_condition *param_3)

{
  error_condition *peVar1;
  undefined1 local_20 [32];
  
  peVar1 = (error_condition *)(**(code **)(*param_1 + 0x18))(param_1,local_20,param_2);
  std::operator==(peVar1,param_3);
  return;
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
  
  peVar3 = (error_category *)FUN_140001850((longlong)param_1);
  bVar1 = operator==(this,peVar3);
  if ((bVar1) && (iVar2 = FUN_140001840((undefined4 *)param_1), iVar2 == param_2)) {
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




longlong FUN_140001a60(longlong param_1,undefined4 *param_2,
                      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [48];
  
  pbVar3 = param_3;
  bVar1 = FUN_140004020(param_3);
  if (!bVar1) {
    FUN_140004b50(param_3,": ");
  }
  uVar2 = FUN_140001860(param_2,local_30,pbVar3,param_4);
  FUN_140004b90(param_3,uVar2);
  FUN_140004c80(local_30);
  FUN_140004cb0(param_1,param_3);
  FUN_140004c80(param_3);
  return param_1;
}




undefined8 *
FUN_140001b30(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  undefined1 local_38 [40];
  
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           basic_string<>((longlong)local_38,param_3);
  puVar3 = param_2;
  puVar4 = local_78;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_78;
  puVar5 = local_68;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = (undefined4 *)((longlong)puVar5 + 1);
  }
  lVar2 = FUN_140001a60((longlong)local_58,local_68,pbVar1,param_4);
  FUN_140001540(param_1,lVar2);
  FUN_140004c80(local_58);
  *param_1 = std::_System_error::vftable;
  puVar6 = param_1 + 3;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = (undefined8 *)((longlong)puVar6 + 1);
  }
  return param_1;
}




undefined8 * FUN_140001c30(undefined8 *param_1,uint param_2)

{
  FUN_140001c70(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140001c70(undefined8 *param_1)

{
  FUN_1400015c0(param_1);
  return;
}




undefined8 *
FUN_140001c90(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_140001b30(param_1,local_48,local_38,param_4);
  FUN_140004c80(local_38);
  *param_1 = std::system_error::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::ios_base::failure::failure(char const * __ptr64,class std::error_code const
   & __ptr64) __ptr64
   
   Libraries: Visual Studio 2010, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

failure * __thiscall
std::ios_base::failure::failure(failure *this,char *param_1,error_code *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 in_R9;
  char local_28 [24];
  
  pcVar2 = local_28;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pcVar2 = *param_1;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_140001b30((undefined8 *)this,local_28,param_2,in_R9);
  *(undefined ***)this = system_error::vftable;
  return this;
}




undefined8 * FUN_140001d80(undefined8 *param_1,uint param_2)

{
  FUN_140001dc0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140001dc0(undefined8 *param_1)

{
  FUN_140001c70(param_1);
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




char * FUN_140001e20(void)

{
  return "generic";
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_140001e30(undefined8 param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
             int param_3)

{
  char *pcVar1;
  
  pcVar1 = std::_Syserror_map(param_3);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(param_2,pcVar1);
  return param_2;
}




void * FUN_140001e80(void *param_1,uint param_2)

{
  FUN_140001ec0();
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140001ec0(void)

{
  FUN_140001450();
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_System_error_category::_System_error_category(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_System_error_category * __thiscall
std::_System_error_category::_System_error_category(_System_error_category *this)

{
  error_category::error_category((error_category *)this);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 7;
  return this;
}




char * FUN_140001f20(void)

{
  return "system";
}




void FUN_140001f30(undefined8 param_1,longlong param_2,ulong param_3)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  undefined1 auStack_68 [32];
  ulong local_48;
  uint local_44;
  undefined4 local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_140013010 ^ (ulonglong)auStack_68;
  local_44 = 0;
  local_40 = 0x7fff;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_30,0x7fff,'\0')
  ;
  p_Var1 = FUN_140004940(local_30,0);
  local_48 = std::_Winerror_message(param_3,(char *)p_Var1,0x7fff);
  if (local_48 == 0) {
    FUN_140004c50(local_30,"unknown error");
  }
  else {
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::resize
              (local_30,(ulonglong)local_48,'\0');
  }
  FUN_140004980(local_30);
  FUN_140004cb0(param_2,local_30);
  local_44 = local_44 | 1;
  FUN_140004c80(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




error_condition * FUN_140002020(undefined8 param_1,error_condition *param_2,int param_3)

{
  int iVar1;
  error_category *peVar2;
  
  iVar1 = std::_Winerror_map(param_3);
  if (iVar1 == 0) {
    peVar2 = std::iostream_category();
    std::error_condition::error_condition(param_2,param_3,peVar2);
  }
  else {
    peVar2 = std::iostream_category();
    std::error_condition::error_condition(param_2,iVar1,peVar2);
  }
  return param_2;
}




/* Library Function - Single Match
    class std::error_category const & __ptr64 __cdecl std::iostream_category(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

error_category * __cdecl std::iostream_category(void)

{
  error_category *peVar1;
  
  peVar1 = (error_category *)FUN_1400081e0();
  return peVar1;
}




/* Library Function - Single Match
    class std::error_category const & __ptr64 __cdecl std::iostream_category(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

error_category * __cdecl std::iostream_category(void)

{
  error_category *peVar1;
  
  peVar1 = (error_category *)FUN_140008220();
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




uint FUN_140002180(uint param_1,uint param_2)

{
  return param_1 | param_2;
}




undefined8 * FUN_1400021a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140002350(param_1,param_2,param_3);
  return param_1;
}




void FUN_1400021e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48 [7];
  
  puVar1 = (undefined1 *)std::make_error_code((io_errc)local_58);
  puVar3 = local_68;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140001c90(local_48,local_68,param_3,param_4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140010680);
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




ulonglong FUN_140002260(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iStackX_c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48 [7];
  
  iStackX_c = (int)(param_1 >> 0x20);
  if (iStackX_c != 0) {
    puVar1 = (undefined1 *)std::make_error_code((io_errc)local_58);
    puVar3 = local_68;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_140001c90(local_48,local_68,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140010680);
  }
  return param_1 & 0xffffffff;
}




undefined8 FUN_1400022d0(undefined8 *param_1)

{
  return *param_1;
}




void FUN_1400022e0(undefined8 param_1)

{
  FUN_140004280(param_1);
  return;
}




longlong FUN_140002300(undefined8 param_1,longlong param_2)

{
  allocator<char> *paVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  paVar1 = (allocator<char> *)FUN_140001470(local_18);
  FUN_1400083c0(param_1,param_2,paVar1);
  return param_2;
}




undefined8 * FUN_140002350(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}




void FUN_140002380(undefined8 param_1)

{
  FUN_140004530(param_1);
  return;
}




void FUN_1400023a0(undefined1 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}




_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *
FUN_1400023c0(_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
              *param_1)

{
  basic_string<>(param_1);
  return param_1;
}




longlong FUN_1400023e0(longlong param_1,undefined8 param_2)

{
  basic_string<>(param_1,param_2);
  return param_1;
}




failure * FUN_140002420(failure *param_1,error_code *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  failure *pfVar4;
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *p_Var5;
  undefined1 *puVar6;
  char local_68 [16];
  undefined1 local_58 [16];
  longlong local_48 [2];
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_38 [40];
  
  pcVar1 = local_68;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar1 = *param_4;
    param_4 = param_4 + 1;
    pcVar1 = pcVar1 + 1;
  }
  std::ios_base::failure::failure(param_1,local_68,param_2);
  *(undefined ***)param_1 = std::filesystem::filesystem_error::vftable;
  FUN_1400023e0((longlong)(param_1 + 0x28),param_3);
  pfVar4 = param_1 + 0x48;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pfVar4 = (failure)0x0;
    pfVar4 = pfVar4 + 1;
  }
  FUN_1400023c0((_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *)
                (param_1 + 0x48));
  p_Var5 = local_38;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *p_Var5 = (_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>)0x0;
    p_Var5 = p_Var5 + 1;
  }
  FUN_1400023c0(local_38);
  pcVar1 = FUN_140001210((longlong)param_1);
  plVar2 = FUN_140004ec0(local_48,(longlong)pcVar1);
  puVar6 = local_58;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = (char)*plVar2;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
    puVar6 = puVar6 + 1;
  }
  FUN_1400025a0((longlong)(param_1 + 0x68),local_58,param_3,local_38);
  FUN_140002380(local_38);
  return param_1;
}




void FUN_140002580(longlong param_1)

{
  FUN_140004910(param_1 + 0x68);
  return;
}




void FUN_1400025a0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  int local_b8;
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_78 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_a0 = 0xfffffffffffffffe;
  local_18 = DAT_140013010 ^ (ulonglong)auStack_d8;
  local_b4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_78);
  FUN_140002300(param_3,(longlong)local_38);
  FUN_140002300(param_4,(longlong)local_58);
  bVar1 = FUN_140004020(local_58);
  if (bVar1) {
    local_b8 = 4;
  }
  else {
    local_b8 = 8;
  }
  local_b0 = FUN_140001850((longlong)param_2);
  local_b0 = local_b0 + local_b8;
  local_a8 = FUN_140004260(local_38);
  local_a8 = local_b0 + local_a8;
  lVar2 = FUN_140004260(local_58);
  FUN_140004780(local_78,local_a8 + lVar2);
  FUN_140008630(local_78,param_2);
  puVar3 = FUN_1400021a0(local_98,&DAT_14000d720,3);
  FUN_140008630(local_78,(undefined1 *)puVar3);
  FUN_140004c20(local_78,local_38);
  bVar1 = FUN_140004020(local_58);
  if (!bVar1) {
    puVar3 = FUN_1400021a0(local_88,&DAT_14000d724,4);
    FUN_140008630(local_78,(undefined1 *)puVar3);
    FUN_140004c20(local_78,local_58);
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
            (local_78,'\"');
  FUN_140004cb0(param_1,local_78);
  local_b4 = local_b4 | 1;
  FUN_140004c80(local_58);
  FUN_140004c80(local_38);
  FUN_140004c80(local_78);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_d8);
  return;
}




undefined8 * FUN_1400027a0(undefined8 *param_1,uint param_2)

{
  FUN_1400027e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1400027e0(undefined8 *param_1)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_1 + 0xd));
  FUN_140002380(param_1 + 9);
  FUN_140002380(param_1 + 5);
  FUN_140001dc0(param_1);
  return;
}




undefined8 * FUN_140002830(undefined8 *param_1,longlong param_2)

{
  FID_conflict_failure(param_1,param_2);
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_1400023e0((longlong)(param_1 + 5),param_2 + 0x28);
  FUN_1400023e0((longlong)(param_1 + 9),param_2 + 0x48);
  basic_string<>((longlong)(param_1 + 0xd),param_2 + 0x68);
  return param_1;
}




void FUN_1400028e0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  char local_100 [24];
  char local_e8 [16];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_d8 [32];
  undefined1 local_b8 [16];
  failure local_a8 [152];
  
  pcVar1 = (char *)std::make_error_code((io_errc)local_b8);
  pcVar3 = local_100;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar3 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_d8,param_1);
  pcVar1 = local_100;
  pcVar3 = local_e8;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar3 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    pcVar3 = pcVar3 + 1;
  }
  FUN_140002420(local_a8,(error_code *)local_d8,param_3,local_e8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_140010638);
}




void FUN_1400029a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  int local_48;
  uint local_44;
  LPCWSTR local_40;
  FILETIME local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_68;
  local_44 = FUN_140002180(1,8);
  local_40 = (LPCWSTR)FUN_1400022e0(param_1);
  local_48 = __std_fs_get_stats(local_40,&local_38,local_44,0xffffffff);
  if (local_48 == 0) {
    *param_2 = local_30;
  }
  else {
    *param_2 = 0xffffffffffffffff;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}




void FUN_140002a40(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_48;
  local_28 = FUN_1400029a0(param_1,&local_20);
  if (local_28 != 0) {
    FUN_1400028e0("file_size",(ulonglong)local_28,param_1);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}




ulonglong FUN_140002aa0(undefined8 param_1)

{
  LPCWSTR pWVar1;
  ulonglong uVar2;
  uint uStack_14;
  
  pWVar1 = (LPCWSTR)FUN_1400022e0(param_1);
  uVar2 = FUN_14000b530(pWVar1);
  uStack_14 = (uint)(uVar2 >> 0x20);
  if (uStack_14 != 0) {
    FUN_1400028e0("remove",(ulonglong)uStack_14,param_1);
  }
  return uVar2 & 0xff;
}




bool FUN_140002af0(wint_t *param_1,FILE *param_2)

{
  wint_t wVar1;
  
  wVar1 = fgetwc(param_2);
  if (wVar1 != 0xffff) {
    *param_1 = wVar1;
  }
  return wVar1 != 0xffff;
}




bool FUN_140002b40(wchar_t param_1,FILE *param_2)

{
  wint_t wVar1;
  
  wVar1 = fputwc(param_1,param_2);
  return wVar1 != 0xffff;
}




bool FUN_140002b90(wint_t *param_1,FILE *param_2)

{
  wint_t wVar1;
  
  wVar1 = ungetwc(*param_1,param_2);
  return wVar1 != 0xffff;
}




void FUN_140002be0(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  LPCSTR pCVar5;
  __uint64 _Var6;
  wchar_t *lpWideCharStr;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_b8 [32];
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStackY_b8;
  basic_string<>(local_30);
  bVar2 = FUN_140004020(param_2);
  if (bVar2) {
    FUN_140004600(param_1,local_30);
    FUN_140004530(local_30);
  }
  else {
    uVar4 = FUN_140004260(param_2);
    pCVar5 = (LPCSTR)FUN_140004910(param_2);
    iVar3 = MultiByteToWideChar(0xfde9,0,pCVar5,(int)uVar4,(LPWSTR)0x0,0);
    if (iVar3 < 1) {
      FUN_140004600(param_1,local_30);
      FUN_140004530(local_30);
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)(iVar3 + 1);
      _Var6 = SUB168(ZEXT816(2) * auVar1,0);
      if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
        _Var6 = 0xffffffffffffffff;
      }
      lpWideCharStr = (wchar_t *)operator_new(_Var6);
      pwVar8 = lpWideCharStr;
      for (lVar7 = (longlong)(iVar3 + 1) << 1; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)pwVar8 = 0;
        pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
      }
      uVar4 = FUN_140004260(param_2);
      pCVar5 = (LPCSTR)FUN_140004910(param_2);
      iVar3 = MultiByteToWideChar(0xfde9,0,pCVar5,(int)uVar4,lpWideCharStr,iVar3 + 1);
      if (0 < iVar3) {
        FUN_140004500((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                       *)local_30,lpWideCharStr);
      }
      free(lpWideCharStr);
      FUN_140004600(param_1,local_30);
      FUN_140004530(local_30);
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_b8);
  return;
}




void FUN_140002e50(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  LPCWSTR pWVar4;
  char *lpMultiByteStr;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStackY_c8 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStackY_c8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
  bVar1 = FUN_140004020(param_2);
  if (bVar1) {
    FUN_140004cb0(param_1,local_38);
    FUN_140004c80(local_38);
  }
  else {
    uVar3 = FUN_140004260(param_2);
    pWVar4 = (LPCWSTR)FUN_140004280(param_2);
    iVar2 = WideCharToMultiByte(0xfde9,0,pWVar4,(int)uVar3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar2 < 1) {
      FUN_140004cb0(param_1,local_38);
      FUN_140004c80(local_38);
    }
    else {
      lpMultiByteStr = (char *)operator_new((longlong)(iVar2 + 1));
      pcVar6 = lpMultiByteStr;
      for (lVar5 = (longlong)(iVar2 + 1); lVar5 != 0; lVar5 = lVar5 + -1) {
        *pcVar6 = '\0';
        pcVar6 = pcVar6 + 1;
      }
      uVar3 = FUN_140004260(param_2);
      pWVar4 = (LPCWSTR)FUN_140004280(param_2);
      iVar2 = WideCharToMultiByte(0xfde9,0,pWVar4,(int)uVar3,lpMultiByteStr,iVar2 + 1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if (iVar2 < 1) {
        FUN_140004cb0(param_1,local_38);
        FUN_140004c80(local_38);
      }
      else {
        FUN_140004c50(local_38,lpMultiByteStr);
        free(lpMultiByteStr);
        FUN_140004cb0(param_1,local_38);
        FUN_140004c80(local_38);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_c8);
  return;
}




void FUN_140003100(_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
                   *param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_258 [32];
  uint local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  GetTempPathW(0x104,local_228);
  basic_string<>(param_1,local_228);
  local_238 = local_238 | 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_140003190(_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
                   *param_1)

{
  bool bVar1;
  char cVar2;
  HRESULT HVar3;
  BOOL BVar4;
  undefined8 uVar5;
  LPCWSTR lpPathName;
  undefined1 auStackY_228 [32];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [32];
  LPOLESTR local_190;
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_188 [32];
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_168 [32];
  GUID local_148;
  basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> local_138 [288];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStackY_228;
  basic_string<>(local_188);
  CoInitialize((LPVOID)0x0);
  local_190 = (wchar_t *)0x0;
  HVar3 = CoCreateGuid(&local_148);
  if (HVar3 == 0) {
    StringFromCLSID(&local_148,&local_190);
  }
  CoUninitialize();
  if (local_190 == (wchar_t *)0x0) {
    FUN_140004600((longlong)param_1,local_188);
    FUN_140004530(local_188);
  }
  else {
    FUN_140003100(local_168);
    bVar1 = FUN_140004020(local_168);
    if (bVar1) {
      CoTaskMemFree(local_190);
      FUN_140004600((longlong)param_1,local_188);
      FUN_140004530(local_168);
      FUN_140004530(local_188);
    }
    else {
      uVar5 = FUN_140008660((longlong)local_1d0,local_168,local_190);
      FUN_140004560((longlong)local_188,uVar5);
      FUN_140004530(local_1d0);
      CoTaskMemFree(local_190);
      lpPathName = (LPCWSTR)FUN_140004280(local_188);
      BVar4 = CreateDirectoryW(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
      if (BVar4 == 0) {
        basic_string<>(param_1,L"");
        FUN_140004530(local_168);
        FUN_140004530(local_188);
      }
      else {
        FUN_1400023a0(local_138,0x118);
        uVar5 = FUN_140008660((longlong)local_1b0,local_188,L"\\remote_config_data");
        FUN_140004fb0(local_138,uVar5,2,0x40,1);
        FUN_140004530(local_1b0);
        cVar2 = FUN_140004f00((longlong)local_138);
        if (cVar2 == '\0') {
          basic_string<>(param_1,L"");
          FUN_1400034c0((longlong)local_138);
          FUN_140004530(local_168);
          FUN_140004530(local_188);
        }
        else {
          FUN_140004600((longlong)param_1,local_188);
          FUN_1400034c0((longlong)local_138);
          FUN_140004530(local_168);
          FUN_140004530(local_188);
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_228);
  return;
}




void FUN_1400034c0(longlong param_1)

{
  FUN_140004f20(param_1 + 0xb8);
  std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0xb8));
  return;
}




void FUN_140003500(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
                   *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  CHAR *pCVar2;
  undefined1 auStack_e8 [32];
  char local_c8;
  int local_c4;
  undefined4 local_c0;
  char *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  undefined1 local_a0 [8];
  CHAR local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_e8;
  pCVar2 = local_98;
  for (lVar1 = 0x80; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pCVar2 = '\0';
    pCVar2 = pCVar2 + 1;
  }
  GetModuleFileNameA((HMODULE)0x0,local_98,0x80);
  local_b8 = (char *)FUN_140001050(local_98,0x5c);
  if (local_b8 != (char *)0x0) {
    local_b8 = local_b8 + 1;
  }
  local_a8 = L"";
  local_a0[0] = 0;
  local_c8 = '\x01';
  for (local_c4 = 0; local_c4 < param_2; local_c4 = local_c4 + 1) {
    local_b0 = *(wchar_t **)(param_3 + (longlong)local_c4 * 8);
    if (((local_b8 == (char *)0x0) || (lVar1 = FUN_140001080((char *)local_b0,local_b8), lVar1 == 0)
        ) && (lVar1 = FUN_140001080((char *)local_b0,"firebasefetch.exe"), lVar1 == 0)) {
      if (local_c8 == '\0') {
        local_a8 = local_b0;
      }
      else {
        if (((char)*local_b0 == '\0') || ((char)*local_b0 == '0')) {
          local_c0 = 0;
        }
        else {
          local_c0 = 1;
        }
        local_a0[0] = (undefined1)local_c0;
        local_c8 = '\0';
      }
    }
  }
  FUN_140008740(param_1,local_a0,&local_a8);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_e8);
  return;
}




void FUN_140003690(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined8 local_140;
  undefined8 local_138;
  ulonglong local_130;
  LPCWSTR local_128;
  LPCWSTR local_120;
  undefined8 local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_118 = 0xfffffffffffffffe;
  local_10 = DAT_140013010 ^ (ulonglong)auStack_168;
  FUN_140008660((longlong)local_50,param_1,L"\\remote_config_data");
  basic_string<>(local_70);
  bVar1 = FUN_140004020(param_2);
  if (bVar1) {
    FUN_140004500((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *)local_70,L"remote_config_data");
  }
  else {
    lVar4 = FUN_140004260(param_2);
    FUN_140003fb0(param_2,(longlong)local_30,lVar4 - 1,1);
    cVar2 = FUN_1400087d0(local_30,L"\\\\");
    if ((cVar2 == '\0') && (cVar2 = FUN_1400087d0(local_30,L"/"), cVar2 == '\0')) {
      local_138 = FUN_140008660((longlong)local_90,param_2,L"\\remote_config_data");
      FUN_140004560((longlong)local_70,local_138);
      FUN_140004530(local_90);
    }
    else {
      local_140 = FUN_140008660((longlong)local_b0,param_2,L"remote_config_data");
      FUN_140004560((longlong)local_70,local_140);
      FUN_140004530(local_b0);
    }
    FUN_140004530(local_30);
  }
  FUN_1400085e0((longlong)local_110,local_50);
  local_130 = FUN_140002a40(local_110);
  FUN_140002380(local_110);
  if (local_130 < 0x40) {
    local_147 = 0;
    FUN_140004530(local_70);
    FUN_140004530(local_50);
  }
  else {
    local_128 = (LPCWSTR)FUN_140004280(local_70);
    local_120 = (LPCWSTR)FUN_140004280(local_50);
    BVar3 = CopyFileW(local_120,local_128,0);
    local_148 = BVar3 != 0;
    local_146 = local_148;
    FUN_1400085e0((longlong)local_f0,local_50);
    FUN_140002aa0(local_f0);
    FUN_140002380(local_f0);
    FUN_1400085e0((longlong)local_d0,param_1);
    FUN_140002aa0(local_d0);
    FUN_140002380(local_d0);
    local_145 = local_146;
    FUN_140004530(local_70);
    FUN_140004530(local_50);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_168);
  return;
}




void FUN_140003960(int param_1,longlong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  char local_1d4;
  char local_1d3;
  char local_1d2;
  char local_1d1;
  char local_1d0;
  FARPROC local_1c8;
  uint local_1c0;
  uint local_1bc;
  HMODULE local_1b8;
  FARPROC local_1a8;
  undefined8 local_1a0;
  code *local_198;
  longlong local_190;
  longlong local_188;
  basic_ostream<char,struct_std::char_traits<char>_> *local_180;
  basic_ostream<char,struct_std::char_traits<char>_> *local_178;
  basic_ostream<char,struct_std::char_traits<char>_> *local_170;
  basic_ostream<char,struct_std::char_traits<char>_> *local_168;
  longlong *local_160;
  basic_ostream<char,struct_std::char_traits<char>_> *local_158;
  basic_ostream<char,struct_std::char_traits<char>_> *local_150;
  code *local_148;
  basic_ostream<char,struct_std::char_traits<char>_> *local_140;
  basic_ostream<char,struct_std::char_traits<char>_> *local_138;
  basic_ostream<char,struct_std::char_traits<char>_> *local_130;
  basic_ostream<char,struct_std::char_traits<char>_> *local_128;
  FARPROC local_120;
  undefined8 local_118;
  undefined8 local_110;
  basic_ostream<char,struct_std::char_traits<char>_> *local_108;
  basic_ostream<char,struct_std::char_traits<char>_> *local_100;
  FARPROC local_f8;
  basic_ostream<char,struct_std::char_traits<char>_> *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
  local_c8 [16];
  undefined8 local_b8 [2];
  undefined1 local_a8 [32];
  longlong *local_88;
  char local_80 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_78 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_38 [32];
  ulonglong local_18;
  
  local_e0 = 0xfffffffffffffffe;
  local_18 = DAT_140013010 ^ (ulonglong)auStack_1f8;
  SetErrorMode(0x8007);
  local_1d8 = 0;
  local_1a8 = (FARPROC)0x0;
  local_1c8 = (FARPROC)0x0;
  local_88 = (longlong *)0x0;
  local_d8 = FUN_140003190(local_38);
  local_80[0] = '\0';
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_78);
  local_190 = FUN_140003500(local_c8,param_1,param_2);
  local_188 = local_190;
  puVar2 = FUN_140008800(local_b8,local_80,local_78);
  FUN_140008840((longlong)puVar2,local_188);
  local_1b8 = LoadLibraryA("firebaseonlineconfig.dll");
  if (local_1b8 == (HMODULE)0x0) {
    local_1d8 = 0xffffffff;
    local_180 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                              "load firebaseonlineconfig dll failed, please check dll is exist...");
    local_178 = local_180;
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(local_180,FUN_140008cf0);
    FUN_140004c80(local_78);
  }
  else {
    local_1a8 = GetProcAddress(local_1b8,"create_config");
    local_1c8 = GetProcAddress(local_1b8,"release_config");
    if ((local_1a8 == (FARPROC)0x0) || (local_1c8 == (FARPROC)0x0)) {
      local_1d8 = 0xfffffffe;
      local_170 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                  FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                "GetProcAddress not find create && release function.");
      local_168 = local_170;
      std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(local_170,FUN_140008cf0);
      FUN_140004c80(local_78);
    }
    else {
      local_160 = (longlong *)(*local_1a8)();
      local_88 = local_160;
      local_d0 = FUN_140002e50((longlong)local_58,local_38);
      bVar1 = FUN_140004020(local_38);
      if ((bVar1) || (bVar1 = FUN_140004020(local_58), bVar1)) {
        local_1d8 = 0xfffffffd;
        local_158 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                    FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                                  "create temp folder failed.");
        local_150 = local_158;
        std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(local_158,FUN_140008cf0)
        ;
        FUN_140004c80(local_58);
        FUN_140004c80(local_78);
      }
      else {
        local_198 = *(code **)(*local_88 + 8);
        local_1a0 = FUN_140004910(local_58);
        (*local_198)(local_88,local_1a0);
        local_148 = *(code **)(*local_88 + 0x10);
        local_1c0 = (uint)(local_80[0] != '\0');
        local_1d3 = (*local_148)(local_88,0,local_1c0,
                                 L"https://update.easeus.com.cn/update/drw_cn/Yiwo_remote_config_data.data"
                                );
        local_1d2 = local_1d3;
        if (local_1d3 == '\0') {
          local_1d8 = 0xfffffffc;
          local_140 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                      FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref
                                    ,
                                    "Download firebase error, please check google-services.json file is exist."
                                   );
          local_138 = local_140;
          std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                    (local_140,FUN_140008cf0);
          FUN_140004c80(local_58);
          FUN_140004c80(local_78);
        }
        else {
          local_1d1 = (**(code **)(*local_88 + 0x58))(local_88);
          if (local_1d1 == '\0') {
            local_1d8 = 0xfffffffb;
            local_130 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                        FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)
                                      cout_exref,"Refresh firebase local config failed.");
            local_128 = local_130;
            std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                      (local_130,FUN_140008cf0);
            FUN_140004c80(local_58);
            FUN_140004c80(local_78);
          }
          else {
            if ((local_1c8 != (FARPROC)0x0) && (local_88 != (longlong *)0x0)) {
              local_120 = local_1c8;
              (*local_1c8)(&local_88);
              local_88 = (longlong *)0x0;
            }
            local_118 = FUN_140002be0((longlong)local_a8,local_78);
            local_110 = local_118;
            local_1d0 = FUN_140003690(local_38,local_118);
            local_1d4 = local_1d0 == '\0';
            local_1bc = (uint)(byte)local_1d4;
            FUN_140004530(local_a8);
            if (local_1d4 == '\0') {
              local_1d8 = 0;
              FUN_140004c80(local_58);
              FUN_140004c80(local_78);
            }
            else {
              local_1d8 = 0xfffffffa;
              local_108 = (basic_ostream<char,struct_std::char_traits<char>_> *)
                          FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)
                                        cout_exref,"copy file 2 new path error.");
              local_100 = local_108;
              std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
                        (local_108,FUN_140008cf0);
              FUN_140004c80(local_58);
              FUN_140004c80(local_78);
            }
          }
        }
      }
    }
  }
  if ((local_1c8 != (FARPROC)0x0) && (local_88 != (longlong *)0x0)) {
    local_f8 = local_1c8;
    (*local_1c8)(&local_88);
  }
  FUN_140004530(local_38);
  local_e8 = (basic_ostream<char,struct_std::char_traits<char>_> *)
             FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "fetch success.");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<(local_e8,FUN_140008cf0);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_1f8);
  return;
}




void FUN_140003f90(undefined8 param_1)

{
  FUN_140006020(param_1);
  FUN_140001450();
  return;
}




longlong FUN_140003fb0(undefined8 param_1,longlong param_2,__uint64 param_3,__uint64 param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_140006360(param_1,local_18);
  FUN_1400067f0(param_2,param_1,param_3,param_4,uVar1);
  return param_2;
}




bool FUN_140004020(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140004260(param_1);
  return lVar1 == 0;
}




void FUN_140004060(undefined8 param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_20 = FUN_140006020(param_1);
  if ((*(ulonglong *)(local_20 + 0x10) <= param_2) && (*(ulonglong *)(local_20 + 0x18) != param_2))
  {
    if (*(ulonglong *)(local_20 + 0x18) < param_2) {
      local_18 = *(longlong *)(local_20 + 0x10);
      puVar3 = local_28;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FUN_140008d50(param_1,param_2 - local_18,local_28[0]);
      *(longlong *)(local_20 + 0x10) = local_18;
    }
    else if ((param_2 < 8) && (bVar1 = Large_string_engaged(local_20), bVar1)) {
      FUN_1400062a0(param_1);
    }
  }
  return;
}




void FUN_140004140(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  copy(param_2,param_3,param_4 + 1);
  return;
}




void FUN_140004180(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  __uint64 local_28;
  __uint64 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  FUN_140006020(param_1);
  local_18 = FUN_140006010();
  local_38 = 8;
  puVar1 = _Max_value<>(&local_18,&local_38);
  local_30 = *puVar1;
  local_28 = local_30 - 1;
  local_20 = FUN_140001300();
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




undefined8 FUN_140004260(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140006020(param_1);
  return *(undefined8 *)(lVar1 + 0x10);
}




void FUN_140004280(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140006020(param_1);
  Myptr(puVar1);
  return;
}




undefined8 * FUN_1400042b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140006020(param_1);
  uVar1 = puVar2[2];
  puVar2 = Myptr(puVar2);
  FUN_140002350(param_2,puVar2,uVar1);
  return param_2;
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
  
  local_20 = (undefined8 *)FUN_140006020(this);
  local_18 = local_20[2];
  if ((ulonglong)(local_20[3] - local_18) < param_2) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_140008f20(this,param_2,local_28[0],(undefined1 *)param_1,param_2);
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
    public: void __cdecl `public: class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > & __ptr64 __cdecl
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::append(unsigned short const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>::operator()(unsigned short * __ptr64 const,unsigned short const *
   __ptr64 const,unsigned __int64,unsigned short const * __ptr64 const,unsigned __int64)const
   __ptr64
    public: void __cdecl `public: class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > & __ptr64 __cdecl
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t>
   >::append(wchar_t const * __ptr64 const,unsigned __int64)
   __ptr64'::`2'::<lambda_1>::operator()(wchar_t * __ptr64 const,wchar_t const * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const,unsigned __int64)const __ptr64
    public: void __cdecl <lambda_1dfe18491bcca09701d8ccb01d0b0af4>::operator()(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64,wchar_t const * __ptr64 const,unsigned
   __int64)const __ptr64
    public: void __cdecl <lambda_7030d12a21dba11210293044e97fe9c7>::operator()(unsigned short *
   __ptr64 const,unsigned short const * __ptr64 const,unsigned __int64,unsigned short const *
   __ptr64 const,unsigned __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

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




void FUN_1400044a0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,param_2);
  return;
}




void FUN_1400044d0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,undefined8 param_2)

{
  FUN_140006530(param_1,param_2);
  return;
}




void FUN_140004500(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
  return;
}




void FUN_140004530(undefined8 param_1)

{
  FID_conflict__Tidy_deallocate(param_1);
  FUN_140005e20();
  return;
}




longlong FUN_140004560(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = FUN_140001470(param_2);
  if (param_1 != lVar1) {
    FID_conflict__Tidy_deallocate(param_1);
    uVar2 = FUN_140006020(param_2);
    FUN_140006040(param_1,uVar2);
    puVar3 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_28[1] = local_28[0];
    local_20 = FUN_140001470(param_2);
    FUN_140006790(param_1,local_20);
  }
  return param_1;
}




longlong FUN_140004600(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_140006020(param_2);
  uVar1 = FUN_140001470(uVar1);
  FUN_140009130(param_1,uVar1);
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28[1] = local_28[0];
  local_20 = FUN_140001470(param_2);
  FUN_140006710(param_1,local_20);
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

_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *
basic_string<>(_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
               *param_1,wchar_t *param_2)

{
  std::_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>::
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>(param_1);
  FID_conflict__Tidy_init(param_1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            ((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *)param_1,param_2);
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

_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *
basic_string<>(_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
               *param_1)

{
  std::_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>::
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>(param_1);
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
  FUN_140006020(param_2);
  uVar1 = select_on_container_copy_construction(local_18);
  FUN_140009130(param_1,uVar1);
  FUN_140006590(param_1,param_2);
  return param_1;
}




void FUN_140004780(undefined8 param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  longlong local_18;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_1);
  if ((*(ulonglong *)(local_20 + 0x10) <= param_2) && (*(ulonglong *)(local_20 + 0x18) != param_2))
  {
    if (*(ulonglong *)(local_20 + 0x18) < param_2) {
      local_18 = *(longlong *)(local_20 + 0x10);
      puVar3 = local_28;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FUN_140009180(param_1,param_2 - local_18,local_28[0]);
      *(longlong *)(local_20 + 0x10) = local_18;
    }
    else if ((param_2 < 0x10) &&
            (bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged
                               (local_20), bVar1)) {
      FUN_1400069f0(param_1);
    }
  }
  return;
}




void FUN_140004860(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  FUN_140001350(param_2,param_3,param_4 + 1);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::resize(unsigned __int64,char) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::resize
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1,char param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140004260(this);
  if (uVar1 < param_1) {
    append(this,param_1 - uVar1,param_2);
  }
  else {
    FUN_140006980(this,param_1);
  }
  return;
}




void FUN_140004910(undefined8 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_1);
  Myptr(p_Var1);
  return;
}




_String_val<struct_std::_Simple_types<char>_> * FUN_140004940(undefined8 param_1,longlong param_2)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_1);
  p_Var1 = Myptr(p_Var1);
  return p_Var1 + param_2;
}




void FUN_140004980(undefined8 param_1)

{
  ulonglong uVar1;
  bool bVar2;
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  __uint64 local_38;
  ulonglong local_30;
  longlong local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_1);
  bVar2 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(this);
  if (bVar2) {
    if (*(ulonglong *)(this + 0x10) < 0x10) {
      FUN_1400069f0(param_1);
    }
    else {
      local_38 = FUN_140006ab0(param_1);
      local_30 = *(ulonglong *)(this + 0x10) | 0xf;
      p_Var3 = std::_Min_value<unsigned___int64>(&local_30,&local_38);
      uVar1 = *p_Var3;
      if (uVar1 < *(ulonglong *)(this + 0x18)) {
        uVar4 = FUN_140006020(param_1);
        uVar5 = allocate(uVar4,uVar1 + 1);
        FUN_140003f90(param_1);
        local_28 = *(longlong *)(this + 0x10) + 1;
        local_20 = (undefined1 *)FUN_140001470(*(undefined8 *)this);
        local_18 = (undefined1 *)FUN_140001470(uVar5);
        FUN_140001350(local_18,local_20,local_28);
        FUN_140007bf0(uVar4,*(void **)this,*(longlong *)(this + 0x18) + 1);
        *(undefined8 *)this = uVar5;
        *(ulonglong *)(this + 0x18) = uVar1;
      }
    }
  }
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
  
  uVar1 = FUN_140006020(param_1);
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140001470(uVar1);
  p_Var2 = Myptr(p_Var2);
  uVar1 = FUN_140001470(p_Var2);
  FUN_1400060c0(param_2,uVar1);
  return param_2;
}




void FUN_140004b50(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2)

{
  longlong lVar1;
  __uint64 _Var2;
  
  lVar1 = length((longlong)param_2);
  _Var2 = FUN_140001470(lVar1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,param_2,_Var2);
  return;
}




void FUN_140004b90(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined8 param_2)

{
  __uint64 _Var1;
  _String_val<struct_std::_Simple_types<char>_> *p_Var2;
  
  p_Var2 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_2);
  _Var1 = *(__uint64 *)(p_Var2 + 0x10);
  p_Var2 = Myptr(p_Var2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,(char *)p_Var2,_Var1);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::operator+=(char) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          char param_1)

{
  push_back(this,param_1);
  return this;
}




void FUN_140004c20(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined8 param_2)

{
  FUN_140004b90(param_1,param_2);
  return;
}




void FUN_140004c50(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
            (param_1,param_2);
  return;
}




void FUN_140004c80(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_140005e20();
  return;
}




longlong FUN_140004cb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = FUN_140006020(param_2);
  uVar1 = FUN_140001470(uVar1);
  FUN_140009130(param_1,uVar1);
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_28[1] = local_28[0];
  local_20 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_140001470(param_2);
  FUN_1400074c0(param_1,local_20);
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(unsigned
   __int64,char) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1,char param_2)

{
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>::
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
            ((_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *)
             this);
  _Tidy_init(this);
  assign(this,param_1,param_2);
  return this;
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
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>::
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
            ((_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *)
             this);
  _Tidy_init(this);
  assign(this,param_1);
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
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>::
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
            ((_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *)
             this);
  _Tidy_init(this);
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
  FUN_140006020(param_2);
  uVar1 = select_on_container_copy_construction(local_18);
  FUN_140009130(param_1,uVar1);
  FUN_140007340(param_1,param_2);
  return param_1;
}




bool FUN_140004e90(longlong param_1)

{
  return *(longlong *)(param_1 + 8) == 0;
}




longlong * FUN_140004ec0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = length(param_2);
  param_1[1] = lVar1;
  return param_1;
}




void FUN_140004f00(longlong param_1)

{
  FUN_140007b80(param_1 + 0x18);
  return;
}




void FUN_140004f20(longlong param_1)

{
  *(undefined ***)(param_1 + -0xb8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb8) + 4)) =
       std::basic_fstream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)(param_1 + -0xbc + (longlong)*(int *)(*(longlong *)(param_1 + -0xb8) + 4)) =
       *(int *)(*(longlong *)(param_1 + -0xb8) + 4) + -0xb8;
  FUN_140005db0((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + -0xa0));
  std::basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + -0x98));
  return;
}




basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140004fb0(basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,undefined8 param_2,
             int param_3,int param_4,int param_5)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)FUN_140004280(param_2);
  FUN_140007540(param_1,pwVar1,param_3,param_4,param_5);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_fstream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb8;
  return param_1;
}




void FUN_140005040(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  locale *param_2)

{
  codecvt_base *pcVar1;
  
  pcVar1 = (codecvt_base *)FUN_140008260(param_2);
  FUN_140007790(param_1,pcVar1);
  return;
}




undefined4 FUN_140005070(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  short local_26;
  short local_24 [6];
  code *local_18;
  
  if (param_1[0x10] != 0) {
    local_18 = *(code **)(*param_1 + 0x18);
    uVar3 = FUN_140007c20();
    local_26 = (*local_18)(param_1,uVar3 & 0xffff);
    uVar4 = FUN_140007c20();
    local_24[0] = (short)uVar4;
    bVar1 = eq_int_type(local_24,&local_26);
    if ((!bVar1) && (iVar2 = fflush((FILE *)param_1[0x10]), iVar2 < 0)) {
      return 0xffffffff;
    }
  }
  return 0;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140005110(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,char *param_2,
             longlong param_3)

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
    iVar1 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,local_18,param_3 << 1);
    if (iVar1 == 0) {
      FUN_1400079a0(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0;
}




void FUN_1400051c0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  fpos<struct__Mbstatet> *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_48;
  local_20 = FUN_140007e50(param_3);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_1400077f0((longlong *)param_1);
    if (cVar1 != '\0') {
      iVar2 = fsetpos(*(FILE **)(param_1 + 0x80),&local_20);
      if (iVar2 == 0) {
        puVar3 = FUN_140007e70((longlong)param_3,&local_28);
        *(undefined8 *)(param_1 + 0x74) = *puVar3;
        FUN_140007730(param_1);
        std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>
                  (param_2,*(undefined8 *)(param_1 + 0x74),local_20);
        goto LAB_14000528b;
      }
    }
  }
  std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
LAB_14000528b:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}




void FUN_1400052a0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  fpos<struct__Mbstatet> *param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar3;
  longlong local_res18;
  undefined1 auStack_38 [32];
  fpos_t local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_38;
  pbVar3 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
           std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  local_res18 = param_3;
  if (((pbVar3 == param_1 + 0x70) && (param_4 == 1)) && (*(longlong *)(param_1 + 0x68) == 0)) {
    local_res18 = param_3 + -2;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_1400077f0((longlong *)param_1);
    if (cVar1 != '\0') {
      if ((local_res18 != 0) || (param_4 != 1)) {
        iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),local_res18,param_4);
        if (iVar2 != 0) goto LAB_14000536b;
      }
      iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_18);
      if (iVar2 == 0) {
        FUN_140007730(param_1);
        std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>
                  (param_2,*(undefined8 *)(param_1 + 0x74),local_18);
        goto LAB_1400053aa;
      }
    }
  }
LAB_14000536b:
  std::fpos<struct__Mbstatet>::fpos<struct__Mbstatet>(param_2,-1);
LAB_1400053aa:
  __security_check_cookie(local_10 ^ (ulonglong)auStack_38);
  return;
}




void FUN_1400053c0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  wchar_t *param_2,__int64 param_3)

{
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::xsputn(param_1,param_2,param_3);
  return;
}




void FUN_1400053f0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  wchar_t *param_2,__int64 param_3)

{
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::xsgetn(param_1,param_2,param_3);
  return;
}




void FUN_140005420(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  codecvt<wchar_t,char,struct__Mbstatet> *this;
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStackY_e8 [32];
  char local_98;
  longlong local_90;
  char *local_50;
  wchar_t *local_48;
  wchar_t local_40;
  wchar_t local_3e;
  wint_t local_3c [2];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStackY_e8;
  pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
    pwVar4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::egptr(param_1);
    if (pwVar3 < pwVar4) {
      pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Gninc(param_1);
      FUN_140005d40(pwVar3);
      goto LAB_1400057a7;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_140007c20();
  }
  else {
    FUN_140007730(param_1);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      bVar1 = FUN_140002af0(local_3c,*(FILE **)(param_1 + 0x80));
      if (bVar1) {
        FUN_140005d40(local_3c);
      }
      else {
        FUN_140007c20();
      }
    }
    else {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38);
      while (iVar2 = fgetc(*(FILE **)(param_1 + 0x80)), iVar2 != -1) {
        local_98 = (char)iVar2;
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::push_back
                  (local_38,local_98);
        this = *(codecvt<wchar_t,char,struct__Mbstatet> **)(param_1 + 0x68);
        lVar5 = FUN_140004910(local_38);
        lVar6 = FUN_140004260(local_38);
        pcVar7 = (char *)FUN_140004910(local_38);
        iVar2 = std::codecvt<wchar_t,char,struct__Mbstatet>::in
                          (this,(_Mbstatet *)(param_1 + 0x74),pcVar7,(char *)(lVar5 + lVar6),
                           &local_50,&local_40,&local_3e,&local_48);
        if (iVar2 < 0) {
LAB_140005776:
          FUN_140007c20();
          FUN_140004c80(local_38);
          goto LAB_1400057a7;
        }
        if (1 < iVar2) {
          if (iVar2 != 3) goto LAB_140005776;
          FUN_140006b40(local_38);
          FUN_140004c80(local_38);
          goto LAB_1400057a7;
        }
        if (local_48 != &local_40) {
          lVar5 = FUN_140004910(local_38);
          lVar6 = FUN_140004260(local_38);
          local_90 = (lVar5 + lVar6) - (longlong)local_50;
          while (0 < local_90) {
            local_90 = local_90 + -1;
            ungetc((int)local_50[local_90],*(FILE **)(param_1 + 0x80));
          }
          FUN_140005d40(&local_40);
          FUN_140004c80(local_38);
          goto LAB_1400057a7;
        }
        lVar5 = FUN_140004910(local_38);
        std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::erase
                  (local_38,0,(longlong)local_50 - lVar5);
      }
      FUN_140007c20();
      FUN_140004c80(local_38);
    }
  }
LAB_1400057a7:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_e8);
  return;
}




void FUN_1400057c0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  short local_38 [4];
  wchar_t *local_30;
  code *local_28;
  short local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_58;
  pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  if (pwVar2 != (wchar_t *)0x0) {
    local_30 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
    pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::egptr(param_1);
    if (local_30 < pwVar2) {
      pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
      FUN_140005d40(pwVar2);
      goto LAB_140005886;
    }
  }
  local_20[0] = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
  uVar3 = FUN_140007c20();
  local_38[0] = (short)uVar3;
  bVar1 = eq_int_type(local_38,local_20);
  if (!bVar1) {
    local_28 = *(code **)(*(longlong *)param_1 + 0x20);
    (*local_28)(param_1,local_20[0]);
  }
LAB_140005886:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}




ulonglong FUN_1400058a0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                       ushort param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined2 uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  undefined6 extraout_var;
  ulonglong uVar6;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar7;
  ushort local_res10 [12];
  short local_28;
  short local_26;
  short local_24;
  wint_t local_22;
  wchar_t *local_20;
  FILE *local_18;
  
  local_res10[0] = param_2;
  pwVar4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
  if (pwVar4 != (wchar_t *)0x0) {
    local_20 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
    pwVar4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
    if (local_20 < pwVar4) {
      uVar5 = FUN_140007c20();
      local_28 = (short)uVar5;
      bVar1 = eq_int_type(&local_28,(short *)local_res10);
      if (!bVar1) {
        pwVar4 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
        local_26 = FUN_140005d40(pwVar4 + -1);
        bVar1 = eq_int_type(&local_26,(short *)local_res10);
        if (!bVar1) goto LAB_140005960;
      }
      std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Gndec(param_1);
      uVar2 = not_eof(local_res10);
      return CONCAT62(extraout_var,uVar2);
    }
  }
LAB_140005960:
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar5 = FUN_140007c20();
    local_24 = (short)uVar5;
    bVar1 = eq_int_type(&local_24,(short *)local_res10);
    if (!bVar1) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        local_18 = *(FILE **)(param_1 + 0x80);
        local_22 = FUN_140005d40(local_res10);
        bVar1 = FUN_140002b90(&local_22,local_18);
        if (bVar1) {
          return (ulonglong)local_res10[0];
        }
      }
      pbVar7 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
               std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::gptr(param_1);
      if (pbVar7 != param_1 + 0x70) {
        uVar3 = FUN_140005d40(local_res10);
        *(undefined2 *)(param_1 + 0x70) = uVar3;
        FUN_1400076a0(param_1);
        return (ulonglong)local_res10[0];
      }
      uVar6 = FUN_140007c20();
      return uVar6;
    }
  }
  uVar6 = FUN_140007c20();
  return uVar6;
}




void FUN_140005a40(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  ushort param_2)

{
  bool bVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  ushort local_res10 [12];
  undefined1 auStackY_c8 [32];
  short local_84;
  wchar_t local_82;
  wchar_t local_80;
  int local_7c;
  size_t local_78;
  wchar_t *local_70;
  FILE *local_68;
  codecvt<wchar_t,char,struct__Mbstatet> *local_60;
  undefined8 local_58;
  char *local_50;
  wchar_t *local_48;
  wchar_t local_40;
  wchar_t local_3e [3];
  char local_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStackY_c8;
  local_res10[0] = param_2;
  uVar2 = FUN_140007c20();
  local_84 = (short)uVar2;
  bVar1 = eq_int_type(&local_84,(short *)local_res10);
  if (bVar1) {
    not_eof(local_res10);
  }
  else {
    pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
    if (pwVar3 != (wchar_t *)0x0) {
      local_70 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::pptr(param_1);
      pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::epptr(param_1);
      if (local_70 < pwVar3) {
        local_82 = FUN_140005d40(local_res10);
        pwVar3 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Pninc(param_1);
        *pwVar3 = local_82;
        goto LAB_140005d1e;
      }
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      FUN_140007c20();
    }
    else {
      FUN_140007730(param_1);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        local_68 = *(FILE **)(param_1 + 0x80);
        local_80 = FUN_140005d40(local_res10);
        bVar1 = FUN_140002b40(local_80,local_68);
        if (!bVar1) {
          FUN_140007c20();
        }
      }
      else {
        local_58 = 0x20;
        local_40 = FUN_140005d40(local_res10);
        local_60 = *(codecvt<wchar_t,char,struct__Mbstatet> **)(param_1 + 0x68);
        local_7c = std::codecvt<wchar_t,char,struct__Mbstatet>::out
                             (local_60,(_Mbstatet *)(param_1 + 0x74),&local_40,local_3e,&local_48,
                              local_38,local_18,&local_50);
        if (-1 < local_7c) {
          if (local_7c < 2) {
            local_78 = (longlong)local_50 - (longlong)local_38;
            if ((local_78 == 0) ||
               (sVar4 = fwrite(local_38,1,local_78,*(FILE **)(param_1 + 0x80)), local_78 == sVar4))
            {
              param_1[0x72] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x1;
              if (local_48 == &local_40) {
                FUN_140007c20();
              }
            }
            else {
              FUN_140007c20();
            }
            goto LAB_140005d1e;
          }
          if (local_7c == 3) {
            bVar1 = FUN_140002b40(local_40,*(FILE **)(param_1 + 0x80));
            if (!bVar1) {
              FUN_140007c20();
            }
            goto LAB_140005d1e;
          }
        }
        FUN_140007c20();
      }
    }
  }
LAB_140005d1e:
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_c8);
  return;
}




undefined2 FUN_140005d40(undefined2 *param_1)

{
  return *param_1;
}




void FUN_140005d50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    _unlock_file(*(FILE **)(param_1 + 0x80));
  }
  return;
}




void FUN_140005d80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    _lock_file(*(FILE **)(param_1 + 0x80));
  }
  return;
}




void FUN_140005db0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  *(undefined ***)param_1 = std::basic_filebuf<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_140007730(param_1);
  }
  if (param_1[0x7c] != (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x0) {
    FUN_140007af0(param_1);
  }
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>(param_1);
  return;
}




void FUN_140005e20(void)

{
  FUN_140005ee0();
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
  FUN_1400034c0((longlong)(this + -0xb8));
  if ((param_1 & 1) != 0) {
    free(this + -0xb8);
  }
  return this + -0xb8;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140005ea0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,uint param_2)

{
  FUN_140005db0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140005ee0(void)

{
  FUN_140005f00();
  return;
}




void FUN_140005f00(void)

{
  FUN_140001450();
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
    FUN_140007f30();
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
    local_18 = (undefined8 *)FUN_140001470(*param_1);
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




undefined8 FUN_140006010(void)

{
  return 0x7fffffffffffffff;
}




void FUN_140006020(undefined8 param_1)

{
  FUN_140001470(param_1);
  return;
}




void FUN_140006040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140006020(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >::_String_alloc<struct std::_String_base_types<char,class
   std::allocator<char> > >(void) __ptr64
   
   Library: Visual Studio 2017 Release */

_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> * __thiscall
std::_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>::
_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_>
          (_String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> *this)

{
  _Compressed_pair<><>((longlong)this);
  return this;
}




void FUN_1400060a0(undefined8 *param_1)

{
  FUN_1400022d0(param_1);
  return;
}




undefined8 * FUN_1400060c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_140007f50(param_1,param_2);
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
               FUN_140001470(*(undefined8 *)param_1);
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
  
  FUN_140003f90(param_1);
  local_20 = (undefined8 *)FUN_140006020(param_1);
  bVar1 = Large_string_engaged((longlong)local_20);
  if (bVar1) {
    local_10 = (void *)*local_20;
    local_18 = FUN_140006020(param_1);
    FUN_140001470(local_20);
    FUN_140001460();
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
  
  local_10 = (undefined2 *)FUN_140006020(param_1);
  *(undefined8 *)(local_10 + 8) = 0;
  *(undefined8 *)(local_10 + 0xc) = 7;
  local_18[0] = 0;
  assign(local_10,local_18);
  return;
}




void FUN_1400062a0(undefined8 param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_140006020(param_1);
  FUN_140001450();
  pvVar1 = (void *)*puVar3;
  uVar4 = FUN_140006020(param_1);
  FUN_140001470(puVar3);
  FUN_140001460();
  lVar2 = puVar3[2];
  puVar5 = (undefined1 *)FUN_140001470(pvVar1);
  copy((undefined1 *)puVar3,puVar5,lVar2 + 1);
  deallocate(uVar4,pvVar1,puVar3[3] + 1);
  puVar3[3] = 7;
  return;
}




undefined8 FUN_140006360(undefined8 param_1,undefined8 param_2)

{
  FUN_140006020(param_1);
  return param_2;
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
  uVar2 = FUN_140001470(_Var1);
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
  
  local_20 = (undefined8 *)FUN_140006020(param_1);
  if ((ulonglong)local_20[3] < param_3) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = FUN_1400093b0(param_1,param_3,local_28[0],param_2);
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
  _Var1 = FUN_140001470(_Var1);
  pbVar2 = append(this,param_1,_Var1);
  return pbVar2;
}




void FUN_140006530(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,undefined8 param_2)

{
  __uint64 _Var1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  
  puVar2 = (undefined8 *)FUN_140006020(param_2);
  _Var1 = puVar2[2];
  pwVar3 = (wchar_t *)Myptr(puVar2);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,pwVar3,_Var1);
  return;
}




void FUN_140006590(undefined8 param_1,undefined8 param_2)

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
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_88;
  local_68 = (undefined1 *)FUN_140006020(param_1);
  local_58 = (undefined8 *)FUN_140006020(param_2);
  local_60 = local_58[2];
  local_48 = Myptr(local_58);
  if (local_60 < 8) {
    copy(local_68,(undefined1 *)local_48,8);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(undefined8 *)(local_68 + 0x18) = 7;
  }
  else {
    local_50 = FUN_140006020(param_1);
    local_38 = FUN_140004180(param_1);
    local_30 = local_60 | 7;
    p_Var1 = std::_Min_value<unsigned___int64>(&local_30,&local_38);
    local_40 = *p_Var1;
    local_20 = allocate(local_50,local_40 + 1);
    uVar2 = FUN_140001470(local_68);
    construct<>(local_50,uVar2,&local_20);
    local_28 = local_60 + 1;
    puVar3 = (undefined1 *)FUN_140001470(local_20);
    copy(puVar3,(undefined1 *)local_48,local_28);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(__uint64 *)(local_68 + 0x18) = local_40;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_140006710(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_140006020(param_2);
  uVar2 = FUN_140006020(param_1);
  puVar3 = (undefined1 *)FUN_140001470(uVar2);
  puVar4 = (undefined1 *)FUN_140001470(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__Tidy_init(param_2);
  return;
}




void FUN_140006790(undefined8 param_1,undefined8 param_2)

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
  local_10 = FUN_140001470(param_2);
  FUN_140006710(param_1,local_10);
  return;
}




longlong FUN_1400067f0(longlong param_1,undefined8 param_2,__uint64 param_3,__uint64 param_4,
                      undefined8 param_5)

{
  FUN_140009130(param_1,param_5);
  FID_conflict__Tidy_init(param_1);
  FUN_140007fa0(param_1,param_2,param_3,param_4);
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
  
  FUN_140003f90(this);
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
  bVar1 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(local_20);
  if (bVar1) {
    local_10 = *(void **)local_20;
    local_18 = FUN_140006020(this);
    FUN_140001470(local_20);
    FUN_140001460();
    FUN_140007bf0(local_18,local_10,*(longlong *)(local_20 + 0x18) + 1);
  }
  *(undefined8 *)(local_20 + 0x10) = 0;
  *(undefined8 *)(local_20 + 0x18) = 0xf;
  local_28[0] = 0;
  FUN_1400013e0(local_20,local_28);
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
  
  local_10 = (undefined1 *)FUN_140006020(this);
  *(undefined8 *)(local_10 + 0x10) = 0;
  *(undefined8 *)(local_10 + 0x18) = 0xf;
  local_18[0] = 0;
  FUN_1400013e0(local_10,local_18);
  return;
}




void FUN_140006980(undefined8 param_1,longlong param_2)

{
  undefined1 local_28 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  longlong local_18;
  _String_val<struct_std::_Simple_types<char>_> *local_10;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_1);
  local_28[0] = 0;
  local_10 = Myptr(local_20);
  *(longlong *)(local_20 + 0x10) = param_2;
  local_18 = param_2;
  FUN_1400013e0(local_10 + param_2,local_28);
  return;
}




void FUN_1400069f0(undefined8 param_1)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_140006020(param_1);
  FUN_140001450();
  pvVar1 = (void *)*puVar3;
  uVar4 = FUN_140006020(param_1);
  FUN_140001470(puVar3);
  FUN_140001460();
  lVar2 = puVar3[2];
  puVar5 = (undefined1 *)FUN_140001470(pvVar1);
  FUN_140001350((undefined1 *)puVar3,puVar5,lVar2 + 1);
  FUN_140007bf0(uVar4,pvVar1,puVar3[3] + 1);
  puVar3[3] = 0xf;
  return;
}




void FUN_140006ab0(undefined8 param_1)

{
  ulonglong *puVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  __uint64 local_28;
  __uint64 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  FUN_140006020(param_1);
  local_18 = FUN_140007f90();
  local_38 = 0x10;
  puVar1 = _Max_value<>(&local_18,&local_38);
  local_30 = *puVar1;
  local_28 = local_30 - 1;
  local_20 = FUN_140001300();
  std::_Min_value<unsigned___int64>(&local_20,&local_28);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_140006b40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_18 [3];
  
  puVar1 = FID_conflict_begin(param_1,local_18);
  FUN_1400060a0(puVar1);
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
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
  local_18 = *(ulonglong *)(local_20 + 0x10);
  if (local_18 < *(ulonglong *)(local_20 + 0x18)) {
    *(ulonglong *)(local_20 + 0x10) = local_18 + 1;
    local_10 = Myptr(local_20);
    FUN_1400013e0(local_10 + local_18,local_res10);
    local_28 = 0;
    FUN_1400013e0(local_10 + local_18 + 1,&local_28);
  }
  else {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_140009560(this,1,local_27[0],local_res10[0]);
  }
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl `public: void __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::push_back(char)
   __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64 const,unsigned
   __int64,char)const __ptr64
    public: void __cdecl <lambda_319d5e083f45f90dcdce5dce53cbb275>::operator()(char * __ptr64
   const,char const * __ptr64 const,unsigned __int64,char)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  undefined1 local_18 [24];
  
  FUN_140001350(param_2,param_3,param_4);
  FUN_1400013e0(param_2 + param_4,&stack0x00000028);
  local_18[0] = 0;
  FUN_1400013e0(param_2 + param_4 + 1,local_18);
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
  
  this_00 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
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
   >::assign(unsigned __int64,char) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1,char param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28;
  undefined1 local_27 [7];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  _String_val<struct_std::_Simple_types<char>_> *local_18;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
  if (*(ulonglong *)(local_20 + 0x18) < param_1) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_140009750(this,param_1,local_27[0],param_2);
  }
  else {
    local_18 = Myptr(local_20);
    *(__uint64 *)(local_20 + 0x10) = param_1;
    FUN_1400013b0(local_18,param_1,param_2);
    local_28 = 0;
    FUN_1400013e0(local_18 + param_1,&local_28);
  }
  return this;
}




void FUN_140006e50(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined1 param_4)

{
  undefined1 local_18 [24];
  
  FUN_1400013b0(param_2,param_3,param_4);
  local_18[0] = 0;
  FUN_1400013e0(param_2 + param_3,local_18);
  return;
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
  _Var2 = FUN_140001470(lVar1);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
  if (*(ulonglong *)(local_20 + 0x18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_1400098b0(this,param_2,local_27[0],param_1);
  }
  else {
    local_18 = Myptr(local_20);
    *(__uint64 *)(local_20 + 0x10) = param_2;
    char_traits<char>::move((char *)local_18,param_1,param_2);
    local_28 = 0;
    FUN_1400013e0(local_18 + param_2,&local_28);
  }
  return this;
}




void FUN_140006fb0(undefined8 param_1,undefined1 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined1 local_18 [24];
  
  FUN_140001350(param_2,param_4,param_3);
  local_18[0] = 0;
  FUN_1400013e0(param_2 + param_3,local_18);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(unsigned __int64,char) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1,char param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28;
  undefined1 local_27 [7];
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  longlong local_18;
  _String_val<struct_std::_Simple_types<char>_> *local_10;
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
  local_18 = *(longlong *)(local_20 + 0x10);
  if ((ulonglong)(*(longlong *)(local_20 + 0x18) - local_18) < param_1) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_140009a10(this,param_1,local_27[0],param_1,param_2);
  }
  else {
    *(__uint64 *)(local_20 + 0x10) = local_18 + param_1;
    local_10 = Myptr(local_20);
    FUN_1400013b0(local_10 + local_18,param_1,param_2);
    local_28 = 0;
    FUN_1400013e0(local_10 + local_18 + param_1,&local_28);
  }
  return this;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::append(unsigned __int64,char)
   __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64 const,unsigned
   __int64,unsigned __int64,char)const __ptr64
    public: void __cdecl <lambda_e1befb086ad3257e3f042a63030725f7>::operator()(char * __ptr64
   const,char const * __ptr64 const,unsigned __int64,unsigned __int64,char)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void FID_conflict_operator__
               (undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
               longlong param_5,undefined1 param_6)

{
  undefined1 local_18 [24];
  
  FUN_140001350(param_2,param_3,param_4);
  FUN_1400013b0(param_2 + param_4,param_5,param_6);
  local_18[0] = 0;
  FUN_1400013e0(param_2 + param_4 + param_5,local_18);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(this);
  local_18 = *(longlong *)(local_20 + 0x10);
  if ((ulonglong)(*(longlong *)(local_20 + 0x18) - local_18) < param_2) {
    puVar2 = local_27;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_140009c20(this,param_2,local_27[0],param_1,param_2);
  }
  else {
    *(__uint64 *)(local_20 + 0x10) = local_18 + param_2;
    local_10 = Myptr(local_20);
    char_traits<char>::move((char *)(local_10 + local_18),param_1,param_2);
    local_28 = 0;
    FUN_1400013e0(local_10 + local_18 + param_2,&local_28);
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
  
  FUN_140001350(param_2,param_3,param_4);
  FUN_140001350(param_2 + param_4,param_5,param_6);
  local_18[0] = 0;
  FUN_1400013e0(param_2 + param_4 + param_6,local_18);
  return;
}




void FUN_140007340(undefined8 param_1,undefined8 param_2)

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
  
  local_18 = DAT_140013010 ^ (ulonglong)auStack_88;
  local_68 = (undefined1 *)FUN_140006020(param_1);
  local_58 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_2);
  local_60 = *(ulonglong *)(local_58 + 0x10);
  local_48 = Myptr(local_58);
  if (local_60 < 0x10) {
    FUN_140001350(local_68,local_48,0x10);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(undefined8 *)(local_68 + 0x18) = 0xf;
  }
  else {
    local_50 = FUN_140006020(param_1);
    local_38 = FUN_140006ab0(param_1);
    local_30 = local_60 | 0xf;
    p_Var1 = std::_Min_value<unsigned___int64>(&local_30,&local_38);
    local_40 = *p_Var1;
    local_20 = allocate(local_50,local_40 + 1);
    uVar2 = FUN_140001470(local_68);
    construct<>(local_50,uVar2,&local_20);
    local_28 = local_60 + 1;
    puVar3 = (undefined1 *)FUN_140001470(local_20);
    FUN_140001350(puVar3,local_48,local_28);
    *(ulonglong *)(local_68 + 0x10) = local_60;
    *(__uint64 *)(local_68 + 0x18) = local_40;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_1400074c0(undefined8 param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_140006020(param_2);
  uVar2 = FUN_140006020(param_1);
  puVar3 = (undefined1 *)FUN_140001470(uVar2);
  puVar4 = (undefined1 *)FUN_140001470(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_2);
  return;
}




basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140007540(basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t *param_2,
             int param_3,int param_4,int param_5)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  
  if (param_5 != 0) {
    *(undefined **)param_1 = &DAT_14000db38;
    *(undefined **)(param_1 + 0x10) = &DAT_14000db68;
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
    basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0xb8));
  }
  std::basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>
            (param_1,(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x18))
  ;
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_fstream<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb8;
  FUN_1400080e0((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)(param_1 + 0x18),0);
  pbVar1 = FUN_140008020((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
                         (param_1 + 0x18),param_2,param_3,param_4);
  if (pbVar1 == (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0) {
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::setstate
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return param_1;
}




void FUN_1400076a0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  wchar_t *pwVar2;
  
  pbVar1 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
           std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
  if (pbVar1 != param_1 + 0x70) {
    pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
    *(wchar_t **)(param_1 + 0x88) = pwVar2;
    pwVar2 = std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::egptr(param_1);
    *(wchar_t **)(param_1 + 0x90) = pwVar2;
  }
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
            (param_1,(wchar_t *)(param_1 + 0x70),(wchar_t *)(param_1 + 0x70),
             (wchar_t *)(param_1 + 0x72));
  return;
}




void FUN_140007730(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar1;
  
  pbVar1 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
           std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::eback(param_1);
  if (pbVar1 == param_1 + 0x70) {
    std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::setg
              (param_1,*(wchar_t **)(param_1 + 0x88),*(wchar_t **)(param_1 + 0x88),
               *(wchar_t **)(param_1 + 0x90));
  }
  return;
}




void FUN_140007790(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  codecvt_base *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::codecvt_base::always_noconv(param_2);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar2 = FUN_140001470(param_2);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(param_1);
  }
  return;
}




void FUN_1400077f0(longlong *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined1 auStackY_a8 [32];
  short local_76;
  short local_74 [2];
  int local_70;
  uint local_6c;
  size_t local_68;
  code *local_60;
  codecvt<wchar_t,char,struct__Mbstatet> *local_58;
  undefined8 local_50;
  char *local_48;
  char local_40 [32];
  char local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStackY_a8;
  if ((param_1[0xd] != 0) && (*(char *)((longlong)param_1 + 0x72) != '\0')) {
    local_60 = *(code **)(*param_1 + 0x18);
    uVar2 = FUN_140007c20();
    local_76 = (*local_60)(param_1,uVar2 & 0xffff);
    uVar3 = FUN_140007c20();
    local_74[0] = (short)uVar3;
    bVar1 = eq_int_type(local_74,&local_76);
    if (!bVar1) {
      local_50 = 0x20;
      local_58 = (codecvt<wchar_t,char,struct__Mbstatet> *)param_1[0xd];
      local_70 = std::codecvt<wchar_t,char,struct__Mbstatet>::unshift
                           (local_58,(_Mbstatet *)((longlong)param_1 + 0x74),local_40,local_20,
                            &local_48);
      if (local_70 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x72) = 0;
      }
      else if (local_70 != 1) goto LAB_140007986;
      local_68 = (longlong)local_48 - (longlong)local_40;
      if ((local_68 == 0) ||
         (sVar4 = fwrite(local_40,1,local_68,(FILE *)param_1[0x10]), local_68 == sVar4)) {
        local_6c = (uint)(*(char *)((longlong)param_1 + 0x72) == '\0');
      }
    }
  }
LAB_140007986:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_a8);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000140007a1d) */

void FUN_1400079a0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,
                  longlong param_2,int param_3)

{
  undefined1 auStack_78 [64];
  uint local_38;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_78;
  local_38 = (uint)(param_3 == 1);
  param_1[0x7c] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)(param_3 == 1);
  param_1[0x72] = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>)0x0;
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::_Init(param_1);
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_140013b38;
  *(undefined8 *)(param_1 + 0x68) = 0;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
  return;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140007af0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1)

{
  char cVar1;
  int iVar2;
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    local_18 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0;
  }
  else {
    cVar1 = FUN_1400077f0((longlong *)param_1);
    local_18 = param_1;
    if (cVar1 == '\0') {
      local_18 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0;
    }
    iVar2 = fclose(*(FILE **)(param_1 + 0x80));
    if (iVar2 != 0) {
      local_18 = (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0;
    }
  }
  FUN_1400079a0(param_1,0,2);
  return local_18;
}




bool FUN_140007b80(longlong param_1)

{
  return *(longlong *)(param_1 + 0x80) != 0;
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
  
  _Var1 = FUN_140001470(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_140007bf0(undefined8 param_1,void *param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
}




undefined8 FUN_140007c20(void)

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
  uVar2 = FUN_140007c20();
  if ((uint)uVar1 == ((uint)uVar2 & 0xffff)) {
    uVar3 = FUN_140007c20();
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
  FUN_1400012c0(param_1,param_2,param_3);
  return;
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
  FUN_140001290(param_1,param_2,param_3);
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




undefined4 FUN_140007da0(ushort *param_1,ushort *param_2,longlong param_3)

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




longlong FUN_140007e50(longlong *param_1)

{
  return *param_1 + param_1[1];
}




undefined8 * FUN_140007e70(longlong param_1,undefined8 *param_2)

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




void FUN_140007f30(void)

{
  std::_Xout_of_range("invalid string position");
  return;
}




undefined8 * FUN_140007f50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_140001460();
  return param_1;
}




undefined8 FUN_140007f90(void)

{
  return 0xffffffffffffffff;
}




void FUN_140007fa0(undefined8 param_1,undefined8 param_2,__uint64 param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 _Var1;
  undefined8 *puVar2;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140006020(param_2);
  std::_String_val<struct_std::_Simple_types<char>_>::_Check_offset(this,param_3);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this,param_3,param_4);
  puVar2 = Myptr((undefined8 *)this);
  FID_conflict_assign(param_1,(undefined1 *)((longlong)puVar2 + param_3 * 2),_Var1);
  return;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_140008020(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,wchar_t *param_2,
             int param_3,int param_4)

{
  _iobuf *p_Var1;
  locale *plVar2;
  codecvt_base *pcVar3;
  undefined1 local_18 [24];
  
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var1 = std::_Fiopen(param_2,param_3,param_4), p_Var1 != (_iobuf *)0x0)) {
    FUN_1400079a0(param_1,(longlong)p_Var1,1);
    plVar2 = (locale *)
             std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::getloc(param_1);
    pcVar3 = (codecvt_base *)FUN_140008260(plVar2);
    FUN_140007790(param_1,pcVar3);
    FUN_140001660((longlong)local_18);
    return param_1;
  }
  return (basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)0x0;
}




basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *
FUN_1400080e0(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *param_1,longlong param_2)

{
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>(param_1);
  *(undefined ***)param_1 = std::basic_filebuf<wchar_t,struct_std::char_traits<wchar_t>_>::vftable;
  FUN_1400079a0(param_1,param_2,0);
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




undefined * FUN_1400081e0(void)

{
  int iVar1;
  
  iVar1 = std::_Execute_once((once_flag *)&DAT_140013ae0,
                             (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_14000a600,
                             &DAT_140013b28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return &DAT_140013b28;
}




undefined * FUN_140008220(void)

{
  int iVar1;
  
  iVar1 = std::_Execute_once((once_flag *)&DAT_140013af0,
                             (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_14000a640,
                             &DAT_140013b18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return &DAT_140013b18;
}




void FUN_140008260(locale *param_1)

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
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_18 [8];
  ulonglong local_10;
  
  local_48 = 0xfffffffffffffffe;
  local_10 = DAT_140013010 ^ (ulonglong)auStack_88;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_140013ae8;
  local_58 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  local_60 = (_Facet_base *)FUN_1400016f0((longlong)param_1,local_58);
  if (local_60 == (_Facet_base *)0x0) {
    if (local_28 == (_Facet_base *)0x0) {
      _Var1 = std::codecvt<wchar_t,char,struct__Mbstatet>::_Getcat((facet **)&local_28,param_1);
      if (_Var1 == 0xffffffffffffffff) {
        FID_conflict_bad_cast(local_40);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_40,(ThrowInfo *)&DAT_140010708);
      }
      local_68 = local_28;
      FUN_1400023a0(local_18,8);
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_><struct_std::default_delete<class_std::_Facet_base>,0>
                (local_18,local_68);
      std::_Facet_Register(local_68);
      (**(code **)(*(longlong *)local_68 + 8))(local_68);
      DAT_140013ae8 = local_28;
      local_60 = local_28;
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      release(local_18);
      FUN_140009f80(local_18);
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




longlong FUN_1400083c0(undefined8 param_1,longlong param_2,allocator<char> *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_38 [16];
  undefined8 local_28 [3];
  
  puVar1 = FUN_1400042b0(param_1,local_28);
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *(undefined1 *)puVar1;
    puVar1 = (undefined8 *)((longlong)puVar1 + 1);
    puVar3 = puVar3 + 1;
  }
  FUN_14000a680(param_2,local_38,param_3);
  return param_2;
}




void FUN_140008440(longlong param_1,UINT param_2,undefined8 *param_3,allocator<char> *param_4)

{
  bool bVar1;
  ulonglong uVar2;
  LPCWSTR pWVar3;
  LPSTR pCVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  allocator<char> *paVar9;
  undefined8 uVar10;
  undefined1 auStackY_a8 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_140013010 ^ (ulonglong)auStackY_a8;
  puVar7 = param_3;
  paVar9 = param_4;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_38,param_4);
  bVar1 = FUN_140004e90((longlong)param_3);
  if (!bVar1) {
    puVar6 = param_3;
    uVar2 = FUN_140001850((longlong)param_3);
    if (0x7fffffff < uVar2) {
      FUN_1400021e0(puVar6,param_4,puVar7,paVar9);
    }
    uVar2 = FUN_140001850((longlong)param_3);
    pWVar3 = (LPCWSTR)FUN_1400022d0(param_3);
    uVar10 = 0;
    uVar5 = uVar2 & 0xffffffff;
    uVar2 = __std_fs_convert_wide_to_narrow(param_2,pWVar3,(int)uVar2,(LPSTR)0x0,0);
    uVar2 = FUN_140002260(uVar2,pWVar3,uVar5,uVar10);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::resize
              (local_38,(longlong)(int)uVar2,'\0');
    pCVar4 = (LPSTR)FUN_140004910(local_38);
    uVar5 = FUN_140001850((longlong)param_3);
    pWVar3 = (LPCWSTR)FUN_1400022d0(param_3);
    uVar8 = uVar5 & 0xffffffff;
    uVar2 = __std_fs_convert_wide_to_narrow(param_2,pWVar3,(int)uVar5,pCVar4,(int)uVar2);
    FUN_140002260(uVar2,pWVar3,uVar8,pCVar4);
  }
  FUN_140004cb0(param_1,local_38);
  FUN_140004c80(local_38);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_a8);
  return;
}




longlong FUN_1400085e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_14000a7a0(param_1,param_2);
  return param_1;
}




void FUN_140008630(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined1 *param_2)

{
  FUN_14000a860(param_1,param_2);
  return;
}




void FUN_140008660(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  __uint64 _Var1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  longlong local_40;
  undefined8 local_38;
  _String_alloc<struct_std::_String_base_types<char,class_std::allocator<char>_>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_140013010 ^ (ulonglong)auStack_68;
  local_48 = 0;
  basic_string<>(local_30);
  local_40 = FUN_140004260(param_2);
  _Var1 = std::_WChar_traits<wchar_t>::length(param_3);
  uVar2 = FUN_140001470(local_40 + _Var1);
  FUN_140004060(local_30,uVar2);
  FUN_1400044d0((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_2);
  FUN_1400044a0((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_3);
  FUN_140004600(param_1,local_30);
  local_48 = local_48 | 1;
  FUN_140004530(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *
FUN_140008740(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
              *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pbVar2 = local_28;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
  }
  local_20 = FUN_140001470(param_3);
  local_18 = FUN_140001470(param_2);
  local_28[1] = local_28[0];
  local_28[2] = local_28[0];
  FUN_14000a8f0(param_1,(ulonglong)local_28[0],local_18,local_20);
  return param_1;
}




void FUN_1400087d0(undefined8 param_1,wchar_t *param_2)

{
  FUN_14000a260(param_1,param_2);
  return;
}




undefined8 * FUN_140008800(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14000a980(param_1,param_2,param_3);
  return param_1;
}




longlong FUN_140008840(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined1 *)FUN_140001470(param_2 + 8);
  **(undefined1 **)(param_1 + 8) = *puVar1;
  uVar2 = FUN_140001470(param_2);
  uVar2 = FUN_140001470(uVar2);
  puVar3 = (undefined8 *)FUN_140001470(param_1);
  FUN_14000a9e0(puVar3,uVar2);
  return param_1;
}




void FUN_1400088b0(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  __int64 _Var3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  uint local_c8;
  char local_c4;
  char local_c3;
  char local_c2;
  char local_c1;
  longlong local_c0;
  longlong local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98 [2];
  longlong local_90;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_88;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_80;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_78;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_70;
  __int64 local_68;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_60;
  basic_streambuf<char,struct_std::char_traits<char>_> *local_58;
  ios_base *local_50;
  basic_ios<char,struct_std::char_traits<char>_> *local_40;
  basic_ostream<char,struct_std::char_traits<char>_> *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_18 = DAT_140013010 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_b8 = length((longlong)param_2);
  _Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((_Var3 < 1) ||
     (_Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     _Var3 <= local_b8)) {
    local_90 = 0;
  }
  else {
    _Var3 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    local_90 = _Var3 - local_b8;
  }
  local_c0 = local_90;
  FUN_14000a060(local_28,param_1);
  cVar1 = FUN_14000a010((longlong)local_28);
  if (cVar1 == '\0') {
    local_c8 = local_c8 | 4;
  }
  else {
    local_b0 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((local_b0 & 0x1c0) != 0x40) {
      for (; 0 < local_c0; local_c0 = local_c0 + -1) {
        local_88 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_80 = local_88;
        local_c4 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_c3 = local_c4;
        local_ac = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                             (local_80,local_c4);
        local_a8 = local_ac;
        uVar4 = FUN_140001440();
        local_a4 = (int)uVar4;
        bVar2 = eq_int_type(&local_a4,&local_a8);
        if (bVar2) {
          local_c8 = local_c8 | 4;
          break;
        }
      }
    }
    if (local_c8 == 0) {
      local_78 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      local_70 = local_78;
      local_68 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                           (local_78,param_2,local_b8);
      if (local_68 != local_b8) {
        local_c8 = local_c8 | 4;
      }
    }
    if (local_c8 == 0) {
      for (; 0 < local_c0; local_c0 = local_c0 + -1) {
        local_60 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_58 = local_60;
        local_c2 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                             ((basic_ios<char,struct_std::char_traits<char>_> *)
                              (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        local_c1 = local_c2;
        local_a0 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                             (local_58,local_c2);
        local_9c = local_a0;
        uVar4 = FUN_140001440();
        local_98[0] = (int)uVar4;
        bVar2 = eq_int_type(local_98,&local_9c);
        if (bVar2) {
          local_c8 = local_c8 | 4;
          break;
        }
      }
    }
    local_50 = (ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4));
    std::ios_base::width(local_50,0);
  }
  local_40 = (basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4));
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate(local_40,local_c8,false);
  local_38 = param_1;
  FUN_14000a020(local_28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_e8);
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_140008cf0(basic_ostream<char,struct_std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush(param_1);
  return param_1;
}




void FUN_140008d50(undefined8 param_1,ulonglong param_2,undefined1 param_3)

{
  longlong lVar1;
  __uint64 _Var2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  void *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_78;
  local_res18[0] = param_3;
  local_58 = (undefined8 *)FUN_140006020(param_1);
  local_50 = local_58[2];
  lVar1 = FUN_140004180(param_1);
  if ((ulonglong)(lVar1 - local_50) < param_2) {
    FUN_14000a160();
  }
  local_40 = local_50 + param_2;
  local_30 = local_58[3];
  local_38 = FUN_14000a180(param_1,local_40);
  local_48 = FUN_140006020(param_1);
  _Var2 = local_38 + 1;
  if (local_38 == -1) {
    _Var2 = 0xffffffffffffffff;
  }
  local_18 = allocate(local_48,_Var2);
  FUN_140001450();
  local_58[2] = local_40;
  local_58[3] = local_38;
  local_20 = (undefined1 *)FUN_140001470(local_18);
  if (local_30 < 8) {
    FUN_140004140(local_res18,local_20,(undefined1 *)local_58,local_50);
    uVar4 = FUN_140001470(local_58);
    construct<>(local_48,uVar4,&local_18);
  }
  else {
    local_28 = (void *)*local_58;
    puVar3 = (undefined1 *)FUN_140001470(local_28);
    FUN_140004140(local_res18,local_20,puVar3,local_50);
    deallocate(local_48,local_28,local_30 + 1);
    *local_58 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
  return;
}




void FUN_140008f20(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  __uint64 _Var7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined1 auStackY_88 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStackY_88;
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar4 = (undefined8 *)FUN_140006020(param_1);
  lVar1 = puVar4[2];
  lVar5 = FUN_140004180(param_1);
  if ((ulonglong)(lVar5 - lVar1) < param_2) {
    FUN_14000a160();
  }
  uVar2 = puVar4[3];
  lVar5 = FUN_14000a180(param_1,lVar1 + param_2);
  uVar6 = FUN_140006020(param_1);
  _Var7 = lVar5 + 1;
  if (lVar5 == -1) {
    _Var7 = 0xffffffffffffffff;
  }
  local_18 = allocate(uVar6,_Var7);
  FUN_140001450();
  puVar4[2] = lVar1 + param_2;
  puVar4[3] = lVar5;
  puVar8 = (undefined1 *)FUN_140001470(local_18);
  if (uVar2 < 8) {
    FID_conflict_operator__(local_res18,puVar8,(undefined1 *)puVar4,lVar1,local_res20,param_5);
    uVar10 = FUN_140001470(puVar4);
    construct<>(uVar6,uVar10,&local_18);
  }
  else {
    pvVar3 = (void *)*puVar4;
    puVar9 = (undefined1 *)FUN_140001470(pvVar3);
    FID_conflict_operator__(local_res18,puVar8,puVar9,lVar1,local_res20,param_5);
    deallocate(uVar6,pvVar3,uVar2 + 1);
    *puVar4 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_88);
  return;
}




longlong FUN_140009130(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_27;
  
  uVar1 = FUN_140001470(param_2);
  FUN_14000aa40(param_1,(ulonglong)local_27,uVar1);
  return param_1;
}




void FUN_140009180(undefined8 param_1,ulonglong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 local_res18 [16];
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  void *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_78;
  local_res18[0] = param_3;
  local_58 = (undefined8 *)FUN_140006020(param_1);
  local_50 = local_58[2];
  lVar1 = FUN_140006ab0(param_1);
  if ((ulonglong)(lVar1 - local_50) < param_2) {
    FUN_14000a160();
  }
  local_40 = local_50 + param_2;
  local_30 = local_58[3];
  local_38 = FUN_14000a2e0(param_1,local_40);
  local_48 = FUN_140006020(param_1);
  lVar1 = local_38 + 1;
  if (local_38 == -1) {
    lVar1 = -1;
  }
  local_18 = allocate(local_48,lVar1);
  FUN_140001450();
  local_58[2] = local_40;
  local_58[3] = local_38;
  local_20 = (undefined1 *)FUN_140001470(local_18);
  if (local_30 < 0x10) {
    FUN_140004860(local_res18,local_20,(undefined1 *)local_58,local_50);
    uVar3 = FUN_140001470(local_58);
    construct<>(local_48,uVar3,&local_18);
  }
  else {
    local_28 = (void *)*local_58;
    puVar2 = (undefined1 *)FUN_140001470(local_28);
    FUN_140004860(local_res18,local_20,puVar2,local_50);
    FUN_140007bf0(local_48,local_28,local_30 + 1);
    *local_58 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_78);
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
  FUN_140001470(param_1);
  _String_val<>(param_1);
  return param_1;
}




void FUN_1400093b0(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4)

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
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  local_res18[0] = param_3;
  local_res20 = param_4;
  uVar1 = FUN_140004180(param_1);
  if (uVar1 < param_2) {
    FUN_14000a160();
  }
  local_38 = (undefined8 *)FUN_140006020(param_1);
  local_20 = local_38[3];
  local_28 = FUN_14000a180(param_1,param_2);
  local_30 = FUN_140006020(param_1);
  _Var2 = local_28 + 1;
  if (local_28 == -1) {
    _Var2 = 0xffffffffffffffff;
  }
  local_18 = allocate(local_30,_Var2);
  FUN_140001450();
  local_38[2] = param_2;
  local_38[3] = local_28;
  puVar3 = (undefined1 *)FUN_140001470(local_18);
  FID_conflict_operator__(local_res18,puVar3,param_2,local_res20);
  if (local_20 < 8) {
    uVar4 = FUN_140001470(local_38);
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
  
  puVar1 = (undefined8 *)FUN_140001040(8,param_2);
  puVar2 = (undefined8 *)FUN_140001470(param_3);
  *puVar1 = *puVar2;
  return;
}




void FUN_140009560(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  void *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_88;
  local_res18[0] = param_3;
  local_res20 = param_4;
  local_58 = (undefined8 *)FUN_140006020(param_1);
  local_50 = local_58[2];
  lVar1 = FUN_140006ab0(param_1);
  if ((ulonglong)(lVar1 - local_50) < param_2) {
    FUN_14000a160();
  }
  local_40 = local_50 + param_2;
  local_30 = local_58[3];
  local_38 = FUN_14000a2e0(param_1,local_40);
  local_48 = FUN_140006020(param_1);
  lVar1 = local_38 + 1;
  if (local_38 == -1) {
    lVar1 = -1;
  }
  local_18 = allocate(local_48,lVar1);
  FUN_140001450();
  local_58[2] = local_40;
  local_58[3] = local_38;
  local_20 = (undefined1 *)FUN_140001470(local_18);
  if (local_30 < 0x10) {
    local_68 = local_res20;
    FID_conflict_operator__(local_res18,local_20,(undefined1 *)local_58,local_50);
    uVar3 = FUN_140001470(local_58);
    construct<>(local_48,uVar3,&local_18);
  }
  else {
    local_28 = (void *)*local_58;
    puVar2 = (undefined1 *)FUN_140001470(local_28);
    local_68 = local_res20;
    FID_conflict_operator__(local_res18,local_20,puVar2,local_50);
    FUN_140007bf0(local_48,local_28,local_30 + 1);
    *local_58 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_88);
  return;
}




void FUN_140009750(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  local_res18[0] = param_3;
  local_res20 = param_4;
  uVar1 = FUN_140006ab0(param_1);
  if (uVar1 < param_2) {
    FUN_14000a160();
  }
  local_38 = (undefined8 *)FUN_140006020(param_1);
  local_20 = local_38[3];
  local_28 = FUN_14000a2e0(param_1,param_2);
  local_30 = FUN_140006020(param_1);
  lVar2 = local_28 + 1;
  if (local_28 == -1) {
    lVar2 = -1;
  }
  local_18 = allocate(local_30,lVar2);
  FUN_140001450();
  local_38[2] = param_2;
  local_38[3] = local_28;
  puVar3 = (undefined1 *)FUN_140001470(local_18);
  FUN_140006e50(local_res18,puVar3,param_2,local_res20);
  if (local_20 < 0x10) {
    uVar4 = FUN_140001470(local_38);
    construct<>(local_30,uVar4,&local_18);
  }
  else {
    FUN_140007bf0(local_30,(void *)*local_38,local_20 + 1);
    *local_38 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_1400098b0(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4)

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
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  local_res18[0] = param_3;
  local_res20 = param_4;
  uVar1 = FUN_140006ab0(param_1);
  if (uVar1 < param_2) {
    FUN_14000a160();
  }
  local_38 = (undefined8 *)FUN_140006020(param_1);
  local_20 = local_38[3];
  local_28 = FUN_14000a2e0(param_1,param_2);
  local_30 = FUN_140006020(param_1);
  lVar2 = local_28 + 1;
  if (local_28 == -1) {
    lVar2 = -1;
  }
  local_18 = allocate(local_30,lVar2);
  FUN_140001450();
  local_38[2] = param_2;
  local_38[3] = local_28;
  puVar3 = (undefined1 *)FUN_140001470(local_18);
  FUN_140006fb0(local_res18,puVar3,param_2,local_res20);
  if (local_20 < 0x10) {
    uVar4 = FUN_140001470(local_38);
    construct<>(local_30,uVar4,&local_18);
  }
  else {
    FUN_140007bf0(local_30,(void *)*local_38,local_20 + 1);
    *local_38 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_140009a10(undefined8 param_1,ulonglong param_2,undefined1 param_3,longlong param_4,
                  undefined1 param_5)

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
  longlong local_res20;
  undefined1 auStackY_88 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStackY_88;
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar4 = (undefined8 *)FUN_140006020(param_1);
  lVar1 = puVar4[2];
  lVar5 = FUN_140006ab0(param_1);
  if ((ulonglong)(lVar5 - lVar1) < param_2) {
    FUN_14000a160();
  }
  uVar2 = puVar4[3];
  lVar5 = FUN_14000a2e0(param_1,lVar1 + param_2);
  uVar6 = FUN_140006020(param_1);
  lVar7 = lVar5 + 1;
  if (lVar5 == -1) {
    lVar7 = -1;
  }
  local_18 = allocate(uVar6,lVar7);
  FUN_140001450();
  puVar4[2] = lVar1 + param_2;
  puVar4[3] = lVar5;
  puVar8 = (undefined1 *)FUN_140001470(local_18);
  if (uVar2 < 0x10) {
    FID_conflict_operator__(local_res18,puVar8,(undefined1 *)puVar4,lVar1,local_res20,param_5);
    uVar10 = FUN_140001470(puVar4);
    construct<>(uVar6,uVar10,&local_18);
  }
  else {
    pvVar3 = (void *)*puVar4;
    puVar9 = (undefined1 *)FUN_140001470(pvVar3);
    FID_conflict_operator__(local_res18,puVar8,puVar9,lVar1,local_res20,param_5);
    FUN_140007bf0(uVar6,pvVar3,uVar2 + 1);
    *puVar4 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_88);
  return;
}




void FUN_140009c20(undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4,
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
  
  local_10 = DAT_140013010 ^ (ulonglong)auStackY_88;
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar4 = (undefined8 *)FUN_140006020(param_1);
  lVar1 = puVar4[2];
  lVar5 = FUN_140006ab0(param_1);
  if ((ulonglong)(lVar5 - lVar1) < param_2) {
    FUN_14000a160();
  }
  uVar2 = puVar4[3];
  lVar5 = FUN_14000a2e0(param_1,lVar1 + param_2);
  uVar6 = FUN_140006020(param_1);
  lVar7 = lVar5 + 1;
  if (lVar5 == -1) {
    lVar7 = -1;
  }
  local_18 = allocate(uVar6,lVar7);
  FUN_140001450();
  puVar4[2] = lVar1 + param_2;
  puVar4[3] = lVar5;
  puVar8 = (undefined1 *)FUN_140001470(local_18);
  if (uVar2 < 0x10) {
    FID_conflict_operator__(local_res18,puVar8,(undefined1 *)puVar4,lVar1,local_res20,param_5);
    uVar10 = FUN_140001470(puVar4);
    construct<>(uVar6,uVar10,&local_18);
  }
  else {
    pvVar3 = (void *)*puVar4;
    puVar9 = (undefined1 *)FUN_140001470(pvVar3);
    FID_conflict_operator__(local_res18,puVar8,puVar9,lVar1,local_res20,param_5);
    FUN_140007bf0(uVar6,pvVar3,uVar2 + 1);
    *puVar4 = local_18;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_88);
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
      pvVar1 = (void *)FUN_140001480(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_14000aab0(param_1);
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
    FUN_1400014a0((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
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




undefined8 * FUN_140009f00(undefined8 *param_1,longlong param_2)

{
  FUN_140001180(param_1,param_2);
  *param_1 = std::bad_cast::vftable;
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
  puVar2 = (undefined8 *)FUN_140006020(this);
  *puVar2 = 0;
  return p_Var1;
}




void FUN_140009f80(unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   *param_1)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           get(param_1);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140006020(param_1);
    p_Var1 = std::
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             ::get(param_1);
    FUN_14000a420(uVar2,(undefined8 *)p_Var1);
  }
  return;
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
  FUN_140001470(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




undefined1 FUN_14000a010(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}




void FUN_14000a020(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  FUN_14000a490(param_1);
  return;
}




longlong *
FUN_14000a060(longlong *param_1,basic_ostream<char,struct_std::char_traits<char>_> *param_2)

{
  bool bVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  
  FUN_14000a520(param_1,(longlong)param_2);
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  if (bVar1) {
    pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        (param_2 + *(int *)(*(longlong *)param_2 + 4)));
    if (pbVar2 != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0) {
      pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                         ((basic_ios<char,struct_std::char_traits<char>_> *)
                          (param_2 + *(int *)(*(longlong *)param_2 + 4)));
      if (pbVar2 != param_2) {
        pbVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::tie
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            (param_2 + *(int *)(*(longlong *)param_2 + 4)));
        std::basic_ostream<char,struct_std::char_traits<char>_>::flush(pbVar2);
      }
    }
  }
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  *(bool *)(param_1 + 1) = bVar1;
  return param_1;
}




void FUN_14000a160(void)

{
  std::_Xlength_error("string too long");
  return;
}




void FUN_14000a180(undefined8 param_1,ulonglong param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  local_38 = FUN_140004180(param_1);
  local_28 = FUN_140006020(param_1);
  local_18 = param_2 | 7;
  if ((local_18 <= local_38) &&
     (local_30 = *(ulonglong *)(local_28 + 0x18), local_30 <= local_38 - local_30 / 2)) {
    local_20 = local_30 + local_30 / 2;
    _Max_value<>(&local_18,&local_20);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_14000a260(undefined8 param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  ushort *puVar4;
  
  puVar2 = (undefined8 *)FUN_140006020(param_1);
  _Var3 = std::_WChar_traits<wchar_t>::length(param_2);
  lVar1 = puVar2[2];
  puVar4 = (ushort *)Myptr(puVar2);
  FUN_14000ab40(puVar4,lVar1,(ushort *)param_2,_Var3);
  return;
}




void FUN_14000a2e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_140013010 ^ (ulonglong)auStack_58;
  local_38 = FUN_140006ab0(param_1);
  local_28 = FUN_140006020(param_1);
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
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(class
   std::allocator<char> const & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          allocator<char> *param_1)

{
  FUN_140009130((longlong)this,param_1);
  _Tidy_init(this);
  return this;
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
  
  puVar1 = (undefined8 *)FUN_140006020(this);
  return (_Facet_base *)*puVar1;
}




void FUN_14000a420(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}




void FUN_14000a490(longlong *param_1)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 0x10))(pbVar1);
  }
  return;
}




longlong * FUN_14000a520(longlong *param_1,longlong param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
  *param_1 = param_2;
  pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
  if (pbVar1 != (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0) {
    pbVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        (*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4)));
    (**(code **)(*(longlong *)pbVar1 + 8))(pbVar1);
  }
  return param_1;
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




longlong FUN_14000a680(longlong param_1,undefined1 *param_2,allocator<char> *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 local_40 [24];
  undefined8 local_28 [3];
  
  puVar3 = local_40;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_40;
  puVar4 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = (undefined8 *)((longlong)puVar4 + 1);
  }
  uVar1 = FUN_14000af70();
  FUN_140008440(param_1,(UINT)uVar1,local_28,param_3);
  return param_1;
}




void FUN_14000a710(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined1 *local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_140013010 ^ (ulonglong)auStack_68;
  FUN_1400023a0((undefined1 *)local_38,0x10);
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  uVar1 = FUN_140001850((longlong)local_38);
  local_48 = FUN_140001470(uVar1);
  local_40 = (undefined1 *)FUN_1400022d0(local_38);
  FID_conflict_assign(param_1,local_40,local_48);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_68);
  return;
}




longlong FUN_14000a7a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_38 [16];
  undefined8 local_28 [3];
  
  puVar1 = FUN_14000a810(local_28,param_2);
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *(undefined1 *)puVar1;
    puVar1 = (undefined8 *)((longlong)puVar1 + 1);
    puVar3 = puVar3 + 1;
  }
  FUN_14000abe0(param_1,local_38);
  return param_1;
}




undefined8 * FUN_14000a810(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140004260(param_2);
  uVar2 = FUN_140004280(param_2);
  FUN_140002350(param_1,uVar2,uVar1);
  return param_1;
}




void FUN_14000a860(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  __uint64 local_48;
  char *local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_140013010 ^ (ulonglong)auStack_68;
  FUN_1400023a0((undefined1 *)local_38,0x10);
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  uVar1 = FUN_140001850((longlong)local_38);
  local_48 = FUN_140001470(uVar1);
  local_40 = (char *)FUN_1400022d0(local_38);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,local_40,local_48);
  __security_check_cookie(local_28 ^ (ulonglong)auStack_68);
  return;
}




_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *
FUN_14000a8f0(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
              *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_28 [8];
  undefined8 local_20;
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *local_18;
  
  pbVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = 0;
    pbVar3 = pbVar3 + 1;
  }
  local_20 = FUN_140001470(param_4);
  local_28[1] = local_28[0];
  FUN_14000ac40(param_1,(ulonglong)local_28[0],local_20);
  local_18 = param_1 + 8;
  uVar1 = FUN_140001470(param_3);
  FUN_14000aca0(local_18,uVar1);
  return param_1;
}




undefined8 * FUN_14000a980(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  pbVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
  }
  FUN_14000acd0(param_1,(ulonglong)local_18[0],param_2,param_3);
  return param_1;
}




undefined8 * FUN_14000a9e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140001470(param_2);
  FUN_140004c50((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                *param_1,(char *)*puVar1);
  uVar2 = FUN_140001470(param_2);
  FUN_140001470(uVar2);
  FUN_140001470(param_1);
  return param_1;
}




longlong FUN_14000aa40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140001470(param_3);
  _String_val<>(param_1);
  return param_1;
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
  FUN_140001470(param_2);
  return;
}




ulonglong FUN_14000aab0(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_140001480(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




undefined1 FUN_14000ab40(ushort *param_1,longlong param_2,ushort *param_3,longlong param_4)

{
  int iVar1;
  
  if ((param_2 == param_4) && (iVar1 = FUN_140007da0(param_1,param_3,param_2), iVar1 == 0)) {
    return 1;
  }
  return 0;
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




longlong FUN_14000abe0(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_24 = 0;
  local_20 = FUN_140001470(local_28);
  local_18 = param_2;
  FUN_14000ada0(param_1,param_2,local_20);
  return param_1;
}




_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *
FUN_14000ac40(_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>
              *param_1,undefined8 param_2,undefined8 param_3)

{
  _func_bool_agent_status_ptr **pp_Var1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0> *local_10;
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_14000adf0(param_1);
  local_10 = param_1;
  pp_Var1 = (_func_bool_agent_status_ptr **)FUN_140001470(param_3);
  std::_Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0>::
  _Callable_base<bool_(__cdecl*const)(enum_Concurrency::agent_status_const&___ptr64),0><bool_(__cdecl*const&___ptr64)(enum_Concurrency::agent_status_const&___ptr64)>
            (local_10,pp_Var1);
  return param_1;
}




undefined1 * FUN_14000aca0(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_140001470(param_2);
  *param_1 = *puVar1;
  return param_1;
}




undefined8 *
FUN_14000acd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_28 [8];
  undefined8 local_20;
  undefined8 *local_18;
  
  pbVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = 0;
    pbVar3 = pbVar3 + 1;
  }
  local_20 = FUN_140001470(param_4);
  local_28[1] = local_28[0];
  FUN_14000ae30(param_1,(ulonglong)local_28[0],local_20);
  local_18 = param_1 + 1;
  uVar1 = FUN_140001470(param_3);
  FUN_14000ae90(local_18,uVar1);
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
  
  puVar1 = (undefined8 *)FUN_140001470(param_3);
  *(undefined8 *)this = *puVar1;
  return this;
}




longlong FUN_14000ada0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  FUN_140009130(param_1,param_3);
  FID_conflict__Tidy_init(param_1);
  FUN_14000a710(param_1,param_2);
  return param_1;
}




undefined8 FUN_14000adf0(undefined8 param_1)

{
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
  
  puVar1 = (undefined8 *)FUN_140001470(param_1);
  *(undefined8 *)this = *puVar1;
  return this;
}




undefined8 * FUN_14000ae30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_14000adf0(param_1);
  local_10 = param_1;
  uVar1 = FUN_140001470(param_3);
  FUN_14000ae90(local_10,uVar1);
  return param_1;
}




undefined8 * FUN_14000ae90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001470(param_2);
  *param_1 = uVar1;
  return param_1;
}




void FUN_14000aebc(longlong param_1,uint param_2)

{
  std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _scalar_deleting_destructor_
            ((basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




/* Library Function - Single Match
    int (__cdecl*__cdecl `anonymous namespace'::_Runtime_dynamic_link<int (__cdecl*)(void *
   __ptr64,enum _FILE_INFO_BY_HANDLE_CLASS,void * __ptr64,unsigned long)>(int (__cdecl*volatile *
   __ptr64 const)(void * __ptr64,enum _FILE_INFO_BY_HANDLE_CLASS,void * __ptr64,unsigned
   long),wchar_t const * __ptr64 const,char const * __ptr64 const,int (__cdecl*const)(void *
   __ptr64,enum _FILE_INFO_BY_HANDLE_CLASS,void * __ptr64,unsigned long)))(void * __ptr64,enum
   _FILE_INFO_BY_HANDLE_CLASS,void * __ptr64,unsigned long)
   
   Library: Visual Studio 2017 Release */

_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong * __cdecl
_anon_2E2D3577::
_Runtime_dynamic_link<int_(__cdecl*)(void*___ptr64,enum__FILE_INFO_BY_HANDLE_CLASS,void*___ptr64,unsigned_long)>
          (_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong **param_1,wchar_t *param_2,
          char *param_3,_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *param_4)

{
  ulonglong uVar1;
  HMODULE hModule;
  _func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *p_Var2;
  byte bVar3;
  
  if (*param_1 == (_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *)0x0) {
    hModule = GetModuleHandleW(param_2);
    if ((hModule == (HMODULE)0x0) ||
       (p_Var2 = (_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *)
                 GetProcAddress(hModule,param_3),
       p_Var2 == (_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *)0x0)) {
      p_Var2 = param_4;
    }
    bVar3 = 0x40 - ((byte)DAT_140013010 & 0x3f) & 0x3f;
    LOCK();
    *param_1 = (_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *)
               (((ulonglong)p_Var2 >> bVar3 | (longlong)p_Var2 << 0x40 - bVar3) ^ DAT_140013010);
    UNLOCK();
    return p_Var2;
  }
  uVar1 = DAT_140013010 ^ (ulonglong)*param_1;
  bVar3 = (byte)DAT_140013010 & 0x3f;
  return (_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *)
         (uVar1 >> bVar3 | uVar1 << 0x40 - bVar3);
}




undefined8 FUN_14000af58(void)

{
  SetLastError(0x32);
  return 0;
}




ulonglong FUN_14000af70(void)

{
  UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}




/* Library Function - Single Match
    __std_fs_convert_wide_to_narrow
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__std_fs_convert_wide_to_narrow(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [2];
  int local_28;
  DWORD DStack_24;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      local_28 = 0;
      DStack_24 = 0x459;
      goto LAB_14000b09e;
    }
  }
  if (local_28 == 0) {
    DStack_24 = GetLastError();
  }
  else {
    DStack_24 = 0;
  }
  if (DStack_24 == 0x3ec) {
    local_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_28 == 0) {
      DStack_24 = GetLastError();
    }
    else {
      DStack_24 = 0;
    }
  }
LAB_14000b09e:
  return CONCAT44(DStack_24,local_28);
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __std_fs_get_stats
   
   Library: Visual Studio 2017 Release */

void __std_fs_get_stats(LPCWSTR param_1,FILETIME *param_2,uint param_3,uint param_4)

{
  HANDLE hFile;
  FILETIME FVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  _func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *p_Var5;
  HANDLE hFindFile;
  FILETIME FVar6;
  FILETIME FVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStackY_328 [32];
  DWORD local_2f8;
  DWORD DStack_2f4;
  undefined8 local_2f0;
  undefined1 local_2e8 [4];
  uint local_2e4;
  FILETIME local_2e0;
  DWORD local_2d8;
  DWORD DStack_2d4;
  FILETIME local_2d0;
  DWORD local_2c8;
  DWORD local_2c4;
  _BY_HANDLE_FILE_INFORMATION local_2c0;
  undefined1 local_288 [36];
  DWORD local_264;
  ulonglong local_38;
  
  local_2f0 = 0xfffffffffffffffe;
  local_38 = DAT_140013010 ^ (ulonglong)auStackY_328;
  uVar8 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 & 4) == 0)) {
    if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
       (((param_4 & 0x400) == 0 || ((param_3 & 1) == 0)))) {
      uVar8 = param_3 & 0xfffffffc;
      param_2[2].dwLowDateTime = param_4;
    }
    if (uVar8 != 0) {
      if (((uVar8 & 0x2a) != 0) &&
         (((param_4 == 0xffffffff || ((param_4 & 0x400) == 0)) || ((param_3 & 1) == 0)))) {
        BVar2 = GetFileAttributesExW(param_1,GetFileExInfoStandard,&local_2e4);
        if (BVar2 == 0) {
          GetLastError();
          goto LAB_14000b4ab;
        }
        if (((param_3 & 1) == 0) || ((local_2e4 & 0x400) == 0)) {
          param_2[2].dwLowDateTime = local_2e4;
          FVar6.dwHighDateTime = local_2c8;
          FVar6.dwLowDateTime = local_2c4;
          param_2[1] = FVar6;
          *param_2 = local_2d0;
          uVar8 = uVar8 & 0xffffffd5;
        }
      }
      if (uVar8 != 0) {
        DVar3 = __std_fs_open_handle
                          ((undefined8 *)&local_2f8,param_1,0x80,
                           (((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
        if (DVar3 == 0) {
          p_Var5 = _anon_2E2D3577::
                   _Runtime_dynamic_link<int_(__cdecl*)(void*___ptr64,enum__FILE_INFO_BY_HANDLE_CLASS,void*___ptr64,unsigned_long)>
                             ((_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong **)
                              &DAT_1400134c8,L"kernel32.dll","GetFileInformationByHandleEx",
                              FUN_14000af58);
          hFile = (HANDLE)CONCAT44(DStack_2f4,local_2f8);
          if (p_Var5 != FUN_14000af58) {
            if ((uVar8 != 6) && ((uVar8 & 0x22) != 0)) {
              iVar4 = (*p_Var5)(hFile,0,local_2e8,0x28);
              if (iVar4 == 0) {
                GetLastError();
                if ((hFile != (HANDLE)0xffffffffffffffff) &&
                   (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                  terminate();
                }
                goto LAB_14000b4ab;
              }
              param_2[2].dwLowDateTime = local_2c8;
              FVar1.dwHighDateTime = DStack_2d4;
              FVar1.dwLowDateTime = local_2d8;
              *param_2 = FVar1;
              uVar8 = uVar8 & 0xffffffdd;
            }
            if ((uVar8 & 6) != 0) {
              iVar4 = (*p_Var5)(hFile,9,&local_2f8);
              if (iVar4 == 0) {
                GetLastError();
                if ((hFile != (HANDLE)0xffffffffffffffff) &&
                   (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                  terminate();
                }
                goto LAB_14000b4ab;
              }
              param_2[2].dwLowDateTime = local_2f8;
              param_2[2].dwHighDateTime = DStack_2f4;
              uVar8 = uVar8 & 0xfffffff9;
            }
            if ((uVar8 & 0x18) != 0) {
              iVar4 = (*p_Var5)(hFile,1,local_2e8);
              if (iVar4 == 0) {
                GetLastError();
                if ((hFile != (HANDLE)0xffffffffffffffff) &&
                   (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                  terminate();
                }
                goto LAB_14000b4ab;
              }
              param_2[1] = local_2e0;
              param_2[3].dwLowDateTime = local_2d8;
              uVar8 = uVar8 & 0xffffffe7;
            }
          }
          if (uVar8 == 0) {
            if ((hFile != (HANDLE)0xffffffffffffffff) && (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
              terminate();
            }
          }
          else {
            BVar2 = GetFileInformationByHandle(hFile,&local_2c0);
            if (BVar2 == 0) {
              GetLastError();
              if ((hFile != (HANDLE)0xffffffffffffffff) && (BVar2 = CloseHandle(hFile), BVar2 == 0))
              {
                    /* WARNING: Subroutine does not return */
                terminate();
              }
            }
            else {
              param_2[2].dwLowDateTime = local_2c0.dwFileAttributes;
              *param_2 = local_2c0.ftLastWriteTime;
              FVar7.dwHighDateTime = local_2c0.nFileIndexHigh;
              FVar7.dwLowDateTime = local_2c0.nFileIndexLow;
              param_2[1] = FVar7;
              param_2[3].dwLowDateTime = local_2c0.nNumberOfLinks;
              uVar9 = uVar8 & 0xffffffc5;
              if ((uVar9 >> 2 & 1) != 0) {
                if ((local_2c0.dwFileAttributes >> 10 & 1) == 0) {
                  param_2[2].dwHighDateTime = 0;
                }
                else {
                  hFindFile = FindFirstFileExW(param_1,FindExInfoStandard,local_288,
                                               FindExSearchNameMatch,(LPVOID)0x0,0);
                  if (hFindFile == (HANDLE)0xffffffffffffffff) {
                    GetLastError();
                    if ((hFile != (HANDLE)0xffffffffffffffff) &&
                       (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                      terminate();
                    }
                    goto LAB_14000b4ab;
                  }
                  FindClose(hFindFile);
                  param_2[2].dwHighDateTime = local_264;
                }
                uVar9 = uVar8 & 0xffffffc1;
              }
              if (uVar9 == 0) {
                if ((hFile != (HANDLE)0xffffffffffffffff) &&
                   (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                  terminate();
                }
              }
              else if ((hFile != (HANDLE)0xffffffffffffffff) &&
                      (BVar2 = CloseHandle(hFile), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
                terminate();
              }
            }
          }
        }
        else if (((HANDLE)CONCAT44(DStack_2f4,local_2f8) != (HANDLE)0xffffffffffffffff) &&
                (BVar2 = CloseHandle((HANDLE)CONCAT44(DStack_2f4,local_2f8)), BVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
          terminate();
        }
      }
    }
  }
LAB_14000b4ab:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_328);
  return;
}




/* Library Function - Single Match
    __std_fs_open_handle
   
   Library: Visual Studio 2017 Release */

DWORD __std_fs_open_handle(undefined8 *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

ulonglong FUN_14000b530(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  _func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong *p_Var4;
  uint local_res10 [2];
  undefined4 local_res18 [2];
  uint local_res20;
  DWORD DStackX_24;
  HANDLE local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  p_Var4 = _anon_2E2D3577::
           _Runtime_dynamic_link<int_(__cdecl*)(void*___ptr64,enum__FILE_INFO_BY_HANDLE_CLASS,void*___ptr64,unsigned_long)>
                     ((_func_int_void_ptr__FILE_INFO_BY_HANDLE_CLASS_void_ptr_ulong **)
                      &DAT_1400134d0,L"kernel32.dll","SetFileInformationByHandle",FUN_14000af58);
  if (p_Var4 == FUN_14000af58) {
    BVar1 = RemoveDirectoryW(param_1);
    if (BVar1 != 0) {
LAB_14000b588:
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
      return (ulonglong)local_res10[0];
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x10b) {
      BVar1 = DeleteFileW(param_1);
      if (BVar1 != 0) goto LAB_14000b588;
      GetLastError();
    }
    local_res20 = local_res20 & 0xffffff00;
    DStackX_24 = GetLastError();
    if (DStackX_24 - 2 < 2) {
      DStackX_24 = 0;
    }
  }
  else {
    DStackX_24 = __std_fs_open_handle(&local_28,param_1,0x10000,0x2200000);
    if (DStackX_24 == 0) {
      local_res18[0] = 3;
      iVar3 = (*p_Var4)(local_28,0x15,local_res18);
      if (iVar3 == 0) {
        DStackX_24 = GetLastError();
        if (DStackX_24 == 0x57) {
          local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
          iVar3 = (*p_Var4)(local_28,4,local_res10);
          if (iVar3 == 0) {
            local_res20 = (uint)local_res20._1_3_ << 8;
            DStackX_24 = GetLastError();
            if ((local_28 != (HANDLE)0xffffffffffffffff) &&
               (BVar1 = CloseHandle(local_28), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
              terminate();
            }
          }
          else {
            local_res20 = CONCAT31(local_res20._1_3_,1);
            DStackX_24 = 0;
            if ((local_28 != (HANDLE)0xffffffffffffffff) &&
               (BVar1 = CloseHandle(local_28), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
              terminate();
            }
          }
        }
        else {
          local_res20 = local_res20 & 0xffffff00;
          if ((local_28 != (HANDLE)0xffffffffffffffff) &&
             (BVar1 = CloseHandle(local_28), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            terminate();
          }
        }
      }
      else {
        local_res20 = CONCAT31(local_res20._1_3_,1);
        DStackX_24 = 0;
        if ((local_28 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(local_28), BVar1 == 0))
        {
                    /* WARNING: Subroutine does not return */
          terminate();
        }
      }
    }
    else {
      local_res20 = local_res20 & 0xffffff00;
      if (DStackX_24 - 2 < 2) {
        DStackX_24 = 0;
      }
      if ((local_28 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(local_28), BVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
    }
  }
  return CONCAT44(DStackX_24,local_res20);
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
  while (_Memory = DAT_1400134e8, DAT_1400134e8 != (undefined8 *)0x0) {
    puVar1 = DAT_1400134e8 + 1;
    DAT_1400134e8 = (undefined8 *)*DAT_1400134e8;
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
    *puVar1 = DAT_1400134e8;
    puVar1[1] = param_1;
  }
  DAT_1400134e8 = puVar1;
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140013010) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    FUN_14000c170();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_14000c150();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

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
LAB_14000b886:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1400134f8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1400134f8;
        pvVar1 = DAT_1400134f8;
      }
      DAT_1400134f8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_14000b886;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
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
    DAT_140013500 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_14000c5e0();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_14000c5e0();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_14000c5e0();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000b8e0(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_140013501 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_140013010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_140013010;
      _DAT_140013508 = in_RAX;
      uRam0000000140013510 = in_RAX;
      _DAT_140013518 = in_RAX;
      _DAT_140013520 = in_RAX;
      uRam0000000140013528 = in_RAX;
      _DAT_140013530 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_140013508);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_140013520), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_140013501 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00014000ba46) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */
/* Library Function - Single Match
    __scrt_is_nonwritable_in_current_image
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1400001f8; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002e8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_14000ba2f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_14000ba2f:
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1400134f8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_140013500 == '\0') || (param_2 == '\0')) {
    FUN_14000c5e0();
    FUN_14000c5e0();
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
  
  bVar2 = (byte)DAT_140013010 & 0x3f;
  if (((DAT_140013010 ^ _DAT_140013508) >> bVar2 | (DAT_140013010 ^ _DAT_140013508) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140013508,_Func);
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




undefined8 * FUN_14000bb14(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_14000bb40(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(1);
  uVar5 = FUN_14000c5c8();
  _set_fmode((int)uVar5);
  puVar6 = (undefined4 *)__p__commode();
  uVar5 = FUN_14000c47c();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_14000b8e0(1);
  if ((char)uVar5 != '\0') {
    FUN_14000c62c();
    atexit((_func_5014 *)&LAB_14000c668);
    uVar7 = FUN_14000c30c();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_14000c5d0();
      bVar2 = FUN_14000c610();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_14000c47c);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_14000c47c();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_14000c5e0();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_14000c47c();
      uVar5 = thunk_FUN_14000c47c();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_14000bc24(void)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined1 uVar9;
  
  iVar3 = (int)unaff_RBX;
  uVar4 = __scrt_initialize_crt(1);
  if ((char)uVar4 == '\0') {
    __scrt_fastfail(7);
  }
  else {
    bVar2 = false;
    uVar9 = 0;
    uVar4 = __scrt_acquire_startup_lock();
    iVar3 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar4);
    if (DAT_1400134f0 != 1) {
      if (DAT_1400134f0 == 0) {
        DAT_1400134f0 = 1;
        iVar3 = _initterm_e(&DAT_14000d530,&DAT_14000d548);
        if (iVar3 != 0) {
          return 0xff;
        }
        _initterm(&DAT_14000d508,&DAT_14000d528);
        DAT_1400134f0 = 2;
      }
      else {
        bVar2 = true;
        uVar9 = 1;
      }
      __scrt_release_startup_lock((char)uVar4);
      plVar5 = (longlong *)FUN_14000c61c();
      if ((*plVar5 != 0) &&
         (uVar6 = __scrt_is_nonwritable_in_current_image((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)*plVar5)(0,2,0,in_R9,uVar9);
      }
      plVar5 = (longlong *)FUN_14000c624();
      if ((*plVar5 != 0) &&
         (uVar6 = __scrt_is_nonwritable_in_current_image((longlong)plVar5), (char)uVar6 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar5);
      }
      plVar5 = (longlong *)__p___argv();
      lVar1 = *plVar5;
      puVar7 = (uint *)__p___argc();
      _get_initial_narrow_environment();
      uVar8 = (ulonglong)*puVar7;
      iVar3 = FUN_140003960(*puVar7,lVar1);
      uVar6 = __scrt_is_managed_app();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar8 >> 8),1),'\0');
        return iVar3;
      }
      goto LAB_14000bd90;
    }
  }
  __scrt_fastfail(7);
LAB_14000bd90:
                    /* WARNING: Subroutine does not return */
  exit(iVar3);
}




void entry(void)

{
  __security_init_cookie();
  FUN_14000bc24();
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




void _guard_check_icall(void)

{
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
                    /* WARNING: Could not recover jumptable at 0x00014000bee1. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x14000bf12;
  capture_previous_context((PCONTEXT)&DAT_1400135e0);
  _DAT_140013550 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140013678 = puVar3 + 0x40;
  _DAT_140013660 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140013540 = 0xc0000409;
  _DAT_140013544 = 1;
  _DAT_140013558 = 1;
  DAT_140013560 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140013010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140013008;
  *(undefined8 *)(puVar3 + -8) = 0x14000bfb4;
  DAT_1400136d8 = _DAT_140013550;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_14000d658);
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




undefined8 * FUN_14000c038(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_14000c078(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_14000c098(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_14000c0d8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_14000c10c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_14000c150(void)

{
  undefined8 local_28 [5];
  
  FUN_14000c078(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140010570);
}




void FUN_14000c170(void)

{
  undefined8 local_28 [5];
  
  FUN_14000c0d8(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400105d0);
}




/* WARNING: Removing unreachable block (ram,0x00014000c25e) */
/* WARNING: Removing unreachable block (ram,0x00014000c1dc) */
/* WARNING: Removing unreachable block (ram,0x00014000c1b7) */
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
  
  DAT_14001301c = 2;
  _DAT_140013018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_140013020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140013ab0 = DAT_140013ab0 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_140013ab0 = DAT_140013ab0 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_140013018 = 2;
    DAT_14001301c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14001301c = 0xe;
      _DAT_140013018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_140013018 = 5;
        DAT_14001301c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_14000c30c(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_140013030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000c320(void)

{
  _DAT_140013ab4 = 0;
  return;
}




/* Library Function - Single Match
    __scrt_fastfail
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  *(undefined8 *)(puVar4 + -8) = 0x14000c35b;
  FUN_14000c320();
  *(undefined8 *)(puVar4 + -8) = 0x14000c36c;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x14000c376;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x14000c390;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x14000c3d1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x14000c403;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x14000c425;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x14000c446;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x14000c451;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x14000c461;
    FUN_14000c320();
  }
  return;
}




undefined8 FUN_14000c47c(void)

{
  return 0;
}




/* Library Function - Single Match
    __scrt_is_managed_app
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || (((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)) ||
             (piVar3[0x3e] == 0)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = 0x201;
  }
  return uVar2;
}




void FUN_14000c4d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000c4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_14000c4e4);
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
  
  if (DAT_140013010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_140013010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_140013010 == 0x2b992ddfa232) {
      DAT_140013010 = 0x2b992ddfa233;
    }
  }
  DAT_140013008 = ~DAT_140013010;
  return;
}




undefined8 FUN_14000c5c8(void)

{
  return 0x4000;
}




void FUN_14000c5d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000c5d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_140013ac0);
  return;
}




undefined1 FUN_14000c5e0(void)

{
  return 1;
}




undefined * FUN_14000c5e4(void)

{
  return &DAT_140013ad0;
}




undefined * FUN_14000c5ec(void)

{
  return &DAT_140013ad8;
}




void FUN_14000c5f4(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_14000c5e4();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_14000c5ec();
  *puVar1 = *puVar1 | 2;
  return;
}




bool FUN_14000c610(void)

{
  return DAT_140013028 == 0;
}




undefined * FUN_14000c61c(void)

{
  return &DAT_140013b48;
}




undefined * FUN_14000c624(void)

{
  return &DAT_140013b40;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000c62c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14000f4d0; puVar1 < &DAT_14000f4d0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014000c7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_14000c7b0(undefined8 param_1,longlong param_2)

{
  FUN_140004c80(*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                 (param_2 + 0x90));
  return;
}




void Unwind_14000c7cb(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x48));
  return;
}




void Unwind_14000c7f0(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x70));
  return;
}




void Unwind_14000c810(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x40));
  return;
}




void Unwind_14000c830(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x38));
  return;
}




void Unwind_14000c850(undefined8 param_1,longlong param_2)

{
  FUN_140001dc0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_14000c86b(undefined8 param_1,longlong param_2)

{
  FUN_140002380(*(longlong *)(param_2 + 0xb0) + 0x28);
  return;
}




void Unwind_14000c88a(undefined8 param_1,longlong param_2)

{
  FUN_140002380(*(longlong *)(param_2 + 0xb0) + 0x48);
  return;
}




void Unwind_14000c8a9(undefined8 param_1,longlong param_2)

{
  FUN_140002380(param_2 + 0x70);
  return;
}




void Unwind_14000c8d0(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x60));
  return;
}




void Unwind_14000c8e8(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0xa0));
  return;
}




void Unwind_14000c903(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x80));
  return;
}




void Unwind_14000c920(undefined8 param_1,longlong param_2)

{
  FUN_140001dc0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14000c938(undefined8 param_1,longlong param_2)

{
  FUN_140002380(*(longlong *)(param_2 + 0x50) + 0x28);
  return;
}




void Unwind_14000c954(undefined8 param_1,longlong param_2)

{
  FUN_140002380(*(longlong *)(param_2 + 0x50) + 0x48);
  return;
}




void Unwind_14000c970(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x50));
  return;
}




void Unwind_14000c990(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x88);
  return;
}




void Unwind_14000c9b0(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x90));
  return;
}




void Unwind_14000c9d0(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0xa0);
  return;
}




void Unwind_14000c9eb(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0xc0);
  return;
}




void Unwind_14000ca06(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x78);
  return;
}




void Unwind_14000ca1e(undefined8 param_1,longlong param_2)

{
  FUN_1400034c0(param_2 + 0xf0);
  return;
}




void Unwind_14000ca40(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x118);
  return;
}




void Unwind_14000ca5b(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0xf8);
  return;
}




void Unwind_14000ca76(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x138);
  return;
}




void Unwind_14000ca91(undefined8 param_1,longlong param_2)

{
  FUN_140002380(param_2 + 0x58);
  return;
}




void Unwind_14000caa9(undefined8 param_1,longlong param_2)

{
  FUN_140002380(param_2 + 0x78);
  return;
}




void Unwind_14000cac1(undefined8 param_1,longlong param_2)

{
  FUN_140002380(param_2 + 0x98);
  return;
}




void Unwind_14000cae0(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x1c0);
  return;
}




void Unwind_14000cafb(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x180));
  return;
}




void Unwind_14000cb16(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x1a0));
  return;
}




void Unwind_14000cb31(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x150);
  return;
}




undefined * Catch_All_14000cb4c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400088b0((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                        "fetch failed. program exception.");
  *(undefined8 *)(param_2 + 0x108) = uVar1;
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            (*(basic_ostream<char,struct_std::char_traits<char>_> **)(param_2 + 0x108),FUN_140008cf0
            );
  *(undefined4 *)(param_2 + 0x48) = 0xfffffff9;
  return &DAT_140003f33;
}




void Unwind_14000cbb0(void)

{
  FUN_140005e20();
  return;
}




void Unwind_14000cbd0(undefined8 param_1,longlong param_2)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0xb0));
  return;
}




void Unwind_14000cbf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,struct_std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,struct_std::char_traits<wchar_t>_> *)
               (*(longlong *)(param_2 + 0x60) + 0xb8));
  }
  return;
}




void Unwind_14000cc1e(undefined8 param_1,longlong param_2)

{
  std::basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,struct_std::char_traits<wchar_t>_> *)
             (*(longlong *)(param_2 + 0x60) + 0x20));
  return;
}




void Unwind_14000cc3b(undefined8 param_1,longlong param_2)

{
  FUN_140005db0((basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> *)
                (*(longlong *)(param_2 + 0x60) + 0x18));
  return;
}




void Unwind_14000cc60(undefined8 param_1,longlong param_2)

{
  FUN_140001660(param_2 + 0x40);
  return;
}




void Unwind_14000cc80(undefined8 param_1,longlong param_2)

{
  std::basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,struct_std::char_traits<wchar_t>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14000cca0(undefined8 param_1,longlong param_2)

{
  std::_Lockit::~_Lockit((_Lockit *)(param_2 + 0x68));
  return;
}




void Unwind_14000ccb9(undefined8 param_1,longlong param_2)

{
  FUN_140009f80((unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 *)(param_2 + 0x70));
  return;
}




void Unwind_14000cce0(undefined8 param_1,longlong param_2)

{
  FUN_140004530(param_2 + 0x38);
  return;
}




void Unwind_14000cd00(undefined8 param_1,longlong param_2)

{
  FUN_14000a020((longlong *)(param_2 + 0xc0));
  return;
}




undefined8 Catch_All_14000cd1b(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0xa0) =
       *(longlong *)(param_2 + 0xf0) + (longlong)*(int *)(**(longlong **)(param_2 + 0xf0) + 4);
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            (*(basic_ios<char,struct_std::char_traits<char>_> **)(param_2 + 0xa0),4,true);
  return 0x140008c71;
}




void Unwind_14000cd70(undefined8 param_1,longlong param_2)

{
  FUN_14000a490(*(longlong **)(param_2 + 0x40));
  return;
}




void FUN_14000cda0(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_14000cdc0(void)

{
  FUN_140004c80((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                &DAT_140013af8);
  return;
}



