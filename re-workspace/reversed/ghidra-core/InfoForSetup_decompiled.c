
undefined1 FUN_140001030(undefined1 (*param_1) [16])

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 local_18;
  
  local_18 = 0;
  DVar1 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_140000000,(LPWSTR)param_1,0x104);
  if (DVar1 != 0) {
    *(undefined2 *)(param_1[0x20] + 6) = 0;
    lVar2 = FUN_140002b90(param_1,0x5c);
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 2) = 0;
      local_18 = 1;
    }
  }
  return local_18;
}




undefined1 FUN_1400010b0(LPCWSTR param_1,longlong *param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined1 local_18;
  undefined1 local_14;
  
  local_18 = 0;
  if ((param_1 != (LPCWSTR)0x0) && (*param_2 == 0)) {
    pHVar1 = LoadLibraryW(param_1);
    *param_2 = (longlong)pHVar1;
    if (*param_2 != 0) {
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunOpenSession");
      param_2[1] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunCloseSession");
      param_2[2] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunAddParamToSessionA");
      param_2[3] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunAddParamToSessionW");
      param_2[4] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunSendInfo");
      param_2[5] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunEnableUserInfoCollect");
      param_2[6] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunInstallConfigFilePath");
      param_2[7] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunInstallInitUid");
      param_2[8] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunUninstallStart");
      param_2[9] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunUninstallEnd");
      param_2[10] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunIsEnableUserInfoCollect");
      param_2[0xb] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunEndCache");
      param_2[0xc] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunGetUserUid");
      param_2[0xd] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunStopProcess");
      param_2[0xe] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunGetKeyValue");
      param_2[0xf] = (longlong)pFVar2;
      pFVar2 = GetProcAddress((HMODULE)*param_2,"AliyunSetKeyValue");
      param_2[0x10] = (longlong)pFVar2;
      if (((((param_2[1] == 0) || (param_2[2] == 0)) || (param_2[3] == 0)) ||
          (((param_2[4] == 0 || (param_2[5] == 0)) ||
           ((param_2[6] == 0 || ((param_2[7] == 0 || (param_2[8] == 0)))))))) ||
         ((param_2[9] == 0 ||
          (((((param_2[10] == 0 || (param_2[0xb] == 0)) || (param_2[0xc] == 0)) ||
            ((param_2[0xd] == 0 || (param_2[0xe] == 0)))) ||
           ((param_2[0xf] == 0 || (param_2[0x10] == 0)))))))) {
        local_14 = 0;
      }
      else {
        local_14 = 1;
      }
      local_18 = local_14;
    }
  }
  return local_18;
}




void FUN_1400013f0(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  longlong local_240;
  wchar_t *local_238;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140019010 ^ (ulonglong)auStack_268;
  local_248 = 0;
  pwVar4 = local_228;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pwVar4 = 0;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  cVar1 = FUN_140001030((undefined1 (*) [16])local_228);
  if (cVar1 != '\0') {
    local_238 = local_228;
    local_240 = -1;
    lVar3 = local_240;
    do {
      local_240 = lVar3;
      lVar3 = local_240 + 1;
    } while (local_238[lVar3] != L'\0');
    uVar2 = local_240 + 0xf;
    local_240 = lVar3;
    if (uVar2 < 0x104) {
      wcscat_s(local_228,0x104,L"AliyunWrap.DLL");
      local_248 = FUN_1400010b0(local_228,param_1);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




LPCRITICAL_SECTION FUN_1400014d0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}




void FUN_140001500(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




void FUN_140001520(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}




void FUN_140001540(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}




longlong * FUN_140001560(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  FUN_1400014d0((LPCRITICAL_SECTION)(param_1 + 0x11));
  plVar2 = param_1;
  for (lVar1 = 0x88; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  FUN_140002b20(local_18,(longlong)(param_1 + 0x11));
  FUN_1400013f0(param_1);
  FUN_140002af0(local_18);
  return param_1;
}




void FUN_1400015e0(longlong param_1)

{
  FUN_140001500((LPCRITICAL_SECTION)(param_1 + 0x88));
  return;
}




undefined8 FUN_140001610(longlong param_1,undefined1 param_2)

{
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(&local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_28 = (**(code **)(param_1 + 8))(param_2);
  }
  local_18 = local_28;
  FUN_140002af0(&local_20);
  return local_18;
}




undefined1 FUN_140001690(longlong param_1,undefined8 param_2)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_28 = (**(code **)(param_1 + 0x10))(param_2);
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_140001710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_28 = (**(code **)(param_1 + 0x20))(param_2,param_3,param_4);
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_1400017a0(longlong param_1,undefined1 param_2)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_28 = (**(code **)(param_1 + 0x30))(param_2);
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_140001820(longlong param_1,undefined8 param_2)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_28 = (**(code **)(param_1 + 0x38))(param_2);
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_1400018a0(longlong param_1,undefined8 param_2)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_28 = (**(code **)(param_1 + 0x40))(param_2);
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_140001920(longlong param_1,undefined8 param_2)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_28 = (**(code **)(param_1 + 0x48))(param_2);
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_1400019a0(longlong param_1)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_28 = (**(code **)(param_1 + 0x50))();
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_140001a10(longlong param_1)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_28 = (**(code **)(param_1 + 0x60))();
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_140001a80(longlong param_1)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_28 = (**(code **)(param_1 + 0x70))();
  }
  FUN_140002af0(local_20);
  return local_28;
}




undefined1 FUN_140001af0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_28;
  longlong local_20 [4];
  
  local_20[1] = 0xfffffffffffffffe;
  local_28 = 0;
  FUN_140002b20(local_20,param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_28 = (**(code **)(param_1 + 0x80))(param_2,param_3);
  }
  FUN_140002af0(local_20);
  return local_28;
}




void FUN_140001b80(undefined1 param_1)

{
  FUN_140001610(0x14001ac20,param_1);
  return;
}




void FUN_140001ba0(undefined8 param_1)

{
  FUN_140001690(0x14001ac20,param_1);
  return;
}




void FUN_140001bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140001710(0x14001ac20,param_1,param_2,param_3);
  return;
}




void FUN_140001c00(undefined1 param_1)

{
  FUN_1400017a0(0x14001ac20,param_1);
  return;
}




void FUN_140001c20(undefined8 param_1)

{
  FUN_140001820(0x14001ac20,param_1);
  return;
}




void FUN_140001c40(undefined8 param_1)

{
  FUN_1400018a0(0x14001ac20,param_1);
  return;
}




void FUN_140001c60(undefined8 param_1)

{
  FUN_140001920(0x14001ac20,param_1);
  return;
}




void FUN_140001c80(void)

{
  FUN_1400019a0(0x14001ac20);
  return;
}




void FUN_140001ca0(void)

{
  FUN_140001a10(0x14001ac20);
  return;
}




void FUN_140001cc0(void)

{
  FUN_140001a80(0x14001ac20);
  return;
}




void FUN_140001ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_140001af0(0x14001ac20,param_1,param_2);
  return;
}




bool FUN_140001d10(wint_t *param_1,wint_t *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_1 != (wint_t *)0x0) && (param_2 != (wint_t *)0x0)) {
    iVar1 = FUN_140006840(param_1,param_2);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}




int FUN_140001d80(int param_1,longlong param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 + 1 < param_1) {
    bVar1 = FUN_140001c20(*(undefined8 *)(param_2 + (longlong)(param_3 + 1) * 8));
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 2;
  }
  return local_14;
}




int FUN_140001e00(int param_1,longlong param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 + 1 < param_1) {
    bVar1 = FUN_140001c40(*(undefined8 *)(param_2 + (longlong)(param_3 + 1) * 8));
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 2;
  }
  return local_14;
}




int FUN_140001e80(int param_1,undefined8 param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 < param_1) {
    bVar1 = FUN_140001c40(0);
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 1;
  }
  return local_14;
}




int FUN_140001ef0(int param_1,undefined8 param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 < param_1) {
    bVar1 = FUN_140001c00(1);
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 1;
  }
  return local_14;
}




int FUN_140001f60(int param_1,undefined8 param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 < param_1) {
    bVar1 = FUN_140001c00(0);
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 1;
  }
  return local_14;
}




undefined4 FUN_140001fd0(int param_1,longlong param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_34;
  int local_2c;
  int local_24;
  int local_20;
  
  *param_4 = 0;
  if ((param_3 < param_1) &&
     (uVar2 = (param_1 - param_3) - 1, (uVar2 & 1 ^ (int)uVar2 >> 0x1f) == (int)uVar2 >> 0x1f)) {
    uVar3 = FUN_140001b80(0);
    *param_4 = 1;
    cVar1 = FUN_140001bc0(uVar3,L"easeusSendType",&DAT_14001665c);
    if ((*param_4 == 0) || (cVar1 == '\0')) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    *param_4 = local_2c;
    for (local_34 = 0; local_34 < (int)uVar2 / 2; local_34 = local_34 + 1) {
      cVar1 = FUN_140001bc0(uVar3,*(undefined8 *)
                                   (param_2 + (longlong)(param_3 + 1 + local_34 * 2) * 8),
                            *(undefined8 *)(param_2 + (longlong)(param_3 + 2 + local_34 * 2) * 8));
      if ((*param_4 == 0) || (cVar1 == '\0')) {
        local_24 = 0;
      }
      else {
        local_24 = 1;
      }
      *param_4 = local_24;
    }
    cVar1 = FUN_140001ba0(uVar3);
    if ((*param_4 == 0) || (cVar1 == '\0')) {
      local_20 = 0;
    }
    else {
      local_20 = 1;
    }
    *param_4 = local_20;
    FUN_140001ca0();
  }
  return 0x7fffffff;
}




undefined4 FUN_1400021a0(int param_1,longlong param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_44;
  int local_3c;
  int local_34;
  int local_30;
  
  *param_4 = 0;
  if (param_3 + 1 < param_1) {
    uVar1 = *(undefined8 *)(param_2 + (longlong)(param_3 + 1) * 8);
    uVar3 = (param_1 - (param_3 + 1)) - 1;
    if ((uVar3 & 1 ^ (int)uVar3 >> 0x1f) == (int)uVar3 >> 0x1f) {
      uVar4 = FUN_140001b80(0);
      *param_4 = 1;
      cVar2 = FUN_140001bc0(uVar4,L"easeusSendType",uVar1);
      if ((*param_4 == 0) || (cVar2 == '\0')) {
        local_3c = 0;
      }
      else {
        local_3c = 1;
      }
      *param_4 = local_3c;
      for (local_44 = 0; local_44 < (int)uVar3 / 2; local_44 = local_44 + 1) {
        cVar2 = FUN_140001bc0(uVar4,*(undefined8 *)
                                     (param_2 + (longlong)(param_3 + 2 + local_44 * 2) * 8),
                              *(undefined8 *)(param_2 + (longlong)(param_3 + 3 + local_44 * 2) * 8))
        ;
        if ((*param_4 == 0) || (cVar2 == '\0')) {
          local_34 = 0;
        }
        else {
          local_34 = 1;
        }
        *param_4 = local_34;
      }
      cVar2 = FUN_140001ba0(uVar4);
      if ((*param_4 == 0) || (cVar2 == '\0')) {
        local_30 = 0;
      }
      else {
        local_30 = 1;
      }
      *param_4 = local_30;
      FUN_140001ca0();
    }
  }
  return 0x7fffffff;
}




int FUN_1400023c0(int param_1,longlong param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 + 1 < param_1) {
    bVar1 = FUN_140001c60(*(undefined8 *)(param_2 + (longlong)(param_3 + 1) * 8));
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 2;
  }
  return local_14;
}




int FUN_140002440(int param_1,undefined8 param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 < param_1) {
    bVar1 = FUN_140001c80();
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 1;
  }
  return local_14;
}




int FUN_1400024b0(int param_1,undefined8 param_2,int param_3,uint *param_4)

{
  byte bVar1;
  int local_14;
  
  local_14 = 0x7fffffff;
  *param_4 = 0;
  if (param_3 < param_1) {
    bVar1 = FUN_140001cc0();
    *param_4 = (uint)bVar1;
    local_14 = param_3 + 1;
  }
  return local_14;
}




void FUN_140002520(int param_1,longlong param_2,int param_3,uint *param_4)

{
  byte bVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_258 [32];
  int local_238;
  int local_234;
  int local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140019010 ^ (ulonglong)auStack_258;
  local_230 = 0x7fffffff;
  *param_4 = 0;
  local_238 = param_3 + 1;
  if ((local_238 < param_1) && (local_234 = param_3 + 2, local_234 < param_1)) {
    pwVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    FUN_140002b60(local_228,*(wchar_t **)(param_2 + (longlong)local_234 * 8));
    bVar1 = FUN_140001ce0(*(undefined8 *)(param_2 + (longlong)local_238 * 8),local_228);
    *param_4 = (uint)bVar1;
    local_230 = local_234 + 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




int FUN_140002620(int param_1,longlong param_2,int param_3,uint *param_4)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined7 extraout_var_07;
  undefined7 extraout_var_08;
  undefined7 extraout_var_09;
  int local_18;
  
  local_18 = 0x7fffffff;
  bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),(wint_t *)L"/Config");
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),(wint_t *)L"/Uid");
    if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),(wint_t *)L"/AutoUid");
      if ((int)CONCAT71(extraout_var_01,bVar1) == 0) {
        bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),(wint_t *)L"/Enable");
        if ((int)CONCAT71(extraout_var_02,bVar1) == 0) {
          bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),(wint_t *)L"/Disable")
          ;
          if ((int)CONCAT71(extraout_var_03,bVar1) == 0) {
            bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),
                                  (wint_t *)L"/SendInfo");
            if ((int)CONCAT71(extraout_var_04,bVar1) == 0) {
              bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),
                                    (wint_t *)L"/UninstallStart");
              if ((int)CONCAT71(extraout_var_05,bVar1) == 0) {
                bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),
                                      (wint_t *)L"/UninstallEnd");
                if ((int)CONCAT71(extraout_var_06,bVar1) == 0) {
                  bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),
                                        (wint_t *)L"/Stop");
                  if ((int)CONCAT71(extraout_var_07,bVar1) == 0) {
                    bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),
                                          (wint_t *)L"/SetKeyString");
                    if ((int)CONCAT71(extraout_var_08,bVar1) == 0) {
                      bVar1 = FUN_140001d10(*(wint_t **)(param_2 + (longlong)param_3 * 8),
                                            (wint_t *)L"/SendInfoEx");
                      if ((int)CONCAT71(extraout_var_09,bVar1) != 0) {
                        local_18 = FUN_1400021a0(param_1,param_2,param_3,(int *)param_4);
                      }
                    }
                    else {
                      local_18 = FUN_140002520(param_1,param_2,param_3,param_4);
                    }
                  }
                  else {
                    local_18 = FUN_1400024b0(param_1,param_2,param_3,param_4);
                  }
                }
                else {
                  local_18 = FUN_140002440(param_1,param_2,param_3,param_4);
                }
              }
              else {
                local_18 = FUN_1400023c0(param_1,param_2,param_3,param_4);
              }
            }
            else {
              local_18 = FUN_140001fd0(param_1,param_2,param_3,(int *)param_4);
            }
          }
          else {
            local_18 = FUN_140001f60(param_1,param_2,param_3,param_4);
          }
        }
        else {
          local_18 = FUN_140001ef0(param_1,param_2,param_3,param_4);
        }
      }
      else {
        local_18 = FUN_140001e80(param_1,param_2,param_3,param_4);
      }
    }
    else {
      local_18 = FUN_140001e00(param_1,param_2,param_3,param_4);
    }
  }
  else {
    local_18 = FUN_140001d80(param_1,param_2,param_3,param_4);
  }
  return local_18;
}




int FUN_140002910(int param_1,longlong param_2)

{
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_18 = 1;
  local_14 = 0;
  do {
    if (param_1 < 1) {
      return 0;
    }
    local_10 = 0;
    local_14 = FUN_140002620(param_1,param_2,local_14,&local_10);
    if ((local_18 == 0) || (local_10 == 0)) {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
    local_18 = local_c;
  } while (local_14 < param_1);
  return local_c;
}




void FUN_1400029a0(void)

{
  LPWSTR lpCmdLine;
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_268 [32];
  int local_248;
  int local_244;
  LPWSTR *local_240;
  undefined4 local_238;
  LPWSTR *local_230;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140019010 ^ (ulonglong)auStack_268;
  local_238 = 1;
  local_248 = 0;
  lpCmdLine = GetCommandLineW();
  local_240 = CommandLineToArgvW(lpCmdLine,&local_248);
  if ((local_240 != (LPWSTR *)0x0) && (local_248 != 0)) {
    pWVar2 = local_228;
    for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)pWVar2 = 0;
      pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
    }
    GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
    local_244 = 0;
    if (**local_240 == L'\\') {
      local_244 = FUN_140002910(local_248,(longlong)local_240);
    }
    else if (local_248 < 2) {
      local_244 = 0;
    }
    else {
      local_230 = local_240 + 1;
      local_244 = FUN_140002910(local_248 + -1,(longlong)local_230);
    }
    if (local_244 != 0) {
      local_238 = 0;
    }
    LocalFree(local_240);
    local_240 = (LPWSTR *)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




void FUN_140002af0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_140001540((LPCRITICAL_SECTION)*param_1);
  }
  return;
}




longlong * FUN_140002b20(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    FUN_140001520((LPCRITICAL_SECTION)*param_1);
  }
  return param_1;
}




void FUN_140002b60(wchar_t *param_1,wchar_t *param_2)

{
  wcscpy_s(param_1,0x104,param_2);
  return;
}




void FUN_140002b90(undefined1 (*param_1) [16],ushort param_2)

{
  FUN_140003ef8(param_1,param_2);
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140019010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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
LAB_140002c22:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_140019988 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_140019988;
        pvVar1 = DAT_140019988;
      }
      DAT_140019988 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_140002c22;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Single Match
    __scrt_initialize_crt
   
   Library: Visual Studio 2017 Release */

ulonglong __scrt_initialize_crt(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_140019990 = 1;
  }
  __isa_available_init();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140007954();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140002c7c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_140019991 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_140019010;
      _DAT_140019998 = in_RAX;
      uRam00000001400199a0 = in_RAX;
      _DAT_1400199a8 = in_RAX;
      _DAT_1400199b0 = in_RAX;
      uRam00000001400199b8 = in_RAX;
      _DAT_1400199c0 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table((ulonglong *)&DAT_140019998);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((ulonglong *)&DAT_1400199b0), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_140019991 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000140002de2) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000200; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002f0;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140002dcb;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140002dcb:
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
    DAT_140019988 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __scrt_uninitialize_crt(char param_1,char param_2)

{
  undefined8 in_RAX;
  
  if ((DAT_140019990 == '\0') || (param_2 == '\0')) {
    FUN_140007968();
    in_RAX = __vcrt_uninitialize(param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
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
  
  bVar2 = (byte)DAT_140019010 & 0x3f;
  if (((DAT_140019010 ^ _DAT_140019998) >> bVar2 | (DAT_140019010 ^ _DAT_140019998) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = FUN_14000774c(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140019998,_Func);
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




void FUN_140002ea8(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined7 extraout_var;
  
  FUN_140007984(2);
  uVar5 = FUN_140003708();
  _set_fmode((int)uVar5);
  puVar6 = (undefined4 *)FUN_140007c6c();
  uVar5 = FUN_1400035b8();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_140002c7c(1);
  if ((char)uVar5 != '\0') {
    FUN_14000376c();
    atexit((_func_5014 *)&LAB_1400037a8);
    uVar5 = FUN_14000340c();
    iVar4 = _configure_wide_argv((int)uVar5);
    if (iVar4 == 0) {
      FUN_140003710();
      bVar2 = FUN_140003750();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        FUN_1400079fc(0x1400035b8);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_1400035b8();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140003720();
      if (cVar3 != '\0') {
        common_initialize_environment_nolock<wchar_t>();
      }
      FUN_1400035b8();
      uVar5 = thunk_FUN_1400035b8();
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

ulonglong FUN_140002f8c(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 unaff_RBX;
  
  uVar3 = (uint)unaff_RBX;
  uVar4 = __scrt_initialize_crt(1);
  if ((char)uVar4 == '\0') {
    __scrt_fastfail(7);
  }
  else {
    bVar2 = false;
    uVar4 = __scrt_acquire_startup_lock();
    uVar3 = (uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar4);
    if (DAT_140019980 != 1) {
      if (DAT_140019980 == 0) {
        DAT_140019980 = 1;
        uVar5 = _initterm_e((undefined8 *)&DAT_14000f278,(undefined8 *)&DAT_14000f2a8);
        if ((int)uVar5 != 0) {
          return 0xff;
        }
        _initterm((undefined8 *)&DAT_14000f258,(undefined8 *)&DAT_14000f270);
        DAT_140019980 = 2;
      }
      else {
        bVar2 = true;
      }
      __scrt_release_startup_lock((char)uVar4);
      plVar6 = (longlong *)FUN_14000375c();
      if ((*plVar6 != 0) &&
         (uVar7 = __scrt_is_nonwritable_in_current_image((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)*plVar6)(0);
      }
      puVar8 = (ulonglong *)FUN_140003764();
      if ((*puVar8 != 0) &&
         (uVar7 = __scrt_is_nonwritable_in_current_image((longlong)puVar8), (char)uVar7 != '\0')) {
        _register_thread_local_exe_atexit_callback(*puVar8);
      }
      __scrt_get_show_window_mode();
      _get_wide_winmain_command_line();
      uVar3 = FUN_1400029a0();
      uVar7 = __scrt_is_managed_app();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        __scrt_uninitialize_crt('\x01','\0');
        return (ulonglong)uVar3;
      }
      goto LAB_1400030ed;
    }
  }
  __scrt_fastfail(7);
LAB_1400030ed:
  FUN_140006df0(uVar3);
  FUN_140006da0(uVar3);
  pcVar1 = (code *)swi(3);
  uVar7 = (*pcVar1)();
  return uVar7;
}




void entry(void)

{
  __security_init_cookie();
  FUN_140002f8c();
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
                    /* WARNING: Could not recover jumptable at 0x000140003141. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x140003172;
  capture_previous_context((PCONTEXT)&DAT_140019a70);
  _DAT_1400199e0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140019b08 = puVar3 + 0x40;
  _DAT_140019af0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1400199d0 = 0xc0000409;
  _DAT_1400199d4 = 1;
  _DAT_1400199e8 = 1;
  DAT_1400199f0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140019010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140019008;
  *(undefined8 *)(puVar3 + -8) = 0x140003214;
  DAT_140019b68 = _DAT_1400199e0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_14000f2f0);
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




/* WARNING: Removing unreachable block (ram,0x00014000335e) */
/* WARNING: Removing unreachable block (ram,0x0001400032dc) */
/* WARNING: Removing unreachable block (ram,0x0001400032b7) */
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
  
  DAT_14001901c = 2;
  DAT_140019018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    DAT_140019020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140019f40 = DAT_140019f40 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_140019f40 = DAT_140019f40 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    DAT_140019018 = 2;
    DAT_14001901c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14001901c = 0xe;
      DAT_140019018 = 3;
      if ((uVar6 & 0x20) != 0) {
        DAT_140019018 = 5;
        DAT_14001901c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_14000340c(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_14001ace0 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003420(void)

{
  _DAT_140019f44 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x14000345b;
  FUN_140003420();
  *(undefined8 *)(puVar4 + -8) = 0x14000346c;
  FUN_140004240((undefined1 (*) [16])local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140003476;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140003490;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1400034d1;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x140003503;
  FUN_140004240((undefined1 (*) [16])(puVar4 + 0x50),0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140003525;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x140003546;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x140003551;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x140003561;
    FUN_140003420();
  }
  return;
}




/* Library Function - Single Match
    __scrt_get_show_window_mode
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  FUN_140004240((undefined1 (*) [16])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}




undefined8 FUN_1400035b8(void)

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




void FUN_140003610(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140003617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_140003620);
  return;
}




void _guard_check_icall(void)

{
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
  
  if (DAT_140019010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_140019010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_140019010 == 0x2b992ddfa232) {
      DAT_140019010 = 0x2b992ddfa233;
    }
  }
  DAT_140019008 = ~DAT_140019010;
  return;
}




undefined8 FUN_140003708(void)

{
  return 0x4000;
}




void FUN_140003710(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140003717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_140019f50);
  return;
}




undefined1 FUN_140003720(void)

{
  return 1;
}




undefined * FUN_140003724(void)

{
  return &DAT_140019f60;
}




undefined * FUN_14000372c(void)

{
  return &DAT_140019f68;
}




void FUN_140003734(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140003724();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_14000372c();
  *puVar1 = *puVar1 | 2;
  return;
}




bool FUN_140003750(void)

{
  return DAT_140019028 == 0;
}




undefined * FUN_14000375c(void)

{
  return &DAT_14001acd8;
}




undefined * FUN_140003764(void)

{
  return &DAT_14001acd0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000376c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1400171a8; puVar1 < &DAT_1400171a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FH4::FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _CallSETranslator<>(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  lVar1 = __vcrt_getptd();
  (**(code **)(lVar1 + 0x10))(*param_1,&local_20);
  return 0;
}




/* Library Function - Single Match
    public: static struct _s_TryBlockMapEntry const * __ptr64 __cdecl
   __FrameHandler3::CatchTryBlock(struct _s_FuncInfo const * __ptr64,int)
   
   Library: Visual Studio 2017 Release */

_s_TryBlockMapEntry * __cdecl __FrameHandler3::CatchTryBlock(_s_FuncInfo *param_1,int param_2)

{
  longlong lVar1;
  _s_TryBlockMapEntry *p_Var2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1->nTryBlocks;
  do {
    if ((int)uVar3 == 0) {
      return (_s_TryBlockMapEntry *)0x0;
    }
    lVar1 = __vcrt_getptd();
    uVar3 = (ulonglong)((int)uVar3 - 1);
    p_Var2 = (_s_TryBlockMapEntry *)
             (*(longlong *)(lVar1 + 0x60) + uVar3 * 0x14 + (longlong)(int)param_1->dispTryBlockMap);
  } while ((param_2 <= *(int *)(p_Var2 + 4)) || (*(int *)(p_Var2 + 8) < param_2));
  return p_Var2;
}




/* Library Function - Single Match
    public: static bool __cdecl __FrameHandler3::ExecutionInCatch(struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2017 Release */

bool __cdecl __FrameHandler3::ExecutionInCatch(_xDISPATCHER_CONTEXT *param_1,_s_FuncInfo *param_2)

{
  int iVar1;
  _s_TryBlockMapEntry *p_Var2;
  
  iVar1 = FUN_140004614(param_2,param_1);
  p_Var2 = CatchTryBlock(param_2,iVar1);
  return p_Var2 != (_s_TryBlockMapEntry *)0x0;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2017 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  __uint64 *p_Var2;
  _s_TryBlockMapEntry *p_Var3;
  __uint64 local_res20;
  
  p_Var2 = GetEstablisherFrame(param_1,param_2,param_3,&local_res20);
  iVar1 = FUN_140004614(param_3,param_2);
  p_Var3 = CatchTryBlock(param_3,iVar1);
  if (p_Var3 == (_s_TryBlockMapEntry *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(p_Var3 + 4);
  }
  FUN_140005798(p_Var2,param_2,param_3,iVar1);
  return;
}




/* Library Function - Single Match
    public: static unsigned __int64 * __ptr64 __cdecl __FrameHandler3::GetEstablisherFrame(unsigned
   __int64 * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const *
   __ptr64,unsigned __int64 * __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 * __cdecl
__FrameHandler3::GetEstablisherFrame
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,__uint64 *param_4)

{
  uint uVar1;
  int iVar2;
  PRUNTIME_FUNCTION p_Var3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)param_3->nTryBlocks;
  iVar2 = FUN_140004614(param_3,param_2);
  *param_4 = *param_1;
  do {
    do {
      if ((int)uVar8 == 0) {
        return param_4;
      }
      uVar8 = (ulonglong)((int)uVar8 - 1);
      lVar7 = (longlong)(int)param_3->dispTryBlockMap + uVar8 * 0x14 + *(longlong *)(param_2 + 8);
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var3 = RtlLookupFunctionEntry(*(DWORD64 *)param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    uVar5 = 0;
    lVar9 = (longlong)*(int *)(lVar7 + 0x10) + local_res8;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if (uVar1 != 0) {
      piVar6 = (int *)(lVar9 + 0xc);
      do {
        if ((longlong)*piVar6 == (ulonglong)p_Var3->BeginAddress) break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        piVar6 = piVar6 + 5;
      } while (uVar4 < uVar1);
    }
    if ((uint)uVar5 < uVar1) {
      *param_4 = *(__uint64 *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
      return param_4;
    }
  } while( true );
}




undefined8 * FUN_1400039f8(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  _s_FuncInfo *p_Var2;
  _xDISPATCHER_CONTEXT *p_Var3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint local_res10;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  
  p_Var2 = (_s_FuncInfo *)*param_2;
  p_Var3 = (_xDISPATCHER_CONTEXT *)param_2[1];
  lVar12 = 0;
  uVar8 = p_Var2->nTryBlocks;
  iVar7 = FUN_140004614(p_Var2,p_Var3);
  if (uVar8 == 0) {
    FUN_140007c74();
    pcVar5 = (code *)swi(3);
    puVar9 = (undefined8 *)(*pcVar5)();
    return puVar9;
  }
  lVar4 = *(longlong *)(p_Var3 + 8);
  lVar14 = (longlong)(int)p_Var2->dispTryBlockMap;
  uVar13 = 0xffffffff;
  local_res10 = 0xffffffff;
  uVar11 = uVar8;
  do {
    uVar6 = uVar11 - 1;
    lVar1 = lVar4 + (ulonglong)uVar6 * 0x14;
    if ((*(int *)(lVar1 + 4 + lVar14) < iVar7) && (iVar7 <= *(int *)(lVar1 + 8 + lVar14))) break;
    uVar11 = uVar6;
  } while (uVar6 != 0);
  if (uVar11 != 0) {
    lVar12 = lVar14 + (ulonglong)(uVar11 - 1) * 0x14 + lVar4;
  }
  uVar11 = 0;
  if (uVar8 != 0) {
    piVar10 = (int *)(lVar4 + lVar14);
    do {
      uVar6 = uVar13;
      if ((((lVar12 == 0) ||
           ((*(int *)(lVar12 + 4) < *piVar10 && (piVar10[1] <= *(int *)(lVar12 + 8))))) &&
          (*piVar10 <= param_3)) &&
         ((param_3 <= piVar10[1] && (uVar6 = uVar11, local_res10 = uVar11, uVar13 != 0xffffffff))))
      {
        uVar6 = uVar13;
      }
      uVar13 = uVar6;
      uVar11 = uVar11 + 1;
      piVar10 = piVar10 + 5;
    } while (uVar11 < uVar8);
  }
  uVar8 = 0;
  if (uVar13 != 0xffffffff) {
    uVar8 = uVar13;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(uStack_4c,uVar8);
  iVar7 = 0;
  if (uVar13 != 0xffffffff) {
    iVar7 = local_res10 + 1;
  }
  param_1[2] = param_2;
  param_1[3] = CONCAT44(uStack_3c,iVar7);
  return param_1;
}




void FUN_140003b54(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_5b8 [32];
  EXCEPTION_RECORD local_588;
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_140019010 ^ (ulonglong)auStackY_5b8;
  local_588.ExceptionCode = 0x80000029;
  local_588.ExceptionFlags = 1;
  local_588.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_588.ExceptionAddress = (PVOID)0x0;
  local_588.NumberParameters = 0xf;
  local_588._28_4_ = 0;
  local_588.ExceptionInformation[9] = 0;
  local_588.ExceptionInformation[10]._0_4_ = 0;
  local_588.ExceptionInformation[10]._4_4_ = 0;
  local_588.ExceptionInformation[0xb]._0_4_ = 0;
  local_588.ExceptionInformation[0xb]._4_4_ = 0;
  local_588.ExceptionInformation[0xc]._0_4_ = 0;
  local_588.ExceptionInformation[0xc]._4_4_ = 0;
  local_588.ExceptionInformation[0xd]._0_4_ = 0;
  local_588.ExceptionInformation[0xd]._4_4_ = 0;
  local_588.ExceptionInformation[0xe] = 0;
  local_588.ExceptionInformation[0] = (ULONG_PTR)&LAB_140005524;
  local_588.ExceptionInformation[2] = param_5;
  local_588.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_588.ExceptionInformation[5] = param_6;
  local_588.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_588.ExceptionInformation[8] = 0x19930520;
  local_588.ExceptionInformation[1] = param_4;
  local_588.ExceptionInformation[4] = param_3;
  local_588.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_588,(PVOID)0x0,&local_4e8,
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_5b8);
  return;
}




/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = __vcrt_getptd();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = __vcrt_getptd();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = __vcrt_getptd();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}




/* Library Function - Single Match
    _FindAndUnlinkFrame
   
   Library: Visual Studio 2017 Release */

void _FindAndUnlinkFrame(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = __vcrt_getptd();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = __vcrt_getptd();
    for (lVar2 = *(longlong *)(lVar2 + 0x58); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      if (param_1 == lVar2) {
        lVar3 = __vcrt_getptd();
        *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar2 + 8);
        return;
      }
    }
  }
  FUN_140007c74();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    _GetImageBase
   
   Library: Visual Studio 2017 Release */

undefined8 _GetImageBase(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return *(undefined8 *)(lVar1 + 0x60);
}




/* Library Function - Single Match
    _GetThrowImageBase
   
   Library: Visual Studio 2017 Release */

undefined8 _GetThrowImageBase(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return *(undefined8 *)(lVar1 + 0x68);
}




void FUN_140003d30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}




void FUN_140003d48(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2017 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && ((longlong *)**(longlong **)(param_1 + 10) != (longlong *)0x0))
      {
        (**(code **)(*(longlong *)**(longlong **)(param_1 + 10) + 0x10))();
      }
    }
    else {
      FUN_140003e54(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}




void FUN_140003e54(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000140003e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




/* Library Function - Single Match
    _IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _IsExceptionObjectToBeDestroyed(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = __vcrt_getptd();
  plVar2 = *(longlong **)(lVar1 + 0x58);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar2 == param_1) break;
    plVar2 = (longlong *)plVar2[1];
  }
  return 0;
}




/* Library Function - Single Match
    __AdjustPointer
   
   Library: Visual Studio 2017 Release */

longlong __AdjustPointer(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    lVar1 = lVar1 + (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(param_2[1] + param_1)) +
                    (longlong)param_2[1];
  }
  return lVar1;
}




/* Library Function - Single Match
    __FrameUnwindFilter
   
   Library: Visual Studio 2017 Release */

undefined8 __FrameUnwindFilter(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = __vcrt_getptd();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = __vcrt_getptd();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = __vcrt_getptd();
    *(undefined4 *)(lVar3 + 0x30) = 0;
    FUN_140007c74();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return 0;
}




undefined1 (*) [16] FUN_140003ef8(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  
  pauVar4 = (undefined1 (*) [16])0x0;
  pauVar2 = param_1;
  if (1 < DAT_140019018) {
    while( true ) {
      if (((int)param_1 + 1U & 0xe) == 0) {
        bVar5 = param_2 != 0;
        bVar6 = param_2 == 0;
        if (!bVar6) {
          while( true ) {
            iVar3 = pcmpistri(ZEXT216(param_2),*param_1,0x41);
            if (bVar5) {
              pauVar4 = (undefined1 (*) [16])(*param_1 + (longlong)iVar3 * 2);
            }
            if (bVar6) break;
            bVar5 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
            param_1 = param_1 + 1;
            bVar6 = param_1 == (undefined1 (*) [16])0x0;
          }
          return pauVar4;
        }
        while (iVar3 = pcmpistri(ZEXT416(0xffff0001),*param_1,0x15), !bVar6) {
          param_1 = param_1 + 1;
          bVar6 = param_1 == (undefined1 (*) [16])0x0;
        }
        return (undefined1 (*) [16])(*param_1 + (longlong)iVar3 * 2);
      }
      pauVar2 = param_1;
      if (*(ushort *)*param_1 != param_2) {
        pauVar2 = pauVar4;
      }
      if (*(short *)*param_1 == 0) break;
      param_1 = (undefined1 (*) [16])(*param_1 + 2);
      pauVar4 = pauVar2;
    }
    return pauVar2;
  }
  do {
    puVar1 = *pauVar2;
    pauVar2 = (undefined1 (*) [16])(*pauVar2 + 2);
  } while (*(short *)puVar1 != 0);
  do {
    pauVar2 = (undefined1 (*) [16])(pauVar2[-1] + 0xe);
    if (pauVar2 == param_1) break;
  } while (*(ushort *)*pauVar2 != param_2);
  if (*(ushort *)*pauVar2 == param_2) {
    pauVar4 = pauVar2;
  }
  return pauVar4;
}




/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2017 Release */

ulonglong __vcrt_initialize(void)

{
  ulonglong uVar1;
  
  FUN_140005fb8();
  __vcrt_initialize_winapi_thunks();
  uVar1 = __vcrt_initialize_locks();
  if ((char)uVar1 != '\0') {
    uVar1 = __vcrt_initialize_ptd();
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize_locks();
  }
  return uVar1 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    __vcrt_uninitialize
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize(char param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == '\0') {
    __vcrt_uninitialize_ptd();
    __vcrt_uninitialize_locks();
    in_RAX = __vcrt_uninitialize_winapi_thunks('\0');
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined1 (*) [16] FUN_140004240(undefined1 (*param_1) [16],byte param_2,ulonglong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 uVar17;
  
  uVar6 = (ulonglong)param_2 * 0x101010101010101;
  uVar3 = (undefined1)uVar6;
  uVar4 = (undefined2)uVar6;
  uVar5 = (undefined4)uVar6;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(ulonglong *)*param_1 = uVar6;
    return param_1;
  case 9:
    *(ulonglong *)(param_1[-1] + param_3 + 7) = uVar6;
    param_1[-1][param_3 + 0xf] = uVar3;
    return param_1;
  case 10:
    *(ulonglong *)*param_1 = uVar6;
    *(undefined2 *)(*param_1 + 8) = uVar4;
    return param_1;
  case 0xb:
    *(ulonglong *)*param_1 = uVar6;
    *(undefined2 *)(*param_1 + 8) = uVar4;
    (*param_1)[10] = uVar3;
    return param_1;
  case 0xc:
    *(ulonglong *)(param_1[-1] + param_3 + 4) = uVar6;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0xc) = uVar5;
    return param_1;
  case 0xd:
    *(ulonglong *)(param_1[-1] + param_3 + 3) = uVar6;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0xb) = uVar5;
    param_1[-1][param_3 + 0xf] = uVar3;
    return param_1;
  case 0xe:
    *(ulonglong *)(param_1[-1] + param_3 + 2) = uVar6;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 10) = uVar5;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0xe) = uVar4;
    return param_1;
  case 0xf:
    *(ulonglong *)(param_1[-1] + param_3 + 1) = uVar6;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 9) = uVar5;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0xd) = uVar4;
  case 1:
    param_1[-1][param_3 + 0xf] = uVar3;
    return param_1;
  case 0x10:
    *(ulonglong *)*param_1 = uVar6;
    *(ulonglong *)(*param_1 + 8) = uVar6;
    return param_1;
  }
  uVar17 = (undefined1)(uVar6 >> 0x38);
  auVar16._8_6_ = 0;
  auVar16._0_8_ = uVar6;
  auVar16[0xe] = uVar17;
  auVar16[0xf] = uVar17;
  uVar17 = (undefined1)(uVar6 >> 0x30);
  auVar15._14_2_ = auVar16._14_2_;
  auVar15._8_5_ = 0;
  auVar15._0_8_ = uVar6;
  auVar15[0xd] = uVar17;
  auVar14._13_3_ = auVar15._13_3_;
  auVar14._8_4_ = 0;
  auVar14._0_8_ = uVar6;
  auVar14[0xc] = uVar17;
  uVar17 = (undefined1)(uVar6 >> 0x28);
  auVar13._12_4_ = auVar14._12_4_;
  auVar13._8_3_ = 0;
  auVar13._0_8_ = uVar6;
  auVar13[0xb] = uVar17;
  auVar12._11_5_ = auVar13._11_5_;
  auVar12._8_2_ = 0;
  auVar12._0_8_ = uVar6;
  auVar12[10] = uVar17;
  uVar17 = (undefined1)(uVar6 >> 0x20);
  auVar11._10_6_ = auVar12._10_6_;
  auVar11[8] = 0;
  auVar11._0_8_ = uVar6;
  auVar11[9] = uVar17;
  auVar10._9_7_ = auVar11._9_7_;
  auVar10[8] = uVar17;
  auVar10._0_8_ = uVar6;
  uVar17 = (undefined1)(uVar6 >> 0x18);
  auVar9._8_8_ = auVar10._8_8_;
  auVar9[7] = uVar17;
  auVar9[6] = uVar17;
  uVar17 = (undefined1)(uVar6 >> 0x10);
  auVar9[5] = uVar17;
  auVar9[4] = uVar17;
  auVar9._0_4_ = uVar5;
  uVar17 = (undefined1)(uVar6 >> 8);
  auVar8._4_12_ = auVar9._4_12_;
  auVar8[3] = uVar17;
  auVar8[2] = uVar17;
  auVar8._0_2_ = uVar4;
  auVar7._2_14_ = auVar8._2_14_;
  auVar7[1] = uVar3;
  auVar7[0] = uVar3;
  pauVar1 = param_1;
  if (0x80 < param_3) {
    if ((DAT_140019f40 >> 1 & 1) != 0) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*pauVar1)[0] = param_2;
        pauVar1 = (undefined1 (*) [16])(*pauVar1 + 1);
      }
      return param_1;
    }
    *param_1 = auVar7;
    pauVar1 = (undefined1 (*) [16])((ulonglong)(param_1 + 1) & 0xfffffffffffffff0);
    param_3 = (longlong)param_1 + (param_3 - (longlong)pauVar1);
    uVar6 = param_3 >> 7;
    if (uVar6 != 0) {
      do {
        *pauVar1 = auVar7;
        pauVar1[1] = auVar7;
        pauVar2 = pauVar1 + 8;
        pauVar1[2] = auVar7;
        pauVar1[3] = auVar7;
        uVar6 = uVar6 - 1;
        pauVar1[4] = auVar7;
        pauVar1[5] = auVar7;
        pauVar1[6] = auVar7;
        pauVar1[7] = auVar7;
        pauVar1 = pauVar2;
      } while (uVar6 != 0);
      param_3 = param_3 & 0x7f;
    }
  }
  for (uVar6 = param_3 >> 4; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pauVar1 = auVar7;
    pauVar1 = pauVar1 + 1;
  }
  if ((param_3 & 0xf) != 0) {
    *(undefined1 (*) [16])(pauVar1[-1] + (param_3 & 0xf)) = auVar7;
  }
  return param_1;
}




/* Library Function - Single Match
    __std_type_info_compare
   
   Library: Visual Studio 2017 Release */

uint __std_type_info_compare(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}




/* Library Function - Single Match
    __vcrt_getptd
   
   Library: Visual Studio 2017 Release */

void __vcrt_getptd(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    __vcrt_getptd_noexit
   
   Library: Visual Studio 2017 Release */

LPVOID __vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_140019030 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_140019030);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_140019030,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x90);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_140019030,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_140019030,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(undefined4 *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        *(undefined8 *)((longlong)pvVar3 + 0x80) = 0xfffffffffffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      _free_base(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2017 Release */

ulonglong __vcrt_initialize_ptd(void)

{
  int iVar1;
  ulonglong uVar2;
  uint7 extraout_var;
  
  uVar2 = __vcrt_FlsAlloc(&LAB_1400043f8);
  DAT_140019030 = (DWORD)uVar2;
  if (DAT_140019030 != 0xffffffff) {
    iVar1 = __vcrt_FlsSetValue(DAT_140019030,&DAT_140019f80);
    if (iVar1 != 0) {
      _DAT_140019ff8 = 0xfffffffe;
      _DAT_14001a000 = 0xfffffffffffffffe;
      return 0xffffffffffffff01;
    }
    __vcrt_uninitialize_ptd();
    uVar2 = (ulonglong)extraout_var << 8;
  }
  return uVar2 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    __vcrt_uninitialize_ptd
   
   Library: Visual Studio 2017 Release */

undefined1 __vcrt_uninitialize_ptd(void)

{
  if (DAT_140019030 != 0xffffffff) {
    __vcrt_FlsFree(DAT_140019030);
    DAT_140019030 = 0xffffffff;
  }
  return 1;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetCurrentState(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2017 Release */

int __cdecl
__FrameHandler3::GetCurrentState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_3->dispUnwindHelp + *param_1);
  if (iVar1 == -2) {
    iVar1 = StateFromIp(param_3,param_2,*(__uint64 *)param_2);
  }
  return iVar1;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  __uint64 *p_Var1;
  __uint64 local_res18 [2];
  
  p_Var1 = GetEstablisherFrame(param_1,param_2,param_3,local_res18);
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *p_Var1);
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(unsigned __int64 * __ptr64,struct
   _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::SetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  __uint64 *p_Var1;
  __uint64 local_res18 [2];
  
  p_Var1 = GetEstablisherFrame(param_1,param_2,param_3,local_res18);
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *p_Var1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *p_Var1) = param_4;
  }
  return;
}




void FUN_140004614(_s_FuncInfo *param_1,_xDISPATCHER_CONTEXT *param_2)

{
  __FrameHandler3::StateFromIp(param_1,param_2,*(__uint64 *)param_2);
  return;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::StateFromIp(struct _s_FuncInfo const *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2017 Release */

int __cdecl
__FrameHandler3::StateFromIp(_s_FuncInfo *param_1,_xDISPATCHER_CONTEXT *param_2,__uint64 param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != (_s_FuncInfo *)0x0) {
    lVar6 = (longlong)(int)param_1->dispIPToStateMap;
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar6 + lVar1 != 0) {
      uVar5 = 0;
      if (param_1->nIPMapEntries != 0) {
        do {
          if (param_3 < (ulonglong)*(uint *)(lVar6 + uVar5 * 8 + lVar1) + lVar1) break;
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < param_1->nIPMapEntries);
        if ((int)uVar5 != 0) {
          return *(int *)(lVar6 + (ulonglong)((int)uVar5 - 1) * 8 + 4 + lVar1);
        }
      }
      return -1;
    }
  }
  FUN_140007c74();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_140004684(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  lVar4 = 0;
  iVar6 = 0;
  lVar2 = lVar4;
  iVar7 = iVar6;
  if (*(int *)(param_3 + 4) != 0) {
    iVar7 = *(int *)(param_3 + 4);
    lVar2 = _GetImageBase();
    lVar2 = iVar7 + lVar2;
  }
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = lVar4;
  if (iVar7 != 0) {
    lVar2 = _GetImageBase();
    lVar2 = lVar2 + *(int *)(param_3 + 4);
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    return 0;
  }
  if ((*(int *)(param_3 + 8) == 0) && (-1 < *(int *)param_3)) {
    return 0;
  }
  if (-1 < *(int *)param_3) {
    param_2 = (longlong *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  if ((((*param_3 & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_140019f70 == 0)) {
    if ((*param_3 & 8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
        *param_2 = lVar2;
        goto LAB_1400047a3;
      }
      goto LAB_140004866;
    }
    if ((*param_4 & 1) != 0) {
      if ((*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
        FUN_1400062a0(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 8) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        lVar2 = *param_2;
        goto LAB_1400047a3;
      }
      goto LAB_14000486b;
    }
    lVar2 = lVar4;
    if (*(int *)(param_4 + 0x18) != 0) {
      iVar6 = *(int *)(param_4 + 0x18);
      lVar2 = _GetThrowImageBase();
      lVar2 = iVar6 + lVar2;
    }
    if (lVar2 != 0) {
      if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
        if (iVar6 != 0) {
          lVar4 = _GetThrowImageBase();
          lVar4 = lVar4 + *(int *)(param_4 + 0x18);
        }
        if (lVar4 != 0) {
          return (ulonglong)(((*param_4 & 4) != 0) + 1);
        }
      }
      goto LAB_140004875;
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
      iVar7 = *(int *)(param_4 + 0x14);
      puVar3 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
      FUN_1400062a0(param_2,puVar3,(longlong)iVar7);
      return 0;
    }
  }
  else {
    lVar2 = (*(code *)DAT_140019f70)();
    if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
      *param_2 = lVar2;
LAB_1400047a3:
      lVar2 = __AdjustPointer(lVar2,(int *)(param_4 + 8));
      *param_2 = lVar2;
      return 0;
    }
    FUN_140007c74();
LAB_140004866:
    FUN_140007c74();
LAB_14000486b:
    FUN_140007c74();
  }
  FUN_140007c74();
LAB_140004875:
  FUN_140007c74();
  FUN_140007c74();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}




/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<struct _s_HandlerType const >(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2017 Release */

void __cdecl
BuildCatchObjectInternal<struct__s_HandlerType_const_>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined *UNRECOVERED_JUMPTABLE;
  void *pvVar4;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  pvVar4 = param_2;
  if (-1 < *(int *)param_3) {
                    /* WARNING: Load size is inaccurate */
    pvVar4 = (void *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  uVar1 = FUN_140004684((longlong)param_1,(longlong *)param_2,(byte *)param_3,(byte *)param_4);
  if ((int)uVar1 == 1) {
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar2 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar2 + *(int *)(param_4 + 0x18));
    }
    lVar2 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    FUN_140005b30(pvVar4,UNRECOVERED_JUMPTABLE,lVar2);
  }
  else if ((int)uVar1 == 2) {
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar2 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar2 + *(int *)(param_4 + 0x18));
    }
    pvVar3 = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    _CallMemberFunction2(pvVar4,UNRECOVERED_JUMPTABLE,pvVar3,1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned __int64
   * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo
   const * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64,struct _s_TryBlockMapEntry const * __ptr64,int,unsigned __int64 * __ptr64,unsigned
   char,unsigned char)
   
   Library: Visual Studio 2017 Release */

void __cdecl
CatchIt<class___FrameHandler3>
          (EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
          _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,
          _s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,__uint64 *param_10,
          uchar param_11,uchar param_12)

{
  __uint64 *p_Var1;
  longlong lVar2;
  __uint64 local_res10;
  undefined4 in_stack_ffffffffffffffb4;
  
  p_Var1 = __FrameHandler3::GetEstablisherFrame(param_2,param_4,param_5,&local_res10);
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<struct__s_HandlerType_const_>(param_1,p_Var1,param_6,param_7);
  }
  lVar2 = _GetImageBase();
  FUN_140003b54(param_2,(ULONG_PTR)param_1,(ULONG_PTR)param_3,(ULONG_PTR)p_Var1,
                lVar2 + *(int *)(param_6 + 0xc),(ULONG_PTR)param_5,*(int *)param_8,
                CONCAT44(in_stack_ffffffffffffffb4,*(undefined4 *)(param_8 + 8)),param_6,
                (undefined8 *)param_4,param_12);
  return;
}




void FUN_140004a14(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,byte param_6,int param_7,
                  __uint64 *param_8)

{
  _s_HandlerType *p_Var1;
  uint uVar2;
  _s_ESTypeList *p_Var3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uchar uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 uVar13;
  int *piVar14;
  __uint64 *p_Var15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  _s_TryBlockMapEntry *p_Var19;
  _CONTEXT *local_res18;
  _s_TryBlockMapEntry *in_stack_ffffffffffffff20;
  undefined4 uVar20;
  uchar local_b7;
  _s_CatchableType *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  _s_FuncInfo *local_68;
  _xDISPATCHER_CONTEXT *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_40;
  
  local_b7 = '\0';
  bVar8 = false;
  bVar5 = false;
  iVar9 = __FrameHandler3::GetHandlerSearchState(param_2,param_4,param_5);
  if ((iVar9 < -1) || (param_5->maxState <= iVar9)) goto LAB_140004e6f;
  local_res18 = param_3;
  if ((*(int *)param_1 == -0x1f928c9d) &&
     (((*(int *)(param_1 + 0x18) == 4 && (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) &&
      (*(longlong *)(param_1 + 0x30) == 0)))) {
    lVar11 = __vcrt_getptd();
    if (*(longlong *)(lVar11 + 0x20) == 0) {
      return;
    }
    lVar11 = __vcrt_getptd();
    param_1 = *(EHExceptionRecord **)(lVar11 + 0x20);
    lVar11 = __vcrt_getptd();
    local_b7 = '\x01';
    local_res18 = *(_CONTEXT **)(lVar11 + 0x28);
    FUN_140003d48(*(undefined8 *)(param_1 + 0x38));
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
    goto LAB_140004e6f;
    lVar11 = __vcrt_getptd();
    if (*(longlong *)(lVar11 + 0x38) != 0) {
      lVar11 = __vcrt_getptd();
      p_Var3 = *(_s_ESTypeList **)(lVar11 + 0x38);
      lVar11 = __vcrt_getptd();
      *(undefined8 *)(lVar11 + 0x38) = 0;
      cVar6 = FUN_1400059c4((longlong)param_1,(int *)p_Var3);
      if (cVar6 == '\0') {
        uVar7 = Is_bad_exception_allowed(p_Var3);
        if (uVar7 != '\0') {
          __DestructExceptionObject((int *)param_1);
          FUN_140005474((undefined8 *)&local_80);
          FUN_1400061b0((longlong *)&local_80,&DAT_140018028);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_140004e6f;
      }
    }
  }
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  local_68 = param_5;
  local_60 = param_4;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
     (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
    if (param_5->nTryBlocks != 0) {
      FUN_1400039f8((undefined8 *)&local_58,&local_68,iVar9);
      uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
      local_80 = local_58;
      uStack_7c = uStack_54;
      uStack_78 = uStack_50;
      uStack_74 = uStack_4c;
      if (uStack_50 < local_40) {
        uVar16 = uStack_50;
        do {
          p_Var19 = (_s_TryBlockMapEntry *)
                    ((longlong)*(int *)(*(longlong *)CONCAT44(uStack_7c,local_80) + 0x10) +
                     (ulonglong)uVar16 * 0x14 +
                    *(longlong *)(*(longlong *)(CONCAT44(uStack_54,local_58) + 8) + 8));
          if ((*(int *)p_Var19 <= iVar9) && (iVar9 <= *(int *)(p_Var19 + 4))) {
            uVar2 = *(uint *)(p_Var19 + 0xc);
            uVar18 = 0;
            local_88 = (longlong)*(int *)(p_Var19 + 0x10) + *(longlong *)(param_4 + 8);
            bVar8 = bVar5;
            if (uVar2 != 0) {
              do {
                p_Var1 = (_s_HandlerType *)(local_88 + uVar18 * 0x14);
                lVar11 = _GetThrowImageBase();
                piVar12 = (int *)(lVar11 + 4 +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                lVar11 = _GetThrowImageBase();
                for (iVar10 = *(int *)(lVar11 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                    0 < iVar10; iVar10 = iVar10 + -1) {
                  lVar11 = _GetThrowImageBase();
                  local_90 = (_s_CatchableType *)(lVar11 + *piVar12);
                  uVar13 = TypeMatchHelper<>((byte *)p_Var1,(byte *)local_90,
                                             *(byte **)(param_1 + 0x30));
                  if ((int)uVar13 != 0) {
                    bVar5 = true;
                    CatchIt<class___FrameHandler3>
                              (param_1,param_2,local_res18,param_4,param_5,p_Var1,local_90,p_Var19,
                               param_7,param_8,local_b7,param_6);
                    in_stack_ffffffffffffff20 = p_Var19;
                    bVar8 = true;
                    goto LAB_140004cfd;
                  }
                  piVar12 = piVar12 + 1;
                }
                uVar17 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar17;
              } while (uVar17 != uVar2);
            }
          }
LAB_140004cfd:
          uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
          uVar16 = uVar16 + 1;
        } while (uVar16 < local_40);
        if (bVar8) goto LAB_140004e24;
      }
    }
    piVar12 = (int *)0x0;
    if (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) {
      piVar14 = piVar12;
      if (param_5->dispESTypeList != 0) {
        lVar11 = _GetImageBase();
        piVar14 = (int *)(lVar11 + (int)param_5->dispESTypeList);
      }
      if ((piVar14 != (int *)0x0) ||
         ((((uint)param_5->EHFlags >> 2 & 1) != 0 &&
          (bVar8 = __FrameHandler3::ExecutionInCatch(param_4,param_5), !bVar8)))) {
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) goto LAB_140004e6f;
        if (param_5->dispESTypeList != 0) {
          lVar11 = _GetImageBase();
          piVar12 = (int *)(lVar11 + (int)param_5->dispESTypeList);
        }
        cVar6 = FUN_1400059c4((longlong)param_1,piVar12);
        if (cVar6 == '\0') {
          p_Var15 = __FrameHandler3::GetEstablisherFrame
                              (param_2,param_4,param_5,(__uint64 *)&local_90);
          FUN_140003b54(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)p_Var15,0,
                        (ULONG_PTR)param_5,-1,CONCAT44(uVar20,0xffffffff),0,(undefined8 *)param_4,
                        param_6);
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != 0) goto LAB_140004e6f;
    FUN_140004e78(param_1,param_2,local_res18,param_4,param_5,iVar9,param_7,param_8);
  }
LAB_140004e24:
  lVar11 = __vcrt_getptd();
  if (*(longlong *)(lVar11 + 0x38) == 0) {
    return;
  }
LAB_140004e6f:
  FUN_140007c74();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}




void FUN_140004e78(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,int param_7,
                  __uint64 *param_8)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  PVOID pvVar4;
  _s_TryBlockMapEntry *p_Var5;
  uint uVar6;
  _s_HandlerType *p_Var7;
  _s_FuncInfo *local_78;
  _xDISPATCHER_CONTEXT *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_40;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    lVar3 = __vcrt_getptd();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = __vcrt_getptd();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar2 = _CallSETranslator<>((undefined4 *)param_1,param_2,param_3), iVar2 != 0)) {
        return;
      }
    }
    local_78 = param_5;
    local_70 = param_4;
    if (param_5->nTryBlocks == 0) {
      FUN_140007c74();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_1400039f8((undefined8 *)&local_58,&local_78,param_6);
    local_68 = local_58;
    uStack_64 = uStack_54;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    if (uStack_50 < local_40) {
      uVar6 = uStack_50;
      do {
        p_Var5 = (_s_TryBlockMapEntry *)
                 ((longlong)*(int *)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10) +
                  (ulonglong)uVar6 * 0x14 +
                 *(longlong *)(*(longlong *)(CONCAT44(uStack_54,local_58) + 8) + 8));
        if ((*(int *)p_Var5 <= param_6) && (param_6 <= *(int *)(p_Var5 + 4))) {
          p_Var7 = (_s_HandlerType *)
                   (*(longlong *)(param_4 + 8) + -0x14 +
                   (longlong)*(int *)(p_Var5 + 0x10) + (ulonglong)*(uint *)(p_Var5 + 0xc) * 0x14);
          if (*(int *)(p_Var7 + 4) == 0) {
            lVar3 = 0;
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(p_Var7 + 4);
            lVar3 = _GetImageBase();
            lVar3 = lVar3 + iVar2;
          }
          if (lVar3 != 0) {
            if (iVar2 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = _GetImageBase();
              lVar3 = lVar3 + *(int *)(p_Var7 + 4);
            }
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_140005076;
          }
          if (((byte)*p_Var7 & 0x40) == 0) {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var7,(_s_CatchableType *)0x0,p_Var5
                       ,param_7,param_8,'\x01','\0');
          }
        }
LAB_140005076:
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_40);
    }
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    int __cdecl TypeMatchHelper<struct _s_HandlerType const >(struct _s_HandlerType const *
   __ptr64,struct _s_CatchableType const * __ptr64,struct _s_ThrowInfo const * __ptr64)
    int __cdecl TypeMatchHelper<class __FrameHandler3>(struct _s_HandlerType const * __ptr64,struct
   _s_CatchableType const * __ptr64,struct _s_ThrowInfo const * __ptr64)
   
   Library: Visual Studio 2017 Release */

undefined8 TypeMatchHelper<>(byte *param_1,byte *param_2,byte *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = 0;
  iVar7 = 0;
  lVar3 = lVar5;
  iVar8 = iVar7;
  if (*(int *)(param_1 + 4) != 0) {
    iVar8 = *(int *)(param_1 + 4);
    lVar3 = _GetImageBase();
    lVar3 = iVar8 + lVar3;
  }
  if (lVar3 != 0) {
    lVar3 = lVar5;
    if (iVar8 != 0) {
      iVar7 = *(int *)(param_1 + 4);
      lVar3 = _GetImageBase();
      lVar3 = iVar7 + lVar3;
    }
    if ((*(char *)(lVar3 + 0x10) != '\0') && (((*param_1 & 0x80) == 0 || ((*param_2 & 0x10) == 0))))
    {
      lVar3 = lVar5;
      if (iVar7 != 0) {
        lVar3 = _GetImageBase();
        lVar3 = lVar3 + *(int *)(param_1 + 4);
      }
      lVar4 = _GetThrowImageBase();
      if (lVar3 != lVar4 + *(int *)(param_2 + 4)) {
        if (*(int *)(param_1 + 4) != 0) {
          lVar5 = _GetImageBase();
          lVar5 = lVar5 + *(int *)(param_1 + 4);
        }
        lVar3 = _GetThrowImageBase();
        pcVar6 = (char *)(lVar5 + 0x10);
        lVar3 = ((longlong)*(int *)(param_2 + 4) + 0x10 + lVar3) - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar3];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) {
          return 0;
        }
      }
      if (((*param_2 & 2) != 0) && ((*param_1 & 8) == 0)) {
        return 0;
      }
      if (((*param_3 & 1) != 0) && ((*param_1 & 1) == 0)) {
        return 0;
      }
      if (((*param_3 & 4) != 0) && ((*param_1 & 4) == 0)) {
        return 0;
      }
      if (((*param_3 & 2) != 0) && ((*param_1 & 2) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_1400051ec(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
             _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
             byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_140005272;
        goto LAB_140005258;
      }
    }
    else {
LAB_140005258:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_140005272;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_140005272:
  if (((byte)param_1[4] & 0x66) != 0) {
    if (param_5->maxState == 0) {
      return 1;
    }
    if (param_6 != 0) {
      return 1;
    }
    if (((byte)param_1[4] & 0x20) != 0) {
      if (*(int *)param_1 == -0x7fffffda) {
        iVar1 = __FrameHandler3::StateFromIp(param_5,param_4,*(__uint64 *)(param_4 + 0x20));
        if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_14000542c:
          FUN_140007c74();
          pcVar4 = (code *)swi(3);
          uVar3 = (*pcVar4)();
          return uVar3;
        }
      }
      else {
        if (*(int *)param_1 != -0x7fffffd7) goto LAB_1400052f8;
        iVar1 = *(int *)(param_1 + 0x38);
        if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_14000542c;
        param_2 = *(__uint64 **)(param_1 + 0x28);
      }
      FUN_140005798(param_2,param_4,param_5,iVar1);
      return 1;
    }
LAB_1400052f8:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
    return 1;
  }
  if (param_5->nTryBlocks == 0) {
    if (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) {
      if (param_5->dispESTypeList == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = _GetImageBase();
        lVar2 = lVar2 + (int)param_5->dispESTypeList;
      }
      if (lVar2 != 0) goto LAB_14000535c;
    }
    if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
      return 1;
    }
    if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
      return 1;
    }
  }
LAB_14000535c:
  if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
     (0x19930522 < *(uint *)(param_1 + 0x20))) {
    if (*(int *)(*(longlong *)(param_1 + 0x30) + 8) == 0) {
      pcVar4 = (code *)0x0;
    }
    else {
      lVar2 = _GetThrowImageBase();
      pcVar4 = (code *)(*(int *)(*(longlong *)(param_1 + 0x30) + 8) + lVar2);
    }
    if (pcVar4 != (code *)0x0) {
      uVar3 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                        CONCAT44(uVar5,(uint)param_8));
      return uVar3;
    }
  }
  FUN_140004a14(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
  return 1;
}




undefined8 * FUN_140005434(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




undefined8 * FUN_140005474(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}




undefined8 * FUN_1400054e0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ExFilterRethrow(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int *param_3)

{
  PEXCEPTION_RECORD pEVar1;
  int iVar2;
  longlong lVar3;
  
  pEVar1 = param_1->ExceptionRecord;
  *param_3 = 0;
  if (((((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 4)) &&
       ((2 < (int)pEVar1->ExceptionInformation[0] + 0xe66cfae0U ||
        ((pEVar1->ExceptionInformation[1] != *(ULONG_PTR *)(param_2 + 0x28) ||
         (*param_3 = 1, pEVar1->ExceptionCode == 0xe06d7363)))))) && (pEVar1->NumberParameters == 4)
      ) && (((int)pEVar1->ExceptionInformation[0] + 0xe66cfae0U < 3 &&
            (pEVar1->ExceptionInformation[2] == 0)))) {
    lVar3 = __vcrt_getptd();
    *(undefined4 *)(lVar3 + 0x40) = 1;
    iVar2 = 1;
    *param_3 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}




void FUN_140005798(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = _GetImageBase();
  iVar2 = __FrameHandler3::GetCurrentState(param_1,param_2,param_3);
  lVar4 = __vcrt_getptd();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  do {
    if ((iVar2 == -1) || (iVar2 <= param_4)) {
      lVar4 = __vcrt_getptd();
      if (0 < *(int *)(lVar4 + 0x30)) {
        lVar4 = __vcrt_getptd();
        *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
      }
      if ((iVar2 == -1) || (iVar2 <= param_4)) {
        __FrameHandler3::SetState(param_1,param_3,iVar2);
        return;
      }
LAB_140005925:
      FUN_140007c74();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
      FUN_140007c74();
      goto LAB_140005925;
    }
    lVar4 = _GetImageBase();
    lVar6 = (longlong)iVar2 * 8;
    iVar2 = *(int *)((int)param_3->dispUnwindMap + lVar6 + lVar4);
    lVar4 = _GetImageBase();
    if (*(int *)((int)param_3->dispUnwindMap + lVar6 + 4 + lVar4) == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = _GetImageBase();
      lVar4 = _GetImageBase();
      lVar4 = lVar4 + *(int *)((int)param_3->dispUnwindMap + lVar6 + 4 + lVar5);
    }
    if (lVar4 != 0) {
      __FrameHandler3::SetState(param_1,param_3,iVar2);
      lVar4 = _GetImageBase();
      if (*(int *)((int)param_3->dispUnwindMap + lVar6 + 4 + lVar4) != 0) {
        _GetImageBase();
        _GetImageBase();
      }
      _CallSettingFrame();
      FUN_140003d30(uVar3);
    }
  } while( true );
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetHandlerSearchState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetHandlerSearchState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;
  
  iVar1 = FUN_140004614(param_3,param_2);
  GetEstablisherFrame(param_1,param_2,param_3,&local_res20);
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}




undefined1 FUN_1400059c4(longlong param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  if (param_2 == (int *)0x0) {
    FUN_140007c74();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  uVar3 = 0;
  iVar8 = 0;
  if (0 < *param_2) {
    do {
      lVar4 = _GetThrowImageBase();
      piVar9 = (int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc) + 4 + lVar4);
      lVar4 = _GetThrowImageBase();
      iVar7 = *(int *)(lVar4 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
      if (0 < iVar7) {
        do {
          lVar4 = _GetThrowImageBase();
          iVar1 = *piVar9;
          lVar5 = _GetImageBase();
          uVar6 = TypeMatchHelper<>((byte *)((longlong)param_2[1] + (longlong)iVar8 * 0x14 + lVar5),
                                    (byte *)(lVar4 + iVar1),*(byte **)(param_1 + 0x30));
          if ((int)uVar6 != 0) {
            uVar3 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
        } while (0 < iVar7);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *param_2);
  }
  return uVar3;
}




/* Library Function - Single Match
    unsigned char __cdecl Is_bad_exception_allowed(struct _s_ESTypeList const * __ptr64)
   
   Library: Visual Studio 2017 Release */

uchar __cdecl Is_bad_exception_allowed(_s_ESTypeList *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)param_1) {
    lVar5 = 0;
    do {
      lVar2 = _GetImageBase();
      if (*(int *)(*(int *)(param_1 + 4) + lVar5 + 4 + lVar2) == 0) {
        lVar2 = 0;
      }
      else {
        lVar3 = _GetImageBase();
        lVar2 = _GetImageBase();
        lVar2 = lVar2 + *(int *)(*(int *)(param_1 + 4) + lVar5 + 4 + lVar3);
      }
      uVar1 = __std_type_info_compare(lVar2 + 8,0x140019918);
      if (uVar1 == 0) {
        return '\x01';
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar4 < *(int *)param_1);
  }
  return '\0';
}




void FUN_140005b30(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140005b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}




/* Library Function - Single Match
    void __cdecl _CallMemberFunction2(void * __ptr64 const,void * __ptr64 const,void * __ptr64
   const,int)
   
   Library: Visual Studio 2017 Release */

void __cdecl _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000140005b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2)(param_1,param_3,param_4);
  return;
}




char * FUN_140005b4c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* Library Function - Single Match
    __vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

undefined8 __vcrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __vcrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_14001a010 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_14001a038 = DAT_14001a038 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14001a038;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_14001a010 + uVar1 * 0x28));
    DAT_14001a038 = DAT_14001a038 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    void * __ptr64 __cdecl try_get_function(enum `anonymous namespace'::function_id,char const *
   __ptr64 const,enum A0x14c33c87::module_id const * __ptr64 const,enum A0x14c33c87::module_id const
   * __ptr64 const)
   
   Library: Visual Studio 2017 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  longlong lVar1;
  module_id mVar2;
  wchar_t *lpLibFileName;
  byte bVar3;
  DWORD DVar4;
  int iVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  void *pvVar7;
  
  bVar3 = (byte)DAT_140019010 & 0x3f;
  pvVar7 = (void *)((DAT_140019010 ^ (&DAT_14001a058)[param_1]) >> bVar3 |
                   (DAT_140019010 ^ (&DAT_14001a058)[param_1]) << 0x40 - bVar3);
  if (pvVar7 != (void *)0xffffffffffffffff) {
    if (pvVar7 != (void *)0x0) {
      return pvVar7;
    }
    if (param_3 != param_4) {
      do {
        mVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_14001a040)[mVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_14000f3f8)[mVar2];
          hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
          if (hLibModule == (HMODULE)0x0) {
            DVar4 = GetLastError();
            if (((DVar4 == 0x57) && (iVar5 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar5 != 0)) &&
               (iVar5 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar5 != 0)) {
              hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
            }
            else {
              hLibModule = (HMODULE)0x0;
            }
          }
          if (hLibModule != (HMODULE)0x0) {
            LOCK();
            lVar1 = (&DAT_14001a040)[mVar2];
            (&DAT_14001a040)[mVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_140005d12;
          }
          LOCK();
          (&DAT_14001a040)[mVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_140005d12:
          if (hLibModule != (HMODULE)0x0) goto LAB_140005d2d;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hLibModule = (HMODULE)0x0;
LAB_140005d2d:
    if ((hLibModule != (HMODULE)0x0) &&
       (pFVar6 = GetProcAddress(hLibModule,param_2), pFVar6 != (FARPROC)0x0)) {
      bVar3 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
      LOCK();
      (&DAT_14001a058)[param_1] =
           ((ulonglong)pFVar6 >> bVar3 | (longlong)pFVar6 << 0x40 - bVar3) ^ DAT_140019010;
      UNLOCK();
      return pFVar6;
    }
    bVar3 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_14001a058)[param_1] = (0xffffffffffffffffU >> bVar3 | -1L << 0x40 - bVar3) ^ DAT_140019010
    ;
    UNLOCK();
  }
  return (void *)0x0;
}




/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(0,"FlsAlloc",(module_id *)&DAT_14000f4c8,(module_id *)"FlsAlloc");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140005df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsAlloc();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}




/* Library Function - Single Match
    __vcrt_FlsFree
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsFree(DWORD param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(1,"FlsFree",(module_id *)&DAT_14000f4e0,(module_id *)"FlsFree");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140005e3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsFree(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsGetValue(DWORD param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(2,"FlsGetValue",(module_id *)&DAT_14000f4f0,
                                (module_id *)"FlsGetValue");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140005e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsGetValue(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(3,"FlsSetValue",(module_id *)&DAT_14000f508,
                                    (module_id *)"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*pcVar1)();
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(4,"InitializeCriticalSectionEx",(module_id *)&DAT_14000f520,
                                    (module_id *)"InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}




/* Library Function - Single Match
    __vcrt_initialize_winapi_thunks
   
   Library: Visual Studio 2017 Release */

void __vcrt_initialize_winapi_thunks(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_140019010;
  puVar3 = &DAT_14001a058;
  for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  return;
}




/* Library Function - Single Match
    __vcrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __vcrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_14001a040;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_14001a058);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140005fb8(void)

{
  _DAT_14001a080 = DAT_140019010;
  return;
}




void FUN_140005fe0(void)

{
  return;
}




void FUN_140006010(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x000140006027) */
/* WARNING: Removing unreachable block (ram,0x00014000603d) */
/* WARNING: Removing unreachable block (ram,0x000140006043) */
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  return;
}




/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_140005fe0();
  (*pcVar1)();
  FUN_140006010();
  FUN_140005fe0();
  return;
}




/* Library Function - Single Match
    __std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char *_Dst;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(*param_1 + lVar2 + 1) != '\0');
    _Dst = (char *)_malloc_base(lVar2 + 2);
    if (_Dst != (char *)0x0) {
      strcpy_s(_Dst,lVar2 + 2,(char *)*param_1);
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = (longlong)_Dst;
      _Dst = (char *)0x0;
    }
    _free_base(_Dst);
  }
  return;
}




/* Library Function - Single Match
    __std_exception_destroy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_destroy(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    _free_base((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400061b0(longlong *param_1,byte *param_2)

{
  PVOID local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  byte *local_18;
  PVOID pvStack_10;
  
  local_28 = 0x19930520;
  uStack_24 = 0;
  plStack_20 = (longlong *)0x0;
  local_18 = (byte *)0x0;
  pvStack_10 = (PVOID)0x0;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (**(code **)(*(longlong *)(*param_1 + -8) + 0x40))();
  }
  plStack_20 = param_1;
  local_18 = param_2;
  local_res8 = RtlPcToFileHeader(param_2,&local_res8);
  if ((param_2 != (byte *)0x0) && (((*param_2 & 8) != 0 || (local_res8 == (PVOID)0x0)))) {
    local_28 = 0x1994000;
  }
  pvStack_10 = local_res8;
  RaiseException(0xe06d7363,1,4,(ULONG_PTR *)&local_28);
  return;
}




void FUN_140006280(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *in_R10;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *in_R10;
    in_R10 = in_R10 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




undefined8 * FUN_1400062a0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  switch(param_3) {
  case 0:
    return param_1;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return param_1;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return param_1;
  case 3:
    uVar5 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar5;
    return param_1;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return param_1;
  case 5:
    uVar5 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar5;
    return param_1;
  case 6:
    uVar6 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar6;
    return param_1;
  case 7:
    uVar6 = *(undefined2 *)((longlong)param_2 + 4);
    uVar5 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar6;
    *(undefined1 *)((longlong)param_1 + 6) = uVar5;
    return param_1;
  case 8:
    *param_1 = *param_2;
    return param_1;
  case 9:
    uVar5 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar5;
    return param_1;
  case 10:
    uVar6 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar6;
    return param_1;
  case 0xb:
    uVar6 = *(undefined2 *)(param_2 + 1);
    uVar5 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar6;
    *(undefined1 *)((longlong)param_1 + 10) = uVar5;
    return param_1;
  case 0xc:
    uVar19 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar19;
    return param_1;
  case 0xd:
    uVar19 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar19;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar5;
    return param_1;
  case 0xe:
    uVar19 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar19;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar6;
    return param_1;
  case 0xf:
    uVar19 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar5 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar19;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar6;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar5;
    return param_1;
  case 0x10:
    uVar15 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar15;
    return param_1;
  }
  if (0x20 < param_3) {
    lVar12 = (longlong)param_2 - (longlong)param_1;
    if ((param_2 < param_1) && (param_1 < (undefined8 *)(param_3 + (longlong)param_2))) {
      puVar10 = (undefined8 *)((longlong)param_1 + lVar12 + (param_3 - 0x10));
      uVar15 = *puVar10;
      uVar17 = puVar10[1];
      puVar11 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
      uVar13 = param_3 - 0x10;
      puVar10 = puVar11;
      uVar16 = uVar15;
      uVar18 = uVar17;
      if (((ulonglong)puVar11 & 0xf) != 0) {
        puVar10 = (undefined8 *)((ulonglong)puVar11 & 0xfffffffffffffff0);
        uVar16 = *(undefined8 *)((longlong)puVar10 + lVar12);
        uVar18 = ((undefined8 *)((longlong)puVar10 + lVar12))[1];
        *puVar11 = uVar15;
        *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar17;
        uVar13 = (longlong)puVar10 - (longlong)param_1;
      }
      uVar14 = uVar13 >> 7;
      if (uVar14 != 0) {
        *puVar10 = uVar16;
        puVar10[1] = uVar18;
        puVar11 = puVar10;
        while( true ) {
          puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x10);
          uVar15 = puVar3[1];
          puVar10 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x20);
          uVar17 = *puVar10;
          uVar16 = puVar10[1];
          puVar10 = puVar11 + -0x10;
          puVar11[-2] = *puVar3;
          puVar11[-1] = uVar15;
          puVar11[-4] = uVar17;
          puVar11[-3] = uVar16;
          puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x30);
          uVar15 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x40);
          uVar17 = *puVar4;
          uVar16 = puVar4[1];
          uVar14 = uVar14 - 1;
          puVar11[-6] = *puVar3;
          puVar11[-5] = uVar15;
          puVar11[-8] = uVar17;
          puVar11[-7] = uVar16;
          puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x50);
          uVar15 = puVar3[1];
          puVar4 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x60);
          uVar17 = *puVar4;
          uVar16 = puVar4[1];
          puVar11[-10] = *puVar3;
          puVar11[-9] = uVar15;
          puVar11[-0xc] = uVar17;
          puVar11[-0xb] = uVar16;
          puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + -0x70);
          uVar15 = *puVar3;
          uVar17 = puVar3[1];
          uVar16 = *(undefined8 *)((longlong)puVar10 + lVar12);
          uVar18 = ((undefined8 *)((longlong)puVar10 + lVar12))[1];
          if (uVar14 == 0) break;
          puVar11[-0xe] = uVar15;
          puVar11[-0xd] = uVar17;
          *puVar10 = uVar16;
          puVar11[-0xf] = uVar18;
          puVar11 = puVar10;
        }
        puVar11[-0xe] = uVar15;
        puVar11[-0xd] = uVar17;
        uVar13 = uVar13 & 0x7f;
      }
      for (uVar14 = uVar13 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar10 = uVar16;
        puVar10[1] = uVar18;
        puVar10 = puVar10 + -2;
        uVar16 = *(undefined8 *)((longlong)puVar10 + lVar12);
        uVar18 = ((undefined8 *)((longlong)puVar10 + lVar12))[1];
      }
      if ((uVar13 & 0xf) != 0) {
        uVar15 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar15;
      }
      *puVar10 = uVar16;
      puVar10[1] = uVar18;
      return param_1;
    }
    if (param_3 < 0x81) {
      puVar1 = (undefined4 *)((longlong)param_1 + lVar12);
      uVar19 = *puVar1;
      uVar20 = puVar1[1];
      uVar21 = puVar1[2];
      uVar22 = puVar1[3];
      puVar10 = param_1 + 2;
      uVar13 = param_3 - 0x10;
    }
    else {
      if ((DAT_140019f40 >> 1 & 1) != 0) {
        puVar10 = (undefined8 *)FUN_140006280((undefined1 *)param_1,lVar12,param_3);
        return puVar10;
      }
      puVar1 = (undefined4 *)((longlong)param_1 + lVar12);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar11 = param_1 + 2;
      uVar19 = *puVar1;
      uVar20 = uVar7;
      uVar21 = uVar8;
      uVar22 = uVar9;
      if (((ulonglong)param_1 & 0xf) != 0) {
        puVar2 = (undefined4 *)(((ulonglong)puVar11 & 0xfffffffffffffff0) + lVar12);
        uVar19 = *puVar2;
        uVar20 = puVar2[1];
        uVar21 = puVar2[2];
        uVar22 = puVar2[3];
        puVar11 = (undefined8 *)(((ulonglong)puVar11 & 0xfffffffffffffff0) + 0x10);
        *(undefined4 *)param_1 = *puVar1;
        *(undefined4 *)((longlong)param_1 + 4) = uVar7;
        *(undefined4 *)(param_1 + 1) = uVar8;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
      }
      uVar13 = (longlong)param_1 + (param_3 - (longlong)puVar11);
      uVar14 = uVar13 >> 7;
      puVar10 = puVar11;
      if (uVar14 != 0) {
        *(undefined4 *)(puVar11 + -2) = uVar19;
        *(undefined4 *)((longlong)puVar11 + -0xc) = uVar20;
        *(undefined4 *)(puVar11 + -1) = uVar21;
        *(undefined4 *)((longlong)puVar11 + -4) = uVar22;
        if (DAT_140019020 < uVar14) {
          while( true ) {
            uVar15 = ((undefined8 *)((longlong)puVar11 + lVar12))[1];
            puVar10 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x10);
            uVar17 = *puVar10;
            uVar16 = puVar10[1];
            puVar10 = puVar11 + 0x10;
            *puVar11 = *(undefined8 *)((longlong)puVar11 + lVar12);
            puVar11[1] = uVar15;
            puVar11[2] = uVar17;
            puVar11[3] = uVar16;
            puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x20);
            uVar15 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x30);
            uVar17 = *puVar4;
            uVar16 = puVar4[1];
            uVar14 = uVar14 - 1;
            puVar11[4] = *puVar3;
            puVar11[5] = uVar15;
            puVar11[6] = uVar17;
            puVar11[7] = uVar16;
            puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x40);
            uVar15 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x50);
            uVar17 = *puVar4;
            uVar16 = puVar4[1];
            puVar11[8] = *puVar3;
            puVar11[9] = uVar15;
            puVar11[10] = uVar17;
            puVar11[0xb] = uVar16;
            puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x60);
            uVar15 = *puVar3;
            uVar17 = puVar3[1];
            puVar1 = (undefined4 *)((longlong)puVar11 + lVar12 + 0x70);
            uVar19 = *puVar1;
            uVar20 = puVar1[1];
            uVar21 = puVar1[2];
            uVar22 = puVar1[3];
            if (uVar14 == 0) break;
            puVar11[0xc] = uVar15;
            puVar11[0xd] = uVar17;
            *(undefined4 *)(puVar11 + 0xe) = uVar19;
            *(undefined4 *)((longlong)puVar11 + 0x74) = uVar20;
            *(undefined4 *)(puVar11 + 0xf) = uVar21;
            *(undefined4 *)((longlong)puVar11 + 0x7c) = uVar22;
            puVar11 = puVar10;
          }
        }
        else {
          while( true ) {
            uVar15 = ((undefined8 *)((longlong)puVar11 + lVar12))[1];
            puVar10 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x10);
            uVar17 = *puVar10;
            uVar16 = puVar10[1];
            puVar10 = puVar11 + 0x10;
            *puVar11 = *(undefined8 *)((longlong)puVar11 + lVar12);
            puVar11[1] = uVar15;
            puVar11[2] = uVar17;
            puVar11[3] = uVar16;
            puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x20);
            uVar15 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x30);
            uVar17 = *puVar4;
            uVar16 = puVar4[1];
            uVar14 = uVar14 - 1;
            puVar11[4] = *puVar3;
            puVar11[5] = uVar15;
            puVar11[6] = uVar17;
            puVar11[7] = uVar16;
            puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x40);
            uVar15 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x50);
            uVar17 = *puVar4;
            uVar16 = puVar4[1];
            puVar11[8] = *puVar3;
            puVar11[9] = uVar15;
            puVar11[10] = uVar17;
            puVar11[0xb] = uVar16;
            puVar3 = (undefined8 *)((longlong)puVar11 + lVar12 + 0x60);
            uVar15 = *puVar3;
            uVar17 = puVar3[1];
            puVar1 = (undefined4 *)((longlong)puVar11 + lVar12 + 0x70);
            uVar19 = *puVar1;
            uVar20 = puVar1[1];
            uVar21 = puVar1[2];
            uVar22 = puVar1[3];
            if (uVar14 == 0) break;
            puVar11[0xc] = uVar15;
            puVar11[0xd] = uVar17;
            *(undefined4 *)(puVar11 + 0xe) = uVar19;
            *(undefined4 *)((longlong)puVar11 + 0x74) = uVar20;
            *(undefined4 *)(puVar11 + 0xf) = uVar21;
            *(undefined4 *)((longlong)puVar11 + 0x7c) = uVar22;
            puVar11 = puVar10;
          }
        }
        puVar10[-4] = uVar15;
        puVar10[-3] = uVar17;
        uVar13 = uVar13 & 0x7f;
      }
    }
    for (uVar14 = uVar13 >> 4; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)(puVar10 + -2) = uVar19;
      *(undefined4 *)((longlong)puVar10 + -0xc) = uVar20;
      *(undefined4 *)(puVar10 + -1) = uVar21;
      *(undefined4 *)((longlong)puVar10 + -4) = uVar22;
      puVar1 = (undefined4 *)((longlong)puVar10 + lVar12);
      uVar19 = *puVar1;
      uVar20 = puVar1[1];
      uVar21 = puVar1[2];
      uVar22 = puVar1[3];
      puVar10 = puVar10 + 2;
    }
    uVar13 = uVar13 & 0xf;
    if (uVar13 != 0) {
      puVar11 = (undefined8 *)((longlong)puVar10 + lVar12 + (uVar13 - 0x10));
      uVar15 = puVar11[1];
      *(undefined8 *)((longlong)puVar10 + (uVar13 - 0x10)) = *puVar11;
      *(undefined8 *)((longlong)puVar10 + (uVar13 - 8)) = uVar15;
    }
    *(undefined4 *)(puVar10 + -2) = uVar19;
    *(undefined4 *)((longlong)puVar10 + -0xc) = uVar20;
    *(undefined4 *)(puVar10 + -1) = uVar21;
    *(undefined4 *)((longlong)puVar10 + -4) = uVar22;
    return param_1;
  }
  uVar15 = param_2[1];
  puVar10 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
  uVar17 = *puVar10;
  uVar16 = puVar10[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  puVar10 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  *puVar10 = uVar17;
  puVar10[1] = uVar16;
  return param_1;
}




/* Library Function - Single Match
    wcscat_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  longlong lVar5;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src == (wchar_t *)0x0) {
      *_Dst = L'\0';
    }
    else {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        lVar5 = (longlong)_Src - (longlong)pwVar3;
        do {
          wVar1 = *(wchar_t *)(lVar5 + (longlong)pwVar3);
          *pwVar3 = wVar1;
          pwVar3 = pwVar3 + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        puVar2 = __doserrno();
        uVar4 = 0x22;
        goto LAB_1400066ef;
      }
      *_Dst = L'\0';
    }
  }
  puVar2 = __doserrno();
  uVar4 = 0x16;
LAB_1400066ef:
  *puVar2 = uVar4;
  FUN_14000803c();
  return uVar4;
}




/* Library Function - Single Match
    wcscpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  ulong *puVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar4 = _Dst;
      do {
        wVar1 = *(wchar_t *)(((longlong)_Src - (longlong)_Dst) + (longlong)pwVar4);
        *pwVar4 = wVar1;
        pwVar4 = pwVar4 + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      puVar2 = __doserrno();
      uVar3 = 0x22;
      goto LAB_14000676c;
    }
    *_Dst = L'\0';
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_14000676c:
  *puVar2 = uVar3;
  FUN_14000803c();
  return uVar3;
}




/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  this[0x18] = (_LocaleUpdate)0x0;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar3 = PTR_PTR_DAT_1400191b8._0_4_;
    uVar4 = PTR_PTR_DAT_1400191b8._4_4_;
    uVar5 = PTR_DAT_1400191c0._0_4_;
    uVar6 = PTR_DAT_1400191c0._4_4_;
    if (DAT_14001a384 != 0) {
      p_Var2 = __acrt_getptd();
      *(__acrt_ptd **)this = p_Var2;
      *(longlong *)(this + 8) = *(longlong *)(p_Var2 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(p_Var2 + 0x88);
      __acrt_update_locale_info((longlong)p_Var2,(longlong *)(this + 8));
      __acrt_update_multibyte_info(*(longlong *)this,(longlong *)(this + 0x10));
      uVar1 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar1 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar1 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar3 = *(undefined4 *)param_1;
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar5 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar6;
  return this;
}




int FUN_140006840(wint_t *param_1,wint_t *param_2)

{
  int iVar1;
  ulong *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if (DAT_14001a384 == 0) {
    if ((param_1 != (wint_t *)0x0) && (param_2 != (wint_t *)0x0)) {
      lVar5 = (longlong)param_1 - (longlong)param_2;
      do {
        uVar4 = *(ushort *)(lVar5 + (longlong)param_2);
        if ((ushort)(uVar4 - 0x41) < 0x1a) {
          uVar4 = uVar4 + 0x20;
        }
        uVar3 = *param_2;
        if ((ushort)(uVar3 - 0x41) < 0x1a) {
          uVar3 = uVar3 + 0x20;
        }
        param_2 = param_2 + 1;
      } while ((uVar4 != 0) && (uVar4 == uVar3));
      return (uint)uVar4 - (uint)uVar3;
    }
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_14000803c();
    return 0x7fffffff;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  if ((param_1 == (wint_t *)0x0) || (param_2 == (wint_t *)0x0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_14000803c();
    iVar1 = 0x7fffffff;
  }
  else {
    if ((local_20.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      lVar5 = (longlong)param_1 - (longlong)param_2;
      do {
        uVar4 = *(ushort *)(lVar5 + (longlong)param_2);
        if ((ushort)(uVar4 - 0x41) < 0x1a) {
          uVar4 = uVar4 + 0x20;
        }
        uVar3 = *param_2;
        if ((ushort)(uVar3 - 0x41) < 0x1a) {
          uVar3 = uVar3 + 0x20;
        }
        param_2 = param_2 + 1;
      } while ((uVar4 != 0) && (uVar4 == uVar3));
    }
    else {
      do {
        uVar4 = _towlower_l(*param_1,&local_20);
        param_1 = param_1 + 1;
        uVar3 = _towlower_l(*param_2,&local_20);
        param_2 = param_2 + 1;
        if (uVar4 == 0) break;
      } while (uVar4 == uVar3);
    }
    iVar1 = (uint)uVar4 - (uint)uVar3;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar1;
}




/* Library Function - Single Match
    _seh_filter_exe
   
   Library: Visual Studio 2015 Release */

undefined4 _seh_filter_exe(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  __acrt_ptd *p_Var6;
  int *piVar7;
  int *piVar8;
  
  p_Var6 = __acrt_getptd_noexit();
  if (p_Var6 != (__acrt_ptd *)0x0) {
    piVar3 = *(int **)p_Var6;
    for (piVar8 = piVar3;
        (piVar7 = (int *)0x0, piVar8 != piVar3 + 0x30 && (piVar7 = piVar8, *piVar8 != param_1));
        piVar8 = piVar8 + 4) {
    }
    if ((piVar7 != (int *)0x0) && (pcVar4 = *(code **)(piVar7 + 2), pcVar4 != (code *)0x0)) {
      if (pcVar4 == (code *)0x5) {
        piVar7[2] = 0;
        piVar7[3] = 0;
        return 1;
      }
      if (pcVar4 != (code *)0x1) {
        uVar5 = *(undefined8 *)(p_Var6 + 8);
        *(undefined8 *)(p_Var6 + 8) = param_2;
        iVar1 = piVar7[1];
        if (iVar1 == 8) {
          for (piVar8 = piVar3 + 0xc; piVar8 != piVar3 + 0x30; piVar8 = piVar8 + 4) {
            piVar8[2] = 0;
            piVar8[3] = 0;
          }
          uVar2 = *(undefined4 *)(p_Var6 + 0x10);
          if (*piVar7 == -0x3fffff73) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x82;
          }
          else if (*piVar7 == -0x3fffff72) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x83;
          }
          else if (*piVar7 == -0x3fffff71) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x86;
          }
          else if (*piVar7 == -0x3fffff70) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x81;
          }
          else if (*piVar7 == -0x3fffff6f) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x84;
          }
          else if (*piVar7 == -0x3fffff6e) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x8a;
          }
          else if (*piVar7 == -0x3fffff6d) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x85;
          }
          else if (*piVar7 == -0x3ffffd4c) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x8e;
          }
          else if (*piVar7 == -0x3ffffd4b) {
            *(undefined4 *)(p_Var6 + 0x10) = 0x8d;
          }
          _guard_check_icall();
          (*pcVar4)(8,*(undefined4 *)(p_Var6 + 0x10));
          *(undefined4 *)(p_Var6 + 0x10) = uVar2;
        }
        else {
          piVar7[2] = 0;
          piVar7[3] = 0;
          _guard_check_icall();
          (*pcVar4)(iVar1);
        }
        *(undefined8 *)(p_Var6 + 8) = uVar5;
      }
      return 0xffffffff;
    }
  }
  return 0;
}




bool FUN_140006b48(int param_1)

{
  return param_1 == -0x1f928c9d;
}




/* Library Function - Single Match
    void __cdecl common_exit(int,enum _crt_exit_cleanup_mode,enum _crt_exit_return_mode)
   
   Library: Visual Studio 2015 Release */

void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  HMODULE pHVar4;
  int *piVar5;
  undefined *puVar6;
  ulonglong uVar7;
  
  if ((((param_3 == 0) && (pHVar4 = GetModuleHandleW((LPCWSTR)0x0), pHVar4 != (HMODULE)0x0)) &&
      ((short)pHVar4->unused == 0x5a4d)) &&
     (((piVar5 = (int *)((longlong)&pHVar4->unused + (longlong)pHVar4[0xf].unused),
       *piVar5 == 0x4550 && ((short)piVar5[6] == 0x20b)) &&
      ((0xe < (uint)piVar5[0x21] && (piVar5[0x3e] != 0)))))) {
    try_cor_exit_process(param_1);
  }
  __acrt_lock(2);
  if (DAT_14001a100 != '\0') goto LAB_140006c8e;
  LOCK();
  DAT_14001a0f0 = 1;
  UNLOCK();
  if (param_2 == 0) {
    bVar3 = (byte)DAT_140019010 & 0x3f;
    bVar2 = 0x40 - bVar3 & 0x3f;
    if (DAT_14001a0f8 != (((ulonglong)(0 >> bVar2) | 0L << 0x40 - bVar2) ^ DAT_140019010)) {
      uVar7 = DAT_140019010 ^ DAT_14001a0f8;
      _guard_check_icall();
      (*(code *)(uVar7 >> bVar3 | uVar7 << 0x40 - bVar3))(0,0,0);
    }
    puVar6 = &DAT_14001a340;
LAB_140006c43:
    _execute_onexit_table(puVar6);
  }
  else if (param_2 == 1) {
    puVar6 = &DAT_14001a358;
    goto LAB_140006c43;
  }
  if (param_2 == 0) {
    _initterm((undefined8 *)&DAT_14000f2b0,(undefined8 *)&DAT_14000f2d0);
  }
  _initterm((undefined8 *)&DAT_14000f2d8,(undefined8 *)&DAT_14000f2e0);
  if (param_3 == 0) {
    DAT_14001a100 = '\x01';
  }
LAB_140006c8e:
  __acrt_unlock(2);
  if (param_3 != 0) {
    return;
  }
  exit_or_terminate_process(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    void __cdecl exit_or_terminate_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl exit_or_terminate_process(uint param_1)

{
  bool bVar1;
  HANDLE hProcess;
  
  bVar1 = __acrt_is_packaged_app();
  if ((bVar1) && ((*(uint *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8 & 1) == 0)) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  try_cor_exit_process(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




/* Library Function - Single Match
    void __cdecl try_cor_exit_process(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl try_cor_exit_process(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if (BVar1 != 0) {
    pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess");
    if (pFVar2 != (FARPROC)0x0) {
      _guard_check_icall();
      (*pFVar2)((ulonglong)param_1);
    }
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}




void FUN_140006d78(undefined8 param_1)

{
  DAT_14001a0f8 = param_1;
  return;
}




/* Library Function - Single Match
    _cexit
   
   Library: Visual Studio 2015 Release */

void __cdecl _cexit(void)

{
  common_exit(0,0,1);
  return;
}




void FUN_140006da0(int param_1)

{
  common_exit(param_1,2,0);
  return;
}




/* Library Function - Single Match
    _register_thread_local_exe_atexit_callback
   
   Library: Visual Studio 2015 Release */

void _register_thread_local_exe_atexit_callback(ulonglong param_1)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  
  bVar3 = 0x40 - ((byte)DAT_140019010 & 0x3f);
  bVar2 = bVar3 & 0x3f;
  if (DAT_14001a0f8 == (((ulonglong)(0 >> bVar2) | 0L << 0x40 - bVar2) ^ DAT_140019010)) {
    bVar3 = bVar3 & 0x3f;
    DAT_14001a0f8 = (param_1 >> bVar3 | param_1 << 0x40 - bVar3) ^ DAT_140019010;
    return;
  }
  FUN_140007c74();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_140006df0(int param_1)

{
  common_exit(param_1,0,0);
  return;
}




/* Library Function - Single Match
    void __cdecl parse_command_line<wchar_t>(wchar_t * __ptr64,wchar_t * __ptr64 * __ptr64,wchar_t *
   __ptr64,unsigned __int64 * __ptr64,unsigned __int64 * __ptr64)
   
   Library: Visual Studio 2015 Release */

void __cdecl
parse_command_line<wchar_t>
          (wchar_t *param_1,wchar_t **param_2,wchar_t *param_3,__uint64 *param_4,__uint64 *param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  wchar_t wVar4;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    wVar4 = L'\"';
    if (*param_1 == L'\"') {
      bVar1 = !bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (wchar_t *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      wVar4 = *param_1;
      if (wVar4 == L'\0') goto LAB_140006e91;
    }
    param_1 = param_1 + 1;
  } while ((bVar1) || ((wVar4 != L' ' && (wVar4 != L'\t'))));
  if (param_3 != (wchar_t *)0x0) {
    param_3[-1] = L'\0';
  }
LAB_140006e91:
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
      uVar3 = 1;
      uVar2 = 0;
      for (; *param_1 == L'\\'; param_1 = param_1 + 1) {
        uVar2 = uVar2 + 1;
      }
      if (*param_1 == L'\"') {
        if ((uVar2 & 1) == 0) {
          if ((bVar1) && (param_1[1] == L'\"')) {
            param_1 = param_1 + 1;
          }
          else {
            bVar1 = !bVar1;
            uVar3 = 0;
          }
        }
        uVar2 = uVar2 >> 1;
      }
      while (uVar2 != 0) {
        uVar2 = uVar2 - 1;
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = L'\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      wVar4 = *param_1;
      if ((wVar4 == L'\0') || ((!bVar1 && ((wVar4 == L' ' || (wVar4 == L'\t')))))) break;
      if (uVar3 != 0) {
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = wVar4;
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
    __acrt_allocate_buffer_for_argv
   
   Library: Visual Studio 2015 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < param_1 * -8 - 1) {
      pvVar2 = _calloc_base(param_2 * param_3 + param_1 * 8,1);
      _free_base((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _configure_wide_argv
   
   Library: Visual Studio 2015 Release */

int _configure_wide_argv(int param_1)

{
  wchar_t **ppwVar1;
  __uint64 _Var2;
  int iVar3;
  ulong *puVar4;
  wchar_t **ppwVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t **local_res10;
  __uint64 local_res18;
  __uint64 local_res20;
  
  if (1 < param_1 - 1U) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_14000803c();
    return 0x16;
  }
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_14001a110,0x104);
  iVar7 = 0;
  _DAT_14001a7a0 = &DAT_14001a110;
  if ((DAT_14001a798 == (wchar_t *)0x0) || (pwVar6 = DAT_14001a798, *DAT_14001a798 == L'\0')) {
    pwVar6 = (wchar_t *)&DAT_14001a110;
  }
  local_res18 = 0;
  local_res20 = 0;
  parse_command_line<wchar_t>(pwVar6,(wchar_t **)0x0,(wchar_t *)0x0,&local_res18,&local_res20);
  _Var2 = local_res18;
  ppwVar5 = (wchar_t **)__acrt_allocate_buffer_for_argv(local_res18,local_res20,2);
  if (ppwVar5 == (wchar_t **)0x0) {
    puVar4 = __doserrno();
    iVar7 = 0xc;
    *puVar4 = 0xc;
  }
  else {
    parse_command_line<wchar_t>
              (pwVar6,ppwVar5,(wchar_t *)(ppwVar5 + _Var2),&local_res18,&local_res20);
    if (param_1 != 1) {
      local_res10 = (wchar_t **)0x0;
      iVar3 = common_expand_argv_wildcards<wchar_t>(ppwVar5,&local_res10);
      ppwVar1 = local_res10;
      if (iVar3 != 0) {
        _free_base(local_res10);
        local_res10 = (wchar_t **)0x0;
        _free_base(ppwVar5);
        return iVar3;
      }
      _DAT_14001a77c = 0;
      pwVar6 = *local_res10;
      while (pwVar6 != (wchar_t *)0x0) {
        local_res10 = local_res10 + 1;
        _DAT_14001a77c = _DAT_14001a77c + 1;
        pwVar6 = *local_res10;
      }
      local_res10 = (wchar_t **)0x0;
      DAT_14001a788 = ppwVar1;
      _free_base((LPVOID)0x0);
      local_res10 = (wchar_t **)0x0;
      goto LAB_140007151;
    }
    _DAT_14001a77c = (int)local_res18 + -1;
    DAT_14001a788 = ppwVar5;
  }
  ppwVar5 = (wchar_t **)0x0;
LAB_140007151:
  _free_base(ppwVar5);
  return iVar7;
}




/* Library Function - Single Match
    int __cdecl common_initialize_environment_nolock<wchar_t>(void)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_initialize_environment_nolock<wchar_t>(void)

{
  wchar_t **ppwVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t **ppwVar4;
  
  iVar2 = 0;
  if (DAT_14001a328 == (wchar_t **)0x0) {
    pwVar3 = (wchar_t *)__dcrt_get_wide_environment_from_os();
    if (pwVar3 == (wchar_t *)0x0) {
      iVar2 = -1;
    }
    else {
      ppwVar4 = create_environment<wchar_t>(pwVar3);
      ppwVar1 = ppwVar4;
      if (ppwVar4 == (wchar_t **)0x0) {
        iVar2 = -1;
        ppwVar4 = DAT_14001a328;
        ppwVar1 = DAT_14001a330;
      }
      DAT_14001a330 = ppwVar1;
      DAT_14001a328 = ppwVar4;
      _free_base((LPVOID)0x0);
    }
    _free_base(pwVar3);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}




/* Library Function - Single Match
    wchar_t * __ptr64 * __ptr64 __cdecl create_environment<wchar_t>(wchar_t * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

wchar_t ** __cdecl create_environment<wchar_t>(wchar_t *param_1)

{
  errno_t eVar1;
  longlong lVar2;
  wchar_t **ppwVar3;
  wchar_t *pwVar4;
  wchar_t **ppwVar5;
  longlong lVar6;
  ulonglong _SizeInWords;
  wchar_t **ppwVar7;
  wchar_t **ppwVar8;
  
  ppwVar7 = (wchar_t **)0x0;
  ppwVar5 = ppwVar7;
  for (pwVar4 = param_1; *pwVar4 != L'\0'; pwVar4 = pwVar4 + lVar2 + 2) {
    if (*pwVar4 != L'=') {
      ppwVar5 = (wchar_t **)((longlong)ppwVar5 + 1);
    }
    lVar6 = -1;
    do {
      lVar2 = lVar6;
      lVar6 = lVar2 + 1;
    } while (pwVar4[lVar6] != L'\0');
  }
  ppwVar3 = (wchar_t **)_calloc_base((longlong)ppwVar5 + 1,8);
  ppwVar5 = ppwVar7;
  ppwVar8 = ppwVar3;
  if (ppwVar3 != (wchar_t **)0x0) {
    for (; ppwVar5 = ppwVar3, *param_1 != L'\0'; param_1 = param_1 + _SizeInWords) {
      lVar6 = -1;
      do {
        lVar2 = lVar6;
        lVar6 = lVar2 + 1;
      } while (param_1[lVar6] != L'\0');
      _SizeInWords = lVar2 + 2;
      if (*param_1 != L'=') {
        pwVar4 = (wchar_t *)_calloc_base(_SizeInWords,2);
        if (pwVar4 == (wchar_t *)0x0) {
          free_environment<wchar_t>(ppwVar3);
          _free_base((LPVOID)0x0);
          ppwVar5 = ppwVar7;
          break;
        }
        eVar1 = wcscpy_s(pwVar4,_SizeInWords,param_1);
        if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *ppwVar8 = pwVar4;
        ppwVar8 = ppwVar8 + 1;
        _free_base((LPVOID)0x0);
      }
    }
  }
  _free_base((LPVOID)0x0);
  return ppwVar5;
}




/* Library Function - Single Match
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

void __cdecl free_environment<wchar_t>(wchar_t **param_1)

{
  wchar_t *pwVar1;
  wchar_t **ppwVar2;
  
  if (param_1 != (wchar_t **)0x0) {
    pwVar1 = *param_1;
    ppwVar2 = param_1;
    while (pwVar1 != (wchar_t *)0x0) {
      _free_base(pwVar1);
      ppwVar2 = ppwVar2 + 1;
      pwVar1 = *ppwVar2;
    }
    _free_base(param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((wchar_t **)*param_1 != DAT_14001a338) {
    free_environment<wchar_t>((wchar_t **)*param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((wchar_t **)*param_1 != DAT_14001a330) {
    free_environment<wchar_t>((wchar_t **)*param_1);
  }
  return;
}




/* Library Function - Single Match
    __dcrt_uninitialize_environments_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __dcrt_uninitialize_environments_nolock(void)

{
  uninitialize_environment_internal<>((undefined8 *)&DAT_14001a320);
  uninitialize_environment_internal<>(&DAT_14001a328);
  free_environment<wchar_t>(DAT_14001a338);
  free_environment<wchar_t>(DAT_14001a330);
  return;
}




/* Library Function - Single Match
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class_<lambda_4e60a939b0d047cfe11ddc22648dfba9>&___ptr64,class_<lambda_332c3edc96d0294ec56c57d38c1cdfd5>_>
          (__crt_seh_guarded_call<int> *this,<lambda_b8c45f8f788dd370798f47cfe8ac3a86> *param_1,
          <lambda_4e60a939b0d047cfe11ddc22648dfba9> *param_2,
          <lambda_332c3edc96d0294ec56c57d38c1cdfd5> *param_3)

{
  int iVar1;
  
  __acrt_lock(*(int *)param_1);
  iVar1 = <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(param_2);
  __acrt_unlock(*(int *)param_3);
  return iVar1;
}




/* Library Function - Single Match
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_e24bbb7b643b32fcea6fa61b31d4c984>,class <lambda_275893d493268fdec8709772e3fcec0e> &
   __ptr64,class <lambda_9d71df4d7cf3f480f8d633942495c3b0> >(class
   <lambda_e24bbb7b643b32fcea6fa61b31d4c984> && __ptr64,class
   <lambda_275893d493268fdec8709772e3fcec0e> & __ptr64,class
   <lambda_9d71df4d7cf3f480f8d633942495c3b0> && __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_e24bbb7b643b32fcea6fa61b31d4c984>,class_<lambda_275893d493268fdec8709772e3fcec0e>&___ptr64,class_<lambda_9d71df4d7cf3f480f8d633942495c3b0>_>
          (__crt_seh_guarded_call<int> *this,<lambda_e24bbb7b643b32fcea6fa61b31d4c984> *param_1,
          <lambda_275893d493268fdec8709772e3fcec0e> *param_2,
          <lambda_9d71df4d7cf3f480f8d633942495c3b0> *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  sbyte sVar3;
  byte bVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  
  __acrt_lock(*(int *)param_1);
  puVar6 = (ulonglong *)**(longlong **)param_2;
  if (puVar6 == (ulonglong *)0x0) {
    iVar5 = -1;
  }
  else {
    uVar9 = (uint)DAT_140019010 & 0x3f;
    sVar3 = (sbyte)uVar9;
    puVar8 = (ulonglong *)
             ((DAT_140019010 ^ *puVar6) >> sVar3 | (DAT_140019010 ^ *puVar6) << 0x40 - sVar3);
    puVar6 = (ulonglong *)
             ((DAT_140019010 ^ puVar6[1]) >> sVar3 | (DAT_140019010 ^ puVar6[1]) << 0x40 - sVar3);
    puVar11 = puVar8;
    puVar12 = puVar6;
    if ((longlong)puVar8 - 1U < 0xfffffffffffffffe) {
      while( true ) {
        bVar4 = -(char)uVar9 & 0x3f;
        uVar1 = (0UL >> bVar4 | 0L << 0x40 - bVar4) ^ DAT_140019010;
        do {
          puVar6 = puVar6 + -1;
          if (puVar6 < puVar8) goto LAB_140007488;
        } while (*puVar6 == uVar1);
        if (puVar6 < puVar8) break;
        bVar4 = (byte)DAT_140019010 & 0x3f;
        uVar7 = DAT_140019010 ^ *puVar6;
        *puVar6 = uVar1;
        _guard_check_icall();
        (*(code *)(uVar7 >> bVar4 | uVar7 << 0x40 - bVar4))();
        uVar9 = (uint)DAT_140019010 & 0x3f;
        uVar1 = DAT_140019010 ^ *(ulonglong *)**(longlong **)param_2;
        sVar3 = (sbyte)uVar9;
        puVar10 = (ulonglong *)(uVar1 >> sVar3 | uVar1 << 0x40 - sVar3);
        uVar1 = ((ulonglong *)**(longlong **)param_2)[1] ^ DAT_140019010;
        puVar2 = (ulonglong *)(uVar1 >> sVar3 | uVar1 << 0x40 - sVar3);
        if ((puVar10 != puVar11) || (puVar2 != puVar12)) {
          puVar6 = puVar2;
          puVar8 = puVar10;
          puVar11 = puVar10;
          puVar12 = puVar2;
        }
      }
LAB_140007488:
      if (puVar8 != (ulonglong *)0xffffffffffffffff) {
        _free_base(puVar8);
      }
      bVar4 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
      uVar1 = (0UL >> bVar4 | 0L << 0x40 - bVar4) ^ DAT_140019010;
      *(ulonglong *)**(undefined8 **)param_2 = uVar1;
      *(ulonglong *)(**(longlong **)param_2 + 8) = uVar1;
      *(ulonglong *)(**(longlong **)param_2 + 0x10) = uVar1;
    }
    iVar5 = 0;
  }
  __acrt_unlock(*(int *)param_3);
  return iVar5;
}




/* Library Function - Single Match
    public: int __cdecl <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(void)const __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()
          (<lambda_4e60a939b0d047cfe11ddc22648dfba9> *this)

{
  int iVar1;
  LPVOID pvVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  
  uVar8 = 0;
  puVar5 = (ulonglong *)**(longlong **)this;
  if (puVar5 == (ulonglong *)0x0) {
LAB_14000759d:
    iVar1 = -1;
  }
  else {
    bVar3 = (byte)DAT_140019010 & 0x3f;
    pvVar7 = (LPVOID)((*puVar5 ^ DAT_140019010) >> bVar3 | (*puVar5 ^ DAT_140019010) << 0x40 - bVar3
                     );
    puVar11 = (ulonglong *)
              ((puVar5[1] ^ DAT_140019010) >> bVar3 | (puVar5[1] ^ DAT_140019010) << 0x40 - bVar3);
    puVar5 = (ulonglong *)
             ((puVar5[2] ^ DAT_140019010) >> bVar3 | (puVar5[2] ^ DAT_140019010) << 0x40 - bVar3);
    if (puVar11 == puVar5) {
      uVar6 = (longlong)puVar5 - (longlong)pvVar7 >> 3;
      uVar9 = uVar6;
      if (0x200 < uVar6) {
        uVar9 = 0x200;
      }
      uVar10 = uVar9 + uVar6;
      if (uVar9 + uVar6 == 0) {
        uVar10 = 0x20;
      }
      if (uVar10 < uVar6) {
LAB_140007624:
        uVar10 = uVar6 + 4;
        pvVar2 = _recalloc_base(pvVar7,uVar10,8);
        _free_base((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_14000759d;
      }
      else {
        pvVar2 = _recalloc_base(pvVar7,uVar10,8);
        _free_base((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_140007624;
      }
      pvVar7 = pvVar2;
      puVar11 = (ulonglong *)((longlong)pvVar7 + uVar6 * 8);
      puVar5 = (ulonglong *)((longlong)pvVar7 + uVar10 * 8);
      bVar3 = -((byte)DAT_140019010 & 0x3f) & 0x3f;
      uVar6 = (0UL >> bVar3 | 0L << 0x40 - bVar3) ^ DAT_140019010;
      uVar9 = (ulonglong)((longlong)puVar5 + (7 - (longlong)puVar11)) >> 3;
      if (puVar5 < puVar11) {
        uVar9 = uVar8;
      }
      puVar4 = puVar11;
      if (uVar9 != 0) {
        do {
          uVar8 = uVar8 + 1;
          *puVar4 = uVar6;
          puVar4 = puVar4 + 1;
        } while (uVar8 != uVar9);
      }
    }
    bVar3 = -((byte)DAT_140019010 & 0x3f) & 0x3f;
    *puVar11 = (**(ulonglong **)(this + 8) >> bVar3 | **(ulonglong **)(this + 8) << 0x40 - bVar3) ^
               DAT_140019010;
    bVar3 = -((byte)DAT_140019010 & 0x3f) & 0x3f;
    *(ulonglong *)**(undefined8 **)this =
         ((ulonglong)pvVar7 >> bVar3 | (longlong)pvVar7 << 0x40 - bVar3) ^ DAT_140019010;
    bVar3 = -((byte)DAT_140019010 & 0x3f) & 0x3f;
    *(ulonglong *)(**(longlong **)this + 8) =
         ((ulonglong)(puVar11 + 1) >> bVar3 | (longlong)(puVar11 + 1) << 0x40 - bVar3) ^
         DAT_140019010;
    bVar3 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
    iVar1 = 0;
    *(ulonglong *)(**(longlong **)this + 0x10) =
         ((ulonglong)puVar5 >> bVar3 | (longlong)puVar5 << 0x40 - bVar3) ^ DAT_140019010;
  }
  return iVar1;
}




void FUN_14000774c(undefined8 param_1)

{
  _register_onexit_function(&DAT_14001a340,param_1);
  return;
}




/* Library Function - Single Match
    _execute_onexit_table
   
   Library: Visual Studio 2015 Release */

void _execute_onexit_table(undefined8 param_1)

{
  undefined8 local_res8;
  __crt_seh_guarded_call<int> local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_18 [3];
  
  local_18[0] = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  __crt_seh_guarded_call<int>::
  operator()<class_<lambda_e24bbb7b643b32fcea6fa61b31d4c984>,class_<lambda_275893d493268fdec8709772e3fcec0e>&___ptr64,class_<lambda_9d71df4d7cf3f480f8d633942495c3b0>_>
            (local_res10,(<lambda_e24bbb7b643b32fcea6fa61b31d4c984> *)local_res20,
             (<lambda_275893d493268fdec8709772e3fcec0e> *)local_18,
             (<lambda_9d71df4d7cf3f480f8d633942495c3b0> *)local_res18);
  return;
}




/* Library Function - Single Match
    _initialize_onexit_table
   
   Library: Visual Studio 2015 Release */

undefined8 _initialize_onexit_table(ulonglong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_1 == (ulonglong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    bVar1 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
    uVar2 = (0UL >> bVar1 | 0L << 0x40 - bVar1) ^ DAT_140019010;
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
  }
  return 0;
}




/* Library Function - Single Match
    _register_onexit_function
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  __crt_seh_guarded_call<int> local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  __crt_seh_guarded_call<int>::
  operator()<class_<lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class_<lambda_4e60a939b0d047cfe11ddc22648dfba9>&___ptr64,class_<lambda_332c3edc96d0294ec56c57d38c1cdfd5>_>
            (local_res18,(<lambda_b8c45f8f788dd370798f47cfe8ac3a86> *)local_28,
             (<lambda_4e60a939b0d047cfe11ddc22648dfba9> *)&local_20,
             (<lambda_332c3edc96d0294ec56c57d38c1cdfd5> *)local_res20);
  return;
}




undefined8 FUN_140007834(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((ulonglong *)&DAT_14001a340);
  uVar1 = _initialize_onexit_table((ulonglong *)&DAT_14001a358);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




undefined8 FUN_1400078c4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  LOCK();
  iVar1 = *(int *)PTR_DAT_1400193f8;
  *(int *)PTR_DAT_1400193f8 = *(int *)PTR_DAT_1400193f8 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined4 *)PTR_DAT_1400193f8 != &DAT_1400191d0)) {
    _free_base(PTR_DAT_1400193f8);
    PTR_DAT_1400193f8 = (undefined *)&DAT_1400191d0;
  }
  _free_base(DAT_14001abe0);
  DAT_14001abe0 = (LPVOID)0x0;
  _free_base(DAT_14001abe8);
  DAT_14001abe8 = (LPVOID)0x0;
  _free_base(DAT_14001a780);
  DAT_14001a780 = (LPVOID)0x0;
  uVar2 = _free_base(DAT_14001a788);
  DAT_14001a788 = (LPVOID)0x0;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_140007954(void)

{
  __acrt_execute_initializers(&PTR_LAB_140010060,(undefined8 *)&DAT_140010150);
  return;
}




void FUN_140007968(void)

{
  __acrt_execute_uninitializers(&PTR_LAB_140010060,(undefined8 *)&DAT_140010150);
  return;
}




undefined4 FUN_14000797c(void)

{
  return DAT_14001a370;
}




void FUN_140007984(undefined4 param_1)

{
  DAT_14001a370 = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14000798c(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_140019010 & 0x3f;
  return (DAT_140019010 ^ _DAT_14001a378) >> bVar1 != 0 ||
         (DAT_140019010 ^ _DAT_14001a378) << 0x40 - bVar1 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400079ac(undefined8 param_1)

{
  _DAT_14001a378 = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_invoke_user_matherr
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_invoke_user_matherr(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_140019010 & 0x3f;
  pcVar3 = (code *)((DAT_140019010 ^ _DAT_14001a378) >> bVar2 |
                   (DAT_140019010 ^ _DAT_14001a378) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    _guard_check_icall();
    uVar1 = (*pcVar3)(param_1);
  }
  return uVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400079fc(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
  _DAT_14001a378 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_140019010;
  return;
}




/* Library Function - Single Match
    _get_wide_winmain_command_line
   
   Library: Visual Studio 2015 Release */

ushort * _get_wide_winmain_command_line(void)

{
  bool bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)&DAT_14001a380;
  if (DAT_14001a798 != (ushort *)0x0) {
    puVar2 = DAT_14001a798;
  }
  bVar1 = false;
  do {
    if (*puVar2 < 0x21) {
      if (*puVar2 == 0) {
        return puVar2;
      }
      if (!bVar1) {
        for (; (*puVar2 != 0 && (*puVar2 < 0x21)); puVar2 = puVar2 + 1) {
        }
        return puVar2;
      }
    }
    if (*puVar2 == 0x22) {
      bVar1 = !bVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}




/* Library Function - Single Match
    _initterm
   
   Library: Visual Studio 2015 Release */

void _initterm(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      pcVar1 = (code *)*param_1;
      if (pcVar1 != (code *)0x0) {
        _guard_check_icall();
        (*pcVar1)();
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}




/* Library Function - Single Match
    _initterm_e
   
   Library: Visual Studio 2015 Release */

undefined8 _initterm_e(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = param_1 == param_2;
  do {
    if (bVar3) {
      return 0;
    }
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      _guard_check_icall();
      uVar2 = (*pcVar1)();
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    param_1 = param_1 + 1;
    bVar3 = param_1 == param_2;
  } while( true );
}




/* Library Function - Single Match
    _set_fmode
   
   Library: Visual Studio 2012 Release */

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  ulong *puVar2;
  
  if (((_Mode - 0x4000U & 0xffff3fff) == 0) && (_Mode != 0xc000)) {
    LOCK();
    UNLOCK();
    eVar1 = 0;
    DAT_14001abf0 = _Mode;
  }
  else {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_14000803c();
    eVar1 = 0x16;
  }
  return eVar1;
}




undefined4 FUN_140007b78(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14001a384;
  LOCK();
  DAT_14001a384 = 1;
  UNLOCK();
  return uVar1;
}




/* Library Function - Single Match
    _configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _configthreadlocale(int _Flag)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulong *puVar3;
  uint uVar4;
  
  p_Var2 = __acrt_getptd();
  uVar1 = *(uint *)(p_Var2 + 0x3a8);
  if (_Flag == -1) {
    DAT_1400197c0 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        puVar3 = __doserrno();
        *puVar3 = 0x16;
        FUN_14000803c();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(p_Var2 + 0x3a8) = uVar4;
  }
  return 2 - (uint)((uVar1 & 2) != 0);
}




undefined4 FUN_140007c38(void)

{
  return DAT_14001a388;
}




undefined * FUN_140007c6c(void)

{
  return &DAT_14001a38c;
}




void FUN_140007c74(void)

{
  code *pcVar1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = __acrt_getptd();
  pcVar1 = *(code **)(p_Var2 + 0x18);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    strcpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  char *pcVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar4 = _Dst;
      do {
        cVar1 = pcVar4[(longlong)_Src - (longlong)_Dst];
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      puVar2 = __doserrno();
      uVar3 = 0x22;
      goto LAB_140007ccf;
    }
    *_Dst = '\0';
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_140007ccf:
  *puVar2 = uVar3;
  FUN_14000803c();
  return uVar3;
}




/* Library Function - Single Match
    abort
   
   Library: Visual Studio 2015 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    raise(0x16);
  }
  if ((DAT_140019040 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140007d56;
    __acrt_call_reportfault(3,0x40000015,1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x140007d60;
  FUN_140006da0(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    wcsncmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}




/* Library Function - Single Match
    __acrt_call_reportfault
   
   Library: Visual Studio 2015 Release */

void __acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 auStackX_8 [8];
  undefined1 auStackY_608 [32];
  DWORD64 local_5c8;
  _EXCEPTION_POINTERS local_5c0;
  PVOID local_5b0;
  ulonglong local_5a8 [2];
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_140019010 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_140003420();
  }
  FUN_140004240((undefined1 (*) [16])&local_598,0,0x98);
  FUN_140004240((undefined1 (*) [16])&local_4f8,0,0x4d0);
  local_5c0.ExceptionRecord = &local_598;
  local_5c0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b0,local_5a8,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5c0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_140003420();
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_608);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007f8c(undefined8 param_1)

{
  _DAT_14001a390 = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _invalid_parameter
   
   Library: Visual Studio 2015 Release */

void _invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                       uintptr_t param_5)

{
  __acrt_ptd *p_Var1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  p_Var1 = __acrt_getptd_noexit();
  if (((p_Var1 == (__acrt_ptd *)0x0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(p_Var1 + 0x3b8), UNRECOVERED_JUMPTABLE == (code *)0x0)) &&
     (bVar2 = (byte)DAT_140019010 & 0x3f,
     UNRECOVERED_JUMPTABLE =
          (code *)((DAT_140019010 ^ _DAT_14001a390) >> bVar2 |
                  (DAT_140019010 ^ _DAT_14001a390) << 0x40 - bVar2),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  _guard_check_icall();
                    /* WARNING: Could not recover jumptable at 0x000140008001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}




void FUN_14000803c(void)

{
  _invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}




/* Library Function - Single Match
    _invoke_watson
   
   Library: Visual Studio 2015 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140008089;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x14000808f;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00014000809b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}




/* Library Function - Single Match
    __acrt_errno_from_os_error
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_errno_from_os_error(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = &DAT_140010150;
  do {
    if (param_1 == *piVar4) {
      return (&DAT_140010154)[uVar3 * 2];
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar4 = piVar4 + 2;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  uVar2 = 0x16;
  if (param_1 - 0xbcU < 0xf) {
    uVar2 = 8;
  }
  return uVar2;
}




/* Library Function - Single Match
    __acrt_errno_map_os_error
   
   Library: Visual Studio 2015 Release */

void __acrt_errno_map_os_error(int param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  __acrt_ptd *p_Var3;
  
  p_Var2 = __acrt_getptd_noexit();
  if (p_Var2 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_140019054;
  }
  else {
    p_Var2 = p_Var2 + 0x24;
  }
  *(int *)p_Var2 = param_1;
  p_Var3 = __acrt_getptd_noexit();
  p_Var2 = (__acrt_ptd *)&DAT_140019050;
  if (p_Var3 != (__acrt_ptd *)0x0) {
    p_Var2 = p_Var3 + 0x20;
  }
  uVar1 = __acrt_errno_from_os_error(param_1);
  *(undefined4 *)p_Var2 = uVar1;
  return;
}




/* Library Function - Single Match
    __doserrno
   
   Library: Visual Studio 2015 Release */

ulong * __cdecl __doserrno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = __acrt_getptd_noexit();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_140019054;
  }
  else {
    p_Var1 = p_Var1 + 0x24;
  }
  return (ulong *)p_Var1;
}




/* Library Function - Single Match
    __doserrno
   
   Library: Visual Studio 2015 Release */

ulong * __cdecl __doserrno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = __acrt_getptd_noexit();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_140019050;
  }
  else {
    p_Var1 = p_Var1 + 0x20;
  }
  return (ulong *)p_Var1;
}




/* Library Function - Single Match
    _towlower_l
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl _towlower_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  WCHAR local_res8 [8];
  WCHAR local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  local_res8[0] = L'\xffff';
  if (_C != 0xffff) {
    local_res8[0] = _C;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
    if (*(wchar_t **)(local_20 + 0x138) == (wchar_t *)0x0) {
      if ((ushort)(local_res8[0] + L'﾿') < 0x1a) {
        local_res8[0] = local_res8[0] + L' ';
      }
    }
    else if ((ushort)local_res8[0] < 0x100) {
      iVar1 = iswctype(local_res8[0],1);
      if (iVar1 != 0) {
        local_res8[0] =
             (WCHAR)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)(ushort)local_res8[0]);
      }
    }
    else {
      iVar1 = __acrt_LCMapStringW(*(wchar_t **)(local_20 + 0x138),0x100,local_res8,1,local_res18,1);
      if (iVar1 != 0) {
        local_res8[0] = local_res18[0];
      }
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8[0];
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != &DAT_1400191d0)) {
      _free_base(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_14001a398;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_14000ff60;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined4 **)(param_1 + 0x88) = &DAT_1400191d0;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}




/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_14000ff60) {
    _free_base(*(undefined **)param_1);
  }
  _free_base(*(LPVOID *)(local_20 + 0x70));
  _free_base(*(LPVOID *)(local_20 + 0x58));
  _free_base(*(LPVOID *)(local_20 + 0x60));
  _free_base(*(LPVOID *)(local_20 + 0x68));
  _free_base(*(LPVOID *)(local_20 + 0x48));
  _free_base(*(LPVOID *)(local_20 + 0x50));
  _free_base(*(LPVOID *)(local_20 + 0x78));
  _free_base(*(LPVOID *)(local_20 + 0x80));
  _free_base(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}




/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_14001a398) && (ppuVar1 != &PTR_DAT_140019060)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}




/* Library Function - Single Match
    __acrt_getptd
   
   Library: Visual Studio 2015 Release */

__acrt_ptd * __acrt_getptd(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  if (DAT_140019058 == 0xffffffff) {
LAB_1400085e2:
    p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      iVar1 = __acrt_FlsSetValue(DAT_140019058,p_Var2);
      if (iVar1 != 0) {
        construct_ptd_array(p_Var2);
        _free_base((LPVOID)0x0);
        goto LAB_140008623;
      }
    }
    _free_base(p_Var2);
  }
  else {
    p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_140019058);
    if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_1400085e2;
LAB_140008623:
    if (p_Var2 != (__acrt_ptd *)0x0) {
      SetLastError(dwErrCode);
      return p_Var2;
    }
  }
  SetLastError(dwErrCode);
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    __acrt_getptd_noexit
   
   Library: Visual Studio 2015 Release */

__acrt_ptd * __acrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  if ((DAT_140019058 == 0xffffffff) ||
     (p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_140019058), p_Var2 == (__acrt_ptd *)0x0)) {
    p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      iVar1 = __acrt_FlsSetValue(DAT_140019058,p_Var2);
      if (iVar1 != 0) {
        construct_ptd_array(p_Var2);
        _free_base((LPVOID)0x0);
        goto LAB_1400086be;
      }
    }
    _free_base(p_Var2);
  }
  else {
LAB_1400086be:
    if (p_Var2 != (__acrt_ptd *)0x0) {
      SetLastError(dwErrCode);
      return p_Var2;
    }
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}




/* Library Function - Single Match
    __acrt_uninitialize_ptd
   
   Library: Visual Studio 2015 Release */

undefined1 __acrt_uninitialize_ptd(void)

{
  if (DAT_140019058 != 0xffffffff) {
    __acrt_FlsFree(DAT_140019058);
    DAT_140019058 = 0xffffffff;
  }
  return 1;
}




/* Library Function - Single Match
    __acrt_update_locale_info
   
   Library: Visual Studio 2015 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_14001a398) && ((DAT_1400197c0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}




/* Library Function - Single Match
    __acrt_update_multibyte_info
   
   Library: Visual Studio 2015 Release */

void __acrt_update_multibyte_info(longlong param_1,longlong *param_2)

{
  int *piVar1;
  
  if (((undefined *)*param_2 != PTR_DAT_1400193f8) &&
     ((DAT_1400197c0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    piVar1 = __acrt_update_thread_multibyte_data();
    *param_2 = (longlong)piVar1;
  }
  return;
}




/* Library Function - Single Match
    __acrt_initialize_locks
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __acrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_14001a3a0 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_14001a5a8 = DAT_14001a5a8 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xd);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Library: Visual Studio 2015 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000880e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_14001a3a0 + (longlong)param_1 * 0x28));
  return;
}




/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14001a5a8;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_14001a3a0 + uVar1 * 0x28));
    DAT_14001a5a8 = DAT_14001a5a8 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_unlock
   
   Library: Visual Studio 2015 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140008862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_14001a3a0 + (longlong)param_1 * 0x28));
  return;
}




/* Library Function - Single Match
    void * __ptr64 __cdecl try_get_function(enum `anonymous namespace'::function_id,char const *
   __ptr64 const,enum A0x1dd686d3::module_id const * __ptr64 const,enum A0x1dd686d3::module_id const
   * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
try_get_function(function_id param_1,char *param_2,module_id *param_3,module_id *param_4)

{
  longlong lVar1;
  module_id mVar2;
  LPCWSTR lpLibFileName;
  byte bVar3;
  DWORD DVar4;
  HMODULE hLibModule;
  FARPROC pFVar5;
  void *pvVar6;
  
  bVar3 = (byte)DAT_140019010 & 0x3f;
  pvVar6 = (void *)((DAT_140019010 ^ (&DAT_14001a650)[param_1]) >> bVar3 |
                   (DAT_140019010 ^ (&DAT_14001a650)[param_1]) << 0x40 - bVar3);
  if (pvVar6 != (void *)0xffffffffffffffff) {
    if (pvVar6 != (void *)0x0) {
      return pvVar6;
    }
    if (param_3 != param_4) {
      do {
        mVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_14001a5b0)[mVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_appmodel_runtime_l1_1_140010940)[mVar2];
          hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
          if (hLibModule == (HMODULE)0x0) {
            DVar4 = GetLastError();
            if (DVar4 == 0x57) {
              hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
            }
            else {
              hLibModule = (HMODULE)0x0;
            }
          }
          if (hLibModule != (HMODULE)0x0) {
            LOCK();
            lVar1 = (&DAT_14001a5b0)[mVar2];
            (&DAT_14001a5b0)[mVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_140008968;
          }
          LOCK();
          (&DAT_14001a5b0)[mVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_140008968:
          if (hLibModule != (HMODULE)0x0) goto LAB_140008983;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hLibModule = (HMODULE)0x0;
LAB_140008983:
    if ((hLibModule != (HMODULE)0x0) &&
       (pFVar5 = GetProcAddress(hLibModule,param_2), pFVar5 != (FARPROC)0x0)) {
      bVar3 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
      LOCK();
      (&DAT_14001a650)[param_1] =
           ((ulonglong)pFVar5 >> bVar3 | (longlong)pFVar5 << 0x40 - bVar3) ^ DAT_140019010;
      UNLOCK();
      return pFVar5;
    }
    bVar3 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_14001a650)[param_1] = (0xffffffffffffffffU >> bVar3 | -1L << 0x40 - bVar3) ^ DAT_140019010
    ;
    UNLOCK();
  }
  return (void *)0x0;
}




/* Library Function - Single Match
    __acrt_FlsAlloc
   
   Library: Visual Studio 2015 Release */

void __acrt_FlsAlloc(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(3,"FlsAlloc",(module_id *)&DAT_140010f20,(module_id *)"FlsAlloc"
                                   );
  if (pcVar1 == (code *)0x0) {
    TlsAlloc();
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_FlsFree
   
   Library: Visual Studio 2015 Release */

void __acrt_FlsFree(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(4,"FlsFree",(module_id *)&DAT_140010f38,(module_id *)"FlsFree");
  if (pcVar1 == (code *)0x0) {
    TlsFree(param_1);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_FlsGetValue
   
   Library: Visual Studio 2015 Release */

void __acrt_FlsGetValue(DWORD param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(5,"FlsGetValue",(module_id *)&DAT_140010f48,
                                    (module_id *)"FlsGetValue");
  if (pcVar1 == (code *)0x0) {
    TlsGetValue(param_1);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_FlsSetValue
   
   Library: Visual Studio 2015 Release */

void __acrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(6,"FlsSetValue",(module_id *)&DAT_140010f60,
                                    (module_id *)"FlsSetValue");
  if (pcVar1 == (code *)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1,param_2);
  }
  return;
}




/* Library Function - Single Match
    __acrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2015 Release */

void __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x14,"InitializeCriticalSectionEx",(module_id *)&DAT_140010f98,
                                    (module_id *)"InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}




/* Library Function - Single Match
    __acrt_LCMapStringEx
   
   Library: Visual Studio 2015 Release */

void __acrt_LCMapStringEx
               (wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
               int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x16,"LCMapStringEx",(module_id *)&DAT_140010fc0,
                                    (module_id *)"LCMapStringEx");
  if (pcVar1 == (code *)0x0) {
    Locale = __acrt_LocaleNameToLCID(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}




/* Library Function - Single Match
    __acrt_LocaleNameToLCID
   
   Library: Visual Studio 2015 Release */

void __acrt_LocaleNameToLCID(wchar_t *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x18,"LocaleNameToLCID",(module_id *)&DAT_140010fd8,
                                    (module_id *)"LocaleNameToLCID");
  if (pcVar1 == (code *)0x0) {
    __acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1,param_2);
  }
  return;
}




/* Library Function - Single Match
    __acrt_initialize_winapi_thunks
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_initialize_winapi_thunks(void)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  
  bVar1 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
  uVar2 = ((ulonglong)(0 >> bVar1) | 0L << 0x40 - bVar1) ^ DAT_140019010;
  puVar4 = &DAT_14001a650;
  for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}




/* Library Function - Single Match
    __acrt_is_packaged_app
   
   Library: Visual Studio 2015 Release */

bool __acrt_is_packaged_app(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  
  if (DAT_14001a750 == 0) {
    pcVar2 = (code *)try_get_function(8,"GetCurrentPackageId",(module_id *)&DAT_140010f78,
                                      (module_id *)"GetCurrentPackageId");
    if (pcVar2 != (code *)0x0) {
      local_res8[0] = 0;
      _guard_check_icall();
      iVar1 = (*pcVar2)(local_res8,0);
      if (iVar1 == 0x7a) {
        LOCK();
        UNLOCK();
        DAT_14001a750 = 1;
        return true;
      }
    }
    LOCK();
    DAT_14001a750 = 2;
    UNLOCK();
    bVar3 = false;
  }
  else {
    bVar3 = DAT_14001a750 == 1;
  }
  return bVar3;
}




/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_14001a5b0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_14001a650;
    } while (puVar1 != &DAT_14001a650);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  ulong *puVar3;
  size_t dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_14001a7a8,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_140007c38();
    } while ((iVar1 != 0) && (iVar1 = _callnewh(dwBytes), iVar1 != 0));
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Single Match
    _free_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _free_base(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_14001a7a8,0,param_1), BVar1 == 0)) {
    puVar4 = __doserrno();
    DVar2 = GetLastError();
    uVar3 = __acrt_errno_from_os_error(DVar2);
    *puVar4 = uVar3;
  }
  return;
}




/* Library Function - Single Match
    int __cdecl common_expand_argv_wildcards<wchar_t>(wchar_t * __ptr64 * __ptr64 const,wchar_t *
   __ptr64 * __ptr64 * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_expand_argv_wildcards<wchar_t>(wchar_t **param_1,wchar_t ***param_2)

{
  int iVar1;
  errno_t eVar2;
  int extraout_EAX;
  ulong *puVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t **ppwVar6;
  ulonglong uVar7;
  wchar_t **_Dst;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  rsize_t _MaxCount;
  ulonglong uVar15;
  undefined1 auStackY_b8 [32];
  longlong *local_80;
  longlong *plStack_78;
  undefined8 local_70;
  longlong local_68;
  wchar_t ***local_60;
  wchar_t **local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_140019010 ^ (ulonglong)auStackY_b8;
  uVar10 = 0;
  local_60 = param_2;
  if (param_2 == (wchar_t ***)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_14000803c();
  }
  else {
    *param_2 = (wchar_t **)0x0;
    pwVar4 = *param_1;
    local_80 = (longlong *)0x0;
    plStack_78 = (longlong *)0x0;
    local_70 = 0;
    while (plVar13 = plStack_78, plVar9 = local_80, pwVar4 != (wchar_t *)0x0) {
      local_50 = CONCAT26(local_50._6_2_,0x3f002a);
      pwVar4 = wcspbrk(*param_1,(wchar_t *)&local_50);
      if (pwVar4 == (wchar_t *)0x0) {
        iVar1 = copy_and_add_argument_to_buffer<wchar_t>
                          (*param_1,(wchar_t *)0x0,0,(argument_list<wchar_t> *)&local_80);
      }
      else {
        iVar1 = expand_argument_wildcards<wchar_t>
                          (*param_1,pwVar4,(argument_list<wchar_t> *)&local_80);
      }
      plVar9 = local_80;
      plVar13 = plStack_78;
      if (iVar1 != 0) goto LAB_1400090d3;
      param_1 = param_1 + 1;
      pwVar4 = *param_1;
    }
    local_50 = 0;
    uVar15 = ((longlong)plStack_78 - (longlong)local_80 >> 3) + 1;
    uVar7 = ((longlong)plStack_78 - (longlong)local_80) + 7U >> 3;
    if (plStack_78 < local_80) {
      uVar7 = uVar10;
    }
    plVar8 = local_80;
    uVar11 = uVar10;
    uVar12 = uVar10;
    if (uVar7 != 0) {
      do {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (*(short *)(*plVar8 + lVar5 * 2) != 0);
        plVar8 = plVar8 + 1;
        uVar12 = uVar12 + 1 + lVar5;
        uVar11 = uVar11 + 1;
        local_50 = uVar12;
      } while (uVar11 != uVar7);
    }
    ppwVar6 = (wchar_t **)__acrt_allocate_buffer_for_argv(uVar15,local_50,2);
    if (ppwVar6 != (wchar_t **)0x0) {
      _Dst = ppwVar6 + uVar15;
      local_58 = _Dst;
      if (plVar9 != plVar13) {
        local_68 = (longlong)ppwVar6 - (longlong)plVar9;
        plVar8 = plVar9;
        do {
          lVar5 = -1;
          do {
            lVar14 = lVar5;
            lVar5 = lVar14 + 1;
          } while (((wchar_t *)*plVar8)[lVar5] != L'\0');
          _MaxCount = lVar14 + 2;
          eVar2 = wcsncpy_s((wchar_t *)_Dst,local_50 - ((longlong)_Dst - (longlong)local_58 >> 1),
                            (wchar_t *)*plVar8,_MaxCount);
          if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(wchar_t ***)(local_68 + (longlong)plVar8) = _Dst;
          plVar8 = plVar8 + 1;
          _Dst = (wchar_t **)((longlong)_Dst + _MaxCount * 2);
        } while (plVar8 != plVar13);
      }
      *local_60 = ppwVar6;
    }
    _free_base((LPVOID)0x0);
LAB_1400090d3:
    uVar7 = (ulonglong)((longlong)plVar13 + (7 - (longlong)plVar9)) >> 3;
    if (plVar13 < plVar9) {
      uVar7 = uVar10;
    }
    plVar13 = plVar9;
    if (uVar7 != 0) {
      do {
        _free_base((LPVOID)*plVar13);
        uVar10 = uVar10 + 1;
        plVar13 = plVar13 + 1;
      } while (uVar10 != uVar7);
    }
    _free_base(plVar9);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_b8);
  return extraout_EAX;
}




/* Library Function - Single Match
    int __cdecl copy_and_add_argument_to_buffer<wchar_t>(wchar_t const * __ptr64 const,wchar_t const
   * __ptr64 const,unsigned __int64,class `anonymous namespace'::argument_list<wchar_t> & __ptr64)
   
   Library: Visual Studio 2015 Release */

int __cdecl
copy_and_add_argument_to_buffer<wchar_t>
          (wchar_t *param_1,wchar_t *param_2,__uint64 param_3,argument_list<wchar_t> *param_4)

{
  errno_t eVar1;
  int iVar2;
  wchar_t *_Dst;
  longlong lVar3;
  ulonglong _MaxCount;
  ulonglong _SizeInWords;
  longlong lVar4;
  
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (param_1[lVar3] != L'\0');
  _MaxCount = lVar4 + 2;
  if (-param_3 - 1 < _MaxCount) {
    iVar2 = 0xc;
  }
  else {
    _SizeInWords = param_3 + 1 + _MaxCount;
    _Dst = (wchar_t *)_calloc_base(_SizeInWords,2);
    if (param_3 != 0) {
      eVar1 = wcsncpy_s(_Dst,_SizeInWords,param_2,param_3);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    eVar1 = wcsncpy_s(_Dst + param_3,_SizeInWords - param_3,param_1,_MaxCount);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = expand_if_necessary((longlong *)param_4);
    if (iVar2 == 0) {
      iVar2 = 0;
      **(undefined8 **)(param_4 + 8) = _Dst;
      *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 8;
    }
    else {
      _free_base(_Dst);
    }
    _free_base((LPVOID)0x0);
  }
  return iVar2;
}




/* Library Function - Single Match
    int __cdecl expand_argument_wildcards<wchar_t>(wchar_t * __ptr64 const,wchar_t * __ptr64
   const,class `anonymous namespace'::argument_list<wchar_t> & __ptr64)
   
   Library: Visual Studio 2015 Release */

int __cdecl
expand_argument_wildcards<wchar_t>
          (wchar_t *param_1,wchar_t *param_2,argument_list<wchar_t> *param_3)

{
  byte bVar1;
  int extraout_EAX;
  int iVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_2b8 [32];
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_140019010 ^ (ulonglong)auStackY_2b8;
  while ((param_2 != param_1 &&
         ((0x2d < (ushort)(*param_2 + L'￑') ||
          ((0x200000000801U >> ((ulonglong)(ushort)(*param_2 + L'￑') & 0x3f) & 1) == 0))))) {
    param_2 = param_2 + -1;
  }
  if ((*param_2 == L':') && (param_2 != param_1 + 1)) {
    copy_and_add_argument_to_buffer<wchar_t>(param_1,(wchar_t *)0x0,0,param_3);
  }
  else {
    uVar4 = *param_2 + L'￑';
    if ((0x2d < uVar4) || (bVar1 = 1, (0x200000000801U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)) {
      bVar1 = 0;
    }
    FUN_140004240((undefined1 (*) [16])&local_288,0,0x250);
    hFindFile = FindFirstFileExW(param_1,FindExInfoStandard,&local_288,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      copy_and_add_argument_to_buffer<wchar_t>(param_1,(wchar_t *)0x0,0,param_3);
    }
    else {
      lVar6 = *(longlong *)(param_3 + 8) - *(longlong *)param_3 >> 3;
      do {
        if (((local_288.cFileName[0] != L'.') ||
            ((local_288.cFileName[1] != L'\0' &&
             ((local_288.cFileName[1] != L'.' || (local_288.cFileName[2] != L'\0')))))) &&
           (iVar2 = copy_and_add_argument_to_buffer<wchar_t>
                              (local_288.cFileName,param_1,
                               -(ulonglong)bVar1 & ((longlong)param_2 - (longlong)param_1 >> 1) + 1U
                               ,param_3), iVar2 != 0)) goto LAB_140009351;
        BVar3 = FindNextFileW(hFindFile,&local_288);
      } while (BVar3 != 0);
      lVar5 = *(longlong *)(param_3 + 8) - *(longlong *)param_3 >> 3;
      if (lVar6 != lVar5) {
        qsort((void *)(*(longlong *)param_3 + lVar6 * 8),lVar5 - lVar6,8,
              (_PtFuncCompare *)&LAB_140008f08);
      }
    }
LAB_140009351:
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      FindClose(hFindFile);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_2b8);
  return extraout_EAX;
}




/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   __ptr64
    private: int __cdecl `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   __ptr64
   
   Library: Visual Studio 2015 Release */

undefined4 expand_if_necessary(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (param_1[1] == param_1[2]) {
    uVar3 = 0;
    if (*param_1 == 0) {
      pvVar2 = _calloc_base(4,8);
      *param_1 = (longlong)pvVar2;
      _free_base((LPVOID)0x0);
      lVar1 = *param_1;
      if (lVar1 != 0) {
        param_1[1] = lVar1;
        param_1[2] = lVar1 + 0x20;
        goto LAB_140009431;
      }
    }
    else {
      uVar4 = param_1[2] - *param_1 >> 3;
      if (uVar4 < 0x8000000000000000) {
        pvVar2 = _recalloc_base((void *)*param_1,uVar4 * 2,8);
        if (pvVar2 == (LPVOID)0x0) {
          uVar3 = 0xc;
        }
        else {
          *param_1 = (longlong)pvVar2;
          param_1[1] = (longlong)((longlong)pvVar2 + uVar4 * 8);
          param_1[2] = (longlong)((longlong)pvVar2 + uVar4 * 0x10);
        }
        _free_base((LPVOID)0x0);
        return uVar3;
      }
    }
    uVar3 = 0xc;
  }
  else {
LAB_140009431:
    uVar3 = 0;
  }
  return uVar3;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_140009518(param_3);
  __acrt_unlock(*param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140009518(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  _DAT_14001a754 = *(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 4);
  _DAT_14001a758 = *(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 8);
  _DAT_14001a770 = *(undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x220);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0xc);
  if (puVar4 == (undefined8 *)0x0) {
    _DAT_14001a760 = 0;
    _DAT_14001a768 = 0;
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_14000803c();
  }
  else {
    _DAT_14001a760 = *puVar4;
    _DAT_14001a768 = *(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x14);
  }
  lVar9 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_140004240((undefined1 (*) [16])&DAT_140019500,0,0x101);
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_14000803c();
  }
  else {
    lVar8 = 2;
    puVar5 = (undefined8 *)&DAT_140019500;
    do {
      uVar3 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar3;
      uVar3 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar3;
      uVar3 = puVar4[5];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar3;
      uVar3 = puVar4[7];
      puVar5[6] = puVar4[6];
      puVar5[7] = uVar3;
      uVar3 = puVar4[9];
      puVar5[8] = puVar4[8];
      puVar5[9] = uVar3;
      uVar3 = puVar4[0xb];
      puVar5[10] = puVar4[10];
      puVar5[0xb] = uVar3;
      uVar3 = puVar4[0xd];
      puVar5[0xc] = puVar4[0xc];
      puVar5[0xd] = uVar3;
      puVar7 = puVar5 + 0x10;
      puVar1 = puVar4 + 0xe;
      uVar3 = puVar4[0xf];
      puVar4 = puVar4 + 0x10;
      puVar5[0xe] = *puVar1;
      puVar5[0xf] = uVar3;
      lVar8 = lVar8 + -1;
      puVar5 = puVar7;
    } while (lVar8 != 0);
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
  }
  puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x119);
  puVar4 = (undefined8 *)&DAT_140019610;
  if (puVar5 == (undefined8 *)0x0) {
    FUN_140004240((undefined1 (*) [16])&DAT_140019610,0,0x100);
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_14000803c();
  }
  else {
    do {
      uVar3 = puVar5[1];
      *puVar4 = *puVar5;
      puVar4[1] = uVar3;
      uVar3 = puVar5[3];
      puVar4[2] = puVar5[2];
      puVar4[3] = uVar3;
      uVar3 = puVar5[5];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar3;
      uVar3 = puVar5[7];
      puVar4[6] = puVar5[6];
      puVar4[7] = uVar3;
      uVar3 = puVar5[9];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar3;
      uVar3 = puVar5[0xb];
      puVar4[10] = puVar5[10];
      puVar4[0xb] = uVar3;
      uVar3 = puVar5[0xd];
      puVar4[0xc] = puVar5[0xc];
      puVar4[0xd] = uVar3;
      puVar1 = puVar5 + 0xe;
      uVar3 = puVar5[0xf];
      puVar5 = puVar5 + 0x10;
      puVar4[0xe] = *puVar1;
      puVar4[0xf] = uVar3;
      lVar9 = lVar9 + -1;
      puVar4 = puVar4 + 0x10;
    } while (lVar9 != 0);
  }
  LOCK();
  iVar2 = *(int *)PTR_DAT_1400193f8;
  *(int *)PTR_DAT_1400193f8 = *(int *)PTR_DAT_1400193f8 + -1;
  UNLOCK();
  if ((iVar2 == 1) && ((undefined4 *)PTR_DAT_1400193f8 != &DAT_1400191d0)) {
    _free_base(PTR_DAT_1400193f8);
  }
  PTR_DAT_1400193f8 = *(undefined **)(*(longlong *)*param_1 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_1 + 0x88) = **(int **)(*(longlong *)*param_1 + 0x88) + 1;
  UNLOCK();
  return;
}




/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2015 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_14001a76c = 0;
  if (param_1 == -2) {
    DAT_14001a76c = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_14001a76c = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_14001a76c = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}




/* Library Function - Single Match
    void __cdecl setSBCS(struct __crt_multibyte_data * __ptr64)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBCS(__crt_multibyte_data *param_1)

{
  longlong lVar1;
  __crt_multibyte_data *p_Var2;
  longlong lVar3;
  __crt_multibyte_data *p_Var4;
  
  p_Var2 = param_1 + 0x18;
  lVar3 = 0x101;
  FUN_140004240((undefined1 (*) [16])p_Var2,0,0x101);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  p_Var4 = param_1 + 0xc;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined2 *)p_Var4 = 0;
    p_Var4 = p_Var4 + 2;
  }
  do {
    *p_Var2 = p_Var2[(longlong)&DAT_1400191d0 - (longlong)param_1];
    p_Var2 = p_Var2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  p_Var2 = param_1 + 0x119;
  lVar1 = 0x100;
  do {
    *p_Var2 = p_Var2[(longlong)&DAT_1400191d0 - (longlong)param_1];
    p_Var2 = p_Var2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




/* Library Function - Single Match
    void __cdecl setSBUpLow(struct __crt_multibyte_data * __ptr64)
   
   Library: Visual Studio 2015 Release */

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  CHAR *pCVar5;
  ulonglong uVar6;
  __crt_multibyte_data *p_Var7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  CHAR local_718 [231];
  __crt_multibyte_data a_Stack_631 [25];
  char local_618 [231];
  __crt_multibyte_data a_Stack_531 [25];
  char local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_140019010 ^ (ulonglong)auStackY_788;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738);
  lVar10 = 0x100;
  if (BVar3 == 0) {
    uVar4 = 0;
    p_Var7 = param_1 + 0x19;
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + 0x20);
LAB_1400099e6:
        p_Var7[0x100] = _Var2;
      }
      else {
        if (uVar4 - 0x61 < 0x1a) {
          *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x20);
          _Var2 = (__crt_multibyte_data)((char)uVar4 - 0x20);
          goto LAB_1400099e6;
        }
        p_Var7[0x100] = (__crt_multibyte_data)0x0;
      }
      uVar4 = uVar4 + 1;
      p_Var7 = p_Var7 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pCVar5 = local_718;
    do {
      *pCVar5 = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
      pCVar5 = pCVar5 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    while (local_738.LeadByte[0] != 0) {
      bVar1 = pBVar8[1];
      uVar6 = (ulonglong)local_738.LeadByte[0];
      while ((uVar4 = (uint)uVar6, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar6] = ' ';
        uVar6 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      local_738.LeadByte[0] = *pBVar8;
    }
    __acrt_GetStringTypeA
              ((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(UINT *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(int *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(int *)(param_1 + 4),0);
    pWVar9 = local_418;
    p_Var7 = param_1 + 0x19;
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) != 0) {
          *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x20);
          _Var2 = p_Var7[(longlong)(a_Stack_531 + -(longlong)param_1)];
          goto LAB_1400099a1;
        }
        p_Var7[0x100] = (__crt_multibyte_data)0x0;
      }
      else {
        *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x10);
        _Var2 = p_Var7[(longlong)(a_Stack_631 + -(longlong)param_1)];
LAB_1400099a1:
        p_Var7[0x100] = _Var2;
      }
      p_Var7 = p_Var7 + 1;
      pWVar9 = pWVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_788);
  return;
}




int FUN_140009a24(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  __crt_multibyte_data *p_Var6;
  undefined8 *puVar7;
  ulong *puVar8;
  __crt_multibyte_data *p_Var9;
  longlong lVar10;
  __crt_multibyte_data *p_Var11;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  __acrt_ptd **local_28 [2];
  
  local_30 = __acrt_getptd();
  __acrt_update_thread_multibyte_data();
  iVar5 = getSystemCP(param_1);
  if (iVar5 == *(int *)(*(longlong *)(local_30 + 0x88) + 4)) {
    return 0;
  }
  p_Var6 = (__crt_multibyte_data *)_malloc_base(0x228);
  if (p_Var6 != (__crt_multibyte_data *)0x0) {
    lVar10 = 4;
    puVar4 = *(undefined8 **)(local_30 + 0x88);
    p_Var11 = p_Var6;
    do {
      p_Var9 = p_Var11;
      puVar7 = puVar4;
      uVar3 = puVar7[1];
      *(undefined8 *)p_Var9 = *puVar7;
      *(undefined8 *)(p_Var9 + 8) = uVar3;
      uVar3 = puVar7[3];
      *(undefined8 *)(p_Var9 + 0x10) = puVar7[2];
      *(undefined8 *)(p_Var9 + 0x18) = uVar3;
      uVar3 = puVar7[5];
      *(undefined8 *)(p_Var9 + 0x20) = puVar7[4];
      *(undefined8 *)(p_Var9 + 0x28) = uVar3;
      uVar3 = puVar7[7];
      *(undefined8 *)(p_Var9 + 0x30) = puVar7[6];
      *(undefined8 *)(p_Var9 + 0x38) = uVar3;
      uVar3 = puVar7[9];
      *(undefined8 *)(p_Var9 + 0x40) = puVar7[8];
      *(undefined8 *)(p_Var9 + 0x48) = uVar3;
      uVar3 = puVar7[0xb];
      *(undefined8 *)(p_Var9 + 0x50) = puVar7[10];
      *(undefined8 *)(p_Var9 + 0x58) = uVar3;
      uVar3 = puVar7[0xd];
      *(undefined8 *)(p_Var9 + 0x60) = puVar7[0xc];
      *(undefined8 *)(p_Var9 + 0x68) = uVar3;
      uVar3 = puVar7[0xf];
      *(undefined8 *)(p_Var9 + 0x70) = puVar7[0xe];
      *(undefined8 *)(p_Var9 + 0x78) = uVar3;
      lVar10 = lVar10 + -1;
      puVar4 = puVar7 + 0x10;
      p_Var11 = p_Var9 + 0x80;
    } while (lVar10 != 0);
    uVar3 = puVar7[0x11];
    *(undefined8 *)(p_Var9 + 0x80) = puVar7[0x10];
    *(undefined8 *)(p_Var9 + 0x88) = uVar3;
    uVar3 = puVar7[0x13];
    *(undefined8 *)(p_Var9 + 0x90) = puVar7[0x12];
    *(undefined8 *)(p_Var9 + 0x98) = uVar3;
    *(undefined8 *)(p_Var9 + 0xa0) = puVar7[0x14];
    *(undefined4 *)p_Var6 = 0;
    iVar5 = _setmbcp_nolock(iVar5,p_Var6);
    if (iVar5 != -1) {
      if (param_2 == '\0') {
        FUN_140007b78();
      }
      piVar2 = *(int **)(local_30 + 0x88);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(undefined4 **)(local_30 + 0x88) != &DAT_1400191d0)) {
        _free_base(*(undefined4 **)(local_30 + 0x88));
      }
      *(undefined4 *)p_Var6 = 1;
      p_Var11 = (__crt_multibyte_data *)0x0;
      *(__crt_multibyte_data **)(local_30 + 0x88) = p_Var6;
      if ((((byte)local_30[0x3a8] & 2) == 0) && (((byte)DAT_1400197c0 & 1) == 0)) {
        local_28[0] = &local_30;
        local_res20[0] = 5;
        local_38[0] = 5;
        operator()<>(local_res18,local_38,local_28,local_res20);
        if (param_2 != '\0') {
          PTR_DAT_1400191c0 = PTR_DAT_1400193f8;
        }
      }
      goto LAB_140009b15;
    }
    puVar8 = __doserrno();
    *puVar8 = 0x16;
  }
  iVar5 = -1;
  p_Var11 = p_Var6;
LAB_140009b15:
  _free_base(p_Var11);
  return iVar5;
}




undefined4 FUN_140009bdc(void)

{
  int in_EAX;
  
  if (DAT_14001a778 == '\0') {
    in_EAX = FUN_140009a24(-3,'\x01');
    DAT_14001a778 = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_update_thread_multibyte_data
   
   Library: Visual Studio 2015 Release */

int * __acrt_update_thread_multibyte_data(void)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int *piVar3;
  
  p_Var2 = __acrt_getptd();
  if (((*(uint *)(p_Var2 + 0x3a8) & DAT_1400197c0) == 0) || (*(longlong *)(p_Var2 + 0x90) == 0)) {
    __acrt_lock(5);
    piVar3 = *(int **)(p_Var2 + 0x88);
    if (piVar3 != (int *)PTR_DAT_1400193f8) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piVar3 != &DAT_1400191d0)) {
          _free_base(piVar3);
        }
      }
      *(undefined **)(p_Var2 + 0x88) = PTR_DAT_1400193f8;
      piVar3 = (int *)PTR_DAT_1400193f8;
      LOCK();
      *(int *)PTR_DAT_1400193f8 = *(int *)PTR_DAT_1400193f8 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    piVar3 = *(int **)(p_Var2 + 0x88);
  }
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return piVar3;
}




/* Library Function - Single Match
    _setmbcp_nolock
   
   Library: Visual Studio 2015 Release */

void _setmbcp_nolock(int param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  uint *puVar5;
  __crt_multibyte_data *p_Var6;
  wchar_t *pwVar7;
  BYTE *pBVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  wchar_t *pwVar13;
  
  local_30 = DAT_140019010 ^ (ulonglong)auStack_68;
  uVar3 = getSystemCP(param_1);
  pwVar7 = (wchar_t *)0x0;
  if (uVar3 != 0) {
    puVar5 = &DAT_140019410;
    pwVar13 = pwVar7;
LAB_140009d18:
    if (*puVar5 != uVar3) goto code_r0x000140009d20;
    FUN_140004240((undefined1 (*) [16])(param_2 + 0x18),0,0x101);
    pbVar16 = &DAT_140019400;
    lVar9 = 4;
    pbVar14 = &DAT_140019420 + (longlong)pwVar13 * 0x30;
    do {
      bVar1 = *pbVar14;
      pbVar11 = pbVar14;
      while ((bVar1 != 0 && (pbVar11[1] != 0))) {
        bVar1 = *pbVar11;
        uVar12 = (uint)bVar1;
        if (bVar1 <= pbVar11[1]) {
          uVar15 = (uint)bVar1;
          do {
            uVar15 = uVar15 + 1;
            if (0x100 < uVar15) break;
            uVar12 = uVar12 + 1;
            param_2[(ulonglong)uVar15 + 0x18] =
                 (__crt_multibyte_data)((byte)param_2[(ulonglong)uVar15 + 0x18] | *pbVar16);
          } while (uVar12 <= pbVar11[1]);
        }
        pbVar11 = pbVar11 + 2;
        bVar1 = *pbVar11;
      }
      pbVar14 = pbVar14 + 8;
      pbVar16 = pbVar16 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = 1;
    if (uVar3 == 0x3a4) {
      pwVar7 = L"ja-JP";
    }
    else if (uVar3 == 0x3a8) {
      pwVar7 = L"zh-CN";
    }
    else if (uVar3 == 0x3b5) {
      pwVar7 = L"ko-KR";
    }
    else if (uVar3 == 0x3b6) {
      pwVar7 = L"zh-TW";
    }
    *(wchar_t **)(param_2 + 0x220) = pwVar7;
    p_Var6 = param_2 + 0xc;
    lVar9 = 6;
    do {
      *(undefined2 *)p_Var6 =
           *(undefined2 *)(p_Var6 + ((longlong)pwVar13 * 0x30 - (longlong)param_2) + 0x140019408);
      p_Var6 = p_Var6 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    goto LAB_140009f3b;
  }
LAB_140009cf9:
  setSBCS(param_2);
LAB_140009f45:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
  return;
code_r0x000140009d20:
  uVar12 = (int)pwVar13 + 1;
  pwVar13 = (wchar_t *)(ulonglong)uVar12;
  puVar5 = puVar5 + 0xc;
  if (4 < uVar12) goto code_r0x000140009d2c;
  goto LAB_140009d18;
code_r0x000140009d2c:
  if ((uVar3 - 65000 < 2) || (BVar4 = IsValidCodePage(uVar3 & 0xffff), BVar4 == 0))
  goto LAB_140009f45;
  BVar4 = GetCPInfo(uVar3,&local_48);
  if (BVar4 != 0) {
    FUN_140004240((undefined1 (*) [16])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      pBVar8 = local_48.LeadByte;
      while ((local_48.LeadByte[0] != 0 && (pBVar8[1] != 0))) {
        bVar1 = *pBVar8;
        if ((uint)bVar1 <= (uint)pBVar8[1]) {
          uVar3 = (uint)bVar1;
          uVar10 = (ulonglong)(((uint)pBVar8[1] - (uint)bVar1) + 1);
          do {
            uVar3 = uVar3 + 1;
            param_2[(ulonglong)uVar3 + 0x18] =
                 (__crt_multibyte_data)((byte)param_2[(ulonglong)uVar3 + 0x18] | 4);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        pBVar8 = pBVar8 + 2;
        local_48.LeadByte[0] = *pBVar8;
      }
      p_Var6 = param_2 + 0x1a;
      lVar9 = 0xfe;
      do {
        *p_Var6 = (__crt_multibyte_data)((byte)*p_Var6 | 8);
        p_Var6 = p_Var6 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 0x3a4) {
        pwVar7 = L"ja-JP";
      }
      else if (iVar2 == 0x3a8) {
        pwVar7 = L"zh-CN";
      }
      else if (iVar2 == 0x3b5) {
        pwVar7 = L"ko-KR";
      }
      else if (iVar2 == 0x3b6) {
        pwVar7 = L"zh-TW";
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar7;
      *(undefined4 *)(param_2 + 8) = 1;
    }
    p_Var6 = param_2 + 0xc;
    for (lVar9 = 6; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined2 *)p_Var6 = 0;
      p_Var6 = p_Var6 + 2;
    }
LAB_140009f3b:
    setSBUpLow(param_2);
    goto LAB_140009f45;
  }
  if (DAT_14001a76c == 0) goto LAB_140009f45;
  goto LAB_140009cf9;
}




/* Library Function - Single Match
    __dcrt_get_wide_environment_from_os
   
   Library: Visual Studio 2015 Release */

undefined8 * __dcrt_get_wide_environment_from_os(void)

{
  ulonglong uVar1;
  LPWCH pWVar2;
  LPWCH pWVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar7;
  longlong lVar6;
  
  pWVar2 = GetEnvironmentStringsW();
  puVar7 = (undefined8 *)0x0;
  pWVar3 = pWVar2;
  if (pWVar2 != (LPWCH)0x0) {
    for (; *pWVar3 != L'\0'; pWVar3 = pWVar3 + lVar6 + 2) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while (pWVar3[lVar5] != L'\0');
    }
    uVar1 = ((longlong)pWVar3 + (2 - (longlong)pWVar2) >> 1) * 2;
    puVar4 = (undefined8 *)_malloc_base(uVar1);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1400062a0(puVar4,(undefined8 *)pWVar2,uVar1);
      puVar7 = puVar4;
    }
    _free_base((LPVOID)0x0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return puVar7;
}




/* Library Function - Single Match
    _recalloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID _recalloc_base(void *param_1,ulonglong param_2,ulonglong param_3)

{
  ulong *puVar1;
  size_t sVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (void *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = _msize(param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (sVar2 < uVar4)) {
      FUN_140004240((undefined1 (*) [16])((longlong)pvVar3 + sVar2),0,uVar4 - sVar2);
    }
  }
  else {
    puVar1 = __doserrno();
    *puVar1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




bool FUN_14000a0cc(void)

{
  DAT_14001a7a8 = GetProcessHeap();
  return DAT_14001a7a8 != (HANDLE)0x0;
}




/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Library: Visual Studio 2015 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  DWORD DVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  _STARTUPINFOW local_78;
  
  GetStartupInfoW(&local_78);
  lVar4 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar5 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar3 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar5);
    uVar6 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar6 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar6);
    if ((int)DAT_14001abb0 < (int)uVar6) {
      uVar6 = DAT_14001abb0;
    }
    uVar7 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      do {
        if ((((*(longlong *)pbVar3 != -1) && (*(longlong *)pbVar3 != -2)) && ((*puVar5 & 1) != 0))
           && (((*puVar5 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)pbVar3), DVar1 != 0)))) {
          lVar2 = (ulonglong)((uint)lVar4 & 0x3f) * 0x40 + (&DAT_14001a7b0)[lVar4 >> 6];
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)pbVar3;
          *(byte *)(lVar2 + 0x38) = (byte)*puVar5;
        }
        lVar4 = lVar4 + 1;
        puVar5 = (uint *)((longlong)puVar5 + 1);
        pbVar3 = pbVar3 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}




/* Library Function - Single Match
    void __cdecl initialize_stdio_handles_nolock(void)
   
   Library: Visual Studio 2015 Release */

void __cdecl initialize_stdio_handles_nolock(void)

{
  uint uVar1;
  HANDLE hFile;
  DWORD nStdHandle;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar4 = 0;
  do {
    lVar2 = (ulonglong)(uVar3 & 0x3f) * 0x40 + (&DAT_14001a7b0)[(longlong)(int)uVar3 >> 6];
    if (*(longlong *)(lVar2 + 0x28) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38) = 0x81;
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
      if ((longlong)hFile + 1U < 2) {
        uVar1 = 0;
      }
      else {
        uVar1 = GetFileType(hFile);
      }
      if (uVar1 == 0) {
        *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 0x40;
        *(undefined8 *)(lVar2 + 0x28) = 0xfffffffffffffffe;
        if (DAT_14001ac08 != 0) {
          *(undefined4 *)(*(longlong *)(lVar4 + DAT_14001ac08) + 0x18) = 0xfffffffe;
        }
      }
      else {
        *(HANDLE *)(lVar2 + 0x28) = hFile;
        if ((uVar1 & 0xff) == 2) {
          *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 0x40;
        }
        else if ((uVar1 & 0xff) == 3) {
          *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 8;
        }
      }
    }
    else {
      *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | 0x80;
    }
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 8;
  } while (uVar3 != 3);
  return;
}




/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Library: Visual Studio 2015 Release */

bool __acrt_initialize_lowio(void)

{
  longlong lVar1;
  bool bVar2;
  
  __acrt_lock(7);
  lVar1 = __acrt_lowio_ensure_fh_exists(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    initialize_inherited_file_handles_nolock();
    initialize_stdio_handles_nolock();
  }
  __acrt_unlock(7);
  return bVar2;
}




/* Library Function - Single Match
    __acrt_execute_initializers
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_execute_initializers(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
        _guard_check_icall();
        in_RAX = (undefined8 *)(*pcVar1)();
        if ((char)in_RAX == '\0') break;
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != param_2);
    if (puVar2 != param_2) {
      if (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        do {
          if ((puVar2[-1] != 0) && (pcVar1 = (code *)*puVar2, pcVar1 != (code *)0x0)) {
            _guard_check_icall();
            (*pcVar1)(0);
          }
          in_RAX = puVar2 + -1;
          puVar2 = puVar2 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_execute_uninitializers
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_execute_uninitializers(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + -1;
    do {
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
        _guard_check_icall();
        (*pcVar1)(0);
      }
      in_RAX = puVar2 + -1;
      puVar2 = puVar2 + -2;
    } while (in_RAX != param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000a43c(undefined8 param_1)

{
  _DAT_14001abb8 = param_1;
  return;
}




/* Library Function - Single Match
    _callnewh
   
   Library: Visual Studio 2015 Release */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = (code *)_query_new_handler();
  if (pcVar2 != (code *)0x0) {
    _guard_check_icall();
    iVar1 = (*pcVar2)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _query_new_handler
   
   Library: Visual Studio 2015 Release */

ulonglong _query_new_handler(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_140019010 & 0x3f;
  uVar2 = DAT_140019010 ^ _DAT_14001abb8;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Same Base Name
    public: void (__cdecl*__cdecl __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_450d765d439847d4c735a33c368b5fc0>,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &
   __ptr64,class <lambda_601a2a7da3b7a96e9554ac7215c4b07c> >(class
   <lambda_450d765d439847d4c735a33c368b5fc0> && __ptr64,class
   <lambda_44731a7d0e6d81c3e6aa82d741081786> & __ptr64,class
   <lambda_601a2a7da3b7a96e9554ac7215c4b07c> && __ptr64) __ptr64)(int)
    public: void (__cdecl*__cdecl __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_c36588078e9f5dfd39652860aa6b3aaf>,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &
   __ptr64,class <lambda_dc9d2797ccde5d239b4a0efae8ebd7db> >(class
   <lambda_c36588078e9f5dfd39652860aa6b3aaf> && __ptr64,class
   <lambda_ec61778202f4f5fc7e7711acc23c3bca> & __ptr64,class
   <lambda_dc9d2797ccde5d239b4a0efae8ebd7db> && __ptr64) __ptr64)(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_140019010 & 0x3f;
  uVar2 = DAT_140019010 ^ _DAT_14001abd0;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Library: Visual Studio 2015 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  operator()<>(local_res8,local_res18,local_res8,local_res10);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000a530(undefined8 param_1)

{
  _DAT_14001abc0 = param_1;
  _DAT_14001abc8 = param_1;
  _DAT_14001abd0 = param_1;
  _DAT_14001abd8 = param_1;
  return;
}




/* Library Function - Single Match
    raise
   
   Library: Visual Studio 2015 Release */

int __cdecl raise(int _SigNum)

{
  bool bVar1;
  ulong *puVar2;
  __acrt_ptd *p_Var3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  __acrt_ptd *p_Var9;
  undefined4 local_res18;
  longlong local_res20;
  
  p_Var3 = (__acrt_ptd *)0x0;
  p_Var9 = (__acrt_ptd *)0x0;
  local_res18 = 0;
  bVar1 = true;
  if (_SigNum == 2) {
LAB_14000a60b:
    if (_SigNum == 2) {
      puVar8 = (ulonglong *)&DAT_14001abc0;
    }
    else if (_SigNum == 6) {
LAB_14000a628:
      puVar8 = (ulonglong *)&DAT_14001abd0;
      p_Var9 = p_Var3;
    }
    else if (_SigNum == 0xf) {
      puVar8 = (ulonglong *)&DAT_14001abd8;
    }
    else if (_SigNum == 0x15) {
      puVar8 = (ulonglong *)&DAT_14001abc8;
      p_Var9 = p_Var3;
    }
    else {
      if (_SigNum == 0x16) goto LAB_14000a628;
      puVar8 = (ulonglong *)0x0;
      p_Var9 = p_Var3;
    }
  }
  else {
    if (_SigNum != 4) {
      if (_SigNum != 6) {
        if ((_SigNum == 8) || (_SigNum == 0xb)) goto LAB_14000a5a4;
        if ((_SigNum != 0xf) && (1 < _SigNum - 0x15U)) goto LAB_14000a5e8;
      }
      goto LAB_14000a60b;
    }
LAB_14000a5a4:
    p_Var9 = __acrt_getptd_noexit();
    if (p_Var9 == (__acrt_ptd *)0x0) {
      return -1;
    }
    lVar6 = *(longlong *)p_Var9;
    lVar4 = lVar6 + 0xc0;
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x10) {
      if (*(int *)(lVar6 + 4) == _SigNum) goto LAB_14000a5dc;
    }
    lVar6 = 0;
LAB_14000a5dc:
    if (lVar6 == 0) {
LAB_14000a5e8:
      puVar2 = __doserrno();
      *puVar2 = 0x16;
      FUN_14000803c();
      return -1;
    }
    puVar8 = (ulonglong *)(lVar6 + 8);
    bVar1 = false;
  }
  local_res20 = 0;
  if (bVar1) {
    __acrt_lock(3);
    bVar5 = (byte)DAT_140019010 & 0x3f;
    pcVar7 = (code *)((DAT_140019010 ^ *puVar8) >> bVar5 | (DAT_140019010 ^ *puVar8) << 0x40 - bVar5
                     );
  }
  else {
    pcVar7 = (code *)*puVar8;
  }
  if (pcVar7 == (code *)0x1) goto LAB_14000a75d;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_140006da0(3);
  }
  if (((uint)_SigNum < 0xc) && ((0x910U >> (_SigNum & 0x1fU) & 1) != 0)) {
    local_res20 = *(longlong *)(p_Var9 + 8);
    *(longlong *)(p_Var9 + 8) = 0;
    if (_SigNum == 8) {
      p_Var3 = __acrt_getptd();
      local_res18 = *(undefined4 *)(p_Var3 + 0x10);
      p_Var3 = __acrt_getptd();
      *(undefined4 *)(p_Var3 + 0x10) = 0x8c;
      goto LAB_14000a700;
    }
  }
  else {
LAB_14000a700:
    if (_SigNum == 8) {
      lVar6 = *(longlong *)p_Var9;
      for (lVar4 = lVar6 + 0x30; lVar4 != lVar6 + 0xc0; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_14000a75d;
    }
  }
  bVar5 = 0x40 - ((byte)DAT_140019010 & 0x3f) & 0x3f;
  *puVar8 = ((ulonglong)(0 >> bVar5) | 0L << 0x40 - bVar5) ^ DAT_140019010;
LAB_14000a75d:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (_SigNum == 8) {
      p_Var3 = __acrt_getptd();
      _guard_check_icall();
      (*pcVar7)(8,*(undefined4 *)(p_Var3 + 0x10));
    }
    else {
      _guard_check_icall();
      (*pcVar7)(_SigNum);
    }
    if ((((uint)_SigNum < 0xc) && ((0x910U >> (_SigNum & 0x1fU) & 1) != 0)) &&
       (*(longlong *)(p_Var9 + 8) = local_res20, _SigNum == 8)) {
      p_Var9 = __acrt_getptd();
      *(undefined4 *)(p_Var9 + 0x10) = local_res18;
    }
  }
  return 0;
}




/* Library Function - Single Match
    wcsncpy_s
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  ulong *puVar2;
  wchar_t *pwVar3;
  ulong uVar4;
  rsize_t rVar5;
  rsize_t rVar6;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_14000a832:
      if (_SizeInWords != 0) {
        if (_MaxCount == 0) {
          *_Dst = L'\0';
          return 0;
        }
        if (_Src != (wchar_t *)0x0) {
          pwVar3 = _Dst;
          rVar5 = _SizeInWords;
          rVar6 = _MaxCount;
          if (_MaxCount == 0xffffffffffffffff) {
            do {
              wVar1 = *(wchar_t *)(((longlong)_Src - (longlong)_Dst) + (longlong)pwVar3);
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              if (wVar1 == L'\0') break;
              rVar5 = rVar5 - 1;
            } while (rVar5 != 0);
          }
          else {
            do {
              wVar1 = *(wchar_t *)(((longlong)_Src - (longlong)_Dst) + (longlong)pwVar3);
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              if ((wVar1 == L'\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
              rVar6 = rVar6 - 1;
            } while (rVar6 != 0);
            if (rVar6 == 0) {
              *pwVar3 = L'\0';
            }
          }
          if (rVar5 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffffffffffff) {
            _Dst[_SizeInWords - 1] = L'\0';
            return 0x50;
          }
          *_Dst = L'\0';
          puVar2 = __doserrno();
          uVar4 = 0x22;
          goto LAB_14000a815;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_14000a832;
  puVar2 = __doserrno();
  uVar4 = 0x16;
LAB_14000a815:
  *puVar2 = uVar4;
  FUN_14000803c();
  return uVar4;
}




/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2015 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)_calloc_base(0x40,0x40);
  puVar3 = (undefined8 *)0x0;
  if ((puVar2 != (undefined8 *)0x0) && (puVar3 = puVar2, puVar2 != puVar2 + 0x200)) {
    puVar4 = puVar2 + 6;
    do {
      __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar4 + -6),4000,0);
      puVar4[-1] = 0xffffffffffffffff;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0xa0a0000;
      *(undefined1 *)((longlong)puVar4 + 0xc) = 10;
      *(byte *)((longlong)puVar4 + 0xd) = *(byte *)((longlong)puVar4 + 0xd) & 0xf8;
      *(undefined1 *)((longlong)puVar4 + 0xe) = 0;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 8;
    } while (puVar1 != puVar2 + 0x200);
  }
  _free_base((LPVOID)0x0);
  return puVar3;
}




/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2015 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = param_1;
    if (param_1 != (LPCRITICAL_SECTION)&param_1[0x66].OwningThread) {
      do {
        DeleteCriticalSection(lpCriticalSection);
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].LockSemaphore;
      } while (lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x66].OwningThread);
    }
    _free_base(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2015 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  if (param_1 < 0x2000) {
    __acrt_lock(7);
    lVar5 = lVar4;
    iVar1 = DAT_14001abb0;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_14001a7b0)[lVar5] == 0) {
        puVar3 = __acrt_lowio_create_handle_array();
        (&DAT_14001a7b0)[lVar5] = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          lVar4 = 0xc;
          break;
        }
        iVar1 = DAT_14001abb0 + 0x40;
        DAT_14001abb0 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = __doserrno();
    lVar4 = 9;
    *puVar2 = 9;
    FUN_14000803c();
  }
  return lVar4;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lowio_lock_fh
    __acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void FID_conflict___acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((ulonglong)(param_1 & 0x3f) * 0x40 + (&DAT_14001a7b0)[(longlong)(int)param_1 >> 6]));
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lowio_lock_fh
    __acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void FID_conflict___acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((ulonglong)(param_1 & 0x3f) * 0x40 + (&DAT_14001a7b0)[(longlong)(int)param_1 >> 6]));
  return;
}




/* Library Function - Single Match
    _free_osfhnd
   
   Library: Visual Studio 2015 Release */

int __cdecl _free_osfhnd(int param_1)

{
  int iVar1;
  ulong *puVar2;
  DWORD nStdHandle;
  longlong lVar3;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_14001abb0)) {
    lVar3 = (ulonglong)(param_1 & 0x3f) * 0x40;
    if (((*(byte *)((&DAT_14001a7b0)[(longlong)param_1 >> 6] + 0x38 + lVar3) & 1) != 0) &&
       (*(longlong *)((&DAT_14001a7b0)[(longlong)param_1 >> 6] + 0x28 + lVar3) != -1)) {
      iVar1 = FUN_14000797c();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14000ab38;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14000ab38:
      *(undefined8 *)((&DAT_14001a7b0)[(longlong)param_1 >> 6] + 0x28 + lVar3) = 0xffffffffffffffff;
      return 0;
    }
  }
  puVar2 = __doserrno();
  *puVar2 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return -1;
}




/* Library Function - Single Match
    _get_osfhandle
   
   Library: Visual Studio 2015 Release */

intptr_t __cdecl _get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  longlong lVar2;
  
  if (_FileHandle == -2) {
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_14001abb0)) {
      lVar2 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
      if ((*(byte *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 + lVar2) & 1) != 0) {
        return *(intptr_t *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x28 + lVar2);
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_14000803c();
  }
  return -1;
}




/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_140019738) {
      _free_base(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_140019740) {
      _free_base(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_140019748) {
      _free_base(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_140019750) {
      _free_base(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_140019758) {
      _free_base(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_140019760) {
      _free_base(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_140019768) {
      _free_base(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_140019788) {
      _free_base(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_140019790) {
      _free_base(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_140019798) {
      _free_base(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_1400197a0) {
      _free_base(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_1400197a8) {
      _free_base(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_1400197b0) {
      _free_base(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}




/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_140019720) {
      _free_base((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_140019728) {
      _free_base((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_140019730) {
      _free_base((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_140019778) {
      _free_base((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_140019780) {
      _free_base((undefined *)param_1[0xc]);
    }
  }
  return;
}




/* Library Function - Single Match
    void __cdecl free_crt_array_internal(void const * __ptr64 * __ptr64 const,unsigned __int64)
   
   Library: Visual Studio 2015 Release */

void __cdecl free_crt_array_internal(void **param_1,__uint64 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  uVar1 = (ulonglong)((longlong)(param_1 + param_2) + (7 - (longlong)param_1)) >> 3;
  if (param_1 + param_2 < param_1) {
    uVar1 = uVar2;
  }
  if (uVar1 != 0) {
    do {
      _free_base(*param_1);
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_locale_free_time
   
   Library: Visual Studio 2015 Release */

void __acrt_locale_free_time(void **param_1)

{
  if (param_1 != (void **)0x0) {
    free_crt_array_internal(param_1,7);
    free_crt_array_internal(param_1 + 7,7);
    free_crt_array_internal(param_1 + 0xe,0xc);
    free_crt_array_internal(param_1 + 0x1a,0xc);
    free_crt_array_internal(param_1 + 0x26,2);
    _free_base(param_1[0x28]);
    _free_base(param_1[0x29]);
    _free_base(param_1[0x2a]);
    free_crt_array_internal(param_1 + 0x2c,7);
    free_crt_array_internal(param_1 + 0x33,7);
    free_crt_array_internal(param_1 + 0x3a,0xc);
    free_crt_array_internal(param_1 + 0x46,0xc);
    free_crt_array_internal(param_1 + 0x52,2);
    _free_base(param_1[0x54]);
    _free_base(param_1[0x55]);
    _free_base(param_1[0x56]);
    _free_base(param_1[0x57]);
  }
  return;
}




/* Library Function - Single Match
    __pctype_func
   
   Library: Visual Studio 2015 Release */

ushort * __cdecl __pctype_func(void)

{
  __acrt_ptd *p_Var1;
  undefined8 *local_res8 [4];
  
  p_Var1 = __acrt_getptd();
  local_res8[0] = *(undefined8 **)(p_Var1 + 0x90);
  __acrt_update_locale_info((longlong)p_Var1,(longlong *)local_res8);
  return (ushort *)*local_res8[0];
}




/* Library Function - Single Match
    _malloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  ulong *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_14001a7a8,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_140007c38();
    } while ((iVar1 != 0) && (iVar1 = _callnewh(param_1), iVar1 != 0));
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}




ulonglong FUN_14000af54(short *param_1,ulonglong param_2)

{
  undefined1 (*pauVar1) [32];
  short *psVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined1 (*pauVar5) [32];
  short *psVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  
  psVar6 = param_1;
  if (DAT_140019018 < 5) {
    if (DAT_140019018 < 1) {
      if (param_1 != param_1 + param_2) {
        do {
          if (*psVar6 == 0) break;
          psVar6 = psVar6 + 1;
        } while (psVar6 != param_1 + param_2);
      }
    }
    else {
      if (((ulonglong)param_1 & 1) == 0) {
        uVar8 = (ulonglong)((uint)param_1 & 0xf);
        uVar8 = (-(ulonglong)(uVar8 != 0) & 0x10 - uVar8) >> 1;
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        if (param_1 != param_1 + uVar8) {
          do {
            if (*psVar6 == 0) break;
            psVar6 = psVar6 + 1;
          } while (psVar6 != param_1 + uVar8);
        }
        uVar4 = (longlong)psVar6 - (longlong)param_1 >> 1;
        if (uVar4 != uVar8) {
          return uVar4;
        }
        psVar6 = param_1 + uVar4;
        psVar2 = psVar6 + ((param_2 - uVar8) - (ulonglong)((uint)(param_2 - uVar8) & 0xf));
        for (; psVar6 != psVar2; psVar6 = psVar6 + 8) {
          auVar9._0_2_ = -(ushort)(*psVar6 == 0);
          auVar9._2_2_ = -(ushort)(psVar6[1] == 0);
          auVar9._4_2_ = -(ushort)(psVar6[2] == 0);
          auVar9._6_2_ = -(ushort)(psVar6[3] == 0);
          auVar9._8_2_ = -(ushort)(psVar6[4] == 0);
          auVar9._10_2_ = -(ushort)(psVar6[5] == 0);
          auVar9._12_2_ = -(ushort)(psVar6[6] == 0);
          auVar9._14_2_ = -(ushort)(psVar6[7] == 0);
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
        lVar7 = (longlong)psVar6 - (longlong)param_1;
        goto LAB_14000b138;
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
    if (((ulonglong)param_1 & 1) == 0) {
      uVar8 = (ulonglong)((uint)param_1 & 0x1f);
      uVar8 = (-(ulonglong)(uVar8 != 0) & 0x20 - uVar8) >> 1;
      if (param_2 < uVar8) {
        uVar8 = param_2;
      }
      if (param_1 != param_1 + uVar8) {
        do {
          if (*psVar6 == 0) break;
          psVar6 = psVar6 + 1;
        } while (psVar6 != param_1 + uVar8);
      }
      uVar4 = (longlong)psVar6 - (longlong)param_1 >> 1;
      if (uVar4 != uVar8) {
        return uVar4;
      }
      pauVar5 = (undefined1 (*) [32])(param_1 + uVar4);
      pauVar1 = (undefined1 (*) [32])
                ((longlong)pauVar5 +
                ((param_2 - uVar8) - (ulonglong)((uint)(param_2 - uVar8) & 0x1f)) * 2);
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
      return (longlong)pauVar5 - (longlong)param_1 >> 1;
    }
    if (param_1 != param_1 + param_2) {
      do {
        if (*psVar6 == 0) break;
        psVar6 = psVar6 + 1;
      } while (psVar6 != param_1 + param_2);
    }
  }
  lVar7 = (longlong)psVar6 - (longlong)param_1;
LAB_14000b138:
  return lVar7 >> 1;
}




/* Library Function - Single Match
    wcspbrk
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  do {
    if (*_Str == L'\0') {
      return (wchar_t *)0x0;
    }
    if (*_Control != L'\0') {
      wVar2 = *_Control;
      pwVar1 = _Control;
      do {
        if (wVar2 == *_Str) {
          return _Str;
        }
        pwVar1 = pwVar1 + 1;
        wVar2 = *pwVar1;
      } while (wVar2 != L'\0');
    }
    _Str = _Str + 1;
  } while( true );
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __acrt_GetStringTypeA
   
   Library: Visual Studio 2015 Release */

void __acrt_GetStringTypeA
               (__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,
               LPWORD param_5,UINT param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 (*lpSrcStr) [16];
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStackY_88 [32];
  longlong local_58;
  longlong local_50;
  char local_40;
  ulonglong local_38;
  
  puVar6 = auStackY_88;
  puVar7 = auStackY_88;
  local_38 = DAT_140019010 ^ (ulonglong)&local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_50 + 0xc);
  }
  iVar2 = MultiByteToWideChar(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0)
  ;
  if (iVar2 == 0) goto LAB_14000b2f4;
  uVar5 = (longlong)iVar2 * 2;
  if ((uVar5 + 0x10 & -(ulonglong)(uVar5 < uVar5 + 0x10)) == 0) {
    lpSrcStr = (undefined1 (*) [16])0x0;
    puVar7 = auStackY_88;
LAB_14000b28f:
    if (lpSrcStr != (undefined1 (*) [16])0x0) {
      *(undefined8 *)(puVar7 + -8) = 0x14000b2a1;
      FUN_140004240(lpSrcStr,0,uVar5);
      *(int *)(puVar7 + 0x28) = iVar2;
      *(undefined1 (**) [16])(puVar7 + 0x20) = lpSrcStr;
      *(undefined8 *)(puVar7 + -8) = 0x14000b2be;
      iVar2 = MultiByteToWideChar(param_6,1,param_3,param_4,*(LPWSTR *)(puVar7 + 0x20),
                                  *(int *)(puVar7 + 0x28));
      if (iVar2 != 0) {
        *(undefined8 *)(puVar7 + -8) = 0x14000b2d8;
        GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar2,param_5);
      }
    }
  }
  else {
    uVar4 = uVar5 + 0x10;
    if (0x400 < (-(ulonglong)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10)) {
      lpSrcStr = (undefined1 (*) [16])_malloc_base(-(ulonglong)(uVar5 < uVar4) & uVar4);
      puVar7 = auStackY_88;
      if (lpSrcStr != (undefined1 (*) [16])0x0) {
        *(undefined4 *)*lpSrcStr = 0xdddd;
        goto LAB_14000b287;
      }
      goto LAB_14000b28f;
    }
    uVar4 = -(ulonglong)(uVar5 < uVar4) & uVar4;
    uVar3 = uVar4 + 0xf;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar3 & 0xfffffffffffffff0);
    puVar7 = auStackY_88 + lVar1;
    puVar6 = auStackY_88 + lVar1;
    lpSrcStr = (undefined1 (*) [16])((longlong)&local_58 + lVar1);
    if (lpSrcStr != (undefined1 (*) [16])0x0) {
      *(undefined4 *)*lpSrcStr = 0xcccc;
LAB_14000b287:
      lpSrcStr = lpSrcStr + 1;
      puVar7 = puVar6;
      goto LAB_14000b28f;
    }
  }
  if ((lpSrcStr != (undefined1 (*) [16])0x0) && (*(int *)lpSrcStr[-1] == 0xdddd)) {
    *(undefined8 *)(puVar7 + -8) = 0x14000b2f4;
    _free_base(lpSrcStr + -1);
  }
LAB_14000b2f4:
  if (local_40 != '\0') {
    *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_38 ^ (ulonglong)&local_58;
  *(undefined8 *)(puVar7 + -8) = 0x14000b313;
  __security_check_cookie(uVar5);
  return;
}




/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Library: Visual Studio 2015 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_1400191c8) &&
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
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}




/* Library Function - Single Match
    __acrt_free_locale
   
   Library: Visual Studio 2015 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_140019720)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free_base(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free_base(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    _free_base(*(LPVOID *)((longlong)param_1 + 0xe0));
    _free_base(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    _free_base((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    _free_base((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    _free_base((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    _free_base(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1400191c8) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free_base(piVar1);
      _free_base((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free_base(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  _free_base(param_1);
  return;
}




/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1400102c0)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}




/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1400102c0)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    _free_base(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1400102c0)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}




/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Library: Visual Studio 2015 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_1400191c8) &&
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
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}




/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Library: Visual Studio 2015 Release */

undefined ** __acrt_update_thread_locale_data(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  
  p_Var1 = __acrt_getptd();
  if (((*(uint *)(p_Var1 + 0x3a8) & DAT_1400197c0) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((undefined8 *)(p_Var1 + 0x90),DAT_14001a398);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return ppuVar2;
}




/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Library: Visual Studio 2015 Release */

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_140019060)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}




/* Library Function - Single Match
    _mbtowc_l
   
   Library: Visual Studio 2015 Release */

int __cdecl _mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
      if ((local_20.locinfo)->locale_name[2] == (wchar_t *)0x0) {
        if (_DstCh != (wchar_t *)0x0) {
          *_DstCh = (ushort)(byte)*_SrcCh;
        }
        uVar3 = 1;
      }
      else {
        iVar1 = _isleadbyte_l((uint)(byte)*_SrcCh,&local_20);
        uVar3 = 1;
        if (iVar1 == 0) {
          iVar1 = MultiByteToWideChar((local_20.locinfo)->lc_time_cp,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar1 != 0) goto LAB_14000b86a;
        }
        else {
          uVar3 = (local_20.locinfo)->lc_collate_cp;
          if ((((1 < (int)uVar3) && ((int)uVar3 <= (int)_SrcSizeInBytes)) &&
              (iVar1 = MultiByteToWideChar((local_20.locinfo)->lc_time_cp,9,_SrcCh,uVar3,_DstCh,
                                           (uint)(_DstCh != (wchar_t *)0x0)), iVar1 != 0)) ||
             (((ulonglong)(longlong)(int)(local_20.locinfo)->lc_collate_cp <= _SrcSizeInBytes &&
              (_SrcCh[1] != '\0')))) {
            uVar3 = (local_20.locinfo)->lc_collate_cp;
            goto LAB_14000b86a;
          }
        }
        puVar2 = __doserrno();
        uVar3 = 0xffffffff;
        *puVar2 = 0x2a;
      }
LAB_14000b86a:
      if (local_10 == '\0') {
        return uVar3;
      }
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      return uVar3;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}




void FUN_14000b884(wchar_t *param_1,char *param_2,size_t param_3)

{
  _mbtowc_l(param_1,param_2,param_3,(_locale_t)0x0);
  return;
}




/* Library Function - Single Match
    _fileno
   
   Library: Visual Studio 2015 Release */

int __cdecl _fileno(FILE *_File)

{
  int iVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_14000803c();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
}




/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2015 Release */

void __acrt_uninitialize_stdio(void)

{
  longlong lVar1;
  
  FUN_14000c634();
  _fcloseall();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_14001ac08));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_14001ac08) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  _free_base(DAT_14001ac08);
  DAT_14001ac08 = (LPVOID)0x0;
  return;
}




void FUN_14000ba30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000ba34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




void FUN_14000ba3c(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000ba40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2015 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  uint uVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_14000ba5f:
    uVar2 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_140019710 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar1 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar1 == 0) goto LAB_14000ba5f;
    }
    uVar2 = (uint)(local_res8[0] & _Type);
  }
  return uVar2;
}




/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Library: Visual Studio 2015 Release */

void __acrt_LCMapStringW(wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                        int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = param_4;
  if (0 < param_4) {
    uVar2 = FUN_14000af54(param_3,(longlong)param_4);
    iVar1 = (int)uVar2;
    iVar3 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  __acrt_LCMapStringEx(param_1,param_2,param_3,iVar3,param_5,param_6,0,0,0);
  return;
}




/* Library Function - Single Match
    int __cdecl GetTableIndexFromLocaleName(wchar_t const * __ptr64)
   
   Library: Visual Studio 2015 Release */

int __cdecl GetTableIndexFromLocaleName(wchar_t *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = 0xe3;
  while( true ) {
    lVar4 = 0x55;
    iVar1 = (iVar8 + iVar7) / 2;
    puVar6 = (ushort *)(&PTR_DAT_1400132d0)[(longlong)iVar1 * 2];
    lVar5 = (longlong)param_1 - (longlong)puVar6;
    do {
      uVar3 = *(ushort *)(lVar5 + (longlong)puVar6);
      if ((ushort)(uVar3 - 0x41) < 0x1a) {
        uVar3 = uVar3 + 0x20;
      }
      uVar2 = *puVar6;
      if ((ushort)(uVar2 - 0x41) < 0x1a) {
        uVar2 = uVar2 + 0x20;
      }
      puVar6 = puVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (((lVar4 != 0) && (uVar3 != 0)) && (uVar3 == uVar2));
    if ((uint)uVar3 == (uint)uVar2) break;
    if ((int)((uint)uVar3 - (uint)uVar2) < 0) {
      iVar8 = iVar1 + -1;
    }
    else {
      iVar7 = iVar1 + 1;
    }
    if (iVar8 < iVar7) {
      return -1;
    }
  }
  return *(int *)(&UNK_1400132d8 + (longlong)iVar1 * 0x10);
}




/* Library Function - Single Match
    __acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2015 Release */

undefined4 __acrt_DownlevelLocaleNameToLCID(wchar_t *param_1)

{
  int iVar1;
  
  if (((param_1 != (wchar_t *)0x0) && (iVar1 = GetTableIndexFromLocaleName(param_1), -1 < iVar1)) &&
     ((ulonglong)(longlong)iVar1 < 0xe4)) {
    return *(undefined4 *)(&DAT_140011870 + (longlong)iVar1 * 0x10);
  }
  return 0;
}




/* Library Function - Single Match
    void __cdecl shortsort(char * __ptr64,char * __ptr64,unsigned __int64,int (__cdecl*)(void const
   * __ptr64,void const * __ptr64))
   
   Library: Visual Studio 2015 Release */

void __cdecl
shortsort(char *param_1,char *param_2,__uint64 param_3,_func_int_void_ptr_void_ptr *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  __uint64 _Var5;
  
  if (param_1 < param_2) {
    pcVar3 = param_1 + param_3;
    pcVar4 = param_1;
    do {
      for (; pcVar3 <= param_2; pcVar3 = pcVar3 + param_3) {
        _guard_check_icall();
        iVar2 = (*param_4)(pcVar3,pcVar4);
        if (0 < iVar2) {
          pcVar4 = pcVar3;
        }
      }
      if ((pcVar4 != param_2) && (param_3 != 0)) {
        pcVar3 = param_2;
        _Var5 = param_3;
        do {
          cVar1 = pcVar3[(longlong)pcVar4 - (longlong)param_2];
          pcVar3[(longlong)pcVar4 - (longlong)param_2] = *pcVar3;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Var5 = _Var5 - 1;
        } while (_Var5 != 0);
      }
      param_2 = param_2 + -param_3;
      pcVar3 = param_1 + param_3;
      pcVar4 = param_1;
    } while (param_1 < param_2);
  }
  return;
}




/* Library Function - Single Match
    qsort
   
   Library: Visual Studio 2015 Release */

void __cdecl
qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_458 [32];
  undefined8 auStack_438 [62];
  undefined8 auStack_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_140019010 ^ (ulonglong)auStack_458;
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_14000803c();
  }
  else if (1 < _NumOfElements) {
    lVar10 = 0;
    pcVar11 = (char *)((_NumOfElements - 1) * _SizeOfElements + (longlong)_Base);
LAB_14000bda1:
    while (uVar1 = (ulonglong)((longlong)pcVar11 - (longlong)_Base) / _SizeOfElements + 1, 8 < uVar1
          ) {
      pcVar7 = (char *)((longlong)_Base + (uVar1 >> 1) * _SizeOfElements);
      _guard_check_icall();
      iVar3 = (*_PtFuncCompare)(_Base,pcVar7);
      if ((0 < iVar3) && ((char *)_Base != pcVar7)) {
        pcVar6 = pcVar7;
        sVar9 = _SizeOfElements;
        do {
          cVar2 = pcVar6[(longlong)_Base - (longlong)pcVar7];
          pcVar6[(longlong)_Base - (longlong)pcVar7] = *pcVar6;
          *pcVar6 = cVar2;
          pcVar6 = pcVar6 + 1;
          sVar9 = sVar9 - 1;
        } while (sVar9 != 0);
      }
      _guard_check_icall();
      iVar3 = (*_PtFuncCompare)(_Base,pcVar11);
      if ((0 < iVar3) && ((char *)_Base != pcVar11)) {
        pcVar6 = pcVar11;
        sVar9 = _SizeOfElements;
        do {
          cVar2 = pcVar6[(longlong)_Base - (longlong)pcVar11];
          pcVar6[(longlong)_Base - (longlong)pcVar11] = *pcVar6;
          *pcVar6 = cVar2;
          pcVar6 = pcVar6 + 1;
          sVar9 = sVar9 - 1;
        } while (sVar9 != 0);
      }
      _guard_check_icall();
      iVar3 = (*_PtFuncCompare)(pcVar7,pcVar11);
      pcVar6 = (char *)_Base;
      pcVar8 = pcVar11;
      if ((0 < iVar3) && (pcVar7 != pcVar11)) {
        pcVar5 = pcVar11;
        sVar9 = _SizeOfElements;
        do {
          cVar2 = pcVar5[(longlong)pcVar7 - (longlong)pcVar11];
          pcVar5[(longlong)pcVar7 - (longlong)pcVar11] = *pcVar5;
          *pcVar5 = cVar2;
          pcVar5 = pcVar5 + 1;
          sVar9 = sVar9 - 1;
        } while (sVar9 != 0);
      }
LAB_14000beb0:
      if (pcVar6 < pcVar7) {
        do {
          pcVar6 = pcVar6 + _SizeOfElements;
          if (pcVar7 <= pcVar6) goto LAB_14000bed8;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar6,pcVar7);
        } while (iVar3 < 1);
        if (pcVar7 <= pcVar6) goto LAB_14000bed8;
      }
      else {
LAB_14000bed8:
        do {
          pcVar6 = pcVar6 + _SizeOfElements;
          if (pcVar11 < pcVar6) break;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar6,pcVar7);
        } while (iVar3 < 1);
      }
      do {
        pcVar8 = pcVar8 + -_SizeOfElements;
        if (pcVar8 <= pcVar7) break;
        _guard_check_icall();
        iVar3 = (*_PtFuncCompare)(pcVar8,pcVar7);
      } while (0 < iVar3);
      if (pcVar6 <= pcVar8) {
        if (pcVar6 != pcVar8) {
          pcVar5 = pcVar8;
          sVar9 = _SizeOfElements;
          do {
            cVar2 = pcVar5[(longlong)pcVar6 - (longlong)pcVar8];
            pcVar5[(longlong)pcVar6 - (longlong)pcVar8] = *pcVar5;
            *pcVar5 = cVar2;
            pcVar5 = pcVar5 + 1;
            sVar9 = sVar9 - 1;
          } while (sVar9 != 0);
        }
        if (pcVar7 == pcVar8) {
          pcVar7 = pcVar6;
        }
        goto LAB_14000beb0;
      }
      pcVar8 = pcVar8 + _SizeOfElements;
      if (pcVar7 < pcVar8) {
        do {
          pcVar8 = pcVar8 + -_SizeOfElements;
          if (pcVar8 <= pcVar7) goto LAB_14000bf84;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar8,pcVar7);
        } while (iVar3 == 0);
        if (pcVar8 <= pcVar7) goto LAB_14000bf84;
      }
      else {
LAB_14000bf84:
        do {
          pcVar8 = pcVar8 + -_SizeOfElements;
          if (pcVar8 <= _Base) break;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar8,pcVar7);
        } while (iVar3 == 0);
      }
      if ((longlong)pcVar8 - (longlong)_Base < (longlong)pcVar11 - (longlong)pcVar6)
      goto LAB_14000bfd9;
      if (_Base < pcVar8) {
        auStack_438[lVar10] = _Base;
        auStack_248[lVar10] = pcVar8;
        lVar10 = lVar10 + 1;
      }
      _Base = pcVar6;
      if (pcVar11 <= pcVar6) goto LAB_14000bdc7;
    }
    shortsort((char *)_Base,pcVar11,_SizeOfElements,(_func_int_void_ptr_void_ptr *)_PtFuncCompare);
    goto LAB_14000bdc7;
  }
LAB_14000c027:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_458);
  return;
LAB_14000bfd9:
  if (pcVar6 < pcVar11) {
    auStack_438[lVar10] = pcVar6;
    auStack_248[lVar10] = pcVar11;
    lVar10 = lVar10 + 1;
  }
  pcVar11 = pcVar8;
  if (pcVar8 <= _Base) {
LAB_14000bdc7:
    lVar10 = lVar10 + -1;
    if (-1 < lVar10) {
      _Base = (char *)auStack_438[lVar10];
      pcVar11 = (char *)auStack_248[lVar10];
      goto LAB_14000bda1;
    }
    goto LAB_14000c027;
  }
  goto LAB_14000bda1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __acrt_LCMapStringA_stat(struct __crt_locale_pointers * __ptr64,wchar_t const *
   __ptr64,unsigned long,char const * __ptr64,int,char * __ptr64,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
__acrt_LCMapStringA_stat
          (__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int extraout_EAX;
  size_t sVar5;
  ulonglong uVar6;
  LPCWSTR pWVar7;
  LPCWSTR lpWideCharStr;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStackY_88 [32];
  wchar_t *local_38;
  ulonglong local_30;
  
  puVar9 = auStackY_88;
  puVar11 = auStackY_88;
  local_30 = DAT_140019010 ^ (ulonglong)&local_38;
  iVar4 = param_5;
  local_38 = param_2;
  if (0 < param_5) {
    sVar5 = __strncnt(param_4,(longlong)param_5);
    iVar3 = (int)sVar5;
    iVar4 = iVar3 + 1;
    if (param_5 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*(longlong *)param_1 + 0xc);
  }
  iVar3 = MultiByteToWideChar(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar4,(LPWSTR)0x0,0);
  puVar12 = auStackY_88;
  if (iVar3 == 0) goto LAB_14000c357;
  uVar6 = (longlong)iVar3 * 2;
  if ((uVar6 + 0x10 & -(ulonglong)(uVar6 < uVar6 + 0x10)) == 0) {
    pWVar7 = (LPCWSTR)0x0;
LAB_14000c16f:
    if (pWVar7 != (LPCWSTR)0x0) {
      *(int *)(puVar11 + 0x28) = iVar3;
      *(LPCWSTR *)(puVar11 + 0x20) = pWVar7;
      *(undefined8 *)(puVar11 + -8) = 0x14000c196;
      iVar4 = MultiByteToWideChar(param_8,1,param_4,iVar4,*(LPWSTR *)(puVar11 + 0x20),
                                  *(int *)(puVar11 + 0x28));
      if (iVar4 != 0) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        pwVar2 = local_38;
        *(undefined4 *)(puVar11 + 0x28) = 0;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + -8) = 0x14000c1d0;
        iVar4 = __acrt_LCMapStringEx
                          (pwVar2,param_3,pWVar7,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                           *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                           *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
        if (iVar4 != 0) {
          if ((param_3 & 0x400) == 0) {
            uVar6 = (longlong)iVar4 * 2;
            if ((uVar6 + 0x10 & -(ulonglong)(uVar6 < uVar6 + 0x10)) == 0) {
              lpWideCharStr = (LPCWSTR)0x0;
            }
            else {
              uVar8 = uVar6 + 0x10;
              if ((-(ulonglong)(uVar6 < uVar6 + 0x10) & uVar6 + 0x10) < 0x401) {
                uVar8 = -(ulonglong)(uVar6 < uVar8) & uVar8;
                uVar6 = uVar8 + 0xf;
                if (uVar6 <= uVar8) {
                  uVar6 = 0xffffffffffffff0;
                }
                *(undefined8 *)(puVar11 + -8) = 0x14000c288;
                lVar1 = -(uVar6 & 0xfffffffffffffff0);
                puVar10 = puVar11 + lVar1;
                lpWideCharStr = (LPCWSTR)(puVar11 + lVar1 + 0x50);
                puVar11 = puVar11 + lVar1;
                if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_14000c33f;
                lpWideCharStr[0] = L'쳌';
                lpWideCharStr[1] = L'\0';
                puVar11 = puVar10;
              }
              else {
                *(undefined8 *)(puVar11 + -8) = 0x14000c2af;
                lpWideCharStr = (LPCWSTR)_malloc_base(-(ulonglong)(uVar6 < uVar8) & uVar8);
                if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_14000c2c5;
                lpWideCharStr[0] = L'\xdddd';
                lpWideCharStr[1] = L'\0';
              }
              lpWideCharStr = lpWideCharStr + 8;
            }
LAB_14000c2c5:
            if (lpWideCharStr != (LPCWSTR)0x0) {
              *(undefined8 *)(puVar11 + 0x40) = 0;
              *(undefined8 *)(puVar11 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 0x30) = 0;
              *(int *)(puVar11 + 0x28) = iVar4;
              *(LPCWSTR *)(puVar11 + 0x20) = lpWideCharStr;
              *(undefined8 *)(puVar11 + -8) = 0x14000c2f6;
              iVar3 = __acrt_LCMapStringEx
                                (pwVar2,param_3,pWVar7,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                                 *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                                 *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
              if (iVar3 != 0) {
                *(undefined8 *)(puVar11 + 0x38) = 0;
                *(undefined8 *)(puVar11 + 0x30) = 0;
                if (param_7 == 0) {
                  *(undefined4 *)(puVar11 + 0x28) = 0;
                  *(undefined8 *)(puVar11 + 0x20) = 0;
                }
                else {
                  *(int *)(puVar11 + 0x28) = param_7;
                  *(char **)(puVar11 + 0x20) = param_6;
                }
                *(undefined8 *)(puVar11 + -8) = 0x14000c326;
                iVar4 = WideCharToMultiByte(param_8,0,lpWideCharStr,iVar4,*(LPSTR *)(puVar11 + 0x20)
                                            ,*(int *)(puVar11 + 0x28),*(LPCSTR *)(puVar11 + 0x30),
                                            *(LPBOOL *)(puVar11 + 0x38));
                if (iVar4 != 0) {
                  if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
                    *(undefined8 *)(puVar11 + -8) = 0x14000c39d;
                    _free_base(lpWideCharStr + -8);
                  }
                  goto LAB_14000c33f;
                }
              }
              if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
                *(undefined8 *)(puVar11 + -8) = 0x14000c33d;
                _free_base(lpWideCharStr + -8);
              }
            }
          }
          else if ((param_7 != 0) && (iVar4 <= param_7)) {
            *(undefined8 *)(puVar11 + 0x40) = 0;
            *(undefined8 *)(puVar11 + 0x38) = 0;
            *(undefined8 *)(puVar11 + 0x30) = 0;
            *(int *)(puVar11 + 0x28) = param_7;
            *(char **)(puVar11 + 0x20) = param_6;
            *(undefined8 *)(puVar11 + -8) = 0x14000c229;
            __acrt_LCMapStringEx
                      (pwVar2,param_3,pWVar7,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                       *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                       *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
          }
        }
      }
    }
  }
  else {
    uVar8 = uVar6 + 0x10;
    if (0x400 < (-(ulonglong)(uVar6 < uVar6 + 0x10) & uVar6 + 0x10)) {
      pWVar7 = (LPCWSTR)_malloc_base(-(ulonglong)(uVar6 < uVar8) & uVar8);
      puVar11 = auStackY_88;
      if (pWVar7 != (LPCWSTR)0x0) {
        pWVar7[0] = L'\xdddd';
        pWVar7[1] = L'\0';
        goto LAB_14000c167;
      }
      goto LAB_14000c16f;
    }
    uVar8 = -(ulonglong)(uVar6 < uVar8) & uVar8;
    uVar6 = uVar8 + 0xf;
    if (uVar6 <= uVar8) {
      uVar6 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar6 & 0xfffffffffffffff0);
    puVar9 = auStackY_88 + lVar1;
    pWVar7 = (LPCWSTR)((longlong)&local_38 + lVar1);
    puVar11 = auStackY_88 + lVar1;
    if (pWVar7 != (LPCWSTR)0x0) {
      pWVar7[0] = L'쳌';
      pWVar7[1] = L'\0';
LAB_14000c167:
      pWVar7 = pWVar7 + 8;
      puVar11 = puVar9;
      goto LAB_14000c16f;
    }
  }
LAB_14000c33f:
  puVar12 = puVar11;
  if ((pWVar7 != (LPCWSTR)0x0) && (*(int *)(pWVar7 + -8) == 0xdddd)) {
    *(undefined8 *)(puVar11 + -8) = 0x14000c355;
    _free_base(pWVar7 + -8);
  }
LAB_14000c357:
  uVar6 = local_30 ^ (ulonglong)&local_38;
  *(undefined8 *)(puVar12 + -8) = 0x14000c363;
  __security_check_cookie(uVar6);
  return extraout_EAX;
}




/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Library: Visual Studio 2015 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,wchar_t *param_2,ulong param_3,char *param_4
                        ,int param_5,char *param_6,int param_7,int param_8,int param_9)

{
  longlong local_28;
  __crt_locale_pointers local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  __acrt_LCMapStringA_stat(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}




/* Library Function - Single Match
    _msize
   
   Library: Visual Studio 2015 Release */

size_t __cdecl _msize(void *_Memory)

{
  ulong *puVar1;
  size_t sVar2;
  
  if (_Memory == (void *)0x0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_14000803c();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000c482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = HeapSize(DAT_14001a7a8,0,_Memory);
  return sVar2;
}




/* Library Function - Single Match
    _realloc_base
   
   Library: Visual Studio 2015 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  ulong *puVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      _free_base(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_14001a7a8,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_140007c38();
        } while ((iVar1 != 0) && (iVar1 = _callnewh(param_2), iVar1 != 0));
      }
      puVar3 = __doserrno();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}




/* Library Function - Single Match
    _isatty
   
   Library: Visual Studio 2015 Release */

int __cdecl _isatty(int _FileHandle)

{
  ulong *puVar1;
  
  if (_FileHandle == -2) {
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_14001abb0)) {
      return *(byte *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 +
                      (ulonglong)(_FileHandle & 0x3f) * 0x40) & 0x40;
    }
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_14000803c();
  }
  return 0;
}




/* Library Function - Single Match
    __acrt_stdio_flush_nolock
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_stdio_flush_nolock(FILE *param_1)

{
  uint *puVar1;
  char *_Buf;
  int _FileHandle;
  uint uVar2;
  uint _MaxCharCount;
  
  if ((((byte)*(undefined4 *)((longlong)&param_1->_base + 4) & 3) == 2) &&
     (((ulonglong)param_1->_base & 0xc000000000) != 0)) {
    _MaxCharCount = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    _Buf = *(char **)&param_1->_cnt;
    param_1->_ptr = _Buf;
    if (0 < (int)_MaxCharCount) {
      _FileHandle = _fileno(param_1);
      uVar2 = _write(_FileHandle,_Buf,_MaxCharCount);
      if (_MaxCharCount != uVar2) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    _fflush_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl _fflush_nolock(FILE *_File)

{
  int iVar1;
  undefined8 uVar2;
  
  if (_File == (FILE *)0x0) {
    iVar1 = common_flush_all(0);
    return iVar1;
  }
  uVar2 = __acrt_stdio_flush_nolock(_File);
  if ((int)uVar2 == 0) {
    if ((*(uint *)((longlong)&_File->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(_File);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_14000c609;
    }
    iVar1 = 0;
  }
  else {
LAB_14000c609:
    iVar1 = -1;
  }
  return iVar1;
}




void FUN_14000c634(void)

{
  common_flush_all(1);
  return;
}




/* Library Function - Single Match
    common_flush_all
   
   Library: Visual Studio 2015 Release */

int common_flush_all(int param_1)

{
  undefined8 *puVar1;
  FILE *_File;
  int iVar2;
  undefined8 *puVar3;
  int local_38;
  int local_34;
  
  local_34 = 0;
  local_38 = 0;
  __acrt_lock(8);
  puVar1 = DAT_14001ac08 + DAT_14001ac00;
  for (puVar3 = DAT_14001ac08; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    _File = (FILE *)*puVar3;
    if (_File != (FILE *)0x0) {
      FUN_14000ba30((longlong)_File);
      if ((*(uint *)((longlong)&_File->_base + 4) >> 0xd & 1) != 0) {
        if (param_1 == 1) {
          iVar2 = _fflush_nolock(_File);
          if (iVar2 != -1) {
            local_34 = local_34 + 1;
          }
        }
        else if (((param_1 == 0) && ((*(uint *)((longlong)&_File->_base + 4) >> 1 & 1) != 0)) &&
                (iVar2 = _fflush_nolock(_File), iVar2 == -1)) {
          local_38 = -1;
        }
      }
      FUN_14000ba3c((longlong)_File);
    }
  }
  __acrt_unlock(8);
  if (param_1 == 1) {
    local_38 = local_34;
  }
  return local_38;
}




/* Library Function - Single Match
    _isleadbyte_l
   
   Library: Visual Studio 2015 Release */

int __cdecl _isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  longlong local_28;
  longlong *local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
  uVar1 = *(ushort *)(*local_20 + (ulonglong)(_C & 0xff) * 2);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}




/* Library Function - Single Match
    _fcloseall
   
   Library: Visual Studio 2015 Release */

int __cdecl _fcloseall(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_14001ac00; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_14001ac08 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = fclose(*(FILE **)(DAT_14001ac08 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_14001ac08 + lVar4 * 8) + 0x30));
      _free_base(*(LPVOID *)(DAT_14001ac08 + lVar4 * 8));
      *(undefined8 *)(DAT_14001ac08 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}




/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    _free_base((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}




/* Library Function - Single Match
    __strncnt
   
   Library: Visual Studio 2015 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}




/* Library Function - Single Match
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b521505b218e5242e90febf6bfebc422>,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa> &
   __ptr64,class <lambda_314360699dd331753a4119843814e9a7> >(class
   <lambda_b521505b218e5242e90febf6bfebc422> && __ptr64,class
   <lambda_6978c1fb23f02e42e1d9e99668cc68aa> & __ptr64,class
   <lambda_314360699dd331753a4119843814e9a7> && __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_b521505b218e5242e90febf6bfebc422>,class_<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&___ptr64,class_<lambda_314360699dd331753a4119843814e9a7>_>
          (__crt_seh_guarded_call<int> *this,<lambda_b521505b218e5242e90febf6bfebc422> *param_1,
          <lambda_6978c1fb23f02e42e1d9e99668cc68aa> *param_2,
          <lambda_314360699dd331753a4119843814e9a7> *param_3)

{
  uint _FileHandle;
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  ulong *puVar3;
  int iVar4;
  
  FID_conflict___acrt_lowio_lock_fh(*(uint *)param_1);
  _FileHandle = **(uint **)param_2;
  if ((*(byte *)((&DAT_14001a7b0)[(longlong)(int)_FileHandle >> 6] + 0x38 +
                (ulonglong)(_FileHandle & 0x3f) * 0x40) & 1) != 0) {
    hFile = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    iVar4 = 0;
    if (BVar1 != 0) goto LAB_14000c8e8;
    puVar3 = __doserrno();
    DVar2 = GetLastError();
    *puVar3 = DVar2;
  }
  puVar3 = __doserrno();
  *puVar3 = 9;
  iVar4 = -1;
LAB_14000c8e8:
  FID_conflict___acrt_lowio_lock_fh(*(uint *)param_3);
  return iVar4;
}




/* Library Function - Single Match
    _commit
   
   Library: Visual Studio 2015 Release */

int __cdecl _commit(int _FileHandle)

{
  int iVar1;
  ulong *puVar2;
  int local_res8 [2];
  __crt_seh_guarded_call<int> local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = __doserrno();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_14001abb0)) &&
       ((*(byte *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x40) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = __crt_seh_guarded_call<int>::
              operator()<class_<lambda_b521505b218e5242e90febf6bfebc422>,class_<lambda_6978c1fb23f02e42e1d9e99668cc68aa>&___ptr64,class_<lambda_314360699dd331753a4119843814e9a7>_>
                        (local_res10,(<lambda_b521505b218e5242e90febf6bfebc422> *)local_res20,
                         (<lambda_6978c1fb23f02e42e1d9e99668cc68aa> *)local_18,
                         (<lambda_314360699dd331753a4119843814e9a7> *)local_res18);
      return iVar1;
    }
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_14000803c();
  }
  return -1;
}




/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_double_translated_ansi_nolock(int,char
   const * __ptr64 const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_double_translated_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint nNumberOfBytesToWrite;
  BOOL BVar5;
  DWORD DVar6;
  ushort *puVar7;
  undefined4 in_register_0000000c;
  DWORD *pDVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  undefined4 in_register_00000084;
  size_t sVar12;
  ulonglong in_R9;
  byte *pbVar13;
  longlong lVar14;
  undefined1 auStackY_b8 [32];
  wchar_t local_78 [2];
  undefined2 local_74 [2];
  uint local_70;
  UINT local_6c;
  HANDLE local_68;
  byte *local_60;
  byte local_58;
  byte local_57;
  CHAR local_50 [8];
  ulonglong local_48;
  
  pbVar11 = (byte *)CONCAT44(in_register_00000084,param_3);
  pDVar8 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_48 = DAT_140019010 ^ (ulonglong)auStackY_b8;
  lVar14 = (longlong)(int)(uint)param_2 >> 6;
  lVar10 = (ulonglong)((uint)param_2 & 0x3f) * 0x40;
  pbVar13 = pbVar11 + (in_R9 & 0xffffffff);
  local_68 = *(HANDLE *)((&DAT_14001a7b0)[lVar14] + 0x28 + lVar10);
  local_60 = pbVar11;
  local_6c = GetConsoleCP();
  pDVar8[0] = 0;
  pDVar8[1] = 0;
  pDVar8[2] = 0;
LAB_14000ca04:
  if (pbVar13 <= pbVar11) {
LAB_14000cb6e:
    __security_check_cookie(local_48 ^ (ulonglong)auStackY_b8);
    return;
  }
  bVar1 = *pbVar11;
  local_78[0] = L'\0';
  lVar3 = (&DAT_14001a7b0)[lVar14];
  bVar2 = *(byte *)(lVar3 + 0x3d + lVar10);
  if ((bVar2 & 4) == 0) {
    puVar7 = __pctype_func();
    if ((puVar7[*pbVar11] & 0x8000) == 0) {
      sVar12 = 1;
      pbVar9 = pbVar11;
      goto LAB_14000ca88;
    }
    if (pbVar13 <= pbVar11) {
      *(byte *)((&DAT_14001a7b0)[lVar14] + 0x3e + lVar10) = *pbVar11;
      pbVar11 = (byte *)((&DAT_14001a7b0)[lVar14] + 0x3d + lVar10);
      *pbVar11 = *pbVar11 | 4;
      pDVar8[1] = pDVar8[1] + 1;
      goto LAB_14000cb6e;
    }
    iVar4 = FUN_14000b884(local_78,(char *)pbVar11,2);
    if (iVar4 == -1) goto LAB_14000cb6e;
    pbVar11 = pbVar11 + 1;
  }
  else {
    local_58 = *(byte *)(lVar3 + 0x3e + lVar10);
    *(byte *)(lVar3 + 0x3d + lVar10) = bVar2 & 0xfb;
    sVar12 = 2;
    pbVar9 = &local_58;
    local_57 = bVar1;
LAB_14000ca88:
    iVar4 = FUN_14000b884(local_78,(char *)pbVar9,sVar12);
    if (iVar4 == -1) goto LAB_14000cb6e;
  }
  pbVar11 = pbVar11 + 1;
  nNumberOfBytesToWrite =
       WideCharToMultiByte(local_6c,0,local_78,1,local_50,5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (nNumberOfBytesToWrite != 0) {
    BVar5 = WriteFile(local_68,local_50,nNumberOfBytesToWrite,&local_70,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) goto LAB_14000cb66;
    pDVar8[1] = (pDVar8[2] - (int)local_60) + (int)pbVar11;
    if (nNumberOfBytesToWrite <= local_70) goto code_r0x00014000cb0c;
  }
  goto LAB_14000cb6e;
code_r0x00014000cb0c:
  if (bVar1 == 10) {
    local_74[0] = 0xd;
    BVar5 = WriteFile(local_68,local_74,1,&local_70,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
LAB_14000cb66:
      DVar6 = GetLastError();
      *pDVar8 = DVar6;
      goto LAB_14000cb6e;
    }
    if (local_70 == 0) goto LAB_14000cb6e;
    pDVar8[2] = pDVar8[2] + 1;
    pDVar8[1] = pDVar8[1] + 1;
  }
  goto LAB_14000ca04;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  HANDLE hFile;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 in_register_0000000c;
  DWORD *pDVar5;
  char *pcVar6;
  char *pcVar7;
  uint nNumberOfBytesToWrite;
  char *pcVar8;
  undefined4 in_register_00000084;
  ulonglong in_R9;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 uStack_20;
  
  pcVar7 = (char *)CONCAT44(in_register_00000084,param_3);
  pDVar5 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  uStack_20 = 0x14000cbb0;
  local_28 = DAT_140019010 ^ (ulonglong)auStackY_1468;
  pcVar6 = pcVar7 + (in_R9 & 0xffffffff);
  *pDVar5 = 0;
  pDVar5[1] = 0;
  lVar2 = (&DAT_14001a7b0)[(longlong)(int)(uint)param_2 >> 6];
  pDVar5[2] = 0;
  hFile = *(HANDLE *)(lVar2 + 0x28 + (ulonglong)((uint)param_2 & 0x3f) * 0x40);
  do {
    if (pcVar6 <= pcVar7) break;
    pcVar8 = local_1428;
    do {
      if (pcVar6 <= pcVar7) break;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\n') {
        pDVar5[2] = pDVar5[2] + 1;
        *pcVar8 = '\r';
        pcVar8 = pcVar8 + 1;
      }
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (pcVar8 < local_1428 + 0x13ff);
    nNumberOfBytesToWrite = (int)pcVar8 - (int)local_1428;
    BVar3 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      *pDVar5 = DVar4;
      break;
    }
    pDVar5[1] = pDVar5[1] + local_1438[0];
  } while (nNumberOfBytesToWrite <= local_1438[0]);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_1468);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  longlong lVar2;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 in_register_0000000c;
  DWORD *pDVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  undefined4 in_register_00000084;
  ulonglong in_R9;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 uStack_20;
  
  psVar8 = (short *)CONCAT44(in_register_00000084,param_3);
  pDVar5 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  uStack_20 = 0x14000ccb8;
  local_28 = DAT_140019010 ^ (ulonglong)auStackY_1468;
  psVar7 = (short *)((in_R9 & 0xffffffff) + (longlong)psVar8);
  *pDVar5 = 0;
  pDVar5[1] = 0;
  lVar2 = (&DAT_14001a7b0)[(longlong)(int)(uint)param_2 >> 6];
  pDVar5[2] = 0;
  hFile = *(HANDLE *)(lVar2 + 0x28 + (ulonglong)((uint)param_2 & 0x3f) * 0x40);
  do {
    if (psVar7 <= psVar8) break;
    psVar6 = local_1428;
    do {
      if (psVar7 <= psVar8) break;
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
      if (sVar1 == 10) {
        pDVar5[2] = pDVar5[2] + 2;
        *psVar6 = 0xd;
        psVar6 = psVar6 + 1;
      }
      *psVar6 = sVar1;
      psVar6 = psVar6 + 1;
    } while (psVar6 < local_1428 + 0x9ff);
    nNumberOfBytesToWrite = (int)((longlong)psVar6 - (longlong)local_1428 >> 1) * 2;
    BVar3 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      *pDVar5 = DVar4;
      break;
    }
    pDVar5[1] = pDVar5[1] + local_1438[0];
  } while (nNumberOfBytesToWrite <= local_1438[0]);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_1468);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  WCHAR WVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  WCHAR *pWVar5;
  undefined4 in_register_0000000c;
  DWORD *pDVar6;
  uint uVar7;
  ulonglong uVar8;
  WCHAR *pWVar9;
  undefined4 in_register_00000084;
  uint in_R9D;
  WCHAR *pWVar10;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  WCHAR local_1448 [856];
  CHAR local_d98 [3424];
  ulonglong local_38;
  undefined8 uStack_30;
  
  pWVar9 = (WCHAR *)CONCAT44(in_register_00000084,param_3);
  pDVar6 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  uStack_30 = 0x14000cdd8;
  local_38 = DAT_140019010 ^ (ulonglong)auStackY_1498;
  pWVar10 = (WCHAR *)((ulonglong)in_R9D + (longlong)pWVar9);
  hFile = *(HANDLE *)
           ((&DAT_14001a7b0)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x40);
  *pDVar6 = 0;
  pDVar6[1] = 0;
  pDVar6[2] = 0;
  do {
    if (pWVar10 <= pWVar9) {
LAB_14000ceff:
      __security_check_cookie(local_38 ^ (ulonglong)auStackY_1498);
      return;
    }
    pWVar5 = local_1448;
    do {
      if (pWVar10 <= pWVar9) break;
      WVar1 = *pWVar9;
      pWVar9 = pWVar9 + 1;
      if (WVar1 == L'\n') {
        *pWVar5 = L'\r';
        pWVar5 = pWVar5 + 1;
      }
      *pWVar5 = WVar1;
      pWVar5 = pWVar5 + 1;
    } while (pWVar5 < local_1448 + 0x354);
    uVar2 = WideCharToMultiByte(0xfde9,0,local_1448,
                                (int)((longlong)pWVar5 - (longlong)local_1448 >> 1),local_d98,0xd55,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
LAB_14000cef7:
      DVar4 = GetLastError();
      *pDVar6 = DVar4;
      goto LAB_14000ceff;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        BVar3 = WriteFile(hFile,local_d98 + uVar8,uVar2 - (int)uVar8,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_14000cef7;
        uVar7 = (int)uVar8 + local_1458[0];
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar2);
    }
    pDVar6[1] = (int)pWVar9 - param_3;
  } while( true );
}




/* Library Function - Single Match
    _write
   
   Library: Visual Studio 2015 Release */

int __cdecl _write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  ulong *puVar2;
  longlong lVar3;
  
  if (_FileHandle == -2) {
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_14001abb0)) {
      lVar3 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
      if ((*(byte *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 + lVar3) & 1) != 0) {
        FID_conflict___acrt_lowio_lock_fh(_FileHandle);
        iVar1 = -1;
        if ((*(byte *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 + lVar3) & 1) == 0) {
          puVar2 = __doserrno();
          *puVar2 = 9;
          puVar2 = __doserrno();
          *puVar2 = 0;
        }
        else {
          iVar1 = _write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FID_conflict___acrt_lowio_lock_fh(_FileHandle);
        return iVar1;
      }
    }
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_14000803c();
  }
  return -1;
}




/* Library Function - Single Match
    _write_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl _write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  char cVar1;
  wchar_t _WCh;
  DWORD DVar2;
  wchar_t wVar3;
  wint_t wVar4;
  int iVar5;
  BOOL BVar6;
  ulong *puVar7;
  __acrt_ptd *p_Var8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  DWORD local_68;
  DWORD DStack_64;
  int local_60;
  undefined8 local_58;
  longlong local_48;
  DWORD local_40 [2];
  
  iVar11 = 0;
  iVar10 = 0;
  if (_MaxCharCount == 0) {
    return 0;
  }
  if (_Buf == (void *)0x0) {
LAB_14000d04f:
    puVar7 = __doserrno();
    *puVar7 = 0;
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_14000803c();
    return -1;
  }
  lVar13 = (longlong)_FileHandle >> 6;
  lVar14 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
  cVar1 = *(char *)((&DAT_14001a7b0)[lVar13] + 0x39 + lVar14);
  local_48 = lVar13;
  if (((byte)(cVar1 - 1U) < 2) && ((~_MaxCharCount & 1) == 0)) goto LAB_14000d04f;
  if ((*(byte *)((&DAT_14001a7b0)[lVar13] + 0x38 + lVar14) & 0x20) != 0) {
    common_lseek_nolock<__int64>(_FileHandle,0,2);
  }
  local_58 = 0;
  iVar5 = _isatty(_FileHandle);
  uVar12 = (uint)_Buf;
  if ((((iVar5 == 0) || ((*(byte *)((&DAT_14001a7b0)[lVar13] + 0x38 + lVar14) & 0x80) == 0)) ||
      ((p_Var8 = __acrt_getptd(), *(longlong *)(*(longlong *)(p_Var8 + 0x90) + 0x138) == 0 &&
       (*(char *)((&DAT_14001a7b0)[lVar13] + 0x39 + lVar14) == '\0')))) ||
     (BVar6 = GetConsoleMode(*(HANDLE *)((&DAT_14001a7b0)[lVar13] + 0x28 + lVar14),local_40),
     BVar6 == 0)) {
    if ((*(byte *)((&DAT_14001a7b0)[lVar13] + 0x38 + lVar14) & 0x80) != 0) {
      if (cVar1 == '\0') {
        puVar9 = (undefined8 *)
                 write_text_ansi_nolock((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
      }
      else if (cVar1 == '\x01') {
        puVar9 = (undefined8 *)
                 write_text_utf8_nolock((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
      }
      else {
        if (cVar1 != '\x02') goto LAB_14000d26c;
        puVar9 = (undefined8 *)
                 write_text_utf16le_nolock
                           ((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
      }
      goto LAB_14000d1c3;
    }
    local_68 = 0;
    DStack_64 = 0;
    local_60 = 0;
    BVar6 = WriteFile(*(HANDLE *)((&DAT_14001a7b0)[lVar13] + 0x28 + lVar14),_Buf,_MaxCharCount,
                      &DStack_64,(LPOVERLAPPED)0x0);
    iVar10 = local_60;
    if (BVar6 == 0) {
      local_68 = GetLastError();
      iVar10 = local_60;
    }
  }
  else {
    if (cVar1 == '\0') {
      puVar9 = (undefined8 *)
               write_double_translated_ansi_nolock
                         ((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
LAB_14000d1c3:
      local_58 = *puVar9;
      iVar10 = *(int *)(puVar9 + 1);
      goto LAB_14000d26c;
    }
    if (1 < (byte)(cVar1 - 1U)) goto LAB_14000d26c;
    local_68 = 0;
    DStack_64 = 0;
    pwVar15 = (wchar_t *)_Buf;
    iVar10 = iVar11;
    if (_Buf < (wchar_t *)((longlong)_Buf + (ulonglong)_MaxCharCount)) {
      do {
        DVar2 = DStack_64;
        _WCh = *pwVar15;
        wVar3 = _putwch_nolock(_WCh);
        if (wVar3 != _WCh) {
LAB_14000d19f:
          local_68 = GetLastError();
          lVar13 = local_48;
          iVar10 = iVar11;
          break;
        }
        DStack_64 = DVar2 + 2;
        if (_WCh == L'\n') {
          wVar4 = _putwch_nolock(L'\r');
          if (wVar4 != 0xd) goto LAB_14000d19f;
          DStack_64 = DVar2 + 3;
          iVar11 = iVar11 + 1;
        }
        pwVar15 = pwVar15 + 1;
        lVar13 = local_48;
        iVar10 = iVar11;
      } while (pwVar15 < (wchar_t *)((longlong)_Buf + (ulonglong)_MaxCharCount));
    }
  }
  local_58 = CONCAT44(DStack_64,local_68);
LAB_14000d26c:
  iVar11 = (int)((ulonglong)local_58 >> 0x20);
  if (iVar11 != 0) {
    return iVar11 - iVar10;
  }
  if ((int)local_58 != 0) {
    if ((int)local_58 == 5) {
      puVar7 = __doserrno();
      *puVar7 = 9;
      puVar7 = __doserrno();
      *puVar7 = 5;
      return -1;
    }
    __acrt_errno_map_os_error((int)local_58);
    return -1;
  }
                    /* WARNING: Load size is inaccurate */
  if (((*(byte *)((&DAT_14001a7b0)[lVar13] + 0x38 + lVar14) & 0x40) != 0) && (*_Buf == '\x1a')) {
    return 0;
  }
  puVar7 = __doserrno();
  *puVar7 = 0x1c;
  puVar7 = __doserrno();
  *puVar7 = 0;
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14000d300(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM0 [64];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  
  dVar3 = in_ZMM0._0_8_;
  auVar5 = in_ZMM0._0_16_;
  if (DAT_14001ac14 == 0) {
    if ((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY) {
      if (dVar3 == INFINITY) {
        return INFINITY;
      }
      if (dVar3 != -INFINITY) {
        return (double)((ulonglong)dVar3 | 0x8000000000000);
      }
    }
    else {
      dVar17 = (double)(int)(((ulonglong)dVar3 >> 0x34) - 0x3ff);
      if (0.0 < dVar3) {
        dVar9 = (double)((ulonglong)dVar3 & SUB168(_DAT_140014bd0,0));
        dVar7 = dVar3;
        if (dVar17 == -1023.0) {
          dVar17 = (double)((ulonglong)dVar9 | SUB168(_DAT_140014c60,0)) - 1.0;
          dVar7 = (double)((ulonglong)dVar17 & SUB168(_DAT_140014bd0,0));
          dVar17 = (double)(int)((uint)((ulonglong)dVar17 >> 0x34) - 0x7fd);
          dVar9 = dVar7;
        }
        uVar1 = ((ulonglong)dVar7 & 0xff00000000000) + ((ulonglong)dVar7 & 0x80000000000) * 2;
        if (ABS(dVar3 - 1.0) < 0.0625) {
          dVar3 = dVar3 - 1.0;
          dVar17 = dVar3 / (dVar3 + 2.0);
          dVar7 = dVar17 + dVar17;
          dVar9 = dVar7 * dVar7;
          dVar10 = dVar9 * dVar7;
          dVar12 = (double)((ulonglong)dVar3 & SUB168(_DAT_140014da0,0));
          dVar3 = (((dVar9 * 0.012500000003771751 + 0.08333333333333179) * dVar10 +
                   (dVar9 * 0.0004348877777076146 + 0.0022321399879194482) * dVar10 * dVar10 * dVar7
                   ) - dVar3 * dVar17) + (dVar3 - dVar12);
          return dVar12 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar12 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar7 = ((double)(uVar1 | SUB168(_DAT_140014c70,0)) -
                (double)((ulonglong)dVar9 | SUB168(_DAT_140014c70,0))) *
                *(double *)(&DAT_140015de0 + uVar2 * 8);
        dVar3 = dVar7 * dVar7;
        return *(double *)(&DAT_140014dc0 + uVar2 * 8) + dVar17 * 0.3010299950838089 +
               *(double *)(&DAT_1400155d0 + uVar2 * 8) +
               (dVar17 * 5.801722962879576e-10 -
               ((dVar7 * 0.3333333333333333 + 0.5) * dVar3 + dVar7 +
               ((dVar7 * 0.16666666666666666 + 0.2) * dVar7 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_14000dd60(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    dVar3 = (double)FUN_14000dd60(dVar3,0xfff8000000000000,2);
                    /* WARNING: Read-only address (ram,0x000140014b80) is written */
                    /* WARNING: Read-only address (ram,0x000140014bb0) is written */
                    /* WARNING: Read-only address (ram,0x000140014bd0) is written */
                    /* WARNING: Read-only address (ram,0x000140014be0) is written */
                    /* WARNING: Read-only address (ram,0x000140014bf0) is written */
                    /* WARNING: Read-only address (ram,0x000140014c60) is written */
                    /* WARNING: Read-only address (ram,0x000140014c70) is written */
                    /* WARNING: Read-only address (ram,0x000140014d00) is written */
                    /* WARNING: Read-only address (ram,0x000140014d50) is written */
                    /* WARNING: Read-only address (ram,0x000140014da0) is written */
    return dVar3;
  }
  auVar13 = vpsrlq_avx(auVar5,0x34);
  auVar13 = vpsubq_avx(auVar13,_DAT_140014bb0);
  auVar13 = vcvtdq2pd_avx(auVar13);
  auVar16 = vpand_avx(auVar5,_DAT_140014b80);
  if (auVar16._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_14000d850;
      dVar3 = (double)FUN_14000dd60(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar16 = vpand_avx(auVar5,_DAT_140014bd0);
    if (auVar13._0_8_ == -1023.0) {
      auVar5 = vpor_avx(auVar16,_DAT_140014c60);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar5._0_8_ - 1.0;
      auVar16 = vpsrlq_avx(auVar13,0x34);
      auVar5 = vpand_avx(auVar13,_DAT_140014bd0);
      auVar13 = vpsubd_avx(auVar16,_DAT_140014d00);
      auVar13 = vcvtdq2pd_avx(auVar13);
      auVar16 = auVar5;
    }
    auVar4 = vpand_avx(auVar5,_DAT_140014be0);
    auVar14 = vpand_avx(auVar5,_DAT_140014bf0);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar4 = vpaddq_avx(auVar14,auVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar3 - 1.0;
    auVar14 = vpand_avx(auVar14,_DAT_140014d50);
    if (auVar14._0_8_ < 0.0625) {
      dVar7 = auVar5._0_8_ - 1.0;
      dVar9 = dVar7 / (dVar7 + 2.0);
      dVar3 = dVar9 + dVar9;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar3 * dVar3;
      auVar13 = vfmadd213sd_fma(ZEXT816(0x3f89999999bac6d4),auVar11,ZEXT816(0x3fb55555555554e6));
      auVar16 = vfmadd213sd_fma(ZEXT816(0x3f3c8034c85dfff0),auVar11,ZEXT816(0x3f62492307f1519f));
      dVar17 = dVar3 * dVar3 * dVar3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar7;
      auVar5 = vpand_avx(auVar6,_DAT_140014da0);
      dVar10 = auVar5._0_8_;
      dVar3 = ((auVar13._0_8_ * dVar17 + auVar16._0_8_ * dVar17 * dVar17 * dVar3) - dVar7 * dVar9) +
              (dVar7 - dVar10);
      return dVar10 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar10 * 0.4342937469482422;
    }
    uVar1 = auVar4._0_8_ >> 0x2c;
    auVar5 = vpor_avx(auVar16,_DAT_140014c70);
    auVar16 = vpor_avx(auVar4,_DAT_140014c70);
    dVar3 = (auVar16._0_8_ - auVar5._0_8_) * *(double *)(&DAT_140015de0 + uVar1 * 8);
    dVar17 = dVar3 * dVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar3;
    auVar5 = vfmadd213sd_fma(ZEXT816(0x3fc5555555555555),auVar8,ZEXT816(0x3fc999999999999a));
    auVar16 = vfmadd213sd_fma(ZEXT816(0x3fd5555555555555),auVar8,ZEXT816(0x3fe0000000000000));
    auVar5 = vfmadd213sd_fma(auVar5,auVar8,ZEXT816(0x3fd0000000000000));
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar17;
    auVar16 = vfmadd231sd_fma(auVar8,auVar16,auVar4);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar17 * dVar17;
    auVar5 = vfmadd231sd_fma(auVar16,auVar5,auVar15);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar5._0_8_ * 0.4342944819032518;
    auVar16 = vfmsub213sd_fma(ZEXT816(0x3e03ef3fde623e25),auVar13,auVar16);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&DAT_140014dc0 + uVar1 * 8);
    auVar5 = vfmadd231sd_fma(auVar5,auVar13,ZEXT816(0x3fd3441350000000));
    return auVar5._0_8_ + *(double *)(&DAT_1400155d0 + uVar1 * 8) + auVar16._0_8_;
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_14000dd60(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_14000d850:
  dVar3 = (double)FUN_14000dd60(dVar3,0xfff8000000000000,2);
  return dVar3;
}




/* Library Function - Single Match
    __int64 __cdecl common_lseek_nolock<__int64>(int,__int64,int)
   
   Library: Visual Studio 2015 Release */

__int64 __cdecl common_lseek_nolock<__int64>(int param_1,__int64 param_2,int param_3)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulong *puVar4;
  LARGE_INTEGER local_res20;
  
  hFile = (HANDLE)_get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    puVar4 = __doserrno();
    *puVar4 = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)param_2,&local_res20,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      __acrt_errno_map_os_error(DVar3);
    }
    else if (local_res20.QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_14001a7b0)[(longlong)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfd;
      return (__int64)local_res20.s;
    }
  }
  return -1;
}




/* Library Function - Single Match
    _fclose_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl _fclose_nolock(FILE *_File)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  if (_File == (FILE *)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_14000803c();
    iVar1 = -1;
  }
  else {
    iVar1 = -1;
    if ((*(uint *)((longlong)&_File->_base + 4) >> 0xd & 1) != 0) {
      uVar4 = __acrt_stdio_flush_nolock(_File);
      iVar1 = (int)uVar4;
      __acrt_stdio_free_buffer_nolock(&_File->_ptr);
      iVar2 = _fileno(_File);
      iVar2 = _close(iVar2);
      if (iVar2 < 0) {
        iVar1 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free_base(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(_File);
  }
  return iVar1;
}




/* Library Function - Single Match
    fclose
   
   Library: Visual Studio 2015 Release */

int __cdecl fclose(FILE *_File)

{
  int iVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_14000803c();
  }
  else {
    if ((*(uint *)((longlong)&_File->_base + 4) >> 0xc & 1) == 0) {
      FUN_14000ba30((longlong)_File);
      iVar1 = _fclose_nolock(_File);
      FUN_14000ba3c((longlong)_File);
      return iVar1;
    }
    __acrt_stdio_free_stream();
  }
  return -1;
}




/* Library Function - Single Match
    _putwch_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl _putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  wchar_t local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = _WCh;
  if (DAT_1400198e0 == (HANDLE)0xfffffffffffffffe) {
    __dcrt_lowio_initialize_console_output();
  }
  if ((DAT_1400198e0 == (HANDLE)0xffffffffffffffff) ||
     (BVar1 = WriteConsoleW(DAT_1400198e0,local_res8,1,local_res10,(LPVOID)0x0), BVar1 == 0)) {
    local_res8[0] = L'\xffff';
  }
  return local_res8[0];
}




undefined8
FUN_14000da9c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_5;
  local_18 = param_6;
  local_38[0] = param_1;
  local_30 = param_3;
  local_28 = param_4;
  _ctrlfp(param_7,0xffc0);
  uVar1 = __acrt_invoke_user_matherr(local_38);
  if ((int)uVar1 == 0) {
    _set_errno_from_matherr(param_1);
  }
  return local_18;
}




/* Library Function - Single Match
    _exception_enabled
   
   Library: Visual Studio 2015 Release */

bool _exception_enabled(uint param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
    if (((param_1 & 4) == 0) || ((param_2 & 0x200) == 0)) {
      if (((param_1 & 1) == 0) || ((param_2 & 0x400) == 0)) {
        if (((param_1 & 2) != 0) && ((param_2 & 0x800) != 0)) {
          if ((param_1 & 0x10) != 0) {
            _set_statfp(0x10);
          }
          uVar1 = param_1 & 0x1d;
        }
      }
      else {
        _set_statfp(8);
        uVar1 = param_1 & 0x1e;
      }
    }
    else {
      _set_statfp(4);
      uVar1 = param_1 & 0x1b;
    }
  }
  else {
    _set_statfp(1);
    uVar1 = param_1 & 0x17;
  }
  if (((param_1 & 0x10) != 0) && ((param_2 >> 0xc & 1) != 0)) {
    _set_statfp(0x20);
    uVar1 = uVar1 & 0xffffffef;
  }
  return uVar1 == 0;
}




void FUN_14000dbc0(undefined8 param_1,uint param_2,undefined8 param_3,int param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  undefined1 auStackY_118 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [12];
  undefined8 local_88;
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_140019010 ^ (ulonglong)auStackY_118;
  uVar3 = _ctrlfp(0x1f80,0xffc0);
  local_d8 = CONCAT44(extraout_var_00,uVar3);
  local_d0 = param_3;
  local_c8 = param_3;
  bVar2 = _exception_enabled(param_5,local_d8);
  uVar1 = param_8;
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe3 | 3;
    }
    _raise_exc(local_b8,&local_d8,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)&local_d0);
  }
  bVar2 = FUN_14000798c();
  if ((bVar2) && (param_4 != 0)) {
    FUN_14000da9c(param_4,(ulonglong)param_6,param_1,param_7,uVar1,local_d0,(uint)local_d8);
  }
  else {
    _set_errno_from_matherr(param_4);
    _ctrlfp((uint)local_d8,0xffc0);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_118);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00014000dd09) */
/* Library Function - Single Match
    __acrt_initialize_fma3
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_fma3(void)

{
  longlong lVar1;
  byte in_XCR0;
  
  DAT_14001ac10 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    DAT_14001ac10 = (uint)((in_XCR0 & 6) == 6);
  }
  DAT_14001ac14 = DAT_14001ac10;
  return 0;
}




void FUN_14000dd60(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_14000dd80(param_1,param_2,param_3,0x1b,"log10");
  return;
}




undefined4
FUN_14000dd80(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_14000dbc0(param_5,param_4,param_2,iVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}




/* Library Function - Single Match
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_bfedae4ebbf01fab1bb6dcc6a9e276e0>,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> &
   __ptr64,class <lambda_237c231691f317818eb88cc1d5d642d6> >(class
   <lambda_bfedae4ebbf01fab1bb6dcc6a9e276e0> && __ptr64,class
   <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> & __ptr64,class
   <lambda_237c231691f317818eb88cc1d5d642d6> && __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_bfedae4ebbf01fab1bb6dcc6a9e276e0>,class_<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&___ptr64,class_<lambda_237c231691f317818eb88cc1d5d642d6>_>
          (__crt_seh_guarded_call<int> *this,<lambda_bfedae4ebbf01fab1bb6dcc6a9e276e0> *param_1,
          <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *param_2,
          <lambda_237c231691f317818eb88cc1d5d642d6> *param_3)

{
  uint _FileHandle;
  int iVar1;
  ulong *puVar2;
  
  FID_conflict___acrt_lowio_lock_fh(*(uint *)param_1);
  _FileHandle = **(uint **)param_2;
  if ((*(byte *)((&DAT_14001a7b0)[(longlong)(int)_FileHandle >> 6] + 0x38 +
                (ulonglong)(_FileHandle & 0x3f) * 0x40) & 1) == 0) {
    puVar2 = __doserrno();
    *puVar2 = 9;
    iVar1 = -1;
  }
  else {
    iVar1 = _close_nolock(_FileHandle);
  }
  FID_conflict___acrt_lowio_lock_fh(*(uint *)param_3);
  return iVar1;
}




/* Library Function - Single Match
    _close
   
   Library: Visual Studio 2015 Release */

int __cdecl _close(int _FileHandle)

{
  int iVar1;
  ulong *puVar2;
  int local_res8 [2];
  __crt_seh_guarded_call<int> local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_14001abb0)) &&
       ((*(byte *)((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x40) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = __crt_seh_guarded_call<int>::
              operator()<class_<lambda_bfedae4ebbf01fab1bb6dcc6a9e276e0>,class_<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&___ptr64,class_<lambda_237c231691f317818eb88cc1d5d642d6>_>
                        (local_res10,(<lambda_bfedae4ebbf01fab1bb6dcc6a9e276e0> *)local_res20,
                         (<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec> *)local_18,
                         (<lambda_237c231691f317818eb88cc1d5d642d6> *)local_res18);
      return iVar1;
    }
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_14000803c();
  }
  return -1;
}




/* Library Function - Single Match
    _close_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl _close_nolock(int _FileHandle)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  intptr_t iVar4;
  intptr_t iVar5;
  HANDLE hObject;
  
  iVar4 = _get_osfhandle(_FileHandle);
  if (iVar4 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_14001a7b0 + 0xb8) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_14001a7b0 + 0x78) & 1) != 0)))) {
      iVar4 = _get_osfhandle(2);
      iVar5 = _get_osfhandle(1);
      if (iVar5 == iVar4) goto LAB_14000df4a;
    }
    hObject = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_14000dfa5;
    }
  }
LAB_14000df4a:
  DVar2 = 0;
LAB_14000dfa5:
  _free_osfhnd(_FileHandle);
  *(undefined1 *)
   ((&DAT_14001a7b0)[(longlong)_FileHandle >> 6] + 0x38 + (ulonglong)(_FileHandle & 0x3f) * 0x40) =
       0;
  if (DVar2 == 0) {
    iVar3 = 0;
  }
  else {
    __acrt_errno_map_os_error(DVar2);
    iVar3 = -1;
  }
  return iVar3;
}




/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

void __cdecl __acrt_stdio_free_stream(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}




/* Library Function - Single Match
    __dcrt_lowio_initialize_console_output
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __dcrt_lowio_initialize_console_output(void)

{
  DAT_1400198e0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}




/* Library Function - Single Match
    _get_fpsr
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2019 Release */

undefined4 _get_fpsr(void)

{
  return MXCSR;
}




void FUN_14000e0b0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}




/* Library Function - Single Match
    _fclrf
   
   Library: Visual Studio */

void _fclrf(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return;
}




/* Library Function - Single Match
    _raise_exc
   
   Library: Visual Studio 2015 Release */

void _raise_exc(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
               uint *param_6)

{
  _raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}




/* Library Function - Single Match
    _raise_exc_ex
   
   Library: Visual Studio 2015 Release */

void _raise_exc_ex(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
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
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar1 = _statfp();
  if ((uVar1 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (((uint)*param_2 & 0x6000) == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 & 0xfffe001f;
  *local_res8 = *local_res8 | (param_4 & 0xfff) << 5;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  _clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}




/* Library Function - Single Match
    _set_errno_from_matherr
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

void _set_errno_from_matherr(int param_1)

{
  ulong *puVar1;
  
  if (param_1 == 1) {
    puVar1 = __doserrno();
    *puVar1 = 0x21;
  }
  else if (param_1 - 2U < 2) {
    puVar1 = __doserrno();
    *puVar1 = 0x22;
  }
  return;
}




/* Library Function - Single Match
    _clrfp
   
   Library: Visual Studio 2015 Release */

uint _clrfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}




/* Library Function - Single Match
    _ctrlfp
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2019 Release */

uint _ctrlfp(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
  if ((DAT_1400198f0 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_14000e0b0(uVar2 & 0xffffffbf);
  }
  else {
    FUN_14000e0b0(uVar2);
  }
  return uVar1;
}




/* Library Function - Single Match
    _set_statfp
   
   Library: Visual Studio 2015 Release */

void _set_statfp(uint param_1)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  FUN_14000e0b0(uVar1 | param_1 & 0x3f);
  return;
}




/* Library Function - Single Match
    _statfp
   
   Library: Visual Studio 2015 Release */

uint _statfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  return uVar1 & 0x3f;
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




undefined8 * FUN_14000e5a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  
  uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
  p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)uVar1;
  if (uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_140000000,(DWORD_PTR)(pTarget + -0x140000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)(~(p_Var2->Characteristics >> 0x1f) & 1);
    }
  }
  return (BOOL)p_Var2;
}




/* Library Function - Single Match
    _ValidateImageBase
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  if (((*(short *)pImageBase == 0x5a4d) &&
      (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) &&
     ((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b)) {
    return 1;
  }
  return 0;
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




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00014000e810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_14000e820(undefined8 param_1,longlong param_2)

{
  FUN_140001500((LPCRITICAL_SECTION)(*(longlong *)(param_2 + 0x40) + 0x88));
  return;
}




void Unwind_14000e83f(undefined8 param_1,longlong param_2)

{
  FUN_140002af0((longlong *)(param_2 + 0x20));
  return;
}




void Unwind_14000e860(undefined8 param_1,longlong param_2)

{
  FUN_140002af0((longlong *)(param_2 + 0x28));
  return;
}




void FUN_14000e890(undefined8 *param_1)

{
  _seh_filter_exe(*(int *)*param_1,param_1);
  return;
}




bool FUN_14000e93f(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0x38) != '\0';
}




void FUN_14000e957(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  *(_EXCEPTION_POINTERS **)(param_2 + 0x58) = param_1;
  ExFilterRethrow(param_1,*(EHExceptionRecord **)(param_2 + 0xb8),(int *)(param_2 + 0x20));
  return;
}




void FUN_14000e9f4(undefined8 *param_1)

{
  __FrameUnwindFilter(param_1);
  return;
}




void FUN_14000ea0a(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




void FUN_14000ea2d(undefined8 *param_1)

{
  FUN_140006b48(*(int *)*param_1);
  return;
}




void FUN_14000ea48(void)

{
  __acrt_unlock(2);
  return;
}




void FUN_14000ea61(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}




void FUN_14000ea7b(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x88));
  return;
}




void FUN_14000ea98(void)

{
  __acrt_unlock(4);
  return;
}




void FUN_14000eab1(void)

{
  __acrt_unlock(5);
  return;
}




void FUN_14000eaca(void)

{
  __acrt_unlock(7);
  return;
}




void FUN_14000eae3(void)

{
  __acrt_unlock(0);
  return;
}




void FUN_14000eaf9(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) != '\0') {
    __acrt_unlock(3);
  }
  return;
}




void FUN_14000eb1d(undefined8 param_1,longlong param_2)

{
  FUN_14000ba3c(*(longlong *)(param_2 + 0x68));
  return;
}




void FUN_14000eb37(void)

{
  __acrt_unlock(8);
  return;
}




void FUN_14000eb50(void)

{
  __acrt_unlock(8);
  return;
}




void FUN_14000eb69(undefined8 param_1,longlong param_2)

{
  FID_conflict___acrt_lowio_lock_fh(**(uint **)(param_2 + 0x48));
  return;
}




void FUN_14000eb83(undefined8 param_1,longlong param_2)

{
  FID_conflict___acrt_lowio_lock_fh(*(uint *)(param_2 + 0x50));
  return;
}




void FUN_14000eb9a(undefined8 param_1,longlong param_2)

{
  FUN_14000ba3c(*(longlong *)(param_2 + 0x30));
  return;
}




undefined8 FUN_14000ebb2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




bool FUN_14000ebe0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



