
longlong * FUN_140001000(longlong *param_1)

{
  *param_1 = -1;
  param_1[1] = -1;
  FUN_1400010a0(param_1);
  return param_1;
}




void FUN_140001040(longlong *param_1)

{
  if (*param_1 != -1) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != -1) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




void FUN_1400010a0(longlong *param_1)

{
  int iVar1;
  HANDLE pvVar2;
  longlong lVar3;
  char *pcVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_898 [32];
  WCHAR local_848 [264];
  WCHAR local_638 [264];
  char local_428 [1040];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_898;
  pcVar4 = local_428;
  for (lVar3 = 0x410; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  pWVar5 = local_848;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_638;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  iVar1 = FUN_140004650(L"AliyunConfig.ini",local_428,local_848);
  if ((iVar1 != 0) && (iVar1 = FUN_140004650(L"DataFile.ini",local_428,local_638), iVar1 != 0)) {
    pvVar2 = CreateFileW(local_848,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    *param_1 = (longlong)pvVar2;
    if (*param_1 != -1) {
      pvVar2 = CreateFileW(local_638,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      param_1[1] = (longlong)pvVar2;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_898);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_140001220(undefined8 param_1,undefined8 param_2,uint *param_3,LPCWSTR param_4)

{
  uint uVar1;
  undefined1 auStack_14e8 [32];
  undefined4 local_14c8;
  undefined8 local_14c0;
  longlong local_14b8 [660];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14000122a;
  local_14c0 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_14e8;
  local_14c8 = 1;
  FUN_1400014c0(local_14b8);
  uVar1 = FUN_1400015a0(local_14b8,param_2,param_3,param_4);
  if (uVar1 == 0) {
    FUN_140001510(local_14b8);
  }
  else {
    local_14c8 = FUN_1400016f0(local_14b8,param_2,param_3,param_4);
    FUN_140001510(local_14b8);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_14e8);
  return;
}




void FUN_1400012b0(undefined8 param_1,undefined8 param_2,uint *param_3,LPCWSTR param_4)

{
  undefined1 uVar1;
  undefined7 extraout_var;
  longlong lVar2;
  longlong *plVar3;
  WCHAR *pWVar4;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  longlong local_240 [3];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_268;
  local_248 = 0;
  pWVar4 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  uVar1 = FUN_140004330((undefined1 (*) [16])local_228);
  if ((int)CONCAT71(extraout_var,uVar1) != 0) {
    SetCurrentDirectoryW(local_228);
  }
  plVar3 = local_240;
  FUN_140001000(plVar3);
  local_248 = FUN_140001220(plVar3,param_2,param_3,param_4);
  FUN_140001040(local_240);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




undefined8 FUN_140001350(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_140001360(void)

{
  return 0x7fffffffffffffff;
}




void FUN_140001370(void)

{
  return;
}




void FUN_140001380(void)

{
  return;
}




void FUN_140001390(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_1400013b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_2 = *param_2 + 0x27;
  lVar1 = *(longlong *)(*param_1 + -8);
  uVar2 = *param_1 - lVar1;
  if ((uVar2 < 8) || (0x27 < uVar2)) {
    FUN_140013a64();
  }
  *param_1 = lVar1;
  return;
}




undefined8 FUN_140001450(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_140001460(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}




void FUN_140001480(longlong *param_1)

{
  if (*param_1 != 0) {
    FID_conflict__InternalDeleteHelper<class_Concurrency::details::WorkQueue>((LPVOID)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1400014c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = param_1 + 3;
  for (lVar1 = 0x1480; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  return param_1;
}




void FUN_140001510(longlong *param_1)

{
  if (*param_1 != 0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}




uint FUN_1400015a0(longlong *param_1,undefined8 param_2,uint *param_3,LPCWSTR param_4)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  uint local_18;
  uint local_14;
  ulonglong local_10;
  
  local_14 = 0;
  pwVar3 = (wchar_t *)0x1;
  iVar1 = FUN_1400050c0((wchar_t *)(param_1 + 3),1);
  if (iVar1 != 0) {
    lVar2 = FUN_140004ba0();
    *param_1 = lVar2;
    lVar2 = FUN_140004bc0();
    param_1[1] = lVar2;
    lVar2 = FUN_140004be0();
    param_1[2] = lVar2;
    if (((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) {
      local_18 = *(uint *)(param_1 + 0x20e);
      lVar2 = FUN_140001e00();
      local_10 = lVar2 - param_1[0x210];
      if (71999999999 < local_10) {
        pwVar3 = (wchar_t *)(param_1 + 0x211);
        param_3 = &local_18;
        iVar1 = FUN_140004890((wchar_t *)(param_1 + 0x1cd),pwVar3,param_3);
        if (iVar1 != 0) {
          *(uint *)(param_1 + 0x20e) = local_18;
          lVar2 = FUN_140001e00();
          param_1[0x210] = lVar2;
          pwVar3 = (wchar_t *)param_1[0x210];
          FUN_140005120(local_18,pwVar3,param_3,param_4);
        }
      }
      if (local_18 == 0) {
        FUN_140001d70(param_1,pwVar3,param_3,param_4);
      }
      local_14 = local_18;
    }
  }
  return local_14;
}




void FUN_1400016f0(longlong *param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  int iVar1;
  undefined1 auStack_268 [32];
  int local_248;
  int local_244;
  undefined4 local_240;
  undefined8 local_238;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_238 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_268;
  local_240 = 0;
  local_248 = 0;
  iVar1 = FUN_140001c50(param_1);
  if (iVar1 != 0) {
    FUN_14000e400(local_228);
    do {
      FUN_1400017f0(param_1,local_228,&local_248,param_4);
      if (local_248 != 0) break;
      local_244 = FUN_140001ca0(param_1,*(int *)((longlong)param_1 + 0x107c) * 60000);
      if (local_244 == 1) {
        FUN_140004c00();
        break;
      }
      if (local_244 == 2) {
        local_248 = 1;
      }
    } while (local_244 != 4);
    FUN_14000e460((longlong)local_228);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




void FUN_1400017f0(undefined8 *param_1,wchar_t *param_2,undefined4 *param_3,LPCWSTR param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStackY_148 [32];
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  vector<struct_std::pair<wchar_t*___ptr64,wchar_t*___ptr64>,class_std::allocator<struct_std::pair<wchar_t*___ptr64,wchar_t*___ptr64>_>_>
  local_98 [24];
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_140032008 ^ (ulonglong)auStackY_148;
  do {
    iVar2 = FUN_140001ca0(param_1,0);
    if (iVar2 == 1) {
      FUN_140004c00();
      *param_3 = 1;
LAB_140001c2d:
      __security_check_cookie(local_10 ^ (ulonglong)auStackY_148);
      return;
    }
    if (iVar2 == 2) {
      *param_3 = 1;
    }
    plVar5 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x20f);
    FUN_14000e730(param_2,(longlong)*(int *)((longlong)param_1 + 0x1074),plVar5,param_4);
    local_108 = 0;
    local_e0 = FUN_14000e5b0(param_2,&local_108,plVar5,param_4);
    FUN_140001460(&local_e8,local_108);
    if ((local_e0 == 0) || (local_108 == 0)) {
      FUN_140001480(&local_e8);
      goto LAB_140001c2d;
    }
    bVar1 = false;
    uVar3 = FUN_140001450(local_108);
    FUN_140002030(local_80,uVar3);
    local_d8 = local_80;
    local_100 = (longlong *)FUN_140001e80(local_d8);
    local_c8 = (longlong *)FUN_140001e60(local_d8);
    for (; local_100 != local_c8; local_100 = local_100 + 2) {
      local_d0 = local_100;
      if (*local_100 != 0) {
        basic_string<>(local_30,(wchar_t *)*local_100);
        local_c0 = FID_conflict_begin(local_30,&local_60);
        local_b8 = FID_conflict_end(local_30,&local_58);
        puVar4 = FID_conflict_begin(local_30,&local_50);
        param_4 = (LPCWSTR)*local_c0;
        plVar5 = (longlong *)*local_b8;
        FUN_140002c90(&local_48,*puVar4,plVar5,param_4,&LAB_140013eb8);
        iVar2 = FUN_140002100(local_30,L"VID");
        if (iVar2 == 0) {
          bVar1 = true;
          FUN_140002250(local_30);
          break;
        }
        FUN_140002250(local_30);
      }
    }
    puVar4 = local_80;
    FUN_140002030((undefined8 *)local_98,puVar4);
    if (!bVar1) {
      local_b0 = param_1 + 0x252;
      local_f8 = -1;
      do {
        local_f8 = local_f8 + 1;
      } while (*(short *)((longlong)local_b0 + local_f8 * 2) != 0);
      if (local_f8 == 0) {
        puVar4 = (undefined8 *)0x104;
        FUN_140005180((wchar_t *)(param_1 + 0x252),0x104);
      }
      local_a8 = param_1 + 0x252;
      local_f0 = -1;
      do {
        local_f0 = local_f0 + 1;
      } while (*(short *)((longlong)local_a8 + local_f0 * 2) != 0);
      if (local_f0 != 0) {
        local_a0 = &DAT_14002b3a8;
        plVar5 = param_1 + 0x252;
        make_pair<>(local_40,&local_a0,plVar5);
        puVar4 = local_40;
        FUN_140001ea0(local_98,puVar4);
      }
    }
    bVar1 = SendLogToCloud(local_98);
    if (!bVar1) {
      FUN_140002000(local_98);
      FUN_140002000(local_80);
      FUN_140001480(&local_e8);
      goto LAB_140001c2d;
    }
    iVar2 = FUN_14000e670(param_2,puVar4,plVar5,param_4);
    if (iVar2 == 0) {
      FUN_140002000(local_98);
      FUN_140002000(local_80);
      FUN_140001480(&local_e8);
      goto LAB_140001c2d;
    }
    FUN_140002000(local_98);
    FUN_140002000(local_80);
    FUN_140001480(&local_e8);
  } while( true );
}




undefined4 FUN_140001c50(longlong *param_1)

{
  undefined4 local_18;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}




void FUN_140001ca0(undefined8 *param_1,DWORD param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  DWORD local_34;
  DWORD local_30;
  HANDLE local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140032008 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_28 = (HANDLE)*param_1;
  local_20 = param_1[1];
  local_18 = param_1[2];
  local_34 = WaitForMultipleObjects(3,&local_28,0,param_2);
  if (local_34 == 0) {
    local_38 = 1;
  }
  else if (local_34 == 1) {
    local_38 = 2;
  }
  else if (local_34 == 2) {
    local_38 = 3;
  }
  else if (local_34 == 0x102) {
    local_38 = 4;
  }
  local_30 = local_34;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




void FUN_140001d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  int iVar1;
  undefined1 auStack_258 [32];
  int local_238;
  undefined8 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_230 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  FUN_14000e400(local_228);
  local_238 = 0;
  while( true ) {
    iVar1 = FUN_14000e670(local_228,param_2,param_3,param_4);
    if ((iVar1 == 0) || (19999 < local_238)) break;
    local_238 = local_238 + 1;
  }
  FUN_14000e460((longlong)local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




undefined8 FUN_140001e00(void)

{
  longlong lVar1;
  _FILETIME *p_Var2;
  undefined1 *puVar3;
  undefined1 auStack_14 [4];
  _FILETIME local_10;
  
  p_Var2 = &local_10;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&p_Var2->dwLowDateTime = 0;
    p_Var2 = (_FILETIME *)((longlong)&p_Var2->dwLowDateTime + 1);
  }
  GetSystemTimeAsFileTime(&local_10);
  puVar3 = auStack_14;
  for (lVar1 = 4; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return CONCAT44(local_10.dwHighDateTime,local_10.dwLowDateTime);
}




undefined8 FUN_140001e60(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140002410(param_1);
  return *puVar1;
}




undefined8 FUN_140001e80(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140002430(param_1);
  return *puVar1;
}




void FUN_140001ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_140001ed0(param_1,param_2);
  return;
}




void FUN_140001ed0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_140002620(param_1);
  if (bVar1) {
    uVar2 = FUN_140001450(param_2);
    FUN_140001f40(param_1,uVar2);
  }
  else {
    uVar2 = FUN_140001450(param_2);
    plVar3 = (longlong *)FUN_140002410(param_1);
    FUN_140002e90(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_140001f40(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  _Container_proxy *p_Var3;
  allocator<struct_std::_Container_proxy> *paVar4;
  longlong *plVar5;
  
  p_Var1 = (_Container_proxy *)FUN_140001450(param_2);
  puVar2 = (undefined8 *)FUN_140002410(param_1);
  p_Var3 = (_Container_proxy *)FUN_140001450(*puVar2);
  paVar4 = (allocator<struct_std::_Container_proxy> *)FUN_1400023b0(param_1);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(paVar4,p_Var3,p_Var1);
  FUN_140002410(param_1);
  FUN_140002410(param_1);
  FUN_140002450();
  FUN_140002410(param_1);
  plVar5 = (longlong *)FUN_140002410(param_1);
  *plVar5 = *plVar5 + 0x10;
  return;
}




void FUN_140002000(undefined8 param_1)

{
  FUN_140002460(param_1);
  return;
}




undefined8 * FUN_140002030(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1400023b0(param_2);
  uVar1 = select_on_container_copy_construction(local_38);
  FUN_1400030e0(param_1,uVar1);
  uVar2 = FUN_140002670(param_2);
  uVar2 = FUN_140002530(param_1,uVar2);
  if ((uVar2 & 0xff) != 0) {
    local_30 = (undefined8 *)FUN_140002430(param_1);
    local_28 = (undefined8 *)FUN_140002410(param_2);
    puVar3 = (undefined8 *)FUN_140002430(param_2);
    local_20 = FUN_140003120(param_1,*puVar3,*local_28,*local_30);
    puVar3 = (undefined8 *)FUN_140002410(param_1);
    *puVar3 = local_20;
  }
  return param_1;
}




void FUN_140002100(undefined8 param_1,wchar_t *param_2)

{
  undefined8 *puVar1;
  __uint64 _Var2;
  wchar_t *pwVar3;
  
  puVar1 = (undefined8 *)FUN_1400023b0(param_1);
  _Var2 = std::_WChar_traits<wchar_t>::length(param_2);
  pwVar3 = (wchar_t *)Myptr(puVar1);
  FUN_140003160(pwVar3,puVar1[2],param_2,_Var2);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::end(void) __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::end(void) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * FID_conflict_end(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_1400023b0(param_1);
  puVar2 = (undefined8 *)FUN_140001450(uVar1);
  puVar3 = Myptr(puVar2);
  lVar4 = FUN_140001450(puVar3);
  FUN_140002330(param_2,lVar4 + puVar2[2] * 2);
  return param_2;
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
  undefined8 *puVar2;
  
  uVar1 = FUN_1400023b0(param_1);
  puVar2 = (undefined8 *)FUN_140001450(uVar1);
  puVar2 = Myptr(puVar2);
  uVar1 = FUN_140001450(puVar2);
  FUN_140002330(param_2,uVar1);
  return param_2;
}




void FUN_140002250(undefined8 param_1)

{
  FID_conflict__Tidy_deallocate(param_1);
  FUN_1400022d0();
  return;
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
  FUN_1400023d0((longlong)param_1);
  FID_conflict__Tidy_init(param_1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
  return param_1;
}




void FUN_1400022d0(void)

{
  FUN_1400022f0();
  return;
}




void FUN_1400022f0(void)

{
  FUN_140002310();
  return;
}




void FUN_140002310(void)

{
  FUN_140001370();
  return;
}




undefined8 * FUN_140002330(undefined8 *param_1,undefined8 param_2)

{
  FUN_140002860(param_1,param_2);
  return param_1;
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
    local_18 = (undefined8 *)FUN_140001450(*param_1);
  }
  return local_18;
}




void FUN_1400023b0(undefined8 param_1)

{
  FUN_140001450(param_1);
  return;
}




longlong FUN_1400023d0(longlong param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
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




longlong FUN_140002410(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1400023b0(param_1);
  return lVar1 + 8;
}




void FUN_140002430(undefined8 param_1)

{
  FUN_1400023b0(param_1);
  return;
}




void FUN_140002450(void)

{
  return;
}




void FUN_140002460(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1400028d0(param_1);
  plVar1 = (longlong *)FUN_140002430(param_1);
  if (*plVar1 != 0) {
    FUN_140002410(param_1);
    FUN_140002430(param_1);
    FUN_140002930(param_1);
    lVar2 = FUN_140002970(param_1);
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    uVar4 = FUN_1400023b0(param_1);
    FUN_140002a80(uVar4,(LPVOID)*puVar3,lVar2);
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_140002410(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_1400028f0(param_1);
    *puVar3 = 0;
  }
  return;
}




ulonglong FUN_140002530(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  puVar2 = (undefined8 *)FUN_140002430(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_140002410(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_1400028f0(param_1);
  *puVar2 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  else {
    _Var4 = FUN_1400029b0(param_1);
    if (_Var4 < param_2) {
      FUN_140002910();
    }
    this = (allocator<struct_std::_Container_proxy> *)FUN_1400023b0(param_1);
    p_Var5 = std::allocator<struct_std::_Container_proxy>::allocate(this,param_2);
    puVar2 = (undefined8 *)FUN_140002430(param_1);
    *puVar2 = p_Var5;
    puVar2 = (undefined8 *)FUN_140002430(param_1);
    puVar6 = (undefined8 *)FUN_140002410(param_1);
    *puVar6 = *puVar2;
    plVar7 = (longlong *)FUN_140002430(param_1);
    lVar1 = *plVar7;
    plVar7 = (longlong *)FUN_1400028f0(param_1);
    *plVar7 = param_2 * 0x10 + lVar1;
    uVar3 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  return uVar3;
}




bool FUN_140002620(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400028f0(param_1);
  plVar2 = (longlong *)FUN_140002410(param_1);
  return *plVar1 != *plVar2;
}




longlong FUN_140002670(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_140002410(param_1);
  plVar2 = (longlong *)FUN_140002430(param_1);
  return *plVar1 - *plVar2 >> 4;
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
  LPVOID local_10;
  
  FUN_1400028d0(param_1);
  local_20 = (undefined8 *)FUN_1400023b0(param_1);
  bVar1 = Large_string_engaged((longlong)local_20);
  if (bVar1) {
    local_10 = (LPVOID)*local_20;
    local_18 = FUN_1400023b0(param_1);
    FUN_140001450(local_20);
    FUN_140001380();
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
  
  local_10 = (undefined2 *)FUN_1400023b0(param_1);
  *(undefined8 *)(local_10 + 8) = 0;
  *(undefined8 *)(local_10 + 0xc) = 7;
  local_18[0] = 0;
  assign(local_10,local_18);
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
  uVar2 = FUN_140001450(_Var1);
  pbVar3 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FID_conflict_assign(this,(undefined8 *)param_1,uVar2);
  return pbVar3;
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




undefined8 * FUN_140002860(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_140001380();
  return param_1;
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




void FUN_1400028d0(undefined8 param_1)

{
  FUN_1400023b0(param_1);
  FUN_140001370();
  return;
}




longlong FUN_1400028f0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1400023b0(param_1);
  return lVar1 + 0x10;
}




void FUN_140002910(void)

{
  FUN_14000fb10(0x14002d410);
  return;
}




void FUN_140002930(undefined8 param_1)

{
  FUN_1400023b0(param_1);
  FUN_140003210();
  return;
}




longlong FUN_140002970(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400028f0(param_1);
  plVar2 = (longlong *)FUN_140002430(param_1);
  return *plVar1 - *plVar2 >> 4;
}




__uint64 FUN_1400029b0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_1400023b0(param_1);
  local_18 = FUN_140002c20();
  local_10[0] = FUN_140001360();
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




void FUN_140002a80(undefined8 param_1,LPVOID param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x10);
  return;
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

undefined8 FID_conflict_assign(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_28 [2];
  undefined2 local_26 [3];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = (undefined8 *)FUN_1400023b0(param_1);
  if ((ulonglong)local_20[3] < param_3) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = _Reallocate_for<>(param_1,param_3,local_28[0],(undefined1 *)param_2);
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




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<unsigned short>::deallocate(unsigned short * __ptr64
   const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<wchar_t>::deallocate(wchar_t * __ptr64 const,unsigned
   __int64) __ptr64
   
   Library: Visual Studio 2017 Release */

void deallocate(undefined8 param_1,LPVOID param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 << 1);
  return;
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




undefined8 FUN_140002c20(void)

{
  return 0xfffffffffffffff;
}




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __ptr64 __cdecl std::_WChar_traits<unsigned
   short>::move(unsigned short * __ptr64 const,unsigned short const * __ptr64 const,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::_WChar_traits<wchar_t>::move(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void move(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  FUN_140004110(param_1,param_2,param_3);
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
  FUN_1400040e0(param_1,param_2,param_3);
  return;
}




undefined8 *
FUN_140002c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined2 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined2 *local_28;
  undefined2 *local_20;
  undefined2 *local_18 [3];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
            ((shared_ptr<class___ExceptionPtr> *)&local_res10,(__ExceptionPtr *)&local_res18);
  local_28 = (undefined2 *)FUN_140002d60(&local_res10);
  local_18[0] = (undefined2 *)FUN_140002d60(&local_res18);
  FUN_140002d80((longlong *)&local_28,(longlong *)local_18);
  local_20 = (undefined2 *)FUN_140002db0(&local_res20);
  for (; local_28 != local_18[0]; local_28 = local_28 + 1) {
    uVar1 = (*(code *)param_5)(*local_28);
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  FUN_140003980(&local_res20,&local_20);
  *param_1 = local_res20;
  return param_1;
}




void FUN_140002d60(undefined8 *param_1)

{
  FUN_1400034b0(param_1);
  return;
}




void FUN_140002d80(longlong *param_1,longlong *param_2)

{
  FUN_140003950(param_1,param_2);
  return;
}




void FUN_140002db0(undefined8 *param_1)

{
  FUN_140001380();
  FUN_1400034b0(param_1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    struct std::pair<double,double> __cdecl std::make_pair<double,double & __ptr64>(double &&
   __ptr64,double & __ptr64)
    struct std::pair<long double,long double> __cdecl std::make_pair<long double,long double &
   __ptr64>(long double && __ptr64,long double & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

undefined8 * make_pair<>(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140001450(param_3);
  uVar2 = FUN_140001450(param_2);
  FUN_1400039b0(param_1,uVar2,uVar1);
  return param_1;
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
  
  puVar1 = (undefined1 *)FUN_140001350(0x10,param_2);
  puVar2 = (undefined1 *)FUN_140001450(param_3);
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}




longlong FUN_140002e90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  allocator<struct_std::_Container_proxy> *this;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  _Container_proxy *p_Var6;
  _Container_proxy *p_Var7;
  _Container_proxy *p_Var8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  plVar1 = (longlong *)FUN_140002430(param_1);
  lVar2 = param_2 - *plVar1 >> 4;
  this = (allocator<struct_std::_Container_proxy> *)FUN_1400023b0(param_1);
  _Var3 = FUN_140002670(param_1);
  _Var4 = FUN_1400029b0(param_1);
  if (_Var3 == _Var4) {
    FUN_140002910();
  }
  uVar5 = FUN_140003620(param_1,_Var3 + 1);
  p_Var6 = std::allocator<struct_std::_Container_proxy>::allocate(this,uVar5);
  p_Var7 = (_Container_proxy *)FUN_140001450(p_Var6 + lVar2 * 0x10);
  p_Var8 = (_Container_proxy *)FUN_140001450(param_3);
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>(this,p_Var7,p_Var8);
  plVar1 = (longlong *)FUN_140002410(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_140002410(param_1);
    puVar10 = (undefined8 *)FUN_140002430(param_1);
    FUN_1400036b0(param_1,*puVar10,*puVar9,p_Var6);
  }
  else {
    puVar9 = (undefined8 *)FUN_140002430(param_1);
    FUN_140003710(param_1,*puVar9,param_2,p_Var6);
    puVar9 = (undefined8 *)FUN_140002410(param_1);
    FUN_140003710(param_1,param_2,*puVar9,p_Var6 + lVar2 * 0x10 + 0x10);
  }
  FUN_140003510(param_1,(longlong)p_Var6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_140002430(param_1);
  return lVar2 * 0x10 + *plVar1;
}




undefined8 * FUN_1400030e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_140001450(param_2);
  FUN_140003a00(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




void FUN_140003120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400023b0(param_1);
  FUN_140003a40(param_2,param_3,param_4,uVar1);
  return;
}




int FUN_140003160(wchar_t *param_1,ulonglong param_2,wchar_t *param_3,ulonglong param_4)

{
  int iVar1;
  __uint64 *p_Var2;
  ulonglong local_res10;
  wchar_t *local_res18;
  ulonglong local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  p_Var2 = std::_Min_value<unsigned___int64>(&local_res10,&local_res20);
  iVar1 = FUN_1400038d0(param_1,local_res18,*p_Var2);
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
  FUN_140001450(param_1);
  _String_val<>(param_1);
  return param_1;
}




void FUN_140003210(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140003b40();
  return;
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
      pvVar1 = (void *)FUN_140001390(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_140003b60(param_1);
  }
  return pvVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::_Deallocate<8,0>(void * __ptr64,unsigned __int64)
    void __cdecl std::_Deallocate<16,0>(void * __ptr64,unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _Deallocate<>(LPVOID param_1,ulonglong param_2)

{
  LPVOID local_res8;
  ulonglong local_res10 [3];
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (0xfff < param_2) {
    FUN_1400013b0((longlong *)&local_res8,(longlong *)local_res10);
  }
  _free_base(local_res8);
  return;
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
    FID_conflict__Xlen();
  }
  puVar2 = (undefined8 *)FUN_1400023b0(param_1);
  local_18 = puVar2[3];
  local_20 = FID_conflict__Calculate_growth(param_1,param_2);
  local_28 = FUN_1400023b0(param_1);
  local_30 = allocate(local_28,local_20 + 1);
  FUN_140001370();
  puVar2[2] = param_2;
  puVar2[3] = local_20;
  puVar3 = (undefined1 *)FUN_140001450(local_30);
  FID_conflict_operator__(local_res18,puVar3,param_2,local_res20);
  if (local_18 < 8) {
    uVar4 = FUN_140001450(puVar2);
    construct<>(local_28,uVar4,&local_30);
  }
  else {
    deallocate(local_28,(LPVOID)*puVar2,local_18 + 1);
    *puVar2 = local_30;
  }
  return param_1;
}




void FUN_1400034b0(undefined8 *param_1)

{
  FUN_140001450(*param_1);
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
  FUN_140001450(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




void FUN_140003510(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1400028d0(param_1);
  plVar1 = (longlong *)FUN_140002430(param_1);
  if (*plVar1 != 0) {
    FUN_140002410(param_1);
    FUN_140002430(param_1);
    FUN_140002930(param_1);
    lVar2 = FUN_140002970(param_1);
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    uVar4 = FUN_1400023b0(param_1);
    FUN_140002a80(uVar4,(LPVOID)*puVar3,lVar2);
  }
  plVar1 = (longlong *)FUN_140002430(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_140002410(param_1);
  *plVar1 = param_2 + param_3 * 0x10;
  plVar1 = (longlong *)FUN_1400028f0(param_1);
  *plVar1 = param_2 + param_4 * 0x10;
  return;
}




ulonglong FUN_140003620(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_140002970(param_1);
  _Var2 = FUN_1400029b0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_1400036b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140003710(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140003710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400023b0(param_1);
  FUN_140003c40(param_2,param_3,param_4,uVar1);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: static void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Xlen(void)
    public: static void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Xlen(void)
   
   Library: Visual Studio 2017 Release */

void FID_conflict__Xlen(void)

{
  FUN_14000fb10(0x14002d428);
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
  local_20 = FUN_1400023b0(param_1);
  local_28 = param_2 | 7;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
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
  
  FUN_1400023b0(param_1);
  local_30 = FUN_140003900();
  local_38 = 8;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_140001360();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
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




void FUN_1400038d0(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  wmemcmp(param_1,param_2,param_3);
  return;
}




undefined8 FUN_140003900(void)

{
  return 0x7fffffffffffffff;
}




/* Library Function - Single Match
    void __cdecl std::_Enable_shared_from_this<class __ExceptionPtr,class __ExceptionPtr>(class
   std::shared_ptr<class __ExceptionPtr> const & __ptr64,class __ExceptionPtr * __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void __cdecl
std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
          (shared_ptr<class___ExceptionPtr> *param_1,__ExceptionPtr *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140003dc0();
  return;
}




longlong FUN_140003950(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 1;
}




void FUN_140003980(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140003d60(param_1,*param_2);
  return;
}




undefined8 * FUN_1400039b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140001450(param_2);
  *param_1 = *puVar1;
  uVar2 = FUN_140001450(param_3);
  param_1[1] = uVar2;
  return param_1;
}




undefined8 * FUN_140003a00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140001450(param_3);
  FUN_140003d80(param_1);
  return param_1;
}




undefined8
FUN_140003a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_37 [7];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = FUN_140001450(param_1);
  local_20 = FUN_140001450(param_2);
  FUN_140003b10(&local_30,&local_20);
  local_28 = select_on_container_copy_construction(local_res18);
  local_18 = local_37;
  FUN_140003e00();
  select_on_container_copy_construction(local_18);
  uVar1 = FUN_140003e30(local_30,local_20,local_28,local_res20);
  FUN_140003d60(&local_res18,uVar1);
  return local_res18;
}




void FUN_140003b10(longlong *param_1,longlong *param_2)

{
  FUN_140003dd0(param_1,param_2);
  return;
}




void FUN_140003b40(void)

{
  return;
}




ulonglong FUN_140003b60(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_140001390(local_28);
  if (lVar1 == 0) {
    FUN_140013a64();
  }
  uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar2 - 8) = lVar1;
  return uVar2;
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
  
  puVar1 = (undefined8 *)FUN_140001350(8,param_2);
  puVar2 = (undefined8 *)FUN_140001450(param_3);
  *puVar1 = *puVar2;
  return;
}




undefined8
FUN_140003c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_37 [7];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_30 = FUN_140001450(param_1);
  local_20 = FUN_140001450(param_2);
  FUN_140003b10(&local_30,&local_20);
  local_28 = select_on_container_copy_construction(local_res18);
  local_18 = local_37;
  FUN_140003e00();
  select_on_container_copy_construction(local_18);
  uVar1 = FUN_140003ec0(local_30,local_20,local_28,local_res20);
  FUN_140003d60(&local_res18,uVar1);
  return local_res18;
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




void FUN_140003d60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 * FUN_140003d80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140003dc0(void)

{
  return;
}




longlong FUN_140003dd0(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1 >> 4;
}




undefined1 FUN_140003e00(void)

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




undefined8 FUN_140003e30(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_28 [5];
  
  FUN_140003fb0(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x10) {
    FUN_140003ff0((longlong)local_28,local_res8);
  }
  uVar1 = FUN_140003f50(local_28);
  FUN_140003f70();
  return uVar1;
}




undefined8 FUN_140003ec0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_28 [5];
  
  FUN_140003fb0(local_28,param_3,param_4);
  for (local_res8 = param_1; local_res8 != param_2; local_res8 = local_res8 + 0x10) {
    uVar1 = FUN_140001450(local_res8);
    FUN_140003ff0((longlong)local_28,uVar1);
  }
  uVar1 = FUN_140003f50(local_28);
  FUN_140003f70();
  return uVar1;
}




undefined8 FUN_140003f50(undefined8 *param_1)

{
  *param_1 = param_1[1];
  return param_1[1];
}




void FUN_140003f70(void)

{
  FUN_140003210();
  return;
}




undefined8 * FUN_140003fb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}




void FUN_140003ff0(longlong param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  _Container_proxy *p_Var2;
  
  p_Var1 = (_Container_proxy *)FUN_140001450(param_2);
  p_Var2 = (_Container_proxy *)FUN_140001450(*(undefined8 *)(param_1 + 8));
  std::_Default_allocator_traits<class_std::allocator<struct_std::_Container_proxy>_>::
  construct<struct_std::_Container_proxy,struct_std::_Container_proxy>
            (*(allocator<struct_std::_Container_proxy> **)(param_1 + 0x10),p_Var2,p_Var1);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
  return;
}




/* Library Function - Single Match
    wmemcmp
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl wmemcmp(wchar_t *_S1,wchar_t *_S2,size_t _N)

{
  wchar_t *local_res8;
  wchar_t *local_res10;
  size_t local_res18;
  
  local_res8 = _S1;
  local_res10 = _S2;
  local_res18 = _N;
  while( true ) {
    if (local_res18 == 0) {
      return 0;
    }
    if (*local_res8 != *local_res10) break;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 - 1;
  }
  if ((ushort)*local_res8 < (ushort)*local_res10) {
    return -1;
  }
  return 1;
}




undefined1 * FUN_1400040e0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




void FUN_140004110(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  FUN_140013410(param_1,param_2,param_3 << 1);
  return;
}




undefined * FUN_140004150(void)

{
  return &DAT_140034130;
}




/* Library Function - Multiple Matches With Different Base Names
    _vsprintf_s_l
    _vswprintf_c_l
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl
FID_conflict__vsprintf_s_l
          (wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  __uint64 *p_Var1;
  int local_14;
  
  p_Var1 = (__uint64 *)FUN_140004150();
  local_14 = __stdio_common_vswprintf_s
                       (*p_Var1,_DstBuf,_MaxCount,_Format,(__crt_locale_pointers *)_Locale,_ArgList)
  ;
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




/* Library Function - Multiple Matches With Different Base Names
    sprintf_s
    swprintf
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int __cdecl FID_conflict_sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  iVar1 = FID_conflict__vsprintf_s_l
                    ((wchar_t *)_DstBuf,_SizeInBytes,(wchar_t *)_Format,(_locale_t)0x0,
                     (va_list)&local_res20);
  return iVar1;
}




void FUN_140004230(undefined1 (*param_1) [16],ushort param_2)

{
  FUN_140011304(param_1,param_2);
  return;
}




bool FUN_140004260(wchar_t *param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined7 extraout_var;
  bool local_38;
  longlong local_30;
  longlong local_28;
  
  local_38 = false;
  if ((param_1 != (wchar_t *)0x0) &&
     (uVar3 = FUN_140004330(param_2), (int)CONCAT71(extraout_var,uVar3) != 0)) {
    local_30 = -1;
    do {
      lVar1 = local_30 + 1;
      lVar2 = local_30 * 2;
      local_30 = lVar1;
    } while (*(short *)(*param_2 + lVar2 + 2) != 0);
    local_28 = -1;
    do {
      local_28 = local_28 + 1;
    } while (param_1[local_28] != L'\0');
    local_38 = (ulonglong)(lVar1 + local_28) < 0x104;
    if (local_38) {
      wcscat_s((wchar_t *)param_2,0x104,param_1);
    }
  }
  return local_38;
}




undefined1 FUN_140004330(undefined1 (*param_1) [16])

{
  DWORD DVar1;
  longlong lVar2;
  undefined1 local_18;
  
  local_18 = 0;
  DVar1 = GetModuleFileNameW((HMODULE)&IMAGE_DOS_HEADER_140000000,(LPWSTR)param_1,0x104);
  if (DVar1 != 0) {
    *(undefined2 *)(param_1[0x20] + 6) = 0;
    lVar2 = FUN_140004230(param_1,0x5c);
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 2) = 0;
      local_18 = 1;
    }
  }
  return local_18;
}




void FUN_1400043b0(LPWSTR param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined7 extraout_var;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStackY_488 [32];
  ulonglong local_450;
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_488;
  pWVar4 = local_438;
  for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  uVar2 = FUN_140004260(L"LocateAliyun.ini",(undefined1 (*) [16])local_438);
  if ((int)CONCAT71(extraout_var,uVar2) != 0) {
    pWVar4 = local_228;
    for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)pWVar4 = 0;
      pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
    }
    FUN_140004330((undefined1 (*) [16])local_228);
    GetPrivateProfileStringW(L"Locate",L"IniDir",local_228,param_1,0x104,local_438);
    local_450 = 0xffffffffffffffff;
    uVar1 = local_450;
    do {
      local_450 = uVar1;
      uVar1 = local_450 + 1;
    } while (param_1[uVar1] != L'\0');
    if ((param_1[local_450] != L'\\') && (uVar1 < 0x103)) {
      param_1[uVar1] = L'\\';
      param_1[local_450 + 2] = L'\0';
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_488);
  return;
}




void FUN_140004510(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  for (local_14 = 0; (int)local_14 < 0x100; local_14 = local_14 + 1) {
    local_18 = local_14;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if ((local_18 & 1) == 0) {
        local_18 = local_18 >> 1;
      }
      else {
        local_18 = local_18 >> 1 ^ 0xedb88320;
      }
    }
    *(uint *)(param_1 + (longlong)(int)local_14 * 4) = local_18;
  }
  return;
}




uint FUN_1400045a0(longlong param_1,int param_2)

{
  uint local_18;
  ulonglong local_10;
  
  if (DAT_140033d34 == 0) {
    FUN_140004510(0x140033d30);
  }
  local_18 = 0xffffffff;
  for (local_10 = 0; local_10 < (ulonglong)(longlong)param_2; local_10 = local_10 + 1) {
    local_18 = local_18 >> 8 ^
               *(uint *)(&DAT_140033d30 +
                        (ulonglong)((local_18 ^ *(byte *)(param_1 + local_10)) & 0xff) * 4);
  }
  return local_18 ^ 0xffffffff;
}




void FUN_140004650(wchar_t *param_1,char *param_2,LPWSTR param_3)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  longlong local_240;
  uint local_238;
  wchar_t *local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_268;
  local_248 = 0;
  if ((param_1 != (wchar_t *)0x0) && (iVar1 = FUN_1400043b0(param_3), iVar1 != 0)) {
    wcscat_s(param_3,0x104,param_1);
    pwVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    wcscpy_s(local_228,0x104,param_3);
    local_230 = local_228;
    local_240 = -1;
    do {
      local_240 = local_240 + 1;
    } while (local_230[local_240] != L'\0');
    local_238 = FUN_1400045a0((longlong)local_228,(int)local_240 * 2);
    FID_conflict_sprintf_s(param_2,0x104,(char *)L"Global\\eualiyun_%u",(ulonglong)local_238);
    local_248 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




undefined4 FUN_140004780(longlong param_1)

{
  undefined2 uVar1;
  undefined4 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_38 = 0;
  if (param_1 != 0) {
    local_28 = 0xffffffffffffffff;
    do {
      local_28 = local_28 + 1;
    } while (*(short *)(param_1 + local_28 * 2) != 0);
    for (local_30 = 0; local_30 < local_28; local_30 = local_30 + 1) {
      uVar1 = FUN_140015ad0(*(wint_t *)(param_1 + local_30 * 2));
      *(undefined2 *)(param_1 + local_30 * 2) = uVar1;
      if (((*(short *)(param_1 + local_30 * 2) == 0x5c) ||
          (*(short *)(param_1 + local_30 * 2) == 0x2f)) ||
         (*(short *)(param_1 + local_30 * 2) == 0x3a)) {
        *(undefined2 *)(param_1 + local_30 * 2) = 0x24;
      }
    }
    local_38 = 1;
  }
  return local_38;
}




void FUN_140004890(wchar_t *param_1,wchar_t *param_2,uint *param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_4b8 [32];
  DWORD local_478;
  uint local_474;
  undefined4 local_470;
  HRESULT local_46c;
  int local_468;
  HANDLE local_460;
  wchar_t local_458 [16];
  WCHAR local_438 [264];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_4b8;
  local_470 = 0;
  if ((param_1 != (wchar_t *)0x0) && (param_2 != (wchar_t *)0x0)) {
    pwVar5 = local_228;
    for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)pwVar5 = 0;
      pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    }
    wcscpy_s(local_228,0x104,param_1);
    wcscat_s(local_228,0x104,L"&uid=");
    wcscat_s(local_228,0x104,param_2);
    pWVar4 = local_438;
    for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)pWVar4 = 0;
      pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
    }
    iVar1 = FUN_1400043b0(local_438);
    if (iVar1 != 0) {
      wcscat_s(local_438,0x104,L"tempInfo.web");
      DeleteFileW(local_438);
      DeleteUrlCacheEntryW(local_228);
      local_46c = URLDownloadToFileW((LPUNKNOWN)0x0,local_228,local_438,0,(LPBINDSTATUSCALLBACK)0x0)
      ;
      if ((local_46c == 0) &&
         (local_460 = CreateFileW(local_438,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                                  (HANDLE)0x0), local_460 != (HANDLE)0xffffffffffffffff)) {
        pwVar5 = local_458;
        for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined1 *)pwVar5 = 0;
          pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
        }
        local_478 = 0;
        BVar2 = ReadFile(local_460,local_458,0x14,&local_478,(LPOVERLAPPED)0x0);
        if ((BVar2 != 0) && (local_478 != 0)) {
          local_468 = FID_conflict__wtoi(local_458);
          local_474 = (uint)(local_468 == 0);
          *param_3 = local_474;
          local_470 = 1;
        }
        CloseHandle(local_460);
        DeleteFileW(local_438);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_4b8);
  return;
}




BOOL FUN_140004ae0(LPCWSTR param_1)

{
  undefined2 local_28 [2];
  BOOL local_24;
  DWORD local_20 [2];
  HANDLE local_18;
  
  local_24 = 0;
  if (param_1 != (LPCWSTR)0x0) {
    DeleteFileW(param_1);
    local_18 = CreateFileW(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x80,(HANDLE)0x0);
    if (local_18 != (HANDLE)0xffffffffffffffff) {
      local_28[0] = 0xfeff;
      local_20[0] = 0;
      local_24 = WriteFile(local_18,local_28,2,local_20,(LPOVERLAPPED)0x0);
      CloseHandle(local_18);
    }
  }
  return local_24;
}




void FUN_140004ba0(void)

{
  FUN_140004de0(L"UninstallStartEvent");
  return;
}




void FUN_140004bc0(void)

{
  FUN_140004de0(L"UninstallEndEvent");
  return;
}




void FUN_140004be0(void)

{
  FUN_140004de0(L"NewDataArriveEvent");
  return;
}




uint FUN_140004c00(void)

{
  HANDLE hEvent;
  uint local_18;
  
  hEvent = (HANDLE)FUN_140004c60();
  if (hEvent != (HANDLE)0x0) {
    SetEvent(hEvent);
    CloseHandle(hEvent);
  }
  local_18 = (uint)(hEvent != (HANDLE)0x0);
  return local_18;
}




void FUN_140004c60(void)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_458 [32];
  HANDLE local_438;
  wchar_t local_428 [520];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_458;
  local_438 = (HANDLE)0x0;
  pwVar3 = local_428;
  for (lVar2 = 0x410; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  iVar1 = FUN_140004cf0(L"ReplyUninstallStartEvent",local_428);
  if (iVar1 != 0) {
    local_438 = OpenEventW(2,0,local_428);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_458);
  return;
}




void FUN_140004cf0(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  if (param_1 != (wchar_t *)0x0) {
    pWVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    iVar1 = FUN_1400043b0(local_228);
    if ((iVar1 != 0) && (iVar1 = FUN_140004780((longlong)local_228), iVar1 != 0)) {
      wcscpy_s(param_2,0x208,L"Global\\");
      wcscat_s(param_2,0x208,local_228);
      wcscat_s(param_2,0x208,param_1);
      local_238 = 1;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_140004de0(wchar_t *param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined1 *puVar6;
  _SECURITY_ATTRIBUTES *p_Var7;
  undefined1 auStack_498 [32];
  HANDLE local_478;
  _SECURITY_ATTRIBUTES local_470;
  undefined1 local_458 [48];
  wchar_t local_428 [520];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_498;
  local_478 = (HANDLE)0x0;
  if (param_1 != (wchar_t *)0x0) {
    pwVar5 = local_428;
    for (lVar4 = 0x410; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pwVar5 = 0;
      pwVar5 = (wchar_t *)((longlong)pwVar5 + 1);
    }
    iVar1 = FUN_140004cf0(param_1,local_428);
    if (iVar1 != 0) {
      puVar6 = local_458;
      for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      BVar2 = InitializeSecurityDescriptor(local_458,1);
      if ((BVar2 != 0) && (BVar2 = SetSecurityDescriptorDacl(local_458,1,(PACL)0x0,0), BVar2 != 0))
      {
        p_Var7 = &local_470;
        for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)&p_Var7->nLength = 0;
          p_Var7 = (_SECURITY_ATTRIBUTES *)((longlong)&p_Var7->nLength + 1);
        }
        local_470.nLength = 0x18;
        local_470.bInheritHandle = 0;
        local_470.lpSecurityDescriptor = local_458;
        local_478 = CreateEventW(&local_470,0,0,local_428);
        if ((local_478 != (HANDLE)0x0) && (DVar3 = GetLastError(), DVar3 == 0xb7)) {
          CloseHandle(local_478);
          local_478 = (HANDLE)0x0;
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_498);
  return;
}




void FUN_140004f20(wchar_t *param_1,longlong *param_2)

{
  int iVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 *puVar6;
  _SECURITY_ATTRIBUTES *p_Var7;
  undefined1 auStack_6a8 [32];
  uint local_688;
  uint local_684;
  _SECURITY_ATTRIBUTES local_680;
  undefined1 local_668 [48];
  WCHAR local_638 [264];
  WCHAR local_428 [520];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_6a8;
  local_684 = 0;
  if (param_1 != (wchar_t *)0x0) {
    pWVar5 = local_428;
    for (lVar4 = 0x410; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pWVar5 = 0;
      pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
    }
    pWVar5 = local_638;
    for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pWVar5 = 0;
      pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
    }
    iVar1 = FUN_140004650(param_1,(char *)local_428,local_638);
    if (((iVar1 != 0) && (local_428[0] != L'\0')) && (local_638[0] != L'\0')) {
      puVar6 = local_668;
      for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      BVar2 = InitializeSecurityDescriptor(local_668,1);
      if ((BVar2 != 0) && (BVar2 = SetSecurityDescriptorDacl(local_668,1,(PACL)0x0,0), BVar2 != 0))
      {
        p_Var7 = &local_680;
        for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)&p_Var7->nLength = 0;
          p_Var7 = (_SECURITY_ATTRIBUTES *)((longlong)&p_Var7->nLength + 1);
        }
        local_680.nLength = 0x18;
        local_680.bInheritHandle = 0;
        local_680.lpSecurityDescriptor = local_668;
        pvVar3 = CreateMutexW(&local_680,0,local_428);
        *param_2 = (longlong)pvVar3;
        GetLastError();
        local_688 = (uint)(*param_2 != 0);
        local_684 = local_688;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_6a8);
  return;
}




undefined4 FUN_1400050c0(wchar_t *param_1,int param_2)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_14 = 0;
  FUN_140005230(local_18);
  local_14 = FUN_140005bd0(local_18,param_1,param_2);
  FUN_140001370();
  return local_14;
}




undefined4 FUN_140005120(uint param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_14 = 0;
  FUN_140005230(local_18);
  local_14 = FUN_140005d00(local_18,param_1,param_2,param_4);
  FUN_140001370();
  return local_14;
}




undefined4 FUN_140005180(wchar_t *param_1,int param_2)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_14 = 0;
  if ((param_1 != (wchar_t *)0x0) && (0 < param_2)) {
    FUN_140005230(local_18);
    local_14 = FUN_1400061f0(local_18,param_1,param_2);
    FUN_140001370();
  }
  return local_14;
}




void FUN_1400051f0(wchar_t *param_1,size_t param_2,wchar_t *param_3,va_list param_4)

{
  FID_conflict__vsprintf_s_l(param_1,param_2,param_3,(_locale_t)0x0,param_4);
  return;
}




void FUN_140005230(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_258 [32];
  DWORD local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  cVar1 = FUN_1400052b0(param_1,local_228);
  if (cVar1 != '\0') {
    local_238 = GetFileAttributesW(local_228);
    if (local_238 == 0xffffffff) {
      FUN_140004ae0(local_228);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_1400052b0(undefined8 param_1,LPWSTR param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_458 [32];
  undefined1 local_438;
  char local_428 [1040];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_458;
  local_438 = 0;
  pcVar3 = local_428;
  for (lVar2 = 0x410; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  iVar1 = FUN_140004650(L"AliyunConfig.ini",local_428,param_2);
  if (iVar1 != 0) {
    local_438 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_458);
  return;
}




void FUN_140005340(undefined8 param_1,LPCWSTR param_2,UINT *param_3)

{
  char cVar1;
  UINT UVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  cVar1 = FUN_1400052b0(param_1,local_228);
  if (cVar1 != '\0') {
    UVar2 = GetPrivateProfileIntW(L"Config",param_2,0,local_228);
    *param_3 = UVar2;
    local_238 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_1400053e0(undefined8 param_1,LPCWSTR param_2,uint param_3,LPCWSTR param_4)

{
  char cVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_2c8 [32];
  BOOL local_2a8;
  wchar_t local_298 [56];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_2c8;
  local_2a8 = 0;
  cVar1 = FUN_1400052b0(param_1,local_228);
  if (cVar1 != '\0') {
    pwVar3 = local_298;
    for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    FUN_140006e30(local_298,L"%d",(ulonglong)param_3,param_4);
    local_2a8 = WritePrivateProfileStringW(L"Config",param_2,local_298,local_228);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2c8);
  return;
}




void FUN_1400054b0(undefined8 param_1,LPCWSTR param_2,LPWSTR param_3)

{
  char cVar1;
  undefined1 auStackY_268 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_268;
  cVar1 = FUN_1400052b0(param_1,local_228);
  if (cVar1 != '\0') {
    GetPrivateProfileStringW(L"Config",param_2,L"",param_3,0x104,local_228);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_268);
  return;
}




void FUN_140005560(undefined8 param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  char cVar1;
  undefined1 auStack_258 [32];
  BOOL local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  cVar1 = FUN_1400052b0(param_1,local_228);
  if (cVar1 != '\0') {
    local_238 = WritePrivateProfileStringW(L"Config",param_2,param_3,local_228);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_140005600(undefined8 param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  iVar1 = FUN_1400054b0(param_1,L"LOGENDPOINT",local_228);
  if (((((iVar1 != 0) && (iVar1 = FUN_140005dc0(param_1,local_228,param_2,param_3), iVar1 != 0)) &&
       (iVar1 = FUN_1400054b0(param_1,L"ACCESSKEYID",local_228), iVar1 != 0)) &&
      ((((iVar1 = FUN_140005dc0(param_1,local_228,param_2 + 0x104,param_3), iVar1 != 0 &&
         (iVar1 = FUN_1400054b0(param_1,L"ACCESSKEYSECRET",local_228), iVar1 != 0)) &&
        ((iVar1 = FUN_140005dc0(param_1,local_228,param_2 + 0x208,param_3), iVar1 != 0 &&
         ((iVar1 = FUN_1400054b0(param_1,L"PROJECTNAME",local_228), iVar1 != 0 &&
          (iVar1 = FUN_140005dc0(param_1,local_228,param_2 + 0x30c,param_3), iVar1 != 0)))))) &&
       (iVar1 = FUN_1400054b0(param_1,L"LOGSTORENAME",local_228), iVar1 != 0)))) &&
     (((iVar1 = FUN_140005dc0(param_1,local_228,param_2 + 0x410,param_3), iVar1 != 0 &&
       (iVar1 = FUN_1400054b0(param_1,L"LOGSTORENAME2",local_228), iVar1 != 0)) &&
      (iVar1 = FUN_140005dc0(param_1,local_228,param_2 + 0x514,param_3), iVar1 != 0)))) {
    local_238 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_140005870(undefined8 param_1,UINT *param_2)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  iVar1 = FUN_140005340(param_1,L"bAllowSendInfo",param_2);
  if (((((iVar1 != 0) && (iVar1 = FUN_140005340(param_1,L"bAutoAddUid",param_2 + 1), iVar1 != 0)) &&
       (iVar1 = FUN_140005340(param_1,L"bAutoAddTimestamp",param_2 + 2), iVar1 != 0)) &&
      ((((iVar1 = FUN_140005340(param_1,L"bGenerateTestInfo",param_2 + 3), iVar1 != 0 &&
         (iVar1 = FUN_140005340(param_1,L"nbLimitKeyvalueMaxLen",param_2 + 4), iVar1 != 0)) &&
        ((iVar1 = FUN_140005340(param_1,L"nLimitPairsCount",param_2 + 5), iVar1 != 0 &&
         ((iVar1 = FUN_1400054b0(param_1,L"ProductName",(LPWSTR)(param_2 + 6)), iVar1 != 0 &&
          (iVar1 = FUN_1400054b0(param_1,L"AllowSendUrl",(LPWSTR)(param_2 + 0x88)), iVar1 != 0))))))
       && (iVar1 = FUN_140005340(param_1,L"bLastAllowSend",param_2 + 0x10a), iVar1 != 0)))) &&
     (((iVar1 = FUN_140005340(param_1,L"nMaxItemCount",param_2 + 0x10b), iVar1 != 0 &&
       (iVar1 = FUN_140005340(param_1,L"nMaxItemDays",param_2 + 0x10c), iVar1 != 0)) &&
      (iVar1 = FUN_140005340(param_1,L"nMaxIdleMinutes",param_2 + 0x10d), iVar1 != 0)))) {
    pWVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    FUN_1400054b0(param_1,L"nLastTickCount",local_228);
    lVar2 = FID_conflict__wtoi64(local_228);
    *(longlong *)(param_2 + 0x10e) = lVar2;
    local_238 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




uint FUN_140005b30(undefined8 param_1,LPWSTR param_2)

{
  int iVar1;
  uint local_18;
  
  iVar1 = FUN_1400054b0(param_1,L"SZUID",param_2);
  local_18 = (uint)(iVar1 != 0);
  return local_18;
}




uint FUN_140005b80(undefined8 param_1,LPCWSTR param_2)

{
  int iVar1;
  uint local_18;
  
  iVar1 = FUN_140005560(param_1,L"SZUID",param_2);
  local_18 = (uint)(iVar1 != 0);
  return local_18;
}




undefined4 FUN_140005bd0(undefined8 param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = FUN_140005600(param_1,param_2,param_3);
  if (((iVar1 != 0) && (iVar1 = FUN_140005870(param_1,(UINT *)(param_2 + 0x618)), iVar1 != 0)) &&
     (((*(int *)(param_2 + 0x61a) == 0 ||
       (iVar1 = FUN_140005b30(param_1,param_2 + 0x838), iVar1 != 0)) ||
      (((iVar1 = FUN_1400061a0(param_1,param_2 + 0x838), iVar1 != 0 &&
        (iVar1 = FUN_140005b80(param_1,param_2 + 0x838), iVar1 != 0)) &&
       (iVar1 = FUN_140005b30(param_1,param_2 + 0x838), iVar1 != 0)))))) {
    FUN_1400061f0(param_1,param_2 + 0x93c,0x104);
    local_18 = 1;
  }
  return local_18;
}




void FUN_140005d00(undefined8 param_1,uint param_2,undefined8 param_3,LPCWSTR param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  local_238 = FUN_1400053e0(param_1,L"bLastAllowSend",param_2,param_4);
  pwVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pwVar2 = 0;
    pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
  }
  FUN_140006e70(local_228,L"%I64u",param_3,param_4);
  FUN_140005560(param_1,L"nLastTickCount",local_228);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_140005dc0(undefined8 param_1,wchar_t *param_2,wchar_t *param_3,int param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  wchar_t *_Src;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  wchar_t *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148 [2];
  undefined1 local_138 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_118 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_f8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38 [5];
  ulonglong local_10;
  
  local_158 = 0xfffffffffffffffe;
  local_10 = DAT_140032008 ^ (ulonglong)auStack_1e8;
  local_1c8 = 0;
  local_1c0 = 0xffffffffffffffff;
  do {
    local_1c0 = local_1c0 + 1;
  } while (param_2[local_1c0] != L'\0');
  local_1b8 = local_1c0;
  local_198 = param_2;
  if ((local_1c0 != 0) && (local_1c0 < 0x104)) {
    basic_string<>((longlong)local_138);
    basic_string<>(local_118,param_2);
    if (param_4 == 0) {
      basic_string<>(local_d8,param_2);
      local_170 = FUN_14000ac90((longlong)local_98,local_d8);
      FID_conflict_operator_((longlong)local_138,local_170);
      FUN_140002250(local_98);
      FUN_140002250(local_d8);
      local_168 = FUN_14000ac90((longlong)local_78,local_138);
      FID_conflict_operator_((longlong)local_138,local_168);
      FUN_140002250(local_78);
      local_160 = FUN_14000ac90((longlong)local_58,local_138);
      FID_conflict_operator_((longlong)local_138,local_160);
      FUN_140002250(local_58);
    }
    else {
      if (DAT_140034140 == (undefined8 *)0x0) {
        local_1b0 = (undefined8 *)operator_new(0x10);
        if (local_1b0 == (undefined8 *)0x0) {
          local_1a8 = (undefined8 *)0x0;
        }
        else {
          local_1a8 = FUN_140006490(local_1b0);
        }
        local_190 = local_1a8;
        DAT_140034140 = local_1a8;
      }
      FUN_140006350(DAT_140034140,&local_1a0,local_118);
      plVar2 = FUN_140006430(DAT_140034140,&local_150);
      bVar1 = FUN_1400062f0(&local_1a0,plVar2);
      if (bVar1) {
        lVar3 = FUN_140006330(&local_1a0);
        FUN_140006530((longlong)local_138,lVar3 + 0x20);
      }
      else {
        basic_string<>(local_f8,param_2);
        local_188 = FUN_140008600((longlong)local_b8,local_f8);
        FID_conflict_operator_((longlong)local_138,local_188);
        FUN_140002250(local_b8);
        FUN_140002250(local_f8);
        bVar1 = FUN_1400064c0(local_138);
        if (!bVar1) {
          local_180 = FUN_140006eb0(local_38,param_2,local_138);
          local_178 = local_180;
          FUN_140006f10(DAT_140034140,local_148,local_180);
          FUN_140006180((longlong)local_38);
        }
      }
    }
    bVar1 = FUN_1400064c0(local_138);
    if (bVar1) {
      FUN_140002250(local_118);
      FUN_140002250(local_138);
    }
    else {
      _Src = (wchar_t *)FUN_140006500(local_138);
      wcscpy_s(param_3,0x104,_Src);
      local_1c8 = 1;
      FUN_140002250(local_118);
      FUN_140002250(local_138);
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_1e8);
  return;
}




void FUN_140006180(longlong param_1)

{
  FUN_140002250(param_1 + 8);
  return;
}




int FUN_1400061a0(undefined8 param_1,wchar_t *param_2)

{
  undefined4 local_18;
  
  local_18 = FUN_14000bf30((char *)param_2);
  if (local_18 == 0) {
    local_18 = FUN_14000b350(param_2);
  }
  return local_18;
}




void FUN_1400061f0(undefined8 param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  ulonglong local_240;
  WCHAR *local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_268;
  local_248 = 0;
  if (param_2 != (wchar_t *)0x0) {
    pWVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pWVar3 = 0;
      pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
    }
    iVar1 = FUN_1400054b0(param_1,L"SZVID",local_228);
    if (iVar1 != 0) {
      local_238 = local_228;
      local_240 = 0xffffffffffffffff;
      do {
        local_240 = local_240 + 1;
      } while (local_238[local_240] != L'\0');
      if (local_240 < (ulonglong)(longlong)param_3) {
        wcscpy_s(param_2,0x104,local_228);
        local_248 = 1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_268);
  return;
}




bool FUN_1400062f0(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FUN_1400066a0(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}




void FUN_140006330(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400066e0(param_1);
  FUN_140006680(uVar1);
  return;
}




undefined8 * FUN_140006350(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_1400067a0(param_1,&local_48,param_3);
  plVar3 = FUN_140006430(param_1,&local_20);
  bVar1 = FUN_1400066a0(&local_48,plVar3);
  if (!bVar1) {
    local_38 = FUN_140006770(param_1,local_48);
    uVar4 = FUN_1400023b0(param_1);
    cVar2 = FUN_140006830(uVar4,param_3,local_38);
    if (cVar2 == '\0') {
      local_40 = local_30;
      goto LAB_140006404;
    }
  }
  local_40 = FUN_140006430(param_1,local_18);
LAB_140006404:
  *param_2 = *local_40;
  return param_2;
}




undefined8 * FUN_140006430(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140006740(param_1);
  FUN_140001450(puVar1);
  FUN_140006700(param_2,*puVar1);
  return param_2;
}




undefined8 * FUN_140006490(undefined8 *param_1)

{
  undefined1 local_18 [24];
  
  FUN_140006800(param_1,local_18);
  return param_1;
}




bool FUN_1400064c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1400068c0(param_1);
  return lVar1 == 0;
}




void FUN_140006500(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400023b0(param_1);
  Myptr(puVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x000140006555) */

longlong FUN_140006530(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140001450(param_2);
  if (param_1 != lVar1) {
    FUN_1400023b0(param_2);
    FUN_140006890(param_1);
    puVar2 = (undefined8 *)FUN_1400023b0(param_2);
    puVar3 = Myptr(puVar2);
    FID_conflict_assign(param_1,puVar3,puVar2[2]);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::operator=(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > && __ptr64) __ptr64
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::operator=(class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > &&
   __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

longlong FID_conflict_operator_(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = FUN_140001450(param_2);
  if (param_1 != lVar1) {
    FID_conflict__Tidy_deallocate(param_1);
    uVar2 = FUN_1400023b0(param_2);
    Move_alloc(param_1,uVar2);
    puVar3 = local_18;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar2 = FUN_140001450(param_2);
    FID_conflict__Assign_rv_contents(param_1,uVar2);
  }
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
  FUN_1400023d0(param_1);
  FID_conflict__Tidy_init(param_1);
  return param_1;
}




void FUN_140006680(undefined8 param_1)

{
  FUN_140001450(param_1);
  return;
}




bool FUN_1400066a0(longlong *param_1,longlong *param_2)

{
  return *param_1 == *param_2;
}




void FUN_1400066e0(longlong *param_1)

{
  FUN_140006930(param_1);
  return;
}




undefined8 * FUN_140006700(undefined8 *param_1,undefined8 param_2)

{
  FUN_140002330(param_1,param_2);
  return param_1;
}




void FUN_140006740(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001450(param_1);
  FUN_140001450(uVar1);
  return;
}




void FUN_140006770(undefined8 param_1,longlong param_2)

{
  FUN_140006990(param_1,param_2 + 0x20);
  return;
}




undefined8 * FUN_1400067a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_140006740(param_1);
  FUN_140001450(uVar1);
  puVar2 = FUN_140006f50(param_1,param_3);
  FUN_140006700(param_2,puVar2);
  return param_2;
}




undefined8 * FUN_140006800(undefined8 *param_1,undefined8 param_2)

{
  FUN_140006950(param_1,param_2);
  return param_1;
}




void FUN_140006830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140006ff0(param_2,param_3);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<unsigned short,class
   std::allocator<unsigned short> > >::_Move_alloc(class std::allocator<unsigned short> & __ptr64)
   __ptr64
    public: void __cdecl std::_String_alloc<struct std::_String_base_types<wchar_t,class
   std::allocator<wchar_t> > >::_Move_alloc(class std::allocator<wchar_t> & __ptr64) __ptr64
   
   Library: Visual Studio 2017 Release */

void Move_alloc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400023b0(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




void FUN_140006890(undefined8 param_1)

{
  FUN_1400023b0(param_1);
  _Pocca<>();
  return;
}




undefined8 FUN_1400068c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1400023b0(param_1);
  return *(undefined8 *)(lVar1 + 0x10);
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Assign_rv_contents(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64,struct
   std::integral_constant<bool,1>) __ptr64
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Assign_rv_contents(class
   std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > && __ptr64,struct std::integral_constant<bool,1>) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Assign_rv_contents(class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> > && __ptr64,struct
   std::integral_constant<bool,1>) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

void FID_conflict__Assign_rv_contents(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_140001450(param_2);
  FUN_1400069b0(param_1,uVar1);
  return;
}




longlong FUN_140006930(longlong *param_1)

{
  return *param_1 + 0x20;
}




undefined8 * FUN_140006950(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_18;
  byte local_17;
  
  FUN_140007090(param_1,(ulonglong)local_17,param_2,&local_18);
  FUN_140006a30(param_1);
  return param_1;
}




void FUN_140006990(undefined8 param_1,undefined8 param_2)

{
  FUN_140001450(param_2);
  return;
}




void FUN_1400069b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_1400023b0(param_2);
  uVar2 = FUN_1400023b0(param_1);
  puVar3 = (undefined1 *)FUN_140001450(uVar2);
  puVar4 = (undefined1 *)FUN_140001450(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__Tidy_init(param_2);
  return;
}




void FUN_140006a30(undefined8 param_1)

{
  _Container_proxy *p_Var1;
  undefined8 *puVar2;
  
  p_Var1 = FUN_140006ae0(param_1);
  puVar2 = (undefined8 *)FUN_140006740(param_1);
  *puVar2 = p_Var1;
  return;
}




undefined8 * FUN_140006a60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140006740(param_1);
  FUN_140001450(puVar1);
  puVar1 = (undefined8 *)FUN_140006ad0(puVar1);
  FUN_140006700(param_2,*puVar1);
  return param_2;
}




undefined8 FUN_140006ad0(undefined8 *param_1)

{
  return *param_1;
}




_Container_proxy * FUN_140006ae0(undefined8 param_1)

{
  undefined8 uVar1;
  _Container_proxy *local_28;
  allocator<struct_std::_Container_proxy> *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (allocator<struct_std::_Container_proxy> *)FUN_140006740(param_1);
  local_28 = std::allocator<struct_std::_Container_proxy>::allocate(local_20,1);
  uVar1 = FUN_140001450(local_28);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_140001450(local_28 + 8);
  construct<>(local_20,uVar1,&local_28);
  uVar1 = FUN_140001450(local_28 + 0x10);
  construct<>(local_20,uVar1,&local_28);
  local_28[0x18] = (_Container_proxy)0x1;
  local_28[0x19] = (_Container_proxy)0x1;
  return local_28;
}




longlong FUN_140006ba0(longlong *param_1)

{
  return *param_1 + 0x10;
}




longlong FUN_140006bc0(longlong *param_1)

{
  return *param_1 + 8;
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




void FUN_140006c10(undefined8 param_1,LPVOID param_2,longlong param_3)

{
  _Deallocate<>(param_2,param_3 * 0x60);
  return;
}




void FUN_140006c40(longlong *param_1,longlong *param_2)

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




void FUN_140006d20(longlong *param_1,longlong param_2)

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




longlong FUN_140006e00(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  while (*(char *)(*(longlong *)(local_res8 + 0x10) + 0x19) == '\0') {
    local_res8 = *(longlong *)(local_res8 + 0x10);
  }
  return local_res8;
}




void FUN_140006e30(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400051f0(param_1,0x32,param_2,(va_list)&local_res18);
  return;
}




void FUN_140006e70(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400051f0(param_1,0x104,param_2,(va_list)&local_res18);
  return;
}




undefined8 * FUN_140006eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140001450(param_3);
  uVar2 = FUN_140001450(param_2);
  FUN_140007390(param_1,uVar2,uVar1);
  return param_1;
}




undefined8 * FUN_140006f10(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001450(param_3);
  FUN_1400073e0(param_1,param_2,uVar1);
  return param_2;
}




undefined8 * FUN_140006f50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  plVar2 = (longlong *)FUN_140006740(param_1);
  local_10 = (undefined8 *)*plVar2;
  local_18 = (undefined8 *)local_10[1];
  while (*(char *)((longlong)local_18 + 0x19) == '\0') {
    uVar3 = FUN_140006770(param_1,(longlong)local_18);
    cVar1 = FUN_140007250(param_1,uVar3,param_2);
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




bool FUN_140006ff0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140007290(param_1,param_2);
  return iVar1 < 0;
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
  FUN_140003dc0();
  return;
}




undefined8 *
FUN_140007090(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140001450(param_3);
  FUN_140001450(param_4);
  FUN_140007480(param_1);
  return param_1;
}




void FUN_1400070e0(undefined8 param_1,LPVOID param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_140001450(param_2);
  FUN_140001380();
  FUN_140001450((longlong)param_2 + 8);
  FUN_140001380();
  FUN_140001450((longlong)param_2 + 0x10);
  FUN_140001380();
  FUN_140006c10(local_18,param_2,1);
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

void destroy<>(undefined8 param_1,LPVOID param_2)

{
  FUN_1400071e0(param_2,0);
  return;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<16>(unsigned __int64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

__uint64 __cdecl std::_Get_size_of_n<16>(__uint64 param_1)

{
  undefined8 local_18;
  
  local_18 = param_1 * 0x60;
  if (0x2aaaaaaaaaaaaaa < param_1) {
    local_18 = 0xffffffffffffffff;
  }
  return local_18;
}




LPVOID FUN_1400071e0(LPVOID param_1,uint param_2)

{
  FUN_140007220((longlong)param_1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




void FUN_140007220(longlong param_1)

{
  FUN_140002250(param_1 + 0x20);
  FUN_140002250(param_1);
  return;
}




void FUN_140007250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400023b0(param_1);
  FUN_140006830(uVar1,param_2,param_3);
  return;
}




void FUN_140007290(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  puVar1 = (undefined8 *)FUN_1400023b0(param_1);
  puVar2 = (undefined8 *)FUN_1400023b0(param_2);
  pwVar3 = (wchar_t *)Myptr(puVar2);
  pwVar4 = (wchar_t *)Myptr(puVar1);
  FUN_140003160(pwVar4,puVar1[2],pwVar3,puVar2[2]);
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
  uVar1 = FUN_1400023b0(param_2);
  uVar1 = FUN_140001450(uVar1);
  FUN_1400074b0(param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_140001450(param_2);
  FUN_1400069b0(param_1,uVar1);
  return param_1;
}




undefined8 * FUN_140007390(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001450(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_140001450(param_3);
  basic_string<>((longlong)(param_1 + 1),uVar1);
  return param_1;
}




undefined8 * FUN_1400073e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _Container_proxy *p_Var2;
  
  uVar1 = FUN_140001450(param_3);
  p_Var2 = FUN_1400076e0(param_1,uVar1);
  FUN_140007770(param_1,param_2,'\0',p_Var2 + 0x20,p_Var2);
  return param_2;
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
  FUN_140001450(param_2);
  return;
}




undefined8 * FUN_140007480(undefined8 *param_1)

{
  FUN_140001450(param_1);
  FUN_1400074f0(param_1);
  return param_1;
}




longlong FUN_1400074b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_140001450(param_2);
  FUN_140007b80(param_1,(ulonglong)local_18,uVar1);
  return param_1;
}




undefined8 * FUN_1400074f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
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
  undefined8 uVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1400023b0(param_2);
  uVar1 = select_on_container_copy_construction(local_18);
  FUN_1400074b0(param_1,uVar1);
  FID_conflict__Construct_lv_contents(param_1,param_2);
  return param_1;
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
  
  puVar2 = (undefined1 *)FUN_1400023b0(param_1);
  puVar3 = (undefined8 *)FUN_1400023b0(param_2);
  uVar1 = puVar3[2];
  local_30 = Myptr(puVar3);
  if (uVar1 < 8) {
    copy(puVar2,(undefined1 *)local_30,8);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(undefined8 *)(puVar2 + 0x18) = 7;
  }
  else {
    uVar4 = FUN_1400023b0(param_1);
    local_20 = FID_conflict_max_size(param_1);
    local_18 = uVar1 | 7;
    p_Var5 = std::_Min_value<unsigned___int64>(&local_18,&local_20);
    local_28 = *p_Var5;
    local_38 = allocate(uVar4,local_28 + 1);
    uVar6 = FUN_140001450(puVar2);
    construct<>(uVar4,uVar6,&local_38);
    local_10 = uVar1 + 1;
    puVar7 = (undefined1 *)FUN_140001450(local_38);
    copy(puVar7,(undefined1 *)local_30,local_10);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(__uint64 *)(puVar2 + 0x18) = local_28;
  }
  return;
}




_Container_proxy * FUN_1400076e0(undefined8 param_1,undefined8 param_2)

{
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  p_Var1 = FUN_140007c10(param_1);
  p_Var1[0x18] = (_Container_proxy)0x0;
  p_Var1[0x19] = (_Container_proxy)0x0;
  uVar2 = FUN_140001450(param_2);
  uVar3 = FUN_140001450(p_Var1 + 0x20);
  uVar4 = FUN_140006740(param_1);
  FUN_140007e30(uVar4,uVar3,uVar2);
  return p_Var1;
}




/* WARNING: Removing unreachable block (ram,0x00014000790e) */

undefined8 *
FUN_140007770(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,LPVOID param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char local_b8;
  undefined1 local_b3;
  char local_b2;
  undefined1 local_b1;
  undefined1 local_b0 [8];
  undefined8 *local_a8;
  undefined8 *local_a0;
  uint local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_80 = (longlong *)FUN_140006740(param_1);
  local_a0 = (undefined8 *)*local_80;
  local_a8 = (undefined8 *)local_a0[1];
  local_b8 = '\x01';
  while (*(char *)((longlong)local_a8 + 0x19) == '\0') {
    local_a0 = local_a8;
    if (param_3 == '\0') {
      local_68 = FUN_140006770(param_1,(longlong)local_a8);
      local_60 = FUN_140006990(param_1,param_4);
      uVar3 = FUN_1400023b0(param_1);
      local_b8 = FUN_140006830(uVar3,local_60,local_68);
    }
    else {
      local_78 = FUN_140006990(param_1,param_4);
      local_70 = FUN_140006770(param_1,(longlong)local_a8);
      uVar3 = FUN_1400023b0(param_1);
      cVar1 = FUN_140006830(uVar3,local_70,local_78);
      local_b8 = cVar1 == '\0';
      local_98 = (uint)(byte)local_b8;
    }
    if (local_b8 == '\0') {
      local_88 = (undefined8 *)local_a8[2];
    }
    else {
      local_88 = (undefined8 *)*local_a8;
    }
    local_a8 = local_88;
  }
  FUN_140001450(local_80);
  FUN_140006700(&local_90,local_a0);
  if (local_b8 != '\0') {
    plVar4 = FUN_140006a60(param_1,&local_20);
    bVar2 = FUN_1400066a0(&local_90,plVar4);
    if (bVar2) {
      local_b3 = 1;
      uVar3 = FUN_140001450(param_4);
      local_50 = FUN_140007e80(param_1,&local_18,'\x01',local_a0,uVar3,param_5);
      FUN_1400081e0(param_2,local_50,&local_b3);
      return param_2;
    }
    FUN_140007bc0(&local_90);
  }
  local_48 = FUN_140006990(param_1,param_4);
  local_40 = FUN_140006770(param_1,local_90);
  uVar3 = FUN_1400023b0(param_1);
  local_b2 = FUN_140006830(uVar3,local_40,local_48);
  if (local_b2 == '\0') {
    FUN_140007cf0(param_1,param_5);
    local_b0[0] = 0;
    FUN_1400081e0(param_2,&local_90,local_b0);
  }
  else {
    local_b1 = 1;
    uVar3 = FUN_140001450(param_4);
    local_38 = FUN_140007e80(param_1,local_10,local_b8,local_a0,uVar3,param_5);
    FUN_1400081e0(param_2,local_38,&local_b1);
  }
  return param_2;
}




longlong FUN_140007b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140001450(param_3);
  _String_val<>(param_1);
  return param_1;
}




longlong * FUN_140007bc0(longlong *param_1)

{
  FUN_140007d40(param_1);
  return param_1;
}




void FUN_140007be0(undefined8 param_1,LPVOID param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140006740(param_1);
  FUN_1400070e0(uVar1,param_2);
  return;
}




_Container_proxy * FUN_140007c10(undefined8 param_1)

{
  allocator<struct_std::_Container_proxy> *this;
  _Container_proxy *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this = (allocator<struct_std::_Container_proxy> *)FUN_140006740(param_1);
  p_Var1 = std::allocator<struct_std::_Container_proxy>::allocate(this,1);
  uVar2 = FUN_140006740(param_1);
  uVar3 = FUN_140001450(p_Var1);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_140001450(p_Var1 + 8);
  construct<>(this,uVar3,uVar2);
  uVar3 = FUN_140001450(p_Var1 + 0x10);
  construct<>(this,uVar3,uVar2);
  return p_Var1;
}




void FUN_140007cf0(undefined8 param_1,LPVOID param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  uVar1 = FUN_140006740(param_1);
  pvVar2 = (LPVOID)FUN_140001450((longlong)param_2 + 0x20);
  destroy<>(uVar1,pvVar2);
  FUN_1400070e0(uVar1,param_2);
  return;
}




longlong * FUN_140007d40(longlong *param_1)

{
  FUN_140007d60(param_1);
  return param_1;
}




longlong * FUN_140007d60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(*param_1 + 0x19) == '\0') {
    if (*(char *)(*(longlong *)*param_1 + 0x19) == '\0') {
      lVar2 = FUN_140006e00(*(longlong *)*param_1);
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




void FUN_140007e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar1;
  longlong lVar2;
  
  pbVar1 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           FUN_140001350(0x40,param_2);
  lVar2 = FUN_140001450(param_3);
  FUN_140008260(pbVar1,lVar2);
  return;
}




undefined8 *
FUN_140007e80(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,LPVOID param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_140006740(param_1);
  lVar2 = FUN_140008230(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_140007cf0(param_1,param_6);
    FUN_14000fb10(0x14002d438);
  }
  FUN_140001450(param_5);
  plVar3 = (longlong *)FUN_1400082c0(param_1,param_6);
  plVar1[1] = plVar1[1] + 1;
  plVar3[1] = (longlong)param_4;
  local_28 = plVar3;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar4 = (undefined8 *)FUN_140006bc0(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_140006ad0(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_140006ba0(plVar1);
    *puVar4 = plVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar3;
    plVar5 = (longlong *)FUN_140006ba0(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_140006ba0(plVar1);
      *puVar4 = plVar3;
    }
  }
  else {
    *param_4 = plVar3;
    plVar5 = (longlong *)FUN_140006ad0(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_140006ad0(plVar1);
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
          FUN_140006d20(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_140006c40(plVar1,*(longlong **)(local_28[1] + 8));
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
          FUN_140006c40(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_140006d20(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar5 = (longlong *)FUN_140006bc0(plVar1);
  *(undefined1 *)(*plVar5 + 0x18) = 1;
  FUN_140001450(plVar1);
  FUN_140006700(param_2,plVar3);
  return param_2;
}




undefined8 * FUN_1400081e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined8 *)FUN_140001450(param_2);
  *param_1 = *puVar1;
  puVar2 = (undefined1 *)FUN_140001450(param_3);
  *(undefined1 *)(param_1 + 1) = *puVar2;
  return param_1;
}




void FUN_140008230(undefined8 param_1)

{
  FUN_140006740(param_1);
  FUN_140008250();
  return;
}




undefined8 FUN_140008250(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *
FUN_140008260(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
              *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140001450(param_2);
  basic_string<>(param_1,(wchar_t *)*puVar1);
  uVar2 = FUN_140001450(param_2 + 8);
  basic_string<>((longlong)(param_1 + 0x20),uVar2);
  return param_1;
}




undefined8 FUN_1400082c0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(char const * __ptr64 const) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

exception * __thiscall std::exception::exception(exception *this,char *param_1)

{
  longlong lVar1;
  exception *peVar2;
  char *local_18;
  undefined1 local_10;
  
  *(undefined ***)this = vftable;
  peVar2 = this + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *peVar2 = (exception)0x0;
    peVar2 = peVar2 + 1;
  }
  local_10 = 1;
  local_18 = param_1;
  __std_exception_copy((longlong *)&local_18,(longlong *)(this + 8));
  return this;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  longlong lVar1;
  exception *peVar2;
  
  *(undefined ***)this = vftable;
  peVar2 = this + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *peVar2 = (exception)0x0;
    peVar2 = peVar2 + 1;
  }
  __std_exception_copy((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}




void FUN_1400083b0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}




char * FUN_1400083e0(longlong param_1)

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




undefined8 * FUN_140008420(undefined8 *param_1,uint param_2)

{
  FUN_1400083b0(param_1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
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




undefined1 * FUN_1400084a0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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
  
  pcVar1 = (char *)FUN_140013410((undefined8 *)param_1,(undefined8 *)param_2,param_3);
  return pcVar1;
}




void FUN_140008500(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}




/* Library Function - Single Match
    public: __cdecl std::runtime_error::runtime_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

runtime_error * __thiscall
std::runtime_error::runtime_error
          (runtime_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_140008fa0(param_1);
  exception::exception((exception *)this,pcVar1);
  *(undefined ***)this = vftable;
  return this;
}




undefined8 * FUN_140008560(undefined8 *param_1,uint param_2)

{
  FUN_1400085a0(param_1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




void FUN_1400085a0(undefined8 *param_1)

{
  FUN_1400083b0(param_1);
  return;
}




exception * FUN_1400085c0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::runtime_error::vftable;
  return param_1;
}




void FUN_140008600(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStackY_258 [32];
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226 [2];
  undefined2 local_224;
  undefined2 local_220;
  uint local_21c;
  uint local_218;
  longlong local_210;
  undefined2 *local_208;
  undefined8 local_200 [3];
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  uint local_1a0 [2];
  byte *local_198;
  ulonglong local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined2 *local_150;
  undefined8 local_148 [3];
  longlong local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 local_f8 [3];
  undefined8 local_e0 [3];
  undefined8 local_c8 [3];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [96];
  ulonglong local_10;
  
  local_118 = 0xfffffffffffffffe;
  local_10 = DAT_140032008 ^ (ulonglong)auStackY_258;
  local_218 = 0;
  local_130 = basic_string<>((longlong)local_70,param_2);
  local_128 = FUN_14000ac90((longlong)local_90,param_2);
  FUN_140008df0(local_148);
  uVar2 = FUN_1400068c0(local_90);
  FUN_140008ad0(local_148,uVar2);
  local_1e8 = local_90;
  local_208 = (undefined2 *)FUN_140006500(local_1e8);
  local_150 = (undefined2 *)FUN_140008f60(local_1e8);
  for (; local_208 != local_150; local_208 = local_208 + 1) {
    local_224 = *local_208;
    local_228 = (undefined1)local_224;
    FUN_140008b90(local_148,&local_228);
  }
  FUN_14000c380(local_1a0,2);
  local_1e0 = local_f8;
  local_1d0 = local_e0;
  local_1c0 = local_c8;
  uVar3 = FUN_140001450(&local_227);
  local_1d8 = FUN_140009ca0(local_1e0," !\"#$%&\'()*+,-./AES encryption failed: ",
                            "AES encryption failed: ",uVar3);
  local_1b8 = local_1d8;
  uVar3 = FUN_140001450(local_226);
  local_1c8 = FUN_140009ca0(local_1d0,&DAT_14002bd00," !\"#$%&\'()*+,-./AES encryption failed: ",
                            uVar3);
  local_1b0 = local_1c8;
  local_1a8 = FUN_140008d20(local_1c0,local_148);
  local_120 = FUN_14000d300(local_1a0,local_200,local_1a8,local_1b0,local_1b8);
  bVar1 = FUN_140008a80(local_200);
  if (!bVar1) {
    local_198 = (byte *)FUN_1400089e0(local_200);
    local_21c = (uint)*local_198;
    uVar2 = FUN_140008a40(local_200);
    if (local_21c <= uVar2) {
      local_190 = (ulonglong)local_21c;
      lVar4 = FUN_140008a40(local_200);
      FUN_140008b20(local_200,lVar4 - local_190);
    }
  }
  basic_string<>((longlong)local_b0);
  local_210 = 0;
  while( true ) {
    uVar2 = FUN_140008a40(local_200);
    if (uVar2 <= local_210 + 1U) break;
    local_180 = (undefined1 *)FUN_140008a10(local_200,local_210);
    local_188 = (undefined1 *)FUN_140008a10(local_200,local_210 + 1);
    local_220 = CONCAT11(*local_188,*local_180);
    FID_conflict_push_back(local_b0,local_220);
    local_210 = local_210 + 2;
  }
  basic_string<>(param_1,local_b0);
  local_218 = local_218 | 1;
  FUN_140002250(local_b0);
  FUN_140008cf0(local_200);
  FUN_140008cf0(local_148);
  FUN_140002250(local_90);
  FUN_140002250(local_70);
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_258);
  return;
}




longlong FUN_1400089e0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140002410(param_1);
  return *plVar1 + -1;
}




longlong FUN_140008a10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140002430(param_1);
  return *plVar1 + param_2;
}




longlong FUN_140008a40(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_140002410(param_1);
  plVar2 = (longlong *)FUN_140002430(param_1);
  return *plVar1 - *plVar2;
}




bool FUN_140008a80(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_140002430(param_1);
  plVar2 = (longlong *)FUN_140002410(param_1);
  return *plVar1 == *plVar2;
}




void FUN_140008ad0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  
  uVar1 = FUN_140009580(param_1);
  if (uVar1 < param_2) {
    _Var2 = FUN_1400095c0(param_1);
    if (_Var2 < param_2) {
      FUN_140002910();
    }
    FUN_140009610(param_1,param_2);
  }
  return;
}




void FUN_140008b20(undefined8 param_1,ulonglong param_2)

{
  undefined8 local_18 [3];
  
  FUN_140001460(local_18,param_1);
  FUN_140009d80(param_1,param_2,local_18[0]);
  return;
}




void FUN_140008b60(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_140009540(*param_1,param_2,param_3);
  return;
}




void FUN_140008b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001450(param_2);
  FUN_140008bc0(param_1,uVar1);
  return;
}




void FUN_140008bc0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = FUN_140002620(param_1);
  if (bVar1) {
    uVar2 = FUN_140001450(param_2);
    FUN_140008c30(param_1,uVar2);
  }
  else {
    uVar2 = FUN_140001450(param_2);
    plVar3 = (longlong *)FUN_140002410(param_1);
    FUN_14000a040(param_1,*plVar3,uVar2);
  }
  return;
}




void FUN_140008c30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_140001450(param_2);
  puVar2 = (undefined8 *)FUN_140002410(param_1);
  uVar3 = FUN_140001450(*puVar2);
  uVar4 = FUN_1400023b0(param_1);
  FUN_14000a000(uVar4,uVar3,uVar1);
  FUN_140002410(param_1);
  FUN_140002410(param_1);
  FUN_140002450();
  FUN_140002410(param_1);
  plVar5 = (longlong *)FUN_140002410(param_1);
  *plVar5 = *plVar5 + 1;
  return;
}




void FUN_140008cf0(undefined8 param_1)

{
  FUN_140009140(param_1);
  return;
}




undefined8 * FUN_140008d20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1400023b0(param_2);
  uVar1 = select_on_container_copy_construction(local_38);
  FUN_1400030e0(param_1,uVar1);
  uVar2 = FUN_140008a40(param_2);
  uVar2 = FUN_140009320(param_1,uVar2);
  if ((uVar2 & 0xff) != 0) {
    local_30 = (undefined8 *)FUN_140002430(param_1);
    local_28 = (undefined8 *)FUN_140002410(param_2);
    puVar3 = (undefined8 *)FUN_140002430(param_2);
    local_20 = FUN_140009500(param_1,*puVar3,*local_28,*local_30);
    puVar3 = (undefined8 *)FUN_140002410(param_1);
    *puVar3 = local_20;
  }
  return param_1;
}




undefined8 * FUN_140008df0(undefined8 *param_1)

{
  FUN_140009110(param_1);
  return param_1;
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
  local_20 = (undefined8 *)FUN_1400023b0(param_1);
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




longlong FUN_140008f60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1400023b0(param_1);
  puVar2 = Myptr(puVar1);
  return (longlong)puVar2 + puVar1[2] * 2;
}




void FUN_140008fa0(undefined8 param_1)

{
  _String_val<struct_std::_Simple_types<char>_> *p_Var1;
  
  p_Var1 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1400023b0(param_1);
  Myptr(p_Var1);
  return;
}




void FUN_140008fd0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2)

{
  longlong lVar1;
  __uint64 _Var2;
  
  lVar1 = length((longlong)param_2);
  _Var2 = FUN_140001450(lVar1);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::append
            (param_1,param_2,_Var2);
  return;
}




void FUN_140009010(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1)

{
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  _Tidy_deallocate(param_1);
  FUN_1400022d0();
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
  uVar1 = FUN_1400023b0(param_2);
  uVar1 = FUN_140001450(uVar1);
  FUN_1400074b0(param_1,uVar1);
  puVar4 = local_18;
  for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_140001450(param_2);
  FUN_140009c10(param_1,pbVar2);
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
  FUN_1400023d0((longlong)this);
  _Tidy_init(this);
  assign(this,param_1);
  return this;
}




undefined8 * FUN_140009110(undefined8 *param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
}




void FUN_140009140(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1400028d0(param_1);
  plVar1 = (longlong *)FUN_140002430(param_1);
  if (*plVar1 != 0) {
    FUN_140002410(param_1);
    FUN_140002430(param_1);
    FUN_140002930(param_1);
    uVar2 = FUN_140009580(param_1);
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    uVar4 = FUN_1400023b0(param_1);
    FUN_1400096e0(uVar4,(LPVOID)*puVar3,uVar2);
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_140002410(param_1);
    *puVar3 = 0;
    puVar3 = (undefined8 *)FUN_1400028f0(param_1);
    *puVar3 = 0;
  }
  return;
}




void FUN_140009210(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_1400028d0(param_1);
  plVar1 = (longlong *)FUN_140002430(param_1);
  if (*plVar1 != 0) {
    FUN_140002410(param_1);
    FUN_140002430(param_1);
    FUN_140002930(param_1);
    uVar2 = FUN_140009580(param_1);
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    uVar4 = FUN_1400023b0(param_1);
    FUN_1400096e0(uVar4,(LPVOID)*puVar3,uVar2);
  }
  plVar1 = (longlong *)FUN_140002430(param_1);
  *plVar1 = param_2;
  plVar1 = (longlong *)FUN_140002410(param_1);
  *plVar1 = param_2 + param_3;
  plVar1 = (longlong *)FUN_1400028f0(param_1);
  *plVar1 = param_2 + param_4;
  return;
}




ulonglong FUN_140009320(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  puVar2 = (undefined8 *)FUN_140002430(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_140002410(param_1);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_1400028f0(param_1);
  *puVar2 = 0;
  if (param_2 == 0) {
    uVar3 = (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  else {
    _Var4 = FUN_1400095c0(param_1);
    if (_Var4 < param_2) {
      FUN_140002910();
    }
    uVar5 = FUN_1400023b0(param_1);
    uVar5 = allocate(uVar5,param_2);
    puVar2 = (undefined8 *)FUN_140002430(param_1);
    *puVar2 = uVar5;
    puVar2 = (undefined8 *)FUN_140002430(param_1);
    puVar6 = (undefined8 *)FUN_140002410(param_1);
    *puVar6 = *puVar2;
    plVar7 = (longlong *)FUN_140002430(param_1);
    lVar1 = *plVar7;
    plVar7 = (longlong *)FUN_1400028f0(param_1);
    *plVar7 = lVar1 + param_2;
    uVar3 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  return uVar3;
}




ulonglong FUN_140009410(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  
  uVar1 = FUN_140009580(param_1);
  _Var2 = FUN_1400095c0(param_1);
  uVar3 = param_2;
  if ((uVar1 <= _Var2 - uVar1 / 2) && (uVar3 = uVar1 + uVar1 / 2, uVar3 < param_2)) {
    uVar3 = param_2;
  }
  return uVar3;
}




void FUN_1400094a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140009500(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140009500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400023b0(param_1);
  FUN_14000a470(param_2,param_3,param_4,uVar1);
  return;
}




void FUN_140009540(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  FUN_1400023b0(param_1);
  FUN_14000a550(param_2,param_3);
  return;
}




longlong FUN_140009580(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_1400028f0(param_1);
  plVar2 = (longlong *)FUN_140002430(param_1);
  return *plVar1 - *plVar2;
}




__uint64 FUN_1400095c0(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_1400023b0(param_1);
  local_18 = FUN_140009c90();
  local_10[0] = FUN_140001360();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




void FUN_140009610(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = FUN_140008a40(param_1);
  uVar2 = FUN_1400023b0(param_1);
  lVar3 = allocate(uVar2,param_2);
  puVar4 = (undefined8 *)FUN_140002410(param_1);
  puVar5 = (undefined8 *)FUN_140002430(param_1);
  FUN_1400094a0(param_1,*puVar5,*puVar4,lVar3);
  FUN_140009210(param_1,lVar3,lVar1,param_2);
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
  
  _Var1 = FUN_140001450(param_2);
  std::_Allocate<16,struct_std::_Default_allocate_traits,0>(_Var1);
  return;
}




void FUN_1400096e0(undefined8 param_1,LPVOID param_2,ulonglong param_3)

{
  _Deallocate<>(param_2,param_3);
  return;
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
    public: char * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char> >::_Myptr(void)
   __ptr64
    public: char const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Myptr(void)const __ptr64
    public: unsigned short * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<unsigned
   short> >::_Myptr(void) __ptr64
    public: unsigned short const * __ptr64 __cdecl std::_String_val<struct
   std::_Simple_types<unsigned short> >::_Myptr(void)const __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_String_val<struct_std::_Simple_types<char>_> *
Myptr(_String_val<struct_std::_Simple_types<char>_> *param_1)

{
  bool bVar1;
  undefined8 local_18;
  
  bVar1 = std::_String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(param_1);
  local_18 = param_1;
  if (bVar1) {
    local_18 = (_String_val<struct_std::_Simple_types<char>_> *)
               FUN_140001450(*(undefined8 *)param_1);
  }
  return local_18;
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
  LPVOID local_10;
  
  FUN_1400028d0(this);
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1400023b0(this);
  bVar1 = _String_val<struct_std::_Simple_types<char>_>::_Large_string_engaged(local_20);
  if (bVar1) {
    local_10 = *(LPVOID *)local_20;
    local_18 = FUN_1400023b0(this);
    FUN_140001450(local_20);
    FUN_140001380();
    FUN_1400096e0(local_18,local_10,*(longlong *)(local_20 + 0x18) + 1);
  }
  *(undefined8 *)(local_20 + 0x10) = 0;
  *(undefined8 *)(local_20 + 0x18) = 0xf;
  local_28[0] = 0;
  FUN_140008500(local_20,local_28);
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
  
  local_10 = (undefined1 *)FUN_1400023b0(this);
  *(undefined8 *)(local_10 + 0x10) = 0;
  *(undefined8 *)(local_10 + 0x18) = 0xf;
  local_18[0] = 0;
  FUN_140008500(local_10,local_18);
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
  
  FUN_1400023b0(param_1);
  local_30 = FUN_140009c90();
  local_38 = 0x10;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_140001360();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
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
  _Var2 = FUN_140001450(lVar1);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1400023b0(this);
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
    FUN_140008500(local_18 + param_2,&local_28);
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
  
  FUN_1400084a0(param_1,param_3,param_2);
  local_18[0] = 0;
  FUN_140008500(param_1 + param_2,local_18);
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
  
  local_20 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1400023b0(this);
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
    FUN_140008500(local_10 + local_18 + param_2,&local_28);
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
  
  FUN_1400084a0(param_1,param_2,param_3);
  FUN_1400084a0(param_1 + param_3,param_4,param_5);
  local_18[0] = 0;
  FUN_140008500(param_1 + param_3 + param_5,local_18);
  return;
}




void FUN_140009c10(undefined8 param_1,
                  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_1400023b0(param_2);
  uVar2 = FUN_1400023b0(param_1);
  puVar3 = (undefined1 *)FUN_140001450(uVar2);
  puVar4 = (undefined1 *)FUN_140001450(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_2);
  return;
}




undefined8 FUN_140009c90(void)

{
  return 0xffffffffffffffff;
}




undefined8 *
FUN_140009ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400030e0(param_1,param_4);
  std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
            ((shared_ptr<class___ExceptionPtr> *)&local_res10,(__ExceptionPtr *)&local_res18);
  lVar1 = FUN_140001450(local_res18);
  lVar2 = FUN_140001450(local_res10);
  FUN_14000a970(param_1,lVar2,lVar1);
  return param_1;
}




longlong FUN_140009d20(longlong param_1,
                      basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                      *param_2,char *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140008fd0(param_2,param_3);
  uVar1 = FUN_140001450(uVar1);
  basic_string<>(param_1,uVar1);
  return param_1;
}




void FUN_140009d80(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  uVar1 = FUN_140008a40(param_1);
  uVar2 = FUN_140009580(param_1);
  if (uVar2 < param_2) {
    _Var3 = FUN_1400095c0(param_1);
    if (_Var3 < param_2) {
      FUN_140002910();
    }
    uVar2 = FUN_140009410(param_1,param_2);
    uVar4 = FUN_1400023b0(param_1);
    lVar5 = allocate(uVar4,uVar2);
    FUN_140008b60(local_res18,(undefined1 *)(lVar5 + uVar1),param_2 - uVar1);
    puVar6 = (undefined8 *)FUN_140002410(param_1);
    puVar7 = (undefined8 *)FUN_140002430(param_1);
    FUN_1400094a0(param_1,*puVar7,*puVar6,lVar5);
    FUN_140009210(param_1,lVar5,param_2,uVar2);
  }
  else if (uVar1 < param_2) {
    puVar6 = (undefined8 *)FUN_140002410(param_1);
    uVar4 = FUN_140008b60(local_res18,(undefined1 *)*puVar6,param_2 - uVar1);
    puVar6 = (undefined8 *)FUN_140002410(param_1);
    *puVar6 = uVar4;
    FUN_140002450();
  }
  else if (param_2 != uVar1) {
    plVar8 = (longlong *)FUN_140002430(param_1);
    lVar5 = *plVar8;
    FUN_140002410(param_1);
    FUN_140002450();
    FUN_140002410(param_1);
    FUN_140002930(param_1);
    plVar8 = (longlong *)FUN_140002410(param_1);
    *plVar8 = lVar5 + param_2;
  }
  return;
}




void FUN_14000a000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined1 *)FUN_140001350(1,param_2);
  puVar2 = (undefined1 *)FUN_140001450(param_3);
  *puVar1 = *puVar2;
  return;
}




longlong FUN_14000a040(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  plVar1 = (longlong *)FUN_140002430(param_1);
  lVar11 = param_2 - *plVar1;
  uVar2 = FUN_1400023b0(param_1);
  _Var3 = FUN_140008a40(param_1);
  _Var4 = FUN_1400095c0(param_1);
  if (_Var3 == _Var4) {
    FUN_140002910();
  }
  uVar5 = FUN_140009410(param_1,_Var3 + 1);
  lVar6 = allocate(uVar2,uVar5);
  uVar7 = FUN_140001450(lVar6 + lVar11);
  uVar8 = FUN_140001450(param_3);
  FUN_14000a000(uVar2,uVar7,uVar8);
  plVar1 = (longlong *)FUN_140002410(param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_140002410(param_1);
    puVar10 = (undefined8 *)FUN_140002430(param_1);
    FUN_1400094a0(param_1,*puVar10,*puVar9,lVar6);
  }
  else {
    puVar9 = (undefined8 *)FUN_140002430(param_1);
    FUN_140009500(param_1,*puVar9,param_2,lVar6);
    puVar9 = (undefined8 *)FUN_140002410(param_1);
    FUN_140009500(param_1,param_2,*puVar9,lVar6 + 1 + lVar11);
  }
  FUN_140009210(param_1,lVar6,_Var3 + 1,uVar5);
  plVar1 = (longlong *)FUN_140002430(param_1);
  return *plVar1 + lVar11;
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
  LPVOID local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_1400023b0(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FID_conflict__Xlen();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_1400023b0(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_140001370();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_140001450(local_48);
  if (local_28 < 8) {
    FID_conflict_operator__(local_res18,local_18,(undefined1 *)puVar2,lVar1);
    uVar5 = FUN_140001450(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (LPVOID)*puVar2;
    puVar4 = (undefined1 *)FUN_140001450(local_20);
    FID_conflict_operator__(local_res18,local_18,puVar4,lVar1);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
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
  FUN_140001450(param_1);
  FUN_140003d80(param_1);
  return param_1;
}




undefined8
FUN_14000a470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  undefined8 *local_20;
  undefined8 *local_18;
  longlong local_10 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = (undefined8 *)FUN_140001450(param_1);
  local_10[0] = FUN_140001450(param_2);
  FUN_14000a520((longlong *)&local_20,local_10);
  local_18 = (undefined8 *)select_on_container_copy_construction(local_res18);
  FUN_14000aa00(local_28);
  uVar1 = FUN_14000aa50(local_20,local_10[0],local_18);
  FUN_140003d60(&local_res18,uVar1);
  return local_res18;
}




void FUN_14000a520(longlong *param_1,longlong *param_2)

{
  FUN_14000aa20(param_1,param_2);
  return;
}




void FUN_14000a550(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = local_18;
  for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_14000aa90(param_1,param_2);
  return;
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
    FID_conflict__Xlen();
  }
  puVar2 = (undefined8 *)FUN_1400023b0(this);
  local_18 = puVar2[3];
  local_20 = FID_conflict__Calculate_growth(this,param_1);
  local_28 = FUN_1400023b0(this);
  local_30 = allocate(local_28,local_20 + 1);
  FUN_140001370();
  puVar2[2] = param_1;
  puVar2[3] = local_20;
  pcVar3 = (char *)FUN_140001450(local_30);
  <lambda_66f57f934f28d61049862f64df852ff0>::operator()(local_res18,pcVar3,param_1,local_res20);
  if (local_18 < 0x10) {
    uVar4 = FUN_140001450(puVar2);
    construct<>(local_28,uVar4,&local_30);
  }
  else {
    FUN_1400096e0(local_28,(LPVOID)*puVar2,local_18 + 1);
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
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  LPVOID local_20;
  char *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  pcVar2 = (char *)FUN_1400023b0(this);
  _Var1 = *(__uint64 *)(pcVar2 + 0x10);
  _Var3 = FID_conflict_max_size(this);
  if (_Var3 - _Var1 < param_1) {
    FID_conflict__Xlen();
  }
  local_38 = _Var1 + param_1;
  local_28 = *(ulonglong *)(pcVar2 + 0x18);
  local_30 = FID_conflict__Calculate_growth(this,local_38);
  local_40 = FUN_1400023b0(this);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_140001370();
  *(ulonglong *)(pcVar2 + 0x10) = local_38;
  *(__uint64 *)(pcVar2 + 0x18) = local_30;
  local_18 = (char *)FUN_140001450(local_48);
  if (local_28 < 0x10) {
    <lambda_65e615be2a453ca0576c979606f46740>::operator()
              (local_res18,local_18,pcVar2,_Var1,local_res20,param_5);
    uVar5 = FUN_140001450(pcVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = *(LPVOID *)pcVar2;
    pcVar4 = (char *)FUN_140001450(local_20);
    <lambda_65e615be2a453ca0576c979606f46740>::operator()
              (local_res18,local_18,pcVar4,_Var1,local_res20,param_5);
    FUN_1400096e0(local_40,local_20,local_28 + 1);
    *(undefined8 *)pcVar2 = local_48;
  }
  return this;
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
  local_20 = FUN_1400023b0(param_1);
  local_28 = param_2 | 0xf;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




void FUN_14000a970(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_14000aad0(param_2,param_3);
  uVar2 = FUN_140001450(uVar1);
  uVar2 = FUN_140009320(param_1,uVar2);
  if ((uVar2 & 0xff) != 0) {
    puVar3 = (undefined8 *)FUN_140002430(param_1);
    uVar1 = FUN_140009500(param_1,param_2,param_3,*puVar3);
    puVar3 = (undefined8 *)FUN_140002410(param_1);
    *puVar3 = uVar1;
  }
  return;
}




undefined8 FUN_14000aa00(undefined8 param_1)

{
  return param_1;
}




longlong FUN_14000aa20(longlong *param_1,longlong *param_2)

{
  return *param_2 - *param_1;
}




void FUN_14000aa50(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_14000ab00(param_1,param_2,param_3);
  return;
}




void FUN_14000aa90(undefined1 *param_1,longlong param_2)

{
  FUN_14000ab70(param_1,(longlong)(param_1 + param_2));
  return;
}




void FUN_14000aad0(longlong param_1,longlong param_2)

{
  FUN_14000abc0(param_1,param_2);
  return;
}




longlong FUN_14000ab00(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140013410(param_3,param_1,param_2 - (longlong)param_1);
  return (longlong)param_3 + (param_2 - (longlong)param_1);
}




longlong FUN_14000ab70(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return param_2;
}




longlong FUN_14000abc0(longlong param_1,longlong param_2)

{
  return param_2 - param_1;
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




undefined1 FUN_14000ac40(ushort param_1)

{
  int iVar1;
  undefined1 local_18;
  
  iVar1 = isalnum((uint)param_1);
  if (((iVar1 == 0) && (param_1 != 0x2b)) && (param_1 != 0x2f)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}




void FUN_14000ac90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  wchar_t wVar2;
  int iVar3;
  undefined8 uVar4;
  short *psVar5;
  ushort *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  undefined8 local_70;
  undefined1 local_68 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_48 [32];
  wchar_t local_28 [3];
  short sStack_22;
  short local_20 [4];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uVar4 = FUN_1400068c0(param_2);
  local_7c = (int)uVar4;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  pwVar7 = local_28;
  for (lVar8 = 8; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pwVar7 = 0;
    pwVar7 = (wchar_t *)((longlong)pwVar7 + 1);
  }
  psVar5 = local_20;
  for (lVar8 = 6; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)psVar5 = 0;
    psVar5 = (short *)((longlong)psVar5 + 1);
  }
  basic_string<>((longlong)local_68);
  basic_string<>(local_48,L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
  while( true ) {
    local_74 = local_7c;
    iVar3 = local_7c + -1;
    bVar9 = local_7c == 0;
    local_7c = iVar3;
    if ((bVar9) || (psVar5 = (short *)FUN_14000b0e0(param_2,(longlong)local_80), *psVar5 == 0x3d))
    break;
    puVar6 = (ushort *)FUN_14000b0e0(param_2,(longlong)local_80);
    cVar1 = FUN_14000ac40(*puVar6);
    if (cVar1 == '\0') break;
    pwVar7 = (wchar_t *)FUN_14000b0e0(param_2,(longlong)local_80);
    local_28[local_88] = *pwVar7;
    local_88 = local_88 + 1;
    local_80 = local_80 + 1;
    if (local_88 == 4) {
      for (local_88 = 0; local_88 < 4; local_88 = local_88 + 1) {
        wVar2 = FUN_14000b080(local_48,local_28[local_88],0);
        local_28[local_88] = wVar2;
      }
      local_20[0] = (short)((int)((ushort)local_28[1] & 0x30) >> 4) + local_28[0] * 4;
      local_20[1] = (short)(((ushort)local_28[1] & 0xf) << 4) +
                    (short)((int)((ushort)local_28[2] & 0x3c) >> 2);
      local_20[2] = (short)(((ushort)local_28[2] & 3) << 6) + sStack_22;
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        FUN_14000b120(local_68,local_20[local_88]);
      }
      local_88 = 0;
    }
  }
  if (local_88 != 0) {
    for (local_84 = 0; local_84 < local_88; local_84 = local_84 + 1) {
      wVar2 = FUN_14000b080(local_48,local_28[local_84],0);
      local_28[local_84] = wVar2;
    }
    local_20[0] = (short)((int)((ushort)local_28[1] & 0x30) >> 4) + local_28[0] * 4;
    local_20[1] = (short)(((ushort)local_28[1] & 0xf) << 4) +
                  (short)((int)((ushort)local_28[2] & 0x3c) >> 2);
    for (local_84 = 0; local_84 < local_88 + -1; local_84 = local_84 + 1) {
      FUN_14000b120(local_68,local_20[local_84]);
    }
  }
  basic_string<>(param_1,local_68);
  local_78 = local_78 | 1;
  FUN_140002250(local_48);
  FUN_140002250(local_68);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_14000b080(undefined8 param_1,wchar_t param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1400023b0(param_1);
  puVar2 = Myptr(puVar1);
  FUN_14000b150((longlong)puVar2,puVar1[2],param_3,param_2);
  return;
}




longlong FUN_14000b0e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400023b0(param_1);
  puVar1 = Myptr(puVar1);
  return (longlong)puVar1 + param_2 * 2;
}




undefined8 FUN_14000b120(undefined8 param_1,undefined2 param_2)

{
  FID_conflict_push_back(param_1,param_2);
  return param_1;
}




longlong FUN_14000b150(longlong param_1,ulonglong param_2,ulonglong param_3,wchar_t param_4)

{
  longlong lVar1;
  wchar_t local_res20 [4];
  
  if ((param_3 < param_2) &&
     (local_res20[0] = param_4,
     lVar1 = FUN_14000b1d0((wchar_t *)(param_1 + param_3 * 2),param_2 - param_3,local_res20),
     lVar1 != 0)) {
    return lVar1 - param_1 >> 1;
  }
  return -1;
}




void FUN_14000b1d0(wchar_t *param_1,size_t param_2,wchar_t *param_3)

{
  wmemchr(param_1,*param_3,param_2);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    _vsprintf_s_l
    _vswprintf_c_l
    _vswprintf_s_l
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl
FID_conflict__vsprintf_s_l
          (wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_140004150();
  local_14 = __stdio_common_vswprintf
                       (*puVar1,_DstBuf,_DstSize,_Format,(__crt_locale_pointers *)_Locale,_ArgList);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




void FUN_14000b270(wchar_t *param_1,size_t param_2,wchar_t *param_3,_locale_t param_4,
                  va_list param_5)

{
  FID_conflict__vsprintf_s_l(param_1,param_2,param_3,param_4,param_5);
  return;
}




/* Library Function - Single Match
    _vsprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FUN_14000b270((wchar_t *)_DstBuf,0xffffffffffffffff,(wchar_t *)_Format,param_3,_ArgList);
  return iVar1;
}




/* Library Function - Single Match
    sprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  iVar1 = _vsprintf_l(_Dest,_Format,(_locale_t)0x0,(va_list)&local_res18);
  return iVar1;
}




void FUN_14000b350(wchar_t *param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_8c8 [32];
  undefined4 local_8a8;
  longlong local_8a0;
  longlong local_898;
  longlong local_890;
  longlong local_888;
  int local_880;
  int local_87c;
  wchar_t *local_878;
  wchar_t *local_870;
  wchar_t *local_868;
  wchar_t *local_860;
  wchar_t local_858 [264];
  wchar_t local_648 [264];
  wchar_t local_438 [264];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_8c8;
  local_8a8 = 0;
  FUN_14000b960(param_1);
  pwVar3 = local_858;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  local_880 = FUN_14000b590(local_858);
  pwVar3 = local_648;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  local_87c = FUN_14000b5e0(local_648);
  if ((local_880 != 0) || (local_87c != 0)) {
    pwVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    iVar1 = FUN_14000b780((longlong)local_228);
    if (iVar1 != 0) {
      pwVar3 = local_438;
      for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)pwVar3 = 0;
        pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
      }
      FUN_14000bea0((char *)local_438);
      local_878 = local_858;
      local_8a0 = -1;
      do {
        local_8a0 = local_8a0 + 1;
      } while (local_878[local_8a0] != L'\0');
      local_870 = local_648;
      local_898 = -1;
      do {
        local_898 = local_898 + 1;
      } while (local_870[local_898] != L'\0');
      local_868 = local_228;
      local_890 = -1;
      do {
        local_890 = local_890 + 1;
      } while (local_868[local_890] != L'\0');
      local_860 = local_438;
      local_888 = -1;
      do {
        local_888 = local_888 + 1;
      } while (local_860[local_888] != L'\0');
      if ((ulonglong)(local_8a0 + local_898 + local_890 + local_888) < 0x104) {
        wcscpy_s(param_1,0x104,local_858);
        wcscat_s(param_1,0x104,local_648);
        wcscat_s(param_1,0x104,local_438);
        wcscat_s(param_1,0x104,local_228);
      }
    }
  }
  local_8a8 = 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_8c8);
  return;
}




undefined4 FUN_14000b590(wchar_t *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14000bbb0((HKEY)0xffffffff80000002,L"HARDWARE\\DESCRIPTION\\System",
                        L"SystemBiosVersion",param_1);
  return uVar1;
}




void FUN_14000b5e0(wchar_t *param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  longlong local_460;
  longlong local_458;
  wchar_t *local_450;
  wchar_t *local_448;
  wchar_t local_438 [264];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_488;
  local_468 = 0;
  pwVar3 = local_438;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  iVar1 = FUN_14000bbb0((HKEY)0xffffffff80000002,
                        L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",L"ProcessorNameString"
                        ,local_438);
  if (iVar1 != 0) {
    pwVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    iVar1 = FUN_14000bbb0((HKEY)0xffffffff80000002,
                          L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",L"~MHz",local_228);
    if (iVar1 != 0) {
      local_450 = local_438;
      local_460 = -1;
      do {
        local_460 = local_460 + 1;
      } while (local_450[local_460] != L'\0');
      local_448 = local_228;
      local_458 = -1;
      do {
        local_458 = local_458 + 1;
      } while (local_448[local_458] != L'\0');
      if ((ulonglong)(local_460 + local_458) < 0xf0) {
        wcscpy_s(param_1,0x104,local_438);
        wcscat_s(param_1,0x104,L" ");
        wcscat_s(param_1,0x104,local_228);
        wcscat_s(param_1,0x104,L"MHz");
        local_468 = 1;
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_488);
  return;
}




void FUN_14000b780(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_88 [32];
  LPVOID local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  LPVOID local_48;
  LPVOID local_40;
  LPVOID local_38;
  LPVOID local_30;
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_140032008 ^ (ulonglong)auStack_88;
  local_50 = 0;
  local_60 = 0x2c0;
  local_68 = (LPVOID)thunk_FUN_14001011c(0x2c0);
  local_48 = local_68;
  local_54 = GetAdaptersInfo(local_68,&local_60);
  if (local_54 == 0x6f) {
    local_40 = local_68;
    _free_base(local_68);
    local_68 = (LPVOID)thunk_FUN_14001011c((ulonglong)local_60);
    local_38 = local_68;
    local_54 = GetAdaptersInfo(local_68,&local_60);
  }
  if ((local_54 == 0) && (*(int *)((longlong)local_68 + 0x194) == 6)) {
    local_58 = 0;
    for (local_5c = 0; local_5c < *(uint *)((longlong)local_68 + 0x194); local_5c = local_5c + 1) {
      pwVar2 = local_28;
      for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
        *(undefined1 *)pwVar2 = 0;
        pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
      }
      sprintf((char *)local_28,(char *)L"%02X-",
              (ulonglong)*(byte *)((longlong)local_68 + (longlong)(int)local_5c + 0x198));
      wcscpy_s((wchar_t *)(param_1 + (longlong)local_58 * 2),(longlong)(0x104 - local_58),local_28);
      local_58 = local_58 + 3;
    }
    *(undefined2 *)(param_1 + 0x22) = 0;
    local_50 = 1;
  }
  if (local_68 != (LPVOID)0x0) {
    local_30 = local_68;
    _free_base(local_68);
    local_68 = (LPVOID)0x0;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_88);
  return;
}




void FUN_14000b960(wchar_t *param_1)

{
  longlong lVar1;
  UUID *pUVar2;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  ulong local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  UUID local_70;
  _SYSTEMTIME local_60;
  ulonglong local_50;
  
  local_50 = DAT_140032008 ^ (ulonglong)auStack_128;
  local_84 = 0;
  pUVar2 = &local_70;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pUVar2->Data1 = 0;
    pUVar2 = (UUID *)((longlong)&pUVar2->Data1 + 1);
  }
  UuidCreate(&local_70);
  GetLocalTime(&local_60);
  local_108 = (uint)local_60.wDay;
  local_7c = (uint)local_60.wMonth;
  local_90 = (uint)local_70.Data4[7];
  local_98 = (uint)local_70.Data4[6];
  local_a0 = (uint)local_70.Data4[5];
  local_a8 = (uint)local_70.Data4[4];
  local_b0 = (uint)local_70.Data4[3];
  local_b8 = (uint)local_70.Data4[2];
  local_c0 = (uint)local_70.Data4[1];
  local_c8 = (uint)local_70.Data4[0];
  local_d0 = (uint)local_70.Data3;
  local_d8 = (uint)local_70.Data2;
  local_e0 = local_70.Data1;
  local_e8 = (uint)local_60.wMilliseconds;
  local_f0 = (uint)local_60.wSecond;
  local_f8 = (uint)local_60.wMinute;
  local_100 = (uint)local_60.wHour;
  local_80 = local_108;
  local_78 = FUN_140006e70(param_1,
                           L"%04d-%02d-%02d_%02d-%02d-%02d-%04d_%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X"
                           ,(ulonglong)local_60.wYear,(ulonglong)local_7c);
  local_88 = (uint)(0 < local_78);
  local_84 = local_88;
  __security_check_cookie(local_50 ^ (ulonglong)auStack_128);
  return;
}




void FUN_14000bbb0(HKEY param_1,LPCWSTR param_2,LPCWSTR param_3,wchar_t *param_4)

{
  LSTATUS LVar1;
  longlong lVar2;
  uint *puVar3;
  LPDWORD lpType;
  undefined1 auStackY_2a8 [32];
  DWORD local_278;
  DWORD local_274;
  DWORD local_270;
  undefined4 local_26c;
  HKEY local_268;
  wchar_t *local_260;
  longlong local_258;
  uint local_250;
  ulonglong local_248;
  ulonglong local_240;
  wchar_t *local_238;
  uint local_228 [132];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_2a8;
  local_26c = 0;
  local_268 = (HKEY)0x0;
  if ((((param_1 != (HKEY)0x0) && (param_2 != (LPCWSTR)0x0)) && (param_3 != (LPCWSTR)0x0)) &&
     ((LVar1 = RegOpenKeyW(param_1,param_2,&local_268), LVar1 == 0 && (local_268 != (HKEY)0x0)))) {
    local_278 = 0;
    puVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (uint *)((longlong)puVar3 + 1);
    }
    local_274 = 0x208;
    lpType = &local_278;
    LVar1 = RegQueryValueExW(local_268,param_3,(LPDWORD)0x0,lpType,(LPBYTE)local_228,&local_274);
    if (((LVar1 == 0) && (((local_278 == 1 || (local_278 == 7)) || (local_278 == 4)))) &&
       (local_274 < 0x204)) {
      local_248 = (ulonglong)local_274 / 2 << 1;
      if (0x207 < local_248) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_228 + local_248) = 0;
      local_240 = ((ulonglong)local_274 / 2) * 2 + 2;
      if (0x207 < local_240) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_228 + local_240) = 0;
      local_26c = 1;
      local_270 = local_278;
      if (local_278 == 1) {
        wcscpy_s(param_4,0x104,(wchar_t *)local_228);
      }
      else if (local_278 == 4) {
        local_250 = local_228[0];
        FUN_140006e70(param_4,L"%d",(ulonglong)local_228[0],lpType);
      }
      else if (local_278 == 7) {
        *param_4 = L'\0';
        local_260 = (wchar_t *)local_228;
        while (*local_260 != L'\0') {
          wcscat_s(param_4,0x104,local_260);
          local_238 = local_260;
          local_258 = -1;
          lVar2 = local_258;
          do {
            local_258 = lVar2;
            lVar2 = local_258 + 1;
          } while (local_260[lVar2] != L'\0');
          local_260 = local_260 + local_258 + 2;
          local_258 = lVar2;
        }
      }
      else {
        local_26c = 0;
      }
    }
  }
  if (local_268 != (HKEY)0x0) {
    RegCloseKey(local_268);
    local_268 = (HKEY)0x0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_2a8);
  return;
}




void FUN_14000bea0(char *param_1)

{
  BOOL BVar1;
  longlong lVar2;
  _MEMORYSTATUSEX *p_Var3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  _MEMORYSTATUSEX local_58;
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_88;
  local_68 = 0;
  p_Var3 = &local_58;
  for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&p_Var3->dwLength = 0;
    p_Var3 = (_MEMORYSTATUSEX *)((longlong)&p_Var3->dwLength + 1);
  }
  local_58.dwLength = 0x40;
  BVar1 = GlobalMemoryStatusEx(&local_58);
  if (BVar1 != 0) {
    sprintf(param_1,(char *)L" M:%I64X ",local_58.ullTotalPhys);
    local_68 = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}




void FUN_14000bf30(char *param_1)

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
  char *local_660;
  char *local_658;
  undefined1 local_648 [528];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_6e8;
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
      local_6a4 = FID_conflict_sprintf_s(param_1,0x104,(char *)L"S-%lu-",1);
      if (local_6a4 == -1) {
        local_6a4 = -1;
      }
      else {
        local_6a8 = local_6a8 + local_6a4;
        local_690 = -1;
        do {
          local_690 = local_690 + 1;
        } while (*(short *)(param_1 + local_690 * 2) != 0);
        local_658 = param_1 + local_690 * 2;
        local_660 = param_1;
        local_6a4 = FID_conflict_sprintf_s
                              (local_658,(ulonglong)(0x104 - local_6a8),(char *)L"%-lu",
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
              local_6a4 = FID_conflict_sprintf_s
                                    (param_1 + (ulonglong)local_6a8 * 2,
                                     (ulonglong)(0x104 - local_6a8),(char *)L"-%lu",
                                     (ulonglong)*local_668);
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




/* Library Function - Single Match
    public: __cdecl std::logic_error::logic_error(char const * __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

logic_error * __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  exception::exception((exception *)this,param_1);
  *(undefined ***)this = vftable;
  return this;
}




/* Library Function - Single Match
    public: __cdecl std::domain_error::domain_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

domain_error * __thiscall
std::domain_error::domain_error
          (domain_error *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_140008fa0(param_1);
  logic_error::logic_error((logic_error *)this,pcVar1);
  *(undefined ***)this = length_error::vftable;
  return this;
}




undefined8 * FUN_14000c2e0(undefined8 *param_1,uint param_2)

{
  FUN_14000c320(param_1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




void FUN_14000c320(undefined8 *param_1)

{
  FUN_1400085a0(param_1);
  return;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_14000c340(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             uint param_2)

{
  FUN_14000d640(param_1,param_2);
  return param_1;
}




undefined4 * FUN_14000c380(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    *param_1 = 4;
    param_1[1] = 10;
  }
  else if (param_2 == 1) {
    *param_1 = 6;
    param_1[1] = 0xc;
  }
  else if (param_2 == 2) {
    *param_1 = 8;
    param_1[1] = 0xe;
  }
  return param_1;
}




void FUN_14000c400(uint *param_1,longlong param_2,uint param_3,longlong param_4,undefined1 *param_5)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStackY_98 [32];
  uint local_68;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_140032008 ^ (ulonglong)auStackY_98;
  FUN_14000c5b0(param_1,param_3);
  pvVar1 = operator_new((ulonglong)param_3);
  pvVar2 = operator_new((ulonglong)((param_1[1] + 1) * 0x10));
  FUN_14000cc80(param_1,param_4,(longlong)pvVar2);
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_5;
    param_5 = param_5 + 1;
    puVar4 = puVar4 + 1;
  }
  for (local_68 = 0; local_68 < param_3; local_68 = local_68 + 0x10) {
    FUN_14000c710((longlong)param_1,param_2 + (ulonglong)local_68,
                  (longlong)pvVar1 + (ulonglong)local_68,(longlong)pvVar2);
    FUN_14000d200(param_1,(longlong)local_38,(longlong)pvVar1 + (ulonglong)local_68,
                  (longlong)pvVar1 + (ulonglong)local_68,0x10);
    puVar4 = (undefined1 *)(param_2 + (ulonglong)local_68);
    puVar5 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  _free_base(pvVar2);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_98);
  return;
}




void FUN_14000c5b0(undefined8 param_1,uint param_2)

{
  undefined1 auStack_b8 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_98;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_90;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_88;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_80;
  undefined8 local_78;
  domain_error local_70 [24];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_58 [32];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_38 [32];
  ulonglong local_18;
  
  local_78 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_b8;
  if (param_2 % 0x10 != 0) {
    local_98 = FUN_14000c340(local_38,0x10);
    local_90 = local_98;
    local_88 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_14000d710((longlong)local_58,
                             (_String_val<struct_std::_Simple_types<char>_> *)
                             "Plaintext length must be divisible by ",local_98);
    local_80 = local_88;
    std::domain_error::domain_error(local_70,local_88);
    FUN_140011470((longlong *)local_70,&DAT_140030c30);
    FUN_140009010(local_58);
    FUN_140009010(local_38);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_b8);
  return;
}




exception * FUN_14000c690(exception *param_1,exception *param_2)

{
  FUN_14000c6d0(param_1,param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




exception * FUN_14000c6d0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  return param_1;
}




void FUN_14000c710(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  int local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_58;
  for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      local_28[(ulonglong)local_34 + (ulonglong)local_38 * 4] =
           *(undefined1 *)(param_2 + (ulonglong)(local_38 + local_34 * 4));
    }
  }
  FUN_14000c9b0(param_1,(longlong)local_28,param_4 + (ulonglong)(uint)(*(int *)(param_1 + 4) << 4));
  local_30 = *(int *)(param_1 + 4);
  while (local_30 = local_30 + -1, local_30 != 0) {
    FUN_14000cf40(param_1,(longlong)local_28);
    FUN_14000d190(param_1,(longlong)local_28);
    FUN_14000c9b0(param_1,(longlong)local_28,param_4 + (ulonglong)(uint)(local_30 << 4));
    FUN_14000d010(param_1,(longlong)local_28);
  }
  FUN_14000cf40(param_1,(longlong)local_28);
  FUN_14000d190(param_1,(longlong)local_28);
  FUN_14000c9b0(param_1,(longlong)local_28,param_4);
  for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      *(undefined1 *)(param_3 + (ulonglong)(local_38 + local_34 * 4)) =
           local_28[(ulonglong)local_34 + (ulonglong)local_38 * 4];
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}




void FUN_14000c8f0(undefined8 param_1,longlong param_2,uint param_3,int param_4)

{
  uint local_18;
  undefined4 local_14 [5];
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    *(undefined1 *)((longlong)local_14 + (ulonglong)local_18) =
         *(undefined1 *)(param_2 + (ulonglong)param_3 * 4 + (ulonglong)(local_18 + param_4) % 4);
  }
  *(undefined4 *)(param_2 + (ulonglong)param_3 * 4) = local_14[0];
  return;
}




uint FUN_14000c980(undefined8 param_1,byte param_2)

{
  return (uint)param_2 << 1 ^ ((int)(uint)param_2 >> 7) * 0x1b;
}




void FUN_14000c9b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      *(byte *)(param_2 + (ulonglong)local_18 * 4 + (ulonglong)local_14) =
           *(byte *)(param_2 + (ulonglong)local_18 * 4 + (ulonglong)local_14) ^
           *(byte *)(param_3 + (ulonglong)(local_18 + local_14 * 4));
    }
  }
  return;
}




void FUN_14000ca40(undefined8 param_1,longlong param_2)

{
  int local_18;
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    *(undefined *)(param_2 + local_18) =
         (&DAT_14002c220)[(int)(*(byte *)(param_2 + local_18) & 0xf)];
  }
  return;
}




void FUN_14000cad0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_2[1];
  param_2[1] = param_2[2];
  param_2[2] = param_2[3];
  param_2[3] = uVar1;
  return;
}




void FUN_14000cb80(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    *(byte *)(param_4 + local_18) = *(byte *)(param_2 + local_18) ^ *(byte *)(param_3 + local_18);
  }
  return;
}




void FUN_14000cbe0(undefined8 param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte local_18;
  uint local_14;
  
  local_18 = 1;
  for (local_14 = 0; local_14 < param_3 - 1U; local_14 = local_14 + 1) {
    uVar1 = FUN_14000c980(param_1,local_18);
    local_18 = (byte)uVar1;
  }
  *param_2 = local_18;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  return;
}




void FUN_14000cc80(uint *param_1,longlong param_2,longlong param_3)

{
  uint local_18;
  byte local_14;
  byte local_13;
  byte bStack_12;
  byte bStack_11;
  uint local_10;
  byte local_c [12];
  
  for (local_18 = 0; local_18 < *param_1 << 2; local_18 = local_18 + 1) {
    *(undefined1 *)(param_3 + (ulonglong)local_18) = *(undefined1 *)(param_2 + (ulonglong)local_18);
  }
  for (local_18 = *param_1 << 2; local_18 < (param_1[1] + 1) * 0x10; local_18 = local_18 + 4) {
    local_14 = *(byte *)(param_3 + (ulonglong)(local_18 - 4));
    local_13 = *(byte *)(param_3 + (ulonglong)(local_18 - 3));
    bStack_12 = *(byte *)(param_3 + (ulonglong)(local_18 - 2));
    bStack_11 = *(byte *)(param_3 + (ulonglong)(local_18 - 1));
    if ((int)(((ulonglong)local_18 / 4) % (ulonglong)*param_1) == 0) {
      FUN_14000cad0(param_1,&local_14);
      FUN_14000ca40(param_1,(longlong)&local_14);
      local_10 = *param_1 << 2;
      FUN_14000cbe0(param_1,local_c,local_18 / local_10);
      FUN_14000cb80(param_1,(longlong)&local_14,(longlong)local_c,(longlong)&local_14);
    }
    else if ((6 < *param_1) && ((int)(((ulonglong)local_18 / 4) % (ulonglong)*param_1) == 4)) {
      FUN_14000ca40(param_1,(longlong)&local_14);
    }
    *(byte *)(param_3 + (ulonglong)local_18) =
         *(byte *)(param_3 + (ulonglong)(local_18 + *param_1 * -4)) ^ local_14;
    *(byte *)(param_3 + (ulonglong)(local_18 + 1)) =
         *(byte *)(param_3 + (ulonglong)(local_18 + 1 + *param_1 * -4)) ^ local_13;
    *(byte *)(param_3 + (ulonglong)(local_18 + 2)) =
         *(byte *)(param_3 + (ulonglong)(local_18 + 2 + *param_1 * -4)) ^ bStack_12;
    *(byte *)(param_3 + (ulonglong)(local_18 + 3)) =
         *(byte *)(param_3 + (ulonglong)(local_18 + 3 + *param_1 * -4)) ^ bStack_11;
  }
  return;
}




void FUN_14000cf40(undefined8 param_1,longlong param_2)

{
  uint local_24;
  uint local_20;
  
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      *(undefined *)(param_2 + (ulonglong)local_24 * 4 + (ulonglong)local_20) =
           (&DAT_14002c120)
           [(int)(*(byte *)(param_2 + (ulonglong)local_24 * 4 + (ulonglong)local_20) & 0xf)];
    }
  }
  return;
}




void FUN_14000d010(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  byte abStack_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_140032008 ^ (ulonglong)&local_48;
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    pbVar2 = abStack_20 + local_28 * 4;
    for (lVar1 = 4; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pbVar2 = 0;
      pbVar2 = pbVar2 + 1;
    }
  }
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
        abStack_20[local_40 + local_48 * 4] =
             abStack_20[local_40 + local_48 * 4] ^
             (&DAT_14002c320)
             [(ulonglong)*(byte *)(param_2 + local_38 * 4 + local_40) +
              (ulonglong)(byte)(&DAT_14002c110)[local_38 + local_48 * 4] * 0x100];
      }
    }
  }
  for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
    *(undefined4 *)(param_2 + local_30 * 4) = *(undefined4 *)(abStack_20 + local_30 * 4);
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_48);
  return;
}




void FUN_14000d190(undefined8 param_1,longlong param_2)

{
  FUN_14000c8f0(param_1,param_2,1,3);
  FUN_14000c8f0(param_1,param_2,2,2);
  FUN_14000c8f0(param_1,param_2,3,1);
  return;
}




void FUN_14000d200(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  uint param_5)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 1) {
    *(byte *)(param_4 + (ulonglong)local_18) =
         *(byte *)(param_2 + (ulonglong)local_18) ^ *(byte *)(param_3 + (ulonglong)local_18);
  }
  return;
}




undefined8 * FUN_14000d260(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  undefined1 local_28 [4];
  uint local_24;
  undefined8 local_20 [4];
  
  local_24 = 0;
  uVar1 = FUN_140001450(local_28);
  FUN_140009ca0(local_20,param_3,param_3 + (ulonglong)param_4,uVar1);
  basic_string<>(param_2,local_20);
  local_24 = local_24 | 1;
  FUN_140008cf0(local_20);
  return param_2;
}




void FUN_14000d2e0(undefined8 param_1,undefined8 param_2)

{
  FUN_14000d460(param_2);
  return;
}




undefined8 *
FUN_14000d300(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 local_20 [4];
  
  puVar1 = (undefined1 *)FUN_14000d2e0(param_1,param_5);
  lVar2 = FUN_14000d2e0(param_1,param_4);
  lVar3 = FUN_140008a40(param_3);
  lVar4 = FUN_14000d2e0(param_1,param_3);
  pvVar5 = (LPVOID)FUN_14000c400(param_1,lVar4,(uint)lVar3,lVar2,puVar1);
  lVar2 = FUN_140008a40(param_3);
  FUN_14000d260(param_1,local_20,(longlong)pvVar5,(uint)lVar2);
  _free_base(pvVar5);
  basic_string<>(param_2,local_20);
  FUN_140008cf0(local_20);
  FUN_140008cf0(param_3);
  FUN_140008cf0(param_4);
  FUN_140008cf0(param_5);
  return param_2;
}




void FUN_14000d460(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140002430(param_1);
  FUN_140001450(*puVar1);
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

undefined8 * basic_string<>(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar1 = FUN_1400023b0(param_2);
  uVar1 = FUN_140001450(uVar1);
  FUN_1400030e0(param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_140001450(param_2);
  FUN_14000d510(param_1,uVar1);
  return param_1;
}




void FUN_14000d510(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14000d5f0(param_1,param_2);
  puVar1 = (undefined8 *)FUN_140002430(param_2);
  puVar2 = (undefined8 *)FUN_140002430(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_140002410(param_2);
  puVar2 = (undefined8 *)FUN_140002410(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_1400028f0(param_2);
  puVar2 = (undefined8 *)FUN_1400028f0(param_1);
  *puVar2 = *puVar1;
  puVar1 = (undefined8 *)FUN_140002430(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)FUN_140002410(param_2);
  *puVar1 = 0;
  puVar1 = (undefined8 *)FUN_1400028f0(param_2);
  *puVar1 = 0;
  return;
}




void FUN_14000d5f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1400023b0(param_2);
  FUN_1400023b0(param_1);
  FUN_140001380();
  return;
}




longlong FUN_14000d630(longlong param_1)

{
  return param_1 + 0x15;
}




/* WARNING: Removing unreachable block (ram,0x00014000d68c) */

void FUN_14000d640(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  uint local_38;
  char *local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140032008 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_48 = (char *)FUN_14000d630((longlong)local_28);
  local_3c = param_2;
  local_30 = local_48;
  local_48 = FUN_14000daf0(local_48,param_2);
  uVar1 = FUN_140001450(local_40);
  FUN_14000db50(param_1,local_48,local_30,uVar1);
  local_38 = local_38 | 1;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




longlong FUN_14000d710(longlong param_1,_String_val<struct_std::_Simple_types<char>_> *param_2,
                      undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14000d770(param_3,0,param_2);
  uVar1 = FUN_140001450(uVar1);
  basic_string<>(param_1,uVar1);
  return param_1;
}




void FUN_14000d770(undefined8 param_1,ulonglong param_2,
                  _String_val<struct_std::_Simple_types<char>_> *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = length((longlong)param_3);
  uVar2 = FUN_140001450(lVar1);
  FUN_14000d7c0(param_1,param_2,param_3,uVar2);
  return;
}




undefined8
FUN_14000d7c0(undefined8 param_1,ulonglong param_2,
             _String_val<struct_std::_Simple_types<char>_> *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_48 [8];
  _String_val<struct_std::_Simple_types<char>_> *local_40;
  ulonglong local_38;
  _String_val<struct_std::_Simple_types<char>_> *local_30;
  longlong local_28;
  _String_val<struct_std::_Simple_types<char>_> *local_20;
  _String_val<struct_std::_Simple_types<char>_> *local_18;
  
  local_30 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_1400023b0(param_1);
  Check_offset((longlong)local_30,param_2);
  local_28 = *(longlong *)(local_30 + 0x10);
  if ((ulonglong)(*(longlong *)(local_30 + 0x18) - local_28) < param_4) {
    puVar2 = local_48;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = FUN_14000dbe0(param_1,param_4,local_48[0],param_2,param_3,param_4);
  }
  else {
    *(ulonglong *)(local_30 + 0x10) = local_28 + param_4;
    local_20 = Myptr(local_30);
    local_40 = local_20 + param_2;
    local_38 = param_4;
    if ((local_40 < param_3 + param_4) && (param_3 <= local_20 + local_28)) {
      if (param_3 < local_40) {
        local_38 = (longlong)local_40 - (longlong)param_3;
      }
      else {
        local_38 = 0;
      }
    }
    std::char_traits<char>::move
              ((char *)(local_40 + param_4),(char *)local_40,(local_28 - param_2) + 1);
    FUN_1400084a0(local_40,param_3,local_38);
    local_18 = local_40 + local_38;
    FUN_1400084a0(local_18,param_3 + local_38 + param_4,param_4 - local_38);
  }
  return param_1;
}




void FUN_14000d9f0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
                  longlong param_5,undefined1 *param_6,longlong param_7)

{
  FUN_1400084a0(param_2,param_3,param_5);
  FUN_1400084a0(param_2 + param_5,param_6,param_7);
  FUN_1400084a0(param_2 + param_7 + param_5,param_3 + param_5,(param_4 - param_5) + 1);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Check_offset(unsigned
   __int64)const __ptr64
    public: void __cdecl std::_String_val<struct std::_Simple_types<unsigned short>
   >::_Check_offset(unsigned __int64)const __ptr64
    public: void __cdecl std::_String_val<struct std::_Simple_types<wchar_t>
   >::_Check_offset(unsigned __int64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void Check_offset(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_14000dad0();
  }
  return;
}




void FUN_14000dad0(void)

{
  FUN_14000fb34(0x14002d468);
  return;
}




char * FUN_14000daf0(char *param_1,uint param_2)

{
  char *local_res8;
  uint local_18;
  
  local_res8 = param_1;
  local_18 = param_2;
  do {
    local_res8 = local_res8 + -1;
    *local_res8 = (char)((ulonglong)local_18 % 10) + '0';
    local_18 = local_18 / 10;
  } while (local_18 != 0);
  return local_res8;
}




basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_14000db50(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400074b0((longlong)param_1,param_4);
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Tidy_init
            (param_1);
  std::_Enable_shared_from_this<class___ExceptionPtr,class___ExceptionPtr>
            ((shared_ptr<class___ExceptionPtr> *)&local_res10,(__ExceptionPtr *)&local_res18);
  pcVar1 = (char *)FUN_140001450(local_res18);
  pcVar2 = (char *)FUN_140001450(local_res10);
  FUN_14000ddf0(param_1,pcVar2,pcVar1);
  return param_1;
}




undefined8
FUN_14000dbe0(undefined8 param_1,ulonglong param_2,undefined1 param_3,longlong param_4,
             undefined1 *param_5,longlong param_6)

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
  LPVOID local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_1400023b0(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FID_conflict__Xlen();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_1400023b0(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_140001370();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_140001450(local_48);
  if (local_28 < 0x10) {
    FUN_14000d9f0(local_res18,local_18,(undefined1 *)puVar2,lVar1,local_res20,param_5,param_6);
    uVar5 = FUN_140001450(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (LPVOID)*puVar2;
    puVar4 = (undefined1 *)FUN_140001450(local_20);
    FUN_14000d9f0(local_res18,local_18,puVar4,lVar1,local_res20,param_5,param_6);
    FUN_1400096e0(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




void FUN_14000ddf0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,char *param_2,char *param_3)

{
  __uint64 _Var1;
  
  if (param_2 != param_3) {
    _Var1 = FUN_140001450((longlong)param_3 - (longlong)param_2);
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::assign
              (param_1,param_2,_Var1);
  }
  return;
}




undefined8 * FUN_14000de50(undefined8 *param_1)

{
  FUN_140008df0(param_1);
  return param_1;
}




void FUN_14000de70(undefined8 param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_38;
  
  uVar1 = FUN_140002670(param_1);
  for (local_38 = 0; local_38 < uVar1; local_38 = local_38 + 1) {
    plVar2 = (longlong *)FUN_14000e2d0(param_1,local_38);
    if (*plVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14000e2d0(param_1,local_38);
      _free_base((LPVOID)*puVar3);
    }
    puVar3 = (undefined8 *)FUN_14000e2d0(param_1,local_38);
    *puVar3 = 0;
    lVar4 = FUN_14000e2d0(param_1,local_38);
    if (*(longlong *)(lVar4 + 8) != 0) {
      lVar4 = FUN_14000e2d0(param_1,local_38);
      _free_base(*(LPVOID *)(lVar4 + 8));
    }
    lVar4 = FUN_14000e2d0(param_1,local_38);
    *(undefined8 *)(lVar4 + 8) = 0;
  }
  FUN_14000e300(param_1);
  FUN_140002000(param_1);
  return;
}




int FUN_14000dfa0(undefined8 param_1,wchar_t *param_2,wchar_t *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  __uint64 _Var6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  int local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  ulonglong local_58;
  wchar_t *local_50;
  ulonglong local_48;
  wchar_t *local_40;
  wchar_t *local_38;
  wchar_t *local_30;
  undefined8 local_28;
  undefined8 local_20 [4];
  
  local_28 = 0xfffffffffffffffe;
  local_90 = 0;
  local_88 = (wchar_t *)0x0;
  local_80 = (wchar_t *)0x0;
  if ((param_2 != (wchar_t *)0x0) && (param_3 != (wchar_t *)0x0)) {
    FUN_14000f480(local_68,param_2);
    FUN_14000f480(local_78,param_3);
    lVar5 = FUN_14000f600(local_68);
    if ((lVar5 == 0) || (lVar5 = FUN_14000f600(local_78), lVar5 == 0)) {
      FUN_14000f590(local_78);
      FUN_14000f590(local_68);
    }
    else {
      iVar3 = FUN_14000f650(local_68);
      iVar4 = FUN_14000f650(local_78);
      local_58 = CONCAT44(0,iVar3 + 1U);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_58;
      _Var6 = SUB168(ZEXT816(2) * auVar1,0);
      if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
        _Var6 = 0xffffffffffffffff;
      }
      local_88 = (wchar_t *)thunk_FUN_14001011c(_Var6);
      local_50 = local_88;
      if (local_88 == (wchar_t *)0x0) {
        FUN_14000f590(local_78);
        FUN_14000f590(local_68);
      }
      else {
        local_48 = CONCAT44(0,iVar4 + 1U);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_48;
        _Var6 = SUB168(ZEXT816(2) * auVar2,0);
        if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
          _Var6 = 0xffffffffffffffff;
        }
        local_80 = (wchar_t *)thunk_FUN_14001011c(_Var6);
        local_40 = local_80;
        if (local_80 == (wchar_t *)0x0) {
          FUN_14000f590(local_78);
          FUN_14000f590(local_68);
        }
        else {
          pwVar7 = (wchar_t *)FUN_14000f600(local_68);
          wcscpy_s(local_88,(ulonglong)(iVar3 + 1U),pwVar7);
          pwVar7 = (wchar_t *)FUN_14000f600(local_78);
          wcscpy_s(local_80,(ulonglong)(iVar4 + 1U),pwVar7);
          puVar8 = FUN_14000e3b0(local_20,&local_88,&local_80);
          FUN_14000e380(param_1,puVar8);
          local_90 = 1;
          FUN_14000f590(local_78);
          FUN_14000f590(local_68);
        }
      }
    }
  }
  if (local_90 == 0) {
    if (local_88 != (wchar_t *)0x0) {
      local_38 = local_88;
      _free_base(local_88);
    }
    local_88 = (wchar_t *)0x0;
    if (local_80 != (wchar_t *)0x0) {
      local_30 = local_80;
      _free_base(local_80);
    }
  }
  return local_90;
}




/* Library Function - Multiple Matches With Different Base Names
    void __cdecl Concurrency::details::_InternalDeleteHelper<class
   Concurrency::details::WorkQueue>(class Concurrency::details::WorkQueue * __ptr64)
    protected: virtual void __cdecl Concurrency::details::SchedulerProxy::DeleteThis(void) __ptr64
    public: static void __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::InternalContextBase>::Segment::StaticDelete(struct
   Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Segment *
   __ptr64)
    public: static void __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::_UnrealizedChore>::Segment::StaticDelete(struct
   Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment * __ptr64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void FID_conflict__InternalDeleteHelper<class_Concurrency::details::WorkQueue>(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    FUN_14000e290(param_1,1);
  }
  return;
}




LPVOID FUN_14000e290(LPVOID param_1,uint param_2)

{
  FUN_14000de70(param_1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




longlong FUN_14000e2d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140002430(param_1);
  return param_2 * 0x10 + *plVar1;
}




void FUN_14000e300(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1400028d0(param_1);
  FUN_140002410(param_1);
  FUN_140002430(param_1);
  FUN_140002930(param_1);
  puVar1 = (undefined8 *)FUN_140002430(param_1);
  puVar2 = (undefined8 *)FUN_140002410(param_1);
  *puVar2 = *puVar1;
  return;
}




void FUN_14000e380(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140001450(param_2);
  FUN_140001ed0(param_1,uVar1);
  return;
}




undefined8 * FUN_14000e3b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140001450(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_140001450(param_3);
  param_1[1] = *puVar1;
  return param_1;
}




wchar_t * FUN_14000e400(wchar_t *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  
  FUN_14000f840((longlong *)(param_1 + 0x104),L"DataFile.ini");
  pwVar2 = param_1;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pwVar2 = 0;
    pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
  }
  FUN_14000e490(param_1);
  return param_1;
}




void FUN_14000e460(longlong param_1)

{
  FUN_14000f890((longlong *)(param_1 + 0x208));
  return;
}




void FUN_14000e490(wchar_t *param_1)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  WCHAR *pWVar4;
  undefined1 auStack_678 [32];
  undefined4 local_658;
  ulonglong local_650;
  WCHAR *local_648;
  WCHAR local_638 [264];
  short local_428 [520];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_678;
  local_658 = 0;
  psVar3 = local_428;
  for (lVar2 = 0x410; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)psVar3 = 0;
    psVar3 = (short *)((longlong)psVar3 + 1);
  }
  pWVar4 = local_638;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
  }
  iVar1 = FUN_140004650(L"DataFile.ini",(char *)local_428,local_638);
  if (((iVar1 != 0) && (local_428[0] != 0)) && (local_638[0] != L'\0')) {
    local_648 = local_638;
    local_650 = 0xffffffffffffffff;
    do {
      local_650 = local_650 + 1;
    } while (local_648[local_650] != L'\0');
    if (local_650 < 0x104) {
      wcscpy_s(param_1,0x104,local_638);
      local_658 = 1;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_678);
  return;
}




void FUN_14000e5b0(wchar_t *param_1,longlong *param_2,undefined8 param_3,LPCWSTR param_4)

{
  int iVar1;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_230 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  iVar1 = FUN_14000f8d0((longlong *)(param_1 + 0x104));
  if (iVar1 != 0) {
    FUN_14000e800(local_228,param_1,param_3,param_4);
    local_238 = FUN_14000e8b0(local_228,param_2);
    FUN_14000f940((longlong *)(param_1 + 0x104));
    FUN_140001370();
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_14000e670(wchar_t *param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_230 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  iVar1 = FUN_14000f8d0((longlong *)(param_1 + 0x104));
  if (iVar1 != 0) {
    pwVar2 = param_1;
    FUN_14000e800(local_228,param_1,param_3,param_4);
    local_238 = FUN_14000ec80(local_228,pwVar2,param_3,param_4);
    FUN_14000f940((longlong *)(param_1 + 0x104));
    FUN_140001370();
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_14000e730(wchar_t *param_1,longlong param_2,longlong *param_3,LPCWSTR param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 local_230;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_230 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  plVar2 = param_3;
  iVar1 = FUN_14000f8d0((longlong *)(param_1 + 0x104));
  if (iVar1 != 0) {
    FUN_14000e800(local_228,param_1,plVar2,param_4);
    local_238 = FUN_14000f240(local_228,param_2,(longlong *)((ulonglong)param_3 & 0xffffffff),
                              param_4);
    FUN_14000f940((longlong *)(param_1 + 0x104));
    FUN_140001370();
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




wchar_t * FUN_14000e800(wchar_t *param_1,wchar_t *param_2,undefined8 param_3,LPCWSTR param_4)

{
  DWORD DVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  ulonglong local_20;
  
  pwVar3 = param_1;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  local_20 = 0xffffffffffffffff;
  do {
    local_20 = local_20 + 1;
  } while (param_2[local_20] != L'\0');
  if (local_20 < 0x104) {
    wcscpy_s(param_1,0x104,param_2);
    DVar1 = GetFileAttributesW(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_140004ae0(param_1);
      FUN_14000ee70(param_1,0,0,param_4);
    }
  }
  return param_1;
}




void FUN_14000e8b0(LPCWSTR param_1,longlong *param_2)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  WCHAR *pWVar4;
  undefined1 auStack_6f8 [32];
  undefined4 local_6d8;
  int local_6c8;
  int local_6c4;
  LPWSTR local_6c0;
  LPWSTR local_6b8;
  ulonglong local_6b0;
  ulonglong local_6a8;
  undefined8 *local_6a0;
  undefined8 *local_698;
  longlong local_690 [2];
  undefined8 *local_680;
  longlong local_678;
  LPWSTR local_670;
  LPWSTR local_668;
  LPWSTR local_660;
  LPWSTR local_658;
  undefined8 local_650;
  WCHAR local_648 [264];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_650 = 0xfffffffffffffffe;
  local_18 = DAT_140032008 ^ (ulonglong)auStack_6f8;
  local_6c4 = 0;
  local_6c0 = (LPWSTR)0x0;
  local_6b8 = (LPWSTR)0x0;
  if (*param_1 != L'\0') {
    local_690[1] = 0;
    local_690[0] = 0;
    iVar1 = FUN_14000ed30(param_1,local_690 + 1,local_690);
    if (iVar1 != 0) {
      local_6a0 = (undefined8 *)FUN_14001011c(0x18);
      if (local_6a0 == (undefined8 *)0x0) {
        local_698 = (undefined8 *)0x0;
      }
      else {
        local_698 = FUN_14000de50(local_6a0);
      }
      local_680 = local_698;
      *param_2 = (longlong)local_698;
      if (*param_2 != 0) {
        local_678 = local_690[0];
        pWVar4 = local_648;
        for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined1 *)pWVar4 = 0;
          pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
        }
        FUN_14000ef80(param_1,local_690[0],(char *)local_648);
        local_6a8 = 0;
        iVar1 = FUN_14000f040(param_1,local_648,&local_6a8);
        if (iVar1 != 0) {
          local_6c8 = 0;
          local_6c0 = (LPWSTR)thunk_FUN_14001011c(0x32000);
          local_670 = local_6c0;
          if ((local_6c0 != (LPWSTR)0x0) &&
             (local_6b8 = (LPWSTR)thunk_FUN_14001011c(0x32000), local_668 = local_6b8,
             local_6b8 != (LPWSTR)0x0)) {
            for (local_6b0 = 0; local_6b0 < local_6a8; local_6b0 = local_6b0 + 1) {
              pWVar4 = local_438;
              for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined1 *)pWVar4 = 0;
                pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
              }
              FUN_14000efd0(param_1,1,local_6b0,(char *)local_438);
              local_6d8 = 0x19000;
              DVar2 = FUN_14000f130(param_1,local_648,local_438,local_6c0);
              if (DVar2 == 0) {
                local_6c8 = 1;
                break;
              }
              pWVar4 = local_228;
              for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined1 *)pWVar4 = 0;
                pWVar4 = (WCHAR *)((longlong)pWVar4 + 1);
              }
              FUN_14000efd0(param_1,0,local_6b0,(char *)local_228);
              local_6d8 = 0x19000;
              DVar2 = FUN_14000f130(param_1,local_648,local_228,local_6b8);
              if (DVar2 == 0) {
                local_6c8 = 1;
                break;
              }
              iVar1 = FUN_14000dfa0(*param_2,local_6c0,local_6b8);
              if (iVar1 == 0) {
                local_6c8 = 1;
                break;
              }
            }
            if (local_6c8 == 0) {
              local_6c4 = 1;
            }
          }
        }
      }
    }
  }
  if (local_6c0 != (LPWSTR)0x0) {
    local_660 = local_6c0;
    _free_base(local_6c0);
  }
  local_6c0 = (LPWSTR)0x0;
  if (local_6b8 != (LPWSTR)0x0) {
    local_658 = local_6b8;
    _free_base(local_6b8);
  }
  local_6b8 = (LPWSTR)0x0;
  if ((local_6c4 == 0) && (*param_2 != 0)) {
    FID_conflict__InternalDeleteHelper<class_Concurrency::details::WorkQueue>((LPVOID)*param_2);
    *param_2 = 0;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_6f8);
  return;
}




undefined4 FUN_14000ec80(LPCWSTR param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  int iVar1;
  undefined4 local_28;
  longlong local_20;
  longlong local_18 [3];
  
  local_28 = 0;
  local_18[0] = 0;
  local_20 = 0;
  iVar1 = FUN_14000ed30(param_1,local_18,&local_20);
  if (((iVar1 != 0) && (local_18[0] != 0)) && (iVar1 = FUN_14000f1b0(param_1,local_20), iVar1 != 0))
  {
    local_18[0] = local_18[0] + -1;
    local_20 = local_20 + 1;
    if (local_18[0] == 0) {
      local_20 = 0;
    }
    local_28 = FUN_14000ee70(param_1,local_18[0],local_20,param_4);
  }
  return local_28;
}




void FUN_14000ed30(LPCWSTR param_1,longlong *param_2,longlong *param_3)

{
  DWORD DVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStackY_268 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_268;
  *param_2 = 0;
  *param_3 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  DVar1 = GetPrivateProfileStringW(L"HEAD_DATA",L"TOTALCOUNT",(LPCWSTR)0x0,local_228,0x104,param_1);
  if (DVar1 != 0) {
    lVar2 = FID_conflict__wtoi64(local_228);
    *param_2 = lVar2;
  }
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  DVar1 = GetPrivateProfileStringW(L"HEAD_DATA",L"STARTINDEX",(LPCWSTR)0x0,local_228,0x104,param_1);
  if (DVar1 != 0) {
    lVar2 = FID_conflict__wtoi64(local_228);
    *param_3 = lVar2;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_268);
  return;
}




void FUN_14000ee70(LPCWSTR param_1,undefined8 param_2,undefined8 param_3,LPCWSTR param_4)

{
  BOOL BVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  LPCWSTR pWVar4;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_258;
  local_238 = 0;
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  FUN_140006e70(local_228,L"%I64d",param_2,param_4);
  pWVar4 = param_1;
  BVar1 = WritePrivateProfileStringW(L"HEAD_DATA",L"TOTALCOUNT",local_228,param_1);
  if (BVar1 != 0) {
    pwVar3 = local_228;
    for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)pwVar3 = 0;
      pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
    }
    FUN_140006e70(local_228,L"%I64d",param_3,pWVar4);
    BVar1 = WritePrivateProfileStringW(L"HEAD_DATA",L"STARTINDEX",local_228,param_1);
    if (BVar1 != 0) {
      local_238 = 1;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}




void FUN_14000ef80(undefined8 param_1,undefined8 param_2,char *param_3)

{
  FID_conflict_sprintf_s(param_3,0x104,(char *)L"%s%I64d",L"ITEM_",param_2);
  return;
}




void FUN_14000efd0(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  wchar_t *local_18;
  
  if (param_2 == 0) {
    local_18 = L"VALUE_";
  }
  else {
    local_18 = L"KEY_";
  }
  FID_conflict_sprintf_s(param_4,0x104,(char *)L"%s%d",local_18,param_3);
  return;
}




void FUN_14000f040(LPCWSTR param_1,LPCWSTR param_2,ulonglong *param_3)

{
  UINT UVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_94;
  char local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_b8;
  local_94 = 0;
  pcVar3 = local_88;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  FID_conflict_sprintf_s(local_88,0x104,"%",*param_3);
  UVar1 = GetPrivateProfileIntW(param_2,L"PARAMCOUNT",-1,param_1);
  *param_3 = (ulonglong)UVar1;
  local_98 = (uint)(*param_3 != 0xffffffffffffffff);
  local_94 = local_98;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_b8);
  return;
}




DWORD FUN_14000f130(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPWSTR param_4)

{
  DWORD local_18;
  
  local_18 = 0;
  if (((param_2 != (LPCWSTR)0x0) && (param_3 != (LPCWSTR)0x0)) && (param_4 != (LPWSTR)0x0)) {
    local_18 = GetPrivateProfileStringW(param_2,param_3,(LPCWSTR)0x0,param_4,0x19000,param_1);
  }
  return local_18;
}




void FUN_14000f1b0(LPCWSTR param_1,undefined8 param_2)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStack_248;
  pWVar2 = local_228;
  for (lVar1 = 0x208; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  FUN_14000ef80(param_1,param_2,(char *)local_228);
  WritePrivateProfileStringW(local_228,(LPCWSTR)0x0,(LPCWSTR)0x0,param_1);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




undefined4 FUN_14000f240(LPCWSTR param_1,longlong param_2,longlong *param_3,LPCWSTR param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int local_58;
  int local_54;
  ulonglong local_50;
  LPVOID local_38;
  longlong local_30;
  __time64_t local_28;
  longlong local_20;
  ulonglong local_18;
  longlong local_10;
  
  iVar8 = (int)param_3;
  for (local_58 = 0; local_58 < 10000; local_58 = local_58 + 1) {
    local_30 = 0;
    local_20 = 0;
    param_3 = &local_20;
    plVar4 = &local_30;
    iVar2 = FUN_14000ed30(param_1,plVar4,param_3);
    if (((iVar2 == 0) || (local_30 < param_2)) ||
       (iVar2 = FUN_14000ec80(param_1,plVar4,param_3,param_4), iVar2 == 0)) break;
  }
  bVar1 = false;
  local_54 = 0;
  do {
    if ((9999 < local_54) || (bVar1)) {
      return 1;
    }
    local_38 = (LPVOID)0x0;
    iVar2 = FUN_14000e8b0(param_1,(longlong *)&local_38);
    if (iVar2 == 0) {
      return 1;
    }
    if (local_38 == (LPVOID)0x0) {
      return 1;
    }
    uVar3 = FUN_140001450(local_38);
    local_18 = FUN_140002670(uVar3);
    local_50 = 0;
    while( true ) {
      if (((local_18 <= local_50) ||
          (plVar4 = (longlong *)FUN_14000e2d0(uVar3,local_50), *plVar4 == 0)) ||
         (lVar5 = FUN_14000e2d0(uVar3,local_50), *(longlong *)(lVar5 + 8) == 0)) goto LAB_14000f2e0;
      puVar6 = (undefined8 *)FUN_14000e2d0(uVar3,local_50);
      iVar2 = FUN_140016a34((wint_t *)*puVar6,(wint_t *)L"Timestamp");
      if (iVar2 == 0) break;
      local_50 = local_50 + 1;
    }
    lVar5 = FUN_14000e2d0(uVar3,local_50);
    local_10 = FID_conflict__wtoi64(*(wchar_t **)(lVar5 + 8));
    local_28 = 0;
    _time64(&local_28);
    lVar5 = local_28 - local_10;
    lVar7 = (longlong)iVar8 * 0x15180;
    if (lVar5 == lVar7 || SBORROW8(lVar5,lVar7) != lVar5 + (longlong)iVar8 * -0x15180 < 0) {
      bVar1 = true;
    }
    else {
      FUN_14000ec80(param_1,local_50,param_3,param_4);
    }
LAB_14000f2e0:
    FID_conflict__InternalDeleteHelper<class_Concurrency::details::WorkQueue>(local_38);
    local_54 = local_54 + 1;
  } while( true );
}




undefined8 * FUN_14000f480(undefined8 *param_1,wchar_t *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  __uint64 _Var3;
  undefined8 uVar4;
  longlong local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (wchar_t *)0x0) {
    local_30 = -1;
    do {
      local_30 = local_30 + 1;
    } while (param_2[local_30] != L'\0');
    if ((int)local_30 != 0) {
      iVar2 = (int)local_30 + 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (longlong)iVar2;
      _Var3 = SUB168(ZEXT816(2) * auVar1,0);
      if (SUB168(ZEXT816(2) * auVar1,8) != 0) {
        _Var3 = 0xffffffffffffffff;
      }
      uVar4 = thunk_FUN_14001011c(_Var3);
      param_1[1] = uVar4;
      wcscpy_s((wchar_t *)param_1[1],(longlong)iVar2,param_2);
      FUN_14000f6f0(param_1,param_2,param_1);
    }
  }
  return param_1;
}




void FUN_14000f590(longlong *param_1)

{
  if (*param_1 != 0) {
    _free_base((LPVOID)*param_1);
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
    _free_base((LPVOID)param_1[1]);
  }
  param_1[1] = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00014000f618) */

undefined8 FUN_14000f600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14000f6e0((longlong)param_1);
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x00014000f666) */
/* WARNING: Removing unreachable block (ram,0x00014000f67c) */
/* WARNING: Removing unreachable block (ram,0x00014000f691) */

undefined4 FUN_14000f650(longlong *param_1)

{
  longlong local_28;
  
  local_28 = -1;
  do {
    local_28 = local_28 + 1;
  } while (*(short *)(param_1[1] + local_28 * 2) != 0);
  return (int)local_28;
}




undefined8 FUN_14000f6e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




int FUN_14000f6f0(undefined8 param_1,LPCWSTR param_2,longlong *param_3)

{
  int cbMultiByte;
  longlong lVar1;
  int local_24;
  
  local_24 = 0;
  cbMultiByte = WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  lVar1 = thunk_FUN_14001011c((longlong)(cbMultiByte + 1));
  *param_3 = lVar1;
  if (*param_3 != 0) {
    local_24 = WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)*param_3,cbMultiByte,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
    *(undefined1 *)(*param_3 + (longlong)cbMultiByte) = 0;
  }
  if (local_24 == 0) {
    if (*param_3 != 0) {
      _free_base((LPVOID)*param_3);
    }
    *param_3 = 0;
  }
  return local_24;
}




longlong * FUN_14000f840(longlong *param_1,wchar_t *param_2)

{
  *param_1 = 0;
  if (param_2 != (wchar_t *)0x0) {
    FUN_140004f20(param_2,param_1);
  }
  return param_1;
}




void FUN_14000f890(longlong *param_1)

{
  if (*param_1 != 0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined4 FUN_14000f8d0(longlong *param_1)

{
  DWORD DVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  if (*param_1 != 0) {
    DVar1 = WaitForSingleObject((HANDLE)*param_1,60000);
    if ((DVar1 == 0) || (DVar1 == 0x80)) {
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
    local_10 = local_14;
  }
  return local_10;
}




BOOL FUN_14000f940(longlong *param_1)

{
  BOOL local_18;
  
  local_18 = 0;
  if (*param_1 != 0) {
    local_18 = ReleaseMutex((HANDLE)*param_1);
  }
  return local_18;
}




undefined8 * FUN_14000f980(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_14000f9c0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_14000f9e0(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_14000fa2c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_14000fa6c(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_14000facc(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
}




void FUN_14000fb10(longlong param_1)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_14000f9e0(local_28,param_1);
  FUN_140011470(local_28,&DAT_140030c30);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_14000fb34(longlong param_1)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_14000fa6c(local_28,param_1);
  FUN_140011470(local_28,&DAT_140030a08);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140032008) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  LPVOID pvVar3;
  void *pvVar4;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return pvVar3;
    }
    iVar2 = _callnewh(param_1);
  } while (iVar2 != 0);
  if (param_1 == 0xffffffffffffffff) {
    FUN_1400101c4();
    pcVar1 = (code *)swi(3);
    pvVar4 = (void *)(*pcVar1)();
    return pvVar4;
  }
  FUN_1400101a4();
  pcVar1 = (code *)swi(3);
  pvVar4 = (void *)(*pcVar1)();
  return pvVar4;
}




void FUN_14000fbd8(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined7 extraout_var;
  
  FUN_140017124(2);
  uVar5 = FUN_140010550();
  _set_fmode((int)uVar5);
  puVar6 = (undefined4 *)FUN_140017c58();
  uVar5 = FUN_140010544();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_14001026c(1);
  if ((char)uVar5 != '\0') {
    FUN_1400107e4();
    atexit((_func_5014 *)&LAB_140010820);
    uVar5 = FUN_140010548();
    iVar4 = _configure_wide_argv((int)uVar5);
    if (iVar4 == 0) {
      FUN_140010558();
      bVar2 = FUN_140010594();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        FUN_14001719c(0x140010544);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140010544();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140010568();
      if (cVar3 != '\0') {
        common_initialize_environment_nolock<wchar_t>();
      }
      FUN_140010544();
      uVar5 = thunk_FUN_140010544();
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

ulonglong FUN_14000fcbc(void)

{
  code *pcVar1;
  bool bVar2;
  WORD WVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint *puVar10;
  undefined8 unaff_RBX;
  
  uVar4 = (uint)unaff_RBX;
  uVar5 = __scrt_initialize_crt(1);
  if ((char)uVar5 == '\0') {
    __scrt_fastfail(7);
  }
  else {
    bVar2 = false;
    uVar5 = __scrt_acquire_startup_lock();
    uVar4 = (uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar5);
    if (DAT_140033000 != 1) {
      if (DAT_140033000 == 0) {
        DAT_140033000 = 1;
        uVar6 = _initterm_e((undefined8 *)&DAT_140023378,(undefined8 *)&DAT_1400233a8);
        if ((int)uVar6 != 0) {
          return 0xff;
        }
        _initterm((undefined8 *)&DAT_140023360,(undefined8 *)&DAT_140023370);
        DAT_140033000 = 2;
      }
      else {
        bVar2 = true;
      }
      __scrt_release_startup_lock((char)uVar5);
      plVar7 = (longlong *)FUN_1400105a0();
      if ((*plVar7 != 0) &&
         (uVar8 = __scrt_is_nonwritable_in_current_image((longlong)plVar7), (char)uVar8 != '\0')) {
        (*(code *)*plVar7)(0);
      }
      puVar9 = (ulonglong *)FUN_1400105a8();
      if ((*puVar9 != 0) &&
         (uVar8 = __scrt_is_nonwritable_in_current_image((longlong)puVar9), (char)uVar8 != '\0')) {
        _register_thread_local_exe_atexit_callback(*puVar9);
      }
      WVar3 = __scrt_get_show_window_mode();
      puVar10 = (uint *)_get_wide_winmain_command_line();
      uVar4 = FUN_1400012b0(&IMAGE_DOS_HEADER_140000000,0,puVar10,(ulonglong)WVar3);
      uVar8 = __scrt_is_managed_app();
      if ((char)uVar8 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        __scrt_uninitialize_crt('\x01','\0');
        return (ulonglong)uVar4;
      }
      goto LAB_14000fe1d;
    }
  }
  __scrt_fastfail(7);
LAB_14000fe1d:
  FUN_140017b18(uVar4);
  FUN_140017ac8(uVar4);
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}




void entry(void)

{
  __security_init_cookie();
  FUN_14000fcbc();
  return;
}




undefined8 * FUN_14000fe44(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    _free_base(param_1);
  }
  return param_1;
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
                    /* WARNING: Could not recover jumptable at 0x00014000fe9d. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x14000fece;
  capture_previous_context((PCONTEXT)&DAT_140032b30);
  _DAT_140032aa0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140032bc8 = puVar3 + 0x40;
  _DAT_140032bb0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140032a90 = 0xc0000409;
  _DAT_140032a94 = 1;
  _DAT_140032aa8 = 1;
  DAT_140032ab0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140032008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140032000;
  *(undefined8 *)(puVar3 + -8) = 0x14000ff70;
  DAT_140032c28 = _DAT_140032aa0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1400234a0);
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
  *(undefined8 *)(puVar3 + -8) = 0x14000ffb6;
  capture_current_context((PCONTEXT)&DAT_140032b30);
  _DAT_140032aa0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_140032bc8 = puVar3 + 0x30;
  _DAT_140032a90 = 0xc0000409;
  _DAT_140032a94 = 1;
  _DAT_140032aa8 = 1;
  DAT_140032ab0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x140010022;
  DAT_140032c28 = _DAT_140032aa0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1400234a0);
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




void FUN_14001011c(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




undefined8 * FUN_140010144(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_140010184(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




void FUN_1400101a4(void)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_14000f9c0(local_28);
  FUN_140011470(local_28,&DAT_1400309a8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1400101c4(void)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_140010184(local_28);
  FUN_140011470(local_28,&DAT_140030a70);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
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
LAB_140010212:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_140033008 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_140033008;
        pvVar1 = DAT_140033008;
      }
      DAT_140033008 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_140010212;
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
    DAT_140033010 = 1;
  }
  __isa_available_init();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140018228();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001026c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_140033011 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_140032008;
      _DAT_140033018 = in_RAX;
      uRam0000000140033020 = in_RAX;
      _DAT_140033028 = in_RAX;
      _DAT_140033030 = in_RAX;
      uRam0000000140033038 = in_RAX;
      _DAT_140033040 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table((ulonglong *)&DAT_140033018);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((ulonglong *)&DAT_140033030), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_140033011 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x0001400103d2) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000210; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_140000300;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_1400103bb;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1400103bb:
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
    DAT_140033008 = 0;
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
  
  if ((DAT_140033010 == '\0') || (param_2 == '\0')) {
    FUN_14001823c();
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
  
  bVar2 = (byte)DAT_140032008 & 0x3f;
  if (((DAT_140032008 ^ _DAT_140033018) >> bVar2 | (DAT_140032008 ^ _DAT_140033018) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = FUN_140018020(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140033018,_Func);
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
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_140032008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_140032008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_140032008 == 0x2b992ddfa232) {
      DAT_140032008 = 0x2b992ddfa233;
    }
  }
  DAT_140032000 = ~DAT_140032008;
  return;
}




undefined8 FUN_140010544(void)

{
  return 0;
}




undefined8 FUN_140010548(void)

{
  return 1;
}




undefined8 FUN_140010550(void)

{
  return 0x4000;
}




void FUN_140010558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014001055f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_140033050);
  return;
}




undefined1 FUN_140010568(void)

{
  return 1;
}




void _guard_check_icall(void)

{
  return;
}




undefined * FUN_140010570(void)

{
  return &DAT_140033060;
}




void FUN_140010578(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140004150();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_140010570();
  *puVar1 = *puVar1 | 2;
  return;
}




bool FUN_140010594(void)

{
  return DAT_140032014 == 0;
}




undefined * FUN_1400105a0(void)

{
  return &DAT_140034160;
}




undefined * FUN_1400105a8(void)

{
  return &DAT_140034158;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400105b0(void)

{
  _DAT_140033068 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1400105eb;
  FUN_1400105b0();
  *(undefined8 *)(puVar4 + -8) = 0x1400105fc;
  FUN_1400115e0((undefined1 (*) [16])local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140010606;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140010620;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x140010661;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x140010693;
  FUN_1400115e0((undefined1 (*) [16])(puVar4 + 0x50),0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x1400106b5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1400106d6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1400106e1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1400106f1;
    FUN_1400105b0();
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
  
  FUN_1400115e0((undefined1 (*) [16])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
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




void FUN_14001079c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400107a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_1400107ac);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400107e4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14002e7c0; puVar1 < &DAT_14002e7c0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00014001092a) */
/* WARNING: Removing unreachable block (ram,0x0001400108a8) */
/* WARNING: Removing unreachable block (ram,0x000140010883) */
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
  
  DAT_14003201c = 2;
  DAT_140032018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    DAT_140032020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_14003306c = DAT_14003306c | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_14003306c = DAT_14003306c | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    DAT_140032018 = 2;
    DAT_14003201c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14003201c = 0xe;
      DAT_140032018 = 3;
      if ((uVar6 & 0x20) != 0) {
        DAT_140032018 = 5;
        DAT_14003201c = 0x2e;
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_140034150 != 0;
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
  } while ((param_2 <= p_Var2->tryHigh) || (p_Var2->catchHigh < param_2));
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
  
  iVar1 = FUN_14001198c(param_2,param_1);
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
  __ehstate_t _Var4;
  __uint64 local_res20;
  
  p_Var2 = GetEstablisherFrame(param_1,param_2,param_3,&local_res20);
  iVar1 = FUN_14001198c(param_3,param_2);
  p_Var3 = CatchTryBlock(param_3,iVar1);
  if (p_Var3 == (_s_TryBlockMapEntry *)0x0) {
    _Var4 = -1;
  }
  else {
    _Var4 = p_Var3->tryHigh;
  }
  FUN_140012a80(p_Var2,param_2,param_3,_Var4);
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
  iVar2 = FUN_14001198c(param_3,param_2);
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




undefined8 * FUN_140010bf8(undefined8 *param_1,undefined8 *param_2,int param_3)

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
  iVar7 = FUN_14001198c(p_Var2,p_Var3);
  if (uVar8 == 0) {
    FUN_140018250();
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




void FUN_140010d54(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_5b8 [32];
  EXCEPTION_RECORD local_588;
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_5b8;
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
  local_588.ExceptionInformation[0] = (ULONG_PTR)&LAB_14001280c;
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
  FUN_140018250();
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




void FUN_140010f30(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}




void FUN_140010f48(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}




/* Library Function - Single Match
    __CxxFrameHandler3
   
   Library: Visual Studio 2017 Release */

void __CxxFrameHandler3(EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
                       _xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  __uint64 local_res8;
  
  local_res8 = param_2;
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_4 + 8);
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x38);
  lVar1 = __vcrt_getptd();
  FUN_140012564(param_1,&local_res8,param_3,param_4,
                (_s_FuncInfo *)
                ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar1 + 0x60)),0,
                (__uint64 *)0x0,0);
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
      FUN_140011054(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}




void FUN_140011054(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000140011054. Too many branches */
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
    FUN_140018250();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return 0;
}




/* Library Function - Single Match
    __C_specific_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  _EXCEPTION_RECORD *local_38;
  _CONTEXT *local_30;
  
  __except_validate_context_record((longlong)ContextRecord);
  lVar1 = *(longlong *)(DispatcherContext + 8);
  puVar2 = *(uint **)(DispatcherContext + 0x38);
  uVar14 = *(longlong *)DispatcherContext - lVar1;
  uVar7 = *(uint *)(DispatcherContext + 0x48);
  local_38 = ExceptionRecord;
  local_30 = ContextRecord;
  if ((ExceptionRecord->ExceptionFlags & 0x66) == 0) {
    for (; uVar7 < *puVar2; uVar7 = uVar7 + 1) {
      uVar8 = (ulonglong)uVar7;
      if (((puVar2[uVar8 * 4 + 1] <= uVar14) && (uVar14 < puVar2[uVar8 * 4 + 2])) &&
         (puVar2[uVar8 * 4 + 4] != 0)) {
        if (puVar2[uVar8 * 4 + 3] != 1) {
          iVar3 = (*(code *)((ulonglong)puVar2[uVar8 * 4 + 3] + lVar1))(&local_38,EstablisherFrame);
          if (iVar3 < 0) {
            return ExceptionContinueExecution;
          }
          if (iVar3 < 1) goto LAB_140011212;
        }
        if ((ExceptionRecord->ExceptionCode == 0xe06d7363) &&
           (BVar4 = _IsNonwritableInCurrentImage((PBYTE)&PTR___DestructExceptionObject_1400235a8),
           BVar4 != 0)) {
          __DestructExceptionObject((int *)ExceptionRecord);
        }
        FUN_140012e50();
        RtlUnwindEx(EstablisherFrame,(PVOID)((ulonglong)puVar2[uVar8 * 4 + 4] + lVar1),
                    ExceptionRecord,(PVOID)(ulonglong)ExceptionRecord->ExceptionCode,
                    *(PCONTEXT *)(DispatcherContext + 0x28),
                    *(PUNWIND_HISTORY_TABLE *)(DispatcherContext + 0x40));
        FUN_140012e80();
      }
LAB_140011212:
    }
  }
  else {
    uVar9 = *puVar2;
    uVar10 = (ulonglong)uVar9;
    uVar8 = *(longlong *)(DispatcherContext + 0x20) - lVar1;
    if (uVar7 < uVar9) {
      do {
        uVar6 = (ulonglong)uVar7;
        if ((puVar2[uVar6 * 4 + 1] <= uVar14) && (uVar14 < puVar2[uVar6 * 4 + 2])) {
          uVar13 = ExceptionRecord->ExceptionFlags & 0x20;
          uVar5 = (ulonglong)uVar9;
          if (uVar13 != 0) {
            uVar12 = 0;
            if (uVar9 != 0) {
              do {
                if ((((puVar2[uVar12 * 4 + 1] <= uVar8) && (uVar8 < puVar2[uVar12 * 4 + 2])) &&
                    (puVar2[uVar12 * 4 + 4] == puVar2[uVar6 * 4 + 4])) &&
                   (puVar2[uVar12 * 4 + 3] == puVar2[uVar6 * 4 + 3])) break;
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              } while (uVar11 < uVar9);
            }
            uVar5 = uVar10;
            if ((int)uVar12 != (int)uVar10) {
              return ExceptionContinueSearch;
            }
          }
          uVar9 = (uint)uVar5;
          if (puVar2[uVar6 * 4 + 4] == 0) {
            *(uint *)(DispatcherContext + 0x48) = uVar7 + 1;
            (*(code *)((ulonglong)puVar2[uVar6 * 4 + 3] + lVar1))
                      (CONCAT71((int7)(uVar5 >> 8),1),EstablisherFrame);
            uVar9 = *puVar2;
            uVar10 = (ulonglong)uVar9;
          }
          else if ((uVar8 == puVar2[uVar6 * 4 + 4]) && (uVar13 != 0)) {
            return ExceptionContinueSearch;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
  }
  return ExceptionContinueSearch;
}




undefined1 (*) [16] FUN_140011304(undefined1 (*param_1) [16],ushort param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 (*pauVar4) [16];
  bool bVar5;
  bool bVar6;
  
  pauVar4 = (undefined1 (*) [16])0x0;
  pauVar2 = param_1;
  if (1 < DAT_140032018) {
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

void FUN_140011470(longlong *param_1,byte *param_2)

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




/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2017 Release */

ulonglong __vcrt_initialize(void)

{
  ulonglong uVar1;
  
  FUN_140013314();
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




undefined1 (*) [16] FUN_1400115e0(undefined1 (*param_1) [16],byte param_2,ulonglong param_3)

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
    if ((DAT_14003306c >> 1 & 1) != 0) {
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
  
  if (DAT_140032030 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_140032030);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_140032030,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x90);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_140032030,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_140032030,(LPVOID)0x0);
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
  
  uVar2 = __vcrt_FlsAlloc(&LAB_140011770);
  DAT_140032030 = (DWORD)uVar2;
  if (DAT_140032030 != 0xffffffff) {
    iVar1 = __vcrt_FlsSetValue(DAT_140032030,&DAT_140033080);
    if (iVar1 != 0) {
      _DAT_1400330f8 = 0xfffffffe;
      _DAT_140033100 = 0xfffffffffffffffe;
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
  if (DAT_140032030 != 0xffffffff) {
    __vcrt_FlsFree(DAT_140032030);
    DAT_140032030 = 0xffffffff;
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




void FUN_14001198c(_s_FuncInfo *param_1,_xDISPATCHER_CONTEXT *param_2)

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
  FUN_140018250();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_1400119fc(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

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
  if ((((*param_3 & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_140033070 == 0)) {
    if ((*param_3 & 8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
        *param_2 = lVar2;
        goto LAB_140011b1b;
      }
      goto LAB_140011bde;
    }
    if ((*param_4 & 1) != 0) {
      if ((*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
        FUN_140013410(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 8) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        lVar2 = *param_2;
        goto LAB_140011b1b;
      }
      goto LAB_140011be3;
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
      goto LAB_140011bed;
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
      iVar7 = *(int *)(param_4 + 0x14);
      puVar3 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
      FUN_140013410(param_2,puVar3,(longlong)iVar7);
      return 0;
    }
  }
  else {
    lVar2 = (*(code *)DAT_140033070)();
    if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
      *param_2 = lVar2;
LAB_140011b1b:
      lVar2 = __AdjustPointer(lVar2,(int *)(param_4 + 8));
      *param_2 = lVar2;
      return 0;
    }
    FUN_140018250();
LAB_140011bde:
    FUN_140018250();
LAB_140011be3:
    FUN_140018250();
  }
  FUN_140018250();
LAB_140011bed:
  FUN_140018250();
  FUN_140018250();
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
  if (-1 < (int)param_3->adjectives) {
                    /* WARNING: Load size is inaccurate */
    pvVar4 = (void *)((longlong)param_3->dispCatchObj + *param_2);
  }
  uVar1 = FUN_1400119fc((longlong)param_1,(longlong *)param_2,(byte *)param_3,(byte *)param_4);
  if ((int)uVar1 == 1) {
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar2 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar2 + *(int *)(param_4 + 0x18));
    }
    lVar2 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    FUN_140012e18(pvVar4,UNRECOVERED_JUMPTABLE,lVar2);
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
  FUN_140010d54(param_2,(ULONG_PTR)param_1,(ULONG_PTR)param_3,(ULONG_PTR)p_Var1,
                lVar2 + (int)param_6->dispOfHandler,(ULONG_PTR)param_5,param_8->tryLow,
                CONCAT44(in_stack_ffffffffffffffb4,param_8->catchHigh),param_6,(undefined8 *)param_4
                ,param_12);
  return;
}




void FUN_140011d8c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
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
  if ((iVar9 < -1) || (param_5->maxState <= iVar9)) goto LAB_1400121e7;
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
    FUN_140010f48(*(undefined8 *)(param_1 + 0x38));
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
    goto LAB_1400121e7;
    lVar11 = __vcrt_getptd();
    if (*(longlong *)(lVar11 + 0x38) != 0) {
      lVar11 = __vcrt_getptd();
      p_Var3 = *(_s_ESTypeList **)(lVar11 + 0x38);
      lVar11 = __vcrt_getptd();
      *(undefined8 *)(lVar11 + 0x38) = 0;
      cVar6 = FUN_140012cac((longlong)param_1,(int *)p_Var3);
      if (cVar6 == '\0') {
        uVar7 = Is_bad_exception_allowed(p_Var3);
        if (uVar7 != '\0') {
          __DestructExceptionObject((int *)param_1);
          FUN_1400127ec((undefined8 *)&local_80);
          FUN_140011470((longlong *)&local_80,&DAT_140030ad8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_1400121e7;
      }
    }
  }
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  local_68 = param_5;
  local_60 = param_4;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
     (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
    if (param_5->nTryBlocks != 0) {
      FUN_140010bf8((undefined8 *)&local_58,&local_68,iVar9);
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
          if ((p_Var19->tryLow <= iVar9) && (iVar9 <= p_Var19->tryHigh)) {
            uVar2 = p_Var19->nCatches;
            uVar18 = 0;
            local_88 = (longlong)(int)p_Var19->dispHandlerArray + *(longlong *)(param_4 + 8);
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
                    goto LAB_140012075;
                  }
                  piVar12 = piVar12 + 1;
                }
                uVar17 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar17;
              } while (uVar17 != uVar2);
            }
          }
LAB_140012075:
          uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
          uVar16 = uVar16 + 1;
        } while (uVar16 < local_40);
        if (bVar8) goto LAB_14001219c;
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
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) goto LAB_1400121e7;
        if (param_5->dispESTypeList != 0) {
          lVar11 = _GetImageBase();
          piVar12 = (int *)(lVar11 + (int)param_5->dispESTypeList);
        }
        cVar6 = FUN_140012cac((longlong)param_1,piVar12);
        if (cVar6 == '\0') {
          p_Var15 = __FrameHandler3::GetEstablisherFrame
                              (param_2,param_4,param_5,(__uint64 *)&local_90);
          FUN_140010d54(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)p_Var15,0,
                        (ULONG_PTR)param_5,-1,CONCAT44(uVar20,0xffffffff),0,(undefined8 *)param_4,
                        param_6);
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != 0) goto LAB_1400121e7;
    FUN_1400121f0(param_1,param_2,local_res18,param_4,param_5,iVar9,param_7,param_8);
  }
LAB_14001219c:
  lVar11 = __vcrt_getptd();
  if (*(longlong *)(lVar11 + 0x38) == 0) {
    return;
  }
LAB_1400121e7:
  FUN_140018250();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}




void FUN_1400121f0(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
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
      FUN_140018250();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_140010bf8((undefined8 *)&local_58,&local_78,param_6);
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
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          p_Var7 = (_s_HandlerType *)
                   (*(longlong *)(param_4 + 8) + -0x14 +
                   (longlong)(int)p_Var5->dispHandlerArray +
                   (ulonglong)(uint)p_Var5->nCatches * 0x14);
          if (p_Var7->dispType == 0) {
            lVar3 = 0;
            iVar2 = 0;
          }
          else {
            iVar2 = p_Var7->dispType;
            lVar3 = _GetImageBase();
            lVar3 = lVar3 + iVar2;
          }
          if (lVar3 != 0) {
            if (iVar2 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = _GetImageBase();
              lVar3 = lVar3 + (int)p_Var7->dispType;
            }
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_1400123ee;
          }
          if ((p_Var7->adjectives & 0x40) == 0) {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var7,(_s_CatchableType *)0x0,p_Var5
                       ,param_7,param_8,'\x01','\0');
          }
        }
LAB_1400123ee:
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
FUN_140012564(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
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
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_1400125ea;
        goto LAB_1400125d0;
      }
    }
    else {
LAB_1400125d0:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_1400125ea;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_1400125ea:
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
LAB_1400127a4:
          FUN_140018250();
          pcVar4 = (code *)swi(3);
          uVar3 = (*pcVar4)();
          return uVar3;
        }
      }
      else {
        if (*(int *)param_1 != -0x7fffffd7) goto LAB_140012670;
        iVar1 = *(int *)(param_1 + 0x38);
        if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_1400127a4;
        param_2 = *(__uint64 **)(param_1 + 0x28);
      }
      FUN_140012a80(param_2,param_4,param_5,iVar1);
      return 1;
    }
LAB_140012670:
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
      if (lVar2 != 0) goto LAB_1400126d4;
    }
    if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
      return 1;
    }
    if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
      return 1;
    }
  }
LAB_1400126d4:
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
  FUN_140011d8c(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
  return 1;
}




undefined8 * FUN_1400127ac(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




undefined8 * FUN_1400127ec(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
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




void FUN_140012a80(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

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
LAB_140012c0d:
      FUN_140018250();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
      FUN_140018250();
      goto LAB_140012c0d;
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
      FUN_140010f30(uVar3);
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
  
  iVar1 = FUN_14001198c(param_3,param_2);
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




undefined1 FUN_140012cac(longlong param_1,int *param_2)

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
    FUN_140018250();
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
      uVar1 = __std_type_info_compare(lVar2 + 8,0x1400329b8);
      if (uVar1 == 0) {
        return '\x01';
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar4 < *(int *)param_1);
  }
  return '\0';
}




void FUN_140012e18(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140012e1e. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x000140012e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2)(param_1,param_3,param_4);
  return;
}




void FUN_140012e50(void)

{
  return;
}




void FUN_140012e80(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x000140012e97) */
/* WARNING: Removing unreachable block (ram,0x000140012ead) */
/* WARNING: Removing unreachable block (ram,0x000140012eb3) */
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  return;
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
                      ((LPCRITICAL_SECTION)(&DAT_140033110 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_140033138 = DAT_140033138 + 1;
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
  
  uVar1 = (ulonglong)DAT_140033138;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140033110 + uVar1 * 0x28));
    DAT_140033138 = DAT_140033138 - 1;
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
  
  bVar3 = (byte)DAT_140032008 & 0x3f;
  pvVar7 = (void *)((DAT_140032008 ^ (&DAT_140033158)[param_1]) >> bVar3 |
                   (DAT_140032008 ^ (&DAT_140033158)[param_1]) << 0x40 - bVar3);
  if (pvVar7 != (void *)0xffffffffffffffff) {
    if (pvVar7 != (void *)0x0) {
      return pvVar7;
    }
    if (param_3 != param_4) {
      do {
        mVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_140033140)[mVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_140023618)[mVar2];
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
            lVar1 = (&DAT_140033140)[mVar2];
            (&DAT_140033140)[mVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_14001306e;
          }
          LOCK();
          (&DAT_140033140)[mVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_14001306e:
          if (hLibModule != (HMODULE)0x0) goto LAB_140013089;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hLibModule = (HMODULE)0x0;
LAB_140013089:
    if ((hLibModule != (HMODULE)0x0) &&
       (pFVar6 = GetProcAddress(hLibModule,param_2), pFVar6 != (FARPROC)0x0)) {
      bVar3 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
      LOCK();
      (&DAT_140033158)[param_1] =
           ((ulonglong)pFVar6 >> bVar3 | (longlong)pFVar6 << 0x40 - bVar3) ^ DAT_140032008;
      UNLOCK();
      return pFVar6;
    }
    bVar3 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_140033158)[param_1] = (0xffffffffffffffffU >> bVar3 | -1L << 0x40 - bVar3) ^ DAT_140032008
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
       (code *)try_get_function(0,"FlsAlloc",(module_id *)&DAT_1400236e8,(module_id *)"FlsAlloc");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140013152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsAlloc();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400218a0. Too many branches */
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
       (code *)try_get_function(1,"FlsFree",(module_id *)&DAT_140023700,(module_id *)"FlsFree");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014001319b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsFree(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400218a0. Too many branches */
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
       (code *)try_get_function(2,"FlsGetValue",(module_id *)&DAT_140023710,
                                (module_id *)"FlsGetValue");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400131e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsGetValue(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400218a0. Too many branches */
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
  
  pcVar1 = (code *)try_get_function(3,"FlsSetValue",(module_id *)&DAT_140023728,
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
  
  pcVar1 = (code *)try_get_function(4,"InitializeCriticalSectionEx",(module_id *)&DAT_140023740,
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
  
  uVar1 = DAT_140032008;
  puVar3 = &DAT_140033158;
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
    puVar1 = &DAT_140033140;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_140033158);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013314(void)

{
  _DAT_140033180 = DAT_140032008;
  return;
}




/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_140012e50();
  (*pcVar1)();
  FUN_140012e80();
  FUN_140012e50();
  return;
}




void FUN_1400133f0(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *in_R10;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *in_R10;
    in_R10 = in_R10 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




undefined8 * FUN_140013410(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

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
      if ((DAT_14003306c >> 1 & 1) != 0) {
        puVar10 = (undefined8 *)FUN_1400133f0((undefined1 *)param_1,lVar12,param_3);
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
        if (DAT_140032020 < uVar14) {
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
  
  local_28 = DAT_140032008 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_1400105b0();
  }
  FUN_1400115e0((undefined1 (*) [16])&local_598,0,0x98);
  FUN_1400115e0((undefined1 (*) [16])&local_4f8,0,0x4d0);
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
    FUN_1400105b0();
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_608);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013994(undefined8 param_1)

{
  _DAT_1400331f0 = param_1;
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
     (bVar2 = (byte)DAT_140032008 & 0x3f,
     UNRECOVERED_JUMPTABLE =
          (code *)((DAT_140032008 ^ _DAT_1400331f0) >> bVar2 |
                  (DAT_140032008 ^ _DAT_1400331f0) << 0x40 - bVar2),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  _guard_check_icall();
                    /* WARNING: Could not recover jumptable at 0x000140013a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140013a44(void)

{
  _invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}




void FUN_140013a64(void)

{
  _invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
  *(undefined8 *)(puVar3 + -8) = 0x140013ac1;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x140013ac7;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000140013ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
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
    uVar3 = PTR_PTR_DAT_1400322c8._0_4_;
    uVar4 = PTR_PTR_DAT_1400322c8._4_4_;
    uVar5 = PTR_DAT_1400322d0._0_4_;
    uVar6 = PTR_DAT_1400322d0._4_4_;
    if (DAT_140033464 != 0) {
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




/* Library Function - Single Match
    bool __cdecl internal_islower_l(int,struct __crt_locale_pointers * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

bool __cdecl internal_islower_l(int param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  ushort *puVar2;
  
  if (param_2 == (__crt_locale_pointers *)0x0) {
    puVar2 = __pctype_func();
  }
  else {
    if (1 < *(int *)(*(undefined8 **)param_2 + 1)) {
      uVar1 = _isctype_l(param_1,2,(_locale_t)param_2);
      goto LAB_140013ba9;
    }
    puVar2 = (ushort *)**(undefined8 **)param_2;
  }
  uVar1 = puVar2[param_1] & 2;
LAB_140013ba9:
  return uVar1 != 0;
}




/* Library Function - Single Match
    bool __cdecl internal_isupper_l(int,struct __crt_locale_pointers * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

bool __cdecl internal_isupper_l(int param_1,__crt_locale_pointers *param_2)

{
  uint uVar1;
  ushort *puVar2;
  
  if (param_2 == (__crt_locale_pointers *)0x0) {
    puVar2 = __pctype_func();
  }
  else {
    if (1 < *(int *)(*(undefined8 **)param_2 + 1)) {
      uVar1 = _isctype_l(param_1,1,(_locale_t)param_2);
      goto LAB_140013bf9;
    }
    puVar2 = (ushort *)**(undefined8 **)param_2;
  }
  uVar1 = puVar2[param_1] & 1;
LAB_140013bf9:
  return uVar1 != 0;
}




/* Library Function - Single Match
    _tolower_l
   
   Library: Visual Studio 2015 Release */

int __cdecl _tolower_l(int _C,_locale_t _Locale)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  undefined2 local_res8;
  undefined1 local_resa;
  byte local_res18 [8];
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
  if ((uint)_C < 0x100) {
    bVar1 = internal_isupper_l(_C,(__crt_locale_pointers *)&local_20);
    if (bVar1) {
      _C = (int)(local_20.locinfo)->pclmap[_C];
    }
  }
  else {
    local_res8 = 0;
    local_resa = 0;
    if (((int)(local_20.locinfo)->lc_collate_cp < 2) ||
       (iVar2 = _isleadbyte_l(_C >> 8 & 0xff,&local_20), iVar2 == 0)) {
      puVar3 = __doserrno();
      iVar2 = 1;
      *puVar3 = 0x2a;
      local_res8 = (ushort)(byte)_C;
    }
    else {
      iVar2 = 2;
      local_res8 = CONCAT11((byte)_C,(char)((uint)_C >> 8));
      local_resa = 0;
    }
    local_res18[0] = 0;
    local_res18[1] = 0;
    local_res18[2] = 0;
    iVar2 = __acrt_LCMapStringA((__crt_locale_pointers *)&local_20,
                                (local_20.locinfo)->locale_name[2],0x100,(char *)&local_res8,iVar2,
                                (char *)local_res18,3,(local_20.locinfo)->lc_time_cp,1);
    if (iVar2 != 0) {
      _C = (int)local_res18[0];
      if (iVar2 != 1) {
        if (local_10 == '\0') {
          return (uint)CONCAT11(local_res18[0],local_res18[1]);
        }
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        return (uint)CONCAT11(local_res18[0],local_res18[1]);
      }
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return _C;
}




/* Library Function - Single Match
    _toupper_l
   
   Library: Visual Studio 2015 Release */

int __cdecl _toupper_l(int _C,_locale_t _Locale)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  undefined2 local_res8;
  undefined1 local_resa;
  byte local_res18 [8];
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
  if ((uint)_C < 0x100) {
    bVar1 = internal_islower_l(_C,(__crt_locale_pointers *)&local_20);
    if (bVar1) {
      _C = (int)(local_20.locinfo)->pcumap[_C];
    }
  }
  else {
    local_res8 = 0;
    local_resa = 0;
    if (((int)(local_20.locinfo)->lc_collate_cp < 2) ||
       (iVar2 = _isleadbyte_l(_C >> 8 & 0xff,&local_20), iVar2 == 0)) {
      puVar3 = __doserrno();
      iVar2 = 1;
      *puVar3 = 0x2a;
      local_res8 = (ushort)(byte)_C;
    }
    else {
      iVar2 = 2;
      local_res8 = CONCAT11((byte)_C,(char)((uint)_C >> 8));
      local_resa = 0;
    }
    local_res18[0] = 0;
    local_res18[1] = 0;
    local_res18[2] = 0;
    iVar2 = __acrt_LCMapStringA((__crt_locale_pointers *)&local_20,
                                (local_20.locinfo)->locale_name[2],0x200,(char *)&local_res8,iVar2,
                                (char *)local_res18,3,(local_20.locinfo)->lc_time_cp,1);
    if (iVar2 != 0) {
      _C = (int)local_res18[0];
      if (iVar2 != 1) {
        if (local_10 == '\0') {
          return (uint)CONCAT11(local_res18[0],local_res18[1]);
        }
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
        return (uint)CONCAT11(local_res18[0],local_res18[1]);
      }
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return _C;
}




/* Library Function - Single Match
    tolower
   
   Library: Visual Studio 2015 Release */

int __cdecl tolower(int _C)

{
  if (DAT_140033464 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = _tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}




/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::format_validation_base,wchar_t>(unsigned
   __int64,wchar_t * __ptr64 const,unsigned __int64,wchar_t const * __ptr64 const,struct
   __crt_locale_pointers * __ptr64 const,char * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsprintf<class___crt_stdio_output::format_validation_base,wchar_t>
          (__uint64 param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  int iVar1;
  int extraout_EAX;
  ulong *puVar2;
  undefined1 auStackY_538 [32];
  wchar_t *local_508;
  __uint64 local_500;
  __uint64 local_4f8;
  undefined1 local_4f0;
  wchar_t **local_4e8;
  longlong local_4e0;
  __crt_locale_pointers local_4d8 [16];
  char local_4c8;
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  local_4b8 [1120];
  LPVOID local_58;
  ulonglong local_38;
  
  local_38 = DAT_140032008 ^ (ulonglong)auStackY_538;
  if ((param_4 == (wchar_t *)0x0) || ((param_3 != 0 && (param_2 == (wchar_t *)0x0)))) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_140013a44();
    goto LAB_14001404c;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_4e0,param_5);
  FUN_1400115e0((undefined1 (*) [16])&local_508,0,0x20);
  local_4f8 = 0;
  if (((param_1 & 2) != 0) || (local_4f0 = 0, param_2 == (wchar_t *)0x0)) {
    local_4f0 = 1;
  }
  local_4e8 = &local_508;
  local_508 = param_2;
  local_500 = param_3;
  __crt_stdio_output::
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  ::
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
            (local_4b8,(string_output_adapter<wchar_t> *)&local_4e8,param_1,param_4,local_4d8,
             param_6);
  iVar1 = __crt_stdio_output::
          output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          ::process((output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                     *)local_4b8);
  if (param_2 != (wchar_t *)0x0) {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        if (param_3 != 0) {
          if (local_4f8 != param_3) goto LAB_14001401f;
LAB_140014090:
          param_2[param_3 - 1] = L'\0';
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar1) {
          if (local_4f8 == param_3) goto LAB_140014090;
          goto LAB_14001401f;
        }
        *param_2 = L'\0';
      }
    }
    else if (((param_3 != 0) || (iVar1 == 0)) && (local_4f8 != param_3)) {
LAB_14001401f:
      param_2[local_4f8] = L'\0';
    }
  }
  _free_base(local_58);
  local_58 = (LPVOID)0x0;
  if (local_4c8 != '\0') {
    *(uint *)(local_4e0 + 0x3a8) = *(uint *)(local_4e0 + 0x3a8) & 0xfffffffd;
  }
LAB_14001404c:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_538);
  return extraout_EAX;
}




/* Library Function - Single Match
    public: bool __cdecl
   __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(unsigned __int64)
   __ptr64
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
          (formatting_buffer *this,__uint64 param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulong *puVar3;
  LPVOID pvVar4;
  bool bVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  if ((SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) & 0xfffffffffffffffe) <
      2) {
    puVar3 = __doserrno();
    *puVar3 = 0xc;
    bVar5 = false;
  }
  else {
    uVar2 = param_1 * 2;
    if (((*(longlong *)(this + 0x408) == 0) && (uVar2 < 0x401)) ||
       (uVar2 <= *(ulonglong *)(this + 0x400))) {
      bVar5 = true;
    }
    else {
      pvVar4 = _malloc_base(uVar2);
      bVar5 = pvVar4 != (LPVOID)0x0;
      if (bVar5) {
        _free_base(*(LPVOID *)(this + 0x408));
        *(LPVOID *)(this + 0x408) = pvVar4;
        *(ulonglong *)(this + 0x400) = uVar2;
      }
      _free_base((LPVOID)0x0);
    }
  }
  return bVar5;
}




/* Library Function - Single Match
    bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(unsigned
   __int64,wchar_t,enum __crt_stdio_output::length_modifier)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __cdecl
__crt_stdio_output::is_wide_character_specifier<wchar_t>
          (__uint64 param_1,wchar_t param_2,length_modifier param_3)

{
  if (param_3 == 2) {
    return false;
  }
  if (((param_3 != 3) && (param_3 != 0xc)) && (param_3 != 0xd)) {
    return (bool)((byte)(param_1 >> 2) & 1) == ((param_2 + L'ﾝ' & 0xffefU) == 0U);
  }
  return true;
}




/* Library Function - Multiple Matches With Same Base Name
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool) __ptr64
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool) __ptr64
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   int>(unsigned int,unsigned int,bool) __ptr64
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool) __ptr64
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void type_case_integer_parse_into_buffer<>
               (longlong param_1,ulonglong param_2,uint param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x460);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    lVar4 = param_1 + 0x58;
  }
  if (*(longlong *)(param_1 + 0x460) == 0) {
    uVar2 = 0x200;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x458) >> 1;
  }
  lVar4 = lVar4 + -1 + uVar2;
  *(longlong *)(param_1 + 0x48) = lVar4;
  uVar2 = param_2 & 0xffffffff;
  while( true ) {
    if ((*(int *)(param_1 + 0x38) < 1) && ((int)uVar2 == 0)) break;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    cVar3 = (char)(uVar2 % (ulonglong)param_3) + '0';
    if ('9' < cVar3) {
      cVar3 = cVar3 + (-(param_4 != '\0') & 0xe0U) + 0x27;
    }
    **(char **)(param_1 + 0x48) = cVar3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
    uVar2 = uVar2 / param_3;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x50) = (int)lVar4 - iVar1;
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
   __ptr64
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
   __ptr64
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   __int64>(unsigned __int64,unsigned int,bool) __ptr64
    private: void __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
   __ptr64
     12 names - too many to list
   
   Library: Visual Studio 2015 Release */

void type_case_integer_parse_into_buffer<>
               (longlong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x460);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    lVar4 = param_1 + 0x58;
  }
  if (*(longlong *)(param_1 + 0x460) == 0) {
    uVar2 = 0x200;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x458) >> 1;
  }
  lVar4 = lVar4 + -1 + uVar2;
  *(longlong *)(param_1 + 0x48) = lVar4;
  while ((0 < *(int *)(param_1 + 0x38) || (param_2 != 0))) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    cVar3 = (char)(param_2 % (param_3 & 0xffffffff)) + '0';
    if ('9' < cVar3) {
      cVar3 = cVar3 + (-(param_4 != '\0') & 0xe0U) + 0x27;
    }
    **(char **)(param_1 + 0x48) = cVar3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
    param_2 = param_2 / (param_3 & 0xffffffff);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x50) = (int)lVar4 - iVar1;
  return;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::write_multiple_characters<class
   __crt_stdio_output::string_output_adapter<wchar_t>,char>(class
   __crt_stdio_output::string_output_adapter<wchar_t> const & __ptr64,char,int,int * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

void __cdecl
__crt_stdio_output::
write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
          (string_output_adapter<wchar_t> *param_1,char param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)param_1;
      if (*(longlong *)(lVar1 + 0x10) == *(longlong *)(lVar1 + 8)) {
        if (*(char *)(lVar1 + 0x18) == '\0') {
          *param_4 = -1;
        }
        else {
          *param_4 = *param_4 + 1;
        }
      }
      else {
        *param_4 = *param_4 + 1;
        *(longlong *)(*(longlong *)param_1 + 0x10) = *(longlong *)(*(longlong *)param_1 + 0x10) + 1;
        *(short *)**(undefined8 **)param_1 = (short)param_2;
        **(longlong **)param_1 = **(longlong **)param_1 + 2;
      }
    } while ((*param_4 != -1) && (iVar2 = iVar2 + 1, iVar2 < param_3));
  }
  return;
}




/* Library Function - Single Match
    public: __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >(class
   __crt_stdio_output::string_output_adapter<wchar_t> const & __ptr64,unsigned __int64,wchar_t const
   * __ptr64 const,struct __crt_locale_pointers * __ptr64 const,char * __ptr64 const) __ptr64
   
   Library: Visual Studio 2015 Release */

output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
* __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
           *this,string_output_adapter<wchar_t> *param_1,__uint64 param_2,wchar_t *param_3,
          __crt_locale_pointers *param_4,char *param_5)

{
  ulong *puVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x40] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                )0x0;
  *(undefined2 *)(this + 0x42) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                )0x0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x468) = *(undefined8 *)param_1;
  *(__crt_locale_pointers **)(this + 8) = param_4;
  *(char **)(this + 0x20) = param_5;
  *(__uint64 *)this = param_2;
  *(wchar_t **)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x470) = 0;
  puVar1 = __doserrno();
  *(ulong **)(this + 0x10) = puVar1;
  return this;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::force_decimal_point(char * __ptr64,struct __crt_locale_pointers
   * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

void __cdecl __crt_stdio_output::force_decimal_point(char *param_1,__crt_locale_pointers *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = tolower((int)*param_1);
  if (iVar2 != 0x65) {
    do {
      param_1 = (char *)((byte *)param_1 + 1);
      iVar2 = isdigit((uint)(byte)*param_1);
    } while (iVar2 != 0);
  }
  iVar2 = tolower((int)*param_1);
  if (iVar2 == 0x78) {
    param_1 = (char *)((byte *)param_1 + 2);
  }
  bVar3 = *param_1;
  *param_1 = *(byte *)**(undefined8 **)(*(longlong *)param_2 + 0xf8);
  do {
    param_1 = (char *)((byte *)param_1 + 1);
    bVar1 = *param_1;
    *param_1 = bVar3;
    bVar3 = bVar1;
  } while (*param_1 != 0);
  return;
}




/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::parse_int_from_format_string(int *
   __ptr64 const) __ptr64
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::parse_int_from_format_string
          (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
           *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  wchar_t *local_res8;
  
  piVar2 = *(int **)(this + 0x10);
  iVar1 = *piVar2;
  *piVar2 = 0;
  local_res8 = (wchar_t *)0x0;
  lVar4 = wcstol((wchar_t *)(*(longlong *)(this + 0x18) + -2),&local_res8,10);
  *param_1 = lVar4;
  if ((**(int **)(this + 0x10) == 0x22) || (local_res8 < *(wchar_t **)(this + 0x18))) {
    bVar3 = false;
  }
  else {
    *(wchar_t **)(this + 0x18) = local_res8;
    bVar3 = true;
  }
  if ((*piVar2 == 0) && (iVar1 != 0)) {
    *piVar2 = iVar1;
  }
  return bVar3;
}




/* Library Function - Single Match
    public: int __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::process(void) __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::process(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          *this)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  longlong lVar4;
  bool bVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *poVar9;
  
  if ((*(longlong *)(this + 0x468) == 0) || (*(longlong *)(this + 0x18) == 0)) {
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_140013a44();
    return -1;
  }
  *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
  iVar8 = *(int *)(this + 0x470);
joined_r0x0001400144f2:
  if (iVar8 == 2) {
    return *(int *)(this + 0x28);
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
LAB_1400146bd:
  sVar3 = **(short **)(this + 0x18);
  *(short *)(this + 0x42) = sVar3;
  if (sVar3 == 0) goto code_r0x0001400146d1;
  *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 2;
  if (*(int *)(this + 0x28) < 0) goto LAB_1400146d6;
  uVar7 = 0;
  if ((ushort)(*(short *)(this + 0x42) - 0x20U) < 0x5b) {
    uVar7 = (byte)(&DAT_140024180)[*(ushort *)(this + 0x42)] & 0xf;
  }
  bVar1 = (&DAT_1400241a0)[*(int *)(this + 0x2c) + uVar7 * 9];
  uVar7 = (uint)(bVar1 >> 4);
  *(uint *)(this + 0x2c) = uVar7;
  if (uVar7 == 8) goto LAB_140014712;
  if (bVar1 >> 4 == 0) {
    uVar2 = *(undefined2 *)(this + 0x42);
    this[0x54] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  )0x1;
    lVar4 = *(longlong *)(this + 0x468);
    if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined4 *)(this + 0x28) = 0xffffffff;
      }
      else {
        *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      }
    }
    else {
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      *(longlong *)(*(longlong *)(this + 0x468) + 0x10) =
           *(longlong *)(*(longlong *)(this + 0x468) + 0x10) + 1;
      *(undefined2 *)**(undefined8 **)(this + 0x468) = uVar2;
      **(longlong **)(this + 0x468) = **(longlong **)(this + 0x468) + 2;
    }
LAB_1400146b7:
    bVar5 = true;
  }
  else {
    if (uVar7 == 1) {
      *(undefined8 *)(this + 0x30) = 0;
      this[0x40] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                    )0x0;
      *(undefined4 *)(this + 0x38) = 0xffffffff;
      *(undefined4 *)(this + 0x3c) = 0;
      this[0x54] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                    )0x0;
      goto LAB_1400146bd;
    }
    if (uVar7 == 2) {
      sVar3 = *(short *)(this + 0x42);
      if (sVar3 == 0x20) {
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
      }
      else if (sVar3 == 0x23) {
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
      }
      else if (sVar3 == 0x2b) {
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
      }
      else if (sVar3 == 0x2d) {
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
      }
      else if (sVar3 == 0x30) {
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
      }
      goto LAB_1400146bd;
    }
    if (uVar7 != 3) {
      if (uVar7 != 4) {
        if (uVar7 == 5) {
          if (*(short *)(this + 0x42) != 0x2a) {
            poVar9 = this + 0x38;
            goto LAB_1400145b4;
          }
          *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
          iVar8 = *(int *)(*(longlong *)(this + 0x20) + -8);
          if (iVar8 < 0) {
            iVar8 = -1;
          }
          *(int *)(this + 0x38) = iVar8;
          goto LAB_1400146b7;
        }
        if (uVar7 == 6) {
          bVar5 = state_case_size(this);
        }
        else {
          if (uVar7 != 7) {
            return -1;
          }
          bVar5 = state_case_type(this);
        }
        goto LAB_1400146b9;
      }
      *(undefined4 *)(this + 0x38) = 0;
      goto LAB_1400146bd;
    }
    if (*(short *)(this + 0x42) == 0x2a) {
      *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
      iVar8 = *(int *)(*(longlong *)(this + 0x20) + -8);
      *(int *)(this + 0x34) = iVar8;
      if (iVar8 < 0) {
        *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
        *(int *)(this + 0x34) = -iVar8;
      }
      goto LAB_1400146b7;
    }
    poVar9 = this + 0x34;
LAB_1400145b4:
    bVar5 = parse_int_from_format_string(this,(int *)poVar9);
  }
LAB_1400146b9:
  if (bVar5 == false) {
    return -1;
  }
  goto LAB_1400146bd;
code_r0x0001400146d1:
  *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 2;
LAB_1400146d6:
  if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != 7)) {
LAB_140014712:
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_140013a44();
    return -1;
  }
  *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
  iVar8 = *(int *)(this + 0x470);
  goto joined_r0x0001400144f2;
}




/* Library Function - Single Match
    public: int __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::process(void) __ptr64
   
   Library: Visual Studio 2015 Release */

int __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::process(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          *this)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  int iVar8;
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *poVar9;
  
  if ((*(longlong *)(this + 0x468) == 0) || (*(longlong *)(this + 0x18) == 0)) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_140013a44();
    return -1;
  }
  *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
  iVar8 = *(int *)(this + 0x470);
  do {
    if (iVar8 == 2) {
      return *(int *)(this + 0x28);
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
LAB_140014943:
    sVar3 = **(short **)(this + 0x18);
    *(short *)(this + 0x42) = sVar3;
    if (sVar3 != 0) {
      *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 2;
      if (*(int *)(this + 0x28) < 0) goto LAB_14001495c;
      uVar6 = 0;
      if ((ushort)(*(short *)(this + 0x42) - 0x20U) < 0x5b) {
        uVar6 = (byte)" Complete Object Locator\'"[(ulonglong)*(ushort *)(this + 0x42) + 8] & 0xf;
      }
      bVar1 = (&DAT_140024140)[*(int *)(this + 0x2c) + uVar6 * 8];
      uVar6 = (uint)(bVar1 >> 4);
      *(uint *)(this + 0x2c) = uVar6;
      if (uVar6 == 8) {
        puVar7 = __doserrno();
        *puVar7 = 0x16;
        FUN_140013a44();
        return -1;
      }
      if (bVar1 >> 4 == 0) {
        uVar2 = *(undefined2 *)(this + 0x42);
        this[0x54] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                      )0x1;
        lVar4 = *(longlong *)(this + 0x468);
        if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
          if (*(char *)(lVar4 + 0x18) == '\0') {
            *(undefined4 *)(this + 0x28) = 0xffffffff;
          }
          else {
            *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
          }
        }
        else {
          *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
          *(longlong *)(*(longlong *)(this + 0x468) + 0x10) =
               *(longlong *)(*(longlong *)(this + 0x468) + 0x10) + 1;
          *(undefined2 *)**(undefined8 **)(this + 0x468) = uVar2;
          **(longlong **)(this + 0x468) = **(longlong **)(this + 0x468) + 2;
        }
        goto LAB_14001493d;
      }
      if (uVar6 == 1) {
        *(undefined8 *)(this + 0x30) = 0;
        this[0x40] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                      )0x0;
        *(undefined4 *)(this + 0x38) = 0xffffffff;
        *(undefined4 *)(this + 0x3c) = 0;
        this[0x54] = (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                      )0x0;
      }
      else {
        if (uVar6 != 2) {
          if (uVar6 == 3) {
            if (*(short *)(this + 0x42) == 0x2a) {
              *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
              iVar8 = *(int *)(*(longlong *)(this + 0x20) + -8);
              *(int *)(this + 0x34) = iVar8;
              if (iVar8 < 0) {
                *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
                *(int *)(this + 0x34) = -iVar8;
              }
LAB_14001493d:
              bVar5 = true;
            }
            else {
              poVar9 = this + 0x34;
LAB_14001483a:
              bVar5 = output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                      ::parse_int_from_format_string
                                ((output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                                  *)this,(int *)poVar9);
            }
          }
          else {
            if (uVar6 == 4) {
              *(undefined4 *)(this + 0x38) = 0;
              goto LAB_140014943;
            }
            if (uVar6 == 5) {
              if (*(short *)(this + 0x42) == 0x2a) {
                *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 8;
                iVar8 = *(int *)(*(longlong *)(this + 0x20) + -8);
                if (iVar8 < 0) {
                  iVar8 = -1;
                }
                *(int *)(this + 0x38) = iVar8;
                goto LAB_14001493d;
              }
              poVar9 = this + 0x38;
              goto LAB_14001483a;
            }
            if (uVar6 == 6) {
              bVar5 = output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                      ::state_case_size((output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                                         *)this);
            }
            else {
              if (uVar6 != 7) {
                return -1;
              }
              bVar5 = output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                      ::state_case_type((output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                                         *)this);
            }
          }
          if (bVar5 == false) {
            return -1;
          }
          goto LAB_140014943;
        }
        sVar3 = *(short *)(this + 0x42);
        if (sVar3 == 0x20) {
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
        }
        else if (sVar3 == 0x23) {
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x20;
        }
        else if (sVar3 == 0x2b) {
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
        }
        else if (sVar3 == 0x2d) {
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
        }
        else if (sVar3 == 0x30) {
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 8;
        }
      }
      goto LAB_140014943;
    }
    *(longlong *)(this + 0x18) = *(longlong *)(this + 0x18) + 2;
LAB_14001495c:
    *(int *)(this + 0x470) = *(int *)(this + 0x470) + 1;
    iVar8 = *(int *)(this + 0x470);
  } while( true );
}




/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_size(void) __ptr64
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::state_case_size(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  *this)

{
  short sVar1;
  short *psVar2;
  bool bVar3;
  ulong *puVar4;
  
  if (*(short *)(this + 0x42) == 0x46) {
    if (((byte)*this & 8) == 0) {
      *(undefined4 *)(this + 0x2c) = 7;
      bVar3 = state_case_type(this);
      return bVar3;
    }
  }
  else if (*(short *)(this + 0x42) == 0x4e) {
    if (((byte)*this & 8) == 0) {
      *(undefined4 *)(this + 0x2c) = 8;
LAB_1400149df:
      puVar4 = __doserrno();
      *puVar4 = 0x16;
      FUN_140013a44();
      return false;
    }
  }
  else {
    if (*(int *)(this + 0x3c) != 0) goto LAB_1400149df;
    sVar1 = *(short *)(this + 0x42);
    if (sVar1 == 0x49) {
      psVar2 = *(short **)(this + 0x18);
      sVar1 = *psVar2;
      if ((sVar1 == 0x33) && (psVar2[1] == 0x32)) {
        *(undefined4 *)(this + 0x3c) = 10;
        *(short **)(this + 0x18) = psVar2 + 2;
      }
      else if ((sVar1 == 0x36) && (psVar2[1] == 0x34)) {
        *(undefined4 *)(this + 0x3c) = 0xb;
        *(short **)(this + 0x18) = psVar2 + 2;
      }
      else if (((ushort)(sVar1 - 0x58U) < 0x21) &&
              ((0x120821001U >> ((ulonglong)(ushort)(sVar1 - 0x58U) & 0x3f) & 1) != 0)) {
        *(undefined4 *)(this + 0x3c) = 9;
      }
    }
    else if (sVar1 == 0x4c) {
      *(undefined4 *)(this + 0x3c) = 8;
    }
    else if (sVar1 == 0x54) {
      *(undefined4 *)(this + 0x3c) = 0xd;
    }
    else if (sVar1 == 0x68) {
      if (**(short **)(this + 0x18) == 0x68) {
        *(undefined4 *)(this + 0x3c) = 1;
        *(short **)(this + 0x18) = *(short **)(this + 0x18) + 1;
      }
      else {
        *(undefined4 *)(this + 0x3c) = 2;
      }
    }
    else if (sVar1 == 0x6a) {
      *(undefined4 *)(this + 0x3c) = 5;
    }
    else if (sVar1 == 0x6c) {
      if (**(short **)(this + 0x18) == 0x6c) {
        *(undefined4 *)(this + 0x3c) = 4;
        *(short **)(this + 0x18) = *(short **)(this + 0x18) + 1;
      }
      else {
        *(undefined4 *)(this + 0x3c) = 3;
      }
    }
    else if (sVar1 == 0x74) {
      *(undefined4 *)(this + 0x3c) = 7;
    }
    else {
      if (sVar1 != 0x77) {
        if (sVar1 != 0x7a) {
          return true;
        }
        *(undefined4 *)(this + 0x3c) = 6;
        return true;
      }
      *(undefined4 *)(this + 0x3c) = 0xc;
    }
  }
  return true;
}




/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_type(void) __ptr64
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
::state_case_type(output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  *this)

{
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *poVar1;
  string_output_adapter<wchar_t> *this_00;
  short sVar2;
  bool bVar3;
  bool bVar4;
  undefined1 extraout_AL;
  ushort uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  char cVar11;
  undefined1 auStackY_68 [32];
  uint local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_140032008 ^ (ulonglong)auStackY_68;
  uVar5 = *(ushort *)(this + 0x42);
  bVar4 = true;
  if (uVar5 < 0x65) {
    if (uVar5 == 100) {
LAB_140014c57:
      *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x10;
LAB_140014c5b:
      uVar8 = 10;
LAB_140014c60:
      cVar11 = '\0';
LAB_140014c63:
      uVar7 = type_case_integer((longlong)this,uVar8,cVar11);
      cVar11 = (char)uVar7;
    }
    else {
      if (uVar5 == 0x41) goto LAB_140014c6a;
      if (uVar5 == 0x43) {
LAB_140014bd0:
        uVar6 = type_case_c_tchar((__uint64 *)this);
        cVar11 = (char)uVar6;
      }
      else {
        if (uVar5 < 0x45) goto LAB_140014de6;
        if (uVar5 < 0x48) goto LAB_140014c6a;
        if (uVar5 == 0x53) {
LAB_140014c13:
          uVar6 = type_case_s((__uint64 *)this);
          cVar11 = (char)uVar6;
        }
        else {
          if (uVar5 == 0x58) goto LAB_140014c28;
          if (uVar5 != 0x5a) {
            if (uVar5 != 0x61) {
              if (uVar5 != 99) goto LAB_140014de6;
              goto LAB_140014bd0;
            }
            goto LAB_140014c6a;
          }
          uVar6 = type_case_Z((__uint64 *)this);
          cVar11 = (char)uVar6;
        }
      }
    }
  }
  else {
    if (0x67 < uVar5) {
      if (uVar5 == 0x69) goto LAB_140014c57;
      if (uVar5 == 0x6e) {
        uVar7 = type_case_n((longlong)this);
        cVar11 = (char)uVar7;
        goto LAB_140014c6f;
      }
      if (uVar5 == 0x6f) {
        if ((*(uint *)(this + 0x30) >> 5 & 1) != 0) {
          *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 0x80;
        }
        uVar8 = 8;
        goto LAB_140014c60;
      }
      if (uVar5 != 0x70) {
        if (uVar5 == 0x73) goto LAB_140014c13;
        if (uVar5 != 0x75) {
          if (uVar5 != 0x78) goto LAB_140014de6;
          uVar8 = 0x10;
          goto LAB_140014c60;
        }
        goto LAB_140014c5b;
      }
      *(undefined4 *)(this + 0x38) = 0x10;
      *(undefined4 *)(this + 0x3c) = 0xb;
LAB_140014c28:
      cVar11 = '\x01';
      uVar8 = 0x10;
      goto LAB_140014c63;
    }
LAB_140014c6a:
    uVar6 = type_case_a((ulonglong *)this);
    cVar11 = (char)uVar6;
  }
LAB_140014c6f:
  if ((cVar11 == '\0') ||
     (this[0x40] !=
      (output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::format_validation_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
       )0x0)) goto LAB_140014de6;
  uVar8 = *(uint *)(this + 0x30);
  local_38 = 0;
  local_34 = 0;
  lVar10 = 0;
  if ((uVar8 >> 4 & 1) != 0) {
    if ((uVar8 >> 6 & 1) == 0) {
      if ((uVar8 & 1) == 0) {
        if ((uVar8 >> 1 & 1) != 0) {
          local_38 = 0x20;
          lVar10 = 1;
        }
        goto LAB_140014cd4;
      }
      uVar5 = 0x2b;
    }
    else {
      uVar5 = 0x2d;
    }
    local_38 = (uint)uVar5;
    lVar10 = 1;
  }
LAB_140014cd4:
  sVar2 = *(short *)(this + 0x42);
  if (((sVar2 - 0x58U & 0xffdf) != 0) || (bVar3 = bVar4, (uVar8 >> 5 & 1) == 0)) {
    bVar3 = false;
  }
  if ((bVar3) || ((sVar2 - 0x41U & 0xffdf) == 0)) {
    *(undefined2 *)((longlong)&local_38 + lVar10 * 2) = 0x30;
    if ((sVar2 != 0x58) && (sVar2 != 0x41)) {
      bVar4 = false;
    }
    *(short *)((longlong)&local_38 + (lVar10 + 1) * 2) = (short)(char)((-bVar4 & 0xe0U) + 0x78);
    lVar10 = lVar10 + 2;
  }
  iVar9 = (*(int *)(this + 0x34) - *(int *)(this + 0x50)) - (int)lVar10;
  if ((uVar8 & 0xc) == 0) {
    write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
              ((string_output_adapter<wchar_t> *)(this + 0x468),' ',iVar9,(int *)(this + 0x28));
  }
  poVar1 = this + 0x28;
  this_00 = (string_output_adapter<wchar_t> *)(this + 0x468);
  string_output_adapter<wchar_t>::write_string
            (this_00,(wchar_t *)&local_38,(int)lVar10,(int *)poVar1,*(int **)(this + 0x10));
  if (((*(uint *)(this + 0x30) >> 3 & 1) != 0) && ((*(uint *)(this + 0x30) >> 2 & 1) == 0)) {
    write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
              (this_00,'0',iVar9,(int *)poVar1);
  }
  write_stored_string_tchar((longlong)this);
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x30) >> 2 & 1) != 0)) {
    write_multiple_characters<class___crt_stdio_output::string_output_adapter<wchar_t>,char>
              (this_00,' ',iVar9,(int *)poVar1);
  }
LAB_140014de6:
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_68);
  return (bool)extraout_AL;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(void) __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined8 type_case_Z(__uint64 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  __uint64 _Var3;
  bool bVar4;
  ulonglong uVar5;
  
  param_1[4] = param_1[4] + 8;
  uVar5 = param_1[4];
  puVar2 = *(ushort **)(uVar5 - 8);
  if ((puVar2 == (ushort *)0x0) || (_Var3 = *(__uint64 *)(puVar2 + 4), _Var3 == 0)) {
    *(undefined4 *)(param_1 + 10) = 6;
    param_1[9] = (__uint64)&DAT_1400241fc;
  }
  else {
    bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((longlong)param_1 + 0x42),
                       *(length_modifier *)((longlong)param_1 + 0x3c));
    param_1[9] = _Var3;
    uVar1 = *puVar2;
    uVar5 = (ulonglong)uVar1;
    if (bVar4) {
      uVar5 = (ulonglong)(uint)(uVar1 >> 1);
      *(uint *)(param_1 + 10) = (uint)(uVar1 >> 1);
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      goto LAB_140014e82;
    }
    *(uint *)(param_1 + 10) = (uint)uVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
LAB_140014e82:
  return CONCAT71((int7)(uVar5 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void) __ptr64
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined8 type_case_a(ulonglong *param_1)

{
  formatting_buffer *this;
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  formatting_buffer *pfVar5;
  undefined7 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  __uint64 _Var11;
  __uint64 _Var12;
  formatting_buffer *pfVar13;
  double local_res8;
  char *pcVar10;
  
  *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x10;
  if ((int)param_1[7] < 0) {
    *(uint *)(param_1 + 7) =
         (-(uint)((*(short *)((longlong)param_1 + 0x42) - 0x41U & 0xffdf) != 0) & 0xfffffff9) + 0xd;
  }
  else if (((int)param_1[7] == 0) && ((*(short *)((longlong)param_1 + 0x42) - 0x47U & 0xffdf) == 0))
  {
    *(undefined4 *)(param_1 + 7) = 1;
  }
  this = (formatting_buffer *)(param_1 + 0xb);
  bVar2 = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
                    (this,(longlong)((int)param_1[7] + 0x15d));
  _Var11 = 0x200;
  if (!bVar2) {
    if (param_1[0x8c] == 0) {
      iVar4 = 0x200;
    }
    else {
      iVar4 = (int)(param_1[0x8b] >> 1);
    }
    *(int *)(param_1 + 7) = iVar4 + -0x15d;
  }
  pfVar5 = (formatting_buffer *)param_1[0x8c];
  if ((formatting_buffer *)param_1[0x8c] == (formatting_buffer *)0x0) {
    pfVar5 = this;
  }
  param_1[9] = (ulonglong)pfVar5;
  param_1[4] = param_1[4] + 8;
  local_res8 = *(double *)(param_1[4] - 8);
  if (param_1[0x8c] == 0) {
    _Var12 = 0x200;
  }
  else {
    _Var12 = param_1[0x8b] >> 1;
  }
  pfVar5 = (formatting_buffer *)param_1[0x8c];
  if (pfVar5 == (formatting_buffer *)0x0) {
    pfVar13 = (formatting_buffer *)(param_1 + 0x4b);
  }
  else {
    pfVar13 = pfVar5 + (param_1[0x8b] >> 1);
    _Var11 = param_1[0x8b] >> 1;
  }
  if (pfVar5 == (formatting_buffer *)0x0) {
    pfVar5 = this;
  }
  __acrt_fp_format(&local_res8,(char *)pfVar5,_Var11,(char *)pfVar13,_Var12,
                   (int)*(char *)((longlong)param_1 + 0x42),(int)param_1[7],*param_1,
                   (__crt_locale_pointers *)param_1[1]);
  if ((((uint)param_1[6] >> 5 & 1) != 0) && ((int)param_1[7] == 0)) {
    __crt_stdio_output::force_decimal_point((char *)param_1[9],(__crt_locale_pointers *)param_1[1]);
  }
  if (((*(short *)((longlong)param_1 + 0x42) - 0x47U & 0xffdf) == 0) &&
     (((uint)param_1[6] >> 5 & 1) == 0)) {
    for (pcVar8 = (char *)param_1[9];
        (*pcVar8 != '\0' && (*pcVar8 != *(char *)**(undefined8 **)(*(longlong *)param_1[1] + 0xf8)))
        ; pcVar8 = pcVar8 + 1) {
    }
    if (*pcVar8 != '\0') {
      do {
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar8;
        if (*pcVar8 == '\0') break;
      } while ((*pcVar8 + 0xbbU & 0xdf) != 0);
      do {
        pcVar10 = pcVar9;
        pcVar9 = pcVar10 + -1;
      } while (*pcVar9 == '0');
      if (*pcVar9 == *(char *)**(undefined8 **)(*(longlong *)param_1[1] + 0xf8)) {
        pcVar9 = pcVar10 + -2;
      }
      do {
        cVar1 = *pcVar8;
        pcVar9 = pcVar9 + 1;
        pcVar8 = pcVar8 + 1;
        *pcVar9 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  pcVar8 = (char *)param_1[9];
  if (*pcVar8 == '-') {
    *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x40;
    pcVar8 = pcVar8 + 1;
    param_1[9] = (ulonglong)pcVar8;
  }
  uVar6 = (undefined7)((ulonglong)pcVar8 >> 8);
  bVar3 = *(char *)param_1[9] + 0xb7;
  if ((bVar3 < 0x26) && ((0x2100000021U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
    uVar6 = 0;
    *(undefined2 *)((longlong)param_1 + 0x42) = 0x73;
  }
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (((char *)param_1[9])[lVar7] != '\0');
  *(int *)(param_1 + 10) = (int)lVar7;
  return CONCAT71(uVar6,1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t) __ptr64
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

undefined8 type_case_c_tchar(__uint64 *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_var_00;
  wchar_t *pwVar5;
  char local_res8;
  undefined1 local_res9;
  undefined7 extraout_var;
  
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  param_1[4] = param_1[4] + 8;
  wVar2 = *(wchar_t *)(param_1[4] - 8);
  local_res9 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                         (*param_1,*(wchar_t *)((longlong)param_1 + 0x42),
                          *(length_modifier *)((longlong)param_1 + 0x3c));
  uVar4 = CONCAT71(extraout_var,local_res9);
  pwVar1 = (wchar_t *)(param_1 + 0xb);
  pwVar5 = (wchar_t *)param_1[0x8c];
  if ((bool)local_res9) {
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = pwVar1;
    }
    *pwVar5 = wVar2;
  }
  else {
    local_res8 = (char)wVar2;
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar5 = pwVar1;
    }
    iVar3 = _mbtowc_l(pwVar5,&local_res8,
                      (longlong)(int)((_locale_t)param_1[1])->locinfo->lc_collate_cp,
                      (_locale_t)param_1[1]);
    uVar4 = CONCAT44(extraout_var_00,iVar3);
    if (iVar3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  *(undefined4 *)(param_1 + 10) = 1;
  pwVar5 = (wchar_t *)param_1[0x8c];
  if ((wchar_t *)param_1[0x8c] == (wchar_t *)0x0) {
    pwVar5 = pwVar1;
  }
  param_1[9] = (__uint64)pwVar5;
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
   __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
   __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
   __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
   __ptr64
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

ulonglong type_case_integer(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  lVar5 = 4;
  if (iVar4 < 6) {
    if (iVar4 != 5) {
      if (iVar4 == 0) goto LAB_1400151be;
      if (iVar4 == 1) {
        lVar5 = 1;
        goto LAB_1400151be;
      }
      iVar4 = iVar4 + -2;
      if (iVar4 == 0) {
        lVar5 = 2;
        goto LAB_1400151be;
      }
LAB_1400151b1:
      if (iVar4 == 1) goto LAB_1400151be;
      if (iVar4 != 2) {
        lVar5 = 0;
        goto LAB_1400151be;
      }
    }
  }
  else if (((iVar4 != 6) && (iVar4 != 7)) && (iVar4 = iVar4 + -9, iVar4 != 0)) goto LAB_1400151b1;
  lVar5 = 8;
LAB_1400151be:
  if (lVar5 == 1) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    if ((*(uint *)(param_1 + 0x30) >> 4 & 1) == 0) {
      uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    else {
      uVar3 = (ulonglong)*(char *)(*(longlong *)(param_1 + 0x20) + -8);
    }
  }
  else if (lVar5 == 2) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    if ((*(uint *)(param_1 + 0x30) >> 4 & 1) == 0) {
      uVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    else {
      uVar3 = (ulonglong)*(short *)(*(longlong *)(param_1 + 0x20) + -8);
    }
  }
  else if (lVar5 == 4) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    if ((*(uint *)(param_1 + 0x30) >> 4 & 1) == 0) {
      uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    else {
      uVar3 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x20) + -8);
    }
  }
  else {
    if (lVar5 != 8) {
      puVar2 = __doserrno();
      *puVar2 = 0x16;
      uVar3 = FUN_140013a44();
      return uVar3 & 0xffffffffffffff00;
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
  }
  if (((*(uint *)(param_1 + 0x30) >> 4 & 1) != 0) && ((longlong)uVar3 < 0)) {
    uVar3 = -uVar3;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
  }
  if (*(int *)(param_1 + 0x38) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  else {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff7;
    if (0x200 < *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x38) = 0x200;
    }
  }
  if (uVar3 == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffdf;
  }
  if (lVar5 == 8) {
    type_case_integer_parse_into_buffer<>(param_1,uVar3,(ulonglong)param_2,param_3);
  }
  else {
    type_case_integer_parse_into_buffer<>(param_1,uVar3 & 0xffffffff,param_2,param_3);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (((uVar1 >> 7 & 1) != 0) &&
     ((*(int *)(param_1 + 0x50) == 0 || (**(char **)(param_1 + 0x48) != '0')))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
    **(undefined1 **)(param_1 + 0x48) = 0x30;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  return CONCAT71((uint7)(uint3)(uVar1 >> 0xf),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_n(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_n(void) __ptr64
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

ulonglong type_case_n(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 extraout_var;
  ulong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = 8;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
  puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + -8);
  iVar2 = _get_printf_count_output();
  uVar4 = CONCAT44(extraout_var,iVar2);
  if (iVar2 == 0) {
LAB_14001534c:
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    uVar4 = FUN_140013a44();
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 == 0) goto LAB_1400153ad;
        if (iVar2 == 1) {
          lVar5 = 1;
        }
        else {
          iVar2 = iVar2 + -2;
          if (iVar2 != 0) goto LAB_140015380;
          lVar5 = 2;
        }
      }
    }
    else if (((iVar2 != 6) && (iVar2 != 7)) && (iVar2 = iVar2 + -9, iVar2 != 0)) {
LAB_140015380:
      if (iVar2 == 1) {
LAB_1400153ad:
        lVar5 = 4;
      }
      else if (iVar2 != 2) {
        lVar5 = 0;
      }
    }
    if (lVar5 == 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x28);
    }
    else if (lVar5 == 2) {
      uVar4 = (ulonglong)*(ushort *)(param_1 + 0x28);
      *(ushort *)puVar1 = *(ushort *)(param_1 + 0x28);
    }
    else if (lVar5 == 4) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x28);
      *(uint *)puVar1 = *(uint *)(param_1 + 0x28);
    }
    else {
      if (lVar5 != 8) goto LAB_14001534c;
      uVar4 = (ulonglong)*(int *)(param_1 + 0x28);
      *puVar1 = uVar4;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_s(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_s(void) __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

undefined8 type_case_s(__uint64 *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  byte *pbVar6;
  int iVar7;
  
  param_1[4] = param_1[4] + 8;
  pwVar1 = *(wchar_t **)(param_1[4] - 8);
  param_1[9] = (__uint64)pwVar1;
  iVar2 = (int)param_1[7];
  if ((int)param_1[7] == -1) {
    iVar2 = 0x7fffffff;
  }
  bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((longlong)param_1 + 0x42),
                     *(length_modifier *)((longlong)param_1 + 0x3c));
  puVar4 = (undefined1 *)CONCAT71(extraout_var,bVar3);
  if (bVar3) {
    *(undefined1 *)((longlong)param_1 + 0x54) = 1;
    pwVar5 = L"(null)";
    if (pwVar1 != (wchar_t *)0x0) {
      pwVar5 = pwVar1;
    }
    param_1[9] = (__uint64)pwVar5;
    puVar4 = (undefined1 *)FUN_1400191e0(pwVar5,(longlong)iVar2);
    *(int *)(param_1 + 10) = (int)puVar4;
  }
  else {
    if (pwVar1 == (wchar_t *)0x0) {
      puVar4 = &DAT_1400241fc;
      param_1[9] = (__uint64)&DAT_1400241fc;
    }
    pbVar6 = (byte *)param_1[9];
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        if (*pbVar6 == 0) break;
        puVar4 = (undefined1 *)**(undefined8 **)param_1[1];
        if ((*(ushort *)(puVar4 + (ulonglong)*pbVar6 * 2) & 0x8000) != 0) {
          pbVar6 = pbVar6 + 1;
        }
        pbVar6 = pbVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    *(int *)(param_1 + 10) = iVar7;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   __ptr64
   
   Library: Visual Studio 2015 Release */

undefined8 write_stored_string_tchar(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 extraout_var;
  longlong extraout_RAX;
  longlong lVar3;
  char *_SrcCh;
  int iVar4;
  wchar_t local_res8 [4];
  
  if ((*(char *)(param_1 + 0x54) == '\0') && (0 < *(int *)(param_1 + 0x50))) {
    _SrcCh = *(char **)(param_1 + 0x48);
    iVar4 = 0;
    do {
      local_res8[0] = L'\0';
      iVar2 = _mbtowc_l(local_res8,_SrcCh,
                        (longlong)(int)(*(_locale_t *)(param_1 + 8))->locinfo->lc_collate_cp,
                        *(_locale_t *)(param_1 + 8));
      lVar3 = (longlong)iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        lVar3 = CONCAT44(extraout_var,iVar2);
        break;
      }
      lVar1 = *(longlong *)(param_1 + 0x468);
      if (*(longlong *)(lVar1 + 0x10) == *(longlong *)(lVar1 + 8)) {
        if (*(char *)(lVar1 + 0x18) == '\0') {
          *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        }
        else {
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
        *(wchar_t *)**(undefined8 **)(param_1 + 0x468) = local_res8[0];
        **(longlong **)(param_1 + 0x468) = **(longlong **)(param_1 + 0x468) + 2;
      }
      _SrcCh = _SrcCh + lVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 != *(int *)(param_1 + 0x50));
  }
  else {
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string
              ((string_output_adapter<wchar_t> *)(param_1 + 0x468),*(wchar_t **)(param_1 + 0x48),
               *(int *)(param_1 + 0x50),(int *)(param_1 + 0x28),*(int **)(param_1 + 0x10));
    lVar3 = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<wchar_t>::write_string(wchar_t
   const * __ptr64 const,int,int * __ptr64 const,int * __ptr64 const)const __ptr64
   
   Library: Visual Studio 2015 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<wchar_t>::write_string
          (string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)param_2;
  iVar1 = *param_4;
  *param_4 = 0;
  puVar2 = *(undefined8 **)this;
  if (puVar2[2] == puVar2[1]) {
    if (*(char *)(puVar2 + 3) == '\0') {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + param_2;
    }
  }
  else {
    uVar3 = puVar2[1] - puVar2[2];
    uVar5 = uVar4;
    if (uVar3 < uVar4) {
      uVar5 = uVar3;
    }
    FUN_140013410((undefined8 *)*puVar2,(undefined8 *)param_1,uVar5 * 2);
    **(longlong **)this = **(longlong **)this + uVar5 * 2;
    *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar5;
    if (*(char *)(*(longlong *)this + 0x18) == '\0') {
      if (uVar5 == uVar4) {
        *param_3 = *param_3 + (int)uVar5;
      }
      else {
        *param_3 = -1;
      }
    }
    else {
      *param_3 = *param_3 + param_2;
    }
  }
  if ((*param_4 == 0) && (iVar1 != 0)) {
    *param_4 = iVar1;
  }
  return;
}




/* Library Function - Single Match
    __stdio_common_vswprintf
   
   Library: Visual Studio 2015 Release */

void __stdio_common_vswprintf
               (ulonglong param_1,undefined2 *param_2,ulonglong param_3,wchar_t *param_4,
               __crt_locale_pointers *param_5,char *param_6)

{
  int iVar1;
  ulong *puVar2;
  undefined1 auStackY_538 [32];
  longlong local_508;
  __crt_locale_pointers local_500 [16];
  char local_4f0;
  undefined2 *local_4e8;
  ulonglong local_4e0;
  ulonglong local_4d8;
  undefined1 local_4d0;
  undefined2 **local_4c8 [2];
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  local_4b8 [1120];
  LPVOID local_58;
  ulonglong local_38;
  
  local_38 = DAT_140032008 ^ (ulonglong)auStackY_538;
  if ((param_4 == (wchar_t *)0x0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_140013a44();
    goto LAB_14001587e;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_508,param_5);
  FUN_1400115e0((undefined1 (*) [16])&local_4e8,0,0x20);
  local_4d8 = 0;
  if (((param_1 & 2) != 0) || (local_4d0 = 0, param_2 == (undefined2 *)0x0)) {
    local_4d0 = 1;
  }
  local_4c8[0] = &local_4e8;
  local_4e8 = param_2;
  local_4e0 = param_3;
  __crt_stdio_output::
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
  ::
  output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
            (local_4b8,(string_output_adapter<wchar_t> *)local_4c8,param_1,param_4,local_500,param_6
            );
  iVar1 = __crt_stdio_output::
          output_processor<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>,class___crt_stdio_output::standard_base<wchar_t,class___crt_stdio_output::string_output_adapter<wchar_t>_>_>
          ::process(local_4b8);
  if (param_2 == (undefined2 *)0x0) {
    _free_base(local_58);
    local_58 = (LPVOID)0x0;
    if (local_4f0 != '\0') {
      *(uint *)(local_508 + 0x3a8) = *(uint *)(local_508 + 0x3a8) & 0xfffffffd;
    }
    goto LAB_14001587e;
  }
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) != 0) {
      if (param_3 != 0) {
        if (iVar1 < 0) {
          *param_2 = 0;
        }
        else {
          if (local_4d8 != param_3) goto LAB_140015853;
          param_2[param_3 - 1] = 0;
        }
      }
LAB_140015858:
      _free_base(local_58);
      local_58 = (LPVOID)0x0;
      if (local_4f0 != '\0') {
        *(uint *)(local_508 + 0x3a8) = *(uint *)(local_508 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_14001587e;
    }
    if (param_3 != 0) {
      if (local_4d8 == param_3) {
        param_2[param_3 - 1] = 0;
        _free_base(local_58);
        local_58 = (LPVOID)0x0;
        if (local_4f0 != '\0') {
          *(uint *)(local_508 + 0x3a8) = *(uint *)(local_508 + 0x3a8) & 0xfffffffd;
        }
        goto LAB_14001587e;
      }
      goto LAB_140015853;
    }
  }
  else if ((param_3 != 0) || (iVar1 == 0)) {
    if (local_4d8 != param_3) {
LAB_140015853:
      param_2[local_4d8] = 0;
      goto LAB_140015858;
    }
    if ((iVar1 < 0) || ((ulonglong)(longlong)iVar1 <= param_3)) goto LAB_140015858;
  }
  _free_base(local_58);
  local_58 = (LPVOID)0x0;
  if (local_4f0 != '\0') {
    *(uint *)(local_508 + 0x3a8) = *(uint *)(local_508 + 0x3a8) & 0xfffffffd;
  }
LAB_14001587e:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_538);
  return;
}




/* Library Function - Single Match
    __stdio_common_vswprintf_s
   
   Library: Visual Studio 2015 Release */

int __stdio_common_vswprintf_s
              (__uint64 param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4,
              __crt_locale_pointers *param_5,char *param_6)

{
  int iVar1;
  ulong *puVar2;
  
  if (((param_4 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (param_3 == 0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
  }
  else {
    iVar1 = common_vsprintf<class___crt_stdio_output::format_validation_base,wchar_t>
                      (param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 < 0) {
      *param_2 = L'\0';
    }
    if (iVar1 != -2) {
      return iVar1;
    }
    puVar2 = __doserrno();
    *puVar2 = 0x22;
  }
  FUN_140013a44();
  return -1;
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
        goto LAB_140015943;
      }
      *_Dst = L'\0';
    }
  }
  puVar2 = __doserrno();
  uVar4 = 0x16;
LAB_140015943:
  *puVar2 = uVar4;
  FUN_140013a44();
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
      goto LAB_1400159c0;
    }
    *_Dst = L'\0';
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_1400159c0:
  *puVar2 = uVar3;
  FUN_140013a44();
  return uVar3;
}




/* Library Function - Single Match
    _towupper_l
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl _towupper_l(wint_t _C,_locale_t _Locale)

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
      if ((ushort)(local_res8[0] + L'ﾟ') < 0x1a) {
        local_res8[0] = local_res8[0] + L'￠';
      }
    }
    else if ((ushort)local_res8[0] < 0x100) {
      iVar1 = iswctype(local_res8[0],2);
      if (iVar1 != 0) {
        local_res8[0] =
             (WCHAR)*(byte *)(*(longlong *)(local_20 + 0x118) + (ulonglong)(ushort)local_res8[0]);
      }
    }
    else {
      iVar1 = __acrt_LCMapStringW(*(wchar_t **)(local_20 + 0x138),0x200,local_res8,1,local_res18,1);
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




void FUN_140015ad0(wint_t param_1)

{
  _towupper_l(param_1,(_locale_t)0x0);
  return;
}




/* Library Function - Single Match
    bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(unsigned int,unsigned long)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __crt_strtox::is_overflow_condition<unsigned_long>(uint param_1,ulong param_2)

{
  if (((param_1 & 4) == 0) &&
     (((param_1 & 1) == 0 ||
      ((((param_1 & 2) == 0 || (param_2 < 0x80000001)) &&
       (((param_1 & 2) != 0 || (param_2 < 0x80000000)))))))) {
    return false;
  }
  return true;
}




/* Library Function - Single Match
    bool __cdecl __crt_strtox::is_overflow_condition<unsigned __int64>(unsigned int,unsigned
   __int64)
   
   Library: Visual Studio 2015 Release */

bool __cdecl __crt_strtox::is_overflow_condition<unsigned___int64>(uint param_1,__uint64 param_2)

{
  if (((param_1 & 4) == 0) &&
     (((param_1 & 1) == 0 ||
      ((((param_1 & 2) == 0 || (param_2 < 0x8000000000000001)) &&
       (((param_1 & 2) != 0 || (param_2 < 0x8000000000000000)))))))) {
    return false;
  }
  return true;
}




/* Library Function - Multiple Matches With Same Base Name
    class __crt_strtox::c_string_character_source<char> __cdecl
   __crt_strtox::make_c_string_character_source<char,char * __ptr64 * __ptr64>(char const * __ptr64
   const,char * __ptr64 * __ptr64 const)
    class __crt_strtox::c_string_character_source<wchar_t> __cdecl
   __crt_strtox::make_c_string_character_source<wchar_t,wchar_t * __ptr64 * __ptr64>(wchar_t const *
   __ptr64 const,wchar_t * __ptr64 * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

undefined8 *
make_c_string_character_source<>(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_2;
  }
  return param_1;
}




/* Library Function - Single Match
    unsigned long __cdecl __crt_strtox::parse_integer<unsigned long,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2015 Release */

ulong __cdecl
__crt_strtox::parse_integer<unsigned_long,class___crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,longlong *param_2,uint param_3,char param_4)

{
  short sVar1;
  wint_t *pwVar2;
  wint_t *pwVar3;
  short *psVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  uint uVar8;
  ushort _C;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong local_50 [3];
  char local_38;
  
  uVar12 = 0;
  uVar13 = (ulonglong)param_3;
  if ((*param_2 == 0) || ((param_3 != 0 && (0x22 < param_3 - 2)))) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_140013a44();
    goto LAB_140015b8d;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_50,param_1);
  pwVar2 = (wint_t *)*param_2;
  _C = *pwVar2;
  pwVar3 = pwVar2;
  while( true ) {
    *param_2 = (longlong)(pwVar3 + 1);
    iVar6 = iswctype(_C,8);
    if (iVar6 == 0) break;
    pwVar3 = (wint_t *)*param_2;
    _C = *pwVar3;
  }
  uVar9 = (uint)(param_4 != '\0');
  if (_C == 0x2d) {
    uVar9 = param_4 != '\0' | 2;
LAB_140015c10:
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  else if (_C == 0x2b) goto LAB_140015c10;
  iVar6 = 0x660;
  if ((param_3 & 0xffffffef) != 0) goto LAB_140015ee1;
  if (_C < 0x30) goto LAB_140015e31;
  if (_C < 0x3a) {
    iVar6 = _C - 0x30;
LAB_140015e2c:
    if (iVar6 == -1) goto LAB_140015e31;
  }
  else {
    if (0xff0f < _C) {
      if (_C < 0xff1a) {
        iVar6 = _C - 0xff10;
      }
      else {
        iVar6 = -1;
      }
      goto LAB_140015e2c;
    }
    if (0x65f < _C) {
      if (_C < 0x66a) {
LAB_140015c95:
        iVar6 = (uint)_C - iVar6;
        goto LAB_140015e2c;
      }
      if (0x6ef < _C) {
        if (_C < 0x6fa) {
          iVar6 = _C - 0x6f0;
          goto LAB_140015e2c;
        }
        if (0x965 < _C) {
          if (_C < 0x970) {
            iVar6 = _C - 0x966;
            goto LAB_140015e2c;
          }
          if (0x9e5 < _C) {
            if (_C < 0x9f0) {
              iVar6 = _C - 0x9e6;
              goto LAB_140015e2c;
            }
            if (0xa65 < _C) {
              if (_C < 0xa70) {
                iVar6 = _C - 0xa66;
                goto LAB_140015e2c;
              }
              iVar6 = 0xae6;
              if ((0xae5 < _C) &&
                 ((_C < 0xaf0 ||
                  ((iVar6 = 0xb66, 0xb65 < _C &&
                   ((_C < 0xb70 ||
                    ((iVar6 = 0xc66, 0xc65 < _C &&
                     ((_C < 0xc70 ||
                      ((iVar6 = 0xce6, 0xce5 < _C &&
                       ((_C < 0xcf0 ||
                        ((iVar6 = 0xd66, 0xd65 < _C &&
                         ((_C < 0xd70 ||
                          ((iVar6 = 0xe50, 0xe4f < _C &&
                           ((_C < 0xe5a ||
                            ((iVar6 = 0xed0, 0xecf < _C &&
                             ((_C < 0xeda ||
                              ((iVar6 = 0xf20, 0xf1f < _C &&
                               ((_C < 0xf2a ||
                                ((iVar6 = 0x1040, 0x103f < _C &&
                                 ((_C < 0x104a ||
                                  ((iVar6 = 0x17e0, 0x17df < _C &&
                                   ((_C < 0x17ea || ((iVar6 = 0x1810, 0x180f < _C && (_C < 0x181a)))
                                    ))))))))))))))))))))))))))))))))))))))) goto LAB_140015c95;
            }
          }
        }
      }
    }
LAB_140015e31:
    if (((ushort)(_C - 0x41) < 0x1a) || ((ushort)(_C - 0x61) < 0x1a)) {
      uVar8 = (uint)_C;
      if ((ushort)(_C - 0x61) < 0x1a) {
        uVar8 = _C - 0x20;
      }
      iVar6 = uVar8 - 0x37;
    }
    else {
      iVar6 = -1;
    }
  }
  if (iVar6 == 0) {
    psVar4 = (short *)*param_2;
    sVar1 = *psVar4;
    *param_2 = (longlong)(psVar4 + 1);
    if ((sVar1 - 0x58U & 0xffdf) == 0) {
      _C = psVar4[1];
      uVar13 = (ulonglong)param_3;
      if (param_3 == 0) {
        uVar13 = 0x10;
      }
      *param_2 = (longlong)(psVar4 + 2);
    }
    else {
      uVar13 = (ulonglong)param_3;
      if (param_3 == 0) {
        uVar13 = 8;
      }
      *param_2 = (longlong)psVar4;
      if ((sVar1 != 0) && (*psVar4 != sVar1)) {
        puVar7 = __doserrno();
        *puVar7 = 0x16;
        FUN_140013a44();
      }
    }
  }
  else if (param_3 == 0) {
    uVar13 = 10;
  }
LAB_140015ee1:
  do {
    if (_C < 0x30) goto LAB_1400160b0;
    if (_C < 0x3a) {
      uVar8 = _C - 0x30;
LAB_1400160ab:
      if (uVar8 == 0xffffffff) goto LAB_1400160b0;
    }
    else {
      if (0xff0f < _C) {
        if (_C < 0xff1a) {
          uVar8 = _C - 0xff10;
        }
        else {
          uVar8 = 0xffffffff;
        }
        goto LAB_1400160ab;
      }
      if (0x65f < _C) {
        if (_C < 0x66a) {
          uVar8 = _C - 0x660;
        }
        else {
          if (_C < 0x6f0) goto LAB_1400160b0;
          if (_C < 0x6fa) {
            uVar8 = _C - 0x6f0;
          }
          else {
            iVar6 = 0x966;
            if ((_C < 0x966) ||
               ((0x96f < _C &&
                ((iVar6 = 0x9e6, _C < 0x9e6 ||
                 ((0x9ef < _C &&
                  ((iVar6 = 0xa66, _C < 0xa66 ||
                   ((0xa6f < _C &&
                    ((iVar6 = 0xae6, _C < 0xae6 ||
                     ((0xaef < _C &&
                      ((iVar6 = 0xb66, _C < 0xb66 ||
                       ((0xb6f < _C &&
                        ((iVar6 = 0xc66, _C < 0xc66 ||
                         ((0xc6f < _C &&
                          ((iVar6 = 0xce6, _C < 0xce6 ||
                           ((0xcef < _C &&
                            ((iVar6 = 0xd66, _C < 0xd66 ||
                             ((0xd6f < _C &&
                              ((iVar6 = 0xe50, _C < 0xe50 ||
                               ((0xe59 < _C &&
                                ((iVar6 = 0xed0, _C < 0xed0 ||
                                 ((0xed9 < _C &&
                                  ((iVar6 = 0xf20, _C < 0xf20 ||
                                   ((0xf29 < _C &&
                                    ((iVar6 = 0x1040, _C < 0x1040 ||
                                     ((0x1049 < _C &&
                                      ((iVar6 = 0x17e0, _C < 0x17e0 ||
                                       ((0x17e9 < _C &&
                                        ((iVar6 = 0x1810, _C < 0x1810 || (0x1819 < _C)))))))))))))))
                                  ))))))))))))))))))))))))))))))))))))))) goto LAB_1400160b0;
            uVar8 = (uint)_C - iVar6;
          }
        }
        goto LAB_1400160ab;
      }
LAB_1400160b0:
      if (((ushort)(_C - 0x41) < 0x1a) || ((ushort)(_C - 0x61) < 0x1a)) {
        uVar8 = (uint)_C;
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar8 = _C - 0x20;
        }
        uVar8 = uVar8 - 0x37;
      }
      else {
        uVar8 = 0xffffffff;
      }
    }
    if ((uVar8 == 0xffffffff) || ((uint)uVar13 <= uVar8)) break;
    uVar10 = uVar9 | 8;
    uVar11 = (uint)(0xffffffff / uVar13);
    if ((uVar12 < uVar11) || ((uVar12 == uVar11 && (uVar8 <= (uint)(0xffffffff % uVar13))))) {
      uVar12 = uVar12 * (uint)uVar13 + uVar8;
    }
    else {
      uVar10 = uVar9 | 0xc;
    }
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
    uVar9 = uVar10;
  } while( true );
  *param_2 = *param_2 + -2;
  if ((_C != 0) && (*(ushort *)*param_2 != _C)) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_140013a44();
  }
  if ((uVar9 & 8) != 0) {
    bVar5 = is_overflow_condition<unsigned_long>(uVar9,uVar12);
    if (bVar5) {
      puVar7 = __doserrno();
      *puVar7 = 0x22;
      if ((uVar9 & 1) != 0) {
        if ((uVar9 & 2) != 0) {
          if (local_38 != '\0') {
            *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
          }
          if ((longlong *)param_2[1] != (longlong *)0x0) {
            *(longlong *)param_2[1] = *param_2;
          }
          return 0x80000000;
        }
        if (local_38 != '\0') {
          *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
        }
        if ((longlong *)param_2[1] != (longlong *)0x0) {
          *(longlong *)param_2[1] = *param_2;
        }
        return 0x7fffffff;
      }
      uVar12 = 0xffffffff;
    }
    else if ((uVar9 & 2) != 0) {
      uVar12 = -uVar12;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
    }
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      return uVar12;
    }
    *(longlong *)param_2[1] = *param_2;
    return uVar12;
  }
  *param_2 = (longlong)pwVar2;
  if (local_38 != '\0') {
    *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
  }
LAB_140015b8d:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return 0;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl
__crt_strtox::
parse_integer<unsigned___int64,class___crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,longlong *param_2,uint param_3,char param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  ulong *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_78;
  longlong local_50 [3];
  char local_38;
  wint_t *local_30;
  
  uVar15 = 0;
  if ((*param_2 == 0) || ((param_3 != 0 && (0x22 < param_3 - 2)))) {
    puVar8 = __doserrno();
    *puVar8 = 0x16;
    FUN_140013a44();
    goto LAB_140016264;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_50,param_1);
  pwVar2 = (wint_t *)*param_2;
  uVar10 = *pwVar2;
  local_30 = pwVar2;
  while( true ) {
    *param_2 = (longlong)(pwVar2 + 1);
    iVar7 = iswctype(uVar10,8);
    if (iVar7 == 0) break;
    pwVar2 = (wint_t *)*param_2;
    uVar10 = *pwVar2;
  }
  uVar12 = (uint)(param_4 != '\0');
  if (uVar10 == 0x2d) {
    uVar12 = param_4 != '\0' | 2;
LAB_1400162ea:
    uVar10 = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  else if (uVar10 == 0x2b) goto LAB_1400162ea;
  uVar11 = (uint)uVar10;
  local_78 = 0xb66;
  if ((param_3 & 0xffffffef) != 0) goto LAB_140016640;
  if (uVar10 < 0x30) goto LAB_1400165b4;
  if (uVar10 < 0x3a) {
    iVar7 = uVar11 - 0x30;
LAB_1400165af:
    if (iVar7 == -1) goto LAB_1400165b4;
  }
  else {
    if (0xff0f < uVar10) {
      if (uVar10 < 0xff1a) {
        iVar7 = uVar11 - 0xff10;
      }
      else {
        iVar7 = -1;
      }
      goto LAB_1400165af;
    }
    if (0x65f < uVar10) {
      iVar7 = 0x660;
      if (uVar10 < 0x66a) {
LAB_14001641c:
        iVar7 = uVar11 - iVar7;
        goto LAB_1400165af;
      }
      if (0x6ef < uVar10) {
        if (uVar10 < 0x6fa) {
          iVar7 = uVar11 - 0x6f0;
          goto LAB_1400165af;
        }
        if (0x965 < uVar10) {
          if (uVar10 < 0x970) {
            iVar7 = uVar11 - 0x966;
            goto LAB_1400165af;
          }
          if (0x9e5 < uVar10) {
            if (uVar10 < 0x9f0) {
              iVar7 = uVar11 - 0x9e6;
              goto LAB_1400165af;
            }
            if (0xa65 < uVar10) {
              if (uVar10 < 0xa70) {
                iVar7 = uVar11 - 0xa66;
                goto LAB_1400165af;
              }
              if (0xae5 < uVar10) {
                if (uVar10 < 0xaf0) {
                  iVar7 = uVar11 - 0xae6;
                  goto LAB_1400165af;
                }
                if ((0xb65 < uVar10) &&
                   ((iVar7 = local_78, uVar10 < 0xb70 ||
                    ((iVar7 = 0xc66, 0xc65 < uVar10 &&
                     ((uVar10 < 0xc70 ||
                      ((iVar7 = 0xce6, 0xce5 < uVar10 &&
                       ((uVar10 < 0xcf0 ||
                        ((iVar7 = 0xd66, 0xd65 < uVar10 &&
                         ((uVar10 < 0xd70 ||
                          ((iVar7 = 0xe50, 0xe4f < uVar10 &&
                           ((uVar10 < 0xe5a ||
                            ((iVar7 = 0xed0, 0xecf < uVar10 &&
                             ((uVar10 < 0xeda ||
                              ((iVar7 = 0xf20, 0xf1f < uVar10 &&
                               ((uVar10 < 0xf2a ||
                                ((iVar7 = 0x1040, 0x103f < uVar10 &&
                                 ((uVar10 < 0x104a ||
                                  ((iVar7 = 0x17e0, 0x17df < uVar10 &&
                                   ((uVar10 < 0x17ea ||
                                    ((iVar7 = 0x1810, 0x180f < uVar10 && (uVar10 < 0x181a)))))))))))
                                ))))))))))))))))))))))))))) goto LAB_14001641c;
              }
            }
          }
        }
      }
    }
LAB_1400165b4:
    if (((ushort)(uVar10 - 0x41) < 0x1a) || ((ushort)(uVar10 - 0x61) < 0x1a)) {
      uVar13 = uVar11;
      if ((ushort)(uVar10 - 0x61) < 0x1a) {
        uVar13 = uVar11 - 0x20;
      }
      iVar7 = uVar13 - 0x37;
    }
    else {
      iVar7 = -1;
    }
  }
  if (iVar7 == 0) {
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) == 0) {
      uVar11 = (uint)(ushort)psVar3[1];
      if (param_3 == 0) {
        param_3 = 0x10;
      }
      *param_2 = (longlong)(psVar3 + 2);
    }
    else {
      if (param_3 == 0) {
        param_3 = 8;
      }
      *param_2 = (longlong)psVar3;
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar8 = __doserrno();
        *puVar8 = 0x16;
        FUN_140013a44();
      }
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
LAB_140016640:
  pwVar2 = local_30;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(int)param_3;
  auVar5 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
  uVar9 = SUB168(auVar5 / auVar4,0);
  do {
    uVar10 = (ushort)uVar11;
    if (uVar10 < 0x30) goto LAB_140016838;
    if (uVar10 < 0x3a) {
      uVar14 = (ulonglong)(uVar11 - 0x30);
LAB_140016832:
      if ((int)uVar14 == -1) goto LAB_140016838;
    }
    else {
      if (0xff0f < uVar10) {
        if (uVar10 < 0xff1a) {
          uVar14 = (ulonglong)(uVar11 - 0xff10);
        }
        else {
          uVar14 = 0xffffffff;
        }
        goto LAB_140016832;
      }
      if (0x65f < uVar10) {
        if (uVar10 < 0x66a) {
          uVar14 = (ulonglong)(uVar11 - 0x660);
        }
        else {
          if (uVar10 < 0x6f0) goto LAB_140016838;
          if (uVar10 < 0x6fa) {
            uVar14 = (ulonglong)(uVar11 - 0x6f0);
          }
          else {
            if ((uVar10 < 0x966) ||
               ((iVar7 = 0x966, 0x96f < uVar10 &&
                ((uVar10 < 0x9e6 ||
                 ((iVar7 = 0x9e6, 0x9ef < uVar10 &&
                  ((uVar10 < 0xa66 ||
                   ((iVar7 = 0xa66, 0xa6f < uVar10 &&
                    ((uVar10 < 0xae6 ||
                     ((iVar7 = 0xae6, 0xaef < uVar10 &&
                      ((uVar10 < 0xb66 ||
                       ((iVar7 = local_78, 0xb6f < uVar10 &&
                        ((iVar7 = 0xc66, uVar10 < 0xc66 ||
                         ((0xc6f < uVar10 &&
                          ((iVar7 = 0xce6, uVar10 < 0xce6 ||
                           ((0xcef < uVar10 &&
                            ((iVar7 = 0xd66, uVar10 < 0xd66 ||
                             ((0xd6f < uVar10 &&
                              ((iVar7 = 0xe50, uVar10 < 0xe50 ||
                               ((0xe59 < uVar10 &&
                                ((iVar7 = 0xed0, uVar10 < 0xed0 ||
                                 ((0xed9 < uVar10 &&
                                  ((iVar7 = 0xf20, uVar10 < 0xf20 ||
                                   ((0xf29 < uVar10 &&
                                    ((iVar7 = 0x1040, uVar10 < 0x1040 ||
                                     ((0x1049 < uVar10 &&
                                      ((iVar7 = 0x17e0, uVar10 < 0x17e0 ||
                                       ((0x17e9 < uVar10 &&
                                        ((iVar7 = 0x1810, uVar10 < 0x1810 || (0x1819 < uVar10)))))))
                                      )))))))))))))))))))))))))))))))))))))))))))))))
            goto LAB_140016838;
            uVar14 = (ulonglong)(uVar11 - iVar7);
          }
        }
        goto LAB_140016832;
      }
LAB_140016838:
      if (((ushort)(uVar10 - 0x41) < 0x1a) || ((ushort)(uVar10 - 0x61) < 0x1a)) {
        if ((ushort)(uVar10 - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar14 = (ulonglong)(uVar11 - 0x37);
      }
      else {
        uVar14 = 0xffffffff;
      }
    }
    if (((uint)uVar14 == 0xffffffff) || (param_3 <= (uint)uVar14)) break;
    uVar13 = uVar12 | 8;
    if ((uVar15 < uVar9) || ((uVar15 == uVar9 && (uVar14 <= SUB168(auVar5 % auVar4,0))))) {
      uVar15 = uVar14 + (longlong)(int)param_3 * uVar15;
    }
    else {
      uVar13 = uVar12 | 0xc;
    }
    uVar11 = (uint)*(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
    uVar12 = uVar13;
  } while( true );
  *param_2 = *param_2 + -2;
  if ((uVar10 != 0) && (*(ushort *)*param_2 != uVar10)) {
    puVar8 = __doserrno();
    *puVar8 = 0x16;
    FUN_140013a44();
  }
  if ((uVar12 & 8) != 0) {
    bVar6 = is_overflow_condition<unsigned___int64>(uVar12,uVar15);
    if (bVar6) {
      puVar8 = __doserrno();
      *puVar8 = 0x22;
      if ((uVar12 & 1) != 0) {
        if ((uVar12 & 2) != 0) {
          if (local_38 != '\0') {
            *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
          }
          if ((longlong *)param_2[1] != (longlong *)0x0) {
            *(longlong *)param_2[1] = *param_2;
          }
          return 0x8000000000000000;
        }
        if (local_38 != '\0') {
          *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
        }
        if ((longlong *)param_2[1] != (longlong *)0x0) {
          *(longlong *)param_2[1] = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      uVar15 = 0xffffffffffffffff;
    }
    else if ((uVar12 & 2) != 0) {
      uVar15 = -uVar15;
    }
    if (local_38 != '\0') {
      *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
    }
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      return uVar15;
    }
    *(longlong *)param_2[1] = *param_2;
    return uVar15;
  }
  *param_2 = (longlong)pwVar2;
  if (local_38 != '\0') {
    *(uint *)(local_50[0] + 0x3a8) = *(uint *)(local_50[0] + 0x3a8) & 0xfffffffd;
  }
LAB_140016264:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return 0;
}




/* Library Function - Multiple Matches With Different Base Names
    _wtoi64
    _wtoll
   
   Library: Visual Studio 2015 Release */

longlong __cdecl FID_conflict__wtoi64(wchar_t *_Str)

{
  undefined8 *puVar1;
  __uint64 _Var2;
  undefined8 local_18 [3];
  
  puVar1 = make_c_string_character_source<>(local_18,_Str,(undefined8 *)0x0);
  _Var2 = __crt_strtox::
          parse_integer<unsigned___int64,class___crt_strtox::c_string_character_source<wchar_t>_>
                    (0,puVar1,10,1);
  return _Var2;
}




/* Library Function - Multiple Matches With Different Base Names
    _wtoi
    _wtol
   
   Library: Visual Studio 2015 Release */

int __cdecl FID_conflict__wtoi(wchar_t *_Str)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_18 [3];
  
  puVar2 = make_c_string_character_source<>(local_18,_Str,(undefined8 *)0x0);
  uVar1 = __crt_strtox::
          parse_integer<unsigned_long,class___crt_strtox::c_string_character_source<wchar_t>_>
                    (0,puVar2,10,1);
  return uVar1;
}




int FUN_140016a34(wint_t *param_1,wint_t *param_2)

{
  int iVar1;
  ulong *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if (DAT_140033464 == 0) {
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
    FUN_140013a44();
    return 0x7fffffff;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  if ((param_1 == (wint_t *)0x0) || (param_2 == (wint_t *)0x0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_140013a44();
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
    isalnum
   
   Library: Visual Studio 2015 Release */

int __cdecl isalnum(int _C)

{
  uint uVar1;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if (DAT_140033464 == 0) {
    uVar1 = *(ushort *)(PTR_DAT_140032170 + (longlong)_C * 2) & 0x107;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    if ((int)(local_20.locinfo)->lc_collate_cp < 2) {
      uVar1 = *(ushort *)(*(longlong *)local_20.locinfo + (longlong)_C * 2) & 0x107;
    }
    else {
      uVar1 = _isctype_l(_C,0x107,&local_20);
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    isdigit
   
   Library: Visual Studio 2015 Release */

int __cdecl isdigit(int _C)

{
  uint uVar1;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if (DAT_140033464 == 0) {
    uVar1 = *(ushort *)(PTR_DAT_140032170 + (longlong)_C * 2) & 4;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    if ((int)(local_20.locinfo)->lc_collate_cp < 2) {
      uVar1 = *(ushort *)(*(longlong *)local_20.locinfo + (longlong)_C * 2) & 4;
    }
    else {
      uVar1 = _isctype_l(_C,4,&local_20);
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2015 Release */

void __acrt_uninitialize_stdio(void)

{
  longlong lVar1;
  
  FUN_14001acd8();
  _fcloseall();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_140033200));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_140033200) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  _free_base(DAT_140033200);
  DAT_140033200 = (LPVOID)0x0;
  return;
}




void FUN_140016e18(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140016e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(param_1 + 0x30);
  return;
}




void FUN_140016e24(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140016e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 0x30);
  return;
}




/* Library Function - Single Match
    int __cdecl common_timespec_get<struct _timespec64>(struct _timespec64 * __ptr64 const,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_timespec_get<struct__timespec64>(_timespec64 *param_1,int param_2)

{
  ulong *puVar1;
  longlong lVar2;
  longlong lVar3;
  _FILETIME local_res8 [4];
  
  if (param_1 == (_timespec64 *)0x0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_140013a44();
  }
  else if (param_2 == 1) {
    local_res8[0].dwLowDateTime = 0;
    local_res8[0].dwHighDateTime = 0;
    __acrt_GetSystemTimePreciseAsFileTime(local_res8);
    lVar3 = (longlong)local_res8[0] + -0x19db1ded53e8000;
    lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar3),8) + lVar3;
    lVar2 = (lVar2 >> 0x17) - (lVar2 >> 0x3f);
    if (lVar2 < 0x793407000) {
      *(longlong *)param_1 = lVar2;
      *(int *)(param_1 + 8) = ((int)lVar3 + (int)lVar2 * -10000000) * 100;
      return 1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    _time64
   
   Library: Visual Studio 2015 Release */

__time64_t __cdecl _time64(__time64_t *_Time)

{
  int iVar1;
  __time64_t local_18 [2];
  
  local_18[0] = 0;
  iVar1 = common_timespec_get<struct__timespec64>((_timespec64 *)local_18,1);
  if (iVar1 != 1) {
    local_18[0] = -1;
  }
  if (_Time != (__time64_t *)0x0) {
    *_Time = local_18[0];
  }
  return local_18[0];
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140016f08(undefined8 param_1)

{
  _DAT_140033208 = param_1;
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
  bVar1 = (byte)DAT_140032008 & 0x3f;
  uVar2 = DAT_140032008 ^ _DAT_140033208;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
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




undefined4 FUN_14001711c(void)

{
  return DAT_140033210;
}




void FUN_140017124(undefined4 param_1)

{
  DAT_140033210 = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14001712c(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_140032008 & 0x3f;
  return (DAT_140032008 ^ _DAT_140033218) >> bVar1 != 0 ||
         (DAT_140032008 ^ _DAT_140033218) << 0x40 - bVar1 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001714c(undefined8 param_1)

{
  _DAT_140033218 = param_1;
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
  
  bVar2 = (byte)DAT_140032008 & 0x3f;
  pcVar3 = (code *)((DAT_140032008 ^ _DAT_140033218) >> bVar2 |
                   (DAT_140032008 ^ _DAT_140033218) << 0x40 - bVar2);
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

void FUN_14001719c(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
  _DAT_140033218 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_140032008;
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
      if (wVar4 == L'\0') goto LAB_140017259;
    }
    param_1 = param_1 + 1;
  } while ((bVar1) || ((wVar4 != L' ' && (wVar4 != L'\t'))));
  if (param_3 != (wchar_t *)0x0) {
    param_3[-1] = L'\0';
  }
LAB_140017259:
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
    FUN_140013a44();
    return 0x16;
  }
  GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_140033220,0x104);
  iVar7 = 0;
  _DAT_140033cd8 = &DAT_140033220;
  if ((DAT_140033cd0 == (wchar_t *)0x0) || (pwVar6 = DAT_140033cd0, *DAT_140033cd0 == L'\0')) {
    pwVar6 = (wchar_t *)&DAT_140033220;
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
      _DAT_140033cb4 = 0;
      pwVar6 = *local_res10;
      while (pwVar6 != (wchar_t *)0x0) {
        local_res10 = local_res10 + 1;
        _DAT_140033cb4 = _DAT_140033cb4 + 1;
        pwVar6 = *local_res10;
      }
      local_res10 = (wchar_t **)0x0;
      DAT_140033cc0 = ppwVar1;
      _free_base((LPVOID)0x0);
      local_res10 = (wchar_t **)0x0;
      goto LAB_140017519;
    }
    _DAT_140033cb4 = (int)local_res18 + -1;
    DAT_140033cc0 = ppwVar5;
  }
  ppwVar5 = (wchar_t **)0x0;
LAB_140017519:
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
  if (DAT_140033438 == (wchar_t **)0x0) {
    pwVar3 = (wchar_t *)__dcrt_get_wide_environment_from_os();
    if (pwVar3 == (wchar_t *)0x0) {
      iVar2 = -1;
    }
    else {
      ppwVar4 = create_environment<wchar_t>(pwVar3);
      ppwVar1 = ppwVar4;
      if (ppwVar4 == (wchar_t **)0x0) {
        iVar2 = -1;
        ppwVar4 = DAT_140033438;
        ppwVar1 = DAT_140033440;
      }
      DAT_140033440 = ppwVar1;
      DAT_140033438 = ppwVar4;
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
  if ((wchar_t **)*param_1 != DAT_140033448) {
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
  if ((wchar_t **)*param_1 != DAT_140033440) {
    free_environment<wchar_t>((wchar_t **)*param_1);
  }
  return;
}




/* Library Function - Single Match
    __dcrt_uninitialize_environments_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __dcrt_uninitialize_environments_nolock(void)

{
  uninitialize_environment_internal<>((undefined8 *)&DAT_140033430);
  uninitialize_environment_internal<>(&DAT_140033438);
  free_environment<wchar_t>(DAT_140033448);
  free_environment<wchar_t>(DAT_140033440);
  return;
}




/* Library Function - Single Match
    _get_wide_winmain_command_line
   
   Library: Visual Studio 2015 Release */

ushort * _get_wide_winmain_command_line(void)

{
  bool bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)&DAT_140033450;
  if (DAT_140033cd0 != (ushort *)0x0) {
    puVar2 = DAT_140033cd0;
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




bool FUN_140017870(int param_1)

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
  if (DAT_140033460 != '\0') goto LAB_1400179b6;
  LOCK();
  DAT_140033454 = 1;
  UNLOCK();
  if (param_2 == 0) {
    bVar3 = (byte)DAT_140032008 & 0x3f;
    bVar2 = 0x40 - bVar3 & 0x3f;
    if (DAT_140033458 != (((ulonglong)(0 >> bVar2) | 0L << 0x40 - bVar2) ^ DAT_140032008)) {
      uVar7 = DAT_140032008 ^ DAT_140033458;
      _guard_check_icall();
      (*(code *)(uVar7 >> bVar3 | uVar7 << 0x40 - bVar3))(0,0,0);
    }
    puVar6 = &DAT_140033470;
LAB_14001796b:
    _execute_onexit_table(puVar6);
  }
  else if (param_2 == 1) {
    puVar6 = &DAT_140033488;
    goto LAB_14001796b;
  }
  if (param_2 == 0) {
    _initterm((undefined8 *)&DAT_1400233b0,(undefined8 *)&DAT_1400233d0);
  }
  _initterm((undefined8 *)&DAT_1400233d8,(undefined8 *)&DAT_1400233e0);
  if (param_3 == 0) {
    DAT_140033460 = '\x01';
  }
LAB_1400179b6:
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




void FUN_140017aa0(undefined8 param_1)

{
  DAT_140033458 = param_1;
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




void FUN_140017ac8(int param_1)

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
  
  bVar3 = 0x40 - ((byte)DAT_140032008 & 0x3f);
  bVar2 = bVar3 & 0x3f;
  if (DAT_140033458 == (((ulonglong)(0 >> bVar2) | 0L << 0x40 - bVar2) ^ DAT_140032008)) {
    bVar3 = bVar3 & 0x3f;
    DAT_140033458 = (param_1 >> bVar3 | param_1 << 0x40 - bVar3) ^ DAT_140032008;
    return;
  }
  FUN_140018250();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_140017b18(int param_1)

{
  common_exit(param_1,0,0);
  return;
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
    DAT_140033ce0 = _Mode;
  }
  else {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_140013a44();
    eVar1 = 0x16;
  }
  return eVar1;
}




undefined4 FUN_140017b64(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140033464;
  LOCK();
  DAT_140033464 = 1;
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
    DAT_1400328c0 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        puVar3 = __doserrno();
        *puVar3 = 0x16;
        FUN_140013a44();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(p_Var2 + 0x3a8) = uVar4;
  }
  return 2 - (uint)((uVar1 & 2) != 0);
}




undefined4 FUN_140017c24(void)

{
  return DAT_140033468;
}




undefined * FUN_140017c58(void)

{
  return &DAT_14003346c;
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
    uVar9 = (uint)DAT_140032008 & 0x3f;
    sVar3 = (sbyte)uVar9;
    puVar8 = (ulonglong *)
             ((DAT_140032008 ^ *puVar6) >> sVar3 | (DAT_140032008 ^ *puVar6) << 0x40 - sVar3);
    puVar6 = (ulonglong *)
             ((DAT_140032008 ^ puVar6[1]) >> sVar3 | (DAT_140032008 ^ puVar6[1]) << 0x40 - sVar3);
    puVar11 = puVar8;
    puVar12 = puVar6;
    if ((longlong)puVar8 - 1U < 0xfffffffffffffffe) {
      while( true ) {
        bVar4 = -(char)uVar9 & 0x3f;
        uVar1 = (0UL >> bVar4 | 0L << 0x40 - bVar4) ^ DAT_140032008;
        do {
          puVar6 = puVar6 + -1;
          if (puVar6 < puVar8) goto LAB_140017d5c;
        } while (*puVar6 == uVar1);
        if (puVar6 < puVar8) break;
        bVar4 = (byte)DAT_140032008 & 0x3f;
        uVar7 = DAT_140032008 ^ *puVar6;
        *puVar6 = uVar1;
        _guard_check_icall();
        (*(code *)(uVar7 >> bVar4 | uVar7 << 0x40 - bVar4))();
        uVar9 = (uint)DAT_140032008 & 0x3f;
        uVar1 = DAT_140032008 ^ *(ulonglong *)**(longlong **)param_2;
        sVar3 = (sbyte)uVar9;
        puVar10 = (ulonglong *)(uVar1 >> sVar3 | uVar1 << 0x40 - sVar3);
        uVar1 = ((ulonglong *)**(longlong **)param_2)[1] ^ DAT_140032008;
        puVar2 = (ulonglong *)(uVar1 >> sVar3 | uVar1 << 0x40 - sVar3);
        if ((puVar10 != puVar11) || (puVar2 != puVar12)) {
          puVar6 = puVar2;
          puVar8 = puVar10;
          puVar11 = puVar10;
          puVar12 = puVar2;
        }
      }
LAB_140017d5c:
      if (puVar8 != (ulonglong *)0xffffffffffffffff) {
        _free_base(puVar8);
      }
      bVar4 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
      uVar1 = (0UL >> bVar4 | 0L << 0x40 - bVar4) ^ DAT_140032008;
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
LAB_140017e71:
    iVar1 = -1;
  }
  else {
    bVar3 = (byte)DAT_140032008 & 0x3f;
    pvVar7 = (LPVOID)((*puVar5 ^ DAT_140032008) >> bVar3 | (*puVar5 ^ DAT_140032008) << 0x40 - bVar3
                     );
    puVar11 = (ulonglong *)
              ((puVar5[1] ^ DAT_140032008) >> bVar3 | (puVar5[1] ^ DAT_140032008) << 0x40 - bVar3);
    puVar5 = (ulonglong *)
             ((puVar5[2] ^ DAT_140032008) >> bVar3 | (puVar5[2] ^ DAT_140032008) << 0x40 - bVar3);
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
LAB_140017ef8:
        uVar10 = uVar6 + 4;
        pvVar2 = _recalloc_base(pvVar7,uVar10,8);
        _free_base((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_140017e71;
      }
      else {
        pvVar2 = _recalloc_base(pvVar7,uVar10,8);
        _free_base((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_140017ef8;
      }
      pvVar7 = pvVar2;
      puVar11 = (ulonglong *)((longlong)pvVar7 + uVar6 * 8);
      puVar5 = (ulonglong *)((longlong)pvVar7 + uVar10 * 8);
      bVar3 = -((byte)DAT_140032008 & 0x3f) & 0x3f;
      uVar6 = (0UL >> bVar3 | 0L << 0x40 - bVar3) ^ DAT_140032008;
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
    bVar3 = -((byte)DAT_140032008 & 0x3f) & 0x3f;
    *puVar11 = (**(ulonglong **)(this + 8) >> bVar3 | **(ulonglong **)(this + 8) << 0x40 - bVar3) ^
               DAT_140032008;
    bVar3 = -((byte)DAT_140032008 & 0x3f) & 0x3f;
    *(ulonglong *)**(undefined8 **)this =
         ((ulonglong)pvVar7 >> bVar3 | (longlong)pvVar7 << 0x40 - bVar3) ^ DAT_140032008;
    bVar3 = -((byte)DAT_140032008 & 0x3f) & 0x3f;
    *(ulonglong *)(**(longlong **)this + 8) =
         ((ulonglong)(puVar11 + 1) >> bVar3 | (longlong)(puVar11 + 1) << 0x40 - bVar3) ^
         DAT_140032008;
    bVar3 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
    iVar1 = 0;
    *(ulonglong *)(**(longlong **)this + 0x10) =
         ((ulonglong)puVar5 >> bVar3 | (longlong)puVar5 << 0x40 - bVar3) ^ DAT_140032008;
  }
  return iVar1;
}




void FUN_140018020(undefined8 param_1)

{
  _register_onexit_function(&DAT_140033470,param_1);
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
    bVar1 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
    uVar2 = (0UL >> bVar1 | 0L << 0x40 - bVar1) ^ DAT_140032008;
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




undefined8 FUN_140018108(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((ulonglong *)&DAT_140033470);
  uVar1 = _initialize_onexit_table((ulonglong *)&DAT_140033488);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




undefined8 FUN_140018198(void)

{
  int iVar1;
  undefined8 uVar2;
  
  LOCK();
  iVar1 = *(int *)PTR_DAT_140032508;
  *(int *)PTR_DAT_140032508 = *(int *)PTR_DAT_140032508 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined4 *)PTR_DAT_140032508 != &DAT_1400322e0)) {
    _free_base(PTR_DAT_140032508);
    PTR_DAT_140032508 = (undefined *)&DAT_1400322e0;
  }
  _free_base(DAT_1400334b0);
  DAT_1400334b0 = (LPVOID)0x0;
  _free_base(DAT_1400334b8);
  DAT_1400334b8 = (LPVOID)0x0;
  _free_base(DAT_140033cb8);
  DAT_140033cb8 = (LPVOID)0x0;
  uVar2 = _free_base(DAT_140033cc0);
  DAT_140033cc0 = (LPVOID)0x0;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_140018228(void)

{
  __acrt_execute_initializers(&PTR_LAB_140024320,(undefined8 *)&DAT_140024410);
  return;
}




void FUN_14001823c(void)

{
  __acrt_execute_uninitializers(&PTR_LAB_140024320,(undefined8 *)&DAT_140024410);
  return;
}




void FUN_140018250(void)

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
      goto LAB_14001829b;
    }
    *_Dst = '\0';
  }
  puVar2 = __doserrno();
  uVar3 = 0x16;
LAB_14001829b:
  *puVar2 = uVar3;
  FUN_140013a44();
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
  if ((DAT_140032148 & 2) != 0) {
    BVar3 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140018322;
    __acrt_call_reportfault(3,0x40000015,1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x14001832c;
  FUN_140017ac8(3);
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
    if ((iVar1 == 1) && (piVar2 != &DAT_1400322e0)) {
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
  local_28 = &DAT_1400334a0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_140024220;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined4 **)(param_1 + 0x88) = &DAT_1400322e0;
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
  if (*(undefined **)param_1 != &DAT_140024220) {
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
    if (((ppuVar1 != DAT_1400334a0) && (ppuVar1 != &PTR_DAT_140032170)) &&
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
  if (DAT_140032150 == 0xffffffff) {
LAB_1400187a2:
    p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      iVar1 = __acrt_FlsSetValue(DAT_140032150,p_Var2);
      if (iVar1 != 0) {
        construct_ptd_array(p_Var2);
        _free_base((LPVOID)0x0);
        goto LAB_1400187e3;
      }
    }
    _free_base(p_Var2);
  }
  else {
    p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_140032150);
    if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_1400187a2;
LAB_1400187e3:
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
  if ((DAT_140032150 == 0xffffffff) ||
     (p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_140032150), p_Var2 == (__acrt_ptd *)0x0)) {
    p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      iVar1 = __acrt_FlsSetValue(DAT_140032150,p_Var2);
      if (iVar1 != 0) {
        construct_ptd_array(p_Var2);
        _free_base((LPVOID)0x0);
        goto LAB_14001887e;
      }
    }
    _free_base(p_Var2);
  }
  else {
LAB_14001887e:
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
  if (DAT_140032150 != 0xffffffff) {
    __acrt_FlsFree(DAT_140032150);
    DAT_140032150 = 0xffffffff;
  }
  return 1;
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
  piVar4 = &DAT_140024410;
  do {
    if (param_1 == *piVar4) {
      return (&DAT_140024414)[uVar3 * 2];
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
    p_Var2 = (__acrt_ptd *)&DAT_140032158;
  }
  else {
    p_Var2 = p_Var2 + 0x24;
  }
  *(int *)p_Var2 = param_1;
  p_Var3 = __acrt_getptd_noexit();
  p_Var2 = (__acrt_ptd *)&DAT_140032154;
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
    p_Var1 = (__acrt_ptd *)&DAT_140032158;
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
    p_Var1 = (__acrt_ptd *)&DAT_140032154;
  }
  else {
    p_Var1 = p_Var1 + 0x20;
  }
  return (ulong *)p_Var1;
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
    _isctype_l
   
   Library: Visual Studio 2015 Release */

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  undefined1 auStackY_88 [32];
  CHAR local_48;
  CHAR local_47;
  undefined1 local_46;
  longlong local_40;
  localeinfo_struct local_38;
  char local_28;
  WORD local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (0x100 < _C + 1U) {
    iVar1 = _isleadbyte_l(_C >> 8 & 0xff,&local_38);
    iVar2 = 1;
    if (iVar1 == 0) {
      local_47 = '\0';
      local_48 = (CHAR)_C;
    }
    else {
      iVar2 = 2;
      local_46 = 0;
      local_48 = (CHAR)((uint)_C >> 8);
      local_47 = (CHAR)_C;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    iVar1 = __acrt_GetStringTypeA
                      ((__crt_locale_pointers *)&local_38,1,&local_48,iVar2,local_20,
                       (local_38.locinfo)->lc_time_cp,1);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_140018b3e;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_140018b3e:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_88);
  return extraout_EAX;
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
  local_30 = DAT_140032008 ^ (ulonglong)&local_38;
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
  if (iVar3 == 0) goto LAB_140018e77;
  uVar6 = (longlong)iVar3 * 2;
  if ((uVar6 + 0x10 & -(ulonglong)(uVar6 < uVar6 + 0x10)) == 0) {
    pWVar7 = (LPCWSTR)0x0;
LAB_140018c8f:
    if (pWVar7 != (LPCWSTR)0x0) {
      *(int *)(puVar11 + 0x28) = iVar3;
      *(LPCWSTR *)(puVar11 + 0x20) = pWVar7;
      *(undefined8 *)(puVar11 + -8) = 0x140018cb6;
      iVar4 = MultiByteToWideChar(param_8,1,param_4,iVar4,*(LPWSTR *)(puVar11 + 0x20),
                                  *(int *)(puVar11 + 0x28));
      if (iVar4 != 0) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        pwVar2 = local_38;
        *(undefined4 *)(puVar11 + 0x28) = 0;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + -8) = 0x140018cf0;
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
                *(undefined8 *)(puVar11 + -8) = 0x140018da8;
                lVar1 = -(uVar6 & 0xfffffffffffffff0);
                puVar10 = puVar11 + lVar1;
                lpWideCharStr = (LPCWSTR)(puVar11 + lVar1 + 0x50);
                puVar11 = puVar11 + lVar1;
                if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_140018e5f;
                lpWideCharStr[0] = L'쳌';
                lpWideCharStr[1] = L'\0';
                puVar11 = puVar10;
              }
              else {
                *(undefined8 *)(puVar11 + -8) = 0x140018dcf;
                lpWideCharStr = (LPCWSTR)_malloc_base(-(ulonglong)(uVar6 < uVar8) & uVar8);
                if (lpWideCharStr == (LPCWSTR)0x0) goto LAB_140018de5;
                lpWideCharStr[0] = L'\xdddd';
                lpWideCharStr[1] = L'\0';
              }
              lpWideCharStr = lpWideCharStr + 8;
            }
LAB_140018de5:
            if (lpWideCharStr != (LPCWSTR)0x0) {
              *(undefined8 *)(puVar11 + 0x40) = 0;
              *(undefined8 *)(puVar11 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 0x30) = 0;
              *(int *)(puVar11 + 0x28) = iVar4;
              *(LPCWSTR *)(puVar11 + 0x20) = lpWideCharStr;
              *(undefined8 *)(puVar11 + -8) = 0x140018e16;
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
                *(undefined8 *)(puVar11 + -8) = 0x140018e46;
                iVar4 = WideCharToMultiByte(param_8,0,lpWideCharStr,iVar4,*(LPSTR *)(puVar11 + 0x20)
                                            ,*(int *)(puVar11 + 0x28),*(LPCSTR *)(puVar11 + 0x30),
                                            *(LPBOOL *)(puVar11 + 0x38));
                if (iVar4 != 0) {
                  if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
                    *(undefined8 *)(puVar11 + -8) = 0x140018ebd;
                    _free_base(lpWideCharStr + -8);
                  }
                  goto LAB_140018e5f;
                }
              }
              if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
                *(undefined8 *)(puVar11 + -8) = 0x140018e5d;
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
            *(undefined8 *)(puVar11 + -8) = 0x140018d49;
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
        goto LAB_140018c87;
      }
      goto LAB_140018c8f;
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
LAB_140018c87:
      pWVar7 = pWVar7 + 8;
      puVar11 = puVar9;
      goto LAB_140018c8f;
    }
  }
LAB_140018e5f:
  puVar12 = puVar11;
  if ((pWVar7 != (LPCWSTR)0x0) && (*(int *)(pWVar7 + -8) == 0xdddd)) {
    *(undefined8 *)(puVar11 + -8) = 0x140018e75;
    _free_base(pWVar7 + -8);
  }
LAB_140018e77:
  uVar6 = local_30 ^ (ulonglong)&local_38;
  *(undefined8 *)(puVar12 + -8) = 0x140018e83;
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
    __acrt_update_locale_info
   
   Library: Visual Studio 2015 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_1400334a0) && ((DAT_1400328c0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
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
  
  if (((undefined *)*param_2 != PTR_DAT_140032508) &&
     ((DAT_1400328c0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    piVar1 = __acrt_update_thread_multibyte_data();
    *param_2 = (longlong)piVar1;
  }
  return;
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
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_140033cf0,0,param_1), BVar1 == 0)) {
    puVar4 = __doserrno();
    DVar2 = GetLastError();
    uVar3 = __acrt_errno_from_os_error(DVar2);
    *puVar4 = uVar3;
  }
  return;
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
      pvVar2 = HeapAlloc(DAT_140033cf0,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_140017c24();
    } while ((iVar1 != 0) && (iVar1 = _callnewh(param_1), iVar1 != 0));
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Single Match
    wcstol
   
   Library: Visual Studio 2015 Release */

long __cdecl wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_18 [2];
  
  puVar2 = make_c_string_character_source<>(local_18,_Str,_EndPtr);
  uVar1 = __crt_strtox::
          parse_integer<unsigned_long,class___crt_strtox::c_string_character_source<wchar_t>_>
                    (0,puVar2,_Radix,1);
  return uVar1;
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
          if (iVar1 != 0) goto LAB_1400191be;
        }
        else {
          uVar3 = (local_20.locinfo)->lc_collate_cp;
          if ((((1 < (int)uVar3) && ((int)uVar3 <= (int)_SrcSizeInBytes)) &&
              (iVar1 = MultiByteToWideChar((local_20.locinfo)->lc_time_cp,9,_SrcCh,uVar3,_DstCh,
                                           (uint)(_DstCh != (wchar_t *)0x0)), iVar1 != 0)) ||
             (((ulonglong)(longlong)(int)(local_20.locinfo)->lc_collate_cp <= _SrcSizeInBytes &&
              (_SrcCh[1] != '\0')))) {
            uVar3 = (local_20.locinfo)->lc_collate_cp;
            goto LAB_1400191be;
          }
        }
        puVar2 = __doserrno();
        uVar3 = 0xffffffff;
        *puVar2 = 0x2a;
      }
LAB_1400191be:
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




void FUN_1400191d8(wchar_t *param_1,char *param_2,size_t param_3)

{
  _mbtowc_l(param_1,param_2,param_3,(_locale_t)0x0);
  return;
}




ulonglong FUN_1400191e0(short *param_1,ulonglong param_2)

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
  if (DAT_140032018 < 5) {
    if (DAT_140032018 < 1) {
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
        goto LAB_1400193c4;
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
LAB_1400193c4:
  return lVar7 >> 1;
}




/* Library Function - Single Match
    enum __acrt_fp_class __cdecl __acrt_fp_classify(double const & __ptr64)
   
   Library: Visual Studio 2015 Release */

__acrt_fp_class __cdecl __acrt_fp_classify(double *param_1)

{
  double dVar1;
  
  dVar1 = *param_1;
  if (((ulonglong)dVar1 >> 0x34 & 0x7ff) != 0x7ff) {
    return 0;
  }
  if (((ulonglong)dVar1 & 0xfffffffffffff) == 0) {
    return 1;
  }
  if ((((ulonglong)dVar1 & 0x8000000000000000) != 0) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000)) {
    return 4;
  }
  return ~(uint)((ulonglong)dVar1 >> 0x33) & 1 | 2;
}




/* Library Function - Single Match
    int __cdecl fp_format_a(double const * __ptr64 const,char * __ptr64,unsigned __int64,char *
   __ptr64 const,unsigned __int64,int,bool,unsigned int,struct __crt_locale_pointers * __ptr64
   const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_a(double *param_1,char *param_2,__uint64 param_3,char *param_4,__uint64 param_5,
           int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  int iVar3;
  ulong *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  short sVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  char *pcVar13;
  char *pcVar14;
  short sVar15;
  ulonglong uVar16;
  int iVar17;
  longlong local_38;
  longlong local_30;
  char local_20;
  
  *param_2 = '\0';
  iVar17 = 0;
  uVar10 = (ulonglong)(uint)param_6;
  if (param_6 < 0) {
    uVar10 = 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_9);
  iVar3 = (int)uVar10;
  if (param_3 <= (ulonglong)(longlong)(iVar3 + 0xb)) {
    puVar4 = __doserrno();
    *puVar4 = 0x22;
    FUN_140013a44();
    iVar17 = 0x22;
    goto LAB_140019761;
  }
  if (((ulonglong)*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
    iVar3 = fp_format_e(param_1,param_2,param_3,param_4,param_5,iVar3,false,param_8,
                        (__crt_locale_pointers *)0x0);
    if (iVar3 == 0) {
      pauVar5 = FUN_1400216b8((undefined1 (*) [16])param_2,0x65);
      if (pauVar5 != (undefined1 (*) [16])0x0) {
        (*pauVar5)[0] = (-param_7 & 0xe0U) + 0x70;
        (*pauVar5)[3] = 0;
      }
    }
    else {
      *param_2 = '\0';
      iVar17 = iVar3;
    }
    goto LAB_140019761;
  }
  if (((ulonglong)*param_1 & 0x8000000000000000) != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
  }
  uVar11 = 0x3ff;
  sVar8 = (-(ushort)param_7 & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    *param_2 = '0';
    uVar11 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
  }
  else {
    *param_2 = '1';
  }
  pauVar12 = (undefined1 (*) [16])(param_2 + 1);
  pauVar5 = (undefined1 (*) [16])(param_2 + 2);
  if (iVar3 == 0) {
    (*pauVar12)[0] = '\0';
  }
  else {
    (*pauVar12)[0] = *(char *)**(undefined8 **)(local_30 + 0xf8);
  }
  if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
    sVar15 = 0x30;
    uVar16 = 0xf000000000000;
    do {
      if ((int)uVar10 < 1) break;
      uVar2 = (short)(((ulonglong)*param_1 & uVar16) >> ((byte)sVar15 & 0x3f)) + 0x30;
      if (0x39 < uVar2) {
        uVar2 = uVar2 + sVar8;
      }
      (*pauVar5)[0] = (char)uVar2;
      uVar10 = (ulonglong)((int)uVar10 - 1);
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
      uVar16 = uVar16 >> 4;
      sVar15 = sVar15 + -4;
    } while (-1 < sVar15);
    if ((-1 < sVar15) &&
       (pauVar1 = pauVar5, 8 < (ushort)(((ulonglong)*param_1 & uVar16) >> ((byte)sVar15 & 0x3f)))) {
      while (pauVar6 = (undefined1 (*) [16])(pauVar1[-1] + 0xf), ((*pauVar6)[0] + 0xba & 0xdf) == 0)
      {
        (*pauVar6)[0] = '0';
        pauVar1 = pauVar6;
      }
      if (pauVar6 == pauVar12) {
        pauVar1[-1][0xe] = pauVar1[-1][0xe] + '\x01';
      }
      else if ((*pauVar6)[0] == '9') {
        (*pauVar6)[0] = (char)sVar8 + ':';
      }
      else {
        (*pauVar6)[0] = (*pauVar6)[0] + '\x01';
      }
    }
  }
  if (0 < (int)uVar10) {
    FUN_1400115e0(pauVar5,0x30,uVar10);
    pauVar5 = (undefined1 (*) [16])(*pauVar5 + uVar10);
  }
  if ((*pauVar12)[0] == '\0') {
    pauVar5 = pauVar12;
  }
  (*pauVar5)[0] = (-param_7 & 0xe0U) + 0x70;
  lVar7 = ((uint)((ulonglong)*param_1 >> 0x34) & 0x7ff) - uVar11;
  if (lVar7 < 0) {
    (*pauVar5)[1] = '-';
    lVar7 = -lVar7;
  }
  else {
    (*pauVar5)[1] = '+';
  }
  pcVar13 = *pauVar5 + 2;
  *pcVar13 = '0';
  pcVar14 = pcVar13;
  if (lVar7 < 1000) {
LAB_1400196eb:
    if (99 < lVar7) goto LAB_1400196f1;
  }
  else {
    *pcVar13 = (char)(lVar7 / 1000) + '0';
    pcVar14 = *pauVar5 + 3;
    lVar7 = lVar7 % 1000;
    if (pcVar14 == pcVar13) goto LAB_1400196eb;
LAB_1400196f1:
    lVar9 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar7),8) + lVar7;
    lVar9 = (lVar9 >> 6) - (lVar9 >> 0x3f);
    *pcVar14 = (char)lVar9 + '0';
    pcVar14 = pcVar14 + 1;
    lVar7 = lVar7 + lVar9 * -100;
  }
  if ((pcVar14 != pcVar13) || (9 < lVar7)) {
    *pcVar14 = (char)(lVar7 / 10) + '0';
    pcVar14 = pcVar14 + 1;
    lVar7 = lVar7 % 10;
  }
  *pcVar14 = (char)lVar7 + '0';
  pcVar14[1] = '\0';
LAB_140019761:
  if (local_20 != '\0') {
    *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
  }
  return iVar17;
}




/* Library Function - Single Match
    int __cdecl fp_format_e(double const * __ptr64 const,char * __ptr64 const,unsigned __int64,char
   * __ptr64 const,unsigned __int64,int,bool,unsigned int,struct __crt_locale_pointers * __ptr64
   const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_e(double *param_1,char *param_2,__uint64 param_3,char *param_4,__uint64 param_5,
           int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  ulong uVar1;
  ulonglong uVar2;
  int local_18 [4];
  
  __acrt_fltout((uint *)*param_1,param_6 + 1,local_18,param_4,param_5);
  uVar2 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = __acrt_fp_strflt_to_string
                    (param_2 + (ulonglong)(local_18[0] == 0x2d) + (ulonglong)(0 < param_6),uVar2,
                     param_6 + 1,(longlong)local_18);
  if (uVar1 == 0) {
    uVar1 = fp_format_e_internal
                      (param_2,param_3,param_6,param_7,param_8,(_strflt *)local_18,false,param_9);
  }
  else {
    *param_2 = '\0';
  }
  return uVar1;
}




/* Library Function - Single Match
    int __cdecl fp_format_e_internal(char * __ptr64 const,unsigned __int64,int,bool,unsigned
   int,struct _strflt * __ptr64 const,bool,struct __crt_locale_pointers * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_e_internal
          (char *param_1,__uint64 param_2,int param_3,bool param_4,uint param_5,_strflt *param_6,
          bool param_7,__crt_locale_pointers *param_8)

{
  errno_t eVar1;
  ulong *puVar2;
  char *pcVar3;
  char *_SizeInBytes;
  int iVar4;
  longlong lVar5;
  longlong local_28;
  longlong local_20;
  char local_10;
  longlong lVar6;
  
  iVar4 = 0;
  if (0 < param_3) {
    iVar4 = param_3;
  }
  if ((ulonglong)(longlong)(iVar4 + 9) < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_8);
    if (param_7) {
      pcVar3 = param_1 + (*(int *)param_6 == 0x2d);
      if (0 < param_3 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (pcVar3[lVar5] != '\0');
        FUN_140013410((undefined8 *)(pcVar3 + (int)(uint)(0 < param_3)),(undefined8 *)pcVar3,
                      lVar6 + 2);
      }
    }
    pcVar3 = param_1;
    if (*(int *)param_6 == 0x2d) {
      *param_1 = '-';
      pcVar3 = param_1 + 1;
    }
    if (0 < param_3) {
      *pcVar3 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = *(char *)**(undefined8 **)(local_20 + 0xf8);
    }
    pcVar3 = pcVar3 + (ulonglong)!param_7 + (longlong)param_3;
    _SizeInBytes = param_1 + (param_2 - (longlong)pcVar3);
    if (param_2 == 0xffffffffffffffff) {
      _SizeInBytes = (char *)0xffffffffffffffff;
    }
    eVar1 = strcpy_s(pcVar3,(rsize_t)_SizeInBytes,"e+000");
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4) {
      *pcVar3 = 'E';
    }
    if (**(char **)(param_6 + 8) != '0') {
      iVar4 = *(int *)(param_6 + 4) + -1;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
        pcVar3[1] = '-';
      }
      if (99 < iVar4) {
        pcVar3[2] = pcVar3[2] + (char)(iVar4 / 100);
        iVar4 = iVar4 % 100;
      }
      if (9 < iVar4) {
        pcVar3[3] = pcVar3[3] + (char)(iVar4 / 10);
        iVar4 = iVar4 % 10;
      }
      pcVar3[4] = pcVar3[4] + (char)iVar4;
    }
    if ((param_5 == 2) && (pcVar3[2] == '0')) {
      FUN_140013410((undefined8 *)(pcVar3 + 2),(undefined8 *)(pcVar3 + 3),3);
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
    iVar4 = 0;
  }
  else {
    puVar2 = __doserrno();
    iVar4 = 0x22;
    *puVar2 = 0x22;
    FUN_140013a44();
  }
  return iVar4;
}




/* Library Function - Single Match
    int __cdecl fp_format_f_internal(char * __ptr64 const,unsigned __int64,int,struct _strflt *
   __ptr64 const,bool,struct __crt_locale_pointers * __ptr64 const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_f_internal
          (char *param_1,__uint64 param_2,int param_3,_strflt *param_4,bool param_5,
          __crt_locale_pointers *param_6)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_6);
  iVar2 = *(int *)(param_4 + 4);
  if ((param_5) && (iVar2 + -1 == param_3)) {
    iVar3 = *(int *)param_4;
    (param_1 + (longlong)(iVar2 + -1) + (ulonglong)(iVar3 == 0x2d))[0] = '0';
    (param_1 + (longlong)(iVar2 + -1) + (ulonglong)(iVar3 == 0x2d))[1] = '\0';
  }
  if (*(int *)param_4 == 0x2d) {
    *param_1 = '-';
    param_1 = param_1 + 1;
  }
  if (*(int *)(param_4 + 4) < 1) {
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (param_1[lVar6] != '\0');
    FUN_140013410((undefined8 *)(param_1 + 1),(undefined8 *)param_1,lVar5 + 2);
    *param_1 = '0';
    pcVar4 = param_1 + 1;
  }
  else {
    pcVar4 = param_1 + *(int *)(param_4 + 4);
  }
  if (0 < param_3) {
    pauVar1 = (undefined1 (*) [16])(pcVar4 + 1);
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (pcVar4[lVar6] != '\0');
    FUN_140013410((undefined8 *)pauVar1,(undefined8 *)pcVar4,lVar5 + 2);
    *pcVar4 = *(char *)**(undefined8 **)(local_20 + 0xf8);
    iVar2 = *(int *)(param_4 + 4);
    if (iVar2 < 0) {
      if ((param_5) || (-iVar2 < param_3)) {
        param_3 = -iVar2;
      }
      lVar6 = -1;
      if (param_3 != 0) {
        do {
          lVar5 = lVar6;
          lVar6 = lVar5 + 1;
        } while ((*pauVar1)[lVar6] != '\0');
        FUN_140013410((undefined8 *)(*pauVar1 + param_3),(undefined8 *)pauVar1,lVar5 + 2);
      }
      FUN_1400115e0(pauVar1,0x30,(longlong)param_3);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return 0;
}




/* Library Function - Single Match
    int __cdecl fp_format_g(double const * __ptr64 const,char * __ptr64 const,unsigned __int64,char
   * __ptr64 const,unsigned __int64,int,bool,unsigned int,struct __crt_locale_pointers * __ptr64
   const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_g(double *param_1,char *param_2,__uint64 param_3,char *param_4,__uint64 param_5,
           int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  __acrt_fltout((uint *)*param_1,param_6,local_18,param_4,param_5);
  bVar7 = local_18[0] == 0x2d;
  iVar6 = local_18[1] + -1;
  uVar4 = param_3 - bVar7;
  if (param_3 == 0xffffffffffffffff) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar2 = __acrt_fp_strflt_to_string(param_2 + bVar7,uVar4,param_6,(longlong)local_18);
  if (uVar2 == 0) {
    iVar3 = local_18[1] + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      uVar2 = fp_format_e_internal
                        (param_2,param_3,param_6,param_7,param_8,(_strflt *)local_18,true,param_9);
    }
    else {
      pcVar1 = param_2 + bVar7;
      if (iVar6 < iVar3) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      uVar2 = fp_format_f_internal(param_2,param_3,param_6,(_strflt *)local_18,true,param_9);
    }
  }
  else {
    *param_2 = '\0';
  }
  return uVar2;
}




/* Library Function - Single Match
    int __cdecl fp_format_nan_or_infinity(enum __acrt_fp_class,bool,char * __ptr64,unsigned
   __int64,bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_nan_or_infinity
          (__acrt_fp_class param_1,bool param_2,char *param_3,__uint64 param_4,bool param_5)

{
  int extraout_EAX;
  errno_t eVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *_Dst;
  undefined1 auStackY_c8 [32];
  undefined *local_98 [4];
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  char *local_48;
  undefined *local_40;
  char *local_38;
  undefined *local_30;
  char *local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_c8;
  if (param_4 < (ulonglong)param_2 + 4) {
    *param_3 = '\0';
  }
  else {
    _Dst = param_3;
    if (param_2) {
      _Dst = param_3 + 1;
      *param_3 = '-';
      param_4 = param_4 - 1;
      *_Dst = '\0';
    }
    local_78 = &DAT_140025414;
    local_70 = &DAT_140025414;
    local_98[0] = &DAT_14002540c;
    local_98[1] = &DAT_14002540c;
    local_98[2] = &DAT_140025410;
    local_98[3] = &DAT_140025410;
    local_58 = "NAN(SNAN)";
    local_48 = "nan(snan)";
    local_38 = "NAN(IND)";
    local_28 = "nan(ind)";
    local_50 = &DAT_140025414;
    local_30 = &DAT_140025414;
    local_68 = &DAT_140025418;
    lVar3 = (ulonglong)(param_1 - 1) * 4;
    local_60 = &DAT_140025418;
    local_40 = &DAT_140025418;
    local_20 = &DAT_140025418;
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (local_98[(ulonglong)(~-(uint)param_5 & 2) + lVar3][uVar2] != '\0');
    eVar1 = strcpy_s(_Dst,param_4,
                     local_98[(ulonglong)((uint)(param_4 <= uVar2) + (~-(uint)param_5 & 2)) + lVar3]
                    );
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_c8);
  return extraout_EAX;
}




/* Library Function - Single Match
    __acrt_fp_format
   
   Library: Visual Studio 2015 Release */

ulong __acrt_fp_format(double *param_1,char *param_2,__uint64 param_3,char *param_4,__uint64 param_5
                      ,int param_6,int param_7,ulonglong param_8,__crt_locale_pointers *param_9)

{
  __acrt_fp_class _Var1;
  ulong uVar2;
  ulong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  int local_38 [4];
  
  if ((((param_2 == (char *)0x0) || (param_3 == 0)) || (param_4 == (char *)0x0)) || (param_5 == 0))
  {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_140013a44();
    return 0x16;
  }
  if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((param_8 & 8) == 0) && (_Var1 = __acrt_fp_classify(param_1), _Var1 != 0)) {
    uVar2 = fp_format_nan_or_infinity
                      (_Var1,SUB81((ulonglong)*param_1 >> 0x3f,0),param_2,param_3,bVar6);
    return uVar2;
  }
  uVar5 = (uint)(param_8 >> 4) & 1 | 2;
  if (param_6 == 0x41) {
LAB_140019ff4:
    uVar2 = fp_format_a(param_1,param_2,param_3,param_4,param_5,param_7,bVar6,uVar5,param_9);
  }
  else {
    if (param_6 == 0x45) {
LAB_140019fbb:
      uVar2 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_7,bVar6,uVar5,param_9);
      return uVar2;
    }
    if (param_6 == 0x46) {
LAB_140019f31:
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      __acrt_fltout((uint *)*param_1,param_7,local_38,param_4,param_5);
      uVar4 = param_3 - (local_38[0] == 0x2d);
      if (param_3 == 0xffffffffffffffff) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar2 = __acrt_fp_strflt_to_string
                        (param_2 + (local_38[0] == 0x2d),uVar4,local_38[1] + param_7,
                         (longlong)local_38);
      if (uVar2 != 0) {
        *param_2 = '\0';
        return uVar2;
      }
      uVar2 = fp_format_f_internal(param_2,param_3,param_7,(_strflt *)local_38,false,param_9);
      return uVar2;
    }
    if (param_6 != 0x47) {
      if (param_6 == 0x61) goto LAB_140019ff4;
      if (param_6 == 0x65) goto LAB_140019fbb;
      if (param_6 == 0x66) goto LAB_140019f31;
    }
    uVar2 = fp_format_g(param_1,param_2,param_3,param_4,param_5,param_7,bVar6,uVar5,param_9);
  }
  return uVar2;
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
    FUN_140013a44();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
}




/* Library Function - Single Match
    _get_printf_count_output
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _get_printf_count_output(void)

{
  return (int)(DAT_1400334a8 == (DAT_140032008 | 1));
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
    if ((int)DAT_1400338c0 < (int)uVar6) {
      uVar6 = DAT_1400338c0;
    }
    uVar7 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      do {
        if ((((*(longlong *)pbVar3 != -1) && (*(longlong *)pbVar3 != -2)) && ((*puVar5 & 1) != 0))
           && (((*puVar5 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)pbVar3), DVar1 != 0)))) {
          lVar2 = (ulonglong)((uint)lVar4 & 0x3f) * 0x40 + (&DAT_1400334c0)[lVar4 >> 6];
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
    lVar2 = (ulonglong)(uVar3 & 0x3f) * 0x40 + (&DAT_1400334c0)[(longlong)(int)uVar3 >> 6];
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
        if (DAT_140033200 != 0) {
          *(undefined4 *)(*(longlong *)(lVar4 + DAT_140033200) + 0x18) = 0xfffffffe;
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
    iswctype
   
   Library: Visual Studio 2015 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  uint uVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_14001a307:
    uVar2 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_140032160 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar1 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar1 == 0) goto LAB_14001a307;
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
    uVar2 = FUN_1400191e0(param_3,(longlong)param_4);
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
      pvVar2 = HeapAlloc(DAT_140033cf0,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_140017c24();
    } while ((iVar1 != 0) && (iVar1 = _callnewh(dwBytes), iVar1 != 0));
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
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
  
  bVar3 = (byte)DAT_140032008 & 0x3f;
  pvVar6 = (void *)((DAT_140032008 ^ (&DAT_140033970)[param_1]) >> bVar3 |
                   (DAT_140032008 ^ (&DAT_140033970)[param_1]) << 0x40 - bVar3);
  if (pvVar6 != (void *)0xffffffffffffffff) {
    if (pvVar6 != (void *)0x0) {
      return pvVar6;
    }
    if (param_3 != param_4) {
      do {
        mVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_1400338d0)[mVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_appmodel_runtime_l1_1_140025470)[mVar2];
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
            lVar1 = (&DAT_1400338d0)[mVar2];
            (&DAT_1400338d0)[mVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_14001a620;
          }
          LOCK();
          (&DAT_1400338d0)[mVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_14001a620:
          if (hLibModule != (HMODULE)0x0) goto LAB_14001a63b;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hLibModule = (HMODULE)0x0;
LAB_14001a63b:
    if ((hLibModule != (HMODULE)0x0) &&
       (pFVar5 = GetProcAddress(hLibModule,param_2), pFVar5 != (FARPROC)0x0)) {
      bVar3 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
      LOCK();
      (&DAT_140033970)[param_1] =
           ((ulonglong)pFVar5 >> bVar3 | (longlong)pFVar5 << 0x40 - bVar3) ^ DAT_140032008;
      UNLOCK();
      return pFVar5;
    }
    bVar3 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_140033970)[param_1] = (0xffffffffffffffffU >> bVar3 | -1L << 0x40 - bVar3) ^ DAT_140032008
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
  
  pcVar1 = (code *)try_get_function(3,"FlsAlloc",(module_id *)&DAT_140025a50,(module_id *)"FlsAlloc"
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
  
  pcVar1 = (code *)try_get_function(4,"FlsFree",(module_id *)&DAT_140025a68,(module_id *)"FlsFree");
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
  
  pcVar1 = (code *)try_get_function(5,"FlsGetValue",(module_id *)&DAT_140025a78,
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
  
  pcVar1 = (code *)try_get_function(6,"FlsSetValue",(module_id *)&DAT_140025a90,
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
    __acrt_GetSystemTimePreciseAsFileTime
   
   Library: Visual Studio 2015 Release */

void __acrt_GetSystemTimePreciseAsFileTime(LPFILETIME param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0xf,"GetSystemTimePreciseAsFileTime",(module_id *)&DAT_140025ac4
                                    ,(module_id *)"GetSystemTimePreciseAsFileTime");
  if (pcVar1 == (code *)0x0) {
    GetSystemTimeAsFileTime(param_1);
  }
  else {
    _guard_check_icall();
    (*pcVar1)(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2015 Release */

void __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x14,"InitializeCriticalSectionEx",(module_id *)&DAT_140025ae8,
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
  
  pcVar1 = (code *)try_get_function(0x16,"LCMapStringEx",(module_id *)&DAT_140025b10,
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
  
  pcVar1 = (code *)try_get_function(0x18,"LocaleNameToLCID",(module_id *)&DAT_140025b28,
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
  
  bVar1 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
  uVar2 = ((ulonglong)(0 >> bVar1) | 0L << 0x40 - bVar1) ^ DAT_140032008;
  puVar4 = &DAT_140033970;
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
  
  if (DAT_140033a70 == 0) {
    pcVar2 = (code *)try_get_function(8,"GetCurrentPackageId",(module_id *)&DAT_140025aa8,
                                      (module_id *)"GetCurrentPackageId");
    if (pcVar2 != (code *)0x0) {
      local_res8[0] = 0;
      _guard_check_icall();
      iVar1 = (*pcVar2)(local_res8,0);
      if (iVar1 == 0x7a) {
        LOCK();
        UNLOCK();
        DAT_140033a70 = 1;
        return true;
      }
    }
    LOCK();
    DAT_140033a70 = 2;
    UNLOCK();
    bVar3 = false;
  }
  else {
    bVar3 = DAT_140033a70 == 1;
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
    puVar1 = &DAT_1400338d0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_140033970;
    } while (puVar1 != &DAT_140033970);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
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
  for (iVar3 = 3; iVar3 != DAT_1400331f8; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_140033200 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = fclose(*(FILE **)(DAT_140033200 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_140033200 + lVar4 * 8) + 0x30));
      _free_base(*(LPVOID *)(DAT_140033200 + lVar4 * 8));
      *(undefined8 *)(DAT_140033200 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
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
      if (iVar1 != 0) goto LAB_14001acad;
    }
    iVar1 = 0;
  }
  else {
LAB_14001acad:
    iVar1 = -1;
  }
  return iVar1;
}




void FUN_14001acd8(void)

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
  puVar1 = DAT_140033200 + DAT_1400331f8;
  for (puVar3 = DAT_140033200; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    _File = (FILE *)*puVar3;
    if (_File != (FILE *)0x0) {
      FUN_140016e18((longlong)_File);
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
      FUN_140016e24((longlong)_File);
    }
  }
  __acrt_unlock(8);
  if (param_1 == 1) {
    local_38 = local_34;
  }
  return local_38;
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




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Library: Visual Studio 2015 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001ae62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_140033a80 + (longlong)param_1 * 0x28);
  return;
}




undefined8 FUN_14001ae6c(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_140033c88;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140033a80 + uVar1 * 0x28));
    DAT_140033c88 = DAT_140033c88 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_unlock
   
   Library: Visual Studio 2015 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001aeb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_140033a80 + (longlong)param_1 * 0x28);
  return;
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
LAB_14001af06:
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
          goto LAB_14001aee9;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_14001af06;
  puVar2 = __doserrno();
  uVar4 = 0x16;
LAB_14001aee9:
  *puVar2 = uVar4;
  FUN_140013a44();
  return uVar4;
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
  
  local_48 = DAT_140032008 ^ (ulonglong)auStackY_b8;
  uVar10 = 0;
  local_60 = param_2;
  if (param_2 == (wchar_t ***)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_140013a44();
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
      if (iVar1 != 0) goto LAB_14001b16f;
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
LAB_14001b16f:
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
  
  local_38 = DAT_140032008 ^ (ulonglong)auStackY_2b8;
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
    FUN_1400115e0((undefined1 (*) [16])&local_288,0,0x250);
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
                               ,param_3), iVar2 != 0)) goto LAB_14001b3ed;
        BVar3 = FindNextFileW(hFindFile,&local_288);
      } while (BVar3 != 0);
      lVar5 = *(longlong *)(param_3 + 8) - *(longlong *)param_3 >> 3;
      if (lVar6 != lVar5) {
        qsort((void *)(*(longlong *)param_3 + lVar6 * 8),lVar5 - lVar6,8,
              (_PtFuncCompare *)&LAB_14001afa4);
      }
    }
LAB_14001b3ed:
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
        goto LAB_14001b4cd;
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
LAB_14001b4cd:
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
  FUN_14001b5b4(param_3);
  __acrt_unlock(*param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b5b4(undefined8 *param_1)

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
  
  _DAT_140033c8c = *(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 4);
  _DAT_140033c90 = *(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 8);
  _DAT_140033ca8 = *(undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x220);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0xc);
  if (puVar4 == (undefined8 *)0x0) {
    _DAT_140033c98 = 0;
    _DAT_140033ca0 = 0;
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_140013a44();
  }
  else {
    _DAT_140033c98 = *puVar4;
    _DAT_140033ca0 = *(undefined4 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x14);
  }
  lVar9 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_1 + 0x88) + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1400115e0((undefined1 (*) [16])&DAT_140032610,0,0x101);
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_140013a44();
  }
  else {
    lVar8 = 2;
    puVar5 = (undefined8 *)&DAT_140032610;
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
  puVar4 = (undefined8 *)&DAT_140032720;
  if (puVar5 == (undefined8 *)0x0) {
    FUN_1400115e0((undefined1 (*) [16])&DAT_140032720,0,0x100);
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_140013a44();
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
  iVar2 = *(int *)PTR_DAT_140032508;
  *(int *)PTR_DAT_140032508 = *(int *)PTR_DAT_140032508 + -1;
  UNLOCK();
  if ((iVar2 == 1) && ((undefined4 *)PTR_DAT_140032508 != &DAT_1400322e0)) {
    _free_base(PTR_DAT_140032508);
  }
  PTR_DAT_140032508 = *(undefined **)(*(longlong *)*param_1 + 0x88);
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
  DAT_140033ca4 = 0;
  if (param_1 == -2) {
    DAT_140033ca4 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_140033ca4 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_140033ca4 = 1;
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
  FUN_1400115e0((undefined1 (*) [16])p_Var2,0,0x101);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  p_Var4 = param_1 + 0xc;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined2 *)p_Var4 = 0;
    p_Var4 = p_Var4 + 2;
  }
  do {
    *p_Var2 = p_Var2[(longlong)&DAT_1400322e0 - (longlong)param_1];
    p_Var2 = p_Var2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  p_Var2 = param_1 + 0x119;
  lVar1 = 0x100;
  do {
    *p_Var2 = p_Var2[(longlong)&DAT_1400322e0 - (longlong)param_1];
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
  
  local_18 = DAT_140032008 ^ (ulonglong)auStackY_788;
  BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738);
  lVar10 = 0x100;
  if (BVar3 == 0) {
    uVar4 = 0;
    p_Var7 = param_1 + 0x19;
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + 0x20);
LAB_14001ba82:
        p_Var7[0x100] = _Var2;
      }
      else {
        if (uVar4 - 0x61 < 0x1a) {
          *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x20);
          _Var2 = (__crt_multibyte_data)((char)uVar4 - 0x20);
          goto LAB_14001ba82;
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
          goto LAB_14001ba3d;
        }
        p_Var7[0x100] = (__crt_multibyte_data)0x0;
      }
      else {
        *p_Var7 = (__crt_multibyte_data)((byte)*p_Var7 | 0x10);
        _Var2 = p_Var7[(longlong)(a_Stack_631 + -(longlong)param_1)];
LAB_14001ba3d:
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




int FUN_14001bac0(int param_1,char param_2)

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
        FUN_140017b64();
      }
      piVar2 = *(int **)(local_30 + 0x88);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(undefined4 **)(local_30 + 0x88) != &DAT_1400322e0)) {
        _free_base(*(undefined4 **)(local_30 + 0x88));
      }
      *(undefined4 *)p_Var6 = 1;
      p_Var11 = (__crt_multibyte_data *)0x0;
      *(__crt_multibyte_data **)(local_30 + 0x88) = p_Var6;
      if ((((byte)local_30[0x3a8] & 2) == 0) && (((byte)DAT_1400328c0 & 1) == 0)) {
        local_28[0] = &local_30;
        local_res20[0] = 5;
        local_38[0] = 5;
        operator()<>(local_res18,local_38,local_28,local_res20);
        if (param_2 != '\0') {
          PTR_DAT_1400322d0 = PTR_DAT_140032508;
        }
      }
      goto LAB_14001bbb1;
    }
    puVar8 = __doserrno();
    *puVar8 = 0x16;
  }
  iVar5 = -1;
  p_Var11 = p_Var6;
LAB_14001bbb1:
  _free_base(p_Var11);
  return iVar5;
}




undefined4 FUN_14001bc78(void)

{
  int in_EAX;
  
  if (DAT_140033cb0 == '\0') {
    in_EAX = FUN_14001bac0(-3,'\x01');
    DAT_140033cb0 = '\x01';
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
  if (((*(uint *)(p_Var2 + 0x3a8) & DAT_1400328c0) == 0) || (*(longlong *)(p_Var2 + 0x90) == 0)) {
    __acrt_lock(5);
    piVar3 = *(int **)(p_Var2 + 0x88);
    if (piVar3 != (int *)PTR_DAT_140032508) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piVar3 != &DAT_1400322e0)) {
          _free_base(piVar3);
        }
      }
      *(undefined **)(p_Var2 + 0x88) = PTR_DAT_140032508;
      piVar3 = (int *)PTR_DAT_140032508;
      LOCK();
      *(int *)PTR_DAT_140032508 = *(int *)PTR_DAT_140032508 + 1;
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
  
  local_30 = DAT_140032008 ^ (ulonglong)auStack_68;
  uVar3 = getSystemCP(param_1);
  pwVar7 = (wchar_t *)0x0;
  if (uVar3 != 0) {
    puVar5 = &DAT_140032520;
    pwVar13 = pwVar7;
LAB_14001bdb4:
    if (*puVar5 != uVar3) goto code_r0x00014001bdbc;
    FUN_1400115e0((undefined1 (*) [16])(param_2 + 0x18),0,0x101);
    pbVar16 = &DAT_140032510;
    lVar9 = 4;
    pbVar14 = &DAT_140032530 + (longlong)pwVar13 * 0x30;
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
           *(undefined2 *)(p_Var6 + ((longlong)pwVar13 * 0x30 - (longlong)param_2) + 0x140032518);
      p_Var6 = p_Var6 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    goto LAB_14001bfd7;
  }
LAB_14001bd95:
  setSBCS(param_2);
LAB_14001bfe1:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_68);
  return;
code_r0x00014001bdbc:
  uVar12 = (int)pwVar13 + 1;
  pwVar13 = (wchar_t *)(ulonglong)uVar12;
  puVar5 = puVar5 + 0xc;
  if (4 < uVar12) goto code_r0x00014001bdc8;
  goto LAB_14001bdb4;
code_r0x00014001bdc8:
  if ((uVar3 - 65000 < 2) || (BVar4 = IsValidCodePage(uVar3 & 0xffff), BVar4 == 0))
  goto LAB_14001bfe1;
  BVar4 = GetCPInfo(uVar3,&local_48);
  if (BVar4 != 0) {
    FUN_1400115e0((undefined1 (*) [16])(param_2 + 0x18),0,0x101);
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
LAB_14001bfd7:
    setSBUpLow(param_2);
    goto LAB_14001bfe1;
  }
  if (DAT_140033ca4 == 0) goto LAB_14001bfe1;
  goto LAB_14001bd95;
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
      FUN_140013410(puVar4,(undefined8 *)pWVar2,uVar1);
      puVar7 = puVar4;
    }
    _free_base((LPVOID)0x0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return puVar7;
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
    iVar1 = DAT_1400338c0;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1400334c0)[lVar5] == 0) {
        puVar3 = __acrt_lowio_create_handle_array();
        (&DAT_1400334c0)[lVar5] = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          lVar4 = 0xc;
          break;
        }
        iVar1 = DAT_1400338c0 + 0x40;
        DAT_1400338c0 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = __doserrno();
    lVar4 = 9;
    *puVar2 = 9;
    FUN_140013a44();
  }
  return lVar4;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lowio_lock_fh
    __acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void FID_conflict___acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001c284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((ulonglong)(param_1 & 0x3f) * 0x40 + (&DAT_1400334c0)[(longlong)(int)param_1 >> 6]);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lowio_lock_fh
    __acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void FID_conflict___acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001c2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((ulonglong)(param_1 & 0x3f) * 0x40 + (&DAT_1400334c0)[(longlong)(int)param_1 >> 6]);
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
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_1400338c0)) {
    lVar3 = (ulonglong)(param_1 & 0x3f) * 0x40;
    if (((*(byte *)((&DAT_1400334c0)[(longlong)param_1 >> 6] + 0x38 + lVar3) & 1) != 0) &&
       (*(longlong *)((&DAT_1400334c0)[(longlong)param_1 >> 6] + 0x28 + lVar3) != -1)) {
      iVar1 = FUN_14001711c();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14001c330;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14001c330:
      *(undefined8 *)((&DAT_1400334c0)[(longlong)param_1 >> 6] + 0x28 + lVar3) = 0xffffffffffffffff;
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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1400338c0)) {
      lVar2 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
      if ((*(byte *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 + lVar2) & 1) != 0) {
        return *(intptr_t *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x28 + lVar2);
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_140013a44();
  }
  return -1;
}




/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_140032838) {
      _free_base(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_140032840) {
      _free_base(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_140032848) {
      _free_base(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_140032850) {
      _free_base(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_140032858) {
      _free_base(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_140032860) {
      _free_base(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_140032868) {
      _free_base(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_140032888) {
      _free_base(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_140032890) {
      _free_base(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_140032898) {
      _free_base(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_1400328a0) {
      _free_base(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_1400328a8) {
      _free_base(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_1400328b0) {
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
    if ((undefined *)*param_1 != PTR_DAT_140032820) {
      _free_base((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_140032828) {
      _free_base((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_140032830) {
      _free_base((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_140032878) {
      _free_base((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_140032880) {
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
  local_38 = DAT_140032008 ^ (ulonglong)&local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_50 + 0xc);
  }
  iVar2 = MultiByteToWideChar(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0)
  ;
  if (iVar2 == 0) goto LAB_14001c86c;
  uVar5 = (longlong)iVar2 * 2;
  if ((uVar5 + 0x10 & -(ulonglong)(uVar5 < uVar5 + 0x10)) == 0) {
    lpSrcStr = (undefined1 (*) [16])0x0;
    puVar7 = auStackY_88;
LAB_14001c807:
    if (lpSrcStr != (undefined1 (*) [16])0x0) {
      *(undefined8 *)(puVar7 + -8) = 0x14001c819;
      FUN_1400115e0(lpSrcStr,0,uVar5);
      *(int *)(puVar7 + 0x28) = iVar2;
      *(undefined1 (**) [16])(puVar7 + 0x20) = lpSrcStr;
      *(undefined8 *)(puVar7 + -8) = 0x14001c836;
      iVar2 = MultiByteToWideChar(param_6,1,param_3,param_4,*(LPWSTR *)(puVar7 + 0x20),
                                  *(int *)(puVar7 + 0x28));
      if (iVar2 != 0) {
        *(undefined8 *)(puVar7 + -8) = 0x14001c850;
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
        goto LAB_14001c7ff;
      }
      goto LAB_14001c807;
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
LAB_14001c7ff:
      lpSrcStr = lpSrcStr + 1;
      puVar7 = puVar6;
      goto LAB_14001c807;
    }
  }
  if ((lpSrcStr != (undefined1 (*) [16])0x0) && (*(int *)lpSrcStr[-1] == 0xdddd)) {
    *(undefined8 *)(puVar7 + -8) = 0x14001c86c;
    _free_base(lpSrcStr + -1);
  }
LAB_14001c86c:
  if (local_40 != '\0') {
    *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_38 ^ (ulonglong)&local_58;
  *(undefined8 *)(puVar7 + -8) = 0x14001c88b;
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
    if (((undefined *)puVar2[-2] != &DAT_1400322d8) &&
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
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_140032820)) &&
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
    if ((((undefined *)puVar4[-2] != &DAT_1400322d8) &&
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
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140024d90)) {
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
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140024d90)) &&
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
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_140024d90)) {
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
      if (((undefined *)puVar2[-2] != &DAT_1400322d8) &&
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
  if (((*(uint *)(p_Var1 + 0x3a8) & DAT_1400328c0) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((undefined8 *)(p_Var1 + 0x90),DAT_1400334a0);
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
         (ppuVar1 != &PTR_DAT_140032170)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
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
      FUN_1400115e0((undefined1 (*) [16])((longlong)pvVar3 + sVar2),0,uVar4 - sVar2);
    }
  }
  else {
    puVar1 = __doserrno();
    *puVar1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




bool FUN_14001cd54(void)

{
  DAT_140033cf0 = GetProcessHeap();
  return DAT_140033cf0 != (HANDLE)0x0;
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
  bVar1 = (byte)DAT_140032008 & 0x3f;
  uVar2 = DAT_140032008 ^ _DAT_140033d08;
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

void FUN_14001ced8(undefined8 param_1)

{
  _DAT_140033cf8 = param_1;
  _DAT_140033d00 = param_1;
  _DAT_140033d08 = param_1;
  _DAT_140033d10 = param_1;
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
LAB_14001cfb3:
    if (_SigNum == 2) {
      puVar8 = (ulonglong *)&DAT_140033cf8;
    }
    else if (_SigNum == 6) {
LAB_14001cfd0:
      puVar8 = (ulonglong *)&DAT_140033d08;
      p_Var9 = p_Var3;
    }
    else if (_SigNum == 0xf) {
      puVar8 = (ulonglong *)&DAT_140033d10;
    }
    else if (_SigNum == 0x15) {
      puVar8 = (ulonglong *)&DAT_140033d00;
      p_Var9 = p_Var3;
    }
    else {
      if (_SigNum == 0x16) goto LAB_14001cfd0;
      puVar8 = (ulonglong *)0x0;
      p_Var9 = p_Var3;
    }
  }
  else {
    if (_SigNum != 4) {
      if (_SigNum != 6) {
        if ((_SigNum == 8) || (_SigNum == 0xb)) goto LAB_14001cf4c;
        if ((_SigNum != 0xf) && (1 < _SigNum - 0x15U)) goto LAB_14001cf90;
      }
      goto LAB_14001cfb3;
    }
LAB_14001cf4c:
    p_Var9 = __acrt_getptd_noexit();
    if (p_Var9 == (__acrt_ptd *)0x0) {
      return -1;
    }
    lVar6 = *(longlong *)p_Var9;
    lVar4 = lVar6 + 0xc0;
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x10) {
      if (*(int *)(lVar6 + 4) == _SigNum) goto LAB_14001cf84;
    }
    lVar6 = 0;
LAB_14001cf84:
    if (lVar6 == 0) {
LAB_14001cf90:
      puVar2 = __doserrno();
      *puVar2 = 0x16;
      FUN_140013a44();
      return -1;
    }
    puVar8 = (ulonglong *)(lVar6 + 8);
    bVar1 = false;
  }
  local_res20 = 0;
  if (bVar1) {
    __acrt_lock(3);
    bVar5 = (byte)DAT_140032008 & 0x3f;
    pcVar7 = (code *)((DAT_140032008 ^ *puVar8) >> bVar5 | (DAT_140032008 ^ *puVar8) << 0x40 - bVar5
                     );
  }
  else {
    pcVar7 = (code *)*puVar8;
  }
  if (pcVar7 == (code *)0x1) goto LAB_14001d105;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    FUN_140017ac8(3);
  }
  if (((uint)_SigNum < 0xc) && ((0x910U >> (_SigNum & 0x1fU) & 1) != 0)) {
    local_res20 = *(longlong *)(p_Var9 + 8);
    *(longlong *)(p_Var9 + 8) = 0;
    if (_SigNum == 8) {
      p_Var3 = __acrt_getptd();
      local_res18 = *(undefined4 *)(p_Var3 + 0x10);
      p_Var3 = __acrt_getptd();
      *(undefined4 *)(p_Var3 + 0x10) = 0x8c;
      goto LAB_14001d0a8;
    }
  }
  else {
LAB_14001d0a8:
    if (_SigNum == 8) {
      lVar6 = *(longlong *)p_Var9;
      for (lVar4 = lVar6 + 0x30; lVar4 != lVar6 + 0xc0; lVar4 = lVar4 + 0x10) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      goto LAB_14001d105;
    }
  }
  bVar5 = 0x40 - ((byte)DAT_140032008 & 0x3f) & 0x3f;
  *puVar8 = ((ulonglong)(0 >> bVar5) | 0L << 0x40 - bVar5) ^ DAT_140032008;
LAB_14001d105:
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
    __acrt_fp_strflt_to_string
   
   Library: Visual Studio 2015 Release */

ulong __acrt_fp_strflt_to_string(char *param_1,ulonglong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulong *puVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  longlong lVar7;
  char cVar8;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar2 = 0;
    if (0 < param_3) {
      iVar2 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar2 + 1)) {
      puVar3 = __doserrno();
      uVar6 = 0x22;
      goto LAB_14001d1c3;
    }
    if (param_4 != 0) {
      pcVar5 = *(char **)(param_4 + 8);
      pcVar4 = param_1 + 1;
      *param_1 = '0';
      for (; 0 < param_3; param_3 = param_3 + -1) {
        cVar8 = *pcVar5;
        if (cVar8 == '\0') {
          cVar8 = '0';
        }
        else {
          pcVar5 = pcVar5 + 1;
        }
        *pcVar4 = cVar8;
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar5)) {
        while (pcVar4 = pcVar4 + -1, *pcVar4 == '9') {
          *pcVar4 = '0';
        }
        *pcVar4 = *pcVar4 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        lVar1 = -1;
        do {
          lVar7 = lVar1;
          lVar1 = lVar7 + 1;
        } while (param_1[lVar7 + 2] != '\0');
        FUN_140013410((undefined8 *)param_1,(undefined8 *)(param_1 + 1),lVar7 + 2);
      }
      return 0;
    }
  }
  puVar3 = __doserrno();
  uVar6 = 0x16;
LAB_14001d1c3:
  *puVar3 = uVar6;
  FUN_140013a44();
  return uVar6;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::divide(struct __crt_strtox::big_integer & __ptr64,struct
   __crt_strtox::big_integer const & __ptr64)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl __crt_strtox::divide(big_integer *param_1,big_integer *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  big_integer *pbVar9;
  __uint64 _Var10;
  int iVar11;
  uint uVar12;
  __uint64 _Var13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint local_res20;
  undefined8 uStack_230;
  undefined1 local_214 [468];
  
  if ((*(int *)param_1 == 0) || (uVar8 = *(uint *)param_2, uVar8 == 0)) {
    return 0;
  }
  uVar21 = *(int *)param_1 - 1;
  uVar18 = (ulonglong)uVar21;
  uVar3 = uVar8 - 1;
  if (uVar3 == 0) {
    uVar8 = *(uint *)(param_2 + 4);
    _Var13 = 0;
    if (uVar8 == 1) {
      uVar8 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      memcpy_s(param_1 + 4,0x1cc,local_214,0);
      uVar5 = (ulonglong)uVar8;
    }
    else {
      uVar5 = _Var13;
      if (uVar21 == 0) {
        uVar21 = *(uint *)(param_1 + 4);
        *(undefined4 *)param_1 = 0;
        memcpy_s(param_1 + 4,0x1cc,local_214,0);
        uVar5 = (ulonglong)uVar21 / (ulonglong)uVar8;
        uVar21 = uVar21 % uVar8;
        *(uint *)(param_1 + 4) = uVar21;
        *(uint *)param_1 = (uint)(uVar21 != 0);
      }
      else {
        while (uVar21 != 0xffffffff) {
          lVar14 = uVar18 * 4;
          uVar21 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar21;
          uVar4 = (ulonglong)*(uint *)(param_1 + lVar14 + 4) | _Var13 << 0x20;
          _Var13 = uVar4 % (ulonglong)uVar8;
          uVar5 = (uVar5 << 0x20) + (uVar4 / uVar8 & 0xffffffff);
        }
        *(undefined4 *)param_1 = 0;
        memcpy_s(param_1 + 4,0x1cc,local_214,0);
        *(int *)(param_1 + 4) = (int)_Var13;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)param_1 = 1;
      }
    }
  }
  else if (uVar21 < uVar3) {
    uVar5 = 0;
  }
  else {
    lVar14 = (longlong)(int)uVar21;
    iVar20 = uVar21 - uVar3;
    lVar17 = (longlong)iVar20;
    if (lVar17 <= lVar14) {
      pbVar9 = param_1 + lVar14 * 4 + 4;
      uVar3 = uVar21;
      do {
        if (*(int *)(pbVar9 + (longlong)(param_2 + (lVar17 * -4 - (longlong)param_1))) !=
            *(int *)pbVar9) {
          if (*(uint *)(param_1 + (longlong)(int)uVar3 * 4 + 4) <=
              *(uint *)(param_2 + ((int)uVar3 - lVar17) * 4 + 4)) goto LAB_14001d43f;
          break;
        }
        uVar3 = uVar3 - 1;
        lVar14 = lVar14 + -1;
        pbVar9 = pbVar9 + -4;
      } while (lVar17 <= lVar14);
    }
    iVar20 = iVar20 + 1;
LAB_14001d43f:
    if (iVar20 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + (ulonglong)(uVar8 - 1) * 4 + 4);
      local_res20 = *(uint *)(param_2 + (ulonglong)(uVar8 - 2) * 4 + 4);
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar11 = 0x20;
      if (uVar3 != 0) {
        iVar11 = 0x1f - iVar1;
      }
      bVar2 = (byte)iVar11;
      bVar7 = 0x20 - bVar2;
      if (iVar11 != 0) {
        uVar12 = local_res20 >> (bVar7 & 0x1f);
        local_res20 = local_res20 << (bVar2 & 0x1f);
        uVar3 = uVar12 | uVar3 << (bVar2 & 0x1f);
        if (2 < uVar8) {
          local_res20 = local_res20 |
                        *(uint *)(param_2 + (ulonglong)(uVar8 - 3) * 4 + 4) >> (bVar7 & 0x1f);
        }
      }
      _Var13 = 0;
      uVar12 = iVar20 - 1;
      uVar5 = _Var13;
      if (-1 < (int)uVar12) {
        uVar19 = uVar12 + uVar8;
        uVar4 = (ulonglong)uVar3;
        do {
          uVar21 = 0;
          if (uVar19 <= (uint)uVar18) {
            uVar21 = *(uint *)(param_1 + (ulonglong)uVar19 * 4 + 4);
          }
          uVar3 = *(uint *)(param_1 + (ulonglong)(uVar19 - 2) * 4 + 4);
          uStack_230 = CONCAT44(uVar21,*(undefined4 *)(param_1 + (ulonglong)(uVar19 - 1) * 4 + 4));
          if (iVar11 != 0) {
            uStack_230 = (ulonglong)(uVar3 >> (bVar7 & 0x3f)) | uStack_230 << (bVar2 & 0x3f);
            uVar3 = uVar3 << (bVar2 & 0x1f);
            if (2 < uVar19) {
              uVar3 = uVar3 | *(uint *)(param_1 + (ulonglong)(uVar19 - 3) * 4 + 4) >> (bVar7 & 0x1f)
              ;
            }
          }
          uVar6 = uStack_230 / uVar4;
          uStack_230 = uStack_230 % uVar4;
          if (0xffffffff < uVar6) {
            lVar14 = uVar6 - 0xffffffff;
            uVar6 = 0xffffffff;
            uStack_230 = uStack_230 + lVar14 * uVar4;
          }
          if (uStack_230 < 0x100000000) {
            uVar16 = local_res20 * uVar6;
            do {
              if (uVar16 <= (uStack_230 << 0x20 | (ulonglong)uVar3)) break;
              uVar6 = uVar6 - 1;
              uVar16 = uVar16 - local_res20;
              uStack_230 = uStack_230 + uVar4;
            } while (uStack_230 < 0x100000000);
          }
          if (uVar6 != 0) {
            _Var10 = _Var13;
            if (uVar8 != 0) {
              uVar18 = (ulonglong)uVar8;
              pbVar9 = param_2;
              uVar3 = uVar12;
              do {
                uVar15 = (ulonglong)uVar3;
                pbVar9 = pbVar9 + 4;
                uVar16 = _Var10 + *(uint *)pbVar9 * uVar6;
                _Var10 = uVar16 >> 0x20;
                uVar22 = (uint)uVar16;
                if (*(uint *)(param_1 + uVar15 * 4 + 4) < uVar22) {
                  _Var10 = _Var10 + 1;
                }
                uVar3 = uVar3 + 1;
                *(uint *)(param_1 + uVar15 * 4 + 4) = *(uint *)(param_1 + uVar15 * 4 + 4) - uVar22;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            if (uVar21 < _Var10) {
              uVar18 = (ulonglong)uVar8;
              uVar16 = _Var13;
              uVar21 = uVar12;
              pbVar9 = param_2;
              if (uVar8 != 0) {
                do {
                  uVar16 = (ulonglong)*(uint *)(param_1 + (ulonglong)uVar21 * 4 + 4) +
                           (ulonglong)*(uint *)(pbVar9 + 4) + uVar16;
                  *(int *)(param_1 + (ulonglong)uVar21 * 4 + 4) = (int)uVar16;
                  uVar18 = uVar18 - 1;
                  uVar16 = uVar16 >> 0x20;
                  uVar21 = uVar21 + 1;
                  pbVar9 = pbVar9 + 4;
                } while (uVar18 != 0);
              }
              uVar6 = uVar6 - 1;
            }
            uVar18 = (ulonglong)(uVar19 - 1);
          }
          uVar21 = (uint)uVar18;
          uVar12 = uVar12 - 1;
          uVar19 = uVar19 - 1;
          uVar5 = (uVar5 << 0x20) + (uVar6 & 0xffffffff);
        } while (-1 < (int)uVar12);
      }
      uVar21 = uVar21 + 1;
      uVar8 = uVar21;
      if (uVar21 < *(uint *)param_1) {
        do {
          uVar18 = (ulonglong)uVar8;
          uVar8 = uVar8 + 1;
          *(undefined4 *)(param_1 + uVar18 * 4 + 4) = 0;
        } while (uVar8 < *(uint *)param_1);
      }
      *(uint *)param_1 = uVar21;
      while ((uVar21 != 0 &&
             (uVar21 = *(int *)param_1 - 1, *(int *)(param_1 + (ulonglong)uVar21 * 4 + 4) == 0))) {
        *(uint *)param_1 = uVar21;
      }
    }
  }
  return uVar5;
}




/* Library Function - Single Match
    __acrt_fltout
   
   Library: Visual Studio 2015 Release */

void __acrt_fltout(uint *param_1,int param_2,int *param_3,char *param_4,rsize_t param_5)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  errno_t eVar4;
  __acrt_fp_class _Var5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  __uint64 _Var10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auStackY_818 [32];
  undefined8 local_7e0;
  uint uStack_7d8;
  uint uStack_7d4;
  uint uStack_7d0;
  uint local_7cc;
  char *local_7c8;
  uint *local_7c0;
  uint local_7b8 [2];
  char local_7b0;
  int *local_7a8;
  uint local_798;
  undefined8 local_794;
  uint uStack_5c8;
  uint auStack_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint uStack_228;
  uint auStack_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_140032008 ^ (ulonglong)auStackY_818;
  local_7e0 = param_1;
  local_7c8 = param_4;
  local_7a8 = param_3;
  fegetenv(local_7b8);
  uVar27 = 0;
  local_7b0 = ((byte)local_7b8[0] & 0x1f) != 0x1f;
  if ((bool)local_7b0) {
    feholdexcept((undefined8 *)local_7b8);
  }
  puVar2 = local_7e0;
  *(char **)(param_3 + 2) = param_4;
  *param_3 = (-(uint)(((ulonglong)local_7e0 & 0x8000000000000000) != 0) & 0xd) + 0x20;
  iVar6 = 0;
  if ((((ulonglong)local_7e0 & 0x7ff0000000000000) == 0) &&
     (((ulonglong)local_7e0 & 0xfffffffffffff) == 0)) {
    param_3[1] = 0;
    eVar4 = strcpy_s(param_4,param_5,"0");
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_14001ea0e;
  }
  _Var5 = __acrt_fp_classify((double *)&local_7e0);
  if (_Var5 != 0) {
    param_3[1] = 1;
  }
  if (_Var5 == 1) {
    eVar4 = strcpy_s(param_4,param_5,"1#INF");
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_14001ea0e;
  }
  if (_Var5 == 2) {
    eVar4 = strcpy_s(param_4,param_5,"1#QNAN");
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_14001ea0e;
  }
  if (_Var5 == 3) {
    eVar4 = strcpy_s(param_4,param_5,"1#SNAN");
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_14001ea0e;
  }
  if (_Var5 == 4) {
    eVar4 = strcpy_s(param_4,param_5,"1#IND");
    if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_14001ea0e;
  }
  local_7e0 = (uint *)((ulonglong)puVar2 & 0x7fffffffffffffff);
  local_7cc = param_2 + 1;
  bVar28 = (ulonglong)local_7e0 >> 0x34 == 0;
  uVar26 = (~-(ulonglong)bVar28 & 0x10000000000000) + ((ulonglong)puVar2 & 0xfffffffffffff);
  iVar18 = (uint)((ulonglong)local_7e0 >> 0x34) + (bVar28 - 0x433);
  local_7c0 = local_7e0;
  dVar29 = FUN_14001fe70();
  dVar29 = ceil(dVar29);
  uVar25 = -(uint)(((int)dVar29 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar29;
  uVar7 = (uint)(uVar26 >> 0x20);
  local_794 = uVar26;
  uVar8 = (uint)(uVar7 != 0);
  uVar16 = uVar8 + 1;
  if (iVar18 < 0) {
    if (iVar18 == -0x3fe) {
LAB_14001dcf7:
      local_7e0 = (uint *)((ulonglong)local_7e0._4_4_ << 0x20);
      puVar2 = (uint *)((longlong)&local_794 + (ulonglong)uVar8 * 4);
      iVar23 = 0x1f;
      bVar28 = *puVar2 != 0;
      if (bVar28) {
        for (; *puVar2 >> iVar23 == 0; iVar23 = iVar23 + -1) {
        }
      }
      if (bVar28) {
        iVar6 = iVar23 + 1;
      }
      if ((uVar16 != 0x73) || (bVar28 = true, iVar6 != 0x20)) {
        bVar28 = false;
      }
      if ((0x73 < uVar16) || (bVar28)) {
        local_798 = 0;
      }
      else {
        uVar8 = 0x72;
        local_798 = 0x72;
        if (uVar16 < 0x72) {
          uVar8 = uVar16;
          local_798 = uVar16;
        }
        for (; uVar8 != 0xffffffff; uVar8 = uVar8 - 1) {
          if (uVar8 < uVar16) {
            iVar23 = *(int *)((longlong)&local_794 + (ulonglong)uVar8 * 4);
          }
          else {
            iVar23 = 0;
          }
          if (uVar8 - 1 < uVar16) {
            uVar7 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar8 - 1) * 4);
          }
          else {
            uVar7 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar8 * 4) = uVar7 >> 0x1f ^ iVar23 * 2;
        }
        if (iVar6 == 0x20) {
          local_798 = local_798 + 1;
        }
      }
      uVar8 = local_798;
      uVar16 = 1U - iVar18 >> 5;
      FUN_1400115e0((undefined1 (*) [16])local_3f4,0,(ulonglong)uVar16 * 4);
      local_3f4[uVar16] = 1 << ((byte)(1U - iVar18) & 0x1f);
    }
    else {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      uVar22 = 2;
      local_3f8 = 2;
      if (uVar16 != 2) goto LAB_14001dcf7;
      do {
        if (local_3f4[uVar27] != *(uint *)((longlong)&local_794 + uVar27 * 4)) goto LAB_14001dcf7;
        uVar20 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar20;
      } while (uVar20 != 2);
      iVar23 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar23 == 0; iVar23 = iVar23 + -1) {
        }
      }
      local_7e0 = (uint *)((ulonglong)local_7e0._4_4_ << 0x20);
      if (uVar7 != 0) {
        iVar6 = iVar23 + 1;
      }
      do {
        uVar27 = (ulonglong)uVar22;
        if (uVar22 < 2) {
          iVar23 = *(int *)((longlong)&local_794 + uVar27 * 4);
        }
        else {
          iVar23 = 0;
        }
        if (uVar22 - 1 < 2) {
          uVar8 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar22 - 1) * 4);
        }
        else {
          uVar8 = 0;
        }
        uVar22 = uVar22 - 1;
        *(uint *)((longlong)&local_794 + uVar27 * 4) = uVar8 >> 0x1e ^ iVar23 << 2;
      } while (uVar22 != 0xffffffff);
      uVar8 = (0x20U - iVar6 < 2) + 2;
      uVar16 = 2U - iVar18 >> 5;
      local_798 = uVar8;
      FUN_1400115e0((undefined1 (*) [16])local_3f4,0,(ulonglong)uVar16 * 4);
      local_3f4[uVar16] = 1 << ((byte)(2U - iVar18) & 0x1f);
    }
    uStack_5c8 = uVar16 + 1;
    uVar26 = (ulonglong)uStack_5c8;
    uVar27 = (ulonglong)uVar8;
    local_3f8 = uStack_5c8;
    if (uVar26 != 0) {
      if (uVar26 << 2 < 0x1cd) {
        FUN_140013410((undefined8 *)auStack_5c4,(undefined8 *)local_3f4,uVar26 << 2);
      }
      else {
        FUN_1400115e0((undefined1 (*) [16])auStack_5c4,0,0x1cc);
        puVar9 = __doserrno();
        *puVar9 = 0x22;
        FUN_140013a44();
      }
      uVar26 = (ulonglong)uStack_5c8;
    }
  }
  else {
    local_3f4[1] = 0x100000;
    local_3f4[0] = 0;
    local_3f8 = 2;
    if (uVar16 == 2) {
      do {
        if (local_3f4[uVar27] != *(uint *)((longlong)&local_794 + uVar27 * 4)) goto LAB_14001da9a;
        uVar22 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar22;
      } while (uVar22 != 2);
      uVar22 = iVar18 + 2U & 0x1f;
      uVar8 = iVar18 + 2U >> 5;
      bVar12 = 0x20 - (sbyte)uVar22;
      uVar16 = (int)(1L << (bVar12 & 0x3f)) - 1;
      iVar18 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      if (uVar7 != 0) {
        iVar6 = iVar18 + 1;
      }
      uVar7 = uVar8 + 2;
      bVar28 = uVar22 <= 0x20U - iVar6;
      if ((uVar7 != 0x73) || (bVar3 = true, bVar28)) {
        bVar3 = false;
      }
      if ((0x73 < uVar7) || (bVar3)) {
        local_798 = 0;
      }
      else {
        local_798 = 0x72;
        if (uVar7 < 0x72) {
          local_798 = uVar7;
        }
        if (local_798 != 0xffffffff) {
          uVar7 = local_798 - uVar8;
          do {
            uVar20 = uVar7 + uVar8;
            if (uVar20 < uVar8) break;
            if (uVar7 < 2) {
              uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)uVar7 * 4);
            }
            else {
              uVar24 = 0;
            }
            if (uVar7 - 1 < 2) {
              uVar17 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar7 - 1) * 4);
            }
            else {
              uVar17 = 0;
            }
            uVar7 = uVar7 - 1;
            *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) =
                 (uVar17 & ~uVar16) >> (bVar12 & 0x1f) | (uVar24 & uVar16) << (sbyte)uVar22;
          } while (uVar7 + uVar8 != -1);
        }
        uVar27 = 0;
        if (uVar8 != 0) {
          do {
            uVar16 = (int)uVar27 + 1;
            *(undefined4 *)((longlong)&local_794 + uVar27 * 4) = 0;
            uVar27 = (ulonglong)uVar16;
          } while (uVar16 != uVar8);
        }
        if (!bVar28) {
          local_798 = local_798 + 1;
        }
      }
      auStack_5c4[0] = 4;
    }
    else {
LAB_14001da9a:
      uVar20 = iVar18 + 1U & 0x1f;
      uVar7 = iVar18 + 1U >> 5;
      bVar12 = 0x20 - (sbyte)uVar20;
      uVar22 = (int)(1L << (bVar12 & 0x3f)) - 1;
      puVar2 = (uint *)((longlong)&local_794 + (ulonglong)uVar8 * 4);
      iVar6 = 0x1f;
      bVar28 = *puVar2 == 0;
      if (!bVar28) {
        for (; *puVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (bVar28) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + 1;
      }
      uVar8 = uVar16 + uVar7;
      if ((uVar8 == 0x73) && (0x20U - iVar6 < uVar20)) {
        bVar28 = true;
      }
      else {
        bVar28 = false;
      }
      if ((0x73 < uVar8) || (bVar28)) {
        local_798 = 0;
      }
      else {
        local_798 = 0x72;
        if (uVar8 < 0x72) {
          local_798 = uVar8;
        }
        if (local_798 != 0xffffffff) {
          uVar8 = local_798 - uVar7;
          do {
            if (uVar8 + uVar7 < uVar7) break;
            if (uVar8 < uVar16) {
              uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)uVar8 * 4);
            }
            else {
              uVar24 = 0;
            }
            if (uVar8 - 1 < uVar16) {
              uVar17 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar8 - 1) * 4);
            }
            else {
              uVar17 = 0;
            }
            *(uint *)((longlong)&local_794 + (ulonglong)(uVar8 + uVar7) * 4) =
                 (uVar24 & uVar22) << (sbyte)uVar20 | (uVar17 & ~uVar22) >> (bVar12 & 0x1f);
            uVar8 = uVar8 - 1;
          } while (uVar8 + uVar7 != -1);
        }
        uVar27 = 0;
        if (uVar7 != 0) {
          do {
            uVar8 = (int)uVar27 + 1;
            *(undefined4 *)((longlong)&local_794 + uVar27 * 4) = 0;
            uVar27 = (ulonglong)uVar8;
          } while (uVar8 != uVar7);
        }
        if (0x20U - iVar6 < uVar20) {
          local_798 = local_798 + 1;
        }
      }
      auStack_5c4[0] = 2;
    }
    local_7e0 = (uint *)((ulonglong)local_7e0._4_4_ << 0x20);
    uVar27 = (ulonglong)local_798;
    uVar26 = 1;
    uStack_5c8 = 1;
    local_3f8 = 1;
    local_3f4[1] = 0;
  }
  uVar8 = (uint)uVar26;
  uVar16 = (uint)uVar27;
  if ((int)uVar25 < 0) {
    uStack_7d4 = -uVar25;
    uVar26 = (ulonglong)uStack_7d4 / 10;
    uStack_7d8 = (uint)uVar26;
    local_7e0 = (uint *)CONCAT44(local_7e0._4_4_,uStack_7d8);
    uVar7 = uStack_7d8;
    if (uStack_7d8 != 0) {
      do {
        uVar7 = (uint)uVar26;
        uVar22 = uVar7;
        if (0x26 < uVar7) {
          uVar22 = 0x26;
        }
        uVar16 = uVar22 - 1;
        bVar12 = (&DAT_1400264c2)[(ulonglong)uVar16 * 4];
        bVar1 = (&DAT_1400264c3)[(ulonglong)uVar16 * 4];
        local_3f8 = (uint)bVar1 + (uint)bVar12;
        uStack_7d0 = uVar22;
        FUN_1400115e0((undefined1 (*) [16])local_3f4,0,(ulonglong)bVar12 * 4);
        FUN_140013410((undefined8 *)(local_3f4 + bVar12),
                      (undefined8 *)
                      (&DAT_140025bb0 +
                      (ulonglong)*(ushort *)(&DAT_1400264c0 + (ulonglong)uVar16 * 4) * 4),
                      (ulonglong)bVar1 << 2);
        uVar26 = (ulonglong)local_3f8;
        uVar16 = (uint)uVar27;
        if (local_3f8 < 2) {
          uVar26 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_14001e397:
            uVar27 = 0;
LAB_14001e39a:
            local_798 = (uint)uVar27;
            goto LAB_14001e671;
          }
          if ((local_3f4[0] == 1) || (uVar16 == 0)) goto LAB_14001e671;
          uVar27 = 0;
          uVar14 = 0;
          do {
            uVar15 = *(uint *)((longlong)&local_794 + uVar14 * 4) * uVar26 + uVar27;
            *(int *)((longlong)&local_794 + uVar14 * 4) = (int)uVar15;
            uVar27 = uVar15 >> 0x20;
            iVar6 = (int)(uVar15 >> 0x20);
            uVar20 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar20;
          } while (uVar20 != uVar16);
LAB_14001e3e1:
          if (iVar6 == 0) {
            uVar27 = (ulonglong)local_798;
            goto LAB_14001e671;
          }
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar6;
            uVar27 = (ulonglong)(local_798 + 1);
            goto LAB_14001e39a;
          }
          uVar27 = 0;
          local_798 = 0;
          bVar28 = false;
        }
        else {
          if (uVar16 < 2) {
            uVar16 = (uint)local_794;
            uVar14 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            uVar27 = uVar26;
            if (uVar26 != 0) {
              if (uVar26 << 2 < 0x1cd) {
                FUN_140013410(&local_794,(undefined8 *)local_3f4,uVar26 << 2);
              }
              else {
                FUN_1400115e0((undefined1 (*) [16])&local_794,0,0x1cc);
                puVar9 = __doserrno();
                *puVar9 = 0x22;
                FUN_140013a44();
              }
              uVar27 = (ulonglong)local_798;
            }
            if (uVar16 == 0) goto LAB_14001e397;
            if ((uVar16 != 1) && ((uint)uVar27 != 0)) {
              uVar26 = 0;
              uVar15 = 0;
              do {
                uVar13 = *(uint *)((longlong)&local_794 + uVar15 * 4) * uVar14 + uVar26;
                *(int *)((longlong)&local_794 + uVar15 * 4) = (int)uVar13;
                uVar26 = uVar13 >> 0x20;
                iVar6 = (int)(uVar13 >> 0x20);
                uVar16 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar16;
              } while (uVar16 != (uint)uVar27);
              goto LAB_14001e3e1;
            }
          }
          else {
            bVar28 = uVar16 <= local_3f8;
            puVar2 = (uint *)&local_794;
            uVar7 = local_3f8;
            if (!bVar28) {
              uVar7 = uVar16;
              puVar2 = local_3f4;
              uVar16 = local_3f8;
            }
            local_7c0 = (uint *)&local_794;
            if (bVar28) {
              local_7c0 = local_3f4;
            }
            uVar27 = 0;
            uVar26 = 0;
            uStack_228 = 0;
            if (uVar16 != 0) {
              do {
                uVar22 = puVar2[uVar26];
                iVar6 = (int)uVar26;
                if (uVar22 == 0) {
                  if (iVar6 == (int)uVar27) {
                    auStack_224[uVar26] = 0;
                    uVar27 = (ulonglong)(iVar6 + 1U);
                    uStack_228 = iVar6 + 1U;
                  }
                }
                else {
                  uVar14 = 0;
                  if (uVar7 != 0) {
                    do {
                      iVar18 = (int)uVar26;
                      uVar15 = uVar26;
                      if (iVar18 == 0x73) break;
                      if (iVar18 == (int)uVar27) {
                        auStack_224[uVar26] = 0;
                        uStack_228 = iVar18 + 1;
                      }
                      uVar15 = (ulonglong)(iVar18 + 1U);
                      uVar14 = (ulonglong)local_7c0[(uint)(-iVar6 + iVar18)] * (ulonglong)uVar22 +
                               (ulonglong)auStack_224[uVar26] + uVar14;
                      auStack_224[uVar26] = (uint)uVar14;
                      uVar27 = (ulonglong)uStack_228;
                      uVar14 = uVar14 >> 0x20;
                      uVar26 = uVar15;
                    } while (-iVar6 + iVar18 + 1U != uVar7);
                    uVar22 = (uint)uVar14;
                    uVar26 = uVar15;
                    while (uVar22 != 0) {
                      iVar18 = (int)uVar26;
                      if (iVar18 == 0x73) goto LAB_14001e718;
                      if (iVar18 == (int)uVar27) {
                        auStack_224[uVar26] = 0;
                        uStack_228 = iVar18 + 1;
                      }
                      uVar22 = auStack_224[uVar26];
                      auStack_224[uVar26] = (uint)(uVar22 + uVar14);
                      uVar27 = (ulonglong)uStack_228;
                      uVar22 = (uint)(uVar22 + uVar14 >> 0x20);
                      uVar14 = (ulonglong)uVar22;
                      uVar26 = (ulonglong)(iVar18 + 1);
                    }
                  }
                  if ((int)uVar26 == 0x73) goto LAB_14001e718;
                }
                uVar26 = (ulonglong)(iVar6 + 1U);
              } while (iVar6 + 1U != uVar16);
            }
            local_798 = (uint)uVar27;
            uVar7 = uStack_7d8;
            uVar22 = uStack_7d0;
            if (uVar27 != 0) {
              if (uVar27 << 2 < 0x1cd) {
                FUN_140013410(&local_794,(undefined8 *)auStack_224,uVar27 << 2);
              }
              else {
                FUN_1400115e0((undefined1 (*) [16])&local_794,0,0x1cc);
                puVar9 = __doserrno();
                *puVar9 = 0x22;
                FUN_140013a44();
              }
              uVar27 = (ulonglong)local_798;
              uVar7 = uStack_7d8;
              uVar22 = uStack_7d0;
            }
          }
LAB_14001e671:
          bVar28 = true;
        }
        uVar16 = (uint)uVar27;
        if (!bVar28) goto LAB_14001e718;
        uStack_7d8 = uVar7 - uVar22;
        uVar26 = (ulonglong)uStack_7d8;
      } while (uStack_7d8 != 0);
      uVar7 = (uint)local_7e0;
    }
    uVar27 = 0;
    iVar6 = uStack_7d4 + uVar7 * -10;
    if (iVar6 == 0) goto LAB_14001e743;
    uVar7 = *(uint *)(&DAT_140026558 + (ulonglong)(iVar6 - 1) * 4);
    if (uVar7 != 0) {
      if ((uVar7 != 1) && (uVar16 != 0)) {
        uVar26 = uVar27;
        do {
          uVar22 = (int)uVar26 + 1;
          uVar14 = (ulonglong)*(uint *)((longlong)&local_794 + uVar26 * 4) * (ulonglong)uVar7 +
                   uVar27;
          *(int *)((longlong)&local_794 + uVar26 * 4) = (int)uVar14;
          uVar27 = uVar14 >> 0x20;
          uVar26 = (ulonglong)uVar22;
        } while (uVar22 != uVar16);
        iVar6 = (int)(uVar14 >> 0x20);
        uVar16 = local_798;
        if (iVar6 != 0) {
          if (0x72 < local_798) {
            local_798 = 0;
            pcVar21 = local_7c8;
            goto LAB_14001e7b4;
          }
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar6;
          local_798 = local_798 + 1;
          uVar16 = local_798;
        }
      }
      goto LAB_14001e743;
    }
LAB_14001e718:
    local_798 = 0;
    pcVar21 = local_7c8;
  }
  else {
    uVar27 = (ulonglong)uVar25 / 10;
    uStack_7d8 = (uint)uVar27;
    uStack_7d0 = uStack_7d8;
    while (uStack_7d8 != 0) {
      uVar7 = (uint)uVar27;
      uVar22 = uVar7;
      if (0x26 < uVar7) {
        uVar22 = 0x26;
      }
      uVar8 = uVar22 - 1;
      bVar12 = (&DAT_1400264c2)[(ulonglong)uVar8 * 4];
      bVar1 = (&DAT_1400264c3)[(ulonglong)uVar8 * 4];
      local_3f8 = (uint)bVar1 + (uint)bVar12;
      uStack_7d4 = uVar22;
      FUN_1400115e0((undefined1 (*) [16])local_3f4,0,(ulonglong)bVar12 * 4);
      FUN_140013410((undefined8 *)(local_3f4 + bVar12),
                    (undefined8 *)
                    (&DAT_140025bb0 +
                    (ulonglong)*(ushort *)(&DAT_1400264c0 + (ulonglong)uVar8 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      uVar20 = auStack_5c4[0];
      uVar27 = (ulonglong)local_3f8;
      uVar8 = (uint)uVar26;
      if (local_3f8 < 2) {
        uVar27 = (ulonglong)local_3f4[0];
        if (local_3f4[0] == 0) {
LAB_14001ded3:
          uVar26 = 0;
LAB_14001ded6:
          uStack_5c8 = (uint)uVar26;
          goto LAB_14001e1eb;
        }
        if ((local_3f4[0] == 1) || (uVar8 == 0)) goto LAB_14001e1eb;
        uVar26 = 0;
        uVar14 = 0;
        do {
          uVar15 = auStack_5c4[uVar14] * uVar27 + uVar26;
          auStack_5c4[uVar14] = (uint)uVar15;
          uVar26 = uVar15 >> 0x20;
          uVar20 = (uint)(uVar15 >> 0x20);
          uVar24 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar24;
        } while (uVar24 != uVar8);
LAB_14001df26:
        if (uVar20 == 0) {
          uVar26 = (ulonglong)uStack_5c8;
          goto LAB_14001e1eb;
        }
        if (uStack_5c8 < 0x73) {
          auStack_5c4[uStack_5c8] = uVar20;
          uVar26 = (ulonglong)(uStack_5c8 + 1);
          goto LAB_14001ded6;
        }
        uVar26 = 0;
        uStack_5c8 = 0;
        bVar28 = false;
      }
      else {
        if (uVar8 < 2) {
          uVar14 = (ulonglong)auStack_5c4[0];
          uStack_5c8 = local_3f8;
          uVar26 = uVar27;
          if (uVar27 != 0) {
            if (uVar27 << 2 < 0x1cd) {
              FUN_140013410((undefined8 *)auStack_5c4,(undefined8 *)local_3f4,uVar27 << 2);
            }
            else {
              FUN_1400115e0((undefined1 (*) [16])auStack_5c4,0,0x1cc);
              puVar9 = __doserrno();
              *puVar9 = 0x22;
              FUN_140013a44();
            }
            uVar26 = (ulonglong)uStack_5c8;
          }
          if (uVar20 == 0) goto LAB_14001ded3;
          if ((uVar20 != 1) && ((uint)uVar26 != 0)) {
            uVar27 = 0;
            uVar15 = 0;
            do {
              uVar13 = auStack_5c4[uVar15] * uVar14 + uVar27;
              auStack_5c4[uVar15] = (uint)uVar13;
              uVar27 = uVar13 >> 0x20;
              uVar20 = (uint)(uVar13 >> 0x20);
              uVar8 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar8;
            } while (uVar8 != (uint)uVar26);
            goto LAB_14001df26;
          }
        }
        else {
          bVar28 = uVar8 <= local_3f8;
          puVar2 = auStack_5c4;
          uVar7 = local_3f8;
          if (!bVar28) {
            uVar7 = uVar8;
            puVar2 = local_3f4;
            uVar8 = local_3f8;
          }
          local_7e0 = auStack_5c4;
          if (bVar28) {
            local_7e0 = local_3f4;
          }
          uVar26 = 0;
          uVar27 = 0;
          uStack_228 = 0;
          if (uVar8 != 0) {
            do {
              uVar22 = puVar2[uVar27];
              iVar6 = (int)uVar27;
              if (uVar22 == 0) {
                if (iVar6 == (int)uVar26) {
                  auStack_224[uVar27] = 0;
                  uVar26 = (ulonglong)(iVar6 + 1U);
                  uStack_228 = iVar6 + 1U;
                }
              }
              else {
                uVar14 = 0;
                if (uVar7 != 0) {
                  do {
                    iVar18 = (int)uVar27;
                    uVar15 = uVar27;
                    if (iVar18 == 0x73) break;
                    if (iVar18 == (int)uVar26) {
                      auStack_224[uVar27] = 0;
                      uStack_228 = iVar18 + 1;
                    }
                    uVar15 = (ulonglong)(iVar18 + 1U);
                    uVar14 = (ulonglong)local_7e0[(uint)(-iVar6 + iVar18)] * (ulonglong)uVar22 +
                             uVar14 + (ulonglong)auStack_224[uVar27];
                    auStack_224[uVar27] = (uint)uVar14;
                    uVar26 = (ulonglong)uStack_228;
                    uVar14 = uVar14 >> 0x20;
                    uVar27 = uVar15;
                  } while (-iVar6 + iVar18 + 1U != uVar7);
                  uVar22 = (uint)uVar14;
                  uVar27 = uVar15;
                  while (uVar22 != 0) {
                    iVar18 = (int)uVar27;
                    if (iVar18 == 0x73) goto LAB_14001e2ad;
                    if (iVar18 == (int)uVar26) {
                      auStack_224[uVar27] = 0;
                      uStack_228 = iVar18 + 1;
                    }
                    uVar22 = auStack_224[uVar27];
                    auStack_224[uVar27] = (uint)(uVar14 + uVar22);
                    uVar26 = (ulonglong)uStack_228;
                    uVar22 = (uint)(uVar14 + uVar22 >> 0x20);
                    uVar14 = (ulonglong)uVar22;
                    uVar27 = (ulonglong)(iVar18 + 1);
                  }
                }
                if ((int)uVar27 == 0x73) goto LAB_14001e2ad;
              }
              uVar27 = (ulonglong)(iVar6 + 1U);
            } while (iVar6 + 1U != uVar8);
          }
          uStack_5c8 = (uint)uVar26;
          uVar7 = uStack_7d8;
          uVar22 = uStack_7d4;
          if (uVar26 != 0) {
            if (uVar26 << 2 < 0x1cd) {
              FUN_140013410((undefined8 *)auStack_5c4,(undefined8 *)auStack_224,uVar26 << 2);
            }
            else {
              FUN_1400115e0((undefined1 (*) [16])auStack_5c4,0,0x1cc);
              puVar9 = __doserrno();
              *puVar9 = 0x22;
              FUN_140013a44();
            }
            uVar26 = (ulonglong)uStack_5c8;
            uVar7 = uStack_7d8;
            uVar22 = uStack_7d4;
          }
        }
LAB_14001e1eb:
        bVar28 = true;
      }
      uVar8 = (uint)uVar26;
      if (!bVar28) {
LAB_14001e2ad:
        uStack_5c8 = 0;
        uVar8 = 0;
        goto LAB_14001e743;
      }
      uStack_7d8 = uVar7 - uVar22;
      uVar27 = (ulonglong)uStack_7d8;
    }
    uVar27 = 0;
    iVar6 = uVar25 + uStack_7d0 * -10;
    if (iVar6 != 0) {
      uVar7 = *(uint *)(&DAT_140026558 + (ulonglong)(iVar6 - 1) * 4);
      if (uVar7 == 0) {
LAB_14001e2bf:
        uStack_5c8 = 0;
        uVar8 = 0;
      }
      else if ((uVar7 != 1) && (uVar8 != 0)) {
        uVar26 = uVar27;
        do {
          uVar22 = (int)uVar26 + 1;
          uVar14 = (ulonglong)auStack_5c4[uVar26] * (ulonglong)uVar7 + uVar27;
          auStack_5c4[uVar26] = (uint)uVar14;
          uVar27 = uVar14 >> 0x20;
          uVar26 = (ulonglong)uVar22;
        } while (uVar22 != uVar8);
        uVar7 = (uint)(uVar14 >> 0x20);
        uVar8 = uStack_5c8;
        if (uVar7 != 0) {
          if (0x72 < uStack_5c8) goto LAB_14001e2bf;
          auStack_5c4[uStack_5c8] = uVar7;
          uStack_5c8 = uStack_5c8 + 1;
          uVar8 = uStack_5c8;
        }
      }
    }
LAB_14001e743:
    pcVar21 = local_7c8;
    uVar26 = 0;
    uVar27 = uVar26;
    if (uVar16 != 0) {
      do {
        uVar7 = (int)uVar27 + 1;
        uVar14 = uVar26 + (ulonglong)*(uint *)((longlong)&local_794 + uVar27 * 4) * 10;
        *(int *)((longlong)&local_794 + uVar27 * 4) = (int)uVar14;
        uVar26 = uVar14 >> 0x20;
        uVar27 = (ulonglong)uVar7;
      } while (uVar7 != uVar16);
      iVar6 = (int)(uVar14 >> 0x20);
      if (iVar6 != 0) {
        if (local_798 < 0x73) {
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar6;
          local_798 = local_798 + 1;
        }
        else {
          local_3f8 = 0;
          local_798 = 0;
          memcpy_s(&local_794,0x1cc,local_3f4,0);
        }
      }
    }
  }
LAB_14001e7b4:
  uVar27 = 0;
  _Var10 = __crt_strtox::divide((big_integer *)&local_798,(big_integer *)&uStack_5c8);
  if ((int)_Var10 == 10) {
    uVar25 = uVar25 + 1;
    *pcVar21 = '1';
    pcVar19 = pcVar21 + 1;
    uVar26 = uVar27;
    uVar14 = uVar27;
    if (uVar8 != 0) {
      do {
        uVar16 = (int)uVar14 + 1;
        uVar15 = uVar26 + (ulonglong)auStack_5c4[uVar14] * 10;
        auStack_5c4[uVar14] = (uint)uVar15;
        uVar26 = uVar15 >> 0x20;
        uVar14 = (ulonglong)uVar16;
      } while (uVar16 != uVar8);
      uVar8 = (uint)(uVar15 >> 0x20);
      if (uVar8 != 0) {
        if (uStack_5c8 < 0x73) {
          auStack_5c4[uStack_5c8] = uVar8;
          uStack_5c8 = uStack_5c8 + 1;
        }
        else {
          local_3f8 = 0;
          uStack_5c8 = 0;
          memcpy_s(auStack_5c4,0x1cc,local_3f4,0);
        }
      }
    }
  }
  else if ((int)_Var10 == 0) {
    uVar25 = uVar25 - 1;
    pcVar19 = pcVar21;
  }
  else {
    pcVar19 = pcVar21 + 1;
    *pcVar21 = (char)_Var10 + '0';
  }
  local_7a8[1] = uVar25;
  uVar8 = local_7cc;
  if ((-1 < (int)uVar25) && (local_7cc < 0x80000000)) {
    uVar8 = local_7cc + uVar25;
  }
  uVar26 = (ulonglong)uVar8;
  if (param_5 - 1 < (ulonglong)uVar8) {
    uVar26 = param_5 - 1;
  }
  pcVar21 = pcVar21 + uVar26;
  while ((pcVar19 != pcVar21 && (uVar26 = uVar27, uVar14 = uVar27, local_798 != 0))) {
    do {
      uVar8 = (int)uVar14 + 1;
      uVar15 = (ulonglong)*(uint *)((longlong)&local_794 + uVar14 * 4) * 1000000000 + uVar26;
      *(int *)((longlong)&local_794 + uVar14 * 4) = (int)uVar15;
      uVar26 = uVar15 >> 0x20;
      uVar14 = (ulonglong)uVar8;
    } while (uVar8 != local_798);
    iVar6 = (int)(uVar15 >> 0x20);
    if (iVar6 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar6;
        local_798 = local_798 + 1;
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
    }
    _Var10 = __crt_strtox::divide((big_integer *)&local_798,(big_integer *)&uStack_5c8);
    uVar8 = 8;
    do {
      uVar26 = (_Var10 & 0xffffffff) / 10;
      if (uVar8 <= (uint)((int)pcVar21 - (int)pcVar19)) {
        pcVar19[uVar8] = (char)_Var10 + (char)uVar26 * -10 + '0';
      }
      uVar8 = uVar8 - 1;
      _Var10 = uVar26;
    } while (uVar8 != 0xffffffff);
    lVar11 = (longlong)pcVar21 - (longlong)pcVar19;
    if (9 < lVar11) {
      lVar11 = 9;
    }
    pcVar19 = pcVar19 + lVar11;
  }
  *pcVar19 = '\0';
LAB_14001ea0e:
  if (local_7b0 != '\0') {
    fesetenv(local_7b8);
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_818);
  return;
}




/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Debug,
   Visual Studio 2015 Release */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (_MaxCount == 0) {
LAB_14001eac9:
    uVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_14001ead2:
      puVar1 = __doserrno();
      uVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_140013410((undefined8 *)_Dst,(undefined8 *)_Src,_MaxCount);
        goto LAB_14001eac9;
      }
      FUN_1400115e0((undefined1 (*) [16])_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_14001ead2;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      puVar1 = __doserrno();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    FUN_140013a44();
  }
  return uVar2;
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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1400338c0)) {
      return *(byte *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 +
                      (ulonglong)(_FileHandle & 0x3f) * 0x40) & 0x40;
    }
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_140013a44();
  }
  return 0;
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
    puVar6 = (ushort *)(&PTR_DAT_140028000)[(longlong)iVar1 * 2];
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
  return *(int *)(&UNK_140028008 + (longlong)iVar1 * 0x10);
}




/* Library Function - Single Match
    __acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2015 Release */

undefined4 __acrt_DownlevelLocaleNameToLCID(wchar_t *param_1)

{
  int iVar1;
  
  if (((param_1 != (wchar_t *)0x0) && (iVar1 = GetTableIndexFromLocaleName(param_1), -1 < iVar1)) &&
     ((ulonglong)(longlong)iVar1 < 0xe4)) {
    return *(undefined4 *)(&DAT_1400265a0 + (longlong)iVar1 * 0x10);
  }
  return 0;
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
    FUN_140013a44();
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
    FUN_140013a44();
  }
  else {
    if ((*(uint *)((longlong)&_File->_base + 4) >> 0xc & 1) == 0) {
      FUN_140016e18((longlong)_File);
      iVar1 = _fclose_nolock(_File);
      FUN_140016e24((longlong)_File);
      return iVar1;
    }
    __acrt_stdio_free_stream();
  }
  return -1;
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
  if ((*(byte *)((&DAT_1400334c0)[(longlong)(int)_FileHandle >> 6] + 0x38 +
                (ulonglong)(_FileHandle & 0x3f) * 0x40) & 1) != 0) {
    hFile = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    iVar4 = 0;
    if (BVar1 != 0) goto LAB_14001edf8;
    puVar3 = __doserrno();
    DVar2 = GetLastError();
    *puVar3 = DVar2;
  }
  puVar3 = __doserrno();
  *puVar3 = 9;
  iVar4 = -1;
LAB_14001edf8:
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
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1400338c0)) &&
       ((*(byte *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 +
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
    FUN_140013a44();
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
  local_48 = DAT_140032008 ^ (ulonglong)auStackY_b8;
  lVar14 = (longlong)(int)(uint)param_2 >> 6;
  lVar10 = (ulonglong)((uint)param_2 & 0x3f) * 0x40;
  pbVar13 = pbVar11 + (in_R9 & 0xffffffff);
  local_68 = *(HANDLE *)((&DAT_1400334c0)[lVar14] + 0x28 + lVar10);
  local_60 = pbVar11;
  local_6c = GetConsoleCP();
  pDVar8[0] = 0;
  pDVar8[1] = 0;
  pDVar8[2] = 0;
LAB_14001ef14:
  if (pbVar13 <= pbVar11) {
LAB_14001f07e:
    __security_check_cookie(local_48 ^ (ulonglong)auStackY_b8);
    return;
  }
  bVar1 = *pbVar11;
  local_78[0] = L'\0';
  lVar3 = (&DAT_1400334c0)[lVar14];
  bVar2 = *(byte *)(lVar3 + 0x3d + lVar10);
  if ((bVar2 & 4) == 0) {
    puVar7 = __pctype_func();
    if ((puVar7[*pbVar11] & 0x8000) == 0) {
      sVar12 = 1;
      pbVar9 = pbVar11;
      goto LAB_14001ef98;
    }
    if (pbVar13 <= pbVar11) {
      *(byte *)((&DAT_1400334c0)[lVar14] + 0x3e + lVar10) = *pbVar11;
      pbVar11 = (byte *)((&DAT_1400334c0)[lVar14] + 0x3d + lVar10);
      *pbVar11 = *pbVar11 | 4;
      pDVar8[1] = pDVar8[1] + 1;
      goto LAB_14001f07e;
    }
    iVar4 = FUN_1400191d8(local_78,(char *)pbVar11,2);
    if (iVar4 == -1) goto LAB_14001f07e;
    pbVar11 = pbVar11 + 1;
  }
  else {
    local_58 = *(byte *)(lVar3 + 0x3e + lVar10);
    *(byte *)(lVar3 + 0x3d + lVar10) = bVar2 & 0xfb;
    sVar12 = 2;
    pbVar9 = &local_58;
    local_57 = bVar1;
LAB_14001ef98:
    iVar4 = FUN_1400191d8(local_78,(char *)pbVar9,sVar12);
    if (iVar4 == -1) goto LAB_14001f07e;
  }
  pbVar11 = pbVar11 + 1;
  nNumberOfBytesToWrite =
       WideCharToMultiByte(local_6c,0,local_78,1,local_50,5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (nNumberOfBytesToWrite != 0) {
    BVar5 = WriteFile(local_68,local_50,nNumberOfBytesToWrite,&local_70,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) goto LAB_14001f076;
    pDVar8[1] = (pDVar8[2] - (int)local_60) + (int)pbVar11;
    if (nNumberOfBytesToWrite <= local_70) goto code_r0x00014001f01c;
  }
  goto LAB_14001f07e;
code_r0x00014001f01c:
  if (bVar1 == 10) {
    local_74[0] = 0xd;
    BVar5 = WriteFile(local_68,local_74,1,&local_70,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
LAB_14001f076:
      DVar6 = GetLastError();
      *pDVar8 = DVar6;
      goto LAB_14001f07e;
    }
    if (local_70 == 0) goto LAB_14001f07e;
    pDVar8[2] = pDVar8[2] + 1;
    pDVar8[1] = pDVar8[1] + 1;
  }
  goto LAB_14001ef14;
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
  uStack_20 = 0x14001f0c0;
  local_28 = DAT_140032008 ^ (ulonglong)auStackY_1468;
  pcVar6 = pcVar7 + (in_R9 & 0xffffffff);
  *pDVar5 = 0;
  pDVar5[1] = 0;
  lVar2 = (&DAT_1400334c0)[(longlong)(int)(uint)param_2 >> 6];
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
  uStack_20 = 0x14001f1c8;
  local_28 = DAT_140032008 ^ (ulonglong)auStackY_1468;
  psVar7 = (short *)((in_R9 & 0xffffffff) + (longlong)psVar8);
  *pDVar5 = 0;
  pDVar5[1] = 0;
  lVar2 = (&DAT_1400334c0)[(longlong)(int)(uint)param_2 >> 6];
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
  uStack_30 = 0x14001f2e8;
  local_38 = DAT_140032008 ^ (ulonglong)auStackY_1498;
  pWVar10 = (WCHAR *)((ulonglong)in_R9D + (longlong)pWVar9);
  hFile = *(HANDLE *)
           ((&DAT_1400334c0)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x40);
  *pDVar6 = 0;
  pDVar6[1] = 0;
  pDVar6[2] = 0;
  do {
    if (pWVar10 <= pWVar9) {
LAB_14001f40f:
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
LAB_14001f407:
      DVar4 = GetLastError();
      *pDVar6 = DVar4;
      goto LAB_14001f40f;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        BVar3 = WriteFile(hFile,local_d98 + uVar8,uVar2 - (int)uVar8,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_14001f407;
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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1400338c0)) {
      lVar3 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
      if ((*(byte *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 + lVar3) & 1) != 0) {
        FID_conflict___acrt_lowio_lock_fh(_FileHandle);
        iVar1 = -1;
        if ((*(byte *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 + lVar3) & 1) == 0) {
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
    FUN_140013a44();
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
LAB_14001f55f:
    puVar7 = __doserrno();
    *puVar7 = 0;
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_140013a44();
    return -1;
  }
  lVar13 = (longlong)_FileHandle >> 6;
  lVar14 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
  cVar1 = *(char *)((&DAT_1400334c0)[lVar13] + 0x39 + lVar14);
  local_48 = lVar13;
  if (((byte)(cVar1 - 1U) < 2) && ((~_MaxCharCount & 1) == 0)) goto LAB_14001f55f;
  if ((*(byte *)((&DAT_1400334c0)[lVar13] + 0x38 + lVar14) & 0x20) != 0) {
    common_lseek_nolock<__int64>(_FileHandle,0,2);
  }
  local_58 = 0;
  iVar5 = _isatty(_FileHandle);
  uVar12 = (uint)_Buf;
  if ((((iVar5 == 0) || ((*(byte *)((&DAT_1400334c0)[lVar13] + 0x38 + lVar14) & 0x80) == 0)) ||
      ((p_Var8 = __acrt_getptd(), *(longlong *)(*(longlong *)(p_Var8 + 0x90) + 0x138) == 0 &&
       (*(char *)((&DAT_1400334c0)[lVar13] + 0x39 + lVar14) == '\0')))) ||
     (BVar6 = GetConsoleMode(*(HANDLE *)((&DAT_1400334c0)[lVar13] + 0x28 + lVar14),local_40),
     BVar6 == 0)) {
    if ((*(byte *)((&DAT_1400334c0)[lVar13] + 0x38 + lVar14) & 0x80) != 0) {
      if (cVar1 == '\0') {
        puVar9 = (undefined8 *)
                 write_text_ansi_nolock((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
      }
      else if (cVar1 == '\x01') {
        puVar9 = (undefined8 *)
                 write_text_utf8_nolock((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
      }
      else {
        if (cVar1 != '\x02') goto LAB_14001f77c;
        puVar9 = (undefined8 *)
                 write_text_utf16le_nolock
                           ((int)&local_68,(char *)(ulonglong)(uint)_FileHandle,uVar12);
      }
      goto LAB_14001f6d3;
    }
    local_68 = 0;
    DStack_64 = 0;
    local_60 = 0;
    BVar6 = WriteFile(*(HANDLE *)((&DAT_1400334c0)[lVar13] + 0x28 + lVar14),_Buf,_MaxCharCount,
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
LAB_14001f6d3:
      local_58 = *puVar9;
      iVar10 = *(int *)(puVar9 + 1);
      goto LAB_14001f77c;
    }
    if (1 < (byte)(cVar1 - 1U)) goto LAB_14001f77c;
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
LAB_14001f6af:
          local_68 = GetLastError();
          lVar13 = local_48;
          iVar10 = iVar11;
          break;
        }
        DStack_64 = DVar2 + 2;
        if (_WCh == L'\n') {
          wVar4 = _putwch_nolock(L'\r');
          if (wVar4 != 0xd) goto LAB_14001f6af;
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
LAB_14001f77c:
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
  if (((*(byte *)((&DAT_1400334c0)[lVar13] + 0x38 + lVar14) & 0x40) != 0) && (*_Buf == '\x1a')) {
    return 0;
  }
  puVar7 = __doserrno();
  *puVar7 = 0x1c;
  puVar7 = __doserrno();
  *puVar7 = 0;
  return -1;
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
  
  local_58 = DAT_140032008 ^ (ulonglong)auStack_458;
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_140013a44();
  }
  else if (1 < _NumOfElements) {
    lVar10 = 0;
    pcVar11 = (char *)((_NumOfElements - 1) * _SizeOfElements + (longlong)_Base);
LAB_14001f971:
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
LAB_14001fa80:
      if (pcVar6 < pcVar7) {
        do {
          pcVar6 = pcVar6 + _SizeOfElements;
          if (pcVar7 <= pcVar6) goto LAB_14001faa8;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar6,pcVar7);
        } while (iVar3 < 1);
        if (pcVar7 <= pcVar6) goto LAB_14001faa8;
      }
      else {
LAB_14001faa8:
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
        goto LAB_14001fa80;
      }
      pcVar8 = pcVar8 + _SizeOfElements;
      if (pcVar7 < pcVar8) {
        do {
          pcVar8 = pcVar8 + -_SizeOfElements;
          if (pcVar8 <= pcVar7) goto LAB_14001fb54;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar8,pcVar7);
        } while (iVar3 == 0);
        if (pcVar8 <= pcVar7) goto LAB_14001fb54;
      }
      else {
LAB_14001fb54:
        do {
          pcVar8 = pcVar8 + -_SizeOfElements;
          if (pcVar8 <= _Base) break;
          _guard_check_icall();
          iVar3 = (*_PtFuncCompare)(pcVar8,pcVar7);
        } while (iVar3 == 0);
      }
      if ((longlong)pcVar8 - (longlong)_Base < (longlong)pcVar11 - (longlong)pcVar6)
      goto LAB_14001fba9;
      if (_Base < pcVar8) {
        auStack_438[lVar10] = _Base;
        auStack_248[lVar10] = pcVar8;
        lVar10 = lVar10 + 1;
      }
      _Base = pcVar6;
      if (pcVar11 <= pcVar6) goto LAB_14001f997;
    }
    shortsort((char *)_Base,pcVar11,_SizeOfElements,(_func_int_void_ptr_void_ptr *)_PtFuncCompare);
    goto LAB_14001f997;
  }
LAB_14001fbf7:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_458);
  return;
LAB_14001fba9:
  if (pcVar6 < pcVar11) {
    auStack_438[lVar10] = pcVar6;
    auStack_248[lVar10] = pcVar11;
    lVar10 = lVar10 + 1;
  }
  pcVar11 = pcVar8;
  if (pcVar8 <= _Base) {
LAB_14001f997:
    lVar10 = lVar10 + -1;
    if (-1 < lVar10) {
      _Base = (char *)auStack_438[lVar10];
      pcVar11 = (char *)auStack_248[lVar10];
      goto LAB_14001f971;
    }
    goto LAB_14001fbf7;
  }
  goto LAB_14001f971;
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
    FUN_140013a44();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001fc5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar2 = HeapSize(DAT_140033cf0,0,_Memory);
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
          pvVar2 = HeapReAlloc(DAT_140033cf0,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_140017c24();
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
    fegetenv
   
   Library: Visual Studio 2015 Release */

undefined8 fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = _getfpcontrolword();
  *param_1 = uVar1;
  uVar1 = _getfpstatusword();
  param_1[1] = uVar1;
  return 0;
}




/* Library Function - Single Match
    fesetenv
   
   Library: Visual Studio 2015 Release */

undefined8 fesetenv(uint *param_1)

{
  undefined8 uVar1;
  uint local_res8;
  uint local_resc;
  
  local_res8 = 0;
  local_resc = 0;
  FUN_140020760(*param_1);
  _setfpstatusword((ulonglong)param_1[1]);
  fegetenv(&local_res8);
  if ((*param_1 == local_res8) && (param_1[1] == local_resc)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




/* Library Function - Single Match
    feholdexcept
   
   Library: Visual Studio 2015 Release */

undefined8 feholdexcept(undefined8 *param_1)

{
  undefined8 uVar1;
  uint local_res10;
  undefined4 uStackX_14;
  
  local_res10 = 0;
  uStackX_14 = 0;
  uVar1 = fegetenv(&local_res10);
  if ((int)uVar1 == 0) {
    uVar1 = CONCAT44(uStackX_14,local_res10);
    local_res10 = local_res10 | 0x1f;
    *param_1 = uVar1;
    uVar1 = fesetenv(&local_res10);
    if ((int)uVar1 == 0) {
      _clearfp();
      return 0;
    }
  }
  return 1;
}




/* Library Function - Single Match
    ceil
   
   Library: Visual Studio 2015 Release */

double __cdecl ceil(double _X)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS(_X);
  dVar2 = _X;
  if ((ulonglong)dVar1 < 0x4340000000000000) {
    if ((ulonglong)dVar1 < 0x3ff0000000000000) {
      if (dVar1 != 0.0) {
        if (_X == dVar1) {
          dVar2 = 1.0;
        }
        else {
          dVar2 = -0.0;
        }
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)((ulonglong)_X >> 0x34) & 0x3f)) - 1U) &
                      (ulonglong)_X);
      if ((_X == dVar1) && (dVar2 != _X)) {
        dVar2 = dVar2 + 1.0;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar2 = (double)_handle_nan((ulonglong)_X);
    return dVar2;
  }
  return dVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14001fe70(void)

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
  if (DAT_140033d1c == 0) {
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
        dVar9 = (double)((ulonglong)dVar3 & SUB168(_DAT_140029900,0));
        dVar7 = dVar3;
        if (dVar17 == -1023.0) {
          dVar17 = (double)((ulonglong)dVar9 | SUB168(_DAT_140029990,0)) - 1.0;
          dVar7 = (double)((ulonglong)dVar17 & SUB168(_DAT_140029900,0));
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
          dVar12 = (double)((ulonglong)dVar3 & SUB168(_DAT_140029ad0,0));
          dVar3 = (((dVar9 * 0.012500000003771751 + 0.08333333333333179) * dVar10 +
                   (dVar9 * 0.0004348877777076146 + 0.0022321399879194482) * dVar10 * dVar10 * dVar7
                   ) - dVar3 * dVar17) + (dVar3 - dVar12);
          return dVar12 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar12 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar7 = ((double)(uVar1 | SUB168(_DAT_1400299a0,0)) -
                (double)((ulonglong)dVar9 | SUB168(_DAT_1400299a0,0))) *
                *(double *)(&DAT_14002ab10 + uVar2 * 8);
        dVar3 = dVar7 * dVar7;
        return *(double *)(&DAT_140029af0 + uVar2 * 8) + dVar17 * 0.3010299950838089 +
               *(double *)(&DAT_14002a300 + uVar2 * 8) +
               (dVar17 * 5.801722962879576e-10 -
               ((dVar7 * 0.3333333333333333 + 0.5) * dVar3 + dVar7 +
               ((dVar7 * 0.16666666666666666 + 0.2) * dVar7 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_140020de0(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    dVar3 = (double)FUN_140020de0(dVar3,0xfff8000000000000,2);
                    /* WARNING: Read-only address (ram,0x0001400298b0) is written */
                    /* WARNING: Read-only address (ram,0x0001400298e0) is written */
                    /* WARNING: Read-only address (ram,0x000140029900) is written */
                    /* WARNING: Read-only address (ram,0x000140029910) is written */
                    /* WARNING: Read-only address (ram,0x000140029920) is written */
                    /* WARNING: Read-only address (ram,0x000140029990) is written */
                    /* WARNING: Read-only address (ram,0x0001400299a0) is written */
                    /* WARNING: Read-only address (ram,0x000140029a30) is written */
                    /* WARNING: Read-only address (ram,0x000140029a80) is written */
                    /* WARNING: Read-only address (ram,0x000140029ad0) is written */
    return dVar3;
  }
  auVar13 = vpsrlq_avx(auVar5,0x34);
  auVar13 = vpsubq_avx(auVar13,_DAT_1400298e0);
  auVar13 = vcvtdq2pd_avx(auVar13);
  auVar16 = vpand_avx(auVar5,_DAT_1400298b0);
  if (auVar16._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_1400203c0;
      dVar3 = (double)FUN_140020de0(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar16 = vpand_avx(auVar5,_DAT_140029900);
    if (auVar13._0_8_ == -1023.0) {
      auVar5 = vpor_avx(auVar16,_DAT_140029990);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar5._0_8_ - 1.0;
      auVar16 = vpsrlq_avx(auVar13,0x34);
      auVar5 = vpand_avx(auVar13,_DAT_140029900);
      auVar13 = vpsubd_avx(auVar16,_DAT_140029a30);
      auVar13 = vcvtdq2pd_avx(auVar13);
      auVar16 = auVar5;
    }
    auVar4 = vpand_avx(auVar5,_DAT_140029910);
    auVar14 = vpand_avx(auVar5,_DAT_140029920);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar4 = vpaddq_avx(auVar14,auVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar3 - 1.0;
    auVar14 = vpand_avx(auVar14,_DAT_140029a80);
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
      auVar5 = vpand_avx(auVar6,_DAT_140029ad0);
      dVar10 = auVar5._0_8_;
      dVar3 = ((auVar13._0_8_ * dVar17 + auVar16._0_8_ * dVar17 * dVar17 * dVar3) - dVar7 * dVar9) +
              (dVar7 - dVar10);
      return dVar10 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar10 * 0.4342937469482422;
    }
    uVar1 = auVar4._0_8_ >> 0x2c;
    auVar5 = vpor_avx(auVar16,_DAT_1400299a0);
    auVar16 = vpor_avx(auVar4,_DAT_1400299a0);
    dVar3 = (auVar16._0_8_ - auVar5._0_8_) * *(double *)(&DAT_14002ab10 + uVar1 * 8);
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
    auVar5._0_8_ = *(ulonglong *)(&DAT_140029af0 + uVar1 * 8);
    auVar5 = vfmadd231sd_fma(auVar5,auVar13,ZEXT816(0x3fd3441350000000));
    return auVar5._0_8_ + *(double *)(&DAT_14002a300 + uVar1 * 8) + auVar16._0_8_;
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_140020de0(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_1400203c0:
  dVar3 = (double)FUN_140020de0(dVar3,0xfff8000000000000,2);
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
      pbVar1 = (byte *)((&DAT_1400334c0)[(longlong)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfd;
      return (__int64)local_res20.s;
    }
  }
  return -1;
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
  if ((*(byte *)((&DAT_1400334c0)[(longlong)(int)_FileHandle >> 6] + 0x38 +
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
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_1400338c0)) &&
       ((*(byte *)((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 +
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
    FUN_140013a44();
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
    if (((_FileHandle == 1) && ((*(byte *)(DAT_1400334c0 + 0xb8) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_1400334c0 + 0x78) & 1) != 0)))) {
      iVar4 = _get_osfhandle(2);
      iVar5 = _get_osfhandle(1);
      if (iVar5 == iVar4) goto LAB_1400205f2;
    }
    hObject = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_14002064d;
    }
  }
LAB_1400205f2:
  DVar2 = 0;
LAB_14002064d:
  _free_osfhnd(_FileHandle);
  *(undefined1 *)
   ((&DAT_1400334c0)[(longlong)_FileHandle >> 6] + 0x38 + (ulonglong)(_FileHandle & 0x3f) * 0x40) =
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
    _putwch_nolock
   
   Library: Visual Studio 2015 Release */

wint_t __cdecl _putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  wchar_t local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = _WCh;
  if (DAT_1400328e0 == (HANDLE)0xfffffffffffffffe) {
    __dcrt_lowio_initialize_console_output();
  }
  if ((DAT_1400328e0 == (HANDLE)0xffffffffffffffff) ||
     (BVar1 = WriteConsoleW(DAT_1400328e0,local_res8,1,local_res10,(LPVOID)0x0), BVar1 == 0)) {
    local_res8[0] = L'\xffff';
  }
  return local_res8[0];
}




/* Library Function - Single Match
    _getfpcontrolword
   
   Library: Visual Studio 2015 Release */

uint _getfpcontrolword(void)

{
  uint uVar1;
  
  uVar1 = FUN_140020810(0,0);
  return uVar1 & 799;
}




/* Library Function - Single Match
    _getfpstatusword
   
   Library: Visual Studio 2015 Release */

uint _getfpstatusword(void)

{
  uint uVar1;
  
  uVar1 = _statusfp();
  return uVar1 & 0x1f;
}




void FUN_140020760(uint param_1)

{
  FUN_140020810(param_1,0x8031f);
  return;
}




/* Library Function - Single Match
    _setfpstatusword
   
   Library: Visual Studio 2015 Release */

void _setfpstatusword(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = 0;
  if ((param_1 & 0x1f) != 0) {
    uVar2 = (uint)((param_1 & 0x10) != 0);
    if ((param_1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((param_1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((param_1 & 2) != 0) {
      uVar2 = uVar2 | 0x10;
    }
    if ((param_1 & 1) != 0) {
      uVar2 = uVar2 | 0x20;
    }
  }
  FUN_140020f20(uVar2 | uVar1 & 0xffffffc2);
  return;
}




/* Library Function - Single Match
    _clearfp
   
   Library: Visual Studio 2015 Release */

uint __cdecl _clearfp(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  _fclrf();
  uVar2 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  return uVar2;
}




void FUN_140020810(uint param_1,uint param_2)

{
  common_control87(param_1,param_2 & 0xfff7ffff);
  return;
}




/* Library Function - Single Match
    _statusfp
   
   Library: Visual Studio 2015 Release */

uint __cdecl _statusfp(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((MXCSR & 0x3f) != 0) {
    if ((MXCSR & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((MXCSR & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((MXCSR & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((MXCSR & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((MXCSR & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((MXCSR & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  return uVar1;
}




/* Library Function - Single Match
    common_control87
   
   Library: Visual Studio 2015 Release */

uint common_control87(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = _get_fpsr();
  uVar2 = 0;
  if ((uVar1 & 0x80) != 0) {
    uVar2 = 0x10;
  }
  if ((uVar1 & 0x200) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((uVar1 & 0x800) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar2 = uVar2 | 1;
  }
  if ((uVar1 & 0x100) != 0) {
    uVar2 = uVar2 | 0x80000;
  }
  uVar3 = uVar1 & 0x6000;
  if (uVar3 != 0) {
    if (uVar3 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar3 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar3 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar3 = 0;
    if ((uVar1 & 0x10) != 0) {
      uVar3 = 0x80;
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 | 0x200;
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 | 0x400;
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 | 0x800;
    }
    if ((uVar1 & 1) != 0) {
      uVar3 = uVar3 | 0x1000;
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      uVar3 = uVar3 | 0x100;
    }
    uVar2 = uVar1 & 0x300;
    if (uVar2 != 0) {
      if (uVar2 == 0x100) {
        uVar3 = uVar3 | 0x2000;
      }
      else if (uVar2 == 0x200) {
        uVar3 = uVar3 | 0x4000;
      }
      else if (uVar2 == 0x300) {
        uVar3 = uVar3 | 0x6000;
      }
    }
    uVar1 = uVar1 & 0x3000000;
    if (uVar1 == 0x1000000) {
      uVar3 = uVar3 | 0x8040;
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = uVar3 | 0x40;
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = uVar3 | 0x8000;
    }
    if ((DAT_1400328d0 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffbf;
      FUN_140020f20(uVar3);
    }
    else {
      FUN_140020f20(uVar3);
    }
    uVar2 = 0;
    if ((uVar3 & 0x80) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar3 & 0x200) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar3 >> 10 & 1) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar3 & 0x100) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar1 = uVar3 & 0x6000;
    if (uVar1 != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar3 = uVar3 & 0x8040;
    if (uVar3 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar2 = uVar2 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar2 = uVar2 | 0x1000000;
    }
  }
  return uVar2;
}




undefined8
FUN_140020afc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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




void FUN_140020c20(undefined8 param_1,uint param_2,undefined8 param_3,int param_4,uint param_5,
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
  
  local_48 = DAT_140032008 ^ (ulonglong)auStackY_118;
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
  bVar2 = FUN_14001712c();
  if ((bVar2) && (param_4 != 0)) {
    FUN_140020afc(param_4,(ulonglong)param_6,param_1,param_7,uVar1,local_d0,(uint)local_d8);
  }
  else {
    _set_errno_from_matherr(param_4);
    _ctrlfp((uint)local_d8,0xffc0);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_118);
  return;
}




/* Library Function - Single Match
    _handle_nan
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _handle_nan(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}




/* WARNING: Removing unreachable block (ram,0x000140020d89) */
/* Library Function - Single Match
    __acrt_initialize_fma3
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_fma3(void)

{
  longlong lVar1;
  byte in_XCR0;
  
  DAT_140033d18 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    DAT_140033d18 = (uint)((in_XCR0 & 6) == 6);
  }
  DAT_140033d1c = DAT_140033d18;
  return 0;
}




void FUN_140020de0(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_140020e00(param_1,param_2,param_3,0x1b,"log10");
  return;
}




undefined4
FUN_140020e00(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5)

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
  FUN_140020c20(param_5,param_4,param_2,iVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}




/* Library Function - Single Match
    __dcrt_lowio_initialize_console_output
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __dcrt_lowio_initialize_console_output(void)

{
  DAT_1400328e0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}




/* Library Function - Single Match
    _get_fpsr
   
   Library: Visual Studio 2015 Release */

undefined4 _get_fpsr(void)

{
  return MXCSR;
}




void FUN_140020f20(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}




/* Library Function - Single Match
    _fclrf
   
   Library: Visual Studio 2015 Release */

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
  if ((DAT_1400328f0 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_140020f20(uVar2 & 0xffffffbf);
  }
  else {
    FUN_140020f20(uVar2);
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
  FUN_140020f20(uVar1 | param_1 & 0x3f);
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




/* Library Function - Single Match
    __GSHandlerCheck_SEH
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheck_SEH
               (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,
               _DISPATCHER_CONTEXT *param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  __GSHandlerCheckCommon((ulonglong)param_2,(longlong)param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    __C_specific_handler(param_1,param_2,param_3,param_4);
  }
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




undefined1 (*) [16] FUN_1400216b8(undefined1 (*param_1) [16],uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cVar11;
  char cVar16;
  char cVar17;
  char cVar18;
  
  pauVar3 = (undefined1 (*) [16])0x0;
  if (param_2 == 0) {
    pcVar7 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*pcVar7 == '\0');
    auVar12[1] = -(pcVar7[1] == '\0');
    auVar12[2] = -(pcVar7[2] == '\0');
    auVar12[3] = -(pcVar7[3] == '\0');
    auVar12[4] = -(pcVar7[4] == '\0');
    auVar12[5] = -(pcVar7[5] == '\0');
    auVar12[6] = -(pcVar7[6] == '\0');
    auVar12[7] = -(pcVar7[7] == '\0');
    auVar12[8] = -(pcVar7[8] == '\0');
    auVar12[9] = -(pcVar7[9] == '\0');
    auVar12[10] = -(pcVar7[10] == '\0');
    auVar12[0xb] = -(pcVar7[0xb] == '\0');
    auVar12[0xc] = -(pcVar7[0xc] == '\0');
    auVar12[0xd] = -(pcVar7[0xd] == '\0');
    auVar12[0xe] = -(pcVar7[0xe] == '\0');
    auVar12[0xf] = -(pcVar7[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar12[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar8 = pcVar7;
    if (uVar2 == 0) {
      do {
        pcVar7 = pcVar8 + 0x10;
        auVar13[0] = -(*pcVar7 == '\0');
        auVar13[1] = -(pcVar8[0x11] == '\0');
        auVar13[2] = -(pcVar8[0x12] == '\0');
        auVar13[3] = -(pcVar8[0x13] == '\0');
        auVar13[4] = -(pcVar8[0x14] == '\0');
        auVar13[5] = -(pcVar8[0x15] == '\0');
        auVar13[6] = -(pcVar8[0x16] == '\0');
        auVar13[7] = -(pcVar8[0x17] == '\0');
        auVar13[8] = -(pcVar8[0x18] == '\0');
        auVar13[9] = -(pcVar8[0x19] == '\0');
        auVar13[10] = -(pcVar8[0x1a] == '\0');
        auVar13[0xb] = -(pcVar8[0x1b] == '\0');
        auVar13[0xc] = -(pcVar8[0x1c] == '\0');
        auVar13[0xd] = -(pcVar8[0x1d] == '\0');
        auVar13[0xe] = -(pcVar8[0x1e] == '\0');
        auVar13[0xf] = -(pcVar8[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        pcVar8 = pcVar7;
      } while (uVar1 == 0);
    }
    uVar6 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    pauVar3 = (undefined1 (*) [16])(pcVar7 + uVar6);
  }
  else if (DAT_140032018 < 2) {
    pcVar7 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar19 = pshuflw(in_XMM1,ZEXT416((param_2 & 0xff) << 8 | param_2 & 0xff),0);
    uVar2 = -1 << ((byte)param_1 & 0xf);
    auVar14[0] = -(*pcVar7 == '\0');
    auVar14[1] = -(pcVar7[1] == '\0');
    auVar14[2] = -(pcVar7[2] == '\0');
    auVar14[3] = -(pcVar7[3] == '\0');
    auVar14[4] = -(pcVar7[4] == '\0');
    auVar14[5] = -(pcVar7[5] == '\0');
    auVar14[6] = -(pcVar7[6] == '\0');
    auVar14[7] = -(pcVar7[7] == '\0');
    auVar14[8] = -(pcVar7[8] == '\0');
    auVar14[9] = -(pcVar7[9] == '\0');
    auVar14[10] = -(pcVar7[10] == '\0');
    auVar14[0xb] = -(pcVar7[0xb] == '\0');
    auVar14[0xc] = -(pcVar7[0xc] == '\0');
    auVar14[0xd] = -(pcVar7[0xd] == '\0');
    auVar14[0xe] = -(pcVar7[0xe] == '\0');
    auVar14[0xf] = -(pcVar7[0xf] == '\0');
    cVar11 = auVar19[0];
    auVar15[0] = -(cVar11 == *pcVar7);
    cVar16 = auVar19[1];
    auVar15[1] = -(cVar16 == pcVar7[1]);
    cVar17 = auVar19[2];
    auVar15[2] = -(cVar17 == pcVar7[2]);
    cVar18 = auVar19[3];
    auVar15[3] = -(cVar18 == pcVar7[3]);
    auVar15[4] = -(cVar11 == pcVar7[4]);
    auVar15[5] = -(cVar16 == pcVar7[5]);
    auVar15[6] = -(cVar17 == pcVar7[6]);
    auVar15[7] = -(cVar18 == pcVar7[7]);
    auVar15[8] = -(cVar11 == pcVar7[8]);
    auVar15[9] = -(cVar16 == pcVar7[9]);
    auVar15[10] = -(cVar17 == pcVar7[10]);
    auVar15[0xb] = -(cVar18 == pcVar7[0xb]);
    auVar15[0xc] = -(cVar11 == pcVar7[0xc]);
    auVar15[0xd] = -(cVar16 == pcVar7[0xd]);
    auVar15[0xe] = -(cVar17 == pcVar7[0xe]);
    auVar15[0xf] = -(cVar18 == pcVar7[0xf]);
    uVar6 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) & uVar2;
    uVar2 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) & uVar2;
    pcVar8 = pcVar7;
    if (uVar2 == 0) {
      do {
        uVar2 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
          }
        }
        if (uVar6 != 0) {
          pauVar3 = (undefined1 (*) [16])(pcVar8 + uVar2);
        }
        pcVar7 = pcVar8 + 0x10;
        auVar20[0] = -(*pcVar7 == '\0');
        auVar20[1] = -(pcVar8[0x11] == '\0');
        auVar20[2] = -(pcVar8[0x12] == '\0');
        auVar20[3] = -(pcVar8[0x13] == '\0');
        auVar20[4] = -(pcVar8[0x14] == '\0');
        auVar20[5] = -(pcVar8[0x15] == '\0');
        auVar20[6] = -(pcVar8[0x16] == '\0');
        auVar20[7] = -(pcVar8[0x17] == '\0');
        auVar20[8] = -(pcVar8[0x18] == '\0');
        auVar20[9] = -(pcVar8[0x19] == '\0');
        auVar20[10] = -(pcVar8[0x1a] == '\0');
        auVar20[0xb] = -(pcVar8[0x1b] == '\0');
        auVar20[0xc] = -(pcVar8[0x1c] == '\0');
        auVar20[0xd] = -(pcVar8[0x1d] == '\0');
        auVar20[0xe] = -(pcVar8[0x1e] == '\0');
        auVar20[0xf] = -(pcVar8[0x1f] == '\0');
        auVar19[0] = -(cVar11 == *pcVar7);
        auVar19[1] = -(cVar16 == pcVar8[0x11]);
        auVar19[2] = -(cVar17 == pcVar8[0x12]);
        auVar19[3] = -(cVar18 == pcVar8[0x13]);
        auVar19[4] = -(cVar11 == pcVar8[0x14]);
        auVar19[5] = -(cVar16 == pcVar8[0x15]);
        auVar19[6] = -(cVar17 == pcVar8[0x16]);
        auVar19[7] = -(cVar18 == pcVar8[0x17]);
        auVar19[8] = -(cVar11 == pcVar8[0x18]);
        auVar19[9] = -(cVar16 == pcVar8[0x19]);
        auVar19[10] = -(cVar17 == pcVar8[0x1a]);
        auVar19[0xb] = -(cVar18 == pcVar8[0x1b]);
        auVar19[0xc] = -(cVar11 == pcVar8[0x1c]);
        auVar19[0xd] = -(cVar16 == pcVar8[0x1d]);
        auVar19[0xe] = -(cVar17 == pcVar8[0x1e]);
        auVar19[0xf] = -(cVar18 == pcVar8[0x1f]);
        uVar1 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        uVar6 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar19[0xf] >> 7) << 0xf);
        pcVar8 = pcVar7;
      } while (uVar1 == 0);
    }
    uVar6 = uVar6 & (-uVar2 & uVar2) - 1;
    uVar2 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar6 != 0) {
      pauVar3 = (undefined1 (*) [16])(pcVar7 + uVar2);
    }
  }
  else {
    while( true ) {
      bVar9 = false;
      bVar10 = ((ulonglong)param_1 & 0xf) == 0;
      if (bVar10) break;
      pauVar5 = param_1;
      if ((int)(char)(*param_1)[0] != param_2) {
        pauVar5 = pauVar3;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar5;
      }
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      pauVar3 = pauVar5;
    }
    while( true ) {
      iVar4 = pcmpistri(ZEXT416(param_2 & 0xff),*param_1,0x40);
      if (bVar9) {
        pauVar3 = (undefined1 (*) [16])(*param_1 + iVar4);
        bVar10 = pauVar3 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT416(param_2 & 0xff),*param_1,0x40);
      }
      if (bVar10) break;
      bVar9 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar10 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar3;
}




/* Library Function - Single Match
    __GSHandlerCheck_EH
   
   Library: Visual Studio 2017 Release */

void __GSHandlerCheck_EH(EHExceptionRecord *param_1,ulonglong param_2,_CONTEXT *param_3,
                        _xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,(longlong)param_4,(uint *)(lVar1 + 4));
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001400218a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_1400218b0(undefined8 param_1,longlong param_2)

{
  FUN_140001510((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1400218d0(undefined8 param_1,longlong param_2)

{
  FUN_14000e460(param_2 + 0x40);
  return;
}




void Unwind_1400218f0(undefined8 param_1,longlong param_2)

{
  FUN_140001480((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_140021908(undefined8 param_1,longlong param_2)

{
  FUN_140002000(param_2 + 200);
  return;
}




void Unwind_140021923(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x118);
  return;
}




void Unwind_14002193e(undefined8 param_1,longlong param_2)

{
  FUN_140002000(param_2 + 0xb0);
  return;
}




void Unwind_140021960(undefined8 param_1,longlong param_2)

{
  FUN_14000e460(param_2 + 0x30);
  return;
}




undefined8 Catch_All_140021980(undefined8 param_1,longlong param_2)

{
  FUN_140002460(*(undefined8 *)(param_2 + 0x60));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x1400020e7;
}




void Unwind_1400219b0(void)

{
  FUN_1400022d0();
  return;
}




undefined8 Catch_All_1400219d0(undefined8 param_1,longlong param_2)

{
  FUN_140002930(*(undefined8 *)(param_2 + 0xa0));
  FUN_140002a80(*(undefined8 *)(param_2 + 0x38),*(LPVOID *)(param_2 + 0x20),
                *(longlong *)(param_2 + 0x40));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140003091;
}




void Unwind_140021a20(void)

{
  FUN_140003f70();
  return;
}




undefined8 FUN_140021a40(void)

{
  return 1;
}




void Unwind_140021a60(void)

{
  FUN_140001370();
  return;
}




void Unwind_140021a80(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0xb0);
  return;
}




void Unwind_140021a9b(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0xd0);
  return;
}




void Unwind_140021ab6(undefined8 param_1,longlong param_2)

{
  _free_base(*(LPVOID *)(param_2 + 0x38));
  return;
}




void Unwind_140021ad3(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0xf0);
  return;
}




void Unwind_140021aee(undefined8 param_1,longlong param_2)

{
  FUN_140006180(param_2 + 0x1b0);
  return;
}




void Unwind_140021b09(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x110);
  return;
}




undefined8 Catch_All_140021b30(undefined8 param_1,longlong param_2)

{
  FUN_140006c10(*(undefined8 *)(param_2 + 0x28),*(LPVOID *)(param_2 + 0x20),1);
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140006b7d;
}




undefined8 Catch_All_140021b70(undefined8 param_1,longlong param_2)

{
  FUN_140007be0(*(undefined8 *)(param_2 + 0x50),*(LPVOID *)(param_2 + 0x20));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x14000775f;
}




undefined8 Catch_All_140021bb0(undefined8 param_1,longlong param_2)

{
  FUN_140007cf0(*(undefined8 *)(param_2 + 0xf0),*(LPVOID *)(param_2 + 0x110));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140007b73;
}




undefined8 Catch_All_140021bf0(undefined8 param_1,longlong param_2)

{
  FUN_140006c10(*(undefined8 *)(param_2 + 0x20),*(LPVOID *)(param_2 + 0x28),1);
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140007cda;
}




void Unwind_140021c30(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x1e8);
  return;
}




void Unwind_140021c4b(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x1c8);
  return;
}




void Unwind_140021c66(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(param_2 + 0x110);
  return;
}




void Unwind_140021c81(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(*(undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_140021c99(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(*(undefined8 *)(param_2 + 0x88));
  return;
}




void Unwind_140021cb4(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(param_2 + 0x58);
  return;
}




void Unwind_140021ccc(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x1a8);
  return;
}




undefined8 Catch_140021ce7(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  
  uVar1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                    ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(param_2 + 0x228),"AES decryption failed: ");
  *(undefined8 *)(param_2 + 0xe0) = uVar1;
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_2 + 0xe0);
  pcVar2 = (char *)(**(code **)(**(longlong **)(param_2 + 0xe8) + 8))
                             (*(undefined8 *)(param_2 + 0xe8));
  lVar3 = FUN_140009d20(param_2 + 0x208,
                        *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          **)(param_2 + 0xf0),pcVar2);
  *(longlong *)(param_2 + 0xf8) = lVar3;
  *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_2 + 0xf8);
  std::runtime_error::runtime_error
            ((runtime_error *)(param_2 + 0x148),
             *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (param_2 + 0x100));
  FUN_140011470((longlong *)(param_2 + 0x148),&DAT_140030b38);
  FUN_140009010((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x208));
  FUN_140009010((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x228));
  return 0x1400089c2;
}




void Unwind_140021da9(undefined8 param_1,longlong param_2)

{
  FUN_140009010((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x228));
  return;
}




void Unwind_140021dc4(undefined8 param_1,longlong param_2)

{
  FUN_140009010((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x208));
  return;
}




undefined8 Catch_All_140021de0(undefined8 param_1,longlong param_2)

{
  FUN_140009140(*(undefined8 *)(param_2 + 0x60));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140008dd7;
}




undefined8 Catch_All_140021e10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400023b0(*(undefined8 *)(param_2 + 0x50));
  FUN_1400096e0(uVar1,*(LPVOID *)(param_2 + 0x20),*(ulonglong *)(param_2 + 0x58));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140009688;
}




undefined8 Catch_All_140021e50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140002930(*(undefined8 *)(param_2 + 0x90));
  uVar1 = FUN_1400023b0(*(undefined8 *)(param_2 + 0x90));
  FUN_1400096e0(uVar1,*(LPVOID *)(param_2 + 0x28),*(ulonglong *)(param_2 + 0x38));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x140009ec0;
}




undefined8 Catch_All_140021eb0(undefined8 param_1,longlong param_2)

{
  FUN_140002930(*(undefined8 *)(param_2 + 0x90));
  FUN_1400096e0(*(undefined8 *)(param_2 + 0x38),*(LPVOID *)(param_2 + 0x20),
                *(ulonglong *)(param_2 + 0x40));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x14000a236;
}




undefined8 Catch_All_140021f00(undefined8 param_1,longlong param_2)

{
  FUN_140009140(*(undefined8 *)(param_2 + 0x40));
  FUN_140011470((longlong *)0x0,(byte *)0x0);
  return 0x14000a9f6;
}




void Unwind_140021f30(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x40);
  return;
}




void Unwind_140021f48(undefined8 param_1,longlong param_2)

{
  FUN_140002250(param_2 + 0x60);
  return;
}




void Unwind_140021f60(undefined8 param_1,longlong param_2)

{
  FUN_140009010((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x80));
  return;
}




void Unwind_140021f7b(undefined8 param_1,longlong param_2)

{
  FUN_140009010((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                (param_2 + 0x60));
  return;
}




void Unwind_140021fa0(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(*(undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140021fbb(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(*(undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_140021fd6(undefined8 param_1,longlong param_2)

{
  FUN_140008cf0(*(undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_140022000(void)

{
  FUN_1400022d0();
  return;
}




void Unwind_140022020(undefined8 param_1,longlong param_2)

{
  FUN_14000f590((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_140022038(undefined8 param_1,longlong param_2)

{
  FUN_14000f590((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_140022050(undefined8 param_1,longlong param_2)

{
  FUN_14000f890((longlong *)(*(longlong *)(param_2 + 0x40) + 0x208));
  return;
}




void Unwind_140022070(void)

{
  FUN_140001370();
  return;
}




void Unwind_140022090(undefined8 param_1,longlong param_2)

{
  _free_base(*(LPVOID *)(param_2 + 0x58));
  return;
}




undefined * Catch_All_1400220cd(void)

{
  return &DAT_140010131;
}




bool FUN_140022191(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0x38) != '\0';
}




void FUN_1400221a9(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  *(_EXCEPTION_POINTERS **)(param_2 + 0x58) = param_1;
  ExFilterRethrow(param_1,*(EHExceptionRecord **)(param_2 + 0xb8),(int *)(param_2 + 0x20));
  return;
}




void FUN_140022246(undefined8 *param_1)

{
  __FrameUnwindFilter(param_1);
  return;
}




void FUN_14002225c(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




void FUN_14002227f(void)

{
  __acrt_unlock(0);
  return;
}




void FUN_140022295(undefined8 *param_1)

{
  FUN_140017870(*(int *)*param_1);
  return;
}




void FUN_1400222b0(void)

{
  __acrt_unlock(2);
  return;
}




void FUN_1400222c9(void)

{
  __acrt_unlock(4);
  return;
}




void FUN_1400222e2(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}




void FUN_1400222fc(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x88));
  return;
}




void FUN_140022319(void)

{
  __acrt_unlock(7);
  return;
}




void FUN_140022332(void)

{
  __acrt_unlock(8);
  return;
}




void FUN_14002234b(undefined8 param_1,longlong param_2)

{
  FUN_140016e24(*(longlong *)(param_2 + 0x68));
  return;
}




void FUN_140022365(void)

{
  __acrt_unlock(8);
  return;
}




void FUN_14002237e(void)

{
  __acrt_unlock(5);
  return;
}




void FUN_140022397(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) != '\0') {
    __acrt_unlock(3);
  }
  return;
}




void FUN_1400223bb(undefined8 param_1,longlong param_2)

{
  FUN_140016e24(*(longlong *)(param_2 + 0x30));
  return;
}




void FUN_1400223d3(undefined8 param_1,longlong param_2)

{
  FID_conflict___acrt_lowio_lock_fh(**(uint **)(param_2 + 0x48));
  return;
}




void FUN_1400223ed(undefined8 param_1,longlong param_2)

{
  FID_conflict___acrt_lowio_lock_fh(*(uint *)(param_2 + 0x50));
  return;
}




undefined8 FUN_140022404(undefined8 *param_1)

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




bool FUN_140022430(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



