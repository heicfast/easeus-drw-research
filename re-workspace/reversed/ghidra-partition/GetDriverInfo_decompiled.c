
undefined * FUN_180001000(void)

{
  return &DAT_18000a938;
}




int FUN_180001010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180001000();
  local_14 = __stdio_common_vswprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_180001080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = FUN_180001010(param_1,param_2,param_3,0,&local_res20);
  return iVar1;
}




void FUN_1800010e0(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return;
}




undefined8 * FUN_180001100(undefined8 *param_1,uint param_2)

{
  FUN_1800010e0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong FUN_180001140(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
    lVar1 = param_1 + 0xb8;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}




void FUN_180001180(undefined8 *param_1)

{
  *param_1 = ICmdDispatch::vftable;
  FUN_1800010e0(param_1);
  return;
}




undefined8 * FUN_1800011b0(undefined8 *param_1,uint param_2)

{
  FUN_180001180(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800011f0(undefined8 *param_1)

{
  *param_1 = IGetDriverInfo::vftable;
  FUN_180001180(param_1);
  return;
}




undefined8 * FUN_180001220(undefined8 *param_1,uint param_2)

{
  FUN_1800011f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001260(undefined8 *param_1)

{
  *param_1 = ITbCreator::vftable;
  FUN_1800010e0(param_1);
  return;
}




undefined8 * FUN_180001290(undefined8 *param_1,uint param_2)

{
  FUN_180001260(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800012d0(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_158 [32];
  HMODULE local_138;
  FARPROC local_130;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_158;
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




undefined8 FUN_1800013d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_1800013e0(void)

{
  return 0x7fffffffffffffff;
}




void FUN_1800013f0(void)

{
  return;
}




void FUN_180001400(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_180001420(longlong *param_1,longlong *param_2)

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




CResetPropExchange * GetDriverInfoImp(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_20;
  
                    /* 0x14c0  2  GetDriverInfoImp */
  pCVar1 = (CResetPropExchange *)operator_new(0x50);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_20 = (CResetPropExchange *)0x0;
  }
  else {
    local_20 = FUN_180001780(pCVar1);
  }
  return local_20;
}




void DeleteGetDriverInfoImp(undefined8 *param_1)

{
                    /* 0x1520  1  DeleteGetDriverInfoImp */
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  return;
}




undefined4 GetDriverInfo_Init(longlong *param_1,undefined4 param_2)

{
  undefined4 local_18;
  
                    /* 0x1550  4  GetDriverInfo_Init */
  local_18 = 0x2402809;
  if (param_1 != (longlong *)0x0) {
    local_18 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  }
  return local_18;
}




undefined4 GetDriverInfo_GetDriverInfo(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  longlong *local_10;
  
                    /* 0x15a0  3  GetDriverInfo_GetDriverInfo */
  local_14 = 0x2e02809;
  if ((param_1 != (longlong *)0x0) && (param_3 != (undefined4 *)0x0)) {
    local_18 = *param_3;
    local_10 = param_1;
    local_14 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_18);
    *param_3 = local_18;
  }
  return local_14;
}




bool TBCanUnloadNow(void)

{
                    /* 0x1620  5  TBCanUnloadNow */
  return DAT_18000a948 == 0;
}




int TBCreateObject(uint param_1,int param_2,longlong *param_3)

{
  int local_18;
  
                    /* 0x1650  6  TBCreateObject */
  if (param_3 == (longlong *)0x0) {
    local_18 = 0x3f02809;
  }
  else {
    local_18 = 0;
    if (param_1 < 0x10001) {
      if (param_2 == 0x11800) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4) < DAT_18000a95c) &&
           (_Init_thread_header(&DAT_18000a95c), DAT_18000a95c == -1)) {
          FUN_180002ed0((undefined8 *)&DAT_18000a950,0x11800);
          atexit(FUN_180005d10);
          _Init_thread_footer(&DAT_18000a95c);
        }
        *param_3 = (longlong)&DAT_18000a950;
      }
      else {
        local_18 = 0x4102806;
      }
      if ((local_18 == 0) && (*param_3 == 0)) {
        local_18 = 0x4102808;
      }
      if (local_18 == 0) {
        LOCK();
        DAT_18000a948 = DAT_18000a948 + 1;
        UNLOCK();
      }
    }
    else {
      local_18 = 0x3f02802;
    }
  }
  return local_18;
}




void FUN_180001760(undefined8 *param_1)

{
  FUN_180002d70(param_1);
  return;
}




CResetPropExchange * FUN_180001780(CResetPropExchange *param_1)

{
  CResetPropExchange::CResetPropExchange(param_1);
  *(undefined ***)param_1 = CGetDriverInfo::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_180003300((undefined8 *)(param_1 + 0x38));
  FUN_1800030f0(param_1 + 0x38);
  return param_1;
}




CDBException * FUN_180001810(CDBException *param_1,uint param_2)

{
  CDBException::~CDBException(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl CDBException::~CDBException(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void __thiscall CDBException::~CDBException(CDBException *this)

{
  *(undefined ***)this = CGetDriverInfo::vftable;
  FUN_1800030f0(this + 0x38);
  FUN_1800032d0(this + 0x38);
  FUN_180002f10((undefined8 *)this);
  return;
}




undefined4 FUN_1800018a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_28;
  
  local_28 = 0;
  if (param_2 == 0) {
    local_28 = 0x5502809;
    plVar1 = (longlong *)FUN_1800037c0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x5502809,0x55);
    }
  }
  else {
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = param_3;
  }
  return local_28;
}




undefined4 FUN_180001960(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_38;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_180003890("Burn");
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = FUN_1800039a0("Boot");
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if ((*(longlong *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x30) == 0)) {
      local_38 = 0x670280a;
      plVar1 = (longlong *)FUN_1800037c0();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))
                  (plVar1,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x670280a,0x67);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 1;
      local_38 = 0;
    }
  }
  else {
    local_38 = 0x6302807;
    plVar1 = (longlong *)FUN_1800037c0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x6302807,99);
    }
  }
  return local_38;
}




undefined4 FUN_180001ac0(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    local_28 = 0x7602805;
    plVar1 = (longlong *)FUN_1800037c0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x7602805,0x76);
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(undefined8 *)(param_1 + 0x28));
      (**(code **)**(undefined8 **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(undefined8 *)(param_1 + 0x30));
      (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    local_28 = 0;
  }
  return local_28;
}




uint FUN_180001c00(longlong *param_1,longlong param_2,int param_3,longlong param_4,uint *param_5)

{
  uint local_c8;
  uint local_c4;
  uint *local_c0;
  int local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  uint *local_28;
  longlong local_20;
  longlong local_18;
  
  local_c8 = 0;
  if (param_2 == 0) {
    local_c8 = 0x9302809;
    local_b0 = (longlong *)FUN_1800037c0();
    if (local_b0 != (longlong *)0x0) {
      local_68 = *local_b0;
      (**(code **)(local_68 + 0x30))
                (local_b0,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x9302809,0x93);
    }
  }
  else if (param_3 == 0) {
    local_c8 = 0x9402809;
    local_a8 = (longlong *)FUN_1800037c0();
    if (local_a8 != (longlong *)0x0) {
      local_60 = *local_a8;
      (**(code **)(local_60 + 0x30))
                (local_a8,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x9402809,0x94);
    }
  }
  else if (param_4 == 0) {
    local_c8 = 0x9502809;
    local_a0 = (longlong *)FUN_1800037c0();
    if (local_a0 != (longlong *)0x0) {
      local_58 = *local_a0;
      (**(code **)(local_58 + 0x30))
                (local_a0,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x9502809,0x95);
    }
  }
  else if (*param_5 == 0) {
    local_c8 = 0x9602809;
    local_98 = (longlong *)FUN_1800037c0();
    if (local_98 != (longlong *)0x0) {
      local_50 = *local_98;
      (**(code **)(local_50 + 0x30))
                (local_98,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0x9602809,0x96);
    }
  }
  else {
    local_b8 = *(int *)(param_2 + 4);
    if (local_b8 == 0xd0090) {
      local_c4 = 0;
      FUN_1800030f0(param_1 + 7);
      local_c8 = (**(code **)(*param_1 + 0x28))(param_1,0);
      if ((local_c8 & 0xfff) == 0) {
        local_c8 = (**(code **)(*param_1 + 0x40))(param_1,0,&local_c4);
        if ((local_c8 & 0xfff) == 0) {
          local_c0 = (uint *)FUN_180001140(param_4);
          if (local_c0 == (uint *)0x0) {
            local_c8 = 0xb002809;
            local_80 = (longlong *)FUN_1800037c0();
            if (local_80 != (longlong *)0x0) {
              local_38 = *local_80;
              (**(code **)(local_38 + 0x30))
                        (local_80,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0xb002809,0xb0)
              ;
            }
          }
          else if ((ulonglong)*param_5 - 0xb8 < (ulonglong)local_c4 * 0x208) {
            local_c8 = 0xb102a6b;
            local_78 = (longlong *)FUN_1800037c0();
            if (local_78 != (longlong *)0x0) {
              local_30 = *local_78;
              (**(code **)(local_30 + 0x30))
                        (local_78,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0xb102a6b,0xb1)
              ;
            }
          }
          else {
            *local_c0 = local_c4;
            local_28 = local_c0 + 1;
            local_20 = *param_1;
            local_c8 = (**(code **)(local_20 + 0x40))(param_1,local_28,local_c0);
            if (((local_c8 & 0xfff) != 0) &&
               (local_70 = (longlong *)FUN_1800037c0(), local_70 != (longlong *)0x0)) {
              local_18 = *local_70;
              (**(code **)(local_18 + 0x30))
                        (local_70,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",local_c8,
                         local_c8 >> 0x14);
            }
          }
        }
        else {
          local_88 = (longlong *)FUN_1800037c0();
          if (local_88 != (longlong *)0x0) {
            local_40 = *local_88;
            (**(code **)(local_40 + 0x30))
                      (local_88,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",local_c8,
                       local_c8 >> 0x14);
          }
        }
      }
      else {
        local_90 = (longlong *)FUN_1800037c0();
        if (local_90 != (longlong *)0x0) {
          local_48 = *local_90;
          (**(code **)(local_48 + 0x30))
                    (local_90,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",local_c8,
                     local_c8 >> 0x14);
        }
      }
    }
  }
  if ((local_c8 & 0xfff) != 0x807) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  return local_c8;
}




undefined4 FUN_1800021d0(longlong param_1,longlong param_2,uint *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint local_28;
  undefined4 local_24;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    local_24 = 0xcc02805;
    plVar1 = (longlong *)FUN_1800037c0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d",0xcc02805,0xcc);
    }
  }
  else if (param_2 == 0) {
    FUN_180002370(param_1);
    FUN_1800028c0(param_1);
    lVar2 = FUN_1800030a0(param_1 + 0x38);
    *param_3 = (uint)lVar2;
  }
  else {
    for (local_28 = 0; local_28 < *param_3; local_28 = local_28 + 1) {
      puVar3 = (undefined4 *)FUN_180003050(param_1 + 0x38,(ulonglong)local_28);
      *(undefined4 *)(param_2 + (ulonglong)local_28 * 0x208) = *puVar3;
      lVar2 = FUN_180003050(param_1 + 0x38,(ulonglong)local_28);
      *(undefined1 *)(param_2 + 4 + (ulonglong)local_28 * 0x208) = *(undefined1 *)(lVar2 + 4);
      lVar2 = FUN_180003050(param_1 + 0x38,(ulonglong)local_28);
      wcscpy_s((wchar_t *)(param_2 + 8 + (ulonglong)local_28 * 0x208),0x100,(wchar_t *)(lVar2 + 8));
    }
  }
  return local_24;
}




void FUN_180002370(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  uint *puVar4;
  undefined1 auStack_548 [32];
  wchar_t *local_528;
  uint local_520;
  uint local_518;
  uint local_514;
  UINT local_510;
  int local_50c;
  int local_508;
  int local_504 [3];
  longlong *local_4f8;
  longlong *local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  longlong *local_4c8;
  longlong *local_4c0;
  longlong local_4b8;
  uint local_4a8;
  undefined1 local_4a4;
  wchar_t local_4a0 [260];
  wchar_t local_298 [32];
  undefined1 local_258 [64];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_18000a010 ^ (ulonglong)auStack_548;
  local_518 = 0;
  local_504[2] = GetLogicalDrives();
  local_510 = 0;
  pwVar3 = local_298;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_518 = 0xeb02805;
    local_4f8 = (longlong *)FUN_1800037c0();
    if (local_4f8 != (longlong *)0x0) {
      local_520 = local_518 >> 0x14;
      local_4b8 = *local_4f8;
      local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
      (**(code **)(local_4b8 + 0x30))(local_4f8,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
    }
  }
  else {
    for (local_514 = 0; local_514 < 0x1a; local_514 = local_514 + 1) {
      local_50c = 0;
      local_508 = 0;
      local_504[0] = 0;
      puVar2 = local_258;
      for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      pwVar3 = local_218;
      for (lVar1 = 0x200; lVar1 != 0; lVar1 = lVar1 + -1) {
        *(undefined1 *)pwVar3 = 0;
        pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
      }
      local_504[1] = 1;
      if ((local_504[2] & 1 << ((byte)local_514 & 0x1f)) == 0) {
        local_518 = 0xf602801;
        local_4f0 = (longlong *)FUN_1800037c0();
        if (local_4f0 != (longlong *)0x0) {
          local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
          (**(code **)(*local_4f0 + 0x30))
                    (local_4f0,1,0x2800,L"GetDriverInfo: Error = 0x%x, continue");
        }
      }
      else {
        FUN_180001080(local_298,0x20,&DAT_1800065b8,(ulonglong)(local_514 + 0x41));
        FUN_180003ab0(local_298,L":\\");
        local_4e8 = (longlong *)FUN_1800037c0();
        if (local_4e8 != (longlong *)0x0) {
          local_528 = local_298;
          (**(code **)(*local_4e8 + 0x30))(local_4e8,1,0x2800,L"GetDriverInfo nDriver : %s");
        }
        local_510 = GetDriveTypeW(local_298);
        if (local_510 == 5) {
          local_518 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                                (*(undefined8 *)(param_1 + 0x28),local_514);
          if ((local_518 & 0xfff) == 0) {
            local_518 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
                                  (*(undefined8 *)(param_1 + 0x28),&local_50c,&local_508,local_504);
            if ((local_518 & 0xfff) == 0) {
              if (((local_50c == 0) && (local_508 == 0)) && (local_504[0] == 0)) {
                local_518 = 0x10502850;
                local_4c8 = (longlong *)FUN_1800037c0();
                if (local_4c8 != (longlong *)0x0) {
                  local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
                  (**(code **)(*local_4c8 + 0x30))
                            (local_4c8,1,0x2800,L"GetDriverInfo: Error = 0x%x, continue");
                }
              }
              else {
                local_528 = (wchar_t *)CONCAT44(local_528._4_4_,0x20);
                local_518 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
                                      (*(undefined8 *)(param_1 + 0x28),local_258,0x20,local_218);
                if ((local_518 & 0xfff) == 0) {
                  puVar4 = &local_4a8;
                  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
                    *(undefined1 *)puVar4 = 0;
                    puVar4 = (uint *)((longlong)puVar4 + 1);
                  }
                  local_4a8 = local_514;
                  local_4a4 = 0x20;
                  wcscpy_s(local_4a0,0x100,local_218);
                  FUN_180003170(param_1 + 0x38,&local_4a8);
                }
                else {
                  local_4c0 = (longlong *)FUN_1800037c0();
                  if (local_4c0 != (longlong *)0x0) {
                    local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
                    (**(code **)(*local_4c0 + 0x30))
                              (local_4c0,1,0x2800,L"GetDriverInfo: Error = 0x%x, continue");
                  }
                }
              }
            }
            else {
              local_4d0 = (longlong *)FUN_1800037c0();
              if (local_4d0 != (longlong *)0x0) {
                local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
                (**(code **)(*local_4d0 + 0x30))
                          (local_4d0,1,0x2800,L"GetDriverInfo: Error = 0x%x, continue");
              }
            }
          }
          else {
            local_4d8 = (longlong *)FUN_1800037c0();
            if (local_4d8 != (longlong *)0x0) {
              local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
              (**(code **)(*local_4d8 + 0x30))
                        (local_4d8,1,0x2800,L"GetDriverInfo: Error = 0x%x, continue");
            }
          }
        }
        else {
          local_518 = 0xfe0284a;
          local_4e0 = (longlong *)FUN_1800037c0();
          if (local_4e0 != (longlong *)0x0) {
            local_528 = (wchar_t *)CONCAT44(local_528._4_4_,local_518);
            (**(code **)(*local_4e0 + 0x30))
                      (local_4e0,1,0x2800,L"GetDriverInfo: Error = 0x%x, continue");
          }
        }
      }
    }
    local_518 = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_548);
  return;
}




void FUN_1800028c0(longlong param_1)

{
  undefined1 auVar1 [16];
  __uint64 _Var2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_2f8 [32];
  uint local_2d8;
  uint local_2d0;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  void *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  ulonglong local_260;
  void *local_258;
  longlong local_250;
  longlong local_248;
  void *local_240;
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_28 = DAT_18000a010 ^ (ulonglong)auStack_2f8;
  local_2c8 = 0;
  local_2b8 = (void *)0x0;
  local_2c4 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_2c8 = 0x12202805;
    local_2b0 = (longlong *)FUN_1800037c0();
    if (local_2b0 != (longlong *)0x0) {
      local_2d0 = local_2c8 >> 0x14;
      local_280 = *local_2b0;
      local_2d8 = local_2c8;
      (**(code **)(local_280 + 0x30))(local_2b0,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
    }
  }
  else {
    local_2c8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                          (*(undefined8 *)(param_1 + 0x30),1,0,0);
    if ((local_2c8 & 0xfff) == 0) {
      local_2c8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x68))
                            (*(undefined8 *)(param_1 + 0x30),0,&local_2c4);
      if ((local_2c8 & 0xfff) == 0) {
        if (local_2c4 == 0) {
          local_2c8 = 0;
          local_298 = (longlong *)FUN_1800037c0();
          if (local_298 != (longlong *)0x0) {
            local_2d0 = local_2c8 >> 0x14;
            local_268 = *local_298;
            local_2d8 = local_2c8;
            (**(code **)(local_268 + 0x30))
                      (local_298,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
          }
        }
        else {
          local_260 = CONCAT44(0,local_2c4);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_260;
          _Var2 = SUB168(ZEXT816(0x208) * auVar1,0);
          if (SUB168(ZEXT816(0x208) * auVar1,8) != 0) {
            _Var2 = 0xffffffffffffffff;
          }
          local_2b8 = operator_new(_Var2);
          local_258 = local_2b8;
          if (local_2b8 == (void *)0x0) {
            local_2c8 = 0x12c02808;
            local_290 = (longlong *)FUN_1800037c0();
            if (local_290 != (longlong *)0x0) {
              local_2d0 = local_2c8 >> 0x14;
              local_250 = *local_290;
              local_2d8 = local_2c8;
              (**(code **)(local_250 + 0x30))
                        (local_290,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
            }
          }
          else {
            local_2c8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x68))
                                  (*(undefined8 *)(param_1 + 0x30),local_2b8,&local_2c4);
            if ((local_2c8 & 0xfff) == 0) {
              for (local_2c0 = 0; local_2c0 < local_2c4; local_2c0 = local_2c0 + 1) {
                puVar4 = local_238;
                for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar4 = 0;
                  puVar4 = puVar4 + 1;
                }
                puVar4 = (undefined1 *)((longlong)local_2b8 + (ulonglong)local_2c0 * 0x208);
                puVar5 = local_238;
                for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *puVar5 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar5 = puVar5 + 1;
                }
                FUN_180003170(param_1 + 0x38,local_238);
              }
              local_2c8 = 0;
            }
            else {
              local_288 = (longlong *)FUN_1800037c0();
              if (local_288 != (longlong *)0x0) {
                local_2d0 = local_2c8 >> 0x14;
                local_248 = *local_288;
                local_2d8 = local_2c8;
                (**(code **)(local_248 + 0x30))
                          (local_288,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
              }
            }
          }
        }
      }
      else {
        local_2a0 = (longlong *)FUN_1800037c0();
        if (local_2a0 != (longlong *)0x0) {
          local_2d0 = local_2c8 >> 0x14;
          local_270 = *local_2a0;
          local_2d8 = local_2c8;
          (**(code **)(local_270 + 0x30))
                    (local_2a0,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
        }
      }
    }
    else {
      local_2a8 = (longlong *)FUN_1800037c0();
      if (local_2a8 != (longlong *)0x0) {
        local_2d0 = local_2c8 >> 0x14;
        local_278 = *local_2a8;
        local_2d8 = local_2c8;
        (**(code **)(local_278 + 0x30))
                  (local_2a8,1,0x2800,L"GetDriverInfo: Error = 0x%x, Line = %d");
      }
    }
  }
  if (local_2b8 != (void *)0x0) {
    local_240 = local_2b8;
    free(local_2b8);
    local_2b8 = (void *)0x0;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_2f8);
  return;
}




void FUN_180002d70(undefined8 *param_1)

{
  *param_1 = CTbBaseCreator<class_IGetDriverInfo>::vftable;
  FUN_180001260(param_1);
  return;
}




undefined8 FUN_180002da0(void)

{
  return 0;
}




undefined4 FUN_180002db0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




CResetPropExchange * FUN_180002dc0(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_38;
  
  pCVar1 = (CResetPropExchange *)operator_new(0x50);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_38 = (CResetPropExchange *)0x0;
  }
  else {
    local_38 = FUN_180001780(pCVar1);
  }
  if (local_38 != (CResetPropExchange *)0x0) {
    LOCK();
    DAT_18000a948 = DAT_18000a948 + 1;
    UNLOCK();
  }
  return local_38;
}




undefined8 FUN_180002e60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x430280a;
  }
  else {
    uVar1 = 0x4402806;
  }
  return uVar1;
}




undefined8 FUN_180002e90(void)

{
  LOCK();
  DAT_18000a948 = DAT_18000a948 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180002eb0(void)

{
  LOCK();
  DAT_18000a948 = DAT_18000a948 + -1;
  UNLOCK();
  return 0;
}




undefined8 * FUN_180002ed0(undefined8 *param_1,undefined4 param_2)

{
  FUN_1800033b0(param_1);
  *param_1 = CTbCreator<class_IGetDriverInfo,class_CGetDriverInfo>::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  return param_1;
}




void FUN_180002f10(undefined8 *param_1)

{
  *param_1 = CInterfaceImpl<class_IGetDriverInfo>::vftable;
  FUN_1800011f0(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl CResetPropExchange::CResetPropExchange(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CResetPropExchange * __thiscall CResetPropExchange::CResetPropExchange(CResetPropExchange *this)

{
  FUN_180003420((undefined8 *)this);
  *(undefined ***)this = CInterfaceImpl<class_IGetDriverInfo>::vftable;
  *(undefined4 *)(this + 8) = 1;
  return this;
}




undefined8 FUN_180002f80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x2d0280a;
  }
  else {
    uVar1 = 0x2f02806;
  }
  return uVar1;
}




undefined8 FUN_180002fb0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  DAT_18000a948 = DAT_18000a948 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180002fd0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  LOCK();
  DAT_18000a948 = DAT_18000a948 + -1;
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




longlong FUN_180003050(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_1800030a0(param_1);
  if (uVar1 <= param_2) {
    FUN_180003590();
  }
  plVar2 = (longlong *)FUN_1800034f0(param_1);
  return param_2 * 0x208 + *plVar2;
}




longlong FUN_1800030a0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1800034d0(param_1);
  plVar2 = (longlong *)FUN_1800034f0(param_1);
  return (*plVar1 - *plVar2) / 0x208;
}




void FUN_1800030f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_180003530(param_1);
  FUN_1800034d0(param_1);
  FUN_1800034f0(param_1);
  FUN_180003680(param_1);
  puVar1 = (undefined8 *)FUN_1800034f0(param_1);
  puVar2 = (undefined8 *)FUN_1800034d0(param_1);
  *puVar2 = *puVar1;
  return;
}




void FUN_180003170(undefined8 param_1,undefined8 param_2)

{
  FUN_1800031a0(param_1,param_2);
  return;
}




void FUN_1800031a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_1800036c0(param_1);
  if (bVar1) {
    uVar2 = FUN_180003710(param_2);
    FUN_180003210(param_1,uVar2);
  }
  else {
    uVar2 = FUN_180003710(param_2);
    plVar3 = (longlong *)FUN_1800034d0(param_1);
    FUN_180003b30(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_180003210(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_180003710(param_2);
  puVar2 = (undefined8 *)FUN_1800034d0(param_1);
  p_Var3 = (_Container_proxy *)FUN_180003710(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_180003510(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_1800034d0(param_1);
  FUN_1800034d0(param_1);
  FUN_180003580();
  FUN_1800034d0(param_1);
  plVar5 = (longlong *)FUN_1800034d0(param_1);
  *plVar5 = *plVar5 + 0x208;
  return;
}




void FUN_1800032d0(undefined8 param_1)

{
  FUN_1800035b0(param_1);
  return;
}




undefined8 * FUN_180003300(undefined8 *param_1)

{
  FUN_180003550(param_1);
  return param_1;
}




undefined8 * FUN_180003330(undefined8 *param_1,uint param_2)

{
  FUN_180002d70(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003370(undefined8 *param_1,uint param_2)

{
  FUN_180001760(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800033b0(undefined8 *param_1)

{
  FUN_180003450(param_1);
  *param_1 = CTbBaseCreator<class_IGetDriverInfo>::vftable;
  return param_1;
}




undefined8 * FUN_1800033e0(undefined8 *param_1,uint param_2)

{
  FUN_180002f10(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003420(undefined8 *param_1)

{
  FUN_180003480(param_1);
  *param_1 = IGetDriverInfo::vftable;
  return param_1;
}




undefined8 * FUN_180003450(undefined8 *param_1)

{
  FUN_1800034b0(param_1);
  *param_1 = ITbCreator::vftable;
  return param_1;
}




undefined8 * FUN_180003480(undefined8 *param_1)

{
  FUN_1800034b0(param_1);
  *param_1 = ICmdDispatch::vftable;
  return param_1;
}




undefined8 * FUN_1800034b0(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return param_1;
}




longlong FUN_1800034d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180003510(param_1);
  return lVar1 + 8;
}




void FUN_1800034f0(undefined8 param_1)

{
  FUN_180003510(param_1);
  return;
}




void FUN_180003510(undefined8 param_1)

{
  FUN_180003710(param_1);
  return;
}




void FUN_180003530(undefined8 param_1)

{
  FUN_180003510(param_1);
  FUN_1800013f0();
  return;
}




undefined8 * FUN_180003550(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




void FUN_180003580(void)

{
  return;
}




void FUN_180003590(void)

{
  std::_Xout_of_range("invalid vector<T> subscript");
  return;
}




void FUN_1800035b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003530(param_1);
  plVar1 = (longlong *)FUN_1800034f0(param_1);
  if (*plVar1 != 0) {
    FUN_1800034d0(param_1);
    FUN_1800034f0(param_1);
    FUN_180003680(param_1);
    lVar2 = FUN_180003740(param_1);
    puVar3 = (undefined8 *)FUN_1800034f0(param_1);
    uVar4 = FUN_180003510(param_1);
    FUN_180003790(uVar4,(void *)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_1800034f0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_1800034d0(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_180003720(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_180003680(undefined8 param_1)

{
  FUN_180003510(param_1);
  FUN_180003dd0();
  return;
}




bool FUN_1800036c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003720(param_1);
  plVar2 = (longlong *)FUN_1800034d0(param_1);
  return *plVar1 != *plVar2;
}




undefined8 FUN_180003710(undefined8 param_1)

{
  return param_1;
}




longlong FUN_180003720(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180003510(param_1);
  return lVar1 + 0x10;
}




longlong FUN_180003740(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180003720(param_1);
  plVar2 = (longlong *)FUN_1800034f0(param_1);
  return (*plVar1 - *plVar2) / 0x208;
}




void FUN_180003790(undefined8 param_1,void *param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x208);
  return;
}




longlong FUN_1800037c0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *local_18 [3];
  
  lVar3 = DAT_18000a940;
  if (DAT_18000a940 == 0) {
    local_18[0] = (undefined8 *)0x0;
    iVar1 = FUN_180004190("CodeLog",0x1800,local_18);
    if (iVar1 == 0) {
      plVar2 = (longlong *)
               __RTDynamicCast(local_18[0],0,&ITbCreator::RTTI_Type_Descriptor,
                               &CTbBaseCreator<class_ILog>::RTTI_Type_Descriptor,0);
      if ((plVar2 != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x1800)) {
        DAT_18000a940 = (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      (**(code **)*local_18[0])(local_18[0]);
      lVar3 = DAT_18000a940;
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}




undefined8 FUN_180003890(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = FUN_180004250(param_1,0x4c00,&local_28);
  if (iVar1 == 0) {
    plVar2 = (longlong *)
             __RTDynamicCast(local_28,0,&ITbCreator::RTTI_Type_Descriptor,
                             &CTbBaseCreator<class_IBurn>::RTTI_Type_Descriptor,0);
    if ((plVar2 != (longlong *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x4c00)) {
      local_18 = (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)*local_28)(local_28);
  }
  else {
    local_20 = (longlong *)FUN_1800037c0();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x2800,L"Failed to Load lib (Err=0x%x) %S",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




undefined8 FUN_1800039a0(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = FUN_180004310(param_1,0x12400,&local_28);
  if (iVar1 == 0) {
    plVar2 = (longlong *)
             __RTDynamicCast(local_28,0,&ITbCreator::RTTI_Type_Descriptor,
                             &CTbBaseCreator<class_IBoot>::RTTI_Type_Descriptor,0);
    if ((plVar2 != (longlong *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x12400)) {
      local_18 = (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)*local_28)(local_28);
  }
  else {
    local_20 = (longlong *)FUN_1800037c0();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x2800,L"Failed to Load lib (Err=0x%x) %S",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




void FUN_180003ab0(wchar_t *param_1,wchar_t *param_2)

{
  wcscat_s(param_1,0x20,param_2);
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
  
  puVar1 = (undefined1 *)FUN_1800013d0(0x208,param_2);
  puVar2 = (undefined1 *)FUN_180003710(param_3);
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




longlong FUN_180003b30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *paVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  longlong lVar7;
  _Container_proxy *p_Var8;
  _Container_proxy *p_Var9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  plVar1 = (longlong *)FUN_1800034f0(param_1);
  lVar2 = (param_2 - *plVar1) / 0x208;
  paVar3 = (allocator<struct_std::_Container_proxy> *)FUN_180003510(param_1);
  _Var4 = FUN_1800030a0(param_1);
  _Var5 = FUN_180004100(param_1);
  if (_Var4 == _Var5) {
    FUN_180003ea0();
  }
  uVar6 = FUN_180003fd0(param_1,_Var4 + 1);
  lVar7 = allocate(paVar3,uVar6);
  p_Var8 = (_Container_proxy *)FUN_180003710(lVar7 + lVar2 * 0x208);
  p_Var9 = (_Container_proxy *)FUN_180003710(param_3);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar3,p_Var8,p_Var9);
  plVar1 = (longlong *)FUN_1800034d0(param_1);
  if (param_2 == *plVar1) {
    puVar10 = (undefined8 *)FUN_1800034d0(param_1);
    puVar11 = (undefined8 *)FUN_1800034f0(param_1);
    FUN_180004060(param_1,*puVar11,*puVar10,lVar7);
  }
  else {
    puVar10 = (undefined8 *)FUN_1800034f0(param_1);
    FUN_1800040c0(param_1,*puVar10,param_2,lVar7);
    puVar10 = (undefined8 *)FUN_1800034d0(param_1);
    FUN_1800040c0(param_1,param_2,*puVar10,lVar7 + 0x208 + lVar2 * 0x208);
  }
  FUN_180003ec0(param_1,lVar7,_Var4 + 1,uVar6);
  plVar1 = (longlong *)FUN_1800034f0(param_1);
  return lVar2 * 0x208 + *plVar1;
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
  FUN_180003710(param_1);
  FUN_180003e60(param_1);
  return param_1;
}




void FUN_180003dd0(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1800043d0();
  return;
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
    FUN_180001420((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
}




undefined8 * FUN_180003e60(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_180003ea0(void)

{
  std::_Xlength_error("vector<T> too long");
  return;
}




void FUN_180003ec0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_180003530(param_1);
  plVar1 = (longlong *)FUN_1800034f0(param_1);
  if (*plVar1 != 0) {
    FUN_1800034d0(param_1);
    FUN_1800034f0(param_1);
    FUN_180003680(param_1);
    lVar2 = FUN_180003740(param_1);
    puVar3 = (undefined8 *)FUN_1800034f0(param_1);
    uVar4 = FUN_180003510(param_1);
    FUN_180003790(uVar4,(void *)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_1800034f0(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_1800034d0(param_1);
  *plVar1 = param_2 + param_3 * 0x208;
  plVar1 = (longlong *)FUN_180003720(param_1);
  *plVar1 = param_2 + param_4 * 0x208;
  return;
}




ulonglong FUN_180003fd0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_180003740(param_1);
  _Var2 = FUN_180004100(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_180004060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_1800040c0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1800040c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180003510(param_1);
  FUN_1800043f0(param_2,param_3,param_4,uVar1);
  return;
}




__uint64 FUN_180004100(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_180003510(param_1);
  local_18 = FUN_180004180();
  local_10[0] = FUN_1800013e0();
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
  
  _Var1 = FUN_180004520(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




undefined8 FUN_180004180(void)

{
  return 0x7e07e07e07e07e;
}




undefined4 FUN_180004190(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000a988) {
    _Init_thread_header(&DAT_18000a988);
    if (DAT_18000a988 == -1) {
      DAT_18000a980 = (code *)FUN_1800012d0(param_1,&local_20);
      _Init_thread_footer(&DAT_18000a988);
    }
  }
  if (DAT_18000a980 == (code *)0x0) {
    uVar1 = 0x12402802;
  }
  else {
    uVar1 = (*DAT_18000a980)(0x10000,param_2,param_3);
  }
  return uVar1;
}




undefined4 FUN_180004250(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000a960) {
    _Init_thread_header(&DAT_18000a960);
    if (DAT_18000a960 == -1) {
      DAT_18000a970 = (code *)FUN_1800012d0(param_1,&local_20);
      _Init_thread_footer(&DAT_18000a960);
    }
  }
  if (DAT_18000a970 == (code *)0x0) {
    uVar1 = 0x12402802;
  }
  else {
    uVar1 = (*DAT_18000a970)(0x10000,param_2,param_3);
  }
  return uVar1;
}




undefined4 FUN_180004310(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18000a978) {
    _Init_thread_header(&DAT_18000a978);
    if (DAT_18000a978 == -1) {
      DAT_18000a968 = (code *)FUN_1800012d0(param_1,&local_20);
      _Init_thread_footer(&DAT_18000a978);
    }
  }
  if (DAT_18000a968 == (code *)0x0) {
    uVar1 = 0x12402802;
  }
  else {
    uVar1 = (*DAT_18000a968)(0x10000,param_2,param_3);
  }
  return uVar1;
}




void FUN_1800043d0(void)

{
  return;
}




undefined8
FUN_1800043f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  void *local_20;
  void *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (void *)FUN_180003710(param_1);
  local_10[0] = FUN_180003710(param_2);
  FUN_1800044a0((longlong *)&local_20,local_10);
  local_18 = (void *)FUN_1800045e0(local_res18);
  FUN_1800045f0(local_28);
  uVar1 = FUN_180004610(local_20,local_10[0],local_18);
  FUN_180004650(&local_res18,uVar1);
  return local_res18;
}




void FUN_1800044a0(longlong *param_1,longlong *param_2)

{
  FUN_1800045b0(param_1,param_2);
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




longlong FUN_180004520(ulonglong param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x208;
  if (0x7e07e07e07e07e < param_1) {
    local_18 = -1;
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
      pvVar1 = (void *)FUN_180001400(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_180004670(param_1);
  }
  return pvVar1;
}




longlong FUN_1800045b0(longlong *param_1,longlong *param_2)

{
  return (*param_2 - *param_1) / 0x208;
}




undefined8 FUN_1800045e0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_1800045f0(undefined8 param_1)

{
  return param_1;
}




void FUN_180004610(void *param_1,longlong param_2,void *param_3)

{
  FUN_180004700(param_1,param_2,param_3);
  return;
}




void FUN_180004650(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




ulonglong FUN_180004670(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_180001400(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




longlong FUN_180004700(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18000a010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_1800047ac(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18000a300,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_1800048fe;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18000a330 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18000a330 != (HANDLE)0x0) goto LAB_18000489c;
  }
  else {
    DAT_18000a330 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18000a328);
    bVar7 = 0x40 - ((byte)DAT_18000a010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18000a338 = DAT_18000a010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18000a340 = DAT_18000a010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18000489c:
    uVar6 = FUN_180004ce8(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18000490c);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_1800048fe:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_18000490c(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
  if (DAT_18000a330 != (HANDLE)0x0) {
    CloseHandle(DAT_18000a330);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000a000 = DAT_18000a000 + 1;
  *param_1 = DAT_18000a000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000a000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180004a18:
                    /* WARNING: Could not recover jumptable at 0x000180004a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000a000;
      goto LAB_180004a18;
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
  
  if (DAT_18000a330 != (HANDLE)0x0) {
    SetEvent(DAT_18000a330);
                    /* WARNING: Could not recover jumptable at 0x000180004a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18000a330);
    return;
  }
  bVar1 = (byte)DAT_18000a010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180005b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000a010 ^ _DAT_18000a340) >> bVar1 |
            (DAT_18000a010 ^ _DAT_18000a340) << 0x40 - bVar1))(&DAT_18000a328);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18000a330 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
    WaitForSingleObjectEx(DAT_18000a330,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180004aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000a300);
    return;
  }
  bVar1 = (byte)DAT_18000a010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180005b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000a010 ^ _DAT_18000a338) >> bVar1 |
            (DAT_18000a010 ^ _DAT_18000a338) << 0x40 - bVar1))
            (&DAT_18000a328,&DAT_18000a300,param_1);
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
    FUN_180005704();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800056e4();
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
LAB_180004b5e:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000a350 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000a350;
        pvVar1 = DAT_18000a350;
      }
      DAT_18000a350 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180004b5e;
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
    uVar3 = FUN_1800058b4();
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
  
  uVar1 = FUN_180004ce8(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180005aec();
  if (cVar1 != '\0') {
    cVar1 = FUN_180005aec();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180005aec();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180005aec();
  FUN_180005aec();
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
    _execute_onexit_table(&DAT_18000a360);
    return;
  }
  uVar2 = FUN_180005af0();
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
  FUN_180005aec();
  FUN_180005aec();
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
    DAT_18000a358 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180005aec();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180005aec();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180005aec();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180004ce8(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000a359 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000a010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000a010;
      _DAT_18000a360 = in_RAX;
      uRam000000018000a368 = in_RAX;
      _DAT_18000a370 = in_RAX;
      _DAT_18000a378 = in_RAX;
      uRam000000018000a380 = in_RAX;
      _DAT_18000a388 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000a360);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000a378), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000a359 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180004e4e) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_180004e37;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180004e37:
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
    DAT_18000a350 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000a358 == '\0') || (param_2 == '\0')) {
    FUN_180005aec();
    FUN_180005aec();
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
  
  bVar2 = (byte)DAT_18000a010 & 0x3f;
  if (((DAT_18000a010 ^ _DAT_18000a360) >> bVar2 | (DAT_18000a010 ^ _DAT_18000a360) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000a360,_Func);
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




undefined8 * FUN_180004f1c(undefined8 *param_1,ulonglong param_2)

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
    if (DAT_18000a390 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000a390 = DAT_18000a390 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000a348 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_1800059a8();
      FID_conflict__RTC_Initialize();
      DAT_18000a348 = 0;
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
    if (DAT_18000a348 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000a348 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180005998();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180006248,&DAT_180006258);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180006238,&DAT_180006240);
        DAT_18000a348 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_1800059d8();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000a390 = DAT_18000a390 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180005208) */
/* WARNING: Removing unreachable block (ram,0x000180005197) */
/* WARNING: Removing unreachable block (ram,0x00018000524b) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000a390 < 1)) {
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




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001800052e5. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180005316;
  capture_previous_context((PCONTEXT)&DAT_18000a440);
  _DAT_18000a3b0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000a4d8 = puVar3 + 0x40;
  _DAT_18000a4c0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000a3a0 = 0xc0000409;
  _DAT_18000a3a4 = 1;
  _DAT_18000a3b8 = 1;
  DAT_18000a3c0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000a010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000a008;
  *(undefined8 *)(puVar3 + -8) = 0x1800053b8;
  DAT_18000a538 = _DAT_18000a3b0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800063a0);
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000543c(void)

{
  _DAT_18000a910 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180005477;
  FUN_18000543c();
  *(undefined8 *)(puVar4 + -8) = 0x180005488;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180005492;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1800054ac;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1800054ed;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000551f;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180005541;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180005562;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000556d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000557d;
    FUN_18000543c();
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




undefined8 * FUN_180005594(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800055d4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800055f4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180005634(undefined8 *param_1)

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




undefined8 * FUN_1800056a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800056e4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800055d4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180008a30);
}




void FUN_180005704(void)

{
  undefined8 local_28 [5];
  
  FUN_180005634(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180008ab8);
}




char * FUN_180005724(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x000180005806) */
/* WARNING: Removing unreachable block (ram,0x000180005784) */
/* WARNING: Removing unreachable block (ram,0x00018000575f) */
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
  
  DAT_18000a01c = 2;
  _DAT_18000a018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000a020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000a918 = DAT_18000a918 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000a918 = DAT_18000a918 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000a018 = 2;
    DAT_18000a01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000a01c = 0xe;
      _DAT_18000a018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000a018 = 5;
        DAT_18000a01c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_1800058b4(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000a030 != 0;
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
  
  if (DAT_18000a010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000a010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000a010 == 0x2b992ddfa232) {
      DAT_18000a010 = 0x2b992ddfa233;
    }
  }
  DAT_18000a008 = ~DAT_18000a010;
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




void FUN_180005998(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000599f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000a920);
  return;
}




void FUN_1800059a8(void)

{
  __std_type_info_destroy_list(&DAT_18000a920);
  return;
}




undefined * FUN_1800059b4(void)

{
  return &DAT_18000a930;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001000();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_1800059b4();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_1800059d8(void)

{
  return &DAT_18000a990;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180008530; puVar1 < &DAT_180008530; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180008540; puVar1 < &DAT_180008540; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180005aec(void)

{
  return 1;
}




undefined8 FUN_180005af0(void)

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
  
                    /* WARNING: Could not recover jumptable at 0x000180005b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180005ba0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




undefined8 Catch_All_180005bbd(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0x180002e48;
}




void Catch_All_180005be0(undefined8 param_1,longlong param_2)

{
  FUN_180003680(*(undefined8 *)(param_2 + 0xa0));
  FUN_180003790(*(undefined8 *)(param_2 + 0x38),*(void **)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180005c30(void)

{
  _Init_thread_abort(&DAT_18000a988);
  return;
}




void Unwind_180005c50(void)

{
  _Init_thread_abort(&DAT_18000a960);
  return;
}




void Unwind_180005c70(void)

{
  _Init_thread_abort(&DAT_18000a978);
  return;
}




void FUN_180005ca3(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180005cba(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180005cd6(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180005d10(void)

{
  FUN_180001760((undefined8 *)&DAT_18000a950);
  return;
}



