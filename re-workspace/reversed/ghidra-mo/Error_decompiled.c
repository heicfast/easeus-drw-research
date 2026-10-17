
undefined1 * FUN_180001000(void)

{
  char *pcVar1;
  uint local_res10 [6];
  
  if (DAT_18000cb20 == (undefined1 *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000cb20 = &DAT_18000ca20;
    pcVar1 = (char *)__std_type_info_name(0x18000c0c8,&DAT_18000d460);
    FUN_180003580(pcVar1,DAT_18000cb20,local_res10);
  }
  return DAT_18000cb20;
}




void FUN_180001060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_180003f50(param_1);
  *(undefined2 *)(lVar3 + 0x18) = 0;
  puVar1 = (undefined8 *)*param_3;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  uVar2 = puVar1[1];
  *(undefined8 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  uVar2 = puVar1[3];
  *(undefined8 *)(lVar3 + 0x30) = puVar1[2];
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  return;
}




longlong * FUN_1800010e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    FUN_180004200();
    pcVar4 = (code *)swi(3);
    plVar14 = (longlong *)(*pcVar4)();
    return plVar14;
  }
  uVar1 = lVar5 + 1;
  uVar8 = param_1[2] - lVar3 >> 3;
  uVar6 = uVar1;
  if ((uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) && (uVar6 = (uVar8 >> 1) + uVar8, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  uVar8 = uVar6 * 8;
  if (uVar6 < 0x2000000000000000) {
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)operator_new(uVar8);
      }
      goto LAB_1800011d5;
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
  }
  uVar9 = uVar8 + 0x27;
  if (uVar9 <= uVar8) {
    uVar9 = 0xffffffffffffffff;
  }
  pvVar7 = operator_new(uVar9);
  if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  plVar14 = (longlong *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
  plVar14[-1] = (longlong)pvVar7;
LAB_1800011d5:
  plVar2 = plVar14 + ((longlong)param_2 - lVar3 >> 3);
  FUN_180001f80(plVar2,(longlong *)*param_3);
  puVar11 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  plVar12 = plVar14;
  if (param_2 != puVar11) {
    FUN_180001d10((undefined8 *)*param_1,param_2,plVar14);
    puVar11 = (undefined8 *)param_1[1];
    puVar10 = param_2;
    plVar12 = plVar2 + 1;
  }
  FUN_180001d10(puVar10,puVar11,plVar12);
  plVar12 = (longlong *)*param_1;
  if (plVar12 != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[1];
    if (plVar12 != plVar13) {
      do {
        if ((longlong *)*plVar12 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar12 + 8))();
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar13);
      plVar12 = (longlong *)*param_1;
    }
    plVar13 = plVar12;
    if ((0xfff < (param_1[2] - (longlong)plVar12 & 0xfffffffffffffff8U)) &&
       (plVar13 = (longlong *)plVar12[-1],
       0x1f < (ulonglong)((longlong)plVar12 + (-8 - (longlong)plVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar13);
  }
  *param_1 = (longlong)plVar14;
  param_1[1] = (longlong)(plVar14 + uVar1);
  param_1[2] = (longlong)(plVar14 + uVar6);
  return plVar2;
}




longlong * FUN_1800012e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  
  lVar14 = *param_1;
  lVar11 = (longlong)param_2 - lVar14;
  lVar4 = param_1[1] - lVar14 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_180004200();
    pcVar3 = (code *)swi(3);
    plVar12 = (longlong *)(*pcVar3)();
    return plVar12;
  }
  uVar1 = lVar4 + 1;
  uVar7 = param_1[2] - lVar14 >> 3;
  uVar5 = uVar1;
  if ((uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar1))
  {
    uVar5 = uVar1;
  }
  uVar7 = uVar5 * 8;
  if (uVar5 < 0x2000000000000000) {
    if (uVar7 < 0x1000) {
      if (uVar7 == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)operator_new(uVar7);
      }
      goto LAB_1800013d5;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
  }
  uVar8 = uVar7 + 0x27;
  if (uVar8 <= uVar7) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar6 = operator_new(uVar8);
  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  plVar12 = (longlong *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
  plVar12[-1] = (longlong)pvVar6;
LAB_1800013d5:
  plVar2 = plVar12 + (lVar11 >> 3);
  FUN_180001e40(param_1,plVar2,param_3,lVar14);
  plVar10 = (longlong *)param_1[1];
  plVar9 = (longlong *)*param_1;
  plVar13 = plVar12;
  if (param_2 != plVar10) {
    FUN_180001d90((longlong *)*param_1,param_2,plVar12);
    plVar10 = (longlong *)param_1[1];
    plVar9 = param_2;
    plVar13 = plVar2 + 1;
  }
  FUN_180001d90(plVar9,plVar10,plVar13);
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[1];
    if (plVar10 != plVar9) {
      do {
        if ((longlong *)*plVar10 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar10 + 8))();
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar9);
      plVar10 = (longlong *)*param_1;
    }
    plVar9 = plVar10;
    if ((0xfff < (param_1[2] - (longlong)plVar10 & 0xfffffffffffffff8U)) &&
       (plVar9 = (longlong *)plVar10[-1],
       0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar9);
  }
  *param_1 = (longlong)plVar12;
  param_1[1] = (longlong)(plVar12 + uVar1);
  param_1[2] = (longlong)(plVar12 + uVar5);
  return plVar2;
}




undefined8 *
FUN_1800014e0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x2e8ba2e8ba2e8b8 < (ulonglong)param_1[1]) {
    FUN_180003fe0(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18000155f;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_18000155f;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_18000155f:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar10 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar10[1];
    plVar8 = plVar10 + 1;
    plVar9 = plVar2 + 1;
    plVar7 = *(longlong **)plVar2[1];
    if (plVar2 == plVar7) {
      plVar7 = (longlong *)((undefined8 *)plVar2[1])[2];
      if ((char)plVar7[3] != '\0') {
        plVar7 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar10 == plVar7) {
          plVar2[2] = *plVar7;
          if (*(char *)(*plVar7 + 0x19) == '\0') {
            *(longlong **)(*plVar7 + 8) = plVar2;
          }
          plVar7[1] = *plVar9;
          plVar6 = plVar7;
          plVar8 = plVar9;
          if (plVar2 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar7;
            *plVar7 = (longlong)plVar2;
            *plVar9 = (longlong)plVar7;
            plVar10 = plVar2;
          }
          else {
            puVar5 = (undefined8 *)*plVar9;
            if (plVar2 == (longlong *)*puVar5) {
              *puVar5 = plVar7;
              *plVar7 = (longlong)plVar2;
              *plVar9 = (longlong)plVar7;
              plVar10 = plVar2;
            }
            else {
              puVar5[2] = plVar7;
              *plVar7 = (longlong)plVar2;
              *plVar9 = (longlong)plVar7;
              plVar10 = plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar9 = (longlong *)*plVar8;
        *plVar8 = plVar9[2];
        if (*(char *)(plVar9[2] + 0x19) == '\0') {
          *(longlong **)(plVar9[2] + 8) = plVar8;
        }
        plVar9[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar9;
          plVar9[2] = (longlong)plVar8;
        }
        else {
          plVar2 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
          else {
            *plVar2 = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
        }
        goto LAB_180001705;
      }
LAB_180001676:
      *(undefined1 *)(plVar2 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if ((char)plVar7[3] == '\0') goto LAB_180001676;
      if (plVar10 == (longlong *)*plVar2) {
        FUN_1800040d0(param_1,plVar2);
        plVar10 = plVar2;
      }
      *(undefined1 *)(plVar10[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar10[1] + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(plVar10[1] + 8);
      plVar9 = (longlong *)plVar8[2];
      plVar8[2] = *plVar9;
      if (*(char *)(*plVar9 + 0x19) == '\0') {
        *(longlong **)(*plVar9 + 8) = plVar8;
      }
      plVar9[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar9;
      }
      else {
        puVar5 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar5) {
          *puVar5 = plVar9;
        }
        else {
          puVar5[2] = plVar9;
        }
      }
      *plVar9 = (longlong)plVar8;
LAB_180001705:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}




undefined8 *
FUN_180001760(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_30 = 0xfffffffffffffffe;
  local_38 = (longlong *)0x0;
  if (param_1[1] == 0) {
    FUN_1800014e0(param_1,param_2,'\x01',(undefined8 *)*param_1,param_4,param_5);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    uVar2 = FUN_1800043c0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      FUN_1800014e0(param_1,param_2,'\x01',param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    puVar5 = (undefined8 *)plVar3[2];
    uVar2 = FUN_1800043c0(puVar5 + 4,param_4);
    if ((int)uVar2 < 0) {
      FUN_1800014e0(param_1,param_2,'\0',puVar5,param_4,param_5);
      return param_2;
    }
  }
  else {
    uVar2 = FUN_1800043c0(param_4,param_3 + 4);
    if ((int)uVar2 < 0) {
      local_38 = param_3;
      plVar3 = FUN_1800027e0((longlong *)&local_38);
      uVar2 = FUN_1800043c0((undefined8 *)(*plVar3 + 0x20),param_4);
      if ((int)uVar2 < 0) {
        if (*(char *)(local_38[2] + 0x19) != '\0') {
          FUN_1800014e0(param_1,param_2,'\0',local_38,param_4,param_5);
          return param_2;
        }
        FUN_1800014e0(param_1,param_2,'\x01',param_3,param_4,param_5);
        return param_2;
      }
    }
    uVar2 = FUN_1800043c0(param_3 + 4,param_4);
    if (((int)uVar2 < 0) &&
       ((lVar1 = *param_1, local_38 = param_3, plVar4 = FUN_180002770((longlong *)&local_38),
        plVar3 = local_38, *plVar4 == lVar1 ||
        (uVar2 = FUN_1800043c0(param_4,local_38 + 4), (int)uVar2 < 0)))) {
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_1800014e0(param_1,param_2,'\0',param_3,param_4,param_5);
        return param_2;
      }
      FUN_1800014e0(param_1,param_2,'\x01',plVar3,param_4,param_5);
      return param_2;
    }
  }
  puVar5 = FUN_180001990(param_1,local_28,'\0',param_4,param_5);
  *param_2 = *puVar5;
  return param_2;
}




undefined8 *
FUN_180001990(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *local_38;
  undefined8 local_30;
  
  uVar7 = 1;
  plVar5 = (longlong *)((longlong *)*param_1)[1];
  plVar6 = (longlong *)*param_1;
  while (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    if (param_3 == '\0') {
      uVar3 = FUN_1800043c0(param_4,plVar5 + 4);
    }
    else {
      uVar3 = FUN_1800043c0(plVar5 + 4,param_4);
      uVar3 = ~uVar3;
    }
    uVar7 = uVar3 >> 0x1f;
    plVar6 = plVar5;
    if ((int)uVar3 < 0) {
      plVar5 = (longlong *)*plVar5;
    }
    else {
      plVar5 = (longlong *)plVar5[2];
    }
  }
  plVar5 = plVar6;
  if ((char)uVar7 != '\0') {
    if (plVar6 == *(longlong **)*param_1) {
      puVar4 = FUN_1800014e0(param_1,&local_38,'\x01',plVar6,param_4,param_5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar6;
      plVar1 = plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar5[2];
        } while (*(char *)(plVar5[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (longlong *)plVar5[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar5 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar1;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  uVar3 = FUN_1800043c0(plVar5 + 4,param_4);
  if ((int)uVar3 < 0) {
    puVar4 = FUN_1800014e0(param_1,&local_38,(char)uVar7,plVar6,param_4,param_5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_38 = param_5 + 4;
    FUN_180004130(param_5 + 8);
    FUN_180002460(param_5 + 4);
    local_30 = 0x58;
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}




void FUN_180001b80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  void *pvVar4;
  void *_Memory;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  pvVar5 = (void *)param_1[1];
  lVar1 = *param_1;
  uVar7 = (longlong)pvVar5 - lVar1;
  uVar3 = param_1[2] - lVar1;
  if (param_2 <= uVar3) {
    if (param_2 <= uVar7) {
      if (param_2 != uVar7) {
        param_1[1] = lVar1 + param_2;
      }
      return;
    }
    memset(pvVar5,0,(lVar1 + param_2) - (longlong)pvVar5);
    param_1[1] = lVar1 + param_2;
    return;
  }
  if (0x7fffffffffffffff < param_2) {
    FUN_180004200();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = param_2;
  if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
     (uVar6 = (uVar3 >> 1) + uVar3, uVar6 < param_2)) {
    uVar6 = param_2;
  }
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = operator_new(uVar6);
    }
  }
  else {
    uVar3 = uVar6 + 0x27;
    if (uVar3 <= uVar6) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new(uVar3);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pvVar5 = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar5 - 8) = pvVar4;
  }
  memset((void *)((longlong)pvVar5 + uVar7),0,
         (param_2 + (longlong)pvVar5) - (longlong)((longlong)pvVar5 + uVar7));
  memmove(pvVar5,(void *)*param_1,param_1[1] - *param_1);
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    _Memory = pvVar4;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar4)) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = (longlong)pvVar5;
  param_1[1] = param_2 + (longlong)pvVar5;
  param_1[2] = (longlong)pvVar5 + uVar6;
  return;
}




longlong * FUN_180001d10(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_180001f80(param_3,(longlong *)*param_1);
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_3;
}




longlong * FUN_180001d90(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    do {
      plVar1 = (longlong *)*param_1;
      *param_3 = 0;
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000c000);
        *param_3 = lVar2;
        if (lVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        else {
          (**(code **)(*plVar1 + 0x10))();
        }
      }
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_3;
}




void FUN_180001e40(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_3;
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)*plVar1)(plVar1,&DAT_18000c000,param_3,param_4,0xfffffffffffffffe);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}




undefined8 * FUN_180001eb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IErrorManager::vftable;
  puVar1 = param_1 + 1;
  *puVar1 = CErrorTrackManager::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = CErrorManager::vftable;
  *puVar1 = CErrorManager::vftable;
  _eh_vector_constructor_iterator_
            (param_1 + 9,0x18,10,(_func_void_void_ptr *)&LAB_180002200,FUN_180002530);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *param_1 = CMomObject<class_CErrorManager>::vftable;
  *puVar1 = CMomObject<class_CErrorManager>::vftable;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}




longlong * FUN_180001f80(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint local_res8 [2];
  
  *param_1 = 0;
  if (param_2 != (longlong *)0x0) {
    if (DAT_18000ce50 == (undefined1 *)0x0) {
      local_res8[0] = 0x100;
      DAT_18000ce50 = &DAT_18000cd50;
      pcVar1 = (char *)__std_type_info_name(0x18000c138,&DAT_18000d460);
      FUN_180003580(pcVar1,DAT_18000ce50,local_res8);
    }
    lVar2 = (**(code **)*param_2)(param_2,DAT_18000ce50);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*param_2 + 0x10))();
      return param_1;
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return param_1;
}




undefined8 * FUN_180002040(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *local_res10;
  
  *param_1 = IErrorModule::vftable;
  param_1[1] = IErrorBase::vftable;
  puVar1 = param_1 + 2;
  *puVar1 = CErrorTrackManager::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = CErrorModule::vftable;
  param_1[1] = CErrorModule::vftable;
  *puVar1 = CErrorModule::vftable;
  local_res10 = puVar1;
  puVar3 = (undefined8 *)FUN_180003620("Thread");
  DAT_18000c470 = puVar1;
  param_1[10] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (DAT_18000cb20 == (undefined1 *)0x0) {
      DAT_18000cb20 = &DAT_18000ca20;
      local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,0x100);
      pcVar4 = (char *)__std_type_info_name(0x18000c0c8,&DAT_18000d460);
      FUN_180003580(pcVar4,DAT_18000cb20,(uint *)&local_res10);
    }
    plVar5 = (longlong *)(**(code **)*puVar3)(puVar3,DAT_18000cb20);
    param_1[10] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
      *(undefined4 *)(param_1 + 9) = uVar2;
    }
  }
  *param_1 = CModuleImpl<class_CErrorModule>::vftable;
  param_1[1] = CModuleImpl<class_CErrorModule>::vftable;
  *puVar1 = CModuleImpl<class_CErrorModule>::vftable;
  *param_1 = CMomObject<class_CModuleImpl<class_CErrorModule>_>::vftable;
  param_1[1] = CMomObject<class_CModuleImpl<class_CErrorModule>_>::vftable;
  *puVar1 = CMomObject<class_CModuleImpl<class_CErrorModule>_>::vftable;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *param_1 = CMomEventObject<class_CModuleImpl<class_CErrorModule>_>::vftable;
  param_1[1] = CMomEventObject<class_CModuleImpl<class_CErrorModule>_>::vftable;
  *puVar1 = CMomEventObject<class_CModuleImpl<class_CErrorModule>_>::vftable;
  puVar3 = param_1 + 0xc;
  *puVar3 = 0;
  param_1[0xd] = 0;
  local_res10 = puVar3;
  uVar6 = FUN_180003f10();
  *puVar3 = uVar6;
  *param_1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CErrorModule>_>_>::
             vftable;
  param_1[1] = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CErrorModule>_>_>::
               vftable;
  *puVar1 = CMomStackObject<class_CMomEventObject<class_CModuleImpl<class_CErrorModule>_>_>::vftable
  ;
  return param_1;
}




/* public: __cdecl IObject::IObject(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::IObject(IObject *this,IObject *param_1)

{
                    /* 0x2220  1  ??0IObject@@QEAA@$$QEAU0@@Z
                       0x2220  2  ??0IObject@@QEAA@AEBU0@@Z
                       0x2220  3  ??0IObject@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




void FUN_180002230(longlong param_1)

{
  FUN_1800025a0((longlong *)(param_1 + 0x30));
  FUN_1800025a0((longlong *)(param_1 + 0x18));
  return;
}




void FUN_180002270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004370((longlong *)(param_1 + 0x60),param_2,param_3,param_4);
  free(*(void **)(param_1 + 0x60));
  FUN_1800025a0((longlong *)(param_1 + 0x30));
  FUN_1800025a0((longlong *)(param_1 + 0x18));
  return;
}




void FUN_1800022e0(longlong param_1)

{
  FUN_1800025a0((longlong *)(param_1 + 0x30));
  FUN_1800025a0((longlong *)(param_1 + 0x18));
  return;
}




void FUN_180002320(longlong param_1)

{
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x48),0x18,10,FUN_180002530);
  FUN_1800025a0((longlong *)(param_1 + 0x28));
  FUN_1800025a0((longlong *)(param_1 + 0x10));
  return;
}




void FUN_180002380(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
  }
  return;
}




void FUN_1800023b0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800023bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 8))();
    return;
  }
  return;
}




void FUN_1800023c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004370(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_1800023f0(undefined8 *param_1)

{
  free((void *)*param_1);
  return;
}




void FUN_180002410(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 8))();
    }
  }
  return;
}




void FUN_180002460(longlong *param_1)

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




void FUN_1800024d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004370(param_1,param_2,param_3,param_4);
  free((void *)*param_1);
  return;
}




void FUN_180002500(longlong *param_1)

{
  FUN_180004130(param_1 + 4);
  FUN_180002460(param_1);
  return;
}




void FUN_180002530(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_1800025a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 8))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar2);
      plVar1 = (longlong *)*param_1;
    }
    plVar2 = plVar1;
    if ((0xfff < (param_1[2] - (longlong)plVar1 & 0xfffffffffffffff8U)) &&
       (plVar2 = (longlong *)plVar1[-1],
       0x1f < (ulonglong)((longlong)plVar1 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_180002650(longlong *param_1)

{
  FUN_180004130(param_1);
  return;
}




void FUN_180002670(longlong param_1)

{
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x48),0x18,10,FUN_180002530);
  FUN_1800025a0((longlong *)(param_1 + 0x28));
  FUN_1800025a0((longlong *)(param_1 + 0x10));
  return;
}




void FUN_1800026d0(longlong param_1)

{
  FUN_1800025a0((longlong *)(param_1 + 0x30));
  FUN_1800025a0((longlong *)(param_1 + 0x18));
  return;
}




void FUN_180002710(longlong param_1)

{
  FUN_1800025a0((longlong *)(param_1 + 0x20));
  FUN_1800025a0((longlong *)(param_1 + 8));
  return;
}




void FUN_180002740(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))();
  return;
}




/* public: struct IObject & __ptr64 __cdecl IObject::operator=(struct IObject && __ptr64) __ptr64 */

IObject * __thiscall IObject::operator=(IObject *this,IObject *param_1)

{
                    /* 0x2760  4  ??4IObject@@QEAAAEAU0@$$QEAU0@@Z
                       0x2760  5  ??4IObject@@QEAAAEAU0@AEBU0@@Z */
  return this;
}




longlong * FUN_180002770(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}




longlong * FUN_1800027e0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
    *param_1 = plVar2[2];
    return param_1;
  }
  lVar3 = *plVar2;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar3 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *param_1 = lVar3;
  }
  else {
    cVar1 = *(char *)(plVar2[1] + 0x19);
    plVar5 = (longlong *)plVar2[1];
    while ((cVar1 == '\0' && (plVar2 == (longlong *)*plVar5))) {
      *param_1 = (longlong)plVar5;
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar2 = plVar5;
      plVar5 = (longlong *)plVar5[1];
    }
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      *param_1 = (longlong)plVar5;
      return param_1;
    }
  }
  return param_1;
}




void * FUN_180002870(void *param_1,uint param_2)

{
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x48),0x18,10,FUN_180002530);
  FUN_1800025a0((longlong *)((longlong)param_1 + 0x28));
  FUN_1800025a0((longlong *)((longlong)param_1 + 0x10));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_1800028f0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong *local_res20;
  
  if (param_3 == 0) {
    FUN_180001f80((longlong *)&local_res20,param_2);
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (*(longlong **)(param_1 + 0x18) == plVar1) {
      FUN_1800010e0((longlong *)(param_1 + 8),plVar1,&local_res20);
    }
    else {
      FUN_180001f80(plVar1,local_res20);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 8;
    }
  }
  else {
    if (param_3 != 1) {
      return;
    }
    FUN_180001f80((longlong *)&local_res20,param_2);
    plVar1 = *(longlong **)(param_1 + 0x28);
    if (*(longlong **)(param_1 + 0x30) == plVar1) {
      FUN_1800010e0((longlong *)(param_1 + 0x20),plVar1,&local_res20);
    }
    else {
      FUN_180001f80(plVar1,local_res20);
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    }
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 8))(local_res20);
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1800029c0(longlong param_1,void *param_2,longlong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  void *_Memory;
  size_t sVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStackY_d8 [32];
  longlong *local_a8 [2];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_70 = 0xfffffffffffffffe;
  local_48 = DAT_18000c018 ^ (ulonglong)auStackY_d8;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  local_90 = param_3;
  FUN_180004220(local_68,param_2,sVar13);
  uVar15 = local_50;
  uVar3 = local_58;
  local_98 = (longlong *)(param_1 + 0x60);
  plVar7 = (longlong *)*local_98;
  puVar4 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  cVar1 = *(char *)(plVar7[1] + 0x19);
  plVar10 = plVar7;
  plVar8 = (longlong *)plVar7[1];
  uVar2 = local_50;
  while (local_a8[0] = plVar10, local_50 = uVar2, cVar1 == '\0') {
    puVar12 = (undefined1 *)local_68;
    if (0xf < uVar15) {
      puVar12 = puVar4;
    }
    plVar10 = plVar8 + 4;
    if (0xf < (ulonglong)plVar8[7]) {
      plVar10 = (longlong *)plVar8[4];
    }
    uVar2 = plVar8[6];
    uVar14 = uVar2;
    if (uVar3 < uVar2) {
      uVar14 = uVar3;
    }
    iVar6 = memcmp(plVar10,puVar12,uVar14);
    if (iVar6 == 0) {
      if (uVar3 <= uVar2) goto LAB_180002a97;
LAB_180002af8:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180002af8;
LAB_180002a97:
      plVar11 = (longlong *)*plVar8;
      plVar7 = plVar8;
    }
    plVar10 = local_a8[0];
    plVar8 = plVar11;
    uVar2 = local_50;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
  }
  sVar13 = 0xffffffffffffffff;
  if (plVar7 != plVar10) {
    plVar10 = plVar7 + 4;
    if (0xf < (ulonglong)plVar7[7]) {
      plVar10 = (longlong *)plVar7[4];
    }
    puVar12 = (undefined1 *)local_68;
    if (0xf < uVar2) {
      puVar12 = puVar4;
    }
    uVar15 = plVar7[6];
    uVar14 = uVar3;
    if (uVar15 < uVar3) {
      uVar14 = uVar15;
    }
    iVar6 = memcmp(puVar12,plVar10,uVar14);
    if (((iVar6 != 0) ||
        ((plVar10 = local_a8[0], uVar15 <= uVar3 && (plVar10 = plVar7, uVar3 <= uVar15)))) &&
       (plVar10 = local_a8[0], -1 < iVar6)) {
      plVar10 = plVar7;
    }
  }
  if (0xf < uVar2) {
    puVar12 = puVar4;
    if ((0xfff < uVar2 + 1) &&
       (puVar12 = *(undefined1 **)(puVar4 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar4 + (-8 - (longlong)puVar12))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar12);
  }
  if (plVar10 != (longlong *)*local_98) goto LAB_180002d2c;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)param_2 + sVar13) != '\0');
  FUN_180004220(local_68,param_2,sVar13);
  uVar3 = local_50;
  uVar2 = local_58;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  plVar7 = (longlong *)*local_98;
  puVar4 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  cVar1 = *(char *)(plVar7[1] + 0x19);
  plVar10 = plVar7;
  plVar8 = (longlong *)plVar7[1];
  plVar11 = local_98;
  while (local_98 = plVar11, cVar1 == '\0') {
    puVar12 = (undefined1 *)local_68;
    if (0xf < uVar3) {
      puVar12 = puVar4;
    }
    plVar11 = plVar8 + 4;
    if (0xf < (ulonglong)plVar8[7]) {
      plVar11 = (longlong *)plVar8[4];
    }
    uVar15 = plVar8[6];
    uVar14 = uVar15;
    if (uVar2 < uVar15) {
      uVar14 = uVar2;
    }
    iVar6 = memcmp(plVar11,puVar12,uVar14);
    if (iVar6 == 0) {
      if (uVar2 <= uVar15) goto LAB_180002c07;
LAB_180002c57:
      plVar11 = (longlong *)plVar8[2];
    }
    else {
      if (iVar6 < 0) goto LAB_180002c57;
LAB_180002c07:
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    plVar8 = plVar11;
    plVar11 = local_98;
  }
  if (plVar10 == plVar7) {
LAB_180002c5f:
    local_a8[0] = local_68;
    plVar7 = (longlong *)FUN_180001060(plVar11,&DAT_180007260,local_a8);
    FUN_180001760(plVar11,local_a8,plVar10,plVar7 + 4,plVar7);
    plVar10 = local_a8[0];
  }
  else {
    plVar7 = plVar10 + 4;
    if (0xf < (ulonglong)plVar10[7]) {
      plVar7 = (longlong *)plVar10[4];
    }
    puVar12 = (undefined1 *)local_68;
    if (0xf < uVar3) {
      puVar12 = puVar4;
    }
    uVar3 = plVar10[6];
    uVar15 = uVar2;
    if (uVar3 < uVar2) {
      uVar15 = uVar3;
    }
    iVar6 = memcmp(puVar12,plVar7,uVar15);
    if (iVar6 == 0) {
      if (uVar2 < uVar3) goto LAB_180002c5f;
    }
    else if (iVar6 < 0) goto LAB_180002c5f;
  }
  plVar7 = plVar10 + 8;
  if (plVar7 != &local_88) {
    FUN_180004130(plVar7);
    *plVar7 = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  FUN_180004130(&local_88);
  if (0xf < local_50) {
    pvVar5 = (void *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
    _Memory = pvVar5;
    if ((0xfff < local_50 + 1) &&
       (_Memory = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  plVar10 = *(longlong **)*plVar11;
LAB_180002d2c:
  plVar7 = local_90;
  local_50 = 0xf;
  local_58 = 0;
  local_68[0]._0_1_ = 0;
  plVar8 = (longlong *)0x0;
  local_a8[0] = (longlong *)0x0;
  if (local_90 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)*local_90)(local_90,&DAT_18000c000);
    local_a8[0] = plVar8;
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    else {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = (longlong *)plVar10[9];
  if ((longlong *)plVar10[10] == plVar7) {
    FUN_1800012e0(plVar10 + 8,plVar7,(longlong *)local_a8);
  }
  else {
    *plVar7 = 0;
    local_90 = plVar7;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)*plVar8)(plVar8,&DAT_18000c000);
      *plVar7 = lVar9;
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      else {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    plVar10[9] = plVar10[9] + 8;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_d8);
  return;
}




void _guard_check_icall(void)

{
  return;
}




undefined4 FUN_180002e20(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x5c);
}




void FUN_180002e28(longlong param_1)

{
  FUN_180002e20(param_1 + -8);
  return;
}




void FUN_180002e34(longlong param_1)

{
  FUN_180002e20(param_1 + -0x10);
  return;
}




undefined4 FUN_180002e40(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  UNLOCK();
  return *(undefined4 *)(param_1 + 0x144);
}




void FUN_180002e50(longlong param_1)

{
  FUN_180002e40(param_1 + -8);
  return;
}




undefined8 FUN_180002e60(void)

{
  return 0;
}




void FUN_180002e64(void)

{
  FUN_180002e60();
  return;
}




void FUN_180002e70(void)

{
  FUN_180002e60();
  return;
}




/* public: unsigned long __cdecl IObject::AddRef(void)const __ptr64 */

ulong __thiscall IObject::AddRef(IObject *this)

{
  ulong uVar1;
  
                    /* 0x2e80  7  ?AddRef@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180002e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return uVar1;
}




undefined8 FUN_180002e90(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_1)(param_2);
  }
  return uVar1;
}




void FUN_180002ec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  plVar1 = (longlong *)(param_1 + 0x60);
  FUN_180004030(plVar1,*(longlong **)(lVar2 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_180002f10(longlong param_1,void *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_70 = 0xfffffffffffffffe;
  local_48 = DAT_18000c018 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  sVar12 = 0xffffffffffffffff;
  do {
    sVar12 = sVar12 + 1;
  } while (*(char *)((longlong)param_2 + sVar12) != '\0');
  local_78 = param_1;
  FUN_180004220(local_68,param_2,sVar12);
  uVar6 = local_50;
  uVar5 = local_58;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  puVar4 = (undefined1 *)CONCAT71(local_68[0]._1_7_,(undefined1)local_68[0]);
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  puVar11 = puVar2;
  puVar10 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    puVar9 = (undefined1 *)local_68;
    if (0xf < uVar6) {
      puVar9 = puVar4;
    }
    puVar8 = puVar10 + 4;
    if (0xf < (ulonglong)puVar10[7]) {
      puVar8 = (undefined8 *)puVar10[4];
    }
    uVar3 = puVar10[6];
    uVar13 = uVar3;
    if (uVar5 < uVar3) {
      uVar13 = uVar5;
    }
    iVar7 = memcmp(puVar8,puVar9,uVar13);
    if (iVar7 == 0) {
      if (uVar5 <= uVar3) goto LAB_180002ff0;
LAB_18000307f:
      puVar8 = (undefined8 *)puVar10[2];
    }
    else {
      if (iVar7 < 0) goto LAB_18000307f;
LAB_180002ff0:
      puVar8 = (undefined8 *)*puVar10;
      puVar11 = puVar10;
    }
    puVar10 = puVar8;
    param_1 = local_78;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar11 != puVar2) {
    puVar10 = puVar11 + 4;
    if (0xf < (ulonglong)puVar11[7]) {
      puVar10 = (undefined8 *)puVar11[4];
    }
    puVar9 = (undefined1 *)local_68;
    if (0xf < uVar6) {
      puVar9 = puVar4;
    }
    uVar3 = puVar11[6];
    uVar13 = uVar5;
    if (uVar3 < uVar5) {
      uVar13 = uVar3;
    }
    iVar7 = memcmp(puVar9,puVar10,uVar13);
    if (iVar7 == 0) {
      if (uVar5 < uVar3) goto LAB_180003044;
      if (uVar5 >= uVar3 && uVar5 != uVar3) goto LAB_180003047;
    }
    if (-1 < iVar7) goto LAB_180003047;
  }
LAB_180003044:
  puVar11 = puVar2;
LAB_180003047:
  if (0xf < uVar6) {
    puVar9 = puVar4;
    if ((0xfff < uVar6 + 1) &&
       (puVar9 = *(undefined1 **)(puVar4 + 0xfffffffffffffff8),
       (undefined1 *)0x1f < puVar4 + (-8 - (longlong)puVar9))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(puVar9);
  }
  local_58 = 0;
  local_50 = 0xf;
  local_68[0]._0_1_ = 0;
  if (puVar11 == *(undefined8 **)(param_1 + 0x60)) {
    *param_3 = 0;
  }
  else {
    *param_3 = (int)((longlong)(puVar11[9] - puVar11[8]) >> 3);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_98);
  return;
}




undefined8 FUN_180003100(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  return uVar1;
}




longlong FUN_180003110(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x138);
  plVar1 = (longlong *)(param_1 + ((longlong)iVar2 + 3) * 0x18);
  if ((ulonglong)(*(longlong *)(param_1 + 8 + ((longlong)iVar2 + 3) * 0x18) - *plVar1) <
      (ulonglong)param_2) {
    FUN_180001b80(plVar1,(ulonglong)param_2);
    iVar2 = *(int *)(param_1 + 0x138);
  }
  iVar2 = iVar2 + 1;
  if (iVar2 == 10) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x138) = iVar2;
  return *plVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_180003170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18000c5c8) && (_Init_thread_header(&DAT_18000c5c8), DAT_18000c5c8 == -1)) {
      FUN_180001eb0((undefined8 *)&DAT_18000c480);
      _DAT_18000c480 = CMomStackObject<class_CErrorManager>::vftable;
      _DAT_18000c488 = CMomStackObject<class_CErrorManager>::vftable;
      atexit(FUN_180006500);
      _Init_thread_footer(&DAT_18000c5c8);
    }
    return (undefined8 *)&DAT_18000c480;
  }
  if (*(int *)(param_1 + 0x40) != -1) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))();
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)operator_new(0x148);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = FUN_180001eb0(puVar2);
      }
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))
                        (*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40),puVar3);
      puVar2 = puVar3;
      if (iVar1 < 0) {
        puVar2 = (undefined8 *)0x0;
        FUN_180002870(puVar3,1);
      }
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_1800032c0(void)

{
  return DAT_18000c478;
}




void FUN_1800032d8(longlong param_1,char *param_2)

{
  thunk_FUN_180003940(param_1 + -8,param_2);
  return;
}




void FUN_1800032e4(longlong param_1,char *param_2)

{
  thunk_FUN_180003940(param_1 + -0x10,param_2);
  return;
}




void FUN_1800032f8(longlong param_1,char *param_2)

{
  thunk_FUN_1800037b0(param_1 + -8,param_2);
  return;
}




/* public: struct IObject * __ptr64 __cdecl IObject::GetInterfaceEx(char const * __ptr64)const
   __ptr64 */

IObject * __thiscall IObject::GetInterfaceEx(IObject *this,char *param_1)

{
  IObject *pIVar1;
  
                    /* 0x3310  8  ?GetInterfaceEx@IObject@@QEBAPEAU1@PEBD@Z */
                    /* WARNING: Could not recover jumptable at 0x000180003313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IObject *)(*(code *)**(undefined8 **)this)();
  return pIVar1;
}




char * FUN_180003320(void)

{
  return "Error";
}




char * FUN_180003330(void)

{
  return "CErrorModule";
}




void FUN_180003338(void)

{
  FUN_180003330();
  return;
}




void FUN_180003344(void)

{
  FUN_180003330();
  return;
}




char * FUN_180003350(void)

{
  return "CErrorManager";
}




void FUN_180003358(void)

{
  FUN_180003350();
  return;
}




undefined * FUN_180003370(void)

{
  int iVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 in_R9;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (DAT_18000c5d0 == (undefined *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 4);
    if ((*piVar4 < DAT_18000c5e0) && (_Init_thread_header(&DAT_18000c5e0), DAT_18000c5e0 == -1)) {
      DAT_18000c5d8 = (undefined8 *)FUN_180003620("Thread");
      _Init_thread_footer(&DAT_18000c5e0);
    }
    if (DAT_18000c5d8 == (undefined8 *)0x0) {
      if ((*piVar4 < DAT_18000c660) && (_Init_thread_header(&DAT_18000c660), DAT_18000c660 == -1)) {
        FUN_180002040((undefined8 *)&DAT_18000c5f0);
        atexit(FUN_180006560);
        _Init_thread_footer(&DAT_18000c660);
        DAT_18000c5d0 = &DAT_18000c5f0;
      }
      else {
        DAT_18000c5d0 = &DAT_18000c5f0;
      }
    }
    else {
      puVar2 = FUN_180001000();
      plVar3 = (longlong *)
               (**(code **)*DAT_18000c5d8)
                         (DAT_18000c5d8,puVar2,(undefined8 *)*DAT_18000c5d8,in_R9,uVar5);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3);
        iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,0xffffffff);
        if (DAT_18000c5d0 == (undefined *)0x0) {
          if ((*piVar4 < DAT_18000c6e0) &&
             (_Init_thread_header(&DAT_18000c6e0), DAT_18000c6e0 == -1)) {
            FUN_180002040((undefined8 *)&DAT_18000c670);
            atexit(FUN_1800065c0);
            _Init_thread_footer(&DAT_18000c6e0);
          }
          DAT_18000c5d0 = &DAT_18000c670;
          if (-1 < iVar1) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
          }
        }
        (**(code **)(*plVar3 + 0x30))(plVar3);
      }
    }
  }
  return DAT_18000c5d0;
}




ulonglong FUN_180003580(char *param_1,undefined1 *param_2,uint *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  char cVar6;
  
  uVar3 = 0;
  if ((*param_3 != 0) && (param_2 != (undefined1 *)0x0)) {
    *param_2 = 0;
    if (*param_1 == 'c') {
      lVar4 = 6;
    }
    else {
      if (*param_1 != 's') {
        return 0;
      }
      lVar4 = 7;
    }
    pcVar5 = param_1 + lVar4;
    cVar6 = *pcVar5;
    uVar1 = uVar3;
    while (uVar2 = (uint)uVar1, cVar6 != '\0') {
      if (cVar6 == ':') {
        if (*param_3 <= uVar2) {
          return 0;
        }
        pcVar5 = pcVar5 + 1;
        cVar6 = '.';
        uVar3 = (ulonglong)(uVar2 + 1);
      }
      else if (*param_3 <= uVar2) {
        return 0;
      }
      pcVar5 = pcVar5 + 1;
      param_2[uVar1] = cVar6;
      uVar1 = (ulonglong)(uVar2 + 1);
      cVar6 = *pcVar5;
    }
    if (uVar2 < *param_3) {
      param_2[uVar1] = 0;
      *param_3 = uVar2;
      return uVar3;
    }
  }
  return 0;
}




void FUN_180003620(char *param_1)

{
  char cVar1;
  code *pcVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  CHAR local_128;
  char acStack_127 [2];
  CHAR aCStack_125 [269];
  ulonglong local_18;
  
  local_18 = DAT_18000c018 ^ (ulonglong)auStack_148;
  if (param_1 == (char *)0x0) {
LAB_180003715:
    __security_check_cookie(local_18 ^ (ulonglong)auStack_148);
    return;
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    lVar5 = 0;
    do {
      if (0xff < lVar5) goto LAB_180003715;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      (&local_128)[lVar5] = cVar1;
      lVar5 = lVar5 + 1;
    } while (*pcVar4 != '\0');
  }
  if ((ulonglong)((longlong)pcVar4 - (longlong)param_1) < 0x104) {
    (&local_128)[(longlong)pcVar4 - (longlong)param_1] = '.';
    pcVar4[(longlong)(&local_128 + (1 - (longlong)param_1))] = 'm';
    pcVar4[(longlong)(&local_128 + -(longlong)param_1 + 2)] = 'o';
    if (pcVar4 + -(longlong)param_1 + 3 < (char *)0x104) {
      (&local_128)[(longlong)(pcVar4 + -(longlong)param_1 + 3)] = '\0';
      hModule = LoadLibraryA(&local_128);
      if (hModule != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(hModule,"GetModule");
        if (pFVar3 == (FARPROC)0x0) {
          FreeLibrary(hModule);
        }
        else {
          FUN_180002e90(pFVar3,hModule);
        }
      }
      goto LAB_180003715;
    }
  }
  __report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}




void FUN_180003740(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)param_2[1]) {
    do {
      cVar1 = (**(code **)(*(longlong *)*puVar2 + 0x28))((longlong *)*puVar2,param_1,param_3);
      if (cVar1 == '\0') {
        return;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)param_2[1]);
  }
  return;
}




longlong FUN_1800037b0(longlong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  uint local_res10 [2];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  pcVar4 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] != '1') {
    if (DAT_18000c900 == (char *)0x0) {
      local_res10[0] = 0x100;
      DAT_18000c900 = &DAT_18000c800;
      pcVar2 = (char *)__std_type_info_name(0x18000c070,&DAT_18000d460);
      FUN_180003580(pcVar2,DAT_18000c900,local_res10);
    }
    cVar1 = *pcVar4;
    cVar5 = *DAT_18000c900;
    pcVar2 = DAT_18000c900;
    pcVar6 = pcVar4;
    if (cVar1 == cVar5) {
      do {
        if ((cVar1 == '\0') || (cVar5 == '\0')) break;
        cVar1 = pcVar6[1];
        cVar5 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar5);
    }
    if (cVar1 != *pcVar2) {
      if (DAT_18000ca10 == (char *)0x0) {
        local_res10[0] = 0x100;
        DAT_18000ca10 = &DAT_18000c910;
        pcVar2 = (char *)__std_type_info_name(0x18000c098,&DAT_18000d460);
        FUN_180003580(pcVar2,DAT_18000ca10,local_res10);
      }
      cVar1 = *pcVar4;
      cVar5 = *DAT_18000ca10;
      pcVar2 = DAT_18000ca10;
      if (cVar1 == cVar5) {
        do {
          if ((cVar1 == '\0') || (cVar5 == '\0')) break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
          cVar5 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
        } while (cVar1 == cVar5);
      }
      if (cVar1 != *pcVar2) {
        return 0;
      }
      lVar3 = param_1 + 8;
      if (param_1 == 0) {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return param_1;
}




longlong FUN_180003940(longlong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  char cVar11;
  char *pcVar12;
  uint local_res10 [2];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar7 = 0;
  pcVar9 = param_2 + (*param_2 == '*');
  if (param_2[*param_2 == '*'] == '1') {
    return param_1;
  }
  if (DAT_18000cc30 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000cc30 = &DAT_18000cb30;
    pcVar2 = (char *)__std_type_info_name(0x18000c0f0,&DAT_18000d460);
    FUN_180003580(pcVar2,DAT_18000cc30,local_res10);
  }
  cVar1 = *pcVar9;
  cVar11 = *DAT_18000cc30;
  pcVar2 = DAT_18000cc30;
  pcVar3 = pcVar9;
  if (cVar1 == cVar11) {
    do {
      if ((cVar1 == '\0') || (cVar11 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar11 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar11);
  }
  if (cVar1 == *pcVar2) {
    return param_1;
  }
  if (DAT_18000cd40 == (char *)0x0) {
    local_res10[0] = 0x100;
    DAT_18000cd40 = &DAT_18000cc40;
    pcVar2 = (char *)__std_type_info_name(0x18000c118,&DAT_18000d460);
    FUN_180003580(pcVar2,DAT_18000cd40,local_res10);
  }
  cVar1 = *pcVar9;
  cVar11 = *DAT_18000cd40;
  pcVar2 = DAT_18000cd40;
  pcVar3 = pcVar9;
  if (cVar1 == cVar11) {
    do {
      if ((cVar1 == '\0') || (cVar11 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar11 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar11);
  }
  if (cVar1 == *pcVar2) {
    return param_1;
  }
  lVar10 = 7;
  if (DAT_18000c7f0 == (char *)0x0) {
    DAT_18000c7f0 = &DAT_18000c6f0;
    pcVar3 = (char *)__std_type_info_name(0x18000c048,&DAT_18000d460);
    pcVar2 = DAT_18000c7f0;
    if (DAT_18000c7f0 != (char *)0x0) {
      *DAT_18000c7f0 = '\0';
      if (*pcVar3 == 'c') {
        lVar8 = 6;
      }
      else {
        if (*pcVar3 != 's') goto LAB_180003b45;
        lVar8 = 7;
      }
      pcVar12 = pcVar3 + lVar8;
      cVar1 = pcVar3[lVar8];
      uVar6 = uVar7;
      uVar5 = uVar7;
      if (cVar1 != '\0') {
        do {
          uVar4 = (uint)uVar6;
          if (cVar1 == ':') {
            if (0xff < uVar4) goto LAB_180003b45;
            pcVar12 = pcVar12 + 1;
            cVar1 = '.';
          }
          else if (0xff < uVar4) goto LAB_180003b45;
          pcVar12 = pcVar12 + 1;
          uVar5 = (ulonglong)(uVar4 + 1);
          pcVar2[uVar6] = cVar1;
          cVar1 = *pcVar12;
          uVar6 = uVar5;
        } while (cVar1 != '\0');
        if (0xff < uVar4 + 1) goto LAB_180003b45;
      }
      pcVar2[uVar5] = '\0';
    }
  }
LAB_180003b45:
  cVar1 = *pcVar9;
  cVar11 = *DAT_18000c7f0;
  pcVar2 = DAT_18000c7f0;
  pcVar3 = pcVar9;
  if (cVar1 == cVar11) {
    do {
      if ((cVar1 == '\0') || (cVar11 == '\0')) break;
      cVar1 = pcVar3[1];
      cVar11 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar11);
  }
  if (cVar1 == *pcVar2) {
    if (param_1 == 0) {
      return 0;
    }
    return param_1 + 8;
  }
  if (DAT_18000ca10 == (char *)0x0) {
    DAT_18000ca10 = &DAT_18000c910;
    pcVar2 = (char *)__std_type_info_name(0x18000c098,&DAT_18000d460);
    pcVar3 = DAT_18000ca10;
    if (DAT_18000ca10 != (char *)0x0) {
      *DAT_18000ca10 = '\0';
      if (*pcVar2 == 'c') {
        lVar10 = 6;
      }
      else if (*pcVar2 != 's') goto LAB_180003c3a;
      cVar1 = pcVar2[lVar10];
      pcVar2 = pcVar2 + lVar10;
      uVar6 = uVar7;
      if (cVar1 != '\0') {
        do {
          uVar4 = (uint)uVar6;
          if (cVar1 == ':') {
            if (0xff < uVar4) goto LAB_180003c3a;
            pcVar2 = pcVar2 + 1;
            cVar1 = '.';
          }
          else if (0xff < uVar4) goto LAB_180003c3a;
          pcVar2 = pcVar2 + 1;
          uVar7 = (ulonglong)(uVar4 + 1);
          pcVar3[uVar6] = cVar1;
          cVar1 = *pcVar2;
          uVar6 = uVar7;
        } while (cVar1 != '\0');
        if (0xff < uVar4 + 1) goto LAB_180003c3a;
      }
      pcVar3[uVar7] = '\0';
    }
  }
LAB_180003c3a:
  cVar1 = *pcVar9;
  cVar11 = *DAT_18000ca10;
  pcVar2 = DAT_18000ca10;
  if (cVar1 == cVar11) {
    do {
      if ((cVar1 == '\0') || (cVar11 == '\0')) break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 1;
      cVar11 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 == cVar11);
  }
  if (cVar1 != *pcVar2) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  return param_1 + 0x10;
}




int FUN_180003ca0(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x5c);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)((longlong)param_1 + 0x5c);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  FUN_1800025a0((longlong *)((longlong)param_1 + 0x30));
  FUN_1800025a0((longlong *)((longlong)param_1 + 0x18));
  free(param_1);
  return iVar2;
}




void FUN_180003d20(longlong param_1)

{
  FUN_180003ca0((void *)(param_1 + -8));
  return;
}




void FUN_180003d2c(longlong param_1)

{
  FUN_180003ca0((void *)(param_1 + -0x10));
  return;
}




int FUN_180003d40(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x144);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar2 = *(int *)((longlong)param_1 + 0x144);
  if (*piVar1 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  _eh_vector_destructor_iterator_((void *)((longlong)param_1 + 0x48),0x18,10,FUN_180002530);
  FUN_1800025a0((longlong *)((longlong)param_1 + 0x28));
  FUN_1800025a0((longlong *)((longlong)param_1 + 0x10));
  free(param_1);
  return iVar2;
}




void FUN_180003de0(longlong param_1)

{
  FUN_180003d40((void *)(param_1 + -8));
  return;
}




/* public: unsigned long __cdecl IObject::Release(void)const __ptr64 */

ulong __thiscall IObject::Release(IObject *this)

{
  ulong uVar1;
  
                    /* 0x3df0  9  ?Release@IObject@@QEBAKXZ */
                    /* WARNING: Could not recover jumptable at 0x000180003df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 8))();
  return uVar1;
}




void FUN_180003e00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != plVar2) {
    do {
      if (*plVar1 == param_2) break;
      plVar1 = plVar1 + 1;
    } while (plVar1 != plVar2);
    if (plVar1 != plVar2) {
      FUN_180004500(param_1 + 8,&local_res8,plVar1);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 == param_2) break;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    if (plVar2 != plVar1) {
      FUN_180004500(param_1 + 0x20,&local_res8,plVar2);
    }
  }
  return;
}




void FUN_180003e80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x40) = param_2;
    FUN_180003740(param_1,(longlong *)(param_1 + 0x10),param_2);
    if (DAT_18000c470 != 0) {
      FUN_180003740(param_1,(longlong *)(DAT_18000c470 + 8),param_2);
    }
    if ((lVar1 != 0) &&
       (FUN_180003740(param_1,(longlong *)(param_1 + 0x28),lVar1), DAT_18000c470 != 0)) {
      FUN_180003740(param_1,(longlong *)(DAT_18000c470 + 0x20),lVar1);
    }
  }
  return;
}




void FUN_180003f10(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x58);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  return;
}




void FUN_180003f50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x58);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}




void FUN_180003f90(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 8))();
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return;
}




void FUN_180003fe0(undefined8 param_1,void *param_2)

{
  FUN_180004130((longlong *)((longlong)param_2 + 0x40));
  FUN_180002460((longlong *)((longlong)param_2 + 0x20));
  free(param_2);
  return;
}




void FUN_180004030(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180004030(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_180004130(param_2 + 8);
    FUN_180002460(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}




void FUN_1800040c0(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_1800040d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_180004130(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 8))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar2);
      plVar1 = (longlong *)*param_1;
    }
    plVar2 = plVar1;
    if ((0xfff < (param_1[2] - (longlong)plVar1 & 0xfffffffffffffff8U)) &&
       (plVar2 = (longlong *)plVar1[-1],
       0x1f < (ulonglong)((longlong)plVar1 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_1800041e0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_180004200(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




longlong * FUN_180004220(longlong *param_1,void *param_2,size_t param_3)

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
  
  uVar1 = param_1[3];
  if (uVar1 < param_3) {
    if (0x7fffffffffffffff < param_3) {
      FUN_1800041e0();
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
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = operator_new(uVar5);
      }
    }
    else {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar5) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar3 = operator_new(uVar6);
      if (pvVar3 == (void *)0x0) goto LAB_180004363;
      _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst - 8) = pvVar3;
    }
    param_1[2] = param_3;
    param_1[3] = uVar7;
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    if (0xf < uVar1) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
LAB_180004363:
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
    param_1[2] = param_3;
    memmove(plVar4,param_2,param_3);
    *(undefined1 *)((longlong)plVar4 + param_3) = 0;
  }
  return param_1;
}




void FUN_180004370(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180004030(param_1,*(longlong **)(lVar1 + 8),param_3,param_4);
  *(longlong *)(*param_1 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}




uint FUN_1800043c0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *_Buf1;
  ulonglong _Size;
  undefined8 *_Buf2;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  uVar3 = memcmp(_Buf1,_Buf2,_Size);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 0xffffffff;
    }
    uVar3 = (uint)(uVar1 < uVar2);
  }
  return uVar3;
}




void FUN_180004430(undefined8 param_1,void *param_2,ulonglong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < param_3) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




void FUN_180004470(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x58)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 8)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}




undefined8 * FUN_180004500(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar3 = *(longlong **)(param_1 + 8);
  plVar1 = param_3 + 1;
  uVar5 = 0;
  uVar6 = (ulonglong)((longlong)plVar3 + (7 - (longlong)plVar1)) >> 3;
  if (plVar3 < plVar1) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    plVar3 = param_3;
    do {
      plVar2 = *(longlong **)(((longlong)plVar1 - (longlong)param_3) + (longlong)plVar3);
      plVar4 = (longlong *)*plVar3;
      if (plVar4 != plVar2) {
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          plVar4 = (longlong *)*plVar3;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        *plVar3 = (longlong)plVar2;
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
    plVar3 = *(longlong **)(param_1 + 8);
  }
  if ((longlong *)plVar3[-1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar3[-1] + 8))();
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -8;
  *param_2 = param_3;
  return param_2;
}




void GetModule(undefined8 param_1)

{
  DAT_18000c478 = param_1;
                    /* 0x45e0  10  GetModule */
  FUN_180003370();
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector constructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64),void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_constructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4,
          _func_void_void_ptr *param_5)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    (*param_4)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2017 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
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
    FUN_18000579c();
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  FUN_18000577c();
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
LAB_1800047a6:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_18000ce60 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_18000ce60;
        pvVar1 = DAT_18000ce60;
      }
      DAT_18000ce60 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_1800047a6;
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
    uVar3 = FUN_180005954();
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
  
  uVar1 = FUN_180004930(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  char cVar1;
  
  cVar1 = FUN_180005ce8();
  if (cVar1 != '\0') {
    cVar1 = FUN_180005ce8();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180005ce8();
  }
  return 0;
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_detach
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_dllmain_crt_thread_detach(void)

{
  FUN_180005ce8();
  FUN_180005ce8();
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
    _execute_onexit_table(&DAT_18000ce70);
    return;
  }
  uVar2 = FUN_180002e60();
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
  FUN_180005ce8();
  FUN_180005ce8();
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
    DAT_18000ce68 = 1;
  }
  __isa_available_init();
  cVar1 = FUN_180005ce8();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_180005ce8();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_180005ce8();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180004930(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_18000ce69 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18000c018 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18000c018;
      _DAT_18000ce70 = in_RAX;
      uRam000000018000ce78 = in_RAX;
      _DAT_18000ce80 = in_RAX;
      _DAT_18000ce88 = in_RAX;
      uRam000000018000ce90 = in_RAX;
      _DAT_18000ce98 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_18000ce70);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_18000ce88), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_18000ce69 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* WARNING: Removing unreachable block (ram,0x000180004a96) */
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
  for (pIVar3 = &IMAGE_SECTION_HEADER_180000208; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_1800002f8;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < uVar1)) goto LAB_180004a7f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_180004a7f:
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
    DAT_18000ce60 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2017 Release */

undefined1 __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_18000ce68 == '\0') || (param_2 == '\0')) {
    FUN_180005ce8();
    FUN_180005ce8();
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
  
  bVar2 = (byte)DAT_18000c018 & 0x3f;
  if (((DAT_18000c018 ^ _DAT_18000ce70) >> bVar2 | (DAT_18000c018 ^ _DAT_18000ce70) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_18000ce70,_Func);
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
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180004b89. Too many branches */
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
  *(undefined8 *)(puVar3 + -8) = 0x180004bba;
  capture_previous_context((PCONTEXT)&DAT_18000cf40);
  _DAT_18000ceb0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_18000cfd8 = puVar3 + 0x40;
  _DAT_18000cfc0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_18000cea0 = 0xc0000409;
  _DAT_18000cea4 = 1;
  _DAT_18000ceb8 = 1;
  DAT_18000cec0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_18000c018;
  *(undefined8 *)(puVar3 + 0x28) = DAT_18000c010;
  *(undefined8 *)(puVar3 + -8) = 0x180004c5c;
  DAT_18000d038 = _DAT_18000ceb0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180008180);
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
  *(undefined8 *)(puVar3 + -8) = 0x180004ca2;
  capture_current_context((PCONTEXT)&DAT_18000cf40);
  _DAT_18000ceb0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_18000cfd8 = puVar3 + 0x30;
  _DAT_18000cea0 = 0xc0000409;
  _DAT_18000cea4 = 1;
  _DAT_18000ceb8 = 1;
  DAT_18000cec0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180004d0e;
  DAT_18000d038 = _DAT_18000ceb0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180008180);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 FUN_180004df8(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_18000d410,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_180004f4a;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_18000d440 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_18000d440 != (HANDLE)0x0) goto LAB_180004ee8;
  }
  else {
    DAT_18000d440 = (HANDLE)0x0;
    (*pFVar3)(&DAT_18000d438);
    bVar7 = 0x40 - ((byte)DAT_18000c018 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_18000d448 = DAT_18000c018 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_18000d450 = DAT_18000c018 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_180004ee8:
    uVar6 = FUN_180004930(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_180004f58);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_180004f4a:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}




void FUN_180004f58(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
  if (DAT_18000d440 != (HANDLE)0x0) {
    CloseHandle(DAT_18000d440);
  }
  return;
}




/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
  uVar1 = (ulonglong)_tls_index;
  DAT_18000c008 = DAT_18000c008 + 1;
  *param_1 = DAT_18000c008;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18000c008;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
  _Init_thread_notify();
  return;
}




/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_180005064:
                    /* WARNING: Could not recover jumptable at 0x000180005070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18000c008;
      goto LAB_180005064;
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
  
  if (DAT_18000d440 != (HANDLE)0x0) {
    SetEvent(DAT_18000d440);
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_18000d440);
    return;
  }
  bVar1 = (byte)DAT_18000c018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180005d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000c018 ^ _DAT_18000d450) >> bVar1 |
            (DAT_18000c018 ^ _DAT_18000d450) << 0x40 - bVar1))(&DAT_18000d438);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_18000d440 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
    WaitForSingleObjectEx(DAT_18000d440,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180005138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_18000d410);
    return;
  }
  bVar1 = (byte)DAT_18000c018 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180005d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18000c018 ^ _DAT_18000d448) >> bVar1 |
            (DAT_18000c018 ^ _DAT_18000d448) << 0x40 - bVar1))
            (&DAT_18000d438,&DAT_18000d410,param_1);
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
  if ((_StackCookie == DAT_18000c018) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




void FUN_180005274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000527b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_18000d460);
  return;
}




void FUN_180005284(void)

{
  __std_type_info_destroy_list(&DAT_18000d460);
  return;
}




undefined8 * FUN_180005290(undefined8 *param_1,ulonglong param_2)

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
    if (DAT_18000d474 < 1) {
      uVar7 = 0;
    }
    else {
      DAT_18000d474 = DAT_18000d474 + -1;
      uVar8 = __scrt_acquire_startup_lock();
      if (DAT_18000ce58 != 2) {
        __scrt_fastfail(7);
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      __scrt_dllmain_uninitialize_c();
      FUN_180005284();
      FID_conflict__RTC_Initialize();
      DAT_18000ce58 = 0;
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
    if (DAT_18000ce58 != 0) {
      __scrt_fastfail(7);
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
    DAT_18000ce58 = 1;
    bVar4 = __scrt_dllmain_before_initialize_c();
    if (bVar4) {
      FID_conflict__RTC_Initialize();
      FUN_180005274();
      __scrt_initialize_default_local_stdio_options();
      iVar6 = _initterm_e(&DAT_180007210,&DAT_180007220);
      if ((iVar6 == 0) && (uVar9 = __scrt_dllmain_after_initialize_c(), (char)uVar9 != '\0')) {
        _initterm(&DAT_180007200,&DAT_180007208);
        DAT_18000ce58 = 2;
        bVar2 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar8);
    if (!bVar2) {
      plVar10 = (longlong *)FUN_180005bb8();
      if ((*plVar10 != 0) &&
         (uVar11 = __scrt_is_nonwritable_in_current_image((longlong)plVar10), (char)uVar11 != '\0'))
      {
        (*(code *)*plVar10)(param_1,2,param_3,_guard_dispatch_icall);
      }
      DAT_18000d474 = DAT_18000d474 + 1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x00018000557c) */
/* WARNING: Removing unreachable block (ram,0x00018000550b) */
/* WARNING: Removing unreachable block (ram,0x0001800055bf) */
/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2017 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (DAT_18000d474 < 1)) {
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




undefined8 * FUN_18000562c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000566c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_18000568c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800056cc(undefined8 *param_1)

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




undefined8 * FUN_180005738(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}




void FUN_18000577c(void)

{
  undefined8 local_28 [5];
  
  FUN_18000566c(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000ac10);
}




void FUN_18000579c(void)

{
  undefined8 local_28 [5];
  
  FUN_1800056cc(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_18000ac98);
}




char * FUN_1800057bc(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(longlong *)(param_1 + 8) != 0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




/* WARNING: Removing unreachable block (ram,0x0001800058a6) */
/* WARNING: Removing unreachable block (ram,0x000180005824) */
/* WARNING: Removing unreachable block (ram,0x0001800057ff) */
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
  
  DAT_18000c024 = 2;
  _DAT_18000c020 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_18000c028 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18000d478 = DAT_18000d478 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18000d478 = DAT_18000d478 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_18000c020 = 2;
    DAT_18000c024 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_18000c024 = 0xe;
      _DAT_18000c020 = 3;
      if ((uVar6 & 0x20) != 0) {
        _DAT_18000c020 = 5;
        DAT_18000c024 = 0x2e;
      }
    }
  }
  return 0;
}




undefined8 FUN_180005954(void)

{
  return 1;
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_18000c030 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180005968(void)

{
  _DAT_18000d47c = 0;
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
  *(undefined8 *)(puVar4 + -8) = 0x1800059a3;
  FUN_180005968();
  *(undefined8 *)(puVar4 + -8) = 0x1800059b4;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800059be;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x1800059d8;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180005a19;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180005a4b;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180005a6d;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x180005a8e;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x180005a99;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x180005aa9;
    FUN_180005968();
  }
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
  
  if (DAT_18000c018 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_18000c018 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_18000c018 == 0x2b992ddfa232) {
      DAT_18000c018 = 0x2b992ddfa233;
    }
  }
  DAT_18000c010 = ~DAT_18000c018;
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




undefined * FUN_180005b8c(void)

{
  return &DAT_18000d480;
}




undefined * FUN_180005b94(void)

{
  return &DAT_18000d488;
}




/* Library Function - Single Match
    __scrt_initialize_default_local_stdio_options
   
   Library: Visual Studio 2017 Release */

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180005b8c();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_180005b94();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180005bb8(void)

{
  return &DAT_18000d490;
}




/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180009780; puVar1 < &DAT_180009780; puVar1 = puVar1 + 1) {
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
  
  for (puVar1 = &DAT_180009790; puVar1 < &DAT_180009790; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




undefined1 FUN_180005ce8(void)

{
  return 1;
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180005d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void Catch_180005d10(undefined8 param_1,longlong param_2)

{
  FUN_1800040c0(*(undefined8 *)(param_2 + 0x50),*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180005d40(undefined8 param_1,longlong param_2)

{
  FUN_180002500(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180005d50(undefined8 param_1,longlong param_2)

{
  FUN_180002460(*(longlong **)(param_2 + 0x30));
  return;
}




void Unwind_180005d60(undefined8 param_1,longlong param_2)

{
  FUN_180002650((longlong *)(*(longlong *)(param_2 + 0x30) + 0x20));
  return;
}




void Catch_180005d70(undefined8 param_1,longlong param_2)

{
  FUN_180003f90(*(undefined8 *)(param_2 + 0x90),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x90),*(void **)(param_2 + 0x98),
             *(longlong *)(param_2 + 0xa8));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180005dc0(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180005dd0(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x90));
  return;
}




void Catch_180005de0(undefined8 param_1,longlong param_2)

{
  FUN_180003f90(*(undefined8 *)(param_2 + 0x80),*(longlong **)(param_2 + 0x20),
                *(longlong **)(param_2 + 0x30));
  deallocate(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0x88),
             *(longlong *)(param_2 + 0x98));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180005e30(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x80));
  return;
}




void Catch_180005e40(undefined8 param_1,longlong param_2)

{
  FUN_180003fe0(*(undefined8 *)(param_2 + 0x70),*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180005e70(undefined8 param_1,longlong param_2)

{
  FUN_180003fe0(*(undefined8 *)(param_2 + 0x80),*(void **)(param_2 + 0xa0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180005ea0(undefined8 param_1,longlong param_2)

{
  FUN_180002460(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_180005eb0(undefined8 param_1,longlong param_2)

{
  FUN_180002650((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Catch_180005ec0(undefined8 param_1,IObject *param_2)

{
  IObject *pIVar1;
  
  pIVar1 = IObject::operator=(*(IObject **)(param_2 + 0x60),param_2);
  FUN_180004430(pIVar1,*(void **)(param_2 + 0x68),*(ulonglong *)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_180005f00(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_180005f10(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_180005f20(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_180005f30(undefined8 param_1,longlong param_2)

{
  FUN_180002670(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180005f40(undefined8 param_1,longlong param_2)

{
  FUN_180002710(*(longlong *)(param_2 + 0x50) + 8);
  return;
}




void Unwind_180005f50(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0x50) + 0x48),0x18,10,FUN_180002530);
  return;
}




void Unwind_180005f80(undefined8 param_1,longlong param_2)

{
  FUN_1800025a0((longlong *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_180005f90(undefined8 param_1,longlong param_2)

{
  FUN_1800025a0((longlong *)(*(longlong *)(param_2 + 0x58) + 0x20));
  return;
}




void Unwind_180005fa0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002270(*(longlong *)(param_2 + 0x50),param_2,param_3,param_4);
  return;
}




void Unwind_180005fb0(undefined8 param_1,longlong param_2)

{
  FUN_1800022e0(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180005fc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800024d0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_180005fd0(undefined8 param_1,longlong param_2)

{
  FUN_180002230(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180005fe0(undefined8 param_1,longlong param_2)

{
  FUN_1800026d0(*(longlong *)(param_2 + 0x50));
  return;
}




void Unwind_180005ff0(undefined8 param_1,longlong param_2)

{
  FUN_180002710(*(longlong *)(param_2 + 0x50) + 0x10);
  return;
}




void Unwind_180006000(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800023c0(*(longlong **)(param_2 + 0x58),param_2,param_3,param_4);
  return;
}




void Unwind_180006010(undefined8 param_1,longlong param_2)

{
  FUN_1800023f0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_180006020(undefined8 param_1,longlong param_2)

{
  FUN_1800026d0(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180006030(undefined8 param_1,longlong param_2)

{
  FUN_180002710(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_180006040(undefined8 param_1,longlong param_2)

{
  FUN_1800025a0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_180006050(undefined8 param_1,longlong param_2)

{
  FUN_1800025a0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_180006060(undefined8 param_1,longlong param_2)

{
  FUN_1800022e0(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_180006070(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800024d0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x60),param_2,param_3,param_4);
  return;
}




void Unwind_180006080(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800023c0(*(longlong **)(param_2 + 0x48),param_2,param_3,param_4);
  return;
}




void Unwind_180006090(undefined8 param_1,longlong param_2)

{
  FUN_1800023f0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1800060a0(undefined8 param_1,longlong param_2)

{
  FUN_180002230(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1800060b0(undefined8 param_1,longlong param_2)

{
  FUN_180002670(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1800060c0(undefined8 param_1,longlong param_2)

{
  FUN_180002710(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_1800060d0(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_
            ((void *)(*(longlong *)(param_2 + 0x40) + 0x48),0x18,10,FUN_180002530);
  return;
}




void Unwind_180006100(undefined8 param_1,longlong param_2)

{
  FUN_1800023f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_180006110(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800023c0(*(longlong **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_180006120(void)

{
  FUN_180002320(0x18000c480);
  return;
}




void Unwind_180006130(void)

{
  FUN_180002670(0x18000c480);
  return;
}




void Unwind_180006140(void)

{
  FUN_180002710(0x18000c488);
  return;
}




void Unwind_180006150(void)

{
  _eh_vector_destructor_iterator_(&DAT_18000c4c8,0x18,10,FUN_180002530);
  return;
}




void Unwind_180006190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002270(0x18000c5f0,param_2,param_3,param_4);
  return;
}




void Unwind_1800061a0(void)

{
  FUN_1800022e0(0x18000c5f0);
  return;
}




void Unwind_1800061b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800024d0(&DAT_18000c650,param_2,param_3,param_4);
  return;
}




void Unwind_1800061c0(void)

{
  FUN_180002230(0x18000c5f0);
  return;
}




void Unwind_1800061d0(void)

{
  FUN_1800026d0(0x18000c5f0);
  return;
}




void Unwind_1800061e0(void)

{
  FUN_180002710(0x18000c600);
  return;
}




void Unwind_1800061f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180002270(0x18000c670,param_2,param_3,param_4);
  return;
}




void Unwind_180006200(void)

{
  FUN_1800022e0(0x18000c670);
  return;
}




void Unwind_180006210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800024d0(&DAT_18000c6d0,param_2,param_3,param_4);
  return;
}




void Unwind_180006220(void)

{
  FUN_180002230(0x18000c670);
  return;
}




void Unwind_180006230(void)

{
  FUN_1800026d0(0x18000c670);
  return;
}




void Unwind_180006240(void)

{
  FUN_180002710(0x18000c680);
  return;
}




void Unwind_180006250(undefined8 param_1,longlong param_2)

{
  FUN_180002380((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180006260(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0((longlong *)(param_2 + 0x58));
  return;
}




void Unwind_180006270(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0(*(longlong **)(param_2 + 0x28));
  return;
}




void Unwind_180006280(undefined8 param_1,longlong param_2)

{
  FUN_180002460((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_180006290(undefined8 param_1,longlong param_2)

{
  FUN_180002650((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1800062a0(undefined8 param_1,longlong param_2)

{
  FUN_180002380((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800062b0(undefined8 param_1,longlong param_2)

{
  FUN_1800023b0((longlong *)(param_2 + 0x30));
  return;
}




undefined8 Catch_1800062c0(void)

{
  return 0x180002eac;
}




void Unwind_1800062e0(undefined8 param_1,longlong param_2)

{
  FUN_180002460((longlong *)(param_2 + 0x30));
  return;
}




void Unwind_1800062f0(void)

{
  _Init_thread_abort(&DAT_18000c5c8);
  return;
}




void Unwind_180006300(undefined8 param_1,longlong param_2)

{
  free(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_180006320(void)

{
  _Init_thread_abort(&DAT_18000c5e0);
  return;
}




void Unwind_180006330(void)

{
  _Init_thread_abort(&DAT_18000c660);
  return;
}




void Unwind_180006340(undefined8 param_1,longlong param_2)

{
  FUN_180002740((undefined8 *)(param_2 + 0x28));
  return;
}




void Unwind_180006350(void)

{
  _Init_thread_abort(&DAT_18000c6e0);
  return;
}




void Catch_180006360(undefined8 param_1,longlong param_2)

{
  FUN_180004470(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_180006390(undefined8 param_1,longlong param_2)

{
  FUN_180004470(*(undefined8 *)(param_2 + 0x40),*(void **)(param_2 + 0x48),1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1800063c0(undefined8 param_1,longlong param_2)

{
  FUN_180002460(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_1800063d0(undefined8 param_1,longlong param_2)

{
  FUN_180002650((longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void FUN_18000640c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),
                  *(__uint64 *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}




/* Library Function - Single Match
    int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void *
   __ptr64))'::`1'::filt$0
   
   Library: Visual Studio 2005 Release */

undefined4
`void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::
__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x38) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




void FUN_180006491(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_1800064a8(undefined8 param_1,longlong param_2)

{
  __scrt_dllmain_uninitialize_critical();
  __scrt_release_startup_lock(*(char *)(param_2 + 0x38));
  return;
}




void FUN_1800064c4(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),dllmain_crt_dispatch,*(undefined4 *)*param_1,param_1);
  return;
}




void FUN_180006500(void)

{
  _eh_vector_destructor_iterator_(&DAT_18000c4c8,0x18,10,FUN_180002530);
  FUN_1800025a0((longlong *)&DAT_18000c4a8);
  FUN_1800025a0((longlong *)&DAT_18000c490);
  return;
}




void FUN_180006560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004370((longlong *)&DAT_18000c650,param_2,param_3,param_4);
  free(DAT_18000c650);
  FUN_1800025a0((longlong *)&DAT_18000c620);
  FUN_1800025a0((longlong *)&DAT_18000c608);
  return;
}




void FUN_1800065c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180004370((longlong *)&DAT_18000c6d0,param_2,param_3,param_4);
  free(DAT_18000c6d0);
  FUN_1800025a0((longlong *)&DAT_18000c6a0);
  FUN_1800025a0((longlong *)&DAT_18000c688);
  return;
}



