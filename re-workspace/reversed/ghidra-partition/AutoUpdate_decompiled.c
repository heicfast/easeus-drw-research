
undefined8 FUN_180001000(void)

{
  return 1;
}




void FUN_180001010(undefined8 *param_1)

{
  *param_1 = IAutoUpdate::vftable;
  return;
}




void FUN_180001020(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  __uint64 *p_Var3;
  longlong lVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStackY_448 [32];
  char local_418 [1008];
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_180023018 ^ (ulonglong)auStackY_448;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180003460((undefined1 (*) [16])local_418,0,1000);
  p_Var3 = (__uint64 *)FUN_180001aa0();
  __stdio_common_vsprintf_s
            (*p_Var3,local_418,1000,param_1,(__crt_locale_pointers *)0x0,(char *)&local_res10);
  lVar5 = -1;
  do {
    lVar4 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = lVar4;
  } while (local_418[lVar1] != '\0');
  iVar2 = (int)lVar4;
  if (((iVar2 < 3) || (local_418[(longlong)iVar2 + -1] != '\n')) ||
     (local_418[(longlong)iVar2 + -2] != '\r')) {
    (local_418 + iVar2)[0] = '\r';
    (local_418 + iVar2)[1] = '\n';
    local_418[(longlong)iVar2 + 2] = '\0';
  }
  OutputDebugStringA(local_418);
  CLogWriter::Log(local_418);
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_448);
  return;
}




undefined8 FUN_180001110(longlong param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    return 1;
  }
  if (param_2 != (undefined1 *)0x0) {
    FUN_180001ab0(param_2,0x18001853c,(ulonglong)*(ushort *)(param_1 + 0xe),
                  (ulonglong)*(ushort *)(param_1 + 0xc));
  }
  return 0;
}




void FUN_180001150(longlong param_1,longlong param_2,LPCSTR param_3,char *param_4,char *param_5,
                  char *param_6,uint param_7)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  undefined1 auStackY_6e8 [32];
  char local_6a8 [272];
  char local_598 [272];
  char local_488 [272];
  char local_378 [272];
  CHAR local_268 [272];
  char local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_180023018 ^ (ulonglong)auStackY_6e8;
  if ((((param_2 != 0) && (-1 < *(int *)(param_1 + 8))) && (param_3 != (LPCSTR)0x0)) &&
     (*param_3 != '\0')) {
    FUN_180003460((undefined1 (*) [16])local_488,0,0x104);
    FUN_180003460((undefined1 (*) [16])local_598,0,0x104);
    FUN_180003460((undefined1 (*) [16])local_378,0,0x104);
    FUN_180003460((undefined1 (*) [16])local_158,0,0x104);
    FUN_180003460((undefined1 (*) [16])local_6a8,0,0x104);
    FUN_180003460((undefined1 (*) [16])local_268,0,0x104);
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      FUN_180001b10(local_488,0x104,"%s ",param_4);
    }
    if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
      FUN_180001b10(local_598,0x104,"%s ",param_5);
    }
    if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
      FUN_180001b10(local_378,0x104,"%s ",param_6);
    }
    if (-1 < (int)param_7) {
      FUN_180001b10(local_158,0x104,"%d ",(ulonglong)param_7);
    }
    iVar5 = 0;
    do {
      switch(iVar5) {
      case 0:
        FUN_180001b10(local_6a8,0x104,"%s%s%s%sURL",local_488);
        break;
      case 1:
        FUN_180001b10(local_6a8,0x104,"%s%s%sURL",local_488);
        break;
      case 2:
        goto LAB_180001366;
      case 3:
LAB_180001366:
        pcVar4 = local_488;
LAB_18000136d:
        FUN_180001b10(local_6a8,0x104,"%s%sURL",pcVar4);
        break;
      case 4:
        pcVar4 = local_598;
        goto LAB_18000136d;
      case 5:
        FUN_180001b10(local_6a8,0x104,"%sURL",local_598);
        break;
      case 6:
        lVar3 = 0;
        do {
          cVar1 = (&DAT_180018474)[lVar3];
          local_6a8[lVar3] = cVar1;
          lVar3 = lVar3 + 1;
        } while (cVar1 != '\0');
      }
      DVar2 = GetPrivateProfileStringA
                        (param_3,local_6a8,"",local_268,0x104,(LPCSTR)(param_1 + 0x118));
      if (DVar2 != 0) {
        pcVar4 = local_268;
        do {
          cVar1 = *pcVar4;
          pcVar4[param_2 - (longlong)local_268] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 7);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_6e8);
  return;
}




undefined4 FUN_180001470(longlong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    *(undefined4 *)(param_1 + 8) = 0x40200;
    return 0x40200;
  }
  if (param_2 == *(uint *)(param_1 + 0xc)) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x10) <= param_3) {
      uVar1 = 0x40200;
    }
    *(undefined4 *)(param_1 + 8) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}




void FUN_1800014a0(longlong param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 auStackY_d08 [32];
  uint local_cc8;
  uint local_cc4;
  FILE *local_cc0;
  undefined4 local_cb8 [4];
  undefined4 local_ca8 [5];
  int local_c94;
  undefined1 *local_c90;
  undefined4 local_c88;
  undefined2 local_c84;
  undefined8 local_c80;
  undefined1 *local_c60;
  undefined4 local_c58;
  uchar local_c38 [1024];
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_180023018 ^ (ulonglong)auStackY_d08;
  uVar9 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_180003460((undefined1 (*) [16])local_ca8,0,0x68);
  local_ca8[0] = 0x68;
  FUN_180003460((undefined1 (*) [16])local_838,0,0x400);
  FUN_180003460((undefined1 (*) [16])local_438,0,0x400);
  local_c90 = local_838;
  local_c88 = 0x400;
  lVar7 = -1;
  local_c60 = local_438;
  local_c58 = 0x400;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_2 + lVar7) != '\0');
  iVar1 = InternetCrackUrlA(param_2,lVar7,0,local_ca8);
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    FUN_180001020("AutoUpdate error: %s %u err = %u",
                  "i:\\_drw_main\\partitionrecovery\\autoupdate\\autoupdateimp.cpp",0x58,
                  (ulonglong)DVar2);
    *(undefined4 *)(param_1 + 8) = 0x40201;
    goto LAB_18000198f;
  }
  pcVar6 = "EaseUS Partition Recovery";
  local_cc0 = (FILE *)0x0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    pcVar6 = "EaseUS Partition Master";
  }
  lVar7 = InternetOpenA(pcVar6,0,0,0);
  uVar5 = uVar9;
  if (lVar7 == 0) {
    uVar3 = GetLastError();
    uVar10 = 99;
    uVar4 = uVar9;
LAB_1800015f5:
    FUN_180001020("AutoUpdate error: %s %u err = %u",
                  "i:\\_drw_main\\partitionrecovery\\autoupdate\\autoupdateimp.cpp",uVar10,
                  (ulonglong)uVar3);
    *(undefined4 *)(param_1 + 8) = 0x40201;
  }
  else {
    uVar4 = InternetConnectA(lVar7,local_c90,local_c84,local_c80);
    if (uVar4 == 0) {
      uVar3 = GetLastError();
      uVar10 = 0x66;
      goto LAB_1800015f5;
    }
    uVar5 = HttpOpenRequestA(uVar4,0,local_c60,0);
    if (uVar5 == 0) {
      uVar3 = GetLastError();
      uVar10 = 0x75;
      goto LAB_1800015f5;
    }
    if (local_c94 == 4) {
      local_cc8 = 0;
      local_cb8[0] = 4;
      InternetQueryOptionA(uVar5,0x1f,&local_cc8,local_cb8);
      local_cc8 = local_cc8 | 0x3380;
      InternetSetOptionA(uVar5,0x1f,&local_cc8);
    }
    iVar1 = HttpSendRequestA(uVar5,0,0,0);
    if (iVar1 == 0) {
      uVar3 = GetLastError();
      uVar10 = 0x86;
      goto LAB_1800015f5;
    }
    FUN_180003460((undefined1 (*) [16])local_c38,0,0x400);
    local_cc4 = 0;
    GetTempPathA(0x104,(LPSTR)(param_1 + 0x118));
    pcVar6 = "epr_update.ini";
    if (*(int *)(param_1 + 0x21c) != 0) {
      pcVar6 = "epm_update.ini";
    }
    FUN_180005d18((char *)(param_1 + 0x118),0x104,(longlong)pcVar6);
    FUN_180005e98(&local_cc0,(char *)(param_1 + 0x118),"wb");
    if (local_cc0 == (FILE *)0x0) {
      DVar2 = GetLastError();
      FUN_180001020("AutoUpdate error: %s %u err = %u",
                    "i:\\_drw_main\\partitionrecovery\\autoupdate\\autoupdateimp.cpp",0x8e,
                    (ulonglong)DVar2);
      *(undefined4 *)(param_1 + 8) = 0x40202;
    }
    else {
      while( true ) {
        local_cc4 = 0;
        iVar1 = InternetReadFile(uVar5,local_c38,0x400,&local_cc4);
        if ((iVar1 == 0) || (local_cc4 == 0)) break;
        fwrite(local_c38,1,(ulonglong)local_cc4,local_cc0);
      }
    }
  }
  if (local_cc0 != (FILE *)0x0) {
    FUN_180005f74(local_cc0);
    local_cc0 = (FILE *)0x0;
  }
  if (uVar5 != 0) {
    InternetCloseHandle(uVar5);
  }
  if (uVar4 != 0) {
    InternetCloseHandle(uVar4);
  }
  if (lVar7 != 0) {
    InternetCloseHandle(lVar7);
  }
  if (*(int *)(param_1 + 8) == 0) {
    DVar2 = GetPrivateProfileStringA
                      ("VERSION","Product Version","",(LPSTR)local_c38,0x104,
                       (LPCSTR)(param_1 + 0x118));
    if (DVar2 == 0) {
      DVar2 = GetLastError();
      FUN_180001020("AutoUpdate error: %s %u err = %u",
                    "i:\\_drw_main\\partitionrecovery\\autoupdate\\autoupdateimp.cpp",0xa3,
                    (ulonglong)DVar2);
      *(undefined4 *)(param_1 + 8) = 0x40202;
    }
    else {
      lVar7 = FUN_180005d98(local_c38,".");
      do {
        iVar1 = 0;
        if (lVar7 != 0) {
          iVar1 = FUN_180007f10(lVar7);
        }
        iVar8 = (int)uVar9;
        if (iVar8 == 0) {
          *(int *)(param_1 + 0xc) = iVar1 << 0x10;
        }
        else if (iVar8 == 1) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1;
        }
        else if (iVar8 == 2) {
          *(int *)(param_1 + 0x10) = iVar1 << 0x10;
        }
        else if (iVar8 == 3) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
        }
        lVar7 = FUN_180005d98((uchar *)0x0,".");
        uVar9 = (ulonglong)(iVar8 + 1U);
      } while ((int)(iVar8 + 1U) < 4);
      GetPrivateProfileStringA
                ("VERSION","Description","",(LPSTR)(param_1 + 0x14),0x104,(LPCSTR)(param_1 + 0x118))
      ;
    }
  }
LAB_18000198f:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_d08);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * GetAutoUpdateInstance(void)

{
  UINT UVar1;
  
                    /* 0x19b0  4  GetAutoUpdateInstance */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180023d30) {
    _Init_thread_header(&DAT_180023d30);
    if (DAT_180023d30 == -1) {
      _DAT_180023b10 = CAutoUpdateImp::vftable;
      _DAT_180023b18 = 0;
      _DAT_180023d2c = 1;
      FUN_180003460((undefined1 (*) [16])&DAT_180023b1c,0,0x210);
      UVar1 = GetPrivateProfileIntA("Public","IsEPM",0,"../res/UIConfig.ini");
      _DAT_180023d2c = (uint)(UVar1 != 0);
      atexit((_func_5014 *)&LAB_180017120);
      _Init_thread_footer(&DAT_180023d30);
      return &DAT_180023b10;
    }
  }
  return &DAT_180023b10;
}




undefined * FUN_180001aa0(void)

{
  return &DAT_180023b00;
}




int FUN_180001ab0(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180001aa0();
  iVar1 = common_vsprintf<>(*puVar2 | 1,param_1,-1,param_2,(__crt_locale_pointers *)0x0,&local_res18
                           );
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




int FUN_180001b10(char *param_1,__uint64 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  __uint64 *p_Var2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  p_Var2 = (__uint64 *)FUN_180001aa0();
  iVar1 = __stdio_common_vsprintf_s
                    (*p_Var2,param_1,param_2,param_3,(__crt_locale_pointers *)0x0,
                     (char *)&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}




/* public: class CLogInBootICE & __ptr64 __cdecl CLogInBootICE::operator=(class CLogInBootICE const
   & __ptr64) __ptr64 */

CLogInBootICE * __thiscall CLogInBootICE::operator=(CLogInBootICE *this,CLogInBootICE *param_1)

{
  undefined8 uVar1;
  
                    /* 0x1b70  1  ??4CLogInBootICE@@QEAAAEAV0@AEBV0@@Z */
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}




/* public: class CLogWriter & __ptr64 __cdecl CLogWriter::operator=(class CLogWriter && __ptr64)
   __ptr64 */

CLogWriter * __thiscall CLogWriter::operator=(CLogWriter *this,CLogWriter *param_1)

{
                    /* 0x1b80  2  ??4CLogWriter@@QEAAAEAV0@$$QEAV0@@Z
                       0x1b80  3  ??4CLogWriter@@QEAAAEAV0@AEBV0@@Z */
  return this;
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
LAB_180001bba:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_180023d40 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_180023d40;
        pvVar1 = DAT_180023d40;
      }
      DAT_180023d40 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_180001bba;
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
  int iVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_180001000();
    iVar2 = _configure_narrow_argv((int)uVar3);
    if (iVar2 != 0) {
      return CONCAT44(extraout_var_00,iVar2) & 0xffffffffffffff00;
    }
    iVar2 = common_initialize_environment_nolock<char>();
    uVar3 = CONCAT44(extraout_var_01,iVar2);
  }
  else {
    uVar3 = __isa_available_init();
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




/* Library Function - Single Match
    __scrt_dllmain_before_initialize_c
   
   Library: Visual Studio 2017 Release */

bool __scrt_dllmain_before_initialize_c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180001d44(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  bool bVar1;
  
  bVar1 = __vcrt_thread_attach();
  if (bVar1) {
    bVar1 = FUN_180008f04();
    if (bVar1) {
      return 1;
    }
    __vcrt_thread_detach();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,int param_5,
               undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)param_4)(param_1,0,param_3);
  }
  FUN_180007f3c(param_5,param_6);
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180023d50);
    return;
  }
  iVar2 = FUN_18000836c();
  if (iVar2 == 0) {
    _cexit();
  }
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_critical
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_180008f60();
  FUN_18000366c();
  return;
}




/* Library Function - Single Match
    __scrt_initialize_crt
   
   Library: Visual Studio 2017 Release */

ulonglong __scrt_initialize_crt(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_180023d48 = 1;
  }
  __isa_available_init();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180008ef0();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180001d44(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180023d49 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180023018;
      _DAT_180023d50 = in_RAX;
      uRam0000000180023d58 = in_RAX;
      _DAT_180023d60 = in_RAX;
      _DAT_180023d68 = in_RAX;
      uRam0000000180023d70 = in_RAX;
      _DAT_180023d78 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table((ulonglong *)&DAT_180023d50);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((ulonglong *)&DAT_180023d68), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180023d49 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180001eaa) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000220; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000310;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180001e93;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180001e93:
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
    DAT_180023d40 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined8 __scrt_uninitialize_crt(bool param_1,char param_2)

{
  undefined8 in_RAX;
  
  if ((DAT_180023d48 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize(param_1);
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
  
  bVar2 = (byte)DAT_180023018 & 0x3f;
  if (((DAT_180023018 ^ _DAT_180023d50) >> bVar2 | (DAT_180023018 ^ _DAT_180023d50) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = FUN_180008cd8(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180023d50,_Func);
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

undefined8 FUN_180001f70(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180023d80,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_1800020c2;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180023db0 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180023db0 != (HANDLE)0x0) goto LAB_180002060;
  }
  else {
    DAT_180023db0 = (HANDLE)0x0;
    (*pFVar3)(&DAT_180023da8);
    bVar7 = 0x40 - ((byte)DAT_180023018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180023db8 = DAT_180023018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180023dc0 = DAT_180023018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180002060:
    uVar6 = FUN_180001d44(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_1800020d0);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_1800020c2:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_1800020d0(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  if (DAT_180023db0 != (HANDLE)0x0) {
    CloseHandle(DAT_180023db0);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  uVar1 = (ulonglong)_tls_index;
  DAT_180023004 = DAT_180023004 + 1;
  *param_1 = DAT_180023004;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180023004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1800021dc:
                    /* WARNING: Could not recover jumptable at 0x0001800021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180023004;
      goto LAB_1800021dc;
    }
    _Init_thread_wait(100);
  } while( true );
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_notify
   
   Library: Visual Studio 2017 Release */

void _Init_thread_notify(void)

{
  byte bVar1;
  
  if (DAT_180023db0 == (HANDLE)0x0) {
    bVar1 = (byte)DAT_180023018 & 0x3f;
    (*(code *)((DAT_180023018 ^ _DAT_180023dc0) >> bVar1 |
              (DAT_180023018 ^ _DAT_180023dc0) << 0x40 - bVar1))(&DAT_180023da8);
    return;
  }
  SetEvent(DAT_180023db0);
                    /* WARNING: Could not recover jumptable at 0x000180002239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetEvent(DAT_180023db0);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180023db0 == (HANDLE)0x0) {
    bVar1 = (byte)DAT_180023018 & 0x3f;
    (*(code *)((DAT_180023018 ^ _DAT_180023db8) >> bVar1 |
              (DAT_180023018 ^ _DAT_180023db8) << 0x40 - bVar1))
              (&DAT_180023da8,&DAT_180023d80,param_1);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
  WaitForSingleObjectEx(DAT_180023db0,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001800022b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180023d80);
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
  if ((_StackCookie == DAT_180023018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 * FUN_180002374(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180009034(param_1);
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
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (param_2 == 0) {
    if (DAT_180023dcc < 1) {
      uVar6 = 0;
    }
    else {
      DAT_180023dcc = DAT_180023dcc + -1;
      uVar7 = __scrt_acquire_startup_lock();
      if (DAT_180023d38 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180002d50();
      FID_conflict__RTC_Initialize();
      DAT_180023d38 = 0;
      __scrt_dllmain_uninitialize_critical();
      __scrt_release_startup_lock((char)uVar7);
      uVar7 = __scrt_uninitialize_crt(param_3 != (void *)0x0,'\0');
      uVar6 = (uint)((char)uVar7 != '\0');
    }
    return uVar6;
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
  uVar7 = __scrt_initialize_crt(0);
  if ((char)uVar7 != '\0') {
    uVar7 = __scrt_acquire_startup_lock();
    bVar2 = true;
    if (DAT_180023d38 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    DAT_180023d38 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180002d40();
      __scrt_initialize_default_local_stdio_options();
      uVar8 = _initterm_e((undefined8 *)&DAT_180018300,(undefined8 *)&DAT_180018328);
      if (((int)uVar8 == 0) && (uVar8 = __scrt_dllmain_after_initialize_c(), (char)uVar8 != '\0')) {
        _initterm((undefined8 *)&DAT_1800182f0,(undefined8 *)&DAT_1800182f8);
        DAT_180023d38 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar7);
    if (!bVar2) {
      plVar9 = (longlong *)FUN_180002d80();
      if ((*plVar9 != 0) &&
         (uVar10 = __scrt_is_nonwritable_in_current_image((longlong)plVar9), (char)uVar10 != '\0'))
      {
        (*(code *)*plVar9)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180023dcc = DAT_180023dcc + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180002660) */
/* WARNING: Removing unreachable block (ram,0x0001800025ef) */
/* WARNING: Removing unreachable block (ram,0x0001800026a3) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180023dcc < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180001000();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180001000();
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




/* WARNING: Removing unreachable block (ram,0x0001800027de) */
/* WARNING: Removing unreachable block (ram,0x00018000275c) */
/* WARNING: Removing unreachable block (ram,0x000180002737) */
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
  
  DAT_180023024 = 2;
  DAT_180023020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    DAT_180023028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_180023dd0 = DAT_180023dd0 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_180023dd0 = DAT_180023dd0 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    DAT_180023020 = 2;
    DAT_180023024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_180023024 = 0xe;
      DAT_180023020 = 3;
      if ((uVar6 & 0x20) != 0) {
        DAT_180023020 = 5;
        DAT_180023024 = 0x2e;
      }
    }
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180024f78 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002898(void)

{
  _DAT_180023dd4 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800028d3;
  FUN_180002898();
  *(undefined8 *)(puVar4 + -8) = 0x1800028e4;
  FUN_180003460((undefined1 (*) [16])local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800028ee;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180002908;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180002949;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000297b;
  FUN_180003460((undefined1 (*) [16])(puVar4 + 0x50),0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000299d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800029be;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800029c9;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800029d9;
    FUN_180002898();
  }
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
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180002a1d. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180002a4e;
  capture_previous_context((PCONTEXT)&DAT_180023e80);
  _DAT_180023df0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180023f18 = puVar3 + 0x40;
  _DAT_180023f00 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180023de0 = 0xc0000409;
  _DAT_180023de4 = 1;
  _DAT_180023df8 = 1;
  DAT_180023e00 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180023018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180023010;
  *(undefined8 *)(puVar3 + -8) = 0x180002af0;
  DAT_180023f78 = _DAT_180023df0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180018690);
  return;
}




/* Library Function - Single Match
    __report_rangecheckfailure
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  *(undefined8 *)(puVar3 + -8) = 0x180002b36;
  capture_current_context((PCONTEXT)&DAT_180023e80);
  _DAT_180023df0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_180023f18 = puVar3 + 0x30;
  _DAT_180023de0 = 0xc0000409;
  _DAT_180023de4 = 1;
  _DAT_180023df8 = 1;
  DAT_180023e00 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180002ba2;
  DAT_180023f78 = _DAT_180023df0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180018690);
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




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_180023018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180023018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180023018 == 0x2b992ddfa232) {
      DAT_180023018 = 0x2b992ddfa233;
    }
  }
  DAT_180023010 = ~DAT_180023018;
  return;
}




void FUN_180002d40(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180002d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180024350);
  return;
}




void FUN_180002d50(void)

{
  FUN_1800039d4((PSLIST_HEADER)&DAT_180024350);
  return;
}




undefined * FUN_180002d5c(void)

{
  return &DAT_180024360;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180001aa0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180002d5c();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180002d80(void)

{
  return &DAT_180024f70;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180020ac0; puVar1 < &DAT_180020ac0; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180020ad0; puVar1 < &DAT_180020ad0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    _purecall
   
   Library: Visual Studio 2017 Release */

void _purecall(void)

{
  code *pcVar1;
  byte bVar2;
  
  bVar2 = (byte)DAT_180023018 & 0x3f;
  pcVar1 = (code *)((DAT_180023018 ^ DAT_180024370) >> bVar2 |
                   (DAT_180023018 ^ DAT_180024370) << 0x40 - bVar2);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
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
  
  iVar1 = FUN_180003c7c(param_2,param_1);
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
  iVar1 = FUN_180003c7c(param_3,param_2);
  p_Var3 = CatchTryBlock(param_3,iVar1);
  if (p_Var3 == (_s_TryBlockMapEntry *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(p_Var3 + 4);
  }
  FUN_180004e00(p_Var2,param_2,param_3,iVar1);
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
  iVar2 = FUN_180003c7c(param_3,param_2);
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




undefined8 * FUN_180003040(undefined8 *param_1,undefined8 *param_2,int param_3)

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
  iVar7 = FUN_180003c7c(p_Var2,p_Var3);
  if (uVar8 == 0) {
    terminate();
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




void FUN_18000319c(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_5b8 [32];
  EXCEPTION_RECORD local_588;
  _CONTEXT local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStackY_5b8;
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
  local_588.ExceptionInformation[0] = (ULONG_PTR)&LAB_180004b8c;
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
  terminate();
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




void FUN_180003378(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}




void FUN_180003390(undefined8 param_1)

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
  FUN_180004854(param_1,&local_res8,param_3,param_4,
                (_s_FuncInfo *)
                ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar1 + 0x60)),0,
                (__uint64 *)0x0,0);
  return;
}




undefined1 (*) [16] FUN_180003460(undefined1 (*param_1) [16],byte param_2,ulonglong param_3)

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
    if ((DAT_180023dd0 >> 1 & 1) != 0) {
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
    __vcrt_initialize
   
   Library: Visual Studio 2017 Release */

ulonglong __vcrt_initialize(void)

{
  ulonglong uVar1;
  
  FUN_180003a00();
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
    __vcrt_thread_attach
   
   Library: Visual Studio 2017 Release */

bool __vcrt_thread_attach(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  return pvVar1 != (LPVOID)0x0;
}




/* Library Function - Single Match
    __vcrt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __vcrt_thread_detach(void)

{
  __vcrt_freeptd((undefined *)0x0);
  return 1;
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




undefined1 FUN_18000366c(void)

{
  __vcrt_uninitialize_ptd();
  return 1;
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
      FUN_1800038fc(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}




void FUN_1800038fc(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001800038fc. Too many branches */
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
    terminate();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return 0;
}




void Unwind_1800039a0(void)

{
  code *pcVar1;
  
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
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




void FUN_1800039d4(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    FUN_180009034(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}




void FUN_180003a00(void)

{
  DAT_180024370 = DAT_180023018;
  return;
}




/* Library Function - Single Match
    __vcrt_freeptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_freeptd(undefined *param_1)

{
  if (DAT_180023030 != 0xffffffff) {
    if (param_1 == (undefined *)0x0) {
      param_1 = (undefined *)__vcrt_FlsGetValue(DAT_180023030);
    }
    __vcrt_FlsSetValue(DAT_180023030,(LPVOID)0x0);
    if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_180024380)) {
      FUN_180009034(param_1);
    }
  }
  return;
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
  
  if (DAT_180023030 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_180023030);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_180023030,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x90);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_180023030,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_180023030,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(undefined4 *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        *(undefined8 *)((longlong)pvVar3 + 0x80) = 0xfffffffffffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      FUN_180009034(pvVar2);
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
  
  uVar2 = __vcrt_FlsAlloc(&LAB_180003a10);
  DAT_180023030 = (DWORD)uVar2;
  if (DAT_180023030 != 0xffffffff) {
    iVar1 = __vcrt_FlsSetValue(DAT_180023030,&DAT_180024380);
    if (iVar1 != 0) {
      _DAT_1800243f8 = 0xfffffffe;
      _DAT_180024400 = 0xfffffffffffffffe;
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
  if (DAT_180023030 != -1) {
    __vcrt_FlsFree(DAT_180023030);
    DAT_180023030 = -1;
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




void FUN_180003c7c(_s_FuncInfo *param_1,_xDISPATCHER_CONTEXT *param_2)

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
  terminate();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulonglong FUN_180003cec(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

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
  if ((((*param_3 & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_180024368 == 0)) {
    if ((*param_3 & 8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
        *param_2 = lVar2;
        goto LAB_180003e0b;
      }
      goto LAB_180003ece;
    }
    if ((*param_4 & 1) != 0) {
      if ((*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
        FUN_1800058f0(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 8) {
          return 0;
        }
        if (*param_2 == 0) {
          return 0;
        }
        lVar2 = *param_2;
        goto LAB_180003e0b;
      }
      goto LAB_180003ed3;
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
      goto LAB_180003edd;
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
      iVar7 = *(int *)(param_4 + 0x14);
      puVar3 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
      FUN_1800058f0(param_2,puVar3,(longlong)iVar7);
      return 0;
    }
  }
  else {
    lVar2 = (*(code *)DAT_180024368)();
    if ((lVar2 != 0) && (param_2 != (longlong *)0x0)) {
      *param_2 = lVar2;
LAB_180003e0b:
      lVar2 = __AdjustPointer(lVar2,(int *)(param_4 + 8));
      *param_2 = lVar2;
      return 0;
    }
    terminate();
LAB_180003ece:
    terminate();
LAB_180003ed3:
    terminate();
  }
  terminate();
LAB_180003edd:
  terminate();
  terminate();
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
  uVar1 = FUN_180003cec((longlong)param_1,(longlong *)param_2,(byte *)param_3,(byte *)param_4);
  if ((int)uVar1 == 1) {
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar2 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(lVar2 + *(int *)(param_4 + 0x18));
    }
    lVar2 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    FUN_180005198(pvVar4,UNRECOVERED_JUMPTABLE,lVar2);
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
  FUN_18000319c(param_2,(ULONG_PTR)param_1,(ULONG_PTR)param_3,(ULONG_PTR)p_Var1,
                lVar2 + *(int *)(param_6 + 0xc),(ULONG_PTR)param_5,*(int *)param_8,
                CONCAT44(in_stack_ffffffffffffffb4,*(undefined4 *)(param_8 + 8)),param_6,
                (undefined8 *)param_4,param_12);
  return;
}




void FUN_18000407c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
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
  if ((iVar9 < -1) || (param_5->maxState <= iVar9)) goto LAB_1800044d7;
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
    FUN_180003390(*(undefined8 *)(param_1 + 0x38));
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
    goto LAB_1800044d7;
    lVar11 = __vcrt_getptd();
    if (*(longlong *)(lVar11 + 0x38) != 0) {
      lVar11 = __vcrt_getptd();
      p_Var3 = *(_s_ESTypeList **)(lVar11 + 0x38);
      lVar11 = __vcrt_getptd();
      *(undefined8 *)(lVar11 + 0x38) = 0;
      cVar6 = FUN_18000502c((longlong)param_1,(int *)p_Var3);
      if (cVar6 == '\0') {
        uVar7 = Is_bad_exception_allowed(p_Var3);
        if (uVar7 != '\0') {
          __DestructExceptionObject((int *)param_1);
          FUN_180004adc((undefined8 *)&local_80);
          FUN_180005800((longlong *)&local_80,&DAT_180021e28);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_1800044d7;
      }
    }
  }
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  local_68 = param_5;
  local_60 = param_4;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
     (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
    if (param_5->nTryBlocks != 0) {
      FUN_180003040((undefined8 *)&local_58,&local_68,iVar9);
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
                    goto LAB_180004365;
                  }
                  piVar12 = piVar12 + 1;
                }
                uVar17 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar17;
              } while (uVar17 != uVar2);
            }
          }
LAB_180004365:
          uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
          uVar16 = uVar16 + 1;
        } while (uVar16 < local_40);
        if (bVar8) goto LAB_18000448c;
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
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) goto LAB_1800044d7;
        if (param_5->dispESTypeList != 0) {
          lVar11 = _GetImageBase();
          piVar12 = (int *)(lVar11 + (int)param_5->dispESTypeList);
        }
        cVar6 = FUN_18000502c((longlong)param_1,piVar12);
        if (cVar6 == '\0') {
          p_Var15 = __FrameHandler3::GetEstablisherFrame
                              (param_2,param_4,param_5,(__uint64 *)&local_90);
          FUN_18000319c(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)p_Var15,0,
                        (ULONG_PTR)param_5,-1,CONCAT44(uVar20,0xffffffff),0,(undefined8 *)param_4,
                        param_6);
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != 0) goto LAB_1800044d7;
    FUN_1800044e0(param_1,param_2,local_res18,param_4,param_5,iVar9,param_7,param_8);
  }
LAB_18000448c:
  lVar11 = __vcrt_getptd();
  if (*(longlong *)(lVar11 + 0x38) == 0) {
    return;
  }
LAB_1800044d7:
  terminate();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}




void FUN_1800044e0(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
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
      terminate();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180003040((undefined8 *)&local_58,&local_78,param_6);
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
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_1800046de;
          }
          if (((byte)*p_Var7 & 0x40) == 0) {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var7,(_s_CatchableType *)0x0,p_Var5
                       ,param_7,param_8,'\x01','\0');
          }
        }
LAB_1800046de:
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
FUN_180004854(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
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
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_1800048da;
        goto LAB_1800048c0;
      }
    }
    else {
LAB_1800048c0:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_1800048da;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_1800048da:
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
LAB_180004a94:
          terminate();
          pcVar4 = (code *)swi(3);
          uVar3 = (*pcVar4)();
          return uVar3;
        }
      }
      else {
        if (*(int *)param_1 != -0x7fffffd7) goto LAB_180004960;
        iVar1 = *(int *)(param_1 + 0x38);
        if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_180004a94;
        param_2 = *(__uint64 **)(param_1 + 0x28);
      }
      FUN_180004e00(param_2,param_4,param_5,iVar1);
      return 1;
    }
LAB_180004960:
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
      if (lVar2 != 0) goto LAB_1800049c4;
    }
    if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
      return 1;
    }
    if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
      return 1;
    }
  }
LAB_1800049c4:
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
  FUN_18000407c(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
  return 1;
}




undefined8 * FUN_180004a9c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




undefined8 * FUN_180004adc(undefined8 *param_1)

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




undefined8 * FUN_180004b48(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180009034(param_1);
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




void FUN_180004e00(__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

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
LAB_180004f8d:
      terminate();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
      terminate();
      goto LAB_180004f8d;
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
      FUN_180003378(uVar3);
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
  
  iVar1 = FUN_180003c7c(param_3,param_2);
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




undefined1 FUN_18000502c(longlong param_1,int *param_2)

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
    terminate();
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
      uVar1 = __std_type_info_compare(lVar2 + 8,0x180023ab8);
      if (uVar1 == 0) {
        return '\x01';
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar4 < *(int *)param_1);
  }
  return '\0';
}




void FUN_180005198(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00018000519e. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x0001800051b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2)(param_1,param_3,param_4);
  return;
}




char * FUN_1800051b4(longlong param_1)

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
                      ((LPCRITICAL_SECTION)(&DAT_180024410 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_180024438 = DAT_180024438 + 1;
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
  
  uVar1 = (ulonglong)DAT_180024438;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180024410 + uVar1 * 0x28));
    DAT_180024438 = DAT_180024438 - 1;
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
  
  bVar3 = (byte)DAT_180023018 & 0x3f;
  pvVar7 = (void *)((DAT_180023018 ^ (&DAT_180024458)[param_1]) >> bVar3 |
                   (DAT_180023018 ^ (&DAT_180024458)[param_1]) << 0x40 - bVar3);
  if (pvVar7 != (void *)0xffffffffffffffff) {
    if (pvVar7 != (void *)0x0) {
      return pvVar7;
    }
    if (param_3 != param_4) {
      do {
        mVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_180024440)[mVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_180018798)[mVar2];
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
            lVar1 = (&DAT_180024440)[mVar2];
            (&DAT_180024440)[mVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_18000537a;
          }
          LOCK();
          (&DAT_180024440)[mVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18000537a:
          if (hLibModule != (HMODULE)0x0) goto LAB_180005395;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hLibModule = (HMODULE)0x0;
LAB_180005395:
    if ((hLibModule != (HMODULE)0x0) &&
       (pFVar6 = GetProcAddress(hLibModule,param_2), pFVar6 != (FARPROC)0x0)) {
      bVar3 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
      LOCK();
      (&DAT_180024458)[param_1] =
           ((ulonglong)pFVar6 >> bVar3 | (longlong)pFVar6 << 0x40 - bVar3) ^ DAT_180023018;
      UNLOCK();
      return pFVar6;
    }
    bVar3 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_180024458)[param_1] = (0xffffffffffffffffU >> bVar3 | -1L << 0x40 - bVar3) ^ DAT_180023018
    ;
    UNLOCK();
  }
  return (void *)0x0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0,"FlsAlloc",(module_id *)&DAT_180018868,(module_id *)"FlsAlloc"
                                   );
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000545e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_FlsFree
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsFree(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(1,"FlsFree",(module_id *)&DAT_180018880,(module_id *)"FlsFree");
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800054a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_1);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsGetValue(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(2,"FlsGetValue",(module_id *)&DAT_180018890,
                                    (module_id *)"FlsGetValue");
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800054ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_1);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2017 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(3,"FlsSetValue",(module_id *)&DAT_1800188a8,
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
  
  pcVar1 = (code *)try_get_function(4,"InitializeCriticalSectionEx",(module_id *)&DAT_1800188c0,
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
  
  uVar1 = DAT_180023018;
  puVar3 = &DAT_180024458;
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
    puVar1 = &DAT_180024440;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_180024458);
  }
  return;
}




void FUN_180005630(void)

{
  return;
}




void FUN_180005660(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x000180005677) */
/* WARNING: Removing unreachable block (ram,0x00018000568d) */
/* WARNING: Removing unreachable block (ram,0x000180005693) */
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
  
  pcVar1 = (code *)FUN_180005630();
  (*pcVar1)();
  FUN_180005660();
  FUN_180005630();
  return;
}




/* Library Function - Single Match
    __std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar3 = lVar1;
      lVar1 = lVar3 + 1;
    } while (*(char *)(*param_1 + lVar3 + 1) != '\0');
    pcVar2 = (char *)_malloc_base(lVar3 + 2);
    if (pcVar2 != (char *)0x0) {
      FUN_1800090a8(pcVar2,lVar3 + 2,*param_1);
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = (longlong)pcVar2;
      pcVar2 = (char *)0x0;
    }
    FUN_180009034(pcVar2);
  }
  return;
}




/* Library Function - Single Match
    __std_exception_destroy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_destroy(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_180009034((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180005800(longlong *param_1,byte *param_2)

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




void FUN_1800058d0(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *in_R10;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *in_R10;
    in_R10 = in_R10 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




undefined8 * FUN_1800058f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

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
      if ((DAT_180023dd0 >> 1 & 1) != 0) {
        puVar10 = (undefined8 *)FUN_1800058d0((undefined1 *)param_1,lVar12,param_3);
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
        if (DAT_180023028 < uVar14) {
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




ulong FUN_180005d18(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  ulong *puVar2;
  char *pcVar3;
  longlong lVar4;
  ulong uVar5;
  longlong lVar6;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    pcVar3 = param_1;
    if (param_3 != 0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      if (param_2 != 0) {
        lVar6 = param_3 - (longlong)pcVar3;
        do {
          lVar4 = param_2;
          cVar1 = pcVar3[lVar6];
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          if (cVar1 == '\0') break;
          param_2 = lVar4 + -1;
        } while (lVar4 + -1 != 0);
        lVar6 = lVar4 + -1;
        if (cVar1 == '\0') {
          lVar6 = lVar4;
        }
        if (lVar6 != 0) {
          return 0;
        }
        *param_1 = '\0';
        puVar2 = __doserrno();
        uVar5 = 0x22;
        goto LAB_180005d3b;
      }
    }
    *param_1 = '\0';
  }
  puVar2 = __doserrno();
  uVar5 = 0x16;
LAB_180005d3b:
  *puVar2 = uVar5;
  FUN_1800093f4();
  return uVar5;
}




void FUN_180005d98(uchar *param_1,uchar *param_2)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1800098f0();
  _mbstok_s_l(param_1,param_2,(uchar **)(p_Var1 + 0x38),(_locale_t)0x0);
  return;
}




FILE * FUN_180005de0(char *param_1,char *param_2,int param_3)

{
  ulong *puVar1;
  FILE *pFVar2;
  FILE *local_res8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_1800093f4();
  }
  else if (*param_1 == '\0') {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
  }
  else {
    __acrt_stdio_allocate_stream();
    if (local_res8 != (FILE *)0x0) {
      pFVar2 = _openfile(param_1,param_2,param_3,local_res8);
      if (pFVar2 == (FILE *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_180009ee0((longlong)local_res8);
      return pFVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x18;
  }
  return (FILE *)0x0;
}




ulong FUN_180005e98(undefined8 *param_1,char *param_2,char *param_3)

{
  ulong *puVar1;
  FILE *pFVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = __doserrno();
    uVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_1800093f4();
  }
  else {
    pFVar2 = FUN_180005de0(param_2,param_3,0x80);
    *param_1 = pFVar2;
    if (pFVar2 == (FILE *)0x0) {
      puVar1 = __doserrno();
      uVar3 = *puVar1;
    }
  }
  return uVar3;
}




/* Library Function - Single Match
    _fclose_nolock
   
   Library: Visual Studio 2017 Release */

int __cdecl _fclose_nolock(FILE *_File)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 uVar4;
  
  if (_File == (FILE *)0x0) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_1800093f4();
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




int FUN_180005f74(FILE *param_1)

{
  int iVar1;
  ulong *puVar2;
  
  if (param_1 == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_1800093f4();
  }
  else {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
      FUN_180009ed4((longlong)param_1);
      iVar1 = _fclose_nolock(param_1);
      FUN_180009ee0((longlong)param_1);
      return iVar1;
    }
    __acrt_stdio_free_stream();
  }
  return -1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
   __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
   <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
   <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
   <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
   __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
   <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
   <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
   __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
   <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;
  
  FUN_180009ed4(*param_2);
  uVar1 = FID_conflict_operator__(param_3);
  FUN_180009ee0(*param_4);
  return uVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: unsigned __int64 __cdecl
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed>::operator()(void)const __ptr64
    public: unsigned __int64 __cdecl
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

ulonglong FID_conflict_operator__(undefined8 *param_1)

{
  FILE *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  pFVar1 = *(FILE **)*param_1;
  uVar2 = __acrt_stdio_begin_temporary_buffering_nolock(pFVar1);
  uVar3 = FUN_18000607c(*(byte **)param_1[1],*(ulonglong *)param_1[2],*(ulonglong *)param_1[3],
                        *(FILE **)*param_1);
  __acrt_stdio_end_temporary_buffering_nolock((char)uVar2,pFVar1);
  return uVar3;
}




ulonglong FUN_18000607c(byte *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (byte *)0x0 &&
        (auVar3._8_8_ = 0, auVar3._0_8_ = param_2,
        param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0))))) {
      if (((ulonglong)param_4->_base & 0x4c000000000) == 0) {
        uVar12 = 0x1000;
      }
      else {
        uVar12 = param_4->_charbuf;
      }
      uVar11 = param_2 * param_3;
LAB_180006119:
      do {
        if (uVar11 == 0) {
          return param_3;
        }
        if (((ulonglong)param_4->_base & 0xc000000000) != 0) {
          iVar2 = *(int *)&param_4->_base;
          if (iVar2 != 0) {
            if (iVar2 < 0) goto LAB_1800061d9;
            iVar10 = (int)uVar11;
            uVar8 = uVar11;
            if ((ulonglong)(longlong)iVar2 <= uVar11) {
              uVar8 = (longlong)iVar2;
              iVar10 = iVar2;
            }
            FUN_1800058f0((undefined8 *)param_4->_ptr,(undefined8 *)param_1,uVar8);
            uVar11 = uVar11 - uVar8;
            *(int *)&param_4->_base = *(int *)&param_4->_base - iVar10;
            param_4->_ptr = param_4->_ptr + uVar8;
            param_1 = param_1 + uVar8;
            goto LAB_180006119;
          }
        }
        if (uVar11 < uVar12) {
          uVar8 = __acrt_stdio_flush_and_write_narrow_nolock(*param_1,param_4);
          if ((int)uVar8 == -1) goto LAB_1800061de;
          param_1 = param_1 + 1;
          uVar11 = uVar11 - 1;
          uVar12 = 1;
          if (0 < param_4->_charbuf) {
            uVar12 = param_4->_charbuf;
          }
        }
        else {
          if ((((ulonglong)param_4->_base & 0xc000000000) != 0) &&
             (uVar7 = __acrt_stdio_flush_nolock(param_4), (int)uVar7 != 0)) goto LAB_1800061de;
          uVar8 = uVar11;
          if (uVar12 != 0) {
            uVar8 = uVar11 - uVar11 % (ulonglong)uVar12;
          }
          uVar9 = 0xfffffffe;
          if (uVar8 < 0xfffffffe) {
            uVar9 = (uint)uVar8;
          }
          uVar5 = _fileno(param_4);
          uVar5 = FUN_18000ae7c(uVar5,param_1,uVar9);
          if (uVar5 == 0xffffffff) goto LAB_1800061d9;
          uVar4 = uVar5;
          if (uVar9 < uVar5) {
            uVar4 = uVar9;
          }
          uVar11 = uVar11 - uVar4;
          param_1 = param_1 + uVar4;
          if (uVar5 < uVar9) {
LAB_1800061d9:
            LOCK();
            puVar1 = (uint *)((longlong)&param_4->_base + 4);
            *puVar1 = *puVar1 | 0x10;
            UNLOCK();
LAB_1800061de:
            return (param_2 * param_3 - uVar11) / param_2;
          }
        }
      } while( true );
    }
    puVar6 = __doserrno();
    *puVar6 = 0x16;
    FUN_1800093f4();
  }
  return 0;
}




/* Library Function - Single Match
    fwrite
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  ulong *puVar1;
  ulonglong uVar2;
  void *local_res8;
  size_t local_res10;
  size_t local_res18;
  FILE *local_res20;
  undefined1 local_48 [8];
  FILE *local_40;
  FILE *local_38;
  FILE **local_30;
  void **local_28;
  size_t *local_20;
  size_t *local_18;
  
  if ((_Size != 0) && (_Count != 0)) {
    local_res8 = _Str;
    local_res10 = _Size;
    local_res18 = _Count;
    local_res20 = _File;
    if (_File != (FILE *)0x0) {
      local_30 = &local_res20;
      local_28 = &local_res8;
      local_20 = &local_res10;
      local_18 = &local_res18;
      local_40 = _File;
      local_38 = _File;
      uVar2 = operator()<>(local_48,(longlong *)&local_38,&local_30,(longlong *)&local_40);
      return uVar2;
    }
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_1800093f4();
  }
  return 0;
}




/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::format_validation_base,char>(unsigned
   __int64,char * __ptr64 const,unsigned __int64,char const * __ptr64 const,struct
   __crt_locale_pointers * __ptr64 const,char * __ptr64 const)
   
   Library: Visual Studio 2017 Release */

int __cdecl
common_vsprintf<class___crt_stdio_output::format_validation_base,char>
          (__uint64 param_1,char *param_2,__uint64 param_3,char *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  int iVar1;
  int extraout_EAX;
  ulong *puVar2;
  undefined1 auStack_528 [32];
  char *local_508;
  __uint64 local_500;
  __uint64 local_4f8;
  undefined1 local_4f0;
  longlong local_4e8;
  undefined1 local_4e0 [16];
  char local_4d0;
  __uint64 local_4c8;
  undefined1 *local_4c0;
  undefined8 local_4b8;
  char *local_4b0;
  char *local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined2 local_488;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_70;
  LPVOID local_68;
  char **local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180023018 ^ (ulonglong)auStack_528;
  if ((param_4 == (char *)0x0) || ((param_3 != 0 && (param_2 == (char *)0x0)))) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_1800093f4();
    goto LAB_180006432;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_4e8,param_5);
  FUN_180003460((undefined1 (*) [16])&local_508,0,0x20);
  local_4f8 = 0;
  if (((param_1 & 2) != 0) || (local_4f0 = 0, param_2 == (char *)0x0)) {
    local_4f0 = 1;
  }
  local_60 = &local_508;
  local_4b8 = 0;
  local_4c0 = local_4e0;
  local_4a0 = 0;
  local_4a8 = param_6;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  local_478 = 0;
  local_474 = 0;
  local_70 = 0;
  local_68 = (LPVOID)0x0;
  local_58 = 0;
  local_508 = param_2;
  local_500 = param_3;
  local_4c8 = param_1;
  local_4b0 = param_4;
  iVar1 = FUN_180006ab4(&local_4c8);
  if (param_2 != (char *)0x0) {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        if (param_3 != 0) {
          if (local_4f8 != param_3) goto LAB_180006406;
LAB_18000646c:
          param_2[param_3 - 1] = '\0';
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar1) {
          if (local_4f8 == param_3) goto LAB_18000646c;
          goto LAB_180006406;
        }
        *param_2 = '\0';
      }
    }
    else if (((param_3 != 0) || (iVar1 == 0)) && (local_4f8 != param_3)) {
LAB_180006406:
      param_2[local_4f8] = '\0';
    }
  }
  _free_base(local_68);
  local_68 = (LPVOID)0x0;
  if (local_4d0 != '\0') {
    *(uint *)(local_4e8 + 0x3a8) = *(uint *)(local_4e8 + 0x3a8) & 0xfffffffd;
  }
LAB_180006432:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_528);
  return extraout_EAX;
}




/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_vsprintf<class __crt_stdio_output::format_validation_base,char>(unsigned
   __int64,char * __ptr64 const,unsigned __int64,char const * __ptr64 const,struct
   __crt_locale_pointers * __ptr64 const,char * __ptr64 const)
    int __cdecl common_vsprintf<class __crt_stdio_output::standard_base,char>(unsigned __int64,char
   * __ptr64 const,unsigned __int64,char const * __ptr64 const,struct __crt_locale_pointers *
   __ptr64 const,char * __ptr64 const)
   
   Library: Visual Studio 2017 Release */

void common_vsprintf<>(ulonglong param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                      __crt_locale_pointers *param_5,undefined8 param_6)

{
  int iVar1;
  ulong *puVar2;
  undefined1 auStack_528 [32];
  undefined1 *local_508;
  longlong local_500;
  longlong local_4f8;
  undefined1 local_4f0;
  longlong local_4e8;
  undefined1 local_4e0 [16];
  char local_4d0;
  ulonglong local_4c8;
  undefined1 *local_4c0;
  undefined8 local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined2 local_488;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_70;
  LPVOID local_68;
  undefined1 **local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180023018 ^ (ulonglong)auStack_528;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_1800093f4();
    goto LAB_1800065fe;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_4e8,param_5);
  FUN_180003460((undefined1 (*) [16])&local_508,0,0x20);
  local_4f8 = 0;
  if (((param_1 & 2) != 0) || (local_4f0 = 0, param_2 == (undefined1 *)0x0)) {
    local_4f0 = 1;
  }
  local_60 = &local_508;
  local_4b8 = 0;
  local_4c0 = local_4e0;
  local_4a0 = 0;
  local_4a8 = param_6;
  local_498 = 0;
  local_490 = 0;
  local_488 = 0;
  local_478 = 0;
  local_474 = 0;
  local_70 = 0;
  local_68 = (LPVOID)0x0;
  local_58 = 0;
  local_508 = param_2;
  local_500 = param_3;
  local_4c8 = param_1;
  local_4b0 = param_4;
  iVar1 = FUN_180006cc8(&local_4c8);
  if (param_2 != (undefined1 *)0x0) {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) == 0) {
        if (param_3 != 0) {
          if (local_4f8 != param_3) goto LAB_1800065d2;
LAB_180006638:
          param_2[param_3 + -1] = 0;
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar1) {
          if (local_4f8 == param_3) goto LAB_180006638;
          goto LAB_1800065d2;
        }
        *param_2 = 0;
      }
    }
    else if (((param_3 != 0) || (iVar1 == 0)) && (local_4f8 != param_3)) {
LAB_1800065d2:
      param_2[local_4f8] = 0;
    }
  }
  _free_base(local_68);
  local_68 = (LPVOID)0x0;
  if (local_4d0 != '\0') {
    *(uint *)(local_4e8 + 0x3a8) = *(uint *)(local_4e8 + 0x3a8) & 0xfffffffd;
  }
LAB_1800065fe:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_528);
  return;
}




bool FUN_180006640(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulong *puVar2;
  LPVOID pvVar3;
  bool bVar4;
  
  if (param_2 < 0x8000000000000000) {
    uVar1 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar4 = true;
    }
    else {
      pvVar3 = _malloc_base(uVar1);
      bVar4 = pvVar3 != (LPVOID)0x0;
      if (bVar4) {
        _free_base(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar3;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      _free_base((LPVOID)0x0);
    }
  }
  else {
    puVar2 = __doserrno();
    *puVar2 = 0xc;
    bVar4 = false;
  }
  return bVar4;
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
     6 names - too many to list
   
   Library: Visual Studio 2017 Release */

void type_case_integer_parse_into_buffer<>(longlong param_1,uint param_2,uint param_3,byte param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x460);
  if (lVar4 == 0) {
    uVar1 = 0x200;
    lVar4 = param_1 + 0x58;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x458) >> 1;
  }
  uVar1 = lVar4 + -1 + uVar1;
  *(ulonglong *)(param_1 + 0x48) = uVar1;
  uVar2 = uVar1 & 0xffffffff;
  while ((0 < *(int *)(param_1 + 0x38) || (param_2 != 0))) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    cVar3 = (char)(param_2 % param_3) + '0';
    if ('9' < cVar3) {
      cVar3 = cVar3 + (param_4 ^ 1) * ' ' + '\a';
    }
    **(char **)(param_1 + 0x48) = cVar3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
    uVar2 = *(ulonglong *)(param_1 + 0x48);
    param_2 = param_2 / param_3;
  }
  *(int *)(param_1 + 0x50) = (int)uVar1 - (int)uVar2;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
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
     6 names - too many to list
   
   Library: Visual Studio 2017 Release */

void type_case_integer_parse_into_buffer<>
               (longlong param_1,ulonglong param_2,ulonglong param_3,byte param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x460);
  if (lVar3 == 0) {
    uVar1 = 0x200;
    lVar3 = param_1 + 0x58;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x458) >> 1;
  }
  uVar1 = lVar3 + -1 + uVar1;
  *(ulonglong *)(param_1 + 0x48) = uVar1;
  uVar2 = uVar1 & 0xffffffff;
  while ((0 < *(int *)(param_1 + 0x38) || (param_2 != 0))) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    cVar4 = (char)(param_2 % (param_3 & 0xffffffff)) + '0';
    if ('9' < cVar4) {
      cVar4 = cVar4 + (param_4 ^ 1) * ' ' + '\a';
    }
    **(char **)(param_1 + 0x48) = cVar4;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
    uVar2 = *(ulonglong *)(param_1 + 0x48);
    param_2 = param_2 / (param_3 & 0xffffffff);
  }
  *(int *)(param_1 + 0x50) = (int)uVar1 - (int)uVar2;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  return;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::write_multiple_characters<class
   __crt_stdio_output::string_output_adapter<char>,char>(class
   __crt_stdio_output::string_output_adapter<char> const & __ptr64,char,int,int * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__crt_stdio_output::
write_multiple_characters<class___crt_stdio_output::string_output_adapter<char>,char>
          (string_output_adapter<char> *param_1,char param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_3) {
    iVar2 = *param_4;
    iVar3 = 0;
    do {
      lVar1 = *(longlong *)param_1;
      if (*(longlong *)(lVar1 + 0x10) == *(longlong *)(lVar1 + 8)) {
        if (*(char *)(lVar1 + 0x18) == '\0') {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar2 + 1;
        }
        *param_4 = iVar2;
      }
      else {
        *param_4 = iVar2 + 1;
        *(longlong *)(*(longlong *)param_1 + 0x10) = *(longlong *)(*(longlong *)param_1 + 0x10) + 1;
        *(char *)**(undefined8 **)param_1 = param_2;
        **(longlong **)param_1 = **(longlong **)param_1 + 1;
        iVar2 = *param_4;
      }
    } while ((iVar2 != -1) && (iVar3 = iVar3 + 1, iVar3 < param_3));
  }
  return;
}




/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar4 = PTR_PTR_DAT_1800232c8._0_4_;
    uVar5 = PTR_PTR_DAT_1800232c8._4_4_;
    uVar6 = PTR_DAT_1800232d0._0_4_;
    uVar7 = PTR_DAT_1800232d0._4_4_;
    if (DAT_180024698 != 0) {
      p_Var3 = FUN_1800098f0();
      *(__acrt_ptd **)this = p_Var3;
      *(longlong *)p_Var1 = *(longlong *)(p_Var3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(p_Var3 + 0x88);
      FUN_18000be20((longlong)p_Var3,(longlong *)p_Var1);
      __acrt_update_multibyte_info(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}




void FUN_180006920(longlong *param_1)

{
  if ((char)param_1[3] != '\0') {
    *(uint *)(*param_1 + 0x3a8) = *(uint *)(*param_1 + 0x3a8) & 0xfffffffd;
  }
  return;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::crop_zeroes(char * __ptr64,struct __crt_locale_pointers *
   __ptr64 const)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __crt_stdio_output::crop_zeroes(char *param_1,__crt_locale_pointers *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != *(char *)**(undefined8 **)(*(longlong *)param_2 + 0xf8)))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(undefined8 **)(*(longlong *)param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    do {
      cVar1 = *param_1;
      pcVar3 = pcVar3 + 1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}




/* Library Function - Single Match
    void __cdecl __crt_stdio_output::force_decimal_point(char * __ptr64,struct __crt_locale_pointers
   * __ptr64 const)
   
   Library: Visual Studio 2017 Release */

void __cdecl __crt_stdio_output::force_decimal_point(char *param_1,__crt_locale_pointers *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  
  iVar2 = tolower((int)*param_1);
  if (iVar2 != 0x65) {
    do {
      param_1 = (char *)((byte *)param_1 + 1);
      uVar3 = FUN_18000b51c((uint)(byte)*param_1);
    } while (uVar3 != 0);
  }
  iVar2 = tolower((int)*param_1);
  if (iVar2 == 0x78) {
    param_1 = (char *)((byte *)param_1 + 2);
  }
  bVar4 = *param_1;
  *param_1 = *(byte *)**(undefined8 **)(*(longlong *)param_2 + 0xf8);
  do {
    param_1 = (char *)((byte *)param_1 + 1);
    bVar1 = *param_1;
    *param_1 = bVar4;
    bVar5 = bVar4 != 0;
    bVar4 = bVar1;
  } while (bVar5);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::parse_int_from_format_string(int * __ptr64
   const) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::parse_int_from_format_string(int * __ptr64
   const) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::parse_int_from_format_string(int * __ptr64 const) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::parse_int_from_format_string(int * __ptr64
   const) __ptr64
     9 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_int_from_format_string(longlong param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined1 uVar5;
  ulong *local_res8;
  
  puVar3 = *(ulong **)(param_1 + 0x10);
  if (puVar3 == (ulong *)0x0) {
    puVar3 = __doserrno();
    *(ulong **)(param_1 + 0x10) = puVar3;
  }
  uVar1 = *puVar3;
  *puVar3 = 0;
  uVar5 = 1;
  local_res8 = (ulong *)0x0;
  lVar2 = strtol((char *)(*(longlong *)(param_1 + 0x18) + -1),(char **)&local_res8,10);
  *param_2 = lVar2;
  puVar4 = *(ulong **)(param_1 + 0x10);
  if (puVar4 == (ulong *)0x0) {
    puVar4 = __doserrno();
    *(ulong **)(param_1 + 0x10) = puVar4;
  }
  if ((*puVar4 == 0x22) || (puVar4 = local_res8, local_res8 < *(ulong **)(param_1 + 0x18))) {
    uVar5 = 0;
  }
  else {
    *(ulong **)(param_1 + 0x18) = local_res8;
  }
  if ((*puVar3 == 0) && (uVar1 != 0)) {
    *puVar3 = uVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),uVar5);
}




undefined4 FUN_180006ab4(ulonglong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar5;
  
  if ((param_1[0x8d] == 0) || (param_1[3] == 0)) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_1800093f4();
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 1;
    if ((int)param_1[0x8e] != 2) {
      do {
        *(undefined4 *)(param_1 + 10) = 0;
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
LAB_180006c66:
        cVar2 = *(char *)param_1[3];
        *(char *)((longlong)param_1 + 0x41) = cVar2;
        if (cVar2 != '\0') {
          param_1[3] = param_1[3] + 1;
          if ((int)param_1[5] < 0) goto LAB_180006c7b;
          uVar7 = 0;
          if ((byte)(*(char *)((longlong)param_1 + 0x41) - 0x20U) < 0x5b) {
            uVar7 = (byte)(&DAT_180019360)[*(char *)((longlong)param_1 + 0x41) + -0x20] & 0xf;
          }
          bVar1 = (&DAT_180019360)[*(int *)((longlong)param_1 + 0x2c) + uVar7 * 9];
          uVar7 = (uint)(bVar1 >> 4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7;
          if (uVar7 == 8) goto LAB_180006cb1;
          if (bVar1 >> 4 == 0) {
            uVar6 = state_case_normal((longlong)param_1);
            cVar2 = (char)uVar6;
            goto LAB_180006c62;
          }
          if (uVar7 == 1) {
            param_1[6] = 0;
            *(undefined1 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 7) = 0xffffffff;
            *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
            *(undefined1 *)((longlong)param_1 + 0x54) = 0;
          }
          else {
            if (uVar7 != 2) {
              if (uVar7 == 3) {
                puVar9 = (ulonglong *)((longlong)param_1 + 0x34);
                if (*(char *)((longlong)param_1 + 0x41) == '*') {
                  param_1[4] = param_1[4] + 8;
                  iVar8 = *(int *)(param_1[4] - 8);
                  *(int *)puVar9 = iVar8;
                  if (iVar8 < 0) {
                    *(uint *)(param_1 + 6) = (uint)param_1[6] | 4;
                    iVar8 = -iVar8;
LAB_180006c0b:
                    *(int *)puVar9 = iVar8;
                  }
                  cVar2 = '\x01';
                }
                else {
LAB_180006bc4:
                  uVar5 = parse_int_from_format_string((longlong)param_1,(long *)puVar9);
                  cVar2 = (char)uVar5;
                }
              }
              else {
                if (uVar7 == 4) {
                  *(undefined4 *)(param_1 + 7) = 0;
                  goto LAB_180006c66;
                }
                if (uVar7 == 5) {
                  puVar9 = param_1 + 7;
                  if (*(char *)((longlong)param_1 + 0x41) == '*') {
                    param_1[4] = param_1[4] + 8;
                    iVar8 = *(int *)(param_1[4] - 8);
                    if (*(int *)(param_1[4] - 8) < 0) {
                      iVar8 = -1;
                    }
                    goto LAB_180006c0b;
                  }
                  goto LAB_180006bc4;
                }
                if (uVar7 == 6) {
                  uVar5 = FUN_180006fd8(param_1);
                  cVar2 = (char)uVar5;
                }
                else {
                  if (uVar7 != 7) {
                    return 0xffffffff;
                  }
                  uVar5 = FUN_18000714c(param_1);
                  cVar2 = (char)uVar5;
                }
              }
LAB_180006c62:
              if (cVar2 == '\0') {
                return 0xffffffff;
              }
              goto LAB_180006c66;
            }
            cVar2 = *(char *)((longlong)param_1 + 0x41);
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 8;
            }
          }
          goto LAB_180006c66;
        }
        param_1[3] = param_1[3] + 1;
LAB_180006c7b:
        if ((*(int *)((longlong)param_1 + 0x2c) != 0) && (*(int *)((longlong)param_1 + 0x2c) != 7))
        {
LAB_180006cb1:
          puVar4 = __doserrno();
          *puVar4 = 0x16;
          FUN_1800093f4();
          return 0xffffffff;
        }
        *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 1;
      } while ((int)param_1[0x8e] != 2);
    }
    uVar3 = (undefined4)param_1[5];
  }
  return uVar3;
}




undefined4 FUN_180006cc8(ulonglong *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar6;
  
  if ((param_1[0x8d] == 0) || (param_1[3] == 0)) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_1800093f4();
    uVar4 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 1;
    if ((int)param_1[0x8e] != 2) {
      do {
        *(undefined4 *)(param_1 + 10) = 0;
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
LAB_180006e7d:
        cVar2 = *(char *)param_1[3];
        *(char *)((longlong)param_1 + 0x41) = cVar2;
        if (cVar2 != '\0') {
          param_1[3] = param_1[3] + 1;
          if ((int)param_1[5] < 0) goto LAB_180006e92;
          if ((byte)(*(char *)((longlong)param_1 + 0x41) - 0x20U) < 0x5b) {
            uVar3 = (byte)(&DAT_180019300)[*(char *)((longlong)param_1 + 0x41) + -0x20] & 0xf;
          }
          else {
            uVar3 = 0;
          }
          bVar1 = (&DAT_180019300)[*(int *)((longlong)param_1 + 0x2c) + uVar3 * 8];
          uVar3 = (uint)(bVar1 >> 4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar3;
          if (uVar3 == 8) {
            puVar5 = __doserrno();
            *puVar5 = 0x16;
            FUN_1800093f4();
            return 0xffffffff;
          }
          if (bVar1 >> 4 == 0) {
            uVar7 = state_case_normal((longlong)param_1);
            cVar2 = (char)uVar7;
            goto LAB_180006e79;
          }
          if (uVar3 == 1) {
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
            *(undefined4 *)(param_1 + 6) = 0;
            *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
            *(undefined1 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 7) = 0xffffffff;
            *(undefined1 *)((longlong)param_1 + 0x54) = 0;
          }
          else {
            if (uVar3 != 2) {
              if (uVar3 == 3) {
                puVar9 = (ulonglong *)((longlong)param_1 + 0x34);
                if (*(char *)((longlong)param_1 + 0x41) == '*') {
                  param_1[4] = param_1[4] + 8;
                  iVar8 = *(int *)(param_1[4] - 8);
                  *(int *)puVar9 = iVar8;
                  if (iVar8 < 0) {
                    *(uint *)(param_1 + 6) = (uint)param_1[6] | 4;
                    iVar8 = -iVar8;
LAB_180006e1d:
                    *(int *)puVar9 = iVar8;
                  }
                  cVar2 = '\x01';
                }
                else {
LAB_180006dd2:
                  uVar6 = parse_int_from_format_string((longlong)param_1,(long *)puVar9);
                  cVar2 = (char)uVar6;
                }
              }
              else {
                if (uVar3 == 4) {
                  *(undefined4 *)(param_1 + 7) = 0;
                  goto LAB_180006e7d;
                }
                if (uVar3 == 5) {
                  puVar9 = param_1 + 7;
                  if (*(char *)((longlong)param_1 + 0x41) == '*') {
                    param_1[4] = param_1[4] + 8;
                    iVar8 = *(int *)(param_1[4] - 8);
                    if (*(int *)(param_1[4] - 8) < 0) {
                      iVar8 = -1;
                    }
                    goto LAB_180006e1d;
                  }
                  goto LAB_180006dd2;
                }
                if (uVar3 == 6) {
                  uVar6 = FUN_180006fd8(param_1);
                  cVar2 = (char)uVar6;
                }
                else {
                  if (uVar3 != 7) {
                    return 0xffffffff;
                  }
                  uVar6 = FUN_18000714c(param_1);
                  cVar2 = (char)uVar6;
                }
              }
LAB_180006e79:
              if (cVar2 == '\0') {
                return 0xffffffff;
              }
              goto LAB_180006e7d;
            }
            cVar2 = *(char *)((longlong)param_1 + 0x41);
            if (cVar2 == ' ') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 2;
            }
            else if (cVar2 == '#') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x20;
            }
            else if (cVar2 == '+') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 1;
            }
            else if (cVar2 == '-') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 4;
            }
            else if (cVar2 == '0') {
              *(uint *)(param_1 + 6) = (uint)param_1[6] | 8;
            }
          }
          goto LAB_180006e7d;
        }
        param_1[3] = param_1[3] + 1;
LAB_180006e92:
        *(int *)(param_1 + 0x8e) = (int)param_1[0x8e] + 1;
      } while ((int)param_1[0x8e] != 2);
    }
    uVar4 = (undefined4)param_1[5];
  }
  return uVar4;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::state_case_normal(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::state_case_normal(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong state_case_normal(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong *puVar5;
  
  uVar4 = FUN_180006f40(param_1);
  if ((char)uVar4 == '\0') {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    uVar4 = FUN_1800093f4();
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x468);
    uVar1 = *(undefined1 *)(param_1 + 0x41);
    lVar3 = *(longlong *)(lVar2 + 8);
    if (*(longlong *)(lVar2 + 0x10) == lVar3) {
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 1;
      *(undefined1 *)**(undefined8 **)(param_1 + 0x468) = uVar1;
      **(longlong **)(param_1 + 0x468) = **(longlong **)(param_1 + 0x468) + 1;
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return uVar4;
}




ulonglong FUN_180006f40(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  char *pcVar4;
  ulong *puVar5;
  ulonglong uVar6;
  
  bVar2 = *(byte *)(param_1 + 0x41);
  *(undefined1 *)(param_1 + 0x54) = 0;
  pcVar4 = *(char **)**(undefined8 **)(param_1 + 8);
  if (*(short *)(pcVar4 + (ulonglong)bVar2 * 2) < 0) {
    lVar3 = *(longlong *)(param_1 + 0x468);
    if (*(longlong *)(lVar3 + 0x10) == *(longlong *)(lVar3 + 8)) {
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 1;
      *(byte *)**(undefined8 **)(param_1 + 0x468) = bVar2;
      **(longlong **)(param_1 + 0x468) = **(longlong **)(param_1 + 0x468) + 1;
    }
    cVar1 = **(char **)(param_1 + 0x18);
    pcVar4 = *(char **)(param_1 + 0x18) + 1;
    *(char *)(param_1 + 0x41) = cVar1;
    *(char **)(param_1 + 0x18) = pcVar4;
    if (cVar1 == '\0') {
      puVar5 = __doserrno();
      *puVar5 = 0x16;
      uVar6 = FUN_1800093f4();
      return uVar6 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
}




undefined8 FUN_180006fd8(ulonglong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar7;
  undefined8 uVar3;
  ulong *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  
  cVar1 = *(char *)((longlong)param_1 + 0x41);
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar6 = (char *)CONCAT71(uVar7,cVar1);
  if (cVar1 == 'F') {
    if ((*param_1 & 8) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 7;
      uVar3 = FUN_18000714c(param_1);
      return uVar3;
    }
  }
  else if (cVar1 == 'N') {
    if ((*param_1 & 8) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
LAB_180007010:
      puVar4 = __doserrno();
      *puVar4 = 0x16;
      uVar5 = FUN_1800093f4();
      return uVar5 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x3c) != 0) goto LAB_180007010;
    if (cVar1 == 'I') {
      pcVar6 = (char *)param_1[3];
      cVar1 = *pcVar6;
      if ((cVar1 == '3') && (pcVar6[1] == '2')) {
        pcVar6 = pcVar6 + 2;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 10;
        param_1[3] = (ulonglong)pcVar6;
      }
      else if ((cVar1 == '6') && (pcVar6[1] == '4')) {
        pcVar6 = pcVar6 + 2;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0xb;
        param_1[3] = (ulonglong)pcVar6;
      }
      else {
        bVar2 = cVar1 + 0xa8;
        pcVar6 = (char *)CONCAT71(uVar7,bVar2);
        if ((bVar2 < 0x21) &&
           (pcVar6 = (char *)(longlong)(char)bVar2,
           (0x120821001U >> ((ulonglong)pcVar6 & 0x3f) & 1) != 0)) {
          *(undefined4 *)((longlong)param_1 + 0x3c) = 9;
        }
      }
    }
    else if (cVar1 == 'L') {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 8;
    }
    else if (cVar1 == 'T') {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0xd;
    }
    else {
      if (cVar1 == 'h') {
        if (*(char *)param_1[3] == 'h') {
          param_1[3] = (ulonglong)((char *)param_1[3] + 1);
          pcVar6 = (char *)0x1;
        }
        else {
          pcVar6 = (char *)0x2;
        }
      }
      else {
        if (cVar1 == 'j') {
          *(undefined4 *)((longlong)param_1 + 0x3c) = 5;
          goto LAB_180007144;
        }
        if (cVar1 != 'l') {
          if (cVar1 == 't') {
            *(undefined4 *)((longlong)param_1 + 0x3c) = 7;
          }
          else {
            if (cVar1 != 'w') {
              if (cVar1 != 'z') {
                return CONCAT71(uVar7,1);
              }
              *(undefined4 *)((longlong)param_1 + 0x3c) = 6;
              return CONCAT71(uVar7,1);
            }
            *(undefined4 *)((longlong)param_1 + 0x3c) = 0xc;
          }
          goto LAB_180007144;
        }
        if (*(char *)param_1[3] == 'l') {
          param_1[3] = (ulonglong)((char *)param_1[3] + 1);
          pcVar6 = (char *)0x4;
        }
        else {
          pcVar6 = (char *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x3c) = (int)pcVar6;
    }
  }
LAB_180007144:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}




ulonglong FUN_18000714c(ulonglong *param_1)

{
  ulonglong *puVar1;
  string_output_adapter<char> *this;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong extraout_RAX;
  longlong lVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  longlong lVar10;
  char local_res8 [8];
  
  uVar4 = (uint)*(char *)((longlong)param_1 + 0x41);
  uVar5 = (ulonglong)uVar4;
  cVar7 = 'x';
  lVar10 = 1;
  bVar3 = true;
  if ((int)uVar4 < 0x65) {
    if (uVar4 == 100) {
LAB_18000724c:
      *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x10;
LAB_180007250:
      uVar4 = 10;
LAB_180007255:
      bVar9 = 0;
LAB_180007258:
      uVar5 = type_case_integer((longlong)param_1,uVar4,bVar9);
    }
    else {
      if (uVar4 == 0x41) goto LAB_18000725f;
      if (uVar4 == 0x43) {
LAB_1800071c0:
        uVar5 = FUN_1800075ec((longlong)param_1);
      }
      else {
        if ((int)uVar4 < 0x45) goto LAB_180007268;
        if ((int)uVar4 < 0x48) goto LAB_18000725f;
        if (uVar4 == 0x53) {
LAB_180007208:
          uVar5 = type_case_s((longlong)param_1);
        }
        else {
          if (uVar4 == 0x58) goto LAB_18000721d;
          if (uVar4 != 0x5a) {
            if (uVar4 != 0x61) {
              if (uVar4 != 99) goto LAB_180007268;
              goto LAB_1800071c0;
            }
            goto LAB_18000725f;
          }
          uVar5 = type_case_Z((longlong)param_1);
        }
      }
    }
  }
  else {
    if (0x67 < (int)uVar4) {
      if (uVar4 == 0x69) goto LAB_18000724c;
      if (uVar4 == 0x6e) {
        uVar5 = type_case_n((longlong)param_1);
        goto LAB_180007264;
      }
      if (uVar4 == 0x6f) {
        if (((uint)param_1[6] >> 5 & 1) != 0) {
          *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x80;
        }
        uVar4 = 8;
        goto LAB_180007255;
      }
      if (uVar4 != 0x70) {
        if (uVar4 == 0x73) goto LAB_180007208;
        if (uVar4 != 0x75) {
          if (uVar4 != 0x78) goto LAB_180007268;
          uVar4 = 0x10;
          goto LAB_180007255;
        }
        goto LAB_180007250;
      }
      *(undefined4 *)(param_1 + 7) = 0x10;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0xb;
LAB_18000721d:
      bVar9 = 1;
      uVar4 = 0x10;
      goto LAB_180007258;
    }
LAB_18000725f:
    uVar5 = FUN_180007430(param_1);
  }
LAB_180007264:
  if ((char)uVar5 != '\0') {
    if ((char)param_1[8] == '\0') {
      uVar4 = (uint)param_1[6];
      local_res8[0] = '\0';
      local_res8[1] = '\0';
      local_res8[2] = 0;
      lVar6 = 0;
      if ((uVar4 >> 4 & 1) != 0) {
        if ((uVar4 >> 6 & 1) == 0) {
          if ((uVar4 & 1) == 0) {
            if ((uVar4 >> 1 & 1) != 0) {
              local_res8[0] = ' ';
              local_res8[1] = '\0';
              lVar6 = lVar10;
            }
          }
          else {
            local_res8[0] = '+';
            local_res8[1] = '\0';
            lVar6 = lVar10;
          }
        }
        else {
          local_res8[0] = '-';
          local_res8[1] = '\0';
          lVar6 = lVar10;
        }
      }
      cVar2 = *(char *)((longlong)param_1 + 0x41);
      if (((cVar2 + 0xa8U & 0xdf) != 0) || ((uVar4 >> 5 & 1) == 0)) {
        bVar3 = false;
      }
      if ((bVar3) || ((cVar2 + 0xbfU & 0xdf) == 0)) {
        local_res8[lVar6] = '0';
        if ((cVar2 == 'X') || (cVar2 == 'A')) {
          cVar7 = 'X';
        }
        local_res8[lVar6 + 1] = cVar7;
        lVar6 = lVar6 + 2;
      }
      puVar1 = param_1 + 5;
      this = (string_output_adapter<char> *)(param_1 + 0x8d);
      iVar8 = (*(int *)((longlong)param_1 + 0x34) - (int)param_1[10]) - (int)lVar6;
      if ((uVar4 & 0xc) == 0) {
        __crt_stdio_output::
        write_multiple_characters<class___crt_stdio_output::string_output_adapter<char>,char>
                  (this,' ',iVar8,(int *)puVar1);
      }
      __crt_stdio_output::string_output_adapter<char>::write_string
                (this,local_res8,(int)lVar6,(int *)puVar1,
                 (__crt_deferred_errno_cache *)(param_1 + 2));
      if ((((uint)param_1[6] >> 3 & 1) != 0) && (((uint)param_1[6] >> 2 & 1) == 0)) {
        __crt_stdio_output::
        write_multiple_characters<class___crt_stdio_output::string_output_adapter<char>,char>
                  (this,'0',iVar8,(int *)puVar1);
      }
      uVar5 = write_stored_string_tchar((longlong)param_1);
      if ((-1 < (int)*puVar1) &&
         (uVar4 = (uint)param_1[6] >> 2, uVar5 = (ulonglong)uVar4, (uVar4 & 1) != 0)) {
        __crt_stdio_output::
        write_multiple_characters<class___crt_stdio_output::string_output_adapter<char>,char>
                  (this,' ',iVar8,(int *)puVar1);
        uVar5 = extraout_RAX;
      }
    }
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
LAB_180007268:
  return uVar5 & 0xffffffffffffff00;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_Z(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_Z(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_Z(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_Z(void) __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

undefined8 type_case_Z(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ulonglong uVar4;
  bool bVar5;
  
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
  puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x20) + -8);
  if ((puVar3 == (ushort *)0x0) || (*(longlong *)(puVar3 + 4) == 0)) {
    uVar4 = 6;
    *(char **)(param_1 + 0x48) = "(null)";
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 2) {
LAB_1800073fb:
      bVar5 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar5 = true;
    }
    else {
      if (*(int *)(param_1 + 0x3c) == 0xd) goto LAB_1800073fb;
      bVar5 = (*(char *)(param_1 + 0x41) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x48) = *(longlong *)(puVar3 + 4);
    uVar1 = *puVar3;
    uVar4 = (ulonglong)uVar1;
    if (bVar5) {
      *(undefined1 *)(param_1 + 0x54) = 1;
      uVar4 = (ulonglong)(uVar1 >> 1);
      goto LAB_180007428;
    }
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
LAB_180007428:
  *(int *)(param_1 + 0x50) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}




undefined8 FUN_180007430(ulonglong *param_1)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  char *pcVar8;
  __uint64 _Var9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  double local_res8;
  
  *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x10;
  iVar5 = (int)param_1[7];
  if (iVar5 < 0) {
    iVar5 = (-(uint)((*(char *)((longlong)param_1 + 0x41) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 7) = iVar5;
  }
  else if ((iVar5 == 0) &&
          ((*(char *)((longlong)param_1 + 0x41) == 'g' ||
           (iVar5 = 0, *(char *)((longlong)param_1 + 0x41) == 'G')))) {
    *(undefined4 *)(param_1 + 7) = 1;
    iVar5 = 1;
  }
  pauVar1 = (undefined1 (*) [16])(param_1 + 0xb);
  bVar2 = FUN_180006640((longlong)pauVar1,(longlong)(iVar5 + 0x15d));
  uVar11 = 0x200;
  if (!bVar2) {
    if (param_1[0x8c] == 0) {
      iVar5 = 0x200;
    }
    else {
      iVar5 = (int)(param_1[0x8b] >> 1);
    }
    *(int *)(param_1 + 7) = iVar5 + -0x15d;
  }
  pauVar7 = (undefined1 (*) [16])param_1[0x8c];
  if ((undefined1 (*) [16])param_1[0x8c] == (undefined1 (*) [16])0x0) {
    pauVar7 = pauVar1;
  }
  param_1[9] = (ulonglong)pauVar7;
  param_1[4] = param_1[4] + 8;
  pauVar7 = (undefined1 (*) [16])param_1[0x8c];
  local_res8 = *(double *)(param_1[4] - 8);
  if (pauVar7 == (undefined1 (*) [16])0x0) {
    _Var9 = 0x200;
    puVar12 = param_1 + 0x4b;
    pauVar7 = pauVar1;
  }
  else {
    _Var9 = param_1[0x8b] >> 1;
    puVar12 = (ulonglong *)(*pauVar7 + (param_1[0x8b] >> 1));
    uVar11 = param_1[0x8b] >> 1;
  }
  __acrt_fp_format(&local_res8,pauVar7,uVar11,(char *)puVar12,_Var9,
                   (int)*(char *)((longlong)param_1 + 0x41),(uint)param_1[7],*param_1,
                   (__crt_locale_pointers *)param_1[1]);
  uVar6 = (uint)param_1[6] >> 5;
  uVar11 = (ulonglong)uVar6;
  if (((uVar6 & 1) != 0) && ((int)param_1[7] == 0)) {
    __crt_stdio_output::force_decimal_point((char *)param_1[9],(__crt_locale_pointers *)param_1[1]);
    uVar11 = extraout_RAX;
  }
  bVar3 = *(char *)((longlong)param_1 + 0x41) + 0xb9;
  uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar3);
  if (((bVar3 & 0xdf) == 0) &&
     (uVar6 = (uint)param_1[6] >> 5, uVar11 = (ulonglong)uVar6, (uVar6 & 1) == 0)) {
    __crt_stdio_output::crop_zeroes((char *)param_1[9],(__crt_locale_pointers *)param_1[1]);
    uVar11 = extraout_RAX_00;
  }
  pcVar8 = (char *)param_1[9];
  cVar4 = *pcVar8;
  if (cVar4 == '-') {
    *(uint *)(param_1 + 6) = (uint)param_1[6] | 0x40;
    pcVar8 = pcVar8 + 1;
    param_1[9] = (ulonglong)pcVar8;
    cVar4 = *pcVar8;
  }
  if (((byte)(cVar4 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar4 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 6) = (uint)param_1[6] & 0xfffffff7;
    *(undefined1 *)((longlong)param_1 + 0x41) = 0x73;
  }
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (pcVar8[lVar10] != '\0');
  *(int *)(param_1 + 10) = (int)lVar10;
  return CONCAT71((int7)(uVar11 >> 8),1);
}




undefined8 FUN_1800075ec(longlong param_1)

{
  int iVar1;
  errno_t eVar2;
  longlong in_RAX;
  uint7 uVar3;
  undefined4 extraout_var;
  longlong lVar4;
  char *_MbCh;
  rsize_t _SizeInBytes;
  undefined1 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar3 = (uint7)((ulonglong)in_RAX >> 8);
  if (iVar1 == 2) {
    in_RAX = (ulonglong)uVar3 << 8;
LAB_18000761f:
    if ((char)in_RAX == '\0') {
LAB_180007669:
      puVar5 = *(undefined1 **)(param_1 + 0x460);
      if (*(undefined1 **)(param_1 + 0x460) == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)(param_1 + 0x58);
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
      *puVar5 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + -8);
      *(undefined4 *)(param_1 + 0x50) = 1;
      goto LAB_180007691;
    }
  }
  else if ((iVar1 != 3) && (iVar1 != 0xc)) {
    if (*(int *)(param_1 + 0x3c) != 0xd) {
      in_RAX = CONCAT71(uVar3,(*(char *)(param_1 + 0x41) + 0x9dU & 0xef) != 0);
      goto LAB_18000761f;
    }
    goto LAB_180007669;
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
  _MbCh = *(char **)(param_1 + 0x460);
  if (_MbCh == (char *)0x0) {
    _SizeInBytes = 0x200;
    _MbCh = (char *)(param_1 + 0x58);
  }
  else {
    _SizeInBytes = *(ulonglong *)(param_1 + 0x458) >> 1;
  }
  eVar2 = wctomb_s((int *)(param_1 + 0x50),_MbCh,_SizeInBytes,
                   *(wchar_t *)(*(longlong *)(param_1 + 0x20) + -8));
  in_RAX = CONCAT44(extraout_var,eVar2);
  if (eVar2 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
LAB_180007691:
  lVar4 = *(longlong *)(param_1 + 0x460);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    lVar4 = param_1 + 0x58;
  }
  *(longlong *)(param_1 + 0x48) = lVar4;
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_integer(unsigned int,bool)
   __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer(unsigned int,bool) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer(unsigned int,bool) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_integer(unsigned int,bool) __ptr64
     6 names - too many to list
   
   Library: Visual Studio 2017 Release */

ulonglong type_case_integer(longlong param_1,uint param_2,byte param_3)

{
  ulong *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  lVar5 = 8;
  if (iVar3 < 6) {
    if (iVar3 == 5) goto LAB_1800076ff;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        lVar5 = 1;
        goto LAB_1800076ff;
      }
      iVar3 = iVar3 + -2;
      if (iVar3 == 0) {
        lVar5 = 2;
        goto LAB_1800076ff;
      }
      goto LAB_1800076f2;
    }
  }
  else {
    if (((iVar3 == 6) || (iVar3 == 7)) || (iVar3 = iVar3 + -9, iVar3 == 0)) goto LAB_1800076ff;
LAB_1800076f2:
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        lVar5 = 0;
      }
      goto LAB_1800076ff;
    }
  }
  lVar5 = 4;
LAB_1800076ff:
  if (lVar5 == 1) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    if ((*(uint *)(param_1 + 0x30) >> 4 & 1) == 0) {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    else {
      uVar2 = (ulonglong)*(char *)(*(longlong *)(param_1 + 0x20) + -8);
    }
  }
  else if (lVar5 == 2) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    if ((*(uint *)(param_1 + 0x30) >> 4 & 1) == 0) {
      uVar2 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    else {
      uVar2 = (ulonglong)*(short *)(*(longlong *)(param_1 + 0x20) + -8);
    }
  }
  else if (lVar5 == 4) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    if ((*(uint *)(param_1 + 0x30) >> 4 & 1) == 0) {
      uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + -8);
    }
    else {
      uVar2 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x20) + -8);
    }
  }
  else {
    if (lVar5 != 8) {
      puVar1 = __doserrno();
      *puVar1 = 0x16;
      uVar2 = FUN_1800093f4();
      return uVar2 & 0xffffffffffffff00;
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -8);
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  if (((uVar4 >> 4 & 1) != 0) && ((longlong)uVar2 < 0)) {
    uVar2 = -uVar2;
    uVar4 = uVar4 | 0x40;
    *(uint *)(param_1 + 0x30) = uVar4;
  }
  if (*(int *)(param_1 + 0x38) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  else {
    *(uint *)(param_1 + 0x30) = uVar4 & 0xfffffff7;
    FUN_180006640(param_1 + 0x58,(longlong)*(int *)(param_1 + 0x38));
  }
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffdf;
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (lVar5 == 8) {
    type_case_integer_parse_into_buffer<>(param_1,uVar2,(ulonglong)param_2,param_3);
  }
  else {
    type_case_integer_parse_into_buffer<>(param_1,(uint)uVar2,param_2,param_3);
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  if (((uVar4 >> 7 & 1) != 0) &&
     ((*(int *)(param_1 + 0x50) == 0 || (**(char **)(param_1 + 0x48) != '0')))) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -1;
    **(undefined1 **)(param_1 + 0x48) = 0x30;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  return CONCAT71((uint7)(uint3)(uVar4 >> 0xf),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_n(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_n(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_n(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_n(void) __ptr64
     12 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

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
LAB_1800078a4:
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    uVar4 = FUN_1800093f4();
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 == 0) goto LAB_180007905;
        if (iVar2 == 1) {
          lVar5 = 1;
        }
        else {
          iVar2 = iVar2 + -2;
          if (iVar2 != 0) goto LAB_1800078d8;
          lVar5 = 2;
        }
      }
    }
    else if (((iVar2 != 6) && (iVar2 != 7)) && (iVar2 = iVar2 + -9, iVar2 != 0)) {
LAB_1800078d8:
      if (iVar2 == 1) {
LAB_180007905:
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
      if (lVar5 != 8) goto LAB_1800078a4;
      uVar4 = (ulonglong)*(int *)(param_1 + 0x28);
      *puVar1 = uVar4;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_s(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> >
   >::type_case_s(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_s(void) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> >
   >::type_case_s(void) __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined8 type_case_s(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  bool bVar5;
  
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
  pcVar4 = *(char **)(*(longlong *)(param_1 + 0x20) + -8);
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == -1) {
    iVar2 = 0x7fffffff;
  }
  *(char **)(param_1 + 0x48) = pcVar4;
  if (iVar1 == 2) {
    bVar5 = false;
LAB_1800079a5:
    if (!bVar5) {
LAB_1800079c7:
      if ((undefined1 (*) [32])pcVar4 == (undefined1 (*) [32])0x0) {
        pcVar4 = "(null)";
        *(char **)(param_1 + 0x48) = "(null)";
      }
      uVar3 = FUN_18000baf8((undefined1 (*) [32])pcVar4,(longlong)iVar2);
      goto LAB_1800079df;
    }
  }
  else if ((iVar1 != 3) && (iVar1 != 0xc)) {
    if (*(int *)(param_1 + 0x3c) != 0xd) {
      bVar5 = (*(char *)(param_1 + 0x41) + 0x9dU & 0xef) != 0;
      goto LAB_1800079a5;
    }
    goto LAB_1800079c7;
  }
  if ((undefined1 (*) [32])pcVar4 == (undefined1 (*) [32])0x0) {
    *(wchar_t **)(param_1 + 0x48) = L"(null)";
    pcVar4 = (char *)L"(null)";
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  uVar3 = FUN_18000bc48((undefined1 (*) [32])pcVar4,(longlong)iVar2);
LAB_1800079df:
  *(int *)(param_1 + 0x50) = (int)uVar3;
  return CONCAT71((int7)(uVar3 >> 8),1);
}




/* Library Function - Multiple Matches With Same Base Name
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::write_stored_string_tchar(char) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::write_stored_string_tchar(char) __ptr64
    private: bool __cdecl __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::write_stored_string_tchar(char) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void write_stored_string_tchar(longlong param_1)

{
  wchar_t _WCh;
  errno_t eVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined1 auStackY_58 [32];
  int local_28;
  char local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStackY_58;
  if ((*(char *)(param_1 + 0x54) == '\0') || (*(int *)(param_1 + 0x50) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              ((string_output_adapter<char> *)(param_1 + 0x468),*(char **)(param_1 + 0x48),
               *(int *)(param_1 + 0x50),(int *)(param_1 + 0x28),
               (__crt_deferred_errno_cache *)(param_1 + 0x10));
  }
  else {
    pwVar2 = *(wchar_t **)(param_1 + 0x48);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      do {
        _WCh = *pwVar2;
        local_28 = 0;
        pwVar2 = pwVar2 + 1;
        eVar1 = wctomb_s(&local_28,local_24,6,_WCh);
        if ((eVar1 != 0) || (local_28 == 0)) {
          *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
          break;
        }
        __crt_stdio_output::string_output_adapter<char>::write_string
                  ((string_output_adapter<char> *)(param_1 + 0x468),local_24,local_28,
                   (int *)(param_1 + 0x28),(__crt_deferred_errno_cache *)(param_1 + 0x10));
        iVar3 = iVar3 + 1;
      } while (iVar3 != *(int *)(param_1 + 0x50));
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_58);
  return;
}




/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
   __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
      FUN_1800058f0((undefined8 *)*puVar1,(undefined8 *)param_1,uVar3);
      **(longlong **)this = **(longlong **)this + uVar3;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar3;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar3 == uVar4) {
          *param_3 = *param_3 + (int)uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}




/* Library Function - Single Match
    __stdio_common_vsprintf_s
   
   Library: Visual Studio 2017 Release */

int __stdio_common_vsprintf_s
              (__uint64 param_1,char *param_2,__uint64 param_3,char *param_4,
              __crt_locale_pointers *param_5,char *param_6)

{
  int iVar1;
  ulong *puVar2;
  
  if (((param_4 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
  }
  else {
    iVar1 = common_vsprintf<class___crt_stdio_output::format_validation_base,char>
                      (param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 < 0) {
      *param_2 = '\0';
    }
    if (iVar1 != -2) {
      return iVar1;
    }
    puVar2 = __doserrno();
    *puVar2 = 0x22;
  }
  FUN_1800093f4();
  return -1;
}




uint FUN_180007bd4(__crt_locale_pointers *param_1,longlong *param_2,uint param_3,byte param_4)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  longlong *plVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  longlong local_48;
  longlong *local_40 [2];
  char local_30;
  
  if ((*param_2 == 0) || ((param_3 != 0 && (0x22 < param_3 - 2)))) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_1800093f4();
LAB_180007c0c:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,param_1);
  pbVar1 = (byte *)*param_2;
  uVar13 = 0;
  bVar9 = *pbVar1;
  plVar8 = local_40[0];
  pbVar11 = pbVar1;
  while( true ) {
    pbVar11 = pbVar11 + 1;
    *param_2 = (longlong)pbVar11;
    if ((int)plVar8[1] < 2) {
      uVar4 = *(ushort *)(*plVar8 + (ulonglong)bVar9 * 2) & 8;
    }
    else {
      uVar4 = FUN_18000ce38((uint)bVar9,8,(__crt_locale_pointers *)local_40);
      pbVar11 = (byte *)*param_2;
      plVar8 = local_40[0];
    }
    if (uVar4 == 0) break;
    pbVar11 = (byte *)*param_2;
    bVar9 = *pbVar11;
  }
  bVar10 = param_4 | 2;
  if ((bVar9 == 0x2d) || (bVar10 = param_4, bVar9 == 0x2b)) {
    bVar9 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    *param_2 = (longlong)pbVar11;
  }
  if ((param_3 == 0) || (uVar4 = param_3, param_3 == 0x10)) {
    if ((byte)(bVar9 - 0x30) < 10) {
      iVar5 = (char)bVar9 + -0x30;
    }
    else if ((byte)(bVar9 + 0x9f) < 0x1a) {
      iVar5 = (char)bVar9 + -0x57;
    }
    else if ((byte)(bVar9 + 0xbf) < 0x1a) {
      iVar5 = (char)bVar9 + -0x37;
    }
    else {
      iVar5 = -1;
    }
    if (iVar5 == 0) {
      bVar3 = *pbVar11;
      *param_2 = (longlong)(pbVar11 + 1);
      if ((bVar3 + 0xa8 & 0xdf) == 0) {
        bVar9 = pbVar11[1];
        pbVar11 = pbVar11 + 2;
        *param_2 = (longlong)pbVar11;
        uVar4 = 0x10;
        if (param_3 != 0) {
          uVar4 = param_3;
        }
      }
      else {
        uVar4 = 8;
        if (param_3 != 0) {
          uVar4 = param_3;
        }
        *param_2 = (longlong)pbVar11;
        if ((bVar3 != 0) && (*pbVar11 != bVar3)) {
          puVar7 = __doserrno();
          *puVar7 = 0x16;
          FUN_1800093f4();
          pbVar11 = (byte *)*param_2;
        }
      }
    }
    else {
      uVar4 = 10;
      if (param_3 != 0) {
        uVar4 = param_3;
      }
    }
  }
  while( true ) {
    if ((byte)(bVar9 - 0x30) < 10) {
      uVar6 = (int)(char)bVar9 - 0x30;
    }
    else if ((byte)(bVar9 + 0x9f) < 0x1a) {
      uVar6 = (int)(char)bVar9 - 0x57;
    }
    else if ((byte)(bVar9 + 0xbf) < 0x1a) {
      uVar6 = (int)(char)bVar9 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if ((uVar6 == 0xffffffff) || (uVar4 <= uVar6)) break;
    uVar12 = (uint)(0xffffffff / (ulonglong)uVar4);
    if ((uVar13 < uVar12) ||
       ((uVar13 == uVar12 && (uVar6 <= (uint)(0xffffffff % (ulonglong)uVar4))))) {
      bVar2 = true;
      uVar13 = uVar13 * uVar4 + uVar6;
    }
    else {
      bVar2 = false;
    }
    bVar9 = *(byte *)*param_2;
    pbVar11 = (byte *)*param_2 + 1;
    *param_2 = (longlong)pbVar11;
    bVar3 = bVar10 | 0xc;
    bVar10 = bVar10 | 8;
    if (!bVar2) {
      bVar10 = bVar3;
    }
  }
  *param_2 = (longlong)(pbVar11 + -1);
  if ((bVar9 != 0) && (pbVar11[-1] != bVar9)) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_1800093f4();
  }
  if ((bVar10 & 8) == 0) {
    *param_2 = (longlong)pbVar1;
    if (local_30 != '\0') {
      *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
    }
    goto LAB_180007c0c;
  }
  uVar4 = 0x7fffffff;
  if ((bVar10 & 4) == 0) {
    if ((bVar10 & 1) != 0) {
      if ((bVar10 & 2) != 0) {
        uVar4 = 0x80000000;
      }
      if (uVar4 < uVar13) goto LAB_180007e66;
    }
    if ((bVar10 & 2) != 0) {
      uVar13 = -uVar13;
    }
  }
  else {
LAB_180007e66:
    puVar7 = __doserrno();
    *puVar7 = 0x22;
    if ((bVar10 & 1) != 0) {
      if ((bVar10 & 2) != 0) {
        if (local_30 != '\0') {
          *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
        }
        if ((longlong *)param_2[1] != (longlong *)0x0) {
          *(longlong *)param_2[1] = *param_2;
        }
        return 0x80000000;
      }
      if (local_30 != '\0') {
        *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
      }
      if ((longlong *)param_2[1] == (longlong *)0x0) {
        return 0x7fffffff;
      }
      *(longlong *)param_2[1] = *param_2;
      return 0x7fffffff;
    }
    uVar13 = 0xffffffff;
  }
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    return uVar13;
  }
  *(longlong *)param_2[1] = *param_2;
  return uVar13;
}




void FUN_180007f10(longlong param_1)

{
  longlong local_18 [3];
  
  local_18[1] = 0;
  local_18[0] = param_1;
  FUN_180007bd4((__crt_locale_pointers *)0x0,local_18,10,1);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_180007f3c(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  p_Var5 = FUN_180009a5c();
  if (p_Var5 == (__acrt_ptd *)0x0) {
    return 0;
  }
  piVar2 = *(int **)p_Var5;
  for (piVar7 = piVar2;
      (piVar6 = (int *)0x0, piVar7 != piVar2 + 0x30 && (piVar6 = piVar7, *piVar7 != -0x1f928c9d));
      piVar7 = piVar7 + 4) {
  }
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  pcVar3 = *(code **)(piVar6 + 2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  if (pcVar3 == (code *)0x5) {
    piVar6[2] = 0;
    piVar6[3] = 0;
    return 1;
  }
  if (pcVar3 == (code *)0x1) {
    return 0xffffffff;
  }
  uVar4 = *(undefined8 *)(p_Var5 + 8);
  *(undefined8 *)(p_Var5 + 8) = param_2;
  if (piVar6[1] != 8) {
    piVar6[2] = 0;
    piVar6[3] = 0;
    (*pcVar3)(piVar6[1]);
    goto LAB_1800080a9;
  }
  for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
    piVar7[2] = 0;
    piVar7[3] = 0;
  }
  uVar1 = *(undefined4 *)(p_Var5 + 0x10);
  if (*piVar6 == -0x3fffff73) {
    uVar8 = 0x82;
LAB_180008083:
    *(undefined4 *)(p_Var5 + 0x10) = uVar8;
  }
  else {
    if (*piVar6 == -0x3fffff72) {
      uVar8 = 0x83;
      goto LAB_180008083;
    }
    if (*piVar6 == -0x3fffff71) {
      uVar8 = 0x86;
      goto LAB_180008083;
    }
    if (*piVar6 == -0x3fffff70) {
      uVar8 = 0x81;
      goto LAB_180008083;
    }
    if (*piVar6 == -0x3fffff6f) {
      uVar8 = 0x84;
      goto LAB_180008083;
    }
    if (*piVar6 == -0x3fffff6e) {
      uVar8 = 0x8a;
      goto LAB_180008083;
    }
    if (*piVar6 == -0x3fffff6d) {
      uVar8 = 0x85;
      goto LAB_180008083;
    }
    if (*piVar6 == -0x3ffffd4c) {
      uVar8 = 0x8e;
      goto LAB_180008083;
    }
    uVar8 = uVar1;
    if (*piVar6 == -0x3ffffd4b) {
      uVar8 = 0x8d;
      goto LAB_180008083;
    }
  }
  (*pcVar3)(8,uVar8);
  *(undefined4 *)(p_Var5 + 0x10) = uVar1;
LAB_1800080a9:
  *(undefined8 *)(p_Var5 + 8) = uVar4;
  return 0xffffffff;
}




/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_d80eeec6fff315bfe5c115232f3240e3>,class_<lambda_6e4b09c48022b2350581041d5f6b0c4c>&___ptr64,class_<lambda_2358e3775559c9db80273638284d5e45>_>
          (__crt_seh_guarded_call<void> *this,<lambda_d80eeec6fff315bfe5c115232f3240e3> *param_1,
          <lambda_6e4b09c48022b2350581041d5f6b0c4c> *param_2,
          <lambda_2358e3775559c9db80273638284d5e45> *param_3)

{
  __acrt_lock(*(int *)param_1);
  FUN_180008100((undefined8 *)param_2);
  __acrt_unlock(*(int *)param_3);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180008100(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  
  if (DAT_1800244f8 != '\0') {
    return;
  }
  LOCK();
  DAT_1800244e8 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    bVar2 = (byte)DAT_180023018 & 0x3f;
    bVar1 = 0x40 - bVar2 & 0x3f;
    if (DAT_1800244f0 != ((0UL >> bVar1 | 0L << 0x40 - bVar1) ^ DAT_180023018)) {
      (*(code *)((DAT_180023018 ^ DAT_1800244f0) >> bVar2 |
                (DAT_180023018 ^ DAT_1800244f0) << 0x40 - bVar2))(0,0,0);
    }
    puVar3 = &DAT_180024628;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_180008185;
    puVar3 = &DAT_180024640;
  }
  _execute_onexit_table(puVar3);
LAB_180008185:
  if (*(int *)*param_1 == 0) {
    _initterm((undefined8 *)&DAT_180018340,(undefined8 *)&DAT_180018360);
  }
  _initterm((undefined8 *)&DAT_180018368,(undefined8 *)&DAT_180018370);
  if (*(int *)param_1[1] == 0) {
    DAT_1800244f8 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}




bool FUN_1800081d8(int param_1)

{
  return param_1 == -0x1f928c9d;
}




/* Library Function - Single Match
    void __cdecl common_exit(int,enum _crt_exit_cleanup_mode,enum _crt_exit_return_mode)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl common_exit(int param_1,_crt_exit_cleanup_mode param_2,_crt_exit_return_mode param_3)

{
  code *pcVar1;
  HMODULE pHVar2;
  int *piVar3;
  _crt_exit_cleanup_mode local_res10 [2];
  _crt_exit_return_mode local_res18 [2];
  undefined1 local_res20 [8];
  __crt_seh_guarded_call<void> local_38 [4];
  undefined4 local_34;
  undefined4 local_30 [2];
  _crt_exit_cleanup_mode *local_28;
  _crt_exit_return_mode *local_20;
  undefined1 *local_18;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
        (piVar3 = (int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused),
        *piVar3 == 0x4550)) &&
       ((((short)piVar3[6] == 0x20b && (0xe < (uint)piVar3[0x21])) && (piVar3[0x3e] != 0)))) {
      try_cor_exit_process(param_1);
    }
  }
  local_28 = local_res10;
  local_res20[0] = 0;
  local_20 = local_res18;
  local_18 = local_res20;
  local_34 = 2;
  local_30[0] = 2;
  __crt_seh_guarded_call<void>::
  operator()<class_<lambda_d80eeec6fff315bfe5c115232f3240e3>,class_<lambda_6e4b09c48022b2350581041d5f6b0c4c>&___ptr64,class_<lambda_2358e3775559c9db80273638284d5e45>_>
            (local_38,(<lambda_d80eeec6fff315bfe5c115232f3240e3> *)local_30,
             (<lambda_6e4b09c48022b2350581041d5f6b0c4c> *)&local_28,
             (<lambda_2358e3775559c9db80273638284d5e45> *)&local_34);
  if (local_res18[0] != 0) {
    return;
  }
  exit_or_terminate_process(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    void __cdecl exit_or_terminate_process(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl exit_or_terminate_process(uint param_1)

{
  int iVar1;
  HANDLE hProcess;
  
  iVar1 = __acrt_get_process_end_policy();
  if ((iVar1 != 1) && ((*(uint *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8 & 1) == 0)) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  try_cor_exit_process(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    void __cdecl try_cor_exit_process(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
      (*pFVar2)(param_1);
    }
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}




void FUN_180008348(undefined8 param_1)

{
  DAT_1800244f0 = param_1;
  return;
}




/* Library Function - Single Match
    _cexit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl _cexit(void)

{
  common_exit(0,0,1);
  return;
}




void FUN_180008360(int param_1)

{
  common_exit(param_1,2,0);
  return;
}




undefined4 FUN_18000836c(void)

{
  return DAT_1800244e8;
}




/* Library Function - Single Match
    void __cdecl parse_command_line<char>(char * __ptr64,char * __ptr64 * __ptr64,char *
   __ptr64,unsigned __int64 * __ptr64,unsigned __int64 * __ptr64)
   
   Library: Visual Studio 2017 Release */

void __cdecl
parse_command_line<char>
          (char *param_1,char **param_2,char *param_3,__uint64 *param_4,__uint64 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (char **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = _ismbblead((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_180008426;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_180008426:
  bVar2 = false;
  while (cVar3 = *pcVar6, pcVar7 = pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar7 = pcVar7 + 1;
      cVar3 = *pcVar7;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (char **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pcVar7 == '\\'; pcVar7 = pcVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      pcVar6 = pcVar7;
      if (*pcVar7 == '\"') {
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pcVar6 = pcVar7 + 1, *pcVar6 != '\"')))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pcVar6 = pcVar7;
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
          cVar3 = *pcVar6;
        }
        iVar5 = _ismbblead((int)cVar3);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar7 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (char **)0x0) {
    *param_2 = (char *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}




LPVOID FUN_180008538(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      _free_base((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _configure_narrow_argv
   
   Library: Visual Studio 2017 Release */

int _configure_narrow_argv(int param_1)

{
  __uint64 _Var1;
  int iVar2;
  ulong *puVar3;
  char **ppcVar4;
  char **ppcVar5;
  int iVar6;
  char *pcVar7;
  char **local_res10;
  __uint64 local_res18;
  __uint64 local_res20;
  
  iVar6 = 0;
  if (param_1 != 0) {
    if (param_1 - 1U < 2) {
      __acrt_initialize_multibyte();
      FUN_18000d628((HMODULE)0x0,&DAT_180024500,0x104);
      _DAT_180024d40 = &DAT_180024500;
      if ((DAT_180024d30 == (char *)0x0) || (pcVar7 = DAT_180024d30, *DAT_180024d30 == '\0')) {
        pcVar7 = &DAT_180024500;
      }
      local_res18 = 0;
      local_res20 = 0;
      parse_command_line<char>(pcVar7,(char **)0x0,(char *)0x0,&local_res18,&local_res20);
      _Var1 = local_res18;
      ppcVar4 = (char **)FUN_180008538(local_res18,local_res20,1);
      if (ppcVar4 == (char **)0x0) {
        puVar3 = __doserrno();
        iVar6 = 0xc;
        *puVar3 = 0xc;
        _free_base((LPVOID)0x0);
      }
      else {
        parse_command_line<char>(pcVar7,ppcVar4,(char *)(ppcVar4 + _Var1),&local_res18,&local_res20)
        ;
        if (param_1 == 1) {
          _DAT_180024d18 = (int)local_res18 + -1;
          ppcVar5 = (char **)0x0;
          DAT_180024d20 = ppcVar4;
        }
        else {
          local_res10 = (char **)0x0;
          iVar2 = common_expand_argv_wildcards<char>(ppcVar4,&local_res10);
          ppcVar5 = local_res10;
          if (iVar2 != 0) {
            _free_base(local_res10);
            local_res10 = (char **)0x0;
            _free_base(ppcVar4);
            return iVar2;
          }
          _DAT_180024d18 = 0;
          pcVar7 = *local_res10;
          while (pcVar7 != (char *)0x0) {
            local_res10 = local_res10 + 1;
            _DAT_180024d18 = _DAT_180024d18 + 1;
            pcVar7 = *local_res10;
          }
          local_res10 = (char **)0x0;
          DAT_180024d20 = ppcVar5;
          _free_base((LPVOID)0x0);
          local_res10 = (char **)0x0;
          ppcVar5 = ppcVar4;
        }
        _free_base(ppcVar5);
      }
    }
    else {
      puVar3 = __doserrno();
      iVar6 = 0x16;
      *puVar3 = 0x16;
      FUN_1800093f4();
    }
  }
  return iVar6;
}




/* Library Function - Single Match
    int __cdecl common_initialize_environment_nolock<char>(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_initialize_environment_nolock<char>(void)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  char **ppcVar4;
  
  iVar2 = 0;
  if (DAT_180024608 == (char **)0x0) {
    __acrt_initialize_multibyte();
    pcVar3 = (char *)__dcrt_get_narrow_environment_from_os();
    if (pcVar3 == (char *)0x0) {
      iVar2 = -1;
    }
    else {
      ppcVar4 = create_environment<char>(pcVar3);
      ppcVar1 = ppcVar4;
      if (ppcVar4 == (char **)0x0) {
        iVar2 = -1;
        ppcVar4 = DAT_180024608;
        ppcVar1 = DAT_180024620;
      }
      DAT_180024620 = ppcVar1;
      DAT_180024608 = ppcVar4;
      _free_base((LPVOID)0x0);
    }
    _free_base(pcVar3);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}




/* Library Function - Single Match
    char * __ptr64 * __ptr64 __cdecl create_environment<char>(char * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char ** __cdecl create_environment<char>(char *param_1)

{
  ulong uVar1;
  char **ppcVar2;
  longlong lVar3;
  char **ppcVar4;
  char *pcVar5;
  char **ppcVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  char **ppcVar10;
  
  ppcVar10 = (char **)0x0;
  cVar7 = *param_1;
  ppcVar6 = ppcVar10;
  pcVar5 = param_1;
  while (cVar7 != '\0') {
    ppcVar2 = (char **)((longlong)ppcVar6 + 1);
    if (cVar7 == '=') {
      ppcVar2 = ppcVar6;
    }
    lVar8 = -1;
    do {
      lVar3 = lVar8;
      lVar8 = lVar3 + 1;
    } while (pcVar5[lVar8] != '\0');
    pcVar5 = pcVar5 + lVar3 + 2;
    ppcVar6 = ppcVar2;
    cVar7 = *pcVar5;
  }
  ppcVar4 = (char **)_calloc_base((longlong)ppcVar6 + 1,8);
  ppcVar6 = ppcVar10;
  ppcVar2 = ppcVar4;
  if (ppcVar4 != (char **)0x0) {
    for (; ppcVar6 = ppcVar4, *param_1 != '\0'; param_1 = param_1 + uVar9) {
      lVar8 = -1;
      do {
        lVar3 = lVar8;
        lVar8 = lVar3 + 1;
      } while (param_1[lVar8] != '\0');
      uVar9 = lVar3 + 2;
      if (*param_1 != '=') {
        pcVar5 = (char *)_calloc_base(uVar9,1);
        if (pcVar5 == (char *)0x0) {
          free_environment<char>(ppcVar4);
          _free_base((LPVOID)0x0);
          ppcVar6 = ppcVar10;
          break;
        }
        uVar1 = FUN_1800090a8(pcVar5,uVar9,(longlong)param_1);
        if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *ppcVar2 = pcVar5;
        ppcVar2 = ppcVar2 + 1;
        _free_base((LPVOID)0x0);
      }
    }
  }
  _free_base((LPVOID)0x0);
  return ppcVar6;
}




/* Library Function - Single Match
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl free_environment<char>(char **param_1)

{
  char *pcVar1;
  char **ppcVar2;
  
  if (param_1 != (char **)0x0) {
    pcVar1 = *param_1;
    ppcVar2 = param_1;
    while (pcVar1 != (char *)0x0) {
      _free_base(pcVar1);
      ppcVar2 = ppcVar2 + 1;
      pcVar1 = *ppcVar2;
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
  if ((char **)*param_1 != DAT_180024620) {
    free_environment<char>((char **)*param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((char **)*param_1 != DAT_180024618) {
    free_environment<char>((char **)*param_1);
  }
  return;
}




/* Library Function - Single Match
    __dcrt_uninitialize_environments_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __dcrt_uninitialize_environments_nolock(void)

{
  uninitialize_environment_internal<>(&DAT_180024608);
  uninitialize_environment_internal<>((undefined8 *)&DAT_180024610);
  free_environment<char>(DAT_180024620);
  free_environment<char>(DAT_180024618);
  return;
}




/* Library Function - Single Match
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<class_<lambda_7777bce6b2f8c936911f934f8298dc43>,class_<lambda_f03950bc5685219e0bcd2087efbe011e>&___ptr64,class_<lambda_3883c3dff614d5e0c5f61bb1ac94921c>_>
          (__crt_seh_guarded_call<int> *this,<lambda_7777bce6b2f8c936911f934f8298dc43> *param_1,
          <lambda_f03950bc5685219e0bcd2087efbe011e> *param_2,
          <lambda_3883c3dff614d5e0c5f61bb1ac94921c> *param_3)

{
  undefined8 uVar1;
  
  __acrt_lock(*(int *)param_1);
  uVar1 = FUN_180008b8c((undefined8 *)param_2);
  __acrt_unlock(*(int *)param_3);
  return (int)uVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_1800089c8(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}




undefined8 FUN_1800089c8(undefined8 *param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_1800089f6:
    uVar1 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_180023018 & 0x3f;
    pvVar6 = (LPVOID)((*puVar4 ^ DAT_180023018) >> bVar3 | (*puVar4 ^ DAT_180023018) << 0x40 - bVar3
                     );
    puVar10 = (ulonglong *)
              ((puVar4[1] ^ DAT_180023018) >> bVar3 | (puVar4[1] ^ DAT_180023018) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((puVar4[2] ^ DAT_180023018) >> bVar3 | (puVar4[2] ^ DAT_180023018) << 0x40 - bVar3);
    if (puVar10 == puVar4) {
      uVar5 = (longlong)puVar4 - (longlong)pvVar6 >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar5;
      if (uVar7 + uVar5 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar5) {
LAB_180008a78:
        uVar8 = uVar5 + 4;
        pvVar2 = _recalloc_base(pvVar6,uVar8,8);
        _free_base((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_1800089f6;
      }
      else {
        pvVar2 = _recalloc_base(pvVar6,uVar8,8);
        _free_base((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_180008a78;
      }
      pvVar6 = pvVar2;
      puVar10 = (ulonglong *)((longlong)pvVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)((longlong)pvVar6 + uVar8 * 8);
      bVar3 = -((byte)DAT_180023018 & 0x3f) & 0x3f;
      uVar5 = (0UL >> bVar3 | 0L << 0x40 - bVar3) ^ DAT_180023018;
      uVar7 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
      if (puVar4 < puVar10) {
        uVar7 = 0;
      }
      puVar9 = puVar10;
      if (uVar7 != 0) {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = uVar5;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_180023018 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
               DAT_180023018;
    bVar3 = -((byte)DAT_180023018 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar6 >> bVar3 | (longlong)pvVar6 << 0x40 - bVar3) ^ DAT_180023018;
    bVar3 = -((byte)DAT_180023018 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar3 | (longlong)(puVar10 + 1) << 0x40 - bVar3) ^
         DAT_180023018;
    bVar3 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
    uVar1 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_180023018;
  }
  return uVar1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180008b8c(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  sbyte sVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  puVar6 = *(ulonglong **)*param_1;
  if (puVar6 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar9 = (uint)DAT_180023018 & 0x3f;
    sVar5 = (sbyte)uVar9;
    puVar8 = (ulonglong *)
             ((*puVar6 ^ DAT_180023018) >> sVar5 | (*puVar6 ^ DAT_180023018) << 0x40 - sVar5);
    puVar6 = (ulonglong *)
             ((puVar6[1] ^ DAT_180023018) >> sVar5 | (puVar6[1] ^ DAT_180023018) << 0x40 - sVar5);
    if ((longlong)puVar8 - 1U < 0xfffffffffffffffe) {
      uVar7 = (0UL >> (-sVar5 & 0x3fU) | 0L << 0x40 - (-sVar5 & 0x3fU)) ^ DAT_180023018;
      uVar3 = DAT_180023018;
      puVar12 = puVar6;
      puVar13 = puVar8;
      while (puVar6 = puVar6 + -1, puVar8 <= puVar6) {
        if (*puVar6 != uVar7) {
          uVar3 = *puVar6 ^ uVar3;
          *puVar6 = uVar7;
          (*(code *)(uVar3 >> (sbyte)uVar9 | uVar3 << 0x40 - (sbyte)uVar9))();
          uVar9 = (uint)DAT_180023018 & 0x3f;
          uVar10 = **(ulonglong **)*param_1 ^ DAT_180023018;
          uVar3 = (*(ulonglong **)*param_1)[1] ^ DAT_180023018;
          sVar5 = (sbyte)uVar9;
          puVar11 = (ulonglong *)(uVar10 >> sVar5 | uVar10 << 0x40 - sVar5);
          puVar4 = (ulonglong *)(uVar3 >> sVar5 | uVar3 << 0x40 - sVar5);
          uVar3 = DAT_180023018;
          if ((puVar11 != puVar13) || (puVar4 != puVar12)) {
            puVar6 = puVar4;
            puVar8 = puVar11;
            puVar12 = puVar4;
            puVar13 = puVar11;
          }
        }
      }
      if (puVar8 != (ulonglong *)0xffffffffffffffff) {
        _free_base(puVar8);
        uVar3 = DAT_180023018;
      }
      bVar1 = 0x40 - ((byte)uVar3 & 0x3f) & 0x3f;
      uVar3 = (0UL >> bVar1 | 0L << 0x40 - bVar1) ^ uVar3;
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_180008cd8(undefined8 param_1)

{
  _register_onexit_function(&DAT_180024628,param_1);
  return;
}




/* Library Function - Single Match
    _execute_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  operator()<class_<lambda_7777bce6b2f8c936911f934f8298dc43>,class_<lambda_f03950bc5685219e0bcd2087efbe011e>&___ptr64,class_<lambda_3883c3dff614d5e0c5f61bb1ac94921c>_>
            (local_res10,(<lambda_7777bce6b2f8c936911f934f8298dc43> *)local_res20,
             (<lambda_f03950bc5685219e0bcd2087efbe011e> *)local_18,
             (<lambda_3883c3dff614d5e0c5f61bb1ac94921c> *)local_res18);
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
    bVar1 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
    uVar2 = (0UL >> bVar1 | 0L << 0x40 - bVar1) ^ DAT_180023018;
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
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}




undefined8 FUN_180008dc0(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((ulonglong *)&DAT_180024628);
  uVar1 = _initialize_onexit_table((ulonglong *)&DAT_180024640);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




undefined8 FUN_180008e54(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_180024cf8;
  uVar2 = (ulonglong)uVar1;
  *DAT_180024cf8 = *DAT_180024cf8 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_180024cf8 != (uint *)&DAT_180023420)) {
    uVar2 = _free_base(DAT_180024cf8);
    DAT_180024cf8 = (uint *)&DAT_180023420;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}




void FUN_180008ef0(void)

{
  FUN_18000ea24(&PTR_LAB_1800194e0,(undefined8 *)&DAT_1800195e0);
  return;
}




bool FUN_180008f04(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180009a5c();
  return p_Var1 != (__acrt_ptd *)0x0;
}




/* Library Function - Single Match
    __acrt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __acrt_thread_detach(void)

{
  __acrt_freeptd();
  return 1;
}




/* Library Function - Single Match
    __acrt_uninitialize
   
   Library: Visual Studio 2017 Release */

undefined8 __acrt_uninitialize(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_180024668 != 0) {
      iVar1 = common_flush_all(param_1);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_18000eaa4(0x1800194e0,0x1800195e0);
  return uVar2;
}




undefined1 FUN_180008f60(void)

{
  __acrt_uninitialize_ptd();
  return 1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    _initterm
   
   Library: Visual Studio 2017 Release */

void _initterm(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  uVar2 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    _initterm_e
   
   Library: Visual Studio 2017 Release */

undefined8 _initterm_e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = param_1 == param_2;
  while( true ) {
    if (bVar2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
    bVar2 = param_1 == param_2;
  }
  return uVar1;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    terminate
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void terminate(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1800098f0();
  if (*(code **)(p_Var1 + 0x18) != (code *)0x0) {
    (**(code **)(p_Var1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_180009034(LPVOID param_1)

{
  _free_base(param_1);
  return;
}




/* Library Function - Single Match
    abort
   
   Library: Visual Studio 2017 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_18000ebe4(0x16);
  }
  if ((DAT_180023040 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180009093;
    __acrt_call_reportfault(3,0x40000015,1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x18000909d;
  FUN_180008360(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




ulong FUN_1800090a8(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  ulong *puVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulong uVar6;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        lVar5 = param_2;
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') break;
        param_2 = lVar5 + -1;
      } while (lVar5 + -1 != 0);
      lVar4 = lVar5 + -1;
      if (cVar1 == '\0') {
        lVar4 = lVar5;
      }
      if (lVar4 != 0) {
        return 0;
      }
      *param_1 = '\0';
      puVar2 = __doserrno();
      uVar6 = 0x22;
      goto LAB_1800090cb;
    }
    *param_1 = '\0';
  }
  puVar2 = __doserrno();
  uVar6 = 0x16;
LAB_1800090cb:
  *puVar2 = uVar6;
  FUN_1800093f4();
  return uVar6;
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
    strncmp
   
   Library: Visual Studio 2017 Release */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    uVar2 = (ulonglong)_Str1 & 7;
    while( true ) {
      if (uVar2 == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (bVar1 == 0)) break;
      uVar2 = (ulonglong)_Str1 & 7;
    }
  }
  return 0;
}




/* Library Function - Single Match
    __acrt_call_reportfault
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 auStackX_8 [8];
  undefined1 auStackY_608 [32];
  DWORD64 local_5c8;
  _EXCEPTION_POINTERS local_5c0;
  ulonglong local_5b0;
  PVOID local_5a8 [2];
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_180023018 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_180002898();
  }
  FUN_180003460((undefined1 (*) [16])&local_598,0,0x98);
  FUN_180003460((undefined1 (*) [16])&local_4f8,0,0x4d0);
  local_5c0.ExceptionRecord = &local_598;
  local_5c0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,local_5a8,&local_5b0,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5c0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_180002898();
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_608);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000933c(undefined8 param_1)

{
  _DAT_180024658 = param_1;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _invalid_parameter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                       uintptr_t param_5)

{
  __acrt_ptd *p_Var1;
  byte bVar2;
  code *pcVar3;
  
  p_Var1 = FUN_180009a5c();
  if (((p_Var1 == (__acrt_ptd *)0x0) || (pcVar3 = *(code **)(p_Var1 + 0x3b8), pcVar3 == (code *)0x0)
      ) && (bVar2 = (byte)DAT_180023018 & 0x3f,
           pcVar3 = (code *)((DAT_180023018 ^ _DAT_180024658) >> bVar2 |
                            (DAT_180023018 ^ _DAT_180024658) << 0x40 - bVar2), pcVar3 == (code *)0x0
           )) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  (*pcVar3)(param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_1800093f4(void)

{
  _invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}




/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  *(undefined8 *)(puVar3 + -8) = 0x180009442;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x180009448;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180009454. Too many branches */
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
  piVar4 = &DAT_1800195e0;
  do {
    if (param_1 == *piVar4) {
      return (&DAT_1800195e4)[uVar3 * 2];
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar4 = piVar4 + 2;
  } while (uVar1 < 0x2c);
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
  
  p_Var2 = FUN_180009a5c();
  if (p_Var2 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_180023054;
  }
  else {
    p_Var2 = p_Var2 + 0x24;
  }
  *(int *)p_Var2 = param_1;
  p_Var3 = FUN_180009a5c();
  p_Var2 = (__acrt_ptd *)&DAT_180023050;
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
  
  p_Var1 = FUN_180009a5c();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_180023054;
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
  
  p_Var1 = FUN_180009a5c();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_180023050;
  }
  else {
    p_Var1 = p_Var1 + 0x20;
  }
  return (ulong *)p_Var1;
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
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_180023420)) {
      _free_base(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  local_28 = &DAT_1800246a0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_1800193e0;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_180023420;
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
  if (*(undefined **)param_1 != &DAT_1800193e0) {
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
    if (((ppuVar1 != DAT_1800246a0) && (ppuVar1 != &PTR_DAT_180023170)) &&
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
    __acrt_freeptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_freeptd(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_180023058 != 0xffffffff) {
    p_Var1 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_180023058);
    if (p_Var1 != (__acrt_ptd *)0x0) {
      __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
      destroy_ptd_array(p_Var1);
      _free_base(p_Var1);
    }
  }
  return;
}




__acrt_ptd * FUN_1800098f0(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  if ((DAT_180023058 == 0xffffffff) ||
     (p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_180023058), p_Var2 == (__acrt_ptd *)0x0)) {
    iVar1 = __acrt_FlsSetValue(DAT_180023058,(LPVOID)0xffffffffffffffff);
    if (iVar1 != 0) {
      p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
      if (p_Var2 == (__acrt_ptd *)0x0) {
        __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
        p_Var2 = (__acrt_ptd *)0x0;
      }
      else {
        iVar1 = __acrt_FlsSetValue(DAT_180023058,p_Var2);
        if (iVar1 != 0) {
          construct_ptd_array(p_Var2);
          _free_base((LPVOID)0x0);
          goto LAB_180009991;
        }
        __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
      }
      _free_base(p_Var2);
    }
  }
  else if (p_Var2 != (__acrt_ptd *)0xffffffffffffffff) goto LAB_180009991;
  p_Var2 = (__acrt_ptd *)0x0;
LAB_180009991:
  SetLastError(dwErrCode);
  if (p_Var2 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return p_Var2;
}




/* Library Function - Single Match
    __acrt_getptd_head
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__acrt_ptd * __acrt_getptd_head(void)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if ((DAT_180023058 == 0xffffffff) ||
     (p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_180023058), p_Var2 == (__acrt_ptd *)0x0)) {
    iVar1 = __acrt_FlsSetValue(DAT_180023058,(LPVOID)0xffffffffffffffff);
    if (iVar1 == 0) goto LAB_180009a55;
    p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
      __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      iVar1 = __acrt_FlsSetValue(DAT_180023058,p_Var2);
      if (iVar1 != 0) {
        construct_ptd_array(p_Var2);
        _free_base((LPVOID)0x0);
        goto LAB_180009a47;
      }
      __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
    }
    _free_base(p_Var2);
  }
  else {
    if (p_Var2 == (__acrt_ptd *)0xffffffffffffffff) goto LAB_180009a55;
LAB_180009a47:
    if (p_Var2 != (__acrt_ptd *)0x0) {
      return p_Var2;
    }
  }
LAB_180009a55:
                    /* WARNING: Subroutine does not return */
  abort();
}




__acrt_ptd * FUN_180009a5c(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  if ((DAT_180023058 == 0xffffffff) ||
     (p_Var2 = (__acrt_ptd *)__acrt_FlsGetValue(DAT_180023058), p_Var2 == (__acrt_ptd *)0x0)) {
    iVar1 = __acrt_FlsSetValue(DAT_180023058,(LPVOID)0xffffffffffffffff);
    if (iVar1 != 0) {
      p_Var2 = (__acrt_ptd *)_calloc_base(1,0x3c8);
      if (p_Var2 == (__acrt_ptd *)0x0) {
        __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
        p_Var2 = (__acrt_ptd *)0x0;
      }
      else {
        iVar1 = __acrt_FlsSetValue(DAT_180023058,p_Var2);
        if (iVar1 != 0) {
          construct_ptd_array(p_Var2);
          _free_base((LPVOID)0x0);
          goto LAB_180009afd;
        }
        __acrt_FlsSetValue(DAT_180023058,(LPVOID)0x0);
      }
      _free_base(p_Var2);
    }
  }
  else if (p_Var2 != (__acrt_ptd *)0xffffffffffffffff) goto LAB_180009afd;
  p_Var2 = (__acrt_ptd *)0x0;
LAB_180009afd:
  SetLastError(dwErrCode);
  return p_Var2;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_uninitialize_ptd
    __vcrt_uninitialize_ptd
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_ptd(void)

{
  if (DAT_180023058 != -1) {
    __acrt_FlsFree(DAT_180023058);
    DAT_180023058 = -1;
  }
  return 1;
}




/* Library Function - Single Match
    _mbstok_s_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uchar * __cdecl _mbstok_s_l(uchar *_Str,uchar *_Delim,uchar **_Context,_locale_t _Locale)

{
  bool bVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar8;
  longlong lVar9;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  byte *pbVar7;
  
  if (((_Context == (uchar **)0x0) || (_Delim == (uchar *)0x0)) ||
     ((_Str == (uchar *)0x0 && (*_Context == (uchar *)0x0)))) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_1800093f4();
    return (uchar *)0x0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)_Locale);
  if (*(int *)(local_18 + 8) != 0) {
    if (_Str == (uchar *)0x0) {
      _Str = *_Context;
    }
    bVar5 = *_Str;
    lVar9 = local_18;
    pbVar3 = _Str;
    if (bVar5 != 0) {
      do {
        bVar4 = *_Delim;
        pbVar3 = _Delim;
LAB_180009c04:
        if (bVar4 == 0) goto LAB_180009c7e;
        if ((*(byte *)((ulonglong)bVar4 + 0x19 + lVar9) & 4) == 0) {
          pbVar8 = pbVar3;
          if (bVar4 == bVar5) goto LAB_180009c4c;
LAB_180009c32:
          pbVar3 = pbVar8 + 1;
          bVar4 = *pbVar3;
          goto LAB_180009c04;
        }
        pbVar8 = pbVar3 + 1;
        if (*pbVar8 != 0) {
          if ((bVar4 == bVar5) && (bVar4 = *pbVar3, *pbVar8 == _Str[1])) goto LAB_180009c4c;
          goto LAB_180009c32;
        }
        puVar2 = __doserrno();
        *puVar2 = 0x2a;
        bVar4 = *pbVar8;
        lVar9 = local_18;
LAB_180009c4c:
        if (bVar4 == 0) {
LAB_180009c7e:
          bVar5 = *_Str;
          pbVar3 = _Str;
          goto LAB_180009c85;
        }
        if (((*(byte *)((ulonglong)*_Str + 0x19 + lVar9) & 4) != 0) && (_Str = _Str + 1, *_Str == 0)
           ) {
          puVar2 = __doserrno();
          *puVar2 = 0x2a;
          lVar9 = local_18;
          goto LAB_180009c7e;
        }
        _Str = _Str + 1;
        bVar5 = *_Str;
      } while (bVar5 != 0);
      bVar5 = 0;
      pbVar3 = _Str;
    }
LAB_180009c85:
    do {
      pbVar8 = _Str;
      if (bVar5 == 0) goto LAB_180009d0c;
      bVar5 = *_Delim;
      bVar1 = false;
      pbVar6 = _Delim;
      if (bVar5 == 0) {
LAB_180009cd6:
        if (bVar5 != 0) {
          *_Str = 0;
          pbVar8 = _Str + 1;
          if (bVar1) {
            *pbVar8 = 0;
            pbVar8 = _Str + 2;
          }
          goto LAB_180009d0c;
        }
      }
      else {
        do {
          if ((*(byte *)((ulonglong)bVar5 + 0x19 + lVar9) & 4) == 0) {
            pbVar7 = pbVar6;
            if (bVar5 == *_Str) goto LAB_180009cd6;
          }
          else {
            pbVar7 = pbVar6 + 1;
            if (*pbVar7 == 0) break;
            if ((bVar5 == *_Str) && (*pbVar7 == _Str[1])) {
              bVar1 = true;
              bVar5 = *pbVar6;
              goto LAB_180009cd6;
            }
          }
          pbVar6 = pbVar7 + 1;
          bVar5 = *pbVar6;
        } while (bVar5 != 0);
      }
      if ((*(byte *)((ulonglong)*_Str + 0x19 + lVar9) & 4) != 0) {
        if (_Str[1] == 0) {
          *_Str = 0;
          goto LAB_180009d0c;
        }
        _Str = _Str + 1;
      }
      _Str = _Str + 1;
      bVar5 = *_Str;
    } while( true );
  }
  pbVar3 = (byte *)strtok_s((char *)_Str,(char *)_Delim,(char **)_Context);
LAB_180009d17:
  if (local_10 != '\0') {
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
  }
  return pbVar3;
LAB_180009d0c:
  *_Context = pbVar8;
  if (pbVar3 == pbVar8) {
    pbVar3 = (byte *)0x0;
  }
  goto LAB_180009d17;
}




/* Library Function - Single Match
    __acrt_iob_func
   
   Library: Visual Studio 2015 Release */

undefined * __acrt_iob_func(ulonglong param_1)

{
  return &DAT_180023060 + (param_1 & 0xffffffff) * 0x58;
}




/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2017 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  _fcloseall();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_180024668));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_180024668) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  _free_base(DAT_180024668);
  DAT_180024668 = (LPVOID)0x0;
  return;
}




void FUN_180009ed4(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180009ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




void FUN_180009ee0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180009ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




/* Library Function - Single Match
    class __crt_stdio_stream __cdecl __acrt_stdio_allocate_stream(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_allocate_stream(void)

{
  undefined8 *puVar1;
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  __acrt_lock(8);
  puVar1 = (undefined8 *)find_or_allocate_unused_stream_nolock();
  puVar1 = (undefined8 *)*puVar1;
  *in_RCX = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return;
}




/* Library Function - Single Match
    void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Library: Visual Studio 2017 Release */

void __cdecl __acrt_stdio_free_stream(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}




/* Library Function - Single Match
    class __crt_stdio_stream __cdecl find_or_allocate_unused_stream_nolock(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl find_or_allocate_unused_stream_nolock(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  LPVOID pvVar4;
  longlong *in_RCX;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)(DAT_180024668 + 0x18);
  plVar1 = plVar6 + (longlong)DAT_180024660 + -3;
  do {
    if (plVar6 == plVar1) {
LAB_18000a02e:
      *in_RCX = 0;
      return;
    }
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      pvVar4 = _calloc_base(1,0x58);
      *plVar6 = (longlong)pvVar4;
      _free_base((LPVOID)0x0);
      if (*plVar6 != 0) {
        *(undefined4 *)(*plVar6 + 0x18) = 0xffffffff;
        __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*plVar6 + 0x30),4000,0);
        lVar5 = *plVar6;
        LOCK();
        *(uint *)(lVar5 + 0x14) = *(uint *)(lVar5 + 0x14) | 0x2000;
        UNLOCK();
        FUN_180009ed4(lVar5);
LAB_18000a029:
        *in_RCX = lVar5;
        return;
      }
      goto LAB_18000a02e;
    }
    if ((*(uint *)(lVar5 + 0x14) >> 0xd & 1) == 0) {
      FUN_180009ed4(lVar5);
      uVar3 = *(uint *)(lVar5 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar5 + 0x14);
        bVar7 = uVar3 == uVar2;
        if (bVar7) {
          *(uint *)(lVar5 + 0x14) = uVar3 | 0x2000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar7);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_18000a029;
      FUN_180009ee0(lVar5);
    }
    plVar6 = plVar6 + 1;
  } while( true );
}




/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

char * __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  char *in_RDX;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  *(undefined4 *)(param_1 + 4) = DAT_180024f38;
  cVar6 = *in_RDX;
  while (cVar6 == ' ') {
    in_RDX = in_RDX + 1;
    cVar6 = *in_RDX;
  }
  if (cVar6 == 'a') {
    param_1[0] = '\t';
    param_1[1] = '\x01';
    param_1[2] = '\0';
    param_1[3] = '\0';
LAB_18000a0af:
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_18000a2ea;
      param_1[0] = '\x01';
      param_1[1] = '\x03';
      param_1[2] = '\0';
      param_1[3] = '\0';
      goto LAB_18000a0af;
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  pcVar12 = in_RDX + 1;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = false;
  bVar1 = 1;
LAB_18000a0c3:
  if (*pcVar12 == '\0') goto LAB_18000a20f;
  cVar6 = *pcVar12;
  if (cVar6 < 'T') {
    if (cVar6 == 'S') {
      if (bVar2) goto LAB_18000a1f1;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_18000a172:
      bVar2 = true;
      bVar1 = 1;
      goto LAB_18000a1fd;
    }
    if (cVar6 == ' ') goto LAB_18000a1fd;
    if (cVar6 == '+') {
      if (!bVar3) {
        bVar3 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
LAB_18000a1fb:
          bVar1 = 1;
          goto LAB_18000a1fd;
        }
      }
    }
    else if (cVar6 == ',') {
      bVar5 = true;
    }
    else {
      if (cVar6 != 'D') {
        if (cVar6 == 'N') {
          *(uint *)param_1 = *(uint *)param_1 | 0x80;
          goto LAB_18000a1fb;
        }
        if (cVar6 == 'R') {
          if (!bVar2) {
            *(uint *)param_1 = *(uint *)param_1 | 0x10;
            goto LAB_18000a172;
          }
          goto LAB_18000a1f1;
        }
        goto LAB_18000a2ea;
      }
      if ((*(uint *)param_1 & 0x40) == 0) {
        uVar7 = *(uint *)param_1 | 0x40;
        goto LAB_18000a1f9;
      }
    }
  }
  else if (cVar6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar7 = *(uint *)param_1 | 0x1000;
      goto LAB_18000a1f9;
    }
  }
  else if (cVar6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x8000;
      goto LAB_18000a1f9;
    }
  }
  else if (cVar6 == 'c') {
    if (!bVar4) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
LAB_18000a1d2:
      bVar4 = true;
      bVar1 = 1;
      goto LAB_18000a1fd;
    }
  }
  else if (cVar6 == 'n') {
    if (!bVar4) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      goto LAB_18000a1d2;
    }
  }
  else if (cVar6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x4000;
      goto LAB_18000a1f9;
    }
  }
  else {
    if (cVar6 != 'x') goto LAB_18000a2ea;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar7 = *(uint *)param_1 | 0x400;
LAB_18000a1f9:
      *(uint *)param_1 = uVar7;
      goto LAB_18000a1fb;
    }
  }
LAB_18000a1f1:
  bVar1 = 0;
LAB_18000a1fd:
  pcVar12 = pcVar12 + bVar1;
  if (bVar1 == 0) goto LAB_18000a20f;
  goto LAB_18000a0c3;
LAB_18000a20f:
  pcVar11 = pcVar12 + 1;
  if (!bVar5) {
    pcVar11 = pcVar12;
  }
  for (; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
  }
  if (bVar5) {
    iVar8 = strncmp(pcVar11,"ccs",3);
    if (iVar8 != 0) goto LAB_18000a2ea;
    for (pcVar11 = pcVar11 + 3; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 != '=') goto LAB_18000a2ea;
    do {
      pcVar11 = pcVar11 + 1;
    } while (*pcVar11 == ' ');
    lVar10 = 5;
    iVar8 = FUN_18000f530(pcVar11,(byte *)"UTF-8",5);
    if (iVar8 == 0) {
      *(uint *)param_1 = *(uint *)param_1 | 0x40000;
    }
    else {
      lVar10 = 8;
      iVar8 = FUN_18000f530(pcVar11,(byte *)"UTF-16LEUNICODE",8);
      if (iVar8 == 0) {
        *(uint *)param_1 = *(uint *)param_1 | 0x20000;
      }
      else {
        lVar10 = 7;
        iVar8 = FUN_18000f530(pcVar11,(byte *)0x180019758,7);
        if (iVar8 != 0) goto LAB_18000a2ea;
        *(uint *)param_1 = *(uint *)param_1 | 0x10000;
      }
    }
    for (pcVar11 = pcVar11 + lVar10; cVar6 = *pcVar11, cVar6 == ' '; pcVar11 = pcVar11 + 1) {
    }
  }
  else {
    cVar6 = *pcVar11;
  }
  if (cVar6 == '\0') {
    param_1[8] = '\x01';
    return param_1;
  }
LAB_18000a2ea:
  puVar9 = __doserrno();
  *puVar9 = 0x16;
  FUN_1800093f4();
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _openfile
   
   Library: Visual Studio 2017 Release */

FILE * __cdecl _openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  uint *puVar1;
  undefined8 uVar2;
  errno_t eVar3;
  undefined8 *puVar4;
  FILE *pFVar5;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  char local_18 [16];
  
  puVar4 = (undefined8 *)__acrt_stdio_parse_mode<char>(local_18);
  uVar2 = *puVar4;
  pFVar5 = (FILE *)0x0;
  if ((char)*(undefined4 *)(puVar4 + 1) != '\0') {
    local_28 = (int)uVar2;
    eVar3 = FID_conflict__sopen_s(local_res18,_Filename,local_28,_ShFlag,0x180);
    if (eVar3 == 0) {
      _DAT_180024670 = _DAT_180024670 + 1;
      uStack_24 = (uint)((ulonglong)uVar2 >> 0x20);
      LOCK();
      puVar1 = (uint *)((longlong)&_File->_base + 4);
      *puVar1 = *puVar1 | uStack_24;
      UNLOCK();
      *(undefined4 *)&_File->_base = 0;
      _File->_tmpfname = (char *)0x0;
      *(undefined8 *)&_File->_cnt = 0;
      _File->_ptr = (char *)0x0;
      _File->_flag = local_res18[0];
      pFVar5 = _File;
    }
  }
  return pFVar5;
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
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_180024f00,0,param_1), BVar1 == 0)) {
    puVar4 = __doserrno();
    DVar2 = GetLastError();
    uVar3 = __acrt_errno_from_os_error(DVar2);
    *puVar4 = uVar3;
  }
  return;
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
  if ((*(byte *)((&DAT_1800246b0)[(longlong)(int)_FileHandle >> 6] + 0x38 +
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
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180024ab0)) &&
       ((*(byte *)((&DAT_1800246b0)[(longlong)_FileHandle >> 6] + 0x38 +
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
    FUN_1800093f4();
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
    if (((_FileHandle == 1) && ((*(byte *)(DAT_1800246b0 + 0xb8) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_1800246b0 + 0x78) & 1) != 0)))) {
      iVar4 = _get_osfhandle(2);
      iVar5 = _get_osfhandle(1);
      if (iVar5 == iVar4) goto LAB_18000a51e;
    }
    hObject = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_18000a579;
    }
  }
LAB_18000a51e:
  DVar2 = 0;
LAB_18000a579:
  _free_osfhnd(_FileHandle);
  *(undefined1 *)
   ((&DAT_1800246b0)[(longlong)_FileHandle >> 6] + 0x38 + (ulonglong)(_FileHandle & 0x3f) * 0x40) =
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
    _fileno
   
   Library: Visual Studio 2015 Release */

int __cdecl _fileno(FILE *_File)

{
  int iVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_1800093f4();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
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
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class <lambda_c5860995281e5c4ce005b3de8f5874ee> &
   __ptr64,class <lambda_d90129c13df834fdcbf8d2b88dafcf2d> >(class
   <lambda_842d9ff0dc9ef11c61343bbaebe7f885> && __ptr64,class
   <lambda_c5860995281e5c4ce005b3de8f5874ee> & __ptr64,class
   <lambda_d90129c13df834fdcbf8d2b88dafcf2d> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class_<lambda_c5860995281e5c4ce005b3de8f5874ee>&___ptr64,class_<lambda_d90129c13df834fdcbf8d2b88dafcf2d>_>
          (__crt_seh_guarded_call<void> *this,<lambda_842d9ff0dc9ef11c61343bbaebe7f885> *param_1,
          <lambda_c5860995281e5c4ce005b3de8f5874ee> *param_2,
          <lambda_d90129c13df834fdcbf8d2b88dafcf2d> *param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_180009ed4(*(longlong *)param_1);
  if ((**(longlong **)param_2 != 0) &&
     (uVar1 = *(uint *)(**(longlong **)param_2 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((**(char **)(param_2 + 0x10) != '\0') ||
         ((*(uint *)(**(longlong **)param_2 + 0x14) >> 1 & 1) != 0)) {
        iVar2 = _fflush_nolock((FILE *)**(undefined8 **)param_2);
        if (iVar2 == -1) {
          **(undefined4 **)(param_2 + 0x18) = 0xffffffff;
        }
        else {
          **(int **)(param_2 + 8) = **(int **)(param_2 + 8) + 1;
        }
      }
    }
    else {
      **(int **)(param_2 + 8) = **(int **)(param_2 + 8) + 1;
    }
  }
  FUN_180009ee0(*(longlong *)param_3);
  return;
}




/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_886d6c58226a84441f68b9f2b8217b83>,class <lambda_ab61a845afdef5b7c387490eaf3616ee> &
   __ptr64,class <lambda_f7f22ab5edc0698d5f6905b0d3f44752> >(class
   <lambda_886d6c58226a84441f68b9f2b8217b83> && __ptr64,class
   <lambda_ab61a845afdef5b7c387490eaf3616ee> & __ptr64,class
   <lambda_f7f22ab5edc0698d5f6905b0d3f44752> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_886d6c58226a84441f68b9f2b8217b83>,class_<lambda_ab61a845afdef5b7c387490eaf3616ee>&___ptr64,class_<lambda_f7f22ab5edc0698d5f6905b0d3f44752>_>
          (__crt_seh_guarded_call<void> *this,<lambda_886d6c58226a84441f68b9f2b8217b83> *param_1,
          <lambda_ab61a845afdef5b7c387490eaf3616ee> *param_2,
          <lambda_f7f22ab5edc0698d5f6905b0d3f44752> *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  __crt_seh_guarded_call<void> local_res10 [16];
  <lambda_f7f22ab5edc0698d5f6905b0d3f44752> *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_3;
  __acrt_lock(*(int *)param_1);
  plVar1 = DAT_180024668 + DAT_180024660;
  for (plVar3 = DAT_180024668; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = *(undefined8 *)(param_2 + 0x10);
        local_28 = *(undefined8 *)(param_2 + 8);
        local_30 = *(undefined8 *)param_2;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        operator()<class_<lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class_<lambda_c5860995281e5c4ce005b3de8f5874ee>&___ptr64,class_<lambda_d90129c13df834fdcbf8d2b88dafcf2d>_>
                  (local_res10,(<lambda_842d9ff0dc9ef11c61343bbaebe7f885> *)&local_48,
                   (<lambda_c5860995281e5c4ce005b3de8f5874ee> *)&local_38,
                   (<lambda_d90129c13df834fdcbf8d2b88dafcf2d> *)&local_50);
      }
      else {
        **(int **)param_2 = **(int **)param_2 + 1;
      }
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}




/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  __crt_seh_guarded_call<void> local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28 = 8;
  local_24 = 8;
  local_res8[0] = param_1;
  __crt_seh_guarded_call<void>::
  operator()<class_<lambda_886d6c58226a84441f68b9f2b8217b83>,class_<lambda_ab61a845afdef5b7c387490eaf3616ee>&___ptr64,class_<lambda_f7f22ab5edc0698d5f6905b0d3f44752>_>
            (local_res10,(<lambda_886d6c58226a84441f68b9f2b8217b83> *)&local_24,
             (<lambda_ab61a845afdef5b7c387490eaf3616ee> *)&local_20,
             (<lambda_f7f22ab5edc0698d5f6905b0d3f44752> *)&local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}




/* Library Function - Single Match
    __acrt_stdio_flush_nolock
   
   Library: Visual Studio 2017 Release */

undefined8 __acrt_stdio_flush_nolock(FILE *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((longlong)&param_1->_base + 4);
  if ((((byte)uVar4 & 3) == 2) && ((uVar4 & 0xc0) != 0)) {
    uVar4 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    pbVar2 = *(byte **)&param_1->_cnt;
    param_1->_ptr = (char *)pbVar2;
    if (0 < (int)uVar4) {
      uVar3 = _fileno(param_1);
      uVar3 = FUN_18000ae7c(uVar3,pbVar2,uVar4);
      if (uVar4 != uVar3) {
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
    iVar1 = common_flush_all(false);
    return iVar1;
  }
  uVar2 = __acrt_stdio_flush_nolock(_File);
  if ((int)uVar2 == 0) {
    if ((*(uint *)((longlong)&_File->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(_File);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_18000a8a1;
    }
    iVar1 = 0;
  }
  else {
LAB_18000a8a1:
    iVar1 = -1;
  }
  return iVar1;
}




void FUN_18000a8d4(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint nNumberOfBytesToWrite;
  BOOL BVar4;
  DWORD DVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  size_t sVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined1 auStackY_b8 [32];
  wchar_t local_78 [2];
  undefined2 local_74 [2];
  uint local_70;
  uint local_6c;
  HANDLE local_68;
  byte *local_60;
  byte local_58;
  byte local_57;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_180023018 ^ (ulonglong)auStackY_b8;
  lVar11 = (longlong)(int)param_2 >> 6;
  lVar8 = (ulonglong)(param_2 & 0x3f) * 0x40;
  pbVar10 = param_3 + (param_4 & 0xffffffff);
  local_68 = *(HANDLE *)((&DAT_1800246b0)[lVar11] + 0x28 + lVar8);
  local_60 = param_3;
  local_6c = GetConsoleCP();
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < pbVar10) {
    do {
      bVar1 = *param_3;
      lVar6 = (&DAT_1800246b0)[lVar11];
      local_78[0] = L'\0';
      bVar2 = *(byte *)(lVar8 + 0x3d + lVar6);
      if ((bVar2 & 4) == 0) {
        lVar6 = FUN_18000ce08();
        if (-1 < *(short *)(lVar6 + (ulonglong)*param_3 * 2)) {
          sVar9 = 1;
          pbVar7 = param_3;
          goto LAB_18000a9d3;
        }
        if (pbVar10 <= param_3 + 1) {
          *(byte *)((&DAT_1800246b0)[lVar11] + 0x3e + lVar8) = *param_3;
          pbVar10 = (byte *)((&DAT_1800246b0)[lVar11] + 0x3d + lVar8);
          *pbVar10 = *pbVar10 | 4;
          param_1[1] = param_1[1] + 1;
          break;
        }
        iVar3 = FUN_18000b958(local_78,(char *)param_3,2);
        param_3 = param_3 + 1;
      }
      else {
        local_58 = *(byte *)(lVar6 + 0x3e + lVar8);
        *(byte *)(lVar8 + 0x3d + lVar6) = bVar2 & 0xfb;
        sVar9 = 2;
        pbVar7 = &local_58;
        local_57 = bVar1;
LAB_18000a9d3:
        iVar3 = FUN_18000b958(local_78,(char *)pbVar7,sVar9);
      }
      if (iVar3 == -1) break;
      param_3 = param_3 + 1;
      nNumberOfBytesToWrite = __acrt_WideCharToMultiByte(local_6c,0);
      if (nNumberOfBytesToWrite == 0) break;
      BVar4 = WriteFile(local_68,local_50,nNumberOfBytesToWrite,&local_70,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_18000aab7:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        break;
      }
      param_1[1] = (param_1[2] - (int)local_60) + (int)param_3;
      if (local_70 < nNumberOfBytesToWrite) break;
      if (bVar1 == 10) {
        local_74[0] = 0xd;
        BVar4 = WriteFile(local_68,local_74,1,&local_70,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_18000aab7;
        if (local_70 == 0) break;
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
      }
    } while (param_3 < pbVar10);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_b8);
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000aaec(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  uint nNumberOfBytesToWrite;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18000ab04;
  local_28 = DAT_180023018 ^ (ulonglong)auStackY_1468;
  pcVar5 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_1800246b0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x40);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (pcVar5 <= param_3) {
LAB_18000abc3:
    __security_check_cookie(local_28 ^ (ulonglong)auStackY_1468);
    return;
  }
  do {
    pcVar4 = local_1428;
    do {
      if (pcVar5 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1428 + 0x13ff);
    nNumberOfBytesToWrite = (int)pcVar4 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      goto LAB_18000abc3;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if ((local_1438[0] < nNumberOfBytesToWrite) || (pcVar5 <= param_3)) goto LAB_18000abc3;
  } while( true );
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000abf0(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18000ac08;
  local_28 = DAT_180023018 ^ (ulonglong)auStackY_1468;
  psVar5 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_1800246b0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x40);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (psVar5 <= param_3) {
LAB_18000acde:
    __security_check_cookie(local_28 ^ (ulonglong)auStackY_1468);
    return;
  }
  do {
    psVar4 = local_1428;
    do {
      if (psVar5 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar4 = 0xd;
        psVar4 = psVar4 + 1;
      }
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (psVar4 < local_1428 + 0x9ff);
    nNumberOfBytesToWrite = (int)((longlong)psVar4 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *param_1 = DVar3;
      goto LAB_18000acde;
    }
    param_1[1] = param_1[1] + local_1438[0];
    if ((local_1438[0] < nNumberOfBytesToWrite) || (psVar5 <= param_3)) goto LAB_18000acde;
  } while( true );
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000ad0c(DWORD *param_1,uint param_2,short *param_3,uint param_4)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  bool bVar10;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  short local_1448 [856];
  undefined1 local_d98 [3424];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x18000ad28;
  local_38 = DAT_180023018 ^ (ulonglong)auStackY_1498;
  psVar9 = (short *)((ulonglong)param_4 + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_1800246b0)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x40);
  param_1[0] = 0;
  param_1[1] = 0;
  bVar10 = param_3 < psVar9;
  param_1[2] = 0;
  psVar8 = param_3;
  do {
    if (!bVar10) {
LAB_18000ae4d:
      __security_check_cookie(local_38 ^ (ulonglong)auStackY_1498);
      return;
    }
    psVar5 = local_1448;
    do {
      if (psVar9 <= psVar8) break;
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
      if (sVar1 == 10) {
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1448 + 0x354);
    uVar2 = __acrt_WideCharToMultiByte(0xfde9,0);
    if (uVar2 == 0) {
LAB_18000ae45:
      DVar4 = GetLastError();
      *param_1 = DVar4;
      goto LAB_18000ae4d;
    }
    uVar7 = 0;
    if (uVar2 != 0) {
      do {
        BVar3 = WriteFile(hFile,local_d98 + uVar7,uVar2 - (int)uVar7,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_18000ae45;
        uVar6 = (int)uVar7 + local_1458[0];
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    param_1[1] = (int)psVar8 - (int)param_3;
    bVar10 = psVar8 < psVar9;
  } while( true );
}




int FUN_18000ae7c(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  ulong *puVar2;
  longlong lVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180024ab0)) {
      lVar3 = (ulonglong)(param_1 & 0x3f) * 0x40;
      if ((*(byte *)(lVar3 + 0x38 + (&DAT_1800246b0)[(longlong)(int)param_1 >> 6]) & 1) != 0) {
        FID_conflict___acrt_lowio_lock_fh(param_1);
        iVar1 = -1;
        if ((*(byte *)(lVar3 + 0x38 + (&DAT_1800246b0)[(longlong)(int)param_1 >> 6]) & 1) == 0) {
          puVar2 = __doserrno();
          *puVar2 = 9;
          puVar2 = __doserrno();
          *puVar2 = 0;
        }
        else {
          iVar1 = FUN_18000af68(param_1,param_2,param_3);
        }
        FID_conflict___acrt_lowio_lock_fh(param_1);
        return iVar1;
      }
    }
    puVar2 = __doserrno();
    *puVar2 = 0;
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_1800093f4();
  }
  return -1;
}




int FUN_18000af68(uint param_1,byte *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulong *puVar8;
  __acrt_ptd *p_Var9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  short local_48 [8];
  
  uVar14 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
LAB_18000af99:
    puVar8 = __doserrno();
    *puVar8 = 0;
    puVar8 = __doserrno();
    *puVar8 = 0x16;
    FUN_1800093f4();
    return -1;
  }
  lVar12 = (longlong)(int)param_1 >> 6;
  lVar11 = (ulonglong)(param_1 & 0x3f) * 0x40;
  cVar1 = *(char *)(lVar11 + 0x39 + (&DAT_1800246b0)[lVar12]);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_18000af99;
  if ((*(byte *)(lVar11 + 0x38 + (&DAT_1800246b0)[lVar12]) & 0x20) != 0) {
    common_lseek_nolock<__int64>(param_1,0,2);
  }
  local_58 = 0;
  iVar5 = _isatty(param_1);
  iVar13 = 0;
  if ((((iVar5 == 0) || (-1 < *(char *)(lVar11 + 0x38 + (&DAT_1800246b0)[lVar12]))) ||
      ((p_Var9 = FUN_1800098f0(), *(longlong *)(*(longlong *)(p_Var9 + 0x90) + 0x138) == 0 &&
       (*(char *)(lVar11 + 0x39 + (&DAT_1800246b0)[lVar12]) == '\0')))) ||
     (BVar6 = GetConsoleMode(*(HANDLE *)(lVar11 + 0x28 + (&DAT_1800246b0)[lVar12]),(LPDWORD)local_48
                            ), BVar6 == 0)) {
    if (-1 < *(char *)(lVar11 + 0x38 + (&DAT_1800246b0)[lVar12])) {
      local_68 = 0;
      local_60 = 0;
      BVar6 = WriteFile(*(HANDLE *)(lVar11 + 0x28 + (&DAT_1800246b0)[lVar12]),param_2,param_3,
                        (LPDWORD)((longlong)&local_68 + 4),(LPOVERLAPPED)0x0);
      iVar13 = local_60;
      uVar3 = local_68;
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        local_68 = CONCAT44(local_68._4_4_,DVar7);
        iVar13 = local_60;
        uVar3 = local_68;
      }
      goto LAB_18000b1bb;
    }
    if (cVar1 == '\0') {
      puVar10 = (undefined8 *)FUN_18000aaec((DWORD *)&local_68,param_1,(char *)param_2,uVar14);
    }
    else if (cVar1 == '\x01') {
      puVar10 = (undefined8 *)FUN_18000ad0c((DWORD *)&local_68,param_1,(short *)param_2,param_3);
    }
    else {
      uVar3 = local_58;
      if (cVar1 != '\x02') goto LAB_18000b1bb;
      puVar10 = (undefined8 *)FUN_18000abf0((DWORD *)&local_68,param_1,(short *)param_2,uVar14);
    }
  }
  else {
    if (cVar1 != '\0') {
      uVar3 = local_58;
      if ((byte)(cVar1 - 1U) < 2) {
        iVar13 = 0;
        local_68 = 0;
        uVar3 = local_68;
        if (param_2 < param_2 + uVar14) {
          local_68._4_4_ = 0;
          pbVar15 = param_2;
          iVar5 = local_68._4_4_;
          do {
            local_48[0] = *(short *)pbVar15;
            sVar4 = FUN_180010aac(local_48[0]);
            if (sVar4 != local_48[0]) {
LAB_18000b0ef:
              DVar7 = GetLastError();
              local_68 = CONCAT44(local_68._4_4_,DVar7);
              uVar3 = local_68;
              break;
            }
            local_68 = CONCAT44(iVar5 + 2,(DWORD)local_68);
            iVar2 = iVar5 + 2;
            if (local_48[0] == 10) {
              sVar4 = FUN_180010aac(0xd);
              if (sVar4 != 0xd) goto LAB_18000b0ef;
              local_68 = CONCAT44(iVar5 + 3,(DWORD)local_68);
              iVar13 = iVar13 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            pbVar15 = pbVar15 + 2;
            uVar3 = local_68;
          } while (pbVar15 < param_2 + uVar14);
        }
      }
      goto LAB_18000b1bb;
    }
    puVar10 = (undefined8 *)FUN_18000a8d4((DWORD *)&local_68,param_1,param_2,uVar14);
  }
  iVar13 = *(int *)(puVar10 + 1);
  uVar3 = *puVar10;
LAB_18000b1bb:
  local_58 = uVar3;
  iVar5 = (int)((ulonglong)local_58 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar13;
  }
  if ((int)local_58 != 0) {
    if ((int)local_58 == 5) {
      puVar8 = __doserrno();
      *puVar8 = 9;
      puVar8 = __doserrno();
      *puVar8 = 5;
      return -1;
    }
    __acrt_errno_map_os_error((int)local_58);
    return -1;
  }
  if (((*(byte *)(lVar11 + 0x38 + (&DAT_1800246b0)[lVar12]) & 0x40) != 0) && (*param_2 == 0x1a)) {
    return 0;
  }
  puVar8 = __doserrno();
  *puVar8 = 0x1c;
  puVar8 = __doserrno();
  *puVar8 = 0;
  return -1;
}




bool FUN_18000b248(byte param_1,FILE *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __int64 _Var5;
  undefined *puVar6;
  uint uVar7;
  bool bVar8;
  byte local_res8 [8];
  
  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0xc000000000) == 0) {
    iVar4 = FUN_18000ae7c(uVar2,local_res8,1);
    bVar8 = iVar4 == 1;
  }
  else {
    uVar3 = 0;
    uVar7 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(byte **)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if ((int)uVar7 < 1) {
      if (uVar2 + 2 < 2) {
        puVar6 = &DAT_1800232e0;
      }
      else {
        puVar6 = (undefined *)
                 ((ulonglong)(uVar2 & 0x3f) * 0x40 + (&DAT_1800246b0)[(longlong)(int)uVar2 >> 6]);
      }
      if (((puVar6[0x38] & 0x20) != 0) && (_Var5 = thunk_FUN_180010910(uVar2,0,2), _Var5 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = FUN_18000ae7c(uVar2,*(byte **)&param_2->_cnt,uVar7);
    }
    bVar8 = uVar3 == uVar7;
    **(byte **)&param_2->_cnt = local_res8[0];
  }
  return bVar8;
}




/* Library Function - Single Match
    __acrt_stdio_flush_and_write_narrow_nolock
   
   Library: Visual Studio 2015 Release */

ulonglong __acrt_stdio_flush_and_write_narrow_nolock(byte param_1,FILE *param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  FILE *pFVar5;
  
  iVar3 = _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    puVar4 = __doserrno();
    *puVar4 = 9;
  }
  else if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    if (((ulonglong)param_2->_base & 0x100000000) != 0) {
      *(undefined4 *)&param_2->_base = 0;
      if ((*(uint *)((longlong)&param_2->_base + 4) >> 3 & 1) == 0) goto LAB_18000b35b;
      param_2->_ptr = *(char **)&param_2->_cnt;
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
      UNLOCK();
    }
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 | 2;
    UNLOCK();
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 & 0xfffffff7;
    UNLOCK();
    *(undefined4 *)&param_2->_base = 0;
    if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
       (((pFVar5 = (FILE *)__acrt_iob_func(1), param_2 != pFVar5 &&
         (pFVar5 = (FILE *)__acrt_iob_func(2), param_2 != pFVar5)) ||
        (iVar3 = _isatty(iVar3), iVar3 == 0)))) {
      __acrt_stdio_allocate_buffer_nolock(&param_2->_ptr);
    }
    bVar2 = FUN_18000b248(param_1,param_2);
    if (bVar2) {
      return (ulonglong)param_1;
    }
  }
  else {
    puVar4 = __doserrno();
    *puVar4 = 0x22;
  }
LAB_18000b35b:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_begin_temporary_buffering_nolock
   
   Library: Visual Studio 2015 Release */

ulonglong __acrt_stdio_begin_temporary_buffering_nolock(FILE *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_var;
  FILE *pFVar4;
  LPVOID pvVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  
  iVar3 = _fileno(param_1);
  iVar3 = _isatty(iVar3);
  pFVar4 = (FILE *)CONCAT44(extraout_var,iVar3);
  if (iVar3 == 0) {
LAB_18000b4d2:
    return (ulonglong)pFVar4 & 0xffffffffffffff00;
  }
  pFVar4 = (FILE *)__acrt_iob_func(1);
  if (param_1 == pFVar4) {
    plVar8 = &DAT_180024678;
  }
  else {
    pFVar4 = (FILE *)__acrt_iob_func(2);
    if (param_1 != pFVar4) goto LAB_18000b4d2;
    plVar8 = &DAT_180024680;
  }
  _DAT_180024670 = _DAT_180024670 + 1;
  uVar2 = *(uint *)((longlong)&param_1->_base + 4);
  pFVar4 = (FILE *)(ulonglong)uVar2;
  if ((uVar2 & 0x4c0) != 0) goto LAB_18000b4d2;
  LOCK();
  puVar1 = (uint *)((longlong)&param_1->_base + 4);
  *puVar1 = *puVar1 | 0x282;
  UNLOCK();
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    pvVar5 = _malloc_base(0x1000);
    *plVar8 = (longlong)pvVar5;
    _free_base((LPVOID)0x0);
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      *(undefined4 *)&param_1->_base = 2;
      *(int **)&param_1->_cnt = &param_1->_file;
      param_1->_ptr = (char *)&param_1->_file;
      param_1->_charbuf = 2;
      pcVar6 = (char *)0x0;
      goto LAB_18000b4b4;
    }
  }
  *(longlong *)&param_1->_cnt = lVar7;
  pcVar6 = (char *)*plVar8;
  param_1->_ptr = pcVar6;
  *(undefined4 *)&param_1->_base = 0x1000;
  param_1->_charbuf = 0x1000;
LAB_18000b4b4:
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}




/* Library Function - Single Match
    __acrt_stdio_end_temporary_buffering_nolock
   
   Library: Visual Studio 2017 Release */

void __acrt_stdio_end_temporary_buffering_nolock(char param_1,FILE *param_2)

{
  uint *puVar1;
  
  if ((param_1 != '\0') && ((*(uint *)((longlong)&param_2->_base + 4) >> 9 & 1) != 0)) {
    __acrt_stdio_flush_nolock(param_2);
    LOCK();
    puVar1 = (uint *)((longlong)&param_2->_base + 4);
    *puVar1 = *puVar1 & 0xfffffd7f;
    UNLOCK();
    param_2->_charbuf = 0;
    *(undefined8 *)&param_2->_cnt = 0;
    param_2->_ptr = (char *)0x0;
  }
  return;
}




uint FUN_18000b51c(uint param_1)

{
  uint uVar1;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;
  
  if (DAT_180024698 == 0) {
    uVar1 = *(ushort *)(PTR_DAT_180023170 + (ulonglong)(param_1 & 0xff) * 2) & 4;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    if ((int)local_20[0][1] < 2) {
      uVar1 = *(ushort *)(*local_20[0] + (ulonglong)(param_1 & 0xff) * 2) & 4;
    }
    else {
      uVar1 = FUN_18000ce38(param_1,4,(__crt_locale_pointers *)local_20);
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar1;
}




bool FUN_18000b594(uint param_1,__crt_locale_pointers *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((param_2 == (__crt_locale_pointers *)0x0) || (*(int *)(*(longlong *)param_2 + 8) < 2)) {
    if (param_2 == (__crt_locale_pointers *)0x0) {
      lVar3 = FUN_18000ce08();
      uVar1 = *(ushort *)(lVar3 + (ulonglong)(byte)param_1 * 2);
    }
    else {
      uVar1 = *(ushort *)(**(longlong **)param_2 + (ulonglong)(byte)param_1 * 2);
    }
    uVar2 = uVar1 & 1;
  }
  else {
    uVar2 = FUN_18000ce38(param_1,1,param_2);
  }
  return uVar2 != 0;
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
    bVar1 = FUN_18000b594(_C,(__crt_locale_pointers *)&local_20);
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
    tolower
   
   Library: Visual Studio 2017 Release */

int __cdecl tolower(int _C)

{
  if (DAT_180024698 == 0) {
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
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
      pvVar2 = HeapAlloc(DAT_180024f00,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_180010f40();
    } while ((iVar1 != 0) && (iVar1 = _callnewh(param_1), iVar1 != 0));
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Single Match
    strtol
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

long __cdecl strtol(char *_Str,char **_EndPtr,int _Radix)

{
  uint uVar1;
  char *local_18;
  char **local_10;
  
  if (_EndPtr != (char **)0x0) {
    *_EndPtr = _Str;
  }
  local_18 = _Str;
  local_10 = _EndPtr;
  uVar1 = FUN_180007bd4((__crt_locale_pointers *)0x0,(longlong *)&local_18,_Radix,1);
  return uVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _mbtowc_l
   
   Library: Visual Studio 2017 Release */

int __cdecl _mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  int iVar1;
  __uint64 _Var2;
  ulong *puVar3;
  uint uVar4;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if ((_SrcCh == (char *)0x0) || (_SrcSizeInBytes == 0)) {
    _DAT_180024688 = 0;
    return 0;
  }
  if (*_SrcCh == '\0') {
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)_Locale);
  if ((local_20.locinfo)->lc_time_cp == 0xfde9) {
    _Var2 = __crt_mbstring::__mbrtowc_utf8
                      (_DstCh,_SrcCh,_SrcSizeInBytes,(_Mbstatet *)&DAT_180024688);
    uVar4 = (uint)_Var2;
    if ((int)uVar4 < 0) {
      uVar4 = 0xffffffff;
    }
    goto LAB_18000b877;
  }
  if ((local_20.locinfo)->locale_name[2] == (wchar_t *)0x0) {
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = (ushort)(byte)*_SrcCh;
    }
LAB_18000b872:
    uVar4 = 1;
  }
  else {
    iVar1 = _isleadbyte_l((uint)(byte)*_SrcCh,&local_20);
    if (iVar1 == 0) {
      iVar1 = __acrt_MultiByteToWideChar((local_20.locinfo)->lc_time_cp,9);
      if (iVar1 != 0) goto LAB_18000b872;
    }
    else if ((((1 < (int)(local_20.locinfo)->lc_collate_cp) &&
              ((int)(local_20.locinfo)->lc_collate_cp <= (int)_SrcSizeInBytes)) &&
             (iVar1 = __acrt_MultiByteToWideChar((local_20.locinfo)->lc_time_cp,9), iVar1 != 0)) ||
            (((ulonglong)(longlong)(int)(local_20.locinfo)->lc_collate_cp <= _SrcSizeInBytes &&
             (_SrcCh[1] != '\0')))) {
      uVar4 = (local_20.locinfo)->lc_collate_cp;
      goto LAB_18000b877;
    }
    puVar3 = __doserrno();
    uVar4 = 0xffffffff;
    *puVar3 = 0x2a;
  }
LAB_18000b877:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar4;
}




void FUN_18000b958(wchar_t *param_1,char *param_2,size_t param_3)

{
  _mbtowc_l(param_1,param_2,param_3,(_locale_t)0x0);
  return;
}




undefined8
FUN_18000b960(int *param_1,undefined1 (*param_2) [16],ulonglong param_3,ushort param_4,
             __crt_locale_pointers *param_5)

{
  int iVar1;
  DWORD DVar2;
  ulong *puVar3;
  undefined8 unaff_RBX;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if ((param_2 == (undefined1 (*) [16])0x0) && (param_3 != 0)) {
    if (param_1 == (int *)0x0) {
      return unaff_RBX;
    }
    *param_1 = 0;
    return unaff_RBX;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  if (0x7fffffff < param_3) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_1800093f4();
    return unaff_RBX;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_5);
  if (*(longlong *)(local_20 + 0x138) == 0) {
    if (param_4 < 0x100) {
      if (param_2 != (undefined1 (*) [16])0x0) {
        if (param_3 == 0) goto LAB_18000bacd;
        (*param_2)[0] = (char)param_4;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = 1;
      }
      goto LAB_18000ba10;
    }
    if ((param_2 != (undefined1 (*) [16])0x0) && (param_3 != 0)) {
      FUN_180003460(param_2,0,param_3);
    }
  }
  else {
    iVar1 = __acrt_WideCharToMultiByte(*(uint *)(local_20 + 0xc),0);
    if (iVar1 != 0) {
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      goto LAB_18000ba10;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x7a) {
      if ((param_2 != (undefined1 (*) [16])0x0) && (param_3 != 0)) {
        FUN_180003460(param_2,0,param_3);
      }
LAB_18000bacd:
      puVar3 = __doserrno();
      *puVar3 = 0x22;
      FUN_1800093f4();
      goto LAB_18000ba10;
    }
  }
  puVar3 = __doserrno();
  *puVar3 = 0x2a;
LAB_18000ba10:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return unaff_RBX;
}




/* Library Function - Single Match
    wctomb_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t extraout_EAX;
  
  FUN_18000b960(_SizeConverted,(undefined1 (*) [16])_MbCh,_SizeInBytes,_WCh,
                (__crt_locale_pointers *)0x0);
  return extraout_EAX;
}




ulonglong FUN_18000baf8(undefined1 (*param_1) [32],ulonglong param_2)

{
  bool bVar1;
  undefined1 auVar2 [32];
  undefined1 *puVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  
  pauVar4 = param_1;
  if (DAT_180023020 < 5) {
    if (DAT_180023020 < 1) {
      if (param_1 != (undefined1 (*) [32])(*param_1 + param_2)) {
        do {
          if ((*pauVar4)[0] == '\0') break;
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1);
        } while (pauVar4 != (undefined1 (*) [32])(*param_1 + param_2));
      }
    }
    else {
      uVar5 = (ulonglong)((uint)param_1 & 0xf);
      uVar5 = -(ulonglong)(uVar5 != 0) & 0x10 - uVar5;
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      if (param_1 != (undefined1 (*) [32])(*param_1 + uVar5)) {
        do {
          if ((*pauVar4)[0] == '\0') break;
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1);
        } while (pauVar4 != (undefined1 (*) [32])(*param_1 + uVar5));
      }
      if ((longlong)pauVar4 - (longlong)param_1 != uVar5) {
        return (longlong)pauVar4 - (longlong)param_1;
      }
      puVar3 = *pauVar4;
      while ((pauVar4 != (undefined1 (*) [32])(puVar3 + (param_2 - uVar5 & 0xfffffffffffffff0)) &&
             (auVar6[0] = -((*pauVar4)[0] == '\0'), auVar6[1] = -((*pauVar4)[1] == '\0'),
             auVar6[2] = -((*pauVar4)[2] == '\0'), auVar6[3] = -((*pauVar4)[3] == '\0'),
             auVar6[4] = -((*pauVar4)[4] == '\0'), auVar6[5] = -((*pauVar4)[5] == '\0'),
             auVar6[6] = -((*pauVar4)[6] == '\0'), auVar6[7] = -((*pauVar4)[7] == '\0'),
             auVar6[8] = -((*pauVar4)[8] == '\0'), auVar6[9] = -((*pauVar4)[9] == '\0'),
             auVar6[10] = -((*pauVar4)[10] == '\0'), auVar6[0xb] = -((*pauVar4)[0xb] == '\0'),
             auVar6[0xc] = -((*pauVar4)[0xc] == '\0'), auVar6[0xd] = -((*pauVar4)[0xd] == '\0'),
             auVar6[0xe] = -((*pauVar4)[0xe] == '\0'), bVar1 = (*pauVar4)[0xf] == '\0',
             auVar6[0xf] = -bVar1,
             (((((((((((((((auVar6 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                          (auVar6 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar6 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar6 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar6 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar6 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar6 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar6 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar6 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar6 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar6 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar6 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar6 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar6 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar6 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && !bVar1))) {
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + 0x10);
      }
      for (; (pauVar4 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
          pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
      }
    }
  }
  else {
    uVar5 = (ulonglong)((uint)param_1 & 0x1f);
    uVar5 = -(ulonglong)(uVar5 != 0) & 0x20 - uVar5;
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    if (param_1 != (undefined1 (*) [32])(*param_1 + uVar5)) {
      do {
        if ((*pauVar4)[0] == '\0') break;
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1);
      } while (pauVar4 != (undefined1 (*) [32])(*param_1 + uVar5));
    }
    if ((longlong)pauVar4 - (longlong)param_1 != uVar5) {
      return (longlong)pauVar4 - (longlong)param_1;
    }
    puVar3 = *pauVar4;
    while ((pauVar4 != (undefined1 (*) [32])(puVar3 + (param_2 - uVar5 & 0xffffffffffffffe0)) &&
           (auVar2 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar4),
           (((((((((((((((((((((((((((((((auVar2 >> 7 & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0 &&
                                        (auVar2 >> 0xf & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar2 >> 0x17 & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar2 >> 0x1f & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar2 >> 0x27 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar2 >> 0x2f & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar2 >> 0x37 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                   ) && (auVar2 >> 0x3f & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                 (auVar2 >> 0x47 & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar2 >> 0x4f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar2 >> 0x57 & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar2 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             (auVar2 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                            (auVar2 >> 0x6f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar2 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          SUB321(auVar2 >> 0x7f,0) == '\0') &&
                         (auVar2 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar2 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar2 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar2 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     (auVar2 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                    (auVar2 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar2 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  SUB321(auVar2 >> 0xbf,0) == '\0') &&
                 (auVar2 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar2 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar2 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar2 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
             (auVar2 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
            (auVar2 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
           (auVar2 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) && -1 < auVar2[0x1f]))
          ) {
      pauVar4 = pauVar4 + 1;
    }
    for (; (pauVar4 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1)) {
    }
  }
  return (longlong)pauVar4 - (longlong)param_1;
}




ulonglong FUN_18000bc48(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  ulonglong uVar2;
  undefined1 (*pauVar3) [32];
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  pauVar3 = param_1;
  if (DAT_180023020 < 5) {
    if (DAT_180023020 < 1) {
      if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
        do {
          if (*(short *)*pauVar3 == 0) break;
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2);
        } while (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2));
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar4 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = (-(ulonglong)(uVar4 != 0) & 0x10 - uVar4) >> 1;
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      if (param_1 != (undefined1 (*) [32])(*param_1 + uVar4 * 2)) {
        do {
          if (*(short *)*pauVar3 == 0) break;
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2);
        } while (pauVar3 != (undefined1 (*) [32])(*param_1 + uVar4 * 2));
      }
      uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
      if (uVar2 != uVar4) {
        return uVar2;
      }
      for (pauVar3 = (undefined1 (*) [32])(*param_1 + uVar2 * 2);
          pauVar3 !=
          (undefined1 (*) [32])(*param_1 + ((param_2 - uVar4 & 0xfffffffffffffff0) + uVar2) * 2);
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 0x10)) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar3 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar3 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar3 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar3 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar3 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar3 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar3 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar3 + 0xe) == 0);
        if ((((((((((((((((auVar5 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar5 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar5 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar5 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar5 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar5 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar5 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar5 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar5 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar5 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar5 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar5 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar5 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar5 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar5._14_2_ >> 7 & 1) != 0) || (auVar5._14_2_ & 0x8000) != 0) break;
      }
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
    else if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
      do {
        if (*(short *)*pauVar3 == 0) break;
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2);
      } while (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2));
    }
  }
  else if (((ulonglong)param_1 & 1) == 0) {
    uVar4 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = (-(ulonglong)(uVar4 != 0) & 0x20 - uVar4) >> 1;
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    if (param_1 != (undefined1 (*) [32])(*param_1 + uVar4 * 2)) {
      do {
        if (*(short *)*pauVar3 == 0) break;
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2);
      } while (pauVar3 != (undefined1 (*) [32])(*param_1 + uVar4 * 2));
    }
    uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
    if (uVar2 != uVar4) {
      return uVar2;
    }
    pauVar3 = (undefined1 (*) [32])(*param_1 + uVar2 * 2);
    while ((pauVar3 !=
            (undefined1 (*) [32])(*param_1 + ((param_2 - uVar4 & 0xffffffffffffffe0) + uVar2) * 2)
           && (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar3),
              (((((((((((((((((((((((((((((((auVar1 >> 7 & (undefined1  [32])0x1) ==
                                            (undefined1  [32])0x0 &&
                                           (auVar1 >> 0xf & (undefined1  [32])0x1) ==
                                           (undefined1  [32])0x0) &&
                                          (auVar1 >> 0x17 & (undefined1  [32])0x1) ==
                                          (undefined1  [32])0x0) &&
                                         (auVar1 >> 0x1f & (undefined1  [32])0x1) ==
                                         (undefined1  [32])0x0) &&
                                        (auVar1 >> 0x27 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                       (auVar1 >> 0x2f & (undefined1  [32])0x1) ==
                                       (undefined1  [32])0x0) &&
                                      (auVar1 >> 0x37 & (undefined1  [32])0x1) ==
                                      (undefined1  [32])0x0) &&
                                     (auVar1 >> 0x3f & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                                    (auVar1 >> 0x47 & (undefined1  [32])0x1) ==
                                    (undefined1  [32])0x0) &&
                                   (auVar1 >> 0x4f & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                   ) && (auVar1 >> 0x57 & (undefined1  [32])0x1) ==
                                        (undefined1  [32])0x0) &&
                                 (auVar1 >> 0x5f & (undefined1  [32])0x1) == (undefined1  [32])0x0)
                                && (auVar1 >> 0x67 & (undefined1  [32])0x1) == (undefined1  [32])0x0
                                ) && (auVar1 >> 0x6f & (undefined1  [32])0x1) ==
                                     (undefined1  [32])0x0) &&
                              (auVar1 >> 0x77 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                             SUB321(auVar1 >> 0x7f,0) == '\0') &&
                            (auVar1 >> 0x87 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                           (auVar1 >> 0x8f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                          (auVar1 >> 0x97 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                         (auVar1 >> 0x9f & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                        (auVar1 >> 0xa7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                       (auVar1 >> 0xaf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                      (auVar1 >> 0xb7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                     SUB321(auVar1 >> 0xbf,0) == '\0') &&
                    (auVar1 >> 199 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                   (auVar1 >> 0xcf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                  (auVar1 >> 0xd7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                 (auVar1 >> 0xdf & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
                (auVar1 >> 0xe7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
               (auVar1 >> 0xef & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              (auVar1 >> 0xf7 & (undefined1  [32])0x1) == (undefined1  [32])0x0) &&
              -1 < auVar1[0x1f]))) {
      pauVar3 = pauVar3 + 1;
    }
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
  }
  else if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
    do {
      if (*(short *)*pauVar3 == 0) break;
      pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2);
    } while (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2));
  }
  return (longlong)pauVar3 - (longlong)param_1 >> 1;
}




void FUN_18000be20(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_1800246a0) && ((DAT_180023860 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = FUN_18000f1f0();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}




/* Library Function - Single Match
    __acrt_update_multibyte_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_multibyte_info(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180024cf8) && ((DAT_180023860 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = __acrt_update_thread_multibyte_data();
    *param_2 = lVar1;
  }
  return;
}




int FUN_18000be88(double *param_1,undefined1 (*param_2) [16],__uint64 param_3,char *param_4,
                 __uint64 param_5,uint param_6,byte param_7,uint param_8,
                 __crt_locale_pointers *param_9)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  ulong *puVar6;
  undefined1 (*pauVar7) [16];
  double dVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  short sVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  short sVar17;
  char *pcVar18;
  ulonglong uVar19;
  int iVar20;
  longlong local_48;
  longlong local_40;
  char local_30;
  
  (*param_2)[0] = 0;
  iVar20 = 0;
  uVar16 = 0;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,param_9);
  if ((ulonglong)(longlong)(int)(uVar16 + 0xb) < param_3) {
    dVar8 = *param_1;
    if (((ulonglong)dVar8 >> 0x34 & 0x7ff) == 0x7ff) {
      iVar5 = fp_format_e(param_1,(char *)param_2,param_3,param_4,param_5,uVar16,false,param_8,
                          (__crt_locale_pointers *)0x0);
      if (iVar5 == 0) {
        pauVar7 = FUN_180016a74(param_2,0x65);
        if (pauVar7 != (undefined1 (*) [16])0x0) {
          (*pauVar7)[0] = (param_7 ^ 1) * ' ' + 'P';
          (*pauVar7)[3] = 0;
        }
      }
      else {
        (*param_2)[0] = 0;
        iVar20 = iVar5;
      }
    }
    else {
      if ((longlong)dVar8 < 0) {
        (*param_2)[0] = 0x2d;
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
        dVar8 = *param_1;
      }
      pauVar7 = (undefined1 (*) [16])(*param_2 + 1);
      uVar14 = 0x3ff;
      sVar13 = (ushort)(param_7 ^ 1) * 0x20 + 7;
      if (((ulonglong)dVar8 & 0x7ff0000000000000) == 0) {
        (*param_2)[0] = 0x30;
        uVar14 = (ulonglong)(-(uint)(((ulonglong)*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
      }
      else {
        (*param_2)[0] = 0x31;
      }
      pauVar15 = (undefined1 (*) [16])(*param_2 + 2);
      if (uVar16 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined1 *)**(undefined8 **)(local_40 + 0xf8);
      }
      (*pauVar7)[0] = uVar3;
      if (((ulonglong)*param_1 & 0xfffffffffffff) != 0) {
        sVar17 = 0x30;
        uVar19 = 0xf000000000000;
        do {
          if ((int)uVar16 < 1) break;
          uVar4 = (short)(((ulonglong)*param_1 & uVar19) >> ((byte)sVar17 & 0x3f)) + 0x30;
          if (0x39 < uVar4) {
            uVar4 = uVar4 + sVar13;
          }
          (*pauVar15)[0] = (char)uVar4;
          uVar16 = uVar16 - 1;
          pauVar15 = (undefined1 (*) [16])(*pauVar15 + 1);
          uVar19 = uVar19 >> 4;
          sVar17 = sVar17 + -4;
        } while (-1 < sVar17);
        if ((-1 < sVar17) &&
           (pauVar2 = pauVar15,
           8 < (ushort)(((ulonglong)*param_1 & uVar19) >> ((byte)sVar17 & 0x3f)))) {
          while (pauVar9 = (undefined1 (*) [16])(pauVar2[-1] + 0xf),
                ((*pauVar9)[0] + 0xba & 0xdf) == 0) {
            (*pauVar9)[0] = 0x30;
            pauVar2 = pauVar9;
          }
          if (pauVar9 == pauVar7) {
            pauVar2[-1][0xe] = pauVar2[-1][0xe] + '\x01';
          }
          else {
            if ((*pauVar9)[0] == '9') {
              cVar12 = (char)sVar13 + '9';
            }
            else {
              cVar12 = (*pauVar9)[0];
            }
            (*pauVar9)[0] = cVar12 + '\x01';
          }
        }
      }
      if (0 < (int)uVar16) {
        FUN_180003460(pauVar15,0x30,(ulonglong)uVar16);
        pauVar15 = (undefined1 (*) [16])(*pauVar15 + uVar16);
      }
      if ((*pauVar7)[0] != '\0') {
        pauVar7 = pauVar15;
      }
      (*pauVar7)[0] = (param_7 ^ 1) * ' ' + 'P';
      pcVar1 = *pauVar7 + 2;
      lVar10 = ((uint)((ulonglong)*param_1 >> 0x34) & 0x7ff) - uVar14;
      lVar11 = lVar10;
      if (lVar10 < 0) {
        lVar11 = -lVar10;
      }
      uVar3 = 0x2b;
      if (lVar10 < 0) {
        uVar3 = 0x2d;
      }
      (*pauVar7)[1] = uVar3;
      *pcVar1 = '0';
      pcVar18 = pcVar1;
      if (999 < lVar11) {
        pcVar18 = *pauVar7 + 3;
        *pcVar1 = (char)(lVar11 / 1000) + '0';
        lVar11 = lVar11 % 1000;
      }
      if ((pcVar18 != pcVar1) || (99 < lVar11)) {
        lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar11),8) + lVar11;
        lVar10 = (lVar10 >> 6) - (lVar10 >> 0x3f);
        *pcVar18 = (char)lVar10 + '0';
        pcVar18 = pcVar18 + 1;
        lVar11 = lVar11 + lVar10 * -100;
      }
      if ((pcVar18 != pcVar1) || (9 < lVar11)) {
        *pcVar18 = (char)(lVar11 / 10) + '0';
        pcVar18 = pcVar18 + 1;
        lVar11 = lVar11 % 10;
      }
      *pcVar18 = (char)lVar11 + '0';
      pcVar18[1] = '\0';
    }
  }
  else {
    puVar6 = __doserrno();
    *puVar6 = 0x22;
    FUN_1800093f4();
    iVar20 = 0x22;
  }
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  return iVar20;
}




/* Library Function - Single Match
    int __cdecl fp_format_e(double const * __ptr64 const,char * __ptr64 const,unsigned __int64,char
   * __ptr64 const,unsigned __int64,int,bool,unsigned int,struct __crt_locale_pointers * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl
fp_format_e(double *param_1,char *param_2,__uint64 param_3,char *param_4,__uint64 param_5,
           int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  ulong uVar1;
  ulonglong uVar2;
  int local_18 [4];
  
  uVar2 = (ulonglong)(param_6 + 2) + 1;
  if (uVar2 < param_5) {
    param_5 = uVar2;
  }
  FUN_180011670((ulonglong)*param_1,param_6 + 1,local_18,param_4,param_5);
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
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
fp_format_e_internal
          (char *param_1,__uint64 param_2,int param_3,bool param_4,uint param_5,_strflt *param_6,
          bool param_7,__crt_locale_pointers *param_8)

{
  ulong uVar1;
  ulong *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong local_28;
  longlong local_20;
  char local_10;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < param_3) {
    iVar5 = param_3;
  }
  if ((ulonglong)(longlong)(iVar5 + 9) < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_8);
    if ((param_7) && (pcVar3 = param_1 + (*(int *)param_6 == 0x2d), 0 < param_3)) {
      lVar6 = -1;
      do {
        lVar7 = lVar6;
        lVar6 = lVar7 + 1;
      } while (pcVar3[lVar6] != '\0');
      FUN_1800058f0((undefined8 *)(pcVar3 + 1),(undefined8 *)pcVar3,lVar7 + 2);
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
    pcVar3 = pcVar3 + ((ulonglong)param_7 ^ 1) + (longlong)param_3;
    pcVar4 = param_1 + (param_2 - (longlong)pcVar3);
    if (param_2 == 0xffffffffffffffff) {
      pcVar4 = (char *)0xffffffffffffffff;
    }
    uVar1 = FUN_1800090a8(pcVar3,(longlong)pcVar4,0x1800197ac);
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4) {
      *pcVar3 = 'E';
    }
    if (**(char **)(param_6 + 8) != '0') {
      iVar5 = *(int *)(param_6 + 4) + -1;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
        pcVar3[1] = '-';
      }
      if (99 < iVar5) {
        pcVar3[2] = pcVar3[2] + (char)(iVar5 / 100);
        iVar5 = iVar5 % 100;
      }
      if (9 < iVar5) {
        pcVar3[3] = pcVar3[3] + (char)(iVar5 / 10);
        iVar5 = iVar5 % 10;
      }
      pcVar3[4] = pcVar3[4] + (char)iVar5;
    }
    if ((param_5 == 2) && (pcVar3[2] == '0')) {
      FUN_1800058f0((undefined8 *)(pcVar3 + 2),(undefined8 *)(pcVar3 + 3),3);
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
    iVar5 = 0;
  }
  else {
    puVar2 = __doserrno();
    iVar5 = 0x22;
    *puVar2 = 0x22;
    FUN_1800093f4();
  }
  return iVar5;
}




undefined8
FUN_18000c4a0(undefined8 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,
             __crt_locale_pointers *param_6)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_6);
  if ((param_5 != '\0') && (param_4[1] + -1 == param_3)) {
    *(undefined2 *)((longlong)param_1 + (longlong)(param_4[1] + -1) + (ulonglong)(*param_4 == 0x2d))
         = 0x30;
  }
  if (*param_4 == 0x2d) {
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined8 *)((longlong)param_1 + 1);
  }
  if (param_4[1] < 1) {
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (*(char *)((longlong)param_1 + lVar5) != '\0');
    FUN_1800058f0((undefined8 *)((longlong)param_1 + 1),param_1,lVar4 + 2);
    *(undefined1 *)param_1 = 0x30;
    puVar3 = (undefined8 *)((longlong)param_1 + 1);
  }
  else {
    puVar3 = (undefined8 *)((longlong)param_1 + (longlong)param_4[1]);
  }
  if (0 < param_3) {
    pauVar1 = (undefined1 (*) [16])((longlong)puVar3 + 1);
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (*(char *)((longlong)puVar3 + lVar5) != '\0');
    FUN_1800058f0((undefined8 *)pauVar1,puVar3,lVar4 + 2);
    *(undefined1 *)puVar3 = *(undefined1 *)**(undefined8 **)(local_20 + 0xf8);
    if (param_4[1] < 0) {
      iVar2 = -param_4[1];
      if ((param_5 != '\0') || (iVar2 < param_3)) {
        param_3 = iVar2;
      }
      lVar5 = -1;
      if (param_3 != 0) {
        do {
          lVar4 = lVar5;
          lVar5 = lVar4 + 1;
        } while ((*pauVar1)[lVar5] != '\0');
        FUN_1800058f0((undefined8 *)(*pauVar1 + param_3),(undefined8 *)pauVar1,lVar4 + 2);
      }
      FUN_180003460(pauVar1,0x30,(longlong)param_3);
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
   
   Library: Visual Studio 2017 Release */

int __cdecl
fp_format_g(double *param_1,char *param_2,__uint64 param_3,char *param_4,__uint64 param_5,
           int param_6,bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  FUN_180011670((ulonglong)*param_1,param_6,local_18,param_4,param_5);
  bVar8 = local_18[0] == 0x2d;
  iVar7 = local_18[1] + -1;
  uVar5 = param_3 - bVar8;
  if (param_3 == 0xffffffffffffffff) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar2 = __acrt_fp_strflt_to_string(param_2 + bVar8,uVar5,param_6,(longlong)local_18);
  if (uVar2 == 0) {
    iVar3 = local_18[1] + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      uVar2 = fp_format_e_internal
                        (param_2,param_3,param_6,param_7,param_8,(_strflt *)local_18,true,param_9);
    }
    else {
      pcVar1 = param_2 + bVar8;
      if (iVar7 < iVar3) {
        do {
          pcVar6 = pcVar1;
          pcVar1 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        pcVar6[-1] = '\0';
      }
      uVar4 = FUN_18000c4a0((undefined8 *)param_2,param_3,param_6,local_18,'\x01',param_9);
      uVar2 = (ulong)uVar4;
    }
  }
  else {
    *param_2 = '\0';
  }
  return uVar2;
}




void FUN_18000c718(int param_1,byte param_2,char *param_3,ulonglong param_4,byte param_5)

{
  uint uVar1;
  ulong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
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
  
  local_18 = DAT_180023018 ^ (ulonglong)auStackY_c8;
  if (param_4 < (ulonglong)param_2 + 4) {
    *param_3 = '\0';
  }
  else {
    pcVar4 = param_3;
    if (param_2 != 0) {
      pcVar4 = param_3 + 1;
      *param_3 = '-';
      param_4 = param_4 - 1;
      *pcVar4 = '\0';
    }
    local_78 = &DAT_180019768;
    local_70 = &DAT_180019768;
    local_98[0] = &DAT_180019760;
    local_98[1] = &DAT_180019760;
    local_98[2] = &DAT_180019764;
    local_98[3] = &DAT_180019764;
    local_58 = "NAN(SNAN)";
    local_48 = "nan(snan)";
    local_50 = &DAT_180019768;
    local_30 = &DAT_180019768;
    local_38 = "NAN(IND)";
    lVar5 = (ulonglong)(param_1 - 1) * 4;
    local_28 = "nan(ind)";
    uVar1 = (param_5 ^ 1) * 2;
    local_68 = &DAT_18001976c;
    local_60 = &DAT_18001976c;
    uVar3 = 0xffffffffffffffff;
    local_40 = &DAT_18001976c;
    local_20 = &DAT_18001976c;
    do {
      uVar3 = uVar3 + 1;
    } while (local_98[(ulonglong)uVar1 + lVar5][uVar3] != '\0');
    uVar2 = FUN_1800090a8(pcVar4,param_4,
                          (longlong)local_98[(ulonglong)(uVar1 + (uVar3 < param_4 ^ 1)) + lVar5]);
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_c8);
  return;
}




/* Library Function - Single Match
    __acrt_fp_format
   
   Library: Visual Studio 2017 Release */

ulonglong __acrt_fp_format(double *param_1,undefined1 (*param_2) [16],ulonglong param_3,
                          char *param_4,__uint64 param_5,int param_6,uint param_7,ulonglong param_8,
                          __crt_locale_pointers *param_9)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  bool bVar7;
  uint uVar8;
  int local_18 [4];
  
  if ((((param_2 == (undefined1 (*) [16])0x0) || (param_3 == 0)) || (param_4 == (char *)0x0)) ||
     (param_5 == 0)) {
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_1800093f4();
    return 0x16;
  }
  uVar8 = 1;
  if ((param_6 == 0x41) || (param_6 - 0x45U < 3)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((param_8 & 8) == 0) {
    dVar1 = *param_1;
    uVar2 = (uint)((ulonglong)dVar1 >> 0x20);
    if ((uVar2 >> 0x14 & 0x7ff) == 0x7ff) {
      if (((ulonglong)dVar1 & 0xfffffffffffff) != 0) {
        if (((longlong)dVar1 < 0) && (((ulonglong)dVar1 & 0xfffffffffffff) == 0x8000000000000)) {
          uVar8 = 4;
        }
        else {
          uVar8 = ~(uVar2 >> 0x13) & 1 | 2;
        }
      }
      uVar6 = FUN_18000c718(uVar8,(byte)((ulonglong)dVar1 >> 0x3f),(char *)param_2,param_3,bVar7);
      return uVar6;
    }
  }
  uVar8 = (uint)(param_8 >> 4) & 1 | 2;
  if (param_6 == 0x41) {
LAB_18000ca92:
    iVar3 = FUN_18000be88(param_1,param_2,param_3,param_4,param_5,param_7,bVar7,uVar8,param_9);
    uVar6 = CONCAT44(extraout_var_02,iVar3);
  }
  else {
    if (param_6 == 0x45) {
LAB_18000ca59:
      iVar3 = fp_format_e(param_1,(char *)param_2,param_3,param_4,param_5,param_7,bVar7,uVar8,
                          param_9);
      return CONCAT44(extraout_var_01,iVar3);
    }
    if (param_6 == 0x46) {
LAB_18000c9cf:
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      FUN_180011670((ulonglong)*param_1,param_7,local_18,param_4,param_5);
      uVar6 = param_3 - (local_18[0] == 0x2d);
      if (param_3 == 0xffffffffffffffff) {
        uVar6 = 0xffffffffffffffff;
      }
      uVar4 = __acrt_fp_strflt_to_string
                        (*param_2 + (local_18[0] == 0x2d),uVar6,local_18[1] + param_7,
                         (longlong)local_18);
      if (uVar4 != 0) {
        (*param_2)[0] = 0;
        return CONCAT44(extraout_var_00,uVar4);
      }
      uVar6 = FUN_18000c4a0((undefined8 *)param_2,param_3,param_7,local_18,'\0',param_9);
      return uVar6;
    }
    if (param_6 != 0x47) {
      if (param_6 == 0x61) goto LAB_18000ca92;
      if (param_6 == 0x65) goto LAB_18000ca59;
      if (param_6 == 0x66) goto LAB_18000c9cf;
    }
    iVar3 = fp_format_g(param_1,(char *)param_2,param_3,param_4,param_5,param_7,bVar7,uVar8,param_9)
    ;
    uVar6 = CONCAT44(extraout_var,iVar3);
  }
  return uVar6;
}




/* Library Function - Single Match
    _get_printf_count_output
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _get_printf_count_output(void)

{
  return (int)(DAT_180024690 == (DAT_180023018 | 1));
}




/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_1800246a0; plVar2 != (longlong *)&DAT_1800246a8; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_180023170) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_180023170);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}




undefined4 FUN_18000cb68(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_180024698;
  LOCK();
  DAT_180024698 = 1;
  UNLOCK();
  return uVar1;
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
    FUN_180010388(uVar6);
    if ((int)DAT_180024ab0 < (int)uVar6) {
      uVar6 = DAT_180024ab0;
    }
    uVar7 = (ulonglong)uVar6;
    if (uVar6 != 0) {
      do {
        if ((((*(longlong *)pbVar3 != -1) && (*(longlong *)pbVar3 != -2)) && ((*puVar5 & 1) != 0))
           && (((*puVar5 & 8) != 0 || (DVar1 = GetFileType(*(HANDLE *)pbVar3), DVar1 != 0)))) {
          lVar2 = (ulonglong)((uint)lVar4 & 0x3f) * 0x40 + (&DAT_1800246b0)[lVar4 >> 6];
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
    lVar2 = (ulonglong)(uVar3 & 0x3f) * 0x40 + (&DAT_1800246b0)[(longlong)(int)uVar3 >> 6];
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
        if (DAT_180024668 != 0) {
          *(undefined4 *)(*(longlong *)(lVar4 + DAT_180024668) + 0x18) = 0xfffffffe;
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
  lVar1 = FUN_180010388(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    initialize_inherited_file_handles_nolock();
    initialize_stdio_handles_nolock();
  }
  __acrt_unlock(7);
  return bVar2;
}




undefined8 FUN_18000ce08(void)

{
  __acrt_ptd *p_Var1;
  undefined8 *local_res8 [4];
  
  p_Var1 = FUN_1800098f0();
  local_res8[0] = *(undefined8 **)(p_Var1 + 0x90);
  FUN_18000be20((longlong)p_Var1,(longlong *)local_res8);
  return *local_res8[0];
}




void FUN_18000ce38(int param_1,undefined8 param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStackY_88 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  longlong local_40;
  localeinfo_struct local_38;
  char local_28;
  WORD local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_3);
  if ((param_1 < -1) || (0xff < param_1)) {
    iVar1 = _isleadbyte_l(param_1 >> 8 & 0xff,&local_38);
    if (iVar1 == 0) {
      uVar2 = 1;
      local_47 = 0;
      local_48 = (char)param_1;
    }
    else {
      uVar2 = 2;
      local_46 = 0;
      local_48 = (char)((uint)param_1 >> 8);
      local_47 = (char)param_1;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    iVar1 = __acrt_GetStringTypeA
                      ((__crt_locale_pointers *)&local_38,1,&local_48,uVar2,local_20,
                       (local_38.locinfo)->lc_time_cp,1);
    if (iVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto LAB_18000cf2a;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
LAB_18000cf2a:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_88);
  return;
}




/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __acrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_180024ac0 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_180024cf0 = DAT_180024cf0 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xe);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000cfa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180024ac0 + (longlong)param_1 * 0x28));
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
  
  uVar1 = (ulonglong)DAT_180024cf0;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180024ac0 + uVar1 * 0x28));
    DAT_180024cf0 = DAT_180024cf0 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000cffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180024ac0 + (longlong)param_1 * 0x28));
  return;
}




/* Library Function - Single Match
    __acrt_get_process_end_policy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_get_process_end_policy(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  if ((-1 < *(int *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 8)) &&
     (__acrt_AppPolicyGetProcessTerminationMethodInternal(local_res8), local_res8[0] == 1)) {
    return 0;
  }
  return 1;
}




/* Library Function - Single Match
    _calloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
      pvVar2 = HeapAlloc(DAT_180024f00,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_180010f40();
    } while ((iVar1 != 0) && (iVar1 = _callnewh(dwBytes), iVar1 != 0));
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Single Match
    int __cdecl common_expand_argv_wildcards<char>(char * __ptr64 * __ptr64 const,char * __ptr64 *
   __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_expand_argv_wildcards<char>(char **param_1,char ***param_2)

{
  char **ppcVar1;
  ulong uVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  longlong lVar6;
  char **ppcVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong local_res18;
  char **local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  uVar11 = 0;
  if (param_2 == (char ***)0x0) {
    puVar3 = __doserrno();
    iVar10 = 0x16;
    *puVar3 = 0x16;
    FUN_1800093f4();
  }
  else {
    *param_2 = (char **)0x0;
    pbVar4 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar14 = plStack_50, plVar17 = local_58, pbVar4 != (byte *)0x0) {
      local_res18 = CONCAT53(local_res18._3_5_,0x3f2a);
      pbVar4 = FUN_180013380(pbVar4,(byte *)&local_res18);
      if (pbVar4 == (byte *)0x0) {
        uVar5 = FUN_18000d2d8((longlong)*param_1,0,0,(longlong *)&local_58);
        iVar10 = (int)uVar5;
      }
      else {
        iVar10 = FUN_18000d474((byte *)*param_1,pbVar4,(longlong *)&local_58);
      }
      plVar14 = plStack_50;
      plVar17 = local_58;
      if (iVar10 != 0) goto LAB_18000d26d;
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    local_res18 = 0;
    uVar16 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    uVar8 = ((longlong)plStack_50 - (longlong)local_58) + 7U >> 3;
    if (plStack_50 < local_58) {
      uVar8 = uVar11;
    }
    plVar9 = local_58;
    uVar12 = uVar11;
    uVar13 = uVar11;
    if (uVar8 != 0) {
      do {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*plVar9 + lVar6) != '\0');
        plVar9 = plVar9 + 1;
        uVar13 = uVar13 + 1 + lVar6;
        uVar12 = uVar12 + 1;
        local_res18 = uVar13;
      } while (uVar12 != uVar8);
    }
    ppcVar7 = (char **)FUN_180008538(uVar16,local_res18,1);
    uVar8 = 0xffffffffffffffff;
    if (ppcVar7 != (char **)0x0) {
      ppcVar1 = ppcVar7 + uVar16;
      local_res20 = ppcVar1;
      if (plVar17 != plVar14) {
        plVar9 = plVar17;
        do {
          lVar6 = -1;
          do {
            lVar15 = lVar6;
            lVar6 = lVar15 + 1;
          } while (*(char *)(*plVar9 + lVar6) != '\0');
          lVar15 = lVar15 + 2;
          uVar2 = FUN_1800131f0((char *)local_res20,
                                (longlong)
                                ((longlong)ppcVar1 + (local_res18 - (longlong)local_res20)),*plVar9,
                                lVar15);
          if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char ***)(((longlong)ppcVar7 - (longlong)plVar17) + (longlong)plVar9) = local_res20;
          local_res20 = (char **)((longlong)local_res20 + lVar15);
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar14);
      }
      *param_2 = ppcVar7;
      uVar8 = uVar11;
    }
    iVar10 = (int)uVar8;
    _free_base((LPVOID)0x0);
LAB_18000d26d:
    uVar8 = (ulonglong)((longlong)plVar14 + (7 - (longlong)plVar17)) >> 3;
    if (plVar14 < plVar17) {
      uVar8 = uVar11;
    }
    plVar14 = plVar17;
    if (uVar8 != 0) {
      do {
        _free_base((LPVOID)*plVar14);
        uVar11 = uVar11 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar11 != uVar8);
    }
    _free_base(plVar17);
  }
  return iVar10;
}




undefined8 FUN_18000d2d8(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulong uVar1;
  char *pcVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar6;
  
  uVar8 = 0;
  lVar5 = -1;
  do {
    lVar6 = lVar5;
    lVar5 = lVar6 + 1;
  } while (*(char *)(param_1 + lVar5) != '\0');
  uVar7 = lVar6 + 2;
  if (~param_3 < uVar7) {
    return 0xc;
  }
  uVar9 = param_3 + 1 + uVar7;
  pcVar2 = (char *)_calloc_base(uVar9,1);
  if ((param_3 != 0) && (uVar1 = FUN_1800131f0(pcVar2,uVar9,param_2,param_3), uVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar1 = FUN_1800131f0(pcVar2 + param_3,uVar9 - param_3,param_1,uVar7);
  if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  puVar4 = (undefined8 *)param_4[1];
  if (puVar4 == (undefined8 *)param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      _free_base((LPVOID)0x0);
      puVar4 = (undefined8 *)*param_4;
      if (puVar4 != (undefined8 *)0x0) {
        param_4[1] = (longlong)puVar4;
        param_4[2] = (longlong)(puVar4 + 4);
        goto LAB_18000d441;
      }
    }
    else {
      uVar7 = param_4[2] - *param_4 >> 3;
      if (uVar7 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar7 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar7 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar7 * 0x10);
          _free_base((LPVOID)0x0);
          puVar4 = (undefined8 *)param_4[1];
          goto LAB_18000d441;
        }
        _free_base((LPVOID)0x0);
      }
    }
    _free_base(pcVar2);
    uVar8 = 0xc;
  }
  else {
LAB_18000d441:
    *puVar4 = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  _free_base((LPVOID)0x0);
  return uVar8;
}




void FUN_18000d474(byte *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  HANDLE hFindFile;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStackY_1a8 [32];
  DWORD local_178 [11];
  char local_14c;
  char local_14b;
  char local_14a;
  ulonglong local_38;
  
  local_38 = DAT_180023018 ^ (ulonglong)auStackY_1a8;
  if (param_2 != param_1) {
    do {
      if (((byte)(*param_2 - 0x2f) < 0x2e) &&
         ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) != 0)) break;
      param_2 = FUN_180013b0c(param_1,param_2);
    } while (param_2 != param_1);
  }
  if ((*param_2 == 0x3a) && (param_2 != param_1 + 1)) {
    FUN_18000d2d8((longlong)param_1,0,0,param_3);
  }
  else {
    bVar4 = *param_2 - 0x2f;
    if ((0x2d < bVar4) || (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar4 & 0x3fU) & 1) == 0)
       ) {
      bVar1 = 0;
    }
    FUN_180003460((undefined1 (*) [16])local_178,0,0x140);
    hFindFile = FUN_180013868((longlong)param_1,FindExInfoStandard,local_178,FindExSearchNameMatch,
                              (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      FUN_18000d2d8((longlong)param_1,0,0,param_3);
    }
    else {
      lVar6 = param_3[1] - *param_3 >> 3;
      do {
        if (((local_14c != '.') ||
            ((local_14b != '\0' && ((local_14b != '.' || (local_14a != '\0')))))) &&
           (uVar3 = FUN_18000d2d8((longlong)&local_14c,(longlong)param_1,
                                  -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1))
                                  ,param_3), (int)uVar3 != 0)) goto LAB_18000d564;
        iVar2 = FUN_1800139d8(hFindFile,local_178);
      } while (iVar2 != 0);
      lVar5 = param_3[1] - *param_3 >> 3;
      if (lVar6 != lVar5) {
        FUN_180012e40((undefined1 *)(*param_3 + lVar6 * 8),lVar5 - lVar6,8,&LAB_18000d0b8);
      }
    }
LAB_18000d564:
    if (hFindFile != (HANDLE)0xffffffffffffffff) {
      FindClose(hFindFile);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_1a8);
  return;
}




void FUN_18000d628(HMODULE param_1,byte *param_2,ulonglong param_3)

{
  DWORD DVar1;
  undefined1 auStack_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStack_248;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __acrt_errno_map_os_error(DVar1);
  }
  else {
    FUN_180013db4(local_228,param_2,param_3 & 0xffffffff);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_248);
  return;
}




void FUN_18000d6a4(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_180024d00 == (undefined1 (*) [16])0x0) {
LAB_18000d74d:
    puVar5 = __doserrno();
    *puVar5 = 0x16;
    FUN_1800093f4();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_180003460(DAT_180024d00,0,0x101);
      goto LAB_18000d74d;
    }
    lVar8 = 2;
    pauVar7 = DAT_180024d00;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)pauVar7[1] = puVar4[2];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[2] = puVar4[4];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)pauVar7[3] = puVar4[6];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[4] = puVar4[8];
      *(undefined8 *)(pauVar7[4] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)pauVar7[5] = puVar4[10];
      *(undefined8 *)(pauVar7[5] + 8) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[6] = puVar4[0xc];
      *(undefined8 *)(pauVar7[6] + 8) = uVar3;
      pauVar6 = pauVar7 + 8;
      uVar3 = puVar4[0xf];
      *(undefined8 *)pauVar7[7] = puVar4[0xe];
      *(undefined8 *)(pauVar7[7] + 8) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_180024d08 != (undefined1 (*) [16])0x0) {
    pauVar7 = DAT_180024d08;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)pauVar7[1] = puVar4[2];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[2] = puVar4[4];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)pauVar7[3] = puVar4[6];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[4] = puVar4[8];
        *(undefined8 *)(pauVar7[4] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)pauVar7[5] = puVar4[10];
        *(undefined8 *)(pauVar7[5] + 8) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[6] = puVar4[0xc];
        *(undefined8 *)(pauVar7[6] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)pauVar7[7] = puVar4[0xe];
        *(undefined8 *)(pauVar7[7] + 8) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 8;
      } while (lVar8 != 0);
      goto LAB_18000d7f4;
    }
    FUN_180003460(DAT_180024d08,0,0x100);
  }
  puVar5 = __doserrno();
  *puVar5 = 0x16;
  FUN_1800093f4();
LAB_18000d7f4:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_180023420)) {
    _free_base((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_180024d10 = 0;
  if (param_1 == -2) {
    DAT_180024d10 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_180024d10 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_180024d10 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}




/* Library Function - Single Match
    void __cdecl setSBCS(struct __crt_multibyte_data * __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl setSBCS(__crt_multibyte_data *param_1)

{
  longlong lVar1;
  __crt_multibyte_data *p_Var2;
  longlong lVar3;
  __crt_multibyte_data *p_Var4;
  
  p_Var2 = param_1 + 0x18;
  lVar3 = 0x101;
  FUN_180003460((undefined1 (*) [16])p_Var2,0,0x101);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  p_Var4 = param_1 + 0xc;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined2 *)p_Var4 = 0;
    p_Var4 = p_Var4 + 2;
  }
  do {
    *p_Var2 = p_Var2[(longlong)&DAT_180023420 - (longlong)param_1];
    p_Var2 = p_Var2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  p_Var2 = param_1 + 0x119;
  lVar1 = 0x100;
  do {
    *p_Var2 = p_Var2[(longlong)&DAT_180023420 - (longlong)param_1];
    p_Var2 = p_Var2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




/* Library Function - Single Match
    void __cdecl setSBUpLow(struct __crt_multibyte_data * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl setSBUpLow(__crt_multibyte_data *param_1)

{
  byte bVar1;
  __crt_multibyte_data _Var2;
  BOOL BVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  char local_718 [255];
  __crt_multibyte_data a_Stack_619 [256];
  __crt_multibyte_data a_Stack_519 [257];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStackY_788;
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    lVar10 = 1;
    do {
      if (uVar4 - 0x41 < 0x1a) {
        param_1[lVar10 + 0x18] = (__crt_multibyte_data)((byte)param_1[lVar10 + 0x18] | 0x10);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + ' ');
      }
      else if (uVar4 - 0x61 < 0x1a) {
        param_1[lVar10 + 0x18] = (__crt_multibyte_data)((byte)param_1[lVar10 + 0x18] | 0x20);
        _Var2 = (__crt_multibyte_data)((char)uVar4 + -0x20);
      }
      else {
        _Var2 = (__crt_multibyte_data)0x0;
      }
      param_1[lVar10 + 0x118] = _Var2;
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pcVar6 = local_718;
    lVar10 = 0x100;
    do {
      *pcVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    while (local_738.LeadByte[0] != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)local_738.LeadByte[0];
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = ' ';
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      local_738.LeadByte[0] = *pBVar8;
    }
    __acrt_GetStringTypeA
              ((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(uint *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x220),0x100,local_718,
                        0x100,(char *)(a_Stack_619 + 1),0x100,*(int *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(wchar_t **)(param_1 + 0x220),0x200,local_718,
                        0x100,(char *)(a_Stack_519 + 1),0x100,*(int *)(param_1 + 4),0);
    lVar5 = 1;
    pWVar9 = local_418;
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) == 0) {
          _Var2 = (__crt_multibyte_data)0x0;
        }
        else {
          param_1[lVar5 + 0x18] = (__crt_multibyte_data)((byte)param_1[lVar5 + 0x18] | 0x20);
          _Var2 = a_Stack_519[lVar5];
        }
      }
      else {
        param_1[lVar5 + 0x18] = (__crt_multibyte_data)((byte)param_1[lVar5 + 0x18] | 0x10);
        _Var2 = a_Stack_619[lVar5];
      }
      param_1[lVar5 + 0x118] = _Var2;
      pWVar9 = pWVar9 + 1;
      lVar5 = lVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_788);
  return;
}




int FUN_18000db54(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

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
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_38 [4];
  int local_34 [3];
  __acrt_ptd **local_28;
  __crt_multibyte_data ***local_20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar5 = getSystemCP(param_1);
  if (iVar5 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    return 0;
  }
  p_Var6 = (__crt_multibyte_data *)_malloc_base(0x228);
  if (p_Var6 != (__crt_multibyte_data *)0x0) {
    lVar10 = 4;
    puVar4 = *(undefined8 **)(local_res18 + 0x88);
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
    iVar5 = FUN_18000de4c(iVar5,p_Var6);
    if (iVar5 != -1) {
      if (param_2 == '\0') {
        FUN_18000cb68();
      }
      piVar2 = *(int **)(local_res18 + 0x88);
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar1 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_180023420)) {
        _free_base(*(undefined **)(local_res18 + 0x88));
      }
      *(undefined4 *)p_Var6 = 1;
      p_Var11 = (__crt_multibyte_data *)0x0;
      *(__crt_multibyte_data **)(local_res18 + 0x88) = p_Var6;
      p_Var6 = p_Var11;
      if ((((byte)local_res18[0x3a8] & 2) == 0) && (((byte)DAT_180023860 & 1) == 0)) {
        local_28 = &local_res18;
        local_20 = &local_res20;
        local_34[0] = 5;
        local_34[1] = 5;
        FUN_18000d6a4(local_38,local_34 + 1,&local_28,local_34);
        if (param_2 != '\0') {
          PTR_DAT_1800232d0 = *local_res20;
          p_Var6 = (__crt_multibyte_data *)0x0;
        }
      }
      goto LAB_18000dc4c;
    }
    puVar8 = __doserrno();
    *puVar8 = 0x16;
  }
  iVar5 = -1;
LAB_18000dc4c:
  _free_base(p_Var6);
  return iVar5;
}




/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_180023860) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_180023420)) {
          _free_base(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Library: Visual Studio 2017 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  int iVar1;
  undefined8 in_RAX;
  __acrt_ptd *p_Var2;
  undefined4 extraout_var;
  
  if (DAT_180024d14 == '\0') {
    DAT_180024d08 = &DAT_180023760;
    DAT_180024cf8 = &DAT_180023420;
    DAT_180024d00 = &DAT_180023650;
    p_Var2 = __acrt_getptd_head();
    iVar1 = FUN_18000db54(-3,'\x01',p_Var2,(__crt_multibyte_data **)&DAT_180024cf8);
    in_RAX = CONCAT44(extraout_var,iVar1);
    DAT_180024d14 = '\x01';
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_update_thread_multibyte_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_thread_multibyte_data(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1800098f0();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_180024cf8);
  return;
}




void FUN_18000de4c(int param_1,__crt_multibyte_data *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  uint *puVar5;
  __crt_multibyte_data *p_Var6;
  wchar_t *pwVar7;
  longlong lVar8;
  BYTE *pBVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar16;
  undefined1 auStack_78 [32];
  _cpinfo local_58;
  ulonglong local_40;
  wchar_t *pwVar15;
  
  local_40 = DAT_180023018 ^ (ulonglong)auStack_78;
  uVar3 = getSystemCP(param_1);
  pwVar7 = (wchar_t *)0x0;
  if (uVar3 != 0) {
    puVar5 = &DAT_180023330;
    pwVar15 = pwVar7;
LAB_18000de9e:
    if (*puVar5 != uVar3) goto code_r0x00018000dea6;
    FUN_180003460((undefined1 (*) [16])(param_2 + 0x18),0,0x101);
    pbVar16 = &DAT_180023320;
    lVar8 = 4;
    pbVar12 = &DAT_180023340 + (longlong)pwVar15 * 0x30;
    do {
      bVar1 = *pbVar12;
      pbVar11 = pbVar12;
      while ((bVar1 != 0 && (pbVar11[1] != 0))) {
        bVar1 = *pbVar11;
        uVar14 = (uint)bVar1;
        if (bVar1 <= pbVar11[1]) {
          uVar13 = (uint)bVar1;
          do {
            uVar13 = uVar13 + 1;
            if (0x100 < uVar13) break;
            uVar14 = uVar14 + 1;
            param_2[(ulonglong)uVar13 + 0x18] =
                 (__crt_multibyte_data)((byte)param_2[(ulonglong)uVar13 + 0x18] | *pbVar16);
          } while (uVar14 <= pbVar11[1]);
        }
        pbVar11 = pbVar11 + 2;
        bVar1 = *pbVar11;
      }
      pbVar12 = pbVar12 + 8;
      pbVar16 = pbVar16 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
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
    lVar8 = 6;
    do {
      *(undefined2 *)p_Var6 =
           *(undefined2 *)(p_Var6 + ((longlong)pwVar15 * 0x30 - (longlong)param_2) + 0x180023328);
      p_Var6 = p_Var6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    goto LAB_18000e0d4;
  }
LAB_18000de7f:
  setSBCS(param_2);
LAB_18000e0de:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_78);
  return;
code_r0x00018000dea6:
  uVar14 = (int)pwVar15 + 1;
  pwVar15 = (wchar_t *)(ulonglong)uVar14;
  puVar5 = puVar5 + 0xc;
  if (4 < uVar14) goto code_r0x00018000deb3;
  goto LAB_18000de9e;
code_r0x00018000deb3:
  if ((uVar3 == 65000) || (BVar4 = IsValidCodePage(uVar3 & 0xffff), BVar4 == 0)) goto LAB_18000e0de;
  if (uVar3 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar4 = GetCPInfo(uVar3,&local_58);
    if (BVar4 == 0) {
      if (DAT_180024d10 == 0) goto LAB_18000e0de;
      goto LAB_18000de7f;
    }
    FUN_180003460((undefined1 (*) [16])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_58.MaxCharSize == 2) {
      pBVar9 = local_58.LeadByte;
      while ((local_58.LeadByte[0] != 0 && (pBVar9[1] != 0))) {
        bVar1 = *pBVar9;
        if ((uint)bVar1 <= (uint)pBVar9[1]) {
          uVar3 = (uint)bVar1;
          uVar10 = (ulonglong)(((uint)pBVar9[1] - (uint)bVar1) + 1);
          do {
            uVar3 = uVar3 + 1;
            param_2[(ulonglong)uVar3 + 0x18] =
                 (__crt_multibyte_data)((byte)param_2[(ulonglong)uVar3 + 0x18] | 4);
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        pBVar9 = pBVar9 + 2;
        local_58.LeadByte[0] = *pBVar9;
      }
      p_Var6 = param_2 + 0x1a;
      lVar8 = 0xfe;
      do {
        *p_Var6 = (__crt_multibyte_data)((byte)*p_Var6 | 8);
        p_Var6 = p_Var6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
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
      pwVar7 = (wchar_t *)0x1;
    }
    *(int *)(param_2 + 8) = (int)pwVar7;
  }
  p_Var6 = param_2 + 0xc;
  for (lVar8 = 6; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined2 *)p_Var6 = 0;
    p_Var6 = p_Var6 + 2;
  }
LAB_18000e0d4:
  setSBUpLow(param_2);
  goto LAB_18000e0de;
}




/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct __crt_locale_pointers * __ptr64,unsigned int,int,int)
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl x_ismbbtype_l(__crt_locale_pointers *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if ((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2) & param_3;
    }
    if (uVar1 == 0) goto LAB_18000e156;
  }
  uVar1 = 1;
LAB_18000e156:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}




/* Library Function - Single Match
    _ismbblead
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((__crt_locale_pointers *)0x0,_C,0,4);
  return iVar1;
}




/* Library Function - Single Match
    __acrt_MultiByteToWideChar
   
   Library: Visual Studio 2017 Release */

void __acrt_MultiByteToWideChar(uint param_1,ulonglong param_2)

{
  if (param_1 < 0xc436) {
    if (((9 < param_1 - 0xc42c) || ((0x2a7U >> (param_1 - 0xc42c & 0x1f) & 1) == 0)) &&
       (param_1 != 0x2a)) goto LAB_18000e20b;
LAB_18000e1dc:
    param_2 = 0;
  }
  else {
    if (param_1 != 0xd698) {
      if (param_1 < 0xdeaa) goto LAB_18000e20b;
      if ((param_1 < 0xdeb4) || (param_1 == 65000)) goto LAB_18000e1dc;
      if (param_1 != 0xfde9) goto LAB_18000e20b;
    }
    param_2 = (ulonglong)((uint)param_2 & 8);
  }
LAB_18000e20b:
                    /* WARNING: Could not recover jumptable at 0x00018000e20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2);
  return;
}




/* Library Function - Single Match
    __acrt_WideCharToMultiByte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_WideCharToMultiByte(uint param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = 0;
  if (param_1 < 0xc436) {
    if ((param_1 - 0xc42c < 10) && ((0x2a7U >> (param_1 - 0xc42c & 0x1f) & 1) != 0))
    goto LAB_18000e280;
    bVar2 = param_1 == 0x2a;
LAB_18000e276:
    if (bVar2) goto LAB_18000e280;
  }
  else {
    if (param_1 == 0xd698) goto LAB_18000e280;
    if (0xdea9 < param_1) {
      if ((param_1 < 0xdeb4) || (param_1 == 65000)) goto LAB_18000e280;
      bVar2 = param_1 == 0xfde9;
      goto LAB_18000e276;
    }
  }
  uVar1 = param_2 & 0xffffff7f;
LAB_18000e280:
                    /* WARNING: Could not recover jumptable at 0x00018000e2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,uVar1);
  return;
}




/* Library Function - Single Match
    __dcrt_get_narrow_environment_from_os
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __dcrt_get_narrow_environment_from_os(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar4;
  LPVOID pvVar6;
  WCHAR *pWVar7;
  LPVOID pvVar8;
  LPVOID pvVar9;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  pvVar9 = (LPVOID)0x0;
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar7 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar7[lVar4] != L'\0');
      pWVar7 = pWVar7 + lVar5 + 2;
      WVar1 = *pWVar7;
    }
    iVar2 = __acrt_WideCharToMultiByte(0,0);
    if (iVar2 != 0) {
      pvVar6 = _malloc_base((longlong)iVar2);
      pvVar8 = pvVar9;
      if ((pvVar6 != (LPVOID)0x0) && (iVar2 = __acrt_WideCharToMultiByte(0,0), iVar2 != 0)) {
        pvVar8 = pvVar6;
        pvVar6 = pvVar9;
      }
      _free_base(pvVar6);
      pvVar9 = pvVar8;
    }
  }
  if (pWVar3 != (LPWCH)0x0) {
    FreeEnvironmentStringsW(pWVar3);
  }
  return pvVar9;
}




/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  ulong *puVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_180003460((undefined1 (*) [16])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    puVar1 = __doserrno();
    *puVar1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




/* Library Function - Single Match
    void * __ptr64 __cdecl try_get_function(enum `anonymous namespace'::function_id,char const *
   __ptr64 const,enum A0x391cf84c::module_id const * __ptr64 const,enum A0x391cf84c::module_id const
   * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  
  bVar3 = (byte)DAT_180023018 & 0x3f;
  pvVar7 = (void *)((DAT_180023018 ^ (&DAT_180024df0)[param_1]) >> bVar3 |
                   (DAT_180023018 ^ (&DAT_180024df0)[param_1]) << 0x40 - bVar3);
  if (pvVar7 != (void *)0xffffffffffffffff) {
    if (pvVar7 != (void *)0x0) {
      return pvVar7;
    }
    if (param_3 != param_4) {
      do {
        mVar2 = *param_3;
        hLibModule = (HMODULE)(&DAT_180024d50)[mVar2];
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_18001a4a0)[mVar2];
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
            lVar1 = (&DAT_180024d50)[mVar2];
            (&DAT_180024d50)[mVar2] = hLibModule;
            UNLOCK();
            if (lVar1 != 0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_18000e582;
          }
          LOCK();
          (&DAT_180024d50)[mVar2] = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18000e582:
          if (hLibModule != (HMODULE)0x0) goto LAB_18000e59d;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    hLibModule = (HMODULE)0x0;
LAB_18000e59d:
    if ((hLibModule != (HMODULE)0x0) &&
       (pFVar6 = GetProcAddress(hLibModule,param_2), pFVar6 != (FARPROC)0x0)) {
      bVar3 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
      LOCK();
      (&DAT_180024df0)[param_1] =
           ((ulonglong)pFVar6 >> bVar3 | (longlong)pFVar6 << 0x40 - bVar3) ^ DAT_180023018;
      UNLOCK();
      return pFVar6;
    }
    bVar3 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_180024df0)[param_1] = (0xffffffffffffffffU >> bVar3 | -1L << 0x40 - bVar3) ^ DAT_180023018
    ;
    UNLOCK();
  }
  return (void *)0x0;
}




/* Library Function - Single Match
    __acrt_AppPolicyGetProcessTerminationMethodInternal
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_AppPolicyGetProcessTerminationMethodInternal(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(0x1c,"AppPolicyGetProcessTerminationMethod",
                                (module_id *)&DAT_18001ab14,
                                (module_id *)"AppPolicyGetProcessTerminationMethod");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0xc0000225;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(0xfffffffffffffffa,param_1);
  return uVar1;
}




/* Library Function - Single Match
    __acrt_AreFileApisANSI
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_AreFileApisANSI(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(0,"AreFileApisANSI",(module_id *)&DAT_18001aa48,
                                (module_id *)&DAT_18001aa4c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}




/* Library Function - Single Match
    __acrt_FlsAlloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_FlsAlloc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(3,"FlsAlloc",(module_id *)&DAT_18001aa60,(module_id *)"FlsAlloc");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000e6f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsAlloc();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}




/* Library Function - Single Match
    __acrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_FlsFree(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(4,"FlsFree",(module_id *)&DAT_18001aa78,(module_id *)"FlsFree");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000e73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsFree(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* Library Function - Single Match
    __acrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_FlsGetValue(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       (code *)try_get_function(5,"FlsGetValue",(module_id *)&DAT_18001aa88,
                                (module_id *)"FlsGetValue");
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000e783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsGetValue(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __acrt_FlsSetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(6,"FlsSetValue",(module_id *)&DAT_18001aaa0,
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
    __acrt_InitializeCriticalSectionEx
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x12,"InitializeCriticalSectionEx",(module_id *)&DAT_18001aab8,
                                    (module_id *)"InitializeCriticalSectionEx");
  if (pcVar1 == (code *)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __acrt_LCMapStringEx
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringEx
               (wchar_t *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
               int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x14,"LCMapStringEx",(module_id *)&DAT_18001aae0,
                                    (module_id *)"LCMapStringEx");
  if (pcVar1 == (code *)0x0) {
    Locale = __acrt_LocaleNameToLCID(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    __acrt_LocaleNameToLCID
   
   Library: Visual Studio 2017 Release */

void __acrt_LocaleNameToLCID(wchar_t *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)try_get_function(0x16,"LocaleNameToLCID",(module_id *)&DAT_18001aaf8,
                                    (module_id *)"LocaleNameToLCID");
  if (pcVar1 == (code *)0x0) {
    __acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    (*pcVar1)(param_1,param_2);
  }
  return;
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
    puVar1 = &DAT_180024d50;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_180024df0;
    } while (puVar1 != &DAT_180024df0);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




bool FUN_18000e9fc(void)

{
  DAT_180024f00 = GetProcessHeap();
  return DAT_180024f00 != (HANDLE)0x0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000ea24(undefined8 *param_1,undefined8 *param_2)

{
  code *in_RAX;
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      in_RAX = (code *)*puVar1;
      if ((in_RAX != (code *)0x0) && (in_RAX = (code *)(*in_RAX)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = (code *)(puVar1 + -1);
          puVar1 = puVar1 + -2;
        } while (in_RAX != (code *)param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000eaa4(longlong param_1,longlong param_2)

{
  code *in_RAX;
  bool bVar1;
  
  bVar1 = param_1 == param_2;
  while (!bVar1) {
    in_RAX = *(code **)(param_2 + -8);
    if (in_RAX != (code *)0x0) {
      in_RAX = (code *)(*in_RAX)(0);
    }
    param_2 = param_2 + -0x10;
    bVar1 = param_2 == param_1;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000eae0(undefined8 param_1)

{
  _DAT_180024f08 = param_1;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    _callnewh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = (code *)_query_new_handler();
  if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _query_new_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _query_new_handler(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180023018 & 0x3f;
  uVar2 = DAT_180023018 ^ _DAT_180024f08;
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
  bVar1 = (byte)DAT_180023018 & 0x3f;
  uVar2 = DAT_180023018 ^ _DAT_180024f20;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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

void FUN_18000ebc4(undefined8 param_1)

{
  _DAT_180024f10 = param_1;
  _DAT_180024f18 = param_1;
  _DAT_180024f20 = param_1;
  _DAT_180024f28 = param_1;
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18000ebe4(uint param_1)

{
  longlong lVar1;
  bool bVar2;
  ulong *puVar3;
  __acrt_ptd *p_Var4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  ulonglong *puVar9;
  __acrt_ptd *p_Var10;
  undefined4 local_res10;
  longlong local_res18;
  
  p_Var4 = (__acrt_ptd *)0x0;
  p_Var10 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar2 = true;
  if (param_1 == 2) {
LAB_18000ec2d:
    if (param_1 == 2) {
      puVar9 = (ulonglong *)&DAT_180024f10;
    }
    else if (param_1 == 6) {
LAB_18000ecb3:
      puVar9 = (ulonglong *)&DAT_180024f20;
      p_Var10 = p_Var4;
    }
    else if (param_1 == 0xf) {
      puVar9 = (ulonglong *)&DAT_180024f28;
    }
    else if (param_1 == 0x15) {
      puVar9 = (ulonglong *)&DAT_180024f18;
      p_Var10 = p_Var4;
    }
    else {
      if (param_1 == 0x16) goto LAB_18000ecb3;
      puVar9 = (ulonglong *)0x0;
      p_Var10 = p_Var4;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_18000ec55;
        if ((param_1 != 0xf) && (1 < param_1 - 0x15)) goto LAB_18000ec93;
      }
      goto LAB_18000ec2d;
    }
LAB_18000ec55:
    p_Var10 = FUN_180009a5c();
    if (p_Var10 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar5 = *(longlong *)p_Var10;
    lVar1 = lVar5 + 0xc0;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x10) {
      if (*(uint *)(lVar5 + 4) == param_1) goto LAB_18000ec8e;
    }
    lVar5 = 0;
LAB_18000ec8e:
    if (lVar5 == 0) {
LAB_18000ec93:
      puVar3 = __doserrno();
      *puVar3 = 0x16;
      FUN_1800093f4();
      return 0xffffffff;
    }
    puVar9 = (ulonglong *)(lVar5 + 8);
    bVar2 = false;
  }
  local_res18 = 0;
  if (bVar2) {
    __acrt_lock(3);
  }
  pcVar8 = (code *)*puVar9;
  if (bVar2) {
    bVar7 = (byte)DAT_180023018 & 0x3f;
    pcVar8 = (code *)(((ulonglong)pcVar8 ^ DAT_180023018) >> bVar7 |
                     ((ulonglong)pcVar8 ^ DAT_180023018) << 0x40 - bVar7);
  }
  if (pcVar8 == (code *)0x1) goto LAB_18000edca;
  if (pcVar8 == (code *)0x0) {
    if (bVar2) {
      __acrt_unlock(3);
    }
    FUN_180008360(3);
    pcVar8 = (code *)swi(3);
    uVar6 = (*pcVar8)();
    return uVar6;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    local_res18 = *(longlong *)(p_Var10 + 8);
    *(longlong *)(p_Var10 + 8) = 0;
    if (param_1 == 8) {
      p_Var4 = FUN_1800098f0();
      local_res10 = *(undefined4 *)(p_Var4 + 0x10);
      p_Var4 = FUN_1800098f0();
      *(undefined4 *)(p_Var4 + 0x10) = 0x8c;
      goto LAB_18000ed6d;
    }
  }
  else {
LAB_18000ed6d:
    if (param_1 == 8) {
      lVar1 = *(longlong *)p_Var10;
      for (lVar5 = lVar1 + 0x30; lVar5 != lVar1 + 0xc0; lVar5 = lVar5 + 0x10) {
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      goto LAB_18000edca;
    }
  }
  bVar7 = 0x40 - ((byte)DAT_180023018 & 0x3f) & 0x3f;
  *puVar9 = ((ulonglong)(0 >> bVar7) | 0L << 0x40 - bVar7) ^ DAT_180023018;
LAB_18000edca:
  if (bVar2) {
    __acrt_unlock(3);
  }
  if (pcVar8 != (code *)0x1) {
    if (param_1 == 8) {
      p_Var4 = FUN_1800098f0();
      (*pcVar8)(8,*(undefined4 *)(p_Var4 + 0x10),_guard_dispatch_icall);
    }
    else {
      (*pcVar8)(param_1,_guard_dispatch_icall);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var10 + 8) = local_res18, param_1 == 8)) {
      p_Var10 = FUN_1800098f0();
      *(undefined4 *)(p_Var10 + 0x10) = local_res10;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18000ee64(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_180023018 & 0x3f;
  return (DAT_180023018 ^ _DAT_180024f30) >> bVar1 != 0 ||
         (DAT_180023018 ^ _DAT_180024f30) << 0x40 - bVar1 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000ee84(undefined8 param_1)

{
  _DAT_180024f30 = param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000ee8c(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar2 = (byte)DAT_180023018 & 0x3f;
  UNRECOVERED_JUMPTABLE =
       (code *)((DAT_180023018 ^ _DAT_180024f30) >> bVar2 |
               (DAT_180023018 ^ _DAT_180024f30) << 0x40 - bVar2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar1;
  }
  return 0;
}




/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
    if (((undefined *)puVar2[-2] != &DAT_1800232d8) &&
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
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_180023870)) &&
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
    if ((((undefined *)puVar4[-2] != &DAT_1800232d8) &&
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
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1800197c0)) {
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
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1800197c0)) &&
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
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1800197c0)) {
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
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
      if (((undefined *)puVar2[-2] != &DAT_1800232d8) &&
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




undefined ** FUN_18000f1f0(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  
  p_Var1 = FUN_1800098f0();
  if (((DAT_180023860 & *(uint *)(p_Var1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((undefined8 *)(p_Var1 + 0x90),DAT_1800246a0);
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
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
         (ppuVar1 != &PTR_DAT_180023170)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}




/* Library Function - Single Match
    __acrt_strtok_s_novalidation
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_strtok_s_novalidation(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 auStack_58 [32];
  byte abStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  do {
    if (0x1f < uVar3) {
      __report_rangecheckfailure();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    abStack_38[uVar3] = 0;
    uVar3 = uVar3 + 1;
  } while ((longlong)uVar3 < 0x20);
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    abStack_38[bVar1 >> 3] = abStack_38[bVar1 >> 3] | (byte)(1 << (bVar1 & 7));
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = (byte *)*param_3;
  }
  bVar1 = abStack_38[*param_1 >> 3] & (byte)(1 << (*param_1 & 7));
  while ((bVar1 != 0 && (*param_1 != 0))) {
    param_1 = param_1 + 1;
    bVar1 = abStack_38[*param_1 >> 3] & (byte)(1 << (*param_1 & 7));
  }
  bVar1 = *param_1;
  do {
    pbVar4 = param_1;
    if (bVar1 == 0) {
LAB_18000f3bc:
      *param_3 = pbVar4;
      __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
      return;
    }
    pbVar4 = param_1 + 1;
    if ((abStack_38[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) != 0) {
      *param_1 = 0;
      goto LAB_18000f3bc;
    }
    bVar1 = *pbVar4;
    param_1 = pbVar4;
  } while( true );
}




/* Library Function - Single Match
    strtok_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl strtok_s(char *_Str,char *_Delim,char **_Context)

{
  ulong *puVar1;
  char *pcVar2;
  
  if (((_Context != (char **)0x0) && (_Delim != (char *)0x0)) &&
     ((_Str != (char *)0x0 || (*_Context != (char *)0x0)))) {
    pcVar2 = (char *)__acrt_strtok_s_novalidation((byte *)_Str,(byte *)_Delim,_Context);
    return pcVar2;
  }
  puVar1 = __doserrno();
  *puVar1 = 0x16;
  FUN_1800093f4();
  return (char *)0x0;
}




/* Library Function - Single Match
    _fcloseall
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _fcloseall(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180024660; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180024668 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (iVar2 = FUN_180005f74(*(FILE **)(DAT_180024668 + lVar4 * 8)), iVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180024668 + lVar4 * 8) + 0x30));
      _free_base(*(LPVOID *)(DAT_180024668 + lVar4 * 8));
      *(undefined8 *)(DAT_180024668 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}




/* Library Function - Single Match
    __ascii_strnicmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl __ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (_MaxCount == 0) {
    iVar5 = 0;
  }
  else {
    do {
      bVar1 = *_Str1;
      _Str1 = (char *)((byte *)_Str1 + 1);
      bVar2 = *_Str2;
      uVar4 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar4 = (uint)bVar1;
      }
      _Str2 = (char *)((byte *)_Str2 + 1);
      uVar3 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar3 = (uint)bVar2;
      }
      _MaxCount = _MaxCount - 1;
    } while (((_MaxCount != 0) && (uVar4 != 0)) && (uVar4 == uVar3));
    iVar5 = uVar4 - uVar3;
  }
  return iVar5;
}




int FUN_18000f530(char *param_1,byte *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  longlong lVar4;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if (DAT_180024698 == 0) {
    if (((param_1 != (char *)0x0) && (param_2 != (byte *)0x0)) && (param_3 < 0x80000000)) {
      iVar1 = __ascii_strnicmp(param_1,(char *)param_2,param_3);
      return iVar1;
    }
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_1800093f4();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
    iVar1 = 0x7fffffff;
    if (((param_1 == (char *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
      puVar3 = __doserrno();
      *puVar3 = 0x16;
      FUN_1800093f4();
    }
    else if ((local_20.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      iVar1 = __ascii_strnicmp(param_1,(char *)param_2,param_3);
    }
    else {
      lVar4 = (longlong)param_1 - (longlong)param_2;
      do {
        iVar1 = _tolower_l((uint)param_2[lVar4],&local_20);
        iVar2 = _tolower_l((uint)*param_2,&local_20);
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
        if ((param_3 == 0) || (iVar1 == 0)) break;
      } while (iVar1 == iVar2);
      iVar1 = iVar1 - iVar2;
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return iVar1;
}




ulong FUN_18000f65c(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  DWORD DVar2;
  ulong *puVar3;
  LPVOID pvVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = __acrt_MultiByteToWideChar(param_3,9);
  uVar7 = (ulonglong)iVar1;
  if (iVar1 != 0) {
    if (*(ulonglong *)(param_2 + 0x18) < uVar7) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        _free_base(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar4 = _malloc_base(uVar7 * 2);
      *(LPVOID *)(param_2 + 0x10) = pvVar4;
      uVar5 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
      uVar6 = 0;
      if (uVar5 == 0) {
        uVar6 = uVar7;
      }
      *(bool *)(param_2 + 0x28) = uVar5 == 0;
      *(ulonglong *)(param_2 + 0x18) = uVar6;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    iVar1 = __acrt_MultiByteToWideChar(param_3,9);
    if (iVar1 != 0) {
      *(longlong *)(param_2 + 0x20) = (longlong)iVar1;
      return 0;
    }
  }
  DVar2 = GetLastError();
  __acrt_errno_map_os_error(DVar2);
  puVar3 = __doserrno();
  return *puVar3;
}




errno_t FUN_18000f744(char *param_1,int param_2,int param_3,uint param_4,uint *param_5,int param_6)

{
  byte *pbVar1;
  errno_t eVar2;
  ulong *puVar3;
  int local_18;
  errno_t local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == (char *)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = __doserrno();
    eVar2 = 0x16;
    *puVar3 = 0x16;
    FUN_1800093f4();
  }
  else {
    local_18 = 0;
    local_14 = 0;
    eVar2 = _sopen_nolock(&local_18,(int *)param_5,param_1,param_2,param_3,param_4,param_6);
    if (local_18 != 0) {
      if (eVar2 != 0) {
        pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)(int)*param_5 >> 6] + 0x38 +
                         (ulonglong)(*param_5 & 0x3f) * 0x40);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      local_14 = eVar2;
      FID_conflict___acrt_lowio_lock_fh(*param_5);
    }
    if (eVar2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return eVar2;
}




ulong FUN_18000f808(uint param_1,byte *param_2,uint param_3,char *param_4)

{
  errno_t eVar1;
  int iVar2;
  ulong *puVar3;
  __int64 _Var4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_res8 [2];
  
  iVar7 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_1800246b0)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x40)) {
    return 0;
  }
  uVar6 = 0;
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    eVar1 = _get_fmode((int *)local_res8);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVar5 = param_3 & 0x74000;
  if (uVar5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_18000f8d2;
  }
  else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
LAB_18000f8d2:
    *param_4 = '\x02';
  }
  else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 4) & 0xc0000000;
  iVar8 = iVar7;
  if (uVar5 == 0x40000000) {
LAB_18000f913:
    uVar5 = *(uint *)(param_2 + 8);
    if (uVar5 == 0) {
      return 0;
    }
    if (uVar5 < 3) {
LAB_18000f931:
      iVar8 = 1;
LAB_18000f936:
      if (uVar6 != 0) goto LAB_18000f93e;
      goto LAB_18000fa0c;
    }
    if (4 < uVar5) {
      if (uVar5 != 5) {
        return 0;
      }
      goto LAB_18000f931;
    }
    _Var4 = common_lseek_nolock<__int64>(param_1,0,2);
    if (_Var4 != 0) {
      _Var4 = common_lseek_nolock<__int64>(param_1,0,0);
      if (_Var4 == -1) goto LAB_18000f9a9;
      uVar6 = *(uint *)(param_2 + 4) >> 0x1f;
      goto LAB_18000f936;
    }
  }
  else {
    if (uVar5 != 0x80000000) {
      if (uVar5 != 0xc0000000) {
        return 0;
      }
      goto LAB_18000f913;
    }
LAB_18000f93e:
    local_res8[0] = 0;
    iVar2 = FUN_180014830(param_1,(byte *)local_res8,3);
    if ((0 < iVar2) && (iVar8 == 1)) {
      iVar8 = 0;
    }
    if (iVar2 == -1) goto LAB_18000f9a9;
    if (iVar2 == 2) {
LAB_18000f9c0:
      if ((local_res8[0] & 0xffff) == 0xfffe) {
        puVar3 = __doserrno();
        *puVar3 = 0x16;
        goto LAB_18000f9a9;
      }
      if ((local_res8[0] & 0xffff) == 0xfeff) {
        _Var4 = common_lseek_nolock<__int64>(param_1,2,0);
        if (_Var4 == -1) goto LAB_18000f9a9;
        *param_4 = '\x02';
        goto LAB_18000fa0c;
      }
    }
    else if (iVar2 == 3) {
      if (local_res8[0] == 0xbfbbef) {
        *param_4 = '\x01';
        goto LAB_18000fa0c;
      }
      goto LAB_18000f9c0;
    }
    _Var4 = common_lseek_nolock<__int64>(param_1,0,0);
    if (_Var4 == -1) goto LAB_18000f9a9;
LAB_18000fa0c:
    if (iVar8 == 0) {
      return 0;
    }
  }
  local_res8[0] = 0;
  if (*param_4 == '\x01') {
    local_res8[0] = 0xbfbbef;
    iVar8 = 3;
LAB_18000fa3d:
    if (iVar8 == 0) {
      return 0;
    }
  }
  else {
    iVar8 = iVar7;
    if (*param_4 != '\x02') goto LAB_18000fa3d;
    local_res8[0] = 0xfeff;
    iVar8 = 2;
  }
  while (iVar2 = FUN_18000ae7c(param_1,(byte *)((longlong)local_res8 + (longlong)iVar7),
                               iVar8 - iVar7), iVar2 != -1) {
    iVar7 = iVar7 + iVar2;
    if (iVar8 <= iVar7) {
      return 0;
    }
  }
LAB_18000f9a9:
  puVar3 = __doserrno();
  return *puVar3;
}




/* Library Function - Single Match
    struct `anonymous namespace'::file_options __cdecl decode_options(int,int,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

byte * __cdecl decode_options(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  errno_t eVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_register_0000000c;
  byte *pbVar6;
  uint uVar7;
  byte in_R9B;
  int local_res10 [2];
  
  pbVar6 = (byte *)CONCAT44(in_register_0000000c,param_1);
  *pbVar6 = 0;
  uVar4 = param_2 & 3;
  uVar7 = 0xffffffff;
  if (uVar4 == 0) {
    iVar5 = -0x80000000;
  }
  else if (uVar4 == 1) {
    iVar5 = (-(uint)((param_2 & 0x70000U) != 0 && (param_2 & 8U) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar4 == 2) {
    iVar5 = -0x40000000;
  }
  else {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_1800093f4();
    iVar5 = -1;
  }
  *(int *)(pbVar6 + 4) = iVar5;
  uVar4 = param_2 & 0x700;
  if (uVar4 == 0) {
LAB_18000fb85:
    uVar1 = 3;
  }
  else if (uVar4 == 0x100) {
    uVar1 = 4;
  }
  else if (uVar4 == 0x200) {
LAB_18000fb77:
    uVar1 = 5;
  }
  else if (uVar4 == 0x300) {
    uVar1 = 2;
  }
  else {
    if (uVar4 == 0x400) goto LAB_18000fb85;
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) goto LAB_18000fb77;
      if (uVar4 != 0x700) {
        puVar3 = __doserrno();
        *puVar3 = 0x16;
        FUN_1800093f4();
        iVar5 = *(int *)(pbVar6 + 4);
        uVar1 = 0xffffffff;
        goto LAB_18000fb8a;
      }
    }
    uVar1 = 1;
  }
LAB_18000fb8a:
  *(undefined4 *)(pbVar6 + 8) = uVar1;
  if (param_3 == 0x10) {
    uVar7 = 0;
  }
  else if (param_3 == 0x20) {
    uVar7 = 1;
  }
  else if (param_3 == 0x30) {
    uVar7 = 2;
  }
  else if (param_3 == 0x40) {
    uVar7 = 3;
  }
  else if (param_3 == 0x80) {
    uVar7 = (uint)(iVar5 == -0x80000000);
  }
  else {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_1800093f4();
  }
  pbVar6[0x14] = 0;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  *(uint *)(pbVar6 + 0xc) = uVar7;
  pbVar6[0x10] = 0x80;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  if ((char)param_2 < '\0') {
    *pbVar6 = *pbVar6 | 0x10;
  }
  if ((param_2 & 0x8000U) == 0) {
    if ((param_2 & 0x74000U) == 0) {
      eVar2 = _get_fmode(local_res10);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_res10[0] == 0x8000) goto LAB_18000fc1b;
    }
    *pbVar6 = *pbVar6 | 0x80;
  }
LAB_18000fc1b:
  if (((param_2 & 0x100U) != 0) && (-1 < (char)(~(byte)DAT_180024f48 & in_R9B))) {
    pbVar6[0x10] = 1;
    pbVar6[0x11] = 0;
    pbVar6[0x12] = 0;
    pbVar6[0x13] = 0;
  }
  if ((param_2 & 0x40U) != 0) {
    *(uint *)(pbVar6 + 0x14) = *(uint *)(pbVar6 + 0x14) | 0x4000000;
    *(uint *)(pbVar6 + 4) = *(uint *)(pbVar6 + 4) | 0x10000;
    *(uint *)(pbVar6 + 0xc) = *(uint *)(pbVar6 + 0xc) | 4;
  }
  if (((uint)param_2 >> 0xc & 1) != 0) {
    *(uint *)(pbVar6 + 0x10) = *(uint *)(pbVar6 + 0x10) | 0x100;
  }
  if (((uint)param_2 >> 0xd & 1) != 0) {
    *(uint *)(pbVar6 + 0x14) = *(uint *)(pbVar6 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20U) == 0) {
    if ((param_2 & 0x10U) != 0) {
      *(uint *)(pbVar6 + 0x14) = *(uint *)(pbVar6 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(pbVar6 + 0x14) = *(uint *)(pbVar6 + 0x14) | 0x8000000;
  }
  return pbVar6;
}




ulong FUN_18000fca8(uint param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  __int64 _Var4;
  ulong *puVar5;
  short local_res8 [4];
  
  bVar1 = *(byte *)((&DAT_1800246b0)[(longlong)(int)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x40);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    _Var4 = common_lseek_nolock<__int64>(param_1,-1,2);
    if (_Var4 == -1) {
      puVar5 = __doserrno();
      if (*puVar5 == 0x83) goto LAB_18000fd57;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_180014830(param_1,(byte *)local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = _chsize_nolock(param_1,_Var4);
        if (iVar2 == -1) goto LAB_18000fd0a;
      }
      _Var4 = common_lseek_nolock<__int64>(param_1,0,0);
      if (_Var4 != -1) goto LAB_18000fd57;
    }
LAB_18000fd0a:
    puVar5 = __doserrno();
    uVar3 = *puVar5;
  }
  else {
LAB_18000fd57:
    uVar3 = 0;
  }
  return uVar3;
}




/* Library Function - Single Match
    _sopen_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
_sopen_nolock(int *UnlockFlag,int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,
             int _PermissionFlag,int _SecureFlag)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong local_58;
  longlong local_50;
  char local_40;
  undefined8 local_38;
  undefined8 local_30;
  LPCWSTR local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = (LPCWSTR)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,(__crt_locale_pointers *)0x0);
  uVar3 = 0xfde9;
  if (*(int *)(local_50 + 0xc) == 0xfde9) {
    if (local_40 != '\0') {
      *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    uVar2 = __acrt_AreFileApisANSI();
    if ((int)uVar2 == 0) {
      if (local_40 != (char)uVar2) {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 1;
    }
    else {
      if (local_40 != '\0') {
        *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
  }
  uVar1 = FUN_18000f65c(_Filename,(longlong)&local_38,uVar3);
  if (uVar1 == 0) {
    uVar1 = FUN_18000feb8(UnlockFlag,(uint *)_FileHandle,local_28,_OpenFlag,_ShareFlag);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_10 != '\0') {
    _free_base(local_28);
  }
  return uVar1;
}




/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = FUN_18000f744(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,(uint *)_FileHandle,1);
  return eVar1;
}




ulong FUN_18000feb8(undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  DWORD DVar5;
  undefined1 (*pauVar6) [16];
  ulong *puVar7;
  HANDLE pvVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  char local_98 [4];
  ulong local_94;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  _SECURITY_ATTRIBUTES local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pauVar6 = (undefined1 (*) [16])decode_options((int)&local_48,param_4,param_5);
  local_90 = *pauVar6;
  local_80 = *(undefined8 *)pauVar6[1];
  local_68 = local_90._8_8_ >> 0x20;
  DVar5 = local_90._12_4_;
  local_78 = local_80;
  if (DVar5 == 0xffffffff) {
    puVar7 = __doserrno();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    goto LAB_18000ff39;
  }
  uVar4 = FUN_180010538();
  *param_2 = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar7 = __doserrno();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    puVar7 = __doserrno();
    *puVar7 = 0x18;
    goto LAB_18000ff39;
  }
  uVar11 = (uint)((ulonglong)local_80 >> 0x20) | (uint)local_80;
  local_70 = (ulonglong)uVar11;
  local_60.bInheritHandle = ~(param_4 >> 7) & 1;
  *param_1 = 1;
  local_60.nLength = 0x18;
  local_60.lpSecurityDescriptor = (LPVOID)0x0;
  pvVar8 = CreateFileW(param_3,local_90._4_4_,DVar5,&local_60,local_90._8_4_,uVar11,(HANDLE)0x0);
  uVar4 = local_90._4_4_;
  if (pvVar8 == (HANDLE)0xffffffffffffffff) {
    if (((local_90._4_4_ & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVar3 = local_90._8_4_;
      uVar4 = local_90._4_4_ & 0x7fffffff;
      local_90._0_8_ = local_90._0_8_ & 0x7fffffffffffffff;
      pvVar8 = CreateFileW(param_3,SUB84(local_90._0_8_,4),DVar5,&local_60,uVar3,uVar11,(HANDLE)0x0)
      ;
      if (pvVar8 != (HANDLE)0xffffffffffffffff) goto LAB_180010050;
    }
    pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar5 = GetLastError();
    __acrt_errno_map_os_error(DVar5);
  }
  else {
LAB_180010050:
    DVar5 = GetFileType(pvVar8);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        bVar10 = local_90[0] | 0x40;
      }
      else {
        bVar10 = local_90[0];
        if (DVar5 == 3) {
          bVar10 = local_90[0] | 8;
        }
      }
      __acrt_lowio_set_os_handle(*param_2,pvVar8);
      local_90[0] = bVar10 | 1;
      *(byte *)((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x38 +
               (ulonglong)(*param_2 & 0x3f) * 0x40) = bVar10 | 1;
      *(undefined1 *)
       ((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x40)
           = 0;
      if (((param_4 & 2) == 0) || (local_94 = FUN_18000fca8(*param_2), local_94 == 0)) {
        local_48 = local_90._0_8_;
        uStack_40 = local_90._8_8_;
        local_98[0] = '\0';
        local_38 = local_78;
        local_94 = FUN_18000f808(*param_2,(byte *)&local_48,param_4,local_98);
        uVar11 = *param_2;
        if (local_94 == 0) {
          *(char *)((&DAT_1800246b0)[(longlong)(int)uVar11 >> 6] + 0x39 +
                   (ulonglong)(uVar11 & 0x3f) * 0x40) = local_98[0];
          lVar9 = (ulonglong)(*param_2 & 0x3f) * 0x40;
          lVar2 = (&DAT_1800246b0)[(longlong)(int)*param_2 >> 6];
          pbVar1 = (byte *)(lVar2 + 0x3d + lVar9);
          *pbVar1 = *pbVar1 & 0xfe;
          pbVar1 = (byte *)(lVar2 + 0x3d + lVar9);
          *pbVar1 = *pbVar1 | (byte)(param_4 >> 0x10) & 1;
          if (((bVar10 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x40);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar4 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pvVar8);
            uVar3 = local_90._8_4_;
            local_90._0_8_ = CONCAT44(uVar4,local_90._0_4_) & 0x7fffffffffffffff;
            pvVar8 = CreateFileW(param_3,SUB84(local_90._0_8_,4),(DWORD)local_68,&local_60,uVar3,
                                 (DWORD)local_70,(HANDLE)0x0);
            if (pvVar8 == (HANDLE)0xffffffffffffffff) {
              DVar5 = GetLastError();
              __acrt_errno_map_os_error(DVar5);
              pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x40);
              *pbVar1 = *pbVar1 & 0xfe;
              _free_osfhnd(*param_2);
              goto LAB_18000ff39;
            }
            *(HANDLE *)
             ((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x28 +
             (ulonglong)(*param_2 & 0x3f) * 0x40) = pvVar8;
          }
          return 0;
        }
      }
      else {
        uVar11 = *param_2;
      }
      _close_nolock(uVar11);
      return local_94;
    }
    DVar5 = GetLastError();
    __acrt_errno_map_os_error(DVar5);
    pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(pvVar8);
    if (DVar5 == 0) {
      puVar7 = __doserrno();
      *puVar7 = 0xd;
    }
  }
LAB_18000ff39:
  puVar7 = __doserrno();
  return *puVar7;
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




longlong FUN_180010388(uint param_1)

{
  int iVar1;
  ulong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_180024ab0;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1800246b0)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_1800246b0)[lVar5] = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_180024ab0 + 0x40;
        DAT_180024ab0 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_1800093f4();
    lVar3 = 9;
  }
  return lVar3;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lowio_lock_fh
    __acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void FID_conflict___acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018001044c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((ulonglong)(param_1 & 0x3f) * 0x40 + (&DAT_1800246b0)[(longlong)(int)param_1 >> 6]));
  return;
}




/* Library Function - Single Match
    __acrt_lowio_set_os_handle
   
   Library: Visual Studio 2015 Release */

undefined8 __acrt_lowio_set_os_handle(uint param_1,HANDLE param_2)

{
  int iVar1;
  ulong *puVar2;
  DWORD nStdHandle;
  longlong lVar3;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180024ab0)) {
    lVar3 = (ulonglong)(param_1 & 0x3f) * 0x40;
    if (*(longlong *)((&DAT_1800246b0)[(longlong)(int)param_1 >> 6] + 0x28 + lVar3) == -1) {
      iVar1 = FUN_180014c8c();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1800104d5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1800104d5:
      *(HANDLE *)((&DAT_1800246b0)[(longlong)(int)param_1 >> 6] + 0x28 + lVar3) = param_2;
      return 0;
    }
  }
  puVar2 = __doserrno();
  *puVar2 = 9;
  puVar2 = __doserrno();
  *puVar2 = 0;
  return 0xffffffff;
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lowio_lock_fh
    __acrt_lowio_unlock_fh
   
   Library: Visual Studio 2015 Release */

void FID_conflict___acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180010530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((ulonglong)(param_1 & 0x3f) * 0x40 + (&DAT_1800246b0)[(longlong)(int)param_1 >> 6]));
  return;
}




uint FUN_180010538(void)

{
  LPCRITICAL_SECTION p_Var1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  __acrt_lock(7);
  uVar4 = 0xffffffff;
  iVar5 = 0;
  do {
    if (0x7f < iVar5) {
LAB_180010635:
      __acrt_unlock(7);
      return uVar4;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_1800246b0)[iVar5];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      puVar2 = __acrt_lowio_create_handle_array();
      (&DAT_1800246b0)[iVar5] = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        DAT_180024ab0 = DAT_180024ab0 + 0x40;
        uVar4 = iVar5 << 6;
        FID_conflict___acrt_lowio_lock_fh(uVar4);
        *(undefined1 *)((&DAT_1800246b0)[(longlong)(int)uVar4 >> 6] + 0x38) = 1;
      }
      goto LAB_180010635;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x66].OwningThread;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].LockSemaphore) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar4 = (int)((longlong)lpCriticalSection - (longlong)p_Var1 >> 6) + iVar5 * 0x40;
          lVar3 = (ulonglong)(uVar4 & 0x3f) * 0x40;
          *(undefined1 *)((&DAT_1800246b0)[(longlong)(int)uVar4 >> 6] + 0x38 + lVar3) = 1;
          *(undefined8 *)((&DAT_1800246b0)[(longlong)(int)uVar4 >> 6] + 0x28 + lVar3) =
               0xffffffffffffffff;
          goto LAB_180010635;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
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
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_180024ab0)) {
    lVar3 = (ulonglong)(param_1 & 0x3f) * 0x40;
    if (((*(byte *)((&DAT_1800246b0)[(longlong)param_1 >> 6] + 0x38 + lVar3) & 1) != 0) &&
       (*(longlong *)((&DAT_1800246b0)[(longlong)param_1 >> 6] + 0x28 + lVar3) != -1)) {
      iVar1 = FUN_180014c8c();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1800106dc;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1800106dc:
      *(undefined8 *)((&DAT_1800246b0)[(longlong)param_1 >> 6] + 0x28 + lVar3) = 0xffffffffffffffff;
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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180024ab0)) {
      lVar2 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
      if ((*(byte *)((&DAT_1800246b0)[(longlong)_FileHandle >> 6] + 0x38 + lVar2) & 1) != 0) {
        return *(intptr_t *)((&DAT_1800246b0)[(longlong)_FileHandle >> 6] + 0x28 + lVar2);
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_1800093f4();
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
  if ((*(byte *)((&DAT_1800246b0)[(longlong)(int)_FileHandle >> 6] + 0x38 +
                (ulonglong)(_FileHandle & 0x3f) * 0x40) & 1) != 0) {
    hFile = (HANDLE)_get_osfhandle(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    iVar4 = 0;
    if (BVar1 != 0) goto LAB_180010808;
    puVar3 = __doserrno();
    DVar2 = GetLastError();
    *puVar3 = DVar2;
  }
  puVar3 = __doserrno();
  *puVar3 = 9;
  iVar4 = -1;
LAB_180010808:
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
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180024ab0)) &&
       ((*(byte *)((&DAT_1800246b0)[(longlong)_FileHandle >> 6] + 0x38 +
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
    FUN_1800093f4();
  }
  return -1;
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
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180024ab0)) {
      return *(byte *)((&DAT_1800246b0)[(longlong)_FileHandle >> 6] + 0x38 +
                      (ulonglong)(_FileHandle & 0x3f) * 0x40) & 0x40;
    }
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_1800093f4();
  }
  return 0;
}




__int64 FUN_180010910(uint param_1,__int64 param_2,int param_3)

{
  ulong *puVar1;
  longlong lVar2;
  __int64 _Var3;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180024ab0)) {
      lVar2 = (ulonglong)(param_1 & 0x3f) * 0x40;
      if ((*(byte *)(lVar2 + 0x38 + (&DAT_1800246b0)[(longlong)(int)param_1 >> 6]) & 1) != 0) {
        FID_conflict___acrt_lowio_lock_fh(param_1);
        _Var3 = -1;
        if ((*(byte *)(lVar2 + 0x38 + (&DAT_1800246b0)[(longlong)(int)param_1 >> 6]) & 1) == 0) {
          puVar1 = __doserrno();
          *puVar1 = 9;
          puVar1 = __doserrno();
          *puVar1 = 0;
        }
        else {
          _Var3 = common_lseek_nolock<__int64>(param_1,param_2,param_3);
        }
        FID_conflict___acrt_lowio_lock_fh(param_1);
        return _Var3;
      }
    }
    puVar1 = __doserrno();
    *puVar1 = 0;
    puVar1 = __doserrno();
    *puVar1 = 9;
    FUN_1800093f4();
  }
  return -1;
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
      pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfd;
      return (__int64)local_res20.s;
    }
  }
  return -1;
}




undefined2 FUN_180010aac(undefined2 param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = param_1;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) ||
     (BVar2 = __dcrt_write_console(local_res8,1,local_res10), BVar2 == 0)) {
    local_res8[0] = 0xffff;
  }
  return local_res8[0];
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  _DAT_180024670 = _DAT_180024670 + 1;
  uVar2 = 0x1000;
  pvVar1 = _malloc_base(0x1000);
  param_1[1] = pvVar1;
  _free_base((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
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




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __acrt_LCMapStringA_stat(struct __crt_locale_pointers * __ptr64,wchar_t const *
   __ptr64,unsigned long,char const * __ptr64,int,char * __ptr64,int,int,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  ulonglong uVar5;
  LPCWSTR pWVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  wchar_t *local_38;
  ulonglong local_30;
  
  puVar9 = auStack_88;
  puVar11 = auStack_88;
  local_30 = DAT_180023018 ^ (ulonglong)&local_38;
  local_38 = param_2;
  if (0 < param_5) {
    __strncnt(param_4,(longlong)param_5);
  }
  if (param_8 == 0) {
    param_8 = *(uint *)(*(longlong *)param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar3 = __acrt_MultiByteToWideChar(param_8,(ulonglong)((-(uint)(param_9 != 0) & 8) + 1));
  puVar12 = auStack_88;
  if (iVar3 == 0) goto LAB_180010e5d;
  uVar8 = (longlong)iVar3 * 2 + 0x10;
  uVar8 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar8) & uVar8;
  if (uVar8 == 0) {
    pWVar6 = (LPCWSTR)0x0;
LAB_180010c9b:
    if (pWVar6 != (LPCWSTR)0x0) {
      *(int *)(puVar11 + 0x28) = iVar3;
      *(LPCWSTR *)(puVar11 + 0x20) = pWVar6;
      *(undefined8 *)(puVar11 + -8) = 0x180010cc1;
      iVar4 = __acrt_MultiByteToWideChar(param_8,1);
      if (iVar4 != 0) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        pwVar2 = local_38;
        *(undefined4 *)(puVar11 + 0x28) = 0;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + -8) = 0x180010cfb;
        iVar4 = __acrt_LCMapStringEx
                          (pwVar2,param_3,pWVar6,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                           *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                           *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
        if (iVar4 != 0) {
          if ((param_3 & 0x400) == 0) {
            uVar8 = (longlong)iVar4 * 2 + 0x10;
            uVar8 = -(ulonglong)((ulonglong)((longlong)iVar4 * 2) < uVar8) & uVar8;
            if (uVar8 == 0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              if (uVar8 < 0x401) {
                uVar5 = uVar8 + 0xf;
                if (uVar5 <= uVar8) {
                  uVar5 = 0xffffffffffffff0;
                }
                *(undefined8 *)(puVar11 + -8) = 0x180010d98;
                lVar1 = -(uVar5 & 0xfffffffffffffff0);
                puVar10 = puVar11 + lVar1;
                puVar7 = (undefined4 *)(puVar11 + lVar1 + 0x50);
                puVar11 = puVar11 + lVar1;
                if (puVar7 == (undefined4 *)0x0) goto LAB_180010e45;
                *puVar7 = 0xcccc;
                puVar11 = puVar10;
              }
              else {
                *(undefined8 *)(puVar11 + -8) = 0x180010db6;
                puVar7 = (undefined4 *)_malloc_base(uVar8);
                if (puVar7 == (undefined4 *)0x0) goto LAB_180010dcc;
                *puVar7 = 0xdddd;
              }
              puVar7 = puVar7 + 4;
            }
LAB_180010dcc:
            if (puVar7 != (undefined4 *)0x0) {
              *(undefined8 *)(puVar11 + 0x40) = 0;
              *(undefined8 *)(puVar11 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 0x30) = 0;
              *(int *)(puVar11 + 0x28) = iVar4;
              *(undefined4 **)(puVar11 + 0x20) = puVar7;
              *(undefined8 *)(puVar11 + -8) = 0x180010dfd;
              iVar3 = __acrt_LCMapStringEx
                                (pwVar2,param_3,pWVar6,iVar3,*(LPWSTR *)(puVar11 + 0x20),
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
                *(undefined8 *)(puVar11 + -8) = 0x180010e2c;
                iVar3 = __acrt_WideCharToMultiByte(param_8,0);
                if (iVar3 != 0) {
                  if (puVar7[-4] == 0xdddd) {
                    *(undefined8 *)(puVar11 + -8) = 0x180010ea3;
                    _free_base(puVar7 + -4);
                  }
                  goto LAB_180010e45;
                }
              }
              if (puVar7[-4] == 0xdddd) {
                *(undefined8 *)(puVar11 + -8) = 0x180010e43;
                _free_base(puVar7 + -4);
              }
            }
          }
          else if ((param_7 != 0) && (iVar4 <= param_7)) {
            *(undefined8 *)(puVar11 + 0x40) = 0;
            *(undefined8 *)(puVar11 + 0x38) = 0;
            *(undefined8 *)(puVar11 + 0x30) = 0;
            *(int *)(puVar11 + 0x28) = param_7;
            *(char **)(puVar11 + 0x20) = param_6;
            *(undefined8 *)(puVar11 + -8) = 0x180010d53;
            __acrt_LCMapStringEx
                      (pwVar2,param_3,pWVar6,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                       *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                       *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
          }
        }
      }
    }
  }
  else {
    if (0x400 < uVar8) {
      pWVar6 = (LPCWSTR)_malloc_base(uVar8);
      puVar11 = auStack_88;
      if (pWVar6 != (LPCWSTR)0x0) {
        pWVar6[0] = L'\xdddd';
        pWVar6[1] = L'\0';
        goto LAB_180010c93;
      }
      goto LAB_180010c9b;
    }
    uVar5 = uVar8 + 0xf;
    if (uVar5 <= uVar8) {
      uVar5 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    puVar9 = auStack_88 + lVar1;
    pWVar6 = (LPCWSTR)((longlong)&local_38 + lVar1);
    puVar11 = auStack_88 + lVar1;
    if (pWVar6 != (LPCWSTR)0x0) {
      pWVar6[0] = L'쳌';
      pWVar6[1] = L'\0';
LAB_180010c93:
      pWVar6 = pWVar6 + 8;
      puVar11 = puVar9;
      goto LAB_180010c9b;
    }
  }
LAB_180010e45:
  puVar12 = puVar11;
  if ((pWVar6 != (LPCWSTR)0x0) && (*(int *)(pWVar6 + -8) == 0xdddd)) {
    *(undefined8 *)(puVar11 + -8) = 0x180010e5b;
    _free_base(pWVar6 + -8);
  }
LAB_180010e5d:
  uVar8 = local_30 ^ (ulonglong)&local_38;
  *(undefined8 *)(puVar12 + -8) = 0x180010e69;
  __security_check_cookie(uVar8);
  return extraout_EAX;
}




/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Library: Visual Studio 2017 Release */

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




undefined4 FUN_180010f40(void)

{
  return DAT_180024f3c;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_mbstring::__mbrtowc_utf8(wchar_t * __ptr64,char const *
   __ptr64,unsigned __int64,struct _Mbstatet * __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 __cdecl
__crt_mbstring::__mbrtowc_utf8(wchar_t *param_1,char *param_2,__uint64 param_3,_Mbstatet *param_4)

{
  __uint64 _Var1;
  uint local_18 [4];
  
  _Var1 = FUN_180014ddc((ulonglong)local_18,(byte *)param_2,param_3,(uint *)param_4);
  if (_Var1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (wchar_t *)0x0) {
      *param_1 = (wchar_t)local_18[0];
    }
  }
  return _Var1;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_mbstring::__mbsrtowcs_utf8(wchar_t * __ptr64,char const * __ptr64
   * __ptr64,unsigned __int64,struct _Mbstatet * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__uint64 __cdecl
__crt_mbstring::__mbsrtowcs_utf8
          (wchar_t *param_1,char **param_2,__uint64 param_3,_Mbstatet *param_4)

{
  longlong lVar1;
  ulong *puVar2;
  uint uVar3;
  wchar_t *pwVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  
  pbVar6 = (byte *)*param_2;
  pbVar5 = (byte *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    while( true ) {
      if (*pbVar6 == 0) {
        uVar7 = 1;
      }
      else if (pbVar6[1] == 0) {
        uVar7 = 2;
      }
      else {
        uVar7 = (ulonglong)(pbVar6[2] != 0) + 3;
      }
      lVar1 = FUN_180014ddc(0,pbVar6,uVar7,(uint *)param_4);
      if (lVar1 == -1) goto LAB_18001107d;
      if (lVar1 == 0) break;
      if (lVar1 == 4) {
        pbVar5 = pbVar5 + 1;
      }
      pbVar6 = pbVar6 + lVar1;
      pbVar5 = pbVar5 + 1;
    }
  }
  else {
    pwVar4 = param_1;
    if (param_3 != 0) {
      do {
        if (*pbVar6 == 0) {
          uVar7 = 1;
        }
        else if (pbVar6[1] == 0) {
          uVar7 = 2;
        }
        else {
          uVar7 = (ulonglong)(pbVar6[2] != 0) + 3;
        }
        lVar1 = FUN_180014ddc((ulonglong)local_res8,pbVar6,uVar7,(uint *)param_4);
        if (lVar1 == -1) {
          *param_2 = (char *)pbVar6;
LAB_18001107d:
          puVar2 = __doserrno();
          *puVar2 = 0x2a;
          return 0xffffffffffffffff;
        }
        if (lVar1 == 0) {
          *pwVar4 = L'\0';
          pbVar6 = pbVar5;
          break;
        }
        uVar3 = local_res8[0];
        if (0xffff < local_res8[0]) {
          if (param_3 < 2) break;
          local_res8[0] = local_res8[0] - 0x10000;
          param_3 = param_3 - 1;
          *pwVar4 = (ushort)(local_res8[0] >> 10) | 0xd800;
          pwVar4 = pwVar4 + 1;
          uVar3 = (uint)((ushort)local_res8[0] & 0x3ff | 0xdc00);
        }
        *pwVar4 = (wchar_t)uVar3;
        pbVar6 = pbVar6 + lVar1;
        pwVar4 = pwVar4 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    *param_2 = (char *)pbVar6;
    pbVar5 = (byte *)((longlong)pwVar4 - (longlong)param_1 >> 1);
  }
  return (__uint64)pbVar5;
}




/* Library Function - Single Match
    __acrt_fp_strflt_to_string
   
   Library: Visual Studio 2017 Release */

ulong __acrt_fp_strflt_to_string(char *param_1,ulonglong param_2,int param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  ulong *puVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar3 = 0;
    if (0 < param_3) {
      iVar3 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar3 + 1)) {
      puVar4 = __doserrno();
      uVar6 = 0x22;
      goto LAB_18001111b;
    }
    if (param_4 != 0) {
      pcVar7 = *(char **)(param_4 + 8);
      pcVar8 = param_1 + 1;
      *param_1 = '0';
      for (; 0 < param_3; param_3 = param_3 + -1) {
        cVar1 = *pcVar7;
        pcVar5 = pcVar7 + 1;
        if (cVar1 == '\0') {
          pcVar5 = pcVar7;
          cVar1 = '0';
        }
        *pcVar8 = cVar1;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar5;
      }
      *pcVar8 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar7)) {
        while( true ) {
          pcVar8 = pcVar8 + -1;
          if (*pcVar8 != '9') break;
          *pcVar8 = '0';
        }
        *pcVar8 = *pcVar8 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        lVar2 = -1;
        do {
          lVar9 = lVar2;
          lVar2 = lVar9 + 1;
        } while (param_1[lVar9 + 2] != '\0');
        FUN_1800058f0((undefined8 *)param_1,(undefined8 *)(param_1 + 1),lVar9 + 2);
      }
      return 0;
    }
  }
  puVar4 = __doserrno();
  uVar6 = 0x16;
LAB_18001111b:
  *puVar4 = uVar6;
  FUN_1800093f4();
  return uVar6;
}




ulonglong FUN_1800111e0(uint *param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uStackX_8;
  undefined8 uStack_230;
  undefined1 local_214 [468];
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar8 = *param_2;
  if (uVar8 == 0) {
    return 0;
  }
  uVar10 = uVar8 - 1;
  uVar18 = *param_1 - 1;
  uVar17 = (ulonglong)uVar18;
  if (uVar10 == 0) {
    uVar8 = param_2[1];
    uVar12 = 0;
    if (uVar8 == 1) {
      uVar8 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      uVar4 = (ulonglong)uVar8;
    }
    else {
      uVar4 = uVar12;
      if (uVar18 == 0) {
        uVar10 = param_1[1];
        *param_1 = 0;
        memcpy_s(param_1 + 1,0x1cc,local_214,0);
        uVar4 = (ulonglong)uVar10 / (ulonglong)uVar8;
        uVar10 = uVar10 % uVar8;
        param_1[1] = uVar10;
        *param_1 = (uint)(uVar10 != 0);
      }
      else {
        while (uVar18 != 0xffffffff) {
          lVar13 = uVar17 + 1;
          uVar18 = (int)uVar17 - 1;
          uVar17 = (ulonglong)uVar18;
          uVar3 = (ulonglong)param_1[lVar13] | uVar12 << 0x20;
          uVar12 = uVar3 % (ulonglong)uVar8;
          uVar4 = (uVar4 << 0x20) + (uVar3 / uVar8 & 0xffffffff);
        }
        *param_1 = 0;
        memcpy_s(param_1 + 1,0x1cc,local_214,0);
        param_1[1] = (uint)uVar12;
        param_1[2] = 0;
        *param_1 = 1;
      }
    }
  }
  else {
    if (uVar10 <= uVar18) {
      lVar13 = (longlong)(int)uVar18;
      iVar15 = uVar18 - uVar10;
      lVar14 = (longlong)iVar15;
      if (lVar14 <= lVar13) {
        puVar9 = param_1 + lVar13 + 1;
        uVar10 = uVar18;
        do {
          if (*(uint *)((longlong)param_2 + (lVar14 * -4 - (longlong)param_1) + (longlong)puVar9) !=
              *puVar9) {
            if (param_1[(longlong)(int)uVar10 + 1] <= param_2[(longlong)(int)(uVar10 - iVar15) + 1])
            goto LAB_1800113a6;
            break;
          }
          uVar10 = uVar10 - 1;
          lVar13 = lVar13 + -1;
          puVar9 = puVar9 + -1;
        } while (lVar14 <= lVar13);
      }
      iVar15 = iVar15 + 1;
LAB_1800113a6:
      if (iVar15 != 0) {
        uVar10 = param_2[(ulonglong)(uVar8 - 1) + 1];
        uStackX_8 = param_2[(ulonglong)(uVar8 - 2) + 1];
        iVar1 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar19 = 0x20;
        if (uVar10 != 0) {
          iVar19 = 0x1f - iVar1;
        }
        bVar2 = (byte)iVar19;
        bVar7 = 0x20 - bVar2;
        if (iVar19 != 0) {
          uVar11 = uStackX_8 >> (bVar7 & 0x1f);
          uStackX_8 = uStackX_8 << (bVar2 & 0x1f);
          uVar10 = uVar11 | uVar10 << (bVar2 & 0x1f);
          if (2 < uVar8) {
            uStackX_8 = uStackX_8 | param_2[(ulonglong)(uVar8 - 3) + 1] >> (bVar7 & 0x1f);
          }
        }
        uVar11 = 0;
        iVar15 = iVar15 + -1;
        uVar4 = 0;
        if (-1 < iVar15) {
          uVar21 = iVar15 + uVar8;
          uVar12 = (ulonglong)uVar10;
          do {
            uVar10 = uVar11;
            if (uVar21 <= (uint)uVar17) {
              uVar10 = param_1[(ulonglong)uVar21 + 1];
            }
            uVar18 = param_1[(ulonglong)(uVar21 - 2) + 1];
            uVar3 = (ulonglong)uVar18;
            uStack_230 = CONCAT44(uVar10,param_1[(ulonglong)(uVar21 - 1) + 1]);
            if (iVar19 != 0) {
              uStack_230 = (ulonglong)(uVar18 >> (bVar7 & 0x3f)) | uStack_230 << (bVar2 & 0x3f);
              uVar18 = uVar18 << (bVar2 & 0x1f);
              uVar3 = (ulonglong)uVar18;
              if (2 < uVar21) {
                uVar3 = (ulonglong)(uVar18 | param_1[(ulonglong)(uVar21 - 3) + 1] >> (bVar7 & 0x1f))
                ;
              }
            }
            uVar5 = uStack_230 / uVar12;
            uStack_230 = uStack_230 % uVar12;
            if (0xffffffff < uVar5) {
              lVar13 = uVar5 - 0xffffffff;
              uVar5 = 0xffffffff;
              uStack_230 = uStack_230 + lVar13 * uVar12;
            }
            if (uStack_230 < 0x100000000) {
              uVar6 = uStackX_8 * uVar5;
              do {
                if (uVar6 <= (uStack_230 << 0x20 | uVar3)) break;
                uVar5 = uVar5 - 1;
                uVar6 = uVar6 - uStackX_8;
                uStack_230 = uStack_230 + uVar12;
              } while (uStack_230 < 0x100000000);
            }
            if (uVar5 != 0) {
              uVar17 = 0;
              uVar18 = uVar11;
              puVar9 = param_2;
              if (uVar8 != 0) {
                do {
                  uVar17 = uVar17 + puVar9[1] * uVar5;
                  uVar3 = uVar17 >> 0x20;
                  uVar16 = (uint)uVar17;
                  uVar17 = uVar3 + 1;
                  if (uVar16 <= param_1[(ulonglong)(uVar18 + iVar15) + 1]) {
                    uVar17 = uVar3;
                  }
                  uVar20 = uVar18 + 1;
                  param_1[(ulonglong)(uVar18 + iVar15) + 1] =
                       param_1[(ulonglong)(uVar18 + iVar15) + 1] - uVar16;
                  uVar18 = uVar20;
                  puVar9 = puVar9 + 1;
                } while (uVar20 < uVar8);
              }
              if (uVar10 < uVar17) {
                uVar17 = 0;
                uVar10 = uVar11;
                puVar9 = param_2;
                if (uVar8 != 0) {
                  do {
                    uVar18 = uVar10 + 1;
                    uVar17 = puVar9[1] + uVar17 +
                             (ulonglong)param_1[(ulonglong)(uVar10 + iVar15) + 1];
                    param_1[(ulonglong)(uVar10 + iVar15) + 1] = (uint)uVar17;
                    uVar17 = uVar17 >> 0x20;
                    uVar10 = uVar18;
                    puVar9 = puVar9 + 1;
                  } while (uVar18 < uVar8);
                }
                uVar5 = uVar5 - 1;
              }
              uVar17 = (ulonglong)(uVar21 - 1);
            }
            uVar18 = (uint)uVar17;
            uVar21 = uVar21 - 1;
            uVar4 = (uVar4 << 0x20) + (uVar5 & 0xffffffff);
            iVar15 = iVar15 + -1;
          } while (-1 < iVar15);
        }
        uVar18 = uVar18 + 1;
        uVar17 = (ulonglong)uVar18;
        uVar12 = uVar17;
        if (uVar18 < *param_1) {
          do {
            uVar8 = (int)uVar12 + 1;
            param_1[uVar12 + 1] = 0;
            uVar12 = (ulonglong)uVar8;
          } while (uVar8 < *param_1);
        }
        *param_1 = uVar18;
        while( true ) {
          if (uVar18 == 0) {
            return uVar4;
          }
          uVar18 = (int)uVar17 - 1;
          uVar17 = (ulonglong)uVar18;
          if (param_1[uVar17 + 1] != 0) break;
          *param_1 = uVar18;
        }
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180011670(ulonglong param_1,int param_2,undefined4 *param_3,char *param_4,longlong param_5)

{
  byte bVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  longlong lVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  int iVar28;
  bool bVar29;
  double dVar30;
  undefined1 auStackY_818 [32];
  byte local_7b8 [8];
  char local_7b0;
  uint *puStack_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint uStack_5c8;
  uint auStack_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint uStack_228;
  uint auStack_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_180023018 ^ (ulonglong)auStackY_818;
  local_7a0 = param_3;
  fegetenv((uint *)local_7b8);
  uVar27 = 0;
  local_7b0 = (local_7b8[0] & 0x1f) != 0x1f;
  if ((bool)local_7b0) {
    feholdexcept((undefined8 *)local_7b8);
  }
  *(char **)(param_3 + 2) = param_4;
  uVar9 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar9 = 0x2d;
  }
  *param_3 = uVar9;
  uVar14 = param_1 >> 0x34 & 0x7ff;
  uVar4 = 0;
  if ((uVar14 == 0) && ((param_1 & 0xfffffffffffff) == 0)) {
    param_3[1] = 0;
    uVar3 = FUN_1800090a8(param_4,param_5,0x18001b50c);
    if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_1800128aa;
  }
  uVar5 = uVar4;
  if (uVar14 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar5 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar5 = 4;
    }
    else {
      uVar5 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_3[1] = 1;
  }
  if (uVar5 == 1) {
    uVar3 = FUN_1800090a8(param_4,param_5,0x18001b510);
    if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_1800128aa;
  }
  if (uVar5 == 2) {
    uVar3 = FUN_1800090a8(param_4,param_5,0x18001b518);
    if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_1800128aa;
  }
  if (uVar5 == 3) {
    uVar3 = FUN_1800090a8(param_4,param_5,0x18001b520);
    if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_1800128aa;
  }
  if (uVar5 == 4) {
    uVar3 = FUN_1800090a8(param_4,param_5,0x18001b528);
    if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    goto LAB_1800128aa;
  }
  uVar16 = param_2 + 1;
  uVar21 = (param_1 & 0x7fffffffffffffff) >> 0x34;
  uVar14 = (-(ulonglong)(uVar21 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
  iVar28 = (-0x432 - (uint)(uVar21 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
  dVar30 = FUN_180015140();
  dVar30 = ceil(dVar30);
  uVar25 = -(uint)(((int)dVar30 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar30;
  uVar19 = (uint)(uVar14 >> 0x20);
  local_794 = uVar14;
  uVar5 = (uint)(uVar19 != 0);
  uVar13 = uVar5 + 1;
  if (iVar28 < 0) {
    if (iVar28 == -0x3fe) {
LAB_180011c16:
      puVar26 = (uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
      iVar22 = 0x1f;
      bVar29 = *puVar26 != 0;
      if (bVar29) {
        for (; *puVar26 >> iVar22 == 0; iVar22 = iVar22 + -1) {
        }
      }
      uVar19 = uVar13;
      if (bVar29) {
        uVar4 = iVar22 + 1;
      }
      do {
        uVar17 = uVar19 - 1;
        if (uVar19 < uVar13) {
          iVar22 = *(int *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
        }
        else {
          iVar22 = 0;
        }
        if (uVar17 < uVar13) {
          uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
        }
        else {
          uVar24 = 0;
        }
        *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) = uVar24 >> 0x1f | iVar22 * 2;
        uVar19 = uVar17;
      } while (uVar17 != 0xffffffff);
      if (uVar4 == 0x20) {
        uVar13 = uVar5 + 2;
      }
      uVar4 = 1U - iVar28 >> 5;
      local_798 = uVar13;
      FUN_180003460((undefined1 (*) [16])local_3f4,0,(ulonglong)uVar4 * 4);
      local_3f4[uVar4] = 1 << ((byte)(1U - iVar28) & 0x1f);
    }
    else {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      local_3f8 = 2;
      if (uVar19 == 0) goto LAB_180011c16;
      do {
        if (local_3f4[uVar27] != *(uint *)((longlong)&local_794 + uVar27 * 4)) goto LAB_180011c16;
        uVar17 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar17;
      } while (uVar17 != 2);
      iVar22 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar22 == 0; iVar22 = iVar22 + -1) {
        }
      }
      if (uVar19 != 0) {
        uVar4 = iVar22 + 1;
      }
      uVar19 = uVar13;
      do {
        uVar17 = uVar19 - 1;
        if (uVar19 < uVar13) {
          iVar22 = *(int *)((longlong)&local_794 + (ulonglong)uVar19 * 4);
        }
        else {
          iVar22 = 0;
        }
        if (uVar17 < uVar13) {
          uVar24 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
        }
        else {
          uVar24 = 0;
        }
        *(uint *)((longlong)&local_794 + (ulonglong)uVar19 * 4) = uVar24 >> 0x1e | iVar22 << 2;
        uVar19 = uVar17;
      } while (uVar17 != 0xffffffff);
      if (0x20 - uVar4 < 2) {
        uVar13 = uVar5 + 2;
      }
      uVar4 = 2U - iVar28 >> 5;
      local_798 = uVar13;
      FUN_180003460((undefined1 (*) [16])local_3f4,0,(ulonglong)uVar4 * 4);
      local_3f4[uVar4] = 1 << ((byte)(2U - iVar28) & 0x1f);
    }
    local_3f8 = uVar4 + 1;
    uVar14 = (ulonglong)local_3f8;
    uVar27 = (ulonglong)uVar13;
    uStack_5c8 = local_3f8;
    if (uVar14 != 0) {
      if (uVar14 << 2 < 0x1cd) {
        FUN_1800058f0((undefined8 *)auStack_5c4,(undefined8 *)local_3f4,uVar14 << 2);
      }
      else {
        FUN_180003460((undefined1 (*) [16])auStack_5c4,0,0x1cc);
        puVar6 = __doserrno();
        *puVar6 = 0x22;
        FUN_1800093f4();
      }
      uVar14 = (ulonglong)uStack_5c8;
    }
  }
  else {
    local_3f4[1] = 0x100000;
    local_3f4[0] = 0;
    local_3f8 = 2;
    if (uVar19 == 0) {
LAB_1800119c1:
      uVar24 = iVar28 + 1U & 0x1f;
      uVar19 = iVar28 + 1U >> 5;
      bVar8 = 0x20 - (sbyte)uVar24;
      uVar17 = (int)(1L << (bVar8 & 0x3f)) - 1;
      puVar26 = (uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
      iVar28 = 0x1f;
      bVar29 = *puVar26 != 0;
      if (bVar29) {
        for (; *puVar26 >> iVar28 == 0; iVar28 = iVar28 + -1) {
        }
      }
      if (bVar29) {
        uVar4 = iVar28 + 1;
      }
      uVar5 = uVar13 + uVar19;
      if ((uVar5 != 0x73) || (bVar29 = true, uVar24 <= 0x20 - uVar4)) {
        bVar29 = false;
      }
      if ((0x73 < uVar5) || (bVar29)) {
        uVar27 = 0;
      }
      else {
        uVar23 = 0x72;
        uVar10 = 0x72;
        if (uVar5 < 0x72) {
          uVar23 = uVar5;
          uVar10 = uVar5;
        }
        for (; (uVar23 != 0xffffffff && (uVar19 <= uVar23)); uVar23 = uVar23 - 1) {
          uVar5 = uVar23 - uVar19;
          if (uVar5 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
          }
          else {
            uVar20 = 0;
          }
          if (uVar5 - 1 < uVar13) {
            uVar5 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar5 - 1) * 4);
          }
          else {
            uVar5 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
               (uVar5 & ~uVar17) >> (bVar8 & 0x1f) | (uVar20 & uVar17) << (sbyte)uVar24;
        }
        uVar27 = 0;
        if (uVar19 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar27 * 4) = 0;
            uVar5 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar5;
          } while (uVar5 != uVar19);
        }
        if (0x20 - uVar4 < uVar24) {
          uVar10 = uVar10 + 1;
        }
        uVar27 = (ulonglong)uVar10;
      }
      local_3f4[1] = 0;
      uVar14 = 1;
      uStack_5c8 = 1;
      local_798 = (uint)uVar27;
      local_3f8 = 1;
      auStack_5c4[0] = 2;
    }
    else {
      do {
        if (local_3f4[uVar27] != *(uint *)((longlong)&local_794 + uVar27 * 4)) goto LAB_1800119c1;
        uVar19 = (int)uVar27 + 1;
        uVar27 = (ulonglong)uVar19;
      } while (uVar19 != 2);
      uVar24 = iVar28 + 2U & 0x1f;
      uVar19 = iVar28 + 2U >> 5;
      bVar8 = 0x20 - (sbyte)uVar24;
      uVar17 = (int)(1L << (bVar8 & 0x3f)) - 1;
      puVar26 = (uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
      iVar28 = 0x1f;
      bVar29 = *puVar26 != 0;
      if (bVar29) {
        for (; *puVar26 >> iVar28 == 0; iVar28 = iVar28 + -1) {
        }
      }
      if (bVar29) {
        uVar4 = iVar28 + 1;
      }
      uVar5 = uVar13 + uVar19;
      if ((uVar5 != 0x73) || (bVar29 = true, uVar24 <= 0x20 - uVar4)) {
        bVar29 = false;
      }
      if ((0x73 < uVar5) || (bVar29)) {
        uVar27 = 0;
      }
      else {
        uVar23 = 0x72;
        uVar10 = 0x72;
        if (uVar5 < 0x72) {
          uVar23 = uVar5;
          uVar10 = uVar5;
        }
        for (; (uVar23 != 0xffffffff && (uVar19 <= uVar23)); uVar23 = uVar23 - 1) {
          uVar5 = uVar23 - uVar19;
          if (uVar5 < uVar13) {
            uVar20 = *(uint *)((longlong)&local_794 + (ulonglong)uVar5 * 4);
          }
          else {
            uVar20 = 0;
          }
          if (uVar5 - 1 < uVar13) {
            uVar5 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar5 - 1) * 4);
          }
          else {
            uVar5 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar23 * 4) =
               (uVar5 & ~uVar17) >> (bVar8 & 0x1f) | (uVar20 & uVar17) << (sbyte)uVar24;
        }
        uVar27 = 0;
        if (uVar19 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar27 * 4) = 0;
            uVar5 = (int)uVar27 + 1;
            uVar27 = (ulonglong)uVar5;
          } while (uVar5 != uVar19);
        }
        if (0x20 - uVar4 < uVar24) {
          uVar10 = uVar10 + 1;
        }
        uVar27 = (ulonglong)uVar10;
      }
      local_3f4[1] = 0;
      uVar14 = 1;
      uStack_5c8 = 1;
      local_798 = (uint)uVar27;
      local_3f8 = 1;
      auStack_5c4[0] = 4;
    }
  }
  uVar5 = (uint)uVar14;
  uVar4 = (uint)uVar27;
  if ((int)uVar25 < 0) {
    uVar14 = (ulonglong)-uVar25 / 10;
    uVar19 = (uint)uVar14;
    uVar13 = uVar19;
    while (uVar13 != 0) {
      uVar24 = (uint)uVar14;
      uVar17 = uVar24;
      if (0x26 < uVar24) {
        uVar17 = 0x26;
      }
      uVar4 = uVar17 - 1;
      bVar8 = (&DAT_18001b452)[(ulonglong)uVar4 * 4];
      bVar1 = (&DAT_18001b453)[(ulonglong)uVar4 * 4];
      local_3f8 = (uint)bVar1 + (uint)bVar8;
      FUN_180003460((undefined1 (*) [16])local_3f4,0,(ulonglong)bVar8 * 4);
      FUN_1800058f0((undefined8 *)(local_3f4 + bVar8),
                    (undefined8 *)
                    (&DAT_18001ab40 +
                    (ulonglong)*(ushort *)(&DAT_18001b450 + (ulonglong)uVar4 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      uVar14 = (ulonglong)local_3f8;
      uVar4 = (uint)uVar27;
      if (local_3f8 < 2) {
        uVar14 = (ulonglong)local_3f4[0];
        if (local_3f4[0] == 0) {
LAB_18001224b:
          uVar27 = 0;
LAB_18001224e:
          local_798 = (uint)uVar27;
          goto LAB_180012520;
        }
        if ((local_3f4[0] == 1) || (uVar4 == 0)) goto LAB_180012520;
        uVar27 = 0;
        uVar21 = 0;
        do {
          uVar12 = *(uint *)((longlong)&local_794 + uVar21 * 4) * uVar14 + uVar27;
          *(int *)((longlong)&local_794 + uVar21 * 4) = (int)uVar12;
          uVar27 = uVar12 >> 0x20;
          iVar28 = (int)(uVar12 >> 0x20);
          uVar13 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar13;
        } while (uVar13 != uVar4);
LAB_180012295:
        if (iVar28 == 0) {
          uVar27 = (ulonglong)local_798;
          goto LAB_180012520;
        }
        if (local_798 < 0x73) {
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar28;
          uVar27 = (ulonglong)(local_798 + 1);
          goto LAB_18001224e;
        }
        uVar27 = 0;
        local_798 = 0;
        bVar29 = false;
      }
      else {
        if (uVar4 < 2) {
          uVar4 = (uint)local_794;
          uVar21 = local_794 & 0xffffffff;
          local_798 = local_3f8;
          uVar27 = uVar14;
          if (uVar14 != 0) {
            if (uVar14 << 2 < 0x1cd) {
              FUN_1800058f0(&local_794,(undefined8 *)local_3f4,uVar14 << 2);
            }
            else {
              FUN_180003460((undefined1 (*) [16])&local_794,0,0x1cc);
              puVar6 = __doserrno();
              *puVar6 = 0x22;
              FUN_1800093f4();
            }
            uVar27 = (ulonglong)local_798;
          }
          if (uVar4 == 0) goto LAB_18001224b;
          if ((uVar4 != 1) && ((uint)uVar27 != 0)) {
            uVar14 = 0;
            uVar12 = 0;
            do {
              uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar21 + uVar14;
              *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
              uVar14 = uVar11 >> 0x20;
              iVar28 = (int)(uVar11 >> 0x20);
              uVar4 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar4;
            } while (uVar4 != (uint)uVar27);
            goto LAB_180012295;
          }
        }
        else {
          bVar29 = local_3f8 < uVar4;
          puStack_7a8 = local_3f4;
          if (!bVar29) {
            puStack_7a8 = (uint *)&local_794;
          }
          puVar26 = local_3f4;
          uVar24 = uVar4;
          if (bVar29) {
            uVar24 = local_3f8;
          }
          uVar10 = local_3f8;
          if (bVar29) {
            uVar10 = uVar4;
            puVar26 = (uint *)&local_794;
          }
          uVar27 = 0;
          uVar14 = 0;
          uStack_228 = 0;
          if (uVar24 != 0) {
            do {
              uVar4 = puStack_7a8[uVar14];
              uVar23 = (uint)uVar14;
              if (uVar4 == 0) {
                if (uVar23 == (uint)uVar27) {
                  auStack_224[uVar14] = 0;
                  uVar27 = (ulonglong)(uVar23 + 1);
                  uStack_228 = uVar23 + 1;
                }
              }
              else {
                uVar21 = 0;
                uVar20 = uVar23;
                if (uVar10 != 0) {
                  do {
                    iVar28 = (int)uVar14;
                    uVar12 = uVar14;
                    if (iVar28 == 0x73) break;
                    if (iVar28 == (int)uVar27) {
                      auStack_224[uVar14] = 0;
                      uStack_228 = iVar28 + 1;
                    }
                    uVar12 = (ulonglong)(iVar28 + 1U);
                    uVar21 = uVar21 + (ulonglong)puVar26[-uVar23 + iVar28] * (ulonglong)uVar4 +
                                      (ulonglong)auStack_224[uVar14];
                    auStack_224[uVar14] = (uint)uVar21;
                    uVar27 = (ulonglong)uStack_228;
                    uVar21 = uVar21 >> 0x20;
                    uVar14 = uVar12;
                  } while (-uVar23 + iVar28 + 1U != uVar10);
                  uVar20 = (uint)uVar12;
                  uVar4 = (uint)uVar21;
                  while (uVar4 != 0) {
                    iVar28 = (int)uVar12;
                    if (iVar28 == 0x73) goto LAB_1800125c0;
                    if (iVar28 == (int)uVar27) {
                      auStack_224[uVar12] = 0;
                      uStack_228 = iVar28 + 1;
                    }
                    uVar4 = auStack_224[uVar12];
                    uVar20 = iVar28 + 1;
                    auStack_224[uVar12] = (uint)(uVar4 + uVar21);
                    uVar27 = (ulonglong)uStack_228;
                    uVar4 = (uint)(uVar4 + uVar21 >> 0x20);
                    uVar21 = (ulonglong)uVar4;
                    uVar12 = (ulonglong)uVar20;
                  }
                }
                if (uVar20 == 0x73) goto LAB_1800125c0;
              }
              uVar14 = (ulonglong)(uVar23 + 1);
            } while (uVar23 + 1 != uVar24);
          }
          local_798 = (uint)uVar27;
          uVar24 = uVar13;
          if (uVar27 != 0) {
            if (uVar27 << 2 < 0x1cd) {
              FUN_1800058f0(&local_794,(undefined8 *)auStack_224,uVar27 << 2);
            }
            else {
              FUN_180003460((undefined1 (*) [16])&local_794,0,0x1cc);
              puVar6 = __doserrno();
              *puVar6 = 0x22;
              FUN_1800093f4();
            }
            uVar27 = (ulonglong)local_798;
          }
        }
LAB_180012520:
        bVar29 = true;
      }
      uVar4 = (uint)uVar27;
      if (!bVar29) goto LAB_1800125c0;
      uVar13 = uVar24 - uVar17;
      uVar14 = (ulonglong)uVar13;
    }
    iVar28 = -uVar25 + uVar19 * -10;
    if (iVar28 == 0) goto LAB_1800125d9;
    uVar13 = *(uint *)(&DAT_18001b4e8 + (ulonglong)(iVar28 - 1) * 4);
    if (uVar13 != 0) {
      if ((uVar13 != 1) && (uVar4 != 0)) {
        uVar27 = 0;
        uVar14 = 0;
        do {
          uVar21 = (ulonglong)*(uint *)((longlong)&local_794 + uVar14 * 4) * (ulonglong)uVar13 +
                   uVar27;
          *(int *)((longlong)&local_794 + uVar14 * 4) = (int)uVar21;
          uVar27 = uVar21 >> 0x20;
          uVar19 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar19;
        } while (uVar19 != uVar4);
        iVar28 = (int)(uVar21 >> 0x20);
        uVar4 = local_798;
        if (iVar28 != 0) {
          if (0x72 < local_798) goto LAB_1800125c0;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar28;
          local_798 = local_798 + 1;
          uVar4 = local_798;
        }
      }
      goto LAB_1800125d9;
    }
LAB_1800125c0:
    local_798 = 0;
  }
  else {
    uVar27 = (ulonglong)uVar25 / 10;
    uVar19 = (uint)uVar27;
    uVar13 = uVar19;
    while (uVar13 != 0) {
      uVar17 = (uint)uVar27;
      uVar24 = uVar17;
      if (0x26 < uVar17) {
        uVar24 = 0x26;
      }
      uVar5 = uVar24 - 1;
      bVar8 = (&DAT_18001b452)[(ulonglong)uVar5 * 4];
      bVar1 = (&DAT_18001b453)[(ulonglong)uVar5 * 4];
      local_3f8 = (uint)bVar1 + (uint)bVar8;
      FUN_180003460((undefined1 (*) [16])local_3f4,0,(ulonglong)bVar8 * 4);
      FUN_1800058f0((undefined8 *)(local_3f4 + bVar8),
                    (undefined8 *)
                    (&DAT_18001ab40 +
                    (ulonglong)*(ushort *)(&DAT_18001b450 + (ulonglong)uVar5 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      uVar5 = auStack_5c4[0];
      uVar27 = (ulonglong)local_3f8;
      uVar10 = (uint)uVar14;
      if (local_3f8 < 2) {
        uVar27 = (ulonglong)local_3f4[0];
        if (local_3f4[0] == 0) {
LAB_180011dab:
          uVar14 = 0;
LAB_180011dae:
          uStack_5c8 = (uint)uVar14;
          goto LAB_1800120b8;
        }
        if ((local_3f4[0] == 1) || (uVar10 == 0)) goto LAB_1800120b8;
        uVar14 = 0;
        uVar21 = 0;
        do {
          uVar12 = auStack_5c4[uVar21] * uVar27 + uVar14;
          auStack_5c4[uVar21] = (uint)uVar12;
          uVar14 = uVar12 >> 0x20;
          uVar5 = (uint)(uVar12 >> 0x20);
          uVar13 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar13;
        } while (uVar13 != uVar10);
LAB_180011dfe:
        if (uVar5 == 0) {
          uVar14 = (ulonglong)uStack_5c8;
          goto LAB_1800120b8;
        }
        if (uStack_5c8 < 0x73) {
          auStack_5c4[uStack_5c8] = uVar5;
          uVar14 = (ulonglong)(uStack_5c8 + 1);
          goto LAB_180011dae;
        }
        uVar14 = 0;
        uStack_5c8 = 0;
        bVar29 = false;
      }
      else {
        if (uVar10 < 2) {
          uVar21 = (ulonglong)auStack_5c4[0];
          uStack_5c8 = local_3f8;
          uVar14 = uVar27;
          if (uVar27 != 0) {
            if (uVar27 << 2 < 0x1cd) {
              FUN_1800058f0((undefined8 *)auStack_5c4,(undefined8 *)local_3f4,uVar27 << 2);
            }
            else {
              FUN_180003460((undefined1 (*) [16])auStack_5c4,0,0x1cc);
              puVar6 = __doserrno();
              *puVar6 = 0x22;
              FUN_1800093f4();
            }
            uVar14 = (ulonglong)uStack_5c8;
          }
          if (uVar5 == 0) goto LAB_180011dab;
          if ((uVar5 != 1) && ((uint)uVar14 != 0)) {
            uVar27 = 0;
            uVar12 = 0;
            do {
              uVar11 = auStack_5c4[uVar12] * uVar21 + uVar27;
              auStack_5c4[uVar12] = (uint)uVar11;
              uVar27 = uVar11 >> 0x20;
              uVar5 = (uint)(uVar11 >> 0x20);
              uVar13 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar13;
            } while (uVar13 != (uint)uVar14);
            goto LAB_180011dfe;
          }
        }
        else {
          bVar29 = local_3f8 < uVar10;
          puVar26 = local_3f4;
          if (!bVar29) {
            puVar26 = auStack_5c4;
          }
          uVar5 = uVar10;
          if (bVar29) {
            uVar5 = local_3f8;
          }
          puVar2 = local_3f4;
          uVar17 = local_3f8;
          if (bVar29) {
            uVar17 = uVar10;
            puVar2 = auStack_5c4;
          }
          uVar14 = 0;
          uVar27 = 0;
          uStack_228 = 0;
          if (uVar5 != 0) {
            do {
              uVar10 = puVar26[uVar27];
              uVar23 = (uint)uVar27;
              if (uVar10 == 0) {
                if (uVar23 == (uint)uVar14) {
                  auStack_224[uVar27] = 0;
                  uVar14 = (ulonglong)(uVar23 + 1);
                  uStack_228 = uVar23 + 1;
                }
              }
              else {
                uVar21 = 0;
                uVar20 = uVar23;
                if (uVar17 != 0) {
                  do {
                    iVar28 = (int)uVar27;
                    uVar12 = uVar27;
                    if (iVar28 == 0x73) break;
                    if (iVar28 == (int)uVar14) {
                      auStack_224[uVar27] = 0;
                      uStack_228 = iVar28 + 1;
                    }
                    uVar12 = (ulonglong)(iVar28 + 1U);
                    uVar21 = uVar21 + (ulonglong)puVar2[iVar28 + -uVar23] * (ulonglong)uVar10 +
                             (ulonglong)auStack_224[uVar27];
                    auStack_224[uVar27] = (uint)uVar21;
                    uVar14 = (ulonglong)uStack_228;
                    uVar21 = uVar21 >> 0x20;
                    uVar27 = uVar12;
                  } while (iVar28 + 1U + -uVar23 != uVar17);
                  uVar20 = (uint)uVar12;
                  uVar10 = (uint)uVar21;
                  while (uVar10 != 0) {
                    iVar28 = (int)uVar12;
                    if (iVar28 == 0x73) goto LAB_180012168;
                    if (iVar28 == (int)uVar14) {
                      auStack_224[uVar12] = 0;
                      uStack_228 = iVar28 + 1;
                    }
                    uVar10 = auStack_224[uVar12];
                    uVar20 = iVar28 + 1;
                    auStack_224[uVar12] = (uint)(uVar21 + uVar10);
                    uVar14 = (ulonglong)uStack_228;
                    uVar10 = (uint)(uVar21 + uVar10 >> 0x20);
                    uVar21 = (ulonglong)uVar10;
                    uVar12 = (ulonglong)uVar20;
                  }
                }
                if (uVar20 == 0x73) goto LAB_180012168;
              }
              uVar27 = (ulonglong)(uVar23 + 1);
            } while (uVar23 + 1 != uVar5);
          }
          uStack_5c8 = (uint)uVar14;
          uVar17 = uVar13;
          if (uVar14 != 0) {
            if (uVar14 << 2 < 0x1cd) {
              FUN_1800058f0((undefined8 *)auStack_5c4,(undefined8 *)auStack_224,uVar14 << 2);
            }
            else {
              FUN_180003460((undefined1 (*) [16])auStack_5c4,0,0x1cc);
              puVar6 = __doserrno();
              *puVar6 = 0x22;
              FUN_1800093f4();
            }
            uVar14 = (ulonglong)uStack_5c8;
          }
        }
LAB_1800120b8:
        bVar29 = true;
      }
      uVar5 = (uint)uVar14;
      if (!bVar29) {
LAB_180012168:
        uStack_5c8 = 0;
        uVar5 = 0;
        goto LAB_1800125d9;
      }
      uVar13 = uVar17 - uVar24;
      uVar27 = (ulonglong)uVar13;
    }
    iVar28 = uVar25 + uVar19 * -10;
    if (iVar28 != 0) {
      uVar13 = *(uint *)(&DAT_18001b4e8 + (ulonglong)(iVar28 - 1) * 4);
      if (uVar13 == 0) {
LAB_180012177:
        uStack_5c8 = 0;
LAB_18001217a:
        uVar5 = uStack_5c8;
      }
      else if ((uVar13 != 1) && (uVar5 != 0)) {
        uVar27 = 0;
        uVar14 = 0;
        do {
          uVar21 = (ulonglong)auStack_5c4[uVar14] * (ulonglong)uVar13 + uVar27;
          auStack_5c4[uVar14] = (uint)uVar21;
          uVar27 = uVar21 >> 0x20;
          uVar19 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar19;
        } while (uVar19 != uVar5);
        uVar13 = (uint)(uVar21 >> 0x20);
        uVar5 = uStack_5c8;
        if (uVar13 != 0) {
          if (0x72 < uStack_5c8) goto LAB_180012177;
          auStack_5c4[uStack_5c8] = uVar13;
          uStack_5c8 = uStack_5c8 + 1;
          goto LAB_18001217a;
        }
      }
    }
LAB_1800125d9:
    uVar14 = 0;
    uVar27 = uVar14;
    if (uVar4 != 0) {
      do {
        uVar13 = (int)uVar27 + 1;
        uVar21 = uVar14 + (ulonglong)*(uint *)((longlong)&local_794 + uVar27 * 4) * 10;
        *(int *)((longlong)&local_794 + uVar27 * 4) = (int)uVar21;
        uVar14 = uVar21 >> 0x20;
        uVar27 = (ulonglong)uVar13;
      } while (uVar13 != uVar4);
      iVar28 = (int)(uVar21 >> 0x20);
      if (iVar28 != 0) {
        if (local_798 < 0x73) {
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar28;
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
  uVar14 = 0;
  uVar27 = FUN_1800111e0(&local_798,&uStack_5c8);
  if ((int)uVar27 == 10) {
    uVar25 = uVar25 + 1;
    *param_4 = '1';
    pcVar15 = param_4 + 1;
    uVar27 = uVar14;
    uVar21 = uVar14;
    if (uVar5 != 0) {
      do {
        uVar4 = (int)uVar21 + 1;
        uVar12 = uVar27 + (ulonglong)auStack_5c4[uVar21] * 10;
        auStack_5c4[uVar21] = (uint)uVar12;
        uVar27 = uVar12 >> 0x20;
        uVar21 = (ulonglong)uVar4;
      } while (uVar4 != uVar5);
      uVar4 = (uint)(uVar12 >> 0x20);
      if (uVar4 != 0) {
        if (uStack_5c8 < 0x73) {
          auStack_5c4[uStack_5c8] = uVar4;
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
  else if ((int)uVar27 == 0) {
    uVar25 = uVar25 - 1;
    pcVar15 = param_4;
  }
  else {
    pcVar15 = param_4 + 1;
    *param_4 = (char)uVar27 + '0';
  }
  local_7a0[1] = uVar25;
  if ((-1 < (int)uVar25) && (uVar16 < 0x80000000)) {
    uVar16 = uVar16 + uVar25;
  }
  uVar27 = (ulonglong)uVar16;
  if (param_5 - 1U < (ulonglong)uVar16) {
    uVar27 = param_5 - 1U;
  }
  pcVar18 = param_4 + uVar27;
  while ((pcVar15 != pcVar18 && (uVar27 = uVar14, uVar21 = uVar14, local_798 != 0))) {
    do {
      uVar4 = (int)uVar21 + 1;
      uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar21 * 4) * 1000000000 + uVar27;
      *(int *)((longlong)&local_794 + uVar21 * 4) = (int)uVar12;
      uVar27 = uVar12 >> 0x20;
      uVar21 = (ulonglong)uVar4;
    } while (uVar4 != local_798);
    iVar28 = (int)(uVar12 >> 0x20);
    if (iVar28 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar28;
        local_798 = local_798 + 1;
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
    }
    uVar27 = FUN_1800111e0(&local_798,&uStack_5c8);
    uVar4 = 8;
    do {
      uVar21 = (uVar27 & 0xffffffff) / 10;
      if (uVar4 <= (uint)((int)pcVar18 - (int)pcVar15)) {
        pcVar15[uVar4] = (char)uVar27 + (char)uVar21 * -10 + '0';
      }
      uVar4 = uVar4 - 1;
      uVar27 = uVar21;
    } while (uVar4 != 0xffffffff);
    lVar7 = (longlong)pcVar18 - (longlong)pcVar15;
    if (9 < lVar7) {
      lVar7 = 9;
    }
    pcVar15 = pcVar15 + lVar7;
  }
  *pcVar15 = '\0';
LAB_1800128aa:
  if (local_7b0 != '\0') {
    fesetenv((uint *)local_7b8);
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_818);
  return;
}




/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (_MaxCount == 0) {
LAB_180012965:
    uVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_18001296e:
      puVar1 = __doserrno();
      uVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_1800058f0((undefined8 *)_Dst,(undefined8 *)_Src,_MaxCount);
        goto LAB_180012965;
      }
      FUN_180003460((undefined1 (*) [16])_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_18001296e;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      puVar1 = __doserrno();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    FUN_1800093f4();
  }
  return uVar2;
}




/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_180023888) {
      _free_base(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_180023890) {
      _free_base(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_180023898) {
      _free_base(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1800238a0) {
      _free_base(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1800238a8) {
      _free_base(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1800238b0) {
      _free_base(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1800238b8) {
      _free_base(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_1800238d8) {
      _free_base(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_1800238e0) {
      _free_base(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_1800238e8) {
      _free_base(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_1800238f0) {
      _free_base(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_1800238f8) {
      _free_base(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_180023900) {
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
    if ((undefined *)*param_1 != PTR_DAT_180023870) {
      _free_base((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_180023878) {
      _free_base((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_180023880) {
      _free_base((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1800238c8) {
      _free_base((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_1800238d0) {
      _free_base((undefined *)param_1[0xc]);
    }
  }
  return;
}




void FUN_180012b48(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 & 0x1fffffffffffffff;
  if (param_1 + param_2 < param_1) {
    uVar1 = uVar2;
  }
  if (uVar1 != 0) {
    do {
      _free_base((LPVOID)*param_1);
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_180012b48(param_1,7);
    FUN_180012b48(param_1 + 7,7);
    FUN_180012b48(param_1 + 0xe,0xc);
    FUN_180012b48(param_1 + 0x1a,0xc);
    FUN_180012b48(param_1 + 0x26,2);
    _free_base((LPVOID)param_1[0x28]);
    _free_base((LPVOID)param_1[0x29]);
    _free_base((LPVOID)param_1[0x2a]);
    FUN_180012b48(param_1 + 0x2c,7);
    FUN_180012b48(param_1 + 0x33,7);
    FUN_180012b48(param_1 + 0x3a,0xc);
    FUN_180012b48(param_1 + 0x46,0xc);
    FUN_180012b48(param_1 + 0x52,2);
    _free_base((LPVOID)param_1[0x54]);
    _free_base((LPVOID)param_1[0x55]);
    _free_base((LPVOID)param_1[0x56]);
    _free_base((LPVOID)param_1[0x57]);
  }
  return;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __acrt_GetStringTypeA
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_GetStringTypeA
               (__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,undefined8 param_4,
               LPWORD param_5,uint param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 (*lpSrcStr) [16];
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  char local_40;
  ulonglong local_38;
  
  puVar6 = auStack_88;
  puVar7 = auStack_88;
  local_38 = DAT_180023018 ^ (ulonglong)&local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_58,param_1);
  if (param_6 == 0) {
    param_6 = *(uint *)(local_50 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = __acrt_MultiByteToWideChar(param_6,(ulonglong)((-(uint)(param_7 != 0) & 8) + 1));
  if (iVar2 == 0) goto LAB_180012df8;
  uVar5 = (longlong)iVar2 * 2;
  uVar4 = -(ulonglong)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10;
  if (uVar4 == 0) {
    lpSrcStr = (undefined1 (*) [16])0x0;
    puVar7 = auStack_88;
LAB_180012d94:
    if (lpSrcStr != (undefined1 (*) [16])0x0) {
      *(undefined8 *)(puVar7 + -8) = 0x180012da6;
      FUN_180003460(lpSrcStr,0,uVar5);
      *(int *)(puVar7 + 0x28) = iVar2;
      *(undefined1 (**) [16])(puVar7 + 0x20) = lpSrcStr;
      *(undefined8 *)(puVar7 + -8) = 0x180012dc2;
      iVar2 = __acrt_MultiByteToWideChar(param_6,1);
      if (iVar2 != 0) {
        *(undefined8 *)(puVar7 + -8) = 0x180012ddc;
        GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar2,param_5);
      }
    }
  }
  else {
    if (0x400 < uVar4) {
      lpSrcStr = (undefined1 (*) [16])_malloc_base(uVar4);
      puVar7 = auStack_88;
      if (lpSrcStr != (undefined1 (*) [16])0x0) {
        *(undefined4 *)*lpSrcStr = 0xdddd;
        goto LAB_180012d8c;
      }
      goto LAB_180012d94;
    }
    uVar3 = uVar4 + 0xf;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffff0;
    }
    lVar1 = -(uVar3 & 0xfffffffffffffff0);
    puVar7 = auStack_88 + lVar1;
    puVar6 = auStack_88 + lVar1;
    lpSrcStr = (undefined1 (*) [16])((longlong)&local_58 + lVar1);
    if (lpSrcStr != (undefined1 (*) [16])0x0) {
      *(undefined4 *)*lpSrcStr = 0xcccc;
LAB_180012d8c:
      lpSrcStr = lpSrcStr + 1;
      puVar7 = puVar6;
      goto LAB_180012d94;
    }
  }
  if ((lpSrcStr != (undefined1 (*) [16])0x0) && (*(int *)lpSrcStr[-1] == 0xdddd)) {
    *(undefined8 *)(puVar7 + -8) = 0x180012df8;
    _free_base(lpSrcStr + -1);
  }
LAB_180012df8:
  if (local_40 != '\0') {
    *(uint *)(local_58 + 0x3a8) = *(uint *)(local_58 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_38 ^ (ulonglong)&local_58;
  *(undefined8 *)(puVar7 + -8) = 0x180012e17;
  __security_check_cookie(uVar5);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180012e40(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 auStack_438 [62];
  undefined8 auStack_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_180023018 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    puVar3 = __doserrno();
    *puVar3 = 0x16;
    FUN_1800093f4();
  }
  else if (1 < param_2) {
    local_448 = 0;
    puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_180012ee0:
    while (uVar8 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar8) {
      lVar5 = (uVar8 >> 1) * param_3;
      puVar6 = param_1 + lVar5;
      iVar2 = (*(code *)param_4)(param_1,puVar6);
      if ((0 < iVar2) && (puVar9 = puVar6, uVar8 = param_3, param_1 != puVar6)) {
        do {
          uVar1 = puVar9[-lVar5];
          puVar9[-lVar5] = *puVar9;
          *puVar9 = uVar1;
          puVar9 = puVar9 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar2 = (*(code *)param_4)(param_1,puVar10);
      if ((0 < iVar2) && (param_1 != puVar10)) {
        puVar9 = puVar10;
        uVar8 = param_3;
        do {
          uVar1 = puVar9[(longlong)param_1 - (longlong)puVar10];
          puVar9[(longlong)param_1 - (longlong)puVar10] = *puVar9;
          *puVar9 = uVar1;
          puVar9 = puVar9 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      iVar2 = (*(code *)param_4)(puVar6);
      puVar9 = param_1;
      puVar7 = puVar10;
      if ((0 < iVar2) && (puVar6 != puVar10)) {
        puVar4 = puVar10;
        uVar8 = param_3;
        do {
          uVar1 = puVar4[(longlong)puVar6 - (longlong)puVar10];
          puVar4[(longlong)puVar6 - (longlong)puVar10] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
LAB_180013050:
      puVar4 = puVar6;
      if (puVar9 < puVar4) {
        do {
          puVar9 = puVar9 + param_3;
          if (puVar4 <= puVar9) goto LAB_180013075;
          iVar2 = (*(code *)param_4)(puVar9);
        } while (iVar2 < 1);
        if (puVar4 <= puVar9) goto LAB_180013075;
      }
      else {
LAB_180013075:
        do {
          puVar9 = puVar9 + param_3;
          if (puVar10 < puVar9) break;
          iVar2 = (*(code *)param_4)(puVar9);
        } while (iVar2 < 1);
      }
      do {
        puVar6 = puVar7;
        puVar7 = puVar6 + -param_3;
        if (puVar7 <= puVar4) break;
        iVar2 = (*(code *)param_4)(puVar7);
      } while (0 < iVar2);
      if (puVar9 <= puVar7) {
        if (puVar9 != puVar7) {
          puVar6 = puVar7;
          uVar8 = param_3;
          do {
            uVar1 = puVar6[(longlong)puVar9 - (longlong)puVar7];
            puVar6[(longlong)puVar9 - (longlong)puVar7] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar6 = puVar9;
        if (puVar4 != puVar7) {
          puVar6 = puVar4;
        }
        goto LAB_180013050;
      }
      if (puVar4 < puVar6) {
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= puVar4) goto LAB_180013120;
          iVar2 = (*(code *)param_4)(puVar6);
        } while (iVar2 == 0);
        if (puVar6 <= puVar4) goto LAB_180013120;
      }
      else {
LAB_180013120:
        do {
          puVar6 = puVar6 + -param_3;
          if (puVar6 <= param_1) break;
          iVar2 = (*(code *)param_4)(puVar6);
        } while (iVar2 == 0);
      }
      if ((longlong)puVar6 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar9)
      goto LAB_18001317c;
      if (param_1 < puVar6) {
        auStack_438[local_448] = param_1;
        auStack_248[local_448] = puVar6;
        local_448 = local_448 + 1;
      }
      param_1 = puVar9;
      if (puVar10 <= puVar9) goto LAB_180012f63;
    }
    for (; puVar9 = param_1, puVar6 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
      while (puVar6 = puVar6 + param_3, puVar6 <= puVar10) {
        iVar2 = (*(code *)param_4)(puVar6,puVar9);
        if (0 < iVar2) {
          puVar9 = puVar6;
        }
      }
      if (puVar9 != puVar10) {
        puVar6 = puVar10;
        uVar8 = param_3;
        do {
          uVar1 = puVar6[(longlong)puVar9 - (longlong)puVar10];
          puVar6[(longlong)puVar9 - (longlong)puVar10] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    goto LAB_180012f63;
  }
LAB_1800131cf:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_468);
  return;
LAB_18001317c:
  if (puVar9 < puVar10) {
    auStack_438[local_448] = puVar9;
    auStack_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar6;
  if (puVar6 <= param_1) {
LAB_180012f63:
    local_448 = local_448 + -1;
    if (-1 < local_448) {
      param_1 = (undefined1 *)auStack_438[local_448];
      puVar10 = (undefined1 *)auStack_248[local_448];
      goto LAB_180012ee0;
    }
    goto LAB_1800131cf;
  }
  goto LAB_180012ee0;
}




ulong FUN_1800131f0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  ulong *puVar2;
  longlong lVar3;
  ulong uVar4;
  longlong lVar5;
  char *pcVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_180013239:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != 0) {
          lVar3 = param_2;
          lVar5 = param_4;
          pcVar6 = param_1;
          if (param_4 == -1) {
            do {
              lVar5 = lVar3;
              cVar1 = pcVar6[param_3 - (longlong)param_1];
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
              if (cVar1 == '\0') break;
              lVar3 = lVar5 + -1;
            } while (lVar5 + -1 != 0);
            lVar3 = lVar5 + -1;
            if (cVar1 == '\0') {
              lVar3 = lVar5;
            }
          }
          else {
            do {
              cVar1 = pcVar6[param_3 - (longlong)param_1];
              *pcVar6 = cVar1;
              pcVar6 = pcVar6 + 1;
              if ((cVar1 == '\0') || (lVar3 = lVar3 + -1, lVar3 == 0)) break;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            if (lVar5 == 0) {
              *pcVar6 = '\0';
            }
          }
          if (lVar3 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          puVar2 = __doserrno();
          uVar4 = 0x22;
          goto LAB_18001321c;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_180013239;
  puVar2 = __doserrno();
  uVar4 = 0x16;
LAB_18001321c:
  *puVar2 = uVar4;
  FUN_1800093f4();
  return uVar4;
}




/* WARNING: Removing unreachable block (ram,0x00018001362c) */
/* WARNING: Removing unreachable block (ram,0x000180013625) */
/* WARNING: Removing unreachable block (ram,0x00018001361e) */
/* WARNING: Removing unreachable block (ram,0x000180013617) */
/* WARNING: Removing unreachable block (ram,0x000180013610) */
/* WARNING: Removing unreachable block (ram,0x000180013609) */
/* WARNING: Removing unreachable block (ram,0x000180013602) */
/* WARNING: Removing unreachable block (ram,0x0001800135fb) */
/* WARNING: Removing unreachable block (ram,0x0001800135f4) */
/* WARNING: Removing unreachable block (ram,0x0001800135ed) */
/* WARNING: Removing unreachable block (ram,0x0001800135e6) */
/* WARNING: Removing unreachable block (ram,0x0001800135df) */
/* WARNING: Removing unreachable block (ram,0x0001800135d8) */
/* WARNING: Removing unreachable block (ram,0x0001800135d1) */
/* WARNING: Removing unreachable block (ram,0x0001800135ca) */
/* WARNING: Removing unreachable block (ram,0x000180013482) */
/* WARNING: Removing unreachable block (ram,0x000180013491) */
/* WARNING: Removing unreachable block (ram,0x0001800134a0) */
/* WARNING: Removing unreachable block (ram,0x0001800134af) */
/* WARNING: Removing unreachable block (ram,0x0001800134be) */
/* WARNING: Removing unreachable block (ram,0x0001800134ca) */
/* WARNING: Removing unreachable block (ram,0x0001800134d6) */
/* WARNING: Removing unreachable block (ram,0x0001800134e2) */
/* WARNING: Removing unreachable block (ram,0x0001800134ee) */
/* WARNING: Removing unreachable block (ram,0x0001800134fa) */
/* WARNING: Removing unreachable block (ram,0x000180013506) */
/* WARNING: Removing unreachable block (ram,0x000180013512) */
/* WARNING: Removing unreachable block (ram,0x00018001351e) */
/* WARNING: Removing unreachable block (ram,0x00018001352a) */
/* WARNING: Removing unreachable block (ram,0x000180013536) */

byte * FUN_180013380(byte *param_1,byte *param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
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
  byte bVar19;
  ulonglong uVar20;
  byte *extraout_RAX;
  byte *pbVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
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
  undefined1 auStack_58 [32];
  byte abStack_38 [32];
  ulonglong uStack_18;
  longlong lVar27;
  
  uVar23 = (uint)param_2 & 0xf;
  uVar20 = (ulonglong)uVar23;
  pauVar22 = (undefined1 (*) [16])(param_2 + -uVar20);
  auVar36 = *pauVar22;
  switch(uVar20) {
  case 1:
    auVar36 = auVar36 >> 8;
    break;
  case 2:
    auVar36 = auVar36 >> 0x10;
    break;
  case 3:
    auVar36 = auVar36 >> 0x18;
    break;
  case 4:
    auVar36 = auVar36 >> 0x20;
    break;
  case 5:
    auVar36 = auVar36 >> 0x28;
    break;
  case 6:
    auVar36 = auVar36 >> 0x30;
    break;
  case 7:
    auVar36 = auVar36 >> 0x38;
    break;
  case 8:
    auVar36 = auVar36 >> 0x40;
    break;
  case 9:
    auVar36 = auVar36 >> 0x48;
    break;
  case 10:
    auVar36 = auVar36 >> 0x50;
    break;
  case 0xb:
    auVar36 = auVar36 >> 0x58;
    break;
  case 0xc:
    auVar36 = auVar36 >> 0x60;
    break;
  case 0xd:
    auVar36 = auVar36 >> 0x68;
    break;
  case 0xe:
    auVar36 = auVar36 >> 0x70;
    break;
  case 0xf:
    auVar36 = auVar36 >> 0x78;
  }
  auVar24[0] = -(auVar36[0] == '\0');
  auVar24[1] = -(auVar36[1] == '\0');
  auVar24[2] = -(auVar36[2] == '\0');
  auVar24[3] = -(auVar36[3] == '\0');
  auVar24[4] = -(auVar36[4] == '\0');
  auVar24[5] = -(auVar36[5] == '\0');
  auVar24[6] = -(auVar36[6] == '\0');
  auVar24[7] = -(auVar36[7] == '\0');
  auVar24[8] = -(auVar36[8] == '\0');
  auVar24[9] = -(auVar36[9] == '\0');
  auVar24[10] = -(auVar36[10] == '\0');
  auVar24[0xb] = -(auVar36[0xb] == '\0');
  auVar24[0xc] = -(auVar36[0xc] == '\0');
  auVar24[0xd] = -(auVar36[0xd] == '\0');
  auVar24[0xe] = -(auVar36[0xe] == '\0');
  auVar24[0xf] = -(auVar36[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar20 == 0) {
      if ((*pauVar22)[1] == (char)uVar23) goto LAB_18001363e;
      goto LAB_1800132d8;
    }
  }
  else {
    uVar23 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
      }
    }
    lVar27 = auVar36._8_8_;
    switch(-uVar23) {
    case 0:
      auVar36 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar28._0_8_ = auVar36._0_8_ << 8;
      auVar28._8_8_ = lVar27 << 8 | auVar36._0_8_ >> 0x38;
      auVar36 = auVar28 >> 8;
      break;
    case 0xfffffff2:
      auVar29._0_8_ = auVar36._0_8_ << 0x10;
      auVar29._8_8_ = lVar27 << 0x10 | auVar36._0_8_ >> 0x30;
      auVar36 = auVar29 >> 0x10;
      break;
    case 0xfffffff3:
      auVar30._0_8_ = auVar36._0_8_ << 0x18;
      auVar30._8_8_ = lVar27 << 0x18 | auVar36._0_8_ >> 0x28;
      auVar36 = auVar30 >> 0x18;
      break;
    case 0xfffffff4:
      auVar31._0_8_ = auVar36._0_8_ << 0x20;
      auVar31._8_8_ = lVar27 << 0x20 | auVar36._0_8_ >> 0x20;
      auVar36 = auVar31 >> 0x20;
      break;
    case 0xfffffff5:
      auVar32._0_8_ = auVar36._0_8_ << 0x28;
      auVar32._8_8_ = lVar27 << 0x28 | auVar36._0_8_ >> 0x18;
      auVar36 = auVar32 >> 0x28;
      break;
    case 0xfffffff6:
      auVar33._0_8_ = auVar36._0_8_ << 0x30;
      auVar33._8_8_ = lVar27 << 0x30 | auVar36._0_8_ >> 0x10;
      auVar36 = auVar33 >> 0x30;
      break;
    case 0xfffffff7:
      auVar34._0_8_ = auVar36._0_8_ << 0x38;
      auVar34._8_8_ = lVar27 << 0x38 | auVar36._0_8_ >> 8;
      auVar36 = auVar34 >> 0x38;
      break;
    case 0xfffffff8:
      auVar36._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar36._0_8_ << 8;
      auVar36 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar36._0_8_ << 0x10;
      auVar36 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar36._0_8_ << 0x18;
      auVar36 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar36._0_8_ << 0x20;
      auVar36 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar36._0_8_ << 0x28;
      auVar36 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar36._0_8_ << 0x30;
      auVar36 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar36._0_8_ << 0x38;
      auVar36 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar20 == 0 || (ulonglong)uVar23 < 0x10 - uVar20) goto LAB_18001363e;
  }
  auVar35 = pauVar22[1];
  auVar25[0] = -(auVar35[0] == '\0');
  auVar25[1] = -(auVar35[1] == '\0');
  auVar25[2] = -(auVar35[2] == '\0');
  auVar25[3] = -(auVar35[3] == '\0');
  auVar25[4] = -(auVar35[4] == '\0');
  auVar25[5] = -(auVar35[5] == '\0');
  auVar25[6] = -(auVar35[6] == '\0');
  lVar27 = auVar35._8_8_;
  auVar25[7] = -(auVar35[7] == '\0');
  auVar25[8] = -(auVar35[8] == '\0');
  auVar25[9] = -(auVar35[9] == '\0');
  auVar25[10] = -(auVar35[10] == '\0');
  auVar25[0xb] = -(auVar35[0xb] == '\0');
  auVar25[0xc] = -(auVar35[0xc] == '\0');
  auVar25[0xd] = -(auVar35[0xd] == '\0');
  auVar25[0xe] = -(auVar35[0xe] == '\0');
  auVar25[0xf] = -(auVar35[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar23 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
      }
    }
    if ((uVar23 - uVar20) + 0x10 < 0x11) {
      uVar20 = auVar35._0_8_;
      switch(-uVar23) {
      case 0:
        auVar35 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar35._0_8_ = uVar20 << 8;
        auVar35._8_8_ = lVar27 << 8 | uVar20 >> 0x38;
        break;
      case 0xfffffff2:
        auVar35._0_8_ = uVar20 << 0x10;
        auVar35._8_8_ = lVar27 << 0x10 | uVar20 >> 0x30;
        break;
      case 0xfffffff3:
        auVar35._0_8_ = uVar20 << 0x18;
        auVar35._8_8_ = lVar27 << 0x18 | uVar20 >> 0x28;
        break;
      case 0xfffffff4:
        auVar35._0_8_ = uVar20 << 0x20;
        auVar35._8_8_ = lVar27 << 0x20 | uVar20 >> 0x20;
        break;
      case 0xfffffff5:
        auVar35._0_8_ = uVar20 << 0x28;
        auVar35._8_8_ = lVar27 << 0x28 | uVar20 >> 0x18;
        break;
      case 0xfffffff6:
        auVar35._0_8_ = uVar20 << 0x30;
        auVar35._8_8_ = lVar27 << 0x30 | uVar20 >> 0x10;
        break;
      case 0xfffffff7:
        auVar35._0_8_ = uVar20 << 0x38;
        auVar35._8_8_ = lVar27 << 0x38 | uVar20 >> 8;
        break;
      case 0xfffffff8:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar20;
        auVar35 = auVar18 << 0x40;
        break;
      case 0xfffffff9:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar20 << 8;
        auVar35 = auVar11 << 0x40;
        break;
      case 0xfffffffa:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar20 << 0x10;
        auVar35 = auVar12 << 0x40;
        break;
      case 0xfffffffb:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar20 << 0x18;
        auVar35 = auVar13 << 0x40;
        break;
      case 0xfffffffc:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar20 << 0x20;
        auVar35 = auVar14 << 0x40;
        break;
      case 0xfffffffd:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar20 << 0x28;
        auVar35 = auVar15 << 0x40;
        break;
      case 0xfffffffe:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar20 << 0x30;
        auVar35 = auVar16 << 0x40;
        break;
      case 0xffffffff:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar20 << 0x38;
        auVar35 = auVar17 << 0x40;
      }
      auVar36 = auVar35 | auVar36;
LAB_18001363e:
      bVar19 = *param_1;
      while( true ) {
        if (bVar19 == 0) {
          return (byte *)0x0;
        }
        auVar26[0] = -(bVar19 == auVar36[0]);
        auVar26[1] = -(bVar19 == auVar36[1]);
        auVar26[2] = -(bVar19 == auVar36[2]);
        auVar26[3] = -(bVar19 == auVar36[3]);
        auVar26[4] = -(bVar19 == auVar36[4]);
        auVar26[5] = -(bVar19 == auVar36[5]);
        auVar26[6] = -(bVar19 == auVar36[6]);
        auVar26[7] = -(bVar19 == auVar36[7]);
        auVar26[8] = -(bVar19 == auVar36[8]);
        auVar26[9] = -(bVar19 == auVar36[9]);
        auVar26[10] = -(bVar19 == auVar36[10]);
        auVar26[0xb] = -(bVar19 == auVar36[0xb]);
        auVar26[0xc] = -(bVar19 == auVar36[0xc]);
        auVar26[0xd] = -(bVar19 == auVar36[0xd]);
        auVar26[0xe] = -(bVar19 == auVar36[0xe]);
        bVar2 = bVar19 == auVar36[0xf];
        auVar26[0xf] = -bVar2;
        if ((((((((((((((((auVar26 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar26 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar26 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar26 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar26 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar26 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar26 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar26 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar26 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar26 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar26 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar26 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar26 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar26 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar26 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        bVar19 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
LAB_1800132d8:
  uStack_18 = DAT_180023018 ^ (ulonglong)auStack_58;
  uVar20 = 0;
  do {
    if (0x1f < uVar20) {
      __report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      pbVar21 = (byte *)(*pcVar1)();
      return pbVar21;
    }
    abStack_38[uVar20] = 0;
    uVar20 = uVar20 + 1;
  } while ((longlong)uVar20 < 0x20);
  bVar19 = *param_2;
  while (bVar19 != 0) {
    param_2 = param_2 + 1;
    abStack_38[bVar19 >> 3] = abStack_38[bVar19 >> 3] | (byte)(1 << (bVar19 & 7));
    bVar19 = *param_2;
  }
  while ((bVar19 = *param_1, bVar19 != 0 &&
         ((abStack_38[bVar19 >> 3] & (byte)(1 << (bVar19 & 7))) == 0))) {
    param_1 = param_1 + 1;
  }
  __security_check_cookie(uStack_18 ^ (ulonglong)auStack_58);
  return extraout_RAX;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulong FUN_180013760(longlong param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulong uVar3;
  longlong lVar4;
  LPVOID pvVar5;
  ulong *puVar6;
  ulonglong uVar7;
  
  if (param_1 == 0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      _free_base(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
LAB_1800137ab:
    uVar3 = 0;
  }
  else {
    lVar4 = (*(code *)param_3)(0,param_1,0);
    if (lVar4 != -1) {
      uVar7 = *(ulonglong *)(param_2 + 0x18);
      uVar1 = lVar4 + 1;
      if (uVar7 < uVar1) {
        if (*(char *)(param_2 + 0x28) != '\0') {
          _free_base(*(LPVOID *)(param_2 + 0x10));
          *(undefined1 *)(param_2 + 0x28) = 0;
        }
        pvVar5 = _malloc_base(uVar1 * 2);
        *(LPVOID *)(param_2 + 0x10) = pvVar5;
        uVar2 = ~-(uint)(pvVar5 != (LPVOID)0x0) & 0xc;
        uVar7 = 0;
        if (uVar2 == 0) {
          uVar7 = uVar1;
        }
        *(bool *)(param_2 + 0x28) = uVar2 == 0;
        *(ulonglong *)(param_2 + 0x18) = uVar7;
        if (uVar2 != 0) {
          return uVar2;
        }
      }
      lVar4 = (*(code *)param_3)(*(undefined8 *)(param_2 + 0x10),param_1,uVar7,param_4);
      if ((lVar4 != -1) && (lVar4 != *(longlong *)(param_2 + 0x18))) {
        *(longlong *)(param_2 + 0x20) = lVar4 + 1;
        goto LAB_1800137ab;
      }
    }
    puVar6 = __doserrno();
    uVar3 = *puVar6;
  }
  return uVar3;
}




HANDLE FUN_180013868(longlong param_1,FINDEX_INFO_LEVELS param_2,LPVOID param_3,
                    FINDEX_SEARCH_OPS param_4,LPVOID param_5,DWORD param_6)

{
  ulong uVar1;
  HANDLE pvVar2;
  undefined8 local_38;
  undefined8 local_30;
  LPCWSTR local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = (LPCWSTR)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = '\0';
  uVar1 = FUN_180013760(param_1,(longlong)&local_38,&DAT_180013dac,0);
  if (uVar1 == 0) {
    pvVar2 = FindFirstFileExW(local_28,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pvVar2 = (HANDLE)0xffffffffffffffff;
  }
  if (local_10 != '\0') {
    _free_base(local_28);
  }
  return pvVar2;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

ulong FUN_18001390c(longlong param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  longlong lVar2;
  ulong *puVar3;
  
  if (param_1 == 0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
LAB_180013948:
    uVar1 = 0;
  }
  else {
    lVar2 = (*(code *)param_3)(0,param_1,0);
    if (lVar2 != -1) {
      if (*(ulonglong *)(param_2 + 0x18) < lVar2 + 1U) {
        if (*(char *)(param_2 + 0x28) != '\0') {
          *(undefined1 *)(param_2 + 0x28) = 0;
        }
        puVar3 = __doserrno();
        *puVar3 = 0x22;
        *(undefined1 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        return 0x22;
      }
      lVar2 = (*(code *)param_3)(*(undefined8 *)(param_2 + 0x10),param_1,
                                 *(ulonglong *)(param_2 + 0x18),param_4);
      if ((lVar2 != -1) && (lVar2 != *(longlong *)(param_2 + 0x18))) {
        *(longlong *)(param_2 + 0x20) = lVar2 + 1;
        goto LAB_180013948;
      }
    }
    puVar3 = __doserrno();
    uVar1 = *puVar3;
  }
  return uVar1;
}




void FUN_1800139d8(HANDLE param_1,DWORD *param_2)

{
  BOOL BVar1;
  ulong uVar2;
  undefined1 auStack_2b8 [32];
  DWORD *local_298;
  undefined8 local_290;
  DWORD *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_270;
  _WIN32_FIND_DATAW local_268;
  ulonglong local_18;
  
  local_18 = DAT_180023018 ^ (ulonglong)auStack_2b8;
  BVar1 = FindNextFileW(param_1,&local_268);
  if (BVar1 != 0) {
    *param_2 = local_268.dwFileAttributes;
    *(FILETIME *)(param_2 + 1) = local_268.ftCreationTime;
    *(FILETIME *)(param_2 + 3) = local_268.ftLastAccessTime;
    *(FILETIME *)(param_2 + 5) = local_268.ftLastWriteTime;
    param_2[7] = local_268.nFileSizeHigh;
    param_2[8] = local_268.nFileSizeLow;
    param_2[9] = local_268.dwReserved0;
    param_2[10] = local_268.dwReserved1;
    local_298 = param_2 + 0xb;
    local_290 = 0x104;
    local_280 = 0x104;
    local_278 = 0;
    local_270 = 0;
    local_288 = local_298;
    uVar2 = FUN_18001390c((longlong)local_268.cFileName,(longlong)&local_298,&DAT_180015a54,0);
    if (uVar2 == 0) {
      local_278 = 0;
      local_298 = param_2 + 0x4c;
      local_290 = 0xe;
      local_280 = 0xe;
      local_270 = 0;
      local_288 = local_298;
      FUN_18001390c((longlong)local_268.cAlternateFileName,(longlong)&local_298,&DAT_180015a54,0);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2b8);
  return;
}




byte * FUN_180013b0c(byte *param_1,byte *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_1800093f4();
  }
  else if (param_1 < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)0x0);
    pbVar2 = param_2 + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = param_2 + (-1 - (ulonglong)((int)param_2 - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (byte *)0x0;
}




__uint64 FUN_180013db4(wchar_t *param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  ulong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  __uint64 unaff_RBX;
  byte *pbVar7;
  undefined **ppuVar8;
  uint uVar9;
  undefined8 local_res8;
  byte *local_res10;
  longlong local_48;
  localeinfo_struct local_40;
  char local_30;
  
  if (DAT_180024698 == 0) {
    ppuVar8 = &PTR_PTR_DAT_1800232c8;
  }
  else {
    ppuVar8 = (undefined **)0x0;
  }
  uVar5 = 0;
  if (param_1 != (wchar_t *)0x0) {
    if (param_3 == 0) {
      return unaff_RBX;
    }
    *param_1 = L'\0';
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    puVar4 = __doserrno();
    *puVar4 = 0x16;
    FUN_1800093f4();
    return unaff_RBX;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_48,(__crt_locale_pointers *)ppuVar8);
  uVar1 = (local_40.locinfo)->lc_time_cp;
  if (uVar1 == 0xfde9) {
    local_res8 = 0;
    __crt_mbstring::__mbsrtowcs_utf8(param_1,(char **)&local_res10,param_3,(_Mbstatet *)&local_res8)
    ;
  }
  else if (param_1 == (wchar_t *)0x0) {
    lVar6 = -1;
    if ((local_40.locinfo)->locale_name[2] == (wchar_t *)0x0) {
      do {
        lVar6 = lVar6 + 1;
      } while (local_res10[lVar6] != 0);
    }
    else {
      iVar2 = __acrt_MultiByteToWideChar(uVar1,9);
      if (iVar2 == 0) {
        puVar4 = __doserrno();
        *puVar4 = 0x2a;
      }
    }
  }
  else if ((local_40.locinfo)->locale_name[2] == (wchar_t *)0x0) {
    if (param_3 != 0) {
      do {
        *param_1 = (ushort)local_res10[uVar5];
        if (local_res10[uVar5] == 0) break;
        uVar5 = uVar5 + 1;
        param_1 = param_1 + 1;
      } while (uVar5 < param_3);
    }
  }
  else {
    uVar9 = (uint)param_3;
    iVar2 = __acrt_MultiByteToWideChar(uVar1,9);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x7a) {
        uVar5 = param_3 & 0xffffffff;
        pbVar7 = local_res10;
        while (uVar9 != 0) {
          uVar9 = (int)uVar5 - 1;
          uVar5 = (ulonglong)uVar9;
          if (*pbVar7 == 0) break;
          iVar2 = _isleadbyte_l((uint)*pbVar7,&local_40);
          if ((iVar2 != 0) && (pbVar7 = pbVar7 + 1, *pbVar7 == 0)) goto LAB_180013d18;
          pbVar7 = pbVar7 + 1;
        }
        iVar2 = __acrt_MultiByteToWideChar((local_40.locinfo)->lc_time_cp,1);
        if (iVar2 != 0) goto LAB_180013d7d;
      }
LAB_180013d18:
      puVar4 = __doserrno();
      *puVar4 = 0x2a;
      *param_1 = L'\0';
    }
  }
LAB_180013d7d:
  if (local_30 != '\0') {
    *(uint *)(local_48 + 0x3a8) = *(uint *)(local_48 + 0x3a8) & 0xfffffffd;
  }
  return unaff_RBX;
}




/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_1800093f4();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000180013e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_180024f00,0,param_1);
  return uVar2;
}




/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
          pvVar2 = HeapReAlloc(DAT_180024f00,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_180010f40();
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
    int __cdecl GetTableIndexFromLocaleName(wchar_t const * __ptr64)
   
   Library: Visual Studio 2017 Release */

int __cdecl GetTableIndexFromLocaleName(wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  bool bVar10;
  
  iVar7 = 0;
  iVar8 = 0xe3;
  while( true ) {
    lVar5 = 0x55;
    iVar2 = (iVar8 + iVar7) / 2;
    puVar4 = (ushort *)(&PTR_DAT_18001cfa0)[(longlong)iVar2 * 2];
    lVar6 = (longlong)param_1 - (longlong)puVar4;
    do {
      uVar3 = *(short *)(lVar6 + (longlong)puVar4) + 0x20;
      if (0x19 < (ushort)(*(short *)(lVar6 + (longlong)puVar4) - 0x41U)) {
        uVar3 = *(ushort *)(lVar6 + (longlong)puVar4);
      }
      uVar9 = *puVar4 + 0x20;
      if (0x19 < (ushort)(*puVar4 - 0x41)) {
        uVar9 = *puVar4;
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (((lVar5 != 0) && (uVar3 != 0)) && (uVar3 == uVar9));
    if ((uint)uVar3 == (uint)uVar9) break;
    bVar10 = -1 < (int)((uint)uVar3 - (uint)uVar9);
    iVar1 = iVar2 + -1;
    if (bVar10) {
      iVar1 = iVar8;
    }
    iVar8 = iVar1;
    if (bVar10) {
      iVar7 = iVar2 + 1;
    }
    if (iVar8 < iVar7) {
      return -1;
    }
  }
  return *(int *)(&UNK_18001cfa8 + (longlong)iVar2 * 0x10);
}




/* Library Function - Single Match
    __acrt_DownlevelLocaleNameToLCID
   
   Library: Visual Studio 2017 Release */

undefined4 __acrt_DownlevelLocaleNameToLCID(wchar_t *param_1)

{
  uint uVar1;
  
  if (((param_1 != (wchar_t *)0x0) &&
      (uVar1 = GetTableIndexFromLocaleName(param_1), -1 < (int)uVar1)) && (uVar1 < 0xe4)) {
    return *(undefined4 *)(&DAT_18001b540 + (longlong)(int)uVar1 * 0x10);
  }
  return 0;
}




/* Library Function - Single Match
    _get_fmode
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _get_fmode(int *_PMode)

{
  errno_t eVar1;
  ulong *puVar2;
  
  if (_PMode == (int *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_1800093f4();
    eVar1 = 0x16;
  }
  else {
    *_PMode = DAT_180024f58;
    eVar1 = 0;
  }
  return eVar1;
}




/* Library Function - Single Match
    _setmode_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl _setmode_nolock(int _FileHandle,int _Mode)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)_FileHandle >> 6;
  lVar5 = (ulonglong)(_FileHandle & 0x3f) * 0x40;
  lVar3 = (&DAT_1800246b0)[lVar6];
  bVar2 = *(byte *)(lVar5 + 0x38 + lVar3);
  cVar1 = *(char *)(lVar5 + 0x39 + lVar3);
  if (_Mode == 0x4000) {
    *(byte *)(lVar5 + 0x38 + lVar3) = bVar2 | 0x80;
    *(undefined1 *)(lVar5 + 0x39 + (&DAT_1800246b0)[lVar6]) = 0;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(lVar5 + 0x38 + lVar3) = bVar2 & 0x7f;
  }
  else if ((_Mode - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVar5 + 0x38 + lVar3) = bVar2 | 0x80;
    *(undefined1 *)(lVar5 + 0x39 + (&DAT_1800246b0)[lVar6]) = 2;
  }
  else if (_Mode == 0x40000) {
    *(byte *)(lVar5 + 0x38 + lVar3) = bVar2 | 0x80;
    *(undefined1 *)(lVar5 + 0x39 + (&DAT_1800246b0)[lVar6]) = 1;
  }
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else if (cVar1 == '\0') {
    iVar4 = 0x4000;
  }
  else {
    iVar4 = 0x10000;
    if (cVar1 == '\x01') {
      iVar4 = 0x40000;
    }
  }
  return iVar4;
}




/* Library Function - Single Match
    _chsize_nolock
   
   Library: Visual Studio 2015 Release */

int __cdecl _chsize_nolock(int _FileHandle,longlong _Size)

{
  ulong uVar1;
  int _Mode;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  __int64 _Var5;
  ulong *puVar6;
  __int64 _Var7;
  byte *pbVar8;
  HANDLE hFile;
  longlong lVar9;
  uint uVar10;
  
  _Var5 = common_lseek_nolock<__int64>(_FileHandle,0,1);
  if ((_Var5 == -1) || (_Var7 = common_lseek_nolock<__int64>(_FileHandle,0,2), _Var7 == -1))
  goto LAB_180014109;
  lVar9 = _Size - _Var7;
  if (lVar9 < 1) {
    if (lVar9 < 0) {
      _Var7 = common_lseek_nolock<__int64>(_FileHandle,_Size,0);
      if (_Var7 == -1) goto LAB_180014109;
      hFile = (HANDLE)_get_osfhandle(_FileHandle);
      BVar3 = SetEndOfFile(hFile);
      if (BVar3 == 0) {
        puVar6 = __doserrno();
        *puVar6 = 0xd;
        puVar6 = __doserrno();
        DVar4 = GetLastError();
        *puVar6 = DVar4;
        goto LAB_180014109;
      }
    }
  }
  else {
    pbVar8 = (byte *)_calloc_base(0x1000,1);
    if (pbVar8 == (byte *)0x0) {
      puVar6 = __doserrno();
      *puVar6 = 0xc;
LAB_1800141e9:
      puVar6 = __doserrno();
      uVar1 = *puVar6;
      _free_base(pbVar8);
      return uVar1;
    }
    _Mode = _setmode_nolock(_FileHandle,0x8000);
    do {
      uVar10 = (uint)lVar9;
      if (0xfff < lVar9) {
        uVar10 = 0x1000;
      }
      iVar2 = FUN_18000af68(_FileHandle,pbVar8,uVar10);
      if (iVar2 == -1) {
        puVar6 = __doserrno();
        if (*puVar6 == 5) {
          puVar6 = __doserrno();
          *puVar6 = 0xd;
        }
        goto LAB_1800141e9;
      }
      lVar9 = lVar9 - iVar2;
    } while (0 < lVar9);
    _setmode_nolock(_FileHandle,_Mode);
    _free_base(pbVar8);
  }
  _Var5 = common_lseek_nolock<__int64>(_FileHandle,_Var5,0);
  if (_Var5 != -1) {
    return 0;
  }
LAB_180014109:
  puVar6 = __doserrno();
  return *puVar6;
}




int FUN_180014250(uint param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  HANDLE hFile;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  char local_res8 [8];
  DWORD local_res10 [2];
  HANDLE local_res18;
  
  lVar12 = (longlong)(int)param_1 >> 6;
  lVar10 = (ulonglong)(param_1 & 0x3f) * 0x40;
  lVar8 = (&DAT_1800246b0)[lVar12];
  hFile = *(HANDLE *)(lVar10 + 0x28 + lVar8);
  if ((param_3 == 0) || (*param_2 != '\n')) {
    pbVar2 = (byte *)(lVar10 + 0x38 + lVar8);
    *pbVar2 = *pbVar2 & 0xfb;
  }
  else {
    pbVar2 = (byte *)(lVar10 + 0x38 + lVar8);
    *pbVar2 = *pbVar2 | 4;
  }
  pcVar1 = param_2 + param_3;
  pcVar9 = param_2;
  pcVar11 = param_2;
  local_res18 = hFile;
  if (param_2 < pcVar1) {
    do {
      cVar7 = *pcVar11;
      if (cVar7 == '\x1a') {
        bVar4 = *(byte *)(lVar10 + 0x38 + (&DAT_1800246b0)[lVar12]);
        if ((bVar4 & 0x40) == 0) {
          *(byte *)(lVar10 + 0x38 + (&DAT_1800246b0)[lVar12]) = bVar4 | 2;
        }
        else {
          *pcVar9 = '\x1a';
          pcVar9 = pcVar9 + 1;
        }
        break;
      }
      pcVar6 = pcVar11 + 1;
      if (cVar7 == '\r') {
        if (pcVar6 < pcVar1) {
          cVar7 = '\r';
          if (*pcVar6 == '\n') {
            cVar7 = '\n';
          }
          cVar3 = *pcVar6;
          *pcVar9 = cVar7;
          pcVar6 = pcVar11 + (ulonglong)(cVar3 == '\n') + 1;
        }
        else {
          BVar5 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
          if ((BVar5 == 0) || (local_res10[0] == 0)) {
LAB_1800143be:
            *pcVar9 = '\r';
          }
          else {
            lVar8 = (ulonglong)(param_1 & 0x3f) * 0x40;
            if ((*(byte *)((&DAT_1800246b0)[lVar12] + 0x38 + lVar8) & 0x48) == 0) {
              if ((local_res8[0] != '\n') || (pcVar9 != param_2)) {
                common_lseek_nolock<__int64>(param_1,-1,1);
                hFile = local_res18;
                if (local_res8[0] == '\n') goto LAB_1800143cc;
                goto LAB_1800143be;
              }
            }
            else if (local_res8[0] != '\n') {
              *pcVar9 = '\r';
              *(char *)((&DAT_1800246b0)[lVar12] + 0x3a + lVar8) = local_res8[0];
              goto LAB_1800143c1;
            }
            *pcVar9 = '\n';
          }
        }
LAB_1800143c1:
        pcVar9 = pcVar9 + 1;
        hFile = local_res18;
      }
      else {
        *pcVar9 = cVar7;
        pcVar9 = pcVar9 + 1;
      }
LAB_1800143cc:
      pcVar11 = pcVar6;
    } while (pcVar6 < pcVar1);
  }
  return (int)pcVar9 - (int)param_2;
}




int FUN_180014410(uint param_1,short *param_2,longlong param_3)

{
  short *psVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte bVar5;
  short sVar6;
  BOOL BVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  HANDLE pvVar14;
  short *psVar15;
  short *psVar16;
  longlong lVar17;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];
  HANDLE local_res20;
  
  lVar17 = (longlong)(int)param_1 >> 6;
  lVar11 = (ulonglong)(param_1 & 0x3f) * 0x40;
  lVar13 = (&DAT_1800246b0)[lVar17];
  pvVar14 = *(HANDLE *)(lVar11 + 0x28 + lVar13);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar3 = (byte *)(lVar11 + 0x38 + lVar13);
    *pbVar3 = *pbVar3 & 0xfb;
  }
  else {
    pbVar3 = (byte *)(lVar11 + 0x38 + lVar13);
    *pbVar3 = *pbVar3 | 4;
  }
  psVar1 = param_2 + param_3;
  psVar9 = param_2;
  psVar10 = param_2;
  psVar15 = param_2;
  local_res20 = pvVar14;
  if (param_2 < psVar1) {
    do {
      sVar6 = *psVar15;
      psVar10 = psVar9;
      if (sVar6 == 0x1a) {
        bVar5 = *(byte *)(lVar11 + 0x38 + (&DAT_1800246b0)[lVar17]);
        if ((bVar5 & 0x40) == 0) {
          *(byte *)(lVar11 + 0x38 + (&DAT_1800246b0)[lVar17]) = bVar5 | 2;
        }
        else {
          *psVar9 = 0x1a;
          psVar10 = psVar9 + 1;
        }
        break;
      }
      psVar16 = psVar15 + 1;
      if (sVar6 == 0xd) {
        if (psVar16 < psVar1) {
          sVar6 = *psVar16;
          sVar8 = 0xd;
          if (sVar6 == 10) {
            sVar8 = 10;
          }
          *psVar9 = sVar8;
          lVar13 = 4;
          if (sVar6 != 10) {
            lVar13 = 2;
          }
          psVar16 = (short *)((longlong)psVar15 + lVar13);
          psVar10 = psVar9 + 1;
        }
        else {
          BVar7 = ReadFile(pvVar14,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
          pvVar14 = local_res20;
          if ((BVar7 == 0) || (local_res18[0] == 0)) {
            *psVar9 = 0xd;
            psVar10 = psVar9 + 1;
          }
          else {
            lVar13 = (ulonglong)(param_1 & 0x3f) * 0x40;
            if ((*(byte *)(lVar13 + 0x38 + (&DAT_1800246b0)[lVar17]) & 0x48) == 0) {
              if ((local_res8[0] == 10) && (psVar9 == param_2)) {
                *psVar9 = 10;
                psVar10 = psVar9 + 1;
              }
              else {
                common_lseek_nolock<__int64>(param_1,-2,1);
                pvVar14 = local_res20;
                if (local_res8[0] != 10) {
                  *psVar9 = 0xd;
                  psVar10 = psVar9 + 1;
                }
              }
            }
            else {
              psVar10 = psVar9 + 1;
              if (local_res8[0] == 10) {
                *psVar9 = 10;
              }
              else {
                local_res10[0] = local_res8[0];
                *psVar9 = 0xd;
                lVar12 = 0;
                do {
                  puVar4 = (undefined1 *)((longlong)local_res10 + lVar12);
                  lVar2 = lVar13 + lVar12;
                  lVar12 = lVar12 + 1;
                  *(undefined1 *)(lVar2 + 0x3a + (&DAT_1800246b0)[lVar17]) = *puVar4;
                } while (lVar12 < 2);
                *(undefined1 *)(lVar13 + 0x3c + (&DAT_1800246b0)[lVar17]) = 10;
              }
            }
          }
        }
      }
      else {
        *psVar9 = sVar6;
        psVar10 = psVar9 + 1;
      }
      psVar9 = psVar10;
      psVar15 = psVar16;
    } while (psVar16 < psVar1);
  }
  return (int)((longlong)psVar10 - (longlong)param_2 >> 1) * 2;
}




int FUN_180014694(uint param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  ulong *puVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar3 = FUN_180014250(param_1,(char *)param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  lVar10 = (longlong)(int)param_1 >> 6;
  lVar11 = (ulonglong)(param_1 & 0x3f) * 0x40;
  lVar2 = (&DAT_1800246b0)[lVar10];
  if (*(char *)(lVar2 + 0x39 + lVar11) != '\0') {
    pbVar6 = param_2 + iVar3;
    if ((char)pbVar6[-1] < '\0') {
      uVar8 = 1;
      for (pbVar6 = pbVar6 + -1;
          ((uVar7 = (uint)uVar8, (&DAT_180023910)[*pbVar6] == '\0' && (uVar7 < 5)) &&
          (param_2 <= pbVar6)); pbVar6 = pbVar6 + -1) {
        uVar8 = (ulonglong)(uVar7 + 1);
      }
      if ((&DAT_180023910)[*pbVar6] == '\0') {
        puVar5 = __doserrno();
        *puVar5 = 0x2a;
        return -1;
      }
      if ((int)(char)(&DAT_180023910)[*pbVar6] + 1U == uVar7) {
        pbVar6 = pbVar6 + uVar8;
      }
      else if ((*(byte *)(lVar2 + 0x38 + lVar11) & 0x48) == 0) {
        common_lseek_nolock<__int64>(param_1,(longlong)(int)-uVar7,1);
      }
      else {
        pbVar9 = pbVar6 + 1;
        *(byte *)(lVar2 + 0x3a + lVar11) = *pbVar6;
        if (1 < uVar7) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar6 + 2;
          *(byte *)((&DAT_1800246b0)[lVar10] + 0x3b + lVar11) = bVar1;
        }
        if (uVar7 == 3) {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *(byte *)((&DAT_1800246b0)[lVar10] + 0x3c + lVar11) = bVar1;
        }
        pbVar6 = pbVar9 + -uVar8;
      }
    }
    iVar3 = __acrt_MultiByteToWideChar(0xfde9,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      __acrt_errno_map_os_error(DVar4);
      return -1;
    }
    lVar2 = (&DAT_1800246b0)[lVar10];
    pbVar9 = (byte *)(lVar2 + 0x3d + lVar11);
    *pbVar9 = *pbVar9 & 0xfd;
    pbVar9 = (byte *)(lVar2 + 0x3d + lVar11);
    *pbVar9 = *pbVar9 | -(iVar3 != (int)pbVar6 - (int)param_2) & 2U;
    return iVar3 * 2;
  }
  return iVar3;
}




int FUN_180014830(uint param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulong *puVar6;
  byte *pbVar7;
  __int64 _Var8;
  byte *pbVar9;
  short sVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint nNumberOfBytesToRead;
  byte *pbVar16;
  uint local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  longlong local_58;
  ulonglong local_50;
  byte *local_48;
  
  if (param_1 == 0xfffffffe) {
    puVar6 = __doserrno();
    *puVar6 = 0;
    puVar6 = __doserrno();
    *puVar6 = 9;
    return -1;
  }
  pbVar7 = (byte *)0x0;
  iVar12 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_180024ab0)) {
    lVar11 = (ulonglong)(param_1 & 0x3f) * 0x40;
    local_58 = (longlong)(int)param_1 >> 6;
    local_50 = 1;
    lVar14 = (&DAT_1800246b0)[local_58];
    bVar1 = *(byte *)(lVar14 + 0x38 + lVar11);
    if ((bVar1 & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((bVar1 & 2) != 0)) {
          return 0;
        }
        if (param_2 != (byte *)0x0) {
          cVar2 = *(char *)(lVar14 + 0x39 + lVar11);
          local_60 = *(HANDLE *)(lVar14 + 0x28 + lVar11);
          if (cVar2 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_18001492c;
            uVar15 = param_3 >> 1;
            if (uVar15 < 4) {
              uVar15 = 4;
            }
            pbVar7 = (byte *)_malloc_base((ulonglong)uVar15);
            _free_base((LPVOID)0x0);
            _free_base((LPVOID)0x0);
            if (pbVar7 != (byte *)0x0) {
              _Var8 = common_lseek_nolock<__int64>(param_1,0,1);
              *(__int64 *)((&DAT_1800246b0)[local_58] + 0x30 + lVar11) = _Var8;
              lVar14 = (&DAT_1800246b0)[local_58];
              param_2 = pbVar7;
              goto LAB_1800149e2;
            }
            puVar6 = __doserrno();
            *puVar6 = 0xc;
            puVar6 = __doserrno();
            *puVar6 = 8;
          }
          else {
            uVar15 = param_3;
            if ((cVar2 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_18001492c:
              puVar6 = __doserrno();
              *puVar6 = 0;
              puVar6 = __doserrno();
              *puVar6 = 0x16;
              FUN_1800093f4();
            }
            else {
LAB_1800149e2:
              pbVar16 = param_2;
              nNumberOfBytesToRead = uVar15;
              if (((*(byte *)(lVar14 + 0x38 + lVar11) & 0x48) != 0) &&
                 ((bVar1 = *(byte *)(lVar14 + 0x3a + lVar11), bVar1 != 10 && (uVar15 != 0)))) {
                *param_2 = bVar1;
                nNumberOfBytesToRead = uVar15 - 1;
                pbVar16 = param_2 + 1;
                iVar12 = 1;
                *(undefined1 *)((&DAT_1800246b0)[local_58] + 0x3a + lVar11) = 10;
                if ((cVar2 != '\0') &&
                   ((bVar1 = *(byte *)((&DAT_1800246b0)[local_58] + 0x3b + lVar11), bVar1 != 10 &&
                    (nNumberOfBytesToRead != 0)))) {
                  *pbVar16 = bVar1;
                  pbVar16 = param_2 + 2;
                  nNumberOfBytesToRead = uVar15 - 2;
                  *(undefined1 *)((&DAT_1800246b0)[local_58] + 0x3b + lVar11) = 10;
                  iVar12 = 2;
                  if ((cVar2 == '\x01') &&
                     ((bVar1 = *(byte *)((&DAT_1800246b0)[local_58] + 0x3c + lVar11), bVar1 != 10 &&
                      (iVar12 = 2, nNumberOfBytesToRead != 0)))) {
                    *pbVar16 = bVar1;
                    iVar12 = 3;
                    pbVar16 = param_2 + 3;
                    nNumberOfBytesToRead = uVar15 - 3;
                    *(undefined1 *)((&DAT_1800246b0)[local_58] + 0x3c + lVar11) = 10;
                  }
                }
              }
              local_48 = param_2;
              iVar3 = _isatty(param_1);
              if (((iVar3 == 0) || (-1 < *(char *)((&DAT_1800246b0)[local_58] + 0x38 + lVar11))) ||
                 (BVar4 = GetConsoleMode(local_60,local_68), BVar4 == 0)) {
                local_50 = local_50 & 0xffffffffffffff00;
LAB_180014b0d:
                BVar4 = ReadFile(local_60,pbVar16,nNumberOfBytesToRead,local_res20,(LPOVERLAPPED)0x0
                                );
                if ((BVar4 != 0) && (local_res20[0] <= param_3)) {
LAB_180014b48:
                  iVar12 = iVar12 + local_res20[0];
                  if (*(char *)((&DAT_1800246b0)[local_58] + 0x38 + lVar11) < '\0') {
                    if (cVar2 == '\x02') {
                      uVar13 = (ulonglong)(longlong)iVar12 >> 1;
                      if ((char)local_50 == '\0') {
                        iVar12 = FUN_180014410(param_1,(short *)local_48,uVar13);
                      }
                      else {
                        pbVar16 = local_48;
                        for (pbVar9 = local_48; pbVar9 < local_48 + uVar13 * 2;
                            pbVar9 = pbVar9 + lVar14) {
                          sVar10 = *(short *)pbVar9;
                          if (sVar10 == 0x1a) {
                            pbVar9 = (byte *)((&DAT_1800246b0)[local_58] + 0x38 + lVar11);
                            *pbVar9 = *pbVar9 | 2;
                            break;
                          }
                          if (((sVar10 == 0xd) && (pbVar9 + 2 < local_48 + uVar13 * 2)) &&
                             (*(short *)(pbVar9 + 2) == 10)) {
                            sVar10 = 10;
                            lVar14 = 4;
                          }
                          else {
                            lVar14 = 2;
                          }
                          *(short *)pbVar16 = sVar10;
                          pbVar16 = pbVar16 + 2;
                        }
                        iVar12 = (int)((longlong)pbVar16 - (longlong)local_48 >> 1) * 2;
                      }
                    }
                    else {
                      iVar12 = FUN_180014694(param_1,pbVar16,(longlong)iVar12);
                    }
                  }
                  goto LAB_180014aed;
                }
                DVar5 = GetLastError();
                if (DVar5 != 5) {
                  if (DVar5 == 0x6d) {
                    iVar12 = 0;
                    goto LAB_180014aed;
                  }
                  goto LAB_180014ae3;
                }
                puVar6 = __doserrno();
                *puVar6 = 9;
                puVar6 = __doserrno();
                *puVar6 = 5;
              }
              else {
                if (cVar2 != '\x02') goto LAB_180014b0d;
                BVar4 = ReadConsoleW(local_60,pbVar16,nNumberOfBytesToRead >> 1,local_res20,
                                     (PCONSOLE_READCONSOLE_CONTROL)0x0);
                if (BVar4 != 0) {
                  local_res20[0] = local_res20[0] * 2;
                  goto LAB_180014b48;
                }
                DVar5 = GetLastError();
LAB_180014ae3:
                __acrt_errno_map_os_error(DVar5);
              }
            }
          }
          iVar12 = -1;
LAB_180014aed:
          _free_base(pbVar7);
          return iVar12;
        }
      }
      puVar6 = __doserrno();
      *puVar6 = 0;
      puVar6 = __doserrno();
      *puVar6 = 0x16;
      goto LAB_180014c6b;
    }
  }
  puVar6 = __doserrno();
  *puVar6 = 0;
  puVar6 = __doserrno();
  *puVar6 = 9;
LAB_180014c6b:
  FUN_1800093f4();
  return -1;
}




undefined4 FUN_180014c8c(void)

{
  return DAT_180024f4c;
}




/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_180023a10 == (HANDLE)0xfffffffffffffffe) {
    DAT_180023a10 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_180023a10 != (HANDLE)0xffffffffffffffff;
}




/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_180023a10,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_180023a10 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_180023a10);
      }
      DAT_180023a10 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_180023a10,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}




/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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




void FUN_180014ddc(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4)

{
  byte bVar1;
  ushort uVar2;
  ulong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte bVar10;
  uint *puVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [24];
  uint auStack_50 [6];
  ulonglong local_38;
  
  local_38 = DAT_180023018 ^ (ulonglong)auStack_68;
  puVar11 = (uint *)&DAT_180024f50;
  if (param_4 != (uint *)0x0) {
    puVar11 = param_4;
  }
  pbVar8 = &DAT_18001ab3d;
  if (param_2 != (byte *)0x0) {
    pbVar8 = param_2;
  }
  uVar12 = 1;
  if (param_2 != (byte *)0x0) {
    uVar12 = param_3;
  }
  puVar7 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar12 == 0) goto LAB_180014f99;
  uVar2 = *(ushort *)((longlong)puVar11 + 6);
  uVar9 = (ulonglong)uVar2;
  if (uVar2 == 0) {
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if (-1 < (char)bVar1) {
      if (puVar7 != (uint *)0x0) {
        *puVar7 = (uint)bVar1;
      }
      goto LAB_180014f99;
    }
    if ((bVar1 & 0xe0) == 0xc0) {
      bVar10 = 2;
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      bVar10 = 3;
    }
    else {
      if ((bVar1 & 0xf8) != 0xf0) goto LAB_180014f85;
      bVar10 = 4;
    }
    uVar9 = (ulonglong)bVar10;
    uVar4 = (1 << (7 - bVar10 & 0x1f)) - 1U & (uint)bVar1;
LAB_180014eda:
    uVar6 = uVar9 & 0xff;
    uVar5 = uVar6;
    if (uVar12 <= uVar6) {
      uVar5 = uVar12;
    }
    while ((ulonglong)((longlong)pbVar8 - (longlong)param_2) < uVar5) {
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      if ((bVar1 & 0xc0) != 0x80) goto LAB_180014f85;
      uVar4 = bVar1 & 0x3f | uVar4 << 6;
    }
    if (uVar5 < uVar6) {
      *(ushort *)(puVar11 + 1) = (ushort)bVar10;
      *(ushort *)((longlong)puVar11 + 6) = (ushort)(byte)((char)uVar9 - (char)uVar5);
      *puVar11 = uVar4;
      goto LAB_180014f99;
    }
    if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
      auStack_50[2] = 0x80;
      auStack_50[3] = 0x800;
      auStack_50[4] = 0x10000;
      if (auStack_50[bVar10] <= uVar4) {
        if (puVar7 != (uint *)0x0) {
          *puVar7 = uVar4;
        }
        puVar11[0] = 0;
        puVar11[1] = 0;
        goto LAB_180014f99;
      }
    }
  }
  else {
    bVar10 = (byte)puVar11[1];
    uVar4 = *puVar11;
    if ((((byte)(bVar10 - 2) < 3) && ((byte)uVar2 != 0)) && ((byte)uVar2 < bVar10))
    goto LAB_180014eda;
  }
LAB_180014f85:
  puVar11[0] = 0;
  puVar11[1] = 0;
  puVar3 = __doserrno();
  *puVar3 = 0x2a;
LAB_180014f99:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_68);
  return;
}




/* Library Function - Single Match
    fegetenv
   
   Library: Visual Studio 2017 Release */

undefined8 fegetenv(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_180015a5c();
  *param_1 = uVar1;
  uVar1 = FUN_180015b5c();
  param_1[1] = uVar1;
  return 0;
}




/* Library Function - Single Match
    fesetenv
   
   Library: Visual Studio 2017 Release */

undefined8 fesetenv(uint *param_1)

{
  undefined8 uVar1;
  uint local_res8 [8];
  
  __acrt_fenv_set_control(*param_1);
  __acrt_fenv_set_status(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = fegetenv(local_res8);
  if ((((int)uVar1 == 0) && (*param_1 == local_res8[0])) && (param_1[1] == local_res8[1])) {
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
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

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

double FUN_180015140(void)

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
  if (DAT_180024f60 == 0) {
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
        dVar9 = (double)((ulonglong)dVar3 & SUB168(_DAT_18001e8b0,0));
        dVar7 = dVar3;
        if (dVar17 == -1023.0) {
          dVar17 = (double)((ulonglong)dVar9 | SUB168(_DAT_18001e940,0)) - 1.0;
          dVar7 = (double)((ulonglong)dVar17 & SUB168(_DAT_18001e8b0,0));
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
          dVar12 = (double)((ulonglong)dVar3 & SUB168(_DAT_18001ea80,0));
          dVar3 = (((dVar9 * 0.012500000003771751 + 0.08333333333333179) * dVar10 +
                   (dVar9 * 0.0004348877777076146 + 0.0022321399879194482) * dVar10 * dVar10 * dVar7
                   ) - dVar3 * dVar17) + (dVar3 - dVar12);
          return dVar12 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
                 dVar3 * 0.4342937469482422 + dVar12 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        dVar7 = ((double)(uVar1 | SUB168(_DAT_18001e950,0)) -
                (double)((ulonglong)dVar9 | SUB168(_DAT_18001e950,0))) *
                *(double *)(&DAT_18001faf0 + uVar2 * 8);
        dVar3 = dVar7 * dVar7;
        return *(double *)(&DAT_18001ead0 + uVar2 * 8) + dVar17 * 0.3010299950838089 +
               *(double *)(&DAT_18001f2e0 + uVar2 * 8) +
               (dVar17 * 5.801722962879576e-10 -
               ((dVar7 * 0.3333333333333333 + 0.5) * dVar3 + dVar7 +
               ((dVar7 * 0.16666666666666666 + 0.2) * dVar7 + 0.25) * dVar3 * dVar3) *
               0.4342944819032518);
      }
      if (dVar3 == 0.0) {
        dVar3 = (double)FUN_1800160d0(dVar3,0xfff0000000000000,1);
        return dVar3;
      }
    }
    dVar3 = (double)FUN_1800160d0(dVar3,0xfff8000000000000,2);
                    /* WARNING: Read-only address (ram,0x00018001e860) is written */
                    /* WARNING: Read-only address (ram,0x00018001e890) is written */
                    /* WARNING: Read-only address (ram,0x00018001e8b0) is written */
                    /* WARNING: Read-only address (ram,0x00018001e8c0) is written */
                    /* WARNING: Read-only address (ram,0x00018001e8d0) is written */
                    /* WARNING: Read-only address (ram,0x00018001e940) is written */
                    /* WARNING: Read-only address (ram,0x00018001e950) is written */
                    /* WARNING: Read-only address (ram,0x00018001e9e0) is written */
                    /* WARNING: Read-only address (ram,0x00018001ea30) is written */
                    /* WARNING: Read-only address (ram,0x00018001ea80) is written */
    return dVar3;
  }
  auVar13 = vpsrlq_avx(auVar5,0x34);
  auVar13 = vpsubq_avx(auVar13,_DAT_18001e890);
  auVar13 = vcvtdq2pd_avx(auVar13);
  auVar16 = vpand_avx(auVar5,_DAT_18001e860);
  if (auVar16._0_8_ == INFINITY) {
    if (dVar3 != INFINITY) {
      if (dVar3 == -INFINITY) goto LAB_180015690;
      dVar3 = (double)FUN_1800160d0(dVar3,(ulonglong)dVar3 | 0x8000000000000,3);
    }
    return dVar3;
  }
  if (0.0 < dVar3) {
    auVar16 = vpand_avx(auVar5,_DAT_18001e8b0);
    if (auVar13._0_8_ == -1023.0) {
      auVar5 = vpor_avx(auVar16,_DAT_18001e940);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar5._0_8_ - 1.0;
      auVar16 = vpsrlq_avx(auVar13,0x34);
      auVar5 = vpand_avx(auVar13,_DAT_18001e8b0);
      auVar13 = vpsubd_avx(auVar16,_DAT_18001e9e0);
      auVar13 = vcvtdq2pd_avx(auVar13);
      auVar16 = auVar5;
    }
    auVar4 = vpand_avx(auVar5,_DAT_18001e8c0);
    auVar14 = vpand_avx(auVar5,_DAT_18001e8d0);
    auVar14 = vpsllq_avx(auVar14,1);
    auVar4 = vpaddq_avx(auVar14,auVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar3 - 1.0;
    auVar14 = vpand_avx(auVar14,_DAT_18001ea30);
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
      auVar5 = vpand_avx(auVar6,_DAT_18001ea80);
      dVar10 = auVar5._0_8_;
      dVar3 = ((auVar13._0_8_ * dVar17 + auVar16._0_8_ * dVar17 * dVar17 * dVar3) - dVar7 * dVar9) +
              (dVar7 - dVar10);
      return dVar10 * 7.349550096401511e-07 + dVar3 * 7.349550096401511e-07 +
             dVar3 * 0.4342937469482422 + dVar10 * 0.4342937469482422;
    }
    uVar1 = auVar4._0_8_ >> 0x2c;
    auVar5 = vpor_avx(auVar16,_DAT_18001e950);
    auVar16 = vpor_avx(auVar4,_DAT_18001e950);
    dVar3 = (auVar16._0_8_ - auVar5._0_8_) * *(double *)(&DAT_18001faf0 + uVar1 * 8);
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
    auVar5._0_8_ = *(ulonglong *)(&DAT_18001ead0 + uVar1 * 8);
    auVar5 = vfmadd231sd_fma(auVar5,auVar13,ZEXT816(0x3fd3441350000000));
    return auVar5._0_8_ + *(double *)(&DAT_18001f2e0 + uVar1 * 8) + auVar16._0_8_;
  }
  if (dVar3 == 0.0) {
    dVar3 = (double)FUN_1800160d0(dVar3,0xfff0000000000000,1);
    return dVar3;
  }
LAB_180015690:
  dVar3 = (double)FUN_1800160d0(dVar3,0xfff8000000000000,2);
  return dVar3;
}




uint FUN_180015a5c(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else if (uVar1 == 0x8040) {
    uVar4 = 0x400;
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar2 = (MXCSR >> 8 & 1) << 5 | (MXCSR >> 7 & 1) << 4 | (MXCSR >> 9 & 1) << 3 |
          (MXCSR >> 10 & 1) << 2 | (MXCSR >> 0xb & 1) * 2 | MXCSR >> 0xc & 1;
  return uVar3 << 0x16 | uVar2 << 0x18 | uVar2 | uVar3 | uVar4;
}




uint FUN_180015b5c(void)

{
  uint uVar1;
  
  uVar1 = MXCSR & 0x3f;
  uVar1 = (uVar1 >> 1 & 1) << 5 | (uVar1 >> 2 & 1) << 3 | (uVar1 >> 3 & 1) << 2 |
          (uVar1 >> 4 & 1) * 2 | (MXCSR & 1) << 4 | uVar1 >> 5;
  return uVar1 << 0x18 | uVar1;
}




/* Library Function - Single Match
    __acrt_fenv_set_control
   
   Library: Visual Studio 2017 Release */

void __acrt_fenv_set_control(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  uVar7 = param_1 >> 2;
  uVar6 = 0x400;
  uVar2 = param_1 & 0xc00;
  uVar10 = 0x800;
  uVar5 = 0;
  if (uVar2 == 0x400) {
    uVar8 = 0x8040;
  }
  else if (uVar2 == 0x800) {
    uVar8 = 0x40;
  }
  else {
    uVar8 = uVar5;
    if (uVar2 == 0xc00) {
      uVar8 = 0x8000;
    }
  }
  uVar4 = 0x100;
  uVar9 = 0x200;
  uVar2 = (param_1 & 0xc0000000) >> 0x16;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar5 = 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar5 = 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar5 = 0x6000;
    }
  }
  uVar1 = 0;
  uVar3 = uVar1;
  if ((uVar7 & 0x400000) != 0) {
    uVar3 = 0x1000;
  }
  if ((uVar7 & 0x800000) == 0) {
    uVar10 = 0;
  }
  if ((uVar7 & 0x1000000) == 0) {
    uVar6 = 0;
  }
  if ((uVar7 & 0x2000000) == 0) {
    uVar9 = 0;
  }
  if ((uVar7 & 0x4000000) != 0) {
    uVar1 = 0x80;
  }
  if ((uVar7 & 0x8000000) == 0) {
    uVar4 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar3 | uVar10 | uVar6 | uVar9 | uVar1 | uVar4 | uVar5 | uVar8);
  return;
}




/* Library Function - Single Match
    __acrt_fenv_set_status
   
   Library: Visual Studio 2017 Release */

void __acrt_fenv_set_status(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x18 & 0x3f;
  MXCSR = MXCSR & 0xffffffc0 |
          (param_1 >> 0x18 & 1) << 5 | (uVar1 >> 1 & 1) << 4 | (uVar1 >> 2 & 1) << 3 |
          (uVar1 >> 3 & 1) << 2 | uVar1 >> 4 & 1 | (uVar1 >> 5) * 2;
  return;
}




/* Library Function - Single Match
    _clearfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __cdecl _clearfp(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = _get_fpsr();
  _fclrf();
  uVar4 = 0;
  if ((uVar1 & 0x3f) != 0) {
    uVar2 = (uVar1 & 1) << 4;
    uVar4 = uVar2 | 8;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 4;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2 | 2;
    if ((uVar1 & 0x10) == 0) {
      uVar3 = uVar2;
    }
    uVar4 = uVar3 | 1;
    if ((uVar1 & 0x20) == 0) {
      uVar4 = uVar3;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
  }
  return uVar4;
}




undefined8
FUN_180015df0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_18000ee8c(local_38);
  if ((int)uVar1 == 0) {
    _set_errno_from_matherr(param_1);
  }
  return local_18;
}




/* Library Function - Single Match
    _exception_enabled
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool _exception_enabled(uint param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
    if (((param_1 & 4) == 0) || ((param_2 >> 9 & 1) == 0)) {
      if (((param_1 & 1) == 0) || ((param_2 >> 10 & 1) == 0)) {
        if (((param_1 & 2) != 0) && ((param_2 >> 0xb & 1) != 0)) {
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




void FUN_180015f14(undefined8 param_1,uint param_2,undefined8 param_3,int param_4,uint param_5,
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
  
  local_48 = DAT_180023018 ^ (ulonglong)auStackY_118;
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
  bVar2 = FUN_18000ee64();
  if ((bVar2) && (param_4 != 0)) {
    FUN_180015df0(param_4,(ulonglong)param_6,param_1,param_7,uVar1,local_d0,(uint)local_d8);
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




/* WARNING: Removing unreachable block (ram,0x000180016079) */
/* Library Function - Single Match
    __acrt_initialize_fma3
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_fma3(void)

{
  longlong lVar1;
  byte in_XCR0;
  
  DAT_180024f5c = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    DAT_180024f5c = (uint)((in_XCR0 & 6) == 6);
  }
  DAT_180024f60 = DAT_180024f5c;
  return 0;
}




void FUN_1800160d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_1800160f0(param_1,param_2,param_3,0x1b,"log10");
  return;
}




undefined4
FUN_1800160f0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5)

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
  FUN_180015f14(param_5,param_4,param_2,iVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_mbstring::__wcsrtombs_utf8(char * __ptr64,wchar_t const * __ptr64
   * __ptr64,unsigned __int64,struct _Mbstatet * __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 __cdecl
__crt_mbstring::__wcsrtombs_utf8
          (char *param_1,wchar_t **param_2,__uint64 param_3,_Mbstatet *param_4)

{
  __uint64 _Var1;
  __uint64 extraout_RAX;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  char *pcVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_180023018 ^ (ulonglong)auStack_78;
  pwVar2 = *param_2;
  pwVar3 = pwVar2;
  local_58 = param_4;
  if (param_1 == (char *)0x0) {
    while ((_Var1 = __c16rtomb_utf8(local_50,*pwVar2,param_4), _Var1 != 0xffffffffffffffff &&
           ((_Var1 == 0 || (local_50[_Var1 - 1] != '\0'))))) {
      pwVar2 = pwVar2 + 1;
    }
  }
  else {
    while( true ) {
      pcVar4 = local_50;
      if (3 < param_3) {
        pcVar4 = param_1;
      }
      _Var1 = __c16rtomb_utf8(pcVar4,*pwVar2,local_58);
      if (_Var1 == 0xffffffffffffffff) {
        *param_2 = pwVar3;
        goto LAB_18001627e;
      }
      if (pcVar4 != param_1) {
        if (param_3 < _Var1) goto LAB_180016237;
        FUN_1800058f0((undefined8 *)param_1,(undefined8 *)pcVar4,_Var1);
      }
      if ((_Var1 != 0) && (param_1[_Var1 - 1] == '\0')) break;
      pwVar2 = pwVar2 + 1;
      if (_Var1 != 0) {
        pwVar3 = pwVar2;
      }
      param_3 = param_3 - _Var1;
      param_1 = param_1 + _Var1;
    }
    pwVar3 = (wchar16 *)0x0;
LAB_180016237:
    *param_2 = pwVar3;
  }
LAB_18001627e:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_78);
  return extraout_RAX;
}




/* Library Function - Single Match
    _get_fpsr
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _get_fpsr(void)

{
  return MXCSR;
}




void FUN_1800162d0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}




/* Library Function - Single Match
    _fclrf
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _fclrf(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return;
}




/* Library Function - Single Match
    _raise_exc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _raise_exc(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
               uint *param_6)

{
  _raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}




/* Library Function - Single Match
    _raise_exc_ex
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

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
  uVar1 = local_res8[2];
  if ((uVar1 & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
    uVar1 = local_res8[2];
  }
  if ((uVar1 & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
    uVar1 = local_res8[2];
  }
  if ((uVar1 & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
    uVar1 = local_res8[2];
  }
  if ((uVar1 & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
    uVar1 = local_res8[2];
  }
  if ((uVar1 & 1) != 0) {
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
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _clrfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}




/* Library Function - Single Match
    _ctrlfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _ctrlfp(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
  if ((DAT_180023a20 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_1800162d0(uVar2 & 0xffffffbf);
  }
  else {
    FUN_1800162d0(uVar2);
  }
  return uVar1;
}




/* Library Function - Single Match
    _set_statfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _set_statfp(uint param_1)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  FUN_1800162d0(uVar1 | param_1 & 0x3f);
  return;
}




/* Library Function - Single Match
    _statfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _statfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  return uVar1 & 0x3f;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_mbstring::__c16rtomb_utf8(char * __ptr64,char16_t,struct
   _Mbstatet * __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 __cdecl __crt_mbstring::__c16rtomb_utf8(char *param_1,wchar16 param_2,_Mbstatet *param_3)

{
  ulong *puVar1;
  __uint64 _Var2;
  _Mbstatet *p_Var3;
  undefined8 local_res18 [2];
  
  p_Var3 = (_Mbstatet *)&DAT_180024f68;
  if (param_3 != (_Mbstatet *)0x0) {
    p_Var3 = param_3;
  }
  if (*(int *)p_Var3 == 0) {
    if (0x3ff < (ushort)(param_2 + L'␀')) {
      if ((ushort)(param_2 + L'⠀') < 0x400) {
        *(uint *)p_Var3 = ((ushort)param_2 & 0x3f27ff) * 0x400 + 0x10000;
        return 0;
      }
      _Var2 = __c32rtomb_utf8(param_1,(uint)(ushort)param_2,p_Var3);
      return _Var2;
    }
  }
  else if ((ushort)(param_2 + L'␀') < 0x400) {
    local_res18[0] = 0;
    _Var2 = __c32rtomb_utf8(param_1,((ushort)param_2 & 0xffff23ff) + *(int *)p_Var3,
                            (_Mbstatet *)local_res18);
    *(undefined8 *)p_Var3 = 0;
    return _Var2;
  }
  *(undefined8 *)p_Var3 = 0;
  puVar1 = __doserrno();
  *puVar1 = 0x2a;
  return 0xffffffffffffffff;
}




/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_mbstring::__c32rtomb_utf8(char * __ptr64,char32_t,struct
   _Mbstatet * __ptr64)
   
   Library: Visual Studio 2017 Release */

__uint64 __cdecl __crt_mbstring::__c32rtomb_utf8(char *param_1,wchar32 param_2,_Mbstatet *param_3)

{
  ulong *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  if (param_1 != (char *)0x0) {
    if (param_2 != L'\0') {
      if ((param_2 & 0xffffff80U) == 0) {
        *param_1 = (char)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800U) == 0) {
        lVar3 = 1;
        bVar5 = 0xc0;
        lVar4 = lVar3;
      }
      else if ((param_2 & 0xffff0000U) == 0) {
        if ((uint)(param_2 + L'\xffff2800') < 0x800) {
LAB_18001688e:
          *(undefined8 *)param_3 = 0;
          puVar1 = __doserrno();
          *puVar1 = 0x2a;
          return 0xffffffffffffffff;
        }
        lVar3 = 2;
        bVar5 = 0xe0;
        lVar4 = lVar3;
      }
      else {
        if (((param_2 & 0xffe00000U) != 0) || (0x10ffff < (uint)param_2)) goto LAB_18001688e;
        lVar3 = 3;
        bVar5 = 0xf0;
        lVar4 = lVar3;
      }
      do {
        bVar2 = (byte)param_2;
        param_2 = (uint)param_2 >> 6;
        param_1[lVar3] = bVar2 & 0x3f | 0x80;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *param_1 = (byte)param_2 | bVar5;
      *(undefined8 *)param_3 = 0;
      return lVar4 + 1;
    }
    *param_1 = (char)param_2;
  }
  *(undefined8 *)param_3 = 0;
  return 1;
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
  
  uVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_180000000);
  p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)uVar1;
  if (uVar1 != 0) {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_180000000,(DWORD_PTR)(pTarget + -0x180000000));
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




undefined1 (*) [16] FUN_180016a74(undefined1 (*param_1) [16],uint param_2)

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
  else if (DAT_180023020 < 2) {
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




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180016cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180016cc0(void)

{
  FUN_180001010((undefined8 *)&DAT_180023b10);
  return;
}




void Unwind_180016cd0(void)

{
  _Init_thread_abort(&DAT_180023d30);
  return;
}




void FUN_180016cf4(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180016d0b(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180016d27(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(int *)*param_1,param_1);
  return;
}




bool FUN_180016dee(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0x38) != '\0';
}




void FUN_180016e06(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  *(_EXCEPTION_POINTERS **)(param_2 + 0x58) = param_1;
  ExFilterRethrow(param_1,*(EHExceptionRecord **)(param_2 + 0xb8),(int *)(param_2 + 0x20));
  return;
}




void FUN_180016ea3(undefined8 *param_1)

{
  __FrameUnwindFilter(param_1);
  return;
}




void FUN_180016eb9(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = __vcrt_getptd();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




void FUN_180016edc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_180009ee0(*(longlong *)(param_2 + 0x40));
  return;
}




void FUN_180016f07(undefined8 param_1,longlong param_2)

{
  FUN_180009ee0(*(longlong *)(param_2 + 0x30));
  return;
}




void FUN_180016f1f(undefined8 param_1,longlong param_2)

{
  FUN_180009ee0(**(longlong **)(param_2 + 0x48));
  return;
}




void FUN_180016f3a(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}




void FUN_180016f54(undefined8 *param_1)

{
  FUN_1800081d8(*(int *)*param_1);
  return;
}




void FUN_180016f6f(void)

{
  __acrt_unlock(8);
  return;
}




void FUN_180016f88(undefined8 param_1,longlong param_2)

{
  FID_conflict___acrt_lowio_lock_fh(**(uint **)(param_2 + 0x48));
  return;
}




void FUN_180016fa2(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}




void FUN_180016fbf(undefined8 param_1,longlong param_2)

{
  FID_conflict___acrt_lowio_lock_fh(*(uint *)(param_2 + 0x50));
  return;
}




void FUN_180016fd6(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}




void FUN_180016ff0(void)

{
  __acrt_unlock(7);
  return;
}




void FUN_180017009(void)

{
  __acrt_unlock(5);
  return;
}




void FUN_180017022(void)

{
  __acrt_unlock(0);
  return;
}




void FUN_180017038(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}




void FUN_180017059(void)

{
  __acrt_unlock(4);
  return;
}




void FUN_180017072(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      pbVar1 = (byte *)((&DAT_1800246b0)[(longlong)(int)**(uint **)(param_2 + 0x80) >> 6] + 0x38 +
                       (ulonglong)(**(uint **)(param_2 + 0x80) & 0x3f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    FID_conflict___acrt_lowio_lock_fh(**(uint **)(param_2 + 0x80));
  }
  return;
}




void Unwind_1800170c5(undefined8 param_1,longlong param_2)

{
  FUN_180006920((longlong *)(param_2 + 0x58));
  return;
}




bool FUN_180017100(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



