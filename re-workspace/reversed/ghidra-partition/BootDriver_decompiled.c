
void FUN_180001030(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001eaa8,L"../res/urls.ini");
  atexit(FUN_180011f10);
  return;
}




void FUN_180001060(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001eb08,L"ConfigFileURL");
  atexit(FUN_180011f30);
  return;
}




void FUN_180001090(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001ea28,L"Windows_Trial_English");
  atexit(FUN_180011f50);
  return;
}




void FUN_1800010c0(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001eb48,L"EuNetConfigTemp");
  atexit(FUN_180011f70);
  return;
}




void FUN_1800010f0(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001eb28,L".ini");
  atexit(FUN_180011f90);
  return;
}




void FUN_180001120(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001eae8,L"LinuxPEimageTemp");
  atexit(FUN_180011fb0);
  return;
}




void FUN_180001150(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001eac8,L".iso");
  atexit(FUN_180011fd0);
  return;
}




void FUN_180001180(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001ea88,L"LinuxPEImageDownload");
  atexit(FUN_180011ff0);
  return;
}




void FUN_1800011b0(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001ea08,L"LinuxPEWebLink");
  atexit(FUN_180012010);
  return;
}




void FUN_1800011e0(void)

{
  basic_string<>((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                  *)&DAT_18001ea68,L"LinuxPEFileMD5");
  atexit(FUN_180012030);
  return;
}




void FUN_180001210(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return;
}




undefined8 * FUN_180001230(undefined8 *param_1,uint param_2)

{
  FUN_180001210(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180001270(undefined8 *param_1)

{
  *param_1 = ITbCreator::vftable;
  FUN_180001210(param_1);
  return;
}




undefined8 * FUN_1800012a0(undefined8 *param_1,uint param_2)

{
  FUN_180001270(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800012e0(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_158 [32];
  HMODULE local_138;
  FARPROC local_130;
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_158;
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




undefined4 * FUN_1800013e0(undefined4 *param_1)

{
  *param_1 = 0x4b424d43;
  *(undefined2 *)((longlong)param_1 + 0x12) = 0;
  return param_1;
}




longlong FUN_180001410(longlong param_1)

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




LPCRITICAL_SECTION FUN_180001450(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}




void FUN_180001480(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}




void FUN_1800014a0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return;
}




void FUN_1800014c0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}




undefined8 FUN_1800014e0(void)

{
  return 0;
}




undefined8 FUN_180001500(void)

{
  return 0;
}




void FUN_180001520(undefined8 *param_1)

{
  *param_1 = IOperate::vftable;
  FUN_180001210(param_1);
  return;
}




undefined8 * FUN_180001550(undefined8 *param_1,uint param_2)

{
  FUN_180001520(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180001590(undefined8 *param_1)

{
  *param_1 = CUICallBack::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




/* Library Function - Single Match
    public: virtual __cdecl std::ios_base::~ios_base(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

void __thiscall std::ios_base::~ios_base(ios_base *this)

{
  *(undefined ***)this = CUICallBack::vftable;
  FUN_180001730((longlong)this);
  return;
}




void FUN_180001630(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_180001650(longlong param_1,undefined1 *param_2,uint param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined4 local_38;
  
  local_38 = 0;
  if (((param_2 == (undefined1 *)0x0) || (param_3 < *(uint *)(param_2 + 0xc))) ||
     (*(uint *)(param_2 + 8) < 0xb8)) {
    local_38 = 0x4311409;
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      free(*(void **)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    pvVar1 = operator_new((ulonglong)param_3);
    *(void **)(param_1 + 0x20) = pvVar1;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_38 = 0x5011408;
    }
    else {
      puVar3 = *(undefined1 **)(param_1 + 0x20);
      for (uVar2 = (ulonglong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return local_38;
}




void FUN_180001730(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}




void FUN_1800017a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}




undefined8
FUN_180001b60(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    uVar1 = 0x13211409;
  }
  else if ((*(longlong *)(param_5 + 0x18) == 0) || (*(longlong *)(param_5 + 0x10) == 0)) {
    uVar1 = 0x13611406;
  }
  else {
    uVar1 = (**(code **)(param_5 + 0x18))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 0x10));
  }
  return uVar1;
}




ios_base * FUN_180001be0(ios_base *param_1,uint param_2)

{
  std::ios_base::~ios_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined4 * FUN_180001c20(undefined4 *param_1)

{
  FUN_1800013e0(param_1);
  return param_1;
}




bool TBCanUnloadNow(void)

{
                    /* 0x1c40  7  TBCanUnloadNow */
  return DAT_18001ea00 == 0;
}




int TBCreateObject(uint param_1,int param_2,longlong *param_3)

{
  int local_18;
  
                    /* 0x1c70  8  TBCreateObject */
  if (param_3 == (longlong *)0x0) {
    local_18 = 0xf11409;
  }
  else {
    local_18 = 0;
    if (param_1 < 0x10001) {
      if (param_2 == 0x11400) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 4) < DAT_18001eb70) &&
           (_Init_thread_header(&DAT_18001eb70), DAT_18001eb70 == -1)) {
          FUN_180003100((undefined8 *)&DAT_18001eb78,0x11400);
          atexit(FUN_180011ed0);
          _Init_thread_footer(&DAT_18001eb70);
        }
        *param_3 = (longlong)&DAT_18001eb78;
      }
      else {
        local_18 = 0x1111406;
      }
      if ((local_18 == 0) && (*param_3 == 0)) {
        local_18 = 0x1111408;
      }
      if (local_18 == 0) {
        LOCK();
        DAT_18001ea00 = DAT_18001ea00 + 1;
        UNLOCK();
      }
    }
    else {
      local_18 = 0xf11402;
    }
  }
  return local_18;
}




void FUN_180001d80(undefined8 *param_1)

{
  FUN_180002fa0(param_1);
  return;
}




CResetPropExchange * GetBootDriverImp(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_20;
  
                    /* 0x1da0  5  GetBootDriverImp */
  pCVar1 = (CResetPropExchange *)operator_new(0x878);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_20 = (CResetPropExchange *)0x0;
  }
  else {
    local_20 = FUN_180001fe0(pCVar1);
  }
  return local_20;
}




void DeleteGetBootDriverImp(undefined8 *param_1)

{
                    /* 0x1e00  4  DeleteGetBootDriverImp */
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  return;
}




void SetBootDriverCallBack(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* 0x1e30  6  SetBootDriverCallBack */
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  }
  return;
}




undefined4
BootDriverExcute(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  
                    /* 0x1e80  1  BootDriverExcute */
  local_18 = 0x3011401;
  if (param_1 != (longlong *)0x0) {
    local_18 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
  }
  return local_18;
}




void BootDriverGetProgressInfo(longlong *param_1,undefined8 param_2)

{
                    /* 0x1ee0  2  BootDriverGetProgressInfo */
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return;
}




uint CheckFormat(undefined4 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  undefined1 *local_res10;
  uint local_18;
  
                    /* 0x1f20  3  CheckFormat */
  local_18 = 0x4011401;
  if (param_2 != (undefined1 *)0x0) {
    local_res8[0] = param_1;
    local_res10 = param_2;
    plVar1 = (longlong *)FUN_1800034c0("Boot");
    if (plVar1 == (longlong *)0x0) {
      local_18 = 0x4b1140a;
    }
    else {
      local_18 = (**(code **)(*plVar1 + 0x20))(plVar1,1,0,0);
      if ((local_18 & 0xfff) == 0) {
        local_18 = (**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
        *local_res10 = 0x40;
      }
    }
  }
  return local_18;
}




CResetPropExchange * FUN_180001fe0(CResetPropExchange *param_1)

{
  CResetPropExchange::CResetPropExchange(param_1);
  *(undefined ***)param_1 = CBootDriver::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_180001590((undefined8 *)(param_1 + 0x20));
  FUN_180003b90((undefined8 *)(param_1 + 0x48));
  FUN_18000ed60((undefined8 *)(param_1 + 0x2f0));
  FUN_18000c340((undefined8 *)(param_1 + 0x598));
  *(undefined4 *)(param_1 + 0x840) = 0;
  *(undefined4 *)(param_1 + 0x844) = 0;
  FUN_180001450((LPCRITICAL_SECTION)(param_1 + 0x850));
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0;
  return param_1;
}




undefined8 * FUN_1800020d0(undefined8 *param_1,uint param_2)

{
  FUN_180002110(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180002110(undefined8 *param_1)

{
  *param_1 = CBootDriver::vftable;
  FUN_180001480((LPCRITICAL_SECTION)(param_1 + 0x10a));
  FUN_18000c3c0(param_1 + 0xb3);
  FUN_18000edf0(param_1 + 0x5e);
  FUN_180003c30(param_1 + 9);
  std::ios_base::~ios_base((ios_base *)(param_1 + 4));
  FUN_180003140(param_1);
  return;
}




undefined4 FUN_1800021a0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x844) == 0) {
    FUN_180003d20(param_1 + 0x48);
    FUN_18000eee0(param_1 + 0x2f0);
    FUN_18000c4b0(param_1 + 0x598);
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(undefined4 *)(param_1 + 0x84c) = 0;
    *(undefined4 *)(param_1 + 0x844) = 1;
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  return 0;
}




undefined4 FUN_1800022a0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x844) == 0) {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  else {
    FUN_180003e30(param_1 + 0x48);
    FUN_18000efc0(param_1 + 0x2f0);
    FUN_18000c600(param_1 + 0x598);
    *(undefined4 *)(param_1 + 0x844) = 0;
  }
  return 0;
}




undefined4 FUN_180002380(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_38;
  
  local_38 = 0;
  if (param_2 == 0) {
    local_38 = 0x9411409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x9411409,0x94);
    }
  }
  else {
    FUN_1800017a0(param_1 + 0x20,param_2,param_3);
    (*(code *)**(undefined8 **)(param_1 + 0x48))(param_1 + 0x48,&LAB_1800017d0,param_1 + 0x20);
    (*(code *)**(undefined8 **)(param_1 + 0x2f0))(param_1 + 0x2f0,&LAB_1800017d0,param_1 + 0x20);
    (*(code *)**(undefined8 **)(param_1 + 0x598))(param_1 + 0x598,&LAB_1800017d0,param_1 + 0x20);
  }
  return local_38;
}




uint FUN_1800024e0(longlong param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong local_a0;
  
  uVar5 = 0;
  iVar1 = FUN_180002d00(param_1,1);
  if (iVar1 == 0) {
    uVar4 = 0xa51141a;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",uVar4,uVar4 >> 0x14);
    }
  }
  else {
    uVar4 = FUN_1800021a0(param_1);
    if ((uVar4 & 0xfff) == 0) {
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"CBootDriver Execute Start!");
      }
      if (param_2 == (undefined1 *)0x0) {
        uVar4 = 0xac11409;
        plVar2 = (longlong *)FUN_1800033f0();
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))
                    (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",uVar4,uVar4 >> 0x14);
        }
      }
      else {
        FUN_180001650(param_1 + 0x20,param_2,param_3);
        lVar3 = FUN_180001410((longlong)param_2);
        if (lVar3 == 0) {
          uVar4 = 0xb11140c;
          plVar2 = (longlong *)FUN_1800033f0();
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x30))
                      (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",uVar4,uVar4 >> 0x14);
          }
        }
        else {
          FUN_180001630(param_1 + 0x20,*(uint *)(lVar3 + 0x1658) & 1);
          *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(lVar3 + 0x165c);
          plVar2 = (longlong *)FUN_1800033f0();
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x30))
                      (plVar2,1,0x11400,L"CBootDriver BootType:%d, nDriver:%d",
                       *(undefined4 *)(lVar3 + 0x165c),*(undefined4 *)(lVar3 + 0x1664));
          }
          local_a0 = -1;
          do {
            local_a0 = local_a0 + 1;
          } while (*(short *)(lVar3 + 0x1668 + local_a0 * 2) != 0);
          if ((int)local_a0 == 0) {
            uVar4 = 0xba11484;
            plVar2 = (longlong *)FUN_1800033f0();
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x30))
                        (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",uVar4,uVar4 >> 0x14
                        );
            }
          }
          else {
            if (*(int *)(lVar3 + 0x165c) == 0) {
              uVar4 = (**(code **)(*(longlong *)(param_1 + 0x48) + 8))
                                (param_1 + 0x48,param_2,param_3);
            }
            else if (*(int *)(lVar3 + 0x165c) == 1) {
              uVar4 = (**(code **)(*(longlong *)(param_1 + 0x2f0) + 8))
                                (param_1 + 0x2f0,param_2,param_3,param_4);
            }
            else {
              uVar4 = 0xca11406;
            }
            if (((uVar4 & 0xfff) != 0) &&
               (plVar2 = (longlong *)FUN_1800033f0(), plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x30))
                        (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",uVar4,uVar4 >> 0x14
                        );
            }
          }
        }
      }
    }
    else {
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))
                  (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",uVar4,uVar4 >> 0x14,uVar4
                   ,uVar5);
      }
    }
  }
  FUN_1800022a0(param_1);
  plVar2 = (longlong *)FUN_1800033f0();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"CBootDriver Execute End! Err = 0x%x",uVar4);
  }
  FUN_180002d00(param_1,0);
  return uVar4;
}




uint FUN_180002ac0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint local_48;
  
  if (param_2 == 0) {
    local_48 = 0xdd11409;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0xdd11409,0xdd);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x840);
    if (iVar1 == 0) {
      local_48 = (**(code **)(*(longlong *)(param_1 + 0x48) + 0x10))(param_1 + 0x48,param_2);
    }
    else if (iVar1 == 1) {
      local_48 = (**(code **)(*(longlong *)(param_1 + 0x2f0) + 0x10))(param_1 + 0x2f0,param_2);
    }
    else if (iVar1 == 2) {
      local_48 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0x10))(param_1 + 0x598,param_2);
    }
    else {
      local_48 = 0xed11406;
    }
    if (((local_48 & 0xfff) != 0) &&
       (plVar2 = (longlong *)FUN_1800033f0(), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_48,local_48 >> 0x14);
    }
  }
  return local_48;
}




undefined4 FUN_180002cb0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  FUN_180002f60(local_10,param_1 + 0x850);
  uVar1 = *(undefined4 *)(param_1 + 0x84c);
  FUN_180002f30(local_10);
  return uVar1;
}




undefined4 FUN_180002d00(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  FUN_180002f60(local_10,param_1 + 0x850);
  if (*(int *)(param_1 + 0x848) == 0) {
    *(undefined4 *)(param_1 + 0x84c) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x84c) = 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x84c);
  FUN_180002f30(local_10);
  return uVar1;
}




void FUN_180002d80(longlong param_1,undefined4 param_2)

{
  undefined8 local_18 [3];
  
  FUN_180002f60(local_18,param_1 + 0x850);
  *(undefined4 *)(param_1 + 0x848) = param_2;
  FUN_180002f30(local_18);
  return;
}




uint FUN_180002dd0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint local_38;
  
  FUN_180002d80(param_1,1);
  if (*(int *)(param_1 + 0x840) == 1) {
    local_38 = (**(code **)(*(longlong *)(param_1 + 0x2f0) + 0x18))(param_1 + 0x2f0);
  }
  else if (*(int *)(param_1 + 0x840) == 2) {
    local_38 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0x18))(param_1 + 0x598);
  }
  else {
    local_38 = 0x12511406;
  }
  if (((local_38 & 0xfff) != 0) && (plVar2 = (longlong *)FUN_1800033f0(), plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x30))
              (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_38,local_38 >> 0x14);
  }
  while (iVar1 = FUN_180002cb0(param_1), iVar1 != 0) {
    Sleep(100);
  }
  FUN_180002d80(param_1,0);
  return local_38;
}




undefined8 FUN_180002f20(void)

{
  return 0x13411401;
}




void FUN_180002f30(undefined8 *param_1)

{
  FUN_1800014c0((LPCRITICAL_SECTION)*param_1);
  return;
}




undefined8 * FUN_180002f60(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_1800014a0((LPCRITICAL_SECTION)*param_1);
  return param_1;
}




void FUN_180002fa0(undefined8 *param_1)

{
  *param_1 = CTbBaseCreator<class_IOperate>::vftable;
  FUN_180001270(param_1);
  return;
}




undefined8 FUN_180002fd0(void)

{
  return 0;
}




undefined4 FUN_180002fe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




CResetPropExchange * FUN_180002ff0(void)

{
  CResetPropExchange *pCVar1;
  undefined8 local_38;
  
  pCVar1 = (CResetPropExchange *)operator_new(0x878);
  if (pCVar1 == (CResetPropExchange *)0x0) {
    local_38 = (CResetPropExchange *)0x0;
  }
  else {
    local_38 = FUN_180001fe0(pCVar1);
  }
  if (local_38 != (CResetPropExchange *)0x0) {
    LOCK();
    DAT_18001ea00 = DAT_18001ea00 + 1;
    UNLOCK();
  }
  return local_38;
}




undefined8 FUN_180003090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x431140a;
  }
  else {
    uVar1 = 0x4411406;
  }
  return uVar1;
}




undefined8 FUN_1800030c0(void)

{
  LOCK();
  DAT_18001ea00 = DAT_18001ea00 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_1800030e0(void)

{
  LOCK();
  DAT_18001ea00 = DAT_18001ea00 + -1;
  UNLOCK();
  return 0;
}




undefined8 * FUN_180003100(undefined8 *param_1,undefined4 param_2)

{
  FUN_180003300(param_1);
  *param_1 = CTbCreator<class_IOperate,class_CBootDriver>::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  return param_1;
}




void FUN_180003140(undefined8 *param_1)

{
  *param_1 = CInterfaceImpl<class_IOperate>::vftable;
  FUN_180001520(param_1);
  return;
}




/* Library Function - Single Match
    public: __cdecl CResetPropExchange::CResetPropExchange(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CResetPropExchange * __thiscall CResetPropExchange::CResetPropExchange(CResetPropExchange *this)

{
  FUN_180003370((undefined8 *)this);
  *(undefined ***)this = CInterfaceImpl<class_IOperate>::vftable;
  *(undefined4 *)(this + 8) = 1;
  return this;
}




undefined8 FUN_1800031b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x2d1140a;
  }
  else {
    uVar1 = 0x2f11406;
  }
  return uVar1;
}




undefined8 FUN_1800031e0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  DAT_18001ea00 = DAT_18001ea00 + 1;
  UNLOCK();
  return 0;
}




undefined8 FUN_180003200(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  LOCK();
  DAT_18001ea00 = DAT_18001ea00 + -1;
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




undefined8 * FUN_180003280(undefined8 *param_1,uint param_2)

{
  FUN_180002fa0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800032c0(undefined8 *param_1,uint param_2)

{
  FUN_180001d80(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003300(undefined8 *param_1)

{
  FUN_1800033a0(param_1);
  *param_1 = CTbBaseCreator<class_IOperate>::vftable;
  return param_1;
}




undefined8 * FUN_180003330(undefined8 *param_1,uint param_2)

{
  FUN_180003140(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003370(undefined8 *param_1)

{
  FUN_1800033d0(param_1);
  *param_1 = IOperate::vftable;
  return param_1;
}




undefined8 * FUN_1800033a0(undefined8 *param_1)

{
  FUN_1800033d0(param_1);
  *param_1 = ITbCreator::vftable;
  return param_1;
}




undefined8 * FUN_1800033d0(undefined8 *param_1)

{
  *param_1 = ITBCommon::vftable;
  return param_1;
}




longlong FUN_1800033f0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *local_18 [3];
  
  lVar3 = DAT_18001e9f8;
  if (DAT_18001e9f8 == 0) {
    local_18[0] = (undefined8 *)0x0;
    iVar1 = FUN_1800035d0("CodeLog",0x1800,local_18);
    if (iVar1 == 0) {
      plVar2 = (longlong *)
               __RTDynamicCast(local_18[0],0,&ITbCreator::RTTI_Type_Descriptor,
                               &CTbBaseCreator<class_ILog>::RTTI_Type_Descriptor,0);
      if ((plVar2 != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0x1800)) {
        DAT_18001e9f8 = (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      (**(code **)*local_18[0])(local_18[0]);
      lVar3 = DAT_18001e9f8;
    }
    else {
      lVar3 = 0;
    }
  }
  return lVar3;
}




undefined8 FUN_1800034c0(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = FUN_180003690(param_1,0x12400,&local_28);
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
    local_20 = (longlong *)FUN_1800033f0();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x11400,L"Failed to Load lib (Err=0x%x) %S",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




undefined4 FUN_1800035d0(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18001e9d8) {
    _Init_thread_header(&DAT_18001e9d8);
    if (DAT_18001e9d8 == -1) {
      DAT_18001e9e0 = (code *)FUN_1800012e0(param_1,&local_20);
      _Init_thread_footer(&DAT_18001e9d8);
    }
  }
  if (DAT_18001e9e0 == (code *)0x0) {
    uVar1 = 0x12411402;
  }
  else {
    uVar1 = (*DAT_18001e9e0)(0x10000,param_2,param_3);
  }
  return uVar1;
}




undefined4 FUN_180003690(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18001e9e8) {
    _Init_thread_header(&DAT_18001e9e8);
    if (DAT_18001e9e8 == -1) {
      DAT_18001e9f0 = (code *)FUN_1800012e0(param_1,&local_20);
      _Init_thread_footer(&DAT_18001e9e8);
    }
  }
  if (DAT_18001e9f0 == (code *)0x0) {
    uVar1 = 0x12411402;
  }
  else {
    uVar1 = (*DAT_18001e9f0)(0x10000,param_2,param_3);
  }
  return uVar1;
}




void FUN_180003750(__time64_t *param_1)

{
  _time64(param_1);
  return;
}




undefined8 * FUN_180003770(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = param_1 + 4;
  for (lVar1 = 600; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  return param_1;
}




void FUN_1800037b0(void)

{
  return;
}




void FUN_1800037c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_180003750(param_1 + 1);
  *param_1 = param_1[1];
  puVar2 = param_1 + 4;
  for (lVar1 = 600; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  *(undefined4 *)(param_1 + 4) = 0x46425342;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 6) = 1000;
  return;
}




__time64_t * FUN_180003830(__time64_t *param_1)

{
  __time64_t local_18 [3];
  
  FUN_180003750(local_18);
  if (*(int *)((longlong)param_1 + 0x54) == 4) {
    *(int *)(param_1 + 6) = ((int)local_18[0] - (int)*param_1) * 1000 + (int)param_1[6];
  }
  *param_1 = local_18[0];
  return param_1 + 4;
}




undefined8 FUN_1800038a0(longlong param_1,LPWSTR param_2,uint param_3)

{
  WCHAR WVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_38;
  LPWSTR local_30;
  longlong local_28;
  longlong local_20;
  
  DVar2 = GetModuleFileNameW((HMODULE)0x0,param_2,0x110);
  if (DVar2 == 0) {
    uVar3 = 0x8611602;
  }
  else {
    local_28 = -1;
    do {
      local_28 = local_28 + 1;
    } while (param_2[local_28] != L'\0');
    for (local_38 = (int)local_28; param_2[local_38] != L'\\'; local_38 = local_38 + -1) {
      param_2[local_38] = L'\0';
    }
    local_20 = -1;
    do {
      local_20 = local_20 + 1;
    } while (*(short *)(param_1 + local_20 * 2) != 0);
    if ((ulonglong)(local_20 + local_38) < (ulonglong)param_3) {
      local_30 = param_2 + -1;
      do {
        local_30 = local_30 + 1;
      } while (*local_30 != L'\0');
      lVar4 = 0;
      do {
        WVar1 = *(WCHAR *)(param_1 + lVar4 * 2);
        local_30[lVar4] = WVar1;
        lVar4 = lVar4 + 1;
      } while (WVar1 != L'\0');
      uVar3 = 0;
    }
    else {
      uVar3 = 0x901140d;
    }
  }
  return uVar3;
}




void FUN_1800039e0(longlong param_1,uint param_2)

{
  undefined4 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res10 = param_2;
  if (param_2 < 0x65) {
    local_18 = param_2;
    if (param_2 <= *(uint *)(param_1 + 0x34)) {
      local_18 = *(uint *)(param_1 + 0x34);
    }
    local_res10 = local_18;
  }
  if (local_res10 < 100) {
    local_14 = local_res10;
  }
  else {
    local_14 = 100;
  }
  *(uint *)(param_1 + 0x34) = local_14;
  return;
}




void FUN_180003a50(longlong param_1,uint param_2)

{
  undefined4 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res10 = param_2;
  if (param_2 < 0x65) {
    local_18 = param_2;
    if (param_2 <= *(uint *)(param_1 + 0x38)) {
      local_18 = *(uint *)(param_1 + 0x38);
    }
    local_res10 = local_18;
  }
  if (local_res10 < 100) {
    local_14 = local_res10;
  }
  else {
    local_14 = 100;
  }
  *(uint *)(param_1 + 0x38) = local_14;
  return;
}




void FUN_180003ac0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}




void FUN_180003ae0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_180003b00(longlong param_1,wchar_t *param_2)

{
  wcscpy_s((wchar_t *)(param_1 + 0x70),0x104,param_2);
  return;
}




void FUN_180003b30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_180003b50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_180003b70(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}




undefined8 * FUN_180003b90(undefined8 *param_1)

{
  *param_1 = CBurnBootCD::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_180003770(param_1 + 4);
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  return param_1;
}




void FUN_180003c30(undefined8 *param_1)

{
  *param_1 = CBurnBootCD::vftable;
  FUN_1800037b0();
  return;
}




undefined4 FUN_180003c60(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_28;
  
  local_28 = 0;
  if (param_2 == 0) {
    local_28 = 0x2811409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x2811409,0x28);
    }
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  return local_28;
}




undefined4 FUN_180003d20(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    FUN_1800037c0((undefined8 *)(param_1 + 0x20));
    FUN_180003ac0(param_1 + 0x20,3);
    FUN_180003b30(param_1 + 0x20,1);
    FUN_180003b50(param_1 + 0x20,1);
    *(undefined4 *)(param_1 + 0x29c) = 1;
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  return 0;
}




undefined4 FUN_180003e30(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  return 0;
}




void FUN_180003ef0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_518 [32];
  uint local_4e8;
  undefined4 local_4e4;
  WCHAR local_458 [272];
  WCHAR local_238 [272];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_518;
  pWVar5 = local_458;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_238;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  FUN_1800038a0(0x180013828,local_238,0x110);
  if (param_2 == 0) {
    local_4e8 = 0xa011409;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    FUN_180003ac0((longlong)(param_1 + 4),4);
    FUN_180003b70((longlong)(param_1 + 4),*(undefined4 *)(param_2 + 4));
    lVar4 = FUN_180001410(param_2);
    if (lVar4 == 0) {
      local_4e8 = 0xa711409;
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
      }
    }
    else if (((*(uint *)(lVar4 + 0x1658) >> 2 & 1) == 0) ||
            (local_4e8 = FUN_180009600(param_1[1],param_1[2],(longlong)(param_1 + 4),
                                       (char *)((longlong)param_1 + 0x2a4)),
            (local_4e8 & 0xfff) == 0)) {
      lVar3 = FUN_180005a40("Burn");
      param_1[3] = lVar3;
      if (param_1[3] == 0) {
        local_4e8 = 0xb11140a;
        plVar2 = (longlong *)FUN_1800033f0();
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
        }
      }
      else {
        local_4e8 = (**(code **)(*(longlong *)param_1[3] + 0x20))
                              (param_1[3],*(undefined4 *)(lVar4 + 0x1664));
        if ((local_4e8 & 0xfff) == 0) {
          *(undefined4 *)(param_1 + 0x54) = 1;
          GetPrivateProfileStringW(L"BootDriver",L"CDInit",(LPCWSTR)0x0,local_458,0x110,local_238);
          FUN_1800055e0(param_1,local_458);
          local_4e8 = FUN_180004af0((longlong)param_1,lVar4);
          if ((local_4e8 & 0xfff) == 0) {
            pWVar5 = local_458;
            for (lVar3 = 0x110; lVar3 != 0; lVar3 = lVar3 + -1) {
              *(undefined1 *)pWVar5 = 0;
              pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
            }
            GetPrivateProfileStringW
                      (L"BootDriver",L"CDBurnRuning",(LPCWSTR)0x0,local_458,0x110,local_238);
            FUN_1800055e0(param_1,local_458);
            local_4e8 = FUN_1800053c0((longlong)param_1,lVar4);
            if ((local_4e8 & 0xfff) == 0) {
              pWVar5 = local_458;
              for (lVar4 = 0x110; lVar4 != 0; lVar4 = lVar4 + -1) {
                *(undefined1 *)pWVar5 = 0;
                pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
              }
              GetPrivateProfileStringW
                        (L"BootDriver",L"CDSuccess",(LPCWSTR)0x0,local_458,0x110,local_238);
              FUN_1800055e0(param_1,local_458);
            }
            else {
              plVar2 = (longlong *)FUN_1800033f0();
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x30))
                          (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
              }
            }
          }
          else {
            plVar2 = (longlong *)FUN_1800033f0();
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d")
              ;
            }
          }
        }
        else {
          plVar2 = (longlong *)FUN_1800033f0();
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
          }
        }
      }
    }
    else {
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
      }
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(longlong *)param_1[3] + 0x28))(param_1[3]);
    (*(code *)**(undefined8 **)param_1[3])(param_1[3]);
    param_1[3] = 0;
  }
  FUN_180003ae0((longlong)(param_1 + 4),local_4e8);
  iVar1 = FUN_1800048e0((longlong)param_1);
  if (iVar1 == 0) {
    local_4e4 = 5;
  }
  else {
    local_4e4 = 2;
  }
  FUN_180003ac0((longlong)(param_1 + 4),local_4e4);
  *(undefined4 *)(param_1 + 0x53) = 0;
  plVar2 = (longlong *)FUN_1800033f0();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"CBurnBootCD Execute End! Err = %d");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_518);
  return;
}




uint FUN_180004640(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  __time64_t *p_Var2;
  longlong lVar3;
  uint local_48;
  
  if (param_2 == (undefined1 *)0x0) {
    local_48 = 0xd911409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0xd911409,0xd9);
    }
  }
  else {
    local_48 = FUN_180004900(param_1);
    if ((local_48 & 0xfff) == 0) {
      p_Var2 = FUN_180003830((__time64_t *)(param_1 + 0x20));
      for (lVar3 = 600; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_2 = (char)*p_Var2;
        p_Var2 = (__time64_t *)((longlong)p_Var2 + 1);
        param_2 = param_2 + 1;
      }
    }
    else {
      plVar1 = (longlong *)FUN_1800033f0();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))
                  (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_48,local_48 >> 0x14
                  );
      }
    }
  }
  return local_48;
}




uint FUN_180004790(longlong param_1)

{
  longlong *plVar1;
  uint local_38;
  
  *(undefined1 *)(param_1 + 0x2a4) = 1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_38 = 0xe911405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0xe911405,0xe9);
    }
  }
  else {
    local_38 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))
                         (*(undefined8 *)(param_1 + 0x18));
    if (((local_38 & 0xfff) != 0) &&
       (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_38,local_38 >> 0x14);
    }
  }
  *(undefined4 *)(param_1 + 0x298) = 1;
  return local_38;
}




undefined8 FUN_1800048d0(void)

{
  return 0xf711401;
}




undefined4 FUN_1800048e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x298);
}




void FUN_180004900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined1 auStack_288 [32];
  uint local_268;
  uint local_260;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  longlong *local_248;
  longlong local_240;
  __time64_t *local_238;
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_288;
  local_254 = 0;
  local_238 = FUN_180003830((__time64_t *)(param_1 + 0x20));
  pwVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pwVar3 = 0;
    pwVar3 = (wchar_t *)((longlong)pwVar3 + 1);
  }
  iVar1 = FUN_1800048e0(param_1);
  if (iVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x2a0) != 0)) {
      local_258 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
                            (*(undefined8 *)(param_1 + 0x18));
      local_250 = local_258;
      if (99 < local_258) {
        local_250 = 100;
      }
      FUN_1800039e0(param_1 + 0x20,local_250);
      if (local_258 < 100) {
        local_24c = local_258;
      }
      else {
        local_24c = 100;
      }
      FUN_180003a50(param_1 + 0x20,local_24c);
      (**(code **)(**(longlong **)(param_1 + 0x18) + 200))
                (*(undefined8 *)(param_1 + 0x18),local_228);
      FUN_180003b00(param_1 + 0x20,local_228);
    }
    Sleep(500);
  }
  else {
    local_254 = 0x10611429;
    local_248 = (longlong *)FUN_1800033f0();
    if (local_248 != (longlong *)0x0) {
      local_260 = local_254 >> 0x14;
      local_240 = *local_248;
      local_268 = local_254;
      (**(code **)(local_240 + 0x30))(local_248,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_288);
  return;
}




void FUN_180004af0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  uint local_310;
  int local_308;
  uint local_2f8;
  int local_2f4;
  int local_2f0;
  uint local_2ec;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  WCHAR local_238 [272];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_338;
  local_2f8 = 0;
  local_2f4 = 0;
  local_2ec = 0;
  local_290 = 0;
  local_2f0 = 0;
  pWVar3 = local_238;
  for (lVar2 = 0x220; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  FUN_1800038a0(0x180013a68,local_238,0x110);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_2f8 = 0x12711405;
    local_2e8 = (longlong *)FUN_1800033f0();
    if (local_2e8 != (longlong *)0x0) {
      local_310 = local_2f8 >> 0x14;
      local_288 = *local_2e8;
      local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
      (**(code **)(local_288 + 0x30))(local_2e8,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else if (param_2 == 0) {
    local_2f8 = 0x12811409;
    local_2e0 = (longlong *)FUN_1800033f0();
    if (local_2e0 != (longlong *)0x0) {
      local_310 = local_2f8 >> 0x14;
      local_280 = *local_2e0;
      local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
      (**(code **)(local_280 + 0x30))(local_2e0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    do {
      local_2f8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))
                            (*(undefined8 *)(param_1 + 0x18));
      if ((local_2f8 & 0xfff) != 0) {
        local_2d8 = (longlong *)FUN_1800033f0();
        if (local_2d8 != (longlong *)0x0) {
          local_310 = local_2f8 >> 0x14;
          local_278 = *local_2d8;
          local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
          (**(code **)(local_278 + 0x30))
                    (local_2d8,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
        }
        break;
      }
      local_2f8 = FUN_180005900(param_1);
      if ((local_2f8 & 0xfff) == 0) {
        local_318 = &local_290;
        local_2f8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                              (*(undefined8 *)(param_1 + 0x18),&local_2f4,&local_2ec,&local_2f0);
        local_2c8 = (longlong *)FUN_1800033f0();
        if (local_2c8 != (longlong *)0x0) {
          local_308 = local_2f0;
          local_310 = local_2ec;
          local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f4);
          (**(code **)(*local_2c8 + 0x30))
                    (local_2c8,1,0x11400,
                     L"BurnBootCD GetDiscInfo : nIsBlank=%d, nIsWritable=%d, DiskType=%d");
        }
        if ((local_2f8 & 0xfff) == 0) {
          if (local_2f4 == 0) {
            local_2f8 = 0x13811441;
            uVar1 = FUN_1800059f0(param_1,local_2f0);
            if ((int)uVar1 != 0) {
              local_2f8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                                    (*(undefined8 *)(param_1 + 0x18));
              local_2f8 = FUN_180005900(param_1);
              if ((local_2f8 & 0xfff) == 0) {
                local_318 = &local_290;
                local_2f8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                                      (*(undefined8 *)(param_1 + 0x18),&local_2f4,&local_2ec,
                                       &local_2f0);
                if ((local_2f8 & 0xfff) == 0) {
                  if (local_2ec == 1) {
                    if (local_2f4 != 1) {
                      local_2f8 = 0x15f11441;
                      local_2a0 = (longlong *)FUN_1800033f0();
                      if (local_2a0 != (longlong *)0x0) {
                        local_310 = local_2f8 >> 0x14;
                        local_248 = *local_2a0;
                        local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
                        (**(code **)(local_248 + 0x30))
                                  (local_2a0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
                      }
                    }
                  }
                  else {
                    local_2f8 = 0x15e11441;
                    local_2a8 = (longlong *)FUN_1800033f0();
                    if (local_2a8 != (longlong *)0x0) {
                      local_310 = local_2f8 >> 0x14;
                      local_250 = *local_2a8;
                      local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
                      (**(code **)(local_250 + 0x30))
                                (local_2a8,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
                    }
                  }
                }
                else {
                  local_2b0 = (longlong *)FUN_1800033f0();
                  if (local_2b0 != (longlong *)0x0) {
                    local_310 = local_2f8 >> 0x14;
                    local_258 = *local_2b0;
                    local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
                    (**(code **)(local_258 + 0x30))
                              (local_2b0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
                  }
                }
              }
              else {
                local_2b8 = (longlong *)FUN_1800033f0();
                if (local_2b8 != (longlong *)0x0) {
                  local_310 = local_2f8 >> 0x14;
                  local_260 = *local_2b8;
                  local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
                  (**(code **)(local_260 + 0x30))
                            (local_2b8,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
                }
              }
            }
          }
        }
        else {
          local_2c0 = (longlong *)FUN_1800033f0();
          if (local_2c0 != (longlong *)0x0) {
            local_310 = local_2f8 >> 0x14;
            local_268 = *local_2c0;
            local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
            (**(code **)(local_268 + 0x30))
                      (local_2c0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
          }
        }
      }
      else {
        local_2d0 = (longlong *)FUN_1800033f0();
        if (local_2d0 != (longlong *)0x0) {
          local_310 = local_2f8 >> 0x14;
          local_270 = *local_2d0;
          local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
          (**(code **)(local_270 + 0x30))
                    (local_2d0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
        }
      }
      if (((local_2f8 & 0xfff) == 0) || ((local_2f8 & 0xfff) == 0x429)) break;
      local_2f8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                            (*(undefined8 *)(param_1 + 0x18));
      local_2f8 = FUN_1800052b0(param_1,param_2);
      if ((local_2f8 & 0xfff) != 0) {
        local_298 = (longlong *)FUN_1800033f0();
        if (local_298 != (longlong *)0x0) {
          local_310 = local_2f8 >> 0x14;
          local_240 = *local_298;
          local_318 = (undefined8 *)CONCAT44(local_318._4_4_,local_2f8);
          (**(code **)(local_240 + 0x30))
                    (local_298,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
        }
        break;
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))(*(undefined8 *)(param_1 + 0x18));
    } while ((local_2f8 & 0xfff) == 0);
  }
  if ((local_2f8 & 0xfff) == 0x429) {
    *(undefined4 *)(param_1 + 0x298) = 1;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_338);
  return;
}




void FUN_1800052b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_4b8 [32];
  uint local_498;
  uint local_490;
  uint local_488;
  longlong *local_480;
  longlong local_478;
  undefined4 local_468;
  undefined4 local_464;
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_4b8;
  local_488 = 0x17c11401;
  puVar2 = &local_468;
  for (lVar1 = 0x444; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((longlong)puVar2 + 1);
  }
  if (param_2 == 0) {
    local_488 = 0x18011409;
    local_480 = (longlong *)FUN_1800033f0();
    if (local_480 != (longlong *)0x0) {
      local_490 = local_488 >> 0x14;
      local_478 = *local_480;
      local_498 = local_488;
      (**(code **)(local_478 + 0x30))(local_480,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    local_468 = 1;
    local_464 = *(undefined4 *)(param_2 + 0x1664);
    local_488 = FUN_180005730(param_1,*(undefined8 *)(param_1 + 0x10),1,&local_468);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4b8);
  return;
}




uint FUN_1800053c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint local_58;
  
  if (param_2 == 0) {
    local_58 = 0x19011409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x19011409,400);
    }
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    local_58 = 0x19111405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x19111405,0x191);
    }
  }
  else {
    local_58 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))
                         (*(undefined8 *)(param_1 + 0x18),param_2 + 0x1668,0);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))(*(undefined8 *)(param_1 + 0x18));
    if (((local_58 & 0xfff) != 0) &&
       (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_58,local_58 >> 0x14);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))(*(undefined8 *)(param_1 + 0x18));
  return local_58;
}




void FUN_1800055e0(longlong *param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_718 [32];
  uint local_6f8;
  uint local_6f0;
  uint local_6e8;
  longlong *local_6e0;
  longlong local_6d8;
  undefined1 local_6c8 [4];
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_468;
  undefined4 local_464;
  wchar_t local_45c [546];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_718;
  local_6e8 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_6e8 = 0x1ba11405;
    local_6e0 = (longlong *)FUN_1800033f0();
    if (local_6e0 != (longlong *)0x0) {
      local_6f0 = local_6e8 >> 0x14;
      local_6d8 = *local_6e0;
      local_6f8 = local_6e8;
      (**(code **)(local_6d8 + 0x30))(local_6e0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    puVar2 = &local_468;
    for (lVar1 = 0x444; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((longlong)puVar2 + 1);
    }
    wcscpy_s(local_45c,0x110,param_2);
    (**(code **)(*param_1 + 0x10))(param_1,local_6c8);
    local_468 = local_6c4;
    local_464 = local_6c0;
    local_6e8 = FUN_180005730((longlong)param_1,param_1[2],0xe,&local_468);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_718);
  return;
}




uint FUN_180005730(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint local_48;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_48 = 0x1cf11405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1cf11405,0x1cf);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"CBurnBootCD CallBack Type : %d",param_3);
    }
    local_48 = (**(code **)(param_1 + 8))(param_2,param_3,param_4);
    if (((local_48 & 0xfff) != 0) &&
       (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_48,local_48 >> 0x14);
    }
  }
  plVar1 = (longlong *)FUN_1800033f0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"CBurnBootCD CallBack Result : %d",local_48);
  }
  return local_48;
}




int FUN_180005900(longlong param_1)

{
  longlong *plVar1;
  int local_28;
  uint local_24;
  
  local_24 = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_28 = 0x1e211405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1e211405,0x1e2);
    }
  }
  else {
    do {
      local_28 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                           (*(undefined8 *)(param_1 + 0x18));
      if (local_28 == 0) {
        return 0;
      }
      local_24 = local_24 + 1;
      Sleep(1000);
    } while (local_24 < 6);
  }
  return local_28;
}




undefined8 FUN_1800059f0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((((param_2 == 10) || (param_2 == 0x13)) || (param_2 == 0x14)) ||
     (((param_2 == 0x1314 || (param_2 == 0x1a)) || ((param_2 == 0x2a || (param_2 == 0x12)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_180005a40(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = FUN_180005b50(param_1,0x4c00,&local_28);
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
    local_20 = (longlong *)FUN_1800033f0();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x11400,L"Failed to Load lib (Err=0x%x) %S",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




undefined4 FUN_180005b50(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18001eb84) {
    _Init_thread_header(&DAT_18001eb84);
    if (DAT_18001eb84 == -1) {
      DAT_18001eb88 = (code *)FUN_1800012e0(param_1,&local_20);
      _Init_thread_footer(&DAT_18001eb84);
    }
  }
  if (DAT_18001eb88 == (code *)0x0) {
    uVar1 = 0x12411402;
  }
  else {
    uVar1 = (*DAT_18001eb88)(0x10000,param_2,param_3);
  }
  return uVar1;
}




undefined8 FUN_180005c10(void)

{
  return 1;
}




undefined * FUN_180005c40(void)

{
  return &DAT_18001eb68;
}




int FUN_180005c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180005c40();
  local_14 = __stdio_common_vswprintf(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




void FUN_180005cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005c50(param_1,param_2,param_3,0,param_4);
  return;
}




int FUN_180005d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int local_14;
  
  puVar1 = (undefined8 *)FUN_180005c40();
  local_14 = __stdio_common_vswprintf_s(*puVar1,param_1,param_2,param_3,param_4,param_5);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




int FUN_180005d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  iVar1 = FUN_180005d00(param_1,param_2,param_3,0,&local_res20);
  return iVar1;
}




undefined4
FUN_180005dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180005cc0(param_1,0x7fffffff,param_2,&local_res18);
  return uVar1;
}




undefined1 * FUN_180005e30(undefined1 *param_1,undefined1 *param_2,longlong param_3)

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




void FUN_180005e60(void *param_1,void *param_2,longlong param_3)

{
  memmove(param_1,param_2,param_3 << 1);
  return;
}




undefined8 FUN_180005ea0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* Library Function - Single Match
    _vfprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180005c40();
  iVar1 = __stdio_common_vfprintf(*puVar2,_File,_Format,_Locale,_ArgList);
  return iVar1;
}




int FUN_180005f00(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  FILE *_File;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _File = (FILE *)__acrt_iob_func(1);
  iVar1 = _vfprintf_l(_File,param_1,(_locale_t)0x0,(va_list)&local_res10);
  return iVar1;
}




undefined8 FUN_180005f60(void)

{
  return 0x7fffffffffffffff;
}




void FUN_180005f70(__uint64 param_1)

{
  operator_new(param_1);
  return;
}




void FUN_180005f90(longlong *param_1,longlong *param_2)

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




undefined8 FUN_180006030(undefined8 param_1)

{
  return param_1;
}




undefined4 FUN_180006040(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




bool FUN_180006050(LPWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  _STARTUPINFOW *p_Var4;
  _PROCESS_INFORMATION *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  _PROCESS_INFORMATION local_98;
  _STARTUPINFOW local_78;
  
  p_Var4 = &local_78;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var4->cb = 0;
    p_Var4 = (_STARTUPINFOW *)((longlong)&p_Var4->cb + 1);
  }
  local_78.cb = 0x68;
  local_78.dwFlags = 1;
  local_78.wShowWindow = 0;
  p_Var5 = &local_98;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var5->hProcess = 0;
    p_Var5 = (_PROCESS_INFORMATION *)((longlong)&p_Var5->hProcess + 1);
  }
  uVar7 = 0;
  uVar6 = 0;
  BVar1 = CreateProcessW((LPCWSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,
                         0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_78,&local_98);
  if (BVar1 != 0) {
    WaitForSingleObject(local_98.hProcess,6000);
    CloseHandle(local_98.hProcess);
    CloseHandle(local_98.hThread);
  }
  else {
    DVar2 = GetLastError();
    FUN_180005f00("CreateProcess failed (%d)\n",(ulonglong)DVar2,uVar6,uVar7);
  }
  return BVar1 == 0;
}




void FUN_180006140(undefined8 param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_428 [32];
  WCHAR local_408 [504];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_428;
  pWVar2 = local_408;
  for (lVar1 = 1000; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  FUN_180005d70(local_408,500,L"cmd /c echo y|Cacls \"%s\" /G everyone:F",param_1);
  FUN_180006050(local_408);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_428);
  return;
}




void FUN_1800061c0(LPCWSTR param_1)

{
  FUN_180006140(param_1);
  SetFileAttributesW(param_1,0);
  DeleteFileW(param_1);
  return;
}




undefined8 * FUN_1800061f0(undefined8 *param_1)

{
  *param_1 = CDownLoadLinuxPEISO::vftable;
  basic_string<>((longlong)(param_1 + 9));
  basic_string<>((longlong)(param_1 + 0x10));
  basic_string<>((longlong)(param_1 + 0x14));
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1800099f0(param_1 + 0x10);
  FUN_1800099f0(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  return param_1;
}




undefined8 * FUN_180006350(undefined8 *param_1,uint param_2)

{
  FUN_180006390(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180006390(undefined8 *param_1)

{
  *param_1 = CDownLoadLinuxPEISO::vftable;
  FUN_1800067d0((longlong)param_1);
  FUN_180009a50(param_1 + 0x14);
  FUN_180009a50(param_1 + 0x10);
  FUN_180009a50(param_1 + 9);
  return;
}




undefined4 FUN_180006400(longlong param_1)

{
  LPCWSTR lpLibFileName;
  HMODULE pHVar1;
  longlong *plVar2;
  FARPROC pFVar3;
  undefined4 local_28;
  
  local_28 = 0;
  lpLibFileName = (LPCWSTR)FUN_180009980(&DAT_18001ea48);
  pHVar1 = LoadLibraryW(lpLibFileName);
  *(HMODULE *)(param_1 + 8) = pHVar1;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_28 = 0x8211510;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"%S %d nRes=0x%x\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp",0x83,
                 0x8211510);
    }
  }
  else {
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 8),"eud_init");
    *(FARPROC *)(param_1 + 0x18) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 8),"eud_uninit");
    *(FARPROC *)(param_1 + 0x20) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 8),"eud_download");
    *(FARPROC *)(param_1 + 0x28) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 8),"eud_cancel");
    *(FARPROC *)(param_1 + 0x30) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 8),"eud_get_progress");
    *(FARPROC *)(param_1 + 0x38) = pFVar3;
    if ((((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
        (*(longlong *)(param_1 + 0x28) == 0)) ||
       ((*(longlong *)(param_1 + 0x30) == 0 || (*(longlong *)(param_1 + 0x38) == 0)))) {
      local_28 = 0x9011f80;
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))
                  (plVar2,1,0x11400,L"%S %d nRes=0x%x\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp",0x91,
                   0x9011f80);
      }
    }
  }
  return local_28;
}




void FUN_180006600(longlong param_1)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_2b8 [32];
  char *local_298;
  undefined4 local_290;
  uint local_288;
  uint local_278;
  uint local_274;
  longlong *local_270;
  longlong *local_268;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_260;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_258 [32];
  WCHAR local_238 [272];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_2b8;
  local_278 = 0;
  local_278 = FUN_180006400(param_1);
  if ((local_278 & 0xfff) == 0) {
    local_274 = (**(code **)(param_1 + 0x18))(param_1 + 0x40);
    if ((local_274 == 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      pWVar2 = local_238;
      for (lVar1 = 0x220; lVar1 != 0; lVar1 = lVar1 + -1) {
        *(undefined1 *)pWVar2 = 0;
        pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
      }
      FUN_1800038a0(0x180014038,local_238,0x110);
      local_260 = basic_string<>(local_258,local_238);
      FID_conflict_operator_(param_1 + 0x48,local_260);
      FUN_180009a50(local_258);
    }
    else {
      local_278 = 0xa311f80;
      local_268 = (longlong *)FUN_1800033f0();
      if (local_268 != (longlong *)0x0) {
        local_288 = local_274;
        local_290 = 0xa4;
        local_298 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
        (**(code **)(*local_268 + 0x30))(local_268,1,0x11400,L"%S %d ecRet=0x%x\n");
      }
    }
  }
  else {
    local_270 = (longlong *)FUN_1800033f0();
    if (local_270 != (longlong *)0x0) {
      local_288 = local_278;
      local_290 = 0x9e;
      local_298 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
      (**(code **)(*local_270 + 0x30))(local_270,1,0x11400,L"%S %d nRes=0x%x\n");
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2b8);
  return;
}




undefined4 FUN_1800067d0(longlong param_1)

{
  LPCWSTR pWVar1;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FreeLibrary(*(HMODULE *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  pWVar1 = (LPCWSTR)FUN_180009980(param_1 + 0x80);
  FUN_1800061c0(pWVar1);
  pWVar1 = (LPCWSTR)FUN_180009980(param_1 + 0xa0);
  FUN_1800061c0(pWVar1);
  return 0xb311401;
}




uint FUN_1800068f0(LPVOID param_1)

{
  longlong *plVar1;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  FUN_180008690((longlong)param_1,L"BootDriver",L"NoFindISONeedDownload");
  local_34 = FUN_1800070f0(param_1);
  if ((*(longlong *)((longlong)param_1 + 0xd0) != 0) &&
     (**(char **)((longlong)param_1 + 0xd0) != '\0')) {
    local_34 = 0xdf11429;
  }
  local_38 = local_34;
  if ((local_34 & 0xfff) == 0) {
    local_30 = FUN_180006b70(param_1);
    if ((*(longlong *)((longlong)param_1 + 0xd0) != 0) &&
       (**(char **)((longlong)param_1 + 0xd0) != '\0')) {
      local_30 = 0xe411429;
    }
    local_38 = local_30;
    if ((local_30 & 0xfff) == 0) {
      local_2c = FUN_180009160((longlong)param_1);
      if ((*(longlong *)((longlong)param_1 + 0xd0) != 0) &&
         (**(char **)((longlong)param_1 + 0xd0) != '\0')) {
        local_2c = 0xe911429;
      }
      local_38 = local_2c;
      if (((local_2c & 0xfff) != 0) &&
         (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x30))
                  (plVar1,1,0x11400,L"%S %d nRes=0x%x\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp",0xea,
                   local_2c);
      }
    }
    else {
      plVar1 = (longlong *)FUN_1800033f0();
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))
                  (plVar1,1,0x11400,L"%S %d nRes=0x%x\n",
                   "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp",0xe5,
                   local_30);
      }
    }
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"%S %d nRes=0x%x\n",
                 "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp",0xe0,
                 local_34);
    }
  }
  return local_38;
}




void FUN_180006b70(LPVOID param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStackY_158 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_158;
  FUN_180008690((longlong)param_1,L"BootDriver",L"StartDownloadPE");
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  basic_string<>((longlong)local_38);
  basic_string<>((longlong)local_58);
  uVar1 = FUN_180006e50((longlong)param_1,(longlong)local_38,(longlong)local_58);
  if ((uVar1 & 0xfff) == 0) {
    uVar1 = FUN_180007cd0(param_1,(longlong)param_1 + 0xa0);
    if ((uVar1 & 0xfff) == 0) {
      lVar3 = basic_string<>((longlong)local_b8,local_58);
      lVar4 = basic_string<>((longlong)local_98,(longlong)param_1 + 0xa0);
      lVar5 = basic_string<>((longlong)local_78,local_38);
      FUN_180007380(param_1,lVar5,lVar4,1,lVar3);
      FUN_180009a50(local_58);
      FUN_180009a50(local_38);
    }
    else {
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"%S %d nRes=0x%x\n");
      }
      FUN_180009a50(local_58);
      FUN_180009a50(local_38);
    }
  }
  else {
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"%S %d nRes=0x%x\n");
    }
    FUN_180009a50(local_58);
    FUN_180009a50(local_38);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_158);
  return;
}




void FUN_180006e50(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  LPCWSTR pWVar2;
  LPCWSTR pWVar3;
  LPCWSTR pWVar4;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  WCHAR *pWVar8;
  undefined1 auStackY_8d8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_860 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_840 [40];
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_8d8;
  pWVar8 = local_818;
  for (lVar7 = 0x800; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pWVar8 = 0;
    pWVar8 = (WCHAR *)((longlong)pWVar8 + 1);
  }
  pWVar2 = (LPCWSTR)FUN_180009980(param_1 + 0x80);
  pWVar3 = (LPCWSTR)FUN_180009980(&DAT_18001ea08);
  pWVar4 = (LPCWSTR)FUN_180009980(&DAT_18001ea88);
  GetPrivateProfileStringW(pWVar4,pWVar3,(LPCWSTR)0x0,local_818,0x400,pWVar2);
  pbVar5 = basic_string<>(local_860,local_818);
  FID_conflict_operator_(param_2,pbVar5);
  FUN_180009a50(local_860);
  bVar1 = FUN_180009920(param_2);
  if (bVar1) {
    plVar6 = (longlong *)FUN_1800033f0();
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,1,0x11400,L"GetSorURLandMD5 fail %S %d\n");
    }
  }
  else {
    pWVar8 = local_818;
    for (lVar7 = 0x800; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)pWVar8 = 0;
      pWVar8 = (WCHAR *)((longlong)pWVar8 + 1);
    }
    pWVar2 = (LPCWSTR)FUN_180009980(param_1 + 0x80);
    pWVar3 = (LPCWSTR)FUN_180009980(&DAT_18001ea68);
    pWVar4 = (LPCWSTR)FUN_180009980(&DAT_18001ea88);
    GetPrivateProfileStringW(pWVar4,pWVar3,(LPCWSTR)0x0,local_818,0x400,pWVar2);
    pbVar5 = basic_string<>(local_840,local_818);
    FID_conflict_operator_(param_3,pbVar5);
    FUN_180009a50(local_840);
    bVar1 = FUN_180009920(param_3);
    if ((bVar1) && (plVar6 = (longlong *)FUN_1800033f0(), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(plVar6,1,0x11400,L"GetSorURLandMD5 fail %S %d\n");
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_8d8);
  return;
}




void FUN_1800070f0(LPVOID param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStackY_138 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_138;
  FUN_180008690((longlong)param_1,L"BootDriver",L"StartDownloadConfig");
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  basic_string<>((longlong)local_38);
  uVar1 = FUN_180007a70(param_1,(longlong)local_38);
  if ((uVar1 & 0xfff) == 0) {
    uVar1 = FUN_180007ef0(param_1,(longlong)param_1 + 0x80);
    if ((uVar1 & 0xfff) == 0) {
      lVar3 = basic_string<>((longlong)local_98);
      lVar4 = basic_string<>((longlong)local_78,(longlong)param_1 + 0x80);
      lVar5 = basic_string<>((longlong)local_58,local_38);
      FUN_180007380(param_1,lVar5,lVar4,0,lVar3);
      FUN_180009a50(local_38);
    }
    else {
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"%S %d nRes=0x%x\n");
      }
      FUN_180009a50(local_38);
    }
  }
  else {
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,1,0x11400,L"%S %d nRes=0x%x\n");
    }
    FUN_180009a50(local_38);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_138);
  return;
}




uint FUN_180007380(LPVOID param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  bool bVar2;
  DWORD DVar3;
  int iVar4;
  LPCWSTR pWVar5;
  HANDLE hHandle;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  byte local_68;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined8 local_38;
  wchar_t *local_30;
  
  pWVar5 = (LPCWSTR)FUN_180009980(param_3);
  FUN_1800061c0(pWVar5);
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  uVar9 = 0;
  hHandle = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180007890,param_1,0,(LPDWORD)0x0);
  if ((hHandle == (HANDLE)0x0) && (plVar6 = (longlong *)FUN_1800033f0(), plVar6 != (longlong *)0x0))
  {
    DVar3 = GetLastError();
    (**(code **)(*plVar6 + 0x30))
              (plVar6,1,0x11400,
               L"zl : CDownLoadLinuxPEISO::DownloadFile CreateThread fail error = %d\n",DVar3);
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc4);
  local_68 = 0;
  while( true ) {
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (*(int *)((longlong)param_1 + 0xcc) == 0) {
      local_5c = *(undefined4 *)(&DAT_180016768 + (ulonglong)local_68 * 4);
    }
    else {
      local_5c = *(undefined4 *)(&DAT_1800167c8 + (ulonglong)local_68 * 4);
    }
    *(undefined4 *)((longlong)param_1 + 200) = local_5c;
    bVar2 = FUN_180009920(param_5);
    if (bVar2) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_180009980(param_5);
    }
    uVar7 = FUN_180009980(param_3);
    uVar8 = FUN_180009980(param_2);
    uVar9 = CONCAT44(uVar10,1);
    iVar4 = (**(code **)((longlong)param_1 + 0x28))
                      (*(undefined8 *)((longlong)param_1 + 0x40),uVar8,uVar7,param_4,local_38,uVar9)
    ;
    if ((iVar4 == 9) || (**(char **)((longlong)param_1 + 0xd0) != '\0')) break;
    local_68 = local_68 + 1;
    if (iVar4 != 0) {
      plVar6 = (longlong *)FUN_1800033f0();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))
                  (plVar6,1,0x11400,
                   L"zl : CDownLoadLinuxPEISO::DownloadFileerror m_fp_eud_download = %d\n",iVar4);
      }
      *(int *)((longlong)param_1 + 0xc4) =
           *(int *)((longlong)param_1 + 0xc4) + *(int *)((longlong)param_1 + 200);
      if (*(int *)((longlong)param_1 + 0xcc) == 0) {
        local_30 = L"DownloadConfigFileFailTryAgain";
      }
      else {
        local_30 = L"DownloadPEFailTryAgain";
      }
      FUN_180008690((longlong)param_1,L"BootDriver",local_30);
    }
    if ((iVar4 == 0) || (*(byte *)((longlong)param_1 + 0x10) <= local_68)) break;
  }
  if (iVar4 == 0) {
    local_54 = 0;
  }
  else {
    if (iVar4 == 9) {
      local_58 = 0x15e11429;
    }
    else {
      local_58 = 0x15e11f83;
    }
    local_54 = local_58;
  }
  *(undefined1 *)((longlong)param_1 + 0xc0) = 0;
  WaitForSingleObject(hHandle,0xffffffff);
  FUN_180007740((longlong)param_1,uVar1);
  FUN_1800077f0((longlong)param_1,local_54);
  FUN_180009a50(param_2);
  FUN_180009a50(param_3);
  FUN_180009a50(param_5);
  return local_54;
}




void FUN_180007740(longlong param_1,undefined4 param_2)

{
  int local_18;
  int local_14;
  
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  for (local_18 = 0; local_18 < (int)(uint)*(byte *)(param_1 + 0x10); local_18 = local_18 + 1) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      local_14 = *(int *)(&DAT_180016768 + (longlong)local_18 * 4);
    }
    else {
      local_14 = *(int *)(&DAT_1800167c8 + (longlong)local_18 * 4);
    }
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + local_14;
  }
  FUN_1800039e0(*(longlong *)(param_1 + 0x78),*(uint *)(param_1 + 0xc4));
  return;
}




void FUN_1800077f0(longlong param_1,uint param_2)

{
  wchar_t *local_18;
  wchar_t *local_10;
  
  if ((param_2 & 0xfff) == 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      local_10 = L"DownloadConfigFileSuccess";
    }
    else {
      local_10 = L"DownloadPESuccess";
    }
    FUN_180008690(param_1,L"BootDriver",local_10);
  }
  else {
    if (*(int *)(param_1 + 0xcc) == 0) {
      local_18 = L"DownloadConfigFileFail";
    }
    else {
      local_18 = L"DownloadPEFail";
    }
    FUN_180008690(param_1,L"BootDriver",local_18);
  }
  return;
}




undefined8 FUN_180007890(longlong param_1)

{
  float fVar1;
  float fVar2;
  int local_34;
  int local_30;
  ulonglong local_20;
  longlong *local_18;
  ulonglong local_10 [2];
  
  while( true ) {
    if (*(char *)(param_1 + 0xc0) == '\0') {
      return 0;
    }
    Sleep(1000);
    if ((*(longlong *)(param_1 + 0xd0) != 0) && (**(char **)(param_1 + 0xd0) != '\0')) break;
    local_10[0] = 0;
    local_20 = 1;
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),local_10,&local_20);
    if ((local_10[0] != local_20) || (9999 < local_20)) {
      fVar1 = (float)(longlong)local_10[0];
      if ((longlong)local_10[0] < 0) {
        fVar1 = fVar1 + 1.8446744e+19;
      }
      fVar2 = (float)(longlong)local_20;
      if ((longlong)local_20 < 0) {
        fVar2 = fVar2 + 1.8446744e+19;
      }
      local_34 = (int)((fVar1 / fVar2) * 1.0 * (float)*(int *)(param_1 + 200));
      if (local_34 < 1) {
        local_34 = 0;
      }
      if (local_34 < *(int *)(param_1 + 200)) {
        local_30 = local_34;
      }
      else {
        local_30 = *(int *)(param_1 + 200);
      }
      FUN_1800039e0(*(longlong *)(param_1 + 0x78),local_30 + *(int *)(param_1 + 0xc4));
    }
  }
  (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40));
  local_18 = (longlong *)FUN_1800033f0();
  if (local_18 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*local_18 + 0x30))
            (local_18,1,0x11400,L"zl : GetDownloadProgressThreadProc Cancle now\n");
  return 0;
}




void FUN_180007a70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong *plVar3;
  LPCWSTR lpFileName;
  LPCWSTR lpKeyName;
  LPCWSTR lpAppName;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *pbVar4;
  longlong lVar5;
  WCHAR *pWVar6;
  undefined1 auStackY_8f8 [32];
  undefined1 local_880 [32];
  undefined1 local_860 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_840 [40];
  WCHAR local_818 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_8f8;
  basic_string<>((longlong)local_880);
  uVar2 = FUN_180008fc0((longlong)local_880);
  if ((uVar2 & 0xfff) == 0) {
    FUN_18000a960((longlong)local_860,local_880,&DAT_18001eaa8);
    pWVar6 = local_818;
    for (lVar5 = 0x800; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)pWVar6 = 0;
      pWVar6 = (WCHAR *)((longlong)pWVar6 + 1);
    }
    lpFileName = (LPCWSTR)FUN_180009980(local_860);
    lpKeyName = (LPCWSTR)FUN_180009980(&DAT_18001ea28);
    lpAppName = (LPCWSTR)FUN_180009980(&DAT_18001eb08);
    GetPrivateProfileStringW(lpAppName,lpKeyName,(LPCWSTR)0x0,local_818,0x400,lpFileName);
    pbVar4 = basic_string<>(local_840,local_818);
    FID_conflict_operator_(param_2,pbVar4);
    FUN_180009a50(local_840);
    bVar1 = FUN_180009920(param_2);
    if (bVar1) {
      plVar3 = (longlong *)FUN_1800033f0();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"GetNetConfigFileURL fail %S %d\n");
      }
      FUN_180009a50(local_860);
      FUN_180009a50(local_880);
    }
    else {
      FUN_180009a50(local_860);
      FUN_180009a50(local_880);
    }
  }
  else {
    plVar3 = (longlong *)FUN_1800033f0();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"%S %d nRes=0x%x\n");
    }
    FUN_180009a50(local_880);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_8f8);
  return;
}




void FUN_180007cd0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStackY_158 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18001e010 ^ (ulonglong)auStackY_158;
  basic_string<>((longlong)local_50);
  iVar2 = FUN_180008fc0((longlong)local_50);
  if (iVar2 == 0) {
    puVar4 = (undefined1 *)basic_string<>((longlong)local_b0,&DAT_18001eac8);
    lVar5 = basic_string<>((longlong)local_90,&DAT_18001eae8);
    lVar6 = basic_string<>((longlong)local_70,local_50);
    uVar7 = FUN_180008110(param_1,(longlong)local_30,lVar6,lVar5,puVar4);
    FID_conflict_operator_(param_2,uVar7);
    FUN_180009a50(local_30);
    bVar1 = FUN_180009920(param_2);
    if (bVar1) {
      FUN_180009a50(local_50);
    }
    else {
      FUN_180009a50(local_50);
    }
  }
  else {
    plVar3 = (longlong *)FUN_1800033f0();
    if (plVar3 != (longlong *)0x0) {
      GetLastError();
      (**(code **)(*plVar3 + 0x30))
                (plVar3,1,0x11400,L"GetLinuxPEImageTempDownLoadPath fail %S %d lastError=%d\n");
    }
    FUN_180009a50(local_50);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_158);
  return;
}




void FUN_180007ef0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStackY_158 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18001e010 ^ (ulonglong)auStackY_158;
  basic_string<>((longlong)local_50);
  iVar2 = FUN_180008fc0((longlong)local_50);
  if (iVar2 == 0) {
    puVar4 = (undefined1 *)basic_string<>((longlong)local_b0,&DAT_18001eb28);
    lVar5 = basic_string<>((longlong)local_90,&DAT_18001eb48);
    lVar6 = basic_string<>((longlong)local_70,local_50);
    uVar7 = FUN_180008110(param_1,(longlong)local_30,lVar6,lVar5,puVar4);
    FID_conflict_operator_(param_2,uVar7);
    FUN_180009a50(local_30);
    bVar1 = FUN_180009920(param_2);
    if (bVar1) {
      FUN_180009a50(local_50);
    }
    else {
      FUN_180009a50(local_50);
    }
  }
  else {
    plVar3 = (longlong *)FUN_1800033f0();
    if (plVar3 != (longlong *)0x0) {
      GetLastError();
      (**(code **)(*plVar3 + 0x30))
                (plVar3,1,0x11400,L"GetNetConfigFileTempDownLoadPath fail %S %d lastError=%d\n");
    }
    FUN_180009a50(local_50);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_158);
  return;
}




void FUN_180008110(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  bool bVar1;
  DWORD DVar2;
  longlong lVar3;
  short *psVar4;
  LPCWSTR pWVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  uint local_1b4;
  undefined8 local_1b0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_1a8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_1a0;
  longlong local_198;
  undefined8 local_190;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_188;
  undefined8 local_180;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_178;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_170;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_30 [32];
  ulonglong local_10;
  
  local_158 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_1d8;
  local_1b4 = 0;
  uVar7 = param_4;
  basic_string<>((longlong)local_150);
  bVar1 = FUN_180009920(param_3);
  if ((!bVar1) && (bVar1 = FUN_180009920(param_4), !bVar1)) {
    basic_string<>((longlong)local_110,param_3);
    lVar3 = FUN_180009960(local_110);
    psVar4 = (short *)FUN_1800099b0(local_110,lVar3 + -1);
    if (*psVar4 != 0x5c) {
      FUN_180009a20(local_110,L"\\");
    }
    basic_string<>((longlong)local_130,param_5);
    psVar4 = (short *)FUN_1800099b0(local_130,0);
    if (*psVar4 != 0x2e) {
      local_1b0 = FUN_18000aa30((longlong)local_f0,L".",local_130);
      FID_conflict_operator_((longlong)local_130,local_1b0);
      FUN_180009a50(local_f0);
    }
    local_1a8 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)FUN_18000a960((longlong)local_b0,local_110,param_4);
    puVar6 = local_130;
    local_1a0 = local_1a8;
    local_198 = FUN_18000a900((longlong)local_d0,local_1a8,puVar6);
    FID_conflict_operator_((longlong)local_150,local_198);
    FUN_180009a50(local_d0);
    FUN_180009a50(local_b0);
    pWVar5 = (LPCWSTR)FUN_180009980(local_150);
    FUN_1800061c0(pWVar5);
    pWVar5 = (LPCWSTR)FUN_180009980(local_150);
    DVar2 = GetFileAttributesW(pWVar5);
    if (DVar2 == 0xffffffff) {
      FUN_180009a50(local_130);
      FUN_180009a50(local_110);
    }
    else {
      local_1b8 = 0;
      while( true ) {
        local_190 = FUN_1800084e0(local_30,local_1b8,puVar6,uVar7);
        local_180 = local_190;
        local_188 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                     *)FUN_18000a960((longlong)local_50,param_3,param_4);
        local_178 = local_188;
        local_170 = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                     *)FUN_18000a7f0((longlong)local_70,local_188,local_180);
        puVar6 = param_5;
        local_168 = local_170;
        local_160 = FUN_18000a900((longlong)local_90,local_170,param_5);
        FID_conflict_operator_((longlong)local_150,local_160);
        FUN_180009a50(local_90);
        FUN_180009a50(local_70);
        FUN_180009a50(local_50);
        FUN_180009a50(local_30);
        pWVar5 = (LPCWSTR)FUN_180009980(local_150);
        FUN_1800061c0(pWVar5);
        pWVar5 = (LPCWSTR)FUN_180009980(local_150);
        DVar2 = GetFileAttributesW(pWVar5);
        if (DVar2 == 0xffffffff) break;
        local_1b8 = local_1b8 + 1;
      }
      FUN_180009a50(local_130);
      FUN_180009a50(local_110);
    }
  }
  basic_string<>(param_2,local_150);
  local_1b4 = local_1b4 | 1;
  FUN_180009a50(local_150);
  FUN_180009a50(param_3);
  FUN_180009a50(param_4);
  FUN_180009a50(param_5);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_1d8);
  return;
}




void FUN_1800084e0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined1 auStack_c8 [32];
  uint local_a8;
  wchar_t local_98 [64];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  pwVar2 = local_98;
  for (lVar1 = 0x80; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pwVar2 = 0;
    pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
  }
  FUN_180005dd0(local_98,&DAT_180014e18,(ulonglong)param_2,param_4);
  basic_string<>(param_1,local_98);
  local_a8 = local_a8 | 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_c8);
  return;
}




undefined4
FUN_180008580(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             )

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 local_28;
  
  local_28 = 0;
  if (((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) {
    local_28 = 0x22b11409;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x22b11409,0x22b);
    }
  }
  else {
    *(longlong *)(param_1 + 0x68) = param_2;
    *(longlong *)(param_1 + 0x70) = param_3;
    *(longlong *)(param_1 + 0x78) = param_4;
    uVar1 = FUN_180006040(*(longlong *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    *(undefined8 *)(param_1 + 0xd0) = param_5;
  }
  return local_28;
}




void FUN_180008690(longlong param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  LPCWSTR lpFileName;
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStackY_278 [32];
  WCHAR local_238 [272];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_278;
  pWVar2 = local_238;
  for (lVar1 = 0x220; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  lpFileName = (LPCWSTR)FUN_180009980(param_1 + 0x48);
  GetPrivateProfileStringW(param_2,param_3,(LPCWSTR)0x0,local_238,0x110,lpFileName);
  if (local_238[0] != L'\0') {
    FUN_180008760(param_1,local_238);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_278);
  return;
}




void FUN_180008760(longlong param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_718 [32];
  uint local_6f8;
  uint local_6f0;
  uint local_6e8;
  longlong *local_6e0;
  longlong local_6d8;
  undefined1 local_6c8 [4];
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_468;
  undefined4 local_464;
  wchar_t local_45c [546];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_718;
  local_6e8 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_6e8 = 0x24c11405;
    local_6e0 = (longlong *)FUN_1800033f0();
    if (local_6e0 != (longlong *)0x0) {
      local_6f0 = local_6e8 >> 0x14;
      local_6d8 = *local_6e0;
      local_6f8 = local_6e8;
      (**(code **)(local_6d8 + 0x30))(local_6e0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    puVar2 = &local_468;
    for (lVar1 = 0x444; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((longlong)puVar2 + 1);
    }
    wcscpy_s(local_45c,0x110,param_2);
    FUN_180008a80(param_1,local_6c8);
    local_468 = local_6c4;
    local_464 = local_6c0;
    local_6e8 = FUN_1800088b0(param_1,*(undefined8 *)(param_1 + 0x70),0xe,&local_468);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_718);
  return;
}




uint FUN_1800088b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint local_48;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_48 = 0x26111405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x26111405,0x261);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"CDownLoadLinuxPEISO CallBack Type : %d",param_3);
    }
    local_48 = (**(code **)(param_1 + 0x68))(param_2,param_3,param_4);
    if (((local_48 & 0xfff) != 0) &&
       (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_48,local_48 >> 0x14);
    }
  }
  plVar1 = (longlong *)FUN_1800033f0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))
              (plVar1,1,0x11400,L"CDownLoadLinuxPEISO CallBack Result : %d",local_48);
  }
  return local_48;
}




undefined4 FUN_180008a80(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  __time64_t *p_Var2;
  longlong lVar3;
  undefined4 local_38;
  
  local_38 = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_38 = 0x27311409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x27311409,0x273);
    }
  }
  else {
    p_Var2 = FUN_180003830(*(__time64_t **)(param_1 + 0x78));
    for (lVar3 = 600; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = (char)*p_Var2;
      p_Var2 = (__time64_t *)((longlong)p_Var2 + 1);
      param_2 = param_2 + 1;
    }
  }
  return local_38;
}




void FUN_180008b40(undefined4 *param_1)

{
  BOOL BVar1;
  LPCWSTR pWVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined4 local_e0;
  uint local_d8;
  uint local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_78 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_108;
  local_c8 = 0;
  local_c4 = 1;
  basic_string<>((longlong)local_50);
  local_c8 = FUN_180008fc0((longlong)local_50);
  if ((local_c8 & 0xfff) == 0) {
    FUN_18000ab10((longlong)local_70,local_50,L"imageLinux.iso");
    pWVar2 = (LPCWSTR)FUN_180009980(local_70);
    BVar1 = PathFileExistsW(pWVar2);
    if (BVar1 == 0) {
      local_88 = FUN_18000ab10((longlong)local_30,local_50,L"image.iso");
      FID_conflict_operator_((longlong)local_70,local_88);
      FUN_180009a50(local_30);
      pWVar2 = (LPCWSTR)FUN_180009980(local_70);
      BVar1 = PathFileExistsW(pWVar2);
      if (BVar1 == 0) {
        local_c4 = 1;
        FUN_180009a50(local_70);
        FUN_180009a50(local_50);
      }
      else {
        local_c0 = (longlong *)FUN_1800034c0("Boot");
        if (local_c0 == (longlong *)0x0) {
          local_c8 = 0x2a911408;
          local_a0 = (longlong *)FUN_1800033f0();
          if (local_a0 != (longlong *)0x0) {
            local_d8 = local_c8;
            local_e0 = 0x2aa;
            local_e8 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
            (**(code **)(*local_a0 + 0x30))(local_a0,1,0x11400,L"%S %d nRes=0x%x\n");
          }
          FUN_180009a50(local_70);
          FUN_180009a50(local_50);
        }
        else {
          uVar3 = FUN_180009980(local_70);
          local_80 = *local_c0;
          local_c8 = (**(code **)(local_80 + 0x20))(local_c0,0,uVar3,0);
          if ((local_c8 & 0xfff) == 0) {
            local_b8 = 0;
            local_c8 = (**(code **)(*local_c0 + 0x70))(local_c0,&local_b8);
            if ((local_c8 & 0xfff) == 0) {
              if ((local_b8 == 2) || (local_b8 == 3)) {
                local_b4 = 1;
              }
              else {
                local_b4 = 0;
              }
              local_c4 = local_b4;
              (**(code **)(*local_c0 + 0x28))(local_c0);
              (**(code **)*local_c0)(local_c0);
              FUN_180009a50(local_70);
              FUN_180009a50(local_50);
            }
            else {
              local_90 = (longlong *)FUN_1800033f0();
              if (local_90 != (longlong *)0x0) {
                local_d8 = local_c8;
                local_e0 = 0x2b3;
                local_e8 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
                (**(code **)(*local_90 + 0x30))(local_90,1,0x11400,L"%S %d nRes=0x%x\n");
              }
              FUN_180009a50(local_70);
              FUN_180009a50(local_50);
            }
          }
          else {
            local_98 = (longlong *)FUN_1800033f0();
            if (local_98 != (longlong *)0x0) {
              local_d8 = local_c8;
              local_e0 = 0x2af;
              local_e8 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
              (**(code **)(*local_98 + 0x30))(local_98,1,0x11400,L"%S %d nRes=0x%x\n");
            }
            FUN_180009a50(local_70);
            FUN_180009a50(local_50);
          }
        }
      }
    }
    else {
      local_c4 = 0;
      FUN_180009a50(local_70);
      FUN_180009a50(local_50);
    }
  }
  else {
    local_a8 = (longlong *)FUN_1800033f0();
    if (local_a8 != (longlong *)0x0) {
      local_d8 = local_c8;
      local_e0 = 0x294;
      local_e8 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
      (**(code **)(*local_a8 + 0x30))(local_a8,1,0x11400,L"%S %d nRes=0x%x\n");
    }
    FUN_180009a50(local_50);
  }
  if ((local_c8 & 0xfff) == 0) {
    local_b0 = local_c4;
  }
  else {
    local_b0 = 1;
  }
  *param_1 = local_b0;
  __security_check_cookie(local_10 ^ (ulonglong)auStack_108);
  return;
}




void FUN_180008fc0(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  WCHAR *pWVar3;
  undefined1 auStack_2b8 [32];
  DWORD local_298;
  int local_288;
  undefined4 local_284;
  longlong local_280;
  undefined4 local_278;
  longlong *local_270;
  ulonglong local_268;
  longlong local_260;
  WCHAR *local_258;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_250;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_2b8;
  local_284 = 0;
  pWVar3 = local_228;
  for (lVar2 = 0x208; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)pWVar3 = 0;
    pWVar3 = (WCHAR *)((longlong)pWVar3 + 1);
  }
  local_278 = 0x104;
  DVar1 = GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
  if (DVar1 == 0) {
    local_270 = (longlong *)FUN_1800033f0();
    if (local_270 != (longlong *)0x0) {
      local_298 = GetLastError();
      local_260 = *local_270;
      (**(code **)(local_260 + 0x30))
                (local_270,1,0x11400,
                 L"zl IsNoExistImageLinuxISO GetModuleFileNameW fail LastError = %d\n");
    }
    local_284 = 0x2c911602;
  }
  else {
    local_258 = local_228;
    local_280 = -1;
    do {
      local_280 = local_280 + 1;
    } while (local_258[local_280] != L'\0');
    for (local_288 = (int)local_280; local_228[local_288] != L'\\'; local_288 = local_288 + -1) {
      local_268 = (longlong)local_288 << 1;
      if (0x207 < local_268) {
        __report_rangecheckfailure();
      }
      *(undefined2 *)((longlong)local_228 + local_268) = 0;
    }
    local_250 = basic_string<>(local_248,local_228);
    FID_conflict_operator_(param_1,local_250);
    FUN_180009a50(local_248);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_2b8);
  return;
}




void FUN_180009160(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  LPCWSTR pWVar3;
  HANDLE ThreadHandle;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  uint local_88;
  uint local_78;
  longlong *local_70;
  HANDLE local_68;
  longlong *local_60;
  LPCWSTR local_58;
  LPCWSTR local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  basic_string<>((longlong)local_38);
  local_78 = FUN_180009450(param_1,(longlong)local_38);
  if ((local_78 & 0xfff) == 0) {
    local_58 = (LPCWSTR)FUN_180009980(local_38);
    pWVar3 = (LPCWSTR)FUN_180009980(param_1 + 0xa0);
    BVar1 = CopyFileW(pWVar3,local_58,0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 5) {
        local_68 = (HANDLE)0x0;
        ThreadHandle = GetCurrentThread();
        BVar1 = OpenThreadToken(ThreadHandle,0x2000c,1,&local_68);
        if (BVar1 != 0) {
          RevertToSelf();
          local_50 = (LPCWSTR)FUN_180009980(local_38);
          pWVar3 = (LPCWSTR)FUN_180009980(param_1 + 0xa0);
          BVar1 = CopyFileW(pWVar3,local_50,0);
          if (BVar1 != 0) {
            pWVar3 = (LPCWSTR)FUN_180009980(param_1 + 0x80);
            FUN_1800061c0(pWVar3);
            pWVar3 = (LPCWSTR)FUN_180009980(param_1 + 0xa0);
            FUN_1800061c0(pWVar3);
            ImpersonateLoggedOnUser(local_68);
            FUN_180009a50(local_38);
            goto LAB_180009432;
          }
          pWVar3 = (LPCWSTR)FUN_180009980(param_1 + 0x80);
          FUN_1800061c0(pWVar3);
          pWVar3 = (LPCWSTR)FUN_180009980(param_1 + 0xa0);
          FUN_1800061c0(pWVar3);
          ImpersonateLoggedOnUser(local_68);
        }
      }
      local_78 = 0x3071150c;
      local_60 = (longlong *)FUN_1800033f0();
      if (local_60 != (longlong *)0x0) {
        local_88 = GetLastError();
        local_48 = *local_60;
        local_90 = 0x308;
        local_98 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
        (**(code **)(local_48 + 0x30))(local_60,1,0x11400,L"%S %d CopyFileW fail ,lastError = %d\n")
        ;
      }
      FUN_180009a50(local_38);
    }
    else {
      FUN_180009a50(local_38);
    }
  }
  else {
    local_70 = (longlong *)FUN_1800033f0();
    if (local_70 != (longlong *)0x0) {
      local_88 = local_78;
      local_90 = 0x2df;
      local_98 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
      (**(code **)(*local_70 + 0x30))(local_70,1,0x11400,L"%S %d nRes=0x%x\n");
    }
    FUN_180009a50(local_38);
  }
LAB_180009432:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180009450(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  LPCWSTR pWVar2;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  uint local_a8;
  uint local_98;
  longlong *local_90;
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_78 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  basic_string<>((longlong)local_70);
  local_98 = FUN_180008fc0((longlong)local_70);
  if ((local_98 & 0xfff) == 0) {
    FUN_18000ab10((longlong)local_50,local_70,L"image.iso");
    pWVar2 = (LPCWSTR)FUN_180009980(local_50);
    BVar1 = PathFileExistsW(pWVar2);
    if (BVar1 == 0) {
      local_88 = L"image.iso";
    }
    else {
      local_88 = L"imageLinux.iso";
    }
    local_80 = FUN_18000ab10((longlong)local_30,local_70,local_88);
    FID_conflict_operator_(param_2,local_80);
    FUN_180009a50(local_30);
    pWVar2 = (LPCWSTR)FUN_180009980(param_2);
    FUN_1800061c0(pWVar2);
    FUN_180009a50(local_50);
    FUN_180009a50(local_70);
  }
  else {
    local_90 = (longlong *)FUN_1800033f0();
    if (local_90 != (longlong *)0x0) {
      local_a8 = local_98;
      local_b0 = 0x315;
      local_b8 = "k:\\_epm_re_main\\legacy_mod\\mod.bootdriver\\downloadlinuxpeiso.cpp";
      (**(code **)(*local_90 + 0x30))(local_90,1,0x11400,L"%S %d nRes=0x%x\n");
    }
    FUN_180009a50(local_70);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_d8);
  return;
}




void FUN_180009600(longlong param_1,longlong param_2,longlong param_3,char *param_4)

{
  undefined1 auStackY_178 [32];
  uint local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8 [28];
  ulonglong local_18;
  
  local_100 = 0xfffffffffffffffe;
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_178;
  local_138 = 0;
  local_134 = 1;
  local_120 = FUN_180008b40(&local_134);
  if (((local_120 & 0xfff) != 0) || (local_134 != 0)) {
    FUN_1800061f0(local_f8);
    local_130 = FUN_180008580((longlong)local_f8,param_1,param_2,param_3,param_4);
    if (*param_4 != '\0') {
      local_130 = 0x32f11429;
    }
    local_138 = local_130;
    if ((local_130 & 0xfff) == 0) {
      local_12c = FUN_180006600((longlong)local_f8);
      if (*param_4 != '\0') {
        local_12c = 0x33311429;
      }
      local_138 = local_12c;
      if ((local_12c & 0xfff) == 0) {
        local_128 = FUN_1800068f0(local_f8);
        if (*param_4 != '\0') {
          local_128 = 0x33711429;
        }
        local_138 = local_128;
        if ((local_128 & 0xfff) == 0) {
          FUN_180006390(local_f8);
        }
        else {
          local_108 = (longlong *)FUN_1800033f0();
          if (local_108 != (longlong *)0x0) {
            (**(code **)(*local_108 + 0x30))(local_108,1,0x11400,L"%S %d nRes=0x%x\n");
          }
          FUN_180006390(local_f8);
        }
      }
      else {
        local_110 = (longlong *)FUN_1800033f0();
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 0x30))(local_110,1,0x11400,L"%S %d nRes=0x%x\n");
        }
        FUN_180006390(local_f8);
      }
    }
    else {
      local_118 = (longlong *)FUN_1800033f0();
      if (local_118 != (longlong *)0x0) {
        (**(code **)(*local_118 + 0x30))(local_118,1,0x11400,L"%S %d nRes=0x%x\n");
      }
      FUN_180006390(local_f8);
    }
  }
  if (*param_4 == '\0') {
    local_124 = local_138;
  }
  else {
    local_124 = 0x33b11429;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_178);
  return;
}




bool FUN_180009920(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180009960(param_1);
  return lVar1 == 0;
}




undefined8 FUN_180009960(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180009d30(param_1);
  return *(undefined8 *)(lVar1 + 0x10);
}




void FUN_180009980(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180009d30(param_1);
  Myptr(puVar1);
  return;
}




longlong FUN_1800099b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180009d30(param_1);
  puVar1 = Myptr(puVar1);
  return (longlong)puVar1 + param_2 * 2;
}




void FUN_1800099f0(undefined8 param_1)

{
  FID_conflict__Eos(param_1,0);
  return;
}




void FUN_180009a20(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,param_2);
  return;
}




void FUN_180009a50(undefined8 param_1)

{
  FID_conflict__Tidy_deallocate(param_1);
  FUN_180009c80();
  return;
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
  lVar1 = FUN_180006030(param_2);
  if (param_1 != lVar1) {
    FID_conflict__Tidy_deallocate(param_1);
    uVar2 = FUN_180009d30(param_2);
    Move_alloc(param_1,uVar2);
    puVar3 = local_18;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar2 = FUN_180006030(param_2);
    FID_conflict__Assign_rv_contents(param_1,uVar2);
  }
  return param_1;
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
  uVar1 = FUN_180009d30(param_2);
  uVar1 = FUN_180006030(uVar1);
  FUN_18000abf0(param_1,uVar1);
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_180006030(param_2);
  FUN_18000a270(param_1,uVar1);
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
  FUN_180009d80((longlong)param_1);
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
  FUN_180009d80(param_1);
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
   
   Library: Visual Studio 2017 Release */

longlong basic_string<>(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180009d30(param_2);
  uVar1 = select_on_container_copy_construction(local_18);
  FUN_18000abf0(param_1,uVar1);
  FID_conflict__Construct_lv_contents(param_1,param_2);
  return param_1;
}




void FUN_180009c80(void)

{
  FUN_180009ca0();
  return;
}




void FUN_180009ca0(void)

{
  FUN_180009cc0();
  return;
}




void FUN_180009cc0(void)

{
  FUN_1800037b0();
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
    local_18 = (undefined8 *)FUN_180006030(*param_1);
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




void FUN_180009d30(undefined8 param_1)

{
  FUN_180006030(param_1);
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
  
  uVar1 = FUN_180009d30(param_1);
  _Pocma<>(uVar1,param_2);
  return;
}




longlong FUN_180009d80(longlong param_1)

{
  _Compressed_pair<><>(param_1);
  return param_1;
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
  
  FUN_18000a3f0(param_1);
  local_20 = (undefined8 *)FUN_180009d30(param_1);
  bVar1 = Large_string_engaged((longlong)local_20);
  if (bVar1) {
    local_10 = (void *)*local_20;
    local_18 = FUN_180009d30(param_1);
    FUN_180006030(local_20);
    FUN_18000ac90();
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
  
  local_10 = (undefined2 *)FUN_180009d30(param_1);
  *(undefined8 *)(local_10 + 8) = 0;
  *(undefined8 *)(local_10 + 0xc) = 7;
  local_18[0] = 0;
  assign(local_10,local_18);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: void __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::_Eos(unsigned __int64) __ptr64
    public: void __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::_Eos(unsigned __int64) __ptr64
   
   Library: Visual Studio 2015 Release */

void FID_conflict__Eos(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined2 local_18 [4];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)FUN_180009d30(param_1);
  local_18[0] = 0;
  local_10[2] = param_2;
  puVar1 = Myptr(local_10);
  assign((undefined2 *)((longlong)puVar1 + param_2 * 2),local_18);
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
  uVar2 = FUN_180006030(_Var1);
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
  
  local_20 = (undefined8 *)FUN_180009d30(param_1);
  if ((ulonglong)local_20[3] < param_3) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = _Reallocate_for<>(param_1,param_3,local_28[0],param_2);
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
  _Var1 = FUN_180006030(_Var1);
  pbVar2 = append(this,param_1,_Var1);
  return pbVar2;
}




void FUN_18000a0e0(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,undefined8 param_2)

{
  FID_conflict_append(param_1,param_2);
  return;
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
  
  puVar2 = (undefined1 *)FUN_180009d30(param_1);
  puVar3 = (undefined8 *)FUN_180009d30(param_2);
  uVar1 = puVar3[2];
  local_30 = Myptr(puVar3);
  if (uVar1 < 8) {
    copy(puVar2,(undefined1 *)local_30,8);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(undefined8 *)(puVar2 + 0x18) = 7;
  }
  else {
    uVar4 = FUN_180009d30(param_1);
    local_20 = FID_conflict_max_size(param_1);
    local_18 = uVar1 | 7;
    p_Var5 = std::_Min_value<unsigned___int64>(&local_18,&local_20);
    local_28 = *p_Var5;
    local_38 = allocate(uVar4,local_28 + 1);
    uVar6 = FUN_180006030(puVar2);
    construct<>(uVar4,uVar6,&local_38);
    local_10 = uVar1 + 1;
    puVar7 = (undefined1 *)FUN_180006030(local_38);
    copy(puVar7,(undefined1 *)local_30,local_10);
    *(ulonglong *)(puVar2 + 0x10) = uVar1;
    *(__uint64 *)(puVar2 + 0x18) = local_28;
  }
  return;
}




void FUN_18000a270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_180009d30(param_2);
  uVar2 = FUN_180009d30(param_1);
  puVar3 = (undefined1 *)FUN_180006030(uVar2);
  puVar4 = (undefined1 *)FUN_180006030(uVar1);
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  FID_conflict__Tidy_init(param_2);
  return;
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
  uVar1 = FUN_180006030(param_2);
  FUN_18000a270(param_1,uVar1);
  return;
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




/* Library Function - Multiple Matches With Same Base Name
    public: static unsigned short * __ptr64 __cdecl std::_WChar_traits<unsigned
   short>::copy(unsigned short * __ptr64 const,unsigned short const * __ptr64 const,unsigned
   __int64)
    public: static wchar_t * __ptr64 __cdecl std::_WChar_traits<wchar_t>::copy(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64)
   
   Library: Visual Studio 2017 Release */

void copy(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  FUN_180005e30(param_1,param_2,param_3);
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




void FUN_18000a3f0(undefined8 param_1)

{
  FUN_180009d30(param_1);
  FUN_1800037b0();
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
  
  FUN_180009d30(param_1);
  local_30 = FUN_18000a770();
  local_38 = 8;
  p_Var1 = std::_Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_180005f60();
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
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
  
  local_20 = (undefined8 *)FUN_180009d30(this);
  local_18 = local_20[2];
  if ((ulonglong)(local_20[3] - local_18) < param_2) {
    puVar2 = local_28;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    this = (basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *)
           _Reallocate_grow_by<>(this,param_2,local_28[0],(undefined1 *)param_1,param_2);
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
    public: void __cdecl <lambda_1dfe18491bcca09701d8ccb01d0b0af4>::operator()(wchar_t * __ptr64
   const,wchar_t const * __ptr64 const,unsigned __int64,wchar_t const * __ptr64 const,unsigned
   __int64)const __ptr64
    public: void __cdecl <lambda_7030d12a21dba11210293044e97fe9c7>::operator()(unsigned short *
   __ptr64 const,unsigned short const * __ptr64 const,unsigned __int64,unsigned short const *
   __ptr64 const,unsigned __int64)const __ptr64
   
   Library: Visual Studio 2017 Release */

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

void FID_conflict_append(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                         *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  
  puVar1 = (undefined8 *)FUN_180009d30(param_2);
  pwVar2 = (wchar_t *)Myptr(puVar1);
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::append
            (param_1,pwVar2,puVar1[2]);
  return;
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
  FUN_180005e60(param_1,param_2,param_3);
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




void FUN_18000a740(longlong param_1,ulonglong param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_18000a780();
  }
  return;
}




undefined8 FUN_18000a770(void)

{
  return 0x7fffffffffffffff;
}




void FUN_18000a780(void)

{
  std::_Xout_of_range("invalid string position");
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




longlong FUN_18000a7f0(longlong param_1,
                      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_180009960(param_3);
  lVar2 = FUN_18000b310(param_2);
  lVar3 = FUN_180009960(param_2);
  if ((ulonglong)(lVar2 - lVar3) < uVar1) {
    lVar2 = FUN_18000b310(param_3);
    lVar3 = FUN_180009960(param_3);
    uVar1 = FUN_180009960(param_2);
    if (uVar1 <= (ulonglong)(lVar2 - lVar3)) {
      uVar4 = FUN_18000b330(param_3,0,param_2);
      uVar4 = FUN_180006030(uVar4);
      basic_string<>(param_1,uVar4);
      return param_1;
    }
  }
  uVar4 = FID_conflict_append(param_2,param_3);
  uVar4 = FUN_180006030(uVar4);
  basic_string<>(param_1,uVar4);
  return param_1;
}




longlong FUN_18000a900(longlong param_1,
                      basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                      *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FID_conflict_append(param_2,param_3);
  uVar1 = FUN_180006030(uVar1);
  basic_string<>(param_1,uVar1);
  return param_1;
}




void FUN_18000a960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  longlong local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_68;
  local_48 = 0;
  basic_string<>((longlong)local_30);
  local_40 = FUN_180009960(param_2);
  lVar1 = FUN_180009960(param_3);
  FUN_18000b1f0(local_30,local_40 + lVar1);
  FUN_18000a0e0((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_2);
  FUN_18000a0e0((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_3);
  basic_string<>(param_1,local_30);
  local_48 = local_48 | 1;
  FUN_180009a50(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_18000aa30(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  __uint64 local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_68;
  local_48 = 0;
  basic_string<>((longlong)local_30);
  local_40 = std::_WChar_traits<wchar_t>::length(param_2);
  lVar1 = FUN_180009960(param_3);
  uVar2 = FUN_180006030(local_40 + lVar1);
  FUN_18000b1f0(local_30,uVar2);
  FUN_180009a20((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_2);
  FUN_18000a0e0((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_3);
  basic_string<>(param_1,local_30);
  local_48 = local_48 | 1;
  FUN_180009a50(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




void FUN_18000ab10(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  __uint64 _Var1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  longlong local_40;
  undefined8 local_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_30 [32];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_68;
  local_48 = 0;
  basic_string<>((longlong)local_30);
  local_40 = FUN_180009960(param_2);
  _Var1 = std::_WChar_traits<wchar_t>::length(param_3);
  uVar2 = FUN_180006030(local_40 + _Var1);
  FUN_18000b1f0(local_30,uVar2);
  FUN_18000a0e0((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_2);
  FUN_180009a20((basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                 *)local_30,param_3);
  basic_string<>(param_1,local_30);
  local_48 = local_48 | 1;
  FUN_180009a50(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}




longlong FUN_18000abf0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_180006030(param_2);
  FUN_18000b720(param_1,(ulonglong)local_18,uVar1);
  return param_1;
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
  FUN_180006030(param_1);
  _String_val<>(param_1);
  return param_1;
}




void FUN_18000ac90(void)

{
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
    FUN_18000b110();
  }
  puVar2 = (undefined8 *)FUN_180009d30(param_1);
  local_18 = puVar2[3];
  local_20 = FID_conflict__Calculate_growth(param_1,param_2);
  local_28 = FUN_180009d30(param_1);
  local_30 = allocate(local_28,local_20 + 1);
  FUN_1800037b0();
  puVar2[2] = param_2;
  puVar2[3] = local_20;
  puVar3 = (undefined1 *)FUN_180006030(local_30);
  FID_conflict_operator__(local_res18,puVar3,param_2,local_res20);
  if (local_18 < 8) {
    uVar4 = FUN_180006030(puVar2);
    construct<>(local_28,uVar4,&local_30);
  }
  else {
    deallocate(local_28,(void *)*puVar2,local_18 + 1);
    *puVar2 = local_30;
  }
  return param_1;
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
  
  puVar1 = (undefined8 *)FUN_180005ea0(8,param_2);
  puVar2 = (undefined8 *)FUN_180006030(param_3);
  *puVar1 = *puVar2;
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
      pvVar1 = (void *)FUN_180005f70(param_1);
    }
  }
  else {
    pvVar1 = (void *)FUN_18000b790(param_1);
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
    FUN_180005f90((longlong *)&local_res8,(longlong *)local_res10);
  }
  free(local_res8);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > & __ptr64 __cdecl std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Reallocate_grow_by<class
   <lambda_1dfe18491bcca09701d8ccb01d0b0af4>,wchar_t const * __ptr64,unsigned __int64>(unsigned
   __int64,class <lambda_1dfe18491bcca09701d8ccb01d0b0af4>,wchar_t const * __ptr64,unsigned __int64)
   __ptr64
    public: class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > & __ptr64 __cdecl std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short>
   >::_Reallocate_grow_by<class <lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *
   __ptr64,unsigned __int64>(unsigned __int64,class
   <lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const * __ptr64,unsigned __int64)
   __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8
_Reallocate_grow_by<>
          (undefined8 param_1,ulonglong param_2,undefined1 param_3,undefined1 *param_4,
          longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [8];
  undefined1 *local_res20;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180009d30(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_18000b110();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180009d30(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800037b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_180006030(local_48);
  if (local_28 < 8) {
    FID_conflict_operator__(local_res18,local_18,(undefined1 *)puVar2,lVar1,local_res20,param_5);
    uVar5 = FUN_180006030(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_180006030(local_20);
    FID_conflict_operator__(local_res18,local_18,puVar4,lVar1,local_res20,param_5);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
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
  FUN_180006030(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




void FUN_18000b110(void)

{
  std::_Xlength_error("string too long");
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
  local_20 = FUN_180009d30(param_1);
  local_28 = param_2 | 7;
  if ((local_28 <= _Var2) && (uVar1 = *(ulonglong *)(local_20 + 0x18), uVar1 <= _Var2 - uVar1 / 2))
  {
    local_18[0] = uVar1 + uVar1 / 2;
    p_Var3 = std::_Max_value<unsigned___int64>(&local_28,local_18);
    _Var2 = *p_Var3;
  }
  return _Var2;
}




void FUN_18000b1f0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,ulonglong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_28 [8];
  longlong local_20;
  longlong local_18;
  
  local_20 = FUN_180009d30(param_1);
  if ((*(ulonglong *)(local_20 + 0x10) <= param_2) && (*(ulonglong *)(local_20 + 0x18) != param_2))
  {
    if (*(ulonglong *)(local_20 + 0x18) < param_2) {
      local_18 = *(longlong *)(local_20 + 0x10);
      puVar3 = local_28;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FUN_18000b820(param_1,param_2 - local_18,local_28[0]);
      *(longlong *)(local_20 + 0x10) = local_18;
    }
    else if ((param_2 < 8) && (bVar1 = Large_string_engaged(local_20), bVar1)) {
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
      _Become_small(param_1);
    }
  }
  return;
}




void FUN_18000b2d0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4)

{
  copy(param_2,param_3,param_4 + 1);
  return;
}




undefined8 FUN_18000b310(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180009d30(param_1);
  return *(undefined8 *)(lVar1 + 0x18);
}




void FUN_18000b330(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180009d30(param_3);
  puVar2 = Myptr(puVar1);
  FUN_18000b440(param_1,param_2,(undefined1 *)puVar2,puVar1[2]);
  return;
}




/* Library Function - Single Match
    public: void __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Become_small(void) __ptr64
   
   Library: Visual Studio 2017 Release */

void __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Become_small
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined8 *)FUN_180009d30(this);
  FUN_1800037b0();
  pvVar1 = (void *)*puVar3;
  uVar4 = FUN_180009d30(this);
  FUN_180006030(puVar3);
  FUN_18000ac90();
  lVar2 = puVar3[2];
  puVar5 = (undefined1 *)FUN_180006030(pvVar1);
  copy((undefined1 *)puVar3,puVar5,lVar2 + 1);
  deallocate(uVar4,pvVar1,puVar3[3] + 1);
  puVar3[3] = 7;
  return;
}




undefined8 FUN_18000b440(undefined8 param_1,ulonglong param_2,undefined1 *param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_48 [8];
  undefined1 *local_40;
  ulonglong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_30 = (undefined8 *)FUN_180009d30(param_1);
  FUN_18000a740((longlong)local_30,param_2);
  local_28 = local_30[2];
  if ((ulonglong)(local_30[3] - local_28) < param_4) {
    puVar2 = local_48;
    for (lVar1 = 1; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1 = FUN_18000b9c0(param_1,param_4,local_48[0],param_2,param_3,param_4);
  }
  else {
    local_30[2] = local_28 + param_4;
    local_20 = Myptr(local_30);
    local_40 = (undefined1 *)((longlong)local_20 + param_2 * 2);
    local_38 = param_4;
    if ((local_40 < param_3 + param_4 * 2) &&
       (param_3 <= (undefined1 *)((longlong)local_20 + local_28 * 2))) {
      if (param_3 < local_40) {
        local_38 = (longlong)local_40 - (longlong)param_3 >> 1;
      }
      else {
        local_38 = 0;
      }
    }
    move(local_40 + param_4 * 2,local_40,(local_28 - param_2) + 1);
    copy(local_40,param_3,local_38);
    local_18 = local_40 + local_38 * 2;
    copy(local_18,param_3 + local_38 * 2 + param_4 * 2,param_4 - local_38);
  }
  return param_1;
}




void FUN_18000b670(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
                  longlong param_5,undefined1 *param_6,longlong param_7)

{
  copy(param_2,param_3,param_5);
  copy(param_2 + param_5 * 2,param_6,param_7);
  copy(param_2 + param_7 * 2 + param_5 * 2,param_3 + param_5 * 2,(param_4 - param_5) + 1);
  return;
}




longlong FUN_18000b720(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180006030(param_3);
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
  FUN_180006030(param_2);
  return;
}




ulonglong FUN_18000b790(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_28;
  
  local_28 = param_1 + 0x27;
  if (local_28 <= param_1) {
    local_28 = 0xffffffffffffffff;
  }
  lVar1 = FUN_180005f70(local_28);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}




undefined8 FUN_18000b820(undefined8 param_1,ulonglong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_res18 [16];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  __uint64 local_30;
  ulonglong local_28;
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  puVar2 = (undefined8 *)FUN_180009d30(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_18000b110();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180009d30(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800037b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_180006030(local_48);
  if (local_28 < 8) {
    FUN_18000b2d0(local_res18,local_18,(undefined1 *)puVar2,lVar1);
    uVar5 = FUN_180006030(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_180006030(local_20);
    FUN_18000b2d0(local_res18,local_18,puVar4,lVar1);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




undefined8
FUN_18000b9c0(undefined8 param_1,ulonglong param_2,undefined1 param_3,longlong param_4,
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
  void *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180009d30(param_1);
  lVar1 = puVar2[2];
  _Var3 = FID_conflict_max_size(param_1);
  if (_Var3 - lVar1 < param_2) {
    FUN_18000b110();
  }
  local_38 = lVar1 + param_2;
  local_28 = puVar2[3];
  local_30 = FID_conflict__Calculate_growth(param_1,local_38);
  local_40 = FUN_180009d30(param_1);
  local_48 = allocate(local_40,local_30 + 1);
  FUN_1800037b0();
  puVar2[2] = local_38;
  puVar2[3] = local_30;
  local_18 = (undefined1 *)FUN_180006030(local_48);
  if (local_28 < 8) {
    FUN_18000b670(local_res18,local_18,(undefined1 *)puVar2,lVar1,local_res20,param_5,param_6);
    uVar5 = FUN_180006030(puVar2);
    construct<>(local_40,uVar5,&local_48);
  }
  else {
    local_20 = (void *)*puVar2;
    puVar4 = (undefined1 *)FUN_180006030(local_20);
    FUN_18000b670(local_res18,local_18,puVar4,lVar1,local_res20,param_5,param_6);
    deallocate(local_40,local_20,local_28 + 1);
    *puVar2 = local_48;
  }
  return param_1;
}




void FUN_18000bbd0(wchar_t *param_1,wchar_t param_2)

{
  wcsrchr(param_1,param_2);
  return;
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




void FUN_18000bc60(LPWSTR param_1,DWORD param_2,int param_3)

{
  WCHAR WVar1;
  BOOL BVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  WCHAR *pWVar5;
  short *psVar6;
  LPWSTR pWVar7;
  undefined1 auStack_2c8 [32];
  WCHAR local_2a8;
  undefined2 local_2a6;
  int local_2a4;
  short *local_2a0;
  LPWSTR local_298;
  LPWSTR local_290;
  DWORD local_288;
  longlong local_280;
  WCHAR *local_278;
  LPWSTR local_270;
  LPWSTR local_268;
  WCHAR *local_260;
  LPWSTR local_258;
  WCHAR *local_250;
  LPWSTR local_248;
  short sStack_23a;
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_18001e010 ^ (ulonglong)auStack_2c8;
  local_288 = 0;
  if ((param_1 != (LPWSTR)0x0) &&
     (local_288 = GetModuleFileNameW((HMODULE)0x0,param_1,param_2), local_288 != 0)) {
    local_280 = -1;
    do {
      local_280 = local_280 + 1;
    } while (param_1[local_280] != L'\0');
    for (local_2a4 = (int)local_280; param_1[local_2a4] != L'\\'; local_2a4 = local_2a4 + -1) {
      param_1[local_2a4] = L'\0';
    }
    local_258 = param_1;
    if (param_3 == 0) {
      local_290 = param_1 + -1;
      do {
        local_290 = local_290 + 1;
      } while (*local_290 != L'\0');
      pwVar4 = L"image.iso";
      pWVar7 = local_290;
      for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(char *)pWVar7 = (char)*pwVar4;
        pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
        pWVar7 = (LPWSTR)((longlong)pWVar7 + 1);
      }
    }
    else {
      pWVar5 = local_238;
      for (lVar3 = 0x208; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)pWVar5 = 0;
        pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
      }
      local_250 = local_238;
      local_278 = local_250;
      local_268 = param_1;
      do {
        local_2a8 = *local_268;
        *local_278 = local_2a8;
        local_268 = local_268 + 1;
        local_278 = local_278 + 1;
      } while (local_2a8 != L'\0');
      local_2a0 = &sStack_23a;
      do {
        local_2a0 = local_2a0 + 1;
      } while (*local_2a0 != 0);
      pwVar4 = L"imageLinux.iso";
      psVar6 = local_2a0;
      for (lVar3 = 0x1e; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(char *)psVar6 = (char)*pwVar4;
        pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
        psVar6 = (short *)((longlong)psVar6 + 1);
      }
      BVar2 = PathFileExistsW(local_238);
      if (BVar2 == 0) {
        local_298 = param_1 + -1;
        do {
          local_298 = local_298 + 1;
        } while (*local_298 != L'\0');
        pwVar4 = L"image.iso";
        pWVar7 = local_298;
        for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(char *)pWVar7 = (char)*pwVar4;
          pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
          pWVar7 = (LPWSTR)((longlong)pWVar7 + 1);
        }
      }
      else {
        local_260 = local_238;
        local_270 = param_1;
        do {
          WVar1 = *local_260;
          *local_270 = WVar1;
          local_260 = local_260 + 1;
          local_270 = local_270 + 1;
        } while (WVar1 != L'\0');
        local_2a6 = 0;
        local_248 = param_1;
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_2c8);
  return;
}




void FUN_18000bf20(longlong param_1,wchar_t *param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  short *psVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 auStack_328 [32];
  int local_308;
  undefined2 *local_300;
  uint local_2f8;
  longlong local_2f0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_2e8;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_> *local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_248 [32];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_2d0 = 0xfffffffffffffffe;
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_328;
  local_2f8 = 0;
  basic_string<>((longlong)local_2a8);
  if (param_2 != (wchar_t *)0x0) {
    pWVar5 = local_228;
    for (lVar4 = 0x208; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pWVar5 = 0;
      pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
    }
    DVar1 = GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
    if (DVar1 != 0) {
      local_308 = 0;
      basic_string<>(local_2c8,param_2);
      while ((((uVar2 = FUN_180009960(local_2c8), 3 < uVar2 &&
               (psVar3 = (short *)FUN_1800099b0(local_2c8,0), *psVar3 == 0x2e)) &&
              (psVar3 = (short *)FUN_1800099b0(local_2c8,1), *psVar3 == 0x2e)) &&
             ((psVar3 = (short *)FUN_1800099b0(local_2c8,2), *psVar3 == 0x2f ||
              (psVar3 = (short *)FUN_1800099b0(local_2c8,2), *psVar3 == 0x5c))))) {
        local_308 = local_308 + 1;
        local_2f0 = FUN_18000e690(local_2c8,(longlong)local_288,3,0xffffffffffffffff);
        FID_conflict_operator_((longlong)local_2c8,local_2f0);
        FUN_180009a50(local_288);
      }
      local_308 = local_308 + 1;
      local_300 = (undefined2 *)0x0;
      while ((0 < local_308 &&
             (local_300 = (undefined2 *)FUN_18000bbd0(local_228,L'\\'),
             local_300 != (undefined2 *)0x0))) {
        *local_300 = 0;
        local_308 = local_308 + -1;
      }
      local_300 = (undefined2 *)FUN_18000bbd0(local_228,L'\\');
      if (local_300 == (undefined2 *)0x0) {
        FUN_180009a50(local_2c8);
      }
      else {
        local_300 = local_300 + 1;
        *local_300 = 0;
        local_2e8 = basic_string<>(local_248,local_228);
        local_2e0 = local_2e8;
        local_2d8 = FUN_18000a900((longlong)local_268,local_2e8,local_2c8);
        FID_conflict_operator_((longlong)local_2a8,local_2d8);
        FUN_180009a50(local_268);
        FUN_180009a50(local_248);
        FUN_180009a50(local_2c8);
      }
    }
  }
  basic_string<>(param_1,local_2a8);
  local_2f8 = local_2f8 | 1;
  FUN_180009a50(local_2a8);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_328);
  return;
}




void FUN_18000c1f0(void)

{
  bool bVar1;
  UINT UVar2;
  LPCWSTR lpFileName;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  uint local_34;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_18001e010 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_18000bf20((longlong)local_30,L"..\\res\\UIConfig.ini");
  bVar1 = FUN_180009920(local_30);
  if (bVar1) {
    FUN_180009a50(local_30);
  }
  else {
    lpFileName = (LPCWSTR)FUN_180009980(local_30);
    UVar2 = GetPrivateProfileIntW(L"FixBug",L"OpenNetworkOptimize",0,lpFileName);
    local_38 = UVar2 == 1;
    local_34 = (uint)(byte)local_38;
    FUN_180009a50(local_30);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_58);
  return;
}




undefined8 * FUN_18000c340(undefined8 *param_1)

{
  *param_1 = CIsoBoot::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180003770(param_1 + 3);
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  return param_1;
}




void FUN_18000c3c0(undefined8 *param_1)

{
  *param_1 = CIsoBoot::vftable;
  FUN_1800037b0();
  return;
}




undefined4 FUN_18000c3f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_28;
  
  local_28 = 0;
  if (param_2 == 0) {
    local_28 = 0x4611409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x4611409,0x46);
    }
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  return local_28;
}




undefined4 FUN_18000c4b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    FUN_1800037c0((undefined8 *)(param_1 + 0x18));
    FUN_180003ac0(param_1 + 0x18,3);
    FUN_180003b30(param_1 + 0x18,1);
    FUN_180003b50(param_1 + 0x18,1);
    *(undefined4 *)(param_1 + 0x2a0) = 1;
    *(undefined4 *)(param_1 + 0x290) = 0;
    uVar2 = FUN_18000e990("Options");
    *(undefined8 *)(param_1 + 0x298) = uVar2;
    if (*(longlong *)(param_1 + 0x298) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x298) + 0x28))(*(undefined8 *)(param_1 + 0x298),0);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  return 0;
}




undefined4 FUN_18000c600(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x290) = 0;
  }
  return 0;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000c6b0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  WCHAR *pWVar7;
  undefined1 auStackY_17b8 [32];
  uint local_1788;
  uint local_1784;
  uint local_1770;
  undefined4 local_176c;
  longlong local_1768;
  undefined1 local_16c8;
  undefined1 local_16c7 [4703];
  uint local_468;
  WCHAR local_458 [272];
  WCHAR local_238 [272];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x18000c6ca;
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_17b8;
  pWVar7 = local_458;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  pWVar7 = local_238;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
  }
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  FUN_1800038a0(0x180016558,local_238,0x110);
  if (param_2 == 0) {
    local_1788 = 0x7f11409;
    plVar3 = (longlong *)FUN_1800033f0();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    FUN_180003ac0((longlong)(param_1 + 3),4);
    FUN_180003b70((longlong)(param_1 + 3),*(undefined4 *)(param_2 + 4));
    lVar4 = FUN_180001410(param_2);
    if (lVar4 == 0) {
      local_1788 = 0x8611409;
      plVar3 = (longlong *)FUN_1800033f0();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
      }
    }
    else if (((*(uint *)(lVar4 + 0x1658) >> 2 & 1) == 0) ||
            (local_1788 = FUN_180009600(param_1[1],param_1[2],(longlong)(param_1 + 3),
                                        (char *)((longlong)param_1 + 0x2a4)),
            (local_1788 & 0xfff) == 0)) {
      bVar1 = false;
      if (param_1[0x53] != 0) {
        local_16c8 = 0;
        puVar6 = local_16c7;
        for (lVar5 = 0x126b; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        (**(code **)(*(longlong *)param_1[0x53] + 0x40))(param_1[0x53],&local_16c8);
        if (((local_468 >> 0xb & 0x1f) == 4) || ((local_468 >> 0xb & 0x1f) == 0x1a)) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        GetPrivateProfileStringW
                  (L"BootDriver",L"WinPEISOInit",(LPCWSTR)0x0,local_458,0x110,local_238);
      }
      else {
        GetPrivateProfileStringW(L"BootDriver",L"ISOInit",(LPCWSTR)0x0,local_458,0x110,local_238);
      }
      FUN_18000e2a0(param_1,local_458);
      local_1788 = FUN_18000dae0((longlong)param_1,lVar4);
      if ((local_1788 & 0xfff) == 0) {
        pWVar7 = local_458;
        for (lVar5 = 0x110; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined1 *)pWVar7 = 0;
          pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
        }
        if (bVar1) {
          GetPrivateProfileStringW
                    (L"BootDriver",L"WinPEISOBurnRuning",(LPCWSTR)0x0,local_458,0x110,local_238);
        }
        else {
          GetPrivateProfileStringW
                    (L"BootDriver",L"ISOBurnRuning",(LPCWSTR)0x0,local_458,0x110,local_238);
        }
        FUN_18000e2a0(param_1,local_458);
        local_1770 = 0;
        local_1784 = 0;
        while( true ) {
          local_1768 = -1;
          do {
            local_1768 = local_1768 + 1;
          } while (*(short *)(lVar4 + 0x1ad0 + local_1768 * 2) != 0);
          if ((uint)local_1768 <= local_1784) break;
          if (*(short *)(lVar4 + 0x1ad0 + (ulonglong)local_1784 * 2) == 0x3a) {
            local_1770 = local_1770 + 1;
          }
          local_1784 = local_1784 + 1;
        }
        if (1 < local_1770) {
          local_1788 = 0xbd116e7;
        }
        if ((local_1788 & 0xfff) == 0) {
          iVar2 = FUN_18000d200(param_1,(LPCWSTR)(lVar4 + 0x1668),(LPCWSTR)(lVar4 + 0x1ad0));
          if (iVar2 != 0) {
            plVar3 = (longlong *)FUN_1800033f0();
            if (plVar3 != (longlong *)0x0) {
              GetLastError();
              (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"CIsoBoot CopyFileExW Err = 0x%x");
            }
            plVar3 = (longlong *)FUN_1800033f0();
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x30))
                        (plVar3,1,0x11400,L"CIsoBoot iso.szPath = %s,\nTarget.szPath  = %s");
            }
            local_1788 = 0xc5116e7;
          }
          if ((local_1788 & 0xfff) == 0) {
            pWVar7 = local_458;
            for (lVar4 = 0x110; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined1 *)pWVar7 = 0;
              pWVar7 = (WCHAR *)((longlong)pWVar7 + 1);
            }
            if (bVar1) {
              GetPrivateProfileStringW
                        (L"BootDriver",L"WinPEISOSuccess",(LPCWSTR)0x0,local_458,0x110,local_238);
            }
            else {
              GetPrivateProfileStringW
                        (L"BootDriver",L"ISOSuccess",(LPCWSTR)0x0,local_458,0x110,local_238);
            }
            FUN_18000e2a0(param_1,local_458);
          }
          else {
            plVar3 = (longlong *)FUN_1800033f0();
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d")
              ;
            }
          }
        }
        else {
          plVar3 = (longlong *)FUN_1800033f0();
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
          }
        }
      }
      else {
        plVar3 = (longlong *)FUN_1800033f0();
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
        }
      }
    }
    else {
      plVar3 = (longlong *)FUN_1800033f0();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
      }
    }
  }
  FUN_180003ae0((longlong)(param_1 + 3),local_1788);
  iVar2 = FUN_18000dac0((longlong)param_1);
  if (iVar2 == 0) {
    local_176c = 5;
  }
  else {
    local_176c = 2;
  }
  FUN_180003ac0((longlong)(param_1 + 3),local_176c);
  *(undefined4 *)(param_1 + 0x52) = 0;
  plVar3 = (longlong *)FUN_1800033f0();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1,0x11400,L"CIsoBoot Execute End! Err = 0x%x");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_17b8);
  return;
}




undefined4 FUN_18000cfd0(undefined8 param_1,short *param_2)

{
  undefined4 local_28;
  longlong local_20;
  
  local_28 = 0;
  if (param_2 != (short *)0x0) {
    local_20 = -1;
    do {
      local_20 = local_20 + 1;
    } while (param_2[local_20] != 0);
    if ((((2 < (int)local_20) && (*param_2 == 0x5c)) && (param_2[1] == 0x5c)) &&
       (param_2[2] != 0x2e)) {
      local_28 = 1;
    }
  }
  return local_28;
}




bool FUN_18000d090(undefined8 param_1,LPWSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  _STARTUPINFOW *p_Var4;
  _PROCESS_INFORMATION *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  _PROCESS_INFORMATION local_98;
  _STARTUPINFOW local_78;
  
  p_Var4 = &local_78;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var4->cb = 0;
    p_Var4 = (_STARTUPINFOW *)((longlong)&p_Var4->cb + 1);
  }
  local_78.cb = 0x68;
  local_78.dwFlags = 1;
  local_78.wShowWindow = 0;
  p_Var5 = &local_98;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&p_Var5->hProcess = 0;
    p_Var5 = (_PROCESS_INFORMATION *)((longlong)&p_Var5->hProcess + 1);
  }
  uVar7 = 0;
  uVar6 = 0;
  BVar1 = CreateProcessW((LPCWSTR)0x0,param_2,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,
                         0,0,(LPVOID)0x0,(LPCWSTR)0x0,&local_78,&local_98);
  if (BVar1 != 0) {
    WaitForSingleObject(local_98.hProcess,6000);
    CloseHandle(local_98.hProcess);
    CloseHandle(local_98.hThread);
  }
  else {
    DVar2 = GetLastError();
    FUN_180005f00("CreateProcess failed (%d)\n",(ulonglong)DVar2,uVar6,uVar7);
  }
  return BVar1 == 0;
}




void FUN_18000d180(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  WCHAR *pWVar2;
  undefined1 auStack_428 [32];
  WCHAR local_408 [504];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_428;
  pWVar2 = local_408;
  for (lVar1 = 1000; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)pWVar2 = 0;
    pWVar2 = (WCHAR *)((longlong)pWVar2 + 1);
  }
  FUN_180005d70(local_408,500,L"cmd /c echo y|Cacls \"%s\" /G everyone:F",param_2);
  FUN_18000d090(param_1,local_408);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_428);
  return;
}




void FUN_18000d200(LPVOID param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  HANDLE ThreadHandle;
  LPCWSTR lpName;
  longlong lVar5;
  _NETRESOURCEW *p_Var6;
  undefined1 auStackY_d8 [32];
  HANDLE local_98;
  undefined4 local_90;
  undefined4 local_8c;
  HANDLE local_88;
  BOOL local_80;
  DWORD local_7c;
  BOOL local_78;
  HANDLE local_70;
  undefined8 local_68;
  _NETRESOURCEW local_60;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_18001e010 ^ (ulonglong)auStackY_d8;
  local_98 = (HANDLE)0xffffffffffffffff;
  if ((param_2 != (LPCWSTR)0x0) && (param_3 != (LPCWSTR)0x0)) {
    iVar3 = FUN_18000cfd0(param_1,param_3);
    if (iVar3 == 0) {
      local_80 = CopyFileExW(param_2,param_3,(LPPROGRESS_ROUTINE)&LAB_18000c2b0,param_1,(LPBOOL)0x0,
                             1);
      if (local_80 == 0) {
        local_90 = 0x12b11401;
      }
      else {
        local_90 = 0;
      }
    }
    else if (param_3 != (LPCWSTR)0xfffffffffffffde0) {
      FUN_18000d180(param_1,param_2);
      FUN_18000d680(param_1,(longlong)local_30,param_3,'\0');
      bVar1 = FUN_180009920(local_30);
      if (bVar1) {
        FUN_180009a50(local_30);
      }
      else {
        cVar2 = FUN_18000c1f0();
        if (cVar2 != '\0') {
          local_88 = (HANDLE)0xffffffffffffffff;
          ThreadHandle = GetCurrentThread();
          BVar4 = OpenThreadToken(ThreadHandle,0x2000e,1,&local_88);
          if ((BVar4 != 0) && (local_88 != (HANDLE)0xffffffffffffffff)) {
            DuplicateTokenEx(local_88,0,(LPSECURITY_ATTRIBUTES)0x0,SecurityImpersonation,
                             TokenPrimary,&local_98);
            CloseHandle(local_88);
          }
          local_70 = (HANDLE)0xffffffffffffffff;
          BVar4 = LogonUserW(L"NetworkService",L".",(LPCWSTR)0x0,9,3,&local_70);
          if (BVar4 == 0) {
            FUN_180009a50(local_30);
            goto LAB_18000d63e;
          }
          if (local_70 == (HANDLE)0xffffffffffffffff) {
            FUN_180009a50(local_30);
            goto LAB_18000d63e;
          }
          BVar4 = ImpersonateLoggedOnUser(local_70);
          if (BVar4 == 0) {
            FUN_180009a50(local_30);
            goto LAB_18000d63e;
          }
        }
        p_Var6 = &local_60;
        for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
          *(undefined1 *)&p_Var6->dwScope = 0;
          p_Var6 = (_NETRESOURCEW *)((longlong)&p_Var6->dwScope + 1);
        }
        local_60.dwType = 1;
        local_60.lpRemoteName = (LPWSTR)FUN_180009980(local_30);
        local_60.lpProvider = L"Microsoft Windows Network";
        local_7c = WNetAddConnection2W(&local_60,param_3 + 0x130,param_3 + 0x110,1);
        if (local_7c == 0) {
          local_78 = CopyFileExW(param_2,param_3,(LPPROGRESS_ROUTINE)&LAB_18000c2b0,param_1,
                                 (LPBOOL)0x0,1);
          if (local_78 == 0) {
            local_8c = 0x16311401;
          }
          else {
            local_8c = 0;
          }
          lpName = (LPCWSTR)FUN_180009980(local_30);
          WNetCancelConnection2W(lpName,1,1);
          if (cVar2 != '\0') {
            RevertToSelf();
            if ((local_98 != (HANDLE)0xffffffffffffffff) && (local_98 != (HANDLE)0x0)) {
              FUN_180009a50(local_30);
              goto LAB_18000d63e;
            }
            ImpersonateLoggedOnUser(local_98);
          }
          FUN_180009a50(local_30);
        }
        else {
          if (((cVar2 != '\0') && (RevertToSelf(), local_98 != (HANDLE)0xffffffffffffffff)) &&
             (local_98 != (HANDLE)0x0)) {
            ImpersonateLoggedOnUser(local_98);
          }
          FUN_180009a50(local_30);
        }
      }
    }
  }
LAB_18000d63e:
  if ((local_98 != (HANDLE)0xffffffffffffffff) && (local_98 != (HANDLE)0x0)) {
    CloseHandle(local_98);
    local_98 = (HANDLE)0xffffffffffffffff;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStackY_d8);
  return;
}




void FUN_18000d680(undefined8 param_1,longlong param_2,wchar_t *param_3,char param_4)

{
  bool bVar1;
  ulonglong uVar2;
  short *psVar3;
  __uint64 _Var4;
  undefined1 auStack_138 [32];
  __uint64 local_118;
  uint local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_b8 [32];
  basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
  local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_e0 = 0xfffffffffffffffe;
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_138;
  local_110 = 0;
  basic_string<>((longlong)local_98);
  if (param_3 != (wchar_t *)0x0) {
    basic_string<>(local_b8,param_3);
    uVar2 = FUN_180009960(local_b8);
    if ((((uVar2 < 3) || (psVar3 = (short *)FUN_1800099b0(local_b8,0), *psVar3 != 0x5c)) ||
        (psVar3 = (short *)FUN_1800099b0(local_b8,1), *psVar3 != 0x5c)) ||
       (psVar3 = (short *)FUN_1800099b0(local_b8,2), *psVar3 == 0x2e)) {
      FUN_180009a50(local_b8);
    }
    else {
      FUN_18000e760(local_98,L"\\\\");
      _Var4 = FUN_180009960(local_b8);
      FUN_18000e690(local_b8,(longlong)local_d8,2,_Var4);
      local_118 = FUN_18000e700(local_d8,L'\\',0);
      if (local_118 == 0xffffffffffffffff) {
        FUN_18000a0e0(local_98,local_d8);
        FUN_180009a50(local_d8);
        FUN_180009a50(local_b8);
      }
      else {
        local_108 = FUN_18000e690(local_d8,(longlong)local_78,0,local_118);
        local_100 = local_108;
        FUN_18000a0e0(local_98,local_108);
        FUN_180009a50(local_78);
        if (param_4 == '\0') {
          _Var4 = FUN_180009960(local_d8);
          local_f8 = FUN_18000e690(local_d8,(longlong)local_58,local_118 + 1,_Var4);
          FID_conflict_operator_((longlong)local_d8,local_f8);
          FUN_180009a50(local_58);
          local_118 = FUN_18000e700(local_d8,L'\\',0);
          if (local_118 == 0xffffffffffffffff) {
            bVar1 = FUN_180009920(local_d8);
            if (!bVar1) {
              FUN_18000e790((longlong)local_98,local_b8);
            }
          }
          else {
            FUN_180009a20(local_98,L"\\");
            local_f0 = FUN_18000e690(local_d8,(longlong)local_38,0,local_118);
            local_e8 = local_f0;
            FUN_18000a0e0(local_98,local_f0);
            FUN_180009a50(local_38);
          }
          FUN_180009a50(local_d8);
          FUN_180009a50(local_b8);
        }
        else {
          FUN_180009a50(local_d8);
          FUN_180009a50(local_b8);
        }
      }
    }
  }
  basic_string<>(param_2,local_98);
  local_110 = local_110 | 1;
  FUN_180009a50(local_98);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}




undefined4 FUN_18000d9c0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  __time64_t *p_Var2;
  longlong lVar3;
  undefined4 local_38;
  
  local_38 = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_38 = 0x1a611409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1a611409,0x1a6);
    }
  }
  else {
    p_Var2 = FUN_180003830((__time64_t *)(param_1 + 0x18));
    for (lVar3 = 600; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = (char)*p_Var2;
      p_Var2 = (__time64_t *)((longlong)p_Var2 + 1);
      param_2 = param_2 + 1;
    }
  }
  return local_38;
}




undefined4 FUN_18000da80(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2a4) = 1;
  return 0;
}




undefined8 FUN_18000dab0(void)

{
  return 0x1c111401;
}




undefined4 FUN_18000dac0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x290);
}




uint FUN_18000dae0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint local_88;
  longlong local_80;
  longlong local_78;
  
  local_80 = -1;
  do {
    local_80 = local_80 + 1;
  } while (*(short *)(param_2 + 0x1ad0 + local_80 * 2) != 0);
  iVar1 = (int)local_80;
  if (param_2 == 0) {
    local_88 = 0x1ce11409;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1ce11409,0x1ce);
    }
  }
  else if (iVar1 < 1) {
    local_88 = 0x1cf11409;
    plVar2 = (longlong *)FUN_1800033f0();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))
                (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1cf11409,0x1cf);
    }
  }
  else {
    local_78 = -1;
    do {
      local_78 = local_78 + 1;
    } while (*(short *)(param_2 + 0x1668 + local_78 * 2) != 0);
    if (((int)local_78 == 0) &&
       (local_88 = FUN_18000bc60((LPWSTR)(param_2 + 0x1668),0x104,
                                 *(uint *)(param_2 + 0x1658) >> 1 & 1), (local_88 & 0xfff) != 0)) {
      plVar2 = (longlong *)FUN_1800033f0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))
                  (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_88,local_88 >> 0x14
                  );
      }
    }
    else {
      if ((*(short *)(param_2 + 0x1ad0 + (longlong)iVar1 * 2) == 0x5c) ||
         (*(short *)(param_2 + 0x1ad0 + (longlong)iVar1 * 2) == 0x2f)) {
        if (0x10f < iVar1 + 9U) {
          plVar2 = (longlong *)FUN_1800033f0();
          if (plVar2 == (longlong *)0x0) {
            return 0x1d911409;
          }
          (**(code **)(*plVar2 + 0x30))
                    (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1d911409,0x1d9);
          return 0x1d911409;
        }
        wcscat_s((wchar_t *)(param_2 + 0x1ad0),0x110,L"image.iso");
      }
      local_88 = FUN_18000df20(param_1,(LPCWSTR)(param_2 + 0x1ad0));
      if (((local_88 & 0xfff) != 0) &&
         (plVar2 = (longlong *)FUN_1800033f0(), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x30))
                  (plVar2,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_88,local_88 >> 0x14
                  );
      }
    }
  }
  return local_88;
}




undefined8 FUN_18000dea0(undefined8 param_1,LPCWSTR param_2)

{
  HANDLE hObject;
  undefined8 uVar1;
  
  hObject = CreateFileW(param_2,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    uVar1 = 0;
  }
  else {
    if (hObject != (HANDLE)0xffffffffffffffff) {
      CloseHandle(hObject);
    }
    uVar1 = 1;
  }
  return uVar1;
}




uint FUN_18000df20(longlong param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar5;
  uint local_68;
  longlong local_60;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  local_68 = 0;
  if (param_2 == (LPCWSTR)0x0) {
    local_68 = 0x1fe11409;
    plVar3 = (longlong *)FUN_1800033f0();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))
                (plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1fe11409,
                 CONCAT44(uVar5,0x1fe));
    }
  }
  else {
    local_60 = -1;
    do {
      local_60 = local_60 + 1;
    } while (param_2[local_60] != L'\0');
    if ((int)local_60 == 0) {
      local_68 = 0x1ff11409;
      plVar3 = (longlong *)FUN_1800033f0();
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))
                  (plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x1ff11409,
                   CONCAT44(uVar5,0x1ff));
      }
    }
    else {
      uVar4 = FUN_18000dea0(param_1,param_2);
      if ((int)uVar4 != 0) {
        local_68 = FUN_18000e190(param_1,param_2);
        if ((local_68 & 0xfff) == 0) {
          BVar1 = DeleteFileW(param_2);
          if (BVar1 == 0) {
            plVar3 = (longlong *)FUN_1800033f0();
            if (plVar3 != (longlong *)0x0) {
              DVar2 = GetLastError();
              (**(code **)(*plVar3 + 0x30))
                        (plVar3,1,0x11400,L"CIsoBoot DeleteFileW Err = 0x%x, szFilePath:%s",DVar2,
                         param_2);
            }
            local_68 = 0x2091150d;
          }
        }
        else {
          plVar3 = (longlong *)FUN_1800033f0();
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x30))
                      (plVar3,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_68,
                       CONCAT44(uVar5,local_68 >> 0x14));
          }
        }
      }
    }
  }
  return local_68;
}




void FUN_18000e190(longlong param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_4b8 [32];
  uint local_498;
  uint local_490;
  uint local_488;
  longlong *local_480;
  longlong local_478;
  undefined1 local_468 [8];
  wchar_t local_460 [548];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_4b8;
  local_488 = 0x21411401;
  puVar2 = local_468;
  for (lVar1 = 0x444; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 == (wchar_t *)0x0) {
    local_488 = 0x21811405;
    local_480 = (longlong *)FUN_1800033f0();
    if (local_480 != (longlong *)0x0) {
      local_490 = local_488 >> 0x14;
      local_478 = *local_480;
      local_498 = local_488;
      (**(code **)(local_478 + 0x30))(local_480,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    wcscpy_s(local_460,0x110,param_2);
    local_488 = FUN_18000e3f0(param_1,*(undefined8 *)(param_1 + 0x10),8,local_468);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_4b8);
  return;
}




void FUN_18000e2a0(longlong *param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_718 [32];
  uint local_6f8;
  uint local_6f0;
  uint local_6e8;
  longlong *local_6e0;
  longlong local_6d8;
  undefined1 local_6c8 [4];
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_468;
  undefined4 local_464;
  wchar_t local_45c [546];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_718;
  local_6e8 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_6e8 = 0x22911405;
    local_6e0 = (longlong *)FUN_1800033f0();
    if (local_6e0 != (longlong *)0x0) {
      local_6f0 = local_6e8 >> 0x14;
      local_6d8 = *local_6e0;
      local_6f8 = local_6e8;
      (**(code **)(local_6d8 + 0x30))(local_6e0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    puVar2 = &local_468;
    for (lVar1 = 0x444; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((longlong)puVar2 + 1);
    }
    wcscpy_s(local_45c,0x110,param_2);
    (**(code **)(*param_1 + 0x10))(param_1,local_6c8);
    local_468 = local_6c4;
    local_464 = local_6c0;
    local_6e8 = FUN_18000e3f0((longlong)param_1,param_1[2],0xe,&local_468);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_718);
  return;
}




uint FUN_18000e3f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint local_48;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_48 = 0x23e11405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x23e11405,0x23e);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"CIsoBoot CallBack Type : %d",param_3);
    }
    local_48 = (**(code **)(param_1 + 8))(param_2,param_3,param_4);
    if (((local_48 & 0xfff) != 0) &&
       (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_48,local_48 >> 0x14);
    }
  }
  plVar1 = (longlong *)FUN_1800033f0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"CIsoBoot CallBack Result : %d",local_48);
  }
  return local_48;
}




undefined4 FUN_18000e5c0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18000e600(param_1,4,param_2);
  return uVar1;
}




undefined4 FUN_18000e600(longlong param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 local_18;
  
  FUN_180003830((__time64_t *)(param_1 + 0x18));
  FUN_180003ac0(param_1 + 0x18,param_2);
  FUN_180003a50(param_1 + 0x18,param_3);
  FUN_1800039e0(param_1 + 0x18,param_3);
  iVar1 = FUN_18000dac0(param_1);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0x25c11429;
  }
  return local_18;
}




longlong FUN_18000e690(undefined8 param_1,longlong param_2,ulonglong param_3,__uint64 param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_18000e840(param_1,local_18);
  FUN_18000e870(param_2,param_1,param_3,param_4,uVar1);
  return param_2;
}




void FUN_18000e700(undefined8 param_1,wchar_t param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180009d30(param_1);
  puVar2 = Myptr(puVar1);
  FUN_18000eaa0((longlong)puVar2,puVar1[2],param_3,param_2);
  return;
}




void FUN_18000e760(basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>
                   *param_1,wchar_t *param_2)

{
  std::basic_string<wchar_t,struct_std::char_traits<wchar_t>,class_std::allocator<wchar_t>_>::assign
            (param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000e7b5) */

longlong FUN_18000e790(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_180006030(param_2);
  if (param_1 != lVar1) {
    FUN_180009d30(param_2);
    FUN_18000e810(param_1);
    puVar2 = (undefined8 *)FUN_180009d30(param_2);
    puVar3 = Myptr(puVar2);
    FID_conflict_assign(param_1,(undefined1 *)puVar3,puVar2[2]);
  }
  return param_1;
}




void FUN_18000e810(undefined8 param_1)

{
  FUN_180009d30(param_1);
  _Pocca<>();
  return;
}




undefined8 FUN_18000e840(undefined8 param_1,undefined8 param_2)

{
  FUN_180009d30(param_1);
  return param_2;
}




longlong FUN_18000e870(longlong param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4,
                      undefined8 param_5)

{
  FUN_18000abf0(param_1,param_5);
  FID_conflict__Tidy_init(param_1);
  FUN_18000e8d0(param_1,param_2,param_3,param_4);
  return param_1;
}




void FUN_18000e8d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  _String_val<struct_std::_Simple_types<char>_> *this;
  __uint64 _Var1;
  undefined8 *puVar2;
  
  this = (_String_val<struct_std::_Simple_types<char>_> *)FUN_180009d30(param_2);
  FUN_18000a740((longlong)this,param_3);
  _Var1 = std::_String_val<struct_std::_Simple_types<char>_>::_Clamp_suffix_size
                    (this,param_3,param_4);
  puVar2 = Myptr((undefined8 *)this);
  FID_conflict_assign(param_1,(undefined1 *)((longlong)puVar2 + param_3 * 2),_Var1);
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




undefined8 FUN_18000e990(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = (undefined8 *)0x0;
  iVar1 = FUN_18000eb80(param_1,0xb400,&local_28);
  if (iVar1 == 0) {
    plVar2 = (longlong *)
             __RTDynamicCast(local_28,0,&ITbCreator::RTTI_Type_Descriptor,
                             &CTbBaseCreator<class_IOptions>::RTTI_Type_Descriptor,0);
    if ((plVar2 != (longlong *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0xb400)) {
      local_18 = (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)*local_28)(local_28);
  }
  else {
    local_20 = (longlong *)FUN_1800033f0();
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + 0x30))
                (local_20,1,0x11400,L"Failed to Load lib (Err=0x%x) %S",iVar1,param_1);
    }
    local_18 = 0;
  }
  return local_18;
}




longlong FUN_18000eaa0(longlong param_1,ulonglong param_2,ulonglong param_3,wchar_t param_4)

{
  longlong lVar1;
  wchar_t local_res20 [4];
  
  if ((param_3 < param_2) &&
     (local_res20[0] = param_4,
     lVar1 = FUN_18000eb50((wchar_t *)(param_1 + param_3 * 2),param_2 - param_3,local_res20),
     lVar1 != 0)) {
    return lVar1 - param_1 >> 1;
  }
  return -1;
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
  FUN_18000ec40();
  return;
}




void FUN_18000eb50(wchar_t *param_1,size_t param_2,wchar_t *param_3)

{
  wmemchr(param_1,*param_3,param_2);
  return;
}




undefined4 FUN_18000eb80(char *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18001eb98) {
    _Init_thread_header(&DAT_18001eb98);
    if (DAT_18001eb98 == -1) {
      DAT_18001eb90 = (code *)FUN_1800012e0(param_1,&local_20);
      _Init_thread_footer(&DAT_18001eb98);
    }
  }
  if (DAT_18001eb90 == (code *)0x0) {
    uVar1 = 0x12411402;
  }
  else {
    uVar1 = (*DAT_18001eb90)(0x10000,param_2,param_3);
  }
  return uVar1;
}




void FUN_18000ec40(void)

{
  return;
}




undefined8 FUN_18000ec50(LPWSTR param_1,DWORD param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  int local_28;
  longlong local_20;
  
  if (param_1 == (LPWSTR)0x0) {
    uVar2 = 0x6311409;
  }
  else {
    DVar1 = GetModuleFileNameW((HMODULE)0x0,param_1,param_2);
    if (DVar1 == 0) {
      uVar2 = 0x6911602;
    }
    else {
      local_20 = -1;
      do {
        local_20 = local_20 + 1;
      } while (param_1[local_20] != L'\0');
      for (local_28 = (int)local_20; param_1[local_28] != L'\\'; local_28 = local_28 + -1) {
        param_1[local_28] = L'\0';
      }
      param_1[local_28] = L'\0';
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 * FUN_18000ed60(undefined8 *param_1)

{
  *param_1 = CUsbBoot::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_180003770(param_1 + 4);
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return param_1;
}




void FUN_18000edf0(undefined8 *param_1)

{
  *param_1 = CUsbBoot::vftable;
  FUN_1800037b0();
  return;
}




undefined4 FUN_18000ee20(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 local_28;
  
  local_28 = 0;
  if (param_2 == 0) {
    local_28 = 0x2f11409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x2f11409,0x2f);
    }
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  return local_28;
}




undefined4 FUN_18000eee0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    FUN_1800037c0((undefined8 *)(param_1 + 0x20));
    FUN_180003ac0(param_1 + 0x20,3);
    *(undefined4 *)(param_1 + 0x29c) = 1;
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  return 0;
}




undefined4 FUN_18000efc0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x29c) == 0) {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x298) = 0;
  }
  return 0;
}




void FUN_18000f070(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  WCHAR *pWVar5;
  undefined1 auStackY_7c8 [32];
  uint local_788;
  undefined4 local_784;
  longlong local_780;
  uint local_778;
  uint local_774;
  undefined4 local_770;
  uint local_76c;
  uint local_768;
  undefined4 local_764;
  longlong *local_760;
  longlong *local_758;
  longlong *local_750;
  longlong *local_748;
  longlong *local_740;
  longlong *local_738;
  longlong *local_730;
  longlong *local_728;
  longlong *local_720;
  longlong *local_718;
  longlong *local_710;
  longlong *local_708;
  longlong *local_700;
  longlong local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  longlong local_6a0;
  longlong local_698;
  longlong local_690;
  longlong local_688;
  WCHAR local_678 [272];
  WCHAR local_458 [272];
  WCHAR local_238 [272];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStackY_7c8;
  local_784 = 0;
  pWVar5 = local_238;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_678;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  pWVar5 = local_458;
  for (lVar4 = 0x220; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)pWVar5 = 0;
    pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
  }
  local_770 = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  FUN_1800038a0(0x1800171f8,local_458,0x110);
  if (param_2 == 0) {
    local_788 = 0x6411409;
    local_760 = (longlong *)FUN_1800033f0();
    if (local_760 != (longlong *)0x0) {
      local_6f8 = *local_760;
      (**(code **)(local_6f8 + 0x30))(local_760,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    local_758 = (longlong *)FUN_1800033f0();
    if (local_758 != (longlong *)0x0) {
      (**(code **)(*local_758 + 0x30))(local_758,1,0x11400,L"CUsbBoot Execute Start!");
    }
    FUN_180003b70((longlong)(param_1 + 4),*(undefined4 *)(param_2 + 4));
    local_780 = FUN_180001410(param_2);
    if (local_780 == 0) {
      local_788 = 0x6a11405;
      local_750 = (longlong *)FUN_1800033f0();
      if (local_750 != (longlong *)0x0) {
        local_6f0 = *local_750;
        (**(code **)(local_6f0 + 0x30))(local_750,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
      }
    }
    else if (((*(uint *)(local_780 + 0x1658) >> 2 & 1) == 0) ||
            (local_788 = FUN_180009600(param_1[1],param_1[2],(longlong)(param_1 + 4),
                                       (char *)(param_1 + 0x54)), (local_788 & 0xfff) == 0)) {
      GetPrivateProfileStringW(L"BootDriver",L"USBInit",(LPCWSTR)0x0,local_678,0x110,local_458);
      FUN_18000fec0(param_1,local_678);
      local_740 = (longlong *)FUN_1800033f0();
      if (local_740 != (longlong *)0x0) {
        (**(code **)(*local_740 + 0x30))(local_740,1,0x11400,L"CUsbBoot Execute Init!");
      }
      FUN_180003ac0((longlong)(param_1 + 4),4);
      lVar4 = FUN_1800034c0("Boot");
      param_1[3] = lVar4;
      if (param_1[3] == 0) {
        local_788 = 0x7a1140a;
        local_738 = (longlong *)FUN_1800033f0();
        if (local_738 != (longlong *)0x0) {
          local_6e0 = *local_738;
          (**(code **)(local_6e0 + 0x30))
                    (local_738,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
        }
      }
      else {
        uVar3 = FUN_18000ec50(local_238,0x110);
        local_788 = (uint)uVar3;
        if ((uVar3 & 0xfff) == 0) {
          local_728 = (longlong *)FUN_1800033f0();
          if (local_728 != (longlong *)0x0) {
            (**(code **)(*local_728 + 0x30))(local_728,1,0x11400,L"CUsbBoot Init!");
          }
          local_6d0 = param_1[3];
          local_6c8 = *(longlong *)param_1[3];
          uVar1 = (**(code **)(local_6c8 + 0x20))(local_6d0,1,local_780 + 0x1668,local_238);
          iVar2 = FUN_1800048e0((longlong)param_1);
          local_778 = uVar1;
          if (iVar2 != 0) {
            local_778 = 0x8811429;
          }
          local_788 = local_778;
          if ((local_778 & 0xfff) == 0) {
            local_6b8 = param_1[3];
            local_6b0 = *(longlong *)param_1[3];
            uVar1 = (**(code **)(local_6b0 + 0x40))(local_6b8,local_780 + 0x1664,&local_784);
            iVar2 = FUN_1800048e0((longlong)param_1);
            local_774 = uVar1;
            if (iVar2 != 0) {
              local_774 = 0x8c11429;
            }
            local_788 = local_774;
            if (((local_774 & 0xfff) == 0x7c6) || ((local_774 & 0xfff) == 0x7c5)) {
              if ((local_774 & 0xfff) == 0x7c5) {
                local_770 = 1;
              }
              pWVar5 = local_678;
              for (lVar4 = 0x110; lVar4 != 0; lVar4 = lVar4 + -1) {
                *(undefined1 *)pWVar5 = 0;
                pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
              }
              GetPrivateProfileStringW
                        (L"BootDriver",L"USBEraseRuning",(LPCWSTR)0x0,local_678,0x110,local_458);
              FUN_18000fec0(param_1,local_678);
              uVar1 = (**(code **)(*(longlong *)param_1[3] + 0x60))
                                (param_1[3],*(undefined4 *)(local_780 + 0x1664),local_770,0);
              iVar2 = FUN_1800048e0((longlong)param_1);
              local_76c = uVar1;
              if (iVar2 != 0) {
                local_76c = 0x9c11429;
              }
              local_788 = local_76c;
              if ((local_76c & 0xfff) != 0) {
                local_718 = (longlong *)FUN_1800033f0();
                if (local_718 != (longlong *)0x0) {
                  local_6a8 = *local_718;
                  (**(code **)(local_6a8 + 0x30))
                            (local_718,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
                }
                goto LAB_18000fbf8;
              }
              pWVar5 = local_678;
              for (lVar4 = 0x110; lVar4 != 0; lVar4 = lVar4 + -1) {
                *(undefined1 *)pWVar5 = 0;
                pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
              }
              GetPrivateProfileStringW
                        (L"BootDriver",L"USBEraseFinish",(LPCWSTR)0x0,local_678,0x110,local_458);
              FUN_18000fec0(param_1,local_678);
              local_6a0 = param_1[3];
              local_698 = *(longlong *)param_1[3];
              local_788 = (**(code **)(local_698 + 0x40))(local_6a0,local_780 + 0x1664,&local_784);
              if ((local_788 & 0xfff) == 0x7c6) {
                local_788 = 0;
              }
            }
            if ((local_788 & 0xfff) == 0) {
              pWVar5 = local_678;
              for (lVar4 = 0x110; lVar4 != 0; lVar4 = lVar4 + -1) {
                *(undefined1 *)pWVar5 = 0;
                pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
              }
              GetPrivateProfileStringW
                        (L"BootDriver",L"USBBurnRuning",(LPCWSTR)0x0,local_678,0x110,local_458);
              FUN_18000fec0(param_1,local_678);
              uVar1 = (**(code **)(*(longlong *)param_1[3] + 0x48))
                                (param_1[3],*(undefined4 *)(local_780 + 0x1664),local_784,param_4);
              iVar2 = FUN_1800048e0((longlong)param_1);
              local_768 = uVar1;
              if (iVar2 != 0) {
                local_768 = 0xaf11429;
              }
              local_788 = local_768;
              if ((local_768 & 0xfff) == 0) {
                pWVar5 = local_678;
                for (lVar4 = 0x110; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *(undefined1 *)pWVar5 = 0;
                  pWVar5 = (WCHAR *)((longlong)pWVar5 + 1);
                }
                GetPrivateProfileStringW
                          (L"BootDriver",L"USBSuccess",(LPCWSTR)0x0,local_678,0x110,local_458);
                FUN_18000fec0(param_1,local_678);
              }
              else {
                local_708 = (longlong *)FUN_1800033f0();
                if (local_708 != (longlong *)0x0) {
                  local_688 = *local_708;
                  (**(code **)(local_688 + 0x30))
                            (local_708,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
                }
              }
            }
            else {
              local_710 = (longlong *)FUN_1800033f0();
              if (local_710 != (longlong *)0x0) {
                local_690 = *local_710;
                (**(code **)(local_690 + 0x30))
                          (local_710,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
              }
            }
          }
          else {
            local_720 = (longlong *)FUN_1800033f0();
            if (local_720 != (longlong *)0x0) {
              local_6c0 = *local_720;
              (**(code **)(local_6c0 + 0x30))
                        (local_720,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
            }
          }
        }
        else {
          local_730 = (longlong *)FUN_1800033f0();
          if (local_730 != (longlong *)0x0) {
            local_6d8 = *local_730;
            (**(code **)(local_6d8 + 0x30))
                      (local_730,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
          }
        }
      }
    }
    else {
      local_748 = (longlong *)FUN_1800033f0();
      if (local_748 != (longlong *)0x0) {
        local_6e8 = *local_748;
        (**(code **)(local_6e8 + 0x30))(local_748,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
      }
    }
  }
LAB_18000fbf8:
  if (param_1[3] != 0) {
    (**(code **)(*(longlong *)param_1[3] + 0x28))(param_1[3]);
    (*(code *)**(undefined8 **)param_1[3])(param_1[3]);
    param_1[3] = 0;
  }
  FUN_180003ae0((longlong)(param_1 + 4),local_788);
  iVar2 = FUN_1800048e0((longlong)param_1);
  if (iVar2 == 0) {
    local_764 = 5;
  }
  else {
    local_764 = 2;
  }
  FUN_180003ac0((longlong)(param_1 + 4),local_764);
  *(undefined4 *)(param_1 + 0x53) = 0;
  local_700 = (longlong *)FUN_1800033f0();
  if (local_700 != (longlong *)0x0) {
    (**(code **)(*local_700 + 0x30))(local_700,1,0x11400,L"CUsbBoot Execute End! Err = %d");
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_7c8);
  return;
}




undefined4 FUN_18000fd30(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  __time64_t *p_Var2;
  longlong lVar3;
  undefined4 local_38;
  
  local_38 = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_38 = 0xc511409;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0xc511409,0xc5);
    }
  }
  else {
    p_Var2 = FUN_180003830((__time64_t *)(param_1 + 0x20));
    for (lVar3 = 600; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_2 = (char)*p_Var2;
      p_Var2 = (__time64_t *)((longlong)p_Var2 + 1);
      param_2 = param_2 + 1;
    }
  }
  return local_38;
}




undefined4 FUN_18000fdf0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2a0) = 1;
  return 0;
}




undefined8 FUN_18000fe20(void)

{
  return 0xe311401;
}




undefined4 FUN_18000fe30(longlong param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 local_18;
  
  FUN_180003830((__time64_t *)(param_1 + 0x20));
  FUN_180003ac0(param_1 + 0x20,param_2);
  FUN_180003a50(param_1 + 0x20,param_3);
  FUN_1800039e0(param_1 + 0x20,param_3);
  iVar1 = FUN_1800048e0(param_1);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xf211429;
  }
  return local_18;
}




void FUN_18000fec0(longlong *param_1,wchar_t *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_718 [32];
  uint local_6f8;
  uint local_6f0;
  uint local_6e8;
  longlong *local_6e0;
  longlong local_6d8;
  undefined1 local_6c8 [4];
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_468;
  undefined4 local_464;
  wchar_t local_45c [546];
  ulonglong local_18;
  
  local_18 = DAT_18001e010 ^ (ulonglong)auStack_718;
  local_6e8 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_6e8 = 0x10e11405;
    local_6e0 = (longlong *)FUN_1800033f0();
    if (local_6e0 != (longlong *)0x0) {
      local_6f0 = local_6e8 >> 0x14;
      local_6d8 = *local_6e0;
      local_6f8 = local_6e8;
      (**(code **)(local_6d8 + 0x30))(local_6e0,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d");
    }
  }
  else {
    puVar2 = local_6c8;
    for (lVar1 = 600; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar3 = &local_468;
    for (lVar1 = 0x444; lVar1 != 0; lVar1 = lVar1 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
    }
    wcscpy_s(local_45c,0x110,param_2);
    (**(code **)(*param_1 + 0x10))(param_1,local_6c8);
    local_468 = local_6c4;
    local_464 = local_6c0;
    local_6e8 = FUN_180010020((longlong)param_1,param_1[2],0xe,&local_468);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_718);
  return;
}




uint FUN_180010020(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint local_48;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_48 = 0x12411405;
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",0x12411405,0x124);
    }
  }
  else {
    plVar1 = (longlong *)FUN_1800033f0();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"CUsbBoot CallBack Type : %d",param_3);
    }
    local_48 = (**(code **)(param_1 + 8))(param_2,param_3,param_4);
    if (((local_48 & 0xfff) != 0) &&
       (plVar1 = (longlong *)FUN_1800033f0(), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))
                (plVar1,1,0x11400,L"BootDriver: Error = 0x%x, Line = %d",local_48,local_48 >> 0x14);
    }
  }
  plVar1 = (longlong *)FUN_1800033f0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1,0x11400,L"CUsbBoot CallBack Result : %d",local_48);
  }
  return local_48;
}




undefined4 FUN_1800101f0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18000fe30(param_1,4,param_2);
  return uVar1;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18001e010) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_18001026c(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18001e3b0,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_1800103be;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18001e3e0 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18001e3e0 != (HANDLE)0x0) goto LAB_18001035c;
  }
  else {
    DAT_18001e3e0 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18001e3d8);
    bVar7 = 0x40 - ((byte)DAT_18001e010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18001e3e8 = DAT_18001e010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18001e3f0 = DAT_18001e010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18001035c:
    uVar6 = FUN_1800107a8(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_1800103cc);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_1800103be:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_1800103cc(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
  if (DAT_18001e3e0 != (HANDLE)0x0) {
    CloseHandle(DAT_18001e3e0);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001e000 = DAT_18001e000 + 1;
  *param_1 = DAT_18001e000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001e000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1800104d8:
                    /* WARNING: Could not recover jumptable at 0x0001800104e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001e000;
      goto LAB_1800104d8;
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
  
  if (DAT_18001e3e0 != (HANDLE)0x0) {
    SetEvent(DAT_18001e3e0);
                    /* WARNING: Could not recover jumptable at 0x000180010535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18001e3e0);
    return;
  }
  bVar1 = (byte)DAT_18001e010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180011830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001e010 ^ _DAT_18001e3f0) >> bVar1 |
            (DAT_18001e010 ^ _DAT_18001e3f0) << 0x40 - bVar1))(&DAT_18001e3d8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18001e3e0 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
    WaitForSingleObjectEx(DAT_18001e3e0,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001800105ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18001e3b0);
    return;
  }
  bVar1 = (byte)DAT_18001e010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180011830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18001e010 ^ _DAT_18001e3e8) >> bVar1 |
            (DAT_18001e010 ^ _DAT_18001e3e8) << 0x40 - bVar1))
            (&DAT_18001e3d8,&DAT_18001e3b0,param_1);
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
    FUN_1800112e4();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_1800112c4();
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
LAB_18001061e:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18001e400 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18001e400;
        pvVar1 = DAT_18001e400;
      }
      DAT_18001e400 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18001061e;
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
    uVar3 = FUN_180011494();
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
  
  uVar1 = FUN_1800107a8(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_1800116ac();
  if (cVar1 != '\0') {
    cVar1 = FUN_1800116ac();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1800116ac();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_1800116ac();
  FUN_1800116ac();
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
    _execute_onexit_table(&DAT_18001e410);
    return;
  }
  uVar2 = FUN_1800116b0();
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
  FUN_1800116ac();
  FUN_1800116ac();
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
    DAT_18001e408 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_1800116ac();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800116ac();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_1800116ac();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800107a8(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18001e409 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18001e010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18001e010;
      _DAT_18001e410 = in_RAX;
      uRam000000018001e418 = in_RAX;
      _DAT_18001e420 = in_RAX;
      _DAT_18001e428 = in_RAX;
      uRam000000018001e430 = in_RAX;
      _DAT_18001e438 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18001e410);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18001e428), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18001e409 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018001090e) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000218; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_180000308;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_1800108f7;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1800108f7:
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
    DAT_18001e400 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18001e408 == '\0') || (param_2 == '\0')) {
    FUN_1800116ac();
    FUN_1800116ac();
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
  
  bVar2 = (byte)DAT_18001e010 & 0x3f;
  if (((DAT_18001e010 ^ _DAT_18001e410) >> bVar2 | (DAT_18001e010 ^ _DAT_18001e410) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18001e410,_Func);
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




undefined8 * FUN_1800109dc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
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
                    /* WARNING: Could not recover jumptable at 0x000180010a35. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180010a66;
  capture_previous_context((PCONTEXT)&DAT_18001e4e0);
  _DAT_18001e450 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18001e578 = puVar3 + 0x40;
  _DAT_18001e560 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18001e440 = 0xc0000409;
  _DAT_18001e444 = 1;
  _DAT_18001e458 = 1;
  DAT_18001e460 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18001e010;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18001e008;
  *(undefined8 *)(puVar3 + -8) = 0x180010b08;
  DAT_18001e5d8 = _DAT_18001e450;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800134e8);
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
  *(undefined8 *)(puVar3 + -8) = 0x180010b4e;
  capture_current_context((PCONTEXT)&DAT_18001e4e0);
  _DAT_18001e450 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18001e578 = puVar3 + 0x30;
  _DAT_18001e440 = 0xc0000409;
  _DAT_18001e444 = 1;
  _DAT_18001e458 = 1;
  DAT_18001e460 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180010bba;
  DAT_18001e5d8 = _DAT_18001e450;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1800134e8);
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
    if (DAT_18001e9b0 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18001e9b0 = DAT_18001e9b0 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18001e3f8 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180011564();
      FID_conflict__RTC_Initialize();
      DAT_18001e3f8 = 0;
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
    if (DAT_18001e3f8 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18001e3f8 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180011554();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180013398,&DAT_1800133a8);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180013330,&DAT_180013390);
        DAT_18001e3f8 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180011594();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18001e9b0 = DAT_18001e9b0 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000180010f64) */
/* WARNING: Removing unreachable block (ram,0x000180010ef3) */
/* WARNING: Removing unreachable block (ram,0x000180010fa7) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18001e9b0 < 1)) {
    iVar1 = 0;
  }
  else if ((1 < param_2 - 1) || (iVar1 = dllmain_crt_dispatch(param_1,param_2,param_3), iVar1 != 0))
  {
    uVar2 = FUN_180005c10();
    iVar1 = (int)uVar2;
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_180005c10();
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001101c(void)

{
  _DAT_18001e9b4 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x180011057;
  FUN_18001101c();
  *(undefined8 *)(puVar4 + -8) = 0x180011068;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x180011072;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18001108c;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x1800110cd;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x1800110ff;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180011121;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180011142;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18001114d;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18001115d;
    FUN_18001101c();
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




undefined8 * FUN_180011174(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800111b4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1800111d4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_180011214(undefined8 *param_1)

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




undefined8 * FUN_180011280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800112c4(void)

{
  undefined8 local_28 [5];
  
  FUN_1800111b4(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001c3d0);
}




void FUN_1800112e4(void)

{
  undefined8 local_28 [5];
  
  FUN_180011214(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18001c458);
}




char * FUN_180011304(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800113e6) */
/* WARNING: Removing unreachable block (ram,0x000180011364) */
/* WARNING: Removing unreachable block (ram,0x00018001133f) */
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
  
  DAT_18001e01c = 2;
  _DAT_18001e018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18001e020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18001e9bc = DAT_18001e9bc | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18001e9bc = DAT_18001e9bc | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18001e018 = 2;
    DAT_18001e01c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001e01c = 0xe;
      _DAT_18001e018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18001e018 = 5;
        DAT_18001e01c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180011494(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18001e030 != 0;
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
  
  if (DAT_18001e010 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18001e010 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18001e010 == 0x2b992ddfa232) {
      DAT_18001e010 = 0x2b992ddfa233;
    }
  }
  DAT_18001e008 = ~DAT_18001e010;
  return;
}




void FUN_180011554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018001155b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18001e9c0);
  return;
}




void FUN_180011564(void)

{
  __std_type_info_destroy_list(&DAT_18001e9c0);
  return;
}




undefined * FUN_180011570(void)

{
  return &DAT_18001e9d0;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180005c40();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180011570();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180011594(void)

{
  return &DAT_18001eba0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_18001b2e8; puVar1 < &DAT_18001b2e8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_18001b2f8; puVar1 < &DAT_18001b2f8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_1800116ac(void)

{
  return 1;
}




undefined8 FUN_1800116b0(void)

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
  
                    /* WARNING: Could not recover jumptable at 0x000180011830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_180011840(undefined8 param_1,longlong param_2)

{
  FUN_180003140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180011858(undefined8 param_1,longlong param_2)

{
  std::ios_base::~ios_base((ios_base *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180011874(undefined8 param_1,longlong param_2)

{
  FUN_180003c30((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_180011890(undefined8 param_1,longlong param_2)

{
  FUN_18000edf0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x2f0));
  return;
}




void Unwind_1800118af(undefined8 param_1,longlong param_2)

{
  FUN_18000c3c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x598));
  return;
}




void Unwind_1800118d0(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x28));
  return;
}




undefined8 Catch_All_1800118ed(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0x180003078;
}




void Unwind_180011910(void)

{
  _Init_thread_abort(&DAT_18001e9d8);
  return;
}




void Unwind_180011930(void)

{
  _Init_thread_abort(&DAT_18001e9e8);
  return;
}




void Unwind_180011950(void)

{
  _Init_thread_abort(&DAT_18001eb84);
  return;
}




void Unwind_180011970(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x120);
  return;
}




void Unwind_18001198b(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x100);
  return;
}




void Unwind_1800119a6(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_1800119be(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1800119e0(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x100);
  return;
}




void Unwind_1800119fb(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_180011a13(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_180011a30(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_180011a4b(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_180011a66(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_180011a90(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x78);
  return;
}




void Unwind_180011aa8(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x98);
  return;
}




void Unwind_180011ad0(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x108);
  return;
}




void Unwind_180011aeb(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_180011b03(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_180011b20(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x200));
  return;
}




void Unwind_180011b3b(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x1f8));
  return;
}




void Unwind_180011b56(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(*(undefined8 *)(param_2 + 0x1f0));
  return;
}




void Unwind_180011b71(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x88);
  return;
}




void Unwind_180011b8c(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 200);
  return;
}




void Unwind_180011ba7(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0xa8);
  return;
}




void Unwind_180011bc2(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x128);
  return;
}




void Unwind_180011bdd(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x1a8);
  return;
}




void Unwind_180011bf8(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x188);
  return;
}




void Unwind_180011c13(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x168);
  return;
}




void Unwind_180011c30(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0xb8);
  return;
}




void Unwind_180011c4b(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x98);
  return;
}




void Unwind_180011c70(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x80);
  return;
}




void Unwind_180011c90(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x68);
  return;
}




void Unwind_180011ca8(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x88);
  return;
}




void Unwind_180011cd0(undefined8 param_1,longlong param_2)

{
  FUN_180006390((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_180011cf0(void)

{
  FUN_180009c80();
  return;
}




void Unwind_180011d10(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x38);
  return;
}




void Unwind_180011d30(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x80);
  return;
}




void Unwind_180011d4b(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x60);
  return;
}




void Unwind_180011d63(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0xe0);
  return;
}




void Unwind_180011d80(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0xa8);
  return;
}




void Unwind_180011da0(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0xa0);
  return;
}




void Unwind_180011dbb(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x80);
  return;
}




void Unwind_180011dd6(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x60);
  return;
}




void Unwind_180011dee(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0xc0);
  return;
}




void Unwind_180011e09(undefined8 param_1,longlong param_2)

{
  FUN_180009a50(param_2 + 0x100);
  return;
}




void Unwind_180011e30(void)

{
  _Init_thread_abort(&DAT_18001eb98);
  return;
}




void FUN_180011e63(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180011e7a(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_180011e96(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180011ed0(void)

{
  FUN_180001d80((undefined8 *)&DAT_18001eb78);
  return;
}




void FUN_180011ef0(void)

{
  FUN_180009a50(&DAT_18001ea48);
  return;
}




void FUN_180011f10(void)

{
  FUN_180009a50(&DAT_18001eaa8);
  return;
}




void FUN_180011f30(void)

{
  FUN_180009a50(&DAT_18001eb08);
  return;
}




void FUN_180011f50(void)

{
  FUN_180009a50(&DAT_18001ea28);
  return;
}




void FUN_180011f70(void)

{
  FUN_180009a50(&DAT_18001eb48);
  return;
}




void FUN_180011f90(void)

{
  FUN_180009a50(&DAT_18001eb28);
  return;
}




void FUN_180011fb0(void)

{
  FUN_180009a50(&DAT_18001eae8);
  return;
}




void FUN_180011fd0(void)

{
  FUN_180009a50(&DAT_18001eac8);
  return;
}




void FUN_180011ff0(void)

{
  FUN_180009a50(&DAT_18001ea88);
  return;
}




void FUN_180012010(void)

{
  FUN_180009a50(&DAT_18001ea08);
  return;
}




void FUN_180012030(void)

{
  FUN_180009a50(&DAT_18001ea68);
  return;
}



