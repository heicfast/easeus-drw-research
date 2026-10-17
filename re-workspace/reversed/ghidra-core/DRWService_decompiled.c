
void FUN_140001140(longlong *param_1)

{
  undefined8 local_18 [2];
  
  FUN_140001780(param_1,local_18,*(longlong **)*param_1,(longlong *)*param_1);
  free((void *)*param_1);
  return;
}




undefined8 * FUN_140001170(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *_Src;
  
  _Dst = (void *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  _Src = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  if (uVar2 < 0x10) {
    uVar3 = _Src[1];
    uVar6 = 0xf;
    *param_1 = *_Src;
    param_1[1] = uVar3;
  }
  else {
    uVar6 = uVar2 | 0xf;
    if (0x7fffffffffffffff < uVar6) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        _Dst = operator_new(uVar1);
      }
    }
    else {
      uVar5 = uVar6 + 0x28;
      if (uVar5 <= uVar1) {
        uVar5 = 0xffffffffffffffff;
      }
      pvVar4 = operator_new(uVar5);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar4;
    }
    *param_1 = _Dst;
    memcpy(_Dst,_Src,uVar2 + 1);
  }
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  return param_1;
}




void FUN_140001260(longlong *param_1)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  longlong *plVar2;
  DWORD dwIndex;
  undefined8 uVar3;
  undefined1 auStackY_1f8 [32];
  undefined4 uStack_194;
  CHAR *local_188;
  undefined8 local_180;
  LPBYTE pBStack_178;
  undefined8 local_170 [2];
  HKEY local_160;
  HKEY local_158;
  DWORD local_150;
  DWORD local_14c;
  DWORD local_148 [4];
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_140008008 ^ (ulonglong)auStackY_1f8;
  dwIndex = 0;
  local_160 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0xffffffff80000002,"SYSTEM\\CurrentControlSet\\Control\\FVEAutoUnlock"
                        ,0,0x20019,&local_160);
  if (LVar1 == 0) {
    local_14c = 0;
    LVar1 = RegQueryInfoKeyA(local_160,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,&local_14c,(LPDWORD)0x0,
                             (LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                             (PFILETIME)0x0);
    if ((LVar1 == 0) && (local_14c != 0)) {
      do {
        local_150 = 0x104;
        memset(local_138,0,0x104);
        RegEnumKeyExA(local_160,dwIndex,local_138,&local_150,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                      (PFILETIME)0x0);
        LVar1 = RegOpenKeyExA(local_160,local_138,0,0x20019,&local_158);
        if (LVar1 == 0) {
          _strupr_s(local_138,0x104);
          lpData = (LPBYTE)operator_new(0x200);
          memset(lpData,0,0x200);
          uVar3 = 0;
          local_150 = 0x200;
          LVar1 = RegQueryValueExA(local_158,"Data",(LPDWORD)0x0,local_148,lpData,&local_150);
          if (LVar1 == 0) {
            local_188 = local_138;
            local_180 = CONCAT44(uStack_194,local_150);
            pBStack_178 = lpData;
            plVar2 = (longlong *)FUN_140001e90(param_1,&local_188);
            FUN_140001f10(param_1,local_170,uVar3,plVar2 + 4,plVar2);
          }
          else {
            free(lpData);
          }
        }
        dwIndex = dwIndex + 1;
      } while (dwIndex < local_14c);
    }
    RegCloseKey(local_160);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_1f8);
  return;
}




void FUN_140001490(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  void *_Memory;
  longlong *_Memory_00;
  
  lVar1 = *param_1;
  _Memory_00 = *(longlong **)(lVar1 + 8);
  lVar4 = lVar1;
  if (*(char *)((longlong)_Memory_00 + 0x19) == '\0') {
    do {
      FUN_140001580(param_1,(longlong *)_Memory_00[2]);
      plVar2 = (longlong *)*_Memory_00;
      if (0xf < (ulonglong)_Memory_00[7]) {
        pvVar3 = (void *)_Memory_00[4];
        _Memory = pvVar3;
        if ((0xfff < _Memory_00[7] + 1U) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      _Memory_00[6] = 0;
      _Memory_00[7] = 0xf;
      *(undefined1 *)(_Memory_00 + 4) = 0;
      free(_Memory_00);
      _Memory_00 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar4 = *param_1;
  }
  *(longlong *)(lVar4 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




void FUN_140001580(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  void *_Memory;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_140001580(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (0xf < (ulonglong)param_2[7]) {
      pvVar3 = (void *)param_2[4];
      _Memory = pvVar3;
      if ((0xfff < param_2[7] + 1U) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_2[6] = 0;
    param_2[7] = 0xf;
    *(undefined1 *)(param_2 + 4) = 0;
    free(param_2);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_2 = plVar2;
  } while( true );
}




longlong * FUN_140001620(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *_Memory;
  void *_Dst;
  ulonglong uVar7;
  
  uVar1 = param_1[3];
  if (param_3 <= uVar1) {
    plVar4 = param_1;
    if (0xf < uVar1) {
      plVar4 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar4,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)plVar4) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff < param_3) {
    FUN_140001dd0();
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  uVar5 = param_3 | 0xf;
  uVar7 = 0x7fffffffffffffff;
  if (((uVar5 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
     (uVar6 = (uVar1 >> 1) + uVar1, uVar7 = uVar5, uVar5 < uVar6)) {
    uVar7 = uVar6;
  }
  uVar5 = uVar7 + 1;
  if (uVar7 == 0xffffffffffffffff) {
    uVar5 = 0xffffffffffffffff;
  }
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = operator_new(uVar5);
    }
  }
  else {
    uVar6 = uVar5 + 0x27;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new(uVar6);
    if (pvVar3 == (void *)0x0) goto LAB_140001765;
    _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)_Dst - 8) = pvVar3;
  }
  param_1[2] = param_3;
  param_1[3] = uVar7;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
  if (0xf < uVar1) {
    pvVar3 = (void *)*param_1;
    _Memory = pvVar3;
    if ((0xfff < uVar1 + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_140001765:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}




undefined8 *
FUN_140001780(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *_Memory;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    FUN_140001490(param_1);
    *param_2 = *(undefined8 *)*param_1;
    return param_2;
  }
  plVar6 = param_3;
  if (param_3 != param_4) {
    do {
      plVar2 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        param_3 = plVar2;
        plVar4 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          param_3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar5 = (longlong *)plVar6[1];
        plVar4 = plVar6;
        while ((param_3 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)param_3[2]))) {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
        }
      }
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        plVar2 = (longlong *)*plVar2;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        while (cVar1 == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar4 = (longlong *)plVar6[1];
        plVar2 = plVar6;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar2 = plVar5;
        }
      }
      plVar6 = FUN_140001940(param_1,plVar6);
      if (0xf < (ulonglong)plVar6[7]) {
        pvVar3 = (void *)plVar6[4];
        _Memory = pvVar3;
        if ((0xfff < plVar6[7] + 1U) &&
           (_Memory = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      plVar6[6] = 0;
      plVar6[7] = 0xf;
      *(undefined1 *)(plVar6 + 4) = 0;
      free(plVar6);
      plVar6 = param_3;
    } while (param_3 != param_4);
  }
  *param_2 = param_3;
  return param_2;
}




void FUN_140001910(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x50);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




longlong * FUN_140001940(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar7 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar5 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar8 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar5[2], plVar5 != param_2)) {
    plVar7[1] = (longlong)plVar5;
    *plVar5 = *param_2;
    plVar7 = plVar5;
    if (plVar5 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar5[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar5;
    }
    else {
      plVar6 = (longlong *)param_2[1];
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar5;
      }
      else {
        plVar6[2] = (longlong)plVar5;
      }
    }
    plVar5[1] = param_2[1];
    lVar2 = plVar5[3];
    *(char *)(plVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar4 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar6 = plVar4;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar6 = (longlong *)plVar8[2];
        plVar5 = plVar8;
        while (plVar4 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar4[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar5 = plVar4;
        }
        *(longlong **)(lVar2 + 0x10) = plVar5;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar7;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar5 = (longlong *)*plVar6;
        if (plVar8 == plVar5) {
          plVar5 = (longlong *)plVar6[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar6;
            }
            plVar5[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
            }
            else {
              puVar3 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar3) {
                *puVar3 = plVar5;
              }
              else {
                puVar3[2] = plVar5;
              }
            }
            *plVar5 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar5;
            plVar5 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                lVar2 = *plVar5;
                *(undefined1 *)(plVar5 + 3) = 0;
                *plVar5 = *(longlong *)(lVar2 + 0x10);
                if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
                  *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar5;
                }
                *(longlong *)(lVar2 + 8) = plVar5[1];
                if (plVar5 == *(longlong **)(*param_1 + 8)) {
                  *(longlong *)(*param_1 + 8) = lVar2;
                }
                else {
                  plVar7 = (longlong *)plVar5[1];
                  if (plVar5 == (longlong *)plVar7[2]) {
                    plVar7[2] = lVar2;
                  }
                  else {
                    *plVar7 = lVar2;
                  }
                }
                *(longlong **)(lVar2 + 0x10) = plVar5;
                plVar5[1] = lVar2;
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              plVar5 = (longlong *)plVar6[2];
              plVar6[2] = *plVar5;
              if (*(char *)(*plVar5 + 0x19) == '\0') {
                *(longlong **)(*plVar5 + 8) = plVar6;
              }
              plVar5[1] = plVar6[1];
              if (plVar6 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar5;
                *plVar5 = (longlong)plVar6;
              }
              else {
                puVar3 = (undefined8 *)plVar6[1];
                if (plVar6 == (longlong *)*puVar3) {
                  *puVar3 = plVar5;
                  *plVar5 = (longlong)plVar6;
                }
                else {
                  puVar3[2] = plVar5;
                  *plVar5 = (longlong)plVar6;
                }
              }
LAB_140001d9f:
              plVar6[1] = (longlong)plVar5;
              break;
            }
LAB_140001c43:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar2 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar2 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
            }
            else {
              plVar5 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar5[2]) {
                plVar5[2] = lVar2;
              }
              else {
                *plVar5 = lVar2;
              }
            }
            *(longlong **)(lVar2 + 0x10) = plVar6;
            plVar6[1] = lVar2;
            plVar5 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) != '\x01') || (*(char *)(*plVar5 + 0x18) != '\x01')) {
              if (*(char *)(*plVar5 + 0x18) == '\x01') {
                *(undefined1 *)(plVar5[2] + 0x18) = 1;
                plVar7 = (longlong *)plVar5[2];
                *(undefined1 *)(plVar5 + 3) = 0;
                plVar5[2] = *plVar7;
                if (*(char *)(*plVar7 + 0x19) == '\0') {
                  *(longlong **)(*plVar7 + 8) = plVar5;
                }
                plVar7[1] = plVar5[1];
                if (plVar5 == *(longlong **)(*param_1 + 8)) {
                  *(longlong **)(*param_1 + 8) = plVar7;
                }
                else {
                  puVar3 = (undefined8 *)plVar5[1];
                  if (plVar5 == (longlong *)*puVar3) {
                    *puVar3 = plVar7;
                  }
                  else {
                    puVar3[2] = plVar7;
                  }
                }
                *plVar7 = (longlong)plVar5;
                plVar5[1] = (longlong)plVar7;
                plVar5 = (longlong *)*plVar6;
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(*plVar5 + 0x18) = 1;
              plVar5 = (longlong *)*plVar6;
              *plVar6 = plVar5[2];
              if (*(char *)(plVar5[2] + 0x19) == '\0') {
                *(longlong **)(plVar5[2] + 8) = plVar6;
              }
              plVar5[1] = plVar6[1];
              if (plVar6 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar5;
              }
              else {
                puVar3 = (undefined8 *)plVar6[1];
                if (plVar6 == (longlong *)puVar3[2]) {
                  puVar3[2] = plVar5;
                }
                else {
                  *puVar3 = plVar5;
                }
              }
              plVar5[2] = (longlong)plVar6;
              goto LAB_140001d9f;
            }
            goto LAB_140001c43;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}




void FUN_140001dd0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 *
FUN_140001df0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_140002500(param_1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_140001df0(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_140001df0(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




longlong FUN_140001e90(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  size_t sVar4;
  
  lVar3 = FUN_1400021b0(param_1);
  *(undefined2 *)(lVar3 + 0x18) = 0;
  pvVar1 = (void *)*param_2;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0xf;
  *(undefined1 *)(lVar3 + 0x20) = 0;
  sVar4 = 0xffffffffffffffff;
  do {
    sVar4 = sVar4 + 1;
  } while (*(char *)((longlong)pvVar1 + sVar4) != '\0');
  FUN_140001620((longlong *)(lVar3 + 0x20),pvVar1,sVar4);
  uVar2 = param_2[2];
  *(undefined8 *)(lVar3 + 0x40) = param_2[1];
  *(undefined8 *)(lVar3 + 0x48) = uVar2;
  return lVar3;
}




undefined8 *
FUN_140001f10(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  void *_Memory;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 in_stack_ffffffffffffff98;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_5;
  plVar12 = (longlong *)*param_1;
  bVar10 = 1;
  local_50 = plVar12;
  local_48 = param_1;
  if (*(char *)(plVar12[1] + 0x19) == '\0') {
    uVar2 = param_4[2];
    plVar9 = (longlong *)plVar12[1];
    do {
      plVar12 = plVar9;
      plVar9 = plVar12 + 4;
      if (0xf < (ulonglong)plVar12[7]) {
        plVar9 = (longlong *)plVar12[4];
      }
      puVar7 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar7 = (undefined8 *)*param_4;
      }
      uVar3 = plVar12[6];
      uVar11 = uVar2;
      if (uVar3 < uVar2) {
        uVar11 = uVar3;
      }
      uVar6 = memcmp(puVar7,plVar9,uVar11);
      if (uVar6 == 0) {
        if (uVar2 < uVar3) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar3 < uVar2);
        }
      }
      bVar10 = (byte)(uVar6 >> 0x1f);
      if ((int)uVar6 < 0) {
        plVar9 = (longlong *)*plVar12;
      }
      else {
        plVar9 = (longlong *)plVar12[2];
      }
    } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
  }
  plVar9 = plVar12;
  if (bVar10 != 0) {
    if (plVar12 == (longlong *)*local_50) {
      puVar7 = FUN_140002250(local_48,&local_50,'\x01',plVar12,in_stack_ffffffffffffff98,param_5);
      *param_2 = *puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
      plVar9 = (longlong *)*plVar12;
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar9[2] + 0x19);
        plVar8 = (longlong *)plVar9[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar8[2] + 0x19);
          plVar9 = plVar8;
          plVar8 = (longlong *)plVar8[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar12[1] + 0x19);
        plVar8 = (longlong *)plVar12[1];
        plVar9 = plVar12;
        while ((plVar5 = plVar8, cVar1 == '\0' && (plVar9 == (longlong *)*plVar5))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar8 = (longlong *)plVar5[1];
          plVar9 = plVar5;
        }
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          plVar9 = plVar5;
        }
      }
    }
    else {
      plVar9 = (longlong *)plVar12[2];
    }
  }
  puVar7 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar7 = (undefined8 *)*param_4;
  }
  plVar8 = plVar9 + 4;
  if (0xf < (ulonglong)plVar9[7]) {
    plVar8 = (longlong *)plVar9[4];
  }
  uVar2 = param_4[2];
  uVar3 = plVar9[6];
  uVar11 = uVar3;
  if (uVar2 < uVar3) {
    uVar11 = uVar2;
  }
  uVar6 = memcmp(plVar8,puVar7,uVar11);
  if (uVar6 == 0) {
    if (uVar3 < uVar2) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(uVar2 < uVar3);
    }
  }
  if ((int)uVar6 < 0) {
    puVar7 = FUN_140002250(local_48,&local_50,bVar10,plVar12,in_stack_ffffffffffffff98,param_5);
    *param_2 = *puVar7;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (0xf < (ulonglong)param_5[7]) {
      pvVar4 = (void *)param_5[4];
      _Memory = pvVar4;
      if ((0xfff < param_5[7] + 1U) &&
         (_Memory = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    param_5[6] = 0;
    param_5[7] = 0xf;
    *(undefined1 *)(param_5 + 4) = 0;
    free(param_5);
    *param_2 = plVar9;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_1400021a0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1400021b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_1400021e0(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x38)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x20);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x38) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  free(param_2);
  return;
}




undefined8 *
FUN_140002250(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x333333333333331 < (ulonglong)param_1[1]) {
    FUN_1400021e0(0x333333333333332,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_1400022d9;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_1400022d9;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_1400022d9:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar9 = (longlong *)plVar8[1];
    plVar7 = plVar8 + 1;
    plVar10 = plVar9 + 1;
    lVar5 = *(longlong *)plVar9[1];
    if (plVar9 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar9[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar9[2];
        if (plVar8 == plVar2) {
          plVar9[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar9;
          }
          plVar2[1] = *plVar10;
          if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar9;
            *plVar10 = (longlong)plVar2;
            plVar8 = plVar9;
            plVar9 = plVar2;
            plVar7 = plVar10;
          }
          else {
            plVar8 = (longlong *)*plVar10;
            if (plVar9 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
            else {
              plVar8[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
          }
        }
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar9 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar9[2]) {
            plVar9[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar9 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_1400024c5;
      }
LAB_1400023f7:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_1400023f7;
      plVar2 = (longlong *)*plVar9;
      plVar6 = plVar9;
      if (plVar8 == plVar2) {
        *plVar9 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar9;
        }
        plVar2[1] = *plVar10;
        if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar10;
          if (plVar9 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar9;
        *plVar10 = (longlong)plVar2;
        plVar6 = plVar2;
        plVar8 = plVar9;
        plVar7 = plVar10;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(*plVar7 + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_1400024c5:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}




longlong FUN_140002500(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1400021b0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_140001170((undefined8 *)(lVar1 + 0x20),param_2);
  return lVar1;
}




void FUN_140002550(void)

{
  BOOL BVar1;
  SC_HANDLE pSVar2;
  SC_HANDLE pSVar3;
  undefined1 auStackY_5a8 [32];
  CHAR *local_538 [2];
  CHAR local_528 [272];
  CHAR local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_140008008 ^ (ulonglong)auStackY_5a8;
  pSVar2 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
  if (pSVar2 != (SC_HANDLE)0x0) {
    pSVar3 = OpenServiceA(pSVar2,"Read FVE Server",1);
    if (pSVar3 != (SC_HANDLE)0x0) {
      CloseServiceHandle(pSVar3);
    }
    CloseServiceHandle(pSVar2);
    if (pSVar3 != (SC_HANDLE)0x0) {
      FUN_1400027b0();
      pSVar2 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
      if (pSVar2 != (SC_HANDLE)0x0) {
        pSVar3 = OpenServiceA(pSVar2,"Read FVE Server",1);
        if (pSVar3 != (SC_HANDLE)0x0) {
          CloseServiceHandle(pSVar3);
        }
        CloseServiceHandle(pSVar2);
        if (pSVar3 != (SC_HANDLE)0x0) {
          OutputDebugStringA("Service already installed");
          goto LAB_140002786;
        }
      }
    }
  }
  pSVar2 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
  if (pSVar2 == (SC_HANDLE)0x0) {
    OutputDebugStringA("OpenSCManager failed");
  }
  else {
    GetModuleFileNameA((HMODULE)0x0,local_528,0x104);
    pSVar3 = CreateServiceA(pSVar2,"Read FVE Server","Read FVE Server",0xf01ff,0x10,2,1,local_528,
                            (LPCSTR)0x0,(LPDWORD)0x0,(LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0);
    if (pSVar3 == (SC_HANDLE)0x0) {
      CloseServiceHandle(pSVar2);
      OutputDebugStringA("CreateService failed");
    }
    else {
      local_538[0] = (CHAR *)0x0;
      lstrcpyA(local_418,"DRW read registry key value.");
      local_538[0] = local_418;
      ChangeServiceConfig2A(pSVar3,1,local_538);
      BVar1 = StartServiceA(pSVar3,0,(LPCSTR *)0x0);
      if (BVar1 == 0) {
        CloseServiceHandle(pSVar3);
        CloseServiceHandle(pSVar2);
        OutputDebugStringA("StartService failed");
      }
      else {
        CloseServiceHandle(pSVar3);
        CloseServiceHandle(pSVar2);
        OutputDebugStringA("Install service succeed");
      }
    }
  }
LAB_140002786:
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_5a8);
  return;
}




void FUN_1400027b0(void)

{
  BOOL BVar1;
  SC_HANDLE pSVar2;
  SC_HANDLE pSVar3;
  char *lpOutputString;
  undefined1 auStack_58 [32];
  _SERVICE_STATUS local_38;
  ulonglong local_18;
  
  local_18 = DAT_140008008 ^ (ulonglong)auStack_58;
  pSVar2 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
  if (pSVar2 != (SC_HANDLE)0x0) {
    pSVar3 = OpenServiceA(pSVar2,"Read FVE Server",1);
    if (pSVar3 != (SC_HANDLE)0x0) {
      CloseServiceHandle(pSVar3);
    }
    CloseServiceHandle(pSVar2);
    if (pSVar3 != (SC_HANDLE)0x0) {
      pSVar2 = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xf003f);
      if (pSVar2 == (SC_HANDLE)0x0) {
        lpOutputString = "OpenSCManager failed";
      }
      else {
        pSVar3 = OpenServiceA(pSVar2,"Read FVE Server",0x10024);
        if (pSVar3 == (SC_HANDLE)0x0) {
          CloseServiceHandle(pSVar2);
          lpOutputString = "OpenService failed";
        }
        else {
          BVar1 = QueryServiceStatus(pSVar3,&local_38);
          if (BVar1 == 0) {
            CloseServiceHandle(pSVar3);
            CloseServiceHandle(pSVar2);
            lpOutputString = "QueryServiceStatus failed";
          }
          else if ((local_38.dwCurrentState == 4) &&
                  (BVar1 = ControlService(pSVar3,1,&local_38), BVar1 == 0)) {
            CloseServiceHandle(pSVar3);
            CloseServiceHandle(pSVar2);
            lpOutputString = "Stop Service failed";
          }
          else {
            if (local_38.dwCurrentState != 1) goto LAB_140002853;
            BVar1 = DeleteService(pSVar3);
            CloseServiceHandle(pSVar3);
            CloseServiceHandle(pSVar2);
            if (BVar1 != 0) {
              OutputDebugStringA("Uninstall service succeed");
              goto LAB_140002853;
            }
            lpOutputString = "Uninstall service failed";
          }
        }
      }
      OutputDebugStringA(lpOutputString);
      goto LAB_140002853;
    }
  }
  OutputDebugStringA("Service not installed");
LAB_140002853:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002970(int param_1)

{
  _DAT_1400086c8 = 0x30;
  if (param_1 == 1) {
    _DAT_1400086dc = DAT_140008034;
    _DAT_1400086e0 = 0;
    DAT_140008034 = DAT_140008034 + 1;
    _DAT_1400086d8 = 0;
    DAT_1400086cc = 3;
    _DAT_1400086d0 = 1;
    SetServiceStatus(DAT_1400086f0,(LPSERVICE_STATUS)&DAT_1400086c8);
    OutputDebugStringA("Service stopping...");
                    /* WARNING: Could not recover jumptable at 0x000140002a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetEvent(DAT_1400086e8);
    return;
  }
  _DAT_1400086e0 = 0;
  if (DAT_1400086cc == 2) {
    _DAT_1400086d0 = 0;
  }
  else {
    _DAT_1400086d0 = 1;
    if ((DAT_1400086cc == 4) || (DAT_1400086cc == 1)) {
      _DAT_1400086dc = 0;
      goto LAB_1400029d4;
    }
  }
  _DAT_1400086dc = DAT_140008034;
  DAT_140008034 = DAT_140008034 + 1;
LAB_1400029d4:
  _DAT_1400086d8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001400029ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetServiceStatus(DAT_1400086f0,(LPSERVICE_STATUS)&DAT_1400086c8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002a60(void)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  BOOL BVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  undefined4 *_Dst;
  undefined8 *puVar10;
  HANDLE hNamedPipe;
  char *****pppppcVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *_Dst_00;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8;
  longlong local_a0 [2];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  DWORD local_70 [2];
  char ****local_68 [2];
  rsize_t local_58;
  ulonglong local_50;
  uint local_48;
  void *local_40;
  ulonglong local_38;
  
  local_a0[1] = 0xfffffffffffffffe;
  local_38 = DAT_140008008 ^ (ulonglong)auStackY_e8;
  DAT_1400086f0 = RegisterServiceCtrlHandlerA("Read FVE Server",FUN_140002970);
  if (DAT_1400086f0 == (SERVICE_STATUS_HANDLE)0x0) {
    pbVar9 = FUN_140003260((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                           "RegisterServiceCtrlHandler failed");
    std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
              (pbVar9,(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)&LAB_140003430);
    OutputDebugStringA("RegisterServiceCtrlHandler failed");
    goto LAB_1400030d7;
  }
  pbVar9 = FUN_140003260((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                         "RegisterServiceCtrlHandler succeed");
  std::basic_ostream<char,struct_std::char_traits<char>_>::operator<<
            (pbVar9,(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                     *)&LAB_140003430);
  OutputDebugStringA("RegisterServiceCtrlHandler succeed");
  _DAT_1400086c8 = 0x30;
  DAT_1400086cc = 2;
  _DAT_1400086d0 = 0;
  _DAT_1400086d4 = 0;
  _DAT_1400086d8 = 0;
  _DAT_1400086dc = CONCAT44(3000,DAT_140008034);
  DAT_140008034 = DAT_140008034 + 1;
  SetServiceStatus(DAT_1400086f0,(LPSERVICE_STATUS)&DAT_1400086c8);
  OutputDebugStringA("Service starting...");
  DAT_1400086e8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  _DAT_1400086c8 = 0x30;
  _DAT_1400086d0 = 1;
  _DAT_1400086d4 = 0;
  _DAT_1400086dc = 0;
  _DAT_1400086d8 = 0;
  if (DAT_1400086e8 == (HANDLE)0x0) {
    DAT_1400086cc = 1;
    SetServiceStatus(DAT_1400086f0,(LPSERVICE_STATUS)&DAT_1400086c8);
    OutputDebugStringA("Service stopped");
    goto LAB_1400030d7;
  }
  lVar14 = 4;
  DAT_1400086cc = 4;
  SetServiceStatus(DAT_1400086f0,(LPSERVICE_STATUS)&DAT_1400086c8);
  OutputDebugStringA("Service running...");
  _Dst = (undefined4 *)operator_new(0xc800);
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_80 = (longlong *)FUN_140001910();
  FUN_140001260((longlong *)&local_80);
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_90 = (longlong *)FUN_140001910();
  FUN_140001490((longlong *)&local_90);
  plVar12 = local_90;
  puVar10 = FUN_140001df0((longlong *)&local_90,(undefined8 *)local_80[1],local_90,local_a8);
  plVar12[1] = (longlong)puVar10;
  local_88 = local_78;
  plVar12 = (longlong *)local_90[1];
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar12 + 0x19);
    plVar5 = (longlong *)*plVar12;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar12 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *local_90 = (longlong)plVar12;
    lVar2 = *(longlong *)(local_90[1] + 0x10);
    cVar1 = *(char *)(lVar2 + 0x19);
    lVar6 = local_90[1];
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar2 + 0x10) + 0x19);
      lVar6 = lVar2;
      lVar2 = *(longlong *)(lVar2 + 0x10);
    }
    local_90[2] = lVar6;
  }
  else {
    *local_90 = (longlong)local_90;
    local_90[2] = (longlong)local_90;
  }
  BVar8 = WaitNamedPipeA("\\\\.\\Pipe\\DRWBitlocker",10000);
  if (BVar8 != 0) {
    hNamedPipe = CreateFileA("\\\\.\\Pipe\\DRWBitlocker",0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,
                             0x80,(HANDLE)0x0);
    if (hNamedPipe == (HANDLE)0xffffffffffffffff) {
      CloseHandle((HANDLE)0xffffffffffffffff);
    }
    else {
      local_70[0] = 2;
      BVar8 = SetNamedPipeHandleState(hNamedPipe,local_70,(LPDWORD)0x0,(LPDWORD)0x0);
      if (BVar8 == 0) {
        CloseHandle(hNamedPipe);
      }
      else {
        memset(_Dst,0,0xc800);
        plVar5 = local_90;
        local_70[1] = 0;
        *_Dst = (undefined4)local_88;
        plVar12 = (longlong *)*local_90;
        if (plVar12 != local_90) {
          local_a0[0] = 0x138 - (longlong)_Dst;
          _Dst_00 = _Dst + 0xf;
          iVar13 = 0;
          do {
            FUN_140001170(local_68,plVar12 + 4);
            pppppcVar11 = local_68;
            if (0xf < local_50) {
              pppppcVar11 = (char *****)local_68[0];
            }
            strncpy_s((char *)((longlong)_Dst + lVar14),0x32,(char *)pppppcVar11,local_58);
            _Dst_00[-1] = local_48;
            uVar4 = 0x100;
            if (local_48 < 0x100) {
              uVar4 = local_48;
            }
            memcpy(_Dst_00,local_40,(ulonglong)uVar4);
            lVar14 = lVar14 + 0x138;
            _Dst_00 = _Dst_00 + 0x4e;
            pppppcVar11 = (char *****)local_68[0];
            if (0xc7ff < (ulonglong)((longlong)_Dst + lVar14 + local_a0[0])) {
              if (0xf < local_50) {
                if ((0xfff < local_50 + 1) &&
                   (pppppcVar11 = (char *****)local_68[0][-1],
                   0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pppppcVar11)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
LAB_140002f3a:
                free(pppppcVar11);
              }
              break;
            }
            if (100 < iVar13) {
              if (0xf < local_50) {
                if ((0xfff < local_50 + 1) &&
                   (pppppcVar11 = (char *****)local_68[0][-1],
                   0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)local_68[0][-1])))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                goto LAB_140002f3a;
              }
              break;
            }
            if (0xf < local_50) {
              if ((0xfff < local_50 + 1) &&
                 (pppppcVar11 = (char *****)local_68[0][-1],
                 0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pppppcVar11)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pppppcVar11);
            }
            plVar3 = (longlong *)plVar12[2];
            if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar3 + 0x19);
              plVar12 = plVar3;
              plVar3 = (longlong *)*plVar3;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar3 + 0x19);
                plVar12 = plVar3;
                plVar3 = (longlong *)*plVar3;
              }
            }
            else {
              cVar1 = *(char *)(plVar12[1] + 0x19);
              plVar7 = (longlong *)plVar12[1];
              plVar3 = plVar12;
              while ((plVar12 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar12[2]))) {
                cVar1 = *(char *)(plVar12[1] + 0x19);
                plVar7 = (longlong *)plVar12[1];
                plVar3 = plVar12;
              }
            }
            iVar13 = iVar13 + 1;
          } while (plVar12 != plVar5);
          if (lVar14 == 0) goto LAB_140002f5f;
        }
        WriteFile(hNamedPipe,_Dst,(DWORD)lVar14,local_70 + 1,(LPOVERLAPPED)0x0);
      }
    }
  }
LAB_140002f5f:
  free(_Dst);
  WaitForSingleObject(DAT_1400086e8,0xffffffff);
  _DAT_1400086c8 = 0x30;
  DAT_1400086cc = 1;
  _DAT_1400086d0 = 1;
  _DAT_1400086d4 = 0;
  _DAT_1400086dc = 0;
  _DAT_1400086d8 = 0;
  SetServiceStatus(DAT_1400086f0,(LPSERVICE_STATUS)&DAT_1400086c8);
  OutputDebugStringA("Service stopped");
  FUN_140001780((longlong *)&local_90,local_a0,(longlong *)*local_90,local_90);
  free(local_90);
  plVar5 = local_80;
  plVar12 = (longlong *)*local_80;
  while (plVar12 != plVar5) {
    FUN_140001170(local_68,plVar12 + 4);
    free(local_40);
    if (0xf < local_50) {
      pppppcVar11 = (char *****)local_68[0];
      if ((0xfff < local_50 + 1) &&
         (pppppcVar11 = (char *****)local_68[0][-1],
         0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pppppcVar11)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pppppcVar11);
    }
    plVar3 = (longlong *)plVar12[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar12 = plVar3;
      plVar3 = (longlong *)*plVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar12 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
    }
    else {
      cVar1 = *(char *)(plVar12[1] + 0x19);
      plVar7 = (longlong *)plVar12[1];
      plVar3 = plVar12;
      while ((plVar12 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar12[2]))) {
        cVar1 = *(char *)(plVar12[1] + 0x19);
        plVar7 = (longlong *)plVar12[1];
        plVar3 = plVar12;
      }
    }
  }
  FUN_140001490((longlong *)&local_80);
  FUN_140001780((longlong *)&local_80,local_a0,(longlong *)*local_80,local_80);
  free(local_80);
LAB_1400030d7:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_e8);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_140003110(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  BOOL BVar2;
  LPSTR pCVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  ulonglong uStack_40;
  SERVICE_TABLE_ENTRYA local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140008008 ^ (ulonglong)auStack_78;
  iVar1 = _stricmp(param_3,"/install");
  if (iVar1 == 0) {
    FUN_140002550();
    __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
    return;
  }
  iVar1 = _stricmp(param_3,"/uninstall");
  if (iVar1 != 0) {
    local_58[0]._0_1_ = 0;
    local_48 = 0;
    uStack_40 = 0xf;
    FUN_140001620(local_58,"Read FVE Server",0xf);
    local_38.lpServiceName = (LPSTR)CONCAT71(local_58[0]._1_7_,(undefined1)local_58[0]);
    pCVar3 = (LPSTR)local_58;
    if (0xf < uStack_40) {
      pCVar3 = local_38.lpServiceName;
      if ((0xfff < uStack_40 + 1) &&
         (pCVar3 = *(LPSTR *)(local_38.lpServiceName + 0xfffffffffffffff8),
         (LPSTR)0x1f < local_38.lpServiceName + (-8 - (longlong)pCVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pCVar3);
      pCVar3 = local_38.lpServiceName;
    }
    local_38.lpServiceName = pCVar3;
    local_38.lpServiceProc = FUN_140002a60;
    local_28 = 0;
    local_20 = 0;
    BVar2 = StartServiceCtrlDispatcherA(&local_38);
    if (BVar2 == 0) {
      FUN_140003260((basic_ostream<char,struct_std::char_traits<char>_> *)cout_exref,
                    "StartServiceCtrlDispatcher failed");
      OutputDebugStringA("StartServiceCtrlDispatcher failed");
    }
    __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
    return;
  }
  FUN_1400027b0();
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}




basic_ostream<char,struct_std::char_traits<char>_> *
FUN_140003260(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  longlong *plVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar2;
  int iVar3;
  __int64 _Var4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (param_2[lVar8] != '\0');
  lVar5 = *(longlong *)param_1;
  lVar7 = *(longlong *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x28);
  if ((lVar7 < 1) || (lVar7 <= lVar8)) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar7 - lVar8;
  }
  plVar1 = *(longlong **)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar5 = *(longlong *)param_1;
  }
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar5 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar5 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x10) == 0) {
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar5 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; 0 < lVar7; lVar7 = lVar7 + -1) {
        iVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_1400033a9;
      }
      lVar5 = *(longlong *)param_1;
    }
    _Var4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar5 + 4) + 0x48),param_2,lVar8);
    if (_Var4 == lVar8) {
      for (; 0 < lVar7; lVar7 = lVar7 + -1) {
        iVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_1400033a9;
      }
    }
    else {
LAB_1400033a9:
      iVar6 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar6 = 4;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar6,false);
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}




void FUN_140003470(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




void FUN_1400034c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}




/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140008008) && ((short)(_StackCookie >> 0x30) == 0)) {
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
    FUN_140003ad0();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_140003ab0();
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}




void FUN_140003570(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(2);
  uVar5 = FUN_140003e70();
  _set_fmode((int)uVar5);
  puVar6 = (undefined4 *)__p__commode();
  uVar5 = FUN_140003e64();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_140003b8c(1);
  if ((char)uVar5 != '\0') {
    FUN_14000410c();
    atexit((_func_5014 *)&LAB_140004148);
    uVar7 = FUN_140003e68();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_140003e78();
      bVar2 = FUN_140003ebc();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140003e64);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140003e64();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_140003e88();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140003e64();
      uVar5 = thunk_FUN_140003e64();
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

int FUN_140003654(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  IMAGE_DOS_HEADER *pIVar7;
  undefined8 unaff_RBX;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = __scrt_initialize_crt(1);
  if ((char)uVar3 == '\0') {
    __scrt_fastfail(7);
  }
  else {
    bVar1 = false;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_140008650 != 1) {
      if (DAT_140008650 == 0) {
        DAT_140008650 = 1;
        iVar2 = _initterm_e(&DAT_140005360,&DAT_140005378);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_140005348);
        DAT_140008650 = 2;
      }
      else {
        bVar1 = true;
      }
      __scrt_release_startup_lock((char)uVar3);
      plVar4 = (longlong *)FUN_140003ec8();
      if ((*plVar4 != 0) &&
         (uVar5 = __scrt_is_nonwritable_in_current_image((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)*plVar4)(0);
      }
      plVar4 = (longlong *)FUN_140003ed0();
      if ((*plVar4 != 0) &&
         (uVar5 = __scrt_is_nonwritable_in_current_image((longlong)plVar4), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar4);
      }
      __scrt_get_show_window_mode();
      pcVar6 = (char *)_get_narrow_winmain_command_line();
      pIVar7 = &IMAGE_DOS_HEADER_140000000;
      iVar2 = FUN_140003110(&IMAGE_DOS_HEADER_140000000,0,pcVar6);
      uVar5 = __scrt_is_managed_app();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)pIVar7 >> 8),1),'\0');
        return iVar2;
      }
      goto LAB_1400037b5;
    }
  }
  __scrt_fastfail(7);
LAB_1400037b5:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}




void entry(void)

{
  __security_init_cookie();
  FUN_140003654();
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
                    /* WARNING: Could not recover jumptable at 0x000140003809. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x14000383a;
  capture_previous_context((PCONTEXT)&DAT_140008180);
  _DAT_1400080f0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140008218 = puVar3 + 0x40;
  _DAT_140008200 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1400080e0 = 0xc0000409;
  _DAT_1400080e4 = 1;
  _DAT_1400080f8 = 1;
  DAT_140008100 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140008008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140008000;
  *(undefined8 *)(puVar3 + -8) = 0x1400038dc;
  DAT_140008278 = _DAT_1400080f0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1400053a0);
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




undefined8 * FUN_140003960(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1400039a0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_1400039c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_140003a00(undefined8 *param_1)

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




undefined8 * FUN_140003a6c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_140003ab0(void)

{
  undefined8 local_28 [5];
  
  FUN_1400039a0(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_1400065c8);
}




void FUN_140003ad0(void)

{
  undefined8 local_28 [5];
  
  FUN_140003a00(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_140006650);
}




char * FUN_140003af0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
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
LAB_140003b32:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_140008658 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_140008658;
        pvVar1 = DAT_140008658;
      }
      DAT_140008658 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_140003b32;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
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
    DAT_140008660 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_140003e88();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_140003e88();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_140003e88();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140003b8c(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_140008661 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_140008008 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_140008008;
      _DAT_140008668 = in_RAX;
      uRam0000000140008670 = in_RAX;
      _DAT_140008678 = in_RAX;
      _DAT_140008680 = in_RAX;
      uRam0000000140008688 = in_RAX;
      _DAT_140008690 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_140008668);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_140008680), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_140008661 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000140003cf2) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_1400001f8; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1400002e8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_140003cdb;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_140003cdb:
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
    DAT_140008658 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_140008660 == '\0') || (param_2 == '\0')) {
    FUN_140003e88();
    FUN_140003e88();
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
  
  bVar2 = (byte)DAT_140008008 & 0x3f;
  if (((DAT_140008008 ^ _DAT_140008668) >> bVar2 | (DAT_140008008 ^ _DAT_140008668) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140008668,_Func);
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
  
  if (DAT_140008008 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_140008008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_140008008 == 0x2b992ddfa232) {
      DAT_140008008 = 0x2b992ddfa233;
    }
  }
  DAT_140008000 = ~DAT_140008008;
  return;
}




undefined8 FUN_140003e64(void)

{
  return 0;
}




undefined8 FUN_140003e68(void)

{
  return 1;
}




undefined8 FUN_140003e70(void)

{
  return 0x4000;
}




void FUN_140003e78(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140003e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1400086a0);
  return;
}




undefined1 FUN_140003e88(void)

{
  return 1;
}




void _guard_check_icall(void)

{
  return;
}




undefined * FUN_140003e90(void)

{
  return &DAT_1400086b0;
}




undefined * FUN_140003e98(void)

{
  return &DAT_1400086b8;
}




void FUN_140003ea0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140003e90();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_140003e98();
  *puVar1 = *puVar1 | 2;
  return;
}




bool FUN_140003ebc(void)

{
  return DAT_140008014 == 0;
}




undefined * FUN_140003ec8(void)

{
  return &DAT_140008700;
}




undefined * FUN_140003ed0(void)

{
  return &DAT_1400086f8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003ed8(void)

{
  _DAT_1400086c0 = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x140003f13;
  FUN_140003ed8();
  *(undefined8 *)(puVar4 + -8) = 0x140003f24;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x140003f2e;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140003f48;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x140003f89;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x140003fbb;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140003fdd;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x140003ffe;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x140004009;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x140004019;
    FUN_140003ed8();
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
  
  memset(&local_78,0,0x68);
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




void FUN_1400040c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001400040cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_1400040d4);
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14000410c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140005f40; puVar1 < &DAT_140005f40; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined8 * FUN_140004184(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00014000427e) */
/* WARNING: Removing unreachable block (ram,0x0001400041fc) */
/* WARNING: Removing unreachable block (ram,0x0001400041d7) */
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
  
  DAT_14000801c = 2;
  _DAT_140008018 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_140008020 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1400086c4 = DAT_1400086c4 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_1400086c4 = DAT_1400086c4 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_140008018 = 2;
    DAT_14000801c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14000801c = 0xe;
      _DAT_140008018 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_140008018 = 5;
        DAT_14000801c = 0x2e;
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
  return DAT_140008030 != 0;
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
  
                    /* WARNING: Could not recover jumptable at 0x000140004520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Catch_All_140004530(undefined8 param_1,longlong param_2)

{
  FUN_140001580(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_All_140004560(undefined8 param_1,longlong param_2)

{
  FUN_1400021a0(param_1,*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1400045cc(undefined8 param_1,longlong param_2)

{
  FUN_140001140((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_1400045e0(undefined8 param_1,longlong param_2)

{
  FUN_1400034c0((longlong *)(param_2 + 0x28));
  return;
}




void Unwind_1400045ec(undefined8 param_1,longlong param_2)

{
  FUN_140003470((longlong *)(param_2 + 0x28));
  return;
}




undefined * Catch_All_1400045f8(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x70) + 4) +
             (longlong)*(longlong **)(param_2 + 0x70)),4,true);
  return &DAT_1400033c7;
}




void FUN_140004630(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}



