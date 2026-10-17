
void FUN_00401000(void)

{
  byte bVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042719e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00401bb0(&DAT_0042f3c4,&DAT_0042a454,0);
  local_8 = 0;
  DAT_0042f3ec = 0;
  DAT_0042f3f0 = 7;
  DAT_0042f3dc._0_2_ = 0;
  FUN_00401bb0(&DAT_0042f3dc,&DAT_0042a454,0);
  local_8._0_1_ = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0042f3f4);
  local_8 = CONCAT31(local_8._1_3_,2);
  DAT_0042f3bc = FUN_00426250(0x3201000);
  if (DAT_0042f3bc == 0) {
    DAT_0042f3c0 = 1;
  }
  else {
    bVar1 = 0;
    DAT_0042f3ac = CreateFileMappingA((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)0x0,4,0,0x3201200,
                                      "IMGRepair_ShareMemory_ClickFile");
    if (DAT_0042f3ac != (HANDLE)0x0) {
      DAT_0042f3b8 = MapViewOfFile(DAT_0042f3ac,0xf001f,0,0,0);
      if (DAT_0042f3b8 != (LPVOID)0x0) {
        DAT_0042f3a8 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"IMGRepair_Mutex_ClickFile");
        if (DAT_0042f3a8 != (HANDLE)0x0) {
          DAT_0042f3b0 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,
                                      "IMGRepair_DRWUIWriteOver_ClickFile");
          if (DAT_0042f3b0 != (HANDLE)0x0) {
            DAT_0042f3b4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,
                                        "IMGRepair_DRWReadOver_ClickFile");
            bVar1 = 0;
            if (DAT_0042f3b4 != (HANDLE)0x0) {
              bVar1 = 1;
            }
          }
        }
      }
    }
    DAT_0042f3c0 = bVar1 ^ 1;
  }
  local_8 = 0xffffffff;
  _atexit((_func_4879 *)&LAB_004281a0);
  ExceptionList = local_10;
  return;
}




undefined4 FUN_004011c0(void)

{
  ATOM AVar1;
  HANDLE hMutex;
  HWND hWnd;
  HANDLE hHandle;
  int iVar2;
  WNDCLASSEXA local_58;
  tagMSG local_28;
  HANDLE local_c;
  DWORD local_8;
  
  local_58.cbSize = 0x30;
  local_58.style = 3;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hInstance = (HINSTANCE)0x0;
  local_58.lpfnWndProc = FUN_00401390;
  local_58.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_58.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_58.hbrBackground = (HBRUSH)GetStockObject(0);
  local_58.lpszMenuName = (LPCSTR)0x0;
  local_58.lpszClassName = "EUImgRepair_Classname";
  local_58.hIconSm = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  AVar1 = RegisterClassExA(&local_58);
  if (AVar1 != 0) {
    SetErrorMode(0x8007);
    hMutex = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"IMGRepair_Mutex");
    if (hMutex != (HANDLE)0x0) {
      hWnd = CreateWindowExA(0,"EUImgRepair_Classname","EUImgRepair_Wndname",0xcf0000,0,0,0,0,
                             (HWND)0x0,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
      if (hWnd != (HWND)0x0) {
        ShowWindow(hWnd,0);
        UpdateWindow(hWnd);
        local_8 = 0;
        hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004014a0,(LPVOID)0x0,0,&local_8);
        local_28.time = 0;
        local_28.pt.x = 0;
        local_28.hwnd = (HWND)0x0;
        local_28.message = 0;
        local_28.wParam = 0;
        local_28.lParam = 0;
        local_28.pt.y = 0;
        DAT_0042f8b0 = hWnd;
        local_c = hHandle;
        iVar2 = GetMessageA(&local_28,(HWND)0x0,0,0);
        while ((iVar2 != 0 && (hHandle = local_c, DAT_0042f8b4 == '\0'))) {
          if (iVar2 != -1) {
            TranslateMessage(&local_28);
            DispatchMessageA(&local_28);
          }
          iVar2 = GetMessageA(&local_28,(HWND)0x0,0,0);
          hHandle = local_c;
        }
        if (hHandle != (HANDLE)0x0) {
          WaitForSingleObject(hHandle,0xffffffff);
          CloseHandle(hHandle);
        }
        ReleaseMutex(hMutex);
        DestroyWindow(hWnd);
        return local_28.wParam;
      }
      ReleaseMutex(hMutex);
      CloseHandle((HANDLE)0x0);
      return 0;
    }
  }
  return 0;
}




undefined4 FUN_00401390(undefined4 param_1,DWORD param_2,undefined4 param_3,HKEY param_4)

{
  undefined4 uVar1;
  LSTATUS LVar2;
  BYTE *pBVar3;
  
  if (param_2 == 2) {
    DAT_0042f8b4 = 1;
    PostQuitMessage(0);
  }
  else {
    if (param_2 != 0x4a) {
                    /* WARNING: Could not recover jumptable at 0x004013aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = DefWindowProcA();
      return uVar1;
    }
    FUN_004016a0(0x4a,&param_4->unused);
    param_4 = (HKEY)0x0;
    param_2 = 0;
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,
                          L"SOFTWARE\\EASEUS\\EaseUS Data Recovery Wizard\\EUImgRepair",0,0xf003f,
                          &param_4);
    if (LVar2 != 0) {
      RegCreateKeyExW((HKEY)0x80000001,L"SOFTWARE\\EASEUS\\EaseUS Data Recovery Wizard\\EUImgRepair"
                      ,0,(LPWSTR)0x0,0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,&param_4,&param_2);
    }
    if (param_4 != (HKEY)0x0) {
      pBVar3 = (BYTE *)&DAT_0042f40c;
      if (7 < DAT_0042f420) {
        pBVar3 = DAT_0042f40c;
      }
      LVar2 = RegSetValueExW(param_4,L"FullFileName",0,1,pBVar3,DAT_0042f41c * 2);
      if (LVar2 == 0) {
        pBVar3 = (BYTE *)&DAT_0042f424;
        if (7 < DAT_0042f438) {
          pBVar3 = DAT_0042f424;
        }
        RegSetValueExW(param_4,L"FullRepairedFileName",0,1,pBVar3,DAT_0042f434 * 2);
      }
      RegCloseKey(param_4);
      return 0;
    }
  }
  return 0;
}




void FUN_004014a0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  void *pvVar4;
  size_t _Size;
  uint nCount;
  uint uVar5;
  HANDLE local_42c;
  HANDLE local_428;
  DWORD local_424;
  void *local_420;
  undefined4 *local_41c;
  undefined4 *local_418;
  HANDLE local_414 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004271cb;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0042f3c0 == '\0') {
    local_424 = 0;
    local_428 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401f10,&DAT_0042f3a0,0,&local_424);
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402050,&DAT_0042f3a0,0,&local_424);
    local_42c = pvVar3;
    DAT_0042f3a0 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,"IMGRepair_Rised_Event");
    local_420 = (void *)0x0;
    local_41c = (undefined4 *)0x0;
    local_418 = (undefined4 *)0x0;
    local_8 = 0;
    FUN_004022d0(&local_420,(void *)0x0,&local_428);
    if (local_418 == local_41c) {
      FUN_004022d0(&local_420,local_41c,&local_42c);
    }
    else {
      *local_41c = pvVar3;
      local_41c = local_41c + 1;
    }
    puVar2 = local_41c;
    memset(local_414,0,0x400);
    pvVar1 = local_420;
    _Size = (int)puVar2 - (int)local_420;
    memmove(local_414,local_420,_Size);
    nCount = (int)_Size >> 2;
    WaitForMultipleObjects(nCount,local_414,1,0xffffffff);
    uVar5 = 0;
    if (nCount != 0) {
      do {
        CloseHandle(*(HANDLE *)((int)pvVar1 + uVar5 * 4));
        *(undefined4 *)((int)pvVar1 + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < nCount);
    }
    local_8 = 0xffffffff;
    if (pvVar1 != (void *)0x0) {
      pvVar4 = pvVar1;
      if (0xfff < ((int)local_418 - (int)pvVar1 & 0xfffffffcU)) {
        pvVar4 = *(void **)((int)pvVar1 + -4);
        if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_00425f95(pvVar4);
      local_420 = (void *)0x0;
      local_41c = (undefined4 *)0x0;
      local_418 = (undefined4 *)0x0;
    }
  }
  PostMessageA(DAT_0042f8b0,0x12,0,0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004016a0(undefined4 param_1,int *param_2)

{
  short sVar1;
  uint _Size;
  int *piVar2;
  undefined4 ****ppppuVar3;
  HANDLE hHandle;
  undefined4 **ppuVar4;
  short *psVar5;
  undefined4 ***local_2048 [4];
  uint local_2038;
  uint local_2034;
  DWORD local_2030;
  undefined4 ***local_202c [4];
  uint local_201c;
  uint local_2018;
  short local_2014;
  undefined1 local_2012 [8190];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427221;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00401bb0(&DAT_0042f40c,&DAT_0042a454,0);
  FUN_00401bb0(&DAT_0042f424,&DAT_0042a454,0);
  if ((param_2 != (int *)0x0) && (*param_2 == 9999)) {
    memset(&local_2014,0,0x2000);
    _Size = param_2[1];
    if (_Size < 0x1001) {
      if (_Size != 0) {
        if ((void *)param_2[2] == (void *)0x0) {
          piVar2 = _errno();
          *piVar2 = 0x16;
          _invalid_parameter_noinfo();
        }
        else if (_Size < 0x1001) {
          memmove(&local_2014,(void *)param_2[2],_Size);
        }
        else {
          piVar2 = _errno();
          *piVar2 = 0x22;
          _invalid_parameter_noinfo();
        }
      }
      psVar5 = &local_2014;
      local_201c = 0;
      local_2018 = 7;
      local_202c[0] = (undefined4 ***)((uint)local_202c[0] & 0xffff0000);
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      FUN_00401bb0(local_202c,&local_2014,(int)psVar5 - (int)local_2012 >> 1);
      local_8 = 0;
      ppppuVar3 = local_202c;
      if (7 < local_2018) {
        ppppuVar3 = (undefined4 ****)local_202c[0];
      }
      FUN_00401bb0(&DAT_0042f40c,ppppuVar3,local_201c);
      FUN_00401ad0(local_2048,local_202c);
      local_8._0_1_ = 1;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042f3f4);
      local_8._0_1_ = 2;
      ppppuVar3 = local_2048;
      if (7 < local_2034) {
        ppppuVar3 = (undefined4 ****)local_2048[0];
      }
      FUN_00401bb0(&DAT_0042f3c4,ppppuVar3,local_2038);
      FUN_00401bb0(&DAT_0042f424,&DAT_0042a454,0);
      local_2030 = 0;
      hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402150,&DAT_0042f3a0,0,&local_2030);
      WaitForSingleObject(hHandle,12000);
      CloseHandle(hHandle);
      ppuVar4 = &DAT_0042f3dc;
      if (7 < DAT_0042f3f0) {
        ppuVar4 = (undefined4 **)DAT_0042f3dc;
      }
      FUN_00401bb0(&DAT_0042f424,ppuVar4,DAT_0042f3ec);
      local_8._0_1_ = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042f3f4);
      local_8 = (uint)local_8._1_3_ << 8;
      if (7 < local_2034) {
        ppppuVar3 = (undefined4 ****)local_2048[0];
        if ((0xfff < local_2034 * 2 + 2) &&
           (ppppuVar3 = (undefined4 ****)local_2048[0][-1],
           0x1f < (uint)((int)local_2048[0] + (-4 - (int)ppppuVar3)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(ppppuVar3);
      }
      local_2038 = 0;
      local_2034 = 7;
      local_2048[0] = (undefined4 ***)((uint)local_2048[0] & 0xffff0000);
      local_8 = 0xffffffff;
      if (7 < local_2018) {
        ppppuVar3 = (undefined4 ****)local_202c[0];
        if ((0xfff < local_2018 * 2 + 2) &&
           (ppppuVar3 = (undefined4 ****)local_202c[0][-1],
           0x1f < (uint)((int)local_202c[0] + (-4 - (int)ppppuVar3)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(ppppuVar3);
      }
      local_201c = 0;
      local_2018 = 7;
      local_202c[0] = (undefined4 ***)((uint)local_202c[0] & 0xffff0000);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __thiscall std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::operator=(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const &)
   
   Library: Visual Studio 2019 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator=
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  
  if (this != param_1) {
    pbVar1 = param_1;
    if (7 < *(uint *)(param_1 + 0x14)) {
      pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                param_1;
    }
    FUN_00401bb0(this,pbVar1,*(uint *)(param_1 + 0x10));
  }
  return this;
}




void __fastcall FUN_004019f0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (7 < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] * 2 + 2U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  ExceptionList = local_10;
  return;
}




undefined2 * __thiscall FUN_00401a80(void *this,short *param_1)

{
  short sVar1;
  short *psVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)this = 0;
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_00401bb0(this,param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return (undefined2 *)this;
}




undefined4 * __thiscall FUN_00401ad0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = param_1[4];
  if (7 < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (uVar1 < 8) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = uVar2;
    *(undefined4 *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 0xc) = uVar4;
    *(uint *)((int)this + 0x10) = uVar1;
    *(undefined4 *)((int)this + 0x14) = 7;
    return (undefined4 *)this;
  }
  uVar8 = uVar1 | 7;
  if (0x7ffffffe < uVar8) {
    uVar8 = 0x7ffffffe;
  }
  uVar7 = (uVar8 + 1) * 2;
  if (uVar8 + 1 < 0x80000000) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = operator_new(uVar7);
      }
      goto LAB_00401b7b;
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  uVar5 = uVar7 + 0x23;
  if (uVar5 <= uVar7) {
    uVar5 = 0xffffffff;
  }
  pvVar6 = operator_new(uVar5);
  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
  *(void **)((int)_Dst - 4) = pvVar6;
LAB_00401b7b:
  *(void **)this = _Dst;
  memcpy(_Dst,param_1,uVar1 * 2 + 2);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)((int)this + 0x14) = uVar8;
  return (undefined4 *)this;
}




int * __thiscall FUN_00401bb0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (param_2 <= uVar1) {
    pvVar8 = this;
    if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
      pvVar8 = *this;
    }
    *(uint *)((int)this + 0x10) = param_2;
    memmove(pvVar8,param_1,param_2 * 2);
    *(undefined2 *)(param_2 * 2 + (int)pvVar8) = 0;
    return (int *)this;
  }
  if (0x7ffffffe < param_2) {
    FUN_00401cf0();
    pcVar2 = (code *)swi(3);
    piVar6 = (int *)(*pcVar2)();
    return piVar6;
  }
  uVar9 = param_2 | 7;
  if (uVar9 < 0x7fffffff) {
    if (0x7ffffffe - (uVar1 >> 1) < uVar1) {
      uVar9 = 0x7ffffffe;
    }
    else {
      uVar7 = (uVar1 >> 1) + uVar1;
      if (uVar9 < uVar7) {
        uVar9 = uVar7;
      }
    }
  }
  else {
    uVar9 = 0x7ffffffe;
  }
  uVar7 = (uVar9 + 1) * 2;
  if (uVar9 + 1 < 0x80000000) {
    if (0xfff < uVar7) goto LAB_00401c4a;
    if (uVar7 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = operator_new(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_00401c4a:
    uVar3 = uVar7 + 0x23;
    if (uVar3 <= uVar7) {
      uVar3 = 0xffffffff;
    }
    pvVar4 = operator_new(uVar3);
    if (pvVar4 == (void *)0x0) goto LAB_00401ce1;
    pvVar8 = (void *)((int)pvVar4 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar8 - 4) = pvVar4;
  }
  *(uint *)((int)this + 0x14) = uVar9;
  *(uint *)((int)this + 0x10) = param_2;
  memcpy(pvVar8,param_1,param_2 * 2);
  *(undefined2 *)(param_2 * 2 + (int)pvVar8) = 0;
  if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *this;
    pvVar5 = pvVar4;
    if ((0xfff < uVar1 * 2 + 2) &&
       (pvVar5 = *(void **)((int)pvVar4 + -4), 0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5)))) {
LAB_00401ce1:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar5);
  }
  *(void **)this = pvVar8;
  return (int *)this;
}




void FUN_00401cf0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    public: __thiscall CSemExclusiveLocal::~CSemExclusiveLocal(void)
   
   Library: Visual Studio 2017 Release */

void __thiscall CSemExclusiveLocal::~CSemExclusiveLocal(CSemExclusiveLocal *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  ExceptionList = local_10;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401d40(void)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004272b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  if (DAT_0042f3b0 != (HANDLE)0x0) {
    CloseHandle(DAT_0042f3b0);
    DAT_0042f3b0 = (HANDLE)0x0;
  }
  if (DAT_0042f3b4 != (HANDLE)0x0) {
    CloseHandle(DAT_0042f3b4);
    DAT_0042f3b4 = (HANDLE)0x0;
  }
  if (DAT_0042f3b8 != (LPCVOID)0x0) {
    UnmapViewOfFile(DAT_0042f3b8);
    DAT_0042f3b8 = (LPCVOID)0x0;
  }
  if (DAT_0042f3ac != (HANDLE)0x0) {
    CloseHandle(DAT_0042f3ac);
    DAT_0042f3ac = (HANDLE)0x0;
  }
  if (DAT_0042f3a8 != (HANDLE)0x0) {
    ReleaseMutex(DAT_0042f3a8);
    DAT_0042f3a8 = (HANDLE)0x0;
  }
  if (DAT_0042f3bc != (void *)0x0) {
    FUN_00425f95(DAT_0042f3bc);
    DAT_0042f3bc = (void *)0x0;
  }
  if (DAT_0042f3a0 != (HANDLE)0x0) {
    CloseHandle(DAT_0042f3a0);
    DAT_0042f3a0 = (HANDLE)0x0;
  }
  local_8._0_1_ = 1;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0042f3f4);
  local_8 = (uint)local_8._1_3_ << 8;
  if (7 < DAT_0042f3f0) {
    pvVar1 = DAT_0042f3dc;
    if ((0xfff < DAT_0042f3f0 * 2 + 2) &&
       (pvVar1 = *(void **)((int)DAT_0042f3dc + -4),
       0x1f < (uint)((int)DAT_0042f3dc + (-4 - (int)pvVar1)))) goto LAB_00401efe;
    FUN_00425f95(pvVar1);
  }
  DAT_0042f3ec = 0;
  DAT_0042f3f0 = 7;
  DAT_0042f3dc = (void *)((uint)DAT_0042f3dc & 0xffff0000);
  local_8 = -1;
  if (7 < DAT_0042f3d8) {
    pvVar1 = DAT_0042f3c4;
    if ((0xfff < DAT_0042f3d8 * 2 + 2) &&
       (pvVar1 = *(void **)((int)DAT_0042f3c4 + -4),
       0x1f < (uint)((int)DAT_0042f3c4 + (-4 - (int)pvVar1)))) {
LAB_00401efe:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar1);
  }
  _DAT_0042f3d4 = 0;
  DAT_0042f3d8 = 7;
  DAT_0042f3c4 = (void *)((uint)DAT_0042f3c4 & 0xffff0000);
  ExceptionList = local_10;
  return;
}




undefined4 __thiscall FUN_00401f10(void *this,LPVOID param_1)

{
  LPVOID lpParameter;
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hHandle;
  void *local_8;
  
  lpParameter = param_1;
  local_8 = this;
  if (param_1 == (LPVOID)0x0) {
    return 0;
  }
  while( true ) {
    cVar1 = '\x01';
    if (DAT_0042f8b4 == '\0') {
      cVar1 = *(char *)((int)lpParameter + 0x20);
    }
    *(char *)((int)lpParameter + 0x20) = cVar1;
    if (cVar1 != '\0') {
      return 0;
    }
    BVar2 = SetEvent(*(HANDLE *)((int)lpParameter + 0x14));
    if ((BVar2 == 0) ||
       (DVar3 = WaitForSingleObject(*(HANDLE *)((int)lpParameter + 0x10),0xffffffff), DVar3 != 0))
    break;
    if (*(char *)((int)lpParameter + 0x20) != '\0') {
      return 0;
    }
    memcpy(*(void **)((int)lpParameter + 0x1c),*(void **)((int)lpParameter + 0x18),0x3201000);
    local_8 = (void *)0x0;
    hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402020,lpParameter,0,(LPDWORD)&local_8
                          );
    WaitForSingleObject(hHandle,12000);
    param_1 = (LPVOID)0x0;
    GetExitCodeThread(hHandle,(LPDWORD)&param_1);
    CloseHandle(hHandle);
    if (((param_1 == (LPVOID)0x0) && (*(void **)((int)lpParameter + 0x18) != (void *)0x0)) &&
       (*(void **)((int)lpParameter + 0x1c) != (void *)0x0)) {
      memcpy(*(void **)((int)lpParameter + 0x18),*(void **)((int)lpParameter + 0x1c),0x3201000);
    }
    BVar2 = ResetEvent(*(HANDLE *)((int)lpParameter + 0x10));
    if (BVar2 == 0) break;
    Sleep(100);
  }
  *(undefined1 *)((int)lpParameter + 0x20) = 1;
  return 0;
}




undefined4 FUN_00402020(int param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 extraout_var;
  undefined4 *puVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    puVar2 = puVar1;
    this = FUN_00408a50();
    FUN_00409d10(this,puVar1,extraout_var,puVar2);
  }
  return 0;
}




undefined4 FUN_00402050(int param_1)

{
  byte bVar1;
  bool bVar2;
  HANDLE hObject;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    bVar2 = false;
    hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
    puVar3 = (undefined4 *)operator_new(0x128);
    *puVar3 = 0x128;
    iVar4 = Process32Next(hObject,puVar3);
    while (iVar4 != 0) {
      pbVar5 = &DAT_0042a5e0;
      pbVar7 = (byte *)(puVar3 + 9);
      do {
        bVar1 = *pbVar7;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_004020c0:
          uVar6 = -(uint)bVar8 | 1;
          goto LAB_004020c5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_004020c0;
        pbVar7 = pbVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar6 = 0;
LAB_004020c5:
      if (uVar6 == 0) {
        bVar2 = true;
        break;
      }
      iVar4 = Process32Next(hObject,puVar3);
    }
    CloseHandle(hObject);
    FUN_00425f95(puVar3);
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      goto LAB_00402126;
    }
    if (*(char *)(param_1 + 0x20) != '\0') goto LAB_00402126;
    if (DAT_0042f8b4 != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 1;
LAB_00402126:
      DAT_0042f8b4 = 1;
      SetEvent(*(HANDLE *)(param_1 + 0x10));
      return 0;
    }
    Sleep(5000);
  } while( true );
}




undefined4 FUN_00402150(int param_1)

{
  undefined4 *this;
  void *in_stack_ffffffd0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004272d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    FUN_00401ad0(&stack0xffffffd0,(undefined4 *)(param_1 + 0x24));
    local_8 = 0;
    this = FUN_00408a50();
    local_8 = 0xffffffff;
    FUN_004097e0(this,in_stack_ffffffd0);
  }
  ExceptionList = local_10;
  return 0;
}




void __fastcall FUN_004021c0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_00402200(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = local_10;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall std::_Parallelism_allocator<unsigned int>::deallocate(unsigned int *
   const,unsigned int)
    public: void __thiscall std::allocator<unsigned int>::deallocate(unsigned int * const,unsigned
   int)
    public: void __thiscall std::allocator<struct CHN *>::deallocate(struct CHN * * const,unsigned
   int)
    public: void __thiscall std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> *,void *,unsigned int)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> *,void *,unsigned int)'::`2'::M * const,unsigned int)
     8 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 4)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_00425f95(pvVar1);
  return;
}




undefined4 * __thiscall FUN_004022d0(void *this,void *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *_Dst;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  iVar2 = *this;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 2;
  if (iVar4 == 0x3fffffff) {
    FUN_00402480();
    pcVar3 = (code *)swi(3);
    puVar9 = (undefined4 *)(*pcVar3)();
    return puVar9;
  }
  uVar1 = iVar4 + 1;
  uVar10 = *(int *)((int)this + 8) - iVar2 >> 2;
  uVar5 = uVar1;
  if ((uVar10 <= 0x3fffffff - (uVar10 >> 1)) && (uVar5 = (uVar10 >> 1) + uVar10, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar10 = uVar5 * 4;
  if (uVar5 < 0x40000000) {
    uVar5 = uVar10;
    if (0xfff < uVar10) goto LAB_00402367;
    if (uVar10 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar10);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_00402367:
    uVar6 = uVar5 + 0x23;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    pvVar7 = operator_new(uVar6);
    if (pvVar7 == (void *)0x0) goto LAB_0040238a;
    _Dst = (void *)((int)pvVar7 + 0x23U & 0xffffffe0);
    *(void **)((int)_Dst - 4) = pvVar7;
  }
  local_8 = 0;
  puVar9 = (undefined4 *)((int)_Dst + ((int)param_1 - iVar2 >> 2) * 4);
  *puVar9 = *param_2;
  if (param_1 == *(void **)((int)this + 4)) {
                    /* WARNING: Load size is inaccurate */
    memmove(_Dst,*this,(int)*(void **)((int)this + 4) - (int)*this);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    memmove(_Dst,*this,(int)param_1 - (int)*this);
    memmove(puVar9 + 1,param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  local_8 = 0xffffffff;
                    /* WARNING: Load size is inaccurate */
  pvVar7 = *this;
  if (pvVar7 != (void *)0x0) {
    pvVar8 = pvVar7;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar7 & 0xfffffffcU)) &&
       (pvVar8 = *(void **)((int)pvVar7 + -4), 0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar8)))) {
LAB_0040238a:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar8);
  }
  *(void **)this = _Dst;
  *(void **)((int)this + 4) = (void *)((int)_Dst + uVar1 * 4);
  *(void **)((int)this + 8) = (void *)(uVar10 + (int)_Dst);
  ExceptionList = local_10;
  return puVar9;
}




void Catch_00402463(void)

{
  int unaff_EBP;
  
  deallocate(*(void **)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x1c));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00402480(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void __fastcall FUN_00402490(undefined4 *param_1)

{
  *param_1 = IImgAnalyzer::vftable;
  return;
}




undefined4 * __thiscall FUN_004024a0(void *this,byte param_1)

{
  *(undefined ***)this = IImgAnalyzer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00425f95(this);
  }
  return (undefined4 *)this;
}




undefined4 * __thiscall FUN_004024d0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427333;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CGIFAnalyzer::vftable;
  local_8 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  local_8 = 0xffffffff;
  *(undefined ***)this = IImgAnalyzer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00425f95(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}




char __thiscall FUN_00402550(void *this,void *param_1)

{
  char cVar1;
  void *pvVar2;
  uint in_stack_00000018;
  wchar_t *in_stack_ffffffb4;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00401ad0(&stack0xffffffb4,&param_1);
  local_8 = local_8 & 0xffffff00;
  cVar1 = FUN_00402840(this,in_stack_ffffffb4);
  if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
    cVar1 = (**(code **)(*this + 8))();
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar2);
  }
  ExceptionList = local_10;
  return cVar1;
}




bool __thiscall FUN_00402640(uint3 param_1,short *param_2,uint param_3)

{
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  FUN_004029d0(param_2,param_3,(undefined1 *)((int)&uStack_8 + 3),'\0');
  return uStack_8._3_1_ == '\0';
}




char __thiscall FUN_00402670(void *this,void *param_1)

{
  char cVar1;
  void *pvVar2;
  uint in_stack_00000018;
  int in_stack_00000024;
  uint *in_stack_00000028;
  wchar_t *in_stack_ffffffa8;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cVar1 = '\0';
  if (((in_stack_00000024 != 0) && (-1 < (int)in_stack_00000028[1])) &&
     ((0 < (int)in_stack_00000028[1] || (9 < *in_stack_00000028)))) {
    FUN_00401ad0(&stack0xffffffa8,&param_1);
    local_8 = local_8 & 0xffffff00;
    cVar1 = FUN_00402840(this,in_stack_ffffffa8);
    if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
      cVar1 = (**(code **)(*this + 0x10))();
    }
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar2);
  }
  ExceptionList = local_10;
  return cVar1;
}




undefined1 __thiscall
FUN_00402790(ushort param_1,short *param_2,uint param_3,int param_4,void *param_5,uint *param_6,
            undefined4 *param_7)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  uVar1 = FUN_004029d0(param_2,param_3,(undefined1 *)((int)&uStack_8 + 3),'\x01');
  if (uVar1 != 0) {
    if ((param_5 == (void *)0x0) || (param_2 == (short *)0x0)) {
      piVar2 = _errno();
      *piVar2 = 0x16;
      _invalid_parameter_noinfo();
    }
    else if (*param_6 < uVar1) {
      piVar2 = _errno();
      *piVar2 = 0x22;
      _invalid_parameter_noinfo();
    }
    else {
      memmove(param_5,param_2,uVar1);
    }
    uVar3 = (int)uVar1 >> 0x1f;
    *param_6 = uVar1;
    param_6[1] = uVar3;
    if (((int)uVar3 <= param_4) && (((int)uVar3 < param_4 || (uVar1 < param_3)))) {
      *(undefined1 *)(uVar1 + (int)param_5) = 0x3b;
      uVar1 = *param_6;
      *param_6 = *param_6 + 1;
      param_6[1] = param_6[1] + (uint)(0xfffffffe < uVar1);
    }
    *param_7 = 0;
    return 1;
  }
  return uStack_8._2_1_;
}




undefined1 __thiscall FUN_00402840(void *this,wchar_t *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  wchar_t **_Filename;
  errno_t eVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined1 uVar5;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_00000020;
  size_t *in_stack_00000024;
  FILE *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004273c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  local_11 = 0;
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 1;
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_00426250(0x3201000);
    *(int *)((int)this + 8) = iVar1;
  }
  if ((in_stack_00000020 < 0) || ((in_stack_00000020 < 1 && (in_stack_0000001c < 0x3201001)))) {
    *(undefined1 *)(in_stack_0000001c + iVar1) = 0;
    _Filename = &param_1;
    if (7 < in_stack_00000018) {
      _Filename = (wchar_t **)param_1;
    }
    local_18 = (FILE *)0x0;
    eVar2 = _wfopen_s(&local_18,(wchar_t *)_Filename,L"rb");
    if (eVar2 == 0) {
      sVar3 = fread_s(*(void **)((int)this + 8),0x3201000,1,in_stack_0000001c,local_18);
      *in_stack_00000024 = sVar3;
      in_stack_00000024[1] = 0;
      if (sVar3 == 0) {
        local_8 = (uint)local_8._1_3_ << 8;
        LeaveCriticalSection(lpCriticalSection);
        uVar5 = local_11;
      }
      else {
        fclose(local_18);
        uVar5 = 1;
        local_8 = (uint)local_8._1_3_ << 8;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    else {
      local_8 = (uint)local_8._1_3_ << 8;
      LeaveCriticalSection(lpCriticalSection);
      uVar5 = local_11;
    }
  }
  else {
    local_8 = (uint)local_8._1_3_ << 8;
    LeaveCriticalSection(lpCriticalSection);
    uVar5 = local_11;
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pwVar4 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pwVar4 = *(wchar_t **)(param_1 + -2);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pwVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pwVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}




int FUN_004029d0(short *param_1,uint param_2,undefined1 *param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_c;
  
  iVar11 = 0;
  bVar7 = false;
  iVar10 = 0;
  sVar4 = *param_1;
  bVar5 = false;
  *param_3 = 0;
  if (((sVar4 != 0x4947) || ((char)param_1[1] != 'F')) ||
     (((*(short *)((int)param_1 + 3) != 0x3738 || (*(char *)((int)param_1 + 5) != 'a')) &&
      ((*(short *)((int)param_1 + 3) != 0x3938 || (*(char *)((int)param_1 + 5) != 'a')))))) {
LAB_00402c95:
    if ((param_4 != '\0') && (iVar11 != 0)) {
      iVar10 = iVar11;
    }
    return iVar10;
  }
  iVar10 = 0xd;
  if ((char)*(byte *)(param_1 + 5) < '\0') {
    iVar10 = (3 << (*(byte *)(param_1 + 5) & 7) + 1) + 0xd;
  }
joined_r0x00402a53:
  while( true ) {
    if (((int)param_2 <= iVar10) || (bVar5)) goto LAB_00402c95;
    cVar2 = *(char *)(iVar10 + (int)param_1);
    piVar1 = (int *)(iVar10 + (int)param_1);
    local_c = iVar10;
    if (cVar2 == '!') break;
    if (cVar2 == ',') {
      bVar3 = *(byte *)(iVar10 + 9 + (int)param_1);
      if (!bVar7) {
        local_c = iVar11;
      }
      bVar7 = true;
      iVar11 = (1 << (bVar3 & 7) + 1) * (uint)(bVar3 >> 7) * 3 + 0xb;
      bVar3 = *(byte *)((int)piVar1 + iVar11);
      iVar9 = iVar11;
      while (bVar3 != 0) {
        iVar11 = iVar11 + 1 + (uint)bVar3;
        iVar9 = iVar9 + 1 + (uint)bVar3;
        bVar3 = *(byte *)((int)piVar1 + iVar11);
      }
      goto LAB_00402b49;
    }
    if (cVar2 == ';') {
      iVar10 = iVar10 + 1;
      iVar11 = iVar10;
    }
    else {
      if (((param_2 <= iVar10 + 8U) || (*piVar1 != 0)) || (*(int *)(iVar10 + 4 + (int)param_1) != 0)
         ) goto switchD_00402b88_caseD_2;
      bVar5 = true;
      if (((float)iVar10 / (float)(int)param_2 <= 0.95) ||
         (*(char *)(iVar10 + -1 + (int)param_1) != ';')) {
LAB_00402c82:
        bVar5 = true;
        *param_3 = 1;
      }
    }
  }
  switch(*(undefined1 *)(iVar10 + 1 + (int)param_1)) {
  case 1:
    bVar6 = !bVar7;
    iVar8 = 0xf;
    bVar7 = false;
    if (bVar6) {
      local_c = iVar11;
    }
    iVar9 = 0xf;
    bVar3 = *(byte *)((int)piVar1 + 0xf);
    while (bVar3 != 0) {
      iVar8 = iVar8 + 1 + (uint)bVar3;
      iVar9 = iVar9 + 1 + (uint)bVar3;
      bVar3 = *(byte *)((int)piVar1 + iVar8);
    }
    break;
  default:
switchD_00402b88_caseD_2:
    goto LAB_00402c82;
  case 0xf9:
    iVar9 = iVar10;
    if (!bVar7) {
      iVar9 = iVar11;
    }
    iVar10 = iVar10 + 8;
    FUN_00402dc0("offset:%x size:%x block:%s\n");
    bVar7 = false;
    iVar11 = iVar9;
    goto joined_r0x00402a53;
  case 0xfe:
    bVar6 = !bVar7;
    iVar8 = 2;
    bVar7 = false;
    if (bVar6) {
      local_c = iVar11;
    }
    iVar9 = 2;
    bVar3 = *(byte *)((int)piVar1 + 2);
    while (bVar3 != 0) {
      iVar8 = iVar8 + 1 + (uint)bVar3;
      iVar9 = iVar9 + 1 + (uint)bVar3;
      bVar3 = *(byte *)((int)piVar1 + iVar8);
    }
    break;
  case 0xff:
    bVar6 = !bVar7;
    iVar8 = 0xe;
    bVar7 = false;
    if (bVar6) {
      local_c = iVar11;
    }
    iVar9 = 0xe;
    bVar3 = *(byte *)((int)piVar1 + 0xe);
    while (bVar3 != 0) {
      iVar8 = iVar8 + 1 + (uint)bVar3;
      iVar9 = iVar9 + 1 + (uint)bVar3;
      bVar3 = *(byte *)((int)piVar1 + iVar8);
    }
  }
LAB_00402b49:
  iVar10 = iVar10 + iVar9 + 1;
  FUN_00402dc0("offset:%x size:%x block:%s\n");
  iVar11 = local_c;
  goto joined_r0x00402a53;
}




void __cdecl FUN_00402dc0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  uVar1 = __acrt_iob_func(1);
  puVar4 = &stack0x00000008;
  uVar3 = 0;
  puVar2 = (undefined4 *)FUN_00402df0();
  __stdio_common_vfprintf(*puVar2,puVar2[1],uVar1,param_1,uVar3,puVar4);
  return;
}




undefined * FUN_00402df0(void)

{
  return &DAT_0042f8c0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00402e00(void)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427415;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*ThreadLocalStoragePointer + 4) < DAT_004300d8) {
    FUN_00426439(&DAT_004300d8);
    if (DAT_004300d8 == -1) {
      local_8 = 0;
      DAT_004300dc = 0;
      _DAT_004300e0 = 0;
      DAT_004300dc = FUN_00405380();
      local_8._0_1_ = 3;
      DAT_004300e4 = 0;
      _DAT_004300e8 = 0;
      DAT_004300e4 = FUN_00405300();
      local_8._0_1_ = 6;
      FUN_00402fc0();
      FUN_00403560();
      local_8 = (uint)local_8._1_3_ << 8;
      _atexit(FUN_00428270);
      local_8 = 0xffffffff;
      FUN_004263ef(&DAT_004300d8);
    }
  }
  ExceptionList = local_10;
  return &DAT_004300dc;
}




void FUN_00402ef0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042748a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_00404990();
  local_8 = 0xffffffff;
  FUN_00425f95(DAT_004300dc);
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_00402f50(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004274c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_14 = param_1;
  FUN_00404d80(param_1,&local_18,*(int **)*param_1,(int *)*param_1);
  local_8 = 0xffffffff;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void FUN_00402fc0(void)

{
  undefined4 *puVar1;
  void *_Dst;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427544;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_0042652d(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = IImgAnalyzer::vftable;
    *(undefined1 *)(puVar1 + 1) = 1;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    *puVar1 = CJPGAnalyzer::vftable;
    puVar1[2] = 0;
    puVar1[3] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 4));
    local_8 = CONCAT31(local_8._1_3_,2);
    _Dst = (void *)FUN_00426250(0x3201000);
    puVar1[3] = _Dst;
    memset(_Dst,0,0x3201000);
  }
  local_8 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = FUN_00404a80(&DAT_004300dc,(int *)&stack0xffffffec);
    *piVar2 = (int)puVar1;
    puVar1 = (undefined4 *)FUN_0042652d(8);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = IImgAnalyzer::vftable;
      *(undefined1 *)(puVar1 + 1) = 1;
      *puVar1 = CRAWAnalyzer::vftable;
    }
    local_8 = 0xffffffff;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = FUN_00404a80(&DAT_004300dc,(int *)&stack0xffffffec);
      *piVar2 = (int)puVar1;
      puVar1 = (undefined4 *)FUN_0042652d(0x24);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = IImgAnalyzer::vftable;
        *(undefined1 *)(puVar1 + 1) = 1;
        local_8 = 6;
        *puVar1 = CGIFAnalyzer::vftable;
        puVar1[2] = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
      }
      local_8 = 0xffffffff;
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = FUN_00404a80(&DAT_004300dc,(int *)&stack0xffffffec);
        *piVar2 = (int)puVar1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}




undefined1 __thiscall FUN_00403160(void *this,void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint in_stack_00000018;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  wchar_t *in_stack_ffffffb8;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427578;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar3 = 0;
  uStack_50 = 0x4031b6;
  FUN_00401ad0(&stack0xffffffb8,&param_1);
  local_8 = local_8 & 0xffffff00;
  iVar4 = FUN_004032a0(this,in_stack_ffffffb8);
                    /* WARNING: Load size is inaccurate */
  puVar1 = *this;
  puVar5 = (undefined4 *)puVar1[1];
  puVar8 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    do {
      if ((int)puVar5[4] < iVar4) {
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        puVar6 = (undefined4 *)*puVar5;
        puVar8 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0xd) == '\0');
    if ((puVar8 != puVar1) && ((int)puVar8[4] <= iVar4)) goto LAB_004031f1;
  }
  puVar8 = puVar1;
LAB_004031f1:
  if ((puVar8 != puVar1) && (piVar2 = (int *)puVar8[5], piVar2 != (int *)0x0)) {
    FUN_00401ad0(auStack_60,&param_1);
    local_8 = local_8 & 0xffffff00;
    uVar3 = (**(code **)(*piVar2 + 0xc))();
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar7 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar7 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar7);
  }
  ExceptionList = local_10;
  return uVar3;
}




/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_004032a0(void *this,wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  wchar_t **_FullPath;
  wchar_t *******pppppppwVar4;
  wchar_t *pwVar5;
  void *pvVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  ushort *puVar7;
  void *local_58 [4];
  uint local_48;
  uint local_44;
  wchar_t *******local_40 [4];
  undefined4 local_30;
  uint local_2c;
  wchar_t local_28 [10];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004275c0;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((4 < in_stack_00000014) && (iVar2 = FUN_00404ba0((short *)&param_1), iVar2 != -1)) {
    uVar3 = FUN_00404ba0((short *)&param_1);
    FUN_00404b00(&param_1,(undefined2 *)local_58,uVar3,in_stack_00000014);
    local_8._0_1_ = 1;
    if (local_48 < 0xb) {
      puVar7 = (ushort *)0x0;
      local_28[8] = L'\0';
      local_28[9] = L'\0';
      _FullPath = &param_1;
      if (7 < in_stack_00000018) {
        _FullPath = (wchar_t **)param_1;
      }
      local_28[0] = L'\0';
      local_28[1] = L'\0';
      local_28[2] = L'\0';
      local_28[3] = L'\0';
      local_28[4] = L'\0';
      local_28[5] = L'\0';
      local_28[6] = L'\0';
      local_28[7] = L'\0';
      _wsplitpath_s((wchar_t *)_FullPath,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_28
                    ,10);
      pwVar5 = local_28;
      local_30 = 0;
      local_2c = 7;
      local_40[0] = (wchar_t *******)((uint)local_40[0] & 0xffff0000);
      do {
        wVar1 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar1 != L'\0');
      FUN_00401bb0(local_40,local_28,(int)pwVar5 - (int)(local_28 + 1) >> 1);
      local_8._0_1_ = 2;
      pppppppwVar4 = (wchar_t *******)local_40;
      if (7 < local_2c) {
        pppppppwVar4 = local_40[0];
      }
      iVar2 = _wcsicmp((wchar_t *)pppppppwVar4,L".jpg");
      if (iVar2 != 0) {
        pppppppwVar4 = (wchar_t *******)local_40;
        if (7 < local_2c) {
          pppppppwVar4 = local_40[0];
        }
        iVar2 = _wcsicmp((wchar_t *)pppppppwVar4,L".jpeg");
        if (iVar2 != 0) {
          pppppppwVar4 = (wchar_t *******)local_40;
          if (7 < local_2c) {
            pppppppwVar4 = local_40[0];
          }
          iVar2 = _wcsicmp((wchar_t *)pppppppwVar4,L".gif");
          if (iVar2 != 0) {
            FUN_00401ad0(&stack0xffffff78,local_40);
            local_8._0_1_ = 2;
            FUN_00404640(this,puVar7);
          }
        }
      }
      local_8._0_1_ = 1;
      if (7 < local_2c) {
        pppppppwVar4 = local_40[0];
        if ((0xfff < local_2c * 2 + 2) &&
           (pppppppwVar4 = (wchar_t *******)local_40[0][-1],
           0x1f < (uint)((int)local_40[0] + (-4 - (int)pppppppwVar4)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(pppppppwVar4);
      }
      local_30 = 0;
      local_2c = 7;
      local_40[0] = (wchar_t *******)((uint)local_40[0] & 0xffff0000);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (7 < local_44) {
      pvVar6 = local_58[0];
      if ((0xfff < local_44 * 2 + 2) &&
         (pvVar6 = *(void **)((int)local_58[0] + -4),
         0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar6)))) goto LAB_00403355;
      FUN_00425f95(pvVar6);
    }
    local_44 = 7;
    local_58[0] = (void *)((uint)local_58[0] & 0xffff0000);
    local_48 = 0;
  }
  local_8 = -1;
  if (7 < in_stack_00000018) {
    pwVar5 = param_1;
    if ((0xfff < in_stack_00000018 * 2 + 2) &&
       (pwVar5 = *(wchar_t **)(param_1 + -2), 0x1f < (uint)((int)param_1 + (-4 - (int)pwVar5)))) {
LAB_00403355:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pwVar5);
  }
  in_stack_00000014 = 0;
  param_1 = (wchar_t *)((uint)param_1 & 0xffff0000);
  in_stack_00000018 = 7;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_00403560(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  void *pvVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004276d0;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".TIF",4);
  local_8 = 0;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_00401bb0(&local_44,L".TIFF",5);
  local_8 = 1;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_00,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".EPX",4);
  local_8 = 2;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_01,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".NEF",4);
  local_8 = 3;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_02,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".NRW",4);
  local_8 = 4;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_03,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".ARW",4);
  local_8 = 5;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_04,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".CR2",4);
  local_8 = 6;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_05,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".SR2",4);
  local_8 = 7;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_06,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".RAW",4);
  local_8 = 8;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_07,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".RW2",4);
  local_8 = 9;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_08,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".DNG",4);
  local_8 = 10;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_09,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".RAF",4);
  local_8 = 0xb;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_10,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".ARW",4);
  local_8 = 0xc;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_11,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".CRW",4);
  local_8 = 0xd;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_12,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".DNG",4);
  local_8 = 0xe;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_13,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".DCR",4);
  local_8 = 0xf;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_14,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".KDC",4);
  local_8 = 0x10;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_15,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".ERF",4);
  local_8 = 0x11;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_16,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".3FR",4);
  local_8 = 0x12;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_17,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".MEF",4);
  local_8 = 0x13;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_18,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".PEF",4);
  local_8 = 0x14;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_19,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".SRW",4);
  local_8 = 0x15;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_20,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".ORF",4);
  local_8 = 0x16;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_21,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".MRW",4);
  local_8 = 0x17;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_22,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".MDC",4);
  local_8 = 0x18;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_23,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".PTX",4);
  local_8 = 0x19;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_24,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00401bb0(local_2c,L".X3F",4);
  local_8 = 0x1a;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_25,(ushort *)local_2c,local_48);
  local_8 = 0xffffffff;
  if (7 < local_18) {
    pvVar1 = local_2c[0];
    if (0xfff < local_18 * 2 + 2) {
      pvVar1 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  FUN_00401bb0(&local_44,L".MOS",4);
  local_8 = 0x1b;
  FUN_00405450(&DAT_004300e4,&local_4c,extraout_ECX_26,(ushort *)&local_44,local_48);
  local_8 = 0xffffffff;
  if (7 < local_30) {
    pvVar1 = local_44;
    if (0xfff < local_30 * 2 + 2) {
      pvVar1 = *(void **)((int)local_44 + -4);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  local_34 = 0;
  local_30 = 7;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __thiscall FUN_00404640(void *this,ushort *param_1)

{
  ushort **ppuVar1;
  short sVar2;
  int iVar3;
  ushort ******ppppppuVar4;
  undefined4 *puVar5;
  uint uVar6;
  ushort **ppuVar7;
  ushort *puVar8;
  ushort **ppuVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *local_30;
  ushort *****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00427710;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (3 < in_stack_00000014) {
    ppuVar9 = &param_1;
    if (7 < in_stack_00000018) {
      ppuVar9 = (ushort **)param_1;
    }
    ppuVar1 = (ushort **)((int)ppuVar9 + in_stack_00000014 * 2);
    ppuVar7 = &param_1;
    if (7 < in_stack_00000018) {
      ppuVar7 = (ushort **)param_1;
    }
    uVar12 = 0;
    uVar6 = (uint)((int)ppuVar1 + (1 - (int)ppuVar7)) >> 1;
    if (ppuVar1 < ppuVar7) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      iVar11 = (int)ppuVar9 - (int)ppuVar7;
      do {
        iVar3 = toupper((uint)*(ushort *)ppuVar7);
        uVar12 = uVar12 + 1;
        *(short *)(iVar11 + (int)ppuVar7) = (short)iVar3;
        ppuVar7 = (ushort **)((int)ppuVar7 + 2);
      } while (uVar12 != uVar6);
    }
    ppuVar9 = &param_1;
    if (7 < in_stack_00000018) {
      ppuVar9 = (ushort **)param_1;
    }
    local_1c = 0;
    local_18 = 7;
    local_2c[0] = (ushort *****)((uint)local_2c[0] & 0xffff0000);
    ppuVar7 = ppuVar9;
    do {
      sVar2 = *(short *)ppuVar7;
      ppuVar7 = (ushort **)((int)ppuVar7 + 2);
    } while (sVar2 != 0);
    FUN_00401bb0(local_2c,ppuVar9,(int)ppuVar7 - (int)((int)ppuVar9 + 2) >> 1);
    local_8 = CONCAT31(local_8._1_3_,1);
    puVar5 = *(undefined4 **)((int)this + 8);
    local_30 = puVar5;
    puVar13 = (undefined4 *)puVar5[1];
    if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
      do {
        ppppppuVar4 = local_2c;
        if (7 < local_18) {
          ppppppuVar4 = (ushort ******)local_2c[0];
        }
        puVar5 = puVar13 + 4;
        if (7 < (uint)puVar13[9]) {
          puVar5 = (undefined4 *)puVar13[4];
        }
        uVar6 = puVar13[8];
        uVar12 = uVar6;
        if (local_1c < uVar6) {
          uVar12 = local_1c;
        }
        if (uVar12 != 0) {
          iVar11 = (int)puVar5 - (int)ppppppuVar4;
          do {
            if (*(ushort *)(iVar11 + (int)ppppppuVar4) != *(ushort *)ppppppuVar4) {
              bVar14 = *(ushort *)(iVar11 + (int)ppppppuVar4) < *(ushort *)ppppppuVar4;
              goto LAB_004047a8;
            }
            ppppppuVar4 = (ushort ******)((int)ppppppuVar4 + 2);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        bVar14 = uVar6 < local_1c;
LAB_004047a8:
        if (bVar14) {
          puVar5 = (undefined4 *)puVar13[2];
        }
        else {
          puVar5 = (undefined4 *)*puVar13;
          local_30 = puVar13;
        }
        puVar13 = puVar5;
      } while (*(char *)((int)puVar5 + 0xd) == '\0');
      puVar5 = *(undefined4 **)((int)this + 8);
    }
    if (local_30 != puVar5) {
      psVar10 = (short *)(local_30 + 4);
      if (7 < (uint)local_30[9]) {
        psVar10 = (short *)local_30[4];
      }
      ppppppuVar4 = local_2c;
      if (7 < local_18) {
        ppppppuVar4 = (ushort ******)local_2c[0];
      }
      uVar6 = local_1c;
      if ((uint)local_30[8] < local_1c) {
        uVar6 = local_30[8];
      }
      if (uVar6 != 0) {
        iVar11 = (int)ppppppuVar4 - (int)psVar10;
        do {
          if (*(short *)(iVar11 + (int)psVar10) != *psVar10) break;
          psVar10 = psVar10 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    if (7 < local_18) {
      ppppppuVar4 = (ushort ******)local_2c[0];
      if ((0xfff < local_18 * 2 + 2) &&
         (ppppppuVar4 = (ushort ******)local_2c[0][-1],
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppppuVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(ppppppuVar4);
    }
    local_1c = 0;
    local_18 = 7;
    local_2c[0] = (ushort *****)((uint)local_2c[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    puVar8 = param_1;
    if ((0xfff < in_stack_00000018 * 2 + 2) &&
       (puVar8 = *(ushort **)(param_1 + -2), 0x1f < (uint)((int)param_1 + (-4 - (int)puVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(puVar8);
  }
  in_stack_00000014 = 0;
  param_1 = (ushort *)((uint)param_1 & 0xffff0000);
  in_stack_00000018 = 7;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_00404920(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427748;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = param_1;
  FUN_00404d80(param_1,&local_18,*(int **)*param_1,(int *)*param_1);
  local_8 = 0xffffffff;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404990(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void **ppvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar4 = DAT_004300dc;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427770;
  cVar1 = *(char *)(DAT_004300dc[1] + 0xd);
  ppvVar5 = &local_10;
  piVar3 = (int *)DAT_004300dc[1];
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar5, cVar1 == '\0') {
    FUN_00404d40((int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    FUN_00425f95(piVar3);
    ppvVar5 = (void **)ExceptionList;
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  DAT_004300dc[1] = (int)piVar4;
  *DAT_004300dc = (int)piVar4;
  DAT_004300dc[2] = (int)piVar4;
  _DAT_004300e0 = 0;
  ExceptionList = local_10;
  return;
}




void FUN_00404a20(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427795;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00404990();
  local_8 = 0xffffffff;
  FUN_00425f95(DAT_004300dc);
  ExceptionList = local_10;
  return;
}




int * __thiscall FUN_00404a80(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  
                    /* WARNING: Load size is inaccurate */
  piVar3 = *this;
  pvVar4 = this;
  piVar5 = piVar3;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    pvVar4 = (void *)*param_1;
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[4] < (int)pvVar4) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar5 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  if ((piVar5 != piVar3) && (piVar5[4] <= *param_1)) {
    return piVar5 + 5;
  }
  piVar3 = FUN_004058b0(this,pvVar4,&param_1);
  FUN_00405940(this,&param_1,piVar5,piVar3 + 4,piVar3);
  return param_1 + 5;
}




undefined2 * __thiscall FUN_00404b00(void *this,undefined2 *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined2 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004277c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 7;
  *param_1 = 0;
  if (param_2 <= *(uint *)((int)this + 0x10)) {
    uVar2 = *(uint *)((int)this + 0x10) - param_2;
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      this = *this;
    }
    FUN_00401bb0(param_1,(void *)((int)this + param_2 * 2),param_3);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_00405400();
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined2 *)(*pcVar1)();
  return puVar3;
}




int __fastcall FUN_00404ba0(short *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  
  psVar4 = param_1;
  if (7 < *(uint *)(param_1 + 10)) {
    psVar4 = *(short **)param_1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 8) + -1;
    iVar3 = -1;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    psVar6 = psVar4 + iVar3;
    psVar5 = psVar6 + -0x21536a;
    while( true ) {
      if (*psVar6 == 0x2e) {
        iVar3 = 1;
        psVar2 = &DAT_0042a6d4;
        while (*(short *)((int)psVar5 + (int)psVar2) == *psVar2) {
          psVar2 = psVar2 + 1;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            return (int)psVar6 - (int)psVar4 >> 1;
          }
        }
      }
      if (psVar6 == psVar4) break;
      psVar6 = psVar6 + -1;
      psVar5 = psVar5 + -1;
    }
  }
  return -1;
}




void __fastcall FUN_00404c20(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void FUN_00404c60(int *param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_00404c60((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    if (7 < (uint)param_1[9]) {
      pvVar3 = (void *)param_1[4];
      pvVar4 = pvVar3;
      if ((0xfff < param_1[9] * 2 + 2U) &&
         (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar4);
    }
    param_1[8] = 0;
    param_1[9] = 7;
    *(undefined2 *)(param_1 + 4) = 0;
    FUN_00425f95(param_1);
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar2;
  } while( true );
}




void FUN_00404cf0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00425f95(DAT_004300dc);
  ExceptionList = local_10;
  return;
}




void FUN_00404d40(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_00404d40((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00425f95(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}




undefined4 * __thiscall FUN_00404d80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  
                    /* WARNING: Load size is inaccurate */
  piVar6 = *this;
  if ((param_2 == (int *)*piVar6) && (param_3 == piVar6)) {
    FUN_00404c60((int *)piVar6[1]);
                    /* WARNING: Load size is inaccurate */
    *(int **)(*this + 4) = piVar6;
                    /* WARNING: Load size is inaccurate */
    **this = piVar6;
                    /* WARNING: Load size is inaccurate */
    *(int **)(*this + 8) = piVar6;
    *(undefined4 *)((int)this + 4) = 0;
                    /* WARNING: Load size is inaccurate */
    *param_1 = **this;
    return param_1;
  }
  piVar6 = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)piVar6[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0xd);
        piVar5 = (int *)piVar6[1];
        piVar2 = piVar6;
        while ((param_2 = piVar5, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar5 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
      if (*(char *)(piVar6[2] + 0xd) == '\0') {
        piVar2 = *(int **)piVar6[2];
        cVar1 = *(char *)((int)piVar2 + 0xd);
        while (cVar1 == '\0') {
          piVar2 = (int *)*piVar2;
          cVar1 = *(char *)((int)piVar2 + 0xd);
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0xd);
        piVar5 = (int *)piVar6[1];
        piVar2 = piVar6;
        while ((piVar4 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0xd);
          piVar5 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
      piVar6 = FUN_00404ee0(this,piVar6);
      if (7 < (uint)piVar6[9]) {
        pvVar3 = (void *)piVar6[4];
        pvVar7 = pvVar3;
        if ((0xfff < piVar6[9] * 2 + 2U) &&
           (pvVar7 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar7))))
        {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(pvVar7);
      }
      piVar6[8] = 0;
      piVar6[9] = 7;
      *(undefined2 *)(piVar6 + 4) = 0;
      FUN_00425f95(piVar6);
      piVar6 = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return param_1;
}




int * __thiscall FUN_00404ee0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = (int *)param_1[2];
  piVar7 = param_1 + 2;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    cVar5 = *(char *)(*piVar4 + 0xd);
    piVar3 = (int *)*piVar4;
    while (cVar5 == '\0') {
      cVar5 = *(char *)(*piVar3 + 0xd);
      piVar4 = piVar3;
      piVar3 = (int *)*piVar3;
    }
  }
  else {
    cVar5 = *(char *)(param_1[1] + 0xd);
    piVar6 = (int *)param_1[1];
    piVar3 = param_1;
    while ((piVar4 = piVar6, cVar5 == '\0' && (piVar3 == (int *)piVar4[2]))) {
      cVar5 = *(char *)(piVar4[1] + 0xd);
      piVar6 = (int *)piVar4[1];
      piVar3 = piVar4;
    }
  }
  piVar3 = (int *)*param_1;
  piVar6 = (int *)*piVar7;
  if (((*(char *)((int)piVar3 + 0xd) == '\0') && (piVar6 = piVar3, *(char *)(*piVar7 + 0xd) == '\0')
      ) && (piVar6 = (int *)piVar4[2], piVar4 != param_1)) {
    piVar3[1] = (int)piVar4;
    *piVar4 = *param_1;
    piVar3 = piVar4;
    if (piVar4 != (int *)*piVar7) {
      piVar3 = (int *)piVar4[1];
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        piVar6[1] = (int)piVar3;
      }
      *piVar3 = (int)piVar6;
      piVar4[2] = *piVar7;
      *(int **)(*piVar7 + 4) = piVar4;
    }
                    /* WARNING: Load size is inaccurate */
    if (*(int **)(*this + 4) == param_1) {
      *(int **)(*this + 4) = piVar4;
    }
    else {
      piVar7 = (int *)param_1[1];
      if ((int *)*piVar7 == param_1) {
        *piVar7 = (int)piVar4;
      }
      else {
        piVar7[2] = (int)piVar4;
      }
    }
    piVar4[1] = param_1[1];
    cVar5 = (char)piVar4[3];
    *(char *)(piVar4 + 3) = (char)param_1[3];
    *(char *)(param_1 + 3) = cVar5;
  }
  else {
    piVar3 = (int *)param_1[1];
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar6[1] = (int)piVar3;
    }
                    /* WARNING: Load size is inaccurate */
    if (*(int **)(*this + 4) == param_1) {
      *(int **)(*this + 4) = piVar6;
    }
    else if ((int *)*piVar3 == param_1) {
      *piVar3 = (int)piVar6;
    }
    else {
      piVar3[2] = (int)piVar6;
    }
                    /* WARNING: Load size is inaccurate */
    if ((int *)**this == param_1) {
      piVar7 = piVar3;
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        cVar5 = *(char *)(*piVar6 + 0xd);
        piVar4 = (int *)*piVar6;
        piVar7 = piVar6;
        while (piVar2 = piVar4, cVar5 == '\0') {
          piVar4 = (int *)*piVar2;
          cVar5 = *(char *)((int)piVar4 + 0xd);
          piVar7 = piVar2;
        }
      }
      **this = (int)piVar7;
    }
                    /* WARNING: Load size is inaccurate */
    iVar1 = *this;
    if (*(int **)(iVar1 + 8) == param_1) {
      if (*(char *)((int)piVar6 + 0xd) != '\0') {
        *(int **)(iVar1 + 8) = piVar3;
        cVar5 = (char)param_1[3];
        goto LAB_0040505e;
      }
      cVar5 = *(char *)(piVar6[2] + 0xd);
      piVar7 = (int *)piVar6[2];
      piVar4 = piVar6;
      while (piVar2 = piVar7, cVar5 == '\0') {
        piVar7 = (int *)piVar2[2];
        cVar5 = *(char *)((int)piVar7 + 0xd);
        piVar4 = piVar2;
      }
      *(int **)(iVar1 + 8) = piVar4;
    }
    cVar5 = (char)param_1[3];
  }
LAB_0040505e:
  if (cVar5 == '\x01') {
                    /* WARNING: Load size is inaccurate */
    if (piVar6 != *(int **)(*this + 4)) {
      while (piVar7 = piVar3, (char)piVar6[3] == '\x01') {
        piVar4 = (int *)*piVar7;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar7[2];
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            piVar4 = (int *)piVar7[2];
            *(undefined1 *)(piVar7 + 3) = 0;
            piVar7[2] = *piVar4;
            if (*(char *)(*piVar4 + 0xd) == '\0') {
              *(int **)(*piVar4 + 4) = piVar7;
            }
            piVar4[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
            if (piVar7 == *(int **)(*this + 4)) {
              *(int **)(*this + 4) = piVar4;
            }
            else {
              piVar3 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar3) {
                *piVar3 = (int)piVar4;
              }
              else {
                piVar3[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar7;
            piVar7[1] = (int)piVar4;
            piVar4 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(*piVar4 + 0xc) != '\x01') || (*(char *)(piVar4[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar4[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar4 + 0xc) = 1;
                iVar1 = *piVar4;
                *(undefined1 *)(piVar4 + 3) = 0;
                *piVar4 = *(int *)(iVar1 + 8);
                if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
                  *(int **)(*(int *)(iVar1 + 8) + 4) = piVar4;
                }
                *(int *)(iVar1 + 4) = piVar4[1];
                    /* WARNING: Load size is inaccurate */
                if (piVar4 == *(int **)(*this + 4)) {
                  *(int *)(*this + 4) = iVar1;
                }
                else {
                  piVar3 = (int *)piVar4[1];
                  if (piVar4 == (int *)piVar3[2]) {
                    piVar3[2] = iVar1;
                  }
                  else {
                    *piVar3 = iVar1;
                  }
                }
                *(int **)(iVar1 + 8) = piVar4;
                piVar4[1] = iVar1;
                piVar4 = (int *)piVar7[2];
              }
              *(char *)(piVar4 + 3) = (char)piVar7[3];
              *(undefined1 *)(piVar7 + 3) = 1;
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              piVar4 = (int *)piVar7[2];
              piVar7[2] = *piVar4;
              if (*(char *)(*piVar4 + 0xd) == '\0') {
                *(int **)(*piVar4 + 4) = piVar7;
              }
              piVar4[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
              if (piVar7 == *(int **)(*this + 4)) {
                *(int **)(*this + 4) = piVar4;
                *piVar4 = (int)piVar7;
                piVar7[1] = (int)piVar4;
              }
              else {
                piVar3 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar3) {
                  *piVar3 = (int)piVar4;
                  *piVar4 = (int)piVar7;
                  piVar7[1] = (int)piVar4;
                }
                else {
                  piVar3[2] = (int)piVar4;
                  *piVar4 = (int)piVar7;
                  piVar7[1] = (int)piVar4;
                }
              }
              break;
            }
LAB_004051a0:
            *(undefined1 *)(piVar4 + 3) = 0;
          }
        }
        else {
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            iVar1 = *piVar7;
            *(undefined1 *)(piVar7 + 3) = 0;
            *piVar7 = *(int *)(iVar1 + 8);
            if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar7;
            }
            *(int *)(iVar1 + 4) = piVar7[1];
                    /* WARNING: Load size is inaccurate */
            if (piVar7 == *(int **)(*this + 4)) {
              *(int *)(*this + 4) = iVar1;
            }
            else {
              piVar4 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar4[2]) {
                piVar4[2] = iVar1;
              }
              else {
                *piVar4 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar7;
            piVar7[1] = iVar1;
            piVar4 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(piVar4[2] + 0xc) == '\x01') && (*(char *)(*piVar4 + 0xc) == '\x01'))
            goto LAB_004051a0;
            if (*(char *)(*piVar4 + 0xc) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              piVar3 = (int *)piVar4[2];
              *(undefined1 *)(piVar4 + 3) = 0;
              piVar4[2] = *piVar3;
              if (*(char *)(*piVar3 + 0xd) == '\0') {
                *(int **)(*piVar3 + 4) = piVar4;
              }
              piVar3[1] = piVar4[1];
                    /* WARNING: Load size is inaccurate */
              if (piVar4 == *(int **)(*this + 4)) {
                *(int **)(*this + 4) = piVar3;
              }
              else {
                piVar2 = (int *)piVar4[1];
                if (piVar4 == (int *)*piVar2) {
                  *piVar2 = (int)piVar3;
                }
                else {
                  piVar2[2] = (int)piVar3;
                }
              }
              *piVar3 = (int)piVar4;
              piVar4[1] = (int)piVar3;
              piVar4 = (int *)*piVar7;
            }
            *(char *)(piVar4 + 3) = (char)piVar7[3];
            *(undefined1 *)(piVar7 + 3) = 1;
            *(undefined1 *)(*piVar4 + 0xc) = 1;
            iVar1 = *piVar7;
            *piVar7 = *(int *)(iVar1 + 8);
            if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar7;
            }
            *(int *)(iVar1 + 4) = piVar7[1];
                    /* WARNING: Load size is inaccurate */
            if (piVar7 == *(int **)(*this + 4)) {
              *(int *)(*this + 4) = iVar1;
              *(int **)(iVar1 + 8) = piVar7;
              piVar7[1] = iVar1;
            }
            else {
              piVar4 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar4[2]) {
                piVar4[2] = iVar1;
                *(int **)(iVar1 + 8) = piVar7;
                piVar7[1] = iVar1;
              }
              else {
                *piVar4 = iVar1;
                *(int **)(iVar1 + 8) = piVar7;
                piVar7[1] = iVar1;
              }
            }
            break;
          }
        }
                    /* WARNING: Load size is inaccurate */
        piVar3 = (int *)piVar7[1];
        piVar6 = piVar7;
        if (piVar7 == *(int **)(*this + 4)) break;
      }
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return param_1;
}




void FUN_00405300(void)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004277f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x28);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  ExceptionList = local_10;
  return;
}




void Catch_00405366(void)

{
  int unaff_EBP;
  
  FUN_00405410(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00405380(void)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427810;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  ExceptionList = local_10;
  return;
}




void Catch_004053e6(void)

{
  int unaff_EBP;
  
  FUN_00405430(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00405400(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_00405410(void *param_1)

{
  FUN_00425f95(param_1);
  return;
}




void FUN_00405430(void *param_1)

{
  FUN_00425f95(param_1);
  return;
}




undefined4 * __thiscall
FUN_00405450(void *this,undefined4 *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427830;
  local_10 = ExceptionList;
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  uVar9 = 1;
  piVar4 = (int *)(*this)[1];
  local_1c = *this;
  while (cVar6 = (char)uVar9, *(char *)((int)piVar4 + 0xd) == '\0') {
    puVar5 = (ushort *)(piVar4 + 4);
    if (7 < (uint)piVar4[9]) {
      puVar5 = (ushort *)piVar4[4];
    }
    puVar1 = param_3;
    if (7 < *(uint *)(param_3 + 10)) {
      puVar1 = *(ushort **)param_3;
    }
    uVar9 = piVar4[8];
    uVar8 = *(uint *)(param_3 + 8);
    uVar7 = uVar8;
    if (uVar9 < uVar8) {
      uVar7 = uVar9;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (*puVar1 != *puVar5) {
        uVar8 = (-(uint)(*puVar1 < *puVar5) & 0xfffffffe) + 1;
        goto LAB_0040551c;
      }
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    if (uVar8 < uVar9) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)(uVar9 < uVar8);
    }
LAB_0040551c:
    uVar9 = uVar8 >> 0x1f;
    local_1c = piVar4;
    if ((int)uVar8 < 0) {
      piVar4 = (int *)*piVar4;
    }
    else {
      piVar4 = (int *)piVar4[2];
    }
  }
  piVar4 = local_1c;
  if (cVar6 != '\0') {
                    /* WARNING: Load size is inaccurate */
    if (local_1c == (int *)**this) {
      cVar6 = '\x01';
      goto LAB_00405552;
    }
    if (*(char *)((int)local_1c + 0xd) == '\0') {
      piVar3 = local_1c;
      piVar4 = (int *)*local_1c;
      if (*(char *)(*local_1c + 0xd) == '\0') {
        do {
          piVar3 = piVar4;
          piVar4 = (int *)piVar3[2];
        } while (*(char *)(piVar3[2] + 0xd) == '\0');
      }
      else {
        do {
          piVar4 = piVar3;
          piVar3 = (int *)piVar4[1];
          if (*(char *)((int)piVar3 + 0xd) != '\0') break;
        } while (piVar4 == (int *)*piVar3);
        if (*(char *)((int)piVar4 + 0xd) != '\0') goto LAB_004055bc;
      }
    }
    else {
      piVar3 = (int *)local_1c[2];
    }
    piVar4 = piVar3;
  }
LAB_004055bc:
  puVar5 = param_3;
  if (7 < *(uint *)(param_3 + 10)) {
    puVar5 = *(ushort **)param_3;
  }
  puVar1 = (ushort *)(piVar4 + 4);
  if (7 < (uint)piVar4[9]) {
    puVar1 = (ushort *)piVar4[4];
  }
  uVar9 = *(uint *)(param_3 + 8);
  uVar8 = piVar4[8];
  uVar7 = uVar8;
  if (uVar9 < uVar8) {
    uVar7 = uVar9;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    if (*puVar1 != *puVar5) {
      bVar10 = *puVar1 < *puVar5;
      goto LAB_00405632;
    }
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar10 = uVar8 < uVar9;
LAB_00405632:
  if (!bVar10) {
    *param_1 = piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_00405552:
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00405680(this,&param_3,cVar6,local_1c,(undefined4 *)param_3);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}




void Catch_00405668(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void __thiscall
FUN_00405680(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  void *extraout_ECX;
  void *this_00;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  this_00 = this;
  if (0x6666664 < *(uint *)((int)this + 4)) {
    std::_Xlength_error("map/set<T> too long");
    this_00 = extraout_ECX;
  }
  piVar4 = FUN_00405ba0(this_00,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar4[1] = (int)param_3;
                    /* WARNING: Load size is inaccurate */
  if (param_3 == *this) {
    (*this)[1] = piVar4;
                    /* WARNING: Load size is inaccurate */
    **this = piVar4;
                    /* WARNING: Load size is inaccurate */
    iVar5 = *this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar4;
                    /* WARNING: Load size is inaccurate */
      if (param_3 == (undefined4 *)**this) {
        **this = (int)piVar4;
      }
      goto LAB_004056e5;
    }
    param_3[2] = piVar4;
                    /* WARNING: Load size is inaccurate */
    iVar5 = *this;
    if (param_3 != *(undefined4 **)(iVar5 + 8)) goto LAB_004056e5;
  }
  *(int **)(iVar5 + 8) = piVar4;
LAB_004056e5:
  cVar1 = *(char *)(piVar4[1] + 0xc);
  piVar8 = piVar4;
  do {
    if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
      *(undefined1 *)(*(int *)(*this + 4) + 0xc) = 1;
      *param_1 = piVar4;
      return;
    }
    piVar9 = (int *)piVar8[1];
    piVar7 = piVar8 + 1;
    piVar10 = piVar9 + 1;
    iVar5 = *(int *)piVar9[1];
    if (piVar9 == (int *)iVar5) {
      iVar5 = ((int *)piVar9[1])[2];
      if (*(char *)(iVar5 + 0xc) != '\0') {
        piVar2 = (int *)piVar9[2];
        if (piVar8 == piVar2) {
          piVar9[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar9;
          }
          piVar2[1] = *piVar10;
                    /* WARNING: Load size is inaccurate */
          if (piVar9 == (int *)*(int *)(*this + 4)) {
            *(int **)(*this + 4) = piVar2;
            *piVar2 = (int)piVar9;
            *piVar10 = (int)piVar2;
            piVar8 = piVar9;
            piVar9 = piVar2;
            piVar7 = piVar10;
          }
          else {
            piVar8 = (int *)*piVar10;
            if (piVar9 == (int *)*piVar8) {
              *piVar8 = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
            else {
              piVar8[2] = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
          }
        }
        *(undefined1 *)(piVar9 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*piVar7 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
        if (piVar7 == *(int **)(*this + 4)) {
          *(int **)(*this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar9 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar9[2]) {
            piVar9[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar9 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_00405877;
      }
LAB_004057cb:
      *(undefined1 *)(piVar9 + 3) = 1;
      *(undefined1 *)(iVar5 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar8 = *(int **)(*piVar7 + 4);
    }
    else {
      if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_004057cb;
      piVar2 = (int *)*piVar9;
      piVar6 = piVar9;
      if (piVar8 == piVar2) {
        *piVar9 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar9;
        }
        piVar2[1] = *piVar10;
                    /* WARNING: Load size is inaccurate */
        if (piVar9 == (int *)*(int *)(*this + 4)) {
          *(int **)(*this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar10;
          if (piVar9 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar9;
        *piVar10 = (int)piVar2;
        piVar6 = piVar2;
        piVar8 = piVar9;
        piVar7 = piVar10;
      }
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar7 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
      if (piVar7 == *(int **)(*this + 4)) {
        *(int **)(*this + 4) = piVar10;
      }
      else {
        piVar9 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar9) {
          *piVar9 = (int)piVar10;
        }
        else {
          piVar9[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_00405877:
      piVar7[1] = (int)piVar10;
    }
    cVar1 = *(char *)(piVar8[1] + 0xc);
  } while( true );
}




undefined4 * __thiscall FUN_004058b0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427850;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_00405b20((undefined4 *)this);
  *(undefined2 *)(puVar1 + 3) = 0;
  puVar1[4] = *(undefined4 *)*param_2;
  puVar1[5] = 0;
  ExceptionList = local_10;
  return puVar1;
}




void Catch_00405923(void)

{
  int unaff_EBP;
  
  FUN_00405b00(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 * __thiscall
FUN_00405940(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  char cVar9;
  uint uStack_2c;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427870;
  local_10 = ExceptionList;
  uStack_2c = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Load size is inaccurate */
    piVar6 = *this;
    param_3 = (int *)this;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    piVar1 = *this;
    if (param_2 != (int *)*piVar1) {
      if (param_2 != piVar1) {
        iVar2 = *param_3;
        iVar3 = param_2[4];
        iVar4 = iVar3 - iVar2;
        if (iVar2 < iVar3) {
          if (*(char *)((int)param_2 + 0xd) == '\0') {
            piVar8 = param_2;
            piVar5 = (int *)*param_2;
            if (*(char *)(*param_2 + 0xd) == '\0') {
              do {
                piVar6 = piVar5;
                piVar5 = (int *)piVar6[2];
              } while (*(char *)(piVar6[2] + 0xd) == '\0');
            }
            else {
              do {
                piVar6 = piVar8;
                piVar8 = (int *)piVar6[1];
                if (*(char *)((int)piVar8 + 0xd) != '\0') break;
              } while (piVar6 == (int *)*piVar8);
              if (*(char *)((int)piVar6 + 0xd) == '\0') {
                piVar6 = piVar8;
              }
            }
          }
          else {
            piVar6 = (int *)param_2[2];
          }
          if (piVar6[4] < iVar2) {
            piVar8 = (int *)piVar6[2];
            if (*(char *)((int)piVar8 + 0xd) == '\0') {
              cVar9 = '\x01';
              piVar6 = param_2;
            }
            else {
              cVar9 = '\0';
            }
            goto LAB_00405987;
          }
          iVar3 = param_2[4];
          iVar4 = iVar3 - iVar2;
        }
        if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
          cVar9 = *(char *)(param_2[2] + 0xd);
          piVar8 = (int *)param_2[2];
          piVar6 = param_2;
          if (cVar9 == '\0') {
            do {
              piVar6 = piVar8;
              piVar8 = (int *)*piVar6;
            } while (*(char *)((int)piVar8 + 0xd) == '\0');
          }
          else {
            do {
              piVar8 = piVar6;
              piVar6 = (int *)piVar8[1];
              if (*(char *)((int)piVar6 + 0xd) != '\0') break;
            } while (piVar8 == (int *)piVar6[2]);
          }
          if ((piVar6 == piVar1) || (piVar8 = (int *)*param_3, (int)piVar8 < piVar6[4])) {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
            }
            else {
              cVar9 = '\0';
              piVar6 = param_2;
            }
            goto LAB_00405987;
          }
        }
LAB_00405aae:
        local_8 = 0xffffffff;
        puVar7 = (undefined4 *)FUN_00405e80(this,local_1c,'\0',param_3,param_4);
        *param_1 = *puVar7;
        ExceptionList = local_10;
        return param_1;
      }
      piVar6 = (int *)piVar1[2];
      if (*param_3 <= piVar6[4]) goto LAB_00405aae;
      cVar9 = '\0';
      piVar8 = piVar6;
      goto LAB_00405987;
    }
    piVar6 = param_2;
    if (param_2[4] <= *param_3) goto LAB_00405aae;
  }
  cVar9 = '\x01';
  piVar8 = param_3;
LAB_00405987:
  local_14 = (undefined1 *)&uStack_2c;
  FUN_00405c50(this,param_1,cVar9,piVar6,piVar8,param_4);
  ExceptionList = local_10;
  return param_1;
}




void Catch_00405ae1(void)

{
  int unaff_EBP;
  
  FUN_00405b00(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00405b00(void *param_1)

{
  FUN_00425f95(param_1);
  return;
}




undefined4 * __fastcall FUN_00405b20(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)operator_new(0x18);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  ExceptionList = local_10;
  return puVar1;
}




void Catch_00405b8c(void)

{
  int unaff_EBP;
  
  FUN_00405430(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 * __thiscall FUN_00405ba0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004278b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = FUN_00406000((undefined4 *)this);
  *(undefined2 *)(puVar4 + 3) = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  puVar4[4] = *param_1;
  puVar4[5] = uVar1;
  puVar4[6] = uVar2;
  puVar4[7] = uVar3;
  *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_1 + 4);
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  ExceptionList = local_10;
  return puVar4;
}




void Catch_00405c34(void)

{
  int unaff_EBP;
  
  FUN_00405fe0(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void __thiscall
FUN_00405c50(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *extraout_ECX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  uVar4 = *(uint *)((int)this + 4);
  piVar7 = (int *)this;
  if (0xaaaaaa8 < uVar4) {
    uVar4 = FUN_00405b00(param_5);
    std::_Xlength_error("map/set<T> too long");
    piVar7 = extraout_ECX;
  }
  piVar7[1] = uVar4 + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*piVar7) {
    ((undefined4 *)*piVar7)[1] = param_5;
    *(int **)*piVar7 = param_5;
    *(int **)(*piVar7 + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*piVar7 + 8)) {
      *(int **)(*piVar7 + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*piVar7) {
      *(int **)*piVar7 = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar8 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar9 = (int *)piVar8[1];
    piVar7 = piVar8 + 1;
    piVar10 = piVar9 + 1;
    iVar5 = *(int *)piVar9[1];
    if (piVar9 == (int *)iVar5) {
      iVar5 = ((int *)piVar9[1])[2];
      if (*(char *)(iVar5 + 0xc) != '\0') {
        piVar2 = (int *)piVar9[2];
        if (piVar8 == piVar2) {
          piVar9[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar9;
          }
          piVar2[1] = *piVar10;
                    /* WARNING: Load size is inaccurate */
          if (piVar9 == (int *)*(int *)(*this + 4)) {
            *(int **)(*this + 4) = piVar2;
            *piVar2 = (int)piVar9;
            *piVar10 = (int)piVar2;
            piVar8 = piVar9;
            piVar9 = piVar2;
            piVar7 = piVar10;
          }
          else {
            piVar7 = (int *)*piVar10;
            if (piVar9 == (int *)*piVar7) {
              *piVar7 = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
            else {
              piVar7[2] = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
          }
        }
        *(undefined1 *)(piVar9 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*piVar7 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
        if (piVar7 == *(int **)(*this + 4)) {
          *(int **)(*this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar9 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar9[2]) {
            piVar9[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar9 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_00405e45;
      }
LAB_00405d9c:
      *(undefined1 *)(piVar9 + 3) = 1;
      *(undefined1 *)(iVar5 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar8 = *(int **)(*piVar7 + 4);
    }
    else {
      if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_00405d9c;
      piVar2 = (int *)*piVar9;
      piVar6 = piVar9;
      if (piVar8 == piVar2) {
        *piVar9 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar9;
        }
        piVar2[1] = *piVar10;
                    /* WARNING: Load size is inaccurate */
        if (piVar9 == (int *)*(int *)(*this + 4)) {
          *(int **)(*this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar10;
          if (piVar9 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar9;
        *piVar10 = (int)piVar2;
        piVar6 = piVar2;
        piVar8 = piVar9;
        piVar7 = piVar10;
      }
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar7 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
      if (piVar7 == *(int **)(*this + 4)) {
        *(int **)(*this + 4) = piVar10;
      }
      else {
        piVar9 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar9) {
          *piVar9 = (int)piVar10;
        }
        else {
          piVar9[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_00405e45:
      piVar7[1] = (int)piVar10;
    }
    cVar1 = *(char *)(piVar8[1] + 0xc);
    piVar7 = (int *)this;
  } while( true );
}




void __thiscall FUN_00405e80(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004278d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  local_1c = true;
  piVar4 = (int *)(*this)[1];
  piVar2 = *this;
  while (*(char *)((int)piVar4 + 0xd) == '\0') {
    if (param_2 == '\0') {
      local_1c = *param_3 < piVar4[4];
    }
    else {
      local_1c = *param_3 <= piVar4[4];
    }
    piVar2 = piVar4;
    if (local_1c == false) {
      piVar4 = (int *)piVar4[2];
    }
    else {
      piVar4 = (int *)*piVar4;
    }
  }
  piVar4 = piVar2;
  if (local_1c != false) {
                    /* WARNING: Load size is inaccurate */
    if (piVar2 == (int *)**this) {
      local_1c = true;
      goto LAB_00405f17;
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      piVar4 = (int *)*piVar2;
      piVar3 = piVar2;
      if (*(char *)(*piVar2 + 0xd) == '\0') {
        do {
          piVar3 = piVar4;
          piVar4 = (int *)piVar3[2];
        } while (*(char *)(piVar3[2] + 0xd) == '\0');
      }
      else {
        do {
          piVar4 = piVar3;
          piVar3 = (int *)piVar4[1];
          if (*(char *)((int)piVar3 + 0xd) != '\0') break;
        } while (piVar4 == (int *)*piVar3);
        if (*(char *)((int)piVar4 + 0xd) != '\0') goto LAB_00405f7e;
      }
    }
    else {
      piVar3 = (int *)piVar2[2];
    }
    piVar4 = piVar3;
  }
LAB_00405f7e:
  if (*param_3 <= piVar4[4]) {
    FUN_00425f95(param_4);
    *param_1 = piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_00405f17:
  puVar1 = (undefined4 *)FUN_00405c50(this,(undefined4 *)&param_2,local_1c,piVar2,this,param_4);
  *param_1 = *puVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}




void Catch_00405fc0(void)

{
  int unaff_EBP;
  
  FUN_00405b00(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00405fe0(void *param_1)

{
  FUN_00425f95(param_1);
  return;
}




undefined4 * __fastcall FUN_00406000(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004278f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)operator_new(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  ExceptionList = local_10;
  return puVar1;
}




void Catch_0040606c(void)

{
  int unaff_EBP;
  
  FUN_00405410(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




short * __fastcall FUN_00406080(short *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != (short *)0x0) && (0 < param_2)) && (1 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -1; iVar1 = iVar1 + 1) {
      if (((char)*param_1 == (char)DAT_0042f358) && (*param_1 == DAT_0042f358)) {
        return param_1;
      }
      param_1 = (short *)((int)param_1 + 1);
    }
  }
  return (short *)0x0;
}




undefined4 Catch_004060ef(void)

{
  return 0x4060f5;
}




int * __fastcall FUN_00406110(int *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int *local_18;
  
  if ((param_1 != (int *)0x0) && (0 < param_2)) {
    local_18 = param_1;
    for (iVar7 = 0; iVar7 < param_2; iVar7 = iVar7 + 1) {
      piVar5 = *(int **)*param_3;
LAB_00406170:
      if (piVar5 != (int *)*param_3) {
        piVar6 = (int *)piVar5[4];
        uVar1 = piVar5[5];
        piVar4 = local_18;
        uVar3 = uVar1;
        if ((int)uVar1 <= param_2) {
          while (uVar2 = uVar3 - 4, 3 < uVar3) {
            if (*piVar4 != *piVar6) goto LAB_004061a6;
            piVar6 = piVar6 + 1;
            piVar4 = piVar4 + 1;
            uVar3 = uVar2;
          }
          if (uVar2 == 0xfffffffc) {
LAB_0040620b:
            *param_4 = uVar1;
            return local_18;
          }
LAB_004061a6:
          if (((char)*piVar4 == (char)*piVar6) &&
             ((uVar2 == 0xfffffffd ||
              ((*(char *)((int)piVar4 + 1) == *(char *)((int)piVar6 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((*(char *)((int)piVar4 + 2) == *(char *)((int)piVar6 + 2) &&
                 ((uVar2 == 0xffffffff || (*(char *)((int)piVar4 + 3) == *(char *)((int)piVar6 + 3))
                  ))))))))))) goto LAB_0040620b;
        }
        piVar6 = piVar5;
        piVar4 = (int *)piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          do {
            piVar5 = piVar4;
            piVar4 = (int *)*piVar5;
          } while (*(char *)(*piVar5 + 0xd) == '\0');
        }
        else {
          do {
            piVar5 = (int *)piVar6[1];
            if (*(char *)((int)piVar5 + 0xd) != '\0') break;
            bVar8 = piVar6 == (int *)piVar5[2];
            piVar6 = piVar5;
          } while (bVar8);
        }
        goto LAB_00406170;
      }
      local_18 = (int *)((int)local_18 + 1);
    }
  }
  return (int *)0x0;
}




undefined4 Catch_00406235(void)

{
  return 0x40623b;
}




void __cdecl FUN_00406260(int *param_1,int param_2)

{
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    longjmp((int *)(*param_1 + 0x84),1);
  }
  return;
}




void __fastcall FUN_00406280(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_29c;
  code *local_298;
  undefined1 local_218 [68];
  int local_1d4;
  int local_1d0;
  int local_178;
  uint local_174;
  int local_16c;
  uint local_15c;
  uint local_8;
  
  local_8 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = setjmp3(local_218,0);
  if (iVar1 != 0) {
    thunk_FUN_0040c5c0((int)&local_1d4);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_1d4 = FUN_0040c0b0(&local_29c);
  local_298 = FUN_00406260;
  FUN_0040bc20(&local_1d4,0x5a,0x1c8);
  FUN_0040c230(&local_1d4,param_1,param_2);
  FUN_0040be30(&local_1d4,'\x01');
  FUN_0040c380(&local_1d4);
  uVar2 = (**(code **)(local_1d0 + 8))(&local_1d4,1,local_16c * local_178,1);
  if (local_15c < local_174) {
    do {
      FUN_0040c2e0(&local_1d4,uVar2,1);
    } while (local_15c < local_174);
  }
  FUN_0040bd60(&local_1d4);
  thunk_FUN_0040c5c0((int)&local_1d4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 * __thiscall FUN_004063e0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427963;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CJPGAnalyzer::vftable;
  local_8 = 1;
  if (*(void **)((int)this + 8) != (void *)0x0) {
    free(*(void **)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    free(*(void **)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  local_8 = local_8 & 0xffffff00;
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  local_8 = 0xffffffff;
  *(undefined ***)this = IImgAnalyzer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00425f95(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}




char __thiscall FUN_00406490(void *this,void *param_1)

{
  char cVar1;
  void *pvVar2;
  uint in_stack_00000018;
  wchar_t *in_stack_ffffffb4;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427360;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00401ad0(&stack0xffffffb4,&param_1);
  local_8 = local_8 & 0xffffff00;
  cVar1 = FUN_00406610(this,in_stack_ffffffb4);
  if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
    cVar1 = (**(code **)(*this + 8))();
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar2);
  }
  ExceptionList = local_10;
  return cVar1;
}




bool __thiscall FUN_00406580(void *this,int *param_1,uint param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if ((-1 < param_3) && ((0 < param_3 || (9 < param_2)))) {
    iVar1 = *param_1;
    if ((iVar1 == DAT_0042f394) || ((iVar1 == DAT_0042f38c || (iVar1 == DAT_0042f384)))) {
      cVar2 = FUN_00406280((int)param_1,param_2);
      bVar3 = cVar2 == '\0';
      if ((cVar2 != '\0') && (*(char *)((int)this + 4) != '\0')) {
        cVar2 = FUN_004076a0(this,(int)param_1,param_2,param_3);
        if (cVar2 != '\0') {
          bVar3 = true;
        }
      }
      return bVar3;
    }
  }
  return false;
}




undefined1 __thiscall FUN_00406610(void *this,wchar_t *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  wchar_t **_Filename;
  errno_t eVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined1 uVar5;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_00000020;
  size_t *in_stack_00000024;
  FILE *local_1c;
  void *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_004273c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  local_11 = 0;
  local_18 = this;
  EnterCriticalSection(lpCriticalSection);
  local_8._0_1_ = 1;
  iVar1 = *(int *)((int)local_18 + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_00426250(0x3201000);
    *(int *)((int)local_18 + 8) = iVar1;
  }
  if ((in_stack_00000020 < 0) || ((in_stack_00000020 < 1 && (in_stack_0000001c < 0x3201001)))) {
    *(undefined1 *)(in_stack_0000001c + iVar1) = 0;
    _Filename = &param_1;
    if (7 < in_stack_00000018) {
      _Filename = (wchar_t **)param_1;
    }
    local_1c = (FILE *)0x0;
    eVar2 = _wfopen_s(&local_1c,(wchar_t *)_Filename,L"rb");
    if (eVar2 == 0) {
      sVar3 = fread_s(*(void **)((int)local_18 + 8),0x3201000,1,in_stack_0000001c,local_1c);
      *in_stack_00000024 = sVar3;
      in_stack_00000024[1] = 0;
      fclose(local_1c);
      if (((int)in_stack_00000024[1] < 1) &&
         (((int)in_stack_00000024[1] < 0 || (*in_stack_00000024 == 0)))) {
        local_8 = (uint)local_8._1_3_ << 8;
        LeaveCriticalSection(lpCriticalSection);
        uVar5 = local_11;
      }
      else {
        uVar5 = 1;
        local_8 = (uint)local_8._1_3_ << 8;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    else {
      local_8 = (uint)local_8._1_3_ << 8;
      LeaveCriticalSection(lpCriticalSection);
      uVar5 = local_11;
    }
  }
  else {
    local_8 = (uint)local_8._1_3_ << 8;
    LeaveCriticalSection(lpCriticalSection);
    uVar5 = local_11;
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pwVar4 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pwVar4 = *(wchar_t **)(param_1 + -2);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pwVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pwVar4);
  }
  ExceptionList = local_10;
  return uVar5;
}




char __thiscall FUN_004067b0(void *this,void *param_1)

{
  char cVar1;
  void *pvVar2;
  uint in_stack_00000018;
  int in_stack_00000024;
  uint *in_stack_00000028;
  wchar_t *in_stack_ffffffa8;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cVar1 = '\0';
  if (((in_stack_00000024 != 0) && (-1 < (int)in_stack_00000028[1])) &&
     ((0 < (int)in_stack_00000028[1] || (9 < *in_stack_00000028)))) {
    FUN_00401ad0(&stack0xffffffa8,&param_1);
    local_8 = local_8 & 0xffffff00;
    cVar1 = FUN_00406610(this,in_stack_ffffffa8);
    if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
      cVar1 = (**(code **)(*this + 0x10))();
    }
  }
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar2);
  }
  ExceptionList = local_10;
  return cVar1;
}




undefined1
FUN_004068d0(int param_1,uint param_2,uint param_3,void *param_4,uint *param_5,undefined4 *param_6,
            uint param_7)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  uint *puVar5;
  short *psVar6;
  uint uVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  int iVar9;
  short *psVar10;
  undefined4 in_stack_ffffff2c;
  undefined4 in_stack_ffffff30;
  uint uStack_bc;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_98;
  uint local_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_7c [2];
  int local_74;
  uint local_70;
  void *local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  int *local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  undefined1 local_1d;
  undefined *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004279d0;
  local_10 = ExceptionList;
  uStack_bc = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_bc;
  ExceptionList = &local_10;
  local_6c = param_4;
  local_15 = 0;
  local_1d = 0;
  local_28 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)FUN_00405380();
  local_8 = 2;
  local_1c = &DAT_0042f37c;
  puVar5 = FUN_00407cd0(&local_28,(uint *)&local_1c);
  *puVar5 = 4;
  local_1c = &DAT_0042f374;
  puVar5 = FUN_00407cd0(&local_28,(uint *)&local_1c);
  *puVar5 = 4;
  local_1c = &DAT_0042f36c;
  puVar5 = FUN_00407cd0(&local_28,(uint *)&local_1c);
  *puVar5 = 4;
  local_1c = &DAT_0042f364;
  puVar5 = FUN_00407cd0(&local_28,(uint *)&local_1c);
  *puVar5 = 4;
  local_1c = &DAT_0042f35c;
  puVar5 = FUN_00407cd0(&local_28,(uint *)&local_1c);
  *puVar5 = 4;
  local_30 = (int *)0x0;
  local_2c = 0;
  local_30 = (int *)FUN_00407e10();
  local_8._0_1_ = 5;
  local_60 = 0;
  local_1c = (undefined *)0x3c;
  if (param_7 == 0) {
    if (((int)param_3 < 0) || (((int)param_3 < 1 && (param_2 < 0x200001)))) {
      local_1c = (undefined *)0x1;
    }
    else {
      param_2 = 0x200000;
      param_3 = 0;
      local_1c = (undefined *)0x1;
    }
  }
  if (((-1 < (int)param_3) &&
      ((((0 < (int)param_3 || (99 < param_2)) && (param_3 < 0x80000000)) &&
       ((0 < (int)param_3 || (9 < param_2)))))) &&
     (local_5c = FUN_00406110((int *)(param_1 + 10),param_2 - 10,(int *)&local_28,&param_7),
     local_5c != (int *)0x0)) {
    local_68 = (int)local_5c - param_1;
    param_7 = (int)local_68 >> 0x1f;
    local_64 = param_2 - local_68;
    iVar9 = (param_3 - param_7) - (uint)(param_2 < local_68);
    local_58 = local_68;
    FUN_00406f30((int)local_5c,in_stack_ffffff2c,in_stack_ffffff30,local_64,iVar9,&local_44,
                 &local_54);
    if ((iStack_40 <= iVar9) && ((iStack_40 < iVar9 || (local_44 <= local_64)))) {
      local_54 = local_58;
      uStack_50 = param_7;
      psVar10 = (short *)((int)local_5c + local_44);
      psVar6 = FUN_00406080(psVar10,(param_2 - local_44) - local_68);
      if (psVar6 != (short *)0x0) {
        uVar7 = (int)psVar6 - (int)psVar10;
        uStack_4c = uVar7 + local_44 + 2;
        uStack_48 = ((int)uVar7 >> 0x1f) + iStack_40 + (uint)CARRY4(uVar7,local_44) +
                    (uint)(0xfffffffd < uVar7 + local_44);
        local_74 = uStack_4c + local_58;
        param_7 = uStack_48 + param_7 + (uint)CARRY4(uStack_4c,local_58);
        local_8 = CONCAT31(local_8._1_3_,6);
        local_70 = param_7;
        cVar3 = FUN_00406280((int)local_5c,uStack_4c);
        if (cVar3 == '\0') {
          local_ac = uStack_4c;
          local_a8 = uStack_48;
          local_a4 = local_54;
          uStack_a0 = uStack_50;
          uStack_9c = uStack_4c;
          iStack_98 = uStack_48;
          local_94 = local_44;
          iStack_90 = iStack_40;
          uStack_8c = iStack_3c;
          uStack_88 = iStack_38;
          local_84 = 1;
          piVar8 = FUN_00407f10(&local_30,&local_ac);
          FUN_00407fb0(&local_30,local_7c,extraout_ECX,(uint *)(piVar8 + 4),piVar8);
        }
        local_8 = 5;
        uVar4 = FUN_00406b88();
        return uVar4;
      }
    }
  }
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iVar9 = 0;
  if (local_2c != 0) {
    if (local_2c == 1) {
      iVar9 = *local_30;
      local_54 = *(uint *)(iVar9 + 0x18);
      uStack_50 = *(int *)(iVar9 + 0x1c);
      uStack_4c = *(uint *)(iVar9 + 0x20);
      uStack_48 = *(uint *)(iVar9 + 0x24);
      local_44 = *(uint *)(iVar9 + 0x28);
      iStack_40 = *(int *)(iVar9 + 0x2c);
      iStack_3c = *(int *)(iVar9 + 0x30);
      iStack_38 = *(int *)(iVar9 + 0x34);
      iVar9 = *(int *)(iVar9 + 0x38);
      *param_6 = 1;
      if ((iStack_3c < 0x3c0) || (iStack_38 < 0x398)) {
        if ((-1 < (int)uStack_48) && ((0 < (int)uStack_48 || (0x18fff < uStack_4c)))) {
          *param_6 = 0;
        }
      }
      else {
        *param_6 = 0;
      }
    }
    else {
      piVar8 = (int *)*local_30;
      if (piVar8 == local_30) {
        local_44 = 0;
        iStack_40 = 0;
        iStack_3c = 0;
        iStack_38 = 0;
        local_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
      }
      else {
        do {
          local_54 = piVar8[6];
          uStack_50 = piVar8[7];
          uStack_4c = piVar8[8];
          uStack_48 = piVar8[9];
          local_44 = piVar8[10];
          iStack_40 = piVar8[0xb];
          iStack_3c = piVar8[0xc];
          iStack_38 = piVar8[0xd];
          iStack_34 = piVar8[0xe];
          if ((0x3bf < iStack_3c) && (0x397 < iStack_38)) {
            *param_6 = 0;
            break;
          }
          piVar1 = (int *)piVar8[2];
          if (*(char *)((int)piVar1 + 0xd) == '\0') {
            cVar3 = *(char *)(*piVar1 + 0xd);
            piVar8 = piVar1;
            piVar1 = (int *)*piVar1;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar1 + 0xd);
              piVar8 = piVar1;
              piVar1 = (int *)*piVar1;
            }
          }
          else {
            cVar3 = *(char *)(piVar8[1] + 0xd);
            piVar2 = (int *)piVar8[1];
            piVar1 = piVar8;
            while ((piVar8 = piVar2, cVar3 == '\0' && (piVar1 == (int *)piVar8[2]))) {
              cVar3 = *(char *)(piVar8[1] + 0xd);
              piVar2 = (int *)piVar8[1];
              piVar1 = piVar8;
            }
          }
        } while (piVar8 != local_30);
      }
      iVar9 = iStack_34;
      if ((-1 < (int)uStack_48) && ((0 < (int)uStack_48 || (0x18fff < uStack_4c)))) {
        *param_6 = 0;
      }
    }
  }
  uVar7 = uStack_4c;
  if (iVar9 != 0) {
    if (((int)uStack_48 <= (int)param_5[1]) &&
       (((int)uStack_48 < (int)param_5[1] || (uStack_4c < *param_5)))) {
      if (uStack_4c != 0) {
        if ((local_6c == (void *)0x0) || ((void *)(local_54 + param_1) == (void *)0x0)) {
          piVar8 = _errno();
          *piVar8 = 0x16;
          _invalid_parameter_noinfo();
        }
        else if (*param_5 < uStack_4c) {
          piVar8 = _errno();
          *piVar8 = 0x22;
          _invalid_parameter_noinfo();
        }
        else {
          memmove(param_4,(void *)(local_54 + param_1),uStack_4c);
        }
      }
      *param_5 = uVar7;
      param_5[1] = uStack_48;
      local_15 = 1;
    }
  }
  FUN_00407b30((int *)&local_30);
  local_8._0_1_ = 9;
  FUN_00407b30((int *)&local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00425f95(local_30);
  piVar1 = local_28;
  local_8 = 0xb;
  cVar3 = *(char *)(local_28[1] + 0xd);
  piVar8 = (int *)local_28[1];
  while (cVar3 == '\0') {
    FUN_00407e90((int *)piVar8[2]);
    piVar2 = (int *)*piVar8;
    FUN_00425f95(piVar8);
    piVar8 = piVar2;
    cVar3 = *(char *)((int)piVar2 + 0xd);
  }
  local_28[1] = (int)piVar1;
  *local_28 = (int)piVar1;
  local_28[2] = (int)piVar1;
  local_24 = 0;
  local_8 = 0xffffffff;
  FUN_00425f95(local_28);
  ExceptionList = local_10;
  return local_15;
}




undefined * Catch_00406b69(void)

{
  return &DAT_00406b6f;
}




undefined1 FUN_00406b88(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  void *_Src;
  int *piVar13;
  undefined4 extraout_ECX;
  int iVar14;
  int iVar15;
  int unaff_EBP;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  uint unaff_ESI;
  uint unaff_EDI;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  iVar19 = *(int *)(unaff_EBP + 0x10);
  iVar15 = *(int *)(unaff_EBP + 0x20);
  if ((((iVar15 <= iVar19) &&
       ((((iVar15 < iVar19 || (unaff_ESI < unaff_EDI)) &&
         (iVar14 = *(int *)(unaff_EBP + -0x5c) + 1, *(int *)(unaff_EBP + -0x5c) = iVar14,
         iVar14 < *(int *)(unaff_EBP + -0x18))) && (-1 < iVar19)))) &&
      (((0 < iVar19 || (99 < unaff_EDI)) && (iVar15 <= iVar19)))) &&
     ((iVar15 < iVar19 || (unaff_ESI <= unaff_EDI)))) {
    piVar13 = FUN_00406110((int *)(unaff_ESI + *(int *)(unaff_EBP + 8)),unaff_EDI - unaff_ESI,
                           (int *)(unaff_EBP + -0x24),(uint *)(unaff_EBP + 0x20));
    *(int **)(unaff_EBP + -0x58) = piVar13;
    if (piVar13 != (int *)0x0) {
      uVar10 = (int)piVar13 - *(int *)(unaff_EBP + 8);
      *(uint *)(unaff_EBP + -100) = uVar10;
      *(uint *)(unaff_EBP + -0x54) = uVar10;
      *(int *)(unaff_EBP + 0x20) = (int)uVar10 >> 0x1f;
      *(uint *)(unaff_EBP + -0x60) = unaff_EDI - uVar10;
      iVar19 = (*(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0x20)) -
               (uint)(unaff_EDI < uVar10);
      FUN_00406f30((int)piVar13,in_stack_ffffffe8,in_stack_ffffffec,unaff_EDI - uVar10,iVar19,
                   (uint *)(unaff_EBP + -0x40),(undefined4 *)(unaff_EBP + -0x50));
      if ((*(int *)(unaff_EBP + -0x3c) <= iVar19) &&
         ((uVar10 = *(uint *)(unaff_EBP + -0x40), *(int *)(unaff_EBP + -0x3c) < iVar19 ||
          (uVar10 <= *(uint *)(unaff_EBP + -0x60))))) {
        *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x54);
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0x20);
        psVar16 = (short *)(*(int *)(unaff_EBP + -0x58) + uVar10);
        psVar11 = FUN_00406080(psVar16,(unaff_EDI - uVar10) - *(int *)(unaff_EBP + -100));
        if (psVar11 != (short *)0x0) {
          uVar10 = (int)psVar11 - (int)psVar16;
          uVar17 = uVar10 + *(uint *)(unaff_EBP + -0x40);
          uVar18 = uVar17 + 2;
          iVar19 = ((int)uVar10 >> 0x1f) + *(int *)(unaff_EBP + -0x3c) +
                   (uint)CARRY4(uVar10,*(uint *)(unaff_EBP + -0x40)) + (uint)(0xfffffffd < uVar17);
          *(uint *)(unaff_EBP + -0x48) = uVar18;
          *(int *)(unaff_EBP + -0x44) = iVar19;
          iVar19 = iVar19 + *(int *)(unaff_EBP + 0x20) +
                   (uint)CARRY4(uVar18,*(uint *)(unaff_EBP + -0x54));
          *(int *)(unaff_EBP + 0x20) = iVar19;
          *(uint *)(unaff_EBP + -0x70) = uVar18 + *(uint *)(unaff_EBP + -0x54);
          *(int *)(unaff_EBP + -0x6c) = iVar19;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          cVar8 = FUN_00406280(*(int *)(unaff_EBP + -0x58),uVar18);
          if (cVar8 == '\0') {
            *(undefined4 *)(unaff_EBP + -0xa8) = *(undefined4 *)(unaff_EBP + -0x48);
            *(undefined4 *)(unaff_EBP + -0xa4) = *(undefined4 *)(unaff_EBP + -0x44);
            *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x50);
            *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x4c);
            *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0x48);
            *(undefined4 *)(unaff_EBP + -0x94) = *(undefined4 *)(unaff_EBP + -0x44);
            *(undefined4 *)(unaff_EBP + -0x90) = *(undefined4 *)(unaff_EBP + -0x40);
            *(undefined4 *)(unaff_EBP + -0x8c) = *(undefined4 *)(unaff_EBP + -0x3c);
            *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x38);
            *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x34);
            *(undefined4 *)(unaff_EBP + -0x80) = 1;
            piVar13 = FUN_00407f10((void *)(unaff_EBP + -0x2c),(undefined4 *)(unaff_EBP + -0xa8));
            FUN_00407fb0((void *)(unaff_EBP + -0x2c),(undefined4 *)(unaff_EBP + -0x78),extraout_ECX,
                         (uint *)(piVar13 + 4),piVar13);
          }
          *(undefined4 *)(unaff_EBP + -4) = 5;
          uVar9 = FUN_00406b88();
          return uVar9;
        }
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  iVar19 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    if (*(int *)(unaff_EBP + -0x28) == 1) {
      iVar19 = **(int **)(unaff_EBP + -0x2c);
      uVar4 = *(undefined4 *)(iVar19 + 0x1c);
      uVar5 = *(undefined4 *)(iVar19 + 0x20);
      uVar6 = *(undefined4 *)(iVar19 + 0x24);
      *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(iVar19 + 0x18);
      *(undefined4 *)(unaff_EBP + -0x4c) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x48) = uVar5;
      *(undefined4 *)(unaff_EBP + -0x44) = uVar6;
      uVar4 = *(undefined4 *)(iVar19 + 0x2c);
      iVar15 = *(int *)(iVar19 + 0x30);
      uVar5 = *(undefined4 *)(iVar19 + 0x34);
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar19 + 0x28);
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      *(int *)(unaff_EBP + -0x38) = iVar15;
      *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
      iVar19 = *(int *)(iVar19 + 0x38);
      puVar1 = *(undefined4 **)(unaff_EBP + 0x1c);
      *puVar1 = 1;
      if ((iVar15 < 0x3c0) || (*(int *)(unaff_EBP + -0x34) < 0x398)) {
        uVar10 = *(uint *)(unaff_EBP + -0x48);
        if ((-1 < *(int *)(unaff_EBP + -0x44)) &&
           ((0 < *(int *)(unaff_EBP + -0x44) || (0x18fff < uVar10)))) {
          *puVar1 = 0;
        }
        goto LAB_00406d04;
      }
      *puVar1 = 0;
    }
    else {
      piVar13 = *(int **)(unaff_EBP + -0x2c);
      piVar12 = (int *)*piVar13;
      if (piVar12 == piVar13) {
        iVar19 = *(int *)(unaff_EBP + -0x30);
        iVar20 = *(int *)(unaff_EBP + -0x40);
        iVar21 = *(int *)(unaff_EBP + -0x3c);
        iVar22 = *(int *)(unaff_EBP + -0x38);
        iVar23 = *(int *)(unaff_EBP + -0x34);
        iVar15 = *(int *)(unaff_EBP + -0x50);
        iVar14 = *(int *)(unaff_EBP + -0x4c);
        uVar10 = *(uint *)(unaff_EBP + -0x48);
        iVar24 = *(int *)(unaff_EBP + -0x44);
      }
      else {
        do {
          iVar15 = piVar12[6];
          iVar14 = piVar12[7];
          uVar10 = piVar12[8];
          iVar24 = piVar12[9];
          iVar20 = piVar12[10];
          iVar21 = piVar12[0xb];
          iVar22 = piVar12[0xc];
          iVar23 = piVar12[0xd];
          iVar19 = piVar12[0xe];
          if ((0x3bf < iVar22) && (0x397 < iVar23)) {
            **(undefined4 **)(unaff_EBP + 0x1c) = 0;
            break;
          }
          piVar2 = (int *)piVar12[2];
          if (*(char *)((int)piVar2 + 0xd) == '\0') {
            cVar8 = *(char *)(*piVar2 + 0xd);
            piVar12 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar8 == '\0') {
              cVar8 = *(char *)(*piVar2 + 0xd);
              piVar12 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar8 = *(char *)(piVar12[1] + 0xd);
            piVar7 = (int *)piVar12[1];
            piVar2 = piVar12;
            while ((piVar12 = piVar7, cVar8 == '\0' && (piVar2 == (int *)piVar12[2]))) {
              cVar8 = *(char *)(piVar12[1] + 0xd);
              piVar7 = (int *)piVar12[1];
              piVar2 = piVar12;
            }
          }
        } while (piVar12 != piVar13);
      }
      if ((-1 < iVar24) && ((0 < iVar24 || (0x18fff < uVar10)))) {
        **(undefined4 **)(unaff_EBP + 0x1c) = 0;
      }
      *(int *)(unaff_EBP + -0x50) = iVar15;
      *(int *)(unaff_EBP + -0x4c) = iVar14;
      *(uint *)(unaff_EBP + -0x48) = uVar10;
      *(int *)(unaff_EBP + -0x44) = iVar24;
      *(int *)(unaff_EBP + -0x40) = iVar20;
      *(int *)(unaff_EBP + -0x3c) = iVar21;
      *(int *)(unaff_EBP + -0x38) = iVar22;
      *(int *)(unaff_EBP + -0x34) = iVar23;
    }
  }
  uVar10 = *(uint *)(unaff_EBP + -0x48);
LAB_00406d04:
  if (iVar19 != 0) {
    puVar3 = *(uint **)(unaff_EBP + 0x18);
    if ((*(int *)(unaff_EBP + -0x44) <= (int)puVar3[1]) &&
       ((*(int *)(unaff_EBP + -0x44) < (int)puVar3[1] || (uVar10 < *puVar3)))) {
      _Src = (void *)(*(int *)(unaff_EBP + -0x50) + *(int *)(unaff_EBP + 8));
      if (uVar10 != 0) {
        if ((*(int *)(unaff_EBP + -0x68) == 0) || (_Src == (void *)0x0)) {
          piVar13 = _errno();
          *piVar13 = 0x16;
          _invalid_parameter_noinfo();
        }
        else if (*puVar3 < uVar10) {
          piVar13 = _errno();
          *piVar13 = 0x22;
          _invalid_parameter_noinfo();
        }
        else {
          memmove(*(void **)(unaff_EBP + 0x14),_Src,uVar10);
        }
      }
      *puVar3 = uVar10;
      puVar3[1] = *(uint *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
    }
  }
  FUN_00407b30((int *)(unaff_EBP + -0x2c));
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00407b30((int *)(unaff_EBP + -0x2c));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00425f95(*(void **)(unaff_EBP + -0x2c));
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  iVar19 = *(int *)(unaff_EBP + -0x24);
  *(int *)(unaff_EBP + 0x1c) = iVar19;
  iVar15 = iVar19;
  piVar13 = *(int **)(iVar19 + 4);
  if (*(char *)((int)*(int **)(iVar19 + 4) + 0xd) == '\0') {
    do {
      FUN_00407e90((int *)piVar13[2]);
      piVar12 = (int *)*piVar13;
      FUN_00425f95(piVar13);
      piVar13 = piVar12;
    } while (*(char *)((int)piVar12 + 0xd) == '\0');
    iVar19 = *(int *)(unaff_EBP + -0x24);
    iVar15 = *(int *)(unaff_EBP + 0x1c);
  }
  *(int *)(iVar19 + 4) = iVar15;
  **(int **)(unaff_EBP + -0x24) = iVar15;
  *(int *)(*(int *)(unaff_EBP + -0x24) + 8) = iVar15;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00425f95(*(void **)(unaff_EBP + -0x24));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined1 *)(unaff_EBP + -0x11);
}




void __fastcall FUN_00406e20(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  iVar1 = *param_1;
  iVar3 = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(char *)((int)*(int **)(iVar1 + 4) + 0xd) == '\0') {
    do {
      FUN_00407e90((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_00425f95(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  local_8 = 0xffffffff;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_00406ed0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_00407b30(param_1);
  local_8 = 0xffffffff;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void FUN_00406f30(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  undefined1 auStack_24 [4];
  uint *local_20;
  char local_1c [8];
  char local_14 [8];
  uint local_c;
  
  local_c = DAT_0042f340 ^ (uint)auStack_24;
  local_20 = param_6;
  builtin_strncpy(local_1c,"JFIF",5);
  builtin_strncpy(local_14,"Exif",4);
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_7[3] = 0;
  local_14[4] = 0;
  param_7[4] = 0;
  param_7[5] = 0;
  param_7[6] = 0;
  param_7[7] = 0;
  param_7[8] = 0;
  if ((-1 < param_5) && ((0 < param_5 || (99 < param_4)))) {
    iVar1 = _strnicmp(local_1c,(char *)(param_1 + 6),4);
    if (iVar1 == 0) {
      FUN_00407040(param_1,in_stack_ffffffb8,in_stack_ffffffbc,param_4,param_5,extraout_ECX,
                   (int)param_7);
      __security_check_cookie(local_c ^ (uint)auStack_24);
      return;
    }
    iVar1 = _strnicmp(local_14,(char *)(param_1 + 6),4);
    if (iVar1 == 0) {
      FUN_004072b0(param_1,in_stack_ffffffb8,in_stack_ffffffbc,param_4,param_5,extraout_ECX_00,
                   (int)param_7);
      __security_check_cookie(local_c ^ (uint)auStack_24);
      return;
    }
    FUN_004074d0(param_1,in_stack_ffffffb8,in_stack_ffffffbc,param_4,param_5,local_20,(int)param_7);
  }
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}




void FUN_00407040(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  int local_20;
  char local_13;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  builtin_strncpy(local_10,"JFIF",5);
  uVar9 = 0;
  bVar2 = false;
  bVar1 = false;
  *(undefined4 *)(param_7 + 0x10) = 0;
  *(undefined4 *)(param_7 + 0x14) = 0;
  iVar4 = strncmp(local_10,(char *)(param_1 + 6),4);
  if (iVar4 == 0) {
    pcVar8 = (char *)(param_1 + 2);
    *(undefined4 *)(param_7 + 0x10) = 2;
    *(undefined4 *)(param_7 + 0x14) = 0;
    if (*pcVar8 == -1) {
      local_13 = *(char *)(param_1 + 3);
      uVar6 = 2;
      iVar4 = 0;
      local_20 = 0;
      do {
        iVar5 = iVar4 + (uint)(0xfffffffb < uVar6);
        if ((param_5 < iVar5) ||
           (((param_5 <= iVar5 && (param_4 <= uVar6 + 4)) || (0x3b < local_20)))) break;
        switch(local_13) {
        case -0x40:
          iVar5 = iVar4 + (uint)(0xfffffff5 < uVar6);
          if ((param_5 < iVar5) ||
             (((param_5 <= iVar5 && (param_4 < uVar6 + 10)) ||
              (uVar3 = *(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8,
              *(char *)(uVar6 + 4 + param_1) != '\b')))) goto LAB_0040723c;
LAB_0040714e:
          uVar9 = (uint)uVar3;
          uVar3 = *(ushort *)(uVar6 + 5 + param_1);
          *(uint *)(param_7 + 0x1c) = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
          uVar3 = *(ushort *)(uVar6 + 7 + param_1);
          *(uint *)(param_7 + 0x18) = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
          bVar1 = true;
          break;
        default:
          uVar9 = (uint)(ushort)(*(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8);
          break;
        case -0x3e:
          if (*(int *)(param_7 + 0x18) * *(int *)(param_7 + 0x1c) == 0) {
            iVar5 = iVar4 + (uint)(0xfffffff5 < uVar6);
            if (((iVar5 <= param_5) && ((iVar5 < param_5 || (uVar6 + 10 <= param_4)))) &&
               (uVar3 = *(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8,
               *(char *)(uVar6 + 4 + param_1) == '\b')) goto LAB_0040714e;
            goto LAB_0040723c;
          }
          break;
        case -0x26:
          if (!bVar1) goto LAB_0040723c;
          iVar5 = iVar4 + (uint)(0xfffffff5 < uVar6);
          if ((param_5 < iVar5) || ((param_5 <= iVar5 && (param_4 < uVar6 + 10))))
          goto LAB_0040723c;
          uVar9 = (uint)(ushort)(*(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8);
          bVar2 = true;
          break;
        case -1:
          uVar9 = 0;
        }
        bVar10 = CARRY4(uVar9,uVar6);
        uVar7 = uVar9 + uVar6;
        uVar6 = uVar7 + 2;
        iVar4 = iVar4 + (uint)bVar10 + (uint)(0xfffffffd < uVar7);
        *(uint *)(param_7 + 0x10) = uVar6;
        *(int *)(param_7 + 0x14) = iVar4;
        iVar5 = iVar4 + (uint)(0xfffffffd < uVar6);
        if ((param_5 < iVar5) || ((param_5 <= iVar5 && (param_4 < uVar7 + 4)))) break;
        pcVar8 = (char *)(param_1 + uVar6);
        local_13 = pcVar8[1];
        local_20 = local_20 + 1;
        if (bVar2) break;
      } while( true );
    }
  }
LAB_0040723c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_004072b0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  char local_12;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  builtin_strncpy(local_10,"Exif",5);
  bVar3 = false;
  bVar2 = false;
  *(undefined4 *)(param_7 + 0x10) = 0;
  *(undefined4 *)(param_7 + 0x14) = 0;
  iVar4 = _strnicmp(local_10,(char *)(param_1 + 6),4);
  if (((iVar4 == 0) && (-1 < param_5)) && ((0 < param_5 || (99 < param_4)))) {
    pcVar6 = (char *)(param_1 + 2);
    *(undefined4 *)(param_7 + 0x10) = 2;
    *(undefined4 *)(param_7 + 0x14) = 0;
    if (*pcVar6 == -1) {
      local_12 = *(char *)(param_1 + 3);
      uVar9 = 2;
      iVar8 = 0;
      iVar4 = 0;
      do {
        iVar5 = iVar8 + (uint)(0xfffffffb < uVar9);
        if ((param_5 < iVar5) || (((param_5 <= iVar5 && (param_4 <= uVar9 + 4)) || (0x3b < iVar4))))
        break;
        switch(local_12) {
        case -0x40:
          uVar7 = (uint)(ushort)(*(ushort *)(pcVar6 + 2) << 8 | *(ushort *)(pcVar6 + 2) >> 8);
          iVar5 = iVar8 + (uint)(0xfffffff5 < uVar9);
          if (((param_5 < iVar5) || ((param_5 <= iVar5 && (param_4 < uVar9 + 10)))) ||
             (*(char *)(uVar9 + 4 + param_1) != '\b')) goto LAB_00407458;
          uVar1 = *(ushort *)(uVar9 + 5 + param_1);
          bVar2 = true;
          *(uint *)(param_7 + 0x1c) = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
          uVar1 = *(ushort *)(uVar9 + 7 + param_1);
          *(uint *)(param_7 + 0x18) = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
          break;
        default:
          goto switchD_00407395_caseD_c1;
        case -0x26:
          if (!bVar2) goto LAB_00407458;
          bVar3 = true;
switchD_00407395_caseD_c1:
          uVar7 = (uint)(ushort)(*(ushort *)(pcVar6 + 2) << 8 | *(ushort *)(pcVar6 + 2) >> 8);
          break;
        case -1:
          uVar7 = 0;
        }
        bVar10 = CARRY4(uVar7,uVar9);
        uVar7 = uVar7 + uVar9;
        uVar9 = uVar7 + 2;
        *(uint *)(param_7 + 0x10) = uVar9;
        iVar8 = iVar8 + (uint)bVar10 + (uint)(0xfffffffd < uVar7);
        *(int *)(param_7 + 0x14) = iVar8;
        iVar5 = iVar8 + (uint)(0xfffffffb < uVar9);
        if ((param_5 < iVar5) || ((param_5 <= iVar5 && (param_4 < uVar7 + 6)))) break;
        pcVar6 = (char *)(uVar9 + param_1);
        local_12 = pcVar6[1];
        iVar4 = iVar4 + 1;
        if (bVar3) break;
      } while( true );
    }
  }
LAB_00407458:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void FUN_004074d0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint *param_6,int param_7)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  if (param_1 != 0) {
    uVar7 = 0;
    pcVar8 = (char *)(param_1 + 2);
    *param_6 = 2;
    param_6[1] = 0;
    bVar2 = false;
    bVar1 = false;
    if (*pcVar8 == -1) {
      uVar4 = 2;
      uVar5 = 0;
      while (((int)uVar5 <= param_5 && (((int)uVar5 < param_5 || (uVar4 < param_4))))) {
        switch(pcVar8[1]) {
        case -0x40:
        case -0x3f:
        case -0x3e:
        case -0x3d:
        case -0x3b:
        case -0x3a:
        case -0x39:
        case -0x37:
        case -0x36:
        case -0x35:
        case -0x33:
        case -0x32:
        case -0x31:
          iVar6 = uVar5 + (0xfffffff5 < uVar4);
          if ((iVar6 <= param_5) && ((iVar6 < param_5 || (uVar4 + 10 <= param_4)))) {
            uVar7 = (uint)(ushort)(*(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8);
            pcVar8 = (char *)(param_1 + 4 + uVar4);
            if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\b')) {
              *(uint *)(param_7 + 0x1c) =
                   (uint)(ushort)(*(ushort *)(pcVar8 + 1) << 8 | *(ushort *)(pcVar8 + 1) >> 8);
              *(uint *)(param_7 + 0x18) =
                   (uint)(ushort)(*(ushort *)(pcVar8 + 3) << 8 | *(ushort *)(pcVar8 + 3) >> 8);
              if (pcVar8[5] == '\x03') {
                bVar1 = true;
              }
            }
          }
          break;
        default:
          iVar6 = uVar5 + (0xfffffffd < uVar4);
          if (param_5 < iVar6) {
            return;
          }
          if ((param_5 <= iVar6) && (param_4 < uVar4 + 2)) {
            return;
          }
        case -0x3c:
        case -0x25:
        case -0x23:
        case -2:
          uVar7 = (uint)(ushort)(*(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8);
          break;
        case -0x26:
          if (bVar1) {
            iVar6 = uVar5 + (0xfffffff5 < uVar4);
            if ((iVar6 <= param_5) && ((iVar6 < param_5 || (uVar4 + 10 <= param_4)))) {
              uVar7 = (uint)(ushort)(*(ushort *)(pcVar8 + 2) << 8 | *(ushort *)(pcVar8 + 2) >> 8);
              pcVar8 = (char *)(uVar4 + param_1 + 4);
              if ((pcVar8 != (char *)0x0) && (*pcVar8 == '\x03')) {
                bVar2 = true;
              }
            }
          }
          break;
        case -1:
          uVar7 = 0;
        }
        uVar5 = *param_6;
        uVar3 = uVar7 + *param_6;
        uVar4 = uVar3 + 2;
        *param_6 = uVar4;
        uVar5 = param_6[1] + (uint)CARRY4(uVar7,uVar5) + (uint)(0xfffffffd < uVar3);
        param_6[1] = uVar5;
        iVar6 = uVar5 + (0xfffffffb < uVar4);
        if (param_5 < iVar6) {
          return;
        }
        if ((param_5 <= iVar6) && (param_4 < uVar3 + 6)) {
          return;
        }
        pcVar8 = (char *)(param_1 + uVar4);
        if (bVar2) {
          return;
        }
      }
    }
  }
  return;
}




void __thiscall FUN_004076a0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  HWND pHVar7;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  void *this_01;
  int iVar8;
  undefined4 local_684;
  code *local_680;
  int local_67c;
  HMODULE local_678;
  undefined4 local_674;
  code *local_670;
  HMODULE *local_66c;
  int local_668;
  code *local_664;
  int *local_660;
  char local_65a;
  undefined1 local_659;
  CHAR local_658 [1024];
  CHAR local_258 [264];
  char local_150 [264];
  char local_48 [16];
  HMODULE local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  code *pcStack_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00427a7b;
  local_1c = ExceptionList;
  local_24 = DAT_0042f340 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_668 = param_1;
  local_659 = 0;
  local_660 = (int *)this;
  puVar5 = &stack0xfffffffc;
  if (param_1 != 0) {
    memset(local_258,0,0x104);
    if ((DAT_0042fcc8 == 0) || (this_01 = extraout_ECX, DAT_0042f8c8 == '\0')) {
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      local_38 = (HMODULE)0x0;
      uStack_34 = 0;
      uStack_30 = 0;
      pcStack_2c = (code *)0x0;
      memset(local_150,0,0x104);
      memset(local_658,0,0x400);
      GetModuleFileNameA((HMODULE)0x0,local_658,0x3ff);
      _splitpath_s(local_658,local_48,0x20,local_150,0x104,(char *)0x0,0,(char *)0x0,0);
      DAT_0042fcc8 = FUN_004086b0(this_00,&DAT_0042f8c8,0x3ff,&DAT_0042a894);
      this_01 = extraout_ECX_00;
    }
    FUN_00407ef0(this_01,local_258,"%sConfig.dat");
    local_664 = (code *)GetPrivateProfileIntA("register","DamageProportion",10,local_258);
                    /* WARNING: Load size is inaccurate */
    iVar1 = *ThreadLocalStoragePointer;
    if ((*(int *)(iVar1 + 4) < DAT_00430110) && (FUN_00426439(&DAT_00430110), DAT_00430110 == -1)) {
      local_14 = 0;
      _atexit((_func_4879 *)&DAT_00428480);
      local_14 = 0xffffffff;
      FUN_004263ef(&DAT_00430110);
    }
    iVar8 = 100;
    if (0 < param_2) {
      FUN_004086d0(&local_678);
      local_14 = 1;
      if (local_670 != (code *)0x0) {
        iVar8 = (*local_670)(local_668,param_2);
      }
      local_14 = 0xffffffff;
      if (local_678 != (HMODULE)0x0) {
        FreeLibrary(local_678);
        local_678 = (HMODULE)0x0;
      }
    }
    uVar2 = DAT_0042f8b8;
    puVar5 = puStack_20;
    if (iVar8 <= (int)local_664) {
      local_664 = DAT_0042f8bc;
      pHVar7 = FindWindowExA((HWND)0x0,(HWND)0x0,(LPCSTR)0x0,"EaseUS_PreivewDialog");
      if (pHVar7 != (HWND)0x0) {
        pcStack_2c = local_664;
        local_66c = &local_38;
        local_38 = (HMODULE)0x2;
        uStack_30 = uVar2;
        local_674 = 0x270e;
        local_670 = (code *)0x10;
        SendMessageA(pHVar7,0x4a,0,(LPARAM)&local_674);
      }
      local_680 = (code *)0x3201000;
      local_67c = 0;
      local_684 = 0;
      memset((void *)local_660[3],0,0x3201000);
      cVar6 = (**(code **)(*local_660 + 0x10))
                        (local_668,param_2,param_3,local_660[3],&local_680,&local_684,0);
      iVar4 = local_668;
      iVar8 = local_67c;
      puVar5 = puStack_20;
      if (cVar6 != '\0') {
        local_660 = (int *)local_660[3];
        local_664 = local_680;
        if ((*(int *)(iVar1 + 4) < DAT_00430110) &&
           (FUN_00426439(&DAT_00430110), DAT_00430110 == -1)) {
          local_14 = 2;
          _atexit((_func_4879 *)&DAT_00428480);
          local_14 = 0xffffffff;
          FUN_004263ef(&DAT_00430110);
        }
        puVar5 = puStack_20;
        if (((-1 < param_3) &&
            ((((0 < param_3 || (param_2 != 0)) && (local_660 != (int *)0x0)) && (-1 < iVar8)))) &&
           ((0 < iVar8 || (local_664 != (code *)0x0)))) {
          FUN_004086d0(&local_38);
          local_14 = 3;
          local_65a = '\0';
          if (pcStack_2c != (code *)0x0) {
            local_65a = (*pcStack_2c)(iVar4,param_2,local_660,local_664);
          }
          local_14 = 0xffffffff;
          if (local_38 != (HMODULE)0x0) {
            FreeLibrary(local_38);
            local_38 = (HMODULE)0x0;
          }
          pcVar3 = DAT_0042f8bc;
          uVar2 = DAT_0042f8b8;
          puVar5 = puStack_20;
          if ((local_65a != '\0') &&
             (pHVar7 = FindWindowExA((HWND)0x0,(HWND)0x0,(LPCSTR)0x0,"EaseUS_PreivewDialog"),
             puVar5 = puStack_20, pHVar7 != (HWND)0x0)) {
            local_66c = &local_38;
            local_38 = (HMODULE)0x1;
            uStack_30 = uVar2;
            pcStack_2c = pcVar3;
            local_674 = 0x270e;
            local_670 = (code *)0x10;
            SendMessageA(pHVar7,0x4a,0,(LPARAM)&local_674);
            puVar5 = puStack_20;
          }
        }
      }
    }
  }
  puStack_20 = puVar5;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}




void __fastcall FUN_00407b30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  piVar4 = *(int **)(iVar1 + 4);
  iVar3 = iVar1;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    do {
      FUN_00407d90((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_00425f95(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_00407bc0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427ad8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00407b30(param_1);
  local_8 = 0xffffffff;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void __fastcall FUN_00407c20(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427b08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *param_1;
  iVar3 = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  if (*(char *)((int)*(int **)(iVar1 + 4) + 0xd) == '\0') {
    do {
      FUN_00407e90((int *)piVar4[2]);
      piVar2 = (int *)*piVar4;
      FUN_00425f95(piVar4);
      piVar4 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    iVar3 = *param_1;
  }
  *(int *)(iVar3 + 4) = iVar1;
  *(int *)*param_1 = iVar1;
  *(int *)(*param_1 + 8) = iVar1;
  param_1[1] = 0;
  local_8 = 0xffffffff;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




uint * __thiscall FUN_00407cd0(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  void *pvVar5;
  uint *puVar6;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *this;
  pvVar5 = this;
  puVar6 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    pvVar5 = (void *)*param_1;
    puVar2 = (uint *)puVar1[1];
    do {
      if ((void *)puVar2[4] < pvVar5) {
        puVar3 = (uint *)puVar2[2];
      }
      else {
        puVar3 = (uint *)*puVar2;
        puVar6 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if ((puVar6 != puVar1) && (puVar6[4] <= *param_1)) {
    return puVar6 + 5;
  }
  piVar4 = FUN_004058b0(this,pvVar5,&param_1);
  FUN_00408060(this,&param_1,puVar6,(uint *)(piVar4 + 4),piVar4);
  return param_1 + 5;
}




void __fastcall FUN_00407d50(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void FUN_00407d90(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_00407d90((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00425f95(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}




void __fastcall FUN_00407dd0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427270;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00425f95((void *)*param_1);
  ExceptionList = local_10;
  return;
}




void FUN_00407e10(void)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427b30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)pvVar1 + 8) = pvVar1;
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  ExceptionList = local_10;
  return;
}




void Catch_00407e76(void)

{
  int unaff_EBP;
  
  FUN_00407ed0(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00407e90(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_00407e90((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_00425f95(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}




void FUN_00407ed0(void *param_1)

{
  FUN_00425f95(param_1);
  return;
}




void __thiscall FUN_00407ef0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_00408680(param_1,0x104,param_2,this,&stack0x0000000c);
  return;
}




undefined4 * __thiscall FUN_00407f10(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427b50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = FUN_00408240((undefined4 *)this);
  *(undefined2 *)(puVar4 + 3) = 0;
  puVar4[4] = *param_1;
  puVar4[5] = param_1[1];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  puVar4[6] = param_1[2];
  puVar4[7] = uVar1;
  puVar4[8] = uVar2;
  puVar4[9] = uVar3;
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar3 = param_1[9];
  puVar4[10] = param_1[6];
  puVar4[0xb] = uVar1;
  puVar4[0xc] = uVar2;
  puVar4[0xd] = uVar3;
  puVar4[0xe] = param_1[10];
  ExceptionList = local_10;
  return puVar4;
}




void Catch_00407f93(void)

{
  int unaff_EBP;
  
  FUN_00408220(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void __thiscall
FUN_00407fb0(void *this,undefined4 *param_1,undefined4 param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *extraout_ECX;
  undefined4 *puVar5;
  char local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_00427b70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  local_18 = '\x01';
  pvVar4 = this;
  puVar3 = (undefined4 *)(*this)[1];
  puVar5 = *this;
  while (*(char *)((int)puVar3 + 0xd) == '\0') {
    uVar2 = FUN_004082c0(puVar1,puVar3 + 4);
    local_18 = (char)uVar2;
    pvVar4 = extraout_ECX;
    puVar5 = puVar3;
    if (local_18 == '\0') {
      puVar3 = (undefined4 *)puVar3[2];
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  puVar3 = (undefined4 *)FUN_004082f0(this,&param_3,local_18,puVar5,pvVar4,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}




void Catch_0040804b(void)

{
  int unaff_EBP;
  
  FUN_00408220(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined4 * __thiscall
FUN_00408060(void *this,undefined4 *param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  char cVar8;
  uint uStack_2c;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427b90;
  local_10 = ExceptionList;
  uStack_2c = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Load size is inaccurate */
    puVar5 = *this;
    param_3 = (uint *)this;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    puVar1 = *this;
    if (param_2 != (uint *)*puVar1) {
      if (param_2 != puVar1) {
        uVar2 = *param_3;
        uVar3 = param_2[4];
        if (uVar2 < uVar3) {
          if (*(char *)((int)param_2 + 0xd) == '\0') {
            puVar7 = param_2;
            puVar4 = (uint *)*param_2;
            if (*(char *)((int)*param_2 + 0xd) == '\0') {
              do {
                puVar5 = puVar4;
                puVar4 = (uint *)puVar5[2];
              } while (*(char *)((int)puVar5[2] + 0xd) == '\0');
            }
            else {
              do {
                puVar5 = puVar7;
                puVar7 = (uint *)puVar5[1];
                if (*(char *)((int)puVar7 + 0xd) != '\0') break;
              } while (puVar5 == (uint *)*puVar7);
              if (*(char *)((int)puVar5 + 0xd) == '\0') {
                puVar5 = puVar7;
              }
            }
          }
          else {
            puVar5 = (uint *)param_2[2];
          }
          if (puVar5[4] < uVar2) {
            puVar7 = (uint *)puVar5[2];
            if (*(char *)((int)puVar7 + 0xd) == '\0') {
              cVar8 = '\x01';
              puVar5 = param_2;
            }
            else {
              cVar8 = '\0';
            }
            goto LAB_004080a7;
          }
          uVar3 = param_2[4];
        }
        if (uVar3 < uVar2) {
          cVar8 = *(char *)((int)param_2[2] + 0xd);
          puVar7 = (uint *)param_2[2];
          puVar5 = param_2;
          if (cVar8 == '\0') {
            do {
              puVar5 = puVar7;
              puVar7 = (uint *)*puVar5;
            } while (*(char *)((int)puVar7 + 0xd) == '\0');
          }
          else {
            do {
              puVar7 = puVar5;
              puVar5 = (uint *)puVar7[1];
              if (*(char *)((int)puVar5 + 0xd) != '\0') break;
            } while (puVar7 == (uint *)puVar5[2]);
          }
          if ((puVar5 == puVar1) || (puVar7 = (uint *)*param_3, puVar7 < (uint *)puVar5[4])) {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
            }
            else {
              cVar8 = '\0';
              puVar5 = param_2;
            }
            goto LAB_004080a7;
          }
        }
LAB_004081ce:
        local_8 = 0xffffffff;
        puVar6 = (undefined4 *)FUN_00408520(this,local_1c,'\0',param_3,param_4);
        *param_1 = *puVar6;
        ExceptionList = local_10;
        return param_1;
      }
      puVar5 = (uint *)puVar1[2];
      if (*param_3 <= puVar5[4]) goto LAB_004081ce;
      cVar8 = '\0';
      puVar7 = puVar5;
      goto LAB_004080a7;
    }
    puVar5 = param_2;
    if (param_2[4] <= *param_3) goto LAB_004081ce;
  }
  cVar8 = '\x01';
  puVar7 = param_3;
LAB_004080a7:
  local_14 = (undefined1 *)&uStack_2c;
  FUN_00405c50(this,param_1,cVar8,puVar5,puVar7,param_4);
  ExceptionList = local_10;
  return param_1;
}




void Catch_00408201(void)

{
  int unaff_EBP;
  
  FUN_00405b00(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void FUN_00408220(void *param_1)

{
  FUN_00425f95(param_1);
  return;
}




undefined4 * __fastcall FUN_00408240(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427bb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)operator_new(0x40);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  ExceptionList = local_10;
  return puVar1;
}




void Catch_004082ac(void)

{
  int unaff_EBP;
  
  FUN_00407ed0(*(void **)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




uint FUN_004082c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (((int)uVar1 <= (int)param_2[1]) &&
     (((int)uVar1 < (int)param_2[1] || (uVar1 = *param_1, uVar1 < *param_2)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}




void __thiscall
FUN_004082f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *extraout_ECX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  uVar4 = *(uint *)((int)this + 4);
  piVar7 = (int *)this;
  if (0x3fffffd < uVar4) {
    uVar4 = FUN_00408220(param_5);
    std::_Xlength_error("map/set<T> too long");
    piVar7 = extraout_ECX;
  }
  piVar7[1] = uVar4 + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*piVar7) {
    ((undefined4 *)*piVar7)[1] = param_5;
    *(int **)*piVar7 = param_5;
    *(int **)(*piVar7 + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*piVar7 + 8)) {
      *(int **)(*piVar7 + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*piVar7) {
      *(int **)*piVar7 = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar8 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar9 = (int *)piVar8[1];
    piVar7 = piVar8 + 1;
    piVar10 = piVar9 + 1;
    iVar5 = *(int *)piVar9[1];
    if (piVar9 == (int *)iVar5) {
      iVar5 = ((int *)piVar9[1])[2];
      if (*(char *)(iVar5 + 0xc) != '\0') {
        piVar2 = (int *)piVar9[2];
        if (piVar8 == piVar2) {
          piVar9[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar9;
          }
          piVar2[1] = *piVar10;
                    /* WARNING: Load size is inaccurate */
          if (piVar9 == (int *)*(int *)(*this + 4)) {
            *(int **)(*this + 4) = piVar2;
            *piVar2 = (int)piVar9;
            *piVar10 = (int)piVar2;
            piVar8 = piVar9;
            piVar9 = piVar2;
            piVar7 = piVar10;
          }
          else {
            piVar7 = (int *)*piVar10;
            if (piVar9 == (int *)*piVar7) {
              *piVar7 = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
            else {
              piVar7[2] = (int)piVar2;
              *piVar2 = (int)piVar9;
              *piVar10 = (int)piVar2;
              piVar8 = piVar9;
              piVar9 = piVar2;
              piVar7 = piVar10;
            }
          }
        }
        *(undefined1 *)(piVar9 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
        piVar7 = *(int **)(*piVar7 + 4);
        piVar10 = (int *)*piVar7;
        *piVar7 = piVar10[2];
        if (*(char *)(piVar10[2] + 0xd) == '\0') {
          *(int **)(piVar10[2] + 4) = piVar7;
        }
        piVar10[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
        if (piVar7 == *(int **)(*this + 4)) {
          *(int **)(*this + 4) = piVar10;
          piVar10[2] = (int)piVar7;
        }
        else {
          piVar9 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar9[2]) {
            piVar9[2] = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
          else {
            *piVar9 = (int)piVar10;
            piVar10[2] = (int)piVar7;
          }
        }
        goto LAB_004084e5;
      }
LAB_0040843c:
      *(undefined1 *)(piVar9 + 3) = 1;
      *(undefined1 *)(iVar5 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar8 = *(int **)(*piVar7 + 4);
    }
    else {
      if (*(char *)(iVar5 + 0xc) == '\0') goto LAB_0040843c;
      piVar2 = (int *)*piVar9;
      piVar6 = piVar9;
      if (piVar8 == piVar2) {
        *piVar9 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar9;
        }
        piVar2[1] = *piVar10;
                    /* WARNING: Load size is inaccurate */
        if (piVar9 == (int *)*(int *)(*this + 4)) {
          *(int **)(*this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar10;
          if (piVar9 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar9;
        *piVar10 = (int)piVar2;
        piVar6 = piVar2;
        piVar8 = piVar9;
        piVar7 = piVar10;
      }
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar7 + 4);
      piVar10 = (int *)piVar7[2];
      piVar7[2] = *piVar10;
      if (*(char *)(*piVar10 + 0xd) == '\0') {
        *(int **)(*piVar10 + 4) = piVar7;
      }
      piVar10[1] = piVar7[1];
                    /* WARNING: Load size is inaccurate */
      if (piVar7 == *(int **)(*this + 4)) {
        *(int **)(*this + 4) = piVar10;
      }
      else {
        piVar9 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar9) {
          *piVar9 = (int)piVar10;
        }
        else {
          piVar9[2] = (int)piVar10;
        }
      }
      *piVar10 = (int)piVar7;
LAB_004084e5:
      piVar7[1] = (int)piVar10;
    }
    cVar1 = *(char *)(piVar8[1] + 0xc);
    piVar7 = (int *)this;
  } while( true );
}




void __thiscall FUN_00408520(void *this,undefined4 *param_1,char param_2,uint *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427bd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
                    /* WARNING: Load size is inaccurate */
  local_1c = true;
  piVar4 = (int *)(*this)[1];
  piVar2 = *this;
  while (*(char *)((int)piVar4 + 0xd) == '\0') {
    if (param_2 == '\0') {
      local_1c = *param_3 < (uint)piVar4[4];
    }
    else {
      local_1c = *param_3 <= (uint)piVar4[4];
    }
    piVar2 = piVar4;
    if (local_1c == false) {
      piVar4 = (int *)piVar4[2];
    }
    else {
      piVar4 = (int *)*piVar4;
    }
  }
  piVar4 = piVar2;
  if (local_1c != false) {
                    /* WARNING: Load size is inaccurate */
    if (piVar2 == (int *)**this) {
      local_1c = true;
      goto LAB_004085b7;
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      piVar4 = (int *)*piVar2;
      piVar3 = piVar2;
      if (*(char *)(*piVar2 + 0xd) == '\0') {
        do {
          piVar3 = piVar4;
          piVar4 = (int *)piVar3[2];
        } while (*(char *)(piVar3[2] + 0xd) == '\0');
      }
      else {
        do {
          piVar4 = piVar3;
          piVar3 = (int *)piVar4[1];
          if (*(char *)((int)piVar3 + 0xd) != '\0') break;
        } while (piVar4 == (int *)*piVar3);
        if (*(char *)((int)piVar4 + 0xd) != '\0') goto LAB_0040861e;
      }
    }
    else {
      piVar3 = (int *)piVar2[2];
    }
    piVar4 = piVar3;
  }
LAB_0040861e:
  if (*param_3 <= (uint)piVar4[4]) {
    FUN_00425f95(param_4);
    *param_1 = piVar4;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004085b7:
  puVar1 = (undefined4 *)FUN_00405c50(this,(undefined4 *)&param_2,local_1c,piVar2,this,param_4);
  *param_1 = *puVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}




void Catch_00408660(void)

{
  int unaff_EBP;
  
  FUN_00405b00(*(void **)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




int __fastcall
FUN_00408680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_00402df0();
  iVar2 = __stdio_common_vsprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,uVar3,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




void __thiscall FUN_004086b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00408680(param_1,param_2,param_3,this,&stack0x00000010);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004086d0(undefined4 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  void *extraout_ECX;
  void *this;
  void *extraout_ECX_00;
  void *this_00;
  CHAR local_1534 [4096];
  CHAR local_534 [1024];
  char local_134 [268];
  char local_28 [32];
  uint local_8;
  
  local_8 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  *param_1 = 0;
  param_1[1] = 0;
  memset(local_1534,0,0x1000);
  if ((DAT_004300d0 == 0) || (this_00 = extraout_ECX, DAT_0042fcd0 == '\0')) {
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = '\0';
    local_28[5] = '\0';
    local_28[6] = '\0';
    local_28[7] = '\0';
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    local_28[0xc] = '\0';
    local_28[0xd] = '\0';
    local_28[0xe] = '\0';
    local_28[0xf] = '\0';
    local_28[0x10] = '\0';
    local_28[0x11] = '\0';
    local_28[0x12] = '\0';
    local_28[0x13] = '\0';
    local_28[0x14] = '\0';
    local_28[0x15] = '\0';
    local_28[0x16] = '\0';
    local_28[0x17] = '\0';
    local_28[0x18] = '\0';
    local_28[0x19] = '\0';
    local_28[0x1a] = '\0';
    local_28[0x1b] = '\0';
    local_28[0x1c] = '\0';
    local_28[0x1d] = '\0';
    local_28[0x1e] = '\0';
    local_28[0x1f] = '\0';
    memset(local_134,0,0x104);
    memset(local_534,0,0x400);
    GetModuleFileNameA((HMODULE)0x0,local_534,0x3ff);
    _splitpath_s(local_534,local_28,0x20,local_134,0x104,(char *)0x0,0,(char *)0x0,0);
    DAT_004300d0 = FUN_004086b0(this,&DAT_0042fcd0,0x3ff,&DAT_0042a894);
    this_00 = extraout_ECX_00;
  }
  FUN_00408880(this_00,local_1534,&DAT_0042a894);
  hModule = LoadLibraryA(local_1534);
  *param_1 = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"EnhanceMemData");
    param_1[1] = pFVar1;
    pFVar1 = GetProcAddress((HMODULE)*param_1,"EUCalcDamageProportion");
    param_1[2] = pFVar1;
    pFVar1 = GetProcAddress((HMODULE)*param_1,"EUbeSimilarPictures");
    param_1[3] = pFVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




void __fastcall FUN_00408830(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
  }
  ExceptionList = local_10;
  return;
}




void __thiscall FUN_00408880(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_00408680(param_1,0x1000,param_2,this,&stack0x0000000c);
  return;
}




undefined4 * __thiscall FUN_004088a0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427bf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CRAWAnalyzer::vftable;
  local_8 = 0xffffffff;
  *(undefined ***)this = IImgAnalyzer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00425f95(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)this;
}




undefined4 FUN_00408910(void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427c28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  ExceptionList = local_10;
  return 0;
}




undefined1 FUN_004089a0(void)

{
  return 0;
}




undefined4 FUN_004089b0(void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00427c28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  if (7 < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pvVar1);
  }
  ExceptionList = local_10;
  return 0;
}




undefined1 FUN_00408a40(void)

{
  return 0;
}




undefined4 * FUN_00408a50(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427c5c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*ThreadLocalStoragePointer + 4) < DAT_004300ec) {
    FUN_00426439(&DAT_004300ec);
    if (DAT_004300ec == -1) {
      local_8 = 0;
      DAT_004300f0 = (void *)0x0;
      DAT_004300f8 = (void *)0x0;
      DAT_00430100 = (void *)0x0;
      DAT_004300f4 = 0x3201000;
      DAT_00430104 = 0x3201000;
      DAT_004300fc = 0x3201000;
      DAT_0043010c = 0x3201000;
      DAT_004300f0 = (void *)FUN_00426250(0x3201000);
      memset(DAT_004300f0,0,DAT_004300f4);
      DAT_00430100 = (void *)FUN_00426250(DAT_00430104);
      memset(DAT_00430100,0,DAT_00430104);
      DAT_004300f8 = (void *)FUN_00426250(DAT_004300fc);
      memset(DAT_004300f8,0,DAT_004300fc);
      DAT_00430108 = (void *)FUN_00426250(DAT_0043010c);
      memset(DAT_00430108,0,DAT_0043010c);
      _atexit((_func_4879 *)&LAB_00428400);
      local_8 = 0xffffffff;
      FUN_004263ef(&DAT_004300ec);
    }
  }
  ExceptionList = local_10;
  return &DAT_004300f0;
}




DWORD FUN_00408ba0(LPCWSTR param_1)

{
  DWORD DVar1;
  LPCWSTR *lpApplicationName;
  BOOL BVar2;
  LPCWSTR pWVar3;
  LPWSTR pWVar4;
  undefined4 uStack00000014;
  uint in_stack_00000018;
  LPWSTR in_stack_0000001c;
  uint in_stack_00000030;
  _STARTUPINFOW local_68;
  _PROCESS_INFORMATION local_24;
  DWORD local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427c90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  local_14 = 0;
  memset(&local_68,0,0x44);
  local_68.cb = 0x44;
  pWVar4 = (LPWSTR)&stack0x0000001c;
  if (7 < in_stack_00000030) {
    pWVar4 = in_stack_0000001c;
  }
  lpApplicationName = &param_1;
  if (7 < in_stack_00000018) {
    lpApplicationName = (LPCWSTR *)param_1;
  }
  local_24.hProcess = (HANDLE)0x0;
  local_24.hThread = (HANDLE)0x0;
  local_24.dwProcessId = 0;
  local_24.dwThreadId = 0;
  BVar2 = CreateProcessW((LPCWSTR)lpApplicationName,pWVar4,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_68,&local_24
                        );
  if (BVar2 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    BVar2 = GetExitCodeProcess(local_24.hProcess,&local_14);
    if (BVar2 == 0) {
      local_14 = 0xffffffff;
    }
    else {
      CloseHandle(local_24.hProcess);
      CloseHandle(local_24.hThread);
      local_24.hProcess = (HANDLE)0x0;
      local_24.hThread = (HANDLE)0x0;
      local_24.dwProcessId = 0;
      local_24.dwThreadId = 0;
    }
  }
  DVar1 = local_14;
  local_8 = local_8 & 0xffffff00;
  if (7 < in_stack_00000018) {
    pWVar3 = param_1;
    if (0xfff < in_stack_00000018 * 2 + 2) {
      pWVar3 = *(LPCWSTR *)(param_1 + -2);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pWVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pWVar3);
  }
  uStack00000014 = 0;
  in_stack_00000018 = 7;
  param_1 = (LPCWSTR)((uint)param_1 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < in_stack_00000030) {
    pWVar4 = in_stack_0000001c;
    if (0xfff < in_stack_00000030 * 2 + 2) {
      pWVar4 = *(LPWSTR *)(in_stack_0000001c + -2);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)pWVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_00425f95(pWVar4);
  }
  ExceptionList = local_10;
  return DVar1;
}




void FUN_00408d40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  WCHAR WVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  WCHAR *pWVar5;
  LPCWSTR in_stack_fffffcd8;
  undefined1 auStack_310 [12];
  undefined4 uStack_304;
  void *local_2e0 [4];
  undefined4 local_2d0;
  uint local_2cc;
  void *local_2c8 [4];
  undefined4 local_2b8;
  uint local_2b4;
  void *local_2b0 [4];
  undefined4 local_2a0;
  uint local_29c;
  void *local_298 [4];
  undefined4 local_288;
  uint local_284;
  void *local_280 [4];
  undefined4 local_270;
  uint local_26c;
  void *local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  void *local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  void *local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  WCHAR local_220;
  undefined1 local_21e [522];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00427ddf;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_270 = 0;
  local_26c = 7;
  local_280[0] = (void *)((uint)local_280[0] & 0xffff0000);
  local_8 = 0;
  if (param_3[4] == 0) {
    puVar2 = FUN_0040b0a0(&local_268,param_1);
    local_8._0_1_ = 2;
    puVar2 = FUN_0040b6e0(puVar2,L"\" Activity \"");
    local_250 = (void *)*puVar2;
    uStack_24c = puVar2[1];
    uStack_248 = puVar2[2];
    uStack_244 = puVar2[3];
    local_240 = *(undefined8 *)(puVar2 + 4);
    puVar2[4] = 0;
    puVar2[5] = 7;
    *(undefined2 *)puVar2 = 0;
    puVar2 = FUN_0040b230(local_298,&local_250,param_2);
    local_8._0_1_ = 4;
    puVar2 = FUN_0040b6e0(puVar2,(short *)&DAT_0042a944);
    local_238 = (void *)*puVar2;
    uStack_234 = puVar2[1];
    uStack_230 = puVar2[2];
    uStack_22c = puVar2[3];
    local_228 = *(undefined8 *)(puVar2 + 4);
    puVar2[4] = 0;
    puVar2[5] = 7;
    *(undefined2 *)puVar2 = 0;
    FUN_0040ae20(local_280,(int *)&local_238);
    local_8._0_1_ = 3;
    if (7 < local_228._4_4_) {
      pvVar4 = local_238;
      if (0xfff < local_228._4_4_ * 2 + 2) {
        pvVar4 = *(void **)((int)local_238 + -4);
        if (0x1f < (uint)((int)local_238 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x408efa;
      FUN_00425f95(pvVar4);
    }
    local_228 = 0x700000000;
    local_238 = (void *)((uint)local_238 & 0xffff0000);
    local_8._0_1_ = 2;
    if (7 < local_284) {
      pvVar4 = local_298[0];
      if (0xfff < local_284 * 2 + 2) {
        pvVar4 = *(void **)((int)local_298[0] + -4);
        if (0x1f < (uint)((int)local_298[0] + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x408f5d;
      FUN_00425f95(pvVar4);
    }
    local_288 = 0;
    local_284 = 7;
    local_298[0] = (void *)((uint)local_298[0] & 0xffff0000);
    local_8._0_1_ = 1;
    if (7 < local_240._4_4_) {
      pvVar4 = local_250;
      if (0xfff < local_240._4_4_ * 2 + 2) {
        pvVar4 = *(void **)((int)local_250 + -4);
        if (0x1f < (uint)((int)local_250 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x408fc9;
      FUN_00425f95(pvVar4);
    }
    local_240 = 0x700000000;
    local_250 = (void *)((uint)local_250 & 0xffff0000);
    local_8 = (uint)local_8._1_3_ << 8;
    if (7 < local_258._4_4_) {
      pvVar4 = local_268;
      if (0xfff < local_258._4_4_ * 2 + 2) {
        pvVar4 = *(void **)((int)local_268 + -4);
        if (0x1f < (uint)((int)local_268 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x40902b;
      FUN_00425f95(pvVar4);
    }
    local_258 = 0x700000000;
    local_268 = (void *)((uint)local_268 & 0xffff0000);
  }
  else {
    FUN_00401ad0(local_298,param_3);
    local_8._0_1_ = 5;
    puVar2 = FUN_0040b0a0(local_2e0,param_1);
    local_8._0_1_ = 7;
    puVar2 = FUN_0040b6e0(puVar2,L"\" Activity \"");
    local_268 = (void *)*puVar2;
    uStack_264 = puVar2[1];
    uStack_260 = puVar2[2];
    uStack_25c = puVar2[3];
    local_258 = *(undefined8 *)(puVar2 + 4);
    puVar2[4] = 0;
    puVar2[5] = 7;
    *(undefined2 *)puVar2 = 0;
    puVar2 = FUN_0040b230(local_2c8,&local_268,param_2);
    local_8._0_1_ = 9;
    puVar2 = FUN_0040b6e0(puVar2,L"\" Attribute \"{");
    local_238 = (void *)*puVar2;
    uStack_234 = puVar2[1];
    uStack_230 = puVar2[2];
    uStack_22c = puVar2[3];
    local_228 = *(undefined8 *)(puVar2 + 4);
    puVar2[4] = 0;
    puVar2[5] = 7;
    *(undefined2 *)puVar2 = 0;
    puVar2 = FUN_0040b230(local_2b0,&local_238,local_298);
    local_8._0_1_ = 0xb;
    puVar2 = FUN_0040b6e0(puVar2,(short *)&DAT_0042a98c);
    local_250 = (void *)*puVar2;
    uStack_24c = puVar2[1];
    uStack_248 = puVar2[2];
    uStack_244 = puVar2[3];
    local_240 = *(undefined8 *)(puVar2 + 4);
    puVar2[4] = 0;
    puVar2[5] = 7;
    *(undefined2 *)puVar2 = 0;
    FUN_0040ae20(local_280,(int *)&local_250);
    local_8._0_1_ = 10;
    if (7 < local_240._4_4_) {
      pvVar4 = local_250;
      if (0xfff < local_240._4_4_ * 2 + 2) {
        pvVar4 = *(void **)((int)local_250 + -4);
        if (0x1f < (uint)((int)local_250 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x409210;
      FUN_00425f95(pvVar4);
    }
    local_240 = 0x700000000;
    local_250 = (void *)((uint)local_250 & 0xffff0000);
    local_8._0_1_ = 9;
    if (7 < local_29c) {
      pvVar4 = local_2b0[0];
      if (0xfff < local_29c * 2 + 2) {
        pvVar4 = *(void **)((int)local_2b0[0] + -4);
        if (0x1f < (uint)((int)local_2b0[0] + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x409273;
      FUN_00425f95(pvVar4);
    }
    local_2a0 = 0;
    local_29c = 7;
    local_2b0[0] = (void *)((uint)local_2b0[0] & 0xffff0000);
    local_8._0_1_ = 8;
    if (7 < local_228._4_4_) {
      pvVar4 = local_238;
      if (0xfff < local_228._4_4_ * 2 + 2) {
        pvVar4 = *(void **)((int)local_238 + -4);
        if (0x1f < (uint)((int)local_238 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x4092df;
      FUN_00425f95(pvVar4);
    }
    local_228 = 0x700000000;
    local_238 = (void *)((uint)local_238 & 0xffff0000);
    local_8._0_1_ = 7;
    if (7 < local_2b4) {
      pvVar4 = local_2c8[0];
      if (0xfff < local_2b4 * 2 + 2) {
        pvVar4 = *(void **)((int)local_2c8[0] + -4);
        if (0x1f < (uint)((int)local_2c8[0] + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x409342;
      FUN_00425f95(pvVar4);
    }
    local_2b8 = 0;
    local_2b4 = 7;
    local_2c8[0] = (void *)((uint)local_2c8[0] & 0xffff0000);
    local_8._0_1_ = 6;
    if (7 < local_258._4_4_) {
      pvVar4 = local_268;
      if (0xfff < local_258._4_4_ * 2 + 2) {
        pvVar4 = *(void **)((int)local_268 + -4);
        if (0x1f < (uint)((int)local_268 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x4093ae;
      FUN_00425f95(pvVar4);
    }
    local_258 = 0x700000000;
    local_268 = (void *)((uint)local_268 & 0xffff0000);
    local_8._0_1_ = 5;
    if (7 < local_2cc) {
      pvVar4 = local_2e0[0];
      if (0xfff < local_2cc * 2 + 2) {
        pvVar4 = *(void **)((int)local_2e0[0] + -4);
        if (0x1f < (uint)((int)local_2e0[0] + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x409411;
      FUN_00425f95(pvVar4);
    }
    local_2d0 = 0;
    local_2cc = 7;
    local_2e0[0] = (void *)((uint)local_2e0[0] & 0xffff0000);
    local_8 = (uint)local_8._1_3_ << 8;
    if (7 < local_284) {
      pvVar4 = local_298[0];
      if (0xfff < local_284 * 2 + 2) {
        pvVar4 = *(void **)((int)local_298[0] + -4);
        if (0x1f < (uint)((int)local_298[0] + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      uStack_304 = 0x409473;
      FUN_00425f95(pvVar4);
    }
    local_288 = 0;
    local_284 = 7;
    local_298[0] = (void *)((uint)local_298[0] & 0xffff0000);
  }
  FUN_00401ad0(auStack_310,local_280);
  local_8._1_3_ = (uint3)((uint)local_8 >> 8);
  local_8._0_1_ = 0xd;
  memset(&local_220,0,0x20a);
  GetModuleFileNameW((HMODULE)0x0,&local_220,0x104);
  pwVar3 = wcsrchr(&local_220,L'\\');
  pwVar3[1] = L'\0';
  pWVar5 = &local_220;
  local_228._0_4_ = 0;
  local_228._4_4_ = 7;
  local_238 = (void *)((uint)local_238 & 0xffff0000);
  do {
    WVar1 = *pWVar5;
    pWVar5 = pWVar5 + 1;
  } while (WVar1 != L'\0');
  FUN_00401bb0(&local_238,&local_220,(int)pWVar5 - (int)local_21e >> 1);
  FUN_0040b1a0((undefined4 *)&stack0xfffffcd8,&local_238,L"aliyun\\InfoForSetup.exe");
  local_8._0_1_ = 0xf;
  FUN_00408ba0(in_stack_fffffcd8);
  local_8 = (uint)local_8._1_3_ << 8;
  if (7 < local_228._4_4_) {
    pvVar4 = local_238;
    if (0xfff < local_228._4_4_ * 2 + 2) {
      pvVar4 = *(void **)((int)local_238 + -4);
      if (0x1f < (uint)((int)local_238 + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_304 = 0x4095c4;
    FUN_00425f95(pvVar4);
  }
  local_228 = 0x700000000;
  local_238 = (void *)((uint)local_238 & 0xffff0000);
  local_8 = 0xffffffff;
  if (7 < local_26c) {
    pvVar4 = local_280[0];
    if (0xfff < local_26c * 2 + 2) {
      pvVar4 = *(void **)((int)local_280[0] + -4);
      if (0x1f < (uint)((int)local_280[0] + (-4 - (int)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_304 = 0x40962a;
    FUN_00425f95(pvVar4);
  }
  local_270 = 0;
  local_26c = 7;
  local_280[0] = (void *)((uint)local_280[0] & 0xffff0000);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00409670(undefined2 *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  wchar_t **ppwVar4;
  int in_stack_00000018;
  uint in_stack_0000001c;
  wchar_t local_3c [20];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427e31;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 7;
  *param_1 = 0;
  FUN_00401bb0(param_1,&DAT_0042a454,0);
  if (in_stack_00000018 != 0) {
    ppwVar2 = &param_2;
    ppwVar4 = &param_2;
    if (7 < in_stack_0000001c) {
      ppwVar2 = (wchar_t **)param_2;
      ppwVar4 = (wchar_t **)param_2;
    }
    for (; in_stack_00000018 != 0; in_stack_00000018 = in_stack_00000018 + -1) {
      if (*(short *)ppwVar2 == 0x2e) {
        if ((ppwVar2 != (wchar_t **)0x0) && ((int)ppwVar2 - (int)ppwVar4 >> 1 != -1)) {
          ppwVar2 = &param_2;
          if (7 < in_stack_0000001c) {
            ppwVar2 = (wchar_t **)param_2;
          }
          local_3c[0] = L'\0';
          local_3c[1] = L'\0';
          local_3c[2] = L'\0';
          local_3c[3] = L'\0';
          local_3c[4] = L'\0';
          local_3c[5] = L'\0';
          local_3c[6] = L'\0';
          local_3c[7] = L'\0';
          local_3c[8] = L'\0';
          local_3c[9] = L'\0';
          local_3c[10] = L'\0';
          local_3c[0xb] = L'\0';
          local_3c[0xc] = L'\0';
          local_3c[0xd] = L'\0';
          local_3c[0xe] = L'\0';
          local_3c[0xf] = L'\0';
          local_3c[0x10] = L'\0';
          local_3c[0x11] = L'\0';
          local_3c[0x12] = L'\0';
          local_3c[0x13] = L'\0';
          _wsplitpath_s((wchar_t *)ppwVar2,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0,
                        local_3c,0x14);
          pwVar3 = local_3c;
          do {
            wVar1 = *pwVar3;
            pwVar3 = pwVar3 + 1;
          } while (wVar1 != L'\0');
          FUN_00401bb0(param_1,local_3c,(int)pwVar3 - (int)(local_3c + 1) >> 1);
        }
        break;
      }
      ppwVar2 = (wchar_t **)((int)ppwVar2 + 2);
    }
  }
  local_8 = local_8 & 0xffffff00;
  if (7 < in_stack_0000001c) {
    pwVar3 = param_2;
    if ((0xfff < in_stack_0000001c * 2 + 2) &&
       (pwVar3 = *(wchar_t **)(param_2 + -2), 0x1f < (uint)((int)param_2 + (-4 - (int)pwVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pwVar3);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 7;
  param_2 = (wchar_t *)((uint)param_2 & 0xffff0000);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00409a8a) */
/* WARNING: Removing unreachable block (ram,0x00409a93) */
/* WARNING: Removing unreachable block (ram,0x00409a98) */
/* WARNING: Removing unreachable block (ram,0x00409aa0) */

void __thiscall FUN_004097e0(void *this,void *param_1)

{
  size_t _Count;
  char cVar1;
  errno_t eVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  wchar_t *****pppppwVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  wchar_t ****ppppwVar9;
  void *pvVar10;
  undefined4 *puVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *in_stack_0000001c;
  char *in_stack_ffffff44;
  char *pcStack_ac;
  wchar_t *in_stack_ffffff5c;
  wchar_t *pwVar12;
  wchar_t ****local_68 [4];
  undefined4 local_58;
  uint local_54;
  size_t local_50;
  FILE *local_4c;
  char local_45;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00427ec8;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00401bb0(in_stack_0000001c,&DAT_0042a454,0);
  if (3 < in_stack_00000014) {
    FUN_00401ad0(local_68,&param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
    pppppwVar6 = local_68;
    if (7 < local_54) {
      pppppwVar6 = (wchar_t *****)local_68[0];
    }
    local_4c = (FILE *)0x0;
    eVar2 = _wfopen_s(&local_4c,(wchar_t *)pppppwVar6,L"r");
    if (eVar2 == 0) {
      fseek(local_4c,0,2);
      ftell(local_4c);
      in_stack_ffffff5c = L"쒃옔ﱅ謀끕廙爈謴鱍ᒍɕ";
      fclose(local_4c);
    }
    local_8 = local_8 & 0xffffff00;
    if (7 < local_54) {
      pppppwVar6 = (wchar_t *****)local_68[0];
      if ((0xfff < local_54 * 2 + 2) &&
         (pppppwVar6 = (wchar_t *****)local_68[0][-1],
         0x1f < (uint)((int)local_68[0] + (-4 - (int)pppppwVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pppppwVar6);
    }
    local_4c = (FILE *)&stack0xffffff5c;
    local_58 = 0;
    local_68[0] = (wchar_t ****)((uint)local_68[0] & 0xffff0000);
    local_54 = 7;
    pcStack_ac = (char *)0x4098f1;
    FUN_00401ad0(&stack0xffffff5c,&param_1);
    local_8 = local_8 & 0xffffff00;
    pcStack_ac = (char *)0x409902;
    FUN_00409670((undefined2 *)local_44,in_stack_ffffff5c);
    local_8._0_1_ = 3;
    FUN_00401ad0(local_68,&param_1);
    local_8._0_1_ = 4;
    piVar3 = FUN_00402e00();
    local_8._0_1_ = 5;
    local_4c = (FILE *)&stack0xffffff5c;
    local_45 = '\x01';
    pcStack_ac = (char *)0x409936;
    FUN_00401ad0(&stack0xffffff5c,local_68);
    local_8._0_1_ = 5;
    iVar4 = FUN_004032a0(piVar3,in_stack_ffffff5c);
    puVar5 = (undefined4 *)*piVar3;
    puVar7 = (undefined4 *)puVar5[1];
    puVar11 = puVar5;
    if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
      do {
        if ((int)puVar7[4] < iVar4) {
          puVar8 = (undefined4 *)puVar7[2];
        }
        else {
          puVar8 = (undefined4 *)*puVar7;
          puVar11 = puVar7;
        }
        puVar7 = puVar8;
      } while (*(char *)((int)puVar8 + 0xd) == '\0');
      if (((puVar11 != puVar5) && ((int)puVar11[4] <= iVar4)) &&
         (piVar3 = (int *)puVar11[5], piVar3 != (int *)0x0)) {
        local_4c = (FILE *)&pcStack_ac;
        *(undefined1 *)(piVar3 + 1) = 0;
        FUN_00401ad0(&pcStack_ac,local_68);
        local_8._0_1_ = 5;
        local_45 = (**(code **)(*piVar3 + 4))();
      }
    }
    local_8._0_1_ = 3;
    if (7 < local_54) {
      ppppwVar9 = local_68[0];
      if ((0xfff < local_54 * 2 + 2) &&
         (ppppwVar9 = (wchar_t ****)local_68[0][-1],
         0x1f < (uint)((int)local_68[0] + (-4 - (int)ppppwVar9)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(ppppwVar9);
    }
    local_58 = 0;
    local_54 = 7;
    local_68[0] = (wchar_t ****)((uint)local_68[0] & 0xffff0000);
    if (local_45 == '\0') {
      pwVar12 = *(wchar_t **)((int)this + 4);
      local_4c = (FILE *)&stack0xffffff44;
      FUN_00401ad0(&stack0xffffff44,&param_1);
      local_8._0_1_ = 8;
      puVar5 = FUN_00402e00();
      local_8._0_1_ = 3;
      cVar1 = FUN_00403160(puVar5,in_stack_ffffff44);
      if (cVar1 != '\0') {
        local_50 = *(size_t *)((int)this + 0xc);
        local_4c = (FILE *)0x0;
        FUN_0040b830();
                    /* WARNING: Load size is inaccurate */
        pcStack_ac = (char *)0x409a7d;
        cVar1 = FUN_0040b8c0(*this,(int)pwVar12,0,*(int *)((int)this + 8),(int *)&local_50);
        _Count = local_50;
        if (cVar1 != '\0') {
          local_4c = (FILE *)&stack0xffffff5c;
          pcStack_ac = (char *)0x409ac8;
          FUN_00401ad0(&stack0xffffff5c,&param_1);
          local_8._0_1_ = 3;
          pcStack_ac = (char *)0x409ad9;
          FUN_0040a950(local_2c,pwVar12);
          local_8._0_1_ = 10;
          if (local_1c == 0) {
            local_8._0_1_ = 3;
            if (7 < local_18) {
              pvVar10 = local_2c[0];
              if ((0xfff < local_18 * 2 + 2) &&
                 (pvVar10 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_00425f95(pvVar10);
            }
            local_1c = 0;
            local_18 = 7;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
          }
          else {
            std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            operator=(in_stack_0000001c,
                      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_2c);
            FUN_00401ad0(local_68,local_2c);
            pvVar10 = *(void **)((int)this + 8);
            local_8 = CONCAT31(local_8._1_3_,0xc);
            pppppwVar6 = local_68;
            if (7 < local_54) {
              pppppwVar6 = (wchar_t *****)local_68[0];
            }
            local_4c = (FILE *)0x0;
            eVar2 = _wfopen_s(&local_4c,(wchar_t *)pppppwVar6,L"wb");
            if ((eVar2 == 0) && (local_4c != (FILE *)0x0)) {
              fwrite(pvVar10,1,_Count,local_4c);
              fclose(local_4c);
            }
            local_8._0_1_ = 10;
            if (7 < local_54) {
              pppppwVar6 = (wchar_t *****)local_68[0];
              if ((0xfff < local_54 * 2 + 2) &&
                 (pppppwVar6 = (wchar_t *****)local_68[0][-1],
                 0x1f < (uint)((int)local_68[0] + (-4 - (int)pppppwVar6)))) goto LAB_00409bbc;
              FUN_00425f95(pppppwVar6);
            }
            local_54 = 7;
            local_58 = 0;
            local_68[0] = (wchar_t ****)((uint)local_68[0] & 0xffff0000);
            local_8._0_1_ = 3;
            if (7 < local_18) {
              pvVar10 = local_2c[0];
              if ((0xfff < local_18 * 2 + 2) &&
                 (pvVar10 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10)))) goto LAB_00409bbc;
              FUN_00425f95(pvVar10);
            }
            local_1c = 0;
            local_18 = 7;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
          }
        }
      }
    }
    local_8._0_1_ = 0;
    if (7 < local_30) {
      pvVar10 = local_44[0];
      if ((0xfff < local_30 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10)))) goto LAB_00409bbc;
      FUN_00425f95(pvVar10);
    }
    local_30 = 7;
    local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
    local_34 = 0;
  }
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (7 < in_stack_00000018) {
    pvVar10 = param_1;
    if ((0xfff < in_stack_00000018 * 2 + 2) &&
       (pvVar10 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar10))))
    {
LAB_00409bbc:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 7;
  param_1 = (void *)((uint)param_1 & 0xffff0000);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0040a5d7) */
/* WARNING: Removing unreachable block (ram,0x0040a5fd) */
/* WARNING: Removing unreachable block (ram,0x0040a604) */
/* WARNING: Removing unreachable block (ram,0x0040a699) */
/* WARNING: Removing unreachable block (ram,0x0040a6b0) */
/* WARNING: Removing unreachable block (ram,0x0040a6c0) */
/* WARNING: Removing unreachable block (ram,0x0040a6c6) */
/* WARNING: Removing unreachable block (ram,0x0040a6d0) */
/* WARNING: Removing unreachable block (ram,0x0040a6fc) */
/* WARNING: Removing unreachable block (ram,0x0040a713) */
/* WARNING: Removing unreachable block (ram,0x0040a723) */
/* WARNING: Removing unreachable block (ram,0x0040a729) */
/* WARNING: Removing unreachable block (ram,0x0040a733) */
/* WARNING: Removing unreachable block (ram,0x0040a75f) */
/* WARNING: Removing unreachable block (ram,0x0040a776) */
/* WARNING: Removing unreachable block (ram,0x0040a786) */
/* WARNING: Removing unreachable block (ram,0x0040a78c) */
/* WARNING: Removing unreachable block (ram,0x0040a796) */
/* WARNING: Removing unreachable block (ram,0x0040a7c2) */
/* WARNING: Removing unreachable block (ram,0x0040a7ca) */
/* WARNING: Removing unreachable block (ram,0x0040a7d2) */

void __thiscall FUN_00409d10(void *this,undefined4 *param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  size_t _Size;
  DWORD DVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char ****ppppcVar8;
  undefined4 *puVar9;
  void *pvVar10;
  char ****ppppcVar11;
  short *psVar12;
  wchar_t *pwVar13;
  undefined4 local_310;
  size_t local_2e8;
  undefined4 *local_2e4;
  char *local_2e0;
  DWORD local_2dc;
  int local_2d8;
  int local_2d4;
  char local_2cd;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined4 local_2bc;
  DWORD DStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined8 local_2ac;
  char ***local_2a4 [4];
  undefined4 local_294;
  uint local_290;
  void *local_28c [4];
  undefined4 local_27c;
  uint local_278;
  undefined4 local_274 [2];
  int local_26c;
  int local_268;
  void *local_264;
  DWORD local_260;
  size_t local_25c;
  undefined4 *local_258;
  undefined4 local_254;
  uint local_250;
  void *local_24c [4];
  undefined4 local_23c;
  uint local_238;
  void *local_234 [4];
  undefined4 local_224;
  uint local_220;
  short local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00427f8a;
  local_10 = ExceptionList;
  local_310 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2e4 = param_1;
  local_14 = local_310;
  if ((param_1 == (undefined4 *)0x0) || (param_3 == (void *)0x0)) goto LAB_0040a924;
  local_2cc = *param_1;
  uStack_2c8 = param_1[1];
  local_2d4 = param_1[2];
  local_2d8 = param_1[3];
  local_2ac = *(undefined8 *)(param_1 + 8);
  local_2bc = param_1[4];
  local_2dc = param_1[5];
  uStack_2b4 = param_1[6];
  uStack_2b0 = param_1[7];
  iStack_2c4 = local_2d4;
  iStack_2c0 = local_2d8;
  DStack_2b8 = local_2dc;
  FUN_0040af50(local_2a4,(char *)&local_2ac);
  local_8 = 0;
  ppppcVar11 = local_2a4;
  if ((local_290 < 0x10) ||
     (ppppcVar11 = (char ****)local_2a4[0], (char ****)local_2a4[0] != (char ****)0x0)) {
    ppppcVar8 = ppppcVar11;
    do {
      cVar3 = *(char *)ppppcVar8;
      ppppcVar8 = (char ****)((int)ppppcVar8 + 1);
    } while (cVar3 != '\0');
    local_2e0 = (char *)((int)ppppcVar8 + (1 - (int)((int)ppppcVar11 + 1)));
    if (0x3fffffff < (int)local_2e0) goto LAB_00409e4f;
    iVar4 = (int)local_2e0 * -2;
    psVar12 = (short *)&local_310;
    if (&stack0x00000000 == (undefined1 *)0x310) goto LAB_00409e4f;
    *(char **)(&stack0xfffffcec + iVar4) = local_2e0;
    *(undefined4 **)(&stack0xfffffce8 + iVar4) = &local_310;
    *(undefined4 *)(&stack0xfffffce4 + iVar4) = 0xffffffff;
    *(char *****)(&stack0xfffffce0 + iVar4) = ppppcVar11;
    *(undefined4 *)(&stack0xfffffcdc + iVar4) = 0;
    *(undefined4 *)(&stack0xfffffcd8 + iVar4) = 3;
    local_310 = (uint)local_310._2_2_ << 0x10;
    *(undefined4 *)(&stack0xfffffcd4 + iVar4) = 0x409e46;
    iVar4 = MultiByteToWideChar(*(UINT *)(&stack0xfffffcd8 + iVar4),
                                *(DWORD *)(&stack0xfffffcdc + iVar4),
                                *(LPCSTR *)(&stack0xfffffce0 + iVar4),
                                *(int *)(&stack0xfffffce4 + iVar4),
                                *(LPWSTR *)(&stack0xfffffce8 + iVar4),
                                *(int *)(&stack0xfffffcec + iVar4));
    if (iVar4 == 0) {
      psVar12 = (short *)0x0;
    }
  }
  else {
LAB_00409e4f:
    psVar12 = (short *)0x0;
  }
  FUN_00401a80(local_28c,psVar12);
  local_8 = CONCAT31(local_8._1_3_,1);
  DAT_0042f8b8 = local_2d4;
  DAT_0042f8bc = local_2d8;
  local_2e0 = (char *)(local_2e4 + 10);
  piVar5 = FUN_00402e00();
  DVar2 = local_2dc;
  local_2cd = '\0';
  puVar1 = (undefined4 *)*piVar5;
  puVar6 = (undefined4 *)puVar1[1];
  puVar9 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    do {
      if ((int)puVar6[4] < (int)local_2dc) {
        puVar7 = (undefined4 *)puVar6[2];
      }
      else {
        puVar7 = (undefined4 *)*puVar6;
        puVar9 = puVar6;
      }
      puVar6 = puVar7;
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
    if (((puVar9 != puVar1) && ((int)puVar9[4] <= (int)local_2dc)) &&
       (piVar5 = (int *)puVar9[5], piVar5 != (int *)0x0)) {
      *(undefined1 *)(piVar5 + 1) = 0;
      local_2cd = (**(code **)(*piVar5 + 8))();
    }
  }
  FUN_0040b760(local_2d4,local_2d8);
  if (local_2cd == '\0') {
    iVar4 = *(int *)((int)this + 0x14);
    local_2dc = GetTickCount();
    FUN_00401a80(&local_264,(short *)&DAT_0042a454);
    local_8._0_1_ = 2;
    FUN_00401a80(local_24c,L"Trigger_Repairimage_Begin");
    local_8._0_1_ = 3;
    FUN_00401a80(local_234,L"Scan");
    local_8._0_1_ = 4;
    FUN_00408d40(local_234,local_24c,&local_264);
    local_8._0_1_ = 3;
    if (7 < local_220) {
      pvVar10 = local_234[0];
      if ((0xfff < local_220 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_234[0] + -4),
         0x1f < (uint)((int)local_234[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar10);
    }
    local_224 = 0;
    local_220 = 7;
    local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
    local_8._0_1_ = 2;
    if (7 < local_238) {
      pvVar10 = local_24c[0];
      if ((0xfff < local_238 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_24c[0] + -4),
         0x1f < (uint)((int)local_24c[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar10);
    }
    local_23c = 0;
    local_238 = 7;
    local_24c[0] = (void *)((uint)local_24c[0] & 0xffff0000);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (7 < local_250) {
      pvVar10 = local_264;
      if ((0xfff < local_250 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_264 + -4),
         0x1f < (uint)((int)local_264 + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar10);
    }
    local_254 = 0;
    local_264 = (void *)((uint)local_264 & 0xffff0000);
    local_250 = 7;
    memset(local_21c,0,0x208);
    local_2e4 = *(undefined4 **)((int)this + 0x10);
    piVar5 = FUN_00402e00();
    local_2cd = '\0';
    puVar1 = (undefined4 *)*piVar5;
    puVar6 = (undefined4 *)puVar1[1];
    puVar9 = puVar1;
    if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
      do {
        if ((int)puVar6[4] < (int)DVar2) {
          puVar7 = (undefined4 *)puVar6[2];
        }
        else {
          puVar7 = (undefined4 *)*puVar6;
          puVar9 = puVar6;
        }
        puVar6 = puVar7;
      } while (*(char *)((int)puVar7 + 0xd) == '\0');
      if (((puVar9 != puVar1) && ((int)puVar9[4] <= (int)DVar2)) && ((int *)puVar9[5] != (int *)0x0)
         ) {
        local_2cd = (**(code **)(*(int *)puVar9[5] + 0x10))();
      }
    }
    if (local_2cd == '\0') {
      GetTickCount();
      FUN_0040b330(local_21c,
                   L"\\\"Elapsed\\\":\\\"%d\\\",\\\"Result\\\":\\\"failed\\\",\\\"Type\\\":\\\"%s\\\""
                  );
      FUN_00401a80(local_234,local_21c);
      local_8._0_1_ = 5;
      FUN_00401a80(local_24c,L"Trigger_Repairimage_End");
      local_8._0_1_ = 6;
      FUN_00401a80(&local_264,L"Scan");
      local_8._0_1_ = 7;
      FUN_00408d40(&local_264,local_24c,local_234);
      local_8._0_1_ = 6;
      if (7 < local_250) {
        pvVar10 = local_264;
        if ((0xfff < local_250 * 2 + 2) &&
           (pvVar10 = *(void **)((int)local_264 + -4),
           0x1f < (uint)((int)local_264 + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(pvVar10);
      }
      local_254 = 0;
      local_250 = 7;
      local_264 = (void *)((uint)local_264 & 0xffff0000);
      local_8._0_1_ = 5;
      if (7 < local_238) {
        pvVar10 = local_24c[0];
        if ((0xfff < local_238 * 2 + 2) &&
           (pvVar10 = *(void **)((int)local_24c[0] + -4),
           0x1f < (uint)((int)local_24c[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(pvVar10);
      }
      local_23c = 0;
      local_238 = 7;
      local_24c[0] = (void *)((uint)local_24c[0] & 0xffff0000);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (7 < local_220) {
        pvVar10 = local_234[0];
        if ((0xfff < local_220 * 2 + 2) &&
           (pvVar10 = *(void **)((int)local_234[0] + -4),
           0x1f < (uint)((int)local_234[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_00425f95(pvVar10);
      }
      local_224 = 0;
      local_220 = 7;
      local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
      FUN_0040b760(local_2d4,local_2d8);
      if (local_2cd == '\0') goto LAB_0040a863;
    }
    local_2e8 = *(size_t *)((int)this + 0x1c);
    local_2e4 = (undefined4 *)0x0;
    FUN_0040b830();
    cVar3 = FUN_0040b8c0(*(int *)((int)this + 0x10),iVar4,0,*(int *)((int)this + 0x18),
                         (int *)&local_2e8);
    if (cVar3 == '\0') {
      FUN_0040b760(local_2d4,local_2d8);
      GetTickCount();
      pwVar13 = 
      L"\\\"Elapsed\\\":\\\"%d\\\",\\\"Result\\\":\\\"2times_failed\\\",\\\"Type\\\":\\\"%s\\\"";
    }
    else {
      FUN_0040b760(local_2d4,local_2d8);
      GetTickCount();
      pwVar13 = 
      L"\\\"Elapsed\\\":\\\"%d\\\",\\\"Result\\\":\\\"2times_enlarged\\\",\\\"Type\\\":\\\"%s\\\"";
    }
    FUN_0040b330(local_21c,pwVar13);
    FUN_00401a80(local_234,local_21c);
    local_8._0_1_ = 8;
    FUN_00401a80(local_24c,L"Trigger_Repairimage_End");
    local_8._0_1_ = 9;
    FUN_00401a80(&local_264,L"Scan");
    local_8._0_1_ = 10;
    FUN_00408d40(&local_264,local_24c,local_234);
    local_8._0_1_ = 9;
    if (7 < local_250) {
      pvVar10 = local_264;
      if ((0xfff < local_250 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_264 + -4),
         0x1f < (uint)((int)local_264 + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar10);
    }
    local_254 = 0;
    local_250 = 7;
    local_264 = (void *)((uint)local_264 & 0xffff0000);
    local_8._0_1_ = 8;
    if (7 < local_238) {
      pvVar10 = local_24c[0];
      if ((0xfff < local_238 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_24c[0] + -4),
         0x1f < (uint)((int)local_24c[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar10);
    }
    local_23c = 0;
    local_238 = 7;
    local_24c[0] = (void *)((uint)local_24c[0] & 0xffff0000);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (7 < local_220) {
      pvVar10 = local_234[0];
      if ((0xfff < local_220 * 2 + 2) &&
         (pvVar10 = *(void **)((int)local_234[0] + -4),
         0x1f < (uint)((int)local_234[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar10);
    }
    _Size = local_2e8;
    local_224 = 0;
    local_220 = 7;
    local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
    if (cVar3 != '\0') {
      local_220 = 7;
      local_224 = 0;
      if ((local_2d4 == iStack_2c4) && (local_2d8 == iStack_2c0)) {
        local_260 = DVar2;
        local_274[0] = 0x28;
        local_26c = local_2d4;
        local_268 = local_2d8;
        local_264 = (void *)CONCAT31(local_264._1_3_,1);
        local_25c = local_2e8;
        local_258 = local_2e4;
        memcpy(param_3,local_274,0x28);
        memcpy((void *)((int)param_3 + 0x28),*(void **)((int)this + 0x18),_Size);
      }
    }
  }
LAB_0040a863:
  local_8 = local_8 & 0xffffff00;
  if (7 < local_278) {
    pvVar10 = local_28c[0];
    if ((0xfff < local_278 * 2 + 2) &&
       (pvVar10 = *(void **)((int)local_28c[0] + -4),
       0x1f < (uint)((int)local_28c[0] + (-4 - (int)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar10);
  }
  local_27c = 0;
  local_278 = 7;
  local_28c[0] = (void *)((uint)local_28c[0] & 0xffff0000);
  local_8 = 0xffffffff;
  if (0xf < local_290) {
    ppppcVar11 = (char ****)local_2a4[0];
    if ((0xfff < local_290 + 1) &&
       (ppppcVar11 = (char ****)local_2a4[0][-1],
       (char *)0x1f < (char *)((int)local_2a4[0] + (-4 - (int)ppppcVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(ppppcVar11);
  }
  local_294 = 0;
  local_290 = 0xf;
  local_2a4[0] = (char ***)((uint)local_2a4[0] & 0xffffff00);
LAB_0040a924:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0040a950(undefined4 *param_1,wchar_t *param_2)

{
  short sVar1;
  undefined1 uVar2;
  wchar_t **_FullPath;
  wchar_t *******pppppppwVar3;
  errno_t eVar4;
  short *psVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  wchar_t ******local_306c [4];
  uint local_305c;
  uint local_3058;
  FILE *local_3054;
  char local_304d;
  undefined4 local_304c;
  uint local_303c;
  uint local_3038;
  short local_3034;
  undefined1 local_3032 [8190];
  wchar_t local_1034 [1024];
  wchar_t local_834 [1024];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined2 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00428000;
  local_10 = ExceptionList;
  local_14 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  uStack_7 = 0;
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  FUN_00401bb0(param_1,&DAT_0042a454,0);
  if (3 < in_stack_00000018) {
    local_18 = 0;
    local_20 = 0;
    memset(local_1034,0,0x800);
    memset(local_834,0,0x800);
    local_24 = 0;
    local_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    memset(&local_3034,0,0x2000);
    _FullPath = &param_2;
    if (7 < in_stack_0000001c) {
      _FullPath = (wchar_t **)param_2;
    }
    _wsplitpath_s((wchar_t *)_FullPath,(wchar_t *)&local_20,5,local_1034,0x400,local_834,0x400,
                  (wchar_t *)&local_34,10);
    FUN_0040b370(&local_3034,L"%s%s%s_%s%s");
    iVar8 = 0;
    psVar5 = &local_3034;
    local_303c = 0;
    local_3038 = 7;
    local_304c = (undefined4 *)((uint)local_304c._2_2_ << 0x10);
    do {
      sVar1 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar1 != 0);
    FUN_00401bb0(&local_304c,&local_3034,(int)psVar5 - (int)local_3032 >> 1);
    do {
      local_8 = 2;
      psVar5 = &local_3034;
      local_305c = 0;
      local_3058 = 7;
      local_306c[0] = (wchar_t ******)((uint)local_306c[0] & 0xffff0000);
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      FUN_00401bb0(local_306c,&local_3034,(int)psVar5 - (int)local_3032 >> 1);
      local_8 = 3;
      local_304d = '\0';
      if (3 < local_305c) {
        pppppppwVar3 = local_306c;
        if (7 < local_3058) {
          pppppppwVar3 = (wchar_t *******)local_306c[0];
        }
        local_3054 = (FILE *)0x0;
        eVar4 = _wfopen_s(&local_3054,(wchar_t *)pppppppwVar3,L"r");
        if (eVar4 == 0) {
          local_304d = '\x01';
          fclose(local_3054);
        }
      }
      local_8 = 2;
      if (7 < local_3058) {
        pppppppwVar3 = (wchar_t *******)local_306c[0];
        if ((0xfff < local_3058 * 2 + 2) &&
           (pppppppwVar3 = (wchar_t *******)local_306c[0][-1], uVar2 = local_8,
           0x1f < (uint)((int)local_306c[0] + (-4 - (int)pppppppwVar3)))) goto LAB_0040ad74;
        FUN_00425f95(pppppppwVar3);
      }
      local_305c = 0;
      local_3058 = 7;
      local_306c[0] = (wchar_t ******)((uint)local_306c[0] & 0xffff0000);
      if (local_304d == '\0') break;
      FUN_0040b370(&local_3034,L"%s%s%s_%s_%d%s");
      iVar8 = iVar8 + 1;
      local_8 = 1;
      if (7 < local_3038) {
        puVar6 = local_304c;
        if ((0xfff < local_3038 * 2 + 2) &&
           (puVar6 = (undefined4 *)local_304c[-1], uVar2 = local_8,
           0x1f < (uint)((int)local_304c + (-4 - (int)puVar6)))) goto LAB_0040ad74;
        FUN_00425f95(puVar6);
      }
      local_303c = 0;
      local_304c = (undefined4 *)((uint)local_304c & 0xffff0000);
      psVar5 = &local_3034;
      local_3038 = 7;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      FUN_00401bb0(&local_304c,&local_3034,(int)psVar5 - (int)local_3032 >> 1);
      local_8 = 2;
    } while (iVar8 < 100000);
    if (param_1 != &local_304c) {
      puVar6 = &local_304c;
      if (7 < local_3038) {
        puVar6 = local_304c;
      }
      FUN_00401bb0(param_1,puVar6,local_303c);
    }
    local_8 = 1;
    if (7 < local_3038) {
      puVar6 = local_304c;
      if ((0xfff < local_3038 * 2 + 2) &&
         (puVar6 = (undefined4 *)local_304c[-1], uVar2 = local_8,
         0x1f < (uint)((int)local_304c + (-4 - (int)puVar6)))) goto LAB_0040ad74;
      FUN_00425f95(puVar6);
    }
    local_3038 = 7;
    local_304c = (undefined4 *)((uint)local_304c & 0xffff0000);
    local_303c = 0;
  }
  local_8 = 0;
  uVar2 = local_8;
  local_8 = 0;
  if (7 < in_stack_0000001c) {
    pwVar7 = param_2;
    if ((0xfff < in_stack_0000001c * 2 + 2) &&
       (pwVar7 = *(wchar_t **)(param_2 + -2), 0x1f < (uint)((int)param_2 + (-4 - (int)pwVar7)))) {
LAB_0040ad74:
      local_8 = uVar2;
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pwVar7);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 7;
  param_2 = (wchar_t *)((uint)param_2 & 0xffff0000);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}




int * __thiscall FUN_0040ae20(void *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00428030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int *)this != param_1) {
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar1 = *this;
      pvVar5 = pvVar1;
      if ((0xfff < *(uint *)((int)this + 0x14) * 2 + 2) &&
         (pvVar5 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_00425f95(pvVar5);
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined2 *)this = 0;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = iVar2;
    *(int *)((int)this + 8) = iVar3;
    *(int *)((int)this + 0xc) = iVar4;
    *(undefined8 *)((int)this + 0x10) = *(undefined8 *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
  }
  ExceptionList = local_10;
  return (int *)this;
}




void __fastcall FUN_0040aed0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00427250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  ExceptionList = local_10;
  return;
}




int * __thiscall FUN_0040af50(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  char *pcVar11;
  uint _Size;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  pcVar11 = param_1;
  do {
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar11 - (int)(param_1 + 1);
  uVar2 = *(uint *)((int)this + 0x14);
  if (_Size <= uVar2) {
    pvVar10 = this;
    if (0xf < uVar2) {
                    /* WARNING: Load size is inaccurate */
      pvVar10 = *this;
    }
    *(uint *)((int)this + 0x10) = _Size;
    memmove(pvVar10,param_1,_Size);
    *(undefined1 *)(_Size + (int)pvVar10) = 0;
    return (int *)this;
  }
  if (0x7fffffff < _Size) {
    FUN_00401cf0();
    pcVar3 = (code *)swi(3);
    piVar7 = (int *)(*pcVar3)();
    return piVar7;
  }
  uVar8 = _Size | 0xf;
  if (uVar8 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar9 = (uVar2 >> 1) + uVar2;
      if (uVar8 < uVar9) {
        uVar8 = uVar9;
      }
    }
  }
  else {
    uVar8 = 0x7fffffff;
  }
  uVar9 = uVar8 + 1;
  if (uVar9 < 0x1000) {
    if (uVar9 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = operator_new(uVar9);
    }
  }
  else {
    uVar4 = uVar8 + 0x24;
    if (uVar4 <= uVar9) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0040b085;
    pvVar10 = (void *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar10 - 4) = pvVar5;
  }
  *(uint *)((int)this + 0x10) = _Size;
  *(uint *)((int)this + 0x14) = uVar8;
  memcpy(pvVar10,param_1,_Size);
  *(undefined1 *)((int)pvVar10 + _Size) = 0;
  if (0xf < uVar2) {
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *this;
    pvVar6 = pvVar5;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((int)pvVar5 + -4), 0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar6)))) {
LAB_0040b085:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_00425f95(pvVar6);
  }
  *(void **)this = pvVar10;
  return (int *)this;
}




undefined4 * __thiscall FUN_0040b0a0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *_Src;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00428069;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined2 *)this = 0;
  local_8 = 0;
  FUN_0040b520(this,param_1[4] + 0x13);
  FUN_0040b6e0(this,L" /SendInfo Window \"");
  _Src = param_1;
  if (7 < (uint)param_1[5]) {
    _Src = (undefined4 *)*param_1;
  }
  iVar1 = *(int *)((int)this + 0x10);
  uVar2 = param_1[4];
  if (uVar2 <= (uint)(*(int *)((int)this + 0x14) - iVar1)) {
    *(uint *)((int)this + 0x10) = iVar1 + uVar2;
    pvVar3 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar3 = *this;
    }
    memmove((void *)((int)pvVar3 + iVar1 * 2),_Src,uVar2 * 2);
    *(undefined2 *)((int)pvVar3 + (iVar1 + uVar2) * 2) = 0;
    ExceptionList = local_10;
    return (undefined4 *)this;
  }
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  FUN_0040b3b0(this,uVar2,param_1,_Src,uVar2);
  ExceptionList = local_10;
  return (undefined4 *)this;
}




undefined4 * __fastcall FUN_0040b1a0(undefined4 *param_1,void *param_2,short *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004280a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = FUN_0040b6e0(param_2,param_3);
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar4 + 4);
  puVar4[4] = 0;
  puVar4[5] = 7;
  *(undefined2 *)puVar4 = 0;
  ExceptionList = local_10;
  return param_1;
}




undefined4 * __fastcall FUN_0040b230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *_Src;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004280e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _Src = param_3;
  if (7 < (uint)param_3[5]) {
    _Src = (undefined4 *)*param_3;
  }
  uVar1 = param_3[4];
  uVar2 = param_2[4];
  if (param_2[5] - uVar2 < uVar1) {
    param_3 = (undefined4 *)(uVar2 & 0xffffff00);
    param_2 = FUN_0040b3b0(param_2,uVar1,param_3,_Src,uVar1);
  }
  else {
    param_2[4] = uVar2 + uVar1;
    local_14 = param_2;
    if (7 < (uint)param_2[5]) {
      local_14 = (undefined4 *)*param_2;
    }
    memmove((void *)((int)local_14 + uVar2 * 2),_Src,uVar1 * 2);
    *(undefined2 *)((int)local_14 + (uVar2 + uVar1) * 2) = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_2[4] = 0;
  param_2[5] = 7;
  *(undefined2 *)param_2 = 0;
  ExceptionList = local_10;
  return param_1;
}




int __cdecl FUN_0040b330(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x0000000c;
  uVar4 = 0;
  uVar3 = 0x104;
  puVar1 = (undefined4 *)FUN_00402df0();
  iVar2 = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,uVar3,param_2,uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




int __cdecl FUN_0040b370(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x0000000c;
  uVar4 = 0;
  uVar3 = 0x1000;
  puVar1 = (undefined4 *)FUN_00402df0();
  iVar2 = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,uVar3,param_2,uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




undefined4 * __thiscall
FUN_0040b3b0(void *this,uint param_1,undefined4 param_2,void *param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  size_t _Size;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *_Dst;
  uint uVar9;
  void *pvVar10;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (0x7ffffffeU - iVar2 < param_1) {
    FUN_00401cf0();
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar4)();
    return puVar7;
  }
  uVar3 = *(uint *)((int)this + 0x14);
  uVar9 = iVar2 + param_1 | 7;
  if (uVar9 < 0x7fffffff) {
    if (0x7ffffffe - (uVar3 >> 1) < uVar3) {
      uVar9 = 0x7ffffffe;
    }
    else {
      uVar8 = (uVar3 >> 1) + uVar3;
      if (uVar9 < uVar8) {
        uVar9 = uVar8;
      }
    }
  }
  else {
    uVar9 = 0x7ffffffe;
  }
  uVar8 = (uVar9 + 1) * 2;
  if (uVar9 + 1 < 0x80000000) {
    if (0xfff < uVar8) goto LAB_0040b420;
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_0040b420:
    uVar5 = uVar8 + 0x23;
    if (uVar5 <= uVar8) {
      uVar5 = 0xffffffff;
    }
    pvVar6 = operator_new(uVar5);
    if (pvVar6 == (void *)0x0) goto LAB_0040b4e7;
    _Dst = (void *)((int)pvVar6 + 0x23U & 0xffffffe0);
    *(void **)((int)_Dst - 4) = pvVar6;
  }
  *(uint *)((int)this + 0x10) = iVar2 + param_1;
  *(uint *)((int)this + 0x14) = uVar9;
  _Size = iVar2 * 2;
  puVar1 = (undefined2 *)((int)_Dst + (param_4 + iVar2) * 2);
  if (uVar3 < 8) {
    memcpy(_Dst,this,_Size);
    memcpy((void *)(_Size + (int)_Dst),param_3,param_4 * 2);
    *puVar1 = 0;
    *(void **)this = _Dst;
    return (undefined4 *)this;
  }
                    /* WARNING: Load size is inaccurate */
  pvVar6 = *this;
  memcpy(_Dst,pvVar6,_Size);
  memcpy((void *)(_Size + (int)_Dst),param_3,param_4 * 2);
  *puVar1 = 0;
  pvVar10 = pvVar6;
  if ((uVar3 * 2 + 2 < 0x1000) ||
     (pvVar10 = *(void **)((int)pvVar6 + -4), (uint)((int)pvVar6 + (-4 - (int)pvVar10)) < 0x20)) {
    FUN_00425f95(pvVar10);
    *(void **)this = _Dst;
    return (undefined4 *)this;
  }
LAB_0040b4e7:
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




void __thiscall FUN_0040b520(void *this,uint param_1)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  void *pvVar9;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_1 < uVar1) {
    return;
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (uVar2 == param_1) {
    return;
  }
  if (param_1 <= uVar2) {
    if (7 < param_1) {
      return;
    }
    if (uVar2 < 8) {
      return;
    }
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *this;
    memcpy(this,pvVar7,uVar1 * 2 + 2);
    pvVar5 = pvVar7;
    if ((*(int *)((int)this + 0x14) * 2 + 2U < 0x1000) ||
       (pvVar5 = *(void **)((int)pvVar7 + -4), (uint)((int)pvVar7 + (-4 - (int)pvVar5)) < 0x20)) {
      FUN_00425f95(pvVar5);
      *(undefined4 *)((int)this + 0x14) = 7;
      return;
    }
    goto LAB_0040b6cf;
  }
  if (0x7ffffffe - uVar1 < param_1 - uVar1) {
    FUN_00401cf0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = param_1 | 7;
  if (uVar8 < 0x7fffffff) {
    if (0x7ffffffe - (uVar2 >> 1) < uVar2) {
      uVar8 = 0x7ffffffe;
    }
    else {
      uVar6 = (uVar2 >> 1) + uVar2;
      if (uVar8 < uVar6) {
        uVar8 = uVar6;
      }
    }
  }
  else {
    uVar8 = 0x7ffffffe;
  }
  uVar6 = (uVar8 + 1) * 2;
  if (uVar8 + 1 < 0x80000000) {
    if (0xfff < uVar6) goto LAB_0040b5b0;
    if (uVar6 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = operator_new(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_0040b5b0:
    uVar4 = uVar6 + 0x23;
    if (uVar4 <= uVar6) {
      uVar4 = 0xffffffff;
    }
    pvVar5 = operator_new(uVar4);
    if (pvVar5 == (void *)0x0) goto LAB_0040b6cf;
    pvVar7 = (void *)((int)pvVar5 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar7 - 4) = pvVar5;
  }
  *(uint *)((int)this + 0x10) = param_1;
  *(uint *)((int)this + 0x14) = uVar8;
  _Size = uVar1 * 2 + 2;
  if (uVar2 < 8) {
    memcpy(pvVar7,this,_Size);
    *(void **)this = pvVar7;
    *(uint *)((int)this + 0x10) = uVar1;
    return;
  }
                    /* WARNING: Load size is inaccurate */
  pvVar5 = *this;
  memcpy(pvVar7,pvVar5,_Size);
  pvVar9 = pvVar5;
  if ((uVar2 * 2 + 2 < 0x1000) ||
     (pvVar9 = *(void **)((int)pvVar5 + -4), (uint)((int)pvVar5 + (-4 - (int)pvVar9)) < 0x20)) {
    FUN_00425f95(pvVar9);
    *(void **)this = pvVar7;
    *(uint *)((int)this + 0x10) = uVar1;
    return;
  }
LAB_0040b6cf:
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




undefined4 * __thiscall FUN_0040b6e0(void *this,short *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  
  psVar3 = param_1;
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  iVar2 = *(int *)((int)this + 0x10);
  uVar5 = (int)psVar4 - (int)(param_1 + 1) >> 1;
  if (uVar5 <= (uint)(*(int *)((int)this + 0x14) - iVar2)) {
    *(uint *)((int)this + 0x10) = uVar5 + iVar2;
    pvVar7 = this;
    if (7 < *(uint *)((int)this + 0x14)) {
                    /* WARNING: Load size is inaccurate */
      pvVar7 = *this;
    }
    memmove((void *)((int)pvVar7 + iVar2 * 2),param_1,uVar5 * 2);
    *(undefined2 *)((int)pvVar7 + (uVar5 + iVar2) * 2) = 0;
    return (undefined4 *)this;
  }
  param_1 = (short *)((uint)param_1 & 0xffffff00);
  puVar6 = FUN_0040b3b0(this,uVar5,param_1,psVar3,uVar5);
  return puVar6;
}




undefined4 * __fastcall FUN_0040b6e9(undefined4 *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *in_EAX;
  uint uVar5;
  undefined4 *puVar6;
  void *unaff_EBX;
  int unaff_EBP;
  
  psVar1 = in_EAX + 1;
  do {
    sVar2 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (sVar2 != 0);
  iVar3 = param_1[4];
  uVar5 = (int)in_EAX - (int)psVar1 >> 1;
  if (uVar5 <= (uint)(param_1[5] - iVar3)) {
    uVar4 = param_1[5];
    *(uint *)(unaff_EBP + 8) = uVar5 + iVar3;
    param_1[4] = uVar5 + iVar3;
    puVar6 = param_1;
    if (7 < uVar4) {
      puVar6 = (undefined4 *)*param_1;
    }
    memmove((void *)((int)puVar6 + iVar3 * 2),unaff_EBX,uVar5 * 2);
    *(undefined2 *)((int)puVar6 + *(int *)(unaff_EBP + 8) * 2) = 0;
    return param_1;
  }
  *(undefined1 *)(unaff_EBP + 8) = 0;
  puVar6 = FUN_0040b3b0(param_1,uVar5,*(undefined4 *)(unaff_EBP + 8),unaff_EBX,uVar5);
  return puVar6;
}




void __cdecl FUN_0040b760(undefined4 param_1,undefined4 param_2)

{
  HWND hWnd;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  hWnd = FindWindowExA((HWND)0x0,(HWND)0x0,(LPCSTR)0x0,"EaseUS_PreivewDialog");
  if (hWnd != (HWND)0x0) {
    local_10 = param_1;
    local_c = param_2;
    local_1c = local_18;
    local_24 = 0x270e;
    local_20 = 0x10;
    SendMessageA(hWnd,0x4a,0,(LPARAM)&local_24);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}




undefined4 __fastcall FUN_0040b7d0(void *param_1,uint param_2,void *param_3,uint param_4)

{
  int *piVar1;
  
  if (param_4 != 0) {
    if ((param_1 == (void *)0x0) || (param_3 == (void *)0x0)) {
      piVar1 = _errno();
      *piVar1 = 0x16;
      _invalid_parameter_noinfo();
      return 0x16;
    }
    if (param_2 < param_4) {
      piVar1 = _errno();
      *piVar1 = 0x22;
      _invalid_parameter_noinfo();
      return 0x22;
    }
    memmove(param_1,param_3,param_4);
  }
  return 0;
}




undefined * FUN_0040b830(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0042811c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*ThreadLocalStoragePointer + 4) < DAT_00430110) {
    FUN_00426439(&DAT_00430110);
    if (DAT_00430110 == -1) {
      local_8 = 0;
      _atexit((_func_4879 *)&DAT_00428480);
      local_8 = 0xffffffff;
      FUN_004263ef(&DAT_00430110);
    }
  }
  ExceptionList = local_10;
  return &DAT_00430114;
}




undefined1 FUN_0040b8c0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_stack_00000018;
  HMODULE local_2c;
  code *local_28;
  undefined8 local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00428148;
  local_10 = ExceptionList;
  uVar1 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = 0;
  local_11 = 0;
  if ((((param_1 != 0) && (-1 < param_3)) && ((0 < param_3 || (param_2 != 0)))) && (param_4 != 0)) {
    FUN_004086d0(&local_2c);
    local_8 = 0;
    local_1c = 0;
    if (local_28 == (code *)0x0) {
      local_1c._4_4_ = 0;
      local_1c._0_4_ = 0;
      iVar2 = (int)local_1c;
      iVar3 = local_1c._4_4_;
    }
    else {
      iVar2 = (*local_28)(param_1,param_2,param_4,in_stack_00000018,uVar1);
      iVar3 = iVar2 >> 0x1f;
    }
    *param_5 = iVar2;
    param_5[1] = iVar3;
    if ((iVar3 < 1) && ((iVar3 < 0 || (iVar2 == 0)))) {
      local_8 = 0xffffffff;
      if (local_2c != (HMODULE)0x0) {
        FreeLibrary(local_2c);
      }
      ExceptionList = local_10;
      return local_11;
    }
    local_8 = 0xffffffff;
    if (local_2c != (HMODULE)0x0) {
      FreeLibrary(local_2c);
    }
    uVar4 = 1;
  }
  ExceptionList = local_10;
  return uVar4;
}




void __cdecl FUN_0040b9d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[9];
  if (iVar1 == 1) {
    param_1[10] = 1;
    param_1[0xb] = 1;
    goto LAB_0040bbc9;
  }
  if (iVar1 != 3) {
    if (iVar1 != 4) {
      param_1[10] = 0;
      param_1[0xb] = 0;
      goto LAB_0040bbc9;
    }
    piVar2 = (int *)param_1[0x31];
    if (*piVar2 == 1) {
      if (((piVar2[0x16] != 2) || (piVar2[0x2c] != 3)) || (piVar2[0x42] != 4)) {
LAB_0040ba55:
        if (((char)param_1[0x42] == '\0') || (*(char *)((int)param_1 + 0x109) == '\0'))
        goto LAB_0040baa4;
        if (*(char *)((int)param_1 + 0x109) != '\x02') {
          *(undefined4 *)(*param_1 + 0x14) = 0x74;
          *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x109);
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          param_1[10] = 5;
          param_1[0xb] = 4;
          goto LAB_0040bbc9;
        }
      }
      param_1[10] = 5;
      param_1[0xb] = 4;
    }
    else {
      if ((((*piVar2 != 0x43) || (piVar2[0x16] != 0x4d)) || (piVar2[0x2c] != 0x59)) ||
         (piVar2[0x42] != 0x4b)) goto LAB_0040ba55;
LAB_0040baa4:
      param_1[10] = 4;
      param_1[0xb] = 4;
    }
    goto LAB_0040bbc9;
  }
  piVar2 = (int *)param_1[0x31];
  iVar1 = *piVar2;
  iVar3 = piVar2[0x16];
  iVar4 = piVar2[0x2c];
  if (iVar1 != 1) {
    if (iVar1 != 0x52) {
      if (((iVar1 == 0x72) && (iVar3 == 0x67)) && (iVar4 == 0x62)) {
        param_1[10] = 6;
        param_1[0xb] = 2;
        goto LAB_0040bbc9;
      }
      goto LAB_0040badb;
    }
    if ((iVar3 != 0x47) || (iVar4 != 0x42)) goto LAB_0040badb;
LAB_0040bb4f:
    param_1[10] = 2;
    param_1[0xb] = 2;
    goto LAB_0040bbc9;
  }
  if (iVar3 == 2) {
    if (iVar4 != 3) goto LAB_0040badb;
  }
  else {
    if ((iVar3 == 0x22) && (iVar4 == 0x23)) {
      param_1[10] = 7;
      param_1[0xb] = 2;
      goto LAB_0040bbc9;
    }
LAB_0040badb:
    if ((char)param_1[0x40] == '\0') {
      if ((char)param_1[0x42] == '\0') {
        iVar5 = *param_1;
        uVar6 = 1;
        *(int *)(iVar5 + 0x18) = iVar1;
        *(int *)(iVar5 + 0x1c) = iVar3;
        *(int *)(iVar5 + 0x20) = iVar4;
        *(undefined4 *)(*param_1 + 0x14) = 0x71;
      }
      else {
        if (*(char *)((int)param_1 + 0x109) == '\0') goto LAB_0040bb4f;
        if (*(char *)((int)param_1 + 0x109) == '\x01') goto LAB_0040bbab;
        uVar6 = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x14) = 0x74;
        *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x109);
      }
      (**(code **)(*param_1 + 4))(param_1,uVar6);
    }
  }
LAB_0040bbab:
  param_1[10] = 3;
  param_1[0xb] = 2;
LAB_0040bbc9:
  param_1[0xc] = param_1[0x62];
  param_1[0xd] = param_1[0x62];
  param_1[0xe] = 0;
  param_1[0xf] = 0x3ff00000;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0x101;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  param_1[0x13] = 2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0x100;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  return;
}




void __cdecl FUN_0040bc20(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(undefined4 *)(*param_1 + 0x18) = 0x5a;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1c8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    *(undefined4 *)(*param_1 + 0x18) = 0x1c8;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  iVar2 = param_1[3];
  memset(param_1,0,0x1c8);
  *param_1 = iVar1;
  param_1[3] = iVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_0040ff80(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x45] = 0;
  FUN_0040edd0((int)param_1);
  FUN_0040cdc0((int)param_1);
  param_1[5] = 200;
  return;
}




undefined4 __cdecl FUN_0040bd60(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1[5];
  if (((iVar3 == 0xcd) || (iVar3 == 0xce)) && ((char)param_1[0x10] == '\0')) {
    if ((uint)param_1[0x1e] < (uint)param_1[0x18]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x66] + 4))(param_1);
    param_1[5] = 0xd2;
  }
  else if (iVar3 == 0xcf) {
    param_1[5] = 0xd2;
  }
  else if (iVar3 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)param_1[0x6a];
  cVar1 = *(char *)((int)puVar2 + 0x11);
  while( true ) {
    if (cVar1 != '\0') {
      (**(code **)(param_1[6] + 0x18))(param_1);
      uVar4 = FUN_0040c540((int)param_1);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    iVar3 = (*(code *)*puVar2)(param_1);
    if (iVar3 == 0) break;
    puVar2 = (undefined4 *)param_1[0x6a];
    cVar1 = *(char *)((int)puVar2 + 0x11);
  }
  return 0;
}




int __cdecl FUN_0040be30(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[5];
  if ((iVar1 != 200) && (iVar1 != 0xc9)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
    iVar1 = param_1[5];
  }
  iVar2 = 0;
  switch(iVar1) {
  case 200:
    (**(code **)(param_1[0x6a] + 4))(param_1);
    (**(code **)(param_1[6] + 8))(param_1);
    param_1[5] = 0xc9;
  case 0xc9:
    iVar2 = (**(code **)param_1[0x6a])(param_1);
    if (iVar2 == 1) {
      FUN_0040b9d0(param_1);
      param_1[5] = 0xca;
    }
    break;
  case 0xca:
    iVar2 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar2 = (**(code **)param_1[0x6a])(param_1);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      if (param_2 != '\0') {
        *(undefined4 *)(*param_1 + 0x14) = 0x35;
        (**(code **)*param_1)(param_1);
      }
      FUN_0040c540((int)param_1);
      return 2;
    }
    return iVar2;
  }
  return 1;
}




void FUN_0040bfa0(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_0040c5c0((int)param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}




void __cdecl FUN_0040c080(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = &stack0x0000000c;
  uVar2 = 0;
  puVar1 = (undefined4 *)FUN_00402df0();
  __stdio_common_vfprintf(*puVar1,puVar1[1],param_1,param_2,uVar2,puVar3);
  return;
}




void __cdecl FUN_0040c0b0(undefined4 *param_1)

{
  *param_1 = FUN_0040bfa0;
  param_1[1] = &LAB_0040bf60;
  param_1[2] = &LAB_0040c120;
  param_1[3] = &LAB_0040bfc0;
  param_1[4] = &LAB_0040c180;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[0x1c] = &PTR_s_Bogus_message_code__d_00429298;
  param_1[0x1d] = 0x7e;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}




int __cdecl FUN_0040c1a0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x0000000c;
  uVar4 = 0;
  uVar3 = 0xffffffff;
  puVar1 = (uint *)FUN_00402df0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,uVar3,param_2,uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}




undefined4 __cdecl FUN_0040c1e0(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(*param_1 + 0x14) = 0x7b;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  *(undefined **)param_1[6] = &DAT_00429498;
  iVar1 = param_1[6];
  *(undefined4 *)(iVar1 + 4) = 2;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}




/* guard_check_icall */

void __cdecl guard_check_icall(void)

{
  return;
}




void __cdecl FUN_0040c230(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2b;
    (**(code **)*param_1)(param_1);
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)(**(code **)param_1[1])(param_1,0,0x1c);
    param_1[6] = (int)piVar1;
  }
  piVar1[1] = param_3;
  *piVar1 = param_2;
  piVar1[2] = (int)guard_check_icall;
  piVar1[3] = (int)FUN_0040c1e0;
  piVar1[4] = (int)FUN_0040c2a0;
  piVar1[5] = (int)FUN_0040ee80;
  piVar1[6] = (int)guard_check_icall;
  return;
}




void __cdecl FUN_0040c2a0(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (0 < (int)param_2) {
    if ((uint)piVar1[1] < param_2) {
      do {
        param_2 = param_2 - piVar1[1];
        (*(code *)piVar1[3])(param_1);
      } while ((uint)piVar1[1] < param_2);
    }
    *piVar1 = *piVar1 + param_2;
    piVar1[1] = piVar1[1] - param_2;
  }
  return;
}




int __cdecl FUN_0040c2e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1[5] != 0xcd) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  if ((uint)piVar1[0x18] <= (uint)piVar1[0x1e]) {
    *(undefined4 *)(*piVar1 + 0x14) = 0x7e;
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
    return 0;
  }
  if (piVar1[2] != 0) {
    *(int *)(piVar1[2] + 4) = piVar1[0x1e];
    *(int *)(piVar1[2] + 8) = piVar1[0x18];
    (**(code **)piVar1[2])(piVar1);
  }
  param_1 = (int *)0x0;
  (**(code **)(piVar1[0x67] + 4))(piVar1,param_2,&param_1,param_3);
  piVar1[0x1e] = piVar1[0x1e] + (int)param_1;
  return (int)param_1;
}




uint __cdecl FUN_0040c380(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1[5];
  if (iVar3 == 0xca) {
    uVar2 = FUN_004104d0(param_1);
    if ((char)param_1[0x10] != '\0') {
      param_1[5] = 0xcf;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    param_1[5] = 0xcb;
  }
  else if (iVar3 != 0xcb) {
    if (iVar3 != 0xcc) {
      *(undefined4 *)(*param_1 + 0x14) = 0x15;
      *(int *)(*param_1 + 0x18) = param_1[5];
      (**(code **)*param_1)(param_1);
    }
    uVar4 = FUN_0040c470((int)param_1);
    return uVar4;
  }
  if (*(char *)(param_1[0x6a] + 0x10) != '\0') {
    while( true ) {
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        (**(code **)param_1[2])(param_1);
      }
      iVar3 = (**(code **)param_1[0x6a])(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar3 == 2) break;
      iVar1 = param_1[2];
      if ((iVar1 != 0) && ((iVar3 == 3 || (iVar3 == 1)))) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        iVar3 = *(int *)(param_1[2] + 8);
        if (iVar3 <= *(int *)(iVar1 + 4)) {
          *(int *)(param_1[2] + 8) = param_1[0x4a] + iVar3;
        }
      }
    }
  }
  param_1[0x21] = param_1[0x1f];
  uVar4 = FUN_0040c470((int)param_1);
  return uVar4;
}




uint __cdecl FUN_0040c470(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x198))(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  if (*(char *)(*(int *)(param_1 + 0x198) + 8) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x78);
    puVar1 = (uint *)(param_1 + 0x78);
    do {
      if (uVar4 < *(uint *)(param_1 + 0x60)) {
        do {
          uVar5 = uVar4;
          if (*(int *)(param_1 + 8) != 0) {
            *(uint *)(*(int *)(param_1 + 8) + 4) = uVar4;
            *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x60);
            (*(code *)**(undefined4 **)(param_1 + 8))(param_1);
            uVar5 = *puVar1;
          }
          uVar2 = (**(code **)(*(int *)(param_1 + 0x19c) + 4))(param_1,0,puVar1,0);
          uVar4 = *puVar1;
          if (uVar4 == uVar5) {
            return uVar2 & 0xffffff00;
          }
        } while (uVar4 < *(uint *)(param_1 + 0x60));
      }
      (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1);
      (*(code *)**(undefined4 **)(param_1 + 0x198))(param_1);
      *puVar1 = 0;
      uVar4 = 0;
    } while (*(char *)(*(int *)(param_1 + 0x198) + 8) != '\0');
  }
  iVar3 = (*(char *)(param_1 + 0x41) != '\0') + 0xcd;
  *(int *)(param_1 + 0x14) = iVar3;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}




void __cdecl FUN_0040c540(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,1);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined4 *)(param_1 + 0x14) = 200;
      *(undefined4 *)(param_1 + 0x114) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 100;
  }
  return;
}




void __cdecl FUN_0040c580(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x112);
  *(undefined1 *)(iVar1 + 0x111) = 0;
  return;
}




void __cdecl FUN_0040c5a0(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x82);
  *(undefined1 *)(iVar1 + 0x80) = 0;
  return;
}




void __cdecl FUN_0040c5c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




undefined4 * __cdecl FUN_0040c5f0(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint5 uVar8;
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined *_Src;
  int iVar15;
  size_t _Size;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  if ((char)param_1[4] == '\0') {
    iVar11 = 0x88;
    if (param_2 != '\0') {
      iVar11 = 0x78;
    }
  }
  else {
    iVar11 = 0xa0;
    if (param_2 == '\0') {
      iVar11 = 0xb0;
    }
  }
  if (param_3 == 0) {
    if (param_2 == '\0') {
      puVar13 = (undefined4 *)&DAT_004294e0;
      _Src = &DAT_004294f8;
    }
    else {
      puVar13 = (undefined4 *)&DAT_004294a0;
      _Src = &DAT_004294b4;
    }
  }
  else {
    if (param_3 != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x34;
      *(int *)(*param_1 + 0x18) = param_3;
      (**(code **)*param_1)(param_1);
      return (undefined4 *)0x0;
    }
    puVar13 = (undefined4 *)&DAT_0042959c;
    _Src = &DAT_004295b0;
    if (param_2 != '\0') {
      puVar13 = (undefined4 *)&DAT_004294c0;
      _Src = &DAT_004294d4;
    }
  }
  piVar1 = (int *)((int)param_1 + param_3 * 4 + iVar11);
  puVar12 = (undefined4 *)*piVar1;
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)(**(code **)param_1[1])(param_1,0,0x112);
    *(undefined1 *)((int)puVar12 + 0x111) = 0;
    *piVar1 = (int)puVar12;
  }
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  iVar19 = 0;
  iVar20 = 0;
  iVar21 = 0;
  iVar22 = 0;
  iVar15 = 0;
  iVar16 = 0;
  iVar17 = 0;
  iVar18 = 0;
  *puVar12 = *puVar13;
  puVar12[1] = uVar5;
  puVar12[2] = uVar6;
  puVar12[3] = uVar7;
  *(undefined1 *)(puVar12 + 4) = *(undefined1 *)(puVar13 + 4);
  iVar11 = 2;
  puVar14 = (uint *)((int)puVar13 + 5);
  do {
    uVar2 = puVar14[-1];
    auVar3[0xc] = (char)(uVar2 >> 0x18);
    auVar3._0_12_ = ZEXT712(0);
    uVar8 = CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar9._5_8_ = 0;
    auVar9._0_5_ = uVar8;
    iVar19 = iVar19 + (uVar2 & 0xff);
    iVar20 = iVar20 + (int)CONCAT72(SUB137(auVar9 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
    iVar21 = iVar21 + (int)uVar8;
    iVar22 = iVar22 + (uint)(uint3)(auVar3._10_3_ >> 0x10);
    uVar2 = *puVar14;
    auVar4[0xc] = (char)(uVar2 >> 0x18);
    auVar4._0_12_ = ZEXT712(0);
    uVar8 = CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar10._5_8_ = 0;
    auVar10._0_5_ = uVar8;
    iVar15 = iVar15 + (uVar2 & 0xff);
    iVar16 = iVar16 + (int)CONCAT72(SUB137(auVar10 << 0x40,6),(ushort)(byte)(uVar2 >> 8));
    iVar17 = iVar17 + (int)uVar8;
    iVar18 = iVar18 + (uint)(uint3)(auVar4._10_3_ >> 0x10);
    iVar11 = iVar11 + -1;
    puVar14 = puVar14 + 2;
  } while (iVar11 != 0);
  _Size = iVar15 + iVar19 + iVar17 + iVar21 + iVar16 + iVar20 + iVar18 + iVar22;
  if (0x100 < (int)_Size) {
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)(param_1);
  }
  if (0 < (int)_Size) {
    memcpy((void *)((int)puVar12 + 0x11),_Src,_Size);
  }
  *(undefined1 *)((int)puVar12 + 0x111) = 0;
  return puVar12;
}




int __cdecl FUN_0040c760(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x6a];
  if (*(char *)(iVar1 + 0x11) == '\0') {
    while( true ) {
      iVar2 = (**(code **)(param_1[0x6b] + 4))(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 != 1) break;
      if (*(int *)(iVar1 + 0x14) == 0) {
        if (*(char *)(iVar1 + 0x10) == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x24;
          (**(code **)*param_1)(param_1);
        }
        if (param_1[0x4c] != 0) {
          FUN_0040d2c0(param_1);
          return 1;
        }
      }
      else {
        if (*(int *)(iVar1 + 0x14) == 1) {
          FUN_0040c880(param_1);
        }
        if (param_1[0x4c] != 0) {
          *(undefined4 *)(iVar1 + 0x14) = 0;
          return 1;
        }
        *(undefined4 *)(iVar1 + 0x14) = 2;
      }
    }
    if (iVar2 != 2) {
      return iVar2;
    }
    *(undefined1 *)(iVar1 + 0x11) = 1;
    if (*(int *)(iVar1 + 0x14) == 0) {
      if (param_1[0x1f] < param_1[0x21]) {
        param_1[0x21] = param_1[0x1f];
        return 2;
      }
    }
    else if (*(char *)(param_1[0x6b] + 0xd) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x3e;
      (**(code **)*param_1)(param_1);
    }
  }
  return 2;
}




void __cdecl FUN_0040c850(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1b0) + 8))(param_1);
  **(undefined4 **)(param_1 + 0x1a8) = FUN_0040c760;
  return;
}




void __cdecl FUN_0040c880(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((0xffdc < param_1[8]) || (0xffdc < param_1[7])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x2a;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if ((param_1[0x30] < 8) || (0xc < param_1[0x30])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x30];
    (**(code **)*param_1)(param_1);
  }
  iVar1 = param_1[9];
  if (10 < iVar1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1b;
    *(int *)(*param_1 + 0x18) = param_1[9];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
    iVar1 = param_1[9];
  }
  iVar4 = 0;
  param_1[0x46] = 1;
  param_1[0x47] = 1;
  if (0 < iVar1) {
    iVar1 = 1;
    piVar5 = (int *)(param_1[0x31] + 0xc);
    iVar2 = 1;
    do {
      iVar3 = piVar5[-1];
      if (((3 < iVar3 - 1U) || (*piVar5 < 1)) || (4 < *piVar5)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x13;
        (**(code **)*param_1)(param_1);
        iVar1 = param_1[0x46];
        iVar3 = piVar5[-1];
        iVar2 = param_1[0x47];
      }
      if (iVar1 <= iVar3) {
        iVar1 = iVar3;
      }
      param_1[0x46] = iVar1;
      if (iVar2 <= *piVar5) {
        iVar2 = *piVar5;
      }
      iVar4 = iVar4 + 1;
      param_1[0x47] = iVar2;
      piVar5 = piVar5 + 0x16;
    } while (iVar4 < param_1[9]);
  }
  if (((char)param_1[0x32] != '\0') ||
     ((*(char *)((int)param_1 + 0xc9) != '\0' && (param_1[0x4c] != 0)))) {
switchD_0040c9e5_caseD_3f:
    param_1[0x62] = 8;
    goto LAB_0040cb6f;
  }
  iVar1 = param_1[0x5f];
  if (0xff < iVar1) {
switchD_0040c9e5_caseD_1:
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(int *)(*param_1 + 0x18) = param_1[0x5e];
    *(int *)(*param_1 + 0x1c) = param_1[0x5f];
    *(int *)(*param_1 + 0x20) = param_1[0x60];
    *(int *)(*param_1 + 0x24) = param_1[0x61];
    (**(code **)*param_1)(param_1);
    goto LAB_0040cb83;
  }
  if (iVar1 == 0xff) {
    param_1[0x62] = 0x10;
    goto LAB_0040cb6f;
  }
  switch(iVar1) {
  case 0:
    param_1[0x62] = 1;
    param_1[100] = iVar1;
    goto LAB_0040cb79;
  default:
    goto switchD_0040c9e5_caseD_1;
  case 3:
    param_1[0x62] = 2;
    param_1[99] = (int)&DAT_00429b28;
    param_1[100] = iVar1;
    goto LAB_0040cb83;
  case 8:
    param_1[0x62] = 3;
    param_1[99] = (int)&DAT_00429ac0;
    param_1[100] = iVar1;
    goto LAB_0040cb83;
  case 0xf:
    param_1[0x62] = 4;
    param_1[99] = (int)&DAT_00429a40;
    param_1[100] = iVar1;
    goto LAB_0040cb83;
  case 0x18:
    param_1[0x62] = 5;
    param_1[99] = (int)&DAT_00429998;
    param_1[100] = iVar1;
    goto LAB_0040cb83;
  case 0x23:
    param_1[0x62] = 6;
    param_1[99] = (int)&DAT_004298c8;
    param_1[100] = iVar1;
    goto LAB_0040cb83;
  case 0x30:
    param_1[0x62] = 7;
    param_1[99] = (int)&DAT_004297c0;
    param_1[100] = iVar1;
    goto LAB_0040cb83;
  case 0x3f:
    goto switchD_0040c9e5_caseD_3f;
  case 0x50:
    param_1[0x62] = 9;
    break;
  case 99:
    param_1[0x62] = 10;
    break;
  case 0x78:
    param_1[0x62] = 0xb;
    break;
  case 0x8f:
    param_1[0x62] = 0xc;
    break;
  case 0xa8:
    param_1[0x62] = 0xd;
    break;
  case 0xc3:
    param_1[0x62] = 0xe;
    break;
  case 0xe0:
    param_1[0x62] = 0xf;
  }
LAB_0040cb6f:
  param_1[100] = 0x3f;
LAB_0040cb79:
  param_1[99] = (int)&DAT_00429680;
LAB_0040cb83:
  iVar1 = param_1[0x62];
  iVar4 = 0;
  param_1[0x48] = iVar1;
  param_1[0x49] = iVar1;
  if (0 < param_1[9]) {
    piVar5 = (int *)(param_1[0x31] + 0x28);
    do {
      piVar5[-1] = param_1[0x62];
      *piVar5 = param_1[0x62];
      iVar1 = FUN_00410c20(piVar5[-8] * param_1[7],param_1[0x46] * param_1[0x62]);
      piVar5[-3] = iVar1;
      iVar1 = FUN_00410c20(piVar5[-7] * param_1[8],param_1[0x62] * param_1[0x47]);
      piVar5[-2] = iVar1;
      iVar1 = FUN_00410c20(piVar5[-8] * param_1[7],param_1[0x46]);
      piVar5[1] = iVar1;
      iVar1 = FUN_00410c20(piVar5[-7] * param_1[8],param_1[0x47]);
      piVar5[2] = iVar1;
      *(undefined1 *)(piVar5 + 3) = 1;
      iVar4 = iVar4 + 1;
      piVar5[10] = 0;
      piVar5 = piVar5 + 0x16;
    } while (iVar4 < param_1[9]);
    iVar1 = param_1[0x62];
  }
  iVar1 = FUN_00410c20(param_1[8],param_1[0x47] * iVar1);
  param_1[0x4a] = iVar1;
  if ((param_1[9] <= param_1[0x4c]) && (*(char *)((int)param_1 + 0xc9) == '\0')) {
    *(undefined1 *)(param_1[0x6a] + 0x10) = 0;
    return;
  }
  *(undefined1 *)(param_1[0x6a] + 0x10) = 1;
  return;
}




void __cdecl FUN_0040cdc0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined4 **)(param_1 + 0x1a8) = puVar1;
  *puVar1 = FUN_0040c760;
  puVar1[1] = FUN_0040d280;
  puVar1[2] = FUN_0040d2c0;
  puVar1[3] = FUN_0040c850;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[5] = 1;
  return;
}




void __cdecl FUN_0040ce10(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x188);
  uVar1 = *(uint *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar5 = *(int *)(param_1 + 0x30) * iVar3;
  if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
    iVar3 = FUN_00410c20(iVar2,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 1;
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  else if (uVar5 < uVar1 * 2 || uVar5 + uVar1 * -2 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 2,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 2,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 2;
    *(undefined4 *)(param_1 + 0x124) = 2;
  }
  else if (uVar5 < uVar1 * 3 || uVar5 + uVar1 * -3 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 3,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 3,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 3;
    *(undefined4 *)(param_1 + 0x124) = 3;
  }
  else if (uVar5 < uVar1 * 4 || uVar5 + uVar1 * -4 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 4,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) << 2,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 4;
    *(undefined4 *)(param_1 + 0x124) = 4;
  }
  else if (uVar5 < uVar1 * 5 || uVar5 + uVar1 * -5 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 5,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 5,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 5;
    *(undefined4 *)(param_1 + 0x124) = 5;
  }
  else if (uVar5 < uVar1 * 6 || uVar5 + uVar1 * -6 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 6,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 6,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 6;
    *(undefined4 *)(param_1 + 0x124) = 6;
  }
  else if (uVar5 < uVar1 * 7 || uVar5 + uVar1 * -7 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 7,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 7,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 7;
    *(undefined4 *)(param_1 + 0x124) = 7;
  }
  else if (uVar5 < uVar1 * 8 || uVar5 + uVar1 * -8 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 8,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) << 3,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 8;
    *(undefined4 *)(param_1 + 0x124) = 8;
  }
  else if (uVar5 < uVar1 * 9 || uVar5 + uVar1 * -9 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 9,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 9,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 9;
    *(undefined4 *)(param_1 + 0x124) = 9;
  }
  else if (uVar5 < uVar1 * 10 || uVar5 + uVar1 * -10 == 0) {
    iVar3 = FUN_00410c20(iVar2 * 10,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 10,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 10;
    *(undefined4 *)(param_1 + 0x124) = 10;
  }
  else if (uVar5 < uVar1 * 0xb || uVar5 + uVar1 * -0xb == 0) {
    iVar3 = FUN_00410c20(iVar2 * 0xb,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 0xb,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 0xb;
    *(undefined4 *)(param_1 + 0x124) = 0xb;
  }
  else if (uVar5 < uVar1 * 0xc || uVar5 + uVar1 * -0xc == 0) {
    iVar3 = FUN_00410c20(iVar2 * 0xc,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 0xc,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 0xc;
    *(undefined4 *)(param_1 + 0x124) = 0xc;
  }
  else if (uVar5 < uVar1 * 0xd || uVar5 + uVar1 * -0xd == 0) {
    iVar3 = FUN_00410c20(iVar2 * 0xd,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 0xd,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 0xd;
    *(undefined4 *)(param_1 + 0x124) = 0xd;
  }
  else if (uVar5 < uVar1 * 0xe || uVar5 + uVar1 * -0xe == 0) {
    iVar3 = FUN_00410c20(iVar2 * 0xe,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 0xe,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 0xe;
    *(undefined4 *)(param_1 + 0x124) = 0xe;
  }
  else if (uVar5 < uVar1 * 0xf || uVar5 + uVar1 * -0xf == 0) {
    iVar3 = FUN_00410c20(iVar2 * 0xf,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) * 0x10 - *(int *)(param_1 + 0x20),
                         *(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 0xf;
    *(undefined4 *)(param_1 + 0x124) = 0xf;
  }
  else {
    iVar3 = FUN_00410c20(iVar2 << 4,iVar3);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = FUN_00410c20(*(int *)(param_1 + 0x20) << 4,*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x120) = 0x10;
    *(undefined4 *)(param_1 + 0x124) = 0x10;
  }
  *(int *)(param_1 + 0x60) = iVar3;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x28);
    do {
      puVar4[-1] = *(undefined4 *)(param_1 + 0x120);
      iVar3 = iVar3 + 1;
      *puVar4 = *(undefined4 *)(param_1 + 0x124);
      puVar4 = puVar4 + 0x16;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return;
}




void __cdecl FUN_0040d280(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x6a];
  *puVar1 = FUN_0040c760;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[5] = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[0x6b])(param_1);
  param_1[0x23] = 0;
  return;
}




void __cdecl FUN_0040d2c0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  piVar2 = param_1;
  iVar4 = param_1[0x4c];
  if (iVar4 == 1) {
    iVar4 = param_1[0x4d];
    param_1[0x51] = *(int *)(iVar4 + 0x1c);
    param_1[0x52] = *(int *)(iVar4 + 0x20);
    *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x24);
    uVar7 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar4 + 0x3c) = 1;
    *(undefined4 *)(iVar4 + 0x40) = 1;
    if (uVar7 == 0) {
      uVar7 = *(uint *)(iVar4 + 0xc);
    }
    *(undefined4 *)(iVar4 + 0x48) = 1;
    *(uint *)(iVar4 + 0x4c) = uVar7;
    param_1[0x53] = 1;
    param_1[0x54] = 0;
    iVar4 = param_1[0x4c];
  }
  else {
    if ((iVar4 < 1) || (4 < iVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1b;
      *(int *)(*param_1 + 0x18) = param_1[0x4c];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar6 = FUN_00410c20(param_1[7],param_1[0x62] * param_1[0x46]);
    iVar4 = param_1[0x4c];
    param_1[0x51] = iVar6;
    param_1[0x52] = param_1[0x4a];
    param_1[0x53] = 0;
    param_1 = (int *)0x0;
    if (0 < iVar4) {
      piVar5 = piVar2 + 0x4d;
      do {
        iVar4 = *piVar5;
        uVar7 = *(uint *)(iVar4 + 8);
        uVar1 = *(uint *)(iVar4 + 0xc);
        iVar6 = uVar1 * uVar7;
        *(uint *)(iVar4 + 0x38) = uVar7;
        *(uint *)(iVar4 + 0x3c) = uVar1;
        *(uint *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x24) * uVar7;
        uVar8 = *(uint *)(iVar4 + 0x1c) % uVar7;
        *(int *)(iVar4 + 0x40) = iVar6;
        if (uVar8 == 0) {
          uVar8 = uVar7;
        }
        *(uint *)(iVar4 + 0x48) = uVar8;
        uVar7 = *(uint *)(iVar4 + 0x20) % uVar1;
        if (uVar7 == 0) {
          uVar7 = uVar1;
        }
        *(uint *)(iVar4 + 0x4c) = uVar7;
        if (10 < piVar2[0x53] + iVar6) {
          *(undefined4 *)(*piVar2 + 0x14) = 0xe;
          (**(code **)*piVar2)(piVar2);
        }
        for (; 0 < iVar6; iVar6 = iVar6 + -1) {
          piVar2[piVar2[0x53] + 0x54] = (int)param_1;
          piVar2[0x53] = piVar2[0x53] + 1;
        }
        param_1 = (int *)((int)param_1 + 1);
        iVar4 = piVar2[0x4c];
        piVar5 = piVar5 + 1;
      } while ((int)param_1 < iVar4);
    }
  }
  param_1 = (int *)0x0;
  if (0 < iVar4) {
    piVar5 = piVar2 + 0x4d;
    do {
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x50) == 0) {
        uVar7 = *(uint *)(iVar4 + 0x10);
        if ((3 < uVar7) || (piVar2[uVar7 + 0x24] == 0)) {
          *(undefined4 *)(*piVar2 + 0x14) = 0x36;
          *(uint *)(*piVar2 + 0x18) = uVar7;
          (**(code **)*piVar2)(piVar2);
        }
        puVar3 = (undefined4 *)(**(code **)piVar2[1])(piVar2,1,0x82);
        puVar9 = (undefined4 *)piVar2[uVar7 + 0x24];
        puVar10 = puVar3;
        for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
        *(undefined4 **)(iVar4 + 0x50) = puVar3;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar5 = piVar5 + 1;
    } while ((int)param_1 < piVar2[0x4c]);
  }
  (**(code **)piVar2[0x6c])(piVar2);
  (**(code **)piVar2[0x68])(piVar2);
  *(undefined4 *)piVar2[0x6a] = *(undefined4 *)(piVar2[0x68] + 4);
  return;
}




void __cdecl FUN_0040d530(int *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  
  iVar5 = param_4 + param_3;
  if ((((0xd < param_3) && (*param_2 == 'J')) && (param_2[1] == 'F')) &&
     (((param_2[2] == 'I' && (param_2[3] == 'F')) && (param_2[4] == '\0')))) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    bVar3 = param_2[5];
    *(byte *)((int)param_1 + 0x101) = bVar3;
    *(char *)((int)param_1 + 0x102) = param_2[6];
    *(char *)((int)param_1 + 0x103) = param_2[7];
    *(ushort *)(param_1 + 0x41) = (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
    *(ushort *)((int)param_1 + 0x106) =
         (ushort)(byte)param_2[10] * 0x100 + (ushort)(byte)param_2[0xb];
    if ((bVar3 != 1) && (bVar3 != 2)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x7a;
      *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x101);
      *(uint *)(*param_1 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x102);
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      bVar3 = *(byte *)((int)param_1 + 0x101);
    }
    iVar2 = *param_1;
    *(uint *)(iVar2 + 0x18) = (uint)bVar3;
    *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x102);
    *(uint *)(iVar2 + 0x20) = (uint)*(ushort *)(param_1 + 0x41);
    *(uint *)(iVar2 + 0x24) = (uint)*(ushort *)((int)param_1 + 0x106);
    *(uint *)(iVar2 + 0x28) = (uint)*(byte *)((int)param_1 + 0x103);
    *(undefined4 *)(*param_1 + 0x14) = 0x59;
    (**(code **)(*param_1 + 4))(param_1,1);
    bVar3 = param_2[0xc];
    bVar4 = param_2[0xd];
    if (bVar3 != 0 || bVar4 != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x5c;
      *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[0xc];
      *(uint *)(*param_1 + 0x1c) = (uint)(byte)param_2[0xd];
      (**(code **)(*param_1 + 4))(param_1,1);
      bVar4 = param_2[0xd];
      bVar3 = param_2[0xc];
    }
    if (iVar5 + -0xe != (uint)bVar3 * (uint)bVar4 * 3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x5a;
      *(int *)(*param_1 + 0x18) = iVar5 + -0xe;
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    return;
  }
  if (((5 < param_3) && (*param_2 == 'J')) &&
     ((param_2[1] == 'F' && (((param_2[2] == 'X' && (param_2[3] == 'X')) && (param_2[4] == '\0')))))
     ) {
    cVar1 = param_2[5];
    iVar2 = *param_1;
    if (cVar1 == '\x10') {
      *(undefined4 *)(iVar2 + 0x14) = 0x6e;
    }
    else {
      if (cVar1 != '\x11') {
        if (cVar1 != '\x13') {
          *(undefined4 *)(iVar2 + 0x14) = 0x5b;
          *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[5];
          *(int *)(*param_1 + 0x1c) = iVar5;
          (**(code **)(*param_1 + 4))();
          return;
        }
        *(undefined4 *)(iVar2 + 0x14) = 0x70;
        *(int *)(*param_1 + 0x18) = iVar5;
        (**(code **)(*param_1 + 4))(param_1,1);
        return;
      }
      *(undefined4 *)(iVar2 + 0x14) = 0x6f;
    }
    *(int *)(*param_1 + 0x18) = iVar5;
    (**(code **)(*param_1 + 4))(param_1,1);
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x4f;
  *(int *)(*param_1 + 0x18) = iVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}




void __cdecl FUN_0040d7a0(int *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  
  if ((((0xb < param_3) && (*param_2 == 'A')) && (param_2[1] == 'd')) &&
     (((param_2[2] == 'o' && (param_2[3] == 'b')) && (param_2[4] == 'e')))) {
    cVar2 = param_2[5];
    cVar3 = param_2[9];
    iVar6 = *param_1;
    cVar4 = param_2[10];
    bVar1 = param_2[0xb];
    cVar5 = param_2[6];
    *(uint *)(iVar6 + 0x1c) = (uint)CONCAT11(param_2[7],param_2[8]);
    *(uint *)(iVar6 + 0x18) = (uint)CONCAT11(cVar2,cVar5);
    *(uint *)(iVar6 + 0x20) = (uint)CONCAT11(cVar3,cVar4);
    *(uint *)(iVar6 + 0x24) = (uint)bVar1;
    *(undefined4 *)(*param_1 + 0x14) = 0x4e;
    (**(code **)(*param_1 + 4))(param_1,1);
    *(undefined1 *)(param_1 + 0x42) = 1;
    *(byte *)((int)param_1 + 0x109) = bVar1;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x50;
  *(uint *)(*param_1 + 0x18) = param_3 + param_4;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}




undefined4 __cdecl FUN_0040d880(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar9 = puVar3[1];
  pbVar10 = (byte *)*puVar3;
  if (iVar9 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_0040da1a;
    pbVar10 = (byte *)*puVar3;
    iVar9 = puVar3[1];
  }
  bVar2 = *pbVar10;
  pbVar10 = pbVar10 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_0040da1a:
      return uVar4 & 0xffffff00;
    }
    pbVar10 = (byte *)*puVar3;
    iVar9 = puVar3[1];
  }
  uVar4 = (uint)*pbVar10;
  iVar8 = (uint)bVar2 * 0x100 + -2 + uVar4;
  do {
    pbVar10 = pbVar10 + 1;
    iVar9 = iVar9 + -1;
    if (iVar8 < 1) {
      if (iVar8 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        uVar4 = (**(code **)*param_1)(param_1);
      }
      *puVar3 = pbVar10;
      puVar3[1] = iVar9;
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    if (iVar9 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_0040da1a;
      pbVar10 = (byte *)*puVar3;
      iVar9 = puVar3[1];
    }
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    uVar5 = (uint)bVar2;
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_0040da1a;
      pbVar10 = (byte *)*puVar3;
      iVar9 = puVar3[1];
    }
    bVar1 = *pbVar10;
    iVar8 = iVar8 + -2;
    *(undefined4 *)(*param_1 + 0x14) = 0x51;
    *(uint *)(*param_1 + 0x18) = uVar5;
    *(uint *)(*param_1 + 0x1c) = (uint)bVar1;
    uVar6 = (**(code **)(*param_1 + 4))(param_1,1);
    uVar7 = (undefined3)((uint)uVar6 >> 8);
    if (0x1f < bVar2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1d;
      *(uint *)(*param_1 + 0x18) = uVar5;
      uVar6 = (**(code **)*param_1)(param_1);
      uVar7 = (undefined3)((uint)uVar6 >> 8);
    }
    if (bVar2 < 0x10) {
      uVar4 = 0;
      *(byte *)(uVar5 + 0xcb + (int)param_1) = bVar1 & 0xf;
      *(byte *)(uVar5 + 0xdb + (int)param_1) = bVar1 >> 4;
      if (bVar1 >> 4 < (bVar1 & 0xf)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x1e;
        *(uint *)(*param_1 + 0x18) = (uint)bVar1;
        uVar4 = (**(code **)*param_1)(param_1);
      }
    }
    else {
      uVar4 = CONCAT31(uVar7,bVar1);
      *(byte *)((int)param_1 + uVar5 + 0xdb) = bVar1;
    }
  } while( true );
}




void __cdecl FUN_0040da30(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *piStack_128;
  int local_124;
  size_t sStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  byte bStack_108;
  byte abStack_104 [256];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&piStack_128;
  puVar2 = (undefined4 *)param_1[6];
  iVar7 = puVar2[1];
  pbVar8 = (byte *)*puVar2;
  if (iVar7 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') goto LAB_0040dd20;
    pbVar8 = (byte *)*puVar2;
    iVar7 = puVar2[1];
  }
  pbVar9 = pbVar8 + 1;
  local_124 = (uint)*pbVar8 << 8;
  iVar7 = iVar7 + -1;
  if (iVar7 == 0) {
    cVar4 = (*(code *)puVar2[3])(param_1);
    if (cVar4 == '\0') goto LAB_0040dd20;
    pbVar9 = (byte *)*puVar2;
    iVar7 = puVar2[1];
  }
  local_124 = local_124 + -2 + (uint)*pbVar9;
  iVar7 = iVar7 + -1;
  pbVar9 = pbVar9 + 1;
  while (0x10 < local_124) {
    if (iVar7 == 0) {
      cVar4 = (*(code *)puVar2[3])(param_1);
      if (cVar4 == '\0') goto LAB_0040dd20;
      pbVar9 = (byte *)*puVar2;
      iVar7 = puVar2[1];
    }
    iVar7 = iVar7 + -1;
    uStack_11c = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    *(undefined4 *)(*param_1 + 0x14) = 0x52;
    *(uint *)(*param_1 + 0x18) = uStack_11c;
    (**(code **)(*param_1 + 4))(param_1,1);
    uStack_118 = uStack_118 & 0xffffff00;
    sStack_120 = 0;
    piStack_128 = (int *)0x1;
    do {
      if (iVar7 == 0) {
        cVar4 = (*(code *)puVar2[3])(param_1);
        if (cVar4 == '\0') goto LAB_0040dd20;
        pbVar9 = (byte *)*puVar2;
        iVar7 = puVar2[1];
      }
      bVar1 = *pbVar9;
      iVar7 = iVar7 + -1;
      *(byte *)((int)&uStack_118 + (int)piStack_128) = bVar1;
      pbVar9 = pbVar9 + 1;
      piStack_128 = (int *)((int)piStack_128 + 1);
      sStack_120 = sStack_120 + bVar1;
    } while ((int)piStack_128 < 0x11);
    iVar3 = *param_1;
    local_124 = local_124 + -0x11;
    *(uint *)(iVar3 + 0x18) = uStack_118 >> 8 & 0xff;
    *(uint *)(iVar3 + 0x1c) = uStack_118 >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x20) = uStack_118 >> 0x18;
    *(uint *)(iVar3 + 0x24) = uStack_114 & 0xff;
    *(uint *)(iVar3 + 0x28) = uStack_114 >> 8 & 0xff;
    *(uint *)(iVar3 + 0x2c) = uStack_114 >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x30) = uStack_114 >> 0x18;
    *(uint *)(iVar3 + 0x34) = uStack_110 & 0xff;
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    (**(code **)(*param_1 + 4))(param_1,2);
    iVar3 = *param_1;
    *(uint *)(iVar3 + 0x18) = uStack_110 >> 8 & 0xff;
    *(uint *)(iVar3 + 0x1c) = uStack_110 >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x20) = uStack_110 >> 0x18;
    *(uint *)(iVar3 + 0x24) = uStack_10c & 0xff;
    *(uint *)(iVar3 + 0x28) = uStack_10c >> 8 & 0xff;
    *(uint *)(iVar3 + 0x2c) = uStack_10c >> 0x10 & 0xff;
    *(uint *)(iVar3 + 0x30) = uStack_10c >> 0x18;
    *(uint *)(iVar3 + 0x34) = (uint)bStack_108;
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    (**(code **)(*param_1 + 4))(param_1,2);
    if ((0x100 < (int)sStack_120) || (local_124 < (int)sStack_120)) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
    }
    piStack_128 = (int *)0x0;
    if (0 < (int)sStack_120) {
      do {
        if (iVar7 == 0) {
          cVar4 = (*(code *)puVar2[3])(param_1);
          if (cVar4 == '\0') goto LAB_0040dd20;
          pbVar9 = (byte *)*puVar2;
          iVar7 = puVar2[1];
        }
        iVar7 = iVar7 + -1;
        abStack_104[(int)piStack_128] = *pbVar9;
        pbVar9 = pbVar9 + 1;
        piStack_128 = (int *)((int)piStack_128 + 1);
      } while ((int)piStack_128 < (int)sStack_120);
    }
    local_124 = local_124 - sStack_120;
    if ((uStack_11c & 0x10) == 0) {
      iVar3 = uStack_11c + 0x28;
      uVar6 = uStack_11c;
    }
    else {
      iVar3 = uStack_11c + 0x1c;
      uVar6 = uStack_11c - 0x10;
    }
    piStack_128 = param_1 + iVar3;
    if (((int)uVar6 < 0) || (3 < (int)uVar6)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1f;
      *(uint *)(*param_1 + 0x18) = uVar6;
      (**(code **)*param_1)(param_1);
    }
    puVar5 = (uint *)*piStack_128;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)FUN_0040c580((int)param_1);
      *piStack_128 = (int)puVar5;
    }
    *puVar5 = uStack_118;
    puVar5[1] = uStack_114;
    puVar5[2] = uStack_110;
    puVar5[3] = uStack_10c;
    *(byte *)(puVar5 + 4) = bStack_108;
    if (0 < (int)sStack_120) {
      memcpy((void *)(*piStack_128 + 0x11),abStack_104,sStack_120);
    }
  }
  if (local_124 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = pbVar9;
  puVar2[1] = iVar7;
LAB_0040dd20:
  __security_check_cookie(local_4 ^ (uint)&piStack_128);
  return;
}




undefined4 __cdecl FUN_0040dd40(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  undefined *puStack_20;
  int iStack_14;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar12 = puVar2[1];
  pbVar13 = (byte *)*puVar2;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar5 == '\0') goto LAB_0040e0ac;
    pbVar13 = (byte *)*puVar2;
    iVar12 = puVar2[1];
  }
  bVar1 = *pbVar13;
  pbVar13 = pbVar13 + 1;
  iVar12 = iVar12 + -1;
  if (iVar12 == 0) {
    uVar5 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar5 == '\0') {
LAB_0040e0ac:
      return uVar5 & 0xffffff00;
    }
    pbVar13 = (byte *)*puVar2;
    iVar12 = puVar2[1];
  }
  uVar5 = (uint)*pbVar13;
  iVar12 = iVar12 + -1;
  pbVar13 = pbVar13 + 1;
  uVar4 = (uint)bVar1 * 0x100 + -2 + uVar5;
  do {
    if ((int)uVar4 < 1) {
      if (uVar4 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0xc;
        uVar5 = (**(code **)*param_1)(param_1);
      }
      *puVar2 = pbVar13;
      puVar2[1] = iVar12;
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    iVar9 = uVar4 - 1;
    if (iVar12 == 0) {
      uVar5 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_0040e0ac;
      pbVar13 = (byte *)*puVar2;
      iVar12 = puVar2[1];
    }
    iVar12 = iVar12 + -1;
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    uVar5 = bVar1 & 0xf;
    uVar10 = (uint)(bVar1 >> 4);
    *(undefined4 *)(*param_1 + 0x14) = 0x53;
    *(uint *)(*param_1 + 0x18) = uVar5;
    *(uint *)(*param_1 + 0x1c) = uVar10;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (3 < uVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x20;
      *(uint *)(*param_1 + 0x18) = uVar5;
      (**(code **)*param_1)(param_1);
    }
    puVar6 = (undefined4 *)param_1[uVar5 + 0x24];
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)FUN_0040c5a0((int)param_1);
      param_1[uVar5 + 0x24] = (int)puVar6;
    }
    if (uVar10 == 0) {
      if (0x3f < iVar9) goto LAB_0040decd;
      *puVar6 = 0x10001;
      puVar6[1] = 0x10001;
      puVar6[2] = 0x10001;
      puVar6[3] = 0x10001;
      puVar6[4] = 0x10001;
      puVar6[5] = 0x10001;
      puVar6[6] = 0x10001;
      puVar6[7] = 0x10001;
      puVar6[8] = 0x10001;
      puVar6[9] = 0x10001;
      puVar6[10] = 0x10001;
      puVar6[0xb] = 0x10001;
      puVar6[0xc] = 0x10001;
      puVar6[0xd] = 0x10001;
      puVar6[0xe] = 0x10001;
      puVar6[0xf] = 0x10001;
      puVar6[0x10] = 0x10001;
      puVar6[0x11] = 0x10001;
      puVar6[0x12] = 0x10001;
      puVar6[0x13] = 0x10001;
      puVar6[0x14] = 0x10001;
      puVar6[0x15] = 0x10001;
      puVar6[0x16] = 0x10001;
      puVar6[0x17] = 0x10001;
      puVar6[0x18] = 0x10001;
      puVar6[0x19] = 0x10001;
      puVar6[0x1a] = 0x10001;
      puVar6[0x1b] = 0x10001;
      puVar6[0x1c] = 0x10001;
      puVar6[0x1d] = 0x10001;
      puVar6[0x1e] = 0x10001;
      puVar6[0x1f] = 0x10001;
      iVar7 = iVar9;
    }
    else if (iVar9 < 0x80) {
      *puVar6 = 0x10001;
      puVar6[1] = 0x10001;
      puVar6[2] = 0x10001;
      puVar6[3] = 0x10001;
      puVar6[4] = 0x10001;
      puVar6[5] = 0x10001;
      puVar6[6] = 0x10001;
      puVar6[7] = 0x10001;
      puVar6[8] = 0x10001;
      puVar6[9] = 0x10001;
      puVar6[10] = 0x10001;
      puVar6[0xb] = 0x10001;
      puVar6[0xc] = 0x10001;
      puVar6[0xd] = 0x10001;
      puVar6[0xe] = 0x10001;
      puVar6[0xf] = 0x10001;
      puVar6[0x10] = 0x10001;
      puVar6[0x11] = 0x10001;
      puVar6[0x12] = 0x10001;
      puVar6[0x13] = 0x10001;
      puVar6[0x14] = 0x10001;
      puVar6[0x15] = 0x10001;
      puVar6[0x16] = 0x10001;
      puVar6[0x17] = 0x10001;
      puVar6[0x18] = 0x10001;
      puVar6[0x19] = 0x10001;
      puVar6[0x1a] = 0x10001;
      puVar6[0x1b] = 0x10001;
      puVar6[0x1c] = 0x10001;
      puVar6[0x1d] = 0x10001;
      puVar6[0x1e] = 0x10001;
      puVar6[0x1f] = 0x10001;
      iVar7 = iVar9 >> 1;
    }
    else {
LAB_0040decd:
      iVar7 = 0x40;
    }
    switch(iVar7) {
    case 4:
      puStack_20 = &DAT_00429b28;
      break;
    default:
      puStack_20 = &DAT_00429680;
      break;
    case 9:
      puStack_20 = &DAT_00429ac0;
      break;
    case 0x10:
      puStack_20 = &DAT_00429a40;
      break;
    case 0x19:
      puStack_20 = &DAT_00429998;
      break;
    case 0x24:
      puStack_20 = &DAT_004298c8;
      break;
    case 0x31:
      puStack_20 = &DAT_004297c0;
    }
    iStack_14 = 0;
    if (0 < iVar7) {
      do {
        if (uVar10 == 0) {
          if (iVar12 == 0) {
            uVar5 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar5 == '\0') goto LAB_0040e0ac;
            pbVar13 = (byte *)*puVar2;
            iVar12 = puVar2[1];
          }
          uVar8 = (ushort)*pbVar13;
        }
        else {
          if (iVar12 == 0) {
            uVar5 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar5 == '\0') goto LAB_0040e0ac;
            pbVar13 = (byte *)*puVar2;
            iVar12 = puVar2[1];
          }
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          iVar12 = iVar12 + -1;
          if (iVar12 == 0) {
            uVar5 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar5 == '\0') goto LAB_0040e0ac;
            pbVar13 = (byte *)*puVar2;
            iVar12 = puVar2[1];
          }
          uVar8 = (ushort)bVar1 * 0x100 + (ushort)*pbVar13;
        }
        iVar12 = iVar12 + -1;
        pbVar13 = pbVar13 + 1;
        iVar14 = iStack_14 * 4;
        iStack_14 = iStack_14 + 1;
        *(ushort *)((int)puVar6 + *(int *)(puStack_20 + iVar14) * 2) = uVar8;
      } while (iStack_14 < iVar7);
    }
    if (1 < *(int *)(*param_1 + 0x68)) {
      puVar11 = (ushort *)(puVar6 + 1);
      iVar14 = 8;
      do {
        iVar3 = *param_1;
        *(uint *)(iVar3 + 0x18) = (uint)puVar11[-2];
        *(uint *)(iVar3 + 0x1c) = (uint)puVar11[-1];
        *(uint *)(iVar3 + 0x20) = (uint)*puVar11;
        *(uint *)(iVar3 + 0x24) = (uint)puVar11[1];
        *(uint *)(iVar3 + 0x28) = (uint)puVar11[2];
        *(uint *)(iVar3 + 0x2c) = (uint)puVar11[3];
        *(uint *)(iVar3 + 0x30) = (uint)puVar11[4];
        *(uint *)(iVar3 + 0x34) = (uint)puVar11[5];
        *(undefined4 *)(*param_1 + 0x14) = 0x5f;
        (**(code **)(*param_1 + 4))(param_1,2);
        puVar11 = puVar11 + 8;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar5 = iVar9 - iVar7;
    uVar4 = uVar5 - iVar7;
    if (uVar10 == 0) {
      uVar4 = uVar5;
    }
  } while( true );
}




void __cdecl FUN_0040e110(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  byte abStack_14 [16];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&local_20;
  puVar1 = (undefined4 *)param_1[6];
  iVar3 = puVar1[1];
  pbVar4 = (byte *)*puVar1;
  if (iVar3 == 0) {
    cVar2 = (*(code *)puVar1[3])(param_1);
    if (cVar2 == '\0') goto LAB_0040e213;
    pbVar4 = (byte *)*puVar1;
    iVar3 = puVar1[1];
  }
  pbVar5 = pbVar4 + 1;
  local_20 = (uint)*pbVar4 << 8;
  iVar3 = iVar3 + -1;
  if (iVar3 == 0) {
    cVar2 = (*(code *)puVar1[3])(param_1);
    if (cVar2 == '\0') {
LAB_0040e213:
      __security_check_cookie(local_4 ^ (uint)&local_20);
      return;
    }
    pbVar5 = (byte *)*puVar1;
    iVar3 = puVar1[1];
  }
  local_20 = (local_20 - 2) + (uint)*pbVar5;
  iVar3 = iVar3 + -1;
  pbVar5 = pbVar5 + 1;
  if ((int)local_20 < 0xe) {
    uStack_18 = 0;
    if (0 < (int)local_20) {
      uStack_18 = local_20;
    }
    if (uStack_18 == 0) goto LAB_0040e1d7;
  }
  else {
    uStack_18 = 0xe;
  }
  uStack_1c = 0;
  do {
    if (iVar3 == 0) {
      cVar2 = (*(code *)puVar1[3])(param_1);
      if (cVar2 == '\0') goto LAB_0040e213;
      pbVar5 = (byte *)*puVar1;
      iVar3 = puVar1[1];
    }
    iVar3 = iVar3 + -1;
    abStack_14[uStack_1c] = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uStack_1c = uStack_1c + 1;
  } while (uStack_1c < uStack_18);
LAB_0040e1d7:
  local_20 = local_20 - uStack_18;
  if (param_1[0x65] == 0xe0) {
    FUN_0040d530(param_1,(char *)abStack_14,uStack_18,local_20);
  }
  else if (param_1[0x65] == 0xee) {
    FUN_0040d7a0(param_1,(char *)abStack_14,uStack_18,local_20);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    *(int *)(*param_1 + 0x18) = param_1[0x65];
    (**(code **)*param_1)(param_1);
  }
  *puVar1 = pbVar5;
  puVar1[1] = iVar3;
  if (0 < (int)local_20) {
    (**(code **)(param_1[6] + 0x10))(param_1,local_20);
  }
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}




uint __cdecl FUN_0040e280(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar7 = (byte *)*puVar2;
  iVar6 = puVar2[1];
  if (*(char *)(param_1[0x6b] + 0xd) == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3c;
    strncpy((char *)(*param_1 + 0x18),&DAT_0042f31c,0x50);
    (**(code **)*param_1)(param_1);
  }
  if (2 < param_1[9]) {
    if (iVar6 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_0040e6b4;
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_0040e6b4;
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    pbVar8 = pbVar7 + 1;
    if ((uint)*pbVar7 + (uint)bVar1 * 0x100 != 0x18) {
      *(undefined4 *)(*param_1 + 0x14) = 0xc;
      (**(code **)*param_1)(param_1);
    }
    if (iVar6 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_0040e6b4;
      pbVar8 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    pbVar9 = pbVar8 + 1;
    if (*pbVar8 != 0xd) {
      *(undefined4 *)(*param_1 + 0x14) = 0x46;
      *(int *)(*param_1 + 0x18) = param_1[0x65];
      (**(code **)*param_1)(param_1);
    }
    if (iVar6 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_0040e6b4;
      pbVar9 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_0040e6b4;
      pbVar9 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    pbVar7 = pbVar9 + 1;
    if (CONCAT11(bVar1,*pbVar9) == 0xff) {
      if (iVar6 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_0040e6b4;
        pbVar7 = (byte *)*puVar2;
        iVar6 = puVar2[1];
      }
      bVar1 = *pbVar7;
      iVar6 = iVar6 + -1;
      pbVar7 = pbVar7 + 1;
      if (bVar1 == 3) {
        if (iVar6 == 0) {
          uVar3 = (*(code *)puVar2[3])(param_1);
          if ((char)uVar3 == '\0') goto LAB_0040e6b4;
          pbVar7 = (byte *)*puVar2;
          iVar6 = puVar2[1];
        }
        puVar5 = (uint *)param_1[0x31];
        iVar6 = iVar6 + -1;
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        if ((uint)bVar1 == puVar5[0x16]) {
          if (iVar6 == 0) {
            uVar3 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar3 == '\0') goto LAB_0040e6b4;
            pbVar7 = (byte *)*puVar2;
            iVar6 = puVar2[1];
            puVar5 = (uint *)param_1[0x31];
          }
          bVar1 = *pbVar7;
          iVar6 = iVar6 + -1;
          pbVar7 = pbVar7 + 1;
          if ((uint)bVar1 == *puVar5) {
            if (iVar6 == 0) {
              uVar3 = (*(code *)puVar2[3])(param_1);
              if ((char)uVar3 == '\0') goto LAB_0040e6b4;
              pbVar7 = (byte *)*puVar2;
              iVar6 = puVar2[1];
              puVar5 = (uint *)param_1[0x31];
            }
            bVar1 = *pbVar7;
            iVar6 = iVar6 + -1;
            pbVar7 = pbVar7 + 1;
            if ((uint)bVar1 == puVar5[0x2c]) {
              if (iVar6 == 0) {
                uVar3 = (*(code *)puVar2[3])(param_1);
                if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                pbVar7 = (byte *)*puVar2;
                iVar6 = puVar2[1];
              }
              bVar1 = *pbVar7;
              iVar6 = iVar6 + -1;
              pbVar7 = pbVar7 + 1;
              if (bVar1 == 0x80) {
                if (iVar6 == 0) {
                  uVar3 = (*(code *)puVar2[3])(param_1);
                  if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                  pbVar7 = (byte *)*puVar2;
                  iVar6 = puVar2[1];
                }
                bVar1 = *pbVar7;
                pbVar8 = pbVar7 + 1;
                iVar6 = iVar6 + -1;
                if (iVar6 == 0) {
                  uVar3 = (*(code *)puVar2[3])(param_1);
                  if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                  pbVar8 = (byte *)*puVar2;
                  iVar6 = puVar2[1];
                }
                iVar6 = iVar6 + -1;
                pbVar7 = pbVar8 + 1;
                if (CONCAT11(bVar1,*pbVar8) == 0) {
                  if (iVar6 == 0) {
                    uVar3 = (*(code *)puVar2[3])(param_1);
                    if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                    pbVar7 = (byte *)*puVar2;
                    iVar6 = puVar2[1];
                  }
                  bVar1 = *pbVar7;
                  pbVar8 = pbVar7 + 1;
                  iVar6 = iVar6 + -1;
                  if (iVar6 == 0) {
                    uVar3 = (*(code *)puVar2[3])(param_1);
                    if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                    pbVar8 = (byte *)*puVar2;
                    iVar6 = puVar2[1];
                  }
                  iVar6 = iVar6 + -1;
                  pbVar7 = pbVar8 + 1;
                  if (CONCAT11(bVar1,*pbVar8) == 0) {
                    if (iVar6 == 0) {
                      uVar3 = (*(code *)puVar2[3])(param_1);
                      if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                      pbVar7 = (byte *)*puVar2;
                      iVar6 = puVar2[1];
                    }
                    bVar1 = *pbVar7;
                    iVar6 = iVar6 + -1;
                    pbVar7 = pbVar7 + 1;
                    if (bVar1 == 0) {
                      if (iVar6 == 0) {
                        uVar3 = (*(code *)puVar2[3])(param_1);
                        if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                        pbVar7 = (byte *)*puVar2;
                        iVar6 = puVar2[1];
                      }
                      bVar1 = *pbVar7;
                      pbVar8 = pbVar7 + 1;
                      iVar6 = iVar6 + -1;
                      if (iVar6 == 0) {
                        uVar3 = (*(code *)puVar2[3])(param_1);
                        if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                        pbVar8 = (byte *)*puVar2;
                        iVar6 = puVar2[1];
                      }
                      iVar6 = iVar6 + -1;
                      pbVar7 = pbVar8 + 1;
                      if (CONCAT11(bVar1,*pbVar8) == 1) {
                        if (iVar6 == 0) {
                          uVar3 = (*(code *)puVar2[3])(param_1);
                          if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                          pbVar7 = (byte *)*puVar2;
                          iVar6 = puVar2[1];
                        }
                        bVar1 = *pbVar7;
                        pbVar8 = pbVar7 + 1;
                        iVar6 = iVar6 + -1;
                        if (iVar6 == 0) {
                          uVar3 = (*(code *)puVar2[3])(param_1);
                          if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                          pbVar8 = (byte *)*puVar2;
                          iVar6 = puVar2[1];
                        }
                        iVar6 = iVar6 + -1;
                        pbVar7 = pbVar8 + 1;
                        if (CONCAT11(bVar1,*pbVar8) == 0) {
                          if (iVar6 == 0) {
                            uVar3 = (*(code *)puVar2[3])(param_1);
                            if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                            pbVar7 = (byte *)*puVar2;
                            iVar6 = puVar2[1];
                          }
                          bVar1 = *pbVar7;
                          iVar6 = iVar6 + -1;
                          pbVar7 = pbVar7 + 1;
                          if (bVar1 == 0) {
                            if (iVar6 == 0) {
                              uVar3 = (*(code *)puVar2[3])(param_1);
                              if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                              pbVar7 = (byte *)*puVar2;
                              iVar6 = puVar2[1];
                            }
                            bVar1 = *pbVar7;
                            pbVar8 = pbVar7 + 1;
                            iVar6 = iVar6 + -1;
                            if (iVar6 == 0) {
                              uVar3 = (*(code *)puVar2[3])(param_1);
                              if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                              pbVar8 = (byte *)*puVar2;
                              iVar6 = puVar2[1];
                            }
                            iVar6 = iVar6 + -1;
                            pbVar7 = pbVar8 + 1;
                            if (CONCAT11(bVar1,*pbVar8) == 1) {
                              if (iVar6 == 0) {
                                uVar3 = (*(code *)puVar2[3])(param_1);
                                if ((char)uVar3 == '\0') goto LAB_0040e6b4;
                                pbVar7 = (byte *)*puVar2;
                                iVar6 = puVar2[1];
                              }
                              bVar1 = *pbVar7;
                              pbVar8 = pbVar7 + 1;
                              iVar6 = iVar6 + -1;
                              if (iVar6 == 0) {
                                uVar3 = (*(code *)puVar2[3])(param_1);
                                if ((char)uVar3 == '\0') {
LAB_0040e6b4:
                                  return uVar3 & 0xffffff00;
                                }
                                pbVar8 = (byte *)*puVar2;
                                iVar6 = puVar2[1];
                              }
                              uVar4 = 0;
                              iVar6 = iVar6 + -1;
                              pbVar7 = pbVar8 + 1;
                              if (CONCAT11(bVar1,*pbVar8) == 0) goto LAB_0040e6e2;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x1c;
  uVar4 = (**(code **)*param_1)(param_1);
LAB_0040e6e2:
  param_1[0x43] = 1;
  *puVar2 = pbVar7;
  puVar2[1] = iVar6;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}




uint __cdecl FUN_0040e700(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  int iVar14;
  
  puVar4 = (undefined4 *)param_1[6];
  iVar14 = puVar4[1];
  puVar10 = (undefined1 *)*puVar4;
  *(undefined1 *)(param_1 + 0x32) = param_2;
  *(undefined1 *)((int)param_1 + 0xc9) = param_3;
  *(undefined1 *)((int)param_1 + 0xca) = param_4;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    puVar10 = (undefined1 *)*puVar4;
    iVar14 = puVar4[1];
  }
  uVar1 = *puVar10;
  puVar10 = puVar10 + 1;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    puVar10 = (undefined1 *)*puVar4;
    iVar14 = puVar4[1];
  }
  uVar2 = *puVar10;
  pbVar11 = puVar10 + 1;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    pbVar11 = (byte *)*puVar4;
    iVar14 = puVar4[1];
  }
  pbVar12 = pbVar11 + 1;
  param_1[0x30] = (uint)*pbVar11;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    pbVar12 = (byte *)*puVar4;
    iVar14 = puVar4[1];
  }
  pbVar11 = pbVar12 + 1;
  iVar8 = (uint)*pbVar12 << 8;
  param_1[8] = iVar8;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    pbVar11 = (byte *)*puVar4;
    iVar14 = puVar4[1];
    iVar8 = param_1[8];
  }
  pbVar12 = pbVar11 + 1;
  param_1[8] = (uint)*pbVar11 + iVar8;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    pbVar12 = (byte *)*puVar4;
    iVar14 = puVar4[1];
  }
  pbVar11 = pbVar12 + 1;
  iVar8 = (uint)*pbVar12 << 8;
  param_1[7] = iVar8;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ea62;
    pbVar11 = (byte *)*puVar4;
    iVar14 = puVar4[1];
    iVar8 = param_1[7];
  }
  pbVar12 = pbVar11 + 1;
  param_1[7] = (uint)*pbVar11 + iVar8;
  iVar14 = iVar14 + -1;
  if (iVar14 == 0) {
    uVar6 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar6 == '\0') {
LAB_0040ea62:
      return uVar6 & 0xffffff00;
    }
    pbVar12 = (byte *)*puVar4;
    iVar14 = puVar4[1];
  }
  iVar14 = iVar14 + -1;
  iVar8 = *param_1;
  pbVar11 = pbVar12 + 1;
  param_1[9] = (uint)*pbVar12;
  *(int *)(iVar8 + 0x18) = param_1[0x65];
  *(int *)(iVar8 + 0x1c) = param_1[7];
  *(int *)(iVar8 + 0x20) = param_1[8];
  *(int *)(iVar8 + 0x24) = param_1[9];
  *(undefined4 *)(*param_1 + 0x14) = 0x66;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(char *)(param_1[0x6b] + 0xd) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3d;
    (**(code **)*param_1)(param_1);
  }
  if (((param_1[8] == 0) || (param_1[7] == 0)) || (iVar8 = param_1[9], iVar8 < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
    iVar8 = param_1[9];
  }
  if (CONCAT11(uVar1,uVar2) - 8 != iVar8 * 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
    iVar8 = param_1[9];
  }
  if (param_1[0x31] == 0) {
    iVar7 = (**(code **)param_1[1])(param_1,1,param_1[9] * 0x58);
    iVar8 = param_1[9];
    param_1[0x31] = iVar7;
  }
  _param_2 = 0;
  if (0 < iVar8) {
    do {
      if (iVar14 == 0) {
        uVar6 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_0040ea62;
        pbVar11 = (byte *)*puVar4;
        iVar14 = puVar4[1];
      }
      uVar6 = (uint)*pbVar11;
      iVar14 = iVar14 + -1;
      puVar5 = (uint *)param_1[0x31];
      pbVar11 = pbVar11 + 1;
      iVar8 = 0;
      puVar13 = puVar5;
      if (0 < (int)_param_2) {
LAB_0040e970:
        if (uVar6 != *puVar13) goto code_r0x0040e974;
        uVar6 = *puVar5;
        puVar13 = puVar5 + 0x16;
        if (1 < (int)_param_2) {
          iVar8 = _param_2 - 1;
          uVar9 = uVar6;
          do {
            uVar6 = *puVar13;
            if ((int)*puVar13 <= (int)uVar9) {
              uVar6 = uVar9;
            }
            puVar13 = puVar13 + 0x16;
            iVar8 = iVar8 + -1;
            uVar9 = uVar6;
          } while (iVar8 != 0);
        }
        uVar6 = uVar6 + 1;
      }
LAB_0040e9ab:
      *puVar13 = uVar6;
      puVar13[1] = _param_2;
      if (iVar14 == 0) {
        uVar6 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_0040ea62;
        pbVar11 = (byte *)*puVar4;
        iVar14 = puVar4[1];
      }
      bVar3 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      puVar13[2] = (uint)(bVar3 >> 4);
      puVar13[3] = bVar3 & 0xf;
      iVar14 = iVar14 + -1;
      if (iVar14 == 0) {
        uVar6 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_0040ea62;
        pbVar11 = (byte *)*puVar4;
        iVar14 = puVar4[1];
      }
      iVar14 = iVar14 + -1;
      puVar13[4] = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
      iVar8 = *param_1;
      *(uint *)(iVar8 + 0x18) = *puVar13;
      *(uint *)(iVar8 + 0x1c) = puVar13[2];
      *(uint *)(iVar8 + 0x20) = puVar13[3];
      *(uint *)(iVar8 + 0x24) = puVar13[4];
      *(undefined4 *)(*param_1 + 0x14) = 0x67;
      (**(code **)(*param_1 + 4))(param_1,1);
      _param_2 = _param_2 + 1;
    } while ((int)_param_2 < param_1[9]);
  }
  iVar8 = param_1[0x6b];
  *(undefined1 *)(iVar8 + 0xd) = 1;
  puVar4[1] = iVar14;
  *puVar4 = pbVar11;
  return CONCAT31((int3)((uint)iVar8 >> 8),1);
code_r0x0040e974:
  iVar8 = iVar8 + 1;
  puVar13 = puVar13 + 0x16;
  if ((int)_param_2 <= iVar8) goto LAB_0040e9ab;
  goto LAB_0040e970;
}




uint __cdecl FUN_0040ea70(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  byte *pbVar16;
  int iStack_10;
  int *piStack_c;
  
  puVar5 = (undefined4 *)param_1[6];
  puVar11 = (undefined1 *)*puVar5;
  iVar10 = puVar5[1];
  if (*(char *)(param_1[0x6b] + 0xd) == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x3c;
    strncpy((char *)(*param_1 + 0x18),&DAT_0042f318,0x50);
    (**(code **)*param_1)(param_1);
  }
  if (iVar10 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ed36;
    puVar11 = (undefined1 *)*puVar5;
    iVar10 = puVar5[1];
  }
  uVar2 = *puVar11;
  puVar11 = puVar11 + 1;
  iVar10 = iVar10 + -1;
  if (iVar10 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ed36;
    puVar11 = (undefined1 *)*puVar5;
    iVar10 = puVar5[1];
  }
  uVar3 = *puVar11;
  pbVar12 = puVar11 + 1;
  iVar10 = iVar10 + -1;
  if (iVar10 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ed36;
    pbVar12 = (byte *)*puVar5;
    iVar10 = puVar5[1];
  }
  bVar1 = *pbVar12;
  iVar10 = iVar10 + -1;
  uVar8 = (uint)bVar1;
  pbVar12 = pbVar12 + 1;
  *(undefined4 *)(*param_1 + 0x14) = 0x69;
  *(uint *)(*param_1 + 0x18) = uVar8;
  (**(code **)(*param_1 + 4))(param_1,1);
  if ((((uint)CONCAT11(uVar2,uVar3) != uVar8 * 2 + 6) || (4 < bVar1)) ||
     ((bVar1 == 0 && (*(char *)((int)param_1 + 0xc9) == '\0')))) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  param_1[0x4c] = uVar8;
  iStack_10 = 0;
  if (bVar1 != 0) {
    piStack_c = param_1 + 0x4d;
    do {
      if (iVar10 == 0) {
        uVar6 = (*(code *)puVar5[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_0040ed36;
        pbVar12 = (byte *)*puVar5;
        iVar10 = puVar5[1];
      }
      piVar9 = param_1 + 0x4d;
      uVar6 = (uint)*pbVar12;
      iVar10 = iVar10 + -1;
      pbVar12 = pbVar12 + 1;
      iVar13 = 0;
      if (0 < iStack_10) {
LAB_0040ebe4:
        if (uVar6 != *(uint *)*piVar9) goto code_r0x0040ebea;
        iVar13 = *(int *)param_1[0x4d];
        if (1 < iStack_10) {
          iVar14 = iStack_10 + -1;
          iVar7 = iVar13;
          piVar9 = param_1 + 0x4e;
          do {
            iVar13 = *(int *)*piVar9;
            if (*(int *)*piVar9 <= iVar7) {
              iVar13 = iVar7;
            }
            iVar14 = iVar14 + -1;
            iVar7 = iVar13;
            piVar9 = piVar9 + 1;
          } while (iVar14 != 0);
        }
        uVar6 = iVar13 + 1;
      }
LAB_0040ec25:
      iVar13 = 0;
      puVar15 = (uint *)param_1[0x31];
      if (0 < param_1[9]) {
        do {
          if (uVar6 == *puVar15) goto LAB_0040ec58;
          iVar13 = iVar13 + 1;
          puVar15 = puVar15 + 0x16;
        } while (iVar13 < param_1[9]);
      }
      *(undefined4 *)(*param_1 + 0x14) = 4;
      *(uint *)(*param_1 + 0x18) = uVar6;
      (**(code **)*param_1)(param_1);
LAB_0040ec58:
      *piStack_c = (int)puVar15;
      if (iVar10 == 0) {
        uVar6 = (*(code *)puVar5[3])(param_1);
        if ((char)uVar6 == '\0') goto LAB_0040ed36;
        pbVar12 = (byte *)*puVar5;
        iVar10 = puVar5[1];
      }
      bVar4 = *pbVar12;
      iVar10 = iVar10 + -1;
      pbVar12 = pbVar12 + 1;
      puVar15[5] = (uint)(bVar4 >> 4);
      puVar15[6] = bVar4 & 0xf;
      iVar13 = *param_1;
      *(uint *)(iVar13 + 0x18) = *puVar15;
      *(uint *)(iVar13 + 0x1c) = puVar15[5];
      *(uint *)(iVar13 + 0x20) = puVar15[6];
      *(undefined4 *)(*param_1 + 0x14) = 0x6a;
      (**(code **)(*param_1 + 4))(param_1,1);
      piStack_c = piStack_c + 1;
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < (int)uVar8);
  }
  if (iVar10 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ed36;
    pbVar12 = (byte *)*puVar5;
    iVar10 = puVar5[1];
  }
  pbVar16 = pbVar12 + 1;
  param_1[0x5e] = (uint)*pbVar12;
  iVar10 = iVar10 + -1;
  if (iVar10 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') goto LAB_0040ed36;
    pbVar16 = (byte *)*puVar5;
    iVar10 = puVar5[1];
  }
  pbVar12 = pbVar16 + 1;
  param_1[0x5f] = (uint)*pbVar16;
  iVar10 = iVar10 + -1;
  if (iVar10 == 0) {
    uVar6 = (*(code *)puVar5[3])(param_1);
    if ((char)uVar6 == '\0') {
LAB_0040ed36:
      return uVar6 & 0xffffff00;
    }
    pbVar12 = (byte *)*puVar5;
    iVar10 = puVar5[1];
  }
  bVar4 = *pbVar12;
  param_1[0x60] = (uint)(bVar4 >> 4);
  param_1[0x61] = bVar4 & 0xf;
  iVar13 = *param_1;
  *(int *)(iVar13 + 0x18) = param_1[0x5e];
  *(int *)(iVar13 + 0x1c) = param_1[0x5f];
  *(int *)(iVar13 + 0x20) = param_1[0x60];
  *(int *)(iVar13 + 0x24) = param_1[0x61];
  *(undefined4 *)(*param_1 + 0x14) = 0x6b;
  (**(code **)(*param_1 + 4))(param_1,1);
  iVar13 = param_1[0x6b];
  *(undefined4 *)(iVar13 + 0x10) = 0;
  if (bVar1 != 0) {
    param_1[0x1f] = param_1[0x1f] + 1;
  }
  *puVar5 = pbVar12 + 1;
  puVar5[1] = iVar10 + -1;
  return CONCAT31((int3)((uint)iVar13 >> 8),1);
code_r0x0040ebea:
  iVar13 = iVar13 + 1;
  piVar9 = piVar9 + 1;
  if (iStack_10 <= iVar13) goto LAB_0040ec25;
  goto LAB_0040ebe4;
}




void __cdecl FUN_0040edd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0xa8);
  *(undefined4 **)(param_1 + 0x1ac) = puVar1;
  iVar2 = 0x10;
  *puVar1 = &LAB_0040f650;
  puVar1[1] = FUN_0040f080;
  puVar1[2] = FUN_0040f5c0;
  puVar1[6] = FUN_0040f690;
  puVar1[0x17] = 0;
  puVar3 = puVar1 + 0x18;
  do {
    puVar3[-0x11] = FUN_0040f690;
    *puVar3 = 0;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  puVar1[7] = FUN_0040e110;
  puVar1[0x15] = FUN_0040e110;
  iVar2 = *(int *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  return;
}




undefined4 __cdecl FUN_0040ee80(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined3 uVar3;
  uint uVar2;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[0x65];
  *(undefined4 *)(*param_1 + 0x14) = 0x7c;
  *(int *)(*param_1 + 0x18) = iVar5;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  do {
    if (iVar5 < 0xc0) {
LAB_0040eeba:
      iVar4 = 2;
    }
    else if (((iVar5 - 0xd0U < 8) && (iVar5 != (param_2 + 1U & 7) + 0xd0)) &&
            (iVar5 != (param_2 + 2U & 7) + 0xd0)) {
      if ((iVar5 == (param_2 - 1U & 7) + 0xd0) || (iVar5 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_0040eeba;
      iVar4 = 1;
    }
    else {
      iVar4 = 3;
    }
    *(undefined4 *)(*param_1 + 0x14) = 99;
    *(int *)(*param_1 + 0x18) = iVar5;
    *(int *)(*param_1 + 0x1c) = iVar4;
    uVar1 = (**(code **)(*param_1 + 4))(param_1,4);
    uVar3 = (undefined3)((uint)uVar1 >> 8);
    if (iVar4 == 1) {
      param_1[0x65] = 0;
      return CONCAT31(uVar3,1);
    }
    if (iVar4 == 2) {
      uVar2 = FUN_0040ef80(param_1);
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffff00;
      }
      iVar5 = param_1[0x65];
    }
    else if (iVar4 == 3) {
      return CONCAT31(uVar3,1);
    }
  } while( true );
}




uint __cdecl FUN_0040ef80(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar2;
  iVar5 = puVar2[1];
  do {
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') {
LAB_0040f024:
        return uVar3 & 0xffffff00;
      }
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar6;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      iVar5 = iVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x6b] + 0x14) = *(int *)(param_1[0x6b] + 0x14) + 1;
      *puVar2 = pbVar6;
      puVar2[1] = iVar5;
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_0040f024;
        pbVar6 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
    }
    do {
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_0040f024;
        pbVar6 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      uVar3 = (uint)*pbVar6;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
    } while (uVar3 == 0xff);
    iVar4 = *(int *)(param_1[0x6b] + 0x14);
    if (uVar3 != 0) {
      if (iVar4 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x77;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6b] + 0x14);
        *(uint *)(*param_1 + 0x1c) = uVar3;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        iVar4 = param_1[0x6b];
        *(undefined4 *)(iVar4 + 0x14) = 0;
      }
      param_1[0x65] = uVar3;
      *puVar2 = pbVar6;
      puVar2[1] = iVar5;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    *(int *)(param_1[0x6b] + 0x14) = iVar4 + 2;
    *puVar2 = pbVar6;
    puVar2[1] = iVar5;
  } while( true );
}




undefined4 __cdecl FUN_0040f080(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  iVar9 = param_1[0x65];
LAB_0040f08e:
  if (iVar9 == 0) {
    if (*(char *)(param_1[0x6b] + 0xc) == '\0') {
      puVar3 = (undefined4 *)param_1[6];
      iVar9 = puVar3[1];
      pbVar10 = (byte *)*puVar3;
      if (iVar9 == 0) {
        cVar5 = (*(code *)puVar3[3])(param_1);
        if (cVar5 == '\0') {
          return 0;
        }
        pbVar10 = (byte *)*puVar3;
        iVar9 = puVar3[1];
      }
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        cVar5 = (*(code *)puVar3[3])(param_1);
        if (cVar5 == '\0') {
          return 0;
        }
        pbVar10 = (byte *)*puVar3;
        iVar9 = puVar3[1];
      }
      uVar8 = (uint)*pbVar10;
      if ((bVar1 != 0xff) || (uVar8 != 0xd8)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x37;
        *(uint *)(*param_1 + 0x18) = (uint)bVar1;
        *(uint *)(*param_1 + 0x1c) = uVar8;
        (**(code **)*param_1)(param_1);
      }
      param_1[0x65] = uVar8;
      puVar3[1] = iVar9 + -1;
      *puVar3 = pbVar10 + 1;
    }
    else {
      uVar8 = FUN_0040ef80(param_1);
      if ((char)uVar8 == '\0') {
        return 0;
      }
    }
  }
  switch(param_1[0x65]) {
  case 1:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
    *(int *)(*param_1 + 0x18) = param_1[0x65];
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x65] = 0;
    iVar9 = 0;
    goto LAB_0040f08e;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    goto LAB_0040f3fb;
  case 0xc0:
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 1;
    goto LAB_0040f218;
  case 0xc1:
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    goto LAB_0040f218;
  case 0xc2:
    uVar14 = 0;
    uVar13 = 1;
    uVar12 = 0;
    goto LAB_0040f218;
  case 0xc3:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xcb:
  case 0xcd:
  case 0xce:
  case 0xcf:
    *(undefined4 *)(*param_1 + 0x14) = 0x3f;
LAB_0040f3fb:
    *(int *)(*param_1 + 0x18) = param_1[0x65];
    (**(code **)*param_1)(param_1);
    goto LAB_0040f410;
  case 0xc4:
    cVar5 = FUN_0040da30(param_1);
    break;
  case 0xc9:
    uVar14 = 1;
    uVar13 = 0;
    uVar12 = 0;
    goto LAB_0040f218;
  case 0xca:
    uVar14 = 1;
    uVar13 = 1;
    uVar12 = 0;
LAB_0040f218:
    uVar8 = FUN_0040e700(param_1,uVar12,uVar13,uVar14);
    cVar5 = (char)uVar8;
    break;
  case 0xcc:
    uVar7 = FUN_0040d880(param_1);
    cVar5 = (char)uVar7;
    break;
  case 0xd8:
    *(undefined4 *)(*param_1 + 0x14) = 0x68;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (*(char *)(param_1[0x6b] + 0xc) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x40;
      (**(code **)*param_1)(param_1);
    }
    iVar9 = 0x10;
    puVar6 = (undefined1 *)((int)param_1 + 0xdb);
    do {
      puVar6[-0x10] = 0;
      *puVar6 = 1;
      puVar6[0x10] = 5;
      iVar9 = iVar9 + -1;
      puVar6 = puVar6 + 1;
    } while (iVar9 != 0);
    param_1[0x3f] = 0;
    param_1[10] = 0;
    param_1[0x43] = 0;
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x100;
    *(undefined4 *)((int)param_1 + 0x102) = 0x10001;
    *(undefined4 *)((int)param_1 + 0x106) = 1;
    *(undefined1 *)(param_1[0x6b] + 0xc) = 1;
    iVar9 = 0;
    param_1[0x65] = 0;
    goto LAB_0040f08e;
  case 0xd9:
    *(undefined4 *)(*param_1 + 0x14) = 0x57;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x65] = 0;
    return 2;
  case 0xda:
    uVar8 = FUN_0040ea70(param_1);
    if ((char)uVar8 == '\0') {
      return 0;
    }
    param_1[0x65] = 0;
    return 1;
  case 0xdb:
    uVar7 = FUN_0040dd40(param_1);
    cVar5 = (char)uVar7;
    break;
  case 0xdc:
    uVar7 = FUN_0040f690(param_1);
    cVar5 = (char)uVar7;
    break;
  case 0xdd:
    goto LAB_0040f27f;
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    cVar5 = (**(code **)(param_1[0x6b] + -0x364 + param_1[0x65] * 4))(param_1);
    break;
  case 0xf8:
    uVar7 = FUN_0040e280(param_1);
    cVar5 = (char)uVar7;
    break;
  case 0xfe:
    cVar5 = (**(code **)(param_1[0x6b] + 0x18))(param_1);
  }
  if (cVar5 == '\0') {
    return 0;
  }
LAB_0040f410:
  param_1[0x65] = 0;
  iVar9 = 0;
  goto LAB_0040f08e;
LAB_0040f27f:
  piVar4 = (int *)param_1[6];
  iVar9 = piVar4[1];
  pbVar10 = (byte *)*piVar4;
  if (iVar9 == 0) {
    cVar5 = (*(code *)piVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar10 = (byte *)*piVar4;
    iVar9 = piVar4[1];
  }
  bVar1 = *pbVar10;
  pbVar10 = pbVar10 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    cVar5 = (*(code *)piVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar10 = (byte *)*piVar4;
    iVar9 = piVar4[1];
  }
  iVar9 = iVar9 + -1;
  pbVar11 = pbVar10 + 1;
  if ((uint)*pbVar10 + (uint)bVar1 * 0x100 != 4) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  if (iVar9 == 0) {
    cVar5 = (*(code *)piVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar11 = (byte *)*piVar4;
    iVar9 = piVar4[1];
  }
  bVar1 = *pbVar11;
  pbVar11 = pbVar11 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    cVar5 = (*(code *)piVar4[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar11 = (byte *)*piVar4;
    iVar9 = piVar4[1];
  }
  bVar2 = *pbVar11;
  *(undefined4 *)(*param_1 + 0x14) = 0x54;
  *(uint *)(*param_1 + 0x18) = (uint)CONCAT11(bVar1,bVar2);
  (**(code **)(*param_1 + 4))(param_1,1);
  param_1[0x3f] = (uint)CONCAT11(bVar1,bVar2);
  *piVar4 = (int)(pbVar11 + 1);
  piVar4[1] = iVar9 + -1;
  iVar9 = 0;
  param_1[0x65] = 0;
  goto LAB_0040f08e;
}




uint __cdecl FUN_0040f5c0(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x65] == 0) {
    uVar1 = FUN_0040ef80(param_1);
    if ((char)uVar1 == '\0') goto LAB_0040f645;
  }
  if (param_1[0x65] == *(int *)(param_1[0x6b] + 0x10) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 100;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x6b] + 0x10);
    (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x65] = 0;
  }
  else {
    uVar1 = (**(code **)(param_1[6] + 0x14))(param_1,*(int *)(param_1[0x6b] + 0x10));
    if ((char)uVar1 == '\0') {
LAB_0040f645:
      return uVar1 & 0xffffff00;
    }
  }
  *(uint *)(param_1[0x6b] + 0x10) = *(int *)(param_1[0x6b] + 0x10) + 1U & 7;
  return 1;
}




uint __cdecl FUN_0040f690(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  piVar3 = (int *)param_1[6];
  iVar6 = piVar3[1];
  pbVar7 = (byte *)*piVar3;
  if (iVar6 == 0) {
    uVar4 = (*(code *)piVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_0040f6d4;
    pbVar7 = (byte *)*piVar3;
    iVar6 = piVar3[1];
  }
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) {
    uVar4 = (*(code *)piVar3[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_0040f6d4:
      return uVar4 & 0xffffff00;
    }
    pbVar7 = (byte *)*piVar3;
    iVar6 = piVar3[1];
  }
  bVar2 = *pbVar7;
  *(undefined4 *)(*param_1 + 0x14) = 0x5d;
  iVar5 = (uint)bVar2 + (uint)bVar1 * 0x100 + -2;
  *(int *)(*param_1 + 0x18) = param_1[0x65];
  *(int *)(*param_1 + 0x1c) = iVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  *piVar3 = (int)(pbVar7 + 1);
  iVar6 = iVar6 + -1;
  piVar3[1] = iVar6;
  if (0 < iVar5) {
    iVar6 = (**(code **)(param_1[6] + 0x10))(param_1,iVar5);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}




undefined * FUN_0040f740(void)

{
  return &DAT_00430118;
}




int __cdecl FUN_0040f9e0(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)(uint)(param_3 * 0x80));
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x48;
    (**(code **)*param_1)(param_1);
  }
  uVar4 = param_4;
  if ((int)uVar1 < (int)param_4) {
    uVar4 = uVar1;
  }
  *(uint *)(iVar2 + 0x50) = uVar4;
  iVar2 = FUN_0040fc10(param_1,param_2,param_4 << 2);
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      uVar5 = param_4 - uVar1;
      if (uVar4 < param_4 - uVar1) {
        uVar5 = uVar4;
      }
      puVar3 = FUN_0040fa90(param_1,param_2,uVar5 * param_3 * 0x80);
      for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar1 * 4) = puVar3;
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + param_3 * 0x20;
      }
      uVar4 = uVar5;
    } while (uVar1 < param_4);
  }
  return iVar2;
}




undefined4 * __cdecl FUN_0040fa90(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 3;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined4 *)FUN_00410c60(param_1,param_3 + 0x10);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + param_3 + 0x10;
  uVar2 = *(undefined4 *)(iVar1 + 0x3c + param_2 * 4);
  puVar3[1] = param_3;
  *puVar3 = uVar2;
  puVar3[2] = 0;
  *(undefined4 **)(iVar1 + 0x3c + param_2 * 4) = puVar3;
  return puVar3 + 4;
}




int __cdecl FUN_0040fb60(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)param_3);
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x48;
    (**(code **)*param_1)(param_1);
  }
  uVar4 = param_4;
  if ((int)uVar1 < (int)param_4) {
    uVar4 = uVar1;
  }
  *(uint *)(iVar2 + 0x50) = uVar4;
  iVar2 = FUN_0040fc10(param_1,param_2,param_4 << 2);
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      uVar5 = param_4 - uVar1;
      if (uVar4 < param_4 - uVar1) {
        uVar5 = uVar4;
      }
      puVar3 = FUN_0040fa90(param_1,param_2,uVar5 * param_3);
      for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar1 * 4) = puVar3;
        uVar1 = uVar1 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + param_3);
      }
      uVar4 = uVar5;
    } while (uVar1 < param_4);
  }
  return iVar2;
}




int __cdecl FUN_0040fc10(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar4 = (undefined4 *)(iVar2 + param_2 * 4 + 0x34);
  puVar3 = (undefined4 *)0x0;
  for (puVar5 = (undefined4 *)*puVar4; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5)
  {
    if (param_3 <= (uint)puVar5[2]) goto LAB_0040fd3a;
    puVar3 = puVar5;
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar6 = *(uint *)(&DAT_00429670 + param_2 * 4);
  }
  else {
    uVar6 = *(uint *)(&DAT_00429678 + param_2 * 4);
  }
  uVar7 = 1000000000 - (param_3 + 0x10);
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  puVar5 = (undefined4 *)FUN_00410c60(param_1,param_3 + 0x10 + uVar7);
  while (puVar5 == (undefined4 *)0x0) {
    uVar7 = uVar7 >> 1;
    if (uVar7 < 0x32) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 2;
      (**(code **)*param_1)(param_1);
    }
    puVar5 = (undefined4 *)FUN_00410c60(param_1,param_3 + 0x10 + uVar7);
  }
  piVar1 = (int *)(iVar2 + 0x4c);
  *piVar1 = *piVar1 + param_3 + 0x10 + uVar7;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = uVar7 + param_3;
  if (puVar3 == (undefined4 *)0x0) {
    *puVar4 = puVar5;
  }
  else {
    *puVar3 = puVar5;
  }
LAB_0040fd3a:
  iVar2 = puVar5[1];
  puVar5[2] = puVar5[2] - param_3;
  puVar5[1] = iVar2 + param_3;
  return (int)puVar5 + iVar2 + 0x10;
}




void __cdecl FUN_0040fd50(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar1 = param_2[2];
  iVar5 = param_2[6] * iVar1 * 0x80;
  iVar2 = param_2[4];
  if (0 < iVar2) {
    iVar4 = param_2[5];
    do {
      if (iVar2 - iVar6 <= iVar4) {
        iVar4 = iVar2 - iVar6;
      }
      iVar2 = param_2[7] - (param_2[6] + iVar6);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      iVar7 = param_2[1] - (param_2[6] + iVar6);
      if (iVar4 < iVar7) {
        iVar7 = iVar4;
      }
      if (iVar7 < 1) {
        return;
      }
      iVar7 = iVar7 * iVar1 * 0x80;
      if (param_3 == '\0') {
        pcVar3 = (code *)param_2[10];
      }
      else {
        pcVar3 = (code *)param_2[0xb];
      }
      (*pcVar3)(param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar6 * 4),iVar5,iVar7);
      iVar4 = param_2[5];
      iVar2 = param_2[4];
      iVar6 = iVar6 + iVar4;
      iVar5 = iVar5 + iVar7;
    } while (iVar6 < iVar2);
  }
  return;
}




void __cdecl FUN_0040fde0(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar1 = param_2[2];
  iVar5 = param_2[6] * iVar1;
  iVar2 = param_2[4];
  if (0 < iVar2) {
    iVar4 = param_2[5];
    do {
      if (iVar2 - iVar6 <= iVar4) {
        iVar4 = iVar2 - iVar6;
      }
      iVar2 = param_2[7] - (param_2[6] + iVar6);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      iVar7 = param_2[1] - (param_2[6] + iVar6);
      if (iVar4 < iVar7) {
        iVar7 = iVar4;
      }
      if (iVar7 < 1) {
        return;
      }
      iVar7 = iVar7 * iVar1;
      if (param_3 == '\0') {
        pcVar3 = (code *)param_2[10];
      }
      else {
        pcVar3 = (code *)param_2[0xb];
      }
      (*pcVar3)(param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar6 * 4),iVar5,iVar7);
      iVar4 = param_2[5];
      iVar2 = param_2[4];
      iVar6 = iVar6 + iVar4;
      iVar5 = iVar5 + iVar7;
    } while (iVar6 < iVar2);
  }
  return;
}




void __cdecl FUN_0040fe60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == 1) {
    for (iVar2 = *(int *)(iVar1 + 0x44); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
      }
    }
    iVar2 = *(int *)(iVar1 + 0x48);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
      if (*(char *)(iVar2 + 0x22) != '\0') {
        *(undefined1 *)(iVar2 + 0x22) = 0;
        (**(code **)(iVar2 + 0x30))(param_1,iVar2 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x3c + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x3c + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    iVar4 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    FUN_00410c50(param_1,puVar3);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar4 + iVar2 + 0x10);
    puVar3 = puVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x34 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x34 + param_2 * 4) = 0;
  while (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[2];
    iVar4 = puVar3[1];
    puVar5 = (undefined4 *)*puVar3;
    FUN_00410c50(param_1,puVar3);
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - (iVar4 + iVar2 + 0x10);
    puVar3 = puVar5;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00410098) */

void __cdecl FUN_0040ff80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  param_1[1] = 0;
  iVar1 = FUN_00410c90();
  puVar2 = (undefined4 *)FUN_00410c60(param_1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = param_1;
    guard_check_icall();
    *(undefined4 *)(*param_1 + 0x14) = 0x38;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1,piVar5);
  }
  *puVar2 = FUN_0040fc10;
  puVar2[1] = FUN_0040fa90;
  puVar2[2] = FUN_0040fb60;
  puVar2[3] = FUN_0040f9e0;
  puVar2[4] = &LAB_004102c0;
  puVar2[5] = &LAB_00410250;
  puVar2[6] = &LAB_004100b0;
  puVar2[7] = &LAB_0040f8a0;
  puVar2[8] = &LAB_0040f750;
  puVar2[9] = FUN_0040fe60;
  puVar2[10] = &LAB_00410330;
  puVar2[0xc] = 1000000000;
  puVar2[0xb] = iVar1;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  param_1[1] = (int)puVar2;
  pcVar3 = getenv(s_JPEGMEM_0042f320);
  if ((pcVar3 != (char *)0x0) && (iVar4 = FUN_00410470(pcVar3,s__ld_c_0042f328), 0 < iVar4)) {
    puVar2[0xb] = iVar1 * 1000;
  }
  return;
}




void __cdecl FUN_00410470(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &stack0x0000000c;
  uVar3 = 0;
  uVar2 = 0xffffffff;
  puVar1 = (undefined4 *)FUN_0040f740();
  __stdio_common_vsscanf(*puVar1,puVar1[1],param_1,uVar2,param_2,uVar3,puVar4);
  return;
}




void __cdecl FUN_004104d0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  param_1[0x66] = (int)puVar1;
  *puVar1 = FUN_004109b0;
  puVar1[1] = &LAB_004104a0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_00410710(param_1);
  return;
}




void __cdecl FUN_00410510(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = param_1;
  if (param_1[5] != 0xca) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  FUN_0040ce10((int)param_1);
  iVar7 = param_1[9];
  piVar6 = param_1 + 0x31;
  param_1 = (int *)0x0;
  if (0 < iVar7) {
    piVar6 = (int *)(*piVar6 + 0x24);
    do {
      iVar7 = 1;
      if ((*(char *)((int)piVar2 + 0x41) == '\0') &&
         (iVar8 = (uint)((char)piVar2[0x12] != '\0') * 4 + 4, piVar2[0x48] <= iVar8)) {
        do {
          if (piVar2[0x46] % (piVar6[-7] * iVar7 * 2) != 0) break;
          iVar7 = iVar7 * 2;
        } while (piVar2[0x48] * iVar7 - iVar8 == 0 || piVar2[0x48] * iVar7 < iVar8);
      }
      iVar8 = 1;
      *piVar6 = piVar2[0x48] * iVar7;
      if ((*(char *)((int)piVar2 + 0x41) == '\0') &&
         (iVar7 = (uint)((char)piVar2[0x12] != '\0') * 4 + 4, piVar2[0x49] <= iVar7)) {
        do {
          if (piVar2[0x47] % (piVar6[-6] * iVar8 * 2) != 0) break;
          iVar8 = iVar8 * 2;
        } while (piVar2[0x49] * iVar8 - iVar7 == 0 || piVar2[0x49] * iVar8 < iVar7);
      }
      iVar7 = *piVar6;
      iVar8 = piVar2[0x49] * iVar8;
      piVar6[1] = iVar8;
      iVar4 = iVar8 * 2;
      if (iVar7 == iVar4 || SBORROW4(iVar7,iVar4) != iVar7 + iVar8 * -2 < 0) {
        if (iVar8 + iVar7 * -2 != 0 && iVar7 * 2 <= iVar8) {
          piVar6[1] = iVar7 * 2;
        }
      }
      else {
        *piVar6 = iVar4;
        iVar7 = iVar4;
      }
      iVar7 = FUN_00410c20(piVar6[-7] * iVar7 * piVar2[7],piVar2[0x62] * piVar2[0x46]);
      piVar6[2] = iVar7;
      iVar7 = FUN_00410c20(piVar6[-6] * piVar2[8] * piVar6[1],piVar2[0x62] * piVar2[0x47]);
      piVar6[3] = iVar7;
      piVar6 = piVar6 + 0x16;
      iVar7 = piVar2[9];
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < iVar7);
  }
  iVar8 = piVar2[0xb];
  if (iVar8 == 1) {
    iVar8 = 1;
  }
  else if ((iVar8 == 2) || (iVar8 == 6)) {
    iVar8 = 3;
  }
  else {
    iVar8 = 0;
    if (0 < iVar7) {
      pcVar5 = (char *)(piVar2[0x31] + 0x34);
      iVar4 = iVar8;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 0x58;
        iVar8 = iVar4 + 1;
        if (cVar1 == '\0') {
          iVar8 = iVar4;
        }
        iVar7 = iVar7 + -1;
        iVar4 = iVar8;
      } while (iVar7 != 0);
    }
  }
  piVar2[0x19] = iVar8;
  if (*(char *)((int)piVar2 + 0x4a) != '\0') {
    iVar8 = 1;
  }
  piVar2[0x1a] = iVar8;
  uVar3 = FUN_00410b10((int)piVar2);
  if ((char)uVar3 == '\0') {
    piVar2[0x1b] = 1;
    return;
  }
  piVar2[0x1b] = piVar2[0x47];
  return;
}




void __cdecl FUN_00410710(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  piVar3 = param_1;
  iVar2 = param_1[0x66];
  if (param_1[0x30] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x30];
    (**(code **)*param_1)(param_1);
  }
  FUN_00410510(param_1);
  _Dst = (void *)(**(code **)param_1[1])(param_1,1,0x500);
  memset(_Dst,0,0x200);
  iVar7 = (int)_Dst + 0x200;
  param_1[0x4b] = iVar7;
  iVar6 = 0;
  do {
    iVar5 = iVar6;
    *(char *)(iVar5 + iVar7) = (char)iVar5;
    iVar6 = iVar5 + 1;
  } while (iVar6 < 0x100);
  if (iVar5 < 0x2ff) {
    puVar8 = (undefined4 *)(iVar7 + iVar6);
    for (uVar4 = 0x300U - iVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = 0x300U - iVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  if (((param_1[0x18] == 0) || (param_1[0x17] == 0)) || (param_1[0x19] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x21;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  uVar4 = FUN_00410b10((int)param_1);
  *(char *)(iVar2 + 0x10) = (char)uVar4;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if ((*(char *)((int)param_1 + 0x4a) == '\0') || ((char)param_1[0x10] == '\0')) {
    *(undefined2 *)(param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
  }
  if (*(char *)((int)param_1 + 0x4a) != '\0') {
    if (*(char *)((int)param_1 + 0x41) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x19] == 3) {
      if (param_1[0x1d] == 0) {
        if ((char)param_1[0x14] == '\0') {
          *(undefined1 *)(param_1 + 0x16) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x5a) = 1;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x59) = 1;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x16) = 1;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
      param_1[0x1d] = 0;
    }
    if ((char)param_1[0x16] != '\0') {
      FUN_004175a0(param_1);
      *(int *)(iVar2 + 0x14) = param_1[0x70];
    }
    if ((*(char *)((int)param_1 + 0x5a) != '\0') || (*(char *)((int)param_1 + 0x59) != '\0')) {
      FUN_00418150(param_1);
      *(int *)(iVar2 + 0x18) = param_1[0x70];
    }
  }
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    if (*(char *)(iVar2 + 0x10) == '\0') {
      FUN_004165c0(param_1);
      FUN_00415fb0(param_1);
    }
    else {
      FUN_00419610((int)param_1);
    }
    FUN_00412350((int)param_1,*(char *)((int)param_1 + 0x5a));
  }
  FUN_00415670((int)param_1);
  if (*(char *)((int)param_1 + 0xca) == '\0') {
    FUN_00413920((int)param_1);
  }
  else {
    FUN_00415140((int)param_1);
  }
  if ((*(char *)(param_1[0x6a] + 0x10) != '\0') ||
     (piVar1 = param_1 + 0x10, param_1._0_1_ = '\0', (char)*piVar1 != '\0')) {
    param_1._0_1_ = '\x01';
  }
  FUN_00411fd0(piVar3,(char)param_1);
  if (*(char *)((int)piVar3 + 0x41) == '\0') {
    FUN_00410cc0(piVar3,'\0');
  }
  (**(code **)(piVar3[1] + 0x18))(piVar3);
  (**(code **)(piVar3[0x6a] + 8))(piVar3);
  if (((piVar3[2] != 0) && ((char)piVar3[0x10] == '\0')) && (*(char *)(piVar3[0x6a] + 0x10) != '\0')
     ) {
    iVar6 = piVar3[9];
    if (*(char *)((int)piVar3 + 0xc9) != '\0') {
      iVar6 = iVar6 * 3 + 2;
    }
    *(undefined4 *)(piVar3[2] + 4) = 0;
    *(int *)(piVar3[2] + 8) = piVar3[0x4a] * iVar6;
    *(undefined4 *)(piVar3[2] + 0xc) = 0;
    *(uint *)(piVar3[2] + 0x10) = (*(char *)((int)piVar3 + 0x5a) != '\0') + 2;
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  }
  return;
}




void __cdecl FUN_004109b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x66];
  if (*(char *)(iVar1 + 8) == '\0') {
    if ((*(char *)((int)param_1 + 0x4a) != '\0') && (param_1[0x1d] == 0)) {
      if (((char)param_1[0x14] == '\0') || (*(char *)((int)param_1 + 0x5a) == '\0')) {
        if ((char)param_1[0x16] == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2f;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x70] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x70] = *(int *)(iVar1 + 0x18);
        *(undefined1 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x6d])(param_1);
    (**(code **)(param_1[0x68] + 8))(param_1);
    if (*(char *)((int)param_1 + 0x41) == '\0') {
      if (*(char *)(iVar1 + 0x10) == '\0') {
        (**(code **)param_1[0x6f])(param_1);
      }
      (**(code **)param_1[0x6e])(param_1);
      if (*(char *)((int)param_1 + 0x4a) != '\0') {
        (**(code **)param_1[0x70])(param_1,*(undefined1 *)(iVar1 + 8));
      }
      uVar2 = 0;
      if (*(char *)(iVar1 + 8) != '\0') {
        uVar2 = 3;
      }
      (**(code **)param_1[0x69])(param_1,uVar2);
      (**(code **)param_1[0x67])(param_1,0);
    }
  }
  else {
    *(undefined1 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x70])(param_1,0);
    (**(code **)param_1[0x69])(param_1,2);
    (**(code **)param_1[0x67])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(param_1[2] + 0x10) = (*(char *)(iVar1 + 8) != '\0') + 1 + *(int *)(iVar1 + 0xc);
    if (((char)param_1[0x10] != '\0') && (*(char *)(param_1[0x6a] + 0x11) == '\0')) {
      *(int *)(param_1[2] + 0x10) =
           *(int *)(param_1[2] + 0x10) + (*(char *)((int)param_1 + 0x5a) != '\0') + 1;
    }
  }
  return;
}




uint __cdecl FUN_00410b10(int param_1)

{
  int iVar1;
  uint in_EAX;
  
  if ((((*(char *)(param_1 + 0x110) == '\0') &&
       ((((in_EAX = *(uint *)(param_1 + 0x28), in_EAX == 3 || (in_EAX == 7)) &&
         (*(int *)(param_1 + 0x24) == 3)) &&
        ((*(int *)(param_1 + 0x2c) == 2 && (*(int *)(param_1 + 100) == 3)))))) &&
      (((*(int *)(param_1 + 0x10c) == 0 &&
        (((in_EAX = *(uint *)(param_1 + 0xc4), *(int *)(in_EAX + 8) == 2 &&
          (*(int *)(in_EAX + 0x60) == 1)) &&
         ((*(int *)(in_EAX + 0xb8) == 1 &&
          (((*(int *)(in_EAX + 0xc) < 3 && (*(int *)(in_EAX + 100) == 1)) &&
           (*(int *)(in_EAX + 0xbc) == 1)))))))) &&
       (((iVar1 = *(int *)(param_1 + 0x120), *(int *)(in_EAX + 0x24) == iVar1 &&
         (*(int *)(in_EAX + 0x7c) == iVar1)) && (*(int *)(in_EAX + 0xd4) == iVar1)))))) &&
     (((iVar1 = *(int *)(param_1 + 0x124), *(int *)(in_EAX + 0x28) == iVar1 &&
       (*(int *)(in_EAX + 0x80) == iVar1)) && (*(int *)(in_EAX + 0xd8) == iVar1)))) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}




void __cdecl FUN_00410bc0(void *param_1,void *param_2,int param_3)

{
  memcpy(param_2,param_1,param_3 << 7);
  return;
}




void __cdecl FUN_00410be0(int param_1,undefined4 *param_2,int param_3,size_t param_4)

{
  undefined4 *puVar1;
  
  if (0 < param_3) {
    puVar1 = param_2;
    do {
      memcpy((void *)*puVar1,*(void **)((param_1 - (int)param_2) + (int)puVar1),param_4);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (0 < param_3);
  }
  return;
}




int __cdecl FUN_00410c20(int param_1,int param_2)

{
  return (param_1 + -1 + param_2) / param_2;
}




int __cdecl FUN_00410c30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -1 + param_2;
  return iVar1 - iVar1 % param_2;
}




void __cdecl FUN_00410c50(undefined4 param_1,void *param_2)

{
  free(param_2);
  return;
}




void __cdecl FUN_00410c60(undefined4 param_1,size_t param_2)

{
  malloc(param_2);
  return;
}




int __cdecl FUN_00410c70(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x2c);
  if (iVar1 != 0) {
    return iVar1 - param_4;
  }
  return param_3;
}




undefined4 FUN_00410c90(void)

{
  return 0;
}




void __cdecl FUN_00410ca0(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x33;
  (**(code **)*param_1)(param_1);
  return;
}




void __cdecl FUN_00410cc0(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x67] = (int)puVar1;
  *puVar1 = FUN_004111a0;
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 3;
    (**(code **)*param_1)(param_1);
  }
  _param_2 = param_1[0x49];
  if (*(char *)(param_1[0x6e] + 8) == '\0') {
    puVar1[0xd] = _param_2;
    iVar2 = param_1[9];
  }
  else {
    if (_param_2 < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
      _param_2 = param_1[0x49];
    }
    iVar6 = param_1[0x67];
    iVar2 = (**(code **)param_1[1])(param_1,1,param_1[9] << 3);
    *(int *)(iVar6 + 0x3c) = iVar2;
    iVar7 = 0;
    *(int *)(iVar6 + 0x40) = iVar2 + param_1[9] * 4;
    iVar2 = param_1[9];
    if (0 < iVar2) {
      piVar5 = (int *)(param_1[0x31] + 0x28);
      do {
        if ((char)piVar5[3] != '\0') {
          iVar3 = (piVar5[-7] * *piVar5) / param_1[0x49];
          iVar2 = (**(code **)param_1[1])(param_1,1,(_param_2 + 4) * iVar3 * 8);
          iVar2 = iVar2 + iVar3 * 4;
          *(int *)(*(int *)(iVar6 + 0x3c) + iVar7 * 4) = iVar2;
          *(int *)(*(int *)(iVar6 + 0x40) + iVar7 * 4) = iVar2 + (_param_2 + 4) * iVar3 * 4;
        }
        iVar2 = param_1[9];
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 0x16;
      } while (iVar7 < iVar2);
    }
    _param_2 = param_1[0x49] + 2;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    piVar5 = (int *)(param_1[0x31] + 0x28);
    puVar1 = puVar1 + 2;
    do {
      if ((char)piVar5[3] != '\0') {
        uVar4 = (**(code **)(param_1[1] + 8))
                          (param_1,1,piVar5[-3] * piVar5[-1],
                           ((piVar5[-7] * *piVar5) / param_1[0x49]) * _param_2);
        *puVar1 = uVar4;
      }
      iVar6 = iVar6 + 1;
      puVar1 = puVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (iVar6 < param_1[9]);
  }
  return;
}




void __cdecl FUN_00410e50(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  if (*(char *)(iVar1 + 0x38) == '\0') {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x1a0) + 0xc))
                      (param_1,*(undefined4 *)(iVar1 + 0x3c + *(int *)(iVar1 + 0x44) * 4));
    if (iVar2 == 0) {
      return;
    }
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  iVar2 = *(int *)(iVar1 + 0x48);
  if (iVar2 != 0) {
    if (iVar2 == 1) goto LAB_00410fbe;
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1a4) + 4))
              (param_1,*(undefined4 *)(iVar1 + 0x3c + *(int *)(iVar1 + 0x44) * 4),
               (uint *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x34),param_2,param_3,param_4);
    if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x34)) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(int *)(iVar1 + 0x34) = *(int *)(param_1 + 0x124) + -1;
  if (*(int *)(iVar1 + 0x4c) == *(int *)(param_1 + 0x128)) {
    iVar2 = *(int *)(param_1 + 0x19c);
    iStack_14 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      piVar11 = (int *)(*(int *)(param_1 + 0xc4) + 0x28);
      do {
        if ((char)piVar11[3] != '\0') {
          uVar7 = piVar11[-7] * *piVar11;
          iVar3 = (int)uVar7 / *(int *)(param_1 + 0x124);
          uVar4 = (uint)piVar11[2] % uVar7;
          if ((uint)piVar11[2] % uVar7 == 0) {
            uVar4 = uVar7;
          }
          if (iStack_14 == 0) {
            *(int *)(iVar2 + 0x34) = (int)(uVar4 - 1) / iVar3 + 1;
          }
          iVar3 = iVar3 * 2;
          if (0 < iVar3) {
            puVar8 = (undefined4 *)
                     (*(int *)(*(int *)(iVar2 + 0x3c + *(int *)(iVar2 + 0x44) * 4) + iStack_14 * 4)
                     + uVar4 * 4);
            puVar5 = puVar8;
            do {
              *puVar5 = puVar8[-1];
              iVar3 = iVar3 + -1;
              puVar5 = puVar5 + 1;
            } while (iVar3 != 0);
          }
        }
        iStack_14 = iStack_14 + 1;
        piVar11 = piVar11 + 0x16;
      } while (iStack_14 < *(int *)(param_1 + 0x24));
    }
  }
  *(undefined4 *)(iVar1 + 0x48) = 1;
LAB_00410fbe:
  (**(code **)(*(int *)(param_1 + 0x1a4) + 4))
            (param_1,*(undefined4 *)(iVar1 + 0x3c + *(int *)(iVar1 + 0x44) * 4),iVar1 + 0x30,
             *(undefined4 *)(iVar1 + 0x34),param_2,param_3,param_4);
  if (*(uint *)(iVar1 + 0x34) <= *(uint *)(iVar1 + 0x30)) {
    if (*(int *)(iVar1 + 0x4c) == 1) {
      iVar2 = *(int *)(param_1 + 0x19c);
      iVar3 = *(int *)(param_1 + 0x124);
      iStack_14 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        piVar11 = (int *)(*(int *)(param_1 + 0xc4) + 0x28);
        do {
          if ((char)piVar11[3] != '\0') {
            iVar6 = (piVar11[-7] * *piVar11) / *(int *)(param_1 + 0x124);
            puVar8 = *(undefined4 **)(*(int *)(iVar2 + 0x40) + iStack_14 * 4);
            if (0 < iVar6) {
              iVar9 = *(int *)(*(int *)(iVar2 + 0x3c) + iStack_14 * 4) - (int)puVar8;
              puVar5 = puVar8 + (iVar3 + 1) * iVar6;
              puVar10 = puVar8 + -iVar6;
              puVar12 = puVar8 + (iVar3 + 2) * iVar6;
              do {
                *(undefined4 *)(iVar9 + (int)puVar10) = *(undefined4 *)(iVar9 + (int)puVar5);
                *puVar10 = *puVar5;
                *(undefined4 *)(iVar9 + -4 + (int)(puVar12 + 1)) =
                     *(undefined4 *)(iVar9 + -4 + (int)(puVar8 + 1));
                *puVar12 = *puVar8;
                iVar6 = iVar6 + -1;
                puVar8 = puVar8 + 1;
                puVar5 = puVar5 + 1;
                puVar10 = puVar10 + 1;
                puVar12 = puVar12 + 1;
              } while (iVar6 != 0);
            }
          }
          iStack_14 = iStack_14 + 1;
          piVar11 = piVar11 + 0x16;
        } while (iStack_14 < *(int *)(param_1 + 0x24));
      }
    }
    *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) ^ 1;
    *(undefined1 *)(iVar1 + 0x38) = 0;
    *(int *)(iVar1 + 0x30) = *(int *)(param_1 + 0x124) + 1;
    iVar2 = *(int *)(param_1 + 0x124);
    *(undefined4 *)(iVar1 + 0x48) = 2;
    *(int *)(iVar1 + 0x34) = iVar2 + 2;
  }
  return;
}




void __cdecl FUN_00411140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x19c);
  puVar1 = (uint *)(iVar2 + 0x30);
  uVar4 = *(uint *)(iVar2 + 0x34);
  if (uVar4 <= *puVar1) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x1a0) + 0xc))(param_1,iVar2 + 8);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = *(uint *)(iVar2 + 0x34);
    *puVar1 = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x1a4) + 4))
            (param_1,iVar2 + 8,puVar1,uVar4,param_2,param_3,param_4);
  return;
}




void __cdecl FUN_004111a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_1c;
  
  iVar1 = param_1[0x67];
  if (param_2 == 0) {
    if (*(char *)(param_1[0x6e] + 8) == '\0') {
      *(code **)(iVar1 + 4) = FUN_00411140;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x34);
      return;
    }
    *(code **)(iVar1 + 4) = FUN_00410e50;
    iVar2 = param_1[0x49];
    iVar3 = param_1[0x67];
    local_1c = 0;
    if (0 < param_1[9]) {
      piVar10 = (int *)(param_1[0x31] + 0x28);
      do {
        if ((char)piVar10[3] != '\0') {
          iVar7 = (piVar10[-7] * *piVar10) / param_1[0x49];
          puVar4 = *(undefined4 **)(*(int *)(iVar3 + 0x3c) + local_1c * 4);
          iVar5 = *(int *)(iVar3 + 8 + local_1c * 4);
          puVar8 = *(undefined4 **)(*(int *)(iVar3 + 0x40) + local_1c * 4);
          iVar11 = (iVar2 + 2) * iVar7;
          if (0 < iVar11) {
            puVar9 = puVar8;
            do {
              uVar6 = *(undefined4 *)((iVar5 - (int)puVar8) + (int)puVar9);
              *puVar9 = uVar6;
              *(undefined4 *)((int)puVar9 + ((int)puVar4 - (int)puVar8)) = uVar6;
              iVar11 = iVar11 + -1;
              puVar9 = puVar9 + 1;
            } while (iVar11 != 0);
          }
          iVar11 = iVar7 * 2;
          if (0 < iVar11) {
            puVar9 = puVar8 + iVar7 * iVar2;
            puVar12 = (undefined4 *)(iVar5 + (iVar2 + -2) * iVar7 * 4);
            do {
              *(undefined4 *)((int)puVar8 + (-4 - iVar5) + (int)(puVar12 + 1)) =
                   *(undefined4 *)((int)puVar9 + (iVar5 - (int)puVar8));
              *puVar9 = *puVar12;
              iVar11 = iVar11 + -1;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            } while (iVar11 != 0);
          }
          if (0 < iVar7) {
            puVar8 = puVar4 + -iVar7;
            do {
              *puVar8 = *puVar4;
              iVar7 = iVar7 + -1;
              puVar8 = puVar8 + 1;
            } while (iVar7 != 0);
          }
        }
        local_1c = local_1c + 1;
        piVar10 = piVar10 + 0x16;
      } while (local_1c < param_1[9]);
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined1 *)(iVar1 + 0x38) = 0;
    return;
  }
  if (param_2 == 2) {
    *(undefined1 **)(iVar1 + 4) = &LAB_00411110;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 3;
  (**(code **)*param_1)(param_1);
  return;
}




void __cdecl FUN_00411360(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uStack_30;
  int local_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int local_1c;
  int local_18;
  int aiStack_14 [4];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&uStack_30;
  iVar9 = 0;
  local_18 = param_1;
  local_2c = *(int *)(param_1 + 0x1a0);
  if (0 < *(int *)(param_1 + 0x130)) {
    piVar6 = (int *)(param_1 + 0x134);
    do {
      iVar3 = *(int *)(*piVar6 + 0xc);
      iVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(local_2c + 0x48 + *(int *)(*piVar6 + 4) * 4),
                         *(int *)(param_1 + 0x80) * iVar3,iVar3,1);
      aiStack_14[iVar9] = iVar3;
      piVar6 = piVar6 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x130));
  }
  iVar9 = *(int *)(local_2c + 0x18);
  local_1c = iVar9;
  if (iVar9 < *(int *)(local_2c + 0x1c)) {
    uStack_30 = *(uint *)(local_2c + 0x14);
    iVar3 = local_2c;
    do {
      if (uStack_30 < *(uint *)(param_1 + 0x144)) {
        piStack_20 = (int *)(iVar3 + 0x20);
        local_1c = iVar9;
        do {
          uVar7 = uStack_30;
          iStack_28 = 0;
          if (0 < *(int *)(param_1 + 0x130)) {
            piStack_24 = (int *)(param_1 + 0x134);
            piVar6 = piStack_20;
            do {
              iVar3 = *piStack_24;
              iVar1 = *(int *)(iVar3 + 0x38);
              iVar8 = 0;
              if (0 < *(int *)(iVar3 + 0x3c)) {
                piVar10 = (int *)(aiStack_14[iStack_28] + iVar9 * 4);
                do {
                  iVar9 = *(int *)(iVar3 + 0x38);
                  iVar4 = *piVar10 + iVar1 * uStack_30 * 0x80;
                  do {
                    *piVar6 = iVar4;
                    piVar6 = piVar6 + 1;
                    iVar4 = iVar4 + 0x80;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                  iVar8 = iVar8 + 1;
                  piVar10 = piVar10 + 1;
                  iVar9 = local_1c;
                } while (iVar8 < *(int *)(iVar3 + 0x3c));
              }
              iStack_28 = iStack_28 + 1;
              piStack_24 = piStack_24 + 1;
              param_1 = local_18;
            } while (iStack_28 < *(int *)(local_18 + 0x130));
          }
          cVar2 = (**(code **)(*(int *)(param_1 + 0x1b0) + 4))(param_1,piStack_20);
          if (cVar2 == '\0') {
            *(int *)(local_2c + 0x18) = iVar9;
            *(uint *)(local_2c + 0x14) = uVar7;
            __security_check_cookie(local_4 ^ (uint)&uStack_30);
            return;
          }
          uStack_30 = uVar7 + 1;
          iVar3 = local_2c;
        } while (uStack_30 < *(uint *)(param_1 + 0x144));
      }
      iVar9 = iVar9 + 1;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      uStack_30 = 0;
      local_1c = iVar9;
    } while (iVar9 < *(int *)(iVar3 + 0x1c));
  }
  uVar7 = *(int *)(param_1 + 0x80) + 1;
  *(uint *)(param_1 + 0x80) = uVar7;
  if (*(uint *)(param_1 + 0x128) <= uVar7) {
    (**(code **)(*(int *)(param_1 + 0x1a8) + 0xc))(param_1);
    __security_check_cookie(local_4 ^ (uint)&uStack_30);
    return;
  }
  iVar9 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x130) < 2) {
    if (uVar7 < *(uint *)(param_1 + 0x128) - 1) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0xc);
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x4c);
    }
  }
  else {
    uVar5 = 1;
  }
  *(undefined4 *)(iVar9 + 0x1c) = uVar5;
  *(undefined4 *)(iVar9 + 0x14) = 0;
  *(undefined4 *)(iVar9 + 0x18) = 0;
  __security_check_cookie(local_4 ^ (uint)&uStack_30);
  return;
}




undefined4 __cdecl FUN_00411720(int param_1,int param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  void *pvVar15;
  uint local_38;
  int iStack_34;
  void *local_30;
  int iStack_28;
  int iStack_24;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  uVar9 = *(int *)(param_1 + 0x144) - 1;
  uVar6 = *(int *)(param_1 + 0x128) - 1;
  iVar12 = *(int *)(iVar1 + 0x18);
  if (iVar12 < *(int *)(iVar1 + 0x1c)) {
    local_38 = *(uint *)(iVar1 + 0x14);
    do {
      if (local_38 <= uVar9) {
        _Dst = (void *)(iVar1 + 0x74);
        do {
          if (*(int *)(param_1 + 400) != 0) {
            memset(_Dst,0,*(int *)(param_1 + 0x14c) << 7);
          }
          cVar5 = (**(code **)(*(int *)(param_1 + 0x1b0) + 4))(param_1,iVar1 + 0x20);
          if (cVar5 == '\0') {
            *(uint *)(iVar1 + 0x14) = local_38;
            *(int *)(iVar1 + 0x18) = iVar12;
            return 0;
          }
          iStack_24 = 0;
          if (0 < *(int *)(param_1 + 0x130)) {
            piVar7 = (int *)(param_1 + 0x134);
            pvVar13 = _Dst;
            local_30 = _Dst;
            do {
              iVar2 = *piVar7;
              if (*(char *)(iVar2 + 0x34) == '\0') {
                pvVar13 = (void *)((int)pvVar13 + *(int *)(iVar2 + 0x40) * 0x80);
                local_30 = pvVar13;
              }
              else {
                pcVar3 = *(code **)(*(int *)(param_1 + 0x1b4) + 4 + *(int *)(iVar2 + 4) * 4);
                iVar10 = *(int *)(param_2 + *(int *)(iVar2 + 4) * 4) +
                         *(int *)(iVar2 + 0x28) * iVar12 * 4;
                if (local_38 < uVar9) {
                  iVar8 = *(int *)(iVar2 + 0x38);
                }
                else {
                  iVar8 = *(int *)(iVar2 + 0x48);
                }
                iVar4 = *(int *)(iVar2 + 0x44);
                iStack_28 = 0;
                iStack_34 = iVar10;
                if (0 < *(int *)(iVar2 + 0x3c)) {
                  do {
                    if ((*(uint *)(param_1 + 0x80) < uVar6) ||
                       (iVar12 + iStack_28 < *(int *)(iVar2 + 0x4c))) {
                      iVar11 = iVar4 * local_38;
                      iVar14 = iVar8;
                      pvVar15 = pvVar13;
                      if (0 < iVar8) {
                        do {
                          (*pcVar3)(param_1,iVar2,pvVar15,iVar10,iVar11);
                          iVar14 = iVar14 + -1;
                          iVar10 = iStack_34;
                          iVar11 = iVar11 + *(int *)(iVar2 + 0x24);
                          pvVar13 = local_30;
                          pvVar15 = (void *)((int)pvVar15 + 0x80);
                        } while (iVar14 != 0);
                      }
                      iVar10 = iVar10 + *(int *)(iVar2 + 0x28) * 4;
                      iStack_34 = iVar10;
                    }
                    iStack_28 = iStack_28 + 1;
                    pvVar13 = (void *)((int)pvVar13 + *(int *)(iVar2 + 0x38) * 0x80);
                    local_30 = pvVar13;
                  } while (iStack_28 < *(int *)(iVar2 + 0x3c));
                }
              }
              iStack_24 = iStack_24 + 1;
              piVar7 = piVar7 + 1;
            } while (iStack_24 < *(int *)(param_1 + 0x130));
          }
          local_38 = local_38 + 1;
        } while (local_38 <= uVar9);
      }
      iVar12 = iVar12 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      local_38 = 0;
    } while (iVar12 < *(int *)(iVar1 + 0x1c));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (uVar6 < *(uint *)(param_1 + 0x80)) {
    (**(code **)(*(int *)(param_1 + 0x1a8) + 0xc))();
    return 4;
  }
  FUN_00412100(param_1);
  return 3;
}




void __cdecl FUN_00411fd0(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *_Dst;
  
  puVar2 = param_1;
  if (param_2 == '\0') {
    puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x574);
    _Dst = puVar3 + 0x1d;
    if (param_1[100] == 0) {
      memset(_Dst,0,0x500);
    }
    puVar8 = puVar3 + 8;
    iVar5 = 10;
    do {
      *puVar8 = _Dst;
      puVar8 = puVar8 + 1;
      _Dst = _Dst + 0x20;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3[1] = FUN_00410c90;
    puVar3[3] = FUN_00411720;
    puVar3[4] = 0;
  }
  else {
    puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x74);
    piVar9 = param_1 + 0x31;
    _param_2 = 0;
    if (0 < (int)param_1[9]) {
      param_1 = puVar3 + 0x12;
      piVar9 = (int *)(*piVar9 + 0x20);
      do {
        iVar5 = piVar9[-5];
        iVar4 = iVar5;
        if (*(char *)((int)puVar2 + 0xc9) != '\0') {
          iVar4 = iVar5 * 3;
        }
        iVar1 = puVar2[1];
        iVar5 = FUN_00410c30(*piVar9,iVar5);
        iVar6 = FUN_00410c30(piVar9[-1],piVar9[-6]);
        uVar7 = (**(code **)(iVar1 + 0x14))(puVar2,1,1,iVar6,iVar5,iVar4);
        piVar9 = piVar9 + 0x16;
        _param_2 = _param_2 + 1;
        *param_1 = uVar7;
        param_1 = param_1 + 1;
      } while (_param_2 < (int)puVar2[9]);
    }
    puVar3[1] = FUN_00411360;
    puVar3[3] = &LAB_00411580;
    puVar3[4] = puVar3 + 0x12;
  }
  *puVar3 = &LAB_00412170;
  puVar3[2] = FUN_00412190;
  puVar3[0x1c] = 0;
  puVar2[0x68] = puVar3;
  return;
}




void __cdecl FUN_00412100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (1 < *(int *)(param_1 + 0x130)) {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    return;
  }
  if (*(uint *)(param_1 + 0x80) < *(int *)(param_1 + 0x128) - 1U) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0xc);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x4c);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}




void __cdecl FUN_00412190(int param_1)

{
  int iVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (((*(char *)(param_1 + 0x49) != '\0') && (bVar3 = false, *(char *)(param_1 + 0xc9) != '\0'))
       && (*(int *)(param_1 + 0x8c) != 0)) {
      iVar4 = *(int *)(iVar1 + 0x70);
      if (iVar4 == 0) {
        iVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) * 0x18)
        ;
        *(int *)(iVar1 + 0x70) = iVar4;
      }
      local_4 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        piVar5 = (int *)(iVar4 + 8);
        iVar4 = 0;
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x50);
        do {
          psVar2 = (short *)*puVar7;
          if (((((psVar2 == (short *)0x0) || (*psVar2 == 0)) ||
               ((psVar2[1] == 0 || ((psVar2[8] == 0 || (psVar2[0x10] == 0)))))) || (psVar2[9] == 0))
             || ((psVar2[2] == 0 ||
                 (piVar6 = (int *)(*(int *)(param_1 + 0x8c) + iVar4), *piVar6 < 0))))
          goto LAB_00412335;
          piVar5[-1] = piVar6[1];
          if (piVar6[1] != 0) {
            bVar3 = true;
          }
          *piVar5 = piVar6[2];
          if (piVar6[2] != 0) {
            bVar3 = true;
          }
          piVar5[1] = piVar6[3];
          if (piVar6[3] != 0) {
            bVar3 = true;
          }
          piVar5[2] = piVar6[4];
          if (piVar6[4] != 0) {
            bVar3 = true;
          }
          piVar5[3] = piVar6[5];
          if (piVar6[5] != 0) {
            bVar3 = true;
          }
          local_4 = local_4 + 1;
          piVar5 = piVar5 + 6;
          iVar4 = iVar4 + 0x100;
          puVar7 = puVar7 + 0x16;
        } while (local_4 < *(int *)(param_1 + 0x24));
        if (bVar3) {
          *(undefined1 **)(iVar1 + 0xc) = &LAB_00411980;
          *(undefined4 *)(param_1 + 0x88) = 0;
          return;
        }
      }
    }
LAB_00412335:
    *(undefined1 **)(iVar1 + 0xc) = &LAB_00411580;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}




void __cdecl FUN_00412350(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1a4) = puVar2;
  *puVar2 = &LAB_00412590;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    iVar3 = *(int *)(param_1 + 0x11c);
    puVar2[4] = iVar3;
    iVar1 = *(int *)(param_1 + 4);
    if (param_2 != '\0') {
      iVar3 = FUN_00410c30(*(int *)(param_1 + 0x60),iVar3);
      uVar4 = (**(code **)(iVar1 + 0x10))
                        (param_1,1,0,*(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c),iVar3);
      puVar2[2] = uVar4;
      return;
    }
    uVar4 = (**(code **)(iVar1 + 8))
                      (param_1,1,*(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c),iVar3);
    puVar2[3] = uVar4;
  }
  return;
}




void __cdecl
FUN_004124f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  uVar5 = *(uint *)(iVar2 + 0x18);
  puVar1 = (uint *)(iVar2 + 0x18);
  if (uVar5 == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    uVar5 = *(uint *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1b8) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),puVar1,
             *(undefined4 *)(iVar2 + 0x10));
  uVar4 = *puVar1;
  if (uVar5 < uVar4) {
    (**(code **)(*(int *)(param_1 + 0x1c0) + 4))
              (param_1,*(int *)(iVar2 + 0xc) + uVar5 * 4,0,uVar4 - uVar5);
    *param_6 = *param_6 + (uVar4 - uVar5);
    uVar4 = *(uint *)(iVar2 + 0x18);
  }
  if (*(uint *)(iVar2 + 0x10) <= uVar4) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(uint *)(iVar2 + 0x10);
    *puVar1 = 0;
  }
  return;
}




void __cdecl FUN_00412690(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  undefined2 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int aiStack_14 [4];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&local_50;
  local_20 = param_1;
  iVar10 = *(int *)(param_1 + 0x1b0);
  local_1c = param_2;
  local_30 = iVar10;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar10 + 0x2c) == 0)) &&
     (uVar2 = FUN_00413ef0(param_1), (char)uVar2 == '\0')) {
LAB_00412abe:
    __security_check_cookie(local_4 ^ (uint)&local_50);
    return;
  }
  if (*(char *)(iVar10 + 0x28) == '\0') {
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    local_18 = *(undefined4 *)(iVar10 + 0x14);
    uVar12 = *(uint *)(iVar10 + 0xc);
    iVar4 = *(int *)(iVar10 + 0x10);
    local_50 = *puVar7;
    local_4c = puVar7[1];
    local_40 = param_1;
    aiStack_14[0] = *(int *)(iVar10 + 0x18);
    aiStack_14[1] = *(undefined4 *)(iVar10 + 0x1c);
    aiStack_14[2] = *(undefined4 *)(iVar10 + 0x20);
    aiStack_14[3] = *(undefined4 *)(iVar10 + 0x24);
    local_24 = 0;
    if (0 < *(int *)(param_1 + 0x14c)) {
      local_34 = (int *)(param_1 + 0x150);
      piVar11 = (int *)(local_30 + 0x8c);
      do {
        iVar10 = piVar11[-10];
        local_2c = *(undefined2 **)(local_1c + local_24 * 4);
        local_38 = piVar11;
        if (iVar4 < 8) {
          uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,0);
          if ((char)uVar2 == '\0') goto LAB_00412abe;
          iVar4 = local_44;
          uVar12 = local_48;
          if (7 < local_44) goto LAB_00412780;
          iVar5 = 1;
LAB_004127a6:
          uVar3 = FUN_00413b20(&local_50,uVar12,iVar4,iVar10,iVar5);
          iVar4 = local_44;
          uVar12 = local_48;
          if ((int)uVar3 < 0) goto LAB_00412abe;
        }
        else {
LAB_00412780:
          uVar3 = (int)uVar12 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
          iVar5 = *(int *)(iVar10 + 0x90 + uVar3 * 4);
          if (iVar5 == 0) {
            iVar5 = 9;
            goto LAB_004127a6;
          }
          uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar10);
          iVar4 = iVar4 - iVar5;
        }
        iVar10 = *piVar11;
        iVar5 = 1;
        local_28 = local_38[10];
        local_3c = iVar10;
        if (local_28 == 0) {
          if (uVar3 == 0) goto LAB_00412981;
          if (((int)uVar3 <= iVar4) ||
             (uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,uVar3), iVar4 = local_44,
             uVar12 = local_48, (char)uVar2 != '\0')) {
            iVar4 = iVar4 - uVar3;
            goto LAB_00412981;
          }
          goto LAB_00412abe;
        }
        uVar9 = uVar3;
        if (uVar3 != 0) {
          if ((iVar4 < (int)uVar3) &&
             (uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,uVar3), iVar4 = local_44,
             uVar12 = local_48, (char)uVar2 == '\0')) goto LAB_00412abe;
          iVar4 = iVar4 - uVar3;
          uVar9 = (int)uVar12 >> ((byte)iVar4 & 0x1f) & *(uint *)(&DAT_00429ea8 + uVar3 * 4);
          if ((int)uVar9 <= (int)(&DAT_00429ea4)[uVar3]) {
            uVar9 = uVar9 - *(uint *)(&DAT_00429ea8 + uVar3 * 4);
          }
        }
        iVar10 = *local_34;
        aiStack_14[iVar10] = aiStack_14[iVar10] + uVar9;
        *local_2c = (short)aiStack_14[iVar10];
        iVar10 = local_3c;
        if (local_28 < 2) goto LAB_00412981;
        do {
          if (iVar4 < 8) {
            uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,0);
            if ((char)uVar2 == '\0') goto LAB_00412abe;
            iVar4 = local_44;
            uVar12 = local_48;
            if (7 < local_44) goto LAB_00412882;
            iVar6 = 1;
LAB_004128a8:
            uVar3 = FUN_00413b20(&local_50,uVar12,iVar4,iVar10,iVar6);
            iVar4 = local_44;
            uVar12 = local_48;
            if ((int)uVar3 < 0) goto LAB_00412abe;
          }
          else {
LAB_00412882:
            uVar3 = (int)uVar12 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
            iVar6 = *(int *)(iVar10 + 0x90 + uVar3 * 4);
            if (iVar6 == 0) {
              iVar6 = 9;
              goto LAB_004128a8;
            }
            uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar10);
            iVar4 = iVar4 - iVar6;
          }
          uVar9 = uVar3 & 0xf;
          if (uVar9 == 0) {
            if ((int)uVar3 >> 4 != 0xf) goto LAB_00412a43;
            iVar5 = iVar5 + 0xf;
          }
          else {
            iVar5 = iVar5 + ((int)uVar3 >> 4);
            if ((iVar4 < (int)uVar9) &&
               (uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,uVar9), iVar4 = local_44,
               uVar12 = local_48, (char)uVar2 == '\0')) goto LAB_00412abe;
            iVar4 = iVar4 - uVar9;
            uVar3 = (int)uVar12 >> ((byte)iVar4 & 0x1f) & *(uint *)(&DAT_00429ea8 + uVar9 * 4);
            sVar1 = (short)uVar3;
            sVar8 = sVar1 - (short)*(uint *)(&DAT_00429ea8 + uVar9 * 4);
            if ((int)(&DAT_00429ea4)[uVar9] < (int)uVar3) {
              sVar8 = sVar1;
            }
            local_2c[*(int *)(&DAT_00429680 + iVar5 * 4)] = sVar8;
            iVar10 = local_3c;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_28);
        for (; iVar5 < 0x40; iVar5 = iVar5 + 1 + ((int)uVar3 >> 4)) {
LAB_00412981:
          if (iVar4 < 8) {
            uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,0);
            if ((char)uVar2 == '\0') goto LAB_00412abe;
            iVar4 = local_44;
            uVar12 = local_48;
            if (7 < local_44) goto LAB_004129b3;
            iVar6 = 1;
LAB_004129d9:
            uVar3 = FUN_00413b20(&local_50,uVar12,iVar4,iVar10,iVar6);
            iVar4 = local_44;
            uVar12 = local_48;
            if ((int)uVar3 < 0) goto LAB_00412abe;
          }
          else {
LAB_004129b3:
            uVar3 = (int)uVar12 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
            iVar6 = *(int *)(iVar10 + 0x90 + uVar3 * 4);
            if (iVar6 == 0) {
              iVar6 = 9;
              goto LAB_004129d9;
            }
            uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar10);
            iVar4 = iVar4 - iVar6;
          }
          uVar9 = uVar3 & 0xf;
          if (uVar9 == 0) {
            if ((int)uVar3 >> 4 != 0xf) break;
          }
          else {
            if ((iVar4 < (int)uVar9) &&
               (uVar2 = FUN_00413a00(&local_50,uVar12,iVar4,uVar9), iVar4 = local_44,
               uVar12 = local_48, (char)uVar2 == '\0')) goto LAB_00412abe;
            iVar4 = iVar4 - uVar9;
          }
          iVar10 = local_3c;
        }
LAB_00412a43:
        local_24 = local_24 + 1;
        local_34 = local_34 + 1;
        piVar11 = local_38 + 1;
      } while (local_24 < *(int *)(local_20 + 0x14c));
      puVar7 = *(undefined4 **)(local_20 + 0x18);
      param_1 = local_20;
      local_38 = piVar11;
    }
    *puVar7 = local_50;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_4c;
    *(undefined4 *)(local_30 + 0x14) = local_18;
    *(int *)(local_30 + 0x18) = aiStack_14[0];
    *(int *)(local_30 + 0x1c) = aiStack_14[1];
    *(int *)(local_30 + 0x20) = aiStack_14[2];
    *(int *)(local_30 + 0x24) = aiStack_14[3];
    *(uint *)(local_30 + 0xc) = uVar12;
    *(int *)(local_30 + 0x10) = iVar4;
    iVar10 = local_30;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + -1;
  }
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}




undefined4 __cdecl FUN_00412ae0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint in_EAX;
  uint uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar1 + 0x2c) == 0)) &&
     (uVar7 = FUN_00413ef0(param_1), in_EAX = uVar7, (char)uVar7 == '\0')) {
LAB_00412d09:
    return uVar7 & 0xffffff00;
  }
  if (*(char *)(iVar1 + 0x28) == '\0') {
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar12 = *(int *)(iVar1 + 0x40);
      uVar10 = *(uint *)(iVar1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x17c);
      local_14 = **(undefined4 **)(param_1 + 0x18);
      local_10 = (*(undefined4 **)(param_1 + 0x18))[1];
      uVar3 = *(undefined4 *)(param_1 + 0x184);
      iVar4 = *(int *)(param_1 + 0x18c);
      in_EAX = *(uint *)(iVar1 + 0x10);
      iVar5 = *param_2;
      local_4 = param_1;
      for (iVar11 = *(int *)(param_1 + 0x178); iVar11 <= iVar2; iVar11 = iVar11 + 1) {
        if ((int)in_EAX < 8) {
          uVar7 = FUN_00413a00(&local_14,uVar10,in_EAX,0);
          if ((char)uVar7 == '\0') goto LAB_00412d09;
          in_EAX = local_8;
          uVar10 = local_c;
          if (7 < (int)local_8) goto LAB_00412bb9;
          iVar8 = 1;
LAB_00412bdf:
          uVar7 = FUN_00413b20(&local_14,uVar10,in_EAX,iVar12,iVar8);
          in_EAX = local_8;
          uVar10 = local_c;
          if ((int)uVar7 < 0) goto LAB_00412d09;
        }
        else {
LAB_00412bb9:
          uVar7 = (int)uVar10 >> ((char)in_EAX - 8U & 0x1f) & 0xff;
          iVar8 = *(int *)(iVar12 + 0x90 + uVar7 * 4);
          if (iVar8 == 0) {
            iVar8 = 9;
            goto LAB_00412bdf;
          }
          uVar7 = (uint)*(byte *)(uVar7 + 0x490 + iVar12);
          in_EAX = in_EAX - iVar8;
        }
        iVar8 = (int)uVar7 >> 4;
        uVar13 = uVar7 & 0xf;
        if (uVar13 == 0) {
          if (iVar8 != 0xf) {
            if (iVar8 != 0) {
              if (((int)in_EAX < iVar8) &&
                 (uVar7 = FUN_00413a00(&local_14,uVar10,in_EAX,iVar8), in_EAX = local_8,
                 uVar10 = local_c, (char)uVar7 == '\0')) goto LAB_00412d09;
              in_EAX = in_EAX - iVar8;
              iVar12 = (1 << ((byte)iVar8 & 0x1f)) + -1 +
                       ((int)uVar10 >> ((byte)in_EAX & 0x1f) & *(uint *)(&DAT_00429ea8 + iVar8 * 4))
              ;
              goto LAB_00412c8e;
            }
            break;
          }
          iVar11 = iVar11 + 0xf;
        }
        else {
          iVar11 = iVar11 + iVar8;
          if (((int)in_EAX < (int)uVar13) &&
             (uVar7 = FUN_00413a00(&local_14,uVar10,in_EAX,uVar13), in_EAX = local_8,
             uVar10 = local_c, (char)uVar7 == '\0')) goto LAB_00412d09;
          in_EAX = in_EAX - uVar13;
          uVar7 = (int)uVar10 >> ((byte)in_EAX & 0x1f) & *(uint *)(&DAT_00429ea8 + uVar13 * 4);
          sVar6 = (short)uVar7;
          sVar9 = sVar6 - (short)*(uint *)(&DAT_00429ea8 + uVar13 * 4);
          if ((int)(&DAT_00429ea4)[uVar13] < (int)uVar7) {
            sVar9 = sVar6;
          }
          *(short *)(iVar5 + *(int *)(iVar4 + iVar11 * 4) * 2) = sVar9 << ((byte)uVar3 & 0x1f);
        }
      }
      iVar12 = 0;
LAB_00412c8e:
      **(undefined4 **)(param_1 + 0x18) = local_14;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_10;
      *(uint *)(iVar1 + 0xc) = uVar10;
      *(uint *)(iVar1 + 0x10) = in_EAX;
    }
    else {
      iVar12 = *(int *)(iVar1 + 0x14) + -1;
    }
    *(int *)(iVar1 + 0x14) = iVar12;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}




void __cdecl FUN_00413140(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  short *local_1c;
  undefined4 local_18;
  int aiStack_14 [3];
  uint *local_8;
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&local_48;
  local_24 = param_2;
  iVar8 = *(int *)(param_1 + 0x1b0);
  local_20 = *(undefined4 *)(param_1 + 0x184);
  local_3c = iVar8;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar8 + 0x2c) == 0)) &&
     (uVar2 = FUN_00413ef0(param_1), (char)uVar2 == '\0')) {
LAB_00413364:
    __security_check_cookie(local_4 ^ (uint)&local_48);
    return;
  }
  if (*(char *)(iVar8 + 0x28) == '\0') {
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    uVar7 = *(uint *)(iVar8 + 0xc);
    local_18 = *(undefined4 *)(iVar8 + 0x14);
    iVar4 = *(int *)(iVar8 + 0x10);
    local_38 = *puVar6;
    local_34 = puVar6[1];
    local_8 = *(uint **)(iVar8 + 0x24);
    local_28 = param_1;
    aiStack_14[0] = *(int *)(iVar8 + 0x18);
    aiStack_14[1] = *(undefined4 *)(iVar8 + 0x1c);
    aiStack_14[2] = *(undefined4 *)(iVar8 + 0x20);
    local_40 = 0;
    local_44 = uVar7;
    if (0 < *(int *)(param_1 + 0x14c)) {
      local_48 = (uint *)(param_1 + 0x150);
      do {
        local_1c = *(short **)(local_24 + local_40 * 4);
        local_44 = *local_48;
        iVar1 = *(int *)(iVar8 + 0x30 +
                        *(int *)(*(int *)(param_1 + 0x134 + local_44 * 4) + 0x14) * 4);
        if (iVar4 < 8) {
          uVar2 = FUN_00413a00(&local_38,uVar7,iVar4,0);
          if ((char)uVar2 == '\0') goto LAB_00413364;
          iVar4 = local_2c;
          uVar7 = local_30;
          if (7 < local_2c) goto LAB_00413244;
          iVar5 = 1;
LAB_0041326a:
          uVar3 = FUN_00413b20(&local_38,uVar7,iVar4,iVar1,iVar5);
          iVar4 = local_2c;
          uVar7 = local_30;
          if ((int)uVar3 < 0) goto LAB_00413364;
        }
        else {
LAB_00413244:
          uVar3 = (int)uVar7 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
          iVar5 = *(int *)(iVar1 + 0x90 + uVar3 * 4);
          if (iVar5 == 0) {
            iVar5 = 9;
            goto LAB_0041326a;
          }
          uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar1);
          iVar4 = iVar4 - iVar5;
        }
        uVar9 = uVar3;
        if (uVar3 != 0) {
          if ((iVar4 < (int)uVar3) &&
             (uVar2 = FUN_00413a00(&local_38,uVar7,iVar4,uVar3), iVar4 = local_2c, uVar7 = local_30,
             (char)uVar2 == '\0')) goto LAB_00413364;
          iVar4 = iVar4 - uVar3;
          uVar9 = (int)uVar7 >> ((byte)iVar4 & 0x1f) & *(uint *)(&DAT_00429ea8 + uVar3 * 4);
          iVar8 = local_3c;
          if ((int)uVar9 <= (int)(&DAT_00429ea4)[uVar3]) {
            uVar9 = uVar9 - *(uint *)(&DAT_00429ea8 + uVar3 * 4);
          }
        }
        aiStack_14[local_44] = aiStack_14[local_44] + uVar9;
        *local_1c = (short)aiStack_14[local_44] << ((byte)local_20 & 0x1f);
        local_40 = local_40 + 1;
        local_48 = local_48 + 1;
      } while (local_40 < *(int *)(param_1 + 0x14c));
      puVar6 = *(undefined4 **)(param_1 + 0x18);
      iVar8 = local_3c;
    }
    *puVar6 = local_38;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_34;
    *(int *)(iVar8 + 0x10) = iVar4;
    *(undefined4 *)(iVar8 + 0x14) = local_18;
    *(int *)(iVar8 + 0x18) = aiStack_14[0];
    *(int *)(iVar8 + 0x1c) = aiStack_14[1];
    *(int *)(iVar8 + 0x20) = aiStack_14[2];
    *(uint *)(iVar8 + 0xc) = uVar7;
    *(uint **)(iVar8 + 0x24) = local_8;
    local_48 = local_8;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + -1;
  }
  __security_check_cookie(local_4 ^ (uint)&local_48);
  return;
}




uint __cdecl FUN_00413380(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar1 + 0x2c) == 0)) &&
     (uVar4 = FUN_00413ef0(param_1), (char)uVar4 == '\0')) {
LAB_00413447:
    return uVar4 & 0xffffff00;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  iVar8 = 0;
  uVar7 = *(uint *)(iVar1 + 0xc);
  iVar6 = *(int *)(iVar1 + 0x10);
  local_14 = *puVar5;
  local_10 = puVar5[1];
  uVar2 = *(undefined4 *)(param_1 + 0x184);
  local_4 = param_1;
  if (0 < *(int *)(param_1 + 0x14c)) {
    do {
      if ((iVar6 < 1) &&
         (uVar4 = FUN_00413a00(&local_14,uVar7,iVar6,1), iVar6 = local_8, uVar7 = local_c,
         (char)uVar4 == '\0')) goto LAB_00413447;
      iVar6 = iVar6 + -1;
      if (((int)uVar7 >> ((byte)iVar6 & 0x1f) & 1U) != 0) {
        puVar3 = *(ushort **)(param_2 + iVar8 * 4);
        *puVar3 = *puVar3 | 1 << ((byte)uVar2 & 0x1f);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x14c));
    puVar5 = *(undefined4 **)(param_1 + 0x18);
  }
  *puVar5 = local_14;
  iVar8 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar8 + 4) = local_10;
  *(uint *)(iVar1 + 0xc) = uVar7;
  *(int *)(iVar1 + 0x10) = iVar6;
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  }
  return CONCAT31((int3)((uint)iVar8 >> 8),1);
}




void __cdecl FUN_00413490(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined2 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int aiStack_14 [4];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&local_58;
  local_24 = param_1;
  iVar10 = *(int *)(param_1 + 0x1b0);
  local_20 = param_2;
  local_34 = iVar10;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar10 + 0x2c) == 0)) &&
     (uVar2 = FUN_00413ef0(param_1), (char)uVar2 == '\0')) {
LAB_004138d3:
    __security_check_cookie(local_4 ^ (uint)&local_58);
    return;
  }
  if (*(char *)(iVar10 + 0x28) == '\0') {
    local_1c = *(int *)(param_1 + 0x18c);
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    local_18 = *(undefined4 *)(iVar10 + 0x14);
    uVar12 = *(uint *)(iVar10 + 0xc);
    local_28 = *(int *)(param_1 + 400);
    local_58 = *puVar7;
    local_54 = puVar7[1];
    iVar4 = *(int *)(iVar10 + 0x10);
    local_48 = param_1;
    aiStack_14[0] = *(int *)(iVar10 + 0x18);
    aiStack_14[1] = *(undefined4 *)(iVar10 + 0x1c);
    aiStack_14[2] = *(undefined4 *)(iVar10 + 0x20);
    aiStack_14[3] = *(undefined4 *)(iVar10 + 0x24);
    local_40 = 0;
    if (0 < *(int *)(param_1 + 0x14c)) {
      local_38 = (int *)(param_1 + 0x150);
      piVar11 = (int *)(local_34 + 0x8c);
      do {
        iVar10 = piVar11[-10];
        local_30 = *(undefined2 **)(local_20 + local_40 * 4);
        local_3c = piVar11;
        if (iVar4 < 8) {
          uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,0);
          if ((char)uVar2 == '\0') goto LAB_004138d3;
          iVar4 = local_4c;
          uVar12 = local_50;
          if (7 < local_4c) goto LAB_00413595;
          iVar5 = 1;
LAB_004135bb:
          uVar3 = FUN_00413b20(&local_58,uVar12,iVar4,iVar10,iVar5);
          iVar4 = local_4c;
          uVar12 = local_50;
          if ((int)uVar3 < 0) goto LAB_004138d3;
        }
        else {
LAB_00413595:
          uVar3 = (int)uVar12 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
          iVar5 = *(int *)(iVar10 + 0x90 + uVar3 * 4);
          if (iVar5 == 0) {
            iVar5 = 9;
            goto LAB_004135bb;
          }
          uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar10);
          iVar4 = iVar4 - iVar5;
        }
        iVar10 = *piVar11;
        iVar5 = 1;
        local_2c = local_3c[10];
        local_44 = iVar10;
        if (local_2c == 0) {
          if (uVar3 != 0) {
            if ((iVar4 < (int)uVar3) &&
               (uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,uVar3), iVar4 = local_4c,
               uVar12 = local_50, (char)uVar2 == '\0')) goto LAB_004138d3;
            iVar4 = iVar4 - uVar3;
          }
        }
        else {
          uVar9 = uVar3;
          if (uVar3 != 0) {
            if ((iVar4 < (int)uVar3) &&
               (uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,uVar3), iVar4 = local_4c,
               uVar12 = local_50, (char)uVar2 == '\0')) goto LAB_004138d3;
            iVar4 = iVar4 - uVar3;
            uVar9 = (int)uVar12 >> ((byte)iVar4 & 0x1f) & *(uint *)(&DAT_00429ea8 + uVar3 * 4);
            if ((int)uVar9 <= (int)(&DAT_00429ea4)[uVar3]) {
              uVar9 = uVar9 - *(uint *)(&DAT_00429ea8 + uVar3 * 4);
            }
          }
          iVar10 = *local_38;
          aiStack_14[iVar10] = aiStack_14[iVar10] + uVar9;
          *local_30 = (short)aiStack_14[iVar10];
          iVar10 = local_44;
          if (1 < local_2c) {
            do {
              if (iVar4 < 8) {
                uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,0);
                if ((char)uVar2 == '\0') goto LAB_004138d3;
                iVar4 = local_4c;
                uVar12 = local_50;
                if (7 < local_4c) goto LAB_00413695;
                iVar6 = 1;
LAB_004136bb:
                uVar3 = FUN_00413b20(&local_58,uVar12,iVar4,iVar10,iVar6);
                iVar4 = local_4c;
                uVar12 = local_50;
                if ((int)uVar3 < 0) goto LAB_004138d3;
              }
              else {
LAB_00413695:
                uVar3 = (int)uVar12 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
                iVar6 = *(int *)(iVar10 + 0x90 + uVar3 * 4);
                if (iVar6 == 0) {
                  iVar6 = 9;
                  goto LAB_004136bb;
                }
                uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar10);
                iVar4 = iVar4 - iVar6;
              }
              uVar9 = uVar3 & 0xf;
              if (uVar9 == 0) {
                if ((int)uVar3 >> 4 != 0xf) goto LAB_00413858;
                iVar5 = iVar5 + 0xf;
              }
              else {
                iVar5 = iVar5 + ((int)uVar3 >> 4);
                if ((iVar4 < (int)uVar9) &&
                   (uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,uVar9), iVar4 = local_4c,
                   uVar12 = local_50, (char)uVar2 == '\0')) goto LAB_004138d3;
                iVar4 = iVar4 - uVar9;
                uVar3 = (int)uVar12 >> ((byte)iVar4 & 0x1f) & *(uint *)(&DAT_00429ea8 + uVar9 * 4);
                sVar1 = (short)uVar3;
                sVar8 = sVar1 - (short)*(uint *)(&DAT_00429ea8 + uVar9 * 4);
                if ((int)(&DAT_00429ea4)[uVar9] < (int)uVar3) {
                  sVar8 = sVar1;
                }
                local_30[*(int *)(local_1c + iVar5 * 4)] = sVar8;
                iVar10 = local_44;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < local_2c);
          }
        }
        if (iVar5 <= local_28) {
          do {
            if (iVar4 < 8) {
              uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,0);
              if ((char)uVar2 == '\0') goto LAB_004138d3;
              iVar4 = local_4c;
              uVar12 = local_50;
              if (7 < local_4c) goto LAB_004137c7;
              iVar6 = 1;
LAB_004137ed:
              uVar3 = FUN_00413b20(&local_58,uVar12,iVar4,iVar10,iVar6);
              iVar4 = local_4c;
              uVar12 = local_50;
              if ((int)uVar3 < 0) goto LAB_004138d3;
            }
            else {
LAB_004137c7:
              uVar3 = (int)uVar12 >> ((char)iVar4 - 8U & 0x1f) & 0xff;
              iVar6 = *(int *)(iVar10 + 0x90 + uVar3 * 4);
              if (iVar6 == 0) {
                iVar6 = 9;
                goto LAB_004137ed;
              }
              uVar3 = (uint)*(byte *)(uVar3 + 0x490 + iVar10);
              iVar4 = iVar4 - iVar6;
            }
            uVar9 = uVar3 & 0xf;
            if (uVar9 == 0) {
              if ((int)uVar3 >> 4 != 0xf) break;
            }
            else {
              if ((iVar4 < (int)uVar9) &&
                 (uVar2 = FUN_00413a00(&local_58,uVar12,iVar4,uVar9), iVar4 = local_4c,
                 uVar12 = local_50, (char)uVar2 == '\0')) goto LAB_004138d3;
              iVar4 = iVar4 - uVar9;
            }
            iVar5 = iVar5 + 1 + ((int)uVar3 >> 4);
            iVar10 = local_44;
          } while (iVar5 <= local_28);
        }
LAB_00413858:
        local_40 = local_40 + 1;
        local_38 = local_38 + 1;
        piVar11 = local_3c + 1;
      } while (local_40 < *(int *)(local_24 + 0x14c));
      puVar7 = *(undefined4 **)(local_24 + 0x18);
      param_1 = local_24;
      local_3c = piVar11;
    }
    *puVar7 = local_58;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_54;
    *(undefined4 *)(local_34 + 0x14) = local_18;
    *(int *)(local_34 + 0x18) = aiStack_14[0];
    *(int *)(local_34 + 0x1c) = aiStack_14[1];
    *(int *)(local_34 + 0x20) = aiStack_14[2];
    *(int *)(local_34 + 0x24) = aiStack_14[3];
    *(uint *)(local_34 + 0xc) = uVar12;
    *(int *)(local_34 + 0x10) = iVar4;
    iVar10 = local_34;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(int *)(iVar10 + 0x2c) = *(int *)(iVar10 + 0x2c) + -1;
  }
  __security_check_cookie(local_4 ^ (uint)&local_58);
  return;
}




void __cdecl FUN_00413920(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xdc);
  *(undefined4 **)(param_1 + 0x1b0) = puVar1;
  *puVar1 = FUN_00413f80;
  puVar1[2] = &LAB_004138f0;
  if (*(char *)(param_1 + 0xc9) == '\0') {
    puVar1[0x15] = 0;
    puVar1[0x11] = 0;
    puVar1[0x16] = 0;
    puVar1[0x12] = 0;
    puVar1[0x17] = 0;
    puVar1[0x13] = 0;
    puVar1[0x18] = 0;
    puVar1[0x14] = 0;
    return;
  }
  puVar2 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
  iVar4 = 0;
  *(undefined4 **)(param_1 + 0x8c) = puVar2;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar4 = iVar4 + 1;
      puVar5 = puVar2;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      puVar2 = puVar2 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0x24));
  }
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}




undefined4 __cdecl FUN_00413a00(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int local_4;
  
  iVar3 = param_1[1];
  pbVar4 = (byte *)*param_1;
  piVar1 = (int *)param_1[4];
  local_4 = param_3;
  if (piVar1[0x65] == 0) {
    if (param_3 < 0x19) {
      do {
        if (iVar3 == 0) {
          uVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
          if ((char)uVar2 == '\0') {
LAB_00413aa8:
            return uVar2 & 0xffffff00;
          }
          pbVar4 = *(byte **)piVar1[6];
          iVar3 = ((undefined4 *)piVar1[6])[1];
        }
        uVar2 = (uint)*pbVar4;
        iVar3 = iVar3 + -1;
        pbVar4 = pbVar4 + 1;
        if (uVar2 == 0xff) {
          do {
            if (iVar3 == 0) {
              uVar2 = (**(code **)(piVar1[6] + 0xc))(piVar1);
              if ((char)uVar2 == '\0') goto LAB_00413aa8;
              pbVar4 = *(byte **)piVar1[6];
              iVar3 = ((undefined4 *)piVar1[6])[1];
            }
            uVar2 = (uint)*pbVar4;
            iVar3 = iVar3 + -1;
            pbVar4 = pbVar4 + 1;
          } while (uVar2 == 0xff);
          if (uVar2 != 0) {
            piVar1[0x65] = uVar2;
            goto LAB_00413aba;
          }
          uVar2 = 0xff;
        }
        param_2 = param_2 << 8 | uVar2;
        param_3 = local_4 + 8;
        local_4 = param_3;
      } while (param_3 < 0x19);
    }
  }
  else {
LAB_00413aba:
    param_3 = local_4;
    if (local_4 < param_4) {
      if (*(char *)(piVar1[0x6c] + 0x28) == '\0') {
        *(undefined4 *)(*piVar1 + 0x14) = 0x78;
        (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
        *(undefined1 *)(piVar1[0x6c] + 0x28) = 1;
      }
      param_3 = 0x19;
      param_2 = param_2 << (0x19U - (char)local_4 & 0x1f);
    }
  }
  *param_1 = pbVar4;
  param_1[1] = iVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}




uint __cdecl FUN_00413b20(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_5) {
    uVar1 = FUN_00413a00(param_1,param_2,param_3,param_5);
    if ((char)uVar1 == '\0') {
      return 0xffffffff;
    }
    param_2 = param_1[2];
    param_3 = param_1[3];
  }
  iVar2 = param_3 - param_5;
  uVar3 = *(uint *)(&DAT_00429ea8 + param_5 * 4) & (int)param_2 >> ((byte)iVar2 & 0x1f);
  if (*(int *)(param_4 + param_5 * 4) < (int)uVar3) {
    do {
      if (iVar2 < 1) {
        uVar1 = FUN_00413a00(param_1,param_2,iVar2,1);
        if ((char)uVar1 == '\0') {
          return 0xffffffff;
        }
        param_2 = param_1[2];
        iVar2 = param_1[3];
      }
      iVar2 = iVar2 + -1;
      param_5 = param_5 + 1;
      uVar3 = uVar3 * 2 | (int)param_2 >> ((byte)iVar2 & 0x1f) & 1U;
    } while (*(int *)(param_4 + param_5 * 4) < (int)uVar3);
  }
  param_1[2] = param_2;
  param_1[3] = iVar2;
  if (0x10 < param_5) {
    *(undefined4 *)(*(int *)param_1[4] + 0x14) = 0x79;
    (**(code **)(*(int *)param_1[4] + 4))((int *)param_1[4],0xffffffff);
    return 0;
  }
  return (uint)*(byte *)(*(int *)(param_4 + 0x48 + param_5 * 4) + *(int *)(param_4 + 0x8c) + 0x11 +
                        uVar3);
}




void __cdecl FUN_00413bf0(int *param_1,char param_2,int param_3,int *param_4)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined4 *puStack_52c;
  char local_525;
  uint local_524;
  uint uStack_520;
  int iStack_51c;
  uint uStack_518;
  int iStack_514;
  int *local_510;
  int aiStack_50c [257];
  byte abStack_108 [260];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&puStack_52c;
  local_510 = param_1;
  local_525 = param_2;
  local_524 = CONCAT31(local_524._1_3_,param_2);
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x34;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == '\0') {
    puVar4 = (undefined4 *)param_1[param_3 + 0x2c];
  }
  else {
    puVar4 = (undefined4 *)param_1[param_3 + 0x28];
  }
  if (puVar4 == (undefined4 *)0x0) {
    puStack_52c = puVar4;
    puVar4 = FUN_0040c5f0(param_1,(char)local_524,param_3);
  }
  iStack_51c = *param_4;
  puStack_52c = puVar4;
  if (iStack_51c == 0) {
    iStack_51c = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iStack_51c;
  }
  uVar7 = 0;
  *(undefined4 **)(iStack_51c + 0x8c) = puVar4;
  uStack_518 = 0;
  uVar10 = 1;
  do {
    bVar1 = *(byte *)(uVar10 + (int)puVar4);
    uVar12 = (uint)bVar1;
    local_524 = uVar12 + uVar7;
    if (0x100 < (int)local_524) {
      *(undefined4 *)(*param_1 + 0x14) = 9;
      (**(code **)*param_1)(param_1);
      uVar7 = uStack_518;
    }
    if (uVar12 != 0) {
      iVar5 = (uVar10 & 0xff) * 0x1010101;
      pbVar15 = abStack_108 + uVar7;
      for (uVar8 = (uint)(bVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *(int *)pbVar15 = iVar5;
        pbVar15 = pbVar15 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pbVar15 = (byte)iVar5;
        pbVar15 = pbVar15 + 1;
      }
      uStack_518 = local_524;
      uVar7 = local_524;
    }
    uVar10 = uVar10 + 1;
    puVar4 = puStack_52c;
  } while ((int)uVar10 < 0x11);
  if (uVar7 < 0x101) {
    abStack_108[uVar7] = 0;
    iVar5 = 0;
    iVar13 = 0;
    iVar11 = (int)(char)abStack_108[0];
    if (abStack_108[0] != 0) {
      uStack_520 = 1 << (abStack_108[0] & 0x1f) | 1U >> 0x20 - (abStack_108[0] & 0x1f);
      do {
        while ((char)abStack_108[0] == iVar11) {
          bVar1 = abStack_108[iVar13 + 1];
          aiStack_50c[iVar13] = iVar5;
          iVar13 = iVar13 + 1;
          iVar5 = iVar5 + 1;
          abStack_108[0] = bVar1;
        }
        if ((int)uStack_520 <= iVar5) {
          *(undefined4 *)(*param_1 + 0x14) = 9;
          (**(code **)*param_1)(param_1);
        }
        abStack_108[0] = abStack_108[iVar13];
        iVar5 = iVar5 * 2;
        uStack_520 = uStack_520 << 1 | (uint)((int)uStack_520 < 0);
        iVar11 = iVar11 + 1;
      } while (abStack_108[0] != 0);
    }
    puVar4 = puStack_52c;
    iVar13 = 0;
    iVar5 = 1;
    do {
      if (*(char *)(iVar5 + (int)puStack_52c) == '\0') {
        iVar11 = -1;
      }
      else {
        *(int *)(iStack_51c + 0x48 + iVar5 * 4) = iVar13 - aiStack_50c[iVar13];
        iVar13 = iVar13 + (uint)*(byte *)(iVar5 + (int)puStack_52c);
        iVar11 = aiStack_50c[iVar13 + -1];
      }
      *(int *)(iStack_51c + iVar5 * 4) = iVar11;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x11);
    *(undefined4 *)(iStack_51c + 0x44) = 0xfffff;
    memset((void *)(iStack_51c + 0x90),0,0x400);
    piVar3 = local_510;
    uVar7 = uStack_518;
    uVar10 = 0;
    local_524 = 7;
    uStack_520 = 0;
    iVar5 = 1;
    do {
      if (*(char *)(iVar5 + (int)puVar4) != '\0') {
        iStack_514 = 1 << ((byte)local_524 & 0x1f);
        iVar13 = 1;
        puVar16 = (undefined1 *)((int)puStack_52c + uVar10 + 0x11);
        do {
          iVar11 = aiStack_50c[uVar10] << ((byte)local_524 & 0x1f);
          if (0 < iStack_514) {
            piVar14 = (int *)(iStack_51c + (iVar11 + 0x24) * 4);
            iVar6 = iStack_514;
            puVar9 = (undefined1 *)(iStack_51c + 0x490 + iVar11);
            do {
              *piVar14 = iVar5;
              piVar14 = piVar14 + 1;
              iVar6 = iVar6 + -1;
              *puVar9 = *puVar16;
              uVar10 = uStack_520;
              puVar9 = puVar9 + 1;
            } while (0 < iVar6);
          }
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + 1;
          puVar16 = puVar16 + 1;
          puVar4 = puStack_52c;
          uStack_520 = uVar10;
        } while (iVar13 <= (int)(uint)*(byte *)(iVar5 + (int)puStack_52c));
      }
      iVar5 = iVar5 + 1;
      local_524 = local_524 + -1;
    } while (-1 < (int)local_524);
    if ((local_525 != '\0') && (iVar5 = 0, 0 < (int)uStack_518)) {
      do {
        if (0xf < *(byte *)(iVar5 + 0x11 + (int)puVar4)) {
          *(undefined4 *)(*piVar3 + 0x14) = 9;
          (**(code **)*piVar3)(piVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar7);
    }
    __security_check_cookie(local_4 ^ (uint)&puStack_52c);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




undefined4 __cdecl FUN_00413ef0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  piVar1 = (int *)(*(int *)(param_1 + 0x1ac) + 0x14);
  *piVar1 = *piVar1 + ((int)(*(int *)(iVar2 + 0x10) + (*(int *)(iVar2 + 0x10) >> 0x1f & 7U)) >> 3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  uVar3 = (**(code **)(*(int *)(param_1 + 0x1ac) + 8))(param_1);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    puVar5 = (undefined4 *)(iVar2 + 0x18);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x130));
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(iVar2 + 0x2c) = uVar3;
  if (*(int *)(param_1 + 0x194) == 0) {
    *(undefined1 *)(iVar2 + 0x28) = 0;
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}




void __cdecl FUN_00413f80(int *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_8;
  
  piVar2 = param_1;
  iVar1 = param_1[0x6c];
  iVar11 = param_1[0x5e];
  if (*(char *)((int)param_1 + 0xc9) == '\0') {
    if ((((iVar11 != 0) || (param_1[0x60] != 0)) || (param_1[0x61] != 0)) ||
       ((((char)param_1[0x32] != '\0' || (param_1[0x5f] < 0x40)) && (param_1[0x5f] != param_1[100]))
       )) {
      *(undefined4 *)(*param_1 + 0x14) = 0x7d;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    pcVar3 = FUN_00413490;
    if (param_1[100] == 0x3f) {
      pcVar3 = FUN_00412690;
    }
    iVar11 = 0;
    *(code **)(iVar1 + 4) = pcVar3;
    if (0 < param_1[0x4c]) {
      piVar5 = param_1 + 0x4d;
      puVar4 = (undefined4 *)(iVar1 + 0x18);
      do {
        iVar6 = *piVar5;
        iVar9 = *(int *)(iVar6 + 0x14);
        FUN_00413bf0(param_1,'\x01',iVar9,(int *)(iVar1 + 0x44 + iVar9 * 4));
        if (param_1[100] != 0) {
          iVar6 = *(int *)(iVar6 + 0x18);
          FUN_00413bf0(param_1,'\0',iVar6,(int *)(iVar1 + (iVar6 + 0x15) * 4));
        }
        iVar11 = iVar11 + 1;
        *puVar4 = 0;
        piVar5 = piVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar11 < param_1[0x4c]);
    }
    iVar11 = 0;
    if (0 < param_1[0x53]) {
      puVar4 = (undefined4 *)(iVar1 + 0x8c);
      iVar6 = -iVar1 + 0x28;
      do {
        iVar9 = param_1[*(int *)((int)puVar4 + -iVar1 + 0xc4 + (int)param_1) + 0x4d];
        puVar4[-10] = *(undefined4 *)(iVar1 + 0x44 + *(int *)(iVar9 + 0x14) * 4);
        if (param_1[100] == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar1 + 0x54 + *(int *)(iVar9 + 0x18) * 4);
        }
        *puVar4 = uVar7;
        if (*(char *)(iVar9 + 0x34) == '\0') {
          puVar4[10] = 0;
        }
        else {
          iVar8 = *(int *)(iVar9 + 0x28);
          iVar9 = *(int *)(iVar9 + 0x24);
          switch(param_1[100]) {
          case 0:
            *(undefined4 *)((int)puVar4 + iVar1 + iVar6) = 1;
            break;
          default:
            if ((iVar8 < 1) || (8 < iVar8)) {
              iVar8 = 8;
            }
            if ((iVar9 < 1) || (8 < iVar9)) {
              iVar9 = 8;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&DAT_00429b54 + (iVar9 + iVar8 * 8) * 4) + 1;
            break;
          case 3:
            if ((iVar8 < 1) || (2 < iVar8)) {
              iVar8 = 2;
            }
            if ((iVar9 < 1) || (2 < iVar9)) {
              iVar9 = 2;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&UNK_00429e8c + (iVar9 + iVar8 * 2) * 4) + 1;
            break;
          case 8:
            if ((iVar8 < 1) || (3 < iVar8)) {
              iVar8 = 3;
            }
            if ((iVar9 < 1) || (3 < iVar9)) {
              iVar9 = 3;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&UNK_00429d2c + (iVar9 + iVar8 * 3) * 4) + 1;
            break;
          case 0xf:
            if ((iVar8 < 1) || (4 < iVar8)) {
              iVar8 = 4;
            }
            if ((iVar9 < 1) || (4 < iVar9)) {
              iVar9 = 4;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&UNK_00429e44 + (iVar9 + iVar8 * 4) * 4) + 1;
            break;
          case 0x18:
            if ((iVar8 < 1) || (5 < iVar8)) {
              iVar8 = 5;
            }
            if ((iVar9 < 1) || (5 < iVar9)) {
              iVar9 = 5;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&UNK_00429dd8 + (iVar9 + iVar8 * 5) * 4) + 1;
            break;
          case 0x23:
            if ((iVar8 < 1) || (6 < iVar8)) {
              iVar8 = 6;
            }
            if ((iVar9 < 1) || (6 < iVar9)) {
              iVar9 = 6;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&UNK_00429d44 + (iVar9 + iVar8 * 6) * 4) + 1;
            break;
          case 0x30:
            if ((iVar8 < 1) || (7 < iVar8)) {
              iVar8 = 7;
            }
            if ((iVar9 < 1) || (7 < iVar9)) {
              iVar9 = 7;
            }
            *(int *)((int)puVar4 + iVar1 + iVar6) =
                 *(int *)(&UNK_00429c58 + (iVar8 * 7 + iVar9) * 4) + 1;
          }
        }
        iVar11 = iVar11 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar11 < param_1[0x53]);
    }
    goto LAB_004144f4;
  }
  iVar6 = param_1[0x5f];
  if (iVar11 == 0) {
    bVar12 = iVar6 == 0;
LAB_00413fc9:
    if (!bVar12) goto LAB_00413fef;
    if (((param_1[0x60] != 0) && (param_1[0x60] + -1 != param_1[0x61])) || (0xd < param_1[0x61]))
    goto LAB_00413fef;
  }
  else {
    if ((iVar11 <= iVar6) && (iVar6 <= param_1[100])) {
      bVar12 = param_1[0x4c] == 1;
      goto LAB_00413fc9;
    }
LAB_00413fef:
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(int *)(*param_1 + 0x18) = param_1[0x5e];
    *(int *)(*param_1 + 0x1c) = param_1[0x5f];
    *(int *)(*param_1 + 0x20) = param_1[0x60];
    *(int *)(*param_1 + 0x24) = param_1[0x61];
    (**(code **)*param_1)(param_1);
    iVar11 = param_1[0x5e];
  }
  param_1 = param_1 + 0x61;
  local_8 = 0;
  if (0 < piVar2[0x4c]) {
    piVar5 = piVar2 + 0x4d;
    do {
      iVar11 = piVar2[0x5e];
      iVar6 = *(int *)(*piVar5 + 4);
      piVar10 = (int *)(iVar6 * 0x100 + piVar2[0x23]);
      if ((iVar11 != 0) && (*piVar10 < 0)) {
        *(undefined4 *)(*piVar2 + 0x14) = 0x76;
        *(int *)(*piVar2 + 0x18) = iVar6;
        *(undefined4 *)(*piVar2 + 0x1c) = 0;
        (**(code **)(*piVar2 + 4))(piVar2,0xffffffff);
        iVar11 = piVar2[0x5e];
      }
      if (iVar11 <= piVar2[0x5f]) {
        do {
          iVar9 = 0;
          if (-1 < piVar10[iVar11]) {
            iVar9 = piVar10[iVar11];
          }
          if (piVar2[0x60] != iVar9) {
            *(undefined4 *)(*piVar2 + 0x14) = 0x76;
            *(int *)(*piVar2 + 0x18) = iVar6;
            *(int *)(*piVar2 + 0x1c) = iVar11;
            (**(code **)(*piVar2 + 4))(piVar2,0xffffffff);
          }
          piVar10[iVar11] = *param_1;
          iVar11 = iVar11 + 1;
        } while (iVar11 <= piVar2[0x5f]);
      }
      piVar5 = piVar5 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < piVar2[0x4c]);
    iVar11 = piVar2[0x5e];
  }
  if (piVar2[0x60] == 0) {
    pcVar3 = FUN_00413140;
    if (iVar11 != 0) {
      pcVar3 = FUN_00412ae0;
    }
  }
  else {
    pcVar3 = (code *)&LAB_00412d20;
    if (iVar11 == 0) {
      pcVar3 = FUN_00413380;
    }
  }
  *(code **)(iVar1 + 4) = pcVar3;
  local_8 = 0;
  if (0 < piVar2[0x4c]) {
    puVar4 = (undefined4 *)(iVar1 + 0x18);
    piVar5 = piVar2 + 0x4d;
    do {
      if (piVar2[0x5e] == 0) {
        if (piVar2[0x60] == 0) {
          iVar11 = *(int *)(*piVar5 + 0x14);
          FUN_00413bf0(piVar2,'\x01',iVar11,(int *)(iVar1 + (iVar11 + 0xc) * 4));
        }
      }
      else {
        iVar11 = *(int *)(*piVar5 + 0x18);
        FUN_00413bf0(piVar2,'\0',iVar11,(int *)(iVar1 + (iVar11 + 0xc) * 4));
        *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x30 + iVar11 * 4);
      }
      *puVar4 = 0;
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 < piVar2[0x4c]);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
LAB_004144f4:
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  *(int *)(iVar1 + 0x2c) = piVar2[0x3f];
  return;
}




int __cdecl FUN_00414570(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar2 = param_1[0x6c];
  iVar8 = *(int *)(iVar2 + 0x10);
  if (iVar8 < 0x8000) {
    do {
      iVar8 = *(int *)(iVar2 + 0x14) + -1;
      *(int *)(iVar2 + 0x14) = iVar8;
      if (iVar8 < 0) {
        if (param_1[0x65] == 0) {
          puVar3 = (undefined4 *)param_1[6];
          if ((puVar3[1] == 0) && (cVar5 = (*(code *)puVar3[3])(param_1), cVar5 == '\0')) {
            *(undefined4 *)(*param_1 + 0x14) = 0x19;
            (**(code **)*param_1)(param_1);
          }
          puVar3[1] = puVar3[1] + -1;
          uVar9 = (uint)*(byte *)*puVar3;
          *puVar3 = (byte *)*puVar3 + 1;
          if (uVar9 == 0xff) {
            do {
              puVar3 = (undefined4 *)param_1[6];
              if ((puVar3[1] == 0) && (cVar5 = (*(code *)puVar3[3])(param_1), cVar5 == '\0')) {
                *(undefined4 *)(*param_1 + 0x14) = 0x19;
                (**(code **)*param_1)(param_1);
              }
              puVar3[1] = puVar3[1] + -1;
              bVar7 = *(byte *)*puVar3;
              *puVar3 = (byte *)*puVar3 + 1;
            } while (bVar7 == 0xff);
            if (bVar7 != 0) {
              param_1[0x65] = (uint)bVar7;
              goto LAB_0041463e;
            }
            uVar9 = 0xff;
          }
        }
        else {
LAB_0041463e:
          uVar9 = 0;
        }
        iVar4 = *(int *)(iVar2 + 0x14);
        iVar8 = iVar4 + 8;
        *(uint *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) << 8 | uVar9;
        *(int *)(iVar2 + 0x14) = iVar8;
        if (iVar8 < 0) {
          iVar8 = iVar4 + 9;
          *(int *)(iVar2 + 0x14) = iVar8;
          if (iVar8 == 0) {
            *(undefined4 *)(iVar2 + 0x10) = 0x8000;
            iVar8 = 0;
          }
        }
      }
      bVar7 = (byte)iVar8;
      iVar8 = *(int *)(iVar2 + 0x10) * 2;
      *(int *)(iVar2 + 0x10) = iVar8;
    } while (iVar8 < 0x8000);
  }
  else {
    bVar7 = (byte)*(undefined4 *)(iVar2 + 0x14);
  }
  bVar1 = *param_2;
  uVar9 = (uint)bVar1;
  iVar4 = *(int *)(&DAT_0042a150 + (uVar9 & 0x7f) * 4);
  iVar6 = iVar4 >> 0x10;
  iVar8 = iVar8 - iVar6;
  *(int *)(iVar2 + 0x10) = iVar8;
  iVar10 = iVar8 << (bVar7 & 0x1f);
  bVar7 = (byte)((uint)iVar4 >> 8);
  if (iVar10 <= *(int *)(iVar2 + 0xc)) {
    *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) - iVar10;
    *(int *)(iVar2 + 0x10) = iVar6;
    if (iVar6 <= iVar8) {
      bVar7 = (byte)iVar4;
      uVar9 = uVar9 ^ 0x80;
    }
    *param_2 = bVar7 ^ bVar1 & 0x80;
    return (int)uVar9 >> 7;
  }
  if (iVar8 < 0x8000) {
    if (iVar8 < iVar6) {
      *param_2 = bVar1 & 0x80 ^ (byte)iVar4;
      return (int)(uVar9 ^ 0x80) >> 7;
    }
    *param_2 = bVar1 & 0x80 ^ bVar7;
  }
  return (int)uVar9 >> 7;
}




undefined4 __cdecl FUN_00414ae0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  
  iVar2 = param_1[0x6c];
  if (param_1[0x3f] != 0) {
    iVar6 = *(int *)(iVar2 + 0x38);
    if (iVar6 == 0) {
      FUN_004151e0(param_1);
      iVar6 = *(int *)(iVar2 + 0x38);
    }
    in_EAX = iVar6 + -1;
    *(int *)(iVar2 + 0x38) = in_EAX;
  }
  if (*(int *)(iVar2 + 0x14) != -1) {
    iVar6 = param_1[99];
    iVar12 = param_1[0x5e] + -1;
    iVar3 = *param_2;
    iVar4 = *(int *)(param_1[0x4d] + 0x18);
    iVar7 = iVar4 + 0x1f;
    pbVar13 = (byte *)(iVar12 * 3 + *(int *)(iVar2 + iVar7 * 4));
    piVar1 = (int *)(iVar2 + iVar7 * 4);
    in_EAX = FUN_00414570(param_1,pbVar13);
    while (in_EAX == 0) {
      iVar7 = FUN_00414570(param_1,pbVar13 + 1);
      while (iVar12 = iVar12 + 1, iVar7 == 0) {
        if (param_1[0x5f] <= iVar12) {
          *(undefined4 *)(*param_1 + 0x14) = 0x75;
          uVar10 = (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
          return CONCAT31((int3)((uint)uVar10 >> 8),1);
        }
        iVar7 = FUN_00414570(param_1,pbVar13 + 4);
        pbVar13 = pbVar13 + 3;
      }
      iVar7 = FUN_00414570(param_1,(byte *)(iVar2 + 0xbc));
      pbVar13 = pbVar13 + 2;
      uVar8 = FUN_00414570(param_1,pbVar13);
      if ((uVar8 != 0) && (iVar9 = FUN_00414570(param_1,pbVar13), iVar9 != 0)) {
        uVar8 = uVar8 * 2;
        iVar9 = 0xd9;
        if (iVar12 <= (int)(uint)*(byte *)(iVar4 + 0xeb + (int)param_1)) {
          iVar9 = 0xbd;
        }
        pbVar13 = (byte *)(iVar9 + *piVar1);
        iVar9 = FUN_00414570(param_1,pbVar13);
        while (iVar9 != 0) {
          uVar8 = uVar8 * 2;
          if (uVar8 == 0x8000) {
            *(undefined4 *)(*param_1 + 0x14) = 0x75;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
            *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
            in_EAX = iVar2;
            goto LAB_00414d0a;
          }
          pbVar13 = pbVar13 + 1;
          iVar9 = FUN_00414570(param_1,pbVar13);
        }
      }
      uVar5 = uVar8;
      while (uVar5 = (int)uVar5 >> 1, uVar5 != 0) {
        iVar9 = FUN_00414570(param_1,pbVar13 + 0xe);
        if (iVar9 != 0) {
          uVar8 = uVar8 | uVar5;
        }
      }
      sVar11 = (short)uVar8 + 1;
      if (iVar7 != 0) {
        sVar11 = -sVar11;
      }
      in_EAX = *(int *)(iVar6 + iVar12 * 4);
      *(short *)(iVar3 + in_EAX * 2) = sVar11 << ((byte)param_1[0x61] & 0x1f);
      if (param_1[0x5f] <= iVar12) break;
      pbVar13 = (byte *)(iVar12 * 3 + *piVar1);
      in_EAX = FUN_00414570(param_1,pbVar13);
    }
  }
LAB_00414d0a:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




undefined4 __cdecl FUN_00414d20(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort uVar7;
  int in_EAX;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  byte *pbVar14;
  
  iVar2 = param_1[0x6c];
  if (param_1[0x3f] != 0) {
    iVar8 = *(int *)(iVar2 + 0x38);
    if (iVar8 == 0) {
      FUN_004151e0(param_1);
      iVar8 = *(int *)(iVar2 + 0x38);
    }
    in_EAX = iVar8 + -1;
    *(int *)(iVar2 + 0x38) = in_EAX;
  }
  if (*(int *)(iVar2 + 0x14) != -1) {
    iVar8 = param_1[99];
    iVar3 = *param_2;
    iVar4 = *(int *)(param_1[0x4d] + 0x18);
    uVar7 = 1 << ((byte)param_1[0x61] & 0x1f);
    iVar11 = param_1[0x5f];
    uVar9 = -(uint)uVar7;
    do {
      if (*(short *)(iVar3 + *(int *)(iVar8 + iVar11 * 4) * 2) != 0) break;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    iVar13 = param_1[0x5e] + -1;
    do {
      pbVar14 = (byte *)(iVar13 * 3 + *(int *)(iVar2 + iVar4 * 4 + 0x7c));
      if ((iVar11 <= iVar13) && (in_EAX = FUN_00414570(param_1,pbVar14), in_EAX != 0)) break;
      iVar10 = *(int *)(iVar8 + 4 + iVar13 * 4);
      iVar13 = iVar13 + 1;
      sVar1 = *(short *)(iVar3 + iVar10 * 2);
      while (puVar6 = (ushort *)(iVar3 + iVar10 * 2), sVar1 == 0) {
        iVar10 = FUN_00414570(param_1,pbVar14 + 1);
        if (iVar10 != 0) {
          in_EAX = FUN_00414570(param_1,(byte *)(iVar2 + 0xbc));
          uVar12 = uVar7;
          if (in_EAX != 0) {
            uVar12 = (ushort)uVar9;
          }
          *puVar6 = uVar12;
          goto LAB_00414e8a;
        }
        pbVar14 = pbVar14 + 3;
        if (param_1[0x5f] <= iVar13) {
          *(undefined4 *)(*param_1 + 0x14) = 0x75;
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
          in_EAX = iVar2;
          goto LAB_00414eca;
        }
        iVar13 = iVar13 + 1;
        iVar10 = *(int *)(iVar8 + iVar13 * 4);
        sVar1 = *(short *)(iVar3 + iVar10 * 2);
      }
      in_EAX = FUN_00414570(param_1,pbVar14 + 2);
      if (in_EAX != 0) {
        uVar5 = (uint)uVar7;
        if ((short)*puVar6 < 0) {
          uVar5 = uVar9 & 0xffff;
        }
        in_EAX = *puVar6 + uVar5;
        *puVar6 = (ushort)in_EAX;
      }
LAB_00414e8a:
    } while (iVar13 < param_1[0x5f]);
  }
LAB_00414eca:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




undefined4 __cdecl FUN_00414ee0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  int local_c;
  
  iVar2 = param_1[0x6c];
  if (param_1[0x3f] != 0) {
    iVar5 = *(int *)(iVar2 + 0x38);
    if (iVar5 == 0) {
      FUN_004151e0(param_1);
      iVar5 = *(int *)(iVar2 + 0x38);
    }
    in_EAX = iVar5 + -1;
    *(int *)(iVar2 + 0x38) = in_EAX;
  }
  if (*(int *)(iVar2 + 0x14) != -1) {
    in_EAX = 0;
    local_c = 0;
    if (0 < param_1[0x53]) {
      piVar10 = param_1 + 0x54;
      do {
        iVar5 = *piVar10;
        psVar3 = *(short **)(param_2 + local_c * 4);
        iVar9 = *(int *)(param_1[iVar5 + 0x4d] + 0x14);
        pbVar11 = (byte *)(*(int *)(iVar2 + 0x3c + iVar9 * 4) + *(int *)(iVar2 + 0x28 + iVar5 * 4));
        iVar6 = FUN_00414570(param_1,pbVar11);
        if (iVar6 == 0) {
          *(undefined4 *)(iVar2 + 0x28 + iVar5 * 4) = 0;
        }
        else {
          iVar6 = FUN_00414570(param_1,pbVar11 + 1);
          pbVar11 = pbVar11 + iVar6 + 2;
          uVar7 = FUN_00414570(param_1,pbVar11);
          if (uVar7 != 0) {
            pbVar11 = (byte *)(*(int *)(iVar2 + 0x3c + iVar9 * 4) + 0x14);
            iVar8 = FUN_00414570(param_1,pbVar11);
            while (iVar8 != 0) {
              uVar7 = uVar7 * 2;
              if (uVar7 == 0x8000) {
                *(undefined4 *)(*param_1 + 0x14) = 0x75;
                in_EAX = (**(code **)(*param_1 + 4))(param_1,0xffffffff);
                *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
                goto LAB_004150b1;
              }
              pbVar11 = pbVar11 + 1;
              iVar8 = FUN_00414570(param_1,pbVar11);
            }
          }
          if ((int)uVar7 < (1 << (*(byte *)(iVar9 + 0xcb + (int)param_1) & 0x1f)) >> 1) {
            iVar9 = 0;
          }
          else if ((1 << (*(byte *)(iVar9 + 0xdb + (int)param_1) & 0x1f)) >> 1 < (int)uVar7) {
            iVar9 = iVar6 * 4 + 0xc;
          }
          else {
            iVar9 = iVar6 * 4 + 4;
          }
          *(int *)(iVar2 + 0x28 + iVar5 * 4) = iVar9;
          uVar4 = uVar7;
          while (uVar4 = (int)uVar4 >> 1, uVar4 != 0) {
            iVar9 = FUN_00414570(param_1,pbVar11 + 0xe);
            if (iVar9 != 0) {
              uVar7 = uVar7 | uVar4;
            }
          }
          iVar9 = uVar7 + 1;
          if (iVar6 != 0) {
            iVar9 = -iVar9;
          }
          piVar1 = (int *)(iVar2 + 0x18 + iVar5 * 4);
          *piVar1 = *piVar1 + iVar9;
        }
        *psVar3 = *(short *)(iVar2 + 0x18 + iVar5 * 4) << ((byte)param_1[0x61] & 0x1f);
        in_EAX = local_c + 1;
        piVar10 = piVar10 + 1;
        local_c = in_EAX;
      } while (in_EAX < param_1[0x53]);
    }
  }
LAB_004150b1:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




void __cdecl FUN_00415140(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xc0);
  *(undefined4 **)(param_1 + 0x1b0) = puVar1;
  iVar4 = 0x10;
  *puVar1 = &LAB_004152f0;
  puVar1[2] = guard_check_icall;
  puVar2 = puVar1 + 0x1f;
  do {
    puVar2[-0x10] = 0;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  *(undefined1 *)(puVar1 + 0x2f) = 0x71;
  if (*(char *)(param_1 + 0xc9) != '\0') {
    puVar2 = (undefined4 *)
             (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
    iVar4 = 0;
    *(undefined4 **)(param_1 + 0x8c) = puVar2;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar4 = iVar4 + 1;
        puVar1 = puVar2;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        }
        puVar2 = puVar2 + 0x40;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
  }
  return;
}




void __cdecl FUN_004151e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = param_1[0x6c];
  cVar4 = (**(code **)(param_1[0x6b] + 8))(param_1);
  if (cVar4 == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  iVar7 = 0;
  if (0 < param_1[0x4c]) {
    piVar5 = param_1 + 0x4d;
    puVar6 = (undefined4 *)(iVar1 + 0x28);
    do {
      iVar2 = *piVar5;
      cVar4 = *(char *)((int)param_1 + 0xc9);
      if ((cVar4 == '\0') || ((param_1[0x5e] == 0 && (param_1[0x60] == 0)))) {
        memset(*(void **)(iVar1 + 0x3c + *(int *)(iVar2 + 0x14) * 4),0,0x40);
        puVar6[-4] = 0;
        *puVar6 = 0;
        cVar4 = *(char *)((int)param_1 + 0xc9);
      }
      if (cVar4 == '\0') {
        iVar3 = param_1[100];
      }
      else {
        iVar3 = param_1[0x5e];
      }
      if (iVar3 != 0) {
        memset(*(void **)(iVar1 + 0x7c + *(int *)(iVar2 + 0x18) * 4),0,0x100);
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < param_1[0x4c]);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0xfffffff0;
  *(int *)(iVar1 + 0x38) = param_1[0x3f];
  return;
}




void __cdecl FUN_00415670(int param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54);
  *(undefined4 **)(param_1 + 0x1b4) = puVar1;
  iVar2 = 0;
  *puVar1 = FUN_004156e0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x54);
    puVar1 = puVar1 + 0xb;
    do {
      _Dst = (void *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
      *puVar3 = _Dst;
      memset(_Dst,0,0x100);
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x16;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return;
}




void __cdecl FUN_004156e0(int *param_1)

{
  ulonglong *puVar1;
  double dVar2;
  ulonglong uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  int iVar20;
  ulonglong *puVar21;
  undefined1 (*pauVar22) [16];
  float *pfVar23;
  ulonglong *puVar24;
  double *pdVar25;
  short *psVar26;
  ushort *puVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  code *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int local_c;
  
  iVar5 = param_1[0x6d];
  iVar30 = 0;
  iVar29 = param_1[0x31];
  pcVar31 = (code *)0x0;
  local_c = 0;
  if (0 < param_1[9]) {
    do {
      iVar20 = *(int *)(iVar29 + 0x24) * 0x100 + *(int *)(iVar29 + 0x28);
      if (iVar20 < 0x70f) {
        if (iVar20 == 0x70e) {
          pcVar31 = (code *)&LAB_004229f0;
          goto LAB_00415a29;
        }
        if (0x404 < iVar20) {
          if (iVar20 < 0x604) {
            if (iVar20 == 0x603) {
              pcVar31 = FUN_004219b0;
            }
            else if (iVar20 == 0x408) {
              pcVar31 = (code *)&LAB_0041fbc0;
            }
            else if (iVar20 == 0x505) {
              pcVar31 = FUN_00420e00;
            }
            else {
              if (iVar20 != 0x50a) goto LAB_004159bd;
              pcVar31 = (code *)&LAB_00420370;
            }
          }
          else if (iVar20 == 0x606) {
            pcVar31 = (code *)&LAB_00421ed0;
          }
          else if (iVar20 == 0x60c) {
            pcVar31 = (code *)&LAB_004215e0;
          }
          else {
            if (iVar20 != 0x707) goto LAB_004159bd;
            pcVar31 = (code *)&LAB_00422eb0;
          }
          goto LAB_00415a29;
        }
        if (iVar20 == 0x404) {
          pcVar31 = (code *)&LAB_0041f730;
          goto LAB_00415a29;
        }
        if (0x204 < iVar20) {
          if (iVar20 == 0x303) {
            pcVar31 = FUN_0041edc0;
          }
          else if (iVar20 == 0x306) {
            pcVar31 = FUN_0041f020;
          }
          else {
            if (iVar20 != 0x402) goto LAB_004159bd;
            pcVar31 = FUN_0041f560;
          }
          goto LAB_00415a29;
        }
        if (iVar20 == 0x204) {
          pcVar31 = FUN_0041ebc0;
          goto LAB_00415a29;
        }
        if (iVar20 < 0x202) {
          if (iVar20 == 0x201) {
            pcVar31 = (code *)&LAB_0041ea80;
          }
          else if (iVar20 == 0x101) {
            pcVar31 = (code *)&LAB_0041e9c0;
          }
          else {
            if (iVar20 != 0x102) goto LAB_004159bd;
            pcVar31 = (code *)&LAB_0041ea10;
          }
          goto LAB_00415a29;
        }
        if (iVar20 == 0x202) {
          pcVar31 = (code *)&LAB_0041eaf0;
          goto LAB_00415a29;
        }
LAB_004159bd:
        *(undefined4 *)(*param_1 + 0x14) = 7;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(iVar29 + 0x24);
        *(undefined4 *)(*param_1 + 0x1c) = *(undefined4 *)(iVar29 + 0x28);
LAB_004159d6:
        (**(code **)*param_1)(param_1);
      }
      else {
        if (iVar20 < 0xc07) {
          if (iVar20 == 0xc06) {
            pcVar31 = (code *)&LAB_0041b0a0;
          }
          else if (iVar20 < 0x90a) {
            if (iVar20 == 0x909) {
              pcVar31 = (code *)&LAB_00424e00;
            }
            else if (iVar20 == 0x804) {
              pcVar31 = (code *)&LAB_00424830;
            }
            else if (iVar20 == 0x808) {
              iVar20 = param_1[0x11];
              if (iVar20 != 0) {
                if (iVar20 == 1) {
                  pcVar31 = (code *)&LAB_004256a0;
                  iVar30 = 1;
                }
                else {
                  if (iVar20 != 2) {
                    *(undefined4 *)(*param_1 + 0x14) = 0x31;
                    goto LAB_004159d6;
                  }
                  pcVar31 = (code *)&LAB_00425af0;
                  iVar30 = 2;
                }
                goto LAB_00415a2b;
              }
              pcVar31 = (code *)&LAB_00425200;
            }
            else {
              if (iVar20 != 0x810) goto LAB_004159bd;
              pcVar31 = (code *)&LAB_004242d0;
            }
          }
          else if (iVar20 == 0xa05) {
            pcVar31 = (code *)&LAB_00419da0;
          }
          else if (iVar20 == 0xa0a) {
            pcVar31 = (code *)&LAB_00419910;
          }
          else {
            if (iVar20 != 0xb0b) goto LAB_004159bd;
            pcVar31 = (code *)&LAB_0041a5f0;
          }
        }
        else if (iVar20 < 0xe0f) {
          if (iVar20 == 0xe0e) {
            pcVar31 = (code *)&LAB_0041c0e0;
          }
          else if (iVar20 == 0xc0c) {
            pcVar31 = (code *)&LAB_0041ab70;
          }
          else if (iVar20 == 0xd0d) {
            pcVar31 = (code *)&LAB_0041baa0;
          }
          else {
            if (iVar20 != 0xe07) goto LAB_004159bd;
            pcVar31 = (code *)&LAB_0041c710;
          }
        }
        else if (iVar20 == 0xf0f) {
          pcVar31 = (code *)&LAB_0041d5d0;
        }
        else if (iVar20 == 0x1008) {
          pcVar31 = (code *)&LAB_0041e390;
        }
        else {
          if (iVar20 != 0x1010) goto LAB_004159bd;
          pcVar31 = (code *)&LAB_0041dc40;
        }
LAB_00415a29:
        iVar30 = 0;
      }
LAB_00415a2b:
      *(code **)(iVar5 + 4 + local_c * 4) = pcVar31;
      if (((*(char *)(iVar29 + 0x34) != '\0') && (*(int *)(iVar5 + 0x2c + local_c * 4) != iVar30))
         && (piVar6 = *(int **)(iVar29 + 0x50), piVar6 != (int *)0x0)) {
        *(int *)(iVar5 + 0x2c + local_c * 4) = iVar30;
        if (iVar30 == 0) {
          puVar7 = *(undefined **)(iVar29 + 0x54);
          iVar20 = 0;
          if (((undefined *)((int)piVar6 + 0x7e) < puVar7) || (puVar7 + 0xfc < piVar6)) {
            iVar20 = 4;
            pauVar22 = (undefined1 (*) [16])(puVar7 + 0x20);
            puVar21 = (ulonglong *)(piVar6 + 4);
            do {
              uVar3 = puVar21[-2];
              auVar8._8_4_ = 0;
              auVar8._0_8_ = uVar3;
              auVar8._12_2_ = (short)(uVar3 >> 0x30);
              auVar12._8_2_ = (short)(uVar3 >> 0x20);
              auVar12._0_8_ = uVar3;
              auVar12._10_4_ = auVar8._10_4_;
              auVar16._6_8_ = 0;
              auVar16._0_6_ = auVar12._8_6_;
              auVar42._6_8_ = SUB148(auVar16 << 0x40,6);
              auVar42._4_2_ = (short)(uVar3 >> 0x10);
              auVar42._0_2_ = (ushort)uVar3;
              auVar42._2_2_ = 0;
              auVar42._14_2_ = 0;
              pauVar22[-2] = auVar42;
              uVar3 = puVar21[-1];
              auVar9._8_4_ = 0;
              auVar9._0_8_ = uVar3;
              auVar9._12_2_ = (short)(uVar3 >> 0x30);
              auVar13._8_2_ = (short)(uVar3 >> 0x20);
              auVar13._0_8_ = uVar3;
              auVar13._10_4_ = auVar9._10_4_;
              auVar17._6_8_ = 0;
              auVar17._0_6_ = auVar13._8_6_;
              auVar34._6_8_ = SUB148(auVar17 << 0x40,6);
              auVar34._4_2_ = (short)(uVar3 >> 0x10);
              auVar34._0_2_ = (ushort)uVar3;
              auVar34._2_2_ = 0;
              auVar34._14_2_ = 0;
              pauVar22[-1] = auVar34;
              uVar3 = *puVar21;
              auVar10._8_4_ = 0;
              auVar10._0_8_ = uVar3;
              auVar10._12_2_ = (short)(uVar3 >> 0x30);
              auVar14._8_2_ = (short)(uVar3 >> 0x20);
              auVar14._0_8_ = uVar3;
              auVar14._10_4_ = auVar10._10_4_;
              auVar18._6_8_ = 0;
              auVar18._0_6_ = auVar14._8_6_;
              auVar41._6_8_ = SUB148(auVar18 << 0x40,6);
              auVar41._4_2_ = (short)(uVar3 >> 0x10);
              auVar41._0_2_ = (ushort)uVar3;
              auVar41._2_2_ = 0;
              auVar41._14_2_ = 0;
              *pauVar22 = auVar41;
              uVar3 = puVar21[1];
              auVar11._8_4_ = 0;
              auVar11._0_8_ = uVar3;
              auVar11._12_2_ = (short)(uVar3 >> 0x30);
              auVar15._8_2_ = (short)(uVar3 >> 0x20);
              auVar15._0_8_ = uVar3;
              auVar15._10_4_ = auVar11._10_4_;
              auVar19._6_8_ = 0;
              auVar19._0_6_ = auVar15._8_6_;
              in_XMM1._6_8_ = SUB148(auVar19 << 0x40,6);
              in_XMM1._4_2_ = (short)(uVar3 >> 0x10);
              in_XMM1._0_2_ = (ushort)uVar3;
              in_XMM1._2_2_ = 0;
              in_XMM1._14_2_ = 0;
              pauVar22[1] = in_XMM1;
              iVar20 = iVar20 + -1;
              pauVar22 = pauVar22 + 4;
              puVar21 = puVar21 + 4;
            } while (iVar20 != 0);
          }
          else {
            do {
              *(uint *)(puVar7 + iVar20 * 4) = (uint)*(ushort *)((int)piVar6 + iVar20 * 2);
              iVar20 = iVar20 + 1;
            } while (iVar20 < 0x40);
          }
        }
        else if (iVar30 == 1) {
          piVar28 = *(int **)(iVar29 + 0x54);
          if (((DAT_0042f894 < 2) || ((piVar28 < &UNK_00429f67 && (&UNK_00429ee7 < piVar28 + 0x3f)))
              ) || ((piVar28 <= (int *)((int)piVar6 + 0x7e) && (piVar6 <= piVar28 + 0x3f)))) {
            psVar26 = &DAT_00429ee8;
            do {
              puVar27 = (ushort *)((int)psVar26 + (int)(piVar6 + -0x10a7ba));
              sVar4 = *psVar26;
              psVar26 = psVar26 + 1;
              *piVar28 = (int)((uint)*puVar27 * (int)sVar4 + 0x800) >> 0xc;
              piVar28 = piVar28 + 1;
            } while ((int)psVar26 < 0x429f68);
          }
          else {
            puVar24 = &DAT_00429ef0;
            auVar42 = ZEXT416(0xc);
            puVar21 = (ulonglong *)(piVar6 + 4);
            piVar28 = piVar28 + 8;
            do {
              auVar32._8_8_ = 0;
              auVar32._0_8_ = puVar24[-1];
              auVar41 = pmovsxwd(in_XMM1,auVar32);
              auVar33._8_8_ = 0;
              auVar33._0_8_ = puVar21[-2];
              puVar1 = puVar21 + 4;
              auVar34 = pmovzxwd(auVar33,auVar33);
              auVar34 = pmulld(auVar34,auVar41);
              piVar28[-8] = auVar34._0_4_ + 0x800 >> auVar42;
              piVar28[-7] = auVar34._4_4_ + 0x800 >> auVar42;
              piVar28[-6] = auVar34._8_4_ + 0x800 >> auVar42;
              piVar28[-5] = auVar34._12_4_ + 0x800 >> auVar42;
              auVar35._8_8_ = 0;
              auVar35._0_8_ = *puVar24;
              puVar24 = puVar24 + 4;
              auVar41 = pmovsxwd(auVar41,auVar35);
              auVar36._8_8_ = 0;
              auVar36._0_8_ = puVar21[-1];
              auVar34 = pmovzxwd(auVar36,auVar36);
              auVar34 = pmulld(auVar34,auVar41);
              piVar28[-4] = auVar34._0_4_ + 0x800 >> auVar42;
              piVar28[-3] = auVar34._4_4_ + 0x800 >> auVar42;
              piVar28[-2] = auVar34._8_4_ + 0x800 >> auVar42;
              piVar28[-1] = auVar34._12_4_ + 0x800 >> auVar42;
              auVar37._8_8_ = 0;
              auVar37._0_8_ = *(ulonglong *)(((int)&UNK_00429ec8 - (int)piVar6) + (int)puVar1);
              auVar41 = pmovsxwd(auVar41,auVar37);
              auVar38._8_8_ = 0;
              auVar38._0_8_ = *puVar21;
              auVar34 = pmovzxwd(auVar38,auVar38);
              auVar34 = pmulld(auVar34,auVar41);
              *piVar28 = auVar34._0_4_ + 0x800 >> auVar42;
              piVar28[1] = auVar34._4_4_ + 0x800 >> auVar42;
              piVar28[2] = auVar34._8_4_ + 0x800 >> auVar42;
              piVar28[3] = auVar34._12_4_ + 0x800 >> auVar42;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = *(ulonglong *)(((int)&UNK_00429ed0 - (int)piVar6) + (int)puVar1);
              in_XMM1 = pmovsxwd(auVar41,auVar39);
              auVar40._8_8_ = 0;
              auVar40._0_8_ = puVar21[1];
              auVar34 = pmovzxwd(auVar40,auVar40);
              auVar34 = pmulld(auVar34,in_XMM1);
              piVar28[4] = auVar34._0_4_ + 0x800 >> auVar42;
              piVar28[5] = auVar34._4_4_ + 0x800 >> auVar42;
              piVar28[6] = auVar34._8_4_ + 0x800 >> auVar42;
              piVar28[7] = auVar34._12_4_ + 0x800 >> auVar42;
              puVar21 = puVar1;
              piVar28 = piVar28 + 0x10;
            } while ((int)puVar24 < 0x429f70);
          }
        }
        else if (iVar30 == 2) {
          pdVar25 = (double *)&DAT_00429f68;
          pfVar23 = (float *)(*(int *)(iVar29 + 0x54) + 8);
          puVar27 = (ushort *)(piVar6 + 1);
          do {
            dVar2 = *pdVar25;
            in_XMM1._8_8_ = 0;
            in_XMM1._0_8_ = dVar2;
            pdVar25 = pdVar25 + 1;
            pfVar23[-2] = (float)((double)puVar27[-2] * dVar2 * 0.125);
            pfVar23[-1] = (float)((double)puVar27[-1] * dVar2 * 1.387039845 * 0.125);
            *pfVar23 = (float)((double)*puVar27 * dVar2 * 1.306562965 * 0.125);
            pfVar23[1] = (float)((double)puVar27[1] * dVar2 * 1.175875602 * 0.125);
            pfVar23[2] = (float)((double)puVar27[2] * dVar2 * 0.125);
            pfVar23[3] = (float)((double)puVar27[3] * dVar2 * 0.785694958 * 0.125);
            pfVar23[4] = (float)((double)puVar27[4] * dVar2 * 0.5411961 * 0.125);
            pfVar23[5] = (float)((double)puVar27[5] * dVar2 * 0.275899379 * 0.125);
            pfVar23 = pfVar23 + 8;
            puVar27 = puVar27 + 8;
          } while ((int)pdVar25 < 0x429fa8);
        }
        else {
          *(undefined4 *)(*param_1 + 0x14) = 0x31;
          (**(code **)*param_1)(param_1);
        }
      }
      local_c = local_c + 1;
      iVar29 = iVar29 + 0x58;
    } while (local_c < param_1[9]);
  }
  return;
}




void __cdecl FUN_00415ec0(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  
  bVar3 = *(byte *)(*(int *)(param_2 + 4) + 0x8c + *(int *)(param_1 + 0x1b8));
  uVar10 = (uint)bVar3;
  uVar6 = (uint)*(byte *)(*(int *)(param_2 + 4) + 0x96 + *(int *)(param_1 + 0x1b8));
  puVar8 = (uint *)*param_4;
  puVar1 = puVar8 + *(int *)(param_1 + 0x11c);
  for (; puVar8 < puVar1; puVar8 = puVar8 + uVar6) {
    piVar9 = (int *)*puVar8;
    pbVar4 = (byte *)*param_3;
    param_3 = param_3 + 1;
    piVar5 = (int *)(*(int *)(param_1 + 0x5c) + (int)piVar9);
    while (piVar9 < piVar5) {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      if (uVar10 != 0) {
        piVar11 = piVar9;
        for (uVar7 = (uint)(bVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
          *piVar11 = (uint)bVar2 * 0x1010101;
          piVar11 = piVar11 + 1;
        }
        piVar9 = (int *)((int)piVar9 + uVar10);
        for (uVar7 = uVar10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)piVar11 = (char)((uint)bVar2 * 0x1010101);
          piVar11 = (int *)((int)piVar11 + 1);
        }
      }
    }
    if (1 < uVar6) {
      FUN_00410be0((int)puVar8,puVar8 + 1,uVar6 - 1,*(size_t *)(param_1 + 0x5c));
    }
  }
  return;
}




void __cdecl FUN_00415fb0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x6e] = (int)puVar2;
  *puVar2 = &LAB_00416220;
  puVar2[1] = &LAB_00416140;
  *(undefined1 *)(puVar2 + 2) = 0;
  if ((char)param_1[0x44] != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x1a;
    (**(code **)*param_1)(param_1);
  }
  iVar8 = 0;
  if (0 < param_1[9]) {
    piVar6 = (int *)(param_1[0x31] + 0x24);
    puVar7 = puVar2 + 0xd;
    do {
      if ((char)piVar6[4] != '\0') {
        iVar3 = (piVar6[-7] * *piVar6) / param_1[0x48];
        iVar4 = (piVar6[-6] * piVar6[1]) / param_1[0x49];
        iVar9 = param_1[0x47];
        iVar1 = param_1[0x46];
        puVar7[0xc] = iVar4;
        if ((iVar3 == iVar1) && (iVar4 == iVar9)) {
          *puVar7 = &LAB_00415de0;
        }
        else {
          if (iVar3 * 2 == iVar1) {
            if (iVar4 == iVar9) {
              *puVar7 = &LAB_00415df0;
            }
            else {
              if (iVar4 * 2 != iVar9) goto LAB_004160a3;
              *puVar7 = &LAB_00415e50;
            }
          }
          else {
LAB_004160a3:
            if ((iVar1 % iVar3 == 0) && (iVar9 % iVar4 == 0)) {
              *puVar7 = FUN_00415ec0;
              *(char *)((int)puVar2 + iVar8 + 0x8c) = (char)(iVar1 / iVar3);
              *(char *)((int)puVar2 + iVar8 + 0x96) = (char)(iVar9 / iVar4);
            }
            else {
              *(undefined4 *)(*param_1 + 0x14) = 0x27;
              (**(code **)*param_1)(param_1);
            }
          }
          iVar9 = param_1[0x47];
          iVar1 = param_1[1];
          iVar3 = FUN_00410c30(param_1[0x17],param_1[0x46]);
          uVar5 = (**(code **)(iVar1 + 8))(param_1,1,iVar3,iVar9);
          puVar7[-10] = uVar5;
        }
      }
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 0x16;
      puVar7 = puVar7 + 1;
    } while (iVar8 < param_1[9]);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00416240(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar6 = *(int *)(param_1 + 0x1bc);
  iVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0xc00);
  *(int *)(iVar6 + 0x18) = iVar4;
  auVar3 = _DAT_0042a030;
  auVar2 = _DAT_0042a010;
  auVar1 = _DAT_0042a000;
  piVar5 = (int *)(iVar4 + 0x800);
  iVar6 = 0;
  if (DAT_0042f894 < 2) {
    iVar7 = 0;
    iVar4 = 0x8000;
    do {
      *piVar5 = iVar4;
      piVar5[-0x200] = iVar7;
      iVar4 = iVar4 + 0x1d2f;
      piVar5[-0x100] = iVar6;
      iVar7 = iVar7 + 0x4c8b;
      iVar6 = iVar6 + 0x9646;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 0x1d91d2);
    return;
  }
  do {
    auVar11._0_8_ = CONCAT44(iVar6 + 1,iVar6);
    auVar11._8_4_ = iVar6 + 2;
    auVar11._12_4_ = iVar6 + 3;
    iVar4 = iVar6 + 8;
    auVar8._8_4_ = auVar11._8_4_;
    auVar8._0_8_ = auVar11._0_8_;
    auVar8._12_4_ = auVar11._12_4_;
    auVar8 = pmulld(auVar8,auVar2);
    *(undefined1 (*) [16])(piVar5 + -0x200) = auVar8;
    auVar13._8_4_ = auVar11._8_4_;
    auVar13._0_8_ = auVar11._0_8_;
    auVar13._12_4_ = auVar11._12_4_;
    auVar8 = pmulld(auVar13,auVar3);
    *(undefined1 (*) [16])(piVar5 + -0x100) = auVar8;
    auVar8 = pmulld(auVar11,auVar1);
    *piVar5 = auVar8._0_4_ + 0x8000;
    piVar5[1] = auVar8._4_4_ + 0x8000;
    piVar5[2] = auVar8._8_4_ + 0x8000;
    piVar5[3] = auVar8._12_4_ + 0x8000;
    auVar12._0_8_ = CONCAT44(iVar6 + 5,iVar6 + 4);
    auVar12._8_4_ = iVar6 + 6;
    auVar12._12_4_ = iVar6 + 7;
    auVar9._8_4_ = auVar12._8_4_;
    auVar9._0_8_ = auVar12._0_8_;
    auVar9._12_4_ = auVar12._12_4_;
    auVar8 = pmulld(auVar9,auVar2);
    *(undefined1 (*) [16])(piVar5 + -0x1fc) = auVar8;
    auVar10._8_4_ = auVar12._8_4_;
    auVar10._0_8_ = auVar12._0_8_;
    auVar10._12_4_ = auVar12._12_4_;
    auVar13 = pmulld(auVar12,auVar1);
    auVar8 = pmulld(auVar10,auVar3);
    *(undefined1 (*) [16])(piVar5 + -0xfc) = auVar8;
    piVar5[4] = auVar13._0_4_ + 0x8000;
    piVar5[5] = auVar13._4_4_ + 0x8000;
    piVar5[6] = auVar13._8_4_ + 0x8000;
    piVar5[7] = auVar13._12_4_ + 0x8000;
    piVar5 = piVar5 + 8;
    iVar6 = iVar4;
  } while (iVar4 < 0x100);
  return;
}




void __cdecl FUN_00416360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  param_1 = -0xe25100;
  iVar4 = 0x5b6900;
  iVar5 = 0x2c8c80;
  iVar3 = 0;
  iVar6 = -0xb2f480;
  do {
    iVar7 = iVar6 + 0x166e9;
    *(int *)(iVar3 + *(int *)(iVar1 + 8)) = iVar6 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0xc)) = param_1 >> 0x10;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x10)) = iVar4;
    iVar4 = iVar4 + -0xb6d2;
    *(int *)(iVar3 + *(int *)(iVar1 + 0x14)) = iVar5;
    iVar5 = iVar5 + -0x5819;
    iVar3 = iVar3 + 4;
    iVar6 = iVar7;
    param_1 = param_1 + 0x1c5a2;
  } while (iVar7 < 0xb28d98);
  return;
}




void __cdecl FUN_00416430(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  int local_14;
  
  param_5 = param_5 + -1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x18);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (-1 < param_5) {
    iVar9 = param_3 * 4;
    do {
      iVar4 = *(int *)(iVar9 + *param_2);
      iVar5 = *(int *)(iVar9 + param_2[2]);
      pbVar6 = *(byte **)(iVar9 + param_2[1]);
      iVar7 = *(int *)(iVar9 + param_2[3]);
      iVar9 = iVar9 + 4;
      if (iVar3 != 0) {
        pbVar8 = pbVar6;
        puVar10 = (undefined1 *)*param_4;
        local_14 = iVar3;
        do {
          pbVar1 = pbVar8 + 1;
          local_14 = local_14 + -1;
          *puVar10 = (char)((uint)(*(int *)(iVar2 + (0xff - (uint)pbVar8[iVar4 - (int)pbVar6]) * 4)
                                   + *(int *)(iVar2 + (0x2ff - (uint)pbVar1[(iVar5 - (int)pbVar6) +
                                                                            -1]) * 4) +
                                  *(int *)(iVar2 + (0x1ff - (uint)*pbVar8) * 4)) >> 0x10);
          puVar10[1] = pbVar1[(iVar7 - (int)pbVar6) + -1];
          pbVar8 = pbVar1;
          puVar10 = puVar10 + 2;
        } while (local_14 != 0);
      }
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (-1 < param_5);
  }
  return;
}




void __cdecl FUN_004165c0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_4;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  param_1[0x6f] = (int)puVar2;
  *puVar2 = guard_check_icall;
  switch(param_1[10]) {
  case 1:
    if (param_1[9] != 1) {
LAB_00416612:
      *(undefined4 *)(*param_1 + 0x14) = 0xb;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    if (param_1[9] != 3) goto LAB_00416612;
    break;
  case 4:
  case 5:
    if (param_1[9] != 4) goto LAB_00416612;
    break;
  default:
    if (param_1[9] < 1) goto LAB_00416612;
  }
  if (((param_1[0x43] != 0) && (param_1[10] != 2)) && (param_1[10] != 6)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1c;
    (**(code **)*param_1)(param_1);
  }
  switch(param_1[0xb]) {
  case 1:
    param_1[0x19] = 1;
    switch(param_1[10]) {
    case 1:
    case 3:
    case 7:
      iVar8 = 1;
      puVar2[1] = &LAB_00416590;
      if (1 < param_1[9]) {
        iVar4 = 0x58;
        do {
          iVar8 = iVar8 + 1;
          *(undefined1 *)(iVar4 + 0x34 + param_1[0x31]) = 0;
          iVar4 = iVar4 + 0x58;
        } while (iVar8 < param_1[9]);
      }
      break;
    case 2:
      if (param_1[0x43] == 0) {
        puVar2[1] = FUN_00416cd0;
        FUN_00416240((int)param_1);
      }
      else if (param_1[0x43] == 1) {
        puVar2[1] = FUN_00416a80;
        FUN_00416240((int)param_1);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x1c;
        (**(code **)*param_1)(param_1);
        FUN_00416240((int)param_1);
      }
      break;
    default:
      goto switchD_00416729_caseD_4;
    }
    goto LAB_0041693f;
  case 2:
    param_1[0x19] = 3;
    switch(param_1[10]) {
    case 1:
      puVar2[1] = &LAB_00416520;
      break;
    case 2:
      goto switchD_00416729_caseD_2;
    case 3:
      puVar2[1] = FUN_00416db0;
      FUN_00416360((int)param_1);
      break;
    default:
      goto switchD_00416729_caseD_4;
    case 7:
      puVar2[1] = FUN_00416db0;
      iVar8 = param_1[0x6f];
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar8 + 8) = uVar3;
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar8 + 0xc) = uVar3;
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar8 + 0x10) = uVar3;
      uVar3 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined4 *)(iVar8 + 0x14) = uVar3;
      iStack_4 = -0x1c52200;
      iVar9 = 0xb6d180;
      iVar10 = 0x589980;
      iVar4 = 0;
      iVar5 = -0x1666980;
      do {
        iVar7 = iVar5 + 0x2cdd3;
        *(int *)(iVar4 + *(int *)(iVar8 + 8)) = iVar5 >> 0x10;
        *(int *)(iVar4 + *(int *)(iVar8 + 0xc)) = iStack_4 >> 0x10;
        *(int *)(iVar4 + *(int *)(iVar8 + 0x10)) = iVar9;
        iVar9 = iVar9 + -0x16da3;
        *(int *)(iVar4 + *(int *)(iVar8 + 0x14)) = iVar10;
        iVar10 = iVar10 + -0xb033;
        iVar4 = iVar4 + 4;
        iVar5 = iVar7;
        iStack_4 = iStack_4 + 0x38b44;
      } while (iVar7 < 0x1649bae);
    }
    goto LAB_0041693f;
  case 4:
    if (param_1[10] == 5) {
      param_1[0x19] = 4;
      puVar2[1] = &LAB_00416ef0;
      FUN_00416360((int)param_1);
      goto LAB_0041693f;
    }
    break;
  case 5:
    if (((param_1[10] == 4) && (iVar8 = param_1[0x31], *(char *)(iVar8 + 0x34) != '\0')) &&
       ((*(char *)(iVar8 + 0x8c) == '\0' &&
        ((*(char *)(iVar8 + 0xe4) == '\0' && (*(char *)(iVar8 + 0x13c) != '\0')))))) {
      param_1[0x19] = 2;
      *(undefined1 *)(iVar8 + 0x8c) = 1;
      *(undefined1 *)(param_1[0x31] + 0xe4) = 1;
      puVar2[1] = FUN_00416430;
      FUN_00416240((int)param_1);
      goto LAB_0041693f;
    }
    break;
  case 6:
    if (param_1[10] != 6) {
      *(undefined4 *)(*param_1 + 0x14) = 0x1c;
      (**(code **)*param_1)(param_1);
    }
    param_1[0x19] = 3;
switchD_00416729_caseD_2:
    if (param_1[0x43] == 0) {
      puVar2[1] = &LAB_00416c30;
      goto LAB_0041693f;
    }
    if (param_1[0x43] == 1) {
      puVar2[1] = FUN_00416b70;
      goto LAB_0041693f;
    }
switchD_00416729_caseD_4:
    *(undefined4 *)(*param_1 + 0x14) = 0x1c;
    (**(code **)*param_1)(param_1);
    goto LAB_0041693f;
  }
  if (param_1[0xb] != param_1[10]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1c;
    (**(code **)*param_1)(param_1);
  }
  iVar8 = param_1[9];
  iVar4 = 0;
  if (0 < iVar8) {
    pcVar6 = (char *)(param_1[0x31] + 0x34);
    iVar5 = iVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 0x58;
      iVar4 = iVar5 + 1;
      if (cVar1 == '\0') {
        iVar4 = iVar5;
      }
      iVar8 = iVar8 + -1;
      iVar5 = iVar4;
    } while (iVar8 != 0);
  }
  param_1[0x19] = iVar4;
  puVar2[1] = &LAB_004169c0;
LAB_0041693f:
  if (*(char *)((int)param_1 + 0x4a) != '\0') {
    param_1[0x1a] = 1;
    return;
  }
  param_1[0x1a] = param_1[0x19];
  return;
}




void __cdecl FUN_00416a80(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_c;
  
  iVar10 = param_5 + -1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x18);
  iVar3 = *(int *)(param_1 + 0x5c);
  if (-1 < iVar10) {
    iVar9 = param_3 * 4;
    do {
      iVar4 = *(int *)(iVar9 + *param_2);
      iVar5 = *(int *)(iVar9 + param_2[1]);
      pbVar6 = *(byte **)(iVar9 + param_2[2]);
      iVar9 = iVar9 + 4;
      iVar7 = *param_4;
      if (iVar3 != 0) {
        pbVar8 = pbVar6;
        local_c = iVar3;
        do {
          uVar11 = (uint)pbVar8[iVar5 - (int)pbVar6];
          pbVar1 = pbVar8 + 1;
          local_c = local_c + -1;
          pbVar1[(iVar7 - (int)pbVar6) + -1] =
               (byte)((uint)(*(int *)(iVar2 + ((pbVar1[(iVar4 - (int)pbVar6) + -1] - 0x80) + uVar11
                                              & 0xff) * 4) +
                             *(int *)(iVar2 + 0x800 + ((*pbVar8 - 0x80) + uVar11 & 0xff) * 4) +
                            *(int *)(iVar2 + 0x400 + uVar11 * 4)) >> 0x10);
          pbVar8 = pbVar1;
        } while (local_c != 0);
      }
      iVar10 = iVar10 + -1;
      param_4 = param_4 + 1;
    } while (-1 < iVar10);
  }
  return;
}




void __cdecl FUN_00416b70(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  
  iVar9 = param_5 + -1;
  iVar4 = *(int *)(param_1 + 0x5c);
  if (-1 < iVar9) {
    iVar10 = param_3 * 4;
    do {
      iVar5 = *(int *)(iVar10 + *param_2);
      iVar6 = *(int *)(iVar10 + param_2[1]);
      iVar12 = *param_4;
      param_4 = param_4 + 1;
      pcVar7 = *(char **)(iVar10 + param_2[2]);
      iVar10 = iVar10 + 4;
      if (iVar4 != 0) {
        pcVar8 = pcVar7;
        pcVar11 = (char *)(iVar12 + 2);
        iVar12 = iVar4;
        do {
          cVar1 = pcVar8[iVar6 - (int)pcVar7];
          cVar2 = pcVar8[iVar5 - (int)pcVar7];
          cVar3 = *pcVar8;
          pcVar11[-1] = cVar1;
          pcVar11[-2] = cVar2 + -0x80 + cVar1;
          *pcVar11 = cVar3 + -0x80 + cVar1;
          iVar12 = iVar12 + -1;
          pcVar8 = pcVar8 + 1;
          pcVar11 = pcVar11 + 3;
        } while (iVar12 != 0);
      }
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}




void __cdecl FUN_00416cd0(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_5 + -1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x18);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (-1 < iVar9) {
    iVar8 = param_3 * 4;
    do {
      iVar3 = *(int *)(iVar8 + *param_2);
      pbVar4 = *(byte **)(iVar8 + param_2[1]);
      iVar5 = *(int *)(iVar8 + param_2[2]);
      iVar8 = iVar8 + 4;
      iVar6 = *param_4;
      param_4 = param_4 + 1;
      if (iVar2 != 0) {
        pbVar7 = pbVar4;
        iVar10 = iVar2;
        do {
          (pbVar7 + 1)[(iVar6 - (int)pbVar4) + -1] =
               (byte)((uint)(*(int *)(iVar1 + 0x800 + (uint)pbVar7[iVar5 - (int)pbVar4] * 4) +
                             *(int *)(iVar1 + (uint)pbVar7[iVar3 - (int)pbVar4] * 4) +
                            *(int *)(iVar1 + 0x400 + (uint)*pbVar7 * 4)) >> 0x10);
          iVar10 = iVar10 + -1;
          pbVar7 = pbVar7 + 1;
        } while (iVar10 != 0);
      }
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}




void __cdecl FUN_00416db0(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  int local_20;
  
  iVar14 = param_5 + -1;
  iVar3 = *(int *)(param_1 + 0x1bc);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 300);
  iVar6 = *(int *)(iVar3 + 8);
  iVar7 = *(int *)(iVar3 + 0xc);
  iVar8 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  if (-1 < iVar14) {
    iVar16 = param_3 * 4;
    do {
      iVar9 = *param_4;
      param_4 = param_4 + 1;
      iVar10 = *(int *)(*param_2 + iVar16);
      pbVar11 = *(byte **)(param_2[1] + iVar16);
      iVar12 = *(int *)(param_2[2] + iVar16);
      iVar16 = iVar16 + 4;
      if (iVar4 != 0) {
        pbVar13 = pbVar11;
        puVar15 = (undefined1 *)(iVar9 + 2);
        local_20 = iVar4;
        do {
          bVar1 = pbVar13[iVar12 - (int)pbVar11];
          uVar17 = (uint)pbVar13[iVar10 - (int)pbVar11];
          bVar2 = *pbVar13;
          puVar15[-2] = *(undefined1 *)(*(int *)((uint)bVar1 * 4 + iVar6) + uVar17 + iVar5);
          puVar15[-1] = *(undefined1 *)
                         ((*(int *)(iVar3 + (uint)bVar2 * 4) + *(int *)((uint)bVar1 * 4 + iVar8) >>
                          0x10) + uVar17 + iVar5);
          local_20 = local_20 + -1;
          *puVar15 = *(undefined1 *)(*(int *)(iVar7 + (uint)bVar2 * 4) + uVar17 + iVar5);
          pbVar13 = pbVar13 + 1;
          puVar15 = puVar15 + 3;
        } while (local_20 != 0);
      }
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  return;
}




void __cdecl FUN_00417070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (0 < *(int *)(param_1 + 100)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c0) + 0x44);
    do {
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar1 * 2 + 4);
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 100));
  }
  return;
}




void __cdecl FUN_004170c0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  char *pcVar10;
  byte *pbVar11;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  if (0 < param_4) {
    iVar7 = param_2 - (int)param_3;
    do {
      pbVar11 = *(byte **)(iVar7 + (int)param_3);
      pcVar10 = (char *)*param_3;
      for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
        cVar9 = '\0';
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            bVar2 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            iVar1 = iVar6 * 4;
            iVar6 = iVar6 + 1;
            cVar9 = cVar9 + *(char *)(*(int *)(iVar5 + iVar1) + (uint)bVar2);
          } while (iVar6 < iVar4);
        }
        *pcVar10 = cVar9;
        pcVar10 = pcVar10 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}




void __cdecl FUN_00417170(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c0) + 0x18);
  iVar3 = *piVar2;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  if (0 < param_4) {
    iVar8 = param_2 - (int)param_3;
    do {
      pbVar6 = *(byte **)(iVar8 + (int)param_3);
      pcVar7 = (char *)*param_3;
      for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pcVar7 = *(char *)((uint)*pbVar6 + iVar3) + *(char *)((uint)pbVar6[1] + iVar4) +
                  *(char *)((uint)pbVar6[2] + iVar5);
        pbVar6 = pbVar6 + 3;
        pcVar7 = pcVar7 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}




void __cdecl FUN_00417220(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iStack_14;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x1c0);
  *(bool *)(iVar4 + 0x1c) = iVar3 == 1;
  uVar6 = 0x2fe;
  if (iVar3 != 1) {
    uVar6 = 0x100;
  }
  uVar6 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,1,uVar6,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  iVar7 = *(int *)(iVar4 + 0x14);
  iStack_14 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      iVar10 = *(int *)(iVar4 + 0x20 + iStack_14 * 4);
      iVar7 = iVar7 / iVar10;
      if (iVar3 == 1) {
        piVar1 = (int *)(*(int *)(iVar4 + 0x18) + iStack_14 * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      iVar2 = iVar10 * 2 + -2;
      puVar5 = *(undefined1 **)(*(int *)(iVar4 + 0x18) + iStack_14 * 4);
      iVar12 = 0;
      iVar8 = (iVar10 + 0xfe) / iVar2;
      iVar13 = 0;
      do {
        if (iVar8 < iVar13) {
          iVar9 = iVar10 + 0xfe + iVar12 * 0x1fe;
          do {
            iVar9 = iVar9 + 0x1fe;
            iVar12 = iVar12 + 1;
            iVar8 = iVar9 / iVar2;
          } while (iVar8 < iVar13);
        }
        puVar5[iVar13] = (char)iVar12 * (char)iVar7;
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x100);
      if (iVar3 == 1) {
        iVar10 = 1;
        puVar11 = puVar5;
        do {
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar5;
          puVar5[iVar10 + 0xff] = puVar5[0xff];
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x100);
      }
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < *(int *)(param_1 + 100));
  }
  return;
}




void __cdecl FUN_00417360(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int local_24;
  int iStack_1c;
  int iStack_10;
  int local_c;
  
  iVar1 = param_1[0x70];
  iVar6 = param_1[0x15];
  iVar5 = param_1[0x19];
  piVar3 = (int *)(iVar1 + 0x20);
  iVar10 = 1;
  do {
    iVar11 = iVar10;
    iVar10 = iVar11 + 1;
    iVar8 = iVar10;
    if (1 < iVar5) {
      iVar4 = iVar5 + -1;
      do {
        iVar8 = iVar8 * iVar10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  } while (iVar8 <= iVar6);
  if (iVar11 < 2) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3a;
    *(int *)(*param_1 + 0x18) = iVar8;
    (**(code **)*param_1)(param_1);
  }
  iVar8 = 1;
  local_24 = 1;
  iVar10 = iVar5;
  piVar12 = piVar3;
  if (0 < iVar5) {
    for (; iVar4 = iVar5, iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar12 = iVar11;
      piVar12 = piVar12 + 1;
    }
    do {
      iVar8 = iVar8 * iVar11;
      iVar4 = iVar4 + -1;
      local_24 = iVar8;
    } while (iVar4 != 0);
  }
  do {
    iVar10 = 0;
    bVar2 = false;
    if (iVar5 < 1) {
LAB_00417453:
      iVar6 = *param_1;
      if (param_1[0x19] == 3) {
        *(int *)(iVar6 + 0x18) = local_24;
        *(int *)(iVar6 + 0x1c) = *piVar3;
        *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
        *(undefined4 *)(*param_1 + 0x14) = 0x60;
        (**(code **)(*param_1 + 4))();
      }
      else {
        *(undefined4 *)(iVar6 + 0x14) = 0x61;
        *(int *)(*param_1 + 0x18) = local_24;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      iVar5 = (**(code **)(param_1[1] + 8))(param_1,1,local_24,param_1[0x19]);
      iVar10 = 0;
      iVar6 = local_24;
      if (0 < param_1[0x19]) {
        do {
          local_c = *piVar3;
          iVar8 = iVar6 / local_c;
          if (0 < local_c) {
            iVar11 = local_c + -1;
            iStack_1c = 0;
            iStack_10 = 0;
            do {
              for (iVar4 = iStack_1c; iVar4 < local_24; iVar4 = iVar4 + iVar6) {
                iVar9 = 0;
                if (0 < iVar8) {
                  do {
                    iVar7 = *(int *)(iVar5 + iVar10 * 4) + iVar9;
                    iVar9 = iVar9 + 1;
                    *(char *)(iVar7 + iVar4) = (char)((iVar11 / 2 + iStack_10) / iVar11);
                  } while (iVar9 < iVar8);
                }
              }
              iStack_1c = iStack_1c + iVar8;
              iStack_10 = iStack_10 + 0xff;
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          iVar10 = iVar10 + 1;
          piVar3 = piVar3 + 1;
          iVar6 = iVar8;
        } while (iVar10 < param_1[0x19]);
      }
      *(int *)(iVar1 + 0x10) = iVar5;
      *(int *)(iVar1 + 0x14) = local_24;
      return;
    }
    do {
      iVar8 = iVar10;
      if (param_1[0xb] == 2) {
        iVar8 = (&DAT_0042a140)[iVar10];
      }
      iVar4 = piVar3[iVar8];
      iVar11 = iVar4 + 1;
      iVar4 = (local_24 / iVar4) * iVar11;
      if (iVar4 - iVar6 != 0 && iVar6 <= iVar4) {
        if (!bVar2) goto LAB_00417453;
        break;
      }
      iVar10 = iVar10 + 1;
      piVar3[iVar8] = iVar11;
      bVar2 = true;
      local_24 = iVar4;
    } while (iVar10 < iVar5);
  } while( true );
}




void __cdecl FUN_004175a0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x70] = (int)puVar1;
  *puVar1 = FUN_00417a60;
  puVar1[2] = guard_check_icall;
  puVar1[3] = &LAB_00417650;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  if (4 < param_1[0x19]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x39;
    *(undefined4 *)(*param_1 + 0x18) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < param_1[0x15]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3b;
    *(undefined4 *)(*param_1 + 0x18) = 0x100;
    (**(code **)*param_1)(param_1);
  }
  FUN_00417360(param_1);
  FUN_00417220((int)param_1);
  if (param_1[0x13] == 2) {
    FUN_00417070((int)param_1);
  }
  return;
}




void __cdecl FUN_00417670(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  iVar5 = *(int *)(param_1 + 0x1c0);
  piVar6 = *(int **)(iVar5 + 0x18);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  iVar10 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    iVar16 = param_2 - (int)param_3;
    uVar19 = *(uint *)(iVar5 + 0x30);
    do {
      uVar18 = 0;
      iVar11 = *(int *)(iVar5 + 0x34);
      iVar12 = *(int *)(iVar5 + 0x38);
      iVar17 = uVar19 * 0x40;
      iVar13 = *(int *)(iVar5 + 0x3c);
      pbVar14 = *(byte **)(iVar16 + (int)param_3);
      pcVar15 = (char *)*param_3;
      for (iVar4 = iVar10; iVar4 != 0; iVar4 = iVar4 + -1) {
        iVar1 = uVar18 * 4;
        iVar2 = uVar18 * 4;
        iVar3 = uVar18 * 4;
        uVar18 = uVar18 + 1 & 0xf;
        *pcVar15 = *(char *)(*(int *)(iVar12 + iVar17 + iVar1) + (uint)pbVar14[1] + iVar8) +
                   *(char *)(*(int *)(iVar13 + iVar17 + iVar2) + (uint)pbVar14[2] + iVar9) +
                   *(char *)(*(int *)(iVar11 + iVar17 + iVar3) + (uint)*pbVar14 + iVar7);
        pbVar14 = pbVar14 + 3;
        pcVar15 = pcVar15 + 1;
      }
      uVar19 = uVar19 + 1 & 0xf;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      *(uint *)(iVar5 + 0x30) = uVar19;
    } while (param_4 != 0);
  }
  return;
}




void __cdecl FUN_00417790(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  size_t local_20;
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 0x1c0);
  iVar5 = *(int *)(param_1 + 100);
  _Size = *(size_t *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 300);
  if (0 < param_4) {
    iVar2 = param_2 - (int)param_3;
    do {
      memset((void *)*param_3,0,_Size);
      local_1c = 0;
      if (0 < iVar5) {
        do {
          param_1 = *(int *)(iVar4 + 0x44 + local_1c * 4);
          pcVar11 = (char *)*param_3;
          pbVar9 = (byte *)(*(int *)(iVar2 + (int)param_3) + local_1c);
          if (*(char *)(iVar4 + 0x54) == '\0') {
            iVar14 = 1;
            local_24 = 1;
            local_28 = iVar5;
          }
          else {
            local_24 = -1;
            pcVar11 = pcVar11 + (_Size - 1);
            pbVar9 = pbVar9 + (_Size - 1) * iVar5;
            param_1 = param_1 + _Size * 2 + 2;
            iVar14 = -1;
            local_28 = -iVar5;
          }
          iVar7 = *(int *)(*(int *)(iVar4 + 0x18) + local_1c * 4);
          iVar10 = 0;
          local_30 = 0;
          local_30._0_2_ = 0;
          local_2c = 0;
          iVar8 = *(int *)(*(int *)(iVar4 + 0x10) + local_1c * 4);
          if (_Size != 0) {
            local_20 = _Size;
            do {
              psVar1 = (short *)(iVar14 * 2 + param_1);
              bVar3 = *pbVar9;
              pbVar9 = pbVar9 + local_28;
              uVar12 = (uint)*(byte *)((uint)bVar3 + (iVar10 + *psVar1 + 8 >> 4) + iVar6);
              bVar3 = *(byte *)(uVar12 + iVar7);
              *pcVar11 = *pcVar11 + bVar3;
              pcVar11 = pcVar11 + local_24;
              iVar13 = uVar12 - *(byte *)((uint)bVar3 + iVar8);
              *(short *)param_1 = (short)iVar13 * 3 + (short)local_30;
              local_30 = local_2c + iVar13 * 5;
              iVar10 = iVar13 * 7;
              local_20 = local_20 - 1;
              param_1 = (int)psVar1;
              local_2c = iVar13;
            } while (local_20 != 0);
          }
          local_1c = local_1c + 1;
          *(undefined2 *)param_1 = (undefined2)local_30;
        } while (local_1c < iVar5);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      *(bool *)(iVar4 + 0x54) = *(char *)(iVar4 + 0x54) == '\0';
    } while (param_4 != 0);
  }
  return;
}




void __cdecl FUN_00417950(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  size_t sVar10;
  int iVar11;
  byte *pbVar12;
  int local_18;
  
  iVar3 = *(int *)(param_1 + 0x1c0);
  iVar4 = *(int *)(param_1 + 100);
  _Size = *(size_t *)(param_1 + 0x5c);
  if (0 < param_4) {
    iVar11 = param_2 - (int)param_3;
    do {
      memset((void *)*param_3,0,_Size);
      local_18 = 0;
      iVar5 = *(int *)(iVar3 + 0x30);
      if (0 < iVar4) {
        do {
          iVar6 = *(int *)(iVar3 + 0x34 + local_18 * 4);
          pbVar12 = (byte *)(*(int *)(iVar11 + (int)param_3) + local_18);
          iVar7 = *(int *)(*(int *)(iVar3 + 0x18) + local_18 * 4);
          uVar9 = 0;
          pcVar8 = (char *)*param_3;
          for (sVar10 = _Size; sVar10 != 0; sVar10 = sVar10 - 1) {
            iVar1 = uVar9 * 4;
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + iVar4;
            uVar9 = uVar9 + 1 & 0xf;
            *pcVar8 = *pcVar8 + *(char *)(*(int *)(iVar6 + iVar5 * 0x40 + iVar1) + (uint)bVar2 +
                                         iVar7);
            pcVar8 = pcVar8 + 1;
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar4);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      *(uint *)(iVar3 + 0x30) = iVar5 + 1U & 0xf;
    } while (param_4 != 0);
  }
  return;
}




void __cdecl FUN_00417a60(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  
  iVar2 = param_1[0x70];
  param_1[0x1d] = *(int *)(iVar2 + 0x10);
  param_1[0x1c] = *(int *)(iVar2 + 0x14);
  iVar9 = param_1[0x13];
  if (iVar9 == 0) {
    pcVar4 = FUN_004170c0;
    if (param_1[0x19] == 3) {
      pcVar4 = FUN_00417170;
    }
    *(code **)(iVar2 + 4) = pcVar4;
    return;
  }
  if (iVar9 == 1) {
    pcVar4 = FUN_00417670;
    if (param_1[0x19] != 3) {
      pcVar4 = FUN_00417950;
    }
    *(code **)(iVar2 + 4) = pcVar4;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      FUN_00417220((int)param_1);
    }
    if (*(int *)(iVar2 + 0x34) == 0) {
      iVar2 = param_1[0x70];
      iVar9 = 0;
      if (0 < param_1[0x19]) {
        piVar7 = (int *)(iVar2 + 0x34);
        do {
          iVar3 = piVar7[-5];
          iVar5 = 0;
          if (0 < iVar9) {
            piVar6 = (int *)(iVar2 + 0x20);
            do {
              if (iVar3 == *piVar6) {
                piVar6 = *(int **)(iVar2 + 0x34 + iVar5 * 4);
                if (piVar6 != (int *)0x0) goto LAB_00417bd8;
                break;
              }
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar5 < iVar9);
          }
          piVar6 = (int *)(**(code **)param_1[1])(param_1,1,0x400);
          puVar10 = &DAT_0042a040;
          piVar8 = piVar6;
          do {
            iVar5 = 0;
            do {
              pbVar1 = puVar10 + iVar5;
              iVar5 = iVar5 + 1;
              *piVar8 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (iVar3 * 0x200 + -0x200);
              piVar8 = piVar8 + 1;
            } while (iVar5 < 0x10);
            puVar10 = puVar10 + 0x10;
          } while ((int)puVar10 < 0x42a140);
LAB_00417bd8:
          iVar9 = iVar9 + 1;
          *piVar7 = (int)piVar6;
          piVar7 = piVar7 + 1;
          if (param_1[0x19] <= iVar9) {
            return;
          }
        } while( true );
      }
    }
  }
  else if (iVar9 == 2) {
    *(code **)(iVar2 + 4) = FUN_00417790;
    *(undefined1 *)(iVar2 + 0x54) = 0;
    piVar7 = (int *)(iVar2 + 0x44);
    if (*piVar7 == 0) {
      FUN_00417070((int)param_1);
    }
    iVar2 = param_1[0x17];
    iVar9 = 0;
    if (0 < param_1[0x19]) {
      do {
        memset((void *)*piVar7,0,iVar2 * 2 + 4);
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar9 < param_1[0x19]);
      return;
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x31;
    (**(code **)*param_1)(param_1);
  }
  return;
}




void __cdecl FUN_00417c20(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384 [128];
  byte local_184 [128];
  byte local_104 [256];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&local_3d0;
  local_38c = param_4 >> 2;
  local_3d0 = param_3 >> 3;
  iVar7 = param_2 >> 2;
  local_388 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  local_3a4 = local_38c * 0x20 + 4;
  local_3ac = local_3d0 * 0x20 + 2;
  local_3b0 = iVar7 * 0x20 + 4;
  local_390 = iVar7;
  local_39c = FUN_00417e90(param_1,local_3b0,local_3ac,local_3a4,(int)local_104);
  piVar8 = local_384;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = 0x7fffffff;
    piVar8 = piVar8 + 1;
  }
  local_3b4 = 0;
  if (0 < local_39c) {
    piVar8 = *(int **)(param_1 + 0x74);
    local_398 = *piVar8;
    local_394 = piVar8[1];
    local_3a8 = piVar8[2];
    do {
      bVar2 = local_104[local_3b4];
      uVar5 = (uint)bVar2;
      local_3bc = 3;
      pbVar10 = local_184;
      iVar7 = (local_3b0 - (uint)*(byte *)(uVar5 + local_398)) * 2;
      iVar3 = (local_3ac - (uint)*(byte *)(local_394 + uVar5)) * 3;
      iVar6 = local_3a4 - (uint)*(byte *)(local_3a8 + uVar5);
      local_3b8 = (iVar6 + 4) * 0x10;
      local_3c4 = iVar6 * iVar6 + iVar3 * iVar3 + iVar7 * iVar7;
      local_3a0 = (iVar3 + 6) * 0x18;
      piVar8 = local_384;
      local_3c0 = (iVar7 + 8) * 0x20;
      do {
        local_3c8 = 7;
        iVar7 = local_3c4;
        local_3cc = local_3a0;
        do {
          iVar9 = 3;
          iVar3 = iVar7;
          iVar6 = local_3b8;
          do {
            if (iVar3 < *piVar8) {
              *piVar8 = iVar3;
              *pbVar10 = bVar2;
            }
            iVar3 = iVar3 + iVar6;
            piVar8 = piVar8 + 1;
            iVar6 = iVar6 + 0x80;
            pbVar10 = pbVar10 + 1;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
          iVar7 = iVar7 + local_3cc;
          local_3cc = local_3cc + 0x120;
          local_3c8 = local_3c8 + -1;
        } while (-1 < local_3c8);
        local_3c4 = local_3c4 + local_3c0;
        local_3c0 = local_3c0 + 0x200;
        local_3bc = local_3bc + -1;
      } while (-1 < local_3bc);
      local_3b4 = local_3b4 + 1;
      iVar7 = local_390;
    } while (local_3b4 < local_39c);
  }
  pbVar10 = local_184;
  iVar3 = 4;
  local_3d0 = (local_3d0 * 0x40 + local_38c) * 8;
  piVar8 = (int *)(iVar7 * 0x10 + local_388);
  do {
    iVar6 = 8;
    iVar7 = local_3d0;
    do {
      psVar4 = (short *)(*piVar8 + iVar7);
      iVar7 = iVar7 + 0x40;
      *psVar4 = *pbVar10 + 1;
      psVar4[1] = pbVar10[1] + 1;
      psVar4[2] = pbVar10[2] + 1;
      pbVar1 = pbVar10 + 3;
      pbVar10 = pbVar10 + 4;
      psVar4[3] = *pbVar1 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar8 = piVar8 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  __security_check_cookie(local_4 ^ (uint)&local_3d0);
  return;
}




void __cdecl FUN_00417e90(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int local_42c;
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  int local_418;
  int local_414;
  int local_410;
  int local_40c;
  int local_408;
  int aiStack_404 [256];
  uint local_4;
  
  local_4 = DAT_0042f340 ^ (uint)&local_42c;
  local_410 = *(int *)(param_1 + 0x70);
  local_408 = param_5;
  local_420 = param_2 * 2 + 0x18 >> 1;
  local_424 = 0;
  local_42c = param_3 + 0x1c;
  local_41c = param_3 + local_42c >> 1;
  local_428 = param_4 + 0x18;
  local_414 = local_428 + param_4 >> 1;
  iVar6 = 0x7fffffff;
  if (0 < local_410) {
    piVar1 = *(int **)(param_1 + 0x74);
    pbVar8 = (byte *)piVar1[1];
    local_40c = *piVar1 - (int)pbVar8;
    local_418 = piVar1[2] - (int)pbVar8;
    iVar3 = iVar6;
    do {
      iVar6 = param_2 + 0x18;
      uVar2 = (uint)pbVar8[local_40c];
      if ((int)uVar2 < param_2) {
        iVar7 = (uVar2 - param_2) * 2;
        iVar7 = iVar7 * iVar7;
        iVar6 = uVar2 - iVar6;
      }
      else {
        if (iVar6 < (int)uVar2) {
          iVar7 = (uVar2 - iVar6) * 2;
          iVar7 = iVar7 * iVar7;
        }
        else {
          iVar7 = 0;
          if ((int)uVar2 <= local_420) {
            iVar6 = uVar2 - iVar6;
            goto LAB_00417f54;
          }
        }
        iVar6 = uVar2 - param_2;
      }
LAB_00417f54:
      uVar2 = (uint)*pbVar8;
      if ((int)uVar2 < param_3) {
        iVar5 = (uVar2 - local_42c) * 3;
        iVar4 = (uVar2 - param_3) * 3;
        iVar7 = iVar7 + iVar4 * iVar4;
        iVar5 = iVar5 * iVar5;
      }
      else {
        if (local_42c < (int)uVar2) {
          iVar5 = (uVar2 - local_42c) * 3;
          iVar7 = iVar7 + iVar5 * iVar5;
          iVar5 = uVar2 - param_3;
        }
        else if (local_41c < (int)uVar2) {
          iVar5 = uVar2 - param_3;
        }
        else {
          iVar5 = uVar2 - local_42c;
        }
        iVar5 = iVar5 * 3 * iVar5 * 3;
      }
      uVar2 = (uint)pbVar8[local_418];
      if ((int)uVar2 < param_4) {
        iVar7 = iVar7 + (uVar2 - param_4) * (uVar2 - param_4);
        iVar4 = uVar2 - local_428;
      }
      else {
        if (local_428 < (int)uVar2) {
          iVar7 = iVar7 + (uVar2 - local_428) * (uVar2 - local_428);
        }
        else if ((int)uVar2 <= local_414) {
          iVar4 = uVar2 - local_428;
          goto LAB_00418004;
        }
        iVar4 = uVar2 - param_4;
      }
LAB_00418004:
      iVar6 = iVar5 + iVar6 * 2 * iVar6 * 2 + iVar4 * iVar4;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
      pbVar8 = pbVar8 + 1;
      aiStack_404[local_424] = iVar7;
      local_424 = local_424 + 1;
      iVar3 = iVar6;
    } while (local_424 < local_410);
  }
  iVar3 = 0;
  iVar7 = 0;
  if (0 < local_410) {
    do {
      if (aiStack_404[iVar7] <= iVar6) {
        *(char *)(param_5 + iVar3) = (char)iVar7;
        iVar3 = iVar3 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_410);
  }
  __security_check_cookie(local_4 ^ (uint)&local_42c);
  return;
}




void __cdecl FUN_004180b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x7fc);
  iVar5 = 0;
  uVar4 = 0;
  piVar1 = (int *)(iVar3 + 0x3fc);
  iVar3 = 0;
  *(int **)(iVar2 + 0x28) = piVar1;
  piVar6 = piVar1;
  do {
    piVar1[uVar4] = iVar5;
    *piVar6 = iVar3;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + -1;
  } while ((int)uVar4 < 0x10);
  if ((int)uVar4 < 0x30) {
    piVar6 = piVar1 + -uVar4;
    do {
      piVar1[uVar4] = iVar5;
      *piVar6 = -iVar5;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + (~uVar4 & 1);
      piVar6 = piVar6 + -1;
    } while ((int)uVar4 < 0x30);
  }
  if ((int)uVar4 < 0x100) {
    piVar6 = piVar1 + -uVar4;
    do {
      piVar1[uVar4] = iVar5;
      uVar4 = uVar4 + 1;
      *piVar6 = -iVar5;
      piVar6 = piVar6 + -1;
    } while ((int)uVar4 < 0x100);
  }
  return;
}




void __cdecl FUN_00418150(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  param_1[0x70] = (int)puVar1;
  *puVar1 = &LAB_00418d40;
  puVar1[3] = &LAB_00418410;
  puVar1[8] = 0;
  puVar1[10] = 0;
  if (param_1[0x19] != 3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)(param_1);
  }
  uVar2 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar1[6] = uVar2;
  iVar3 = 0;
  do {
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(iVar3 + puVar1[6]) = uVar2;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  *(undefined1 *)(puVar1 + 7) = 1;
  if (*(char *)((int)param_1 + 0x5a) == '\0') {
    uVar2 = 0;
  }
  else {
    iVar3 = param_1[0x15];
    if (iVar3 < 8) {
      *(undefined4 *)(*param_1 + 0x14) = 0x3a;
      *(undefined4 *)(*param_1 + 0x18) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x3b;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    uVar2 = (**(code **)(param_1[1] + 8))(param_1,1,iVar3,3);
    puVar1[5] = iVar3;
  }
  puVar1[4] = uVar2;
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
    uVar2 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x17] + 2) * 6);
    puVar1[8] = uVar2;
    FUN_004180b0((int)param_1);
  }
  return;
}




int __cdecl FUN_00418290(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  
  if (param_3 < param_4) {
    iVar3 = param_3 * 2;
    piVar6 = param_2 + param_3 * 8 + 3;
    do {
      piVar7 = (int *)0x0;
      if (param_4 < iVar3) {
        iVar8 = 0;
        iVar5 = param_3;
        piVar1 = piVar7;
        piVar9 = param_2;
        if (0 < param_3) {
          do {
            iVar2 = piVar9[6];
            piVar7 = piVar9;
            if (iVar2 <= iVar8) {
              piVar7 = piVar1;
            }
            if (iVar2 <= iVar8) {
              iVar2 = iVar8;
            }
            iVar5 = iVar5 + -1;
            iVar8 = iVar2;
            piVar1 = piVar7;
            piVar9 = piVar9 + 8;
          } while (iVar5 != 0);
        }
      }
      else {
        iVar8 = 0;
        if (0 < param_3) {
          piVar1 = param_2 + 6;
          iVar5 = param_3;
          do {
            if ((iVar8 < piVar1[1]) && (0 < *piVar1)) {
              piVar7 = piVar1 + -6;
              iVar8 = piVar1[1];
            }
            piVar1 = piVar1 + 8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      if (piVar7 == (int *)0x0) {
        return param_3;
      }
      piVar1 = piVar6 + -3;
      piVar6[-2] = piVar7[1];
      *piVar6 = piVar7[3];
      piVar6[2] = piVar7[5];
      *piVar1 = *piVar7;
      piVar6[-1] = piVar7[2];
      piVar6[1] = piVar7[4];
      iVar2 = (piVar7[1] - *piVar7) * 0x10;
      iVar5 = (piVar7[3] - piVar7[2]) * 0xc;
      iVar8 = iVar2;
      if (iVar2 <= iVar5) {
        iVar8 = iVar5;
      }
      cVar4 = iVar2 <= iVar5;
      if (iVar8 < (piVar7[5] - piVar7[4]) * 8) {
        cVar4 = '\x02';
      }
      if (cVar4 == '\0') {
        iVar8 = (piVar7[1] + *piVar7) / 2;
        piVar7[1] = iVar8;
        *piVar1 = iVar8 + 1;
      }
      else if (cVar4 == '\x01') {
        iVar8 = (piVar7[3] + piVar7[2]) / 2;
        piVar7[3] = iVar8;
        piVar6[-1] = iVar8 + 1;
      }
      else if (cVar4 == '\x02') {
        iVar8 = (piVar7[5] + piVar7[4]) / 2;
        piVar7[5] = iVar8;
        piVar6[1] = iVar8 + 1;
      }
      FUN_00418e60(param_1,piVar7);
      FUN_00418e60(param_1,piVar1);
      param_3 = param_3 + 1;
      iVar3 = iVar3 + 2;
      piVar6 = piVar6 + 8;
    } while (param_3 < param_4);
  }
  return param_3;
}




void __cdecl FUN_00418700(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  ushort uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_40c [3];
  byte local_409;
  int local_408;
  int *local_404;
  int local_400;
  int local_3fc;
  int *local_3f8;
  byte *local_3f4;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  int local_3e4;
  int local_3e0;
  int local_3dc;
  char *local_3d8;
  int local_3d4;
  undefined4 *local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  ushort *local_3a0;
  byte *local_39c;
  int local_398;
  int local_394;
  int local_390 [128];
  byte local_190 [128];
  byte local_110 [260];
  uint local_c;
  
  local_c = DAT_0042f340 ^ (uint)auStack_40c;
  local_400 = param_1;
  iVar9 = *(int *)(param_1 + 0x5c);
  local_3cc = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  local_3d0 = param_3;
  local_398 = iVar9;
  if (0 < param_4) {
    iVar7 = param_2 - (int)param_3;
    local_394 = iVar7;
    do {
      local_3d8 = (char *)*local_3d0;
      pbVar6 = *(byte **)(iVar7 + (int)local_3d0);
      local_3d4 = iVar9;
      if (iVar9 != 0) {
        do {
          local_39c = pbVar6 + 3;
          local_3a0 = (ushort *)
                      (*(int *)(local_3cc + (uint)(*pbVar6 >> 3) * 4) +
                      ((uint)(pbVar6[1] >> 2) * 0x20 + (uint)(pbVar6[2] >> 3)) * 2);
          uVar2 = *local_3a0;
          if (uVar2 == 0) {
            local_3a8 = (int)(uint)(pbVar6[2] >> 3) >> 2;
            iVar9 = (int)(uint)(pbVar6[1] >> 2) >> 3;
            piVar8 = (int *)((int)(uint)(*pbVar6 >> 3) >> 2);
            local_3c4 = iVar9 * 0x20 + 2;
            local_3a4 = *(int *)(*(int *)(local_400 + 0x1c0) + 0x18);
            local_3c8 = (int)piVar8 * 0x20 + 4;
            local_3bc = local_3a8 * 0x20 + 4;
            local_404 = piVar8;
            local_3fc = iVar9;
            local_3b4 = FUN_00417e90(local_400,local_3c8,local_3c4,local_3bc,(int)local_110);
            piVar10 = local_390;
            for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar10 = 0x7fffffff;
              piVar10 = piVar10 + 1;
            }
            local_408 = 0;
            if (0 < local_3b4) {
              piVar8 = *(int **)(local_400 + 0x74);
              local_3b0 = *piVar8;
              local_3ac = piVar8[1];
              local_3c0 = piVar8[2];
              do {
                local_409 = local_110[local_408];
                uVar4 = (uint)local_409;
                local_3e0 = 3;
                iVar9 = (local_3c8 - (uint)*(byte *)(local_3b0 + uVar4)) * 2;
                iVar7 = (local_3c4 - (uint)*(byte *)(local_3ac + uVar4)) * 3;
                iVar5 = local_3bc - (uint)*(byte *)(local_3c0 + uVar4);
                local_3b8 = (iVar7 + 6) * 0x18;
                local_3dc = (iVar5 + 4) * 0x10;
                local_3f8 = local_390;
                local_3e8 = iVar5 * iVar5 + iVar7 * iVar7 + iVar9 * iVar9;
                local_3f4 = local_190;
                local_3e4 = (iVar9 + 8) * 0x20;
                do {
                  local_3ec = 7;
                  iVar9 = local_3e8;
                  local_3f0 = local_3b8;
                  do {
                    iVar11 = 3;
                    iVar7 = iVar9;
                    iVar5 = local_3dc;
                    do {
                      if (iVar7 < *local_3f8) {
                        *local_3f8 = iVar7;
                        *local_3f4 = local_409;
                      }
                      iVar7 = iVar7 + iVar5;
                      local_3f8 = local_3f8 + 1;
                      iVar5 = iVar5 + 0x80;
                      local_3f4 = local_3f4 + 1;
                      iVar11 = iVar11 + -1;
                    } while (-1 < iVar11);
                    iVar9 = iVar9 + local_3f0;
                    local_3f0 = local_3f0 + 0x120;
                    local_3ec = local_3ec + -1;
                  } while (-1 < local_3ec);
                  local_3e8 = local_3e8 + local_3e4;
                  local_3e4 = local_3e4 + 0x200;
                  local_3e0 = local_3e0 + -1;
                } while (-1 < local_3e0);
                local_408 = local_408 + 1;
                piVar8 = local_404;
                iVar9 = local_3fc;
              } while (local_408 < local_3b4);
            }
            pbVar6 = local_190;
            local_3fc = (iVar9 * 0x40 + local_3a8) * 8;
            local_404 = (int *)((int)piVar8 * 0x10 + local_3a4);
            local_408 = 4;
            do {
              iVar7 = 8;
              iVar9 = local_3fc;
              do {
                psVar3 = (short *)(*local_404 + iVar9);
                iVar9 = iVar9 + 0x40;
                *psVar3 = *pbVar6 + 1;
                psVar3[1] = pbVar6[1] + 1;
                psVar3[2] = pbVar6[2] + 1;
                pbVar1 = pbVar6 + 3;
                pbVar6 = pbVar6 + 4;
                psVar3[3] = *pbVar1 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              local_404 = local_404 + 1;
              local_408 = local_408 + -1;
            } while (local_408 != 0);
            uVar2 = (ushort)(byte)*local_3a0;
            local_408 = 0;
          }
          *local_3d8 = (char)uVar2 + -1;
          local_3d8 = local_3d8 + 1;
          local_3d4 = local_3d4 + -1;
          pbVar6 = local_39c;
        } while (local_3d4 != 0);
        local_3d4 = 0;
        iVar9 = local_398;
        iVar7 = local_394;
      }
      local_3d0 = local_3d0 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  __security_check_cookie(local_c ^ (uint)auStack_40c);
  return;
}




void __cdecl FUN_00418a80(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  if (0 < param_4) {
    do {
      pbVar5 = *(byte **)(param_2 + iVar7 * 4);
      for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
        psVar1 = (short *)(*(int *)(iVar4 + (uint)(*pbVar5 >> 3) * 4) +
                          ((uint)(pbVar5[1] >> 2) * 0x20 + (uint)(pbVar5[2] >> 3)) * 2);
        sVar2 = *psVar1;
        sVar6 = sVar2 + 1;
        *psVar1 = sVar6;
        if (sVar6 == 0) {
          *psVar1 = sVar2;
        }
        pbVar5 = pbVar5 + 3;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_4);
  }
  return;
}




void __cdecl FUN_00418b10(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int iStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar2 = (int *)(**(code **)param_1[1])(param_1,1,param_2 << 5);
  piVar8 = piVar2 + 2;
  *piVar8 = 0;
  *piVar2 = 0;
  piVar2[1] = 0x1f;
  piVar2[3] = 0x3f;
  piVar2[4] = 0;
  piVar2[5] = 0x1f;
  FUN_00418e60((int)param_1,piVar2);
  iVar3 = FUN_00418290((int)param_1,piVar2,1,param_2);
  iStack_30 = 0;
  if (0 < iVar3) {
    do {
      iVar14 = *piVar8;
      iVar1 = piVar8[2];
      iVar12 = 0;
      iVar6 = piVar8[-2];
      iStack_24 = 0;
      iStack_20 = 0;
      iStack_1c = 0;
      iVar11 = 0;
      iVar7 = 0;
      iVar9 = 0;
      if (iVar6 <= piVar8[-1]) {
        iVar10 = iVar6 * 8 + 4;
        do {
          if (iVar14 <= piVar8[1]) {
            iVar11 = iVar14 * 4 + 2;
            puVar4 = (ushort *)
                     (*(int *)(*(int *)(param_1[0x70] + 0x18) + iVar6 * 4) +
                     (iVar14 * 0x20 + iVar1) * 2);
            iVar7 = (piVar8[1] - iVar14) + 1;
            do {
              if (iVar1 <= piVar8[3]) {
                iVar9 = iVar1 * 8 + 4;
                iVar13 = (piVar8[3] - piVar8[2]) + 1;
                puVar15 = puVar4;
                do {
                  uVar5 = (uint)*puVar15;
                  puVar15 = puVar15 + 1;
                  if (uVar5 != 0) {
                    iVar12 = iVar12 + uVar5;
                    iStack_24 = iStack_24 + iVar10 * uVar5;
                    iStack_20 = iStack_20 + iVar11 * uVar5;
                    iStack_1c = iStack_1c + iVar9 * uVar5;
                  }
                  iVar9 = iVar9 + 8;
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              puVar4 = puVar4 + 0x20;
              iVar11 = iVar11 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + 8;
          iVar11 = iStack_24;
          iVar7 = iStack_20;
          iVar9 = iStack_1c;
        } while (iVar6 <= piVar8[-1]);
      }
      iVar14 = iVar12 >> 1;
      *(char *)(iStack_30 + *(int *)param_1[0x1d]) = (char)((iVar11 + iVar14) / iVar12);
      *(char *)(iStack_30 + *(int *)(param_1[0x1d] + 4)) = (char)((iVar14 + iVar7) / iVar12);
      piVar8 = piVar8 + 8;
      *(char *)(iStack_30 + *(int *)(param_1[0x1d] + 8)) = (char)((iVar14 + iVar9) / iVar12);
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < iVar3);
  }
  param_1[0x1c] = iVar3;
  *(undefined4 *)(*param_1 + 0x14) = 0x62;
  *(int *)(*param_1 + 0x18) = iVar3;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}




void __cdecl FUN_00418e60(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x18);
  local_14 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_8 = param_2[3];
  param_1 = param_2[4];
  iVar9 = param_2[5];
  iVar3 = local_14;
  if (local_14 < local_1c) {
    do {
      if (local_18 <= local_8) {
        psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (local_18 * 0x20 + param_1) * 2);
        iVar7 = param_1;
        iVar8 = local_18;
        psVar5 = psVar4;
        do {
          for (; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              *param_2 = iVar3;
              local_14 = iVar3;
              goto LAB_00418f1d;
            }
          }
          iVar8 = iVar8 + 1;
          psVar4 = psVar5 + 0x20;
          iVar7 = param_1;
          psVar5 = psVar4;
        } while (iVar8 <= local_8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= local_1c);
LAB_00418f1d:
    iVar3 = local_1c;
    if (local_14 < local_1c) {
      do {
        if (local_18 <= local_8) {
          psVar4 = (short *)(*(int *)(iVar2 + iVar3 * 4) + (local_18 * 0x20 + param_1) * 2);
          iVar7 = param_1;
          iVar8 = local_18;
          psVar5 = psVar4;
          do {
            for (; iVar7 <= iVar9; iVar7 = iVar7 + 1) {
              sVar1 = *psVar4;
              psVar4 = psVar4 + 1;
              if (sVar1 != 0) {
                param_2[1] = iVar3;
                local_1c = iVar3;
                goto LAB_00418fc7;
              }
            }
            iVar8 = iVar8 + 1;
            psVar4 = psVar5 + 0x20;
            iVar7 = param_1;
            psVar5 = psVar4;
          } while (iVar8 <= local_8);
        }
        iVar3 = iVar3 + -1;
      } while (local_14 <= iVar3);
    }
  }
LAB_00418fc7:
  if (local_18 < local_8) {
    iVar3 = (local_18 * 0x20 + param_1) * 2;
    iVar7 = local_14;
    iVar8 = local_18;
    do {
      for (; iVar7 <= local_1c; iVar7 = iVar7 + 1) {
        psVar4 = (short *)(*(int *)(iVar2 + iVar7 * 4) + iVar3);
        for (iVar6 = param_1; iVar6 <= iVar9; iVar6 = iVar6 + 1) {
          sVar1 = *psVar4;
          psVar4 = psVar4 + 1;
          if (sVar1 != 0) {
            param_2[2] = iVar8;
            local_18 = iVar8;
            goto LAB_0041904e;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 0x40;
      iVar7 = local_14;
    } while (iVar8 <= local_8);
LAB_0041904e:
    if (local_18 < local_8) {
      iVar3 = (local_8 * 0x20 + param_1) * 2;
      iVar7 = local_14;
      iVar8 = local_8;
      do {
        for (; iVar7 <= local_1c; iVar7 = iVar7 + 1) {
          psVar4 = (short *)(*(int *)(iVar2 + iVar7 * 4) + iVar3);
          for (iVar6 = param_1; iVar6 <= iVar9; iVar6 = iVar6 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              param_2[3] = iVar8;
              local_8 = iVar8;
              goto LAB_004190cc;
            }
          }
        }
        iVar8 = iVar8 + -1;
        iVar3 = iVar3 + -0x40;
        iVar7 = local_14;
      } while (local_18 <= iVar8);
    }
  }
LAB_004190cc:
  iVar3 = param_1;
  if (param_1 < iVar9) {
    for (; iVar3 <= iVar9; iVar3 = iVar3 + 1) {
      if (local_14 <= local_1c) {
        iVar7 = local_14;
        do {
          psVar4 = (short *)(*(int *)(iVar2 + iVar7 * 4) + (local_18 * 0x20 + iVar3) * 2);
          for (iVar8 = local_18; iVar8 <= local_8; iVar8 = iVar8 + 1) {
            if (*psVar4 != 0) {
              param_2[4] = iVar3;
              param_1 = iVar3;
              goto LAB_00419139;
            }
            psVar4 = psVar4 + 0x20;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= local_1c);
      }
    }
LAB_00419139:
    iVar3 = iVar9;
    if (param_1 < iVar9) {
      do {
        if (local_14 <= local_1c) {
          iVar7 = local_14;
          do {
            psVar4 = (short *)(*(int *)(iVar2 + iVar7 * 4) + (local_18 * 0x20 + iVar3) * 2);
            for (iVar8 = local_18; iVar8 <= local_8; iVar8 = iVar8 + 1) {
              if (*psVar4 != 0) {
                param_2[5] = iVar3;
                iVar9 = iVar3;
                goto LAB_004191ad;
              }
              psVar4 = psVar4 + 0x20;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 <= local_1c);
        }
        iVar3 = iVar3 + -1;
      } while (param_1 <= iVar3);
    }
  }
LAB_004191ad:
  iVar6 = (local_1c - local_14) * 0x10;
  iVar8 = (local_8 - local_18) * 0xc;
  iVar3 = (iVar9 - param_1) * 8;
  iVar7 = 0;
  param_2[6] = iVar3 * iVar3 + iVar8 * iVar8 + iVar6 * iVar6;
  if (local_1c < local_14) {
    param_2[7] = 0;
    return;
  }
  do {
    if (local_18 <= local_8) {
      iVar3 = (local_8 - local_18) + 1;
      psVar4 = (short *)(*(int *)(iVar2 + local_14 * 4) + (local_18 * 0x20 + param_1) * 2);
      do {
        if (param_1 <= iVar9) {
          iVar6 = (iVar9 - param_1) + 1;
          psVar5 = psVar4;
          iVar8 = iVar7;
          do {
            sVar1 = *psVar5;
            psVar5 = psVar5 + 1;
            iVar7 = iVar8 + 1;
            if (sVar1 == 0) {
              iVar7 = iVar8;
            }
            iVar6 = iVar6 + -1;
            iVar8 = iVar7;
          } while (iVar6 != 0);
        }
        psVar4 = psVar4 + 0x20;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_14 = local_14 + 1;
  } while (local_14 <= local_1c);
  param_2[7] = iVar7;
  return;
}




void __cdecl FUN_00419290(int param_1,int *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int iVar14;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  iVar4 = *(int *)(param_1 + 300);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar8 = *(int *)(iVar3 + 0x1c);
  iVar3 = (int)param_3 * 4;
  param_3 = *(byte **)(iVar3 + *param_2);
  pbVar13 = *(byte **)(iVar3 + param_2[1]);
  pbVar11 = *(byte **)(iVar3 + param_2[2]);
  puVar12 = (undefined1 *)*param_4;
  uVar10 = *(uint *)(param_1 + 0x5c);
  param_2 = (int *)(uVar10 >> 1);
  if (param_2 != (int *)0x0) {
    do {
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar2 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      iVar3 = *(int *)(iVar5 + (uint)bVar1 * 4);
      iVar14 = *(int *)(iVar8 + (uint)bVar2 * 4) + *(int *)(iVar7 + (uint)bVar1 * 4) >> 0x10;
      iVar9 = *(int *)(iVar6 + (uint)bVar2 * 4);
      uVar10 = (uint)*param_3;
      *puVar12 = *(undefined1 *)(uVar10 + iVar3 + iVar4);
      puVar12[1] = *(undefined1 *)(uVar10 + iVar14 + iVar4);
      puVar12[2] = *(undefined1 *)(uVar10 + iVar9 + iVar4);
      uVar10 = (uint)param_3[1];
      param_3 = param_3 + 2;
      puVar12[3] = *(undefined1 *)(uVar10 + iVar3 + iVar4);
      puVar12[4] = *(undefined1 *)(uVar10 + iVar14 + iVar4);
      puVar12[5] = *(undefined1 *)(uVar10 + iVar9 + iVar4);
      puVar12 = puVar12 + 6;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
    uVar10 = *(uint *)(param_1 + 0x5c);
  }
  if ((uVar10 & 1) != 0) {
    iVar3 = *(int *)(iVar8 + (uint)*pbVar13 * 4);
    iVar6 = *(int *)(iVar6 + (uint)*pbVar13 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar11 * 4);
    uVar10 = (uint)*param_3;
    *puVar12 = *(undefined1 *)(*(int *)(iVar5 + (uint)*pbVar11 * 4) + uVar10 + iVar4);
    puVar12[1] = *(undefined1 *)(uVar10 + (iVar3 + iVar7 >> 0x10) + iVar4);
    puVar12[2] = *(undefined1 *)(uVar10 + iVar6 + iVar4);
  }
  return;
}




void __cdecl FUN_00419400(int param_1,int *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *local_20;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  iVar4 = *(int *)(param_1 + 300);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar12 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar7 = *(byte **)(*param_2 + (int)param_3 * 8);
  local_20 = *(byte **)(*param_2 + 4 + (int)param_3 * 8);
  pbVar15 = *(byte **)(param_2[1] + (int)param_3 * 4);
  pbVar14 = *(byte **)(param_2[2] + (int)param_3 * 4);
  puVar13 = (undefined1 *)*param_4;
  param_2 = (int *)param_4[1];
  uVar10 = *(uint *)(param_1 + 0x5c);
  param_4 = (undefined4 *)(uVar10 >> 1);
  param_3 = pbVar7;
  if (param_4 != (undefined4 *)0x0) {
    do {
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      bVar2 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      iVar8 = *(int *)(iVar5 + (uint)bVar2 * 4);
      iVar11 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar12 + (uint)bVar2 * 4) >> 0x10;
      iVar9 = *(int *)(iVar6 + (uint)bVar1 * 4);
      uVar10 = (uint)*param_3;
      *puVar13 = *(undefined1 *)(uVar10 + iVar8 + iVar4);
      puVar13[1] = *(undefined1 *)(uVar10 + iVar11 + iVar4);
      puVar13[2] = *(undefined1 *)(uVar10 + iVar9 + iVar4);
      uVar10 = (uint)param_3[1];
      param_3 = param_3 + 2;
      puVar13[3] = *(undefined1 *)(uVar10 + iVar8 + iVar4);
      puVar13[4] = *(undefined1 *)(uVar10 + iVar11 + iVar4);
      puVar13[5] = *(undefined1 *)(uVar10 + iVar9 + iVar4);
      puVar13 = puVar13 + 6;
      uVar10 = (uint)*local_20;
      *(undefined1 *)param_2 = *(undefined1 *)(uVar10 + iVar8 + iVar4);
      *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)(uVar10 + iVar11 + iVar4);
      *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)(uVar10 + iVar9 + iVar4);
      uVar10 = (uint)local_20[1];
      local_20 = local_20 + 2;
      *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)(iVar8 + uVar10 + iVar4);
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(uVar10 + iVar11 + iVar4);
      *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(uVar10 + iVar9 + iVar4);
      param_2 = (int *)((int)param_2 + 6);
      param_4 = (undefined4 *)((int)param_4 + -1);
    } while (param_4 != (undefined4 *)0x0);
    uVar10 = *(uint *)(param_1 + 0x5c);
  }
  if ((uVar10 & 1) != 0) {
    iVar5 = *(int *)(iVar5 + (uint)*pbVar14 * 4);
    iVar12 = *(int *)(iVar3 + (uint)*pbVar15 * 4) + *(int *)(iVar12 + (uint)*pbVar14 * 4) >> 0x10;
    iVar3 = *(int *)(iVar6 + (uint)*pbVar15 * 4);
    uVar10 = (uint)*param_3;
    *puVar13 = *(undefined1 *)(uVar10 + iVar5 + iVar4);
    puVar13[1] = *(undefined1 *)(uVar10 + iVar12 + iVar4);
    puVar13[2] = *(undefined1 *)(uVar10 + iVar3 + iVar4);
    uVar10 = (uint)*local_20;
    *(undefined1 *)param_2 = *(undefined1 *)(uVar10 + iVar5 + iVar4);
    *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)(uVar10 + iVar12 + iVar4);
    *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)(uVar10 + iVar3 + iVar4);
  }
  return;
}




void __cdecl FUN_00419610(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = &LAB_004198f0;
  *(undefined1 *)(puVar1 + 2) = 0;
  iVar3 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c);
  puVar1[10] = iVar3;
  if (*(int *)(param_1 + 0x11c) == 2) {
    puVar1[1] = &LAB_00419840;
    puVar1[3] = FUN_00419400;
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar3);
  }
  else {
    puVar1[1] = &LAB_00419800;
    uVar2 = 0;
    puVar1[3] = FUN_00419290;
  }
  puVar1[8] = uVar2;
  iVar3 = *(int *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x28) == 7) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x14) = uVar2;
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x18) = uVar2;
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
    *(undefined4 *)(iVar3 + 0x1c) = uVar2;
    param_1 = -0x1c52200;
    iVar5 = 0xb6d180;
    iVar6 = 0x589980;
    iVar4 = 0;
    iVar8 = -0x1666980;
    do {
      iVar7 = iVar8 + 0x2cdd3;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x10)) = iVar8 >> 0x10;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x14)) = param_1 >> 0x10;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x18)) = iVar5;
      iVar5 = iVar5 + -0x16da3;
      *(int *)(iVar4 + *(int *)(iVar3 + 0x1c)) = iVar6;
      iVar6 = iVar6 + -0xb033;
      iVar4 = iVar4 + 4;
      iVar8 = iVar7;
      param_1 = param_1 + 0x38b44;
    } while (iVar7 < 0x1649bae);
    return;
  }
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x14) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x18) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  param_1 = -0xe25100;
  iVar5 = 0x5b6900;
  iVar6 = 0x2c8c80;
  iVar4 = 0;
  iVar8 = -0xb2f480;
  do {
    iVar7 = iVar8 + 0x166e9;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x10)) = iVar8 >> 0x10;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x14)) = param_1 >> 0x10;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x18)) = iVar5;
    iVar5 = iVar5 + -0xb6d2;
    *(int *)(iVar4 + *(int *)(iVar3 + 0x1c)) = iVar6;
    iVar6 = iVar6 + -0x5819;
    iVar4 = iVar4 + 4;
    iVar8 = iVar7;
    param_1 = param_1 + 0x1c5a2;
  } while (iVar7 < 0xb28d98);
  return;
}




void __cdecl FUN_0041ebc0(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar2 = *(int *)(param_1 + 300);
  piVar3 = *(int **)(param_2 + 0x54);
  iVar4 = ((int)*param_3 * *piVar3 - (int)param_3[0x10] * piVar3[0x10]) * 0x2000;
  iVar10 = ((int)param_3[0x10] * piVar3[0x10] + (int)*param_3 * *piVar3) * 0x2000;
  iVar11 = ((int)param_3[0x18] * piVar3[0x18] + (int)param_3[8] * piVar3[8]) * 0x1151;
  iVar5 = (int)param_3[8] * piVar3[8] * 0x187e + iVar11;
  iVar11 = iVar11 + (int)param_3[0x18] * piVar3[0x18] * -0x3b21;
  iVar6 = ((int)param_3[1] * piVar3[1] - (int)param_3[0x11] * piVar3[0x11]) * 0x2000;
  iVar9 = ((int)param_3[0x11] * piVar3[0x11] + (int)param_3[1] * piVar3[1]) * 0x2000;
  iVar12 = ((int)param_3[0x19] * piVar3[0x19] + (int)param_3[9] * piVar3[9]) * 0x1151;
  iVar7 = (int)param_3[9] * piVar3[9] * 0x187e + iVar12;
  iVar12 = iVar12 + (int)param_3[0x19] * piVar3[0x19] * -0x3b21;
  iVar8 = iVar9 + iVar7;
  iVar9 = iVar9 - iVar7;
  iVar7 = iVar10 + iVar5 + 0x2008000;
  iVar1 = iVar6 + iVar12;
  iVar6 = iVar6 - iVar12;
  iVar12 = *param_4;
  *(undefined1 *)(iVar12 + param_5) =
       *(undefined1 *)(((iVar8 + iVar7 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  ((undefined1 *)(iVar12 + param_5))[1] =
       *(undefined1 *)(((iVar7 - iVar8 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  iVar8 = iVar4 + iVar11 + 0x2008000;
  iVar7 = param_4[1];
  *(undefined1 *)(iVar7 + param_5) =
       *(undefined1 *)(((iVar1 + iVar8 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  *(undefined1 *)(iVar7 + 1 + param_5) =
       *(undefined1 *)(((iVar8 - iVar1 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  iVar8 = (iVar4 - iVar11) + 0x2008000;
  iVar7 = param_4[2];
  *(undefined1 *)(iVar7 + param_5) =
       *(undefined1 *)(((iVar6 + iVar8 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  *(undefined1 *)(iVar7 + 1 + param_5) =
       *(undefined1 *)(((iVar8 - iVar6 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  iVar8 = (iVar10 - iVar5) + 0x2008000;
  iVar7 = param_4[3];
  *(undefined1 *)(iVar7 + param_5) =
       *(undefined1 *)(((iVar9 + iVar8 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  *(undefined1 *)(iVar7 + 1 + param_5) =
       *(undefined1 *)(((iVar8 - iVar9 >> 0x10 & 0x3ffU) - 0x180) + iVar2);
  return;
}




void __cdecl FUN_0041edc0(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  
  iVar5 = *(int *)(param_1 + 300);
  piVar6 = *(int **)(param_2 + 0x54);
  sVar3 = param_3[0x10];
  iVar14 = piVar6[0x10];
  iVar8 = (int)*param_3 * *piVar6 * 0x2000 + 0x400;
  iVar10 = (int)param_3[1] * piVar6[1] * 0x2000 + 0x400;
  iVar1 = sVar3 * iVar14 * 0x16a1 + iVar8;
  sVar4 = param_3[8];
  iVar7 = piVar6[8];
  iVar13 = ((iVar1 + sVar4 * iVar7 * 0x2731 >> 0xb) + 0x4010) * 0x2000;
  iVar2 = (int)param_3[0x11] * piVar6[0x11] * 0x16a1 + iVar10;
  iVar11 = iVar10 + (int)param_3[0x11] * piVar6[0x11] * -0x2d42 >> 0xb;
  iVar10 = (int)param_3[2] * piVar6[2] * 0x2000 + 0x400;
  iVar15 = iVar2 + (int)param_3[9] * piVar6[9] * -0x2731 >> 0xb;
  iVar9 = iVar2 + (int)param_3[9] * piVar6[9] * 0x2731 >> 0xb;
  iVar2 = (int)param_3[0x12] * piVar6[0x12] * 0x16a1 + iVar10;
  iVar12 = iVar10 + (int)param_3[0x12] * piVar6[0x12] * -0x2d42 >> 0xb;
  iVar16 = iVar2 + (int)param_3[10] * piVar6[10] * -0x2731 >> 0xb;
  iVar10 = iVar2 + (int)param_3[10] * piVar6[10] * 0x2731 >> 0xb;
  puVar17 = (undefined1 *)(*param_4 + param_5);
  iVar2 = iVar10 * 0x16a1 + iVar13;
  *puVar17 = *(undefined1 *)(((iVar2 + iVar9 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  puVar17[2] = *(undefined1 *)(((iVar2 + iVar9 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  puVar17[1] = *(undefined1 *)(((iVar13 + iVar10 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  iVar10 = ((iVar8 + sVar3 * iVar14 * -0x2d42 >> 0xb) + 0x4010) * 0x2000;
  iVar14 = param_4[1];
  iVar2 = iVar12 * 0x16a1 + iVar10;
  *(undefined1 *)(iVar14 + param_5) =
       *(undefined1 *)(((iVar2 + iVar11 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  *(undefined1 *)(iVar14 + 2 + param_5) =
       *(undefined1 *)(((iVar2 + iVar11 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  *(undefined1 *)(iVar14 + 1 + param_5) =
       *(undefined1 *)(((iVar10 + iVar12 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  iVar14 = ((iVar1 + sVar4 * iVar7 * -0x2731 >> 0xb) + 0x4010) * 0x2000;
  iVar2 = param_4[2];
  iVar1 = iVar16 * 0x16a1 + iVar14;
  *(undefined1 *)(iVar2 + param_5) =
       *(undefined1 *)(((iVar1 + iVar15 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  *(undefined1 *)(iVar2 + 2 + param_5) =
       *(undefined1 *)(((iVar1 + iVar15 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  *(undefined1 *)(iVar2 + 1 + param_5) =
       *(undefined1 *)(((iVar14 + iVar16 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar5);
  return;
}




void __cdecl FUN_0041f020(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  
  iVar1 = *(int *)(param_1 + 300);
  piVar2 = *(int **)(param_2 + 0x54);
  iVar12 = (int)param_3[8] * piVar2[8];
  iVar4 = (int)*param_3 * *piVar2 * 0x2000 + 0x400;
  iVar19 = (int)param_3[0x20] * piVar2[0x20] * 0x16a1 + iVar4;
  iVar5 = iVar4 + (int)param_3[0x20] * piVar2[0x20] * -0x2d42 >> 0xb;
  iVar4 = iVar19 + (int)param_3[0x10] * piVar2[0x10] * 0x2731;
  iVar19 = iVar19 + (int)param_3[0x10] * piVar2[0x10] * -0x2731;
  iVar6 = (int)param_3[0x28] * piVar2[0x28];
  iVar20 = (int)param_3[0x18] * piVar2[0x18];
  iVar3 = (iVar6 + iVar12) * 0xbb6;
  iVar13 = (iVar12 - iVar6) - iVar20;
  iVar10 = (iVar20 + iVar12) * 0x2000 + iVar3;
  iVar3 = (iVar6 - iVar20) * 0x2000 + iVar3;
  iVar12 = (int)param_3[1] * piVar2[1] * 0x2000 + 0x400;
  iVar6 = (int)param_3[0x21] * piVar2[0x21] * 0x16a1 + iVar12;
  iVar21 = (int)param_3[0x19] * piVar2[0x19];
  iVar14 = iVar12 + (int)param_3[0x21] * piVar2[0x21] * -0x2d42 >> 0xb;
  iVar12 = iVar6 + (int)param_3[0x11] * piVar2[0x11] * 0x2731;
  iVar6 = iVar6 + (int)param_3[0x11] * piVar2[0x11] * -0x2731;
  iVar15 = (int)param_3[9] * piVar2[9];
  iVar7 = (int)param_3[0x29] * piVar2[0x29];
  iVar16 = (iVar15 - iVar7) - iVar21;
  iVar20 = (iVar7 + iVar15) * 0xbb6;
  iVar15 = (iVar21 + iVar15) * 0x2000 + iVar20;
  iVar20 = (iVar7 - iVar21) * 0x2000 + iVar20;
  iVar8 = iVar12 - iVar15 >> 0xb;
  iVar15 = iVar12 + iVar15 >> 0xb;
  iVar22 = (int)param_3[0x1a] * piVar2[0x1a];
  iVar12 = iVar14 + iVar16 * 4;
  iVar14 = iVar14 + iVar16 * -4;
  iVar7 = (int)param_3[2] * piVar2[2] * 0x2000 + 0x400;
  iVar16 = iVar6 + iVar20 >> 0xb;
  iVar9 = iVar6 - iVar20 >> 0xb;
  iVar6 = (int)param_3[0x22] * piVar2[0x22] * 0x16a1 + iVar7;
  iVar17 = iVar7 + (int)param_3[0x22] * piVar2[0x22] * -0x2d42 >> 0xb;
  iVar20 = iVar6 + (int)param_3[0x12] * piVar2[0x12] * 0x2731;
  iVar6 = iVar6 + (int)param_3[0x12] * piVar2[0x12] * -0x2731;
  iVar18 = (int)param_3[10] * piVar2[10];
  iVar7 = (int)param_3[0x2a] * piVar2[0x2a];
  iVar21 = (iVar7 + iVar18) * 0xbb6;
  iVar11 = (iVar22 + iVar18) * 0x2000 + iVar21;
  iVar21 = (iVar7 - iVar22) * 0x2000 + iVar21;
  iVar22 = (iVar18 - iVar7) - iVar22;
  iVar23 = ((iVar4 + iVar10 >> 0xb) + 0x4010) * 0x2000;
  iVar18 = iVar20 - iVar11 >> 0xb;
  iVar11 = iVar20 + iVar11 >> 0xb;
  iVar20 = iVar17 + iVar22 * 4;
  iVar17 = iVar17 + iVar22 * -4;
  iVar7 = iVar11 * 0x16a1 + iVar23;
  iVar22 = iVar6 - iVar21 >> 0xb;
  puVar24 = (undefined1 *)(*param_4 + param_5);
  iVar21 = iVar6 + iVar21 >> 0xb;
  *puVar24 = *(undefined1 *)(((iVar7 + iVar15 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  puVar24[2] = *(undefined1 *)(((iVar7 + iVar15 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  puVar24[1] = *(undefined1 *)(((iVar23 + iVar11 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  iVar7 = (iVar5 + iVar13 * 4 + 0x4010) * 0x2000;
  puVar24 = (undefined1 *)(param_4[1] + param_5);
  iVar6 = iVar20 * 0x16a1 + iVar7;
  *puVar24 = *(undefined1 *)(((iVar6 + iVar12 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  puVar24[2] = *(undefined1 *)(((iVar6 + iVar12 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  puVar24[1] = *(undefined1 *)(((iVar7 + iVar20 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  iVar20 = ((iVar19 + iVar3 >> 0xb) + 0x4010) * 0x2000;
  iVar12 = param_4[2];
  iVar6 = iVar21 * 0x16a1 + iVar20;
  *(undefined1 *)(iVar12 + param_5) =
       *(undefined1 *)(((iVar6 + iVar16 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar12 + 2 + param_5) =
       *(undefined1 *)(((iVar6 + iVar16 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar12 + 1 + param_5) =
       *(undefined1 *)(((iVar20 + iVar21 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  iVar12 = ((iVar19 - iVar3 >> 0xb) + 0x4010) * 0x2000;
  iVar6 = param_4[3];
  iVar19 = iVar22 * 0x16a1 + iVar12;
  *(undefined1 *)(iVar6 + param_5) =
       *(undefined1 *)(((iVar19 + iVar9 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar6 + 2 + param_5) =
       *(undefined1 *)(((iVar19 + iVar9 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar6 + 1 + param_5) =
       *(undefined1 *)(((iVar12 + iVar22 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  iVar6 = param_4[4];
  iVar12 = (iVar5 + iVar13 * -4 + 0x4010) * 0x2000;
  iVar19 = iVar17 * 0x16a1 + iVar12;
  *(undefined1 *)(iVar6 + param_5) =
       *(undefined1 *)(((iVar19 + iVar14 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar6 + 2 + param_5) =
       *(undefined1 *)(((iVar19 + iVar14 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar6 + 1 + param_5) =
       *(undefined1 *)(((iVar12 + iVar17 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  iVar6 = param_4[5];
  iVar4 = ((iVar4 - iVar10 >> 0xb) + 0x4010) * 0x2000;
  iVar19 = iVar18 * 0x16a1 + iVar4;
  *(undefined1 *)(iVar6 + param_5) =
       *(undefined1 *)(((iVar19 + iVar8 * 0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar6 + 2 + param_5) =
       *(undefined1 *)(((iVar19 + iVar8 * -0x2731 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  *(undefined1 *)(iVar6 + 1 + param_5) =
       *(undefined1 *)(((iVar4 + iVar18 * -0x2d42 >> 0x12 & 0x3ffU) - 0x180) + iVar1);
  return;
}




void __cdecl FUN_0041f560(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  sVar1 = *param_3;
  iVar3 = *(int *)(param_1 + 300);
  piVar4 = *(int **)(param_2 + 0x54);
  sVar2 = param_3[8];
  iVar11 = piVar4[8];
  iVar15 = *piVar4;
  iVar9 = sVar2 * iVar11 + sVar1 * iVar15 + 0x1004;
  iVar7 = (int)param_3[9] * piVar4[9] + (int)param_3[1] * piVar4[1];
  iVar6 = (int)param_3[1] * piVar4[1] - (int)param_3[9] * piVar4[9];
  iVar8 = (int)param_3[10] * piVar4[10] + (int)param_3[2] * piVar4[2];
  iVar12 = (int)param_3[2] * piVar4[2] - (int)param_3[10] * piVar4[10];
  iVar10 = (iVar8 + iVar9) * 0x2000;
  iVar9 = (iVar9 - iVar8) * 0x2000;
  iVar8 = (int)param_3[0xb] * piVar4[0xb] + (int)param_3[3] * piVar4[3];
  iVar13 = (int)param_3[3] * piVar4[3] - (int)param_3[0xb] * piVar4[0xb];
  puVar5 = (undefined1 *)(*param_4 + param_5);
  iVar14 = (iVar8 + iVar7) * 0x1151;
  iVar7 = iVar7 * 0x187e + iVar14;
  iVar14 = iVar14 + iVar8 * -0x3b21;
  *puVar5 = *(undefined1 *)(((iVar7 + iVar10 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  puVar5[3] = *(undefined1 *)(((iVar10 - iVar7 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  puVar5[1] = *(undefined1 *)(((iVar9 + iVar14 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  puVar5[2] = *(undefined1 *)(((iVar9 - iVar14 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  iVar7 = (sVar1 * iVar15 - sVar2 * iVar11) + 0x1004;
  puVar5 = (undefined1 *)(param_4[1] + param_5);
  iVar8 = (iVar12 + iVar7) * 0x2000;
  iVar15 = (iVar7 - iVar12) * 0x2000;
  iVar11 = (iVar6 + iVar13) * 0x1151;
  iVar7 = iVar6 * 0x187e + iVar11;
  iVar11 = iVar11 + iVar13 * -0x3b21;
  *puVar5 = *(undefined1 *)(((iVar7 + iVar8 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  puVar5[3] = *(undefined1 *)(((iVar8 - iVar7 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  puVar5[1] = *(undefined1 *)(((iVar15 + iVar11 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  puVar5[2] = *(undefined1 *)(((iVar15 - iVar11 >> 0x10 & 0x3ffU) - 0x180) + iVar3);
  return;
}




void __cdecl FUN_00420e00(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  
  iVar2 = *(int *)(param_1 + 300);
  piVar3 = *(int **)(param_2 + 0x54);
  iVar29 = (int)*param_3 * *piVar3 * 0x2000 + 0x400;
  iVar10 = (int)param_3[0x20] * piVar3[0x20] + (int)param_3[0x10] * piVar3[0x10];
  iVar14 = (int)param_3[0x10] * piVar3[0x10] - (int)param_3[0x20] * piVar3[0x20];
  iVar7 = iVar14 * 0xb50 + iVar29;
  iVar1 = iVar7 + iVar10 * 0x194c;
  iVar7 = iVar7 + iVar10 * -0x194c;
  iVar24 = ((int)param_3[0x18] * piVar3[0x18] + (int)param_3[8] * piVar3[8]) * 0x1a9a;
  iVar30 = (int)param_3[1] * piVar3[1] * 0x2000 + 0x400;
  iVar8 = (int)param_3[8] * piVar3[8] * 0x1071 + iVar24;
  iVar24 = iVar24 + (int)param_3[0x18] * piVar3[0x18] * -0x45a4;
  iVar10 = (int)param_3[0x21] * piVar3[0x21] + (int)param_3[0x11] * piVar3[0x11];
  iVar15 = (int)param_3[0x11] * piVar3[0x11] - (int)param_3[0x21] * piVar3[0x21];
  iVar9 = iVar15 * 0xb50 + iVar30;
  iVar22 = iVar9 + iVar10 * 0x194c;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar31 = iVar30 + iVar15 * -0x2d40 >> 0xb;
  iVar15 = ((int)param_3[0x19] * piVar3[0x19] + (int)param_3[9] * piVar3[9]) * 0x1a9a;
  iVar32 = (int)param_3[2] * piVar3[2] * 0x2000 + 0x400;
  iVar10 = (int)param_3[9] * piVar3[9] * 0x1071 + iVar15;
  iVar15 = iVar15 + (int)param_3[0x19] * piVar3[0x19] * -0x45a4;
  iVar30 = iVar22 + iVar10 >> 0xb;
  iVar16 = iVar22 - iVar10 >> 0xb;
  iVar11 = iVar9 - iVar15 >> 0xb;
  iVar4 = iVar9 + iVar15 >> 0xb;
  iVar10 = (int)param_3[0x22] * piVar3[0x22] + (int)param_3[0x12] * piVar3[0x12];
  iVar15 = (int)param_3[0x12] * piVar3[0x12] - (int)param_3[0x22] * piVar3[0x22];
  iVar9 = iVar15 * 0xb50 + iVar32;
  iVar22 = iVar9 + iVar10 * 0x194c;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar15 = iVar32 + iVar15 * -0x2d40 >> 0xb;
  iVar25 = ((int)param_3[0x1a] * piVar3[0x1a] + (int)param_3[10] * piVar3[10]) * 0x1a9a;
  iVar10 = (int)param_3[10] * piVar3[10] * 0x1071 + iVar25;
  iVar25 = iVar25 + (int)param_3[0x1a] * piVar3[0x1a] * -0x45a4;
  iVar32 = iVar22 - iVar10 >> 0xb;
  iVar33 = iVar22 + iVar10 >> 0xb;
  iVar5 = iVar9 + iVar25 >> 0xb;
  iVar12 = iVar9 - iVar25 >> 0xb;
  iVar19 = (int)param_3[3] * piVar3[3] * 0x2000 + 0x400;
  iVar10 = (int)param_3[0x23] * piVar3[0x23] + (int)param_3[0x13] * piVar3[0x13];
  iVar25 = (int)param_3[0x13] * piVar3[0x13] - (int)param_3[0x23] * piVar3[0x23];
  iVar9 = iVar25 * 0xb50 + iVar19;
  iVar22 = iVar9 + iVar10 * 0x194c;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar20 = iVar19 + iVar25 * -0x2d40 >> 0xb;
  iVar26 = ((int)param_3[0x1b] * piVar3[0x1b] + (int)param_3[0xb] * piVar3[0xb]) * 0x1a9a;
  iVar10 = (int)param_3[0xb] * piVar3[0xb] * 0x1071 + iVar26;
  iVar26 = iVar26 + (int)param_3[0x1b] * piVar3[0x1b] * -0x45a4;
  iVar25 = iVar22 + iVar10 >> 0xb;
  iVar17 = iVar22 - iVar10 >> 0xb;
  iVar19 = iVar9 + iVar26 >> 0xb;
  iVar13 = iVar9 - iVar26 >> 0xb;
  iVar21 = (int)param_3[4] * piVar3[4] * 0x2000 + 0x400;
  iVar10 = (int)param_3[0x24] * piVar3[0x24] + (int)param_3[0x14] * piVar3[0x14];
  iVar18 = (int)param_3[0x14] * piVar3[0x14] - (int)param_3[0x24] * piVar3[0x24];
  iVar9 = iVar18 * 0xb50 + iVar21;
  iVar22 = iVar10 * 0x194c + iVar9;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar27 = ((int)param_3[0x1c] * piVar3[0x1c] + (int)param_3[0xc] * piVar3[0xc]) * 0x1a9a;
  iVar10 = (int)param_3[0xc] * piVar3[0xc] * 0x1071 + iVar27;
  iVar27 = iVar27 + (int)param_3[0x1c] * piVar3[0x1c] * -0x45a4;
  iVar26 = iVar22 - iVar10 >> 0xb;
  iVar6 = iVar27 + iVar9 >> 0xb;
  iVar27 = iVar9 - iVar27 >> 0xb;
  iVar9 = iVar22 + iVar10 >> 0xb;
  iVar18 = iVar21 + iVar18 * -0x2d40 >> 0xb;
  iVar10 = iVar9 + iVar33;
  iVar33 = iVar33 - iVar9;
  puVar23 = (undefined1 *)(*param_4 + param_5);
  iVar21 = ((iVar1 + iVar8 >> 0xb) + 0x4010) * 0x2000;
  iVar9 = iVar33 * 0xb50 + iVar21;
  iVar22 = iVar9 + iVar10 * 0x194c;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar28 = (iVar25 + iVar30) * 0x1a9a;
  iVar10 = iVar30 * 0x1071 + iVar28;
  iVar28 = iVar28 + iVar25 * -0x45a4;
  *puVar23 = *(undefined1 *)(((iVar22 + iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[4] = *(undefined1 *)(((iVar22 - iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[1] = *(undefined1 *)(((iVar9 + iVar28 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[3] = *(undefined1 *)(((iVar9 - iVar28 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[2] = *(undefined1 *)(((iVar21 + iVar33 * -0x2d40 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  iVar30 = ((iVar7 + iVar24 >> 0xb) + 0x4010) * 0x2000;
  iVar10 = iVar6 + iVar5;
  iVar5 = iVar5 - iVar6;
  puVar23 = (undefined1 *)(param_4[1] + param_5);
  iVar9 = iVar5 * 0xb50 + iVar30;
  iVar22 = iVar9 + iVar10 * 0x194c;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar25 = (iVar19 + iVar4) * 0x1a9a;
  iVar10 = iVar4 * 0x1071 + iVar25;
  iVar25 = iVar25 + iVar19 * -0x45a4;
  *puVar23 = *(undefined1 *)(((iVar22 + iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[4] = *(undefined1 *)(((iVar22 - iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[1] = *(undefined1 *)(((iVar9 + iVar25 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[3] = *(undefined1 *)(((iVar9 - iVar25 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[2] = *(undefined1 *)(((iVar30 + iVar5 * -0x2d40 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  iVar30 = ((iVar29 + iVar14 * -0x2d40 >> 0xb) + 0x4010) * 0x2000;
  iVar10 = iVar18 + iVar15;
  iVar15 = iVar15 - iVar18;
  puVar23 = (undefined1 *)(param_4[2] + param_5);
  iVar9 = iVar15 * 0xb50 + iVar30;
  iVar22 = iVar9 + iVar10 * 0x194c;
  iVar9 = iVar9 + iVar10 * -0x194c;
  iVar4 = (iVar20 + iVar31) * 0x1a9a;
  iVar10 = iVar31 * 0x1071 + iVar4;
  iVar4 = iVar4 + iVar20 * -0x45a4;
  *puVar23 = *(undefined1 *)(((iVar22 + iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[4] = *(undefined1 *)(((iVar22 - iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[1] = *(undefined1 *)(((iVar9 + iVar4 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[3] = *(undefined1 *)(((iVar9 - iVar4 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[2] = *(undefined1 *)(((iVar30 + iVar15 * -0x2d40 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  iVar10 = iVar27 + iVar12;
  puVar23 = (undefined1 *)(param_4[3] + param_5);
  iVar22 = ((iVar7 - iVar24 >> 0xb) + 0x4010) * 0x2000;
  iVar12 = iVar12 - iVar27;
  iVar7 = iVar12 * 0xb50 + iVar22;
  iVar9 = iVar7 + iVar10 * 0x194c;
  iVar7 = iVar7 + iVar10 * -0x194c;
  iVar15 = (iVar13 + iVar11) * 0x1a9a;
  iVar10 = iVar11 * 0x1071 + iVar15;
  iVar15 = iVar15 + iVar13 * -0x45a4;
  *puVar23 = *(undefined1 *)(((iVar9 + iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[4] = *(undefined1 *)(((iVar9 - iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[1] = *(undefined1 *)(((iVar7 + iVar15 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[3] = *(undefined1 *)(((iVar7 - iVar15 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[2] = *(undefined1 *)(((iVar22 + iVar12 * -0x2d40 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  iVar9 = ((iVar1 - iVar8 >> 0xb) + 0x4010) * 0x2000;
  iVar10 = iVar26 + iVar32;
  iVar32 = iVar32 - iVar26;
  puVar23 = (undefined1 *)(param_4[4] + param_5);
  iVar7 = iVar32 * 0xb50 + iVar9;
  iVar1 = iVar7 + iVar10 * 0x194c;
  iVar7 = iVar7 + iVar10 * -0x194c;
  iVar22 = (iVar17 + iVar16) * 0x1a9a;
  iVar10 = iVar16 * 0x1071 + iVar22;
  iVar22 = iVar22 + iVar17 * -0x45a4;
  *puVar23 = *(undefined1 *)(((iVar1 + iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[4] = *(undefined1 *)(((iVar1 - iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[1] = *(undefined1 *)(((iVar7 + iVar22 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[3] = *(undefined1 *)(((iVar7 - iVar22 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  puVar23[2] = *(undefined1 *)(((iVar9 + iVar32 * -0x2d40 >> 0x12 & 0x3ffU) - 0x180) + iVar2);
  return;
}




void __cdecl FUN_004219b0(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  
  iVar3 = *(int *)(param_1 + 300);
  piVar4 = *(int **)(param_2 + 0x54);
  sVar1 = param_3[0x10];
  iVar6 = piVar4[0x10];
  iVar7 = (int)*param_3 * *piVar4 * 0x2000 + 0x400;
  iVar18 = sVar1 * iVar6 * 0x16a1 + iVar7;
  sVar2 = param_3[8];
  iVar27 = piVar4[8];
  iVar10 = (int)param_3[1] * piVar4[1] * 0x2000 + 0x400;
  iVar19 = (int)param_3[0x11] * piVar4[0x11] * 0x16a1 + iVar10;
  iVar11 = iVar10 + (int)param_3[0x11] * piVar4[0x11] * -0x2d42 >> 0xb;
  iVar10 = (int)param_3[2] * piVar4[2] * 0x2000 + 0x400;
  iVar20 = iVar19 + (int)param_3[9] * piVar4[9] * -0x2731 >> 0xb;
  iVar8 = iVar19 + (int)param_3[9] * piVar4[9] * 0x2731 >> 0xb;
  iVar19 = (int)param_3[0x12] * piVar4[0x12] * 0x16a1 + iVar10;
  iVar12 = iVar10 + (int)param_3[0x12] * piVar4[0x12] * -0x2d42 >> 0xb;
  iVar21 = iVar19 + (int)param_3[10] * piVar4[10] * -0x2731 >> 0xb;
  iVar9 = iVar19 + (int)param_3[10] * piVar4[10] * 0x2731 >> 0xb;
  iVar10 = (int)param_3[3] * piVar4[3] * 0x2000 + 0x400;
  iVar19 = (int)param_3[0x13] * piVar4[0x13] * 0x16a1 + iVar10;
  iVar13 = iVar10 + (int)param_3[0x13] * piVar4[0x13] * -0x2d42 >> 0xb;
  iVar10 = (int)param_3[4] * piVar4[4] * 0x2000 + 0x400;
  iVar22 = iVar19 + (int)param_3[0xb] * piVar4[0xb] * 0x2731 >> 0xb;
  iVar23 = iVar19 + (int)param_3[0xb] * piVar4[0xb] * -0x2731 >> 0xb;
  iVar19 = (int)param_3[0x14] * piVar4[0x14] * 0x16a1 + iVar10;
  iVar14 = iVar10 + (int)param_3[0x14] * piVar4[0x14] * -0x2d42 >> 0xb;
  iVar24 = iVar19 + (int)param_3[0xc] * piVar4[0xc] * -0x2731 >> 0xb;
  iVar10 = iVar19 + (int)param_3[0xc] * piVar4[0xc] * 0x2731 >> 0xb;
  iVar15 = (int)param_3[5] * piVar4[5] * 0x2000 + 0x400;
  iVar19 = (int)param_3[0x15] * piVar4[0x15] * 0x16a1 + iVar15;
  iVar16 = iVar15 + (int)param_3[0x15] * piVar4[0x15] * -0x2d42 >> 0xb;
  iVar17 = ((iVar18 + sVar2 * iVar27 * 0x2731 >> 0xb) + 0x4010) * 0x2000;
  iVar26 = iVar19 + (int)param_3[0xd] * piVar4[0xd] * 0x2731 >> 0xb;
  iVar25 = iVar19 + (int)param_3[0xd] * piVar4[0xd] * -0x2731 >> 0xb;
  puVar5 = (undefined1 *)(*param_4 + param_5);
  iVar19 = iVar10 * 0x16a1 + iVar17;
  iVar17 = iVar17 + iVar10 * -0x2d42;
  iVar10 = iVar9 * 0x2731 + iVar19;
  iVar19 = iVar19 + iVar9 * -0x2731;
  iVar9 = (iVar26 + iVar8) * 0xbb6;
  iVar15 = (iVar8 + iVar22) * 0x2000 + iVar9;
  iVar9 = (iVar26 - iVar22) * 0x2000 + iVar9;
  iVar22 = (iVar8 - iVar26) - iVar22;
  *puVar5 = *(undefined1 *)(((iVar10 + iVar15 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[5] = *(undefined1 *)(((iVar10 - iVar15 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[1] = *(undefined1 *)(((iVar17 + iVar22 * 0x2000 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[4] = *(undefined1 *)(((iVar17 + iVar22 * -0x2000 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[2] = *(undefined1 *)(((iVar9 + iVar19 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[3] = *(undefined1 *)(iVar3 + -0x180 + (iVar19 - iVar9 >> 0x12 & 0x3ffU));
  iVar22 = ((iVar7 + sVar1 * iVar6 * -0x2d42 >> 0xb) + 0x4010) * 0x2000;
  puVar5 = (undefined1 *)(param_4[1] + param_5);
  iVar19 = iVar14 * 0x16a1 + iVar22;
  iVar22 = iVar22 + iVar14 * -0x2d42;
  iVar10 = iVar19 + iVar12 * 0x2731;
  iVar19 = iVar19 + iVar12 * -0x2731;
  iVar6 = (iVar11 + iVar16) * 0xbb6;
  iVar9 = (iVar13 + iVar11) * 0x2000 + iVar6;
  iVar6 = (iVar16 - iVar13) * 0x2000 + iVar6;
  iVar13 = (iVar11 - iVar16) - iVar13;
  *puVar5 = *(undefined1 *)(((iVar10 + iVar9 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[5] = *(undefined1 *)(((iVar10 - iVar9 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[1] = *(undefined1 *)(((iVar22 + iVar13 * 0x2000 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[4] = *(undefined1 *)(((iVar22 + iVar13 * -0x2000 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[2] = *(undefined1 *)(((iVar19 + iVar6 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[3] = *(undefined1 *)(((iVar19 - iVar6 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  iVar27 = ((iVar18 + sVar2 * iVar27 * -0x2731 >> 0xb) + 0x4010) * 0x2000;
  puVar5 = (undefined1 *)(param_4[2] + param_5);
  iVar18 = iVar24 * 0x16a1 + iVar27;
  iVar27 = iVar27 + iVar24 * -0x2d42;
  iVar19 = iVar18 + iVar21 * 0x2731;
  iVar18 = iVar18 + iVar21 * -0x2731;
  iVar10 = (iVar20 + iVar25) * 0xbb6;
  iVar6 = (iVar23 + iVar20) * 0x2000 + iVar10;
  iVar10 = (iVar25 - iVar23) * 0x2000 + iVar10;
  iVar23 = (iVar20 - iVar25) - iVar23;
  *puVar5 = *(undefined1 *)(((iVar19 + iVar6 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[5] = *(undefined1 *)(((iVar19 - iVar6 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[1] = *(undefined1 *)(((iVar27 + iVar23 * 0x2000 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[4] = *(undefined1 *)(((iVar27 + iVar23 * -0x2000 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[2] = *(undefined1 *)(((iVar18 + iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  puVar5[3] = *(undefined1 *)(((iVar18 - iVar10 >> 0x12 & 0x3ffU) - 0x180) + iVar3);
  return;
}




/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_0042f340) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}




void __cdecl FUN_00425f95(void *param_1)

{
  free(param_1);
  return;
}




/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 auStack_14 [2];
  undefined4 uStack_c;
  
  do {
    uStack_c = 0x425fbd;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    uStack_c = 0x425fb0;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    pvVar2 = (void *)FUN_00426c3a();
    return pvVar2;
  }
  FUN_00426bb8(auStack_14);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(auStack_14,(ThrowInfo *)&DAT_0042c7f8);
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
      if (DAT_0042f530 != (void *)0x0) {
        pvVar3 = DAT_0042f530;
        pvVar1 = DAT_0042f530;
      }
      DAT_0042f530 = pvVar1;
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
    DAT_0042f534 = 1;
  }
  ___isa_available_init();
  cVar1 = FUN_00426f78();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00426f78();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00426f78();
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
  
  if (DAT_0042f535 != '\0') {
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
    bVar2 = 0x20 - ((byte)DAT_0042f340 & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar2 | -1 << 0x20 - bVar2) ^ DAT_0042f340;
    DAT_0042f538 = uVar4;
    DAT_0042f53c = uVar4;
    DAT_0042f540 = uVar4;
    DAT_0042f544 = uVar4;
    DAT_0042f548 = uVar4;
    DAT_0042f54c = uVar4;
LAB_00426113:
    DAT_0042f535 = '\x01';
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar4 = initialize_onexit_table(&DAT_0042f538);
    if (uVar4 == 0) {
      uVar4 = initialize_onexit_table(&DAT_0042f544);
      if (uVar4 == 0) goto LAB_00426113;
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
  iVar1 = DAT_0042f530;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0042f530 = 0;
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
  if ((DAT_0042f534 == '\0') || (param_2 == '\0')) {
    FUN_00426f78();
    FUN_00426f78();
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
  
  bVar2 = (byte)DAT_0042f340 & 0x1f;
  if (((DAT_0042f340 ^ DAT_0042f538) >> bVar2 | (DAT_0042f340 ^ DAT_0042f538) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_0042f538,_Func);
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




void __cdecl FUN_00426250(uint param_1)

{
  operator_new(param_1);
  return;
}




undefined4 * __thiscall FUN_00426259(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_00425f95(this);
  }
  return (undefined4 *)this;
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
  
  bVar1 = 0x20 - ((byte)DAT_0042f340 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_0042f340;
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
  puStack_c = &LAB_00428163;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_0042f550,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if (hModule == (HMODULE)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_004263a7;
  }
  pFVar2 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar3 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar4 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((pFVar2 == (FARPROC)0x0) || (pFVar3 == (FARPROC)0x0)) || (pFVar4 == (FARPROC)0x0)) {
    DAT_0042f56c = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_0042f56c == (HANDLE)0x0) {
LAB_004263a7:
      ___scrt_fastfail();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    DAT_0042f56c = (HANDLE)0x0;
    puVar5 = &DAT_0042f568;
    guard_check_icall();
    (*pFVar2)(puVar5);
    _DAT_0042f570 = __crt_fast_encode_pointer<>((uint)pFVar3);
    _DAT_0042f574 = __crt_fast_encode_pointer<>((uint)pFVar4);
  }
  ExceptionList = local_10;
  return;
}




void FUN_004263af(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  if (DAT_0042f56c != (HANDLE)0x0) {
    CloseHandle(DAT_0042f56c);
  }
  return;
}




/* Library Function - Single Match
    __Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void __Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  __Init_thread_notify();
  return;
}




void FUN_004263ef(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  DAT_0042f334 = DAT_0042f334 + 1;
  *param_1 = DAT_0042f334;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_0042f334;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  __Init_thread_notify();
  return;
}




void __cdecl FUN_00426439(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_00426480:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_0042f334;
      goto LAB_00426480;
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
  
  if (DAT_0042f56c == (HANDLE)0x0) {
    uVar2 = DAT_0042f340 ^ _DAT_0042f574;
    bVar1 = (byte)DAT_0042f340 & 0x1f;
    puVar3 = &DAT_0042f568;
    guard_check_icall();
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))(puVar3);
    return;
  }
  SetEvent(DAT_0042f56c);
  ResetEvent(DAT_0042f56c);
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
  
  if (DAT_0042f56c == (HANDLE)0x0) {
    uVar2 = DAT_0042f340 ^ _DAT_0042f570;
    bVar1 = (byte)DAT_0042f340 & 0x1f;
    puVar4 = &DAT_0042f550;
    puVar3 = &DAT_0042f568;
    guard_check_icall();
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))(puVar3,puVar4,param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
    WaitForSingleObjectEx(DAT_0042f56c,param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042f550);
  }
  return;
}




void FUN_0042652d(uint param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0042817e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(param_1);
  FUN_0042656d();
  return;
}




undefined * Catch_All_00426565(void)

{
  return &DAT_0042656b;
}




void FUN_0042656d(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}




/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_0042664c(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0042f52c != 1) {
      if (DAT_0042f52c == 0) {
        DAT_0042f52c = 1;
        iVar4 = initterm_e(&DAT_0042925c,&DAT_0042926c);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00429244,&DAT_00429258);
        DAT_0042f52c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00426fc5();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        uVar8 = 0;
        uVar7 = 2;
        uVar3 = 0;
        guard_check_icall();
        (*pcVar1)(uVar3,uVar7,uVar8);
      }
      piVar5 = (int *)FUN_00426fcb();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      __p___argv();
      __p___argc();
      get_initial_narrow_environment();
      unaff_ESI = FUN_004011c0();
      uVar6 = FUN_00426db0();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_004267bf;
    }
  }
  ___scrt_fastfail();
LAB_004267bf:
                    /* WARNING: Subroutine does not return */
  exit(unaff_ESI);
}




void entry(void)

{
  ___security_init_cookie();
  FUN_0042664c();
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
  _DAT_0042f670 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0042f678 = (undefined4)uVar9;
  _DAT_0042f688 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0042f68c = &stack0x00000004;
  _DAT_0042f5c8 = 0x10001;
  _DAT_0042f578 = 0xc0000409;
  _DAT_0042f57c = 1;
  _DAT_0042f588 = 1;
  DAT_0042f58c = 2;
  _DAT_0042f584 = unaff_retaddr;
  _DAT_0042f654 = in_GS;
  _DAT_0042f658 = in_FS;
  _DAT_0042f65c = in_ES;
  _DAT_0042f660 = in_DS;
  _DAT_0042f664 = unaff_EDI;
  _DAT_0042f668 = unaff_ESI;
  _DAT_0042f66c = unaff_EBX;
  _DAT_0042f674 = uVar3;
  _DAT_0042f67c = unaff_EBP;
  DAT_0042f680 = unaff_retaddr;
  _DAT_0042f684 = in_CS;
  _DAT_0042f690 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_0042a3ec);
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
  _DAT_0042f670 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_0042f678 = (undefined4)uVar9;
  _DAT_0042f688 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0042f68c = &param_1;
  _DAT_0042f578 = 0xc0000409;
  _DAT_0042f57c = 1;
  _DAT_0042f588 = 1;
  DAT_0042f58c = param_1;
  _DAT_0042f584 = unaff_retaddr;
  _DAT_0042f654 = in_GS;
  _DAT_0042f658 = in_FS;
  _DAT_0042f65c = in_ES;
  _DAT_0042f660 = in_DS;
  _DAT_0042f664 = unaff_EDI;
  _DAT_0042f668 = unaff_ESI;
  _DAT_0042f66c = unaff_EBX;
  _DAT_0042f674 = uVar3;
  _DAT_0042f67c = unaff_EBP;
  DAT_0042f680 = unaff_retaddr;
  _DAT_0042f684 = in_CS;
  _DAT_0042f690 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_0042a3ec);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00426a4f) */
/* WARNING: Removing unreachable block (ram,0x00426a14) */
/* WARNING: Removing unreachable block (ram,0x00426ac7) */
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
  
  DAT_0042f894 = 0;
  DAT_0042f344 = DAT_0042f344 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar4 = DAT_0042f344;
  if (BVar5 != 0) {
    DAT_0042f344 = DAT_0042f344 | 2;
    DAT_0042f894 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[3] == 0x6c65746e && piVar1[2] == 0x49656e69) && piVar1[1] == 0x756e6547) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_0042f898 = DAT_0042f898 | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        DAT_0042f898 = DAT_0042f898 | 2;
      }
    }
    if ((uVar7 & 0x100000) != 0) {
      DAT_0042f344 = uVar4 | 6;
      DAT_0042f894 = 2;
      if ((((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_0042f344 = uVar4 | 0xe;
        DAT_0042f894 = 3;
        if ((uVar6 & 0x20) != 0) {
          DAT_0042f344 = uVar4 | 0x2e;
          DAT_0042f894 = 5;
        }
      }
    }
  }
  return 0;
}




exception * __thiscall FUN_00426b6a(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_00426b85(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




exception * __thiscall FUN_00426b9d(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return (exception *)this;
}




undefined4 * __fastcall FUN_00426bb8(undefined4 *param_1)

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




undefined4 * __thiscall FUN_00426c0d(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_00425f95(this);
  }
  return (undefined4 *)this;
}




void FUN_00426c3a(void)

{
  undefined4 local_10 [3];
  
  FUN_00426b85(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0042c7a4);
}




void FUN_00426c57(void)

{
  undefined4 local_10 [3];
  
  FUN_00426bb8(local_10);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_10,(ThrowInfo *)&DAT_0042c7f8);
}




char * __fastcall FUN_00426c74(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}




undefined4 FUN_00426c81(void)

{
  return 1;
}




/* Library Function - Single Match
    ___scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2017 Release */

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0042f354 != 0;
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
  FUN_00426e40();
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
    FUN_00426e40();
  }
  return;
}




uint FUN_00426db0(void)

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




void FUN_00426df3(void)

{
  SetUnhandledExceptionFilter(FUN_00426dff);
  return;
}




undefined4 FUN_00426dff(int *param_1)

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

void FUN_00426e40(void)

{
  _DAT_0042f89c = 0;
  return;
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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0042f340 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}




void __cdecl
FUN_00426eab(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0042f340,__security_check_cookie,param_1,param_2,param_3,param_4);
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
  if ((DAT_0042f340 == 0xbb40e64e) || ((DAT_0042f340 & 0xffff0000) == 0)) {
    DAT_0042f340 = ___get_entropy();
    if (DAT_0042f340 == 0xbb40e64e) {
      DAT_0042f340 = 0xbb40e64f;
    }
    else if ((DAT_0042f340 & 0xffff0000) == 0) {
      DAT_0042f340 = DAT_0042f340 | (DAT_0042f340 | 0x4711) << 0x10;
    }
  }
  DAT_0042f33c = ~DAT_0042f340;
  return;
}




undefined4 FUN_00426f66(void)

{
  return 0x4000;
}




void FUN_00426f6c(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_0042f8a8);
  return;
}




undefined1 FUN_00426f78(void)

{
  return 1;
}




void FUN_00426f7b(void)

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




void FUN_00426f9c(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00402df0();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040f740();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}




bool FUN_00426fb9(void)

{
  return DAT_0042f350 == 0;
}




undefined * FUN_00426fc5(void)

{
  return &DAT_00430124;
}




undefined * FUN_00426fcb(void)

{
  return &DAT_00430120;
}




/* WARNING: Removing unreachable block (ram,0x00426fe1) */
/* WARNING: Removing unreachable block (ram,0x00426fe2) */
/* WARNING: Removing unreachable block (ram,0x00426fe8) */
/* WARNING: Removing unreachable block (ram,0x00426ff2) */
/* WARNING: Removing unreachable block (ram,0x00426ff9) */

void FUN_00426fd1(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x0042700d) */
/* WARNING: Removing unreachable block (ram,0x0042700e) */
/* WARNING: Removing unreachable block (ram,0x00427014) */
/* WARNING: Removing unreachable block (ram,0x0042701e) */
/* WARNING: Removing unreachable block (ram,0x00427025) */

void FUN_00426ffd(void)

{
  return;
}




/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}




/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
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




void Unwind_00427180(void)

{
  FUN_004019f0(&DAT_0042f3c4);
  return;
}




void Unwind_0042718a(void)

{
  FUN_004019f0(&DAT_0042f3dc);
  return;
}




void Unwind_00427194(void)

{
  CSemExclusiveLocal::~CSemExclusiveLocal((CSemExclusiveLocal *)&DAT_0042f3f4);
  return;
}




void Unwind_004271c0(void)

{
  int unaff_EBP;
  
  FUN_00402200((int *)(unaff_EBP + -0x41c));
  return;
}




void Unwind_00427200(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x2028));
  return;
}




void Unwind_0042720b(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x2044));
  return;
}




void Unwind_00427216(void)

{
  int unaff_EBP;
  
  FUN_004021c0((undefined4 *)(unaff_EBP + -0x2048));
  return;
}




void Unwind_00427290(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}




void Unwind_0042729b(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}




void Unwind_004272a6(void)

{
  int unaff_EBP;
  
  CSemExclusiveLocal::~CSemExclusiveLocal
            ((CSemExclusiveLocal *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}




void Unwind_004272d0(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + 8));
  return;
}




void Unwind_00427320(void)

{
  int unaff_EBP;
  
  FUN_00402490(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427328(void)

{
  int unaff_EBP;
  
  CSemExclusiveLocal::~CSemExclusiveLocal((CSemExclusiveLocal *)(*(int *)(unaff_EBP + -0x10) + 0xc))
  ;
  return;
}




void Unwind_00427350(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427358(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x18));
  return;
}




void Unwind_00427380(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427388(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x20));
  return;
}




void Unwind_004273b0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_004273b8(void)

{
  int unaff_EBP;
  
  FUN_004021c0((undefined4 *)(unaff_EBP + -0x20));
  return;
}




void Unwind_004273e0(void)

{
  __Init_thread_abort(&DAT_004300d8);
  return;
}




void Unwind_004273fb(void)

{
  int unaff_EBP;
  
  FUN_00404c20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427403(void)

{
  int unaff_EBP;
  
  FUN_00404920(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_0042740b(void)

{
  FUN_00402f50(&DAT_004300e4);
  return;
}




void Unwind_00427435(void)

{
  FUN_00402f50(&DAT_004300e4);
  return;
}




void Unwind_0042743f(void)

{
  int unaff_EBP;
  
  FUN_00404920(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427447(void)

{
  int unaff_EBP;
  
  FUN_00404c20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004274b0(void)

{
  int unaff_EBP;
  
  FUN_00404920(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004274b8(void)

{
  int unaff_EBP;
  
  FUN_00404c20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004274e0(void)

{
  int unaff_EBP;
  
  FUN_00425f95(*(void **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004274f2(void)

{
  int unaff_EBP;
  
  FUN_00402490(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004274fa(void)

{
  int unaff_EBP;
  
  CSemExclusiveLocal::~CSemExclusiveLocal
            ((CSemExclusiveLocal *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}




void Unwind_00427505(void)

{
  int unaff_EBP;
  
  FUN_00425f95(*(void **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427517(void)

{
  int unaff_EBP;
  
  FUN_00402490(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_0042751f(void)

{
  int unaff_EBP;
  
  FUN_00425f95(*(void **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427531(void)

{
  int unaff_EBP;
  
  FUN_00402490(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427539(void)

{
  int unaff_EBP;
  
  CSemExclusiveLocal::~CSemExclusiveLocal((CSemExclusiveLocal *)(*(int *)(unaff_EBP + -0x10) + 0xc))
  ;
  return;
}




void Unwind_00427560(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427568(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x1c));
  return;
}




void Unwind_00427570(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x1c));
  return;
}




void Unwind_004275a0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_004275a8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x54));
  return;
}




void Unwind_004275b0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x3c));
  return;
}




void Unwind_004275b8(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x60));
  return;
}




void Unwind_004275f0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_004275f8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427600(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427608(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427610(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427618(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427620(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427628(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427630(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427638(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427640(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427648(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427650(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427658(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427660(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427668(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427670(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427678(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427680(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427688(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427690(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427698(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_004276a0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_004276a8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_004276b0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_004276b8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_004276c0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_004276c8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427700(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427708(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427740(void)

{
  int unaff_EBP;
  
  FUN_00404c20(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_004277b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_004019f0(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}




void Unwind_00427950(void)

{
  int unaff_EBP;
  
  FUN_00402490(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427958(void)

{
  int unaff_EBP;
  
  CSemExclusiveLocal::~CSemExclusiveLocal
            ((CSemExclusiveLocal *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}




void Unwind_00427980(void)

{
  int unaff_EBP;
  
  FUN_00407dd0((undefined4 *)(unaff_EBP + -0x24));
  return;
}




void Unwind_00427988(void)

{
  int unaff_EBP;
  
  FUN_00407c20((int *)(unaff_EBP + -0x24));
  return;
}




void Unwind_00427990(void)

{
  int unaff_EBP;
  
  FUN_00406e20((int *)(unaff_EBP + -0x24));
  return;
}




void Unwind_00427998(void)

{
  int unaff_EBP;
  
  FUN_00407d50((undefined4 *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_004279a0(void)

{
  int unaff_EBP;
  
  FUN_00407bc0((int *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_004279a8(void)

{
  int unaff_EBP;
  
  FUN_00406ed0((int *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_004279b0(void)

{
  int unaff_EBP;
  
  FUN_00407bc0((int *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_004279b8(void)

{
  int unaff_EBP;
  
  FUN_00407d50((undefined4 *)(unaff_EBP + -0x2c));
  return;
}




void Unwind_004279c0(void)

{
  int unaff_EBP;
  
  FUN_00407c20((int *)(unaff_EBP + -0x24));
  return;
}




void Unwind_004279c8(void)

{
  int unaff_EBP;
  
  FUN_00407dd0((undefined4 *)(unaff_EBP + -0x24));
  return;
}




void Unwind_004279f0(void)

{
  int unaff_EBP;
  
  FUN_00407c20(*(int **)(unaff_EBP + -0x14));
  return;
}




void Unwind_004279f8(void)

{
  int unaff_EBP;
  
  FUN_00407dd0(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}




void Unwind_00427a20(void)

{
  int unaff_EBP;
  
  FUN_00407bc0(*(int **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427a28(void)

{
  int unaff_EBP;
  
  FUN_00407d50(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427a50(void)

{
  __Init_thread_abort(&DAT_00430110);
  return;
}




void Unwind_00427a5c(void)

{
  int unaff_EBP;
  
  FUN_00408830((undefined4 *)(unaff_EBP + -0x668));
  return;
}




void Unwind_00427a67(void)

{
  __Init_thread_abort(&DAT_00430110);
  return;
}




void Unwind_00427a73(void)

{
  int unaff_EBP;
  
  FUN_00408830((undefined4 *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427ad0(void)

{
  int unaff_EBP;
  
  FUN_00407d50(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427b00(void)

{
  int unaff_EBP;
  
  FUN_00407dd0(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}




void Unwind_00427bf0(void)

{
  int unaff_EBP;
  
  FUN_00402490(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}




void Unwind_00427c20(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427c50(void)

{
  __Init_thread_abort(&DAT_004300ec);
  return;
}




void Unwind_00427c80(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 0x20));
  return;
}




void Unwind_00427c88(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427cb0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x27c));
  return;
}




void Unwind_00427cbb(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x264));
  return;
}




void Unwind_00427cc6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2e0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2e0) = *(uint *)(unaff_EBP + -0x2e0) & 0xfffffffe;
    FUN_004019f0((int *)(unaff_EBP + -0x24c));
    return;
  }
  return;
}




void Unwind_00427ce8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x294));
  return;
}




void Unwind_00427cf3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2e0) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2e0) = *(uint *)(unaff_EBP + -0x2e0) & 0xfffffffd;
    FUN_004019f0((int *)(unaff_EBP + -0x234));
    return;
  }
  return;
}




void Unwind_00427d15(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x294));
  return;
}




void Unwind_00427d20(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x2dc));
  return;
}




void Unwind_00427d2b(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2e0) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x2e0) = *(uint *)(unaff_EBP + -0x2e0) & 0xfffffffb;
    FUN_004019f0((int *)(unaff_EBP + -0x264));
    return;
  }
  return;
}




void Unwind_00427d4d(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x2c4));
  return;
}




void Unwind_00427d58(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2e0) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x2e0) = *(uint *)(unaff_EBP + -0x2e0) & 0xfffffff7;
    FUN_004019f0((int *)(unaff_EBP + -0x234));
    return;
  }
  return;
}




void Unwind_00427d7a(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x2ac));
  return;
}




void Unwind_00427d85(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2e0) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x2e0) = *(uint *)(unaff_EBP + -0x2e0) & 0xffffffef;
    FUN_004019f0((int *)(unaff_EBP + -0x24c));
    return;
  }
  return;
}




void Unwind_00427da7(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x2e4));
  return;
}




void Unwind_00427db2(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2e0) & 0x20) != 0) {
    *(uint *)(unaff_EBP + -0x2e0) = *(uint *)(unaff_EBP + -0x2e0) & 0xffffffdf;
    FUN_004019f0((int *)(unaff_EBP + -0x234));
    return;
  }
  return;
}




void Unwind_00427dd4(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x2e8));
  return;
}




void Unwind_00427e10(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 0xc));
  return;
}




void Unwind_00427e18(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    FUN_004019f0(*(int **)(unaff_EBP + -0x40));
    return;
  }
  return;
}




void Unwind_00427e60(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 8));
  return;
}




void Unwind_00427e68(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -100));
  return;
}




void Unwind_00427e70(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x48));
  return;
}




void Unwind_00427e78(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x40));
  return;
}




void Unwind_00427e80(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -100));
  return;
}




void Unwind_00427e88(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -100));
  return;
}




void Unwind_00427e90(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x48));
  return;
}




void Unwind_00427e98(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x48));
  return;
}




void Unwind_00427ea0(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x48));
  return;
}




void Unwind_00427ea8(void)

{
  int unaff_EBP;
  
  FUN_004019f0(*(int **)(unaff_EBP + -0x48));
  return;
}




void Unwind_00427eb0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x28));
  return;
}




void Unwind_00427eb8(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -100));
  return;
}




void Unwind_00427ec0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -100));
  return;
}




void Unwind_00427ef0(void)

{
  int unaff_EBP;
  
  FUN_0040aed0((int *)(unaff_EBP + -0x2a0));
  return;
}




void Unwind_00427efb(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x288));
  return;
}




void Unwind_00427f06(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x260));
  return;
}




void Unwind_00427f11(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x248));
  return;
}




void Unwind_00427f1c(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x230));
  return;
}




void Unwind_00427f27(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x230));
  return;
}




void Unwind_00427f32(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x248));
  return;
}




void Unwind_00427f3d(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x260));
  return;
}




void Unwind_00427f48(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x230));
  return;
}




void Unwind_00427f53(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x248));
  return;
}




void Unwind_00427f5e(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x260));
  return;
}




void Unwind_00427f69(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x230));
  return;
}




void Unwind_00427f74(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x248));
  return;
}




void Unwind_00427f7f(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x260));
  return;
}




void Unwind_00427fc0(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + 0xc));
  return;
}




void Unwind_00427fc8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x306c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x306c) = *(uint *)(unaff_EBP + -0x306c) & 0xfffffffe;
    FUN_004019f0(*(int **)(unaff_EBP + -0x3070));
    return;
  }
  return;
}




void Unwind_00427fea(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x3048));
  return;
}




void Unwind_00427ff5(void)

{
  int unaff_EBP;
  
  FUN_004019f0((int *)(unaff_EBP + -0x3068));
  return;
}




void Unwind_00428050(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_004019f0(*(int **)(unaff_EBP + -0x14));
    return;
  }
  return;
}




void Unwind_00428090(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_004019f0(*(int **)(unaff_EBP + -0x14));
    return;
  }
  return;
}




void Unwind_004280d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x18) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
    FUN_004019f0(*(int **)(unaff_EBP + -0x1c));
    return;
  }
  return;
}




void Unwind_00428110(void)

{
  __Init_thread_abort(&DAT_00430110);
  return;
}




void Unwind_00428140(void)

{
  int unaff_EBP;
  
  FUN_00408830((undefined4 *)(unaff_EBP + -0x28));
  return;
}




void FUN_004281b0(void)

{
  void *pvVar1;
  
  if (7 < DAT_0042f420) {
    pvVar1 = DAT_0042f40c;
    if ((0xfff < DAT_0042f420 * 2 + 2) &&
       (pvVar1 = *(void **)((int)DAT_0042f40c + -4),
       0x1f < (uint)((int)DAT_0042f40c + (-4 - (int)pvVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x00428208. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_00425f95(pvVar1);
  }
  DAT_0042f41c = 0;
  DAT_0042f420 = 7;
  DAT_0042f40c = (void *)((uint)DAT_0042f40c & 0xffff0000);
  return;
}




void FUN_00428210(void)

{
  void *pvVar1;
  
  if (7 < DAT_0042f438) {
    pvVar1 = DAT_0042f424;
    if ((0xfff < DAT_0042f438 * 2 + 2) &&
       (pvVar1 = *(void **)((int)DAT_0042f424 + -4),
       0x1f < (uint)((int)DAT_0042f424 + (-4 - (int)pvVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x00428268. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
      _invalid_parameter_noinfo_noreturn();
      return;
    }
    FUN_00425f95(pvVar1);
  }
  DAT_0042f434 = 0;
  DAT_0042f438 = 7;
  DAT_0042f424 = (void *)((uint)DAT_0042f424 & 0xffff0000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428270(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00427459;
  local_10 = ExceptionList;
  uVar4 = DAT_0042f340 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  piVar6 = (int *)*DAT_004300dc;
  piVar5 = DAT_004300dc;
  if (piVar6 != DAT_004300dc) {
    do {
      if ((undefined4 *)piVar6[5] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[5])(1,uVar4);
        piVar5 = DAT_004300dc;
      }
      piVar2 = (int *)piVar6[2];
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xd);
        piVar6 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar6[1] + 0xd);
        piVar3 = (int *)piVar6[1];
        piVar2 = piVar6;
        while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0xd);
          piVar3 = (int *)piVar6[1];
          piVar2 = piVar6;
        }
      }
    } while (piVar6 != piVar5);
  }
  cVar1 = *(char *)(piVar5[1] + 0xd);
  piVar6 = (int *)piVar5[1];
  piVar2 = piVar5;
  while (cVar1 == '\0') {
    FUN_00404d40((int *)piVar6[2]);
    piVar2 = (int *)*piVar6;
    FUN_00425f95(piVar6);
    cVar1 = *(char *)((int)piVar2 + 0xd);
    piVar6 = piVar2;
    piVar2 = DAT_004300dc;
  }
  piVar2[1] = (int)piVar5;
  *DAT_004300dc = (int)piVar5;
  DAT_004300dc[2] = (int)piVar5;
  piVar6 = DAT_004300e4;
  _DAT_004300e0 = 0;
  FUN_00404c60((int *)DAT_004300e4[1]);
  DAT_004300e4[1] = (int)piVar6;
  *DAT_004300e4 = (int)piVar6;
  DAT_004300e4[2] = (int)piVar6;
  _DAT_004300e8 = 0;
  local_8._1_3_ = (uint3)((uint)local_8 >> 8);
  local_14 = &DAT_004300e4;
  local_8._0_1_ = 3;
  FUN_00404d80(&DAT_004300e4,&local_18,(int *)*DAT_004300e4,DAT_004300e4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00425f95(DAT_004300e4);
  local_8 = 5;
  FUN_00404990();
  local_8 = 0xffffffff;
  FUN_00425f95(DAT_004300dc);
  ExceptionList = local_10;
  return;
}



