
size_t FUN_180001000(char *param_1,wchar_t *param_2,size_t param_3)

{
  char *_Locale;
  size_t sVar1;
  
  _Locale = setlocale(0,"chs");
  if (param_1 == (char *)0x0) {
    param_3 = 0;
    param_1 = (char *)0x0;
  }
  sVar1 = wcstombs(param_1,param_2,param_3);
  if (_Locale != (char *)0x0) {
    setlocale(0,_Locale);
  }
  return sVar1;
}




longlong FUN_180001080(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = 0;
  pcVar1 = setlocale(0,"chs");
  lVar6 = lVar2;
  lVar7 = lVar2;
  if (2 < param_3) {
    do {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (((wchar_t *)(lVar2 + param_2))[lVar4] != L'\0');
      lVar5 = lVar5 + 2;
      if (lVar5 == 1) break;
      sVar3 = wcstombs((char *)(lVar6 + param_1),(wchar_t *)(lVar2 + param_2),lVar5 * 2);
      lVar6 = lVar6 + lVar5;
      lVar7 = lVar7 + sVar3 + 1;
      lVar2 = lVar6 * 2;
      *(undefined1 *)(lVar6 + -1 + param_1) = 0;
    } while (lVar2 + 2U < param_3);
  }
  if (pcVar1 == (char *)0x0) {
    setlocale(0,(char *)0x0);
  }
  return lVar7;
}




size_t FUN_180001160(wchar_t *param_1,char *param_2,size_t param_3)

{
  char *_Locale;
  size_t sVar1;
  
  _Locale = setlocale(0,"chs");
  if (param_1 == (wchar_t *)0x0) {
    param_3 = 0;
    param_1 = (wchar_t *)0x0;
  }
  sVar1 = mbstowcs(param_1,param_2,param_3);
  if (_Locale != (char *)0x0) {
    setlocale(0,_Locale);
  }
  return sVar1;
}




longlong FUN_1800011e0(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  size_t sVar2;
  longlong lVar3;
  size_t _MaxCount;
  longlong lVar5;
  longlong lVar6;
  longlong lVar4;
  
  lVar5 = 0;
  pcVar1 = setlocale(0,"chs");
  lVar6 = lVar5;
  if (1 < param_3) {
    do {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (((char *)(lVar6 + param_2))[lVar3] != '\0');
      _MaxCount = lVar4 + 2;
      if (_MaxCount == 1) break;
      sVar2 = mbstowcs((wchar_t *)(param_1 + lVar6 * 2),(char *)(lVar6 + param_2),_MaxCount);
      lVar6 = lVar6 + _MaxCount;
      lVar5 = lVar5 + 1 + sVar2;
      *(undefined2 *)(param_1 + -2 + lVar6 * 2) = 0;
    } while (lVar6 + 1U < param_3);
  }
  if (pcVar1 == (char *)0x0) {
    setlocale(0,(char *)0x0);
  }
  return lVar5;
}




bool FUN_1800012d0(FILE *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else if ((param_3 != 1) && (param_3 == 2)) {
    iVar1 = 2;
  }
  iVar1 = _fseeki64(param_1,*param_2,iVar1);
  return iVar1 == 0;
}




bool FUN_180001310(FILE *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  size_t sVar2;
  
  uVar1 = *param_4;
  sVar2 = fread(param_2,(ulonglong)param_3,(ulonglong)uVar1,param_1);
  *param_4 = (uint)sVar2;
  return (uint)sVar2 == uVar1;
}




bool FUN_180001350(FILE *param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  size_t sVar2;
  
  uVar1 = *param_4;
  sVar2 = fwrite(param_2,(ulonglong)param_3,(ulonglong)uVar1,param_1);
  *param_4 = (uint)sVar2;
  return (uint)sVar2 == uVar1;
}




ulonglong FUN_1800013e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (DAT_180014930 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(*DAT_180014930 + 0x10))(DAT_180014930,param_1,param_2,param_3,param_4);
  return uVar1;
}




ulonglong FUN_180001420(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (DAT_180014930 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(*DAT_180014930 + 0x18))(DAT_180014930,param_1,param_2,param_3,param_4);
  return uVar1;
}




/* long __cdecl RegAPI::OpenHiveByVolumeA(char const * __ptr64,class CRegVolumeDevice *
   __ptr64,struct HKEY__ * __ptr64 * __ptr64) */

long __cdecl RegAPI::OpenHiveByVolumeA(char *param_1,CRegVolumeDevice *param_2,HKEY__ **param_3)

{
  void *pvVar1;
  long extraout_EAX;
  char *pcVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  void *_Memory;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  wchar_t local_50;
  undefined6 uStack_4e;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
                    /* 0x1460  4
                       ?OpenHiveByVolumeA@RegAPI@@YAJPEBDPEAVCRegVolumeDevice@@PEAPEAUHKEY__@@@Z */
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStack_78;
  pcVar2 = setlocale(0,"chs");
  sVar3 = mbstowcs((wchar_t *)0x0,param_1,0);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  local_40 = 0;
  uStack_38 = 7;
  local_50 = L'\0';
  FUN_180005b80((longlong *)&local_50,sVar3);
  pwVar4 = &local_50;
  if (7 < uStack_38) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_4e,local_50);
  }
  pcVar2 = setlocale(0,"chs");
  if (pwVar4 == (wchar_t *)0x0) {
    sVar3 = 0;
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    sVar3 = sVar3 + 1;
  }
  mbstowcs(pwVar4,param_1,sVar3);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  pwVar4 = &local_50;
  if (7 < uStack_38) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_4e,local_50);
  }
  OpenHiveByVolumeW(pwVar4,param_2,param_3);
  if (7 < uStack_38) {
    pvVar1 = (void *)CONCAT62(uStack_4e,local_50);
    _Memory = pvVar1;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
  return extraout_EAX;
}




/* long __cdecl RegAPI::OpenHiveByVolumeW(wchar_t const * __ptr64,class CRegVolumeDevice *
   __ptr64,struct HKEY__ * __ptr64 * __ptr64) */

long __cdecl RegAPI::OpenHiveByVolumeW(wchar_t *param_1,CRegVolumeDevice *param_2,HKEY__ **param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_res10;
  HKEY__ **local_res18;
  HKEY__ *local_res20;
  ulonglong in_stack_ffffffffffffffd8;
  
                    /* 0x15c0  5
                       ?OpenHiveByVolumeW@RegAPI@@YAJPEB_WPEAVCRegVolumeDevice@@PEAPEAUHKEY__@@@Z */
  if (param_2 != (CRegVolumeDevice *)0x0) {
    local_res10 = 0;
    DAT_180014930 = param_2;
    local_res18 = param_3;
    cVar1 = (*(code *)**(undefined8 **)param_2)
                      (param_2,&local_res10,param_1,3,in_stack_ffffffffffffffd8 & 0xffffffff00000000
                       ,3,0xfffffffffffffffe);
    if (cVar1 != '\0') {
      local_res20 = (HKEY__ *)0x0;
      puVar3 = (undefined8 *)operator_new(0x1070);
      local_res20 = (HKEY__ *)
                    FUN_180007300(puVar3,param_1,local_res10,&LAB_180001390,FUN_1800013e0,
                                  FUN_180001420);
      if ((local_res20 != (HKEY__ *)0x0) && (*(uint *)(local_res20 + 0x20) == 0x66676572)) {
        uVar2 = FUN_180007670((uint *)(local_res20 + 0x20));
        if (uVar2 == *(uint *)(local_res20 + 0x21c)) {
          *param_3 = local_res20;
          return 0;
        }
      }
      return 5;
    }
  }
  return 0x57;
}




/* long __cdecl RegAPI::CloseHiveByVolume(struct HKEY__ * __ptr64 * __ptr64,class CRegVolumeDevice *
   __ptr64) */

long __cdecl RegAPI::CloseHiveByVolume(HKEY__ **param_1,CRegVolumeDevice *param_2)

{
  longlong *plVar1;
  
                    /* 0x16d0  2
                       ?CloseHiveByVolume@RegAPI@@YAJPEAPEAUHKEY__@@PEAVCRegVolumeDevice@@@Z */
  if (param_1 != (HKEY__ **)0x0) {
    plVar1 = (longlong *)
             __RTDynamicCast(*param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::Hive::RTTI_Type_Descriptor,0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2 + 0x20))(param_2,plVar1[0x204]);
      (**(code **)(*plVar1 + 0x50))(plVar1,1);
      *param_1 = (HKEY__ *)0x0;
      return 0;
    }
  }
  return 0x57;
}




/* long __cdecl RegAPI::OpenHiveA(char const * __ptr64,struct HKEY__ * __ptr64 * __ptr64,bool) */

long __cdecl RegAPI::OpenHiveA(char *param_1,HKEY__ **param_2,bool param_3)

{
  void *pvVar1;
  long extraout_EAX;
  char *pcVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  void *_Memory;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  wchar_t local_50;
  undefined6 uStack_4e;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
                    /* 0x1760  3  ?OpenHiveA@RegAPI@@YAJPEBDPEAPEAUHKEY__@@_N@Z */
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStack_78;
  pcVar2 = setlocale(0,"chs");
  sVar3 = mbstowcs((wchar_t *)0x0,param_1,0);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  local_40 = 0;
  uStack_38 = 7;
  local_50 = L'\0';
  FUN_180005b80((longlong *)&local_50,sVar3);
  pwVar4 = &local_50;
  if (7 < uStack_38) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_4e,local_50);
  }
  pcVar2 = setlocale(0,"chs");
  if (pwVar4 == (wchar_t *)0x0) {
    sVar3 = 0;
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    sVar3 = sVar3 + 1;
  }
  mbstowcs(pwVar4,param_1,sVar3);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  pwVar4 = &local_50;
  if (7 < uStack_38) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_4e,local_50);
  }
  OpenHiveW(pwVar4,param_2,param_3);
  if (7 < uStack_38) {
    pvVar1 = (void *)CONCAT62(uStack_4e,local_50);
    _Memory = pvVar1;
    if ((0xfff < uStack_38 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegOpenKeyExA(struct HKEY__ * __ptr64,char const * __ptr64,unsigned
   long,unsigned long,struct HKEY__ * __ptr64 * __ptr64) */

long __cdecl
RegAPI::RegOpenKeyExA(HKEY__ *param_1,char *param_2,ulong param_3,ulong param_4,HKEY__ **param_5)

{
  void *pvVar1;
  long extraout_EAX;
  char *pcVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  void *_Memory;
  undefined1 auStackY_98 [32];
  wchar_t local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
                    /* 0x18d0  19  ?RegOpenKeyExA@RegAPI@@YAJPEAUHKEY__@@PEBDKKPEAPEAU2@@Z */
  local_40 = DAT_180014008 ^ (ulonglong)auStackY_98;
  pcVar2 = setlocale(0,"chs");
  sVar3 = mbstowcs((wchar_t *)0x0,param_2,0);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  local_50 = 0;
  uStack_48 = 7;
  local_60 = L'\0';
  FUN_180005b80((longlong *)&local_60,sVar3);
  pwVar4 = &local_60;
  if (7 < uStack_48) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_5e,local_60);
  }
  pcVar2 = setlocale(0,"chs");
  if (pwVar4 == (wchar_t *)0x0) {
    sVar3 = 0;
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    sVar3 = sVar3 + 1;
  }
  mbstowcs(pwVar4,param_2,sVar3);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  pwVar4 = &local_60;
  if (7 < uStack_48) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_5e,local_60);
  }
  RegOpenKeyExW(param_1,pwVar4,param_3,param_4,param_5);
  if (7 < uStack_48) {
    pvVar1 = (void *)CONCAT62(uStack_5e,local_60);
    _Memory = pvVar1;
    if ((0xfff < uStack_48 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_98);
  return extraout_EAX;
}




/* WARNING: Type propagation algorithm not settling */
/* long __cdecl RegAPI::RegCreateKeyExA(struct HKEY__ * __ptr64,char const * __ptr64,struct HKEY__ *
   __ptr64 * __ptr64) */

long __cdecl RegAPI::RegCreateKeyExA(HKEY__ *param_1,char *param_2,HKEY__ **param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  char cVar4;
  long extraout_EAX;
  longlong *plVar5;
  char *_Locale;
  size_t sVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  short *psVar11;
  wchar_t *pwVar12;
  void *pvVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  uint uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_128 [32];
  longlong local_f8;
  HKEY__ **local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined6 uStack_c6;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8 [2];
  longlong local_98;
  ulonglong local_90;
  longlong local_88 [2];
  longlong local_78;
  ulonglong local_70;
  wchar_t local_68;
  undefined6 uStack_66;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
                    /* 0x1a50  8  ?RegCreateKeyExA@RegAPI@@YAJPEAUHKEY__@@PEBDPEAPEAU2@@Z */
  local_e8 = 0xfffffffffffffffe;
  local_48 = DAT_180014008 ^ (ulonglong)auStackY_128;
  local_f0 = param_3;
  if ((((param_1 != (HKEY__ *)0x0) &&
       (plVar5 = (longlong *)
                 __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                 &RegLib::Key::RTTI_Type_Descriptor), plVar5 != (longlong *)0x0)) &&
      (param_2 != (char *)0x0)) && (param_3 != (HKEY__ **)0x0)) {
    _Locale = setlocale(0,"chs");
    sVar6 = mbstowcs((wchar_t *)0x0,param_2,0);
    if (_Locale != (char *)0x0) {
      setlocale(0,_Locale);
    }
    if (sVar6 != 0) {
      local_58 = 0;
      uStack_50 = 7;
      local_68 = L'\0';
      FUN_180005b80((longlong *)&local_68,sVar6);
      pwVar12 = &local_68;
      if (7 < uStack_50) {
        pwVar12 = (wchar_t *)CONCAT62(uStack_66,local_68);
      }
      FUN_180001160(pwVar12,param_2,sVar6 + 1);
      uVar16 = 0;
      local_78 = 0;
      local_70 = 7;
      local_88[0]._0_2_ = 0;
      pwVar12 = &local_68;
      if (7 < uStack_50) {
        pwVar12 = (wchar_t *)CONCAT62(uStack_66,local_68);
      }
      pwVar14 = &local_68;
      if (7 < uStack_50) {
        pwVar14 = (wchar_t *)CONCAT62(uStack_66,local_68);
      }
      FUN_180005d00(&local_f8,pwVar14,pwVar12 + local_58,local_88,towupper_exref);
      uVar7 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      lVar8 = __RTDynamicCast(uVar7,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Hive::RTTI_Type_Descriptor);
      uVar1 = *(uint *)(plVar5[4] + 0x14);
      local_f8 = lVar8;
      if (uVar1 != 0) {
        plVar9 = (longlong *)FUN_180007a60((longlong)plVar5,lVar8);
        local_e0 = plVar9;
        if (uVar1 != 0) {
          do {
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x58))(plVar9,lVar8,uVar16);
            local_d8 = plVar10;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_c8);
            local_98 = 0;
            local_90 = 7;
            local_a8[0]._0_2_ = 0;
            puVar2 = (undefined2 *)CONCAT62(uStack_c6,local_c8);
            bVar20 = 7 < local_b0;
            puVar18 = &local_c8;
            if (bVar20) {
              puVar18 = puVar2;
            }
            puVar17 = &local_c8;
            if (bVar20) {
              puVar17 = puVar2;
            }
            puVar15 = &local_c8;
            if (bVar20) {
              puVar15 = puVar2;
            }
            lVar8 = -1;
            do {
              lVar8 = lVar8 + 1;
            } while (puVar17[lVar8] != 0);
            FUN_180005d00(&local_d0,puVar15,puVar18 + lVar8,local_a8,towupper_exref);
            psVar11 = (short *)local_88;
            if (7 < local_70) {
              psVar11 = (short *)CONCAT62(local_88[0]._2_6_,(short)local_88[0]);
            }
            puVar2 = (undefined2 *)CONCAT62(local_a8[0]._2_6_,(undefined2)local_a8[0]);
            puVar18 = (undefined2 *)local_a8;
            if (7 < local_90) {
              puVar18 = puVar2;
            }
            if (local_98 == local_78) {
              if (local_98 == 0) {
LAB_180001cd4:
                if (7 < local_90) {
                  puVar18 = puVar2;
                  if ((0xfff < local_90 * 2 + 2) &&
                     (puVar18 = *(undefined2 **)(puVar2 + 0xfffffffffffffffc),
                     0x1f < (ulonglong)((longlong)puVar2 + (-8 - (longlong)puVar18)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  free(puVar18);
                }
                local_98 = 0;
                local_90 = 7;
                local_a8[0]._0_2_ = 0;
                if (7 < local_b0) {
                  pvVar3 = (void *)CONCAT62(uStack_c6,local_c8);
                  pvVar13 = pvVar3;
                  if ((0xfff < local_b0 * 2 + 2) &&
                     (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                     0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  free(pvVar13);
                }
                local_b8 = 0;
                local_b0 = 7;
                local_c8 = 0;
                (**(code **)(*plVar10 + 0x50))(plVar10,1);
                (**(code **)(*plVar9 + 0x50))(plVar9,1);
                goto LAB_180001eb4;
              }
              lVar19 = (longlong)puVar18 - (longlong)psVar11;
              lVar8 = local_98;
              while (*(short *)((longlong)psVar11 + lVar19) == *psVar11) {
                psVar11 = psVar11 + 1;
                lVar8 = lVar8 + -1;
                if (lVar8 == 0) goto LAB_180001cd4;
              }
            }
            if (7 < local_90) {
              puVar18 = puVar2;
              if ((0xfff < local_90 * 2 + 2) &&
                 (puVar18 = *(undefined2 **)(puVar2 + 0xfffffffffffffffc),
                 0x1f < (ulonglong)((longlong)puVar2 + (-8 - (longlong)puVar18)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(puVar18);
            }
            local_98 = 0;
            local_90 = 7;
            local_a8[0]._0_2_ = 0;
            if (7 < local_b0) {
              pvVar3 = (void *)CONCAT62(uStack_c6,local_c8);
              pvVar13 = pvVar3;
              if ((0xfff < local_b0 * 2 + 2) &&
                 (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
            }
            local_b8 = 0;
            local_b0 = 7;
            local_c8 = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10,1);
            uVar16 = uVar16 + 1;
            lVar8 = local_f8;
          } while (uVar16 < uVar1);
        }
        param_3 = local_f0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x50))(plVar9,1);
          param_3 = local_f0;
        }
      }
      cVar4 = FUN_180008030(plVar5,lVar8,(uint *)param_2);
      if (cVar4 != '\0') {
        *param_3 = param_1;
      }
LAB_180001eb4:
      if (7 < local_70) {
        pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(short)local_88[0]);
        pvVar13 = pvVar3;
        if ((0xfff < local_70 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
      local_78 = 0;
      local_70 = 7;
      local_88[0]._0_2_ = 0;
      if (7 < uStack_50) {
        pvVar3 = (void *)CONCAT62(uStack_66,local_68);
        pvVar13 = pvVar3;
        if ((0xfff < uStack_50 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_128);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegCreateKeyExW(struct HKEY__ * __ptr64,wchar_t const * __ptr64,struct
   HKEY__ * __ptr64 * __ptr64) */

long __cdecl RegAPI::RegCreateKeyExW(HKEY__ *param_1,wchar_t *param_2,HKEY__ **param_3)

{
  long extraout_EAX;
  char *pcVar1;
  size_t sVar2;
  char ****ppppcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char ***local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
                    /* 0x1f80  9  ?RegCreateKeyExW@RegAPI@@YAJPEAUHKEY__@@PEB_WPEAPEAU2@@Z */
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStack_78;
  pcVar1 = setlocale(0,"chs");
  sVar2 = wcstombs((char *)0x0,param_2,0);
  if (pcVar1 != (char *)0x0) {
    setlocale(0,pcVar1);
  }
  FUN_180005a10((longlong *)local_50,sVar2);
  ppppcVar3 = local_50;
  if (0xf < local_38) {
    ppppcVar3 = (char ****)local_50[0];
  }
  pcVar1 = setlocale(0,"chs");
  if (ppppcVar3 == (char ****)0x0) {
    sVar2 = 0;
    ppppcVar3 = (char ****)0x0;
  }
  else {
    sVar2 = sVar2 + 1;
  }
  wcstombs((char *)ppppcVar3,param_2,sVar2);
  if (pcVar1 != (char *)0x0) {
    setlocale(0,pcVar1);
  }
  ppppcVar3 = local_50;
  if (0xf < local_38) {
    ppppcVar3 = (char ****)local_50[0];
  }
  RegCreateKeyExA(param_1,(char *)ppppcVar3,param_3);
  if (0xf < local_38) {
    ppppcVar3 = (char ****)local_50[0];
    if ((0xfff < local_38 + 1) &&
       (ppppcVar3 = (char ****)local_50[0][-1],
       (char *)0x1f < (char *)((longlong)local_50[0] + (-8 - (longlong)ppppcVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(ppppcVar3);
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_78);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegQueryInfoKeyA(struct HKEY__ * __ptr64,char * __ptr64,unsigned long *
   __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long *
   __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long *
   __ptr64,struct _FILETIME * __ptr64) */

long __cdecl
RegAPI::RegQueryInfoKeyA
          (HKEY__ *param_1,char *param_2,ulong *param_3,ulong *param_4,ulong *param_5,ulong *param_6
          ,ulong *param_7,ulong *param_8,ulong *param_9,ulong *param_10,ulong *param_11,
          _FILETIME *param_12)

{
  longlong lVar1;
  
                    /* 0x20d0  21
                       ?RegQueryInfoKeyA@RegAPI@@YAJPEAUHKEY__@@PEADPEAK22222222PEAU_FILETIME@@@Z */
  if (param_1 != (HKEY__ *)0x0) {
    lVar1 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      if (param_5 != (ulong *)0x0) {
        *param_5 = *(ulong *)(*(longlong *)(lVar1 + 0x20) + 0x14);
      }
      if (param_6 != (ulong *)0x0) {
        *param_6 = (uint)(*(ushort *)(*(longlong *)(lVar1 + 0x20) + 0x34) >> 1);
      }
      if (param_8 != (ulong *)0x0) {
        *param_8 = *(ulong *)(*(longlong *)(lVar1 + 0x20) + 0x24);
      }
      if (param_9 != (ulong *)0x0) {
        *param_9 = (uint)(*(ushort *)(*(longlong *)(lVar1 + 0x20) + 0x3c) >> 1);
      }
      if (param_10 != (ulong *)0x0) {
        *param_10 = *(ulong *)(*(longlong *)(lVar1 + 0x20) + 0x40);
      }
      return 0;
    }
  }
  return 0x57;
}




/* long __cdecl RegAPI::RegEnumKeyExA(struct HKEY__ * __ptr64,unsigned long,char * __ptr64,unsigned
   long * __ptr64,unsigned long * __ptr64,char * __ptr64,unsigned long * __ptr64,struct _FILETIME *
   __ptr64) */

long __cdecl
RegAPI::RegEnumKeyExA
          (HKEY__ *param_1,ulong param_2,char *param_3,ulong *param_4,ulong *param_5,char *param_6,
          ulong *param_7,_FILETIME *param_8)

{
  ulong uVar1;
  void *pvVar2;
  long extraout_EAX;
  void *_Memory;
  wchar_t *pwVar3;
  undefined1 auStackY_a8 [32];
  wchar_t local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
                    /* 0x2180  14
                       ?RegEnumKeyExA@RegAPI@@YAJPEAUHKEY__@@KPEADPEAK212PEAU_FILETIME@@@Z */
  local_40 = DAT_180014008 ^ (ulonglong)auStackY_a8;
  if ((param_3 != (char *)0x0) && (param_4 != (ulong *)0x0)) {
    uVar1 = *param_4;
    local_50 = 0;
    uStack_48 = 7;
    local_60 = L'\0';
    FUN_180005b80((longlong *)&local_60,(ulonglong)(uVar1 + 1));
    pwVar3 = &local_60;
    if (7 < uStack_48) {
      pwVar3 = (wchar_t *)CONCAT62(uStack_5e,local_60);
    }
    RegEnumKeyExW(param_1,param_2,pwVar3,param_4,param_5,(wchar_t *)0x0,(ulong *)0x0,param_8);
    pwVar3 = &local_60;
    if (7 < uStack_48) {
      pwVar3 = (wchar_t *)CONCAT62(uStack_5e,local_60);
    }
    FUN_180001000(param_3,pwVar3,(ulonglong)(uVar1 + 1));
    if (7 < uStack_48) {
      pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
      _Memory = pvVar2;
      if ((0xfff < uStack_48 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_a8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegEnumValueA(struct HKEY__ * __ptr64,unsigned long,char * __ptr64,unsigned
   long * __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned char * __ptr64,unsigned
   long * __ptr64) */

long __cdecl
RegAPI::RegEnumValueA
          (HKEY__ *param_1,ulong param_2,char *param_3,ulong *param_4,ulong *param_5,ulong *param_6,
          uchar *param_7,ulong *param_8)

{
  uint uVar1;
  void *pvVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  long extraout_EAX;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  void *pvVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  wchar_t *local_b8;
  wchar_t *local_b0;
  char *local_a8;
  ulong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  uchar *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  wchar_t local_60;
  undefined6 uStack_5e;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
                    /* 0x22c0  16  ?RegEnumValueA@RegAPI@@YAJPEAUHKEY__@@KPEADPEAK22PEAE2@Z */
  local_78 = 0xfffffffffffffffe;
  local_40 = DAT_180014008 ^ (ulonglong)auStack_e8;
  local_a0 = param_6;
  local_80 = param_7;
  local_b0 = (wchar_t *)param_8;
  local_b8 = (wchar_t *)param_4;
  local_a8 = param_3;
  if (param_1 != (HKEY__ *)0x0) {
    local_c8 = 0;
    lVar6 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor);
    if ((((lVar6 != 0) && (param_3 != (char *)0x0)) && (local_b8 != (wchar_t *)0x0)) &&
       ((uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x20) + 0x24), uVar1 != 0 && (param_2 < uVar1)))) {
      uVar7 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      local_c8 = 0;
      lVar8 = __RTDynamicCast(uVar7,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Hive::RTTI_Type_Descriptor);
      local_98 = lVar8;
      plVar9 = (longlong *)FUN_180007af0(lVar6,lVar8);
      local_90 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        local_70 = plVar9;
        plVar10 = (longlong *)(**(code **)(*plVar9 + 0x58))(plVar9,lVar8,param_2);
        local_88 = plVar10;
        if (plVar10 == (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x50))(plVar9,1);
        }
        else {
          local_68 = plVar10;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_60);
          pcVar3 = local_a8;
          pwVar12 = &local_60;
          if (7 < uStack_48) {
            pwVar12 = (wchar_t *)CONCAT62(uStack_5e,local_60);
          }
          sVar11 = FUN_180001000(local_a8,pwVar12,local_50 * 2);
          *(int *)local_b8 = (int)sVar11;
          pcVar3[sVar11 & 0xffffffff] = '\0';
          if (local_a0 != (ulong *)0x0) {
            *local_a0 = *(ulong *)(plVar10[5] + 0xc);
          }
          lVar6 = plVar10[5];
          if ((*(int *)(lVar6 + 0xc) - 1U < 2) || (*(int *)(lVar6 + 0xc) == 7)) {
            if (param_8 != (ulong *)0x0) {
              if (param_7 != (uchar *)0x0) {
                uVar1 = *(uint *)(lVar6 + 4);
                uVar5 = uVar1 + 0x80000000;
                if (uVar1 < 0x80000000) {
                  uVar5 = uVar1;
                }
                if (uVar5 >> 1 <= *param_8) {
                  local_b8 = (wchar_t *)0x0;
                  uVar5 = uVar1 + 0x80000000;
                  if (uVar1 < 0x80000000) {
                    uVar5 = uVar1;
                  }
                  pwVar12 = (wchar_t *)operator_new((ulonglong)uVar5);
                  local_b8 = pwVar12;
                  if (pwVar12 == (wchar_t *)0x0) {
                    if (7 < uStack_48) {
                      pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                      pvVar13 = pvVar2;
                      if ((0xfff < uStack_48 * 2 + 2) &&
                         (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                        _invalid_parameter_noinfo_noreturn();
                      }
                      free(pvVar13);
                    }
                    local_50 = 0;
                    uStack_48 = 7;
                    local_60 = L'\0';
                    (**(code **)(*plVar10 + 0x50))(plVar10,1);
                    (**(code **)(*plVar9 + 0x50))(plVar9,1);
                  }
                  else {
                    uVar1 = *(uint *)(plVar10[5] + 4);
                    uVar5 = uVar1 + 0x80000000;
                    if (uVar1 < 0x80000000) {
                      uVar5 = uVar1;
                    }
                    local_b0 = pwVar12;
                    cVar4 = FUN_18000c160((longlong)plVar10,lVar8,pwVar12,uVar5);
                    if (cVar4 == '\0') {
                      free(pwVar12);
                      if (7 < uStack_48) {
                        pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                        pvVar13 = pvVar2;
                        if ((0xfff < uStack_48 * 2 + 2) &&
                           (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                          _invalid_parameter_noinfo_noreturn();
                        }
                        free(pvVar13);
                      }
                      local_50 = 0;
                      uStack_48 = 7;
                      local_60 = L'\0';
                      (**(code **)(*plVar10 + 0x50))(plVar10,1);
                      (**(code **)(*plVar9 + 0x50))(plVar9,1);
                    }
                    else {
                      uVar1 = *(uint *)(plVar10[5] + 4);
                      uVar14 = (ulonglong)(uVar1 + 0x80000000);
                      if (*(int *)(plVar10[5] + 0xc) == 7) {
                        if (uVar1 < 0x80000000) {
                          uVar14 = (ulonglong)uVar1;
                        }
                        FUN_180001080((longlong)param_7,(longlong)pwVar12,uVar14);
                      }
                      else {
                        if (uVar1 < 0x80000000) {
                          uVar14 = (ulonglong)uVar1;
                        }
                        FUN_180001000((char *)param_7,pwVar12,uVar14);
                      }
                      uVar1 = *(uint *)(plVar10[5] + 4);
                      uVar5 = uVar1 + 0x80000000;
                      if (uVar1 < 0x80000000) {
                        uVar5 = uVar1;
                      }
                      *param_8 = uVar5 >> 1;
                      free(pwVar12);
                      if (7 < uStack_48) {
                        pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                        pvVar13 = pvVar2;
                        if ((0xfff < uStack_48 * 2 + 2) &&
                           (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                          _invalid_parameter_noinfo_noreturn();
                        }
                        free(pvVar13);
                      }
                      local_50 = 0;
                      uStack_48 = 7;
                      local_60 = L'\0';
                      (**(code **)(*plVar10 + 0x50))(plVar10,1);
                      (**(code **)(*plVar9 + 0x50))(plVar9,1);
                    }
                  }
                  goto LAB_180002a75;
                }
              }
              uVar1 = *(uint *)(lVar6 + 4);
              uVar5 = uVar1 + 0x80000000;
              if (uVar1 < 0x80000000) {
                uVar5 = uVar1;
              }
              *param_8 = uVar5 >> 1;
              if (7 < uStack_48) {
                pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                pvVar13 = pvVar2;
                if ((0xfff < uStack_48 * 2 + 2) &&
                   (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                   0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                free(pvVar13);
              }
              local_50 = 0;
              uStack_48 = 7;
              local_60 = L'\0';
              (**(code **)(*plVar10 + 0x50))(plVar10,1);
              (**(code **)(*plVar9 + 0x50))(plVar9,1);
              goto LAB_180002a75;
            }
          }
          else if (param_8 != (ulong *)0x0) {
            if (param_7 == (uchar *)0x0) {
              uVar1 = *(uint *)(lVar6 + 4);
              uVar5 = uVar1 + 0x80000000;
              if (uVar1 < 0x80000000) {
                uVar5 = uVar1;
              }
              *param_8 = uVar5;
              if (7 < uStack_48) {
                pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                pvVar13 = pvVar2;
                if ((0xfff < uStack_48 * 2 + 2) &&
                   (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                   0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                free(pvVar13);
              }
              local_50 = 0;
              uStack_48 = 7;
              local_60 = L'\0';
              (**(code **)(*plVar10 + 0x50))(plVar10,1);
              (**(code **)(*plVar9 + 0x50))(plVar9,1);
            }
            else {
              cVar4 = FUN_18000c160((longlong)plVar10,lVar8,param_7,*param_8);
              if (cVar4 == '\0') {
                if (7 < uStack_48) {
                  pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                  pvVar13 = pvVar2;
                  if ((0xfff < uStack_48 * 2 + 2) &&
                     (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  free(pvVar13);
                }
                local_50 = 0;
                uStack_48 = 7;
                local_60 = L'\0';
                (**(code **)(*plVar10 + 0x50))(plVar10,1);
                (**(code **)(*plVar9 + 0x50))(plVar9,1);
              }
              else {
                uVar1 = *(uint *)(plVar10[5] + 4);
                uVar5 = uVar1 + 0x80000000;
                if (uVar1 < 0x80000000) {
                  uVar5 = uVar1;
                }
                *param_8 = uVar5;
                if (7 < uStack_48) {
                  pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
                  pvVar13 = pvVar2;
                  if ((0xfff < uStack_48 * 2 + 2) &&
                     (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  free(pvVar13);
                }
                local_50 = 0;
                uStack_48 = 7;
                local_60 = L'\0';
                (**(code **)(*plVar10 + 0x50))(plVar10,1);
                (**(code **)(*plVar9 + 0x50))(plVar9,1);
              }
            }
            goto LAB_180002a75;
          }
          if (7 < uStack_48) {
            pvVar2 = (void *)CONCAT62(uStack_5e,local_60);
            pvVar13 = pvVar2;
            if ((0xfff < uStack_48 * 2 + 2) &&
               (pvVar13 = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar13);
          }
          local_50 = 0;
          uStack_48 = 7;
          local_60 = L'\0';
          (**(code **)(*plVar10 + 0x50))(plVar10,1);
          (**(code **)(*plVar9 + 0x50))(plVar9,1);
        }
      }
    }
  }
LAB_180002a75:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_e8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegQueryValueExA(struct HKEY__ * __ptr64,char const * __ptr64,unsigned long
   * __ptr64,unsigned long * __ptr64,unsigned char * __ptr64,unsigned long * __ptr64) */

long __cdecl
RegAPI::RegQueryValueExA
          (HKEY__ *param_1,char *param_2,ulong *param_3,ulong *param_4,uchar *param_5,ulong *param_6
          )

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  long extraout_EAX;
  uint uVar5;
  longlong lVar6;
  char *_Locale;
  size_t sVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  void *pvVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStackY_e8 [32];
  longlong local_a8;
  wchar_t *local_a0;
  uchar *local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined8 local_78;
  ulonglong uStack_70;
  wchar_t local_68;
  undefined6 uStack_66;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
                    /* 0x2aa0  23  ?RegQueryValueExA@RegAPI@@YAJPEAUHKEY__@@PEBDPEAK2PEAE2@Z */
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_180014008 ^ (ulonglong)auStackY_e8;
  local_98 = param_5;
  local_a0 = (wchar_t *)param_6;
  uVar8 = local_78;
  uVar14 = uStack_70;
  if (((param_1 == (HKEY__ *)0x0) ||
      (lVar6 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::Key::RTTI_Type_Descriptor), uVar8 = local_78,
      uVar14 = uStack_70, lVar6 == 0)) || (param_2 == (char *)0x0)) goto LAB_180002c19;
  _Locale = setlocale(0,"chs");
  sVar7 = mbstowcs((wchar_t *)0x0,param_2,0);
  if (_Locale != (char *)0x0) {
    setlocale(0,_Locale);
  }
  local_58 = 0;
  uStack_50 = 7;
  local_68 = L'\0';
  FUN_180005b80((longlong *)&local_68,sVar7);
  pwVar10 = &local_68;
  if (7 < uStack_50) {
    pwVar10 = (wchar_t *)CONCAT62(uStack_66,local_68);
  }
  FUN_180001160(pwVar10,param_2,sVar7 + 1);
  if (*(int *)(*(longlong *)(lVar6 + 0x20) + 0x24) == 0) {
    uVar8 = local_78;
    uVar14 = uStack_70;
    if (uStack_50 < 8) goto LAB_180002c19;
    pvVar3 = (void *)CONCAT62(uStack_66,local_68);
    pvVar11 = pvVar3;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (pvVar11 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    uVar8 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    lVar9 = __RTDynamicCast(uVar8,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Hive::RTTI_Type_Descriptor);
    local_78 = 0;
    uStack_70 = 7;
    local_88[0]._0_2_ = 0;
    pwVar10 = &local_68;
    if (7 < uStack_50) {
      pwVar10 = (wchar_t *)CONCAT62(uStack_66,local_68);
    }
    pwVar12 = &local_68;
    if (7 < uStack_50) {
      pwVar12 = (wchar_t *)CONCAT62(uStack_66,local_68);
    }
    FUN_180005d00(&local_a8,pwVar12,pwVar10 + local_58,local_88,towupper_exref);
    plVar13 = local_88;
    if (7 < uStack_70) {
      plVar13 = (longlong *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
    }
    lVar6 = FUN_180007c10(lVar6,lVar9,plVar13);
    local_a8 = lVar6;
    if (lVar6 != 0) {
      if (param_4 != (ulong *)0x0) {
        *param_4 = *(ulong *)(*(longlong *)(lVar6 + 0x28) + 0xc);
      }
      lVar2 = *(longlong *)(lVar6 + 0x28);
      if ((*(int *)(lVar2 + 0xc) - 1U < 2) || (*(int *)(lVar2 + 0xc) == 7)) {
        if (param_6 == (ulong *)0x0) goto LAB_1800033ff;
        if (param_5 != (uchar *)0x0) {
          uVar1 = *(uint *)(lVar2 + 4);
          uVar5 = uVar1 + 0x80000000;
          if (uVar1 < 0x80000000) {
            uVar5 = uVar1;
          }
          if (uVar5 >> 1 <= *param_6) {
            uVar5 = uVar1 + 0x80000000;
            if (uVar1 < 0x80000000) {
              uVar5 = uVar1;
            }
            pwVar10 = (wchar_t *)operator_new((ulonglong)uVar5);
            if (pwVar10 == (wchar_t *)0x0) {
              if (7 < uStack_70) {
                pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
                pvVar11 = pvVar3;
                if ((0xfff < uStack_70 * 2 + 2) &&
                   (pvVar11 = *(void **)((longlong)pvVar3 + -8),
                   0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                free(pvVar11);
              }
              local_78 = 0;
              uStack_70 = 7;
              local_88[0]._0_2_ = 0;
              uVar8 = local_78;
              uVar14 = uStack_70;
              if (7 < uStack_50) {
                pvVar3 = (void *)CONCAT62(uStack_66,local_68);
                pvVar11 = pvVar3;
                if ((0xfff < uStack_50 * 2 + 2) &&
                   (pvVar11 = *(void **)((longlong)pvVar3 + -8),
                   0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                free(pvVar11);
                uVar8 = local_78;
                uVar14 = uStack_70;
              }
              goto LAB_180002c19;
            }
            uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x28) + 4);
            uVar5 = uVar1 + 0x80000000;
            if (uVar1 < 0x80000000) {
              uVar5 = uVar1;
            }
            local_a0 = pwVar10;
            cVar4 = FUN_18000c160(lVar6,lVar9,pwVar10,uVar5);
            if (cVar4 == '\0') {
              free(pwVar10);
              if (7 < uStack_70) {
                pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
                pvVar11 = pvVar3;
                if ((0xfff < uStack_70 * 2 + 2) &&
                   (pvVar11 = *(void **)((longlong)pvVar3 + -8),
                   0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                free(pvVar11);
              }
              local_78 = 0;
              uStack_70 = 7;
              local_88[0]._0_2_ = 0;
              uVar8 = local_78;
              uVar14 = uStack_70;
              if (uStack_50 < 8) goto LAB_180002c19;
              pvVar3 = (void *)CONCAT62(uStack_66,local_68);
              pvVar11 = pvVar3;
              if ((0xfff < uStack_50 * 2 + 2) &&
                 (pvVar11 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              goto LAB_180003331;
            }
            uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x28) + 4);
            uVar14 = (ulonglong)(uVar1 + 0x80000000);
            if (*(int *)(*(longlong *)(lVar6 + 0x28) + 0xc) == 7) {
              if (uVar1 < 0x80000000) {
                uVar14 = (ulonglong)uVar1;
              }
              FUN_180001080((longlong)param_5,(longlong)pwVar10,uVar14);
            }
            else {
              if (uVar1 < 0x80000000) {
                uVar14 = (ulonglong)uVar1;
              }
              FUN_180001000((char *)param_5,pwVar10,uVar14);
            }
            uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x28) + 4);
            uVar5 = uVar1 + 0x80000000;
            if (uVar1 < 0x80000000) {
              uVar5 = uVar1;
            }
            *param_6 = uVar5 >> 1;
            free(pwVar10);
            if (7 < uStack_70) {
              pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
              pvVar11 = pvVar3;
              if ((0xfff < uStack_70 * 2 + 2) &&
                 (pvVar11 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar11);
            }
            local_78 = 0;
            uStack_70 = 7;
            local_88[0]._0_2_ = 0;
            uVar8 = local_78;
            uVar14 = uStack_70;
            if (uStack_50 < 8) goto LAB_180002c19;
            pvVar3 = (void *)CONCAT62(uStack_66,local_68);
            pvVar11 = pvVar3;
            if ((0xfff < uStack_50 * 2 + 2) &&
               (pvVar11 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)
                      ((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8))))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            goto LAB_18000327e;
          }
        }
        uVar1 = *(uint *)(lVar2 + 4);
        uVar5 = uVar1 + 0x80000000;
        if (uVar1 < 0x80000000) {
          uVar5 = uVar1;
        }
        *param_6 = uVar5 >> 1;
        if (7 < uStack_70) {
          pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
          pvVar11 = pvVar3;
          if ((0xfff < uStack_70 * 2 + 2) &&
             (pvVar11 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar11);
        }
        local_78 = 0;
        uStack_70 = 7;
        local_88[0]._0_2_ = 0;
        uVar8 = local_78;
        uVar14 = uStack_70;
        if (uStack_50 < 8) goto LAB_180002c19;
        pvVar3 = (void *)CONCAT62(uStack_66,local_68);
        pvVar11 = pvVar3;
        if ((0xfff < uStack_50 * 2 + 2) &&
           (pvVar11 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else if (param_6 == (ulong *)0x0) {
LAB_1800033ff:
        if (7 < uStack_70) {
          pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
          pvVar11 = pvVar3;
          if ((0xfff < uStack_70 * 2 + 2) &&
             (pvVar11 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar11);
        }
        local_78 = 0;
        uStack_70 = 7;
        local_88[0]._0_2_ = 0;
        uVar8 = 0;
        uVar14 = 7;
        if (uStack_50 < 8) goto LAB_180002c19;
        pvVar3 = (void *)CONCAT62(uStack_66,local_68);
        pvVar11 = pvVar3;
        if ((0xfff < uStack_50 * 2 + 2) &&
           (pvVar11 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8)))
           )) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else if (param_5 == (uchar *)0x0) {
        uVar1 = *(uint *)(lVar2 + 4);
        uVar5 = uVar1 + 0x80000000;
        if (uVar1 < 0x80000000) {
          uVar5 = uVar1;
        }
        *param_6 = uVar5;
        if (7 < uStack_70) {
          pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
          pvVar11 = pvVar3;
          if ((0xfff < uStack_70 * 2 + 2) &&
             (pvVar11 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar11);
        }
        local_78 = 0;
        uStack_70 = 7;
        local_88[0]._0_2_ = 0;
        uVar8 = local_78;
        uVar14 = uStack_70;
        if (uStack_50 < 8) goto LAB_180002c19;
        pvVar3 = (void *)CONCAT62(uStack_66,local_68);
        pvVar11 = pvVar3;
        if ((0xfff < uStack_50 * 2 + 2) &&
           (pvVar11 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8)))
           )) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        cVar4 = FUN_18000c160(lVar6,lVar9,param_5,*param_6);
        if (cVar4 == '\0') {
          if (7 < uStack_70) {
            pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
            pvVar11 = pvVar3;
            if ((0xfff < uStack_70 * 2 + 2) &&
               (pvVar11 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar11);
          }
          local_78 = 0;
          uStack_70 = 7;
          local_88[0]._0_2_ = 0;
          uVar8 = local_78;
          uVar14 = uStack_70;
          if (uStack_50 < 8) goto LAB_180002c19;
          pvVar3 = (void *)CONCAT62(uStack_66,local_68);
          pvVar11 = pvVar3;
          if ((0xfff < uStack_50 * 2 + 2) &&
             (pvVar11 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)
                    ((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
LAB_180003331:
          uStack_70 = 7;
          local_78 = 0;
          local_88[0]._0_2_ = 0;
          free(pvVar11);
          uVar8 = local_78;
          uVar14 = uStack_70;
          goto LAB_180002c19;
        }
        uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x28) + 4);
        uVar5 = uVar1 + 0x80000000;
        if (uVar1 < 0x80000000) {
          uVar5 = uVar1;
        }
        *param_6 = uVar5;
        if (7 < uStack_70) {
          pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
          pvVar11 = pvVar3;
          if ((0xfff < uStack_70 * 2 + 2) &&
             (pvVar11 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar11);
        }
        local_78 = 0;
        uStack_70 = 7;
        local_88[0]._0_2_ = 0;
        uVar8 = local_78;
        uVar14 = uStack_70;
        if (uStack_50 < 8) goto LAB_180002c19;
        pvVar3 = (void *)CONCAT62(uStack_66,local_68);
        pvVar11 = pvVar3;
        if ((0xfff < uStack_50 * 2 + 2) &&
           (pvVar11 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8)))
           )) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_18000327e:
      uStack_70 = 7;
      local_78 = 0;
      local_88[0]._0_2_ = 0;
      free(pvVar11);
      uVar8 = local_78;
      uVar14 = uStack_70;
      goto LAB_180002c19;
    }
    if (7 < uStack_70) {
      pvVar3 = (void *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
      pvVar11 = pvVar3;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (pvVar11 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar11);
    }
    local_78 = 0;
    uStack_70 = 7;
    local_88[0]._0_2_ = 0;
    uVar8 = 0;
    uVar14 = 7;
    if (uStack_50 < 8) goto LAB_180002c19;
    pvVar3 = (void *)CONCAT62(uStack_66,local_68);
    pvVar11 = pvVar3;
    if ((0xfff < uStack_50 * 2 + 2) &&
       (pvVar11 = *(void **)((longlong)pvVar3 + -8), uVar8 = local_78, uVar14 = uStack_70,
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  uStack_70 = uVar14;
  local_78 = uVar8;
  free(pvVar11);
  uVar8 = local_78;
  uVar14 = uStack_70;
LAB_180002c19:
  uStack_70 = uVar14;
  local_78 = uVar8;
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_e8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegSetValueExA(struct HKEY__ * __ptr64,char const * __ptr64,unsigned
   long,unsigned long,unsigned char const * __ptr64,unsigned long) */

long __cdecl
RegAPI::RegSetValueExA
          (HKEY__ *param_1,char *param_2,ulong param_3,ulong param_4,uchar *param_5,ulong param_6)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulonglong uVar4;
  long extraout_EAX;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  char *_Locale;
  size_t sVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  void *pvVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  undefined1 auStackY_d8 [32];
  longlong *local_98;
  wchar_t *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68;
  ulonglong uStack_60;
  wchar_t local_58;
  undefined6 uStack_56;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
                    /* 0x34b0  25  ?RegSetValueExA@RegAPI@@YAJPEAUHKEY__@@PEBDKKPEBEK@Z */
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_180014008 ^ (ulonglong)auStackY_d8;
  local_90 = (wchar_t *)param_5;
  uVar15 = (ulonglong)param_6;
  uVar9 = local_68;
  uVar4 = uStack_60;
  if ((((param_1 == (HKEY__ *)0x0) ||
       (lVar7 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                &RegLib::Key::RTTI_Type_Descriptor), uVar9 = local_68,
       uVar4 = uStack_60, lVar7 == 0)) || (param_2 == (char *)0x0)) ||
     ((param_5 == (uchar *)0x0 || (param_6 == 0)))) goto LAB_180003636;
  _Locale = setlocale(0,"chs");
  sVar8 = mbstowcs((wchar_t *)0x0,param_2,0);
  if (_Locale != (char *)0x0) {
    setlocale(0,_Locale);
  }
  local_48 = 0;
  uStack_40 = 7;
  local_58 = L'\0';
  FUN_180005b80((longlong *)&local_58,sVar8);
  pwVar12 = &local_58;
  if (7 < uStack_40) {
    pwVar12 = (wchar_t *)CONCAT62(uStack_56,local_58);
  }
  FUN_180001160(pwVar12,param_2,sVar8 + 1);
  if (*(int *)(*(longlong *)(lVar7 + 0x20) + 0x24) == 0) {
    uVar9 = local_68;
    uVar4 = uStack_60;
    if (uStack_40 < 8) goto LAB_180003636;
    pvVar3 = (void *)CONCAT62(uStack_56,local_58);
    pvVar13 = pvVar3;
    if ((0xfff < uStack_40 * 2 + 2) &&
       (pvVar13 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    uVar9 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    lVar10 = __RTDynamicCast(uVar9,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::Hive::RTTI_Type_Descriptor);
    local_68 = 0;
    uStack_60 = 7;
    local_78[0]._0_2_ = 0;
    pwVar12 = &local_58;
    if (7 < uStack_40) {
      pwVar12 = (wchar_t *)CONCAT62(uStack_56,local_58);
    }
    pwVar14 = &local_58;
    if (7 < uStack_40) {
      pwVar14 = (wchar_t *)CONCAT62(uStack_56,local_58);
    }
    local_88 = lVar10;
    FUN_180005d00(&local_98,pwVar14,pwVar12 + local_48,local_78,towupper_exref);
    plVar11 = local_78;
    if (7 < uStack_60) {
      plVar11 = (longlong *)CONCAT62(local_78[0]._2_6_,(undefined2)local_78[0]);
    }
    plVar11 = (longlong *)FUN_180007c10(lVar7,lVar10,plVar11);
    local_98 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      if (7 < uStack_60) {
        pvVar3 = (void *)CONCAT62(local_78[0]._2_6_,(undefined2)local_78[0]);
        pvVar13 = pvVar3;
        if ((0xfff < uStack_60 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
      local_68 = 0;
      uStack_60 = 7;
      local_78[0]._0_2_ = 0;
      uVar9 = 0;
      uVar4 = 7;
      if (uStack_40 < 8) goto LAB_180003636;
      pvVar3 = (void *)CONCAT62(uStack_56,local_58);
      pvVar13 = pvVar3;
      if ((0xfff < uStack_40 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)pvVar3 + -8), uVar9 = local_68, uVar4 = uStack_60,
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8)))))
      {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar1 = *(ulong *)(plVar11[5] + 0xc);
      if (param_4 == uVar1) {
        if ((uVar1 - 4 < 2) || (uVar1 == 0xb)) {
          uVar2 = *(uint *)(plVar11[5] + 4);
          uVar5 = uVar2 + 0x80000000;
          if (uVar2 < 0x80000000) {
            uVar5 = uVar2;
          }
          if (param_6 != uVar5) {
            if (7 < uStack_60) {
              pvVar3 = (void *)CONCAT62(local_78[0]._2_6_,(undefined2)local_78[0]);
              pvVar13 = pvVar3;
              if ((0xfff < uStack_60 * 2 + 2) &&
                 (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
            }
            local_68 = 0;
            uStack_60 = 7;
            local_78[0]._0_2_ = 0;
            uVar9 = local_68;
            uVar4 = uStack_60;
            if (uStack_40 < 8) goto LAB_180003636;
            pvVar3 = (void *)CONCAT62(uStack_56,local_58);
            pvVar13 = pvVar3;
            if ((0xfff < uStack_40 * 2 + 2) &&
               (pvVar13 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            goto LAB_18000362c;
          }
        }
        if ((uVar1 - 1 < 2) || (uVar1 == 7)) {
          pwVar12 = (wchar_t *)operator_new(uVar15 * 2);
          memset(pwVar12,0,uVar15 * 2);
          if (pwVar12 == (wchar_t *)0x0) {
            if (7 < uStack_60) {
              pvVar3 = (void *)CONCAT62(local_78[0]._2_6_,(undefined2)local_78[0]);
              pvVar13 = pvVar3;
              if ((0xfff < uStack_60 * 2 + 2) &&
                 (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
            }
            local_68 = 0;
            uStack_60 = 7;
            local_78[0]._0_2_ = 0;
            uVar9 = local_68;
            uVar4 = uStack_60;
            if (7 < uStack_40) {
              pvVar3 = (void *)CONCAT62(uStack_56,local_58);
              pvVar13 = pvVar3;
              if ((0xfff < uStack_40 * 2 + 2) &&
                 (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                 0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
              uVar9 = local_68;
              uVar4 = uStack_60;
            }
            goto LAB_180003636;
          }
          local_90 = pwVar12;
          if (*(int *)(plVar11[5] + 0xc) == 7) {
            lVar7 = FUN_1800011e0((longlong)pwVar12,(longlong)param_5,uVar15);
            iVar6 = (int)lVar7;
          }
          else {
            sVar8 = FUN_180001160(pwVar12,(char *)param_5,uVar15);
            iVar6 = (int)sVar8;
          }
          FUN_18000c290(plVar11,lVar10,pwVar12,iVar6 * 2);
          free(pwVar12);
        }
        else {
          FUN_18000c290(plVar11,lVar10,param_5,param_6);
        }
        if (7 < uStack_60) {
          pvVar3 = (void *)CONCAT62(local_78[0]._2_6_,(undefined2)local_78[0]);
          pvVar13 = pvVar3;
          if ((0xfff < uStack_60 * 2 + 2) &&
             (pvVar13 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar13);
        }
        local_68 = 0;
        uStack_60 = 7;
        local_78[0]._0_2_ = 0;
        uVar9 = local_68;
        uVar4 = uStack_60;
        if (7 < uStack_40) {
          pvVar3 = (void *)CONCAT62(uStack_56,local_58);
          pvVar13 = pvVar3;
          if ((0xfff < uStack_40 * 2 + 2) &&
             (pvVar13 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar13);
          uVar9 = local_68;
          uVar4 = uStack_60;
        }
        goto LAB_180003636;
      }
      if (7 < uStack_60) {
        pvVar3 = (void *)CONCAT62(local_78[0]._2_6_,(undefined2)local_78[0]);
        pvVar13 = pvVar3;
        if ((0xfff < uStack_60 * 2 + 2) &&
           (pvVar13 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar13);
      }
      local_68 = 0;
      uStack_60 = 7;
      local_78[0]._0_2_ = 0;
      uVar9 = local_68;
      uVar4 = uStack_60;
      if (uStack_40 < 8) goto LAB_180003636;
      pvVar3 = (void *)CONCAT62(uStack_56,local_58);
      pvVar13 = pvVar3;
      if ((0xfff < uStack_40 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)*(void **)((longlong)pvVar3 + -8)))))
      {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
LAB_18000362c:
  uStack_60 = uVar4;
  local_68 = uVar9;
  free(pvVar13);
  uVar9 = local_68;
  uVar4 = uStack_60;
LAB_180003636:
  uStack_60 = uVar4;
  local_68 = uVar9;
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_d8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegSetValueNewA(struct HKEY__ * __ptr64,char const * __ptr64,unsigned
   long,unsigned long,unsigned char const * __ptr64,unsigned long) */

long __cdecl
RegAPI::RegSetValueNewA
          (HKEY__ *param_1,char *param_2,ulong param_3,ulong param_4,uchar *param_5,ulong param_6)

{
  void *pvVar1;
  char cVar2;
  long extraout_EAX;
  int iVar3;
  longlong *plVar4;
  char *_Locale;
  size_t sVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  void *pvVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStackY_e8 [32];
  ulonglong local_b0;
  wchar_t *local_a8;
  longlong *local_a0;
  longlong local_98;
  char *local_90;
  undefined8 local_88;
  wchar_t local_80;
  undefined6 uStack_7e;
  longlong local_70;
  ulonglong uStack_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
                    /* 0x3b70  27  ?RegSetValueNewA@RegAPI@@YAJPEAUHKEY__@@PEBDKKPEBEK@Z */
  local_88 = 0xfffffffffffffffe;
  local_40 = DAT_180014008 ^ (ulonglong)auStackY_e8;
  local_a8 = (wchar_t *)param_5;
  uVar13 = (ulonglong)param_6;
  local_90 = param_2;
  if ((((param_1 == (HKEY__ *)0x0) ||
       (plVar4 = (longlong *)
                 __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                 &RegLib::Key::RTTI_Type_Descriptor), local_a0 = plVar4,
       plVar4 == (longlong *)0x0)) || (param_2 == (char *)0x0)) ||
     ((param_5 == (uchar *)0x0 || (param_6 == 0)))) goto LAB_180003edd;
  _Locale = setlocale(0,"chs");
  sVar5 = mbstowcs((wchar_t *)0x0,param_2,0);
  if (_Locale != (char *)0x0) {
    setlocale(0,_Locale);
  }
  local_70 = 0;
  uStack_68 = 7;
  local_80 = L'\0';
  FUN_180005b80((longlong *)&local_80,sVar5);
  pwVar9 = &local_80;
  if (7 < uStack_68) {
    pwVar9 = (wchar_t *)CONCAT62(uStack_7e,local_80);
  }
  FUN_180001160(pwVar9,param_2,sVar5 + 1);
  uVar6 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  lVar7 = __RTDynamicCast(uVar6,0,&RegLib::Node::RTTI_Type_Descriptor,
                          &RegLib::Hive::RTTI_Type_Descriptor);
  local_98 = lVar7;
  if (*(int *)(plVar4[4] + 0x24) != 0) {
    local_50 = 0;
    uStack_48 = 7;
    local_60[0]._0_2_ = 0;
    pwVar9 = &local_80;
    if (7 < uStack_68) {
      pwVar9 = (wchar_t *)CONCAT62(uStack_7e,local_80);
    }
    pwVar11 = &local_80;
    if (7 < uStack_68) {
      pwVar11 = (wchar_t *)CONCAT62(uStack_7e,local_80);
    }
    FUN_180005d00(&local_b0,pwVar11,pwVar9 + local_70,local_60,towupper_exref);
    plVar12 = local_60;
    if (7 < uStack_48) {
      plVar12 = (longlong *)CONCAT62(local_60[0]._2_6_,(undefined2)local_60[0]);
    }
    lVar8 = FUN_180007c10((longlong)plVar4,lVar7,plVar12);
    if (lVar8 != 0) {
      if (7 < uStack_48) {
        pvVar1 = (void *)CONCAT62(local_60[0]._2_6_,(undefined2)local_60[0]);
        pvVar10 = pvVar1;
        if ((0xfff < uStack_48 * 2 + 2) &&
           (pvVar10 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar10);
      }
      local_50 = 0;
      uStack_48 = 7;
      local_60[0]._0_2_ = 0;
      if (7 < uStack_68) {
        pvVar1 = (void *)CONCAT62(uStack_7e,local_80);
        pvVar10 = pvVar1;
        if ((0xfff < uStack_68 * 2 + 2) &&
           (pvVar10 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar10);
      }
      goto LAB_180003edd;
    }
    if (7 < uStack_48) {
      pvVar1 = (void *)CONCAT62(local_60[0]._2_6_,(undefined2)local_60[0]);
      pvVar10 = pvVar1;
      if ((0xfff < uStack_48 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar10);
    }
  }
  if ((param_4 - 1 < 2) || (param_4 == 7)) {
    local_b0 = uVar13;
    pwVar9 = (wchar_t *)operator_new(uVar13 * 2);
    memset(pwVar9,0,uVar13 * 2);
    if (pwVar9 == (wchar_t *)0x0) {
      if (7 < uStack_68) {
        pvVar1 = (void *)CONCAT62(uStack_7e,local_80);
        pvVar10 = pvVar1;
        if ((0xfff < uStack_68 * 2 + 2) &&
           (pvVar10 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar10);
      }
      goto LAB_180003edd;
    }
    local_a8 = pwVar9;
    if (param_4 == 7) {
      lVar8 = FUN_1800011e0((longlong)pwVar9,(longlong)param_5,uVar13);
      iVar3 = (int)lVar8;
    }
    else {
      sVar5 = FUN_180001160(pwVar9,(char *)param_5,uVar13);
      iVar3 = (int)sVar5;
    }
    cVar2 = FUN_180008ee0(plVar4,lVar7,param_2,pwVar9,param_4,iVar3 * 2);
    if (cVar2 != '\0') {
      free(pwVar9);
      goto LAB_180004045;
    }
    free(pwVar9);
    if (uStack_68 < 8) goto LAB_180003edd;
    pvVar1 = (void *)CONCAT62(uStack_7e,local_80);
    pvVar10 = pvVar1;
    if ((0xfff < uStack_68 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    cVar2 = FUN_180008ee0(plVar4,lVar7,param_2,param_5,param_4,param_6);
    if (cVar2 != '\0') {
LAB_180004045:
      if (7 < uStack_68) {
        pvVar1 = (void *)CONCAT62(uStack_7e,local_80);
        pvVar10 = pvVar1;
        if ((0xfff < uStack_68 * 2 + 2) &&
           (pvVar10 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar10);
      }
      goto LAB_180003edd;
    }
    if (uStack_68 < 8) goto LAB_180003edd;
    pvVar1 = (void *)CONCAT62(uStack_7e,local_80);
    pvVar10 = pvVar1;
    if ((0xfff < uStack_68 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)*(void **)((longlong)pvVar1 + -8))))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(pvVar10);
LAB_180003edd:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_e8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegDeleteKeyA(struct HKEY__ * __ptr64,char const * __ptr64) */

long __cdecl RegAPI::RegDeleteKeyA(HKEY__ *param_1,char *param_2)

{
  void *pvVar1;
  long extraout_EAX;
  char *pcVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  void *_Memory;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  wchar_t local_40;
  undefined6 uStack_3e;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
                    /* 0x40a0  10  ?RegDeleteKeyA@RegAPI@@YAJPEAUHKEY__@@PEBD@Z */
  local_48 = 0xfffffffffffffffe;
  local_20 = DAT_180014008 ^ (ulonglong)auStack_68;
  pcVar2 = setlocale(0,"chs");
  sVar3 = mbstowcs((wchar_t *)0x0,param_2,0);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  local_30 = 0;
  uStack_28 = 7;
  local_40 = L'\0';
  FUN_180005b80((longlong *)&local_40,sVar3);
  pwVar4 = &local_40;
  if (7 < uStack_28) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_3e,local_40);
  }
  pcVar2 = setlocale(0,"chs");
  if (pwVar4 == (wchar_t *)0x0) {
    sVar3 = 0;
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    sVar3 = sVar3 + 1;
  }
  mbstowcs(pwVar4,param_2,sVar3);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  pwVar4 = &local_40;
  if (7 < uStack_28) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_3e,local_40);
  }
  RegDeleteKeyW(param_1,pwVar4);
  if (7 < uStack_28) {
    pvVar1 = (void *)CONCAT62(uStack_3e,local_40);
    _Memory = pvVar1;
    if ((0xfff < uStack_28 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_68);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegDeleteValueA(struct HKEY__ * __ptr64,char const * __ptr64) */

long __cdecl RegAPI::RegDeleteValueA(HKEY__ *param_1,char *param_2)

{
  void *pvVar1;
  long extraout_EAX;
  char *pcVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  void *_Memory;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  wchar_t local_40;
  undefined6 uStack_3e;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
                    /* 0x4200  12  ?RegDeleteValueA@RegAPI@@YAJPEAUHKEY__@@PEBD@Z */
  local_48 = 0xfffffffffffffffe;
  local_20 = DAT_180014008 ^ (ulonglong)auStack_68;
  pcVar2 = setlocale(0,"chs");
  sVar3 = mbstowcs((wchar_t *)0x0,param_2,0);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  local_30 = 0;
  uStack_28 = 7;
  local_40 = L'\0';
  FUN_180005b80((longlong *)&local_40,sVar3);
  pwVar4 = &local_40;
  if (7 < uStack_28) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_3e,local_40);
  }
  pcVar2 = setlocale(0,"chs");
  if (pwVar4 == (wchar_t *)0x0) {
    sVar3 = 0;
    pwVar4 = (wchar_t *)0x0;
  }
  else {
    sVar3 = sVar3 + 1;
  }
  mbstowcs(pwVar4,param_2,sVar3);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  pwVar4 = &local_40;
  if (7 < uStack_28) {
    pwVar4 = (wchar_t *)CONCAT62(uStack_3e,local_40);
  }
  RegDeleteValueW(param_1,pwVar4);
  if (7 < uStack_28) {
    pvVar1 = (void *)CONCAT62(uStack_3e,local_40);
    _Memory = pvVar1;
    if ((0xfff < uStack_28 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_68);
  return extraout_EAX;
}




/* long __cdecl RegAPI::OpenHiveW(wchar_t const * __ptr64,struct HKEY__ * __ptr64 * __ptr64,bool) */

long __cdecl RegAPI::OpenHiveW(wchar_t *param_1,HKEY__ **param_2,bool param_3)

{
  uint uVar1;
  long extraout_EAX;
  char *pcVar2;
  size_t _MaxCount;
  FILE *pFVar3;
  undefined8 *puVar4;
  HKEY__ *pHVar5;
  char ****ppppcVar6;
  undefined1 auStackY_a8 [32];
  char ***local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x4360  6  ?OpenHiveW@RegAPI@@YAJPEB_WPEAPEAUHKEY__@@_N@Z */
  local_38 = DAT_180014008 ^ (ulonglong)auStackY_a8;
  pcVar2 = setlocale(0,"chs");
  _MaxCount = wcstombs((char *)0x0,param_1,0);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  FUN_180005a10((longlong *)local_58,_MaxCount);
  ppppcVar6 = local_58;
  if (0xf < local_40) {
    ppppcVar6 = (char ****)local_58[0];
  }
  pcVar2 = setlocale(0,"chs");
  if (ppppcVar6 == (char ****)0x0) {
    _MaxCount = 0;
    ppppcVar6 = (char ****)0x0;
  }
  wcstombs((char *)ppppcVar6,param_1,_MaxCount);
  if (pcVar2 != (char *)0x0) {
    setlocale(0,pcVar2);
  }
  pcVar2 = "rb";
  if (!param_3) {
    pcVar2 = "r+b";
  }
  ppppcVar6 = local_58;
  if (0xf < local_40) {
    ppppcVar6 = (char ****)local_58[0];
  }
  pFVar3 = fopen((char *)ppppcVar6,pcVar2);
  if (pFVar3 == (FILE *)0x0) {
    if (0xf < local_40) {
      ppppcVar6 = (char ****)local_58[0];
      if ((0xfff < local_40 + 1) &&
         (ppppcVar6 = (char ****)local_58[0][-1],
         (char *)0x1f < (char *)((longlong)local_58[0] + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppcVar6);
    }
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x1070);
    pHVar5 = (HKEY__ *)
             FUN_180007300(puVar4,param_1,pFVar3,FUN_1800012d0,FUN_180001310,FUN_180001350);
    if (((pHVar5 == (HKEY__ *)0x0) || (*(uint *)(pHVar5 + 0x20) != 0x66676572)) ||
       (uVar1 = FUN_180007670((uint *)(pHVar5 + 0x20)), uVar1 != *(uint *)(pHVar5 + 0x21c))) {
      if (0xf < local_40) {
        ppppcVar6 = (char ****)local_58[0];
        if ((0xfff < local_40 + 1) &&
           (ppppcVar6 = (char ****)local_58[0][-1],
           (char *)0x1f < (char *)((longlong)local_58[0] + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppcVar6);
      }
    }
    else {
      *param_2 = pHVar5;
      if (0xf < local_40) {
        ppppcVar6 = (char ****)local_58[0];
        if ((0xfff < local_40 + 1) &&
           (ppppcVar6 = (char ****)local_58[0][-1],
           (char *)0x1f < (char *)((longlong)local_58[0] + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppcVar6);
      }
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_a8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::CloseHive(struct HKEY__ * __ptr64 * __ptr64) */

long __cdecl RegAPI::CloseHive(HKEY__ **param_1)

{
  longlong *plVar1;
  
                    /* 0x45e0  1  ?CloseHive@RegAPI@@YAJPEAPEAUHKEY__@@@Z */
  if (param_1 != (HKEY__ **)0x0) {
    plVar1 = (longlong *)
             __RTDynamicCast(*param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::Hive::RTTI_Type_Descriptor,0);
    if (plVar1 != (longlong *)0x0) {
      fclose((FILE *)plVar1[0x204]);
      (**(code **)(*plVar1 + 0x50))(plVar1,1);
      *param_1 = (HKEY__ *)0x0;
      return 0;
    }
  }
  return 0x57;
}




/* WARNING: Type propagation algorithm not settling */
/* long __cdecl RegAPI::RegOpenKeyExW(struct HKEY__ * __ptr64,wchar_t const * __ptr64,unsigned
   long,unsigned long,struct HKEY__ * __ptr64 * __ptr64) */

long __cdecl
RegAPI::RegOpenKeyExW(HKEY__ *param_1,wchar_t *param_2,ulong param_3,ulong param_4,HKEY__ **param_5)

{
  void *pvVar1;
  long extraout_EAX;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  void *_Memory;
  undefined2 *puVar5;
  short *psVar6;
  ulonglong uVar7;
  undefined4 in_register_00000084;
  ulonglong uVar8;
  undefined4 in_register_0000008c;
  undefined2 *puVar9;
  undefined1 auStackY_98 [32];
  undefined8 local_60;
  longlong local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x4660  20  ?RegOpenKeyExW@RegAPI@@YAJPEAUHKEY__@@PEB_WKKPEAPEAU2@@Z */
  local_38 = DAT_180014008 ^ (ulonglong)auStackY_98;
  if (((param_1 != (HKEY__ *)0x0) && (param_2 != (wchar_t *)0x0)) && (param_5 != (HKEY__ **)0x0)) {
    uVar2 = (**(code **)(*(longlong *)param_1 + 0x30))
                      (param_1,param_2,CONCAT44(in_register_00000084,param_3),
                       CONCAT44(in_register_0000008c,param_4));
    uVar7 = 0;
    uVar2 = __RTDynamicCast(uVar2,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Hive::RTTI_Type_Descriptor);
    local_48 = 0;
    local_40 = 7;
    local_58[0]._0_2_ = 0;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != L'\0');
    FUN_180005d00(&local_60,param_2,param_2 + lVar3,local_58,towupper_exref);
    puVar5 = (undefined2 *)CONCAT62(local_58[0]._2_6_,(undefined2)local_58[0]);
    uVar8 = local_40;
    puVar9 = (undefined2 *)local_58;
    if (7 < local_40) {
      puVar9 = puVar5;
    }
LAB_180004750:
    puVar4 = (undefined2 *)local_58;
    if (7 < uVar8) {
      puVar4 = puVar5;
    }
    if (uVar7 < local_48) {
      psVar6 = puVar4 + uVar7;
      for (lVar3 = local_48 - uVar7; lVar3 != 0; lVar3 = lVar3 + -1) {
        if (*psVar6 == 0x5c) {
          if (psVar6 != (short *)0x0) {
            uVar7 = (longlong)psVar6 - (longlong)puVar4 >> 1;
            goto LAB_180004787;
          }
          break;
        }
        psVar6 = psVar6 + 1;
      }
    }
    uVar7 = 0xffffffffffffffff;
LAB_180004787:
    if (uVar7 == 0xffffffffffffffff) {
      lVar3 = -2;
    }
    else {
      puVar4 = (undefined2 *)local_58;
      if (7 < uVar8) {
        puVar4 = puVar5;
      }
      lVar3 = uVar7 * 2;
      puVar4[uVar7] = 0;
      puVar5 = (undefined2 *)CONCAT62(local_58[0]._2_6_,(undefined2)local_58[0]);
      uVar8 = local_40;
    }
    if (uVar7 == 0) {
      puVar9 = (undefined2 *)local_58;
      if (7 < uVar8) {
        puVar9 = puVar5;
      }
      puVar9 = puVar9 + 1;
      goto LAB_180004750;
    }
    param_1 = (HKEY__ *)(**(code **)(*(longlong *)param_1 + 0x38))(param_1,uVar2,puVar9);
    if (param_1 == (HKEY__ *)0x0) goto LAB_180004848;
    if (uVar7 != 0xffffffffffffffff) {
      puVar5 = (undefined2 *)CONCAT62(local_58[0]._2_6_,(undefined2)local_58[0]);
      puVar9 = (undefined2 *)local_58;
      if (7 < local_40) {
        puVar9 = puVar5;
      }
      uVar8 = local_40;
      puVar9 = (undefined2 *)((longlong)puVar9 + lVar3 + 2);
      goto LAB_180004750;
    }
    lVar3 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor);
    if (lVar3 != 0) {
      *param_5 = param_1;
    }
LAB_180004848:
    if (7 < local_40) {
      pvVar1 = (void *)CONCAT62(local_58[0]._2_6_,(undefined2)local_58[0]);
      _Memory = pvVar1;
      if ((0xfff < local_40 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_98);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegCloseKey(struct HKEY__ * __ptr64) */

long __cdecl RegAPI::RegCloseKey(HKEY__ *param_1)

{
  longlong lVar1;
  
                    /* 0x48c0  7  ?RegCloseKey@RegAPI@@YAJPEAUHKEY__@@@Z */
  if (param_1 != (HKEY__ *)0x0) {
    lVar1 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      return 0;
    }
  }
  return 0x57;
}




/* long __cdecl RegAPI::RegQueryInfoKeyW(struct HKEY__ * __ptr64,wchar_t * __ptr64,unsigned long *
   __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long *
   __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long *
   __ptr64,struct _FILETIME * __ptr64) */

long __cdecl
RegAPI::RegQueryInfoKeyW
          (HKEY__ *param_1,wchar_t *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
          ulong *param_6,ulong *param_7,ulong *param_8,ulong *param_9,ulong *param_10,
          ulong *param_11,_FILETIME *param_12)

{
  longlong lVar1;
  
                    /* 0x4900  22
                       ?RegQueryInfoKeyW@RegAPI@@YAJPEAUHKEY__@@PEA_WPEAK22222222PEAU_FILETIME@@@Z
                        */
  if (param_1 != (HKEY__ *)0x0) {
    lVar1 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      if (param_5 != (ulong *)0x0) {
        *param_5 = *(ulong *)(*(longlong *)(lVar1 + 0x20) + 0x14);
      }
      if (param_6 != (ulong *)0x0) {
        *param_6 = (uint)(*(ushort *)(*(longlong *)(lVar1 + 0x20) + 0x34) >> 1);
      }
      if (param_8 != (ulong *)0x0) {
        *param_8 = *(ulong *)(*(longlong *)(lVar1 + 0x20) + 0x24);
      }
      if (param_9 != (ulong *)0x0) {
        *param_9 = (uint)(*(ushort *)(*(longlong *)(lVar1 + 0x20) + 0x3c) >> 1);
      }
      if (param_10 != (ulong *)0x0) {
        *param_10 = *(ulong *)(*(longlong *)(lVar1 + 0x20) + 0x40);
      }
      return 0;
    }
  }
  return 0x57;
}




/* long __cdecl RegAPI::RegEnumKeyExW(struct HKEY__ * __ptr64,unsigned long,wchar_t *
   __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,wchar_t * __ptr64,unsigned long *
   __ptr64,struct _FILETIME * __ptr64) */

long __cdecl
RegAPI::RegEnumKeyExW
          (HKEY__ *param_1,ulong param_2,wchar_t *param_3,ulong *param_4,ulong *param_5,
          wchar_t *param_6,ulong *param_7,_FILETIME *param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  long extraout_EAX;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined6 uStack_5e;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
                    /* 0x49b0  15
                       ?RegEnumKeyExW@RegAPI@@YAJPEAUHKEY__@@KPEA_WPEAK212PEAU_FILETIME@@@Z */
  local_78 = 0xfffffffffffffffe;
  local_40 = DAT_180014008 ^ (ulonglong)auStack_a8;
  if (param_1 != (HKEY__ *)0x0) {
    uVar9 = 0;
    local_88 = 0;
    lVar3 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor);
    if ((((lVar3 != 0) && (param_3 != (wchar_t *)0x0)) && (param_4 != (ulong *)0x0)) &&
       ((uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x20) + 0x14), uVar1 != 0 && (param_2 < uVar1)))) {
      uVar4 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      local_88 = 0;
      lVar5 = __RTDynamicCast(uVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Hive::RTTI_Type_Descriptor);
      plVar6 = (longlong *)FUN_180007a60(lVar3,lVar5);
      if (plVar6 != (longlong *)0x0) {
        local_70 = plVar6;
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x58))(plVar6,lVar5,param_2);
        if (plVar7 != (longlong *)0x0) {
          local_68 = plVar7;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_60);
          puVar2 = (undefined2 *)CONCAT62(uStack_5e,local_60);
          if (local_50 + 1 <= (ulonglong)*param_4) {
            if (local_50 != 0) {
              do {
                puVar8 = &local_60;
                if (7 < uStack_48) {
                  puVar8 = puVar2;
                }
                param_3[uVar9] = puVar8[uVar9];
                uVar9 = (ulonglong)((int)uVar9 + 1);
              } while (uVar9 < local_50);
            }
            param_3[uVar9] = L'\0';
            *param_4 = (ulong)uVar9;
          }
          if (7 < uStack_48) {
            puVar8 = puVar2;
            if ((0xfff < uStack_48 * 2 + 2) &&
               (puVar8 = *(undefined2 **)(puVar2 + -4),
               0x1f < (ulonglong)((longlong)puVar2 + (-8 - (longlong)puVar8)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(puVar8);
          }
          local_50 = 0;
          uStack_48 = 7;
          local_60 = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7,1);
        }
        (**(code **)(*plVar6 + 0x50))(plVar6,1);
      }
    }
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_a8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegEnumValueW(struct HKEY__ * __ptr64,unsigned long,wchar_t *
   __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned long * __ptr64,unsigned char *
   __ptr64,unsigned long * __ptr64) */

long __cdecl
RegAPI::RegEnumValueW
          (HKEY__ *param_1,ulong param_2,wchar_t *param_3,ulong *param_4,ulong *param_5,
          ulong *param_6,uchar *param_7,ulong *param_8)

{
  char cVar1;
  uint uVar2;
  long extraout_EAX;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  ulong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined2 local_78;
  undefined6 uStack_76;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
                    /* 0x4bc0  17  ?RegEnumValueW@RegAPI@@YAJPEAUHKEY__@@KPEA_WPEAK22PEAE2@Z */
  local_90 = 0xfffffffffffffffe;
  local_58 = DAT_180014008 ^ (ulonglong)auStack_c8;
  local_98 = param_6;
  if (param_1 != (HKEY__ *)0x0) {
    local_a8 = 0;
    lVar3 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor);
    if ((((lVar3 != 0) && (param_3 != (wchar_t *)0x0)) && (param_4 != (ulong *)0x0)) &&
       ((uVar9 = *(uint *)(*(longlong *)(lVar3 + 0x20) + 0x24), uVar9 != 0 && (param_2 < uVar9)))) {
      uVar4 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      local_a8 = 0;
      lVar5 = __RTDynamicCast(uVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Hive::RTTI_Type_Descriptor);
      plVar6 = (longlong *)FUN_180007af0(lVar3,lVar5);
      if (plVar6 != (longlong *)0x0) {
        local_88 = plVar6;
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x58))(plVar6,lVar5,param_2);
        if (plVar7 != (longlong *)0x0) {
          local_80 = plVar7;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
          uVar9 = 0;
          puVar11 = (undefined2 *)CONCAT62(uStack_76,local_78);
          if (local_68 != 0) {
            uVar10 = 0;
            do {
              puVar8 = &local_78;
              if (7 < uStack_60) {
                puVar8 = puVar11;
              }
              param_3[uVar10] = puVar8[uVar10];
              uVar9 = uVar9 + 1;
              uVar10 = (ulonglong)uVar9;
            } while (uVar10 < local_68);
          }
          param_3[uVar9] = L'\0';
          *param_4 = uVar9;
          if (local_98 != (ulong *)0x0) {
            *local_98 = *(ulong *)(plVar7[5] + 0xc);
          }
          if (param_8 != (ulong *)0x0) {
            if (param_7 == (uchar *)0x0) {
              uVar9 = *(uint *)(plVar7[5] + 4);
              uVar2 = uVar9 + 0x80000000;
              if (uVar9 < 0x80000000) {
                uVar2 = uVar9;
              }
              *param_8 = uVar2;
            }
            else {
              cVar1 = FUN_18000c160((longlong)plVar7,lVar5,param_7,*param_8);
              if (cVar1 == '\0') {
                puVar11 = (undefined2 *)CONCAT62(uStack_76,local_78);
              }
              else {
                uVar9 = *(uint *)(plVar7[5] + 4);
                uVar2 = uVar9 + 0x80000000;
                if (uVar9 < 0x80000000) {
                  uVar2 = uVar9;
                }
                *param_8 = uVar2;
                puVar11 = (undefined2 *)CONCAT62(uStack_76,local_78);
              }
            }
          }
          if (7 < uStack_60) {
            puVar8 = puVar11;
            if ((0xfff < uStack_60 * 2 + 2) &&
               (puVar8 = *(undefined2 **)(puVar11 + -4),
               0x1f < (ulonglong)((longlong)puVar11 + (-8 - (longlong)puVar8)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(puVar8);
          }
          local_68 = 0;
          uStack_60 = 7;
          local_78 = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7,1);
        }
        (**(code **)(*plVar6 + 0x50))(plVar6,1);
      }
    }
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStack_c8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegQueryValueExW(struct HKEY__ * __ptr64,wchar_t const * __ptr64,unsigned
   long * __ptr64,unsigned long * __ptr64,unsigned char * __ptr64,unsigned long * __ptr64) */

long __cdecl
RegAPI::RegQueryValueExW
          (HKEY__ *param_1,wchar_t *param_2,ulong *param_3,ulong *param_4,uchar *param_5,
          ulong *param_6)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  long extraout_EAX;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  void *_Memory;
  longlong *plVar9;
  undefined1 auStackY_a8 [32];
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
                    /* 0x4e60  24  ?RegQueryValueExW@RegAPI@@YAJPEAUHKEY__@@PEB_WPEAK2PEAE2@Z */
  local_48 = DAT_180014008 ^ (ulonglong)auStackY_a8;
  if ((((param_1 != (HKEY__ *)0x0) &&
       (lVar5 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                &RegLib::Key::RTTI_Type_Descriptor), lVar5 != 0)) &&
      (param_2 != (wchar_t *)0x0)) && (*(int *)(*(longlong *)(lVar5 + 0x20) + 0x24) != 0)) {
    uVar6 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    lVar7 = __RTDynamicCast(uVar6,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Hive::RTTI_Type_Descriptor);
    local_58 = 0;
    uStack_50 = 7;
    local_68[0]._0_2_ = 0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != L'\0');
    FUN_180005d00(&local_70,param_2,param_2 + lVar8,local_68,towupper_exref);
    plVar9 = local_68;
    if (7 < uStack_50) {
      plVar9 = (longlong *)CONCAT62(local_68[0]._2_6_,(undefined2)local_68[0]);
    }
    lVar5 = FUN_180007c10(lVar5,lVar7,plVar9);
    if (lVar5 != 0) {
      if (param_4 != (ulong *)0x0) {
        *param_4 = *(ulong *)(*(longlong *)(lVar5 + 0x28) + 0xc);
      }
      if ((param_6 != (ulong *)0x0) &&
         ((param_5 == (uchar *)0x0 ||
          (cVar3 = FUN_18000c160(lVar5,lVar7,param_5,*param_6), cVar3 != '\0')))) {
        uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x28) + 4);
        uVar4 = uVar1 + 0x80000000;
        if (uVar1 < 0x80000000) {
          uVar4 = uVar1;
        }
        *param_6 = uVar4;
      }
    }
    if (7 < uStack_50) {
      pvVar2 = (void *)CONCAT62(local_68[0]._2_6_,(undefined2)local_68[0]);
      _Memory = pvVar2;
      if ((0xfff < uStack_50 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_a8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegSetValueExW(struct HKEY__ * __ptr64,wchar_t const * __ptr64,unsigned
   long,unsigned long,unsigned char const * __ptr64,unsigned long) */

long __cdecl
RegAPI::RegSetValueExW
          (HKEY__ *param_1,wchar_t *param_2,ulong param_3,ulong param_4,uchar *param_5,ulong param_6
          )

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  long extraout_EAX;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  void *_Memory;
  undefined1 auStackY_98 [32];
  undefined8 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
                    /* 0x5040  26  ?RegSetValueExW@RegAPI@@YAJPEAUHKEY__@@PEB_WKKPEBEK@Z */
  local_38 = DAT_180014008 ^ (ulonglong)auStackY_98;
  if (((((param_1 == (HKEY__ *)0x0) ||
        (lVar4 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                 &RegLib::Key::RTTI_Type_Descriptor), lVar4 == 0)) ||
       (param_2 == (wchar_t *)0x0)) || ((param_5 == (uchar *)0x0 || (param_6 == 0)))) ||
     (*(int *)(*(longlong *)(lVar4 + 0x20) + 0x24) == 0)) goto LAB_18000520d;
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  lVar6 = __RTDynamicCast(uVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                          &RegLib::Hive::RTTI_Type_Descriptor);
  local_48 = 0;
  uStack_40 = 7;
  local_58[0]._0_2_ = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (param_2[lVar8] != L'\0');
  FUN_180005d00(&local_60,param_2,param_2 + lVar8,local_58,towupper_exref);
  plVar7 = local_58;
  if (7 < uStack_40) {
    plVar7 = (longlong *)CONCAT62(local_58[0]._2_6_,(undefined2)local_58[0]);
  }
  plVar7 = (longlong *)FUN_180007c10(lVar4,lVar6,plVar7);
  if ((plVar7 != (longlong *)0x0) && (param_4 == *(ulong *)(plVar7[5] + 0xc))) {
    if ((param_4 - 4 < 2) || (param_4 == 0xb)) {
      uVar1 = *(uint *)(plVar7[5] + 4);
      uVar3 = uVar1 + 0x80000000;
      if (uVar1 < 0x80000000) {
        uVar3 = uVar1;
      }
      if (param_6 != uVar3) goto LAB_1800051bf;
    }
    FUN_18000c290(plVar7,lVar6,param_5,param_6);
  }
LAB_1800051bf:
  if (7 < uStack_40) {
    pvVar2 = (void *)CONCAT62(local_58[0]._2_6_,(undefined2)local_58[0]);
    _Memory = pvVar2;
    if ((0xfff < uStack_40 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
LAB_18000520d:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_98);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegSetValueNewW(struct HKEY__ * __ptr64,wchar_t const * __ptr64,unsigned
   long,unsigned long,unsigned char const * __ptr64,unsigned long) */

long __cdecl
RegAPI::RegSetValueNewW
          (HKEY__ *param_1,wchar_t *param_2,ulong param_3,ulong param_4,uchar *param_5,ulong param_6
          )

{
  void *pvVar1;
  long extraout_EAX;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *_Locale;
  size_t sVar6;
  void *pvVar7;
  char ****ppppcVar8;
  longlong *plVar9;
  undefined1 auStackY_c8 [32];
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  ulonglong uStack_68;
  char ***local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
                    /* 0x5230  28  ?RegSetValueNewW@RegAPI@@YAJPEAUHKEY__@@PEB_WKKPEBEK@Z */
  local_40 = DAT_180014008 ^ (ulonglong)auStackY_c8;
  if ((((param_1 != (HKEY__ *)0x0) &&
       (plVar2 = (longlong *)
                 __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                 &RegLib::Key::RTTI_Type_Descriptor), plVar2 != (longlong *)0x0)) &&
      (param_2 != (wchar_t *)0x0)) && ((param_5 != (uchar *)0x0 && (param_6 != 0)))) {
    uVar3 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    lVar4 = __RTDynamicCast(uVar3,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Hive::RTTI_Type_Descriptor);
    if (*(int *)(plVar2[4] + 0x24) != 0) {
      local_70 = 0;
      uStack_68 = 7;
      local_80[0]._0_2_ = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != L'\0');
      FUN_180005d00(&local_88,param_2,param_2 + lVar5,local_80,towupper_exref);
      plVar9 = local_80;
      if (7 < uStack_68) {
        plVar9 = (longlong *)CONCAT62(local_80[0]._2_6_,(undefined2)local_80[0]);
      }
      lVar5 = FUN_180007c10((longlong)plVar2,lVar4,plVar9);
      if (lVar5 != 0) {
        if (7 < uStack_68) {
          pvVar1 = (void *)CONCAT62(local_80[0]._2_6_,(undefined2)local_80[0]);
          pvVar7 = pvVar1;
          if ((0xfff < uStack_68 * 2 + 2) &&
             (pvVar7 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar7);
        }
        goto LAB_1800054e4;
      }
      if (7 < uStack_68) {
        pvVar1 = (void *)CONCAT62(local_80[0]._2_6_,(undefined2)local_80[0]);
        pvVar7 = pvVar1;
        if ((0xfff < uStack_68 * 2 + 2) &&
           (pvVar7 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar7);
      }
    }
    _Locale = setlocale(0,"chs");
    sVar6 = wcstombs((char *)0x0,param_2,0);
    if (_Locale != (char *)0x0) {
      setlocale(0,_Locale);
    }
    FUN_180005a10((longlong *)local_60,sVar6);
    ppppcVar8 = local_60;
    if (0xf < local_48) {
      ppppcVar8 = (char ****)local_60[0];
    }
    FUN_180001000((char *)ppppcVar8,param_2,sVar6 + 1);
    ppppcVar8 = local_60;
    if (0xf < local_48) {
      ppppcVar8 = (char ****)local_60[0];
    }
    FUN_180008ee0(plVar2,lVar4,ppppcVar8,param_5,param_4,param_6);
    if (0xf < local_48) {
      ppppcVar8 = (char ****)local_60[0];
      if ((0xfff < local_48 + 1) &&
         (ppppcVar8 = (char ****)local_60[0][-1],
         (char *)0x1f < (char *)((longlong)local_60[0] + (-8 - (longlong)ppppcVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(ppppcVar8);
    }
  }
LAB_1800054e4:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_c8);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegFlushKey(struct HKEY__ * __ptr64) */

long __cdecl RegAPI::RegFlushKey(HKEY__ *param_1)

{
                    /* 0x5510  18  ?RegFlushKey@RegAPI@@YAJPEAUHKEY__@@@Z */
  return 0;
}




/* WARNING: Type propagation algorithm not settling */
/* long __cdecl RegAPI::RegDeleteKeyW(struct HKEY__ * __ptr64,wchar_t const * __ptr64) */

long __cdecl RegAPI::RegDeleteKeyW(HKEY__ *param_1,wchar_t *param_2)

{
  void *pvVar1;
  long extraout_EAX;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  void *_Memory;
  undefined2 *puVar7;
  short *psVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
                    /* 0x5520  11  ?RegDeleteKeyW@RegAPI@@YAJPEAUHKEY__@@PEB_W@Z */
  local_28 = DAT_180014008 ^ (ulonglong)auStackY_88;
  if (param_1 != (HKEY__ *)0x0) {
    uVar9 = 0;
    lVar2 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor);
    if ((lVar2 != 0) && (param_2 != (wchar_t *)0x0)) {
      uVar3 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      lVar4 = __RTDynamicCast(uVar3,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Hive::RTTI_Type_Descriptor);
      local_38 = 0;
      local_30 = 7;
      local_48[0]._0_2_ = 0;
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (param_2[lVar2] != L'\0');
      FUN_180005d00(&local_50,param_2,param_2 + lVar2,local_48,towupper_exref);
      puVar7 = (undefined2 *)CONCAT62(local_48[0]._2_6_,(undefined2)local_48[0]);
      uVar10 = local_30;
      puVar11 = (undefined2 *)local_48;
      if (7 < local_30) {
        puVar11 = puVar7;
      }
LAB_180005620:
      puVar5 = (undefined2 *)local_48;
      if (7 < uVar10) {
        puVar5 = puVar7;
      }
      if (uVar9 < local_38) {
        psVar8 = puVar5 + uVar9;
        for (lVar2 = local_38 - uVar9; lVar2 != 0; lVar2 = lVar2 + -1) {
          if (*psVar8 == 0x5c) {
            if (psVar8 != (short *)0x0) {
              uVar9 = (longlong)psVar8 - (longlong)puVar5 >> 1;
              goto LAB_180005657;
            }
            break;
          }
          psVar8 = psVar8 + 1;
        }
      }
      uVar9 = 0xffffffffffffffff;
LAB_180005657:
      if (uVar9 == 0xffffffffffffffff) {
        lVar2 = -2;
      }
      else {
        puVar5 = (undefined2 *)local_48;
        if (7 < uVar10) {
          puVar5 = puVar7;
        }
        lVar2 = uVar9 * 2;
        puVar5[uVar9] = 0;
        puVar7 = (undefined2 *)CONCAT62(local_48[0]._2_6_,(undefined2)local_48[0]);
        uVar10 = local_30;
      }
      if (uVar9 == 0) {
        puVar11 = (undefined2 *)local_48;
        if (7 < uVar10) {
          puVar11 = puVar7;
        }
        puVar11 = puVar11 + 1;
        goto LAB_180005620;
      }
      param_1 = (HKEY__ *)(**(code **)(*(longlong *)param_1 + 0x38))(param_1,lVar4,puVar11);
      if (param_1 == (HKEY__ *)0x0) goto LAB_180005743;
      if (uVar9 != 0xffffffffffffffff) {
        puVar7 = (undefined2 *)CONCAT62(local_48[0]._2_6_,(undefined2)local_48[0]);
        puVar11 = (undefined2 *)local_48;
        if (7 < local_30) {
          puVar11 = puVar7;
        }
        uVar10 = local_30;
        puVar11 = (undefined2 *)((longlong)puVar11 + lVar2 + 2);
        goto LAB_180005620;
      }
      lVar2 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Key::RTTI_Type_Descriptor);
      if ((lVar2 != 0) &&
         (plVar6 = (longlong *)
                   __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                                   &RegLib::Key::RTTI_Type_Descriptor), plVar6 != (longlong *)0x0))
      {
        FUN_180007ca0(plVar6,lVar4);
      }
LAB_180005743:
      if (7 < local_30) {
        pvVar1 = (void *)CONCAT62(local_48[0]._2_6_,(undefined2)local_48[0]);
        _Memory = pvVar1;
        if ((0xfff < local_30 * 2 + 2) &&
           (_Memory = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_88);
  return extraout_EAX;
}




/* long __cdecl RegAPI::RegDeleteValueW(struct HKEY__ * __ptr64,wchar_t const * __ptr64) */

long __cdecl RegAPI::RegDeleteValueW(HKEY__ *param_1,wchar_t *param_2)

{
  void *pvVar1;
  long extraout_EAX;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Memory;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
                    /* 0x57c0  13  ?RegDeleteValueW@RegAPI@@YAJPEAUHKEY__@@PEB_W@Z */
  local_28 = DAT_180014008 ^ (ulonglong)auStackY_88;
  if (((param_1 != (HKEY__ *)0x0) &&
      (lVar2 = __RTDynamicCast(param_1,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::Key::RTTI_Type_Descriptor), lVar2 != 0)) &&
     (param_2 != (wchar_t *)0x0)) {
    uVar3 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
    lVar4 = __RTDynamicCast(uVar3,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Hive::RTTI_Type_Descriptor);
    local_38 = 0;
    uStack_30 = 7;
    local_48[0]._0_2_ = 0;
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != L'\0');
    FUN_180005d00(&local_50,param_2,param_2 + lVar6,local_48,towupper_exref);
    plVar5 = local_48;
    if (7 < uStack_30) {
      plVar5 = (longlong *)CONCAT62(local_48[0]._2_6_,(undefined2)local_48[0]);
    }
    plVar5 = (longlong *)FUN_180007c10(lVar2,lVar4,plVar5);
    if (plVar5 != (longlong *)0x0) {
      FUN_18000c5e0(plVar5,lVar4);
    }
    if (7 < uStack_30) {
      pvVar1 = (void *)CONCAT62(local_48[0]._2_6_,(undefined2)local_48[0]);
      _Memory = pvVar1;
      if ((0xfff < uStack_30 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_88);
  return extraout_EAX;
}




void FUN_180005940(longlong *param_1)

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




void FUN_1800059b0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}




longlong * FUN_180005a10(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong uVar7;
  void *_Dst;
  
  _Dst = (void *)0x0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    if (0x7fffffffffffffff < param_2) {
      FUN_180005fd0();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = param_2 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar5 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
      uVar7 = uVar6;
    }
    uVar5 = uVar7 + 1;
    if (uVar5 < 0x1000) {
      if (uVar5 != 0) {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar5) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar6);
      if (pvVar3 == (void *)0x0) goto LAB_180005b65;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[2] = param_2;
    param_1[3] = uVar7;
    memset(_Dst,0,param_2);
    *(undefined1 *)((longlong)_Dst + param_2) = 0;
    if (0xf < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_180005b65:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar4 = param_1;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_2;
    memset(plVar4,0,param_2);
    *(undefined1 *)((longlong)plVar4 + param_2) = 0;
  }
  return param_1;
}




longlong * FUN_180005b80(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  
  uVar4 = param_1[3];
  if (uVar4 < param_2) {
    if (0x7ffffffffffffffe < param_2) {
      FUN_180005fd0();
      pcVar1 = (code *)swi(3);
      plVar3 = (longlong *)(*pcVar1)();
      return plVar3;
    }
    uVar5 = param_2 | 7;
    uVar6 = 0x7ffffffffffffffe;
    if (((uVar5 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) &&
       (uVar7 = (uVar4 >> 1) + uVar4, uVar6 = uVar5, uVar5 < uVar7)) {
      uVar6 = uVar7;
    }
    puVar10 = (undefined2 *)0x0;
    uVar5 = (uVar6 + 1) * 2;
    uVar7 = 0xffffffffffffffff;
    if ((uVar6 + 1 < 0x8000000000000000) && (uVar7 = uVar5, uVar5 < 0x1000)) {
      if (uVar5 != 0) {
        puVar10 = (undefined2 *)operator_new(uVar5);
      }
    }
    else {
      uVar5 = uVar7 + 0x27;
      if (uVar7 + 0x27 <= uVar7) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar2 = operator_new(uVar5);
      if (pvVar2 == (void *)0x0) goto LAB_180005cea;
      puVar10 = (undefined2 *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar10 + -4) = pvVar2;
    }
    param_1[2] = param_2;
    param_1[3] = uVar6;
    uVar6 = param_2;
    puVar9 = puVar10;
    if (param_2 != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    puVar10[param_2] = 0;
    if (7 < uVar4) {
      pvVar2 = (void *)*param_1;
      _Memory = pvVar2;
      if ((0xfff < uVar4 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
LAB_180005cea:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)puVar10;
  }
  else {
    plVar3 = param_1;
    if (7 < uVar4) {
      plVar3 = (longlong *)*param_1;
    }
    param_1[2] = param_2;
    uVar4 = param_2;
    plVar8 = plVar3;
    if (param_2 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)plVar8 = 0;
        plVar8 = (longlong *)((longlong)plVar8 + 2);
      }
    }
    *(undefined2 *)((longlong)plVar3 + param_2 * 2) = 0;
  }
  return param_1;
}




undefined8 *
FUN_180005d00(undefined8 *param_1,undefined2 *param_2,undefined2 *param_3,longlong *param_4,
             undefined *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar5 = (ulonglong)((longlong)param_3 + (1 - (longlong)param_2)) >> 1;
  if (param_3 < param_2) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
    *param_1 = param_4;
  }
  else {
    do {
      uVar3 = (*(code *)param_5)(*param_2);
      uVar1 = param_4[2];
      uVar2 = param_4[3];
      if (uVar1 < uVar2) {
        param_4[2] = uVar1 + 1;
        plVar4 = param_4;
        if (7 < uVar2) {
          plVar4 = (longlong *)*param_4;
        }
        *(undefined2 *)((longlong)plVar4 + uVar1 * 2) = uVar3;
        *(undefined2 *)((longlong)plVar4 + uVar1 * 2 + 2) = 0;
      }
      else {
        FUN_180005e40(param_4,uVar1,uVar2,uVar3);
      }
      param_2 = param_2 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
    *param_1 = param_4;
  }
  return param_1;
}




void FUN_180005dd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    *param_1 = 0;
  }
  return;
}




void FUN_180005e10(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 *
FUN_180005e40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  size_t _Size;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Memory;
  void *_Dst;
  
  lVar1 = param_1[2];
  if (lVar1 == 0x7ffffffffffffffe) {
    FUN_180005fd0();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar2 = param_1[3];
  uVar6 = lVar1 + 1U | 7;
  uVar8 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uVar7 = (uVar2 >> 1) + uVar2, uVar8 = uVar6, uVar6 < uVar7)) {
    uVar8 = uVar7;
  }
  _Dst = (void *)0x0;
  uVar6 = (uVar8 + 1) * 2;
  uVar7 = 0xffffffffffffffff;
  if ((uVar8 + 1 < 0x8000000000000000) && (uVar7 = uVar6, uVar6 < 0x1000)) {
    if (uVar6 != 0) {
      _Dst = operator_new(uVar6);
    }
  }
  else {
    uVar6 = uVar7 + 0x27;
    if (uVar7 + 0x27 <= uVar7) {
      uVar6 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar6);
    if (pvVar4 == (void *)0x0) goto LAB_180005f7f;
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  _Size = lVar1 * 2;
  param_1[2] = lVar1 + 1U;
  param_1[3] = uVar8;
  if (uVar2 < 8) {
    memcpy(_Dst,param_1,_Size);
    *(undefined2 *)(_Size + (longlong)_Dst) = param_4;
    *(undefined2 *)(_Size + 2 + (longlong)_Dst) = 0;
  }
  else {
    pvVar4 = (void *)*param_1;
    memcpy(_Dst,pvVar4,_Size);
    *(undefined2 *)(_Size + (longlong)_Dst) = param_4;
    *(undefined2 *)(_Size + 2 + (longlong)_Dst) = 0;
    _Memory = pvVar4;
    if ((0xfff < uVar2 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
LAB_180005f7f:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




void FUN_180005fd0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 * FUN_180005ff0(int *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *_Dst;
  uint uVar7;
  longlong lVar8;
  short *psVar9;
  int *local_res8;
  longlong local_res10;
  undefined8 local_res18;
  int local_res20;
  undefined8 *puVar10;
  void *pvVar11;
  ulonglong local_50 [3];
  
  local_50[1] = 0xfffffffffffffffe;
  puVar10 = (undefined8 *)0x0;
  if ((*param_1 == -1) || (*(longlong *)(param_1 + 4) == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) || (param_1[1] < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar7 = param_1[1];
  if (!bVar4) {
    uVar7 = -uVar7;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar6 = uVar7;
  local_50[0] = (ulonglong)uVar7;
  _Dst = operator_new((ulonglong)uVar7);
  if (_Dst != (void *)0x0) {
    pvVar11 = _Dst;
    memset(_Dst,0,(ulonglong)uVar7);
    local_50[0] = (ulonglong)(*param_1 + 0x1000);
    puVar3 = *(undefined8 **)(param_1 + 4);
    cVar5 = (*(code *)puVar3[1])(*puVar3,local_50,0);
    if (cVar5 != '\0') {
      local_res8 = (int *)CONCAT44(local_res8._4_4_,1);
      cVar5 = (*(code *)puVar3[2])(*puVar3,_Dst,uVar7,&local_res8,uVar6,puVar10,pvVar11);
      if (cVar5 != '\0') {
        lVar8 = 8;
        if (*(int *)(local_res10 + 0x38) != 1) {
          lVar8 = 4;
        }
        psVar9 = (short *)(lVar8 + (longlong)_Dst);
        if (param_4 == 0) {
          iVar2 = *param_1;
          if ((iVar2 == -1) || (*(longlong *)(param_1 + 4) == 0)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((bVar4) || (param_1[1] < 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          uVar7 = param_1[1];
          uVar6 = uVar7;
          if (!bVar4) {
            uVar6 = -uVar7;
          }
          if ((uVar6 < 0x50) || (*psVar9 != 0x6b6e)) {
            if ((iVar2 == -1) || (*(longlong *)(param_1 + 4) == 0)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) || ((int)uVar7 < 0)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            uVar6 = -uVar7;
            if (bVar4) {
              uVar6 = uVar7;
            }
            if ((uVar6 < 0x18) || (*psVar9 != 0x6b76)) {
              if ((iVar2 == -1) || (*(longlong *)(param_1 + 4) == 0)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar4) || ((int)uVar7 < 0)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              uVar6 = -uVar7;
              if (bVar4) {
                uVar6 = uVar7;
              }
              if ((uVar6 < 0x40) || (*psVar9 != 0x6b73)) {
                sVar1 = *psVar9;
                if (sVar1 == 0x6972) {
                  puVar10 = (undefined8 *)operator_new(0x30);
                  *(int *)(puVar10 + 1) = *param_1;
                  *(undefined4 *)((longlong)puVar10 + 0xc) = 4;
                  puVar10[2] = param_3;
                  puVar10[3] = _Dst;
                  puVar10[4] = psVar9;
                  puVar10[5] = 0;
                  *puVar10 = RegLib::Indirect::vftable;
                }
                else if (sVar1 == 0x696c) {
                  puVar10 = (undefined8 *)operator_new(0x30);
                  *(int *)(puVar10 + 1) = *param_1;
                  *(undefined4 *)((longlong)puVar10 + 0xc) = 4;
                  puVar10[2] = param_3;
                  puVar10[3] = _Dst;
                  puVar10[4] = psVar9;
                  puVar10[5] = 0;
                  *puVar10 = RegLib::IndxLeaf::vftable;
                }
                else if (sVar1 == 0x666c) {
                  puVar10 = (undefined8 *)operator_new(0x30);
                  *(int *)(puVar10 + 1) = *param_1;
                  *(undefined4 *)((longlong)puVar10 + 0xc) = 4;
                  puVar10[2] = param_3;
                  puVar10[3] = _Dst;
                  puVar10[4] = psVar9;
                  puVar10[5] = 0;
                  *puVar10 = RegLib::FastLeaf::vftable;
                }
                else if (sVar1 == 0x686c) {
                  puVar10 = (undefined8 *)operator_new(0x30);
                  *(int *)(puVar10 + 1) = *param_1;
                  *(undefined4 *)((longlong)puVar10 + 0xc) = 4;
                  puVar10[2] = param_3;
                  puVar10[3] = _Dst;
                  puVar10[4] = psVar9;
                  puVar10[5] = 0;
                  *puVar10 = RegLib::HashLeaf::vftable;
                }
              }
              else {
                puVar10 = (undefined8 *)operator_new(0x28);
                *(int *)(puVar10 + 1) = *param_1;
                *(undefined4 *)((longlong)puVar10 + 0xc) = 9;
                puVar10[2] = param_3;
                puVar10[3] = _Dst;
                *puVar10 = RegLib::Security::vftable;
                puVar10[4] = psVar9;
              }
            }
            else {
              puVar10 = (undefined8 *)operator_new(0x30);
              *(int *)(puVar10 + 1) = *param_1;
              *(undefined4 *)((longlong)puVar10 + 0xc) = 3;
              puVar10[2] = param_3;
              puVar10[3] = _Dst;
              *puVar10 = RegLib::Val::vftable;
              *(undefined4 *)(puVar10 + 4) = 0xffffffff;
              puVar10[5] = psVar9;
            }
          }
          else {
            puVar10 = (undefined8 *)operator_new(0x40);
            *(int *)(puVar10 + 1) = *param_1;
            *(undefined4 *)((longlong)puVar10 + 0xc) = 2;
            puVar10[2] = param_3;
            puVar10[3] = _Dst;
            *puVar10 = RegLib::Key::vftable;
            puVar10[4] = psVar9;
            *(undefined4 *)(puVar10 + 5) = 0xffffffff;
            puVar10[6] = 0;
            puVar10[7] = 0;
          }
        }
        else if (param_4 == 1) {
          puVar10 = (undefined8 *)operator_new(0x30);
          *(int *)(puVar10 + 1) = *param_1;
          *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
          puVar10[2] = param_3;
          puVar10[3] = _Dst;
          *puVar10 = RegLib::SubValList::vftable;
          puVar10[4] = psVar9;
          puVar10[5] = 0;
        }
        else if (param_4 == 2) {
          puVar10 = (undefined8 *)operator_new(0x28);
          *(int *)(puVar10 + 1) = *param_1;
          *(undefined4 *)((longlong)puVar10 + 0xc) = 7;
          puVar10[2] = param_3;
          puVar10[3] = _Dst;
          *puVar10 = RegLib::MidData::vftable;
          puVar10[4] = psVar9;
        }
        else if (param_4 == 3) {
          puVar10 = (undefined8 *)operator_new(0x28);
          *(int *)(puVar10 + 1) = *param_1;
          *(undefined4 *)((longlong)puVar10 + 0xc) = 8;
          puVar10[2] = param_3;
          puVar10[3] = _Dst;
          *puVar10 = RegLib::BigData::vftable;
          puVar10[4] = psVar9;
        }
        else if (param_4 == 4) {
          puVar10 = (undefined8 *)operator_new(0x28);
          *(int *)(puVar10 + 1) = *param_1;
          *(undefined4 *)((longlong)puVar10 + 0xc) = 6;
          puVar10[2] = param_3;
          puVar10[3] = _Dst;
          *puVar10 = RegLib::SubDatList::vftable;
          puVar10[4] = psVar9;
        }
      }
    }
  }
  return puVar10;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800064e0(uint *param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  ulonglong local_e0;
  undefined8 local_d4;
  undefined8 uStack_cc;
  uint local_a8;
  undefined8 local_a4;
  int local_9c;
  undefined8 *local_98;
  uint local_90;
  int local_8c;
  int local_88;
  undefined8 *local_80;
  uint local_78;
  undefined1 auStack_74 [4];
  int local_70;
  undefined8 *local_68;
  undefined4 local_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_180014008 ^ (ulonglong)auStack_108;
  uVar6 = 0;
  if (*(int *)(param_2 + 0x48) != 0) {
    do {
      local_60 = 0;
      uStack_5c = 0;
      iStack_58 = 0;
      iStack_54 = 0;
      local_50 = 0;
      local_48 = 0;
      if (uVar6 == 0xffffffff) break;
      local_e0 = (ulonglong)(uVar6 + 0x1000);
      puVar7 = (undefined8 *)(param_2 + 0x1028);
      cVar3 = (**(code **)(param_2 + 0x1030))(*puVar7,&local_e0,0);
      if (cVar3 == '\0') break;
      local_e8[0] = 1;
      cVar3 = (**(code **)(param_2 + 0x1038))(*puVar7,&local_60);
      if ((cVar3 == '\0') || (puVar7 == (undefined8 *)0x0)) break;
      if ((uStack_5c <= *param_1) && (*param_1 < uStack_5c + iStack_58)) {
        local_d4 = CONCAT44(uStack_5c,local_60);
        uStack_cc = CONCAT44(iStack_54,iStack_58);
        break;
      }
      uVar6 = uVar6 + iStack_58;
    } while (uVar6 < *(uint *)(param_2 + 0x48));
  }
  if (((*param_1 == 0xffffffff) || (*(longlong *)(param_1 + 4) == 0)) || ((int)param_1[1] < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  puVar9 = param_1 + 1;
  uVar6 = (uint)uStack_cc;
  iVar5 = local_d4._4_4_;
  uVar8 = -*puVar9;
  if (bVar2) {
    uVar8 = *puVar9;
  }
  uVar8 = uVar8 + *param_1;
  if (uVar8 - local_d4._4_4_ < (uint)uStack_cc) {
    FUN_180007700(param_2,&local_90,uVar8);
    if (((local_90 != 0xffffffff) && (local_80 != (undefined8 *)0x0)) && (-1 < local_8c)) {
      if ((*(int *)(param_2 + 0x38) == 1) && (uVar8 = local_8c + local_90, uVar8 < uVar6 + iVar5)) {
        uVar1 = *param_1;
        if (uVar8 - iVar5 < uVar6) {
          FUN_180007700(param_2,&local_78,uVar8);
          uVar6 = local_78;
        }
        else {
          uVar6 = 0xffffffff;
          _local_78 = CONCAT44(auStack_74,0xffffffff);
          local_68 = (undefined8 *)0x0;
        }
        puVar7 = local_68;
        local_e0 = (ulonglong)(uVar6 + 0x1000);
        local_70 = uVar1 - iVar5;
        cVar3 = (*(code *)local_68[1])(*local_68,&local_e0,0);
        if (cVar3 != '\0') {
          local_e8[0] = 1;
          (*(code *)puVar7[3])(*puVar7,auStack_74,0xc,local_e8);
        }
      }
      if (((*param_1 == 0xffffffff) || (*(longlong *)(param_1 + 4) == 0)) || ((int)param_1[1] < 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar6 = *puVar9;
      uVar8 = -uVar6;
      if (bVar2) {
        uVar8 = uVar6;
      }
      if (((local_90 == 0xffffffff) || (local_80 == (undefined8 *)0x0)) || (local_8c < 0)) {
        local_8c = -local_8c;
      }
      if (((*param_1 == 0xffffffff) || (*(longlong *)(param_1 + 4) == 0)) || ((int)uVar6 < 0)) {
        *puVar9 = -(uVar8 + local_8c);
      }
      else {
        param_1[1] = uVar8 + local_8c;
      }
    }
  }
  else {
    local_90 = 0xffffffff;
    local_80 = (undefined8 *)0x0;
  }
  if (*(int *)(param_2 + 0x38) == 1) {
    if (param_1[2] == 0xffffffff) goto LAB_18000680a;
    FUN_180007700(param_2,&local_a8,param_1[2] + iVar5);
LAB_180006875:
    puVar7 = local_80;
    if (((local_a8 != 0xffffffff) && (local_98 != (undefined8 *)0x0)) && (-1 < (int)local_a4)) {
      if (*(int *)(param_2 + 0x38) == 1) {
        if (((*param_1 == 0xffffffff) || (*(longlong *)(param_1 + 4) == 0)) || ((int)param_1[1] < 0)
           ) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        uVar6 = -*puVar9;
        if (bVar2) {
          uVar6 = *puVar9;
        }
        if (uVar6 + *param_1 < (uint)uStack_cc + iVar5) {
          local_88 = local_a8 - iVar5;
          local_e0 = (ulonglong)(local_90 + 0x1000);
          cVar3 = (*(code *)local_80[1])(*local_80,&local_e0,0);
          if (cVar3 != '\0') {
            local_e8[0] = 1;
            (*(code *)puVar7[3])(*puVar7,&local_8c,0xc,local_e8);
          }
        }
      }
      puVar7 = local_98;
      if (((local_a8 == 0xffffffff) || (local_98 == (undefined8 *)0x0)) ||
         (iVar5 = (int)local_a4, (int)local_a4 < 0)) {
        iVar5 = -(int)local_a4;
      }
      if (((*param_1 == 0xffffffff) || (*(longlong *)(param_1 + 4) == 0)) || ((int)param_1[1] < 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar6 = -*puVar9;
      if (bVar2) {
        uVar6 = *puVar9;
      }
      iVar5 = uVar6 + iVar5;
      if (((local_a8 == 0xffffffff) || (local_98 == (undefined8 *)0x0)) || ((int)local_a4 < 0)) {
        iVar5 = -iVar5;
      }
      local_a4 = CONCAT44(local_a4._4_4_,iVar5);
      local_e0 = (ulonglong)(local_a8 + 0x1000);
      cVar3 = (*(code *)local_98[1])(*local_98,&local_e0,0);
      if (cVar3 != '\0') {
        local_e8[0] = 1;
        (*(code *)puVar7[3])(*puVar7,&local_a4,0xc,local_e8);
      }
    }
  }
  else {
    uVar6 = iVar5 + 0x20;
    if (uVar6 < *param_1) {
      do {
        _local_78 = 0;
        local_70 = 0;
        if (((uVar6 - 0x20 < 0xffffffdf) && (uVar6 < *(uint *)(param_2 + 0x48))) &&
           ((uVar6 & 7) == 0)) {
          local_e0 = (ulonglong)(uVar6 + 0x1000);
          puVar7 = (undefined8 *)(param_2 + 0x1028);
          cVar3 = (**(code **)(param_2 + 0x1030))(*puVar7,&local_e0,0);
          if (cVar3 == '\0') goto LAB_1800067ee;
          local_e8[0] = 1;
          cVar3 = (**(code **)(param_2 + 0x1038))(*puVar7,&local_78);
          if (cVar3 == '\0') goto LAB_1800067ee;
          uStack_5c = (uint)_local_78;
          iStack_58 = (int)((ulonglong)_local_78 >> 0x20);
          iVar4 = local_70;
          if ((puVar7 == (undefined8 *)0x0) ||
             (uVar8 = uStack_5c, local_a8 = uVar6, (int)uStack_5c < 0)) goto LAB_1800067f8;
        }
        else {
LAB_1800067ee:
          uVar6 = 0xffffffff;
          puVar7 = (undefined8 *)0x0;
          iVar4 = iStack_54;
LAB_1800067f8:
          uVar8 = -uStack_5c;
          local_a8 = uVar6;
        }
        uVar6 = local_a8 + uVar8;
        if (uVar6 == *param_1) {
          local_a4 = CONCAT44(iStack_58,uStack_5c);
          local_9c = iVar4;
          local_98 = puVar7;
          goto LAB_180006875;
        }
      } while (uVar6 < *param_1);
    }
LAB_18000680a:
    local_a8 = 0xffffffff;
    local_98 = (undefined8 *)0x0;
  }
  puVar7 = *(undefined8 **)(param_1 + 4);
  if ((*param_1 == 0xffffffff) || (puVar7 == (undefined8 *)0x0)) {
    uVar6 = param_1[1];
  }
  else {
    uVar6 = param_1[1];
    if (-1 < (int)uVar6) goto LAB_1800069be;
  }
  param_1[1] = -uVar6;
LAB_1800069be:
  local_e0 = (ulonglong)(*param_1 + 0x1000);
  cVar3 = (*(code *)puVar7[1])(*puVar7,&local_e0,0);
  if (cVar3 != '\0') {
    local_e8[0] = 1;
    (*(code *)puVar7[3])(*puVar7,param_1 + 1,0xc,local_e8);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0xffffffff;
  __security_check_cookie(local_40 ^ (ulonglong)auStack_108);
  return;
}




undefined8 * FUN_180006a30(undefined8 *param_1,uint param_2)

{
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_180006a80(undefined8 param_1,longlong *param_2)

{
  param_2[3] = 7;
  param_2[2] = 0;
  *(undefined2 *)param_2 = 0;
  FUN_180007140(param_2,L"MidData",7);
  return param_2;
}




undefined8 FUN_180006ac0(longlong param_1,undefined8 param_2,void *param_3,uint param_4)

{
  void *pvVar1;
  
  pvVar1 = memcpy(param_3,*(void **)(param_1 + 0x20),(ulonglong)param_4);
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
}




undefined8 FUN_180006ae0(longlong param_1,undefined8 param_2,void *param_3,uint param_4)

{
  void *pvVar1;
  
  pvVar1 = memcpy(*(void **)(param_1 + 0x20),param_3,(ulonglong)param_4);
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
}




void FUN_180006b00(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180014008 ^ (ulonglong)auStack_48;
  FUN_180007700(param_2,&local_28,*(uint *)(param_1 + 8));
  if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
    FUN_1800064e0(&local_28,param_2);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}




longlong * FUN_180006b60(undefined8 param_1,longlong *param_2)

{
  param_2[3] = 7;
  param_2[2] = 0;
  *(undefined2 *)param_2 = 0;
  FUN_180007140(param_2,L"BigData",7);
  return param_2;
}




undefined8 FUN_180006ba0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  uVar6 = 0xfffffffffffffffe;
  plVar2 = (longlong *)FUN_180006ed0(param_1,param_2);
  if (plVar2 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    plVar7 = plVar2;
    if (*(short *)(*(longlong *)(param_1 + 0x20) + 2) != 0) {
      do {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x58))(plVar2,param_2,uVar4);
        if (plVar3 == (longlong *)0x0) {
LAB_180006ca1:
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x50))(plVar3,1);
          }
          uVar6 = 0;
          goto LAB_180006c69;
        }
        uVar5 = param_4;
        if (0x3fd8 < param_4) {
          uVar5 = 0x3fd8;
        }
        cVar1 = (**(code **)(*plVar3 + 0x58))
                          (plVar3,param_2,(ulonglong)(uVar4 * 0x3fd8) + param_3,uVar5,uVar6,plVar7,
                           plVar3);
        if (cVar1 == '\0') goto LAB_180006ca1;
        param_4 = param_4 - 0x3fd8;
        (**(code **)(*plVar3 + 0x50))(plVar3,1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(*(longlong *)(param_1 + 0x20) + 2));
    }
    uVar6 = 1;
  }
LAB_180006c69:
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x50))(plVar2,1);
  }
  return uVar6;
}




void FUN_180006cc0(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int local_64;
  longlong local_58;
  ulonglong local_50;
  
  local_78 = 0xfffffffffffffffe;
  local_50 = DAT_180014008 ^ (ulonglong)auStack_a8;
  local_88 = param_3;
  plVar3 = (longlong *)FUN_180006ed0((longlong)param_1,param_2);
  local_70 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    uVar8 = (param_4 + 0x3fd7) / 0x3fd8;
    uVar6 = uVar8 & 0xffff;
    uVar5 = uVar6;
    if (uVar6 < *(ushort *)(param_1[4] + 2)) {
      do {
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,param_2,uVar5);
        local_80 = plVar4;
        if (plVar4 == (longlong *)0x0) goto LAB_180006e71;
        (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
        (**(code **)(*plVar4 + 0x50))(plVar4,1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1[4] + 2));
    }
    sVar7 = (short)uVar8;
    if ((((sVar7 == 0) &&
         (FUN_180007700(param_2,&local_68,*(uint *)(plVar3 + 1)), local_68 != 0xffffffff)) &&
        (local_58 != 0)) && (local_64 < 0)) {
      FUN_1800064e0(&local_68,param_2);
    }
    lVar1 = local_88;
    *(short *)(param_1[4] + 2) = sVar7;
    if (*(short *)(param_1[4] + 2) == 0) {
      *(undefined4 *)(param_1[4] + 4) = 0xffffffff;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      do {
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,param_2,uVar5);
        local_80 = plVar4;
        if (plVar4 == (longlong *)0x0) {
LAB_180006eab:
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x50))(plVar4,1);
          }
          goto LAB_180006e71;
        }
        uVar8 = param_4;
        if (0x3fd8 < param_4) {
          uVar8 = 0x3fd8;
        }
        cVar2 = (**(code **)(*plVar4 + 0x60))
                          (plVar4,param_2,(ulonglong)(uVar5 * 0x3fd8) + lVar1,uVar8);
        if (cVar2 == '\0') goto LAB_180006eab;
        (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
        param_4 = param_4 - 0x3fd8;
        (**(code **)(*plVar4 + 0x50))(plVar4,1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
  }
LAB_180006e71:
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,1);
  }
  __security_check_cookie(local_50 ^ (ulonglong)auStack_a8);
  return;
}




undefined8 FUN_180006ed0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  FUN_180007700(param_2,&local_28,*(uint *)(*(longlong *)(param_1 + 0x20) + 4));
  if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
    puVar1 = FUN_180005ff0((int *)&local_28,param_2,param_1,4);
    uVar2 = __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::SubDatList::RTTI_Type_Descriptor,0);
    return uVar2;
  }
  return 0;
}




void FUN_180006f60(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  uint local_50;
  longlong local_4c;
  undefined4 local_44;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_78 = 0xfffffffffffffffe;
  local_38 = DAT_180014008 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)FUN_180006ed0(param_1,param_2);
  local_70 = plVar3;
  if (plVar3 == (longlong *)0x0) goto LAB_180007115;
  uVar5 = 0;
  if (*(short *)(*(longlong *)(param_1 + 0x20) + 2) != 0) {
    do {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,param_2,uVar5);
      local_80 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x50))(plVar3,1);
        goto LAB_180007115;
      }
      (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
      (**(code **)(*plVar4 + 0x50))(plVar4,1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(*(longlong *)(param_1 + 0x20) + 2));
  }
  FUN_180007700(param_2,(uint *)&local_68,*(uint *)(plVar3 + 1));
  if ((((uint)local_68 != 0xffffffff) && (local_58 != 0)) && (local_68 < 0)) {
    FUN_1800064e0((uint *)&local_68,param_2);
  }
  uVar5 = *(uint *)(param_1 + 8);
  local_68 = 0;
  local_60 = 0;
  if (((uVar5 - 0x20 < 0xffffffdf) && (uVar5 < *(uint *)(param_2 + 0x48))) && ((uVar5 & 7) == 0)) {
    local_80 = (longlong *)(ulonglong)(uVar5 + 0x1000);
    puVar1 = (undefined8 *)(param_2 + 0x1028);
    cVar2 = (**(code **)(param_2 + 0x1030))(*puVar1,&local_80,0);
    if (cVar2 == '\0') goto LAB_1800070fb;
    local_88[0] = 1;
    cVar2 = (**(code **)(param_2 + 0x1038))(*puVar1,&local_68,0xc,local_88);
    if (cVar2 == '\0') goto LAB_1800070fb;
    local_4c = local_68;
    local_44 = local_60;
    local_50 = uVar5;
    local_40 = puVar1;
    if ((puVar1 != (undefined8 *)0x0) && ((int)(uint)local_68 < 0)) {
      FUN_1800064e0(&local_50,param_2);
      (**(code **)(*plVar3 + 0x50))(plVar3,1);
      goto LAB_180007115;
    }
  }
  else {
LAB_1800070fb:
    local_50 = 0xffffffff;
    local_40 = (undefined8 *)0x0;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,1);
LAB_180007115:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_a8);
  return;
}




longlong * FUN_180007140(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  void *_Memory;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  
  uVar1 = param_1[3];
  if (uVar1 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
      FUN_180005fd0();
      pcVar2 = (code *)swi(3);
      plVar4 = (longlong *)(*pcVar2)();
      return plVar4;
    }
    uVar5 = param_3 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar5 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
       (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
      uVar7 = uVar6;
    }
    _Dst = (void *)0x0;
    uVar5 = (uVar7 + 1) * 2;
    uVar6 = 0xffffffffffffffff;
    if ((uVar7 + 1 < 0x8000000000000000) && (uVar6 = uVar5, uVar5 < 0x1000)) {
      if (uVar5 != 0) {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar5 = uVar6 + 0x27;
      if (uVar6 + 0x27 <= uVar6) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar5);
      if (pvVar3 == (void *)0x0) goto LAB_1800072bd;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[3] = uVar7;
    param_1[2] = param_3;
    memcpy(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 * 2 + 2) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_1800072bd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    plVar4 = param_1;
    if (7 < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar4,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar4) = 0;
  }
  return param_1;
}




void FUN_1800072d0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




undefined8 *
FUN_180007300(undefined8 *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *_Dst;
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = RegLib::Hive::vftable;
  param_1[0x204] = param_3;
  param_1[0x205] = param_3;
  param_1[0x206] = param_4;
  param_1[0x207] = param_5;
  param_1[0x208] = param_6;
  param_1[0x20b] = 0;
  param_1[0x20c] = 7;
  *(undefined2 *)(param_1 + 0x209) = 0;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(short *)((longlong)param_2 + uVar2 * 2) != 0);
  FUN_180007140(param_1 + 0x209,param_2,uVar2);
  param_1[0x20d] = 0;
  param_6 = 0;
  _Dst = param_1 + 4;
  memset(_Dst,0,0x1000);
  if (_Dst != (undefined8 *)0x0) {
    cVar1 = (*(code *)param_1[0x206])(param_1[0x205],&param_6,0);
    if (cVar1 != '\0') {
      param_5._0_4_ = 1;
      (*(code *)param_1[0x207])(param_1[0x205],_Dst,0x1000,&param_5,uVar3);
    }
  }
  return param_1;
}




undefined8 * FUN_180007420(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  
  *param_1 = RegLib::Hive::vftable;
  plVar1 = (longlong *)param_1[0x20d];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[0x20d] = 0;
  }
  if (7 < (ulonglong)param_1[0x20c]) {
    pvVar2 = (void *)param_1[0x209];
    _Memory = pvVar2;
    if ((0xfff < param_1[0x20c] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[0x20b] = 0;
  param_1[0x20c] = 7;
  *(undefined2 *)(param_1 + 0x209) = 0;
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined8 * FUN_180007510(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *_Src;
  void *_Dst;
  
  _Dst = (void *)0x0;
  _Src = (undefined8 *)(param_1 + 0x1048);
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x1058);
  if (7 < *(ulonglong *)(param_1 + 0x1060)) {
    _Src = (undefined8 *)*_Src;
  }
  if (uVar1 < 8) {
    uVar2 = _Src[1];
    uVar6 = 7;
    *param_2 = *_Src;
    param_2[1] = uVar2;
    goto LAB_1800075f1;
  }
  uVar6 = uVar1 | 7;
  if (0x7ffffffffffffffe < uVar6) {
    uVar6 = 0x7ffffffffffffffe;
  }
  uVar5 = (uVar6 + 1) * 2;
  if (uVar6 + 1 < 0x8000000000000000) {
    if (0xfff < uVar5) goto LAB_1800075a1;
    if (uVar5 != 0) {
      _Dst = operator_new(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
LAB_1800075a1:
    uVar4 = uVar5 + 0x27;
    if (uVar4 <= uVar5) {
      uVar4 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar4);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  *param_2 = _Dst;
  memcpy(_Dst,_Src,uVar1 * 2 + 2);
LAB_1800075f1:
  param_2[2] = uVar1;
  param_2[3] = uVar6;
  return param_2;
}




void FUN_180007620(longlong param_1)

{
  undefined8 *puVar1;
  uint local_28 [8];
  
  if (*(longlong *)(param_1 + 0x1068) == 0) {
    FUN_180007700(param_1,local_28,*(uint *)(param_1 + 0x44));
    puVar1 = FUN_180005ff0((int *)local_28,param_1,param_1,0);
    *(undefined8 **)(param_1 + 0x1068) = puVar1;
  }
  return;
}




uint FUN_180007670(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar1 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  lVar3 = 0xf;
  puVar2 = param_1;
  do {
    uVar7 = uVar7 ^ *puVar2;
    uVar8 = uVar8 ^ puVar2[1];
    uVar9 = uVar9 ^ puVar2[2];
    uVar10 = uVar10 ^ puVar2[3];
    uVar1 = puVar2[4] ^ uVar1;
    uVar4 = puVar2[5] ^ uVar4;
    uVar5 = puVar2[6] ^ uVar5;
    uVar6 = puVar2[7] ^ uVar6;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 8;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x78;
  lVar3 = 7;
  uVar1 = uVar1 ^ uVar7 ^ uVar5 ^ uVar9 ^ uVar4 ^ uVar8 ^ uVar6 ^ uVar10;
  do {
    uVar1 = uVar1 ^ *puVar2;
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (uVar1 == 0xffffffff) {
    return 0xfffffffe;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_180007700(longlong param_1,uint *param_2,uint param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  ulonglong local_40;
  undefined8 local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_180014008 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  if (((param_3 - 0x20 < 0xffffffdf) && (param_3 < *(uint *)(param_1 + 0x48))) &&
     ((param_3 & 7) == 0)) {
    local_40 = (ulonglong)(param_3 + 0x1000);
    puVar2 = (undefined8 *)(param_1 + 0x1028);
    cVar1 = (**(code **)(param_1 + 0x1030))(*puVar2,&local_40,0);
    if (cVar1 != '\0') {
      local_48[0] = 1;
      cVar1 = (**(code **)(param_1 + 0x1038))(*puVar2,&local_38,0xc,local_48);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_2 + 1) = local_38;
        param_2[3] = local_30;
        *param_2 = param_3;
        *(undefined8 **)(param_2 + 4) = puVar2;
        goto LAB_1800077af;
      }
    }
  }
  *param_2 = 0xffffffff;
  param_2[4] = 0;
  param_2[5] = 0;
LAB_1800077af:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_68);
  return;
}




void FUN_1800077d0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  ulonglong local_28 [2];
  
  local_res8 = 0;
  uVar2 = FUN_180007670((uint *)(param_1 + 0x20));
  *(uint *)(param_1 + 0x21c) = uVar2;
  cVar1 = (**(code **)(param_1 + 0x1030))(*(undefined8 *)(param_1 + 0x1028),&local_res8,0);
  if (cVar1 != '\0') {
    local_res10[0] = 1;
    (**(code **)(param_1 + 0x1040))
              (*(undefined8 *)(param_1 + 0x1028),param_1 + 0x20,0x1000,local_res10);
  }
  local_28[0] = (ulonglong)(param_2 + 0x1000);
  cVar1 = (**(code **)(param_1 + 0x1030))(*(undefined8 *)(param_1 + 0x1028),local_28,0);
  if (cVar1 != '\0') {
    local_res10[0] = 1;
    (**(code **)(param_1 + 0x1040))(*(undefined8 *)(param_1 + 0x1028),param_3,param_4,local_res10);
  }
  return;
}




void FUN_1800078a0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  uVar2 = FUN_180007670((uint *)(param_1 + 0x20));
  *(uint *)(param_1 + 0x21c) = uVar2;
  cVar1 = (**(code **)(param_1 + 0x1030))(*(undefined8 *)(param_1 + 0x1028),&local_res10,0);
  if (cVar1 != '\0') {
    local_res8[0] = 1;
    (**(code **)(param_1 + 0x1040))
              (*(undefined8 *)(param_1 + 0x1028),param_1 + 0x20,0x1000,local_res8);
  }
  return;
}




undefined8 * FUN_180007910(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = RegLib::Key::vftable;
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[6] = 0;
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    param_1[7] = 0;
  }
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_1800079b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar5;
  ulonglong uVar4;
  
  uVar4 = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 0x48);
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 2) & 0x20) == 0) {
    uVar3 = uVar3 >> 1;
  }
  uVar5 = (uint)uVar3;
  FUN_180009a00(param_2,(ulonglong)uVar5);
  if (uVar5 != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if ((*(byte *)(lVar1 + 2) & 0x20) == 0) {
        uVar3 = *(ushort *)(lVar1 + 0x4c + uVar4 * 2);
      }
      else {
        uVar3 = (ushort)*(byte *)(uVar4 + 0x4c + lVar1);
      }
      plVar2 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar2 = (longlong *)*param_2;
      }
      *(ushort *)((longlong)plVar2 + uVar4 * 2) = uVar3;
      uVar3 = (short)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar5);
  }
  return param_2;
}




undefined8 FUN_180007a60(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  FUN_180007700(param_2,&local_28,*(uint *)(*(longlong *)(param_1 + 0x20) + 0x1c));
  if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
    puVar1 = FUN_180005ff0((int *)&local_28,param_2,param_1,0);
    uVar2 = __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::SubKeyList::RTTI_Type_Descriptor,0);
    return uVar2;
  }
  return 0;
}




undefined8 FUN_180007af0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  FUN_180007700(param_2,&local_28,*(uint *)(*(longlong *)(param_1 + 0x20) + 0x28));
  if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
    puVar1 = FUN_180005ff0((int *)&local_28,param_2,param_1,1);
    uVar2 = __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::SubValList::RTTI_Type_Descriptor,0);
    return uVar2;
  }
  return 0;
}




void FUN_180007b80(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x14) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_180007a60(param_1,param_2);
      *(longlong **)(param_1 + 0x30) = plVar1;
      if (plVar1 == (longlong *)0x0) goto LAB_180007bd4;
    }
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
  }
LAB_180007bd4:
  __RTDynamicCast(uVar2,0,&RegLib::Node::RTTI_Type_Descriptor,&RegLib::Key::RTTI_Type_Descriptor,0);
  return;
}




void FUN_180007c10(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x24) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)FUN_180007af0(param_1,param_2);
      *(longlong **)(param_1 + 0x38) = plVar1;
      if (plVar1 == (longlong *)0x0) goto LAB_180007c64;
    }
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
  }
LAB_180007c64:
  __RTDynamicCast(uVar2,0,&RegLib::Node::RTTI_Type_Descriptor,&RegLib::Val::RTTI_Type_Descriptor,0);
  return;
}




void FUN_180007ca0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [4];
  undefined4 local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  uint local_48;
  longlong local_44;
  undefined4 local_3c;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_68 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStack_a8;
  lVar6 = param_1[4];
  if (*(int *)(lVar6 + 0x14) != 0) goto LAB_18000800d;
  if (*(int *)(lVar6 + 0x24) != 0) {
    if (param_1[7] == 0) {
      lVar3 = FUN_180007af0((longlong)param_1,param_2);
      param_1[7] = lVar3;
      lVar6 = param_1[4];
      if (lVar3 == 0) goto LAB_180007d62;
    }
    iVar7 = *(int *)(lVar6 + 0x24);
    if (iVar7 != 0) {
      do {
        iVar7 = iVar7 + -1;
        plVar4 = (longlong *)
                 (**(code **)(*(longlong *)param_1[7] + 0x58))((longlong *)param_1[7],param_2,iVar7)
        ;
        if (plVar4 != (longlong *)0x0) {
          local_70 = plVar4;
          FUN_18000c5e0(plVar4,param_2);
          (**(code **)(*plVar4 + 0x50))(plVar4,1);
        }
      } while (iVar7 != 0);
      lVar6 = param_1[4];
    }
  }
LAB_180007d62:
  FUN_180007700(param_2,(uint *)&local_60,*(uint *)(lVar6 + 0x2c));
  if ((((uint)local_60 != 0xffffffff) && (local_50 != 0)) && (local_60 < 0)) {
    puVar5 = FUN_180005ff0((int *)&local_60,param_2,0,0);
    local_88 = 0;
    plVar4 = (longlong *)
             __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::Security::RTTI_Type_Descriptor);
    local_70 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      iVar7 = *(int *)(plVar4[4] + 0xc);
      if (iVar7 == 1) {
        FUN_18000acc0((longlong)plVar4,param_2);
        FUN_180007700(param_2,(uint *)&local_60,*(uint *)(plVar4 + 1));
        if ((((uint)local_60 != 0xffffffff) && (local_50 != 0)) && (local_60 < 0)) {
          FUN_1800064e0((uint *)&local_60,param_2);
        }
      }
      else {
        *(int *)(plVar4[4] + 0xc) = iVar7 + -1;
        (**(code **)(*plVar4 + 0x40))(plVar4);
      }
      *(undefined4 *)(param_1[4] + 0x2c) = 0xffffffff;
      (**(code **)(*plVar4 + 0x50))(plVar4,1);
    }
  }
  if (*(short *)(param_1[4] + 0x4a) != 0) {
    FUN_180007700(param_2,(uint *)&local_60,*(uint *)(param_1[4] + 0x30));
    if ((((uint)local_60 != 0xffffffff) && (local_50 != 0)) && (local_60 < 0)) {
      FUN_1800064e0((uint *)&local_60,param_2);
      *(undefined4 *)(param_1[4] + 0x30) = 0xffffffff;
    }
  }
  uVar1 = *(uint *)(param_1 + 1);
  local_60 = 0;
  local_58 = 0;
  if (((uVar1 - 0x20 < 0xffffffdf) && (uVar1 < *(uint *)(param_2 + 0x48))) && ((uVar1 & 7) == 0)) {
    local_70 = (longlong *)(ulonglong)(uVar1 + 0x1000);
    puVar5 = (undefined8 *)(param_2 + 0x1028);
    cVar2 = (**(code **)(param_2 + 0x1030))(*puVar5,&local_70,0);
    if (cVar2 != '\0') {
      local_74 = 1;
      cVar2 = (**(code **)(param_2 + 0x1038))(*puVar5,&local_60,0xc,&local_74);
      if (cVar2 != '\0') {
        local_44 = local_60;
        local_3c = local_58;
        local_48 = uVar1;
        local_38 = puVar5;
        if ((puVar5 != (undefined8 *)0x0) && ((int)(uint)local_60 < 0)) {
          FUN_1800064e0(&local_48,param_2);
          plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
          local_88 = 0;
          lVar6 = __RTDynamicCast(plVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                                  &RegLib::Key::RTTI_Type_Descriptor);
          while (lVar6 == 0) {
            plVar4 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4);
            local_88 = 0;
            lVar6 = __RTDynamicCast(plVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                                    &RegLib::Key::RTTI_Type_Descriptor);
          }
          local_88 = 0;
          plVar4 = (longlong *)
                   __RTDynamicCast(plVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                                   &RegLib::Key::RTTI_Type_Descriptor);
          iVar7 = *(int *)(plVar4[4] + 0x14);
          local_78[0] = 0;
          (**(code **)(*(longlong *)plVar4[6] + 0x60))
                    ((longlong *)plVar4[6],param_2,(int)param_1[5],local_78);
          iVar7 = iVar7 + -1;
          *(int *)(plVar4[4] + 0x14) = iVar7;
          if (iVar7 == 0) {
            *(undefined4 *)(plVar4[4] + 0x1c) = 0xffffffff;
            *(undefined4 *)(plVar4[4] + 0x34) = 0;
            *(undefined4 *)(plVar4[4] + 0x38) = 0;
          }
          (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
        }
      }
    }
  }
LAB_18000800d:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_180008030(longlong *param_1,longlong param_2,uint *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  longlong *local_70;
  uint local_68;
  longlong local_64;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_50 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStack_a8;
  uVar3 = FUN_180008c10((longlong)param_1,param_2,param_3);
  if (uVar3 != 0) {
    iVar4 = FUN_180008280((ulonglong)param_1,param_2,param_3,uVar3);
    if (iVar4 == 0) {
      FUN_180007700(param_2,(uint *)&local_48,uVar3);
      if ((((uint)local_48 != 0xffffffff) && (local_38 != 0)) && (local_48 < 0)) {
        FUN_1800064e0((uint *)&local_48,param_2);
      }
    }
    else {
      piVar1 = (int *)(param_1[4] + 0x14);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1[4] + 0x1c) = 0xffffffff;
        *(undefined4 *)(param_1[4] + 0x34) = 0;
        *(undefined4 *)(param_1[4] + 0x38) = 0;
      }
      *(int *)(param_1[4] + 0x1c) = iVar4;
      lVar7 = -1;
      uVar8 = 0xffffffffffffffff;
      do {
        uVar8 = uVar8 + 1;
      } while (*(char *)((longlong)param_3 + uVar8) != '\0');
      if (*(ushort *)(param_1[4] + 0x34) >> 1 < uVar8) {
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)((longlong)param_3 + lVar7) != '\0');
        *(int *)(param_1[4] + 0x34) = (int)lVar7 * 2;
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_2);
      FUN_180007700(param_2,(uint *)&local_48,*(uint *)(param_1[4] + 0x2c));
      if ((((uint)local_48 != 0xffffffff) && (local_38 != 0)) && (local_48 < 0)) {
        puVar5 = FUN_180005ff0((int *)&local_48,param_2,0,0);
        local_88 = 0;
        plVar6 = (longlong *)
                 __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                                 &RegLib::Security::RTTI_Type_Descriptor);
        local_70 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          *(int *)(plVar6[4] + 0xc) = *(int *)(plVar6[4] + 0xc) + 1;
          (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
          (**(code **)(*plVar6 + 0x50))(plVar6,1);
        }
      }
      local_48 = 0;
      local_40 = 0;
      if (((uVar3 - 0x20 < 0xffffffdf) && (uVar3 < *(uint *)(param_2 + 0x48))) && ((uVar3 & 7) == 0)
         ) {
        local_70 = (longlong *)(ulonglong)(uVar3 + 0x1000);
        puVar5 = (undefined8 *)(param_2 + 0x1028);
        cVar2 = (**(code **)(param_2 + 0x1030))(*puVar5,&local_70,0);
        if (cVar2 != '\0') {
          local_78 = 1;
          cVar2 = (**(code **)(param_2 + 0x1038))(*puVar5,&local_48,0xc);
          if (cVar2 != '\0') {
            local_64 = local_48;
            local_5c = local_40;
            local_68 = uVar3;
            local_58 = puVar5;
            if ((puVar5 != (undefined8 *)0x0) && ((int)(uint)local_48 < 0)) {
              FUN_180005ff0((int *)&local_68,param_2,param_1,0);
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_180008280(ulonglong param_1,longlong param_2,uint *param_3,uint param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  __time64_t _Var7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackY_d8 [32];
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_98;
  ulonglong local_90;
  uint *local_88;
  uint *local_80;
  ulonglong local_78;
  short *local_70;
  undefined8 local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_180014008 ^ (ulonglong)auStackY_d8;
  local_a4 = 0;
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14);
  iVar4 = iVar11 * 8;
  local_a8 = iVar4 + 0x10;
  local_98 = param_4;
  local_90 = param_1;
  local_88 = param_3;
  if (iVar11 == 0) {
    iVar4 = FUN_18000a390(param_1,param_2,&local_a8,(int *)&local_a4);
    uVar12 = local_a8;
    local_a0 = (uint *)CONCAT44(local_a0._4_4_,iVar4);
    uVar10 = local_a4;
    if (iVar4 == 0) {
      _Var7 = _time64((__time64_t *)0x0);
      local_60 = 0x6e696268;
      local_a8 = *(uint *)(param_2 + 0x48);
      uStack_4c = (uint)_Var7;
      uStack_48 = (uint)((ulonglong)_Var7 >> 0x20);
      iVar4 = uVar12 - 0xfe0;
      if (iVar4 < 1) {
        uVar10 = 0x1000;
      }
      else {
        uVar9 = iVar4 >> 0x1f & 0xfff;
        uVar10 = iVar4 + uVar9;
        if ((uVar10 & 0xfff) == uVar9) {
          uVar10 = uVar12 + 0x20;
        }
        else {
          uVar10 = (((int)uVar10 >> 0xc) + 2) * 0x1000;
        }
      }
      uStack_5c = local_a8;
      uStack_58 = uVar10;
      puVar8 = (uint *)operator_new((ulonglong)uVar10);
      memset(puVar8,0,(ulonglong)uVar10);
      *puVar8 = local_60;
      puVar8[1] = uStack_5c;
      puVar8[2] = uStack_58;
      puVar8[3] = uStack_54;
      puVar8[4] = local_50;
      puVar8[5] = uStack_4c;
      puVar8[6] = uStack_48;
      puVar8[7] = uStack_44;
      puVar8[8] = uVar10 - 0x20;
      local_90 = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
      local_80 = puVar8;
      cVar3 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_90,0);
      if (cVar3 == '\0') {
LAB_1800086eb:
        free(puVar8);
        iVar4 = 0;
        local_a0 = (uint *)((ulonglong)local_a0 & 0xffffffff00000000);
      }
      else {
        local_a4 = 1;
        cVar3 = (**(code **)(param_2 + 0x1040))
                          (*(undefined8 *)(param_2 + 0x1028),puVar8,uVar10,&local_a4);
        if (cVar3 == '\0') goto LAB_1800086eb;
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar10;
        FUN_1800078a0(param_2);
        iVar4 = local_a8 + 0x20;
        local_a0 = (uint *)CONCAT44(local_a0._4_4_,iVar4);
        free(puVar8);
      }
      uVar10 = uVar10 - 0x20;
      if (iVar4 == 0) goto LAB_1800087ac;
    }
    uVar10 = uVar10 - uVar12;
    if (uVar10 == 4) {
      uVar10 = 0;
      uVar12 = uVar12 + 4;
    }
    if ((uVar10 & 7) != 0) {
      uVar10 = uVar10 + ((uVar10 & 7) - 8);
      uVar12 = uVar12 + (8 - (uVar10 & 7));
    }
    if (uVar10 == 4) {
      uVar10 = 0;
      uVar12 = uVar12 + 4;
    }
    uVar9 = uVar12 + 4;
    if (uVar10 == 0) {
      uVar9 = uVar12;
    }
    puVar8 = (uint *)operator_new((longlong)(int)uVar9);
    memset(puVar8,0,(longlong)(int)uVar9);
    puVar8[1] = 0x1666c;
    puVar8[2] = local_98;
    puVar8[3] = *local_88;
  }
  else {
    puVar5 = (uint *)FUN_180007a60(param_1,param_2);
    local_80 = puVar5;
    if (puVar5 == (uint *)0x0) goto LAB_1800087ac;
    local_70 = *(short **)(puVar5 + 8);
    pbVar6 = (byte *)(**(code **)(*(longlong *)puVar5 + 0x10))(puVar5);
    if (pbVar6 == (byte *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int3 *)(pbVar6 + 1) * 0x100 + (uint)*pbVar6;
    }
    uVar12 = -iVar11;
    if ((int)uVar12 < iVar4 + 0x18) {
      uVar12 = (**(code **)(*(longlong *)puVar5 + 0x18))(puVar5);
      FUN_180007700(param_2,&local_60,uVar12);
      if (((local_60 == 0xffffffff) || (CONCAT44(uStack_4c,local_50) == 0)) || (-1 < (int)uStack_5c)
         ) {
        (**(code **)(*(longlong *)puVar5 + 0x50))(puVar5,1);
        goto LAB_1800087ac;
      }
      puVar8 = &local_60;
      FUN_1800064e0(puVar8,param_2);
      iVar4 = FUN_18000a390(puVar8,param_2,&local_a8,(int *)&local_a4);
      uVar12 = local_a8;
      local_a0 = (uint *)CONCAT44(local_a0._4_4_,iVar4);
      uVar10 = local_a4;
      if (iVar4 == 0) {
        _Var7 = _time64((__time64_t *)0x0);
        local_60 = 0x6e696268;
        local_a8 = *(uint *)(param_2 + 0x48);
        uStack_4c = (uint)_Var7;
        uStack_48 = (uint)((ulonglong)_Var7 >> 0x20);
        iVar4 = uVar12 - 0xfe0;
        if (iVar4 < 1) {
          uVar10 = 0x1000;
        }
        else {
          uVar9 = iVar4 >> 0x1f & 0xfff;
          uVar10 = iVar4 + uVar9;
          if ((uVar10 & 0xfff) == uVar9) {
            uVar10 = uVar12 + 0x20;
          }
          else {
            uVar10 = (((int)uVar10 >> 0xc) + 2) * 0x1000;
          }
        }
        uStack_5c = local_a8;
        uStack_58 = uVar10;
        puVar8 = (uint *)operator_new((ulonglong)uVar10);
        memset(puVar8,0,(ulonglong)uVar10);
        *puVar8 = local_60;
        puVar8[1] = uStack_5c;
        puVar8[2] = uStack_58;
        puVar8[3] = uStack_54;
        puVar8[4] = local_50;
        puVar8[5] = uStack_4c;
        puVar8[6] = uStack_48;
        puVar8[7] = uStack_44;
        puVar8[8] = uVar10 - 0x20;
        local_78 = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
        local_a0 = puVar8;
        cVar3 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_78,0);
        if (cVar3 == '\0') {
LAB_1800084c7:
          free(puVar8);
          iVar4 = 0;
          local_a0 = (uint *)((ulonglong)local_a0 & 0xffffffff00000000);
        }
        else {
          local_a4 = 1;
          cVar3 = (**(code **)(param_2 + 0x1040))
                            (*(undefined8 *)(param_2 + 0x1028),puVar8,uVar10,&local_a4);
          if (cVar3 == '\0') goto LAB_1800084c7;
          *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar10;
          FUN_1800078a0(param_2);
          iVar4 = local_a8 + 0x20;
          local_a0 = (uint *)CONCAT44(local_a0._4_4_,iVar4);
          free(puVar8);
        }
        uVar10 = uVar10 - 0x20;
        if (iVar4 == 0) {
          (**(code **)(*(longlong *)puVar5 + 0x50))(puVar5,1);
          goto LAB_1800087ac;
        }
      }
      uVar10 = uVar10 - uVar12;
      if (uVar10 == 4) {
        uVar10 = 0;
        uVar12 = uVar12 + 4;
      }
      if ((uVar10 & 7) != 0) {
        uVar10 = uVar10 + ((uVar10 & 7) - 8);
        uVar12 = uVar12 + (8 - (uVar10 & 7));
      }
      if (uVar10 == 4) {
        uVar10 = 0;
        uVar12 = uVar12 + 4;
      }
      uVar9 = uVar12 + 4;
      if (uVar10 == 0) {
        uVar9 = uVar12;
      }
    }
    else {
      local_a0 = (uint *)CONCAT44(local_a0._4_4_,
                                  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c));
      uVar10 = 0;
      uVar9 = uVar12;
    }
    puVar8 = (uint *)operator_new((longlong)(int)uVar9);
    memset(puVar8,0,(longlong)(int)uVar9);
    uVar2 = local_90;
    cVar3 = FUN_1800087e0(local_90,param_2,local_70,(short *)(puVar8 + 1),(char *)local_88,local_98)
    ;
    if (cVar3 == '\0') {
      (**(code **)(*(longlong *)puVar5 + 0x50))(puVar5,1);
      goto LAB_1800087ac;
    }
    plVar1 = *(longlong **)(uVar2 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,1);
      *(undefined8 *)(uVar2 + 0x30) = 0;
    }
    (**(code **)(*(longlong *)puVar5 + 0x50))(puVar5,1);
  }
  *puVar8 = -uVar12;
  if (uVar10 != 0) {
    *(uint *)((longlong)(int)uVar12 + (longlong)puVar8) = uVar10;
  }
  local_80 = puVar8;
  FUN_1800077d0(param_2,(int)local_a0,puVar8,uVar9);
  free(puVar8);
LAB_1800087ac:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_d8);
  return;
}




void FUN_1800087e0(undefined8 param_1,longlong param_2,short *param_3,short *param_4,char *param_5,
                  undefined4 param_6)

{
  void *pvVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  size_t sVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  uint uVar12;
  wchar_t *pwVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  uint local_108;
  undefined4 local_104;
  short *local_100;
  longlong *local_f8;
  short *local_f0;
  uint *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  short *local_d0;
  uint local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  wchar_t local_78;
  undefined6 uStack_76;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_b0 = 0xfffffffffffffffe;
  local_58 = DAT_180014008 ^ (ulonglong)auStack_138;
  local_f0 = param_3;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_4;
  if ((*param_3 + 0x9994U & 0xfdff) == 0) {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    uVar15 = 0xffffffff;
    iVar16 = 0;
    iVar5 = 0;
    local_108 = 0;
    if (param_3[1] != 0) {
      psVar14 = param_4 + 2;
      local_e8 = (uint *)(param_3 + 2);
      do {
        uVar12 = local_108;
        if (uVar15 == 0xffffffff) {
          uVar12 = *local_e8;
          local_a8 = 0;
          local_a0 = 0;
          local_100 = psVar14;
          if (((0xffffffde < uVar12 - 0x20) || (*(uint *)(param_2 + 0x48) <= uVar12)) ||
             ((uVar12 & 7) != 0)) goto LAB_180008b94;
          local_f8 = (longlong *)(ulonglong)(uVar12 + 0x1000);
          puVar6 = (undefined8 *)(param_2 + 0x1028);
          cVar3 = (**(code **)(param_2 + 0x1030))(*puVar6,&local_f8,0);
          if (cVar3 == '\0') goto LAB_180008b94;
          local_104 = 1;
          cVar3 = (**(code **)(param_2 + 0x1038))(*puVar6,&local_a8,0xc);
          if (cVar3 == '\0') goto LAB_180008b94;
          local_c4 = local_a8;
          local_bc = local_a0;
          local_c8 = uVar12;
          local_b8 = puVar6;
          if ((puVar6 == (undefined8 *)0x0) || (-1 < (int)local_a8)) goto LAB_180008b94;
          puVar6 = FUN_180005ff0((int *)&local_c8,param_2,param_1,0);
          local_118 = 0;
          local_f8 = (longlong *)
                     __RTDynamicCast(puVar6,0,&RegLib::Node::RTTI_Type_Descriptor,
                                     &RegLib::Key::RTTI_Type_Descriptor);
          if (local_f8 == (longlong *)0x0) goto LAB_180008b94;
          (**(code **)(*local_f8 + 0x20))(local_f8,&local_78);
          pwVar13 = &local_78;
          if (7 < local_60) {
            pwVar13 = (wchar_t *)CONCAT62(uStack_76,local_78);
          }
          pcVar7 = setlocale(0,"chs");
          sVar8 = wcstombs((char *)0x0,pwVar13,0);
          if (pcVar7 != (char *)0x0) {
            setlocale(0,pcVar7);
          }
          FUN_180005a10(local_98,sVar8);
          pwVar13 = &local_78;
          if (7 < local_60) {
            pwVar13 = (wchar_t *)CONCAT62(uStack_76,local_78);
          }
          plVar10 = local_98;
          if (0xf < local_80) {
            plVar10 = (longlong *)CONCAT71(local_98[0]._1_7_,(undefined1)local_98[0]);
          }
          pcVar7 = setlocale(0,"chs");
          if (plVar10 == (longlong *)0x0) {
            sVar8 = 0;
            plVar10 = (longlong *)0x0;
          }
          else {
            sVar8 = sVar8 + 1;
          }
          wcstombs((char *)plVar10,pwVar13,sVar8);
          if (pcVar7 != (char *)0x0) {
            setlocale(0,pcVar7);
          }
          plVar10 = local_98;
          if (0xf < local_80) {
            plVar10 = (longlong *)CONCAT71(local_98[0]._1_7_,(undefined1)local_98[0]);
          }
          iVar4 = _stricmp(param_5,(char *)plVar10);
          uVar12 = local_108;
          psVar14 = local_100;
          if (iVar4 < 0) {
            psVar14 = local_100 + 4;
            uVar15 = local_108;
          }
          if ((0 < iVar4) && (local_108 + 1 == (uint)(ushort)local_f0[1])) {
            uVar15 = local_108 + 1;
          }
          if (0xf < local_80) {
            pvVar1 = (void *)CONCAT71(local_98[0]._1_7_,(undefined1)local_98[0]);
            pvVar11 = pvVar1;
            if ((0xfff < local_80 + 1) &&
               (pvVar11 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar11);
          }
          local_88 = 0;
          local_80 = 0xf;
          local_98[0]._0_1_ = 0;
          if (7 < local_60) {
            pvVar1 = (void *)CONCAT62(uStack_76,local_78);
            pvVar11 = pvVar1;
            if ((0xfff < local_60 * 2 + 2) &&
               (pvVar11 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar11);
          }
          local_68 = 0;
          local_60 = 7;
          local_78 = L'\0';
          (**(code **)(*local_f8 + 0x50))(local_f8,1);
          param_3 = local_f0;
          param_1 = local_d8;
          param_2 = local_e0;
        }
        psVar2 = local_d0;
        *(undefined8 *)psVar14 = *(undefined8 *)local_e8;
        local_108 = uVar12 + 1;
        local_e8 = local_e8 + 2;
        psVar14 = psVar14 + 4;
      } while ((int)local_108 < (int)(uint)(ushort)param_3[1]);
      local_100 = psVar14;
      if (uVar15 != 0xffffffff) {
        local_d0[1] = local_d0[1] + 1;
        *(undefined4 *)(local_d0 + (longlong)(int)uVar15 * 4 + 2) = param_6;
        if (*local_d0 == 0x666c) {
          *(undefined4 *)(local_d0 + (longlong)(int)uVar15 * 4 + 4) = *(undefined4 *)param_5;
        }
        else if (*local_d0 == 0x686c) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (param_5[lVar9] != '\0');
          pcVar7 = param_5;
          iVar4 = iVar16;
          if (0 < (int)lVar9) {
            do {
              iVar5 = toupper((int)*pcVar7);
              iVar5 = iVar16 * 0x25 + iVar5;
              iVar4 = iVar4 + 1;
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (param_5[lVar9] != '\0');
              pcVar7 = pcVar7 + 1;
              iVar16 = iVar5;
            } while (iVar4 < (int)lVar9);
          }
          *(int *)(psVar2 + (longlong)(int)uVar15 * 4 + 4) = iVar5;
        }
      }
    }
  }
LAB_180008b94:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_138);
  return;
}




int FUN_180008c10(longlong param_1,longlong param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *_Dst;
  int *_Dst_00;
  __time64_t _Var3;
  uint uVar4;
  __uint64 _Size;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res20 [2];
  int local_78 [2];
  ulonglong local_70 [2];
  int *local_60;
  undefined4 local_58;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  longlong lVar9;
  
  local_70[1] = 0xfffffffffffffffe;
  local_78[0] = 0;
  lVar8 = -1;
  do {
    lVar9 = lVar8;
    lVar8 = lVar9 + 1;
  } while (*(char *)(lVar8 + (longlong)param_3) != '\0');
  local_res20[0] = (int)lVar9 + 0x51;
  if (**(short **)(param_1 + 0x20) != 0x6b6e) {
    return 0;
  }
  iVar2 = FUN_18000a390(0x6b6e,param_2,local_res20,local_78);
  uVar5 = local_res20[0];
  iVar6 = local_78[0];
  if (iVar2 == 0) {
    uStack_44 = _time64((__time64_t *)0x0);
    local_58 = 0x6e696268;
    local_78[0] = *(int *)(param_2 + 0x48);
    iVar6 = uVar5 - 0xfe0;
    if (iVar6 < 1) {
      uVar7 = 0x1000;
    }
    else {
      uVar4 = iVar6 >> 0x1f & 0xfff;
      uVar7 = iVar6 + uVar4;
      if ((uVar7 & 0xfff) == uVar4) {
        uVar7 = uVar5 + 0x20;
      }
      else {
        uVar7 = (((int)uVar7 >> 0xc) + 2) * 0x1000;
      }
    }
    iStack_54 = local_78[0];
    uStack_50 = uVar7;
    _Dst = (undefined4 *)operator_new((ulonglong)uVar7);
    memset(_Dst,0,(ulonglong)uVar7);
    *_Dst = local_58;
    _Dst[1] = iStack_54;
    _Dst[2] = uStack_50;
    _Dst[3] = uStack_4c;
    _Dst[4] = local_48;
    _Dst[5] = (undefined4)uStack_44;
    _Dst[6] = uStack_44._4_4_;
    _Dst[7] = uStack_3c;
    _Dst[8] = uVar7 - 0x20;
    local_70[0] = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
    local_60 = _Dst;
    cVar1 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),local_70,0);
    if (cVar1 == '\0') {
LAB_180008da1:
      free(_Dst);
      iVar2 = 0;
    }
    else {
      local_res20[0] = 1;
      cVar1 = (**(code **)(param_2 + 0x1040))
                        (*(undefined8 *)(param_2 + 0x1028),_Dst,uVar7,local_res20);
      if (cVar1 == '\0') goto LAB_180008da1;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar7;
      FUN_1800078a0(param_2);
      iVar2 = local_78[0] + 0x20;
      free(_Dst);
    }
    iVar6 = uVar7 - 0x20;
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar7 = iVar6 - uVar5;
  if (iVar6 - uVar5 == 4) {
    uVar5 = uVar5 + 4;
    uVar7 = 0;
  }
  if ((uVar7 & 7) != 0) {
    uVar7 = uVar7 + ((uVar7 & 7) - 8);
    uVar5 = uVar5 + (8 - (uVar7 & 7));
  }
  if (uVar7 == 4) {
    uVar5 = uVar5 + 4;
    uVar7 = 0;
  }
  else {
    local_res20[0] = uVar5 + 4;
    if (uVar7 != 0) goto LAB_180008df9;
  }
  local_res20[0] = uVar5;
LAB_180008df9:
  _Size = (__uint64)(int)local_res20[0];
  _Dst_00 = (int *)operator_new(_Size);
  memset(_Dst_00,0,_Size);
  local_60 = _Dst_00;
  _Var3 = _time64((__time64_t *)0x0);
  _Dst_00[1] = 0x206b6e;
  *(__time64_t *)(_Dst_00 + 2) = _Var3;
  _Dst_00[5] = *(int *)(param_1 + 8);
  _Dst_00[6] = 0;
  _Dst_00[8] = 0;
  _Dst_00[10] = 0;
  _Dst_00[0xb] = -1;
  _Dst_00[0xc] = *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c);
  _Dst_00[0xd] = -1;
  *(short *)(_Dst_00 + 0x13) = (short)lVar8;
  *(undefined2 *)((longlong)_Dst_00 + 0x4e) = 0;
  memcpy(_Dst_00 + 0x14,param_3,(longlong)(int)lVar8);
  *_Dst_00 = -uVar5;
  if (uVar7 != 0) {
    *(uint *)((longlong)(int)uVar5 + (longlong)_Dst_00) = uVar7;
  }
  FUN_1800077d0(param_2,iVar2,_Dst_00,local_res20[0]);
  free(_Dst_00);
  return iVar2;
}




void FUN_180008ee0(longlong *param_1,longlong param_2,void *param_3,void *param_4,int param_5,
                  uint param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_c8 [32];
  uint local_58;
  int local_54;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180014008 ^ (ulonglong)auStackY_c8;
  uVar2 = FUN_1800091f0((longlong)param_1,param_2,param_3,param_4,param_5,param_6);
  if (uVar2 != 0) {
    plVar6 = param_1;
    uVar3 = FUN_1800094e0((ulonglong)param_1,param_2,uVar2);
    if (uVar3 == 0) {
      FUN_180007700(param_2,&local_58,uVar2);
      if (((local_58 != 0xffffffff) && (local_48 != 0)) && (local_54 < 0)) {
        FUN_1800064e0(&local_58,param_2);
      }
    }
    else {
      if (4 < param_6) {
        iVar4 = FUN_18000a6d0(plVar6,param_2,param_4,param_6);
        if (iVar4 == 0) {
          FUN_180007700(param_2,&local_58,uVar2);
          if (((local_58 != 0xffffffff) && (local_48 != 0)) && (local_54 < 0)) {
            FUN_1800064e0(&local_58,param_2);
          }
          FUN_180007700(param_2,&local_58,uVar3);
          if (((local_58 != 0xffffffff) && (local_48 != 0)) && (local_54 < 0)) {
            FUN_1800064e0(&local_58,param_2);
          }
          goto LAB_1800091c1;
        }
        FUN_180007700(param_2,&local_58,uVar2);
        if (((local_58 == 0xffffffff) || (local_48 == 0)) || (-1 < local_54)) goto LAB_1800091c1;
        puVar5 = FUN_180005ff0((int *)&local_58,param_2,param_1,0);
        plVar6 = (longlong *)
                 __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                                 &RegLib::Val::RTTI_Type_Descriptor);
        *(int *)(plVar6[5] + 8) = iVar4;
        (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
        (**(code **)(*plVar6 + 0x50))(plVar6,1);
      }
      piVar1 = (int *)(param_1[4] + 0x24);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1[4] + 0x28) = 0xffffffff;
        *(undefined4 *)(param_1[4] + 0x3c) = 0;
        *(undefined4 *)(param_1[4] + 0x40) = 0;
      }
      *(uint *)(param_1[4] + 0x28) = uVar3;
      lVar9 = param_1[4];
      lVar8 = -1;
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (*(char *)((longlong)param_3 + uVar7) != '\0');
      if (*(ushort *)(lVar9 + 0x3c) >> 1 < uVar7) {
        do {
          lVar8 = lVar8 + 1;
        } while (*(char *)((longlong)param_3 + lVar8) != '\0');
        *(int *)(lVar9 + 0x3c) = (int)lVar8 * 2;
        lVar9 = param_1[4];
      }
      if (*(uint *)(lVar9 + 0x40) < param_6) {
        *(uint *)(lVar9 + 0x40) = param_6;
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_2);
    }
  }
LAB_1800091c1:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_c8);
  return;
}




int FUN_1800091f0(longlong param_1,longlong param_2,void *param_3,void *param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *_Dst;
  int *_Dst_00;
  uint uVar3;
  __uint64 _Size;
  size_t _Size_00;
  uint uVar4;
  longlong lVar5;
  uint uVar7;
  uint local_78;
  uint local_74;
  ulonglong local_70;
  undefined4 *local_68;
  undefined8 local_60;
  int *local_58;
  undefined4 local_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  longlong lVar6;
  
  local_60 = 0xfffffffffffffffe;
  local_74 = 0;
  _Size_00 = 0xffffffffffffffff;
  lVar5 = -1;
  do {
    lVar6 = lVar5;
    lVar5 = lVar6 + 1;
  } while (*(char *)((longlong)param_3 + lVar5) != '\0');
  local_78 = (int)lVar6 + 0x19;
  if ((int)lVar5 == 0) {
    return 0;
  }
  if (**(short **)(param_1 + 0x20) != 0x6b6e) {
    return 0;
  }
  iVar2 = FUN_18000a390(0x6b6e,param_2,&local_78,(int *)&local_74);
  uVar7 = local_78;
  if (iVar2 == 0) {
    uStack_3c = _time64((__time64_t *)0x0);
    local_50 = 0x6e696268;
    local_78 = *(uint *)(param_2 + 0x48);
    iVar2 = uVar7 - 0xfe0;
    if (iVar2 < 1) {
      uVar4 = 0x1000;
    }
    else {
      uVar3 = iVar2 >> 0x1f & 0xfff;
      uVar4 = iVar2 + uVar3;
      if ((uVar4 & 0xfff) == uVar3) {
        uVar4 = uVar7 + 0x20;
      }
      else {
        uVar4 = (((int)uVar4 >> 0xc) + 2) * 0x1000;
      }
    }
    uStack_4c = local_78;
    uStack_48 = uVar4;
    _Dst = (undefined4 *)operator_new((ulonglong)uVar4);
    local_68 = _Dst;
    memset(_Dst,0,(ulonglong)uVar4);
    *_Dst = local_50;
    _Dst[1] = uStack_4c;
    _Dst[2] = uStack_48;
    _Dst[3] = uStack_44;
    _Dst[4] = local_40;
    _Dst[5] = (undefined4)uStack_3c;
    _Dst[6] = uStack_3c._4_4_;
    _Dst[7] = uStack_34;
    _Dst[8] = uVar4 - 0x20;
    local_70 = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
    local_58 = _Dst;
    cVar1 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_70,0);
    if (cVar1 == '\0') {
LAB_180009386:
      free(_Dst);
      iVar2 = 0;
    }
    else {
      local_74 = 1;
      cVar1 = (**(code **)(param_2 + 0x1040))
                        (*(undefined8 *)(param_2 + 0x1028),_Dst,uVar4,&local_74);
      if (cVar1 == '\0') goto LAB_180009386;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar4;
      FUN_1800078a0(param_2);
      iVar2 = local_78 + 0x20;
      free(local_68);
    }
    local_74 = uVar4 - 0x20;
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar4 = local_74 - uVar7;
  if (uVar4 == 4) {
    uVar4 = 0;
    uVar7 = uVar7 + 4;
  }
  if ((uVar4 & 7) != 0) {
    uVar4 = uVar4 + ((uVar4 & 7) - 8);
    uVar7 = uVar7 + (8 - (uVar4 & 7));
  }
  if (uVar4 == 4) {
    uVar4 = 0;
    uVar7 = uVar7 + 4;
  }
  else {
    local_74 = uVar7 + 4;
    if (uVar4 != 0) goto LAB_1800093e2;
  }
  local_74 = uVar7;
LAB_1800093e2:
  _Size = (__uint64)(int)local_74;
  _Dst_00 = (int *)operator_new(_Size);
  memset(_Dst_00,0,_Size);
  *(undefined2 *)(_Dst_00 + 1) = 0x6b76;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)((longlong)param_3 + lVar5) != '\0');
  *(short *)((longlong)_Dst_00 + 6) = (short)lVar5;
  local_58 = _Dst_00;
  if (param_6 < 5) {
    _Dst_00[2] = param_6 + 0x80000000;
    memcpy(_Dst_00 + 3,param_4,(ulonglong)param_6);
  }
  else {
    _Dst_00[2] = param_6;
    _Dst_00[3] = 0;
  }
  _Dst_00[4] = param_5;
  *(undefined2 *)(_Dst_00 + 5) = 1;
  do {
    _Size_00 = _Size_00 + 1;
  } while (*(char *)((longlong)param_3 + _Size_00) != '\0');
  memcpy(_Dst_00 + 6,param_3,_Size_00);
  *_Dst_00 = -uVar7;
  if (uVar4 != 0) {
    *(uint *)((longlong)(int)uVar7 + (longlong)_Dst_00) = uVar4;
  }
  FUN_1800077d0(param_2,iVar2,_Dst_00,local_74);
  free(_Dst_00);
  return iVar2;
}




void FUN_1800094e0(ulonglong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  byte *pbVar10;
  __time64_t _Var11;
  __uint64 _Var12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  ulonglong local_90;
  uint local_88;
  ulonglong local_80;
  uint *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  ulonglong local_40;
  
  local_70 = 0xfffffffffffffffe;
  local_40 = DAT_180014008 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  iVar15 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  iVar7 = iVar15 * 4;
  local_90 = CONCAT44(local_90._4_4_,iVar7 + 4);
  local_88 = param_3;
  local_80 = param_1;
  if (iVar15 == 0) {
    iVar7 = FUN_18000a390(param_1,param_2,(uint *)&local_90,(int *)local_98);
    iVar15 = (int)local_90;
    uVar6 = local_98[0];
    if (iVar7 == 0) {
      _Var11 = _time64((__time64_t *)0x0);
      local_60 = 0x6e696268;
      uVar6 = *(uint *)(param_2 + 0x48);
      uStack_4c = (uint)_Var11;
      uStack_48 = (uint)((ulonglong)_Var11 >> 0x20);
      iVar7 = iVar15 + -0xfe0;
      if (iVar7 < 1) {
        uVar8 = 0x1000;
      }
      else {
        uVar14 = iVar7 >> 0x1f & 0xfff;
        uVar8 = iVar7 + uVar14;
        if ((uVar8 & 0xfff) == uVar14) {
          uVar8 = iVar15 + 0x20;
        }
        else {
          uVar8 = (((int)uVar8 >> 0xc) + 2) * 0x1000;
        }
      }
      uStack_5c = uVar6;
      uStack_58 = uVar8;
      puVar13 = (uint *)operator_new((ulonglong)uVar8);
      memset(puVar13,0,(ulonglong)uVar8);
      *puVar13 = local_60;
      puVar13[1] = uStack_5c;
      puVar13[2] = uStack_58;
      puVar13[3] = uStack_54;
      puVar13[4] = local_50;
      puVar13[5] = uStack_4c;
      puVar13[6] = uStack_48;
      puVar13[7] = uStack_44;
      puVar13[8] = uVar8 - 0x20;
      local_80 = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
      local_78 = puVar13;
      cVar5 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_80,0);
      if (cVar5 == '\0') {
LAB_18000991b:
        free(puVar13);
        iVar7 = 0;
      }
      else {
        local_98[0] = 1;
        cVar5 = (**(code **)(param_2 + 0x1040))
                          (*(undefined8 *)(param_2 + 0x1028),puVar13,uVar8,local_98);
        if (cVar5 == '\0') goto LAB_18000991b;
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar8;
        FUN_1800078a0(param_2);
        iVar7 = uVar6 + 0x20;
        free(puVar13);
      }
      uVar6 = uVar8 - 0x20;
      if (iVar7 == 0) goto LAB_1800099d1;
    }
    uVar6 = uVar6 - iVar15;
    if (uVar6 == 4) {
      uVar6 = 0;
      iVar15 = iVar15 + 4;
    }
    if ((uVar6 & 7) != 0) {
      uVar6 = uVar6 + ((uVar6 & 7) - 8);
      iVar15 = iVar15 + (8 - (uVar6 & 7));
    }
    if (uVar6 == 4) {
      uVar6 = 0;
      iVar15 = iVar15 + 4;
    }
    iVar16 = iVar15 + 4;
    if (uVar6 == 0) {
      iVar16 = iVar15;
    }
    uVar17 = (ulonglong)iVar16;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar17 >> 2;
    _Var12 = SUB168(ZEXT816(4) * auVar4,0);
    if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
      _Var12 = 0xffffffffffffffff;
    }
    puVar13 = (uint *)operator_new(_Var12);
    puVar13[1] = local_88;
  }
  else {
    plVar9 = (longlong *)FUN_180007af0(param_1,param_2);
    local_68 = plVar9;
    if (plVar9 == (longlong *)0x0) goto LAB_1800099d1;
    pbVar10 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (pbVar10 == (byte *)0x0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int3 *)(pbVar10 + 1) * 0x100 + (uint)*pbVar10;
    }
    iVar15 = -iVar15;
    if (iVar7 + 8 < iVar15) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x28);
      uVar6 = 0;
      iVar16 = iVar15;
    }
    else {
      uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
      FUN_180007700(param_2,&local_60,uVar6);
      if (((local_60 == 0xffffffff) || (CONCAT44(uStack_4c,local_50) == 0)) || (-1 < (int)uStack_5c)
         ) {
        (**(code **)(*plVar9 + 0x50))(plVar9,1);
        goto LAB_1800099d1;
      }
      puVar13 = &local_60;
      FUN_1800064e0(puVar13,param_2);
      iVar7 = FUN_18000a390(puVar13,param_2,(uint *)&local_90,(int *)local_98);
      iVar15 = (int)local_90;
      uVar6 = local_98[0];
      if (iVar7 == 0) {
        _Var11 = _time64((__time64_t *)0x0);
        local_60 = 0x6e696268;
        uVar6 = *(uint *)(param_2 + 0x48);
        uStack_4c = (uint)_Var11;
        uStack_48 = (uint)((ulonglong)_Var11 >> 0x20);
        iVar7 = iVar15 + -0xfe0;
        if (iVar7 < 1) {
          uVar8 = 0x1000;
        }
        else {
          uVar14 = iVar7 >> 0x1f & 0xfff;
          uVar8 = iVar7 + uVar14;
          if ((uVar8 & 0xfff) == uVar14) {
            uVar8 = iVar15 + 0x20;
          }
          else {
            uVar8 = (((int)uVar8 >> 0xc) + 2) * 0x1000;
          }
        }
        uStack_5c = uVar6;
        uStack_58 = uVar8;
        puVar13 = (uint *)operator_new((ulonglong)uVar8);
        memset(puVar13,0,(ulonglong)uVar8);
        *puVar13 = local_60;
        puVar13[1] = uStack_5c;
        puVar13[2] = uStack_58;
        puVar13[3] = uStack_54;
        puVar13[4] = local_50;
        puVar13[5] = uStack_4c;
        puVar13[6] = uStack_48;
        puVar13[7] = uStack_44;
        puVar13[8] = uVar8 - 0x20;
        local_90 = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
        local_78 = puVar13;
        cVar5 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_90,0);
        if (cVar5 == '\0') {
LAB_1800096f9:
          free(puVar13);
          iVar7 = 0;
        }
        else {
          local_98[0] = 1;
          cVar5 = (**(code **)(param_2 + 0x1040))
                            (*(undefined8 *)(param_2 + 0x1028),puVar13,uVar8,local_98);
          if (cVar5 == '\0') goto LAB_1800096f9;
          *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar8;
          FUN_1800078a0(param_2);
          iVar7 = uVar6 + 0x20;
          free(puVar13);
        }
        uVar6 = uVar8 - 0x20;
        if (iVar7 == 0) {
          (**(code **)(*plVar9 + 0x50))(plVar9,1);
          goto LAB_1800099d1;
        }
      }
      uVar6 = uVar6 - iVar15;
      if (uVar6 == 4) {
        uVar6 = 0;
        iVar15 = iVar15 + 4;
      }
      if ((uVar6 & 7) != 0) {
        uVar6 = uVar6 + ((uVar6 & 7) - 8);
        iVar15 = iVar15 + (8 - (uVar6 & 7));
      }
      if (uVar6 == 4) {
        uVar6 = 0;
        iVar15 = iVar15 + 4;
      }
      iVar16 = iVar15 + 4;
      if (uVar6 == 0) {
        iVar16 = iVar15;
      }
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulonglong)(longlong)iVar16 >> 2;
    _Var12 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      _Var12 = 0xffffffffffffffff;
    }
    puVar13 = (uint *)operator_new(_Var12);
    memset(puVar13,0,(longlong)iVar16);
    lVar1 = plVar9[4];
    uVar8 = 0;
    uVar14 = uVar8;
    if (*(int *)(*(longlong *)(local_80 + 0x20) + 0x24) != 0) {
      do {
        uVar8 = uVar14 + 1;
        puVar13[uVar8] = *(uint *)(lVar1 + (ulonglong)uVar14 * 4);
        uVar14 = uVar8;
      } while (uVar8 < *(uint *)(*(longlong *)(local_80 + 0x20) + 0x24));
    }
    puVar13[uVar8 + 1] = local_88;
    plVar2 = *(longlong **)(local_80 + 0x38);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,1);
      *(undefined8 *)(local_80 + 0x38) = 0;
    }
    (**(code **)(*plVar9 + 0x50))(plVar9,1);
    uVar17 = (ulonglong)iVar16;
  }
  *puVar13 = -iVar15;
  if (uVar6 != 0) {
    *(uint *)((longlong)puVar13 + ((uVar17 & 0xfffffffffffffffc) - 4)) = uVar6;
  }
  local_78 = puVar13;
  FUN_1800077d0(param_2,iVar7,puVar13,iVar16);
  free(puVar13);
LAB_1800099d1:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_b8);
  return;
}




void FUN_180009a00(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
    return;
  }
  uVar3 = param_2 - uVar1;
  if (param_1[3] - uVar1 < uVar3) {
    FUN_180009a90(param_1,uVar3,param_1,uVar3);
    return;
  }
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  puVar4 = (undefined2 *)((longlong)param_1 + uVar1 * 2);
  uVar2 = uVar3;
  if (uVar3 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined2 *)((longlong)param_1 + (uVar1 + uVar3) * 2) = 0;
  return;
}




undefined8 *
FUN_180009a90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  size_t _Size;
  void *pvVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  void *_Dst;
  void *_Memory;
  ulonglong uVar9;
  undefined2 *puVar10;
  
  lVar1 = param_1[2];
  if (0x7ffffffffffffffeU - lVar1 < param_2) {
    FUN_180005fd0();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar2 = param_1[3];
  uVar6 = lVar1 + param_2 | 7;
  uVar9 = 0x7ffffffffffffffe;
  if (((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uVar8 = (uVar2 >> 1) + uVar2, uVar9 = uVar6, uVar6 < uVar8)) {
    uVar9 = uVar8;
  }
  _Dst = (void *)0x0;
  uVar6 = (uVar9 + 1) * 2;
  uVar8 = 0xffffffffffffffff;
  if ((uVar9 + 1 < 0x8000000000000000) && (uVar8 = uVar6, uVar6 < 0x1000)) {
    if (uVar6 != 0) {
      _Dst = operator_new(uVar6);
    }
  }
  else {
    uVar6 = uVar8 + 0x27;
    if (uVar8 + 0x27 <= uVar8) {
      uVar6 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar6);
    if (pvVar4 == (void *)0x0) goto LAB_180009bdc;
    _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar4;
  }
  param_1[3] = uVar9;
  _Size = lVar1 * 2;
  param_1[2] = lVar1 + param_2;
  puVar10 = (undefined2 *)(_Size + (longlong)_Dst);
  if (uVar2 < 8) {
    memcpy(_Dst,param_1,_Size);
    lVar7 = param_4;
    if (param_4 != 0) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)((longlong)_Dst + (lVar1 + param_4) * 2) = 0;
  }
  else {
    pvVar4 = (void *)*param_1;
    memcpy(_Dst,pvVar4,_Size);
    lVar7 = param_4;
    if (param_4 != 0) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    *(undefined2 *)((longlong)_Dst + (lVar1 + param_4) * 2) = 0;
    _Memory = pvVar4;
    if ((0xfff < uVar2 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
LAB_180009bdc:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




undefined8 * FUN_180009c30(undefined8 *param_1,uint param_2)

{
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_180009c80(undefined8 *param_1)

{
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  return;
}




undefined4 FUN_180009cb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




undefined8 FUN_180009cc0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_180009cd0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined4 FUN_180009ce0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




longlong * FUN_180009cf0(undefined8 param_1,longlong *param_2)

{
  param_2[3] = 7;
  param_2[2] = 0;
  *(undefined2 *)param_2 = 0;
  FUN_180007140(param_2,&DAT_18000f4e0,0);
  return param_2;
}




void FUN_180009d30(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStackY_c8 [32];
  longlong *local_98;
  void *pvStack_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  void *local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_68 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStackY_c8;
  plVar10 = (longlong *)0x0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  local_70 = 1;
  local_98 = (longlong *)0x0;
  pvStack_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_60 = param_2;
  local_98 = (longlong *)operator_new(0x10);
  *local_98 = 0;
  local_98[1] = 0;
  *local_98 = (longlong)&local_98;
  plVar5 = local_78;
  if (param_1 != (longlong *)0x0) {
    do {
      if ((((int)local_80 + (int)local_78 & 1U) == 0) && (local_88 <= (longlong)local_78 + 2U >> 1))
      {
        FUN_18000a910((longlong)&local_98);
      }
      local_80 = (longlong *)((ulonglong)local_80 & local_88 * 2 - 1);
      uVar9 = (longlong)local_78 + (longlong)local_80;
      lVar7 = (local_88 - 1 & uVar9 >> 1) * 8;
      if (*(longlong *)((longlong)pvStack_90 + lVar7) == 0) {
        pvVar2 = operator_new(0x10);
        *(void **)((longlong)pvStack_90 + lVar7) = pvVar2;
      }
      *(longlong **)(*(longlong *)((longlong)pvStack_90 + lVar7) + (ulonglong)((uint)uVar9 & 1) * 8)
           = param_1;
      local_78 = (longlong *)((longlong)local_78 + 1);
      param_1 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      plVar5 = local_78;
    } while (param_1 != (longlong *)0x0);
  }
  while (local_78 != (longlong *)0x0) {
    plVar5 = plVar10;
    if ((local_98 != (longlong *)0x0) && ((undefined8 *)*local_98 != (undefined8 *)0x0)) {
      plVar5 = *(longlong **)*local_98;
    }
    uVar9 = (longlong)local_80 + -1 + (longlong)local_78;
    plVar3 = plVar10;
    if ((plVar5 != (longlong *)0x0) && ((undefined8 *)*plVar5 != (undefined8 *)0x0)) {
      plVar3 = *(longlong **)*plVar5;
    }
    plVar5 = plVar10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = (longlong *)*plVar3;
    }
    plVar3 = *(longlong **)
              (*(longlong *)(plVar5[1] + (plVar5[2] - 1U & uVar9 >> 1) * 8) +
              (ulonglong)((uint)uVar9 & 1) * 8);
    local_78 = (longlong *)((longlong)local_78 + -1);
    if (local_78 == (longlong *)0x0) {
      local_80 = plVar10;
    }
    uVar9 = param_2[2];
    if (param_2[3] == uVar9) {
      FUN_18000ab10(param_2,1,plVar5,&DAT_18000f4e4,1);
    }
    else {
      param_2[2] = uVar9 + 1;
      puVar8 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        puVar8 = (undefined8 *)*param_2;
      }
      memmove((void *)((longlong)puVar8 + uVar9 * 2),&DAT_18000f4e4,2);
      *(undefined2 *)((longlong)puVar8 + (uVar9 + 1) * 2) = 0;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_50);
    puVar8 = puVar4;
    if (7 < (ulonglong)puVar4[3]) {
      puVar8 = (undefined8 *)*puVar4;
    }
    uVar9 = puVar4[2];
    lVar7 = param_2[2];
    uVar1 = param_2[3];
    if (uVar1 - lVar7 < uVar9) {
      FUN_18000ab10(param_2,uVar9,uVar1,puVar8,uVar9);
    }
    else {
      param_2[2] = lVar7 + uVar9;
      puVar4 = param_2;
      if (7 < uVar1) {
        puVar4 = (undefined8 *)*param_2;
      }
      memmove((void *)((longlong)puVar4 + lVar7 * 2),puVar8,uVar9 * 2);
      *(undefined2 *)((longlong)puVar4 + (lVar7 + uVar9) * 2) = 0;
    }
    plVar5 = plVar10;
    if (7 < local_38) {
      pvVar2 = local_50[0];
      if ((0xfff < local_38 * 2 + 2) &&
         (pvVar2 = *(void **)((longlong)local_50[0] + -8),
         0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar2);
    }
  }
  lVar7 = 0;
  if (plVar5 != (longlong *)0x0) {
    do {
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    local_80 = (longlong *)0x0;
  }
  local_78 = (longlong *)0x0;
  pvVar2 = pvStack_90;
  uVar9 = local_88;
  while (uVar9 != 0) {
    uVar9 = uVar9 - 1;
    pvVar6 = *(void **)((longlong)pvVar2 + uVar9 * 8);
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
      pvVar2 = pvStack_90;
    }
  }
  if (pvVar2 != (void *)0x0) {
    pvVar6 = pvVar2;
    if ((0xfff < local_88 * 8) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar6);
  }
  local_88 = 0;
  pvStack_90 = (void *)0x0;
  free(local_98);
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_c8);
  return;
}




void FUN_18000a100(undefined8 *param_1)

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
    if ((0xfff < (ulonglong)(param_1[2] << 3)) &&
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




longlong * FUN_18000a1d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
  while (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1);
    param_1 = plVar1;
    plVar1 = plVar2;
  }
  return param_1;
}




void FUN_18000a200(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  ulonglong local_res18;
  uint local_28;
  int local_24;
  undefined8 *local_18;
  
  FUN_180007700(param_2,&local_28,*(uint *)(param_1 + 1));
  if (((local_28 != 0xffffffff) && (local_18 != (undefined8 *)0x0)) && (local_24 < 0)) {
    local_res18 = (ulonglong)(local_28 + 0x1000);
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    cVar1 = (*(code *)local_18[1])(*local_18,&local_res18,0);
    if (cVar1 != '\0') {
      local_res8[0] = 1;
      (*(code *)local_18[3])(*local_18,uVar2,-local_24,local_res8);
    }
  }
  return;
}




undefined8 * FUN_18000a2a0(undefined8 *param_1,wint_t *param_2)

{
  wint_t *pwVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  wint_t wVar4;
  wint_t *pwVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  pwVar5 = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    pwVar5 = *(wint_t **)param_2;
  }
  pwVar1 = param_2 + 8;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wint_t **)param_2;
  }
  uVar7 = (ulonglong)((longlong)(pwVar5 + *(longlong *)pwVar1) + (1 - (longlong)param_2)) >> 1;
  if (pwVar5 + *(longlong *)pwVar1 < param_2) {
    uVar7 = uVar8;
  }
  if (uVar7 != 0) {
    do {
      wVar4 = towupper(*param_2);
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      if (uVar2 < uVar3) {
        param_1[2] = uVar2 + 1;
        puVar6 = param_1;
        if (7 < uVar3) {
          puVar6 = (undefined8 *)*param_1;
        }
        *(wint_t *)((longlong)puVar6 + uVar2 * 2) = wVar4;
        *(undefined2 *)((longlong)puVar6 + uVar2 * 2 + 2) = 0;
      }
      else {
        FUN_180005e40(param_1,uVar2,uVar3,wVar4);
      }
      param_2 = param_2 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  return param_1;
}




/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000a390(undefined8 param_1,longlong param_2,uint *param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_10f8 [32];
  undefined4 local_10d8;
  undefined4 local_10d4;
  ulonglong local_10d0;
  int *local_10c8;
  undefined8 local_10c0;
  undefined8 local_10b4;
  ulonglong uStack_10ac;
  undefined8 local_1088;
  ulonglong uStack_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  undefined8 ***local_1068 [3];
  ulonglong local_1050;
  undefined1 local_1048 [40];
  uint local_1020;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18000a3ae;
  local_10c0 = 0xfffffffffffffffe;
  local_48 = DAT_180014008 ^ (ulonglong)auStack_10f8;
  local_10c8 = param_4;
  memcpy(local_1048,(void *)(param_2 + 0x20),0x1000);
  uVar4 = *param_3 + 4;
  *param_3 = uVar4;
  if ((uVar4 & 7) != 0) {
    *param_3 = (uVar4 - (uVar4 & 7)) + 8;
  }
  uVar4 = 0;
  if (local_1020 != 0) {
    do {
      local_1088 = 0;
      uStack_1080 = 0;
      local_1078 = 0;
      local_1070 = 0;
      if (uVar4 != 0xffffffff) {
        local_10d0 = (ulonglong)(uVar4 + 0x1000);
        cVar3 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_10d0,0);
        if (cVar3 != '\0') {
          local_10d8 = 1;
          cVar3 = (**(code **)(param_2 + 0x1038))
                            (*(undefined8 *)(param_2 + 0x1028),&local_1088,0x20,&local_10d8);
          if (cVar3 != '\0') {
            local_10b4 = local_1088;
            uStack_10ac = uStack_1080;
          }
        }
      }
      uVar9 = uStack_10ac;
      uVar1 = local_10b4;
      if (((int)local_10b4 != 0x6e696268) || (iVar2 = (int)uStack_10ac, (int)uStack_10ac == 0))
      break;
      FUN_180005a10((longlong *)local_1068,uStack_10ac & 0xffffffff);
      ppppuVar7 = local_1068;
      if (0xf < local_1050) {
        ppppuVar7 = (undefined8 ****)local_1068[0];
      }
      local_10d0 = (ulonglong)((int)((ulonglong)uVar1 >> 0x20) + 0x1000);
      if ((ppppuVar7 == (undefined8 ****)0x0) ||
         (cVar3 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),&local_10d0,0),
         cVar3 == '\0')) {
LAB_18000a633:
        if (0xf < local_1050) {
          ppppuVar7 = (undefined8 ****)local_1068[0];
          if ((0xfff < local_1050 + 1) &&
             (ppppuVar7 = (undefined8 ****)((undefined8 ****)local_1068[0])[-1],
             0x1f < (ulonglong)((longlong)local_1068[0] + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(ppppuVar7);
        }
        break;
      }
      local_10d4 = 1;
      cVar3 = (**(code **)(param_2 + 0x1038))
                        (*(undefined8 *)(param_2 + 0x1028),ppppuVar7,uVar9 & 0xffffffff,&local_10d4)
      ;
      if (cVar3 == '\0') goto LAB_18000a633;
      ppppuVar7 = local_1068;
      if (0xf < local_1050) {
        ppppuVar7 = (undefined8 ****)local_1068[0];
      }
      uVar9 = 0x20;
      if (0x20 < *(uint *)(ppppuVar7 + 1)) {
        do {
          pbVar6 = (byte *)(uVar9 + (longlong)ppppuVar7);
          if ((pbVar6 == (byte *)0x0) ||
             (iVar5 = (uint)*pbVar6 + *(int3 *)(pbVar6 + 1) * 0x100, iVar5 == 0)) break;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          else if ((int)*param_3 <= iVar5) {
            *local_10c8 = iVar5;
            if ((int)uVar9 + uVar4 != 0) goto LAB_18000a633;
            break;
          }
          uVar8 = (int)uVar9 + iVar5;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(ppppuVar7 + 1));
      }
      uVar4 = uVar4 + iVar2;
      if (0xf < local_1050) {
        ppppuVar7 = (undefined8 ****)local_1068[0];
        if ((0xfff < local_1050 + 1) &&
           (ppppuVar7 = (undefined8 ****)local_1068[0][-1],
           0x1f < (ulonglong)((longlong)local_1068[0] + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(ppppuVar7);
      }
    } while (uVar4 < local_1020);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_10f8);
  return;
}




void FUN_18000a680(longlong param_1,void *param_2)

{
  byte *_Dst;
  int iVar1;
  
  _Dst = *(byte **)(param_1 + 0x18);
  if (_Dst == (byte *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int3 *)(_Dst + 1) * 0x100 + (uint)*_Dst;
  }
  memcpy(_Dst,param_2,(longlong)-iVar1);
  return;
}




int FUN_18000a6d0(undefined8 param_1,longlong param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *_Dst;
  int *_Dst_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_res8;
  ulonglong local_78 [2];
  undefined4 *local_68;
  undefined4 local_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  int iVar6;
  
  local_78[1] = 0xfffffffffffffffe;
  local_78[0] = local_78[0] & 0xffffffff00000000;
  local_res8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_res8._0_4_ = param_4;
  iVar2 = FUN_18000a390(param_1,param_2,(uint *)&local_res8,(int *)local_78);
  uVar4 = (uint)local_res8;
  if (iVar2 == 0) {
    uStack_4c = _time64((__time64_t *)0x0);
    local_60 = 0x6e696268;
    iVar2 = *(int *)(param_2 + 0x48);
    iVar6 = uVar4 - 0xfe0;
    if (iVar6 < 1) {
      uVar5 = 0x1000;
    }
    else {
      uVar3 = iVar6 >> 0x1f & 0xfff;
      uVar5 = iVar6 + uVar3;
      if ((uVar5 & 0xfff) == uVar3) {
        uVar5 = uVar4 + 0x20;
      }
      else {
        uVar5 = (((int)uVar5 >> 0xc) + 2) * 0x1000;
      }
    }
    iStack_5c = iVar2;
    uStack_58 = uVar5;
    _Dst = (undefined4 *)operator_new((ulonglong)uVar5);
    memset(_Dst,0,(ulonglong)uVar5);
    *_Dst = local_60;
    _Dst[1] = iStack_5c;
    _Dst[2] = uStack_58;
    _Dst[3] = uStack_54;
    _Dst[4] = local_50;
    _Dst[5] = (undefined4)uStack_4c;
    _Dst[6] = uStack_4c._4_4_;
    _Dst[7] = uStack_44;
    iVar6 = uVar5 - 0x20;
    _Dst[8] = iVar6;
    local_78[0] = (ulonglong)(*(int *)(param_2 + 0x48) + 0x1000);
    local_68 = _Dst;
    cVar1 = (**(code **)(param_2 + 0x1030))(*(undefined8 *)(param_2 + 0x1028),local_78,0);
    if (cVar1 == '\0') {
LAB_18000a826:
      free(_Dst);
      iVar2 = 0;
    }
    else {
      local_res8._0_4_ = 1;
      cVar1 = (**(code **)(param_2 + 0x1040))
                        (*(undefined8 *)(param_2 + 0x1028),_Dst,uVar5,&local_res8);
      if (cVar1 == '\0') goto LAB_18000a826;
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + uVar5;
      FUN_1800078a0(param_2);
      iVar2 = iVar2 + 0x20;
      free(_Dst);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar6 = (int)local_78[0];
  }
  uVar5 = iVar6 - uVar4;
  if (uVar5 == 4) {
    uVar5 = 0;
    uVar4 = uVar4 + 4;
  }
  if ((uVar5 & 7) != 0) {
    uVar5 = uVar5 + ((uVar5 & 7) - 8);
    uVar4 = uVar4 + (8 - (uVar5 & 7));
  }
  if (uVar5 == 4) {
    uVar5 = 0;
    uVar4 = uVar4 + 4;
  }
  else {
    uVar3 = uVar4 + 4;
    if (uVar5 != 0) goto LAB_18000a886;
  }
  uVar3 = uVar4;
LAB_18000a886:
  _Dst_00 = (int *)operator_new((longlong)(int)uVar3);
  memset(_Dst_00,0,(longlong)(int)uVar3);
  *_Dst_00 = -uVar4;
  local_res8 = _Dst_00;
  memcpy(_Dst_00 + 1,param_3,(ulonglong)param_4);
  if (uVar5 != 0) {
    *(uint *)((longlong)(int)uVar4 + (longlong)_Dst_00) = uVar5;
  }
  FUN_1800077d0(param_2,iVar2,_Dst_00,uVar3);
  free(_Dst_00);
  return iVar2;
}




void FUN_18000a910(longlong param_1)

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
  for (; (uVar7 = uVar3 - uVar4, uVar7 == 0 || (uVar3 < 8)); uVar3 = uVar3 * 2) {
    if (0xfffffffffffffff - uVar3 < uVar3) {
      FUN_18000aaf0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = uVar3 * 8;
  uVar8 = *(ulonglong *)(param_1 + 0x18) >> 1;
  if (uVar3 < 0x2000000000000000) {
    if (0xfff < uVar4) goto LAB_18000a997;
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
LAB_18000a997:
    uVar3 = uVar4 + 0x27;
    if (uVar3 <= uVar4) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_18000aad9;
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
LAB_18000aad9:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar7;
  return;
}




void FUN_18000aaf0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("deque<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 *
FUN_18000ab10(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
             longlong param_5)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  size_t _Size;
  void *pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Memory;
  void *_Dst;
  
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
    FUN_180005fd0();
    pcVar4 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar4)();
    return puVar6;
  }
  uVar3 = param_1[3];
  uVar7 = lVar2 + param_2 | 7;
  uVar9 = 0x7ffffffffffffffe;
  if (((uVar7 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) &&
     (uVar8 = (uVar3 >> 1) + uVar3, uVar9 = uVar7, uVar7 < uVar8)) {
    uVar9 = uVar8;
  }
  _Dst = (void *)0x0;
  uVar7 = (uVar9 + 1) * 2;
  uVar8 = 0xffffffffffffffff;
  if ((uVar9 + 1 < 0x8000000000000000) && (uVar8 = uVar7, uVar7 < 0x1000)) {
    if (uVar7 != 0) {
      _Dst = operator_new(uVar7);
    }
  }
  else {
    uVar7 = uVar8 + 0x27;
    if (uVar8 + 0x27 <= uVar8) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new(uVar7);
    if (pvVar5 == (void *)0x0) goto LAB_18000ac68;
    _Dst = (void *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar5;
  }
  _Size = lVar2 * 2;
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar9;
  puVar1 = (undefined2 *)((longlong)_Dst + (param_5 + lVar2) * 2);
  if (uVar3 < 8) {
    memcpy(_Dst,param_1,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5 * 2);
    *puVar1 = 0;
  }
  else {
    pvVar5 = (void *)*param_1;
    memcpy(_Dst,pvVar5,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5 * 2);
    *puVar1 = 0;
    _Memory = pvVar5;
    if ((0xfff < uVar3 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
LAB_18000ac68:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = _Dst;
  return param_1;
}




void FUN_18000acc0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint local_20;
  int local_1c;
  longlong local_10;
  
  FUN_180007700(param_2,&local_20,*(uint *)(*(longlong *)(param_1 + 0x20) + 4));
  if (((local_20 != 0xffffffff) && (local_10 != 0)) && (local_1c < 0)) {
    puVar1 = FUN_180005ff0((int *)&local_20,param_2,0,0);
    plVar2 = (longlong *)
             __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::Security::RTTI_Type_Descriptor,0);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    *(undefined4 *)(plVar2[4] + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 8);
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    (**(code **)(*plVar2 + 0x50))(plVar2,1);
    FUN_180007700(param_2,&local_20,*(uint *)(*(longlong *)(param_1 + 0x20) + 8));
    if (((local_20 != 0xffffffff) && (local_10 != 0)) && (local_1c < 0)) {
      puVar1 = FUN_180005ff0((int *)&local_20,param_2,0,0);
      plVar2 = (longlong *)
               __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::Security::RTTI_Type_Descriptor,0);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      *(undefined4 *)(plVar2[4] + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 4);
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      (**(code **)(*plVar2 + 0x50))(plVar2,1);
    }
  }
  return;
}




longlong * FUN_18000ae50(undefined8 param_1,longlong *param_2)

{
  param_2[3] = 7;
  param_2[2] = 0;
  *(undefined2 *)param_2 = 0;
  FUN_180007140(param_2,L"SubDatList",10);
  return param_2;
}




longlong FUN_18000ae90(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  FUN_180007700(param_2,&local_28,*(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_3 * 4))
  ;
  if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
    puVar1 = FUN_180005ff0((int *)&local_28,param_2,param_1,2);
    lVar2 = __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::MidData::RTTI_Type_Descriptor,0);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  return 0;
}




undefined8 * FUN_18000af20(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = RegLib::SubKeyList::vftable;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    param_1[5] = 0;
  }
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




undefined2 FUN_18000afa0(longlong param_1)

{
  return *(undefined2 *)(*(longlong *)(param_1 + 0x20) + 2);
}




void FUN_18000afb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))();
  lVar2 = __RTDynamicCast(plVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                          &RegLib::Key::RTTI_Type_Descriptor,0);
  while (lVar2 == 0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1);
    lVar2 = __RTDynamicCast(plVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Key::RTTI_Type_Descriptor,0);
  }
  __RTDynamicCast(plVar1,0,&RegLib::Node::RTTI_Type_Descriptor,&RegLib::Key::RTTI_Type_Descriptor,0)
  ;
  return;
}




longlong * FUN_18000b040(undefined8 param_1,longlong *param_2)

{
  param_2[3] = 7;
  param_2[2] = 0;
  *(undefined2 *)param_2 = 0;
  FUN_180007140(param_2,L"SubKeyList",10);
  return param_2;
}




void FUN_18000b080(longlong *param_1,undefined8 param_2,short *param_3)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  wint_t *pwVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  short *psVar9;
  void *pvVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong uStack_70;
  void *local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_180014008 ^ (ulonglong)auStack_c8;
  uVar13 = 0;
  local_98 = 0;
  uVar4 = (**(code **)(*param_1 + 8))();
  local_a8 = 0;
  lVar5 = __RTDynamicCast(uVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                          &RegLib::Key::RTTI_Type_Descriptor);
  uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 0x14);
  if (uVar1 == 0) goto LAB_18000b3a6;
  plVar8 = (longlong *)param_1[5];
  uVar12 = uVar13;
  if (plVar8 == (longlong *)0x0) {
LAB_18000b179:
    bVar3 = false;
  }
  else {
    pwVar6 = (wint_t *)(**(code **)(*plVar8 + 0x20))(plVar8,local_68);
    local_98 = 1;
    puVar7 = FUN_18000a2a0((undefined8 *)&local_88,pwVar6);
    uVar12 = 3;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    puVar14 = puVar7;
    if (7 < (ulonglong)puVar7[3]) {
      puVar14 = (undefined8 *)*puVar7;
    }
    lVar11 = puVar7[2];
    if (lVar11 != lVar5) goto LAB_18000b179;
    if (lVar11 != 0) {
      psVar9 = param_3;
      do {
        if (*(short *)((longlong)psVar9 + ((longlong)puVar14 - (longlong)param_3)) != *psVar9)
        goto LAB_18000b179;
        psVar9 = psVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    bVar3 = true;
  }
  if ((uVar12 & 2) != 0) {
    uVar12 = uVar12 & 0xfffffffd;
    if (7 < uStack_70) {
      pvVar2 = (void *)CONCAT62(uStack_86,local_88);
      pvVar10 = pvVar2;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar10);
    }
    local_78 = 0;
    uStack_70 = 7;
    local_88 = 0;
  }
  if (((uVar12 & 1) != 0) && (uVar12 = uVar12 & 0xfffffffe, 7 < local_50)) {
    pvVar10 = local_68[0];
    if ((0xfff < local_50 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)local_68[0] + -8),
       0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
  }
  if ((!bVar3) && (uVar1 != 0)) {
    do {
      plVar8 = (longlong *)param_1[5];
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x50))(plVar8,1);
      }
      param_1[5] = 0;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1,param_2,uVar13);
      param_1[5] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
LAB_18000b2e9:
        bVar3 = false;
      }
      else {
        pwVar6 = (wint_t *)(**(code **)(*plVar8 + 0x20))(plVar8,local_68);
        local_98 = uVar12 | 4;
        puVar7 = FUN_18000a2a0((undefined8 *)&local_88,pwVar6);
        uVar12 = uVar12 | 0xc;
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (param_3[lVar5] != 0);
        puVar14 = puVar7;
        if (7 < (ulonglong)puVar7[3]) {
          puVar14 = (undefined8 *)*puVar7;
        }
        lVar11 = puVar7[2];
        if (lVar11 != lVar5) goto LAB_18000b2e9;
        if (lVar11 != 0) {
          psVar9 = param_3;
          do {
            if (*(short *)((longlong)psVar9 + ((longlong)puVar14 - (longlong)param_3)) != *psVar9)
            goto LAB_18000b2e9;
            psVar9 = psVar9 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        bVar3 = true;
      }
      if ((uVar12 & 8) != 0) {
        uVar12 = uVar12 & 0xfffffff7;
        if (7 < uStack_70) {
          pvVar2 = (void *)CONCAT62(uStack_86,local_88);
          pvVar10 = pvVar2;
          if ((0xfff < uStack_70 * 2 + 2) &&
             (pvVar10 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar10);
        }
        local_78 = 0;
        uStack_70 = 7;
        local_88 = 0;
      }
      if (((uVar12 & 4) != 0) && (uVar12 = uVar12 & 0xfffffffb, 7 < local_50)) {
        pvVar10 = local_68[0];
        if ((0xfff < local_50 * 2 + 2) &&
           (pvVar10 = *(void **)((longlong)local_68[0] + -8),
           0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar10);
      }
    } while ((!bVar3) && (uVar13 = uVar13 + 1, uVar13 < uVar1));
  }
LAB_18000b3a6:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_c8);
  return;
}




void FUN_18000b3e0(longlong *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_88;
  longlong *local_80;
  uint local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_60 = 0xfffffffffffffffe;
  local_48 = DAT_180014008 ^ (ulonglong)auStack_b8;
  uVar8 = 0;
  lVar7 = param_1[4];
  bVar9 = *(short *)(lVar7 + 2) != 0;
  do {
    if (!bVar9) {
LAB_18000b580:
      __security_check_cookie(local_48 ^ (ulonglong)auStack_b8);
      return;
    }
    uVar2 = *(uint *)(lVar7 + 4 + (ulonglong)uVar8 * 4);
    local_58 = 0;
    local_50 = 0;
    if (((0xffffffde < uVar2 - 0x20) || (*(uint *)(param_2 + 0x48) <= uVar2)) || ((uVar2 & 7) != 0))
    goto LAB_18000b580;
    local_80 = (longlong *)(ulonglong)(uVar2 + 0x1000);
    puVar5 = (undefined8 *)(param_2 + 0x1028);
    cVar1 = (**(code **)(param_2 + 0x1030))(*puVar5,&local_80,0);
    if (cVar1 == '\0') goto LAB_18000b580;
    local_88 = 1;
    cVar1 = (**(code **)(param_2 + 0x1038))(*puVar5,&local_58,0xc);
    if (cVar1 == '\0') goto LAB_18000b580;
    local_74 = local_58;
    local_6c = local_50;
    local_78 = uVar2;
    local_68 = puVar5;
    if ((puVar5 == (undefined8 *)0x0) || (-1 < (int)local_58)) goto LAB_18000b580;
    uVar4 = FUN_18000afb0(param_1);
    puVar5 = FUN_180005ff0((int *)&local_78,param_2,uVar4,0);
    local_98 = 0;
    plVar6 = (longlong *)
             __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::SubKeyList::RTTI_Type_Descriptor);
    local_80 = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_18000b580;
    uVar2 = (**(code **)(*plVar6 + 0x68))(plVar6);
    if (param_3 < uVar2) {
      lVar7 = (**(code **)(*plVar6 + 0x58))(plVar6,param_2);
      if (lVar7 != 0) {
        *(uint *)(lVar7 + 0x28) = param_3;
        (**(code **)(*plVar6 + 0x50))(plVar6,1);
        goto LAB_18000b580;
      }
    }
    else {
      iVar3 = (**(code **)(*plVar6 + 0x68))(plVar6);
      param_3 = param_3 - iVar3;
    }
    (**(code **)(*plVar6 + 0x50))(plVar6,1);
    uVar8 = uVar8 + 1;
    lVar7 = param_1[4];
    bVar9 = uVar8 < *(ushort *)(lVar7 + 2);
  } while( true );
}




void FUN_18000b5a0(longlong *param_1,longlong param_2,uint param_3,undefined1 *param_4)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char local_98 [4];
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 *local_60;
  ulonglong local_58;
  
  local_88 = 0xfffffffffffffffe;
  local_58 = DAT_180014008 ^ (ulonglong)auStack_c8;
  *param_4 = 0;
  uVar9 = 0;
  lVar8 = param_1[4];
  if (*(short *)(lVar8 + 2) != 0) {
    do {
      uVar10 = (uint)uVar9;
      uVar3 = *(uint *)(lVar8 + 4 + uVar9 * 4);
      local_80 = 0;
      local_78 = 0;
      if (((0xffffffde < uVar3 - 0x20) || (*(uint *)(param_2 + 0x48) <= uVar3)) ||
         ((uVar3 & 7) != 0)) break;
      local_90 = (longlong *)(ulonglong)(uVar3 + 0x1000);
      puVar6 = (undefined8 *)(param_2 + 0x1028);
      cVar2 = (**(code **)(param_2 + 0x1030))(*puVar6,&local_90,0);
      if (cVar2 == '\0') break;
      local_94 = 1;
      cVar2 = (**(code **)(param_2 + 0x1038))(*puVar6,&local_80,0xc);
      if (cVar2 == '\0') break;
      local_6c = local_80;
      local_64 = local_78;
      local_70 = uVar3;
      local_60 = puVar6;
      if ((puVar6 == (undefined8 *)0x0) || (-1 < (int)local_80)) break;
      uVar5 = FUN_18000afb0(param_1);
      puVar6 = FUN_180005ff0((int *)&local_70,param_2,uVar5,0);
      local_a8 = 0;
      plVar7 = (longlong *)
               __RTDynamicCast(puVar6,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::SubKeyList::RTTI_Type_Descriptor);
      local_90 = plVar7;
      if (plVar7 == (longlong *)0x0) break;
      uVar3 = (**(code **)(*plVar7 + 0x68))(plVar7);
      if (param_3 < uVar3) {
        local_98[0] = '\0';
        (**(code **)(*plVar7 + 0x60))(plVar7,param_2,param_3,local_98);
        if (local_98[0] != '\0') {
          *(short *)(param_1[4] + 2) = *(short *)(param_1[4] + 2) + -1;
          lVar8 = param_1[4];
          uVar1 = *(ushort *)(lVar8 + 2);
          if (uVar1 == 0) {
            FUN_180007700(param_2,&local_70,*(uint *)(param_1 + 1));
            if (((local_70 == 0xffffffff) || (local_60 == (undefined8 *)0x0)) ||
               (-1 < (int)local_6c)) {
              (**(code **)(*plVar7 + 0x50))(plVar7,1);
              goto LAB_18000b814;
            }
            FUN_1800064e0(&local_70,param_2);
            *param_4 = 1;
          }
          else {
            if (uVar10 < uVar1) {
              memmove((void *)(lVar8 + 4 + uVar9 * 4),
                      (void *)(lVar8 + ((ulonglong)(uVar10 + 1) + 1) * 4),
                      (ulonglong)(uVar1 - uVar10) << 2);
            }
            (**(code **)(*param_1 + 0x40))(param_1,param_2);
          }
        }
        (**(code **)(*plVar7 + 0x50))(plVar7,1);
        break;
      }
      iVar4 = (**(code **)(*plVar7 + 0x68))();
      param_3 = param_3 - iVar4;
      (**(code **)(*plVar7 + 0x50))(plVar7,1);
      uVar9 = (ulonglong)(uVar10 + 1);
      lVar8 = param_1[4];
    } while (uVar10 + 1 < (uint)*(ushort *)(lVar8 + 2));
  }
  plVar7 = (longlong *)param_1[5];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x50))(plVar7,1);
  }
  param_1[5] = 0;
LAB_18000b814:
  __security_check_cookie(local_58 ^ (ulonglong)auStack_c8);
  return;
}




longlong FUN_18000b840(longlong *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint local_28;
  int local_24;
  longlong local_18;
  
  if (param_3 < *(ushort *)(param_1[4] + 2)) {
    FUN_180007700(param_2,&local_28,*(uint *)(param_1[4] + 4 + (ulonglong)param_3 * 4));
    if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
      uVar1 = FUN_18000afb0(param_1);
      puVar2 = FUN_180005ff0((int *)&local_28,param_2,uVar1,0);
      lVar3 = __RTDynamicCast(puVar2,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Key::RTTI_Type_Descriptor,0);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x28) = param_3;
        return lVar3;
      }
    }
  }
  return 0;
}




void FUN_18000b900(longlong *param_1,longlong param_2,uint param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180014008 ^ (ulonglong)auStack_58;
  *param_4 = 0;
  lVar1 = param_1[4];
  if (param_3 < *(ushort *)(lVar1 + 2)) {
    uVar3 = *(ushort *)(lVar1 + 2) - 1;
    *(ushort *)(lVar1 + 2) = uVar3;
    if (uVar3 == 0) {
      FUN_180007700(param_2,&local_38,*(uint *)(param_1 + 1));
      if (((local_38 == 0xffffffff) || (local_28 == 0)) || (-1 < local_34)) goto LAB_18000b9d0;
      FUN_1800064e0(&local_38,param_2);
      *param_4 = 1;
    }
    else {
      if (param_3 < uVar3) {
        memmove((void *)(lVar1 + ((ulonglong)param_3 + 1) * 4),
                (void *)(lVar1 + ((ulonglong)(param_3 + 1) + 1) * 4),
                (ulonglong)(uVar3 - param_3) << 2);
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_2);
    }
    plVar2 = (longlong *)param_1[5];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,1);
    }
    param_1[5] = 0;
  }
LAB_18000b9d0:
  __security_check_cookie(local_20 ^ (ulonglong)auStack_58);
  return;
}




longlong FUN_18000b9f0(longlong *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint local_28;
  int local_24;
  longlong local_18;
  
  if (param_3 < *(ushort *)(param_1[4] + 2)) {
    FUN_180007700(param_2,&local_28,*(uint *)(param_1[4] + 4 + (ulonglong)param_3 * 8));
    if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
      uVar1 = FUN_18000afb0(param_1);
      puVar2 = FUN_180005ff0((int *)&local_28,param_2,uVar1,0);
      lVar3 = __RTDynamicCast(puVar2,0,&RegLib::Node::RTTI_Type_Descriptor,
                              &RegLib::Key::RTTI_Type_Descriptor,0);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x28) = param_3;
        return lVar3;
      }
    }
  }
  return 0;
}




void FUN_18000bab0(longlong *param_1,longlong param_2,uint param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_180014008 ^ (ulonglong)auStack_58;
  *param_4 = 0;
  lVar1 = param_1[4];
  if (param_3 < *(ushort *)(lVar1 + 2)) {
    uVar3 = *(ushort *)(lVar1 + 2) - 1;
    *(ushort *)(lVar1 + 2) = uVar3;
    if (uVar3 == 0) {
      FUN_180007700(param_2,&local_38,*(uint *)(param_1 + 1));
      if (((local_38 == 0xffffffff) || (local_28 == 0)) || (-1 < local_34)) goto LAB_18000bb86;
      FUN_1800064e0(&local_38,param_2);
      *param_4 = 1;
    }
    else {
      if (param_3 < uVar3) {
        memmove((void *)((ulonglong)param_3 * 8 + 4 + lVar1),
                (void *)((ulonglong)(param_3 + 1) * 8 + 4 + lVar1),(ulonglong)(uVar3 - param_3) << 3
               );
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_2);
    }
    plVar2 = (longlong *)param_1[5];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,1);
    }
    param_1[5] = 0;
  }
LAB_18000bb86:
  __security_check_cookie(local_20 ^ (ulonglong)auStack_58);
  return;
}




undefined8 * FUN_18000bba0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = RegLib::SubValList::vftable;
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[5] = 0;
  }
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_18000bc20(undefined8 param_1,longlong *param_2)

{
  param_2[3] = 7;
  param_2[2] = 0;
  *(undefined2 *)param_2 = 0;
  FUN_180007140(param_2,L"SubValList",10);
  return param_2;
}




void FUN_18000bc60(longlong *param_1,undefined8 param_2,short *param_3)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  wint_t *pwVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  short *psVar9;
  void *pvVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong uStack_70;
  void *local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_180014008 ^ (ulonglong)auStack_c8;
  uVar13 = 0;
  local_98 = 0;
  uVar4 = (**(code **)(*param_1 + 8))();
  local_a8 = 0;
  lVar5 = __RTDynamicCast(uVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                          &RegLib::Key::RTTI_Type_Descriptor);
  uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 0x24);
  if (uVar1 == 0) goto LAB_18000bf86;
  plVar8 = (longlong *)param_1[5];
  uVar12 = uVar13;
  if (plVar8 == (longlong *)0x0) {
LAB_18000bd59:
    bVar3 = false;
  }
  else {
    pwVar6 = (wint_t *)(**(code **)(*plVar8 + 0x20))(plVar8,local_68);
    local_98 = 1;
    puVar7 = FUN_18000a2a0((undefined8 *)&local_88,pwVar6);
    uVar12 = 3;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    puVar14 = puVar7;
    if (7 < (ulonglong)puVar7[3]) {
      puVar14 = (undefined8 *)*puVar7;
    }
    lVar11 = puVar7[2];
    if (lVar11 != lVar5) goto LAB_18000bd59;
    if (lVar11 != 0) {
      psVar9 = param_3;
      do {
        if (*(short *)(((longlong)puVar14 - (longlong)param_3) + (longlong)psVar9) != *psVar9)
        goto LAB_18000bd59;
        psVar9 = psVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    bVar3 = true;
  }
  if ((uVar12 & 2) != 0) {
    uVar12 = uVar12 & 0xfffffffd;
    if (7 < uStack_70) {
      pvVar2 = (void *)CONCAT62(uStack_86,local_88);
      pvVar10 = pvVar2;
      if ((0xfff < uStack_70 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar10);
    }
    local_78 = 0;
    uStack_70 = 7;
    local_88 = 0;
  }
  if (((uVar12 & 1) != 0) && (uVar12 = uVar12 & 0xfffffffe, 7 < local_50)) {
    pvVar10 = local_68[0];
    if ((0xfff < local_50 * 2 + 2) &&
       (pvVar10 = *(void **)((longlong)local_68[0] + -8),
       0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
  }
  if ((!bVar3) && (uVar1 != 0)) {
    do {
      plVar8 = (longlong *)param_1[5];
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x50))(plVar8,1);
      }
      param_1[5] = 0;
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1,param_2,uVar13);
      param_1[5] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
LAB_18000bec9:
        bVar3 = false;
      }
      else {
        pwVar6 = (wint_t *)(**(code **)(*plVar8 + 0x20))(plVar8,local_68);
        local_98 = uVar12 | 4;
        puVar7 = FUN_18000a2a0((undefined8 *)&local_88,pwVar6);
        uVar12 = uVar12 | 0xc;
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (param_3[lVar5] != 0);
        puVar14 = puVar7;
        if (7 < (ulonglong)puVar7[3]) {
          puVar14 = (undefined8 *)*puVar7;
        }
        lVar11 = puVar7[2];
        if (lVar11 != lVar5) goto LAB_18000bec9;
        if (lVar11 != 0) {
          psVar9 = param_3;
          do {
            if (*(short *)((longlong)psVar9 + ((longlong)puVar14 - (longlong)param_3)) != *psVar9)
            goto LAB_18000bec9;
            psVar9 = psVar9 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        bVar3 = true;
      }
      if ((uVar12 & 8) != 0) {
        uVar12 = uVar12 & 0xfffffff7;
        if (7 < uStack_70) {
          pvVar2 = (void *)CONCAT62(uStack_86,local_88);
          pvVar10 = pvVar2;
          if ((0xfff < uStack_70 * 2 + 2) &&
             (pvVar10 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar10);
        }
        local_78 = 0;
        uStack_70 = 7;
        local_88 = 0;
      }
      if (((uVar12 & 4) != 0) && (uVar12 = uVar12 & 0xfffffffb, 7 < local_50)) {
        pvVar10 = local_68[0];
        if ((0xfff < local_50 * 2 + 2) &&
           (pvVar10 = *(void **)((longlong)local_68[0] + -8),
           0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar10);
      }
    } while ((!bVar3) && (uVar13 = uVar13 + 1, uVar13 < uVar1));
  }
LAB_18000bf86:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_c8);
  return;
}




longlong FUN_18000bfc0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  FUN_180007700(param_2,&local_28,*(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_3 * 4))
  ;
  if (((local_28 != 0xffffffff) && (local_18 != 0)) && (local_24 < 0)) {
    puVar1 = FUN_180005ff0((int *)&local_28,param_2,param_1,0);
    lVar2 = __RTDynamicCast(puVar1,0,&RegLib::Node::RTTI_Type_Descriptor,
                            &RegLib::Val::RTTI_Type_Descriptor,0);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x20) = param_3;
      return lVar2;
    }
  }
  return 0;
}




undefined8 * FUN_18000c060(undefined8 *param_1,uint param_2)

{
  *param_1 = RegLib::Node::vftable;
  free((void *)param_1[3]);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




longlong * FUN_18000c0b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar5;
  ulonglong uVar4;
  
  uVar4 = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x28) + 2);
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x10) & 1) == 0) {
    uVar3 = uVar3 >> 1;
  }
  uVar5 = (uint)uVar3;
  FUN_180009a00(param_2,(ulonglong)uVar5);
  if (uVar5 != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
        uVar3 = *(ushort *)(lVar1 + 0x14 + uVar4 * 2);
      }
      else {
        uVar3 = (ushort)*(byte *)(uVar4 + 0x14 + lVar1);
      }
      plVar2 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        plVar2 = (longlong *)*param_2;
      }
      *(ushort *)((longlong)plVar2 + uVar4 * 2) = uVar3;
      uVar3 = (short)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar5);
  }
  return param_2;
}




undefined1 FUN_18000c160(longlong param_1,longlong param_2,void *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  uint local_20;
  int local_1c;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar1 = *(uint *)(lVar2 + 4);
  uVar3 = uVar1 + 0x80000000;
  if (uVar1 < 0x80000000) {
    uVar3 = uVar1;
  }
  if (uVar3 <= param_4) {
    if (0x7fffffff < uVar1) {
      memcpy(param_3,(void *)(lVar2 + 8),(ulonglong)uVar3);
      return 1;
    }
    FUN_180007700(param_2,&local_20,*(uint *)(lVar2 + 8));
    if (((local_20 != 0xffffffff) && (local_10 != 0)) && (local_1c < 0)) {
      if ((*(uint *)(param_2 + 0x38) < 4) || (iVar7 = 3, 0x7fffc026 < uVar3 - 0x3fd9)) {
        iVar7 = 2;
      }
      puVar5 = FUN_180005ff0((int *)&local_20,param_2,param_1,iVar7);
      plVar6 = (longlong *)
               __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::Data::RTTI_Type_Descriptor,0);
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,param_2,param_3,(ulonglong)uVar3);
        (**(code **)(*plVar6 + 0x50))(plVar6,1);
        return uVar4;
      }
    }
  }
  return 0;
}




void FUN_18000c290(longlong *param_1,longlong param_2,void *param_3,uint param_4)

{
  uint uVar1;
  ulonglong _Size;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  longlong local_48;
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_180014008 ^ (ulonglong)auStack_98;
  _Size = (ulonglong)param_4;
  lVar6 = param_1[5];
  uVar1 = *(uint *)(lVar6 + 4);
  if (0x7fffffff < uVar1) {
    if (uVar1 + 0x80000000 < param_4) {
      if (param_4 < 5) {
        memcpy((void *)(lVar6 + 8),param_3,_Size);
        FUN_18000c880(param_1,param_2,param_4);
        *(uint *)(param_1[5] + 4) = param_4 + 0x80000000;
      }
      else {
        iVar3 = FUN_18000a6d0(lVar6,param_2,param_3,param_4);
        if (iVar3 == 0) goto LAB_18000c45e;
        *(uint *)(param_1[5] + 4) = param_4;
        *(int *)(param_1[5] + 8) = iVar3;
        plVar4 = (longlong *)FUN_18000afb0(param_1);
        if (*(uint *)(plVar4[4] + 0x40) < param_4) {
          *(uint *)(plVar4[4] + 0x40) = param_4;
          (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
        }
        *(uint *)(param_1[5] + 4) = param_4;
      }
    }
    else {
      memcpy((void *)(lVar6 + 8),param_3,_Size);
      *(uint *)(param_1[5] + 4) = param_4 + 0x80000000;
    }
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    goto LAB_18000c45e;
  }
  if (uVar1 < param_4) {
    FUN_180007700(param_2,&local_58,*(uint *)(lVar6 + 8));
    if (((local_58 == 0xffffffff) || (local_48 == 0)) ||
       ((-1 < (int)local_54 || ((3 < *(uint *)(param_2 + 0x38) && (uVar1 - 0x3fd9 < 0x7fffc027))))))
    goto LAB_18000c45e;
    if ((int)local_54 < 0) {
      local_54 = -local_54;
    }
    if (local_54 < param_4 + 4) {
      iVar3 = FUN_18000a6d0((ulonglong)local_54,param_2,param_3,param_4);
      if (iVar3 == 0) goto LAB_18000c45e;
      *(int *)(param_1[5] + 8) = iVar3;
      FUN_1800064e0(&local_58,param_2);
    }
    else {
      puVar5 = FUN_180005ff0((int *)&local_58,param_2,param_1,2);
      local_78 = 0;
      plVar4 = (longlong *)
               __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::Data::RTTI_Type_Descriptor);
      local_68 = plVar4;
      if (plVar4 == (longlong *)0x0) goto LAB_18000c45e;
      cVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3,_Size);
      if (cVar2 == '\0') {
        lVar6 = *plVar4;
        goto LAB_18000c459;
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      (**(code **)(*plVar4 + 0x50))(plVar4,1);
    }
    FUN_18000c880(param_1,param_2,param_4);
    *(uint *)(param_1[5] + 4) = param_4;
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
  }
  else {
    if (param_4 < uVar1) {
      *(uint *)(lVar6 + 4) = param_4;
      (**(code **)(*param_1 + 0x40))(param_1);
      lVar6 = param_1[5];
    }
    FUN_180007700(param_2,&local_58,*(uint *)(lVar6 + 8));
    if (((local_58 == 0xffffffff) || (local_48 == 0)) || (-1 < (int)local_54)) goto LAB_18000c45e;
    if ((*(uint *)(param_2 + 0x38) < 4) || (iVar3 = 3, 0x7fffc026 < uVar1 - 0x3fd9)) {
      iVar3 = 2;
    }
    puVar5 = FUN_180005ff0((int *)&local_58,param_2,param_1,iVar3);
    local_78 = 0;
    plVar4 = (longlong *)
             __RTDynamicCast(puVar5,0,&RegLib::Node::RTTI_Type_Descriptor,
                             &RegLib::Data::RTTI_Type_Descriptor);
    local_68 = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_18000c45e;
    cVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3,_Size);
    if (cVar2 != '\0') {
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      (**(code **)(*plVar4 + 0x50))(plVar4,1);
      goto LAB_18000c45e;
    }
    lVar6 = *plVar4;
LAB_18000c459:
    (**(code **)(lVar6 + 0x50))(plVar4,1);
  }
LAB_18000c45e:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_98);
  return;
}




void FUN_18000c5e0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  uint local_48;
  longlong local_44;
  undefined4 local_3c;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_68 = 0xfffffffffffffffe;
  local_30 = DAT_180014008 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1[5] + 4);
  if (uVar1 < 0x80000000) {
    FUN_180007700(param_2,(uint *)&local_60,*(uint *)(param_1[5] + 8));
    if ((((uint)local_60 != 0xffffffff) && (local_50 != 0)) && (local_60 < 0)) {
      if ((*(uint *)(param_2 + 0x38) < 4) || (iVar9 = 3, 0x7fffc026 < uVar1 - 0x3fd9)) {
        iVar9 = 2;
      }
      puVar4 = FUN_180005ff0((int *)&local_60,param_2,param_1,iVar9);
      local_88 = 0;
      plVar5 = (longlong *)
               __RTDynamicCast(puVar4,0,&RegLib::Node::RTTI_Type_Descriptor,
                               &RegLib::Data::RTTI_Type_Descriptor);
      local_70 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
        (**(code **)(*plVar5 + 0x50))(plVar5,1);
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 1);
  local_60 = 0;
  local_58 = 0;
  if (((0xffffffde < uVar1 - 0x20) || (*(uint *)(param_2 + 0x48) <= uVar1)) || ((uVar1 & 7) != 0))
  goto LAB_18000c852;
  local_70 = (longlong *)(ulonglong)(uVar1 + 0x1000);
  puVar4 = (undefined8 *)(param_2 + 0x1028);
  cVar3 = (**(code **)(param_2 + 0x1030))(*puVar4,&local_70,0);
  if (cVar3 == '\0') goto LAB_18000c852;
  local_78[0] = 1;
  cVar3 = (**(code **)(param_2 + 0x1038))(*puVar4,&local_60,0xc,local_78);
  if (cVar3 == '\0') goto LAB_18000c852;
  local_44 = local_60;
  local_3c = local_58;
  local_48 = uVar1;
  local_38 = puVar4;
  if ((puVar4 == (undefined8 *)0x0) || (-1 < (int)(uint)local_60)) goto LAB_18000c852;
  FUN_1800064e0(&local_48,param_2);
  plVar6 = (longlong *)FUN_18000afb0(param_1);
  uVar1 = *(uint *)(param_1 + 4);
  plVar5 = (longlong *)plVar6[7];
  uVar11 = *(int *)(plVar6[4] + 0x24) - 1;
  if (uVar11 == 0) {
    FUN_180007700(param_2,(uint *)&local_60,*(uint *)(plVar5 + 1));
    if ((((uint)local_60 != 0xffffffff) && (local_50 != 0)) && (local_60 < 0)) {
      FUN_1800064e0((uint *)&local_60,param_2);
      goto LAB_18000c806;
    }
  }
  else {
    if (uVar1 < uVar11) {
      lVar8 = (ulonglong)uVar1 * 4;
      lVar7 = (ulonglong)(uVar1 + 1) << 2;
      uVar10 = (ulonglong)(uVar11 - uVar1);
      do {
        *(undefined4 *)(lVar8 + plVar5[4]) = *(undefined4 *)(lVar7 + plVar5[4]);
        lVar7 = lVar7 + 4;
        lVar8 = lVar8 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    (**(code **)(*plVar5 + 0x40))(plVar5,param_2);
LAB_18000c806:
    plVar2 = (longlong *)plVar5[5];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,1);
    }
    plVar5[5] = 0;
  }
  *(uint *)(plVar6[4] + 0x24) = uVar11;
  if (uVar11 == 0) {
    *(undefined4 *)(plVar6[4] + 0x28) = 0xffffffff;
    *(undefined4 *)(plVar6[4] + 0x3c) = 0;
    *(undefined4 *)(plVar6[4] + 0x40) = 0;
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
LAB_18000c852:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_a8);
  return;
}




void FUN_18000c880(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18000afb0(param_1);
  if (*(uint *)(plVar1[4] + 0x40) < param_3) {
    *(uint *)(plVar1[4] + 0x40) = param_3;
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  }
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180014008) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    FUN_18000cfd0();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18000cfb0();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




undefined8 * FUN_18000c940(undefined8 *param_1,ulonglong param_2)

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
  HKEY__ *pHVar12;
  undefined7 uVar13;
  
  if (param_2 == 0) {
    pHVar12 = (HKEY__ *)CONCAT71((int7)((ulonglong)param_1 >> 8),param_3 != (void *)0x0);
    if (DAT_180014340 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_180014340 = DAT_180014340 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_1800148e0 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c(pHVar12);
      FUN_18000d0e4();
      FID_conflict__RTC_Initialize();
      DAT_1800148e0 = 0;
      __scrt_dllmain_uninitialize_critical();
      uVar13 = (undefined7)((ulonglong)pHVar12 >> 8);
      __scrt_release_startup_lock((char)uVar8);
      cVar5 = __scrt_uninitialize_crt(CONCAT71(uVar13,param_3 != (void *)0x0),'\0');
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
    if (DAT_1800148e0 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_1800148e0 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_18000d0d4();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_18000f210,&DAT_18000f218);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_18000f200,&DAT_18000f208);
        DAT_1800148e0 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_18000d498();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_180014340 = DAT_180014340 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000cc2c) */
/* WARNING: Removing unreachable block (ram,0x00018000cbbb) */
/* WARNING: Removing unreachable block (ram,0x00018000cc6f) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_180014340 < 1)) {
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
                    /* WARNING: Could not recover jumptable at 0x00018000cd09. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x18000cd3a;
  capture_previous_context((PCONTEXT)&DAT_1800143f0);
  _DAT_180014360 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_180014488 = puVar3 + 0x40;
  _DAT_180014470 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_180014350 = 0xc0000409;
  _DAT_180014354 = 1;
  _DAT_180014368 = 1;
  DAT_180014370 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180014008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180014000;
  *(undefined8 *)(puVar3 + -8) = 0x18000cddc;
  DAT_1800144e8 = _DAT_180014360;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_18000f258);
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




undefined8 * FUN_18000ce60(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000cea0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000cec0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_18000cf00(undefined8 *param_1)

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




undefined8 * FUN_18000cf6c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000cfb0(void)

{
  undefined8 local_28 [5];
  
  FUN_18000cea0(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180012ee8);
}




void FUN_18000cfd0(void)

{
  undefined8 local_28 [5];
  
  FUN_18000cf00(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180012f70);
}




char * FUN_18000cff0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
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
  
  if (DAT_180014008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_180014008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_180014008 == 0x2b992ddfa232) {
      DAT_180014008 = 0x2b992ddfa233;
    }
  }
  DAT_180014000 = ~DAT_180014008;
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




void FUN_18000d0d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1800148c0);
  return;
}




void FUN_18000d0e4(void)

{
  __std_type_info_destroy_list(&DAT_1800148c0);
  return;
}




undefined * FUN_18000d0f0(void)

{
  return &DAT_1800148d0;
}




undefined * FUN_18000d0f8(void)

{
  return &DAT_1800148d8;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_18000d0f0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_18000d0f8();
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
LAB_18000d14a:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_1800148e8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_1800148e8;
        pvVar1 = DAT_1800148e8;
      }
      DAT_1800148e8 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_18000d14a;
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
    uVar3 = FUN_18000d7ec();
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
  
  uVar1 = FUN_18000d2d4(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_18000d880();
  if (cVar1 != '\0') {
    cVar1 = FUN_18000d880();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18000d880();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_18000d880();
  FUN_18000d880();
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

void __scrt_dllmain_uninitialize_c(HKEY__ *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  long lVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_1800148f8);
    return;
  }
  lVar2 = RegAPI::RegFlushKey(param_1);
  if (lVar2 == 0) {
    _cexit();
  }
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_critical
   
   Library: Visual Studio 2017 Release */

void __scrt_dllmain_uninitialize_critical(void)

{
  FUN_18000d880();
  FUN_18000d880();
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
    DAT_1800148f0 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_18000d880();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000d880();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000d880();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000d2d4(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_1800148f1 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180014008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180014008;
      _DAT_1800148f8 = in_RAX;
      uRam0000000180014900 = in_RAX;
      _DAT_180014908 = in_RAX;
      _DAT_180014910 = in_RAX;
      uRam0000000180014918 = in_RAX;
      _DAT_180014920 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1800148f8);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180014910), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1800148f1 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x00018000d43a) */
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
       param_1 - 0x180000000U < uVar1)) goto LAB_18000d423;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_18000d423:
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
    DAT_1800148e8 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1800148f0 == '\0') || (param_2 == '\0')) {
    FUN_18000d880();
    FUN_18000d880();
  }
  return 1;
}




undefined * FUN_18000d498(void)

{
  return &DAT_180014938;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000d4a0(void)

{
  _DAT_180014928 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x18000d4db;
  FUN_18000d4a0();
  *(undefined8 *)(puVar4 + -8) = 0x18000d4ec;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x18000d4f6;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x18000d510;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x18000d551;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x18000d583;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x18000d5a5;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x18000d5c6;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x18000d5d1;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x18000d5e1;
    FUN_18000d4a0();
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
  
  for (puVar1 = &DAT_180010fc8; puVar1 < &DAT_180010fc8; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180010fd8; puVar1 < &DAT_180010fd8; puVar1 = puVar1 + 1) {
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




/* WARNING: Removing unreachable block (ram,0x00018000d73e) */
/* WARNING: Removing unreachable block (ram,0x00018000d6bc) */
/* WARNING: Removing unreachable block (ram,0x00018000d697) */
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
  
  DAT_18001401c = 2;
  _DAT_180014018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_180014020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18001492c = DAT_18001492c | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18001492c = DAT_18001492c | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_180014018 = 2;
    DAT_18001401c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18001401c = 0xe;
      _DAT_180014018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_180014018 = 5;
        DAT_18001401c = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_18000d7ec(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180014030 != 0;
}




undefined1 FUN_18000d880(void)

{
  return 1;
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
  
                    /* WARNING: Could not recover jumptable at 0x00018000da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Unwind_18000da20(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000da30(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x38));
  return;
}




undefined * Catch_All_18000da4d(void)

{
  return &DAT_180001681;
}




void Unwind_18000da70(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x38));
  return;
}




void Unwind_18000da80(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_18000da8c(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0xa0));
  return;
}




void Unwind_18000da98(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000daa4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_18000dab0(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_18000dabc(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18000dad0(undefined8 param_1,longlong param_2)

{
  FUN_1800059b0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000dae0(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18000daf0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x78),param_2,param_3,param_4);
  return;
}




void Unwind_18000dafc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x80),param_2,param_3,param_4);
  return;
}




void Unwind_18000db08(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x88));
  return;
}




undefined * Catch_All_18000db14(void)

{
  return &DAT_1800026de;
}




void Unwind_18000db2f(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18000db40(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18000db4c(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x60));
  return;
}




undefined * Catch_All_18000db58(void)

{
  return &DAT_18000307c;
}




void Unwind_18000db73(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_18000db80(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_18000db8c(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x60));
  return;
}




undefined * Catch_All_18000db98(void)

{
  return &DAT_1800039b0;
}




void Unwind_18000dbb3(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_18000dbc0(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x68));
  return;
}




void Unwind_18000dbcc(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x88));
  return;
}




undefined * Catch_All_18000dbd8(void)

{
  return &DAT_180003f2c;
}




void Unwind_18000dbf3(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000dc00(undefined8 param_1,longlong param_2)

{
  FUN_1800059b0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000dc0c(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x48));
  return;
}




undefined * Catch_All_18000dc29(void)

{
  return &DAT_1800044f9;
}




void Unwind_18000dc50(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_18000dc60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000dc6c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000dc80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000dc8c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_18000dc98(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_18000dcb0(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x48));
  return;
}




void Unwind_18000dcbc(undefined8 param_1,longlong param_2)

{
  FUN_1800059b0((longlong *)(param_2 + 0x68));
  return;
}




undefined * Catch_All_18000dcd0(void)

{
  return &DAT_180006079;
}




undefined * Catch_All_18000dceb(void)

{
  return &DAT_1800061c5;
}




undefined * Catch_All_18000dd06(void)

{
  return &DAT_18000623d;
}




undefined * Catch_All_18000dd21(void)

{
  return &DAT_1800062b1;
}




undefined * Catch_All_18000dd3c(void)

{
  return &DAT_1800062fa;
}




undefined * Catch_All_18000dd57(void)

{
  return &DAT_180006340;
}




undefined * Catch_All_18000dd72(void)

{
  return &DAT_180006386;
}




undefined * Catch_All_18000dd8d(void)

{
  return &DAT_1800063d0;
}




undefined * Catch_All_18000dda8(void)

{
  return &DAT_180006414;
}




undefined * Catch_All_18000ddc3(void)

{
  return &DAT_180006454;
}




undefined * Catch_All_18000ddde(void)

{
  return &DAT_180006494;
}




undefined8 Catch_All_18000ddf9(void)

{
  return 0x1800061b0;
}




void Unwind_18000de20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x28),param_2,param_3,param_4);
  return;
}




void Unwind_18000de2c(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000de40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000de4c(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000de58(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000de70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000de7c(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_18000de90(undefined8 param_1,longlong param_2)

{
  FUN_180009c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_18000de9c(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x1048));
  return;
}




void Unwind_18000deb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180005940(*(longlong **)(param_2 + 0x48));
  }
  return;
}




void Unwind_18000dee0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000deec(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000df00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000df10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x58),param_2,param_3,param_4);
  return;
}




void Unwind_18000df1c(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18000df28(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_18000df34(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_18000df40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_18000df4c(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_18000df60(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_18000df6c(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x38));
  return;
}




undefined * Catch_All_18000df80(void)

{
  return &DAT_180008f68;
}




undefined * Catch_All_18000df9b(void)

{
  return &DAT_180008ff2;
}




void Unwind_18000dfb6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x38),param_2,param_3,param_4);
  return;
}




void Unwind_18000dfd0(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000dfdc(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000dff0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_18000dffc(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000e008(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000e014(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_18000e020(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    FUN_180005940(*(longlong **)(param_2 + 0x68));
  }
  return;
}




void Unwind_18000e046(undefined8 param_1,longlong param_2)

{
  FUN_18000a100((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18000e052(undefined8 param_1,longlong param_2)

{
  FUN_180005940((longlong *)(param_2 + 0x78));
  return;
}




void Unwind_18000e060(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180005940(*(longlong **)(param_2 + 0x50));
  }
  return;
}




void Unwind_18000e090(undefined8 param_1,longlong param_2)

{
  FUN_1800059b0((longlong *)(param_2 + 0x90));
  return;
}




void Unwind_18000e0a0(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_18000e0ac(undefined8 param_1,longlong param_2)

{
  FUN_180005e10((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_18000e0c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18000e0cc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180005dd0((longlong *)(param_2 + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_18000e0e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180005940((longlong *)(param_2 + 0x60));
  }
  return;
}




void Unwind_18000e106(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    FUN_180005940((longlong *)(param_2 + 0x60));
  }
  return;
}




void Unwind_18000e130(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_18000e140(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000e14c(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_18000e160(undefined8 param_1,longlong param_2)

{
  FUN_1800072d0((longlong *)(param_2 + 0x38));
  return;
}




void FUN_18000e183(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_18000e19f(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}



