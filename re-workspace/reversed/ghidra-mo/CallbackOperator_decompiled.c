
/* public: __cdecl CCallBackOperate::CCallBackOperate(unsigned long (__cdecl*)(struct OC_PARAM *
   __ptr64,void * __ptr64),void * __ptr64) __ptr64 */

CCallBackOperate * __thiscall
CCallBackOperate::CCallBackOperate
          (CCallBackOperate *this,_func_ulong_OC_PARAM_ptr_void_ptr *param_1,void *param_2)

{
                    /* 0x1000  1  ??0CCallBackOperate@@QEAA@P6AKPEAUOC_PARAM@@PEAX@Z1@Z */
  *(_func_ulong_OC_PARAM_ptr_void_ptr **)this = param_1;
  *(void **)(this + 8) = param_2;
  return this;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x1010  2  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x1010  3  ??0IObject@@QEAA@AEBU0@@Z
                       0x1010  4  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




void FUN_180001020(longlong *param_1)

{
  FUN_180002f40(param_1);
  return;
}




/* public: __cdecl CCallBackOperate::~CCallBackOperate(void) __ptr64 */

void __thiscall CCallBackOperate::~CCallBackOperate(CCallBackOperate *this)

{
                    /* 0x1040  5  ??1CCallBackOperate@@QEAA@XZ */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}




/* public: class CCallBackOperate & __ptr64 __cdecl CCallBackOperate::operator=(class
   CCallBackOperate const & __ptr64) __ptr64 */

CCallBackOperate * __thiscall
CCallBackOperate::operator=(CCallBackOperate *this,CCallBackOperate *param_1)

{
  undefined8 uVar1;
  
                    /* 0x1050  6  ??4CCallBackOperate@@QEAAAEAV0@AEBV0@@Z
                       0x1050  7  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1060  8  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1060  9  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z
                       0x1060  10  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x1060  11  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x1070  13  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180001073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




/* public: unsigned long __cdecl CCallBackOperate::CallFunction(struct OC_PARAM * __ptr64,void *
   __ptr64) __ptr64 */

ulong __thiscall
CCallBackOperate::CallFunction(CCallBackOperate *this,OC_PARAM *param_1,void *param_2)

{
  ulong uVar1;
  
                    /* 0x1080  14  ?CallFunction@CCallBackOperate@@QEAAKPEAUOC_PARAM@@PEAX@Z */
  if (*(code **)this != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)this)(param_1,param_2);
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::DoMessageLoop(void) __ptr64 */

ulong __thiscall CCallBackOperate::DoMessageLoop(CCallBackOperate *this)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x10a0  15  ?DoMessageLoop@CCallBackOperate@@QEAAKXZ */
  if (*(code **)this != (code *)0x0) {
    local_48 = 0xe;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::EndCurChildOperation(void) __ptr64 */

ulong __thiscall CCallBackOperate::EndCurChildOperation(CCallBackOperate *this)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x1100  16  ?EndCurChildOperation@CCallBackOperate@@QEAAKXZ */
  if (*(code **)this != (code *)0x0) {
    local_48 = 9;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::EndCurOperation(void) __ptr64 */

ulong __thiscall CCallBackOperate::EndCurOperation(CCallBackOperate *this)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x1160  17  ?EndCurOperation@CCallBackOperate@@QEAAKXZ */
  if (*(code **)this != (code *)0x0) {
    local_48 = 2;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::EndFileSystemOperation(void) __ptr64 */

ulong __thiscall CCallBackOperate::EndFileSystemOperation(CCallBackOperate *this)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x11c0  18  ?EndFileSystemOperation@CCallBackOperate@@QEAAKXZ */
  if (*(code **)this != (code *)0x0) {
    local_48 = 4;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x1220  19  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180001223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




void FUN_180001230(longlong *param_1)

{
  void *pvVar1;
  LSTATUS LVar2;
  longlong lVar3;
  LPCWSTR lpAppName;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStackY_598 [32];
  DWORD local_564;
  HKEY local_560;
  undefined8 local_558;
  longlong *local_550;
  WCHAR local_548;
  undefined6 uStack_546;
  longlong local_538;
  ulonglong local_530;
  undefined2 local_528;
  undefined6 uStack_526;
  longlong lStack_520;
  longlong local_518;
  ulonglong uStack_510;
  WCHAR local_508 [104];
  short local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_558 = 0xfffffffffffffffe;
  local_18 = DAT_180009008 ^ (ulonglong)auStackY_598;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  local_564 = 0x104;
  local_550 = param_1;
  memset(local_438,0,0x208);
  LVar2 = RegOpenKeyExA((HKEY)0xffffffff80000002,"Software\\EASEUS\\EPM",0,0x20019,&local_560);
  if (LVar2 == 0) {
    RegQueryValueExW(local_560,L"Language",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)local_438,&local_564);
  }
  local_538 = 0;
  local_530 = 7;
  local_548 = L'\0';
  uVar5 = 0xffffffffffffffff;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (local_438[uVar6] != 0);
  FUN_180003050((longlong *)&local_548,local_438,uVar6);
  RegCloseKey(local_560);
  local_560 = (HKEY)0x0;
  if (local_538 == 0) {
    if (local_530 < 8) goto LAB_18000159e;
    pvVar1 = (void *)CONCAT62(uStack_546,local_548);
    pvVar4 = pvVar1;
    if ((0xfff < local_530 * 2 + 2) &&
       (pvVar4 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    memset(local_508,0,200);
    lpAppName = &local_548;
    if (7 < local_530) {
      lpAppName = (LPCWSTR)CONCAT62(uStack_546,local_548);
    }
    GetPrivateProfileStringW(lpAppName,L"res",(LPCWSTR)0x0,local_508,100,L"../res/langind.ini");
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (local_508[lVar3] != L'\0');
    if (lVar3 == 0) {
      if (local_530 < 8) goto LAB_18000159e;
      pvVar1 = (void *)CONCAT62(uStack_546,local_548);
      pvVar4 = pvVar1;
      if ((0xfff < local_530 * 2 + 2) &&
         (pvVar4 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8)))))
      {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      memset(local_228,0,0x208);
      wsprintfW(local_228,L"../multi/%s/language.ini",local_508);
      local_518 = 0;
      uStack_510 = 7;
      local_528 = 0;
      do {
        uVar5 = uVar5 + 1;
      } while (local_228[uVar5] != L'\0');
      FUN_180003050((longlong *)&local_528,local_228,uVar5);
      if (param_1 != (longlong *)&local_528) {
        FUN_180002f40(param_1);
        *param_1 = CONCAT62(uStack_526,local_528);
        param_1[1] = lStack_520;
        param_1[2] = local_518;
        param_1[3] = uStack_510;
        local_518 = 0;
        uStack_510 = 7;
        local_528 = 0;
      }
      if (7 < uStack_510) {
        pvVar1 = (void *)CONCAT62(uStack_526,local_528);
        pvVar4 = pvVar1;
        if ((0xfff < uStack_510 * 2 + 2) &&
           (pvVar4 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar4);
      }
      local_518 = 0;
      uStack_510 = 7;
      local_528 = 0;
      if (local_530 < 8) goto LAB_18000159e;
      pvVar1 = (void *)CONCAT62(uStack_546,local_548);
      pvVar4 = pvVar1;
      if ((0xfff < local_530 * 2 + 2) &&
         (pvVar4 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  free(pvVar4);
LAB_18000159e:
  local_538 = 0;
  local_530 = 7;
  local_548 = L'\0';
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_598);
  return;
}




/* public: unsigned long __cdecl CCallBackOperate::IncrementCurChildOperation(unsigned long) __ptr64
    */

ulong __thiscall CCallBackOperate::IncrementCurChildOperation(CCallBackOperate *this,ulong param_1)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x15e0  20  ?IncrementCurChildOperation@CCallBackOperate@@QEAAKK@Z */
  if (*(code **)this != (code *)0x0) {
    local_48 = 8;
    local_28 = 0;
    local_20 = 0;
    local_30 = (ulonglong)param_1;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* int __cdecl LoadOperationName(unsigned long,wchar_t * __ptr64 const,struct OC_INFO & __ptr64) */

int __cdecl LoadOperationName(ulong param_1,wchar_t *param_2,OC_INFO *param_3)

{
  WCHAR WVar1;
  void *pvVar2;
  int extraout_EAX;
  LPCWSTR pWVar3;
  WCHAR *pWVar4;
  void *_Memory;
  undefined1 auStackY_728 [32];
  WCHAR local_6f0;
  undefined6 uStack_6ee;
  undefined8 local_6e0;
  ulonglong uStack_6d8;
  WCHAR local_6c8 [200];
  WCHAR local_538 [640];
  ulonglong local_38;
  
                    /* 0x1640  21  ?LoadOperationName@@YAHKQEA_WAEAUOC_INFO@@@Z */
  local_38 = DAT_180009008 ^ (ulonglong)auStackY_728;
  FUN_180001230((longlong *)&local_6f0);
  if (param_1 < 0x2002) {
    if (param_1 == 0x2001) {
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"PREPARE_OP_NAME",L"Preparing Operation",param_2,200,pWVar3);
      goto LAB_180002a34;
    }
    switch(param_1) {
    case 0x1001:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CREATE_OP_NAME",L"Creating Partition",param_2,200,pWVar3);
      break;
    case 0x1002:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"FORMAT_OP_NAME",L"Formatting Partition",param_2,200,pWVar3);
      break;
    case 0x1003:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"ACTVIE_OP_NAME",L"Setting Active",param_2,200,pWVar3);
      break;
    case 0x1004:
    case 0x101f:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"MOVE_OP_NAME",L"Resizing/Moving Partition",param_2,200,pWVar3);
      break;
    case 0x1005:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"HIDE_OP_NAME",L"Hiding Partition",param_2,200,pWVar3);
      break;
    case 0x1006:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"DELETE_OP_NAME",L"Deleting Partition",param_2,200,pWVar3);
      break;
    case 0x1007:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"LABEL_OP_NAME",L"Setting Label",param_2,200,pWVar3);
      break;
    case 0x1008:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"LETTER_OP_NAME",L"Changing Drive Letter",param_2,200,pWVar3);
      break;
    case 0x1009:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"DELETEALL_OP_NAME",L"Deleting All Partitions",param_2,200,pWVar3);
      break;
    case 0x100a:
      if (*(int *)param_3 == -1) {
        pWVar3 = &local_6f0;
        if (7 < uStack_6d8) {
          pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
        }
        GetPrivateProfileStringW(L"EPMUIOper",L"COPY_OP_NAME",L"Clone Partition",param_2,200,pWVar3)
        ;
      }
      else {
        memset(local_6c8,0,400);
        pWVar3 = &local_6f0;
        if (7 < uStack_6d8) {
          pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
        }
        GetPrivateProfileStringW
                  (L"EPMUIOper",L"COPY_OP_NAME",L"Clone Partition",local_6c8,200,pWVar3);
        wsprintfW(local_538,L"%s %c",local_6c8,(ulonglong)(uint)(int)(char)*param_3);
        pWVar4 = local_538;
        do {
          WVar1 = *pWVar4;
          *(WCHAR *)((longlong)pWVar4 + ((longlong)param_2 - (longlong)local_538)) = WVar1;
          pWVar4 = pWVar4 + 1;
        } while (WVar1 != L'\0');
      }
      break;
    case 0x100b:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"DISKCOPY_OP_NAME",L"Clone Disk",param_2,200,pWVar3);
      break;
    default:
      goto switchD_1800016c7_caseD_100c;
    case 0x100d:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"COPYDISK_INITIAL_OP_NAME",L"Clone disk initialization",param_2,200,
                 pWVar3);
      break;
    case 0x100e:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"COPYDISK_FINAL_OP_NAME",L"Clone disk finalization",param_2,200,
                 pWVar3);
      break;
    case 0x100f:
    case 0x1031:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONVERT_OP_NAME",L"Convert Partition",param_2,200,pWVar3);
      break;
    case 0x1010:
      if (*(int *)param_3 == -1) {
        pWVar3 = &local_6f0;
        if (7 < uStack_6d8) {
          pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
        }
        GetPrivateProfileStringW
                  (L"EPMUIOper",L"COPYVOLUME_OP_NAME",L"Clone Volume",param_2,200,pWVar3);
      }
      else {
        memset(local_6c8,0,400);
        pWVar3 = &local_6f0;
        if (7 < uStack_6d8) {
          pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
        }
        GetPrivateProfileStringW
                  (L"EPMUIOper",L"COPYVOLUME_OP_NAME",L"Clone Volume",local_6c8,200,pWVar3);
        wsprintfW(local_538,L"%s %c",local_6c8,(ulonglong)(uint)(int)(char)*param_3);
        pWVar4 = local_538;
        do {
          WVar1 = *pWVar4;
          *(WCHAR *)((longlong)pWVar4 + ((longlong)param_2 - (longlong)local_538)) = WVar1;
          pWVar4 = pWVar4 + 1;
        } while (WVar1 != L'\0');
      }
      break;
    case 0x1011:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"ERASE_DISK_OP_NAME",L"Wiping Disk Data",param_2,200,pWVar3);
      break;
    case 0x1012:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"REBUILD_MBR_OP_NAME",L"Rebuild MBR",param_2,200,pWVar3);
      break;
    case 0x1013:
      goto switchD_1800016c7_caseD_1013;
    case 0x1014:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"INIT_TO_MBR_OP_NAME",L"Initialize To MBR Disk",param_2,200,pWVar3);
      break;
    case 0x1015:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"INIT_TO_GPT_OP_NAME",L"Initialize To GPT Disk",param_2,200,pWVar3);
      break;
    case 0x1017:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"PART_RECOVERY_OP_NAME",L"Recovery Paritions",param_2,200,pWVar3);
      break;
    case 0x1018:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONV_PRILOG_OP_NAME",L"Convert Primary To Logical Partition",param_2
                 ,200,pWVar3);
      break;
    case 0x1019:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONV_LOGPRI_OP_NAME",L"Convert Logical To Primary Partition",param_2
                 ,200,pWVar3);
      break;
    case 0x101a:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"ERASE_PART_OP_NAME",L"Wiping Partition Data",param_2,200,pWVar3);
      break;
    case 0x101c:
      goto switchD_1800016c7_caseD_101c;
    case 0x101d:
      goto switchD_1800016c7_caseD_101d;
    case 0x101e:
      goto switchD_1800016c7_caseD_101e;
    case 0x1021:
      goto switchD_1800016c7_caseD_1021;
    case 0x1022:
      goto switchD_1800016c7_caseD_1022;
    case 0x1023:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"PART_ALIGN_OP_NAME",L"Align the target Disk",param_2,200,pWVar3);
      break;
    case 0x1024:
      goto switchD_1800016c7_caseD_1024;
    case 0x1026:
      goto switchD_1800016c7_caseD_1026;
    case 0x1027:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"DELETE_VOLUME_NAME",L"Deleting volume",param_2,200,pWVar3);
      break;
    case 0x1028:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"DELETEALL_VOLUME_NAME",L"Deleting All volumes",param_2,200,pWVar3);
      break;
    case 0x102b:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"SMART_RM_OP_NAME",L"Smart Resize",param_2,200,pWVar3);
      break;
    case 0x102c:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"ALLOCATE_SPACE_OP_NAME",L"Allocate Space",param_2,200,pWVar3);
      break;
    case 0x102d:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"DISK_REPARTITION_OP_NAME",L"Quick Partition",param_2,200,pWVar3);
      break;
    case 0x102e:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SMART_CREATE_OP_NAME",L"Smart Create",param_2,200,pWVar3);
      break;
    case 0x102f:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"ADJUST_DISK_RM_OP_NAME",L"Adjust Disk Layout",param_2,200,pWVar3);
      break;
    case 0x1030:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SMART_DISK_RM_OP_NAME",L"Smart Space Adjustment",param_2,200,pWVar3)
      ;
      break;
    case 0x1032:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"BITLOCKER_TURNOFF_NAME",L"Turn offing Bitlocker volume",param_2,200,
                 pWVar3);
      break;
    case 0x1033:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CLUSTER_SIZE_CHANGE_NAME",L"Change Cluster Size",param_2,200,pWVar3)
      ;
    }
  }
  else {
    switch(param_1) {
    case 0x2002:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"ERASE_OP_NAME",L"Wiping Data",param_2,200,pWVar3);
      break;
    case 0x2003:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"LOCK_VOLUME_NAME",L"Locking Volume",param_2,200,pWVar3);
      break;
    case 0x2004:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"UNLOCK_VOLUME_NAME",L"Unlocking Volume",param_2,200,pWVar3);
      break;
    case 0x2005:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"UPDATE_SYSTEMINFO_NAME",L"Updating System Information",param_2,200,
                 pWVar3);
      break;
    case 0x2006:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SUB_FORMAT_OP_NAME",L"Formatting Partition",param_2,200,pWVar3);
      break;
    case 0x2007:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"INIT_RESIZE_MOVE_OP_NAME",L"Checking Partition",param_2,200,pWVar3);
      break;
    case 0x2008:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"MOVE_DATA_OP_NAME",L"Moving Data",param_2,200,pWVar3);
      break;
    case 0x2009:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"UPDATE_FILESYSTEM_INFO_OP_NAME",L"Writing Metadata",param_2,200,
                 pWVar3);
      break;
    case 0x200a:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CHECK_FILESYSTEM_OP_NAME",L"Checking Partition",param_2,200,pWVar3);
      break;
    case 0x200b:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SUB_RESIZE_OP_NAME",L"Resizing Partition",param_2,200,pWVar3);
      break;
    case 0x200c:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"COPY_PREPARE_SRC_OP_NAME",L"Checking Source Partition",param_2,200,
                 pWVar3);
      break;
    case 0x200d:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"COPY_PREPARE_TGT_OP_NAME",L"Checking Target Partition",param_2,200,
                 pWVar3);
      break;
    case 0x200e:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SUB_COPY_OP_NAME",L"Clone Source Partition",param_2,200,pWVar3);
      break;
    case 0x200f:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SUB_COMMIT_COPY_OP_NAME",L"Commit Clone to Target Partition",param_2
                 ,200,pWVar3);
      break;
    case 0x2010:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SUB_CNVFAT_OP_NAME",L"Convert Partition",param_2,200,pWVar3);
      break;
    default:
switchD_1800016c7_caseD_100c:
      break;
    case 0x2012:
switchD_1800016c7_caseD_1013:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONV_LDM_OP_NAME",L"Convert to basic disk",param_2,200,pWVar3);
      break;
    case 0x2015:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SUB_RECOVERY_PART_OP_NAME",L"Rebuild Partition Table",param_2,200,
                 pWVar3);
      break;
    case 0x2016:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CALC_SECTORS_2_MOVE_NAME",L"Calculating Sectors to move",param_2,200
                 ,pWVar3);
      break;
    case 0x2017:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"UPDATA_FILE_RECORED_NAME",L"Updataing file records",param_2,200,
                 pWVar3);
      break;
    case 0x2018:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"UPDATA_FAT_NAME",L"Updataing fat table",param_2,200,pWVar3);
      break;
    case 0x2019:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"DUMPLICATE_FAT_NAME",L"Dumplicating fat table",param_2,200,pWVar3);
      break;
    case 0x201a:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"MERGE_PARTITION_NAME",L"Merge Partition",param_2,200,pWVar3);
      break;
    case 0x201b:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"COPY_FILE_NAME",L"Move files",param_2,200,pWVar3);
      break;
    case 0x201c:
switchD_1800016c7_caseD_101c:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"RESIZE_LDM_VOLUME_NAME",L"Resize volume",param_2,200,pWVar3);
      break;
    case 0x201d:
switchD_1800016c7_caseD_101d:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"REPAIR_RAID5_NAME",L"Repaire RAID5",param_2,200,pWVar3);
      break;
    case 0x201e:
switchD_1800016c7_caseD_101e:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONVERT_2_LDM_NAME",L"Convert to Dynamic Disk",param_2,200,pWVar3);
      break;
    case 0x201f:
switchD_1800016c7_caseD_1022:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONVERT_GPT_2_MBR",L"Convert GPT to MBR",param_2,200,pWVar3);
      break;
    case 0x2020:
switchD_1800016c7_caseD_1021:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CONVERT_MBR_2_GPT",L"Convert MBR to GPT",param_2,200,pWVar3);
      break;
    case 0x2021:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"PARTITION_ALIGN",L"SSD 4K Align",param_2,200,pWVar3);
      break;
    case 0x2022:
switchD_1800016c7_caseD_1024:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"CREATE_VOLUME",L"Create volume",param_2,200,pWVar3);
      break;
    case 0x2023:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"REFRESH_VOLUME_AND_DISK",L"Refresh volume and disk",param_2,200,
                 pWVar3);
      break;
    case 0x2024:
switchD_1800016c7_caseD_1026:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"FORMAT_VOLUME",L"Formatting volume",param_2,200,pWVar3);
      break;
    case 0x2025:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"SET_DRIVER_LETTER",L"Set driver letter",param_2,200,pWVar3);
      break;
    case 0x2028:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"EXT_ANALYZE_SRC_NAME",L"Analyzing source volume",param_2,200,pWVar3)
      ;
      break;
    case 0x2029:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW(L"EPMUIOper",L"EXT_MOVEDATA_NAME",L"Moving data",param_2,200,pWVar3);
      break;
    case 0x2033:
      pWVar3 = &local_6f0;
      if (7 < uStack_6d8) {
        pWVar3 = (LPCWSTR)CONCAT62(uStack_6ee,local_6f0);
      }
      GetPrivateProfileStringW
                (L"EPMUIOper",L"CHANGE_CLUSTER_SIZE_NAME",L"Change Cluster Size",param_2,200,pWVar3)
      ;
    }
  }
LAB_180002a34:
  if (7 < uStack_6d8) {
    pvVar2 = (void *)CONCAT62(uStack_6ee,local_6f0);
    _Memory = pvVar2;
    if ((0xfff < uStack_6d8 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  local_6e0 = 0;
  uStack_6d8 = 7;
  local_6f0 = L'\0';
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_728);
  return extraout_EAX;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x2c50  22  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180002c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




/* public: unsigned long __cdecl CCallBackOperate::SetCurChildOperationValue(unsigned long) __ptr64
    */

ulong __thiscall CCallBackOperate::SetCurChildOperationValue(CCallBackOperate *this,ulong param_1)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x2c60  23  ?SetCurChildOperationValue@CCallBackOperate@@QEAAKK@Z */
  if (*(code **)this != (code *)0x0) {
    local_48 = 7;
    local_28 = 0;
    local_20 = 0;
    local_30 = (ulonglong)param_1;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::SetEnableUserCancel(int) __ptr64 */

ulong __thiscall CCallBackOperate::SetEnableUserCancel(CCallBackOperate *this,int param_1)

{
  ulong uVar1;
  int local_48 [18];
  
                    /* 0x2cc0  24  ?SetEnableUserCancel@CCallBackOperate@@QEAAKH@Z */
  if (*(code **)this != (code *)0x0) {
    local_48[2] = 1;
    local_48[3] = 0;
    local_48[1] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    local_48[8] = 0;
    local_48[9] = 0;
    local_48[10] = 0;
    local_48[0xb] = 0;
    local_48[0] = 0xd - (uint)(param_1 != 0);
    local_48[4] = 1;
    local_48[5] = 0;
    local_48[0xc] = 0xffffffff;
    uVar1 = (**(code **)this)(local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::SetLargeCounter(__int64) __ptr64 */

ulong __thiscall CCallBackOperate::SetLargeCounter(CCallBackOperate *this,__int64 param_1)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  __int64 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x2d20  25  ?SetLargeCounter@CCallBackOperate@@QEAAK_J@Z */
  if (*(code **)this != (code *)0x0) {
    local_48 = 0x10;
    local_28 = 0;
    local_20 = 0;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    local_30 = param_1;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::SetLargeCounterTotal(__int64) __ptr64 */

ulong __thiscall CCallBackOperate::SetLargeCounterTotal(CCallBackOperate *this,__int64 param_1)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  __int64 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x2d80  26  ?SetLargeCounterTotal@CCallBackOperate@@QEAAK_J@Z */
  if (*(code **)this != (code *)0x0) {
    local_48 = 0x11;
    local_28 = 0;
    local_20 = 0;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    local_30 = param_1;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::StartChildOperation(unsigned long,unsigned
   long,unsigned long) __ptr64 */

ulong __thiscall
CCallBackOperate::StartChildOperation
          (CCallBackOperate *this,ulong param_1,ulong param_2,ulong param_3)

{
  undefined4 local_48;
  ulong local_44;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x2de0  27  ?StartChildOperation@CCallBackOperate@@QEAAKKKK@Z */
  if (*(code **)this != (code *)0x0) {
    local_40 = 1;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_38 = (ulonglong)param_3;
    local_18 = 0xffffffff;
    local_48 = 5;
    local_44 = param_1;
    (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    local_48 = 6;
    local_30 = (ulonglong)param_2;
    (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::StartFileSystemOperation(unsigned long) __ptr64
    */

ulong __thiscall CCallBackOperate::StartFileSystemOperation(CCallBackOperate *this,ulong param_1)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x2e60  28  ?StartFileSystemOperation@CCallBackOperate@@QEAAKK@Z */
  if (*(code **)this != (code *)0x0) {
    local_48 = 3;
    local_28 = 0;
    local_20 = 0;
    local_30 = (ulonglong)param_1;
    local_40 = 1;
    local_38 = 1;
    local_18 = 0xffffffff;
    uVar1 = (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}




/* public: unsigned long __cdecl CCallBackOperate::StartOperation(unsigned long,unsigned long)
   __ptr64 */

ulong __thiscall
CCallBackOperate::StartOperation(CCallBackOperate *this,ulong param_1,ulong param_2)

{
  undefined4 local_48;
  ulong local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x2ec0  29  ?StartOperation@CCallBackOperate@@QEAAKKK@Z */
  if (*(code **)this != (code *)0x0) {
    local_40 = 1;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_38 = 1;
    local_48 = 0;
    local_18 = 0xffffffff;
    local_44 = param_1;
    (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
    local_48 = 1;
    local_30 = (ulonglong)param_2;
    (**(code **)this)(&local_48,*(undefined8 *)(this + 8));
  }
  return 0;
}




void FUN_180002f40(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}




void FUN_180002fb0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180002fd0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 2;
  if (param_2 < 0x8000000000000000) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        operator_new(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new(uVar3);
  if (pvVar2 != (void *)0x0) {
    *(void **)(((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0) - 8) = pvVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




longlong * FUN_180003050(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  void *_Dst;
  longlong *plVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong uVar7;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      FUN_180002fb0();
      pcVar4 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar4)();
      return plVar5;
    }
    uVar6 = param_3 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    _Dst = (void *)FUN_180002fd0(param_1,uVar7 + 1);
    param_1[3] = uVar7;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar2) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar5 = param_1;
    if (7 < uVar2) {
      plVar5 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar5,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar5) = 0;
  }
  return param_1;
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
    FUN_180003780();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_180003760();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4,(uint *)(lVar1 + 4));
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180009008) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180003274(undefined8 *param_1,ulonglong param_2)

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
    if (DAT_180009100 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180009100 = DAT_180009100 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_1800096a0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180003a74();
      FID_conflict__RTC_Initialize();
      DAT_1800096a0 = 0;
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
    if (DAT_1800096a0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_1800096a0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180003a64();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_1800051b0,&DAT_1800051b8);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_1800051a0,&DAT_1800051a8);
        DAT_1800096a0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180003e28();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180009100 = DAT_180009100 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180003560) */
/* WARNING: Removing unreachable block (ram,0x0001800034ef) */
/* WARNING: Removing unreachable block (ram,0x0001800035a3) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180009100 < 1)) {
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




undefined8 * FUN_180003610(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180003650(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180003670(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800036b0(undefined8 *param_1)

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




undefined8 * FUN_18000371c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180003760(void)

{
  undefined8 local_28 [5];
  
  FUN_180003650(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1800074a0);
}




void FUN_180003780(void)

{
  undefined8 local_28 [5];
  
  FUN_1800036b0(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180007528);
}




char * FUN_1800037a0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
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
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180003845. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180003876;
  capture_previous_context((PCONTEXT)&DAT_1800091b0);
  _DAT_180009120 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180009248 = puVar3 + 0x40;
  _DAT_180009230 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180009110 = 0xc0000409;
  _DAT_180009114 = 1;
  _DAT_180009128 = 1;
  DAT_180009130 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180009008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180009000;
  *(undefined8 *)(puVar3 + -8) = 0x180003918;
  DAT_1800092a8 = _DAT_180009120;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180006af0);
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




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_180009008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180009008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180009008 == 0x2b992ddfa232) {
      DAT_180009008 = 0x2b992ddfa233;
    }
  }
  DAT_180009000 = ~DAT_180009008;
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




void FUN_180003a64(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180003a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180009680);
  return;
}




void FUN_180003a74(void)

{
  __std_type_info_destroy_list(&DAT_180009680);
  return;
}




undefined * FUN_180003a80(void)

{
  return &DAT_180009690;
}




undefined * FUN_180003a88(void)

{
  return &DAT_180009698;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180003a80();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180003a88();
  *puVar1 = *puVar1 | 2;
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
LAB_180003ada:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1800096a8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1800096a8;
        pvVar1 = DAT_1800096a8;
      }
      DAT_1800096a8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180003ada;
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
    uVar3 = FUN_18000417c();
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
  
  uVar1 = FUN_180003c64(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180004214();
  if (cVar1 != '\0') {
    cVar1 = FUN_180004214();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180004214();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180004214();
  FUN_180004214();
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
    _execute_onexit_table(&DAT_1800096b8);
    return;
  }
  uVar2 = FUN_180004218();
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
  FUN_180004214();
  FUN_180004214();
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
    DAT_1800096b0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180004214();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180004214();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180004214();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180003c64(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_1800096b1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180009008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180009008;
      _DAT_1800096b8 = in_RAX;
      uRam00000001800096c0 = in_RAX;
      _DAT_1800096c8 = in_RAX;
      _DAT_1800096d0 = in_RAX;
      uRam00000001800096d8 = in_RAX;
      _DAT_1800096e0 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1800096b8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1800096d0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1800096b1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180003dca) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180003db3;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180003db3:
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
    DAT_1800096a8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1800096b0 == '\0') || (param_2 == '\0')) {
    FUN_180004214();
    FUN_180004214();
  }
  return 1;
}




undefined * FUN_180003e28(void)

{
  return &DAT_1800096f0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003e30(void)

{
  _DAT_1800096e8 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180003e6b;
  FUN_180003e30();
  *(undefined8 *)(puVar4 + -8) = 0x180003e7c;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180003e86;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180003ea0;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180003ee1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180003f13;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180003f35;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180003f56;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180003f61;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180003f71;
    FUN_180003e30();
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
  
  for (puVar1 = &DAT_1800071c0; puVar1 < &DAT_1800071c0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_1800071d0; puVar1 < &DAT_1800071d0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001800040ce) */
/* WARNING: Removing unreachable block (ram,0x00018000404c) */
/* WARNING: Removing unreachable block (ram,0x000180004027) */
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
  
  DAT_18000901c = 2;
  _DAT_180009018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180009020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1800096ec = DAT_1800096ec | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_1800096ec = DAT_1800096ec | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180009018 = 2;
    DAT_18000901c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000901c = 0xe;
      _DAT_180009018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180009018 = 5;
        DAT_18000901c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000417c(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180009030 != 0;
}




undefined1 FUN_180004214(void)

{
  return 1;
}




undefined8 FUN_180004218(void)

{
  return 0;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180004230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180004240(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180001020(*(longlong **)(param_2 + 0x48));
  }
  return;
}




void Unwind_180004270(undefined8 param_1,longlong param_2)

{
  FUN_180001020((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180004280(undefined8 param_1,longlong param_2)

{
  FUN_180001020((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180004290(undefined8 param_1,longlong param_2)

{
  FUN_180001020((longlong *)(param_2 + 0x38));
  return;
}




void FUN_1800042b3(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800042cf(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



