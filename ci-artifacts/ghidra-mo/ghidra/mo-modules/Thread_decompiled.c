
void FUN_180001030(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_180001070(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x10b0  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x10b0  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x10b0  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




void FUN_1800010c0(undefined8 *param_1)

{
  *param_1 = CSyncObjectImpl::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




void FUN_180001100(undefined8 *param_1)

{
  FUN_180004f70(param_1);
  return;
}




void FUN_180001120(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}




void FUN_180001140(undefined8 *param_1)

{
  *param_1 = CSyncObjectImpl::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




void FUN_180001180(undefined8 *param_1)

{
  *param_1 = CSyncObjectImpl::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x11c0  4  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x11c0  5  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




bool FUN_1800011d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomAggObject<class_CThread>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IRunObject*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180001200(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CThread>*___ptr64___cdecl(struct_IRunObject*___ptr64_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_180001230(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomAggObject<class_CThread>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomAggObject<class_CThread>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IRunObject*___ptr64_const&___ptr64)>,2>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180001271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180001280(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CThread>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CThread>*___ptr64___cdecl(struct_IRunObject*___ptr64_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800012c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




undefined8 * FUN_1800012d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x90);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    FUN_180004ad0(puVar2,(longlong *)*param_3);
    *puVar2 = CMomObject<class_CThread>::vftable;
    *(undefined4 *)(puVar2 + 0xf) = 0;
    *puVar2 = CMomAggObject<class_CThread>::vftable;
    puVar2[0x10] = CMomAggObject<class_CThread>::vftable;
    puVar2[0x11] = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180001370(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180004ad0(puVar1,(longlong *)*param_2);
    *puVar1 = CMomObject<class_CThread>::vftable;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void FUN_1800013e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800013f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_180001400(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000140e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}




void _guard_check_icall(void)

{
  return;
}




void FUN_180001430(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000143a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  return;
}




undefined4 FUN_180001440(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 FUN_180001450(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x78);
}




undefined8 FUN_180001460(void)

{
  return 0;
}




void FUN_180001464(void)

{
  FUN_180001460();
  return;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1470  7  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




undefined4 FUN_180001480(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + -8);
}




void FUN_180001490(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_18000f018 ^ (ulonglong)auStack_138;
  if (param_2 != (char *)0x0) {
    if (*param_2 == '*') {
      FUN_180002500(param_1 + -0x80,param_2);
    }
    else {
      puVar1 = (undefined8 *)
               (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),0);
      if (puVar1 == (undefined8 *)0x0) {
        cVar3 = *param_2;
        pcVar2 = local_117;
        local_118 = '*';
        if (cVar3 != '\0') {
          do {
            *pcVar2 = cVar3;
            pcVar2 = pcVar2 + 1;
            cVar3 = pcVar2[(longlong)param_2 - (longlong)local_117];
          } while (cVar3 != '\0');
        }
        *pcVar2 = '\0';
        FUN_180002500(param_1 + -0x80,&local_118);
      }
      else {
        (**(code **)*puVar1)(puVar1,param_2);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




int FUN_180001550(longlong param_1)

{
  undefined8 *_Memory;
  int *piVar1;
  int iVar2;
  
  _Memory = (undefined8 *)(param_1 + -0x80);
  LOCK();
  piVar1 = (int *)(param_1 + -8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + -8);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  if (_Memory != (undefined8 *)0x0) {
    FUN_180004f70(_Memory);
    free(_Memory);
  }
  return iVar2;
}




undefined8 FUN_1800015b0(undefined *param_1,undefined8 param_2)

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




void FUN_1800015e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800015ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  return;
}




undefined8 FUN_1800015f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 *_Memory;
  undefined8 uVar3;
  longlong local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 == 0) {
    FUN_180001b50();
    if (DAT_1800107d0 == (undefined1 *)0x0) {
      DAT_1800107d0 = &DAT_1800106d0;
      local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,0x100);
      pcVar1 = (char *)__std_type_info_name(0x18000f3f8,&DAT_180011130);
      FUN_180001e30(pcVar1,DAT_1800107d0,(uint *)&local_res20);
    }
    FUN_180001c30();
    return 0;
  }
  if (param_3 == 0) {
    plVar2 = (longlong *)operator_new(8);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      *plVar2 = (longlong)
                dnc::
                ConstructFunction<class_CMomObject<class_CThread>*___ptr64___cdecl(struct_IRunObject*___ptr64_const&___ptr64)>
                ::vftable;
    }
    _Memory = (undefined8 *)operator_new(0x18);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CThread>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CThread>*___ptr64___cdecl(struct_IRunObject*___ptr64_const&___ptr64)>,1>
                 ::vftable;
      local_res20 = _Memory;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      _Memory[1] = uVar3;
      _Memory[2] = &local_res10;
    }
    local_res20 = _Memory;
    if (plVar2 != (longlong *)0x0) {
      free(plVar2);
    }
    uVar3 = FUN_180001070(&local_res20);
  }
  else {
    plVar2 = (longlong *)operator_new(8);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      *plVar2 = (longlong)
                dnc::
                ConstructFunction<class_CMomAggObject<class_CThread>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IRunObject*___ptr64_const&___ptr64)>
                ::vftable;
    }
    _Memory = (undefined8 *)operator_new(0x20);
    if (_Memory == (undefined8 *)0x0) {
      _Memory = (undefined8 *)0x0;
    }
    else {
      *_Memory = dnc::
                 FunctorBindObject<class_dnc::Functor<class_CMomAggObject<class_CThread>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomAggObject<class_CThread>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IRunObject*___ptr64_const&___ptr64)>,2>
                 ::vftable;
      local_res20 = _Memory;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      _Memory[1] = uVar3;
      _Memory[2] = &local_res18;
      _Memory[3] = &local_res10;
    }
    local_res20 = _Memory;
    if (plVar2 != (longlong *)0x0) {
      free(plVar2);
    }
    uVar3 = FUN_180001030(&local_res20);
  }
  if (_Memory != (undefined8 *)0x0) {
    free(_Memory);
  }
  return uVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1800017d0(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180010050) {
    _Init_thread_header(&DAT_180010050);
    if (DAT_180010050 == -1) {
      DAT_180010040 = (HANDLE)0x0;
      _DAT_180010038 = CMutex::vftable;
      DAT_180010040 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
      if (DAT_180010040 == (HANDLE)0x0) {
        FUN_180001b50();
        if (DAT_1800106c0 == (undefined1 *)0x0) {
          DAT_1800106c0 = &DAT_1800105c0;
          local_res10[0] = 0x100;
          pcVar1 = (char *)__std_type_info_name(0x18000f3d8,&DAT_180011130);
          FUN_180001e30(pcVar1,DAT_1800106c0,local_res10);
        }
        FUN_180001c30();
      }
      _DAT_180010048 = 0;
      _DAT_180010038 = CMomStackObject<class_CMutex>::vftable;
      atexit(FUN_1800077f0);
      _Init_thread_footer(&DAT_180010050);
      return &DAT_180010038;
    }
  }
  return &DAT_180010038;
}




undefined8 FUN_180001940(void)

{
  return DAT_180010030;
}




longlong FUN_180001950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = param_1 + 0x80;
    if (param_1 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000196e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x88))();
  return lVar1;
}




void FUN_180001988(longlong param_1,char *param_2)

{
  thunk_FUN_180001ed0(param_1 - 8,param_2);
  return;
}




undefined8 FUN_1800019a0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint local_res10 [2];
  
  uVar4 = 0;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2 + (*param_2 == '*');
    if (*pcVar3 == '1') {
      return param_1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_180010060) && (_Init_thread_header(&DAT_180010060), DAT_180010060 == -1)) {
      if (DAT_1800105b0 == (char *)0x0) {
        DAT_1800105b0 = &DAT_1800104b0;
        local_res10[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18000f3b0,&DAT_180011130);
        FUN_180001e30(pcVar2,DAT_1800105b0,local_res10);
      }
      DAT_180010058 = DAT_1800105b0;
      _Init_thread_footer(&DAT_180010060);
    }
    cVar1 = *pcVar3;
    cVar5 = *DAT_180010058;
    pcVar2 = DAT_180010058;
    if (cVar1 == cVar5) {
      do {
        if ((cVar1 == '\0') || (cVar5 == '\0')) break;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
        cVar5 = *pcVar2;
      } while (cVar1 == cVar5);
    }
    if (cVar1 == *pcVar2) {
      uVar4 = param_1;
    }
  }
  return uVar4;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1af0  8  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




char * FUN_180001b00(void)

{
  return "Thread";
}




char * FUN_180001b10(void)

{
  return "CThreadModule";
}




void FUN_180001b18(void)

{
  FUN_180001b10();
  return;
}




char * FUN_180001b30(void)

{
  return "CMomObjectImpl";
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001b50(void)

{
  if (DAT_180010008 == (undefined *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_180010028) {
      _Init_thread_header(&DAT_180010028);
      if (DAT_180010028 == -1) {
        _DAT_180010020 = 0;
        _DAT_180010010 = CMomStackObject<class_CModuleImpl<class_CThreadModule>_>::vftable;
        _DAT_180010018 = CMomStackObject<class_CModuleImpl<class_CThreadModule>_>::vftable;
        _Init_thread_footer(&DAT_180010028);
        DAT_180010008 = &DAT_180010010;
        return;
      }
    }
    DAT_180010008 = &DAT_180010010;
  }
  return;
}




DWORD FUN_180001c00(longlong param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  DVar2 = 0;
  if ((DVar1 & 0xffffff7f) != 0) {
    DVar2 = DVar1;
  }
  return DVar2;
}




void FUN_180001c30(void)

{
  code *pcVar1;
  char *pcVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [32];
  uint local_138 [2];
  undefined8 local_130;
  CHAR local_128 [2];
  char cStack_126;
  CHAR aCStack_125 [269];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_18000f018 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000fff8) {
    while (_Init_thread_header(&DAT_18000fff8), DAT_18000fff8 == -1) {
      puVar4 = (undefined8 *)0x0;
      pcVar2 = "Error";
      puVar6 = puVar4;
      do {
        pcVar5 = pcVar2;
        if (0xff < (longlong)puVar6) goto LAB_180001df1;
        local_128[(longlong)puVar6] = *pcVar5;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        pcVar2 = pcVar5 + 1;
      } while (pcVar5[1] != '\0');
      if (pcVar5 + -0x1800086cb < (char *)0x104) {
        local_128[(longlong)(pcVar5 + -0x1800086cb)] = '.';
        (pcVar5 + -0x1800087f2)[(longlong)&stack0x00000000] = 'm';
        (pcVar5 + -0x1800087f1)[(longlong)&stack0x00000000] = 'o';
        if ((char *)0x103 < pcVar5 + -0x1800086c8) {
          __report_rangecheckfailure();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_128[(longlong)(pcVar5 + -0x1800086c8)] = '\0';
        hModule = LoadLibraryA(local_128);
        if (hModule != (HMODULE)0x0) {
          pFVar3 = GetProcAddress(hModule,"GetModule");
          if (pFVar3 == (FARPROC)0x0) {
            FreeLibrary(hModule);
          }
          else {
            puVar4 = (undefined8 *)FUN_1800015b0(pFVar3,hModule);
          }
        }
LAB_180001df1:
        DAT_18000fff0 = puVar4;
        _Init_thread_footer(&DAT_18000fff8);
        break;
      }
      __report_rangecheckfailure();
    }
  }
  if (DAT_18000fff0 == (undefined8 *)0x0) {
LAB_180001d06:
    if (DAT_180010000 == (longlong *)0x0) goto LAB_180001d15;
  }
  else if (DAT_180010000 == (longlong *)0x0) {
    if (DAT_180010170 == (undefined1 *)0x0) {
      DAT_180010170 = &DAT_180010070;
      local_138[0] = 0x100;
      pcVar2 = (char *)__std_type_info_name(0x18000f318,&DAT_180011130);
      FUN_180001e30(pcVar2,DAT_180010170,local_138);
    }
    DAT_180010000 = (longlong *)(**(code **)*DAT_18000fff0)(DAT_18000fff0,DAT_180010170);
    goto LAB_180001d06;
  }
  (**(code **)(*DAT_180010000 + 0x28))();
LAB_180001d15:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}




ulonglong FUN_180001e30(char *param_1,undefined1 *param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  char cVar6;
  
  uVar3 = 0;
  if ((*param_3 != 0) && (param_2 != (undefined1 *)0x0)) {
    *param_2 = 0;
    if (*param_1 == 'c') {
      lVar4 = 6;
    }
    else {
      if (*param_1 != 's') {
        return 0;
      }
      lVar4 = 7;
    }
    pcVar5 = param_1 + lVar4;
    cVar6 = *pcVar5;
    uVar1 = uVar3;
    while (uVar2 = (uint)uVar1, cVar6 != '\0') {
      if (cVar6 == ':') {
        if (*param_3 <= uVar2) {
          return 0;
        }
        pcVar5 = pcVar5 + 1;
        cVar6 = '.';
        uVar3 = (ulonglong)(uVar2 + 1);
      }
      else if (*param_3 <= uVar2) {
        return 0;
      }
      pcVar5 = pcVar5 + 1;
      param_2[uVar1] = cVar6;
      uVar1 = (ulonglong)(uVar2 + 1);
      cVar6 = *pcVar5;
    }
    if (uVar2 < *param_3) {
      param_2[uVar1] = 0;
      *param_3 = uVar2;
      return uVar3;
    }
  }
  return 0;
}




ulonglong FUN_180001ed0(ulonglong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  char *pcVar11;
  uint local_res10 [2];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar9 = 0;
  pcVar8 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] == '1') {
    return param_1;
  }
  if (DAT_180010280 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_180010280 = &DAT_180010180;
    pcVar2 = (char *)__std_type_info_name(0x18000f340,&DAT_180011130);
    FUN_180001e30(pcVar2,DAT_180010280,local_res10);
  }
  cVar1 = *pcVar8;
  cVar10 = *DAT_180010280;
  pcVar2 = DAT_180010280;
  pcVar3 = pcVar8;
  if (cVar1 == cVar10) {
    do {
      if ((cVar1 == '\0') || (cVar10 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar10 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar10);
  }
  if (cVar1 == *pcVar2) {
    return param_1;
  }
  if (DAT_180010390 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_180010390 = &DAT_180010290;
    pcVar2 = (char *)__std_type_info_name(0x18000f368,&DAT_180011130);
    FUN_180001e30(pcVar2,DAT_180010390,local_res10);
  }
  cVar1 = *pcVar8;
  cVar10 = *DAT_180010390;
  pcVar2 = DAT_180010390;
  pcVar3 = pcVar8;
  if (cVar1 == cVar10) {
    do {
      if ((cVar1 == '\0') || (cVar10 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar10 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar10);
  }
  if (cVar1 == *pcVar2) {
    return param_1;
  }
  if (DAT_1800104a0 == (char *)0x0) {
    DAT_1800104a0 = &DAT_1800103a0;
    pcVar3 = (char *)__std_type_info_name(0x18000f388,&DAT_180011130);
    pcVar2 = DAT_1800104a0;
    if (DAT_1800104a0 != (char *)0x0) {
      *DAT_1800104a0 = '\0';
      if (*pcVar3 == 'c') {
        lVar7 = 6;
      }
      else {
        if (*pcVar3 != 's') goto LAB_1800020c6;
        lVar7 = 7;
      }
      pcVar11 = pcVar3 + lVar7;
      cVar1 = pcVar3[lVar7];
      uVar4 = uVar9;
      uVar6 = uVar9;
      if (cVar1 != '\0') {
        do {
          uVar5 = (uint)uVar4;
          if (cVar1 == ':') {
            if (0xff < uVar5) goto LAB_1800020c6;
            pcVar11 = pcVar11 + 1;
            cVar1 = '.';
          }
          else if (0xff < uVar5) goto LAB_1800020c6;
          pcVar11 = pcVar11 + 1;
          uVar6 = (ulonglong)(uVar5 + 1);
          pcVar2[uVar4] = cVar1;
          cVar1 = *pcVar11;
          uVar4 = uVar6;
        } while (cVar1 != '\0');
        if (0xff < uVar5 + 1) goto LAB_1800020c6;
      }
      pcVar2[uVar6] = '\0';
    }
  }
LAB_1800020c6:
  cVar1 = *pcVar8;
  cVar10 = *DAT_1800104a0;
  pcVar2 = DAT_1800104a0;
  if (cVar1 == cVar10) {
    do {
      if ((cVar1 == '\0') || (cVar10 == '\0')) break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      cVar10 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 == cVar10);
  }
  if (cVar1 != *pcVar2) {
    return 0;
  }
  uVar4 = param_1 + 8;
  if (param_1 == 0) {
    uVar4 = uVar9;
  }
  return uVar4;
}




void FUN_180002150(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000215a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
  return;
}




int FUN_180002160(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + 2);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  *param_1 = CSyncObjectImpl::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  free(param_1);
  return iVar2;
}




int FUN_1800021e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xf);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + 0xf);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  FUN_180004f70(param_1);
  free(param_1);
  return iVar2;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x2240  9  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180002243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




int FUN_180002250(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = ReleaseMutex(*(HANDLE *)(param_1 + 8));
  return (BVar1 != 0) - 1;
}




void FUN_180002270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomAggObject<class_CThread>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IRunObject*___ptr64_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_1800022a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomObject<class_CThread>*___ptr64___cdecl(struct_IRunObject*___ptr64_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




undefined8 * FUN_1800022d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomAggObject<class_CThread>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomAggObject<class_CThread>*___ptr64___cdecl(struct_IObject*___ptr64_const&___ptr64,struct_IRunObject*___ptr64_const&___ptr64)>,2>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180002350(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CThread>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CThread>*___ptr64___cdecl(struct_IRunObject*___ptr64_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void GetModule(undefined8 param_1)

{
  DAT_180010030 = param_1;
                    /* 0x23c0  10  GetModule */
  FUN_180001b50();
  return;
}




char * FUN_1800023d0(void)

{
  return "CThread";
}




undefined8 FUN_1800023e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  uint local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x48);
  }
  plVar1 = *(longlong **)
            (*(longlong *)
              (*(longlong *)(lVar4 + 8) +
              (*(ulonglong *)(param_1 + 0x60) >> 1 & *(longlong *)(lVar4 + 0x10) - 1U) * 8) +
            (ulonglong)((uint)*(ulonglong *)(param_1 + 0x60) & 1) * 8);
  lVar4 = *(longlong *)(param_1 + 0x68) + -1;
  *(longlong *)(param_1 + 0x68) = lVar4;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 1;
  }
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != plVar1) {
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    if (plVar1 != (longlong *)0x0) {
      if (DAT_1800109f0 == (undefined1 *)0x0) {
        local_res8[0] = 0x100;
        DAT_1800109f0 = &DAT_1800108f0;
        pcVar3 = (char *)__std_type_info_name(0x18000f870,&DAT_180011130);
        FUN_180001e30(pcVar3,DAT_1800109f0,local_res8);
      }
      lVar4 = (**(code **)*plVar1)(plVar1,DAT_1800109f0);
      *(longlong *)(param_1 + 0x70) = lVar4;
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      else {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  return *(undefined8 *)(param_1 + 0x70);
}




undefined8 FUN_180002500(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char cVar4;
  uint local_res10 [6];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar3 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] != '1') {
    if (DAT_1800108e0 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_1800108e0 = &DAT_1800107e0;
      pcVar1 = (char *)__std_type_info_name(0x18000f5a8,&DAT_180011130);
      FUN_180001e30(pcVar1,DAT_1800108e0,local_res10);
    }
    cVar2 = *pcVar3;
    cVar4 = *DAT_1800108e0;
    pcVar1 = DAT_1800108e0;
    if (cVar2 == cVar4) {
      do {
        if ((cVar2 == '\0') || (cVar4 == '\0')) break;
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        cVar4 = pcVar1[1];
        pcVar1 = pcVar1 + 1;
      } while (cVar2 == cVar4);
    }
    if (cVar2 != *pcVar1) {
      return 0;
    }
  }
  return param_1;
}




void FUN_1800025e0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_180002620(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_180002660(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
  if (lVar1 != 0) {
    return;
  }
  return;
}




void FUN_1800026a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180004190(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}




undefined8 *
FUN_1800026f0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    FUN_1800041d0(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18000276f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_18000276f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_18000276f:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar10 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar10[1];
    plVar8 = plVar10 + 1;
    plVar9 = plVar2 + 1;
    plVar7 = *(longlong **)plVar2[1];
    if (plVar2 == plVar7) {
      plVar7 = (longlong *)((undefined8 *)plVar2[1])[2];
      if ((char)plVar7[3] != '\0') {
        plVar7 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar10 == plVar7) {
          plVar2[2] = *plVar7;
          if (*(char *)(*plVar7 + 0x19) == '\0') {
            *(longlong **)(*plVar7 + 8) = plVar2;
          }
          plVar7[1] = *plVar9;
          plVar6 = plVar7;
          plVar8 = plVar9;
          if (plVar2 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar7;
            *plVar7 = (longlong)plVar2;
            *plVar9 = (longlong)plVar7;
            plVar10 = plVar2;
          }
          else {
            puVar5 = (undefined8 *)*plVar9;
            if (plVar2 == (longlong *)*puVar5) {
              *puVar5 = plVar7;
              *plVar7 = (longlong)plVar2;
              *plVar9 = (longlong)plVar7;
              plVar10 = plVar2;
            }
            else {
              puVar5[2] = plVar7;
              *plVar7 = (longlong)plVar2;
              *plVar9 = (longlong)plVar7;
              plVar10 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar9 = (longlong *)*plVar8;
        *plVar8 = plVar9[2];
        if (*(char *)(plVar9[2] + 0x19) == '\0') {
          *(longlong **)(plVar9[2] + 8) = plVar8;
        }
        plVar9[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar9;
          plVar9[2] = (longlong)plVar8;
        }
        else {
          plVar2 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
          else {
            *plVar2 = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
        }
        goto LAB_180002915;
      }
LAB_180002886:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180002886;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_180004600(param_1,plVar2);
        plVar10 = plVar2;
      }
      *(undefined1 *)(plVar10[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar10[1] + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(plVar10[1] + 8);
      plVar9 = (longlong *)plVar8[2];
      plVar8[2] = *plVar9;
      if (*(char *)(*plVar9 + 0x19) == '\0') {
        *(longlong **)(*plVar9 + 8) = plVar8;
      }
      plVar9[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar9;
      }
      else {
        puVar5 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar5) {
          *puVar5 = plVar9;
        }
        else {
          puVar5[2] = plVar9;
        }
      }
      *plVar9 = (longlong)plVar8;
LAB_180002915:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180002970(longlong *param_1,undefined8 *param_2,longlong *param_3,ulonglong *param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  if (param_1[1] == 0) {
    FUN_1800026f0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar4 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar4) {
    if (*param_4 < (ulonglong)param_3[4]) {
      FUN_1800026f0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar4) {
    if ((ulonglong)((undefined8 *)plVar4[2])[4] < *param_4) {
      FUN_1800026f0(param_1,param_2,'\0',(undefined8 *)plVar4[2],param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar1 = *param_4;
    uVar2 = param_3[4];
    if ((uVar1 < uVar2) &&
       (local_38 = param_3, plVar4 = FUN_180003290((longlong *)&local_38),
       *(ulonglong *)(*plVar4 + 0x20) < uVar1)) {
      if (*(char *)(local_38[2] + 0x19) != '\0') {
        FUN_1800026f0(param_1,param_2,'\0',local_38,param_4,param_5);
        return param_2;
      }
      FUN_1800026f0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
    if ((uVar2 < uVar1) &&
       ((lVar3 = *param_1, local_38 = param_3, plVar4 = FUN_180003220((longlong *)&local_38),
        *plVar4 == lVar3 || (uVar1 < (ulonglong)local_38[4])))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_1800026f0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_1800026f0(param_1,param_2,'\x01',local_38,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180002b60(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180002b60(longlong *param_1,undefined8 *param_2,char param_3,ulonglong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar6 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < (ulonglong)plVar4[4];
    }
    else {
      bVar5 = *param_4 <= (ulonglong)plVar4[4];
    }
    plVar6 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  plVar4 = plVar6;
  if (bVar5 != false) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar3 = FUN_1800026f0(param_1,&local_18,'\x01',plVar6,param_4,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar6;
      plVar1 = plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar6[2];
    }
  }
  if ((ulonglong)plVar4[4] < *param_4) {
    puVar3 = FUN_1800026f0(param_1,&local_18,bVar5,plVar6,param_4,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_10 = 0x30;
    free(param_5);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




undefined8 * FUN_180002ce0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}




undefined8 * FUN_180002d70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 local_18;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  __std_exception_copy(&local_20);
  *param_1 = std::logic_error::vftable;
  return param_1;
}




void FUN_180002dd0(longlong *param_1)

{
  undefined8 local_res10 [3];
  
  FUN_180004930(param_1,local_res10,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




void FUN_180002e10(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002e30(undefined8 *param_1)

{
  *param_1 = CCriticalSection::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}




void FUN_180002e60(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 local_res8 [4];
  
  *param_1 = CTimer::vftable;
  KillTimer(DAT_1800109f8,(ulonglong)*(uint *)(param_1 + 2));
  plVar4 = (longlong *)DAT_180010a00[1];
  plVar6 = DAT_180010a00;
  if (*(char *)(DAT_180010a00[1] + 0x19) == '\0') {
    do {
      if ((ulonglong)plVar4[4] < (ulonglong)*(uint *)(param_1 + 2)) {
        plVar3 = (longlong *)plVar4[2];
      }
      else {
        plVar3 = (longlong *)*plVar4;
        plVar6 = plVar4;
      }
      plVar4 = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    if ((plVar6 != DAT_180010a00) && ((ulonglong)plVar6[4] <= (ulonglong)*(uint *)(param_1 + 2))) {
      (**(code **)(*(longlong *)plVar6[5] + 8))();
    }
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 2);
  cVar1 = *(char *)(DAT_180010a00[1] + 0x19);
  plVar4 = (longlong *)DAT_180010a00[1];
  plVar6 = DAT_180010a00;
  plVar3 = DAT_180010a00;
  while (plVar5 = plVar4, cVar1 == '\0') {
    if ((ulonglong)plVar5[4] < uVar7) {
      plVar4 = (longlong *)plVar5[2];
      plVar5 = plVar3;
    }
    else {
      if ((*(char *)((longlong)plVar6 + 0x19) != '\0') && (uVar7 < (ulonglong)plVar5[4])) {
        plVar6 = plVar5;
      }
      plVar4 = (longlong *)*plVar5;
    }
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
    plVar3 = plVar5;
  }
  plVar4 = DAT_180010a00 + 1;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    plVar4 = plVar6;
  }
  cVar1 = *(char *)(*plVar4 + 0x19);
  plVar4 = (longlong *)*plVar4;
  while (plVar5 = plVar3, cVar1 == '\0') {
    if (uVar7 < (ulonglong)plVar4[4]) {
      plVar5 = (longlong *)*plVar4;
      plVar6 = plVar4;
    }
    else {
      plVar5 = (longlong *)plVar4[2];
    }
    plVar4 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  while (plVar5 != plVar6) {
    plVar4 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar5 = plVar4;
      plVar4 = (longlong *)*plVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar5 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar2 = (longlong *)plVar5[1];
      plVar4 = plVar5;
      while ((plVar5 = plVar2, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar2 = (longlong *)plVar5[1];
        plVar4 = plVar5;
      }
    }
  }
  FUN_180004930((longlong *)&DAT_180010a00,local_res8,plVar3,plVar6);
  return;
}




void FUN_180002fc0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




void FUN_180002ff0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




bool FUN_180003020(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180003050(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_180003080(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CMutex>*___ptr64___cdecl(bool_const&___ptr64)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




bool FUN_1800030b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           ConstructFunction<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>
                           ::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}




void FUN_1800030e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>,0>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180003130(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>,0>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_180003180(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMutex>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMutex>*___ptr64___cdecl(bool_const&___ptr64)>,1>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800031c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




void FUN_1800031d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = __RTDynamicCast(param_2,0,&dnc::FunctorObjectBase::RTTI_Type_Descriptor,
                          &dnc::
                           FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>,0>
                           ::RTTI_Type_Descriptor,0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180003211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),*(undefined8 *)(lVar1 + 8));
    return;
  }
  return;
}




longlong * FUN_180003220(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}




longlong * FUN_180003290(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
    *param_1 = plVar2[2];
    return param_1;
  }
  lVar3 = *plVar2;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar3 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *param_1 = lVar3;
  }
  else {
    cVar1 = *(char *)(plVar2[1] + 0x19);
    plVar5 = (longlong *)plVar2[1];
    while ((cVar1 == '\0' && (plVar2 == (longlong *)*plVar5))) {
      *param_1 = (longlong)plVar5;
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar2 = plVar5;
      plVar5 = (longlong *)plVar5[1];
    }
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      *param_1 = (longlong)plVar5;
      return param_1;
    }
  }
  return param_1;
}




undefined8 * FUN_180003320(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 1));
    *puVar1 = CMomObject<class_CCriticalSection>::vftable;
    *(undefined4 *)(puVar1 + 6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180003380(void)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  undefined8 local_20 [3];
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = CSyncObjectImpl::vftable;
    puVar1[1] = 0;
    *puVar1 = CEvent::vftable;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    puVar1[1] = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      FUN_180002d70(local_20,"CEvent::CEvent()");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_20,(ThrowInfo *)&DAT_18000d500);
    }
    *puVar1 = CMomObject<class_CEvent>::vftable;
    *(undefined4 *)(puVar1 + 2) = 0;
  }
  return puVar1;
}




undefined8 * FUN_180003420(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  HANDLE pvVar3;
  char *pcVar4;
  uint local_res18 [2];
  undefined8 *local_res20;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    bVar1 = *param_2;
    *puVar2 = CSyncObjectImpl::vftable;
    puVar2[1] = 0;
    *puVar2 = CMutex::vftable;
    local_res20 = puVar2;
    pvVar3 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,(uint)bVar1,(LPCSTR)0x0);
    puVar2[1] = pvVar3;
    if (pvVar3 == (HANDLE)0x0) {
      thunk_FUN_180001b50();
      if (DAT_1800106c0 == (undefined1 *)0x0) {
        DAT_1800106c0 = &DAT_1800105c0;
        local_res18[0] = 0x100;
        pcVar4 = (char *)__std_type_info_name(0x18000f3d8,&DAT_180011130);
        FUN_180001e30(pcVar4,DAT_1800106c0,local_res18);
      }
      FUN_180001c30();
    }
    *puVar2 = CMomObject<class_CMutex>::vftable;
    *(undefined4 *)(puVar2 + 2) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180003510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CTimer::vftable;
    *puVar1 = CMomObject<class_CTimer>::vftable;
    *(undefined4 *)(puVar1 + 3) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




void FUN_180003560(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  return;
}




undefined8 * FUN_180003570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800035c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 FUN_180003620(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x30);
}




undefined4 FUN_180003630(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x18);
}




int FUN_180003640(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_2;
  *param_2 = *param_2 + param_3;
  UNLOCK();
  return iVar1;
}




undefined4 FUN_180003650(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_2;
  *param_2 = param_3;
  UNLOCK();
  return uVar1;
}




undefined8 FUN_180003660(void)

{
  longlong *_Memory;
  undefined8 *_Memory_00;
  undefined8 uVar1;
  undefined8 *local_res10;
  longlong *local_res18;
  
  _Memory = (longlong *)operator_new(8);
  if (_Memory == (longlong *)0x0) {
    _Memory = (longlong *)0x0;
  }
  else {
    *_Memory = (longlong)
               dnc::
               ConstructFunction<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>::
               vftable;
  }
  local_res18 = _Memory;
  _Memory_00 = (undefined8 *)operator_new(0x10);
  if (_Memory_00 == (undefined8 *)0x0) {
    _Memory_00 = (undefined8 *)0x0;
  }
  else {
    *_Memory_00 = dnc::
                  FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>,0>
                  ::vftable;
    local_res10 = _Memory_00;
    uVar1 = (**(code **)(*_Memory + 0x10))(_Memory);
    _Memory_00[1] = uVar1;
  }
  local_res10 = _Memory_00;
  if (_Memory != (longlong *)0x0) {
    free(_Memory);
  }
  uVar1 = FUN_1800025e0(&local_res10);
  if (_Memory_00 != (undefined8 *)0x0) {
    free(_Memory_00);
  }
  return uVar1;
}




DWORD FUN_180003730(void)

{
  DWORD DVar1;
  
  DVar1 = TlsAlloc();
  if (DVar1 == 0xffffffff) {
    DVar1 = 0xffffffff;
  }
  return DVar1;
}




undefined8 FUN_180003750(void)

{
  longlong *_Memory;
  undefined8 *_Memory_00;
  undefined8 uVar1;
  undefined8 *local_res10;
  longlong *local_res18;
  
  _Memory = (longlong *)operator_new(8);
  if (_Memory == (longlong *)0x0) {
    _Memory = (longlong *)0x0;
  }
  else {
    *_Memory = (longlong)
               dnc::ConstructFunction<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>::
               vftable;
  }
  local_res18 = _Memory;
  _Memory_00 = (undefined8 *)operator_new(0x10);
  if (_Memory_00 == (undefined8 *)0x0) {
    _Memory_00 = (undefined8 *)0x0;
  }
  else {
    *_Memory_00 = dnc::
                  FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>,0>
                  ::vftable;
    local_res10 = _Memory_00;
    uVar1 = (**(code **)(*_Memory + 0x10))(_Memory);
    _Memory_00[1] = uVar1;
  }
  local_res10 = _Memory_00;
  if (_Memory != (longlong *)0x0) {
    free(_Memory);
  }
  uVar1 = FUN_180002620(&local_res10);
  if (_Memory_00 != (undefined8 *)0x0) {
    free(_Memory_00);
  }
  return uVar1;
}




undefined8 FUN_180003820(void)

{
  longlong *_Memory;
  undefined8 *_Memory_00;
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  longlong *local_res20;
  
  local_res10[0] = 0;
  _Memory = (longlong *)operator_new(8);
  if (_Memory == (longlong *)0x0) {
    _Memory = (longlong *)0x0;
  }
  else {
    *_Memory = (longlong)
               dnc::
               ConstructFunction<class_CMomObject<class_CMutex>*___ptr64___cdecl(bool_const&___ptr64)>
               ::vftable;
  }
  local_res20 = _Memory;
  _Memory_00 = (undefined8 *)operator_new(0x18);
  if (_Memory_00 == (undefined8 *)0x0) {
    _Memory_00 = (undefined8 *)0x0;
  }
  else {
    *_Memory_00 = dnc::
                  FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMutex>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMutex>*___ptr64___cdecl(bool_const&___ptr64)>,1>
                  ::vftable;
    local_res18 = _Memory_00;
    uVar1 = (**(code **)(*_Memory + 0x10))(_Memory);
    _Memory_00[1] = uVar1;
    _Memory_00[2] = local_res10;
  }
  local_res18 = _Memory_00;
  if (_Memory != (longlong *)0x0) {
    free(_Memory);
  }
  uVar1 = FUN_180002620(&local_res18);
  if (_Memory_00 != (undefined8 *)0x0) {
    free(_Memory_00);
  }
  return uVar1;
}




longlong FUN_1800038f0(IObject *param_1,IObject *param_2,undefined4 param_3)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_res10 [2];
  longlong *local_res20;
  longlong **local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_2 == (IObject *)0x0) {
    thunk_FUN_180001b50();
    if (DAT_1800107d0 == (IObject *)0x0) {
      DAT_1800107d0 = (IObject *)&DAT_1800106d0;
      local_res10[0] = (longlong *)CONCAT44(local_res10[0]._4_4_,0x100);
      pcVar1 = (char *)__std_type_info_name(0x18000f3f8,&DAT_180011130);
      param_2 = DAT_1800107d0;
      FUN_180001e30(pcVar1,DAT_1800107d0,(uint *)local_res10);
    }
    IObject::operator=(param_1,param_2);
    FUN_180001c30();
    return 0;
  }
  plVar2 = (longlong *)operator_new(8);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)
              dnc::ConstructFunction<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>::vftable
    ;
  }
  local_res20 = plVar2;
  plVar3 = (longlong *)operator_new(0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    *plVar3 = (longlong)
              dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>,0>
              ::vftable;
    local_res10[0] = plVar3;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    plVar3[1] = lVar4;
  }
  local_res10[0] = plVar3;
  if (plVar2 != (longlong *)0x0) {
    free(plVar2);
  }
  lVar4 = FUN_180002660(local_res10);
  if (plVar3 != (longlong *)0x0) {
    free(plVar3);
  }
  if (lVar4 == 0) {
    return 0;
  }
  *(IObject **)(lVar4 + 8) = param_2;
  *(undefined4 *)(lVar4 + 0x10) = (undefined4)DAT_180010a08;
  *(undefined4 *)(lVar4 + 0x14) = param_3;
  local_res20 = (longlong *)CONCAT44(DAT_180010a08._4_4_,(undefined4)DAT_180010a08);
  plVar2 = (longlong *)DAT_180010a00[1];
  plVar3 = DAT_180010a00;
  if (*(char *)(DAT_180010a00[1] + 0x19) == '\0') {
    do {
      if ((longlong *)plVar2[4] < local_res20) {
        plVar5 = (longlong *)plVar2[2];
      }
      else {
        plVar5 = (longlong *)*plVar2;
        plVar3 = plVar2;
      }
      plVar2 = plVar5;
    } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    if ((plVar3 != DAT_180010a00) && ((longlong *)plVar3[4] <= local_res20)) goto LAB_180003ae8;
  }
  local_40 = &local_res20;
  plVar2 = (longlong *)FUN_1800026a0(&DAT_180010a00,&DAT_180008b3c,&local_40);
  FUN_180002970((longlong *)&DAT_180010a00,local_res10,plVar3,(ulonglong *)(plVar2 + 4),plVar2);
  plVar3 = local_res10[0];
LAB_180003ae8:
  plVar3[5] = (longlong)param_2;
  (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
  return lVar4;
}




void FUN_180003b10(undefined8 param_1,DWORD param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)TlsGetValue(param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000180003b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_2);
  return;
}




undefined8 FUN_180003b50(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint local_res10 [2];
  
  uVar4 = 0;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2 + (*param_2 == '*');
    if (*pcVar3 == '1') {
      return param_1;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_180010a18) && (_Init_thread_header(&DAT_180010a18), DAT_180010a18 == -1)) {
      if (DAT_180010b20 == (char *)0x0) {
        DAT_180010b20 = &DAT_180010a20;
        local_res10[0] = 0x100;
        pcVar2 = (char *)__std_type_info_name(0x18000fc30,&DAT_180011130);
        FUN_180001e30(pcVar2,DAT_180010b20,local_res10);
      }
      DAT_180010a10 = DAT_180010b20;
      _Init_thread_footer(&DAT_180010a18);
    }
    cVar1 = *pcVar3;
    cVar5 = *DAT_180010a10;
    pcVar2 = DAT_180010a10;
    if (cVar1 == cVar5) {
      do {
        if ((cVar1 == '\0') || (cVar5 == '\0')) break;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar3;
        cVar5 = *pcVar2;
      } while (cVar1 == cVar5);
    }
    if (cVar1 == *pcVar2) {
      uVar4 = param_1;
    }
  }
  return uVar4;
}




void FUN_180003c90(undefined8 param_1,DWORD param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180003c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_2);
  return;
}




undefined8 FUN_180003ca0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 0;
}




void FUN_180003cc0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180003cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KillTimer(DAT_1800109f8,(ulonglong)*(uint *)(param_1 + 0x10));
  return;
}




undefined8 FUN_180003ce0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint local_res10 [2];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar3 = param_2 + (*param_2 == '*');
  if (*pcVar3 == '1') {
    return param_1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180010060) && (_Init_thread_header(&DAT_180010060), DAT_180010060 == -1)) {
    if (DAT_1800105b0 == (char *)0x0) {
      DAT_1800105b0 = &DAT_1800104b0;
      local_res10[0] = 0x100;
      pcVar2 = (char *)__std_type_info_name(0x18000f3b0,&DAT_180011130);
      FUN_180001e30(pcVar2,DAT_1800105b0,local_res10);
    }
    DAT_180010058 = DAT_1800105b0;
    _Init_thread_footer(&DAT_180010060);
  }
  cVar1 = *pcVar3;
  cVar5 = *DAT_180010058;
  pcVar2 = DAT_180010058;
  if (cVar1 == cVar5) {
    do {
      if ((cVar1 == '\0') || (cVar5 == '\0')) break;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar3;
      cVar5 = *pcVar2;
    } while (cVar1 == cVar5);
  }
  uVar4 = 0;
  if (cVar1 == *pcVar2) {
    uVar4 = param_1;
  }
  return uVar4;
}




int FUN_180003e30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 6);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + 6);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  *param_1 = CCriticalSection::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  free(param_1);
  return iVar2;
}




int FUN_180003ea0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 3);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + 3);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  FUN_180002e60(param_1);
  free(param_1);
  return iVar2;
}




void FUN_180003f00(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x40))();
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000180003f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}




undefined8 FUN_180003f30(undefined8 param_1,DWORD param_2,longlong *param_3)

{
  BOOL BVar1;
  
  BVar1 = TlsSetValue(param_2,param_3);
  if (BVar1 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3);
    return 0;
  }
  return 0xffffffff;
}




void FUN_180003f70(undefined8 param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000180003f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(param_2);
  return;
}




void FUN_180003f80(longlong param_1)

{
  HWND pHVar1;
  HWND hWnd;
  undefined1 local_58 [24];
  HWND local_40;
  HICON local_38;
  HCURSOR local_30;
  HBRUSH local_28;
  char *local_20;
  LPCSTR local_18;
  HWND local_10;
  
  pHVar1 = DAT_1800109f8;
  if (DAT_1800109f8 == (HWND)0x0) {
    local_58._0_4_ = 0x50;
    local_58._4_4_ = 3;
    local_58._8_8_ = DefWindowProcA_exref;
    local_58._16_8_ = DAT_1800109f8;
    local_40 = DAT_1800109f8;
    local_38 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_30 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_28 = (HBRUSH)0x6;
    local_20 = "timer_window";
    local_18 = PTR_s_Thread_Timer_Window_18000f000;
    local_10 = pHVar1;
    RegisterClassExA((WNDCLASSEXA *)local_58);
    hWnd = CreateWindowExA(0,PTR_s_Thread_Timer_Window_18000f000,(LPCSTR)&PTR_180009150,0xcf0000,
                           -0x80000000,0,-0x80000000,0,(HWND)0x0,(HMENU)0x0,(HINSTANCE)0x0,
                           (LPVOID)0x0);
    if (hWnd != (HWND)0x0) {
      ShowWindow(hWnd,0);
      UpdateWindow(hWnd);
      pHVar1 = hWnd;
    }
  }
  DAT_1800109f8 = pHVar1;
                    /* WARNING: Could not recover jumptable at 0x0001800040c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetTimer(DAT_1800109f8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
           &LAB_1800040e0);
  return;
}




undefined1 FUN_1800040d0(void)

{
  return 0;
}




undefined8 FUN_180004130(longlong param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 0;
}




void FUN_180004150(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180004190(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_1800041d0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1800041e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800041e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




longlong * FUN_180004240(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)param_2[2];
  plVar5 = param_2 + 2;
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar4 = *(char *)(*plVar3 + 0x19);
    plVar6 = (longlong *)*plVar3;
    while (cVar4 == '\0') {
      cVar4 = *(char *)(*plVar6 + 0x19);
      plVar3 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
  }
  else {
    cVar4 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar6 = param_2;
    while ((plVar3 = plVar7, cVar4 == '\0' && (plVar6 == (longlong *)plVar3[2]))) {
      cVar4 = *(char *)(plVar3[1] + 0x19);
      plVar7 = (longlong *)plVar3[1];
      plVar6 = plVar3;
    }
  }
  plVar6 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar5;
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (plVar7 = plVar6, *(char *)(*plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar3[2], plVar3 != param_2)) {
    plVar6[1] = (longlong)plVar3;
    *plVar3 = *param_2;
    plVar6 = plVar3;
    if (plVar3 != (longlong *)*plVar5) {
      plVar6 = (longlong *)plVar3[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar6;
      }
      *plVar6 = (longlong)plVar7;
      plVar3[2] = *plVar5;
      *(longlong **)(*plVar5 + 8) = plVar3;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar3;
    }
    else {
      plVar5 = (longlong *)param_2[1];
      if ((longlong *)*plVar5 == param_2) {
        *plVar5 = (longlong)plVar3;
      }
      else {
        plVar5[2] = (longlong)plVar3;
      }
    }
    plVar3[1] = param_2[1];
    cVar4 = (char)plVar3[3];
    *(char *)(plVar3 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = cVar4;
  }
  else {
    plVar6 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar6;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar6 == param_2) {
      *plVar6 = (longlong)plVar7;
    }
    else {
      plVar6[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar5 = plVar6;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar4 = *(char *)(*plVar7 + 0x19);
        plVar3 = (longlong *)*plVar7;
        plVar5 = plVar7;
        while (plVar2 = plVar3, cVar4 == '\0') {
          plVar3 = (longlong *)*plVar2;
          cVar4 = *(char *)((longlong)plVar3 + 0x19);
          plVar5 = plVar2;
        }
      }
      *(longlong **)*param_1 = plVar5;
    }
    lVar1 = *param_1;
    if (*(longlong **)(lVar1 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) != '\0') {
        *(longlong **)(lVar1 + 0x10) = plVar6;
        cVar4 = (char)param_2[3];
        goto LAB_1800043e4;
      }
      cVar4 = *(char *)(plVar7[2] + 0x19);
      plVar5 = (longlong *)plVar7[2];
      plVar3 = plVar7;
      while (plVar2 = plVar5, cVar4 == '\0') {
        plVar5 = (longlong *)plVar2[2];
        cVar4 = *(char *)((longlong)plVar5 + 0x19);
        plVar3 = plVar2;
      }
      *(longlong **)(lVar1 + 0x10) = plVar3;
    }
    cVar4 = (char)param_2[3];
  }
LAB_1800043e4:
  if (cVar4 == '\x01') {
    if (plVar7 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar5 = plVar6;
        if ((char)plVar7[3] != '\x01') break;
        plVar3 = (longlong *)*plVar5;
        if (plVar7 == plVar3) {
          plVar3 = (longlong *)plVar5[2];
          if ((char)plVar3[3] == '\0') {
            *(undefined1 *)(plVar3 + 3) = 1;
            plVar3 = (longlong *)plVar5[2];
            *(undefined1 *)(plVar5 + 3) = 0;
            plVar5[2] = *plVar3;
            if (*(char *)(*plVar3 + 0x19) == '\0') {
              *(longlong **)(*plVar3 + 8) = plVar5;
            }
            plVar3[1] = plVar5[1];
            if (plVar5 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar3;
            }
            else {
              plVar6 = (longlong *)plVar5[1];
              if (plVar5 == (longlong *)*plVar6) {
                *plVar6 = (longlong)plVar3;
              }
              else {
                plVar6[2] = (longlong)plVar3;
              }
            }
            *plVar3 = (longlong)plVar5;
            plVar5[1] = (longlong)plVar3;
            plVar3 = (longlong *)plVar5[2];
          }
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            if ((*(char *)(*plVar3 + 0x18) != '\x01') || (*(char *)(plVar3[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar3[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar3 + 0x18) = 1;
                *(undefined1 *)(plVar3 + 3) = 0;
                FUN_180004600(param_1,plVar3);
                plVar3 = (longlong *)plVar5[2];
              }
              *(char *)(plVar3 + 3) = (char)plVar5[3];
              *(undefined1 *)(plVar5 + 3) = 1;
              *(undefined1 *)(plVar3[2] + 0x18) = 1;
              FUN_1800045a0(param_1,(longlong)plVar5);
              break;
            }
LAB_18000450d:
            *(undefined1 *)(plVar3 + 3) = 0;
          }
        }
        else {
          if ((char)plVar3[3] == '\0') {
            *(undefined1 *)(plVar3 + 3) = 1;
            *(undefined1 *)(plVar5 + 3) = 0;
            FUN_180004600(param_1,plVar5);
            plVar3 = (longlong *)*plVar5;
          }
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            if ((*(char *)(plVar3[2] + 0x18) == '\x01') && (*(char *)(*plVar3 + 0x18) == '\x01'))
            goto LAB_18000450d;
            if (*(char *)(*plVar3 + 0x18) == '\x01') {
              *(undefined1 *)(plVar3[2] + 0x18) = 1;
              *(undefined1 *)(plVar3 + 3) = 0;
              FUN_1800045a0(param_1,(longlong)plVar3);
              plVar3 = (longlong *)*plVar5;
            }
            *(char *)(plVar3 + 3) = (char)plVar5[3];
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(*plVar3 + 0x18) = 1;
            FUN_180004600(param_1,plVar5);
            break;
          }
        }
        plVar6 = (longlong *)plVar5[1];
        plVar7 = plVar5;
      } while (plVar5 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}




void FUN_1800045a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_180004600(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_180004660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>::
              vftable;
    return;
  }
  return;
}




void FUN_180004690(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::ConstructFunction<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>::vftable
    ;
    return;
  }
  return;
}




void FUN_1800046c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              ConstructFunction<class_CMomObject<class_CMutex>*___ptr64___cdecl(bool_const&___ptr64)>
              ::vftable;
    return;
  }
  return;
}




void FUN_1800046f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::ConstructFunction<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>::vftable
    ;
    return;
  }
  return;
}




undefined8 * FUN_180004720(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CCriticalSection>*___ptr64___cdecl(void)>,0>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004790(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CEvent>*___ptr64___cdecl(void)>,0>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004800(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CMutex>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CMutex>*___ptr64___cdecl(bool_const&___ptr64)>,1>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_180004870(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = dnc::
              FunctorBindObject<class_dnc::Functor<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>,class_dnc::Functor<class_CMomObject<class_CTimer>*___ptr64___cdecl(void)>,0>
              ::vftable;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar1[1] = uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x30)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined8 *
FUN_180004930(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar4) && (param_4 == plVar4)) {
    plVar3 = plVar4;
    plVar5 = (longlong *)plVar4[1];
    if (*(char *)(plVar4[1] + 0x19) == '\0') {
      do {
        FUN_1800041e0(param_1,(longlong *)plVar5[2]);
        plVar3 = (longlong *)*plVar5;
        free(plVar5);
        plVar5 = plVar3;
      } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
      plVar3 = (longlong *)*param_1;
    }
    plVar3[1] = (longlong)plVar4;
    *(longlong **)*param_1 = plVar4;
    *(longlong **)(*param_1 + 0x10) = plVar4;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    plVar4 = param_3;
    if (param_3 != param_4) {
      do {
        plVar3 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          param_3 = plVar3;
          plVar5 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            param_3 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar2 = (longlong *)plVar4[1];
          plVar5 = plVar4;
          while ((param_3 = plVar2, cVar1 == '\0' && (plVar5 == (longlong *)param_3[2]))) {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar2 = (longlong *)param_3[1];
            plVar5 = param_3;
          }
        }
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
          while (cVar1 == '\0') {
            plVar3 = (longlong *)*plVar3;
            cVar1 = *(char *)((longlong)plVar3 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar5 = (longlong *)plVar4[1];
          plVar3 = plVar4;
          while ((plVar2 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar2[2]))) {
            cVar1 = *(char *)(plVar2[1] + 0x19);
            plVar5 = (longlong *)plVar2[1];
            plVar3 = plVar2;
          }
        }
        plVar4 = FUN_180004240(param_1,plVar4);
        free(plVar4);
        plVar4 = param_3;
      } while (param_3 != param_4);
    }
    *param_2 = param_3;
  }
  return param_2;
}




char * FUN_180004ab0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




undefined8 * FUN_180004ad0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uintptr_t uVar5;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_30 [3];
  
  *param_1 = CThread::vftable;
  puVar1 = param_1 + 4;
  *puVar1 = CSyncObjectImpl::vftable;
  param_1[5] = 0;
  *puVar1 = CMutex::vftable;
  local_res20 = puVar1;
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[5] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    thunk_FUN_180001b50();
    if (DAT_1800106c0 == (undefined1 *)0x0) {
      DAT_1800106c0 = &DAT_1800105c0;
      local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,0x100);
      pcVar3 = (char *)__std_type_info_name(0x18000f3d8,&DAT_180011130);
      FUN_180001e30(pcVar3,DAT_1800106c0,(uint *)&local_res18);
    }
    FUN_180001c30();
  }
  *puVar1 = CMomObject<class_CMutex>::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  *puVar1 = CMomStackObject<class_CMutex>::vftable;
  puVar1 = param_1 + 9;
  *puVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_res18 = puVar1;
  local_res20 = puVar1;
  puVar4 = (undefined8 *)operator_new(0x10);
  *puVar1 = puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 **)*puVar1 = puVar1;
  local_res18 = param_1 + 0xe;
  *local_res18 = 0;
  if (param_2 == (longlong *)0x0) {
    FUN_180004d30(local_30,"CThread::CThread()");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_30,(ThrowInfo *)&DAT_18000d560);
  }
  param_1[3] = param_2;
  param_1[7] = 0;
  *(uint *)(param_1 + 8) = 0;
  (**(code **)(*param_2 + 0x10))(param_2);
  uVar5 = _beginthreadex((void *)0x0,0,FUN_1800051a0,param_1,4,(uint *)(param_1 + 8));
  param_1[7] = uVar5;
  if (uVar5 == 0) {
    FUN_180002d70(local_30,"Create thread.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_30,(ThrowInfo *)&DAT_18000d500);
  }
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[2] = pvVar2;
  if (pvVar2 != (HANDLE)0x0) {
    return param_1;
  }
  FUN_180002d70(local_30,"Create WaitExit Event.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_30,(ThrowInfo *)&DAT_18000d500);
}




undefined8 * FUN_180004cd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}




undefined8 * FUN_180004d30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_20;
  undefined1 local_18;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = 1;
  local_20 = param_2;
  __std_exception_copy(&local_20);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}




void FUN_180004da0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_180004dd0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180004ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_180004de0(undefined8 *param_1)

{
  *param_1 = CSyncObjectImpl::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




void FUN_180004e20(undefined8 *param_1)

{
  free((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_180004e50(undefined8 *param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      param_1[4] = lVar2;
    } while (lVar2 != 0);
    param_1[3] = 0;
  }
  lVar2 = param_1[2];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    pvVar1 = *(void **)(param_1[1] + lVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] * 8)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  free((void *)*param_1);
  *param_1 = 0;
  return;
}




void FUN_180004f30(undefined8 *param_1)

{
  FUN_180004e50(param_1);
  return;
}




void FUN_180004f50(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




void FUN_180004f70(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_1 = CThread::vftable;
  if (param_1[0xd] != 0) {
    uVar2 = param_1[0xc];
    do {
      uVar3 = 0;
      if ((ulonglong *)param_1[9] != (ulonglong *)0x0) {
        uVar3 = *(ulonglong *)param_1[9];
      }
      (**(code **)(**(longlong **)
                     (*(longlong *)
                       (*(longlong *)(uVar3 + 8) +
                       (*(longlong *)(uVar3 + 0x10) - 1U & uVar2 >> 1) * 8) +
                     (ulonglong)((uint)uVar2 & 1) * 8) + 8))();
      plVar1 = param_1 + 0xd;
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        param_1[0xc] = 0;
        uVar2 = 0;
      }
      else {
        param_1[0xc] = param_1[0xc] + 1;
        uVar2 = param_1[0xc];
      }
    } while (param_1[0xd] != 0);
  }
  (**(code **)(*(longlong *)param_1[3] + 8))();
  CloseHandle((HANDLE)param_1[7]);
  CloseHandle((HANDLE)param_1[2]);
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 8))();
  }
  FUN_180004e50(param_1 + 9);
  param_1[4] = CSyncObjectImpl::vftable;
  if ((HANDLE)param_1[5] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[5]);
    param_1[5] = 0;
  }
  return;
}




undefined8 * FUN_1800050a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




DWORD FUN_180005100(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = GetExitCodeThread(*(HANDLE *)(param_1 + 0x38),local_res8);
  if (BVar1 != 0) {
    DVar2 = 10000;
    if (local_res8[0] != 0x103) {
      DVar2 = local_res8[0];
    }
    return DVar2;
  }
  return 0xffffffff;
}




undefined8 FUN_180005140(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x28))
            (plVar1,0xffffffff,param_3,param_4,0xfffffffffffffffe,plVar1,0xffffffff);
  uVar2 = FUN_1800023e0(param_1);
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return uVar2;
}




undefined4 FUN_1800051a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),param_1,param_3,param_4,0xffffffff,
                     0xfffffffffffffffe);
  SetEvent(*(HANDLE *)(param_1 + 0x10));
  return uVar1;
}




undefined4 FUN_180005200(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_2 == (longlong *)0x0) {
    uVar3 = 0xfffffffe;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x20);
    (**(code **)(*plVar1 + 0x28))
              (plVar1,0xffffffff,param_3,param_4,0xfffffffffffffffe,plVar1,0xffffffff);
    uVar6 = *(ulonglong *)(param_1 + 0x60);
    if ((((int)*(longlong *)(param_1 + 0x68) + (int)uVar6 & 1U) == 0) &&
       (*(ulonglong *)(param_1 + 0x58) <= *(longlong *)(param_1 + 0x68) + 2U >> 1)) {
      FUN_1800054b0(param_1 + 0x48,1);
      uVar6 = *(ulonglong *)(param_1 + 0x60);
    }
    uVar6 = *(longlong *)(param_1 + 0x58) * 2 - 1U & uVar6;
    *(ulonglong *)(param_1 + 0x60) = uVar6;
    uVar6 = *(longlong *)(param_1 + 0x68) + uVar6;
    lVar2 = (*(longlong *)(param_1 + 0x58) - 1U & uVar6 >> 1) * 8;
    lVar5 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(lVar5 + lVar2) == 0) {
      pvVar4 = operator_new(0x10);
      *(void **)(lVar2 + *(longlong *)(param_1 + 0x50)) = pvVar4;
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    *(longlong **)(*(longlong *)(lVar2 + lVar5) + (ulonglong)((uint)uVar6 & 1) * 8) = param_2;
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
    (**(code **)(*param_2 + 0x10))(param_2);
    PostThreadMessageA(*(DWORD *)(param_1 + 0x40),0x678,0xffffffff88355234,0x68953345);
    (**(code **)(*plVar1 + 0x30))(plVar1);
    uVar3 = 0;
  }
  return uVar3;
}




int FUN_180005340(longlong param_1,int param_2)

{
  BOOL BVar1;
  
  BVar1 = SetThreadPriority(*(HANDLE *)(param_1 + 0x38),param_2);
  return (BVar1 != 0) - 1;
}




int FUN_180005360(longlong param_1)

{
  DWORD DVar1;
  
  DVar1 = ResumeThread(*(HANDLE *)(param_1 + 0x38));
  return (DVar1 != 0xffffffff) - 1;
}




void FUN_180005380(longlong *param_1)

{
  WaitForSingleObject((HANDLE)param_1[2],0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001800053a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}




longlong FUN_1800053b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  tagMSG local_40;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  (**(code **)(*plVar1 + 0x28))
            (plVar1,0xffffffff,param_3,param_4,0xfffffffffffffffe,plVar1,0xffffffff);
  lVar2 = FUN_1800023e0(param_1);
  if (lVar2 != 0) {
    (**(code **)(*plVar1 + 0x30))();
    return lVar2;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1);
  local_40.message = 0;
  do {
    if ((((local_40.message == 0x678) && (local_40.wParam == 0xffffffff88355234)) &&
        (local_40.lParam == 0x68953345)) && (local_40.hwnd == (HWND)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0xffffffff);
      lVar2 = FUN_1800023e0(param_1);
      if (lVar2 != 0) {
        (**(code **)(*plVar1 + 0x30))(plVar1);
        return lVar2;
      }
      (**(code **)(*plVar1 + 0x30))();
    }
    GetMessageA(&local_40,(HWND)0x0,0,0);
  } while( true );
}




void FUN_1800054b0(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *_Memory;
  ulonglong uVar4;
  size_t sVar5;
  size_t sVar6;
  ulonglong uVar7;
  void *_Dst;
  ulonglong uVar8;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 1;
  if (uVar4 != 0) {
    uVar3 = uVar4;
  }
  for (; (uVar7 = uVar3 - uVar4, uVar7 < param_2 || (uVar3 < 8)); uVar3 = uVar3 * 2) {
    if (0xfffffffffffffff - uVar3 < uVar3) {
      FUN_180005690();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = uVar3 * 8;
  uVar8 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar4) goto LAB_180005536;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_180005536:
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_180005678;
    _Dst = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar2;
  }
  sVar6 = uVar8 * 8;
  pvVar2 = (void *)(*(longlong *)(param_1 + 8) + sVar6);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar2) + *(longlong *)(param_1 + 8);
  memmove((void *)(sVar6 + (longlong)_Dst),pvVar2,sVar5);
  pvVar2 = (void *)(sVar5 + (longlong)(sVar6 + (longlong)_Dst));
  if (uVar7 < uVar8) {
    sVar5 = uVar7 * 8;
    memmove(pvVar2,*(void **)(param_1 + 8),sVar5);
    pvVar2 = (void *)(sVar5 + *(longlong *)(param_1 + 8));
    sVar6 = (*(longlong *)(param_1 + 8) - (longlong)pvVar2) + sVar6;
    memmove(_Dst,pvVar2,sVar6);
    pvVar2 = (void *)(sVar6 + (longlong)_Dst);
  }
  else {
    memmove(pvVar2,*(void **)(param_1 + 8),sVar6);
    memset((void *)(sVar6 + (longlong)pvVar2),0,(uVar7 - uVar8) * 8);
    pvVar2 = _Dst;
    sVar5 = sVar6;
  }
  memset(pvVar2,0,sVar5);
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
LAB_180005678:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar7;
  return;
}




void FUN_180005690(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
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
    FUN_1800066d4();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800066b4();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
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
LAB_180005716:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180010b30 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180010b30;
        pvVar1 = DAT_180010b30;
      }
      DAT_180010b30 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180005716;
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
    uVar3 = FUN_180006878();
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
  
  uVar1 = FUN_1800058a0(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180006c08();
  if (cVar1 != '\0') {
    cVar1 = FUN_180006c08();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180006c08();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180006c08();
  FUN_180006c08();
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
    _execute_onexit_table(&DAT_180010b40);
    return;
  }
  uVar2 = FUN_180001460();
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
  FUN_180006c08();
  FUN_180006c08();
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
    DAT_180010b38 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180006c08();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180006c08();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180006c08();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800058a0(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180010b39 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000f018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000f018;
      _DAT_180010b40 = in_RAX;
      uRam0000000180010b48 = in_RAX;
      _DAT_180010b50 = in_RAX;
      _DAT_180010b58 = in_RAX;
      uRam0000000180010b60 = in_RAX;
      _DAT_180010b68 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180010b40);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180010b58), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180010b39 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180005a06) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_1800059ef;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800059ef:
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
    DAT_180010b30 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_180010b38 == '\0') || (param_2 == '\0')) {
    FUN_180006c08();
    FUN_180006c08();
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
  
  bVar2 = (byte)DAT_18000f018 & 0x3f;
  if (((DAT_18000f018 ^ _DAT_180010b40) >> bVar2 | (DAT_18000f018 ^ _DAT_180010b40) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180010b40,_Func);
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




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180005af9. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180005b2a;
  capture_previous_context((PCONTEXT)&DAT_180010c10);
  _DAT_180010b80 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180010ca8 = puVar3 + 0x40;
  _DAT_180010c90 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180010b70 = 0xc0000409;
  _DAT_180010b74 = 1;
  _DAT_180010b88 = 1;
  DAT_180010b90 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000f018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000f010;
  *(undefined8 *)(puVar3 + -8) = 0x180005bcc;
  DAT_180010d08 = _DAT_180010b80;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800097f0);
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
  *(undefined8 *)(puVar3 + -8) = 0x180005c12;
  capture_current_context((PCONTEXT)&DAT_180010c10);
  _DAT_180010b80 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180010ca8 = puVar3 + 0x30;
  _DAT_180010b70 = 0xc0000409;
  _DAT_180010b74 = 1;
  _DAT_180010b88 = 1;
  DAT_180010b90 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180005c7e;
  DAT_180010d08 = _DAT_180010b80;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800097f0);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180005d68(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_1800110e0,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180005eba;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180011110 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180011110 != (HANDLE)0x0) goto LAB_180005e58;
  }
  else {
    DAT_180011110 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180011108);
    bVar7 = 0x40 - ((byte)DAT_18000f018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180011118 = DAT_18000f018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180011120 = DAT_18000f018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180005e58:
    uVar6 = FUN_1800058a0(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180005ec8);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180005eba:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180005ec8(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
  if (DAT_180011110 != (HANDLE)0x0) {
    CloseHandle(DAT_180011110);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000f00c = DAT_18000f00c + 1;
  *param_1 = DAT_18000f00c;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000f00c;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180005fd4:
                    /* WARNING: Could not recover jumptable at 0x000180005fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000f00c;
      goto LAB_180005fd4;
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
  
  if (DAT_180011110 != (HANDLE)0x0) {
    SetEvent(DAT_180011110);
                    /* WARNING: Could not recover jumptable at 0x000180006031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180011110);
    return;
  }
  bVar1 = (byte)DAT_18000f018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000f018 ^ _DAT_180011120) >> bVar1 |
            (DAT_18000f018 ^ _DAT_180011120) << 0x40 - bVar1))(&DAT_180011108);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180011110 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
    WaitForSingleObjectEx(DAT_180011110,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001800060a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800110e0);
    return;
  }
  bVar1 = (byte)DAT_18000f018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180006c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000f018 ^ _DAT_180011118) >> bVar1 |
            (DAT_18000f018 ^ _DAT_180011118) << 0x40 - bVar1))
            (&DAT_180011108,&DAT_1800110e0,param_1);
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




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18000f018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_1800061e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800061eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180011130);
  return;
}




void FUN_1800061f4(void)

{
  __std_type_info_destroy_list(&DAT_180011130);
  return;
}




undefined8 * FUN_180006200(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
    if (DAT_180011144 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180011144 = DAT_180011144 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_180010b28 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_1800061f4();
      FID_conflict__RTC_Initialize();
      DAT_180010b28 = 0;
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
    if (DAT_180010b28 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_180010b28 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_1800061e4();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_1800082e0,&DAT_1800082f0);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_1800082c8,&DAT_1800082d8);
        DAT_180010b28 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180006adc();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180011144 = DAT_180011144 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x0001800064ec) */
/* WARNING: Removing unreachable block (ram,0x00018000647b) */
/* WARNING: Removing unreachable block (ram,0x00018000652f) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180011144 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = DllMain(param_1,param_2);
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      DllMain(param_1,0);
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




undefined8 * FUN_18000659c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800065dc(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800065fc(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000663c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180006670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800066b4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800065dc(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000d5c8);
}




void FUN_1800066d4(void)

{
  undefined8 local_28 [5];
  
  FUN_18000663c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000d628);
}




/* WARNING: Removing unreachable block (ram,0x0001800067ca) */
/* WARNING: Removing unreachable block (ram,0x000180006748) */
/* WARNING: Removing unreachable block (ram,0x000180006723) */
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
  
  DAT_18000f024 = 2;
  _DAT_18000f020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000f028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180011148 = DAT_180011148 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180011148 = DAT_180011148 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000f020 = 2;
    DAT_18000f024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000f024 = 0xe;
      _DAT_18000f020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000f020 = 5;
        DAT_18000f024 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180006878(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000f030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000688c(void)

{
  _DAT_18001114c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800068c7;
  FUN_18000688c();
  *(undefined8 *)(puVar4 + -8) = 0x1800068d8;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800068e2;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1800068fc;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000693d;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000696f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180006991;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800069b2;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800069bd;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800069cd;
    FUN_18000688c();
  }
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
  
  if (DAT_18000f018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000f018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000f018 == 0x2b992ddfa232) {
      DAT_18000f018 = 0x2b992ddfa233;
    }
  }
  DAT_18000f010 = ~DAT_18000f018;
  return;
}




/* Library Function - Single Match
    DllMain
   
   Library: Visual Studio 2017 Release */

undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}




undefined * FUN_180006ab0(void)

{
  return &DAT_180011150;
}




undefined * FUN_180006ab8(void)

{
  return &DAT_180011158;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180006ab0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180006ab8();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180006adc(void)

{
  return &DAT_180011160;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18000bb78; puVar1 < &DAT_18000bb78; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18000bb88; puVar1 < &DAT_18000bb88; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180006c08(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180006c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




undefined * Catch_180006c30(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    FUN_180004f70(_Memory);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  FUN_180001b50();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_180011130);
  FUN_180001c30();
  return &DAT_18000105e;
}




undefined * Catch_180006c9b(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    FUN_180004f70(_Memory);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  FUN_180001b50();
  FUN_180001c30();
  return &DAT_18000105e;
}




void Unwind_180006cf0(undefined8 param_1,longlong param_2)

{
  FUN_180001100(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_180006d00(undefined8 param_1,longlong param_2)

{
  FUN_180004f70(*(undefined8 **)(param_2 + 0x58));
  return;
}




undefined * Catch_180006d10(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    FUN_180004f70(_Memory);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  FUN_180001b50();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_180011130);
  FUN_180001c30();
  return &DAT_18000109e;
}




undefined * Catch_180006d7b(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    FUN_180004f70(_Memory);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  FUN_180001b50();
  FUN_180001c30();
  return &DAT_18000109e;
}




void Unwind_180006dd0(undefined8 param_1,longlong param_2)

{
  FUN_180001140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006de0(undefined8 param_1,longlong param_2)

{
  FUN_180001180(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006df0(undefined8 param_1,longlong param_2)

{
  FUN_180004f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006e00(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_180006e20(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_180006e40(undefined8 param_1,longlong param_2)

{
  FUN_180004f70(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180006e50(void)

{
  FUN_1800010c0((undefined8 *)&DAT_180010038);
  return;
}




void Unwind_180006e60(void)

{
  FUN_180001140((undefined8 *)&DAT_180010038);
  return;
}




void Unwind_180006e70(void)

{
  FUN_180001180((undefined8 *)&DAT_180010038);
  return;
}




void Unwind_180006e80(undefined8 param_1,longlong param_2)

{
  FUN_180001100(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_180006e90(void)

{
  return 0x1800015cc;
}




void Unwind_180006eb0(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_180006ec0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_180006ee0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001120((undefined8 *)(param_2 + 0x78));
  }
  return;
}




void Unwind_180006f10(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(*(longlong *)(param_2 + 0x78) + 8));
  return;
}




void Unwind_180006f20(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_180006f40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180001120((undefined8 *)(param_2 + 0x78));
  }
  return;
}




void Unwind_180006f70(void)

{
  _Init_thread_abort(&DAT_180010050);
  return;
}




void Unwind_180006f80(void)

{
  _Init_thread_abort(&DAT_180010060);
  return;
}




void Unwind_180006f90(void)

{
  _Init_thread_abort(&DAT_180010028);
  return;
}




void Unwind_180006fa0(void)

{
  _Init_thread_abort(&DAT_18000fff8);
  return;
}




void Unwind_180006fb0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180006fd0(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_180006fe0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




undefined * Catch_180007000(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    *_Memory = CCriticalSection::vftable;
    DeleteCriticalSection((LPCRITICAL_SECTION)(_Memory + 1));
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_180001b50();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_180011130);
  FUN_180001c30();
  return &DAT_18000260e;
}




undefined * Catch_180007077(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    *_Memory = CCriticalSection::vftable;
    DeleteCriticalSection((LPCRITICAL_SECTION)(_Memory + 1));
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_180001b50();
  FUN_180001c30();
  return &DAT_18000260e;
}




void Unwind_1800070e0(undefined8 param_1,longlong param_2)

{
  FUN_180002e30(*(undefined8 **)(param_2 + 0x58));
  return;
}




undefined * Catch_1800070f0(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    *_Memory = CSyncObjectImpl::vftable;
    if ((HANDLE)_Memory[1] != (HANDLE)0x0) {
      CloseHandle((HANDLE)_Memory[1]);
      _Memory[1] = 0;
    }
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_180001b50();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_180011130);
  FUN_180001c30();
  return &DAT_18000264e;
}




undefined * Catch_180007174(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    *_Memory = CSyncObjectImpl::vftable;
    if ((HANDLE)_Memory[1] != (HANDLE)0x0) {
      CloseHandle((HANDLE)_Memory[1]);
      _Memory[1] = 0;
    }
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_180001b50();
  FUN_180001c30();
  return &DAT_18000264e;
}




void Unwind_1800071e0(undefined8 param_1,longlong param_2)

{
  FUN_180001140(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1800071f0(undefined8 param_1,longlong param_2)

{
  FUN_180001180(*(undefined8 **)(param_2 + 0x58));
  return;
}




undefined * Catch_180007200(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  longlong lVar1;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    FUN_180002e60(_Memory);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_180001b50();
  lVar1 = __RTtypeid(*(undefined8 *)(param_2 + 0x30));
  __std_type_info_name(lVar1 + 8,&DAT_180011130);
  FUN_180001c30();
  return &DAT_18000268e;
}




undefined * Catch_18000726b(undefined8 param_1,longlong param_2)

{
  undefined8 *_Memory;
  
  _Memory = *(undefined8 **)(param_2 + 0x20);
  if (_Memory != (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x58) = _Memory;
    FUN_180002e60(_Memory);
    free(_Memory);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  thunk_FUN_180001b50();
  FUN_180001c30();
  return &DAT_18000268e;
}




void Unwind_1800072c0(undefined8 param_1,longlong param_2)

{
  FUN_180002e60(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Catch_1800072d0(undefined8 param_1,longlong param_2)

{
  FUN_1800041d0(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180007300(undefined8 param_1,longlong param_2)

{
  FUN_1800041d0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180007330(undefined8 param_1,longlong param_2)

{
  FUN_1800041d0(*(undefined8 *)(param_2 + 0x60),*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180007360(undefined8 param_1,longlong param_2)

{
  FUN_180002fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007370(undefined8 param_1,longlong param_2)

{
  FUN_180002fc0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180007380(undefined8 param_1,longlong param_2)

{
  FUN_180002e10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007390(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_1800073b0(undefined8 param_1,longlong param_2)

{
  FUN_180002e30(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1800073c0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1800073e0(undefined8 param_1,longlong param_2)

{
  FUN_180002e60(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1800073f0(void)

{
  FUN_180002dd0(&DAT_180010a00);
  return;
}




void Unwind_180007400(void)

{
  FUN_180002e10(&DAT_180010a00);
  return;
}




void Unwind_180007410(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_180007420(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_180007440(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001120((undefined8 *)(param_2 + 0x48));
  }
  return;
}




void Unwind_180007470(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_180007480(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1800074a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001120((undefined8 *)(param_2 + 0x60));
  }
  return;
}




void Unwind_1800074d0(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_1800074e0(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_1800074f0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x88));
  return;
}




void Unwind_180007510(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180001120((undefined8 *)(param_2 + 0x88));
  }
  return;
}




void Unwind_180007540(undefined8 param_1,longlong param_2)

{
  FUN_180001120((undefined8 *)(*(longlong *)(param_2 + 0x88) + 8));
  return;
}




void Unwind_180007550(void)

{
  _Init_thread_abort(&DAT_180010a18);
  return;
}




void Unwind_180007560(undefined8 param_1,longlong param_2)

{
  FUN_180002e30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007570(undefined8 param_1,longlong param_2)

{
  FUN_180002e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_180007580(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1800075b0(undefined8 param_1,longlong param_2)

{
  deallocate(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800075e0(undefined8 param_1,longlong param_2)

{
  FUN_180004de0((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x20));
  return;
}




void Unwind_1800075f0(undefined8 param_1,longlong param_2)

{
  FUN_180004f30((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x48));
  return;
}




void Unwind_180007600(undefined8 param_1,longlong param_2)

{
  FUN_180004da0((longlong *)(*(longlong *)(param_2 + 0x70) + 0x70));
  return;
}




void Unwind_180007610(undefined8 param_1,longlong param_2)

{
  FUN_1800010c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_180007620(undefined8 param_1,longlong param_2)

{
  FUN_180001140(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_180007630(undefined8 param_1,longlong param_2)

{
  FUN_180001180(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_180007640(undefined8 param_1,longlong param_2)

{
  FUN_180004e50(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_180007650(undefined8 param_1,longlong param_2)

{
  FUN_180004e20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_180007660(undefined8 param_1,longlong param_2)

{
  FUN_180004dd0(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_180007670(undefined8 param_1,longlong param_2)

{
  FUN_180002ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180007680(undefined8 param_1,longlong param_2)

{
  FUN_180002ff0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_180007690(undefined8 param_1,longlong param_2)

{
  FUN_180004dd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1800076a0(undefined8 param_1,longlong param_2)

{
  FUN_1800010c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800076b0(undefined8 param_1,longlong param_2)

{
  FUN_180004e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800076c0(undefined8 param_1,longlong param_2)

{
  FUN_180004e50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1800076d0(undefined8 param_1,longlong param_2)

{
  FUN_180004de0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1800076e0(undefined8 param_1,longlong param_2)

{
  FUN_180004f30((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_1800076f0(undefined8 param_1,longlong param_2)

{
  FUN_180004da0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




void Unwind_180007700(undefined8 param_1,longlong param_2)

{
  FUN_180004dd0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180007710(undefined8 param_1,longlong param_2)

{
  FUN_180004e50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_180007720(undefined8 param_1,longlong param_2)

{
  FUN_180004f50((undefined8 *)(param_2 + 0x28));
  return;
}




undefined1 * Catch_180007730(void)

{
  return &LAB_1800051e3;
}




undefined1 * Catch_18000774b(void)

{
  return &LAB_1800051e3;
}




void FUN_18000777e(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180007795(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800077b1(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800077f0(void)

{
  _DAT_180010038 = CSyncObjectImpl::vftable;
  if (DAT_180010040 != (HANDLE)0x0) {
    CloseHandle(DAT_180010040);
    DAT_180010040 = (HANDLE)0x0;
  }
  return;
}




void FUN_180007830(void)

{
  undefined8 local_res8 [4];
  
  FUN_180004930((longlong *)&DAT_180010a00,local_res8,(longlong *)*DAT_180010a00,DAT_180010a00);
  free(DAT_180010a00);
  return;
}



